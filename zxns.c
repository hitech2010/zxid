/* zxns.c  -  Namespace manipulation functions for generated (and other) code
 * Copyright (c) 2006-2007 Symlabs (symlabs@symlabs.com), All Rights Reserved.
 * Author: Sampo Kellomaki (sampo@iki.fi)
 * This is confidential unpublished proprietary source code of the author.
 * NO WARRANTY, not even implied warranties. Contains trade secrets.
 * Distribution prohibited unless authorized in writing.
 * Licensed under Apache License 2.0, see file COPYING.
 * $Id: zxns.c,v 1.4 2007-10-11 04:54:25 sampo Exp $
 *
 * 28.5.2006, created --Sampo
 * 8.8.2006,  moved lookup functions to generated code --Sampo
 * 12.8.2006, added special scanning of xmlns to avoid backtracking elem recognition --Sampo
 * 26.8.2006, significant Common Subexpression Elimination (CSE) --Sampo
 * 30.9.2007, rework namespaces, esp. previously unknown namespaces  --Sampo
 */

#include <string.h>

#include "errmac.h"
#include "zx.h"
#include "c/zx-data.h"  /* Also generic zx_simple_elem, etc. */

/* ------------- All the manner namespace management ------------- */

/* Called by: */
void zx_fix_any_elem_dec(struct zx_ctx* c, struct zx_any_elem_s* x, char* nam, int namlen)
{
  char* p = memchr(nam, ':', namlen);
  if (p) {
    x->gg.g.ns = zx_locate_ns_by_prefix(c, p-nam, nam);
    ++p;
    namlen -= p-nam;
    nam = p;
  }
  x->name = nam;
  x->name_len = namlen;
}

/* Given known namespace, does the prefix refer to it, either natively or through an alias. */

/* Called by: */
int zx_is_ns_prefix(struct zx_ns_s* ns, int len, char* prefix)
{
  struct zx_ns_s* alias;
  if (!ns)
    return 0;
  if (ns->prefix_len == len && (!len || !memcmp(ns->prefix, prefix, len)))
    return 1;
  for (alias = ns->n; alias; alias = alias->n)
    if (alias->prefix_len == len && (!len || !memcmp(alias->prefix, prefix, len)))
      return 1;
  return 0;
}

/* Called by:  zx_fix_any_elem_dec, zx_init_tok_tab, zx_xmlns_decl */
struct zx_ns_s* zx_locate_ns_by_prefix(struct zx_ctx* c, int len, char* prefix)
{
  struct zx_ns_s* ns;
  struct zx_ns_s* alias;
  for (ns = c->ns_tab; ns->url_len; ++ns) {
    if (ns->prefix_len == len && (!len || !memcmp(ns->prefix, prefix, len)))
      return ns;
    for (alias = ns->n; alias; alias = alias->n)
      if (alias->prefix_len == len && (!len || !memcmp(alias->prefix, prefix, len)))
	return ns;
  }
  
  for (alias = c->unknown_ns; alias; alias = alias->n)
    if (alias->prefix_len == len && (!len || !memcmp(alias->prefix, prefix, len)))
      return alias;
  return 0;
}

/* Called by:  zx_xmlns_decl */
static struct zx_ns_s* zx_locate_ns_by_url(struct zx_ctx* c, int len, char* url)
{
  struct zx_ns_s* ns;
  struct zx_ns_s* alias;
  for (ns = c->ns_tab; ns->url_len; ++ns) {
    if (ns->url_len == len && (!len || !memcmp(ns->url, url, len)))
      return ns;
    for (alias = ns->n; alias; alias = alias->n)
      if (alias->url_len == len && (!len || !memcmp(alias->url, url, len)))
	return alias;
  }

  for (alias = c->unknown_ns; alias; alias = alias->n)
    if (alias->url_len == len && (!len || !memcmp(alias->url, url, len)))
      return alias;
  return 0;
}

static struct zx_ns_s* zx_new_ns(struct zx_ctx* c, int prefix_len, char* prefix, int url_len, char* url)
{
  struct zx_ns_s* ns = ZX_ZALLOC(c, struct zx_ns_s);
  ns->prefix_len = prefix_len;
  ns->prefix = prefix;
  ns->url_len = url_len;
  ns->url = url;
  return ns;
}

/* Called by:  zx_push_seen x2 */
static struct zx_ns_s* zx_xmlns_decl(struct zx_ctx* c, int prefix_len, char* prefix, int url_len, char* url)
{
  struct zx_ns_s* alias;
  struct zx_ns_s* ns;

  /* Always alloc a new one because we may need to push to stack multiple instances of same ns. */
  alias = zx_new_ns(c, prefix_len, prefix, url_len, url);

  ns = zx_locate_ns_by_url(c, url_len, url);
  if (!ns) {
    D("Namespace(%.*s) not found by URL(%.*s) (probably wrong namespace URL)", prefix_len, prefix, url_len, url);
    ns = zx_locate_ns_by_prefix(c, prefix_len, prefix);
    if (!ns) {
      /* Namespace not known by compiled in schemata. */
      D("Namespace not found by prefix(%.*s) or URL(%.*s) (probably wrong namespace URL)", prefix_len, prefix, url_len, url);
      alias->n = c->unknown_ns;
      c->unknown_ns = alias;
      return alias;
    }
  }
  alias->n = ns->n;
  ns->n = alias;
  return alias;
}

/* Called by:  zx_prefix_seen_whine, zx_push_seen */
struct zx_ns_s* zx_prefix_seen(struct zx_ctx* c, int len, char* prefix)
{
  struct zx_ns_s* ns;
  for (ns = c->guard_seen_n.seen_n; ns->seen_n; ns = ns->seen_n)
    if (ns->prefix_len == len && (!len || !memcmp(ns->prefix, prefix, len)))
      return ns;
  return 0;
}

/* zx_prefix_seen_whine() is a good place to detect, and add stub for, wholly unknown prefixes. */

/* Called by:  TXattr_lookup, TXelem_lookup */
struct zx_ns_s* zx_prefix_seen_whine(struct zx_ctx* c, int len, char* prefix, char* logkey, int mk_dummy_ns)
{
  struct zx_str* url;
  struct zx_ns_s* ns = zx_prefix_seen(c, len, prefix);
  if (!ns) {
    /* Try to locate the namespace by the prefix from among the namespaces
     * naturally known to zxid. */
    ns = zx_locate_ns_by_prefix(c, len, prefix);
    if (!ns) {
      if (mk_dummy_ns) {
	url = zx_strf(c, "urn:zxid:unknown-ns-prefix:%s:%.*s", logkey, len, STRNULLCHK(prefix));
	ns = zx_new_ns(c, len, prefix, url->len, url->s);
	ns->n = c->unknown_ns;
	c->unknown_ns = ns;
	D("Undefined namespace prefix(%.*s). NS not known from any context. Creating dummy ns(%.*s).", len, prefix, url->len, url->s);
	ZX_FREE(c, url);
      } else {
	DD("Undefined namespace prefix(%.*s) at(%s). NS not known from any context.", len, prefix, logkey);
      }
    } else {
      if (len != 3 || memcmp(prefix, "xml", 3)) {
	D("Undefined namespace prefix(%.*s) at(%s) mapped to uri(%.*s) by built-in table.", len, prefix, logkey, ns->url_len, ns->url);
      }
    }
  }
  return ns;
}

/* See if prefix has been seen, and in the same meaning. If not, allocate
 * a new node and push or add it to the doubly linked list as well as to the
 * pop_seen list. Returns 0 if no addition was done (i.e. ns had been seen already). */

/* Called by:  zx_add_xmlns_if_not_seen, zx_enc_xmlns_if_not_seen, zx_len_xmlns_if_not_seen, zx_scan_xmlns */
static struct zx_ns_s* zx_push_seen(struct zx_ctx* c, int prefix_len, char* prefix, int url_len, char* url, struct zx_ns_s** pop_seen)
{
  struct zx_ns_s* old_ns;
  struct zx_ns_s* ns;
  old_ns = zx_prefix_seen(c, prefix_len, prefix);
  if (old_ns) {
    if (old_ns->url_len == url_len && (!url_len || !memcmp(old_ns->url, url, url_len)))
      return 0;
    ns = zx_xmlns_decl(c, prefix_len, prefix, url_len, url);
    ns->seen = old_ns;            /* Push */
    ns->seen_n = old_ns->seen_n;  /* Replace old_ns in middle of the list */
    ns->seen_p = old_ns->seen_p;
    old_ns->seen_n->seen_p = ns;
    old_ns->seen_p->seen_n = ns;
  } else {
    ns = zx_xmlns_decl(c, prefix_len, prefix, url_len, url);
    ns->seen_n = c->guard_seen_n.seen_n;  /* Add to beginning of seen_n list. */
    c->guard_seen_n.seen_n = ns;
    ns->seen_n->seen_p = ns;
    ns->seen_p = &c->guard_seen_n;
  }
  ns->seen_pop = *pop_seen;
  *pop_seen = ns;
  return ns;
}

/* Called by:  TXDEC_ELNAME, TXENC_SO_ELNAME, TXENC_WO_ELNAME, TXLEN_SO_ELNAME, TXLEN_WO_ELNAME */
void zx_pop_seen(struct zx_ns_s* ns)
{
  for (; ns; ns = ns->seen_pop) {
    if (ns->seen) {
      ns->seen->seen_n = ns->seen_n;   /* Replace ns with old_ns (ns->seen) in middle of list */
      ns->seen->seen_p = ns->seen_p;
      ns->seen_n->seen_p = ns->seen;
      ns->seen_p->seen_n = ns->seen;
    } else {
      ns->seen_n->seen_p = ns->seen_p; /* Remove ns from middle of the seen_n list. */
      ns->seen_p->seen_n = ns->seen_n;
    }
  }
}

/* When trying to scan an element, an annoying feature of XML namespaces is that the
 * namespace may be declared in a xmlns attribute within the element itself. Thus
 * at the time of scanning the <ns:element part we can't know its namespace. What
 * a lousy design. In order to handle this we need to either backtrack or
 * make a special case forward scan for xmlns attributes (which is redundant with
 * normal attribute scanning). It seems simpler to do the latter, so here goes...
 *
 * The return value represents the list of namespaces that were newly declared
 * at this level, i.e. pushed to the seen stacks. This list is used to pop the
 * seen stacks after we are through with the element. */

/* Called by:  TXDEC_ELNAME */
struct zx_ns_s* zx_scan_xmlns(struct zx_ctx* c)
{
  struct zx_ns_s* pop_seen = 0;  /* build a list of namespaces declared here */
  char* prefix;
  char* url;
  char* p = c->p;  /* We need to keep the original c->p so normal attributes can be scanned. */
  char quote;
  int prefix_len, url_len;

  /* The tag name has already been detected. Process attributes until '>' */
  
  for ( ; 1; ++p) {
    ZX_SKIP_WS_P(c, p, pop_seen);
    if (ONE_OF_2(*p, '>', '/'))
      break;
    if (!memcmp(p, "xmlns", sizeof("xmlns")-1)) {
      switch (p[5]) {
      case '=':  /* Default namespace decl. */
	prefix = p += 5;
	goto scan_URL;
      case ':':  /* Qualified namespace decl. */
	prefix = p += 6;
	quote = '=';
	ZX_LOOK_FOR_P(c,'=',p);
      scan_URL:
	++p;
	if (!ONE_OF_2(*p, '"', '\''))
	  return pop_seen;
	quote = *p;
	url = ++p;
	ZX_LOOK_FOR_P(c, quote, p);

	prefix_len = (url - 2) - prefix;
	url_len = p - url;
	zx_push_seen(c, prefix_len, prefix, url_len, url, &pop_seen);
	goto next;
      default:
	zx_xml_parse_err(c, p[5], __FUNCTION__, "Illformed attributes. Bad char");
	return pop_seen;
      }
    }
    
    /* Skip over any other attributes. */
    
    quote = '=';
    ZX_LOOK_FOR_P(c,'=',p);
    ++p;
    if (!ONE_OF_2(*p, '"', '\''))
      return pop_seen;
    quote = *p;
    ++p;
    ZX_LOOK_FOR_P(c,quote,p);
  next:
    continue;
  }
  return pop_seen;

 look_for_not_found:
  zx_xml_parse_err(c, quote, __FUNCTION__, "char not found");
  return pop_seen;
}

/* Disambiguate token by considering its namespace.
 * See zx_attr_lookup(), zx_elem_lookup()
 * For attributes the namespaceless case is considered.
 */
/* Called by:  TXattr_lookup, TXelem_lookup */
const struct zx_tok* zx_tok_by_ns(const struct zx_tok* zt, const struct zx_tok* lim,
				  int len, char* name, struct zx_ns_s* ns)
{
  struct zx_ns_s* alias;
  const struct zx_tok* ztt;

  /* First find token whose name matches. The token table CAN have duplicate entries,
   * see -D flag to gperf. */
  for (; zt < lim && (memcmp(zt->name, name, len) || zt->name[len]); ++zt) ;
  if (zt >= lim)
    return 0;  /* Not found! */
  ztt = zt;  /* Remember first "hit" in case we fail. */

  /* If no namespace was specified, then token must also be namespaceless */
  if (!ns) {
    if (!zt->ns)
      return zt;
    for (; zt < lim && (!memcmp(zt->name, name, len) && !zt->name[len]); ++zt)
      if (!zt->ns)
	return zt;
    return ztt;
  }
  /* Now check for namespace match. */
  for (; zt < lim && (!memcmp(zt->name, name, len) && !zt->name[len]); ++zt)
    for (alias = zt->ns; alias; alias = alias->n)
      if (alias == ns)
	return zt;
  return ztt;
}

#if 0
/* N.B. Generally this function is not needed since tokens can be arranged
 * to point to respective struct zx_ns_s at compile time using static
 * initialization. This is handled by xsd2sg.pl */
/*if (!zx_init_tok_tab(&ctx, zx_elems, zx_elems + sizeof(zx_elems) / sizeof(struct zx_tok)))  DIE("Inconsistency between tokens and namespaces");*/
/* Called by: */
int zx_init_tok_tab(struct zx_ctx* c, struct zx_tok* tok_tab, struct zx_tok* tok_tab_lim)
{
  for (; tok_tab < tok_tab_lim; ++tok_tab)
    if (!(tok_tab->ns = zx_locate_ns_by_prefix(c, strlen(tok_tab->prefix), (char*)tok_tab->prefix)))
      return 0;
  return 1;
}
#endif

/* Called by: */
int zx_len_xmlns_if_not_seen(struct zx_ctx* c, struct zx_ns_s* ns, struct zx_ns_s** pop_seen)
{
  if (!ns)
    return 0;
  if (!zx_push_seen(c, ns->prefix_len, ns->prefix, ns->url_len, ns->url, pop_seen))
    return 0;
  return sizeof(" xmlns")-1
    + (ns->prefix_len ? ns->prefix_len+1 : 0) + 2 + ns->url_len + 1;
}

/* Called by: */
char* zx_enc_xmlns_if_not_seen(struct zx_ctx* c, char* p, struct zx_ns_s* ns, struct zx_ns_s** pop_seen)
{
  if (!ns)
    return p;
  if (!zx_push_seen(c, ns->prefix_len, ns->prefix, ns->url_len, ns->url, pop_seen))
    return p;
  
  ZX_OUT_MEM(p, " xmlns", sizeof(" xmlns")-1);
  if (ns->prefix_len) {
    ZX_OUT_CH(p, ':');
    ZX_OUT_MEM(p, ns->prefix, ns->prefix_len);
  }
  ZX_OUT_CH(p, '=');
  ZX_OUT_CH(p, '"');
  ZX_OUT_MEM(p, ns->url, ns->url_len);
  ZX_OUT_CH(p, '"');
  return p;
}

/* For WO encoder the order of xmlns declarations is not known at compile
 * time. Thus we first add them to the pop_seen list using insertion
 * sort (pop_seen is smallest and prefixes grow from there) and
 * then later render the list using zx_enc_seen(). */

/* Called by: */
void zx_add_xmlns_if_not_seen(struct zx_ctx* c, struct zx_ns_s* ns, struct zx_ns_s** pop_seen)
{
  struct zx_ns_s* pop_seen_dummy=0;
  struct zx_ns_s* new_ns;
  int res;
  if (!ns)
    return;
  new_ns = zx_push_seen(c, ns->prefix_len, ns->prefix, ns->url_len, ns->url, &pop_seen_dummy);
  if (!new_ns)
    return;
  if (!*pop_seen) {
    *pop_seen = new_ns;
    return;
  }
  if (!new_ns->prefix_len) {       /* Default namespace (empty prefix) sorts first. */
first:
    new_ns->seen_pop = *pop_seen;
    *pop_seen = new_ns;
    return;
  }

  ns = *pop_seen;
  if (ns->prefix_len) {
    res = memcmp(ns->prefix, new_ns->prefix, MIN(ns->prefix_len, new_ns->prefix_len));
    if (res > 0 || !res && ns->prefix_len >= new_ns->prefix_len)
      goto first;
  }
  for (; ns->seen_pop; ns = ns->seen_pop) {
    res = memcmp(ns->seen_pop->prefix, new_ns->prefix,
		 MIN(ns->seen_pop->prefix_len, new_ns->prefix_len));
    if (res > 0 || !res && ns->seen_pop->prefix_len >= new_ns->prefix_len)
      break;
  }
  new_ns->seen_pop = ns->seen_pop;
  ns->seen_pop = new_ns;
}

/* Called by:  TXENC_WO_ELNAME */
char* zx_enc_seen(char* p, struct zx_ns_s* ns)
{
  /* *** Consider sorting the seen */
  for (; ns; ns = ns->seen_pop) {
    ZX_OUT_MEM(p, " xmlns", sizeof(" xmlns")-1);
    if (ns->prefix_len) {
      ZX_OUT_CH(p, ':');
      ZX_OUT_MEM(p, ns->prefix, ns->prefix_len);
    }
    ZX_OUT_CH(p, '=');
    ZX_OUT_CH(p, '"');
    ZX_OUT_MEM(p, ns->url, ns->url_len);
    ZX_OUT_CH(p, '"');
  }
  return p;
}

/* EOF -- zxns.c */
