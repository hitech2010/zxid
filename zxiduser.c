/* zxiduser.c  -  Handwritten functions for SP user local account management
 * Copyright (c) 2007-2009 Symlabs (symlabs@symlabs.com), All Rights Reserved.
 * Author: Sampo Kellomaki (sampo@iki.fi)
 * This is confidential unpublished proprietary source code of the author.
 * NO WARRANTY, not even implied warranties. Contains trade secrets.
 * Distribution prohibited unless authorized in writing.
 * Licensed under Apache License 2.0, see file COPYING.
 * $Id: zxiduser.c,v 1.14 2009-09-05 02:23:41 sampo Exp $
 *
 * 12.10.2007, created --Sampo
 * 7.10.2008,  added documentation --Sampo
 */

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <string.h>
#include <stdio.h>
#include <dirent.h>
#include <errno.h>
#include <unistd.h>

#include "errmac.h"
#include "zxid.h"
#include "zxidconf.h"

/*() Parse a line from .mni and form a NameID, unless there is mniptr */

struct zx_sa_NameID_s* zxid_parse_mni(struct zxid_conf* cf, char* buf, char** pmniptr)
{
  struct zx_sa_NameID_s* nameid;
  char* p;
  char* idpent = 0;
  char* spqual = 0;
  char* nid = 0;
  char* mniptr = 0;

  p = strchr(buf, '|');
  if (p) {
    *p = 0;
    idpent = ++p;
    p = strchr(p, '|');
    if (p) {
      *p = 0;
      spqual = ++p;
      p = strchr(p, '|');
      if (p) {
	*p = 0;
	nid = ++p;
	p = strchr(p, '|');
	if (p) {
	  *p = 0;
	  mniptr = ++p;
	  p = strchr(p, '|');
	  if (p)
	    *p = 0;
	}
      }
    }
  }
  
  if (mniptr && *mniptr) {
    if (pmniptr)
      *pmniptr = mniptr;
    return 0;
  }
  
  nameid = zx_NEW_sa_NameID(cf->ctx);
  if (*buf)              nameid->Format = zx_ref_str(cf->ctx, buf);
  if (idpent && *idpent) nameid->NameQualifier = zx_ref_str(cf->ctx, idpent);
  if (spqual && *spqual) nameid->SPNameQualifier = zx_ref_str(cf->ctx, spqual);
  if (nid && *nid)       nameid->gg.content = zx_ref_str(cf->ctx, nid);
  return nameid;
}

/*() Locate user file using a NameID, which may be old or current. If old,
 * chase the MNIptr fields until current is found. Mainly used to support MNI. */

/* Called by:  zxid_sp_mni_redir, zxid_sp_mni_soap, zxid_sp_slo_redir, zxid_sp_slo_soap */
struct zx_sa_NameID_s* zxid_get_user_nameid(struct zxid_conf* cf, struct zx_sa_NameID_s* oldnid)
{
  char sha1_name[28];
  char* buf;
  char* mniptr;
  int iter = 1000;
  struct zx_str* ss;
  struct zx_sa_NameID_s* nameid;
  
  if (!cf->user_local)
    return oldnid;
  
  if (!oldnid->NameQualifier) {
    sha1_safe_base64(sha1_name, oldnid->gg.content->len, oldnid->gg.content->s);
  } else {
    ss = zx_strf(cf->ctx, "%.*s|%.*s", oldnid->NameQualifier->len, oldnid->NameQualifier->s, oldnid->gg.content->len, oldnid->gg.content->s);
    sha1_safe_base64(sha1_name, ss->len, ss->s);
    zx_str_free(cf->ctx, ss);
  }
  sha1_name[27] = 0;
  buf = ZX_ALLOC(cf->ctx, ZXID_MAX_USER);
  mniptr = sha1_name;

  while (--iter && mniptr && *mniptr) {
    read_all(ZXID_MAX_USER, buf, __FUNCTION__, "%s" ZXID_USER_DIR "%s/.mni", cf->path, mniptr);
    nameid = zxid_parse_mni(cf, buf, &mniptr);
    if (nameid)
      return nameid;
    if (!mniptr || !strcmp(mniptr, sha1_name)) {
      ERR("Infinite loop in MNI changed NameIDs in user database mniptr(%s) iter(%d)", STRNULLCHK(mniptr), iter);
      return 0;
    }
  }
  ERR("Too many mniptr indirections for oldnid(%.*s)", oldnid->gg.content->len, oldnid->gg.content->s);
  return 0;
}

/*() Change a NameID to newnym. Old NameID's user entry is rewritten to have mniptr */

/* Called by:  zxid_mni_do */
void zxid_user_change_nameid(struct zxid_conf* cf, struct zx_sa_NameID_s* oldnid, struct zx_str* newnym)
{
  struct zx_str* ss;
  char sha1_name[28];

  if (!oldnid->NameQualifier) {
    sha1_safe_base64(sha1_name, newnym->len, newnym->s);
  } else {
    ss = zx_strf(cf->ctx, "%.*s|%.*s", oldnid->NameQualifier->len, oldnid->NameQualifier->s, newnym->len, newnym->s);
    sha1_safe_base64(sha1_name, ss->len, ss->s);
    zx_str_free(cf->ctx, ss);
  }
  sha1_name[27] = 0;

  zxid_put_user(cf, oldnid->Format, oldnid->NameQualifier, oldnid->SPNameQualifier, newnym, 0);
  zxid_put_user(cf, oldnid->Format, oldnid->NameQualifier, oldnid->SPNameQualifier, oldnid->gg.content, sha1_name);
}

/*() Create new user object in file system. */

/* Called by:  zxid_sp_sso_finalize, zxid_user_change_nameid x2 */
int zxid_put_user(struct zxid_conf* cf, struct zx_str* nidfmt, struct zx_str* idpent, struct zx_str* spqual, struct zx_str* idpnid, char* mniptr)
{
  char sha1_name[28];
  char dir[ZXID_MAX_BUF];
  char* buf;
  struct zx_str* ss;
  
  if (!cf->user_local)
    return 0;
  
  if (!idpnid) {
    ERR("Missing NameID %p", idpent);
    return 0;
  }
  
  if (!idpent) {
    sha1_safe_base64(sha1_name, idpnid->len, idpnid->s);
  } else {
    ss = zx_strf(cf->ctx, "%.*s|%.*s", idpent->len, idpent->s, idpnid->len, idpnid->s);
    sha1_safe_base64(sha1_name, ss->len, ss->s);
    zx_str_free(cf->ctx, ss);
  }
  sha1_name[27] = 0;
  
  name_from_path(dir, sizeof(dir), "%s" ZXID_USER_DIR "%s", cf->path, sha1_name);
  if (MKDIR(dir, 0777) && errno != EEXIST) {
    perror("mkdir for user");
    ERR("Creating user directory(%s) failed", dir);
    return 0;
  }
  
  buf = ZX_ALLOC(cf->ctx, ZXID_MAX_USER);
  write_all_path_fmt("put_user", ZXID_MAX_USER, buf,
		     "%s" ZXID_USER_DIR "%s/.mni", cf->path, sha1_name,
		     "%.*s|%.*s|%.*s|%.*s|%s",
		     nidfmt?nidfmt->len:0, nidfmt?nidfmt->s:"",
		     idpent?idpent->len:0, idpent?idpent->s:"",
		     spqual?spqual->len:0, spqual?spqual->s:"",
		     idpnid->len, idpnid->s,
		     STRNULLCHK(mniptr));
  ZX_FREE(cf->ctx, buf);
  return 1;
}

static char* login_failed = "Login failed. Check username and password. Make sure you have an active local account. Or just try some other authentication method or another IdP.<p>";

/*() Locally authenticate user. If successful, create a session.
 * Expects to get username and password in cgi->au and cgi->ap
 * respectively. User authetication is done against local database or
 * by default using /var/zxid/uid/uid/.pw file. When filesystem
 * backend is used, for safety reasons the uid (user) component can
 * not have certain characters, such as slash (/) or sequences like "..".
 *
 * return:: 0 on failure and sets cgi->err; 1 on success  */

/* Called by:  zxid_simple_idp_pw_authn, zxid_simple_idp_show_an */
int zxid_pw_authn(struct zxid_conf* cf, struct zxid_cgi* cgi, struct zxid_ses* ses)
{
  struct zx_str* ss;
  char pw_buf[256];
  int len;
  if (!cgi->uid || !cgi->uid[0]) {
    ERR("No uid (user's login name) supplied. %d", 0);
    cgi->err = login_failed;
    D("no user name pw(%s)", STRNULLCHK(cgi->pw));
    return 0;
  }
  if (!cgi->pw || !cgi->pw[0]) {
    ERR("No password supplied. uid(%s)", cgi->uid);
    cgi->err = login_failed;
    return 0;
  }
  
  /* *** Add here support for other authentication backends */

  /* Check for filesystem unsafe characters. (*** Is this list complete?) */
  if (strstr(cgi->uid, "..") || strchr(cgi->uid, '/')
      || strchr(cgi->uid, '\\') || strchr(cgi->uid, '~')) {
    ERR("uid(%s) is not filesystem safe", cgi->uid);
    D("pw(%s)", cgi->pw);
    cgi->err = login_failed;
    return 0;
  }
  len = read_all(sizeof(pw_buf), pw_buf, "pw_authn",
		 "%s" ZXID_UID_DIR "%s/.pw", cf->path, cgi->uid);
  if (len < 1) {
    ERR("No account found for uid(%s) or account does not have .pw file.", cgi->uid);
    D("pw(%s)", cgi->pw);
    cgi->err = login_failed;
    return 0;
  }
  if (strcmp(pw_buf, cgi->pw)) {
    ERR("Bad password. uid(%s)", cgi->uid);
    D("pw(%s) .pw(%s)", cgi->pw, pw_buf);
    cgi->err = login_failed;
    return 0;
  }
  memset(ses, 0, sizeof(struct zxid_ses));
  ses->magic = ZXID_SES_MAGIC;
  ses->an_ctx = cf->issue_authnctx_pw;  /* *** Should also depend on how user was registered */
  ss = zxid_mk_id(cf, "MSES", ZXID_ID_BITS);  /* Master session. Each pairwise SSO should have its own to avoid correlation. */
  ses->sesix = ss->s;
  ZX_FREE(cf->ctx, ss);
  ses->sid = ses->sesix;
  ses->uid = cgi->uid;
  zxid_put_ses(cf, ses);
  if (cf->ses_cookie_name && *cf->ses_cookie_name) {
    ses->setcookie = zx_alloc_sprintf(cf->ctx, 0, "%s=%s; path=/; secure",
				      cf->ses_cookie_name, ses->sid);
    ses->cookie = zx_alloc_sprintf(cf->ctx, 0, "$Version=1; %s=%s",
				   cf->ses_cookie_name, ses->sid);
  }
  cgi->sid = ses->sid;
  INFO("Local login successful. uid(%s) sid(%s)", cgi->uid, cgi->sid);
  return 1;
}

/* EOF  --  zxiduser.c */