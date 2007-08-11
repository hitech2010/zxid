/* c/zx-demomed-aux.c - WARNING: This file was automatically generated. DO NOT EDIT!
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
#include "c/zx-demomed-data.h"



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

#define EL_NAME   demomed_DeleteObjectRequest
#define EL_STRUCT zx_demomed_DeleteObjectRequest_s
#define EL_NS     demomed
#define EL_TAG    DeleteObjectRequest

/* FUNC(zx_FREE_demomed_DeleteObjectRequest) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

/* Called by: */
void zx_FREE_demomed_DeleteObjectRequest(struct zx_ctx* c, struct zx_demomed_DeleteObjectRequest_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */


  zx_free_simple_elems(c, x->ObjectID, free_strs);


  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zx_NEW_demomed_DeleteObjectRequest) */

/* Trivial allocator/constructor for the datatype. */

/* Called by: */
struct zx_demomed_DeleteObjectRequest_s* zx_NEW_demomed_DeleteObjectRequest(struct zx_ctx* c)
{
  struct zx_demomed_DeleteObjectRequest_s* x = ZX_ZALLOC(c, struct zx_demomed_DeleteObjectRequest_s);
  x->gg.g.tok = zx_demomed_DeleteObjectRequest_ELEM;
  return x;
}

#ifdef ZX_ENA_AUX

/* FUNC(zx_DUP_STRS_demomed_DeleteObjectRequest) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

/* Called by: */
void zx_DUP_STRS_demomed_DeleteObjectRequest(struct zx_ctx* c, struct zx_demomed_DeleteObjectRequest_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */


  zx_dup_strs_simple_elems(c, x->ObjectID);

}

/* FUNC(zx_DEEP_CLONE_demomed_DeleteObjectRequest) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

/* Called by: */
struct zx_demomed_DeleteObjectRequest_s* zx_DEEP_CLONE_demomed_DeleteObjectRequest(struct zx_ctx* c, struct zx_demomed_DeleteObjectRequest_s* x, int dup_strs)
{
  x = (struct zx_demomed_DeleteObjectRequest_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zx_demomed_DeleteObjectRequest_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */


  x->ObjectID = zx_deep_clone_simple_elems(c,x->ObjectID, dup_strs);

  return x;
}

/* FUNC(zx_WALK_SO_demomed_DeleteObjectRequest) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zx_WALK_SO_demomed_DeleteObjectRequest(struct zx_ctx* c, struct zx_demomed_DeleteObjectRequest_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  int ret = callback(&x->gg.g, ctx);
  if (ret)
    return ret;
  
  /* *** deal with xmlns specifications in exc c14n way */


  
  ret = zx_walk_so_unknown_attributes(c, &x->gg, ctx, callback); 
  if (ret)
    return ret;

  ret = zx_walk_so_simple_elems(c, x->ObjectID, ctx, callback);
  if (ret)
    return ret;

  
  return zx_walk_so_unknown_elems_and_content(c, &x->gg, ctx, callback);
}

/* FUNC(zx_WALK_WO_demomed_DeleteObjectRequest) */

int zx_WALK_WO_demomed_DeleteObjectRequest(struct zx_ctx* c, struct zx_demomed_DeleteObjectRequest_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   demomed_DeleteObjectResponse
#define EL_STRUCT zx_demomed_DeleteObjectResponse_s
#define EL_NS     demomed
#define EL_TAG    DeleteObjectResponse

/* FUNC(zx_FREE_demomed_DeleteObjectResponse) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

/* Called by: */
void zx_FREE_demomed_DeleteObjectResponse(struct zx_ctx* c, struct zx_demomed_DeleteObjectResponse_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */


  {
      struct zx_lu_Status_s* e;
      struct zx_lu_Status_s* en;
      for (e = x->Status; e; e = en) {
	  en = (struct zx_lu_Status_s*)e->gg.g.n;
	  zx_FREE_lu_Status(c, e, free_strs);
      }
  }
  zx_free_simple_elems(c, x->Count, free_strs);


  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zx_NEW_demomed_DeleteObjectResponse) */

/* Trivial allocator/constructor for the datatype. */

/* Called by: */
struct zx_demomed_DeleteObjectResponse_s* zx_NEW_demomed_DeleteObjectResponse(struct zx_ctx* c)
{
  struct zx_demomed_DeleteObjectResponse_s* x = ZX_ZALLOC(c, struct zx_demomed_DeleteObjectResponse_s);
  x->gg.g.tok = zx_demomed_DeleteObjectResponse_ELEM;
  return x;
}

#ifdef ZX_ENA_AUX

/* FUNC(zx_DUP_STRS_demomed_DeleteObjectResponse) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

/* Called by: */
void zx_DUP_STRS_demomed_DeleteObjectResponse(struct zx_ctx* c, struct zx_demomed_DeleteObjectResponse_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */


  {
      struct zx_lu_Status_s* e;
      for (e = x->Status; e; e = (struct zx_lu_Status_s*)e->gg.g.n)
	  zx_DUP_STRS_lu_Status(c, e);
  }
  zx_dup_strs_simple_elems(c, x->Count);

}

/* FUNC(zx_DEEP_CLONE_demomed_DeleteObjectResponse) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

/* Called by: */
struct zx_demomed_DeleteObjectResponse_s* zx_DEEP_CLONE_demomed_DeleteObjectResponse(struct zx_ctx* c, struct zx_demomed_DeleteObjectResponse_s* x, int dup_strs)
{
  x = (struct zx_demomed_DeleteObjectResponse_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zx_demomed_DeleteObjectResponse_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */


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
  x->Count = zx_deep_clone_simple_elems(c,x->Count, dup_strs);

  return x;
}

/* FUNC(zx_WALK_SO_demomed_DeleteObjectResponse) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zx_WALK_SO_demomed_DeleteObjectResponse(struct zx_ctx* c, struct zx_demomed_DeleteObjectResponse_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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
  ret = zx_walk_so_simple_elems(c, x->Count, ctx, callback);
  if (ret)
    return ret;

  
  return zx_walk_so_unknown_elems_and_content(c, &x->gg, ctx, callback);
}

/* FUNC(zx_WALK_WO_demomed_DeleteObjectResponse) */

int zx_WALK_WO_demomed_DeleteObjectResponse(struct zx_ctx* c, struct zx_demomed_DeleteObjectResponse_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   demomed_GetObjectListRequest
#define EL_STRUCT zx_demomed_GetObjectListRequest_s
#define EL_NS     demomed
#define EL_TAG    GetObjectListRequest

/* FUNC(zx_FREE_demomed_GetObjectListRequest) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

/* Called by: */
void zx_FREE_demomed_GetObjectListRequest(struct zx_ctx* c, struct zx_demomed_GetObjectListRequest_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */


  {
      struct zx_demomed_ObjectSearchParm_s* e;
      struct zx_demomed_ObjectSearchParm_s* en;
      for (e = x->ObjectSearchParm; e; e = en) {
	  en = (struct zx_demomed_ObjectSearchParm_s*)e->gg.g.n;
	  zx_FREE_demomed_ObjectSearchParm(c, e, free_strs);
      }
  }


  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zx_NEW_demomed_GetObjectListRequest) */

/* Trivial allocator/constructor for the datatype. */

/* Called by: */
struct zx_demomed_GetObjectListRequest_s* zx_NEW_demomed_GetObjectListRequest(struct zx_ctx* c)
{
  struct zx_demomed_GetObjectListRequest_s* x = ZX_ZALLOC(c, struct zx_demomed_GetObjectListRequest_s);
  x->gg.g.tok = zx_demomed_GetObjectListRequest_ELEM;
  return x;
}

#ifdef ZX_ENA_AUX

/* FUNC(zx_DUP_STRS_demomed_GetObjectListRequest) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

/* Called by: */
void zx_DUP_STRS_demomed_GetObjectListRequest(struct zx_ctx* c, struct zx_demomed_GetObjectListRequest_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */


  {
      struct zx_demomed_ObjectSearchParm_s* e;
      for (e = x->ObjectSearchParm; e; e = (struct zx_demomed_ObjectSearchParm_s*)e->gg.g.n)
	  zx_DUP_STRS_demomed_ObjectSearchParm(c, e);
  }

}

/* FUNC(zx_DEEP_CLONE_demomed_GetObjectListRequest) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

/* Called by: */
struct zx_demomed_GetObjectListRequest_s* zx_DEEP_CLONE_demomed_GetObjectListRequest(struct zx_ctx* c, struct zx_demomed_GetObjectListRequest_s* x, int dup_strs)
{
  x = (struct zx_demomed_GetObjectListRequest_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zx_demomed_GetObjectListRequest_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */


  {
      struct zx_demomed_ObjectSearchParm_s* e;
      struct zx_demomed_ObjectSearchParm_s* en;
      struct zx_demomed_ObjectSearchParm_s* enn;
      for (enn = 0, e = x->ObjectSearchParm; e; e = (struct zx_demomed_ObjectSearchParm_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_demomed_ObjectSearchParm(c, e, dup_strs);
	  if (!enn)
	      x->ObjectSearchParm = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }

  return x;
}

/* FUNC(zx_WALK_SO_demomed_GetObjectListRequest) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zx_WALK_SO_demomed_GetObjectListRequest(struct zx_ctx* c, struct zx_demomed_GetObjectListRequest_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  int ret = callback(&x->gg.g, ctx);
  if (ret)
    return ret;
  
  /* *** deal with xmlns specifications in exc c14n way */


  
  ret = zx_walk_so_unknown_attributes(c, &x->gg, ctx, callback); 
  if (ret)
    return ret;

  {
      struct zx_demomed_ObjectSearchParm_s* e;
      for (e = x->ObjectSearchParm; e; e = (struct zx_demomed_ObjectSearchParm_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_demomed_ObjectSearchParm(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }

  
  return zx_walk_so_unknown_elems_and_content(c, &x->gg, ctx, callback);
}

/* FUNC(zx_WALK_WO_demomed_GetObjectListRequest) */

int zx_WALK_WO_demomed_GetObjectListRequest(struct zx_ctx* c, struct zx_demomed_GetObjectListRequest_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   demomed_GetObjectListResponse
#define EL_STRUCT zx_demomed_GetObjectListResponse_s
#define EL_NS     demomed
#define EL_TAG    GetObjectListResponse

/* FUNC(zx_FREE_demomed_GetObjectListResponse) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

/* Called by: */
void zx_FREE_demomed_GetObjectListResponse(struct zx_ctx* c, struct zx_demomed_GetObjectListResponse_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */


  {
      struct zx_lu_Status_s* e;
      struct zx_lu_Status_s* en;
      for (e = x->Status; e; e = en) {
	  en = (struct zx_lu_Status_s*)e->gg.g.n;
	  zx_FREE_lu_Status(c, e, free_strs);
      }
  }
  {
      struct zx_demomed_ObjectInfo_s* e;
      struct zx_demomed_ObjectInfo_s* en;
      for (e = x->ObjectInfo; e; e = en) {
	  en = (struct zx_demomed_ObjectInfo_s*)e->gg.g.n;
	  zx_FREE_demomed_ObjectInfo(c, e, free_strs);
      }
  }


  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zx_NEW_demomed_GetObjectListResponse) */

/* Trivial allocator/constructor for the datatype. */

/* Called by: */
struct zx_demomed_GetObjectListResponse_s* zx_NEW_demomed_GetObjectListResponse(struct zx_ctx* c)
{
  struct zx_demomed_GetObjectListResponse_s* x = ZX_ZALLOC(c, struct zx_demomed_GetObjectListResponse_s);
  x->gg.g.tok = zx_demomed_GetObjectListResponse_ELEM;
  return x;
}

#ifdef ZX_ENA_AUX

/* FUNC(zx_DUP_STRS_demomed_GetObjectListResponse) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

/* Called by: */
void zx_DUP_STRS_demomed_GetObjectListResponse(struct zx_ctx* c, struct zx_demomed_GetObjectListResponse_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */


  {
      struct zx_lu_Status_s* e;
      for (e = x->Status; e; e = (struct zx_lu_Status_s*)e->gg.g.n)
	  zx_DUP_STRS_lu_Status(c, e);
  }
  {
      struct zx_demomed_ObjectInfo_s* e;
      for (e = x->ObjectInfo; e; e = (struct zx_demomed_ObjectInfo_s*)e->gg.g.n)
	  zx_DUP_STRS_demomed_ObjectInfo(c, e);
  }

}

/* FUNC(zx_DEEP_CLONE_demomed_GetObjectListResponse) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

/* Called by: */
struct zx_demomed_GetObjectListResponse_s* zx_DEEP_CLONE_demomed_GetObjectListResponse(struct zx_ctx* c, struct zx_demomed_GetObjectListResponse_s* x, int dup_strs)
{
  x = (struct zx_demomed_GetObjectListResponse_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zx_demomed_GetObjectListResponse_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */


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
      struct zx_demomed_ObjectInfo_s* e;
      struct zx_demomed_ObjectInfo_s* en;
      struct zx_demomed_ObjectInfo_s* enn;
      for (enn = 0, e = x->ObjectInfo; e; e = (struct zx_demomed_ObjectInfo_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_demomed_ObjectInfo(c, e, dup_strs);
	  if (!enn)
	      x->ObjectInfo = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }

  return x;
}

/* FUNC(zx_WALK_SO_demomed_GetObjectListResponse) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zx_WALK_SO_demomed_GetObjectListResponse(struct zx_ctx* c, struct zx_demomed_GetObjectListResponse_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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
      struct zx_demomed_ObjectInfo_s* e;
      for (e = x->ObjectInfo; e; e = (struct zx_demomed_ObjectInfo_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_demomed_ObjectInfo(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }

  
  return zx_walk_so_unknown_elems_and_content(c, &x->gg, ctx, callback);
}

/* FUNC(zx_WALK_WO_demomed_GetObjectListResponse) */

int zx_WALK_WO_demomed_GetObjectListResponse(struct zx_ctx* c, struct zx_demomed_GetObjectListResponse_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   demomed_GetObjectRequest
#define EL_STRUCT zx_demomed_GetObjectRequest_s
#define EL_NS     demomed
#define EL_TAG    GetObjectRequest

/* FUNC(zx_FREE_demomed_GetObjectRequest) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

/* Called by: */
void zx_FREE_demomed_GetObjectRequest(struct zx_ctx* c, struct zx_demomed_GetObjectRequest_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */


  zx_free_simple_elems(c, x->ObjectID, free_strs);


  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zx_NEW_demomed_GetObjectRequest) */

/* Trivial allocator/constructor for the datatype. */

/* Called by: */
struct zx_demomed_GetObjectRequest_s* zx_NEW_demomed_GetObjectRequest(struct zx_ctx* c)
{
  struct zx_demomed_GetObjectRequest_s* x = ZX_ZALLOC(c, struct zx_demomed_GetObjectRequest_s);
  x->gg.g.tok = zx_demomed_GetObjectRequest_ELEM;
  return x;
}

#ifdef ZX_ENA_AUX

/* FUNC(zx_DUP_STRS_demomed_GetObjectRequest) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

/* Called by: */
void zx_DUP_STRS_demomed_GetObjectRequest(struct zx_ctx* c, struct zx_demomed_GetObjectRequest_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */


  zx_dup_strs_simple_elems(c, x->ObjectID);

}

/* FUNC(zx_DEEP_CLONE_demomed_GetObjectRequest) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

/* Called by: */
struct zx_demomed_GetObjectRequest_s* zx_DEEP_CLONE_demomed_GetObjectRequest(struct zx_ctx* c, struct zx_demomed_GetObjectRequest_s* x, int dup_strs)
{
  x = (struct zx_demomed_GetObjectRequest_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zx_demomed_GetObjectRequest_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */


  x->ObjectID = zx_deep_clone_simple_elems(c,x->ObjectID, dup_strs);

  return x;
}

/* FUNC(zx_WALK_SO_demomed_GetObjectRequest) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zx_WALK_SO_demomed_GetObjectRequest(struct zx_ctx* c, struct zx_demomed_GetObjectRequest_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  int ret = callback(&x->gg.g, ctx);
  if (ret)
    return ret;
  
  /* *** deal with xmlns specifications in exc c14n way */


  
  ret = zx_walk_so_unknown_attributes(c, &x->gg, ctx, callback); 
  if (ret)
    return ret;

  ret = zx_walk_so_simple_elems(c, x->ObjectID, ctx, callback);
  if (ret)
    return ret;

  
  return zx_walk_so_unknown_elems_and_content(c, &x->gg, ctx, callback);
}

/* FUNC(zx_WALK_WO_demomed_GetObjectRequest) */

int zx_WALK_WO_demomed_GetObjectRequest(struct zx_ctx* c, struct zx_demomed_GetObjectRequest_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   demomed_GetObjectResponse
#define EL_STRUCT zx_demomed_GetObjectResponse_s
#define EL_NS     demomed
#define EL_TAG    GetObjectResponse

/* FUNC(zx_FREE_demomed_GetObjectResponse) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

/* Called by: */
void zx_FREE_demomed_GetObjectResponse(struct zx_ctx* c, struct zx_demomed_GetObjectResponse_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */


  {
      struct zx_lu_Status_s* e;
      struct zx_lu_Status_s* en;
      for (e = x->Status; e; e = en) {
	  en = (struct zx_lu_Status_s*)e->gg.g.n;
	  zx_FREE_lu_Status(c, e, free_strs);
      }
  }
  {
      struct zx_demomed_ObjectData_s* e;
      struct zx_demomed_ObjectData_s* en;
      for (e = x->ObjectData; e; e = en) {
	  en = (struct zx_demomed_ObjectData_s*)e->gg.g.n;
	  zx_FREE_demomed_ObjectData(c, e, free_strs);
      }
  }


  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zx_NEW_demomed_GetObjectResponse) */

/* Trivial allocator/constructor for the datatype. */

/* Called by: */
struct zx_demomed_GetObjectResponse_s* zx_NEW_demomed_GetObjectResponse(struct zx_ctx* c)
{
  struct zx_demomed_GetObjectResponse_s* x = ZX_ZALLOC(c, struct zx_demomed_GetObjectResponse_s);
  x->gg.g.tok = zx_demomed_GetObjectResponse_ELEM;
  return x;
}

#ifdef ZX_ENA_AUX

/* FUNC(zx_DUP_STRS_demomed_GetObjectResponse) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

/* Called by: */
void zx_DUP_STRS_demomed_GetObjectResponse(struct zx_ctx* c, struct zx_demomed_GetObjectResponse_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */


  {
      struct zx_lu_Status_s* e;
      for (e = x->Status; e; e = (struct zx_lu_Status_s*)e->gg.g.n)
	  zx_DUP_STRS_lu_Status(c, e);
  }
  {
      struct zx_demomed_ObjectData_s* e;
      for (e = x->ObjectData; e; e = (struct zx_demomed_ObjectData_s*)e->gg.g.n)
	  zx_DUP_STRS_demomed_ObjectData(c, e);
  }

}

/* FUNC(zx_DEEP_CLONE_demomed_GetObjectResponse) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

/* Called by: */
struct zx_demomed_GetObjectResponse_s* zx_DEEP_CLONE_demomed_GetObjectResponse(struct zx_ctx* c, struct zx_demomed_GetObjectResponse_s* x, int dup_strs)
{
  x = (struct zx_demomed_GetObjectResponse_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zx_demomed_GetObjectResponse_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */


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
      struct zx_demomed_ObjectData_s* e;
      struct zx_demomed_ObjectData_s* en;
      struct zx_demomed_ObjectData_s* enn;
      for (enn = 0, e = x->ObjectData; e; e = (struct zx_demomed_ObjectData_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_demomed_ObjectData(c, e, dup_strs);
	  if (!enn)
	      x->ObjectData = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }

  return x;
}

/* FUNC(zx_WALK_SO_demomed_GetObjectResponse) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zx_WALK_SO_demomed_GetObjectResponse(struct zx_ctx* c, struct zx_demomed_GetObjectResponse_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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
      struct zx_demomed_ObjectData_s* e;
      for (e = x->ObjectData; e; e = (struct zx_demomed_ObjectData_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_demomed_ObjectData(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }

  
  return zx_walk_so_unknown_elems_and_content(c, &x->gg, ctx, callback);
}

/* FUNC(zx_WALK_WO_demomed_GetObjectResponse) */

int zx_WALK_WO_demomed_GetObjectResponse(struct zx_ctx* c, struct zx_demomed_GetObjectResponse_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   demomed_Object
#define EL_STRUCT zx_demomed_Object_s
#define EL_NS     demomed
#define EL_TAG    Object

/* FUNC(zx_FREE_demomed_Object) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

/* Called by: */
void zx_FREE_demomed_Object(struct zx_ctx* c, struct zx_demomed_Object_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */

  zx_free_attr(c, x->reqID, free_strs);

  {
      struct zx_demomed_ObjectInfo_s* e;
      struct zx_demomed_ObjectInfo_s* en;
      for (e = x->ObjectInfo; e; e = en) {
	  en = (struct zx_demomed_ObjectInfo_s*)e->gg.g.n;
	  zx_FREE_demomed_ObjectInfo(c, e, free_strs);
      }
  }
  {
      struct zx_demomed_ObjectData_s* e;
      struct zx_demomed_ObjectData_s* en;
      for (e = x->ObjectData; e; e = en) {
	  en = (struct zx_demomed_ObjectData_s*)e->gg.g.n;
	  zx_FREE_demomed_ObjectData(c, e, free_strs);
      }
  }


  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zx_NEW_demomed_Object) */

/* Trivial allocator/constructor for the datatype. */

/* Called by: */
struct zx_demomed_Object_s* zx_NEW_demomed_Object(struct zx_ctx* c)
{
  struct zx_demomed_Object_s* x = ZX_ZALLOC(c, struct zx_demomed_Object_s);
  x->gg.g.tok = zx_demomed_Object_ELEM;
  return x;
}

#ifdef ZX_ENA_AUX

/* FUNC(zx_DUP_STRS_demomed_Object) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

/* Called by: */
void zx_DUP_STRS_demomed_Object(struct zx_ctx* c, struct zx_demomed_Object_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */

  zx_dup_attr(c, x->reqID);

  {
      struct zx_demomed_ObjectInfo_s* e;
      for (e = x->ObjectInfo; e; e = (struct zx_demomed_ObjectInfo_s*)e->gg.g.n)
	  zx_DUP_STRS_demomed_ObjectInfo(c, e);
  }
  {
      struct zx_demomed_ObjectData_s* e;
      for (e = x->ObjectData; e; e = (struct zx_demomed_ObjectData_s*)e->gg.g.n)
	  zx_DUP_STRS_demomed_ObjectData(c, e);
  }

}

/* FUNC(zx_DEEP_CLONE_demomed_Object) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

/* Called by: */
struct zx_demomed_Object_s* zx_DEEP_CLONE_demomed_Object(struct zx_ctx* c, struct zx_demomed_Object_s* x, int dup_strs)
{
  x = (struct zx_demomed_Object_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zx_demomed_Object_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */

  x->reqID = zx_clone_attr(c, x->reqID);

  {
      struct zx_demomed_ObjectInfo_s* e;
      struct zx_demomed_ObjectInfo_s* en;
      struct zx_demomed_ObjectInfo_s* enn;
      for (enn = 0, e = x->ObjectInfo; e; e = (struct zx_demomed_ObjectInfo_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_demomed_ObjectInfo(c, e, dup_strs);
	  if (!enn)
	      x->ObjectInfo = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zx_demomed_ObjectData_s* e;
      struct zx_demomed_ObjectData_s* en;
      struct zx_demomed_ObjectData_s* enn;
      for (enn = 0, e = x->ObjectData; e; e = (struct zx_demomed_ObjectData_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_demomed_ObjectData(c, e, dup_strs);
	  if (!enn)
	      x->ObjectData = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }

  return x;
}

/* FUNC(zx_WALK_SO_demomed_Object) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zx_WALK_SO_demomed_Object(struct zx_ctx* c, struct zx_demomed_Object_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  int ret = callback(&x->gg.g, ctx);
  if (ret)
    return ret;
  
  /* *** deal with xmlns specifications in exc c14n way */


  
  ret = zx_walk_so_unknown_attributes(c, &x->gg, ctx, callback); 
  if (ret)
    return ret;

  {
      struct zx_demomed_ObjectInfo_s* e;
      for (e = x->ObjectInfo; e; e = (struct zx_demomed_ObjectInfo_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_demomed_ObjectInfo(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zx_demomed_ObjectData_s* e;
      for (e = x->ObjectData; e; e = (struct zx_demomed_ObjectData_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_demomed_ObjectData(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }

  
  return zx_walk_so_unknown_elems_and_content(c, &x->gg, ctx, callback);
}

/* FUNC(zx_WALK_WO_demomed_Object) */

int zx_WALK_WO_demomed_Object(struct zx_ctx* c, struct zx_demomed_Object_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   demomed_ObjectData
#define EL_STRUCT zx_demomed_ObjectData_s
#define EL_NS     demomed
#define EL_TAG    ObjectData

/* FUNC(zx_FREE_demomed_ObjectData) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

/* Called by: */
void zx_FREE_demomed_ObjectData(struct zx_ctx* c, struct zx_demomed_ObjectData_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */

  zx_free_attr(c, x->objectID, free_strs);



  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zx_NEW_demomed_ObjectData) */

/* Trivial allocator/constructor for the datatype. */

/* Called by: */
struct zx_demomed_ObjectData_s* zx_NEW_demomed_ObjectData(struct zx_ctx* c)
{
  struct zx_demomed_ObjectData_s* x = ZX_ZALLOC(c, struct zx_demomed_ObjectData_s);
  x->gg.g.tok = zx_demomed_ObjectData_ELEM;
  return x;
}

#ifdef ZX_ENA_AUX

/* FUNC(zx_DUP_STRS_demomed_ObjectData) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

/* Called by: */
void zx_DUP_STRS_demomed_ObjectData(struct zx_ctx* c, struct zx_demomed_ObjectData_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */

  zx_dup_attr(c, x->objectID);


}

/* FUNC(zx_DEEP_CLONE_demomed_ObjectData) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

/* Called by: */
struct zx_demomed_ObjectData_s* zx_DEEP_CLONE_demomed_ObjectData(struct zx_ctx* c, struct zx_demomed_ObjectData_s* x, int dup_strs)
{
  x = (struct zx_demomed_ObjectData_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zx_demomed_ObjectData_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */

  x->objectID = zx_clone_attr(c, x->objectID);


  return x;
}

/* FUNC(zx_WALK_SO_demomed_ObjectData) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zx_WALK_SO_demomed_ObjectData(struct zx_ctx* c, struct zx_demomed_ObjectData_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

/* FUNC(zx_WALK_WO_demomed_ObjectData) */

int zx_WALK_WO_demomed_ObjectData(struct zx_ctx* c, struct zx_demomed_ObjectData_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   demomed_ObjectInfo
#define EL_STRUCT zx_demomed_ObjectInfo_s
#define EL_NS     demomed
#define EL_TAG    ObjectInfo

/* FUNC(zx_FREE_demomed_ObjectInfo) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

/* Called by: */
void zx_FREE_demomed_ObjectInfo(struct zx_ctx* c, struct zx_demomed_ObjectInfo_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */

  zx_free_attr(c, x->objectID, free_strs);

  zx_free_simple_elems(c, x->Dir, free_strs);
  zx_free_simple_elems(c, x->Name, free_strs);
  zx_free_simple_elems(c, x->Type, free_strs);
  zx_free_simple_elems(c, x->Created, free_strs);
  zx_free_simple_elems(c, x->Comment, free_strs);


  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zx_NEW_demomed_ObjectInfo) */

/* Trivial allocator/constructor for the datatype. */

/* Called by: */
struct zx_demomed_ObjectInfo_s* zx_NEW_demomed_ObjectInfo(struct zx_ctx* c)
{
  struct zx_demomed_ObjectInfo_s* x = ZX_ZALLOC(c, struct zx_demomed_ObjectInfo_s);
  x->gg.g.tok = zx_demomed_ObjectInfo_ELEM;
  return x;
}

#ifdef ZX_ENA_AUX

/* FUNC(zx_DUP_STRS_demomed_ObjectInfo) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

/* Called by: */
void zx_DUP_STRS_demomed_ObjectInfo(struct zx_ctx* c, struct zx_demomed_ObjectInfo_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */

  zx_dup_attr(c, x->objectID);

  zx_dup_strs_simple_elems(c, x->Dir);
  zx_dup_strs_simple_elems(c, x->Name);
  zx_dup_strs_simple_elems(c, x->Type);
  zx_dup_strs_simple_elems(c, x->Created);
  zx_dup_strs_simple_elems(c, x->Comment);

}

/* FUNC(zx_DEEP_CLONE_demomed_ObjectInfo) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

/* Called by: */
struct zx_demomed_ObjectInfo_s* zx_DEEP_CLONE_demomed_ObjectInfo(struct zx_ctx* c, struct zx_demomed_ObjectInfo_s* x, int dup_strs)
{
  x = (struct zx_demomed_ObjectInfo_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zx_demomed_ObjectInfo_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */

  x->objectID = zx_clone_attr(c, x->objectID);

  x->Dir = zx_deep_clone_simple_elems(c,x->Dir, dup_strs);
  x->Name = zx_deep_clone_simple_elems(c,x->Name, dup_strs);
  x->Type = zx_deep_clone_simple_elems(c,x->Type, dup_strs);
  x->Created = zx_deep_clone_simple_elems(c,x->Created, dup_strs);
  x->Comment = zx_deep_clone_simple_elems(c,x->Comment, dup_strs);

  return x;
}

/* FUNC(zx_WALK_SO_demomed_ObjectInfo) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zx_WALK_SO_demomed_ObjectInfo(struct zx_ctx* c, struct zx_demomed_ObjectInfo_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  int ret = callback(&x->gg.g, ctx);
  if (ret)
    return ret;
  
  /* *** deal with xmlns specifications in exc c14n way */


  
  ret = zx_walk_so_unknown_attributes(c, &x->gg, ctx, callback); 
  if (ret)
    return ret;

  ret = zx_walk_so_simple_elems(c, x->Dir, ctx, callback);
  if (ret)
    return ret;
  ret = zx_walk_so_simple_elems(c, x->Name, ctx, callback);
  if (ret)
    return ret;
  ret = zx_walk_so_simple_elems(c, x->Type, ctx, callback);
  if (ret)
    return ret;
  ret = zx_walk_so_simple_elems(c, x->Created, ctx, callback);
  if (ret)
    return ret;
  ret = zx_walk_so_simple_elems(c, x->Comment, ctx, callback);
  if (ret)
    return ret;

  
  return zx_walk_so_unknown_elems_and_content(c, &x->gg, ctx, callback);
}

/* FUNC(zx_WALK_WO_demomed_ObjectInfo) */

int zx_WALK_WO_demomed_ObjectInfo(struct zx_ctx* c, struct zx_demomed_ObjectInfo_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   demomed_ObjectSearchParm
#define EL_STRUCT zx_demomed_ObjectSearchParm_s
#define EL_NS     demomed
#define EL_TAG    ObjectSearchParm

/* FUNC(zx_FREE_demomed_ObjectSearchParm) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

/* Called by: */
void zx_FREE_demomed_ObjectSearchParm(struct zx_ctx* c, struct zx_demomed_ObjectSearchParm_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */


  zx_free_simple_elems(c, x->Dir, free_strs);
  zx_free_simple_elems(c, x->Name, free_strs);
  zx_free_simple_elems(c, x->Type, free_strs);
  zx_free_simple_elems(c, x->objectID, free_strs);


  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zx_NEW_demomed_ObjectSearchParm) */

/* Trivial allocator/constructor for the datatype. */

/* Called by: */
struct zx_demomed_ObjectSearchParm_s* zx_NEW_demomed_ObjectSearchParm(struct zx_ctx* c)
{
  struct zx_demomed_ObjectSearchParm_s* x = ZX_ZALLOC(c, struct zx_demomed_ObjectSearchParm_s);
  x->gg.g.tok = zx_demomed_ObjectSearchParm_ELEM;
  return x;
}

#ifdef ZX_ENA_AUX

/* FUNC(zx_DUP_STRS_demomed_ObjectSearchParm) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

/* Called by: */
void zx_DUP_STRS_demomed_ObjectSearchParm(struct zx_ctx* c, struct zx_demomed_ObjectSearchParm_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */


  zx_dup_strs_simple_elems(c, x->Dir);
  zx_dup_strs_simple_elems(c, x->Name);
  zx_dup_strs_simple_elems(c, x->Type);
  zx_dup_strs_simple_elems(c, x->objectID);

}

/* FUNC(zx_DEEP_CLONE_demomed_ObjectSearchParm) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

/* Called by: */
struct zx_demomed_ObjectSearchParm_s* zx_DEEP_CLONE_demomed_ObjectSearchParm(struct zx_ctx* c, struct zx_demomed_ObjectSearchParm_s* x, int dup_strs)
{
  x = (struct zx_demomed_ObjectSearchParm_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zx_demomed_ObjectSearchParm_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */


  x->Dir = zx_deep_clone_simple_elems(c,x->Dir, dup_strs);
  x->Name = zx_deep_clone_simple_elems(c,x->Name, dup_strs);
  x->Type = zx_deep_clone_simple_elems(c,x->Type, dup_strs);
  x->objectID = zx_deep_clone_simple_elems(c,x->objectID, dup_strs);

  return x;
}

/* FUNC(zx_WALK_SO_demomed_ObjectSearchParm) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zx_WALK_SO_demomed_ObjectSearchParm(struct zx_ctx* c, struct zx_demomed_ObjectSearchParm_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  int ret = callback(&x->gg.g, ctx);
  if (ret)
    return ret;
  
  /* *** deal with xmlns specifications in exc c14n way */


  
  ret = zx_walk_so_unknown_attributes(c, &x->gg, ctx, callback); 
  if (ret)
    return ret;

  ret = zx_walk_so_simple_elems(c, x->Dir, ctx, callback);
  if (ret)
    return ret;
  ret = zx_walk_so_simple_elems(c, x->Name, ctx, callback);
  if (ret)
    return ret;
  ret = zx_walk_so_simple_elems(c, x->Type, ctx, callback);
  if (ret)
    return ret;
  ret = zx_walk_so_simple_elems(c, x->objectID, ctx, callback);
  if (ret)
    return ret;

  
  return zx_walk_so_unknown_elems_and_content(c, &x->gg, ctx, callback);
}

/* FUNC(zx_WALK_WO_demomed_ObjectSearchParm) */

int zx_WALK_WO_demomed_ObjectSearchParm(struct zx_ctx* c, struct zx_demomed_ObjectSearchParm_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   demomed_ObjectStoreInfo
#define EL_STRUCT zx_demomed_ObjectStoreInfo_s
#define EL_NS     demomed
#define EL_TAG    ObjectStoreInfo

/* FUNC(zx_FREE_demomed_ObjectStoreInfo) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

/* Called by: */
void zx_FREE_demomed_ObjectStoreInfo(struct zx_ctx* c, struct zx_demomed_ObjectStoreInfo_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */

  zx_free_attr(c, x->storeRef, free_strs);
  zx_free_attr(c, x->objectID, free_strs);



  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zx_NEW_demomed_ObjectStoreInfo) */

/* Trivial allocator/constructor for the datatype. */

/* Called by: */
struct zx_demomed_ObjectStoreInfo_s* zx_NEW_demomed_ObjectStoreInfo(struct zx_ctx* c)
{
  struct zx_demomed_ObjectStoreInfo_s* x = ZX_ZALLOC(c, struct zx_demomed_ObjectStoreInfo_s);
  x->gg.g.tok = zx_demomed_ObjectStoreInfo_ELEM;
  return x;
}

#ifdef ZX_ENA_AUX

/* FUNC(zx_DUP_STRS_demomed_ObjectStoreInfo) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

/* Called by: */
void zx_DUP_STRS_demomed_ObjectStoreInfo(struct zx_ctx* c, struct zx_demomed_ObjectStoreInfo_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */

  zx_dup_attr(c, x->storeRef);
  zx_dup_attr(c, x->objectID);


}

/* FUNC(zx_DEEP_CLONE_demomed_ObjectStoreInfo) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

/* Called by: */
struct zx_demomed_ObjectStoreInfo_s* zx_DEEP_CLONE_demomed_ObjectStoreInfo(struct zx_ctx* c, struct zx_demomed_ObjectStoreInfo_s* x, int dup_strs)
{
  x = (struct zx_demomed_ObjectStoreInfo_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zx_demomed_ObjectStoreInfo_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */

  x->storeRef = zx_clone_attr(c, x->storeRef);
  x->objectID = zx_clone_attr(c, x->objectID);


  return x;
}

/* FUNC(zx_WALK_SO_demomed_ObjectStoreInfo) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zx_WALK_SO_demomed_ObjectStoreInfo(struct zx_ctx* c, struct zx_demomed_ObjectStoreInfo_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

/* FUNC(zx_WALK_WO_demomed_ObjectStoreInfo) */

int zx_WALK_WO_demomed_ObjectStoreInfo(struct zx_ctx* c, struct zx_demomed_ObjectStoreInfo_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   demomed_StoreObjectRequest
#define EL_STRUCT zx_demomed_StoreObjectRequest_s
#define EL_NS     demomed
#define EL_TAG    StoreObjectRequest

/* FUNC(zx_FREE_demomed_StoreObjectRequest) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

/* Called by: */
void zx_FREE_demomed_StoreObjectRequest(struct zx_ctx* c, struct zx_demomed_StoreObjectRequest_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */


  {
      struct zx_demomed_Object_s* e;
      struct zx_demomed_Object_s* en;
      for (e = x->Object; e; e = en) {
	  en = (struct zx_demomed_Object_s*)e->gg.g.n;
	  zx_FREE_demomed_Object(c, e, free_strs);
      }
  }


  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zx_NEW_demomed_StoreObjectRequest) */

/* Trivial allocator/constructor for the datatype. */

/* Called by: */
struct zx_demomed_StoreObjectRequest_s* zx_NEW_demomed_StoreObjectRequest(struct zx_ctx* c)
{
  struct zx_demomed_StoreObjectRequest_s* x = ZX_ZALLOC(c, struct zx_demomed_StoreObjectRequest_s);
  x->gg.g.tok = zx_demomed_StoreObjectRequest_ELEM;
  return x;
}

#ifdef ZX_ENA_AUX

/* FUNC(zx_DUP_STRS_demomed_StoreObjectRequest) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

/* Called by: */
void zx_DUP_STRS_demomed_StoreObjectRequest(struct zx_ctx* c, struct zx_demomed_StoreObjectRequest_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */


  {
      struct zx_demomed_Object_s* e;
      for (e = x->Object; e; e = (struct zx_demomed_Object_s*)e->gg.g.n)
	  zx_DUP_STRS_demomed_Object(c, e);
  }

}

/* FUNC(zx_DEEP_CLONE_demomed_StoreObjectRequest) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

/* Called by: */
struct zx_demomed_StoreObjectRequest_s* zx_DEEP_CLONE_demomed_StoreObjectRequest(struct zx_ctx* c, struct zx_demomed_StoreObjectRequest_s* x, int dup_strs)
{
  x = (struct zx_demomed_StoreObjectRequest_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zx_demomed_StoreObjectRequest_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */


  {
      struct zx_demomed_Object_s* e;
      struct zx_demomed_Object_s* en;
      struct zx_demomed_Object_s* enn;
      for (enn = 0, e = x->Object; e; e = (struct zx_demomed_Object_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_demomed_Object(c, e, dup_strs);
	  if (!enn)
	      x->Object = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }

  return x;
}

/* FUNC(zx_WALK_SO_demomed_StoreObjectRequest) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zx_WALK_SO_demomed_StoreObjectRequest(struct zx_ctx* c, struct zx_demomed_StoreObjectRequest_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  int ret = callback(&x->gg.g, ctx);
  if (ret)
    return ret;
  
  /* *** deal with xmlns specifications in exc c14n way */


  
  ret = zx_walk_so_unknown_attributes(c, &x->gg, ctx, callback); 
  if (ret)
    return ret;

  {
      struct zx_demomed_Object_s* e;
      for (e = x->Object; e; e = (struct zx_demomed_Object_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_demomed_Object(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }

  
  return zx_walk_so_unknown_elems_and_content(c, &x->gg, ctx, callback);
}

/* FUNC(zx_WALK_WO_demomed_StoreObjectRequest) */

int zx_WALK_WO_demomed_StoreObjectRequest(struct zx_ctx* c, struct zx_demomed_StoreObjectRequest_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   demomed_StoreObjectResponse
#define EL_STRUCT zx_demomed_StoreObjectResponse_s
#define EL_NS     demomed
#define EL_TAG    StoreObjectResponse

/* FUNC(zx_FREE_demomed_StoreObjectResponse) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

/* Called by: */
void zx_FREE_demomed_StoreObjectResponse(struct zx_ctx* c, struct zx_demomed_StoreObjectResponse_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */


  {
      struct zx_lu_Status_s* e;
      struct zx_lu_Status_s* en;
      for (e = x->Status; e; e = en) {
	  en = (struct zx_lu_Status_s*)e->gg.g.n;
	  zx_FREE_lu_Status(c, e, free_strs);
      }
  }
  {
      struct zx_demomed_ObjectStoreInfo_s* e;
      struct zx_demomed_ObjectStoreInfo_s* en;
      for (e = x->ObjectStoreInfo; e; e = en) {
	  en = (struct zx_demomed_ObjectStoreInfo_s*)e->gg.g.n;
	  zx_FREE_demomed_ObjectStoreInfo(c, e, free_strs);
      }
  }


  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zx_NEW_demomed_StoreObjectResponse) */

/* Trivial allocator/constructor for the datatype. */

/* Called by: */
struct zx_demomed_StoreObjectResponse_s* zx_NEW_demomed_StoreObjectResponse(struct zx_ctx* c)
{
  struct zx_demomed_StoreObjectResponse_s* x = ZX_ZALLOC(c, struct zx_demomed_StoreObjectResponse_s);
  x->gg.g.tok = zx_demomed_StoreObjectResponse_ELEM;
  return x;
}

#ifdef ZX_ENA_AUX

/* FUNC(zx_DUP_STRS_demomed_StoreObjectResponse) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

/* Called by: */
void zx_DUP_STRS_demomed_StoreObjectResponse(struct zx_ctx* c, struct zx_demomed_StoreObjectResponse_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */


  {
      struct zx_lu_Status_s* e;
      for (e = x->Status; e; e = (struct zx_lu_Status_s*)e->gg.g.n)
	  zx_DUP_STRS_lu_Status(c, e);
  }
  {
      struct zx_demomed_ObjectStoreInfo_s* e;
      for (e = x->ObjectStoreInfo; e; e = (struct zx_demomed_ObjectStoreInfo_s*)e->gg.g.n)
	  zx_DUP_STRS_demomed_ObjectStoreInfo(c, e);
  }

}

/* FUNC(zx_DEEP_CLONE_demomed_StoreObjectResponse) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

/* Called by: */
struct zx_demomed_StoreObjectResponse_s* zx_DEEP_CLONE_demomed_StoreObjectResponse(struct zx_ctx* c, struct zx_demomed_StoreObjectResponse_s* x, int dup_strs)
{
  x = (struct zx_demomed_StoreObjectResponse_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zx_demomed_StoreObjectResponse_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */


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
      struct zx_demomed_ObjectStoreInfo_s* e;
      struct zx_demomed_ObjectStoreInfo_s* en;
      struct zx_demomed_ObjectStoreInfo_s* enn;
      for (enn = 0, e = x->ObjectStoreInfo; e; e = (struct zx_demomed_ObjectStoreInfo_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_demomed_ObjectStoreInfo(c, e, dup_strs);
	  if (!enn)
	      x->ObjectStoreInfo = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }

  return x;
}

/* FUNC(zx_WALK_SO_demomed_StoreObjectResponse) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zx_WALK_SO_demomed_StoreObjectResponse(struct zx_ctx* c, struct zx_demomed_StoreObjectResponse_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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
      struct zx_demomed_ObjectStoreInfo_s* e;
      for (e = x->ObjectStoreInfo; e; e = (struct zx_demomed_ObjectStoreInfo_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_demomed_ObjectStoreInfo(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }

  
  return zx_walk_so_unknown_elems_and_content(c, &x->gg, ctx, callback);
}

/* FUNC(zx_WALK_WO_demomed_StoreObjectResponse) */

int zx_WALK_WO_demomed_StoreObjectResponse(struct zx_ctx* c, struct zx_demomed_StoreObjectResponse_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  ERR("*** walk_wo not implemented %d", 0);
  return 0;
}

#endif


/* EOF -- c/zx-demomed-aux.c */