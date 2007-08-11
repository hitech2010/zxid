/* c/zx-a-aux.c - WARNING: This file was automatically generated. DO NOT EDIT!
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
#include "c/zx-a-data.h"



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

#define EL_NAME   a_Action
#define EL_STRUCT zx_a_Action_s
#define EL_NS     a
#define EL_TAG    Action

/* FUNC(zx_FREE_a_Action) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

/* Called by: */
void zx_FREE_a_Action(struct zx_ctx* c, struct zx_a_Action_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */

  zx_free_attr(c, x->mustUnderstand, free_strs);
  zx_free_attr(c, x->actor, free_strs);
  zx_free_attr(c, x->Id, free_strs);



  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zx_NEW_a_Action) */

/* Trivial allocator/constructor for the datatype. */

/* Called by: */
struct zx_a_Action_s* zx_NEW_a_Action(struct zx_ctx* c)
{
  struct zx_a_Action_s* x = ZX_ZALLOC(c, struct zx_a_Action_s);
  x->gg.g.tok = zx_a_Action_ELEM;
  return x;
}

#ifdef ZX_ENA_AUX

/* FUNC(zx_DUP_STRS_a_Action) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

/* Called by: */
void zx_DUP_STRS_a_Action(struct zx_ctx* c, struct zx_a_Action_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */

  zx_dup_attr(c, x->mustUnderstand);
  zx_dup_attr(c, x->actor);
  zx_dup_attr(c, x->Id);


}

/* FUNC(zx_DEEP_CLONE_a_Action) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

/* Called by: */
struct zx_a_Action_s* zx_DEEP_CLONE_a_Action(struct zx_ctx* c, struct zx_a_Action_s* x, int dup_strs)
{
  x = (struct zx_a_Action_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zx_a_Action_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */

  x->mustUnderstand = zx_clone_attr(c, x->mustUnderstand);
  x->actor = zx_clone_attr(c, x->actor);
  x->Id = zx_clone_attr(c, x->Id);


  return x;
}

/* FUNC(zx_WALK_SO_a_Action) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zx_WALK_SO_a_Action(struct zx_ctx* c, struct zx_a_Action_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

/* FUNC(zx_WALK_WO_a_Action) */

int zx_WALK_WO_a_Action(struct zx_ctx* c, struct zx_a_Action_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   a_Address
#define EL_STRUCT zx_a_Address_s
#define EL_NS     a
#define EL_TAG    Address

/* FUNC(zx_FREE_a_Address) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

/* Called by: */
void zx_FREE_a_Address(struct zx_ctx* c, struct zx_a_Address_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */

  zx_free_attr(c, x->mustUnderstand, free_strs);
  zx_free_attr(c, x->actor, free_strs);
  zx_free_attr(c, x->Id, free_strs);



  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zx_NEW_a_Address) */

/* Trivial allocator/constructor for the datatype. */

/* Called by: */
struct zx_a_Address_s* zx_NEW_a_Address(struct zx_ctx* c)
{
  struct zx_a_Address_s* x = ZX_ZALLOC(c, struct zx_a_Address_s);
  x->gg.g.tok = zx_a_Address_ELEM;
  return x;
}

#ifdef ZX_ENA_AUX

/* FUNC(zx_DUP_STRS_a_Address) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

/* Called by: */
void zx_DUP_STRS_a_Address(struct zx_ctx* c, struct zx_a_Address_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */

  zx_dup_attr(c, x->mustUnderstand);
  zx_dup_attr(c, x->actor);
  zx_dup_attr(c, x->Id);


}

/* FUNC(zx_DEEP_CLONE_a_Address) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

/* Called by: */
struct zx_a_Address_s* zx_DEEP_CLONE_a_Address(struct zx_ctx* c, struct zx_a_Address_s* x, int dup_strs)
{
  x = (struct zx_a_Address_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zx_a_Address_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */

  x->mustUnderstand = zx_clone_attr(c, x->mustUnderstand);
  x->actor = zx_clone_attr(c, x->actor);
  x->Id = zx_clone_attr(c, x->Id);


  return x;
}

/* FUNC(zx_WALK_SO_a_Address) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zx_WALK_SO_a_Address(struct zx_ctx* c, struct zx_a_Address_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

/* FUNC(zx_WALK_WO_a_Address) */

int zx_WALK_WO_a_Address(struct zx_ctx* c, struct zx_a_Address_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   a_EndpointReference
#define EL_STRUCT zx_a_EndpointReference_s
#define EL_NS     a
#define EL_TAG    EndpointReference

/* FUNC(zx_FREE_a_EndpointReference) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

/* Called by: */
void zx_FREE_a_EndpointReference(struct zx_ctx* c, struct zx_a_EndpointReference_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */

  zx_free_attr(c, x->notOnOrAfter, free_strs);
  zx_free_attr(c, x->mustUnderstand, free_strs);
  zx_free_attr(c, x->actor, free_strs);
  zx_free_attr(c, x->Id, free_strs);

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

/* FUNC(zx_NEW_a_EndpointReference) */

/* Trivial allocator/constructor for the datatype. */

/* Called by: */
struct zx_a_EndpointReference_s* zx_NEW_a_EndpointReference(struct zx_ctx* c)
{
  struct zx_a_EndpointReference_s* x = ZX_ZALLOC(c, struct zx_a_EndpointReference_s);
  x->gg.g.tok = zx_a_EndpointReference_ELEM;
  return x;
}

#ifdef ZX_ENA_AUX

/* FUNC(zx_DUP_STRS_a_EndpointReference) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

/* Called by: */
void zx_DUP_STRS_a_EndpointReference(struct zx_ctx* c, struct zx_a_EndpointReference_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */

  zx_dup_attr(c, x->notOnOrAfter);
  zx_dup_attr(c, x->mustUnderstand);
  zx_dup_attr(c, x->actor);
  zx_dup_attr(c, x->Id);

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

/* FUNC(zx_DEEP_CLONE_a_EndpointReference) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

/* Called by: */
struct zx_a_EndpointReference_s* zx_DEEP_CLONE_a_EndpointReference(struct zx_ctx* c, struct zx_a_EndpointReference_s* x, int dup_strs)
{
  x = (struct zx_a_EndpointReference_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zx_a_EndpointReference_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */

  x->notOnOrAfter = zx_clone_attr(c, x->notOnOrAfter);
  x->mustUnderstand = zx_clone_attr(c, x->mustUnderstand);
  x->actor = zx_clone_attr(c, x->actor);
  x->Id = zx_clone_attr(c, x->Id);

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

/* FUNC(zx_WALK_SO_a_EndpointReference) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zx_WALK_SO_a_EndpointReference(struct zx_ctx* c, struct zx_a_EndpointReference_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

/* FUNC(zx_WALK_WO_a_EndpointReference) */

int zx_WALK_WO_a_EndpointReference(struct zx_ctx* c, struct zx_a_EndpointReference_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   a_FaultTo
#define EL_STRUCT zx_a_FaultTo_s
#define EL_NS     a
#define EL_TAG    FaultTo

/* FUNC(zx_FREE_a_FaultTo) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

/* Called by: */
void zx_FREE_a_FaultTo(struct zx_ctx* c, struct zx_a_FaultTo_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */

  zx_free_attr(c, x->notOnOrAfter, free_strs);
  zx_free_attr(c, x->mustUnderstand, free_strs);
  zx_free_attr(c, x->actor, free_strs);
  zx_free_attr(c, x->Id, free_strs);

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

/* FUNC(zx_NEW_a_FaultTo) */

/* Trivial allocator/constructor for the datatype. */

/* Called by: */
struct zx_a_FaultTo_s* zx_NEW_a_FaultTo(struct zx_ctx* c)
{
  struct zx_a_FaultTo_s* x = ZX_ZALLOC(c, struct zx_a_FaultTo_s);
  x->gg.g.tok = zx_a_FaultTo_ELEM;
  return x;
}

#ifdef ZX_ENA_AUX

/* FUNC(zx_DUP_STRS_a_FaultTo) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

/* Called by: */
void zx_DUP_STRS_a_FaultTo(struct zx_ctx* c, struct zx_a_FaultTo_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */

  zx_dup_attr(c, x->notOnOrAfter);
  zx_dup_attr(c, x->mustUnderstand);
  zx_dup_attr(c, x->actor);
  zx_dup_attr(c, x->Id);

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

/* FUNC(zx_DEEP_CLONE_a_FaultTo) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

/* Called by: */
struct zx_a_FaultTo_s* zx_DEEP_CLONE_a_FaultTo(struct zx_ctx* c, struct zx_a_FaultTo_s* x, int dup_strs)
{
  x = (struct zx_a_FaultTo_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zx_a_FaultTo_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */

  x->notOnOrAfter = zx_clone_attr(c, x->notOnOrAfter);
  x->mustUnderstand = zx_clone_attr(c, x->mustUnderstand);
  x->actor = zx_clone_attr(c, x->actor);
  x->Id = zx_clone_attr(c, x->Id);

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

/* FUNC(zx_WALK_SO_a_FaultTo) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zx_WALK_SO_a_FaultTo(struct zx_ctx* c, struct zx_a_FaultTo_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

/* FUNC(zx_WALK_WO_a_FaultTo) */

int zx_WALK_WO_a_FaultTo(struct zx_ctx* c, struct zx_a_FaultTo_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   a_From
#define EL_STRUCT zx_a_From_s
#define EL_NS     a
#define EL_TAG    From

/* FUNC(zx_FREE_a_From) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

/* Called by: */
void zx_FREE_a_From(struct zx_ctx* c, struct zx_a_From_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */

  zx_free_attr(c, x->notOnOrAfter, free_strs);
  zx_free_attr(c, x->mustUnderstand, free_strs);
  zx_free_attr(c, x->actor, free_strs);
  zx_free_attr(c, x->Id, free_strs);

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

/* FUNC(zx_NEW_a_From) */

/* Trivial allocator/constructor for the datatype. */

/* Called by: */
struct zx_a_From_s* zx_NEW_a_From(struct zx_ctx* c)
{
  struct zx_a_From_s* x = ZX_ZALLOC(c, struct zx_a_From_s);
  x->gg.g.tok = zx_a_From_ELEM;
  return x;
}

#ifdef ZX_ENA_AUX

/* FUNC(zx_DUP_STRS_a_From) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

/* Called by: */
void zx_DUP_STRS_a_From(struct zx_ctx* c, struct zx_a_From_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */

  zx_dup_attr(c, x->notOnOrAfter);
  zx_dup_attr(c, x->mustUnderstand);
  zx_dup_attr(c, x->actor);
  zx_dup_attr(c, x->Id);

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

/* FUNC(zx_DEEP_CLONE_a_From) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

/* Called by: */
struct zx_a_From_s* zx_DEEP_CLONE_a_From(struct zx_ctx* c, struct zx_a_From_s* x, int dup_strs)
{
  x = (struct zx_a_From_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zx_a_From_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */

  x->notOnOrAfter = zx_clone_attr(c, x->notOnOrAfter);
  x->mustUnderstand = zx_clone_attr(c, x->mustUnderstand);
  x->actor = zx_clone_attr(c, x->actor);
  x->Id = zx_clone_attr(c, x->Id);

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

/* FUNC(zx_WALK_SO_a_From) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zx_WALK_SO_a_From(struct zx_ctx* c, struct zx_a_From_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

/* FUNC(zx_WALK_WO_a_From) */

int zx_WALK_WO_a_From(struct zx_ctx* c, struct zx_a_From_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   a_MessageID
#define EL_STRUCT zx_a_MessageID_s
#define EL_NS     a
#define EL_TAG    MessageID

/* FUNC(zx_FREE_a_MessageID) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

/* Called by: */
void zx_FREE_a_MessageID(struct zx_ctx* c, struct zx_a_MessageID_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */

  zx_free_attr(c, x->mustUnderstand, free_strs);
  zx_free_attr(c, x->actor, free_strs);
  zx_free_attr(c, x->Id, free_strs);



  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zx_NEW_a_MessageID) */

/* Trivial allocator/constructor for the datatype. */

/* Called by: */
struct zx_a_MessageID_s* zx_NEW_a_MessageID(struct zx_ctx* c)
{
  struct zx_a_MessageID_s* x = ZX_ZALLOC(c, struct zx_a_MessageID_s);
  x->gg.g.tok = zx_a_MessageID_ELEM;
  return x;
}

#ifdef ZX_ENA_AUX

/* FUNC(zx_DUP_STRS_a_MessageID) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

/* Called by: */
void zx_DUP_STRS_a_MessageID(struct zx_ctx* c, struct zx_a_MessageID_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */

  zx_dup_attr(c, x->mustUnderstand);
  zx_dup_attr(c, x->actor);
  zx_dup_attr(c, x->Id);


}

/* FUNC(zx_DEEP_CLONE_a_MessageID) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

/* Called by: */
struct zx_a_MessageID_s* zx_DEEP_CLONE_a_MessageID(struct zx_ctx* c, struct zx_a_MessageID_s* x, int dup_strs)
{
  x = (struct zx_a_MessageID_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zx_a_MessageID_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */

  x->mustUnderstand = zx_clone_attr(c, x->mustUnderstand);
  x->actor = zx_clone_attr(c, x->actor);
  x->Id = zx_clone_attr(c, x->Id);


  return x;
}

/* FUNC(zx_WALK_SO_a_MessageID) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zx_WALK_SO_a_MessageID(struct zx_ctx* c, struct zx_a_MessageID_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

/* FUNC(zx_WALK_WO_a_MessageID) */

int zx_WALK_WO_a_MessageID(struct zx_ctx* c, struct zx_a_MessageID_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   a_Metadata
#define EL_STRUCT zx_a_Metadata_s
#define EL_NS     a
#define EL_TAG    Metadata

/* FUNC(zx_FREE_a_Metadata) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

/* Called by: */
void zx_FREE_a_Metadata(struct zx_ctx* c, struct zx_a_Metadata_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */


  {
      struct zx_sbf_Framework_s* e;
      struct zx_sbf_Framework_s* en;
      for (e = x->Framework; e; e = en) {
	  en = (struct zx_sbf_Framework_s*)e->gg.g.n;
	  zx_FREE_sbf_Framework(c, e, free_strs);
      }
  }
  zx_free_simple_elems(c, x->Abstract, free_strs);
  zx_free_simple_elems(c, x->ProviderID, free_strs);
  zx_free_simple_elems(c, x->ServiceType, free_strs);
  {
      struct zx_di_SecurityContext_s* e;
      struct zx_di_SecurityContext_s* en;
      for (e = x->SecurityContext; e; e = en) {
	  en = (struct zx_di_SecurityContext_s*)e->gg.g.n;
	  zx_FREE_di_SecurityContext(c, e, free_strs);
      }
  }


  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zx_NEW_a_Metadata) */

/* Trivial allocator/constructor for the datatype. */

/* Called by: */
struct zx_a_Metadata_s* zx_NEW_a_Metadata(struct zx_ctx* c)
{
  struct zx_a_Metadata_s* x = ZX_ZALLOC(c, struct zx_a_Metadata_s);
  x->gg.g.tok = zx_a_Metadata_ELEM;
  return x;
}

#ifdef ZX_ENA_AUX

/* FUNC(zx_DUP_STRS_a_Metadata) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

/* Called by: */
void zx_DUP_STRS_a_Metadata(struct zx_ctx* c, struct zx_a_Metadata_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */


  {
      struct zx_sbf_Framework_s* e;
      for (e = x->Framework; e; e = (struct zx_sbf_Framework_s*)e->gg.g.n)
	  zx_DUP_STRS_sbf_Framework(c, e);
  }
  zx_dup_strs_simple_elems(c, x->Abstract);
  zx_dup_strs_simple_elems(c, x->ProviderID);
  zx_dup_strs_simple_elems(c, x->ServiceType);
  {
      struct zx_di_SecurityContext_s* e;
      for (e = x->SecurityContext; e; e = (struct zx_di_SecurityContext_s*)e->gg.g.n)
	  zx_DUP_STRS_di_SecurityContext(c, e);
  }

}

/* FUNC(zx_DEEP_CLONE_a_Metadata) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

/* Called by: */
struct zx_a_Metadata_s* zx_DEEP_CLONE_a_Metadata(struct zx_ctx* c, struct zx_a_Metadata_s* x, int dup_strs)
{
  x = (struct zx_a_Metadata_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zx_a_Metadata_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */


  {
      struct zx_sbf_Framework_s* e;
      struct zx_sbf_Framework_s* en;
      struct zx_sbf_Framework_s* enn;
      for (enn = 0, e = x->Framework; e; e = (struct zx_sbf_Framework_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_sbf_Framework(c, e, dup_strs);
	  if (!enn)
	      x->Framework = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  x->Abstract = zx_deep_clone_simple_elems(c,x->Abstract, dup_strs);
  x->ProviderID = zx_deep_clone_simple_elems(c,x->ProviderID, dup_strs);
  x->ServiceType = zx_deep_clone_simple_elems(c,x->ServiceType, dup_strs);
  {
      struct zx_di_SecurityContext_s* e;
      struct zx_di_SecurityContext_s* en;
      struct zx_di_SecurityContext_s* enn;
      for (enn = 0, e = x->SecurityContext; e; e = (struct zx_di_SecurityContext_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_di_SecurityContext(c, e, dup_strs);
	  if (!enn)
	      x->SecurityContext = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }

  return x;
}

/* FUNC(zx_WALK_SO_a_Metadata) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zx_WALK_SO_a_Metadata(struct zx_ctx* c, struct zx_a_Metadata_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  int ret = callback(&x->gg.g, ctx);
  if (ret)
    return ret;
  
  /* *** deal with xmlns specifications in exc c14n way */


  
  ret = zx_walk_so_unknown_attributes(c, &x->gg, ctx, callback); 
  if (ret)
    return ret;

  {
      struct zx_sbf_Framework_s* e;
      for (e = x->Framework; e; e = (struct zx_sbf_Framework_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_sbf_Framework(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  ret = zx_walk_so_simple_elems(c, x->Abstract, ctx, callback);
  if (ret)
    return ret;
  ret = zx_walk_so_simple_elems(c, x->ProviderID, ctx, callback);
  if (ret)
    return ret;
  ret = zx_walk_so_simple_elems(c, x->ServiceType, ctx, callback);
  if (ret)
    return ret;
  {
      struct zx_di_SecurityContext_s* e;
      for (e = x->SecurityContext; e; e = (struct zx_di_SecurityContext_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_di_SecurityContext(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }

  
  return zx_walk_so_unknown_elems_and_content(c, &x->gg, ctx, callback);
}

/* FUNC(zx_WALK_WO_a_Metadata) */

int zx_WALK_WO_a_Metadata(struct zx_ctx* c, struct zx_a_Metadata_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   a_ProblemAction
#define EL_STRUCT zx_a_ProblemAction_s
#define EL_NS     a
#define EL_TAG    ProblemAction

/* FUNC(zx_FREE_a_ProblemAction) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

/* Called by: */
void zx_FREE_a_ProblemAction(struct zx_ctx* c, struct zx_a_ProblemAction_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */

  zx_free_attr(c, x->mustUnderstand, free_strs);
  zx_free_attr(c, x->actor, free_strs);
  zx_free_attr(c, x->Id, free_strs);

  {
      struct zx_a_Action_s* e;
      struct zx_a_Action_s* en;
      for (e = x->Action; e; e = en) {
	  en = (struct zx_a_Action_s*)e->gg.g.n;
	  zx_FREE_a_Action(c, e, free_strs);
      }
  }
  zx_free_simple_elems(c, x->SoapAction, free_strs);


  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zx_NEW_a_ProblemAction) */

/* Trivial allocator/constructor for the datatype. */

/* Called by: */
struct zx_a_ProblemAction_s* zx_NEW_a_ProblemAction(struct zx_ctx* c)
{
  struct zx_a_ProblemAction_s* x = ZX_ZALLOC(c, struct zx_a_ProblemAction_s);
  x->gg.g.tok = zx_a_ProblemAction_ELEM;
  return x;
}

#ifdef ZX_ENA_AUX

/* FUNC(zx_DUP_STRS_a_ProblemAction) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

/* Called by: */
void zx_DUP_STRS_a_ProblemAction(struct zx_ctx* c, struct zx_a_ProblemAction_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */

  zx_dup_attr(c, x->mustUnderstand);
  zx_dup_attr(c, x->actor);
  zx_dup_attr(c, x->Id);

  {
      struct zx_a_Action_s* e;
      for (e = x->Action; e; e = (struct zx_a_Action_s*)e->gg.g.n)
	  zx_DUP_STRS_a_Action(c, e);
  }
  zx_dup_strs_simple_elems(c, x->SoapAction);

}

/* FUNC(zx_DEEP_CLONE_a_ProblemAction) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

/* Called by: */
struct zx_a_ProblemAction_s* zx_DEEP_CLONE_a_ProblemAction(struct zx_ctx* c, struct zx_a_ProblemAction_s* x, int dup_strs)
{
  x = (struct zx_a_ProblemAction_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zx_a_ProblemAction_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */

  x->mustUnderstand = zx_clone_attr(c, x->mustUnderstand);
  x->actor = zx_clone_attr(c, x->actor);
  x->Id = zx_clone_attr(c, x->Id);

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
  x->SoapAction = zx_deep_clone_simple_elems(c,x->SoapAction, dup_strs);

  return x;
}

/* FUNC(zx_WALK_SO_a_ProblemAction) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zx_WALK_SO_a_ProblemAction(struct zx_ctx* c, struct zx_a_ProblemAction_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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
  ret = zx_walk_so_simple_elems(c, x->SoapAction, ctx, callback);
  if (ret)
    return ret;

  
  return zx_walk_so_unknown_elems_and_content(c, &x->gg, ctx, callback);
}

/* FUNC(zx_WALK_WO_a_ProblemAction) */

int zx_WALK_WO_a_ProblemAction(struct zx_ctx* c, struct zx_a_ProblemAction_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   a_ProblemHeader
#define EL_STRUCT zx_a_ProblemHeader_s
#define EL_NS     a
#define EL_TAG    ProblemHeader

/* FUNC(zx_FREE_a_ProblemHeader) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

/* Called by: */
void zx_FREE_a_ProblemHeader(struct zx_ctx* c, struct zx_a_ProblemHeader_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */

  zx_free_attr(c, x->mustUnderstand, free_strs);
  zx_free_attr(c, x->actor, free_strs);
  zx_free_attr(c, x->Id, free_strs);



  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zx_NEW_a_ProblemHeader) */

/* Trivial allocator/constructor for the datatype. */

/* Called by: */
struct zx_a_ProblemHeader_s* zx_NEW_a_ProblemHeader(struct zx_ctx* c)
{
  struct zx_a_ProblemHeader_s* x = ZX_ZALLOC(c, struct zx_a_ProblemHeader_s);
  x->gg.g.tok = zx_a_ProblemHeader_ELEM;
  return x;
}

#ifdef ZX_ENA_AUX

/* FUNC(zx_DUP_STRS_a_ProblemHeader) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

/* Called by: */
void zx_DUP_STRS_a_ProblemHeader(struct zx_ctx* c, struct zx_a_ProblemHeader_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */

  zx_dup_attr(c, x->mustUnderstand);
  zx_dup_attr(c, x->actor);
  zx_dup_attr(c, x->Id);


}

/* FUNC(zx_DEEP_CLONE_a_ProblemHeader) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

/* Called by: */
struct zx_a_ProblemHeader_s* zx_DEEP_CLONE_a_ProblemHeader(struct zx_ctx* c, struct zx_a_ProblemHeader_s* x, int dup_strs)
{
  x = (struct zx_a_ProblemHeader_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zx_a_ProblemHeader_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */

  x->mustUnderstand = zx_clone_attr(c, x->mustUnderstand);
  x->actor = zx_clone_attr(c, x->actor);
  x->Id = zx_clone_attr(c, x->Id);


  return x;
}

/* FUNC(zx_WALK_SO_a_ProblemHeader) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zx_WALK_SO_a_ProblemHeader(struct zx_ctx* c, struct zx_a_ProblemHeader_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

/* FUNC(zx_WALK_WO_a_ProblemHeader) */

int zx_WALK_WO_a_ProblemHeader(struct zx_ctx* c, struct zx_a_ProblemHeader_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   a_ProblemHeaderQName
#define EL_STRUCT zx_a_ProblemHeaderQName_s
#define EL_NS     a
#define EL_TAG    ProblemHeaderQName

/* FUNC(zx_FREE_a_ProblemHeaderQName) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

/* Called by: */
void zx_FREE_a_ProblemHeaderQName(struct zx_ctx* c, struct zx_a_ProblemHeaderQName_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */

  zx_free_attr(c, x->mustUnderstand, free_strs);
  zx_free_attr(c, x->actor, free_strs);
  zx_free_attr(c, x->Id, free_strs);



  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zx_NEW_a_ProblemHeaderQName) */

/* Trivial allocator/constructor for the datatype. */

/* Called by: */
struct zx_a_ProblemHeaderQName_s* zx_NEW_a_ProblemHeaderQName(struct zx_ctx* c)
{
  struct zx_a_ProblemHeaderQName_s* x = ZX_ZALLOC(c, struct zx_a_ProblemHeaderQName_s);
  x->gg.g.tok = zx_a_ProblemHeaderQName_ELEM;
  return x;
}

#ifdef ZX_ENA_AUX

/* FUNC(zx_DUP_STRS_a_ProblemHeaderQName) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

/* Called by: */
void zx_DUP_STRS_a_ProblemHeaderQName(struct zx_ctx* c, struct zx_a_ProblemHeaderQName_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */

  zx_dup_attr(c, x->mustUnderstand);
  zx_dup_attr(c, x->actor);
  zx_dup_attr(c, x->Id);


}

/* FUNC(zx_DEEP_CLONE_a_ProblemHeaderQName) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

/* Called by: */
struct zx_a_ProblemHeaderQName_s* zx_DEEP_CLONE_a_ProblemHeaderQName(struct zx_ctx* c, struct zx_a_ProblemHeaderQName_s* x, int dup_strs)
{
  x = (struct zx_a_ProblemHeaderQName_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zx_a_ProblemHeaderQName_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */

  x->mustUnderstand = zx_clone_attr(c, x->mustUnderstand);
  x->actor = zx_clone_attr(c, x->actor);
  x->Id = zx_clone_attr(c, x->Id);


  return x;
}

/* FUNC(zx_WALK_SO_a_ProblemHeaderQName) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zx_WALK_SO_a_ProblemHeaderQName(struct zx_ctx* c, struct zx_a_ProblemHeaderQName_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

/* FUNC(zx_WALK_WO_a_ProblemHeaderQName) */

int zx_WALK_WO_a_ProblemHeaderQName(struct zx_ctx* c, struct zx_a_ProblemHeaderQName_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   a_ProblemURI
#define EL_STRUCT zx_a_ProblemURI_s
#define EL_NS     a
#define EL_TAG    ProblemURI

/* FUNC(zx_FREE_a_ProblemURI) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

/* Called by: */
void zx_FREE_a_ProblemURI(struct zx_ctx* c, struct zx_a_ProblemURI_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */

  zx_free_attr(c, x->mustUnderstand, free_strs);
  zx_free_attr(c, x->actor, free_strs);
  zx_free_attr(c, x->Id, free_strs);



  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zx_NEW_a_ProblemURI) */

/* Trivial allocator/constructor for the datatype. */

/* Called by: */
struct zx_a_ProblemURI_s* zx_NEW_a_ProblemURI(struct zx_ctx* c)
{
  struct zx_a_ProblemURI_s* x = ZX_ZALLOC(c, struct zx_a_ProblemURI_s);
  x->gg.g.tok = zx_a_ProblemURI_ELEM;
  return x;
}

#ifdef ZX_ENA_AUX

/* FUNC(zx_DUP_STRS_a_ProblemURI) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

/* Called by: */
void zx_DUP_STRS_a_ProblemURI(struct zx_ctx* c, struct zx_a_ProblemURI_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */

  zx_dup_attr(c, x->mustUnderstand);
  zx_dup_attr(c, x->actor);
  zx_dup_attr(c, x->Id);


}

/* FUNC(zx_DEEP_CLONE_a_ProblemURI) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

/* Called by: */
struct zx_a_ProblemURI_s* zx_DEEP_CLONE_a_ProblemURI(struct zx_ctx* c, struct zx_a_ProblemURI_s* x, int dup_strs)
{
  x = (struct zx_a_ProblemURI_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zx_a_ProblemURI_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */

  x->mustUnderstand = zx_clone_attr(c, x->mustUnderstand);
  x->actor = zx_clone_attr(c, x->actor);
  x->Id = zx_clone_attr(c, x->Id);


  return x;
}

/* FUNC(zx_WALK_SO_a_ProblemURI) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zx_WALK_SO_a_ProblemURI(struct zx_ctx* c, struct zx_a_ProblemURI_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

/* FUNC(zx_WALK_WO_a_ProblemURI) */

int zx_WALK_WO_a_ProblemURI(struct zx_ctx* c, struct zx_a_ProblemURI_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   a_ReferenceParameters
#define EL_STRUCT zx_a_ReferenceParameters_s
#define EL_NS     a
#define EL_TAG    ReferenceParameters

/* FUNC(zx_FREE_a_ReferenceParameters) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

/* Called by: */
void zx_FREE_a_ReferenceParameters(struct zx_ctx* c, struct zx_a_ReferenceParameters_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */

  zx_free_attr(c, x->mustUnderstand, free_strs);
  zx_free_attr(c, x->actor, free_strs);
  zx_free_attr(c, x->Id, free_strs);



  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zx_NEW_a_ReferenceParameters) */

/* Trivial allocator/constructor for the datatype. */

/* Called by: */
struct zx_a_ReferenceParameters_s* zx_NEW_a_ReferenceParameters(struct zx_ctx* c)
{
  struct zx_a_ReferenceParameters_s* x = ZX_ZALLOC(c, struct zx_a_ReferenceParameters_s);
  x->gg.g.tok = zx_a_ReferenceParameters_ELEM;
  return x;
}

#ifdef ZX_ENA_AUX

/* FUNC(zx_DUP_STRS_a_ReferenceParameters) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

/* Called by: */
void zx_DUP_STRS_a_ReferenceParameters(struct zx_ctx* c, struct zx_a_ReferenceParameters_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */

  zx_dup_attr(c, x->mustUnderstand);
  zx_dup_attr(c, x->actor);
  zx_dup_attr(c, x->Id);


}

/* FUNC(zx_DEEP_CLONE_a_ReferenceParameters) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

/* Called by: */
struct zx_a_ReferenceParameters_s* zx_DEEP_CLONE_a_ReferenceParameters(struct zx_ctx* c, struct zx_a_ReferenceParameters_s* x, int dup_strs)
{
  x = (struct zx_a_ReferenceParameters_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zx_a_ReferenceParameters_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */

  x->mustUnderstand = zx_clone_attr(c, x->mustUnderstand);
  x->actor = zx_clone_attr(c, x->actor);
  x->Id = zx_clone_attr(c, x->Id);


  return x;
}

/* FUNC(zx_WALK_SO_a_ReferenceParameters) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zx_WALK_SO_a_ReferenceParameters(struct zx_ctx* c, struct zx_a_ReferenceParameters_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

/* FUNC(zx_WALK_WO_a_ReferenceParameters) */

int zx_WALK_WO_a_ReferenceParameters(struct zx_ctx* c, struct zx_a_ReferenceParameters_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   a_RelatesTo
#define EL_STRUCT zx_a_RelatesTo_s
#define EL_NS     a
#define EL_TAG    RelatesTo

/* FUNC(zx_FREE_a_RelatesTo) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

/* Called by: */
void zx_FREE_a_RelatesTo(struct zx_ctx* c, struct zx_a_RelatesTo_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */

  zx_free_attr(c, x->RelationshipType, free_strs);
  zx_free_attr(c, x->mustUnderstand, free_strs);
  zx_free_attr(c, x->actor, free_strs);
  zx_free_attr(c, x->Id, free_strs);



  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zx_NEW_a_RelatesTo) */

/* Trivial allocator/constructor for the datatype. */

/* Called by: */
struct zx_a_RelatesTo_s* zx_NEW_a_RelatesTo(struct zx_ctx* c)
{
  struct zx_a_RelatesTo_s* x = ZX_ZALLOC(c, struct zx_a_RelatesTo_s);
  x->gg.g.tok = zx_a_RelatesTo_ELEM;
  return x;
}

#ifdef ZX_ENA_AUX

/* FUNC(zx_DUP_STRS_a_RelatesTo) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

/* Called by: */
void zx_DUP_STRS_a_RelatesTo(struct zx_ctx* c, struct zx_a_RelatesTo_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */

  zx_dup_attr(c, x->RelationshipType);
  zx_dup_attr(c, x->mustUnderstand);
  zx_dup_attr(c, x->actor);
  zx_dup_attr(c, x->Id);


}

/* FUNC(zx_DEEP_CLONE_a_RelatesTo) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

/* Called by: */
struct zx_a_RelatesTo_s* zx_DEEP_CLONE_a_RelatesTo(struct zx_ctx* c, struct zx_a_RelatesTo_s* x, int dup_strs)
{
  x = (struct zx_a_RelatesTo_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zx_a_RelatesTo_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */

  x->RelationshipType = zx_clone_attr(c, x->RelationshipType);
  x->mustUnderstand = zx_clone_attr(c, x->mustUnderstand);
  x->actor = zx_clone_attr(c, x->actor);
  x->Id = zx_clone_attr(c, x->Id);


  return x;
}

/* FUNC(zx_WALK_SO_a_RelatesTo) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zx_WALK_SO_a_RelatesTo(struct zx_ctx* c, struct zx_a_RelatesTo_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

/* FUNC(zx_WALK_WO_a_RelatesTo) */

int zx_WALK_WO_a_RelatesTo(struct zx_ctx* c, struct zx_a_RelatesTo_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   a_ReplyTo
#define EL_STRUCT zx_a_ReplyTo_s
#define EL_NS     a
#define EL_TAG    ReplyTo

/* FUNC(zx_FREE_a_ReplyTo) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

/* Called by: */
void zx_FREE_a_ReplyTo(struct zx_ctx* c, struct zx_a_ReplyTo_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */

  zx_free_attr(c, x->notOnOrAfter, free_strs);
  zx_free_attr(c, x->mustUnderstand, free_strs);
  zx_free_attr(c, x->actor, free_strs);
  zx_free_attr(c, x->Id, free_strs);

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

/* FUNC(zx_NEW_a_ReplyTo) */

/* Trivial allocator/constructor for the datatype. */

/* Called by: */
struct zx_a_ReplyTo_s* zx_NEW_a_ReplyTo(struct zx_ctx* c)
{
  struct zx_a_ReplyTo_s* x = ZX_ZALLOC(c, struct zx_a_ReplyTo_s);
  x->gg.g.tok = zx_a_ReplyTo_ELEM;
  return x;
}

#ifdef ZX_ENA_AUX

/* FUNC(zx_DUP_STRS_a_ReplyTo) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

/* Called by: */
void zx_DUP_STRS_a_ReplyTo(struct zx_ctx* c, struct zx_a_ReplyTo_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */

  zx_dup_attr(c, x->notOnOrAfter);
  zx_dup_attr(c, x->mustUnderstand);
  zx_dup_attr(c, x->actor);
  zx_dup_attr(c, x->Id);

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

/* FUNC(zx_DEEP_CLONE_a_ReplyTo) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

/* Called by: */
struct zx_a_ReplyTo_s* zx_DEEP_CLONE_a_ReplyTo(struct zx_ctx* c, struct zx_a_ReplyTo_s* x, int dup_strs)
{
  x = (struct zx_a_ReplyTo_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zx_a_ReplyTo_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */

  x->notOnOrAfter = zx_clone_attr(c, x->notOnOrAfter);
  x->mustUnderstand = zx_clone_attr(c, x->mustUnderstand);
  x->actor = zx_clone_attr(c, x->actor);
  x->Id = zx_clone_attr(c, x->Id);

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

/* FUNC(zx_WALK_SO_a_ReplyTo) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zx_WALK_SO_a_ReplyTo(struct zx_ctx* c, struct zx_a_ReplyTo_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

/* FUNC(zx_WALK_WO_a_ReplyTo) */

int zx_WALK_WO_a_ReplyTo(struct zx_ctx* c, struct zx_a_ReplyTo_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   a_RetryAfter
#define EL_STRUCT zx_a_RetryAfter_s
#define EL_NS     a
#define EL_TAG    RetryAfter

/* FUNC(zx_FREE_a_RetryAfter) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

/* Called by: */
void zx_FREE_a_RetryAfter(struct zx_ctx* c, struct zx_a_RetryAfter_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */

  zx_free_attr(c, x->mustUnderstand, free_strs);
  zx_free_attr(c, x->actor, free_strs);
  zx_free_attr(c, x->Id, free_strs);



  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zx_NEW_a_RetryAfter) */

/* Trivial allocator/constructor for the datatype. */

/* Called by: */
struct zx_a_RetryAfter_s* zx_NEW_a_RetryAfter(struct zx_ctx* c)
{
  struct zx_a_RetryAfter_s* x = ZX_ZALLOC(c, struct zx_a_RetryAfter_s);
  x->gg.g.tok = zx_a_RetryAfter_ELEM;
  return x;
}

#ifdef ZX_ENA_AUX

/* FUNC(zx_DUP_STRS_a_RetryAfter) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

/* Called by: */
void zx_DUP_STRS_a_RetryAfter(struct zx_ctx* c, struct zx_a_RetryAfter_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */

  zx_dup_attr(c, x->mustUnderstand);
  zx_dup_attr(c, x->actor);
  zx_dup_attr(c, x->Id);


}

/* FUNC(zx_DEEP_CLONE_a_RetryAfter) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

/* Called by: */
struct zx_a_RetryAfter_s* zx_DEEP_CLONE_a_RetryAfter(struct zx_ctx* c, struct zx_a_RetryAfter_s* x, int dup_strs)
{
  x = (struct zx_a_RetryAfter_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zx_a_RetryAfter_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */

  x->mustUnderstand = zx_clone_attr(c, x->mustUnderstand);
  x->actor = zx_clone_attr(c, x->actor);
  x->Id = zx_clone_attr(c, x->Id);


  return x;
}

/* FUNC(zx_WALK_SO_a_RetryAfter) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zx_WALK_SO_a_RetryAfter(struct zx_ctx* c, struct zx_a_RetryAfter_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

/* FUNC(zx_WALK_WO_a_RetryAfter) */

int zx_WALK_WO_a_RetryAfter(struct zx_ctx* c, struct zx_a_RetryAfter_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   a_To
#define EL_STRUCT zx_a_To_s
#define EL_NS     a
#define EL_TAG    To

/* FUNC(zx_FREE_a_To) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

/* Called by: */
void zx_FREE_a_To(struct zx_ctx* c, struct zx_a_To_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */

  zx_free_attr(c, x->mustUnderstand, free_strs);
  zx_free_attr(c, x->actor, free_strs);
  zx_free_attr(c, x->Id, free_strs);



  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zx_NEW_a_To) */

/* Trivial allocator/constructor for the datatype. */

/* Called by: */
struct zx_a_To_s* zx_NEW_a_To(struct zx_ctx* c)
{
  struct zx_a_To_s* x = ZX_ZALLOC(c, struct zx_a_To_s);
  x->gg.g.tok = zx_a_To_ELEM;
  return x;
}

#ifdef ZX_ENA_AUX

/* FUNC(zx_DUP_STRS_a_To) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

/* Called by: */
void zx_DUP_STRS_a_To(struct zx_ctx* c, struct zx_a_To_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */

  zx_dup_attr(c, x->mustUnderstand);
  zx_dup_attr(c, x->actor);
  zx_dup_attr(c, x->Id);


}

/* FUNC(zx_DEEP_CLONE_a_To) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

/* Called by: */
struct zx_a_To_s* zx_DEEP_CLONE_a_To(struct zx_ctx* c, struct zx_a_To_s* x, int dup_strs)
{
  x = (struct zx_a_To_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zx_a_To_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */

  x->mustUnderstand = zx_clone_attr(c, x->mustUnderstand);
  x->actor = zx_clone_attr(c, x->actor);
  x->Id = zx_clone_attr(c, x->Id);


  return x;
}

/* FUNC(zx_WALK_SO_a_To) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zx_WALK_SO_a_To(struct zx_ctx* c, struct zx_a_To_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

/* FUNC(zx_WALK_WO_a_To) */

int zx_WALK_WO_a_To(struct zx_ctx* c, struct zx_a_To_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  ERR("*** walk_wo not implemented %d", 0);
  return 0;
}

#endif


/* EOF -- c/zx-a-aux.c */