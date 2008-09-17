/* c/zx-shps-aux.c - WARNING: This file was automatically generated. DO NOT EDIT!
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
#include "c/zx-shps-data.h"



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

#define EL_NAME   shps_CallbackEPR
#define EL_STRUCT zx_shps_CallbackEPR_s
#define EL_NS     shps
#define EL_TAG    CallbackEPR

/* FUNC(zx_FREE_shps_CallbackEPR) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

/* Called by: */
void zx_FREE_shps_CallbackEPR(struct zx_ctx* c, struct zx_shps_CallbackEPR_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */

  zx_free_attr(c, x->ID, free_strs);
  zx_free_attr(c, x->id, free_strs);
  zx_free_attr(c, x->notOnOrAfter, free_strs);
  zx_free_attr(c, x->Id, free_strs);
  zx_free_attr(c, x->actor, free_strs);
  zx_free_attr(c, x->mustUnderstand, free_strs);

  {
      struct zx_a_Address_s* e;
      struct zx_a_Address_s* en;
      for (e = x->Address; e; e = en) {
	  en = (struct zx_a_Address_s*)e->gg.g.n;
	  zx_FREE_a_Address(c, e, free_strs);
      }
  }
  {
      struct zx_a_ReferenceParameters_s* e;
      struct zx_a_ReferenceParameters_s* en;
      for (e = x->ReferenceParameters; e; e = en) {
	  en = (struct zx_a_ReferenceParameters_s*)e->gg.g.n;
	  zx_FREE_a_ReferenceParameters(c, e, free_strs);
      }
  }
  {
      struct zx_a_Metadata_s* e;
      struct zx_a_Metadata_s* en;
      for (e = x->Metadata; e; e = en) {
	  en = (struct zx_a_Metadata_s*)e->gg.g.n;
	  zx_FREE_a_Metadata(c, e, free_strs);
      }
  }


  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zx_NEW_shps_CallbackEPR) */

/* Trivial allocator/constructor for the datatype. */

/* Called by: */
struct zx_shps_CallbackEPR_s* zx_NEW_shps_CallbackEPR(struct zx_ctx* c)
{
  struct zx_shps_CallbackEPR_s* x = ZX_ZALLOC(c, struct zx_shps_CallbackEPR_s);
  x->gg.g.tok = zx_shps_CallbackEPR_ELEM;
  return x;
}

#ifdef ZX_ENA_AUX

/* FUNC(zx_DUP_STRS_shps_CallbackEPR) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

/* Called by: */
void zx_DUP_STRS_shps_CallbackEPR(struct zx_ctx* c, struct zx_shps_CallbackEPR_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */

  zx_dup_attr(c, x->ID);
  zx_dup_attr(c, x->id);
  zx_dup_attr(c, x->notOnOrAfter);
  zx_dup_attr(c, x->Id);
  zx_dup_attr(c, x->actor);
  zx_dup_attr(c, x->mustUnderstand);

  {
      struct zx_a_Address_s* e;
      for (e = x->Address; e; e = (struct zx_a_Address_s*)e->gg.g.n)
	  zx_DUP_STRS_a_Address(c, e);
  }
  {
      struct zx_a_ReferenceParameters_s* e;
      for (e = x->ReferenceParameters; e; e = (struct zx_a_ReferenceParameters_s*)e->gg.g.n)
	  zx_DUP_STRS_a_ReferenceParameters(c, e);
  }
  {
      struct zx_a_Metadata_s* e;
      for (e = x->Metadata; e; e = (struct zx_a_Metadata_s*)e->gg.g.n)
	  zx_DUP_STRS_a_Metadata(c, e);
  }

}

/* FUNC(zx_DEEP_CLONE_shps_CallbackEPR) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

/* Called by: */
struct zx_shps_CallbackEPR_s* zx_DEEP_CLONE_shps_CallbackEPR(struct zx_ctx* c, struct zx_shps_CallbackEPR_s* x, int dup_strs)
{
  x = (struct zx_shps_CallbackEPR_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zx_shps_CallbackEPR_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */

  x->ID = zx_clone_attr(c, x->ID);
  x->id = zx_clone_attr(c, x->id);
  x->notOnOrAfter = zx_clone_attr(c, x->notOnOrAfter);
  x->Id = zx_clone_attr(c, x->Id);
  x->actor = zx_clone_attr(c, x->actor);
  x->mustUnderstand = zx_clone_attr(c, x->mustUnderstand);

  {
      struct zx_a_Address_s* e;
      struct zx_a_Address_s* en;
      struct zx_a_Address_s* enn;
      for (enn = 0, e = x->Address; e; e = (struct zx_a_Address_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_a_Address(c, e, dup_strs);
	  if (!enn)
	      x->Address = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zx_a_ReferenceParameters_s* e;
      struct zx_a_ReferenceParameters_s* en;
      struct zx_a_ReferenceParameters_s* enn;
      for (enn = 0, e = x->ReferenceParameters; e; e = (struct zx_a_ReferenceParameters_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_a_ReferenceParameters(c, e, dup_strs);
	  if (!enn)
	      x->ReferenceParameters = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zx_a_Metadata_s* e;
      struct zx_a_Metadata_s* en;
      struct zx_a_Metadata_s* enn;
      for (enn = 0, e = x->Metadata; e; e = (struct zx_a_Metadata_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_a_Metadata(c, e, dup_strs);
	  if (!enn)
	      x->Metadata = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }

  return x;
}

/* FUNC(zx_WALK_SO_shps_CallbackEPR) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zx_WALK_SO_shps_CallbackEPR(struct zx_ctx* c, struct zx_shps_CallbackEPR_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  int ret = callback(&x->gg.g, ctx);
  if (ret)
    return ret;
  
  /* *** deal with xmlns specifications in exc c14n way */


  
  ret = zx_walk_so_unknown_attributes(c, &x->gg, ctx, callback); 
  if (ret)
    return ret;

  {
      struct zx_a_Address_s* e;
      for (e = x->Address; e; e = (struct zx_a_Address_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_a_Address(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zx_a_ReferenceParameters_s* e;
      for (e = x->ReferenceParameters; e; e = (struct zx_a_ReferenceParameters_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_a_ReferenceParameters(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zx_a_Metadata_s* e;
      for (e = x->Metadata; e; e = (struct zx_a_Metadata_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_a_Metadata(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }

  
  return zx_walk_so_unknown_elems_and_content(c, &x->gg, ctx, callback);
}

/* FUNC(zx_WALK_WO_shps_CallbackEPR) */

int zx_WALK_WO_shps_CallbackEPR(struct zx_ctx* c, struct zx_shps_CallbackEPR_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   shps_Delete
#define EL_STRUCT zx_shps_Delete_s
#define EL_NS     shps
#define EL_TAG    Delete

/* FUNC(zx_FREE_shps_Delete) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

/* Called by: */
void zx_FREE_shps_Delete(struct zx_ctx* c, struct zx_shps_Delete_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */


  zx_free_simple_elems(c, x->ServiceHandle, free_strs);


  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zx_NEW_shps_Delete) */

/* Trivial allocator/constructor for the datatype. */

/* Called by: */
struct zx_shps_Delete_s* zx_NEW_shps_Delete(struct zx_ctx* c)
{
  struct zx_shps_Delete_s* x = ZX_ZALLOC(c, struct zx_shps_Delete_s);
  x->gg.g.tok = zx_shps_Delete_ELEM;
  return x;
}

#ifdef ZX_ENA_AUX

/* FUNC(zx_DUP_STRS_shps_Delete) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

/* Called by: */
void zx_DUP_STRS_shps_Delete(struct zx_ctx* c, struct zx_shps_Delete_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */


  zx_dup_strs_simple_elems(c, x->ServiceHandle);

}

/* FUNC(zx_DEEP_CLONE_shps_Delete) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

/* Called by: */
struct zx_shps_Delete_s* zx_DEEP_CLONE_shps_Delete(struct zx_ctx* c, struct zx_shps_Delete_s* x, int dup_strs)
{
  x = (struct zx_shps_Delete_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zx_shps_Delete_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */


  x->ServiceHandle = zx_deep_clone_simple_elems(c,x->ServiceHandle, dup_strs);

  return x;
}

/* FUNC(zx_WALK_SO_shps_Delete) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zx_WALK_SO_shps_Delete(struct zx_ctx* c, struct zx_shps_Delete_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  int ret = callback(&x->gg.g, ctx);
  if (ret)
    return ret;
  
  /* *** deal with xmlns specifications in exc c14n way */


  
  ret = zx_walk_so_unknown_attributes(c, &x->gg, ctx, callback); 
  if (ret)
    return ret;

  ret = zx_walk_so_simple_elems(c, x->ServiceHandle, ctx, callback);
  if (ret)
    return ret;

  
  return zx_walk_so_unknown_elems_and_content(c, &x->gg, ctx, callback);
}

/* FUNC(zx_WALK_WO_shps_Delete) */

int zx_WALK_WO_shps_Delete(struct zx_ctx* c, struct zx_shps_Delete_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   shps_DeleteResponse
#define EL_STRUCT zx_shps_DeleteResponse_s
#define EL_NS     shps
#define EL_TAG    DeleteResponse

/* FUNC(zx_FREE_shps_DeleteResponse) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

/* Called by: */
void zx_FREE_shps_DeleteResponse(struct zx_ctx* c, struct zx_shps_DeleteResponse_s* x, int free_strs)
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


  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zx_NEW_shps_DeleteResponse) */

/* Trivial allocator/constructor for the datatype. */

/* Called by: */
struct zx_shps_DeleteResponse_s* zx_NEW_shps_DeleteResponse(struct zx_ctx* c)
{
  struct zx_shps_DeleteResponse_s* x = ZX_ZALLOC(c, struct zx_shps_DeleteResponse_s);
  x->gg.g.tok = zx_shps_DeleteResponse_ELEM;
  return x;
}

#ifdef ZX_ENA_AUX

/* FUNC(zx_DUP_STRS_shps_DeleteResponse) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

/* Called by: */
void zx_DUP_STRS_shps_DeleteResponse(struct zx_ctx* c, struct zx_shps_DeleteResponse_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */


  {
      struct zx_lu_Status_s* e;
      for (e = x->Status; e; e = (struct zx_lu_Status_s*)e->gg.g.n)
	  zx_DUP_STRS_lu_Status(c, e);
  }

}

/* FUNC(zx_DEEP_CLONE_shps_DeleteResponse) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

/* Called by: */
struct zx_shps_DeleteResponse_s* zx_DEEP_CLONE_shps_DeleteResponse(struct zx_ctx* c, struct zx_shps_DeleteResponse_s* x, int dup_strs)
{
  x = (struct zx_shps_DeleteResponse_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zx_shps_DeleteResponse_s), dup_strs);
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

  return x;
}

/* FUNC(zx_WALK_SO_shps_DeleteResponse) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zx_WALK_SO_shps_DeleteResponse(struct zx_ctx* c, struct zx_shps_DeleteResponse_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

  
  return zx_walk_so_unknown_elems_and_content(c, &x->gg, ctx, callback);
}

/* FUNC(zx_WALK_WO_shps_DeleteResponse) */

int zx_WALK_WO_shps_DeleteResponse(struct zx_ctx* c, struct zx_shps_DeleteResponse_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   shps_GetStatus
#define EL_STRUCT zx_shps_GetStatus_s
#define EL_NS     shps
#define EL_TAG    GetStatus

/* FUNC(zx_FREE_shps_GetStatus) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

/* Called by: */
void zx_FREE_shps_GetStatus(struct zx_ctx* c, struct zx_shps_GetStatus_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */


  zx_free_simple_elems(c, x->ServiceHandle, free_strs);


  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zx_NEW_shps_GetStatus) */

/* Trivial allocator/constructor for the datatype. */

/* Called by: */
struct zx_shps_GetStatus_s* zx_NEW_shps_GetStatus(struct zx_ctx* c)
{
  struct zx_shps_GetStatus_s* x = ZX_ZALLOC(c, struct zx_shps_GetStatus_s);
  x->gg.g.tok = zx_shps_GetStatus_ELEM;
  return x;
}

#ifdef ZX_ENA_AUX

/* FUNC(zx_DUP_STRS_shps_GetStatus) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

/* Called by: */
void zx_DUP_STRS_shps_GetStatus(struct zx_ctx* c, struct zx_shps_GetStatus_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */


  zx_dup_strs_simple_elems(c, x->ServiceHandle);

}

/* FUNC(zx_DEEP_CLONE_shps_GetStatus) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

/* Called by: */
struct zx_shps_GetStatus_s* zx_DEEP_CLONE_shps_GetStatus(struct zx_ctx* c, struct zx_shps_GetStatus_s* x, int dup_strs)
{
  x = (struct zx_shps_GetStatus_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zx_shps_GetStatus_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */


  x->ServiceHandle = zx_deep_clone_simple_elems(c,x->ServiceHandle, dup_strs);

  return x;
}

/* FUNC(zx_WALK_SO_shps_GetStatus) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zx_WALK_SO_shps_GetStatus(struct zx_ctx* c, struct zx_shps_GetStatus_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  int ret = callback(&x->gg.g, ctx);
  if (ret)
    return ret;
  
  /* *** deal with xmlns specifications in exc c14n way */


  
  ret = zx_walk_so_unknown_attributes(c, &x->gg, ctx, callback); 
  if (ret)
    return ret;

  ret = zx_walk_so_simple_elems(c, x->ServiceHandle, ctx, callback);
  if (ret)
    return ret;

  
  return zx_walk_so_unknown_elems_and_content(c, &x->gg, ctx, callback);
}

/* FUNC(zx_WALK_WO_shps_GetStatus) */

int zx_WALK_WO_shps_GetStatus(struct zx_ctx* c, struct zx_shps_GetStatus_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   shps_GetStatusResponse
#define EL_STRUCT zx_shps_GetStatusResponse_s
#define EL_NS     shps
#define EL_TAG    GetStatusResponse

/* FUNC(zx_FREE_shps_GetStatusResponse) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

/* Called by: */
void zx_FREE_shps_GetStatusResponse(struct zx_ctx* c, struct zx_shps_GetStatusResponse_s* x, int free_strs)
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
      struct zx_shps_GetStatusResponseItem_s* e;
      struct zx_shps_GetStatusResponseItem_s* en;
      for (e = x->GetStatusResponseItem; e; e = en) {
	  en = (struct zx_shps_GetStatusResponseItem_s*)e->gg.g.n;
	  zx_FREE_shps_GetStatusResponseItem(c, e, free_strs);
      }
  }


  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zx_NEW_shps_GetStatusResponse) */

/* Trivial allocator/constructor for the datatype. */

/* Called by: */
struct zx_shps_GetStatusResponse_s* zx_NEW_shps_GetStatusResponse(struct zx_ctx* c)
{
  struct zx_shps_GetStatusResponse_s* x = ZX_ZALLOC(c, struct zx_shps_GetStatusResponse_s);
  x->gg.g.tok = zx_shps_GetStatusResponse_ELEM;
  return x;
}

#ifdef ZX_ENA_AUX

/* FUNC(zx_DUP_STRS_shps_GetStatusResponse) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

/* Called by: */
void zx_DUP_STRS_shps_GetStatusResponse(struct zx_ctx* c, struct zx_shps_GetStatusResponse_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */


  {
      struct zx_lu_Status_s* e;
      for (e = x->Status; e; e = (struct zx_lu_Status_s*)e->gg.g.n)
	  zx_DUP_STRS_lu_Status(c, e);
  }
  {
      struct zx_shps_GetStatusResponseItem_s* e;
      for (e = x->GetStatusResponseItem; e; e = (struct zx_shps_GetStatusResponseItem_s*)e->gg.g.n)
	  zx_DUP_STRS_shps_GetStatusResponseItem(c, e);
  }

}

/* FUNC(zx_DEEP_CLONE_shps_GetStatusResponse) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

/* Called by: */
struct zx_shps_GetStatusResponse_s* zx_DEEP_CLONE_shps_GetStatusResponse(struct zx_ctx* c, struct zx_shps_GetStatusResponse_s* x, int dup_strs)
{
  x = (struct zx_shps_GetStatusResponse_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zx_shps_GetStatusResponse_s), dup_strs);
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
      struct zx_shps_GetStatusResponseItem_s* e;
      struct zx_shps_GetStatusResponseItem_s* en;
      struct zx_shps_GetStatusResponseItem_s* enn;
      for (enn = 0, e = x->GetStatusResponseItem; e; e = (struct zx_shps_GetStatusResponseItem_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_shps_GetStatusResponseItem(c, e, dup_strs);
	  if (!enn)
	      x->GetStatusResponseItem = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }

  return x;
}

/* FUNC(zx_WALK_SO_shps_GetStatusResponse) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zx_WALK_SO_shps_GetStatusResponse(struct zx_ctx* c, struct zx_shps_GetStatusResponse_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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
      struct zx_shps_GetStatusResponseItem_s* e;
      for (e = x->GetStatusResponseItem; e; e = (struct zx_shps_GetStatusResponseItem_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_shps_GetStatusResponseItem(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }

  
  return zx_walk_so_unknown_elems_and_content(c, &x->gg, ctx, callback);
}

/* FUNC(zx_WALK_WO_shps_GetStatusResponse) */

int zx_WALK_WO_shps_GetStatusResponse(struct zx_ctx* c, struct zx_shps_GetStatusResponse_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   shps_GetStatusResponseItem
#define EL_STRUCT zx_shps_GetStatusResponseItem_s
#define EL_NS     shps
#define EL_TAG    GetStatusResponseItem

/* FUNC(zx_FREE_shps_GetStatusResponseItem) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

/* Called by: */
void zx_FREE_shps_GetStatusResponseItem(struct zx_ctx* c, struct zx_shps_GetStatusResponseItem_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */


  zx_free_simple_elems(c, x->ServiceHandle, free_strs);
  zx_free_simple_elems(c, x->ServiceStatus, free_strs);


  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zx_NEW_shps_GetStatusResponseItem) */

/* Trivial allocator/constructor for the datatype. */

/* Called by: */
struct zx_shps_GetStatusResponseItem_s* zx_NEW_shps_GetStatusResponseItem(struct zx_ctx* c)
{
  struct zx_shps_GetStatusResponseItem_s* x = ZX_ZALLOC(c, struct zx_shps_GetStatusResponseItem_s);
  x->gg.g.tok = zx_shps_GetStatusResponseItem_ELEM;
  return x;
}

#ifdef ZX_ENA_AUX

/* FUNC(zx_DUP_STRS_shps_GetStatusResponseItem) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

/* Called by: */
void zx_DUP_STRS_shps_GetStatusResponseItem(struct zx_ctx* c, struct zx_shps_GetStatusResponseItem_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */


  zx_dup_strs_simple_elems(c, x->ServiceHandle);
  zx_dup_strs_simple_elems(c, x->ServiceStatus);

}

/* FUNC(zx_DEEP_CLONE_shps_GetStatusResponseItem) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

/* Called by: */
struct zx_shps_GetStatusResponseItem_s* zx_DEEP_CLONE_shps_GetStatusResponseItem(struct zx_ctx* c, struct zx_shps_GetStatusResponseItem_s* x, int dup_strs)
{
  x = (struct zx_shps_GetStatusResponseItem_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zx_shps_GetStatusResponseItem_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */


  x->ServiceHandle = zx_deep_clone_simple_elems(c,x->ServiceHandle, dup_strs);
  x->ServiceStatus = zx_deep_clone_simple_elems(c,x->ServiceStatus, dup_strs);

  return x;
}

/* FUNC(zx_WALK_SO_shps_GetStatusResponseItem) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zx_WALK_SO_shps_GetStatusResponseItem(struct zx_ctx* c, struct zx_shps_GetStatusResponseItem_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  int ret = callback(&x->gg.g, ctx);
  if (ret)
    return ret;
  
  /* *** deal with xmlns specifications in exc c14n way */


  
  ret = zx_walk_so_unknown_attributes(c, &x->gg, ctx, callback); 
  if (ret)
    return ret;

  ret = zx_walk_so_simple_elems(c, x->ServiceHandle, ctx, callback);
  if (ret)
    return ret;
  ret = zx_walk_so_simple_elems(c, x->ServiceStatus, ctx, callback);
  if (ret)
    return ret;

  
  return zx_walk_so_unknown_elems_and_content(c, &x->gg, ctx, callback);
}

/* FUNC(zx_WALK_WO_shps_GetStatusResponseItem) */

int zx_WALK_WO_shps_GetStatusResponseItem(struct zx_ctx* c, struct zx_shps_GetStatusResponseItem_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   shps_InvocationContext
#define EL_STRUCT zx_shps_InvocationContext_s
#define EL_NS     shps
#define EL_TAG    InvocationContext

/* FUNC(zx_FREE_shps_InvocationContext) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

/* Called by: */
void zx_FREE_shps_InvocationContext(struct zx_ctx* c, struct zx_shps_InvocationContext_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */


  zx_free_simple_elems(c, x->InvokingProvider, free_strs);
  zx_free_simple_elems(c, x->InvokingPrincipal, free_strs);
  zx_free_simple_elems(c, x->SecurityMechID, free_strs);


  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zx_NEW_shps_InvocationContext) */

/* Trivial allocator/constructor for the datatype. */

/* Called by: */
struct zx_shps_InvocationContext_s* zx_NEW_shps_InvocationContext(struct zx_ctx* c)
{
  struct zx_shps_InvocationContext_s* x = ZX_ZALLOC(c, struct zx_shps_InvocationContext_s);
  x->gg.g.tok = zx_shps_InvocationContext_ELEM;
  return x;
}

#ifdef ZX_ENA_AUX

/* FUNC(zx_DUP_STRS_shps_InvocationContext) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

/* Called by: */
void zx_DUP_STRS_shps_InvocationContext(struct zx_ctx* c, struct zx_shps_InvocationContext_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */


  zx_dup_strs_simple_elems(c, x->InvokingProvider);
  zx_dup_strs_simple_elems(c, x->InvokingPrincipal);
  zx_dup_strs_simple_elems(c, x->SecurityMechID);

}

/* FUNC(zx_DEEP_CLONE_shps_InvocationContext) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

/* Called by: */
struct zx_shps_InvocationContext_s* zx_DEEP_CLONE_shps_InvocationContext(struct zx_ctx* c, struct zx_shps_InvocationContext_s* x, int dup_strs)
{
  x = (struct zx_shps_InvocationContext_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zx_shps_InvocationContext_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */


  x->InvokingProvider = zx_deep_clone_simple_elems(c,x->InvokingProvider, dup_strs);
  x->InvokingPrincipal = zx_deep_clone_simple_elems(c,x->InvokingPrincipal, dup_strs);
  x->SecurityMechID = zx_deep_clone_simple_elems(c,x->SecurityMechID, dup_strs);

  return x;
}

/* FUNC(zx_WALK_SO_shps_InvocationContext) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zx_WALK_SO_shps_InvocationContext(struct zx_ctx* c, struct zx_shps_InvocationContext_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  int ret = callback(&x->gg.g, ctx);
  if (ret)
    return ret;
  
  /* *** deal with xmlns specifications in exc c14n way */


  
  ret = zx_walk_so_unknown_attributes(c, &x->gg, ctx, callback); 
  if (ret)
    return ret;

  ret = zx_walk_so_simple_elems(c, x->InvokingProvider, ctx, callback);
  if (ret)
    return ret;
  ret = zx_walk_so_simple_elems(c, x->InvokingPrincipal, ctx, callback);
  if (ret)
    return ret;
  ret = zx_walk_so_simple_elems(c, x->SecurityMechID, ctx, callback);
  if (ret)
    return ret;

  
  return zx_walk_so_unknown_elems_and_content(c, &x->gg, ctx, callback);
}

/* FUNC(zx_WALK_WO_shps_InvocationContext) */

int zx_WALK_WO_shps_InvocationContext(struct zx_ctx* c, struct zx_shps_InvocationContext_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   shps_InvokeItem
#define EL_STRUCT zx_shps_InvokeItem_s
#define EL_NS     shps
#define EL_TAG    InvokeItem

/* FUNC(zx_FREE_shps_InvokeItem) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

/* Called by: */
void zx_FREE_shps_InvokeItem(struct zx_ctx* c, struct zx_shps_InvokeItem_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */

  zx_free_attr(c, x->itemID, free_strs);

  zx_free_simple_elems(c, x->ServiceHandle, free_strs);


  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zx_NEW_shps_InvokeItem) */

/* Trivial allocator/constructor for the datatype. */

/* Called by: */
struct zx_shps_InvokeItem_s* zx_NEW_shps_InvokeItem(struct zx_ctx* c)
{
  struct zx_shps_InvokeItem_s* x = ZX_ZALLOC(c, struct zx_shps_InvokeItem_s);
  x->gg.g.tok = zx_shps_InvokeItem_ELEM;
  return x;
}

#ifdef ZX_ENA_AUX

/* FUNC(zx_DUP_STRS_shps_InvokeItem) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

/* Called by: */
void zx_DUP_STRS_shps_InvokeItem(struct zx_ctx* c, struct zx_shps_InvokeItem_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */

  zx_dup_attr(c, x->itemID);

  zx_dup_strs_simple_elems(c, x->ServiceHandle);

}

/* FUNC(zx_DEEP_CLONE_shps_InvokeItem) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

/* Called by: */
struct zx_shps_InvokeItem_s* zx_DEEP_CLONE_shps_InvokeItem(struct zx_ctx* c, struct zx_shps_InvokeItem_s* x, int dup_strs)
{
  x = (struct zx_shps_InvokeItem_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zx_shps_InvokeItem_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */

  x->itemID = zx_clone_attr(c, x->itemID);

  x->ServiceHandle = zx_deep_clone_simple_elems(c,x->ServiceHandle, dup_strs);

  return x;
}

/* FUNC(zx_WALK_SO_shps_InvokeItem) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zx_WALK_SO_shps_InvokeItem(struct zx_ctx* c, struct zx_shps_InvokeItem_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  int ret = callback(&x->gg.g, ctx);
  if (ret)
    return ret;
  
  /* *** deal with xmlns specifications in exc c14n way */


  
  ret = zx_walk_so_unknown_attributes(c, &x->gg, ctx, callback); 
  if (ret)
    return ret;

  ret = zx_walk_so_simple_elems(c, x->ServiceHandle, ctx, callback);
  if (ret)
    return ret;

  
  return zx_walk_so_unknown_elems_and_content(c, &x->gg, ctx, callback);
}

/* FUNC(zx_WALK_WO_shps_InvokeItem) */

int zx_WALK_WO_shps_InvokeItem(struct zx_ctx* c, struct zx_shps_InvokeItem_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   shps_InvokeResponse
#define EL_STRUCT zx_shps_InvokeResponse_s
#define EL_NS     shps
#define EL_TAG    InvokeResponse

/* FUNC(zx_FREE_shps_InvokeResponse) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

/* Called by: */
void zx_FREE_shps_InvokeResponse(struct zx_ctx* c, struct zx_shps_InvokeResponse_s* x, int free_strs)
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
      struct zx_shps_InvokeResponseItem_s* e;
      struct zx_shps_InvokeResponseItem_s* en;
      for (e = x->InvokeResponseItem; e; e = en) {
	  en = (struct zx_shps_InvokeResponseItem_s*)e->gg.g.n;
	  zx_FREE_shps_InvokeResponseItem(c, e, free_strs);
      }
  }


  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zx_NEW_shps_InvokeResponse) */

/* Trivial allocator/constructor for the datatype. */

/* Called by: */
struct zx_shps_InvokeResponse_s* zx_NEW_shps_InvokeResponse(struct zx_ctx* c)
{
  struct zx_shps_InvokeResponse_s* x = ZX_ZALLOC(c, struct zx_shps_InvokeResponse_s);
  x->gg.g.tok = zx_shps_InvokeResponse_ELEM;
  return x;
}

#ifdef ZX_ENA_AUX

/* FUNC(zx_DUP_STRS_shps_InvokeResponse) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

/* Called by: */
void zx_DUP_STRS_shps_InvokeResponse(struct zx_ctx* c, struct zx_shps_InvokeResponse_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */


  {
      struct zx_lu_Status_s* e;
      for (e = x->Status; e; e = (struct zx_lu_Status_s*)e->gg.g.n)
	  zx_DUP_STRS_lu_Status(c, e);
  }
  {
      struct zx_shps_InvokeResponseItem_s* e;
      for (e = x->InvokeResponseItem; e; e = (struct zx_shps_InvokeResponseItem_s*)e->gg.g.n)
	  zx_DUP_STRS_shps_InvokeResponseItem(c, e);
  }

}

/* FUNC(zx_DEEP_CLONE_shps_InvokeResponse) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

/* Called by: */
struct zx_shps_InvokeResponse_s* zx_DEEP_CLONE_shps_InvokeResponse(struct zx_ctx* c, struct zx_shps_InvokeResponse_s* x, int dup_strs)
{
  x = (struct zx_shps_InvokeResponse_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zx_shps_InvokeResponse_s), dup_strs);
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
      struct zx_shps_InvokeResponseItem_s* e;
      struct zx_shps_InvokeResponseItem_s* en;
      struct zx_shps_InvokeResponseItem_s* enn;
      for (enn = 0, e = x->InvokeResponseItem; e; e = (struct zx_shps_InvokeResponseItem_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_shps_InvokeResponseItem(c, e, dup_strs);
	  if (!enn)
	      x->InvokeResponseItem = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }

  return x;
}

/* FUNC(zx_WALK_SO_shps_InvokeResponse) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zx_WALK_SO_shps_InvokeResponse(struct zx_ctx* c, struct zx_shps_InvokeResponse_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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
      struct zx_shps_InvokeResponseItem_s* e;
      for (e = x->InvokeResponseItem; e; e = (struct zx_shps_InvokeResponseItem_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_shps_InvokeResponseItem(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }

  
  return zx_walk_so_unknown_elems_and_content(c, &x->gg, ctx, callback);
}

/* FUNC(zx_WALK_WO_shps_InvokeResponse) */

int zx_WALK_WO_shps_InvokeResponse(struct zx_ctx* c, struct zx_shps_InvokeResponse_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   shps_InvokeResponseItem
#define EL_STRUCT zx_shps_InvokeResponseItem_s
#define EL_NS     shps
#define EL_TAG    InvokeResponseItem

/* FUNC(zx_FREE_shps_InvokeResponseItem) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

/* Called by: */
void zx_FREE_shps_InvokeResponseItem(struct zx_ctx* c, struct zx_shps_InvokeResponseItem_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */

  zx_free_attr(c, x->ref, free_strs);



  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zx_NEW_shps_InvokeResponseItem) */

/* Trivial allocator/constructor for the datatype. */

/* Called by: */
struct zx_shps_InvokeResponseItem_s* zx_NEW_shps_InvokeResponseItem(struct zx_ctx* c)
{
  struct zx_shps_InvokeResponseItem_s* x = ZX_ZALLOC(c, struct zx_shps_InvokeResponseItem_s);
  x->gg.g.tok = zx_shps_InvokeResponseItem_ELEM;
  return x;
}

#ifdef ZX_ENA_AUX

/* FUNC(zx_DUP_STRS_shps_InvokeResponseItem) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

/* Called by: */
void zx_DUP_STRS_shps_InvokeResponseItem(struct zx_ctx* c, struct zx_shps_InvokeResponseItem_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */

  zx_dup_attr(c, x->ref);


}

/* FUNC(zx_DEEP_CLONE_shps_InvokeResponseItem) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

/* Called by: */
struct zx_shps_InvokeResponseItem_s* zx_DEEP_CLONE_shps_InvokeResponseItem(struct zx_ctx* c, struct zx_shps_InvokeResponseItem_s* x, int dup_strs)
{
  x = (struct zx_shps_InvokeResponseItem_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zx_shps_InvokeResponseItem_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */

  x->ref = zx_clone_attr(c, x->ref);


  return x;
}

/* FUNC(zx_WALK_SO_shps_InvokeResponseItem) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zx_WALK_SO_shps_InvokeResponseItem(struct zx_ctx* c, struct zx_shps_InvokeResponseItem_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

/* FUNC(zx_WALK_WO_shps_InvokeResponseItem) */

int zx_WALK_WO_shps_InvokeResponseItem(struct zx_ctx* c, struct zx_shps_InvokeResponseItem_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   shps_Poll
#define EL_STRUCT zx_shps_Poll_s
#define EL_NS     shps
#define EL_TAG    Poll

/* FUNC(zx_FREE_shps_Poll) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

/* Called by: */
void zx_FREE_shps_Poll(struct zx_ctx* c, struct zx_shps_Poll_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */

  zx_free_attr(c, x->wait, free_strs);

  {
      struct zx_a_Action_s* e;
      struct zx_a_Action_s* en;
      for (e = x->Action; e; e = en) {
	  en = (struct zx_a_Action_s*)e->gg.g.n;
	  zx_FREE_a_Action(c, e, free_strs);
      }
  }
  {
      struct zx_dp_Response_s* e;
      struct zx_dp_Response_s* en;
      for (e = x->Response; e; e = en) {
	  en = (struct zx_dp_Response_s*)e->gg.g.n;
	  zx_FREE_dp_Response(c, e, free_strs);
      }
  }


  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zx_NEW_shps_Poll) */

/* Trivial allocator/constructor for the datatype. */

/* Called by: */
struct zx_shps_Poll_s* zx_NEW_shps_Poll(struct zx_ctx* c)
{
  struct zx_shps_Poll_s* x = ZX_ZALLOC(c, struct zx_shps_Poll_s);
  x->gg.g.tok = zx_shps_Poll_ELEM;
  return x;
}

#ifdef ZX_ENA_AUX

/* FUNC(zx_DUP_STRS_shps_Poll) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

/* Called by: */
void zx_DUP_STRS_shps_Poll(struct zx_ctx* c, struct zx_shps_Poll_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */

  zx_dup_attr(c, x->wait);

  {
      struct zx_a_Action_s* e;
      for (e = x->Action; e; e = (struct zx_a_Action_s*)e->gg.g.n)
	  zx_DUP_STRS_a_Action(c, e);
  }
  {
      struct zx_dp_Response_s* e;
      for (e = x->Response; e; e = (struct zx_dp_Response_s*)e->gg.g.n)
	  zx_DUP_STRS_dp_Response(c, e);
  }

}

/* FUNC(zx_DEEP_CLONE_shps_Poll) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

/* Called by: */
struct zx_shps_Poll_s* zx_DEEP_CLONE_shps_Poll(struct zx_ctx* c, struct zx_shps_Poll_s* x, int dup_strs)
{
  x = (struct zx_shps_Poll_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zx_shps_Poll_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */

  x->wait = zx_clone_attr(c, x->wait);

  {
      struct zx_a_Action_s* e;
      struct zx_a_Action_s* en;
      struct zx_a_Action_s* enn;
      for (enn = 0, e = x->Action; e; e = (struct zx_a_Action_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_a_Action(c, e, dup_strs);
	  if (!enn)
	      x->Action = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zx_dp_Response_s* e;
      struct zx_dp_Response_s* en;
      struct zx_dp_Response_s* enn;
      for (enn = 0, e = x->Response; e; e = (struct zx_dp_Response_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_dp_Response(c, e, dup_strs);
	  if (!enn)
	      x->Response = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }

  return x;
}

/* FUNC(zx_WALK_SO_shps_Poll) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zx_WALK_SO_shps_Poll(struct zx_ctx* c, struct zx_shps_Poll_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  int ret = callback(&x->gg.g, ctx);
  if (ret)
    return ret;
  
  /* *** deal with xmlns specifications in exc c14n way */


  
  ret = zx_walk_so_unknown_attributes(c, &x->gg, ctx, callback); 
  if (ret)
    return ret;

  {
      struct zx_a_Action_s* e;
      for (e = x->Action; e; e = (struct zx_a_Action_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_a_Action(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zx_dp_Response_s* e;
      for (e = x->Response; e; e = (struct zx_dp_Response_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_dp_Response(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }

  
  return zx_walk_so_unknown_elems_and_content(c, &x->gg, ctx, callback);
}

/* FUNC(zx_WALK_WO_shps_Poll) */

int zx_WALK_WO_shps_Poll(struct zx_ctx* c, struct zx_shps_Poll_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   shps_PollResponse
#define EL_STRUCT zx_shps_PollResponse_s
#define EL_NS     shps
#define EL_TAG    PollResponse

/* FUNC(zx_FREE_shps_PollResponse) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

/* Called by: */
void zx_FREE_shps_PollResponse(struct zx_ctx* c, struct zx_shps_PollResponse_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */

  zx_free_attr(c, x->nextPoll, free_strs);

  {
      struct zx_dp_Request_s* e;
      struct zx_dp_Request_s* en;
      for (e = x->Request; e; e = en) {
	  en = (struct zx_dp_Request_s*)e->gg.g.n;
	  zx_FREE_dp_Request(c, e, free_strs);
      }
  }


  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zx_NEW_shps_PollResponse) */

/* Trivial allocator/constructor for the datatype. */

/* Called by: */
struct zx_shps_PollResponse_s* zx_NEW_shps_PollResponse(struct zx_ctx* c)
{
  struct zx_shps_PollResponse_s* x = ZX_ZALLOC(c, struct zx_shps_PollResponse_s);
  x->gg.g.tok = zx_shps_PollResponse_ELEM;
  return x;
}

#ifdef ZX_ENA_AUX

/* FUNC(zx_DUP_STRS_shps_PollResponse) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

/* Called by: */
void zx_DUP_STRS_shps_PollResponse(struct zx_ctx* c, struct zx_shps_PollResponse_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */

  zx_dup_attr(c, x->nextPoll);

  {
      struct zx_dp_Request_s* e;
      for (e = x->Request; e; e = (struct zx_dp_Request_s*)e->gg.g.n)
	  zx_DUP_STRS_dp_Request(c, e);
  }

}

/* FUNC(zx_DEEP_CLONE_shps_PollResponse) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

/* Called by: */
struct zx_shps_PollResponse_s* zx_DEEP_CLONE_shps_PollResponse(struct zx_ctx* c, struct zx_shps_PollResponse_s* x, int dup_strs)
{
  x = (struct zx_shps_PollResponse_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zx_shps_PollResponse_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */

  x->nextPoll = zx_clone_attr(c, x->nextPoll);

  {
      struct zx_dp_Request_s* e;
      struct zx_dp_Request_s* en;
      struct zx_dp_Request_s* enn;
      for (enn = 0, e = x->Request; e; e = (struct zx_dp_Request_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_dp_Request(c, e, dup_strs);
	  if (!enn)
	      x->Request = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }

  return x;
}

/* FUNC(zx_WALK_SO_shps_PollResponse) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zx_WALK_SO_shps_PollResponse(struct zx_ctx* c, struct zx_shps_PollResponse_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  int ret = callback(&x->gg.g, ctx);
  if (ret)
    return ret;
  
  /* *** deal with xmlns specifications in exc c14n way */


  
  ret = zx_walk_so_unknown_attributes(c, &x->gg, ctx, callback); 
  if (ret)
    return ret;

  {
      struct zx_dp_Request_s* e;
      for (e = x->Request; e; e = (struct zx_dp_Request_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_dp_Request(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }

  
  return zx_walk_so_unknown_elems_and_content(c, &x->gg, ctx, callback);
}

/* FUNC(zx_WALK_WO_shps_PollResponse) */

int zx_WALK_WO_shps_PollResponse(struct zx_ctx* c, struct zx_shps_PollResponse_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   shps_ProxyInvoke
#define EL_STRUCT zx_shps_ProxyInvoke_s
#define EL_NS     shps
#define EL_TAG    ProxyInvoke

/* FUNC(zx_FREE_shps_ProxyInvoke) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

/* Called by: */
void zx_FREE_shps_ProxyInvoke(struct zx_ctx* c, struct zx_shps_ProxyInvoke_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */


  {
      struct zx_shps_ProxyInvokeItem_s* e;
      struct zx_shps_ProxyInvokeItem_s* en;
      for (e = x->ProxyInvokeItem; e; e = en) {
	  en = (struct zx_shps_ProxyInvokeItem_s*)e->gg.g.n;
	  zx_FREE_shps_ProxyInvokeItem(c, e, free_strs);
      }
  }


  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zx_NEW_shps_ProxyInvoke) */

/* Trivial allocator/constructor for the datatype. */

/* Called by: */
struct zx_shps_ProxyInvoke_s* zx_NEW_shps_ProxyInvoke(struct zx_ctx* c)
{
  struct zx_shps_ProxyInvoke_s* x = ZX_ZALLOC(c, struct zx_shps_ProxyInvoke_s);
  x->gg.g.tok = zx_shps_ProxyInvoke_ELEM;
  return x;
}

#ifdef ZX_ENA_AUX

/* FUNC(zx_DUP_STRS_shps_ProxyInvoke) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

/* Called by: */
void zx_DUP_STRS_shps_ProxyInvoke(struct zx_ctx* c, struct zx_shps_ProxyInvoke_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */


  {
      struct zx_shps_ProxyInvokeItem_s* e;
      for (e = x->ProxyInvokeItem; e; e = (struct zx_shps_ProxyInvokeItem_s*)e->gg.g.n)
	  zx_DUP_STRS_shps_ProxyInvokeItem(c, e);
  }

}

/* FUNC(zx_DEEP_CLONE_shps_ProxyInvoke) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

/* Called by: */
struct zx_shps_ProxyInvoke_s* zx_DEEP_CLONE_shps_ProxyInvoke(struct zx_ctx* c, struct zx_shps_ProxyInvoke_s* x, int dup_strs)
{
  x = (struct zx_shps_ProxyInvoke_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zx_shps_ProxyInvoke_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */


  {
      struct zx_shps_ProxyInvokeItem_s* e;
      struct zx_shps_ProxyInvokeItem_s* en;
      struct zx_shps_ProxyInvokeItem_s* enn;
      for (enn = 0, e = x->ProxyInvokeItem; e; e = (struct zx_shps_ProxyInvokeItem_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_shps_ProxyInvokeItem(c, e, dup_strs);
	  if (!enn)
	      x->ProxyInvokeItem = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }

  return x;
}

/* FUNC(zx_WALK_SO_shps_ProxyInvoke) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zx_WALK_SO_shps_ProxyInvoke(struct zx_ctx* c, struct zx_shps_ProxyInvoke_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  int ret = callback(&x->gg.g, ctx);
  if (ret)
    return ret;
  
  /* *** deal with xmlns specifications in exc c14n way */


  
  ret = zx_walk_so_unknown_attributes(c, &x->gg, ctx, callback); 
  if (ret)
    return ret;

  {
      struct zx_shps_ProxyInvokeItem_s* e;
      for (e = x->ProxyInvokeItem; e; e = (struct zx_shps_ProxyInvokeItem_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_shps_ProxyInvokeItem(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }

  
  return zx_walk_so_unknown_elems_and_content(c, &x->gg, ctx, callback);
}

/* FUNC(zx_WALK_WO_shps_ProxyInvoke) */

int zx_WALK_WO_shps_ProxyInvoke(struct zx_ctx* c, struct zx_shps_ProxyInvoke_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   shps_ProxyInvokeItem
#define EL_STRUCT zx_shps_ProxyInvokeItem_s
#define EL_NS     shps
#define EL_TAG    ProxyInvokeItem

/* FUNC(zx_FREE_shps_ProxyInvokeItem) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

/* Called by: */
void zx_FREE_shps_ProxyInvokeItem(struct zx_ctx* c, struct zx_shps_ProxyInvokeItem_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */

  zx_free_attr(c, x->itemID, free_strs);

  zx_free_simple_elems(c, x->ServiceHandle, free_strs);
  {
      struct zx_shps_InvocationContext_s* e;
      struct zx_shps_InvocationContext_s* en;
      for (e = x->InvocationContext; e; e = en) {
	  en = (struct zx_shps_InvocationContext_s*)e->gg.g.n;
	  zx_FREE_shps_InvocationContext(c, e, free_strs);
      }
  }
  zx_free_simple_elems(c, x->RequestHeaders, free_strs);


  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zx_NEW_shps_ProxyInvokeItem) */

/* Trivial allocator/constructor for the datatype. */

/* Called by: */
struct zx_shps_ProxyInvokeItem_s* zx_NEW_shps_ProxyInvokeItem(struct zx_ctx* c)
{
  struct zx_shps_ProxyInvokeItem_s* x = ZX_ZALLOC(c, struct zx_shps_ProxyInvokeItem_s);
  x->gg.g.tok = zx_shps_ProxyInvokeItem_ELEM;
  return x;
}

#ifdef ZX_ENA_AUX

/* FUNC(zx_DUP_STRS_shps_ProxyInvokeItem) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

/* Called by: */
void zx_DUP_STRS_shps_ProxyInvokeItem(struct zx_ctx* c, struct zx_shps_ProxyInvokeItem_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */

  zx_dup_attr(c, x->itemID);

  zx_dup_strs_simple_elems(c, x->ServiceHandle);
  {
      struct zx_shps_InvocationContext_s* e;
      for (e = x->InvocationContext; e; e = (struct zx_shps_InvocationContext_s*)e->gg.g.n)
	  zx_DUP_STRS_shps_InvocationContext(c, e);
  }
  zx_dup_strs_simple_elems(c, x->RequestHeaders);

}

/* FUNC(zx_DEEP_CLONE_shps_ProxyInvokeItem) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

/* Called by: */
struct zx_shps_ProxyInvokeItem_s* zx_DEEP_CLONE_shps_ProxyInvokeItem(struct zx_ctx* c, struct zx_shps_ProxyInvokeItem_s* x, int dup_strs)
{
  x = (struct zx_shps_ProxyInvokeItem_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zx_shps_ProxyInvokeItem_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */

  x->itemID = zx_clone_attr(c, x->itemID);

  x->ServiceHandle = zx_deep_clone_simple_elems(c,x->ServiceHandle, dup_strs);
  {
      struct zx_shps_InvocationContext_s* e;
      struct zx_shps_InvocationContext_s* en;
      struct zx_shps_InvocationContext_s* enn;
      for (enn = 0, e = x->InvocationContext; e; e = (struct zx_shps_InvocationContext_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_shps_InvocationContext(c, e, dup_strs);
	  if (!enn)
	      x->InvocationContext = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  x->RequestHeaders = zx_deep_clone_simple_elems(c,x->RequestHeaders, dup_strs);

  return x;
}

/* FUNC(zx_WALK_SO_shps_ProxyInvokeItem) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zx_WALK_SO_shps_ProxyInvokeItem(struct zx_ctx* c, struct zx_shps_ProxyInvokeItem_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  int ret = callback(&x->gg.g, ctx);
  if (ret)
    return ret;
  
  /* *** deal with xmlns specifications in exc c14n way */


  
  ret = zx_walk_so_unknown_attributes(c, &x->gg, ctx, callback); 
  if (ret)
    return ret;

  ret = zx_walk_so_simple_elems(c, x->ServiceHandle, ctx, callback);
  if (ret)
    return ret;
  {
      struct zx_shps_InvocationContext_s* e;
      for (e = x->InvocationContext; e; e = (struct zx_shps_InvocationContext_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_shps_InvocationContext(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  ret = zx_walk_so_simple_elems(c, x->RequestHeaders, ctx, callback);
  if (ret)
    return ret;

  
  return zx_walk_so_unknown_elems_and_content(c, &x->gg, ctx, callback);
}

/* FUNC(zx_WALK_WO_shps_ProxyInvokeItem) */

int zx_WALK_WO_shps_ProxyInvokeItem(struct zx_ctx* c, struct zx_shps_ProxyInvokeItem_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   shps_ProxyInvokeResponse
#define EL_STRUCT zx_shps_ProxyInvokeResponse_s
#define EL_NS     shps
#define EL_TAG    ProxyInvokeResponse

/* FUNC(zx_FREE_shps_ProxyInvokeResponse) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

/* Called by: */
void zx_FREE_shps_ProxyInvokeResponse(struct zx_ctx* c, struct zx_shps_ProxyInvokeResponse_s* x, int free_strs)
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
      struct zx_shps_ProxyInvokeResponseItem_s* e;
      struct zx_shps_ProxyInvokeResponseItem_s* en;
      for (e = x->ProxyInvokeResponseItem; e; e = en) {
	  en = (struct zx_shps_ProxyInvokeResponseItem_s*)e->gg.g.n;
	  zx_FREE_shps_ProxyInvokeResponseItem(c, e, free_strs);
      }
  }


  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zx_NEW_shps_ProxyInvokeResponse) */

/* Trivial allocator/constructor for the datatype. */

/* Called by: */
struct zx_shps_ProxyInvokeResponse_s* zx_NEW_shps_ProxyInvokeResponse(struct zx_ctx* c)
{
  struct zx_shps_ProxyInvokeResponse_s* x = ZX_ZALLOC(c, struct zx_shps_ProxyInvokeResponse_s);
  x->gg.g.tok = zx_shps_ProxyInvokeResponse_ELEM;
  return x;
}

#ifdef ZX_ENA_AUX

/* FUNC(zx_DUP_STRS_shps_ProxyInvokeResponse) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

/* Called by: */
void zx_DUP_STRS_shps_ProxyInvokeResponse(struct zx_ctx* c, struct zx_shps_ProxyInvokeResponse_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */


  {
      struct zx_lu_Status_s* e;
      for (e = x->Status; e; e = (struct zx_lu_Status_s*)e->gg.g.n)
	  zx_DUP_STRS_lu_Status(c, e);
  }
  {
      struct zx_shps_ProxyInvokeResponseItem_s* e;
      for (e = x->ProxyInvokeResponseItem; e; e = (struct zx_shps_ProxyInvokeResponseItem_s*)e->gg.g.n)
	  zx_DUP_STRS_shps_ProxyInvokeResponseItem(c, e);
  }

}

/* FUNC(zx_DEEP_CLONE_shps_ProxyInvokeResponse) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

/* Called by: */
struct zx_shps_ProxyInvokeResponse_s* zx_DEEP_CLONE_shps_ProxyInvokeResponse(struct zx_ctx* c, struct zx_shps_ProxyInvokeResponse_s* x, int dup_strs)
{
  x = (struct zx_shps_ProxyInvokeResponse_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zx_shps_ProxyInvokeResponse_s), dup_strs);
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
      struct zx_shps_ProxyInvokeResponseItem_s* e;
      struct zx_shps_ProxyInvokeResponseItem_s* en;
      struct zx_shps_ProxyInvokeResponseItem_s* enn;
      for (enn = 0, e = x->ProxyInvokeResponseItem; e; e = (struct zx_shps_ProxyInvokeResponseItem_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_shps_ProxyInvokeResponseItem(c, e, dup_strs);
	  if (!enn)
	      x->ProxyInvokeResponseItem = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }

  return x;
}

/* FUNC(zx_WALK_SO_shps_ProxyInvokeResponse) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zx_WALK_SO_shps_ProxyInvokeResponse(struct zx_ctx* c, struct zx_shps_ProxyInvokeResponse_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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
      struct zx_shps_ProxyInvokeResponseItem_s* e;
      for (e = x->ProxyInvokeResponseItem; e; e = (struct zx_shps_ProxyInvokeResponseItem_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_shps_ProxyInvokeResponseItem(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }

  
  return zx_walk_so_unknown_elems_and_content(c, &x->gg, ctx, callback);
}

/* FUNC(zx_WALK_WO_shps_ProxyInvokeResponse) */

int zx_WALK_WO_shps_ProxyInvokeResponse(struct zx_ctx* c, struct zx_shps_ProxyInvokeResponse_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   shps_ProxyInvokeResponseItem
#define EL_STRUCT zx_shps_ProxyInvokeResponseItem_s
#define EL_NS     shps
#define EL_TAG    ProxyInvokeResponseItem

/* FUNC(zx_FREE_shps_ProxyInvokeResponseItem) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

/* Called by: */
void zx_FREE_shps_ProxyInvokeResponseItem(struct zx_ctx* c, struct zx_shps_ProxyInvokeResponseItem_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */

  zx_free_attr(c, x->ref, free_strs);

  zx_free_simple_elems(c, x->ServiceHandle, free_strs);
  zx_free_simple_elems(c, x->ResponseHeaders, free_strs);


  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zx_NEW_shps_ProxyInvokeResponseItem) */

/* Trivial allocator/constructor for the datatype. */

/* Called by: */
struct zx_shps_ProxyInvokeResponseItem_s* zx_NEW_shps_ProxyInvokeResponseItem(struct zx_ctx* c)
{
  struct zx_shps_ProxyInvokeResponseItem_s* x = ZX_ZALLOC(c, struct zx_shps_ProxyInvokeResponseItem_s);
  x->gg.g.tok = zx_shps_ProxyInvokeResponseItem_ELEM;
  return x;
}

#ifdef ZX_ENA_AUX

/* FUNC(zx_DUP_STRS_shps_ProxyInvokeResponseItem) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

/* Called by: */
void zx_DUP_STRS_shps_ProxyInvokeResponseItem(struct zx_ctx* c, struct zx_shps_ProxyInvokeResponseItem_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */

  zx_dup_attr(c, x->ref);

  zx_dup_strs_simple_elems(c, x->ServiceHandle);
  zx_dup_strs_simple_elems(c, x->ResponseHeaders);

}

/* FUNC(zx_DEEP_CLONE_shps_ProxyInvokeResponseItem) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

/* Called by: */
struct zx_shps_ProxyInvokeResponseItem_s* zx_DEEP_CLONE_shps_ProxyInvokeResponseItem(struct zx_ctx* c, struct zx_shps_ProxyInvokeResponseItem_s* x, int dup_strs)
{
  x = (struct zx_shps_ProxyInvokeResponseItem_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zx_shps_ProxyInvokeResponseItem_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */

  x->ref = zx_clone_attr(c, x->ref);

  x->ServiceHandle = zx_deep_clone_simple_elems(c,x->ServiceHandle, dup_strs);
  x->ResponseHeaders = zx_deep_clone_simple_elems(c,x->ResponseHeaders, dup_strs);

  return x;
}

/* FUNC(zx_WALK_SO_shps_ProxyInvokeResponseItem) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zx_WALK_SO_shps_ProxyInvokeResponseItem(struct zx_ctx* c, struct zx_shps_ProxyInvokeResponseItem_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  int ret = callback(&x->gg.g, ctx);
  if (ret)
    return ret;
  
  /* *** deal with xmlns specifications in exc c14n way */


  
  ret = zx_walk_so_unknown_attributes(c, &x->gg, ctx, callback); 
  if (ret)
    return ret;

  ret = zx_walk_so_simple_elems(c, x->ServiceHandle, ctx, callback);
  if (ret)
    return ret;
  ret = zx_walk_so_simple_elems(c, x->ResponseHeaders, ctx, callback);
  if (ret)
    return ret;

  
  return zx_walk_so_unknown_elems_and_content(c, &x->gg, ctx, callback);
}

/* FUNC(zx_WALK_WO_shps_ProxyInvokeResponseItem) */

int zx_WALK_WO_shps_ProxyInvokeResponseItem(struct zx_ctx* c, struct zx_shps_ProxyInvokeResponseItem_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   shps_Query
#define EL_STRUCT zx_shps_Query_s
#define EL_NS     shps
#define EL_TAG    Query

/* FUNC(zx_FREE_shps_Query) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

/* Called by: */
void zx_FREE_shps_Query(struct zx_ctx* c, struct zx_shps_Query_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */


  {
      struct zx_di_RequestedService_s* e;
      struct zx_di_RequestedService_s* en;
      for (e = x->RequestedService; e; e = en) {
	  en = (struct zx_di_RequestedService_s*)e->gg.g.n;
	  zx_FREE_di_RequestedService(c, e, free_strs);
      }
  }


  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zx_NEW_shps_Query) */

/* Trivial allocator/constructor for the datatype. */

/* Called by: */
struct zx_shps_Query_s* zx_NEW_shps_Query(struct zx_ctx* c)
{
  struct zx_shps_Query_s* x = ZX_ZALLOC(c, struct zx_shps_Query_s);
  x->gg.g.tok = zx_shps_Query_ELEM;
  return x;
}

#ifdef ZX_ENA_AUX

/* FUNC(zx_DUP_STRS_shps_Query) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

/* Called by: */
void zx_DUP_STRS_shps_Query(struct zx_ctx* c, struct zx_shps_Query_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */


  {
      struct zx_di_RequestedService_s* e;
      for (e = x->RequestedService; e; e = (struct zx_di_RequestedService_s*)e->gg.g.n)
	  zx_DUP_STRS_di_RequestedService(c, e);
  }

}

/* FUNC(zx_DEEP_CLONE_shps_Query) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

/* Called by: */
struct zx_shps_Query_s* zx_DEEP_CLONE_shps_Query(struct zx_ctx* c, struct zx_shps_Query_s* x, int dup_strs)
{
  x = (struct zx_shps_Query_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zx_shps_Query_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */


  {
      struct zx_di_RequestedService_s* e;
      struct zx_di_RequestedService_s* en;
      struct zx_di_RequestedService_s* enn;
      for (enn = 0, e = x->RequestedService; e; e = (struct zx_di_RequestedService_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_di_RequestedService(c, e, dup_strs);
	  if (!enn)
	      x->RequestedService = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }

  return x;
}

/* FUNC(zx_WALK_SO_shps_Query) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zx_WALK_SO_shps_Query(struct zx_ctx* c, struct zx_shps_Query_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  int ret = callback(&x->gg.g, ctx);
  if (ret)
    return ret;
  
  /* *** deal with xmlns specifications in exc c14n way */


  
  ret = zx_walk_so_unknown_attributes(c, &x->gg, ctx, callback); 
  if (ret)
    return ret;

  {
      struct zx_di_RequestedService_s* e;
      for (e = x->RequestedService; e; e = (struct zx_di_RequestedService_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_di_RequestedService(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }

  
  return zx_walk_so_unknown_elems_and_content(c, &x->gg, ctx, callback);
}

/* FUNC(zx_WALK_WO_shps_Query) */

int zx_WALK_WO_shps_Query(struct zx_ctx* c, struct zx_shps_Query_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   shps_QueryRegistered
#define EL_STRUCT zx_shps_QueryRegistered_s
#define EL_NS     shps
#define EL_TAG    QueryRegistered

/* FUNC(zx_FREE_shps_QueryRegistered) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

/* Called by: */
void zx_FREE_shps_QueryRegistered(struct zx_ctx* c, struct zx_shps_QueryRegistered_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */


  zx_free_simple_elems(c, x->ServiceHandle, free_strs);


  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zx_NEW_shps_QueryRegistered) */

/* Trivial allocator/constructor for the datatype. */

/* Called by: */
struct zx_shps_QueryRegistered_s* zx_NEW_shps_QueryRegistered(struct zx_ctx* c)
{
  struct zx_shps_QueryRegistered_s* x = ZX_ZALLOC(c, struct zx_shps_QueryRegistered_s);
  x->gg.g.tok = zx_shps_QueryRegistered_ELEM;
  return x;
}

#ifdef ZX_ENA_AUX

/* FUNC(zx_DUP_STRS_shps_QueryRegistered) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

/* Called by: */
void zx_DUP_STRS_shps_QueryRegistered(struct zx_ctx* c, struct zx_shps_QueryRegistered_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */


  zx_dup_strs_simple_elems(c, x->ServiceHandle);

}

/* FUNC(zx_DEEP_CLONE_shps_QueryRegistered) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

/* Called by: */
struct zx_shps_QueryRegistered_s* zx_DEEP_CLONE_shps_QueryRegistered(struct zx_ctx* c, struct zx_shps_QueryRegistered_s* x, int dup_strs)
{
  x = (struct zx_shps_QueryRegistered_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zx_shps_QueryRegistered_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */


  x->ServiceHandle = zx_deep_clone_simple_elems(c,x->ServiceHandle, dup_strs);

  return x;
}

/* FUNC(zx_WALK_SO_shps_QueryRegistered) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zx_WALK_SO_shps_QueryRegistered(struct zx_ctx* c, struct zx_shps_QueryRegistered_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  int ret = callback(&x->gg.g, ctx);
  if (ret)
    return ret;
  
  /* *** deal with xmlns specifications in exc c14n way */


  
  ret = zx_walk_so_unknown_attributes(c, &x->gg, ctx, callback); 
  if (ret)
    return ret;

  ret = zx_walk_so_simple_elems(c, x->ServiceHandle, ctx, callback);
  if (ret)
    return ret;

  
  return zx_walk_so_unknown_elems_and_content(c, &x->gg, ctx, callback);
}

/* FUNC(zx_WALK_WO_shps_QueryRegistered) */

int zx_WALK_WO_shps_QueryRegistered(struct zx_ctx* c, struct zx_shps_QueryRegistered_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   shps_QueryRegisteredResponse
#define EL_STRUCT zx_shps_QueryRegisteredResponse_s
#define EL_NS     shps
#define EL_TAG    QueryRegisteredResponse

/* FUNC(zx_FREE_shps_QueryRegisteredResponse) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

/* Called by: */
void zx_FREE_shps_QueryRegisteredResponse(struct zx_ctx* c, struct zx_shps_QueryRegisteredResponse_s* x, int free_strs)
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
      struct zx_a_EndpointReference_s* e;
      struct zx_a_EndpointReference_s* en;
      for (e = x->EndpointReference; e; e = en) {
	  en = (struct zx_a_EndpointReference_s*)e->gg.g.n;
	  zx_FREE_a_EndpointReference(c, e, free_strs);
      }
  }


  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zx_NEW_shps_QueryRegisteredResponse) */

/* Trivial allocator/constructor for the datatype. */

/* Called by: */
struct zx_shps_QueryRegisteredResponse_s* zx_NEW_shps_QueryRegisteredResponse(struct zx_ctx* c)
{
  struct zx_shps_QueryRegisteredResponse_s* x = ZX_ZALLOC(c, struct zx_shps_QueryRegisteredResponse_s);
  x->gg.g.tok = zx_shps_QueryRegisteredResponse_ELEM;
  return x;
}

#ifdef ZX_ENA_AUX

/* FUNC(zx_DUP_STRS_shps_QueryRegisteredResponse) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

/* Called by: */
void zx_DUP_STRS_shps_QueryRegisteredResponse(struct zx_ctx* c, struct zx_shps_QueryRegisteredResponse_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */


  {
      struct zx_lu_Status_s* e;
      for (e = x->Status; e; e = (struct zx_lu_Status_s*)e->gg.g.n)
	  zx_DUP_STRS_lu_Status(c, e);
  }
  {
      struct zx_a_EndpointReference_s* e;
      for (e = x->EndpointReference; e; e = (struct zx_a_EndpointReference_s*)e->gg.g.n)
	  zx_DUP_STRS_a_EndpointReference(c, e);
  }

}

/* FUNC(zx_DEEP_CLONE_shps_QueryRegisteredResponse) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

/* Called by: */
struct zx_shps_QueryRegisteredResponse_s* zx_DEEP_CLONE_shps_QueryRegisteredResponse(struct zx_ctx* c, struct zx_shps_QueryRegisteredResponse_s* x, int dup_strs)
{
  x = (struct zx_shps_QueryRegisteredResponse_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zx_shps_QueryRegisteredResponse_s), dup_strs);
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
      struct zx_a_EndpointReference_s* e;
      struct zx_a_EndpointReference_s* en;
      struct zx_a_EndpointReference_s* enn;
      for (enn = 0, e = x->EndpointReference; e; e = (struct zx_a_EndpointReference_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_a_EndpointReference(c, e, dup_strs);
	  if (!enn)
	      x->EndpointReference = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }

  return x;
}

/* FUNC(zx_WALK_SO_shps_QueryRegisteredResponse) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zx_WALK_SO_shps_QueryRegisteredResponse(struct zx_ctx* c, struct zx_shps_QueryRegisteredResponse_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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
      struct zx_a_EndpointReference_s* e;
      for (e = x->EndpointReference; e; e = (struct zx_a_EndpointReference_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_a_EndpointReference(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }

  
  return zx_walk_so_unknown_elems_and_content(c, &x->gg, ctx, callback);
}

/* FUNC(zx_WALK_WO_shps_QueryRegisteredResponse) */

int zx_WALK_WO_shps_QueryRegisteredResponse(struct zx_ctx* c, struct zx_shps_QueryRegisteredResponse_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   shps_QueryResponse
#define EL_STRUCT zx_shps_QueryResponse_s
#define EL_NS     shps
#define EL_TAG    QueryResponse

/* FUNC(zx_FREE_shps_QueryResponse) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

/* Called by: */
void zx_FREE_shps_QueryResponse(struct zx_ctx* c, struct zx_shps_QueryResponse_s* x, int free_strs)
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
      struct zx_a_EndpointReference_s* e;
      struct zx_a_EndpointReference_s* en;
      for (e = x->EndpointReference; e; e = en) {
	  en = (struct zx_a_EndpointReference_s*)e->gg.g.n;
	  zx_FREE_a_EndpointReference(c, e, free_strs);
      }
  }


  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zx_NEW_shps_QueryResponse) */

/* Trivial allocator/constructor for the datatype. */

/* Called by: */
struct zx_shps_QueryResponse_s* zx_NEW_shps_QueryResponse(struct zx_ctx* c)
{
  struct zx_shps_QueryResponse_s* x = ZX_ZALLOC(c, struct zx_shps_QueryResponse_s);
  x->gg.g.tok = zx_shps_QueryResponse_ELEM;
  return x;
}

#ifdef ZX_ENA_AUX

/* FUNC(zx_DUP_STRS_shps_QueryResponse) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

/* Called by: */
void zx_DUP_STRS_shps_QueryResponse(struct zx_ctx* c, struct zx_shps_QueryResponse_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */


  {
      struct zx_lu_Status_s* e;
      for (e = x->Status; e; e = (struct zx_lu_Status_s*)e->gg.g.n)
	  zx_DUP_STRS_lu_Status(c, e);
  }
  {
      struct zx_a_EndpointReference_s* e;
      for (e = x->EndpointReference; e; e = (struct zx_a_EndpointReference_s*)e->gg.g.n)
	  zx_DUP_STRS_a_EndpointReference(c, e);
  }

}

/* FUNC(zx_DEEP_CLONE_shps_QueryResponse) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

/* Called by: */
struct zx_shps_QueryResponse_s* zx_DEEP_CLONE_shps_QueryResponse(struct zx_ctx* c, struct zx_shps_QueryResponse_s* x, int dup_strs)
{
  x = (struct zx_shps_QueryResponse_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zx_shps_QueryResponse_s), dup_strs);
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
      struct zx_a_EndpointReference_s* e;
      struct zx_a_EndpointReference_s* en;
      struct zx_a_EndpointReference_s* enn;
      for (enn = 0, e = x->EndpointReference; e; e = (struct zx_a_EndpointReference_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_a_EndpointReference(c, e, dup_strs);
	  if (!enn)
	      x->EndpointReference = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }

  return x;
}

/* FUNC(zx_WALK_SO_shps_QueryResponse) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zx_WALK_SO_shps_QueryResponse(struct zx_ctx* c, struct zx_shps_QueryResponse_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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
      struct zx_a_EndpointReference_s* e;
      for (e = x->EndpointReference; e; e = (struct zx_a_EndpointReference_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_a_EndpointReference(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }

  
  return zx_walk_so_unknown_elems_and_content(c, &x->gg, ctx, callback);
}

/* FUNC(zx_WALK_WO_shps_QueryResponse) */

int zx_WALK_WO_shps_QueryResponse(struct zx_ctx* c, struct zx_shps_QueryResponse_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   shps_Register
#define EL_STRUCT zx_shps_Register_s
#define EL_NS     shps
#define EL_TAG    Register

/* FUNC(zx_FREE_shps_Register) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

/* Called by: */
void zx_FREE_shps_Register(struct zx_ctx* c, struct zx_shps_Register_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */


  {
      struct zx_a_EndpointReference_s* e;
      struct zx_a_EndpointReference_s* en;
      for (e = x->EndpointReference; e; e = en) {
	  en = (struct zx_a_EndpointReference_s*)e->gg.g.n;
	  zx_FREE_a_EndpointReference(c, e, free_strs);
      }
  }


  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zx_NEW_shps_Register) */

/* Trivial allocator/constructor for the datatype. */

/* Called by: */
struct zx_shps_Register_s* zx_NEW_shps_Register(struct zx_ctx* c)
{
  struct zx_shps_Register_s* x = ZX_ZALLOC(c, struct zx_shps_Register_s);
  x->gg.g.tok = zx_shps_Register_ELEM;
  return x;
}

#ifdef ZX_ENA_AUX

/* FUNC(zx_DUP_STRS_shps_Register) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

/* Called by: */
void zx_DUP_STRS_shps_Register(struct zx_ctx* c, struct zx_shps_Register_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */


  {
      struct zx_a_EndpointReference_s* e;
      for (e = x->EndpointReference; e; e = (struct zx_a_EndpointReference_s*)e->gg.g.n)
	  zx_DUP_STRS_a_EndpointReference(c, e);
  }

}

/* FUNC(zx_DEEP_CLONE_shps_Register) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

/* Called by: */
struct zx_shps_Register_s* zx_DEEP_CLONE_shps_Register(struct zx_ctx* c, struct zx_shps_Register_s* x, int dup_strs)
{
  x = (struct zx_shps_Register_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zx_shps_Register_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */


  {
      struct zx_a_EndpointReference_s* e;
      struct zx_a_EndpointReference_s* en;
      struct zx_a_EndpointReference_s* enn;
      for (enn = 0, e = x->EndpointReference; e; e = (struct zx_a_EndpointReference_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_a_EndpointReference(c, e, dup_strs);
	  if (!enn)
	      x->EndpointReference = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }

  return x;
}

/* FUNC(zx_WALK_SO_shps_Register) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zx_WALK_SO_shps_Register(struct zx_ctx* c, struct zx_shps_Register_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  int ret = callback(&x->gg.g, ctx);
  if (ret)
    return ret;
  
  /* *** deal with xmlns specifications in exc c14n way */


  
  ret = zx_walk_so_unknown_attributes(c, &x->gg, ctx, callback); 
  if (ret)
    return ret;

  {
      struct zx_a_EndpointReference_s* e;
      for (e = x->EndpointReference; e; e = (struct zx_a_EndpointReference_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_a_EndpointReference(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }

  
  return zx_walk_so_unknown_elems_and_content(c, &x->gg, ctx, callback);
}

/* FUNC(zx_WALK_WO_shps_Register) */

int zx_WALK_WO_shps_Register(struct zx_ctx* c, struct zx_shps_Register_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   shps_RegisterResponse
#define EL_STRUCT zx_shps_RegisterResponse_s
#define EL_NS     shps
#define EL_TAG    RegisterResponse

/* FUNC(zx_FREE_shps_RegisterResponse) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

/* Called by: */
void zx_FREE_shps_RegisterResponse(struct zx_ctx* c, struct zx_shps_RegisterResponse_s* x, int free_strs)
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
      struct zx_shps_RegisterResponseItem_s* e;
      struct zx_shps_RegisterResponseItem_s* en;
      for (e = x->RegisterResponseItem; e; e = en) {
	  en = (struct zx_shps_RegisterResponseItem_s*)e->gg.g.n;
	  zx_FREE_shps_RegisterResponseItem(c, e, free_strs);
      }
  }


  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zx_NEW_shps_RegisterResponse) */

/* Trivial allocator/constructor for the datatype. */

/* Called by: */
struct zx_shps_RegisterResponse_s* zx_NEW_shps_RegisterResponse(struct zx_ctx* c)
{
  struct zx_shps_RegisterResponse_s* x = ZX_ZALLOC(c, struct zx_shps_RegisterResponse_s);
  x->gg.g.tok = zx_shps_RegisterResponse_ELEM;
  return x;
}

#ifdef ZX_ENA_AUX

/* FUNC(zx_DUP_STRS_shps_RegisterResponse) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

/* Called by: */
void zx_DUP_STRS_shps_RegisterResponse(struct zx_ctx* c, struct zx_shps_RegisterResponse_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */


  {
      struct zx_lu_Status_s* e;
      for (e = x->Status; e; e = (struct zx_lu_Status_s*)e->gg.g.n)
	  zx_DUP_STRS_lu_Status(c, e);
  }
  {
      struct zx_shps_RegisterResponseItem_s* e;
      for (e = x->RegisterResponseItem; e; e = (struct zx_shps_RegisterResponseItem_s*)e->gg.g.n)
	  zx_DUP_STRS_shps_RegisterResponseItem(c, e);
  }

}

/* FUNC(zx_DEEP_CLONE_shps_RegisterResponse) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

/* Called by: */
struct zx_shps_RegisterResponse_s* zx_DEEP_CLONE_shps_RegisterResponse(struct zx_ctx* c, struct zx_shps_RegisterResponse_s* x, int dup_strs)
{
  x = (struct zx_shps_RegisterResponse_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zx_shps_RegisterResponse_s), dup_strs);
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
      struct zx_shps_RegisterResponseItem_s* e;
      struct zx_shps_RegisterResponseItem_s* en;
      struct zx_shps_RegisterResponseItem_s* enn;
      for (enn = 0, e = x->RegisterResponseItem; e; e = (struct zx_shps_RegisterResponseItem_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_shps_RegisterResponseItem(c, e, dup_strs);
	  if (!enn)
	      x->RegisterResponseItem = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }

  return x;
}

/* FUNC(zx_WALK_SO_shps_RegisterResponse) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zx_WALK_SO_shps_RegisterResponse(struct zx_ctx* c, struct zx_shps_RegisterResponse_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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
      struct zx_shps_RegisterResponseItem_s* e;
      for (e = x->RegisterResponseItem; e; e = (struct zx_shps_RegisterResponseItem_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_shps_RegisterResponseItem(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }

  
  return zx_walk_so_unknown_elems_and_content(c, &x->gg, ctx, callback);
}

/* FUNC(zx_WALK_WO_shps_RegisterResponse) */

int zx_WALK_WO_shps_RegisterResponse(struct zx_ctx* c, struct zx_shps_RegisterResponse_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   shps_RegisterResponseItem
#define EL_STRUCT zx_shps_RegisterResponseItem_s
#define EL_NS     shps
#define EL_TAG    RegisterResponseItem

/* FUNC(zx_FREE_shps_RegisterResponseItem) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

/* Called by: */
void zx_FREE_shps_RegisterResponseItem(struct zx_ctx* c, struct zx_shps_RegisterResponseItem_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */

  zx_free_attr(c, x->ref, free_strs);

  zx_free_simple_elems(c, x->ServiceHandle, free_strs);


  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zx_NEW_shps_RegisterResponseItem) */

/* Trivial allocator/constructor for the datatype. */

/* Called by: */
struct zx_shps_RegisterResponseItem_s* zx_NEW_shps_RegisterResponseItem(struct zx_ctx* c)
{
  struct zx_shps_RegisterResponseItem_s* x = ZX_ZALLOC(c, struct zx_shps_RegisterResponseItem_s);
  x->gg.g.tok = zx_shps_RegisterResponseItem_ELEM;
  return x;
}

#ifdef ZX_ENA_AUX

/* FUNC(zx_DUP_STRS_shps_RegisterResponseItem) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

/* Called by: */
void zx_DUP_STRS_shps_RegisterResponseItem(struct zx_ctx* c, struct zx_shps_RegisterResponseItem_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */

  zx_dup_attr(c, x->ref);

  zx_dup_strs_simple_elems(c, x->ServiceHandle);

}

/* FUNC(zx_DEEP_CLONE_shps_RegisterResponseItem) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

/* Called by: */
struct zx_shps_RegisterResponseItem_s* zx_DEEP_CLONE_shps_RegisterResponseItem(struct zx_ctx* c, struct zx_shps_RegisterResponseItem_s* x, int dup_strs)
{
  x = (struct zx_shps_RegisterResponseItem_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zx_shps_RegisterResponseItem_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */

  x->ref = zx_clone_attr(c, x->ref);

  x->ServiceHandle = zx_deep_clone_simple_elems(c,x->ServiceHandle, dup_strs);

  return x;
}

/* FUNC(zx_WALK_SO_shps_RegisterResponseItem) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zx_WALK_SO_shps_RegisterResponseItem(struct zx_ctx* c, struct zx_shps_RegisterResponseItem_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  int ret = callback(&x->gg.g, ctx);
  if (ret)
    return ret;
  
  /* *** deal with xmlns specifications in exc c14n way */


  
  ret = zx_walk_so_unknown_attributes(c, &x->gg, ctx, callback); 
  if (ret)
    return ret;

  ret = zx_walk_so_simple_elems(c, x->ServiceHandle, ctx, callback);
  if (ret)
    return ret;

  
  return zx_walk_so_unknown_elems_and_content(c, &x->gg, ctx, callback);
}

/* FUNC(zx_WALK_WO_shps_RegisterResponseItem) */

int zx_WALK_WO_shps_RegisterResponseItem(struct zx_ctx* c, struct zx_shps_RegisterResponseItem_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   shps_SetStatus
#define EL_STRUCT zx_shps_SetStatus_s
#define EL_NS     shps
#define EL_TAG    SetStatus

/* FUNC(zx_FREE_shps_SetStatus) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

/* Called by: */
void zx_FREE_shps_SetStatus(struct zx_ctx* c, struct zx_shps_SetStatus_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */


  {
      struct zx_shps_SetStatusItem_s* e;
      struct zx_shps_SetStatusItem_s* en;
      for (e = x->SetStatusItem; e; e = en) {
	  en = (struct zx_shps_SetStatusItem_s*)e->gg.g.n;
	  zx_FREE_shps_SetStatusItem(c, e, free_strs);
      }
  }


  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zx_NEW_shps_SetStatus) */

/* Trivial allocator/constructor for the datatype. */

/* Called by: */
struct zx_shps_SetStatus_s* zx_NEW_shps_SetStatus(struct zx_ctx* c)
{
  struct zx_shps_SetStatus_s* x = ZX_ZALLOC(c, struct zx_shps_SetStatus_s);
  x->gg.g.tok = zx_shps_SetStatus_ELEM;
  return x;
}

#ifdef ZX_ENA_AUX

/* FUNC(zx_DUP_STRS_shps_SetStatus) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

/* Called by: */
void zx_DUP_STRS_shps_SetStatus(struct zx_ctx* c, struct zx_shps_SetStatus_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */


  {
      struct zx_shps_SetStatusItem_s* e;
      for (e = x->SetStatusItem; e; e = (struct zx_shps_SetStatusItem_s*)e->gg.g.n)
	  zx_DUP_STRS_shps_SetStatusItem(c, e);
  }

}

/* FUNC(zx_DEEP_CLONE_shps_SetStatus) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

/* Called by: */
struct zx_shps_SetStatus_s* zx_DEEP_CLONE_shps_SetStatus(struct zx_ctx* c, struct zx_shps_SetStatus_s* x, int dup_strs)
{
  x = (struct zx_shps_SetStatus_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zx_shps_SetStatus_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */


  {
      struct zx_shps_SetStatusItem_s* e;
      struct zx_shps_SetStatusItem_s* en;
      struct zx_shps_SetStatusItem_s* enn;
      for (enn = 0, e = x->SetStatusItem; e; e = (struct zx_shps_SetStatusItem_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_shps_SetStatusItem(c, e, dup_strs);
	  if (!enn)
	      x->SetStatusItem = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }

  return x;
}

/* FUNC(zx_WALK_SO_shps_SetStatus) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zx_WALK_SO_shps_SetStatus(struct zx_ctx* c, struct zx_shps_SetStatus_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  int ret = callback(&x->gg.g, ctx);
  if (ret)
    return ret;
  
  /* *** deal with xmlns specifications in exc c14n way */


  
  ret = zx_walk_so_unknown_attributes(c, &x->gg, ctx, callback); 
  if (ret)
    return ret;

  {
      struct zx_shps_SetStatusItem_s* e;
      for (e = x->SetStatusItem; e; e = (struct zx_shps_SetStatusItem_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_shps_SetStatusItem(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }

  
  return zx_walk_so_unknown_elems_and_content(c, &x->gg, ctx, callback);
}

/* FUNC(zx_WALK_WO_shps_SetStatus) */

int zx_WALK_WO_shps_SetStatus(struct zx_ctx* c, struct zx_shps_SetStatus_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   shps_SetStatusItem
#define EL_STRUCT zx_shps_SetStatusItem_s
#define EL_NS     shps
#define EL_TAG    SetStatusItem

/* FUNC(zx_FREE_shps_SetStatusItem) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

/* Called by: */
void zx_FREE_shps_SetStatusItem(struct zx_ctx* c, struct zx_shps_SetStatusItem_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */

  zx_free_attr(c, x->itemID, free_strs);

  zx_free_simple_elems(c, x->ServiceStatus, free_strs);
  zx_free_simple_elems(c, x->ServiceHandle, free_strs);


  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zx_NEW_shps_SetStatusItem) */

/* Trivial allocator/constructor for the datatype. */

/* Called by: */
struct zx_shps_SetStatusItem_s* zx_NEW_shps_SetStatusItem(struct zx_ctx* c)
{
  struct zx_shps_SetStatusItem_s* x = ZX_ZALLOC(c, struct zx_shps_SetStatusItem_s);
  x->gg.g.tok = zx_shps_SetStatusItem_ELEM;
  return x;
}

#ifdef ZX_ENA_AUX

/* FUNC(zx_DUP_STRS_shps_SetStatusItem) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

/* Called by: */
void zx_DUP_STRS_shps_SetStatusItem(struct zx_ctx* c, struct zx_shps_SetStatusItem_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */

  zx_dup_attr(c, x->itemID);

  zx_dup_strs_simple_elems(c, x->ServiceStatus);
  zx_dup_strs_simple_elems(c, x->ServiceHandle);

}

/* FUNC(zx_DEEP_CLONE_shps_SetStatusItem) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

/* Called by: */
struct zx_shps_SetStatusItem_s* zx_DEEP_CLONE_shps_SetStatusItem(struct zx_ctx* c, struct zx_shps_SetStatusItem_s* x, int dup_strs)
{
  x = (struct zx_shps_SetStatusItem_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zx_shps_SetStatusItem_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */

  x->itemID = zx_clone_attr(c, x->itemID);

  x->ServiceStatus = zx_deep_clone_simple_elems(c,x->ServiceStatus, dup_strs);
  x->ServiceHandle = zx_deep_clone_simple_elems(c,x->ServiceHandle, dup_strs);

  return x;
}

/* FUNC(zx_WALK_SO_shps_SetStatusItem) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zx_WALK_SO_shps_SetStatusItem(struct zx_ctx* c, struct zx_shps_SetStatusItem_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  int ret = callback(&x->gg.g, ctx);
  if (ret)
    return ret;
  
  /* *** deal with xmlns specifications in exc c14n way */


  
  ret = zx_walk_so_unknown_attributes(c, &x->gg, ctx, callback); 
  if (ret)
    return ret;

  ret = zx_walk_so_simple_elems(c, x->ServiceStatus, ctx, callback);
  if (ret)
    return ret;
  ret = zx_walk_so_simple_elems(c, x->ServiceHandle, ctx, callback);
  if (ret)
    return ret;

  
  return zx_walk_so_unknown_elems_and_content(c, &x->gg, ctx, callback);
}

/* FUNC(zx_WALK_WO_shps_SetStatusItem) */

int zx_WALK_WO_shps_SetStatusItem(struct zx_ctx* c, struct zx_shps_SetStatusItem_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   shps_SetStatusResponse
#define EL_STRUCT zx_shps_SetStatusResponse_s
#define EL_NS     shps
#define EL_TAG    SetStatusResponse

/* FUNC(zx_FREE_shps_SetStatusResponse) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

/* Called by: */
void zx_FREE_shps_SetStatusResponse(struct zx_ctx* c, struct zx_shps_SetStatusResponse_s* x, int free_strs)
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


  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zx_NEW_shps_SetStatusResponse) */

/* Trivial allocator/constructor for the datatype. */

/* Called by: */
struct zx_shps_SetStatusResponse_s* zx_NEW_shps_SetStatusResponse(struct zx_ctx* c)
{
  struct zx_shps_SetStatusResponse_s* x = ZX_ZALLOC(c, struct zx_shps_SetStatusResponse_s);
  x->gg.g.tok = zx_shps_SetStatusResponse_ELEM;
  return x;
}

#ifdef ZX_ENA_AUX

/* FUNC(zx_DUP_STRS_shps_SetStatusResponse) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

/* Called by: */
void zx_DUP_STRS_shps_SetStatusResponse(struct zx_ctx* c, struct zx_shps_SetStatusResponse_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */


  {
      struct zx_lu_Status_s* e;
      for (e = x->Status; e; e = (struct zx_lu_Status_s*)e->gg.g.n)
	  zx_DUP_STRS_lu_Status(c, e);
  }

}

/* FUNC(zx_DEEP_CLONE_shps_SetStatusResponse) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

/* Called by: */
struct zx_shps_SetStatusResponse_s* zx_DEEP_CLONE_shps_SetStatusResponse(struct zx_ctx* c, struct zx_shps_SetStatusResponse_s* x, int dup_strs)
{
  x = (struct zx_shps_SetStatusResponse_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zx_shps_SetStatusResponse_s), dup_strs);
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

  return x;
}

/* FUNC(zx_WALK_SO_shps_SetStatusResponse) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zx_WALK_SO_shps_SetStatusResponse(struct zx_ctx* c, struct zx_shps_SetStatusResponse_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

  
  return zx_walk_so_unknown_elems_and_content(c, &x->gg, ctx, callback);
}

/* FUNC(zx_WALK_WO_shps_SetStatusResponse) */

int zx_WALK_WO_shps_SetStatusResponse(struct zx_ctx* c, struct zx_shps_SetStatusResponse_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   shps_Update
#define EL_STRUCT zx_shps_Update_s
#define EL_NS     shps
#define EL_TAG    Update

/* FUNC(zx_FREE_shps_Update) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

/* Called by: */
void zx_FREE_shps_Update(struct zx_ctx* c, struct zx_shps_Update_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */


  {
      struct zx_shps_UpdateItem_s* e;
      struct zx_shps_UpdateItem_s* en;
      for (e = x->UpdateItem; e; e = en) {
	  en = (struct zx_shps_UpdateItem_s*)e->gg.g.n;
	  zx_FREE_shps_UpdateItem(c, e, free_strs);
      }
  }


  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zx_NEW_shps_Update) */

/* Trivial allocator/constructor for the datatype. */

/* Called by: */
struct zx_shps_Update_s* zx_NEW_shps_Update(struct zx_ctx* c)
{
  struct zx_shps_Update_s* x = ZX_ZALLOC(c, struct zx_shps_Update_s);
  x->gg.g.tok = zx_shps_Update_ELEM;
  return x;
}

#ifdef ZX_ENA_AUX

/* FUNC(zx_DUP_STRS_shps_Update) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

/* Called by: */
void zx_DUP_STRS_shps_Update(struct zx_ctx* c, struct zx_shps_Update_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */


  {
      struct zx_shps_UpdateItem_s* e;
      for (e = x->UpdateItem; e; e = (struct zx_shps_UpdateItem_s*)e->gg.g.n)
	  zx_DUP_STRS_shps_UpdateItem(c, e);
  }

}

/* FUNC(zx_DEEP_CLONE_shps_Update) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

/* Called by: */
struct zx_shps_Update_s* zx_DEEP_CLONE_shps_Update(struct zx_ctx* c, struct zx_shps_Update_s* x, int dup_strs)
{
  x = (struct zx_shps_Update_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zx_shps_Update_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */


  {
      struct zx_shps_UpdateItem_s* e;
      struct zx_shps_UpdateItem_s* en;
      struct zx_shps_UpdateItem_s* enn;
      for (enn = 0, e = x->UpdateItem; e; e = (struct zx_shps_UpdateItem_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_shps_UpdateItem(c, e, dup_strs);
	  if (!enn)
	      x->UpdateItem = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }

  return x;
}

/* FUNC(zx_WALK_SO_shps_Update) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zx_WALK_SO_shps_Update(struct zx_ctx* c, struct zx_shps_Update_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  int ret = callback(&x->gg.g, ctx);
  if (ret)
    return ret;
  
  /* *** deal with xmlns specifications in exc c14n way */


  
  ret = zx_walk_so_unknown_attributes(c, &x->gg, ctx, callback); 
  if (ret)
    return ret;

  {
      struct zx_shps_UpdateItem_s* e;
      for (e = x->UpdateItem; e; e = (struct zx_shps_UpdateItem_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_shps_UpdateItem(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }

  
  return zx_walk_so_unknown_elems_and_content(c, &x->gg, ctx, callback);
}

/* FUNC(zx_WALK_WO_shps_Update) */

int zx_WALK_WO_shps_Update(struct zx_ctx* c, struct zx_shps_Update_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   shps_UpdateItem
#define EL_STRUCT zx_shps_UpdateItem_s
#define EL_NS     shps
#define EL_TAG    UpdateItem

/* FUNC(zx_FREE_shps_UpdateItem) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

/* Called by: */
void zx_FREE_shps_UpdateItem(struct zx_ctx* c, struct zx_shps_UpdateItem_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */

  zx_free_attr(c, x->itemID, free_strs);

  zx_free_simple_elems(c, x->ServiceHandle, free_strs);
  {
      struct zx_a_EndpointReference_s* e;
      struct zx_a_EndpointReference_s* en;
      for (e = x->EndpointReference; e; e = en) {
	  en = (struct zx_a_EndpointReference_s*)e->gg.g.n;
	  zx_FREE_a_EndpointReference(c, e, free_strs);
      }
  }


  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zx_NEW_shps_UpdateItem) */

/* Trivial allocator/constructor for the datatype. */

/* Called by: */
struct zx_shps_UpdateItem_s* zx_NEW_shps_UpdateItem(struct zx_ctx* c)
{
  struct zx_shps_UpdateItem_s* x = ZX_ZALLOC(c, struct zx_shps_UpdateItem_s);
  x->gg.g.tok = zx_shps_UpdateItem_ELEM;
  return x;
}

#ifdef ZX_ENA_AUX

/* FUNC(zx_DUP_STRS_shps_UpdateItem) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

/* Called by: */
void zx_DUP_STRS_shps_UpdateItem(struct zx_ctx* c, struct zx_shps_UpdateItem_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */

  zx_dup_attr(c, x->itemID);

  zx_dup_strs_simple_elems(c, x->ServiceHandle);
  {
      struct zx_a_EndpointReference_s* e;
      for (e = x->EndpointReference; e; e = (struct zx_a_EndpointReference_s*)e->gg.g.n)
	  zx_DUP_STRS_a_EndpointReference(c, e);
  }

}

/* FUNC(zx_DEEP_CLONE_shps_UpdateItem) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

/* Called by: */
struct zx_shps_UpdateItem_s* zx_DEEP_CLONE_shps_UpdateItem(struct zx_ctx* c, struct zx_shps_UpdateItem_s* x, int dup_strs)
{
  x = (struct zx_shps_UpdateItem_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zx_shps_UpdateItem_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */

  x->itemID = zx_clone_attr(c, x->itemID);

  x->ServiceHandle = zx_deep_clone_simple_elems(c,x->ServiceHandle, dup_strs);
  {
      struct zx_a_EndpointReference_s* e;
      struct zx_a_EndpointReference_s* en;
      struct zx_a_EndpointReference_s* enn;
      for (enn = 0, e = x->EndpointReference; e; e = (struct zx_a_EndpointReference_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_a_EndpointReference(c, e, dup_strs);
	  if (!enn)
	      x->EndpointReference = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }

  return x;
}

/* FUNC(zx_WALK_SO_shps_UpdateItem) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zx_WALK_SO_shps_UpdateItem(struct zx_ctx* c, struct zx_shps_UpdateItem_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  int ret = callback(&x->gg.g, ctx);
  if (ret)
    return ret;
  
  /* *** deal with xmlns specifications in exc c14n way */


  
  ret = zx_walk_so_unknown_attributes(c, &x->gg, ctx, callback); 
  if (ret)
    return ret;

  ret = zx_walk_so_simple_elems(c, x->ServiceHandle, ctx, callback);
  if (ret)
    return ret;
  {
      struct zx_a_EndpointReference_s* e;
      for (e = x->EndpointReference; e; e = (struct zx_a_EndpointReference_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_a_EndpointReference(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }

  
  return zx_walk_so_unknown_elems_and_content(c, &x->gg, ctx, callback);
}

/* FUNC(zx_WALK_WO_shps_UpdateItem) */

int zx_WALK_WO_shps_UpdateItem(struct zx_ctx* c, struct zx_shps_UpdateItem_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   shps_UpdateResponse
#define EL_STRUCT zx_shps_UpdateResponse_s
#define EL_NS     shps
#define EL_TAG    UpdateResponse

/* FUNC(zx_FREE_shps_UpdateResponse) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

/* Called by: */
void zx_FREE_shps_UpdateResponse(struct zx_ctx* c, struct zx_shps_UpdateResponse_s* x, int free_strs)
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


  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zx_NEW_shps_UpdateResponse) */

/* Trivial allocator/constructor for the datatype. */

/* Called by: */
struct zx_shps_UpdateResponse_s* zx_NEW_shps_UpdateResponse(struct zx_ctx* c)
{
  struct zx_shps_UpdateResponse_s* x = ZX_ZALLOC(c, struct zx_shps_UpdateResponse_s);
  x->gg.g.tok = zx_shps_UpdateResponse_ELEM;
  return x;
}

#ifdef ZX_ENA_AUX

/* FUNC(zx_DUP_STRS_shps_UpdateResponse) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

/* Called by: */
void zx_DUP_STRS_shps_UpdateResponse(struct zx_ctx* c, struct zx_shps_UpdateResponse_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */


  {
      struct zx_lu_Status_s* e;
      for (e = x->Status; e; e = (struct zx_lu_Status_s*)e->gg.g.n)
	  zx_DUP_STRS_lu_Status(c, e);
  }

}

/* FUNC(zx_DEEP_CLONE_shps_UpdateResponse) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

/* Called by: */
struct zx_shps_UpdateResponse_s* zx_DEEP_CLONE_shps_UpdateResponse(struct zx_ctx* c, struct zx_shps_UpdateResponse_s* x, int dup_strs)
{
  x = (struct zx_shps_UpdateResponse_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zx_shps_UpdateResponse_s), dup_strs);
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

  return x;
}

/* FUNC(zx_WALK_SO_shps_UpdateResponse) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zx_WALK_SO_shps_UpdateResponse(struct zx_ctx* c, struct zx_shps_UpdateResponse_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

  
  return zx_walk_so_unknown_elems_and_content(c, &x->gg, ctx, callback);
}

/* FUNC(zx_WALK_WO_shps_UpdateResponse) */

int zx_WALK_WO_shps_UpdateResponse(struct zx_ctx* c, struct zx_shps_UpdateResponse_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  ERR("*** walk_wo not implemented %d", 0);
  return 0;
}

#endif


/* EOF -- c/zx-shps-aux.c */
