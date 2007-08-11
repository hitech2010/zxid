/* c/zx-cb-aux.c - WARNING: This file was automatically generated. DO NOT EDIT!
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
#include "c/zx-cb-data.h"



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

#define EL_NAME   cb_By
#define EL_STRUCT zx_cb_By_s
#define EL_NS     cb
#define EL_TAG    By

/* FUNC(zx_FREE_cb_By) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

/* Called by: */
void zx_FREE_cb_By(struct zx_ctx* c, struct zx_cb_By_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */

  zx_free_attr(c, x->sortAlg, free_strs);
  zx_free_attr(c, x->sortWeight, free_strs);



  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zx_NEW_cb_By) */

/* Trivial allocator/constructor for the datatype. */

/* Called by: */
struct zx_cb_By_s* zx_NEW_cb_By(struct zx_ctx* c)
{
  struct zx_cb_By_s* x = ZX_ZALLOC(c, struct zx_cb_By_s);
  x->gg.g.tok = zx_cb_By_ELEM;
  return x;
}

#ifdef ZX_ENA_AUX

/* FUNC(zx_DUP_STRS_cb_By) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

/* Called by: */
void zx_DUP_STRS_cb_By(struct zx_ctx* c, struct zx_cb_By_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */

  zx_dup_attr(c, x->sortAlg);
  zx_dup_attr(c, x->sortWeight);


}

/* FUNC(zx_DEEP_CLONE_cb_By) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

/* Called by: */
struct zx_cb_By_s* zx_DEEP_CLONE_cb_By(struct zx_ctx* c, struct zx_cb_By_s* x, int dup_strs)
{
  x = (struct zx_cb_By_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zx_cb_By_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */

  x->sortAlg = zx_clone_attr(c, x->sortAlg);
  x->sortWeight = zx_clone_attr(c, x->sortWeight);


  return x;
}

/* FUNC(zx_WALK_SO_cb_By) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zx_WALK_SO_cb_By(struct zx_ctx* c, struct zx_cb_By_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  int ret = callback(&x->gg.g, ctx);
  if (ret)
    return ret;
  
  /* *** deal with xmlns specifications in exc c14n way */


  
  ret = zx_walk_so_unknown_attributes(c, &x->gg, ctx, callback); 
  if (ret)
    return ret;


  
  return zx_walk_so_unknown_elems_and_content(c, &x->gg, ctx, callback);
}

/* FUNC(zx_WALK_WO_cb_By) */

int zx_WALK_WO_cb_By(struct zx_ctx* c, struct zx_cb_By_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   cb_Create
#define EL_STRUCT zx_cb_Create_s
#define EL_NS     cb
#define EL_TAG    Create

/* FUNC(zx_FREE_cb_Create) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

/* Called by: */
void zx_FREE_cb_Create(struct zx_ctx* c, struct zx_cb_Create_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */

  zx_free_attr(c, x->id, free_strs);

  {
      struct zx_cb_ResourceID_s* e;
      struct zx_cb_ResourceID_s* en;
      for (e = x->ResourceID; e; e = en) {
	  en = (struct zx_cb_ResourceID_s*)e->gg.g.n;
	  zx_FREE_cb_ResourceID(c, e, free_strs);
      }
  }
  {
      struct zx_cb_EncryptedResourceID_s* e;
      struct zx_cb_EncryptedResourceID_s* en;
      for (e = x->EncryptedResourceID; e; e = en) {
	  en = (struct zx_cb_EncryptedResourceID_s*)e->gg.g.n;
	  zx_FREE_cb_EncryptedResourceID(c, e, free_strs);
      }
  }
  {
      struct zx_cb_Subscription_s* e;
      struct zx_cb_Subscription_s* en;
      for (e = x->Subscription; e; e = en) {
	  en = (struct zx_cb_Subscription_s*)e->gg.g.n;
	  zx_FREE_cb_Subscription(c, e, free_strs);
      }
  }
  {
      struct zx_cb_CreateItem_s* e;
      struct zx_cb_CreateItem_s* en;
      for (e = x->CreateItem; e; e = en) {
	  en = (struct zx_cb_CreateItem_s*)e->gg.g.n;
	  zx_FREE_cb_CreateItem(c, e, free_strs);
      }
  }
  {
      struct zx_cb_ItemSelection_s* e;
      struct zx_cb_ItemSelection_s* en;
      for (e = x->ItemSelection; e; e = en) {
	  en = (struct zx_cb_ItemSelection_s*)e->gg.g.n;
	  zx_FREE_cb_ItemSelection(c, e, free_strs);
      }
  }
  {
      struct zx_cb_Extension_s* e;
      struct zx_cb_Extension_s* en;
      for (e = x->Extension; e; e = en) {
	  en = (struct zx_cb_Extension_s*)e->gg.g.n;
	  zx_FREE_cb_Extension(c, e, free_strs);
      }
  }


  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zx_NEW_cb_Create) */

/* Trivial allocator/constructor for the datatype. */

/* Called by: */
struct zx_cb_Create_s* zx_NEW_cb_Create(struct zx_ctx* c)
{
  struct zx_cb_Create_s* x = ZX_ZALLOC(c, struct zx_cb_Create_s);
  x->gg.g.tok = zx_cb_Create_ELEM;
  return x;
}

#ifdef ZX_ENA_AUX

/* FUNC(zx_DUP_STRS_cb_Create) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

/* Called by: */
void zx_DUP_STRS_cb_Create(struct zx_ctx* c, struct zx_cb_Create_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */

  zx_dup_attr(c, x->id);

  {
      struct zx_cb_ResourceID_s* e;
      for (e = x->ResourceID; e; e = (struct zx_cb_ResourceID_s*)e->gg.g.n)
	  zx_DUP_STRS_cb_ResourceID(c, e);
  }
  {
      struct zx_cb_EncryptedResourceID_s* e;
      for (e = x->EncryptedResourceID; e; e = (struct zx_cb_EncryptedResourceID_s*)e->gg.g.n)
	  zx_DUP_STRS_cb_EncryptedResourceID(c, e);
  }
  {
      struct zx_cb_Subscription_s* e;
      for (e = x->Subscription; e; e = (struct zx_cb_Subscription_s*)e->gg.g.n)
	  zx_DUP_STRS_cb_Subscription(c, e);
  }
  {
      struct zx_cb_CreateItem_s* e;
      for (e = x->CreateItem; e; e = (struct zx_cb_CreateItem_s*)e->gg.g.n)
	  zx_DUP_STRS_cb_CreateItem(c, e);
  }
  {
      struct zx_cb_ItemSelection_s* e;
      for (e = x->ItemSelection; e; e = (struct zx_cb_ItemSelection_s*)e->gg.g.n)
	  zx_DUP_STRS_cb_ItemSelection(c, e);
  }
  {
      struct zx_cb_Extension_s* e;
      for (e = x->Extension; e; e = (struct zx_cb_Extension_s*)e->gg.g.n)
	  zx_DUP_STRS_cb_Extension(c, e);
  }

}

/* FUNC(zx_DEEP_CLONE_cb_Create) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

/* Called by: */
struct zx_cb_Create_s* zx_DEEP_CLONE_cb_Create(struct zx_ctx* c, struct zx_cb_Create_s* x, int dup_strs)
{
  x = (struct zx_cb_Create_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zx_cb_Create_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */

  x->id = zx_clone_attr(c, x->id);

  {
      struct zx_cb_ResourceID_s* e;
      struct zx_cb_ResourceID_s* en;
      struct zx_cb_ResourceID_s* enn;
      for (enn = 0, e = x->ResourceID; e; e = (struct zx_cb_ResourceID_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_cb_ResourceID(c, e, dup_strs);
	  if (!enn)
	      x->ResourceID = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zx_cb_EncryptedResourceID_s* e;
      struct zx_cb_EncryptedResourceID_s* en;
      struct zx_cb_EncryptedResourceID_s* enn;
      for (enn = 0, e = x->EncryptedResourceID; e; e = (struct zx_cb_EncryptedResourceID_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_cb_EncryptedResourceID(c, e, dup_strs);
	  if (!enn)
	      x->EncryptedResourceID = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zx_cb_Subscription_s* e;
      struct zx_cb_Subscription_s* en;
      struct zx_cb_Subscription_s* enn;
      for (enn = 0, e = x->Subscription; e; e = (struct zx_cb_Subscription_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_cb_Subscription(c, e, dup_strs);
	  if (!enn)
	      x->Subscription = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zx_cb_CreateItem_s* e;
      struct zx_cb_CreateItem_s* en;
      struct zx_cb_CreateItem_s* enn;
      for (enn = 0, e = x->CreateItem; e; e = (struct zx_cb_CreateItem_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_cb_CreateItem(c, e, dup_strs);
	  if (!enn)
	      x->CreateItem = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zx_cb_ItemSelection_s* e;
      struct zx_cb_ItemSelection_s* en;
      struct zx_cb_ItemSelection_s* enn;
      for (enn = 0, e = x->ItemSelection; e; e = (struct zx_cb_ItemSelection_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_cb_ItemSelection(c, e, dup_strs);
	  if (!enn)
	      x->ItemSelection = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zx_cb_Extension_s* e;
      struct zx_cb_Extension_s* en;
      struct zx_cb_Extension_s* enn;
      for (enn = 0, e = x->Extension; e; e = (struct zx_cb_Extension_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_cb_Extension(c, e, dup_strs);
	  if (!enn)
	      x->Extension = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }

  return x;
}

/* FUNC(zx_WALK_SO_cb_Create) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zx_WALK_SO_cb_Create(struct zx_ctx* c, struct zx_cb_Create_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  int ret = callback(&x->gg.g, ctx);
  if (ret)
    return ret;
  
  /* *** deal with xmlns specifications in exc c14n way */


  
  ret = zx_walk_so_unknown_attributes(c, &x->gg, ctx, callback); 
  if (ret)
    return ret;

  {
      struct zx_cb_ResourceID_s* e;
      for (e = x->ResourceID; e; e = (struct zx_cb_ResourceID_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_cb_ResourceID(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zx_cb_EncryptedResourceID_s* e;
      for (e = x->EncryptedResourceID; e; e = (struct zx_cb_EncryptedResourceID_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_cb_EncryptedResourceID(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zx_cb_Subscription_s* e;
      for (e = x->Subscription; e; e = (struct zx_cb_Subscription_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_cb_Subscription(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zx_cb_CreateItem_s* e;
      for (e = x->CreateItem; e; e = (struct zx_cb_CreateItem_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_cb_CreateItem(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zx_cb_ItemSelection_s* e;
      for (e = x->ItemSelection; e; e = (struct zx_cb_ItemSelection_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_cb_ItemSelection(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zx_cb_Extension_s* e;
      for (e = x->Extension; e; e = (struct zx_cb_Extension_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_cb_Extension(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }

  
  return zx_walk_so_unknown_elems_and_content(c, &x->gg, ctx, callback);
}

/* FUNC(zx_WALK_WO_cb_Create) */

int zx_WALK_WO_cb_Create(struct zx_ctx* c, struct zx_cb_Create_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   cb_CreateItem
#define EL_STRUCT zx_cb_CreateItem_s
#define EL_NS     cb
#define EL_TAG    CreateItem

/* FUNC(zx_FREE_cb_CreateItem) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

/* Called by: */
void zx_FREE_cb_CreateItem(struct zx_ctx* c, struct zx_cb_CreateItem_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */

  zx_free_attr(c, x->id, free_strs);
  zx_free_attr(c, x->itemID, free_strs);
  zx_free_attr(c, x->objectType, free_strs);

  {
      struct zx_cb_NewData_s* e;
      struct zx_cb_NewData_s* en;
      for (e = x->NewData; e; e = en) {
	  en = (struct zx_cb_NewData_s*)e->gg.g.n;
	  zx_FREE_cb_NewData(c, e, free_strs);
      }
  }


  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zx_NEW_cb_CreateItem) */

/* Trivial allocator/constructor for the datatype. */

/* Called by: */
struct zx_cb_CreateItem_s* zx_NEW_cb_CreateItem(struct zx_ctx* c)
{
  struct zx_cb_CreateItem_s* x = ZX_ZALLOC(c, struct zx_cb_CreateItem_s);
  x->gg.g.tok = zx_cb_CreateItem_ELEM;
  return x;
}

#ifdef ZX_ENA_AUX

/* FUNC(zx_DUP_STRS_cb_CreateItem) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

/* Called by: */
void zx_DUP_STRS_cb_CreateItem(struct zx_ctx* c, struct zx_cb_CreateItem_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */

  zx_dup_attr(c, x->id);
  zx_dup_attr(c, x->itemID);
  zx_dup_attr(c, x->objectType);

  {
      struct zx_cb_NewData_s* e;
      for (e = x->NewData; e; e = (struct zx_cb_NewData_s*)e->gg.g.n)
	  zx_DUP_STRS_cb_NewData(c, e);
  }

}

/* FUNC(zx_DEEP_CLONE_cb_CreateItem) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

/* Called by: */
struct zx_cb_CreateItem_s* zx_DEEP_CLONE_cb_CreateItem(struct zx_ctx* c, struct zx_cb_CreateItem_s* x, int dup_strs)
{
  x = (struct zx_cb_CreateItem_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zx_cb_CreateItem_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */

  x->id = zx_clone_attr(c, x->id);
  x->itemID = zx_clone_attr(c, x->itemID);
  x->objectType = zx_clone_attr(c, x->objectType);

  {
      struct zx_cb_NewData_s* e;
      struct zx_cb_NewData_s* en;
      struct zx_cb_NewData_s* enn;
      for (enn = 0, e = x->NewData; e; e = (struct zx_cb_NewData_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_cb_NewData(c, e, dup_strs);
	  if (!enn)
	      x->NewData = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }

  return x;
}

/* FUNC(zx_WALK_SO_cb_CreateItem) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zx_WALK_SO_cb_CreateItem(struct zx_ctx* c, struct zx_cb_CreateItem_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  int ret = callback(&x->gg.g, ctx);
  if (ret)
    return ret;
  
  /* *** deal with xmlns specifications in exc c14n way */


  
  ret = zx_walk_so_unknown_attributes(c, &x->gg, ctx, callback); 
  if (ret)
    return ret;

  {
      struct zx_cb_NewData_s* e;
      for (e = x->NewData; e; e = (struct zx_cb_NewData_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_cb_NewData(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }

  
  return zx_walk_so_unknown_elems_and_content(c, &x->gg, ctx, callback);
}

/* FUNC(zx_WALK_WO_cb_CreateItem) */

int zx_WALK_WO_cb_CreateItem(struct zx_ctx* c, struct zx_cb_CreateItem_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   cb_CreateResponse
#define EL_STRUCT zx_cb_CreateResponse_s
#define EL_NS     cb
#define EL_TAG    CreateResponse

/* FUNC(zx_FREE_cb_CreateResponse) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

/* Called by: */
void zx_FREE_cb_CreateResponse(struct zx_ctx* c, struct zx_cb_CreateResponse_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */

  zx_free_attr(c, x->id, free_strs);
  zx_free_attr(c, x->timeStamp, free_strs);

  {
      struct zx_cb_Status_s* e;
      struct zx_cb_Status_s* en;
      for (e = x->Status; e; e = en) {
	  en = (struct zx_cb_Status_s*)e->gg.g.n;
	  zx_FREE_cb_Status(c, e, free_strs);
      }
  }
  {
      struct zx_cb_ItemData_s* e;
      struct zx_cb_ItemData_s* en;
      for (e = x->ItemData; e; e = en) {
	  en = (struct zx_cb_ItemData_s*)e->gg.g.n;
	  zx_FREE_cb_ItemData(c, e, free_strs);
      }
  }
  {
      struct zx_cb_Extension_s* e;
      struct zx_cb_Extension_s* en;
      for (e = x->Extension; e; e = en) {
	  en = (struct zx_cb_Extension_s*)e->gg.g.n;
	  zx_FREE_cb_Extension(c, e, free_strs);
      }
  }


  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zx_NEW_cb_CreateResponse) */

/* Trivial allocator/constructor for the datatype. */

/* Called by: */
struct zx_cb_CreateResponse_s* zx_NEW_cb_CreateResponse(struct zx_ctx* c)
{
  struct zx_cb_CreateResponse_s* x = ZX_ZALLOC(c, struct zx_cb_CreateResponse_s);
  x->gg.g.tok = zx_cb_CreateResponse_ELEM;
  return x;
}

#ifdef ZX_ENA_AUX

/* FUNC(zx_DUP_STRS_cb_CreateResponse) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

/* Called by: */
void zx_DUP_STRS_cb_CreateResponse(struct zx_ctx* c, struct zx_cb_CreateResponse_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */

  zx_dup_attr(c, x->id);
  zx_dup_attr(c, x->timeStamp);

  {
      struct zx_cb_Status_s* e;
      for (e = x->Status; e; e = (struct zx_cb_Status_s*)e->gg.g.n)
	  zx_DUP_STRS_cb_Status(c, e);
  }
  {
      struct zx_cb_ItemData_s* e;
      for (e = x->ItemData; e; e = (struct zx_cb_ItemData_s*)e->gg.g.n)
	  zx_DUP_STRS_cb_ItemData(c, e);
  }
  {
      struct zx_cb_Extension_s* e;
      for (e = x->Extension; e; e = (struct zx_cb_Extension_s*)e->gg.g.n)
	  zx_DUP_STRS_cb_Extension(c, e);
  }

}

/* FUNC(zx_DEEP_CLONE_cb_CreateResponse) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

/* Called by: */
struct zx_cb_CreateResponse_s* zx_DEEP_CLONE_cb_CreateResponse(struct zx_ctx* c, struct zx_cb_CreateResponse_s* x, int dup_strs)
{
  x = (struct zx_cb_CreateResponse_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zx_cb_CreateResponse_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */

  x->id = zx_clone_attr(c, x->id);
  x->timeStamp = zx_clone_attr(c, x->timeStamp);

  {
      struct zx_cb_Status_s* e;
      struct zx_cb_Status_s* en;
      struct zx_cb_Status_s* enn;
      for (enn = 0, e = x->Status; e; e = (struct zx_cb_Status_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_cb_Status(c, e, dup_strs);
	  if (!enn)
	      x->Status = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zx_cb_ItemData_s* e;
      struct zx_cb_ItemData_s* en;
      struct zx_cb_ItemData_s* enn;
      for (enn = 0, e = x->ItemData; e; e = (struct zx_cb_ItemData_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_cb_ItemData(c, e, dup_strs);
	  if (!enn)
	      x->ItemData = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zx_cb_Extension_s* e;
      struct zx_cb_Extension_s* en;
      struct zx_cb_Extension_s* enn;
      for (enn = 0, e = x->Extension; e; e = (struct zx_cb_Extension_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_cb_Extension(c, e, dup_strs);
	  if (!enn)
	      x->Extension = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }

  return x;
}

/* FUNC(zx_WALK_SO_cb_CreateResponse) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zx_WALK_SO_cb_CreateResponse(struct zx_ctx* c, struct zx_cb_CreateResponse_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  int ret = callback(&x->gg.g, ctx);
  if (ret)
    return ret;
  
  /* *** deal with xmlns specifications in exc c14n way */


  
  ret = zx_walk_so_unknown_attributes(c, &x->gg, ctx, callback); 
  if (ret)
    return ret;

  {
      struct zx_cb_Status_s* e;
      for (e = x->Status; e; e = (struct zx_cb_Status_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_cb_Status(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zx_cb_ItemData_s* e;
      for (e = x->ItemData; e; e = (struct zx_cb_ItemData_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_cb_ItemData(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zx_cb_Extension_s* e;
      for (e = x->Extension; e; e = (struct zx_cb_Extension_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_cb_Extension(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }

  
  return zx_walk_so_unknown_elems_and_content(c, &x->gg, ctx, callback);
}

/* FUNC(zx_WALK_WO_cb_CreateResponse) */

int zx_WALK_WO_cb_CreateResponse(struct zx_ctx* c, struct zx_cb_CreateResponse_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   cb_Credential
#define EL_STRUCT zx_cb_Credential_s
#define EL_NS     cb
#define EL_TAG    Credential

/* FUNC(zx_FREE_cb_Credential) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

/* Called by: */
void zx_FREE_cb_Credential(struct zx_ctx* c, struct zx_cb_Credential_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */

  zx_free_attr(c, x->notOnOrAfter, free_strs);

  {
      struct zx_sa_Assertion_s* e;
      struct zx_sa_Assertion_s* en;
      for (e = x->Assertion; e; e = en) {
	  en = (struct zx_sa_Assertion_s*)e->gg.g.n;
	  zx_FREE_sa_Assertion(c, e, free_strs);
      }
  }


  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zx_NEW_cb_Credential) */

/* Trivial allocator/constructor for the datatype. */

/* Called by: */
struct zx_cb_Credential_s* zx_NEW_cb_Credential(struct zx_ctx* c)
{
  struct zx_cb_Credential_s* x = ZX_ZALLOC(c, struct zx_cb_Credential_s);
  x->gg.g.tok = zx_cb_Credential_ELEM;
  return x;
}

#ifdef ZX_ENA_AUX

/* FUNC(zx_DUP_STRS_cb_Credential) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

/* Called by: */
void zx_DUP_STRS_cb_Credential(struct zx_ctx* c, struct zx_cb_Credential_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */

  zx_dup_attr(c, x->notOnOrAfter);

  {
      struct zx_sa_Assertion_s* e;
      for (e = x->Assertion; e; e = (struct zx_sa_Assertion_s*)e->gg.g.n)
	  zx_DUP_STRS_sa_Assertion(c, e);
  }

}

/* FUNC(zx_DEEP_CLONE_cb_Credential) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

/* Called by: */
struct zx_cb_Credential_s* zx_DEEP_CLONE_cb_Credential(struct zx_ctx* c, struct zx_cb_Credential_s* x, int dup_strs)
{
  x = (struct zx_cb_Credential_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zx_cb_Credential_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */

  x->notOnOrAfter = zx_clone_attr(c, x->notOnOrAfter);

  {
      struct zx_sa_Assertion_s* e;
      struct zx_sa_Assertion_s* en;
      struct zx_sa_Assertion_s* enn;
      for (enn = 0, e = x->Assertion; e; e = (struct zx_sa_Assertion_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_sa_Assertion(c, e, dup_strs);
	  if (!enn)
	      x->Assertion = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }

  return x;
}

/* FUNC(zx_WALK_SO_cb_Credential) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zx_WALK_SO_cb_Credential(struct zx_ctx* c, struct zx_cb_Credential_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  int ret = callback(&x->gg.g, ctx);
  if (ret)
    return ret;
  
  /* *** deal with xmlns specifications in exc c14n way */


  
  ret = zx_walk_so_unknown_attributes(c, &x->gg, ctx, callback); 
  if (ret)
    return ret;

  {
      struct zx_sa_Assertion_s* e;
      for (e = x->Assertion; e; e = (struct zx_sa_Assertion_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_sa_Assertion(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }

  
  return zx_walk_so_unknown_elems_and_content(c, &x->gg, ctx, callback);
}

/* FUNC(zx_WALK_WO_cb_Credential) */

int zx_WALK_WO_cb_Credential(struct zx_ctx* c, struct zx_cb_Credential_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   cb_Data
#define EL_STRUCT zx_cb_Data_s
#define EL_NS     cb
#define EL_TAG    Data

/* FUNC(zx_FREE_cb_Data) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

/* Called by: */
void zx_FREE_cb_Data(struct zx_ctx* c, struct zx_cb_Data_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */

  zx_free_attr(c, x->id, free_strs);
  zx_free_attr(c, x->itemIDRef, free_strs);
  zx_free_attr(c, x->notSorted, free_strs);
  zx_free_attr(c, x->remaining, free_strs);
  zx_free_attr(c, x->nextOffset, free_strs);
  zx_free_attr(c, x->setID, free_strs);
  zx_free_attr(c, x->changeFormat, free_strs);

  zx_free_simple_elems(c, x->Card, free_strs);


  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zx_NEW_cb_Data) */

/* Trivial allocator/constructor for the datatype. */

/* Called by: */
struct zx_cb_Data_s* zx_NEW_cb_Data(struct zx_ctx* c)
{
  struct zx_cb_Data_s* x = ZX_ZALLOC(c, struct zx_cb_Data_s);
  x->gg.g.tok = zx_cb_Data_ELEM;
  return x;
}

#ifdef ZX_ENA_AUX

/* FUNC(zx_DUP_STRS_cb_Data) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

/* Called by: */
void zx_DUP_STRS_cb_Data(struct zx_ctx* c, struct zx_cb_Data_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */

  zx_dup_attr(c, x->id);
  zx_dup_attr(c, x->itemIDRef);
  zx_dup_attr(c, x->notSorted);
  zx_dup_attr(c, x->remaining);
  zx_dup_attr(c, x->nextOffset);
  zx_dup_attr(c, x->setID);
  zx_dup_attr(c, x->changeFormat);

  zx_dup_strs_simple_elems(c, x->Card);

}

/* FUNC(zx_DEEP_CLONE_cb_Data) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

/* Called by: */
struct zx_cb_Data_s* zx_DEEP_CLONE_cb_Data(struct zx_ctx* c, struct zx_cb_Data_s* x, int dup_strs)
{
  x = (struct zx_cb_Data_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zx_cb_Data_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */

  x->id = zx_clone_attr(c, x->id);
  x->itemIDRef = zx_clone_attr(c, x->itemIDRef);
  x->notSorted = zx_clone_attr(c, x->notSorted);
  x->remaining = zx_clone_attr(c, x->remaining);
  x->nextOffset = zx_clone_attr(c, x->nextOffset);
  x->setID = zx_clone_attr(c, x->setID);
  x->changeFormat = zx_clone_attr(c, x->changeFormat);

  x->Card = zx_deep_clone_simple_elems(c,x->Card, dup_strs);

  return x;
}

/* FUNC(zx_WALK_SO_cb_Data) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zx_WALK_SO_cb_Data(struct zx_ctx* c, struct zx_cb_Data_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  int ret = callback(&x->gg.g, ctx);
  if (ret)
    return ret;
  
  /* *** deal with xmlns specifications in exc c14n way */


  
  ret = zx_walk_so_unknown_attributes(c, &x->gg, ctx, callback); 
  if (ret)
    return ret;

  ret = zx_walk_so_simple_elems(c, x->Card, ctx, callback);
  if (ret)
    return ret;

  
  return zx_walk_so_unknown_elems_and_content(c, &x->gg, ctx, callback);
}

/* FUNC(zx_WALK_WO_cb_Data) */

int zx_WALK_WO_cb_Data(struct zx_ctx* c, struct zx_cb_Data_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   cb_Delete
#define EL_STRUCT zx_cb_Delete_s
#define EL_NS     cb
#define EL_TAG    Delete

/* FUNC(zx_FREE_cb_Delete) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

/* Called by: */
void zx_FREE_cb_Delete(struct zx_ctx* c, struct zx_cb_Delete_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */

  zx_free_attr(c, x->id, free_strs);

  {
      struct zx_cb_ResourceID_s* e;
      struct zx_cb_ResourceID_s* en;
      for (e = x->ResourceID; e; e = en) {
	  en = (struct zx_cb_ResourceID_s*)e->gg.g.n;
	  zx_FREE_cb_ResourceID(c, e, free_strs);
      }
  }
  {
      struct zx_cb_EncryptedResourceID_s* e;
      struct zx_cb_EncryptedResourceID_s* en;
      for (e = x->EncryptedResourceID; e; e = en) {
	  en = (struct zx_cb_EncryptedResourceID_s*)e->gg.g.n;
	  zx_FREE_cb_EncryptedResourceID(c, e, free_strs);
      }
  }
  {
      struct zx_cb_DeleteItem_s* e;
      struct zx_cb_DeleteItem_s* en;
      for (e = x->DeleteItem; e; e = en) {
	  en = (struct zx_cb_DeleteItem_s*)e->gg.g.n;
	  zx_FREE_cb_DeleteItem(c, e, free_strs);
      }
  }
  {
      struct zx_cb_Extension_s* e;
      struct zx_cb_Extension_s* en;
      for (e = x->Extension; e; e = en) {
	  en = (struct zx_cb_Extension_s*)e->gg.g.n;
	  zx_FREE_cb_Extension(c, e, free_strs);
      }
  }


  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zx_NEW_cb_Delete) */

/* Trivial allocator/constructor for the datatype. */

/* Called by: */
struct zx_cb_Delete_s* zx_NEW_cb_Delete(struct zx_ctx* c)
{
  struct zx_cb_Delete_s* x = ZX_ZALLOC(c, struct zx_cb_Delete_s);
  x->gg.g.tok = zx_cb_Delete_ELEM;
  return x;
}

#ifdef ZX_ENA_AUX

/* FUNC(zx_DUP_STRS_cb_Delete) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

/* Called by: */
void zx_DUP_STRS_cb_Delete(struct zx_ctx* c, struct zx_cb_Delete_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */

  zx_dup_attr(c, x->id);

  {
      struct zx_cb_ResourceID_s* e;
      for (e = x->ResourceID; e; e = (struct zx_cb_ResourceID_s*)e->gg.g.n)
	  zx_DUP_STRS_cb_ResourceID(c, e);
  }
  {
      struct zx_cb_EncryptedResourceID_s* e;
      for (e = x->EncryptedResourceID; e; e = (struct zx_cb_EncryptedResourceID_s*)e->gg.g.n)
	  zx_DUP_STRS_cb_EncryptedResourceID(c, e);
  }
  {
      struct zx_cb_DeleteItem_s* e;
      for (e = x->DeleteItem; e; e = (struct zx_cb_DeleteItem_s*)e->gg.g.n)
	  zx_DUP_STRS_cb_DeleteItem(c, e);
  }
  {
      struct zx_cb_Extension_s* e;
      for (e = x->Extension; e; e = (struct zx_cb_Extension_s*)e->gg.g.n)
	  zx_DUP_STRS_cb_Extension(c, e);
  }

}

/* FUNC(zx_DEEP_CLONE_cb_Delete) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

/* Called by: */
struct zx_cb_Delete_s* zx_DEEP_CLONE_cb_Delete(struct zx_ctx* c, struct zx_cb_Delete_s* x, int dup_strs)
{
  x = (struct zx_cb_Delete_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zx_cb_Delete_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */

  x->id = zx_clone_attr(c, x->id);

  {
      struct zx_cb_ResourceID_s* e;
      struct zx_cb_ResourceID_s* en;
      struct zx_cb_ResourceID_s* enn;
      for (enn = 0, e = x->ResourceID; e; e = (struct zx_cb_ResourceID_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_cb_ResourceID(c, e, dup_strs);
	  if (!enn)
	      x->ResourceID = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zx_cb_EncryptedResourceID_s* e;
      struct zx_cb_EncryptedResourceID_s* en;
      struct zx_cb_EncryptedResourceID_s* enn;
      for (enn = 0, e = x->EncryptedResourceID; e; e = (struct zx_cb_EncryptedResourceID_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_cb_EncryptedResourceID(c, e, dup_strs);
	  if (!enn)
	      x->EncryptedResourceID = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zx_cb_DeleteItem_s* e;
      struct zx_cb_DeleteItem_s* en;
      struct zx_cb_DeleteItem_s* enn;
      for (enn = 0, e = x->DeleteItem; e; e = (struct zx_cb_DeleteItem_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_cb_DeleteItem(c, e, dup_strs);
	  if (!enn)
	      x->DeleteItem = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zx_cb_Extension_s* e;
      struct zx_cb_Extension_s* en;
      struct zx_cb_Extension_s* enn;
      for (enn = 0, e = x->Extension; e; e = (struct zx_cb_Extension_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_cb_Extension(c, e, dup_strs);
	  if (!enn)
	      x->Extension = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }

  return x;
}

/* FUNC(zx_WALK_SO_cb_Delete) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zx_WALK_SO_cb_Delete(struct zx_ctx* c, struct zx_cb_Delete_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  int ret = callback(&x->gg.g, ctx);
  if (ret)
    return ret;
  
  /* *** deal with xmlns specifications in exc c14n way */


  
  ret = zx_walk_so_unknown_attributes(c, &x->gg, ctx, callback); 
  if (ret)
    return ret;

  {
      struct zx_cb_ResourceID_s* e;
      for (e = x->ResourceID; e; e = (struct zx_cb_ResourceID_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_cb_ResourceID(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zx_cb_EncryptedResourceID_s* e;
      for (e = x->EncryptedResourceID; e; e = (struct zx_cb_EncryptedResourceID_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_cb_EncryptedResourceID(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zx_cb_DeleteItem_s* e;
      for (e = x->DeleteItem; e; e = (struct zx_cb_DeleteItem_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_cb_DeleteItem(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zx_cb_Extension_s* e;
      for (e = x->Extension; e; e = (struct zx_cb_Extension_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_cb_Extension(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }

  
  return zx_walk_so_unknown_elems_and_content(c, &x->gg, ctx, callback);
}

/* FUNC(zx_WALK_WO_cb_Delete) */

int zx_WALK_WO_cb_Delete(struct zx_ctx* c, struct zx_cb_Delete_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   cb_DeleteItem
#define EL_STRUCT zx_cb_DeleteItem_s
#define EL_NS     cb
#define EL_TAG    DeleteItem

/* FUNC(zx_FREE_cb_DeleteItem) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

/* Called by: */
void zx_FREE_cb_DeleteItem(struct zx_ctx* c, struct zx_cb_DeleteItem_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */

  zx_free_attr(c, x->id, free_strs);
  zx_free_attr(c, x->itemID, free_strs);
  zx_free_attr(c, x->notChangedSince, free_strs);
  zx_free_attr(c, x->objectType, free_strs);
  zx_free_attr(c, x->predefined, free_strs);

  zx_free_simple_elems(c, x->Select, free_strs);


  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zx_NEW_cb_DeleteItem) */

/* Trivial allocator/constructor for the datatype. */

/* Called by: */
struct zx_cb_DeleteItem_s* zx_NEW_cb_DeleteItem(struct zx_ctx* c)
{
  struct zx_cb_DeleteItem_s* x = ZX_ZALLOC(c, struct zx_cb_DeleteItem_s);
  x->gg.g.tok = zx_cb_DeleteItem_ELEM;
  return x;
}

#ifdef ZX_ENA_AUX

/* FUNC(zx_DUP_STRS_cb_DeleteItem) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

/* Called by: */
void zx_DUP_STRS_cb_DeleteItem(struct zx_ctx* c, struct zx_cb_DeleteItem_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */

  zx_dup_attr(c, x->id);
  zx_dup_attr(c, x->itemID);
  zx_dup_attr(c, x->notChangedSince);
  zx_dup_attr(c, x->objectType);
  zx_dup_attr(c, x->predefined);

  zx_dup_strs_simple_elems(c, x->Select);

}

/* FUNC(zx_DEEP_CLONE_cb_DeleteItem) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

/* Called by: */
struct zx_cb_DeleteItem_s* zx_DEEP_CLONE_cb_DeleteItem(struct zx_ctx* c, struct zx_cb_DeleteItem_s* x, int dup_strs)
{
  x = (struct zx_cb_DeleteItem_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zx_cb_DeleteItem_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */

  x->id = zx_clone_attr(c, x->id);
  x->itemID = zx_clone_attr(c, x->itemID);
  x->notChangedSince = zx_clone_attr(c, x->notChangedSince);
  x->objectType = zx_clone_attr(c, x->objectType);
  x->predefined = zx_clone_attr(c, x->predefined);

  x->Select = zx_deep_clone_simple_elems(c,x->Select, dup_strs);

  return x;
}

/* FUNC(zx_WALK_SO_cb_DeleteItem) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zx_WALK_SO_cb_DeleteItem(struct zx_ctx* c, struct zx_cb_DeleteItem_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

/* FUNC(zx_WALK_WO_cb_DeleteItem) */

int zx_WALK_WO_cb_DeleteItem(struct zx_ctx* c, struct zx_cb_DeleteItem_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   cb_DeleteResponse
#define EL_STRUCT zx_cb_DeleteResponse_s
#define EL_NS     cb
#define EL_TAG    DeleteResponse

/* FUNC(zx_FREE_cb_DeleteResponse) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

/* Called by: */
void zx_FREE_cb_DeleteResponse(struct zx_ctx* c, struct zx_cb_DeleteResponse_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */

  zx_free_attr(c, x->id, free_strs);

  {
      struct zx_cb_Status_s* e;
      struct zx_cb_Status_s* en;
      for (e = x->Status; e; e = en) {
	  en = (struct zx_cb_Status_s*)e->gg.g.n;
	  zx_FREE_cb_Status(c, e, free_strs);
      }
  }
  {
      struct zx_cb_Extension_s* e;
      struct zx_cb_Extension_s* en;
      for (e = x->Extension; e; e = en) {
	  en = (struct zx_cb_Extension_s*)e->gg.g.n;
	  zx_FREE_cb_Extension(c, e, free_strs);
      }
  }


  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zx_NEW_cb_DeleteResponse) */

/* Trivial allocator/constructor for the datatype. */

/* Called by: */
struct zx_cb_DeleteResponse_s* zx_NEW_cb_DeleteResponse(struct zx_ctx* c)
{
  struct zx_cb_DeleteResponse_s* x = ZX_ZALLOC(c, struct zx_cb_DeleteResponse_s);
  x->gg.g.tok = zx_cb_DeleteResponse_ELEM;
  return x;
}

#ifdef ZX_ENA_AUX

/* FUNC(zx_DUP_STRS_cb_DeleteResponse) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

/* Called by: */
void zx_DUP_STRS_cb_DeleteResponse(struct zx_ctx* c, struct zx_cb_DeleteResponse_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */

  zx_dup_attr(c, x->id);

  {
      struct zx_cb_Status_s* e;
      for (e = x->Status; e; e = (struct zx_cb_Status_s*)e->gg.g.n)
	  zx_DUP_STRS_cb_Status(c, e);
  }
  {
      struct zx_cb_Extension_s* e;
      for (e = x->Extension; e; e = (struct zx_cb_Extension_s*)e->gg.g.n)
	  zx_DUP_STRS_cb_Extension(c, e);
  }

}

/* FUNC(zx_DEEP_CLONE_cb_DeleteResponse) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

/* Called by: */
struct zx_cb_DeleteResponse_s* zx_DEEP_CLONE_cb_DeleteResponse(struct zx_ctx* c, struct zx_cb_DeleteResponse_s* x, int dup_strs)
{
  x = (struct zx_cb_DeleteResponse_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zx_cb_DeleteResponse_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */

  x->id = zx_clone_attr(c, x->id);

  {
      struct zx_cb_Status_s* e;
      struct zx_cb_Status_s* en;
      struct zx_cb_Status_s* enn;
      for (enn = 0, e = x->Status; e; e = (struct zx_cb_Status_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_cb_Status(c, e, dup_strs);
	  if (!enn)
	      x->Status = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zx_cb_Extension_s* e;
      struct zx_cb_Extension_s* en;
      struct zx_cb_Extension_s* enn;
      for (enn = 0, e = x->Extension; e; e = (struct zx_cb_Extension_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_cb_Extension(c, e, dup_strs);
	  if (!enn)
	      x->Extension = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }

  return x;
}

/* FUNC(zx_WALK_SO_cb_DeleteResponse) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zx_WALK_SO_cb_DeleteResponse(struct zx_ctx* c, struct zx_cb_DeleteResponse_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  int ret = callback(&x->gg.g, ctx);
  if (ret)
    return ret;
  
  /* *** deal with xmlns specifications in exc c14n way */


  
  ret = zx_walk_so_unknown_attributes(c, &x->gg, ctx, callback); 
  if (ret)
    return ret;

  {
      struct zx_cb_Status_s* e;
      for (e = x->Status; e; e = (struct zx_cb_Status_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_cb_Status(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zx_cb_Extension_s* e;
      for (e = x->Extension; e; e = (struct zx_cb_Extension_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_cb_Extension(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }

  
  return zx_walk_so_unknown_elems_and_content(c, &x->gg, ctx, callback);
}

/* FUNC(zx_WALK_WO_cb_DeleteResponse) */

int zx_WALK_WO_cb_DeleteResponse(struct zx_ctx* c, struct zx_cb_DeleteResponse_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   cb_EncryptedResourceID
#define EL_STRUCT zx_cb_EncryptedResourceID_s
#define EL_NS     cb
#define EL_TAG    EncryptedResourceID

/* FUNC(zx_FREE_cb_EncryptedResourceID) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

/* Called by: */
void zx_FREE_cb_EncryptedResourceID(struct zx_ctx* c, struct zx_cb_EncryptedResourceID_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */


  {
      struct zx_xenc_EncryptedData_s* e;
      struct zx_xenc_EncryptedData_s* en;
      for (e = x->EncryptedData; e; e = en) {
	  en = (struct zx_xenc_EncryptedData_s*)e->gg.g.n;
	  zx_FREE_xenc_EncryptedData(c, e, free_strs);
      }
  }
  {
      struct zx_xenc_EncryptedKey_s* e;
      struct zx_xenc_EncryptedKey_s* en;
      for (e = x->EncryptedKey; e; e = en) {
	  en = (struct zx_xenc_EncryptedKey_s*)e->gg.g.n;
	  zx_FREE_xenc_EncryptedKey(c, e, free_strs);
      }
  }


  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zx_NEW_cb_EncryptedResourceID) */

/* Trivial allocator/constructor for the datatype. */

/* Called by: */
struct zx_cb_EncryptedResourceID_s* zx_NEW_cb_EncryptedResourceID(struct zx_ctx* c)
{
  struct zx_cb_EncryptedResourceID_s* x = ZX_ZALLOC(c, struct zx_cb_EncryptedResourceID_s);
  x->gg.g.tok = zx_cb_EncryptedResourceID_ELEM;
  return x;
}

#ifdef ZX_ENA_AUX

/* FUNC(zx_DUP_STRS_cb_EncryptedResourceID) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

/* Called by: */
void zx_DUP_STRS_cb_EncryptedResourceID(struct zx_ctx* c, struct zx_cb_EncryptedResourceID_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */


  {
      struct zx_xenc_EncryptedData_s* e;
      for (e = x->EncryptedData; e; e = (struct zx_xenc_EncryptedData_s*)e->gg.g.n)
	  zx_DUP_STRS_xenc_EncryptedData(c, e);
  }
  {
      struct zx_xenc_EncryptedKey_s* e;
      for (e = x->EncryptedKey; e; e = (struct zx_xenc_EncryptedKey_s*)e->gg.g.n)
	  zx_DUP_STRS_xenc_EncryptedKey(c, e);
  }

}

/* FUNC(zx_DEEP_CLONE_cb_EncryptedResourceID) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

/* Called by: */
struct zx_cb_EncryptedResourceID_s* zx_DEEP_CLONE_cb_EncryptedResourceID(struct zx_ctx* c, struct zx_cb_EncryptedResourceID_s* x, int dup_strs)
{
  x = (struct zx_cb_EncryptedResourceID_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zx_cb_EncryptedResourceID_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */


  {
      struct zx_xenc_EncryptedData_s* e;
      struct zx_xenc_EncryptedData_s* en;
      struct zx_xenc_EncryptedData_s* enn;
      for (enn = 0, e = x->EncryptedData; e; e = (struct zx_xenc_EncryptedData_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_xenc_EncryptedData(c, e, dup_strs);
	  if (!enn)
	      x->EncryptedData = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zx_xenc_EncryptedKey_s* e;
      struct zx_xenc_EncryptedKey_s* en;
      struct zx_xenc_EncryptedKey_s* enn;
      for (enn = 0, e = x->EncryptedKey; e; e = (struct zx_xenc_EncryptedKey_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_xenc_EncryptedKey(c, e, dup_strs);
	  if (!enn)
	      x->EncryptedKey = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }

  return x;
}

/* FUNC(zx_WALK_SO_cb_EncryptedResourceID) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zx_WALK_SO_cb_EncryptedResourceID(struct zx_ctx* c, struct zx_cb_EncryptedResourceID_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  int ret = callback(&x->gg.g, ctx);
  if (ret)
    return ret;
  
  /* *** deal with xmlns specifications in exc c14n way */


  
  ret = zx_walk_so_unknown_attributes(c, &x->gg, ctx, callback); 
  if (ret)
    return ret;

  {
      struct zx_xenc_EncryptedData_s* e;
      for (e = x->EncryptedData; e; e = (struct zx_xenc_EncryptedData_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_xenc_EncryptedData(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zx_xenc_EncryptedKey_s* e;
      for (e = x->EncryptedKey; e; e = (struct zx_xenc_EncryptedKey_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_xenc_EncryptedKey(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }

  
  return zx_walk_so_unknown_elems_and_content(c, &x->gg, ctx, callback);
}

/* FUNC(zx_WALK_WO_cb_EncryptedResourceID) */

int zx_WALK_WO_cb_EncryptedResourceID(struct zx_ctx* c, struct zx_cb_EncryptedResourceID_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   cb_Extension
#define EL_STRUCT zx_cb_Extension_s
#define EL_NS     cb
#define EL_TAG    Extension

/* FUNC(zx_FREE_cb_Extension) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

/* Called by: */
void zx_FREE_cb_Extension(struct zx_ctx* c, struct zx_cb_Extension_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */




  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zx_NEW_cb_Extension) */

/* Trivial allocator/constructor for the datatype. */

/* Called by: */
struct zx_cb_Extension_s* zx_NEW_cb_Extension(struct zx_ctx* c)
{
  struct zx_cb_Extension_s* x = ZX_ZALLOC(c, struct zx_cb_Extension_s);
  x->gg.g.tok = zx_cb_Extension_ELEM;
  return x;
}

#ifdef ZX_ENA_AUX

/* FUNC(zx_DUP_STRS_cb_Extension) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

/* Called by: */
void zx_DUP_STRS_cb_Extension(struct zx_ctx* c, struct zx_cb_Extension_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */



}

/* FUNC(zx_DEEP_CLONE_cb_Extension) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

/* Called by: */
struct zx_cb_Extension_s* zx_DEEP_CLONE_cb_Extension(struct zx_ctx* c, struct zx_cb_Extension_s* x, int dup_strs)
{
  x = (struct zx_cb_Extension_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zx_cb_Extension_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */



  return x;
}

/* FUNC(zx_WALK_SO_cb_Extension) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zx_WALK_SO_cb_Extension(struct zx_ctx* c, struct zx_cb_Extension_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  int ret = callback(&x->gg.g, ctx);
  if (ret)
    return ret;
  
  /* *** deal with xmlns specifications in exc c14n way */


  
  ret = zx_walk_so_unknown_attributes(c, &x->gg, ctx, callback); 
  if (ret)
    return ret;


  
  return zx_walk_so_unknown_elems_and_content(c, &x->gg, ctx, callback);
}

/* FUNC(zx_WALK_WO_cb_Extension) */

int zx_WALK_WO_cb_Extension(struct zx_ctx* c, struct zx_cb_Extension_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   cb_ItemData
#define EL_STRUCT zx_cb_ItemData_s
#define EL_NS     cb
#define EL_TAG    ItemData

/* FUNC(zx_FREE_cb_ItemData) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

/* Called by: */
void zx_FREE_cb_ItemData(struct zx_ctx* c, struct zx_cb_ItemData_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */

  zx_free_attr(c, x->id, free_strs);
  zx_free_attr(c, x->itemIDRef, free_strs);
  zx_free_attr(c, x->notSorted, free_strs);
  zx_free_attr(c, x->changeFormat, free_strs);

  zx_free_simple_elems(c, x->Card, free_strs);


  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zx_NEW_cb_ItemData) */

/* Trivial allocator/constructor for the datatype. */

/* Called by: */
struct zx_cb_ItemData_s* zx_NEW_cb_ItemData(struct zx_ctx* c)
{
  struct zx_cb_ItemData_s* x = ZX_ZALLOC(c, struct zx_cb_ItemData_s);
  x->gg.g.tok = zx_cb_ItemData_ELEM;
  return x;
}

#ifdef ZX_ENA_AUX

/* FUNC(zx_DUP_STRS_cb_ItemData) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

/* Called by: */
void zx_DUP_STRS_cb_ItemData(struct zx_ctx* c, struct zx_cb_ItemData_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */

  zx_dup_attr(c, x->id);
  zx_dup_attr(c, x->itemIDRef);
  zx_dup_attr(c, x->notSorted);
  zx_dup_attr(c, x->changeFormat);

  zx_dup_strs_simple_elems(c, x->Card);

}

/* FUNC(zx_DEEP_CLONE_cb_ItemData) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

/* Called by: */
struct zx_cb_ItemData_s* zx_DEEP_CLONE_cb_ItemData(struct zx_ctx* c, struct zx_cb_ItemData_s* x, int dup_strs)
{
  x = (struct zx_cb_ItemData_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zx_cb_ItemData_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */

  x->id = zx_clone_attr(c, x->id);
  x->itemIDRef = zx_clone_attr(c, x->itemIDRef);
  x->notSorted = zx_clone_attr(c, x->notSorted);
  x->changeFormat = zx_clone_attr(c, x->changeFormat);

  x->Card = zx_deep_clone_simple_elems(c,x->Card, dup_strs);

  return x;
}

/* FUNC(zx_WALK_SO_cb_ItemData) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zx_WALK_SO_cb_ItemData(struct zx_ctx* c, struct zx_cb_ItemData_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  int ret = callback(&x->gg.g, ctx);
  if (ret)
    return ret;
  
  /* *** deal with xmlns specifications in exc c14n way */


  
  ret = zx_walk_so_unknown_attributes(c, &x->gg, ctx, callback); 
  if (ret)
    return ret;

  ret = zx_walk_so_simple_elems(c, x->Card, ctx, callback);
  if (ret)
    return ret;

  
  return zx_walk_so_unknown_elems_and_content(c, &x->gg, ctx, callback);
}

/* FUNC(zx_WALK_WO_cb_ItemData) */

int zx_WALK_WO_cb_ItemData(struct zx_ctx* c, struct zx_cb_ItemData_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   cb_ItemSelection
#define EL_STRUCT zx_cb_ItemSelection_s
#define EL_NS     cb
#define EL_TAG    ItemSelection

/* FUNC(zx_FREE_cb_ItemSelection) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

/* Called by: */
void zx_FREE_cb_ItemSelection(struct zx_ctx* c, struct zx_cb_ItemSelection_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */

  zx_free_attr(c, x->format, free_strs);



  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zx_NEW_cb_ItemSelection) */

/* Trivial allocator/constructor for the datatype. */

/* Called by: */
struct zx_cb_ItemSelection_s* zx_NEW_cb_ItemSelection(struct zx_ctx* c)
{
  struct zx_cb_ItemSelection_s* x = ZX_ZALLOC(c, struct zx_cb_ItemSelection_s);
  x->gg.g.tok = zx_cb_ItemSelection_ELEM;
  return x;
}

#ifdef ZX_ENA_AUX

/* FUNC(zx_DUP_STRS_cb_ItemSelection) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

/* Called by: */
void zx_DUP_STRS_cb_ItemSelection(struct zx_ctx* c, struct zx_cb_ItemSelection_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */

  zx_dup_attr(c, x->format);


}

/* FUNC(zx_DEEP_CLONE_cb_ItemSelection) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

/* Called by: */
struct zx_cb_ItemSelection_s* zx_DEEP_CLONE_cb_ItemSelection(struct zx_ctx* c, struct zx_cb_ItemSelection_s* x, int dup_strs)
{
  x = (struct zx_cb_ItemSelection_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zx_cb_ItemSelection_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */

  x->format = zx_clone_attr(c, x->format);


  return x;
}

/* FUNC(zx_WALK_SO_cb_ItemSelection) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zx_WALK_SO_cb_ItemSelection(struct zx_ctx* c, struct zx_cb_ItemSelection_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  int ret = callback(&x->gg.g, ctx);
  if (ret)
    return ret;
  
  /* *** deal with xmlns specifications in exc c14n way */


  
  ret = zx_walk_so_unknown_attributes(c, &x->gg, ctx, callback); 
  if (ret)
    return ret;


  
  return zx_walk_so_unknown_elems_and_content(c, &x->gg, ctx, callback);
}

/* FUNC(zx_WALK_WO_cb_ItemSelection) */

int zx_WALK_WO_cb_ItemSelection(struct zx_ctx* c, struct zx_cb_ItemSelection_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   cb_Modification
#define EL_STRUCT zx_cb_Modification_s
#define EL_NS     cb
#define EL_TAG    Modification

/* FUNC(zx_FREE_cb_Modification) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

/* Called by: */
void zx_FREE_cb_Modification(struct zx_ctx* c, struct zx_cb_Modification_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */

  zx_free_attr(c, x->id, free_strs);
  zx_free_attr(c, x->itemID, free_strs);
  zx_free_attr(c, x->notChangedSince, free_strs);
  zx_free_attr(c, x->objectType, free_strs);
  zx_free_attr(c, x->overrideAllowed, free_strs);

  zx_free_simple_elems(c, x->Select, free_strs);
  {
      struct zx_cb_NewData_s* e;
      struct zx_cb_NewData_s* en;
      for (e = x->NewData; e; e = en) {
	  en = (struct zx_cb_NewData_s*)e->gg.g.n;
	  zx_FREE_cb_NewData(c, e, free_strs);
      }
  }


  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zx_NEW_cb_Modification) */

/* Trivial allocator/constructor for the datatype. */

/* Called by: */
struct zx_cb_Modification_s* zx_NEW_cb_Modification(struct zx_ctx* c)
{
  struct zx_cb_Modification_s* x = ZX_ZALLOC(c, struct zx_cb_Modification_s);
  x->gg.g.tok = zx_cb_Modification_ELEM;
  return x;
}

#ifdef ZX_ENA_AUX

/* FUNC(zx_DUP_STRS_cb_Modification) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

/* Called by: */
void zx_DUP_STRS_cb_Modification(struct zx_ctx* c, struct zx_cb_Modification_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */

  zx_dup_attr(c, x->id);
  zx_dup_attr(c, x->itemID);
  zx_dup_attr(c, x->notChangedSince);
  zx_dup_attr(c, x->objectType);
  zx_dup_attr(c, x->overrideAllowed);

  zx_dup_strs_simple_elems(c, x->Select);
  {
      struct zx_cb_NewData_s* e;
      for (e = x->NewData; e; e = (struct zx_cb_NewData_s*)e->gg.g.n)
	  zx_DUP_STRS_cb_NewData(c, e);
  }

}

/* FUNC(zx_DEEP_CLONE_cb_Modification) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

/* Called by: */
struct zx_cb_Modification_s* zx_DEEP_CLONE_cb_Modification(struct zx_ctx* c, struct zx_cb_Modification_s* x, int dup_strs)
{
  x = (struct zx_cb_Modification_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zx_cb_Modification_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */

  x->id = zx_clone_attr(c, x->id);
  x->itemID = zx_clone_attr(c, x->itemID);
  x->notChangedSince = zx_clone_attr(c, x->notChangedSince);
  x->objectType = zx_clone_attr(c, x->objectType);
  x->overrideAllowed = zx_clone_attr(c, x->overrideAllowed);

  x->Select = zx_deep_clone_simple_elems(c,x->Select, dup_strs);
  {
      struct zx_cb_NewData_s* e;
      struct zx_cb_NewData_s* en;
      struct zx_cb_NewData_s* enn;
      for (enn = 0, e = x->NewData; e; e = (struct zx_cb_NewData_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_cb_NewData(c, e, dup_strs);
	  if (!enn)
	      x->NewData = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }

  return x;
}

/* FUNC(zx_WALK_SO_cb_Modification) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zx_WALK_SO_cb_Modification(struct zx_ctx* c, struct zx_cb_Modification_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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
      struct zx_cb_NewData_s* e;
      for (e = x->NewData; e; e = (struct zx_cb_NewData_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_cb_NewData(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }

  
  return zx_walk_so_unknown_elems_and_content(c, &x->gg, ctx, callback);
}

/* FUNC(zx_WALK_WO_cb_Modification) */

int zx_WALK_WO_cb_Modification(struct zx_ctx* c, struct zx_cb_Modification_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   cb_Modify
#define EL_STRUCT zx_cb_Modify_s
#define EL_NS     cb
#define EL_TAG    Modify

/* FUNC(zx_FREE_cb_Modify) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

/* Called by: */
void zx_FREE_cb_Modify(struct zx_ctx* c, struct zx_cb_Modify_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */

  zx_free_attr(c, x->id, free_strs);

  {
      struct zx_cb_ResourceID_s* e;
      struct zx_cb_ResourceID_s* en;
      for (e = x->ResourceID; e; e = en) {
	  en = (struct zx_cb_ResourceID_s*)e->gg.g.n;
	  zx_FREE_cb_ResourceID(c, e, free_strs);
      }
  }
  {
      struct zx_cb_EncryptedResourceID_s* e;
      struct zx_cb_EncryptedResourceID_s* en;
      for (e = x->EncryptedResourceID; e; e = en) {
	  en = (struct zx_cb_EncryptedResourceID_s*)e->gg.g.n;
	  zx_FREE_cb_EncryptedResourceID(c, e, free_strs);
      }
  }
  {
      struct zx_cb_Subscription_s* e;
      struct zx_cb_Subscription_s* en;
      for (e = x->Subscription; e; e = en) {
	  en = (struct zx_cb_Subscription_s*)e->gg.g.n;
	  zx_FREE_cb_Subscription(c, e, free_strs);
      }
  }
  {
      struct zx_cb_Modification_s* e;
      struct zx_cb_Modification_s* en;
      for (e = x->Modification; e; e = en) {
	  en = (struct zx_cb_Modification_s*)e->gg.g.n;
	  zx_FREE_cb_Modification(c, e, free_strs);
      }
  }
  {
      struct zx_cb_ItemSelection_s* e;
      struct zx_cb_ItemSelection_s* en;
      for (e = x->ItemSelection; e; e = en) {
	  en = (struct zx_cb_ItemSelection_s*)e->gg.g.n;
	  zx_FREE_cb_ItemSelection(c, e, free_strs);
      }
  }
  {
      struct zx_cb_Extension_s* e;
      struct zx_cb_Extension_s* en;
      for (e = x->Extension; e; e = en) {
	  en = (struct zx_cb_Extension_s*)e->gg.g.n;
	  zx_FREE_cb_Extension(c, e, free_strs);
      }
  }


  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zx_NEW_cb_Modify) */

/* Trivial allocator/constructor for the datatype. */

/* Called by: */
struct zx_cb_Modify_s* zx_NEW_cb_Modify(struct zx_ctx* c)
{
  struct zx_cb_Modify_s* x = ZX_ZALLOC(c, struct zx_cb_Modify_s);
  x->gg.g.tok = zx_cb_Modify_ELEM;
  return x;
}

#ifdef ZX_ENA_AUX

/* FUNC(zx_DUP_STRS_cb_Modify) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

/* Called by: */
void zx_DUP_STRS_cb_Modify(struct zx_ctx* c, struct zx_cb_Modify_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */

  zx_dup_attr(c, x->id);

  {
      struct zx_cb_ResourceID_s* e;
      for (e = x->ResourceID; e; e = (struct zx_cb_ResourceID_s*)e->gg.g.n)
	  zx_DUP_STRS_cb_ResourceID(c, e);
  }
  {
      struct zx_cb_EncryptedResourceID_s* e;
      for (e = x->EncryptedResourceID; e; e = (struct zx_cb_EncryptedResourceID_s*)e->gg.g.n)
	  zx_DUP_STRS_cb_EncryptedResourceID(c, e);
  }
  {
      struct zx_cb_Subscription_s* e;
      for (e = x->Subscription; e; e = (struct zx_cb_Subscription_s*)e->gg.g.n)
	  zx_DUP_STRS_cb_Subscription(c, e);
  }
  {
      struct zx_cb_Modification_s* e;
      for (e = x->Modification; e; e = (struct zx_cb_Modification_s*)e->gg.g.n)
	  zx_DUP_STRS_cb_Modification(c, e);
  }
  {
      struct zx_cb_ItemSelection_s* e;
      for (e = x->ItemSelection; e; e = (struct zx_cb_ItemSelection_s*)e->gg.g.n)
	  zx_DUP_STRS_cb_ItemSelection(c, e);
  }
  {
      struct zx_cb_Extension_s* e;
      for (e = x->Extension; e; e = (struct zx_cb_Extension_s*)e->gg.g.n)
	  zx_DUP_STRS_cb_Extension(c, e);
  }

}

/* FUNC(zx_DEEP_CLONE_cb_Modify) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

/* Called by: */
struct zx_cb_Modify_s* zx_DEEP_CLONE_cb_Modify(struct zx_ctx* c, struct zx_cb_Modify_s* x, int dup_strs)
{
  x = (struct zx_cb_Modify_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zx_cb_Modify_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */

  x->id = zx_clone_attr(c, x->id);

  {
      struct zx_cb_ResourceID_s* e;
      struct zx_cb_ResourceID_s* en;
      struct zx_cb_ResourceID_s* enn;
      for (enn = 0, e = x->ResourceID; e; e = (struct zx_cb_ResourceID_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_cb_ResourceID(c, e, dup_strs);
	  if (!enn)
	      x->ResourceID = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zx_cb_EncryptedResourceID_s* e;
      struct zx_cb_EncryptedResourceID_s* en;
      struct zx_cb_EncryptedResourceID_s* enn;
      for (enn = 0, e = x->EncryptedResourceID; e; e = (struct zx_cb_EncryptedResourceID_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_cb_EncryptedResourceID(c, e, dup_strs);
	  if (!enn)
	      x->EncryptedResourceID = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zx_cb_Subscription_s* e;
      struct zx_cb_Subscription_s* en;
      struct zx_cb_Subscription_s* enn;
      for (enn = 0, e = x->Subscription; e; e = (struct zx_cb_Subscription_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_cb_Subscription(c, e, dup_strs);
	  if (!enn)
	      x->Subscription = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zx_cb_Modification_s* e;
      struct zx_cb_Modification_s* en;
      struct zx_cb_Modification_s* enn;
      for (enn = 0, e = x->Modification; e; e = (struct zx_cb_Modification_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_cb_Modification(c, e, dup_strs);
	  if (!enn)
	      x->Modification = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zx_cb_ItemSelection_s* e;
      struct zx_cb_ItemSelection_s* en;
      struct zx_cb_ItemSelection_s* enn;
      for (enn = 0, e = x->ItemSelection; e; e = (struct zx_cb_ItemSelection_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_cb_ItemSelection(c, e, dup_strs);
	  if (!enn)
	      x->ItemSelection = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zx_cb_Extension_s* e;
      struct zx_cb_Extension_s* en;
      struct zx_cb_Extension_s* enn;
      for (enn = 0, e = x->Extension; e; e = (struct zx_cb_Extension_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_cb_Extension(c, e, dup_strs);
	  if (!enn)
	      x->Extension = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }

  return x;
}

/* FUNC(zx_WALK_SO_cb_Modify) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zx_WALK_SO_cb_Modify(struct zx_ctx* c, struct zx_cb_Modify_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  int ret = callback(&x->gg.g, ctx);
  if (ret)
    return ret;
  
  /* *** deal with xmlns specifications in exc c14n way */


  
  ret = zx_walk_so_unknown_attributes(c, &x->gg, ctx, callback); 
  if (ret)
    return ret;

  {
      struct zx_cb_ResourceID_s* e;
      for (e = x->ResourceID; e; e = (struct zx_cb_ResourceID_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_cb_ResourceID(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zx_cb_EncryptedResourceID_s* e;
      for (e = x->EncryptedResourceID; e; e = (struct zx_cb_EncryptedResourceID_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_cb_EncryptedResourceID(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zx_cb_Subscription_s* e;
      for (e = x->Subscription; e; e = (struct zx_cb_Subscription_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_cb_Subscription(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zx_cb_Modification_s* e;
      for (e = x->Modification; e; e = (struct zx_cb_Modification_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_cb_Modification(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zx_cb_ItemSelection_s* e;
      for (e = x->ItemSelection; e; e = (struct zx_cb_ItemSelection_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_cb_ItemSelection(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zx_cb_Extension_s* e;
      for (e = x->Extension; e; e = (struct zx_cb_Extension_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_cb_Extension(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }

  
  return zx_walk_so_unknown_elems_and_content(c, &x->gg, ctx, callback);
}

/* FUNC(zx_WALK_WO_cb_Modify) */

int zx_WALK_WO_cb_Modify(struct zx_ctx* c, struct zx_cb_Modify_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   cb_ModifyResponse
#define EL_STRUCT zx_cb_ModifyResponse_s
#define EL_NS     cb
#define EL_TAG    ModifyResponse

/* FUNC(zx_FREE_cb_ModifyResponse) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

/* Called by: */
void zx_FREE_cb_ModifyResponse(struct zx_ctx* c, struct zx_cb_ModifyResponse_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */

  zx_free_attr(c, x->id, free_strs);
  zx_free_attr(c, x->timeStamp, free_strs);

  {
      struct zx_cb_Status_s* e;
      struct zx_cb_Status_s* en;
      for (e = x->Status; e; e = en) {
	  en = (struct zx_cb_Status_s*)e->gg.g.n;
	  zx_FREE_cb_Status(c, e, free_strs);
      }
  }
  {
      struct zx_cb_ItemData_s* e;
      struct zx_cb_ItemData_s* en;
      for (e = x->ItemData; e; e = en) {
	  en = (struct zx_cb_ItemData_s*)e->gg.g.n;
	  zx_FREE_cb_ItemData(c, e, free_strs);
      }
  }
  {
      struct zx_cb_Extension_s* e;
      struct zx_cb_Extension_s* en;
      for (e = x->Extension; e; e = en) {
	  en = (struct zx_cb_Extension_s*)e->gg.g.n;
	  zx_FREE_cb_Extension(c, e, free_strs);
      }
  }


  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zx_NEW_cb_ModifyResponse) */

/* Trivial allocator/constructor for the datatype. */

/* Called by: */
struct zx_cb_ModifyResponse_s* zx_NEW_cb_ModifyResponse(struct zx_ctx* c)
{
  struct zx_cb_ModifyResponse_s* x = ZX_ZALLOC(c, struct zx_cb_ModifyResponse_s);
  x->gg.g.tok = zx_cb_ModifyResponse_ELEM;
  return x;
}

#ifdef ZX_ENA_AUX

/* FUNC(zx_DUP_STRS_cb_ModifyResponse) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

/* Called by: */
void zx_DUP_STRS_cb_ModifyResponse(struct zx_ctx* c, struct zx_cb_ModifyResponse_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */

  zx_dup_attr(c, x->id);
  zx_dup_attr(c, x->timeStamp);

  {
      struct zx_cb_Status_s* e;
      for (e = x->Status; e; e = (struct zx_cb_Status_s*)e->gg.g.n)
	  zx_DUP_STRS_cb_Status(c, e);
  }
  {
      struct zx_cb_ItemData_s* e;
      for (e = x->ItemData; e; e = (struct zx_cb_ItemData_s*)e->gg.g.n)
	  zx_DUP_STRS_cb_ItemData(c, e);
  }
  {
      struct zx_cb_Extension_s* e;
      for (e = x->Extension; e; e = (struct zx_cb_Extension_s*)e->gg.g.n)
	  zx_DUP_STRS_cb_Extension(c, e);
  }

}

/* FUNC(zx_DEEP_CLONE_cb_ModifyResponse) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

/* Called by: */
struct zx_cb_ModifyResponse_s* zx_DEEP_CLONE_cb_ModifyResponse(struct zx_ctx* c, struct zx_cb_ModifyResponse_s* x, int dup_strs)
{
  x = (struct zx_cb_ModifyResponse_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zx_cb_ModifyResponse_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */

  x->id = zx_clone_attr(c, x->id);
  x->timeStamp = zx_clone_attr(c, x->timeStamp);

  {
      struct zx_cb_Status_s* e;
      struct zx_cb_Status_s* en;
      struct zx_cb_Status_s* enn;
      for (enn = 0, e = x->Status; e; e = (struct zx_cb_Status_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_cb_Status(c, e, dup_strs);
	  if (!enn)
	      x->Status = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zx_cb_ItemData_s* e;
      struct zx_cb_ItemData_s* en;
      struct zx_cb_ItemData_s* enn;
      for (enn = 0, e = x->ItemData; e; e = (struct zx_cb_ItemData_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_cb_ItemData(c, e, dup_strs);
	  if (!enn)
	      x->ItemData = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zx_cb_Extension_s* e;
      struct zx_cb_Extension_s* en;
      struct zx_cb_Extension_s* enn;
      for (enn = 0, e = x->Extension; e; e = (struct zx_cb_Extension_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_cb_Extension(c, e, dup_strs);
	  if (!enn)
	      x->Extension = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }

  return x;
}

/* FUNC(zx_WALK_SO_cb_ModifyResponse) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zx_WALK_SO_cb_ModifyResponse(struct zx_ctx* c, struct zx_cb_ModifyResponse_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  int ret = callback(&x->gg.g, ctx);
  if (ret)
    return ret;
  
  /* *** deal with xmlns specifications in exc c14n way */


  
  ret = zx_walk_so_unknown_attributes(c, &x->gg, ctx, callback); 
  if (ret)
    return ret;

  {
      struct zx_cb_Status_s* e;
      for (e = x->Status; e; e = (struct zx_cb_Status_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_cb_Status(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zx_cb_ItemData_s* e;
      for (e = x->ItemData; e; e = (struct zx_cb_ItemData_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_cb_ItemData(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zx_cb_Extension_s* e;
      for (e = x->Extension; e; e = (struct zx_cb_Extension_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_cb_Extension(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }

  
  return zx_walk_so_unknown_elems_and_content(c, &x->gg, ctx, callback);
}

/* FUNC(zx_WALK_WO_cb_ModifyResponse) */

int zx_WALK_WO_cb_ModifyResponse(struct zx_ctx* c, struct zx_cb_ModifyResponse_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   cb_NewData
#define EL_STRUCT zx_cb_NewData_s
#define EL_NS     cb
#define EL_TAG    NewData

/* FUNC(zx_FREE_cb_NewData) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

/* Called by: */
void zx_FREE_cb_NewData(struct zx_ctx* c, struct zx_cb_NewData_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */


  zx_free_simple_elems(c, x->Card, free_strs);


  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zx_NEW_cb_NewData) */

/* Trivial allocator/constructor for the datatype. */

/* Called by: */
struct zx_cb_NewData_s* zx_NEW_cb_NewData(struct zx_ctx* c)
{
  struct zx_cb_NewData_s* x = ZX_ZALLOC(c, struct zx_cb_NewData_s);
  x->gg.g.tok = zx_cb_NewData_ELEM;
  return x;
}

#ifdef ZX_ENA_AUX

/* FUNC(zx_DUP_STRS_cb_NewData) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

/* Called by: */
void zx_DUP_STRS_cb_NewData(struct zx_ctx* c, struct zx_cb_NewData_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */


  zx_dup_strs_simple_elems(c, x->Card);

}

/* FUNC(zx_DEEP_CLONE_cb_NewData) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

/* Called by: */
struct zx_cb_NewData_s* zx_DEEP_CLONE_cb_NewData(struct zx_ctx* c, struct zx_cb_NewData_s* x, int dup_strs)
{
  x = (struct zx_cb_NewData_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zx_cb_NewData_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */


  x->Card = zx_deep_clone_simple_elems(c,x->Card, dup_strs);

  return x;
}

/* FUNC(zx_WALK_SO_cb_NewData) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zx_WALK_SO_cb_NewData(struct zx_ctx* c, struct zx_cb_NewData_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  int ret = callback(&x->gg.g, ctx);
  if (ret)
    return ret;
  
  /* *** deal with xmlns specifications in exc c14n way */


  
  ret = zx_walk_so_unknown_attributes(c, &x->gg, ctx, callback); 
  if (ret)
    return ret;

  ret = zx_walk_so_simple_elems(c, x->Card, ctx, callback);
  if (ret)
    return ret;

  
  return zx_walk_so_unknown_elems_and_content(c, &x->gg, ctx, callback);
}

/* FUNC(zx_WALK_WO_cb_NewData) */

int zx_WALK_WO_cb_NewData(struct zx_ctx* c, struct zx_cb_NewData_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   cb_Notification
#define EL_STRUCT zx_cb_Notification_s
#define EL_NS     cb
#define EL_TAG    Notification

/* FUNC(zx_FREE_cb_Notification) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

/* Called by: */
void zx_FREE_cb_Notification(struct zx_ctx* c, struct zx_cb_Notification_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */

  zx_free_attr(c, x->id, free_strs);
  zx_free_attr(c, x->subscriptionID, free_strs);
  zx_free_attr(c, x->expires, free_strs);
  zx_free_attr(c, x->endReason, free_strs);

  {
      struct zx_cb_ItemData_s* e;
      struct zx_cb_ItemData_s* en;
      for (e = x->ItemData; e; e = en) {
	  en = (struct zx_cb_ItemData_s*)e->gg.g.n;
	  zx_FREE_cb_ItemData(c, e, free_strs);
      }
  }


  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zx_NEW_cb_Notification) */

/* Trivial allocator/constructor for the datatype. */

/* Called by: */
struct zx_cb_Notification_s* zx_NEW_cb_Notification(struct zx_ctx* c)
{
  struct zx_cb_Notification_s* x = ZX_ZALLOC(c, struct zx_cb_Notification_s);
  x->gg.g.tok = zx_cb_Notification_ELEM;
  return x;
}

#ifdef ZX_ENA_AUX

/* FUNC(zx_DUP_STRS_cb_Notification) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

/* Called by: */
void zx_DUP_STRS_cb_Notification(struct zx_ctx* c, struct zx_cb_Notification_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */

  zx_dup_attr(c, x->id);
  zx_dup_attr(c, x->subscriptionID);
  zx_dup_attr(c, x->expires);
  zx_dup_attr(c, x->endReason);

  {
      struct zx_cb_ItemData_s* e;
      for (e = x->ItemData; e; e = (struct zx_cb_ItemData_s*)e->gg.g.n)
	  zx_DUP_STRS_cb_ItemData(c, e);
  }

}

/* FUNC(zx_DEEP_CLONE_cb_Notification) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

/* Called by: */
struct zx_cb_Notification_s* zx_DEEP_CLONE_cb_Notification(struct zx_ctx* c, struct zx_cb_Notification_s* x, int dup_strs)
{
  x = (struct zx_cb_Notification_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zx_cb_Notification_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */

  x->id = zx_clone_attr(c, x->id);
  x->subscriptionID = zx_clone_attr(c, x->subscriptionID);
  x->expires = zx_clone_attr(c, x->expires);
  x->endReason = zx_clone_attr(c, x->endReason);

  {
      struct zx_cb_ItemData_s* e;
      struct zx_cb_ItemData_s* en;
      struct zx_cb_ItemData_s* enn;
      for (enn = 0, e = x->ItemData; e; e = (struct zx_cb_ItemData_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_cb_ItemData(c, e, dup_strs);
	  if (!enn)
	      x->ItemData = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }

  return x;
}

/* FUNC(zx_WALK_SO_cb_Notification) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zx_WALK_SO_cb_Notification(struct zx_ctx* c, struct zx_cb_Notification_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  int ret = callback(&x->gg.g, ctx);
  if (ret)
    return ret;
  
  /* *** deal with xmlns specifications in exc c14n way */


  
  ret = zx_walk_so_unknown_attributes(c, &x->gg, ctx, callback); 
  if (ret)
    return ret;

  {
      struct zx_cb_ItemData_s* e;
      for (e = x->ItemData; e; e = (struct zx_cb_ItemData_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_cb_ItemData(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }

  
  return zx_walk_so_unknown_elems_and_content(c, &x->gg, ctx, callback);
}

/* FUNC(zx_WALK_WO_cb_Notification) */

int zx_WALK_WO_cb_Notification(struct zx_ctx* c, struct zx_cb_Notification_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   cb_Notify
#define EL_STRUCT zx_cb_Notify_s
#define EL_NS     cb
#define EL_TAG    Notify

/* FUNC(zx_FREE_cb_Notify) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

/* Called by: */
void zx_FREE_cb_Notify(struct zx_ctx* c, struct zx_cb_Notify_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */

  zx_free_attr(c, x->id, free_strs);
  zx_free_attr(c, x->timeStamp, free_strs);

  {
      struct zx_cb_Notification_s* e;
      struct zx_cb_Notification_s* en;
      for (e = x->Notification; e; e = en) {
	  en = (struct zx_cb_Notification_s*)e->gg.g.n;
	  zx_FREE_cb_Notification(c, e, free_strs);
      }
  }
  {
      struct zx_cb_Extension_s* e;
      struct zx_cb_Extension_s* en;
      for (e = x->Extension; e; e = en) {
	  en = (struct zx_cb_Extension_s*)e->gg.g.n;
	  zx_FREE_cb_Extension(c, e, free_strs);
      }
  }


  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zx_NEW_cb_Notify) */

/* Trivial allocator/constructor for the datatype. */

/* Called by: */
struct zx_cb_Notify_s* zx_NEW_cb_Notify(struct zx_ctx* c)
{
  struct zx_cb_Notify_s* x = ZX_ZALLOC(c, struct zx_cb_Notify_s);
  x->gg.g.tok = zx_cb_Notify_ELEM;
  return x;
}

#ifdef ZX_ENA_AUX

/* FUNC(zx_DUP_STRS_cb_Notify) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

/* Called by: */
void zx_DUP_STRS_cb_Notify(struct zx_ctx* c, struct zx_cb_Notify_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */

  zx_dup_attr(c, x->id);
  zx_dup_attr(c, x->timeStamp);

  {
      struct zx_cb_Notification_s* e;
      for (e = x->Notification; e; e = (struct zx_cb_Notification_s*)e->gg.g.n)
	  zx_DUP_STRS_cb_Notification(c, e);
  }
  {
      struct zx_cb_Extension_s* e;
      for (e = x->Extension; e; e = (struct zx_cb_Extension_s*)e->gg.g.n)
	  zx_DUP_STRS_cb_Extension(c, e);
  }

}

/* FUNC(zx_DEEP_CLONE_cb_Notify) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

/* Called by: */
struct zx_cb_Notify_s* zx_DEEP_CLONE_cb_Notify(struct zx_ctx* c, struct zx_cb_Notify_s* x, int dup_strs)
{
  x = (struct zx_cb_Notify_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zx_cb_Notify_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */

  x->id = zx_clone_attr(c, x->id);
  x->timeStamp = zx_clone_attr(c, x->timeStamp);

  {
      struct zx_cb_Notification_s* e;
      struct zx_cb_Notification_s* en;
      struct zx_cb_Notification_s* enn;
      for (enn = 0, e = x->Notification; e; e = (struct zx_cb_Notification_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_cb_Notification(c, e, dup_strs);
	  if (!enn)
	      x->Notification = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zx_cb_Extension_s* e;
      struct zx_cb_Extension_s* en;
      struct zx_cb_Extension_s* enn;
      for (enn = 0, e = x->Extension; e; e = (struct zx_cb_Extension_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_cb_Extension(c, e, dup_strs);
	  if (!enn)
	      x->Extension = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }

  return x;
}

/* FUNC(zx_WALK_SO_cb_Notify) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zx_WALK_SO_cb_Notify(struct zx_ctx* c, struct zx_cb_Notify_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  int ret = callback(&x->gg.g, ctx);
  if (ret)
    return ret;
  
  /* *** deal with xmlns specifications in exc c14n way */


  
  ret = zx_walk_so_unknown_attributes(c, &x->gg, ctx, callback); 
  if (ret)
    return ret;

  {
      struct zx_cb_Notification_s* e;
      for (e = x->Notification; e; e = (struct zx_cb_Notification_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_cb_Notification(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zx_cb_Extension_s* e;
      for (e = x->Extension; e; e = (struct zx_cb_Extension_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_cb_Extension(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }

  
  return zx_walk_so_unknown_elems_and_content(c, &x->gg, ctx, callback);
}

/* FUNC(zx_WALK_WO_cb_Notify) */

int zx_WALK_WO_cb_Notify(struct zx_ctx* c, struct zx_cb_Notify_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   cb_NotifyAdminTo
#define EL_STRUCT zx_cb_NotifyAdminTo_s
#define EL_NS     cb
#define EL_TAG    NotifyAdminTo

/* FUNC(zx_FREE_cb_NotifyAdminTo) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

/* Called by: */
void zx_FREE_cb_NotifyAdminTo(struct zx_ctx* c, struct zx_cb_NotifyAdminTo_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */

  zx_free_attr(c, x->id, free_strs);

  zx_free_simple_elems(c, x->SecurityMechID, free_strs);
  {
      struct zx_cb_Credential_s* e;
      struct zx_cb_Credential_s* en;
      for (e = x->Credential; e; e = en) {
	  en = (struct zx_cb_Credential_s*)e->gg.g.n;
	  zx_FREE_cb_Credential(c, e, free_strs);
      }
  }
  zx_free_simple_elems(c, x->Endpoint, free_strs);


  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zx_NEW_cb_NotifyAdminTo) */

/* Trivial allocator/constructor for the datatype. */

/* Called by: */
struct zx_cb_NotifyAdminTo_s* zx_NEW_cb_NotifyAdminTo(struct zx_ctx* c)
{
  struct zx_cb_NotifyAdminTo_s* x = ZX_ZALLOC(c, struct zx_cb_NotifyAdminTo_s);
  x->gg.g.tok = zx_cb_NotifyAdminTo_ELEM;
  return x;
}

#ifdef ZX_ENA_AUX

/* FUNC(zx_DUP_STRS_cb_NotifyAdminTo) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

/* Called by: */
void zx_DUP_STRS_cb_NotifyAdminTo(struct zx_ctx* c, struct zx_cb_NotifyAdminTo_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */

  zx_dup_attr(c, x->id);

  zx_dup_strs_simple_elems(c, x->SecurityMechID);
  {
      struct zx_cb_Credential_s* e;
      for (e = x->Credential; e; e = (struct zx_cb_Credential_s*)e->gg.g.n)
	  zx_DUP_STRS_cb_Credential(c, e);
  }
  zx_dup_strs_simple_elems(c, x->Endpoint);

}

/* FUNC(zx_DEEP_CLONE_cb_NotifyAdminTo) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

/* Called by: */
struct zx_cb_NotifyAdminTo_s* zx_DEEP_CLONE_cb_NotifyAdminTo(struct zx_ctx* c, struct zx_cb_NotifyAdminTo_s* x, int dup_strs)
{
  x = (struct zx_cb_NotifyAdminTo_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zx_cb_NotifyAdminTo_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */

  x->id = zx_clone_attr(c, x->id);

  x->SecurityMechID = zx_deep_clone_simple_elems(c,x->SecurityMechID, dup_strs);
  {
      struct zx_cb_Credential_s* e;
      struct zx_cb_Credential_s* en;
      struct zx_cb_Credential_s* enn;
      for (enn = 0, e = x->Credential; e; e = (struct zx_cb_Credential_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_cb_Credential(c, e, dup_strs);
	  if (!enn)
	      x->Credential = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  x->Endpoint = zx_deep_clone_simple_elems(c,x->Endpoint, dup_strs);

  return x;
}

/* FUNC(zx_WALK_SO_cb_NotifyAdminTo) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zx_WALK_SO_cb_NotifyAdminTo(struct zx_ctx* c, struct zx_cb_NotifyAdminTo_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  int ret = callback(&x->gg.g, ctx);
  if (ret)
    return ret;
  
  /* *** deal with xmlns specifications in exc c14n way */


  
  ret = zx_walk_so_unknown_attributes(c, &x->gg, ctx, callback); 
  if (ret)
    return ret;

  ret = zx_walk_so_simple_elems(c, x->SecurityMechID, ctx, callback);
  if (ret)
    return ret;
  {
      struct zx_cb_Credential_s* e;
      for (e = x->Credential; e; e = (struct zx_cb_Credential_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_cb_Credential(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  ret = zx_walk_so_simple_elems(c, x->Endpoint, ctx, callback);
  if (ret)
    return ret;

  
  return zx_walk_so_unknown_elems_and_content(c, &x->gg, ctx, callback);
}

/* FUNC(zx_WALK_WO_cb_NotifyAdminTo) */

int zx_WALK_WO_cb_NotifyAdminTo(struct zx_ctx* c, struct zx_cb_NotifyAdminTo_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   cb_NotifyResponse
#define EL_STRUCT zx_cb_NotifyResponse_s
#define EL_NS     cb
#define EL_TAG    NotifyResponse

/* FUNC(zx_FREE_cb_NotifyResponse) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

/* Called by: */
void zx_FREE_cb_NotifyResponse(struct zx_ctx* c, struct zx_cb_NotifyResponse_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */

  zx_free_attr(c, x->id, free_strs);

  {
      struct zx_cb_Status_s* e;
      struct zx_cb_Status_s* en;
      for (e = x->Status; e; e = en) {
	  en = (struct zx_cb_Status_s*)e->gg.g.n;
	  zx_FREE_cb_Status(c, e, free_strs);
      }
  }
  {
      struct zx_cb_Extension_s* e;
      struct zx_cb_Extension_s* en;
      for (e = x->Extension; e; e = en) {
	  en = (struct zx_cb_Extension_s*)e->gg.g.n;
	  zx_FREE_cb_Extension(c, e, free_strs);
      }
  }


  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zx_NEW_cb_NotifyResponse) */

/* Trivial allocator/constructor for the datatype. */

/* Called by: */
struct zx_cb_NotifyResponse_s* zx_NEW_cb_NotifyResponse(struct zx_ctx* c)
{
  struct zx_cb_NotifyResponse_s* x = ZX_ZALLOC(c, struct zx_cb_NotifyResponse_s);
  x->gg.g.tok = zx_cb_NotifyResponse_ELEM;
  return x;
}

#ifdef ZX_ENA_AUX

/* FUNC(zx_DUP_STRS_cb_NotifyResponse) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

/* Called by: */
void zx_DUP_STRS_cb_NotifyResponse(struct zx_ctx* c, struct zx_cb_NotifyResponse_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */

  zx_dup_attr(c, x->id);

  {
      struct zx_cb_Status_s* e;
      for (e = x->Status; e; e = (struct zx_cb_Status_s*)e->gg.g.n)
	  zx_DUP_STRS_cb_Status(c, e);
  }
  {
      struct zx_cb_Extension_s* e;
      for (e = x->Extension; e; e = (struct zx_cb_Extension_s*)e->gg.g.n)
	  zx_DUP_STRS_cb_Extension(c, e);
  }

}

/* FUNC(zx_DEEP_CLONE_cb_NotifyResponse) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

/* Called by: */
struct zx_cb_NotifyResponse_s* zx_DEEP_CLONE_cb_NotifyResponse(struct zx_ctx* c, struct zx_cb_NotifyResponse_s* x, int dup_strs)
{
  x = (struct zx_cb_NotifyResponse_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zx_cb_NotifyResponse_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */

  x->id = zx_clone_attr(c, x->id);

  {
      struct zx_cb_Status_s* e;
      struct zx_cb_Status_s* en;
      struct zx_cb_Status_s* enn;
      for (enn = 0, e = x->Status; e; e = (struct zx_cb_Status_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_cb_Status(c, e, dup_strs);
	  if (!enn)
	      x->Status = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zx_cb_Extension_s* e;
      struct zx_cb_Extension_s* en;
      struct zx_cb_Extension_s* enn;
      for (enn = 0, e = x->Extension; e; e = (struct zx_cb_Extension_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_cb_Extension(c, e, dup_strs);
	  if (!enn)
	      x->Extension = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }

  return x;
}

/* FUNC(zx_WALK_SO_cb_NotifyResponse) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zx_WALK_SO_cb_NotifyResponse(struct zx_ctx* c, struct zx_cb_NotifyResponse_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  int ret = callback(&x->gg.g, ctx);
  if (ret)
    return ret;
  
  /* *** deal with xmlns specifications in exc c14n way */


  
  ret = zx_walk_so_unknown_attributes(c, &x->gg, ctx, callback); 
  if (ret)
    return ret;

  {
      struct zx_cb_Status_s* e;
      for (e = x->Status; e; e = (struct zx_cb_Status_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_cb_Status(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zx_cb_Extension_s* e;
      for (e = x->Extension; e; e = (struct zx_cb_Extension_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_cb_Extension(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }

  
  return zx_walk_so_unknown_elems_and_content(c, &x->gg, ctx, callback);
}

/* FUNC(zx_WALK_WO_cb_NotifyResponse) */

int zx_WALK_WO_cb_NotifyResponse(struct zx_ctx* c, struct zx_cb_NotifyResponse_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   cb_NotifyTo
#define EL_STRUCT zx_cb_NotifyTo_s
#define EL_NS     cb
#define EL_TAG    NotifyTo

/* FUNC(zx_FREE_cb_NotifyTo) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

/* Called by: */
void zx_FREE_cb_NotifyTo(struct zx_ctx* c, struct zx_cb_NotifyTo_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */

  zx_free_attr(c, x->id, free_strs);

  zx_free_simple_elems(c, x->SecurityMechID, free_strs);
  {
      struct zx_cb_Credential_s* e;
      struct zx_cb_Credential_s* en;
      for (e = x->Credential; e; e = en) {
	  en = (struct zx_cb_Credential_s*)e->gg.g.n;
	  zx_FREE_cb_Credential(c, e, free_strs);
      }
  }
  zx_free_simple_elems(c, x->Endpoint, free_strs);


  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zx_NEW_cb_NotifyTo) */

/* Trivial allocator/constructor for the datatype. */

/* Called by: */
struct zx_cb_NotifyTo_s* zx_NEW_cb_NotifyTo(struct zx_ctx* c)
{
  struct zx_cb_NotifyTo_s* x = ZX_ZALLOC(c, struct zx_cb_NotifyTo_s);
  x->gg.g.tok = zx_cb_NotifyTo_ELEM;
  return x;
}

#ifdef ZX_ENA_AUX

/* FUNC(zx_DUP_STRS_cb_NotifyTo) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

/* Called by: */
void zx_DUP_STRS_cb_NotifyTo(struct zx_ctx* c, struct zx_cb_NotifyTo_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */

  zx_dup_attr(c, x->id);

  zx_dup_strs_simple_elems(c, x->SecurityMechID);
  {
      struct zx_cb_Credential_s* e;
      for (e = x->Credential; e; e = (struct zx_cb_Credential_s*)e->gg.g.n)
	  zx_DUP_STRS_cb_Credential(c, e);
  }
  zx_dup_strs_simple_elems(c, x->Endpoint);

}

/* FUNC(zx_DEEP_CLONE_cb_NotifyTo) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

/* Called by: */
struct zx_cb_NotifyTo_s* zx_DEEP_CLONE_cb_NotifyTo(struct zx_ctx* c, struct zx_cb_NotifyTo_s* x, int dup_strs)
{
  x = (struct zx_cb_NotifyTo_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zx_cb_NotifyTo_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */

  x->id = zx_clone_attr(c, x->id);

  x->SecurityMechID = zx_deep_clone_simple_elems(c,x->SecurityMechID, dup_strs);
  {
      struct zx_cb_Credential_s* e;
      struct zx_cb_Credential_s* en;
      struct zx_cb_Credential_s* enn;
      for (enn = 0, e = x->Credential; e; e = (struct zx_cb_Credential_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_cb_Credential(c, e, dup_strs);
	  if (!enn)
	      x->Credential = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  x->Endpoint = zx_deep_clone_simple_elems(c,x->Endpoint, dup_strs);

  return x;
}

/* FUNC(zx_WALK_SO_cb_NotifyTo) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zx_WALK_SO_cb_NotifyTo(struct zx_ctx* c, struct zx_cb_NotifyTo_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  int ret = callback(&x->gg.g, ctx);
  if (ret)
    return ret;
  
  /* *** deal with xmlns specifications in exc c14n way */


  
  ret = zx_walk_so_unknown_attributes(c, &x->gg, ctx, callback); 
  if (ret)
    return ret;

  ret = zx_walk_so_simple_elems(c, x->SecurityMechID, ctx, callback);
  if (ret)
    return ret;
  {
      struct zx_cb_Credential_s* e;
      for (e = x->Credential; e; e = (struct zx_cb_Credential_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_cb_Credential(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  ret = zx_walk_so_simple_elems(c, x->Endpoint, ctx, callback);
  if (ret)
    return ret;

  
  return zx_walk_so_unknown_elems_and_content(c, &x->gg, ctx, callback);
}

/* FUNC(zx_WALK_WO_cb_NotifyTo) */

int zx_WALK_WO_cb_NotifyTo(struct zx_ctx* c, struct zx_cb_NotifyTo_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   cb_Query
#define EL_STRUCT zx_cb_Query_s
#define EL_NS     cb
#define EL_TAG    Query

/* FUNC(zx_FREE_cb_Query) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

/* Called by: */
void zx_FREE_cb_Query(struct zx_ctx* c, struct zx_cb_Query_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */

  zx_free_attr(c, x->id, free_strs);

  {
      struct zx_cb_ResourceID_s* e;
      struct zx_cb_ResourceID_s* en;
      for (e = x->ResourceID; e; e = en) {
	  en = (struct zx_cb_ResourceID_s*)e->gg.g.n;
	  zx_FREE_cb_ResourceID(c, e, free_strs);
      }
  }
  {
      struct zx_cb_EncryptedResourceID_s* e;
      struct zx_cb_EncryptedResourceID_s* en;
      for (e = x->EncryptedResourceID; e; e = en) {
	  en = (struct zx_cb_EncryptedResourceID_s*)e->gg.g.n;
	  zx_FREE_cb_EncryptedResourceID(c, e, free_strs);
      }
  }
  {
      struct zx_cb_Subscription_s* e;
      struct zx_cb_Subscription_s* en;
      for (e = x->Subscription; e; e = en) {
	  en = (struct zx_cb_Subscription_s*)e->gg.g.n;
	  zx_FREE_cb_Subscription(c, e, free_strs);
      }
  }
  {
      struct zx_cb_QueryItem_s* e;
      struct zx_cb_QueryItem_s* en;
      for (e = x->QueryItem; e; e = en) {
	  en = (struct zx_cb_QueryItem_s*)e->gg.g.n;
	  zx_FREE_cb_QueryItem(c, e, free_strs);
      }
  }
  {
      struct zx_cb_Extension_s* e;
      struct zx_cb_Extension_s* en;
      for (e = x->Extension; e; e = en) {
	  en = (struct zx_cb_Extension_s*)e->gg.g.n;
	  zx_FREE_cb_Extension(c, e, free_strs);
      }
  }


  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zx_NEW_cb_Query) */

/* Trivial allocator/constructor for the datatype. */

/* Called by: */
struct zx_cb_Query_s* zx_NEW_cb_Query(struct zx_ctx* c)
{
  struct zx_cb_Query_s* x = ZX_ZALLOC(c, struct zx_cb_Query_s);
  x->gg.g.tok = zx_cb_Query_ELEM;
  return x;
}

#ifdef ZX_ENA_AUX

/* FUNC(zx_DUP_STRS_cb_Query) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

/* Called by: */
void zx_DUP_STRS_cb_Query(struct zx_ctx* c, struct zx_cb_Query_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */

  zx_dup_attr(c, x->id);

  {
      struct zx_cb_ResourceID_s* e;
      for (e = x->ResourceID; e; e = (struct zx_cb_ResourceID_s*)e->gg.g.n)
	  zx_DUP_STRS_cb_ResourceID(c, e);
  }
  {
      struct zx_cb_EncryptedResourceID_s* e;
      for (e = x->EncryptedResourceID; e; e = (struct zx_cb_EncryptedResourceID_s*)e->gg.g.n)
	  zx_DUP_STRS_cb_EncryptedResourceID(c, e);
  }
  {
      struct zx_cb_Subscription_s* e;
      for (e = x->Subscription; e; e = (struct zx_cb_Subscription_s*)e->gg.g.n)
	  zx_DUP_STRS_cb_Subscription(c, e);
  }
  {
      struct zx_cb_QueryItem_s* e;
      for (e = x->QueryItem; e; e = (struct zx_cb_QueryItem_s*)e->gg.g.n)
	  zx_DUP_STRS_cb_QueryItem(c, e);
  }
  {
      struct zx_cb_Extension_s* e;
      for (e = x->Extension; e; e = (struct zx_cb_Extension_s*)e->gg.g.n)
	  zx_DUP_STRS_cb_Extension(c, e);
  }

}

/* FUNC(zx_DEEP_CLONE_cb_Query) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

/* Called by: */
struct zx_cb_Query_s* zx_DEEP_CLONE_cb_Query(struct zx_ctx* c, struct zx_cb_Query_s* x, int dup_strs)
{
  x = (struct zx_cb_Query_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zx_cb_Query_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */

  x->id = zx_clone_attr(c, x->id);

  {
      struct zx_cb_ResourceID_s* e;
      struct zx_cb_ResourceID_s* en;
      struct zx_cb_ResourceID_s* enn;
      for (enn = 0, e = x->ResourceID; e; e = (struct zx_cb_ResourceID_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_cb_ResourceID(c, e, dup_strs);
	  if (!enn)
	      x->ResourceID = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zx_cb_EncryptedResourceID_s* e;
      struct zx_cb_EncryptedResourceID_s* en;
      struct zx_cb_EncryptedResourceID_s* enn;
      for (enn = 0, e = x->EncryptedResourceID; e; e = (struct zx_cb_EncryptedResourceID_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_cb_EncryptedResourceID(c, e, dup_strs);
	  if (!enn)
	      x->EncryptedResourceID = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zx_cb_Subscription_s* e;
      struct zx_cb_Subscription_s* en;
      struct zx_cb_Subscription_s* enn;
      for (enn = 0, e = x->Subscription; e; e = (struct zx_cb_Subscription_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_cb_Subscription(c, e, dup_strs);
	  if (!enn)
	      x->Subscription = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zx_cb_QueryItem_s* e;
      struct zx_cb_QueryItem_s* en;
      struct zx_cb_QueryItem_s* enn;
      for (enn = 0, e = x->QueryItem; e; e = (struct zx_cb_QueryItem_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_cb_QueryItem(c, e, dup_strs);
	  if (!enn)
	      x->QueryItem = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zx_cb_Extension_s* e;
      struct zx_cb_Extension_s* en;
      struct zx_cb_Extension_s* enn;
      for (enn = 0, e = x->Extension; e; e = (struct zx_cb_Extension_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_cb_Extension(c, e, dup_strs);
	  if (!enn)
	      x->Extension = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }

  return x;
}

/* FUNC(zx_WALK_SO_cb_Query) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zx_WALK_SO_cb_Query(struct zx_ctx* c, struct zx_cb_Query_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  int ret = callback(&x->gg.g, ctx);
  if (ret)
    return ret;
  
  /* *** deal with xmlns specifications in exc c14n way */


  
  ret = zx_walk_so_unknown_attributes(c, &x->gg, ctx, callback); 
  if (ret)
    return ret;

  {
      struct zx_cb_ResourceID_s* e;
      for (e = x->ResourceID; e; e = (struct zx_cb_ResourceID_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_cb_ResourceID(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zx_cb_EncryptedResourceID_s* e;
      for (e = x->EncryptedResourceID; e; e = (struct zx_cb_EncryptedResourceID_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_cb_EncryptedResourceID(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zx_cb_Subscription_s* e;
      for (e = x->Subscription; e; e = (struct zx_cb_Subscription_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_cb_Subscription(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zx_cb_QueryItem_s* e;
      for (e = x->QueryItem; e; e = (struct zx_cb_QueryItem_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_cb_QueryItem(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zx_cb_Extension_s* e;
      for (e = x->Extension; e; e = (struct zx_cb_Extension_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_cb_Extension(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }

  
  return zx_walk_so_unknown_elems_and_content(c, &x->gg, ctx, callback);
}

/* FUNC(zx_WALK_WO_cb_Query) */

int zx_WALK_WO_cb_Query(struct zx_ctx* c, struct zx_cb_Query_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   cb_QueryItem
#define EL_STRUCT zx_cb_QueryItem_s
#define EL_NS     cb
#define EL_TAG    QueryItem

/* FUNC(zx_FREE_cb_QueryItem) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

/* Called by: */
void zx_FREE_cb_QueryItem(struct zx_ctx* c, struct zx_cb_QueryItem_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */

  zx_free_attr(c, x->count, free_strs);
  zx_free_attr(c, x->offset, free_strs);
  zx_free_attr(c, x->setID, free_strs);
  zx_free_attr(c, x->setReq, free_strs);
  zx_free_attr(c, x->format, free_strs);



  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zx_NEW_cb_QueryItem) */

/* Trivial allocator/constructor for the datatype. */

/* Called by: */
struct zx_cb_QueryItem_s* zx_NEW_cb_QueryItem(struct zx_ctx* c)
{
  struct zx_cb_QueryItem_s* x = ZX_ZALLOC(c, struct zx_cb_QueryItem_s);
  x->gg.g.tok = zx_cb_QueryItem_ELEM;
  return x;
}

#ifdef ZX_ENA_AUX

/* FUNC(zx_DUP_STRS_cb_QueryItem) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

/* Called by: */
void zx_DUP_STRS_cb_QueryItem(struct zx_ctx* c, struct zx_cb_QueryItem_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */

  zx_dup_attr(c, x->count);
  zx_dup_attr(c, x->offset);
  zx_dup_attr(c, x->setID);
  zx_dup_attr(c, x->setReq);
  zx_dup_attr(c, x->format);


}

/* FUNC(zx_DEEP_CLONE_cb_QueryItem) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

/* Called by: */
struct zx_cb_QueryItem_s* zx_DEEP_CLONE_cb_QueryItem(struct zx_ctx* c, struct zx_cb_QueryItem_s* x, int dup_strs)
{
  x = (struct zx_cb_QueryItem_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zx_cb_QueryItem_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */

  x->count = zx_clone_attr(c, x->count);
  x->offset = zx_clone_attr(c, x->offset);
  x->setID = zx_clone_attr(c, x->setID);
  x->setReq = zx_clone_attr(c, x->setReq);
  x->format = zx_clone_attr(c, x->format);


  return x;
}

/* FUNC(zx_WALK_SO_cb_QueryItem) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zx_WALK_SO_cb_QueryItem(struct zx_ctx* c, struct zx_cb_QueryItem_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  int ret = callback(&x->gg.g, ctx);
  if (ret)
    return ret;
  
  /* *** deal with xmlns specifications in exc c14n way */


  
  ret = zx_walk_so_unknown_attributes(c, &x->gg, ctx, callback); 
  if (ret)
    return ret;


  
  return zx_walk_so_unknown_elems_and_content(c, &x->gg, ctx, callback);
}

/* FUNC(zx_WALK_WO_cb_QueryItem) */

int zx_WALK_WO_cb_QueryItem(struct zx_ctx* c, struct zx_cb_QueryItem_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   cb_QueryResponse
#define EL_STRUCT zx_cb_QueryResponse_s
#define EL_NS     cb
#define EL_TAG    QueryResponse

/* FUNC(zx_FREE_cb_QueryResponse) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

/* Called by: */
void zx_FREE_cb_QueryResponse(struct zx_ctx* c, struct zx_cb_QueryResponse_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */

  zx_free_attr(c, x->id, free_strs);
  zx_free_attr(c, x->itemIDRef, free_strs);
  zx_free_attr(c, x->timeStamp, free_strs);

  {
      struct zx_cb_Status_s* e;
      struct zx_cb_Status_s* en;
      for (e = x->Status; e; e = en) {
	  en = (struct zx_cb_Status_s*)e->gg.g.n;
	  zx_FREE_cb_Status(c, e, free_strs);
      }
  }
  {
      struct zx_cb_Data_s* e;
      struct zx_cb_Data_s* en;
      for (e = x->Data; e; e = en) {
	  en = (struct zx_cb_Data_s*)e->gg.g.n;
	  zx_FREE_cb_Data(c, e, free_strs);
      }
  }
  {
      struct zx_cb_Extension_s* e;
      struct zx_cb_Extension_s* en;
      for (e = x->Extension; e; e = en) {
	  en = (struct zx_cb_Extension_s*)e->gg.g.n;
	  zx_FREE_cb_Extension(c, e, free_strs);
      }
  }


  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zx_NEW_cb_QueryResponse) */

/* Trivial allocator/constructor for the datatype. */

/* Called by: */
struct zx_cb_QueryResponse_s* zx_NEW_cb_QueryResponse(struct zx_ctx* c)
{
  struct zx_cb_QueryResponse_s* x = ZX_ZALLOC(c, struct zx_cb_QueryResponse_s);
  x->gg.g.tok = zx_cb_QueryResponse_ELEM;
  return x;
}

#ifdef ZX_ENA_AUX

/* FUNC(zx_DUP_STRS_cb_QueryResponse) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

/* Called by: */
void zx_DUP_STRS_cb_QueryResponse(struct zx_ctx* c, struct zx_cb_QueryResponse_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */

  zx_dup_attr(c, x->id);
  zx_dup_attr(c, x->itemIDRef);
  zx_dup_attr(c, x->timeStamp);

  {
      struct zx_cb_Status_s* e;
      for (e = x->Status; e; e = (struct zx_cb_Status_s*)e->gg.g.n)
	  zx_DUP_STRS_cb_Status(c, e);
  }
  {
      struct zx_cb_Data_s* e;
      for (e = x->Data; e; e = (struct zx_cb_Data_s*)e->gg.g.n)
	  zx_DUP_STRS_cb_Data(c, e);
  }
  {
      struct zx_cb_Extension_s* e;
      for (e = x->Extension; e; e = (struct zx_cb_Extension_s*)e->gg.g.n)
	  zx_DUP_STRS_cb_Extension(c, e);
  }

}

/* FUNC(zx_DEEP_CLONE_cb_QueryResponse) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

/* Called by: */
struct zx_cb_QueryResponse_s* zx_DEEP_CLONE_cb_QueryResponse(struct zx_ctx* c, struct zx_cb_QueryResponse_s* x, int dup_strs)
{
  x = (struct zx_cb_QueryResponse_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zx_cb_QueryResponse_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */

  x->id = zx_clone_attr(c, x->id);
  x->itemIDRef = zx_clone_attr(c, x->itemIDRef);
  x->timeStamp = zx_clone_attr(c, x->timeStamp);

  {
      struct zx_cb_Status_s* e;
      struct zx_cb_Status_s* en;
      struct zx_cb_Status_s* enn;
      for (enn = 0, e = x->Status; e; e = (struct zx_cb_Status_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_cb_Status(c, e, dup_strs);
	  if (!enn)
	      x->Status = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zx_cb_Data_s* e;
      struct zx_cb_Data_s* en;
      struct zx_cb_Data_s* enn;
      for (enn = 0, e = x->Data; e; e = (struct zx_cb_Data_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_cb_Data(c, e, dup_strs);
	  if (!enn)
	      x->Data = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zx_cb_Extension_s* e;
      struct zx_cb_Extension_s* en;
      struct zx_cb_Extension_s* enn;
      for (enn = 0, e = x->Extension; e; e = (struct zx_cb_Extension_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_cb_Extension(c, e, dup_strs);
	  if (!enn)
	      x->Extension = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }

  return x;
}

/* FUNC(zx_WALK_SO_cb_QueryResponse) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zx_WALK_SO_cb_QueryResponse(struct zx_ctx* c, struct zx_cb_QueryResponse_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  int ret = callback(&x->gg.g, ctx);
  if (ret)
    return ret;
  
  /* *** deal with xmlns specifications in exc c14n way */


  
  ret = zx_walk_so_unknown_attributes(c, &x->gg, ctx, callback); 
  if (ret)
    return ret;

  {
      struct zx_cb_Status_s* e;
      for (e = x->Status; e; e = (struct zx_cb_Status_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_cb_Status(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zx_cb_Data_s* e;
      for (e = x->Data; e; e = (struct zx_cb_Data_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_cb_Data(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zx_cb_Extension_s* e;
      for (e = x->Extension; e; e = (struct zx_cb_Extension_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_cb_Extension(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }

  
  return zx_walk_so_unknown_elems_and_content(c, &x->gg, ctx, callback);
}

/* FUNC(zx_WALK_WO_cb_QueryResponse) */

int zx_WALK_WO_cb_QueryResponse(struct zx_ctx* c, struct zx_cb_QueryResponse_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   cb_RefItem
#define EL_STRUCT zx_cb_RefItem_s
#define EL_NS     cb
#define EL_TAG    RefItem

/* FUNC(zx_FREE_cb_RefItem) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

/* Called by: */
void zx_FREE_cb_RefItem(struct zx_ctx* c, struct zx_cb_RefItem_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */

  zx_free_attr(c, x->subscriptionID, free_strs);
  zx_free_attr(c, x->ItemIDRef, free_strs);



  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zx_NEW_cb_RefItem) */

/* Trivial allocator/constructor for the datatype. */

/* Called by: */
struct zx_cb_RefItem_s* zx_NEW_cb_RefItem(struct zx_ctx* c)
{
  struct zx_cb_RefItem_s* x = ZX_ZALLOC(c, struct zx_cb_RefItem_s);
  x->gg.g.tok = zx_cb_RefItem_ELEM;
  return x;
}

#ifdef ZX_ENA_AUX

/* FUNC(zx_DUP_STRS_cb_RefItem) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

/* Called by: */
void zx_DUP_STRS_cb_RefItem(struct zx_ctx* c, struct zx_cb_RefItem_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */

  zx_dup_attr(c, x->subscriptionID);
  zx_dup_attr(c, x->ItemIDRef);


}

/* FUNC(zx_DEEP_CLONE_cb_RefItem) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

/* Called by: */
struct zx_cb_RefItem_s* zx_DEEP_CLONE_cb_RefItem(struct zx_ctx* c, struct zx_cb_RefItem_s* x, int dup_strs)
{
  x = (struct zx_cb_RefItem_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zx_cb_RefItem_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */

  x->subscriptionID = zx_clone_attr(c, x->subscriptionID);
  x->ItemIDRef = zx_clone_attr(c, x->ItemIDRef);


  return x;
}

/* FUNC(zx_WALK_SO_cb_RefItem) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zx_WALK_SO_cb_RefItem(struct zx_ctx* c, struct zx_cb_RefItem_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  int ret = callback(&x->gg.g, ctx);
  if (ret)
    return ret;
  
  /* *** deal with xmlns specifications in exc c14n way */


  
  ret = zx_walk_so_unknown_attributes(c, &x->gg, ctx, callback); 
  if (ret)
    return ret;


  
  return zx_walk_so_unknown_elems_and_content(c, &x->gg, ctx, callback);
}

/* FUNC(zx_WALK_WO_cb_RefItem) */

int zx_WALK_WO_cb_RefItem(struct zx_ctx* c, struct zx_cb_RefItem_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   cb_ReportUsage
#define EL_STRUCT zx_cb_ReportUsage_s
#define EL_NS     cb
#define EL_TAG    ReportUsage

/* FUNC(zx_FREE_cb_ReportUsage) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

/* Called by: */
void zx_FREE_cb_ReportUsage(struct zx_ctx* c, struct zx_cb_ReportUsage_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */

  zx_free_attr(c, x->id, free_strs);

  {
      struct zx_cb_ResourceID_s* e;
      struct zx_cb_ResourceID_s* en;
      for (e = x->ResourceID; e; e = en) {
	  en = (struct zx_cb_ResourceID_s*)e->gg.g.n;
	  zx_FREE_cb_ResourceID(c, e, free_strs);
      }
  }
  {
      struct zx_cb_EncryptedResourceID_s* e;
      struct zx_cb_EncryptedResourceID_s* en;
      for (e = x->EncryptedResourceID; e; e = en) {
	  en = (struct zx_cb_EncryptedResourceID_s*)e->gg.g.n;
	  zx_FREE_cb_EncryptedResourceID(c, e, free_strs);
      }
  }
  zx_free_simple_elems(c, x->CARDID, free_strs);
  {
      struct zx_cb_UsageType_s* e;
      struct zx_cb_UsageType_s* en;
      for (e = x->UsageType; e; e = en) {
	  en = (struct zx_cb_UsageType_s*)e->gg.g.n;
	  zx_FREE_cb_UsageType(c, e, free_strs);
      }
  }


  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zx_NEW_cb_ReportUsage) */

/* Trivial allocator/constructor for the datatype. */

/* Called by: */
struct zx_cb_ReportUsage_s* zx_NEW_cb_ReportUsage(struct zx_ctx* c)
{
  struct zx_cb_ReportUsage_s* x = ZX_ZALLOC(c, struct zx_cb_ReportUsage_s);
  x->gg.g.tok = zx_cb_ReportUsage_ELEM;
  return x;
}

#ifdef ZX_ENA_AUX

/* FUNC(zx_DUP_STRS_cb_ReportUsage) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

/* Called by: */
void zx_DUP_STRS_cb_ReportUsage(struct zx_ctx* c, struct zx_cb_ReportUsage_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */

  zx_dup_attr(c, x->id);

  {
      struct zx_cb_ResourceID_s* e;
      for (e = x->ResourceID; e; e = (struct zx_cb_ResourceID_s*)e->gg.g.n)
	  zx_DUP_STRS_cb_ResourceID(c, e);
  }
  {
      struct zx_cb_EncryptedResourceID_s* e;
      for (e = x->EncryptedResourceID; e; e = (struct zx_cb_EncryptedResourceID_s*)e->gg.g.n)
	  zx_DUP_STRS_cb_EncryptedResourceID(c, e);
  }
  zx_dup_strs_simple_elems(c, x->CARDID);
  {
      struct zx_cb_UsageType_s* e;
      for (e = x->UsageType; e; e = (struct zx_cb_UsageType_s*)e->gg.g.n)
	  zx_DUP_STRS_cb_UsageType(c, e);
  }

}

/* FUNC(zx_DEEP_CLONE_cb_ReportUsage) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

/* Called by: */
struct zx_cb_ReportUsage_s* zx_DEEP_CLONE_cb_ReportUsage(struct zx_ctx* c, struct zx_cb_ReportUsage_s* x, int dup_strs)
{
  x = (struct zx_cb_ReportUsage_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zx_cb_ReportUsage_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */

  x->id = zx_clone_attr(c, x->id);

  {
      struct zx_cb_ResourceID_s* e;
      struct zx_cb_ResourceID_s* en;
      struct zx_cb_ResourceID_s* enn;
      for (enn = 0, e = x->ResourceID; e; e = (struct zx_cb_ResourceID_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_cb_ResourceID(c, e, dup_strs);
	  if (!enn)
	      x->ResourceID = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zx_cb_EncryptedResourceID_s* e;
      struct zx_cb_EncryptedResourceID_s* en;
      struct zx_cb_EncryptedResourceID_s* enn;
      for (enn = 0, e = x->EncryptedResourceID; e; e = (struct zx_cb_EncryptedResourceID_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_cb_EncryptedResourceID(c, e, dup_strs);
	  if (!enn)
	      x->EncryptedResourceID = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  x->CARDID = zx_deep_clone_simple_elems(c,x->CARDID, dup_strs);
  {
      struct zx_cb_UsageType_s* e;
      struct zx_cb_UsageType_s* en;
      struct zx_cb_UsageType_s* enn;
      for (enn = 0, e = x->UsageType; e; e = (struct zx_cb_UsageType_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_cb_UsageType(c, e, dup_strs);
	  if (!enn)
	      x->UsageType = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }

  return x;
}

/* FUNC(zx_WALK_SO_cb_ReportUsage) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zx_WALK_SO_cb_ReportUsage(struct zx_ctx* c, struct zx_cb_ReportUsage_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  int ret = callback(&x->gg.g, ctx);
  if (ret)
    return ret;
  
  /* *** deal with xmlns specifications in exc c14n way */


  
  ret = zx_walk_so_unknown_attributes(c, &x->gg, ctx, callback); 
  if (ret)
    return ret;

  {
      struct zx_cb_ResourceID_s* e;
      for (e = x->ResourceID; e; e = (struct zx_cb_ResourceID_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_cb_ResourceID(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zx_cb_EncryptedResourceID_s* e;
      for (e = x->EncryptedResourceID; e; e = (struct zx_cb_EncryptedResourceID_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_cb_EncryptedResourceID(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  ret = zx_walk_so_simple_elems(c, x->CARDID, ctx, callback);
  if (ret)
    return ret;
  {
      struct zx_cb_UsageType_s* e;
      for (e = x->UsageType; e; e = (struct zx_cb_UsageType_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_cb_UsageType(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }

  
  return zx_walk_so_unknown_elems_and_content(c, &x->gg, ctx, callback);
}

/* FUNC(zx_WALK_WO_cb_ReportUsage) */

int zx_WALK_WO_cb_ReportUsage(struct zx_ctx* c, struct zx_cb_ReportUsage_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   cb_ReportUsageResponse
#define EL_STRUCT zx_cb_ReportUsageResponse_s
#define EL_NS     cb
#define EL_TAG    ReportUsageResponse

/* FUNC(zx_FREE_cb_ReportUsageResponse) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

/* Called by: */
void zx_FREE_cb_ReportUsageResponse(struct zx_ctx* c, struct zx_cb_ReportUsageResponse_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */

  zx_free_attr(c, x->id, free_strs);

  {
      struct zx_cb_Status_s* e;
      struct zx_cb_Status_s* en;
      for (e = x->Status; e; e = en) {
	  en = (struct zx_cb_Status_s*)e->gg.g.n;
	  zx_FREE_cb_Status(c, e, free_strs);
      }
  }


  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zx_NEW_cb_ReportUsageResponse) */

/* Trivial allocator/constructor for the datatype. */

/* Called by: */
struct zx_cb_ReportUsageResponse_s* zx_NEW_cb_ReportUsageResponse(struct zx_ctx* c)
{
  struct zx_cb_ReportUsageResponse_s* x = ZX_ZALLOC(c, struct zx_cb_ReportUsageResponse_s);
  x->gg.g.tok = zx_cb_ReportUsageResponse_ELEM;
  return x;
}

#ifdef ZX_ENA_AUX

/* FUNC(zx_DUP_STRS_cb_ReportUsageResponse) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

/* Called by: */
void zx_DUP_STRS_cb_ReportUsageResponse(struct zx_ctx* c, struct zx_cb_ReportUsageResponse_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */

  zx_dup_attr(c, x->id);

  {
      struct zx_cb_Status_s* e;
      for (e = x->Status; e; e = (struct zx_cb_Status_s*)e->gg.g.n)
	  zx_DUP_STRS_cb_Status(c, e);
  }

}

/* FUNC(zx_DEEP_CLONE_cb_ReportUsageResponse) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

/* Called by: */
struct zx_cb_ReportUsageResponse_s* zx_DEEP_CLONE_cb_ReportUsageResponse(struct zx_ctx* c, struct zx_cb_ReportUsageResponse_s* x, int dup_strs)
{
  x = (struct zx_cb_ReportUsageResponse_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zx_cb_ReportUsageResponse_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */

  x->id = zx_clone_attr(c, x->id);

  {
      struct zx_cb_Status_s* e;
      struct zx_cb_Status_s* en;
      struct zx_cb_Status_s* enn;
      for (enn = 0, e = x->Status; e; e = (struct zx_cb_Status_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_cb_Status(c, e, dup_strs);
	  if (!enn)
	      x->Status = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }

  return x;
}

/* FUNC(zx_WALK_SO_cb_ReportUsageResponse) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zx_WALK_SO_cb_ReportUsageResponse(struct zx_ctx* c, struct zx_cb_ReportUsageResponse_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  int ret = callback(&x->gg.g, ctx);
  if (ret)
    return ret;
  
  /* *** deal with xmlns specifications in exc c14n way */


  
  ret = zx_walk_so_unknown_attributes(c, &x->gg, ctx, callback); 
  if (ret)
    return ret;

  {
      struct zx_cb_Status_s* e;
      for (e = x->Status; e; e = (struct zx_cb_Status_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_cb_Status(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }

  
  return zx_walk_so_unknown_elems_and_content(c, &x->gg, ctx, callback);
}

/* FUNC(zx_WALK_WO_cb_ReportUsageResponse) */

int zx_WALK_WO_cb_ReportUsageResponse(struct zx_ctx* c, struct zx_cb_ReportUsageResponse_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   cb_ResourceID
#define EL_STRUCT zx_cb_ResourceID_s
#define EL_NS     cb
#define EL_TAG    ResourceID

/* FUNC(zx_FREE_cb_ResourceID) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

/* Called by: */
void zx_FREE_cb_ResourceID(struct zx_ctx* c, struct zx_cb_ResourceID_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */

  zx_free_attr(c, x->id, free_strs);



  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zx_NEW_cb_ResourceID) */

/* Trivial allocator/constructor for the datatype. */

/* Called by: */
struct zx_cb_ResourceID_s* zx_NEW_cb_ResourceID(struct zx_ctx* c)
{
  struct zx_cb_ResourceID_s* x = ZX_ZALLOC(c, struct zx_cb_ResourceID_s);
  x->gg.g.tok = zx_cb_ResourceID_ELEM;
  return x;
}

#ifdef ZX_ENA_AUX

/* FUNC(zx_DUP_STRS_cb_ResourceID) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

/* Called by: */
void zx_DUP_STRS_cb_ResourceID(struct zx_ctx* c, struct zx_cb_ResourceID_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */

  zx_dup_attr(c, x->id);


}

/* FUNC(zx_DEEP_CLONE_cb_ResourceID) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

/* Called by: */
struct zx_cb_ResourceID_s* zx_DEEP_CLONE_cb_ResourceID(struct zx_ctx* c, struct zx_cb_ResourceID_s* x, int dup_strs)
{
  x = (struct zx_cb_ResourceID_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zx_cb_ResourceID_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */

  x->id = zx_clone_attr(c, x->id);


  return x;
}

/* FUNC(zx_WALK_SO_cb_ResourceID) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zx_WALK_SO_cb_ResourceID(struct zx_ctx* c, struct zx_cb_ResourceID_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  int ret = callback(&x->gg.g, ctx);
  if (ret)
    return ret;
  
  /* *** deal with xmlns specifications in exc c14n way */


  
  ret = zx_walk_so_unknown_attributes(c, &x->gg, ctx, callback); 
  if (ret)
    return ret;


  
  return zx_walk_so_unknown_elems_and_content(c, &x->gg, ctx, callback);
}

/* FUNC(zx_WALK_WO_cb_ResourceID) */

int zx_WALK_WO_cb_ResourceID(struct zx_ctx* c, struct zx_cb_ResourceID_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   cb_Status
#define EL_STRUCT zx_cb_Status_s
#define EL_NS     cb
#define EL_TAG    Status

/* FUNC(zx_FREE_cb_Status) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

/* Called by: */
void zx_FREE_cb_Status(struct zx_ctx* c, struct zx_cb_Status_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */

  zx_free_attr(c, x->code, free_strs);
  zx_free_attr(c, x->ref, free_strs);
  zx_free_attr(c, x->comment, free_strs);

  {
      struct zx_cb_Status_s* e;
      struct zx_cb_Status_s* en;
      for (e = x->Status; e; e = en) {
	  en = (struct zx_cb_Status_s*)e->gg.g.n;
	  zx_FREE_cb_Status(c, e, free_strs);
      }
  }


  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zx_NEW_cb_Status) */

/* Trivial allocator/constructor for the datatype. */

/* Called by: */
struct zx_cb_Status_s* zx_NEW_cb_Status(struct zx_ctx* c)
{
  struct zx_cb_Status_s* x = ZX_ZALLOC(c, struct zx_cb_Status_s);
  x->gg.g.tok = zx_cb_Status_ELEM;
  return x;
}

#ifdef ZX_ENA_AUX

/* FUNC(zx_DUP_STRS_cb_Status) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

/* Called by: */
void zx_DUP_STRS_cb_Status(struct zx_ctx* c, struct zx_cb_Status_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */

  zx_dup_attr(c, x->code);
  zx_dup_attr(c, x->ref);
  zx_dup_attr(c, x->comment);

  {
      struct zx_cb_Status_s* e;
      for (e = x->Status; e; e = (struct zx_cb_Status_s*)e->gg.g.n)
	  zx_DUP_STRS_cb_Status(c, e);
  }

}

/* FUNC(zx_DEEP_CLONE_cb_Status) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

/* Called by: */
struct zx_cb_Status_s* zx_DEEP_CLONE_cb_Status(struct zx_ctx* c, struct zx_cb_Status_s* x, int dup_strs)
{
  x = (struct zx_cb_Status_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zx_cb_Status_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */

  x->code = zx_clone_attr(c, x->code);
  x->ref = zx_clone_attr(c, x->ref);
  x->comment = zx_clone_attr(c, x->comment);

  {
      struct zx_cb_Status_s* e;
      struct zx_cb_Status_s* en;
      struct zx_cb_Status_s* enn;
      for (enn = 0, e = x->Status; e; e = (struct zx_cb_Status_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_cb_Status(c, e, dup_strs);
	  if (!enn)
	      x->Status = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }

  return x;
}

/* FUNC(zx_WALK_SO_cb_Status) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zx_WALK_SO_cb_Status(struct zx_ctx* c, struct zx_cb_Status_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  int ret = callback(&x->gg.g, ctx);
  if (ret)
    return ret;
  
  /* *** deal with xmlns specifications in exc c14n way */


  
  ret = zx_walk_so_unknown_attributes(c, &x->gg, ctx, callback); 
  if (ret)
    return ret;

  {
      struct zx_cb_Status_s* e;
      for (e = x->Status; e; e = (struct zx_cb_Status_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_cb_Status(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }

  
  return zx_walk_so_unknown_elems_and_content(c, &x->gg, ctx, callback);
}

/* FUNC(zx_WALK_WO_cb_Status) */

int zx_WALK_WO_cb_Status(struct zx_ctx* c, struct zx_cb_Status_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   cb_Subscription
#define EL_STRUCT zx_cb_Subscription_s
#define EL_NS     cb
#define EL_TAG    Subscription

/* FUNC(zx_FREE_cb_Subscription) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

/* Called by: */
void zx_FREE_cb_Subscription(struct zx_ctx* c, struct zx_cb_Subscription_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */

  zx_free_attr(c, x->starts, free_strs);
  zx_free_attr(c, x->expires, free_strs);
  zx_free_attr(c, x->id, free_strs);
  zx_free_attr(c, x->subscriptionID, free_strs);
  zx_free_attr(c, x->includeData, free_strs);

  {
      struct zx_cb_ItemSelection_s* e;
      struct zx_cb_ItemSelection_s* en;
      for (e = x->ItemSelection; e; e = en) {
	  en = (struct zx_cb_ItemSelection_s*)e->gg.g.n;
	  zx_FREE_cb_ItemSelection(c, e, free_strs);
      }
  }
  {
      struct zx_cb_RefItem_s* e;
      struct zx_cb_RefItem_s* en;
      for (e = x->RefItem; e; e = en) {
	  en = (struct zx_cb_RefItem_s*)e->gg.g.n;
	  zx_FREE_cb_RefItem(c, e, free_strs);
      }
  }
  {
      struct zx_cb_NotifyTo_s* e;
      struct zx_cb_NotifyTo_s* en;
      for (e = x->NotifyTo; e; e = en) {
	  en = (struct zx_cb_NotifyTo_s*)e->gg.g.n;
	  zx_FREE_cb_NotifyTo(c, e, free_strs);
      }
  }
  {
      struct zx_cb_NotifyAdminTo_s* e;
      struct zx_cb_NotifyAdminTo_s* en;
      for (e = x->NotifyAdminTo; e; e = en) {
	  en = (struct zx_cb_NotifyAdminTo_s*)e->gg.g.n;
	  zx_FREE_cb_NotifyAdminTo(c, e, free_strs);
      }
  }
  zx_free_simple_elems(c, x->Aggregation, free_strs);
  zx_free_simple_elems(c, x->Trigger, free_strs);
  {
      struct zx_cb_Extension_s* e;
      struct zx_cb_Extension_s* en;
      for (e = x->Extension; e; e = en) {
	  en = (struct zx_cb_Extension_s*)e->gg.g.n;
	  zx_FREE_cb_Extension(c, e, free_strs);
      }
  }


  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zx_NEW_cb_Subscription) */

/* Trivial allocator/constructor for the datatype. */

/* Called by: */
struct zx_cb_Subscription_s* zx_NEW_cb_Subscription(struct zx_ctx* c)
{
  struct zx_cb_Subscription_s* x = ZX_ZALLOC(c, struct zx_cb_Subscription_s);
  x->gg.g.tok = zx_cb_Subscription_ELEM;
  return x;
}

#ifdef ZX_ENA_AUX

/* FUNC(zx_DUP_STRS_cb_Subscription) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

/* Called by: */
void zx_DUP_STRS_cb_Subscription(struct zx_ctx* c, struct zx_cb_Subscription_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */

  zx_dup_attr(c, x->starts);
  zx_dup_attr(c, x->expires);
  zx_dup_attr(c, x->id);
  zx_dup_attr(c, x->subscriptionID);
  zx_dup_attr(c, x->includeData);

  {
      struct zx_cb_ItemSelection_s* e;
      for (e = x->ItemSelection; e; e = (struct zx_cb_ItemSelection_s*)e->gg.g.n)
	  zx_DUP_STRS_cb_ItemSelection(c, e);
  }
  {
      struct zx_cb_RefItem_s* e;
      for (e = x->RefItem; e; e = (struct zx_cb_RefItem_s*)e->gg.g.n)
	  zx_DUP_STRS_cb_RefItem(c, e);
  }
  {
      struct zx_cb_NotifyTo_s* e;
      for (e = x->NotifyTo; e; e = (struct zx_cb_NotifyTo_s*)e->gg.g.n)
	  zx_DUP_STRS_cb_NotifyTo(c, e);
  }
  {
      struct zx_cb_NotifyAdminTo_s* e;
      for (e = x->NotifyAdminTo; e; e = (struct zx_cb_NotifyAdminTo_s*)e->gg.g.n)
	  zx_DUP_STRS_cb_NotifyAdminTo(c, e);
  }
  zx_dup_strs_simple_elems(c, x->Aggregation);
  zx_dup_strs_simple_elems(c, x->Trigger);
  {
      struct zx_cb_Extension_s* e;
      for (e = x->Extension; e; e = (struct zx_cb_Extension_s*)e->gg.g.n)
	  zx_DUP_STRS_cb_Extension(c, e);
  }

}

/* FUNC(zx_DEEP_CLONE_cb_Subscription) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

/* Called by: */
struct zx_cb_Subscription_s* zx_DEEP_CLONE_cb_Subscription(struct zx_ctx* c, struct zx_cb_Subscription_s* x, int dup_strs)
{
  x = (struct zx_cb_Subscription_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zx_cb_Subscription_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */

  x->starts = zx_clone_attr(c, x->starts);
  x->expires = zx_clone_attr(c, x->expires);
  x->id = zx_clone_attr(c, x->id);
  x->subscriptionID = zx_clone_attr(c, x->subscriptionID);
  x->includeData = zx_clone_attr(c, x->includeData);

  {
      struct zx_cb_ItemSelection_s* e;
      struct zx_cb_ItemSelection_s* en;
      struct zx_cb_ItemSelection_s* enn;
      for (enn = 0, e = x->ItemSelection; e; e = (struct zx_cb_ItemSelection_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_cb_ItemSelection(c, e, dup_strs);
	  if (!enn)
	      x->ItemSelection = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zx_cb_RefItem_s* e;
      struct zx_cb_RefItem_s* en;
      struct zx_cb_RefItem_s* enn;
      for (enn = 0, e = x->RefItem; e; e = (struct zx_cb_RefItem_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_cb_RefItem(c, e, dup_strs);
	  if (!enn)
	      x->RefItem = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zx_cb_NotifyTo_s* e;
      struct zx_cb_NotifyTo_s* en;
      struct zx_cb_NotifyTo_s* enn;
      for (enn = 0, e = x->NotifyTo; e; e = (struct zx_cb_NotifyTo_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_cb_NotifyTo(c, e, dup_strs);
	  if (!enn)
	      x->NotifyTo = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zx_cb_NotifyAdminTo_s* e;
      struct zx_cb_NotifyAdminTo_s* en;
      struct zx_cb_NotifyAdminTo_s* enn;
      for (enn = 0, e = x->NotifyAdminTo; e; e = (struct zx_cb_NotifyAdminTo_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_cb_NotifyAdminTo(c, e, dup_strs);
	  if (!enn)
	      x->NotifyAdminTo = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  x->Aggregation = zx_deep_clone_simple_elems(c,x->Aggregation, dup_strs);
  x->Trigger = zx_deep_clone_simple_elems(c,x->Trigger, dup_strs);
  {
      struct zx_cb_Extension_s* e;
      struct zx_cb_Extension_s* en;
      struct zx_cb_Extension_s* enn;
      for (enn = 0, e = x->Extension; e; e = (struct zx_cb_Extension_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_cb_Extension(c, e, dup_strs);
	  if (!enn)
	      x->Extension = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }

  return x;
}

/* FUNC(zx_WALK_SO_cb_Subscription) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zx_WALK_SO_cb_Subscription(struct zx_ctx* c, struct zx_cb_Subscription_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  int ret = callback(&x->gg.g, ctx);
  if (ret)
    return ret;
  
  /* *** deal with xmlns specifications in exc c14n way */


  
  ret = zx_walk_so_unknown_attributes(c, &x->gg, ctx, callback); 
  if (ret)
    return ret;

  {
      struct zx_cb_ItemSelection_s* e;
      for (e = x->ItemSelection; e; e = (struct zx_cb_ItemSelection_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_cb_ItemSelection(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zx_cb_RefItem_s* e;
      for (e = x->RefItem; e; e = (struct zx_cb_RefItem_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_cb_RefItem(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zx_cb_NotifyTo_s* e;
      for (e = x->NotifyTo; e; e = (struct zx_cb_NotifyTo_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_cb_NotifyTo(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zx_cb_NotifyAdminTo_s* e;
      for (e = x->NotifyAdminTo; e; e = (struct zx_cb_NotifyAdminTo_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_cb_NotifyAdminTo(c, e, ctx, callback);
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
  {
      struct zx_cb_Extension_s* e;
      for (e = x->Extension; e; e = (struct zx_cb_Extension_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_cb_Extension(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }

  
  return zx_walk_so_unknown_elems_and_content(c, &x->gg, ctx, callback);
}

/* FUNC(zx_WALK_WO_cb_Subscription) */

int zx_WALK_WO_cb_Subscription(struct zx_ctx* c, struct zx_cb_Subscription_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   cb_UsageType
#define EL_STRUCT zx_cb_UsageType_s
#define EL_NS     cb
#define EL_TAG    UsageType

/* FUNC(zx_FREE_cb_UsageType) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

/* Called by: */
void zx_FREE_cb_UsageType(struct zx_ctx* c, struct zx_cb_UsageType_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */

  zx_free_attr(c, x->success, free_strs);
  zx_free_attr(c, x->id, free_strs);
  zx_free_attr(c, x->modificationTime, free_strs);
  zx_free_attr(c, x->ACC, free_strs);
  zx_free_attr(c, x->ACCTime, free_strs);
  zx_free_attr(c, x->modifier, free_strs);



  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zx_NEW_cb_UsageType) */

/* Trivial allocator/constructor for the datatype. */

/* Called by: */
struct zx_cb_UsageType_s* zx_NEW_cb_UsageType(struct zx_ctx* c)
{
  struct zx_cb_UsageType_s* x = ZX_ZALLOC(c, struct zx_cb_UsageType_s);
  x->gg.g.tok = zx_cb_UsageType_ELEM;
  return x;
}

#ifdef ZX_ENA_AUX

/* FUNC(zx_DUP_STRS_cb_UsageType) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

/* Called by: */
void zx_DUP_STRS_cb_UsageType(struct zx_ctx* c, struct zx_cb_UsageType_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */

  zx_dup_attr(c, x->success);
  zx_dup_attr(c, x->id);
  zx_dup_attr(c, x->modificationTime);
  zx_dup_attr(c, x->ACC);
  zx_dup_attr(c, x->ACCTime);
  zx_dup_attr(c, x->modifier);


}

/* FUNC(zx_DEEP_CLONE_cb_UsageType) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

/* Called by: */
struct zx_cb_UsageType_s* zx_DEEP_CLONE_cb_UsageType(struct zx_ctx* c, struct zx_cb_UsageType_s* x, int dup_strs)
{
  x = (struct zx_cb_UsageType_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zx_cb_UsageType_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */

  x->success = zx_clone_attr(c, x->success);
  x->id = zx_clone_attr(c, x->id);
  x->modificationTime = zx_clone_attr(c, x->modificationTime);
  x->ACC = zx_clone_attr(c, x->ACC);
  x->ACCTime = zx_clone_attr(c, x->ACCTime);
  x->modifier = zx_clone_attr(c, x->modifier);


  return x;
}

/* FUNC(zx_WALK_SO_cb_UsageType) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zx_WALK_SO_cb_UsageType(struct zx_ctx* c, struct zx_cb_UsageType_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  int ret = callback(&x->gg.g, ctx);
  if (ret)
    return ret;
  
  /* *** deal with xmlns specifications in exc c14n way */


  
  ret = zx_walk_so_unknown_attributes(c, &x->gg, ctx, callback); 
  if (ret)
    return ret;


  
  return zx_walk_so_unknown_elems_and_content(c, &x->gg, ctx, callback);
}

/* FUNC(zx_WALK_WO_cb_UsageType) */

int zx_WALK_WO_cb_UsageType(struct zx_ctx* c, struct zx_cb_UsageType_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  ERR("*** walk_wo not implemented %d", 0);
  return 0;
}

#endif


/* EOF -- c/zx-cb-aux.c */