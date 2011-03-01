/* zxiddi.c  -  Discovery Server
 * Copyright (c) 2010-2011 Sampo Kellomaki (sampo@iki.fi), All Rights Reserved.
 * Copyright (c) 2009 Symlabs (symlabs@symlabs.com), All Rights Reserved.
 * Author: Sampo Kellomaki (sampo@iki.fi)
 * This is confidential unpublished proprietary source code of the author.
 * NO WARRANTY, not even implied warranties. Contains trade secrets.
 * Distribution prohibited unless authorized in writing.
 * Licensed under Apache License 2.0, see file COPYING.
 * $Id: zxiddi.c,v 1.2 2009-11-24 23:53:40 sampo Exp $
 *
 * 15.11.2009, created --Sampo
 * 10.1.2011,  added TrustPDP and CPN support --Sampo
 *
 * See also zxidepr.c for discovery client code.
 *
 *   zxcot -e http://idp.tas3.pt:8081/zxididp?o=S 'Discovery Svc' \
 *     http://idp.tas3.pt:8081/zxididp?o=B urn:liberty:disco:2006-08 \
 *   | zxcot -bs /var/zxid/idpdimd
 */

#include "platform.h"  /* for dirent.h */
#include "errmac.h"
#include "zxid.h"
#include "zxidpriv.h"
#include "zxidutil.h"
#include "zxidconf.h"
#include "saml2.h"
#include "tas3.h"
#include "wsf.h"
#include "c/zx-const.h"
#include "c/zx-ns.h"
#include "c/zx-data.h"

/*() Recover end user's identity: uid at IdP. This is actually done via "self federation"
 * that was created when token for accessing discovery was issued.
 * Returns 1 on success, 0 on failure. */

/* Called by:  zxid_di_query, zxid_imreq, zxid_ps_addent_invite, zxid_ps_resolv_id, zxid_ssos_anreq */
int zxid_idp_map_nid2uid(zxid_conf* cf, int len, char* uid, zxid_nid* nameid, struct zx_lu_Status_s** stp)
{
  struct zx_str* affil;
  char sp_name_buf[1024];
  if (!nameid) {
    ERR("Missing nameid %d",0);
    return 0;
  }

  affil = nameid->SPNameQualifier ? &nameid->SPNameQualifier->g : zxid_my_ent_id(cf);
  zxid_nice_sha1(cf, sp_name_buf, sizeof(sp_name_buf), affil, affil, 7);
  len = read_all(len-1, uid, "idp_map_nid2uid", 1, "%s" ZXID_NID_DIR "%s/%.*s", cf->path, sp_name_buf, ZX_GET_CONTENT_LEN(nameid), ZX_GET_CONTENT_S(nameid));
  if (!len) {
    ERR("Can not find reverse mapping for SP,SHA1(%s) nid(%.*s)", sp_name_buf, ZX_GET_CONTENT_LEN(nameid), ZX_GET_CONTENT_S(nameid));
    if (stp)
      *stp = zxid_mk_lu_Status(cf, 0, "Fail", 0, 0, 0);
    return 0;
  }
  return 1;
}

/*() Server side Discovery Service Query processing. See also zxid_gen_bootstraps() */

/* Called by:  zxid_sp_soap_dispatch */
struct zx_di_QueryResponse_s* zxid_di_query(zxid_conf* cf,zxid_ses* ses,struct zx_di_Query_s* req)
{
  struct zx_di_RequestedService_s* rs;
  struct zx_di_QueryResponse_s* resp = zx_NEW_di_QueryResponse(cf->ctx,0);
  struct zx_root_s* r;
  int len, epr_len, match, n_discovered = 0;
  char logop[8];
  char uid[ZXID_MAX_USER];
  char mdpath[ZXID_MAX_BUF];
  char path[ZXID_MAX_BUF];
  char* epr_buf;
  char* p;
  char* start;
  char* lim;
  DIR* dir;
  struct dirent* de;
  struct zx_elem_s* el;
  struct zx_a_Metadata_s* md = 0;  
  struct zx_str* ss;
  struct zx_str* svctyp;
  struct zx_str* prvid;
  struct zx_str* addr = 0;  
  zxid_epr* epr = 0;
  D_INDENT("di_query: ");
  ses->uid = uid;
  
  if (!zxid_idp_map_nid2uid(cf, sizeof(uid), uid, ses->tgtnameid, &resp->Status)) {
    D_DEDENT("di_query: ");
    return resp;
  }
  name_from_path(mdpath, sizeof(mdpath), "%sdimd", cf->path);

  /* Work through all requests */

  for (rs = req->RequestedService; rs; rs = (struct zx_di_RequestedService_s*)ZX_NEXT(rs)) {
    if (rs->gg.g.tok != zx_di_RequestedService_ELEM)
      continue;

    /* Look for all entities providing service */

    if (ZX_SIMPLE_ELEM_CHK(rs->ServiceType)) {
      /* *** proper handling of discovering simultaneously multiple service types? */
    } else {
      D("%d: No specific service type given. Looking for all. %p", n_discovered, rs->ServiceType);
      len = 0;
      path[0] = 0;
    }

    D("%d: Looking for service metadata in dir(%s)", n_discovered, mdpath);
    dir = opendir(mdpath);
    if (!dir) {
      perror("opendir to find service metadata");
      ERR("Opening service metadata directory failed path(%s)", mdpath);
      resp->Status = zxid_mk_lu_Status(cf, &resp->gg, "Fail", 0, 0, 0);
      D_DEDENT("di_query: ");
      return resp;
    }
    
    /* Work through all available providers, filtering out insuitable ones. */
    
    while (de = readdir(dir)) {
      D("%d: Considering file(%s)", n_discovered, de->d_name);

      if (de->d_name[strlen(de->d_name)-1] == '~')  /* Ignore backups from hand edited EPRs. */
	continue;
      
      /* Filter file name by service type */
      
      for (el = rs->ServiceType; el; el = (struct zx_elem_s*)el->g.n) {
	if (el->g.tok != zx_di_ServiceType_ELEM)
	  continue;
	ss = ZX_GET_CONTENT(el);
	if (!ss || !ss->len)
	  continue;
	len = MIN(ss->len, sizeof(path)-1);
	memcpy(path, ss->s, len);
	path[len] = 0;
	zxid_fold_svc(path, len);
	if (memcmp(de->d_name, path, len) || de->d_name[len] != ',') {
	  D("%d:     rejected due to prefix(%s) file(%s)", n_discovered, path, de->d_name);
	  goto next_file;
	}
      }
      
      /* Probable enough, read and parse EPR so we can continue examination. */

      epr_buf = read_all_alloc(cf->ctx, "find_svcmd", 1, &epr_len, "%s/%s", mdpath, de->d_name);
      if (!epr_buf)
	continue;
      
      r = zx_dec_zx_root(cf->ctx, epr_len, epr_buf, "diq epr");
      if (!r) {
	ERR("Failed to XML parse epr_buf(%.*s) file(%s)", epr_len, epr_buf, de->d_name);
	ZX_FREE(cf->ctx, epr_buf);
	continue;
      }
      /* *** add ID-WSF 1.1 handling */
      epr = r->EndpointReference;
      ZX_FREE(cf->ctx, r);
      if (!epr || !epr->Metadata) {
	ERR("No EPR or missing <Metadata>. epr_buf(%.*s) file(%s)", epr_len, epr_buf, de->d_name);
	ZX_FREE(cf->ctx, epr_buf);
	continue;
      }
      if (!ZX_SIMPLE_ELEM_CHK(epr->Address)) {
	ERR("EPR missing <Address>. epr_buf(%.*s) file(%s)", epr_len, epr_buf, de->d_name);
	ZX_FREE(cf->ctx, epr_buf);
	continue;
      }
      addr = ZX_GET_CONTENT(epr->Address);
      md = epr->Metadata;
      svctyp = ZX_GET_CONTENT(md->ServiceType);
      prvid = ZX_GET_CONTENT(md->ProviderID);

      /* Filter by service type */
      
      match = 1;
      for (el = rs->ServiceType; el; el = (struct zx_elem_s*)el->g.n) {
	if (el->g.tok != zx_di_ServiceType_ELEM)
	  continue;
	ss = ZX_GET_CONTENT(el);
	if (!ss || !ss->len)
	  continue;
	match = 0;
	if (!svctyp || !svctyp->len) {
	  INFO("EPR missing ServiceType. Rejected. epr_buf(%.*s) file(%s)", epr_len, epr_buf, de->d_name);
	  ZX_FREE(cf->ctx, epr_buf);
	  goto next_file;
	}
	if (ss->len != svctyp->len || memcmp(ss->s, svctyp->s, ss->len)) {
	  D("%d: Internal svctype(%.*s) does not match desired(%.*s)", n_discovered, svctyp->len, svctyp->s, ss->len, ss->s);
	  continue;
	}
	D("%d: ServiceType matches. file(%s)", n_discovered, de->d_name);
	match = 1;
	break;
      }
      if (!match) {
	  D("%d: Rejected due to ServiceType. file(%s)", n_discovered, de->d_name);
	  ZX_FREE(cf->ctx, epr_buf);
	  goto next_file;
      }

      /* Filter by provider id */
      
      for (el = rs->ProviderID; el; el = (struct zx_elem_s*)el->g.n) {
	if (el->g.tok != zx_di_ProviderID_ELEM)
	  continue;
	ss = ZX_GET_CONTENT(el);
	if (!ss || !ss->len)
	  continue;
	match = 0;
	if (!prvid || !prvid->len) {
	  INFO("EPR missing ProviderID. epr_buf(%.*s) file(%s)", epr_len, epr_buf, de->d_name);
	  break;
	}
	if (ss->len != prvid->len || memcmp(ss->s, prvid->s, ss->len)) {
	  D("%d: ProviderID(%.*s) does not match desired(%.*s)", n_discovered, prvid->len, prvid->s, ss->len, ss->s);
	  continue;
	}
	D("%d: ProviderID matches. file(%s)", n_discovered, de->d_name);
	match = 1;
	break;
      }
#if 1
      /* TAS3 extension: allow matching by the Address (URL) as well */
      if (!match) {
	for (el = rs->ProviderID; el; el = (struct zx_elem_s*)el->g.n) {
	  if (el->g.tok != zx_di_ProviderID_ELEM)
	    continue;
	  ss = ZX_GET_CONTENT(el);
	  if (!ss || !ss->len)
	    continue;
	  match = 0;
	  if (ss->len != addr->len || memcmp(ss->s, addr->s, ss->len)) {
	    D("%d: Address(%.*s) does not match desired(%.*s)", n_discovered, addr->len, addr->s, ss->len, ss->s);
	    continue;
	  }
	  D("%d: Address matches. file(%s)", n_discovered, de->d_name);
	  match = 1;
	  break;
	}
      }
#endif
      if (!match) {
	D("%d: Rejected due to ProviderID. file(%s)", n_discovered, de->d_name);
	ZX_FREE(cf->ctx, epr_buf);
	goto next_file;
      }
      
      /* Check Options, in particular whether Trust parameters are there. */

      if (rs->Options) {
	for (el = rs->Options->Option; el; el = (struct zx_elem_s*)el->g.n) {
	  if (el->g.tok != zx_di_Option_ELEM)
	    continue;
	  ss = ZX_GET_CONTENT(el);
	  if (!ss || !ss->len) {
	    D("Option element does not have content %p", ss);
	    continue;
	  }
	  p = zx_memmem(ss->s, ss->len, TAS3_TRUST_INPUT_CTL1, sizeof(TAS3_TRUST_INPUT_CTL1)-1);
	  if (!p) {
	    D("Option(%.*s) is not trust related", ss->len, ss->s);	    
	    continue;
	  }
	  start = p;
	  lim = memchr(p+sizeof(TAS3_TRUST_INPUT_CTL1)-1, '&', ss->len - (p - ss->s));
	  if (!lim) {
	    lim = ss->s + ss->len;
	  } else {
	    while (p = zx_memmem(lim, ss->len - (lim - ss->s), TAS3_TRUST_INPUT_CTL1, sizeof(TAS3_TRUST_INPUT_CTL1)-1)) {
	      lim = memchr(p+sizeof(TAS3_TRUST_INPUT_CTL1)-1, '&', ss->len - (p - ss->s));
	      if (!lim) {
		lim = ss->s + ss->len;
		break;
	      }
	    }
	  }
	  
	  if (cf->trustpdp_url && *cf->trustpdp_url) {
	    D("Trust related discovery options(%.*s), TRUSTPDP_URL(%s)", lim-start, start, cf->trustpdp_url);
	    if (zxid_call_trustpdp(cf, 0, ses, cf->pepmap_rsin, start, lim, epr)) {
	      D("%d: Trust PERMIT. file(%s)", n_discovered, de->d_name);
	      /* *** return trust scorings as part of the EPR */
	      continue;
	    } else {
	      D("%d: Rejected due to Trust DENY. file(%s)", n_discovered, de->d_name);
	      ZX_FREE(cf->ctx, epr_buf);
	      goto next_file;
	    }
	  } else {
	    INFO("Trust related discovery options(%.*s), but no TRUSTPDP_URL configured", lim-start, start);
	    continue;
	  }
	}
      }

      /* *** Check Framework */

      /* *** Check Action */

      if (cf->cpn_ena) {
#if 0
	/* Call Trust and Privacy Negotiation (TrustBuilder), Andreas. */
	systemf("./tpn-client.sh %s %s %s", idpnid, "urn:idhrxml:cv:update", host);
#else
	if (svctyp && svctyp->len && prvid && prvid->len) {
	  ss = zxid_callf(cf, ses, "urn:tas3:cpn-agent",0,0,0,
		 "<tas3cpn:CPNRequest xmlns:tas3cpn=\"urn:tas3:cpn-agent\">"
		   "<di:RequestedService xmlns:di=\"urn:liberty:disco:2006-08\">"
		     "<di:ServiceType>%.*s</di:ServiceType>"
		     "<di:ProviderID>%.*s</di:ProviderID>"
		     "<di:Framework version=\"2.0\"/>"
		     /*"<di:Action>urn:x-foobar:Create</di:Action>"*/
		   "</di:RequestedService>"
		 "</tas3cpn:CPNRequest>",
			  svctyp->len, svctyp->s,
			  prvid->len, prvid->s);
	  if (!ss || !ss->s) {
	    D("CPN returned nothing or emptiness (no CPN agent discoverable?) %p", ss);
	  } else {
	    D("CPN returned(%.*s)", ss->len, ss->s);	  
	  }
	} else {
	  ERR("Service Metadata missing ServiceType(%p) or ProviderID(%p)", md->ServiceType, md->ProviderID);
	}
#endif
      }
      ++n_discovered;
      D("%d: DISCOVERED EPR url(%.*s)", n_discovered, addr->len, addr->s);
      if (!zxid_add_fed_tok2epr(cf, ses, epr, 1, logop)) {
	ZX_FREE(cf->ctx, epr_buf);
	goto next_file;
      }

      zx_add_kid(&resp->gg, &epr->gg);
      if (!resp->EndpointReference)
	resp->EndpointReference = epr;

      zxlogwsp(cf, ses, "K", logop, uid, 0);

      if (rs->resultsType && rs->resultsType->g.s
	  && (!memcmp(rs->resultsType->g.s, "only-one", rs->resultsType->g.len)
	      || !memcmp(rs->resultsType->g.s, "best", rs->resultsType->g.len))) {
	D("only-one or best requested (%.*s)", rs->resultsType->g.len, rs->resultsType->g.s);
	break;
      }
      
next_file:
      continue;
    }
    
    closedir(dir);
  }
  ss = ZX_GET_CONTENT(req->RequestedService->ServiceType);
  D("TOTAL discovered %d svctype(%.*s)", n_discovered, ss?ss->len:0, ss?ss->s:"");
  zxlogwsp(cf, ses, "K", "DIOK", 0, "%.*s n=%d", ss?ss->len:1, ss?ss->s:"-", n_discovered);
  resp->Status = zxid_mk_lu_Status(cf, &resp->gg, "OK", 0, 0, 0);  /* last is first */
  D_DEDENT("di_query: ");
  return resp;
}

/* EOF  --  zxiddi.c */

