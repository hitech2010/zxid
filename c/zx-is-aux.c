/* c/zx-is-aux.c - WARNING: This file was automatically generated. DO NOT EDIT!
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
#include "c/zx-is-data.h"



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

#define EL_NAME   is_Confirm
#define EL_STRUCT zx_is_Confirm_s
#define EL_NS     is
#define EL_TAG    Confirm

/* FUNC(zx_FREE_is_Confirm) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

/* Called by: */
void zx_FREE_is_Confirm(struct zx_ctx* c, struct zx_is_Confirm_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */

  zx_free_attr(c, x->name, free_strs);

  {
      struct zx_is_Help_s* e;
      struct zx_is_Help_s* en;
      for (e = x->Help; e; e = en) {
	  en = (struct zx_is_Help_s*)e->gg.g.n;
	  zx_FREE_is_Help(c, e, free_strs);
      }
  }
  zx_free_simple_elems(c, x->Hint, free_strs);
  zx_free_simple_elems(c, x->Label, free_strs);
  zx_free_simple_elems(c, x->Value, free_strs);


  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zx_NEW_is_Confirm) */

/* Trivial allocator/constructor for the datatype. */

/* Called by: */
struct zx_is_Confirm_s* zx_NEW_is_Confirm(struct zx_ctx* c)
{
  struct zx_is_Confirm_s* x = ZX_ZALLOC(c, struct zx_is_Confirm_s);
  x->gg.g.tok = zx_is_Confirm_ELEM;
  return x;
}

#ifdef ZX_ENA_AUX

/* FUNC(zx_DUP_STRS_is_Confirm) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

/* Called by: */
void zx_DUP_STRS_is_Confirm(struct zx_ctx* c, struct zx_is_Confirm_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */

  zx_dup_attr(c, x->name);

  {
      struct zx_is_Help_s* e;
      for (e = x->Help; e; e = (struct zx_is_Help_s*)e->gg.g.n)
	  zx_DUP_STRS_is_Help(c, e);
  }
  zx_dup_strs_simple_elems(c, x->Hint);
  zx_dup_strs_simple_elems(c, x->Label);
  zx_dup_strs_simple_elems(c, x->Value);

}

/* FUNC(zx_DEEP_CLONE_is_Confirm) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

/* Called by: */
struct zx_is_Confirm_s* zx_DEEP_CLONE_is_Confirm(struct zx_ctx* c, struct zx_is_Confirm_s* x, int dup_strs)
{
  x = (struct zx_is_Confirm_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zx_is_Confirm_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */

  x->name = zx_clone_attr(c, x->name);

  {
      struct zx_is_Help_s* e;
      struct zx_is_Help_s* en;
      struct zx_is_Help_s* enn;
      for (enn = 0, e = x->Help; e; e = (struct zx_is_Help_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_is_Help(c, e, dup_strs);
	  if (!enn)
	      x->Help = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  x->Hint = zx_deep_clone_simple_elems(c,x->Hint, dup_strs);
  x->Label = zx_deep_clone_simple_elems(c,x->Label, dup_strs);
  x->Value = zx_deep_clone_simple_elems(c,x->Value, dup_strs);

  return x;
}

/* FUNC(zx_WALK_SO_is_Confirm) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zx_WALK_SO_is_Confirm(struct zx_ctx* c, struct zx_is_Confirm_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  int ret = callback(&x->gg.g, ctx);
  if (ret)
    return ret;
  
  /* *** deal with xmlns specifications in exc c14n way */


  
  ret = zx_walk_so_unknown_attributes(c, &x->gg, ctx, callback); 
  if (ret)
    return ret;

  {
      struct zx_is_Help_s* e;
      for (e = x->Help; e; e = (struct zx_is_Help_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_is_Help(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  ret = zx_walk_so_simple_elems(c, x->Hint, ctx, callback);
  if (ret)
    return ret;
  ret = zx_walk_so_simple_elems(c, x->Label, ctx, callback);
  if (ret)
    return ret;
  ret = zx_walk_so_simple_elems(c, x->Value, ctx, callback);
  if (ret)
    return ret;

  
  return zx_walk_so_unknown_elems_and_content(c, &x->gg, ctx, callback);
}

/* FUNC(zx_WALK_WO_is_Confirm) */

int zx_WALK_WO_is_Confirm(struct zx_ctx* c, struct zx_is_Confirm_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   is_Help
#define EL_STRUCT zx_is_Help_s
#define EL_NS     is
#define EL_TAG    Help

/* FUNC(zx_FREE_is_Help) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

/* Called by: */
void zx_FREE_is_Help(struct zx_ctx* c, struct zx_is_Help_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */

  zx_free_attr(c, x->label, free_strs);
  zx_free_attr(c, x->link, free_strs);
  zx_free_attr(c, x->moreLink, free_strs);



  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zx_NEW_is_Help) */

/* Trivial allocator/constructor for the datatype. */

/* Called by: */
struct zx_is_Help_s* zx_NEW_is_Help(struct zx_ctx* c)
{
  struct zx_is_Help_s* x = ZX_ZALLOC(c, struct zx_is_Help_s);
  x->gg.g.tok = zx_is_Help_ELEM;
  return x;
}

#ifdef ZX_ENA_AUX

/* FUNC(zx_DUP_STRS_is_Help) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

/* Called by: */
void zx_DUP_STRS_is_Help(struct zx_ctx* c, struct zx_is_Help_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */

  zx_dup_attr(c, x->label);
  zx_dup_attr(c, x->link);
  zx_dup_attr(c, x->moreLink);


}

/* FUNC(zx_DEEP_CLONE_is_Help) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

/* Called by: */
struct zx_is_Help_s* zx_DEEP_CLONE_is_Help(struct zx_ctx* c, struct zx_is_Help_s* x, int dup_strs)
{
  x = (struct zx_is_Help_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zx_is_Help_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */

  x->label = zx_clone_attr(c, x->label);
  x->link = zx_clone_attr(c, x->link);
  x->moreLink = zx_clone_attr(c, x->moreLink);


  return x;
}

/* FUNC(zx_WALK_SO_is_Help) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zx_WALK_SO_is_Help(struct zx_ctx* c, struct zx_is_Help_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

/* FUNC(zx_WALK_WO_is_Help) */

int zx_WALK_WO_is_Help(struct zx_ctx* c, struct zx_is_Help_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   is_Inquiry
#define EL_STRUCT zx_is_Inquiry_s
#define EL_NS     is
#define EL_TAG    Inquiry

/* FUNC(zx_FREE_is_Inquiry) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

/* Called by: */
void zx_FREE_is_Inquiry(struct zx_ctx* c, struct zx_is_Inquiry_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */

  zx_free_attr(c, x->id, free_strs);
  zx_free_attr(c, x->title, free_strs);

  {
      struct zx_is_Help_s* e;
      struct zx_is_Help_s* en;
      for (e = x->Help; e; e = en) {
	  en = (struct zx_is_Help_s*)e->gg.g.n;
	  zx_FREE_is_Help(c, e, free_strs);
      }
  }
  {
      struct zx_is_Select_s* e;
      struct zx_is_Select_s* en;
      for (e = x->Select; e; e = en) {
	  en = (struct zx_is_Select_s*)e->gg.g.n;
	  zx_FREE_is_Select(c, e, free_strs);
      }
  }
  {
      struct zx_is_Confirm_s* e;
      struct zx_is_Confirm_s* en;
      for (e = x->Confirm; e; e = en) {
	  en = (struct zx_is_Confirm_s*)e->gg.g.n;
	  zx_FREE_is_Confirm(c, e, free_strs);
      }
  }
  {
      struct zx_is_Text_s* e;
      struct zx_is_Text_s* en;
      for (e = x->Text; e; e = en) {
	  en = (struct zx_is_Text_s*)e->gg.g.n;
	  zx_FREE_is_Text(c, e, free_strs);
      }
  }


  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zx_NEW_is_Inquiry) */

/* Trivial allocator/constructor for the datatype. */

/* Called by: */
struct zx_is_Inquiry_s* zx_NEW_is_Inquiry(struct zx_ctx* c)
{
  struct zx_is_Inquiry_s* x = ZX_ZALLOC(c, struct zx_is_Inquiry_s);
  x->gg.g.tok = zx_is_Inquiry_ELEM;
  return x;
}

#ifdef ZX_ENA_AUX

/* FUNC(zx_DUP_STRS_is_Inquiry) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

/* Called by: */
void zx_DUP_STRS_is_Inquiry(struct zx_ctx* c, struct zx_is_Inquiry_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */

  zx_dup_attr(c, x->id);
  zx_dup_attr(c, x->title);

  {
      struct zx_is_Help_s* e;
      for (e = x->Help; e; e = (struct zx_is_Help_s*)e->gg.g.n)
	  zx_DUP_STRS_is_Help(c, e);
  }
  {
      struct zx_is_Select_s* e;
      for (e = x->Select; e; e = (struct zx_is_Select_s*)e->gg.g.n)
	  zx_DUP_STRS_is_Select(c, e);
  }
  {
      struct zx_is_Confirm_s* e;
      for (e = x->Confirm; e; e = (struct zx_is_Confirm_s*)e->gg.g.n)
	  zx_DUP_STRS_is_Confirm(c, e);
  }
  {
      struct zx_is_Text_s* e;
      for (e = x->Text; e; e = (struct zx_is_Text_s*)e->gg.g.n)
	  zx_DUP_STRS_is_Text(c, e);
  }

}

/* FUNC(zx_DEEP_CLONE_is_Inquiry) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

/* Called by: */
struct zx_is_Inquiry_s* zx_DEEP_CLONE_is_Inquiry(struct zx_ctx* c, struct zx_is_Inquiry_s* x, int dup_strs)
{
  x = (struct zx_is_Inquiry_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zx_is_Inquiry_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */

  x->id = zx_clone_attr(c, x->id);
  x->title = zx_clone_attr(c, x->title);

  {
      struct zx_is_Help_s* e;
      struct zx_is_Help_s* en;
      struct zx_is_Help_s* enn;
      for (enn = 0, e = x->Help; e; e = (struct zx_is_Help_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_is_Help(c, e, dup_strs);
	  if (!enn)
	      x->Help = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zx_is_Select_s* e;
      struct zx_is_Select_s* en;
      struct zx_is_Select_s* enn;
      for (enn = 0, e = x->Select; e; e = (struct zx_is_Select_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_is_Select(c, e, dup_strs);
	  if (!enn)
	      x->Select = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zx_is_Confirm_s* e;
      struct zx_is_Confirm_s* en;
      struct zx_is_Confirm_s* enn;
      for (enn = 0, e = x->Confirm; e; e = (struct zx_is_Confirm_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_is_Confirm(c, e, dup_strs);
	  if (!enn)
	      x->Confirm = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zx_is_Text_s* e;
      struct zx_is_Text_s* en;
      struct zx_is_Text_s* enn;
      for (enn = 0, e = x->Text; e; e = (struct zx_is_Text_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_is_Text(c, e, dup_strs);
	  if (!enn)
	      x->Text = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }

  return x;
}

/* FUNC(zx_WALK_SO_is_Inquiry) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zx_WALK_SO_is_Inquiry(struct zx_ctx* c, struct zx_is_Inquiry_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  int ret = callback(&x->gg.g, ctx);
  if (ret)
    return ret;
  
  /* *** deal with xmlns specifications in exc c14n way */


  
  ret = zx_walk_so_unknown_attributes(c, &x->gg, ctx, callback); 
  if (ret)
    return ret;

  {
      struct zx_is_Help_s* e;
      for (e = x->Help; e; e = (struct zx_is_Help_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_is_Help(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zx_is_Select_s* e;
      for (e = x->Select; e; e = (struct zx_is_Select_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_is_Select(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zx_is_Confirm_s* e;
      for (e = x->Confirm; e; e = (struct zx_is_Confirm_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_is_Confirm(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zx_is_Text_s* e;
      for (e = x->Text; e; e = (struct zx_is_Text_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_is_Text(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }

  
  return zx_walk_so_unknown_elems_and_content(c, &x->gg, ctx, callback);
}

/* FUNC(zx_WALK_WO_is_Inquiry) */

int zx_WALK_WO_is_Inquiry(struct zx_ctx* c, struct zx_is_Inquiry_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   is_InteractionRequest
#define EL_STRUCT zx_is_InteractionRequest_s
#define EL_NS     is
#define EL_TAG    InteractionRequest

/* FUNC(zx_FREE_is_InteractionRequest) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

/* Called by: */
void zx_FREE_is_InteractionRequest(struct zx_ctx* c, struct zx_is_InteractionRequest_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */

  zx_free_attr(c, x->id, free_strs);
  zx_free_attr(c, x->language, free_strs);
  zx_free_attr(c, x->maxInteractTime, free_strs);
  zx_free_attr(c, x->signed_is_c_keyword, free_strs);

  {
      struct zx_is_Inquiry_s* e;
      struct zx_is_Inquiry_s* en;
      for (e = x->Inquiry; e; e = en) {
	  en = (struct zx_is_Inquiry_s*)e->gg.g.n;
	  zx_FREE_is_Inquiry(c, e, free_strs);
      }
  }
  {
      struct zx_ds_KeyInfo_s* e;
      struct zx_ds_KeyInfo_s* en;
      for (e = x->KeyInfo; e; e = en) {
	  en = (struct zx_ds_KeyInfo_s*)e->gg.g.n;
	  zx_FREE_ds_KeyInfo(c, e, free_strs);
      }
  }


  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zx_NEW_is_InteractionRequest) */

/* Trivial allocator/constructor for the datatype. */

/* Called by: */
struct zx_is_InteractionRequest_s* zx_NEW_is_InteractionRequest(struct zx_ctx* c)
{
  struct zx_is_InteractionRequest_s* x = ZX_ZALLOC(c, struct zx_is_InteractionRequest_s);
  x->gg.g.tok = zx_is_InteractionRequest_ELEM;
  return x;
}

#ifdef ZX_ENA_AUX

/* FUNC(zx_DUP_STRS_is_InteractionRequest) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

/* Called by: */
void zx_DUP_STRS_is_InteractionRequest(struct zx_ctx* c, struct zx_is_InteractionRequest_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */

  zx_dup_attr(c, x->id);
  zx_dup_attr(c, x->language);
  zx_dup_attr(c, x->maxInteractTime);
  zx_dup_attr(c, x->signed_is_c_keyword);

  {
      struct zx_is_Inquiry_s* e;
      for (e = x->Inquiry; e; e = (struct zx_is_Inquiry_s*)e->gg.g.n)
	  zx_DUP_STRS_is_Inquiry(c, e);
  }
  {
      struct zx_ds_KeyInfo_s* e;
      for (e = x->KeyInfo; e; e = (struct zx_ds_KeyInfo_s*)e->gg.g.n)
	  zx_DUP_STRS_ds_KeyInfo(c, e);
  }

}

/* FUNC(zx_DEEP_CLONE_is_InteractionRequest) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

/* Called by: */
struct zx_is_InteractionRequest_s* zx_DEEP_CLONE_is_InteractionRequest(struct zx_ctx* c, struct zx_is_InteractionRequest_s* x, int dup_strs)
{
  x = (struct zx_is_InteractionRequest_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zx_is_InteractionRequest_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */

  x->id = zx_clone_attr(c, x->id);
  x->language = zx_clone_attr(c, x->language);
  x->maxInteractTime = zx_clone_attr(c, x->maxInteractTime);
  x->signed_is_c_keyword = zx_clone_attr(c, x->signed_is_c_keyword);

  {
      struct zx_is_Inquiry_s* e;
      struct zx_is_Inquiry_s* en;
      struct zx_is_Inquiry_s* enn;
      for (enn = 0, e = x->Inquiry; e; e = (struct zx_is_Inquiry_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_is_Inquiry(c, e, dup_strs);
	  if (!enn)
	      x->Inquiry = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zx_ds_KeyInfo_s* e;
      struct zx_ds_KeyInfo_s* en;
      struct zx_ds_KeyInfo_s* enn;
      for (enn = 0, e = x->KeyInfo; e; e = (struct zx_ds_KeyInfo_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_ds_KeyInfo(c, e, dup_strs);
	  if (!enn)
	      x->KeyInfo = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }

  return x;
}

/* FUNC(zx_WALK_SO_is_InteractionRequest) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zx_WALK_SO_is_InteractionRequest(struct zx_ctx* c, struct zx_is_InteractionRequest_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  int ret = callback(&x->gg.g, ctx);
  if (ret)
    return ret;
  
  /* *** deal with xmlns specifications in exc c14n way */


  
  ret = zx_walk_so_unknown_attributes(c, &x->gg, ctx, callback); 
  if (ret)
    return ret;

  {
      struct zx_is_Inquiry_s* e;
      for (e = x->Inquiry; e; e = (struct zx_is_Inquiry_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_is_Inquiry(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zx_ds_KeyInfo_s* e;
      for (e = x->KeyInfo; e; e = (struct zx_ds_KeyInfo_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_ds_KeyInfo(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }

  
  return zx_walk_so_unknown_elems_and_content(c, &x->gg, ctx, callback);
}

/* FUNC(zx_WALK_WO_is_InteractionRequest) */

int zx_WALK_WO_is_InteractionRequest(struct zx_ctx* c, struct zx_is_InteractionRequest_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   is_InteractionResponse
#define EL_STRUCT zx_is_InteractionResponse_s
#define EL_NS     is
#define EL_TAG    InteractionResponse

/* FUNC(zx_FREE_is_InteractionResponse) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

/* Called by: */
void zx_FREE_is_InteractionResponse(struct zx_ctx* c, struct zx_is_InteractionResponse_s* x, int free_strs)
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
      struct zx_is_InteractionStatement_s* e;
      struct zx_is_InteractionStatement_s* en;
      for (e = x->InteractionStatement; e; e = en) {
	  en = (struct zx_is_InteractionStatement_s*)e->gg.g.n;
	  zx_FREE_is_InteractionStatement(c, e, free_strs);
      }
  }
  {
      struct zx_is_Parameter_s* e;
      struct zx_is_Parameter_s* en;
      for (e = x->Parameter; e; e = en) {
	  en = (struct zx_is_Parameter_s*)e->gg.g.n;
	  zx_FREE_is_Parameter(c, e, free_strs);
      }
  }


  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zx_NEW_is_InteractionResponse) */

/* Trivial allocator/constructor for the datatype. */

/* Called by: */
struct zx_is_InteractionResponse_s* zx_NEW_is_InteractionResponse(struct zx_ctx* c)
{
  struct zx_is_InteractionResponse_s* x = ZX_ZALLOC(c, struct zx_is_InteractionResponse_s);
  x->gg.g.tok = zx_is_InteractionResponse_ELEM;
  return x;
}

#ifdef ZX_ENA_AUX

/* FUNC(zx_DUP_STRS_is_InteractionResponse) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

/* Called by: */
void zx_DUP_STRS_is_InteractionResponse(struct zx_ctx* c, struct zx_is_InteractionResponse_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */


  {
      struct zx_lu_Status_s* e;
      for (e = x->Status; e; e = (struct zx_lu_Status_s*)e->gg.g.n)
	  zx_DUP_STRS_lu_Status(c, e);
  }
  {
      struct zx_is_InteractionStatement_s* e;
      for (e = x->InteractionStatement; e; e = (struct zx_is_InteractionStatement_s*)e->gg.g.n)
	  zx_DUP_STRS_is_InteractionStatement(c, e);
  }
  {
      struct zx_is_Parameter_s* e;
      for (e = x->Parameter; e; e = (struct zx_is_Parameter_s*)e->gg.g.n)
	  zx_DUP_STRS_is_Parameter(c, e);
  }

}

/* FUNC(zx_DEEP_CLONE_is_InteractionResponse) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

/* Called by: */
struct zx_is_InteractionResponse_s* zx_DEEP_CLONE_is_InteractionResponse(struct zx_ctx* c, struct zx_is_InteractionResponse_s* x, int dup_strs)
{
  x = (struct zx_is_InteractionResponse_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zx_is_InteractionResponse_s), dup_strs);
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
      struct zx_is_InteractionStatement_s* e;
      struct zx_is_InteractionStatement_s* en;
      struct zx_is_InteractionStatement_s* enn;
      for (enn = 0, e = x->InteractionStatement; e; e = (struct zx_is_InteractionStatement_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_is_InteractionStatement(c, e, dup_strs);
	  if (!enn)
	      x->InteractionStatement = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zx_is_Parameter_s* e;
      struct zx_is_Parameter_s* en;
      struct zx_is_Parameter_s* enn;
      for (enn = 0, e = x->Parameter; e; e = (struct zx_is_Parameter_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_is_Parameter(c, e, dup_strs);
	  if (!enn)
	      x->Parameter = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }

  return x;
}

/* FUNC(zx_WALK_SO_is_InteractionResponse) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zx_WALK_SO_is_InteractionResponse(struct zx_ctx* c, struct zx_is_InteractionResponse_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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
      struct zx_is_InteractionStatement_s* e;
      for (e = x->InteractionStatement; e; e = (struct zx_is_InteractionStatement_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_is_InteractionStatement(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zx_is_Parameter_s* e;
      for (e = x->Parameter; e; e = (struct zx_is_Parameter_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_is_Parameter(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }

  
  return zx_walk_so_unknown_elems_and_content(c, &x->gg, ctx, callback);
}

/* FUNC(zx_WALK_WO_is_InteractionResponse) */

int zx_WALK_WO_is_InteractionResponse(struct zx_ctx* c, struct zx_is_InteractionResponse_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   is_InteractionStatement
#define EL_STRUCT zx_is_InteractionStatement_s
#define EL_NS     is
#define EL_TAG    InteractionStatement

/* FUNC(zx_FREE_is_InteractionStatement) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

/* Called by: */
void zx_FREE_is_InteractionStatement(struct zx_ctx* c, struct zx_is_InteractionStatement_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */


  {
      struct zx_is_Inquiry_s* e;
      struct zx_is_Inquiry_s* en;
      for (e = x->Inquiry; e; e = en) {
	  en = (struct zx_is_Inquiry_s*)e->gg.g.n;
	  zx_FREE_is_Inquiry(c, e, free_strs);
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


  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zx_NEW_is_InteractionStatement) */

/* Trivial allocator/constructor for the datatype. */

/* Called by: */
struct zx_is_InteractionStatement_s* zx_NEW_is_InteractionStatement(struct zx_ctx* c)
{
  struct zx_is_InteractionStatement_s* x = ZX_ZALLOC(c, struct zx_is_InteractionStatement_s);
  x->gg.g.tok = zx_is_InteractionStatement_ELEM;
  return x;
}

#ifdef ZX_ENA_AUX

/* FUNC(zx_DUP_STRS_is_InteractionStatement) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

/* Called by: */
void zx_DUP_STRS_is_InteractionStatement(struct zx_ctx* c, struct zx_is_InteractionStatement_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */


  {
      struct zx_is_Inquiry_s* e;
      for (e = x->Inquiry; e; e = (struct zx_is_Inquiry_s*)e->gg.g.n)
	  zx_DUP_STRS_is_Inquiry(c, e);
  }
  {
      struct zx_ds_Signature_s* e;
      for (e = x->Signature; e; e = (struct zx_ds_Signature_s*)e->gg.g.n)
	  zx_DUP_STRS_ds_Signature(c, e);
  }

}

/* FUNC(zx_DEEP_CLONE_is_InteractionStatement) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

/* Called by: */
struct zx_is_InteractionStatement_s* zx_DEEP_CLONE_is_InteractionStatement(struct zx_ctx* c, struct zx_is_InteractionStatement_s* x, int dup_strs)
{
  x = (struct zx_is_InteractionStatement_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zx_is_InteractionStatement_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */


  {
      struct zx_is_Inquiry_s* e;
      struct zx_is_Inquiry_s* en;
      struct zx_is_Inquiry_s* enn;
      for (enn = 0, e = x->Inquiry; e; e = (struct zx_is_Inquiry_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_is_Inquiry(c, e, dup_strs);
	  if (!enn)
	      x->Inquiry = en;
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

  return x;
}

/* FUNC(zx_WALK_SO_is_InteractionStatement) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zx_WALK_SO_is_InteractionStatement(struct zx_ctx* c, struct zx_is_InteractionStatement_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  int ret = callback(&x->gg.g, ctx);
  if (ret)
    return ret;
  
  /* *** deal with xmlns specifications in exc c14n way */


  
  ret = zx_walk_so_unknown_attributes(c, &x->gg, ctx, callback); 
  if (ret)
    return ret;

  {
      struct zx_is_Inquiry_s* e;
      for (e = x->Inquiry; e; e = (struct zx_is_Inquiry_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_is_Inquiry(c, e, ctx, callback);
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

  
  return zx_walk_so_unknown_elems_and_content(c, &x->gg, ctx, callback);
}

/* FUNC(zx_WALK_WO_is_InteractionStatement) */

int zx_WALK_WO_is_InteractionStatement(struct zx_ctx* c, struct zx_is_InteractionStatement_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   is_Item
#define EL_STRUCT zx_is_Item_s
#define EL_NS     is
#define EL_TAG    Item

/* FUNC(zx_FREE_is_Item) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

/* Called by: */
void zx_FREE_is_Item(struct zx_ctx* c, struct zx_is_Item_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */

  zx_free_attr(c, x->label, free_strs);
  zx_free_attr(c, x->value, free_strs);

  zx_free_simple_elems(c, x->Hint, free_strs);


  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zx_NEW_is_Item) */

/* Trivial allocator/constructor for the datatype. */

/* Called by: */
struct zx_is_Item_s* zx_NEW_is_Item(struct zx_ctx* c)
{
  struct zx_is_Item_s* x = ZX_ZALLOC(c, struct zx_is_Item_s);
  x->gg.g.tok = zx_is_Item_ELEM;
  return x;
}

#ifdef ZX_ENA_AUX

/* FUNC(zx_DUP_STRS_is_Item) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

/* Called by: */
void zx_DUP_STRS_is_Item(struct zx_ctx* c, struct zx_is_Item_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */

  zx_dup_attr(c, x->label);
  zx_dup_attr(c, x->value);

  zx_dup_strs_simple_elems(c, x->Hint);

}

/* FUNC(zx_DEEP_CLONE_is_Item) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

/* Called by: */
struct zx_is_Item_s* zx_DEEP_CLONE_is_Item(struct zx_ctx* c, struct zx_is_Item_s* x, int dup_strs)
{
  x = (struct zx_is_Item_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zx_is_Item_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */

  x->label = zx_clone_attr(c, x->label);
  x->value = zx_clone_attr(c, x->value);

  x->Hint = zx_deep_clone_simple_elems(c,x->Hint, dup_strs);

  return x;
}

/* FUNC(zx_WALK_SO_is_Item) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zx_WALK_SO_is_Item(struct zx_ctx* c, struct zx_is_Item_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  int ret = callback(&x->gg.g, ctx);
  if (ret)
    return ret;
  
  /* *** deal with xmlns specifications in exc c14n way */


  
  ret = zx_walk_so_unknown_attributes(c, &x->gg, ctx, callback); 
  if (ret)
    return ret;

  ret = zx_walk_so_simple_elems(c, x->Hint, ctx, callback);
  if (ret)
    return ret;

  
  return zx_walk_so_unknown_elems_and_content(c, &x->gg, ctx, callback);
}

/* FUNC(zx_WALK_WO_is_Item) */

int zx_WALK_WO_is_Item(struct zx_ctx* c, struct zx_is_Item_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   is_Parameter
#define EL_STRUCT zx_is_Parameter_s
#define EL_NS     is
#define EL_TAG    Parameter

/* FUNC(zx_FREE_is_Parameter) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

/* Called by: */
void zx_FREE_is_Parameter(struct zx_ctx* c, struct zx_is_Parameter_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */

  zx_free_attr(c, x->name, free_strs);
  zx_free_attr(c, x->value, free_strs);



  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zx_NEW_is_Parameter) */

/* Trivial allocator/constructor for the datatype. */

/* Called by: */
struct zx_is_Parameter_s* zx_NEW_is_Parameter(struct zx_ctx* c)
{
  struct zx_is_Parameter_s* x = ZX_ZALLOC(c, struct zx_is_Parameter_s);
  x->gg.g.tok = zx_is_Parameter_ELEM;
  return x;
}

#ifdef ZX_ENA_AUX

/* FUNC(zx_DUP_STRS_is_Parameter) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

/* Called by: */
void zx_DUP_STRS_is_Parameter(struct zx_ctx* c, struct zx_is_Parameter_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */

  zx_dup_attr(c, x->name);
  zx_dup_attr(c, x->value);


}

/* FUNC(zx_DEEP_CLONE_is_Parameter) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

/* Called by: */
struct zx_is_Parameter_s* zx_DEEP_CLONE_is_Parameter(struct zx_ctx* c, struct zx_is_Parameter_s* x, int dup_strs)
{
  x = (struct zx_is_Parameter_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zx_is_Parameter_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */

  x->name = zx_clone_attr(c, x->name);
  x->value = zx_clone_attr(c, x->value);


  return x;
}

/* FUNC(zx_WALK_SO_is_Parameter) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zx_WALK_SO_is_Parameter(struct zx_ctx* c, struct zx_is_Parameter_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

/* FUNC(zx_WALK_WO_is_Parameter) */

int zx_WALK_WO_is_Parameter(struct zx_ctx* c, struct zx_is_Parameter_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   is_Select
#define EL_STRUCT zx_is_Select_s
#define EL_NS     is
#define EL_TAG    Select

/* FUNC(zx_FREE_is_Select) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

/* Called by: */
void zx_FREE_is_Select(struct zx_ctx* c, struct zx_is_Select_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */

  zx_free_attr(c, x->multiple, free_strs);
  zx_free_attr(c, x->name, free_strs);

  {
      struct zx_is_Help_s* e;
      struct zx_is_Help_s* en;
      for (e = x->Help; e; e = en) {
	  en = (struct zx_is_Help_s*)e->gg.g.n;
	  zx_FREE_is_Help(c, e, free_strs);
      }
  }
  zx_free_simple_elems(c, x->Hint, free_strs);
  zx_free_simple_elems(c, x->Label, free_strs);
  zx_free_simple_elems(c, x->Value, free_strs);
  {
      struct zx_is_Item_s* e;
      struct zx_is_Item_s* en;
      for (e = x->Item; e; e = en) {
	  en = (struct zx_is_Item_s*)e->gg.g.n;
	  zx_FREE_is_Item(c, e, free_strs);
      }
  }


  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zx_NEW_is_Select) */

/* Trivial allocator/constructor for the datatype. */

/* Called by: */
struct zx_is_Select_s* zx_NEW_is_Select(struct zx_ctx* c)
{
  struct zx_is_Select_s* x = ZX_ZALLOC(c, struct zx_is_Select_s);
  x->gg.g.tok = zx_is_Select_ELEM;
  return x;
}

#ifdef ZX_ENA_AUX

/* FUNC(zx_DUP_STRS_is_Select) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

/* Called by: */
void zx_DUP_STRS_is_Select(struct zx_ctx* c, struct zx_is_Select_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */

  zx_dup_attr(c, x->multiple);
  zx_dup_attr(c, x->name);

  {
      struct zx_is_Help_s* e;
      for (e = x->Help; e; e = (struct zx_is_Help_s*)e->gg.g.n)
	  zx_DUP_STRS_is_Help(c, e);
  }
  zx_dup_strs_simple_elems(c, x->Hint);
  zx_dup_strs_simple_elems(c, x->Label);
  zx_dup_strs_simple_elems(c, x->Value);
  {
      struct zx_is_Item_s* e;
      for (e = x->Item; e; e = (struct zx_is_Item_s*)e->gg.g.n)
	  zx_DUP_STRS_is_Item(c, e);
  }

}

/* FUNC(zx_DEEP_CLONE_is_Select) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

/* Called by: */
struct zx_is_Select_s* zx_DEEP_CLONE_is_Select(struct zx_ctx* c, struct zx_is_Select_s* x, int dup_strs)
{
  x = (struct zx_is_Select_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zx_is_Select_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */

  x->multiple = zx_clone_attr(c, x->multiple);
  x->name = zx_clone_attr(c, x->name);

  {
      struct zx_is_Help_s* e;
      struct zx_is_Help_s* en;
      struct zx_is_Help_s* enn;
      for (enn = 0, e = x->Help; e; e = (struct zx_is_Help_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_is_Help(c, e, dup_strs);
	  if (!enn)
	      x->Help = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  x->Hint = zx_deep_clone_simple_elems(c,x->Hint, dup_strs);
  x->Label = zx_deep_clone_simple_elems(c,x->Label, dup_strs);
  x->Value = zx_deep_clone_simple_elems(c,x->Value, dup_strs);
  {
      struct zx_is_Item_s* e;
      struct zx_is_Item_s* en;
      struct zx_is_Item_s* enn;
      for (enn = 0, e = x->Item; e; e = (struct zx_is_Item_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_is_Item(c, e, dup_strs);
	  if (!enn)
	      x->Item = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }

  return x;
}

/* FUNC(zx_WALK_SO_is_Select) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zx_WALK_SO_is_Select(struct zx_ctx* c, struct zx_is_Select_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  int ret = callback(&x->gg.g, ctx);
  if (ret)
    return ret;
  
  /* *** deal with xmlns specifications in exc c14n way */


  
  ret = zx_walk_so_unknown_attributes(c, &x->gg, ctx, callback); 
  if (ret)
    return ret;

  {
      struct zx_is_Help_s* e;
      for (e = x->Help; e; e = (struct zx_is_Help_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_is_Help(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  ret = zx_walk_so_simple_elems(c, x->Hint, ctx, callback);
  if (ret)
    return ret;
  ret = zx_walk_so_simple_elems(c, x->Label, ctx, callback);
  if (ret)
    return ret;
  ret = zx_walk_so_simple_elems(c, x->Value, ctx, callback);
  if (ret)
    return ret;
  {
      struct zx_is_Item_s* e;
      for (e = x->Item; e; e = (struct zx_is_Item_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_is_Item(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }

  
  return zx_walk_so_unknown_elems_and_content(c, &x->gg, ctx, callback);
}

/* FUNC(zx_WALK_WO_is_Select) */

int zx_WALK_WO_is_Select(struct zx_ctx* c, struct zx_is_Select_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   is_Text
#define EL_STRUCT zx_is_Text_s
#define EL_NS     is
#define EL_TAG    Text

/* FUNC(zx_FREE_is_Text) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

/* Called by: */
void zx_FREE_is_Text(struct zx_ctx* c, struct zx_is_Text_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */

  zx_free_attr(c, x->format, free_strs);
  zx_free_attr(c, x->maxChars, free_strs);
  zx_free_attr(c, x->minChars, free_strs);
  zx_free_attr(c, x->name, free_strs);

  {
      struct zx_is_Help_s* e;
      struct zx_is_Help_s* en;
      for (e = x->Help; e; e = en) {
	  en = (struct zx_is_Help_s*)e->gg.g.n;
	  zx_FREE_is_Help(c, e, free_strs);
      }
  }
  zx_free_simple_elems(c, x->Hint, free_strs);
  zx_free_simple_elems(c, x->Label, free_strs);
  zx_free_simple_elems(c, x->Value, free_strs);


  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zx_NEW_is_Text) */

/* Trivial allocator/constructor for the datatype. */

/* Called by: */
struct zx_is_Text_s* zx_NEW_is_Text(struct zx_ctx* c)
{
  struct zx_is_Text_s* x = ZX_ZALLOC(c, struct zx_is_Text_s);
  x->gg.g.tok = zx_is_Text_ELEM;
  return x;
}

#ifdef ZX_ENA_AUX

/* FUNC(zx_DUP_STRS_is_Text) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

/* Called by: */
void zx_DUP_STRS_is_Text(struct zx_ctx* c, struct zx_is_Text_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */

  zx_dup_attr(c, x->format);
  zx_dup_attr(c, x->maxChars);
  zx_dup_attr(c, x->minChars);
  zx_dup_attr(c, x->name);

  {
      struct zx_is_Help_s* e;
      for (e = x->Help; e; e = (struct zx_is_Help_s*)e->gg.g.n)
	  zx_DUP_STRS_is_Help(c, e);
  }
  zx_dup_strs_simple_elems(c, x->Hint);
  zx_dup_strs_simple_elems(c, x->Label);
  zx_dup_strs_simple_elems(c, x->Value);

}

/* FUNC(zx_DEEP_CLONE_is_Text) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

/* Called by: */
struct zx_is_Text_s* zx_DEEP_CLONE_is_Text(struct zx_ctx* c, struct zx_is_Text_s* x, int dup_strs)
{
  x = (struct zx_is_Text_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zx_is_Text_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */

  x->format = zx_clone_attr(c, x->format);
  x->maxChars = zx_clone_attr(c, x->maxChars);
  x->minChars = zx_clone_attr(c, x->minChars);
  x->name = zx_clone_attr(c, x->name);

  {
      struct zx_is_Help_s* e;
      struct zx_is_Help_s* en;
      struct zx_is_Help_s* enn;
      for (enn = 0, e = x->Help; e; e = (struct zx_is_Help_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_is_Help(c, e, dup_strs);
	  if (!enn)
	      x->Help = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  x->Hint = zx_deep_clone_simple_elems(c,x->Hint, dup_strs);
  x->Label = zx_deep_clone_simple_elems(c,x->Label, dup_strs);
  x->Value = zx_deep_clone_simple_elems(c,x->Value, dup_strs);

  return x;
}

/* FUNC(zx_WALK_SO_is_Text) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zx_WALK_SO_is_Text(struct zx_ctx* c, struct zx_is_Text_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  int ret = callback(&x->gg.g, ctx);
  if (ret)
    return ret;
  
  /* *** deal with xmlns specifications in exc c14n way */


  
  ret = zx_walk_so_unknown_attributes(c, &x->gg, ctx, callback); 
  if (ret)
    return ret;

  {
      struct zx_is_Help_s* e;
      for (e = x->Help; e; e = (struct zx_is_Help_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_is_Help(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  ret = zx_walk_so_simple_elems(c, x->Hint, ctx, callback);
  if (ret)
    return ret;
  ret = zx_walk_so_simple_elems(c, x->Label, ctx, callback);
  if (ret)
    return ret;
  ret = zx_walk_so_simple_elems(c, x->Value, ctx, callback);
  if (ret)
    return ret;

  
  return zx_walk_so_unknown_elems_and_content(c, &x->gg, ctx, callback);
}

/* FUNC(zx_WALK_WO_is_Text) */

int zx_WALK_WO_is_Text(struct zx_ctx* c, struct zx_is_Text_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  ERR("*** walk_wo not implemented %d", 0);
  return 0;
}

#endif


/* EOF -- c/zx-is-aux.c */
