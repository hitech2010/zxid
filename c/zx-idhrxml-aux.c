/* c/zx-idhrxml-aux.c - WARNING: This file was automatically generated. DO NOT EDIT!
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
#include "c/zx-idhrxml-data.h"



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

#define EL_NAME   idhrxml_Create
#define EL_STRUCT zx_idhrxml_Create_s
#define EL_NS     idhrxml
#define EL_TAG    Create

/* FUNC(zx_FREE_idhrxml_Create) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

/* Called by: */
void zx_FREE_idhrxml_Create(struct zx_ctx* c, struct zx_idhrxml_Create_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */

  zx_free_attr(c, x->itemID, free_strs);

  {
      struct zx_lu_Extension_s* e;
      struct zx_lu_Extension_s* en;
      for (e = x->Extension; e; e = en) {
	  en = (struct zx_lu_Extension_s*)e->gg.g.n;
	  zx_FREE_lu_Extension(c, e, free_strs);
      }
  }
  {
      struct zx_idhrxml_Subscription_s* e;
      struct zx_idhrxml_Subscription_s* en;
      for (e = x->Subscription; e; e = en) {
	  en = (struct zx_idhrxml_Subscription_s*)e->gg.g.n;
	  zx_FREE_idhrxml_Subscription(c, e, free_strs);
      }
  }
  {
      struct zx_idhrxml_CreateItem_s* e;
      struct zx_idhrxml_CreateItem_s* en;
      for (e = x->CreateItem; e; e = en) {
	  en = (struct zx_idhrxml_CreateItem_s*)e->gg.g.n;
	  zx_FREE_idhrxml_CreateItem(c, e, free_strs);
      }
  }
  {
      struct zx_idhrxml_ResultQuery_s* e;
      struct zx_idhrxml_ResultQuery_s* en;
      for (e = x->ResultQuery; e; e = en) {
	  en = (struct zx_idhrxml_ResultQuery_s*)e->gg.g.n;
	  zx_FREE_idhrxml_ResultQuery(c, e, free_strs);
      }
  }


  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zx_NEW_idhrxml_Create) */

/* Trivial allocator/constructor for the datatype. */

/* Called by: */
struct zx_idhrxml_Create_s* zx_NEW_idhrxml_Create(struct zx_ctx* c)
{
  struct zx_idhrxml_Create_s* x = ZX_ZALLOC(c, struct zx_idhrxml_Create_s);
  x->gg.g.tok = zx_idhrxml_Create_ELEM;
  return x;
}

#ifdef ZX_ENA_AUX

/* FUNC(zx_DUP_STRS_idhrxml_Create) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

/* Called by: */
void zx_DUP_STRS_idhrxml_Create(struct zx_ctx* c, struct zx_idhrxml_Create_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */

  zx_dup_attr(c, x->itemID);

  {
      struct zx_lu_Extension_s* e;
      for (e = x->Extension; e; e = (struct zx_lu_Extension_s*)e->gg.g.n)
	  zx_DUP_STRS_lu_Extension(c, e);
  }
  {
      struct zx_idhrxml_Subscription_s* e;
      for (e = x->Subscription; e; e = (struct zx_idhrxml_Subscription_s*)e->gg.g.n)
	  zx_DUP_STRS_idhrxml_Subscription(c, e);
  }
  {
      struct zx_idhrxml_CreateItem_s* e;
      for (e = x->CreateItem; e; e = (struct zx_idhrxml_CreateItem_s*)e->gg.g.n)
	  zx_DUP_STRS_idhrxml_CreateItem(c, e);
  }
  {
      struct zx_idhrxml_ResultQuery_s* e;
      for (e = x->ResultQuery; e; e = (struct zx_idhrxml_ResultQuery_s*)e->gg.g.n)
	  zx_DUP_STRS_idhrxml_ResultQuery(c, e);
  }

}

/* FUNC(zx_DEEP_CLONE_idhrxml_Create) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

/* Called by: */
struct zx_idhrxml_Create_s* zx_DEEP_CLONE_idhrxml_Create(struct zx_ctx* c, struct zx_idhrxml_Create_s* x, int dup_strs)
{
  x = (struct zx_idhrxml_Create_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zx_idhrxml_Create_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */

  x->itemID = zx_clone_attr(c, x->itemID);

  {
      struct zx_lu_Extension_s* e;
      struct zx_lu_Extension_s* en;
      struct zx_lu_Extension_s* enn;
      for (enn = 0, e = x->Extension; e; e = (struct zx_lu_Extension_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_lu_Extension(c, e, dup_strs);
	  if (!enn)
	      x->Extension = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zx_idhrxml_Subscription_s* e;
      struct zx_idhrxml_Subscription_s* en;
      struct zx_idhrxml_Subscription_s* enn;
      for (enn = 0, e = x->Subscription; e; e = (struct zx_idhrxml_Subscription_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_idhrxml_Subscription(c, e, dup_strs);
	  if (!enn)
	      x->Subscription = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zx_idhrxml_CreateItem_s* e;
      struct zx_idhrxml_CreateItem_s* en;
      struct zx_idhrxml_CreateItem_s* enn;
      for (enn = 0, e = x->CreateItem; e; e = (struct zx_idhrxml_CreateItem_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_idhrxml_CreateItem(c, e, dup_strs);
	  if (!enn)
	      x->CreateItem = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zx_idhrxml_ResultQuery_s* e;
      struct zx_idhrxml_ResultQuery_s* en;
      struct zx_idhrxml_ResultQuery_s* enn;
      for (enn = 0, e = x->ResultQuery; e; e = (struct zx_idhrxml_ResultQuery_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_idhrxml_ResultQuery(c, e, dup_strs);
	  if (!enn)
	      x->ResultQuery = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }

  return x;
}

/* FUNC(zx_WALK_SO_idhrxml_Create) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zx_WALK_SO_idhrxml_Create(struct zx_ctx* c, struct zx_idhrxml_Create_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  int ret = callback(&x->gg.g, ctx);
  if (ret)
    return ret;
  
  /* *** deal with xmlns specifications in exc c14n way */


  
  ret = zx_walk_so_unknown_attributes(c, &x->gg, ctx, callback); 
  if (ret)
    return ret;

  {
      struct zx_lu_Extension_s* e;
      for (e = x->Extension; e; e = (struct zx_lu_Extension_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_lu_Extension(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zx_idhrxml_Subscription_s* e;
      for (e = x->Subscription; e; e = (struct zx_idhrxml_Subscription_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_idhrxml_Subscription(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zx_idhrxml_CreateItem_s* e;
      for (e = x->CreateItem; e; e = (struct zx_idhrxml_CreateItem_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_idhrxml_CreateItem(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zx_idhrxml_ResultQuery_s* e;
      for (e = x->ResultQuery; e; e = (struct zx_idhrxml_ResultQuery_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_idhrxml_ResultQuery(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }

  
  return zx_walk_so_unknown_elems_and_content(c, &x->gg, ctx, callback);
}

/* FUNC(zx_WALK_WO_idhrxml_Create) */

int zx_WALK_WO_idhrxml_Create(struct zx_ctx* c, struct zx_idhrxml_Create_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   idhrxml_CreateItem
#define EL_STRUCT zx_idhrxml_CreateItem_s
#define EL_NS     idhrxml
#define EL_TAG    CreateItem

/* FUNC(zx_FREE_idhrxml_CreateItem) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

/* Called by: */
void zx_FREE_idhrxml_CreateItem(struct zx_ctx* c, struct zx_idhrxml_CreateItem_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */

  zx_free_attr(c, x->id, free_strs);
  zx_free_attr(c, x->itemID, free_strs);
  zx_free_attr(c, x->objectType, free_strs);

  {
      struct zx_idhrxml_NewData_s* e;
      struct zx_idhrxml_NewData_s* en;
      for (e = x->NewData; e; e = en) {
	  en = (struct zx_idhrxml_NewData_s*)e->gg.g.n;
	  zx_FREE_idhrxml_NewData(c, e, free_strs);
      }
  }


  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zx_NEW_idhrxml_CreateItem) */

/* Trivial allocator/constructor for the datatype. */

/* Called by: */
struct zx_idhrxml_CreateItem_s* zx_NEW_idhrxml_CreateItem(struct zx_ctx* c)
{
  struct zx_idhrxml_CreateItem_s* x = ZX_ZALLOC(c, struct zx_idhrxml_CreateItem_s);
  x->gg.g.tok = zx_idhrxml_CreateItem_ELEM;
  return x;
}

#ifdef ZX_ENA_AUX

/* FUNC(zx_DUP_STRS_idhrxml_CreateItem) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

/* Called by: */
void zx_DUP_STRS_idhrxml_CreateItem(struct zx_ctx* c, struct zx_idhrxml_CreateItem_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */

  zx_dup_attr(c, x->id);
  zx_dup_attr(c, x->itemID);
  zx_dup_attr(c, x->objectType);

  {
      struct zx_idhrxml_NewData_s* e;
      for (e = x->NewData; e; e = (struct zx_idhrxml_NewData_s*)e->gg.g.n)
	  zx_DUP_STRS_idhrxml_NewData(c, e);
  }

}

/* FUNC(zx_DEEP_CLONE_idhrxml_CreateItem) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

/* Called by: */
struct zx_idhrxml_CreateItem_s* zx_DEEP_CLONE_idhrxml_CreateItem(struct zx_ctx* c, struct zx_idhrxml_CreateItem_s* x, int dup_strs)
{
  x = (struct zx_idhrxml_CreateItem_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zx_idhrxml_CreateItem_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */

  x->id = zx_clone_attr(c, x->id);
  x->itemID = zx_clone_attr(c, x->itemID);
  x->objectType = zx_clone_attr(c, x->objectType);

  {
      struct zx_idhrxml_NewData_s* e;
      struct zx_idhrxml_NewData_s* en;
      struct zx_idhrxml_NewData_s* enn;
      for (enn = 0, e = x->NewData; e; e = (struct zx_idhrxml_NewData_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_idhrxml_NewData(c, e, dup_strs);
	  if (!enn)
	      x->NewData = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }

  return x;
}

/* FUNC(zx_WALK_SO_idhrxml_CreateItem) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zx_WALK_SO_idhrxml_CreateItem(struct zx_ctx* c, struct zx_idhrxml_CreateItem_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  int ret = callback(&x->gg.g, ctx);
  if (ret)
    return ret;
  
  /* *** deal with xmlns specifications in exc c14n way */


  
  ret = zx_walk_so_unknown_attributes(c, &x->gg, ctx, callback); 
  if (ret)
    return ret;

  {
      struct zx_idhrxml_NewData_s* e;
      for (e = x->NewData; e; e = (struct zx_idhrxml_NewData_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_idhrxml_NewData(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }

  
  return zx_walk_so_unknown_elems_and_content(c, &x->gg, ctx, callback);
}

/* FUNC(zx_WALK_WO_idhrxml_CreateItem) */

int zx_WALK_WO_idhrxml_CreateItem(struct zx_ctx* c, struct zx_idhrxml_CreateItem_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   idhrxml_CreateResponse
#define EL_STRUCT zx_idhrxml_CreateResponse_s
#define EL_NS     idhrxml
#define EL_TAG    CreateResponse

/* FUNC(zx_FREE_idhrxml_CreateResponse) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

/* Called by: */
void zx_FREE_idhrxml_CreateResponse(struct zx_ctx* c, struct zx_idhrxml_CreateResponse_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */

  zx_free_attr(c, x->timeStamp, free_strs);
  zx_free_attr(c, x->itemIDRef, free_strs);

  {
      struct zx_lu_Status_s* e;
      struct zx_lu_Status_s* en;
      for (e = x->Status; e; e = en) {
	  en = (struct zx_lu_Status_s*)e->gg.g.n;
	  zx_FREE_lu_Status(c, e, free_strs);
      }
  }
  {
      struct zx_lu_Extension_s* e;
      struct zx_lu_Extension_s* en;
      for (e = x->Extension; e; e = en) {
	  en = (struct zx_lu_Extension_s*)e->gg.g.n;
	  zx_FREE_lu_Extension(c, e, free_strs);
      }
  }
  {
      struct zx_idhrxml_ItemData_s* e;
      struct zx_idhrxml_ItemData_s* en;
      for (e = x->ItemData; e; e = en) {
	  en = (struct zx_idhrxml_ItemData_s*)e->gg.g.n;
	  zx_FREE_idhrxml_ItemData(c, e, free_strs);
      }
  }


  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zx_NEW_idhrxml_CreateResponse) */

/* Trivial allocator/constructor for the datatype. */

/* Called by: */
struct zx_idhrxml_CreateResponse_s* zx_NEW_idhrxml_CreateResponse(struct zx_ctx* c)
{
  struct zx_idhrxml_CreateResponse_s* x = ZX_ZALLOC(c, struct zx_idhrxml_CreateResponse_s);
  x->gg.g.tok = zx_idhrxml_CreateResponse_ELEM;
  return x;
}

#ifdef ZX_ENA_AUX

/* FUNC(zx_DUP_STRS_idhrxml_CreateResponse) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

/* Called by: */
void zx_DUP_STRS_idhrxml_CreateResponse(struct zx_ctx* c, struct zx_idhrxml_CreateResponse_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */

  zx_dup_attr(c, x->timeStamp);
  zx_dup_attr(c, x->itemIDRef);

  {
      struct zx_lu_Status_s* e;
      for (e = x->Status; e; e = (struct zx_lu_Status_s*)e->gg.g.n)
	  zx_DUP_STRS_lu_Status(c, e);
  }
  {
      struct zx_lu_Extension_s* e;
      for (e = x->Extension; e; e = (struct zx_lu_Extension_s*)e->gg.g.n)
	  zx_DUP_STRS_lu_Extension(c, e);
  }
  {
      struct zx_idhrxml_ItemData_s* e;
      for (e = x->ItemData; e; e = (struct zx_idhrxml_ItemData_s*)e->gg.g.n)
	  zx_DUP_STRS_idhrxml_ItemData(c, e);
  }

}

/* FUNC(zx_DEEP_CLONE_idhrxml_CreateResponse) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

/* Called by: */
struct zx_idhrxml_CreateResponse_s* zx_DEEP_CLONE_idhrxml_CreateResponse(struct zx_ctx* c, struct zx_idhrxml_CreateResponse_s* x, int dup_strs)
{
  x = (struct zx_idhrxml_CreateResponse_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zx_idhrxml_CreateResponse_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */

  x->timeStamp = zx_clone_attr(c, x->timeStamp);
  x->itemIDRef = zx_clone_attr(c, x->itemIDRef);

  {
      struct zx_lu_Status_s* e;
      struct zx_lu_Status_s* en;
      struct zx_lu_Status_s* enn;
      for (enn = 0, e = x->Status; e; e = (struct zx_lu_Status_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_lu_Status(c, e, dup_strs);
	  if (!enn)
	      x->Status = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zx_lu_Extension_s* e;
      struct zx_lu_Extension_s* en;
      struct zx_lu_Extension_s* enn;
      for (enn = 0, e = x->Extension; e; e = (struct zx_lu_Extension_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_lu_Extension(c, e, dup_strs);
	  if (!enn)
	      x->Extension = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zx_idhrxml_ItemData_s* e;
      struct zx_idhrxml_ItemData_s* en;
      struct zx_idhrxml_ItemData_s* enn;
      for (enn = 0, e = x->ItemData; e; e = (struct zx_idhrxml_ItemData_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_idhrxml_ItemData(c, e, dup_strs);
	  if (!enn)
	      x->ItemData = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }

  return x;
}

/* FUNC(zx_WALK_SO_idhrxml_CreateResponse) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zx_WALK_SO_idhrxml_CreateResponse(struct zx_ctx* c, struct zx_idhrxml_CreateResponse_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  int ret = callback(&x->gg.g, ctx);
  if (ret)
    return ret;
  
  /* *** deal with xmlns specifications in exc c14n way */


  
  ret = zx_walk_so_unknown_attributes(c, &x->gg, ctx, callback); 
  if (ret)
    return ret;

  {
      struct zx_lu_Status_s* e;
      for (e = x->Status; e; e = (struct zx_lu_Status_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_lu_Status(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zx_lu_Extension_s* e;
      for (e = x->Extension; e; e = (struct zx_lu_Extension_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_lu_Extension(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zx_idhrxml_ItemData_s* e;
      for (e = x->ItemData; e; e = (struct zx_idhrxml_ItemData_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_idhrxml_ItemData(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }

  
  return zx_walk_so_unknown_elems_and_content(c, &x->gg, ctx, callback);
}

/* FUNC(zx_WALK_WO_idhrxml_CreateResponse) */

int zx_WALK_WO_idhrxml_CreateResponse(struct zx_ctx* c, struct zx_idhrxml_CreateResponse_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   idhrxml_Data
#define EL_STRUCT zx_idhrxml_Data_s
#define EL_NS     idhrxml
#define EL_TAG    Data

/* FUNC(zx_FREE_idhrxml_Data) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

/* Called by: */
void zx_FREE_idhrxml_Data(struct zx_ctx* c, struct zx_idhrxml_Data_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */

  zx_free_attr(c, x->nextOffset, free_strs);
  zx_free_attr(c, x->notSorted, free_strs);
  zx_free_attr(c, x->remaining, free_strs);
  zx_free_attr(c, x->setID, free_strs);
  zx_free_attr(c, x->changeFormat, free_strs);
  zx_free_attr(c, x->itemIDRef, free_strs);

  {
      struct zx_hrxml_Candidate_s* e;
      struct zx_hrxml_Candidate_s* en;
      for (e = x->Candidate; e; e = en) {
	  en = (struct zx_hrxml_Candidate_s*)e->gg.g.n;
	  zx_FREE_hrxml_Candidate(c, e, free_strs);
      }
  }
  {
      struct zx_idhrxml_Subscription_s* e;
      struct zx_idhrxml_Subscription_s* en;
      for (e = x->Subscription; e; e = en) {
	  en = (struct zx_idhrxml_Subscription_s*)e->gg.g.n;
	  zx_FREE_idhrxml_Subscription(c, e, free_strs);
      }
  }


  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zx_NEW_idhrxml_Data) */

/* Trivial allocator/constructor for the datatype. */

/* Called by: */
struct zx_idhrxml_Data_s* zx_NEW_idhrxml_Data(struct zx_ctx* c)
{
  struct zx_idhrxml_Data_s* x = ZX_ZALLOC(c, struct zx_idhrxml_Data_s);
  x->gg.g.tok = zx_idhrxml_Data_ELEM;
  return x;
}

#ifdef ZX_ENA_AUX

/* FUNC(zx_DUP_STRS_idhrxml_Data) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

/* Called by: */
void zx_DUP_STRS_idhrxml_Data(struct zx_ctx* c, struct zx_idhrxml_Data_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */

  zx_dup_attr(c, x->nextOffset);
  zx_dup_attr(c, x->notSorted);
  zx_dup_attr(c, x->remaining);
  zx_dup_attr(c, x->setID);
  zx_dup_attr(c, x->changeFormat);
  zx_dup_attr(c, x->itemIDRef);

  {
      struct zx_hrxml_Candidate_s* e;
      for (e = x->Candidate; e; e = (struct zx_hrxml_Candidate_s*)e->gg.g.n)
	  zx_DUP_STRS_hrxml_Candidate(c, e);
  }
  {
      struct zx_idhrxml_Subscription_s* e;
      for (e = x->Subscription; e; e = (struct zx_idhrxml_Subscription_s*)e->gg.g.n)
	  zx_DUP_STRS_idhrxml_Subscription(c, e);
  }

}

/* FUNC(zx_DEEP_CLONE_idhrxml_Data) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

/* Called by: */
struct zx_idhrxml_Data_s* zx_DEEP_CLONE_idhrxml_Data(struct zx_ctx* c, struct zx_idhrxml_Data_s* x, int dup_strs)
{
  x = (struct zx_idhrxml_Data_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zx_idhrxml_Data_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */

  x->nextOffset = zx_clone_attr(c, x->nextOffset);
  x->notSorted = zx_clone_attr(c, x->notSorted);
  x->remaining = zx_clone_attr(c, x->remaining);
  x->setID = zx_clone_attr(c, x->setID);
  x->changeFormat = zx_clone_attr(c, x->changeFormat);
  x->itemIDRef = zx_clone_attr(c, x->itemIDRef);

  {
      struct zx_hrxml_Candidate_s* e;
      struct zx_hrxml_Candidate_s* en;
      struct zx_hrxml_Candidate_s* enn;
      for (enn = 0, e = x->Candidate; e; e = (struct zx_hrxml_Candidate_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_hrxml_Candidate(c, e, dup_strs);
	  if (!enn)
	      x->Candidate = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zx_idhrxml_Subscription_s* e;
      struct zx_idhrxml_Subscription_s* en;
      struct zx_idhrxml_Subscription_s* enn;
      for (enn = 0, e = x->Subscription; e; e = (struct zx_idhrxml_Subscription_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_idhrxml_Subscription(c, e, dup_strs);
	  if (!enn)
	      x->Subscription = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }

  return x;
}

/* FUNC(zx_WALK_SO_idhrxml_Data) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zx_WALK_SO_idhrxml_Data(struct zx_ctx* c, struct zx_idhrxml_Data_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  int ret = callback(&x->gg.g, ctx);
  if (ret)
    return ret;
  
  /* *** deal with xmlns specifications in exc c14n way */


  
  ret = zx_walk_so_unknown_attributes(c, &x->gg, ctx, callback); 
  if (ret)
    return ret;

  {
      struct zx_hrxml_Candidate_s* e;
      for (e = x->Candidate; e; e = (struct zx_hrxml_Candidate_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_hrxml_Candidate(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zx_idhrxml_Subscription_s* e;
      for (e = x->Subscription; e; e = (struct zx_idhrxml_Subscription_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_idhrxml_Subscription(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }

  
  return zx_walk_so_unknown_elems_and_content(c, &x->gg, ctx, callback);
}

/* FUNC(zx_WALK_WO_idhrxml_Data) */

int zx_WALK_WO_idhrxml_Data(struct zx_ctx* c, struct zx_idhrxml_Data_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   idhrxml_Delete
#define EL_STRUCT zx_idhrxml_Delete_s
#define EL_NS     idhrxml
#define EL_TAG    Delete

/* FUNC(zx_FREE_idhrxml_Delete) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

/* Called by: */
void zx_FREE_idhrxml_Delete(struct zx_ctx* c, struct zx_idhrxml_Delete_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */

  zx_free_attr(c, x->itemID, free_strs);

  {
      struct zx_lu_Extension_s* e;
      struct zx_lu_Extension_s* en;
      for (e = x->Extension; e; e = en) {
	  en = (struct zx_lu_Extension_s*)e->gg.g.n;
	  zx_FREE_lu_Extension(c, e, free_strs);
      }
  }
  {
      struct zx_idhrxml_DeleteItem_s* e;
      struct zx_idhrxml_DeleteItem_s* en;
      for (e = x->DeleteItem; e; e = en) {
	  en = (struct zx_idhrxml_DeleteItem_s*)e->gg.g.n;
	  zx_FREE_idhrxml_DeleteItem(c, e, free_strs);
      }
  }


  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zx_NEW_idhrxml_Delete) */

/* Trivial allocator/constructor for the datatype. */

/* Called by: */
struct zx_idhrxml_Delete_s* zx_NEW_idhrxml_Delete(struct zx_ctx* c)
{
  struct zx_idhrxml_Delete_s* x = ZX_ZALLOC(c, struct zx_idhrxml_Delete_s);
  x->gg.g.tok = zx_idhrxml_Delete_ELEM;
  return x;
}

#ifdef ZX_ENA_AUX

/* FUNC(zx_DUP_STRS_idhrxml_Delete) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

/* Called by: */
void zx_DUP_STRS_idhrxml_Delete(struct zx_ctx* c, struct zx_idhrxml_Delete_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */

  zx_dup_attr(c, x->itemID);

  {
      struct zx_lu_Extension_s* e;
      for (e = x->Extension; e; e = (struct zx_lu_Extension_s*)e->gg.g.n)
	  zx_DUP_STRS_lu_Extension(c, e);
  }
  {
      struct zx_idhrxml_DeleteItem_s* e;
      for (e = x->DeleteItem; e; e = (struct zx_idhrxml_DeleteItem_s*)e->gg.g.n)
	  zx_DUP_STRS_idhrxml_DeleteItem(c, e);
  }

}

/* FUNC(zx_DEEP_CLONE_idhrxml_Delete) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

/* Called by: */
struct zx_idhrxml_Delete_s* zx_DEEP_CLONE_idhrxml_Delete(struct zx_ctx* c, struct zx_idhrxml_Delete_s* x, int dup_strs)
{
  x = (struct zx_idhrxml_Delete_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zx_idhrxml_Delete_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */

  x->itemID = zx_clone_attr(c, x->itemID);

  {
      struct zx_lu_Extension_s* e;
      struct zx_lu_Extension_s* en;
      struct zx_lu_Extension_s* enn;
      for (enn = 0, e = x->Extension; e; e = (struct zx_lu_Extension_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_lu_Extension(c, e, dup_strs);
	  if (!enn)
	      x->Extension = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zx_idhrxml_DeleteItem_s* e;
      struct zx_idhrxml_DeleteItem_s* en;
      struct zx_idhrxml_DeleteItem_s* enn;
      for (enn = 0, e = x->DeleteItem; e; e = (struct zx_idhrxml_DeleteItem_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_idhrxml_DeleteItem(c, e, dup_strs);
	  if (!enn)
	      x->DeleteItem = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }

  return x;
}

/* FUNC(zx_WALK_SO_idhrxml_Delete) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zx_WALK_SO_idhrxml_Delete(struct zx_ctx* c, struct zx_idhrxml_Delete_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  int ret = callback(&x->gg.g, ctx);
  if (ret)
    return ret;
  
  /* *** deal with xmlns specifications in exc c14n way */


  
  ret = zx_walk_so_unknown_attributes(c, &x->gg, ctx, callback); 
  if (ret)
    return ret;

  {
      struct zx_lu_Extension_s* e;
      for (e = x->Extension; e; e = (struct zx_lu_Extension_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_lu_Extension(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zx_idhrxml_DeleteItem_s* e;
      for (e = x->DeleteItem; e; e = (struct zx_idhrxml_DeleteItem_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_idhrxml_DeleteItem(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }

  
  return zx_walk_so_unknown_elems_and_content(c, &x->gg, ctx, callback);
}

/* FUNC(zx_WALK_WO_idhrxml_Delete) */

int zx_WALK_WO_idhrxml_Delete(struct zx_ctx* c, struct zx_idhrxml_Delete_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   idhrxml_DeleteItem
#define EL_STRUCT zx_idhrxml_DeleteItem_s
#define EL_NS     idhrxml
#define EL_TAG    DeleteItem

/* FUNC(zx_FREE_idhrxml_DeleteItem) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

/* Called by: */
void zx_FREE_idhrxml_DeleteItem(struct zx_ctx* c, struct zx_idhrxml_DeleteItem_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */

  zx_free_attr(c, x->id, free_strs);
  zx_free_attr(c, x->notChangedSince, free_strs);
  zx_free_attr(c, x->itemID, free_strs);
  zx_free_attr(c, x->objectType, free_strs);
  zx_free_attr(c, x->predefined, free_strs);

  zx_free_simple_elems(c, x->Select, free_strs);


  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zx_NEW_idhrxml_DeleteItem) */

/* Trivial allocator/constructor for the datatype. */

/* Called by: */
struct zx_idhrxml_DeleteItem_s* zx_NEW_idhrxml_DeleteItem(struct zx_ctx* c)
{
  struct zx_idhrxml_DeleteItem_s* x = ZX_ZALLOC(c, struct zx_idhrxml_DeleteItem_s);
  x->gg.g.tok = zx_idhrxml_DeleteItem_ELEM;
  return x;
}

#ifdef ZX_ENA_AUX

/* FUNC(zx_DUP_STRS_idhrxml_DeleteItem) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

/* Called by: */
void zx_DUP_STRS_idhrxml_DeleteItem(struct zx_ctx* c, struct zx_idhrxml_DeleteItem_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */

  zx_dup_attr(c, x->id);
  zx_dup_attr(c, x->notChangedSince);
  zx_dup_attr(c, x->itemID);
  zx_dup_attr(c, x->objectType);
  zx_dup_attr(c, x->predefined);

  zx_dup_strs_simple_elems(c, x->Select);

}

/* FUNC(zx_DEEP_CLONE_idhrxml_DeleteItem) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

/* Called by: */
struct zx_idhrxml_DeleteItem_s* zx_DEEP_CLONE_idhrxml_DeleteItem(struct zx_ctx* c, struct zx_idhrxml_DeleteItem_s* x, int dup_strs)
{
  x = (struct zx_idhrxml_DeleteItem_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zx_idhrxml_DeleteItem_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */

  x->id = zx_clone_attr(c, x->id);
  x->notChangedSince = zx_clone_attr(c, x->notChangedSince);
  x->itemID = zx_clone_attr(c, x->itemID);
  x->objectType = zx_clone_attr(c, x->objectType);
  x->predefined = zx_clone_attr(c, x->predefined);

  x->Select = zx_deep_clone_simple_elems(c,x->Select, dup_strs);

  return x;
}

/* FUNC(zx_WALK_SO_idhrxml_DeleteItem) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zx_WALK_SO_idhrxml_DeleteItem(struct zx_ctx* c, struct zx_idhrxml_DeleteItem_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  int ret = callback(&x->gg.g, ctx);
  if (ret)
    return ret;
  
  /* *** deal with xmlns specifications in exc c14n way */


  
  ret = zx_walk_so_unknown_attributes(c, &x->gg, ctx, callback); 
  if (ret)
    return ret;

  ret = zx_walk_so_simple_elems(c, x->Select, ctx, callback);
  if (ret)
    return ret;

  
  return zx_walk_so_unknown_elems_and_content(c, &x->gg, ctx, callback);
}

/* FUNC(zx_WALK_WO_idhrxml_DeleteItem) */

int zx_WALK_WO_idhrxml_DeleteItem(struct zx_ctx* c, struct zx_idhrxml_DeleteItem_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   idhrxml_DeleteResponse
#define EL_STRUCT zx_idhrxml_DeleteResponse_s
#define EL_NS     idhrxml
#define EL_TAG    DeleteResponse

/* FUNC(zx_FREE_idhrxml_DeleteResponse) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

/* Called by: */
void zx_FREE_idhrxml_DeleteResponse(struct zx_ctx* c, struct zx_idhrxml_DeleteResponse_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */

  zx_free_attr(c, x->itemIDRef, free_strs);

  {
      struct zx_lu_Status_s* e;
      struct zx_lu_Status_s* en;
      for (e = x->Status; e; e = en) {
	  en = (struct zx_lu_Status_s*)e->gg.g.n;
	  zx_FREE_lu_Status(c, e, free_strs);
      }
  }
  {
      struct zx_lu_Extension_s* e;
      struct zx_lu_Extension_s* en;
      for (e = x->Extension; e; e = en) {
	  en = (struct zx_lu_Extension_s*)e->gg.g.n;
	  zx_FREE_lu_Extension(c, e, free_strs);
      }
  }


  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zx_NEW_idhrxml_DeleteResponse) */

/* Trivial allocator/constructor for the datatype. */

/* Called by: */
struct zx_idhrxml_DeleteResponse_s* zx_NEW_idhrxml_DeleteResponse(struct zx_ctx* c)
{
  struct zx_idhrxml_DeleteResponse_s* x = ZX_ZALLOC(c, struct zx_idhrxml_DeleteResponse_s);
  x->gg.g.tok = zx_idhrxml_DeleteResponse_ELEM;
  return x;
}

#ifdef ZX_ENA_AUX

/* FUNC(zx_DUP_STRS_idhrxml_DeleteResponse) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

/* Called by: */
void zx_DUP_STRS_idhrxml_DeleteResponse(struct zx_ctx* c, struct zx_idhrxml_DeleteResponse_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */

  zx_dup_attr(c, x->itemIDRef);

  {
      struct zx_lu_Status_s* e;
      for (e = x->Status; e; e = (struct zx_lu_Status_s*)e->gg.g.n)
	  zx_DUP_STRS_lu_Status(c, e);
  }
  {
      struct zx_lu_Extension_s* e;
      for (e = x->Extension; e; e = (struct zx_lu_Extension_s*)e->gg.g.n)
	  zx_DUP_STRS_lu_Extension(c, e);
  }

}

/* FUNC(zx_DEEP_CLONE_idhrxml_DeleteResponse) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

/* Called by: */
struct zx_idhrxml_DeleteResponse_s* zx_DEEP_CLONE_idhrxml_DeleteResponse(struct zx_ctx* c, struct zx_idhrxml_DeleteResponse_s* x, int dup_strs)
{
  x = (struct zx_idhrxml_DeleteResponse_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zx_idhrxml_DeleteResponse_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */

  x->itemIDRef = zx_clone_attr(c, x->itemIDRef);

  {
      struct zx_lu_Status_s* e;
      struct zx_lu_Status_s* en;
      struct zx_lu_Status_s* enn;
      for (enn = 0, e = x->Status; e; e = (struct zx_lu_Status_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_lu_Status(c, e, dup_strs);
	  if (!enn)
	      x->Status = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zx_lu_Extension_s* e;
      struct zx_lu_Extension_s* en;
      struct zx_lu_Extension_s* enn;
      for (enn = 0, e = x->Extension; e; e = (struct zx_lu_Extension_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_lu_Extension(c, e, dup_strs);
	  if (!enn)
	      x->Extension = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }

  return x;
}

/* FUNC(zx_WALK_SO_idhrxml_DeleteResponse) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zx_WALK_SO_idhrxml_DeleteResponse(struct zx_ctx* c, struct zx_idhrxml_DeleteResponse_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  int ret = callback(&x->gg.g, ctx);
  if (ret)
    return ret;
  
  /* *** deal with xmlns specifications in exc c14n way */


  
  ret = zx_walk_so_unknown_attributes(c, &x->gg, ctx, callback); 
  if (ret)
    return ret;

  {
      struct zx_lu_Status_s* e;
      for (e = x->Status; e; e = (struct zx_lu_Status_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_lu_Status(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zx_lu_Extension_s* e;
      for (e = x->Extension; e; e = (struct zx_lu_Extension_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_lu_Extension(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }

  
  return zx_walk_so_unknown_elems_and_content(c, &x->gg, ctx, callback);
}

/* FUNC(zx_WALK_WO_idhrxml_DeleteResponse) */

int zx_WALK_WO_idhrxml_DeleteResponse(struct zx_ctx* c, struct zx_idhrxml_DeleteResponse_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   idhrxml_ItemData
#define EL_STRUCT zx_idhrxml_ItemData_s
#define EL_NS     idhrxml
#define EL_TAG    ItemData

/* FUNC(zx_FREE_idhrxml_ItemData) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

/* Called by: */
void zx_FREE_idhrxml_ItemData(struct zx_ctx* c, struct zx_idhrxml_ItemData_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */

  zx_free_attr(c, x->notSorted, free_strs);
  zx_free_attr(c, x->changeFormat, free_strs);
  zx_free_attr(c, x->itemIDRef, free_strs);

  {
      struct zx_hrxml_Candidate_s* e;
      struct zx_hrxml_Candidate_s* en;
      for (e = x->Candidate; e; e = en) {
	  en = (struct zx_hrxml_Candidate_s*)e->gg.g.n;
	  zx_FREE_hrxml_Candidate(c, e, free_strs);
      }
  }
  {
      struct zx_idhrxml_Subscription_s* e;
      struct zx_idhrxml_Subscription_s* en;
      for (e = x->Subscription; e; e = en) {
	  en = (struct zx_idhrxml_Subscription_s*)e->gg.g.n;
	  zx_FREE_idhrxml_Subscription(c, e, free_strs);
      }
  }


  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zx_NEW_idhrxml_ItemData) */

/* Trivial allocator/constructor for the datatype. */

/* Called by: */
struct zx_idhrxml_ItemData_s* zx_NEW_idhrxml_ItemData(struct zx_ctx* c)
{
  struct zx_idhrxml_ItemData_s* x = ZX_ZALLOC(c, struct zx_idhrxml_ItemData_s);
  x->gg.g.tok = zx_idhrxml_ItemData_ELEM;
  return x;
}

#ifdef ZX_ENA_AUX

/* FUNC(zx_DUP_STRS_idhrxml_ItemData) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

/* Called by: */
void zx_DUP_STRS_idhrxml_ItemData(struct zx_ctx* c, struct zx_idhrxml_ItemData_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */

  zx_dup_attr(c, x->notSorted);
  zx_dup_attr(c, x->changeFormat);
  zx_dup_attr(c, x->itemIDRef);

  {
      struct zx_hrxml_Candidate_s* e;
      for (e = x->Candidate; e; e = (struct zx_hrxml_Candidate_s*)e->gg.g.n)
	  zx_DUP_STRS_hrxml_Candidate(c, e);
  }
  {
      struct zx_idhrxml_Subscription_s* e;
      for (e = x->Subscription; e; e = (struct zx_idhrxml_Subscription_s*)e->gg.g.n)
	  zx_DUP_STRS_idhrxml_Subscription(c, e);
  }

}

/* FUNC(zx_DEEP_CLONE_idhrxml_ItemData) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

/* Called by: */
struct zx_idhrxml_ItemData_s* zx_DEEP_CLONE_idhrxml_ItemData(struct zx_ctx* c, struct zx_idhrxml_ItemData_s* x, int dup_strs)
{
  x = (struct zx_idhrxml_ItemData_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zx_idhrxml_ItemData_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */

  x->notSorted = zx_clone_attr(c, x->notSorted);
  x->changeFormat = zx_clone_attr(c, x->changeFormat);
  x->itemIDRef = zx_clone_attr(c, x->itemIDRef);

  {
      struct zx_hrxml_Candidate_s* e;
      struct zx_hrxml_Candidate_s* en;
      struct zx_hrxml_Candidate_s* enn;
      for (enn = 0, e = x->Candidate; e; e = (struct zx_hrxml_Candidate_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_hrxml_Candidate(c, e, dup_strs);
	  if (!enn)
	      x->Candidate = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zx_idhrxml_Subscription_s* e;
      struct zx_idhrxml_Subscription_s* en;
      struct zx_idhrxml_Subscription_s* enn;
      for (enn = 0, e = x->Subscription; e; e = (struct zx_idhrxml_Subscription_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_idhrxml_Subscription(c, e, dup_strs);
	  if (!enn)
	      x->Subscription = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }

  return x;
}

/* FUNC(zx_WALK_SO_idhrxml_ItemData) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zx_WALK_SO_idhrxml_ItemData(struct zx_ctx* c, struct zx_idhrxml_ItemData_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  int ret = callback(&x->gg.g, ctx);
  if (ret)
    return ret;
  
  /* *** deal with xmlns specifications in exc c14n way */


  
  ret = zx_walk_so_unknown_attributes(c, &x->gg, ctx, callback); 
  if (ret)
    return ret;

  {
      struct zx_hrxml_Candidate_s* e;
      for (e = x->Candidate; e; e = (struct zx_hrxml_Candidate_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_hrxml_Candidate(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zx_idhrxml_Subscription_s* e;
      for (e = x->Subscription; e; e = (struct zx_idhrxml_Subscription_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_idhrxml_Subscription(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }

  
  return zx_walk_so_unknown_elems_and_content(c, &x->gg, ctx, callback);
}

/* FUNC(zx_WALK_WO_idhrxml_ItemData) */

int zx_WALK_WO_idhrxml_ItemData(struct zx_ctx* c, struct zx_idhrxml_ItemData_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   idhrxml_Modify
#define EL_STRUCT zx_idhrxml_Modify_s
#define EL_NS     idhrxml
#define EL_TAG    Modify

/* FUNC(zx_FREE_idhrxml_Modify) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

/* Called by: */
void zx_FREE_idhrxml_Modify(struct zx_ctx* c, struct zx_idhrxml_Modify_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */

  zx_free_attr(c, x->itemID, free_strs);

  {
      struct zx_lu_Extension_s* e;
      struct zx_lu_Extension_s* en;
      for (e = x->Extension; e; e = en) {
	  en = (struct zx_lu_Extension_s*)e->gg.g.n;
	  zx_FREE_lu_Extension(c, e, free_strs);
      }
  }
  {
      struct zx_idhrxml_Subscription_s* e;
      struct zx_idhrxml_Subscription_s* en;
      for (e = x->Subscription; e; e = en) {
	  en = (struct zx_idhrxml_Subscription_s*)e->gg.g.n;
	  zx_FREE_idhrxml_Subscription(c, e, free_strs);
      }
  }
  {
      struct zx_idhrxml_ModifyItem_s* e;
      struct zx_idhrxml_ModifyItem_s* en;
      for (e = x->ModifyItem; e; e = en) {
	  en = (struct zx_idhrxml_ModifyItem_s*)e->gg.g.n;
	  zx_FREE_idhrxml_ModifyItem(c, e, free_strs);
      }
  }
  {
      struct zx_idhrxml_ResultQuery_s* e;
      struct zx_idhrxml_ResultQuery_s* en;
      for (e = x->ResultQuery; e; e = en) {
	  en = (struct zx_idhrxml_ResultQuery_s*)e->gg.g.n;
	  zx_FREE_idhrxml_ResultQuery(c, e, free_strs);
      }
  }


  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zx_NEW_idhrxml_Modify) */

/* Trivial allocator/constructor for the datatype. */

/* Called by: */
struct zx_idhrxml_Modify_s* zx_NEW_idhrxml_Modify(struct zx_ctx* c)
{
  struct zx_idhrxml_Modify_s* x = ZX_ZALLOC(c, struct zx_idhrxml_Modify_s);
  x->gg.g.tok = zx_idhrxml_Modify_ELEM;
  return x;
}

#ifdef ZX_ENA_AUX

/* FUNC(zx_DUP_STRS_idhrxml_Modify) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

/* Called by: */
void zx_DUP_STRS_idhrxml_Modify(struct zx_ctx* c, struct zx_idhrxml_Modify_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */

  zx_dup_attr(c, x->itemID);

  {
      struct zx_lu_Extension_s* e;
      for (e = x->Extension; e; e = (struct zx_lu_Extension_s*)e->gg.g.n)
	  zx_DUP_STRS_lu_Extension(c, e);
  }
  {
      struct zx_idhrxml_Subscription_s* e;
      for (e = x->Subscription; e; e = (struct zx_idhrxml_Subscription_s*)e->gg.g.n)
	  zx_DUP_STRS_idhrxml_Subscription(c, e);
  }
  {
      struct zx_idhrxml_ModifyItem_s* e;
      for (e = x->ModifyItem; e; e = (struct zx_idhrxml_ModifyItem_s*)e->gg.g.n)
	  zx_DUP_STRS_idhrxml_ModifyItem(c, e);
  }
  {
      struct zx_idhrxml_ResultQuery_s* e;
      for (e = x->ResultQuery; e; e = (struct zx_idhrxml_ResultQuery_s*)e->gg.g.n)
	  zx_DUP_STRS_idhrxml_ResultQuery(c, e);
  }

}

/* FUNC(zx_DEEP_CLONE_idhrxml_Modify) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

/* Called by: */
struct zx_idhrxml_Modify_s* zx_DEEP_CLONE_idhrxml_Modify(struct zx_ctx* c, struct zx_idhrxml_Modify_s* x, int dup_strs)
{
  x = (struct zx_idhrxml_Modify_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zx_idhrxml_Modify_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */

  x->itemID = zx_clone_attr(c, x->itemID);

  {
      struct zx_lu_Extension_s* e;
      struct zx_lu_Extension_s* en;
      struct zx_lu_Extension_s* enn;
      for (enn = 0, e = x->Extension; e; e = (struct zx_lu_Extension_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_lu_Extension(c, e, dup_strs);
	  if (!enn)
	      x->Extension = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zx_idhrxml_Subscription_s* e;
      struct zx_idhrxml_Subscription_s* en;
      struct zx_idhrxml_Subscription_s* enn;
      for (enn = 0, e = x->Subscription; e; e = (struct zx_idhrxml_Subscription_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_idhrxml_Subscription(c, e, dup_strs);
	  if (!enn)
	      x->Subscription = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zx_idhrxml_ModifyItem_s* e;
      struct zx_idhrxml_ModifyItem_s* en;
      struct zx_idhrxml_ModifyItem_s* enn;
      for (enn = 0, e = x->ModifyItem; e; e = (struct zx_idhrxml_ModifyItem_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_idhrxml_ModifyItem(c, e, dup_strs);
	  if (!enn)
	      x->ModifyItem = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zx_idhrxml_ResultQuery_s* e;
      struct zx_idhrxml_ResultQuery_s* en;
      struct zx_idhrxml_ResultQuery_s* enn;
      for (enn = 0, e = x->ResultQuery; e; e = (struct zx_idhrxml_ResultQuery_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_idhrxml_ResultQuery(c, e, dup_strs);
	  if (!enn)
	      x->ResultQuery = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }

  return x;
}

/* FUNC(zx_WALK_SO_idhrxml_Modify) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zx_WALK_SO_idhrxml_Modify(struct zx_ctx* c, struct zx_idhrxml_Modify_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  int ret = callback(&x->gg.g, ctx);
  if (ret)
    return ret;
  
  /* *** deal with xmlns specifications in exc c14n way */


  
  ret = zx_walk_so_unknown_attributes(c, &x->gg, ctx, callback); 
  if (ret)
    return ret;

  {
      struct zx_lu_Extension_s* e;
      for (e = x->Extension; e; e = (struct zx_lu_Extension_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_lu_Extension(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zx_idhrxml_Subscription_s* e;
      for (e = x->Subscription; e; e = (struct zx_idhrxml_Subscription_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_idhrxml_Subscription(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zx_idhrxml_ModifyItem_s* e;
      for (e = x->ModifyItem; e; e = (struct zx_idhrxml_ModifyItem_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_idhrxml_ModifyItem(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zx_idhrxml_ResultQuery_s* e;
      for (e = x->ResultQuery; e; e = (struct zx_idhrxml_ResultQuery_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_idhrxml_ResultQuery(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }

  
  return zx_walk_so_unknown_elems_and_content(c, &x->gg, ctx, callback);
}

/* FUNC(zx_WALK_WO_idhrxml_Modify) */

int zx_WALK_WO_idhrxml_Modify(struct zx_ctx* c, struct zx_idhrxml_Modify_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   idhrxml_ModifyItem
#define EL_STRUCT zx_idhrxml_ModifyItem_s
#define EL_NS     idhrxml
#define EL_TAG    ModifyItem

/* FUNC(zx_FREE_idhrxml_ModifyItem) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

/* Called by: */
void zx_FREE_idhrxml_ModifyItem(struct zx_ctx* c, struct zx_idhrxml_ModifyItem_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */

  zx_free_attr(c, x->id, free_strs);
  zx_free_attr(c, x->notChangedSince, free_strs);
  zx_free_attr(c, x->overrideAllowed, free_strs);
  zx_free_attr(c, x->itemID, free_strs);
  zx_free_attr(c, x->objectType, free_strs);
  zx_free_attr(c, x->predefined, free_strs);

  zx_free_simple_elems(c, x->Select, free_strs);
  {
      struct zx_idhrxml_NewData_s* e;
      struct zx_idhrxml_NewData_s* en;
      for (e = x->NewData; e; e = en) {
	  en = (struct zx_idhrxml_NewData_s*)e->gg.g.n;
	  zx_FREE_idhrxml_NewData(c, e, free_strs);
      }
  }


  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zx_NEW_idhrxml_ModifyItem) */

/* Trivial allocator/constructor for the datatype. */

/* Called by: */
struct zx_idhrxml_ModifyItem_s* zx_NEW_idhrxml_ModifyItem(struct zx_ctx* c)
{
  struct zx_idhrxml_ModifyItem_s* x = ZX_ZALLOC(c, struct zx_idhrxml_ModifyItem_s);
  x->gg.g.tok = zx_idhrxml_ModifyItem_ELEM;
  return x;
}

#ifdef ZX_ENA_AUX

/* FUNC(zx_DUP_STRS_idhrxml_ModifyItem) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

/* Called by: */
void zx_DUP_STRS_idhrxml_ModifyItem(struct zx_ctx* c, struct zx_idhrxml_ModifyItem_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */

  zx_dup_attr(c, x->id);
  zx_dup_attr(c, x->notChangedSince);
  zx_dup_attr(c, x->overrideAllowed);
  zx_dup_attr(c, x->itemID);
  zx_dup_attr(c, x->objectType);
  zx_dup_attr(c, x->predefined);

  zx_dup_strs_simple_elems(c, x->Select);
  {
      struct zx_idhrxml_NewData_s* e;
      for (e = x->NewData; e; e = (struct zx_idhrxml_NewData_s*)e->gg.g.n)
	  zx_DUP_STRS_idhrxml_NewData(c, e);
  }

}

/* FUNC(zx_DEEP_CLONE_idhrxml_ModifyItem) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

/* Called by: */
struct zx_idhrxml_ModifyItem_s* zx_DEEP_CLONE_idhrxml_ModifyItem(struct zx_ctx* c, struct zx_idhrxml_ModifyItem_s* x, int dup_strs)
{
  x = (struct zx_idhrxml_ModifyItem_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zx_idhrxml_ModifyItem_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */

  x->id = zx_clone_attr(c, x->id);
  x->notChangedSince = zx_clone_attr(c, x->notChangedSince);
  x->overrideAllowed = zx_clone_attr(c, x->overrideAllowed);
  x->itemID = zx_clone_attr(c, x->itemID);
  x->objectType = zx_clone_attr(c, x->objectType);
  x->predefined = zx_clone_attr(c, x->predefined);

  x->Select = zx_deep_clone_simple_elems(c,x->Select, dup_strs);
  {
      struct zx_idhrxml_NewData_s* e;
      struct zx_idhrxml_NewData_s* en;
      struct zx_idhrxml_NewData_s* enn;
      for (enn = 0, e = x->NewData; e; e = (struct zx_idhrxml_NewData_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_idhrxml_NewData(c, e, dup_strs);
	  if (!enn)
	      x->NewData = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }

  return x;
}

/* FUNC(zx_WALK_SO_idhrxml_ModifyItem) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zx_WALK_SO_idhrxml_ModifyItem(struct zx_ctx* c, struct zx_idhrxml_ModifyItem_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  int ret = callback(&x->gg.g, ctx);
  if (ret)
    return ret;
  
  /* *** deal with xmlns specifications in exc c14n way */


  
  ret = zx_walk_so_unknown_attributes(c, &x->gg, ctx, callback); 
  if (ret)
    return ret;

  ret = zx_walk_so_simple_elems(c, x->Select, ctx, callback);
  if (ret)
    return ret;
  {
      struct zx_idhrxml_NewData_s* e;
      for (e = x->NewData; e; e = (struct zx_idhrxml_NewData_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_idhrxml_NewData(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }

  
  return zx_walk_so_unknown_elems_and_content(c, &x->gg, ctx, callback);
}

/* FUNC(zx_WALK_WO_idhrxml_ModifyItem) */

int zx_WALK_WO_idhrxml_ModifyItem(struct zx_ctx* c, struct zx_idhrxml_ModifyItem_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   idhrxml_ModifyResponse
#define EL_STRUCT zx_idhrxml_ModifyResponse_s
#define EL_NS     idhrxml
#define EL_TAG    ModifyResponse

/* FUNC(zx_FREE_idhrxml_ModifyResponse) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

/* Called by: */
void zx_FREE_idhrxml_ModifyResponse(struct zx_ctx* c, struct zx_idhrxml_ModifyResponse_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */

  zx_free_attr(c, x->timeStamp, free_strs);
  zx_free_attr(c, x->itemIDRef, free_strs);

  {
      struct zx_lu_Status_s* e;
      struct zx_lu_Status_s* en;
      for (e = x->Status; e; e = en) {
	  en = (struct zx_lu_Status_s*)e->gg.g.n;
	  zx_FREE_lu_Status(c, e, free_strs);
      }
  }
  {
      struct zx_lu_Extension_s* e;
      struct zx_lu_Extension_s* en;
      for (e = x->Extension; e; e = en) {
	  en = (struct zx_lu_Extension_s*)e->gg.g.n;
	  zx_FREE_lu_Extension(c, e, free_strs);
      }
  }
  {
      struct zx_idhrxml_ItemData_s* e;
      struct zx_idhrxml_ItemData_s* en;
      for (e = x->ItemData; e; e = en) {
	  en = (struct zx_idhrxml_ItemData_s*)e->gg.g.n;
	  zx_FREE_idhrxml_ItemData(c, e, free_strs);
      }
  }


  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zx_NEW_idhrxml_ModifyResponse) */

/* Trivial allocator/constructor for the datatype. */

/* Called by: */
struct zx_idhrxml_ModifyResponse_s* zx_NEW_idhrxml_ModifyResponse(struct zx_ctx* c)
{
  struct zx_idhrxml_ModifyResponse_s* x = ZX_ZALLOC(c, struct zx_idhrxml_ModifyResponse_s);
  x->gg.g.tok = zx_idhrxml_ModifyResponse_ELEM;
  return x;
}

#ifdef ZX_ENA_AUX

/* FUNC(zx_DUP_STRS_idhrxml_ModifyResponse) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

/* Called by: */
void zx_DUP_STRS_idhrxml_ModifyResponse(struct zx_ctx* c, struct zx_idhrxml_ModifyResponse_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */

  zx_dup_attr(c, x->timeStamp);
  zx_dup_attr(c, x->itemIDRef);

  {
      struct zx_lu_Status_s* e;
      for (e = x->Status; e; e = (struct zx_lu_Status_s*)e->gg.g.n)
	  zx_DUP_STRS_lu_Status(c, e);
  }
  {
      struct zx_lu_Extension_s* e;
      for (e = x->Extension; e; e = (struct zx_lu_Extension_s*)e->gg.g.n)
	  zx_DUP_STRS_lu_Extension(c, e);
  }
  {
      struct zx_idhrxml_ItemData_s* e;
      for (e = x->ItemData; e; e = (struct zx_idhrxml_ItemData_s*)e->gg.g.n)
	  zx_DUP_STRS_idhrxml_ItemData(c, e);
  }

}

/* FUNC(zx_DEEP_CLONE_idhrxml_ModifyResponse) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

/* Called by: */
struct zx_idhrxml_ModifyResponse_s* zx_DEEP_CLONE_idhrxml_ModifyResponse(struct zx_ctx* c, struct zx_idhrxml_ModifyResponse_s* x, int dup_strs)
{
  x = (struct zx_idhrxml_ModifyResponse_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zx_idhrxml_ModifyResponse_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */

  x->timeStamp = zx_clone_attr(c, x->timeStamp);
  x->itemIDRef = zx_clone_attr(c, x->itemIDRef);

  {
      struct zx_lu_Status_s* e;
      struct zx_lu_Status_s* en;
      struct zx_lu_Status_s* enn;
      for (enn = 0, e = x->Status; e; e = (struct zx_lu_Status_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_lu_Status(c, e, dup_strs);
	  if (!enn)
	      x->Status = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zx_lu_Extension_s* e;
      struct zx_lu_Extension_s* en;
      struct zx_lu_Extension_s* enn;
      for (enn = 0, e = x->Extension; e; e = (struct zx_lu_Extension_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_lu_Extension(c, e, dup_strs);
	  if (!enn)
	      x->Extension = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zx_idhrxml_ItemData_s* e;
      struct zx_idhrxml_ItemData_s* en;
      struct zx_idhrxml_ItemData_s* enn;
      for (enn = 0, e = x->ItemData; e; e = (struct zx_idhrxml_ItemData_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_idhrxml_ItemData(c, e, dup_strs);
	  if (!enn)
	      x->ItemData = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }

  return x;
}

/* FUNC(zx_WALK_SO_idhrxml_ModifyResponse) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zx_WALK_SO_idhrxml_ModifyResponse(struct zx_ctx* c, struct zx_idhrxml_ModifyResponse_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  int ret = callback(&x->gg.g, ctx);
  if (ret)
    return ret;
  
  /* *** deal with xmlns specifications in exc c14n way */


  
  ret = zx_walk_so_unknown_attributes(c, &x->gg, ctx, callback); 
  if (ret)
    return ret;

  {
      struct zx_lu_Status_s* e;
      for (e = x->Status; e; e = (struct zx_lu_Status_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_lu_Status(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zx_lu_Extension_s* e;
      for (e = x->Extension; e; e = (struct zx_lu_Extension_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_lu_Extension(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zx_idhrxml_ItemData_s* e;
      for (e = x->ItemData; e; e = (struct zx_idhrxml_ItemData_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_idhrxml_ItemData(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }

  
  return zx_walk_so_unknown_elems_and_content(c, &x->gg, ctx, callback);
}

/* FUNC(zx_WALK_WO_idhrxml_ModifyResponse) */

int zx_WALK_WO_idhrxml_ModifyResponse(struct zx_ctx* c, struct zx_idhrxml_ModifyResponse_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   idhrxml_NewData
#define EL_STRUCT zx_idhrxml_NewData_s
#define EL_NS     idhrxml
#define EL_TAG    NewData

/* FUNC(zx_FREE_idhrxml_NewData) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

/* Called by: */
void zx_FREE_idhrxml_NewData(struct zx_ctx* c, struct zx_idhrxml_NewData_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */


  {
      struct zx_hrxml_Candidate_s* e;
      struct zx_hrxml_Candidate_s* en;
      for (e = x->Candidate; e; e = en) {
	  en = (struct zx_hrxml_Candidate_s*)e->gg.g.n;
	  zx_FREE_hrxml_Candidate(c, e, free_strs);
      }
  }
  {
      struct zx_idhrxml_Subscription_s* e;
      struct zx_idhrxml_Subscription_s* en;
      for (e = x->Subscription; e; e = en) {
	  en = (struct zx_idhrxml_Subscription_s*)e->gg.g.n;
	  zx_FREE_idhrxml_Subscription(c, e, free_strs);
      }
  }


  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zx_NEW_idhrxml_NewData) */

/* Trivial allocator/constructor for the datatype. */

/* Called by: */
struct zx_idhrxml_NewData_s* zx_NEW_idhrxml_NewData(struct zx_ctx* c)
{
  struct zx_idhrxml_NewData_s* x = ZX_ZALLOC(c, struct zx_idhrxml_NewData_s);
  x->gg.g.tok = zx_idhrxml_NewData_ELEM;
  return x;
}

#ifdef ZX_ENA_AUX

/* FUNC(zx_DUP_STRS_idhrxml_NewData) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

/* Called by: */
void zx_DUP_STRS_idhrxml_NewData(struct zx_ctx* c, struct zx_idhrxml_NewData_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */


  {
      struct zx_hrxml_Candidate_s* e;
      for (e = x->Candidate; e; e = (struct zx_hrxml_Candidate_s*)e->gg.g.n)
	  zx_DUP_STRS_hrxml_Candidate(c, e);
  }
  {
      struct zx_idhrxml_Subscription_s* e;
      for (e = x->Subscription; e; e = (struct zx_idhrxml_Subscription_s*)e->gg.g.n)
	  zx_DUP_STRS_idhrxml_Subscription(c, e);
  }

}

/* FUNC(zx_DEEP_CLONE_idhrxml_NewData) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

/* Called by: */
struct zx_idhrxml_NewData_s* zx_DEEP_CLONE_idhrxml_NewData(struct zx_ctx* c, struct zx_idhrxml_NewData_s* x, int dup_strs)
{
  x = (struct zx_idhrxml_NewData_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zx_idhrxml_NewData_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */


  {
      struct zx_hrxml_Candidate_s* e;
      struct zx_hrxml_Candidate_s* en;
      struct zx_hrxml_Candidate_s* enn;
      for (enn = 0, e = x->Candidate; e; e = (struct zx_hrxml_Candidate_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_hrxml_Candidate(c, e, dup_strs);
	  if (!enn)
	      x->Candidate = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zx_idhrxml_Subscription_s* e;
      struct zx_idhrxml_Subscription_s* en;
      struct zx_idhrxml_Subscription_s* enn;
      for (enn = 0, e = x->Subscription; e; e = (struct zx_idhrxml_Subscription_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_idhrxml_Subscription(c, e, dup_strs);
	  if (!enn)
	      x->Subscription = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }

  return x;
}

/* FUNC(zx_WALK_SO_idhrxml_NewData) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zx_WALK_SO_idhrxml_NewData(struct zx_ctx* c, struct zx_idhrxml_NewData_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  int ret = callback(&x->gg.g, ctx);
  if (ret)
    return ret;
  
  /* *** deal with xmlns specifications in exc c14n way */


  
  ret = zx_walk_so_unknown_attributes(c, &x->gg, ctx, callback); 
  if (ret)
    return ret;

  {
      struct zx_hrxml_Candidate_s* e;
      for (e = x->Candidate; e; e = (struct zx_hrxml_Candidate_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_hrxml_Candidate(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zx_idhrxml_Subscription_s* e;
      for (e = x->Subscription; e; e = (struct zx_idhrxml_Subscription_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_idhrxml_Subscription(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }

  
  return zx_walk_so_unknown_elems_and_content(c, &x->gg, ctx, callback);
}

/* FUNC(zx_WALK_WO_idhrxml_NewData) */

int zx_WALK_WO_idhrxml_NewData(struct zx_ctx* c, struct zx_idhrxml_NewData_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   idhrxml_Notification
#define EL_STRUCT zx_idhrxml_Notification_s
#define EL_NS     idhrxml
#define EL_TAG    Notification

/* FUNC(zx_FREE_idhrxml_Notification) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

/* Called by: */
void zx_FREE_idhrxml_Notification(struct zx_ctx* c, struct zx_idhrxml_Notification_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */

  zx_free_attr(c, x->endReason, free_strs);
  zx_free_attr(c, x->expires, free_strs);
  zx_free_attr(c, x->id, free_strs);
  zx_free_attr(c, x->subscriptionID, free_strs);

  {
      struct zx_lu_TestResult_s* e;
      struct zx_lu_TestResult_s* en;
      for (e = x->TestResult; e; e = en) {
	  en = (struct zx_lu_TestResult_s*)e->gg.g.n;
	  zx_FREE_lu_TestResult(c, e, free_strs);
      }
  }
  {
      struct zx_idhrxml_ItemData_s* e;
      struct zx_idhrxml_ItemData_s* en;
      for (e = x->ItemData; e; e = en) {
	  en = (struct zx_idhrxml_ItemData_s*)e->gg.g.n;
	  zx_FREE_idhrxml_ItemData(c, e, free_strs);
      }
  }


  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zx_NEW_idhrxml_Notification) */

/* Trivial allocator/constructor for the datatype. */

/* Called by: */
struct zx_idhrxml_Notification_s* zx_NEW_idhrxml_Notification(struct zx_ctx* c)
{
  struct zx_idhrxml_Notification_s* x = ZX_ZALLOC(c, struct zx_idhrxml_Notification_s);
  x->gg.g.tok = zx_idhrxml_Notification_ELEM;
  return x;
}

#ifdef ZX_ENA_AUX

/* FUNC(zx_DUP_STRS_idhrxml_Notification) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

/* Called by: */
void zx_DUP_STRS_idhrxml_Notification(struct zx_ctx* c, struct zx_idhrxml_Notification_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */

  zx_dup_attr(c, x->endReason);
  zx_dup_attr(c, x->expires);
  zx_dup_attr(c, x->id);
  zx_dup_attr(c, x->subscriptionID);

  {
      struct zx_lu_TestResult_s* e;
      for (e = x->TestResult; e; e = (struct zx_lu_TestResult_s*)e->gg.g.n)
	  zx_DUP_STRS_lu_TestResult(c, e);
  }
  {
      struct zx_idhrxml_ItemData_s* e;
      for (e = x->ItemData; e; e = (struct zx_idhrxml_ItemData_s*)e->gg.g.n)
	  zx_DUP_STRS_idhrxml_ItemData(c, e);
  }

}

/* FUNC(zx_DEEP_CLONE_idhrxml_Notification) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

/* Called by: */
struct zx_idhrxml_Notification_s* zx_DEEP_CLONE_idhrxml_Notification(struct zx_ctx* c, struct zx_idhrxml_Notification_s* x, int dup_strs)
{
  x = (struct zx_idhrxml_Notification_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zx_idhrxml_Notification_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */

  x->endReason = zx_clone_attr(c, x->endReason);
  x->expires = zx_clone_attr(c, x->expires);
  x->id = zx_clone_attr(c, x->id);
  x->subscriptionID = zx_clone_attr(c, x->subscriptionID);

  {
      struct zx_lu_TestResult_s* e;
      struct zx_lu_TestResult_s* en;
      struct zx_lu_TestResult_s* enn;
      for (enn = 0, e = x->TestResult; e; e = (struct zx_lu_TestResult_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_lu_TestResult(c, e, dup_strs);
	  if (!enn)
	      x->TestResult = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zx_idhrxml_ItemData_s* e;
      struct zx_idhrxml_ItemData_s* en;
      struct zx_idhrxml_ItemData_s* enn;
      for (enn = 0, e = x->ItemData; e; e = (struct zx_idhrxml_ItemData_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_idhrxml_ItemData(c, e, dup_strs);
	  if (!enn)
	      x->ItemData = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }

  return x;
}

/* FUNC(zx_WALK_SO_idhrxml_Notification) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zx_WALK_SO_idhrxml_Notification(struct zx_ctx* c, struct zx_idhrxml_Notification_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  int ret = callback(&x->gg.g, ctx);
  if (ret)
    return ret;
  
  /* *** deal with xmlns specifications in exc c14n way */


  
  ret = zx_walk_so_unknown_attributes(c, &x->gg, ctx, callback); 
  if (ret)
    return ret;

  {
      struct zx_lu_TestResult_s* e;
      for (e = x->TestResult; e; e = (struct zx_lu_TestResult_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_lu_TestResult(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zx_idhrxml_ItemData_s* e;
      for (e = x->ItemData; e; e = (struct zx_idhrxml_ItemData_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_idhrxml_ItemData(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }

  
  return zx_walk_so_unknown_elems_and_content(c, &x->gg, ctx, callback);
}

/* FUNC(zx_WALK_WO_idhrxml_Notification) */

int zx_WALK_WO_idhrxml_Notification(struct zx_ctx* c, struct zx_idhrxml_Notification_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   idhrxml_Notify
#define EL_STRUCT zx_idhrxml_Notify_s
#define EL_NS     idhrxml
#define EL_TAG    Notify

/* FUNC(zx_FREE_idhrxml_Notify) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

/* Called by: */
void zx_FREE_idhrxml_Notify(struct zx_ctx* c, struct zx_idhrxml_Notify_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */

  zx_free_attr(c, x->timeStamp, free_strs);
  zx_free_attr(c, x->itemID, free_strs);

  {
      struct zx_lu_Extension_s* e;
      struct zx_lu_Extension_s* en;
      for (e = x->Extension; e; e = en) {
	  en = (struct zx_lu_Extension_s*)e->gg.g.n;
	  zx_FREE_lu_Extension(c, e, free_strs);
      }
  }
  {
      struct zx_idhrxml_Notification_s* e;
      struct zx_idhrxml_Notification_s* en;
      for (e = x->Notification; e; e = en) {
	  en = (struct zx_idhrxml_Notification_s*)e->gg.g.n;
	  zx_FREE_idhrxml_Notification(c, e, free_strs);
      }
  }


  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zx_NEW_idhrxml_Notify) */

/* Trivial allocator/constructor for the datatype. */

/* Called by: */
struct zx_idhrxml_Notify_s* zx_NEW_idhrxml_Notify(struct zx_ctx* c)
{
  struct zx_idhrxml_Notify_s* x = ZX_ZALLOC(c, struct zx_idhrxml_Notify_s);
  x->gg.g.tok = zx_idhrxml_Notify_ELEM;
  return x;
}

#ifdef ZX_ENA_AUX

/* FUNC(zx_DUP_STRS_idhrxml_Notify) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

/* Called by: */
void zx_DUP_STRS_idhrxml_Notify(struct zx_ctx* c, struct zx_idhrxml_Notify_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */

  zx_dup_attr(c, x->timeStamp);
  zx_dup_attr(c, x->itemID);

  {
      struct zx_lu_Extension_s* e;
      for (e = x->Extension; e; e = (struct zx_lu_Extension_s*)e->gg.g.n)
	  zx_DUP_STRS_lu_Extension(c, e);
  }
  {
      struct zx_idhrxml_Notification_s* e;
      for (e = x->Notification; e; e = (struct zx_idhrxml_Notification_s*)e->gg.g.n)
	  zx_DUP_STRS_idhrxml_Notification(c, e);
  }

}

/* FUNC(zx_DEEP_CLONE_idhrxml_Notify) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

/* Called by: */
struct zx_idhrxml_Notify_s* zx_DEEP_CLONE_idhrxml_Notify(struct zx_ctx* c, struct zx_idhrxml_Notify_s* x, int dup_strs)
{
  x = (struct zx_idhrxml_Notify_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zx_idhrxml_Notify_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */

  x->timeStamp = zx_clone_attr(c, x->timeStamp);
  x->itemID = zx_clone_attr(c, x->itemID);

  {
      struct zx_lu_Extension_s* e;
      struct zx_lu_Extension_s* en;
      struct zx_lu_Extension_s* enn;
      for (enn = 0, e = x->Extension; e; e = (struct zx_lu_Extension_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_lu_Extension(c, e, dup_strs);
	  if (!enn)
	      x->Extension = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zx_idhrxml_Notification_s* e;
      struct zx_idhrxml_Notification_s* en;
      struct zx_idhrxml_Notification_s* enn;
      for (enn = 0, e = x->Notification; e; e = (struct zx_idhrxml_Notification_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_idhrxml_Notification(c, e, dup_strs);
	  if (!enn)
	      x->Notification = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }

  return x;
}

/* FUNC(zx_WALK_SO_idhrxml_Notify) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zx_WALK_SO_idhrxml_Notify(struct zx_ctx* c, struct zx_idhrxml_Notify_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  int ret = callback(&x->gg.g, ctx);
  if (ret)
    return ret;
  
  /* *** deal with xmlns specifications in exc c14n way */


  
  ret = zx_walk_so_unknown_attributes(c, &x->gg, ctx, callback); 
  if (ret)
    return ret;

  {
      struct zx_lu_Extension_s* e;
      for (e = x->Extension; e; e = (struct zx_lu_Extension_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_lu_Extension(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zx_idhrxml_Notification_s* e;
      for (e = x->Notification; e; e = (struct zx_idhrxml_Notification_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_idhrxml_Notification(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }

  
  return zx_walk_so_unknown_elems_and_content(c, &x->gg, ctx, callback);
}

/* FUNC(zx_WALK_WO_idhrxml_Notify) */

int zx_WALK_WO_idhrxml_Notify(struct zx_ctx* c, struct zx_idhrxml_Notify_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   idhrxml_NotifyResponse
#define EL_STRUCT zx_idhrxml_NotifyResponse_s
#define EL_NS     idhrxml
#define EL_TAG    NotifyResponse

/* FUNC(zx_FREE_idhrxml_NotifyResponse) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

/* Called by: */
void zx_FREE_idhrxml_NotifyResponse(struct zx_ctx* c, struct zx_idhrxml_NotifyResponse_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */

  zx_free_attr(c, x->itemIDRef, free_strs);

  {
      struct zx_lu_Status_s* e;
      struct zx_lu_Status_s* en;
      for (e = x->Status; e; e = en) {
	  en = (struct zx_lu_Status_s*)e->gg.g.n;
	  zx_FREE_lu_Status(c, e, free_strs);
      }
  }
  {
      struct zx_lu_Extension_s* e;
      struct zx_lu_Extension_s* en;
      for (e = x->Extension; e; e = en) {
	  en = (struct zx_lu_Extension_s*)e->gg.g.n;
	  zx_FREE_lu_Extension(c, e, free_strs);
      }
  }


  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zx_NEW_idhrxml_NotifyResponse) */

/* Trivial allocator/constructor for the datatype. */

/* Called by: */
struct zx_idhrxml_NotifyResponse_s* zx_NEW_idhrxml_NotifyResponse(struct zx_ctx* c)
{
  struct zx_idhrxml_NotifyResponse_s* x = ZX_ZALLOC(c, struct zx_idhrxml_NotifyResponse_s);
  x->gg.g.tok = zx_idhrxml_NotifyResponse_ELEM;
  return x;
}

#ifdef ZX_ENA_AUX

/* FUNC(zx_DUP_STRS_idhrxml_NotifyResponse) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

/* Called by: */
void zx_DUP_STRS_idhrxml_NotifyResponse(struct zx_ctx* c, struct zx_idhrxml_NotifyResponse_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */

  zx_dup_attr(c, x->itemIDRef);

  {
      struct zx_lu_Status_s* e;
      for (e = x->Status; e; e = (struct zx_lu_Status_s*)e->gg.g.n)
	  zx_DUP_STRS_lu_Status(c, e);
  }
  {
      struct zx_lu_Extension_s* e;
      for (e = x->Extension; e; e = (struct zx_lu_Extension_s*)e->gg.g.n)
	  zx_DUP_STRS_lu_Extension(c, e);
  }

}

/* FUNC(zx_DEEP_CLONE_idhrxml_NotifyResponse) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

/* Called by: */
struct zx_idhrxml_NotifyResponse_s* zx_DEEP_CLONE_idhrxml_NotifyResponse(struct zx_ctx* c, struct zx_idhrxml_NotifyResponse_s* x, int dup_strs)
{
  x = (struct zx_idhrxml_NotifyResponse_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zx_idhrxml_NotifyResponse_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */

  x->itemIDRef = zx_clone_attr(c, x->itemIDRef);

  {
      struct zx_lu_Status_s* e;
      struct zx_lu_Status_s* en;
      struct zx_lu_Status_s* enn;
      for (enn = 0, e = x->Status; e; e = (struct zx_lu_Status_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_lu_Status(c, e, dup_strs);
	  if (!enn)
	      x->Status = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zx_lu_Extension_s* e;
      struct zx_lu_Extension_s* en;
      struct zx_lu_Extension_s* enn;
      for (enn = 0, e = x->Extension; e; e = (struct zx_lu_Extension_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_lu_Extension(c, e, dup_strs);
	  if (!enn)
	      x->Extension = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }

  return x;
}

/* FUNC(zx_WALK_SO_idhrxml_NotifyResponse) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zx_WALK_SO_idhrxml_NotifyResponse(struct zx_ctx* c, struct zx_idhrxml_NotifyResponse_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  int ret = callback(&x->gg.g, ctx);
  if (ret)
    return ret;
  
  /* *** deal with xmlns specifications in exc c14n way */


  
  ret = zx_walk_so_unknown_attributes(c, &x->gg, ctx, callback); 
  if (ret)
    return ret;

  {
      struct zx_lu_Status_s* e;
      for (e = x->Status; e; e = (struct zx_lu_Status_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_lu_Status(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zx_lu_Extension_s* e;
      for (e = x->Extension; e; e = (struct zx_lu_Extension_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_lu_Extension(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }

  
  return zx_walk_so_unknown_elems_and_content(c, &x->gg, ctx, callback);
}

/* FUNC(zx_WALK_WO_idhrxml_NotifyResponse) */

int zx_WALK_WO_idhrxml_NotifyResponse(struct zx_ctx* c, struct zx_idhrxml_NotifyResponse_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   idhrxml_Query
#define EL_STRUCT zx_idhrxml_Query_s
#define EL_NS     idhrxml
#define EL_TAG    Query

/* FUNC(zx_FREE_idhrxml_Query) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

/* Called by: */
void zx_FREE_idhrxml_Query(struct zx_ctx* c, struct zx_idhrxml_Query_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */

  zx_free_attr(c, x->itemID, free_strs);

  {
      struct zx_lu_Extension_s* e;
      struct zx_lu_Extension_s* en;
      for (e = x->Extension; e; e = en) {
	  en = (struct zx_lu_Extension_s*)e->gg.g.n;
	  zx_FREE_lu_Extension(c, e, free_strs);
      }
  }
  {
      struct zx_idhrxml_TestItem_s* e;
      struct zx_idhrxml_TestItem_s* en;
      for (e = x->TestItem; e; e = en) {
	  en = (struct zx_idhrxml_TestItem_s*)e->gg.g.n;
	  zx_FREE_idhrxml_TestItem(c, e, free_strs);
      }
  }
  {
      struct zx_idhrxml_QueryItem_s* e;
      struct zx_idhrxml_QueryItem_s* en;
      for (e = x->QueryItem; e; e = en) {
	  en = (struct zx_idhrxml_QueryItem_s*)e->gg.g.n;
	  zx_FREE_idhrxml_QueryItem(c, e, free_strs);
      }
  }
  {
      struct zx_idhrxml_Subscription_s* e;
      struct zx_idhrxml_Subscription_s* en;
      for (e = x->Subscription; e; e = en) {
	  en = (struct zx_idhrxml_Subscription_s*)e->gg.g.n;
	  zx_FREE_idhrxml_Subscription(c, e, free_strs);
      }
  }


  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zx_NEW_idhrxml_Query) */

/* Trivial allocator/constructor for the datatype. */

/* Called by: */
struct zx_idhrxml_Query_s* zx_NEW_idhrxml_Query(struct zx_ctx* c)
{
  struct zx_idhrxml_Query_s* x = ZX_ZALLOC(c, struct zx_idhrxml_Query_s);
  x->gg.g.tok = zx_idhrxml_Query_ELEM;
  return x;
}

#ifdef ZX_ENA_AUX

/* FUNC(zx_DUP_STRS_idhrxml_Query) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

/* Called by: */
void zx_DUP_STRS_idhrxml_Query(struct zx_ctx* c, struct zx_idhrxml_Query_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */

  zx_dup_attr(c, x->itemID);

  {
      struct zx_lu_Extension_s* e;
      for (e = x->Extension; e; e = (struct zx_lu_Extension_s*)e->gg.g.n)
	  zx_DUP_STRS_lu_Extension(c, e);
  }
  {
      struct zx_idhrxml_TestItem_s* e;
      for (e = x->TestItem; e; e = (struct zx_idhrxml_TestItem_s*)e->gg.g.n)
	  zx_DUP_STRS_idhrxml_TestItem(c, e);
  }
  {
      struct zx_idhrxml_QueryItem_s* e;
      for (e = x->QueryItem; e; e = (struct zx_idhrxml_QueryItem_s*)e->gg.g.n)
	  zx_DUP_STRS_idhrxml_QueryItem(c, e);
  }
  {
      struct zx_idhrxml_Subscription_s* e;
      for (e = x->Subscription; e; e = (struct zx_idhrxml_Subscription_s*)e->gg.g.n)
	  zx_DUP_STRS_idhrxml_Subscription(c, e);
  }

}

/* FUNC(zx_DEEP_CLONE_idhrxml_Query) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

/* Called by: */
struct zx_idhrxml_Query_s* zx_DEEP_CLONE_idhrxml_Query(struct zx_ctx* c, struct zx_idhrxml_Query_s* x, int dup_strs)
{
  x = (struct zx_idhrxml_Query_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zx_idhrxml_Query_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */

  x->itemID = zx_clone_attr(c, x->itemID);

  {
      struct zx_lu_Extension_s* e;
      struct zx_lu_Extension_s* en;
      struct zx_lu_Extension_s* enn;
      for (enn = 0, e = x->Extension; e; e = (struct zx_lu_Extension_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_lu_Extension(c, e, dup_strs);
	  if (!enn)
	      x->Extension = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zx_idhrxml_TestItem_s* e;
      struct zx_idhrxml_TestItem_s* en;
      struct zx_idhrxml_TestItem_s* enn;
      for (enn = 0, e = x->TestItem; e; e = (struct zx_idhrxml_TestItem_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_idhrxml_TestItem(c, e, dup_strs);
	  if (!enn)
	      x->TestItem = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zx_idhrxml_QueryItem_s* e;
      struct zx_idhrxml_QueryItem_s* en;
      struct zx_idhrxml_QueryItem_s* enn;
      for (enn = 0, e = x->QueryItem; e; e = (struct zx_idhrxml_QueryItem_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_idhrxml_QueryItem(c, e, dup_strs);
	  if (!enn)
	      x->QueryItem = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zx_idhrxml_Subscription_s* e;
      struct zx_idhrxml_Subscription_s* en;
      struct zx_idhrxml_Subscription_s* enn;
      for (enn = 0, e = x->Subscription; e; e = (struct zx_idhrxml_Subscription_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_idhrxml_Subscription(c, e, dup_strs);
	  if (!enn)
	      x->Subscription = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }

  return x;
}

/* FUNC(zx_WALK_SO_idhrxml_Query) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zx_WALK_SO_idhrxml_Query(struct zx_ctx* c, struct zx_idhrxml_Query_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  int ret = callback(&x->gg.g, ctx);
  if (ret)
    return ret;
  
  /* *** deal with xmlns specifications in exc c14n way */


  
  ret = zx_walk_so_unknown_attributes(c, &x->gg, ctx, callback); 
  if (ret)
    return ret;

  {
      struct zx_lu_Extension_s* e;
      for (e = x->Extension; e; e = (struct zx_lu_Extension_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_lu_Extension(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zx_idhrxml_TestItem_s* e;
      for (e = x->TestItem; e; e = (struct zx_idhrxml_TestItem_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_idhrxml_TestItem(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zx_idhrxml_QueryItem_s* e;
      for (e = x->QueryItem; e; e = (struct zx_idhrxml_QueryItem_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_idhrxml_QueryItem(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zx_idhrxml_Subscription_s* e;
      for (e = x->Subscription; e; e = (struct zx_idhrxml_Subscription_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_idhrxml_Subscription(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }

  
  return zx_walk_so_unknown_elems_and_content(c, &x->gg, ctx, callback);
}

/* FUNC(zx_WALK_WO_idhrxml_Query) */

int zx_WALK_WO_idhrxml_Query(struct zx_ctx* c, struct zx_idhrxml_Query_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   idhrxml_QueryItem
#define EL_STRUCT zx_idhrxml_QueryItem_s
#define EL_NS     idhrxml
#define EL_TAG    QueryItem

/* FUNC(zx_FREE_idhrxml_QueryItem) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

/* Called by: */
void zx_FREE_idhrxml_QueryItem(struct zx_ctx* c, struct zx_idhrxml_QueryItem_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */

  zx_free_attr(c, x->changedSince, free_strs);
  zx_free_attr(c, x->contingency, free_strs);
  zx_free_attr(c, x->count, free_strs);
  zx_free_attr(c, x->includeCommonAttributes, free_strs);
  zx_free_attr(c, x->offset, free_strs);
  zx_free_attr(c, x->setID, free_strs);
  zx_free_attr(c, x->setReq, free_strs);
  zx_free_attr(c, x->itemID, free_strs);
  zx_free_attr(c, x->itemIDRef, free_strs);
  zx_free_attr(c, x->objectType, free_strs);
  zx_free_attr(c, x->predefined, free_strs);

  zx_free_simple_elems(c, x->ChangeFormat, free_strs);
  zx_free_simple_elems(c, x->Select, free_strs);
  zx_free_simple_elems(c, x->Sort, free_strs);


  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zx_NEW_idhrxml_QueryItem) */

/* Trivial allocator/constructor for the datatype. */

/* Called by: */
struct zx_idhrxml_QueryItem_s* zx_NEW_idhrxml_QueryItem(struct zx_ctx* c)
{
  struct zx_idhrxml_QueryItem_s* x = ZX_ZALLOC(c, struct zx_idhrxml_QueryItem_s);
  x->gg.g.tok = zx_idhrxml_QueryItem_ELEM;
  return x;
}

#ifdef ZX_ENA_AUX

/* FUNC(zx_DUP_STRS_idhrxml_QueryItem) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

/* Called by: */
void zx_DUP_STRS_idhrxml_QueryItem(struct zx_ctx* c, struct zx_idhrxml_QueryItem_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */

  zx_dup_attr(c, x->changedSince);
  zx_dup_attr(c, x->contingency);
  zx_dup_attr(c, x->count);
  zx_dup_attr(c, x->includeCommonAttributes);
  zx_dup_attr(c, x->offset);
  zx_dup_attr(c, x->setID);
  zx_dup_attr(c, x->setReq);
  zx_dup_attr(c, x->itemID);
  zx_dup_attr(c, x->itemIDRef);
  zx_dup_attr(c, x->objectType);
  zx_dup_attr(c, x->predefined);

  zx_dup_strs_simple_elems(c, x->ChangeFormat);
  zx_dup_strs_simple_elems(c, x->Select);
  zx_dup_strs_simple_elems(c, x->Sort);

}

/* FUNC(zx_DEEP_CLONE_idhrxml_QueryItem) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

/* Called by: */
struct zx_idhrxml_QueryItem_s* zx_DEEP_CLONE_idhrxml_QueryItem(struct zx_ctx* c, struct zx_idhrxml_QueryItem_s* x, int dup_strs)
{
  x = (struct zx_idhrxml_QueryItem_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zx_idhrxml_QueryItem_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */

  x->changedSince = zx_clone_attr(c, x->changedSince);
  x->contingency = zx_clone_attr(c, x->contingency);
  x->count = zx_clone_attr(c, x->count);
  x->includeCommonAttributes = zx_clone_attr(c, x->includeCommonAttributes);
  x->offset = zx_clone_attr(c, x->offset);
  x->setID = zx_clone_attr(c, x->setID);
  x->setReq = zx_clone_attr(c, x->setReq);
  x->itemID = zx_clone_attr(c, x->itemID);
  x->itemIDRef = zx_clone_attr(c, x->itemIDRef);
  x->objectType = zx_clone_attr(c, x->objectType);
  x->predefined = zx_clone_attr(c, x->predefined);

  x->ChangeFormat = zx_deep_clone_simple_elems(c,x->ChangeFormat, dup_strs);
  x->Select = zx_deep_clone_simple_elems(c,x->Select, dup_strs);
  x->Sort = zx_deep_clone_simple_elems(c,x->Sort, dup_strs);

  return x;
}

/* FUNC(zx_WALK_SO_idhrxml_QueryItem) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zx_WALK_SO_idhrxml_QueryItem(struct zx_ctx* c, struct zx_idhrxml_QueryItem_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  int ret = callback(&x->gg.g, ctx);
  if (ret)
    return ret;
  
  /* *** deal with xmlns specifications in exc c14n way */


  
  ret = zx_walk_so_unknown_attributes(c, &x->gg, ctx, callback); 
  if (ret)
    return ret;

  ret = zx_walk_so_simple_elems(c, x->ChangeFormat, ctx, callback);
  if (ret)
    return ret;
  ret = zx_walk_so_simple_elems(c, x->Select, ctx, callback);
  if (ret)
    return ret;
  ret = zx_walk_so_simple_elems(c, x->Sort, ctx, callback);
  if (ret)
    return ret;

  
  return zx_walk_so_unknown_elems_and_content(c, &x->gg, ctx, callback);
}

/* FUNC(zx_WALK_WO_idhrxml_QueryItem) */

int zx_WALK_WO_idhrxml_QueryItem(struct zx_ctx* c, struct zx_idhrxml_QueryItem_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   idhrxml_QueryResponse
#define EL_STRUCT zx_idhrxml_QueryResponse_s
#define EL_NS     idhrxml
#define EL_TAG    QueryResponse

/* FUNC(zx_FREE_idhrxml_QueryResponse) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

/* Called by: */
void zx_FREE_idhrxml_QueryResponse(struct zx_ctx* c, struct zx_idhrxml_QueryResponse_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */

  zx_free_attr(c, x->timeStamp, free_strs);
  zx_free_attr(c, x->itemIDRef, free_strs);

  {
      struct zx_lu_Status_s* e;
      struct zx_lu_Status_s* en;
      for (e = x->Status; e; e = en) {
	  en = (struct zx_lu_Status_s*)e->gg.g.n;
	  zx_FREE_lu_Status(c, e, free_strs);
      }
  }
  {
      struct zx_lu_Extension_s* e;
      struct zx_lu_Extension_s* en;
      for (e = x->Extension; e; e = en) {
	  en = (struct zx_lu_Extension_s*)e->gg.g.n;
	  zx_FREE_lu_Extension(c, e, free_strs);
      }
  }
  {
      struct zx_dst_TestResult_s* e;
      struct zx_dst_TestResult_s* en;
      for (e = x->TestResult; e; e = en) {
	  en = (struct zx_dst_TestResult_s*)e->gg.g.n;
	  zx_FREE_dst_TestResult(c, e, free_strs);
      }
  }
  {
      struct zx_idhrxml_Data_s* e;
      struct zx_idhrxml_Data_s* en;
      for (e = x->Data; e; e = en) {
	  en = (struct zx_idhrxml_Data_s*)e->gg.g.n;
	  zx_FREE_idhrxml_Data(c, e, free_strs);
      }
  }


  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zx_NEW_idhrxml_QueryResponse) */

/* Trivial allocator/constructor for the datatype. */

/* Called by: */
struct zx_idhrxml_QueryResponse_s* zx_NEW_idhrxml_QueryResponse(struct zx_ctx* c)
{
  struct zx_idhrxml_QueryResponse_s* x = ZX_ZALLOC(c, struct zx_idhrxml_QueryResponse_s);
  x->gg.g.tok = zx_idhrxml_QueryResponse_ELEM;
  return x;
}

#ifdef ZX_ENA_AUX

/* FUNC(zx_DUP_STRS_idhrxml_QueryResponse) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

/* Called by: */
void zx_DUP_STRS_idhrxml_QueryResponse(struct zx_ctx* c, struct zx_idhrxml_QueryResponse_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */

  zx_dup_attr(c, x->timeStamp);
  zx_dup_attr(c, x->itemIDRef);

  {
      struct zx_lu_Status_s* e;
      for (e = x->Status; e; e = (struct zx_lu_Status_s*)e->gg.g.n)
	  zx_DUP_STRS_lu_Status(c, e);
  }
  {
      struct zx_lu_Extension_s* e;
      for (e = x->Extension; e; e = (struct zx_lu_Extension_s*)e->gg.g.n)
	  zx_DUP_STRS_lu_Extension(c, e);
  }
  {
      struct zx_dst_TestResult_s* e;
      for (e = x->TestResult; e; e = (struct zx_dst_TestResult_s*)e->gg.g.n)
	  zx_DUP_STRS_dst_TestResult(c, e);
  }
  {
      struct zx_idhrxml_Data_s* e;
      for (e = x->Data; e; e = (struct zx_idhrxml_Data_s*)e->gg.g.n)
	  zx_DUP_STRS_idhrxml_Data(c, e);
  }

}

/* FUNC(zx_DEEP_CLONE_idhrxml_QueryResponse) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

/* Called by: */
struct zx_idhrxml_QueryResponse_s* zx_DEEP_CLONE_idhrxml_QueryResponse(struct zx_ctx* c, struct zx_idhrxml_QueryResponse_s* x, int dup_strs)
{
  x = (struct zx_idhrxml_QueryResponse_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zx_idhrxml_QueryResponse_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */

  x->timeStamp = zx_clone_attr(c, x->timeStamp);
  x->itemIDRef = zx_clone_attr(c, x->itemIDRef);

  {
      struct zx_lu_Status_s* e;
      struct zx_lu_Status_s* en;
      struct zx_lu_Status_s* enn;
      for (enn = 0, e = x->Status; e; e = (struct zx_lu_Status_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_lu_Status(c, e, dup_strs);
	  if (!enn)
	      x->Status = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zx_lu_Extension_s* e;
      struct zx_lu_Extension_s* en;
      struct zx_lu_Extension_s* enn;
      for (enn = 0, e = x->Extension; e; e = (struct zx_lu_Extension_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_lu_Extension(c, e, dup_strs);
	  if (!enn)
	      x->Extension = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zx_dst_TestResult_s* e;
      struct zx_dst_TestResult_s* en;
      struct zx_dst_TestResult_s* enn;
      for (enn = 0, e = x->TestResult; e; e = (struct zx_dst_TestResult_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_dst_TestResult(c, e, dup_strs);
	  if (!enn)
	      x->TestResult = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zx_idhrxml_Data_s* e;
      struct zx_idhrxml_Data_s* en;
      struct zx_idhrxml_Data_s* enn;
      for (enn = 0, e = x->Data; e; e = (struct zx_idhrxml_Data_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_idhrxml_Data(c, e, dup_strs);
	  if (!enn)
	      x->Data = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }

  return x;
}

/* FUNC(zx_WALK_SO_idhrxml_QueryResponse) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zx_WALK_SO_idhrxml_QueryResponse(struct zx_ctx* c, struct zx_idhrxml_QueryResponse_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  int ret = callback(&x->gg.g, ctx);
  if (ret)
    return ret;
  
  /* *** deal with xmlns specifications in exc c14n way */


  
  ret = zx_walk_so_unknown_attributes(c, &x->gg, ctx, callback); 
  if (ret)
    return ret;

  {
      struct zx_lu_Status_s* e;
      for (e = x->Status; e; e = (struct zx_lu_Status_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_lu_Status(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zx_lu_Extension_s* e;
      for (e = x->Extension; e; e = (struct zx_lu_Extension_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_lu_Extension(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zx_dst_TestResult_s* e;
      for (e = x->TestResult; e; e = (struct zx_dst_TestResult_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_dst_TestResult(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zx_idhrxml_Data_s* e;
      for (e = x->Data; e; e = (struct zx_idhrxml_Data_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_idhrxml_Data(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }

  
  return zx_walk_so_unknown_elems_and_content(c, &x->gg, ctx, callback);
}

/* FUNC(zx_WALK_WO_idhrxml_QueryResponse) */

int zx_WALK_WO_idhrxml_QueryResponse(struct zx_ctx* c, struct zx_idhrxml_QueryResponse_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   idhrxml_ResultQuery
#define EL_STRUCT zx_idhrxml_ResultQuery_s
#define EL_NS     idhrxml
#define EL_TAG    ResultQuery

/* FUNC(zx_FREE_idhrxml_ResultQuery) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

/* Called by: */
void zx_FREE_idhrxml_ResultQuery(struct zx_ctx* c, struct zx_idhrxml_ResultQuery_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */

  zx_free_attr(c, x->changedSince, free_strs);
  zx_free_attr(c, x->contingency, free_strs);
  zx_free_attr(c, x->includeCommonAttributes, free_strs);
  zx_free_attr(c, x->itemID, free_strs);
  zx_free_attr(c, x->itemIDRef, free_strs);
  zx_free_attr(c, x->objectType, free_strs);
  zx_free_attr(c, x->predefined, free_strs);

  zx_free_simple_elems(c, x->ChangeFormat, free_strs);
  zx_free_simple_elems(c, x->Select, free_strs);
  zx_free_simple_elems(c, x->Sort, free_strs);


  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zx_NEW_idhrxml_ResultQuery) */

/* Trivial allocator/constructor for the datatype. */

/* Called by: */
struct zx_idhrxml_ResultQuery_s* zx_NEW_idhrxml_ResultQuery(struct zx_ctx* c)
{
  struct zx_idhrxml_ResultQuery_s* x = ZX_ZALLOC(c, struct zx_idhrxml_ResultQuery_s);
  x->gg.g.tok = zx_idhrxml_ResultQuery_ELEM;
  return x;
}

#ifdef ZX_ENA_AUX

/* FUNC(zx_DUP_STRS_idhrxml_ResultQuery) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

/* Called by: */
void zx_DUP_STRS_idhrxml_ResultQuery(struct zx_ctx* c, struct zx_idhrxml_ResultQuery_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */

  zx_dup_attr(c, x->changedSince);
  zx_dup_attr(c, x->contingency);
  zx_dup_attr(c, x->includeCommonAttributes);
  zx_dup_attr(c, x->itemID);
  zx_dup_attr(c, x->itemIDRef);
  zx_dup_attr(c, x->objectType);
  zx_dup_attr(c, x->predefined);

  zx_dup_strs_simple_elems(c, x->ChangeFormat);
  zx_dup_strs_simple_elems(c, x->Select);
  zx_dup_strs_simple_elems(c, x->Sort);

}

/* FUNC(zx_DEEP_CLONE_idhrxml_ResultQuery) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

/* Called by: */
struct zx_idhrxml_ResultQuery_s* zx_DEEP_CLONE_idhrxml_ResultQuery(struct zx_ctx* c, struct zx_idhrxml_ResultQuery_s* x, int dup_strs)
{
  x = (struct zx_idhrxml_ResultQuery_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zx_idhrxml_ResultQuery_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */

  x->changedSince = zx_clone_attr(c, x->changedSince);
  x->contingency = zx_clone_attr(c, x->contingency);
  x->includeCommonAttributes = zx_clone_attr(c, x->includeCommonAttributes);
  x->itemID = zx_clone_attr(c, x->itemID);
  x->itemIDRef = zx_clone_attr(c, x->itemIDRef);
  x->objectType = zx_clone_attr(c, x->objectType);
  x->predefined = zx_clone_attr(c, x->predefined);

  x->ChangeFormat = zx_deep_clone_simple_elems(c,x->ChangeFormat, dup_strs);
  x->Select = zx_deep_clone_simple_elems(c,x->Select, dup_strs);
  x->Sort = zx_deep_clone_simple_elems(c,x->Sort, dup_strs);

  return x;
}

/* FUNC(zx_WALK_SO_idhrxml_ResultQuery) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zx_WALK_SO_idhrxml_ResultQuery(struct zx_ctx* c, struct zx_idhrxml_ResultQuery_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  int ret = callback(&x->gg.g, ctx);
  if (ret)
    return ret;
  
  /* *** deal with xmlns specifications in exc c14n way */


  
  ret = zx_walk_so_unknown_attributes(c, &x->gg, ctx, callback); 
  if (ret)
    return ret;

  ret = zx_walk_so_simple_elems(c, x->ChangeFormat, ctx, callback);
  if (ret)
    return ret;
  ret = zx_walk_so_simple_elems(c, x->Select, ctx, callback);
  if (ret)
    return ret;
  ret = zx_walk_so_simple_elems(c, x->Sort, ctx, callback);
  if (ret)
    return ret;

  
  return zx_walk_so_unknown_elems_and_content(c, &x->gg, ctx, callback);
}

/* FUNC(zx_WALK_WO_idhrxml_ResultQuery) */

int zx_WALK_WO_idhrxml_ResultQuery(struct zx_ctx* c, struct zx_idhrxml_ResultQuery_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   idhrxml_Subscription
#define EL_STRUCT zx_idhrxml_Subscription_s
#define EL_NS     idhrxml
#define EL_TAG    Subscription

/* FUNC(zx_FREE_idhrxml_Subscription) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

/* Called by: */
void zx_FREE_idhrxml_Subscription(struct zx_ctx* c, struct zx_idhrxml_Subscription_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */

  zx_free_attr(c, x->adminNotifyToRef, free_strs);
  zx_free_attr(c, x->expires, free_strs);
  zx_free_attr(c, x->id, free_strs);
  zx_free_attr(c, x->includeData, free_strs);
  zx_free_attr(c, x->notifyToRef, free_strs);
  zx_free_attr(c, x->starts, free_strs);
  zx_free_attr(c, x->subscriptionID, free_strs);

  {
      struct zx_subs_RefItem_s* e;
      struct zx_subs_RefItem_s* en;
      for (e = x->RefItem; e; e = en) {
	  en = (struct zx_subs_RefItem_s*)e->gg.g.n;
	  zx_FREE_subs_RefItem(c, e, free_strs);
      }
  }
  {
      struct zx_lu_Extension_s* e;
      struct zx_lu_Extension_s* en;
      for (e = x->Extension; e; e = en) {
	  en = (struct zx_lu_Extension_s*)e->gg.g.n;
	  zx_FREE_lu_Extension(c, e, free_strs);
      }
  }
  {
      struct zx_idhrxml_ResultQuery_s* e;
      struct zx_idhrxml_ResultQuery_s* en;
      for (e = x->ResultQuery; e; e = en) {
	  en = (struct zx_idhrxml_ResultQuery_s*)e->gg.g.n;
	  zx_FREE_idhrxml_ResultQuery(c, e, free_strs);
      }
  }
  zx_free_simple_elems(c, x->Aggregation, free_strs);
  zx_free_simple_elems(c, x->Trigger, free_strs);


  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zx_NEW_idhrxml_Subscription) */

/* Trivial allocator/constructor for the datatype. */

/* Called by: */
struct zx_idhrxml_Subscription_s* zx_NEW_idhrxml_Subscription(struct zx_ctx* c)
{
  struct zx_idhrxml_Subscription_s* x = ZX_ZALLOC(c, struct zx_idhrxml_Subscription_s);
  x->gg.g.tok = zx_idhrxml_Subscription_ELEM;
  return x;
}

#ifdef ZX_ENA_AUX

/* FUNC(zx_DUP_STRS_idhrxml_Subscription) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

/* Called by: */
void zx_DUP_STRS_idhrxml_Subscription(struct zx_ctx* c, struct zx_idhrxml_Subscription_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */

  zx_dup_attr(c, x->adminNotifyToRef);
  zx_dup_attr(c, x->expires);
  zx_dup_attr(c, x->id);
  zx_dup_attr(c, x->includeData);
  zx_dup_attr(c, x->notifyToRef);
  zx_dup_attr(c, x->starts);
  zx_dup_attr(c, x->subscriptionID);

  {
      struct zx_subs_RefItem_s* e;
      for (e = x->RefItem; e; e = (struct zx_subs_RefItem_s*)e->gg.g.n)
	  zx_DUP_STRS_subs_RefItem(c, e);
  }
  {
      struct zx_lu_Extension_s* e;
      for (e = x->Extension; e; e = (struct zx_lu_Extension_s*)e->gg.g.n)
	  zx_DUP_STRS_lu_Extension(c, e);
  }
  {
      struct zx_idhrxml_ResultQuery_s* e;
      for (e = x->ResultQuery; e; e = (struct zx_idhrxml_ResultQuery_s*)e->gg.g.n)
	  zx_DUP_STRS_idhrxml_ResultQuery(c, e);
  }
  zx_dup_strs_simple_elems(c, x->Aggregation);
  zx_dup_strs_simple_elems(c, x->Trigger);

}

/* FUNC(zx_DEEP_CLONE_idhrxml_Subscription) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

/* Called by: */
struct zx_idhrxml_Subscription_s* zx_DEEP_CLONE_idhrxml_Subscription(struct zx_ctx* c, struct zx_idhrxml_Subscription_s* x, int dup_strs)
{
  x = (struct zx_idhrxml_Subscription_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zx_idhrxml_Subscription_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */

  x->adminNotifyToRef = zx_clone_attr(c, x->adminNotifyToRef);
  x->expires = zx_clone_attr(c, x->expires);
  x->id = zx_clone_attr(c, x->id);
  x->includeData = zx_clone_attr(c, x->includeData);
  x->notifyToRef = zx_clone_attr(c, x->notifyToRef);
  x->starts = zx_clone_attr(c, x->starts);
  x->subscriptionID = zx_clone_attr(c, x->subscriptionID);

  {
      struct zx_subs_RefItem_s* e;
      struct zx_subs_RefItem_s* en;
      struct zx_subs_RefItem_s* enn;
      for (enn = 0, e = x->RefItem; e; e = (struct zx_subs_RefItem_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_subs_RefItem(c, e, dup_strs);
	  if (!enn)
	      x->RefItem = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zx_lu_Extension_s* e;
      struct zx_lu_Extension_s* en;
      struct zx_lu_Extension_s* enn;
      for (enn = 0, e = x->Extension; e; e = (struct zx_lu_Extension_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_lu_Extension(c, e, dup_strs);
	  if (!enn)
	      x->Extension = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zx_idhrxml_ResultQuery_s* e;
      struct zx_idhrxml_ResultQuery_s* en;
      struct zx_idhrxml_ResultQuery_s* enn;
      for (enn = 0, e = x->ResultQuery; e; e = (struct zx_idhrxml_ResultQuery_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_idhrxml_ResultQuery(c, e, dup_strs);
	  if (!enn)
	      x->ResultQuery = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  x->Aggregation = zx_deep_clone_simple_elems(c,x->Aggregation, dup_strs);
  x->Trigger = zx_deep_clone_simple_elems(c,x->Trigger, dup_strs);

  return x;
}

/* FUNC(zx_WALK_SO_idhrxml_Subscription) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zx_WALK_SO_idhrxml_Subscription(struct zx_ctx* c, struct zx_idhrxml_Subscription_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  int ret = callback(&x->gg.g, ctx);
  if (ret)
    return ret;
  
  /* *** deal with xmlns specifications in exc c14n way */


  
  ret = zx_walk_so_unknown_attributes(c, &x->gg, ctx, callback); 
  if (ret)
    return ret;

  {
      struct zx_subs_RefItem_s* e;
      for (e = x->RefItem; e; e = (struct zx_subs_RefItem_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_subs_RefItem(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zx_lu_Extension_s* e;
      for (e = x->Extension; e; e = (struct zx_lu_Extension_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_lu_Extension(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zx_idhrxml_ResultQuery_s* e;
      for (e = x->ResultQuery; e; e = (struct zx_idhrxml_ResultQuery_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_idhrxml_ResultQuery(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  ret = zx_walk_so_simple_elems(c, x->Aggregation, ctx, callback);
  if (ret)
    return ret;
  ret = zx_walk_so_simple_elems(c, x->Trigger, ctx, callback);
  if (ret)
    return ret;

  
  return zx_walk_so_unknown_elems_and_content(c, &x->gg, ctx, callback);
}

/* FUNC(zx_WALK_WO_idhrxml_Subscription) */

int zx_WALK_WO_idhrxml_Subscription(struct zx_ctx* c, struct zx_idhrxml_Subscription_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   idhrxml_TestItem
#define EL_STRUCT zx_idhrxml_TestItem_s
#define EL_NS     idhrxml
#define EL_TAG    TestItem

/* FUNC(zx_FREE_idhrxml_TestItem) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

/* Called by: */
void zx_FREE_idhrxml_TestItem(struct zx_ctx* c, struct zx_idhrxml_TestItem_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */

  zx_free_attr(c, x->id, free_strs);
  zx_free_attr(c, x->itemID, free_strs);
  zx_free_attr(c, x->objectType, free_strs);
  zx_free_attr(c, x->predefined, free_strs);

  zx_free_simple_elems(c, x->TestOp, free_strs);


  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zx_NEW_idhrxml_TestItem) */

/* Trivial allocator/constructor for the datatype. */

/* Called by: */
struct zx_idhrxml_TestItem_s* zx_NEW_idhrxml_TestItem(struct zx_ctx* c)
{
  struct zx_idhrxml_TestItem_s* x = ZX_ZALLOC(c, struct zx_idhrxml_TestItem_s);
  x->gg.g.tok = zx_idhrxml_TestItem_ELEM;
  return x;
}

#ifdef ZX_ENA_AUX

/* FUNC(zx_DUP_STRS_idhrxml_TestItem) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

/* Called by: */
void zx_DUP_STRS_idhrxml_TestItem(struct zx_ctx* c, struct zx_idhrxml_TestItem_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */

  zx_dup_attr(c, x->id);
  zx_dup_attr(c, x->itemID);
  zx_dup_attr(c, x->objectType);
  zx_dup_attr(c, x->predefined);

  zx_dup_strs_simple_elems(c, x->TestOp);

}

/* FUNC(zx_DEEP_CLONE_idhrxml_TestItem) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

/* Called by: */
struct zx_idhrxml_TestItem_s* zx_DEEP_CLONE_idhrxml_TestItem(struct zx_ctx* c, struct zx_idhrxml_TestItem_s* x, int dup_strs)
{
  x = (struct zx_idhrxml_TestItem_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zx_idhrxml_TestItem_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */

  x->id = zx_clone_attr(c, x->id);
  x->itemID = zx_clone_attr(c, x->itemID);
  x->objectType = zx_clone_attr(c, x->objectType);
  x->predefined = zx_clone_attr(c, x->predefined);

  x->TestOp = zx_deep_clone_simple_elems(c,x->TestOp, dup_strs);

  return x;
}

/* FUNC(zx_WALK_SO_idhrxml_TestItem) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zx_WALK_SO_idhrxml_TestItem(struct zx_ctx* c, struct zx_idhrxml_TestItem_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  int ret = callback(&x->gg.g, ctx);
  if (ret)
    return ret;
  
  /* *** deal with xmlns specifications in exc c14n way */


  
  ret = zx_walk_so_unknown_attributes(c, &x->gg, ctx, callback); 
  if (ret)
    return ret;

  ret = zx_walk_so_simple_elems(c, x->TestOp, ctx, callback);
  if (ret)
    return ret;

  
  return zx_walk_so_unknown_elems_and_content(c, &x->gg, ctx, callback);
}

/* FUNC(zx_WALK_WO_idhrxml_TestItem) */

int zx_WALK_WO_idhrxml_TestItem(struct zx_ctx* c, struct zx_idhrxml_TestItem_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  ERR("*** walk_wo not implemented %d", 0);
  return 0;
}

#endif


/* EOF -- c/zx-idhrxml-aux.c */
