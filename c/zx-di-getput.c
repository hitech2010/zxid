/* c/zx-di-getput.c - WARNING: This file was automatically generated. DO NOT EDIT!
 * $Id$ */
/* Code generation design Copyright (c) 2006 Sampo Kellomaki (sampo@iki.fi),
 * All Rights Reserved. NO WARRANTY. See file COPYING for terms and conditions
 * of use. Some aspects of code generation were driven by schema
 * descriptions that were used as input and may be subject to their own copyright.
 * Code generation uses a template, whose copyright statement follows. */

/** getput-templ.c  -  Auxiliary functions template: cloning, freeing, walking data
 ** Copyright (c) 2006 Symlabs (symlabs@symlabs.com), All Rights Reserved.
 ** Author: Sampo Kellomaki (sampo@iki.fi)
 ** This is confidential unpublished proprietary source code of the author.
 ** NO WARRANTY, not even implied warranties. Contains trade secrets.
 ** Distribution prohibited unless authorized in writing.
 ** Licensed under Apache License 2.0, see file COPYING.
 ** Id: getput-templ.c,v 1.7 2007/03/28 20:31:54 sampo Exp $
 **
 ** 30.5.2006, created, Sampo Kellomaki (sampo@iki.fi)
 ** 6.8.2006, factored from enc-templ.c to separate file --Sampo
 **
 ** N.B: wo=wire order (needed for exc-c14n), so=schema order
 ** Edit with care! xsd2sg.pl applies various substitutions to this file.
 **/

#include <memory.h>
#include "errmac.h"
#include "zx.h"
#include "c/zx-const.h"
#include "c/zx-data.h"
#include "c/zx-di-data.h"



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_di_EndpointContext_NUM_Address) */

int zx_di_EndpointContext_NUM_Address(struct zx_di_EndpointContext_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Address; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_di_EndpointContext_GET_Address) */

struct zx_elem_s* zx_di_EndpointContext_GET_Address(struct zx_di_EndpointContext_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->Address; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_di_EndpointContext_POP_Address) */

struct zx_elem_s* zx_di_EndpointContext_POP_Address(struct zx_di_EndpointContext_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->Address;
  if (y)
    x->Address = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_di_EndpointContext_PUSH_Address) */

void zx_di_EndpointContext_PUSH_Address(struct zx_di_EndpointContext_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->Address->g;
  x->Address = z;
}

/* FUNC(zx_di_EndpointContext_REV_Address) */

void zx_di_EndpointContext_REV_Address(struct zx_di_EndpointContext_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->Address;
  if (!y) return;
  x->Address = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->Address->g;
    x->Address = y;
    y = nxt;
  }
}

/* FUNC(zx_di_EndpointContext_PUT_Address) */

void zx_di_EndpointContext_PUT_Address(struct zx_di_EndpointContext_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->Address;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->Address = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_di_EndpointContext_ADD_Address) */

void zx_di_EndpointContext_ADD_Address(struct zx_di_EndpointContext_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->Address->g;
    x->Address = z;
    return;
  case -1:
    y = x->Address;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->Address; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_di_EndpointContext_DEL_Address) */

void zx_di_EndpointContext_DEL_Address(struct zx_di_EndpointContext_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Address = (struct zx_elem_s*)x->Address->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->Address;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->Address; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_di_EndpointContext_NUM_Framework) */

int zx_di_EndpointContext_NUM_Framework(struct zx_di_EndpointContext_s* x)
{
  struct zx_sbf_Framework_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Framework; y; ++n, y = (struct zx_sbf_Framework_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_di_EndpointContext_GET_Framework) */

struct zx_sbf_Framework_s* zx_di_EndpointContext_GET_Framework(struct zx_di_EndpointContext_s* x, int n)
{
  struct zx_sbf_Framework_s* y;
  if (!x) return 0;
  for (y = x->Framework; n>=0 && y; --n, y = (struct zx_sbf_Framework_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_di_EndpointContext_POP_Framework) */

struct zx_sbf_Framework_s* zx_di_EndpointContext_POP_Framework(struct zx_di_EndpointContext_s* x)
{
  struct zx_sbf_Framework_s* y;
  if (!x) return 0;
  y = x->Framework;
  if (y)
    x->Framework = (struct zx_sbf_Framework_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_di_EndpointContext_PUSH_Framework) */

void zx_di_EndpointContext_PUSH_Framework(struct zx_di_EndpointContext_s* x, struct zx_sbf_Framework_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Framework->gg.g;
  x->Framework = z;
}

/* FUNC(zx_di_EndpointContext_REV_Framework) */

void zx_di_EndpointContext_REV_Framework(struct zx_di_EndpointContext_s* x)
{
  struct zx_sbf_Framework_s* nxt;
  struct zx_sbf_Framework_s* y;
  if (!x) return;
  y = x->Framework;
  if (!y) return;
  x->Framework = 0;
  while (y) {
    nxt = (struct zx_sbf_Framework_s*)y->gg.g.n;
    y->gg.g.n = &x->Framework->gg.g;
    x->Framework = y;
    y = nxt;
  }
}

/* FUNC(zx_di_EndpointContext_PUT_Framework) */

void zx_di_EndpointContext_PUT_Framework(struct zx_di_EndpointContext_s* x, int n, struct zx_sbf_Framework_s* z)
{
  struct zx_sbf_Framework_s* y;
  if (!x || !z) return;
  y = x->Framework;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Framework = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_sbf_Framework_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_di_EndpointContext_ADD_Framework) */

void zx_di_EndpointContext_ADD_Framework(struct zx_di_EndpointContext_s* x, int n, struct zx_sbf_Framework_s* z)
{
  struct zx_sbf_Framework_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->Framework->gg.g;
    x->Framework = z;
    return;
  case -1:
    y = x->Framework;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_sbf_Framework_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Framework; n > 1 && y; --n, y = (struct zx_sbf_Framework_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_di_EndpointContext_DEL_Framework) */

void zx_di_EndpointContext_DEL_Framework(struct zx_di_EndpointContext_s* x, int n)
{
  struct zx_sbf_Framework_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Framework = (struct zx_sbf_Framework_s*)x->Framework->gg.g.n;
    return;
  case -1:
    y = (struct zx_sbf_Framework_s*)x->Framework;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_sbf_Framework_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Framework; n > 1 && y->gg.g.n; --n, y = (struct zx_sbf_Framework_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_di_EndpointContext_NUM_SecurityMechID) */

int zx_di_EndpointContext_NUM_SecurityMechID(struct zx_di_EndpointContext_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->SecurityMechID; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_di_EndpointContext_GET_SecurityMechID) */

struct zx_elem_s* zx_di_EndpointContext_GET_SecurityMechID(struct zx_di_EndpointContext_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->SecurityMechID; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_di_EndpointContext_POP_SecurityMechID) */

struct zx_elem_s* zx_di_EndpointContext_POP_SecurityMechID(struct zx_di_EndpointContext_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->SecurityMechID;
  if (y)
    x->SecurityMechID = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_di_EndpointContext_PUSH_SecurityMechID) */

void zx_di_EndpointContext_PUSH_SecurityMechID(struct zx_di_EndpointContext_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->SecurityMechID->g;
  x->SecurityMechID = z;
}

/* FUNC(zx_di_EndpointContext_REV_SecurityMechID) */

void zx_di_EndpointContext_REV_SecurityMechID(struct zx_di_EndpointContext_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->SecurityMechID;
  if (!y) return;
  x->SecurityMechID = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->SecurityMechID->g;
    x->SecurityMechID = y;
    y = nxt;
  }
}

/* FUNC(zx_di_EndpointContext_PUT_SecurityMechID) */

void zx_di_EndpointContext_PUT_SecurityMechID(struct zx_di_EndpointContext_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->SecurityMechID;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->SecurityMechID = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_di_EndpointContext_ADD_SecurityMechID) */

void zx_di_EndpointContext_ADD_SecurityMechID(struct zx_di_EndpointContext_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->SecurityMechID->g;
    x->SecurityMechID = z;
    return;
  case -1:
    y = x->SecurityMechID;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->SecurityMechID; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_di_EndpointContext_DEL_SecurityMechID) */

void zx_di_EndpointContext_DEL_SecurityMechID(struct zx_di_EndpointContext_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->SecurityMechID = (struct zx_elem_s*)x->SecurityMechID->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->SecurityMechID;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->SecurityMechID; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_di_EndpointContext_NUM_Action) */

int zx_di_EndpointContext_NUM_Action(struct zx_di_EndpointContext_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Action; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_di_EndpointContext_GET_Action) */

struct zx_elem_s* zx_di_EndpointContext_GET_Action(struct zx_di_EndpointContext_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->Action; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_di_EndpointContext_POP_Action) */

struct zx_elem_s* zx_di_EndpointContext_POP_Action(struct zx_di_EndpointContext_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->Action;
  if (y)
    x->Action = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_di_EndpointContext_PUSH_Action) */

void zx_di_EndpointContext_PUSH_Action(struct zx_di_EndpointContext_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->Action->g;
  x->Action = z;
}

/* FUNC(zx_di_EndpointContext_REV_Action) */

void zx_di_EndpointContext_REV_Action(struct zx_di_EndpointContext_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->Action;
  if (!y) return;
  x->Action = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->Action->g;
    x->Action = y;
    y = nxt;
  }
}

/* FUNC(zx_di_EndpointContext_PUT_Action) */

void zx_di_EndpointContext_PUT_Action(struct zx_di_EndpointContext_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->Action;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->Action = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_di_EndpointContext_ADD_Action) */

void zx_di_EndpointContext_ADD_Action(struct zx_di_EndpointContext_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->Action->g;
    x->Action = z;
    return;
  case -1:
    y = x->Action;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->Action; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_di_EndpointContext_DEL_Action) */

void zx_di_EndpointContext_DEL_Action(struct zx_di_EndpointContext_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Action = (struct zx_elem_s*)x->Action->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->Action;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->Action; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

#endif






/* FUNC(zx_di_Framework_GET_version) */
struct zx_str* zx_di_Framework_GET_version(struct zx_di_Framework_s* x) { return x->version; }
/* FUNC(zx_di_Framework_PUT_version) */
void zx_di_Framework_PUT_version(struct zx_di_Framework_s* x, struct zx_str* y) { x->version = y; }
/* FUNC(zx_di_Framework_GET_Id) */
struct zx_str* zx_di_Framework_GET_Id(struct zx_di_Framework_s* x) { return x->Id; }
/* FUNC(zx_di_Framework_PUT_Id) */
void zx_di_Framework_PUT_Id(struct zx_di_Framework_s* x, struct zx_str* y) { x->Id = y; }
/* FUNC(zx_di_Framework_GET_actor) */
struct zx_str* zx_di_Framework_GET_actor(struct zx_di_Framework_s* x) { return x->actor; }
/* FUNC(zx_di_Framework_PUT_actor) */
void zx_di_Framework_PUT_actor(struct zx_di_Framework_s* x, struct zx_str* y) { x->actor = y; }
/* FUNC(zx_di_Framework_GET_mustUnderstand) */
struct zx_str* zx_di_Framework_GET_mustUnderstand(struct zx_di_Framework_s* x) { return x->mustUnderstand; }
/* FUNC(zx_di_Framework_PUT_mustUnderstand) */
void zx_di_Framework_PUT_mustUnderstand(struct zx_di_Framework_s* x, struct zx_str* y) { x->mustUnderstand = y; }







#ifdef ZX_ENA_GETPUT

/* FUNC(zx_di_Keys_NUM_KeyDescriptor) */

int zx_di_Keys_NUM_KeyDescriptor(struct zx_di_Keys_s* x)
{
  struct zx_md_KeyDescriptor_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->KeyDescriptor; y; ++n, y = (struct zx_md_KeyDescriptor_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_di_Keys_GET_KeyDescriptor) */

struct zx_md_KeyDescriptor_s* zx_di_Keys_GET_KeyDescriptor(struct zx_di_Keys_s* x, int n)
{
  struct zx_md_KeyDescriptor_s* y;
  if (!x) return 0;
  for (y = x->KeyDescriptor; n>=0 && y; --n, y = (struct zx_md_KeyDescriptor_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_di_Keys_POP_KeyDescriptor) */

struct zx_md_KeyDescriptor_s* zx_di_Keys_POP_KeyDescriptor(struct zx_di_Keys_s* x)
{
  struct zx_md_KeyDescriptor_s* y;
  if (!x) return 0;
  y = x->KeyDescriptor;
  if (y)
    x->KeyDescriptor = (struct zx_md_KeyDescriptor_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_di_Keys_PUSH_KeyDescriptor) */

void zx_di_Keys_PUSH_KeyDescriptor(struct zx_di_Keys_s* x, struct zx_md_KeyDescriptor_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->KeyDescriptor->gg.g;
  x->KeyDescriptor = z;
}

/* FUNC(zx_di_Keys_REV_KeyDescriptor) */

void zx_di_Keys_REV_KeyDescriptor(struct zx_di_Keys_s* x)
{
  struct zx_md_KeyDescriptor_s* nxt;
  struct zx_md_KeyDescriptor_s* y;
  if (!x) return;
  y = x->KeyDescriptor;
  if (!y) return;
  x->KeyDescriptor = 0;
  while (y) {
    nxt = (struct zx_md_KeyDescriptor_s*)y->gg.g.n;
    y->gg.g.n = &x->KeyDescriptor->gg.g;
    x->KeyDescriptor = y;
    y = nxt;
  }
}

/* FUNC(zx_di_Keys_PUT_KeyDescriptor) */

void zx_di_Keys_PUT_KeyDescriptor(struct zx_di_Keys_s* x, int n, struct zx_md_KeyDescriptor_s* z)
{
  struct zx_md_KeyDescriptor_s* y;
  if (!x || !z) return;
  y = x->KeyDescriptor;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->KeyDescriptor = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_md_KeyDescriptor_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_di_Keys_ADD_KeyDescriptor) */

void zx_di_Keys_ADD_KeyDescriptor(struct zx_di_Keys_s* x, int n, struct zx_md_KeyDescriptor_s* z)
{
  struct zx_md_KeyDescriptor_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->KeyDescriptor->gg.g;
    x->KeyDescriptor = z;
    return;
  case -1:
    y = x->KeyDescriptor;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_md_KeyDescriptor_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->KeyDescriptor; n > 1 && y; --n, y = (struct zx_md_KeyDescriptor_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_di_Keys_DEL_KeyDescriptor) */

void zx_di_Keys_DEL_KeyDescriptor(struct zx_di_Keys_s* x, int n)
{
  struct zx_md_KeyDescriptor_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->KeyDescriptor = (struct zx_md_KeyDescriptor_s*)x->KeyDescriptor->gg.g.n;
    return;
  case -1:
    y = (struct zx_md_KeyDescriptor_s*)x->KeyDescriptor;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_md_KeyDescriptor_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->KeyDescriptor; n > 1 && y->gg.g.n; --n, y = (struct zx_md_KeyDescriptor_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif








#ifdef ZX_ENA_GETPUT

/* FUNC(zx_di_Options_NUM_Option) */

int zx_di_Options_NUM_Option(struct zx_di_Options_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Option; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_di_Options_GET_Option) */

struct zx_elem_s* zx_di_Options_GET_Option(struct zx_di_Options_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->Option; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_di_Options_POP_Option) */

struct zx_elem_s* zx_di_Options_POP_Option(struct zx_di_Options_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->Option;
  if (y)
    x->Option = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_di_Options_PUSH_Option) */

void zx_di_Options_PUSH_Option(struct zx_di_Options_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->Option->g;
  x->Option = z;
}

/* FUNC(zx_di_Options_REV_Option) */

void zx_di_Options_REV_Option(struct zx_di_Options_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->Option;
  if (!y) return;
  x->Option = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->Option->g;
    x->Option = y;
    y = nxt;
  }
}

/* FUNC(zx_di_Options_PUT_Option) */

void zx_di_Options_PUT_Option(struct zx_di_Options_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->Option;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->Option = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_di_Options_ADD_Option) */

void zx_di_Options_ADD_Option(struct zx_di_Options_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->Option->g;
    x->Option = z;
    return;
  case -1:
    y = x->Option;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->Option; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_di_Options_DEL_Option) */

void zx_di_Options_DEL_Option(struct zx_di_Options_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Option = (struct zx_elem_s*)x->Option->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->Option;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->Option; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

#endif








#ifdef ZX_ENA_GETPUT

/* FUNC(zx_di_Query_NUM_RequestedService) */

int zx_di_Query_NUM_RequestedService(struct zx_di_Query_s* x)
{
  struct zx_di_RequestedService_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->RequestedService; y; ++n, y = (struct zx_di_RequestedService_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_di_Query_GET_RequestedService) */

struct zx_di_RequestedService_s* zx_di_Query_GET_RequestedService(struct zx_di_Query_s* x, int n)
{
  struct zx_di_RequestedService_s* y;
  if (!x) return 0;
  for (y = x->RequestedService; n>=0 && y; --n, y = (struct zx_di_RequestedService_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_di_Query_POP_RequestedService) */

struct zx_di_RequestedService_s* zx_di_Query_POP_RequestedService(struct zx_di_Query_s* x)
{
  struct zx_di_RequestedService_s* y;
  if (!x) return 0;
  y = x->RequestedService;
  if (y)
    x->RequestedService = (struct zx_di_RequestedService_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_di_Query_PUSH_RequestedService) */

void zx_di_Query_PUSH_RequestedService(struct zx_di_Query_s* x, struct zx_di_RequestedService_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->RequestedService->gg.g;
  x->RequestedService = z;
}

/* FUNC(zx_di_Query_REV_RequestedService) */

void zx_di_Query_REV_RequestedService(struct zx_di_Query_s* x)
{
  struct zx_di_RequestedService_s* nxt;
  struct zx_di_RequestedService_s* y;
  if (!x) return;
  y = x->RequestedService;
  if (!y) return;
  x->RequestedService = 0;
  while (y) {
    nxt = (struct zx_di_RequestedService_s*)y->gg.g.n;
    y->gg.g.n = &x->RequestedService->gg.g;
    x->RequestedService = y;
    y = nxt;
  }
}

/* FUNC(zx_di_Query_PUT_RequestedService) */

void zx_di_Query_PUT_RequestedService(struct zx_di_Query_s* x, int n, struct zx_di_RequestedService_s* z)
{
  struct zx_di_RequestedService_s* y;
  if (!x || !z) return;
  y = x->RequestedService;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->RequestedService = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_di_RequestedService_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_di_Query_ADD_RequestedService) */

void zx_di_Query_ADD_RequestedService(struct zx_di_Query_s* x, int n, struct zx_di_RequestedService_s* z)
{
  struct zx_di_RequestedService_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->RequestedService->gg.g;
    x->RequestedService = z;
    return;
  case -1:
    y = x->RequestedService;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_di_RequestedService_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->RequestedService; n > 1 && y; --n, y = (struct zx_di_RequestedService_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_di_Query_DEL_RequestedService) */

void zx_di_Query_DEL_RequestedService(struct zx_di_Query_s* x, int n)
{
  struct zx_di_RequestedService_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->RequestedService = (struct zx_di_RequestedService_s*)x->RequestedService->gg.g.n;
    return;
  case -1:
    y = (struct zx_di_RequestedService_s*)x->RequestedService;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_di_RequestedService_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->RequestedService; n > 1 && y->gg.g.n; --n, y = (struct zx_di_RequestedService_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif








#ifdef ZX_ENA_GETPUT

/* FUNC(zx_di_QueryResponse_NUM_Status) */

int zx_di_QueryResponse_NUM_Status(struct zx_di_QueryResponse_s* x)
{
  struct zx_lu_Status_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Status; y; ++n, y = (struct zx_lu_Status_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_di_QueryResponse_GET_Status) */

struct zx_lu_Status_s* zx_di_QueryResponse_GET_Status(struct zx_di_QueryResponse_s* x, int n)
{
  struct zx_lu_Status_s* y;
  if (!x) return 0;
  for (y = x->Status; n>=0 && y; --n, y = (struct zx_lu_Status_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_di_QueryResponse_POP_Status) */

struct zx_lu_Status_s* zx_di_QueryResponse_POP_Status(struct zx_di_QueryResponse_s* x)
{
  struct zx_lu_Status_s* y;
  if (!x) return 0;
  y = x->Status;
  if (y)
    x->Status = (struct zx_lu_Status_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_di_QueryResponse_PUSH_Status) */

void zx_di_QueryResponse_PUSH_Status(struct zx_di_QueryResponse_s* x, struct zx_lu_Status_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Status->gg.g;
  x->Status = z;
}

/* FUNC(zx_di_QueryResponse_REV_Status) */

void zx_di_QueryResponse_REV_Status(struct zx_di_QueryResponse_s* x)
{
  struct zx_lu_Status_s* nxt;
  struct zx_lu_Status_s* y;
  if (!x) return;
  y = x->Status;
  if (!y) return;
  x->Status = 0;
  while (y) {
    nxt = (struct zx_lu_Status_s*)y->gg.g.n;
    y->gg.g.n = &x->Status->gg.g;
    x->Status = y;
    y = nxt;
  }
}

/* FUNC(zx_di_QueryResponse_PUT_Status) */

void zx_di_QueryResponse_PUT_Status(struct zx_di_QueryResponse_s* x, int n, struct zx_lu_Status_s* z)
{
  struct zx_lu_Status_s* y;
  if (!x || !z) return;
  y = x->Status;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Status = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_lu_Status_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_di_QueryResponse_ADD_Status) */

void zx_di_QueryResponse_ADD_Status(struct zx_di_QueryResponse_s* x, int n, struct zx_lu_Status_s* z)
{
  struct zx_lu_Status_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->Status->gg.g;
    x->Status = z;
    return;
  case -1:
    y = x->Status;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_lu_Status_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Status; n > 1 && y; --n, y = (struct zx_lu_Status_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_di_QueryResponse_DEL_Status) */

void zx_di_QueryResponse_DEL_Status(struct zx_di_QueryResponse_s* x, int n)
{
  struct zx_lu_Status_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Status = (struct zx_lu_Status_s*)x->Status->gg.g.n;
    return;
  case -1:
    y = (struct zx_lu_Status_s*)x->Status;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_lu_Status_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Status; n > 1 && y->gg.g.n; --n, y = (struct zx_lu_Status_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_di_QueryResponse_NUM_EndpointReference) */

int zx_di_QueryResponse_NUM_EndpointReference(struct zx_di_QueryResponse_s* x)
{
  struct zx_a_EndpointReference_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->EndpointReference; y; ++n, y = (struct zx_a_EndpointReference_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_di_QueryResponse_GET_EndpointReference) */

struct zx_a_EndpointReference_s* zx_di_QueryResponse_GET_EndpointReference(struct zx_di_QueryResponse_s* x, int n)
{
  struct zx_a_EndpointReference_s* y;
  if (!x) return 0;
  for (y = x->EndpointReference; n>=0 && y; --n, y = (struct zx_a_EndpointReference_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_di_QueryResponse_POP_EndpointReference) */

struct zx_a_EndpointReference_s* zx_di_QueryResponse_POP_EndpointReference(struct zx_di_QueryResponse_s* x)
{
  struct zx_a_EndpointReference_s* y;
  if (!x) return 0;
  y = x->EndpointReference;
  if (y)
    x->EndpointReference = (struct zx_a_EndpointReference_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_di_QueryResponse_PUSH_EndpointReference) */

void zx_di_QueryResponse_PUSH_EndpointReference(struct zx_di_QueryResponse_s* x, struct zx_a_EndpointReference_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->EndpointReference->gg.g;
  x->EndpointReference = z;
}

/* FUNC(zx_di_QueryResponse_REV_EndpointReference) */

void zx_di_QueryResponse_REV_EndpointReference(struct zx_di_QueryResponse_s* x)
{
  struct zx_a_EndpointReference_s* nxt;
  struct zx_a_EndpointReference_s* y;
  if (!x) return;
  y = x->EndpointReference;
  if (!y) return;
  x->EndpointReference = 0;
  while (y) {
    nxt = (struct zx_a_EndpointReference_s*)y->gg.g.n;
    y->gg.g.n = &x->EndpointReference->gg.g;
    x->EndpointReference = y;
    y = nxt;
  }
}

/* FUNC(zx_di_QueryResponse_PUT_EndpointReference) */

void zx_di_QueryResponse_PUT_EndpointReference(struct zx_di_QueryResponse_s* x, int n, struct zx_a_EndpointReference_s* z)
{
  struct zx_a_EndpointReference_s* y;
  if (!x || !z) return;
  y = x->EndpointReference;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->EndpointReference = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_a_EndpointReference_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_di_QueryResponse_ADD_EndpointReference) */

void zx_di_QueryResponse_ADD_EndpointReference(struct zx_di_QueryResponse_s* x, int n, struct zx_a_EndpointReference_s* z)
{
  struct zx_a_EndpointReference_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->EndpointReference->gg.g;
    x->EndpointReference = z;
    return;
  case -1:
    y = x->EndpointReference;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_a_EndpointReference_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->EndpointReference; n > 1 && y; --n, y = (struct zx_a_EndpointReference_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_di_QueryResponse_DEL_EndpointReference) */

void zx_di_QueryResponse_DEL_EndpointReference(struct zx_di_QueryResponse_s* x, int n)
{
  struct zx_a_EndpointReference_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->EndpointReference = (struct zx_a_EndpointReference_s*)x->EndpointReference->gg.g.n;
    return;
  case -1:
    y = (struct zx_a_EndpointReference_s*)x->EndpointReference;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_a_EndpointReference_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->EndpointReference; n > 1 && y->gg.g.n; --n, y = (struct zx_a_EndpointReference_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif








#ifdef ZX_ENA_GETPUT

/* FUNC(zx_di_RequestedService_NUM_ServiceType) */

int zx_di_RequestedService_NUM_ServiceType(struct zx_di_RequestedService_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->ServiceType; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_di_RequestedService_GET_ServiceType) */

struct zx_elem_s* zx_di_RequestedService_GET_ServiceType(struct zx_di_RequestedService_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->ServiceType; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_di_RequestedService_POP_ServiceType) */

struct zx_elem_s* zx_di_RequestedService_POP_ServiceType(struct zx_di_RequestedService_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->ServiceType;
  if (y)
    x->ServiceType = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_di_RequestedService_PUSH_ServiceType) */

void zx_di_RequestedService_PUSH_ServiceType(struct zx_di_RequestedService_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->ServiceType->g;
  x->ServiceType = z;
}

/* FUNC(zx_di_RequestedService_REV_ServiceType) */

void zx_di_RequestedService_REV_ServiceType(struct zx_di_RequestedService_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->ServiceType;
  if (!y) return;
  x->ServiceType = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->ServiceType->g;
    x->ServiceType = y;
    y = nxt;
  }
}

/* FUNC(zx_di_RequestedService_PUT_ServiceType) */

void zx_di_RequestedService_PUT_ServiceType(struct zx_di_RequestedService_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->ServiceType;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->ServiceType = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_di_RequestedService_ADD_ServiceType) */

void zx_di_RequestedService_ADD_ServiceType(struct zx_di_RequestedService_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->ServiceType->g;
    x->ServiceType = z;
    return;
  case -1:
    y = x->ServiceType;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->ServiceType; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_di_RequestedService_DEL_ServiceType) */

void zx_di_RequestedService_DEL_ServiceType(struct zx_di_RequestedService_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->ServiceType = (struct zx_elem_s*)x->ServiceType->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->ServiceType;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->ServiceType; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_di_RequestedService_NUM_ProviderID) */

int zx_di_RequestedService_NUM_ProviderID(struct zx_di_RequestedService_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->ProviderID; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_di_RequestedService_GET_ProviderID) */

struct zx_elem_s* zx_di_RequestedService_GET_ProviderID(struct zx_di_RequestedService_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->ProviderID; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_di_RequestedService_POP_ProviderID) */

struct zx_elem_s* zx_di_RequestedService_POP_ProviderID(struct zx_di_RequestedService_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->ProviderID;
  if (y)
    x->ProviderID = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_di_RequestedService_PUSH_ProviderID) */

void zx_di_RequestedService_PUSH_ProviderID(struct zx_di_RequestedService_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->ProviderID->g;
  x->ProviderID = z;
}

/* FUNC(zx_di_RequestedService_REV_ProviderID) */

void zx_di_RequestedService_REV_ProviderID(struct zx_di_RequestedService_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->ProviderID;
  if (!y) return;
  x->ProviderID = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->ProviderID->g;
    x->ProviderID = y;
    y = nxt;
  }
}

/* FUNC(zx_di_RequestedService_PUT_ProviderID) */

void zx_di_RequestedService_PUT_ProviderID(struct zx_di_RequestedService_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->ProviderID;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->ProviderID = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_di_RequestedService_ADD_ProviderID) */

void zx_di_RequestedService_ADD_ProviderID(struct zx_di_RequestedService_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->ProviderID->g;
    x->ProviderID = z;
    return;
  case -1:
    y = x->ProviderID;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->ProviderID; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_di_RequestedService_DEL_ProviderID) */

void zx_di_RequestedService_DEL_ProviderID(struct zx_di_RequestedService_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->ProviderID = (struct zx_elem_s*)x->ProviderID->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->ProviderID;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->ProviderID; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_di_RequestedService_NUM_Options) */

int zx_di_RequestedService_NUM_Options(struct zx_di_RequestedService_s* x)
{
  struct zx_di_Options_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Options; y; ++n, y = (struct zx_di_Options_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_di_RequestedService_GET_Options) */

struct zx_di_Options_s* zx_di_RequestedService_GET_Options(struct zx_di_RequestedService_s* x, int n)
{
  struct zx_di_Options_s* y;
  if (!x) return 0;
  for (y = x->Options; n>=0 && y; --n, y = (struct zx_di_Options_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_di_RequestedService_POP_Options) */

struct zx_di_Options_s* zx_di_RequestedService_POP_Options(struct zx_di_RequestedService_s* x)
{
  struct zx_di_Options_s* y;
  if (!x) return 0;
  y = x->Options;
  if (y)
    x->Options = (struct zx_di_Options_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_di_RequestedService_PUSH_Options) */

void zx_di_RequestedService_PUSH_Options(struct zx_di_RequestedService_s* x, struct zx_di_Options_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Options->gg.g;
  x->Options = z;
}

/* FUNC(zx_di_RequestedService_REV_Options) */

void zx_di_RequestedService_REV_Options(struct zx_di_RequestedService_s* x)
{
  struct zx_di_Options_s* nxt;
  struct zx_di_Options_s* y;
  if (!x) return;
  y = x->Options;
  if (!y) return;
  x->Options = 0;
  while (y) {
    nxt = (struct zx_di_Options_s*)y->gg.g.n;
    y->gg.g.n = &x->Options->gg.g;
    x->Options = y;
    y = nxt;
  }
}

/* FUNC(zx_di_RequestedService_PUT_Options) */

void zx_di_RequestedService_PUT_Options(struct zx_di_RequestedService_s* x, int n, struct zx_di_Options_s* z)
{
  struct zx_di_Options_s* y;
  if (!x || !z) return;
  y = x->Options;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Options = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_di_Options_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_di_RequestedService_ADD_Options) */

void zx_di_RequestedService_ADD_Options(struct zx_di_RequestedService_s* x, int n, struct zx_di_Options_s* z)
{
  struct zx_di_Options_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->Options->gg.g;
    x->Options = z;
    return;
  case -1:
    y = x->Options;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_di_Options_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Options; n > 1 && y; --n, y = (struct zx_di_Options_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_di_RequestedService_DEL_Options) */

void zx_di_RequestedService_DEL_Options(struct zx_di_RequestedService_s* x, int n)
{
  struct zx_di_Options_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Options = (struct zx_di_Options_s*)x->Options->gg.g.n;
    return;
  case -1:
    y = (struct zx_di_Options_s*)x->Options;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_di_Options_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Options; n > 1 && y->gg.g.n; --n, y = (struct zx_di_Options_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_di_RequestedService_NUM_SecurityMechID) */

int zx_di_RequestedService_NUM_SecurityMechID(struct zx_di_RequestedService_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->SecurityMechID; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_di_RequestedService_GET_SecurityMechID) */

struct zx_elem_s* zx_di_RequestedService_GET_SecurityMechID(struct zx_di_RequestedService_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->SecurityMechID; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_di_RequestedService_POP_SecurityMechID) */

struct zx_elem_s* zx_di_RequestedService_POP_SecurityMechID(struct zx_di_RequestedService_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->SecurityMechID;
  if (y)
    x->SecurityMechID = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_di_RequestedService_PUSH_SecurityMechID) */

void zx_di_RequestedService_PUSH_SecurityMechID(struct zx_di_RequestedService_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->SecurityMechID->g;
  x->SecurityMechID = z;
}

/* FUNC(zx_di_RequestedService_REV_SecurityMechID) */

void zx_di_RequestedService_REV_SecurityMechID(struct zx_di_RequestedService_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->SecurityMechID;
  if (!y) return;
  x->SecurityMechID = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->SecurityMechID->g;
    x->SecurityMechID = y;
    y = nxt;
  }
}

/* FUNC(zx_di_RequestedService_PUT_SecurityMechID) */

void zx_di_RequestedService_PUT_SecurityMechID(struct zx_di_RequestedService_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->SecurityMechID;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->SecurityMechID = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_di_RequestedService_ADD_SecurityMechID) */

void zx_di_RequestedService_ADD_SecurityMechID(struct zx_di_RequestedService_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->SecurityMechID->g;
    x->SecurityMechID = z;
    return;
  case -1:
    y = x->SecurityMechID;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->SecurityMechID; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_di_RequestedService_DEL_SecurityMechID) */

void zx_di_RequestedService_DEL_SecurityMechID(struct zx_di_RequestedService_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->SecurityMechID = (struct zx_elem_s*)x->SecurityMechID->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->SecurityMechID;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->SecurityMechID; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_di_RequestedService_NUM_Framework) */

int zx_di_RequestedService_NUM_Framework(struct zx_di_RequestedService_s* x)
{
  struct zx_di_Framework_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Framework; y; ++n, y = (struct zx_di_Framework_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_di_RequestedService_GET_Framework) */

struct zx_di_Framework_s* zx_di_RequestedService_GET_Framework(struct zx_di_RequestedService_s* x, int n)
{
  struct zx_di_Framework_s* y;
  if (!x) return 0;
  for (y = x->Framework; n>=0 && y; --n, y = (struct zx_di_Framework_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_di_RequestedService_POP_Framework) */

struct zx_di_Framework_s* zx_di_RequestedService_POP_Framework(struct zx_di_RequestedService_s* x)
{
  struct zx_di_Framework_s* y;
  if (!x) return 0;
  y = x->Framework;
  if (y)
    x->Framework = (struct zx_di_Framework_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_di_RequestedService_PUSH_Framework) */

void zx_di_RequestedService_PUSH_Framework(struct zx_di_RequestedService_s* x, struct zx_di_Framework_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Framework->gg.g;
  x->Framework = z;
}

/* FUNC(zx_di_RequestedService_REV_Framework) */

void zx_di_RequestedService_REV_Framework(struct zx_di_RequestedService_s* x)
{
  struct zx_di_Framework_s* nxt;
  struct zx_di_Framework_s* y;
  if (!x) return;
  y = x->Framework;
  if (!y) return;
  x->Framework = 0;
  while (y) {
    nxt = (struct zx_di_Framework_s*)y->gg.g.n;
    y->gg.g.n = &x->Framework->gg.g;
    x->Framework = y;
    y = nxt;
  }
}

/* FUNC(zx_di_RequestedService_PUT_Framework) */

void zx_di_RequestedService_PUT_Framework(struct zx_di_RequestedService_s* x, int n, struct zx_di_Framework_s* z)
{
  struct zx_di_Framework_s* y;
  if (!x || !z) return;
  y = x->Framework;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Framework = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_di_Framework_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_di_RequestedService_ADD_Framework) */

void zx_di_RequestedService_ADD_Framework(struct zx_di_RequestedService_s* x, int n, struct zx_di_Framework_s* z)
{
  struct zx_di_Framework_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->Framework->gg.g;
    x->Framework = z;
    return;
  case -1:
    y = x->Framework;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_di_Framework_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Framework; n > 1 && y; --n, y = (struct zx_di_Framework_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_di_RequestedService_DEL_Framework) */

void zx_di_RequestedService_DEL_Framework(struct zx_di_RequestedService_s* x, int n)
{
  struct zx_di_Framework_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Framework = (struct zx_di_Framework_s*)x->Framework->gg.g.n;
    return;
  case -1:
    y = (struct zx_di_Framework_s*)x->Framework;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_di_Framework_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Framework; n > 1 && y->gg.g.n; --n, y = (struct zx_di_Framework_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_di_RequestedService_NUM_Action) */

int zx_di_RequestedService_NUM_Action(struct zx_di_RequestedService_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Action; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_di_RequestedService_GET_Action) */

struct zx_elem_s* zx_di_RequestedService_GET_Action(struct zx_di_RequestedService_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->Action; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_di_RequestedService_POP_Action) */

struct zx_elem_s* zx_di_RequestedService_POP_Action(struct zx_di_RequestedService_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->Action;
  if (y)
    x->Action = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_di_RequestedService_PUSH_Action) */

void zx_di_RequestedService_PUSH_Action(struct zx_di_RequestedService_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->Action->g;
  x->Action = z;
}

/* FUNC(zx_di_RequestedService_REV_Action) */

void zx_di_RequestedService_REV_Action(struct zx_di_RequestedService_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->Action;
  if (!y) return;
  x->Action = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->Action->g;
    x->Action = y;
    y = nxt;
  }
}

/* FUNC(zx_di_RequestedService_PUT_Action) */

void zx_di_RequestedService_PUT_Action(struct zx_di_RequestedService_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->Action;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->Action = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_di_RequestedService_ADD_Action) */

void zx_di_RequestedService_ADD_Action(struct zx_di_RequestedService_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->Action->g;
    x->Action = z;
    return;
  case -1:
    y = x->Action;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->Action; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_di_RequestedService_DEL_Action) */

void zx_di_RequestedService_DEL_Action(struct zx_di_RequestedService_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Action = (struct zx_elem_s*)x->Action->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->Action;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->Action; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

#endif

/* FUNC(zx_di_RequestedService_GET_reqID) */
struct zx_str* zx_di_RequestedService_GET_reqID(struct zx_di_RequestedService_s* x) { return x->reqID; }
/* FUNC(zx_di_RequestedService_PUT_reqID) */
void zx_di_RequestedService_PUT_reqID(struct zx_di_RequestedService_s* x, struct zx_str* y) { x->reqID = y; }
/* FUNC(zx_di_RequestedService_GET_resultsType) */
struct zx_str* zx_di_RequestedService_GET_resultsType(struct zx_di_RequestedService_s* x) { return x->resultsType; }
/* FUNC(zx_di_RequestedService_PUT_resultsType) */
void zx_di_RequestedService_PUT_resultsType(struct zx_di_RequestedService_s* x, struct zx_str* y) { x->resultsType = y; }







#ifdef ZX_ENA_GETPUT

/* FUNC(zx_di_SecurityContext_NUM_SecurityMechID) */

int zx_di_SecurityContext_NUM_SecurityMechID(struct zx_di_SecurityContext_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->SecurityMechID; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_di_SecurityContext_GET_SecurityMechID) */

struct zx_elem_s* zx_di_SecurityContext_GET_SecurityMechID(struct zx_di_SecurityContext_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->SecurityMechID; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_di_SecurityContext_POP_SecurityMechID) */

struct zx_elem_s* zx_di_SecurityContext_POP_SecurityMechID(struct zx_di_SecurityContext_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->SecurityMechID;
  if (y)
    x->SecurityMechID = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_di_SecurityContext_PUSH_SecurityMechID) */

void zx_di_SecurityContext_PUSH_SecurityMechID(struct zx_di_SecurityContext_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->SecurityMechID->g;
  x->SecurityMechID = z;
}

/* FUNC(zx_di_SecurityContext_REV_SecurityMechID) */

void zx_di_SecurityContext_REV_SecurityMechID(struct zx_di_SecurityContext_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->SecurityMechID;
  if (!y) return;
  x->SecurityMechID = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->SecurityMechID->g;
    x->SecurityMechID = y;
    y = nxt;
  }
}

/* FUNC(zx_di_SecurityContext_PUT_SecurityMechID) */

void zx_di_SecurityContext_PUT_SecurityMechID(struct zx_di_SecurityContext_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->SecurityMechID;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->SecurityMechID = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_di_SecurityContext_ADD_SecurityMechID) */

void zx_di_SecurityContext_ADD_SecurityMechID(struct zx_di_SecurityContext_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->SecurityMechID->g;
    x->SecurityMechID = z;
    return;
  case -1:
    y = x->SecurityMechID;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->SecurityMechID; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_di_SecurityContext_DEL_SecurityMechID) */

void zx_di_SecurityContext_DEL_SecurityMechID(struct zx_di_SecurityContext_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->SecurityMechID = (struct zx_elem_s*)x->SecurityMechID->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->SecurityMechID;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->SecurityMechID; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_di_SecurityContext_NUM_Token) */

int zx_di_SecurityContext_NUM_Token(struct zx_di_SecurityContext_s* x)
{
  struct zx_sec_Token_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Token; y; ++n, y = (struct zx_sec_Token_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_di_SecurityContext_GET_Token) */

struct zx_sec_Token_s* zx_di_SecurityContext_GET_Token(struct zx_di_SecurityContext_s* x, int n)
{
  struct zx_sec_Token_s* y;
  if (!x) return 0;
  for (y = x->Token; n>=0 && y; --n, y = (struct zx_sec_Token_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_di_SecurityContext_POP_Token) */

struct zx_sec_Token_s* zx_di_SecurityContext_POP_Token(struct zx_di_SecurityContext_s* x)
{
  struct zx_sec_Token_s* y;
  if (!x) return 0;
  y = x->Token;
  if (y)
    x->Token = (struct zx_sec_Token_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_di_SecurityContext_PUSH_Token) */

void zx_di_SecurityContext_PUSH_Token(struct zx_di_SecurityContext_s* x, struct zx_sec_Token_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Token->gg.g;
  x->Token = z;
}

/* FUNC(zx_di_SecurityContext_REV_Token) */

void zx_di_SecurityContext_REV_Token(struct zx_di_SecurityContext_s* x)
{
  struct zx_sec_Token_s* nxt;
  struct zx_sec_Token_s* y;
  if (!x) return;
  y = x->Token;
  if (!y) return;
  x->Token = 0;
  while (y) {
    nxt = (struct zx_sec_Token_s*)y->gg.g.n;
    y->gg.g.n = &x->Token->gg.g;
    x->Token = y;
    y = nxt;
  }
}

/* FUNC(zx_di_SecurityContext_PUT_Token) */

void zx_di_SecurityContext_PUT_Token(struct zx_di_SecurityContext_s* x, int n, struct zx_sec_Token_s* z)
{
  struct zx_sec_Token_s* y;
  if (!x || !z) return;
  y = x->Token;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Token = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_sec_Token_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_di_SecurityContext_ADD_Token) */

void zx_di_SecurityContext_ADD_Token(struct zx_di_SecurityContext_s* x, int n, struct zx_sec_Token_s* z)
{
  struct zx_sec_Token_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->Token->gg.g;
    x->Token = z;
    return;
  case -1:
    y = x->Token;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_sec_Token_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Token; n > 1 && y; --n, y = (struct zx_sec_Token_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_di_SecurityContext_DEL_Token) */

void zx_di_SecurityContext_DEL_Token(struct zx_di_SecurityContext_s* x, int n)
{
  struct zx_sec_Token_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Token = (struct zx_sec_Token_s*)x->Token->gg.g.n;
    return;
  case -1:
    y = (struct zx_sec_Token_s*)x->Token;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_sec_Token_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Token; n > 1 && y->gg.g.n; --n, y = (struct zx_sec_Token_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif








#ifdef ZX_ENA_GETPUT

/* FUNC(zx_di_ServiceContext_NUM_ServiceType) */

int zx_di_ServiceContext_NUM_ServiceType(struct zx_di_ServiceContext_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->ServiceType; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_di_ServiceContext_GET_ServiceType) */

struct zx_elem_s* zx_di_ServiceContext_GET_ServiceType(struct zx_di_ServiceContext_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->ServiceType; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_di_ServiceContext_POP_ServiceType) */

struct zx_elem_s* zx_di_ServiceContext_POP_ServiceType(struct zx_di_ServiceContext_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->ServiceType;
  if (y)
    x->ServiceType = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_di_ServiceContext_PUSH_ServiceType) */

void zx_di_ServiceContext_PUSH_ServiceType(struct zx_di_ServiceContext_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->ServiceType->g;
  x->ServiceType = z;
}

/* FUNC(zx_di_ServiceContext_REV_ServiceType) */

void zx_di_ServiceContext_REV_ServiceType(struct zx_di_ServiceContext_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->ServiceType;
  if (!y) return;
  x->ServiceType = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->ServiceType->g;
    x->ServiceType = y;
    y = nxt;
  }
}

/* FUNC(zx_di_ServiceContext_PUT_ServiceType) */

void zx_di_ServiceContext_PUT_ServiceType(struct zx_di_ServiceContext_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->ServiceType;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->ServiceType = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_di_ServiceContext_ADD_ServiceType) */

void zx_di_ServiceContext_ADD_ServiceType(struct zx_di_ServiceContext_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->ServiceType->g;
    x->ServiceType = z;
    return;
  case -1:
    y = x->ServiceType;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->ServiceType; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_di_ServiceContext_DEL_ServiceType) */

void zx_di_ServiceContext_DEL_ServiceType(struct zx_di_ServiceContext_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->ServiceType = (struct zx_elem_s*)x->ServiceType->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->ServiceType;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->ServiceType; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_di_ServiceContext_NUM_Options) */

int zx_di_ServiceContext_NUM_Options(struct zx_di_ServiceContext_s* x)
{
  struct zx_di_Options_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Options; y; ++n, y = (struct zx_di_Options_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_di_ServiceContext_GET_Options) */

struct zx_di_Options_s* zx_di_ServiceContext_GET_Options(struct zx_di_ServiceContext_s* x, int n)
{
  struct zx_di_Options_s* y;
  if (!x) return 0;
  for (y = x->Options; n>=0 && y; --n, y = (struct zx_di_Options_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_di_ServiceContext_POP_Options) */

struct zx_di_Options_s* zx_di_ServiceContext_POP_Options(struct zx_di_ServiceContext_s* x)
{
  struct zx_di_Options_s* y;
  if (!x) return 0;
  y = x->Options;
  if (y)
    x->Options = (struct zx_di_Options_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_di_ServiceContext_PUSH_Options) */

void zx_di_ServiceContext_PUSH_Options(struct zx_di_ServiceContext_s* x, struct zx_di_Options_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Options->gg.g;
  x->Options = z;
}

/* FUNC(zx_di_ServiceContext_REV_Options) */

void zx_di_ServiceContext_REV_Options(struct zx_di_ServiceContext_s* x)
{
  struct zx_di_Options_s* nxt;
  struct zx_di_Options_s* y;
  if (!x) return;
  y = x->Options;
  if (!y) return;
  x->Options = 0;
  while (y) {
    nxt = (struct zx_di_Options_s*)y->gg.g.n;
    y->gg.g.n = &x->Options->gg.g;
    x->Options = y;
    y = nxt;
  }
}

/* FUNC(zx_di_ServiceContext_PUT_Options) */

void zx_di_ServiceContext_PUT_Options(struct zx_di_ServiceContext_s* x, int n, struct zx_di_Options_s* z)
{
  struct zx_di_Options_s* y;
  if (!x || !z) return;
  y = x->Options;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Options = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_di_Options_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_di_ServiceContext_ADD_Options) */

void zx_di_ServiceContext_ADD_Options(struct zx_di_ServiceContext_s* x, int n, struct zx_di_Options_s* z)
{
  struct zx_di_Options_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->Options->gg.g;
    x->Options = z;
    return;
  case -1:
    y = x->Options;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_di_Options_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Options; n > 1 && y; --n, y = (struct zx_di_Options_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_di_ServiceContext_DEL_Options) */

void zx_di_ServiceContext_DEL_Options(struct zx_di_ServiceContext_s* x, int n)
{
  struct zx_di_Options_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Options = (struct zx_di_Options_s*)x->Options->gg.g.n;
    return;
  case -1:
    y = (struct zx_di_Options_s*)x->Options;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_di_Options_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Options; n > 1 && y->gg.g.n; --n, y = (struct zx_di_Options_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_di_ServiceContext_NUM_EndpointContext) */

int zx_di_ServiceContext_NUM_EndpointContext(struct zx_di_ServiceContext_s* x)
{
  struct zx_di_EndpointContext_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->EndpointContext; y; ++n, y = (struct zx_di_EndpointContext_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_di_ServiceContext_GET_EndpointContext) */

struct zx_di_EndpointContext_s* zx_di_ServiceContext_GET_EndpointContext(struct zx_di_ServiceContext_s* x, int n)
{
  struct zx_di_EndpointContext_s* y;
  if (!x) return 0;
  for (y = x->EndpointContext; n>=0 && y; --n, y = (struct zx_di_EndpointContext_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_di_ServiceContext_POP_EndpointContext) */

struct zx_di_EndpointContext_s* zx_di_ServiceContext_POP_EndpointContext(struct zx_di_ServiceContext_s* x)
{
  struct zx_di_EndpointContext_s* y;
  if (!x) return 0;
  y = x->EndpointContext;
  if (y)
    x->EndpointContext = (struct zx_di_EndpointContext_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_di_ServiceContext_PUSH_EndpointContext) */

void zx_di_ServiceContext_PUSH_EndpointContext(struct zx_di_ServiceContext_s* x, struct zx_di_EndpointContext_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->EndpointContext->gg.g;
  x->EndpointContext = z;
}

/* FUNC(zx_di_ServiceContext_REV_EndpointContext) */

void zx_di_ServiceContext_REV_EndpointContext(struct zx_di_ServiceContext_s* x)
{
  struct zx_di_EndpointContext_s* nxt;
  struct zx_di_EndpointContext_s* y;
  if (!x) return;
  y = x->EndpointContext;
  if (!y) return;
  x->EndpointContext = 0;
  while (y) {
    nxt = (struct zx_di_EndpointContext_s*)y->gg.g.n;
    y->gg.g.n = &x->EndpointContext->gg.g;
    x->EndpointContext = y;
    y = nxt;
  }
}

/* FUNC(zx_di_ServiceContext_PUT_EndpointContext) */

void zx_di_ServiceContext_PUT_EndpointContext(struct zx_di_ServiceContext_s* x, int n, struct zx_di_EndpointContext_s* z)
{
  struct zx_di_EndpointContext_s* y;
  if (!x || !z) return;
  y = x->EndpointContext;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->EndpointContext = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_di_EndpointContext_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_di_ServiceContext_ADD_EndpointContext) */

void zx_di_ServiceContext_ADD_EndpointContext(struct zx_di_ServiceContext_s* x, int n, struct zx_di_EndpointContext_s* z)
{
  struct zx_di_EndpointContext_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->EndpointContext->gg.g;
    x->EndpointContext = z;
    return;
  case -1:
    y = x->EndpointContext;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_di_EndpointContext_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->EndpointContext; n > 1 && y; --n, y = (struct zx_di_EndpointContext_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_di_ServiceContext_DEL_EndpointContext) */

void zx_di_ServiceContext_DEL_EndpointContext(struct zx_di_ServiceContext_s* x, int n)
{
  struct zx_di_EndpointContext_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->EndpointContext = (struct zx_di_EndpointContext_s*)x->EndpointContext->gg.g.n;
    return;
  case -1:
    y = (struct zx_di_EndpointContext_s*)x->EndpointContext;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_di_EndpointContext_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->EndpointContext; n > 1 && y->gg.g.n; --n, y = (struct zx_di_EndpointContext_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif








#ifdef ZX_ENA_GETPUT

/* FUNC(zx_di_SvcMD_NUM_Abstract) */

int zx_di_SvcMD_NUM_Abstract(struct zx_di_SvcMD_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Abstract; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_di_SvcMD_GET_Abstract) */

struct zx_elem_s* zx_di_SvcMD_GET_Abstract(struct zx_di_SvcMD_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->Abstract; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_di_SvcMD_POP_Abstract) */

struct zx_elem_s* zx_di_SvcMD_POP_Abstract(struct zx_di_SvcMD_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->Abstract;
  if (y)
    x->Abstract = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_di_SvcMD_PUSH_Abstract) */

void zx_di_SvcMD_PUSH_Abstract(struct zx_di_SvcMD_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->Abstract->g;
  x->Abstract = z;
}

/* FUNC(zx_di_SvcMD_REV_Abstract) */

void zx_di_SvcMD_REV_Abstract(struct zx_di_SvcMD_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->Abstract;
  if (!y) return;
  x->Abstract = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->Abstract->g;
    x->Abstract = y;
    y = nxt;
  }
}

/* FUNC(zx_di_SvcMD_PUT_Abstract) */

void zx_di_SvcMD_PUT_Abstract(struct zx_di_SvcMD_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->Abstract;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->Abstract = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_di_SvcMD_ADD_Abstract) */

void zx_di_SvcMD_ADD_Abstract(struct zx_di_SvcMD_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->Abstract->g;
    x->Abstract = z;
    return;
  case -1:
    y = x->Abstract;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->Abstract; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_di_SvcMD_DEL_Abstract) */

void zx_di_SvcMD_DEL_Abstract(struct zx_di_SvcMD_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Abstract = (struct zx_elem_s*)x->Abstract->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->Abstract;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->Abstract; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_di_SvcMD_NUM_ProviderID) */

int zx_di_SvcMD_NUM_ProviderID(struct zx_di_SvcMD_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->ProviderID; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_di_SvcMD_GET_ProviderID) */

struct zx_elem_s* zx_di_SvcMD_GET_ProviderID(struct zx_di_SvcMD_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->ProviderID; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_di_SvcMD_POP_ProviderID) */

struct zx_elem_s* zx_di_SvcMD_POP_ProviderID(struct zx_di_SvcMD_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->ProviderID;
  if (y)
    x->ProviderID = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_di_SvcMD_PUSH_ProviderID) */

void zx_di_SvcMD_PUSH_ProviderID(struct zx_di_SvcMD_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->ProviderID->g;
  x->ProviderID = z;
}

/* FUNC(zx_di_SvcMD_REV_ProviderID) */

void zx_di_SvcMD_REV_ProviderID(struct zx_di_SvcMD_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->ProviderID;
  if (!y) return;
  x->ProviderID = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->ProviderID->g;
    x->ProviderID = y;
    y = nxt;
  }
}

/* FUNC(zx_di_SvcMD_PUT_ProviderID) */

void zx_di_SvcMD_PUT_ProviderID(struct zx_di_SvcMD_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->ProviderID;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->ProviderID = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_di_SvcMD_ADD_ProviderID) */

void zx_di_SvcMD_ADD_ProviderID(struct zx_di_SvcMD_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->ProviderID->g;
    x->ProviderID = z;
    return;
  case -1:
    y = x->ProviderID;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->ProviderID; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_di_SvcMD_DEL_ProviderID) */

void zx_di_SvcMD_DEL_ProviderID(struct zx_di_SvcMD_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->ProviderID = (struct zx_elem_s*)x->ProviderID->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->ProviderID;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->ProviderID; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_di_SvcMD_NUM_ServiceContext) */

int zx_di_SvcMD_NUM_ServiceContext(struct zx_di_SvcMD_s* x)
{
  struct zx_di_ServiceContext_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->ServiceContext; y; ++n, y = (struct zx_di_ServiceContext_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_di_SvcMD_GET_ServiceContext) */

struct zx_di_ServiceContext_s* zx_di_SvcMD_GET_ServiceContext(struct zx_di_SvcMD_s* x, int n)
{
  struct zx_di_ServiceContext_s* y;
  if (!x) return 0;
  for (y = x->ServiceContext; n>=0 && y; --n, y = (struct zx_di_ServiceContext_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_di_SvcMD_POP_ServiceContext) */

struct zx_di_ServiceContext_s* zx_di_SvcMD_POP_ServiceContext(struct zx_di_SvcMD_s* x)
{
  struct zx_di_ServiceContext_s* y;
  if (!x) return 0;
  y = x->ServiceContext;
  if (y)
    x->ServiceContext = (struct zx_di_ServiceContext_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_di_SvcMD_PUSH_ServiceContext) */

void zx_di_SvcMD_PUSH_ServiceContext(struct zx_di_SvcMD_s* x, struct zx_di_ServiceContext_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->ServiceContext->gg.g;
  x->ServiceContext = z;
}

/* FUNC(zx_di_SvcMD_REV_ServiceContext) */

void zx_di_SvcMD_REV_ServiceContext(struct zx_di_SvcMD_s* x)
{
  struct zx_di_ServiceContext_s* nxt;
  struct zx_di_ServiceContext_s* y;
  if (!x) return;
  y = x->ServiceContext;
  if (!y) return;
  x->ServiceContext = 0;
  while (y) {
    nxt = (struct zx_di_ServiceContext_s*)y->gg.g.n;
    y->gg.g.n = &x->ServiceContext->gg.g;
    x->ServiceContext = y;
    y = nxt;
  }
}

/* FUNC(zx_di_SvcMD_PUT_ServiceContext) */

void zx_di_SvcMD_PUT_ServiceContext(struct zx_di_SvcMD_s* x, int n, struct zx_di_ServiceContext_s* z)
{
  struct zx_di_ServiceContext_s* y;
  if (!x || !z) return;
  y = x->ServiceContext;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->ServiceContext = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_di_ServiceContext_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_di_SvcMD_ADD_ServiceContext) */

void zx_di_SvcMD_ADD_ServiceContext(struct zx_di_SvcMD_s* x, int n, struct zx_di_ServiceContext_s* z)
{
  struct zx_di_ServiceContext_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->ServiceContext->gg.g;
    x->ServiceContext = z;
    return;
  case -1:
    y = x->ServiceContext;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_di_ServiceContext_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->ServiceContext; n > 1 && y; --n, y = (struct zx_di_ServiceContext_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_di_SvcMD_DEL_ServiceContext) */

void zx_di_SvcMD_DEL_ServiceContext(struct zx_di_SvcMD_s* x, int n)
{
  struct zx_di_ServiceContext_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->ServiceContext = (struct zx_di_ServiceContext_s*)x->ServiceContext->gg.g.n;
    return;
  case -1:
    y = (struct zx_di_ServiceContext_s*)x->ServiceContext;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_di_ServiceContext_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->ServiceContext; n > 1 && y->gg.g.n; --n, y = (struct zx_di_ServiceContext_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif

/* FUNC(zx_di_SvcMD_GET_svcMDID) */
struct zx_str* zx_di_SvcMD_GET_svcMDID(struct zx_di_SvcMD_s* x) { return x->svcMDID; }
/* FUNC(zx_di_SvcMD_PUT_svcMDID) */
void zx_di_SvcMD_PUT_svcMDID(struct zx_di_SvcMD_s* x, struct zx_str* y) { x->svcMDID = y; }







#ifdef ZX_ENA_GETPUT

/* FUNC(zx_di_SvcMDAssociationAdd_NUM_SvcMDID) */

int zx_di_SvcMDAssociationAdd_NUM_SvcMDID(struct zx_di_SvcMDAssociationAdd_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->SvcMDID; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_di_SvcMDAssociationAdd_GET_SvcMDID) */

struct zx_elem_s* zx_di_SvcMDAssociationAdd_GET_SvcMDID(struct zx_di_SvcMDAssociationAdd_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->SvcMDID; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_di_SvcMDAssociationAdd_POP_SvcMDID) */

struct zx_elem_s* zx_di_SvcMDAssociationAdd_POP_SvcMDID(struct zx_di_SvcMDAssociationAdd_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->SvcMDID;
  if (y)
    x->SvcMDID = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_di_SvcMDAssociationAdd_PUSH_SvcMDID) */

void zx_di_SvcMDAssociationAdd_PUSH_SvcMDID(struct zx_di_SvcMDAssociationAdd_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->SvcMDID->g;
  x->SvcMDID = z;
}

/* FUNC(zx_di_SvcMDAssociationAdd_REV_SvcMDID) */

void zx_di_SvcMDAssociationAdd_REV_SvcMDID(struct zx_di_SvcMDAssociationAdd_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->SvcMDID;
  if (!y) return;
  x->SvcMDID = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->SvcMDID->g;
    x->SvcMDID = y;
    y = nxt;
  }
}

/* FUNC(zx_di_SvcMDAssociationAdd_PUT_SvcMDID) */

void zx_di_SvcMDAssociationAdd_PUT_SvcMDID(struct zx_di_SvcMDAssociationAdd_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->SvcMDID;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->SvcMDID = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_di_SvcMDAssociationAdd_ADD_SvcMDID) */

void zx_di_SvcMDAssociationAdd_ADD_SvcMDID(struct zx_di_SvcMDAssociationAdd_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->SvcMDID->g;
    x->SvcMDID = z;
    return;
  case -1:
    y = x->SvcMDID;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->SvcMDID; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_di_SvcMDAssociationAdd_DEL_SvcMDID) */

void zx_di_SvcMDAssociationAdd_DEL_SvcMDID(struct zx_di_SvcMDAssociationAdd_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->SvcMDID = (struct zx_elem_s*)x->SvcMDID->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->SvcMDID;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->SvcMDID; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

#endif








#ifdef ZX_ENA_GETPUT

/* FUNC(zx_di_SvcMDAssociationAddResponse_NUM_Status) */

int zx_di_SvcMDAssociationAddResponse_NUM_Status(struct zx_di_SvcMDAssociationAddResponse_s* x)
{
  struct zx_lu_Status_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Status; y; ++n, y = (struct zx_lu_Status_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_di_SvcMDAssociationAddResponse_GET_Status) */

struct zx_lu_Status_s* zx_di_SvcMDAssociationAddResponse_GET_Status(struct zx_di_SvcMDAssociationAddResponse_s* x, int n)
{
  struct zx_lu_Status_s* y;
  if (!x) return 0;
  for (y = x->Status; n>=0 && y; --n, y = (struct zx_lu_Status_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_di_SvcMDAssociationAddResponse_POP_Status) */

struct zx_lu_Status_s* zx_di_SvcMDAssociationAddResponse_POP_Status(struct zx_di_SvcMDAssociationAddResponse_s* x)
{
  struct zx_lu_Status_s* y;
  if (!x) return 0;
  y = x->Status;
  if (y)
    x->Status = (struct zx_lu_Status_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_di_SvcMDAssociationAddResponse_PUSH_Status) */

void zx_di_SvcMDAssociationAddResponse_PUSH_Status(struct zx_di_SvcMDAssociationAddResponse_s* x, struct zx_lu_Status_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Status->gg.g;
  x->Status = z;
}

/* FUNC(zx_di_SvcMDAssociationAddResponse_REV_Status) */

void zx_di_SvcMDAssociationAddResponse_REV_Status(struct zx_di_SvcMDAssociationAddResponse_s* x)
{
  struct zx_lu_Status_s* nxt;
  struct zx_lu_Status_s* y;
  if (!x) return;
  y = x->Status;
  if (!y) return;
  x->Status = 0;
  while (y) {
    nxt = (struct zx_lu_Status_s*)y->gg.g.n;
    y->gg.g.n = &x->Status->gg.g;
    x->Status = y;
    y = nxt;
  }
}

/* FUNC(zx_di_SvcMDAssociationAddResponse_PUT_Status) */

void zx_di_SvcMDAssociationAddResponse_PUT_Status(struct zx_di_SvcMDAssociationAddResponse_s* x, int n, struct zx_lu_Status_s* z)
{
  struct zx_lu_Status_s* y;
  if (!x || !z) return;
  y = x->Status;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Status = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_lu_Status_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_di_SvcMDAssociationAddResponse_ADD_Status) */

void zx_di_SvcMDAssociationAddResponse_ADD_Status(struct zx_di_SvcMDAssociationAddResponse_s* x, int n, struct zx_lu_Status_s* z)
{
  struct zx_lu_Status_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->Status->gg.g;
    x->Status = z;
    return;
  case -1:
    y = x->Status;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_lu_Status_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Status; n > 1 && y; --n, y = (struct zx_lu_Status_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_di_SvcMDAssociationAddResponse_DEL_Status) */

void zx_di_SvcMDAssociationAddResponse_DEL_Status(struct zx_di_SvcMDAssociationAddResponse_s* x, int n)
{
  struct zx_lu_Status_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Status = (struct zx_lu_Status_s*)x->Status->gg.g.n;
    return;
  case -1:
    y = (struct zx_lu_Status_s*)x->Status;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_lu_Status_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Status; n > 1 && y->gg.g.n; --n, y = (struct zx_lu_Status_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif








#ifdef ZX_ENA_GETPUT

/* FUNC(zx_di_SvcMDAssociationDelete_NUM_SvcMDID) */

int zx_di_SvcMDAssociationDelete_NUM_SvcMDID(struct zx_di_SvcMDAssociationDelete_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->SvcMDID; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_di_SvcMDAssociationDelete_GET_SvcMDID) */

struct zx_elem_s* zx_di_SvcMDAssociationDelete_GET_SvcMDID(struct zx_di_SvcMDAssociationDelete_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->SvcMDID; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_di_SvcMDAssociationDelete_POP_SvcMDID) */

struct zx_elem_s* zx_di_SvcMDAssociationDelete_POP_SvcMDID(struct zx_di_SvcMDAssociationDelete_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->SvcMDID;
  if (y)
    x->SvcMDID = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_di_SvcMDAssociationDelete_PUSH_SvcMDID) */

void zx_di_SvcMDAssociationDelete_PUSH_SvcMDID(struct zx_di_SvcMDAssociationDelete_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->SvcMDID->g;
  x->SvcMDID = z;
}

/* FUNC(zx_di_SvcMDAssociationDelete_REV_SvcMDID) */

void zx_di_SvcMDAssociationDelete_REV_SvcMDID(struct zx_di_SvcMDAssociationDelete_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->SvcMDID;
  if (!y) return;
  x->SvcMDID = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->SvcMDID->g;
    x->SvcMDID = y;
    y = nxt;
  }
}

/* FUNC(zx_di_SvcMDAssociationDelete_PUT_SvcMDID) */

void zx_di_SvcMDAssociationDelete_PUT_SvcMDID(struct zx_di_SvcMDAssociationDelete_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->SvcMDID;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->SvcMDID = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_di_SvcMDAssociationDelete_ADD_SvcMDID) */

void zx_di_SvcMDAssociationDelete_ADD_SvcMDID(struct zx_di_SvcMDAssociationDelete_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->SvcMDID->g;
    x->SvcMDID = z;
    return;
  case -1:
    y = x->SvcMDID;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->SvcMDID; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_di_SvcMDAssociationDelete_DEL_SvcMDID) */

void zx_di_SvcMDAssociationDelete_DEL_SvcMDID(struct zx_di_SvcMDAssociationDelete_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->SvcMDID = (struct zx_elem_s*)x->SvcMDID->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->SvcMDID;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->SvcMDID; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

#endif








#ifdef ZX_ENA_GETPUT

/* FUNC(zx_di_SvcMDAssociationDeleteResponse_NUM_Status) */

int zx_di_SvcMDAssociationDeleteResponse_NUM_Status(struct zx_di_SvcMDAssociationDeleteResponse_s* x)
{
  struct zx_lu_Status_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Status; y; ++n, y = (struct zx_lu_Status_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_di_SvcMDAssociationDeleteResponse_GET_Status) */

struct zx_lu_Status_s* zx_di_SvcMDAssociationDeleteResponse_GET_Status(struct zx_di_SvcMDAssociationDeleteResponse_s* x, int n)
{
  struct zx_lu_Status_s* y;
  if (!x) return 0;
  for (y = x->Status; n>=0 && y; --n, y = (struct zx_lu_Status_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_di_SvcMDAssociationDeleteResponse_POP_Status) */

struct zx_lu_Status_s* zx_di_SvcMDAssociationDeleteResponse_POP_Status(struct zx_di_SvcMDAssociationDeleteResponse_s* x)
{
  struct zx_lu_Status_s* y;
  if (!x) return 0;
  y = x->Status;
  if (y)
    x->Status = (struct zx_lu_Status_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_di_SvcMDAssociationDeleteResponse_PUSH_Status) */

void zx_di_SvcMDAssociationDeleteResponse_PUSH_Status(struct zx_di_SvcMDAssociationDeleteResponse_s* x, struct zx_lu_Status_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Status->gg.g;
  x->Status = z;
}

/* FUNC(zx_di_SvcMDAssociationDeleteResponse_REV_Status) */

void zx_di_SvcMDAssociationDeleteResponse_REV_Status(struct zx_di_SvcMDAssociationDeleteResponse_s* x)
{
  struct zx_lu_Status_s* nxt;
  struct zx_lu_Status_s* y;
  if (!x) return;
  y = x->Status;
  if (!y) return;
  x->Status = 0;
  while (y) {
    nxt = (struct zx_lu_Status_s*)y->gg.g.n;
    y->gg.g.n = &x->Status->gg.g;
    x->Status = y;
    y = nxt;
  }
}

/* FUNC(zx_di_SvcMDAssociationDeleteResponse_PUT_Status) */

void zx_di_SvcMDAssociationDeleteResponse_PUT_Status(struct zx_di_SvcMDAssociationDeleteResponse_s* x, int n, struct zx_lu_Status_s* z)
{
  struct zx_lu_Status_s* y;
  if (!x || !z) return;
  y = x->Status;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Status = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_lu_Status_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_di_SvcMDAssociationDeleteResponse_ADD_Status) */

void zx_di_SvcMDAssociationDeleteResponse_ADD_Status(struct zx_di_SvcMDAssociationDeleteResponse_s* x, int n, struct zx_lu_Status_s* z)
{
  struct zx_lu_Status_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->Status->gg.g;
    x->Status = z;
    return;
  case -1:
    y = x->Status;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_lu_Status_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Status; n > 1 && y; --n, y = (struct zx_lu_Status_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_di_SvcMDAssociationDeleteResponse_DEL_Status) */

void zx_di_SvcMDAssociationDeleteResponse_DEL_Status(struct zx_di_SvcMDAssociationDeleteResponse_s* x, int n)
{
  struct zx_lu_Status_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Status = (struct zx_lu_Status_s*)x->Status->gg.g.n;
    return;
  case -1:
    y = (struct zx_lu_Status_s*)x->Status;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_lu_Status_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Status; n > 1 && y->gg.g.n; --n, y = (struct zx_lu_Status_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif








#ifdef ZX_ENA_GETPUT

/* FUNC(zx_di_SvcMDAssociationQuery_NUM_SvcMDID) */

int zx_di_SvcMDAssociationQuery_NUM_SvcMDID(struct zx_di_SvcMDAssociationQuery_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->SvcMDID; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_di_SvcMDAssociationQuery_GET_SvcMDID) */

struct zx_elem_s* zx_di_SvcMDAssociationQuery_GET_SvcMDID(struct zx_di_SvcMDAssociationQuery_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->SvcMDID; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_di_SvcMDAssociationQuery_POP_SvcMDID) */

struct zx_elem_s* zx_di_SvcMDAssociationQuery_POP_SvcMDID(struct zx_di_SvcMDAssociationQuery_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->SvcMDID;
  if (y)
    x->SvcMDID = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_di_SvcMDAssociationQuery_PUSH_SvcMDID) */

void zx_di_SvcMDAssociationQuery_PUSH_SvcMDID(struct zx_di_SvcMDAssociationQuery_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->SvcMDID->g;
  x->SvcMDID = z;
}

/* FUNC(zx_di_SvcMDAssociationQuery_REV_SvcMDID) */

void zx_di_SvcMDAssociationQuery_REV_SvcMDID(struct zx_di_SvcMDAssociationQuery_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->SvcMDID;
  if (!y) return;
  x->SvcMDID = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->SvcMDID->g;
    x->SvcMDID = y;
    y = nxt;
  }
}

/* FUNC(zx_di_SvcMDAssociationQuery_PUT_SvcMDID) */

void zx_di_SvcMDAssociationQuery_PUT_SvcMDID(struct zx_di_SvcMDAssociationQuery_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->SvcMDID;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->SvcMDID = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_di_SvcMDAssociationQuery_ADD_SvcMDID) */

void zx_di_SvcMDAssociationQuery_ADD_SvcMDID(struct zx_di_SvcMDAssociationQuery_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->SvcMDID->g;
    x->SvcMDID = z;
    return;
  case -1:
    y = x->SvcMDID;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->SvcMDID; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_di_SvcMDAssociationQuery_DEL_SvcMDID) */

void zx_di_SvcMDAssociationQuery_DEL_SvcMDID(struct zx_di_SvcMDAssociationQuery_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->SvcMDID = (struct zx_elem_s*)x->SvcMDID->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->SvcMDID;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->SvcMDID; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

#endif








#ifdef ZX_ENA_GETPUT

/* FUNC(zx_di_SvcMDAssociationQueryResponse_NUM_Status) */

int zx_di_SvcMDAssociationQueryResponse_NUM_Status(struct zx_di_SvcMDAssociationQueryResponse_s* x)
{
  struct zx_lu_Status_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Status; y; ++n, y = (struct zx_lu_Status_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_di_SvcMDAssociationQueryResponse_GET_Status) */

struct zx_lu_Status_s* zx_di_SvcMDAssociationQueryResponse_GET_Status(struct zx_di_SvcMDAssociationQueryResponse_s* x, int n)
{
  struct zx_lu_Status_s* y;
  if (!x) return 0;
  for (y = x->Status; n>=0 && y; --n, y = (struct zx_lu_Status_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_di_SvcMDAssociationQueryResponse_POP_Status) */

struct zx_lu_Status_s* zx_di_SvcMDAssociationQueryResponse_POP_Status(struct zx_di_SvcMDAssociationQueryResponse_s* x)
{
  struct zx_lu_Status_s* y;
  if (!x) return 0;
  y = x->Status;
  if (y)
    x->Status = (struct zx_lu_Status_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_di_SvcMDAssociationQueryResponse_PUSH_Status) */

void zx_di_SvcMDAssociationQueryResponse_PUSH_Status(struct zx_di_SvcMDAssociationQueryResponse_s* x, struct zx_lu_Status_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Status->gg.g;
  x->Status = z;
}

/* FUNC(zx_di_SvcMDAssociationQueryResponse_REV_Status) */

void zx_di_SvcMDAssociationQueryResponse_REV_Status(struct zx_di_SvcMDAssociationQueryResponse_s* x)
{
  struct zx_lu_Status_s* nxt;
  struct zx_lu_Status_s* y;
  if (!x) return;
  y = x->Status;
  if (!y) return;
  x->Status = 0;
  while (y) {
    nxt = (struct zx_lu_Status_s*)y->gg.g.n;
    y->gg.g.n = &x->Status->gg.g;
    x->Status = y;
    y = nxt;
  }
}

/* FUNC(zx_di_SvcMDAssociationQueryResponse_PUT_Status) */

void zx_di_SvcMDAssociationQueryResponse_PUT_Status(struct zx_di_SvcMDAssociationQueryResponse_s* x, int n, struct zx_lu_Status_s* z)
{
  struct zx_lu_Status_s* y;
  if (!x || !z) return;
  y = x->Status;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Status = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_lu_Status_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_di_SvcMDAssociationQueryResponse_ADD_Status) */

void zx_di_SvcMDAssociationQueryResponse_ADD_Status(struct zx_di_SvcMDAssociationQueryResponse_s* x, int n, struct zx_lu_Status_s* z)
{
  struct zx_lu_Status_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->Status->gg.g;
    x->Status = z;
    return;
  case -1:
    y = x->Status;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_lu_Status_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Status; n > 1 && y; --n, y = (struct zx_lu_Status_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_di_SvcMDAssociationQueryResponse_DEL_Status) */

void zx_di_SvcMDAssociationQueryResponse_DEL_Status(struct zx_di_SvcMDAssociationQueryResponse_s* x, int n)
{
  struct zx_lu_Status_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Status = (struct zx_lu_Status_s*)x->Status->gg.g.n;
    return;
  case -1:
    y = (struct zx_lu_Status_s*)x->Status;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_lu_Status_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Status; n > 1 && y->gg.g.n; --n, y = (struct zx_lu_Status_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_di_SvcMDAssociationQueryResponse_NUM_SvcMDID) */

int zx_di_SvcMDAssociationQueryResponse_NUM_SvcMDID(struct zx_di_SvcMDAssociationQueryResponse_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->SvcMDID; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_di_SvcMDAssociationQueryResponse_GET_SvcMDID) */

struct zx_elem_s* zx_di_SvcMDAssociationQueryResponse_GET_SvcMDID(struct zx_di_SvcMDAssociationQueryResponse_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->SvcMDID; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_di_SvcMDAssociationQueryResponse_POP_SvcMDID) */

struct zx_elem_s* zx_di_SvcMDAssociationQueryResponse_POP_SvcMDID(struct zx_di_SvcMDAssociationQueryResponse_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->SvcMDID;
  if (y)
    x->SvcMDID = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_di_SvcMDAssociationQueryResponse_PUSH_SvcMDID) */

void zx_di_SvcMDAssociationQueryResponse_PUSH_SvcMDID(struct zx_di_SvcMDAssociationQueryResponse_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->SvcMDID->g;
  x->SvcMDID = z;
}

/* FUNC(zx_di_SvcMDAssociationQueryResponse_REV_SvcMDID) */

void zx_di_SvcMDAssociationQueryResponse_REV_SvcMDID(struct zx_di_SvcMDAssociationQueryResponse_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->SvcMDID;
  if (!y) return;
  x->SvcMDID = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->SvcMDID->g;
    x->SvcMDID = y;
    y = nxt;
  }
}

/* FUNC(zx_di_SvcMDAssociationQueryResponse_PUT_SvcMDID) */

void zx_di_SvcMDAssociationQueryResponse_PUT_SvcMDID(struct zx_di_SvcMDAssociationQueryResponse_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->SvcMDID;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->SvcMDID = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_di_SvcMDAssociationQueryResponse_ADD_SvcMDID) */

void zx_di_SvcMDAssociationQueryResponse_ADD_SvcMDID(struct zx_di_SvcMDAssociationQueryResponse_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->SvcMDID->g;
    x->SvcMDID = z;
    return;
  case -1:
    y = x->SvcMDID;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->SvcMDID; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_di_SvcMDAssociationQueryResponse_DEL_SvcMDID) */

void zx_di_SvcMDAssociationQueryResponse_DEL_SvcMDID(struct zx_di_SvcMDAssociationQueryResponse_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->SvcMDID = (struct zx_elem_s*)x->SvcMDID->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->SvcMDID;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->SvcMDID; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

#endif








#ifdef ZX_ENA_GETPUT

/* FUNC(zx_di_SvcMDDelete_NUM_SvcMDID) */

int zx_di_SvcMDDelete_NUM_SvcMDID(struct zx_di_SvcMDDelete_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->SvcMDID; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_di_SvcMDDelete_GET_SvcMDID) */

struct zx_elem_s* zx_di_SvcMDDelete_GET_SvcMDID(struct zx_di_SvcMDDelete_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->SvcMDID; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_di_SvcMDDelete_POP_SvcMDID) */

struct zx_elem_s* zx_di_SvcMDDelete_POP_SvcMDID(struct zx_di_SvcMDDelete_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->SvcMDID;
  if (y)
    x->SvcMDID = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_di_SvcMDDelete_PUSH_SvcMDID) */

void zx_di_SvcMDDelete_PUSH_SvcMDID(struct zx_di_SvcMDDelete_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->SvcMDID->g;
  x->SvcMDID = z;
}

/* FUNC(zx_di_SvcMDDelete_REV_SvcMDID) */

void zx_di_SvcMDDelete_REV_SvcMDID(struct zx_di_SvcMDDelete_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->SvcMDID;
  if (!y) return;
  x->SvcMDID = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->SvcMDID->g;
    x->SvcMDID = y;
    y = nxt;
  }
}

/* FUNC(zx_di_SvcMDDelete_PUT_SvcMDID) */

void zx_di_SvcMDDelete_PUT_SvcMDID(struct zx_di_SvcMDDelete_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->SvcMDID;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->SvcMDID = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_di_SvcMDDelete_ADD_SvcMDID) */

void zx_di_SvcMDDelete_ADD_SvcMDID(struct zx_di_SvcMDDelete_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->SvcMDID->g;
    x->SvcMDID = z;
    return;
  case -1:
    y = x->SvcMDID;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->SvcMDID; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_di_SvcMDDelete_DEL_SvcMDID) */

void zx_di_SvcMDDelete_DEL_SvcMDID(struct zx_di_SvcMDDelete_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->SvcMDID = (struct zx_elem_s*)x->SvcMDID->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->SvcMDID;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->SvcMDID; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

#endif








#ifdef ZX_ENA_GETPUT

/* FUNC(zx_di_SvcMDDeleteResponse_NUM_Status) */

int zx_di_SvcMDDeleteResponse_NUM_Status(struct zx_di_SvcMDDeleteResponse_s* x)
{
  struct zx_lu_Status_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Status; y; ++n, y = (struct zx_lu_Status_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_di_SvcMDDeleteResponse_GET_Status) */

struct zx_lu_Status_s* zx_di_SvcMDDeleteResponse_GET_Status(struct zx_di_SvcMDDeleteResponse_s* x, int n)
{
  struct zx_lu_Status_s* y;
  if (!x) return 0;
  for (y = x->Status; n>=0 && y; --n, y = (struct zx_lu_Status_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_di_SvcMDDeleteResponse_POP_Status) */

struct zx_lu_Status_s* zx_di_SvcMDDeleteResponse_POP_Status(struct zx_di_SvcMDDeleteResponse_s* x)
{
  struct zx_lu_Status_s* y;
  if (!x) return 0;
  y = x->Status;
  if (y)
    x->Status = (struct zx_lu_Status_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_di_SvcMDDeleteResponse_PUSH_Status) */

void zx_di_SvcMDDeleteResponse_PUSH_Status(struct zx_di_SvcMDDeleteResponse_s* x, struct zx_lu_Status_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Status->gg.g;
  x->Status = z;
}

/* FUNC(zx_di_SvcMDDeleteResponse_REV_Status) */

void zx_di_SvcMDDeleteResponse_REV_Status(struct zx_di_SvcMDDeleteResponse_s* x)
{
  struct zx_lu_Status_s* nxt;
  struct zx_lu_Status_s* y;
  if (!x) return;
  y = x->Status;
  if (!y) return;
  x->Status = 0;
  while (y) {
    nxt = (struct zx_lu_Status_s*)y->gg.g.n;
    y->gg.g.n = &x->Status->gg.g;
    x->Status = y;
    y = nxt;
  }
}

/* FUNC(zx_di_SvcMDDeleteResponse_PUT_Status) */

void zx_di_SvcMDDeleteResponse_PUT_Status(struct zx_di_SvcMDDeleteResponse_s* x, int n, struct zx_lu_Status_s* z)
{
  struct zx_lu_Status_s* y;
  if (!x || !z) return;
  y = x->Status;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Status = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_lu_Status_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_di_SvcMDDeleteResponse_ADD_Status) */

void zx_di_SvcMDDeleteResponse_ADD_Status(struct zx_di_SvcMDDeleteResponse_s* x, int n, struct zx_lu_Status_s* z)
{
  struct zx_lu_Status_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->Status->gg.g;
    x->Status = z;
    return;
  case -1:
    y = x->Status;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_lu_Status_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Status; n > 1 && y; --n, y = (struct zx_lu_Status_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_di_SvcMDDeleteResponse_DEL_Status) */

void zx_di_SvcMDDeleteResponse_DEL_Status(struct zx_di_SvcMDDeleteResponse_s* x, int n)
{
  struct zx_lu_Status_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Status = (struct zx_lu_Status_s*)x->Status->gg.g.n;
    return;
  case -1:
    y = (struct zx_lu_Status_s*)x->Status;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_lu_Status_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Status; n > 1 && y->gg.g.n; --n, y = (struct zx_lu_Status_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif








#ifdef ZX_ENA_GETPUT

/* FUNC(zx_di_SvcMDQuery_NUM_SvcMDID) */

int zx_di_SvcMDQuery_NUM_SvcMDID(struct zx_di_SvcMDQuery_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->SvcMDID; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_di_SvcMDQuery_GET_SvcMDID) */

struct zx_elem_s* zx_di_SvcMDQuery_GET_SvcMDID(struct zx_di_SvcMDQuery_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->SvcMDID; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_di_SvcMDQuery_POP_SvcMDID) */

struct zx_elem_s* zx_di_SvcMDQuery_POP_SvcMDID(struct zx_di_SvcMDQuery_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->SvcMDID;
  if (y)
    x->SvcMDID = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_di_SvcMDQuery_PUSH_SvcMDID) */

void zx_di_SvcMDQuery_PUSH_SvcMDID(struct zx_di_SvcMDQuery_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->SvcMDID->g;
  x->SvcMDID = z;
}

/* FUNC(zx_di_SvcMDQuery_REV_SvcMDID) */

void zx_di_SvcMDQuery_REV_SvcMDID(struct zx_di_SvcMDQuery_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->SvcMDID;
  if (!y) return;
  x->SvcMDID = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->SvcMDID->g;
    x->SvcMDID = y;
    y = nxt;
  }
}

/* FUNC(zx_di_SvcMDQuery_PUT_SvcMDID) */

void zx_di_SvcMDQuery_PUT_SvcMDID(struct zx_di_SvcMDQuery_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->SvcMDID;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->SvcMDID = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_di_SvcMDQuery_ADD_SvcMDID) */

void zx_di_SvcMDQuery_ADD_SvcMDID(struct zx_di_SvcMDQuery_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->SvcMDID->g;
    x->SvcMDID = z;
    return;
  case -1:
    y = x->SvcMDID;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->SvcMDID; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_di_SvcMDQuery_DEL_SvcMDID) */

void zx_di_SvcMDQuery_DEL_SvcMDID(struct zx_di_SvcMDQuery_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->SvcMDID = (struct zx_elem_s*)x->SvcMDID->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->SvcMDID;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->SvcMDID; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

#endif








#ifdef ZX_ENA_GETPUT

/* FUNC(zx_di_SvcMDQueryResponse_NUM_Status) */

int zx_di_SvcMDQueryResponse_NUM_Status(struct zx_di_SvcMDQueryResponse_s* x)
{
  struct zx_lu_Status_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Status; y; ++n, y = (struct zx_lu_Status_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_di_SvcMDQueryResponse_GET_Status) */

struct zx_lu_Status_s* zx_di_SvcMDQueryResponse_GET_Status(struct zx_di_SvcMDQueryResponse_s* x, int n)
{
  struct zx_lu_Status_s* y;
  if (!x) return 0;
  for (y = x->Status; n>=0 && y; --n, y = (struct zx_lu_Status_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_di_SvcMDQueryResponse_POP_Status) */

struct zx_lu_Status_s* zx_di_SvcMDQueryResponse_POP_Status(struct zx_di_SvcMDQueryResponse_s* x)
{
  struct zx_lu_Status_s* y;
  if (!x) return 0;
  y = x->Status;
  if (y)
    x->Status = (struct zx_lu_Status_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_di_SvcMDQueryResponse_PUSH_Status) */

void zx_di_SvcMDQueryResponse_PUSH_Status(struct zx_di_SvcMDQueryResponse_s* x, struct zx_lu_Status_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Status->gg.g;
  x->Status = z;
}

/* FUNC(zx_di_SvcMDQueryResponse_REV_Status) */

void zx_di_SvcMDQueryResponse_REV_Status(struct zx_di_SvcMDQueryResponse_s* x)
{
  struct zx_lu_Status_s* nxt;
  struct zx_lu_Status_s* y;
  if (!x) return;
  y = x->Status;
  if (!y) return;
  x->Status = 0;
  while (y) {
    nxt = (struct zx_lu_Status_s*)y->gg.g.n;
    y->gg.g.n = &x->Status->gg.g;
    x->Status = y;
    y = nxt;
  }
}

/* FUNC(zx_di_SvcMDQueryResponse_PUT_Status) */

void zx_di_SvcMDQueryResponse_PUT_Status(struct zx_di_SvcMDQueryResponse_s* x, int n, struct zx_lu_Status_s* z)
{
  struct zx_lu_Status_s* y;
  if (!x || !z) return;
  y = x->Status;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Status = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_lu_Status_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_di_SvcMDQueryResponse_ADD_Status) */

void zx_di_SvcMDQueryResponse_ADD_Status(struct zx_di_SvcMDQueryResponse_s* x, int n, struct zx_lu_Status_s* z)
{
  struct zx_lu_Status_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->Status->gg.g;
    x->Status = z;
    return;
  case -1:
    y = x->Status;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_lu_Status_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Status; n > 1 && y; --n, y = (struct zx_lu_Status_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_di_SvcMDQueryResponse_DEL_Status) */

void zx_di_SvcMDQueryResponse_DEL_Status(struct zx_di_SvcMDQueryResponse_s* x, int n)
{
  struct zx_lu_Status_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Status = (struct zx_lu_Status_s*)x->Status->gg.g.n;
    return;
  case -1:
    y = (struct zx_lu_Status_s*)x->Status;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_lu_Status_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Status; n > 1 && y->gg.g.n; --n, y = (struct zx_lu_Status_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_di_SvcMDQueryResponse_NUM_SvcMD) */

int zx_di_SvcMDQueryResponse_NUM_SvcMD(struct zx_di_SvcMDQueryResponse_s* x)
{
  struct zx_di_SvcMD_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->SvcMD; y; ++n, y = (struct zx_di_SvcMD_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_di_SvcMDQueryResponse_GET_SvcMD) */

struct zx_di_SvcMD_s* zx_di_SvcMDQueryResponse_GET_SvcMD(struct zx_di_SvcMDQueryResponse_s* x, int n)
{
  struct zx_di_SvcMD_s* y;
  if (!x) return 0;
  for (y = x->SvcMD; n>=0 && y; --n, y = (struct zx_di_SvcMD_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_di_SvcMDQueryResponse_POP_SvcMD) */

struct zx_di_SvcMD_s* zx_di_SvcMDQueryResponse_POP_SvcMD(struct zx_di_SvcMDQueryResponse_s* x)
{
  struct zx_di_SvcMD_s* y;
  if (!x) return 0;
  y = x->SvcMD;
  if (y)
    x->SvcMD = (struct zx_di_SvcMD_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_di_SvcMDQueryResponse_PUSH_SvcMD) */

void zx_di_SvcMDQueryResponse_PUSH_SvcMD(struct zx_di_SvcMDQueryResponse_s* x, struct zx_di_SvcMD_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->SvcMD->gg.g;
  x->SvcMD = z;
}

/* FUNC(zx_di_SvcMDQueryResponse_REV_SvcMD) */

void zx_di_SvcMDQueryResponse_REV_SvcMD(struct zx_di_SvcMDQueryResponse_s* x)
{
  struct zx_di_SvcMD_s* nxt;
  struct zx_di_SvcMD_s* y;
  if (!x) return;
  y = x->SvcMD;
  if (!y) return;
  x->SvcMD = 0;
  while (y) {
    nxt = (struct zx_di_SvcMD_s*)y->gg.g.n;
    y->gg.g.n = &x->SvcMD->gg.g;
    x->SvcMD = y;
    y = nxt;
  }
}

/* FUNC(zx_di_SvcMDQueryResponse_PUT_SvcMD) */

void zx_di_SvcMDQueryResponse_PUT_SvcMD(struct zx_di_SvcMDQueryResponse_s* x, int n, struct zx_di_SvcMD_s* z)
{
  struct zx_di_SvcMD_s* y;
  if (!x || !z) return;
  y = x->SvcMD;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->SvcMD = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_di_SvcMD_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_di_SvcMDQueryResponse_ADD_SvcMD) */

void zx_di_SvcMDQueryResponse_ADD_SvcMD(struct zx_di_SvcMDQueryResponse_s* x, int n, struct zx_di_SvcMD_s* z)
{
  struct zx_di_SvcMD_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->SvcMD->gg.g;
    x->SvcMD = z;
    return;
  case -1:
    y = x->SvcMD;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_di_SvcMD_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->SvcMD; n > 1 && y; --n, y = (struct zx_di_SvcMD_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_di_SvcMDQueryResponse_DEL_SvcMD) */

void zx_di_SvcMDQueryResponse_DEL_SvcMD(struct zx_di_SvcMDQueryResponse_s* x, int n)
{
  struct zx_di_SvcMD_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->SvcMD = (struct zx_di_SvcMD_s*)x->SvcMD->gg.g.n;
    return;
  case -1:
    y = (struct zx_di_SvcMD_s*)x->SvcMD;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_di_SvcMD_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->SvcMD; n > 1 && y->gg.g.n; --n, y = (struct zx_di_SvcMD_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif








#ifdef ZX_ENA_GETPUT

/* FUNC(zx_di_SvcMDRegister_NUM_SvcMD) */

int zx_di_SvcMDRegister_NUM_SvcMD(struct zx_di_SvcMDRegister_s* x)
{
  struct zx_di_SvcMD_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->SvcMD; y; ++n, y = (struct zx_di_SvcMD_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_di_SvcMDRegister_GET_SvcMD) */

struct zx_di_SvcMD_s* zx_di_SvcMDRegister_GET_SvcMD(struct zx_di_SvcMDRegister_s* x, int n)
{
  struct zx_di_SvcMD_s* y;
  if (!x) return 0;
  for (y = x->SvcMD; n>=0 && y; --n, y = (struct zx_di_SvcMD_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_di_SvcMDRegister_POP_SvcMD) */

struct zx_di_SvcMD_s* zx_di_SvcMDRegister_POP_SvcMD(struct zx_di_SvcMDRegister_s* x)
{
  struct zx_di_SvcMD_s* y;
  if (!x) return 0;
  y = x->SvcMD;
  if (y)
    x->SvcMD = (struct zx_di_SvcMD_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_di_SvcMDRegister_PUSH_SvcMD) */

void zx_di_SvcMDRegister_PUSH_SvcMD(struct zx_di_SvcMDRegister_s* x, struct zx_di_SvcMD_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->SvcMD->gg.g;
  x->SvcMD = z;
}

/* FUNC(zx_di_SvcMDRegister_REV_SvcMD) */

void zx_di_SvcMDRegister_REV_SvcMD(struct zx_di_SvcMDRegister_s* x)
{
  struct zx_di_SvcMD_s* nxt;
  struct zx_di_SvcMD_s* y;
  if (!x) return;
  y = x->SvcMD;
  if (!y) return;
  x->SvcMD = 0;
  while (y) {
    nxt = (struct zx_di_SvcMD_s*)y->gg.g.n;
    y->gg.g.n = &x->SvcMD->gg.g;
    x->SvcMD = y;
    y = nxt;
  }
}

/* FUNC(zx_di_SvcMDRegister_PUT_SvcMD) */

void zx_di_SvcMDRegister_PUT_SvcMD(struct zx_di_SvcMDRegister_s* x, int n, struct zx_di_SvcMD_s* z)
{
  struct zx_di_SvcMD_s* y;
  if (!x || !z) return;
  y = x->SvcMD;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->SvcMD = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_di_SvcMD_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_di_SvcMDRegister_ADD_SvcMD) */

void zx_di_SvcMDRegister_ADD_SvcMD(struct zx_di_SvcMDRegister_s* x, int n, struct zx_di_SvcMD_s* z)
{
  struct zx_di_SvcMD_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->SvcMD->gg.g;
    x->SvcMD = z;
    return;
  case -1:
    y = x->SvcMD;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_di_SvcMD_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->SvcMD; n > 1 && y; --n, y = (struct zx_di_SvcMD_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_di_SvcMDRegister_DEL_SvcMD) */

void zx_di_SvcMDRegister_DEL_SvcMD(struct zx_di_SvcMDRegister_s* x, int n)
{
  struct zx_di_SvcMD_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->SvcMD = (struct zx_di_SvcMD_s*)x->SvcMD->gg.g.n;
    return;
  case -1:
    y = (struct zx_di_SvcMD_s*)x->SvcMD;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_di_SvcMD_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->SvcMD; n > 1 && y->gg.g.n; --n, y = (struct zx_di_SvcMD_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif








#ifdef ZX_ENA_GETPUT

/* FUNC(zx_di_SvcMDRegisterResponse_NUM_Status) */

int zx_di_SvcMDRegisterResponse_NUM_Status(struct zx_di_SvcMDRegisterResponse_s* x)
{
  struct zx_lu_Status_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Status; y; ++n, y = (struct zx_lu_Status_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_di_SvcMDRegisterResponse_GET_Status) */

struct zx_lu_Status_s* zx_di_SvcMDRegisterResponse_GET_Status(struct zx_di_SvcMDRegisterResponse_s* x, int n)
{
  struct zx_lu_Status_s* y;
  if (!x) return 0;
  for (y = x->Status; n>=0 && y; --n, y = (struct zx_lu_Status_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_di_SvcMDRegisterResponse_POP_Status) */

struct zx_lu_Status_s* zx_di_SvcMDRegisterResponse_POP_Status(struct zx_di_SvcMDRegisterResponse_s* x)
{
  struct zx_lu_Status_s* y;
  if (!x) return 0;
  y = x->Status;
  if (y)
    x->Status = (struct zx_lu_Status_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_di_SvcMDRegisterResponse_PUSH_Status) */

void zx_di_SvcMDRegisterResponse_PUSH_Status(struct zx_di_SvcMDRegisterResponse_s* x, struct zx_lu_Status_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Status->gg.g;
  x->Status = z;
}

/* FUNC(zx_di_SvcMDRegisterResponse_REV_Status) */

void zx_di_SvcMDRegisterResponse_REV_Status(struct zx_di_SvcMDRegisterResponse_s* x)
{
  struct zx_lu_Status_s* nxt;
  struct zx_lu_Status_s* y;
  if (!x) return;
  y = x->Status;
  if (!y) return;
  x->Status = 0;
  while (y) {
    nxt = (struct zx_lu_Status_s*)y->gg.g.n;
    y->gg.g.n = &x->Status->gg.g;
    x->Status = y;
    y = nxt;
  }
}

/* FUNC(zx_di_SvcMDRegisterResponse_PUT_Status) */

void zx_di_SvcMDRegisterResponse_PUT_Status(struct zx_di_SvcMDRegisterResponse_s* x, int n, struct zx_lu_Status_s* z)
{
  struct zx_lu_Status_s* y;
  if (!x || !z) return;
  y = x->Status;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Status = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_lu_Status_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_di_SvcMDRegisterResponse_ADD_Status) */

void zx_di_SvcMDRegisterResponse_ADD_Status(struct zx_di_SvcMDRegisterResponse_s* x, int n, struct zx_lu_Status_s* z)
{
  struct zx_lu_Status_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->Status->gg.g;
    x->Status = z;
    return;
  case -1:
    y = x->Status;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_lu_Status_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Status; n > 1 && y; --n, y = (struct zx_lu_Status_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_di_SvcMDRegisterResponse_DEL_Status) */

void zx_di_SvcMDRegisterResponse_DEL_Status(struct zx_di_SvcMDRegisterResponse_s* x, int n)
{
  struct zx_lu_Status_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Status = (struct zx_lu_Status_s*)x->Status->gg.g.n;
    return;
  case -1:
    y = (struct zx_lu_Status_s*)x->Status;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_lu_Status_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Status; n > 1 && y->gg.g.n; --n, y = (struct zx_lu_Status_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_di_SvcMDRegisterResponse_NUM_SvcMDID) */

int zx_di_SvcMDRegisterResponse_NUM_SvcMDID(struct zx_di_SvcMDRegisterResponse_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->SvcMDID; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_di_SvcMDRegisterResponse_GET_SvcMDID) */

struct zx_elem_s* zx_di_SvcMDRegisterResponse_GET_SvcMDID(struct zx_di_SvcMDRegisterResponse_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->SvcMDID; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_di_SvcMDRegisterResponse_POP_SvcMDID) */

struct zx_elem_s* zx_di_SvcMDRegisterResponse_POP_SvcMDID(struct zx_di_SvcMDRegisterResponse_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->SvcMDID;
  if (y)
    x->SvcMDID = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_di_SvcMDRegisterResponse_PUSH_SvcMDID) */

void zx_di_SvcMDRegisterResponse_PUSH_SvcMDID(struct zx_di_SvcMDRegisterResponse_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->SvcMDID->g;
  x->SvcMDID = z;
}

/* FUNC(zx_di_SvcMDRegisterResponse_REV_SvcMDID) */

void zx_di_SvcMDRegisterResponse_REV_SvcMDID(struct zx_di_SvcMDRegisterResponse_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->SvcMDID;
  if (!y) return;
  x->SvcMDID = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->SvcMDID->g;
    x->SvcMDID = y;
    y = nxt;
  }
}

/* FUNC(zx_di_SvcMDRegisterResponse_PUT_SvcMDID) */

void zx_di_SvcMDRegisterResponse_PUT_SvcMDID(struct zx_di_SvcMDRegisterResponse_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->SvcMDID;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->SvcMDID = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_di_SvcMDRegisterResponse_ADD_SvcMDID) */

void zx_di_SvcMDRegisterResponse_ADD_SvcMDID(struct zx_di_SvcMDRegisterResponse_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->SvcMDID->g;
    x->SvcMDID = z;
    return;
  case -1:
    y = x->SvcMDID;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->SvcMDID; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_di_SvcMDRegisterResponse_DEL_SvcMDID) */

void zx_di_SvcMDRegisterResponse_DEL_SvcMDID(struct zx_di_SvcMDRegisterResponse_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->SvcMDID = (struct zx_elem_s*)x->SvcMDID->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->SvcMDID;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->SvcMDID; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_di_SvcMDRegisterResponse_NUM_Keys) */

int zx_di_SvcMDRegisterResponse_NUM_Keys(struct zx_di_SvcMDRegisterResponse_s* x)
{
  struct zx_di_Keys_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Keys; y; ++n, y = (struct zx_di_Keys_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_di_SvcMDRegisterResponse_GET_Keys) */

struct zx_di_Keys_s* zx_di_SvcMDRegisterResponse_GET_Keys(struct zx_di_SvcMDRegisterResponse_s* x, int n)
{
  struct zx_di_Keys_s* y;
  if (!x) return 0;
  for (y = x->Keys; n>=0 && y; --n, y = (struct zx_di_Keys_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_di_SvcMDRegisterResponse_POP_Keys) */

struct zx_di_Keys_s* zx_di_SvcMDRegisterResponse_POP_Keys(struct zx_di_SvcMDRegisterResponse_s* x)
{
  struct zx_di_Keys_s* y;
  if (!x) return 0;
  y = x->Keys;
  if (y)
    x->Keys = (struct zx_di_Keys_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_di_SvcMDRegisterResponse_PUSH_Keys) */

void zx_di_SvcMDRegisterResponse_PUSH_Keys(struct zx_di_SvcMDRegisterResponse_s* x, struct zx_di_Keys_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Keys->gg.g;
  x->Keys = z;
}

/* FUNC(zx_di_SvcMDRegisterResponse_REV_Keys) */

void zx_di_SvcMDRegisterResponse_REV_Keys(struct zx_di_SvcMDRegisterResponse_s* x)
{
  struct zx_di_Keys_s* nxt;
  struct zx_di_Keys_s* y;
  if (!x) return;
  y = x->Keys;
  if (!y) return;
  x->Keys = 0;
  while (y) {
    nxt = (struct zx_di_Keys_s*)y->gg.g.n;
    y->gg.g.n = &x->Keys->gg.g;
    x->Keys = y;
    y = nxt;
  }
}

/* FUNC(zx_di_SvcMDRegisterResponse_PUT_Keys) */

void zx_di_SvcMDRegisterResponse_PUT_Keys(struct zx_di_SvcMDRegisterResponse_s* x, int n, struct zx_di_Keys_s* z)
{
  struct zx_di_Keys_s* y;
  if (!x || !z) return;
  y = x->Keys;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Keys = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_di_Keys_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_di_SvcMDRegisterResponse_ADD_Keys) */

void zx_di_SvcMDRegisterResponse_ADD_Keys(struct zx_di_SvcMDRegisterResponse_s* x, int n, struct zx_di_Keys_s* z)
{
  struct zx_di_Keys_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->Keys->gg.g;
    x->Keys = z;
    return;
  case -1:
    y = x->Keys;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_di_Keys_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Keys; n > 1 && y; --n, y = (struct zx_di_Keys_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_di_SvcMDRegisterResponse_DEL_Keys) */

void zx_di_SvcMDRegisterResponse_DEL_Keys(struct zx_di_SvcMDRegisterResponse_s* x, int n)
{
  struct zx_di_Keys_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Keys = (struct zx_di_Keys_s*)x->Keys->gg.g.n;
    return;
  case -1:
    y = (struct zx_di_Keys_s*)x->Keys;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_di_Keys_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Keys; n > 1 && y->gg.g.n; --n, y = (struct zx_di_Keys_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif








#ifdef ZX_ENA_GETPUT

/* FUNC(zx_di_SvcMDReplace_NUM_SvcMD) */

int zx_di_SvcMDReplace_NUM_SvcMD(struct zx_di_SvcMDReplace_s* x)
{
  struct zx_di_SvcMD_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->SvcMD; y; ++n, y = (struct zx_di_SvcMD_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_di_SvcMDReplace_GET_SvcMD) */

struct zx_di_SvcMD_s* zx_di_SvcMDReplace_GET_SvcMD(struct zx_di_SvcMDReplace_s* x, int n)
{
  struct zx_di_SvcMD_s* y;
  if (!x) return 0;
  for (y = x->SvcMD; n>=0 && y; --n, y = (struct zx_di_SvcMD_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_di_SvcMDReplace_POP_SvcMD) */

struct zx_di_SvcMD_s* zx_di_SvcMDReplace_POP_SvcMD(struct zx_di_SvcMDReplace_s* x)
{
  struct zx_di_SvcMD_s* y;
  if (!x) return 0;
  y = x->SvcMD;
  if (y)
    x->SvcMD = (struct zx_di_SvcMD_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_di_SvcMDReplace_PUSH_SvcMD) */

void zx_di_SvcMDReplace_PUSH_SvcMD(struct zx_di_SvcMDReplace_s* x, struct zx_di_SvcMD_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->SvcMD->gg.g;
  x->SvcMD = z;
}

/* FUNC(zx_di_SvcMDReplace_REV_SvcMD) */

void zx_di_SvcMDReplace_REV_SvcMD(struct zx_di_SvcMDReplace_s* x)
{
  struct zx_di_SvcMD_s* nxt;
  struct zx_di_SvcMD_s* y;
  if (!x) return;
  y = x->SvcMD;
  if (!y) return;
  x->SvcMD = 0;
  while (y) {
    nxt = (struct zx_di_SvcMD_s*)y->gg.g.n;
    y->gg.g.n = &x->SvcMD->gg.g;
    x->SvcMD = y;
    y = nxt;
  }
}

/* FUNC(zx_di_SvcMDReplace_PUT_SvcMD) */

void zx_di_SvcMDReplace_PUT_SvcMD(struct zx_di_SvcMDReplace_s* x, int n, struct zx_di_SvcMD_s* z)
{
  struct zx_di_SvcMD_s* y;
  if (!x || !z) return;
  y = x->SvcMD;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->SvcMD = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_di_SvcMD_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_di_SvcMDReplace_ADD_SvcMD) */

void zx_di_SvcMDReplace_ADD_SvcMD(struct zx_di_SvcMDReplace_s* x, int n, struct zx_di_SvcMD_s* z)
{
  struct zx_di_SvcMD_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->SvcMD->gg.g;
    x->SvcMD = z;
    return;
  case -1:
    y = x->SvcMD;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_di_SvcMD_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->SvcMD; n > 1 && y; --n, y = (struct zx_di_SvcMD_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_di_SvcMDReplace_DEL_SvcMD) */

void zx_di_SvcMDReplace_DEL_SvcMD(struct zx_di_SvcMDReplace_s* x, int n)
{
  struct zx_di_SvcMD_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->SvcMD = (struct zx_di_SvcMD_s*)x->SvcMD->gg.g.n;
    return;
  case -1:
    y = (struct zx_di_SvcMD_s*)x->SvcMD;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_di_SvcMD_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->SvcMD; n > 1 && y->gg.g.n; --n, y = (struct zx_di_SvcMD_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif








#ifdef ZX_ENA_GETPUT

/* FUNC(zx_di_SvcMDReplaceResponse_NUM_Status) */

int zx_di_SvcMDReplaceResponse_NUM_Status(struct zx_di_SvcMDReplaceResponse_s* x)
{
  struct zx_lu_Status_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Status; y; ++n, y = (struct zx_lu_Status_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_di_SvcMDReplaceResponse_GET_Status) */

struct zx_lu_Status_s* zx_di_SvcMDReplaceResponse_GET_Status(struct zx_di_SvcMDReplaceResponse_s* x, int n)
{
  struct zx_lu_Status_s* y;
  if (!x) return 0;
  for (y = x->Status; n>=0 && y; --n, y = (struct zx_lu_Status_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_di_SvcMDReplaceResponse_POP_Status) */

struct zx_lu_Status_s* zx_di_SvcMDReplaceResponse_POP_Status(struct zx_di_SvcMDReplaceResponse_s* x)
{
  struct zx_lu_Status_s* y;
  if (!x) return 0;
  y = x->Status;
  if (y)
    x->Status = (struct zx_lu_Status_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_di_SvcMDReplaceResponse_PUSH_Status) */

void zx_di_SvcMDReplaceResponse_PUSH_Status(struct zx_di_SvcMDReplaceResponse_s* x, struct zx_lu_Status_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Status->gg.g;
  x->Status = z;
}

/* FUNC(zx_di_SvcMDReplaceResponse_REV_Status) */

void zx_di_SvcMDReplaceResponse_REV_Status(struct zx_di_SvcMDReplaceResponse_s* x)
{
  struct zx_lu_Status_s* nxt;
  struct zx_lu_Status_s* y;
  if (!x) return;
  y = x->Status;
  if (!y) return;
  x->Status = 0;
  while (y) {
    nxt = (struct zx_lu_Status_s*)y->gg.g.n;
    y->gg.g.n = &x->Status->gg.g;
    x->Status = y;
    y = nxt;
  }
}

/* FUNC(zx_di_SvcMDReplaceResponse_PUT_Status) */

void zx_di_SvcMDReplaceResponse_PUT_Status(struct zx_di_SvcMDReplaceResponse_s* x, int n, struct zx_lu_Status_s* z)
{
  struct zx_lu_Status_s* y;
  if (!x || !z) return;
  y = x->Status;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Status = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_lu_Status_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_di_SvcMDReplaceResponse_ADD_Status) */

void zx_di_SvcMDReplaceResponse_ADD_Status(struct zx_di_SvcMDReplaceResponse_s* x, int n, struct zx_lu_Status_s* z)
{
  struct zx_lu_Status_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->Status->gg.g;
    x->Status = z;
    return;
  case -1:
    y = x->Status;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_lu_Status_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Status; n > 1 && y; --n, y = (struct zx_lu_Status_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_di_SvcMDReplaceResponse_DEL_Status) */

void zx_di_SvcMDReplaceResponse_DEL_Status(struct zx_di_SvcMDReplaceResponse_s* x, int n)
{
  struct zx_lu_Status_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Status = (struct zx_lu_Status_s*)x->Status->gg.g.n;
    return;
  case -1:
    y = (struct zx_lu_Status_s*)x->Status;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_lu_Status_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Status; n > 1 && y->gg.g.n; --n, y = (struct zx_lu_Status_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif






/* EOF -- c/zx-di-getput.c */
