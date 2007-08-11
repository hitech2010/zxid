/* c/zx-xac-aux.c - WARNING: This file was automatically generated. DO NOT EDIT!
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
#include "c/zx-xac-data.h"



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

#define EL_NAME   xac_Action
#define EL_STRUCT zx_xac_Action_s
#define EL_NS     xac
#define EL_TAG    Action

/* FUNC(zx_FREE_xac_Action) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

/* Called by: */
void zx_FREE_xac_Action(struct zx_ctx* c, struct zx_xac_Action_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */


  {
      struct zx_xac_Attribute_s* e;
      struct zx_xac_Attribute_s* en;
      for (e = x->Attribute; e; e = en) {
	  en = (struct zx_xac_Attribute_s*)e->gg.g.n;
	  zx_FREE_xac_Attribute(c, e, free_strs);
      }
  }


  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zx_NEW_xac_Action) */

/* Trivial allocator/constructor for the datatype. */

/* Called by: */
struct zx_xac_Action_s* zx_NEW_xac_Action(struct zx_ctx* c)
{
  struct zx_xac_Action_s* x = ZX_ZALLOC(c, struct zx_xac_Action_s);
  x->gg.g.tok = zx_xac_Action_ELEM;
  return x;
}

#ifdef ZX_ENA_AUX

/* FUNC(zx_DUP_STRS_xac_Action) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

/* Called by: */
void zx_DUP_STRS_xac_Action(struct zx_ctx* c, struct zx_xac_Action_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */


  {
      struct zx_xac_Attribute_s* e;
      for (e = x->Attribute; e; e = (struct zx_xac_Attribute_s*)e->gg.g.n)
	  zx_DUP_STRS_xac_Attribute(c, e);
  }

}

/* FUNC(zx_DEEP_CLONE_xac_Action) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

/* Called by: */
struct zx_xac_Action_s* zx_DEEP_CLONE_xac_Action(struct zx_ctx* c, struct zx_xac_Action_s* x, int dup_strs)
{
  x = (struct zx_xac_Action_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zx_xac_Action_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */


  {
      struct zx_xac_Attribute_s* e;
      struct zx_xac_Attribute_s* en;
      struct zx_xac_Attribute_s* enn;
      for (enn = 0, e = x->Attribute; e; e = (struct zx_xac_Attribute_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_xac_Attribute(c, e, dup_strs);
	  if (!enn)
	      x->Attribute = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }

  return x;
}

/* FUNC(zx_WALK_SO_xac_Action) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zx_WALK_SO_xac_Action(struct zx_ctx* c, struct zx_xac_Action_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  int ret = callback(&x->gg.g, ctx);
  if (ret)
    return ret;
  
  /* *** deal with xmlns specifications in exc c14n way */


  
  ret = zx_walk_so_unknown_attributes(c, &x->gg, ctx, callback); 
  if (ret)
    return ret;

  {
      struct zx_xac_Attribute_s* e;
      for (e = x->Attribute; e; e = (struct zx_xac_Attribute_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_xac_Attribute(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }

  
  return zx_walk_so_unknown_elems_and_content(c, &x->gg, ctx, callback);
}

/* FUNC(zx_WALK_WO_xac_Action) */

int zx_WALK_WO_xac_Action(struct zx_ctx* c, struct zx_xac_Action_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   xac_Attribute
#define EL_STRUCT zx_xac_Attribute_s
#define EL_NS     xac
#define EL_TAG    Attribute

/* FUNC(zx_FREE_xac_Attribute) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

/* Called by: */
void zx_FREE_xac_Attribute(struct zx_ctx* c, struct zx_xac_Attribute_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */

  zx_free_attr(c, x->AttributeId, free_strs);
  zx_free_attr(c, x->DataType, free_strs);
  zx_free_attr(c, x->Issuer, free_strs);

  {
      struct zx_xac_AttributeValue_s* e;
      struct zx_xac_AttributeValue_s* en;
      for (e = x->AttributeValue; e; e = en) {
	  en = (struct zx_xac_AttributeValue_s*)e->gg.g.n;
	  zx_FREE_xac_AttributeValue(c, e, free_strs);
      }
  }


  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zx_NEW_xac_Attribute) */

/* Trivial allocator/constructor for the datatype. */

/* Called by: */
struct zx_xac_Attribute_s* zx_NEW_xac_Attribute(struct zx_ctx* c)
{
  struct zx_xac_Attribute_s* x = ZX_ZALLOC(c, struct zx_xac_Attribute_s);
  x->gg.g.tok = zx_xac_Attribute_ELEM;
  return x;
}

#ifdef ZX_ENA_AUX

/* FUNC(zx_DUP_STRS_xac_Attribute) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

/* Called by: */
void zx_DUP_STRS_xac_Attribute(struct zx_ctx* c, struct zx_xac_Attribute_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */

  zx_dup_attr(c, x->AttributeId);
  zx_dup_attr(c, x->DataType);
  zx_dup_attr(c, x->Issuer);

  {
      struct zx_xac_AttributeValue_s* e;
      for (e = x->AttributeValue; e; e = (struct zx_xac_AttributeValue_s*)e->gg.g.n)
	  zx_DUP_STRS_xac_AttributeValue(c, e);
  }

}

/* FUNC(zx_DEEP_CLONE_xac_Attribute) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

/* Called by: */
struct zx_xac_Attribute_s* zx_DEEP_CLONE_xac_Attribute(struct zx_ctx* c, struct zx_xac_Attribute_s* x, int dup_strs)
{
  x = (struct zx_xac_Attribute_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zx_xac_Attribute_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */

  x->AttributeId = zx_clone_attr(c, x->AttributeId);
  x->DataType = zx_clone_attr(c, x->DataType);
  x->Issuer = zx_clone_attr(c, x->Issuer);

  {
      struct zx_xac_AttributeValue_s* e;
      struct zx_xac_AttributeValue_s* en;
      struct zx_xac_AttributeValue_s* enn;
      for (enn = 0, e = x->AttributeValue; e; e = (struct zx_xac_AttributeValue_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_xac_AttributeValue(c, e, dup_strs);
	  if (!enn)
	      x->AttributeValue = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }

  return x;
}

/* FUNC(zx_WALK_SO_xac_Attribute) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zx_WALK_SO_xac_Attribute(struct zx_ctx* c, struct zx_xac_Attribute_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  int ret = callback(&x->gg.g, ctx);
  if (ret)
    return ret;
  
  /* *** deal with xmlns specifications in exc c14n way */


  
  ret = zx_walk_so_unknown_attributes(c, &x->gg, ctx, callback); 
  if (ret)
    return ret;

  {
      struct zx_xac_AttributeValue_s* e;
      for (e = x->AttributeValue; e; e = (struct zx_xac_AttributeValue_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_xac_AttributeValue(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }

  
  return zx_walk_so_unknown_elems_and_content(c, &x->gg, ctx, callback);
}

/* FUNC(zx_WALK_WO_xac_Attribute) */

int zx_WALK_WO_xac_Attribute(struct zx_ctx* c, struct zx_xac_Attribute_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   xac_AttributeValue
#define EL_STRUCT zx_xac_AttributeValue_s
#define EL_NS     xac
#define EL_TAG    AttributeValue

/* FUNC(zx_FREE_xac_AttributeValue) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

/* Called by: */
void zx_FREE_xac_AttributeValue(struct zx_ctx* c, struct zx_xac_AttributeValue_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */




  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zx_NEW_xac_AttributeValue) */

/* Trivial allocator/constructor for the datatype. */

/* Called by: */
struct zx_xac_AttributeValue_s* zx_NEW_xac_AttributeValue(struct zx_ctx* c)
{
  struct zx_xac_AttributeValue_s* x = ZX_ZALLOC(c, struct zx_xac_AttributeValue_s);
  x->gg.g.tok = zx_xac_AttributeValue_ELEM;
  return x;
}

#ifdef ZX_ENA_AUX

/* FUNC(zx_DUP_STRS_xac_AttributeValue) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

/* Called by: */
void zx_DUP_STRS_xac_AttributeValue(struct zx_ctx* c, struct zx_xac_AttributeValue_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */



}

/* FUNC(zx_DEEP_CLONE_xac_AttributeValue) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

/* Called by: */
struct zx_xac_AttributeValue_s* zx_DEEP_CLONE_xac_AttributeValue(struct zx_ctx* c, struct zx_xac_AttributeValue_s* x, int dup_strs)
{
  x = (struct zx_xac_AttributeValue_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zx_xac_AttributeValue_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */



  return x;
}

/* FUNC(zx_WALK_SO_xac_AttributeValue) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zx_WALK_SO_xac_AttributeValue(struct zx_ctx* c, struct zx_xac_AttributeValue_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

/* FUNC(zx_WALK_WO_xac_AttributeValue) */

int zx_WALK_WO_xac_AttributeValue(struct zx_ctx* c, struct zx_xac_AttributeValue_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   xac_Environment
#define EL_STRUCT zx_xac_Environment_s
#define EL_NS     xac
#define EL_TAG    Environment

/* FUNC(zx_FREE_xac_Environment) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

/* Called by: */
void zx_FREE_xac_Environment(struct zx_ctx* c, struct zx_xac_Environment_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */


  {
      struct zx_xac_Attribute_s* e;
      struct zx_xac_Attribute_s* en;
      for (e = x->Attribute; e; e = en) {
	  en = (struct zx_xac_Attribute_s*)e->gg.g.n;
	  zx_FREE_xac_Attribute(c, e, free_strs);
      }
  }


  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zx_NEW_xac_Environment) */

/* Trivial allocator/constructor for the datatype. */

/* Called by: */
struct zx_xac_Environment_s* zx_NEW_xac_Environment(struct zx_ctx* c)
{
  struct zx_xac_Environment_s* x = ZX_ZALLOC(c, struct zx_xac_Environment_s);
  x->gg.g.tok = zx_xac_Environment_ELEM;
  return x;
}

#ifdef ZX_ENA_AUX

/* FUNC(zx_DUP_STRS_xac_Environment) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

/* Called by: */
void zx_DUP_STRS_xac_Environment(struct zx_ctx* c, struct zx_xac_Environment_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */


  {
      struct zx_xac_Attribute_s* e;
      for (e = x->Attribute; e; e = (struct zx_xac_Attribute_s*)e->gg.g.n)
	  zx_DUP_STRS_xac_Attribute(c, e);
  }

}

/* FUNC(zx_DEEP_CLONE_xac_Environment) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

/* Called by: */
struct zx_xac_Environment_s* zx_DEEP_CLONE_xac_Environment(struct zx_ctx* c, struct zx_xac_Environment_s* x, int dup_strs)
{
  x = (struct zx_xac_Environment_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zx_xac_Environment_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */


  {
      struct zx_xac_Attribute_s* e;
      struct zx_xac_Attribute_s* en;
      struct zx_xac_Attribute_s* enn;
      for (enn = 0, e = x->Attribute; e; e = (struct zx_xac_Attribute_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_xac_Attribute(c, e, dup_strs);
	  if (!enn)
	      x->Attribute = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }

  return x;
}

/* FUNC(zx_WALK_SO_xac_Environment) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zx_WALK_SO_xac_Environment(struct zx_ctx* c, struct zx_xac_Environment_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  int ret = callback(&x->gg.g, ctx);
  if (ret)
    return ret;
  
  /* *** deal with xmlns specifications in exc c14n way */


  
  ret = zx_walk_so_unknown_attributes(c, &x->gg, ctx, callback); 
  if (ret)
    return ret;

  {
      struct zx_xac_Attribute_s* e;
      for (e = x->Attribute; e; e = (struct zx_xac_Attribute_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_xac_Attribute(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }

  
  return zx_walk_so_unknown_elems_and_content(c, &x->gg, ctx, callback);
}

/* FUNC(zx_WALK_WO_xac_Environment) */

int zx_WALK_WO_xac_Environment(struct zx_ctx* c, struct zx_xac_Environment_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   xac_MissingAttributeDetail
#define EL_STRUCT zx_xac_MissingAttributeDetail_s
#define EL_NS     xac
#define EL_TAG    MissingAttributeDetail

/* FUNC(zx_FREE_xac_MissingAttributeDetail) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

/* Called by: */
void zx_FREE_xac_MissingAttributeDetail(struct zx_ctx* c, struct zx_xac_MissingAttributeDetail_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */

  zx_free_attr(c, x->AttributeId, free_strs);
  zx_free_attr(c, x->DataType, free_strs);
  zx_free_attr(c, x->Issuer, free_strs);

  {
      struct zx_xac_AttributeValue_s* e;
      struct zx_xac_AttributeValue_s* en;
      for (e = x->AttributeValue; e; e = en) {
	  en = (struct zx_xac_AttributeValue_s*)e->gg.g.n;
	  zx_FREE_xac_AttributeValue(c, e, free_strs);
      }
  }


  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zx_NEW_xac_MissingAttributeDetail) */

/* Trivial allocator/constructor for the datatype. */

/* Called by: */
struct zx_xac_MissingAttributeDetail_s* zx_NEW_xac_MissingAttributeDetail(struct zx_ctx* c)
{
  struct zx_xac_MissingAttributeDetail_s* x = ZX_ZALLOC(c, struct zx_xac_MissingAttributeDetail_s);
  x->gg.g.tok = zx_xac_MissingAttributeDetail_ELEM;
  return x;
}

#ifdef ZX_ENA_AUX

/* FUNC(zx_DUP_STRS_xac_MissingAttributeDetail) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

/* Called by: */
void zx_DUP_STRS_xac_MissingAttributeDetail(struct zx_ctx* c, struct zx_xac_MissingAttributeDetail_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */

  zx_dup_attr(c, x->AttributeId);
  zx_dup_attr(c, x->DataType);
  zx_dup_attr(c, x->Issuer);

  {
      struct zx_xac_AttributeValue_s* e;
      for (e = x->AttributeValue; e; e = (struct zx_xac_AttributeValue_s*)e->gg.g.n)
	  zx_DUP_STRS_xac_AttributeValue(c, e);
  }

}

/* FUNC(zx_DEEP_CLONE_xac_MissingAttributeDetail) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

/* Called by: */
struct zx_xac_MissingAttributeDetail_s* zx_DEEP_CLONE_xac_MissingAttributeDetail(struct zx_ctx* c, struct zx_xac_MissingAttributeDetail_s* x, int dup_strs)
{
  x = (struct zx_xac_MissingAttributeDetail_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zx_xac_MissingAttributeDetail_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */

  x->AttributeId = zx_clone_attr(c, x->AttributeId);
  x->DataType = zx_clone_attr(c, x->DataType);
  x->Issuer = zx_clone_attr(c, x->Issuer);

  {
      struct zx_xac_AttributeValue_s* e;
      struct zx_xac_AttributeValue_s* en;
      struct zx_xac_AttributeValue_s* enn;
      for (enn = 0, e = x->AttributeValue; e; e = (struct zx_xac_AttributeValue_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_xac_AttributeValue(c, e, dup_strs);
	  if (!enn)
	      x->AttributeValue = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }

  return x;
}

/* FUNC(zx_WALK_SO_xac_MissingAttributeDetail) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zx_WALK_SO_xac_MissingAttributeDetail(struct zx_ctx* c, struct zx_xac_MissingAttributeDetail_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  int ret = callback(&x->gg.g, ctx);
  if (ret)
    return ret;
  
  /* *** deal with xmlns specifications in exc c14n way */


  
  ret = zx_walk_so_unknown_attributes(c, &x->gg, ctx, callback); 
  if (ret)
    return ret;

  {
      struct zx_xac_AttributeValue_s* e;
      for (e = x->AttributeValue; e; e = (struct zx_xac_AttributeValue_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_xac_AttributeValue(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }

  
  return zx_walk_so_unknown_elems_and_content(c, &x->gg, ctx, callback);
}

/* FUNC(zx_WALK_WO_xac_MissingAttributeDetail) */

int zx_WALK_WO_xac_MissingAttributeDetail(struct zx_ctx* c, struct zx_xac_MissingAttributeDetail_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   xac_Request
#define EL_STRUCT zx_xac_Request_s
#define EL_NS     xac
#define EL_TAG    Request

/* FUNC(zx_FREE_xac_Request) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

/* Called by: */
void zx_FREE_xac_Request(struct zx_ctx* c, struct zx_xac_Request_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */


  {
      struct zx_xac_Subject_s* e;
      struct zx_xac_Subject_s* en;
      for (e = x->Subject; e; e = en) {
	  en = (struct zx_xac_Subject_s*)e->gg.g.n;
	  zx_FREE_xac_Subject(c, e, free_strs);
      }
  }
  {
      struct zx_xac_Resource_s* e;
      struct zx_xac_Resource_s* en;
      for (e = x->Resource; e; e = en) {
	  en = (struct zx_xac_Resource_s*)e->gg.g.n;
	  zx_FREE_xac_Resource(c, e, free_strs);
      }
  }
  {
      struct zx_xac_Action_s* e;
      struct zx_xac_Action_s* en;
      for (e = x->Action; e; e = en) {
	  en = (struct zx_xac_Action_s*)e->gg.g.n;
	  zx_FREE_xac_Action(c, e, free_strs);
      }
  }
  {
      struct zx_xac_Environment_s* e;
      struct zx_xac_Environment_s* en;
      for (e = x->Environment; e; e = en) {
	  en = (struct zx_xac_Environment_s*)e->gg.g.n;
	  zx_FREE_xac_Environment(c, e, free_strs);
      }
  }


  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zx_NEW_xac_Request) */

/* Trivial allocator/constructor for the datatype. */

/* Called by: */
struct zx_xac_Request_s* zx_NEW_xac_Request(struct zx_ctx* c)
{
  struct zx_xac_Request_s* x = ZX_ZALLOC(c, struct zx_xac_Request_s);
  x->gg.g.tok = zx_xac_Request_ELEM;
  return x;
}

#ifdef ZX_ENA_AUX

/* FUNC(zx_DUP_STRS_xac_Request) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

/* Called by: */
void zx_DUP_STRS_xac_Request(struct zx_ctx* c, struct zx_xac_Request_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */


  {
      struct zx_xac_Subject_s* e;
      for (e = x->Subject; e; e = (struct zx_xac_Subject_s*)e->gg.g.n)
	  zx_DUP_STRS_xac_Subject(c, e);
  }
  {
      struct zx_xac_Resource_s* e;
      for (e = x->Resource; e; e = (struct zx_xac_Resource_s*)e->gg.g.n)
	  zx_DUP_STRS_xac_Resource(c, e);
  }
  {
      struct zx_xac_Action_s* e;
      for (e = x->Action; e; e = (struct zx_xac_Action_s*)e->gg.g.n)
	  zx_DUP_STRS_xac_Action(c, e);
  }
  {
      struct zx_xac_Environment_s* e;
      for (e = x->Environment; e; e = (struct zx_xac_Environment_s*)e->gg.g.n)
	  zx_DUP_STRS_xac_Environment(c, e);
  }

}

/* FUNC(zx_DEEP_CLONE_xac_Request) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

/* Called by: */
struct zx_xac_Request_s* zx_DEEP_CLONE_xac_Request(struct zx_ctx* c, struct zx_xac_Request_s* x, int dup_strs)
{
  x = (struct zx_xac_Request_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zx_xac_Request_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */


  {
      struct zx_xac_Subject_s* e;
      struct zx_xac_Subject_s* en;
      struct zx_xac_Subject_s* enn;
      for (enn = 0, e = x->Subject; e; e = (struct zx_xac_Subject_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_xac_Subject(c, e, dup_strs);
	  if (!enn)
	      x->Subject = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zx_xac_Resource_s* e;
      struct zx_xac_Resource_s* en;
      struct zx_xac_Resource_s* enn;
      for (enn = 0, e = x->Resource; e; e = (struct zx_xac_Resource_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_xac_Resource(c, e, dup_strs);
	  if (!enn)
	      x->Resource = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zx_xac_Action_s* e;
      struct zx_xac_Action_s* en;
      struct zx_xac_Action_s* enn;
      for (enn = 0, e = x->Action; e; e = (struct zx_xac_Action_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_xac_Action(c, e, dup_strs);
	  if (!enn)
	      x->Action = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zx_xac_Environment_s* e;
      struct zx_xac_Environment_s* en;
      struct zx_xac_Environment_s* enn;
      for (enn = 0, e = x->Environment; e; e = (struct zx_xac_Environment_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_xac_Environment(c, e, dup_strs);
	  if (!enn)
	      x->Environment = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }

  return x;
}

/* FUNC(zx_WALK_SO_xac_Request) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zx_WALK_SO_xac_Request(struct zx_ctx* c, struct zx_xac_Request_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  int ret = callback(&x->gg.g, ctx);
  if (ret)
    return ret;
  
  /* *** deal with xmlns specifications in exc c14n way */


  
  ret = zx_walk_so_unknown_attributes(c, &x->gg, ctx, callback); 
  if (ret)
    return ret;

  {
      struct zx_xac_Subject_s* e;
      for (e = x->Subject; e; e = (struct zx_xac_Subject_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_xac_Subject(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zx_xac_Resource_s* e;
      for (e = x->Resource; e; e = (struct zx_xac_Resource_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_xac_Resource(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zx_xac_Action_s* e;
      for (e = x->Action; e; e = (struct zx_xac_Action_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_xac_Action(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zx_xac_Environment_s* e;
      for (e = x->Environment; e; e = (struct zx_xac_Environment_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_xac_Environment(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }

  
  return zx_walk_so_unknown_elems_and_content(c, &x->gg, ctx, callback);
}

/* FUNC(zx_WALK_WO_xac_Request) */

int zx_WALK_WO_xac_Request(struct zx_ctx* c, struct zx_xac_Request_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   xac_Resource
#define EL_STRUCT zx_xac_Resource_s
#define EL_NS     xac
#define EL_TAG    Resource

/* FUNC(zx_FREE_xac_Resource) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

/* Called by: */
void zx_FREE_xac_Resource(struct zx_ctx* c, struct zx_xac_Resource_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */


  {
      struct zx_xac_ResourceContent_s* e;
      struct zx_xac_ResourceContent_s* en;
      for (e = x->ResourceContent; e; e = en) {
	  en = (struct zx_xac_ResourceContent_s*)e->gg.g.n;
	  zx_FREE_xac_ResourceContent(c, e, free_strs);
      }
  }
  {
      struct zx_xac_Attribute_s* e;
      struct zx_xac_Attribute_s* en;
      for (e = x->Attribute; e; e = en) {
	  en = (struct zx_xac_Attribute_s*)e->gg.g.n;
	  zx_FREE_xac_Attribute(c, e, free_strs);
      }
  }


  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zx_NEW_xac_Resource) */

/* Trivial allocator/constructor for the datatype. */

/* Called by: */
struct zx_xac_Resource_s* zx_NEW_xac_Resource(struct zx_ctx* c)
{
  struct zx_xac_Resource_s* x = ZX_ZALLOC(c, struct zx_xac_Resource_s);
  x->gg.g.tok = zx_xac_Resource_ELEM;
  return x;
}

#ifdef ZX_ENA_AUX

/* FUNC(zx_DUP_STRS_xac_Resource) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

/* Called by: */
void zx_DUP_STRS_xac_Resource(struct zx_ctx* c, struct zx_xac_Resource_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */


  {
      struct zx_xac_ResourceContent_s* e;
      for (e = x->ResourceContent; e; e = (struct zx_xac_ResourceContent_s*)e->gg.g.n)
	  zx_DUP_STRS_xac_ResourceContent(c, e);
  }
  {
      struct zx_xac_Attribute_s* e;
      for (e = x->Attribute; e; e = (struct zx_xac_Attribute_s*)e->gg.g.n)
	  zx_DUP_STRS_xac_Attribute(c, e);
  }

}

/* FUNC(zx_DEEP_CLONE_xac_Resource) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

/* Called by: */
struct zx_xac_Resource_s* zx_DEEP_CLONE_xac_Resource(struct zx_ctx* c, struct zx_xac_Resource_s* x, int dup_strs)
{
  x = (struct zx_xac_Resource_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zx_xac_Resource_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */


  {
      struct zx_xac_ResourceContent_s* e;
      struct zx_xac_ResourceContent_s* en;
      struct zx_xac_ResourceContent_s* enn;
      for (enn = 0, e = x->ResourceContent; e; e = (struct zx_xac_ResourceContent_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_xac_ResourceContent(c, e, dup_strs);
	  if (!enn)
	      x->ResourceContent = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zx_xac_Attribute_s* e;
      struct zx_xac_Attribute_s* en;
      struct zx_xac_Attribute_s* enn;
      for (enn = 0, e = x->Attribute; e; e = (struct zx_xac_Attribute_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_xac_Attribute(c, e, dup_strs);
	  if (!enn)
	      x->Attribute = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }

  return x;
}

/* FUNC(zx_WALK_SO_xac_Resource) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zx_WALK_SO_xac_Resource(struct zx_ctx* c, struct zx_xac_Resource_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  int ret = callback(&x->gg.g, ctx);
  if (ret)
    return ret;
  
  /* *** deal with xmlns specifications in exc c14n way */


  
  ret = zx_walk_so_unknown_attributes(c, &x->gg, ctx, callback); 
  if (ret)
    return ret;

  {
      struct zx_xac_ResourceContent_s* e;
      for (e = x->ResourceContent; e; e = (struct zx_xac_ResourceContent_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_xac_ResourceContent(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zx_xac_Attribute_s* e;
      for (e = x->Attribute; e; e = (struct zx_xac_Attribute_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_xac_Attribute(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }

  
  return zx_walk_so_unknown_elems_and_content(c, &x->gg, ctx, callback);
}

/* FUNC(zx_WALK_WO_xac_Resource) */

int zx_WALK_WO_xac_Resource(struct zx_ctx* c, struct zx_xac_Resource_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   xac_ResourceContent
#define EL_STRUCT zx_xac_ResourceContent_s
#define EL_NS     xac
#define EL_TAG    ResourceContent

/* FUNC(zx_FREE_xac_ResourceContent) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

/* Called by: */
void zx_FREE_xac_ResourceContent(struct zx_ctx* c, struct zx_xac_ResourceContent_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */




  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zx_NEW_xac_ResourceContent) */

/* Trivial allocator/constructor for the datatype. */

/* Called by: */
struct zx_xac_ResourceContent_s* zx_NEW_xac_ResourceContent(struct zx_ctx* c)
{
  struct zx_xac_ResourceContent_s* x = ZX_ZALLOC(c, struct zx_xac_ResourceContent_s);
  x->gg.g.tok = zx_xac_ResourceContent_ELEM;
  return x;
}

#ifdef ZX_ENA_AUX

/* FUNC(zx_DUP_STRS_xac_ResourceContent) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

/* Called by: */
void zx_DUP_STRS_xac_ResourceContent(struct zx_ctx* c, struct zx_xac_ResourceContent_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */



}

/* FUNC(zx_DEEP_CLONE_xac_ResourceContent) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

/* Called by: */
struct zx_xac_ResourceContent_s* zx_DEEP_CLONE_xac_ResourceContent(struct zx_ctx* c, struct zx_xac_ResourceContent_s* x, int dup_strs)
{
  x = (struct zx_xac_ResourceContent_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zx_xac_ResourceContent_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */



  return x;
}

/* FUNC(zx_WALK_SO_xac_ResourceContent) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zx_WALK_SO_xac_ResourceContent(struct zx_ctx* c, struct zx_xac_ResourceContent_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

/* FUNC(zx_WALK_WO_xac_ResourceContent) */

int zx_WALK_WO_xac_ResourceContent(struct zx_ctx* c, struct zx_xac_ResourceContent_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   xac_Response
#define EL_STRUCT zx_xac_Response_s
#define EL_NS     xac
#define EL_TAG    Response

/* FUNC(zx_FREE_xac_Response) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

/* Called by: */
void zx_FREE_xac_Response(struct zx_ctx* c, struct zx_xac_Response_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */


  {
      struct zx_xac_Result_s* e;
      struct zx_xac_Result_s* en;
      for (e = x->Result; e; e = en) {
	  en = (struct zx_xac_Result_s*)e->gg.g.n;
	  zx_FREE_xac_Result(c, e, free_strs);
      }
  }


  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zx_NEW_xac_Response) */

/* Trivial allocator/constructor for the datatype. */

/* Called by: */
struct zx_xac_Response_s* zx_NEW_xac_Response(struct zx_ctx* c)
{
  struct zx_xac_Response_s* x = ZX_ZALLOC(c, struct zx_xac_Response_s);
  x->gg.g.tok = zx_xac_Response_ELEM;
  return x;
}

#ifdef ZX_ENA_AUX

/* FUNC(zx_DUP_STRS_xac_Response) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

/* Called by: */
void zx_DUP_STRS_xac_Response(struct zx_ctx* c, struct zx_xac_Response_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */


  {
      struct zx_xac_Result_s* e;
      for (e = x->Result; e; e = (struct zx_xac_Result_s*)e->gg.g.n)
	  zx_DUP_STRS_xac_Result(c, e);
  }

}

/* FUNC(zx_DEEP_CLONE_xac_Response) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

/* Called by: */
struct zx_xac_Response_s* zx_DEEP_CLONE_xac_Response(struct zx_ctx* c, struct zx_xac_Response_s* x, int dup_strs)
{
  x = (struct zx_xac_Response_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zx_xac_Response_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */


  {
      struct zx_xac_Result_s* e;
      struct zx_xac_Result_s* en;
      struct zx_xac_Result_s* enn;
      for (enn = 0, e = x->Result; e; e = (struct zx_xac_Result_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_xac_Result(c, e, dup_strs);
	  if (!enn)
	      x->Result = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }

  return x;
}

/* FUNC(zx_WALK_SO_xac_Response) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zx_WALK_SO_xac_Response(struct zx_ctx* c, struct zx_xac_Response_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  int ret = callback(&x->gg.g, ctx);
  if (ret)
    return ret;
  
  /* *** deal with xmlns specifications in exc c14n way */


  
  ret = zx_walk_so_unknown_attributes(c, &x->gg, ctx, callback); 
  if (ret)
    return ret;

  {
      struct zx_xac_Result_s* e;
      for (e = x->Result; e; e = (struct zx_xac_Result_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_xac_Result(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }

  
  return zx_walk_so_unknown_elems_and_content(c, &x->gg, ctx, callback);
}

/* FUNC(zx_WALK_WO_xac_Response) */

int zx_WALK_WO_xac_Response(struct zx_ctx* c, struct zx_xac_Response_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   xac_Result
#define EL_STRUCT zx_xac_Result_s
#define EL_NS     xac
#define EL_TAG    Result

/* FUNC(zx_FREE_xac_Result) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

/* Called by: */
void zx_FREE_xac_Result(struct zx_ctx* c, struct zx_xac_Result_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */

  zx_free_attr(c, x->ResourceId, free_strs);

  zx_free_simple_elems(c, x->Decision, free_strs);
  {
      struct zx_xac_Status_s* e;
      struct zx_xac_Status_s* en;
      for (e = x->Status; e; e = en) {
	  en = (struct zx_xac_Status_s*)e->gg.g.n;
	  zx_FREE_xac_Status(c, e, free_strs);
      }
  }
  {
      struct zx_xa_Obligations_s* e;
      struct zx_xa_Obligations_s* en;
      for (e = x->Obligations; e; e = en) {
	  en = (struct zx_xa_Obligations_s*)e->gg.g.n;
	  zx_FREE_xa_Obligations(c, e, free_strs);
      }
  }


  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zx_NEW_xac_Result) */

/* Trivial allocator/constructor for the datatype. */

/* Called by: */
struct zx_xac_Result_s* zx_NEW_xac_Result(struct zx_ctx* c)
{
  struct zx_xac_Result_s* x = ZX_ZALLOC(c, struct zx_xac_Result_s);
  x->gg.g.tok = zx_xac_Result_ELEM;
  return x;
}

#ifdef ZX_ENA_AUX

/* FUNC(zx_DUP_STRS_xac_Result) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

/* Called by: */
void zx_DUP_STRS_xac_Result(struct zx_ctx* c, struct zx_xac_Result_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */

  zx_dup_attr(c, x->ResourceId);

  zx_dup_strs_simple_elems(c, x->Decision);
  {
      struct zx_xac_Status_s* e;
      for (e = x->Status; e; e = (struct zx_xac_Status_s*)e->gg.g.n)
	  zx_DUP_STRS_xac_Status(c, e);
  }
  {
      struct zx_xa_Obligations_s* e;
      for (e = x->Obligations; e; e = (struct zx_xa_Obligations_s*)e->gg.g.n)
	  zx_DUP_STRS_xa_Obligations(c, e);
  }

}

/* FUNC(zx_DEEP_CLONE_xac_Result) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

/* Called by: */
struct zx_xac_Result_s* zx_DEEP_CLONE_xac_Result(struct zx_ctx* c, struct zx_xac_Result_s* x, int dup_strs)
{
  x = (struct zx_xac_Result_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zx_xac_Result_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */

  x->ResourceId = zx_clone_attr(c, x->ResourceId);

  x->Decision = zx_deep_clone_simple_elems(c,x->Decision, dup_strs);
  {
      struct zx_xac_Status_s* e;
      struct zx_xac_Status_s* en;
      struct zx_xac_Status_s* enn;
      for (enn = 0, e = x->Status; e; e = (struct zx_xac_Status_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_xac_Status(c, e, dup_strs);
	  if (!enn)
	      x->Status = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zx_xa_Obligations_s* e;
      struct zx_xa_Obligations_s* en;
      struct zx_xa_Obligations_s* enn;
      for (enn = 0, e = x->Obligations; e; e = (struct zx_xa_Obligations_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_xa_Obligations(c, e, dup_strs);
	  if (!enn)
	      x->Obligations = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }

  return x;
}

/* FUNC(zx_WALK_SO_xac_Result) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zx_WALK_SO_xac_Result(struct zx_ctx* c, struct zx_xac_Result_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  int ret = callback(&x->gg.g, ctx);
  if (ret)
    return ret;
  
  /* *** deal with xmlns specifications in exc c14n way */


  
  ret = zx_walk_so_unknown_attributes(c, &x->gg, ctx, callback); 
  if (ret)
    return ret;

  ret = zx_walk_so_simple_elems(c, x->Decision, ctx, callback);
  if (ret)
    return ret;
  {
      struct zx_xac_Status_s* e;
      for (e = x->Status; e; e = (struct zx_xac_Status_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_xac_Status(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zx_xa_Obligations_s* e;
      for (e = x->Obligations; e; e = (struct zx_xa_Obligations_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_xa_Obligations(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }

  
  return zx_walk_so_unknown_elems_and_content(c, &x->gg, ctx, callback);
}

/* FUNC(zx_WALK_WO_xac_Result) */

int zx_WALK_WO_xac_Result(struct zx_ctx* c, struct zx_xac_Result_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   xac_Status
#define EL_STRUCT zx_xac_Status_s
#define EL_NS     xac
#define EL_TAG    Status

/* FUNC(zx_FREE_xac_Status) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

/* Called by: */
void zx_FREE_xac_Status(struct zx_ctx* c, struct zx_xac_Status_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */


  {
      struct zx_xac_StatusCode_s* e;
      struct zx_xac_StatusCode_s* en;
      for (e = x->StatusCode; e; e = en) {
	  en = (struct zx_xac_StatusCode_s*)e->gg.g.n;
	  zx_FREE_xac_StatusCode(c, e, free_strs);
      }
  }
  zx_free_simple_elems(c, x->StatusMessage, free_strs);
  {
      struct zx_xac_StatusDetail_s* e;
      struct zx_xac_StatusDetail_s* en;
      for (e = x->StatusDetail; e; e = en) {
	  en = (struct zx_xac_StatusDetail_s*)e->gg.g.n;
	  zx_FREE_xac_StatusDetail(c, e, free_strs);
      }
  }


  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zx_NEW_xac_Status) */

/* Trivial allocator/constructor for the datatype. */

/* Called by: */
struct zx_xac_Status_s* zx_NEW_xac_Status(struct zx_ctx* c)
{
  struct zx_xac_Status_s* x = ZX_ZALLOC(c, struct zx_xac_Status_s);
  x->gg.g.tok = zx_xac_Status_ELEM;
  return x;
}

#ifdef ZX_ENA_AUX

/* FUNC(zx_DUP_STRS_xac_Status) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

/* Called by: */
void zx_DUP_STRS_xac_Status(struct zx_ctx* c, struct zx_xac_Status_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */


  {
      struct zx_xac_StatusCode_s* e;
      for (e = x->StatusCode; e; e = (struct zx_xac_StatusCode_s*)e->gg.g.n)
	  zx_DUP_STRS_xac_StatusCode(c, e);
  }
  zx_dup_strs_simple_elems(c, x->StatusMessage);
  {
      struct zx_xac_StatusDetail_s* e;
      for (e = x->StatusDetail; e; e = (struct zx_xac_StatusDetail_s*)e->gg.g.n)
	  zx_DUP_STRS_xac_StatusDetail(c, e);
  }

}

/* FUNC(zx_DEEP_CLONE_xac_Status) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

/* Called by: */
struct zx_xac_Status_s* zx_DEEP_CLONE_xac_Status(struct zx_ctx* c, struct zx_xac_Status_s* x, int dup_strs)
{
  x = (struct zx_xac_Status_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zx_xac_Status_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */


  {
      struct zx_xac_StatusCode_s* e;
      struct zx_xac_StatusCode_s* en;
      struct zx_xac_StatusCode_s* enn;
      for (enn = 0, e = x->StatusCode; e; e = (struct zx_xac_StatusCode_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_xac_StatusCode(c, e, dup_strs);
	  if (!enn)
	      x->StatusCode = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  x->StatusMessage = zx_deep_clone_simple_elems(c,x->StatusMessage, dup_strs);
  {
      struct zx_xac_StatusDetail_s* e;
      struct zx_xac_StatusDetail_s* en;
      struct zx_xac_StatusDetail_s* enn;
      for (enn = 0, e = x->StatusDetail; e; e = (struct zx_xac_StatusDetail_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_xac_StatusDetail(c, e, dup_strs);
	  if (!enn)
	      x->StatusDetail = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }

  return x;
}

/* FUNC(zx_WALK_SO_xac_Status) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zx_WALK_SO_xac_Status(struct zx_ctx* c, struct zx_xac_Status_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  int ret = callback(&x->gg.g, ctx);
  if (ret)
    return ret;
  
  /* *** deal with xmlns specifications in exc c14n way */


  
  ret = zx_walk_so_unknown_attributes(c, &x->gg, ctx, callback); 
  if (ret)
    return ret;

  {
      struct zx_xac_StatusCode_s* e;
      for (e = x->StatusCode; e; e = (struct zx_xac_StatusCode_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_xac_StatusCode(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  ret = zx_walk_so_simple_elems(c, x->StatusMessage, ctx, callback);
  if (ret)
    return ret;
  {
      struct zx_xac_StatusDetail_s* e;
      for (e = x->StatusDetail; e; e = (struct zx_xac_StatusDetail_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_xac_StatusDetail(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }

  
  return zx_walk_so_unknown_elems_and_content(c, &x->gg, ctx, callback);
}

/* FUNC(zx_WALK_WO_xac_Status) */

int zx_WALK_WO_xac_Status(struct zx_ctx* c, struct zx_xac_Status_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   xac_StatusCode
#define EL_STRUCT zx_xac_StatusCode_s
#define EL_NS     xac
#define EL_TAG    StatusCode

/* FUNC(zx_FREE_xac_StatusCode) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

/* Called by: */
void zx_FREE_xac_StatusCode(struct zx_ctx* c, struct zx_xac_StatusCode_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */

  zx_free_attr(c, x->Value, free_strs);

  {
      struct zx_xac_StatusCode_s* e;
      struct zx_xac_StatusCode_s* en;
      for (e = x->StatusCode; e; e = en) {
	  en = (struct zx_xac_StatusCode_s*)e->gg.g.n;
	  zx_FREE_xac_StatusCode(c, e, free_strs);
      }
  }


  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zx_NEW_xac_StatusCode) */

/* Trivial allocator/constructor for the datatype. */

/* Called by: */
struct zx_xac_StatusCode_s* zx_NEW_xac_StatusCode(struct zx_ctx* c)
{
  struct zx_xac_StatusCode_s* x = ZX_ZALLOC(c, struct zx_xac_StatusCode_s);
  x->gg.g.tok = zx_xac_StatusCode_ELEM;
  return x;
}

#ifdef ZX_ENA_AUX

/* FUNC(zx_DUP_STRS_xac_StatusCode) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

/* Called by: */
void zx_DUP_STRS_xac_StatusCode(struct zx_ctx* c, struct zx_xac_StatusCode_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */

  zx_dup_attr(c, x->Value);

  {
      struct zx_xac_StatusCode_s* e;
      for (e = x->StatusCode; e; e = (struct zx_xac_StatusCode_s*)e->gg.g.n)
	  zx_DUP_STRS_xac_StatusCode(c, e);
  }

}

/* FUNC(zx_DEEP_CLONE_xac_StatusCode) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

/* Called by: */
struct zx_xac_StatusCode_s* zx_DEEP_CLONE_xac_StatusCode(struct zx_ctx* c, struct zx_xac_StatusCode_s* x, int dup_strs)
{
  x = (struct zx_xac_StatusCode_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zx_xac_StatusCode_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */

  x->Value = zx_clone_attr(c, x->Value);

  {
      struct zx_xac_StatusCode_s* e;
      struct zx_xac_StatusCode_s* en;
      struct zx_xac_StatusCode_s* enn;
      for (enn = 0, e = x->StatusCode; e; e = (struct zx_xac_StatusCode_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_xac_StatusCode(c, e, dup_strs);
	  if (!enn)
	      x->StatusCode = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }

  return x;
}

/* FUNC(zx_WALK_SO_xac_StatusCode) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zx_WALK_SO_xac_StatusCode(struct zx_ctx* c, struct zx_xac_StatusCode_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  int ret = callback(&x->gg.g, ctx);
  if (ret)
    return ret;
  
  /* *** deal with xmlns specifications in exc c14n way */


  
  ret = zx_walk_so_unknown_attributes(c, &x->gg, ctx, callback); 
  if (ret)
    return ret;

  {
      struct zx_xac_StatusCode_s* e;
      for (e = x->StatusCode; e; e = (struct zx_xac_StatusCode_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_xac_StatusCode(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }

  
  return zx_walk_so_unknown_elems_and_content(c, &x->gg, ctx, callback);
}

/* FUNC(zx_WALK_WO_xac_StatusCode) */

int zx_WALK_WO_xac_StatusCode(struct zx_ctx* c, struct zx_xac_StatusCode_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   xac_StatusDetail
#define EL_STRUCT zx_xac_StatusDetail_s
#define EL_NS     xac
#define EL_TAG    StatusDetail

/* FUNC(zx_FREE_xac_StatusDetail) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

/* Called by: */
void zx_FREE_xac_StatusDetail(struct zx_ctx* c, struct zx_xac_StatusDetail_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */




  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zx_NEW_xac_StatusDetail) */

/* Trivial allocator/constructor for the datatype. */

/* Called by: */
struct zx_xac_StatusDetail_s* zx_NEW_xac_StatusDetail(struct zx_ctx* c)
{
  struct zx_xac_StatusDetail_s* x = ZX_ZALLOC(c, struct zx_xac_StatusDetail_s);
  x->gg.g.tok = zx_xac_StatusDetail_ELEM;
  return x;
}

#ifdef ZX_ENA_AUX

/* FUNC(zx_DUP_STRS_xac_StatusDetail) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

/* Called by: */
void zx_DUP_STRS_xac_StatusDetail(struct zx_ctx* c, struct zx_xac_StatusDetail_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */



}

/* FUNC(zx_DEEP_CLONE_xac_StatusDetail) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

/* Called by: */
struct zx_xac_StatusDetail_s* zx_DEEP_CLONE_xac_StatusDetail(struct zx_ctx* c, struct zx_xac_StatusDetail_s* x, int dup_strs)
{
  x = (struct zx_xac_StatusDetail_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zx_xac_StatusDetail_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */



  return x;
}

/* FUNC(zx_WALK_SO_xac_StatusDetail) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zx_WALK_SO_xac_StatusDetail(struct zx_ctx* c, struct zx_xac_StatusDetail_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

/* FUNC(zx_WALK_WO_xac_StatusDetail) */

int zx_WALK_WO_xac_StatusDetail(struct zx_ctx* c, struct zx_xac_StatusDetail_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   xac_Subject
#define EL_STRUCT zx_xac_Subject_s
#define EL_NS     xac
#define EL_TAG    Subject

/* FUNC(zx_FREE_xac_Subject) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

/* Called by: */
void zx_FREE_xac_Subject(struct zx_ctx* c, struct zx_xac_Subject_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */

  zx_free_attr(c, x->SubjectCategory, free_strs);

  {
      struct zx_xac_Attribute_s* e;
      struct zx_xac_Attribute_s* en;
      for (e = x->Attribute; e; e = en) {
	  en = (struct zx_xac_Attribute_s*)e->gg.g.n;
	  zx_FREE_xac_Attribute(c, e, free_strs);
      }
  }


  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zx_NEW_xac_Subject) */

/* Trivial allocator/constructor for the datatype. */

/* Called by: */
struct zx_xac_Subject_s* zx_NEW_xac_Subject(struct zx_ctx* c)
{
  struct zx_xac_Subject_s* x = ZX_ZALLOC(c, struct zx_xac_Subject_s);
  x->gg.g.tok = zx_xac_Subject_ELEM;
  return x;
}

#ifdef ZX_ENA_AUX

/* FUNC(zx_DUP_STRS_xac_Subject) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

/* Called by: */
void zx_DUP_STRS_xac_Subject(struct zx_ctx* c, struct zx_xac_Subject_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */

  zx_dup_attr(c, x->SubjectCategory);

  {
      struct zx_xac_Attribute_s* e;
      for (e = x->Attribute; e; e = (struct zx_xac_Attribute_s*)e->gg.g.n)
	  zx_DUP_STRS_xac_Attribute(c, e);
  }

}

/* FUNC(zx_DEEP_CLONE_xac_Subject) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

/* Called by: */
struct zx_xac_Subject_s* zx_DEEP_CLONE_xac_Subject(struct zx_ctx* c, struct zx_xac_Subject_s* x, int dup_strs)
{
  x = (struct zx_xac_Subject_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zx_xac_Subject_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */

  x->SubjectCategory = zx_clone_attr(c, x->SubjectCategory);

  {
      struct zx_xac_Attribute_s* e;
      struct zx_xac_Attribute_s* en;
      struct zx_xac_Attribute_s* enn;
      for (enn = 0, e = x->Attribute; e; e = (struct zx_xac_Attribute_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_xac_Attribute(c, e, dup_strs);
	  if (!enn)
	      x->Attribute = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }

  return x;
}

/* FUNC(zx_WALK_SO_xac_Subject) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zx_WALK_SO_xac_Subject(struct zx_ctx* c, struct zx_xac_Subject_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  int ret = callback(&x->gg.g, ctx);
  if (ret)
    return ret;
  
  /* *** deal with xmlns specifications in exc c14n way */


  
  ret = zx_walk_so_unknown_attributes(c, &x->gg, ctx, callback); 
  if (ret)
    return ret;

  {
      struct zx_xac_Attribute_s* e;
      for (e = x->Attribute; e; e = (struct zx_xac_Attribute_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_xac_Attribute(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }

  
  return zx_walk_so_unknown_elems_and_content(c, &x->gg, ctx, callback);
}

/* FUNC(zx_WALK_WO_xac_Subject) */

int zx_WALK_WO_xac_Subject(struct zx_ctx* c, struct zx_xac_Subject_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  ERR("*** walk_wo not implemented %d", 0);
  return 0;
}

#endif


/* EOF -- c/zx-xac-aux.c */