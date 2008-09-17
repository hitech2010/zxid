/* c/zx-xasp-aux.c - WARNING: This file was automatically generated. DO NOT EDIT!
 * $Id$ */
/* Code generation design Copyright (c) 2006 Sampo Kellomaki (sampo@iki.fi),
 * All Rights Reserved. NO WARRANTY. See file COPYING for terms and conditions
 * of use. Some aspects of code generation were driven by schema
 * descriptions that were used as input and may be subject to their own copyright.
 * Code generation uses a template, whose copyright statement follows. */

/** aux-templ.c  -  Auxiliary functions template: cloning, freeing, walking data
 ** Copyright (c) 2006 Symlabs (symlabs@symlabs.com), All Rights Reserved.
 ** Author: Sampo Kellomaki (sampo@iki.fi)
 ** This is confidential unpublished proprietary source code of the author.
 ** NO WARRANTY, not even implied warranties. Contains trade secrets.
 ** Distribution prohibited unless authorized in writing.
 ** Licensed under Apache License 2.0, see file COPYING.
 ** Id: aux-templ.c,v 1.11 2007/03/28 20:31:54 sampo Exp $
 **
 ** 30.5.2006, created, Sampo Kellomaki (sampo@iki.fi)
 ** 6.8.2006, factored from enc-templ.c to separate file --Sampo
 **
 ** N.B: wo=wire order (needed for exc-c14n), so=schema order
 **/

#include <memory.h>
#include "errmac.h"
#include "zx.h"
#include "c/zx-const.h"
#include "c/zx-data.h"
#include "c/zx-xasp-data.h"



#ifdef EL_NAME
#undef EL_NAME
#endif
#ifdef EL_STRUCT
#undef EL_STRUCT
#endif
#ifdef EL_NS
#undef EL_NS
#endif
#ifdef EL_TAG
#undef EL_TAG
#endif

#define EL_NAME   xasp_XACMLAuthzDecisionQuery
#define EL_STRUCT zx_xasp_XACMLAuthzDecisionQuery_s
#define EL_NS     xasp
#define EL_TAG    XACMLAuthzDecisionQuery

/* FUNC(zx_FREE_xasp_XACMLAuthzDecisionQuery) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

/* Called by: */
void zx_FREE_xasp_XACMLAuthzDecisionQuery(struct zx_ctx* c, struct zx_xasp_XACMLAuthzDecisionQuery_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */

  zx_free_attr(c, x->Consent, free_strs);
  zx_free_attr(c, x->Destination, free_strs);
  zx_free_attr(c, x->ID, free_strs);
  zx_free_attr(c, x->InputContextOnly, free_strs);
  zx_free_attr(c, x->IssueInstant, free_strs);
  zx_free_attr(c, x->ReturnContext, free_strs);
  zx_free_attr(c, x->Version, free_strs);

  {
      struct zx_sa_Issuer_s* e;
      struct zx_sa_Issuer_s* en;
      for (e = x->Issuer; e; e = en) {
	  en = (struct zx_sa_Issuer_s*)e->gg.g.n;
	  zx_FREE_sa_Issuer(c, e, free_strs);
      }
  }
  {
      struct zx_ds_Signature_s* e;
      struct zx_ds_Signature_s* en;
      for (e = x->Signature; e; e = en) {
	  en = (struct zx_ds_Signature_s*)e->gg.g.n;
	  zx_FREE_ds_Signature(c, e, free_strs);
      }
  }
  {
      struct zx_sp_Extensions_s* e;
      struct zx_sp_Extensions_s* en;
      for (e = x->Extensions; e; e = en) {
	  en = (struct zx_sp_Extensions_s*)e->gg.g.n;
	  zx_FREE_sp_Extensions(c, e, free_strs);
      }
  }
  {
      struct zx_xac_Request_s* e;
      struct zx_xac_Request_s* en;
      for (e = x->Request; e; e = en) {
	  en = (struct zx_xac_Request_s*)e->gg.g.n;
	  zx_FREE_xac_Request(c, e, free_strs);
      }
  }


  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zx_NEW_xasp_XACMLAuthzDecisionQuery) */

/* Trivial allocator/constructor for the datatype. */

/* Called by: */
struct zx_xasp_XACMLAuthzDecisionQuery_s* zx_NEW_xasp_XACMLAuthzDecisionQuery(struct zx_ctx* c)
{
  struct zx_xasp_XACMLAuthzDecisionQuery_s* x = ZX_ZALLOC(c, struct zx_xasp_XACMLAuthzDecisionQuery_s);
  x->gg.g.tok = zx_xasp_XACMLAuthzDecisionQuery_ELEM;
  return x;
}

#ifdef ZX_ENA_AUX

/* FUNC(zx_DUP_STRS_xasp_XACMLAuthzDecisionQuery) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

/* Called by: */
void zx_DUP_STRS_xasp_XACMLAuthzDecisionQuery(struct zx_ctx* c, struct zx_xasp_XACMLAuthzDecisionQuery_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */

  zx_dup_attr(c, x->Consent);
  zx_dup_attr(c, x->Destination);
  zx_dup_attr(c, x->ID);
  zx_dup_attr(c, x->InputContextOnly);
  zx_dup_attr(c, x->IssueInstant);
  zx_dup_attr(c, x->ReturnContext);
  zx_dup_attr(c, x->Version);

  {
      struct zx_sa_Issuer_s* e;
      for (e = x->Issuer; e; e = (struct zx_sa_Issuer_s*)e->gg.g.n)
	  zx_DUP_STRS_sa_Issuer(c, e);
  }
  {
      struct zx_ds_Signature_s* e;
      for (e = x->Signature; e; e = (struct zx_ds_Signature_s*)e->gg.g.n)
	  zx_DUP_STRS_ds_Signature(c, e);
  }
  {
      struct zx_sp_Extensions_s* e;
      for (e = x->Extensions; e; e = (struct zx_sp_Extensions_s*)e->gg.g.n)
	  zx_DUP_STRS_sp_Extensions(c, e);
  }
  {
      struct zx_xac_Request_s* e;
      for (e = x->Request; e; e = (struct zx_xac_Request_s*)e->gg.g.n)
	  zx_DUP_STRS_xac_Request(c, e);
  }

}

/* FUNC(zx_DEEP_CLONE_xasp_XACMLAuthzDecisionQuery) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

/* Called by: */
struct zx_xasp_XACMLAuthzDecisionQuery_s* zx_DEEP_CLONE_xasp_XACMLAuthzDecisionQuery(struct zx_ctx* c, struct zx_xasp_XACMLAuthzDecisionQuery_s* x, int dup_strs)
{
  x = (struct zx_xasp_XACMLAuthzDecisionQuery_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zx_xasp_XACMLAuthzDecisionQuery_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */

  x->Consent = zx_clone_attr(c, x->Consent);
  x->Destination = zx_clone_attr(c, x->Destination);
  x->ID = zx_clone_attr(c, x->ID);
  x->InputContextOnly = zx_clone_attr(c, x->InputContextOnly);
  x->IssueInstant = zx_clone_attr(c, x->IssueInstant);
  x->ReturnContext = zx_clone_attr(c, x->ReturnContext);
  x->Version = zx_clone_attr(c, x->Version);

  {
      struct zx_sa_Issuer_s* e;
      struct zx_sa_Issuer_s* en;
      struct zx_sa_Issuer_s* enn;
      for (enn = 0, e = x->Issuer; e; e = (struct zx_sa_Issuer_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_sa_Issuer(c, e, dup_strs);
	  if (!enn)
	      x->Issuer = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zx_ds_Signature_s* e;
      struct zx_ds_Signature_s* en;
      struct zx_ds_Signature_s* enn;
      for (enn = 0, e = x->Signature; e; e = (struct zx_ds_Signature_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_ds_Signature(c, e, dup_strs);
	  if (!enn)
	      x->Signature = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zx_sp_Extensions_s* e;
      struct zx_sp_Extensions_s* en;
      struct zx_sp_Extensions_s* enn;
      for (enn = 0, e = x->Extensions; e; e = (struct zx_sp_Extensions_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_sp_Extensions(c, e, dup_strs);
	  if (!enn)
	      x->Extensions = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zx_xac_Request_s* e;
      struct zx_xac_Request_s* en;
      struct zx_xac_Request_s* enn;
      for (enn = 0, e = x->Request; e; e = (struct zx_xac_Request_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_xac_Request(c, e, dup_strs);
	  if (!enn)
	      x->Request = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }

  return x;
}

/* FUNC(zx_WALK_SO_xasp_XACMLAuthzDecisionQuery) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zx_WALK_SO_xasp_XACMLAuthzDecisionQuery(struct zx_ctx* c, struct zx_xasp_XACMLAuthzDecisionQuery_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  int ret = callback(&x->gg.g, ctx);
  if (ret)
    return ret;
  
  /* *** deal with xmlns specifications in exc c14n way */


  
  ret = zx_walk_so_unknown_attributes(c, &x->gg, ctx, callback); 
  if (ret)
    return ret;

  {
      struct zx_sa_Issuer_s* e;
      for (e = x->Issuer; e; e = (struct zx_sa_Issuer_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_sa_Issuer(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zx_ds_Signature_s* e;
      for (e = x->Signature; e; e = (struct zx_ds_Signature_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_ds_Signature(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zx_sp_Extensions_s* e;
      for (e = x->Extensions; e; e = (struct zx_sp_Extensions_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_sp_Extensions(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zx_xac_Request_s* e;
      for (e = x->Request; e; e = (struct zx_xac_Request_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_xac_Request(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }

  
  return zx_walk_so_unknown_elems_and_content(c, &x->gg, ctx, callback);
}

/* FUNC(zx_WALK_WO_xasp_XACMLAuthzDecisionQuery) */

int zx_WALK_WO_xasp_XACMLAuthzDecisionQuery(struct zx_ctx* c, struct zx_xasp_XACMLAuthzDecisionQuery_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  ERR("*** walk_wo not implemented %d", 0);
  return 0;
}

#endif




#ifdef EL_NAME
#undef EL_NAME
#endif
#ifdef EL_STRUCT
#undef EL_STRUCT
#endif
#ifdef EL_NS
#undef EL_NS
#endif
#ifdef EL_TAG
#undef EL_TAG
#endif

#define EL_NAME   xasp_XACMLPolicyQuery
#define EL_STRUCT zx_xasp_XACMLPolicyQuery_s
#define EL_NS     xasp
#define EL_TAG    XACMLPolicyQuery

/* FUNC(zx_FREE_xasp_XACMLPolicyQuery) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

/* Called by: */
void zx_FREE_xasp_XACMLPolicyQuery(struct zx_ctx* c, struct zx_xasp_XACMLPolicyQuery_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */

  zx_free_attr(c, x->Consent, free_strs);
  zx_free_attr(c, x->Destination, free_strs);
  zx_free_attr(c, x->ID, free_strs);
  zx_free_attr(c, x->IssueInstant, free_strs);
  zx_free_attr(c, x->Version, free_strs);

  {
      struct zx_sa_Issuer_s* e;
      struct zx_sa_Issuer_s* en;
      for (e = x->Issuer; e; e = en) {
	  en = (struct zx_sa_Issuer_s*)e->gg.g.n;
	  zx_FREE_sa_Issuer(c, e, free_strs);
      }
  }
  {
      struct zx_ds_Signature_s* e;
      struct zx_ds_Signature_s* en;
      for (e = x->Signature; e; e = en) {
	  en = (struct zx_ds_Signature_s*)e->gg.g.n;
	  zx_FREE_ds_Signature(c, e, free_strs);
      }
  }
  {
      struct zx_sp_Extensions_s* e;
      struct zx_sp_Extensions_s* en;
      for (e = x->Extensions; e; e = en) {
	  en = (struct zx_sp_Extensions_s*)e->gg.g.n;
	  zx_FREE_sp_Extensions(c, e, free_strs);
      }
  }
  {
      struct zx_xac_Request_s* e;
      struct zx_xac_Request_s* en;
      for (e = x->Request; e; e = en) {
	  en = (struct zx_xac_Request_s*)e->gg.g.n;
	  zx_FREE_xac_Request(c, e, free_strs);
      }
  }
  {
      struct zx_xa_Target_s* e;
      struct zx_xa_Target_s* en;
      for (e = x->Target; e; e = en) {
	  en = (struct zx_xa_Target_s*)e->gg.g.n;
	  zx_FREE_xa_Target(c, e, free_strs);
      }
  }
  {
      struct zx_xa_PolicySetIdReference_s* e;
      struct zx_xa_PolicySetIdReference_s* en;
      for (e = x->PolicySetIdReference; e; e = en) {
	  en = (struct zx_xa_PolicySetIdReference_s*)e->gg.g.n;
	  zx_FREE_xa_PolicySetIdReference(c, e, free_strs);
      }
  }
  {
      struct zx_xa_PolicyIdReference_s* e;
      struct zx_xa_PolicyIdReference_s* en;
      for (e = x->PolicyIdReference; e; e = en) {
	  en = (struct zx_xa_PolicyIdReference_s*)e->gg.g.n;
	  zx_FREE_xa_PolicyIdReference(c, e, free_strs);
      }
  }


  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zx_NEW_xasp_XACMLPolicyQuery) */

/* Trivial allocator/constructor for the datatype. */

/* Called by: */
struct zx_xasp_XACMLPolicyQuery_s* zx_NEW_xasp_XACMLPolicyQuery(struct zx_ctx* c)
{
  struct zx_xasp_XACMLPolicyQuery_s* x = ZX_ZALLOC(c, struct zx_xasp_XACMLPolicyQuery_s);
  x->gg.g.tok = zx_xasp_XACMLPolicyQuery_ELEM;
  return x;
}

#ifdef ZX_ENA_AUX

/* FUNC(zx_DUP_STRS_xasp_XACMLPolicyQuery) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

/* Called by: */
void zx_DUP_STRS_xasp_XACMLPolicyQuery(struct zx_ctx* c, struct zx_xasp_XACMLPolicyQuery_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */

  zx_dup_attr(c, x->Consent);
  zx_dup_attr(c, x->Destination);
  zx_dup_attr(c, x->ID);
  zx_dup_attr(c, x->IssueInstant);
  zx_dup_attr(c, x->Version);

  {
      struct zx_sa_Issuer_s* e;
      for (e = x->Issuer; e; e = (struct zx_sa_Issuer_s*)e->gg.g.n)
	  zx_DUP_STRS_sa_Issuer(c, e);
  }
  {
      struct zx_ds_Signature_s* e;
      for (e = x->Signature; e; e = (struct zx_ds_Signature_s*)e->gg.g.n)
	  zx_DUP_STRS_ds_Signature(c, e);
  }
  {
      struct zx_sp_Extensions_s* e;
      for (e = x->Extensions; e; e = (struct zx_sp_Extensions_s*)e->gg.g.n)
	  zx_DUP_STRS_sp_Extensions(c, e);
  }
  {
      struct zx_xac_Request_s* e;
      for (e = x->Request; e; e = (struct zx_xac_Request_s*)e->gg.g.n)
	  zx_DUP_STRS_xac_Request(c, e);
  }
  {
      struct zx_xa_Target_s* e;
      for (e = x->Target; e; e = (struct zx_xa_Target_s*)e->gg.g.n)
	  zx_DUP_STRS_xa_Target(c, e);
  }
  {
      struct zx_xa_PolicySetIdReference_s* e;
      for (e = x->PolicySetIdReference; e; e = (struct zx_xa_PolicySetIdReference_s*)e->gg.g.n)
	  zx_DUP_STRS_xa_PolicySetIdReference(c, e);
  }
  {
      struct zx_xa_PolicyIdReference_s* e;
      for (e = x->PolicyIdReference; e; e = (struct zx_xa_PolicyIdReference_s*)e->gg.g.n)
	  zx_DUP_STRS_xa_PolicyIdReference(c, e);
  }

}

/* FUNC(zx_DEEP_CLONE_xasp_XACMLPolicyQuery) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

/* Called by: */
struct zx_xasp_XACMLPolicyQuery_s* zx_DEEP_CLONE_xasp_XACMLPolicyQuery(struct zx_ctx* c, struct zx_xasp_XACMLPolicyQuery_s* x, int dup_strs)
{
  x = (struct zx_xasp_XACMLPolicyQuery_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zx_xasp_XACMLPolicyQuery_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */

  x->Consent = zx_clone_attr(c, x->Consent);
  x->Destination = zx_clone_attr(c, x->Destination);
  x->ID = zx_clone_attr(c, x->ID);
  x->IssueInstant = zx_clone_attr(c, x->IssueInstant);
  x->Version = zx_clone_attr(c, x->Version);

  {
      struct zx_sa_Issuer_s* e;
      struct zx_sa_Issuer_s* en;
      struct zx_sa_Issuer_s* enn;
      for (enn = 0, e = x->Issuer; e; e = (struct zx_sa_Issuer_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_sa_Issuer(c, e, dup_strs);
	  if (!enn)
	      x->Issuer = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zx_ds_Signature_s* e;
      struct zx_ds_Signature_s* en;
      struct zx_ds_Signature_s* enn;
      for (enn = 0, e = x->Signature; e; e = (struct zx_ds_Signature_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_ds_Signature(c, e, dup_strs);
	  if (!enn)
	      x->Signature = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zx_sp_Extensions_s* e;
      struct zx_sp_Extensions_s* en;
      struct zx_sp_Extensions_s* enn;
      for (enn = 0, e = x->Extensions; e; e = (struct zx_sp_Extensions_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_sp_Extensions(c, e, dup_strs);
	  if (!enn)
	      x->Extensions = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zx_xac_Request_s* e;
      struct zx_xac_Request_s* en;
      struct zx_xac_Request_s* enn;
      for (enn = 0, e = x->Request; e; e = (struct zx_xac_Request_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_xac_Request(c, e, dup_strs);
	  if (!enn)
	      x->Request = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zx_xa_Target_s* e;
      struct zx_xa_Target_s* en;
      struct zx_xa_Target_s* enn;
      for (enn = 0, e = x->Target; e; e = (struct zx_xa_Target_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_xa_Target(c, e, dup_strs);
	  if (!enn)
	      x->Target = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zx_xa_PolicySetIdReference_s* e;
      struct zx_xa_PolicySetIdReference_s* en;
      struct zx_xa_PolicySetIdReference_s* enn;
      for (enn = 0, e = x->PolicySetIdReference; e; e = (struct zx_xa_PolicySetIdReference_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_xa_PolicySetIdReference(c, e, dup_strs);
	  if (!enn)
	      x->PolicySetIdReference = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zx_xa_PolicyIdReference_s* e;
      struct zx_xa_PolicyIdReference_s* en;
      struct zx_xa_PolicyIdReference_s* enn;
      for (enn = 0, e = x->PolicyIdReference; e; e = (struct zx_xa_PolicyIdReference_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_xa_PolicyIdReference(c, e, dup_strs);
	  if (!enn)
	      x->PolicyIdReference = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }

  return x;
}

/* FUNC(zx_WALK_SO_xasp_XACMLPolicyQuery) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zx_WALK_SO_xasp_XACMLPolicyQuery(struct zx_ctx* c, struct zx_xasp_XACMLPolicyQuery_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  int ret = callback(&x->gg.g, ctx);
  if (ret)
    return ret;
  
  /* *** deal with xmlns specifications in exc c14n way */


  
  ret = zx_walk_so_unknown_attributes(c, &x->gg, ctx, callback); 
  if (ret)
    return ret;

  {
      struct zx_sa_Issuer_s* e;
      for (e = x->Issuer; e; e = (struct zx_sa_Issuer_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_sa_Issuer(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zx_ds_Signature_s* e;
      for (e = x->Signature; e; e = (struct zx_ds_Signature_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_ds_Signature(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zx_sp_Extensions_s* e;
      for (e = x->Extensions; e; e = (struct zx_sp_Extensions_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_sp_Extensions(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zx_xac_Request_s* e;
      for (e = x->Request; e; e = (struct zx_xac_Request_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_xac_Request(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zx_xa_Target_s* e;
      for (e = x->Target; e; e = (struct zx_xa_Target_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_xa_Target(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zx_xa_PolicySetIdReference_s* e;
      for (e = x->PolicySetIdReference; e; e = (struct zx_xa_PolicySetIdReference_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_xa_PolicySetIdReference(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zx_xa_PolicyIdReference_s* e;
      for (e = x->PolicyIdReference; e; e = (struct zx_xa_PolicyIdReference_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_xa_PolicyIdReference(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }

  
  return zx_walk_so_unknown_elems_and_content(c, &x->gg, ctx, callback);
}

/* FUNC(zx_WALK_WO_xasp_XACMLPolicyQuery) */

int zx_WALK_WO_xasp_XACMLPolicyQuery(struct zx_ctx* c, struct zx_xasp_XACMLPolicyQuery_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  ERR("*** walk_wo not implemented %d", 0);
  return 0;
}

#endif


/* EOF -- c/zx-xasp-aux.c */
