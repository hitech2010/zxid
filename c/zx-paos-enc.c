/* c/zx-paos-enc.c - WARNING: This file was automatically generated. DO NOT EDIT!
 * $Id$ */
/* Code generation design Copyright (c) 2006 Sampo Kellomaki (sampo@iki.fi),
 * All Rights Reserved. NO WARRANTY. See file COPYING for terms and conditions
 * of use. Some aspects of code generation were driven by schema
 * descriptions that were used as input and may be subject to their own copyright.
 * Code generation uses a template, whose copyright statement follows. */

/** enc-templ.c  -  XML encoder template, used in code generation
 ** Copyright (c) 2006 Symlabs (symlabs@symlabs.com), All Rights Reserved.
 ** Author: Sampo Kellomaki (sampo@iki.fi)
 ** This is confidential unpublished proprietary source code of the author.
 ** NO WARRANTY, not even implied warranties. Contains trade secrets.
 ** Distribution prohibited unless authorized in writing.
 ** Licensed under Apache License 2.0, see file COPYING.
 ** Id: enc-templ.c,v 1.24 2007/03/28 20:31:54 sampo Exp $
 **
 ** 30.5.2006, created, Sampo Kellomaki (sampo@iki.fi)
 ** 6.8.2006,  factored data structure walking to aux-templ.c --Sampo
 ** 8.8.2006,  reworked namespace handling --Sampo
 ** 26.8.2006, some CSE --Sampo
 ** 23.9.2006, added WO logic --Sampo
 **
 ** N.B: wo=wire order (needed for exc-c14n), so=schema order
 ** N.B2: This template is meant to be processed by pd/xsd2sg.pl. Beware
 ** of special markers that xsd2sg.pl expects to find and understand.
 **/

#include <memory.h>
#include "errmac.h"
#include "zx.h"
#include "c/zx-const.h"
#include "c/zx-data.h"
#include "c/zx-paos-data.h"
#include "c/zx-ns.h"



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

#define EL_NAME   paos_Request
#define EL_STRUCT zx_paos_Request_s
#define EL_NS     paos
#define EL_TAG    Request

/* FUNC(zx_LEN_SO_paos_Request) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order. */

/* Called by: */
int zx_LEN_SO_paos_Request(struct zx_ctx* c, struct zx_paos_Request_s* x )
{
  struct zx_ns_s* pop_seen = 0;
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = sizeof("<paos:Request")-1 + 1 + sizeof("</paos:Request>")-1;
  len += zx_len_xmlns_if_not_seen(c, zx_ns_tab+zx_xmlns_ix_e, &pop_seen);
  len += zx_len_xmlns_if_not_seen(c, zx_ns_tab+zx_xmlns_ix_e, &pop_seen);
  len += zx_len_xmlns_if_not_seen(c, zx_ns_tab+zx_xmlns_ix_paos, &pop_seen);

  len += zx_attr_so_len(x->responseConsumerURL, sizeof("responseConsumerURL")-1);
  len += zx_attr_so_len(x->service, sizeof("service")-1);
  len += zx_attr_so_len(x->messageID, sizeof("messageID")-1);
  len += zx_attr_so_len(x->mustUnderstand, sizeof("e:mustUnderstand")-1);
  len += zx_attr_so_len(x->actor, sizeof("e:actor")-1);

#else
  /* root node has no begin tag */
  int len = 0;
#endif
  


  len += zx_len_so_common(c, &x->gg); 
  zx_pop_seen(pop_seen);
  return len;
}

/* FUNC(zx_LEN_WO_paos_Request) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in wire order and no assumptions
 * are made about namespace prefixes. */

/* Called by: */
int zx_LEN_WO_paos_Request(struct zx_ctx* c, struct zx_paos_Request_s* x )
{
  struct zx_ns_s* pop_seen = 0;
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("Request")-1 + 1 + 2 + sizeof("Request")-1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;

  len += zx_len_xmlns_if_not_seen(c, x->gg.g.ns, &pop_seen);
  len += zx_len_xmlns_if_not_seen(c, x->gg.g.ns, &pop_seen);
  len += zx_len_xmlns_if_not_seen(c, x->gg.g.ns, &pop_seen);

  len += zx_attr_wo_len(x->responseConsumerURL, sizeof("responseConsumerURL")-1);
  len += zx_attr_wo_len(x->service, sizeof("service")-1);
  len += zx_attr_wo_len(x->messageID, sizeof("messageID")-1);
  len += zx_attr_wo_len(x->mustUnderstand, sizeof("mustUnderstand")-1);
  len += zx_attr_wo_len(x->actor, sizeof("actor")-1);

#else
  /* root node has no begin tag */
  int len = 0;
#endif
  


  len += zx_len_wo_common(c, &x->gg); 
  zx_pop_seen(pop_seen);
  return len;
}

/* FUNC(zx_ENC_SO_paos_Request) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

/* Called by: */
char* zx_ENC_SO_paos_Request(struct zx_ctx* c, struct zx_paos_Request_s* x, char* p )
{
  struct zx_ns_s* pop_seen = 0;
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_TAG(p, "<paos:Request");
  p = zx_enc_xmlns_if_not_seen(c, p, zx_ns_tab+zx_xmlns_ix_e, &pop_seen);
  p = zx_enc_xmlns_if_not_seen(c, p, zx_ns_tab+zx_xmlns_ix_e, &pop_seen);
  p = zx_enc_xmlns_if_not_seen(c, p, zx_ns_tab+zx_xmlns_ix_paos, &pop_seen);

  p = zx_attr_so_enc(p, x->responseConsumerURL, " responseConsumerURL=\"", sizeof(" responseConsumerURL=\"")-1);
  p = zx_attr_so_enc(p, x->service, " service=\"", sizeof(" service=\"")-1);
  p = zx_attr_so_enc(p, x->messageID, " messageID=\"", sizeof(" messageID=\"")-1);
  p = zx_attr_so_enc(p, x->mustUnderstand, " e:mustUnderstand=\"", sizeof(" e:mustUnderstand=\"")-1);
  p = zx_attr_so_enc(p, x->actor, " e:actor=\"", sizeof(" e:actor=\"")-1);

  p = zx_enc_unknown_attrs(p, x->gg.any_attr);
#else
  /* root node has no begin tag */
#endif
  

  p = zx_enc_so_unknown_elems_and_content(c, p, &x->gg);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CLOSE_TAG(p, "</paos:Request>");
  zx_pop_seen(pop_seen);
#else
  /* root node has no end tag either */
#endif
  return p;
}

/* FUNC(zx_ENC_WO_paos_Request) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

/* Called by: */
char* zx_ENC_WO_paos_Request(struct zx_ctx* c, struct zx_paos_Request_s* x, char* p )
{
  struct zx_elem_s* kid;
#if 1 /* NORMALMODE */
  struct zx_ns_s* pop_seen = 0;
  char* q;
  char* qq;
  ZX_OUT_CH(p, '<');
  q = p;
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "Request", sizeof("Request")-1);
  qq = p;

  /* *** sort the namespaces */
  zx_add_xmlns_if_not_seen(c, x->gg.g.ns, &pop_seen);
  zx_add_xmlns_if_not_seen(c, x->gg.g.ns, &pop_seen);
  zx_add_xmlns_if_not_seen(c, x->gg.g.ns, &pop_seen);

  p = zx_enc_seen(p, pop_seen); 
  p = zx_attr_wo_enc(p, x->responseConsumerURL, "responseConsumerURL=\"", sizeof("responseConsumerURL=\"")-1);
  p = zx_attr_wo_enc(p, x->service, "service=\"", sizeof("service=\"")-1);
  p = zx_attr_wo_enc(p, x->messageID, "messageID=\"", sizeof("messageID=\"")-1);
  p = zx_attr_wo_enc(p, x->mustUnderstand, "mustUnderstand=\"", sizeof("mustUnderstand=\"")-1);
  p = zx_attr_wo_enc(p, x->actor, "actor=\"", sizeof("actor=\"")-1);

  p = zx_enc_unknown_attrs(p, x->gg.any_attr);
#else
  /* root node has no begin tag */
#endif
  
  for (kid = x->gg.kids; kid; kid = ((struct zx_elem_s*)(kid->g.wo)))
    p = zx_ENC_WO_any_elem(c, kid, p);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  ZX_OUT_CH(p, '/');
  ZX_OUT_MEM(p, q, qq-q);
  ZX_OUT_CH(p, '>');
  zx_pop_seen(pop_seen);
#else
  /* root node has no end tag either */
#endif
  return p;
}

/* FUNC(zx_EASY_ENC_SO_paos_Request) */

/* Called by: */
struct zx_str* zx_EASY_ENC_SO_paos_Request(struct zx_ctx* c, struct zx_paos_Request_s* x )
{
  int len;
  char* buf;
  c->ns_tab = ZX_ALLOC(c, sizeof(zx_ns_tab));
  memcpy(c->ns_tab, zx_ns_tab, sizeof(zx_ns_tab));
  len = zx_LEN_SO_paos_Request(c, x );
  buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_SO_paos_Request(c, x, buf ), buf, len);
}

/* FUNC(zx_EASY_ENC_WO_paos_Request) */

/* Called by: */
struct zx_str* zx_EASY_ENC_WO_paos_Request(struct zx_ctx* c, struct zx_paos_Request_s* x )
{
  int len;
  char* buf;
  c->ns_tab = ZX_ALLOC(c, sizeof(zx_ns_tab));
  memcpy(c->ns_tab, zx_ns_tab, sizeof(zx_ns_tab));
  len = zx_LEN_WO_paos_Request(c, x );
  buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_WO_paos_Request(c, x, buf ), buf, len);
}






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

#define EL_NAME   paos_Response
#define EL_STRUCT zx_paos_Response_s
#define EL_NS     paos
#define EL_TAG    Response

/* FUNC(zx_LEN_SO_paos_Response) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order. */

/* Called by: */
int zx_LEN_SO_paos_Response(struct zx_ctx* c, struct zx_paos_Response_s* x )
{
  struct zx_ns_s* pop_seen = 0;
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = sizeof("<paos:Response")-1 + 1 + sizeof("</paos:Response>")-1;
  len += zx_len_xmlns_if_not_seen(c, zx_ns_tab+zx_xmlns_ix_e, &pop_seen);
  len += zx_len_xmlns_if_not_seen(c, zx_ns_tab+zx_xmlns_ix_e, &pop_seen);
  len += zx_len_xmlns_if_not_seen(c, zx_ns_tab+zx_xmlns_ix_paos, &pop_seen);

  len += zx_attr_so_len(x->refToMessageID, sizeof("refToMessageID")-1);
  len += zx_attr_so_len(x->mustUnderstand, sizeof("e:mustUnderstand")-1);
  len += zx_attr_so_len(x->actor, sizeof("e:actor")-1);

#else
  /* root node has no begin tag */
  int len = 0;
#endif
  


  len += zx_len_so_common(c, &x->gg); 
  zx_pop_seen(pop_seen);
  return len;
}

/* FUNC(zx_LEN_WO_paos_Response) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in wire order and no assumptions
 * are made about namespace prefixes. */

/* Called by: */
int zx_LEN_WO_paos_Response(struct zx_ctx* c, struct zx_paos_Response_s* x )
{
  struct zx_ns_s* pop_seen = 0;
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("Response")-1 + 1 + 2 + sizeof("Response")-1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;

  len += zx_len_xmlns_if_not_seen(c, x->gg.g.ns, &pop_seen);
  len += zx_len_xmlns_if_not_seen(c, x->gg.g.ns, &pop_seen);
  len += zx_len_xmlns_if_not_seen(c, x->gg.g.ns, &pop_seen);

  len += zx_attr_wo_len(x->refToMessageID, sizeof("refToMessageID")-1);
  len += zx_attr_wo_len(x->mustUnderstand, sizeof("mustUnderstand")-1);
  len += zx_attr_wo_len(x->actor, sizeof("actor")-1);

#else
  /* root node has no begin tag */
  int len = 0;
#endif
  


  len += zx_len_wo_common(c, &x->gg); 
  zx_pop_seen(pop_seen);
  return len;
}

/* FUNC(zx_ENC_SO_paos_Response) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

/* Called by: */
char* zx_ENC_SO_paos_Response(struct zx_ctx* c, struct zx_paos_Response_s* x, char* p )
{
  struct zx_ns_s* pop_seen = 0;
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_TAG(p, "<paos:Response");
  p = zx_enc_xmlns_if_not_seen(c, p, zx_ns_tab+zx_xmlns_ix_e, &pop_seen);
  p = zx_enc_xmlns_if_not_seen(c, p, zx_ns_tab+zx_xmlns_ix_e, &pop_seen);
  p = zx_enc_xmlns_if_not_seen(c, p, zx_ns_tab+zx_xmlns_ix_paos, &pop_seen);

  p = zx_attr_so_enc(p, x->refToMessageID, " refToMessageID=\"", sizeof(" refToMessageID=\"")-1);
  p = zx_attr_so_enc(p, x->mustUnderstand, " e:mustUnderstand=\"", sizeof(" e:mustUnderstand=\"")-1);
  p = zx_attr_so_enc(p, x->actor, " e:actor=\"", sizeof(" e:actor=\"")-1);

  p = zx_enc_unknown_attrs(p, x->gg.any_attr);
#else
  /* root node has no begin tag */
#endif
  

  p = zx_enc_so_unknown_elems_and_content(c, p, &x->gg);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CLOSE_TAG(p, "</paos:Response>");
  zx_pop_seen(pop_seen);
#else
  /* root node has no end tag either */
#endif
  return p;
}

/* FUNC(zx_ENC_WO_paos_Response) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

/* Called by: */
char* zx_ENC_WO_paos_Response(struct zx_ctx* c, struct zx_paos_Response_s* x, char* p )
{
  struct zx_elem_s* kid;
#if 1 /* NORMALMODE */
  struct zx_ns_s* pop_seen = 0;
  char* q;
  char* qq;
  ZX_OUT_CH(p, '<');
  q = p;
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "Response", sizeof("Response")-1);
  qq = p;

  /* *** sort the namespaces */
  zx_add_xmlns_if_not_seen(c, x->gg.g.ns, &pop_seen);
  zx_add_xmlns_if_not_seen(c, x->gg.g.ns, &pop_seen);
  zx_add_xmlns_if_not_seen(c, x->gg.g.ns, &pop_seen);

  p = zx_enc_seen(p, pop_seen); 
  p = zx_attr_wo_enc(p, x->refToMessageID, "refToMessageID=\"", sizeof("refToMessageID=\"")-1);
  p = zx_attr_wo_enc(p, x->mustUnderstand, "mustUnderstand=\"", sizeof("mustUnderstand=\"")-1);
  p = zx_attr_wo_enc(p, x->actor, "actor=\"", sizeof("actor=\"")-1);

  p = zx_enc_unknown_attrs(p, x->gg.any_attr);
#else
  /* root node has no begin tag */
#endif
  
  for (kid = x->gg.kids; kid; kid = ((struct zx_elem_s*)(kid->g.wo)))
    p = zx_ENC_WO_any_elem(c, kid, p);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  ZX_OUT_CH(p, '/');
  ZX_OUT_MEM(p, q, qq-q);
  ZX_OUT_CH(p, '>');
  zx_pop_seen(pop_seen);
#else
  /* root node has no end tag either */
#endif
  return p;
}

/* FUNC(zx_EASY_ENC_SO_paos_Response) */

/* Called by: */
struct zx_str* zx_EASY_ENC_SO_paos_Response(struct zx_ctx* c, struct zx_paos_Response_s* x )
{
  int len;
  char* buf;
  c->ns_tab = ZX_ALLOC(c, sizeof(zx_ns_tab));
  memcpy(c->ns_tab, zx_ns_tab, sizeof(zx_ns_tab));
  len = zx_LEN_SO_paos_Response(c, x );
  buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_SO_paos_Response(c, x, buf ), buf, len);
}

/* FUNC(zx_EASY_ENC_WO_paos_Response) */

/* Called by: */
struct zx_str* zx_EASY_ENC_WO_paos_Response(struct zx_ctx* c, struct zx_paos_Response_s* x )
{
  int len;
  char* buf;
  c->ns_tab = ZX_ALLOC(c, sizeof(zx_ns_tab));
  memcpy(c->ns_tab, zx_ns_tab, sizeof(zx_ns_tab));
  len = zx_LEN_WO_paos_Response(c, x );
  buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_WO_paos_Response(c, x, buf ), buf, len);
}




/* EOF -- c/zx-paos-enc.c */