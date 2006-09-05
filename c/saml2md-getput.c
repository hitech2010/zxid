/* c/saml2md-getput.c - WARNING: This file was automatically generated. DO NOT EDIT!
 * $Id: saml2md-getput.c,v 1.19 2006/09/05 05:09:42 sampo Exp $ */
/* Code generation design Copyright (c) 2006 Sampo Kellomaki (sampo@iki.fi),
 * All Rights Reserved. NO WARRANTY. See file COPYING for terms and conditions
 * of use. Some aspects of code generation were driven by schema
 * descriptions that were used as input and may be subject to their own copyright.
 * Code generation uses a template, whose copyright statement follows. */

/** getput-templ.c  -  Auxiliary functions template: cloning, freeing, walking data
 ** Copyright (c) 2006 Sampo Kellomaki (sampo@iki.fi), All Rights Reserved.
 ** This is confidential unpublished proprietary source code of the author.
 ** NO WARRANTY, not even implied warranties. Contains trade secrets.
 ** Distribution prohibited unless authorized in writing. See file COPYING.
 ** Id: getput-templ.c,v 1.5 2006/08/28 05:23:23 sampo Exp $
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
#include "c/saml2md-const.h"
#include "c/saml2md-data.h"

/* FUNC(zxmd_ds_CanonicalizationMethod_GET_Algorithm) */
struct zx_str_s* zxmd_ds_CanonicalizationMethod_GET_Algorithm(struct zxmd_ds_CanonicalizationMethod_s* x) { return x->Algorithm; }
/* FUNC(zxmd_ds_CanonicalizationMethod_PUT_Algorithm) */
void zxmd_ds_CanonicalizationMethod_PUT_Algorithm(struct zxmd_ds_CanonicalizationMethod_s* x, struct zx_str_s* y) { x->Algorithm = y; }







/* FUNC(zxmd_ds_DSAKeyValue_NUM_P) */

int zxmd_ds_DSAKeyValue_NUM_P(struct zxmd_ds_DSAKeyValue_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->P; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zxmd_ds_DSAKeyValue_GET_P) */

struct zx_elem_s* zxmd_ds_DSAKeyValue_GET_P(struct zxmd_ds_DSAKeyValue_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->P; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zxmd_ds_DSAKeyValue_POP_P) */

struct zx_elem_s* zxmd_ds_DSAKeyValue_POP_P(struct zxmd_ds_DSAKeyValue_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->P;
  if (y)
    x->P = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zxmd_ds_DSAKeyValue_PUSH_P) */

void zxmd_ds_DSAKeyValue_PUSH_P(struct zxmd_ds_DSAKeyValue_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->P->g;
  x->P = z;
}

/* FUNC(zxmd_ds_DSAKeyValue_REV_P) */

void zxmd_ds_DSAKeyValue_REV_P(struct zxmd_ds_DSAKeyValue_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->P;
  if (!y) return;
  x->P = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->P->g;
    x->P = y;
    y = nxt;
  }
}

/* FUNC(zxmd_ds_DSAKeyValue_PUT_P) */

void zxmd_ds_DSAKeyValue_PUT_P(struct zxmd_ds_DSAKeyValue_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->P;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->P = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zxmd_ds_DSAKeyValue_ADD_P) */

void zxmd_ds_DSAKeyValue_ADD_P(struct zxmd_ds_DSAKeyValue_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->P->g;
    x->P = z;
    return;
  case -1:
    y = x->P;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->P; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zxmd_ds_DSAKeyValue_DEL_P) */

void zxmd_ds_DSAKeyValue_DEL_P(struct zxmd_ds_DSAKeyValue_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->P = (struct zx_elem_s*)x->P->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->P;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->P; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}



/* FUNC(zxmd_ds_DSAKeyValue_NUM_Q) */

int zxmd_ds_DSAKeyValue_NUM_Q(struct zxmd_ds_DSAKeyValue_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Q; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zxmd_ds_DSAKeyValue_GET_Q) */

struct zx_elem_s* zxmd_ds_DSAKeyValue_GET_Q(struct zxmd_ds_DSAKeyValue_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->Q; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zxmd_ds_DSAKeyValue_POP_Q) */

struct zx_elem_s* zxmd_ds_DSAKeyValue_POP_Q(struct zxmd_ds_DSAKeyValue_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->Q;
  if (y)
    x->Q = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zxmd_ds_DSAKeyValue_PUSH_Q) */

void zxmd_ds_DSAKeyValue_PUSH_Q(struct zxmd_ds_DSAKeyValue_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->Q->g;
  x->Q = z;
}

/* FUNC(zxmd_ds_DSAKeyValue_REV_Q) */

void zxmd_ds_DSAKeyValue_REV_Q(struct zxmd_ds_DSAKeyValue_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->Q;
  if (!y) return;
  x->Q = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->Q->g;
    x->Q = y;
    y = nxt;
  }
}

/* FUNC(zxmd_ds_DSAKeyValue_PUT_Q) */

void zxmd_ds_DSAKeyValue_PUT_Q(struct zxmd_ds_DSAKeyValue_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->Q;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->Q = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zxmd_ds_DSAKeyValue_ADD_Q) */

void zxmd_ds_DSAKeyValue_ADD_Q(struct zxmd_ds_DSAKeyValue_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->Q->g;
    x->Q = z;
    return;
  case -1:
    y = x->Q;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->Q; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zxmd_ds_DSAKeyValue_DEL_Q) */

void zxmd_ds_DSAKeyValue_DEL_Q(struct zxmd_ds_DSAKeyValue_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Q = (struct zx_elem_s*)x->Q->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->Q;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->Q; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}



/* FUNC(zxmd_ds_DSAKeyValue_NUM_G) */

int zxmd_ds_DSAKeyValue_NUM_G(struct zxmd_ds_DSAKeyValue_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->G; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zxmd_ds_DSAKeyValue_GET_G) */

struct zx_elem_s* zxmd_ds_DSAKeyValue_GET_G(struct zxmd_ds_DSAKeyValue_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->G; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zxmd_ds_DSAKeyValue_POP_G) */

struct zx_elem_s* zxmd_ds_DSAKeyValue_POP_G(struct zxmd_ds_DSAKeyValue_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->G;
  if (y)
    x->G = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zxmd_ds_DSAKeyValue_PUSH_G) */

void zxmd_ds_DSAKeyValue_PUSH_G(struct zxmd_ds_DSAKeyValue_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->G->g;
  x->G = z;
}

/* FUNC(zxmd_ds_DSAKeyValue_REV_G) */

void zxmd_ds_DSAKeyValue_REV_G(struct zxmd_ds_DSAKeyValue_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->G;
  if (!y) return;
  x->G = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->G->g;
    x->G = y;
    y = nxt;
  }
}

/* FUNC(zxmd_ds_DSAKeyValue_PUT_G) */

void zxmd_ds_DSAKeyValue_PUT_G(struct zxmd_ds_DSAKeyValue_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->G;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->G = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zxmd_ds_DSAKeyValue_ADD_G) */

void zxmd_ds_DSAKeyValue_ADD_G(struct zxmd_ds_DSAKeyValue_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->G->g;
    x->G = z;
    return;
  case -1:
    y = x->G;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->G; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zxmd_ds_DSAKeyValue_DEL_G) */

void zxmd_ds_DSAKeyValue_DEL_G(struct zxmd_ds_DSAKeyValue_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->G = (struct zx_elem_s*)x->G->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->G;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->G; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}



/* FUNC(zxmd_ds_DSAKeyValue_NUM_Y) */

int zxmd_ds_DSAKeyValue_NUM_Y(struct zxmd_ds_DSAKeyValue_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Y; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zxmd_ds_DSAKeyValue_GET_Y) */

struct zx_elem_s* zxmd_ds_DSAKeyValue_GET_Y(struct zxmd_ds_DSAKeyValue_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->Y; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zxmd_ds_DSAKeyValue_POP_Y) */

struct zx_elem_s* zxmd_ds_DSAKeyValue_POP_Y(struct zxmd_ds_DSAKeyValue_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->Y;
  if (y)
    x->Y = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zxmd_ds_DSAKeyValue_PUSH_Y) */

void zxmd_ds_DSAKeyValue_PUSH_Y(struct zxmd_ds_DSAKeyValue_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->Y->g;
  x->Y = z;
}

/* FUNC(zxmd_ds_DSAKeyValue_REV_Y) */

void zxmd_ds_DSAKeyValue_REV_Y(struct zxmd_ds_DSAKeyValue_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->Y;
  if (!y) return;
  x->Y = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->Y->g;
    x->Y = y;
    y = nxt;
  }
}

/* FUNC(zxmd_ds_DSAKeyValue_PUT_Y) */

void zxmd_ds_DSAKeyValue_PUT_Y(struct zxmd_ds_DSAKeyValue_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->Y;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->Y = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zxmd_ds_DSAKeyValue_ADD_Y) */

void zxmd_ds_DSAKeyValue_ADD_Y(struct zxmd_ds_DSAKeyValue_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->Y->g;
    x->Y = z;
    return;
  case -1:
    y = x->Y;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->Y; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zxmd_ds_DSAKeyValue_DEL_Y) */

void zxmd_ds_DSAKeyValue_DEL_Y(struct zxmd_ds_DSAKeyValue_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Y = (struct zx_elem_s*)x->Y->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->Y;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->Y; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}



/* FUNC(zxmd_ds_DSAKeyValue_NUM_J) */

int zxmd_ds_DSAKeyValue_NUM_J(struct zxmd_ds_DSAKeyValue_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->J; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zxmd_ds_DSAKeyValue_GET_J) */

struct zx_elem_s* zxmd_ds_DSAKeyValue_GET_J(struct zxmd_ds_DSAKeyValue_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->J; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zxmd_ds_DSAKeyValue_POP_J) */

struct zx_elem_s* zxmd_ds_DSAKeyValue_POP_J(struct zxmd_ds_DSAKeyValue_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->J;
  if (y)
    x->J = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zxmd_ds_DSAKeyValue_PUSH_J) */

void zxmd_ds_DSAKeyValue_PUSH_J(struct zxmd_ds_DSAKeyValue_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->J->g;
  x->J = z;
}

/* FUNC(zxmd_ds_DSAKeyValue_REV_J) */

void zxmd_ds_DSAKeyValue_REV_J(struct zxmd_ds_DSAKeyValue_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->J;
  if (!y) return;
  x->J = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->J->g;
    x->J = y;
    y = nxt;
  }
}

/* FUNC(zxmd_ds_DSAKeyValue_PUT_J) */

void zxmd_ds_DSAKeyValue_PUT_J(struct zxmd_ds_DSAKeyValue_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->J;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->J = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zxmd_ds_DSAKeyValue_ADD_J) */

void zxmd_ds_DSAKeyValue_ADD_J(struct zxmd_ds_DSAKeyValue_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->J->g;
    x->J = z;
    return;
  case -1:
    y = x->J;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->J; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zxmd_ds_DSAKeyValue_DEL_J) */

void zxmd_ds_DSAKeyValue_DEL_J(struct zxmd_ds_DSAKeyValue_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->J = (struct zx_elem_s*)x->J->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->J;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->J; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}



/* FUNC(zxmd_ds_DSAKeyValue_NUM_Seed) */

int zxmd_ds_DSAKeyValue_NUM_Seed(struct zxmd_ds_DSAKeyValue_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Seed; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zxmd_ds_DSAKeyValue_GET_Seed) */

struct zx_elem_s* zxmd_ds_DSAKeyValue_GET_Seed(struct zxmd_ds_DSAKeyValue_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->Seed; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zxmd_ds_DSAKeyValue_POP_Seed) */

struct zx_elem_s* zxmd_ds_DSAKeyValue_POP_Seed(struct zxmd_ds_DSAKeyValue_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->Seed;
  if (y)
    x->Seed = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zxmd_ds_DSAKeyValue_PUSH_Seed) */

void zxmd_ds_DSAKeyValue_PUSH_Seed(struct zxmd_ds_DSAKeyValue_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->Seed->g;
  x->Seed = z;
}

/* FUNC(zxmd_ds_DSAKeyValue_REV_Seed) */

void zxmd_ds_DSAKeyValue_REV_Seed(struct zxmd_ds_DSAKeyValue_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->Seed;
  if (!y) return;
  x->Seed = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->Seed->g;
    x->Seed = y;
    y = nxt;
  }
}

/* FUNC(zxmd_ds_DSAKeyValue_PUT_Seed) */

void zxmd_ds_DSAKeyValue_PUT_Seed(struct zxmd_ds_DSAKeyValue_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->Seed;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->Seed = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zxmd_ds_DSAKeyValue_ADD_Seed) */

void zxmd_ds_DSAKeyValue_ADD_Seed(struct zxmd_ds_DSAKeyValue_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->Seed->g;
    x->Seed = z;
    return;
  case -1:
    y = x->Seed;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->Seed; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zxmd_ds_DSAKeyValue_DEL_Seed) */

void zxmd_ds_DSAKeyValue_DEL_Seed(struct zxmd_ds_DSAKeyValue_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Seed = (struct zx_elem_s*)x->Seed->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->Seed;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->Seed; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}



/* FUNC(zxmd_ds_DSAKeyValue_NUM_PgenCounter) */

int zxmd_ds_DSAKeyValue_NUM_PgenCounter(struct zxmd_ds_DSAKeyValue_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->PgenCounter; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zxmd_ds_DSAKeyValue_GET_PgenCounter) */

struct zx_elem_s* zxmd_ds_DSAKeyValue_GET_PgenCounter(struct zxmd_ds_DSAKeyValue_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->PgenCounter; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zxmd_ds_DSAKeyValue_POP_PgenCounter) */

struct zx_elem_s* zxmd_ds_DSAKeyValue_POP_PgenCounter(struct zxmd_ds_DSAKeyValue_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->PgenCounter;
  if (y)
    x->PgenCounter = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zxmd_ds_DSAKeyValue_PUSH_PgenCounter) */

void zxmd_ds_DSAKeyValue_PUSH_PgenCounter(struct zxmd_ds_DSAKeyValue_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->PgenCounter->g;
  x->PgenCounter = z;
}

/* FUNC(zxmd_ds_DSAKeyValue_REV_PgenCounter) */

void zxmd_ds_DSAKeyValue_REV_PgenCounter(struct zxmd_ds_DSAKeyValue_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->PgenCounter;
  if (!y) return;
  x->PgenCounter = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->PgenCounter->g;
    x->PgenCounter = y;
    y = nxt;
  }
}

/* FUNC(zxmd_ds_DSAKeyValue_PUT_PgenCounter) */

void zxmd_ds_DSAKeyValue_PUT_PgenCounter(struct zxmd_ds_DSAKeyValue_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->PgenCounter;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->PgenCounter = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zxmd_ds_DSAKeyValue_ADD_PgenCounter) */

void zxmd_ds_DSAKeyValue_ADD_PgenCounter(struct zxmd_ds_DSAKeyValue_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->PgenCounter->g;
    x->PgenCounter = z;
    return;
  case -1:
    y = x->PgenCounter;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->PgenCounter; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zxmd_ds_DSAKeyValue_DEL_PgenCounter) */

void zxmd_ds_DSAKeyValue_DEL_PgenCounter(struct zxmd_ds_DSAKeyValue_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->PgenCounter = (struct zx_elem_s*)x->PgenCounter->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->PgenCounter;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->PgenCounter; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}






/* FUNC(zxmd_ds_DigestMethod_GET_Algorithm) */
struct zx_str_s* zxmd_ds_DigestMethod_GET_Algorithm(struct zxmd_ds_DigestMethod_s* x) { return x->Algorithm; }
/* FUNC(zxmd_ds_DigestMethod_PUT_Algorithm) */
void zxmd_ds_DigestMethod_PUT_Algorithm(struct zxmd_ds_DigestMethod_s* x, struct zx_str_s* y) { x->Algorithm = y; }







/* FUNC(zxmd_ds_KeyInfo_NUM_KeyName) */

int zxmd_ds_KeyInfo_NUM_KeyName(struct zxmd_ds_KeyInfo_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->KeyName; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zxmd_ds_KeyInfo_GET_KeyName) */

struct zx_elem_s* zxmd_ds_KeyInfo_GET_KeyName(struct zxmd_ds_KeyInfo_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->KeyName; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zxmd_ds_KeyInfo_POP_KeyName) */

struct zx_elem_s* zxmd_ds_KeyInfo_POP_KeyName(struct zxmd_ds_KeyInfo_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->KeyName;
  if (y)
    x->KeyName = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zxmd_ds_KeyInfo_PUSH_KeyName) */

void zxmd_ds_KeyInfo_PUSH_KeyName(struct zxmd_ds_KeyInfo_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->KeyName->g;
  x->KeyName = z;
}

/* FUNC(zxmd_ds_KeyInfo_REV_KeyName) */

void zxmd_ds_KeyInfo_REV_KeyName(struct zxmd_ds_KeyInfo_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->KeyName;
  if (!y) return;
  x->KeyName = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->KeyName->g;
    x->KeyName = y;
    y = nxt;
  }
}

/* FUNC(zxmd_ds_KeyInfo_PUT_KeyName) */

void zxmd_ds_KeyInfo_PUT_KeyName(struct zxmd_ds_KeyInfo_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->KeyName;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->KeyName = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zxmd_ds_KeyInfo_ADD_KeyName) */

void zxmd_ds_KeyInfo_ADD_KeyName(struct zxmd_ds_KeyInfo_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->KeyName->g;
    x->KeyName = z;
    return;
  case -1:
    y = x->KeyName;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->KeyName; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zxmd_ds_KeyInfo_DEL_KeyName) */

void zxmd_ds_KeyInfo_DEL_KeyName(struct zxmd_ds_KeyInfo_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->KeyName = (struct zx_elem_s*)x->KeyName->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->KeyName;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->KeyName; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}



/* FUNC(zxmd_ds_KeyInfo_NUM_KeyValue) */

int zxmd_ds_KeyInfo_NUM_KeyValue(struct zxmd_ds_KeyInfo_s* x)
{
  struct zxmd_ds_KeyValue_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->KeyValue; y; ++n, y = (struct zxmd_ds_KeyValue_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zxmd_ds_KeyInfo_GET_KeyValue) */

struct zxmd_ds_KeyValue_s* zxmd_ds_KeyInfo_GET_KeyValue(struct zxmd_ds_KeyInfo_s* x, int n)
{
  struct zxmd_ds_KeyValue_s* y;
  if (!x) return 0;
  for (y = x->KeyValue; n>=0 && y; --n, y = (struct zxmd_ds_KeyValue_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zxmd_ds_KeyInfo_POP_KeyValue) */

struct zxmd_ds_KeyValue_s* zxmd_ds_KeyInfo_POP_KeyValue(struct zxmd_ds_KeyInfo_s* x)
{
  struct zxmd_ds_KeyValue_s* y;
  if (!x) return 0;
  y = x->KeyValue;
  if (y)
    x->KeyValue = (struct zxmd_ds_KeyValue_s*)y->gg.g.n;
  return y;
}

/* FUNC(zxmd_ds_KeyInfo_PUSH_KeyValue) */

void zxmd_ds_KeyInfo_PUSH_KeyValue(struct zxmd_ds_KeyInfo_s* x, struct zxmd_ds_KeyValue_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->KeyValue->gg.g;
  x->KeyValue = z;
}

/* FUNC(zxmd_ds_KeyInfo_REV_KeyValue) */

void zxmd_ds_KeyInfo_REV_KeyValue(struct zxmd_ds_KeyInfo_s* x)
{
  struct zxmd_ds_KeyValue_s* nxt;
  struct zxmd_ds_KeyValue_s* y;
  if (!x) return;
  y = x->KeyValue;
  if (!y) return;
  x->KeyValue = 0;
  while (y) {
    nxt = (struct zxmd_ds_KeyValue_s*)y->gg.g.n;
    y->gg.g.n = &x->KeyValue->gg.g;
    x->KeyValue = y;
    y = nxt;
  }
}

/* FUNC(zxmd_ds_KeyInfo_PUT_KeyValue) */

void zxmd_ds_KeyInfo_PUT_KeyValue(struct zxmd_ds_KeyInfo_s* x, int n, struct zxmd_ds_KeyValue_s* z)
{
  struct zxmd_ds_KeyValue_s* y;
  if (!x || !z) return;
  y = x->KeyValue;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->KeyValue = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zxmd_ds_KeyValue_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zxmd_ds_KeyInfo_ADD_KeyValue) */

void zxmd_ds_KeyInfo_ADD_KeyValue(struct zxmd_ds_KeyInfo_s* x, int n, struct zxmd_ds_KeyValue_s* z)
{
  struct zxmd_ds_KeyValue_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->KeyValue->gg.g;
    x->KeyValue = z;
    return;
  case -1:
    y = x->KeyValue;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zxmd_ds_KeyValue_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->KeyValue; n > 1 && y; --n, y = (struct zxmd_ds_KeyValue_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zxmd_ds_KeyInfo_DEL_KeyValue) */

void zxmd_ds_KeyInfo_DEL_KeyValue(struct zxmd_ds_KeyInfo_s* x, int n)
{
  struct zxmd_ds_KeyValue_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->KeyValue = (struct zxmd_ds_KeyValue_s*)x->KeyValue->gg.g.n;
    return;
  case -1:
    y = (struct zxmd_ds_KeyValue_s*)x->KeyValue;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zxmd_ds_KeyValue_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->KeyValue; n > 1 && y->gg.g.n; --n, y = (struct zxmd_ds_KeyValue_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zxmd_ds_KeyInfo_NUM_RetrievalMethod) */

int zxmd_ds_KeyInfo_NUM_RetrievalMethod(struct zxmd_ds_KeyInfo_s* x)
{
  struct zxmd_ds_RetrievalMethod_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->RetrievalMethod; y; ++n, y = (struct zxmd_ds_RetrievalMethod_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zxmd_ds_KeyInfo_GET_RetrievalMethod) */

struct zxmd_ds_RetrievalMethod_s* zxmd_ds_KeyInfo_GET_RetrievalMethod(struct zxmd_ds_KeyInfo_s* x, int n)
{
  struct zxmd_ds_RetrievalMethod_s* y;
  if (!x) return 0;
  for (y = x->RetrievalMethod; n>=0 && y; --n, y = (struct zxmd_ds_RetrievalMethod_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zxmd_ds_KeyInfo_POP_RetrievalMethod) */

struct zxmd_ds_RetrievalMethod_s* zxmd_ds_KeyInfo_POP_RetrievalMethod(struct zxmd_ds_KeyInfo_s* x)
{
  struct zxmd_ds_RetrievalMethod_s* y;
  if (!x) return 0;
  y = x->RetrievalMethod;
  if (y)
    x->RetrievalMethod = (struct zxmd_ds_RetrievalMethod_s*)y->gg.g.n;
  return y;
}

/* FUNC(zxmd_ds_KeyInfo_PUSH_RetrievalMethod) */

void zxmd_ds_KeyInfo_PUSH_RetrievalMethod(struct zxmd_ds_KeyInfo_s* x, struct zxmd_ds_RetrievalMethod_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->RetrievalMethod->gg.g;
  x->RetrievalMethod = z;
}

/* FUNC(zxmd_ds_KeyInfo_REV_RetrievalMethod) */

void zxmd_ds_KeyInfo_REV_RetrievalMethod(struct zxmd_ds_KeyInfo_s* x)
{
  struct zxmd_ds_RetrievalMethod_s* nxt;
  struct zxmd_ds_RetrievalMethod_s* y;
  if (!x) return;
  y = x->RetrievalMethod;
  if (!y) return;
  x->RetrievalMethod = 0;
  while (y) {
    nxt = (struct zxmd_ds_RetrievalMethod_s*)y->gg.g.n;
    y->gg.g.n = &x->RetrievalMethod->gg.g;
    x->RetrievalMethod = y;
    y = nxt;
  }
}

/* FUNC(zxmd_ds_KeyInfo_PUT_RetrievalMethod) */

void zxmd_ds_KeyInfo_PUT_RetrievalMethod(struct zxmd_ds_KeyInfo_s* x, int n, struct zxmd_ds_RetrievalMethod_s* z)
{
  struct zxmd_ds_RetrievalMethod_s* y;
  if (!x || !z) return;
  y = x->RetrievalMethod;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->RetrievalMethod = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zxmd_ds_RetrievalMethod_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zxmd_ds_KeyInfo_ADD_RetrievalMethod) */

void zxmd_ds_KeyInfo_ADD_RetrievalMethod(struct zxmd_ds_KeyInfo_s* x, int n, struct zxmd_ds_RetrievalMethod_s* z)
{
  struct zxmd_ds_RetrievalMethod_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->RetrievalMethod->gg.g;
    x->RetrievalMethod = z;
    return;
  case -1:
    y = x->RetrievalMethod;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zxmd_ds_RetrievalMethod_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->RetrievalMethod; n > 1 && y; --n, y = (struct zxmd_ds_RetrievalMethod_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zxmd_ds_KeyInfo_DEL_RetrievalMethod) */

void zxmd_ds_KeyInfo_DEL_RetrievalMethod(struct zxmd_ds_KeyInfo_s* x, int n)
{
  struct zxmd_ds_RetrievalMethod_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->RetrievalMethod = (struct zxmd_ds_RetrievalMethod_s*)x->RetrievalMethod->gg.g.n;
    return;
  case -1:
    y = (struct zxmd_ds_RetrievalMethod_s*)x->RetrievalMethod;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zxmd_ds_RetrievalMethod_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->RetrievalMethod; n > 1 && y->gg.g.n; --n, y = (struct zxmd_ds_RetrievalMethod_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zxmd_ds_KeyInfo_NUM_X509Data) */

int zxmd_ds_KeyInfo_NUM_X509Data(struct zxmd_ds_KeyInfo_s* x)
{
  struct zxmd_ds_X509Data_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->X509Data; y; ++n, y = (struct zxmd_ds_X509Data_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zxmd_ds_KeyInfo_GET_X509Data) */

struct zxmd_ds_X509Data_s* zxmd_ds_KeyInfo_GET_X509Data(struct zxmd_ds_KeyInfo_s* x, int n)
{
  struct zxmd_ds_X509Data_s* y;
  if (!x) return 0;
  for (y = x->X509Data; n>=0 && y; --n, y = (struct zxmd_ds_X509Data_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zxmd_ds_KeyInfo_POP_X509Data) */

struct zxmd_ds_X509Data_s* zxmd_ds_KeyInfo_POP_X509Data(struct zxmd_ds_KeyInfo_s* x)
{
  struct zxmd_ds_X509Data_s* y;
  if (!x) return 0;
  y = x->X509Data;
  if (y)
    x->X509Data = (struct zxmd_ds_X509Data_s*)y->gg.g.n;
  return y;
}

/* FUNC(zxmd_ds_KeyInfo_PUSH_X509Data) */

void zxmd_ds_KeyInfo_PUSH_X509Data(struct zxmd_ds_KeyInfo_s* x, struct zxmd_ds_X509Data_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->X509Data->gg.g;
  x->X509Data = z;
}

/* FUNC(zxmd_ds_KeyInfo_REV_X509Data) */

void zxmd_ds_KeyInfo_REV_X509Data(struct zxmd_ds_KeyInfo_s* x)
{
  struct zxmd_ds_X509Data_s* nxt;
  struct zxmd_ds_X509Data_s* y;
  if (!x) return;
  y = x->X509Data;
  if (!y) return;
  x->X509Data = 0;
  while (y) {
    nxt = (struct zxmd_ds_X509Data_s*)y->gg.g.n;
    y->gg.g.n = &x->X509Data->gg.g;
    x->X509Data = y;
    y = nxt;
  }
}

/* FUNC(zxmd_ds_KeyInfo_PUT_X509Data) */

void zxmd_ds_KeyInfo_PUT_X509Data(struct zxmd_ds_KeyInfo_s* x, int n, struct zxmd_ds_X509Data_s* z)
{
  struct zxmd_ds_X509Data_s* y;
  if (!x || !z) return;
  y = x->X509Data;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->X509Data = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zxmd_ds_X509Data_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zxmd_ds_KeyInfo_ADD_X509Data) */

void zxmd_ds_KeyInfo_ADD_X509Data(struct zxmd_ds_KeyInfo_s* x, int n, struct zxmd_ds_X509Data_s* z)
{
  struct zxmd_ds_X509Data_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->X509Data->gg.g;
    x->X509Data = z;
    return;
  case -1:
    y = x->X509Data;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zxmd_ds_X509Data_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->X509Data; n > 1 && y; --n, y = (struct zxmd_ds_X509Data_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zxmd_ds_KeyInfo_DEL_X509Data) */

void zxmd_ds_KeyInfo_DEL_X509Data(struct zxmd_ds_KeyInfo_s* x, int n)
{
  struct zxmd_ds_X509Data_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->X509Data = (struct zxmd_ds_X509Data_s*)x->X509Data->gg.g.n;
    return;
  case -1:
    y = (struct zxmd_ds_X509Data_s*)x->X509Data;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zxmd_ds_X509Data_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->X509Data; n > 1 && y->gg.g.n; --n, y = (struct zxmd_ds_X509Data_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zxmd_ds_KeyInfo_NUM_PGPData) */

int zxmd_ds_KeyInfo_NUM_PGPData(struct zxmd_ds_KeyInfo_s* x)
{
  struct zxmd_ds_PGPData_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->PGPData; y; ++n, y = (struct zxmd_ds_PGPData_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zxmd_ds_KeyInfo_GET_PGPData) */

struct zxmd_ds_PGPData_s* zxmd_ds_KeyInfo_GET_PGPData(struct zxmd_ds_KeyInfo_s* x, int n)
{
  struct zxmd_ds_PGPData_s* y;
  if (!x) return 0;
  for (y = x->PGPData; n>=0 && y; --n, y = (struct zxmd_ds_PGPData_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zxmd_ds_KeyInfo_POP_PGPData) */

struct zxmd_ds_PGPData_s* zxmd_ds_KeyInfo_POP_PGPData(struct zxmd_ds_KeyInfo_s* x)
{
  struct zxmd_ds_PGPData_s* y;
  if (!x) return 0;
  y = x->PGPData;
  if (y)
    x->PGPData = (struct zxmd_ds_PGPData_s*)y->gg.g.n;
  return y;
}

/* FUNC(zxmd_ds_KeyInfo_PUSH_PGPData) */

void zxmd_ds_KeyInfo_PUSH_PGPData(struct zxmd_ds_KeyInfo_s* x, struct zxmd_ds_PGPData_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->PGPData->gg.g;
  x->PGPData = z;
}

/* FUNC(zxmd_ds_KeyInfo_REV_PGPData) */

void zxmd_ds_KeyInfo_REV_PGPData(struct zxmd_ds_KeyInfo_s* x)
{
  struct zxmd_ds_PGPData_s* nxt;
  struct zxmd_ds_PGPData_s* y;
  if (!x) return;
  y = x->PGPData;
  if (!y) return;
  x->PGPData = 0;
  while (y) {
    nxt = (struct zxmd_ds_PGPData_s*)y->gg.g.n;
    y->gg.g.n = &x->PGPData->gg.g;
    x->PGPData = y;
    y = nxt;
  }
}

/* FUNC(zxmd_ds_KeyInfo_PUT_PGPData) */

void zxmd_ds_KeyInfo_PUT_PGPData(struct zxmd_ds_KeyInfo_s* x, int n, struct zxmd_ds_PGPData_s* z)
{
  struct zxmd_ds_PGPData_s* y;
  if (!x || !z) return;
  y = x->PGPData;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->PGPData = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zxmd_ds_PGPData_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zxmd_ds_KeyInfo_ADD_PGPData) */

void zxmd_ds_KeyInfo_ADD_PGPData(struct zxmd_ds_KeyInfo_s* x, int n, struct zxmd_ds_PGPData_s* z)
{
  struct zxmd_ds_PGPData_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->PGPData->gg.g;
    x->PGPData = z;
    return;
  case -1:
    y = x->PGPData;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zxmd_ds_PGPData_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->PGPData; n > 1 && y; --n, y = (struct zxmd_ds_PGPData_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zxmd_ds_KeyInfo_DEL_PGPData) */

void zxmd_ds_KeyInfo_DEL_PGPData(struct zxmd_ds_KeyInfo_s* x, int n)
{
  struct zxmd_ds_PGPData_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->PGPData = (struct zxmd_ds_PGPData_s*)x->PGPData->gg.g.n;
    return;
  case -1:
    y = (struct zxmd_ds_PGPData_s*)x->PGPData;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zxmd_ds_PGPData_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->PGPData; n > 1 && y->gg.g.n; --n, y = (struct zxmd_ds_PGPData_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zxmd_ds_KeyInfo_NUM_SPKIData) */

int zxmd_ds_KeyInfo_NUM_SPKIData(struct zxmd_ds_KeyInfo_s* x)
{
  struct zxmd_ds_SPKIData_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->SPKIData; y; ++n, y = (struct zxmd_ds_SPKIData_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zxmd_ds_KeyInfo_GET_SPKIData) */

struct zxmd_ds_SPKIData_s* zxmd_ds_KeyInfo_GET_SPKIData(struct zxmd_ds_KeyInfo_s* x, int n)
{
  struct zxmd_ds_SPKIData_s* y;
  if (!x) return 0;
  for (y = x->SPKIData; n>=0 && y; --n, y = (struct zxmd_ds_SPKIData_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zxmd_ds_KeyInfo_POP_SPKIData) */

struct zxmd_ds_SPKIData_s* zxmd_ds_KeyInfo_POP_SPKIData(struct zxmd_ds_KeyInfo_s* x)
{
  struct zxmd_ds_SPKIData_s* y;
  if (!x) return 0;
  y = x->SPKIData;
  if (y)
    x->SPKIData = (struct zxmd_ds_SPKIData_s*)y->gg.g.n;
  return y;
}

/* FUNC(zxmd_ds_KeyInfo_PUSH_SPKIData) */

void zxmd_ds_KeyInfo_PUSH_SPKIData(struct zxmd_ds_KeyInfo_s* x, struct zxmd_ds_SPKIData_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->SPKIData->gg.g;
  x->SPKIData = z;
}

/* FUNC(zxmd_ds_KeyInfo_REV_SPKIData) */

void zxmd_ds_KeyInfo_REV_SPKIData(struct zxmd_ds_KeyInfo_s* x)
{
  struct zxmd_ds_SPKIData_s* nxt;
  struct zxmd_ds_SPKIData_s* y;
  if (!x) return;
  y = x->SPKIData;
  if (!y) return;
  x->SPKIData = 0;
  while (y) {
    nxt = (struct zxmd_ds_SPKIData_s*)y->gg.g.n;
    y->gg.g.n = &x->SPKIData->gg.g;
    x->SPKIData = y;
    y = nxt;
  }
}

/* FUNC(zxmd_ds_KeyInfo_PUT_SPKIData) */

void zxmd_ds_KeyInfo_PUT_SPKIData(struct zxmd_ds_KeyInfo_s* x, int n, struct zxmd_ds_SPKIData_s* z)
{
  struct zxmd_ds_SPKIData_s* y;
  if (!x || !z) return;
  y = x->SPKIData;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->SPKIData = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zxmd_ds_SPKIData_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zxmd_ds_KeyInfo_ADD_SPKIData) */

void zxmd_ds_KeyInfo_ADD_SPKIData(struct zxmd_ds_KeyInfo_s* x, int n, struct zxmd_ds_SPKIData_s* z)
{
  struct zxmd_ds_SPKIData_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->SPKIData->gg.g;
    x->SPKIData = z;
    return;
  case -1:
    y = x->SPKIData;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zxmd_ds_SPKIData_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->SPKIData; n > 1 && y; --n, y = (struct zxmd_ds_SPKIData_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zxmd_ds_KeyInfo_DEL_SPKIData) */

void zxmd_ds_KeyInfo_DEL_SPKIData(struct zxmd_ds_KeyInfo_s* x, int n)
{
  struct zxmd_ds_SPKIData_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->SPKIData = (struct zxmd_ds_SPKIData_s*)x->SPKIData->gg.g.n;
    return;
  case -1:
    y = (struct zxmd_ds_SPKIData_s*)x->SPKIData;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zxmd_ds_SPKIData_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->SPKIData; n > 1 && y->gg.g.n; --n, y = (struct zxmd_ds_SPKIData_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zxmd_ds_KeyInfo_NUM_MgmtData) */

int zxmd_ds_KeyInfo_NUM_MgmtData(struct zxmd_ds_KeyInfo_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->MgmtData; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zxmd_ds_KeyInfo_GET_MgmtData) */

struct zx_elem_s* zxmd_ds_KeyInfo_GET_MgmtData(struct zxmd_ds_KeyInfo_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->MgmtData; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zxmd_ds_KeyInfo_POP_MgmtData) */

struct zx_elem_s* zxmd_ds_KeyInfo_POP_MgmtData(struct zxmd_ds_KeyInfo_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->MgmtData;
  if (y)
    x->MgmtData = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zxmd_ds_KeyInfo_PUSH_MgmtData) */

void zxmd_ds_KeyInfo_PUSH_MgmtData(struct zxmd_ds_KeyInfo_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->MgmtData->g;
  x->MgmtData = z;
}

/* FUNC(zxmd_ds_KeyInfo_REV_MgmtData) */

void zxmd_ds_KeyInfo_REV_MgmtData(struct zxmd_ds_KeyInfo_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->MgmtData;
  if (!y) return;
  x->MgmtData = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->MgmtData->g;
    x->MgmtData = y;
    y = nxt;
  }
}

/* FUNC(zxmd_ds_KeyInfo_PUT_MgmtData) */

void zxmd_ds_KeyInfo_PUT_MgmtData(struct zxmd_ds_KeyInfo_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->MgmtData;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->MgmtData = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zxmd_ds_KeyInfo_ADD_MgmtData) */

void zxmd_ds_KeyInfo_ADD_MgmtData(struct zxmd_ds_KeyInfo_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->MgmtData->g;
    x->MgmtData = z;
    return;
  case -1:
    y = x->MgmtData;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->MgmtData; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zxmd_ds_KeyInfo_DEL_MgmtData) */

void zxmd_ds_KeyInfo_DEL_MgmtData(struct zxmd_ds_KeyInfo_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->MgmtData = (struct zx_elem_s*)x->MgmtData->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->MgmtData;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->MgmtData; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

/* FUNC(zxmd_ds_KeyInfo_GET_Id) */
struct zx_str_s* zxmd_ds_KeyInfo_GET_Id(struct zxmd_ds_KeyInfo_s* x) { return x->Id; }
/* FUNC(zxmd_ds_KeyInfo_PUT_Id) */
void zxmd_ds_KeyInfo_PUT_Id(struct zxmd_ds_KeyInfo_s* x, struct zx_str_s* y) { x->Id = y; }







/* FUNC(zxmd_ds_KeyValue_NUM_DSAKeyValue) */

int zxmd_ds_KeyValue_NUM_DSAKeyValue(struct zxmd_ds_KeyValue_s* x)
{
  struct zxmd_ds_DSAKeyValue_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->DSAKeyValue; y; ++n, y = (struct zxmd_ds_DSAKeyValue_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zxmd_ds_KeyValue_GET_DSAKeyValue) */

struct zxmd_ds_DSAKeyValue_s* zxmd_ds_KeyValue_GET_DSAKeyValue(struct zxmd_ds_KeyValue_s* x, int n)
{
  struct zxmd_ds_DSAKeyValue_s* y;
  if (!x) return 0;
  for (y = x->DSAKeyValue; n>=0 && y; --n, y = (struct zxmd_ds_DSAKeyValue_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zxmd_ds_KeyValue_POP_DSAKeyValue) */

struct zxmd_ds_DSAKeyValue_s* zxmd_ds_KeyValue_POP_DSAKeyValue(struct zxmd_ds_KeyValue_s* x)
{
  struct zxmd_ds_DSAKeyValue_s* y;
  if (!x) return 0;
  y = x->DSAKeyValue;
  if (y)
    x->DSAKeyValue = (struct zxmd_ds_DSAKeyValue_s*)y->gg.g.n;
  return y;
}

/* FUNC(zxmd_ds_KeyValue_PUSH_DSAKeyValue) */

void zxmd_ds_KeyValue_PUSH_DSAKeyValue(struct zxmd_ds_KeyValue_s* x, struct zxmd_ds_DSAKeyValue_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->DSAKeyValue->gg.g;
  x->DSAKeyValue = z;
}

/* FUNC(zxmd_ds_KeyValue_REV_DSAKeyValue) */

void zxmd_ds_KeyValue_REV_DSAKeyValue(struct zxmd_ds_KeyValue_s* x)
{
  struct zxmd_ds_DSAKeyValue_s* nxt;
  struct zxmd_ds_DSAKeyValue_s* y;
  if (!x) return;
  y = x->DSAKeyValue;
  if (!y) return;
  x->DSAKeyValue = 0;
  while (y) {
    nxt = (struct zxmd_ds_DSAKeyValue_s*)y->gg.g.n;
    y->gg.g.n = &x->DSAKeyValue->gg.g;
    x->DSAKeyValue = y;
    y = nxt;
  }
}

/* FUNC(zxmd_ds_KeyValue_PUT_DSAKeyValue) */

void zxmd_ds_KeyValue_PUT_DSAKeyValue(struct zxmd_ds_KeyValue_s* x, int n, struct zxmd_ds_DSAKeyValue_s* z)
{
  struct zxmd_ds_DSAKeyValue_s* y;
  if (!x || !z) return;
  y = x->DSAKeyValue;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->DSAKeyValue = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zxmd_ds_DSAKeyValue_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zxmd_ds_KeyValue_ADD_DSAKeyValue) */

void zxmd_ds_KeyValue_ADD_DSAKeyValue(struct zxmd_ds_KeyValue_s* x, int n, struct zxmd_ds_DSAKeyValue_s* z)
{
  struct zxmd_ds_DSAKeyValue_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->DSAKeyValue->gg.g;
    x->DSAKeyValue = z;
    return;
  case -1:
    y = x->DSAKeyValue;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zxmd_ds_DSAKeyValue_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->DSAKeyValue; n > 1 && y; --n, y = (struct zxmd_ds_DSAKeyValue_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zxmd_ds_KeyValue_DEL_DSAKeyValue) */

void zxmd_ds_KeyValue_DEL_DSAKeyValue(struct zxmd_ds_KeyValue_s* x, int n)
{
  struct zxmd_ds_DSAKeyValue_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->DSAKeyValue = (struct zxmd_ds_DSAKeyValue_s*)x->DSAKeyValue->gg.g.n;
    return;
  case -1:
    y = (struct zxmd_ds_DSAKeyValue_s*)x->DSAKeyValue;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zxmd_ds_DSAKeyValue_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->DSAKeyValue; n > 1 && y->gg.g.n; --n, y = (struct zxmd_ds_DSAKeyValue_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zxmd_ds_KeyValue_NUM_RSAKeyValue) */

int zxmd_ds_KeyValue_NUM_RSAKeyValue(struct zxmd_ds_KeyValue_s* x)
{
  struct zxmd_ds_RSAKeyValue_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->RSAKeyValue; y; ++n, y = (struct zxmd_ds_RSAKeyValue_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zxmd_ds_KeyValue_GET_RSAKeyValue) */

struct zxmd_ds_RSAKeyValue_s* zxmd_ds_KeyValue_GET_RSAKeyValue(struct zxmd_ds_KeyValue_s* x, int n)
{
  struct zxmd_ds_RSAKeyValue_s* y;
  if (!x) return 0;
  for (y = x->RSAKeyValue; n>=0 && y; --n, y = (struct zxmd_ds_RSAKeyValue_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zxmd_ds_KeyValue_POP_RSAKeyValue) */

struct zxmd_ds_RSAKeyValue_s* zxmd_ds_KeyValue_POP_RSAKeyValue(struct zxmd_ds_KeyValue_s* x)
{
  struct zxmd_ds_RSAKeyValue_s* y;
  if (!x) return 0;
  y = x->RSAKeyValue;
  if (y)
    x->RSAKeyValue = (struct zxmd_ds_RSAKeyValue_s*)y->gg.g.n;
  return y;
}

/* FUNC(zxmd_ds_KeyValue_PUSH_RSAKeyValue) */

void zxmd_ds_KeyValue_PUSH_RSAKeyValue(struct zxmd_ds_KeyValue_s* x, struct zxmd_ds_RSAKeyValue_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->RSAKeyValue->gg.g;
  x->RSAKeyValue = z;
}

/* FUNC(zxmd_ds_KeyValue_REV_RSAKeyValue) */

void zxmd_ds_KeyValue_REV_RSAKeyValue(struct zxmd_ds_KeyValue_s* x)
{
  struct zxmd_ds_RSAKeyValue_s* nxt;
  struct zxmd_ds_RSAKeyValue_s* y;
  if (!x) return;
  y = x->RSAKeyValue;
  if (!y) return;
  x->RSAKeyValue = 0;
  while (y) {
    nxt = (struct zxmd_ds_RSAKeyValue_s*)y->gg.g.n;
    y->gg.g.n = &x->RSAKeyValue->gg.g;
    x->RSAKeyValue = y;
    y = nxt;
  }
}

/* FUNC(zxmd_ds_KeyValue_PUT_RSAKeyValue) */

void zxmd_ds_KeyValue_PUT_RSAKeyValue(struct zxmd_ds_KeyValue_s* x, int n, struct zxmd_ds_RSAKeyValue_s* z)
{
  struct zxmd_ds_RSAKeyValue_s* y;
  if (!x || !z) return;
  y = x->RSAKeyValue;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->RSAKeyValue = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zxmd_ds_RSAKeyValue_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zxmd_ds_KeyValue_ADD_RSAKeyValue) */

void zxmd_ds_KeyValue_ADD_RSAKeyValue(struct zxmd_ds_KeyValue_s* x, int n, struct zxmd_ds_RSAKeyValue_s* z)
{
  struct zxmd_ds_RSAKeyValue_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->RSAKeyValue->gg.g;
    x->RSAKeyValue = z;
    return;
  case -1:
    y = x->RSAKeyValue;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zxmd_ds_RSAKeyValue_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->RSAKeyValue; n > 1 && y; --n, y = (struct zxmd_ds_RSAKeyValue_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zxmd_ds_KeyValue_DEL_RSAKeyValue) */

void zxmd_ds_KeyValue_DEL_RSAKeyValue(struct zxmd_ds_KeyValue_s* x, int n)
{
  struct zxmd_ds_RSAKeyValue_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->RSAKeyValue = (struct zxmd_ds_RSAKeyValue_s*)x->RSAKeyValue->gg.g.n;
    return;
  case -1:
    y = (struct zxmd_ds_RSAKeyValue_s*)x->RSAKeyValue;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zxmd_ds_RSAKeyValue_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->RSAKeyValue; n > 1 && y->gg.g.n; --n, y = (struct zxmd_ds_RSAKeyValue_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}








/* FUNC(zxmd_ds_Manifest_NUM_Reference) */

int zxmd_ds_Manifest_NUM_Reference(struct zxmd_ds_Manifest_s* x)
{
  struct zxmd_ds_Reference_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Reference; y; ++n, y = (struct zxmd_ds_Reference_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zxmd_ds_Manifest_GET_Reference) */

struct zxmd_ds_Reference_s* zxmd_ds_Manifest_GET_Reference(struct zxmd_ds_Manifest_s* x, int n)
{
  struct zxmd_ds_Reference_s* y;
  if (!x) return 0;
  for (y = x->Reference; n>=0 && y; --n, y = (struct zxmd_ds_Reference_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zxmd_ds_Manifest_POP_Reference) */

struct zxmd_ds_Reference_s* zxmd_ds_Manifest_POP_Reference(struct zxmd_ds_Manifest_s* x)
{
  struct zxmd_ds_Reference_s* y;
  if (!x) return 0;
  y = x->Reference;
  if (y)
    x->Reference = (struct zxmd_ds_Reference_s*)y->gg.g.n;
  return y;
}

/* FUNC(zxmd_ds_Manifest_PUSH_Reference) */

void zxmd_ds_Manifest_PUSH_Reference(struct zxmd_ds_Manifest_s* x, struct zxmd_ds_Reference_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Reference->gg.g;
  x->Reference = z;
}

/* FUNC(zxmd_ds_Manifest_REV_Reference) */

void zxmd_ds_Manifest_REV_Reference(struct zxmd_ds_Manifest_s* x)
{
  struct zxmd_ds_Reference_s* nxt;
  struct zxmd_ds_Reference_s* y;
  if (!x) return;
  y = x->Reference;
  if (!y) return;
  x->Reference = 0;
  while (y) {
    nxt = (struct zxmd_ds_Reference_s*)y->gg.g.n;
    y->gg.g.n = &x->Reference->gg.g;
    x->Reference = y;
    y = nxt;
  }
}

/* FUNC(zxmd_ds_Manifest_PUT_Reference) */

void zxmd_ds_Manifest_PUT_Reference(struct zxmd_ds_Manifest_s* x, int n, struct zxmd_ds_Reference_s* z)
{
  struct zxmd_ds_Reference_s* y;
  if (!x || !z) return;
  y = x->Reference;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Reference = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zxmd_ds_Reference_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zxmd_ds_Manifest_ADD_Reference) */

void zxmd_ds_Manifest_ADD_Reference(struct zxmd_ds_Manifest_s* x, int n, struct zxmd_ds_Reference_s* z)
{
  struct zxmd_ds_Reference_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->Reference->gg.g;
    x->Reference = z;
    return;
  case -1:
    y = x->Reference;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zxmd_ds_Reference_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Reference; n > 1 && y; --n, y = (struct zxmd_ds_Reference_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zxmd_ds_Manifest_DEL_Reference) */

void zxmd_ds_Manifest_DEL_Reference(struct zxmd_ds_Manifest_s* x, int n)
{
  struct zxmd_ds_Reference_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Reference = (struct zxmd_ds_Reference_s*)x->Reference->gg.g.n;
    return;
  case -1:
    y = (struct zxmd_ds_Reference_s*)x->Reference;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zxmd_ds_Reference_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Reference; n > 1 && y->gg.g.n; --n, y = (struct zxmd_ds_Reference_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

/* FUNC(zxmd_ds_Manifest_GET_Id) */
struct zx_str_s* zxmd_ds_Manifest_GET_Id(struct zxmd_ds_Manifest_s* x) { return x->Id; }
/* FUNC(zxmd_ds_Manifest_PUT_Id) */
void zxmd_ds_Manifest_PUT_Id(struct zxmd_ds_Manifest_s* x, struct zx_str_s* y) { x->Id = y; }





/* FUNC(zxmd_ds_Object_GET_Id) */
struct zx_str_s* zxmd_ds_Object_GET_Id(struct zxmd_ds_Object_s* x) { return x->Id; }
/* FUNC(zxmd_ds_Object_PUT_Id) */
void zxmd_ds_Object_PUT_Id(struct zxmd_ds_Object_s* x, struct zx_str_s* y) { x->Id = y; }
/* FUNC(zxmd_ds_Object_GET_MimeType) */
struct zx_str_s* zxmd_ds_Object_GET_MimeType(struct zxmd_ds_Object_s* x) { return x->MimeType; }
/* FUNC(zxmd_ds_Object_PUT_MimeType) */
void zxmd_ds_Object_PUT_MimeType(struct zxmd_ds_Object_s* x, struct zx_str_s* y) { x->MimeType = y; }
/* FUNC(zxmd_ds_Object_GET_Encoding) */
struct zx_str_s* zxmd_ds_Object_GET_Encoding(struct zxmd_ds_Object_s* x) { return x->Encoding; }
/* FUNC(zxmd_ds_Object_PUT_Encoding) */
void zxmd_ds_Object_PUT_Encoding(struct zxmd_ds_Object_s* x, struct zx_str_s* y) { x->Encoding = y; }







/* FUNC(zxmd_ds_PGPData_NUM_PGPKeyID) */

int zxmd_ds_PGPData_NUM_PGPKeyID(struct zxmd_ds_PGPData_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->PGPKeyID; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zxmd_ds_PGPData_GET_PGPKeyID) */

struct zx_elem_s* zxmd_ds_PGPData_GET_PGPKeyID(struct zxmd_ds_PGPData_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->PGPKeyID; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zxmd_ds_PGPData_POP_PGPKeyID) */

struct zx_elem_s* zxmd_ds_PGPData_POP_PGPKeyID(struct zxmd_ds_PGPData_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->PGPKeyID;
  if (y)
    x->PGPKeyID = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zxmd_ds_PGPData_PUSH_PGPKeyID) */

void zxmd_ds_PGPData_PUSH_PGPKeyID(struct zxmd_ds_PGPData_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->PGPKeyID->g;
  x->PGPKeyID = z;
}

/* FUNC(zxmd_ds_PGPData_REV_PGPKeyID) */

void zxmd_ds_PGPData_REV_PGPKeyID(struct zxmd_ds_PGPData_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->PGPKeyID;
  if (!y) return;
  x->PGPKeyID = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->PGPKeyID->g;
    x->PGPKeyID = y;
    y = nxt;
  }
}

/* FUNC(zxmd_ds_PGPData_PUT_PGPKeyID) */

void zxmd_ds_PGPData_PUT_PGPKeyID(struct zxmd_ds_PGPData_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->PGPKeyID;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->PGPKeyID = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zxmd_ds_PGPData_ADD_PGPKeyID) */

void zxmd_ds_PGPData_ADD_PGPKeyID(struct zxmd_ds_PGPData_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->PGPKeyID->g;
    x->PGPKeyID = z;
    return;
  case -1:
    y = x->PGPKeyID;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->PGPKeyID; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zxmd_ds_PGPData_DEL_PGPKeyID) */

void zxmd_ds_PGPData_DEL_PGPKeyID(struct zxmd_ds_PGPData_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->PGPKeyID = (struct zx_elem_s*)x->PGPKeyID->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->PGPKeyID;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->PGPKeyID; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}



/* FUNC(zxmd_ds_PGPData_NUM_PGPKeyPacket) */

int zxmd_ds_PGPData_NUM_PGPKeyPacket(struct zxmd_ds_PGPData_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->PGPKeyPacket; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zxmd_ds_PGPData_GET_PGPKeyPacket) */

struct zx_elem_s* zxmd_ds_PGPData_GET_PGPKeyPacket(struct zxmd_ds_PGPData_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->PGPKeyPacket; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zxmd_ds_PGPData_POP_PGPKeyPacket) */

struct zx_elem_s* zxmd_ds_PGPData_POP_PGPKeyPacket(struct zxmd_ds_PGPData_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->PGPKeyPacket;
  if (y)
    x->PGPKeyPacket = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zxmd_ds_PGPData_PUSH_PGPKeyPacket) */

void zxmd_ds_PGPData_PUSH_PGPKeyPacket(struct zxmd_ds_PGPData_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->PGPKeyPacket->g;
  x->PGPKeyPacket = z;
}

/* FUNC(zxmd_ds_PGPData_REV_PGPKeyPacket) */

void zxmd_ds_PGPData_REV_PGPKeyPacket(struct zxmd_ds_PGPData_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->PGPKeyPacket;
  if (!y) return;
  x->PGPKeyPacket = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->PGPKeyPacket->g;
    x->PGPKeyPacket = y;
    y = nxt;
  }
}

/* FUNC(zxmd_ds_PGPData_PUT_PGPKeyPacket) */

void zxmd_ds_PGPData_PUT_PGPKeyPacket(struct zxmd_ds_PGPData_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->PGPKeyPacket;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->PGPKeyPacket = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zxmd_ds_PGPData_ADD_PGPKeyPacket) */

void zxmd_ds_PGPData_ADD_PGPKeyPacket(struct zxmd_ds_PGPData_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->PGPKeyPacket->g;
    x->PGPKeyPacket = z;
    return;
  case -1:
    y = x->PGPKeyPacket;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->PGPKeyPacket; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zxmd_ds_PGPData_DEL_PGPKeyPacket) */

void zxmd_ds_PGPData_DEL_PGPKeyPacket(struct zxmd_ds_PGPData_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->PGPKeyPacket = (struct zx_elem_s*)x->PGPKeyPacket->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->PGPKeyPacket;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->PGPKeyPacket; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}








/* FUNC(zxmd_ds_RSAKeyValue_NUM_Modulus) */

int zxmd_ds_RSAKeyValue_NUM_Modulus(struct zxmd_ds_RSAKeyValue_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Modulus; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zxmd_ds_RSAKeyValue_GET_Modulus) */

struct zx_elem_s* zxmd_ds_RSAKeyValue_GET_Modulus(struct zxmd_ds_RSAKeyValue_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->Modulus; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zxmd_ds_RSAKeyValue_POP_Modulus) */

struct zx_elem_s* zxmd_ds_RSAKeyValue_POP_Modulus(struct zxmd_ds_RSAKeyValue_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->Modulus;
  if (y)
    x->Modulus = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zxmd_ds_RSAKeyValue_PUSH_Modulus) */

void zxmd_ds_RSAKeyValue_PUSH_Modulus(struct zxmd_ds_RSAKeyValue_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->Modulus->g;
  x->Modulus = z;
}

/* FUNC(zxmd_ds_RSAKeyValue_REV_Modulus) */

void zxmd_ds_RSAKeyValue_REV_Modulus(struct zxmd_ds_RSAKeyValue_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->Modulus;
  if (!y) return;
  x->Modulus = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->Modulus->g;
    x->Modulus = y;
    y = nxt;
  }
}

/* FUNC(zxmd_ds_RSAKeyValue_PUT_Modulus) */

void zxmd_ds_RSAKeyValue_PUT_Modulus(struct zxmd_ds_RSAKeyValue_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->Modulus;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->Modulus = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zxmd_ds_RSAKeyValue_ADD_Modulus) */

void zxmd_ds_RSAKeyValue_ADD_Modulus(struct zxmd_ds_RSAKeyValue_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->Modulus->g;
    x->Modulus = z;
    return;
  case -1:
    y = x->Modulus;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->Modulus; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zxmd_ds_RSAKeyValue_DEL_Modulus) */

void zxmd_ds_RSAKeyValue_DEL_Modulus(struct zxmd_ds_RSAKeyValue_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Modulus = (struct zx_elem_s*)x->Modulus->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->Modulus;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->Modulus; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}



/* FUNC(zxmd_ds_RSAKeyValue_NUM_Exponent) */

int zxmd_ds_RSAKeyValue_NUM_Exponent(struct zxmd_ds_RSAKeyValue_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Exponent; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zxmd_ds_RSAKeyValue_GET_Exponent) */

struct zx_elem_s* zxmd_ds_RSAKeyValue_GET_Exponent(struct zxmd_ds_RSAKeyValue_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->Exponent; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zxmd_ds_RSAKeyValue_POP_Exponent) */

struct zx_elem_s* zxmd_ds_RSAKeyValue_POP_Exponent(struct zxmd_ds_RSAKeyValue_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->Exponent;
  if (y)
    x->Exponent = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zxmd_ds_RSAKeyValue_PUSH_Exponent) */

void zxmd_ds_RSAKeyValue_PUSH_Exponent(struct zxmd_ds_RSAKeyValue_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->Exponent->g;
  x->Exponent = z;
}

/* FUNC(zxmd_ds_RSAKeyValue_REV_Exponent) */

void zxmd_ds_RSAKeyValue_REV_Exponent(struct zxmd_ds_RSAKeyValue_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->Exponent;
  if (!y) return;
  x->Exponent = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->Exponent->g;
    x->Exponent = y;
    y = nxt;
  }
}

/* FUNC(zxmd_ds_RSAKeyValue_PUT_Exponent) */

void zxmd_ds_RSAKeyValue_PUT_Exponent(struct zxmd_ds_RSAKeyValue_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->Exponent;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->Exponent = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zxmd_ds_RSAKeyValue_ADD_Exponent) */

void zxmd_ds_RSAKeyValue_ADD_Exponent(struct zxmd_ds_RSAKeyValue_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->Exponent->g;
    x->Exponent = z;
    return;
  case -1:
    y = x->Exponent;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->Exponent; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zxmd_ds_RSAKeyValue_DEL_Exponent) */

void zxmd_ds_RSAKeyValue_DEL_Exponent(struct zxmd_ds_RSAKeyValue_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Exponent = (struct zx_elem_s*)x->Exponent->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->Exponent;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->Exponent; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}








/* FUNC(zxmd_ds_Reference_NUM_Transforms) */

int zxmd_ds_Reference_NUM_Transforms(struct zxmd_ds_Reference_s* x)
{
  struct zxmd_ds_Transforms_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Transforms; y; ++n, y = (struct zxmd_ds_Transforms_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zxmd_ds_Reference_GET_Transforms) */

struct zxmd_ds_Transforms_s* zxmd_ds_Reference_GET_Transforms(struct zxmd_ds_Reference_s* x, int n)
{
  struct zxmd_ds_Transforms_s* y;
  if (!x) return 0;
  for (y = x->Transforms; n>=0 && y; --n, y = (struct zxmd_ds_Transforms_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zxmd_ds_Reference_POP_Transforms) */

struct zxmd_ds_Transforms_s* zxmd_ds_Reference_POP_Transforms(struct zxmd_ds_Reference_s* x)
{
  struct zxmd_ds_Transforms_s* y;
  if (!x) return 0;
  y = x->Transforms;
  if (y)
    x->Transforms = (struct zxmd_ds_Transforms_s*)y->gg.g.n;
  return y;
}

/* FUNC(zxmd_ds_Reference_PUSH_Transforms) */

void zxmd_ds_Reference_PUSH_Transforms(struct zxmd_ds_Reference_s* x, struct zxmd_ds_Transforms_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Transforms->gg.g;
  x->Transforms = z;
}

/* FUNC(zxmd_ds_Reference_REV_Transforms) */

void zxmd_ds_Reference_REV_Transforms(struct zxmd_ds_Reference_s* x)
{
  struct zxmd_ds_Transforms_s* nxt;
  struct zxmd_ds_Transforms_s* y;
  if (!x) return;
  y = x->Transforms;
  if (!y) return;
  x->Transforms = 0;
  while (y) {
    nxt = (struct zxmd_ds_Transforms_s*)y->gg.g.n;
    y->gg.g.n = &x->Transforms->gg.g;
    x->Transforms = y;
    y = nxt;
  }
}

/* FUNC(zxmd_ds_Reference_PUT_Transforms) */

void zxmd_ds_Reference_PUT_Transforms(struct zxmd_ds_Reference_s* x, int n, struct zxmd_ds_Transforms_s* z)
{
  struct zxmd_ds_Transforms_s* y;
  if (!x || !z) return;
  y = x->Transforms;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Transforms = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zxmd_ds_Transforms_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zxmd_ds_Reference_ADD_Transforms) */

void zxmd_ds_Reference_ADD_Transforms(struct zxmd_ds_Reference_s* x, int n, struct zxmd_ds_Transforms_s* z)
{
  struct zxmd_ds_Transforms_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->Transforms->gg.g;
    x->Transforms = z;
    return;
  case -1:
    y = x->Transforms;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zxmd_ds_Transforms_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Transforms; n > 1 && y; --n, y = (struct zxmd_ds_Transforms_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zxmd_ds_Reference_DEL_Transforms) */

void zxmd_ds_Reference_DEL_Transforms(struct zxmd_ds_Reference_s* x, int n)
{
  struct zxmd_ds_Transforms_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Transforms = (struct zxmd_ds_Transforms_s*)x->Transforms->gg.g.n;
    return;
  case -1:
    y = (struct zxmd_ds_Transforms_s*)x->Transforms;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zxmd_ds_Transforms_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Transforms; n > 1 && y->gg.g.n; --n, y = (struct zxmd_ds_Transforms_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zxmd_ds_Reference_NUM_DigestMethod) */

int zxmd_ds_Reference_NUM_DigestMethod(struct zxmd_ds_Reference_s* x)
{
  struct zxmd_ds_DigestMethod_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->DigestMethod; y; ++n, y = (struct zxmd_ds_DigestMethod_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zxmd_ds_Reference_GET_DigestMethod) */

struct zxmd_ds_DigestMethod_s* zxmd_ds_Reference_GET_DigestMethod(struct zxmd_ds_Reference_s* x, int n)
{
  struct zxmd_ds_DigestMethod_s* y;
  if (!x) return 0;
  for (y = x->DigestMethod; n>=0 && y; --n, y = (struct zxmd_ds_DigestMethod_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zxmd_ds_Reference_POP_DigestMethod) */

struct zxmd_ds_DigestMethod_s* zxmd_ds_Reference_POP_DigestMethod(struct zxmd_ds_Reference_s* x)
{
  struct zxmd_ds_DigestMethod_s* y;
  if (!x) return 0;
  y = x->DigestMethod;
  if (y)
    x->DigestMethod = (struct zxmd_ds_DigestMethod_s*)y->gg.g.n;
  return y;
}

/* FUNC(zxmd_ds_Reference_PUSH_DigestMethod) */

void zxmd_ds_Reference_PUSH_DigestMethod(struct zxmd_ds_Reference_s* x, struct zxmd_ds_DigestMethod_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->DigestMethod->gg.g;
  x->DigestMethod = z;
}

/* FUNC(zxmd_ds_Reference_REV_DigestMethod) */

void zxmd_ds_Reference_REV_DigestMethod(struct zxmd_ds_Reference_s* x)
{
  struct zxmd_ds_DigestMethod_s* nxt;
  struct zxmd_ds_DigestMethod_s* y;
  if (!x) return;
  y = x->DigestMethod;
  if (!y) return;
  x->DigestMethod = 0;
  while (y) {
    nxt = (struct zxmd_ds_DigestMethod_s*)y->gg.g.n;
    y->gg.g.n = &x->DigestMethod->gg.g;
    x->DigestMethod = y;
    y = nxt;
  }
}

/* FUNC(zxmd_ds_Reference_PUT_DigestMethod) */

void zxmd_ds_Reference_PUT_DigestMethod(struct zxmd_ds_Reference_s* x, int n, struct zxmd_ds_DigestMethod_s* z)
{
  struct zxmd_ds_DigestMethod_s* y;
  if (!x || !z) return;
  y = x->DigestMethod;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->DigestMethod = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zxmd_ds_DigestMethod_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zxmd_ds_Reference_ADD_DigestMethod) */

void zxmd_ds_Reference_ADD_DigestMethod(struct zxmd_ds_Reference_s* x, int n, struct zxmd_ds_DigestMethod_s* z)
{
  struct zxmd_ds_DigestMethod_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->DigestMethod->gg.g;
    x->DigestMethod = z;
    return;
  case -1:
    y = x->DigestMethod;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zxmd_ds_DigestMethod_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->DigestMethod; n > 1 && y; --n, y = (struct zxmd_ds_DigestMethod_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zxmd_ds_Reference_DEL_DigestMethod) */

void zxmd_ds_Reference_DEL_DigestMethod(struct zxmd_ds_Reference_s* x, int n)
{
  struct zxmd_ds_DigestMethod_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->DigestMethod = (struct zxmd_ds_DigestMethod_s*)x->DigestMethod->gg.g.n;
    return;
  case -1:
    y = (struct zxmd_ds_DigestMethod_s*)x->DigestMethod;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zxmd_ds_DigestMethod_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->DigestMethod; n > 1 && y->gg.g.n; --n, y = (struct zxmd_ds_DigestMethod_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zxmd_ds_Reference_NUM_DigestValue) */

int zxmd_ds_Reference_NUM_DigestValue(struct zxmd_ds_Reference_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->DigestValue; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zxmd_ds_Reference_GET_DigestValue) */

struct zx_elem_s* zxmd_ds_Reference_GET_DigestValue(struct zxmd_ds_Reference_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->DigestValue; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zxmd_ds_Reference_POP_DigestValue) */

struct zx_elem_s* zxmd_ds_Reference_POP_DigestValue(struct zxmd_ds_Reference_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->DigestValue;
  if (y)
    x->DigestValue = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zxmd_ds_Reference_PUSH_DigestValue) */

void zxmd_ds_Reference_PUSH_DigestValue(struct zxmd_ds_Reference_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->DigestValue->g;
  x->DigestValue = z;
}

/* FUNC(zxmd_ds_Reference_REV_DigestValue) */

void zxmd_ds_Reference_REV_DigestValue(struct zxmd_ds_Reference_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->DigestValue;
  if (!y) return;
  x->DigestValue = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->DigestValue->g;
    x->DigestValue = y;
    y = nxt;
  }
}

/* FUNC(zxmd_ds_Reference_PUT_DigestValue) */

void zxmd_ds_Reference_PUT_DigestValue(struct zxmd_ds_Reference_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->DigestValue;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->DigestValue = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zxmd_ds_Reference_ADD_DigestValue) */

void zxmd_ds_Reference_ADD_DigestValue(struct zxmd_ds_Reference_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->DigestValue->g;
    x->DigestValue = z;
    return;
  case -1:
    y = x->DigestValue;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->DigestValue; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zxmd_ds_Reference_DEL_DigestValue) */

void zxmd_ds_Reference_DEL_DigestValue(struct zxmd_ds_Reference_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->DigestValue = (struct zx_elem_s*)x->DigestValue->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->DigestValue;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->DigestValue; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

/* FUNC(zxmd_ds_Reference_GET_Id) */
struct zx_str_s* zxmd_ds_Reference_GET_Id(struct zxmd_ds_Reference_s* x) { return x->Id; }
/* FUNC(zxmd_ds_Reference_PUT_Id) */
void zxmd_ds_Reference_PUT_Id(struct zxmd_ds_Reference_s* x, struct zx_str_s* y) { x->Id = y; }
/* FUNC(zxmd_ds_Reference_GET_URI) */
struct zx_str_s* zxmd_ds_Reference_GET_URI(struct zxmd_ds_Reference_s* x) { return x->URI; }
/* FUNC(zxmd_ds_Reference_PUT_URI) */
void zxmd_ds_Reference_PUT_URI(struct zxmd_ds_Reference_s* x, struct zx_str_s* y) { x->URI = y; }
/* FUNC(zxmd_ds_Reference_GET_Type) */
struct zx_str_s* zxmd_ds_Reference_GET_Type(struct zxmd_ds_Reference_s* x) { return x->Type; }
/* FUNC(zxmd_ds_Reference_PUT_Type) */
void zxmd_ds_Reference_PUT_Type(struct zxmd_ds_Reference_s* x, struct zx_str_s* y) { x->Type = y; }







/* FUNC(zxmd_ds_RetrievalMethod_NUM_Transforms) */

int zxmd_ds_RetrievalMethod_NUM_Transforms(struct zxmd_ds_RetrievalMethod_s* x)
{
  struct zxmd_ds_Transforms_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Transforms; y; ++n, y = (struct zxmd_ds_Transforms_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zxmd_ds_RetrievalMethod_GET_Transforms) */

struct zxmd_ds_Transforms_s* zxmd_ds_RetrievalMethod_GET_Transforms(struct zxmd_ds_RetrievalMethod_s* x, int n)
{
  struct zxmd_ds_Transforms_s* y;
  if (!x) return 0;
  for (y = x->Transforms; n>=0 && y; --n, y = (struct zxmd_ds_Transforms_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zxmd_ds_RetrievalMethod_POP_Transforms) */

struct zxmd_ds_Transforms_s* zxmd_ds_RetrievalMethod_POP_Transforms(struct zxmd_ds_RetrievalMethod_s* x)
{
  struct zxmd_ds_Transforms_s* y;
  if (!x) return 0;
  y = x->Transforms;
  if (y)
    x->Transforms = (struct zxmd_ds_Transforms_s*)y->gg.g.n;
  return y;
}

/* FUNC(zxmd_ds_RetrievalMethod_PUSH_Transforms) */

void zxmd_ds_RetrievalMethod_PUSH_Transforms(struct zxmd_ds_RetrievalMethod_s* x, struct zxmd_ds_Transforms_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Transforms->gg.g;
  x->Transforms = z;
}

/* FUNC(zxmd_ds_RetrievalMethod_REV_Transforms) */

void zxmd_ds_RetrievalMethod_REV_Transforms(struct zxmd_ds_RetrievalMethod_s* x)
{
  struct zxmd_ds_Transforms_s* nxt;
  struct zxmd_ds_Transforms_s* y;
  if (!x) return;
  y = x->Transforms;
  if (!y) return;
  x->Transforms = 0;
  while (y) {
    nxt = (struct zxmd_ds_Transforms_s*)y->gg.g.n;
    y->gg.g.n = &x->Transforms->gg.g;
    x->Transforms = y;
    y = nxt;
  }
}

/* FUNC(zxmd_ds_RetrievalMethod_PUT_Transforms) */

void zxmd_ds_RetrievalMethod_PUT_Transforms(struct zxmd_ds_RetrievalMethod_s* x, int n, struct zxmd_ds_Transforms_s* z)
{
  struct zxmd_ds_Transforms_s* y;
  if (!x || !z) return;
  y = x->Transforms;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Transforms = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zxmd_ds_Transforms_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zxmd_ds_RetrievalMethod_ADD_Transforms) */

void zxmd_ds_RetrievalMethod_ADD_Transforms(struct zxmd_ds_RetrievalMethod_s* x, int n, struct zxmd_ds_Transforms_s* z)
{
  struct zxmd_ds_Transforms_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->Transforms->gg.g;
    x->Transforms = z;
    return;
  case -1:
    y = x->Transforms;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zxmd_ds_Transforms_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Transforms; n > 1 && y; --n, y = (struct zxmd_ds_Transforms_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zxmd_ds_RetrievalMethod_DEL_Transforms) */

void zxmd_ds_RetrievalMethod_DEL_Transforms(struct zxmd_ds_RetrievalMethod_s* x, int n)
{
  struct zxmd_ds_Transforms_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Transforms = (struct zxmd_ds_Transforms_s*)x->Transforms->gg.g.n;
    return;
  case -1:
    y = (struct zxmd_ds_Transforms_s*)x->Transforms;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zxmd_ds_Transforms_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Transforms; n > 1 && y->gg.g.n; --n, y = (struct zxmd_ds_Transforms_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

/* FUNC(zxmd_ds_RetrievalMethod_GET_URI) */
struct zx_str_s* zxmd_ds_RetrievalMethod_GET_URI(struct zxmd_ds_RetrievalMethod_s* x) { return x->URI; }
/* FUNC(zxmd_ds_RetrievalMethod_PUT_URI) */
void zxmd_ds_RetrievalMethod_PUT_URI(struct zxmd_ds_RetrievalMethod_s* x, struct zx_str_s* y) { x->URI = y; }
/* FUNC(zxmd_ds_RetrievalMethod_GET_Type) */
struct zx_str_s* zxmd_ds_RetrievalMethod_GET_Type(struct zxmd_ds_RetrievalMethod_s* x) { return x->Type; }
/* FUNC(zxmd_ds_RetrievalMethod_PUT_Type) */
void zxmd_ds_RetrievalMethod_PUT_Type(struct zxmd_ds_RetrievalMethod_s* x, struct zx_str_s* y) { x->Type = y; }







/* FUNC(zxmd_ds_SPKIData_NUM_SPKISexp) */

int zxmd_ds_SPKIData_NUM_SPKISexp(struct zxmd_ds_SPKIData_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->SPKISexp; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zxmd_ds_SPKIData_GET_SPKISexp) */

struct zx_elem_s* zxmd_ds_SPKIData_GET_SPKISexp(struct zxmd_ds_SPKIData_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->SPKISexp; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zxmd_ds_SPKIData_POP_SPKISexp) */

struct zx_elem_s* zxmd_ds_SPKIData_POP_SPKISexp(struct zxmd_ds_SPKIData_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->SPKISexp;
  if (y)
    x->SPKISexp = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zxmd_ds_SPKIData_PUSH_SPKISexp) */

void zxmd_ds_SPKIData_PUSH_SPKISexp(struct zxmd_ds_SPKIData_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->SPKISexp->g;
  x->SPKISexp = z;
}

/* FUNC(zxmd_ds_SPKIData_REV_SPKISexp) */

void zxmd_ds_SPKIData_REV_SPKISexp(struct zxmd_ds_SPKIData_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->SPKISexp;
  if (!y) return;
  x->SPKISexp = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->SPKISexp->g;
    x->SPKISexp = y;
    y = nxt;
  }
}

/* FUNC(zxmd_ds_SPKIData_PUT_SPKISexp) */

void zxmd_ds_SPKIData_PUT_SPKISexp(struct zxmd_ds_SPKIData_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->SPKISexp;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->SPKISexp = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zxmd_ds_SPKIData_ADD_SPKISexp) */

void zxmd_ds_SPKIData_ADD_SPKISexp(struct zxmd_ds_SPKIData_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->SPKISexp->g;
    x->SPKISexp = z;
    return;
  case -1:
    y = x->SPKISexp;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->SPKISexp; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zxmd_ds_SPKIData_DEL_SPKISexp) */

void zxmd_ds_SPKIData_DEL_SPKISexp(struct zxmd_ds_SPKIData_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->SPKISexp = (struct zx_elem_s*)x->SPKISexp->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->SPKISexp;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->SPKISexp; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}








/* FUNC(zxmd_ds_Signature_NUM_SignedInfo) */

int zxmd_ds_Signature_NUM_SignedInfo(struct zxmd_ds_Signature_s* x)
{
  struct zxmd_ds_SignedInfo_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->SignedInfo; y; ++n, y = (struct zxmd_ds_SignedInfo_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zxmd_ds_Signature_GET_SignedInfo) */

struct zxmd_ds_SignedInfo_s* zxmd_ds_Signature_GET_SignedInfo(struct zxmd_ds_Signature_s* x, int n)
{
  struct zxmd_ds_SignedInfo_s* y;
  if (!x) return 0;
  for (y = x->SignedInfo; n>=0 && y; --n, y = (struct zxmd_ds_SignedInfo_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zxmd_ds_Signature_POP_SignedInfo) */

struct zxmd_ds_SignedInfo_s* zxmd_ds_Signature_POP_SignedInfo(struct zxmd_ds_Signature_s* x)
{
  struct zxmd_ds_SignedInfo_s* y;
  if (!x) return 0;
  y = x->SignedInfo;
  if (y)
    x->SignedInfo = (struct zxmd_ds_SignedInfo_s*)y->gg.g.n;
  return y;
}

/* FUNC(zxmd_ds_Signature_PUSH_SignedInfo) */

void zxmd_ds_Signature_PUSH_SignedInfo(struct zxmd_ds_Signature_s* x, struct zxmd_ds_SignedInfo_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->SignedInfo->gg.g;
  x->SignedInfo = z;
}

/* FUNC(zxmd_ds_Signature_REV_SignedInfo) */

void zxmd_ds_Signature_REV_SignedInfo(struct zxmd_ds_Signature_s* x)
{
  struct zxmd_ds_SignedInfo_s* nxt;
  struct zxmd_ds_SignedInfo_s* y;
  if (!x) return;
  y = x->SignedInfo;
  if (!y) return;
  x->SignedInfo = 0;
  while (y) {
    nxt = (struct zxmd_ds_SignedInfo_s*)y->gg.g.n;
    y->gg.g.n = &x->SignedInfo->gg.g;
    x->SignedInfo = y;
    y = nxt;
  }
}

/* FUNC(zxmd_ds_Signature_PUT_SignedInfo) */

void zxmd_ds_Signature_PUT_SignedInfo(struct zxmd_ds_Signature_s* x, int n, struct zxmd_ds_SignedInfo_s* z)
{
  struct zxmd_ds_SignedInfo_s* y;
  if (!x || !z) return;
  y = x->SignedInfo;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->SignedInfo = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zxmd_ds_SignedInfo_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zxmd_ds_Signature_ADD_SignedInfo) */

void zxmd_ds_Signature_ADD_SignedInfo(struct zxmd_ds_Signature_s* x, int n, struct zxmd_ds_SignedInfo_s* z)
{
  struct zxmd_ds_SignedInfo_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->SignedInfo->gg.g;
    x->SignedInfo = z;
    return;
  case -1:
    y = x->SignedInfo;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zxmd_ds_SignedInfo_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->SignedInfo; n > 1 && y; --n, y = (struct zxmd_ds_SignedInfo_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zxmd_ds_Signature_DEL_SignedInfo) */

void zxmd_ds_Signature_DEL_SignedInfo(struct zxmd_ds_Signature_s* x, int n)
{
  struct zxmd_ds_SignedInfo_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->SignedInfo = (struct zxmd_ds_SignedInfo_s*)x->SignedInfo->gg.g.n;
    return;
  case -1:
    y = (struct zxmd_ds_SignedInfo_s*)x->SignedInfo;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zxmd_ds_SignedInfo_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->SignedInfo; n > 1 && y->gg.g.n; --n, y = (struct zxmd_ds_SignedInfo_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zxmd_ds_Signature_NUM_SignatureValue) */

int zxmd_ds_Signature_NUM_SignatureValue(struct zxmd_ds_Signature_s* x)
{
  struct zxmd_ds_SignatureValue_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->SignatureValue; y; ++n, y = (struct zxmd_ds_SignatureValue_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zxmd_ds_Signature_GET_SignatureValue) */

struct zxmd_ds_SignatureValue_s* zxmd_ds_Signature_GET_SignatureValue(struct zxmd_ds_Signature_s* x, int n)
{
  struct zxmd_ds_SignatureValue_s* y;
  if (!x) return 0;
  for (y = x->SignatureValue; n>=0 && y; --n, y = (struct zxmd_ds_SignatureValue_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zxmd_ds_Signature_POP_SignatureValue) */

struct zxmd_ds_SignatureValue_s* zxmd_ds_Signature_POP_SignatureValue(struct zxmd_ds_Signature_s* x)
{
  struct zxmd_ds_SignatureValue_s* y;
  if (!x) return 0;
  y = x->SignatureValue;
  if (y)
    x->SignatureValue = (struct zxmd_ds_SignatureValue_s*)y->gg.g.n;
  return y;
}

/* FUNC(zxmd_ds_Signature_PUSH_SignatureValue) */

void zxmd_ds_Signature_PUSH_SignatureValue(struct zxmd_ds_Signature_s* x, struct zxmd_ds_SignatureValue_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->SignatureValue->gg.g;
  x->SignatureValue = z;
}

/* FUNC(zxmd_ds_Signature_REV_SignatureValue) */

void zxmd_ds_Signature_REV_SignatureValue(struct zxmd_ds_Signature_s* x)
{
  struct zxmd_ds_SignatureValue_s* nxt;
  struct zxmd_ds_SignatureValue_s* y;
  if (!x) return;
  y = x->SignatureValue;
  if (!y) return;
  x->SignatureValue = 0;
  while (y) {
    nxt = (struct zxmd_ds_SignatureValue_s*)y->gg.g.n;
    y->gg.g.n = &x->SignatureValue->gg.g;
    x->SignatureValue = y;
    y = nxt;
  }
}

/* FUNC(zxmd_ds_Signature_PUT_SignatureValue) */

void zxmd_ds_Signature_PUT_SignatureValue(struct zxmd_ds_Signature_s* x, int n, struct zxmd_ds_SignatureValue_s* z)
{
  struct zxmd_ds_SignatureValue_s* y;
  if (!x || !z) return;
  y = x->SignatureValue;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->SignatureValue = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zxmd_ds_SignatureValue_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zxmd_ds_Signature_ADD_SignatureValue) */

void zxmd_ds_Signature_ADD_SignatureValue(struct zxmd_ds_Signature_s* x, int n, struct zxmd_ds_SignatureValue_s* z)
{
  struct zxmd_ds_SignatureValue_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->SignatureValue->gg.g;
    x->SignatureValue = z;
    return;
  case -1:
    y = x->SignatureValue;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zxmd_ds_SignatureValue_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->SignatureValue; n > 1 && y; --n, y = (struct zxmd_ds_SignatureValue_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zxmd_ds_Signature_DEL_SignatureValue) */

void zxmd_ds_Signature_DEL_SignatureValue(struct zxmd_ds_Signature_s* x, int n)
{
  struct zxmd_ds_SignatureValue_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->SignatureValue = (struct zxmd_ds_SignatureValue_s*)x->SignatureValue->gg.g.n;
    return;
  case -1:
    y = (struct zxmd_ds_SignatureValue_s*)x->SignatureValue;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zxmd_ds_SignatureValue_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->SignatureValue; n > 1 && y->gg.g.n; --n, y = (struct zxmd_ds_SignatureValue_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zxmd_ds_Signature_NUM_KeyInfo) */

int zxmd_ds_Signature_NUM_KeyInfo(struct zxmd_ds_Signature_s* x)
{
  struct zxmd_ds_KeyInfo_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->KeyInfo; y; ++n, y = (struct zxmd_ds_KeyInfo_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zxmd_ds_Signature_GET_KeyInfo) */

struct zxmd_ds_KeyInfo_s* zxmd_ds_Signature_GET_KeyInfo(struct zxmd_ds_Signature_s* x, int n)
{
  struct zxmd_ds_KeyInfo_s* y;
  if (!x) return 0;
  for (y = x->KeyInfo; n>=0 && y; --n, y = (struct zxmd_ds_KeyInfo_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zxmd_ds_Signature_POP_KeyInfo) */

struct zxmd_ds_KeyInfo_s* zxmd_ds_Signature_POP_KeyInfo(struct zxmd_ds_Signature_s* x)
{
  struct zxmd_ds_KeyInfo_s* y;
  if (!x) return 0;
  y = x->KeyInfo;
  if (y)
    x->KeyInfo = (struct zxmd_ds_KeyInfo_s*)y->gg.g.n;
  return y;
}

/* FUNC(zxmd_ds_Signature_PUSH_KeyInfo) */

void zxmd_ds_Signature_PUSH_KeyInfo(struct zxmd_ds_Signature_s* x, struct zxmd_ds_KeyInfo_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->KeyInfo->gg.g;
  x->KeyInfo = z;
}

/* FUNC(zxmd_ds_Signature_REV_KeyInfo) */

void zxmd_ds_Signature_REV_KeyInfo(struct zxmd_ds_Signature_s* x)
{
  struct zxmd_ds_KeyInfo_s* nxt;
  struct zxmd_ds_KeyInfo_s* y;
  if (!x) return;
  y = x->KeyInfo;
  if (!y) return;
  x->KeyInfo = 0;
  while (y) {
    nxt = (struct zxmd_ds_KeyInfo_s*)y->gg.g.n;
    y->gg.g.n = &x->KeyInfo->gg.g;
    x->KeyInfo = y;
    y = nxt;
  }
}

/* FUNC(zxmd_ds_Signature_PUT_KeyInfo) */

void zxmd_ds_Signature_PUT_KeyInfo(struct zxmd_ds_Signature_s* x, int n, struct zxmd_ds_KeyInfo_s* z)
{
  struct zxmd_ds_KeyInfo_s* y;
  if (!x || !z) return;
  y = x->KeyInfo;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->KeyInfo = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zxmd_ds_KeyInfo_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zxmd_ds_Signature_ADD_KeyInfo) */

void zxmd_ds_Signature_ADD_KeyInfo(struct zxmd_ds_Signature_s* x, int n, struct zxmd_ds_KeyInfo_s* z)
{
  struct zxmd_ds_KeyInfo_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->KeyInfo->gg.g;
    x->KeyInfo = z;
    return;
  case -1:
    y = x->KeyInfo;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zxmd_ds_KeyInfo_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->KeyInfo; n > 1 && y; --n, y = (struct zxmd_ds_KeyInfo_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zxmd_ds_Signature_DEL_KeyInfo) */

void zxmd_ds_Signature_DEL_KeyInfo(struct zxmd_ds_Signature_s* x, int n)
{
  struct zxmd_ds_KeyInfo_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->KeyInfo = (struct zxmd_ds_KeyInfo_s*)x->KeyInfo->gg.g.n;
    return;
  case -1:
    y = (struct zxmd_ds_KeyInfo_s*)x->KeyInfo;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zxmd_ds_KeyInfo_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->KeyInfo; n > 1 && y->gg.g.n; --n, y = (struct zxmd_ds_KeyInfo_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zxmd_ds_Signature_NUM_Object) */

int zxmd_ds_Signature_NUM_Object(struct zxmd_ds_Signature_s* x)
{
  struct zxmd_ds_Object_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Object; y; ++n, y = (struct zxmd_ds_Object_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zxmd_ds_Signature_GET_Object) */

struct zxmd_ds_Object_s* zxmd_ds_Signature_GET_Object(struct zxmd_ds_Signature_s* x, int n)
{
  struct zxmd_ds_Object_s* y;
  if (!x) return 0;
  for (y = x->Object; n>=0 && y; --n, y = (struct zxmd_ds_Object_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zxmd_ds_Signature_POP_Object) */

struct zxmd_ds_Object_s* zxmd_ds_Signature_POP_Object(struct zxmd_ds_Signature_s* x)
{
  struct zxmd_ds_Object_s* y;
  if (!x) return 0;
  y = x->Object;
  if (y)
    x->Object = (struct zxmd_ds_Object_s*)y->gg.g.n;
  return y;
}

/* FUNC(zxmd_ds_Signature_PUSH_Object) */

void zxmd_ds_Signature_PUSH_Object(struct zxmd_ds_Signature_s* x, struct zxmd_ds_Object_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Object->gg.g;
  x->Object = z;
}

/* FUNC(zxmd_ds_Signature_REV_Object) */

void zxmd_ds_Signature_REV_Object(struct zxmd_ds_Signature_s* x)
{
  struct zxmd_ds_Object_s* nxt;
  struct zxmd_ds_Object_s* y;
  if (!x) return;
  y = x->Object;
  if (!y) return;
  x->Object = 0;
  while (y) {
    nxt = (struct zxmd_ds_Object_s*)y->gg.g.n;
    y->gg.g.n = &x->Object->gg.g;
    x->Object = y;
    y = nxt;
  }
}

/* FUNC(zxmd_ds_Signature_PUT_Object) */

void zxmd_ds_Signature_PUT_Object(struct zxmd_ds_Signature_s* x, int n, struct zxmd_ds_Object_s* z)
{
  struct zxmd_ds_Object_s* y;
  if (!x || !z) return;
  y = x->Object;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Object = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zxmd_ds_Object_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zxmd_ds_Signature_ADD_Object) */

void zxmd_ds_Signature_ADD_Object(struct zxmd_ds_Signature_s* x, int n, struct zxmd_ds_Object_s* z)
{
  struct zxmd_ds_Object_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->Object->gg.g;
    x->Object = z;
    return;
  case -1:
    y = x->Object;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zxmd_ds_Object_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Object; n > 1 && y; --n, y = (struct zxmd_ds_Object_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zxmd_ds_Signature_DEL_Object) */

void zxmd_ds_Signature_DEL_Object(struct zxmd_ds_Signature_s* x, int n)
{
  struct zxmd_ds_Object_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Object = (struct zxmd_ds_Object_s*)x->Object->gg.g.n;
    return;
  case -1:
    y = (struct zxmd_ds_Object_s*)x->Object;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zxmd_ds_Object_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Object; n > 1 && y->gg.g.n; --n, y = (struct zxmd_ds_Object_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

/* FUNC(zxmd_ds_Signature_GET_Id) */
struct zx_str_s* zxmd_ds_Signature_GET_Id(struct zxmd_ds_Signature_s* x) { return x->Id; }
/* FUNC(zxmd_ds_Signature_PUT_Id) */
void zxmd_ds_Signature_PUT_Id(struct zxmd_ds_Signature_s* x, struct zx_str_s* y) { x->Id = y; }







/* FUNC(zxmd_ds_SignatureMethod_NUM_HMACOutputLength) */

int zxmd_ds_SignatureMethod_NUM_HMACOutputLength(struct zxmd_ds_SignatureMethod_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->HMACOutputLength; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zxmd_ds_SignatureMethod_GET_HMACOutputLength) */

struct zx_elem_s* zxmd_ds_SignatureMethod_GET_HMACOutputLength(struct zxmd_ds_SignatureMethod_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->HMACOutputLength; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zxmd_ds_SignatureMethod_POP_HMACOutputLength) */

struct zx_elem_s* zxmd_ds_SignatureMethod_POP_HMACOutputLength(struct zxmd_ds_SignatureMethod_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->HMACOutputLength;
  if (y)
    x->HMACOutputLength = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zxmd_ds_SignatureMethod_PUSH_HMACOutputLength) */

void zxmd_ds_SignatureMethod_PUSH_HMACOutputLength(struct zxmd_ds_SignatureMethod_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->HMACOutputLength->g;
  x->HMACOutputLength = z;
}

/* FUNC(zxmd_ds_SignatureMethod_REV_HMACOutputLength) */

void zxmd_ds_SignatureMethod_REV_HMACOutputLength(struct zxmd_ds_SignatureMethod_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->HMACOutputLength;
  if (!y) return;
  x->HMACOutputLength = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->HMACOutputLength->g;
    x->HMACOutputLength = y;
    y = nxt;
  }
}

/* FUNC(zxmd_ds_SignatureMethod_PUT_HMACOutputLength) */

void zxmd_ds_SignatureMethod_PUT_HMACOutputLength(struct zxmd_ds_SignatureMethod_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->HMACOutputLength;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->HMACOutputLength = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zxmd_ds_SignatureMethod_ADD_HMACOutputLength) */

void zxmd_ds_SignatureMethod_ADD_HMACOutputLength(struct zxmd_ds_SignatureMethod_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->HMACOutputLength->g;
    x->HMACOutputLength = z;
    return;
  case -1:
    y = x->HMACOutputLength;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->HMACOutputLength; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zxmd_ds_SignatureMethod_DEL_HMACOutputLength) */

void zxmd_ds_SignatureMethod_DEL_HMACOutputLength(struct zxmd_ds_SignatureMethod_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->HMACOutputLength = (struct zx_elem_s*)x->HMACOutputLength->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->HMACOutputLength;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->HMACOutputLength; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

/* FUNC(zxmd_ds_SignatureMethod_GET_Algorithm) */
struct zx_str_s* zxmd_ds_SignatureMethod_GET_Algorithm(struct zxmd_ds_SignatureMethod_s* x) { return x->Algorithm; }
/* FUNC(zxmd_ds_SignatureMethod_PUT_Algorithm) */
void zxmd_ds_SignatureMethod_PUT_Algorithm(struct zxmd_ds_SignatureMethod_s* x, struct zx_str_s* y) { x->Algorithm = y; }







/* FUNC(zxmd_ds_SignatureProperties_NUM_SignatureProperty) */

int zxmd_ds_SignatureProperties_NUM_SignatureProperty(struct zxmd_ds_SignatureProperties_s* x)
{
  struct zxmd_ds_SignatureProperty_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->SignatureProperty; y; ++n, y = (struct zxmd_ds_SignatureProperty_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zxmd_ds_SignatureProperties_GET_SignatureProperty) */

struct zxmd_ds_SignatureProperty_s* zxmd_ds_SignatureProperties_GET_SignatureProperty(struct zxmd_ds_SignatureProperties_s* x, int n)
{
  struct zxmd_ds_SignatureProperty_s* y;
  if (!x) return 0;
  for (y = x->SignatureProperty; n>=0 && y; --n, y = (struct zxmd_ds_SignatureProperty_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zxmd_ds_SignatureProperties_POP_SignatureProperty) */

struct zxmd_ds_SignatureProperty_s* zxmd_ds_SignatureProperties_POP_SignatureProperty(struct zxmd_ds_SignatureProperties_s* x)
{
  struct zxmd_ds_SignatureProperty_s* y;
  if (!x) return 0;
  y = x->SignatureProperty;
  if (y)
    x->SignatureProperty = (struct zxmd_ds_SignatureProperty_s*)y->gg.g.n;
  return y;
}

/* FUNC(zxmd_ds_SignatureProperties_PUSH_SignatureProperty) */

void zxmd_ds_SignatureProperties_PUSH_SignatureProperty(struct zxmd_ds_SignatureProperties_s* x, struct zxmd_ds_SignatureProperty_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->SignatureProperty->gg.g;
  x->SignatureProperty = z;
}

/* FUNC(zxmd_ds_SignatureProperties_REV_SignatureProperty) */

void zxmd_ds_SignatureProperties_REV_SignatureProperty(struct zxmd_ds_SignatureProperties_s* x)
{
  struct zxmd_ds_SignatureProperty_s* nxt;
  struct zxmd_ds_SignatureProperty_s* y;
  if (!x) return;
  y = x->SignatureProperty;
  if (!y) return;
  x->SignatureProperty = 0;
  while (y) {
    nxt = (struct zxmd_ds_SignatureProperty_s*)y->gg.g.n;
    y->gg.g.n = &x->SignatureProperty->gg.g;
    x->SignatureProperty = y;
    y = nxt;
  }
}

/* FUNC(zxmd_ds_SignatureProperties_PUT_SignatureProperty) */

void zxmd_ds_SignatureProperties_PUT_SignatureProperty(struct zxmd_ds_SignatureProperties_s* x, int n, struct zxmd_ds_SignatureProperty_s* z)
{
  struct zxmd_ds_SignatureProperty_s* y;
  if (!x || !z) return;
  y = x->SignatureProperty;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->SignatureProperty = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zxmd_ds_SignatureProperty_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zxmd_ds_SignatureProperties_ADD_SignatureProperty) */

void zxmd_ds_SignatureProperties_ADD_SignatureProperty(struct zxmd_ds_SignatureProperties_s* x, int n, struct zxmd_ds_SignatureProperty_s* z)
{
  struct zxmd_ds_SignatureProperty_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->SignatureProperty->gg.g;
    x->SignatureProperty = z;
    return;
  case -1:
    y = x->SignatureProperty;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zxmd_ds_SignatureProperty_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->SignatureProperty; n > 1 && y; --n, y = (struct zxmd_ds_SignatureProperty_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zxmd_ds_SignatureProperties_DEL_SignatureProperty) */

void zxmd_ds_SignatureProperties_DEL_SignatureProperty(struct zxmd_ds_SignatureProperties_s* x, int n)
{
  struct zxmd_ds_SignatureProperty_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->SignatureProperty = (struct zxmd_ds_SignatureProperty_s*)x->SignatureProperty->gg.g.n;
    return;
  case -1:
    y = (struct zxmd_ds_SignatureProperty_s*)x->SignatureProperty;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zxmd_ds_SignatureProperty_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->SignatureProperty; n > 1 && y->gg.g.n; --n, y = (struct zxmd_ds_SignatureProperty_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

/* FUNC(zxmd_ds_SignatureProperties_GET_Id) */
struct zx_str_s* zxmd_ds_SignatureProperties_GET_Id(struct zxmd_ds_SignatureProperties_s* x) { return x->Id; }
/* FUNC(zxmd_ds_SignatureProperties_PUT_Id) */
void zxmd_ds_SignatureProperties_PUT_Id(struct zxmd_ds_SignatureProperties_s* x, struct zx_str_s* y) { x->Id = y; }





/* FUNC(zxmd_ds_SignatureProperty_GET_Target) */
struct zx_str_s* zxmd_ds_SignatureProperty_GET_Target(struct zxmd_ds_SignatureProperty_s* x) { return x->Target; }
/* FUNC(zxmd_ds_SignatureProperty_PUT_Target) */
void zxmd_ds_SignatureProperty_PUT_Target(struct zxmd_ds_SignatureProperty_s* x, struct zx_str_s* y) { x->Target = y; }
/* FUNC(zxmd_ds_SignatureProperty_GET_Id) */
struct zx_str_s* zxmd_ds_SignatureProperty_GET_Id(struct zxmd_ds_SignatureProperty_s* x) { return x->Id; }
/* FUNC(zxmd_ds_SignatureProperty_PUT_Id) */
void zxmd_ds_SignatureProperty_PUT_Id(struct zxmd_ds_SignatureProperty_s* x, struct zx_str_s* y) { x->Id = y; }





/* FUNC(zxmd_ds_SignatureValue_GET_Id) */
struct zx_str_s* zxmd_ds_SignatureValue_GET_Id(struct zxmd_ds_SignatureValue_s* x) { return x->Id; }
/* FUNC(zxmd_ds_SignatureValue_PUT_Id) */
void zxmd_ds_SignatureValue_PUT_Id(struct zxmd_ds_SignatureValue_s* x, struct zx_str_s* y) { x->Id = y; }







/* FUNC(zxmd_ds_SignedInfo_NUM_CanonicalizationMethod) */

int zxmd_ds_SignedInfo_NUM_CanonicalizationMethod(struct zxmd_ds_SignedInfo_s* x)
{
  struct zxmd_ds_CanonicalizationMethod_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->CanonicalizationMethod; y; ++n, y = (struct zxmd_ds_CanonicalizationMethod_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zxmd_ds_SignedInfo_GET_CanonicalizationMethod) */

struct zxmd_ds_CanonicalizationMethod_s* zxmd_ds_SignedInfo_GET_CanonicalizationMethod(struct zxmd_ds_SignedInfo_s* x, int n)
{
  struct zxmd_ds_CanonicalizationMethod_s* y;
  if (!x) return 0;
  for (y = x->CanonicalizationMethod; n>=0 && y; --n, y = (struct zxmd_ds_CanonicalizationMethod_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zxmd_ds_SignedInfo_POP_CanonicalizationMethod) */

struct zxmd_ds_CanonicalizationMethod_s* zxmd_ds_SignedInfo_POP_CanonicalizationMethod(struct zxmd_ds_SignedInfo_s* x)
{
  struct zxmd_ds_CanonicalizationMethod_s* y;
  if (!x) return 0;
  y = x->CanonicalizationMethod;
  if (y)
    x->CanonicalizationMethod = (struct zxmd_ds_CanonicalizationMethod_s*)y->gg.g.n;
  return y;
}

/* FUNC(zxmd_ds_SignedInfo_PUSH_CanonicalizationMethod) */

void zxmd_ds_SignedInfo_PUSH_CanonicalizationMethod(struct zxmd_ds_SignedInfo_s* x, struct zxmd_ds_CanonicalizationMethod_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->CanonicalizationMethod->gg.g;
  x->CanonicalizationMethod = z;
}

/* FUNC(zxmd_ds_SignedInfo_REV_CanonicalizationMethod) */

void zxmd_ds_SignedInfo_REV_CanonicalizationMethod(struct zxmd_ds_SignedInfo_s* x)
{
  struct zxmd_ds_CanonicalizationMethod_s* nxt;
  struct zxmd_ds_CanonicalizationMethod_s* y;
  if (!x) return;
  y = x->CanonicalizationMethod;
  if (!y) return;
  x->CanonicalizationMethod = 0;
  while (y) {
    nxt = (struct zxmd_ds_CanonicalizationMethod_s*)y->gg.g.n;
    y->gg.g.n = &x->CanonicalizationMethod->gg.g;
    x->CanonicalizationMethod = y;
    y = nxt;
  }
}

/* FUNC(zxmd_ds_SignedInfo_PUT_CanonicalizationMethod) */

void zxmd_ds_SignedInfo_PUT_CanonicalizationMethod(struct zxmd_ds_SignedInfo_s* x, int n, struct zxmd_ds_CanonicalizationMethod_s* z)
{
  struct zxmd_ds_CanonicalizationMethod_s* y;
  if (!x || !z) return;
  y = x->CanonicalizationMethod;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->CanonicalizationMethod = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zxmd_ds_CanonicalizationMethod_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zxmd_ds_SignedInfo_ADD_CanonicalizationMethod) */

void zxmd_ds_SignedInfo_ADD_CanonicalizationMethod(struct zxmd_ds_SignedInfo_s* x, int n, struct zxmd_ds_CanonicalizationMethod_s* z)
{
  struct zxmd_ds_CanonicalizationMethod_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->CanonicalizationMethod->gg.g;
    x->CanonicalizationMethod = z;
    return;
  case -1:
    y = x->CanonicalizationMethod;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zxmd_ds_CanonicalizationMethod_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->CanonicalizationMethod; n > 1 && y; --n, y = (struct zxmd_ds_CanonicalizationMethod_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zxmd_ds_SignedInfo_DEL_CanonicalizationMethod) */

void zxmd_ds_SignedInfo_DEL_CanonicalizationMethod(struct zxmd_ds_SignedInfo_s* x, int n)
{
  struct zxmd_ds_CanonicalizationMethod_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->CanonicalizationMethod = (struct zxmd_ds_CanonicalizationMethod_s*)x->CanonicalizationMethod->gg.g.n;
    return;
  case -1:
    y = (struct zxmd_ds_CanonicalizationMethod_s*)x->CanonicalizationMethod;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zxmd_ds_CanonicalizationMethod_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->CanonicalizationMethod; n > 1 && y->gg.g.n; --n, y = (struct zxmd_ds_CanonicalizationMethod_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zxmd_ds_SignedInfo_NUM_SignatureMethod) */

int zxmd_ds_SignedInfo_NUM_SignatureMethod(struct zxmd_ds_SignedInfo_s* x)
{
  struct zxmd_ds_SignatureMethod_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->SignatureMethod; y; ++n, y = (struct zxmd_ds_SignatureMethod_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zxmd_ds_SignedInfo_GET_SignatureMethod) */

struct zxmd_ds_SignatureMethod_s* zxmd_ds_SignedInfo_GET_SignatureMethod(struct zxmd_ds_SignedInfo_s* x, int n)
{
  struct zxmd_ds_SignatureMethod_s* y;
  if (!x) return 0;
  for (y = x->SignatureMethod; n>=0 && y; --n, y = (struct zxmd_ds_SignatureMethod_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zxmd_ds_SignedInfo_POP_SignatureMethod) */

struct zxmd_ds_SignatureMethod_s* zxmd_ds_SignedInfo_POP_SignatureMethod(struct zxmd_ds_SignedInfo_s* x)
{
  struct zxmd_ds_SignatureMethod_s* y;
  if (!x) return 0;
  y = x->SignatureMethod;
  if (y)
    x->SignatureMethod = (struct zxmd_ds_SignatureMethod_s*)y->gg.g.n;
  return y;
}

/* FUNC(zxmd_ds_SignedInfo_PUSH_SignatureMethod) */

void zxmd_ds_SignedInfo_PUSH_SignatureMethod(struct zxmd_ds_SignedInfo_s* x, struct zxmd_ds_SignatureMethod_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->SignatureMethod->gg.g;
  x->SignatureMethod = z;
}

/* FUNC(zxmd_ds_SignedInfo_REV_SignatureMethod) */

void zxmd_ds_SignedInfo_REV_SignatureMethod(struct zxmd_ds_SignedInfo_s* x)
{
  struct zxmd_ds_SignatureMethod_s* nxt;
  struct zxmd_ds_SignatureMethod_s* y;
  if (!x) return;
  y = x->SignatureMethod;
  if (!y) return;
  x->SignatureMethod = 0;
  while (y) {
    nxt = (struct zxmd_ds_SignatureMethod_s*)y->gg.g.n;
    y->gg.g.n = &x->SignatureMethod->gg.g;
    x->SignatureMethod = y;
    y = nxt;
  }
}

/* FUNC(zxmd_ds_SignedInfo_PUT_SignatureMethod) */

void zxmd_ds_SignedInfo_PUT_SignatureMethod(struct zxmd_ds_SignedInfo_s* x, int n, struct zxmd_ds_SignatureMethod_s* z)
{
  struct zxmd_ds_SignatureMethod_s* y;
  if (!x || !z) return;
  y = x->SignatureMethod;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->SignatureMethod = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zxmd_ds_SignatureMethod_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zxmd_ds_SignedInfo_ADD_SignatureMethod) */

void zxmd_ds_SignedInfo_ADD_SignatureMethod(struct zxmd_ds_SignedInfo_s* x, int n, struct zxmd_ds_SignatureMethod_s* z)
{
  struct zxmd_ds_SignatureMethod_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->SignatureMethod->gg.g;
    x->SignatureMethod = z;
    return;
  case -1:
    y = x->SignatureMethod;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zxmd_ds_SignatureMethod_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->SignatureMethod; n > 1 && y; --n, y = (struct zxmd_ds_SignatureMethod_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zxmd_ds_SignedInfo_DEL_SignatureMethod) */

void zxmd_ds_SignedInfo_DEL_SignatureMethod(struct zxmd_ds_SignedInfo_s* x, int n)
{
  struct zxmd_ds_SignatureMethod_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->SignatureMethod = (struct zxmd_ds_SignatureMethod_s*)x->SignatureMethod->gg.g.n;
    return;
  case -1:
    y = (struct zxmd_ds_SignatureMethod_s*)x->SignatureMethod;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zxmd_ds_SignatureMethod_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->SignatureMethod; n > 1 && y->gg.g.n; --n, y = (struct zxmd_ds_SignatureMethod_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zxmd_ds_SignedInfo_NUM_Reference) */

int zxmd_ds_SignedInfo_NUM_Reference(struct zxmd_ds_SignedInfo_s* x)
{
  struct zxmd_ds_Reference_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Reference; y; ++n, y = (struct zxmd_ds_Reference_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zxmd_ds_SignedInfo_GET_Reference) */

struct zxmd_ds_Reference_s* zxmd_ds_SignedInfo_GET_Reference(struct zxmd_ds_SignedInfo_s* x, int n)
{
  struct zxmd_ds_Reference_s* y;
  if (!x) return 0;
  for (y = x->Reference; n>=0 && y; --n, y = (struct zxmd_ds_Reference_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zxmd_ds_SignedInfo_POP_Reference) */

struct zxmd_ds_Reference_s* zxmd_ds_SignedInfo_POP_Reference(struct zxmd_ds_SignedInfo_s* x)
{
  struct zxmd_ds_Reference_s* y;
  if (!x) return 0;
  y = x->Reference;
  if (y)
    x->Reference = (struct zxmd_ds_Reference_s*)y->gg.g.n;
  return y;
}

/* FUNC(zxmd_ds_SignedInfo_PUSH_Reference) */

void zxmd_ds_SignedInfo_PUSH_Reference(struct zxmd_ds_SignedInfo_s* x, struct zxmd_ds_Reference_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Reference->gg.g;
  x->Reference = z;
}

/* FUNC(zxmd_ds_SignedInfo_REV_Reference) */

void zxmd_ds_SignedInfo_REV_Reference(struct zxmd_ds_SignedInfo_s* x)
{
  struct zxmd_ds_Reference_s* nxt;
  struct zxmd_ds_Reference_s* y;
  if (!x) return;
  y = x->Reference;
  if (!y) return;
  x->Reference = 0;
  while (y) {
    nxt = (struct zxmd_ds_Reference_s*)y->gg.g.n;
    y->gg.g.n = &x->Reference->gg.g;
    x->Reference = y;
    y = nxt;
  }
}

/* FUNC(zxmd_ds_SignedInfo_PUT_Reference) */

void zxmd_ds_SignedInfo_PUT_Reference(struct zxmd_ds_SignedInfo_s* x, int n, struct zxmd_ds_Reference_s* z)
{
  struct zxmd_ds_Reference_s* y;
  if (!x || !z) return;
  y = x->Reference;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Reference = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zxmd_ds_Reference_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zxmd_ds_SignedInfo_ADD_Reference) */

void zxmd_ds_SignedInfo_ADD_Reference(struct zxmd_ds_SignedInfo_s* x, int n, struct zxmd_ds_Reference_s* z)
{
  struct zxmd_ds_Reference_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->Reference->gg.g;
    x->Reference = z;
    return;
  case -1:
    y = x->Reference;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zxmd_ds_Reference_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Reference; n > 1 && y; --n, y = (struct zxmd_ds_Reference_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zxmd_ds_SignedInfo_DEL_Reference) */

void zxmd_ds_SignedInfo_DEL_Reference(struct zxmd_ds_SignedInfo_s* x, int n)
{
  struct zxmd_ds_Reference_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Reference = (struct zxmd_ds_Reference_s*)x->Reference->gg.g.n;
    return;
  case -1:
    y = (struct zxmd_ds_Reference_s*)x->Reference;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zxmd_ds_Reference_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Reference; n > 1 && y->gg.g.n; --n, y = (struct zxmd_ds_Reference_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

/* FUNC(zxmd_ds_SignedInfo_GET_Id) */
struct zx_str_s* zxmd_ds_SignedInfo_GET_Id(struct zxmd_ds_SignedInfo_s* x) { return x->Id; }
/* FUNC(zxmd_ds_SignedInfo_PUT_Id) */
void zxmd_ds_SignedInfo_PUT_Id(struct zxmd_ds_SignedInfo_s* x, struct zx_str_s* y) { x->Id = y; }







/* FUNC(zxmd_ds_Transform_NUM_XPath) */

int zxmd_ds_Transform_NUM_XPath(struct zxmd_ds_Transform_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->XPath; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zxmd_ds_Transform_GET_XPath) */

struct zx_elem_s* zxmd_ds_Transform_GET_XPath(struct zxmd_ds_Transform_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->XPath; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zxmd_ds_Transform_POP_XPath) */

struct zx_elem_s* zxmd_ds_Transform_POP_XPath(struct zxmd_ds_Transform_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->XPath;
  if (y)
    x->XPath = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zxmd_ds_Transform_PUSH_XPath) */

void zxmd_ds_Transform_PUSH_XPath(struct zxmd_ds_Transform_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->XPath->g;
  x->XPath = z;
}

/* FUNC(zxmd_ds_Transform_REV_XPath) */

void zxmd_ds_Transform_REV_XPath(struct zxmd_ds_Transform_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->XPath;
  if (!y) return;
  x->XPath = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->XPath->g;
    x->XPath = y;
    y = nxt;
  }
}

/* FUNC(zxmd_ds_Transform_PUT_XPath) */

void zxmd_ds_Transform_PUT_XPath(struct zxmd_ds_Transform_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->XPath;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->XPath = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zxmd_ds_Transform_ADD_XPath) */

void zxmd_ds_Transform_ADD_XPath(struct zxmd_ds_Transform_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->XPath->g;
    x->XPath = z;
    return;
  case -1:
    y = x->XPath;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->XPath; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zxmd_ds_Transform_DEL_XPath) */

void zxmd_ds_Transform_DEL_XPath(struct zxmd_ds_Transform_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->XPath = (struct zx_elem_s*)x->XPath->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->XPath;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->XPath; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

/* FUNC(zxmd_ds_Transform_GET_Algorithm) */
struct zx_str_s* zxmd_ds_Transform_GET_Algorithm(struct zxmd_ds_Transform_s* x) { return x->Algorithm; }
/* FUNC(zxmd_ds_Transform_PUT_Algorithm) */
void zxmd_ds_Transform_PUT_Algorithm(struct zxmd_ds_Transform_s* x, struct zx_str_s* y) { x->Algorithm = y; }







/* FUNC(zxmd_ds_Transforms_NUM_Transform) */

int zxmd_ds_Transforms_NUM_Transform(struct zxmd_ds_Transforms_s* x)
{
  struct zxmd_ds_Transform_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Transform; y; ++n, y = (struct zxmd_ds_Transform_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zxmd_ds_Transforms_GET_Transform) */

struct zxmd_ds_Transform_s* zxmd_ds_Transforms_GET_Transform(struct zxmd_ds_Transforms_s* x, int n)
{
  struct zxmd_ds_Transform_s* y;
  if (!x) return 0;
  for (y = x->Transform; n>=0 && y; --n, y = (struct zxmd_ds_Transform_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zxmd_ds_Transforms_POP_Transform) */

struct zxmd_ds_Transform_s* zxmd_ds_Transforms_POP_Transform(struct zxmd_ds_Transforms_s* x)
{
  struct zxmd_ds_Transform_s* y;
  if (!x) return 0;
  y = x->Transform;
  if (y)
    x->Transform = (struct zxmd_ds_Transform_s*)y->gg.g.n;
  return y;
}

/* FUNC(zxmd_ds_Transforms_PUSH_Transform) */

void zxmd_ds_Transforms_PUSH_Transform(struct zxmd_ds_Transforms_s* x, struct zxmd_ds_Transform_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Transform->gg.g;
  x->Transform = z;
}

/* FUNC(zxmd_ds_Transforms_REV_Transform) */

void zxmd_ds_Transforms_REV_Transform(struct zxmd_ds_Transforms_s* x)
{
  struct zxmd_ds_Transform_s* nxt;
  struct zxmd_ds_Transform_s* y;
  if (!x) return;
  y = x->Transform;
  if (!y) return;
  x->Transform = 0;
  while (y) {
    nxt = (struct zxmd_ds_Transform_s*)y->gg.g.n;
    y->gg.g.n = &x->Transform->gg.g;
    x->Transform = y;
    y = nxt;
  }
}

/* FUNC(zxmd_ds_Transforms_PUT_Transform) */

void zxmd_ds_Transforms_PUT_Transform(struct zxmd_ds_Transforms_s* x, int n, struct zxmd_ds_Transform_s* z)
{
  struct zxmd_ds_Transform_s* y;
  if (!x || !z) return;
  y = x->Transform;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Transform = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zxmd_ds_Transform_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zxmd_ds_Transforms_ADD_Transform) */

void zxmd_ds_Transforms_ADD_Transform(struct zxmd_ds_Transforms_s* x, int n, struct zxmd_ds_Transform_s* z)
{
  struct zxmd_ds_Transform_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->Transform->gg.g;
    x->Transform = z;
    return;
  case -1:
    y = x->Transform;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zxmd_ds_Transform_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Transform; n > 1 && y; --n, y = (struct zxmd_ds_Transform_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zxmd_ds_Transforms_DEL_Transform) */

void zxmd_ds_Transforms_DEL_Transform(struct zxmd_ds_Transforms_s* x, int n)
{
  struct zxmd_ds_Transform_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Transform = (struct zxmd_ds_Transform_s*)x->Transform->gg.g.n;
    return;
  case -1:
    y = (struct zxmd_ds_Transform_s*)x->Transform;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zxmd_ds_Transform_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Transform; n > 1 && y->gg.g.n; --n, y = (struct zxmd_ds_Transform_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}








/* FUNC(zxmd_ds_X509Data_NUM_X509IssuerSerial) */

int zxmd_ds_X509Data_NUM_X509IssuerSerial(struct zxmd_ds_X509Data_s* x)
{
  struct zxmd_ds_X509IssuerSerial_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->X509IssuerSerial; y; ++n, y = (struct zxmd_ds_X509IssuerSerial_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zxmd_ds_X509Data_GET_X509IssuerSerial) */

struct zxmd_ds_X509IssuerSerial_s* zxmd_ds_X509Data_GET_X509IssuerSerial(struct zxmd_ds_X509Data_s* x, int n)
{
  struct zxmd_ds_X509IssuerSerial_s* y;
  if (!x) return 0;
  for (y = x->X509IssuerSerial; n>=0 && y; --n, y = (struct zxmd_ds_X509IssuerSerial_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zxmd_ds_X509Data_POP_X509IssuerSerial) */

struct zxmd_ds_X509IssuerSerial_s* zxmd_ds_X509Data_POP_X509IssuerSerial(struct zxmd_ds_X509Data_s* x)
{
  struct zxmd_ds_X509IssuerSerial_s* y;
  if (!x) return 0;
  y = x->X509IssuerSerial;
  if (y)
    x->X509IssuerSerial = (struct zxmd_ds_X509IssuerSerial_s*)y->gg.g.n;
  return y;
}

/* FUNC(zxmd_ds_X509Data_PUSH_X509IssuerSerial) */

void zxmd_ds_X509Data_PUSH_X509IssuerSerial(struct zxmd_ds_X509Data_s* x, struct zxmd_ds_X509IssuerSerial_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->X509IssuerSerial->gg.g;
  x->X509IssuerSerial = z;
}

/* FUNC(zxmd_ds_X509Data_REV_X509IssuerSerial) */

void zxmd_ds_X509Data_REV_X509IssuerSerial(struct zxmd_ds_X509Data_s* x)
{
  struct zxmd_ds_X509IssuerSerial_s* nxt;
  struct zxmd_ds_X509IssuerSerial_s* y;
  if (!x) return;
  y = x->X509IssuerSerial;
  if (!y) return;
  x->X509IssuerSerial = 0;
  while (y) {
    nxt = (struct zxmd_ds_X509IssuerSerial_s*)y->gg.g.n;
    y->gg.g.n = &x->X509IssuerSerial->gg.g;
    x->X509IssuerSerial = y;
    y = nxt;
  }
}

/* FUNC(zxmd_ds_X509Data_PUT_X509IssuerSerial) */

void zxmd_ds_X509Data_PUT_X509IssuerSerial(struct zxmd_ds_X509Data_s* x, int n, struct zxmd_ds_X509IssuerSerial_s* z)
{
  struct zxmd_ds_X509IssuerSerial_s* y;
  if (!x || !z) return;
  y = x->X509IssuerSerial;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->X509IssuerSerial = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zxmd_ds_X509IssuerSerial_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zxmd_ds_X509Data_ADD_X509IssuerSerial) */

void zxmd_ds_X509Data_ADD_X509IssuerSerial(struct zxmd_ds_X509Data_s* x, int n, struct zxmd_ds_X509IssuerSerial_s* z)
{
  struct zxmd_ds_X509IssuerSerial_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->X509IssuerSerial->gg.g;
    x->X509IssuerSerial = z;
    return;
  case -1:
    y = x->X509IssuerSerial;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zxmd_ds_X509IssuerSerial_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->X509IssuerSerial; n > 1 && y; --n, y = (struct zxmd_ds_X509IssuerSerial_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zxmd_ds_X509Data_DEL_X509IssuerSerial) */

void zxmd_ds_X509Data_DEL_X509IssuerSerial(struct zxmd_ds_X509Data_s* x, int n)
{
  struct zxmd_ds_X509IssuerSerial_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->X509IssuerSerial = (struct zxmd_ds_X509IssuerSerial_s*)x->X509IssuerSerial->gg.g.n;
    return;
  case -1:
    y = (struct zxmd_ds_X509IssuerSerial_s*)x->X509IssuerSerial;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zxmd_ds_X509IssuerSerial_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->X509IssuerSerial; n > 1 && y->gg.g.n; --n, y = (struct zxmd_ds_X509IssuerSerial_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zxmd_ds_X509Data_NUM_X509SKI) */

int zxmd_ds_X509Data_NUM_X509SKI(struct zxmd_ds_X509Data_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->X509SKI; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zxmd_ds_X509Data_GET_X509SKI) */

struct zx_elem_s* zxmd_ds_X509Data_GET_X509SKI(struct zxmd_ds_X509Data_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->X509SKI; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zxmd_ds_X509Data_POP_X509SKI) */

struct zx_elem_s* zxmd_ds_X509Data_POP_X509SKI(struct zxmd_ds_X509Data_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->X509SKI;
  if (y)
    x->X509SKI = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zxmd_ds_X509Data_PUSH_X509SKI) */

void zxmd_ds_X509Data_PUSH_X509SKI(struct zxmd_ds_X509Data_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->X509SKI->g;
  x->X509SKI = z;
}

/* FUNC(zxmd_ds_X509Data_REV_X509SKI) */

void zxmd_ds_X509Data_REV_X509SKI(struct zxmd_ds_X509Data_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->X509SKI;
  if (!y) return;
  x->X509SKI = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->X509SKI->g;
    x->X509SKI = y;
    y = nxt;
  }
}

/* FUNC(zxmd_ds_X509Data_PUT_X509SKI) */

void zxmd_ds_X509Data_PUT_X509SKI(struct zxmd_ds_X509Data_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->X509SKI;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->X509SKI = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zxmd_ds_X509Data_ADD_X509SKI) */

void zxmd_ds_X509Data_ADD_X509SKI(struct zxmd_ds_X509Data_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->X509SKI->g;
    x->X509SKI = z;
    return;
  case -1:
    y = x->X509SKI;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->X509SKI; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zxmd_ds_X509Data_DEL_X509SKI) */

void zxmd_ds_X509Data_DEL_X509SKI(struct zxmd_ds_X509Data_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->X509SKI = (struct zx_elem_s*)x->X509SKI->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->X509SKI;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->X509SKI; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}



/* FUNC(zxmd_ds_X509Data_NUM_X509SubjectName) */

int zxmd_ds_X509Data_NUM_X509SubjectName(struct zxmd_ds_X509Data_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->X509SubjectName; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zxmd_ds_X509Data_GET_X509SubjectName) */

struct zx_elem_s* zxmd_ds_X509Data_GET_X509SubjectName(struct zxmd_ds_X509Data_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->X509SubjectName; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zxmd_ds_X509Data_POP_X509SubjectName) */

struct zx_elem_s* zxmd_ds_X509Data_POP_X509SubjectName(struct zxmd_ds_X509Data_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->X509SubjectName;
  if (y)
    x->X509SubjectName = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zxmd_ds_X509Data_PUSH_X509SubjectName) */

void zxmd_ds_X509Data_PUSH_X509SubjectName(struct zxmd_ds_X509Data_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->X509SubjectName->g;
  x->X509SubjectName = z;
}

/* FUNC(zxmd_ds_X509Data_REV_X509SubjectName) */

void zxmd_ds_X509Data_REV_X509SubjectName(struct zxmd_ds_X509Data_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->X509SubjectName;
  if (!y) return;
  x->X509SubjectName = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->X509SubjectName->g;
    x->X509SubjectName = y;
    y = nxt;
  }
}

/* FUNC(zxmd_ds_X509Data_PUT_X509SubjectName) */

void zxmd_ds_X509Data_PUT_X509SubjectName(struct zxmd_ds_X509Data_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->X509SubjectName;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->X509SubjectName = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zxmd_ds_X509Data_ADD_X509SubjectName) */

void zxmd_ds_X509Data_ADD_X509SubjectName(struct zxmd_ds_X509Data_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->X509SubjectName->g;
    x->X509SubjectName = z;
    return;
  case -1:
    y = x->X509SubjectName;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->X509SubjectName; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zxmd_ds_X509Data_DEL_X509SubjectName) */

void zxmd_ds_X509Data_DEL_X509SubjectName(struct zxmd_ds_X509Data_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->X509SubjectName = (struct zx_elem_s*)x->X509SubjectName->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->X509SubjectName;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->X509SubjectName; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}



/* FUNC(zxmd_ds_X509Data_NUM_X509Certificate) */

int zxmd_ds_X509Data_NUM_X509Certificate(struct zxmd_ds_X509Data_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->X509Certificate; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zxmd_ds_X509Data_GET_X509Certificate) */

struct zx_elem_s* zxmd_ds_X509Data_GET_X509Certificate(struct zxmd_ds_X509Data_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->X509Certificate; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zxmd_ds_X509Data_POP_X509Certificate) */

struct zx_elem_s* zxmd_ds_X509Data_POP_X509Certificate(struct zxmd_ds_X509Data_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->X509Certificate;
  if (y)
    x->X509Certificate = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zxmd_ds_X509Data_PUSH_X509Certificate) */

void zxmd_ds_X509Data_PUSH_X509Certificate(struct zxmd_ds_X509Data_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->X509Certificate->g;
  x->X509Certificate = z;
}

/* FUNC(zxmd_ds_X509Data_REV_X509Certificate) */

void zxmd_ds_X509Data_REV_X509Certificate(struct zxmd_ds_X509Data_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->X509Certificate;
  if (!y) return;
  x->X509Certificate = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->X509Certificate->g;
    x->X509Certificate = y;
    y = nxt;
  }
}

/* FUNC(zxmd_ds_X509Data_PUT_X509Certificate) */

void zxmd_ds_X509Data_PUT_X509Certificate(struct zxmd_ds_X509Data_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->X509Certificate;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->X509Certificate = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zxmd_ds_X509Data_ADD_X509Certificate) */

void zxmd_ds_X509Data_ADD_X509Certificate(struct zxmd_ds_X509Data_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->X509Certificate->g;
    x->X509Certificate = z;
    return;
  case -1:
    y = x->X509Certificate;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->X509Certificate; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zxmd_ds_X509Data_DEL_X509Certificate) */

void zxmd_ds_X509Data_DEL_X509Certificate(struct zxmd_ds_X509Data_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->X509Certificate = (struct zx_elem_s*)x->X509Certificate->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->X509Certificate;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->X509Certificate; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}



/* FUNC(zxmd_ds_X509Data_NUM_X509CRL) */

int zxmd_ds_X509Data_NUM_X509CRL(struct zxmd_ds_X509Data_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->X509CRL; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zxmd_ds_X509Data_GET_X509CRL) */

struct zx_elem_s* zxmd_ds_X509Data_GET_X509CRL(struct zxmd_ds_X509Data_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->X509CRL; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zxmd_ds_X509Data_POP_X509CRL) */

struct zx_elem_s* zxmd_ds_X509Data_POP_X509CRL(struct zxmd_ds_X509Data_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->X509CRL;
  if (y)
    x->X509CRL = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zxmd_ds_X509Data_PUSH_X509CRL) */

void zxmd_ds_X509Data_PUSH_X509CRL(struct zxmd_ds_X509Data_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->X509CRL->g;
  x->X509CRL = z;
}

/* FUNC(zxmd_ds_X509Data_REV_X509CRL) */

void zxmd_ds_X509Data_REV_X509CRL(struct zxmd_ds_X509Data_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->X509CRL;
  if (!y) return;
  x->X509CRL = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->X509CRL->g;
    x->X509CRL = y;
    y = nxt;
  }
}

/* FUNC(zxmd_ds_X509Data_PUT_X509CRL) */

void zxmd_ds_X509Data_PUT_X509CRL(struct zxmd_ds_X509Data_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->X509CRL;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->X509CRL = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zxmd_ds_X509Data_ADD_X509CRL) */

void zxmd_ds_X509Data_ADD_X509CRL(struct zxmd_ds_X509Data_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->X509CRL->g;
    x->X509CRL = z;
    return;
  case -1:
    y = x->X509CRL;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->X509CRL; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zxmd_ds_X509Data_DEL_X509CRL) */

void zxmd_ds_X509Data_DEL_X509CRL(struct zxmd_ds_X509Data_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->X509CRL = (struct zx_elem_s*)x->X509CRL->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->X509CRL;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->X509CRL; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}








/* FUNC(zxmd_ds_X509IssuerSerial_NUM_X509IssuerName) */

int zxmd_ds_X509IssuerSerial_NUM_X509IssuerName(struct zxmd_ds_X509IssuerSerial_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->X509IssuerName; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zxmd_ds_X509IssuerSerial_GET_X509IssuerName) */

struct zx_elem_s* zxmd_ds_X509IssuerSerial_GET_X509IssuerName(struct zxmd_ds_X509IssuerSerial_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->X509IssuerName; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zxmd_ds_X509IssuerSerial_POP_X509IssuerName) */

struct zx_elem_s* zxmd_ds_X509IssuerSerial_POP_X509IssuerName(struct zxmd_ds_X509IssuerSerial_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->X509IssuerName;
  if (y)
    x->X509IssuerName = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zxmd_ds_X509IssuerSerial_PUSH_X509IssuerName) */

void zxmd_ds_X509IssuerSerial_PUSH_X509IssuerName(struct zxmd_ds_X509IssuerSerial_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->X509IssuerName->g;
  x->X509IssuerName = z;
}

/* FUNC(zxmd_ds_X509IssuerSerial_REV_X509IssuerName) */

void zxmd_ds_X509IssuerSerial_REV_X509IssuerName(struct zxmd_ds_X509IssuerSerial_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->X509IssuerName;
  if (!y) return;
  x->X509IssuerName = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->X509IssuerName->g;
    x->X509IssuerName = y;
    y = nxt;
  }
}

/* FUNC(zxmd_ds_X509IssuerSerial_PUT_X509IssuerName) */

void zxmd_ds_X509IssuerSerial_PUT_X509IssuerName(struct zxmd_ds_X509IssuerSerial_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->X509IssuerName;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->X509IssuerName = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zxmd_ds_X509IssuerSerial_ADD_X509IssuerName) */

void zxmd_ds_X509IssuerSerial_ADD_X509IssuerName(struct zxmd_ds_X509IssuerSerial_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->X509IssuerName->g;
    x->X509IssuerName = z;
    return;
  case -1:
    y = x->X509IssuerName;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->X509IssuerName; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zxmd_ds_X509IssuerSerial_DEL_X509IssuerName) */

void zxmd_ds_X509IssuerSerial_DEL_X509IssuerName(struct zxmd_ds_X509IssuerSerial_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->X509IssuerName = (struct zx_elem_s*)x->X509IssuerName->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->X509IssuerName;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->X509IssuerName; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}



/* FUNC(zxmd_ds_X509IssuerSerial_NUM_X509SerialNumber) */

int zxmd_ds_X509IssuerSerial_NUM_X509SerialNumber(struct zxmd_ds_X509IssuerSerial_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->X509SerialNumber; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zxmd_ds_X509IssuerSerial_GET_X509SerialNumber) */

struct zx_elem_s* zxmd_ds_X509IssuerSerial_GET_X509SerialNumber(struct zxmd_ds_X509IssuerSerial_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->X509SerialNumber; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zxmd_ds_X509IssuerSerial_POP_X509SerialNumber) */

struct zx_elem_s* zxmd_ds_X509IssuerSerial_POP_X509SerialNumber(struct zxmd_ds_X509IssuerSerial_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->X509SerialNumber;
  if (y)
    x->X509SerialNumber = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zxmd_ds_X509IssuerSerial_PUSH_X509SerialNumber) */

void zxmd_ds_X509IssuerSerial_PUSH_X509SerialNumber(struct zxmd_ds_X509IssuerSerial_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->X509SerialNumber->g;
  x->X509SerialNumber = z;
}

/* FUNC(zxmd_ds_X509IssuerSerial_REV_X509SerialNumber) */

void zxmd_ds_X509IssuerSerial_REV_X509SerialNumber(struct zxmd_ds_X509IssuerSerial_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->X509SerialNumber;
  if (!y) return;
  x->X509SerialNumber = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->X509SerialNumber->g;
    x->X509SerialNumber = y;
    y = nxt;
  }
}

/* FUNC(zxmd_ds_X509IssuerSerial_PUT_X509SerialNumber) */

void zxmd_ds_X509IssuerSerial_PUT_X509SerialNumber(struct zxmd_ds_X509IssuerSerial_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->X509SerialNumber;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->X509SerialNumber = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zxmd_ds_X509IssuerSerial_ADD_X509SerialNumber) */

void zxmd_ds_X509IssuerSerial_ADD_X509SerialNumber(struct zxmd_ds_X509IssuerSerial_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->X509SerialNumber->g;
    x->X509SerialNumber = z;
    return;
  case -1:
    y = x->X509SerialNumber;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->X509SerialNumber; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zxmd_ds_X509IssuerSerial_DEL_X509SerialNumber) */

void zxmd_ds_X509IssuerSerial_DEL_X509SerialNumber(struct zxmd_ds_X509IssuerSerial_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->X509SerialNumber = (struct zx_elem_s*)x->X509SerialNumber->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->X509SerialNumber;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->X509SerialNumber; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}






/* FUNC(zxmd_md_AdditionalMetadataLocation_GET_namespace) */
struct zx_str_s* zxmd_md_AdditionalMetadataLocation_GET_namespace(struct zxmd_md_AdditionalMetadataLocation_s* x) { return x->namespace; }
/* FUNC(zxmd_md_AdditionalMetadataLocation_PUT_namespace) */
void zxmd_md_AdditionalMetadataLocation_PUT_namespace(struct zxmd_md_AdditionalMetadataLocation_s* x, struct zx_str_s* y) { x->namespace = y; }







/* FUNC(zxmd_md_AffiliationDescriptor_NUM_Signature) */

int zxmd_md_AffiliationDescriptor_NUM_Signature(struct zxmd_md_AffiliationDescriptor_s* x)
{
  struct zxmd_ds_Signature_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Signature; y; ++n, y = (struct zxmd_ds_Signature_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zxmd_md_AffiliationDescriptor_GET_Signature) */

struct zxmd_ds_Signature_s* zxmd_md_AffiliationDescriptor_GET_Signature(struct zxmd_md_AffiliationDescriptor_s* x, int n)
{
  struct zxmd_ds_Signature_s* y;
  if (!x) return 0;
  for (y = x->Signature; n>=0 && y; --n, y = (struct zxmd_ds_Signature_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zxmd_md_AffiliationDescriptor_POP_Signature) */

struct zxmd_ds_Signature_s* zxmd_md_AffiliationDescriptor_POP_Signature(struct zxmd_md_AffiliationDescriptor_s* x)
{
  struct zxmd_ds_Signature_s* y;
  if (!x) return 0;
  y = x->Signature;
  if (y)
    x->Signature = (struct zxmd_ds_Signature_s*)y->gg.g.n;
  return y;
}

/* FUNC(zxmd_md_AffiliationDescriptor_PUSH_Signature) */

void zxmd_md_AffiliationDescriptor_PUSH_Signature(struct zxmd_md_AffiliationDescriptor_s* x, struct zxmd_ds_Signature_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Signature->gg.g;
  x->Signature = z;
}

/* FUNC(zxmd_md_AffiliationDescriptor_REV_Signature) */

void zxmd_md_AffiliationDescriptor_REV_Signature(struct zxmd_md_AffiliationDescriptor_s* x)
{
  struct zxmd_ds_Signature_s* nxt;
  struct zxmd_ds_Signature_s* y;
  if (!x) return;
  y = x->Signature;
  if (!y) return;
  x->Signature = 0;
  while (y) {
    nxt = (struct zxmd_ds_Signature_s*)y->gg.g.n;
    y->gg.g.n = &x->Signature->gg.g;
    x->Signature = y;
    y = nxt;
  }
}

/* FUNC(zxmd_md_AffiliationDescriptor_PUT_Signature) */

void zxmd_md_AffiliationDescriptor_PUT_Signature(struct zxmd_md_AffiliationDescriptor_s* x, int n, struct zxmd_ds_Signature_s* z)
{
  struct zxmd_ds_Signature_s* y;
  if (!x || !z) return;
  y = x->Signature;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Signature = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zxmd_ds_Signature_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zxmd_md_AffiliationDescriptor_ADD_Signature) */

void zxmd_md_AffiliationDescriptor_ADD_Signature(struct zxmd_md_AffiliationDescriptor_s* x, int n, struct zxmd_ds_Signature_s* z)
{
  struct zxmd_ds_Signature_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->Signature->gg.g;
    x->Signature = z;
    return;
  case -1:
    y = x->Signature;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zxmd_ds_Signature_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Signature; n > 1 && y; --n, y = (struct zxmd_ds_Signature_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zxmd_md_AffiliationDescriptor_DEL_Signature) */

void zxmd_md_AffiliationDescriptor_DEL_Signature(struct zxmd_md_AffiliationDescriptor_s* x, int n)
{
  struct zxmd_ds_Signature_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Signature = (struct zxmd_ds_Signature_s*)x->Signature->gg.g.n;
    return;
  case -1:
    y = (struct zxmd_ds_Signature_s*)x->Signature;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zxmd_ds_Signature_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Signature; n > 1 && y->gg.g.n; --n, y = (struct zxmd_ds_Signature_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zxmd_md_AffiliationDescriptor_NUM_Extensions) */

int zxmd_md_AffiliationDescriptor_NUM_Extensions(struct zxmd_md_AffiliationDescriptor_s* x)
{
  struct zxmd_md_Extensions_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Extensions; y; ++n, y = (struct zxmd_md_Extensions_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zxmd_md_AffiliationDescriptor_GET_Extensions) */

struct zxmd_md_Extensions_s* zxmd_md_AffiliationDescriptor_GET_Extensions(struct zxmd_md_AffiliationDescriptor_s* x, int n)
{
  struct zxmd_md_Extensions_s* y;
  if (!x) return 0;
  for (y = x->Extensions; n>=0 && y; --n, y = (struct zxmd_md_Extensions_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zxmd_md_AffiliationDescriptor_POP_Extensions) */

struct zxmd_md_Extensions_s* zxmd_md_AffiliationDescriptor_POP_Extensions(struct zxmd_md_AffiliationDescriptor_s* x)
{
  struct zxmd_md_Extensions_s* y;
  if (!x) return 0;
  y = x->Extensions;
  if (y)
    x->Extensions = (struct zxmd_md_Extensions_s*)y->gg.g.n;
  return y;
}

/* FUNC(zxmd_md_AffiliationDescriptor_PUSH_Extensions) */

void zxmd_md_AffiliationDescriptor_PUSH_Extensions(struct zxmd_md_AffiliationDescriptor_s* x, struct zxmd_md_Extensions_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Extensions->gg.g;
  x->Extensions = z;
}

/* FUNC(zxmd_md_AffiliationDescriptor_REV_Extensions) */

void zxmd_md_AffiliationDescriptor_REV_Extensions(struct zxmd_md_AffiliationDescriptor_s* x)
{
  struct zxmd_md_Extensions_s* nxt;
  struct zxmd_md_Extensions_s* y;
  if (!x) return;
  y = x->Extensions;
  if (!y) return;
  x->Extensions = 0;
  while (y) {
    nxt = (struct zxmd_md_Extensions_s*)y->gg.g.n;
    y->gg.g.n = &x->Extensions->gg.g;
    x->Extensions = y;
    y = nxt;
  }
}

/* FUNC(zxmd_md_AffiliationDescriptor_PUT_Extensions) */

void zxmd_md_AffiliationDescriptor_PUT_Extensions(struct zxmd_md_AffiliationDescriptor_s* x, int n, struct zxmd_md_Extensions_s* z)
{
  struct zxmd_md_Extensions_s* y;
  if (!x || !z) return;
  y = x->Extensions;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Extensions = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zxmd_md_Extensions_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zxmd_md_AffiliationDescriptor_ADD_Extensions) */

void zxmd_md_AffiliationDescriptor_ADD_Extensions(struct zxmd_md_AffiliationDescriptor_s* x, int n, struct zxmd_md_Extensions_s* z)
{
  struct zxmd_md_Extensions_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->Extensions->gg.g;
    x->Extensions = z;
    return;
  case -1:
    y = x->Extensions;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zxmd_md_Extensions_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Extensions; n > 1 && y; --n, y = (struct zxmd_md_Extensions_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zxmd_md_AffiliationDescriptor_DEL_Extensions) */

void zxmd_md_AffiliationDescriptor_DEL_Extensions(struct zxmd_md_AffiliationDescriptor_s* x, int n)
{
  struct zxmd_md_Extensions_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Extensions = (struct zxmd_md_Extensions_s*)x->Extensions->gg.g.n;
    return;
  case -1:
    y = (struct zxmd_md_Extensions_s*)x->Extensions;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zxmd_md_Extensions_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Extensions; n > 1 && y->gg.g.n; --n, y = (struct zxmd_md_Extensions_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zxmd_md_AffiliationDescriptor_NUM_AffiliateMember) */

int zxmd_md_AffiliationDescriptor_NUM_AffiliateMember(struct zxmd_md_AffiliationDescriptor_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->AffiliateMember; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zxmd_md_AffiliationDescriptor_GET_AffiliateMember) */

struct zx_elem_s* zxmd_md_AffiliationDescriptor_GET_AffiliateMember(struct zxmd_md_AffiliationDescriptor_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->AffiliateMember; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zxmd_md_AffiliationDescriptor_POP_AffiliateMember) */

struct zx_elem_s* zxmd_md_AffiliationDescriptor_POP_AffiliateMember(struct zxmd_md_AffiliationDescriptor_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->AffiliateMember;
  if (y)
    x->AffiliateMember = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zxmd_md_AffiliationDescriptor_PUSH_AffiliateMember) */

void zxmd_md_AffiliationDescriptor_PUSH_AffiliateMember(struct zxmd_md_AffiliationDescriptor_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->AffiliateMember->g;
  x->AffiliateMember = z;
}

/* FUNC(zxmd_md_AffiliationDescriptor_REV_AffiliateMember) */

void zxmd_md_AffiliationDescriptor_REV_AffiliateMember(struct zxmd_md_AffiliationDescriptor_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->AffiliateMember;
  if (!y) return;
  x->AffiliateMember = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->AffiliateMember->g;
    x->AffiliateMember = y;
    y = nxt;
  }
}

/* FUNC(zxmd_md_AffiliationDescriptor_PUT_AffiliateMember) */

void zxmd_md_AffiliationDescriptor_PUT_AffiliateMember(struct zxmd_md_AffiliationDescriptor_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->AffiliateMember;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->AffiliateMember = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zxmd_md_AffiliationDescriptor_ADD_AffiliateMember) */

void zxmd_md_AffiliationDescriptor_ADD_AffiliateMember(struct zxmd_md_AffiliationDescriptor_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->AffiliateMember->g;
    x->AffiliateMember = z;
    return;
  case -1:
    y = x->AffiliateMember;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->AffiliateMember; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zxmd_md_AffiliationDescriptor_DEL_AffiliateMember) */

void zxmd_md_AffiliationDescriptor_DEL_AffiliateMember(struct zxmd_md_AffiliationDescriptor_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->AffiliateMember = (struct zx_elem_s*)x->AffiliateMember->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->AffiliateMember;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->AffiliateMember; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}



/* FUNC(zxmd_md_AffiliationDescriptor_NUM_KeyDescriptor) */

int zxmd_md_AffiliationDescriptor_NUM_KeyDescriptor(struct zxmd_md_AffiliationDescriptor_s* x)
{
  struct zxmd_md_KeyDescriptor_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->KeyDescriptor; y; ++n, y = (struct zxmd_md_KeyDescriptor_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zxmd_md_AffiliationDescriptor_GET_KeyDescriptor) */

struct zxmd_md_KeyDescriptor_s* zxmd_md_AffiliationDescriptor_GET_KeyDescriptor(struct zxmd_md_AffiliationDescriptor_s* x, int n)
{
  struct zxmd_md_KeyDescriptor_s* y;
  if (!x) return 0;
  for (y = x->KeyDescriptor; n>=0 && y; --n, y = (struct zxmd_md_KeyDescriptor_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zxmd_md_AffiliationDescriptor_POP_KeyDescriptor) */

struct zxmd_md_KeyDescriptor_s* zxmd_md_AffiliationDescriptor_POP_KeyDescriptor(struct zxmd_md_AffiliationDescriptor_s* x)
{
  struct zxmd_md_KeyDescriptor_s* y;
  if (!x) return 0;
  y = x->KeyDescriptor;
  if (y)
    x->KeyDescriptor = (struct zxmd_md_KeyDescriptor_s*)y->gg.g.n;
  return y;
}

/* FUNC(zxmd_md_AffiliationDescriptor_PUSH_KeyDescriptor) */

void zxmd_md_AffiliationDescriptor_PUSH_KeyDescriptor(struct zxmd_md_AffiliationDescriptor_s* x, struct zxmd_md_KeyDescriptor_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->KeyDescriptor->gg.g;
  x->KeyDescriptor = z;
}

/* FUNC(zxmd_md_AffiliationDescriptor_REV_KeyDescriptor) */

void zxmd_md_AffiliationDescriptor_REV_KeyDescriptor(struct zxmd_md_AffiliationDescriptor_s* x)
{
  struct zxmd_md_KeyDescriptor_s* nxt;
  struct zxmd_md_KeyDescriptor_s* y;
  if (!x) return;
  y = x->KeyDescriptor;
  if (!y) return;
  x->KeyDescriptor = 0;
  while (y) {
    nxt = (struct zxmd_md_KeyDescriptor_s*)y->gg.g.n;
    y->gg.g.n = &x->KeyDescriptor->gg.g;
    x->KeyDescriptor = y;
    y = nxt;
  }
}

/* FUNC(zxmd_md_AffiliationDescriptor_PUT_KeyDescriptor) */

void zxmd_md_AffiliationDescriptor_PUT_KeyDescriptor(struct zxmd_md_AffiliationDescriptor_s* x, int n, struct zxmd_md_KeyDescriptor_s* z)
{
  struct zxmd_md_KeyDescriptor_s* y;
  if (!x || !z) return;
  y = x->KeyDescriptor;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->KeyDescriptor = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zxmd_md_KeyDescriptor_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zxmd_md_AffiliationDescriptor_ADD_KeyDescriptor) */

void zxmd_md_AffiliationDescriptor_ADD_KeyDescriptor(struct zxmd_md_AffiliationDescriptor_s* x, int n, struct zxmd_md_KeyDescriptor_s* z)
{
  struct zxmd_md_KeyDescriptor_s* y;
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
    for (; y->gg.g.n; y = (struct zxmd_md_KeyDescriptor_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->KeyDescriptor; n > 1 && y; --n, y = (struct zxmd_md_KeyDescriptor_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zxmd_md_AffiliationDescriptor_DEL_KeyDescriptor) */

void zxmd_md_AffiliationDescriptor_DEL_KeyDescriptor(struct zxmd_md_AffiliationDescriptor_s* x, int n)
{
  struct zxmd_md_KeyDescriptor_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->KeyDescriptor = (struct zxmd_md_KeyDescriptor_s*)x->KeyDescriptor->gg.g.n;
    return;
  case -1:
    y = (struct zxmd_md_KeyDescriptor_s*)x->KeyDescriptor;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zxmd_md_KeyDescriptor_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->KeyDescriptor; n > 1 && y->gg.g.n; --n, y = (struct zxmd_md_KeyDescriptor_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

/* FUNC(zxmd_md_AffiliationDescriptor_GET_affiliationOwnerID) */
struct zx_str_s* zxmd_md_AffiliationDescriptor_GET_affiliationOwnerID(struct zxmd_md_AffiliationDescriptor_s* x) { return x->affiliationOwnerID; }
/* FUNC(zxmd_md_AffiliationDescriptor_PUT_affiliationOwnerID) */
void zxmd_md_AffiliationDescriptor_PUT_affiliationOwnerID(struct zxmd_md_AffiliationDescriptor_s* x, struct zx_str_s* y) { x->affiliationOwnerID = y; }
/* FUNC(zxmd_md_AffiliationDescriptor_GET_validUntil) */
struct zx_str_s* zxmd_md_AffiliationDescriptor_GET_validUntil(struct zxmd_md_AffiliationDescriptor_s* x) { return x->validUntil; }
/* FUNC(zxmd_md_AffiliationDescriptor_PUT_validUntil) */
void zxmd_md_AffiliationDescriptor_PUT_validUntil(struct zxmd_md_AffiliationDescriptor_s* x, struct zx_str_s* y) { x->validUntil = y; }
/* FUNC(zxmd_md_AffiliationDescriptor_GET_cacheDuration) */
struct zx_str_s* zxmd_md_AffiliationDescriptor_GET_cacheDuration(struct zxmd_md_AffiliationDescriptor_s* x) { return x->cacheDuration; }
/* FUNC(zxmd_md_AffiliationDescriptor_PUT_cacheDuration) */
void zxmd_md_AffiliationDescriptor_PUT_cacheDuration(struct zxmd_md_AffiliationDescriptor_s* x, struct zx_str_s* y) { x->cacheDuration = y; }
/* FUNC(zxmd_md_AffiliationDescriptor_GET_ID) */
struct zx_str_s* zxmd_md_AffiliationDescriptor_GET_ID(struct zxmd_md_AffiliationDescriptor_s* x) { return x->ID; }
/* FUNC(zxmd_md_AffiliationDescriptor_PUT_ID) */
void zxmd_md_AffiliationDescriptor_PUT_ID(struct zxmd_md_AffiliationDescriptor_s* x, struct zx_str_s* y) { x->ID = y; }





/* FUNC(zxmd_md_ArtifactResolutionService_GET_Binding) */
struct zx_str_s* zxmd_md_ArtifactResolutionService_GET_Binding(struct zxmd_md_ArtifactResolutionService_s* x) { return x->Binding; }
/* FUNC(zxmd_md_ArtifactResolutionService_PUT_Binding) */
void zxmd_md_ArtifactResolutionService_PUT_Binding(struct zxmd_md_ArtifactResolutionService_s* x, struct zx_str_s* y) { x->Binding = y; }
/* FUNC(zxmd_md_ArtifactResolutionService_GET_Location) */
struct zx_str_s* zxmd_md_ArtifactResolutionService_GET_Location(struct zxmd_md_ArtifactResolutionService_s* x) { return x->Location; }
/* FUNC(zxmd_md_ArtifactResolutionService_PUT_Location) */
void zxmd_md_ArtifactResolutionService_PUT_Location(struct zxmd_md_ArtifactResolutionService_s* x, struct zx_str_s* y) { x->Location = y; }
/* FUNC(zxmd_md_ArtifactResolutionService_GET_ResponseLocation) */
struct zx_str_s* zxmd_md_ArtifactResolutionService_GET_ResponseLocation(struct zxmd_md_ArtifactResolutionService_s* x) { return x->ResponseLocation; }
/* FUNC(zxmd_md_ArtifactResolutionService_PUT_ResponseLocation) */
void zxmd_md_ArtifactResolutionService_PUT_ResponseLocation(struct zxmd_md_ArtifactResolutionService_s* x, struct zx_str_s* y) { x->ResponseLocation = y; }
/* FUNC(zxmd_md_ArtifactResolutionService_GET_index) */
struct zx_str_s* zxmd_md_ArtifactResolutionService_GET_index(struct zxmd_md_ArtifactResolutionService_s* x) { return x->index; }
/* FUNC(zxmd_md_ArtifactResolutionService_PUT_index) */
void zxmd_md_ArtifactResolutionService_PUT_index(struct zxmd_md_ArtifactResolutionService_s* x, struct zx_str_s* y) { x->index = y; }
/* FUNC(zxmd_md_ArtifactResolutionService_GET_isDefault) */
struct zx_str_s* zxmd_md_ArtifactResolutionService_GET_isDefault(struct zxmd_md_ArtifactResolutionService_s* x) { return x->isDefault; }
/* FUNC(zxmd_md_ArtifactResolutionService_PUT_isDefault) */
void zxmd_md_ArtifactResolutionService_PUT_isDefault(struct zxmd_md_ArtifactResolutionService_s* x, struct zx_str_s* y) { x->isDefault = y; }





/* FUNC(zxmd_md_AssertionConsumerService_GET_Binding) */
struct zx_str_s* zxmd_md_AssertionConsumerService_GET_Binding(struct zxmd_md_AssertionConsumerService_s* x) { return x->Binding; }
/* FUNC(zxmd_md_AssertionConsumerService_PUT_Binding) */
void zxmd_md_AssertionConsumerService_PUT_Binding(struct zxmd_md_AssertionConsumerService_s* x, struct zx_str_s* y) { x->Binding = y; }
/* FUNC(zxmd_md_AssertionConsumerService_GET_Location) */
struct zx_str_s* zxmd_md_AssertionConsumerService_GET_Location(struct zxmd_md_AssertionConsumerService_s* x) { return x->Location; }
/* FUNC(zxmd_md_AssertionConsumerService_PUT_Location) */
void zxmd_md_AssertionConsumerService_PUT_Location(struct zxmd_md_AssertionConsumerService_s* x, struct zx_str_s* y) { x->Location = y; }
/* FUNC(zxmd_md_AssertionConsumerService_GET_ResponseLocation) */
struct zx_str_s* zxmd_md_AssertionConsumerService_GET_ResponseLocation(struct zxmd_md_AssertionConsumerService_s* x) { return x->ResponseLocation; }
/* FUNC(zxmd_md_AssertionConsumerService_PUT_ResponseLocation) */
void zxmd_md_AssertionConsumerService_PUT_ResponseLocation(struct zxmd_md_AssertionConsumerService_s* x, struct zx_str_s* y) { x->ResponseLocation = y; }
/* FUNC(zxmd_md_AssertionConsumerService_GET_index) */
struct zx_str_s* zxmd_md_AssertionConsumerService_GET_index(struct zxmd_md_AssertionConsumerService_s* x) { return x->index; }
/* FUNC(zxmd_md_AssertionConsumerService_PUT_index) */
void zxmd_md_AssertionConsumerService_PUT_index(struct zxmd_md_AssertionConsumerService_s* x, struct zx_str_s* y) { x->index = y; }
/* FUNC(zxmd_md_AssertionConsumerService_GET_isDefault) */
struct zx_str_s* zxmd_md_AssertionConsumerService_GET_isDefault(struct zxmd_md_AssertionConsumerService_s* x) { return x->isDefault; }
/* FUNC(zxmd_md_AssertionConsumerService_PUT_isDefault) */
void zxmd_md_AssertionConsumerService_PUT_isDefault(struct zxmd_md_AssertionConsumerService_s* x, struct zx_str_s* y) { x->isDefault = y; }





/* FUNC(zxmd_md_AssertionIDRequestService_GET_Binding) */
struct zx_str_s* zxmd_md_AssertionIDRequestService_GET_Binding(struct zxmd_md_AssertionIDRequestService_s* x) { return x->Binding; }
/* FUNC(zxmd_md_AssertionIDRequestService_PUT_Binding) */
void zxmd_md_AssertionIDRequestService_PUT_Binding(struct zxmd_md_AssertionIDRequestService_s* x, struct zx_str_s* y) { x->Binding = y; }
/* FUNC(zxmd_md_AssertionIDRequestService_GET_Location) */
struct zx_str_s* zxmd_md_AssertionIDRequestService_GET_Location(struct zxmd_md_AssertionIDRequestService_s* x) { return x->Location; }
/* FUNC(zxmd_md_AssertionIDRequestService_PUT_Location) */
void zxmd_md_AssertionIDRequestService_PUT_Location(struct zxmd_md_AssertionIDRequestService_s* x, struct zx_str_s* y) { x->Location = y; }
/* FUNC(zxmd_md_AssertionIDRequestService_GET_ResponseLocation) */
struct zx_str_s* zxmd_md_AssertionIDRequestService_GET_ResponseLocation(struct zxmd_md_AssertionIDRequestService_s* x) { return x->ResponseLocation; }
/* FUNC(zxmd_md_AssertionIDRequestService_PUT_ResponseLocation) */
void zxmd_md_AssertionIDRequestService_PUT_ResponseLocation(struct zxmd_md_AssertionIDRequestService_s* x, struct zx_str_s* y) { x->ResponseLocation = y; }







/* FUNC(zxmd_md_AttributeAuthorityDescriptor_NUM_Signature) */

int zxmd_md_AttributeAuthorityDescriptor_NUM_Signature(struct zxmd_md_AttributeAuthorityDescriptor_s* x)
{
  struct zxmd_ds_Signature_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Signature; y; ++n, y = (struct zxmd_ds_Signature_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zxmd_md_AttributeAuthorityDescriptor_GET_Signature) */

struct zxmd_ds_Signature_s* zxmd_md_AttributeAuthorityDescriptor_GET_Signature(struct zxmd_md_AttributeAuthorityDescriptor_s* x, int n)
{
  struct zxmd_ds_Signature_s* y;
  if (!x) return 0;
  for (y = x->Signature; n>=0 && y; --n, y = (struct zxmd_ds_Signature_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zxmd_md_AttributeAuthorityDescriptor_POP_Signature) */

struct zxmd_ds_Signature_s* zxmd_md_AttributeAuthorityDescriptor_POP_Signature(struct zxmd_md_AttributeAuthorityDescriptor_s* x)
{
  struct zxmd_ds_Signature_s* y;
  if (!x) return 0;
  y = x->Signature;
  if (y)
    x->Signature = (struct zxmd_ds_Signature_s*)y->gg.g.n;
  return y;
}

/* FUNC(zxmd_md_AttributeAuthorityDescriptor_PUSH_Signature) */

void zxmd_md_AttributeAuthorityDescriptor_PUSH_Signature(struct zxmd_md_AttributeAuthorityDescriptor_s* x, struct zxmd_ds_Signature_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Signature->gg.g;
  x->Signature = z;
}

/* FUNC(zxmd_md_AttributeAuthorityDescriptor_REV_Signature) */

void zxmd_md_AttributeAuthorityDescriptor_REV_Signature(struct zxmd_md_AttributeAuthorityDescriptor_s* x)
{
  struct zxmd_ds_Signature_s* nxt;
  struct zxmd_ds_Signature_s* y;
  if (!x) return;
  y = x->Signature;
  if (!y) return;
  x->Signature = 0;
  while (y) {
    nxt = (struct zxmd_ds_Signature_s*)y->gg.g.n;
    y->gg.g.n = &x->Signature->gg.g;
    x->Signature = y;
    y = nxt;
  }
}

/* FUNC(zxmd_md_AttributeAuthorityDescriptor_PUT_Signature) */

void zxmd_md_AttributeAuthorityDescriptor_PUT_Signature(struct zxmd_md_AttributeAuthorityDescriptor_s* x, int n, struct zxmd_ds_Signature_s* z)
{
  struct zxmd_ds_Signature_s* y;
  if (!x || !z) return;
  y = x->Signature;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Signature = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zxmd_ds_Signature_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zxmd_md_AttributeAuthorityDescriptor_ADD_Signature) */

void zxmd_md_AttributeAuthorityDescriptor_ADD_Signature(struct zxmd_md_AttributeAuthorityDescriptor_s* x, int n, struct zxmd_ds_Signature_s* z)
{
  struct zxmd_ds_Signature_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->Signature->gg.g;
    x->Signature = z;
    return;
  case -1:
    y = x->Signature;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zxmd_ds_Signature_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Signature; n > 1 && y; --n, y = (struct zxmd_ds_Signature_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zxmd_md_AttributeAuthorityDescriptor_DEL_Signature) */

void zxmd_md_AttributeAuthorityDescriptor_DEL_Signature(struct zxmd_md_AttributeAuthorityDescriptor_s* x, int n)
{
  struct zxmd_ds_Signature_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Signature = (struct zxmd_ds_Signature_s*)x->Signature->gg.g.n;
    return;
  case -1:
    y = (struct zxmd_ds_Signature_s*)x->Signature;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zxmd_ds_Signature_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Signature; n > 1 && y->gg.g.n; --n, y = (struct zxmd_ds_Signature_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zxmd_md_AttributeAuthorityDescriptor_NUM_Extensions) */

int zxmd_md_AttributeAuthorityDescriptor_NUM_Extensions(struct zxmd_md_AttributeAuthorityDescriptor_s* x)
{
  struct zxmd_md_Extensions_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Extensions; y; ++n, y = (struct zxmd_md_Extensions_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zxmd_md_AttributeAuthorityDescriptor_GET_Extensions) */

struct zxmd_md_Extensions_s* zxmd_md_AttributeAuthorityDescriptor_GET_Extensions(struct zxmd_md_AttributeAuthorityDescriptor_s* x, int n)
{
  struct zxmd_md_Extensions_s* y;
  if (!x) return 0;
  for (y = x->Extensions; n>=0 && y; --n, y = (struct zxmd_md_Extensions_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zxmd_md_AttributeAuthorityDescriptor_POP_Extensions) */

struct zxmd_md_Extensions_s* zxmd_md_AttributeAuthorityDescriptor_POP_Extensions(struct zxmd_md_AttributeAuthorityDescriptor_s* x)
{
  struct zxmd_md_Extensions_s* y;
  if (!x) return 0;
  y = x->Extensions;
  if (y)
    x->Extensions = (struct zxmd_md_Extensions_s*)y->gg.g.n;
  return y;
}

/* FUNC(zxmd_md_AttributeAuthorityDescriptor_PUSH_Extensions) */

void zxmd_md_AttributeAuthorityDescriptor_PUSH_Extensions(struct zxmd_md_AttributeAuthorityDescriptor_s* x, struct zxmd_md_Extensions_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Extensions->gg.g;
  x->Extensions = z;
}

/* FUNC(zxmd_md_AttributeAuthorityDescriptor_REV_Extensions) */

void zxmd_md_AttributeAuthorityDescriptor_REV_Extensions(struct zxmd_md_AttributeAuthorityDescriptor_s* x)
{
  struct zxmd_md_Extensions_s* nxt;
  struct zxmd_md_Extensions_s* y;
  if (!x) return;
  y = x->Extensions;
  if (!y) return;
  x->Extensions = 0;
  while (y) {
    nxt = (struct zxmd_md_Extensions_s*)y->gg.g.n;
    y->gg.g.n = &x->Extensions->gg.g;
    x->Extensions = y;
    y = nxt;
  }
}

/* FUNC(zxmd_md_AttributeAuthorityDescriptor_PUT_Extensions) */

void zxmd_md_AttributeAuthorityDescriptor_PUT_Extensions(struct zxmd_md_AttributeAuthorityDescriptor_s* x, int n, struct zxmd_md_Extensions_s* z)
{
  struct zxmd_md_Extensions_s* y;
  if (!x || !z) return;
  y = x->Extensions;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Extensions = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zxmd_md_Extensions_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zxmd_md_AttributeAuthorityDescriptor_ADD_Extensions) */

void zxmd_md_AttributeAuthorityDescriptor_ADD_Extensions(struct zxmd_md_AttributeAuthorityDescriptor_s* x, int n, struct zxmd_md_Extensions_s* z)
{
  struct zxmd_md_Extensions_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->Extensions->gg.g;
    x->Extensions = z;
    return;
  case -1:
    y = x->Extensions;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zxmd_md_Extensions_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Extensions; n > 1 && y; --n, y = (struct zxmd_md_Extensions_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zxmd_md_AttributeAuthorityDescriptor_DEL_Extensions) */

void zxmd_md_AttributeAuthorityDescriptor_DEL_Extensions(struct zxmd_md_AttributeAuthorityDescriptor_s* x, int n)
{
  struct zxmd_md_Extensions_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Extensions = (struct zxmd_md_Extensions_s*)x->Extensions->gg.g.n;
    return;
  case -1:
    y = (struct zxmd_md_Extensions_s*)x->Extensions;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zxmd_md_Extensions_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Extensions; n > 1 && y->gg.g.n; --n, y = (struct zxmd_md_Extensions_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zxmd_md_AttributeAuthorityDescriptor_NUM_KeyDescriptor) */

int zxmd_md_AttributeAuthorityDescriptor_NUM_KeyDescriptor(struct zxmd_md_AttributeAuthorityDescriptor_s* x)
{
  struct zxmd_md_KeyDescriptor_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->KeyDescriptor; y; ++n, y = (struct zxmd_md_KeyDescriptor_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zxmd_md_AttributeAuthorityDescriptor_GET_KeyDescriptor) */

struct zxmd_md_KeyDescriptor_s* zxmd_md_AttributeAuthorityDescriptor_GET_KeyDescriptor(struct zxmd_md_AttributeAuthorityDescriptor_s* x, int n)
{
  struct zxmd_md_KeyDescriptor_s* y;
  if (!x) return 0;
  for (y = x->KeyDescriptor; n>=0 && y; --n, y = (struct zxmd_md_KeyDescriptor_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zxmd_md_AttributeAuthorityDescriptor_POP_KeyDescriptor) */

struct zxmd_md_KeyDescriptor_s* zxmd_md_AttributeAuthorityDescriptor_POP_KeyDescriptor(struct zxmd_md_AttributeAuthorityDescriptor_s* x)
{
  struct zxmd_md_KeyDescriptor_s* y;
  if (!x) return 0;
  y = x->KeyDescriptor;
  if (y)
    x->KeyDescriptor = (struct zxmd_md_KeyDescriptor_s*)y->gg.g.n;
  return y;
}

/* FUNC(zxmd_md_AttributeAuthorityDescriptor_PUSH_KeyDescriptor) */

void zxmd_md_AttributeAuthorityDescriptor_PUSH_KeyDescriptor(struct zxmd_md_AttributeAuthorityDescriptor_s* x, struct zxmd_md_KeyDescriptor_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->KeyDescriptor->gg.g;
  x->KeyDescriptor = z;
}

/* FUNC(zxmd_md_AttributeAuthorityDescriptor_REV_KeyDescriptor) */

void zxmd_md_AttributeAuthorityDescriptor_REV_KeyDescriptor(struct zxmd_md_AttributeAuthorityDescriptor_s* x)
{
  struct zxmd_md_KeyDescriptor_s* nxt;
  struct zxmd_md_KeyDescriptor_s* y;
  if (!x) return;
  y = x->KeyDescriptor;
  if (!y) return;
  x->KeyDescriptor = 0;
  while (y) {
    nxt = (struct zxmd_md_KeyDescriptor_s*)y->gg.g.n;
    y->gg.g.n = &x->KeyDescriptor->gg.g;
    x->KeyDescriptor = y;
    y = nxt;
  }
}

/* FUNC(zxmd_md_AttributeAuthorityDescriptor_PUT_KeyDescriptor) */

void zxmd_md_AttributeAuthorityDescriptor_PUT_KeyDescriptor(struct zxmd_md_AttributeAuthorityDescriptor_s* x, int n, struct zxmd_md_KeyDescriptor_s* z)
{
  struct zxmd_md_KeyDescriptor_s* y;
  if (!x || !z) return;
  y = x->KeyDescriptor;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->KeyDescriptor = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zxmd_md_KeyDescriptor_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zxmd_md_AttributeAuthorityDescriptor_ADD_KeyDescriptor) */

void zxmd_md_AttributeAuthorityDescriptor_ADD_KeyDescriptor(struct zxmd_md_AttributeAuthorityDescriptor_s* x, int n, struct zxmd_md_KeyDescriptor_s* z)
{
  struct zxmd_md_KeyDescriptor_s* y;
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
    for (; y->gg.g.n; y = (struct zxmd_md_KeyDescriptor_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->KeyDescriptor; n > 1 && y; --n, y = (struct zxmd_md_KeyDescriptor_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zxmd_md_AttributeAuthorityDescriptor_DEL_KeyDescriptor) */

void zxmd_md_AttributeAuthorityDescriptor_DEL_KeyDescriptor(struct zxmd_md_AttributeAuthorityDescriptor_s* x, int n)
{
  struct zxmd_md_KeyDescriptor_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->KeyDescriptor = (struct zxmd_md_KeyDescriptor_s*)x->KeyDescriptor->gg.g.n;
    return;
  case -1:
    y = (struct zxmd_md_KeyDescriptor_s*)x->KeyDescriptor;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zxmd_md_KeyDescriptor_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->KeyDescriptor; n > 1 && y->gg.g.n; --n, y = (struct zxmd_md_KeyDescriptor_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zxmd_md_AttributeAuthorityDescriptor_NUM_Organization) */

int zxmd_md_AttributeAuthorityDescriptor_NUM_Organization(struct zxmd_md_AttributeAuthorityDescriptor_s* x)
{
  struct zxmd_md_Organization_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Organization; y; ++n, y = (struct zxmd_md_Organization_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zxmd_md_AttributeAuthorityDescriptor_GET_Organization) */

struct zxmd_md_Organization_s* zxmd_md_AttributeAuthorityDescriptor_GET_Organization(struct zxmd_md_AttributeAuthorityDescriptor_s* x, int n)
{
  struct zxmd_md_Organization_s* y;
  if (!x) return 0;
  for (y = x->Organization; n>=0 && y; --n, y = (struct zxmd_md_Organization_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zxmd_md_AttributeAuthorityDescriptor_POP_Organization) */

struct zxmd_md_Organization_s* zxmd_md_AttributeAuthorityDescriptor_POP_Organization(struct zxmd_md_AttributeAuthorityDescriptor_s* x)
{
  struct zxmd_md_Organization_s* y;
  if (!x) return 0;
  y = x->Organization;
  if (y)
    x->Organization = (struct zxmd_md_Organization_s*)y->gg.g.n;
  return y;
}

/* FUNC(zxmd_md_AttributeAuthorityDescriptor_PUSH_Organization) */

void zxmd_md_AttributeAuthorityDescriptor_PUSH_Organization(struct zxmd_md_AttributeAuthorityDescriptor_s* x, struct zxmd_md_Organization_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Organization->gg.g;
  x->Organization = z;
}

/* FUNC(zxmd_md_AttributeAuthorityDescriptor_REV_Organization) */

void zxmd_md_AttributeAuthorityDescriptor_REV_Organization(struct zxmd_md_AttributeAuthorityDescriptor_s* x)
{
  struct zxmd_md_Organization_s* nxt;
  struct zxmd_md_Organization_s* y;
  if (!x) return;
  y = x->Organization;
  if (!y) return;
  x->Organization = 0;
  while (y) {
    nxt = (struct zxmd_md_Organization_s*)y->gg.g.n;
    y->gg.g.n = &x->Organization->gg.g;
    x->Organization = y;
    y = nxt;
  }
}

/* FUNC(zxmd_md_AttributeAuthorityDescriptor_PUT_Organization) */

void zxmd_md_AttributeAuthorityDescriptor_PUT_Organization(struct zxmd_md_AttributeAuthorityDescriptor_s* x, int n, struct zxmd_md_Organization_s* z)
{
  struct zxmd_md_Organization_s* y;
  if (!x || !z) return;
  y = x->Organization;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Organization = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zxmd_md_Organization_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zxmd_md_AttributeAuthorityDescriptor_ADD_Organization) */

void zxmd_md_AttributeAuthorityDescriptor_ADD_Organization(struct zxmd_md_AttributeAuthorityDescriptor_s* x, int n, struct zxmd_md_Organization_s* z)
{
  struct zxmd_md_Organization_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->Organization->gg.g;
    x->Organization = z;
    return;
  case -1:
    y = x->Organization;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zxmd_md_Organization_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Organization; n > 1 && y; --n, y = (struct zxmd_md_Organization_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zxmd_md_AttributeAuthorityDescriptor_DEL_Organization) */

void zxmd_md_AttributeAuthorityDescriptor_DEL_Organization(struct zxmd_md_AttributeAuthorityDescriptor_s* x, int n)
{
  struct zxmd_md_Organization_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Organization = (struct zxmd_md_Organization_s*)x->Organization->gg.g.n;
    return;
  case -1:
    y = (struct zxmd_md_Organization_s*)x->Organization;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zxmd_md_Organization_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Organization; n > 1 && y->gg.g.n; --n, y = (struct zxmd_md_Organization_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zxmd_md_AttributeAuthorityDescriptor_NUM_ContactPerson) */

int zxmd_md_AttributeAuthorityDescriptor_NUM_ContactPerson(struct zxmd_md_AttributeAuthorityDescriptor_s* x)
{
  struct zxmd_md_ContactPerson_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->ContactPerson; y; ++n, y = (struct zxmd_md_ContactPerson_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zxmd_md_AttributeAuthorityDescriptor_GET_ContactPerson) */

struct zxmd_md_ContactPerson_s* zxmd_md_AttributeAuthorityDescriptor_GET_ContactPerson(struct zxmd_md_AttributeAuthorityDescriptor_s* x, int n)
{
  struct zxmd_md_ContactPerson_s* y;
  if (!x) return 0;
  for (y = x->ContactPerson; n>=0 && y; --n, y = (struct zxmd_md_ContactPerson_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zxmd_md_AttributeAuthorityDescriptor_POP_ContactPerson) */

struct zxmd_md_ContactPerson_s* zxmd_md_AttributeAuthorityDescriptor_POP_ContactPerson(struct zxmd_md_AttributeAuthorityDescriptor_s* x)
{
  struct zxmd_md_ContactPerson_s* y;
  if (!x) return 0;
  y = x->ContactPerson;
  if (y)
    x->ContactPerson = (struct zxmd_md_ContactPerson_s*)y->gg.g.n;
  return y;
}

/* FUNC(zxmd_md_AttributeAuthorityDescriptor_PUSH_ContactPerson) */

void zxmd_md_AttributeAuthorityDescriptor_PUSH_ContactPerson(struct zxmd_md_AttributeAuthorityDescriptor_s* x, struct zxmd_md_ContactPerson_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->ContactPerson->gg.g;
  x->ContactPerson = z;
}

/* FUNC(zxmd_md_AttributeAuthorityDescriptor_REV_ContactPerson) */

void zxmd_md_AttributeAuthorityDescriptor_REV_ContactPerson(struct zxmd_md_AttributeAuthorityDescriptor_s* x)
{
  struct zxmd_md_ContactPerson_s* nxt;
  struct zxmd_md_ContactPerson_s* y;
  if (!x) return;
  y = x->ContactPerson;
  if (!y) return;
  x->ContactPerson = 0;
  while (y) {
    nxt = (struct zxmd_md_ContactPerson_s*)y->gg.g.n;
    y->gg.g.n = &x->ContactPerson->gg.g;
    x->ContactPerson = y;
    y = nxt;
  }
}

/* FUNC(zxmd_md_AttributeAuthorityDescriptor_PUT_ContactPerson) */

void zxmd_md_AttributeAuthorityDescriptor_PUT_ContactPerson(struct zxmd_md_AttributeAuthorityDescriptor_s* x, int n, struct zxmd_md_ContactPerson_s* z)
{
  struct zxmd_md_ContactPerson_s* y;
  if (!x || !z) return;
  y = x->ContactPerson;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->ContactPerson = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zxmd_md_ContactPerson_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zxmd_md_AttributeAuthorityDescriptor_ADD_ContactPerson) */

void zxmd_md_AttributeAuthorityDescriptor_ADD_ContactPerson(struct zxmd_md_AttributeAuthorityDescriptor_s* x, int n, struct zxmd_md_ContactPerson_s* z)
{
  struct zxmd_md_ContactPerson_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->ContactPerson->gg.g;
    x->ContactPerson = z;
    return;
  case -1:
    y = x->ContactPerson;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zxmd_md_ContactPerson_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->ContactPerson; n > 1 && y; --n, y = (struct zxmd_md_ContactPerson_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zxmd_md_AttributeAuthorityDescriptor_DEL_ContactPerson) */

void zxmd_md_AttributeAuthorityDescriptor_DEL_ContactPerson(struct zxmd_md_AttributeAuthorityDescriptor_s* x, int n)
{
  struct zxmd_md_ContactPerson_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->ContactPerson = (struct zxmd_md_ContactPerson_s*)x->ContactPerson->gg.g.n;
    return;
  case -1:
    y = (struct zxmd_md_ContactPerson_s*)x->ContactPerson;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zxmd_md_ContactPerson_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->ContactPerson; n > 1 && y->gg.g.n; --n, y = (struct zxmd_md_ContactPerson_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

/* FUNC(zxmd_md_AttributeAuthorityDescriptor_GET_ID) */
struct zx_str_s* zxmd_md_AttributeAuthorityDescriptor_GET_ID(struct zxmd_md_AttributeAuthorityDescriptor_s* x) { return x->ID; }
/* FUNC(zxmd_md_AttributeAuthorityDescriptor_PUT_ID) */
void zxmd_md_AttributeAuthorityDescriptor_PUT_ID(struct zxmd_md_AttributeAuthorityDescriptor_s* x, struct zx_str_s* y) { x->ID = y; }
/* FUNC(zxmd_md_AttributeAuthorityDescriptor_GET_validUntil) */
struct zx_str_s* zxmd_md_AttributeAuthorityDescriptor_GET_validUntil(struct zxmd_md_AttributeAuthorityDescriptor_s* x) { return x->validUntil; }
/* FUNC(zxmd_md_AttributeAuthorityDescriptor_PUT_validUntil) */
void zxmd_md_AttributeAuthorityDescriptor_PUT_validUntil(struct zxmd_md_AttributeAuthorityDescriptor_s* x, struct zx_str_s* y) { x->validUntil = y; }
/* FUNC(zxmd_md_AttributeAuthorityDescriptor_GET_cacheDuration) */
struct zx_str_s* zxmd_md_AttributeAuthorityDescriptor_GET_cacheDuration(struct zxmd_md_AttributeAuthorityDescriptor_s* x) { return x->cacheDuration; }
/* FUNC(zxmd_md_AttributeAuthorityDescriptor_PUT_cacheDuration) */
void zxmd_md_AttributeAuthorityDescriptor_PUT_cacheDuration(struct zxmd_md_AttributeAuthorityDescriptor_s* x, struct zx_str_s* y) { x->cacheDuration = y; }
/* FUNC(zxmd_md_AttributeAuthorityDescriptor_GET_protocolSupportEnumeration) */
struct zx_str_s* zxmd_md_AttributeAuthorityDescriptor_GET_protocolSupportEnumeration(struct zxmd_md_AttributeAuthorityDescriptor_s* x) { return x->protocolSupportEnumeration; }
/* FUNC(zxmd_md_AttributeAuthorityDescriptor_PUT_protocolSupportEnumeration) */
void zxmd_md_AttributeAuthorityDescriptor_PUT_protocolSupportEnumeration(struct zxmd_md_AttributeAuthorityDescriptor_s* x, struct zx_str_s* y) { x->protocolSupportEnumeration = y; }
/* FUNC(zxmd_md_AttributeAuthorityDescriptor_GET_errorURL) */
struct zx_str_s* zxmd_md_AttributeAuthorityDescriptor_GET_errorURL(struct zxmd_md_AttributeAuthorityDescriptor_s* x) { return x->errorURL; }
/* FUNC(zxmd_md_AttributeAuthorityDescriptor_PUT_errorURL) */
void zxmd_md_AttributeAuthorityDescriptor_PUT_errorURL(struct zxmd_md_AttributeAuthorityDescriptor_s* x, struct zx_str_s* y) { x->errorURL = y; }


/* FUNC(zxmd_md_AttributeAuthorityDescriptor_NUM_AttributeService) */

int zxmd_md_AttributeAuthorityDescriptor_NUM_AttributeService(struct zxmd_md_AttributeAuthorityDescriptor_s* x)
{
  struct zxmd_md_AttributeService_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->AttributeService; y; ++n, y = (struct zxmd_md_AttributeService_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zxmd_md_AttributeAuthorityDescriptor_GET_AttributeService) */

struct zxmd_md_AttributeService_s* zxmd_md_AttributeAuthorityDescriptor_GET_AttributeService(struct zxmd_md_AttributeAuthorityDescriptor_s* x, int n)
{
  struct zxmd_md_AttributeService_s* y;
  if (!x) return 0;
  for (y = x->AttributeService; n>=0 && y; --n, y = (struct zxmd_md_AttributeService_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zxmd_md_AttributeAuthorityDescriptor_POP_AttributeService) */

struct zxmd_md_AttributeService_s* zxmd_md_AttributeAuthorityDescriptor_POP_AttributeService(struct zxmd_md_AttributeAuthorityDescriptor_s* x)
{
  struct zxmd_md_AttributeService_s* y;
  if (!x) return 0;
  y = x->AttributeService;
  if (y)
    x->AttributeService = (struct zxmd_md_AttributeService_s*)y->gg.g.n;
  return y;
}

/* FUNC(zxmd_md_AttributeAuthorityDescriptor_PUSH_AttributeService) */

void zxmd_md_AttributeAuthorityDescriptor_PUSH_AttributeService(struct zxmd_md_AttributeAuthorityDescriptor_s* x, struct zxmd_md_AttributeService_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->AttributeService->gg.g;
  x->AttributeService = z;
}

/* FUNC(zxmd_md_AttributeAuthorityDescriptor_REV_AttributeService) */

void zxmd_md_AttributeAuthorityDescriptor_REV_AttributeService(struct zxmd_md_AttributeAuthorityDescriptor_s* x)
{
  struct zxmd_md_AttributeService_s* nxt;
  struct zxmd_md_AttributeService_s* y;
  if (!x) return;
  y = x->AttributeService;
  if (!y) return;
  x->AttributeService = 0;
  while (y) {
    nxt = (struct zxmd_md_AttributeService_s*)y->gg.g.n;
    y->gg.g.n = &x->AttributeService->gg.g;
    x->AttributeService = y;
    y = nxt;
  }
}

/* FUNC(zxmd_md_AttributeAuthorityDescriptor_PUT_AttributeService) */

void zxmd_md_AttributeAuthorityDescriptor_PUT_AttributeService(struct zxmd_md_AttributeAuthorityDescriptor_s* x, int n, struct zxmd_md_AttributeService_s* z)
{
  struct zxmd_md_AttributeService_s* y;
  if (!x || !z) return;
  y = x->AttributeService;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->AttributeService = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zxmd_md_AttributeService_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zxmd_md_AttributeAuthorityDescriptor_ADD_AttributeService) */

void zxmd_md_AttributeAuthorityDescriptor_ADD_AttributeService(struct zxmd_md_AttributeAuthorityDescriptor_s* x, int n, struct zxmd_md_AttributeService_s* z)
{
  struct zxmd_md_AttributeService_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->AttributeService->gg.g;
    x->AttributeService = z;
    return;
  case -1:
    y = x->AttributeService;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zxmd_md_AttributeService_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->AttributeService; n > 1 && y; --n, y = (struct zxmd_md_AttributeService_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zxmd_md_AttributeAuthorityDescriptor_DEL_AttributeService) */

void zxmd_md_AttributeAuthorityDescriptor_DEL_AttributeService(struct zxmd_md_AttributeAuthorityDescriptor_s* x, int n)
{
  struct zxmd_md_AttributeService_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->AttributeService = (struct zxmd_md_AttributeService_s*)x->AttributeService->gg.g.n;
    return;
  case -1:
    y = (struct zxmd_md_AttributeService_s*)x->AttributeService;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zxmd_md_AttributeService_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->AttributeService; n > 1 && y->gg.g.n; --n, y = (struct zxmd_md_AttributeService_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zxmd_md_AttributeAuthorityDescriptor_NUM_AssertionIDRequestService) */

int zxmd_md_AttributeAuthorityDescriptor_NUM_AssertionIDRequestService(struct zxmd_md_AttributeAuthorityDescriptor_s* x)
{
  struct zxmd_md_AssertionIDRequestService_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->AssertionIDRequestService; y; ++n, y = (struct zxmd_md_AssertionIDRequestService_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zxmd_md_AttributeAuthorityDescriptor_GET_AssertionIDRequestService) */

struct zxmd_md_AssertionIDRequestService_s* zxmd_md_AttributeAuthorityDescriptor_GET_AssertionIDRequestService(struct zxmd_md_AttributeAuthorityDescriptor_s* x, int n)
{
  struct zxmd_md_AssertionIDRequestService_s* y;
  if (!x) return 0;
  for (y = x->AssertionIDRequestService; n>=0 && y; --n, y = (struct zxmd_md_AssertionIDRequestService_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zxmd_md_AttributeAuthorityDescriptor_POP_AssertionIDRequestService) */

struct zxmd_md_AssertionIDRequestService_s* zxmd_md_AttributeAuthorityDescriptor_POP_AssertionIDRequestService(struct zxmd_md_AttributeAuthorityDescriptor_s* x)
{
  struct zxmd_md_AssertionIDRequestService_s* y;
  if (!x) return 0;
  y = x->AssertionIDRequestService;
  if (y)
    x->AssertionIDRequestService = (struct zxmd_md_AssertionIDRequestService_s*)y->gg.g.n;
  return y;
}

/* FUNC(zxmd_md_AttributeAuthorityDescriptor_PUSH_AssertionIDRequestService) */

void zxmd_md_AttributeAuthorityDescriptor_PUSH_AssertionIDRequestService(struct zxmd_md_AttributeAuthorityDescriptor_s* x, struct zxmd_md_AssertionIDRequestService_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->AssertionIDRequestService->gg.g;
  x->AssertionIDRequestService = z;
}

/* FUNC(zxmd_md_AttributeAuthorityDescriptor_REV_AssertionIDRequestService) */

void zxmd_md_AttributeAuthorityDescriptor_REV_AssertionIDRequestService(struct zxmd_md_AttributeAuthorityDescriptor_s* x)
{
  struct zxmd_md_AssertionIDRequestService_s* nxt;
  struct zxmd_md_AssertionIDRequestService_s* y;
  if (!x) return;
  y = x->AssertionIDRequestService;
  if (!y) return;
  x->AssertionIDRequestService = 0;
  while (y) {
    nxt = (struct zxmd_md_AssertionIDRequestService_s*)y->gg.g.n;
    y->gg.g.n = &x->AssertionIDRequestService->gg.g;
    x->AssertionIDRequestService = y;
    y = nxt;
  }
}

/* FUNC(zxmd_md_AttributeAuthorityDescriptor_PUT_AssertionIDRequestService) */

void zxmd_md_AttributeAuthorityDescriptor_PUT_AssertionIDRequestService(struct zxmd_md_AttributeAuthorityDescriptor_s* x, int n, struct zxmd_md_AssertionIDRequestService_s* z)
{
  struct zxmd_md_AssertionIDRequestService_s* y;
  if (!x || !z) return;
  y = x->AssertionIDRequestService;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->AssertionIDRequestService = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zxmd_md_AssertionIDRequestService_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zxmd_md_AttributeAuthorityDescriptor_ADD_AssertionIDRequestService) */

void zxmd_md_AttributeAuthorityDescriptor_ADD_AssertionIDRequestService(struct zxmd_md_AttributeAuthorityDescriptor_s* x, int n, struct zxmd_md_AssertionIDRequestService_s* z)
{
  struct zxmd_md_AssertionIDRequestService_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->AssertionIDRequestService->gg.g;
    x->AssertionIDRequestService = z;
    return;
  case -1:
    y = x->AssertionIDRequestService;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zxmd_md_AssertionIDRequestService_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->AssertionIDRequestService; n > 1 && y; --n, y = (struct zxmd_md_AssertionIDRequestService_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zxmd_md_AttributeAuthorityDescriptor_DEL_AssertionIDRequestService) */

void zxmd_md_AttributeAuthorityDescriptor_DEL_AssertionIDRequestService(struct zxmd_md_AttributeAuthorityDescriptor_s* x, int n)
{
  struct zxmd_md_AssertionIDRequestService_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->AssertionIDRequestService = (struct zxmd_md_AssertionIDRequestService_s*)x->AssertionIDRequestService->gg.g.n;
    return;
  case -1:
    y = (struct zxmd_md_AssertionIDRequestService_s*)x->AssertionIDRequestService;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zxmd_md_AssertionIDRequestService_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->AssertionIDRequestService; n > 1 && y->gg.g.n; --n, y = (struct zxmd_md_AssertionIDRequestService_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zxmd_md_AttributeAuthorityDescriptor_NUM_NameIDFormat) */

int zxmd_md_AttributeAuthorityDescriptor_NUM_NameIDFormat(struct zxmd_md_AttributeAuthorityDescriptor_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->NameIDFormat; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zxmd_md_AttributeAuthorityDescriptor_GET_NameIDFormat) */

struct zx_elem_s* zxmd_md_AttributeAuthorityDescriptor_GET_NameIDFormat(struct zxmd_md_AttributeAuthorityDescriptor_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->NameIDFormat; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zxmd_md_AttributeAuthorityDescriptor_POP_NameIDFormat) */

struct zx_elem_s* zxmd_md_AttributeAuthorityDescriptor_POP_NameIDFormat(struct zxmd_md_AttributeAuthorityDescriptor_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->NameIDFormat;
  if (y)
    x->NameIDFormat = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zxmd_md_AttributeAuthorityDescriptor_PUSH_NameIDFormat) */

void zxmd_md_AttributeAuthorityDescriptor_PUSH_NameIDFormat(struct zxmd_md_AttributeAuthorityDescriptor_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->NameIDFormat->g;
  x->NameIDFormat = z;
}

/* FUNC(zxmd_md_AttributeAuthorityDescriptor_REV_NameIDFormat) */

void zxmd_md_AttributeAuthorityDescriptor_REV_NameIDFormat(struct zxmd_md_AttributeAuthorityDescriptor_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->NameIDFormat;
  if (!y) return;
  x->NameIDFormat = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->NameIDFormat->g;
    x->NameIDFormat = y;
    y = nxt;
  }
}

/* FUNC(zxmd_md_AttributeAuthorityDescriptor_PUT_NameIDFormat) */

void zxmd_md_AttributeAuthorityDescriptor_PUT_NameIDFormat(struct zxmd_md_AttributeAuthorityDescriptor_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->NameIDFormat;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->NameIDFormat = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zxmd_md_AttributeAuthorityDescriptor_ADD_NameIDFormat) */

void zxmd_md_AttributeAuthorityDescriptor_ADD_NameIDFormat(struct zxmd_md_AttributeAuthorityDescriptor_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->NameIDFormat->g;
    x->NameIDFormat = z;
    return;
  case -1:
    y = x->NameIDFormat;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->NameIDFormat; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zxmd_md_AttributeAuthorityDescriptor_DEL_NameIDFormat) */

void zxmd_md_AttributeAuthorityDescriptor_DEL_NameIDFormat(struct zxmd_md_AttributeAuthorityDescriptor_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->NameIDFormat = (struct zx_elem_s*)x->NameIDFormat->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->NameIDFormat;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->NameIDFormat; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}



/* FUNC(zxmd_md_AttributeAuthorityDescriptor_NUM_AttributeProfile) */

int zxmd_md_AttributeAuthorityDescriptor_NUM_AttributeProfile(struct zxmd_md_AttributeAuthorityDescriptor_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->AttributeProfile; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zxmd_md_AttributeAuthorityDescriptor_GET_AttributeProfile) */

struct zx_elem_s* zxmd_md_AttributeAuthorityDescriptor_GET_AttributeProfile(struct zxmd_md_AttributeAuthorityDescriptor_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->AttributeProfile; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zxmd_md_AttributeAuthorityDescriptor_POP_AttributeProfile) */

struct zx_elem_s* zxmd_md_AttributeAuthorityDescriptor_POP_AttributeProfile(struct zxmd_md_AttributeAuthorityDescriptor_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->AttributeProfile;
  if (y)
    x->AttributeProfile = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zxmd_md_AttributeAuthorityDescriptor_PUSH_AttributeProfile) */

void zxmd_md_AttributeAuthorityDescriptor_PUSH_AttributeProfile(struct zxmd_md_AttributeAuthorityDescriptor_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->AttributeProfile->g;
  x->AttributeProfile = z;
}

/* FUNC(zxmd_md_AttributeAuthorityDescriptor_REV_AttributeProfile) */

void zxmd_md_AttributeAuthorityDescriptor_REV_AttributeProfile(struct zxmd_md_AttributeAuthorityDescriptor_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->AttributeProfile;
  if (!y) return;
  x->AttributeProfile = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->AttributeProfile->g;
    x->AttributeProfile = y;
    y = nxt;
  }
}

/* FUNC(zxmd_md_AttributeAuthorityDescriptor_PUT_AttributeProfile) */

void zxmd_md_AttributeAuthorityDescriptor_PUT_AttributeProfile(struct zxmd_md_AttributeAuthorityDescriptor_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->AttributeProfile;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->AttributeProfile = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zxmd_md_AttributeAuthorityDescriptor_ADD_AttributeProfile) */

void zxmd_md_AttributeAuthorityDescriptor_ADD_AttributeProfile(struct zxmd_md_AttributeAuthorityDescriptor_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->AttributeProfile->g;
    x->AttributeProfile = z;
    return;
  case -1:
    y = x->AttributeProfile;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->AttributeProfile; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zxmd_md_AttributeAuthorityDescriptor_DEL_AttributeProfile) */

void zxmd_md_AttributeAuthorityDescriptor_DEL_AttributeProfile(struct zxmd_md_AttributeAuthorityDescriptor_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->AttributeProfile = (struct zx_elem_s*)x->AttributeProfile->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->AttributeProfile;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->AttributeProfile; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}



/* FUNC(zxmd_md_AttributeAuthorityDescriptor_NUM_Attribute) */

int zxmd_md_AttributeAuthorityDescriptor_NUM_Attribute(struct zxmd_md_AttributeAuthorityDescriptor_s* x)
{
  struct zxmd_sa_Attribute_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Attribute; y; ++n, y = (struct zxmd_sa_Attribute_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zxmd_md_AttributeAuthorityDescriptor_GET_Attribute) */

struct zxmd_sa_Attribute_s* zxmd_md_AttributeAuthorityDescriptor_GET_Attribute(struct zxmd_md_AttributeAuthorityDescriptor_s* x, int n)
{
  struct zxmd_sa_Attribute_s* y;
  if (!x) return 0;
  for (y = x->Attribute; n>=0 && y; --n, y = (struct zxmd_sa_Attribute_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zxmd_md_AttributeAuthorityDescriptor_POP_Attribute) */

struct zxmd_sa_Attribute_s* zxmd_md_AttributeAuthorityDescriptor_POP_Attribute(struct zxmd_md_AttributeAuthorityDescriptor_s* x)
{
  struct zxmd_sa_Attribute_s* y;
  if (!x) return 0;
  y = x->Attribute;
  if (y)
    x->Attribute = (struct zxmd_sa_Attribute_s*)y->gg.g.n;
  return y;
}

/* FUNC(zxmd_md_AttributeAuthorityDescriptor_PUSH_Attribute) */

void zxmd_md_AttributeAuthorityDescriptor_PUSH_Attribute(struct zxmd_md_AttributeAuthorityDescriptor_s* x, struct zxmd_sa_Attribute_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Attribute->gg.g;
  x->Attribute = z;
}

/* FUNC(zxmd_md_AttributeAuthorityDescriptor_REV_Attribute) */

void zxmd_md_AttributeAuthorityDescriptor_REV_Attribute(struct zxmd_md_AttributeAuthorityDescriptor_s* x)
{
  struct zxmd_sa_Attribute_s* nxt;
  struct zxmd_sa_Attribute_s* y;
  if (!x) return;
  y = x->Attribute;
  if (!y) return;
  x->Attribute = 0;
  while (y) {
    nxt = (struct zxmd_sa_Attribute_s*)y->gg.g.n;
    y->gg.g.n = &x->Attribute->gg.g;
    x->Attribute = y;
    y = nxt;
  }
}

/* FUNC(zxmd_md_AttributeAuthorityDescriptor_PUT_Attribute) */

void zxmd_md_AttributeAuthorityDescriptor_PUT_Attribute(struct zxmd_md_AttributeAuthorityDescriptor_s* x, int n, struct zxmd_sa_Attribute_s* z)
{
  struct zxmd_sa_Attribute_s* y;
  if (!x || !z) return;
  y = x->Attribute;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Attribute = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zxmd_sa_Attribute_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zxmd_md_AttributeAuthorityDescriptor_ADD_Attribute) */

void zxmd_md_AttributeAuthorityDescriptor_ADD_Attribute(struct zxmd_md_AttributeAuthorityDescriptor_s* x, int n, struct zxmd_sa_Attribute_s* z)
{
  struct zxmd_sa_Attribute_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->Attribute->gg.g;
    x->Attribute = z;
    return;
  case -1:
    y = x->Attribute;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zxmd_sa_Attribute_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Attribute; n > 1 && y; --n, y = (struct zxmd_sa_Attribute_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zxmd_md_AttributeAuthorityDescriptor_DEL_Attribute) */

void zxmd_md_AttributeAuthorityDescriptor_DEL_Attribute(struct zxmd_md_AttributeAuthorityDescriptor_s* x, int n)
{
  struct zxmd_sa_Attribute_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Attribute = (struct zxmd_sa_Attribute_s*)x->Attribute->gg.g.n;
    return;
  case -1:
    y = (struct zxmd_sa_Attribute_s*)x->Attribute;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zxmd_sa_Attribute_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Attribute; n > 1 && y->gg.g.n; --n, y = (struct zxmd_sa_Attribute_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}








/* FUNC(zxmd_md_AttributeConsumingService_NUM_ServiceName) */

int zxmd_md_AttributeConsumingService_NUM_ServiceName(struct zxmd_md_AttributeConsumingService_s* x)
{
  struct zxmd_md_ServiceName_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->ServiceName; y; ++n, y = (struct zxmd_md_ServiceName_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zxmd_md_AttributeConsumingService_GET_ServiceName) */

struct zxmd_md_ServiceName_s* zxmd_md_AttributeConsumingService_GET_ServiceName(struct zxmd_md_AttributeConsumingService_s* x, int n)
{
  struct zxmd_md_ServiceName_s* y;
  if (!x) return 0;
  for (y = x->ServiceName; n>=0 && y; --n, y = (struct zxmd_md_ServiceName_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zxmd_md_AttributeConsumingService_POP_ServiceName) */

struct zxmd_md_ServiceName_s* zxmd_md_AttributeConsumingService_POP_ServiceName(struct zxmd_md_AttributeConsumingService_s* x)
{
  struct zxmd_md_ServiceName_s* y;
  if (!x) return 0;
  y = x->ServiceName;
  if (y)
    x->ServiceName = (struct zxmd_md_ServiceName_s*)y->gg.g.n;
  return y;
}

/* FUNC(zxmd_md_AttributeConsumingService_PUSH_ServiceName) */

void zxmd_md_AttributeConsumingService_PUSH_ServiceName(struct zxmd_md_AttributeConsumingService_s* x, struct zxmd_md_ServiceName_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->ServiceName->gg.g;
  x->ServiceName = z;
}

/* FUNC(zxmd_md_AttributeConsumingService_REV_ServiceName) */

void zxmd_md_AttributeConsumingService_REV_ServiceName(struct zxmd_md_AttributeConsumingService_s* x)
{
  struct zxmd_md_ServiceName_s* nxt;
  struct zxmd_md_ServiceName_s* y;
  if (!x) return;
  y = x->ServiceName;
  if (!y) return;
  x->ServiceName = 0;
  while (y) {
    nxt = (struct zxmd_md_ServiceName_s*)y->gg.g.n;
    y->gg.g.n = &x->ServiceName->gg.g;
    x->ServiceName = y;
    y = nxt;
  }
}

/* FUNC(zxmd_md_AttributeConsumingService_PUT_ServiceName) */

void zxmd_md_AttributeConsumingService_PUT_ServiceName(struct zxmd_md_AttributeConsumingService_s* x, int n, struct zxmd_md_ServiceName_s* z)
{
  struct zxmd_md_ServiceName_s* y;
  if (!x || !z) return;
  y = x->ServiceName;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->ServiceName = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zxmd_md_ServiceName_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zxmd_md_AttributeConsumingService_ADD_ServiceName) */

void zxmd_md_AttributeConsumingService_ADD_ServiceName(struct zxmd_md_AttributeConsumingService_s* x, int n, struct zxmd_md_ServiceName_s* z)
{
  struct zxmd_md_ServiceName_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->ServiceName->gg.g;
    x->ServiceName = z;
    return;
  case -1:
    y = x->ServiceName;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zxmd_md_ServiceName_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->ServiceName; n > 1 && y; --n, y = (struct zxmd_md_ServiceName_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zxmd_md_AttributeConsumingService_DEL_ServiceName) */

void zxmd_md_AttributeConsumingService_DEL_ServiceName(struct zxmd_md_AttributeConsumingService_s* x, int n)
{
  struct zxmd_md_ServiceName_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->ServiceName = (struct zxmd_md_ServiceName_s*)x->ServiceName->gg.g.n;
    return;
  case -1:
    y = (struct zxmd_md_ServiceName_s*)x->ServiceName;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zxmd_md_ServiceName_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->ServiceName; n > 1 && y->gg.g.n; --n, y = (struct zxmd_md_ServiceName_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zxmd_md_AttributeConsumingService_NUM_ServiceDescription) */

int zxmd_md_AttributeConsumingService_NUM_ServiceDescription(struct zxmd_md_AttributeConsumingService_s* x)
{
  struct zxmd_md_ServiceDescription_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->ServiceDescription; y; ++n, y = (struct zxmd_md_ServiceDescription_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zxmd_md_AttributeConsumingService_GET_ServiceDescription) */

struct zxmd_md_ServiceDescription_s* zxmd_md_AttributeConsumingService_GET_ServiceDescription(struct zxmd_md_AttributeConsumingService_s* x, int n)
{
  struct zxmd_md_ServiceDescription_s* y;
  if (!x) return 0;
  for (y = x->ServiceDescription; n>=0 && y; --n, y = (struct zxmd_md_ServiceDescription_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zxmd_md_AttributeConsumingService_POP_ServiceDescription) */

struct zxmd_md_ServiceDescription_s* zxmd_md_AttributeConsumingService_POP_ServiceDescription(struct zxmd_md_AttributeConsumingService_s* x)
{
  struct zxmd_md_ServiceDescription_s* y;
  if (!x) return 0;
  y = x->ServiceDescription;
  if (y)
    x->ServiceDescription = (struct zxmd_md_ServiceDescription_s*)y->gg.g.n;
  return y;
}

/* FUNC(zxmd_md_AttributeConsumingService_PUSH_ServiceDescription) */

void zxmd_md_AttributeConsumingService_PUSH_ServiceDescription(struct zxmd_md_AttributeConsumingService_s* x, struct zxmd_md_ServiceDescription_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->ServiceDescription->gg.g;
  x->ServiceDescription = z;
}

/* FUNC(zxmd_md_AttributeConsumingService_REV_ServiceDescription) */

void zxmd_md_AttributeConsumingService_REV_ServiceDescription(struct zxmd_md_AttributeConsumingService_s* x)
{
  struct zxmd_md_ServiceDescription_s* nxt;
  struct zxmd_md_ServiceDescription_s* y;
  if (!x) return;
  y = x->ServiceDescription;
  if (!y) return;
  x->ServiceDescription = 0;
  while (y) {
    nxt = (struct zxmd_md_ServiceDescription_s*)y->gg.g.n;
    y->gg.g.n = &x->ServiceDescription->gg.g;
    x->ServiceDescription = y;
    y = nxt;
  }
}

/* FUNC(zxmd_md_AttributeConsumingService_PUT_ServiceDescription) */

void zxmd_md_AttributeConsumingService_PUT_ServiceDescription(struct zxmd_md_AttributeConsumingService_s* x, int n, struct zxmd_md_ServiceDescription_s* z)
{
  struct zxmd_md_ServiceDescription_s* y;
  if (!x || !z) return;
  y = x->ServiceDescription;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->ServiceDescription = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zxmd_md_ServiceDescription_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zxmd_md_AttributeConsumingService_ADD_ServiceDescription) */

void zxmd_md_AttributeConsumingService_ADD_ServiceDescription(struct zxmd_md_AttributeConsumingService_s* x, int n, struct zxmd_md_ServiceDescription_s* z)
{
  struct zxmd_md_ServiceDescription_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->ServiceDescription->gg.g;
    x->ServiceDescription = z;
    return;
  case -1:
    y = x->ServiceDescription;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zxmd_md_ServiceDescription_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->ServiceDescription; n > 1 && y; --n, y = (struct zxmd_md_ServiceDescription_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zxmd_md_AttributeConsumingService_DEL_ServiceDescription) */

void zxmd_md_AttributeConsumingService_DEL_ServiceDescription(struct zxmd_md_AttributeConsumingService_s* x, int n)
{
  struct zxmd_md_ServiceDescription_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->ServiceDescription = (struct zxmd_md_ServiceDescription_s*)x->ServiceDescription->gg.g.n;
    return;
  case -1:
    y = (struct zxmd_md_ServiceDescription_s*)x->ServiceDescription;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zxmd_md_ServiceDescription_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->ServiceDescription; n > 1 && y->gg.g.n; --n, y = (struct zxmd_md_ServiceDescription_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zxmd_md_AttributeConsumingService_NUM_RequestedAttribute) */

int zxmd_md_AttributeConsumingService_NUM_RequestedAttribute(struct zxmd_md_AttributeConsumingService_s* x)
{
  struct zxmd_md_RequestedAttribute_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->RequestedAttribute; y; ++n, y = (struct zxmd_md_RequestedAttribute_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zxmd_md_AttributeConsumingService_GET_RequestedAttribute) */

struct zxmd_md_RequestedAttribute_s* zxmd_md_AttributeConsumingService_GET_RequestedAttribute(struct zxmd_md_AttributeConsumingService_s* x, int n)
{
  struct zxmd_md_RequestedAttribute_s* y;
  if (!x) return 0;
  for (y = x->RequestedAttribute; n>=0 && y; --n, y = (struct zxmd_md_RequestedAttribute_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zxmd_md_AttributeConsumingService_POP_RequestedAttribute) */

struct zxmd_md_RequestedAttribute_s* zxmd_md_AttributeConsumingService_POP_RequestedAttribute(struct zxmd_md_AttributeConsumingService_s* x)
{
  struct zxmd_md_RequestedAttribute_s* y;
  if (!x) return 0;
  y = x->RequestedAttribute;
  if (y)
    x->RequestedAttribute = (struct zxmd_md_RequestedAttribute_s*)y->gg.g.n;
  return y;
}

/* FUNC(zxmd_md_AttributeConsumingService_PUSH_RequestedAttribute) */

void zxmd_md_AttributeConsumingService_PUSH_RequestedAttribute(struct zxmd_md_AttributeConsumingService_s* x, struct zxmd_md_RequestedAttribute_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->RequestedAttribute->gg.g;
  x->RequestedAttribute = z;
}

/* FUNC(zxmd_md_AttributeConsumingService_REV_RequestedAttribute) */

void zxmd_md_AttributeConsumingService_REV_RequestedAttribute(struct zxmd_md_AttributeConsumingService_s* x)
{
  struct zxmd_md_RequestedAttribute_s* nxt;
  struct zxmd_md_RequestedAttribute_s* y;
  if (!x) return;
  y = x->RequestedAttribute;
  if (!y) return;
  x->RequestedAttribute = 0;
  while (y) {
    nxt = (struct zxmd_md_RequestedAttribute_s*)y->gg.g.n;
    y->gg.g.n = &x->RequestedAttribute->gg.g;
    x->RequestedAttribute = y;
    y = nxt;
  }
}

/* FUNC(zxmd_md_AttributeConsumingService_PUT_RequestedAttribute) */

void zxmd_md_AttributeConsumingService_PUT_RequestedAttribute(struct zxmd_md_AttributeConsumingService_s* x, int n, struct zxmd_md_RequestedAttribute_s* z)
{
  struct zxmd_md_RequestedAttribute_s* y;
  if (!x || !z) return;
  y = x->RequestedAttribute;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->RequestedAttribute = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zxmd_md_RequestedAttribute_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zxmd_md_AttributeConsumingService_ADD_RequestedAttribute) */

void zxmd_md_AttributeConsumingService_ADD_RequestedAttribute(struct zxmd_md_AttributeConsumingService_s* x, int n, struct zxmd_md_RequestedAttribute_s* z)
{
  struct zxmd_md_RequestedAttribute_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->RequestedAttribute->gg.g;
    x->RequestedAttribute = z;
    return;
  case -1:
    y = x->RequestedAttribute;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zxmd_md_RequestedAttribute_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->RequestedAttribute; n > 1 && y; --n, y = (struct zxmd_md_RequestedAttribute_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zxmd_md_AttributeConsumingService_DEL_RequestedAttribute) */

void zxmd_md_AttributeConsumingService_DEL_RequestedAttribute(struct zxmd_md_AttributeConsumingService_s* x, int n)
{
  struct zxmd_md_RequestedAttribute_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->RequestedAttribute = (struct zxmd_md_RequestedAttribute_s*)x->RequestedAttribute->gg.g.n;
    return;
  case -1:
    y = (struct zxmd_md_RequestedAttribute_s*)x->RequestedAttribute;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zxmd_md_RequestedAttribute_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->RequestedAttribute; n > 1 && y->gg.g.n; --n, y = (struct zxmd_md_RequestedAttribute_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

/* FUNC(zxmd_md_AttributeConsumingService_GET_index) */
struct zx_str_s* zxmd_md_AttributeConsumingService_GET_index(struct zxmd_md_AttributeConsumingService_s* x) { return x->index; }
/* FUNC(zxmd_md_AttributeConsumingService_PUT_index) */
void zxmd_md_AttributeConsumingService_PUT_index(struct zxmd_md_AttributeConsumingService_s* x, struct zx_str_s* y) { x->index = y; }
/* FUNC(zxmd_md_AttributeConsumingService_GET_isDefault) */
struct zx_str_s* zxmd_md_AttributeConsumingService_GET_isDefault(struct zxmd_md_AttributeConsumingService_s* x) { return x->isDefault; }
/* FUNC(zxmd_md_AttributeConsumingService_PUT_isDefault) */
void zxmd_md_AttributeConsumingService_PUT_isDefault(struct zxmd_md_AttributeConsumingService_s* x, struct zx_str_s* y) { x->isDefault = y; }





/* FUNC(zxmd_md_AttributeService_GET_Binding) */
struct zx_str_s* zxmd_md_AttributeService_GET_Binding(struct zxmd_md_AttributeService_s* x) { return x->Binding; }
/* FUNC(zxmd_md_AttributeService_PUT_Binding) */
void zxmd_md_AttributeService_PUT_Binding(struct zxmd_md_AttributeService_s* x, struct zx_str_s* y) { x->Binding = y; }
/* FUNC(zxmd_md_AttributeService_GET_Location) */
struct zx_str_s* zxmd_md_AttributeService_GET_Location(struct zxmd_md_AttributeService_s* x) { return x->Location; }
/* FUNC(zxmd_md_AttributeService_PUT_Location) */
void zxmd_md_AttributeService_PUT_Location(struct zxmd_md_AttributeService_s* x, struct zx_str_s* y) { x->Location = y; }
/* FUNC(zxmd_md_AttributeService_GET_ResponseLocation) */
struct zx_str_s* zxmd_md_AttributeService_GET_ResponseLocation(struct zxmd_md_AttributeService_s* x) { return x->ResponseLocation; }
/* FUNC(zxmd_md_AttributeService_PUT_ResponseLocation) */
void zxmd_md_AttributeService_PUT_ResponseLocation(struct zxmd_md_AttributeService_s* x, struct zx_str_s* y) { x->ResponseLocation = y; }







/* FUNC(zxmd_md_AuthnAuthorityDescriptor_NUM_Signature) */

int zxmd_md_AuthnAuthorityDescriptor_NUM_Signature(struct zxmd_md_AuthnAuthorityDescriptor_s* x)
{
  struct zxmd_ds_Signature_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Signature; y; ++n, y = (struct zxmd_ds_Signature_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zxmd_md_AuthnAuthorityDescriptor_GET_Signature) */

struct zxmd_ds_Signature_s* zxmd_md_AuthnAuthorityDescriptor_GET_Signature(struct zxmd_md_AuthnAuthorityDescriptor_s* x, int n)
{
  struct zxmd_ds_Signature_s* y;
  if (!x) return 0;
  for (y = x->Signature; n>=0 && y; --n, y = (struct zxmd_ds_Signature_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zxmd_md_AuthnAuthorityDescriptor_POP_Signature) */

struct zxmd_ds_Signature_s* zxmd_md_AuthnAuthorityDescriptor_POP_Signature(struct zxmd_md_AuthnAuthorityDescriptor_s* x)
{
  struct zxmd_ds_Signature_s* y;
  if (!x) return 0;
  y = x->Signature;
  if (y)
    x->Signature = (struct zxmd_ds_Signature_s*)y->gg.g.n;
  return y;
}

/* FUNC(zxmd_md_AuthnAuthorityDescriptor_PUSH_Signature) */

void zxmd_md_AuthnAuthorityDescriptor_PUSH_Signature(struct zxmd_md_AuthnAuthorityDescriptor_s* x, struct zxmd_ds_Signature_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Signature->gg.g;
  x->Signature = z;
}

/* FUNC(zxmd_md_AuthnAuthorityDescriptor_REV_Signature) */

void zxmd_md_AuthnAuthorityDescriptor_REV_Signature(struct zxmd_md_AuthnAuthorityDescriptor_s* x)
{
  struct zxmd_ds_Signature_s* nxt;
  struct zxmd_ds_Signature_s* y;
  if (!x) return;
  y = x->Signature;
  if (!y) return;
  x->Signature = 0;
  while (y) {
    nxt = (struct zxmd_ds_Signature_s*)y->gg.g.n;
    y->gg.g.n = &x->Signature->gg.g;
    x->Signature = y;
    y = nxt;
  }
}

/* FUNC(zxmd_md_AuthnAuthorityDescriptor_PUT_Signature) */

void zxmd_md_AuthnAuthorityDescriptor_PUT_Signature(struct zxmd_md_AuthnAuthorityDescriptor_s* x, int n, struct zxmd_ds_Signature_s* z)
{
  struct zxmd_ds_Signature_s* y;
  if (!x || !z) return;
  y = x->Signature;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Signature = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zxmd_ds_Signature_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zxmd_md_AuthnAuthorityDescriptor_ADD_Signature) */

void zxmd_md_AuthnAuthorityDescriptor_ADD_Signature(struct zxmd_md_AuthnAuthorityDescriptor_s* x, int n, struct zxmd_ds_Signature_s* z)
{
  struct zxmd_ds_Signature_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->Signature->gg.g;
    x->Signature = z;
    return;
  case -1:
    y = x->Signature;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zxmd_ds_Signature_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Signature; n > 1 && y; --n, y = (struct zxmd_ds_Signature_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zxmd_md_AuthnAuthorityDescriptor_DEL_Signature) */

void zxmd_md_AuthnAuthorityDescriptor_DEL_Signature(struct zxmd_md_AuthnAuthorityDescriptor_s* x, int n)
{
  struct zxmd_ds_Signature_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Signature = (struct zxmd_ds_Signature_s*)x->Signature->gg.g.n;
    return;
  case -1:
    y = (struct zxmd_ds_Signature_s*)x->Signature;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zxmd_ds_Signature_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Signature; n > 1 && y->gg.g.n; --n, y = (struct zxmd_ds_Signature_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zxmd_md_AuthnAuthorityDescriptor_NUM_Extensions) */

int zxmd_md_AuthnAuthorityDescriptor_NUM_Extensions(struct zxmd_md_AuthnAuthorityDescriptor_s* x)
{
  struct zxmd_md_Extensions_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Extensions; y; ++n, y = (struct zxmd_md_Extensions_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zxmd_md_AuthnAuthorityDescriptor_GET_Extensions) */

struct zxmd_md_Extensions_s* zxmd_md_AuthnAuthorityDescriptor_GET_Extensions(struct zxmd_md_AuthnAuthorityDescriptor_s* x, int n)
{
  struct zxmd_md_Extensions_s* y;
  if (!x) return 0;
  for (y = x->Extensions; n>=0 && y; --n, y = (struct zxmd_md_Extensions_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zxmd_md_AuthnAuthorityDescriptor_POP_Extensions) */

struct zxmd_md_Extensions_s* zxmd_md_AuthnAuthorityDescriptor_POP_Extensions(struct zxmd_md_AuthnAuthorityDescriptor_s* x)
{
  struct zxmd_md_Extensions_s* y;
  if (!x) return 0;
  y = x->Extensions;
  if (y)
    x->Extensions = (struct zxmd_md_Extensions_s*)y->gg.g.n;
  return y;
}

/* FUNC(zxmd_md_AuthnAuthorityDescriptor_PUSH_Extensions) */

void zxmd_md_AuthnAuthorityDescriptor_PUSH_Extensions(struct zxmd_md_AuthnAuthorityDescriptor_s* x, struct zxmd_md_Extensions_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Extensions->gg.g;
  x->Extensions = z;
}

/* FUNC(zxmd_md_AuthnAuthorityDescriptor_REV_Extensions) */

void zxmd_md_AuthnAuthorityDescriptor_REV_Extensions(struct zxmd_md_AuthnAuthorityDescriptor_s* x)
{
  struct zxmd_md_Extensions_s* nxt;
  struct zxmd_md_Extensions_s* y;
  if (!x) return;
  y = x->Extensions;
  if (!y) return;
  x->Extensions = 0;
  while (y) {
    nxt = (struct zxmd_md_Extensions_s*)y->gg.g.n;
    y->gg.g.n = &x->Extensions->gg.g;
    x->Extensions = y;
    y = nxt;
  }
}

/* FUNC(zxmd_md_AuthnAuthorityDescriptor_PUT_Extensions) */

void zxmd_md_AuthnAuthorityDescriptor_PUT_Extensions(struct zxmd_md_AuthnAuthorityDescriptor_s* x, int n, struct zxmd_md_Extensions_s* z)
{
  struct zxmd_md_Extensions_s* y;
  if (!x || !z) return;
  y = x->Extensions;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Extensions = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zxmd_md_Extensions_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zxmd_md_AuthnAuthorityDescriptor_ADD_Extensions) */

void zxmd_md_AuthnAuthorityDescriptor_ADD_Extensions(struct zxmd_md_AuthnAuthorityDescriptor_s* x, int n, struct zxmd_md_Extensions_s* z)
{
  struct zxmd_md_Extensions_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->Extensions->gg.g;
    x->Extensions = z;
    return;
  case -1:
    y = x->Extensions;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zxmd_md_Extensions_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Extensions; n > 1 && y; --n, y = (struct zxmd_md_Extensions_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zxmd_md_AuthnAuthorityDescriptor_DEL_Extensions) */

void zxmd_md_AuthnAuthorityDescriptor_DEL_Extensions(struct zxmd_md_AuthnAuthorityDescriptor_s* x, int n)
{
  struct zxmd_md_Extensions_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Extensions = (struct zxmd_md_Extensions_s*)x->Extensions->gg.g.n;
    return;
  case -1:
    y = (struct zxmd_md_Extensions_s*)x->Extensions;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zxmd_md_Extensions_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Extensions; n > 1 && y->gg.g.n; --n, y = (struct zxmd_md_Extensions_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zxmd_md_AuthnAuthorityDescriptor_NUM_KeyDescriptor) */

int zxmd_md_AuthnAuthorityDescriptor_NUM_KeyDescriptor(struct zxmd_md_AuthnAuthorityDescriptor_s* x)
{
  struct zxmd_md_KeyDescriptor_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->KeyDescriptor; y; ++n, y = (struct zxmd_md_KeyDescriptor_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zxmd_md_AuthnAuthorityDescriptor_GET_KeyDescriptor) */

struct zxmd_md_KeyDescriptor_s* zxmd_md_AuthnAuthorityDescriptor_GET_KeyDescriptor(struct zxmd_md_AuthnAuthorityDescriptor_s* x, int n)
{
  struct zxmd_md_KeyDescriptor_s* y;
  if (!x) return 0;
  for (y = x->KeyDescriptor; n>=0 && y; --n, y = (struct zxmd_md_KeyDescriptor_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zxmd_md_AuthnAuthorityDescriptor_POP_KeyDescriptor) */

struct zxmd_md_KeyDescriptor_s* zxmd_md_AuthnAuthorityDescriptor_POP_KeyDescriptor(struct zxmd_md_AuthnAuthorityDescriptor_s* x)
{
  struct zxmd_md_KeyDescriptor_s* y;
  if (!x) return 0;
  y = x->KeyDescriptor;
  if (y)
    x->KeyDescriptor = (struct zxmd_md_KeyDescriptor_s*)y->gg.g.n;
  return y;
}

/* FUNC(zxmd_md_AuthnAuthorityDescriptor_PUSH_KeyDescriptor) */

void zxmd_md_AuthnAuthorityDescriptor_PUSH_KeyDescriptor(struct zxmd_md_AuthnAuthorityDescriptor_s* x, struct zxmd_md_KeyDescriptor_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->KeyDescriptor->gg.g;
  x->KeyDescriptor = z;
}

/* FUNC(zxmd_md_AuthnAuthorityDescriptor_REV_KeyDescriptor) */

void zxmd_md_AuthnAuthorityDescriptor_REV_KeyDescriptor(struct zxmd_md_AuthnAuthorityDescriptor_s* x)
{
  struct zxmd_md_KeyDescriptor_s* nxt;
  struct zxmd_md_KeyDescriptor_s* y;
  if (!x) return;
  y = x->KeyDescriptor;
  if (!y) return;
  x->KeyDescriptor = 0;
  while (y) {
    nxt = (struct zxmd_md_KeyDescriptor_s*)y->gg.g.n;
    y->gg.g.n = &x->KeyDescriptor->gg.g;
    x->KeyDescriptor = y;
    y = nxt;
  }
}

/* FUNC(zxmd_md_AuthnAuthorityDescriptor_PUT_KeyDescriptor) */

void zxmd_md_AuthnAuthorityDescriptor_PUT_KeyDescriptor(struct zxmd_md_AuthnAuthorityDescriptor_s* x, int n, struct zxmd_md_KeyDescriptor_s* z)
{
  struct zxmd_md_KeyDescriptor_s* y;
  if (!x || !z) return;
  y = x->KeyDescriptor;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->KeyDescriptor = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zxmd_md_KeyDescriptor_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zxmd_md_AuthnAuthorityDescriptor_ADD_KeyDescriptor) */

void zxmd_md_AuthnAuthorityDescriptor_ADD_KeyDescriptor(struct zxmd_md_AuthnAuthorityDescriptor_s* x, int n, struct zxmd_md_KeyDescriptor_s* z)
{
  struct zxmd_md_KeyDescriptor_s* y;
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
    for (; y->gg.g.n; y = (struct zxmd_md_KeyDescriptor_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->KeyDescriptor; n > 1 && y; --n, y = (struct zxmd_md_KeyDescriptor_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zxmd_md_AuthnAuthorityDescriptor_DEL_KeyDescriptor) */

void zxmd_md_AuthnAuthorityDescriptor_DEL_KeyDescriptor(struct zxmd_md_AuthnAuthorityDescriptor_s* x, int n)
{
  struct zxmd_md_KeyDescriptor_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->KeyDescriptor = (struct zxmd_md_KeyDescriptor_s*)x->KeyDescriptor->gg.g.n;
    return;
  case -1:
    y = (struct zxmd_md_KeyDescriptor_s*)x->KeyDescriptor;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zxmd_md_KeyDescriptor_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->KeyDescriptor; n > 1 && y->gg.g.n; --n, y = (struct zxmd_md_KeyDescriptor_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zxmd_md_AuthnAuthorityDescriptor_NUM_Organization) */

int zxmd_md_AuthnAuthorityDescriptor_NUM_Organization(struct zxmd_md_AuthnAuthorityDescriptor_s* x)
{
  struct zxmd_md_Organization_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Organization; y; ++n, y = (struct zxmd_md_Organization_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zxmd_md_AuthnAuthorityDescriptor_GET_Organization) */

struct zxmd_md_Organization_s* zxmd_md_AuthnAuthorityDescriptor_GET_Organization(struct zxmd_md_AuthnAuthorityDescriptor_s* x, int n)
{
  struct zxmd_md_Organization_s* y;
  if (!x) return 0;
  for (y = x->Organization; n>=0 && y; --n, y = (struct zxmd_md_Organization_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zxmd_md_AuthnAuthorityDescriptor_POP_Organization) */

struct zxmd_md_Organization_s* zxmd_md_AuthnAuthorityDescriptor_POP_Organization(struct zxmd_md_AuthnAuthorityDescriptor_s* x)
{
  struct zxmd_md_Organization_s* y;
  if (!x) return 0;
  y = x->Organization;
  if (y)
    x->Organization = (struct zxmd_md_Organization_s*)y->gg.g.n;
  return y;
}

/* FUNC(zxmd_md_AuthnAuthorityDescriptor_PUSH_Organization) */

void zxmd_md_AuthnAuthorityDescriptor_PUSH_Organization(struct zxmd_md_AuthnAuthorityDescriptor_s* x, struct zxmd_md_Organization_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Organization->gg.g;
  x->Organization = z;
}

/* FUNC(zxmd_md_AuthnAuthorityDescriptor_REV_Organization) */

void zxmd_md_AuthnAuthorityDescriptor_REV_Organization(struct zxmd_md_AuthnAuthorityDescriptor_s* x)
{
  struct zxmd_md_Organization_s* nxt;
  struct zxmd_md_Organization_s* y;
  if (!x) return;
  y = x->Organization;
  if (!y) return;
  x->Organization = 0;
  while (y) {
    nxt = (struct zxmd_md_Organization_s*)y->gg.g.n;
    y->gg.g.n = &x->Organization->gg.g;
    x->Organization = y;
    y = nxt;
  }
}

/* FUNC(zxmd_md_AuthnAuthorityDescriptor_PUT_Organization) */

void zxmd_md_AuthnAuthorityDescriptor_PUT_Organization(struct zxmd_md_AuthnAuthorityDescriptor_s* x, int n, struct zxmd_md_Organization_s* z)
{
  struct zxmd_md_Organization_s* y;
  if (!x || !z) return;
  y = x->Organization;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Organization = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zxmd_md_Organization_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zxmd_md_AuthnAuthorityDescriptor_ADD_Organization) */

void zxmd_md_AuthnAuthorityDescriptor_ADD_Organization(struct zxmd_md_AuthnAuthorityDescriptor_s* x, int n, struct zxmd_md_Organization_s* z)
{
  struct zxmd_md_Organization_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->Organization->gg.g;
    x->Organization = z;
    return;
  case -1:
    y = x->Organization;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zxmd_md_Organization_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Organization; n > 1 && y; --n, y = (struct zxmd_md_Organization_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zxmd_md_AuthnAuthorityDescriptor_DEL_Organization) */

void zxmd_md_AuthnAuthorityDescriptor_DEL_Organization(struct zxmd_md_AuthnAuthorityDescriptor_s* x, int n)
{
  struct zxmd_md_Organization_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Organization = (struct zxmd_md_Organization_s*)x->Organization->gg.g.n;
    return;
  case -1:
    y = (struct zxmd_md_Organization_s*)x->Organization;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zxmd_md_Organization_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Organization; n > 1 && y->gg.g.n; --n, y = (struct zxmd_md_Organization_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zxmd_md_AuthnAuthorityDescriptor_NUM_ContactPerson) */

int zxmd_md_AuthnAuthorityDescriptor_NUM_ContactPerson(struct zxmd_md_AuthnAuthorityDescriptor_s* x)
{
  struct zxmd_md_ContactPerson_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->ContactPerson; y; ++n, y = (struct zxmd_md_ContactPerson_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zxmd_md_AuthnAuthorityDescriptor_GET_ContactPerson) */

struct zxmd_md_ContactPerson_s* zxmd_md_AuthnAuthorityDescriptor_GET_ContactPerson(struct zxmd_md_AuthnAuthorityDescriptor_s* x, int n)
{
  struct zxmd_md_ContactPerson_s* y;
  if (!x) return 0;
  for (y = x->ContactPerson; n>=0 && y; --n, y = (struct zxmd_md_ContactPerson_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zxmd_md_AuthnAuthorityDescriptor_POP_ContactPerson) */

struct zxmd_md_ContactPerson_s* zxmd_md_AuthnAuthorityDescriptor_POP_ContactPerson(struct zxmd_md_AuthnAuthorityDescriptor_s* x)
{
  struct zxmd_md_ContactPerson_s* y;
  if (!x) return 0;
  y = x->ContactPerson;
  if (y)
    x->ContactPerson = (struct zxmd_md_ContactPerson_s*)y->gg.g.n;
  return y;
}

/* FUNC(zxmd_md_AuthnAuthorityDescriptor_PUSH_ContactPerson) */

void zxmd_md_AuthnAuthorityDescriptor_PUSH_ContactPerson(struct zxmd_md_AuthnAuthorityDescriptor_s* x, struct zxmd_md_ContactPerson_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->ContactPerson->gg.g;
  x->ContactPerson = z;
}

/* FUNC(zxmd_md_AuthnAuthorityDescriptor_REV_ContactPerson) */

void zxmd_md_AuthnAuthorityDescriptor_REV_ContactPerson(struct zxmd_md_AuthnAuthorityDescriptor_s* x)
{
  struct zxmd_md_ContactPerson_s* nxt;
  struct zxmd_md_ContactPerson_s* y;
  if (!x) return;
  y = x->ContactPerson;
  if (!y) return;
  x->ContactPerson = 0;
  while (y) {
    nxt = (struct zxmd_md_ContactPerson_s*)y->gg.g.n;
    y->gg.g.n = &x->ContactPerson->gg.g;
    x->ContactPerson = y;
    y = nxt;
  }
}

/* FUNC(zxmd_md_AuthnAuthorityDescriptor_PUT_ContactPerson) */

void zxmd_md_AuthnAuthorityDescriptor_PUT_ContactPerson(struct zxmd_md_AuthnAuthorityDescriptor_s* x, int n, struct zxmd_md_ContactPerson_s* z)
{
  struct zxmd_md_ContactPerson_s* y;
  if (!x || !z) return;
  y = x->ContactPerson;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->ContactPerson = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zxmd_md_ContactPerson_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zxmd_md_AuthnAuthorityDescriptor_ADD_ContactPerson) */

void zxmd_md_AuthnAuthorityDescriptor_ADD_ContactPerson(struct zxmd_md_AuthnAuthorityDescriptor_s* x, int n, struct zxmd_md_ContactPerson_s* z)
{
  struct zxmd_md_ContactPerson_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->ContactPerson->gg.g;
    x->ContactPerson = z;
    return;
  case -1:
    y = x->ContactPerson;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zxmd_md_ContactPerson_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->ContactPerson; n > 1 && y; --n, y = (struct zxmd_md_ContactPerson_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zxmd_md_AuthnAuthorityDescriptor_DEL_ContactPerson) */

void zxmd_md_AuthnAuthorityDescriptor_DEL_ContactPerson(struct zxmd_md_AuthnAuthorityDescriptor_s* x, int n)
{
  struct zxmd_md_ContactPerson_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->ContactPerson = (struct zxmd_md_ContactPerson_s*)x->ContactPerson->gg.g.n;
    return;
  case -1:
    y = (struct zxmd_md_ContactPerson_s*)x->ContactPerson;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zxmd_md_ContactPerson_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->ContactPerson; n > 1 && y->gg.g.n; --n, y = (struct zxmd_md_ContactPerson_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

/* FUNC(zxmd_md_AuthnAuthorityDescriptor_GET_ID) */
struct zx_str_s* zxmd_md_AuthnAuthorityDescriptor_GET_ID(struct zxmd_md_AuthnAuthorityDescriptor_s* x) { return x->ID; }
/* FUNC(zxmd_md_AuthnAuthorityDescriptor_PUT_ID) */
void zxmd_md_AuthnAuthorityDescriptor_PUT_ID(struct zxmd_md_AuthnAuthorityDescriptor_s* x, struct zx_str_s* y) { x->ID = y; }
/* FUNC(zxmd_md_AuthnAuthorityDescriptor_GET_validUntil) */
struct zx_str_s* zxmd_md_AuthnAuthorityDescriptor_GET_validUntil(struct zxmd_md_AuthnAuthorityDescriptor_s* x) { return x->validUntil; }
/* FUNC(zxmd_md_AuthnAuthorityDescriptor_PUT_validUntil) */
void zxmd_md_AuthnAuthorityDescriptor_PUT_validUntil(struct zxmd_md_AuthnAuthorityDescriptor_s* x, struct zx_str_s* y) { x->validUntil = y; }
/* FUNC(zxmd_md_AuthnAuthorityDescriptor_GET_cacheDuration) */
struct zx_str_s* zxmd_md_AuthnAuthorityDescriptor_GET_cacheDuration(struct zxmd_md_AuthnAuthorityDescriptor_s* x) { return x->cacheDuration; }
/* FUNC(zxmd_md_AuthnAuthorityDescriptor_PUT_cacheDuration) */
void zxmd_md_AuthnAuthorityDescriptor_PUT_cacheDuration(struct zxmd_md_AuthnAuthorityDescriptor_s* x, struct zx_str_s* y) { x->cacheDuration = y; }
/* FUNC(zxmd_md_AuthnAuthorityDescriptor_GET_protocolSupportEnumeration) */
struct zx_str_s* zxmd_md_AuthnAuthorityDescriptor_GET_protocolSupportEnumeration(struct zxmd_md_AuthnAuthorityDescriptor_s* x) { return x->protocolSupportEnumeration; }
/* FUNC(zxmd_md_AuthnAuthorityDescriptor_PUT_protocolSupportEnumeration) */
void zxmd_md_AuthnAuthorityDescriptor_PUT_protocolSupportEnumeration(struct zxmd_md_AuthnAuthorityDescriptor_s* x, struct zx_str_s* y) { x->protocolSupportEnumeration = y; }
/* FUNC(zxmd_md_AuthnAuthorityDescriptor_GET_errorURL) */
struct zx_str_s* zxmd_md_AuthnAuthorityDescriptor_GET_errorURL(struct zxmd_md_AuthnAuthorityDescriptor_s* x) { return x->errorURL; }
/* FUNC(zxmd_md_AuthnAuthorityDescriptor_PUT_errorURL) */
void zxmd_md_AuthnAuthorityDescriptor_PUT_errorURL(struct zxmd_md_AuthnAuthorityDescriptor_s* x, struct zx_str_s* y) { x->errorURL = y; }


/* FUNC(zxmd_md_AuthnAuthorityDescriptor_NUM_AuthnQueryService) */

int zxmd_md_AuthnAuthorityDescriptor_NUM_AuthnQueryService(struct zxmd_md_AuthnAuthorityDescriptor_s* x)
{
  struct zxmd_md_AuthnQueryService_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->AuthnQueryService; y; ++n, y = (struct zxmd_md_AuthnQueryService_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zxmd_md_AuthnAuthorityDescriptor_GET_AuthnQueryService) */

struct zxmd_md_AuthnQueryService_s* zxmd_md_AuthnAuthorityDescriptor_GET_AuthnQueryService(struct zxmd_md_AuthnAuthorityDescriptor_s* x, int n)
{
  struct zxmd_md_AuthnQueryService_s* y;
  if (!x) return 0;
  for (y = x->AuthnQueryService; n>=0 && y; --n, y = (struct zxmd_md_AuthnQueryService_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zxmd_md_AuthnAuthorityDescriptor_POP_AuthnQueryService) */

struct zxmd_md_AuthnQueryService_s* zxmd_md_AuthnAuthorityDescriptor_POP_AuthnQueryService(struct zxmd_md_AuthnAuthorityDescriptor_s* x)
{
  struct zxmd_md_AuthnQueryService_s* y;
  if (!x) return 0;
  y = x->AuthnQueryService;
  if (y)
    x->AuthnQueryService = (struct zxmd_md_AuthnQueryService_s*)y->gg.g.n;
  return y;
}

/* FUNC(zxmd_md_AuthnAuthorityDescriptor_PUSH_AuthnQueryService) */

void zxmd_md_AuthnAuthorityDescriptor_PUSH_AuthnQueryService(struct zxmd_md_AuthnAuthorityDescriptor_s* x, struct zxmd_md_AuthnQueryService_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->AuthnQueryService->gg.g;
  x->AuthnQueryService = z;
}

/* FUNC(zxmd_md_AuthnAuthorityDescriptor_REV_AuthnQueryService) */

void zxmd_md_AuthnAuthorityDescriptor_REV_AuthnQueryService(struct zxmd_md_AuthnAuthorityDescriptor_s* x)
{
  struct zxmd_md_AuthnQueryService_s* nxt;
  struct zxmd_md_AuthnQueryService_s* y;
  if (!x) return;
  y = x->AuthnQueryService;
  if (!y) return;
  x->AuthnQueryService = 0;
  while (y) {
    nxt = (struct zxmd_md_AuthnQueryService_s*)y->gg.g.n;
    y->gg.g.n = &x->AuthnQueryService->gg.g;
    x->AuthnQueryService = y;
    y = nxt;
  }
}

/* FUNC(zxmd_md_AuthnAuthorityDescriptor_PUT_AuthnQueryService) */

void zxmd_md_AuthnAuthorityDescriptor_PUT_AuthnQueryService(struct zxmd_md_AuthnAuthorityDescriptor_s* x, int n, struct zxmd_md_AuthnQueryService_s* z)
{
  struct zxmd_md_AuthnQueryService_s* y;
  if (!x || !z) return;
  y = x->AuthnQueryService;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->AuthnQueryService = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zxmd_md_AuthnQueryService_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zxmd_md_AuthnAuthorityDescriptor_ADD_AuthnQueryService) */

void zxmd_md_AuthnAuthorityDescriptor_ADD_AuthnQueryService(struct zxmd_md_AuthnAuthorityDescriptor_s* x, int n, struct zxmd_md_AuthnQueryService_s* z)
{
  struct zxmd_md_AuthnQueryService_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->AuthnQueryService->gg.g;
    x->AuthnQueryService = z;
    return;
  case -1:
    y = x->AuthnQueryService;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zxmd_md_AuthnQueryService_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->AuthnQueryService; n > 1 && y; --n, y = (struct zxmd_md_AuthnQueryService_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zxmd_md_AuthnAuthorityDescriptor_DEL_AuthnQueryService) */

void zxmd_md_AuthnAuthorityDescriptor_DEL_AuthnQueryService(struct zxmd_md_AuthnAuthorityDescriptor_s* x, int n)
{
  struct zxmd_md_AuthnQueryService_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->AuthnQueryService = (struct zxmd_md_AuthnQueryService_s*)x->AuthnQueryService->gg.g.n;
    return;
  case -1:
    y = (struct zxmd_md_AuthnQueryService_s*)x->AuthnQueryService;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zxmd_md_AuthnQueryService_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->AuthnQueryService; n > 1 && y->gg.g.n; --n, y = (struct zxmd_md_AuthnQueryService_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zxmd_md_AuthnAuthorityDescriptor_NUM_AssertionIDRequestService) */

int zxmd_md_AuthnAuthorityDescriptor_NUM_AssertionIDRequestService(struct zxmd_md_AuthnAuthorityDescriptor_s* x)
{
  struct zxmd_md_AssertionIDRequestService_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->AssertionIDRequestService; y; ++n, y = (struct zxmd_md_AssertionIDRequestService_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zxmd_md_AuthnAuthorityDescriptor_GET_AssertionIDRequestService) */

struct zxmd_md_AssertionIDRequestService_s* zxmd_md_AuthnAuthorityDescriptor_GET_AssertionIDRequestService(struct zxmd_md_AuthnAuthorityDescriptor_s* x, int n)
{
  struct zxmd_md_AssertionIDRequestService_s* y;
  if (!x) return 0;
  for (y = x->AssertionIDRequestService; n>=0 && y; --n, y = (struct zxmd_md_AssertionIDRequestService_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zxmd_md_AuthnAuthorityDescriptor_POP_AssertionIDRequestService) */

struct zxmd_md_AssertionIDRequestService_s* zxmd_md_AuthnAuthorityDescriptor_POP_AssertionIDRequestService(struct zxmd_md_AuthnAuthorityDescriptor_s* x)
{
  struct zxmd_md_AssertionIDRequestService_s* y;
  if (!x) return 0;
  y = x->AssertionIDRequestService;
  if (y)
    x->AssertionIDRequestService = (struct zxmd_md_AssertionIDRequestService_s*)y->gg.g.n;
  return y;
}

/* FUNC(zxmd_md_AuthnAuthorityDescriptor_PUSH_AssertionIDRequestService) */

void zxmd_md_AuthnAuthorityDescriptor_PUSH_AssertionIDRequestService(struct zxmd_md_AuthnAuthorityDescriptor_s* x, struct zxmd_md_AssertionIDRequestService_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->AssertionIDRequestService->gg.g;
  x->AssertionIDRequestService = z;
}

/* FUNC(zxmd_md_AuthnAuthorityDescriptor_REV_AssertionIDRequestService) */

void zxmd_md_AuthnAuthorityDescriptor_REV_AssertionIDRequestService(struct zxmd_md_AuthnAuthorityDescriptor_s* x)
{
  struct zxmd_md_AssertionIDRequestService_s* nxt;
  struct zxmd_md_AssertionIDRequestService_s* y;
  if (!x) return;
  y = x->AssertionIDRequestService;
  if (!y) return;
  x->AssertionIDRequestService = 0;
  while (y) {
    nxt = (struct zxmd_md_AssertionIDRequestService_s*)y->gg.g.n;
    y->gg.g.n = &x->AssertionIDRequestService->gg.g;
    x->AssertionIDRequestService = y;
    y = nxt;
  }
}

/* FUNC(zxmd_md_AuthnAuthorityDescriptor_PUT_AssertionIDRequestService) */

void zxmd_md_AuthnAuthorityDescriptor_PUT_AssertionIDRequestService(struct zxmd_md_AuthnAuthorityDescriptor_s* x, int n, struct zxmd_md_AssertionIDRequestService_s* z)
{
  struct zxmd_md_AssertionIDRequestService_s* y;
  if (!x || !z) return;
  y = x->AssertionIDRequestService;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->AssertionIDRequestService = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zxmd_md_AssertionIDRequestService_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zxmd_md_AuthnAuthorityDescriptor_ADD_AssertionIDRequestService) */

void zxmd_md_AuthnAuthorityDescriptor_ADD_AssertionIDRequestService(struct zxmd_md_AuthnAuthorityDescriptor_s* x, int n, struct zxmd_md_AssertionIDRequestService_s* z)
{
  struct zxmd_md_AssertionIDRequestService_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->AssertionIDRequestService->gg.g;
    x->AssertionIDRequestService = z;
    return;
  case -1:
    y = x->AssertionIDRequestService;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zxmd_md_AssertionIDRequestService_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->AssertionIDRequestService; n > 1 && y; --n, y = (struct zxmd_md_AssertionIDRequestService_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zxmd_md_AuthnAuthorityDescriptor_DEL_AssertionIDRequestService) */

void zxmd_md_AuthnAuthorityDescriptor_DEL_AssertionIDRequestService(struct zxmd_md_AuthnAuthorityDescriptor_s* x, int n)
{
  struct zxmd_md_AssertionIDRequestService_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->AssertionIDRequestService = (struct zxmd_md_AssertionIDRequestService_s*)x->AssertionIDRequestService->gg.g.n;
    return;
  case -1:
    y = (struct zxmd_md_AssertionIDRequestService_s*)x->AssertionIDRequestService;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zxmd_md_AssertionIDRequestService_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->AssertionIDRequestService; n > 1 && y->gg.g.n; --n, y = (struct zxmd_md_AssertionIDRequestService_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zxmd_md_AuthnAuthorityDescriptor_NUM_NameIDFormat) */

int zxmd_md_AuthnAuthorityDescriptor_NUM_NameIDFormat(struct zxmd_md_AuthnAuthorityDescriptor_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->NameIDFormat; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zxmd_md_AuthnAuthorityDescriptor_GET_NameIDFormat) */

struct zx_elem_s* zxmd_md_AuthnAuthorityDescriptor_GET_NameIDFormat(struct zxmd_md_AuthnAuthorityDescriptor_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->NameIDFormat; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zxmd_md_AuthnAuthorityDescriptor_POP_NameIDFormat) */

struct zx_elem_s* zxmd_md_AuthnAuthorityDescriptor_POP_NameIDFormat(struct zxmd_md_AuthnAuthorityDescriptor_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->NameIDFormat;
  if (y)
    x->NameIDFormat = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zxmd_md_AuthnAuthorityDescriptor_PUSH_NameIDFormat) */

void zxmd_md_AuthnAuthorityDescriptor_PUSH_NameIDFormat(struct zxmd_md_AuthnAuthorityDescriptor_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->NameIDFormat->g;
  x->NameIDFormat = z;
}

/* FUNC(zxmd_md_AuthnAuthorityDescriptor_REV_NameIDFormat) */

void zxmd_md_AuthnAuthorityDescriptor_REV_NameIDFormat(struct zxmd_md_AuthnAuthorityDescriptor_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->NameIDFormat;
  if (!y) return;
  x->NameIDFormat = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->NameIDFormat->g;
    x->NameIDFormat = y;
    y = nxt;
  }
}

/* FUNC(zxmd_md_AuthnAuthorityDescriptor_PUT_NameIDFormat) */

void zxmd_md_AuthnAuthorityDescriptor_PUT_NameIDFormat(struct zxmd_md_AuthnAuthorityDescriptor_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->NameIDFormat;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->NameIDFormat = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zxmd_md_AuthnAuthorityDescriptor_ADD_NameIDFormat) */

void zxmd_md_AuthnAuthorityDescriptor_ADD_NameIDFormat(struct zxmd_md_AuthnAuthorityDescriptor_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->NameIDFormat->g;
    x->NameIDFormat = z;
    return;
  case -1:
    y = x->NameIDFormat;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->NameIDFormat; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zxmd_md_AuthnAuthorityDescriptor_DEL_NameIDFormat) */

void zxmd_md_AuthnAuthorityDescriptor_DEL_NameIDFormat(struct zxmd_md_AuthnAuthorityDescriptor_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->NameIDFormat = (struct zx_elem_s*)x->NameIDFormat->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->NameIDFormat;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->NameIDFormat; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}






/* FUNC(zxmd_md_AuthnQueryService_GET_Binding) */
struct zx_str_s* zxmd_md_AuthnQueryService_GET_Binding(struct zxmd_md_AuthnQueryService_s* x) { return x->Binding; }
/* FUNC(zxmd_md_AuthnQueryService_PUT_Binding) */
void zxmd_md_AuthnQueryService_PUT_Binding(struct zxmd_md_AuthnQueryService_s* x, struct zx_str_s* y) { x->Binding = y; }
/* FUNC(zxmd_md_AuthnQueryService_GET_Location) */
struct zx_str_s* zxmd_md_AuthnQueryService_GET_Location(struct zxmd_md_AuthnQueryService_s* x) { return x->Location; }
/* FUNC(zxmd_md_AuthnQueryService_PUT_Location) */
void zxmd_md_AuthnQueryService_PUT_Location(struct zxmd_md_AuthnQueryService_s* x, struct zx_str_s* y) { x->Location = y; }
/* FUNC(zxmd_md_AuthnQueryService_GET_ResponseLocation) */
struct zx_str_s* zxmd_md_AuthnQueryService_GET_ResponseLocation(struct zxmd_md_AuthnQueryService_s* x) { return x->ResponseLocation; }
/* FUNC(zxmd_md_AuthnQueryService_PUT_ResponseLocation) */
void zxmd_md_AuthnQueryService_PUT_ResponseLocation(struct zxmd_md_AuthnQueryService_s* x, struct zx_str_s* y) { x->ResponseLocation = y; }





/* FUNC(zxmd_md_AuthzService_GET_Binding) */
struct zx_str_s* zxmd_md_AuthzService_GET_Binding(struct zxmd_md_AuthzService_s* x) { return x->Binding; }
/* FUNC(zxmd_md_AuthzService_PUT_Binding) */
void zxmd_md_AuthzService_PUT_Binding(struct zxmd_md_AuthzService_s* x, struct zx_str_s* y) { x->Binding = y; }
/* FUNC(zxmd_md_AuthzService_GET_Location) */
struct zx_str_s* zxmd_md_AuthzService_GET_Location(struct zxmd_md_AuthzService_s* x) { return x->Location; }
/* FUNC(zxmd_md_AuthzService_PUT_Location) */
void zxmd_md_AuthzService_PUT_Location(struct zxmd_md_AuthzService_s* x, struct zx_str_s* y) { x->Location = y; }
/* FUNC(zxmd_md_AuthzService_GET_ResponseLocation) */
struct zx_str_s* zxmd_md_AuthzService_GET_ResponseLocation(struct zxmd_md_AuthzService_s* x) { return x->ResponseLocation; }
/* FUNC(zxmd_md_AuthzService_PUT_ResponseLocation) */
void zxmd_md_AuthzService_PUT_ResponseLocation(struct zxmd_md_AuthzService_s* x, struct zx_str_s* y) { x->ResponseLocation = y; }







/* FUNC(zxmd_md_ContactPerson_NUM_Extensions) */

int zxmd_md_ContactPerson_NUM_Extensions(struct zxmd_md_ContactPerson_s* x)
{
  struct zxmd_md_Extensions_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Extensions; y; ++n, y = (struct zxmd_md_Extensions_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zxmd_md_ContactPerson_GET_Extensions) */

struct zxmd_md_Extensions_s* zxmd_md_ContactPerson_GET_Extensions(struct zxmd_md_ContactPerson_s* x, int n)
{
  struct zxmd_md_Extensions_s* y;
  if (!x) return 0;
  for (y = x->Extensions; n>=0 && y; --n, y = (struct zxmd_md_Extensions_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zxmd_md_ContactPerson_POP_Extensions) */

struct zxmd_md_Extensions_s* zxmd_md_ContactPerson_POP_Extensions(struct zxmd_md_ContactPerson_s* x)
{
  struct zxmd_md_Extensions_s* y;
  if (!x) return 0;
  y = x->Extensions;
  if (y)
    x->Extensions = (struct zxmd_md_Extensions_s*)y->gg.g.n;
  return y;
}

/* FUNC(zxmd_md_ContactPerson_PUSH_Extensions) */

void zxmd_md_ContactPerson_PUSH_Extensions(struct zxmd_md_ContactPerson_s* x, struct zxmd_md_Extensions_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Extensions->gg.g;
  x->Extensions = z;
}

/* FUNC(zxmd_md_ContactPerson_REV_Extensions) */

void zxmd_md_ContactPerson_REV_Extensions(struct zxmd_md_ContactPerson_s* x)
{
  struct zxmd_md_Extensions_s* nxt;
  struct zxmd_md_Extensions_s* y;
  if (!x) return;
  y = x->Extensions;
  if (!y) return;
  x->Extensions = 0;
  while (y) {
    nxt = (struct zxmd_md_Extensions_s*)y->gg.g.n;
    y->gg.g.n = &x->Extensions->gg.g;
    x->Extensions = y;
    y = nxt;
  }
}

/* FUNC(zxmd_md_ContactPerson_PUT_Extensions) */

void zxmd_md_ContactPerson_PUT_Extensions(struct zxmd_md_ContactPerson_s* x, int n, struct zxmd_md_Extensions_s* z)
{
  struct zxmd_md_Extensions_s* y;
  if (!x || !z) return;
  y = x->Extensions;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Extensions = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zxmd_md_Extensions_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zxmd_md_ContactPerson_ADD_Extensions) */

void zxmd_md_ContactPerson_ADD_Extensions(struct zxmd_md_ContactPerson_s* x, int n, struct zxmd_md_Extensions_s* z)
{
  struct zxmd_md_Extensions_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->Extensions->gg.g;
    x->Extensions = z;
    return;
  case -1:
    y = x->Extensions;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zxmd_md_Extensions_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Extensions; n > 1 && y; --n, y = (struct zxmd_md_Extensions_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zxmd_md_ContactPerson_DEL_Extensions) */

void zxmd_md_ContactPerson_DEL_Extensions(struct zxmd_md_ContactPerson_s* x, int n)
{
  struct zxmd_md_Extensions_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Extensions = (struct zxmd_md_Extensions_s*)x->Extensions->gg.g.n;
    return;
  case -1:
    y = (struct zxmd_md_Extensions_s*)x->Extensions;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zxmd_md_Extensions_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Extensions; n > 1 && y->gg.g.n; --n, y = (struct zxmd_md_Extensions_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zxmd_md_ContactPerson_NUM_Company) */

int zxmd_md_ContactPerson_NUM_Company(struct zxmd_md_ContactPerson_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Company; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zxmd_md_ContactPerson_GET_Company) */

struct zx_elem_s* zxmd_md_ContactPerson_GET_Company(struct zxmd_md_ContactPerson_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->Company; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zxmd_md_ContactPerson_POP_Company) */

struct zx_elem_s* zxmd_md_ContactPerson_POP_Company(struct zxmd_md_ContactPerson_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->Company;
  if (y)
    x->Company = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zxmd_md_ContactPerson_PUSH_Company) */

void zxmd_md_ContactPerson_PUSH_Company(struct zxmd_md_ContactPerson_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->Company->g;
  x->Company = z;
}

/* FUNC(zxmd_md_ContactPerson_REV_Company) */

void zxmd_md_ContactPerson_REV_Company(struct zxmd_md_ContactPerson_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->Company;
  if (!y) return;
  x->Company = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->Company->g;
    x->Company = y;
    y = nxt;
  }
}

/* FUNC(zxmd_md_ContactPerson_PUT_Company) */

void zxmd_md_ContactPerson_PUT_Company(struct zxmd_md_ContactPerson_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->Company;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->Company = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zxmd_md_ContactPerson_ADD_Company) */

void zxmd_md_ContactPerson_ADD_Company(struct zxmd_md_ContactPerson_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->Company->g;
    x->Company = z;
    return;
  case -1:
    y = x->Company;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->Company; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zxmd_md_ContactPerson_DEL_Company) */

void zxmd_md_ContactPerson_DEL_Company(struct zxmd_md_ContactPerson_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Company = (struct zx_elem_s*)x->Company->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->Company;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->Company; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}



/* FUNC(zxmd_md_ContactPerson_NUM_GivenName) */

int zxmd_md_ContactPerson_NUM_GivenName(struct zxmd_md_ContactPerson_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->GivenName; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zxmd_md_ContactPerson_GET_GivenName) */

struct zx_elem_s* zxmd_md_ContactPerson_GET_GivenName(struct zxmd_md_ContactPerson_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->GivenName; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zxmd_md_ContactPerson_POP_GivenName) */

struct zx_elem_s* zxmd_md_ContactPerson_POP_GivenName(struct zxmd_md_ContactPerson_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->GivenName;
  if (y)
    x->GivenName = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zxmd_md_ContactPerson_PUSH_GivenName) */

void zxmd_md_ContactPerson_PUSH_GivenName(struct zxmd_md_ContactPerson_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->GivenName->g;
  x->GivenName = z;
}

/* FUNC(zxmd_md_ContactPerson_REV_GivenName) */

void zxmd_md_ContactPerson_REV_GivenName(struct zxmd_md_ContactPerson_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->GivenName;
  if (!y) return;
  x->GivenName = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->GivenName->g;
    x->GivenName = y;
    y = nxt;
  }
}

/* FUNC(zxmd_md_ContactPerson_PUT_GivenName) */

void zxmd_md_ContactPerson_PUT_GivenName(struct zxmd_md_ContactPerson_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->GivenName;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->GivenName = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zxmd_md_ContactPerson_ADD_GivenName) */

void zxmd_md_ContactPerson_ADD_GivenName(struct zxmd_md_ContactPerson_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->GivenName->g;
    x->GivenName = z;
    return;
  case -1:
    y = x->GivenName;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->GivenName; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zxmd_md_ContactPerson_DEL_GivenName) */

void zxmd_md_ContactPerson_DEL_GivenName(struct zxmd_md_ContactPerson_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->GivenName = (struct zx_elem_s*)x->GivenName->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->GivenName;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->GivenName; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}



/* FUNC(zxmd_md_ContactPerson_NUM_SurName) */

int zxmd_md_ContactPerson_NUM_SurName(struct zxmd_md_ContactPerson_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->SurName; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zxmd_md_ContactPerson_GET_SurName) */

struct zx_elem_s* zxmd_md_ContactPerson_GET_SurName(struct zxmd_md_ContactPerson_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->SurName; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zxmd_md_ContactPerson_POP_SurName) */

struct zx_elem_s* zxmd_md_ContactPerson_POP_SurName(struct zxmd_md_ContactPerson_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->SurName;
  if (y)
    x->SurName = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zxmd_md_ContactPerson_PUSH_SurName) */

void zxmd_md_ContactPerson_PUSH_SurName(struct zxmd_md_ContactPerson_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->SurName->g;
  x->SurName = z;
}

/* FUNC(zxmd_md_ContactPerson_REV_SurName) */

void zxmd_md_ContactPerson_REV_SurName(struct zxmd_md_ContactPerson_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->SurName;
  if (!y) return;
  x->SurName = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->SurName->g;
    x->SurName = y;
    y = nxt;
  }
}

/* FUNC(zxmd_md_ContactPerson_PUT_SurName) */

void zxmd_md_ContactPerson_PUT_SurName(struct zxmd_md_ContactPerson_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->SurName;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->SurName = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zxmd_md_ContactPerson_ADD_SurName) */

void zxmd_md_ContactPerson_ADD_SurName(struct zxmd_md_ContactPerson_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->SurName->g;
    x->SurName = z;
    return;
  case -1:
    y = x->SurName;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->SurName; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zxmd_md_ContactPerson_DEL_SurName) */

void zxmd_md_ContactPerson_DEL_SurName(struct zxmd_md_ContactPerson_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->SurName = (struct zx_elem_s*)x->SurName->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->SurName;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->SurName; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}



/* FUNC(zxmd_md_ContactPerson_NUM_EmailAddress) */

int zxmd_md_ContactPerson_NUM_EmailAddress(struct zxmd_md_ContactPerson_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->EmailAddress; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zxmd_md_ContactPerson_GET_EmailAddress) */

struct zx_elem_s* zxmd_md_ContactPerson_GET_EmailAddress(struct zxmd_md_ContactPerson_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->EmailAddress; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zxmd_md_ContactPerson_POP_EmailAddress) */

struct zx_elem_s* zxmd_md_ContactPerson_POP_EmailAddress(struct zxmd_md_ContactPerson_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->EmailAddress;
  if (y)
    x->EmailAddress = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zxmd_md_ContactPerson_PUSH_EmailAddress) */

void zxmd_md_ContactPerson_PUSH_EmailAddress(struct zxmd_md_ContactPerson_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->EmailAddress->g;
  x->EmailAddress = z;
}

/* FUNC(zxmd_md_ContactPerson_REV_EmailAddress) */

void zxmd_md_ContactPerson_REV_EmailAddress(struct zxmd_md_ContactPerson_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->EmailAddress;
  if (!y) return;
  x->EmailAddress = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->EmailAddress->g;
    x->EmailAddress = y;
    y = nxt;
  }
}

/* FUNC(zxmd_md_ContactPerson_PUT_EmailAddress) */

void zxmd_md_ContactPerson_PUT_EmailAddress(struct zxmd_md_ContactPerson_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->EmailAddress;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->EmailAddress = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zxmd_md_ContactPerson_ADD_EmailAddress) */

void zxmd_md_ContactPerson_ADD_EmailAddress(struct zxmd_md_ContactPerson_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->EmailAddress->g;
    x->EmailAddress = z;
    return;
  case -1:
    y = x->EmailAddress;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->EmailAddress; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zxmd_md_ContactPerson_DEL_EmailAddress) */

void zxmd_md_ContactPerson_DEL_EmailAddress(struct zxmd_md_ContactPerson_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->EmailAddress = (struct zx_elem_s*)x->EmailAddress->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->EmailAddress;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->EmailAddress; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}



/* FUNC(zxmd_md_ContactPerson_NUM_TelephoneNumber) */

int zxmd_md_ContactPerson_NUM_TelephoneNumber(struct zxmd_md_ContactPerson_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->TelephoneNumber; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zxmd_md_ContactPerson_GET_TelephoneNumber) */

struct zx_elem_s* zxmd_md_ContactPerson_GET_TelephoneNumber(struct zxmd_md_ContactPerson_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->TelephoneNumber; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zxmd_md_ContactPerson_POP_TelephoneNumber) */

struct zx_elem_s* zxmd_md_ContactPerson_POP_TelephoneNumber(struct zxmd_md_ContactPerson_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->TelephoneNumber;
  if (y)
    x->TelephoneNumber = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zxmd_md_ContactPerson_PUSH_TelephoneNumber) */

void zxmd_md_ContactPerson_PUSH_TelephoneNumber(struct zxmd_md_ContactPerson_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->TelephoneNumber->g;
  x->TelephoneNumber = z;
}

/* FUNC(zxmd_md_ContactPerson_REV_TelephoneNumber) */

void zxmd_md_ContactPerson_REV_TelephoneNumber(struct zxmd_md_ContactPerson_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->TelephoneNumber;
  if (!y) return;
  x->TelephoneNumber = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->TelephoneNumber->g;
    x->TelephoneNumber = y;
    y = nxt;
  }
}

/* FUNC(zxmd_md_ContactPerson_PUT_TelephoneNumber) */

void zxmd_md_ContactPerson_PUT_TelephoneNumber(struct zxmd_md_ContactPerson_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->TelephoneNumber;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->TelephoneNumber = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zxmd_md_ContactPerson_ADD_TelephoneNumber) */

void zxmd_md_ContactPerson_ADD_TelephoneNumber(struct zxmd_md_ContactPerson_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->TelephoneNumber->g;
    x->TelephoneNumber = z;
    return;
  case -1:
    y = x->TelephoneNumber;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->TelephoneNumber; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zxmd_md_ContactPerson_DEL_TelephoneNumber) */

void zxmd_md_ContactPerson_DEL_TelephoneNumber(struct zxmd_md_ContactPerson_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->TelephoneNumber = (struct zx_elem_s*)x->TelephoneNumber->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->TelephoneNumber;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->TelephoneNumber; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

/* FUNC(zxmd_md_ContactPerson_GET_contactType) */
struct zx_str_s* zxmd_md_ContactPerson_GET_contactType(struct zxmd_md_ContactPerson_s* x) { return x->contactType; }
/* FUNC(zxmd_md_ContactPerson_PUT_contactType) */
void zxmd_md_ContactPerson_PUT_contactType(struct zxmd_md_ContactPerson_s* x, struct zx_str_s* y) { x->contactType = y; }







/* FUNC(zxmd_md_EncryptionMethod_NUM_KeySize) */

int zxmd_md_EncryptionMethod_NUM_KeySize(struct zxmd_md_EncryptionMethod_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->KeySize; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zxmd_md_EncryptionMethod_GET_KeySize) */

struct zx_elem_s* zxmd_md_EncryptionMethod_GET_KeySize(struct zxmd_md_EncryptionMethod_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->KeySize; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zxmd_md_EncryptionMethod_POP_KeySize) */

struct zx_elem_s* zxmd_md_EncryptionMethod_POP_KeySize(struct zxmd_md_EncryptionMethod_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->KeySize;
  if (y)
    x->KeySize = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zxmd_md_EncryptionMethod_PUSH_KeySize) */

void zxmd_md_EncryptionMethod_PUSH_KeySize(struct zxmd_md_EncryptionMethod_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->KeySize->g;
  x->KeySize = z;
}

/* FUNC(zxmd_md_EncryptionMethod_REV_KeySize) */

void zxmd_md_EncryptionMethod_REV_KeySize(struct zxmd_md_EncryptionMethod_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->KeySize;
  if (!y) return;
  x->KeySize = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->KeySize->g;
    x->KeySize = y;
    y = nxt;
  }
}

/* FUNC(zxmd_md_EncryptionMethod_PUT_KeySize) */

void zxmd_md_EncryptionMethod_PUT_KeySize(struct zxmd_md_EncryptionMethod_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->KeySize;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->KeySize = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zxmd_md_EncryptionMethod_ADD_KeySize) */

void zxmd_md_EncryptionMethod_ADD_KeySize(struct zxmd_md_EncryptionMethod_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->KeySize->g;
    x->KeySize = z;
    return;
  case -1:
    y = x->KeySize;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->KeySize; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zxmd_md_EncryptionMethod_DEL_KeySize) */

void zxmd_md_EncryptionMethod_DEL_KeySize(struct zxmd_md_EncryptionMethod_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->KeySize = (struct zx_elem_s*)x->KeySize->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->KeySize;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->KeySize; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}



/* FUNC(zxmd_md_EncryptionMethod_NUM_OAEPparams) */

int zxmd_md_EncryptionMethod_NUM_OAEPparams(struct zxmd_md_EncryptionMethod_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->OAEPparams; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zxmd_md_EncryptionMethod_GET_OAEPparams) */

struct zx_elem_s* zxmd_md_EncryptionMethod_GET_OAEPparams(struct zxmd_md_EncryptionMethod_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->OAEPparams; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zxmd_md_EncryptionMethod_POP_OAEPparams) */

struct zx_elem_s* zxmd_md_EncryptionMethod_POP_OAEPparams(struct zxmd_md_EncryptionMethod_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->OAEPparams;
  if (y)
    x->OAEPparams = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zxmd_md_EncryptionMethod_PUSH_OAEPparams) */

void zxmd_md_EncryptionMethod_PUSH_OAEPparams(struct zxmd_md_EncryptionMethod_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->OAEPparams->g;
  x->OAEPparams = z;
}

/* FUNC(zxmd_md_EncryptionMethod_REV_OAEPparams) */

void zxmd_md_EncryptionMethod_REV_OAEPparams(struct zxmd_md_EncryptionMethod_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->OAEPparams;
  if (!y) return;
  x->OAEPparams = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->OAEPparams->g;
    x->OAEPparams = y;
    y = nxt;
  }
}

/* FUNC(zxmd_md_EncryptionMethod_PUT_OAEPparams) */

void zxmd_md_EncryptionMethod_PUT_OAEPparams(struct zxmd_md_EncryptionMethod_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->OAEPparams;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->OAEPparams = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zxmd_md_EncryptionMethod_ADD_OAEPparams) */

void zxmd_md_EncryptionMethod_ADD_OAEPparams(struct zxmd_md_EncryptionMethod_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->OAEPparams->g;
    x->OAEPparams = z;
    return;
  case -1:
    y = x->OAEPparams;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->OAEPparams; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zxmd_md_EncryptionMethod_DEL_OAEPparams) */

void zxmd_md_EncryptionMethod_DEL_OAEPparams(struct zxmd_md_EncryptionMethod_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->OAEPparams = (struct zx_elem_s*)x->OAEPparams->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->OAEPparams;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->OAEPparams; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

/* FUNC(zxmd_md_EncryptionMethod_GET_Algorithm) */
struct zx_str_s* zxmd_md_EncryptionMethod_GET_Algorithm(struct zxmd_md_EncryptionMethod_s* x) { return x->Algorithm; }
/* FUNC(zxmd_md_EncryptionMethod_PUT_Algorithm) */
void zxmd_md_EncryptionMethod_PUT_Algorithm(struct zxmd_md_EncryptionMethod_s* x, struct zx_str_s* y) { x->Algorithm = y; }







/* FUNC(zxmd_md_EntitiesDescriptor_NUM_Signature) */

int zxmd_md_EntitiesDescriptor_NUM_Signature(struct zxmd_md_EntitiesDescriptor_s* x)
{
  struct zxmd_ds_Signature_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Signature; y; ++n, y = (struct zxmd_ds_Signature_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zxmd_md_EntitiesDescriptor_GET_Signature) */

struct zxmd_ds_Signature_s* zxmd_md_EntitiesDescriptor_GET_Signature(struct zxmd_md_EntitiesDescriptor_s* x, int n)
{
  struct zxmd_ds_Signature_s* y;
  if (!x) return 0;
  for (y = x->Signature; n>=0 && y; --n, y = (struct zxmd_ds_Signature_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zxmd_md_EntitiesDescriptor_POP_Signature) */

struct zxmd_ds_Signature_s* zxmd_md_EntitiesDescriptor_POP_Signature(struct zxmd_md_EntitiesDescriptor_s* x)
{
  struct zxmd_ds_Signature_s* y;
  if (!x) return 0;
  y = x->Signature;
  if (y)
    x->Signature = (struct zxmd_ds_Signature_s*)y->gg.g.n;
  return y;
}

/* FUNC(zxmd_md_EntitiesDescriptor_PUSH_Signature) */

void zxmd_md_EntitiesDescriptor_PUSH_Signature(struct zxmd_md_EntitiesDescriptor_s* x, struct zxmd_ds_Signature_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Signature->gg.g;
  x->Signature = z;
}

/* FUNC(zxmd_md_EntitiesDescriptor_REV_Signature) */

void zxmd_md_EntitiesDescriptor_REV_Signature(struct zxmd_md_EntitiesDescriptor_s* x)
{
  struct zxmd_ds_Signature_s* nxt;
  struct zxmd_ds_Signature_s* y;
  if (!x) return;
  y = x->Signature;
  if (!y) return;
  x->Signature = 0;
  while (y) {
    nxt = (struct zxmd_ds_Signature_s*)y->gg.g.n;
    y->gg.g.n = &x->Signature->gg.g;
    x->Signature = y;
    y = nxt;
  }
}

/* FUNC(zxmd_md_EntitiesDescriptor_PUT_Signature) */

void zxmd_md_EntitiesDescriptor_PUT_Signature(struct zxmd_md_EntitiesDescriptor_s* x, int n, struct zxmd_ds_Signature_s* z)
{
  struct zxmd_ds_Signature_s* y;
  if (!x || !z) return;
  y = x->Signature;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Signature = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zxmd_ds_Signature_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zxmd_md_EntitiesDescriptor_ADD_Signature) */

void zxmd_md_EntitiesDescriptor_ADD_Signature(struct zxmd_md_EntitiesDescriptor_s* x, int n, struct zxmd_ds_Signature_s* z)
{
  struct zxmd_ds_Signature_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->Signature->gg.g;
    x->Signature = z;
    return;
  case -1:
    y = x->Signature;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zxmd_ds_Signature_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Signature; n > 1 && y; --n, y = (struct zxmd_ds_Signature_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zxmd_md_EntitiesDescriptor_DEL_Signature) */

void zxmd_md_EntitiesDescriptor_DEL_Signature(struct zxmd_md_EntitiesDescriptor_s* x, int n)
{
  struct zxmd_ds_Signature_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Signature = (struct zxmd_ds_Signature_s*)x->Signature->gg.g.n;
    return;
  case -1:
    y = (struct zxmd_ds_Signature_s*)x->Signature;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zxmd_ds_Signature_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Signature; n > 1 && y->gg.g.n; --n, y = (struct zxmd_ds_Signature_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zxmd_md_EntitiesDescriptor_NUM_Extensions) */

int zxmd_md_EntitiesDescriptor_NUM_Extensions(struct zxmd_md_EntitiesDescriptor_s* x)
{
  struct zxmd_md_Extensions_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Extensions; y; ++n, y = (struct zxmd_md_Extensions_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zxmd_md_EntitiesDescriptor_GET_Extensions) */

struct zxmd_md_Extensions_s* zxmd_md_EntitiesDescriptor_GET_Extensions(struct zxmd_md_EntitiesDescriptor_s* x, int n)
{
  struct zxmd_md_Extensions_s* y;
  if (!x) return 0;
  for (y = x->Extensions; n>=0 && y; --n, y = (struct zxmd_md_Extensions_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zxmd_md_EntitiesDescriptor_POP_Extensions) */

struct zxmd_md_Extensions_s* zxmd_md_EntitiesDescriptor_POP_Extensions(struct zxmd_md_EntitiesDescriptor_s* x)
{
  struct zxmd_md_Extensions_s* y;
  if (!x) return 0;
  y = x->Extensions;
  if (y)
    x->Extensions = (struct zxmd_md_Extensions_s*)y->gg.g.n;
  return y;
}

/* FUNC(zxmd_md_EntitiesDescriptor_PUSH_Extensions) */

void zxmd_md_EntitiesDescriptor_PUSH_Extensions(struct zxmd_md_EntitiesDescriptor_s* x, struct zxmd_md_Extensions_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Extensions->gg.g;
  x->Extensions = z;
}

/* FUNC(zxmd_md_EntitiesDescriptor_REV_Extensions) */

void zxmd_md_EntitiesDescriptor_REV_Extensions(struct zxmd_md_EntitiesDescriptor_s* x)
{
  struct zxmd_md_Extensions_s* nxt;
  struct zxmd_md_Extensions_s* y;
  if (!x) return;
  y = x->Extensions;
  if (!y) return;
  x->Extensions = 0;
  while (y) {
    nxt = (struct zxmd_md_Extensions_s*)y->gg.g.n;
    y->gg.g.n = &x->Extensions->gg.g;
    x->Extensions = y;
    y = nxt;
  }
}

/* FUNC(zxmd_md_EntitiesDescriptor_PUT_Extensions) */

void zxmd_md_EntitiesDescriptor_PUT_Extensions(struct zxmd_md_EntitiesDescriptor_s* x, int n, struct zxmd_md_Extensions_s* z)
{
  struct zxmd_md_Extensions_s* y;
  if (!x || !z) return;
  y = x->Extensions;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Extensions = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zxmd_md_Extensions_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zxmd_md_EntitiesDescriptor_ADD_Extensions) */

void zxmd_md_EntitiesDescriptor_ADD_Extensions(struct zxmd_md_EntitiesDescriptor_s* x, int n, struct zxmd_md_Extensions_s* z)
{
  struct zxmd_md_Extensions_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->Extensions->gg.g;
    x->Extensions = z;
    return;
  case -1:
    y = x->Extensions;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zxmd_md_Extensions_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Extensions; n > 1 && y; --n, y = (struct zxmd_md_Extensions_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zxmd_md_EntitiesDescriptor_DEL_Extensions) */

void zxmd_md_EntitiesDescriptor_DEL_Extensions(struct zxmd_md_EntitiesDescriptor_s* x, int n)
{
  struct zxmd_md_Extensions_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Extensions = (struct zxmd_md_Extensions_s*)x->Extensions->gg.g.n;
    return;
  case -1:
    y = (struct zxmd_md_Extensions_s*)x->Extensions;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zxmd_md_Extensions_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Extensions; n > 1 && y->gg.g.n; --n, y = (struct zxmd_md_Extensions_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zxmd_md_EntitiesDescriptor_NUM_EntityDescriptor) */

int zxmd_md_EntitiesDescriptor_NUM_EntityDescriptor(struct zxmd_md_EntitiesDescriptor_s* x)
{
  struct zxmd_md_EntityDescriptor_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->EntityDescriptor; y; ++n, y = (struct zxmd_md_EntityDescriptor_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zxmd_md_EntitiesDescriptor_GET_EntityDescriptor) */

struct zxmd_md_EntityDescriptor_s* zxmd_md_EntitiesDescriptor_GET_EntityDescriptor(struct zxmd_md_EntitiesDescriptor_s* x, int n)
{
  struct zxmd_md_EntityDescriptor_s* y;
  if (!x) return 0;
  for (y = x->EntityDescriptor; n>=0 && y; --n, y = (struct zxmd_md_EntityDescriptor_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zxmd_md_EntitiesDescriptor_POP_EntityDescriptor) */

struct zxmd_md_EntityDescriptor_s* zxmd_md_EntitiesDescriptor_POP_EntityDescriptor(struct zxmd_md_EntitiesDescriptor_s* x)
{
  struct zxmd_md_EntityDescriptor_s* y;
  if (!x) return 0;
  y = x->EntityDescriptor;
  if (y)
    x->EntityDescriptor = (struct zxmd_md_EntityDescriptor_s*)y->gg.g.n;
  return y;
}

/* FUNC(zxmd_md_EntitiesDescriptor_PUSH_EntityDescriptor) */

void zxmd_md_EntitiesDescriptor_PUSH_EntityDescriptor(struct zxmd_md_EntitiesDescriptor_s* x, struct zxmd_md_EntityDescriptor_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->EntityDescriptor->gg.g;
  x->EntityDescriptor = z;
}

/* FUNC(zxmd_md_EntitiesDescriptor_REV_EntityDescriptor) */

void zxmd_md_EntitiesDescriptor_REV_EntityDescriptor(struct zxmd_md_EntitiesDescriptor_s* x)
{
  struct zxmd_md_EntityDescriptor_s* nxt;
  struct zxmd_md_EntityDescriptor_s* y;
  if (!x) return;
  y = x->EntityDescriptor;
  if (!y) return;
  x->EntityDescriptor = 0;
  while (y) {
    nxt = (struct zxmd_md_EntityDescriptor_s*)y->gg.g.n;
    y->gg.g.n = &x->EntityDescriptor->gg.g;
    x->EntityDescriptor = y;
    y = nxt;
  }
}

/* FUNC(zxmd_md_EntitiesDescriptor_PUT_EntityDescriptor) */

void zxmd_md_EntitiesDescriptor_PUT_EntityDescriptor(struct zxmd_md_EntitiesDescriptor_s* x, int n, struct zxmd_md_EntityDescriptor_s* z)
{
  struct zxmd_md_EntityDescriptor_s* y;
  if (!x || !z) return;
  y = x->EntityDescriptor;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->EntityDescriptor = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zxmd_md_EntityDescriptor_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zxmd_md_EntitiesDescriptor_ADD_EntityDescriptor) */

void zxmd_md_EntitiesDescriptor_ADD_EntityDescriptor(struct zxmd_md_EntitiesDescriptor_s* x, int n, struct zxmd_md_EntityDescriptor_s* z)
{
  struct zxmd_md_EntityDescriptor_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->EntityDescriptor->gg.g;
    x->EntityDescriptor = z;
    return;
  case -1:
    y = x->EntityDescriptor;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zxmd_md_EntityDescriptor_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->EntityDescriptor; n > 1 && y; --n, y = (struct zxmd_md_EntityDescriptor_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zxmd_md_EntitiesDescriptor_DEL_EntityDescriptor) */

void zxmd_md_EntitiesDescriptor_DEL_EntityDescriptor(struct zxmd_md_EntitiesDescriptor_s* x, int n)
{
  struct zxmd_md_EntityDescriptor_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->EntityDescriptor = (struct zxmd_md_EntityDescriptor_s*)x->EntityDescriptor->gg.g.n;
    return;
  case -1:
    y = (struct zxmd_md_EntityDescriptor_s*)x->EntityDescriptor;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zxmd_md_EntityDescriptor_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->EntityDescriptor; n > 1 && y->gg.g.n; --n, y = (struct zxmd_md_EntityDescriptor_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zxmd_md_EntitiesDescriptor_NUM_EntitiesDescriptor) */

int zxmd_md_EntitiesDescriptor_NUM_EntitiesDescriptor(struct zxmd_md_EntitiesDescriptor_s* x)
{
  struct zxmd_md_EntitiesDescriptor_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->EntitiesDescriptor; y; ++n, y = (struct zxmd_md_EntitiesDescriptor_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zxmd_md_EntitiesDescriptor_GET_EntitiesDescriptor) */

struct zxmd_md_EntitiesDescriptor_s* zxmd_md_EntitiesDescriptor_GET_EntitiesDescriptor(struct zxmd_md_EntitiesDescriptor_s* x, int n)
{
  struct zxmd_md_EntitiesDescriptor_s* y;
  if (!x) return 0;
  for (y = x->EntitiesDescriptor; n>=0 && y; --n, y = (struct zxmd_md_EntitiesDescriptor_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zxmd_md_EntitiesDescriptor_POP_EntitiesDescriptor) */

struct zxmd_md_EntitiesDescriptor_s* zxmd_md_EntitiesDescriptor_POP_EntitiesDescriptor(struct zxmd_md_EntitiesDescriptor_s* x)
{
  struct zxmd_md_EntitiesDescriptor_s* y;
  if (!x) return 0;
  y = x->EntitiesDescriptor;
  if (y)
    x->EntitiesDescriptor = (struct zxmd_md_EntitiesDescriptor_s*)y->gg.g.n;
  return y;
}

/* FUNC(zxmd_md_EntitiesDescriptor_PUSH_EntitiesDescriptor) */

void zxmd_md_EntitiesDescriptor_PUSH_EntitiesDescriptor(struct zxmd_md_EntitiesDescriptor_s* x, struct zxmd_md_EntitiesDescriptor_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->EntitiesDescriptor->gg.g;
  x->EntitiesDescriptor = z;
}

/* FUNC(zxmd_md_EntitiesDescriptor_REV_EntitiesDescriptor) */

void zxmd_md_EntitiesDescriptor_REV_EntitiesDescriptor(struct zxmd_md_EntitiesDescriptor_s* x)
{
  struct zxmd_md_EntitiesDescriptor_s* nxt;
  struct zxmd_md_EntitiesDescriptor_s* y;
  if (!x) return;
  y = x->EntitiesDescriptor;
  if (!y) return;
  x->EntitiesDescriptor = 0;
  while (y) {
    nxt = (struct zxmd_md_EntitiesDescriptor_s*)y->gg.g.n;
    y->gg.g.n = &x->EntitiesDescriptor->gg.g;
    x->EntitiesDescriptor = y;
    y = nxt;
  }
}

/* FUNC(zxmd_md_EntitiesDescriptor_PUT_EntitiesDescriptor) */

void zxmd_md_EntitiesDescriptor_PUT_EntitiesDescriptor(struct zxmd_md_EntitiesDescriptor_s* x, int n, struct zxmd_md_EntitiesDescriptor_s* z)
{
  struct zxmd_md_EntitiesDescriptor_s* y;
  if (!x || !z) return;
  y = x->EntitiesDescriptor;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->EntitiesDescriptor = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zxmd_md_EntitiesDescriptor_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zxmd_md_EntitiesDescriptor_ADD_EntitiesDescriptor) */

void zxmd_md_EntitiesDescriptor_ADD_EntitiesDescriptor(struct zxmd_md_EntitiesDescriptor_s* x, int n, struct zxmd_md_EntitiesDescriptor_s* z)
{
  struct zxmd_md_EntitiesDescriptor_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->EntitiesDescriptor->gg.g;
    x->EntitiesDescriptor = z;
    return;
  case -1:
    y = x->EntitiesDescriptor;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zxmd_md_EntitiesDescriptor_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->EntitiesDescriptor; n > 1 && y; --n, y = (struct zxmd_md_EntitiesDescriptor_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zxmd_md_EntitiesDescriptor_DEL_EntitiesDescriptor) */

void zxmd_md_EntitiesDescriptor_DEL_EntitiesDescriptor(struct zxmd_md_EntitiesDescriptor_s* x, int n)
{
  struct zxmd_md_EntitiesDescriptor_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->EntitiesDescriptor = (struct zxmd_md_EntitiesDescriptor_s*)x->EntitiesDescriptor->gg.g.n;
    return;
  case -1:
    y = (struct zxmd_md_EntitiesDescriptor_s*)x->EntitiesDescriptor;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zxmd_md_EntitiesDescriptor_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->EntitiesDescriptor; n > 1 && y->gg.g.n; --n, y = (struct zxmd_md_EntitiesDescriptor_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

/* FUNC(zxmd_md_EntitiesDescriptor_GET_validUntil) */
struct zx_str_s* zxmd_md_EntitiesDescriptor_GET_validUntil(struct zxmd_md_EntitiesDescriptor_s* x) { return x->validUntil; }
/* FUNC(zxmd_md_EntitiesDescriptor_PUT_validUntil) */
void zxmd_md_EntitiesDescriptor_PUT_validUntil(struct zxmd_md_EntitiesDescriptor_s* x, struct zx_str_s* y) { x->validUntil = y; }
/* FUNC(zxmd_md_EntitiesDescriptor_GET_cacheDuration) */
struct zx_str_s* zxmd_md_EntitiesDescriptor_GET_cacheDuration(struct zxmd_md_EntitiesDescriptor_s* x) { return x->cacheDuration; }
/* FUNC(zxmd_md_EntitiesDescriptor_PUT_cacheDuration) */
void zxmd_md_EntitiesDescriptor_PUT_cacheDuration(struct zxmd_md_EntitiesDescriptor_s* x, struct zx_str_s* y) { x->cacheDuration = y; }
/* FUNC(zxmd_md_EntitiesDescriptor_GET_ID) */
struct zx_str_s* zxmd_md_EntitiesDescriptor_GET_ID(struct zxmd_md_EntitiesDescriptor_s* x) { return x->ID; }
/* FUNC(zxmd_md_EntitiesDescriptor_PUT_ID) */
void zxmd_md_EntitiesDescriptor_PUT_ID(struct zxmd_md_EntitiesDescriptor_s* x, struct zx_str_s* y) { x->ID = y; }
/* FUNC(zxmd_md_EntitiesDescriptor_GET_Name) */
struct zx_str_s* zxmd_md_EntitiesDescriptor_GET_Name(struct zxmd_md_EntitiesDescriptor_s* x) { return x->Name; }
/* FUNC(zxmd_md_EntitiesDescriptor_PUT_Name) */
void zxmd_md_EntitiesDescriptor_PUT_Name(struct zxmd_md_EntitiesDescriptor_s* x, struct zx_str_s* y) { x->Name = y; }







/* FUNC(zxmd_md_EntityDescriptor_NUM_Signature) */

int zxmd_md_EntityDescriptor_NUM_Signature(struct zxmd_md_EntityDescriptor_s* x)
{
  struct zxmd_ds_Signature_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Signature; y; ++n, y = (struct zxmd_ds_Signature_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zxmd_md_EntityDescriptor_GET_Signature) */

struct zxmd_ds_Signature_s* zxmd_md_EntityDescriptor_GET_Signature(struct zxmd_md_EntityDescriptor_s* x, int n)
{
  struct zxmd_ds_Signature_s* y;
  if (!x) return 0;
  for (y = x->Signature; n>=0 && y; --n, y = (struct zxmd_ds_Signature_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zxmd_md_EntityDescriptor_POP_Signature) */

struct zxmd_ds_Signature_s* zxmd_md_EntityDescriptor_POP_Signature(struct zxmd_md_EntityDescriptor_s* x)
{
  struct zxmd_ds_Signature_s* y;
  if (!x) return 0;
  y = x->Signature;
  if (y)
    x->Signature = (struct zxmd_ds_Signature_s*)y->gg.g.n;
  return y;
}

/* FUNC(zxmd_md_EntityDescriptor_PUSH_Signature) */

void zxmd_md_EntityDescriptor_PUSH_Signature(struct zxmd_md_EntityDescriptor_s* x, struct zxmd_ds_Signature_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Signature->gg.g;
  x->Signature = z;
}

/* FUNC(zxmd_md_EntityDescriptor_REV_Signature) */

void zxmd_md_EntityDescriptor_REV_Signature(struct zxmd_md_EntityDescriptor_s* x)
{
  struct zxmd_ds_Signature_s* nxt;
  struct zxmd_ds_Signature_s* y;
  if (!x) return;
  y = x->Signature;
  if (!y) return;
  x->Signature = 0;
  while (y) {
    nxt = (struct zxmd_ds_Signature_s*)y->gg.g.n;
    y->gg.g.n = &x->Signature->gg.g;
    x->Signature = y;
    y = nxt;
  }
}

/* FUNC(zxmd_md_EntityDescriptor_PUT_Signature) */

void zxmd_md_EntityDescriptor_PUT_Signature(struct zxmd_md_EntityDescriptor_s* x, int n, struct zxmd_ds_Signature_s* z)
{
  struct zxmd_ds_Signature_s* y;
  if (!x || !z) return;
  y = x->Signature;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Signature = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zxmd_ds_Signature_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zxmd_md_EntityDescriptor_ADD_Signature) */

void zxmd_md_EntityDescriptor_ADD_Signature(struct zxmd_md_EntityDescriptor_s* x, int n, struct zxmd_ds_Signature_s* z)
{
  struct zxmd_ds_Signature_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->Signature->gg.g;
    x->Signature = z;
    return;
  case -1:
    y = x->Signature;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zxmd_ds_Signature_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Signature; n > 1 && y; --n, y = (struct zxmd_ds_Signature_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zxmd_md_EntityDescriptor_DEL_Signature) */

void zxmd_md_EntityDescriptor_DEL_Signature(struct zxmd_md_EntityDescriptor_s* x, int n)
{
  struct zxmd_ds_Signature_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Signature = (struct zxmd_ds_Signature_s*)x->Signature->gg.g.n;
    return;
  case -1:
    y = (struct zxmd_ds_Signature_s*)x->Signature;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zxmd_ds_Signature_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Signature; n > 1 && y->gg.g.n; --n, y = (struct zxmd_ds_Signature_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zxmd_md_EntityDescriptor_NUM_Extensions) */

int zxmd_md_EntityDescriptor_NUM_Extensions(struct zxmd_md_EntityDescriptor_s* x)
{
  struct zxmd_md_Extensions_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Extensions; y; ++n, y = (struct zxmd_md_Extensions_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zxmd_md_EntityDescriptor_GET_Extensions) */

struct zxmd_md_Extensions_s* zxmd_md_EntityDescriptor_GET_Extensions(struct zxmd_md_EntityDescriptor_s* x, int n)
{
  struct zxmd_md_Extensions_s* y;
  if (!x) return 0;
  for (y = x->Extensions; n>=0 && y; --n, y = (struct zxmd_md_Extensions_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zxmd_md_EntityDescriptor_POP_Extensions) */

struct zxmd_md_Extensions_s* zxmd_md_EntityDescriptor_POP_Extensions(struct zxmd_md_EntityDescriptor_s* x)
{
  struct zxmd_md_Extensions_s* y;
  if (!x) return 0;
  y = x->Extensions;
  if (y)
    x->Extensions = (struct zxmd_md_Extensions_s*)y->gg.g.n;
  return y;
}

/* FUNC(zxmd_md_EntityDescriptor_PUSH_Extensions) */

void zxmd_md_EntityDescriptor_PUSH_Extensions(struct zxmd_md_EntityDescriptor_s* x, struct zxmd_md_Extensions_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Extensions->gg.g;
  x->Extensions = z;
}

/* FUNC(zxmd_md_EntityDescriptor_REV_Extensions) */

void zxmd_md_EntityDescriptor_REV_Extensions(struct zxmd_md_EntityDescriptor_s* x)
{
  struct zxmd_md_Extensions_s* nxt;
  struct zxmd_md_Extensions_s* y;
  if (!x) return;
  y = x->Extensions;
  if (!y) return;
  x->Extensions = 0;
  while (y) {
    nxt = (struct zxmd_md_Extensions_s*)y->gg.g.n;
    y->gg.g.n = &x->Extensions->gg.g;
    x->Extensions = y;
    y = nxt;
  }
}

/* FUNC(zxmd_md_EntityDescriptor_PUT_Extensions) */

void zxmd_md_EntityDescriptor_PUT_Extensions(struct zxmd_md_EntityDescriptor_s* x, int n, struct zxmd_md_Extensions_s* z)
{
  struct zxmd_md_Extensions_s* y;
  if (!x || !z) return;
  y = x->Extensions;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Extensions = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zxmd_md_Extensions_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zxmd_md_EntityDescriptor_ADD_Extensions) */

void zxmd_md_EntityDescriptor_ADD_Extensions(struct zxmd_md_EntityDescriptor_s* x, int n, struct zxmd_md_Extensions_s* z)
{
  struct zxmd_md_Extensions_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->Extensions->gg.g;
    x->Extensions = z;
    return;
  case -1:
    y = x->Extensions;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zxmd_md_Extensions_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Extensions; n > 1 && y; --n, y = (struct zxmd_md_Extensions_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zxmd_md_EntityDescriptor_DEL_Extensions) */

void zxmd_md_EntityDescriptor_DEL_Extensions(struct zxmd_md_EntityDescriptor_s* x, int n)
{
  struct zxmd_md_Extensions_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Extensions = (struct zxmd_md_Extensions_s*)x->Extensions->gg.g.n;
    return;
  case -1:
    y = (struct zxmd_md_Extensions_s*)x->Extensions;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zxmd_md_Extensions_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Extensions; n > 1 && y->gg.g.n; --n, y = (struct zxmd_md_Extensions_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zxmd_md_EntityDescriptor_NUM_RoleDescriptor) */

int zxmd_md_EntityDescriptor_NUM_RoleDescriptor(struct zxmd_md_EntityDescriptor_s* x)
{
  struct zxmd_md_RoleDescriptor_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->RoleDescriptor; y; ++n, y = (struct zxmd_md_RoleDescriptor_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zxmd_md_EntityDescriptor_GET_RoleDescriptor) */

struct zxmd_md_RoleDescriptor_s* zxmd_md_EntityDescriptor_GET_RoleDescriptor(struct zxmd_md_EntityDescriptor_s* x, int n)
{
  struct zxmd_md_RoleDescriptor_s* y;
  if (!x) return 0;
  for (y = x->RoleDescriptor; n>=0 && y; --n, y = (struct zxmd_md_RoleDescriptor_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zxmd_md_EntityDescriptor_POP_RoleDescriptor) */

struct zxmd_md_RoleDescriptor_s* zxmd_md_EntityDescriptor_POP_RoleDescriptor(struct zxmd_md_EntityDescriptor_s* x)
{
  struct zxmd_md_RoleDescriptor_s* y;
  if (!x) return 0;
  y = x->RoleDescriptor;
  if (y)
    x->RoleDescriptor = (struct zxmd_md_RoleDescriptor_s*)y->gg.g.n;
  return y;
}

/* FUNC(zxmd_md_EntityDescriptor_PUSH_RoleDescriptor) */

void zxmd_md_EntityDescriptor_PUSH_RoleDescriptor(struct zxmd_md_EntityDescriptor_s* x, struct zxmd_md_RoleDescriptor_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->RoleDescriptor->gg.g;
  x->RoleDescriptor = z;
}

/* FUNC(zxmd_md_EntityDescriptor_REV_RoleDescriptor) */

void zxmd_md_EntityDescriptor_REV_RoleDescriptor(struct zxmd_md_EntityDescriptor_s* x)
{
  struct zxmd_md_RoleDescriptor_s* nxt;
  struct zxmd_md_RoleDescriptor_s* y;
  if (!x) return;
  y = x->RoleDescriptor;
  if (!y) return;
  x->RoleDescriptor = 0;
  while (y) {
    nxt = (struct zxmd_md_RoleDescriptor_s*)y->gg.g.n;
    y->gg.g.n = &x->RoleDescriptor->gg.g;
    x->RoleDescriptor = y;
    y = nxt;
  }
}

/* FUNC(zxmd_md_EntityDescriptor_PUT_RoleDescriptor) */

void zxmd_md_EntityDescriptor_PUT_RoleDescriptor(struct zxmd_md_EntityDescriptor_s* x, int n, struct zxmd_md_RoleDescriptor_s* z)
{
  struct zxmd_md_RoleDescriptor_s* y;
  if (!x || !z) return;
  y = x->RoleDescriptor;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->RoleDescriptor = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zxmd_md_RoleDescriptor_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zxmd_md_EntityDescriptor_ADD_RoleDescriptor) */

void zxmd_md_EntityDescriptor_ADD_RoleDescriptor(struct zxmd_md_EntityDescriptor_s* x, int n, struct zxmd_md_RoleDescriptor_s* z)
{
  struct zxmd_md_RoleDescriptor_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->RoleDescriptor->gg.g;
    x->RoleDescriptor = z;
    return;
  case -1:
    y = x->RoleDescriptor;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zxmd_md_RoleDescriptor_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->RoleDescriptor; n > 1 && y; --n, y = (struct zxmd_md_RoleDescriptor_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zxmd_md_EntityDescriptor_DEL_RoleDescriptor) */

void zxmd_md_EntityDescriptor_DEL_RoleDescriptor(struct zxmd_md_EntityDescriptor_s* x, int n)
{
  struct zxmd_md_RoleDescriptor_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->RoleDescriptor = (struct zxmd_md_RoleDescriptor_s*)x->RoleDescriptor->gg.g.n;
    return;
  case -1:
    y = (struct zxmd_md_RoleDescriptor_s*)x->RoleDescriptor;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zxmd_md_RoleDescriptor_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->RoleDescriptor; n > 1 && y->gg.g.n; --n, y = (struct zxmd_md_RoleDescriptor_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zxmd_md_EntityDescriptor_NUM_IDPSSODescriptor) */

int zxmd_md_EntityDescriptor_NUM_IDPSSODescriptor(struct zxmd_md_EntityDescriptor_s* x)
{
  struct zxmd_md_IDPSSODescriptor_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->IDPSSODescriptor; y; ++n, y = (struct zxmd_md_IDPSSODescriptor_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zxmd_md_EntityDescriptor_GET_IDPSSODescriptor) */

struct zxmd_md_IDPSSODescriptor_s* zxmd_md_EntityDescriptor_GET_IDPSSODescriptor(struct zxmd_md_EntityDescriptor_s* x, int n)
{
  struct zxmd_md_IDPSSODescriptor_s* y;
  if (!x) return 0;
  for (y = x->IDPSSODescriptor; n>=0 && y; --n, y = (struct zxmd_md_IDPSSODescriptor_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zxmd_md_EntityDescriptor_POP_IDPSSODescriptor) */

struct zxmd_md_IDPSSODescriptor_s* zxmd_md_EntityDescriptor_POP_IDPSSODescriptor(struct zxmd_md_EntityDescriptor_s* x)
{
  struct zxmd_md_IDPSSODescriptor_s* y;
  if (!x) return 0;
  y = x->IDPSSODescriptor;
  if (y)
    x->IDPSSODescriptor = (struct zxmd_md_IDPSSODescriptor_s*)y->gg.g.n;
  return y;
}

/* FUNC(zxmd_md_EntityDescriptor_PUSH_IDPSSODescriptor) */

void zxmd_md_EntityDescriptor_PUSH_IDPSSODescriptor(struct zxmd_md_EntityDescriptor_s* x, struct zxmd_md_IDPSSODescriptor_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->IDPSSODescriptor->gg.g;
  x->IDPSSODescriptor = z;
}

/* FUNC(zxmd_md_EntityDescriptor_REV_IDPSSODescriptor) */

void zxmd_md_EntityDescriptor_REV_IDPSSODescriptor(struct zxmd_md_EntityDescriptor_s* x)
{
  struct zxmd_md_IDPSSODescriptor_s* nxt;
  struct zxmd_md_IDPSSODescriptor_s* y;
  if (!x) return;
  y = x->IDPSSODescriptor;
  if (!y) return;
  x->IDPSSODescriptor = 0;
  while (y) {
    nxt = (struct zxmd_md_IDPSSODescriptor_s*)y->gg.g.n;
    y->gg.g.n = &x->IDPSSODescriptor->gg.g;
    x->IDPSSODescriptor = y;
    y = nxt;
  }
}

/* FUNC(zxmd_md_EntityDescriptor_PUT_IDPSSODescriptor) */

void zxmd_md_EntityDescriptor_PUT_IDPSSODescriptor(struct zxmd_md_EntityDescriptor_s* x, int n, struct zxmd_md_IDPSSODescriptor_s* z)
{
  struct zxmd_md_IDPSSODescriptor_s* y;
  if (!x || !z) return;
  y = x->IDPSSODescriptor;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->IDPSSODescriptor = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zxmd_md_IDPSSODescriptor_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zxmd_md_EntityDescriptor_ADD_IDPSSODescriptor) */

void zxmd_md_EntityDescriptor_ADD_IDPSSODescriptor(struct zxmd_md_EntityDescriptor_s* x, int n, struct zxmd_md_IDPSSODescriptor_s* z)
{
  struct zxmd_md_IDPSSODescriptor_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->IDPSSODescriptor->gg.g;
    x->IDPSSODescriptor = z;
    return;
  case -1:
    y = x->IDPSSODescriptor;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zxmd_md_IDPSSODescriptor_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->IDPSSODescriptor; n > 1 && y; --n, y = (struct zxmd_md_IDPSSODescriptor_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zxmd_md_EntityDescriptor_DEL_IDPSSODescriptor) */

void zxmd_md_EntityDescriptor_DEL_IDPSSODescriptor(struct zxmd_md_EntityDescriptor_s* x, int n)
{
  struct zxmd_md_IDPSSODescriptor_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->IDPSSODescriptor = (struct zxmd_md_IDPSSODescriptor_s*)x->IDPSSODescriptor->gg.g.n;
    return;
  case -1:
    y = (struct zxmd_md_IDPSSODescriptor_s*)x->IDPSSODescriptor;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zxmd_md_IDPSSODescriptor_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->IDPSSODescriptor; n > 1 && y->gg.g.n; --n, y = (struct zxmd_md_IDPSSODescriptor_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zxmd_md_EntityDescriptor_NUM_SPSSODescriptor) */

int zxmd_md_EntityDescriptor_NUM_SPSSODescriptor(struct zxmd_md_EntityDescriptor_s* x)
{
  struct zxmd_md_SPSSODescriptor_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->SPSSODescriptor; y; ++n, y = (struct zxmd_md_SPSSODescriptor_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zxmd_md_EntityDescriptor_GET_SPSSODescriptor) */

struct zxmd_md_SPSSODescriptor_s* zxmd_md_EntityDescriptor_GET_SPSSODescriptor(struct zxmd_md_EntityDescriptor_s* x, int n)
{
  struct zxmd_md_SPSSODescriptor_s* y;
  if (!x) return 0;
  for (y = x->SPSSODescriptor; n>=0 && y; --n, y = (struct zxmd_md_SPSSODescriptor_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zxmd_md_EntityDescriptor_POP_SPSSODescriptor) */

struct zxmd_md_SPSSODescriptor_s* zxmd_md_EntityDescriptor_POP_SPSSODescriptor(struct zxmd_md_EntityDescriptor_s* x)
{
  struct zxmd_md_SPSSODescriptor_s* y;
  if (!x) return 0;
  y = x->SPSSODescriptor;
  if (y)
    x->SPSSODescriptor = (struct zxmd_md_SPSSODescriptor_s*)y->gg.g.n;
  return y;
}

/* FUNC(zxmd_md_EntityDescriptor_PUSH_SPSSODescriptor) */

void zxmd_md_EntityDescriptor_PUSH_SPSSODescriptor(struct zxmd_md_EntityDescriptor_s* x, struct zxmd_md_SPSSODescriptor_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->SPSSODescriptor->gg.g;
  x->SPSSODescriptor = z;
}

/* FUNC(zxmd_md_EntityDescriptor_REV_SPSSODescriptor) */

void zxmd_md_EntityDescriptor_REV_SPSSODescriptor(struct zxmd_md_EntityDescriptor_s* x)
{
  struct zxmd_md_SPSSODescriptor_s* nxt;
  struct zxmd_md_SPSSODescriptor_s* y;
  if (!x) return;
  y = x->SPSSODescriptor;
  if (!y) return;
  x->SPSSODescriptor = 0;
  while (y) {
    nxt = (struct zxmd_md_SPSSODescriptor_s*)y->gg.g.n;
    y->gg.g.n = &x->SPSSODescriptor->gg.g;
    x->SPSSODescriptor = y;
    y = nxt;
  }
}

/* FUNC(zxmd_md_EntityDescriptor_PUT_SPSSODescriptor) */

void zxmd_md_EntityDescriptor_PUT_SPSSODescriptor(struct zxmd_md_EntityDescriptor_s* x, int n, struct zxmd_md_SPSSODescriptor_s* z)
{
  struct zxmd_md_SPSSODescriptor_s* y;
  if (!x || !z) return;
  y = x->SPSSODescriptor;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->SPSSODescriptor = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zxmd_md_SPSSODescriptor_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zxmd_md_EntityDescriptor_ADD_SPSSODescriptor) */

void zxmd_md_EntityDescriptor_ADD_SPSSODescriptor(struct zxmd_md_EntityDescriptor_s* x, int n, struct zxmd_md_SPSSODescriptor_s* z)
{
  struct zxmd_md_SPSSODescriptor_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->SPSSODescriptor->gg.g;
    x->SPSSODescriptor = z;
    return;
  case -1:
    y = x->SPSSODescriptor;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zxmd_md_SPSSODescriptor_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->SPSSODescriptor; n > 1 && y; --n, y = (struct zxmd_md_SPSSODescriptor_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zxmd_md_EntityDescriptor_DEL_SPSSODescriptor) */

void zxmd_md_EntityDescriptor_DEL_SPSSODescriptor(struct zxmd_md_EntityDescriptor_s* x, int n)
{
  struct zxmd_md_SPSSODescriptor_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->SPSSODescriptor = (struct zxmd_md_SPSSODescriptor_s*)x->SPSSODescriptor->gg.g.n;
    return;
  case -1:
    y = (struct zxmd_md_SPSSODescriptor_s*)x->SPSSODescriptor;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zxmd_md_SPSSODescriptor_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->SPSSODescriptor; n > 1 && y->gg.g.n; --n, y = (struct zxmd_md_SPSSODescriptor_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zxmd_md_EntityDescriptor_NUM_AuthnAuthorityDescriptor) */

int zxmd_md_EntityDescriptor_NUM_AuthnAuthorityDescriptor(struct zxmd_md_EntityDescriptor_s* x)
{
  struct zxmd_md_AuthnAuthorityDescriptor_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->AuthnAuthorityDescriptor; y; ++n, y = (struct zxmd_md_AuthnAuthorityDescriptor_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zxmd_md_EntityDescriptor_GET_AuthnAuthorityDescriptor) */

struct zxmd_md_AuthnAuthorityDescriptor_s* zxmd_md_EntityDescriptor_GET_AuthnAuthorityDescriptor(struct zxmd_md_EntityDescriptor_s* x, int n)
{
  struct zxmd_md_AuthnAuthorityDescriptor_s* y;
  if (!x) return 0;
  for (y = x->AuthnAuthorityDescriptor; n>=0 && y; --n, y = (struct zxmd_md_AuthnAuthorityDescriptor_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zxmd_md_EntityDescriptor_POP_AuthnAuthorityDescriptor) */

struct zxmd_md_AuthnAuthorityDescriptor_s* zxmd_md_EntityDescriptor_POP_AuthnAuthorityDescriptor(struct zxmd_md_EntityDescriptor_s* x)
{
  struct zxmd_md_AuthnAuthorityDescriptor_s* y;
  if (!x) return 0;
  y = x->AuthnAuthorityDescriptor;
  if (y)
    x->AuthnAuthorityDescriptor = (struct zxmd_md_AuthnAuthorityDescriptor_s*)y->gg.g.n;
  return y;
}

/* FUNC(zxmd_md_EntityDescriptor_PUSH_AuthnAuthorityDescriptor) */

void zxmd_md_EntityDescriptor_PUSH_AuthnAuthorityDescriptor(struct zxmd_md_EntityDescriptor_s* x, struct zxmd_md_AuthnAuthorityDescriptor_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->AuthnAuthorityDescriptor->gg.g;
  x->AuthnAuthorityDescriptor = z;
}

/* FUNC(zxmd_md_EntityDescriptor_REV_AuthnAuthorityDescriptor) */

void zxmd_md_EntityDescriptor_REV_AuthnAuthorityDescriptor(struct zxmd_md_EntityDescriptor_s* x)
{
  struct zxmd_md_AuthnAuthorityDescriptor_s* nxt;
  struct zxmd_md_AuthnAuthorityDescriptor_s* y;
  if (!x) return;
  y = x->AuthnAuthorityDescriptor;
  if (!y) return;
  x->AuthnAuthorityDescriptor = 0;
  while (y) {
    nxt = (struct zxmd_md_AuthnAuthorityDescriptor_s*)y->gg.g.n;
    y->gg.g.n = &x->AuthnAuthorityDescriptor->gg.g;
    x->AuthnAuthorityDescriptor = y;
    y = nxt;
  }
}

/* FUNC(zxmd_md_EntityDescriptor_PUT_AuthnAuthorityDescriptor) */

void zxmd_md_EntityDescriptor_PUT_AuthnAuthorityDescriptor(struct zxmd_md_EntityDescriptor_s* x, int n, struct zxmd_md_AuthnAuthorityDescriptor_s* z)
{
  struct zxmd_md_AuthnAuthorityDescriptor_s* y;
  if (!x || !z) return;
  y = x->AuthnAuthorityDescriptor;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->AuthnAuthorityDescriptor = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zxmd_md_AuthnAuthorityDescriptor_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zxmd_md_EntityDescriptor_ADD_AuthnAuthorityDescriptor) */

void zxmd_md_EntityDescriptor_ADD_AuthnAuthorityDescriptor(struct zxmd_md_EntityDescriptor_s* x, int n, struct zxmd_md_AuthnAuthorityDescriptor_s* z)
{
  struct zxmd_md_AuthnAuthorityDescriptor_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->AuthnAuthorityDescriptor->gg.g;
    x->AuthnAuthorityDescriptor = z;
    return;
  case -1:
    y = x->AuthnAuthorityDescriptor;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zxmd_md_AuthnAuthorityDescriptor_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->AuthnAuthorityDescriptor; n > 1 && y; --n, y = (struct zxmd_md_AuthnAuthorityDescriptor_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zxmd_md_EntityDescriptor_DEL_AuthnAuthorityDescriptor) */

void zxmd_md_EntityDescriptor_DEL_AuthnAuthorityDescriptor(struct zxmd_md_EntityDescriptor_s* x, int n)
{
  struct zxmd_md_AuthnAuthorityDescriptor_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->AuthnAuthorityDescriptor = (struct zxmd_md_AuthnAuthorityDescriptor_s*)x->AuthnAuthorityDescriptor->gg.g.n;
    return;
  case -1:
    y = (struct zxmd_md_AuthnAuthorityDescriptor_s*)x->AuthnAuthorityDescriptor;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zxmd_md_AuthnAuthorityDescriptor_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->AuthnAuthorityDescriptor; n > 1 && y->gg.g.n; --n, y = (struct zxmd_md_AuthnAuthorityDescriptor_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zxmd_md_EntityDescriptor_NUM_AttributeAuthorityDescriptor) */

int zxmd_md_EntityDescriptor_NUM_AttributeAuthorityDescriptor(struct zxmd_md_EntityDescriptor_s* x)
{
  struct zxmd_md_AttributeAuthorityDescriptor_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->AttributeAuthorityDescriptor; y; ++n, y = (struct zxmd_md_AttributeAuthorityDescriptor_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zxmd_md_EntityDescriptor_GET_AttributeAuthorityDescriptor) */

struct zxmd_md_AttributeAuthorityDescriptor_s* zxmd_md_EntityDescriptor_GET_AttributeAuthorityDescriptor(struct zxmd_md_EntityDescriptor_s* x, int n)
{
  struct zxmd_md_AttributeAuthorityDescriptor_s* y;
  if (!x) return 0;
  for (y = x->AttributeAuthorityDescriptor; n>=0 && y; --n, y = (struct zxmd_md_AttributeAuthorityDescriptor_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zxmd_md_EntityDescriptor_POP_AttributeAuthorityDescriptor) */

struct zxmd_md_AttributeAuthorityDescriptor_s* zxmd_md_EntityDescriptor_POP_AttributeAuthorityDescriptor(struct zxmd_md_EntityDescriptor_s* x)
{
  struct zxmd_md_AttributeAuthorityDescriptor_s* y;
  if (!x) return 0;
  y = x->AttributeAuthorityDescriptor;
  if (y)
    x->AttributeAuthorityDescriptor = (struct zxmd_md_AttributeAuthorityDescriptor_s*)y->gg.g.n;
  return y;
}

/* FUNC(zxmd_md_EntityDescriptor_PUSH_AttributeAuthorityDescriptor) */

void zxmd_md_EntityDescriptor_PUSH_AttributeAuthorityDescriptor(struct zxmd_md_EntityDescriptor_s* x, struct zxmd_md_AttributeAuthorityDescriptor_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->AttributeAuthorityDescriptor->gg.g;
  x->AttributeAuthorityDescriptor = z;
}

/* FUNC(zxmd_md_EntityDescriptor_REV_AttributeAuthorityDescriptor) */

void zxmd_md_EntityDescriptor_REV_AttributeAuthorityDescriptor(struct zxmd_md_EntityDescriptor_s* x)
{
  struct zxmd_md_AttributeAuthorityDescriptor_s* nxt;
  struct zxmd_md_AttributeAuthorityDescriptor_s* y;
  if (!x) return;
  y = x->AttributeAuthorityDescriptor;
  if (!y) return;
  x->AttributeAuthorityDescriptor = 0;
  while (y) {
    nxt = (struct zxmd_md_AttributeAuthorityDescriptor_s*)y->gg.g.n;
    y->gg.g.n = &x->AttributeAuthorityDescriptor->gg.g;
    x->AttributeAuthorityDescriptor = y;
    y = nxt;
  }
}

/* FUNC(zxmd_md_EntityDescriptor_PUT_AttributeAuthorityDescriptor) */

void zxmd_md_EntityDescriptor_PUT_AttributeAuthorityDescriptor(struct zxmd_md_EntityDescriptor_s* x, int n, struct zxmd_md_AttributeAuthorityDescriptor_s* z)
{
  struct zxmd_md_AttributeAuthorityDescriptor_s* y;
  if (!x || !z) return;
  y = x->AttributeAuthorityDescriptor;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->AttributeAuthorityDescriptor = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zxmd_md_AttributeAuthorityDescriptor_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zxmd_md_EntityDescriptor_ADD_AttributeAuthorityDescriptor) */

void zxmd_md_EntityDescriptor_ADD_AttributeAuthorityDescriptor(struct zxmd_md_EntityDescriptor_s* x, int n, struct zxmd_md_AttributeAuthorityDescriptor_s* z)
{
  struct zxmd_md_AttributeAuthorityDescriptor_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->AttributeAuthorityDescriptor->gg.g;
    x->AttributeAuthorityDescriptor = z;
    return;
  case -1:
    y = x->AttributeAuthorityDescriptor;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zxmd_md_AttributeAuthorityDescriptor_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->AttributeAuthorityDescriptor; n > 1 && y; --n, y = (struct zxmd_md_AttributeAuthorityDescriptor_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zxmd_md_EntityDescriptor_DEL_AttributeAuthorityDescriptor) */

void zxmd_md_EntityDescriptor_DEL_AttributeAuthorityDescriptor(struct zxmd_md_EntityDescriptor_s* x, int n)
{
  struct zxmd_md_AttributeAuthorityDescriptor_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->AttributeAuthorityDescriptor = (struct zxmd_md_AttributeAuthorityDescriptor_s*)x->AttributeAuthorityDescriptor->gg.g.n;
    return;
  case -1:
    y = (struct zxmd_md_AttributeAuthorityDescriptor_s*)x->AttributeAuthorityDescriptor;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zxmd_md_AttributeAuthorityDescriptor_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->AttributeAuthorityDescriptor; n > 1 && y->gg.g.n; --n, y = (struct zxmd_md_AttributeAuthorityDescriptor_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zxmd_md_EntityDescriptor_NUM_PDPDescriptor) */

int zxmd_md_EntityDescriptor_NUM_PDPDescriptor(struct zxmd_md_EntityDescriptor_s* x)
{
  struct zxmd_md_PDPDescriptor_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->PDPDescriptor; y; ++n, y = (struct zxmd_md_PDPDescriptor_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zxmd_md_EntityDescriptor_GET_PDPDescriptor) */

struct zxmd_md_PDPDescriptor_s* zxmd_md_EntityDescriptor_GET_PDPDescriptor(struct zxmd_md_EntityDescriptor_s* x, int n)
{
  struct zxmd_md_PDPDescriptor_s* y;
  if (!x) return 0;
  for (y = x->PDPDescriptor; n>=0 && y; --n, y = (struct zxmd_md_PDPDescriptor_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zxmd_md_EntityDescriptor_POP_PDPDescriptor) */

struct zxmd_md_PDPDescriptor_s* zxmd_md_EntityDescriptor_POP_PDPDescriptor(struct zxmd_md_EntityDescriptor_s* x)
{
  struct zxmd_md_PDPDescriptor_s* y;
  if (!x) return 0;
  y = x->PDPDescriptor;
  if (y)
    x->PDPDescriptor = (struct zxmd_md_PDPDescriptor_s*)y->gg.g.n;
  return y;
}

/* FUNC(zxmd_md_EntityDescriptor_PUSH_PDPDescriptor) */

void zxmd_md_EntityDescriptor_PUSH_PDPDescriptor(struct zxmd_md_EntityDescriptor_s* x, struct zxmd_md_PDPDescriptor_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->PDPDescriptor->gg.g;
  x->PDPDescriptor = z;
}

/* FUNC(zxmd_md_EntityDescriptor_REV_PDPDescriptor) */

void zxmd_md_EntityDescriptor_REV_PDPDescriptor(struct zxmd_md_EntityDescriptor_s* x)
{
  struct zxmd_md_PDPDescriptor_s* nxt;
  struct zxmd_md_PDPDescriptor_s* y;
  if (!x) return;
  y = x->PDPDescriptor;
  if (!y) return;
  x->PDPDescriptor = 0;
  while (y) {
    nxt = (struct zxmd_md_PDPDescriptor_s*)y->gg.g.n;
    y->gg.g.n = &x->PDPDescriptor->gg.g;
    x->PDPDescriptor = y;
    y = nxt;
  }
}

/* FUNC(zxmd_md_EntityDescriptor_PUT_PDPDescriptor) */

void zxmd_md_EntityDescriptor_PUT_PDPDescriptor(struct zxmd_md_EntityDescriptor_s* x, int n, struct zxmd_md_PDPDescriptor_s* z)
{
  struct zxmd_md_PDPDescriptor_s* y;
  if (!x || !z) return;
  y = x->PDPDescriptor;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->PDPDescriptor = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zxmd_md_PDPDescriptor_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zxmd_md_EntityDescriptor_ADD_PDPDescriptor) */

void zxmd_md_EntityDescriptor_ADD_PDPDescriptor(struct zxmd_md_EntityDescriptor_s* x, int n, struct zxmd_md_PDPDescriptor_s* z)
{
  struct zxmd_md_PDPDescriptor_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->PDPDescriptor->gg.g;
    x->PDPDescriptor = z;
    return;
  case -1:
    y = x->PDPDescriptor;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zxmd_md_PDPDescriptor_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->PDPDescriptor; n > 1 && y; --n, y = (struct zxmd_md_PDPDescriptor_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zxmd_md_EntityDescriptor_DEL_PDPDescriptor) */

void zxmd_md_EntityDescriptor_DEL_PDPDescriptor(struct zxmd_md_EntityDescriptor_s* x, int n)
{
  struct zxmd_md_PDPDescriptor_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->PDPDescriptor = (struct zxmd_md_PDPDescriptor_s*)x->PDPDescriptor->gg.g.n;
    return;
  case -1:
    y = (struct zxmd_md_PDPDescriptor_s*)x->PDPDescriptor;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zxmd_md_PDPDescriptor_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->PDPDescriptor; n > 1 && y->gg.g.n; --n, y = (struct zxmd_md_PDPDescriptor_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zxmd_md_EntityDescriptor_NUM_AffiliationDescriptor) */

int zxmd_md_EntityDescriptor_NUM_AffiliationDescriptor(struct zxmd_md_EntityDescriptor_s* x)
{
  struct zxmd_md_AffiliationDescriptor_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->AffiliationDescriptor; y; ++n, y = (struct zxmd_md_AffiliationDescriptor_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zxmd_md_EntityDescriptor_GET_AffiliationDescriptor) */

struct zxmd_md_AffiliationDescriptor_s* zxmd_md_EntityDescriptor_GET_AffiliationDescriptor(struct zxmd_md_EntityDescriptor_s* x, int n)
{
  struct zxmd_md_AffiliationDescriptor_s* y;
  if (!x) return 0;
  for (y = x->AffiliationDescriptor; n>=0 && y; --n, y = (struct zxmd_md_AffiliationDescriptor_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zxmd_md_EntityDescriptor_POP_AffiliationDescriptor) */

struct zxmd_md_AffiliationDescriptor_s* zxmd_md_EntityDescriptor_POP_AffiliationDescriptor(struct zxmd_md_EntityDescriptor_s* x)
{
  struct zxmd_md_AffiliationDescriptor_s* y;
  if (!x) return 0;
  y = x->AffiliationDescriptor;
  if (y)
    x->AffiliationDescriptor = (struct zxmd_md_AffiliationDescriptor_s*)y->gg.g.n;
  return y;
}

/* FUNC(zxmd_md_EntityDescriptor_PUSH_AffiliationDescriptor) */

void zxmd_md_EntityDescriptor_PUSH_AffiliationDescriptor(struct zxmd_md_EntityDescriptor_s* x, struct zxmd_md_AffiliationDescriptor_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->AffiliationDescriptor->gg.g;
  x->AffiliationDescriptor = z;
}

/* FUNC(zxmd_md_EntityDescriptor_REV_AffiliationDescriptor) */

void zxmd_md_EntityDescriptor_REV_AffiliationDescriptor(struct zxmd_md_EntityDescriptor_s* x)
{
  struct zxmd_md_AffiliationDescriptor_s* nxt;
  struct zxmd_md_AffiliationDescriptor_s* y;
  if (!x) return;
  y = x->AffiliationDescriptor;
  if (!y) return;
  x->AffiliationDescriptor = 0;
  while (y) {
    nxt = (struct zxmd_md_AffiliationDescriptor_s*)y->gg.g.n;
    y->gg.g.n = &x->AffiliationDescriptor->gg.g;
    x->AffiliationDescriptor = y;
    y = nxt;
  }
}

/* FUNC(zxmd_md_EntityDescriptor_PUT_AffiliationDescriptor) */

void zxmd_md_EntityDescriptor_PUT_AffiliationDescriptor(struct zxmd_md_EntityDescriptor_s* x, int n, struct zxmd_md_AffiliationDescriptor_s* z)
{
  struct zxmd_md_AffiliationDescriptor_s* y;
  if (!x || !z) return;
  y = x->AffiliationDescriptor;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->AffiliationDescriptor = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zxmd_md_AffiliationDescriptor_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zxmd_md_EntityDescriptor_ADD_AffiliationDescriptor) */

void zxmd_md_EntityDescriptor_ADD_AffiliationDescriptor(struct zxmd_md_EntityDescriptor_s* x, int n, struct zxmd_md_AffiliationDescriptor_s* z)
{
  struct zxmd_md_AffiliationDescriptor_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->AffiliationDescriptor->gg.g;
    x->AffiliationDescriptor = z;
    return;
  case -1:
    y = x->AffiliationDescriptor;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zxmd_md_AffiliationDescriptor_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->AffiliationDescriptor; n > 1 && y; --n, y = (struct zxmd_md_AffiliationDescriptor_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zxmd_md_EntityDescriptor_DEL_AffiliationDescriptor) */

void zxmd_md_EntityDescriptor_DEL_AffiliationDescriptor(struct zxmd_md_EntityDescriptor_s* x, int n)
{
  struct zxmd_md_AffiliationDescriptor_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->AffiliationDescriptor = (struct zxmd_md_AffiliationDescriptor_s*)x->AffiliationDescriptor->gg.g.n;
    return;
  case -1:
    y = (struct zxmd_md_AffiliationDescriptor_s*)x->AffiliationDescriptor;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zxmd_md_AffiliationDescriptor_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->AffiliationDescriptor; n > 1 && y->gg.g.n; --n, y = (struct zxmd_md_AffiliationDescriptor_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zxmd_md_EntityDescriptor_NUM_Organization) */

int zxmd_md_EntityDescriptor_NUM_Organization(struct zxmd_md_EntityDescriptor_s* x)
{
  struct zxmd_md_Organization_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Organization; y; ++n, y = (struct zxmd_md_Organization_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zxmd_md_EntityDescriptor_GET_Organization) */

struct zxmd_md_Organization_s* zxmd_md_EntityDescriptor_GET_Organization(struct zxmd_md_EntityDescriptor_s* x, int n)
{
  struct zxmd_md_Organization_s* y;
  if (!x) return 0;
  for (y = x->Organization; n>=0 && y; --n, y = (struct zxmd_md_Organization_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zxmd_md_EntityDescriptor_POP_Organization) */

struct zxmd_md_Organization_s* zxmd_md_EntityDescriptor_POP_Organization(struct zxmd_md_EntityDescriptor_s* x)
{
  struct zxmd_md_Organization_s* y;
  if (!x) return 0;
  y = x->Organization;
  if (y)
    x->Organization = (struct zxmd_md_Organization_s*)y->gg.g.n;
  return y;
}

/* FUNC(zxmd_md_EntityDescriptor_PUSH_Organization) */

void zxmd_md_EntityDescriptor_PUSH_Organization(struct zxmd_md_EntityDescriptor_s* x, struct zxmd_md_Organization_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Organization->gg.g;
  x->Organization = z;
}

/* FUNC(zxmd_md_EntityDescriptor_REV_Organization) */

void zxmd_md_EntityDescriptor_REV_Organization(struct zxmd_md_EntityDescriptor_s* x)
{
  struct zxmd_md_Organization_s* nxt;
  struct zxmd_md_Organization_s* y;
  if (!x) return;
  y = x->Organization;
  if (!y) return;
  x->Organization = 0;
  while (y) {
    nxt = (struct zxmd_md_Organization_s*)y->gg.g.n;
    y->gg.g.n = &x->Organization->gg.g;
    x->Organization = y;
    y = nxt;
  }
}

/* FUNC(zxmd_md_EntityDescriptor_PUT_Organization) */

void zxmd_md_EntityDescriptor_PUT_Organization(struct zxmd_md_EntityDescriptor_s* x, int n, struct zxmd_md_Organization_s* z)
{
  struct zxmd_md_Organization_s* y;
  if (!x || !z) return;
  y = x->Organization;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Organization = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zxmd_md_Organization_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zxmd_md_EntityDescriptor_ADD_Organization) */

void zxmd_md_EntityDescriptor_ADD_Organization(struct zxmd_md_EntityDescriptor_s* x, int n, struct zxmd_md_Organization_s* z)
{
  struct zxmd_md_Organization_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->Organization->gg.g;
    x->Organization = z;
    return;
  case -1:
    y = x->Organization;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zxmd_md_Organization_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Organization; n > 1 && y; --n, y = (struct zxmd_md_Organization_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zxmd_md_EntityDescriptor_DEL_Organization) */

void zxmd_md_EntityDescriptor_DEL_Organization(struct zxmd_md_EntityDescriptor_s* x, int n)
{
  struct zxmd_md_Organization_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Organization = (struct zxmd_md_Organization_s*)x->Organization->gg.g.n;
    return;
  case -1:
    y = (struct zxmd_md_Organization_s*)x->Organization;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zxmd_md_Organization_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Organization; n > 1 && y->gg.g.n; --n, y = (struct zxmd_md_Organization_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zxmd_md_EntityDescriptor_NUM_ContactPerson) */

int zxmd_md_EntityDescriptor_NUM_ContactPerson(struct zxmd_md_EntityDescriptor_s* x)
{
  struct zxmd_md_ContactPerson_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->ContactPerson; y; ++n, y = (struct zxmd_md_ContactPerson_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zxmd_md_EntityDescriptor_GET_ContactPerson) */

struct zxmd_md_ContactPerson_s* zxmd_md_EntityDescriptor_GET_ContactPerson(struct zxmd_md_EntityDescriptor_s* x, int n)
{
  struct zxmd_md_ContactPerson_s* y;
  if (!x) return 0;
  for (y = x->ContactPerson; n>=0 && y; --n, y = (struct zxmd_md_ContactPerson_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zxmd_md_EntityDescriptor_POP_ContactPerson) */

struct zxmd_md_ContactPerson_s* zxmd_md_EntityDescriptor_POP_ContactPerson(struct zxmd_md_EntityDescriptor_s* x)
{
  struct zxmd_md_ContactPerson_s* y;
  if (!x) return 0;
  y = x->ContactPerson;
  if (y)
    x->ContactPerson = (struct zxmd_md_ContactPerson_s*)y->gg.g.n;
  return y;
}

/* FUNC(zxmd_md_EntityDescriptor_PUSH_ContactPerson) */

void zxmd_md_EntityDescriptor_PUSH_ContactPerson(struct zxmd_md_EntityDescriptor_s* x, struct zxmd_md_ContactPerson_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->ContactPerson->gg.g;
  x->ContactPerson = z;
}

/* FUNC(zxmd_md_EntityDescriptor_REV_ContactPerson) */

void zxmd_md_EntityDescriptor_REV_ContactPerson(struct zxmd_md_EntityDescriptor_s* x)
{
  struct zxmd_md_ContactPerson_s* nxt;
  struct zxmd_md_ContactPerson_s* y;
  if (!x) return;
  y = x->ContactPerson;
  if (!y) return;
  x->ContactPerson = 0;
  while (y) {
    nxt = (struct zxmd_md_ContactPerson_s*)y->gg.g.n;
    y->gg.g.n = &x->ContactPerson->gg.g;
    x->ContactPerson = y;
    y = nxt;
  }
}

/* FUNC(zxmd_md_EntityDescriptor_PUT_ContactPerson) */

void zxmd_md_EntityDescriptor_PUT_ContactPerson(struct zxmd_md_EntityDescriptor_s* x, int n, struct zxmd_md_ContactPerson_s* z)
{
  struct zxmd_md_ContactPerson_s* y;
  if (!x || !z) return;
  y = x->ContactPerson;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->ContactPerson = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zxmd_md_ContactPerson_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zxmd_md_EntityDescriptor_ADD_ContactPerson) */

void zxmd_md_EntityDescriptor_ADD_ContactPerson(struct zxmd_md_EntityDescriptor_s* x, int n, struct zxmd_md_ContactPerson_s* z)
{
  struct zxmd_md_ContactPerson_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->ContactPerson->gg.g;
    x->ContactPerson = z;
    return;
  case -1:
    y = x->ContactPerson;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zxmd_md_ContactPerson_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->ContactPerson; n > 1 && y; --n, y = (struct zxmd_md_ContactPerson_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zxmd_md_EntityDescriptor_DEL_ContactPerson) */

void zxmd_md_EntityDescriptor_DEL_ContactPerson(struct zxmd_md_EntityDescriptor_s* x, int n)
{
  struct zxmd_md_ContactPerson_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->ContactPerson = (struct zxmd_md_ContactPerson_s*)x->ContactPerson->gg.g.n;
    return;
  case -1:
    y = (struct zxmd_md_ContactPerson_s*)x->ContactPerson;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zxmd_md_ContactPerson_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->ContactPerson; n > 1 && y->gg.g.n; --n, y = (struct zxmd_md_ContactPerson_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zxmd_md_EntityDescriptor_NUM_AdditionalMetadataLocation) */

int zxmd_md_EntityDescriptor_NUM_AdditionalMetadataLocation(struct zxmd_md_EntityDescriptor_s* x)
{
  struct zxmd_md_AdditionalMetadataLocation_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->AdditionalMetadataLocation; y; ++n, y = (struct zxmd_md_AdditionalMetadataLocation_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zxmd_md_EntityDescriptor_GET_AdditionalMetadataLocation) */

struct zxmd_md_AdditionalMetadataLocation_s* zxmd_md_EntityDescriptor_GET_AdditionalMetadataLocation(struct zxmd_md_EntityDescriptor_s* x, int n)
{
  struct zxmd_md_AdditionalMetadataLocation_s* y;
  if (!x) return 0;
  for (y = x->AdditionalMetadataLocation; n>=0 && y; --n, y = (struct zxmd_md_AdditionalMetadataLocation_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zxmd_md_EntityDescriptor_POP_AdditionalMetadataLocation) */

struct zxmd_md_AdditionalMetadataLocation_s* zxmd_md_EntityDescriptor_POP_AdditionalMetadataLocation(struct zxmd_md_EntityDescriptor_s* x)
{
  struct zxmd_md_AdditionalMetadataLocation_s* y;
  if (!x) return 0;
  y = x->AdditionalMetadataLocation;
  if (y)
    x->AdditionalMetadataLocation = (struct zxmd_md_AdditionalMetadataLocation_s*)y->gg.g.n;
  return y;
}

/* FUNC(zxmd_md_EntityDescriptor_PUSH_AdditionalMetadataLocation) */

void zxmd_md_EntityDescriptor_PUSH_AdditionalMetadataLocation(struct zxmd_md_EntityDescriptor_s* x, struct zxmd_md_AdditionalMetadataLocation_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->AdditionalMetadataLocation->gg.g;
  x->AdditionalMetadataLocation = z;
}

/* FUNC(zxmd_md_EntityDescriptor_REV_AdditionalMetadataLocation) */

void zxmd_md_EntityDescriptor_REV_AdditionalMetadataLocation(struct zxmd_md_EntityDescriptor_s* x)
{
  struct zxmd_md_AdditionalMetadataLocation_s* nxt;
  struct zxmd_md_AdditionalMetadataLocation_s* y;
  if (!x) return;
  y = x->AdditionalMetadataLocation;
  if (!y) return;
  x->AdditionalMetadataLocation = 0;
  while (y) {
    nxt = (struct zxmd_md_AdditionalMetadataLocation_s*)y->gg.g.n;
    y->gg.g.n = &x->AdditionalMetadataLocation->gg.g;
    x->AdditionalMetadataLocation = y;
    y = nxt;
  }
}

/* FUNC(zxmd_md_EntityDescriptor_PUT_AdditionalMetadataLocation) */

void zxmd_md_EntityDescriptor_PUT_AdditionalMetadataLocation(struct zxmd_md_EntityDescriptor_s* x, int n, struct zxmd_md_AdditionalMetadataLocation_s* z)
{
  struct zxmd_md_AdditionalMetadataLocation_s* y;
  if (!x || !z) return;
  y = x->AdditionalMetadataLocation;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->AdditionalMetadataLocation = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zxmd_md_AdditionalMetadataLocation_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zxmd_md_EntityDescriptor_ADD_AdditionalMetadataLocation) */

void zxmd_md_EntityDescriptor_ADD_AdditionalMetadataLocation(struct zxmd_md_EntityDescriptor_s* x, int n, struct zxmd_md_AdditionalMetadataLocation_s* z)
{
  struct zxmd_md_AdditionalMetadataLocation_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->AdditionalMetadataLocation->gg.g;
    x->AdditionalMetadataLocation = z;
    return;
  case -1:
    y = x->AdditionalMetadataLocation;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zxmd_md_AdditionalMetadataLocation_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->AdditionalMetadataLocation; n > 1 && y; --n, y = (struct zxmd_md_AdditionalMetadataLocation_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zxmd_md_EntityDescriptor_DEL_AdditionalMetadataLocation) */

void zxmd_md_EntityDescriptor_DEL_AdditionalMetadataLocation(struct zxmd_md_EntityDescriptor_s* x, int n)
{
  struct zxmd_md_AdditionalMetadataLocation_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->AdditionalMetadataLocation = (struct zxmd_md_AdditionalMetadataLocation_s*)x->AdditionalMetadataLocation->gg.g.n;
    return;
  case -1:
    y = (struct zxmd_md_AdditionalMetadataLocation_s*)x->AdditionalMetadataLocation;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zxmd_md_AdditionalMetadataLocation_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->AdditionalMetadataLocation; n > 1 && y->gg.g.n; --n, y = (struct zxmd_md_AdditionalMetadataLocation_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

/* FUNC(zxmd_md_EntityDescriptor_GET_entityID) */
struct zx_str_s* zxmd_md_EntityDescriptor_GET_entityID(struct zxmd_md_EntityDescriptor_s* x) { return x->entityID; }
/* FUNC(zxmd_md_EntityDescriptor_PUT_entityID) */
void zxmd_md_EntityDescriptor_PUT_entityID(struct zxmd_md_EntityDescriptor_s* x, struct zx_str_s* y) { x->entityID = y; }
/* FUNC(zxmd_md_EntityDescriptor_GET_validUntil) */
struct zx_str_s* zxmd_md_EntityDescriptor_GET_validUntil(struct zxmd_md_EntityDescriptor_s* x) { return x->validUntil; }
/* FUNC(zxmd_md_EntityDescriptor_PUT_validUntil) */
void zxmd_md_EntityDescriptor_PUT_validUntil(struct zxmd_md_EntityDescriptor_s* x, struct zx_str_s* y) { x->validUntil = y; }
/* FUNC(zxmd_md_EntityDescriptor_GET_cacheDuration) */
struct zx_str_s* zxmd_md_EntityDescriptor_GET_cacheDuration(struct zxmd_md_EntityDescriptor_s* x) { return x->cacheDuration; }
/* FUNC(zxmd_md_EntityDescriptor_PUT_cacheDuration) */
void zxmd_md_EntityDescriptor_PUT_cacheDuration(struct zxmd_md_EntityDescriptor_s* x, struct zx_str_s* y) { x->cacheDuration = y; }
/* FUNC(zxmd_md_EntityDescriptor_GET_ID) */
struct zx_str_s* zxmd_md_EntityDescriptor_GET_ID(struct zxmd_md_EntityDescriptor_s* x) { return x->ID; }
/* FUNC(zxmd_md_EntityDescriptor_PUT_ID) */
void zxmd_md_EntityDescriptor_PUT_ID(struct zxmd_md_EntityDescriptor_s* x, struct zx_str_s* y) { x->ID = y; }












/* FUNC(zxmd_md_IDPSSODescriptor_NUM_Signature) */

int zxmd_md_IDPSSODescriptor_NUM_Signature(struct zxmd_md_IDPSSODescriptor_s* x)
{
  struct zxmd_ds_Signature_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Signature; y; ++n, y = (struct zxmd_ds_Signature_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zxmd_md_IDPSSODescriptor_GET_Signature) */

struct zxmd_ds_Signature_s* zxmd_md_IDPSSODescriptor_GET_Signature(struct zxmd_md_IDPSSODescriptor_s* x, int n)
{
  struct zxmd_ds_Signature_s* y;
  if (!x) return 0;
  for (y = x->Signature; n>=0 && y; --n, y = (struct zxmd_ds_Signature_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zxmd_md_IDPSSODescriptor_POP_Signature) */

struct zxmd_ds_Signature_s* zxmd_md_IDPSSODescriptor_POP_Signature(struct zxmd_md_IDPSSODescriptor_s* x)
{
  struct zxmd_ds_Signature_s* y;
  if (!x) return 0;
  y = x->Signature;
  if (y)
    x->Signature = (struct zxmd_ds_Signature_s*)y->gg.g.n;
  return y;
}

/* FUNC(zxmd_md_IDPSSODescriptor_PUSH_Signature) */

void zxmd_md_IDPSSODescriptor_PUSH_Signature(struct zxmd_md_IDPSSODescriptor_s* x, struct zxmd_ds_Signature_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Signature->gg.g;
  x->Signature = z;
}

/* FUNC(zxmd_md_IDPSSODescriptor_REV_Signature) */

void zxmd_md_IDPSSODescriptor_REV_Signature(struct zxmd_md_IDPSSODescriptor_s* x)
{
  struct zxmd_ds_Signature_s* nxt;
  struct zxmd_ds_Signature_s* y;
  if (!x) return;
  y = x->Signature;
  if (!y) return;
  x->Signature = 0;
  while (y) {
    nxt = (struct zxmd_ds_Signature_s*)y->gg.g.n;
    y->gg.g.n = &x->Signature->gg.g;
    x->Signature = y;
    y = nxt;
  }
}

/* FUNC(zxmd_md_IDPSSODescriptor_PUT_Signature) */

void zxmd_md_IDPSSODescriptor_PUT_Signature(struct zxmd_md_IDPSSODescriptor_s* x, int n, struct zxmd_ds_Signature_s* z)
{
  struct zxmd_ds_Signature_s* y;
  if (!x || !z) return;
  y = x->Signature;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Signature = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zxmd_ds_Signature_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zxmd_md_IDPSSODescriptor_ADD_Signature) */

void zxmd_md_IDPSSODescriptor_ADD_Signature(struct zxmd_md_IDPSSODescriptor_s* x, int n, struct zxmd_ds_Signature_s* z)
{
  struct zxmd_ds_Signature_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->Signature->gg.g;
    x->Signature = z;
    return;
  case -1:
    y = x->Signature;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zxmd_ds_Signature_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Signature; n > 1 && y; --n, y = (struct zxmd_ds_Signature_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zxmd_md_IDPSSODescriptor_DEL_Signature) */

void zxmd_md_IDPSSODescriptor_DEL_Signature(struct zxmd_md_IDPSSODescriptor_s* x, int n)
{
  struct zxmd_ds_Signature_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Signature = (struct zxmd_ds_Signature_s*)x->Signature->gg.g.n;
    return;
  case -1:
    y = (struct zxmd_ds_Signature_s*)x->Signature;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zxmd_ds_Signature_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Signature; n > 1 && y->gg.g.n; --n, y = (struct zxmd_ds_Signature_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zxmd_md_IDPSSODescriptor_NUM_Extensions) */

int zxmd_md_IDPSSODescriptor_NUM_Extensions(struct zxmd_md_IDPSSODescriptor_s* x)
{
  struct zxmd_md_Extensions_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Extensions; y; ++n, y = (struct zxmd_md_Extensions_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zxmd_md_IDPSSODescriptor_GET_Extensions) */

struct zxmd_md_Extensions_s* zxmd_md_IDPSSODescriptor_GET_Extensions(struct zxmd_md_IDPSSODescriptor_s* x, int n)
{
  struct zxmd_md_Extensions_s* y;
  if (!x) return 0;
  for (y = x->Extensions; n>=0 && y; --n, y = (struct zxmd_md_Extensions_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zxmd_md_IDPSSODescriptor_POP_Extensions) */

struct zxmd_md_Extensions_s* zxmd_md_IDPSSODescriptor_POP_Extensions(struct zxmd_md_IDPSSODescriptor_s* x)
{
  struct zxmd_md_Extensions_s* y;
  if (!x) return 0;
  y = x->Extensions;
  if (y)
    x->Extensions = (struct zxmd_md_Extensions_s*)y->gg.g.n;
  return y;
}

/* FUNC(zxmd_md_IDPSSODescriptor_PUSH_Extensions) */

void zxmd_md_IDPSSODescriptor_PUSH_Extensions(struct zxmd_md_IDPSSODescriptor_s* x, struct zxmd_md_Extensions_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Extensions->gg.g;
  x->Extensions = z;
}

/* FUNC(zxmd_md_IDPSSODescriptor_REV_Extensions) */

void zxmd_md_IDPSSODescriptor_REV_Extensions(struct zxmd_md_IDPSSODescriptor_s* x)
{
  struct zxmd_md_Extensions_s* nxt;
  struct zxmd_md_Extensions_s* y;
  if (!x) return;
  y = x->Extensions;
  if (!y) return;
  x->Extensions = 0;
  while (y) {
    nxt = (struct zxmd_md_Extensions_s*)y->gg.g.n;
    y->gg.g.n = &x->Extensions->gg.g;
    x->Extensions = y;
    y = nxt;
  }
}

/* FUNC(zxmd_md_IDPSSODescriptor_PUT_Extensions) */

void zxmd_md_IDPSSODescriptor_PUT_Extensions(struct zxmd_md_IDPSSODescriptor_s* x, int n, struct zxmd_md_Extensions_s* z)
{
  struct zxmd_md_Extensions_s* y;
  if (!x || !z) return;
  y = x->Extensions;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Extensions = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zxmd_md_Extensions_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zxmd_md_IDPSSODescriptor_ADD_Extensions) */

void zxmd_md_IDPSSODescriptor_ADD_Extensions(struct zxmd_md_IDPSSODescriptor_s* x, int n, struct zxmd_md_Extensions_s* z)
{
  struct zxmd_md_Extensions_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->Extensions->gg.g;
    x->Extensions = z;
    return;
  case -1:
    y = x->Extensions;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zxmd_md_Extensions_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Extensions; n > 1 && y; --n, y = (struct zxmd_md_Extensions_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zxmd_md_IDPSSODescriptor_DEL_Extensions) */

void zxmd_md_IDPSSODescriptor_DEL_Extensions(struct zxmd_md_IDPSSODescriptor_s* x, int n)
{
  struct zxmd_md_Extensions_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Extensions = (struct zxmd_md_Extensions_s*)x->Extensions->gg.g.n;
    return;
  case -1:
    y = (struct zxmd_md_Extensions_s*)x->Extensions;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zxmd_md_Extensions_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Extensions; n > 1 && y->gg.g.n; --n, y = (struct zxmd_md_Extensions_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zxmd_md_IDPSSODescriptor_NUM_KeyDescriptor) */

int zxmd_md_IDPSSODescriptor_NUM_KeyDescriptor(struct zxmd_md_IDPSSODescriptor_s* x)
{
  struct zxmd_md_KeyDescriptor_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->KeyDescriptor; y; ++n, y = (struct zxmd_md_KeyDescriptor_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zxmd_md_IDPSSODescriptor_GET_KeyDescriptor) */

struct zxmd_md_KeyDescriptor_s* zxmd_md_IDPSSODescriptor_GET_KeyDescriptor(struct zxmd_md_IDPSSODescriptor_s* x, int n)
{
  struct zxmd_md_KeyDescriptor_s* y;
  if (!x) return 0;
  for (y = x->KeyDescriptor; n>=0 && y; --n, y = (struct zxmd_md_KeyDescriptor_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zxmd_md_IDPSSODescriptor_POP_KeyDescriptor) */

struct zxmd_md_KeyDescriptor_s* zxmd_md_IDPSSODescriptor_POP_KeyDescriptor(struct zxmd_md_IDPSSODescriptor_s* x)
{
  struct zxmd_md_KeyDescriptor_s* y;
  if (!x) return 0;
  y = x->KeyDescriptor;
  if (y)
    x->KeyDescriptor = (struct zxmd_md_KeyDescriptor_s*)y->gg.g.n;
  return y;
}

/* FUNC(zxmd_md_IDPSSODescriptor_PUSH_KeyDescriptor) */

void zxmd_md_IDPSSODescriptor_PUSH_KeyDescriptor(struct zxmd_md_IDPSSODescriptor_s* x, struct zxmd_md_KeyDescriptor_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->KeyDescriptor->gg.g;
  x->KeyDescriptor = z;
}

/* FUNC(zxmd_md_IDPSSODescriptor_REV_KeyDescriptor) */

void zxmd_md_IDPSSODescriptor_REV_KeyDescriptor(struct zxmd_md_IDPSSODescriptor_s* x)
{
  struct zxmd_md_KeyDescriptor_s* nxt;
  struct zxmd_md_KeyDescriptor_s* y;
  if (!x) return;
  y = x->KeyDescriptor;
  if (!y) return;
  x->KeyDescriptor = 0;
  while (y) {
    nxt = (struct zxmd_md_KeyDescriptor_s*)y->gg.g.n;
    y->gg.g.n = &x->KeyDescriptor->gg.g;
    x->KeyDescriptor = y;
    y = nxt;
  }
}

/* FUNC(zxmd_md_IDPSSODescriptor_PUT_KeyDescriptor) */

void zxmd_md_IDPSSODescriptor_PUT_KeyDescriptor(struct zxmd_md_IDPSSODescriptor_s* x, int n, struct zxmd_md_KeyDescriptor_s* z)
{
  struct zxmd_md_KeyDescriptor_s* y;
  if (!x || !z) return;
  y = x->KeyDescriptor;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->KeyDescriptor = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zxmd_md_KeyDescriptor_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zxmd_md_IDPSSODescriptor_ADD_KeyDescriptor) */

void zxmd_md_IDPSSODescriptor_ADD_KeyDescriptor(struct zxmd_md_IDPSSODescriptor_s* x, int n, struct zxmd_md_KeyDescriptor_s* z)
{
  struct zxmd_md_KeyDescriptor_s* y;
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
    for (; y->gg.g.n; y = (struct zxmd_md_KeyDescriptor_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->KeyDescriptor; n > 1 && y; --n, y = (struct zxmd_md_KeyDescriptor_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zxmd_md_IDPSSODescriptor_DEL_KeyDescriptor) */

void zxmd_md_IDPSSODescriptor_DEL_KeyDescriptor(struct zxmd_md_IDPSSODescriptor_s* x, int n)
{
  struct zxmd_md_KeyDescriptor_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->KeyDescriptor = (struct zxmd_md_KeyDescriptor_s*)x->KeyDescriptor->gg.g.n;
    return;
  case -1:
    y = (struct zxmd_md_KeyDescriptor_s*)x->KeyDescriptor;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zxmd_md_KeyDescriptor_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->KeyDescriptor; n > 1 && y->gg.g.n; --n, y = (struct zxmd_md_KeyDescriptor_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zxmd_md_IDPSSODescriptor_NUM_Organization) */

int zxmd_md_IDPSSODescriptor_NUM_Organization(struct zxmd_md_IDPSSODescriptor_s* x)
{
  struct zxmd_md_Organization_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Organization; y; ++n, y = (struct zxmd_md_Organization_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zxmd_md_IDPSSODescriptor_GET_Organization) */

struct zxmd_md_Organization_s* zxmd_md_IDPSSODescriptor_GET_Organization(struct zxmd_md_IDPSSODescriptor_s* x, int n)
{
  struct zxmd_md_Organization_s* y;
  if (!x) return 0;
  for (y = x->Organization; n>=0 && y; --n, y = (struct zxmd_md_Organization_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zxmd_md_IDPSSODescriptor_POP_Organization) */

struct zxmd_md_Organization_s* zxmd_md_IDPSSODescriptor_POP_Organization(struct zxmd_md_IDPSSODescriptor_s* x)
{
  struct zxmd_md_Organization_s* y;
  if (!x) return 0;
  y = x->Organization;
  if (y)
    x->Organization = (struct zxmd_md_Organization_s*)y->gg.g.n;
  return y;
}

/* FUNC(zxmd_md_IDPSSODescriptor_PUSH_Organization) */

void zxmd_md_IDPSSODescriptor_PUSH_Organization(struct zxmd_md_IDPSSODescriptor_s* x, struct zxmd_md_Organization_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Organization->gg.g;
  x->Organization = z;
}

/* FUNC(zxmd_md_IDPSSODescriptor_REV_Organization) */

void zxmd_md_IDPSSODescriptor_REV_Organization(struct zxmd_md_IDPSSODescriptor_s* x)
{
  struct zxmd_md_Organization_s* nxt;
  struct zxmd_md_Organization_s* y;
  if (!x) return;
  y = x->Organization;
  if (!y) return;
  x->Organization = 0;
  while (y) {
    nxt = (struct zxmd_md_Organization_s*)y->gg.g.n;
    y->gg.g.n = &x->Organization->gg.g;
    x->Organization = y;
    y = nxt;
  }
}

/* FUNC(zxmd_md_IDPSSODescriptor_PUT_Organization) */

void zxmd_md_IDPSSODescriptor_PUT_Organization(struct zxmd_md_IDPSSODescriptor_s* x, int n, struct zxmd_md_Organization_s* z)
{
  struct zxmd_md_Organization_s* y;
  if (!x || !z) return;
  y = x->Organization;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Organization = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zxmd_md_Organization_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zxmd_md_IDPSSODescriptor_ADD_Organization) */

void zxmd_md_IDPSSODescriptor_ADD_Organization(struct zxmd_md_IDPSSODescriptor_s* x, int n, struct zxmd_md_Organization_s* z)
{
  struct zxmd_md_Organization_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->Organization->gg.g;
    x->Organization = z;
    return;
  case -1:
    y = x->Organization;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zxmd_md_Organization_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Organization; n > 1 && y; --n, y = (struct zxmd_md_Organization_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zxmd_md_IDPSSODescriptor_DEL_Organization) */

void zxmd_md_IDPSSODescriptor_DEL_Organization(struct zxmd_md_IDPSSODescriptor_s* x, int n)
{
  struct zxmd_md_Organization_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Organization = (struct zxmd_md_Organization_s*)x->Organization->gg.g.n;
    return;
  case -1:
    y = (struct zxmd_md_Organization_s*)x->Organization;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zxmd_md_Organization_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Organization; n > 1 && y->gg.g.n; --n, y = (struct zxmd_md_Organization_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zxmd_md_IDPSSODescriptor_NUM_ContactPerson) */

int zxmd_md_IDPSSODescriptor_NUM_ContactPerson(struct zxmd_md_IDPSSODescriptor_s* x)
{
  struct zxmd_md_ContactPerson_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->ContactPerson; y; ++n, y = (struct zxmd_md_ContactPerson_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zxmd_md_IDPSSODescriptor_GET_ContactPerson) */

struct zxmd_md_ContactPerson_s* zxmd_md_IDPSSODescriptor_GET_ContactPerson(struct zxmd_md_IDPSSODescriptor_s* x, int n)
{
  struct zxmd_md_ContactPerson_s* y;
  if (!x) return 0;
  for (y = x->ContactPerson; n>=0 && y; --n, y = (struct zxmd_md_ContactPerson_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zxmd_md_IDPSSODescriptor_POP_ContactPerson) */

struct zxmd_md_ContactPerson_s* zxmd_md_IDPSSODescriptor_POP_ContactPerson(struct zxmd_md_IDPSSODescriptor_s* x)
{
  struct zxmd_md_ContactPerson_s* y;
  if (!x) return 0;
  y = x->ContactPerson;
  if (y)
    x->ContactPerson = (struct zxmd_md_ContactPerson_s*)y->gg.g.n;
  return y;
}

/* FUNC(zxmd_md_IDPSSODescriptor_PUSH_ContactPerson) */

void zxmd_md_IDPSSODescriptor_PUSH_ContactPerson(struct zxmd_md_IDPSSODescriptor_s* x, struct zxmd_md_ContactPerson_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->ContactPerson->gg.g;
  x->ContactPerson = z;
}

/* FUNC(zxmd_md_IDPSSODescriptor_REV_ContactPerson) */

void zxmd_md_IDPSSODescriptor_REV_ContactPerson(struct zxmd_md_IDPSSODescriptor_s* x)
{
  struct zxmd_md_ContactPerson_s* nxt;
  struct zxmd_md_ContactPerson_s* y;
  if (!x) return;
  y = x->ContactPerson;
  if (!y) return;
  x->ContactPerson = 0;
  while (y) {
    nxt = (struct zxmd_md_ContactPerson_s*)y->gg.g.n;
    y->gg.g.n = &x->ContactPerson->gg.g;
    x->ContactPerson = y;
    y = nxt;
  }
}

/* FUNC(zxmd_md_IDPSSODescriptor_PUT_ContactPerson) */

void zxmd_md_IDPSSODescriptor_PUT_ContactPerson(struct zxmd_md_IDPSSODescriptor_s* x, int n, struct zxmd_md_ContactPerson_s* z)
{
  struct zxmd_md_ContactPerson_s* y;
  if (!x || !z) return;
  y = x->ContactPerson;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->ContactPerson = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zxmd_md_ContactPerson_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zxmd_md_IDPSSODescriptor_ADD_ContactPerson) */

void zxmd_md_IDPSSODescriptor_ADD_ContactPerson(struct zxmd_md_IDPSSODescriptor_s* x, int n, struct zxmd_md_ContactPerson_s* z)
{
  struct zxmd_md_ContactPerson_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->ContactPerson->gg.g;
    x->ContactPerson = z;
    return;
  case -1:
    y = x->ContactPerson;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zxmd_md_ContactPerson_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->ContactPerson; n > 1 && y; --n, y = (struct zxmd_md_ContactPerson_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zxmd_md_IDPSSODescriptor_DEL_ContactPerson) */

void zxmd_md_IDPSSODescriptor_DEL_ContactPerson(struct zxmd_md_IDPSSODescriptor_s* x, int n)
{
  struct zxmd_md_ContactPerson_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->ContactPerson = (struct zxmd_md_ContactPerson_s*)x->ContactPerson->gg.g.n;
    return;
  case -1:
    y = (struct zxmd_md_ContactPerson_s*)x->ContactPerson;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zxmd_md_ContactPerson_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->ContactPerson; n > 1 && y->gg.g.n; --n, y = (struct zxmd_md_ContactPerson_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

/* FUNC(zxmd_md_IDPSSODescriptor_GET_ID) */
struct zx_str_s* zxmd_md_IDPSSODescriptor_GET_ID(struct zxmd_md_IDPSSODescriptor_s* x) { return x->ID; }
/* FUNC(zxmd_md_IDPSSODescriptor_PUT_ID) */
void zxmd_md_IDPSSODescriptor_PUT_ID(struct zxmd_md_IDPSSODescriptor_s* x, struct zx_str_s* y) { x->ID = y; }
/* FUNC(zxmd_md_IDPSSODescriptor_GET_validUntil) */
struct zx_str_s* zxmd_md_IDPSSODescriptor_GET_validUntil(struct zxmd_md_IDPSSODescriptor_s* x) { return x->validUntil; }
/* FUNC(zxmd_md_IDPSSODescriptor_PUT_validUntil) */
void zxmd_md_IDPSSODescriptor_PUT_validUntil(struct zxmd_md_IDPSSODescriptor_s* x, struct zx_str_s* y) { x->validUntil = y; }
/* FUNC(zxmd_md_IDPSSODescriptor_GET_cacheDuration) */
struct zx_str_s* zxmd_md_IDPSSODescriptor_GET_cacheDuration(struct zxmd_md_IDPSSODescriptor_s* x) { return x->cacheDuration; }
/* FUNC(zxmd_md_IDPSSODescriptor_PUT_cacheDuration) */
void zxmd_md_IDPSSODescriptor_PUT_cacheDuration(struct zxmd_md_IDPSSODescriptor_s* x, struct zx_str_s* y) { x->cacheDuration = y; }
/* FUNC(zxmd_md_IDPSSODescriptor_GET_protocolSupportEnumeration) */
struct zx_str_s* zxmd_md_IDPSSODescriptor_GET_protocolSupportEnumeration(struct zxmd_md_IDPSSODescriptor_s* x) { return x->protocolSupportEnumeration; }
/* FUNC(zxmd_md_IDPSSODescriptor_PUT_protocolSupportEnumeration) */
void zxmd_md_IDPSSODescriptor_PUT_protocolSupportEnumeration(struct zxmd_md_IDPSSODescriptor_s* x, struct zx_str_s* y) { x->protocolSupportEnumeration = y; }
/* FUNC(zxmd_md_IDPSSODescriptor_GET_errorURL) */
struct zx_str_s* zxmd_md_IDPSSODescriptor_GET_errorURL(struct zxmd_md_IDPSSODescriptor_s* x) { return x->errorURL; }
/* FUNC(zxmd_md_IDPSSODescriptor_PUT_errorURL) */
void zxmd_md_IDPSSODescriptor_PUT_errorURL(struct zxmd_md_IDPSSODescriptor_s* x, struct zx_str_s* y) { x->errorURL = y; }


/* FUNC(zxmd_md_IDPSSODescriptor_NUM_ArtifactResolutionService) */

int zxmd_md_IDPSSODescriptor_NUM_ArtifactResolutionService(struct zxmd_md_IDPSSODescriptor_s* x)
{
  struct zxmd_md_ArtifactResolutionService_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->ArtifactResolutionService; y; ++n, y = (struct zxmd_md_ArtifactResolutionService_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zxmd_md_IDPSSODescriptor_GET_ArtifactResolutionService) */

struct zxmd_md_ArtifactResolutionService_s* zxmd_md_IDPSSODescriptor_GET_ArtifactResolutionService(struct zxmd_md_IDPSSODescriptor_s* x, int n)
{
  struct zxmd_md_ArtifactResolutionService_s* y;
  if (!x) return 0;
  for (y = x->ArtifactResolutionService; n>=0 && y; --n, y = (struct zxmd_md_ArtifactResolutionService_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zxmd_md_IDPSSODescriptor_POP_ArtifactResolutionService) */

struct zxmd_md_ArtifactResolutionService_s* zxmd_md_IDPSSODescriptor_POP_ArtifactResolutionService(struct zxmd_md_IDPSSODescriptor_s* x)
{
  struct zxmd_md_ArtifactResolutionService_s* y;
  if (!x) return 0;
  y = x->ArtifactResolutionService;
  if (y)
    x->ArtifactResolutionService = (struct zxmd_md_ArtifactResolutionService_s*)y->gg.g.n;
  return y;
}

/* FUNC(zxmd_md_IDPSSODescriptor_PUSH_ArtifactResolutionService) */

void zxmd_md_IDPSSODescriptor_PUSH_ArtifactResolutionService(struct zxmd_md_IDPSSODescriptor_s* x, struct zxmd_md_ArtifactResolutionService_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->ArtifactResolutionService->gg.g;
  x->ArtifactResolutionService = z;
}

/* FUNC(zxmd_md_IDPSSODescriptor_REV_ArtifactResolutionService) */

void zxmd_md_IDPSSODescriptor_REV_ArtifactResolutionService(struct zxmd_md_IDPSSODescriptor_s* x)
{
  struct zxmd_md_ArtifactResolutionService_s* nxt;
  struct zxmd_md_ArtifactResolutionService_s* y;
  if (!x) return;
  y = x->ArtifactResolutionService;
  if (!y) return;
  x->ArtifactResolutionService = 0;
  while (y) {
    nxt = (struct zxmd_md_ArtifactResolutionService_s*)y->gg.g.n;
    y->gg.g.n = &x->ArtifactResolutionService->gg.g;
    x->ArtifactResolutionService = y;
    y = nxt;
  }
}

/* FUNC(zxmd_md_IDPSSODescriptor_PUT_ArtifactResolutionService) */

void zxmd_md_IDPSSODescriptor_PUT_ArtifactResolutionService(struct zxmd_md_IDPSSODescriptor_s* x, int n, struct zxmd_md_ArtifactResolutionService_s* z)
{
  struct zxmd_md_ArtifactResolutionService_s* y;
  if (!x || !z) return;
  y = x->ArtifactResolutionService;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->ArtifactResolutionService = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zxmd_md_ArtifactResolutionService_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zxmd_md_IDPSSODescriptor_ADD_ArtifactResolutionService) */

void zxmd_md_IDPSSODescriptor_ADD_ArtifactResolutionService(struct zxmd_md_IDPSSODescriptor_s* x, int n, struct zxmd_md_ArtifactResolutionService_s* z)
{
  struct zxmd_md_ArtifactResolutionService_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->ArtifactResolutionService->gg.g;
    x->ArtifactResolutionService = z;
    return;
  case -1:
    y = x->ArtifactResolutionService;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zxmd_md_ArtifactResolutionService_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->ArtifactResolutionService; n > 1 && y; --n, y = (struct zxmd_md_ArtifactResolutionService_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zxmd_md_IDPSSODescriptor_DEL_ArtifactResolutionService) */

void zxmd_md_IDPSSODescriptor_DEL_ArtifactResolutionService(struct zxmd_md_IDPSSODescriptor_s* x, int n)
{
  struct zxmd_md_ArtifactResolutionService_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->ArtifactResolutionService = (struct zxmd_md_ArtifactResolutionService_s*)x->ArtifactResolutionService->gg.g.n;
    return;
  case -1:
    y = (struct zxmd_md_ArtifactResolutionService_s*)x->ArtifactResolutionService;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zxmd_md_ArtifactResolutionService_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->ArtifactResolutionService; n > 1 && y->gg.g.n; --n, y = (struct zxmd_md_ArtifactResolutionService_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zxmd_md_IDPSSODescriptor_NUM_SingleLogoutService) */

int zxmd_md_IDPSSODescriptor_NUM_SingleLogoutService(struct zxmd_md_IDPSSODescriptor_s* x)
{
  struct zxmd_md_SingleLogoutService_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->SingleLogoutService; y; ++n, y = (struct zxmd_md_SingleLogoutService_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zxmd_md_IDPSSODescriptor_GET_SingleLogoutService) */

struct zxmd_md_SingleLogoutService_s* zxmd_md_IDPSSODescriptor_GET_SingleLogoutService(struct zxmd_md_IDPSSODescriptor_s* x, int n)
{
  struct zxmd_md_SingleLogoutService_s* y;
  if (!x) return 0;
  for (y = x->SingleLogoutService; n>=0 && y; --n, y = (struct zxmd_md_SingleLogoutService_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zxmd_md_IDPSSODescriptor_POP_SingleLogoutService) */

struct zxmd_md_SingleLogoutService_s* zxmd_md_IDPSSODescriptor_POP_SingleLogoutService(struct zxmd_md_IDPSSODescriptor_s* x)
{
  struct zxmd_md_SingleLogoutService_s* y;
  if (!x) return 0;
  y = x->SingleLogoutService;
  if (y)
    x->SingleLogoutService = (struct zxmd_md_SingleLogoutService_s*)y->gg.g.n;
  return y;
}

/* FUNC(zxmd_md_IDPSSODescriptor_PUSH_SingleLogoutService) */

void zxmd_md_IDPSSODescriptor_PUSH_SingleLogoutService(struct zxmd_md_IDPSSODescriptor_s* x, struct zxmd_md_SingleLogoutService_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->SingleLogoutService->gg.g;
  x->SingleLogoutService = z;
}

/* FUNC(zxmd_md_IDPSSODescriptor_REV_SingleLogoutService) */

void zxmd_md_IDPSSODescriptor_REV_SingleLogoutService(struct zxmd_md_IDPSSODescriptor_s* x)
{
  struct zxmd_md_SingleLogoutService_s* nxt;
  struct zxmd_md_SingleLogoutService_s* y;
  if (!x) return;
  y = x->SingleLogoutService;
  if (!y) return;
  x->SingleLogoutService = 0;
  while (y) {
    nxt = (struct zxmd_md_SingleLogoutService_s*)y->gg.g.n;
    y->gg.g.n = &x->SingleLogoutService->gg.g;
    x->SingleLogoutService = y;
    y = nxt;
  }
}

/* FUNC(zxmd_md_IDPSSODescriptor_PUT_SingleLogoutService) */

void zxmd_md_IDPSSODescriptor_PUT_SingleLogoutService(struct zxmd_md_IDPSSODescriptor_s* x, int n, struct zxmd_md_SingleLogoutService_s* z)
{
  struct zxmd_md_SingleLogoutService_s* y;
  if (!x || !z) return;
  y = x->SingleLogoutService;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->SingleLogoutService = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zxmd_md_SingleLogoutService_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zxmd_md_IDPSSODescriptor_ADD_SingleLogoutService) */

void zxmd_md_IDPSSODescriptor_ADD_SingleLogoutService(struct zxmd_md_IDPSSODescriptor_s* x, int n, struct zxmd_md_SingleLogoutService_s* z)
{
  struct zxmd_md_SingleLogoutService_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->SingleLogoutService->gg.g;
    x->SingleLogoutService = z;
    return;
  case -1:
    y = x->SingleLogoutService;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zxmd_md_SingleLogoutService_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->SingleLogoutService; n > 1 && y; --n, y = (struct zxmd_md_SingleLogoutService_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zxmd_md_IDPSSODescriptor_DEL_SingleLogoutService) */

void zxmd_md_IDPSSODescriptor_DEL_SingleLogoutService(struct zxmd_md_IDPSSODescriptor_s* x, int n)
{
  struct zxmd_md_SingleLogoutService_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->SingleLogoutService = (struct zxmd_md_SingleLogoutService_s*)x->SingleLogoutService->gg.g.n;
    return;
  case -1:
    y = (struct zxmd_md_SingleLogoutService_s*)x->SingleLogoutService;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zxmd_md_SingleLogoutService_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->SingleLogoutService; n > 1 && y->gg.g.n; --n, y = (struct zxmd_md_SingleLogoutService_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zxmd_md_IDPSSODescriptor_NUM_ManageNameIDService) */

int zxmd_md_IDPSSODescriptor_NUM_ManageNameIDService(struct zxmd_md_IDPSSODescriptor_s* x)
{
  struct zxmd_md_ManageNameIDService_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->ManageNameIDService; y; ++n, y = (struct zxmd_md_ManageNameIDService_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zxmd_md_IDPSSODescriptor_GET_ManageNameIDService) */

struct zxmd_md_ManageNameIDService_s* zxmd_md_IDPSSODescriptor_GET_ManageNameIDService(struct zxmd_md_IDPSSODescriptor_s* x, int n)
{
  struct zxmd_md_ManageNameIDService_s* y;
  if (!x) return 0;
  for (y = x->ManageNameIDService; n>=0 && y; --n, y = (struct zxmd_md_ManageNameIDService_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zxmd_md_IDPSSODescriptor_POP_ManageNameIDService) */

struct zxmd_md_ManageNameIDService_s* zxmd_md_IDPSSODescriptor_POP_ManageNameIDService(struct zxmd_md_IDPSSODescriptor_s* x)
{
  struct zxmd_md_ManageNameIDService_s* y;
  if (!x) return 0;
  y = x->ManageNameIDService;
  if (y)
    x->ManageNameIDService = (struct zxmd_md_ManageNameIDService_s*)y->gg.g.n;
  return y;
}

/* FUNC(zxmd_md_IDPSSODescriptor_PUSH_ManageNameIDService) */

void zxmd_md_IDPSSODescriptor_PUSH_ManageNameIDService(struct zxmd_md_IDPSSODescriptor_s* x, struct zxmd_md_ManageNameIDService_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->ManageNameIDService->gg.g;
  x->ManageNameIDService = z;
}

/* FUNC(zxmd_md_IDPSSODescriptor_REV_ManageNameIDService) */

void zxmd_md_IDPSSODescriptor_REV_ManageNameIDService(struct zxmd_md_IDPSSODescriptor_s* x)
{
  struct zxmd_md_ManageNameIDService_s* nxt;
  struct zxmd_md_ManageNameIDService_s* y;
  if (!x) return;
  y = x->ManageNameIDService;
  if (!y) return;
  x->ManageNameIDService = 0;
  while (y) {
    nxt = (struct zxmd_md_ManageNameIDService_s*)y->gg.g.n;
    y->gg.g.n = &x->ManageNameIDService->gg.g;
    x->ManageNameIDService = y;
    y = nxt;
  }
}

/* FUNC(zxmd_md_IDPSSODescriptor_PUT_ManageNameIDService) */

void zxmd_md_IDPSSODescriptor_PUT_ManageNameIDService(struct zxmd_md_IDPSSODescriptor_s* x, int n, struct zxmd_md_ManageNameIDService_s* z)
{
  struct zxmd_md_ManageNameIDService_s* y;
  if (!x || !z) return;
  y = x->ManageNameIDService;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->ManageNameIDService = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zxmd_md_ManageNameIDService_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zxmd_md_IDPSSODescriptor_ADD_ManageNameIDService) */

void zxmd_md_IDPSSODescriptor_ADD_ManageNameIDService(struct zxmd_md_IDPSSODescriptor_s* x, int n, struct zxmd_md_ManageNameIDService_s* z)
{
  struct zxmd_md_ManageNameIDService_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->ManageNameIDService->gg.g;
    x->ManageNameIDService = z;
    return;
  case -1:
    y = x->ManageNameIDService;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zxmd_md_ManageNameIDService_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->ManageNameIDService; n > 1 && y; --n, y = (struct zxmd_md_ManageNameIDService_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zxmd_md_IDPSSODescriptor_DEL_ManageNameIDService) */

void zxmd_md_IDPSSODescriptor_DEL_ManageNameIDService(struct zxmd_md_IDPSSODescriptor_s* x, int n)
{
  struct zxmd_md_ManageNameIDService_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->ManageNameIDService = (struct zxmd_md_ManageNameIDService_s*)x->ManageNameIDService->gg.g.n;
    return;
  case -1:
    y = (struct zxmd_md_ManageNameIDService_s*)x->ManageNameIDService;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zxmd_md_ManageNameIDService_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->ManageNameIDService; n > 1 && y->gg.g.n; --n, y = (struct zxmd_md_ManageNameIDService_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zxmd_md_IDPSSODescriptor_NUM_NameIDFormat) */

int zxmd_md_IDPSSODescriptor_NUM_NameIDFormat(struct zxmd_md_IDPSSODescriptor_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->NameIDFormat; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zxmd_md_IDPSSODescriptor_GET_NameIDFormat) */

struct zx_elem_s* zxmd_md_IDPSSODescriptor_GET_NameIDFormat(struct zxmd_md_IDPSSODescriptor_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->NameIDFormat; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zxmd_md_IDPSSODescriptor_POP_NameIDFormat) */

struct zx_elem_s* zxmd_md_IDPSSODescriptor_POP_NameIDFormat(struct zxmd_md_IDPSSODescriptor_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->NameIDFormat;
  if (y)
    x->NameIDFormat = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zxmd_md_IDPSSODescriptor_PUSH_NameIDFormat) */

void zxmd_md_IDPSSODescriptor_PUSH_NameIDFormat(struct zxmd_md_IDPSSODescriptor_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->NameIDFormat->g;
  x->NameIDFormat = z;
}

/* FUNC(zxmd_md_IDPSSODescriptor_REV_NameIDFormat) */

void zxmd_md_IDPSSODescriptor_REV_NameIDFormat(struct zxmd_md_IDPSSODescriptor_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->NameIDFormat;
  if (!y) return;
  x->NameIDFormat = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->NameIDFormat->g;
    x->NameIDFormat = y;
    y = nxt;
  }
}

/* FUNC(zxmd_md_IDPSSODescriptor_PUT_NameIDFormat) */

void zxmd_md_IDPSSODescriptor_PUT_NameIDFormat(struct zxmd_md_IDPSSODescriptor_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->NameIDFormat;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->NameIDFormat = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zxmd_md_IDPSSODescriptor_ADD_NameIDFormat) */

void zxmd_md_IDPSSODescriptor_ADD_NameIDFormat(struct zxmd_md_IDPSSODescriptor_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->NameIDFormat->g;
    x->NameIDFormat = z;
    return;
  case -1:
    y = x->NameIDFormat;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->NameIDFormat; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zxmd_md_IDPSSODescriptor_DEL_NameIDFormat) */

void zxmd_md_IDPSSODescriptor_DEL_NameIDFormat(struct zxmd_md_IDPSSODescriptor_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->NameIDFormat = (struct zx_elem_s*)x->NameIDFormat->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->NameIDFormat;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->NameIDFormat; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}



/* FUNC(zxmd_md_IDPSSODescriptor_NUM_SingleSignOnService) */

int zxmd_md_IDPSSODescriptor_NUM_SingleSignOnService(struct zxmd_md_IDPSSODescriptor_s* x)
{
  struct zxmd_md_SingleSignOnService_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->SingleSignOnService; y; ++n, y = (struct zxmd_md_SingleSignOnService_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zxmd_md_IDPSSODescriptor_GET_SingleSignOnService) */

struct zxmd_md_SingleSignOnService_s* zxmd_md_IDPSSODescriptor_GET_SingleSignOnService(struct zxmd_md_IDPSSODescriptor_s* x, int n)
{
  struct zxmd_md_SingleSignOnService_s* y;
  if (!x) return 0;
  for (y = x->SingleSignOnService; n>=0 && y; --n, y = (struct zxmd_md_SingleSignOnService_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zxmd_md_IDPSSODescriptor_POP_SingleSignOnService) */

struct zxmd_md_SingleSignOnService_s* zxmd_md_IDPSSODescriptor_POP_SingleSignOnService(struct zxmd_md_IDPSSODescriptor_s* x)
{
  struct zxmd_md_SingleSignOnService_s* y;
  if (!x) return 0;
  y = x->SingleSignOnService;
  if (y)
    x->SingleSignOnService = (struct zxmd_md_SingleSignOnService_s*)y->gg.g.n;
  return y;
}

/* FUNC(zxmd_md_IDPSSODescriptor_PUSH_SingleSignOnService) */

void zxmd_md_IDPSSODescriptor_PUSH_SingleSignOnService(struct zxmd_md_IDPSSODescriptor_s* x, struct zxmd_md_SingleSignOnService_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->SingleSignOnService->gg.g;
  x->SingleSignOnService = z;
}

/* FUNC(zxmd_md_IDPSSODescriptor_REV_SingleSignOnService) */

void zxmd_md_IDPSSODescriptor_REV_SingleSignOnService(struct zxmd_md_IDPSSODescriptor_s* x)
{
  struct zxmd_md_SingleSignOnService_s* nxt;
  struct zxmd_md_SingleSignOnService_s* y;
  if (!x) return;
  y = x->SingleSignOnService;
  if (!y) return;
  x->SingleSignOnService = 0;
  while (y) {
    nxt = (struct zxmd_md_SingleSignOnService_s*)y->gg.g.n;
    y->gg.g.n = &x->SingleSignOnService->gg.g;
    x->SingleSignOnService = y;
    y = nxt;
  }
}

/* FUNC(zxmd_md_IDPSSODescriptor_PUT_SingleSignOnService) */

void zxmd_md_IDPSSODescriptor_PUT_SingleSignOnService(struct zxmd_md_IDPSSODescriptor_s* x, int n, struct zxmd_md_SingleSignOnService_s* z)
{
  struct zxmd_md_SingleSignOnService_s* y;
  if (!x || !z) return;
  y = x->SingleSignOnService;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->SingleSignOnService = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zxmd_md_SingleSignOnService_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zxmd_md_IDPSSODescriptor_ADD_SingleSignOnService) */

void zxmd_md_IDPSSODescriptor_ADD_SingleSignOnService(struct zxmd_md_IDPSSODescriptor_s* x, int n, struct zxmd_md_SingleSignOnService_s* z)
{
  struct zxmd_md_SingleSignOnService_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->SingleSignOnService->gg.g;
    x->SingleSignOnService = z;
    return;
  case -1:
    y = x->SingleSignOnService;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zxmd_md_SingleSignOnService_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->SingleSignOnService; n > 1 && y; --n, y = (struct zxmd_md_SingleSignOnService_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zxmd_md_IDPSSODescriptor_DEL_SingleSignOnService) */

void zxmd_md_IDPSSODescriptor_DEL_SingleSignOnService(struct zxmd_md_IDPSSODescriptor_s* x, int n)
{
  struct zxmd_md_SingleSignOnService_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->SingleSignOnService = (struct zxmd_md_SingleSignOnService_s*)x->SingleSignOnService->gg.g.n;
    return;
  case -1:
    y = (struct zxmd_md_SingleSignOnService_s*)x->SingleSignOnService;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zxmd_md_SingleSignOnService_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->SingleSignOnService; n > 1 && y->gg.g.n; --n, y = (struct zxmd_md_SingleSignOnService_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zxmd_md_IDPSSODescriptor_NUM_NameIDMappingService) */

int zxmd_md_IDPSSODescriptor_NUM_NameIDMappingService(struct zxmd_md_IDPSSODescriptor_s* x)
{
  struct zxmd_md_NameIDMappingService_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->NameIDMappingService; y; ++n, y = (struct zxmd_md_NameIDMappingService_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zxmd_md_IDPSSODescriptor_GET_NameIDMappingService) */

struct zxmd_md_NameIDMappingService_s* zxmd_md_IDPSSODescriptor_GET_NameIDMappingService(struct zxmd_md_IDPSSODescriptor_s* x, int n)
{
  struct zxmd_md_NameIDMappingService_s* y;
  if (!x) return 0;
  for (y = x->NameIDMappingService; n>=0 && y; --n, y = (struct zxmd_md_NameIDMappingService_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zxmd_md_IDPSSODescriptor_POP_NameIDMappingService) */

struct zxmd_md_NameIDMappingService_s* zxmd_md_IDPSSODescriptor_POP_NameIDMappingService(struct zxmd_md_IDPSSODescriptor_s* x)
{
  struct zxmd_md_NameIDMappingService_s* y;
  if (!x) return 0;
  y = x->NameIDMappingService;
  if (y)
    x->NameIDMappingService = (struct zxmd_md_NameIDMappingService_s*)y->gg.g.n;
  return y;
}

/* FUNC(zxmd_md_IDPSSODescriptor_PUSH_NameIDMappingService) */

void zxmd_md_IDPSSODescriptor_PUSH_NameIDMappingService(struct zxmd_md_IDPSSODescriptor_s* x, struct zxmd_md_NameIDMappingService_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->NameIDMappingService->gg.g;
  x->NameIDMappingService = z;
}

/* FUNC(zxmd_md_IDPSSODescriptor_REV_NameIDMappingService) */

void zxmd_md_IDPSSODescriptor_REV_NameIDMappingService(struct zxmd_md_IDPSSODescriptor_s* x)
{
  struct zxmd_md_NameIDMappingService_s* nxt;
  struct zxmd_md_NameIDMappingService_s* y;
  if (!x) return;
  y = x->NameIDMappingService;
  if (!y) return;
  x->NameIDMappingService = 0;
  while (y) {
    nxt = (struct zxmd_md_NameIDMappingService_s*)y->gg.g.n;
    y->gg.g.n = &x->NameIDMappingService->gg.g;
    x->NameIDMappingService = y;
    y = nxt;
  }
}

/* FUNC(zxmd_md_IDPSSODescriptor_PUT_NameIDMappingService) */

void zxmd_md_IDPSSODescriptor_PUT_NameIDMappingService(struct zxmd_md_IDPSSODescriptor_s* x, int n, struct zxmd_md_NameIDMappingService_s* z)
{
  struct zxmd_md_NameIDMappingService_s* y;
  if (!x || !z) return;
  y = x->NameIDMappingService;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->NameIDMappingService = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zxmd_md_NameIDMappingService_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zxmd_md_IDPSSODescriptor_ADD_NameIDMappingService) */

void zxmd_md_IDPSSODescriptor_ADD_NameIDMappingService(struct zxmd_md_IDPSSODescriptor_s* x, int n, struct zxmd_md_NameIDMappingService_s* z)
{
  struct zxmd_md_NameIDMappingService_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->NameIDMappingService->gg.g;
    x->NameIDMappingService = z;
    return;
  case -1:
    y = x->NameIDMappingService;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zxmd_md_NameIDMappingService_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->NameIDMappingService; n > 1 && y; --n, y = (struct zxmd_md_NameIDMappingService_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zxmd_md_IDPSSODescriptor_DEL_NameIDMappingService) */

void zxmd_md_IDPSSODescriptor_DEL_NameIDMappingService(struct zxmd_md_IDPSSODescriptor_s* x, int n)
{
  struct zxmd_md_NameIDMappingService_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->NameIDMappingService = (struct zxmd_md_NameIDMappingService_s*)x->NameIDMappingService->gg.g.n;
    return;
  case -1:
    y = (struct zxmd_md_NameIDMappingService_s*)x->NameIDMappingService;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zxmd_md_NameIDMappingService_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->NameIDMappingService; n > 1 && y->gg.g.n; --n, y = (struct zxmd_md_NameIDMappingService_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zxmd_md_IDPSSODescriptor_NUM_AssertionIDRequestService) */

int zxmd_md_IDPSSODescriptor_NUM_AssertionIDRequestService(struct zxmd_md_IDPSSODescriptor_s* x)
{
  struct zxmd_md_AssertionIDRequestService_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->AssertionIDRequestService; y; ++n, y = (struct zxmd_md_AssertionIDRequestService_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zxmd_md_IDPSSODescriptor_GET_AssertionIDRequestService) */

struct zxmd_md_AssertionIDRequestService_s* zxmd_md_IDPSSODescriptor_GET_AssertionIDRequestService(struct zxmd_md_IDPSSODescriptor_s* x, int n)
{
  struct zxmd_md_AssertionIDRequestService_s* y;
  if (!x) return 0;
  for (y = x->AssertionIDRequestService; n>=0 && y; --n, y = (struct zxmd_md_AssertionIDRequestService_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zxmd_md_IDPSSODescriptor_POP_AssertionIDRequestService) */

struct zxmd_md_AssertionIDRequestService_s* zxmd_md_IDPSSODescriptor_POP_AssertionIDRequestService(struct zxmd_md_IDPSSODescriptor_s* x)
{
  struct zxmd_md_AssertionIDRequestService_s* y;
  if (!x) return 0;
  y = x->AssertionIDRequestService;
  if (y)
    x->AssertionIDRequestService = (struct zxmd_md_AssertionIDRequestService_s*)y->gg.g.n;
  return y;
}

/* FUNC(zxmd_md_IDPSSODescriptor_PUSH_AssertionIDRequestService) */

void zxmd_md_IDPSSODescriptor_PUSH_AssertionIDRequestService(struct zxmd_md_IDPSSODescriptor_s* x, struct zxmd_md_AssertionIDRequestService_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->AssertionIDRequestService->gg.g;
  x->AssertionIDRequestService = z;
}

/* FUNC(zxmd_md_IDPSSODescriptor_REV_AssertionIDRequestService) */

void zxmd_md_IDPSSODescriptor_REV_AssertionIDRequestService(struct zxmd_md_IDPSSODescriptor_s* x)
{
  struct zxmd_md_AssertionIDRequestService_s* nxt;
  struct zxmd_md_AssertionIDRequestService_s* y;
  if (!x) return;
  y = x->AssertionIDRequestService;
  if (!y) return;
  x->AssertionIDRequestService = 0;
  while (y) {
    nxt = (struct zxmd_md_AssertionIDRequestService_s*)y->gg.g.n;
    y->gg.g.n = &x->AssertionIDRequestService->gg.g;
    x->AssertionIDRequestService = y;
    y = nxt;
  }
}

/* FUNC(zxmd_md_IDPSSODescriptor_PUT_AssertionIDRequestService) */

void zxmd_md_IDPSSODescriptor_PUT_AssertionIDRequestService(struct zxmd_md_IDPSSODescriptor_s* x, int n, struct zxmd_md_AssertionIDRequestService_s* z)
{
  struct zxmd_md_AssertionIDRequestService_s* y;
  if (!x || !z) return;
  y = x->AssertionIDRequestService;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->AssertionIDRequestService = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zxmd_md_AssertionIDRequestService_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zxmd_md_IDPSSODescriptor_ADD_AssertionIDRequestService) */

void zxmd_md_IDPSSODescriptor_ADD_AssertionIDRequestService(struct zxmd_md_IDPSSODescriptor_s* x, int n, struct zxmd_md_AssertionIDRequestService_s* z)
{
  struct zxmd_md_AssertionIDRequestService_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->AssertionIDRequestService->gg.g;
    x->AssertionIDRequestService = z;
    return;
  case -1:
    y = x->AssertionIDRequestService;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zxmd_md_AssertionIDRequestService_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->AssertionIDRequestService; n > 1 && y; --n, y = (struct zxmd_md_AssertionIDRequestService_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zxmd_md_IDPSSODescriptor_DEL_AssertionIDRequestService) */

void zxmd_md_IDPSSODescriptor_DEL_AssertionIDRequestService(struct zxmd_md_IDPSSODescriptor_s* x, int n)
{
  struct zxmd_md_AssertionIDRequestService_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->AssertionIDRequestService = (struct zxmd_md_AssertionIDRequestService_s*)x->AssertionIDRequestService->gg.g.n;
    return;
  case -1:
    y = (struct zxmd_md_AssertionIDRequestService_s*)x->AssertionIDRequestService;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zxmd_md_AssertionIDRequestService_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->AssertionIDRequestService; n > 1 && y->gg.g.n; --n, y = (struct zxmd_md_AssertionIDRequestService_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zxmd_md_IDPSSODescriptor_NUM_AttributeProfile) */

int zxmd_md_IDPSSODescriptor_NUM_AttributeProfile(struct zxmd_md_IDPSSODescriptor_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->AttributeProfile; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zxmd_md_IDPSSODescriptor_GET_AttributeProfile) */

struct zx_elem_s* zxmd_md_IDPSSODescriptor_GET_AttributeProfile(struct zxmd_md_IDPSSODescriptor_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->AttributeProfile; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zxmd_md_IDPSSODescriptor_POP_AttributeProfile) */

struct zx_elem_s* zxmd_md_IDPSSODescriptor_POP_AttributeProfile(struct zxmd_md_IDPSSODescriptor_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->AttributeProfile;
  if (y)
    x->AttributeProfile = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zxmd_md_IDPSSODescriptor_PUSH_AttributeProfile) */

void zxmd_md_IDPSSODescriptor_PUSH_AttributeProfile(struct zxmd_md_IDPSSODescriptor_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->AttributeProfile->g;
  x->AttributeProfile = z;
}

/* FUNC(zxmd_md_IDPSSODescriptor_REV_AttributeProfile) */

void zxmd_md_IDPSSODescriptor_REV_AttributeProfile(struct zxmd_md_IDPSSODescriptor_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->AttributeProfile;
  if (!y) return;
  x->AttributeProfile = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->AttributeProfile->g;
    x->AttributeProfile = y;
    y = nxt;
  }
}

/* FUNC(zxmd_md_IDPSSODescriptor_PUT_AttributeProfile) */

void zxmd_md_IDPSSODescriptor_PUT_AttributeProfile(struct zxmd_md_IDPSSODescriptor_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->AttributeProfile;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->AttributeProfile = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zxmd_md_IDPSSODescriptor_ADD_AttributeProfile) */

void zxmd_md_IDPSSODescriptor_ADD_AttributeProfile(struct zxmd_md_IDPSSODescriptor_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->AttributeProfile->g;
    x->AttributeProfile = z;
    return;
  case -1:
    y = x->AttributeProfile;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->AttributeProfile; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zxmd_md_IDPSSODescriptor_DEL_AttributeProfile) */

void zxmd_md_IDPSSODescriptor_DEL_AttributeProfile(struct zxmd_md_IDPSSODescriptor_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->AttributeProfile = (struct zx_elem_s*)x->AttributeProfile->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->AttributeProfile;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->AttributeProfile; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}



/* FUNC(zxmd_md_IDPSSODescriptor_NUM_Attribute) */

int zxmd_md_IDPSSODescriptor_NUM_Attribute(struct zxmd_md_IDPSSODescriptor_s* x)
{
  struct zxmd_sa_Attribute_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Attribute; y; ++n, y = (struct zxmd_sa_Attribute_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zxmd_md_IDPSSODescriptor_GET_Attribute) */

struct zxmd_sa_Attribute_s* zxmd_md_IDPSSODescriptor_GET_Attribute(struct zxmd_md_IDPSSODescriptor_s* x, int n)
{
  struct zxmd_sa_Attribute_s* y;
  if (!x) return 0;
  for (y = x->Attribute; n>=0 && y; --n, y = (struct zxmd_sa_Attribute_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zxmd_md_IDPSSODescriptor_POP_Attribute) */

struct zxmd_sa_Attribute_s* zxmd_md_IDPSSODescriptor_POP_Attribute(struct zxmd_md_IDPSSODescriptor_s* x)
{
  struct zxmd_sa_Attribute_s* y;
  if (!x) return 0;
  y = x->Attribute;
  if (y)
    x->Attribute = (struct zxmd_sa_Attribute_s*)y->gg.g.n;
  return y;
}

/* FUNC(zxmd_md_IDPSSODescriptor_PUSH_Attribute) */

void zxmd_md_IDPSSODescriptor_PUSH_Attribute(struct zxmd_md_IDPSSODescriptor_s* x, struct zxmd_sa_Attribute_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Attribute->gg.g;
  x->Attribute = z;
}

/* FUNC(zxmd_md_IDPSSODescriptor_REV_Attribute) */

void zxmd_md_IDPSSODescriptor_REV_Attribute(struct zxmd_md_IDPSSODescriptor_s* x)
{
  struct zxmd_sa_Attribute_s* nxt;
  struct zxmd_sa_Attribute_s* y;
  if (!x) return;
  y = x->Attribute;
  if (!y) return;
  x->Attribute = 0;
  while (y) {
    nxt = (struct zxmd_sa_Attribute_s*)y->gg.g.n;
    y->gg.g.n = &x->Attribute->gg.g;
    x->Attribute = y;
    y = nxt;
  }
}

/* FUNC(zxmd_md_IDPSSODescriptor_PUT_Attribute) */

void zxmd_md_IDPSSODescriptor_PUT_Attribute(struct zxmd_md_IDPSSODescriptor_s* x, int n, struct zxmd_sa_Attribute_s* z)
{
  struct zxmd_sa_Attribute_s* y;
  if (!x || !z) return;
  y = x->Attribute;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Attribute = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zxmd_sa_Attribute_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zxmd_md_IDPSSODescriptor_ADD_Attribute) */

void zxmd_md_IDPSSODescriptor_ADD_Attribute(struct zxmd_md_IDPSSODescriptor_s* x, int n, struct zxmd_sa_Attribute_s* z)
{
  struct zxmd_sa_Attribute_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->Attribute->gg.g;
    x->Attribute = z;
    return;
  case -1:
    y = x->Attribute;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zxmd_sa_Attribute_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Attribute; n > 1 && y; --n, y = (struct zxmd_sa_Attribute_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zxmd_md_IDPSSODescriptor_DEL_Attribute) */

void zxmd_md_IDPSSODescriptor_DEL_Attribute(struct zxmd_md_IDPSSODescriptor_s* x, int n)
{
  struct zxmd_sa_Attribute_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Attribute = (struct zxmd_sa_Attribute_s*)x->Attribute->gg.g.n;
    return;
  case -1:
    y = (struct zxmd_sa_Attribute_s*)x->Attribute;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zxmd_sa_Attribute_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Attribute; n > 1 && y->gg.g.n; --n, y = (struct zxmd_sa_Attribute_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

/* FUNC(zxmd_md_IDPSSODescriptor_GET_WantAuthnRequestsSigned) */
struct zx_str_s* zxmd_md_IDPSSODescriptor_GET_WantAuthnRequestsSigned(struct zxmd_md_IDPSSODescriptor_s* x) { return x->WantAuthnRequestsSigned; }
/* FUNC(zxmd_md_IDPSSODescriptor_PUT_WantAuthnRequestsSigned) */
void zxmd_md_IDPSSODescriptor_PUT_WantAuthnRequestsSigned(struct zxmd_md_IDPSSODescriptor_s* x, struct zx_str_s* y) { x->WantAuthnRequestsSigned = y; }







/* FUNC(zxmd_md_KeyDescriptor_NUM_KeyInfo) */

int zxmd_md_KeyDescriptor_NUM_KeyInfo(struct zxmd_md_KeyDescriptor_s* x)
{
  struct zxmd_ds_KeyInfo_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->KeyInfo; y; ++n, y = (struct zxmd_ds_KeyInfo_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zxmd_md_KeyDescriptor_GET_KeyInfo) */

struct zxmd_ds_KeyInfo_s* zxmd_md_KeyDescriptor_GET_KeyInfo(struct zxmd_md_KeyDescriptor_s* x, int n)
{
  struct zxmd_ds_KeyInfo_s* y;
  if (!x) return 0;
  for (y = x->KeyInfo; n>=0 && y; --n, y = (struct zxmd_ds_KeyInfo_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zxmd_md_KeyDescriptor_POP_KeyInfo) */

struct zxmd_ds_KeyInfo_s* zxmd_md_KeyDescriptor_POP_KeyInfo(struct zxmd_md_KeyDescriptor_s* x)
{
  struct zxmd_ds_KeyInfo_s* y;
  if (!x) return 0;
  y = x->KeyInfo;
  if (y)
    x->KeyInfo = (struct zxmd_ds_KeyInfo_s*)y->gg.g.n;
  return y;
}

/* FUNC(zxmd_md_KeyDescriptor_PUSH_KeyInfo) */

void zxmd_md_KeyDescriptor_PUSH_KeyInfo(struct zxmd_md_KeyDescriptor_s* x, struct zxmd_ds_KeyInfo_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->KeyInfo->gg.g;
  x->KeyInfo = z;
}

/* FUNC(zxmd_md_KeyDescriptor_REV_KeyInfo) */

void zxmd_md_KeyDescriptor_REV_KeyInfo(struct zxmd_md_KeyDescriptor_s* x)
{
  struct zxmd_ds_KeyInfo_s* nxt;
  struct zxmd_ds_KeyInfo_s* y;
  if (!x) return;
  y = x->KeyInfo;
  if (!y) return;
  x->KeyInfo = 0;
  while (y) {
    nxt = (struct zxmd_ds_KeyInfo_s*)y->gg.g.n;
    y->gg.g.n = &x->KeyInfo->gg.g;
    x->KeyInfo = y;
    y = nxt;
  }
}

/* FUNC(zxmd_md_KeyDescriptor_PUT_KeyInfo) */

void zxmd_md_KeyDescriptor_PUT_KeyInfo(struct zxmd_md_KeyDescriptor_s* x, int n, struct zxmd_ds_KeyInfo_s* z)
{
  struct zxmd_ds_KeyInfo_s* y;
  if (!x || !z) return;
  y = x->KeyInfo;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->KeyInfo = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zxmd_ds_KeyInfo_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zxmd_md_KeyDescriptor_ADD_KeyInfo) */

void zxmd_md_KeyDescriptor_ADD_KeyInfo(struct zxmd_md_KeyDescriptor_s* x, int n, struct zxmd_ds_KeyInfo_s* z)
{
  struct zxmd_ds_KeyInfo_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->KeyInfo->gg.g;
    x->KeyInfo = z;
    return;
  case -1:
    y = x->KeyInfo;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zxmd_ds_KeyInfo_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->KeyInfo; n > 1 && y; --n, y = (struct zxmd_ds_KeyInfo_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zxmd_md_KeyDescriptor_DEL_KeyInfo) */

void zxmd_md_KeyDescriptor_DEL_KeyInfo(struct zxmd_md_KeyDescriptor_s* x, int n)
{
  struct zxmd_ds_KeyInfo_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->KeyInfo = (struct zxmd_ds_KeyInfo_s*)x->KeyInfo->gg.g.n;
    return;
  case -1:
    y = (struct zxmd_ds_KeyInfo_s*)x->KeyInfo;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zxmd_ds_KeyInfo_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->KeyInfo; n > 1 && y->gg.g.n; --n, y = (struct zxmd_ds_KeyInfo_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zxmd_md_KeyDescriptor_NUM_EncryptionMethod) */

int zxmd_md_KeyDescriptor_NUM_EncryptionMethod(struct zxmd_md_KeyDescriptor_s* x)
{
  struct zxmd_md_EncryptionMethod_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->EncryptionMethod; y; ++n, y = (struct zxmd_md_EncryptionMethod_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zxmd_md_KeyDescriptor_GET_EncryptionMethod) */

struct zxmd_md_EncryptionMethod_s* zxmd_md_KeyDescriptor_GET_EncryptionMethod(struct zxmd_md_KeyDescriptor_s* x, int n)
{
  struct zxmd_md_EncryptionMethod_s* y;
  if (!x) return 0;
  for (y = x->EncryptionMethod; n>=0 && y; --n, y = (struct zxmd_md_EncryptionMethod_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zxmd_md_KeyDescriptor_POP_EncryptionMethod) */

struct zxmd_md_EncryptionMethod_s* zxmd_md_KeyDescriptor_POP_EncryptionMethod(struct zxmd_md_KeyDescriptor_s* x)
{
  struct zxmd_md_EncryptionMethod_s* y;
  if (!x) return 0;
  y = x->EncryptionMethod;
  if (y)
    x->EncryptionMethod = (struct zxmd_md_EncryptionMethod_s*)y->gg.g.n;
  return y;
}

/* FUNC(zxmd_md_KeyDescriptor_PUSH_EncryptionMethod) */

void zxmd_md_KeyDescriptor_PUSH_EncryptionMethod(struct zxmd_md_KeyDescriptor_s* x, struct zxmd_md_EncryptionMethod_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->EncryptionMethod->gg.g;
  x->EncryptionMethod = z;
}

/* FUNC(zxmd_md_KeyDescriptor_REV_EncryptionMethod) */

void zxmd_md_KeyDescriptor_REV_EncryptionMethod(struct zxmd_md_KeyDescriptor_s* x)
{
  struct zxmd_md_EncryptionMethod_s* nxt;
  struct zxmd_md_EncryptionMethod_s* y;
  if (!x) return;
  y = x->EncryptionMethod;
  if (!y) return;
  x->EncryptionMethod = 0;
  while (y) {
    nxt = (struct zxmd_md_EncryptionMethod_s*)y->gg.g.n;
    y->gg.g.n = &x->EncryptionMethod->gg.g;
    x->EncryptionMethod = y;
    y = nxt;
  }
}

/* FUNC(zxmd_md_KeyDescriptor_PUT_EncryptionMethod) */

void zxmd_md_KeyDescriptor_PUT_EncryptionMethod(struct zxmd_md_KeyDescriptor_s* x, int n, struct zxmd_md_EncryptionMethod_s* z)
{
  struct zxmd_md_EncryptionMethod_s* y;
  if (!x || !z) return;
  y = x->EncryptionMethod;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->EncryptionMethod = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zxmd_md_EncryptionMethod_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zxmd_md_KeyDescriptor_ADD_EncryptionMethod) */

void zxmd_md_KeyDescriptor_ADD_EncryptionMethod(struct zxmd_md_KeyDescriptor_s* x, int n, struct zxmd_md_EncryptionMethod_s* z)
{
  struct zxmd_md_EncryptionMethod_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->EncryptionMethod->gg.g;
    x->EncryptionMethod = z;
    return;
  case -1:
    y = x->EncryptionMethod;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zxmd_md_EncryptionMethod_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->EncryptionMethod; n > 1 && y; --n, y = (struct zxmd_md_EncryptionMethod_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zxmd_md_KeyDescriptor_DEL_EncryptionMethod) */

void zxmd_md_KeyDescriptor_DEL_EncryptionMethod(struct zxmd_md_KeyDescriptor_s* x, int n)
{
  struct zxmd_md_EncryptionMethod_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->EncryptionMethod = (struct zxmd_md_EncryptionMethod_s*)x->EncryptionMethod->gg.g.n;
    return;
  case -1:
    y = (struct zxmd_md_EncryptionMethod_s*)x->EncryptionMethod;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zxmd_md_EncryptionMethod_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->EncryptionMethod; n > 1 && y->gg.g.n; --n, y = (struct zxmd_md_EncryptionMethod_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

/* FUNC(zxmd_md_KeyDescriptor_GET_use) */
struct zx_str_s* zxmd_md_KeyDescriptor_GET_use(struct zxmd_md_KeyDescriptor_s* x) { return x->use; }
/* FUNC(zxmd_md_KeyDescriptor_PUT_use) */
void zxmd_md_KeyDescriptor_PUT_use(struct zxmd_md_KeyDescriptor_s* x, struct zx_str_s* y) { x->use = y; }





/* FUNC(zxmd_md_ManageNameIDService_GET_Binding) */
struct zx_str_s* zxmd_md_ManageNameIDService_GET_Binding(struct zxmd_md_ManageNameIDService_s* x) { return x->Binding; }
/* FUNC(zxmd_md_ManageNameIDService_PUT_Binding) */
void zxmd_md_ManageNameIDService_PUT_Binding(struct zxmd_md_ManageNameIDService_s* x, struct zx_str_s* y) { x->Binding = y; }
/* FUNC(zxmd_md_ManageNameIDService_GET_Location) */
struct zx_str_s* zxmd_md_ManageNameIDService_GET_Location(struct zxmd_md_ManageNameIDService_s* x) { return x->Location; }
/* FUNC(zxmd_md_ManageNameIDService_PUT_Location) */
void zxmd_md_ManageNameIDService_PUT_Location(struct zxmd_md_ManageNameIDService_s* x, struct zx_str_s* y) { x->Location = y; }
/* FUNC(zxmd_md_ManageNameIDService_GET_ResponseLocation) */
struct zx_str_s* zxmd_md_ManageNameIDService_GET_ResponseLocation(struct zxmd_md_ManageNameIDService_s* x) { return x->ResponseLocation; }
/* FUNC(zxmd_md_ManageNameIDService_PUT_ResponseLocation) */
void zxmd_md_ManageNameIDService_PUT_ResponseLocation(struct zxmd_md_ManageNameIDService_s* x, struct zx_str_s* y) { x->ResponseLocation = y; }





/* FUNC(zxmd_md_NameIDMappingService_GET_Binding) */
struct zx_str_s* zxmd_md_NameIDMappingService_GET_Binding(struct zxmd_md_NameIDMappingService_s* x) { return x->Binding; }
/* FUNC(zxmd_md_NameIDMappingService_PUT_Binding) */
void zxmd_md_NameIDMappingService_PUT_Binding(struct zxmd_md_NameIDMappingService_s* x, struct zx_str_s* y) { x->Binding = y; }
/* FUNC(zxmd_md_NameIDMappingService_GET_Location) */
struct zx_str_s* zxmd_md_NameIDMappingService_GET_Location(struct zxmd_md_NameIDMappingService_s* x) { return x->Location; }
/* FUNC(zxmd_md_NameIDMappingService_PUT_Location) */
void zxmd_md_NameIDMappingService_PUT_Location(struct zxmd_md_NameIDMappingService_s* x, struct zx_str_s* y) { x->Location = y; }
/* FUNC(zxmd_md_NameIDMappingService_GET_ResponseLocation) */
struct zx_str_s* zxmd_md_NameIDMappingService_GET_ResponseLocation(struct zxmd_md_NameIDMappingService_s* x) { return x->ResponseLocation; }
/* FUNC(zxmd_md_NameIDMappingService_PUT_ResponseLocation) */
void zxmd_md_NameIDMappingService_PUT_ResponseLocation(struct zxmd_md_NameIDMappingService_s* x, struct zx_str_s* y) { x->ResponseLocation = y; }







/* FUNC(zxmd_md_Organization_NUM_Extensions) */

int zxmd_md_Organization_NUM_Extensions(struct zxmd_md_Organization_s* x)
{
  struct zxmd_md_Extensions_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Extensions; y; ++n, y = (struct zxmd_md_Extensions_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zxmd_md_Organization_GET_Extensions) */

struct zxmd_md_Extensions_s* zxmd_md_Organization_GET_Extensions(struct zxmd_md_Organization_s* x, int n)
{
  struct zxmd_md_Extensions_s* y;
  if (!x) return 0;
  for (y = x->Extensions; n>=0 && y; --n, y = (struct zxmd_md_Extensions_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zxmd_md_Organization_POP_Extensions) */

struct zxmd_md_Extensions_s* zxmd_md_Organization_POP_Extensions(struct zxmd_md_Organization_s* x)
{
  struct zxmd_md_Extensions_s* y;
  if (!x) return 0;
  y = x->Extensions;
  if (y)
    x->Extensions = (struct zxmd_md_Extensions_s*)y->gg.g.n;
  return y;
}

/* FUNC(zxmd_md_Organization_PUSH_Extensions) */

void zxmd_md_Organization_PUSH_Extensions(struct zxmd_md_Organization_s* x, struct zxmd_md_Extensions_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Extensions->gg.g;
  x->Extensions = z;
}

/* FUNC(zxmd_md_Organization_REV_Extensions) */

void zxmd_md_Organization_REV_Extensions(struct zxmd_md_Organization_s* x)
{
  struct zxmd_md_Extensions_s* nxt;
  struct zxmd_md_Extensions_s* y;
  if (!x) return;
  y = x->Extensions;
  if (!y) return;
  x->Extensions = 0;
  while (y) {
    nxt = (struct zxmd_md_Extensions_s*)y->gg.g.n;
    y->gg.g.n = &x->Extensions->gg.g;
    x->Extensions = y;
    y = nxt;
  }
}

/* FUNC(zxmd_md_Organization_PUT_Extensions) */

void zxmd_md_Organization_PUT_Extensions(struct zxmd_md_Organization_s* x, int n, struct zxmd_md_Extensions_s* z)
{
  struct zxmd_md_Extensions_s* y;
  if (!x || !z) return;
  y = x->Extensions;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Extensions = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zxmd_md_Extensions_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zxmd_md_Organization_ADD_Extensions) */

void zxmd_md_Organization_ADD_Extensions(struct zxmd_md_Organization_s* x, int n, struct zxmd_md_Extensions_s* z)
{
  struct zxmd_md_Extensions_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->Extensions->gg.g;
    x->Extensions = z;
    return;
  case -1:
    y = x->Extensions;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zxmd_md_Extensions_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Extensions; n > 1 && y; --n, y = (struct zxmd_md_Extensions_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zxmd_md_Organization_DEL_Extensions) */

void zxmd_md_Organization_DEL_Extensions(struct zxmd_md_Organization_s* x, int n)
{
  struct zxmd_md_Extensions_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Extensions = (struct zxmd_md_Extensions_s*)x->Extensions->gg.g.n;
    return;
  case -1:
    y = (struct zxmd_md_Extensions_s*)x->Extensions;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zxmd_md_Extensions_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Extensions; n > 1 && y->gg.g.n; --n, y = (struct zxmd_md_Extensions_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zxmd_md_Organization_NUM_OrganizationName) */

int zxmd_md_Organization_NUM_OrganizationName(struct zxmd_md_Organization_s* x)
{
  struct zxmd_md_OrganizationName_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->OrganizationName; y; ++n, y = (struct zxmd_md_OrganizationName_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zxmd_md_Organization_GET_OrganizationName) */

struct zxmd_md_OrganizationName_s* zxmd_md_Organization_GET_OrganizationName(struct zxmd_md_Organization_s* x, int n)
{
  struct zxmd_md_OrganizationName_s* y;
  if (!x) return 0;
  for (y = x->OrganizationName; n>=0 && y; --n, y = (struct zxmd_md_OrganizationName_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zxmd_md_Organization_POP_OrganizationName) */

struct zxmd_md_OrganizationName_s* zxmd_md_Organization_POP_OrganizationName(struct zxmd_md_Organization_s* x)
{
  struct zxmd_md_OrganizationName_s* y;
  if (!x) return 0;
  y = x->OrganizationName;
  if (y)
    x->OrganizationName = (struct zxmd_md_OrganizationName_s*)y->gg.g.n;
  return y;
}

/* FUNC(zxmd_md_Organization_PUSH_OrganizationName) */

void zxmd_md_Organization_PUSH_OrganizationName(struct zxmd_md_Organization_s* x, struct zxmd_md_OrganizationName_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->OrganizationName->gg.g;
  x->OrganizationName = z;
}

/* FUNC(zxmd_md_Organization_REV_OrganizationName) */

void zxmd_md_Organization_REV_OrganizationName(struct zxmd_md_Organization_s* x)
{
  struct zxmd_md_OrganizationName_s* nxt;
  struct zxmd_md_OrganizationName_s* y;
  if (!x) return;
  y = x->OrganizationName;
  if (!y) return;
  x->OrganizationName = 0;
  while (y) {
    nxt = (struct zxmd_md_OrganizationName_s*)y->gg.g.n;
    y->gg.g.n = &x->OrganizationName->gg.g;
    x->OrganizationName = y;
    y = nxt;
  }
}

/* FUNC(zxmd_md_Organization_PUT_OrganizationName) */

void zxmd_md_Organization_PUT_OrganizationName(struct zxmd_md_Organization_s* x, int n, struct zxmd_md_OrganizationName_s* z)
{
  struct zxmd_md_OrganizationName_s* y;
  if (!x || !z) return;
  y = x->OrganizationName;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->OrganizationName = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zxmd_md_OrganizationName_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zxmd_md_Organization_ADD_OrganizationName) */

void zxmd_md_Organization_ADD_OrganizationName(struct zxmd_md_Organization_s* x, int n, struct zxmd_md_OrganizationName_s* z)
{
  struct zxmd_md_OrganizationName_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->OrganizationName->gg.g;
    x->OrganizationName = z;
    return;
  case -1:
    y = x->OrganizationName;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zxmd_md_OrganizationName_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->OrganizationName; n > 1 && y; --n, y = (struct zxmd_md_OrganizationName_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zxmd_md_Organization_DEL_OrganizationName) */

void zxmd_md_Organization_DEL_OrganizationName(struct zxmd_md_Organization_s* x, int n)
{
  struct zxmd_md_OrganizationName_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->OrganizationName = (struct zxmd_md_OrganizationName_s*)x->OrganizationName->gg.g.n;
    return;
  case -1:
    y = (struct zxmd_md_OrganizationName_s*)x->OrganizationName;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zxmd_md_OrganizationName_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->OrganizationName; n > 1 && y->gg.g.n; --n, y = (struct zxmd_md_OrganizationName_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zxmd_md_Organization_NUM_OrganizationDisplayName) */

int zxmd_md_Organization_NUM_OrganizationDisplayName(struct zxmd_md_Organization_s* x)
{
  struct zxmd_md_OrganizationDisplayName_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->OrganizationDisplayName; y; ++n, y = (struct zxmd_md_OrganizationDisplayName_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zxmd_md_Organization_GET_OrganizationDisplayName) */

struct zxmd_md_OrganizationDisplayName_s* zxmd_md_Organization_GET_OrganizationDisplayName(struct zxmd_md_Organization_s* x, int n)
{
  struct zxmd_md_OrganizationDisplayName_s* y;
  if (!x) return 0;
  for (y = x->OrganizationDisplayName; n>=0 && y; --n, y = (struct zxmd_md_OrganizationDisplayName_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zxmd_md_Organization_POP_OrganizationDisplayName) */

struct zxmd_md_OrganizationDisplayName_s* zxmd_md_Organization_POP_OrganizationDisplayName(struct zxmd_md_Organization_s* x)
{
  struct zxmd_md_OrganizationDisplayName_s* y;
  if (!x) return 0;
  y = x->OrganizationDisplayName;
  if (y)
    x->OrganizationDisplayName = (struct zxmd_md_OrganizationDisplayName_s*)y->gg.g.n;
  return y;
}

/* FUNC(zxmd_md_Organization_PUSH_OrganizationDisplayName) */

void zxmd_md_Organization_PUSH_OrganizationDisplayName(struct zxmd_md_Organization_s* x, struct zxmd_md_OrganizationDisplayName_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->OrganizationDisplayName->gg.g;
  x->OrganizationDisplayName = z;
}

/* FUNC(zxmd_md_Organization_REV_OrganizationDisplayName) */

void zxmd_md_Organization_REV_OrganizationDisplayName(struct zxmd_md_Organization_s* x)
{
  struct zxmd_md_OrganizationDisplayName_s* nxt;
  struct zxmd_md_OrganizationDisplayName_s* y;
  if (!x) return;
  y = x->OrganizationDisplayName;
  if (!y) return;
  x->OrganizationDisplayName = 0;
  while (y) {
    nxt = (struct zxmd_md_OrganizationDisplayName_s*)y->gg.g.n;
    y->gg.g.n = &x->OrganizationDisplayName->gg.g;
    x->OrganizationDisplayName = y;
    y = nxt;
  }
}

/* FUNC(zxmd_md_Organization_PUT_OrganizationDisplayName) */

void zxmd_md_Organization_PUT_OrganizationDisplayName(struct zxmd_md_Organization_s* x, int n, struct zxmd_md_OrganizationDisplayName_s* z)
{
  struct zxmd_md_OrganizationDisplayName_s* y;
  if (!x || !z) return;
  y = x->OrganizationDisplayName;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->OrganizationDisplayName = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zxmd_md_OrganizationDisplayName_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zxmd_md_Organization_ADD_OrganizationDisplayName) */

void zxmd_md_Organization_ADD_OrganizationDisplayName(struct zxmd_md_Organization_s* x, int n, struct zxmd_md_OrganizationDisplayName_s* z)
{
  struct zxmd_md_OrganizationDisplayName_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->OrganizationDisplayName->gg.g;
    x->OrganizationDisplayName = z;
    return;
  case -1:
    y = x->OrganizationDisplayName;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zxmd_md_OrganizationDisplayName_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->OrganizationDisplayName; n > 1 && y; --n, y = (struct zxmd_md_OrganizationDisplayName_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zxmd_md_Organization_DEL_OrganizationDisplayName) */

void zxmd_md_Organization_DEL_OrganizationDisplayName(struct zxmd_md_Organization_s* x, int n)
{
  struct zxmd_md_OrganizationDisplayName_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->OrganizationDisplayName = (struct zxmd_md_OrganizationDisplayName_s*)x->OrganizationDisplayName->gg.g.n;
    return;
  case -1:
    y = (struct zxmd_md_OrganizationDisplayName_s*)x->OrganizationDisplayName;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zxmd_md_OrganizationDisplayName_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->OrganizationDisplayName; n > 1 && y->gg.g.n; --n, y = (struct zxmd_md_OrganizationDisplayName_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zxmd_md_Organization_NUM_OrganizationURL) */

int zxmd_md_Organization_NUM_OrganizationURL(struct zxmd_md_Organization_s* x)
{
  struct zxmd_md_OrganizationURL_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->OrganizationURL; y; ++n, y = (struct zxmd_md_OrganizationURL_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zxmd_md_Organization_GET_OrganizationURL) */

struct zxmd_md_OrganizationURL_s* zxmd_md_Organization_GET_OrganizationURL(struct zxmd_md_Organization_s* x, int n)
{
  struct zxmd_md_OrganizationURL_s* y;
  if (!x) return 0;
  for (y = x->OrganizationURL; n>=0 && y; --n, y = (struct zxmd_md_OrganizationURL_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zxmd_md_Organization_POP_OrganizationURL) */

struct zxmd_md_OrganizationURL_s* zxmd_md_Organization_POP_OrganizationURL(struct zxmd_md_Organization_s* x)
{
  struct zxmd_md_OrganizationURL_s* y;
  if (!x) return 0;
  y = x->OrganizationURL;
  if (y)
    x->OrganizationURL = (struct zxmd_md_OrganizationURL_s*)y->gg.g.n;
  return y;
}

/* FUNC(zxmd_md_Organization_PUSH_OrganizationURL) */

void zxmd_md_Organization_PUSH_OrganizationURL(struct zxmd_md_Organization_s* x, struct zxmd_md_OrganizationURL_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->OrganizationURL->gg.g;
  x->OrganizationURL = z;
}

/* FUNC(zxmd_md_Organization_REV_OrganizationURL) */

void zxmd_md_Organization_REV_OrganizationURL(struct zxmd_md_Organization_s* x)
{
  struct zxmd_md_OrganizationURL_s* nxt;
  struct zxmd_md_OrganizationURL_s* y;
  if (!x) return;
  y = x->OrganizationURL;
  if (!y) return;
  x->OrganizationURL = 0;
  while (y) {
    nxt = (struct zxmd_md_OrganizationURL_s*)y->gg.g.n;
    y->gg.g.n = &x->OrganizationURL->gg.g;
    x->OrganizationURL = y;
    y = nxt;
  }
}

/* FUNC(zxmd_md_Organization_PUT_OrganizationURL) */

void zxmd_md_Organization_PUT_OrganizationURL(struct zxmd_md_Organization_s* x, int n, struct zxmd_md_OrganizationURL_s* z)
{
  struct zxmd_md_OrganizationURL_s* y;
  if (!x || !z) return;
  y = x->OrganizationURL;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->OrganizationURL = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zxmd_md_OrganizationURL_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zxmd_md_Organization_ADD_OrganizationURL) */

void zxmd_md_Organization_ADD_OrganizationURL(struct zxmd_md_Organization_s* x, int n, struct zxmd_md_OrganizationURL_s* z)
{
  struct zxmd_md_OrganizationURL_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->OrganizationURL->gg.g;
    x->OrganizationURL = z;
    return;
  case -1:
    y = x->OrganizationURL;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zxmd_md_OrganizationURL_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->OrganizationURL; n > 1 && y; --n, y = (struct zxmd_md_OrganizationURL_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zxmd_md_Organization_DEL_OrganizationURL) */

void zxmd_md_Organization_DEL_OrganizationURL(struct zxmd_md_Organization_s* x, int n)
{
  struct zxmd_md_OrganizationURL_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->OrganizationURL = (struct zxmd_md_OrganizationURL_s*)x->OrganizationURL->gg.g.n;
    return;
  case -1:
    y = (struct zxmd_md_OrganizationURL_s*)x->OrganizationURL;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zxmd_md_OrganizationURL_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->OrganizationURL; n > 1 && y->gg.g.n; --n, y = (struct zxmd_md_OrganizationURL_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}






/* FUNC(zxmd_md_OrganizationDisplayName_GET_lang) */
struct zx_str_s* zxmd_md_OrganizationDisplayName_GET_lang(struct zxmd_md_OrganizationDisplayName_s* x) { return x->lang; }
/* FUNC(zxmd_md_OrganizationDisplayName_PUT_lang) */
void zxmd_md_OrganizationDisplayName_PUT_lang(struct zxmd_md_OrganizationDisplayName_s* x, struct zx_str_s* y) { x->lang = y; }





/* FUNC(zxmd_md_OrganizationName_GET_lang) */
struct zx_str_s* zxmd_md_OrganizationName_GET_lang(struct zxmd_md_OrganizationName_s* x) { return x->lang; }
/* FUNC(zxmd_md_OrganizationName_PUT_lang) */
void zxmd_md_OrganizationName_PUT_lang(struct zxmd_md_OrganizationName_s* x, struct zx_str_s* y) { x->lang = y; }





/* FUNC(zxmd_md_OrganizationURL_GET_lang) */
struct zx_str_s* zxmd_md_OrganizationURL_GET_lang(struct zxmd_md_OrganizationURL_s* x) { return x->lang; }
/* FUNC(zxmd_md_OrganizationURL_PUT_lang) */
void zxmd_md_OrganizationURL_PUT_lang(struct zxmd_md_OrganizationURL_s* x, struct zx_str_s* y) { x->lang = y; }







/* FUNC(zxmd_md_PDPDescriptor_NUM_Signature) */

int zxmd_md_PDPDescriptor_NUM_Signature(struct zxmd_md_PDPDescriptor_s* x)
{
  struct zxmd_ds_Signature_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Signature; y; ++n, y = (struct zxmd_ds_Signature_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zxmd_md_PDPDescriptor_GET_Signature) */

struct zxmd_ds_Signature_s* zxmd_md_PDPDescriptor_GET_Signature(struct zxmd_md_PDPDescriptor_s* x, int n)
{
  struct zxmd_ds_Signature_s* y;
  if (!x) return 0;
  for (y = x->Signature; n>=0 && y; --n, y = (struct zxmd_ds_Signature_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zxmd_md_PDPDescriptor_POP_Signature) */

struct zxmd_ds_Signature_s* zxmd_md_PDPDescriptor_POP_Signature(struct zxmd_md_PDPDescriptor_s* x)
{
  struct zxmd_ds_Signature_s* y;
  if (!x) return 0;
  y = x->Signature;
  if (y)
    x->Signature = (struct zxmd_ds_Signature_s*)y->gg.g.n;
  return y;
}

/* FUNC(zxmd_md_PDPDescriptor_PUSH_Signature) */

void zxmd_md_PDPDescriptor_PUSH_Signature(struct zxmd_md_PDPDescriptor_s* x, struct zxmd_ds_Signature_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Signature->gg.g;
  x->Signature = z;
}

/* FUNC(zxmd_md_PDPDescriptor_REV_Signature) */

void zxmd_md_PDPDescriptor_REV_Signature(struct zxmd_md_PDPDescriptor_s* x)
{
  struct zxmd_ds_Signature_s* nxt;
  struct zxmd_ds_Signature_s* y;
  if (!x) return;
  y = x->Signature;
  if (!y) return;
  x->Signature = 0;
  while (y) {
    nxt = (struct zxmd_ds_Signature_s*)y->gg.g.n;
    y->gg.g.n = &x->Signature->gg.g;
    x->Signature = y;
    y = nxt;
  }
}

/* FUNC(zxmd_md_PDPDescriptor_PUT_Signature) */

void zxmd_md_PDPDescriptor_PUT_Signature(struct zxmd_md_PDPDescriptor_s* x, int n, struct zxmd_ds_Signature_s* z)
{
  struct zxmd_ds_Signature_s* y;
  if (!x || !z) return;
  y = x->Signature;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Signature = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zxmd_ds_Signature_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zxmd_md_PDPDescriptor_ADD_Signature) */

void zxmd_md_PDPDescriptor_ADD_Signature(struct zxmd_md_PDPDescriptor_s* x, int n, struct zxmd_ds_Signature_s* z)
{
  struct zxmd_ds_Signature_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->Signature->gg.g;
    x->Signature = z;
    return;
  case -1:
    y = x->Signature;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zxmd_ds_Signature_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Signature; n > 1 && y; --n, y = (struct zxmd_ds_Signature_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zxmd_md_PDPDescriptor_DEL_Signature) */

void zxmd_md_PDPDescriptor_DEL_Signature(struct zxmd_md_PDPDescriptor_s* x, int n)
{
  struct zxmd_ds_Signature_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Signature = (struct zxmd_ds_Signature_s*)x->Signature->gg.g.n;
    return;
  case -1:
    y = (struct zxmd_ds_Signature_s*)x->Signature;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zxmd_ds_Signature_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Signature; n > 1 && y->gg.g.n; --n, y = (struct zxmd_ds_Signature_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zxmd_md_PDPDescriptor_NUM_Extensions) */

int zxmd_md_PDPDescriptor_NUM_Extensions(struct zxmd_md_PDPDescriptor_s* x)
{
  struct zxmd_md_Extensions_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Extensions; y; ++n, y = (struct zxmd_md_Extensions_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zxmd_md_PDPDescriptor_GET_Extensions) */

struct zxmd_md_Extensions_s* zxmd_md_PDPDescriptor_GET_Extensions(struct zxmd_md_PDPDescriptor_s* x, int n)
{
  struct zxmd_md_Extensions_s* y;
  if (!x) return 0;
  for (y = x->Extensions; n>=0 && y; --n, y = (struct zxmd_md_Extensions_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zxmd_md_PDPDescriptor_POP_Extensions) */

struct zxmd_md_Extensions_s* zxmd_md_PDPDescriptor_POP_Extensions(struct zxmd_md_PDPDescriptor_s* x)
{
  struct zxmd_md_Extensions_s* y;
  if (!x) return 0;
  y = x->Extensions;
  if (y)
    x->Extensions = (struct zxmd_md_Extensions_s*)y->gg.g.n;
  return y;
}

/* FUNC(zxmd_md_PDPDescriptor_PUSH_Extensions) */

void zxmd_md_PDPDescriptor_PUSH_Extensions(struct zxmd_md_PDPDescriptor_s* x, struct zxmd_md_Extensions_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Extensions->gg.g;
  x->Extensions = z;
}

/* FUNC(zxmd_md_PDPDescriptor_REV_Extensions) */

void zxmd_md_PDPDescriptor_REV_Extensions(struct zxmd_md_PDPDescriptor_s* x)
{
  struct zxmd_md_Extensions_s* nxt;
  struct zxmd_md_Extensions_s* y;
  if (!x) return;
  y = x->Extensions;
  if (!y) return;
  x->Extensions = 0;
  while (y) {
    nxt = (struct zxmd_md_Extensions_s*)y->gg.g.n;
    y->gg.g.n = &x->Extensions->gg.g;
    x->Extensions = y;
    y = nxt;
  }
}

/* FUNC(zxmd_md_PDPDescriptor_PUT_Extensions) */

void zxmd_md_PDPDescriptor_PUT_Extensions(struct zxmd_md_PDPDescriptor_s* x, int n, struct zxmd_md_Extensions_s* z)
{
  struct zxmd_md_Extensions_s* y;
  if (!x || !z) return;
  y = x->Extensions;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Extensions = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zxmd_md_Extensions_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zxmd_md_PDPDescriptor_ADD_Extensions) */

void zxmd_md_PDPDescriptor_ADD_Extensions(struct zxmd_md_PDPDescriptor_s* x, int n, struct zxmd_md_Extensions_s* z)
{
  struct zxmd_md_Extensions_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->Extensions->gg.g;
    x->Extensions = z;
    return;
  case -1:
    y = x->Extensions;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zxmd_md_Extensions_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Extensions; n > 1 && y; --n, y = (struct zxmd_md_Extensions_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zxmd_md_PDPDescriptor_DEL_Extensions) */

void zxmd_md_PDPDescriptor_DEL_Extensions(struct zxmd_md_PDPDescriptor_s* x, int n)
{
  struct zxmd_md_Extensions_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Extensions = (struct zxmd_md_Extensions_s*)x->Extensions->gg.g.n;
    return;
  case -1:
    y = (struct zxmd_md_Extensions_s*)x->Extensions;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zxmd_md_Extensions_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Extensions; n > 1 && y->gg.g.n; --n, y = (struct zxmd_md_Extensions_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zxmd_md_PDPDescriptor_NUM_KeyDescriptor) */

int zxmd_md_PDPDescriptor_NUM_KeyDescriptor(struct zxmd_md_PDPDescriptor_s* x)
{
  struct zxmd_md_KeyDescriptor_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->KeyDescriptor; y; ++n, y = (struct zxmd_md_KeyDescriptor_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zxmd_md_PDPDescriptor_GET_KeyDescriptor) */

struct zxmd_md_KeyDescriptor_s* zxmd_md_PDPDescriptor_GET_KeyDescriptor(struct zxmd_md_PDPDescriptor_s* x, int n)
{
  struct zxmd_md_KeyDescriptor_s* y;
  if (!x) return 0;
  for (y = x->KeyDescriptor; n>=0 && y; --n, y = (struct zxmd_md_KeyDescriptor_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zxmd_md_PDPDescriptor_POP_KeyDescriptor) */

struct zxmd_md_KeyDescriptor_s* zxmd_md_PDPDescriptor_POP_KeyDescriptor(struct zxmd_md_PDPDescriptor_s* x)
{
  struct zxmd_md_KeyDescriptor_s* y;
  if (!x) return 0;
  y = x->KeyDescriptor;
  if (y)
    x->KeyDescriptor = (struct zxmd_md_KeyDescriptor_s*)y->gg.g.n;
  return y;
}

/* FUNC(zxmd_md_PDPDescriptor_PUSH_KeyDescriptor) */

void zxmd_md_PDPDescriptor_PUSH_KeyDescriptor(struct zxmd_md_PDPDescriptor_s* x, struct zxmd_md_KeyDescriptor_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->KeyDescriptor->gg.g;
  x->KeyDescriptor = z;
}

/* FUNC(zxmd_md_PDPDescriptor_REV_KeyDescriptor) */

void zxmd_md_PDPDescriptor_REV_KeyDescriptor(struct zxmd_md_PDPDescriptor_s* x)
{
  struct zxmd_md_KeyDescriptor_s* nxt;
  struct zxmd_md_KeyDescriptor_s* y;
  if (!x) return;
  y = x->KeyDescriptor;
  if (!y) return;
  x->KeyDescriptor = 0;
  while (y) {
    nxt = (struct zxmd_md_KeyDescriptor_s*)y->gg.g.n;
    y->gg.g.n = &x->KeyDescriptor->gg.g;
    x->KeyDescriptor = y;
    y = nxt;
  }
}

/* FUNC(zxmd_md_PDPDescriptor_PUT_KeyDescriptor) */

void zxmd_md_PDPDescriptor_PUT_KeyDescriptor(struct zxmd_md_PDPDescriptor_s* x, int n, struct zxmd_md_KeyDescriptor_s* z)
{
  struct zxmd_md_KeyDescriptor_s* y;
  if (!x || !z) return;
  y = x->KeyDescriptor;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->KeyDescriptor = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zxmd_md_KeyDescriptor_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zxmd_md_PDPDescriptor_ADD_KeyDescriptor) */

void zxmd_md_PDPDescriptor_ADD_KeyDescriptor(struct zxmd_md_PDPDescriptor_s* x, int n, struct zxmd_md_KeyDescriptor_s* z)
{
  struct zxmd_md_KeyDescriptor_s* y;
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
    for (; y->gg.g.n; y = (struct zxmd_md_KeyDescriptor_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->KeyDescriptor; n > 1 && y; --n, y = (struct zxmd_md_KeyDescriptor_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zxmd_md_PDPDescriptor_DEL_KeyDescriptor) */

void zxmd_md_PDPDescriptor_DEL_KeyDescriptor(struct zxmd_md_PDPDescriptor_s* x, int n)
{
  struct zxmd_md_KeyDescriptor_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->KeyDescriptor = (struct zxmd_md_KeyDescriptor_s*)x->KeyDescriptor->gg.g.n;
    return;
  case -1:
    y = (struct zxmd_md_KeyDescriptor_s*)x->KeyDescriptor;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zxmd_md_KeyDescriptor_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->KeyDescriptor; n > 1 && y->gg.g.n; --n, y = (struct zxmd_md_KeyDescriptor_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zxmd_md_PDPDescriptor_NUM_Organization) */

int zxmd_md_PDPDescriptor_NUM_Organization(struct zxmd_md_PDPDescriptor_s* x)
{
  struct zxmd_md_Organization_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Organization; y; ++n, y = (struct zxmd_md_Organization_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zxmd_md_PDPDescriptor_GET_Organization) */

struct zxmd_md_Organization_s* zxmd_md_PDPDescriptor_GET_Organization(struct zxmd_md_PDPDescriptor_s* x, int n)
{
  struct zxmd_md_Organization_s* y;
  if (!x) return 0;
  for (y = x->Organization; n>=0 && y; --n, y = (struct zxmd_md_Organization_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zxmd_md_PDPDescriptor_POP_Organization) */

struct zxmd_md_Organization_s* zxmd_md_PDPDescriptor_POP_Organization(struct zxmd_md_PDPDescriptor_s* x)
{
  struct zxmd_md_Organization_s* y;
  if (!x) return 0;
  y = x->Organization;
  if (y)
    x->Organization = (struct zxmd_md_Organization_s*)y->gg.g.n;
  return y;
}

/* FUNC(zxmd_md_PDPDescriptor_PUSH_Organization) */

void zxmd_md_PDPDescriptor_PUSH_Organization(struct zxmd_md_PDPDescriptor_s* x, struct zxmd_md_Organization_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Organization->gg.g;
  x->Organization = z;
}

/* FUNC(zxmd_md_PDPDescriptor_REV_Organization) */

void zxmd_md_PDPDescriptor_REV_Organization(struct zxmd_md_PDPDescriptor_s* x)
{
  struct zxmd_md_Organization_s* nxt;
  struct zxmd_md_Organization_s* y;
  if (!x) return;
  y = x->Organization;
  if (!y) return;
  x->Organization = 0;
  while (y) {
    nxt = (struct zxmd_md_Organization_s*)y->gg.g.n;
    y->gg.g.n = &x->Organization->gg.g;
    x->Organization = y;
    y = nxt;
  }
}

/* FUNC(zxmd_md_PDPDescriptor_PUT_Organization) */

void zxmd_md_PDPDescriptor_PUT_Organization(struct zxmd_md_PDPDescriptor_s* x, int n, struct zxmd_md_Organization_s* z)
{
  struct zxmd_md_Organization_s* y;
  if (!x || !z) return;
  y = x->Organization;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Organization = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zxmd_md_Organization_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zxmd_md_PDPDescriptor_ADD_Organization) */

void zxmd_md_PDPDescriptor_ADD_Organization(struct zxmd_md_PDPDescriptor_s* x, int n, struct zxmd_md_Organization_s* z)
{
  struct zxmd_md_Organization_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->Organization->gg.g;
    x->Organization = z;
    return;
  case -1:
    y = x->Organization;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zxmd_md_Organization_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Organization; n > 1 && y; --n, y = (struct zxmd_md_Organization_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zxmd_md_PDPDescriptor_DEL_Organization) */

void zxmd_md_PDPDescriptor_DEL_Organization(struct zxmd_md_PDPDescriptor_s* x, int n)
{
  struct zxmd_md_Organization_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Organization = (struct zxmd_md_Organization_s*)x->Organization->gg.g.n;
    return;
  case -1:
    y = (struct zxmd_md_Organization_s*)x->Organization;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zxmd_md_Organization_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Organization; n > 1 && y->gg.g.n; --n, y = (struct zxmd_md_Organization_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zxmd_md_PDPDescriptor_NUM_ContactPerson) */

int zxmd_md_PDPDescriptor_NUM_ContactPerson(struct zxmd_md_PDPDescriptor_s* x)
{
  struct zxmd_md_ContactPerson_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->ContactPerson; y; ++n, y = (struct zxmd_md_ContactPerson_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zxmd_md_PDPDescriptor_GET_ContactPerson) */

struct zxmd_md_ContactPerson_s* zxmd_md_PDPDescriptor_GET_ContactPerson(struct zxmd_md_PDPDescriptor_s* x, int n)
{
  struct zxmd_md_ContactPerson_s* y;
  if (!x) return 0;
  for (y = x->ContactPerson; n>=0 && y; --n, y = (struct zxmd_md_ContactPerson_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zxmd_md_PDPDescriptor_POP_ContactPerson) */

struct zxmd_md_ContactPerson_s* zxmd_md_PDPDescriptor_POP_ContactPerson(struct zxmd_md_PDPDescriptor_s* x)
{
  struct zxmd_md_ContactPerson_s* y;
  if (!x) return 0;
  y = x->ContactPerson;
  if (y)
    x->ContactPerson = (struct zxmd_md_ContactPerson_s*)y->gg.g.n;
  return y;
}

/* FUNC(zxmd_md_PDPDescriptor_PUSH_ContactPerson) */

void zxmd_md_PDPDescriptor_PUSH_ContactPerson(struct zxmd_md_PDPDescriptor_s* x, struct zxmd_md_ContactPerson_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->ContactPerson->gg.g;
  x->ContactPerson = z;
}

/* FUNC(zxmd_md_PDPDescriptor_REV_ContactPerson) */

void zxmd_md_PDPDescriptor_REV_ContactPerson(struct zxmd_md_PDPDescriptor_s* x)
{
  struct zxmd_md_ContactPerson_s* nxt;
  struct zxmd_md_ContactPerson_s* y;
  if (!x) return;
  y = x->ContactPerson;
  if (!y) return;
  x->ContactPerson = 0;
  while (y) {
    nxt = (struct zxmd_md_ContactPerson_s*)y->gg.g.n;
    y->gg.g.n = &x->ContactPerson->gg.g;
    x->ContactPerson = y;
    y = nxt;
  }
}

/* FUNC(zxmd_md_PDPDescriptor_PUT_ContactPerson) */

void zxmd_md_PDPDescriptor_PUT_ContactPerson(struct zxmd_md_PDPDescriptor_s* x, int n, struct zxmd_md_ContactPerson_s* z)
{
  struct zxmd_md_ContactPerson_s* y;
  if (!x || !z) return;
  y = x->ContactPerson;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->ContactPerson = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zxmd_md_ContactPerson_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zxmd_md_PDPDescriptor_ADD_ContactPerson) */

void zxmd_md_PDPDescriptor_ADD_ContactPerson(struct zxmd_md_PDPDescriptor_s* x, int n, struct zxmd_md_ContactPerson_s* z)
{
  struct zxmd_md_ContactPerson_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->ContactPerson->gg.g;
    x->ContactPerson = z;
    return;
  case -1:
    y = x->ContactPerson;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zxmd_md_ContactPerson_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->ContactPerson; n > 1 && y; --n, y = (struct zxmd_md_ContactPerson_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zxmd_md_PDPDescriptor_DEL_ContactPerson) */

void zxmd_md_PDPDescriptor_DEL_ContactPerson(struct zxmd_md_PDPDescriptor_s* x, int n)
{
  struct zxmd_md_ContactPerson_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->ContactPerson = (struct zxmd_md_ContactPerson_s*)x->ContactPerson->gg.g.n;
    return;
  case -1:
    y = (struct zxmd_md_ContactPerson_s*)x->ContactPerson;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zxmd_md_ContactPerson_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->ContactPerson; n > 1 && y->gg.g.n; --n, y = (struct zxmd_md_ContactPerson_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

/* FUNC(zxmd_md_PDPDescriptor_GET_ID) */
struct zx_str_s* zxmd_md_PDPDescriptor_GET_ID(struct zxmd_md_PDPDescriptor_s* x) { return x->ID; }
/* FUNC(zxmd_md_PDPDescriptor_PUT_ID) */
void zxmd_md_PDPDescriptor_PUT_ID(struct zxmd_md_PDPDescriptor_s* x, struct zx_str_s* y) { x->ID = y; }
/* FUNC(zxmd_md_PDPDescriptor_GET_validUntil) */
struct zx_str_s* zxmd_md_PDPDescriptor_GET_validUntil(struct zxmd_md_PDPDescriptor_s* x) { return x->validUntil; }
/* FUNC(zxmd_md_PDPDescriptor_PUT_validUntil) */
void zxmd_md_PDPDescriptor_PUT_validUntil(struct zxmd_md_PDPDescriptor_s* x, struct zx_str_s* y) { x->validUntil = y; }
/* FUNC(zxmd_md_PDPDescriptor_GET_cacheDuration) */
struct zx_str_s* zxmd_md_PDPDescriptor_GET_cacheDuration(struct zxmd_md_PDPDescriptor_s* x) { return x->cacheDuration; }
/* FUNC(zxmd_md_PDPDescriptor_PUT_cacheDuration) */
void zxmd_md_PDPDescriptor_PUT_cacheDuration(struct zxmd_md_PDPDescriptor_s* x, struct zx_str_s* y) { x->cacheDuration = y; }
/* FUNC(zxmd_md_PDPDescriptor_GET_protocolSupportEnumeration) */
struct zx_str_s* zxmd_md_PDPDescriptor_GET_protocolSupportEnumeration(struct zxmd_md_PDPDescriptor_s* x) { return x->protocolSupportEnumeration; }
/* FUNC(zxmd_md_PDPDescriptor_PUT_protocolSupportEnumeration) */
void zxmd_md_PDPDescriptor_PUT_protocolSupportEnumeration(struct zxmd_md_PDPDescriptor_s* x, struct zx_str_s* y) { x->protocolSupportEnumeration = y; }
/* FUNC(zxmd_md_PDPDescriptor_GET_errorURL) */
struct zx_str_s* zxmd_md_PDPDescriptor_GET_errorURL(struct zxmd_md_PDPDescriptor_s* x) { return x->errorURL; }
/* FUNC(zxmd_md_PDPDescriptor_PUT_errorURL) */
void zxmd_md_PDPDescriptor_PUT_errorURL(struct zxmd_md_PDPDescriptor_s* x, struct zx_str_s* y) { x->errorURL = y; }


/* FUNC(zxmd_md_PDPDescriptor_NUM_AuthzService) */

int zxmd_md_PDPDescriptor_NUM_AuthzService(struct zxmd_md_PDPDescriptor_s* x)
{
  struct zxmd_md_AuthzService_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->AuthzService; y; ++n, y = (struct zxmd_md_AuthzService_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zxmd_md_PDPDescriptor_GET_AuthzService) */

struct zxmd_md_AuthzService_s* zxmd_md_PDPDescriptor_GET_AuthzService(struct zxmd_md_PDPDescriptor_s* x, int n)
{
  struct zxmd_md_AuthzService_s* y;
  if (!x) return 0;
  for (y = x->AuthzService; n>=0 && y; --n, y = (struct zxmd_md_AuthzService_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zxmd_md_PDPDescriptor_POP_AuthzService) */

struct zxmd_md_AuthzService_s* zxmd_md_PDPDescriptor_POP_AuthzService(struct zxmd_md_PDPDescriptor_s* x)
{
  struct zxmd_md_AuthzService_s* y;
  if (!x) return 0;
  y = x->AuthzService;
  if (y)
    x->AuthzService = (struct zxmd_md_AuthzService_s*)y->gg.g.n;
  return y;
}

/* FUNC(zxmd_md_PDPDescriptor_PUSH_AuthzService) */

void zxmd_md_PDPDescriptor_PUSH_AuthzService(struct zxmd_md_PDPDescriptor_s* x, struct zxmd_md_AuthzService_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->AuthzService->gg.g;
  x->AuthzService = z;
}

/* FUNC(zxmd_md_PDPDescriptor_REV_AuthzService) */

void zxmd_md_PDPDescriptor_REV_AuthzService(struct zxmd_md_PDPDescriptor_s* x)
{
  struct zxmd_md_AuthzService_s* nxt;
  struct zxmd_md_AuthzService_s* y;
  if (!x) return;
  y = x->AuthzService;
  if (!y) return;
  x->AuthzService = 0;
  while (y) {
    nxt = (struct zxmd_md_AuthzService_s*)y->gg.g.n;
    y->gg.g.n = &x->AuthzService->gg.g;
    x->AuthzService = y;
    y = nxt;
  }
}

/* FUNC(zxmd_md_PDPDescriptor_PUT_AuthzService) */

void zxmd_md_PDPDescriptor_PUT_AuthzService(struct zxmd_md_PDPDescriptor_s* x, int n, struct zxmd_md_AuthzService_s* z)
{
  struct zxmd_md_AuthzService_s* y;
  if (!x || !z) return;
  y = x->AuthzService;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->AuthzService = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zxmd_md_AuthzService_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zxmd_md_PDPDescriptor_ADD_AuthzService) */

void zxmd_md_PDPDescriptor_ADD_AuthzService(struct zxmd_md_PDPDescriptor_s* x, int n, struct zxmd_md_AuthzService_s* z)
{
  struct zxmd_md_AuthzService_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->AuthzService->gg.g;
    x->AuthzService = z;
    return;
  case -1:
    y = x->AuthzService;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zxmd_md_AuthzService_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->AuthzService; n > 1 && y; --n, y = (struct zxmd_md_AuthzService_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zxmd_md_PDPDescriptor_DEL_AuthzService) */

void zxmd_md_PDPDescriptor_DEL_AuthzService(struct zxmd_md_PDPDescriptor_s* x, int n)
{
  struct zxmd_md_AuthzService_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->AuthzService = (struct zxmd_md_AuthzService_s*)x->AuthzService->gg.g.n;
    return;
  case -1:
    y = (struct zxmd_md_AuthzService_s*)x->AuthzService;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zxmd_md_AuthzService_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->AuthzService; n > 1 && y->gg.g.n; --n, y = (struct zxmd_md_AuthzService_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zxmd_md_PDPDescriptor_NUM_AssertionIDRequestService) */

int zxmd_md_PDPDescriptor_NUM_AssertionIDRequestService(struct zxmd_md_PDPDescriptor_s* x)
{
  struct zxmd_md_AssertionIDRequestService_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->AssertionIDRequestService; y; ++n, y = (struct zxmd_md_AssertionIDRequestService_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zxmd_md_PDPDescriptor_GET_AssertionIDRequestService) */

struct zxmd_md_AssertionIDRequestService_s* zxmd_md_PDPDescriptor_GET_AssertionIDRequestService(struct zxmd_md_PDPDescriptor_s* x, int n)
{
  struct zxmd_md_AssertionIDRequestService_s* y;
  if (!x) return 0;
  for (y = x->AssertionIDRequestService; n>=0 && y; --n, y = (struct zxmd_md_AssertionIDRequestService_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zxmd_md_PDPDescriptor_POP_AssertionIDRequestService) */

struct zxmd_md_AssertionIDRequestService_s* zxmd_md_PDPDescriptor_POP_AssertionIDRequestService(struct zxmd_md_PDPDescriptor_s* x)
{
  struct zxmd_md_AssertionIDRequestService_s* y;
  if (!x) return 0;
  y = x->AssertionIDRequestService;
  if (y)
    x->AssertionIDRequestService = (struct zxmd_md_AssertionIDRequestService_s*)y->gg.g.n;
  return y;
}

/* FUNC(zxmd_md_PDPDescriptor_PUSH_AssertionIDRequestService) */

void zxmd_md_PDPDescriptor_PUSH_AssertionIDRequestService(struct zxmd_md_PDPDescriptor_s* x, struct zxmd_md_AssertionIDRequestService_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->AssertionIDRequestService->gg.g;
  x->AssertionIDRequestService = z;
}

/* FUNC(zxmd_md_PDPDescriptor_REV_AssertionIDRequestService) */

void zxmd_md_PDPDescriptor_REV_AssertionIDRequestService(struct zxmd_md_PDPDescriptor_s* x)
{
  struct zxmd_md_AssertionIDRequestService_s* nxt;
  struct zxmd_md_AssertionIDRequestService_s* y;
  if (!x) return;
  y = x->AssertionIDRequestService;
  if (!y) return;
  x->AssertionIDRequestService = 0;
  while (y) {
    nxt = (struct zxmd_md_AssertionIDRequestService_s*)y->gg.g.n;
    y->gg.g.n = &x->AssertionIDRequestService->gg.g;
    x->AssertionIDRequestService = y;
    y = nxt;
  }
}

/* FUNC(zxmd_md_PDPDescriptor_PUT_AssertionIDRequestService) */

void zxmd_md_PDPDescriptor_PUT_AssertionIDRequestService(struct zxmd_md_PDPDescriptor_s* x, int n, struct zxmd_md_AssertionIDRequestService_s* z)
{
  struct zxmd_md_AssertionIDRequestService_s* y;
  if (!x || !z) return;
  y = x->AssertionIDRequestService;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->AssertionIDRequestService = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zxmd_md_AssertionIDRequestService_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zxmd_md_PDPDescriptor_ADD_AssertionIDRequestService) */

void zxmd_md_PDPDescriptor_ADD_AssertionIDRequestService(struct zxmd_md_PDPDescriptor_s* x, int n, struct zxmd_md_AssertionIDRequestService_s* z)
{
  struct zxmd_md_AssertionIDRequestService_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->AssertionIDRequestService->gg.g;
    x->AssertionIDRequestService = z;
    return;
  case -1:
    y = x->AssertionIDRequestService;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zxmd_md_AssertionIDRequestService_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->AssertionIDRequestService; n > 1 && y; --n, y = (struct zxmd_md_AssertionIDRequestService_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zxmd_md_PDPDescriptor_DEL_AssertionIDRequestService) */

void zxmd_md_PDPDescriptor_DEL_AssertionIDRequestService(struct zxmd_md_PDPDescriptor_s* x, int n)
{
  struct zxmd_md_AssertionIDRequestService_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->AssertionIDRequestService = (struct zxmd_md_AssertionIDRequestService_s*)x->AssertionIDRequestService->gg.g.n;
    return;
  case -1:
    y = (struct zxmd_md_AssertionIDRequestService_s*)x->AssertionIDRequestService;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zxmd_md_AssertionIDRequestService_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->AssertionIDRequestService; n > 1 && y->gg.g.n; --n, y = (struct zxmd_md_AssertionIDRequestService_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zxmd_md_PDPDescriptor_NUM_NameIDFormat) */

int zxmd_md_PDPDescriptor_NUM_NameIDFormat(struct zxmd_md_PDPDescriptor_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->NameIDFormat; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zxmd_md_PDPDescriptor_GET_NameIDFormat) */

struct zx_elem_s* zxmd_md_PDPDescriptor_GET_NameIDFormat(struct zxmd_md_PDPDescriptor_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->NameIDFormat; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zxmd_md_PDPDescriptor_POP_NameIDFormat) */

struct zx_elem_s* zxmd_md_PDPDescriptor_POP_NameIDFormat(struct zxmd_md_PDPDescriptor_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->NameIDFormat;
  if (y)
    x->NameIDFormat = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zxmd_md_PDPDescriptor_PUSH_NameIDFormat) */

void zxmd_md_PDPDescriptor_PUSH_NameIDFormat(struct zxmd_md_PDPDescriptor_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->NameIDFormat->g;
  x->NameIDFormat = z;
}

/* FUNC(zxmd_md_PDPDescriptor_REV_NameIDFormat) */

void zxmd_md_PDPDescriptor_REV_NameIDFormat(struct zxmd_md_PDPDescriptor_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->NameIDFormat;
  if (!y) return;
  x->NameIDFormat = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->NameIDFormat->g;
    x->NameIDFormat = y;
    y = nxt;
  }
}

/* FUNC(zxmd_md_PDPDescriptor_PUT_NameIDFormat) */

void zxmd_md_PDPDescriptor_PUT_NameIDFormat(struct zxmd_md_PDPDescriptor_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->NameIDFormat;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->NameIDFormat = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zxmd_md_PDPDescriptor_ADD_NameIDFormat) */

void zxmd_md_PDPDescriptor_ADD_NameIDFormat(struct zxmd_md_PDPDescriptor_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->NameIDFormat->g;
    x->NameIDFormat = z;
    return;
  case -1:
    y = x->NameIDFormat;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->NameIDFormat; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zxmd_md_PDPDescriptor_DEL_NameIDFormat) */

void zxmd_md_PDPDescriptor_DEL_NameIDFormat(struct zxmd_md_PDPDescriptor_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->NameIDFormat = (struct zx_elem_s*)x->NameIDFormat->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->NameIDFormat;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->NameIDFormat; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}








/* FUNC(zxmd_md_RequestedAttribute_NUM_AttributeValue) */

int zxmd_md_RequestedAttribute_NUM_AttributeValue(struct zxmd_md_RequestedAttribute_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->AttributeValue; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zxmd_md_RequestedAttribute_GET_AttributeValue) */

struct zx_elem_s* zxmd_md_RequestedAttribute_GET_AttributeValue(struct zxmd_md_RequestedAttribute_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->AttributeValue; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zxmd_md_RequestedAttribute_POP_AttributeValue) */

struct zx_elem_s* zxmd_md_RequestedAttribute_POP_AttributeValue(struct zxmd_md_RequestedAttribute_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->AttributeValue;
  if (y)
    x->AttributeValue = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zxmd_md_RequestedAttribute_PUSH_AttributeValue) */

void zxmd_md_RequestedAttribute_PUSH_AttributeValue(struct zxmd_md_RequestedAttribute_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->AttributeValue->g;
  x->AttributeValue = z;
}

/* FUNC(zxmd_md_RequestedAttribute_REV_AttributeValue) */

void zxmd_md_RequestedAttribute_REV_AttributeValue(struct zxmd_md_RequestedAttribute_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->AttributeValue;
  if (!y) return;
  x->AttributeValue = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->AttributeValue->g;
    x->AttributeValue = y;
    y = nxt;
  }
}

/* FUNC(zxmd_md_RequestedAttribute_PUT_AttributeValue) */

void zxmd_md_RequestedAttribute_PUT_AttributeValue(struct zxmd_md_RequestedAttribute_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->AttributeValue;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->AttributeValue = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zxmd_md_RequestedAttribute_ADD_AttributeValue) */

void zxmd_md_RequestedAttribute_ADD_AttributeValue(struct zxmd_md_RequestedAttribute_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->AttributeValue->g;
    x->AttributeValue = z;
    return;
  case -1:
    y = x->AttributeValue;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->AttributeValue; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zxmd_md_RequestedAttribute_DEL_AttributeValue) */

void zxmd_md_RequestedAttribute_DEL_AttributeValue(struct zxmd_md_RequestedAttribute_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->AttributeValue = (struct zx_elem_s*)x->AttributeValue->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->AttributeValue;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->AttributeValue; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

/* FUNC(zxmd_md_RequestedAttribute_GET_Name) */
struct zx_str_s* zxmd_md_RequestedAttribute_GET_Name(struct zxmd_md_RequestedAttribute_s* x) { return x->Name; }
/* FUNC(zxmd_md_RequestedAttribute_PUT_Name) */
void zxmd_md_RequestedAttribute_PUT_Name(struct zxmd_md_RequestedAttribute_s* x, struct zx_str_s* y) { x->Name = y; }
/* FUNC(zxmd_md_RequestedAttribute_GET_NameFormat) */
struct zx_str_s* zxmd_md_RequestedAttribute_GET_NameFormat(struct zxmd_md_RequestedAttribute_s* x) { return x->NameFormat; }
/* FUNC(zxmd_md_RequestedAttribute_PUT_NameFormat) */
void zxmd_md_RequestedAttribute_PUT_NameFormat(struct zxmd_md_RequestedAttribute_s* x, struct zx_str_s* y) { x->NameFormat = y; }
/* FUNC(zxmd_md_RequestedAttribute_GET_FriendlyName) */
struct zx_str_s* zxmd_md_RequestedAttribute_GET_FriendlyName(struct zxmd_md_RequestedAttribute_s* x) { return x->FriendlyName; }
/* FUNC(zxmd_md_RequestedAttribute_PUT_FriendlyName) */
void zxmd_md_RequestedAttribute_PUT_FriendlyName(struct zxmd_md_RequestedAttribute_s* x, struct zx_str_s* y) { x->FriendlyName = y; }
/* FUNC(zxmd_md_RequestedAttribute_GET_isRequired) */
struct zx_str_s* zxmd_md_RequestedAttribute_GET_isRequired(struct zxmd_md_RequestedAttribute_s* x) { return x->isRequired; }
/* FUNC(zxmd_md_RequestedAttribute_PUT_isRequired) */
void zxmd_md_RequestedAttribute_PUT_isRequired(struct zxmd_md_RequestedAttribute_s* x, struct zx_str_s* y) { x->isRequired = y; }







/* FUNC(zxmd_md_RoleDescriptor_NUM_Signature) */

int zxmd_md_RoleDescriptor_NUM_Signature(struct zxmd_md_RoleDescriptor_s* x)
{
  struct zxmd_ds_Signature_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Signature; y; ++n, y = (struct zxmd_ds_Signature_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zxmd_md_RoleDescriptor_GET_Signature) */

struct zxmd_ds_Signature_s* zxmd_md_RoleDescriptor_GET_Signature(struct zxmd_md_RoleDescriptor_s* x, int n)
{
  struct zxmd_ds_Signature_s* y;
  if (!x) return 0;
  for (y = x->Signature; n>=0 && y; --n, y = (struct zxmd_ds_Signature_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zxmd_md_RoleDescriptor_POP_Signature) */

struct zxmd_ds_Signature_s* zxmd_md_RoleDescriptor_POP_Signature(struct zxmd_md_RoleDescriptor_s* x)
{
  struct zxmd_ds_Signature_s* y;
  if (!x) return 0;
  y = x->Signature;
  if (y)
    x->Signature = (struct zxmd_ds_Signature_s*)y->gg.g.n;
  return y;
}

/* FUNC(zxmd_md_RoleDescriptor_PUSH_Signature) */

void zxmd_md_RoleDescriptor_PUSH_Signature(struct zxmd_md_RoleDescriptor_s* x, struct zxmd_ds_Signature_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Signature->gg.g;
  x->Signature = z;
}

/* FUNC(zxmd_md_RoleDescriptor_REV_Signature) */

void zxmd_md_RoleDescriptor_REV_Signature(struct zxmd_md_RoleDescriptor_s* x)
{
  struct zxmd_ds_Signature_s* nxt;
  struct zxmd_ds_Signature_s* y;
  if (!x) return;
  y = x->Signature;
  if (!y) return;
  x->Signature = 0;
  while (y) {
    nxt = (struct zxmd_ds_Signature_s*)y->gg.g.n;
    y->gg.g.n = &x->Signature->gg.g;
    x->Signature = y;
    y = nxt;
  }
}

/* FUNC(zxmd_md_RoleDescriptor_PUT_Signature) */

void zxmd_md_RoleDescriptor_PUT_Signature(struct zxmd_md_RoleDescriptor_s* x, int n, struct zxmd_ds_Signature_s* z)
{
  struct zxmd_ds_Signature_s* y;
  if (!x || !z) return;
  y = x->Signature;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Signature = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zxmd_ds_Signature_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zxmd_md_RoleDescriptor_ADD_Signature) */

void zxmd_md_RoleDescriptor_ADD_Signature(struct zxmd_md_RoleDescriptor_s* x, int n, struct zxmd_ds_Signature_s* z)
{
  struct zxmd_ds_Signature_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->Signature->gg.g;
    x->Signature = z;
    return;
  case -1:
    y = x->Signature;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zxmd_ds_Signature_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Signature; n > 1 && y; --n, y = (struct zxmd_ds_Signature_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zxmd_md_RoleDescriptor_DEL_Signature) */

void zxmd_md_RoleDescriptor_DEL_Signature(struct zxmd_md_RoleDescriptor_s* x, int n)
{
  struct zxmd_ds_Signature_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Signature = (struct zxmd_ds_Signature_s*)x->Signature->gg.g.n;
    return;
  case -1:
    y = (struct zxmd_ds_Signature_s*)x->Signature;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zxmd_ds_Signature_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Signature; n > 1 && y->gg.g.n; --n, y = (struct zxmd_ds_Signature_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zxmd_md_RoleDescriptor_NUM_Extensions) */

int zxmd_md_RoleDescriptor_NUM_Extensions(struct zxmd_md_RoleDescriptor_s* x)
{
  struct zxmd_md_Extensions_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Extensions; y; ++n, y = (struct zxmd_md_Extensions_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zxmd_md_RoleDescriptor_GET_Extensions) */

struct zxmd_md_Extensions_s* zxmd_md_RoleDescriptor_GET_Extensions(struct zxmd_md_RoleDescriptor_s* x, int n)
{
  struct zxmd_md_Extensions_s* y;
  if (!x) return 0;
  for (y = x->Extensions; n>=0 && y; --n, y = (struct zxmd_md_Extensions_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zxmd_md_RoleDescriptor_POP_Extensions) */

struct zxmd_md_Extensions_s* zxmd_md_RoleDescriptor_POP_Extensions(struct zxmd_md_RoleDescriptor_s* x)
{
  struct zxmd_md_Extensions_s* y;
  if (!x) return 0;
  y = x->Extensions;
  if (y)
    x->Extensions = (struct zxmd_md_Extensions_s*)y->gg.g.n;
  return y;
}

/* FUNC(zxmd_md_RoleDescriptor_PUSH_Extensions) */

void zxmd_md_RoleDescriptor_PUSH_Extensions(struct zxmd_md_RoleDescriptor_s* x, struct zxmd_md_Extensions_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Extensions->gg.g;
  x->Extensions = z;
}

/* FUNC(zxmd_md_RoleDescriptor_REV_Extensions) */

void zxmd_md_RoleDescriptor_REV_Extensions(struct zxmd_md_RoleDescriptor_s* x)
{
  struct zxmd_md_Extensions_s* nxt;
  struct zxmd_md_Extensions_s* y;
  if (!x) return;
  y = x->Extensions;
  if (!y) return;
  x->Extensions = 0;
  while (y) {
    nxt = (struct zxmd_md_Extensions_s*)y->gg.g.n;
    y->gg.g.n = &x->Extensions->gg.g;
    x->Extensions = y;
    y = nxt;
  }
}

/* FUNC(zxmd_md_RoleDescriptor_PUT_Extensions) */

void zxmd_md_RoleDescriptor_PUT_Extensions(struct zxmd_md_RoleDescriptor_s* x, int n, struct zxmd_md_Extensions_s* z)
{
  struct zxmd_md_Extensions_s* y;
  if (!x || !z) return;
  y = x->Extensions;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Extensions = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zxmd_md_Extensions_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zxmd_md_RoleDescriptor_ADD_Extensions) */

void zxmd_md_RoleDescriptor_ADD_Extensions(struct zxmd_md_RoleDescriptor_s* x, int n, struct zxmd_md_Extensions_s* z)
{
  struct zxmd_md_Extensions_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->Extensions->gg.g;
    x->Extensions = z;
    return;
  case -1:
    y = x->Extensions;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zxmd_md_Extensions_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Extensions; n > 1 && y; --n, y = (struct zxmd_md_Extensions_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zxmd_md_RoleDescriptor_DEL_Extensions) */

void zxmd_md_RoleDescriptor_DEL_Extensions(struct zxmd_md_RoleDescriptor_s* x, int n)
{
  struct zxmd_md_Extensions_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Extensions = (struct zxmd_md_Extensions_s*)x->Extensions->gg.g.n;
    return;
  case -1:
    y = (struct zxmd_md_Extensions_s*)x->Extensions;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zxmd_md_Extensions_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Extensions; n > 1 && y->gg.g.n; --n, y = (struct zxmd_md_Extensions_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zxmd_md_RoleDescriptor_NUM_KeyDescriptor) */

int zxmd_md_RoleDescriptor_NUM_KeyDescriptor(struct zxmd_md_RoleDescriptor_s* x)
{
  struct zxmd_md_KeyDescriptor_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->KeyDescriptor; y; ++n, y = (struct zxmd_md_KeyDescriptor_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zxmd_md_RoleDescriptor_GET_KeyDescriptor) */

struct zxmd_md_KeyDescriptor_s* zxmd_md_RoleDescriptor_GET_KeyDescriptor(struct zxmd_md_RoleDescriptor_s* x, int n)
{
  struct zxmd_md_KeyDescriptor_s* y;
  if (!x) return 0;
  for (y = x->KeyDescriptor; n>=0 && y; --n, y = (struct zxmd_md_KeyDescriptor_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zxmd_md_RoleDescriptor_POP_KeyDescriptor) */

struct zxmd_md_KeyDescriptor_s* zxmd_md_RoleDescriptor_POP_KeyDescriptor(struct zxmd_md_RoleDescriptor_s* x)
{
  struct zxmd_md_KeyDescriptor_s* y;
  if (!x) return 0;
  y = x->KeyDescriptor;
  if (y)
    x->KeyDescriptor = (struct zxmd_md_KeyDescriptor_s*)y->gg.g.n;
  return y;
}

/* FUNC(zxmd_md_RoleDescriptor_PUSH_KeyDescriptor) */

void zxmd_md_RoleDescriptor_PUSH_KeyDescriptor(struct zxmd_md_RoleDescriptor_s* x, struct zxmd_md_KeyDescriptor_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->KeyDescriptor->gg.g;
  x->KeyDescriptor = z;
}

/* FUNC(zxmd_md_RoleDescriptor_REV_KeyDescriptor) */

void zxmd_md_RoleDescriptor_REV_KeyDescriptor(struct zxmd_md_RoleDescriptor_s* x)
{
  struct zxmd_md_KeyDescriptor_s* nxt;
  struct zxmd_md_KeyDescriptor_s* y;
  if (!x) return;
  y = x->KeyDescriptor;
  if (!y) return;
  x->KeyDescriptor = 0;
  while (y) {
    nxt = (struct zxmd_md_KeyDescriptor_s*)y->gg.g.n;
    y->gg.g.n = &x->KeyDescriptor->gg.g;
    x->KeyDescriptor = y;
    y = nxt;
  }
}

/* FUNC(zxmd_md_RoleDescriptor_PUT_KeyDescriptor) */

void zxmd_md_RoleDescriptor_PUT_KeyDescriptor(struct zxmd_md_RoleDescriptor_s* x, int n, struct zxmd_md_KeyDescriptor_s* z)
{
  struct zxmd_md_KeyDescriptor_s* y;
  if (!x || !z) return;
  y = x->KeyDescriptor;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->KeyDescriptor = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zxmd_md_KeyDescriptor_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zxmd_md_RoleDescriptor_ADD_KeyDescriptor) */

void zxmd_md_RoleDescriptor_ADD_KeyDescriptor(struct zxmd_md_RoleDescriptor_s* x, int n, struct zxmd_md_KeyDescriptor_s* z)
{
  struct zxmd_md_KeyDescriptor_s* y;
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
    for (; y->gg.g.n; y = (struct zxmd_md_KeyDescriptor_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->KeyDescriptor; n > 1 && y; --n, y = (struct zxmd_md_KeyDescriptor_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zxmd_md_RoleDescriptor_DEL_KeyDescriptor) */

void zxmd_md_RoleDescriptor_DEL_KeyDescriptor(struct zxmd_md_RoleDescriptor_s* x, int n)
{
  struct zxmd_md_KeyDescriptor_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->KeyDescriptor = (struct zxmd_md_KeyDescriptor_s*)x->KeyDescriptor->gg.g.n;
    return;
  case -1:
    y = (struct zxmd_md_KeyDescriptor_s*)x->KeyDescriptor;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zxmd_md_KeyDescriptor_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->KeyDescriptor; n > 1 && y->gg.g.n; --n, y = (struct zxmd_md_KeyDescriptor_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zxmd_md_RoleDescriptor_NUM_Organization) */

int zxmd_md_RoleDescriptor_NUM_Organization(struct zxmd_md_RoleDescriptor_s* x)
{
  struct zxmd_md_Organization_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Organization; y; ++n, y = (struct zxmd_md_Organization_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zxmd_md_RoleDescriptor_GET_Organization) */

struct zxmd_md_Organization_s* zxmd_md_RoleDescriptor_GET_Organization(struct zxmd_md_RoleDescriptor_s* x, int n)
{
  struct zxmd_md_Organization_s* y;
  if (!x) return 0;
  for (y = x->Organization; n>=0 && y; --n, y = (struct zxmd_md_Organization_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zxmd_md_RoleDescriptor_POP_Organization) */

struct zxmd_md_Organization_s* zxmd_md_RoleDescriptor_POP_Organization(struct zxmd_md_RoleDescriptor_s* x)
{
  struct zxmd_md_Organization_s* y;
  if (!x) return 0;
  y = x->Organization;
  if (y)
    x->Organization = (struct zxmd_md_Organization_s*)y->gg.g.n;
  return y;
}

/* FUNC(zxmd_md_RoleDescriptor_PUSH_Organization) */

void zxmd_md_RoleDescriptor_PUSH_Organization(struct zxmd_md_RoleDescriptor_s* x, struct zxmd_md_Organization_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Organization->gg.g;
  x->Organization = z;
}

/* FUNC(zxmd_md_RoleDescriptor_REV_Organization) */

void zxmd_md_RoleDescriptor_REV_Organization(struct zxmd_md_RoleDescriptor_s* x)
{
  struct zxmd_md_Organization_s* nxt;
  struct zxmd_md_Organization_s* y;
  if (!x) return;
  y = x->Organization;
  if (!y) return;
  x->Organization = 0;
  while (y) {
    nxt = (struct zxmd_md_Organization_s*)y->gg.g.n;
    y->gg.g.n = &x->Organization->gg.g;
    x->Organization = y;
    y = nxt;
  }
}

/* FUNC(zxmd_md_RoleDescriptor_PUT_Organization) */

void zxmd_md_RoleDescriptor_PUT_Organization(struct zxmd_md_RoleDescriptor_s* x, int n, struct zxmd_md_Organization_s* z)
{
  struct zxmd_md_Organization_s* y;
  if (!x || !z) return;
  y = x->Organization;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Organization = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zxmd_md_Organization_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zxmd_md_RoleDescriptor_ADD_Organization) */

void zxmd_md_RoleDescriptor_ADD_Organization(struct zxmd_md_RoleDescriptor_s* x, int n, struct zxmd_md_Organization_s* z)
{
  struct zxmd_md_Organization_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->Organization->gg.g;
    x->Organization = z;
    return;
  case -1:
    y = x->Organization;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zxmd_md_Organization_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Organization; n > 1 && y; --n, y = (struct zxmd_md_Organization_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zxmd_md_RoleDescriptor_DEL_Organization) */

void zxmd_md_RoleDescriptor_DEL_Organization(struct zxmd_md_RoleDescriptor_s* x, int n)
{
  struct zxmd_md_Organization_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Organization = (struct zxmd_md_Organization_s*)x->Organization->gg.g.n;
    return;
  case -1:
    y = (struct zxmd_md_Organization_s*)x->Organization;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zxmd_md_Organization_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Organization; n > 1 && y->gg.g.n; --n, y = (struct zxmd_md_Organization_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zxmd_md_RoleDescriptor_NUM_ContactPerson) */

int zxmd_md_RoleDescriptor_NUM_ContactPerson(struct zxmd_md_RoleDescriptor_s* x)
{
  struct zxmd_md_ContactPerson_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->ContactPerson; y; ++n, y = (struct zxmd_md_ContactPerson_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zxmd_md_RoleDescriptor_GET_ContactPerson) */

struct zxmd_md_ContactPerson_s* zxmd_md_RoleDescriptor_GET_ContactPerson(struct zxmd_md_RoleDescriptor_s* x, int n)
{
  struct zxmd_md_ContactPerson_s* y;
  if (!x) return 0;
  for (y = x->ContactPerson; n>=0 && y; --n, y = (struct zxmd_md_ContactPerson_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zxmd_md_RoleDescriptor_POP_ContactPerson) */

struct zxmd_md_ContactPerson_s* zxmd_md_RoleDescriptor_POP_ContactPerson(struct zxmd_md_RoleDescriptor_s* x)
{
  struct zxmd_md_ContactPerson_s* y;
  if (!x) return 0;
  y = x->ContactPerson;
  if (y)
    x->ContactPerson = (struct zxmd_md_ContactPerson_s*)y->gg.g.n;
  return y;
}

/* FUNC(zxmd_md_RoleDescriptor_PUSH_ContactPerson) */

void zxmd_md_RoleDescriptor_PUSH_ContactPerson(struct zxmd_md_RoleDescriptor_s* x, struct zxmd_md_ContactPerson_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->ContactPerson->gg.g;
  x->ContactPerson = z;
}

/* FUNC(zxmd_md_RoleDescriptor_REV_ContactPerson) */

void zxmd_md_RoleDescriptor_REV_ContactPerson(struct zxmd_md_RoleDescriptor_s* x)
{
  struct zxmd_md_ContactPerson_s* nxt;
  struct zxmd_md_ContactPerson_s* y;
  if (!x) return;
  y = x->ContactPerson;
  if (!y) return;
  x->ContactPerson = 0;
  while (y) {
    nxt = (struct zxmd_md_ContactPerson_s*)y->gg.g.n;
    y->gg.g.n = &x->ContactPerson->gg.g;
    x->ContactPerson = y;
    y = nxt;
  }
}

/* FUNC(zxmd_md_RoleDescriptor_PUT_ContactPerson) */

void zxmd_md_RoleDescriptor_PUT_ContactPerson(struct zxmd_md_RoleDescriptor_s* x, int n, struct zxmd_md_ContactPerson_s* z)
{
  struct zxmd_md_ContactPerson_s* y;
  if (!x || !z) return;
  y = x->ContactPerson;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->ContactPerson = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zxmd_md_ContactPerson_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zxmd_md_RoleDescriptor_ADD_ContactPerson) */

void zxmd_md_RoleDescriptor_ADD_ContactPerson(struct zxmd_md_RoleDescriptor_s* x, int n, struct zxmd_md_ContactPerson_s* z)
{
  struct zxmd_md_ContactPerson_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->ContactPerson->gg.g;
    x->ContactPerson = z;
    return;
  case -1:
    y = x->ContactPerson;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zxmd_md_ContactPerson_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->ContactPerson; n > 1 && y; --n, y = (struct zxmd_md_ContactPerson_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zxmd_md_RoleDescriptor_DEL_ContactPerson) */

void zxmd_md_RoleDescriptor_DEL_ContactPerson(struct zxmd_md_RoleDescriptor_s* x, int n)
{
  struct zxmd_md_ContactPerson_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->ContactPerson = (struct zxmd_md_ContactPerson_s*)x->ContactPerson->gg.g.n;
    return;
  case -1:
    y = (struct zxmd_md_ContactPerson_s*)x->ContactPerson;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zxmd_md_ContactPerson_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->ContactPerson; n > 1 && y->gg.g.n; --n, y = (struct zxmd_md_ContactPerson_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

/* FUNC(zxmd_md_RoleDescriptor_GET_ID) */
struct zx_str_s* zxmd_md_RoleDescriptor_GET_ID(struct zxmd_md_RoleDescriptor_s* x) { return x->ID; }
/* FUNC(zxmd_md_RoleDescriptor_PUT_ID) */
void zxmd_md_RoleDescriptor_PUT_ID(struct zxmd_md_RoleDescriptor_s* x, struct zx_str_s* y) { x->ID = y; }
/* FUNC(zxmd_md_RoleDescriptor_GET_validUntil) */
struct zx_str_s* zxmd_md_RoleDescriptor_GET_validUntil(struct zxmd_md_RoleDescriptor_s* x) { return x->validUntil; }
/* FUNC(zxmd_md_RoleDescriptor_PUT_validUntil) */
void zxmd_md_RoleDescriptor_PUT_validUntil(struct zxmd_md_RoleDescriptor_s* x, struct zx_str_s* y) { x->validUntil = y; }
/* FUNC(zxmd_md_RoleDescriptor_GET_cacheDuration) */
struct zx_str_s* zxmd_md_RoleDescriptor_GET_cacheDuration(struct zxmd_md_RoleDescriptor_s* x) { return x->cacheDuration; }
/* FUNC(zxmd_md_RoleDescriptor_PUT_cacheDuration) */
void zxmd_md_RoleDescriptor_PUT_cacheDuration(struct zxmd_md_RoleDescriptor_s* x, struct zx_str_s* y) { x->cacheDuration = y; }
/* FUNC(zxmd_md_RoleDescriptor_GET_protocolSupportEnumeration) */
struct zx_str_s* zxmd_md_RoleDescriptor_GET_protocolSupportEnumeration(struct zxmd_md_RoleDescriptor_s* x) { return x->protocolSupportEnumeration; }
/* FUNC(zxmd_md_RoleDescriptor_PUT_protocolSupportEnumeration) */
void zxmd_md_RoleDescriptor_PUT_protocolSupportEnumeration(struct zxmd_md_RoleDescriptor_s* x, struct zx_str_s* y) { x->protocolSupportEnumeration = y; }
/* FUNC(zxmd_md_RoleDescriptor_GET_errorURL) */
struct zx_str_s* zxmd_md_RoleDescriptor_GET_errorURL(struct zxmd_md_RoleDescriptor_s* x) { return x->errorURL; }
/* FUNC(zxmd_md_RoleDescriptor_PUT_errorURL) */
void zxmd_md_RoleDescriptor_PUT_errorURL(struct zxmd_md_RoleDescriptor_s* x, struct zx_str_s* y) { x->errorURL = y; }







/* FUNC(zxmd_md_SPSSODescriptor_NUM_Signature) */

int zxmd_md_SPSSODescriptor_NUM_Signature(struct zxmd_md_SPSSODescriptor_s* x)
{
  struct zxmd_ds_Signature_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Signature; y; ++n, y = (struct zxmd_ds_Signature_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zxmd_md_SPSSODescriptor_GET_Signature) */

struct zxmd_ds_Signature_s* zxmd_md_SPSSODescriptor_GET_Signature(struct zxmd_md_SPSSODescriptor_s* x, int n)
{
  struct zxmd_ds_Signature_s* y;
  if (!x) return 0;
  for (y = x->Signature; n>=0 && y; --n, y = (struct zxmd_ds_Signature_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zxmd_md_SPSSODescriptor_POP_Signature) */

struct zxmd_ds_Signature_s* zxmd_md_SPSSODescriptor_POP_Signature(struct zxmd_md_SPSSODescriptor_s* x)
{
  struct zxmd_ds_Signature_s* y;
  if (!x) return 0;
  y = x->Signature;
  if (y)
    x->Signature = (struct zxmd_ds_Signature_s*)y->gg.g.n;
  return y;
}

/* FUNC(zxmd_md_SPSSODescriptor_PUSH_Signature) */

void zxmd_md_SPSSODescriptor_PUSH_Signature(struct zxmd_md_SPSSODescriptor_s* x, struct zxmd_ds_Signature_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Signature->gg.g;
  x->Signature = z;
}

/* FUNC(zxmd_md_SPSSODescriptor_REV_Signature) */

void zxmd_md_SPSSODescriptor_REV_Signature(struct zxmd_md_SPSSODescriptor_s* x)
{
  struct zxmd_ds_Signature_s* nxt;
  struct zxmd_ds_Signature_s* y;
  if (!x) return;
  y = x->Signature;
  if (!y) return;
  x->Signature = 0;
  while (y) {
    nxt = (struct zxmd_ds_Signature_s*)y->gg.g.n;
    y->gg.g.n = &x->Signature->gg.g;
    x->Signature = y;
    y = nxt;
  }
}

/* FUNC(zxmd_md_SPSSODescriptor_PUT_Signature) */

void zxmd_md_SPSSODescriptor_PUT_Signature(struct zxmd_md_SPSSODescriptor_s* x, int n, struct zxmd_ds_Signature_s* z)
{
  struct zxmd_ds_Signature_s* y;
  if (!x || !z) return;
  y = x->Signature;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Signature = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zxmd_ds_Signature_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zxmd_md_SPSSODescriptor_ADD_Signature) */

void zxmd_md_SPSSODescriptor_ADD_Signature(struct zxmd_md_SPSSODescriptor_s* x, int n, struct zxmd_ds_Signature_s* z)
{
  struct zxmd_ds_Signature_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->Signature->gg.g;
    x->Signature = z;
    return;
  case -1:
    y = x->Signature;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zxmd_ds_Signature_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Signature; n > 1 && y; --n, y = (struct zxmd_ds_Signature_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zxmd_md_SPSSODescriptor_DEL_Signature) */

void zxmd_md_SPSSODescriptor_DEL_Signature(struct zxmd_md_SPSSODescriptor_s* x, int n)
{
  struct zxmd_ds_Signature_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Signature = (struct zxmd_ds_Signature_s*)x->Signature->gg.g.n;
    return;
  case -1:
    y = (struct zxmd_ds_Signature_s*)x->Signature;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zxmd_ds_Signature_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Signature; n > 1 && y->gg.g.n; --n, y = (struct zxmd_ds_Signature_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zxmd_md_SPSSODescriptor_NUM_Extensions) */

int zxmd_md_SPSSODescriptor_NUM_Extensions(struct zxmd_md_SPSSODescriptor_s* x)
{
  struct zxmd_md_Extensions_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Extensions; y; ++n, y = (struct zxmd_md_Extensions_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zxmd_md_SPSSODescriptor_GET_Extensions) */

struct zxmd_md_Extensions_s* zxmd_md_SPSSODescriptor_GET_Extensions(struct zxmd_md_SPSSODescriptor_s* x, int n)
{
  struct zxmd_md_Extensions_s* y;
  if (!x) return 0;
  for (y = x->Extensions; n>=0 && y; --n, y = (struct zxmd_md_Extensions_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zxmd_md_SPSSODescriptor_POP_Extensions) */

struct zxmd_md_Extensions_s* zxmd_md_SPSSODescriptor_POP_Extensions(struct zxmd_md_SPSSODescriptor_s* x)
{
  struct zxmd_md_Extensions_s* y;
  if (!x) return 0;
  y = x->Extensions;
  if (y)
    x->Extensions = (struct zxmd_md_Extensions_s*)y->gg.g.n;
  return y;
}

/* FUNC(zxmd_md_SPSSODescriptor_PUSH_Extensions) */

void zxmd_md_SPSSODescriptor_PUSH_Extensions(struct zxmd_md_SPSSODescriptor_s* x, struct zxmd_md_Extensions_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Extensions->gg.g;
  x->Extensions = z;
}

/* FUNC(zxmd_md_SPSSODescriptor_REV_Extensions) */

void zxmd_md_SPSSODescriptor_REV_Extensions(struct zxmd_md_SPSSODescriptor_s* x)
{
  struct zxmd_md_Extensions_s* nxt;
  struct zxmd_md_Extensions_s* y;
  if (!x) return;
  y = x->Extensions;
  if (!y) return;
  x->Extensions = 0;
  while (y) {
    nxt = (struct zxmd_md_Extensions_s*)y->gg.g.n;
    y->gg.g.n = &x->Extensions->gg.g;
    x->Extensions = y;
    y = nxt;
  }
}

/* FUNC(zxmd_md_SPSSODescriptor_PUT_Extensions) */

void zxmd_md_SPSSODescriptor_PUT_Extensions(struct zxmd_md_SPSSODescriptor_s* x, int n, struct zxmd_md_Extensions_s* z)
{
  struct zxmd_md_Extensions_s* y;
  if (!x || !z) return;
  y = x->Extensions;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Extensions = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zxmd_md_Extensions_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zxmd_md_SPSSODescriptor_ADD_Extensions) */

void zxmd_md_SPSSODescriptor_ADD_Extensions(struct zxmd_md_SPSSODescriptor_s* x, int n, struct zxmd_md_Extensions_s* z)
{
  struct zxmd_md_Extensions_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->Extensions->gg.g;
    x->Extensions = z;
    return;
  case -1:
    y = x->Extensions;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zxmd_md_Extensions_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Extensions; n > 1 && y; --n, y = (struct zxmd_md_Extensions_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zxmd_md_SPSSODescriptor_DEL_Extensions) */

void zxmd_md_SPSSODescriptor_DEL_Extensions(struct zxmd_md_SPSSODescriptor_s* x, int n)
{
  struct zxmd_md_Extensions_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Extensions = (struct zxmd_md_Extensions_s*)x->Extensions->gg.g.n;
    return;
  case -1:
    y = (struct zxmd_md_Extensions_s*)x->Extensions;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zxmd_md_Extensions_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Extensions; n > 1 && y->gg.g.n; --n, y = (struct zxmd_md_Extensions_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zxmd_md_SPSSODescriptor_NUM_KeyDescriptor) */

int zxmd_md_SPSSODescriptor_NUM_KeyDescriptor(struct zxmd_md_SPSSODescriptor_s* x)
{
  struct zxmd_md_KeyDescriptor_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->KeyDescriptor; y; ++n, y = (struct zxmd_md_KeyDescriptor_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zxmd_md_SPSSODescriptor_GET_KeyDescriptor) */

struct zxmd_md_KeyDescriptor_s* zxmd_md_SPSSODescriptor_GET_KeyDescriptor(struct zxmd_md_SPSSODescriptor_s* x, int n)
{
  struct zxmd_md_KeyDescriptor_s* y;
  if (!x) return 0;
  for (y = x->KeyDescriptor; n>=0 && y; --n, y = (struct zxmd_md_KeyDescriptor_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zxmd_md_SPSSODescriptor_POP_KeyDescriptor) */

struct zxmd_md_KeyDescriptor_s* zxmd_md_SPSSODescriptor_POP_KeyDescriptor(struct zxmd_md_SPSSODescriptor_s* x)
{
  struct zxmd_md_KeyDescriptor_s* y;
  if (!x) return 0;
  y = x->KeyDescriptor;
  if (y)
    x->KeyDescriptor = (struct zxmd_md_KeyDescriptor_s*)y->gg.g.n;
  return y;
}

/* FUNC(zxmd_md_SPSSODescriptor_PUSH_KeyDescriptor) */

void zxmd_md_SPSSODescriptor_PUSH_KeyDescriptor(struct zxmd_md_SPSSODescriptor_s* x, struct zxmd_md_KeyDescriptor_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->KeyDescriptor->gg.g;
  x->KeyDescriptor = z;
}

/* FUNC(zxmd_md_SPSSODescriptor_REV_KeyDescriptor) */

void zxmd_md_SPSSODescriptor_REV_KeyDescriptor(struct zxmd_md_SPSSODescriptor_s* x)
{
  struct zxmd_md_KeyDescriptor_s* nxt;
  struct zxmd_md_KeyDescriptor_s* y;
  if (!x) return;
  y = x->KeyDescriptor;
  if (!y) return;
  x->KeyDescriptor = 0;
  while (y) {
    nxt = (struct zxmd_md_KeyDescriptor_s*)y->gg.g.n;
    y->gg.g.n = &x->KeyDescriptor->gg.g;
    x->KeyDescriptor = y;
    y = nxt;
  }
}

/* FUNC(zxmd_md_SPSSODescriptor_PUT_KeyDescriptor) */

void zxmd_md_SPSSODescriptor_PUT_KeyDescriptor(struct zxmd_md_SPSSODescriptor_s* x, int n, struct zxmd_md_KeyDescriptor_s* z)
{
  struct zxmd_md_KeyDescriptor_s* y;
  if (!x || !z) return;
  y = x->KeyDescriptor;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->KeyDescriptor = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zxmd_md_KeyDescriptor_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zxmd_md_SPSSODescriptor_ADD_KeyDescriptor) */

void zxmd_md_SPSSODescriptor_ADD_KeyDescriptor(struct zxmd_md_SPSSODescriptor_s* x, int n, struct zxmd_md_KeyDescriptor_s* z)
{
  struct zxmd_md_KeyDescriptor_s* y;
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
    for (; y->gg.g.n; y = (struct zxmd_md_KeyDescriptor_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->KeyDescriptor; n > 1 && y; --n, y = (struct zxmd_md_KeyDescriptor_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zxmd_md_SPSSODescriptor_DEL_KeyDescriptor) */

void zxmd_md_SPSSODescriptor_DEL_KeyDescriptor(struct zxmd_md_SPSSODescriptor_s* x, int n)
{
  struct zxmd_md_KeyDescriptor_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->KeyDescriptor = (struct zxmd_md_KeyDescriptor_s*)x->KeyDescriptor->gg.g.n;
    return;
  case -1:
    y = (struct zxmd_md_KeyDescriptor_s*)x->KeyDescriptor;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zxmd_md_KeyDescriptor_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->KeyDescriptor; n > 1 && y->gg.g.n; --n, y = (struct zxmd_md_KeyDescriptor_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zxmd_md_SPSSODescriptor_NUM_Organization) */

int zxmd_md_SPSSODescriptor_NUM_Organization(struct zxmd_md_SPSSODescriptor_s* x)
{
  struct zxmd_md_Organization_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Organization; y; ++n, y = (struct zxmd_md_Organization_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zxmd_md_SPSSODescriptor_GET_Organization) */

struct zxmd_md_Organization_s* zxmd_md_SPSSODescriptor_GET_Organization(struct zxmd_md_SPSSODescriptor_s* x, int n)
{
  struct zxmd_md_Organization_s* y;
  if (!x) return 0;
  for (y = x->Organization; n>=0 && y; --n, y = (struct zxmd_md_Organization_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zxmd_md_SPSSODescriptor_POP_Organization) */

struct zxmd_md_Organization_s* zxmd_md_SPSSODescriptor_POP_Organization(struct zxmd_md_SPSSODescriptor_s* x)
{
  struct zxmd_md_Organization_s* y;
  if (!x) return 0;
  y = x->Organization;
  if (y)
    x->Organization = (struct zxmd_md_Organization_s*)y->gg.g.n;
  return y;
}

/* FUNC(zxmd_md_SPSSODescriptor_PUSH_Organization) */

void zxmd_md_SPSSODescriptor_PUSH_Organization(struct zxmd_md_SPSSODescriptor_s* x, struct zxmd_md_Organization_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Organization->gg.g;
  x->Organization = z;
}

/* FUNC(zxmd_md_SPSSODescriptor_REV_Organization) */

void zxmd_md_SPSSODescriptor_REV_Organization(struct zxmd_md_SPSSODescriptor_s* x)
{
  struct zxmd_md_Organization_s* nxt;
  struct zxmd_md_Organization_s* y;
  if (!x) return;
  y = x->Organization;
  if (!y) return;
  x->Organization = 0;
  while (y) {
    nxt = (struct zxmd_md_Organization_s*)y->gg.g.n;
    y->gg.g.n = &x->Organization->gg.g;
    x->Organization = y;
    y = nxt;
  }
}

/* FUNC(zxmd_md_SPSSODescriptor_PUT_Organization) */

void zxmd_md_SPSSODescriptor_PUT_Organization(struct zxmd_md_SPSSODescriptor_s* x, int n, struct zxmd_md_Organization_s* z)
{
  struct zxmd_md_Organization_s* y;
  if (!x || !z) return;
  y = x->Organization;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Organization = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zxmd_md_Organization_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zxmd_md_SPSSODescriptor_ADD_Organization) */

void zxmd_md_SPSSODescriptor_ADD_Organization(struct zxmd_md_SPSSODescriptor_s* x, int n, struct zxmd_md_Organization_s* z)
{
  struct zxmd_md_Organization_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->Organization->gg.g;
    x->Organization = z;
    return;
  case -1:
    y = x->Organization;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zxmd_md_Organization_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Organization; n > 1 && y; --n, y = (struct zxmd_md_Organization_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zxmd_md_SPSSODescriptor_DEL_Organization) */

void zxmd_md_SPSSODescriptor_DEL_Organization(struct zxmd_md_SPSSODescriptor_s* x, int n)
{
  struct zxmd_md_Organization_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Organization = (struct zxmd_md_Organization_s*)x->Organization->gg.g.n;
    return;
  case -1:
    y = (struct zxmd_md_Organization_s*)x->Organization;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zxmd_md_Organization_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Organization; n > 1 && y->gg.g.n; --n, y = (struct zxmd_md_Organization_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zxmd_md_SPSSODescriptor_NUM_ContactPerson) */

int zxmd_md_SPSSODescriptor_NUM_ContactPerson(struct zxmd_md_SPSSODescriptor_s* x)
{
  struct zxmd_md_ContactPerson_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->ContactPerson; y; ++n, y = (struct zxmd_md_ContactPerson_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zxmd_md_SPSSODescriptor_GET_ContactPerson) */

struct zxmd_md_ContactPerson_s* zxmd_md_SPSSODescriptor_GET_ContactPerson(struct zxmd_md_SPSSODescriptor_s* x, int n)
{
  struct zxmd_md_ContactPerson_s* y;
  if (!x) return 0;
  for (y = x->ContactPerson; n>=0 && y; --n, y = (struct zxmd_md_ContactPerson_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zxmd_md_SPSSODescriptor_POP_ContactPerson) */

struct zxmd_md_ContactPerson_s* zxmd_md_SPSSODescriptor_POP_ContactPerson(struct zxmd_md_SPSSODescriptor_s* x)
{
  struct zxmd_md_ContactPerson_s* y;
  if (!x) return 0;
  y = x->ContactPerson;
  if (y)
    x->ContactPerson = (struct zxmd_md_ContactPerson_s*)y->gg.g.n;
  return y;
}

/* FUNC(zxmd_md_SPSSODescriptor_PUSH_ContactPerson) */

void zxmd_md_SPSSODescriptor_PUSH_ContactPerson(struct zxmd_md_SPSSODescriptor_s* x, struct zxmd_md_ContactPerson_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->ContactPerson->gg.g;
  x->ContactPerson = z;
}

/* FUNC(zxmd_md_SPSSODescriptor_REV_ContactPerson) */

void zxmd_md_SPSSODescriptor_REV_ContactPerson(struct zxmd_md_SPSSODescriptor_s* x)
{
  struct zxmd_md_ContactPerson_s* nxt;
  struct zxmd_md_ContactPerson_s* y;
  if (!x) return;
  y = x->ContactPerson;
  if (!y) return;
  x->ContactPerson = 0;
  while (y) {
    nxt = (struct zxmd_md_ContactPerson_s*)y->gg.g.n;
    y->gg.g.n = &x->ContactPerson->gg.g;
    x->ContactPerson = y;
    y = nxt;
  }
}

/* FUNC(zxmd_md_SPSSODescriptor_PUT_ContactPerson) */

void zxmd_md_SPSSODescriptor_PUT_ContactPerson(struct zxmd_md_SPSSODescriptor_s* x, int n, struct zxmd_md_ContactPerson_s* z)
{
  struct zxmd_md_ContactPerson_s* y;
  if (!x || !z) return;
  y = x->ContactPerson;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->ContactPerson = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zxmd_md_ContactPerson_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zxmd_md_SPSSODescriptor_ADD_ContactPerson) */

void zxmd_md_SPSSODescriptor_ADD_ContactPerson(struct zxmd_md_SPSSODescriptor_s* x, int n, struct zxmd_md_ContactPerson_s* z)
{
  struct zxmd_md_ContactPerson_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->ContactPerson->gg.g;
    x->ContactPerson = z;
    return;
  case -1:
    y = x->ContactPerson;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zxmd_md_ContactPerson_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->ContactPerson; n > 1 && y; --n, y = (struct zxmd_md_ContactPerson_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zxmd_md_SPSSODescriptor_DEL_ContactPerson) */

void zxmd_md_SPSSODescriptor_DEL_ContactPerson(struct zxmd_md_SPSSODescriptor_s* x, int n)
{
  struct zxmd_md_ContactPerson_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->ContactPerson = (struct zxmd_md_ContactPerson_s*)x->ContactPerson->gg.g.n;
    return;
  case -1:
    y = (struct zxmd_md_ContactPerson_s*)x->ContactPerson;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zxmd_md_ContactPerson_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->ContactPerson; n > 1 && y->gg.g.n; --n, y = (struct zxmd_md_ContactPerson_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

/* FUNC(zxmd_md_SPSSODescriptor_GET_ID) */
struct zx_str_s* zxmd_md_SPSSODescriptor_GET_ID(struct zxmd_md_SPSSODescriptor_s* x) { return x->ID; }
/* FUNC(zxmd_md_SPSSODescriptor_PUT_ID) */
void zxmd_md_SPSSODescriptor_PUT_ID(struct zxmd_md_SPSSODescriptor_s* x, struct zx_str_s* y) { x->ID = y; }
/* FUNC(zxmd_md_SPSSODescriptor_GET_validUntil) */
struct zx_str_s* zxmd_md_SPSSODescriptor_GET_validUntil(struct zxmd_md_SPSSODescriptor_s* x) { return x->validUntil; }
/* FUNC(zxmd_md_SPSSODescriptor_PUT_validUntil) */
void zxmd_md_SPSSODescriptor_PUT_validUntil(struct zxmd_md_SPSSODescriptor_s* x, struct zx_str_s* y) { x->validUntil = y; }
/* FUNC(zxmd_md_SPSSODescriptor_GET_cacheDuration) */
struct zx_str_s* zxmd_md_SPSSODescriptor_GET_cacheDuration(struct zxmd_md_SPSSODescriptor_s* x) { return x->cacheDuration; }
/* FUNC(zxmd_md_SPSSODescriptor_PUT_cacheDuration) */
void zxmd_md_SPSSODescriptor_PUT_cacheDuration(struct zxmd_md_SPSSODescriptor_s* x, struct zx_str_s* y) { x->cacheDuration = y; }
/* FUNC(zxmd_md_SPSSODescriptor_GET_protocolSupportEnumeration) */
struct zx_str_s* zxmd_md_SPSSODescriptor_GET_protocolSupportEnumeration(struct zxmd_md_SPSSODescriptor_s* x) { return x->protocolSupportEnumeration; }
/* FUNC(zxmd_md_SPSSODescriptor_PUT_protocolSupportEnumeration) */
void zxmd_md_SPSSODescriptor_PUT_protocolSupportEnumeration(struct zxmd_md_SPSSODescriptor_s* x, struct zx_str_s* y) { x->protocolSupportEnumeration = y; }
/* FUNC(zxmd_md_SPSSODescriptor_GET_errorURL) */
struct zx_str_s* zxmd_md_SPSSODescriptor_GET_errorURL(struct zxmd_md_SPSSODescriptor_s* x) { return x->errorURL; }
/* FUNC(zxmd_md_SPSSODescriptor_PUT_errorURL) */
void zxmd_md_SPSSODescriptor_PUT_errorURL(struct zxmd_md_SPSSODescriptor_s* x, struct zx_str_s* y) { x->errorURL = y; }


/* FUNC(zxmd_md_SPSSODescriptor_NUM_ArtifactResolutionService) */

int zxmd_md_SPSSODescriptor_NUM_ArtifactResolutionService(struct zxmd_md_SPSSODescriptor_s* x)
{
  struct zxmd_md_ArtifactResolutionService_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->ArtifactResolutionService; y; ++n, y = (struct zxmd_md_ArtifactResolutionService_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zxmd_md_SPSSODescriptor_GET_ArtifactResolutionService) */

struct zxmd_md_ArtifactResolutionService_s* zxmd_md_SPSSODescriptor_GET_ArtifactResolutionService(struct zxmd_md_SPSSODescriptor_s* x, int n)
{
  struct zxmd_md_ArtifactResolutionService_s* y;
  if (!x) return 0;
  for (y = x->ArtifactResolutionService; n>=0 && y; --n, y = (struct zxmd_md_ArtifactResolutionService_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zxmd_md_SPSSODescriptor_POP_ArtifactResolutionService) */

struct zxmd_md_ArtifactResolutionService_s* zxmd_md_SPSSODescriptor_POP_ArtifactResolutionService(struct zxmd_md_SPSSODescriptor_s* x)
{
  struct zxmd_md_ArtifactResolutionService_s* y;
  if (!x) return 0;
  y = x->ArtifactResolutionService;
  if (y)
    x->ArtifactResolutionService = (struct zxmd_md_ArtifactResolutionService_s*)y->gg.g.n;
  return y;
}

/* FUNC(zxmd_md_SPSSODescriptor_PUSH_ArtifactResolutionService) */

void zxmd_md_SPSSODescriptor_PUSH_ArtifactResolutionService(struct zxmd_md_SPSSODescriptor_s* x, struct zxmd_md_ArtifactResolutionService_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->ArtifactResolutionService->gg.g;
  x->ArtifactResolutionService = z;
}

/* FUNC(zxmd_md_SPSSODescriptor_REV_ArtifactResolutionService) */

void zxmd_md_SPSSODescriptor_REV_ArtifactResolutionService(struct zxmd_md_SPSSODescriptor_s* x)
{
  struct zxmd_md_ArtifactResolutionService_s* nxt;
  struct zxmd_md_ArtifactResolutionService_s* y;
  if (!x) return;
  y = x->ArtifactResolutionService;
  if (!y) return;
  x->ArtifactResolutionService = 0;
  while (y) {
    nxt = (struct zxmd_md_ArtifactResolutionService_s*)y->gg.g.n;
    y->gg.g.n = &x->ArtifactResolutionService->gg.g;
    x->ArtifactResolutionService = y;
    y = nxt;
  }
}

/* FUNC(zxmd_md_SPSSODescriptor_PUT_ArtifactResolutionService) */

void zxmd_md_SPSSODescriptor_PUT_ArtifactResolutionService(struct zxmd_md_SPSSODescriptor_s* x, int n, struct zxmd_md_ArtifactResolutionService_s* z)
{
  struct zxmd_md_ArtifactResolutionService_s* y;
  if (!x || !z) return;
  y = x->ArtifactResolutionService;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->ArtifactResolutionService = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zxmd_md_ArtifactResolutionService_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zxmd_md_SPSSODescriptor_ADD_ArtifactResolutionService) */

void zxmd_md_SPSSODescriptor_ADD_ArtifactResolutionService(struct zxmd_md_SPSSODescriptor_s* x, int n, struct zxmd_md_ArtifactResolutionService_s* z)
{
  struct zxmd_md_ArtifactResolutionService_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->ArtifactResolutionService->gg.g;
    x->ArtifactResolutionService = z;
    return;
  case -1:
    y = x->ArtifactResolutionService;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zxmd_md_ArtifactResolutionService_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->ArtifactResolutionService; n > 1 && y; --n, y = (struct zxmd_md_ArtifactResolutionService_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zxmd_md_SPSSODescriptor_DEL_ArtifactResolutionService) */

void zxmd_md_SPSSODescriptor_DEL_ArtifactResolutionService(struct zxmd_md_SPSSODescriptor_s* x, int n)
{
  struct zxmd_md_ArtifactResolutionService_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->ArtifactResolutionService = (struct zxmd_md_ArtifactResolutionService_s*)x->ArtifactResolutionService->gg.g.n;
    return;
  case -1:
    y = (struct zxmd_md_ArtifactResolutionService_s*)x->ArtifactResolutionService;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zxmd_md_ArtifactResolutionService_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->ArtifactResolutionService; n > 1 && y->gg.g.n; --n, y = (struct zxmd_md_ArtifactResolutionService_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zxmd_md_SPSSODescriptor_NUM_SingleLogoutService) */

int zxmd_md_SPSSODescriptor_NUM_SingleLogoutService(struct zxmd_md_SPSSODescriptor_s* x)
{
  struct zxmd_md_SingleLogoutService_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->SingleLogoutService; y; ++n, y = (struct zxmd_md_SingleLogoutService_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zxmd_md_SPSSODescriptor_GET_SingleLogoutService) */

struct zxmd_md_SingleLogoutService_s* zxmd_md_SPSSODescriptor_GET_SingleLogoutService(struct zxmd_md_SPSSODescriptor_s* x, int n)
{
  struct zxmd_md_SingleLogoutService_s* y;
  if (!x) return 0;
  for (y = x->SingleLogoutService; n>=0 && y; --n, y = (struct zxmd_md_SingleLogoutService_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zxmd_md_SPSSODescriptor_POP_SingleLogoutService) */

struct zxmd_md_SingleLogoutService_s* zxmd_md_SPSSODescriptor_POP_SingleLogoutService(struct zxmd_md_SPSSODescriptor_s* x)
{
  struct zxmd_md_SingleLogoutService_s* y;
  if (!x) return 0;
  y = x->SingleLogoutService;
  if (y)
    x->SingleLogoutService = (struct zxmd_md_SingleLogoutService_s*)y->gg.g.n;
  return y;
}

/* FUNC(zxmd_md_SPSSODescriptor_PUSH_SingleLogoutService) */

void zxmd_md_SPSSODescriptor_PUSH_SingleLogoutService(struct zxmd_md_SPSSODescriptor_s* x, struct zxmd_md_SingleLogoutService_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->SingleLogoutService->gg.g;
  x->SingleLogoutService = z;
}

/* FUNC(zxmd_md_SPSSODescriptor_REV_SingleLogoutService) */

void zxmd_md_SPSSODescriptor_REV_SingleLogoutService(struct zxmd_md_SPSSODescriptor_s* x)
{
  struct zxmd_md_SingleLogoutService_s* nxt;
  struct zxmd_md_SingleLogoutService_s* y;
  if (!x) return;
  y = x->SingleLogoutService;
  if (!y) return;
  x->SingleLogoutService = 0;
  while (y) {
    nxt = (struct zxmd_md_SingleLogoutService_s*)y->gg.g.n;
    y->gg.g.n = &x->SingleLogoutService->gg.g;
    x->SingleLogoutService = y;
    y = nxt;
  }
}

/* FUNC(zxmd_md_SPSSODescriptor_PUT_SingleLogoutService) */

void zxmd_md_SPSSODescriptor_PUT_SingleLogoutService(struct zxmd_md_SPSSODescriptor_s* x, int n, struct zxmd_md_SingleLogoutService_s* z)
{
  struct zxmd_md_SingleLogoutService_s* y;
  if (!x || !z) return;
  y = x->SingleLogoutService;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->SingleLogoutService = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zxmd_md_SingleLogoutService_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zxmd_md_SPSSODescriptor_ADD_SingleLogoutService) */

void zxmd_md_SPSSODescriptor_ADD_SingleLogoutService(struct zxmd_md_SPSSODescriptor_s* x, int n, struct zxmd_md_SingleLogoutService_s* z)
{
  struct zxmd_md_SingleLogoutService_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->SingleLogoutService->gg.g;
    x->SingleLogoutService = z;
    return;
  case -1:
    y = x->SingleLogoutService;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zxmd_md_SingleLogoutService_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->SingleLogoutService; n > 1 && y; --n, y = (struct zxmd_md_SingleLogoutService_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zxmd_md_SPSSODescriptor_DEL_SingleLogoutService) */

void zxmd_md_SPSSODescriptor_DEL_SingleLogoutService(struct zxmd_md_SPSSODescriptor_s* x, int n)
{
  struct zxmd_md_SingleLogoutService_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->SingleLogoutService = (struct zxmd_md_SingleLogoutService_s*)x->SingleLogoutService->gg.g.n;
    return;
  case -1:
    y = (struct zxmd_md_SingleLogoutService_s*)x->SingleLogoutService;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zxmd_md_SingleLogoutService_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->SingleLogoutService; n > 1 && y->gg.g.n; --n, y = (struct zxmd_md_SingleLogoutService_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zxmd_md_SPSSODescriptor_NUM_ManageNameIDService) */

int zxmd_md_SPSSODescriptor_NUM_ManageNameIDService(struct zxmd_md_SPSSODescriptor_s* x)
{
  struct zxmd_md_ManageNameIDService_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->ManageNameIDService; y; ++n, y = (struct zxmd_md_ManageNameIDService_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zxmd_md_SPSSODescriptor_GET_ManageNameIDService) */

struct zxmd_md_ManageNameIDService_s* zxmd_md_SPSSODescriptor_GET_ManageNameIDService(struct zxmd_md_SPSSODescriptor_s* x, int n)
{
  struct zxmd_md_ManageNameIDService_s* y;
  if (!x) return 0;
  for (y = x->ManageNameIDService; n>=0 && y; --n, y = (struct zxmd_md_ManageNameIDService_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zxmd_md_SPSSODescriptor_POP_ManageNameIDService) */

struct zxmd_md_ManageNameIDService_s* zxmd_md_SPSSODescriptor_POP_ManageNameIDService(struct zxmd_md_SPSSODescriptor_s* x)
{
  struct zxmd_md_ManageNameIDService_s* y;
  if (!x) return 0;
  y = x->ManageNameIDService;
  if (y)
    x->ManageNameIDService = (struct zxmd_md_ManageNameIDService_s*)y->gg.g.n;
  return y;
}

/* FUNC(zxmd_md_SPSSODescriptor_PUSH_ManageNameIDService) */

void zxmd_md_SPSSODescriptor_PUSH_ManageNameIDService(struct zxmd_md_SPSSODescriptor_s* x, struct zxmd_md_ManageNameIDService_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->ManageNameIDService->gg.g;
  x->ManageNameIDService = z;
}

/* FUNC(zxmd_md_SPSSODescriptor_REV_ManageNameIDService) */

void zxmd_md_SPSSODescriptor_REV_ManageNameIDService(struct zxmd_md_SPSSODescriptor_s* x)
{
  struct zxmd_md_ManageNameIDService_s* nxt;
  struct zxmd_md_ManageNameIDService_s* y;
  if (!x) return;
  y = x->ManageNameIDService;
  if (!y) return;
  x->ManageNameIDService = 0;
  while (y) {
    nxt = (struct zxmd_md_ManageNameIDService_s*)y->gg.g.n;
    y->gg.g.n = &x->ManageNameIDService->gg.g;
    x->ManageNameIDService = y;
    y = nxt;
  }
}

/* FUNC(zxmd_md_SPSSODescriptor_PUT_ManageNameIDService) */

void zxmd_md_SPSSODescriptor_PUT_ManageNameIDService(struct zxmd_md_SPSSODescriptor_s* x, int n, struct zxmd_md_ManageNameIDService_s* z)
{
  struct zxmd_md_ManageNameIDService_s* y;
  if (!x || !z) return;
  y = x->ManageNameIDService;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->ManageNameIDService = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zxmd_md_ManageNameIDService_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zxmd_md_SPSSODescriptor_ADD_ManageNameIDService) */

void zxmd_md_SPSSODescriptor_ADD_ManageNameIDService(struct zxmd_md_SPSSODescriptor_s* x, int n, struct zxmd_md_ManageNameIDService_s* z)
{
  struct zxmd_md_ManageNameIDService_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->ManageNameIDService->gg.g;
    x->ManageNameIDService = z;
    return;
  case -1:
    y = x->ManageNameIDService;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zxmd_md_ManageNameIDService_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->ManageNameIDService; n > 1 && y; --n, y = (struct zxmd_md_ManageNameIDService_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zxmd_md_SPSSODescriptor_DEL_ManageNameIDService) */

void zxmd_md_SPSSODescriptor_DEL_ManageNameIDService(struct zxmd_md_SPSSODescriptor_s* x, int n)
{
  struct zxmd_md_ManageNameIDService_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->ManageNameIDService = (struct zxmd_md_ManageNameIDService_s*)x->ManageNameIDService->gg.g.n;
    return;
  case -1:
    y = (struct zxmd_md_ManageNameIDService_s*)x->ManageNameIDService;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zxmd_md_ManageNameIDService_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->ManageNameIDService; n > 1 && y->gg.g.n; --n, y = (struct zxmd_md_ManageNameIDService_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zxmd_md_SPSSODescriptor_NUM_NameIDFormat) */

int zxmd_md_SPSSODescriptor_NUM_NameIDFormat(struct zxmd_md_SPSSODescriptor_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->NameIDFormat; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zxmd_md_SPSSODescriptor_GET_NameIDFormat) */

struct zx_elem_s* zxmd_md_SPSSODescriptor_GET_NameIDFormat(struct zxmd_md_SPSSODescriptor_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->NameIDFormat; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zxmd_md_SPSSODescriptor_POP_NameIDFormat) */

struct zx_elem_s* zxmd_md_SPSSODescriptor_POP_NameIDFormat(struct zxmd_md_SPSSODescriptor_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->NameIDFormat;
  if (y)
    x->NameIDFormat = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zxmd_md_SPSSODescriptor_PUSH_NameIDFormat) */

void zxmd_md_SPSSODescriptor_PUSH_NameIDFormat(struct zxmd_md_SPSSODescriptor_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->NameIDFormat->g;
  x->NameIDFormat = z;
}

/* FUNC(zxmd_md_SPSSODescriptor_REV_NameIDFormat) */

void zxmd_md_SPSSODescriptor_REV_NameIDFormat(struct zxmd_md_SPSSODescriptor_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->NameIDFormat;
  if (!y) return;
  x->NameIDFormat = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->NameIDFormat->g;
    x->NameIDFormat = y;
    y = nxt;
  }
}

/* FUNC(zxmd_md_SPSSODescriptor_PUT_NameIDFormat) */

void zxmd_md_SPSSODescriptor_PUT_NameIDFormat(struct zxmd_md_SPSSODescriptor_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->NameIDFormat;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->NameIDFormat = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zxmd_md_SPSSODescriptor_ADD_NameIDFormat) */

void zxmd_md_SPSSODescriptor_ADD_NameIDFormat(struct zxmd_md_SPSSODescriptor_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->NameIDFormat->g;
    x->NameIDFormat = z;
    return;
  case -1:
    y = x->NameIDFormat;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->NameIDFormat; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zxmd_md_SPSSODescriptor_DEL_NameIDFormat) */

void zxmd_md_SPSSODescriptor_DEL_NameIDFormat(struct zxmd_md_SPSSODescriptor_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->NameIDFormat = (struct zx_elem_s*)x->NameIDFormat->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->NameIDFormat;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->NameIDFormat; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}



/* FUNC(zxmd_md_SPSSODescriptor_NUM_AssertionConsumerService) */

int zxmd_md_SPSSODescriptor_NUM_AssertionConsumerService(struct zxmd_md_SPSSODescriptor_s* x)
{
  struct zxmd_md_AssertionConsumerService_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->AssertionConsumerService; y; ++n, y = (struct zxmd_md_AssertionConsumerService_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zxmd_md_SPSSODescriptor_GET_AssertionConsumerService) */

struct zxmd_md_AssertionConsumerService_s* zxmd_md_SPSSODescriptor_GET_AssertionConsumerService(struct zxmd_md_SPSSODescriptor_s* x, int n)
{
  struct zxmd_md_AssertionConsumerService_s* y;
  if (!x) return 0;
  for (y = x->AssertionConsumerService; n>=0 && y; --n, y = (struct zxmd_md_AssertionConsumerService_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zxmd_md_SPSSODescriptor_POP_AssertionConsumerService) */

struct zxmd_md_AssertionConsumerService_s* zxmd_md_SPSSODescriptor_POP_AssertionConsumerService(struct zxmd_md_SPSSODescriptor_s* x)
{
  struct zxmd_md_AssertionConsumerService_s* y;
  if (!x) return 0;
  y = x->AssertionConsumerService;
  if (y)
    x->AssertionConsumerService = (struct zxmd_md_AssertionConsumerService_s*)y->gg.g.n;
  return y;
}

/* FUNC(zxmd_md_SPSSODescriptor_PUSH_AssertionConsumerService) */

void zxmd_md_SPSSODescriptor_PUSH_AssertionConsumerService(struct zxmd_md_SPSSODescriptor_s* x, struct zxmd_md_AssertionConsumerService_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->AssertionConsumerService->gg.g;
  x->AssertionConsumerService = z;
}

/* FUNC(zxmd_md_SPSSODescriptor_REV_AssertionConsumerService) */

void zxmd_md_SPSSODescriptor_REV_AssertionConsumerService(struct zxmd_md_SPSSODescriptor_s* x)
{
  struct zxmd_md_AssertionConsumerService_s* nxt;
  struct zxmd_md_AssertionConsumerService_s* y;
  if (!x) return;
  y = x->AssertionConsumerService;
  if (!y) return;
  x->AssertionConsumerService = 0;
  while (y) {
    nxt = (struct zxmd_md_AssertionConsumerService_s*)y->gg.g.n;
    y->gg.g.n = &x->AssertionConsumerService->gg.g;
    x->AssertionConsumerService = y;
    y = nxt;
  }
}

/* FUNC(zxmd_md_SPSSODescriptor_PUT_AssertionConsumerService) */

void zxmd_md_SPSSODescriptor_PUT_AssertionConsumerService(struct zxmd_md_SPSSODescriptor_s* x, int n, struct zxmd_md_AssertionConsumerService_s* z)
{
  struct zxmd_md_AssertionConsumerService_s* y;
  if (!x || !z) return;
  y = x->AssertionConsumerService;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->AssertionConsumerService = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zxmd_md_AssertionConsumerService_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zxmd_md_SPSSODescriptor_ADD_AssertionConsumerService) */

void zxmd_md_SPSSODescriptor_ADD_AssertionConsumerService(struct zxmd_md_SPSSODescriptor_s* x, int n, struct zxmd_md_AssertionConsumerService_s* z)
{
  struct zxmd_md_AssertionConsumerService_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->AssertionConsumerService->gg.g;
    x->AssertionConsumerService = z;
    return;
  case -1:
    y = x->AssertionConsumerService;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zxmd_md_AssertionConsumerService_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->AssertionConsumerService; n > 1 && y; --n, y = (struct zxmd_md_AssertionConsumerService_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zxmd_md_SPSSODescriptor_DEL_AssertionConsumerService) */

void zxmd_md_SPSSODescriptor_DEL_AssertionConsumerService(struct zxmd_md_SPSSODescriptor_s* x, int n)
{
  struct zxmd_md_AssertionConsumerService_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->AssertionConsumerService = (struct zxmd_md_AssertionConsumerService_s*)x->AssertionConsumerService->gg.g.n;
    return;
  case -1:
    y = (struct zxmd_md_AssertionConsumerService_s*)x->AssertionConsumerService;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zxmd_md_AssertionConsumerService_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->AssertionConsumerService; n > 1 && y->gg.g.n; --n, y = (struct zxmd_md_AssertionConsumerService_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zxmd_md_SPSSODescriptor_NUM_AttributeConsumingService) */

int zxmd_md_SPSSODescriptor_NUM_AttributeConsumingService(struct zxmd_md_SPSSODescriptor_s* x)
{
  struct zxmd_md_AttributeConsumingService_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->AttributeConsumingService; y; ++n, y = (struct zxmd_md_AttributeConsumingService_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zxmd_md_SPSSODescriptor_GET_AttributeConsumingService) */

struct zxmd_md_AttributeConsumingService_s* zxmd_md_SPSSODescriptor_GET_AttributeConsumingService(struct zxmd_md_SPSSODescriptor_s* x, int n)
{
  struct zxmd_md_AttributeConsumingService_s* y;
  if (!x) return 0;
  for (y = x->AttributeConsumingService; n>=0 && y; --n, y = (struct zxmd_md_AttributeConsumingService_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zxmd_md_SPSSODescriptor_POP_AttributeConsumingService) */

struct zxmd_md_AttributeConsumingService_s* zxmd_md_SPSSODescriptor_POP_AttributeConsumingService(struct zxmd_md_SPSSODescriptor_s* x)
{
  struct zxmd_md_AttributeConsumingService_s* y;
  if (!x) return 0;
  y = x->AttributeConsumingService;
  if (y)
    x->AttributeConsumingService = (struct zxmd_md_AttributeConsumingService_s*)y->gg.g.n;
  return y;
}

/* FUNC(zxmd_md_SPSSODescriptor_PUSH_AttributeConsumingService) */

void zxmd_md_SPSSODescriptor_PUSH_AttributeConsumingService(struct zxmd_md_SPSSODescriptor_s* x, struct zxmd_md_AttributeConsumingService_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->AttributeConsumingService->gg.g;
  x->AttributeConsumingService = z;
}

/* FUNC(zxmd_md_SPSSODescriptor_REV_AttributeConsumingService) */

void zxmd_md_SPSSODescriptor_REV_AttributeConsumingService(struct zxmd_md_SPSSODescriptor_s* x)
{
  struct zxmd_md_AttributeConsumingService_s* nxt;
  struct zxmd_md_AttributeConsumingService_s* y;
  if (!x) return;
  y = x->AttributeConsumingService;
  if (!y) return;
  x->AttributeConsumingService = 0;
  while (y) {
    nxt = (struct zxmd_md_AttributeConsumingService_s*)y->gg.g.n;
    y->gg.g.n = &x->AttributeConsumingService->gg.g;
    x->AttributeConsumingService = y;
    y = nxt;
  }
}

/* FUNC(zxmd_md_SPSSODescriptor_PUT_AttributeConsumingService) */

void zxmd_md_SPSSODescriptor_PUT_AttributeConsumingService(struct zxmd_md_SPSSODescriptor_s* x, int n, struct zxmd_md_AttributeConsumingService_s* z)
{
  struct zxmd_md_AttributeConsumingService_s* y;
  if (!x || !z) return;
  y = x->AttributeConsumingService;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->AttributeConsumingService = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zxmd_md_AttributeConsumingService_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zxmd_md_SPSSODescriptor_ADD_AttributeConsumingService) */

void zxmd_md_SPSSODescriptor_ADD_AttributeConsumingService(struct zxmd_md_SPSSODescriptor_s* x, int n, struct zxmd_md_AttributeConsumingService_s* z)
{
  struct zxmd_md_AttributeConsumingService_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->AttributeConsumingService->gg.g;
    x->AttributeConsumingService = z;
    return;
  case -1:
    y = x->AttributeConsumingService;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zxmd_md_AttributeConsumingService_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->AttributeConsumingService; n > 1 && y; --n, y = (struct zxmd_md_AttributeConsumingService_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zxmd_md_SPSSODescriptor_DEL_AttributeConsumingService) */

void zxmd_md_SPSSODescriptor_DEL_AttributeConsumingService(struct zxmd_md_SPSSODescriptor_s* x, int n)
{
  struct zxmd_md_AttributeConsumingService_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->AttributeConsumingService = (struct zxmd_md_AttributeConsumingService_s*)x->AttributeConsumingService->gg.g.n;
    return;
  case -1:
    y = (struct zxmd_md_AttributeConsumingService_s*)x->AttributeConsumingService;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zxmd_md_AttributeConsumingService_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->AttributeConsumingService; n > 1 && y->gg.g.n; --n, y = (struct zxmd_md_AttributeConsumingService_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

/* FUNC(zxmd_md_SPSSODescriptor_GET_AuthnRequestsSigned) */
struct zx_str_s* zxmd_md_SPSSODescriptor_GET_AuthnRequestsSigned(struct zxmd_md_SPSSODescriptor_s* x) { return x->AuthnRequestsSigned; }
/* FUNC(zxmd_md_SPSSODescriptor_PUT_AuthnRequestsSigned) */
void zxmd_md_SPSSODescriptor_PUT_AuthnRequestsSigned(struct zxmd_md_SPSSODescriptor_s* x, struct zx_str_s* y) { x->AuthnRequestsSigned = y; }
/* FUNC(zxmd_md_SPSSODescriptor_GET_WantAssertionsSigned) */
struct zx_str_s* zxmd_md_SPSSODescriptor_GET_WantAssertionsSigned(struct zxmd_md_SPSSODescriptor_s* x) { return x->WantAssertionsSigned; }
/* FUNC(zxmd_md_SPSSODescriptor_PUT_WantAssertionsSigned) */
void zxmd_md_SPSSODescriptor_PUT_WantAssertionsSigned(struct zxmd_md_SPSSODescriptor_s* x, struct zx_str_s* y) { x->WantAssertionsSigned = y; }





/* FUNC(zxmd_md_ServiceDescription_GET_lang) */
struct zx_str_s* zxmd_md_ServiceDescription_GET_lang(struct zxmd_md_ServiceDescription_s* x) { return x->lang; }
/* FUNC(zxmd_md_ServiceDescription_PUT_lang) */
void zxmd_md_ServiceDescription_PUT_lang(struct zxmd_md_ServiceDescription_s* x, struct zx_str_s* y) { x->lang = y; }





/* FUNC(zxmd_md_ServiceName_GET_lang) */
struct zx_str_s* zxmd_md_ServiceName_GET_lang(struct zxmd_md_ServiceName_s* x) { return x->lang; }
/* FUNC(zxmd_md_ServiceName_PUT_lang) */
void zxmd_md_ServiceName_PUT_lang(struct zxmd_md_ServiceName_s* x, struct zx_str_s* y) { x->lang = y; }





/* FUNC(zxmd_md_SingleLogoutService_GET_Binding) */
struct zx_str_s* zxmd_md_SingleLogoutService_GET_Binding(struct zxmd_md_SingleLogoutService_s* x) { return x->Binding; }
/* FUNC(zxmd_md_SingleLogoutService_PUT_Binding) */
void zxmd_md_SingleLogoutService_PUT_Binding(struct zxmd_md_SingleLogoutService_s* x, struct zx_str_s* y) { x->Binding = y; }
/* FUNC(zxmd_md_SingleLogoutService_GET_Location) */
struct zx_str_s* zxmd_md_SingleLogoutService_GET_Location(struct zxmd_md_SingleLogoutService_s* x) { return x->Location; }
/* FUNC(zxmd_md_SingleLogoutService_PUT_Location) */
void zxmd_md_SingleLogoutService_PUT_Location(struct zxmd_md_SingleLogoutService_s* x, struct zx_str_s* y) { x->Location = y; }
/* FUNC(zxmd_md_SingleLogoutService_GET_ResponseLocation) */
struct zx_str_s* zxmd_md_SingleLogoutService_GET_ResponseLocation(struct zxmd_md_SingleLogoutService_s* x) { return x->ResponseLocation; }
/* FUNC(zxmd_md_SingleLogoutService_PUT_ResponseLocation) */
void zxmd_md_SingleLogoutService_PUT_ResponseLocation(struct zxmd_md_SingleLogoutService_s* x, struct zx_str_s* y) { x->ResponseLocation = y; }





/* FUNC(zxmd_md_SingleSignOnService_GET_Binding) */
struct zx_str_s* zxmd_md_SingleSignOnService_GET_Binding(struct zxmd_md_SingleSignOnService_s* x) { return x->Binding; }
/* FUNC(zxmd_md_SingleSignOnService_PUT_Binding) */
void zxmd_md_SingleSignOnService_PUT_Binding(struct zxmd_md_SingleSignOnService_s* x, struct zx_str_s* y) { x->Binding = y; }
/* FUNC(zxmd_md_SingleSignOnService_GET_Location) */
struct zx_str_s* zxmd_md_SingleSignOnService_GET_Location(struct zxmd_md_SingleSignOnService_s* x) { return x->Location; }
/* FUNC(zxmd_md_SingleSignOnService_PUT_Location) */
void zxmd_md_SingleSignOnService_PUT_Location(struct zxmd_md_SingleSignOnService_s* x, struct zx_str_s* y) { x->Location = y; }
/* FUNC(zxmd_md_SingleSignOnService_GET_ResponseLocation) */
struct zx_str_s* zxmd_md_SingleSignOnService_GET_ResponseLocation(struct zxmd_md_SingleSignOnService_s* x) { return x->ResponseLocation; }
/* FUNC(zxmd_md_SingleSignOnService_PUT_ResponseLocation) */
void zxmd_md_SingleSignOnService_PUT_ResponseLocation(struct zxmd_md_SingleSignOnService_s* x, struct zx_str_s* y) { x->ResponseLocation = y; }





/* FUNC(zxmd_sa_Action_GET_Namespace) */
struct zx_str_s* zxmd_sa_Action_GET_Namespace(struct zxmd_sa_Action_s* x) { return x->Namespace; }
/* FUNC(zxmd_sa_Action_PUT_Namespace) */
void zxmd_sa_Action_PUT_Namespace(struct zxmd_sa_Action_s* x, struct zx_str_s* y) { x->Namespace = y; }







/* FUNC(zxmd_sa_Advice_NUM_AssertionIDRef) */

int zxmd_sa_Advice_NUM_AssertionIDRef(struct zxmd_sa_Advice_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->AssertionIDRef; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zxmd_sa_Advice_GET_AssertionIDRef) */

struct zx_elem_s* zxmd_sa_Advice_GET_AssertionIDRef(struct zxmd_sa_Advice_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->AssertionIDRef; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zxmd_sa_Advice_POP_AssertionIDRef) */

struct zx_elem_s* zxmd_sa_Advice_POP_AssertionIDRef(struct zxmd_sa_Advice_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->AssertionIDRef;
  if (y)
    x->AssertionIDRef = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zxmd_sa_Advice_PUSH_AssertionIDRef) */

void zxmd_sa_Advice_PUSH_AssertionIDRef(struct zxmd_sa_Advice_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->AssertionIDRef->g;
  x->AssertionIDRef = z;
}

/* FUNC(zxmd_sa_Advice_REV_AssertionIDRef) */

void zxmd_sa_Advice_REV_AssertionIDRef(struct zxmd_sa_Advice_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->AssertionIDRef;
  if (!y) return;
  x->AssertionIDRef = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->AssertionIDRef->g;
    x->AssertionIDRef = y;
    y = nxt;
  }
}

/* FUNC(zxmd_sa_Advice_PUT_AssertionIDRef) */

void zxmd_sa_Advice_PUT_AssertionIDRef(struct zxmd_sa_Advice_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->AssertionIDRef;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->AssertionIDRef = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zxmd_sa_Advice_ADD_AssertionIDRef) */

void zxmd_sa_Advice_ADD_AssertionIDRef(struct zxmd_sa_Advice_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->AssertionIDRef->g;
    x->AssertionIDRef = z;
    return;
  case -1:
    y = x->AssertionIDRef;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->AssertionIDRef; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zxmd_sa_Advice_DEL_AssertionIDRef) */

void zxmd_sa_Advice_DEL_AssertionIDRef(struct zxmd_sa_Advice_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->AssertionIDRef = (struct zx_elem_s*)x->AssertionIDRef->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->AssertionIDRef;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->AssertionIDRef; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}



/* FUNC(zxmd_sa_Advice_NUM_AssertionURIRef) */

int zxmd_sa_Advice_NUM_AssertionURIRef(struct zxmd_sa_Advice_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->AssertionURIRef; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zxmd_sa_Advice_GET_AssertionURIRef) */

struct zx_elem_s* zxmd_sa_Advice_GET_AssertionURIRef(struct zxmd_sa_Advice_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->AssertionURIRef; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zxmd_sa_Advice_POP_AssertionURIRef) */

struct zx_elem_s* zxmd_sa_Advice_POP_AssertionURIRef(struct zxmd_sa_Advice_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->AssertionURIRef;
  if (y)
    x->AssertionURIRef = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zxmd_sa_Advice_PUSH_AssertionURIRef) */

void zxmd_sa_Advice_PUSH_AssertionURIRef(struct zxmd_sa_Advice_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->AssertionURIRef->g;
  x->AssertionURIRef = z;
}

/* FUNC(zxmd_sa_Advice_REV_AssertionURIRef) */

void zxmd_sa_Advice_REV_AssertionURIRef(struct zxmd_sa_Advice_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->AssertionURIRef;
  if (!y) return;
  x->AssertionURIRef = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->AssertionURIRef->g;
    x->AssertionURIRef = y;
    y = nxt;
  }
}

/* FUNC(zxmd_sa_Advice_PUT_AssertionURIRef) */

void zxmd_sa_Advice_PUT_AssertionURIRef(struct zxmd_sa_Advice_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->AssertionURIRef;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->AssertionURIRef = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zxmd_sa_Advice_ADD_AssertionURIRef) */

void zxmd_sa_Advice_ADD_AssertionURIRef(struct zxmd_sa_Advice_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->AssertionURIRef->g;
    x->AssertionURIRef = z;
    return;
  case -1:
    y = x->AssertionURIRef;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->AssertionURIRef; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zxmd_sa_Advice_DEL_AssertionURIRef) */

void zxmd_sa_Advice_DEL_AssertionURIRef(struct zxmd_sa_Advice_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->AssertionURIRef = (struct zx_elem_s*)x->AssertionURIRef->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->AssertionURIRef;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->AssertionURIRef; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}



/* FUNC(zxmd_sa_Advice_NUM_Assertion) */

int zxmd_sa_Advice_NUM_Assertion(struct zxmd_sa_Advice_s* x)
{
  struct zxmd_sa_Assertion_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Assertion; y; ++n, y = (struct zxmd_sa_Assertion_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zxmd_sa_Advice_GET_Assertion) */

struct zxmd_sa_Assertion_s* zxmd_sa_Advice_GET_Assertion(struct zxmd_sa_Advice_s* x, int n)
{
  struct zxmd_sa_Assertion_s* y;
  if (!x) return 0;
  for (y = x->Assertion; n>=0 && y; --n, y = (struct zxmd_sa_Assertion_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zxmd_sa_Advice_POP_Assertion) */

struct zxmd_sa_Assertion_s* zxmd_sa_Advice_POP_Assertion(struct zxmd_sa_Advice_s* x)
{
  struct zxmd_sa_Assertion_s* y;
  if (!x) return 0;
  y = x->Assertion;
  if (y)
    x->Assertion = (struct zxmd_sa_Assertion_s*)y->gg.g.n;
  return y;
}

/* FUNC(zxmd_sa_Advice_PUSH_Assertion) */

void zxmd_sa_Advice_PUSH_Assertion(struct zxmd_sa_Advice_s* x, struct zxmd_sa_Assertion_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Assertion->gg.g;
  x->Assertion = z;
}

/* FUNC(zxmd_sa_Advice_REV_Assertion) */

void zxmd_sa_Advice_REV_Assertion(struct zxmd_sa_Advice_s* x)
{
  struct zxmd_sa_Assertion_s* nxt;
  struct zxmd_sa_Assertion_s* y;
  if (!x) return;
  y = x->Assertion;
  if (!y) return;
  x->Assertion = 0;
  while (y) {
    nxt = (struct zxmd_sa_Assertion_s*)y->gg.g.n;
    y->gg.g.n = &x->Assertion->gg.g;
    x->Assertion = y;
    y = nxt;
  }
}

/* FUNC(zxmd_sa_Advice_PUT_Assertion) */

void zxmd_sa_Advice_PUT_Assertion(struct zxmd_sa_Advice_s* x, int n, struct zxmd_sa_Assertion_s* z)
{
  struct zxmd_sa_Assertion_s* y;
  if (!x || !z) return;
  y = x->Assertion;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Assertion = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zxmd_sa_Assertion_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zxmd_sa_Advice_ADD_Assertion) */

void zxmd_sa_Advice_ADD_Assertion(struct zxmd_sa_Advice_s* x, int n, struct zxmd_sa_Assertion_s* z)
{
  struct zxmd_sa_Assertion_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->Assertion->gg.g;
    x->Assertion = z;
    return;
  case -1:
    y = x->Assertion;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zxmd_sa_Assertion_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Assertion; n > 1 && y; --n, y = (struct zxmd_sa_Assertion_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zxmd_sa_Advice_DEL_Assertion) */

void zxmd_sa_Advice_DEL_Assertion(struct zxmd_sa_Advice_s* x, int n)
{
  struct zxmd_sa_Assertion_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Assertion = (struct zxmd_sa_Assertion_s*)x->Assertion->gg.g.n;
    return;
  case -1:
    y = (struct zxmd_sa_Assertion_s*)x->Assertion;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zxmd_sa_Assertion_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Assertion; n > 1 && y->gg.g.n; --n, y = (struct zxmd_sa_Assertion_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zxmd_sa_Advice_NUM_EncryptedAssertion) */

int zxmd_sa_Advice_NUM_EncryptedAssertion(struct zxmd_sa_Advice_s* x)
{
  struct zxmd_sa_EncryptedAssertion_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->EncryptedAssertion; y; ++n, y = (struct zxmd_sa_EncryptedAssertion_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zxmd_sa_Advice_GET_EncryptedAssertion) */

struct zxmd_sa_EncryptedAssertion_s* zxmd_sa_Advice_GET_EncryptedAssertion(struct zxmd_sa_Advice_s* x, int n)
{
  struct zxmd_sa_EncryptedAssertion_s* y;
  if (!x) return 0;
  for (y = x->EncryptedAssertion; n>=0 && y; --n, y = (struct zxmd_sa_EncryptedAssertion_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zxmd_sa_Advice_POP_EncryptedAssertion) */

struct zxmd_sa_EncryptedAssertion_s* zxmd_sa_Advice_POP_EncryptedAssertion(struct zxmd_sa_Advice_s* x)
{
  struct zxmd_sa_EncryptedAssertion_s* y;
  if (!x) return 0;
  y = x->EncryptedAssertion;
  if (y)
    x->EncryptedAssertion = (struct zxmd_sa_EncryptedAssertion_s*)y->gg.g.n;
  return y;
}

/* FUNC(zxmd_sa_Advice_PUSH_EncryptedAssertion) */

void zxmd_sa_Advice_PUSH_EncryptedAssertion(struct zxmd_sa_Advice_s* x, struct zxmd_sa_EncryptedAssertion_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->EncryptedAssertion->gg.g;
  x->EncryptedAssertion = z;
}

/* FUNC(zxmd_sa_Advice_REV_EncryptedAssertion) */

void zxmd_sa_Advice_REV_EncryptedAssertion(struct zxmd_sa_Advice_s* x)
{
  struct zxmd_sa_EncryptedAssertion_s* nxt;
  struct zxmd_sa_EncryptedAssertion_s* y;
  if (!x) return;
  y = x->EncryptedAssertion;
  if (!y) return;
  x->EncryptedAssertion = 0;
  while (y) {
    nxt = (struct zxmd_sa_EncryptedAssertion_s*)y->gg.g.n;
    y->gg.g.n = &x->EncryptedAssertion->gg.g;
    x->EncryptedAssertion = y;
    y = nxt;
  }
}

/* FUNC(zxmd_sa_Advice_PUT_EncryptedAssertion) */

void zxmd_sa_Advice_PUT_EncryptedAssertion(struct zxmd_sa_Advice_s* x, int n, struct zxmd_sa_EncryptedAssertion_s* z)
{
  struct zxmd_sa_EncryptedAssertion_s* y;
  if (!x || !z) return;
  y = x->EncryptedAssertion;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->EncryptedAssertion = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zxmd_sa_EncryptedAssertion_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zxmd_sa_Advice_ADD_EncryptedAssertion) */

void zxmd_sa_Advice_ADD_EncryptedAssertion(struct zxmd_sa_Advice_s* x, int n, struct zxmd_sa_EncryptedAssertion_s* z)
{
  struct zxmd_sa_EncryptedAssertion_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->EncryptedAssertion->gg.g;
    x->EncryptedAssertion = z;
    return;
  case -1:
    y = x->EncryptedAssertion;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zxmd_sa_EncryptedAssertion_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->EncryptedAssertion; n > 1 && y; --n, y = (struct zxmd_sa_EncryptedAssertion_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zxmd_sa_Advice_DEL_EncryptedAssertion) */

void zxmd_sa_Advice_DEL_EncryptedAssertion(struct zxmd_sa_Advice_s* x, int n)
{
  struct zxmd_sa_EncryptedAssertion_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->EncryptedAssertion = (struct zxmd_sa_EncryptedAssertion_s*)x->EncryptedAssertion->gg.g.n;
    return;
  case -1:
    y = (struct zxmd_sa_EncryptedAssertion_s*)x->EncryptedAssertion;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zxmd_sa_EncryptedAssertion_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->EncryptedAssertion; n > 1 && y->gg.g.n; --n, y = (struct zxmd_sa_EncryptedAssertion_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}








/* FUNC(zxmd_sa_Assertion_NUM_Issuer) */

int zxmd_sa_Assertion_NUM_Issuer(struct zxmd_sa_Assertion_s* x)
{
  struct zxmd_sa_Issuer_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Issuer; y; ++n, y = (struct zxmd_sa_Issuer_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zxmd_sa_Assertion_GET_Issuer) */

struct zxmd_sa_Issuer_s* zxmd_sa_Assertion_GET_Issuer(struct zxmd_sa_Assertion_s* x, int n)
{
  struct zxmd_sa_Issuer_s* y;
  if (!x) return 0;
  for (y = x->Issuer; n>=0 && y; --n, y = (struct zxmd_sa_Issuer_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zxmd_sa_Assertion_POP_Issuer) */

struct zxmd_sa_Issuer_s* zxmd_sa_Assertion_POP_Issuer(struct zxmd_sa_Assertion_s* x)
{
  struct zxmd_sa_Issuer_s* y;
  if (!x) return 0;
  y = x->Issuer;
  if (y)
    x->Issuer = (struct zxmd_sa_Issuer_s*)y->gg.g.n;
  return y;
}

/* FUNC(zxmd_sa_Assertion_PUSH_Issuer) */

void zxmd_sa_Assertion_PUSH_Issuer(struct zxmd_sa_Assertion_s* x, struct zxmd_sa_Issuer_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Issuer->gg.g;
  x->Issuer = z;
}

/* FUNC(zxmd_sa_Assertion_REV_Issuer) */

void zxmd_sa_Assertion_REV_Issuer(struct zxmd_sa_Assertion_s* x)
{
  struct zxmd_sa_Issuer_s* nxt;
  struct zxmd_sa_Issuer_s* y;
  if (!x) return;
  y = x->Issuer;
  if (!y) return;
  x->Issuer = 0;
  while (y) {
    nxt = (struct zxmd_sa_Issuer_s*)y->gg.g.n;
    y->gg.g.n = &x->Issuer->gg.g;
    x->Issuer = y;
    y = nxt;
  }
}

/* FUNC(zxmd_sa_Assertion_PUT_Issuer) */

void zxmd_sa_Assertion_PUT_Issuer(struct zxmd_sa_Assertion_s* x, int n, struct zxmd_sa_Issuer_s* z)
{
  struct zxmd_sa_Issuer_s* y;
  if (!x || !z) return;
  y = x->Issuer;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Issuer = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zxmd_sa_Issuer_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zxmd_sa_Assertion_ADD_Issuer) */

void zxmd_sa_Assertion_ADD_Issuer(struct zxmd_sa_Assertion_s* x, int n, struct zxmd_sa_Issuer_s* z)
{
  struct zxmd_sa_Issuer_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->Issuer->gg.g;
    x->Issuer = z;
    return;
  case -1:
    y = x->Issuer;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zxmd_sa_Issuer_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Issuer; n > 1 && y; --n, y = (struct zxmd_sa_Issuer_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zxmd_sa_Assertion_DEL_Issuer) */

void zxmd_sa_Assertion_DEL_Issuer(struct zxmd_sa_Assertion_s* x, int n)
{
  struct zxmd_sa_Issuer_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Issuer = (struct zxmd_sa_Issuer_s*)x->Issuer->gg.g.n;
    return;
  case -1:
    y = (struct zxmd_sa_Issuer_s*)x->Issuer;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zxmd_sa_Issuer_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Issuer; n > 1 && y->gg.g.n; --n, y = (struct zxmd_sa_Issuer_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zxmd_sa_Assertion_NUM_Signature) */

int zxmd_sa_Assertion_NUM_Signature(struct zxmd_sa_Assertion_s* x)
{
  struct zxmd_ds_Signature_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Signature; y; ++n, y = (struct zxmd_ds_Signature_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zxmd_sa_Assertion_GET_Signature) */

struct zxmd_ds_Signature_s* zxmd_sa_Assertion_GET_Signature(struct zxmd_sa_Assertion_s* x, int n)
{
  struct zxmd_ds_Signature_s* y;
  if (!x) return 0;
  for (y = x->Signature; n>=0 && y; --n, y = (struct zxmd_ds_Signature_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zxmd_sa_Assertion_POP_Signature) */

struct zxmd_ds_Signature_s* zxmd_sa_Assertion_POP_Signature(struct zxmd_sa_Assertion_s* x)
{
  struct zxmd_ds_Signature_s* y;
  if (!x) return 0;
  y = x->Signature;
  if (y)
    x->Signature = (struct zxmd_ds_Signature_s*)y->gg.g.n;
  return y;
}

/* FUNC(zxmd_sa_Assertion_PUSH_Signature) */

void zxmd_sa_Assertion_PUSH_Signature(struct zxmd_sa_Assertion_s* x, struct zxmd_ds_Signature_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Signature->gg.g;
  x->Signature = z;
}

/* FUNC(zxmd_sa_Assertion_REV_Signature) */

void zxmd_sa_Assertion_REV_Signature(struct zxmd_sa_Assertion_s* x)
{
  struct zxmd_ds_Signature_s* nxt;
  struct zxmd_ds_Signature_s* y;
  if (!x) return;
  y = x->Signature;
  if (!y) return;
  x->Signature = 0;
  while (y) {
    nxt = (struct zxmd_ds_Signature_s*)y->gg.g.n;
    y->gg.g.n = &x->Signature->gg.g;
    x->Signature = y;
    y = nxt;
  }
}

/* FUNC(zxmd_sa_Assertion_PUT_Signature) */

void zxmd_sa_Assertion_PUT_Signature(struct zxmd_sa_Assertion_s* x, int n, struct zxmd_ds_Signature_s* z)
{
  struct zxmd_ds_Signature_s* y;
  if (!x || !z) return;
  y = x->Signature;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Signature = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zxmd_ds_Signature_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zxmd_sa_Assertion_ADD_Signature) */

void zxmd_sa_Assertion_ADD_Signature(struct zxmd_sa_Assertion_s* x, int n, struct zxmd_ds_Signature_s* z)
{
  struct zxmd_ds_Signature_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->Signature->gg.g;
    x->Signature = z;
    return;
  case -1:
    y = x->Signature;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zxmd_ds_Signature_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Signature; n > 1 && y; --n, y = (struct zxmd_ds_Signature_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zxmd_sa_Assertion_DEL_Signature) */

void zxmd_sa_Assertion_DEL_Signature(struct zxmd_sa_Assertion_s* x, int n)
{
  struct zxmd_ds_Signature_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Signature = (struct zxmd_ds_Signature_s*)x->Signature->gg.g.n;
    return;
  case -1:
    y = (struct zxmd_ds_Signature_s*)x->Signature;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zxmd_ds_Signature_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Signature; n > 1 && y->gg.g.n; --n, y = (struct zxmd_ds_Signature_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zxmd_sa_Assertion_NUM_Subject) */

int zxmd_sa_Assertion_NUM_Subject(struct zxmd_sa_Assertion_s* x)
{
  struct zxmd_sa_Subject_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Subject; y; ++n, y = (struct zxmd_sa_Subject_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zxmd_sa_Assertion_GET_Subject) */

struct zxmd_sa_Subject_s* zxmd_sa_Assertion_GET_Subject(struct zxmd_sa_Assertion_s* x, int n)
{
  struct zxmd_sa_Subject_s* y;
  if (!x) return 0;
  for (y = x->Subject; n>=0 && y; --n, y = (struct zxmd_sa_Subject_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zxmd_sa_Assertion_POP_Subject) */

struct zxmd_sa_Subject_s* zxmd_sa_Assertion_POP_Subject(struct zxmd_sa_Assertion_s* x)
{
  struct zxmd_sa_Subject_s* y;
  if (!x) return 0;
  y = x->Subject;
  if (y)
    x->Subject = (struct zxmd_sa_Subject_s*)y->gg.g.n;
  return y;
}

/* FUNC(zxmd_sa_Assertion_PUSH_Subject) */

void zxmd_sa_Assertion_PUSH_Subject(struct zxmd_sa_Assertion_s* x, struct zxmd_sa_Subject_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Subject->gg.g;
  x->Subject = z;
}

/* FUNC(zxmd_sa_Assertion_REV_Subject) */

void zxmd_sa_Assertion_REV_Subject(struct zxmd_sa_Assertion_s* x)
{
  struct zxmd_sa_Subject_s* nxt;
  struct zxmd_sa_Subject_s* y;
  if (!x) return;
  y = x->Subject;
  if (!y) return;
  x->Subject = 0;
  while (y) {
    nxt = (struct zxmd_sa_Subject_s*)y->gg.g.n;
    y->gg.g.n = &x->Subject->gg.g;
    x->Subject = y;
    y = nxt;
  }
}

/* FUNC(zxmd_sa_Assertion_PUT_Subject) */

void zxmd_sa_Assertion_PUT_Subject(struct zxmd_sa_Assertion_s* x, int n, struct zxmd_sa_Subject_s* z)
{
  struct zxmd_sa_Subject_s* y;
  if (!x || !z) return;
  y = x->Subject;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Subject = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zxmd_sa_Subject_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zxmd_sa_Assertion_ADD_Subject) */

void zxmd_sa_Assertion_ADD_Subject(struct zxmd_sa_Assertion_s* x, int n, struct zxmd_sa_Subject_s* z)
{
  struct zxmd_sa_Subject_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->Subject->gg.g;
    x->Subject = z;
    return;
  case -1:
    y = x->Subject;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zxmd_sa_Subject_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Subject; n > 1 && y; --n, y = (struct zxmd_sa_Subject_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zxmd_sa_Assertion_DEL_Subject) */

void zxmd_sa_Assertion_DEL_Subject(struct zxmd_sa_Assertion_s* x, int n)
{
  struct zxmd_sa_Subject_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Subject = (struct zxmd_sa_Subject_s*)x->Subject->gg.g.n;
    return;
  case -1:
    y = (struct zxmd_sa_Subject_s*)x->Subject;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zxmd_sa_Subject_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Subject; n > 1 && y->gg.g.n; --n, y = (struct zxmd_sa_Subject_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zxmd_sa_Assertion_NUM_Conditions) */

int zxmd_sa_Assertion_NUM_Conditions(struct zxmd_sa_Assertion_s* x)
{
  struct zxmd_sa_Conditions_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Conditions; y; ++n, y = (struct zxmd_sa_Conditions_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zxmd_sa_Assertion_GET_Conditions) */

struct zxmd_sa_Conditions_s* zxmd_sa_Assertion_GET_Conditions(struct zxmd_sa_Assertion_s* x, int n)
{
  struct zxmd_sa_Conditions_s* y;
  if (!x) return 0;
  for (y = x->Conditions; n>=0 && y; --n, y = (struct zxmd_sa_Conditions_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zxmd_sa_Assertion_POP_Conditions) */

struct zxmd_sa_Conditions_s* zxmd_sa_Assertion_POP_Conditions(struct zxmd_sa_Assertion_s* x)
{
  struct zxmd_sa_Conditions_s* y;
  if (!x) return 0;
  y = x->Conditions;
  if (y)
    x->Conditions = (struct zxmd_sa_Conditions_s*)y->gg.g.n;
  return y;
}

/* FUNC(zxmd_sa_Assertion_PUSH_Conditions) */

void zxmd_sa_Assertion_PUSH_Conditions(struct zxmd_sa_Assertion_s* x, struct zxmd_sa_Conditions_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Conditions->gg.g;
  x->Conditions = z;
}

/* FUNC(zxmd_sa_Assertion_REV_Conditions) */

void zxmd_sa_Assertion_REV_Conditions(struct zxmd_sa_Assertion_s* x)
{
  struct zxmd_sa_Conditions_s* nxt;
  struct zxmd_sa_Conditions_s* y;
  if (!x) return;
  y = x->Conditions;
  if (!y) return;
  x->Conditions = 0;
  while (y) {
    nxt = (struct zxmd_sa_Conditions_s*)y->gg.g.n;
    y->gg.g.n = &x->Conditions->gg.g;
    x->Conditions = y;
    y = nxt;
  }
}

/* FUNC(zxmd_sa_Assertion_PUT_Conditions) */

void zxmd_sa_Assertion_PUT_Conditions(struct zxmd_sa_Assertion_s* x, int n, struct zxmd_sa_Conditions_s* z)
{
  struct zxmd_sa_Conditions_s* y;
  if (!x || !z) return;
  y = x->Conditions;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Conditions = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zxmd_sa_Conditions_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zxmd_sa_Assertion_ADD_Conditions) */

void zxmd_sa_Assertion_ADD_Conditions(struct zxmd_sa_Assertion_s* x, int n, struct zxmd_sa_Conditions_s* z)
{
  struct zxmd_sa_Conditions_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->Conditions->gg.g;
    x->Conditions = z;
    return;
  case -1:
    y = x->Conditions;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zxmd_sa_Conditions_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Conditions; n > 1 && y; --n, y = (struct zxmd_sa_Conditions_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zxmd_sa_Assertion_DEL_Conditions) */

void zxmd_sa_Assertion_DEL_Conditions(struct zxmd_sa_Assertion_s* x, int n)
{
  struct zxmd_sa_Conditions_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Conditions = (struct zxmd_sa_Conditions_s*)x->Conditions->gg.g.n;
    return;
  case -1:
    y = (struct zxmd_sa_Conditions_s*)x->Conditions;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zxmd_sa_Conditions_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Conditions; n > 1 && y->gg.g.n; --n, y = (struct zxmd_sa_Conditions_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zxmd_sa_Assertion_NUM_Advice) */

int zxmd_sa_Assertion_NUM_Advice(struct zxmd_sa_Assertion_s* x)
{
  struct zxmd_sa_Advice_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Advice; y; ++n, y = (struct zxmd_sa_Advice_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zxmd_sa_Assertion_GET_Advice) */

struct zxmd_sa_Advice_s* zxmd_sa_Assertion_GET_Advice(struct zxmd_sa_Assertion_s* x, int n)
{
  struct zxmd_sa_Advice_s* y;
  if (!x) return 0;
  for (y = x->Advice; n>=0 && y; --n, y = (struct zxmd_sa_Advice_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zxmd_sa_Assertion_POP_Advice) */

struct zxmd_sa_Advice_s* zxmd_sa_Assertion_POP_Advice(struct zxmd_sa_Assertion_s* x)
{
  struct zxmd_sa_Advice_s* y;
  if (!x) return 0;
  y = x->Advice;
  if (y)
    x->Advice = (struct zxmd_sa_Advice_s*)y->gg.g.n;
  return y;
}

/* FUNC(zxmd_sa_Assertion_PUSH_Advice) */

void zxmd_sa_Assertion_PUSH_Advice(struct zxmd_sa_Assertion_s* x, struct zxmd_sa_Advice_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Advice->gg.g;
  x->Advice = z;
}

/* FUNC(zxmd_sa_Assertion_REV_Advice) */

void zxmd_sa_Assertion_REV_Advice(struct zxmd_sa_Assertion_s* x)
{
  struct zxmd_sa_Advice_s* nxt;
  struct zxmd_sa_Advice_s* y;
  if (!x) return;
  y = x->Advice;
  if (!y) return;
  x->Advice = 0;
  while (y) {
    nxt = (struct zxmd_sa_Advice_s*)y->gg.g.n;
    y->gg.g.n = &x->Advice->gg.g;
    x->Advice = y;
    y = nxt;
  }
}

/* FUNC(zxmd_sa_Assertion_PUT_Advice) */

void zxmd_sa_Assertion_PUT_Advice(struct zxmd_sa_Assertion_s* x, int n, struct zxmd_sa_Advice_s* z)
{
  struct zxmd_sa_Advice_s* y;
  if (!x || !z) return;
  y = x->Advice;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Advice = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zxmd_sa_Advice_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zxmd_sa_Assertion_ADD_Advice) */

void zxmd_sa_Assertion_ADD_Advice(struct zxmd_sa_Assertion_s* x, int n, struct zxmd_sa_Advice_s* z)
{
  struct zxmd_sa_Advice_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->Advice->gg.g;
    x->Advice = z;
    return;
  case -1:
    y = x->Advice;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zxmd_sa_Advice_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Advice; n > 1 && y; --n, y = (struct zxmd_sa_Advice_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zxmd_sa_Assertion_DEL_Advice) */

void zxmd_sa_Assertion_DEL_Advice(struct zxmd_sa_Assertion_s* x, int n)
{
  struct zxmd_sa_Advice_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Advice = (struct zxmd_sa_Advice_s*)x->Advice->gg.g.n;
    return;
  case -1:
    y = (struct zxmd_sa_Advice_s*)x->Advice;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zxmd_sa_Advice_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Advice; n > 1 && y->gg.g.n; --n, y = (struct zxmd_sa_Advice_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zxmd_sa_Assertion_NUM_Statement) */

int zxmd_sa_Assertion_NUM_Statement(struct zxmd_sa_Assertion_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Statement; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zxmd_sa_Assertion_GET_Statement) */

struct zx_elem_s* zxmd_sa_Assertion_GET_Statement(struct zxmd_sa_Assertion_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->Statement; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zxmd_sa_Assertion_POP_Statement) */

struct zx_elem_s* zxmd_sa_Assertion_POP_Statement(struct zxmd_sa_Assertion_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->Statement;
  if (y)
    x->Statement = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zxmd_sa_Assertion_PUSH_Statement) */

void zxmd_sa_Assertion_PUSH_Statement(struct zxmd_sa_Assertion_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->Statement->g;
  x->Statement = z;
}

/* FUNC(zxmd_sa_Assertion_REV_Statement) */

void zxmd_sa_Assertion_REV_Statement(struct zxmd_sa_Assertion_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->Statement;
  if (!y) return;
  x->Statement = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->Statement->g;
    x->Statement = y;
    y = nxt;
  }
}

/* FUNC(zxmd_sa_Assertion_PUT_Statement) */

void zxmd_sa_Assertion_PUT_Statement(struct zxmd_sa_Assertion_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->Statement;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->Statement = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zxmd_sa_Assertion_ADD_Statement) */

void zxmd_sa_Assertion_ADD_Statement(struct zxmd_sa_Assertion_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->Statement->g;
    x->Statement = z;
    return;
  case -1:
    y = x->Statement;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->Statement; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zxmd_sa_Assertion_DEL_Statement) */

void zxmd_sa_Assertion_DEL_Statement(struct zxmd_sa_Assertion_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Statement = (struct zx_elem_s*)x->Statement->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->Statement;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->Statement; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}



/* FUNC(zxmd_sa_Assertion_NUM_AuthnStatement) */

int zxmd_sa_Assertion_NUM_AuthnStatement(struct zxmd_sa_Assertion_s* x)
{
  struct zxmd_sa_AuthnStatement_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->AuthnStatement; y; ++n, y = (struct zxmd_sa_AuthnStatement_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zxmd_sa_Assertion_GET_AuthnStatement) */

struct zxmd_sa_AuthnStatement_s* zxmd_sa_Assertion_GET_AuthnStatement(struct zxmd_sa_Assertion_s* x, int n)
{
  struct zxmd_sa_AuthnStatement_s* y;
  if (!x) return 0;
  for (y = x->AuthnStatement; n>=0 && y; --n, y = (struct zxmd_sa_AuthnStatement_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zxmd_sa_Assertion_POP_AuthnStatement) */

struct zxmd_sa_AuthnStatement_s* zxmd_sa_Assertion_POP_AuthnStatement(struct zxmd_sa_Assertion_s* x)
{
  struct zxmd_sa_AuthnStatement_s* y;
  if (!x) return 0;
  y = x->AuthnStatement;
  if (y)
    x->AuthnStatement = (struct zxmd_sa_AuthnStatement_s*)y->gg.g.n;
  return y;
}

/* FUNC(zxmd_sa_Assertion_PUSH_AuthnStatement) */

void zxmd_sa_Assertion_PUSH_AuthnStatement(struct zxmd_sa_Assertion_s* x, struct zxmd_sa_AuthnStatement_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->AuthnStatement->gg.g;
  x->AuthnStatement = z;
}

/* FUNC(zxmd_sa_Assertion_REV_AuthnStatement) */

void zxmd_sa_Assertion_REV_AuthnStatement(struct zxmd_sa_Assertion_s* x)
{
  struct zxmd_sa_AuthnStatement_s* nxt;
  struct zxmd_sa_AuthnStatement_s* y;
  if (!x) return;
  y = x->AuthnStatement;
  if (!y) return;
  x->AuthnStatement = 0;
  while (y) {
    nxt = (struct zxmd_sa_AuthnStatement_s*)y->gg.g.n;
    y->gg.g.n = &x->AuthnStatement->gg.g;
    x->AuthnStatement = y;
    y = nxt;
  }
}

/* FUNC(zxmd_sa_Assertion_PUT_AuthnStatement) */

void zxmd_sa_Assertion_PUT_AuthnStatement(struct zxmd_sa_Assertion_s* x, int n, struct zxmd_sa_AuthnStatement_s* z)
{
  struct zxmd_sa_AuthnStatement_s* y;
  if (!x || !z) return;
  y = x->AuthnStatement;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->AuthnStatement = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zxmd_sa_AuthnStatement_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zxmd_sa_Assertion_ADD_AuthnStatement) */

void zxmd_sa_Assertion_ADD_AuthnStatement(struct zxmd_sa_Assertion_s* x, int n, struct zxmd_sa_AuthnStatement_s* z)
{
  struct zxmd_sa_AuthnStatement_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->AuthnStatement->gg.g;
    x->AuthnStatement = z;
    return;
  case -1:
    y = x->AuthnStatement;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zxmd_sa_AuthnStatement_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->AuthnStatement; n > 1 && y; --n, y = (struct zxmd_sa_AuthnStatement_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zxmd_sa_Assertion_DEL_AuthnStatement) */

void zxmd_sa_Assertion_DEL_AuthnStatement(struct zxmd_sa_Assertion_s* x, int n)
{
  struct zxmd_sa_AuthnStatement_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->AuthnStatement = (struct zxmd_sa_AuthnStatement_s*)x->AuthnStatement->gg.g.n;
    return;
  case -1:
    y = (struct zxmd_sa_AuthnStatement_s*)x->AuthnStatement;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zxmd_sa_AuthnStatement_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->AuthnStatement; n > 1 && y->gg.g.n; --n, y = (struct zxmd_sa_AuthnStatement_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zxmd_sa_Assertion_NUM_AuthzDecisionStatement) */

int zxmd_sa_Assertion_NUM_AuthzDecisionStatement(struct zxmd_sa_Assertion_s* x)
{
  struct zxmd_sa_AuthzDecisionStatement_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->AuthzDecisionStatement; y; ++n, y = (struct zxmd_sa_AuthzDecisionStatement_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zxmd_sa_Assertion_GET_AuthzDecisionStatement) */

struct zxmd_sa_AuthzDecisionStatement_s* zxmd_sa_Assertion_GET_AuthzDecisionStatement(struct zxmd_sa_Assertion_s* x, int n)
{
  struct zxmd_sa_AuthzDecisionStatement_s* y;
  if (!x) return 0;
  for (y = x->AuthzDecisionStatement; n>=0 && y; --n, y = (struct zxmd_sa_AuthzDecisionStatement_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zxmd_sa_Assertion_POP_AuthzDecisionStatement) */

struct zxmd_sa_AuthzDecisionStatement_s* zxmd_sa_Assertion_POP_AuthzDecisionStatement(struct zxmd_sa_Assertion_s* x)
{
  struct zxmd_sa_AuthzDecisionStatement_s* y;
  if (!x) return 0;
  y = x->AuthzDecisionStatement;
  if (y)
    x->AuthzDecisionStatement = (struct zxmd_sa_AuthzDecisionStatement_s*)y->gg.g.n;
  return y;
}

/* FUNC(zxmd_sa_Assertion_PUSH_AuthzDecisionStatement) */

void zxmd_sa_Assertion_PUSH_AuthzDecisionStatement(struct zxmd_sa_Assertion_s* x, struct zxmd_sa_AuthzDecisionStatement_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->AuthzDecisionStatement->gg.g;
  x->AuthzDecisionStatement = z;
}

/* FUNC(zxmd_sa_Assertion_REV_AuthzDecisionStatement) */

void zxmd_sa_Assertion_REV_AuthzDecisionStatement(struct zxmd_sa_Assertion_s* x)
{
  struct zxmd_sa_AuthzDecisionStatement_s* nxt;
  struct zxmd_sa_AuthzDecisionStatement_s* y;
  if (!x) return;
  y = x->AuthzDecisionStatement;
  if (!y) return;
  x->AuthzDecisionStatement = 0;
  while (y) {
    nxt = (struct zxmd_sa_AuthzDecisionStatement_s*)y->gg.g.n;
    y->gg.g.n = &x->AuthzDecisionStatement->gg.g;
    x->AuthzDecisionStatement = y;
    y = nxt;
  }
}

/* FUNC(zxmd_sa_Assertion_PUT_AuthzDecisionStatement) */

void zxmd_sa_Assertion_PUT_AuthzDecisionStatement(struct zxmd_sa_Assertion_s* x, int n, struct zxmd_sa_AuthzDecisionStatement_s* z)
{
  struct zxmd_sa_AuthzDecisionStatement_s* y;
  if (!x || !z) return;
  y = x->AuthzDecisionStatement;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->AuthzDecisionStatement = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zxmd_sa_AuthzDecisionStatement_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zxmd_sa_Assertion_ADD_AuthzDecisionStatement) */

void zxmd_sa_Assertion_ADD_AuthzDecisionStatement(struct zxmd_sa_Assertion_s* x, int n, struct zxmd_sa_AuthzDecisionStatement_s* z)
{
  struct zxmd_sa_AuthzDecisionStatement_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->AuthzDecisionStatement->gg.g;
    x->AuthzDecisionStatement = z;
    return;
  case -1:
    y = x->AuthzDecisionStatement;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zxmd_sa_AuthzDecisionStatement_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->AuthzDecisionStatement; n > 1 && y; --n, y = (struct zxmd_sa_AuthzDecisionStatement_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zxmd_sa_Assertion_DEL_AuthzDecisionStatement) */

void zxmd_sa_Assertion_DEL_AuthzDecisionStatement(struct zxmd_sa_Assertion_s* x, int n)
{
  struct zxmd_sa_AuthzDecisionStatement_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->AuthzDecisionStatement = (struct zxmd_sa_AuthzDecisionStatement_s*)x->AuthzDecisionStatement->gg.g.n;
    return;
  case -1:
    y = (struct zxmd_sa_AuthzDecisionStatement_s*)x->AuthzDecisionStatement;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zxmd_sa_AuthzDecisionStatement_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->AuthzDecisionStatement; n > 1 && y->gg.g.n; --n, y = (struct zxmd_sa_AuthzDecisionStatement_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zxmd_sa_Assertion_NUM_AttributeStatement) */

int zxmd_sa_Assertion_NUM_AttributeStatement(struct zxmd_sa_Assertion_s* x)
{
  struct zxmd_sa_AttributeStatement_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->AttributeStatement; y; ++n, y = (struct zxmd_sa_AttributeStatement_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zxmd_sa_Assertion_GET_AttributeStatement) */

struct zxmd_sa_AttributeStatement_s* zxmd_sa_Assertion_GET_AttributeStatement(struct zxmd_sa_Assertion_s* x, int n)
{
  struct zxmd_sa_AttributeStatement_s* y;
  if (!x) return 0;
  for (y = x->AttributeStatement; n>=0 && y; --n, y = (struct zxmd_sa_AttributeStatement_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zxmd_sa_Assertion_POP_AttributeStatement) */

struct zxmd_sa_AttributeStatement_s* zxmd_sa_Assertion_POP_AttributeStatement(struct zxmd_sa_Assertion_s* x)
{
  struct zxmd_sa_AttributeStatement_s* y;
  if (!x) return 0;
  y = x->AttributeStatement;
  if (y)
    x->AttributeStatement = (struct zxmd_sa_AttributeStatement_s*)y->gg.g.n;
  return y;
}

/* FUNC(zxmd_sa_Assertion_PUSH_AttributeStatement) */

void zxmd_sa_Assertion_PUSH_AttributeStatement(struct zxmd_sa_Assertion_s* x, struct zxmd_sa_AttributeStatement_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->AttributeStatement->gg.g;
  x->AttributeStatement = z;
}

/* FUNC(zxmd_sa_Assertion_REV_AttributeStatement) */

void zxmd_sa_Assertion_REV_AttributeStatement(struct zxmd_sa_Assertion_s* x)
{
  struct zxmd_sa_AttributeStatement_s* nxt;
  struct zxmd_sa_AttributeStatement_s* y;
  if (!x) return;
  y = x->AttributeStatement;
  if (!y) return;
  x->AttributeStatement = 0;
  while (y) {
    nxt = (struct zxmd_sa_AttributeStatement_s*)y->gg.g.n;
    y->gg.g.n = &x->AttributeStatement->gg.g;
    x->AttributeStatement = y;
    y = nxt;
  }
}

/* FUNC(zxmd_sa_Assertion_PUT_AttributeStatement) */

void zxmd_sa_Assertion_PUT_AttributeStatement(struct zxmd_sa_Assertion_s* x, int n, struct zxmd_sa_AttributeStatement_s* z)
{
  struct zxmd_sa_AttributeStatement_s* y;
  if (!x || !z) return;
  y = x->AttributeStatement;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->AttributeStatement = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zxmd_sa_AttributeStatement_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zxmd_sa_Assertion_ADD_AttributeStatement) */

void zxmd_sa_Assertion_ADD_AttributeStatement(struct zxmd_sa_Assertion_s* x, int n, struct zxmd_sa_AttributeStatement_s* z)
{
  struct zxmd_sa_AttributeStatement_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->AttributeStatement->gg.g;
    x->AttributeStatement = z;
    return;
  case -1:
    y = x->AttributeStatement;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zxmd_sa_AttributeStatement_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->AttributeStatement; n > 1 && y; --n, y = (struct zxmd_sa_AttributeStatement_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zxmd_sa_Assertion_DEL_AttributeStatement) */

void zxmd_sa_Assertion_DEL_AttributeStatement(struct zxmd_sa_Assertion_s* x, int n)
{
  struct zxmd_sa_AttributeStatement_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->AttributeStatement = (struct zxmd_sa_AttributeStatement_s*)x->AttributeStatement->gg.g.n;
    return;
  case -1:
    y = (struct zxmd_sa_AttributeStatement_s*)x->AttributeStatement;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zxmd_sa_AttributeStatement_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->AttributeStatement; n > 1 && y->gg.g.n; --n, y = (struct zxmd_sa_AttributeStatement_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

/* FUNC(zxmd_sa_Assertion_GET_Version) */
struct zx_str_s* zxmd_sa_Assertion_GET_Version(struct zxmd_sa_Assertion_s* x) { return x->Version; }
/* FUNC(zxmd_sa_Assertion_PUT_Version) */
void zxmd_sa_Assertion_PUT_Version(struct zxmd_sa_Assertion_s* x, struct zx_str_s* y) { x->Version = y; }
/* FUNC(zxmd_sa_Assertion_GET_ID) */
struct zx_str_s* zxmd_sa_Assertion_GET_ID(struct zxmd_sa_Assertion_s* x) { return x->ID; }
/* FUNC(zxmd_sa_Assertion_PUT_ID) */
void zxmd_sa_Assertion_PUT_ID(struct zxmd_sa_Assertion_s* x, struct zx_str_s* y) { x->ID = y; }
/* FUNC(zxmd_sa_Assertion_GET_IssueInstant) */
struct zx_str_s* zxmd_sa_Assertion_GET_IssueInstant(struct zxmd_sa_Assertion_s* x) { return x->IssueInstant; }
/* FUNC(zxmd_sa_Assertion_PUT_IssueInstant) */
void zxmd_sa_Assertion_PUT_IssueInstant(struct zxmd_sa_Assertion_s* x, struct zx_str_s* y) { x->IssueInstant = y; }







/* FUNC(zxmd_sa_Attribute_NUM_AttributeValue) */

int zxmd_sa_Attribute_NUM_AttributeValue(struct zxmd_sa_Attribute_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->AttributeValue; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zxmd_sa_Attribute_GET_AttributeValue) */

struct zx_elem_s* zxmd_sa_Attribute_GET_AttributeValue(struct zxmd_sa_Attribute_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->AttributeValue; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zxmd_sa_Attribute_POP_AttributeValue) */

struct zx_elem_s* zxmd_sa_Attribute_POP_AttributeValue(struct zxmd_sa_Attribute_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->AttributeValue;
  if (y)
    x->AttributeValue = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zxmd_sa_Attribute_PUSH_AttributeValue) */

void zxmd_sa_Attribute_PUSH_AttributeValue(struct zxmd_sa_Attribute_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->AttributeValue->g;
  x->AttributeValue = z;
}

/* FUNC(zxmd_sa_Attribute_REV_AttributeValue) */

void zxmd_sa_Attribute_REV_AttributeValue(struct zxmd_sa_Attribute_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->AttributeValue;
  if (!y) return;
  x->AttributeValue = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->AttributeValue->g;
    x->AttributeValue = y;
    y = nxt;
  }
}

/* FUNC(zxmd_sa_Attribute_PUT_AttributeValue) */

void zxmd_sa_Attribute_PUT_AttributeValue(struct zxmd_sa_Attribute_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->AttributeValue;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->AttributeValue = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zxmd_sa_Attribute_ADD_AttributeValue) */

void zxmd_sa_Attribute_ADD_AttributeValue(struct zxmd_sa_Attribute_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->AttributeValue->g;
    x->AttributeValue = z;
    return;
  case -1:
    y = x->AttributeValue;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->AttributeValue; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zxmd_sa_Attribute_DEL_AttributeValue) */

void zxmd_sa_Attribute_DEL_AttributeValue(struct zxmd_sa_Attribute_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->AttributeValue = (struct zx_elem_s*)x->AttributeValue->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->AttributeValue;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->AttributeValue; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

/* FUNC(zxmd_sa_Attribute_GET_Name) */
struct zx_str_s* zxmd_sa_Attribute_GET_Name(struct zxmd_sa_Attribute_s* x) { return x->Name; }
/* FUNC(zxmd_sa_Attribute_PUT_Name) */
void zxmd_sa_Attribute_PUT_Name(struct zxmd_sa_Attribute_s* x, struct zx_str_s* y) { x->Name = y; }
/* FUNC(zxmd_sa_Attribute_GET_NameFormat) */
struct zx_str_s* zxmd_sa_Attribute_GET_NameFormat(struct zxmd_sa_Attribute_s* x) { return x->NameFormat; }
/* FUNC(zxmd_sa_Attribute_PUT_NameFormat) */
void zxmd_sa_Attribute_PUT_NameFormat(struct zxmd_sa_Attribute_s* x, struct zx_str_s* y) { x->NameFormat = y; }
/* FUNC(zxmd_sa_Attribute_GET_FriendlyName) */
struct zx_str_s* zxmd_sa_Attribute_GET_FriendlyName(struct zxmd_sa_Attribute_s* x) { return x->FriendlyName; }
/* FUNC(zxmd_sa_Attribute_PUT_FriendlyName) */
void zxmd_sa_Attribute_PUT_FriendlyName(struct zxmd_sa_Attribute_s* x, struct zx_str_s* y) { x->FriendlyName = y; }







/* FUNC(zxmd_sa_AttributeStatement_NUM_Attribute) */

int zxmd_sa_AttributeStatement_NUM_Attribute(struct zxmd_sa_AttributeStatement_s* x)
{
  struct zxmd_sa_Attribute_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Attribute; y; ++n, y = (struct zxmd_sa_Attribute_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zxmd_sa_AttributeStatement_GET_Attribute) */

struct zxmd_sa_Attribute_s* zxmd_sa_AttributeStatement_GET_Attribute(struct zxmd_sa_AttributeStatement_s* x, int n)
{
  struct zxmd_sa_Attribute_s* y;
  if (!x) return 0;
  for (y = x->Attribute; n>=0 && y; --n, y = (struct zxmd_sa_Attribute_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zxmd_sa_AttributeStatement_POP_Attribute) */

struct zxmd_sa_Attribute_s* zxmd_sa_AttributeStatement_POP_Attribute(struct zxmd_sa_AttributeStatement_s* x)
{
  struct zxmd_sa_Attribute_s* y;
  if (!x) return 0;
  y = x->Attribute;
  if (y)
    x->Attribute = (struct zxmd_sa_Attribute_s*)y->gg.g.n;
  return y;
}

/* FUNC(zxmd_sa_AttributeStatement_PUSH_Attribute) */

void zxmd_sa_AttributeStatement_PUSH_Attribute(struct zxmd_sa_AttributeStatement_s* x, struct zxmd_sa_Attribute_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Attribute->gg.g;
  x->Attribute = z;
}

/* FUNC(zxmd_sa_AttributeStatement_REV_Attribute) */

void zxmd_sa_AttributeStatement_REV_Attribute(struct zxmd_sa_AttributeStatement_s* x)
{
  struct zxmd_sa_Attribute_s* nxt;
  struct zxmd_sa_Attribute_s* y;
  if (!x) return;
  y = x->Attribute;
  if (!y) return;
  x->Attribute = 0;
  while (y) {
    nxt = (struct zxmd_sa_Attribute_s*)y->gg.g.n;
    y->gg.g.n = &x->Attribute->gg.g;
    x->Attribute = y;
    y = nxt;
  }
}

/* FUNC(zxmd_sa_AttributeStatement_PUT_Attribute) */

void zxmd_sa_AttributeStatement_PUT_Attribute(struct zxmd_sa_AttributeStatement_s* x, int n, struct zxmd_sa_Attribute_s* z)
{
  struct zxmd_sa_Attribute_s* y;
  if (!x || !z) return;
  y = x->Attribute;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Attribute = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zxmd_sa_Attribute_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zxmd_sa_AttributeStatement_ADD_Attribute) */

void zxmd_sa_AttributeStatement_ADD_Attribute(struct zxmd_sa_AttributeStatement_s* x, int n, struct zxmd_sa_Attribute_s* z)
{
  struct zxmd_sa_Attribute_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->Attribute->gg.g;
    x->Attribute = z;
    return;
  case -1:
    y = x->Attribute;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zxmd_sa_Attribute_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Attribute; n > 1 && y; --n, y = (struct zxmd_sa_Attribute_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zxmd_sa_AttributeStatement_DEL_Attribute) */

void zxmd_sa_AttributeStatement_DEL_Attribute(struct zxmd_sa_AttributeStatement_s* x, int n)
{
  struct zxmd_sa_Attribute_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Attribute = (struct zxmd_sa_Attribute_s*)x->Attribute->gg.g.n;
    return;
  case -1:
    y = (struct zxmd_sa_Attribute_s*)x->Attribute;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zxmd_sa_Attribute_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Attribute; n > 1 && y->gg.g.n; --n, y = (struct zxmd_sa_Attribute_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zxmd_sa_AttributeStatement_NUM_EncryptedAttribute) */

int zxmd_sa_AttributeStatement_NUM_EncryptedAttribute(struct zxmd_sa_AttributeStatement_s* x)
{
  struct zxmd_sa_EncryptedAttribute_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->EncryptedAttribute; y; ++n, y = (struct zxmd_sa_EncryptedAttribute_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zxmd_sa_AttributeStatement_GET_EncryptedAttribute) */

struct zxmd_sa_EncryptedAttribute_s* zxmd_sa_AttributeStatement_GET_EncryptedAttribute(struct zxmd_sa_AttributeStatement_s* x, int n)
{
  struct zxmd_sa_EncryptedAttribute_s* y;
  if (!x) return 0;
  for (y = x->EncryptedAttribute; n>=0 && y; --n, y = (struct zxmd_sa_EncryptedAttribute_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zxmd_sa_AttributeStatement_POP_EncryptedAttribute) */

struct zxmd_sa_EncryptedAttribute_s* zxmd_sa_AttributeStatement_POP_EncryptedAttribute(struct zxmd_sa_AttributeStatement_s* x)
{
  struct zxmd_sa_EncryptedAttribute_s* y;
  if (!x) return 0;
  y = x->EncryptedAttribute;
  if (y)
    x->EncryptedAttribute = (struct zxmd_sa_EncryptedAttribute_s*)y->gg.g.n;
  return y;
}

/* FUNC(zxmd_sa_AttributeStatement_PUSH_EncryptedAttribute) */

void zxmd_sa_AttributeStatement_PUSH_EncryptedAttribute(struct zxmd_sa_AttributeStatement_s* x, struct zxmd_sa_EncryptedAttribute_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->EncryptedAttribute->gg.g;
  x->EncryptedAttribute = z;
}

/* FUNC(zxmd_sa_AttributeStatement_REV_EncryptedAttribute) */

void zxmd_sa_AttributeStatement_REV_EncryptedAttribute(struct zxmd_sa_AttributeStatement_s* x)
{
  struct zxmd_sa_EncryptedAttribute_s* nxt;
  struct zxmd_sa_EncryptedAttribute_s* y;
  if (!x) return;
  y = x->EncryptedAttribute;
  if (!y) return;
  x->EncryptedAttribute = 0;
  while (y) {
    nxt = (struct zxmd_sa_EncryptedAttribute_s*)y->gg.g.n;
    y->gg.g.n = &x->EncryptedAttribute->gg.g;
    x->EncryptedAttribute = y;
    y = nxt;
  }
}

/* FUNC(zxmd_sa_AttributeStatement_PUT_EncryptedAttribute) */

void zxmd_sa_AttributeStatement_PUT_EncryptedAttribute(struct zxmd_sa_AttributeStatement_s* x, int n, struct zxmd_sa_EncryptedAttribute_s* z)
{
  struct zxmd_sa_EncryptedAttribute_s* y;
  if (!x || !z) return;
  y = x->EncryptedAttribute;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->EncryptedAttribute = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zxmd_sa_EncryptedAttribute_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zxmd_sa_AttributeStatement_ADD_EncryptedAttribute) */

void zxmd_sa_AttributeStatement_ADD_EncryptedAttribute(struct zxmd_sa_AttributeStatement_s* x, int n, struct zxmd_sa_EncryptedAttribute_s* z)
{
  struct zxmd_sa_EncryptedAttribute_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->EncryptedAttribute->gg.g;
    x->EncryptedAttribute = z;
    return;
  case -1:
    y = x->EncryptedAttribute;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zxmd_sa_EncryptedAttribute_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->EncryptedAttribute; n > 1 && y; --n, y = (struct zxmd_sa_EncryptedAttribute_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zxmd_sa_AttributeStatement_DEL_EncryptedAttribute) */

void zxmd_sa_AttributeStatement_DEL_EncryptedAttribute(struct zxmd_sa_AttributeStatement_s* x, int n)
{
  struct zxmd_sa_EncryptedAttribute_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->EncryptedAttribute = (struct zxmd_sa_EncryptedAttribute_s*)x->EncryptedAttribute->gg.g.n;
    return;
  case -1:
    y = (struct zxmd_sa_EncryptedAttribute_s*)x->EncryptedAttribute;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zxmd_sa_EncryptedAttribute_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->EncryptedAttribute; n > 1 && y->gg.g.n; --n, y = (struct zxmd_sa_EncryptedAttribute_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}








/* FUNC(zxmd_sa_AudienceRestriction_NUM_Audience) */

int zxmd_sa_AudienceRestriction_NUM_Audience(struct zxmd_sa_AudienceRestriction_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Audience; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zxmd_sa_AudienceRestriction_GET_Audience) */

struct zx_elem_s* zxmd_sa_AudienceRestriction_GET_Audience(struct zxmd_sa_AudienceRestriction_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->Audience; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zxmd_sa_AudienceRestriction_POP_Audience) */

struct zx_elem_s* zxmd_sa_AudienceRestriction_POP_Audience(struct zxmd_sa_AudienceRestriction_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->Audience;
  if (y)
    x->Audience = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zxmd_sa_AudienceRestriction_PUSH_Audience) */

void zxmd_sa_AudienceRestriction_PUSH_Audience(struct zxmd_sa_AudienceRestriction_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->Audience->g;
  x->Audience = z;
}

/* FUNC(zxmd_sa_AudienceRestriction_REV_Audience) */

void zxmd_sa_AudienceRestriction_REV_Audience(struct zxmd_sa_AudienceRestriction_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->Audience;
  if (!y) return;
  x->Audience = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->Audience->g;
    x->Audience = y;
    y = nxt;
  }
}

/* FUNC(zxmd_sa_AudienceRestriction_PUT_Audience) */

void zxmd_sa_AudienceRestriction_PUT_Audience(struct zxmd_sa_AudienceRestriction_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->Audience;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->Audience = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zxmd_sa_AudienceRestriction_ADD_Audience) */

void zxmd_sa_AudienceRestriction_ADD_Audience(struct zxmd_sa_AudienceRestriction_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->Audience->g;
    x->Audience = z;
    return;
  case -1:
    y = x->Audience;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->Audience; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zxmd_sa_AudienceRestriction_DEL_Audience) */

void zxmd_sa_AudienceRestriction_DEL_Audience(struct zxmd_sa_AudienceRestriction_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Audience = (struct zx_elem_s*)x->Audience->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->Audience;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->Audience; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}








/* FUNC(zxmd_sa_AuthnContext_NUM_AuthnContextClassRef) */

int zxmd_sa_AuthnContext_NUM_AuthnContextClassRef(struct zxmd_sa_AuthnContext_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->AuthnContextClassRef; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zxmd_sa_AuthnContext_GET_AuthnContextClassRef) */

struct zx_elem_s* zxmd_sa_AuthnContext_GET_AuthnContextClassRef(struct zxmd_sa_AuthnContext_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->AuthnContextClassRef; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zxmd_sa_AuthnContext_POP_AuthnContextClassRef) */

struct zx_elem_s* zxmd_sa_AuthnContext_POP_AuthnContextClassRef(struct zxmd_sa_AuthnContext_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->AuthnContextClassRef;
  if (y)
    x->AuthnContextClassRef = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zxmd_sa_AuthnContext_PUSH_AuthnContextClassRef) */

void zxmd_sa_AuthnContext_PUSH_AuthnContextClassRef(struct zxmd_sa_AuthnContext_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->AuthnContextClassRef->g;
  x->AuthnContextClassRef = z;
}

/* FUNC(zxmd_sa_AuthnContext_REV_AuthnContextClassRef) */

void zxmd_sa_AuthnContext_REV_AuthnContextClassRef(struct zxmd_sa_AuthnContext_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->AuthnContextClassRef;
  if (!y) return;
  x->AuthnContextClassRef = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->AuthnContextClassRef->g;
    x->AuthnContextClassRef = y;
    y = nxt;
  }
}

/* FUNC(zxmd_sa_AuthnContext_PUT_AuthnContextClassRef) */

void zxmd_sa_AuthnContext_PUT_AuthnContextClassRef(struct zxmd_sa_AuthnContext_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->AuthnContextClassRef;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->AuthnContextClassRef = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zxmd_sa_AuthnContext_ADD_AuthnContextClassRef) */

void zxmd_sa_AuthnContext_ADD_AuthnContextClassRef(struct zxmd_sa_AuthnContext_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->AuthnContextClassRef->g;
    x->AuthnContextClassRef = z;
    return;
  case -1:
    y = x->AuthnContextClassRef;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->AuthnContextClassRef; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zxmd_sa_AuthnContext_DEL_AuthnContextClassRef) */

void zxmd_sa_AuthnContext_DEL_AuthnContextClassRef(struct zxmd_sa_AuthnContext_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->AuthnContextClassRef = (struct zx_elem_s*)x->AuthnContextClassRef->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->AuthnContextClassRef;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->AuthnContextClassRef; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}



/* FUNC(zxmd_sa_AuthnContext_NUM_AuthnContextDecl) */

int zxmd_sa_AuthnContext_NUM_AuthnContextDecl(struct zxmd_sa_AuthnContext_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->AuthnContextDecl; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zxmd_sa_AuthnContext_GET_AuthnContextDecl) */

struct zx_elem_s* zxmd_sa_AuthnContext_GET_AuthnContextDecl(struct zxmd_sa_AuthnContext_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->AuthnContextDecl; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zxmd_sa_AuthnContext_POP_AuthnContextDecl) */

struct zx_elem_s* zxmd_sa_AuthnContext_POP_AuthnContextDecl(struct zxmd_sa_AuthnContext_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->AuthnContextDecl;
  if (y)
    x->AuthnContextDecl = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zxmd_sa_AuthnContext_PUSH_AuthnContextDecl) */

void zxmd_sa_AuthnContext_PUSH_AuthnContextDecl(struct zxmd_sa_AuthnContext_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->AuthnContextDecl->g;
  x->AuthnContextDecl = z;
}

/* FUNC(zxmd_sa_AuthnContext_REV_AuthnContextDecl) */

void zxmd_sa_AuthnContext_REV_AuthnContextDecl(struct zxmd_sa_AuthnContext_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->AuthnContextDecl;
  if (!y) return;
  x->AuthnContextDecl = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->AuthnContextDecl->g;
    x->AuthnContextDecl = y;
    y = nxt;
  }
}

/* FUNC(zxmd_sa_AuthnContext_PUT_AuthnContextDecl) */

void zxmd_sa_AuthnContext_PUT_AuthnContextDecl(struct zxmd_sa_AuthnContext_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->AuthnContextDecl;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->AuthnContextDecl = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zxmd_sa_AuthnContext_ADD_AuthnContextDecl) */

void zxmd_sa_AuthnContext_ADD_AuthnContextDecl(struct zxmd_sa_AuthnContext_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->AuthnContextDecl->g;
    x->AuthnContextDecl = z;
    return;
  case -1:
    y = x->AuthnContextDecl;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->AuthnContextDecl; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zxmd_sa_AuthnContext_DEL_AuthnContextDecl) */

void zxmd_sa_AuthnContext_DEL_AuthnContextDecl(struct zxmd_sa_AuthnContext_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->AuthnContextDecl = (struct zx_elem_s*)x->AuthnContextDecl->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->AuthnContextDecl;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->AuthnContextDecl; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}



/* FUNC(zxmd_sa_AuthnContext_NUM_AuthnContextDeclRef) */

int zxmd_sa_AuthnContext_NUM_AuthnContextDeclRef(struct zxmd_sa_AuthnContext_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->AuthnContextDeclRef; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zxmd_sa_AuthnContext_GET_AuthnContextDeclRef) */

struct zx_elem_s* zxmd_sa_AuthnContext_GET_AuthnContextDeclRef(struct zxmd_sa_AuthnContext_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->AuthnContextDeclRef; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zxmd_sa_AuthnContext_POP_AuthnContextDeclRef) */

struct zx_elem_s* zxmd_sa_AuthnContext_POP_AuthnContextDeclRef(struct zxmd_sa_AuthnContext_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->AuthnContextDeclRef;
  if (y)
    x->AuthnContextDeclRef = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zxmd_sa_AuthnContext_PUSH_AuthnContextDeclRef) */

void zxmd_sa_AuthnContext_PUSH_AuthnContextDeclRef(struct zxmd_sa_AuthnContext_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->AuthnContextDeclRef->g;
  x->AuthnContextDeclRef = z;
}

/* FUNC(zxmd_sa_AuthnContext_REV_AuthnContextDeclRef) */

void zxmd_sa_AuthnContext_REV_AuthnContextDeclRef(struct zxmd_sa_AuthnContext_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->AuthnContextDeclRef;
  if (!y) return;
  x->AuthnContextDeclRef = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->AuthnContextDeclRef->g;
    x->AuthnContextDeclRef = y;
    y = nxt;
  }
}

/* FUNC(zxmd_sa_AuthnContext_PUT_AuthnContextDeclRef) */

void zxmd_sa_AuthnContext_PUT_AuthnContextDeclRef(struct zxmd_sa_AuthnContext_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->AuthnContextDeclRef;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->AuthnContextDeclRef = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zxmd_sa_AuthnContext_ADD_AuthnContextDeclRef) */

void zxmd_sa_AuthnContext_ADD_AuthnContextDeclRef(struct zxmd_sa_AuthnContext_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->AuthnContextDeclRef->g;
    x->AuthnContextDeclRef = z;
    return;
  case -1:
    y = x->AuthnContextDeclRef;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->AuthnContextDeclRef; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zxmd_sa_AuthnContext_DEL_AuthnContextDeclRef) */

void zxmd_sa_AuthnContext_DEL_AuthnContextDeclRef(struct zxmd_sa_AuthnContext_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->AuthnContextDeclRef = (struct zx_elem_s*)x->AuthnContextDeclRef->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->AuthnContextDeclRef;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->AuthnContextDeclRef; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}



/* FUNC(zxmd_sa_AuthnContext_NUM_AuthenticatingAuthority) */

int zxmd_sa_AuthnContext_NUM_AuthenticatingAuthority(struct zxmd_sa_AuthnContext_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->AuthenticatingAuthority; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zxmd_sa_AuthnContext_GET_AuthenticatingAuthority) */

struct zx_elem_s* zxmd_sa_AuthnContext_GET_AuthenticatingAuthority(struct zxmd_sa_AuthnContext_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->AuthenticatingAuthority; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zxmd_sa_AuthnContext_POP_AuthenticatingAuthority) */

struct zx_elem_s* zxmd_sa_AuthnContext_POP_AuthenticatingAuthority(struct zxmd_sa_AuthnContext_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->AuthenticatingAuthority;
  if (y)
    x->AuthenticatingAuthority = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zxmd_sa_AuthnContext_PUSH_AuthenticatingAuthority) */

void zxmd_sa_AuthnContext_PUSH_AuthenticatingAuthority(struct zxmd_sa_AuthnContext_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->AuthenticatingAuthority->g;
  x->AuthenticatingAuthority = z;
}

/* FUNC(zxmd_sa_AuthnContext_REV_AuthenticatingAuthority) */

void zxmd_sa_AuthnContext_REV_AuthenticatingAuthority(struct zxmd_sa_AuthnContext_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->AuthenticatingAuthority;
  if (!y) return;
  x->AuthenticatingAuthority = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->AuthenticatingAuthority->g;
    x->AuthenticatingAuthority = y;
    y = nxt;
  }
}

/* FUNC(zxmd_sa_AuthnContext_PUT_AuthenticatingAuthority) */

void zxmd_sa_AuthnContext_PUT_AuthenticatingAuthority(struct zxmd_sa_AuthnContext_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->AuthenticatingAuthority;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->AuthenticatingAuthority = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zxmd_sa_AuthnContext_ADD_AuthenticatingAuthority) */

void zxmd_sa_AuthnContext_ADD_AuthenticatingAuthority(struct zxmd_sa_AuthnContext_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->AuthenticatingAuthority->g;
    x->AuthenticatingAuthority = z;
    return;
  case -1:
    y = x->AuthenticatingAuthority;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->AuthenticatingAuthority; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zxmd_sa_AuthnContext_DEL_AuthenticatingAuthority) */

void zxmd_sa_AuthnContext_DEL_AuthenticatingAuthority(struct zxmd_sa_AuthnContext_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->AuthenticatingAuthority = (struct zx_elem_s*)x->AuthenticatingAuthority->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->AuthenticatingAuthority;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->AuthenticatingAuthority; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}








/* FUNC(zxmd_sa_AuthnStatement_NUM_SubjectLocality) */

int zxmd_sa_AuthnStatement_NUM_SubjectLocality(struct zxmd_sa_AuthnStatement_s* x)
{
  struct zxmd_sa_SubjectLocality_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->SubjectLocality; y; ++n, y = (struct zxmd_sa_SubjectLocality_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zxmd_sa_AuthnStatement_GET_SubjectLocality) */

struct zxmd_sa_SubjectLocality_s* zxmd_sa_AuthnStatement_GET_SubjectLocality(struct zxmd_sa_AuthnStatement_s* x, int n)
{
  struct zxmd_sa_SubjectLocality_s* y;
  if (!x) return 0;
  for (y = x->SubjectLocality; n>=0 && y; --n, y = (struct zxmd_sa_SubjectLocality_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zxmd_sa_AuthnStatement_POP_SubjectLocality) */

struct zxmd_sa_SubjectLocality_s* zxmd_sa_AuthnStatement_POP_SubjectLocality(struct zxmd_sa_AuthnStatement_s* x)
{
  struct zxmd_sa_SubjectLocality_s* y;
  if (!x) return 0;
  y = x->SubjectLocality;
  if (y)
    x->SubjectLocality = (struct zxmd_sa_SubjectLocality_s*)y->gg.g.n;
  return y;
}

/* FUNC(zxmd_sa_AuthnStatement_PUSH_SubjectLocality) */

void zxmd_sa_AuthnStatement_PUSH_SubjectLocality(struct zxmd_sa_AuthnStatement_s* x, struct zxmd_sa_SubjectLocality_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->SubjectLocality->gg.g;
  x->SubjectLocality = z;
}

/* FUNC(zxmd_sa_AuthnStatement_REV_SubjectLocality) */

void zxmd_sa_AuthnStatement_REV_SubjectLocality(struct zxmd_sa_AuthnStatement_s* x)
{
  struct zxmd_sa_SubjectLocality_s* nxt;
  struct zxmd_sa_SubjectLocality_s* y;
  if (!x) return;
  y = x->SubjectLocality;
  if (!y) return;
  x->SubjectLocality = 0;
  while (y) {
    nxt = (struct zxmd_sa_SubjectLocality_s*)y->gg.g.n;
    y->gg.g.n = &x->SubjectLocality->gg.g;
    x->SubjectLocality = y;
    y = nxt;
  }
}

/* FUNC(zxmd_sa_AuthnStatement_PUT_SubjectLocality) */

void zxmd_sa_AuthnStatement_PUT_SubjectLocality(struct zxmd_sa_AuthnStatement_s* x, int n, struct zxmd_sa_SubjectLocality_s* z)
{
  struct zxmd_sa_SubjectLocality_s* y;
  if (!x || !z) return;
  y = x->SubjectLocality;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->SubjectLocality = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zxmd_sa_SubjectLocality_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zxmd_sa_AuthnStatement_ADD_SubjectLocality) */

void zxmd_sa_AuthnStatement_ADD_SubjectLocality(struct zxmd_sa_AuthnStatement_s* x, int n, struct zxmd_sa_SubjectLocality_s* z)
{
  struct zxmd_sa_SubjectLocality_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->SubjectLocality->gg.g;
    x->SubjectLocality = z;
    return;
  case -1:
    y = x->SubjectLocality;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zxmd_sa_SubjectLocality_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->SubjectLocality; n > 1 && y; --n, y = (struct zxmd_sa_SubjectLocality_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zxmd_sa_AuthnStatement_DEL_SubjectLocality) */

void zxmd_sa_AuthnStatement_DEL_SubjectLocality(struct zxmd_sa_AuthnStatement_s* x, int n)
{
  struct zxmd_sa_SubjectLocality_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->SubjectLocality = (struct zxmd_sa_SubjectLocality_s*)x->SubjectLocality->gg.g.n;
    return;
  case -1:
    y = (struct zxmd_sa_SubjectLocality_s*)x->SubjectLocality;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zxmd_sa_SubjectLocality_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->SubjectLocality; n > 1 && y->gg.g.n; --n, y = (struct zxmd_sa_SubjectLocality_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zxmd_sa_AuthnStatement_NUM_AuthnContext) */

int zxmd_sa_AuthnStatement_NUM_AuthnContext(struct zxmd_sa_AuthnStatement_s* x)
{
  struct zxmd_sa_AuthnContext_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->AuthnContext; y; ++n, y = (struct zxmd_sa_AuthnContext_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zxmd_sa_AuthnStatement_GET_AuthnContext) */

struct zxmd_sa_AuthnContext_s* zxmd_sa_AuthnStatement_GET_AuthnContext(struct zxmd_sa_AuthnStatement_s* x, int n)
{
  struct zxmd_sa_AuthnContext_s* y;
  if (!x) return 0;
  for (y = x->AuthnContext; n>=0 && y; --n, y = (struct zxmd_sa_AuthnContext_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zxmd_sa_AuthnStatement_POP_AuthnContext) */

struct zxmd_sa_AuthnContext_s* zxmd_sa_AuthnStatement_POP_AuthnContext(struct zxmd_sa_AuthnStatement_s* x)
{
  struct zxmd_sa_AuthnContext_s* y;
  if (!x) return 0;
  y = x->AuthnContext;
  if (y)
    x->AuthnContext = (struct zxmd_sa_AuthnContext_s*)y->gg.g.n;
  return y;
}

/* FUNC(zxmd_sa_AuthnStatement_PUSH_AuthnContext) */

void zxmd_sa_AuthnStatement_PUSH_AuthnContext(struct zxmd_sa_AuthnStatement_s* x, struct zxmd_sa_AuthnContext_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->AuthnContext->gg.g;
  x->AuthnContext = z;
}

/* FUNC(zxmd_sa_AuthnStatement_REV_AuthnContext) */

void zxmd_sa_AuthnStatement_REV_AuthnContext(struct zxmd_sa_AuthnStatement_s* x)
{
  struct zxmd_sa_AuthnContext_s* nxt;
  struct zxmd_sa_AuthnContext_s* y;
  if (!x) return;
  y = x->AuthnContext;
  if (!y) return;
  x->AuthnContext = 0;
  while (y) {
    nxt = (struct zxmd_sa_AuthnContext_s*)y->gg.g.n;
    y->gg.g.n = &x->AuthnContext->gg.g;
    x->AuthnContext = y;
    y = nxt;
  }
}

/* FUNC(zxmd_sa_AuthnStatement_PUT_AuthnContext) */

void zxmd_sa_AuthnStatement_PUT_AuthnContext(struct zxmd_sa_AuthnStatement_s* x, int n, struct zxmd_sa_AuthnContext_s* z)
{
  struct zxmd_sa_AuthnContext_s* y;
  if (!x || !z) return;
  y = x->AuthnContext;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->AuthnContext = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zxmd_sa_AuthnContext_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zxmd_sa_AuthnStatement_ADD_AuthnContext) */

void zxmd_sa_AuthnStatement_ADD_AuthnContext(struct zxmd_sa_AuthnStatement_s* x, int n, struct zxmd_sa_AuthnContext_s* z)
{
  struct zxmd_sa_AuthnContext_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->AuthnContext->gg.g;
    x->AuthnContext = z;
    return;
  case -1:
    y = x->AuthnContext;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zxmd_sa_AuthnContext_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->AuthnContext; n > 1 && y; --n, y = (struct zxmd_sa_AuthnContext_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zxmd_sa_AuthnStatement_DEL_AuthnContext) */

void zxmd_sa_AuthnStatement_DEL_AuthnContext(struct zxmd_sa_AuthnStatement_s* x, int n)
{
  struct zxmd_sa_AuthnContext_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->AuthnContext = (struct zxmd_sa_AuthnContext_s*)x->AuthnContext->gg.g.n;
    return;
  case -1:
    y = (struct zxmd_sa_AuthnContext_s*)x->AuthnContext;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zxmd_sa_AuthnContext_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->AuthnContext; n > 1 && y->gg.g.n; --n, y = (struct zxmd_sa_AuthnContext_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

/* FUNC(zxmd_sa_AuthnStatement_GET_AuthnInstant) */
struct zx_str_s* zxmd_sa_AuthnStatement_GET_AuthnInstant(struct zxmd_sa_AuthnStatement_s* x) { return x->AuthnInstant; }
/* FUNC(zxmd_sa_AuthnStatement_PUT_AuthnInstant) */
void zxmd_sa_AuthnStatement_PUT_AuthnInstant(struct zxmd_sa_AuthnStatement_s* x, struct zx_str_s* y) { x->AuthnInstant = y; }
/* FUNC(zxmd_sa_AuthnStatement_GET_SessionIndex) */
struct zx_str_s* zxmd_sa_AuthnStatement_GET_SessionIndex(struct zxmd_sa_AuthnStatement_s* x) { return x->SessionIndex; }
/* FUNC(zxmd_sa_AuthnStatement_PUT_SessionIndex) */
void zxmd_sa_AuthnStatement_PUT_SessionIndex(struct zxmd_sa_AuthnStatement_s* x, struct zx_str_s* y) { x->SessionIndex = y; }
/* FUNC(zxmd_sa_AuthnStatement_GET_SessionNotOnOrAfter) */
struct zx_str_s* zxmd_sa_AuthnStatement_GET_SessionNotOnOrAfter(struct zxmd_sa_AuthnStatement_s* x) { return x->SessionNotOnOrAfter; }
/* FUNC(zxmd_sa_AuthnStatement_PUT_SessionNotOnOrAfter) */
void zxmd_sa_AuthnStatement_PUT_SessionNotOnOrAfter(struct zxmd_sa_AuthnStatement_s* x, struct zx_str_s* y) { x->SessionNotOnOrAfter = y; }







/* FUNC(zxmd_sa_AuthzDecisionStatement_NUM_Action) */

int zxmd_sa_AuthzDecisionStatement_NUM_Action(struct zxmd_sa_AuthzDecisionStatement_s* x)
{
  struct zxmd_sa_Action_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Action; y; ++n, y = (struct zxmd_sa_Action_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zxmd_sa_AuthzDecisionStatement_GET_Action) */

struct zxmd_sa_Action_s* zxmd_sa_AuthzDecisionStatement_GET_Action(struct zxmd_sa_AuthzDecisionStatement_s* x, int n)
{
  struct zxmd_sa_Action_s* y;
  if (!x) return 0;
  for (y = x->Action; n>=0 && y; --n, y = (struct zxmd_sa_Action_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zxmd_sa_AuthzDecisionStatement_POP_Action) */

struct zxmd_sa_Action_s* zxmd_sa_AuthzDecisionStatement_POP_Action(struct zxmd_sa_AuthzDecisionStatement_s* x)
{
  struct zxmd_sa_Action_s* y;
  if (!x) return 0;
  y = x->Action;
  if (y)
    x->Action = (struct zxmd_sa_Action_s*)y->gg.g.n;
  return y;
}

/* FUNC(zxmd_sa_AuthzDecisionStatement_PUSH_Action) */

void zxmd_sa_AuthzDecisionStatement_PUSH_Action(struct zxmd_sa_AuthzDecisionStatement_s* x, struct zxmd_sa_Action_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Action->gg.g;
  x->Action = z;
}

/* FUNC(zxmd_sa_AuthzDecisionStatement_REV_Action) */

void zxmd_sa_AuthzDecisionStatement_REV_Action(struct zxmd_sa_AuthzDecisionStatement_s* x)
{
  struct zxmd_sa_Action_s* nxt;
  struct zxmd_sa_Action_s* y;
  if (!x) return;
  y = x->Action;
  if (!y) return;
  x->Action = 0;
  while (y) {
    nxt = (struct zxmd_sa_Action_s*)y->gg.g.n;
    y->gg.g.n = &x->Action->gg.g;
    x->Action = y;
    y = nxt;
  }
}

/* FUNC(zxmd_sa_AuthzDecisionStatement_PUT_Action) */

void zxmd_sa_AuthzDecisionStatement_PUT_Action(struct zxmd_sa_AuthzDecisionStatement_s* x, int n, struct zxmd_sa_Action_s* z)
{
  struct zxmd_sa_Action_s* y;
  if (!x || !z) return;
  y = x->Action;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Action = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zxmd_sa_Action_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zxmd_sa_AuthzDecisionStatement_ADD_Action) */

void zxmd_sa_AuthzDecisionStatement_ADD_Action(struct zxmd_sa_AuthzDecisionStatement_s* x, int n, struct zxmd_sa_Action_s* z)
{
  struct zxmd_sa_Action_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->Action->gg.g;
    x->Action = z;
    return;
  case -1:
    y = x->Action;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zxmd_sa_Action_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Action; n > 1 && y; --n, y = (struct zxmd_sa_Action_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zxmd_sa_AuthzDecisionStatement_DEL_Action) */

void zxmd_sa_AuthzDecisionStatement_DEL_Action(struct zxmd_sa_AuthzDecisionStatement_s* x, int n)
{
  struct zxmd_sa_Action_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Action = (struct zxmd_sa_Action_s*)x->Action->gg.g.n;
    return;
  case -1:
    y = (struct zxmd_sa_Action_s*)x->Action;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zxmd_sa_Action_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Action; n > 1 && y->gg.g.n; --n, y = (struct zxmd_sa_Action_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zxmd_sa_AuthzDecisionStatement_NUM_Evidence) */

int zxmd_sa_AuthzDecisionStatement_NUM_Evidence(struct zxmd_sa_AuthzDecisionStatement_s* x)
{
  struct zxmd_sa_Evidence_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Evidence; y; ++n, y = (struct zxmd_sa_Evidence_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zxmd_sa_AuthzDecisionStatement_GET_Evidence) */

struct zxmd_sa_Evidence_s* zxmd_sa_AuthzDecisionStatement_GET_Evidence(struct zxmd_sa_AuthzDecisionStatement_s* x, int n)
{
  struct zxmd_sa_Evidence_s* y;
  if (!x) return 0;
  for (y = x->Evidence; n>=0 && y; --n, y = (struct zxmd_sa_Evidence_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zxmd_sa_AuthzDecisionStatement_POP_Evidence) */

struct zxmd_sa_Evidence_s* zxmd_sa_AuthzDecisionStatement_POP_Evidence(struct zxmd_sa_AuthzDecisionStatement_s* x)
{
  struct zxmd_sa_Evidence_s* y;
  if (!x) return 0;
  y = x->Evidence;
  if (y)
    x->Evidence = (struct zxmd_sa_Evidence_s*)y->gg.g.n;
  return y;
}

/* FUNC(zxmd_sa_AuthzDecisionStatement_PUSH_Evidence) */

void zxmd_sa_AuthzDecisionStatement_PUSH_Evidence(struct zxmd_sa_AuthzDecisionStatement_s* x, struct zxmd_sa_Evidence_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Evidence->gg.g;
  x->Evidence = z;
}

/* FUNC(zxmd_sa_AuthzDecisionStatement_REV_Evidence) */

void zxmd_sa_AuthzDecisionStatement_REV_Evidence(struct zxmd_sa_AuthzDecisionStatement_s* x)
{
  struct zxmd_sa_Evidence_s* nxt;
  struct zxmd_sa_Evidence_s* y;
  if (!x) return;
  y = x->Evidence;
  if (!y) return;
  x->Evidence = 0;
  while (y) {
    nxt = (struct zxmd_sa_Evidence_s*)y->gg.g.n;
    y->gg.g.n = &x->Evidence->gg.g;
    x->Evidence = y;
    y = nxt;
  }
}

/* FUNC(zxmd_sa_AuthzDecisionStatement_PUT_Evidence) */

void zxmd_sa_AuthzDecisionStatement_PUT_Evidence(struct zxmd_sa_AuthzDecisionStatement_s* x, int n, struct zxmd_sa_Evidence_s* z)
{
  struct zxmd_sa_Evidence_s* y;
  if (!x || !z) return;
  y = x->Evidence;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Evidence = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zxmd_sa_Evidence_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zxmd_sa_AuthzDecisionStatement_ADD_Evidence) */

void zxmd_sa_AuthzDecisionStatement_ADD_Evidence(struct zxmd_sa_AuthzDecisionStatement_s* x, int n, struct zxmd_sa_Evidence_s* z)
{
  struct zxmd_sa_Evidence_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->Evidence->gg.g;
    x->Evidence = z;
    return;
  case -1:
    y = x->Evidence;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zxmd_sa_Evidence_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Evidence; n > 1 && y; --n, y = (struct zxmd_sa_Evidence_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zxmd_sa_AuthzDecisionStatement_DEL_Evidence) */

void zxmd_sa_AuthzDecisionStatement_DEL_Evidence(struct zxmd_sa_AuthzDecisionStatement_s* x, int n)
{
  struct zxmd_sa_Evidence_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Evidence = (struct zxmd_sa_Evidence_s*)x->Evidence->gg.g.n;
    return;
  case -1:
    y = (struct zxmd_sa_Evidence_s*)x->Evidence;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zxmd_sa_Evidence_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Evidence; n > 1 && y->gg.g.n; --n, y = (struct zxmd_sa_Evidence_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

/* FUNC(zxmd_sa_AuthzDecisionStatement_GET_Resource) */
struct zx_str_s* zxmd_sa_AuthzDecisionStatement_GET_Resource(struct zxmd_sa_AuthzDecisionStatement_s* x) { return x->Resource; }
/* FUNC(zxmd_sa_AuthzDecisionStatement_PUT_Resource) */
void zxmd_sa_AuthzDecisionStatement_PUT_Resource(struct zxmd_sa_AuthzDecisionStatement_s* x, struct zx_str_s* y) { x->Resource = y; }
/* FUNC(zxmd_sa_AuthzDecisionStatement_GET_Decision) */
struct zx_str_s* zxmd_sa_AuthzDecisionStatement_GET_Decision(struct zxmd_sa_AuthzDecisionStatement_s* x) { return x->Decision; }
/* FUNC(zxmd_sa_AuthzDecisionStatement_PUT_Decision) */
void zxmd_sa_AuthzDecisionStatement_PUT_Decision(struct zxmd_sa_AuthzDecisionStatement_s* x, struct zx_str_s* y) { x->Decision = y; }





/* FUNC(zxmd_sa_BaseID_GET_NameQualifier) */
struct zx_str_s* zxmd_sa_BaseID_GET_NameQualifier(struct zxmd_sa_BaseID_s* x) { return x->NameQualifier; }
/* FUNC(zxmd_sa_BaseID_PUT_NameQualifier) */
void zxmd_sa_BaseID_PUT_NameQualifier(struct zxmd_sa_BaseID_s* x, struct zx_str_s* y) { x->NameQualifier = y; }
/* FUNC(zxmd_sa_BaseID_GET_SPNameQualifier) */
struct zx_str_s* zxmd_sa_BaseID_GET_SPNameQualifier(struct zxmd_sa_BaseID_s* x) { return x->SPNameQualifier; }
/* FUNC(zxmd_sa_BaseID_PUT_SPNameQualifier) */
void zxmd_sa_BaseID_PUT_SPNameQualifier(struct zxmd_sa_BaseID_s* x, struct zx_str_s* y) { x->SPNameQualifier = y; }







/* FUNC(zxmd_sa_Conditions_NUM_Condition) */

int zxmd_sa_Conditions_NUM_Condition(struct zxmd_sa_Conditions_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Condition; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zxmd_sa_Conditions_GET_Condition) */

struct zx_elem_s* zxmd_sa_Conditions_GET_Condition(struct zxmd_sa_Conditions_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->Condition; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zxmd_sa_Conditions_POP_Condition) */

struct zx_elem_s* zxmd_sa_Conditions_POP_Condition(struct zxmd_sa_Conditions_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->Condition;
  if (y)
    x->Condition = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zxmd_sa_Conditions_PUSH_Condition) */

void zxmd_sa_Conditions_PUSH_Condition(struct zxmd_sa_Conditions_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->Condition->g;
  x->Condition = z;
}

/* FUNC(zxmd_sa_Conditions_REV_Condition) */

void zxmd_sa_Conditions_REV_Condition(struct zxmd_sa_Conditions_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->Condition;
  if (!y) return;
  x->Condition = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->Condition->g;
    x->Condition = y;
    y = nxt;
  }
}

/* FUNC(zxmd_sa_Conditions_PUT_Condition) */

void zxmd_sa_Conditions_PUT_Condition(struct zxmd_sa_Conditions_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->Condition;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->Condition = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zxmd_sa_Conditions_ADD_Condition) */

void zxmd_sa_Conditions_ADD_Condition(struct zxmd_sa_Conditions_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->Condition->g;
    x->Condition = z;
    return;
  case -1:
    y = x->Condition;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->Condition; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zxmd_sa_Conditions_DEL_Condition) */

void zxmd_sa_Conditions_DEL_Condition(struct zxmd_sa_Conditions_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Condition = (struct zx_elem_s*)x->Condition->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->Condition;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->Condition; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}



/* FUNC(zxmd_sa_Conditions_NUM_AudienceRestriction) */

int zxmd_sa_Conditions_NUM_AudienceRestriction(struct zxmd_sa_Conditions_s* x)
{
  struct zxmd_sa_AudienceRestriction_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->AudienceRestriction; y; ++n, y = (struct zxmd_sa_AudienceRestriction_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zxmd_sa_Conditions_GET_AudienceRestriction) */

struct zxmd_sa_AudienceRestriction_s* zxmd_sa_Conditions_GET_AudienceRestriction(struct zxmd_sa_Conditions_s* x, int n)
{
  struct zxmd_sa_AudienceRestriction_s* y;
  if (!x) return 0;
  for (y = x->AudienceRestriction; n>=0 && y; --n, y = (struct zxmd_sa_AudienceRestriction_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zxmd_sa_Conditions_POP_AudienceRestriction) */

struct zxmd_sa_AudienceRestriction_s* zxmd_sa_Conditions_POP_AudienceRestriction(struct zxmd_sa_Conditions_s* x)
{
  struct zxmd_sa_AudienceRestriction_s* y;
  if (!x) return 0;
  y = x->AudienceRestriction;
  if (y)
    x->AudienceRestriction = (struct zxmd_sa_AudienceRestriction_s*)y->gg.g.n;
  return y;
}

/* FUNC(zxmd_sa_Conditions_PUSH_AudienceRestriction) */

void zxmd_sa_Conditions_PUSH_AudienceRestriction(struct zxmd_sa_Conditions_s* x, struct zxmd_sa_AudienceRestriction_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->AudienceRestriction->gg.g;
  x->AudienceRestriction = z;
}

/* FUNC(zxmd_sa_Conditions_REV_AudienceRestriction) */

void zxmd_sa_Conditions_REV_AudienceRestriction(struct zxmd_sa_Conditions_s* x)
{
  struct zxmd_sa_AudienceRestriction_s* nxt;
  struct zxmd_sa_AudienceRestriction_s* y;
  if (!x) return;
  y = x->AudienceRestriction;
  if (!y) return;
  x->AudienceRestriction = 0;
  while (y) {
    nxt = (struct zxmd_sa_AudienceRestriction_s*)y->gg.g.n;
    y->gg.g.n = &x->AudienceRestriction->gg.g;
    x->AudienceRestriction = y;
    y = nxt;
  }
}

/* FUNC(zxmd_sa_Conditions_PUT_AudienceRestriction) */

void zxmd_sa_Conditions_PUT_AudienceRestriction(struct zxmd_sa_Conditions_s* x, int n, struct zxmd_sa_AudienceRestriction_s* z)
{
  struct zxmd_sa_AudienceRestriction_s* y;
  if (!x || !z) return;
  y = x->AudienceRestriction;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->AudienceRestriction = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zxmd_sa_AudienceRestriction_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zxmd_sa_Conditions_ADD_AudienceRestriction) */

void zxmd_sa_Conditions_ADD_AudienceRestriction(struct zxmd_sa_Conditions_s* x, int n, struct zxmd_sa_AudienceRestriction_s* z)
{
  struct zxmd_sa_AudienceRestriction_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->AudienceRestriction->gg.g;
    x->AudienceRestriction = z;
    return;
  case -1:
    y = x->AudienceRestriction;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zxmd_sa_AudienceRestriction_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->AudienceRestriction; n > 1 && y; --n, y = (struct zxmd_sa_AudienceRestriction_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zxmd_sa_Conditions_DEL_AudienceRestriction) */

void zxmd_sa_Conditions_DEL_AudienceRestriction(struct zxmd_sa_Conditions_s* x, int n)
{
  struct zxmd_sa_AudienceRestriction_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->AudienceRestriction = (struct zxmd_sa_AudienceRestriction_s*)x->AudienceRestriction->gg.g.n;
    return;
  case -1:
    y = (struct zxmd_sa_AudienceRestriction_s*)x->AudienceRestriction;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zxmd_sa_AudienceRestriction_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->AudienceRestriction; n > 1 && y->gg.g.n; --n, y = (struct zxmd_sa_AudienceRestriction_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zxmd_sa_Conditions_NUM_OneTimeUse) */

int zxmd_sa_Conditions_NUM_OneTimeUse(struct zxmd_sa_Conditions_s* x)
{
  struct zxmd_sa_OneTimeUse_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->OneTimeUse; y; ++n, y = (struct zxmd_sa_OneTimeUse_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zxmd_sa_Conditions_GET_OneTimeUse) */

struct zxmd_sa_OneTimeUse_s* zxmd_sa_Conditions_GET_OneTimeUse(struct zxmd_sa_Conditions_s* x, int n)
{
  struct zxmd_sa_OneTimeUse_s* y;
  if (!x) return 0;
  for (y = x->OneTimeUse; n>=0 && y; --n, y = (struct zxmd_sa_OneTimeUse_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zxmd_sa_Conditions_POP_OneTimeUse) */

struct zxmd_sa_OneTimeUse_s* zxmd_sa_Conditions_POP_OneTimeUse(struct zxmd_sa_Conditions_s* x)
{
  struct zxmd_sa_OneTimeUse_s* y;
  if (!x) return 0;
  y = x->OneTimeUse;
  if (y)
    x->OneTimeUse = (struct zxmd_sa_OneTimeUse_s*)y->gg.g.n;
  return y;
}

/* FUNC(zxmd_sa_Conditions_PUSH_OneTimeUse) */

void zxmd_sa_Conditions_PUSH_OneTimeUse(struct zxmd_sa_Conditions_s* x, struct zxmd_sa_OneTimeUse_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->OneTimeUse->gg.g;
  x->OneTimeUse = z;
}

/* FUNC(zxmd_sa_Conditions_REV_OneTimeUse) */

void zxmd_sa_Conditions_REV_OneTimeUse(struct zxmd_sa_Conditions_s* x)
{
  struct zxmd_sa_OneTimeUse_s* nxt;
  struct zxmd_sa_OneTimeUse_s* y;
  if (!x) return;
  y = x->OneTimeUse;
  if (!y) return;
  x->OneTimeUse = 0;
  while (y) {
    nxt = (struct zxmd_sa_OneTimeUse_s*)y->gg.g.n;
    y->gg.g.n = &x->OneTimeUse->gg.g;
    x->OneTimeUse = y;
    y = nxt;
  }
}

/* FUNC(zxmd_sa_Conditions_PUT_OneTimeUse) */

void zxmd_sa_Conditions_PUT_OneTimeUse(struct zxmd_sa_Conditions_s* x, int n, struct zxmd_sa_OneTimeUse_s* z)
{
  struct zxmd_sa_OneTimeUse_s* y;
  if (!x || !z) return;
  y = x->OneTimeUse;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->OneTimeUse = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zxmd_sa_OneTimeUse_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zxmd_sa_Conditions_ADD_OneTimeUse) */

void zxmd_sa_Conditions_ADD_OneTimeUse(struct zxmd_sa_Conditions_s* x, int n, struct zxmd_sa_OneTimeUse_s* z)
{
  struct zxmd_sa_OneTimeUse_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->OneTimeUse->gg.g;
    x->OneTimeUse = z;
    return;
  case -1:
    y = x->OneTimeUse;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zxmd_sa_OneTimeUse_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->OneTimeUse; n > 1 && y; --n, y = (struct zxmd_sa_OneTimeUse_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zxmd_sa_Conditions_DEL_OneTimeUse) */

void zxmd_sa_Conditions_DEL_OneTimeUse(struct zxmd_sa_Conditions_s* x, int n)
{
  struct zxmd_sa_OneTimeUse_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->OneTimeUse = (struct zxmd_sa_OneTimeUse_s*)x->OneTimeUse->gg.g.n;
    return;
  case -1:
    y = (struct zxmd_sa_OneTimeUse_s*)x->OneTimeUse;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zxmd_sa_OneTimeUse_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->OneTimeUse; n > 1 && y->gg.g.n; --n, y = (struct zxmd_sa_OneTimeUse_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zxmd_sa_Conditions_NUM_ProxyRestriction) */

int zxmd_sa_Conditions_NUM_ProxyRestriction(struct zxmd_sa_Conditions_s* x)
{
  struct zxmd_sa_ProxyRestriction_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->ProxyRestriction; y; ++n, y = (struct zxmd_sa_ProxyRestriction_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zxmd_sa_Conditions_GET_ProxyRestriction) */

struct zxmd_sa_ProxyRestriction_s* zxmd_sa_Conditions_GET_ProxyRestriction(struct zxmd_sa_Conditions_s* x, int n)
{
  struct zxmd_sa_ProxyRestriction_s* y;
  if (!x) return 0;
  for (y = x->ProxyRestriction; n>=0 && y; --n, y = (struct zxmd_sa_ProxyRestriction_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zxmd_sa_Conditions_POP_ProxyRestriction) */

struct zxmd_sa_ProxyRestriction_s* zxmd_sa_Conditions_POP_ProxyRestriction(struct zxmd_sa_Conditions_s* x)
{
  struct zxmd_sa_ProxyRestriction_s* y;
  if (!x) return 0;
  y = x->ProxyRestriction;
  if (y)
    x->ProxyRestriction = (struct zxmd_sa_ProxyRestriction_s*)y->gg.g.n;
  return y;
}

/* FUNC(zxmd_sa_Conditions_PUSH_ProxyRestriction) */

void zxmd_sa_Conditions_PUSH_ProxyRestriction(struct zxmd_sa_Conditions_s* x, struct zxmd_sa_ProxyRestriction_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->ProxyRestriction->gg.g;
  x->ProxyRestriction = z;
}

/* FUNC(zxmd_sa_Conditions_REV_ProxyRestriction) */

void zxmd_sa_Conditions_REV_ProxyRestriction(struct zxmd_sa_Conditions_s* x)
{
  struct zxmd_sa_ProxyRestriction_s* nxt;
  struct zxmd_sa_ProxyRestriction_s* y;
  if (!x) return;
  y = x->ProxyRestriction;
  if (!y) return;
  x->ProxyRestriction = 0;
  while (y) {
    nxt = (struct zxmd_sa_ProxyRestriction_s*)y->gg.g.n;
    y->gg.g.n = &x->ProxyRestriction->gg.g;
    x->ProxyRestriction = y;
    y = nxt;
  }
}

/* FUNC(zxmd_sa_Conditions_PUT_ProxyRestriction) */

void zxmd_sa_Conditions_PUT_ProxyRestriction(struct zxmd_sa_Conditions_s* x, int n, struct zxmd_sa_ProxyRestriction_s* z)
{
  struct zxmd_sa_ProxyRestriction_s* y;
  if (!x || !z) return;
  y = x->ProxyRestriction;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->ProxyRestriction = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zxmd_sa_ProxyRestriction_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zxmd_sa_Conditions_ADD_ProxyRestriction) */

void zxmd_sa_Conditions_ADD_ProxyRestriction(struct zxmd_sa_Conditions_s* x, int n, struct zxmd_sa_ProxyRestriction_s* z)
{
  struct zxmd_sa_ProxyRestriction_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->ProxyRestriction->gg.g;
    x->ProxyRestriction = z;
    return;
  case -1:
    y = x->ProxyRestriction;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zxmd_sa_ProxyRestriction_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->ProxyRestriction; n > 1 && y; --n, y = (struct zxmd_sa_ProxyRestriction_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zxmd_sa_Conditions_DEL_ProxyRestriction) */

void zxmd_sa_Conditions_DEL_ProxyRestriction(struct zxmd_sa_Conditions_s* x, int n)
{
  struct zxmd_sa_ProxyRestriction_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->ProxyRestriction = (struct zxmd_sa_ProxyRestriction_s*)x->ProxyRestriction->gg.g.n;
    return;
  case -1:
    y = (struct zxmd_sa_ProxyRestriction_s*)x->ProxyRestriction;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zxmd_sa_ProxyRestriction_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->ProxyRestriction; n > 1 && y->gg.g.n; --n, y = (struct zxmd_sa_ProxyRestriction_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

/* FUNC(zxmd_sa_Conditions_GET_NotBefore) */
struct zx_str_s* zxmd_sa_Conditions_GET_NotBefore(struct zxmd_sa_Conditions_s* x) { return x->NotBefore; }
/* FUNC(zxmd_sa_Conditions_PUT_NotBefore) */
void zxmd_sa_Conditions_PUT_NotBefore(struct zxmd_sa_Conditions_s* x, struct zx_str_s* y) { x->NotBefore = y; }
/* FUNC(zxmd_sa_Conditions_GET_NotOnOrAfter) */
struct zx_str_s* zxmd_sa_Conditions_GET_NotOnOrAfter(struct zxmd_sa_Conditions_s* x) { return x->NotOnOrAfter; }
/* FUNC(zxmd_sa_Conditions_PUT_NotOnOrAfter) */
void zxmd_sa_Conditions_PUT_NotOnOrAfter(struct zxmd_sa_Conditions_s* x, struct zx_str_s* y) { x->NotOnOrAfter = y; }







/* FUNC(zxmd_sa_EncryptedAssertion_NUM_EncryptedData) */

int zxmd_sa_EncryptedAssertion_NUM_EncryptedData(struct zxmd_sa_EncryptedAssertion_s* x)
{
  struct zxmd_xenc_EncryptedData_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->EncryptedData; y; ++n, y = (struct zxmd_xenc_EncryptedData_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zxmd_sa_EncryptedAssertion_GET_EncryptedData) */

struct zxmd_xenc_EncryptedData_s* zxmd_sa_EncryptedAssertion_GET_EncryptedData(struct zxmd_sa_EncryptedAssertion_s* x, int n)
{
  struct zxmd_xenc_EncryptedData_s* y;
  if (!x) return 0;
  for (y = x->EncryptedData; n>=0 && y; --n, y = (struct zxmd_xenc_EncryptedData_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zxmd_sa_EncryptedAssertion_POP_EncryptedData) */

struct zxmd_xenc_EncryptedData_s* zxmd_sa_EncryptedAssertion_POP_EncryptedData(struct zxmd_sa_EncryptedAssertion_s* x)
{
  struct zxmd_xenc_EncryptedData_s* y;
  if (!x) return 0;
  y = x->EncryptedData;
  if (y)
    x->EncryptedData = (struct zxmd_xenc_EncryptedData_s*)y->gg.g.n;
  return y;
}

/* FUNC(zxmd_sa_EncryptedAssertion_PUSH_EncryptedData) */

void zxmd_sa_EncryptedAssertion_PUSH_EncryptedData(struct zxmd_sa_EncryptedAssertion_s* x, struct zxmd_xenc_EncryptedData_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->EncryptedData->gg.g;
  x->EncryptedData = z;
}

/* FUNC(zxmd_sa_EncryptedAssertion_REV_EncryptedData) */

void zxmd_sa_EncryptedAssertion_REV_EncryptedData(struct zxmd_sa_EncryptedAssertion_s* x)
{
  struct zxmd_xenc_EncryptedData_s* nxt;
  struct zxmd_xenc_EncryptedData_s* y;
  if (!x) return;
  y = x->EncryptedData;
  if (!y) return;
  x->EncryptedData = 0;
  while (y) {
    nxt = (struct zxmd_xenc_EncryptedData_s*)y->gg.g.n;
    y->gg.g.n = &x->EncryptedData->gg.g;
    x->EncryptedData = y;
    y = nxt;
  }
}

/* FUNC(zxmd_sa_EncryptedAssertion_PUT_EncryptedData) */

void zxmd_sa_EncryptedAssertion_PUT_EncryptedData(struct zxmd_sa_EncryptedAssertion_s* x, int n, struct zxmd_xenc_EncryptedData_s* z)
{
  struct zxmd_xenc_EncryptedData_s* y;
  if (!x || !z) return;
  y = x->EncryptedData;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->EncryptedData = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zxmd_xenc_EncryptedData_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zxmd_sa_EncryptedAssertion_ADD_EncryptedData) */

void zxmd_sa_EncryptedAssertion_ADD_EncryptedData(struct zxmd_sa_EncryptedAssertion_s* x, int n, struct zxmd_xenc_EncryptedData_s* z)
{
  struct zxmd_xenc_EncryptedData_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->EncryptedData->gg.g;
    x->EncryptedData = z;
    return;
  case -1:
    y = x->EncryptedData;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zxmd_xenc_EncryptedData_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->EncryptedData; n > 1 && y; --n, y = (struct zxmd_xenc_EncryptedData_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zxmd_sa_EncryptedAssertion_DEL_EncryptedData) */

void zxmd_sa_EncryptedAssertion_DEL_EncryptedData(struct zxmd_sa_EncryptedAssertion_s* x, int n)
{
  struct zxmd_xenc_EncryptedData_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->EncryptedData = (struct zxmd_xenc_EncryptedData_s*)x->EncryptedData->gg.g.n;
    return;
  case -1:
    y = (struct zxmd_xenc_EncryptedData_s*)x->EncryptedData;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zxmd_xenc_EncryptedData_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->EncryptedData; n > 1 && y->gg.g.n; --n, y = (struct zxmd_xenc_EncryptedData_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zxmd_sa_EncryptedAssertion_NUM_EncryptedKey) */

int zxmd_sa_EncryptedAssertion_NUM_EncryptedKey(struct zxmd_sa_EncryptedAssertion_s* x)
{
  struct zxmd_xenc_EncryptedKey_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->EncryptedKey; y; ++n, y = (struct zxmd_xenc_EncryptedKey_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zxmd_sa_EncryptedAssertion_GET_EncryptedKey) */

struct zxmd_xenc_EncryptedKey_s* zxmd_sa_EncryptedAssertion_GET_EncryptedKey(struct zxmd_sa_EncryptedAssertion_s* x, int n)
{
  struct zxmd_xenc_EncryptedKey_s* y;
  if (!x) return 0;
  for (y = x->EncryptedKey; n>=0 && y; --n, y = (struct zxmd_xenc_EncryptedKey_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zxmd_sa_EncryptedAssertion_POP_EncryptedKey) */

struct zxmd_xenc_EncryptedKey_s* zxmd_sa_EncryptedAssertion_POP_EncryptedKey(struct zxmd_sa_EncryptedAssertion_s* x)
{
  struct zxmd_xenc_EncryptedKey_s* y;
  if (!x) return 0;
  y = x->EncryptedKey;
  if (y)
    x->EncryptedKey = (struct zxmd_xenc_EncryptedKey_s*)y->gg.g.n;
  return y;
}

/* FUNC(zxmd_sa_EncryptedAssertion_PUSH_EncryptedKey) */

void zxmd_sa_EncryptedAssertion_PUSH_EncryptedKey(struct zxmd_sa_EncryptedAssertion_s* x, struct zxmd_xenc_EncryptedKey_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->EncryptedKey->gg.g;
  x->EncryptedKey = z;
}

/* FUNC(zxmd_sa_EncryptedAssertion_REV_EncryptedKey) */

void zxmd_sa_EncryptedAssertion_REV_EncryptedKey(struct zxmd_sa_EncryptedAssertion_s* x)
{
  struct zxmd_xenc_EncryptedKey_s* nxt;
  struct zxmd_xenc_EncryptedKey_s* y;
  if (!x) return;
  y = x->EncryptedKey;
  if (!y) return;
  x->EncryptedKey = 0;
  while (y) {
    nxt = (struct zxmd_xenc_EncryptedKey_s*)y->gg.g.n;
    y->gg.g.n = &x->EncryptedKey->gg.g;
    x->EncryptedKey = y;
    y = nxt;
  }
}

/* FUNC(zxmd_sa_EncryptedAssertion_PUT_EncryptedKey) */

void zxmd_sa_EncryptedAssertion_PUT_EncryptedKey(struct zxmd_sa_EncryptedAssertion_s* x, int n, struct zxmd_xenc_EncryptedKey_s* z)
{
  struct zxmd_xenc_EncryptedKey_s* y;
  if (!x || !z) return;
  y = x->EncryptedKey;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->EncryptedKey = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zxmd_xenc_EncryptedKey_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zxmd_sa_EncryptedAssertion_ADD_EncryptedKey) */

void zxmd_sa_EncryptedAssertion_ADD_EncryptedKey(struct zxmd_sa_EncryptedAssertion_s* x, int n, struct zxmd_xenc_EncryptedKey_s* z)
{
  struct zxmd_xenc_EncryptedKey_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->EncryptedKey->gg.g;
    x->EncryptedKey = z;
    return;
  case -1:
    y = x->EncryptedKey;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zxmd_xenc_EncryptedKey_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->EncryptedKey; n > 1 && y; --n, y = (struct zxmd_xenc_EncryptedKey_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zxmd_sa_EncryptedAssertion_DEL_EncryptedKey) */

void zxmd_sa_EncryptedAssertion_DEL_EncryptedKey(struct zxmd_sa_EncryptedAssertion_s* x, int n)
{
  struct zxmd_xenc_EncryptedKey_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->EncryptedKey = (struct zxmd_xenc_EncryptedKey_s*)x->EncryptedKey->gg.g.n;
    return;
  case -1:
    y = (struct zxmd_xenc_EncryptedKey_s*)x->EncryptedKey;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zxmd_xenc_EncryptedKey_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->EncryptedKey; n > 1 && y->gg.g.n; --n, y = (struct zxmd_xenc_EncryptedKey_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}








/* FUNC(zxmd_sa_EncryptedAttribute_NUM_EncryptedData) */

int zxmd_sa_EncryptedAttribute_NUM_EncryptedData(struct zxmd_sa_EncryptedAttribute_s* x)
{
  struct zxmd_xenc_EncryptedData_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->EncryptedData; y; ++n, y = (struct zxmd_xenc_EncryptedData_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zxmd_sa_EncryptedAttribute_GET_EncryptedData) */

struct zxmd_xenc_EncryptedData_s* zxmd_sa_EncryptedAttribute_GET_EncryptedData(struct zxmd_sa_EncryptedAttribute_s* x, int n)
{
  struct zxmd_xenc_EncryptedData_s* y;
  if (!x) return 0;
  for (y = x->EncryptedData; n>=0 && y; --n, y = (struct zxmd_xenc_EncryptedData_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zxmd_sa_EncryptedAttribute_POP_EncryptedData) */

struct zxmd_xenc_EncryptedData_s* zxmd_sa_EncryptedAttribute_POP_EncryptedData(struct zxmd_sa_EncryptedAttribute_s* x)
{
  struct zxmd_xenc_EncryptedData_s* y;
  if (!x) return 0;
  y = x->EncryptedData;
  if (y)
    x->EncryptedData = (struct zxmd_xenc_EncryptedData_s*)y->gg.g.n;
  return y;
}

/* FUNC(zxmd_sa_EncryptedAttribute_PUSH_EncryptedData) */

void zxmd_sa_EncryptedAttribute_PUSH_EncryptedData(struct zxmd_sa_EncryptedAttribute_s* x, struct zxmd_xenc_EncryptedData_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->EncryptedData->gg.g;
  x->EncryptedData = z;
}

/* FUNC(zxmd_sa_EncryptedAttribute_REV_EncryptedData) */

void zxmd_sa_EncryptedAttribute_REV_EncryptedData(struct zxmd_sa_EncryptedAttribute_s* x)
{
  struct zxmd_xenc_EncryptedData_s* nxt;
  struct zxmd_xenc_EncryptedData_s* y;
  if (!x) return;
  y = x->EncryptedData;
  if (!y) return;
  x->EncryptedData = 0;
  while (y) {
    nxt = (struct zxmd_xenc_EncryptedData_s*)y->gg.g.n;
    y->gg.g.n = &x->EncryptedData->gg.g;
    x->EncryptedData = y;
    y = nxt;
  }
}

/* FUNC(zxmd_sa_EncryptedAttribute_PUT_EncryptedData) */

void zxmd_sa_EncryptedAttribute_PUT_EncryptedData(struct zxmd_sa_EncryptedAttribute_s* x, int n, struct zxmd_xenc_EncryptedData_s* z)
{
  struct zxmd_xenc_EncryptedData_s* y;
  if (!x || !z) return;
  y = x->EncryptedData;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->EncryptedData = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zxmd_xenc_EncryptedData_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zxmd_sa_EncryptedAttribute_ADD_EncryptedData) */

void zxmd_sa_EncryptedAttribute_ADD_EncryptedData(struct zxmd_sa_EncryptedAttribute_s* x, int n, struct zxmd_xenc_EncryptedData_s* z)
{
  struct zxmd_xenc_EncryptedData_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->EncryptedData->gg.g;
    x->EncryptedData = z;
    return;
  case -1:
    y = x->EncryptedData;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zxmd_xenc_EncryptedData_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->EncryptedData; n > 1 && y; --n, y = (struct zxmd_xenc_EncryptedData_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zxmd_sa_EncryptedAttribute_DEL_EncryptedData) */

void zxmd_sa_EncryptedAttribute_DEL_EncryptedData(struct zxmd_sa_EncryptedAttribute_s* x, int n)
{
  struct zxmd_xenc_EncryptedData_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->EncryptedData = (struct zxmd_xenc_EncryptedData_s*)x->EncryptedData->gg.g.n;
    return;
  case -1:
    y = (struct zxmd_xenc_EncryptedData_s*)x->EncryptedData;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zxmd_xenc_EncryptedData_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->EncryptedData; n > 1 && y->gg.g.n; --n, y = (struct zxmd_xenc_EncryptedData_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zxmd_sa_EncryptedAttribute_NUM_EncryptedKey) */

int zxmd_sa_EncryptedAttribute_NUM_EncryptedKey(struct zxmd_sa_EncryptedAttribute_s* x)
{
  struct zxmd_xenc_EncryptedKey_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->EncryptedKey; y; ++n, y = (struct zxmd_xenc_EncryptedKey_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zxmd_sa_EncryptedAttribute_GET_EncryptedKey) */

struct zxmd_xenc_EncryptedKey_s* zxmd_sa_EncryptedAttribute_GET_EncryptedKey(struct zxmd_sa_EncryptedAttribute_s* x, int n)
{
  struct zxmd_xenc_EncryptedKey_s* y;
  if (!x) return 0;
  for (y = x->EncryptedKey; n>=0 && y; --n, y = (struct zxmd_xenc_EncryptedKey_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zxmd_sa_EncryptedAttribute_POP_EncryptedKey) */

struct zxmd_xenc_EncryptedKey_s* zxmd_sa_EncryptedAttribute_POP_EncryptedKey(struct zxmd_sa_EncryptedAttribute_s* x)
{
  struct zxmd_xenc_EncryptedKey_s* y;
  if (!x) return 0;
  y = x->EncryptedKey;
  if (y)
    x->EncryptedKey = (struct zxmd_xenc_EncryptedKey_s*)y->gg.g.n;
  return y;
}

/* FUNC(zxmd_sa_EncryptedAttribute_PUSH_EncryptedKey) */

void zxmd_sa_EncryptedAttribute_PUSH_EncryptedKey(struct zxmd_sa_EncryptedAttribute_s* x, struct zxmd_xenc_EncryptedKey_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->EncryptedKey->gg.g;
  x->EncryptedKey = z;
}

/* FUNC(zxmd_sa_EncryptedAttribute_REV_EncryptedKey) */

void zxmd_sa_EncryptedAttribute_REV_EncryptedKey(struct zxmd_sa_EncryptedAttribute_s* x)
{
  struct zxmd_xenc_EncryptedKey_s* nxt;
  struct zxmd_xenc_EncryptedKey_s* y;
  if (!x) return;
  y = x->EncryptedKey;
  if (!y) return;
  x->EncryptedKey = 0;
  while (y) {
    nxt = (struct zxmd_xenc_EncryptedKey_s*)y->gg.g.n;
    y->gg.g.n = &x->EncryptedKey->gg.g;
    x->EncryptedKey = y;
    y = nxt;
  }
}

/* FUNC(zxmd_sa_EncryptedAttribute_PUT_EncryptedKey) */

void zxmd_sa_EncryptedAttribute_PUT_EncryptedKey(struct zxmd_sa_EncryptedAttribute_s* x, int n, struct zxmd_xenc_EncryptedKey_s* z)
{
  struct zxmd_xenc_EncryptedKey_s* y;
  if (!x || !z) return;
  y = x->EncryptedKey;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->EncryptedKey = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zxmd_xenc_EncryptedKey_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zxmd_sa_EncryptedAttribute_ADD_EncryptedKey) */

void zxmd_sa_EncryptedAttribute_ADD_EncryptedKey(struct zxmd_sa_EncryptedAttribute_s* x, int n, struct zxmd_xenc_EncryptedKey_s* z)
{
  struct zxmd_xenc_EncryptedKey_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->EncryptedKey->gg.g;
    x->EncryptedKey = z;
    return;
  case -1:
    y = x->EncryptedKey;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zxmd_xenc_EncryptedKey_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->EncryptedKey; n > 1 && y; --n, y = (struct zxmd_xenc_EncryptedKey_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zxmd_sa_EncryptedAttribute_DEL_EncryptedKey) */

void zxmd_sa_EncryptedAttribute_DEL_EncryptedKey(struct zxmd_sa_EncryptedAttribute_s* x, int n)
{
  struct zxmd_xenc_EncryptedKey_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->EncryptedKey = (struct zxmd_xenc_EncryptedKey_s*)x->EncryptedKey->gg.g.n;
    return;
  case -1:
    y = (struct zxmd_xenc_EncryptedKey_s*)x->EncryptedKey;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zxmd_xenc_EncryptedKey_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->EncryptedKey; n > 1 && y->gg.g.n; --n, y = (struct zxmd_xenc_EncryptedKey_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}








/* FUNC(zxmd_sa_EncryptedID_NUM_EncryptedData) */

int zxmd_sa_EncryptedID_NUM_EncryptedData(struct zxmd_sa_EncryptedID_s* x)
{
  struct zxmd_xenc_EncryptedData_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->EncryptedData; y; ++n, y = (struct zxmd_xenc_EncryptedData_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zxmd_sa_EncryptedID_GET_EncryptedData) */

struct zxmd_xenc_EncryptedData_s* zxmd_sa_EncryptedID_GET_EncryptedData(struct zxmd_sa_EncryptedID_s* x, int n)
{
  struct zxmd_xenc_EncryptedData_s* y;
  if (!x) return 0;
  for (y = x->EncryptedData; n>=0 && y; --n, y = (struct zxmd_xenc_EncryptedData_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zxmd_sa_EncryptedID_POP_EncryptedData) */

struct zxmd_xenc_EncryptedData_s* zxmd_sa_EncryptedID_POP_EncryptedData(struct zxmd_sa_EncryptedID_s* x)
{
  struct zxmd_xenc_EncryptedData_s* y;
  if (!x) return 0;
  y = x->EncryptedData;
  if (y)
    x->EncryptedData = (struct zxmd_xenc_EncryptedData_s*)y->gg.g.n;
  return y;
}

/* FUNC(zxmd_sa_EncryptedID_PUSH_EncryptedData) */

void zxmd_sa_EncryptedID_PUSH_EncryptedData(struct zxmd_sa_EncryptedID_s* x, struct zxmd_xenc_EncryptedData_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->EncryptedData->gg.g;
  x->EncryptedData = z;
}

/* FUNC(zxmd_sa_EncryptedID_REV_EncryptedData) */

void zxmd_sa_EncryptedID_REV_EncryptedData(struct zxmd_sa_EncryptedID_s* x)
{
  struct zxmd_xenc_EncryptedData_s* nxt;
  struct zxmd_xenc_EncryptedData_s* y;
  if (!x) return;
  y = x->EncryptedData;
  if (!y) return;
  x->EncryptedData = 0;
  while (y) {
    nxt = (struct zxmd_xenc_EncryptedData_s*)y->gg.g.n;
    y->gg.g.n = &x->EncryptedData->gg.g;
    x->EncryptedData = y;
    y = nxt;
  }
}

/* FUNC(zxmd_sa_EncryptedID_PUT_EncryptedData) */

void zxmd_sa_EncryptedID_PUT_EncryptedData(struct zxmd_sa_EncryptedID_s* x, int n, struct zxmd_xenc_EncryptedData_s* z)
{
  struct zxmd_xenc_EncryptedData_s* y;
  if (!x || !z) return;
  y = x->EncryptedData;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->EncryptedData = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zxmd_xenc_EncryptedData_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zxmd_sa_EncryptedID_ADD_EncryptedData) */

void zxmd_sa_EncryptedID_ADD_EncryptedData(struct zxmd_sa_EncryptedID_s* x, int n, struct zxmd_xenc_EncryptedData_s* z)
{
  struct zxmd_xenc_EncryptedData_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->EncryptedData->gg.g;
    x->EncryptedData = z;
    return;
  case -1:
    y = x->EncryptedData;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zxmd_xenc_EncryptedData_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->EncryptedData; n > 1 && y; --n, y = (struct zxmd_xenc_EncryptedData_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zxmd_sa_EncryptedID_DEL_EncryptedData) */

void zxmd_sa_EncryptedID_DEL_EncryptedData(struct zxmd_sa_EncryptedID_s* x, int n)
{
  struct zxmd_xenc_EncryptedData_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->EncryptedData = (struct zxmd_xenc_EncryptedData_s*)x->EncryptedData->gg.g.n;
    return;
  case -1:
    y = (struct zxmd_xenc_EncryptedData_s*)x->EncryptedData;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zxmd_xenc_EncryptedData_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->EncryptedData; n > 1 && y->gg.g.n; --n, y = (struct zxmd_xenc_EncryptedData_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zxmd_sa_EncryptedID_NUM_EncryptedKey) */

int zxmd_sa_EncryptedID_NUM_EncryptedKey(struct zxmd_sa_EncryptedID_s* x)
{
  struct zxmd_xenc_EncryptedKey_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->EncryptedKey; y; ++n, y = (struct zxmd_xenc_EncryptedKey_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zxmd_sa_EncryptedID_GET_EncryptedKey) */

struct zxmd_xenc_EncryptedKey_s* zxmd_sa_EncryptedID_GET_EncryptedKey(struct zxmd_sa_EncryptedID_s* x, int n)
{
  struct zxmd_xenc_EncryptedKey_s* y;
  if (!x) return 0;
  for (y = x->EncryptedKey; n>=0 && y; --n, y = (struct zxmd_xenc_EncryptedKey_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zxmd_sa_EncryptedID_POP_EncryptedKey) */

struct zxmd_xenc_EncryptedKey_s* zxmd_sa_EncryptedID_POP_EncryptedKey(struct zxmd_sa_EncryptedID_s* x)
{
  struct zxmd_xenc_EncryptedKey_s* y;
  if (!x) return 0;
  y = x->EncryptedKey;
  if (y)
    x->EncryptedKey = (struct zxmd_xenc_EncryptedKey_s*)y->gg.g.n;
  return y;
}

/* FUNC(zxmd_sa_EncryptedID_PUSH_EncryptedKey) */

void zxmd_sa_EncryptedID_PUSH_EncryptedKey(struct zxmd_sa_EncryptedID_s* x, struct zxmd_xenc_EncryptedKey_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->EncryptedKey->gg.g;
  x->EncryptedKey = z;
}

/* FUNC(zxmd_sa_EncryptedID_REV_EncryptedKey) */

void zxmd_sa_EncryptedID_REV_EncryptedKey(struct zxmd_sa_EncryptedID_s* x)
{
  struct zxmd_xenc_EncryptedKey_s* nxt;
  struct zxmd_xenc_EncryptedKey_s* y;
  if (!x) return;
  y = x->EncryptedKey;
  if (!y) return;
  x->EncryptedKey = 0;
  while (y) {
    nxt = (struct zxmd_xenc_EncryptedKey_s*)y->gg.g.n;
    y->gg.g.n = &x->EncryptedKey->gg.g;
    x->EncryptedKey = y;
    y = nxt;
  }
}

/* FUNC(zxmd_sa_EncryptedID_PUT_EncryptedKey) */

void zxmd_sa_EncryptedID_PUT_EncryptedKey(struct zxmd_sa_EncryptedID_s* x, int n, struct zxmd_xenc_EncryptedKey_s* z)
{
  struct zxmd_xenc_EncryptedKey_s* y;
  if (!x || !z) return;
  y = x->EncryptedKey;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->EncryptedKey = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zxmd_xenc_EncryptedKey_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zxmd_sa_EncryptedID_ADD_EncryptedKey) */

void zxmd_sa_EncryptedID_ADD_EncryptedKey(struct zxmd_sa_EncryptedID_s* x, int n, struct zxmd_xenc_EncryptedKey_s* z)
{
  struct zxmd_xenc_EncryptedKey_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->EncryptedKey->gg.g;
    x->EncryptedKey = z;
    return;
  case -1:
    y = x->EncryptedKey;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zxmd_xenc_EncryptedKey_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->EncryptedKey; n > 1 && y; --n, y = (struct zxmd_xenc_EncryptedKey_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zxmd_sa_EncryptedID_DEL_EncryptedKey) */

void zxmd_sa_EncryptedID_DEL_EncryptedKey(struct zxmd_sa_EncryptedID_s* x, int n)
{
  struct zxmd_xenc_EncryptedKey_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->EncryptedKey = (struct zxmd_xenc_EncryptedKey_s*)x->EncryptedKey->gg.g.n;
    return;
  case -1:
    y = (struct zxmd_xenc_EncryptedKey_s*)x->EncryptedKey;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zxmd_xenc_EncryptedKey_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->EncryptedKey; n > 1 && y->gg.g.n; --n, y = (struct zxmd_xenc_EncryptedKey_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}








/* FUNC(zxmd_sa_Evidence_NUM_AssertionIDRef) */

int zxmd_sa_Evidence_NUM_AssertionIDRef(struct zxmd_sa_Evidence_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->AssertionIDRef; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zxmd_sa_Evidence_GET_AssertionIDRef) */

struct zx_elem_s* zxmd_sa_Evidence_GET_AssertionIDRef(struct zxmd_sa_Evidence_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->AssertionIDRef; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zxmd_sa_Evidence_POP_AssertionIDRef) */

struct zx_elem_s* zxmd_sa_Evidence_POP_AssertionIDRef(struct zxmd_sa_Evidence_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->AssertionIDRef;
  if (y)
    x->AssertionIDRef = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zxmd_sa_Evidence_PUSH_AssertionIDRef) */

void zxmd_sa_Evidence_PUSH_AssertionIDRef(struct zxmd_sa_Evidence_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->AssertionIDRef->g;
  x->AssertionIDRef = z;
}

/* FUNC(zxmd_sa_Evidence_REV_AssertionIDRef) */

void zxmd_sa_Evidence_REV_AssertionIDRef(struct zxmd_sa_Evidence_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->AssertionIDRef;
  if (!y) return;
  x->AssertionIDRef = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->AssertionIDRef->g;
    x->AssertionIDRef = y;
    y = nxt;
  }
}

/* FUNC(zxmd_sa_Evidence_PUT_AssertionIDRef) */

void zxmd_sa_Evidence_PUT_AssertionIDRef(struct zxmd_sa_Evidence_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->AssertionIDRef;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->AssertionIDRef = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zxmd_sa_Evidence_ADD_AssertionIDRef) */

void zxmd_sa_Evidence_ADD_AssertionIDRef(struct zxmd_sa_Evidence_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->AssertionIDRef->g;
    x->AssertionIDRef = z;
    return;
  case -1:
    y = x->AssertionIDRef;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->AssertionIDRef; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zxmd_sa_Evidence_DEL_AssertionIDRef) */

void zxmd_sa_Evidence_DEL_AssertionIDRef(struct zxmd_sa_Evidence_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->AssertionIDRef = (struct zx_elem_s*)x->AssertionIDRef->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->AssertionIDRef;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->AssertionIDRef; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}



/* FUNC(zxmd_sa_Evidence_NUM_AssertionURIRef) */

int zxmd_sa_Evidence_NUM_AssertionURIRef(struct zxmd_sa_Evidence_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->AssertionURIRef; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zxmd_sa_Evidence_GET_AssertionURIRef) */

struct zx_elem_s* zxmd_sa_Evidence_GET_AssertionURIRef(struct zxmd_sa_Evidence_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->AssertionURIRef; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zxmd_sa_Evidence_POP_AssertionURIRef) */

struct zx_elem_s* zxmd_sa_Evidence_POP_AssertionURIRef(struct zxmd_sa_Evidence_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->AssertionURIRef;
  if (y)
    x->AssertionURIRef = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zxmd_sa_Evidence_PUSH_AssertionURIRef) */

void zxmd_sa_Evidence_PUSH_AssertionURIRef(struct zxmd_sa_Evidence_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->AssertionURIRef->g;
  x->AssertionURIRef = z;
}

/* FUNC(zxmd_sa_Evidence_REV_AssertionURIRef) */

void zxmd_sa_Evidence_REV_AssertionURIRef(struct zxmd_sa_Evidence_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->AssertionURIRef;
  if (!y) return;
  x->AssertionURIRef = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->AssertionURIRef->g;
    x->AssertionURIRef = y;
    y = nxt;
  }
}

/* FUNC(zxmd_sa_Evidence_PUT_AssertionURIRef) */

void zxmd_sa_Evidence_PUT_AssertionURIRef(struct zxmd_sa_Evidence_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->AssertionURIRef;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->AssertionURIRef = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zxmd_sa_Evidence_ADD_AssertionURIRef) */

void zxmd_sa_Evidence_ADD_AssertionURIRef(struct zxmd_sa_Evidence_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->AssertionURIRef->g;
    x->AssertionURIRef = z;
    return;
  case -1:
    y = x->AssertionURIRef;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->AssertionURIRef; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zxmd_sa_Evidence_DEL_AssertionURIRef) */

void zxmd_sa_Evidence_DEL_AssertionURIRef(struct zxmd_sa_Evidence_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->AssertionURIRef = (struct zx_elem_s*)x->AssertionURIRef->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->AssertionURIRef;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->AssertionURIRef; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}



/* FUNC(zxmd_sa_Evidence_NUM_Assertion) */

int zxmd_sa_Evidence_NUM_Assertion(struct zxmd_sa_Evidence_s* x)
{
  struct zxmd_sa_Assertion_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Assertion; y; ++n, y = (struct zxmd_sa_Assertion_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zxmd_sa_Evidence_GET_Assertion) */

struct zxmd_sa_Assertion_s* zxmd_sa_Evidence_GET_Assertion(struct zxmd_sa_Evidence_s* x, int n)
{
  struct zxmd_sa_Assertion_s* y;
  if (!x) return 0;
  for (y = x->Assertion; n>=0 && y; --n, y = (struct zxmd_sa_Assertion_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zxmd_sa_Evidence_POP_Assertion) */

struct zxmd_sa_Assertion_s* zxmd_sa_Evidence_POP_Assertion(struct zxmd_sa_Evidence_s* x)
{
  struct zxmd_sa_Assertion_s* y;
  if (!x) return 0;
  y = x->Assertion;
  if (y)
    x->Assertion = (struct zxmd_sa_Assertion_s*)y->gg.g.n;
  return y;
}

/* FUNC(zxmd_sa_Evidence_PUSH_Assertion) */

void zxmd_sa_Evidence_PUSH_Assertion(struct zxmd_sa_Evidence_s* x, struct zxmd_sa_Assertion_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Assertion->gg.g;
  x->Assertion = z;
}

/* FUNC(zxmd_sa_Evidence_REV_Assertion) */

void zxmd_sa_Evidence_REV_Assertion(struct zxmd_sa_Evidence_s* x)
{
  struct zxmd_sa_Assertion_s* nxt;
  struct zxmd_sa_Assertion_s* y;
  if (!x) return;
  y = x->Assertion;
  if (!y) return;
  x->Assertion = 0;
  while (y) {
    nxt = (struct zxmd_sa_Assertion_s*)y->gg.g.n;
    y->gg.g.n = &x->Assertion->gg.g;
    x->Assertion = y;
    y = nxt;
  }
}

/* FUNC(zxmd_sa_Evidence_PUT_Assertion) */

void zxmd_sa_Evidence_PUT_Assertion(struct zxmd_sa_Evidence_s* x, int n, struct zxmd_sa_Assertion_s* z)
{
  struct zxmd_sa_Assertion_s* y;
  if (!x || !z) return;
  y = x->Assertion;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Assertion = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zxmd_sa_Assertion_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zxmd_sa_Evidence_ADD_Assertion) */

void zxmd_sa_Evidence_ADD_Assertion(struct zxmd_sa_Evidence_s* x, int n, struct zxmd_sa_Assertion_s* z)
{
  struct zxmd_sa_Assertion_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->Assertion->gg.g;
    x->Assertion = z;
    return;
  case -1:
    y = x->Assertion;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zxmd_sa_Assertion_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Assertion; n > 1 && y; --n, y = (struct zxmd_sa_Assertion_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zxmd_sa_Evidence_DEL_Assertion) */

void zxmd_sa_Evidence_DEL_Assertion(struct zxmd_sa_Evidence_s* x, int n)
{
  struct zxmd_sa_Assertion_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Assertion = (struct zxmd_sa_Assertion_s*)x->Assertion->gg.g.n;
    return;
  case -1:
    y = (struct zxmd_sa_Assertion_s*)x->Assertion;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zxmd_sa_Assertion_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Assertion; n > 1 && y->gg.g.n; --n, y = (struct zxmd_sa_Assertion_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zxmd_sa_Evidence_NUM_EncryptedAssertion) */

int zxmd_sa_Evidence_NUM_EncryptedAssertion(struct zxmd_sa_Evidence_s* x)
{
  struct zxmd_sa_EncryptedAssertion_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->EncryptedAssertion; y; ++n, y = (struct zxmd_sa_EncryptedAssertion_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zxmd_sa_Evidence_GET_EncryptedAssertion) */

struct zxmd_sa_EncryptedAssertion_s* zxmd_sa_Evidence_GET_EncryptedAssertion(struct zxmd_sa_Evidence_s* x, int n)
{
  struct zxmd_sa_EncryptedAssertion_s* y;
  if (!x) return 0;
  for (y = x->EncryptedAssertion; n>=0 && y; --n, y = (struct zxmd_sa_EncryptedAssertion_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zxmd_sa_Evidence_POP_EncryptedAssertion) */

struct zxmd_sa_EncryptedAssertion_s* zxmd_sa_Evidence_POP_EncryptedAssertion(struct zxmd_sa_Evidence_s* x)
{
  struct zxmd_sa_EncryptedAssertion_s* y;
  if (!x) return 0;
  y = x->EncryptedAssertion;
  if (y)
    x->EncryptedAssertion = (struct zxmd_sa_EncryptedAssertion_s*)y->gg.g.n;
  return y;
}

/* FUNC(zxmd_sa_Evidence_PUSH_EncryptedAssertion) */

void zxmd_sa_Evidence_PUSH_EncryptedAssertion(struct zxmd_sa_Evidence_s* x, struct zxmd_sa_EncryptedAssertion_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->EncryptedAssertion->gg.g;
  x->EncryptedAssertion = z;
}

/* FUNC(zxmd_sa_Evidence_REV_EncryptedAssertion) */

void zxmd_sa_Evidence_REV_EncryptedAssertion(struct zxmd_sa_Evidence_s* x)
{
  struct zxmd_sa_EncryptedAssertion_s* nxt;
  struct zxmd_sa_EncryptedAssertion_s* y;
  if (!x) return;
  y = x->EncryptedAssertion;
  if (!y) return;
  x->EncryptedAssertion = 0;
  while (y) {
    nxt = (struct zxmd_sa_EncryptedAssertion_s*)y->gg.g.n;
    y->gg.g.n = &x->EncryptedAssertion->gg.g;
    x->EncryptedAssertion = y;
    y = nxt;
  }
}

/* FUNC(zxmd_sa_Evidence_PUT_EncryptedAssertion) */

void zxmd_sa_Evidence_PUT_EncryptedAssertion(struct zxmd_sa_Evidence_s* x, int n, struct zxmd_sa_EncryptedAssertion_s* z)
{
  struct zxmd_sa_EncryptedAssertion_s* y;
  if (!x || !z) return;
  y = x->EncryptedAssertion;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->EncryptedAssertion = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zxmd_sa_EncryptedAssertion_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zxmd_sa_Evidence_ADD_EncryptedAssertion) */

void zxmd_sa_Evidence_ADD_EncryptedAssertion(struct zxmd_sa_Evidence_s* x, int n, struct zxmd_sa_EncryptedAssertion_s* z)
{
  struct zxmd_sa_EncryptedAssertion_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->EncryptedAssertion->gg.g;
    x->EncryptedAssertion = z;
    return;
  case -1:
    y = x->EncryptedAssertion;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zxmd_sa_EncryptedAssertion_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->EncryptedAssertion; n > 1 && y; --n, y = (struct zxmd_sa_EncryptedAssertion_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zxmd_sa_Evidence_DEL_EncryptedAssertion) */

void zxmd_sa_Evidence_DEL_EncryptedAssertion(struct zxmd_sa_Evidence_s* x, int n)
{
  struct zxmd_sa_EncryptedAssertion_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->EncryptedAssertion = (struct zxmd_sa_EncryptedAssertion_s*)x->EncryptedAssertion->gg.g.n;
    return;
  case -1:
    y = (struct zxmd_sa_EncryptedAssertion_s*)x->EncryptedAssertion;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zxmd_sa_EncryptedAssertion_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->EncryptedAssertion; n > 1 && y->gg.g.n; --n, y = (struct zxmd_sa_EncryptedAssertion_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}






/* FUNC(zxmd_sa_Issuer_GET_NameQualifier) */
struct zx_str_s* zxmd_sa_Issuer_GET_NameQualifier(struct zxmd_sa_Issuer_s* x) { return x->NameQualifier; }
/* FUNC(zxmd_sa_Issuer_PUT_NameQualifier) */
void zxmd_sa_Issuer_PUT_NameQualifier(struct zxmd_sa_Issuer_s* x, struct zx_str_s* y) { x->NameQualifier = y; }
/* FUNC(zxmd_sa_Issuer_GET_SPNameQualifier) */
struct zx_str_s* zxmd_sa_Issuer_GET_SPNameQualifier(struct zxmd_sa_Issuer_s* x) { return x->SPNameQualifier; }
/* FUNC(zxmd_sa_Issuer_PUT_SPNameQualifier) */
void zxmd_sa_Issuer_PUT_SPNameQualifier(struct zxmd_sa_Issuer_s* x, struct zx_str_s* y) { x->SPNameQualifier = y; }
/* FUNC(zxmd_sa_Issuer_GET_Format) */
struct zx_str_s* zxmd_sa_Issuer_GET_Format(struct zxmd_sa_Issuer_s* x) { return x->Format; }
/* FUNC(zxmd_sa_Issuer_PUT_Format) */
void zxmd_sa_Issuer_PUT_Format(struct zxmd_sa_Issuer_s* x, struct zx_str_s* y) { x->Format = y; }
/* FUNC(zxmd_sa_Issuer_GET_SPProvidedID) */
struct zx_str_s* zxmd_sa_Issuer_GET_SPProvidedID(struct zxmd_sa_Issuer_s* x) { return x->SPProvidedID; }
/* FUNC(zxmd_sa_Issuer_PUT_SPProvidedID) */
void zxmd_sa_Issuer_PUT_SPProvidedID(struct zxmd_sa_Issuer_s* x, struct zx_str_s* y) { x->SPProvidedID = y; }





/* FUNC(zxmd_sa_NameID_GET_NameQualifier) */
struct zx_str_s* zxmd_sa_NameID_GET_NameQualifier(struct zxmd_sa_NameID_s* x) { return x->NameQualifier; }
/* FUNC(zxmd_sa_NameID_PUT_NameQualifier) */
void zxmd_sa_NameID_PUT_NameQualifier(struct zxmd_sa_NameID_s* x, struct zx_str_s* y) { x->NameQualifier = y; }
/* FUNC(zxmd_sa_NameID_GET_SPNameQualifier) */
struct zx_str_s* zxmd_sa_NameID_GET_SPNameQualifier(struct zxmd_sa_NameID_s* x) { return x->SPNameQualifier; }
/* FUNC(zxmd_sa_NameID_PUT_SPNameQualifier) */
void zxmd_sa_NameID_PUT_SPNameQualifier(struct zxmd_sa_NameID_s* x, struct zx_str_s* y) { x->SPNameQualifier = y; }
/* FUNC(zxmd_sa_NameID_GET_Format) */
struct zx_str_s* zxmd_sa_NameID_GET_Format(struct zxmd_sa_NameID_s* x) { return x->Format; }
/* FUNC(zxmd_sa_NameID_PUT_Format) */
void zxmd_sa_NameID_PUT_Format(struct zxmd_sa_NameID_s* x, struct zx_str_s* y) { x->Format = y; }
/* FUNC(zxmd_sa_NameID_GET_SPProvidedID) */
struct zx_str_s* zxmd_sa_NameID_GET_SPProvidedID(struct zxmd_sa_NameID_s* x) { return x->SPProvidedID; }
/* FUNC(zxmd_sa_NameID_PUT_SPProvidedID) */
void zxmd_sa_NameID_PUT_SPProvidedID(struct zxmd_sa_NameID_s* x, struct zx_str_s* y) { x->SPProvidedID = y; }












/* FUNC(zxmd_sa_ProxyRestriction_NUM_Audience) */

int zxmd_sa_ProxyRestriction_NUM_Audience(struct zxmd_sa_ProxyRestriction_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Audience; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zxmd_sa_ProxyRestriction_GET_Audience) */

struct zx_elem_s* zxmd_sa_ProxyRestriction_GET_Audience(struct zxmd_sa_ProxyRestriction_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->Audience; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zxmd_sa_ProxyRestriction_POP_Audience) */

struct zx_elem_s* zxmd_sa_ProxyRestriction_POP_Audience(struct zxmd_sa_ProxyRestriction_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->Audience;
  if (y)
    x->Audience = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zxmd_sa_ProxyRestriction_PUSH_Audience) */

void zxmd_sa_ProxyRestriction_PUSH_Audience(struct zxmd_sa_ProxyRestriction_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->Audience->g;
  x->Audience = z;
}

/* FUNC(zxmd_sa_ProxyRestriction_REV_Audience) */

void zxmd_sa_ProxyRestriction_REV_Audience(struct zxmd_sa_ProxyRestriction_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->Audience;
  if (!y) return;
  x->Audience = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->Audience->g;
    x->Audience = y;
    y = nxt;
  }
}

/* FUNC(zxmd_sa_ProxyRestriction_PUT_Audience) */

void zxmd_sa_ProxyRestriction_PUT_Audience(struct zxmd_sa_ProxyRestriction_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->Audience;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->Audience = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zxmd_sa_ProxyRestriction_ADD_Audience) */

void zxmd_sa_ProxyRestriction_ADD_Audience(struct zxmd_sa_ProxyRestriction_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->Audience->g;
    x->Audience = z;
    return;
  case -1:
    y = x->Audience;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->Audience; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zxmd_sa_ProxyRestriction_DEL_Audience) */

void zxmd_sa_ProxyRestriction_DEL_Audience(struct zxmd_sa_ProxyRestriction_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Audience = (struct zx_elem_s*)x->Audience->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->Audience;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->Audience; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

/* FUNC(zxmd_sa_ProxyRestriction_GET_Count) */
struct zx_str_s* zxmd_sa_ProxyRestriction_GET_Count(struct zxmd_sa_ProxyRestriction_s* x) { return x->Count; }
/* FUNC(zxmd_sa_ProxyRestriction_PUT_Count) */
void zxmd_sa_ProxyRestriction_PUT_Count(struct zxmd_sa_ProxyRestriction_s* x, struct zx_str_s* y) { x->Count = y; }







/* FUNC(zxmd_sa_Subject_NUM_BaseID) */

int zxmd_sa_Subject_NUM_BaseID(struct zxmd_sa_Subject_s* x)
{
  struct zxmd_sa_BaseID_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->BaseID; y; ++n, y = (struct zxmd_sa_BaseID_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zxmd_sa_Subject_GET_BaseID) */

struct zxmd_sa_BaseID_s* zxmd_sa_Subject_GET_BaseID(struct zxmd_sa_Subject_s* x, int n)
{
  struct zxmd_sa_BaseID_s* y;
  if (!x) return 0;
  for (y = x->BaseID; n>=0 && y; --n, y = (struct zxmd_sa_BaseID_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zxmd_sa_Subject_POP_BaseID) */

struct zxmd_sa_BaseID_s* zxmd_sa_Subject_POP_BaseID(struct zxmd_sa_Subject_s* x)
{
  struct zxmd_sa_BaseID_s* y;
  if (!x) return 0;
  y = x->BaseID;
  if (y)
    x->BaseID = (struct zxmd_sa_BaseID_s*)y->gg.g.n;
  return y;
}

/* FUNC(zxmd_sa_Subject_PUSH_BaseID) */

void zxmd_sa_Subject_PUSH_BaseID(struct zxmd_sa_Subject_s* x, struct zxmd_sa_BaseID_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->BaseID->gg.g;
  x->BaseID = z;
}

/* FUNC(zxmd_sa_Subject_REV_BaseID) */

void zxmd_sa_Subject_REV_BaseID(struct zxmd_sa_Subject_s* x)
{
  struct zxmd_sa_BaseID_s* nxt;
  struct zxmd_sa_BaseID_s* y;
  if (!x) return;
  y = x->BaseID;
  if (!y) return;
  x->BaseID = 0;
  while (y) {
    nxt = (struct zxmd_sa_BaseID_s*)y->gg.g.n;
    y->gg.g.n = &x->BaseID->gg.g;
    x->BaseID = y;
    y = nxt;
  }
}

/* FUNC(zxmd_sa_Subject_PUT_BaseID) */

void zxmd_sa_Subject_PUT_BaseID(struct zxmd_sa_Subject_s* x, int n, struct zxmd_sa_BaseID_s* z)
{
  struct zxmd_sa_BaseID_s* y;
  if (!x || !z) return;
  y = x->BaseID;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->BaseID = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zxmd_sa_BaseID_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zxmd_sa_Subject_ADD_BaseID) */

void zxmd_sa_Subject_ADD_BaseID(struct zxmd_sa_Subject_s* x, int n, struct zxmd_sa_BaseID_s* z)
{
  struct zxmd_sa_BaseID_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->BaseID->gg.g;
    x->BaseID = z;
    return;
  case -1:
    y = x->BaseID;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zxmd_sa_BaseID_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->BaseID; n > 1 && y; --n, y = (struct zxmd_sa_BaseID_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zxmd_sa_Subject_DEL_BaseID) */

void zxmd_sa_Subject_DEL_BaseID(struct zxmd_sa_Subject_s* x, int n)
{
  struct zxmd_sa_BaseID_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->BaseID = (struct zxmd_sa_BaseID_s*)x->BaseID->gg.g.n;
    return;
  case -1:
    y = (struct zxmd_sa_BaseID_s*)x->BaseID;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zxmd_sa_BaseID_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->BaseID; n > 1 && y->gg.g.n; --n, y = (struct zxmd_sa_BaseID_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zxmd_sa_Subject_NUM_NameID) */

int zxmd_sa_Subject_NUM_NameID(struct zxmd_sa_Subject_s* x)
{
  struct zxmd_sa_NameID_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->NameID; y; ++n, y = (struct zxmd_sa_NameID_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zxmd_sa_Subject_GET_NameID) */

struct zxmd_sa_NameID_s* zxmd_sa_Subject_GET_NameID(struct zxmd_sa_Subject_s* x, int n)
{
  struct zxmd_sa_NameID_s* y;
  if (!x) return 0;
  for (y = x->NameID; n>=0 && y; --n, y = (struct zxmd_sa_NameID_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zxmd_sa_Subject_POP_NameID) */

struct zxmd_sa_NameID_s* zxmd_sa_Subject_POP_NameID(struct zxmd_sa_Subject_s* x)
{
  struct zxmd_sa_NameID_s* y;
  if (!x) return 0;
  y = x->NameID;
  if (y)
    x->NameID = (struct zxmd_sa_NameID_s*)y->gg.g.n;
  return y;
}

/* FUNC(zxmd_sa_Subject_PUSH_NameID) */

void zxmd_sa_Subject_PUSH_NameID(struct zxmd_sa_Subject_s* x, struct zxmd_sa_NameID_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->NameID->gg.g;
  x->NameID = z;
}

/* FUNC(zxmd_sa_Subject_REV_NameID) */

void zxmd_sa_Subject_REV_NameID(struct zxmd_sa_Subject_s* x)
{
  struct zxmd_sa_NameID_s* nxt;
  struct zxmd_sa_NameID_s* y;
  if (!x) return;
  y = x->NameID;
  if (!y) return;
  x->NameID = 0;
  while (y) {
    nxt = (struct zxmd_sa_NameID_s*)y->gg.g.n;
    y->gg.g.n = &x->NameID->gg.g;
    x->NameID = y;
    y = nxt;
  }
}

/* FUNC(zxmd_sa_Subject_PUT_NameID) */

void zxmd_sa_Subject_PUT_NameID(struct zxmd_sa_Subject_s* x, int n, struct zxmd_sa_NameID_s* z)
{
  struct zxmd_sa_NameID_s* y;
  if (!x || !z) return;
  y = x->NameID;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->NameID = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zxmd_sa_NameID_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zxmd_sa_Subject_ADD_NameID) */

void zxmd_sa_Subject_ADD_NameID(struct zxmd_sa_Subject_s* x, int n, struct zxmd_sa_NameID_s* z)
{
  struct zxmd_sa_NameID_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->NameID->gg.g;
    x->NameID = z;
    return;
  case -1:
    y = x->NameID;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zxmd_sa_NameID_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->NameID; n > 1 && y; --n, y = (struct zxmd_sa_NameID_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zxmd_sa_Subject_DEL_NameID) */

void zxmd_sa_Subject_DEL_NameID(struct zxmd_sa_Subject_s* x, int n)
{
  struct zxmd_sa_NameID_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->NameID = (struct zxmd_sa_NameID_s*)x->NameID->gg.g.n;
    return;
  case -1:
    y = (struct zxmd_sa_NameID_s*)x->NameID;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zxmd_sa_NameID_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->NameID; n > 1 && y->gg.g.n; --n, y = (struct zxmd_sa_NameID_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zxmd_sa_Subject_NUM_EncryptedID) */

int zxmd_sa_Subject_NUM_EncryptedID(struct zxmd_sa_Subject_s* x)
{
  struct zxmd_sa_EncryptedID_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->EncryptedID; y; ++n, y = (struct zxmd_sa_EncryptedID_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zxmd_sa_Subject_GET_EncryptedID) */

struct zxmd_sa_EncryptedID_s* zxmd_sa_Subject_GET_EncryptedID(struct zxmd_sa_Subject_s* x, int n)
{
  struct zxmd_sa_EncryptedID_s* y;
  if (!x) return 0;
  for (y = x->EncryptedID; n>=0 && y; --n, y = (struct zxmd_sa_EncryptedID_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zxmd_sa_Subject_POP_EncryptedID) */

struct zxmd_sa_EncryptedID_s* zxmd_sa_Subject_POP_EncryptedID(struct zxmd_sa_Subject_s* x)
{
  struct zxmd_sa_EncryptedID_s* y;
  if (!x) return 0;
  y = x->EncryptedID;
  if (y)
    x->EncryptedID = (struct zxmd_sa_EncryptedID_s*)y->gg.g.n;
  return y;
}

/* FUNC(zxmd_sa_Subject_PUSH_EncryptedID) */

void zxmd_sa_Subject_PUSH_EncryptedID(struct zxmd_sa_Subject_s* x, struct zxmd_sa_EncryptedID_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->EncryptedID->gg.g;
  x->EncryptedID = z;
}

/* FUNC(zxmd_sa_Subject_REV_EncryptedID) */

void zxmd_sa_Subject_REV_EncryptedID(struct zxmd_sa_Subject_s* x)
{
  struct zxmd_sa_EncryptedID_s* nxt;
  struct zxmd_sa_EncryptedID_s* y;
  if (!x) return;
  y = x->EncryptedID;
  if (!y) return;
  x->EncryptedID = 0;
  while (y) {
    nxt = (struct zxmd_sa_EncryptedID_s*)y->gg.g.n;
    y->gg.g.n = &x->EncryptedID->gg.g;
    x->EncryptedID = y;
    y = nxt;
  }
}

/* FUNC(zxmd_sa_Subject_PUT_EncryptedID) */

void zxmd_sa_Subject_PUT_EncryptedID(struct zxmd_sa_Subject_s* x, int n, struct zxmd_sa_EncryptedID_s* z)
{
  struct zxmd_sa_EncryptedID_s* y;
  if (!x || !z) return;
  y = x->EncryptedID;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->EncryptedID = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zxmd_sa_EncryptedID_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zxmd_sa_Subject_ADD_EncryptedID) */

void zxmd_sa_Subject_ADD_EncryptedID(struct zxmd_sa_Subject_s* x, int n, struct zxmd_sa_EncryptedID_s* z)
{
  struct zxmd_sa_EncryptedID_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->EncryptedID->gg.g;
    x->EncryptedID = z;
    return;
  case -1:
    y = x->EncryptedID;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zxmd_sa_EncryptedID_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->EncryptedID; n > 1 && y; --n, y = (struct zxmd_sa_EncryptedID_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zxmd_sa_Subject_DEL_EncryptedID) */

void zxmd_sa_Subject_DEL_EncryptedID(struct zxmd_sa_Subject_s* x, int n)
{
  struct zxmd_sa_EncryptedID_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->EncryptedID = (struct zxmd_sa_EncryptedID_s*)x->EncryptedID->gg.g.n;
    return;
  case -1:
    y = (struct zxmd_sa_EncryptedID_s*)x->EncryptedID;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zxmd_sa_EncryptedID_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->EncryptedID; n > 1 && y->gg.g.n; --n, y = (struct zxmd_sa_EncryptedID_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zxmd_sa_Subject_NUM_SubjectConfirmation) */

int zxmd_sa_Subject_NUM_SubjectConfirmation(struct zxmd_sa_Subject_s* x)
{
  struct zxmd_sa_SubjectConfirmation_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->SubjectConfirmation; y; ++n, y = (struct zxmd_sa_SubjectConfirmation_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zxmd_sa_Subject_GET_SubjectConfirmation) */

struct zxmd_sa_SubjectConfirmation_s* zxmd_sa_Subject_GET_SubjectConfirmation(struct zxmd_sa_Subject_s* x, int n)
{
  struct zxmd_sa_SubjectConfirmation_s* y;
  if (!x) return 0;
  for (y = x->SubjectConfirmation; n>=0 && y; --n, y = (struct zxmd_sa_SubjectConfirmation_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zxmd_sa_Subject_POP_SubjectConfirmation) */

struct zxmd_sa_SubjectConfirmation_s* zxmd_sa_Subject_POP_SubjectConfirmation(struct zxmd_sa_Subject_s* x)
{
  struct zxmd_sa_SubjectConfirmation_s* y;
  if (!x) return 0;
  y = x->SubjectConfirmation;
  if (y)
    x->SubjectConfirmation = (struct zxmd_sa_SubjectConfirmation_s*)y->gg.g.n;
  return y;
}

/* FUNC(zxmd_sa_Subject_PUSH_SubjectConfirmation) */

void zxmd_sa_Subject_PUSH_SubjectConfirmation(struct zxmd_sa_Subject_s* x, struct zxmd_sa_SubjectConfirmation_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->SubjectConfirmation->gg.g;
  x->SubjectConfirmation = z;
}

/* FUNC(zxmd_sa_Subject_REV_SubjectConfirmation) */

void zxmd_sa_Subject_REV_SubjectConfirmation(struct zxmd_sa_Subject_s* x)
{
  struct zxmd_sa_SubjectConfirmation_s* nxt;
  struct zxmd_sa_SubjectConfirmation_s* y;
  if (!x) return;
  y = x->SubjectConfirmation;
  if (!y) return;
  x->SubjectConfirmation = 0;
  while (y) {
    nxt = (struct zxmd_sa_SubjectConfirmation_s*)y->gg.g.n;
    y->gg.g.n = &x->SubjectConfirmation->gg.g;
    x->SubjectConfirmation = y;
    y = nxt;
  }
}

/* FUNC(zxmd_sa_Subject_PUT_SubjectConfirmation) */

void zxmd_sa_Subject_PUT_SubjectConfirmation(struct zxmd_sa_Subject_s* x, int n, struct zxmd_sa_SubjectConfirmation_s* z)
{
  struct zxmd_sa_SubjectConfirmation_s* y;
  if (!x || !z) return;
  y = x->SubjectConfirmation;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->SubjectConfirmation = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zxmd_sa_SubjectConfirmation_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zxmd_sa_Subject_ADD_SubjectConfirmation) */

void zxmd_sa_Subject_ADD_SubjectConfirmation(struct zxmd_sa_Subject_s* x, int n, struct zxmd_sa_SubjectConfirmation_s* z)
{
  struct zxmd_sa_SubjectConfirmation_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->SubjectConfirmation->gg.g;
    x->SubjectConfirmation = z;
    return;
  case -1:
    y = x->SubjectConfirmation;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zxmd_sa_SubjectConfirmation_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->SubjectConfirmation; n > 1 && y; --n, y = (struct zxmd_sa_SubjectConfirmation_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zxmd_sa_Subject_DEL_SubjectConfirmation) */

void zxmd_sa_Subject_DEL_SubjectConfirmation(struct zxmd_sa_Subject_s* x, int n)
{
  struct zxmd_sa_SubjectConfirmation_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->SubjectConfirmation = (struct zxmd_sa_SubjectConfirmation_s*)x->SubjectConfirmation->gg.g.n;
    return;
  case -1:
    y = (struct zxmd_sa_SubjectConfirmation_s*)x->SubjectConfirmation;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zxmd_sa_SubjectConfirmation_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->SubjectConfirmation; n > 1 && y->gg.g.n; --n, y = (struct zxmd_sa_SubjectConfirmation_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}








/* FUNC(zxmd_sa_SubjectConfirmation_NUM_BaseID) */

int zxmd_sa_SubjectConfirmation_NUM_BaseID(struct zxmd_sa_SubjectConfirmation_s* x)
{
  struct zxmd_sa_BaseID_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->BaseID; y; ++n, y = (struct zxmd_sa_BaseID_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zxmd_sa_SubjectConfirmation_GET_BaseID) */

struct zxmd_sa_BaseID_s* zxmd_sa_SubjectConfirmation_GET_BaseID(struct zxmd_sa_SubjectConfirmation_s* x, int n)
{
  struct zxmd_sa_BaseID_s* y;
  if (!x) return 0;
  for (y = x->BaseID; n>=0 && y; --n, y = (struct zxmd_sa_BaseID_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zxmd_sa_SubjectConfirmation_POP_BaseID) */

struct zxmd_sa_BaseID_s* zxmd_sa_SubjectConfirmation_POP_BaseID(struct zxmd_sa_SubjectConfirmation_s* x)
{
  struct zxmd_sa_BaseID_s* y;
  if (!x) return 0;
  y = x->BaseID;
  if (y)
    x->BaseID = (struct zxmd_sa_BaseID_s*)y->gg.g.n;
  return y;
}

/* FUNC(zxmd_sa_SubjectConfirmation_PUSH_BaseID) */

void zxmd_sa_SubjectConfirmation_PUSH_BaseID(struct zxmd_sa_SubjectConfirmation_s* x, struct zxmd_sa_BaseID_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->BaseID->gg.g;
  x->BaseID = z;
}

/* FUNC(zxmd_sa_SubjectConfirmation_REV_BaseID) */

void zxmd_sa_SubjectConfirmation_REV_BaseID(struct zxmd_sa_SubjectConfirmation_s* x)
{
  struct zxmd_sa_BaseID_s* nxt;
  struct zxmd_sa_BaseID_s* y;
  if (!x) return;
  y = x->BaseID;
  if (!y) return;
  x->BaseID = 0;
  while (y) {
    nxt = (struct zxmd_sa_BaseID_s*)y->gg.g.n;
    y->gg.g.n = &x->BaseID->gg.g;
    x->BaseID = y;
    y = nxt;
  }
}

/* FUNC(zxmd_sa_SubjectConfirmation_PUT_BaseID) */

void zxmd_sa_SubjectConfirmation_PUT_BaseID(struct zxmd_sa_SubjectConfirmation_s* x, int n, struct zxmd_sa_BaseID_s* z)
{
  struct zxmd_sa_BaseID_s* y;
  if (!x || !z) return;
  y = x->BaseID;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->BaseID = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zxmd_sa_BaseID_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zxmd_sa_SubjectConfirmation_ADD_BaseID) */

void zxmd_sa_SubjectConfirmation_ADD_BaseID(struct zxmd_sa_SubjectConfirmation_s* x, int n, struct zxmd_sa_BaseID_s* z)
{
  struct zxmd_sa_BaseID_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->BaseID->gg.g;
    x->BaseID = z;
    return;
  case -1:
    y = x->BaseID;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zxmd_sa_BaseID_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->BaseID; n > 1 && y; --n, y = (struct zxmd_sa_BaseID_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zxmd_sa_SubjectConfirmation_DEL_BaseID) */

void zxmd_sa_SubjectConfirmation_DEL_BaseID(struct zxmd_sa_SubjectConfirmation_s* x, int n)
{
  struct zxmd_sa_BaseID_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->BaseID = (struct zxmd_sa_BaseID_s*)x->BaseID->gg.g.n;
    return;
  case -1:
    y = (struct zxmd_sa_BaseID_s*)x->BaseID;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zxmd_sa_BaseID_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->BaseID; n > 1 && y->gg.g.n; --n, y = (struct zxmd_sa_BaseID_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zxmd_sa_SubjectConfirmation_NUM_NameID) */

int zxmd_sa_SubjectConfirmation_NUM_NameID(struct zxmd_sa_SubjectConfirmation_s* x)
{
  struct zxmd_sa_NameID_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->NameID; y; ++n, y = (struct zxmd_sa_NameID_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zxmd_sa_SubjectConfirmation_GET_NameID) */

struct zxmd_sa_NameID_s* zxmd_sa_SubjectConfirmation_GET_NameID(struct zxmd_sa_SubjectConfirmation_s* x, int n)
{
  struct zxmd_sa_NameID_s* y;
  if (!x) return 0;
  for (y = x->NameID; n>=0 && y; --n, y = (struct zxmd_sa_NameID_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zxmd_sa_SubjectConfirmation_POP_NameID) */

struct zxmd_sa_NameID_s* zxmd_sa_SubjectConfirmation_POP_NameID(struct zxmd_sa_SubjectConfirmation_s* x)
{
  struct zxmd_sa_NameID_s* y;
  if (!x) return 0;
  y = x->NameID;
  if (y)
    x->NameID = (struct zxmd_sa_NameID_s*)y->gg.g.n;
  return y;
}

/* FUNC(zxmd_sa_SubjectConfirmation_PUSH_NameID) */

void zxmd_sa_SubjectConfirmation_PUSH_NameID(struct zxmd_sa_SubjectConfirmation_s* x, struct zxmd_sa_NameID_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->NameID->gg.g;
  x->NameID = z;
}

/* FUNC(zxmd_sa_SubjectConfirmation_REV_NameID) */

void zxmd_sa_SubjectConfirmation_REV_NameID(struct zxmd_sa_SubjectConfirmation_s* x)
{
  struct zxmd_sa_NameID_s* nxt;
  struct zxmd_sa_NameID_s* y;
  if (!x) return;
  y = x->NameID;
  if (!y) return;
  x->NameID = 0;
  while (y) {
    nxt = (struct zxmd_sa_NameID_s*)y->gg.g.n;
    y->gg.g.n = &x->NameID->gg.g;
    x->NameID = y;
    y = nxt;
  }
}

/* FUNC(zxmd_sa_SubjectConfirmation_PUT_NameID) */

void zxmd_sa_SubjectConfirmation_PUT_NameID(struct zxmd_sa_SubjectConfirmation_s* x, int n, struct zxmd_sa_NameID_s* z)
{
  struct zxmd_sa_NameID_s* y;
  if (!x || !z) return;
  y = x->NameID;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->NameID = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zxmd_sa_NameID_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zxmd_sa_SubjectConfirmation_ADD_NameID) */

void zxmd_sa_SubjectConfirmation_ADD_NameID(struct zxmd_sa_SubjectConfirmation_s* x, int n, struct zxmd_sa_NameID_s* z)
{
  struct zxmd_sa_NameID_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->NameID->gg.g;
    x->NameID = z;
    return;
  case -1:
    y = x->NameID;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zxmd_sa_NameID_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->NameID; n > 1 && y; --n, y = (struct zxmd_sa_NameID_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zxmd_sa_SubjectConfirmation_DEL_NameID) */

void zxmd_sa_SubjectConfirmation_DEL_NameID(struct zxmd_sa_SubjectConfirmation_s* x, int n)
{
  struct zxmd_sa_NameID_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->NameID = (struct zxmd_sa_NameID_s*)x->NameID->gg.g.n;
    return;
  case -1:
    y = (struct zxmd_sa_NameID_s*)x->NameID;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zxmd_sa_NameID_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->NameID; n > 1 && y->gg.g.n; --n, y = (struct zxmd_sa_NameID_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zxmd_sa_SubjectConfirmation_NUM_EncryptedID) */

int zxmd_sa_SubjectConfirmation_NUM_EncryptedID(struct zxmd_sa_SubjectConfirmation_s* x)
{
  struct zxmd_sa_EncryptedID_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->EncryptedID; y; ++n, y = (struct zxmd_sa_EncryptedID_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zxmd_sa_SubjectConfirmation_GET_EncryptedID) */

struct zxmd_sa_EncryptedID_s* zxmd_sa_SubjectConfirmation_GET_EncryptedID(struct zxmd_sa_SubjectConfirmation_s* x, int n)
{
  struct zxmd_sa_EncryptedID_s* y;
  if (!x) return 0;
  for (y = x->EncryptedID; n>=0 && y; --n, y = (struct zxmd_sa_EncryptedID_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zxmd_sa_SubjectConfirmation_POP_EncryptedID) */

struct zxmd_sa_EncryptedID_s* zxmd_sa_SubjectConfirmation_POP_EncryptedID(struct zxmd_sa_SubjectConfirmation_s* x)
{
  struct zxmd_sa_EncryptedID_s* y;
  if (!x) return 0;
  y = x->EncryptedID;
  if (y)
    x->EncryptedID = (struct zxmd_sa_EncryptedID_s*)y->gg.g.n;
  return y;
}

/* FUNC(zxmd_sa_SubjectConfirmation_PUSH_EncryptedID) */

void zxmd_sa_SubjectConfirmation_PUSH_EncryptedID(struct zxmd_sa_SubjectConfirmation_s* x, struct zxmd_sa_EncryptedID_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->EncryptedID->gg.g;
  x->EncryptedID = z;
}

/* FUNC(zxmd_sa_SubjectConfirmation_REV_EncryptedID) */

void zxmd_sa_SubjectConfirmation_REV_EncryptedID(struct zxmd_sa_SubjectConfirmation_s* x)
{
  struct zxmd_sa_EncryptedID_s* nxt;
  struct zxmd_sa_EncryptedID_s* y;
  if (!x) return;
  y = x->EncryptedID;
  if (!y) return;
  x->EncryptedID = 0;
  while (y) {
    nxt = (struct zxmd_sa_EncryptedID_s*)y->gg.g.n;
    y->gg.g.n = &x->EncryptedID->gg.g;
    x->EncryptedID = y;
    y = nxt;
  }
}

/* FUNC(zxmd_sa_SubjectConfirmation_PUT_EncryptedID) */

void zxmd_sa_SubjectConfirmation_PUT_EncryptedID(struct zxmd_sa_SubjectConfirmation_s* x, int n, struct zxmd_sa_EncryptedID_s* z)
{
  struct zxmd_sa_EncryptedID_s* y;
  if (!x || !z) return;
  y = x->EncryptedID;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->EncryptedID = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zxmd_sa_EncryptedID_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zxmd_sa_SubjectConfirmation_ADD_EncryptedID) */

void zxmd_sa_SubjectConfirmation_ADD_EncryptedID(struct zxmd_sa_SubjectConfirmation_s* x, int n, struct zxmd_sa_EncryptedID_s* z)
{
  struct zxmd_sa_EncryptedID_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->EncryptedID->gg.g;
    x->EncryptedID = z;
    return;
  case -1:
    y = x->EncryptedID;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zxmd_sa_EncryptedID_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->EncryptedID; n > 1 && y; --n, y = (struct zxmd_sa_EncryptedID_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zxmd_sa_SubjectConfirmation_DEL_EncryptedID) */

void zxmd_sa_SubjectConfirmation_DEL_EncryptedID(struct zxmd_sa_SubjectConfirmation_s* x, int n)
{
  struct zxmd_sa_EncryptedID_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->EncryptedID = (struct zxmd_sa_EncryptedID_s*)x->EncryptedID->gg.g.n;
    return;
  case -1:
    y = (struct zxmd_sa_EncryptedID_s*)x->EncryptedID;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zxmd_sa_EncryptedID_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->EncryptedID; n > 1 && y->gg.g.n; --n, y = (struct zxmd_sa_EncryptedID_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zxmd_sa_SubjectConfirmation_NUM_SubjectConfirmationData) */

int zxmd_sa_SubjectConfirmation_NUM_SubjectConfirmationData(struct zxmd_sa_SubjectConfirmation_s* x)
{
  struct zxmd_sa_SubjectConfirmationData_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->SubjectConfirmationData; y; ++n, y = (struct zxmd_sa_SubjectConfirmationData_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zxmd_sa_SubjectConfirmation_GET_SubjectConfirmationData) */

struct zxmd_sa_SubjectConfirmationData_s* zxmd_sa_SubjectConfirmation_GET_SubjectConfirmationData(struct zxmd_sa_SubjectConfirmation_s* x, int n)
{
  struct zxmd_sa_SubjectConfirmationData_s* y;
  if (!x) return 0;
  for (y = x->SubjectConfirmationData; n>=0 && y; --n, y = (struct zxmd_sa_SubjectConfirmationData_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zxmd_sa_SubjectConfirmation_POP_SubjectConfirmationData) */

struct zxmd_sa_SubjectConfirmationData_s* zxmd_sa_SubjectConfirmation_POP_SubjectConfirmationData(struct zxmd_sa_SubjectConfirmation_s* x)
{
  struct zxmd_sa_SubjectConfirmationData_s* y;
  if (!x) return 0;
  y = x->SubjectConfirmationData;
  if (y)
    x->SubjectConfirmationData = (struct zxmd_sa_SubjectConfirmationData_s*)y->gg.g.n;
  return y;
}

/* FUNC(zxmd_sa_SubjectConfirmation_PUSH_SubjectConfirmationData) */

void zxmd_sa_SubjectConfirmation_PUSH_SubjectConfirmationData(struct zxmd_sa_SubjectConfirmation_s* x, struct zxmd_sa_SubjectConfirmationData_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->SubjectConfirmationData->gg.g;
  x->SubjectConfirmationData = z;
}

/* FUNC(zxmd_sa_SubjectConfirmation_REV_SubjectConfirmationData) */

void zxmd_sa_SubjectConfirmation_REV_SubjectConfirmationData(struct zxmd_sa_SubjectConfirmation_s* x)
{
  struct zxmd_sa_SubjectConfirmationData_s* nxt;
  struct zxmd_sa_SubjectConfirmationData_s* y;
  if (!x) return;
  y = x->SubjectConfirmationData;
  if (!y) return;
  x->SubjectConfirmationData = 0;
  while (y) {
    nxt = (struct zxmd_sa_SubjectConfirmationData_s*)y->gg.g.n;
    y->gg.g.n = &x->SubjectConfirmationData->gg.g;
    x->SubjectConfirmationData = y;
    y = nxt;
  }
}

/* FUNC(zxmd_sa_SubjectConfirmation_PUT_SubjectConfirmationData) */

void zxmd_sa_SubjectConfirmation_PUT_SubjectConfirmationData(struct zxmd_sa_SubjectConfirmation_s* x, int n, struct zxmd_sa_SubjectConfirmationData_s* z)
{
  struct zxmd_sa_SubjectConfirmationData_s* y;
  if (!x || !z) return;
  y = x->SubjectConfirmationData;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->SubjectConfirmationData = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zxmd_sa_SubjectConfirmationData_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zxmd_sa_SubjectConfirmation_ADD_SubjectConfirmationData) */

void zxmd_sa_SubjectConfirmation_ADD_SubjectConfirmationData(struct zxmd_sa_SubjectConfirmation_s* x, int n, struct zxmd_sa_SubjectConfirmationData_s* z)
{
  struct zxmd_sa_SubjectConfirmationData_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->SubjectConfirmationData->gg.g;
    x->SubjectConfirmationData = z;
    return;
  case -1:
    y = x->SubjectConfirmationData;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zxmd_sa_SubjectConfirmationData_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->SubjectConfirmationData; n > 1 && y; --n, y = (struct zxmd_sa_SubjectConfirmationData_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zxmd_sa_SubjectConfirmation_DEL_SubjectConfirmationData) */

void zxmd_sa_SubjectConfirmation_DEL_SubjectConfirmationData(struct zxmd_sa_SubjectConfirmation_s* x, int n)
{
  struct zxmd_sa_SubjectConfirmationData_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->SubjectConfirmationData = (struct zxmd_sa_SubjectConfirmationData_s*)x->SubjectConfirmationData->gg.g.n;
    return;
  case -1:
    y = (struct zxmd_sa_SubjectConfirmationData_s*)x->SubjectConfirmationData;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zxmd_sa_SubjectConfirmationData_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->SubjectConfirmationData; n > 1 && y->gg.g.n; --n, y = (struct zxmd_sa_SubjectConfirmationData_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

/* FUNC(zxmd_sa_SubjectConfirmation_GET_Method) */
struct zx_str_s* zxmd_sa_SubjectConfirmation_GET_Method(struct zxmd_sa_SubjectConfirmation_s* x) { return x->Method; }
/* FUNC(zxmd_sa_SubjectConfirmation_PUT_Method) */
void zxmd_sa_SubjectConfirmation_PUT_Method(struct zxmd_sa_SubjectConfirmation_s* x, struct zx_str_s* y) { x->Method = y; }





/* FUNC(zxmd_sa_SubjectConfirmationData_GET_NotBefore) */
struct zx_str_s* zxmd_sa_SubjectConfirmationData_GET_NotBefore(struct zxmd_sa_SubjectConfirmationData_s* x) { return x->NotBefore; }
/* FUNC(zxmd_sa_SubjectConfirmationData_PUT_NotBefore) */
void zxmd_sa_SubjectConfirmationData_PUT_NotBefore(struct zxmd_sa_SubjectConfirmationData_s* x, struct zx_str_s* y) { x->NotBefore = y; }
/* FUNC(zxmd_sa_SubjectConfirmationData_GET_NotOnOrAfter) */
struct zx_str_s* zxmd_sa_SubjectConfirmationData_GET_NotOnOrAfter(struct zxmd_sa_SubjectConfirmationData_s* x) { return x->NotOnOrAfter; }
/* FUNC(zxmd_sa_SubjectConfirmationData_PUT_NotOnOrAfter) */
void zxmd_sa_SubjectConfirmationData_PUT_NotOnOrAfter(struct zxmd_sa_SubjectConfirmationData_s* x, struct zx_str_s* y) { x->NotOnOrAfter = y; }
/* FUNC(zxmd_sa_SubjectConfirmationData_GET_Recipient) */
struct zx_str_s* zxmd_sa_SubjectConfirmationData_GET_Recipient(struct zxmd_sa_SubjectConfirmationData_s* x) { return x->Recipient; }
/* FUNC(zxmd_sa_SubjectConfirmationData_PUT_Recipient) */
void zxmd_sa_SubjectConfirmationData_PUT_Recipient(struct zxmd_sa_SubjectConfirmationData_s* x, struct zx_str_s* y) { x->Recipient = y; }
/* FUNC(zxmd_sa_SubjectConfirmationData_GET_InResponseTo) */
struct zx_str_s* zxmd_sa_SubjectConfirmationData_GET_InResponseTo(struct zxmd_sa_SubjectConfirmationData_s* x) { return x->InResponseTo; }
/* FUNC(zxmd_sa_SubjectConfirmationData_PUT_InResponseTo) */
void zxmd_sa_SubjectConfirmationData_PUT_InResponseTo(struct zxmd_sa_SubjectConfirmationData_s* x, struct zx_str_s* y) { x->InResponseTo = y; }
/* FUNC(zxmd_sa_SubjectConfirmationData_GET_Address) */
struct zx_str_s* zxmd_sa_SubjectConfirmationData_GET_Address(struct zxmd_sa_SubjectConfirmationData_s* x) { return x->Address; }
/* FUNC(zxmd_sa_SubjectConfirmationData_PUT_Address) */
void zxmd_sa_SubjectConfirmationData_PUT_Address(struct zxmd_sa_SubjectConfirmationData_s* x, struct zx_str_s* y) { x->Address = y; }





/* FUNC(zxmd_sa_SubjectLocality_GET_Address) */
struct zx_str_s* zxmd_sa_SubjectLocality_GET_Address(struct zxmd_sa_SubjectLocality_s* x) { return x->Address; }
/* FUNC(zxmd_sa_SubjectLocality_PUT_Address) */
void zxmd_sa_SubjectLocality_PUT_Address(struct zxmd_sa_SubjectLocality_s* x, struct zx_str_s* y) { x->Address = y; }
/* FUNC(zxmd_sa_SubjectLocality_GET_DNSName) */
struct zx_str_s* zxmd_sa_SubjectLocality_GET_DNSName(struct zxmd_sa_SubjectLocality_s* x) { return x->DNSName; }
/* FUNC(zxmd_sa_SubjectLocality_PUT_DNSName) */
void zxmd_sa_SubjectLocality_PUT_DNSName(struct zxmd_sa_SubjectLocality_s* x, struct zx_str_s* y) { x->DNSName = y; }







/* FUNC(zxmd_sa_TestElem_NUM_AttributeValue) */

int zxmd_sa_TestElem_NUM_AttributeValue(struct zxmd_sa_TestElem_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->AttributeValue; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zxmd_sa_TestElem_GET_AttributeValue) */

struct zx_elem_s* zxmd_sa_TestElem_GET_AttributeValue(struct zxmd_sa_TestElem_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->AttributeValue; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zxmd_sa_TestElem_POP_AttributeValue) */

struct zx_elem_s* zxmd_sa_TestElem_POP_AttributeValue(struct zxmd_sa_TestElem_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->AttributeValue;
  if (y)
    x->AttributeValue = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zxmd_sa_TestElem_PUSH_AttributeValue) */

void zxmd_sa_TestElem_PUSH_AttributeValue(struct zxmd_sa_TestElem_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->AttributeValue->g;
  x->AttributeValue = z;
}

/* FUNC(zxmd_sa_TestElem_REV_AttributeValue) */

void zxmd_sa_TestElem_REV_AttributeValue(struct zxmd_sa_TestElem_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->AttributeValue;
  if (!y) return;
  x->AttributeValue = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->AttributeValue->g;
    x->AttributeValue = y;
    y = nxt;
  }
}

/* FUNC(zxmd_sa_TestElem_PUT_AttributeValue) */

void zxmd_sa_TestElem_PUT_AttributeValue(struct zxmd_sa_TestElem_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->AttributeValue;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->AttributeValue = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zxmd_sa_TestElem_ADD_AttributeValue) */

void zxmd_sa_TestElem_ADD_AttributeValue(struct zxmd_sa_TestElem_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->AttributeValue->g;
    x->AttributeValue = z;
    return;
  case -1:
    y = x->AttributeValue;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->AttributeValue; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zxmd_sa_TestElem_DEL_AttributeValue) */

void zxmd_sa_TestElem_DEL_AttributeValue(struct zxmd_sa_TestElem_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->AttributeValue = (struct zx_elem_s*)x->AttributeValue->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->AttributeValue;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->AttributeValue; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}








/* FUNC(zxmd_xenc_AgreementMethod_NUM_KA_Nonce) */

int zxmd_xenc_AgreementMethod_NUM_KA_Nonce(struct zxmd_xenc_AgreementMethod_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->KA_Nonce; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zxmd_xenc_AgreementMethod_GET_KA_Nonce) */

struct zx_elem_s* zxmd_xenc_AgreementMethod_GET_KA_Nonce(struct zxmd_xenc_AgreementMethod_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->KA_Nonce; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zxmd_xenc_AgreementMethod_POP_KA_Nonce) */

struct zx_elem_s* zxmd_xenc_AgreementMethod_POP_KA_Nonce(struct zxmd_xenc_AgreementMethod_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->KA_Nonce;
  if (y)
    x->KA_Nonce = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zxmd_xenc_AgreementMethod_PUSH_KA_Nonce) */

void zxmd_xenc_AgreementMethod_PUSH_KA_Nonce(struct zxmd_xenc_AgreementMethod_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->KA_Nonce->g;
  x->KA_Nonce = z;
}

/* FUNC(zxmd_xenc_AgreementMethod_REV_KA_Nonce) */

void zxmd_xenc_AgreementMethod_REV_KA_Nonce(struct zxmd_xenc_AgreementMethod_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->KA_Nonce;
  if (!y) return;
  x->KA_Nonce = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->KA_Nonce->g;
    x->KA_Nonce = y;
    y = nxt;
  }
}

/* FUNC(zxmd_xenc_AgreementMethod_PUT_KA_Nonce) */

void zxmd_xenc_AgreementMethod_PUT_KA_Nonce(struct zxmd_xenc_AgreementMethod_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->KA_Nonce;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->KA_Nonce = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zxmd_xenc_AgreementMethod_ADD_KA_Nonce) */

void zxmd_xenc_AgreementMethod_ADD_KA_Nonce(struct zxmd_xenc_AgreementMethod_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->KA_Nonce->g;
    x->KA_Nonce = z;
    return;
  case -1:
    y = x->KA_Nonce;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->KA_Nonce; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zxmd_xenc_AgreementMethod_DEL_KA_Nonce) */

void zxmd_xenc_AgreementMethod_DEL_KA_Nonce(struct zxmd_xenc_AgreementMethod_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->KA_Nonce = (struct zx_elem_s*)x->KA_Nonce->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->KA_Nonce;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->KA_Nonce; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}



/* FUNC(zxmd_xenc_AgreementMethod_NUM_OriginatorKeyInfo) */

int zxmd_xenc_AgreementMethod_NUM_OriginatorKeyInfo(struct zxmd_xenc_AgreementMethod_s* x)
{
  struct zxmd_xenc_OriginatorKeyInfo_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->OriginatorKeyInfo; y; ++n, y = (struct zxmd_xenc_OriginatorKeyInfo_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zxmd_xenc_AgreementMethod_GET_OriginatorKeyInfo) */

struct zxmd_xenc_OriginatorKeyInfo_s* zxmd_xenc_AgreementMethod_GET_OriginatorKeyInfo(struct zxmd_xenc_AgreementMethod_s* x, int n)
{
  struct zxmd_xenc_OriginatorKeyInfo_s* y;
  if (!x) return 0;
  for (y = x->OriginatorKeyInfo; n>=0 && y; --n, y = (struct zxmd_xenc_OriginatorKeyInfo_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zxmd_xenc_AgreementMethod_POP_OriginatorKeyInfo) */

struct zxmd_xenc_OriginatorKeyInfo_s* zxmd_xenc_AgreementMethod_POP_OriginatorKeyInfo(struct zxmd_xenc_AgreementMethod_s* x)
{
  struct zxmd_xenc_OriginatorKeyInfo_s* y;
  if (!x) return 0;
  y = x->OriginatorKeyInfo;
  if (y)
    x->OriginatorKeyInfo = (struct zxmd_xenc_OriginatorKeyInfo_s*)y->gg.g.n;
  return y;
}

/* FUNC(zxmd_xenc_AgreementMethod_PUSH_OriginatorKeyInfo) */

void zxmd_xenc_AgreementMethod_PUSH_OriginatorKeyInfo(struct zxmd_xenc_AgreementMethod_s* x, struct zxmd_xenc_OriginatorKeyInfo_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->OriginatorKeyInfo->gg.g;
  x->OriginatorKeyInfo = z;
}

/* FUNC(zxmd_xenc_AgreementMethod_REV_OriginatorKeyInfo) */

void zxmd_xenc_AgreementMethod_REV_OriginatorKeyInfo(struct zxmd_xenc_AgreementMethod_s* x)
{
  struct zxmd_xenc_OriginatorKeyInfo_s* nxt;
  struct zxmd_xenc_OriginatorKeyInfo_s* y;
  if (!x) return;
  y = x->OriginatorKeyInfo;
  if (!y) return;
  x->OriginatorKeyInfo = 0;
  while (y) {
    nxt = (struct zxmd_xenc_OriginatorKeyInfo_s*)y->gg.g.n;
    y->gg.g.n = &x->OriginatorKeyInfo->gg.g;
    x->OriginatorKeyInfo = y;
    y = nxt;
  }
}

/* FUNC(zxmd_xenc_AgreementMethod_PUT_OriginatorKeyInfo) */

void zxmd_xenc_AgreementMethod_PUT_OriginatorKeyInfo(struct zxmd_xenc_AgreementMethod_s* x, int n, struct zxmd_xenc_OriginatorKeyInfo_s* z)
{
  struct zxmd_xenc_OriginatorKeyInfo_s* y;
  if (!x || !z) return;
  y = x->OriginatorKeyInfo;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->OriginatorKeyInfo = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zxmd_xenc_OriginatorKeyInfo_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zxmd_xenc_AgreementMethod_ADD_OriginatorKeyInfo) */

void zxmd_xenc_AgreementMethod_ADD_OriginatorKeyInfo(struct zxmd_xenc_AgreementMethod_s* x, int n, struct zxmd_xenc_OriginatorKeyInfo_s* z)
{
  struct zxmd_xenc_OriginatorKeyInfo_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->OriginatorKeyInfo->gg.g;
    x->OriginatorKeyInfo = z;
    return;
  case -1:
    y = x->OriginatorKeyInfo;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zxmd_xenc_OriginatorKeyInfo_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->OriginatorKeyInfo; n > 1 && y; --n, y = (struct zxmd_xenc_OriginatorKeyInfo_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zxmd_xenc_AgreementMethod_DEL_OriginatorKeyInfo) */

void zxmd_xenc_AgreementMethod_DEL_OriginatorKeyInfo(struct zxmd_xenc_AgreementMethod_s* x, int n)
{
  struct zxmd_xenc_OriginatorKeyInfo_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->OriginatorKeyInfo = (struct zxmd_xenc_OriginatorKeyInfo_s*)x->OriginatorKeyInfo->gg.g.n;
    return;
  case -1:
    y = (struct zxmd_xenc_OriginatorKeyInfo_s*)x->OriginatorKeyInfo;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zxmd_xenc_OriginatorKeyInfo_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->OriginatorKeyInfo; n > 1 && y->gg.g.n; --n, y = (struct zxmd_xenc_OriginatorKeyInfo_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zxmd_xenc_AgreementMethod_NUM_RecipientKeyInfo) */

int zxmd_xenc_AgreementMethod_NUM_RecipientKeyInfo(struct zxmd_xenc_AgreementMethod_s* x)
{
  struct zxmd_xenc_RecipientKeyInfo_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->RecipientKeyInfo; y; ++n, y = (struct zxmd_xenc_RecipientKeyInfo_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zxmd_xenc_AgreementMethod_GET_RecipientKeyInfo) */

struct zxmd_xenc_RecipientKeyInfo_s* zxmd_xenc_AgreementMethod_GET_RecipientKeyInfo(struct zxmd_xenc_AgreementMethod_s* x, int n)
{
  struct zxmd_xenc_RecipientKeyInfo_s* y;
  if (!x) return 0;
  for (y = x->RecipientKeyInfo; n>=0 && y; --n, y = (struct zxmd_xenc_RecipientKeyInfo_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zxmd_xenc_AgreementMethod_POP_RecipientKeyInfo) */

struct zxmd_xenc_RecipientKeyInfo_s* zxmd_xenc_AgreementMethod_POP_RecipientKeyInfo(struct zxmd_xenc_AgreementMethod_s* x)
{
  struct zxmd_xenc_RecipientKeyInfo_s* y;
  if (!x) return 0;
  y = x->RecipientKeyInfo;
  if (y)
    x->RecipientKeyInfo = (struct zxmd_xenc_RecipientKeyInfo_s*)y->gg.g.n;
  return y;
}

/* FUNC(zxmd_xenc_AgreementMethod_PUSH_RecipientKeyInfo) */

void zxmd_xenc_AgreementMethod_PUSH_RecipientKeyInfo(struct zxmd_xenc_AgreementMethod_s* x, struct zxmd_xenc_RecipientKeyInfo_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->RecipientKeyInfo->gg.g;
  x->RecipientKeyInfo = z;
}

/* FUNC(zxmd_xenc_AgreementMethod_REV_RecipientKeyInfo) */

void zxmd_xenc_AgreementMethod_REV_RecipientKeyInfo(struct zxmd_xenc_AgreementMethod_s* x)
{
  struct zxmd_xenc_RecipientKeyInfo_s* nxt;
  struct zxmd_xenc_RecipientKeyInfo_s* y;
  if (!x) return;
  y = x->RecipientKeyInfo;
  if (!y) return;
  x->RecipientKeyInfo = 0;
  while (y) {
    nxt = (struct zxmd_xenc_RecipientKeyInfo_s*)y->gg.g.n;
    y->gg.g.n = &x->RecipientKeyInfo->gg.g;
    x->RecipientKeyInfo = y;
    y = nxt;
  }
}

/* FUNC(zxmd_xenc_AgreementMethod_PUT_RecipientKeyInfo) */

void zxmd_xenc_AgreementMethod_PUT_RecipientKeyInfo(struct zxmd_xenc_AgreementMethod_s* x, int n, struct zxmd_xenc_RecipientKeyInfo_s* z)
{
  struct zxmd_xenc_RecipientKeyInfo_s* y;
  if (!x || !z) return;
  y = x->RecipientKeyInfo;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->RecipientKeyInfo = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zxmd_xenc_RecipientKeyInfo_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zxmd_xenc_AgreementMethod_ADD_RecipientKeyInfo) */

void zxmd_xenc_AgreementMethod_ADD_RecipientKeyInfo(struct zxmd_xenc_AgreementMethod_s* x, int n, struct zxmd_xenc_RecipientKeyInfo_s* z)
{
  struct zxmd_xenc_RecipientKeyInfo_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->RecipientKeyInfo->gg.g;
    x->RecipientKeyInfo = z;
    return;
  case -1:
    y = x->RecipientKeyInfo;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zxmd_xenc_RecipientKeyInfo_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->RecipientKeyInfo; n > 1 && y; --n, y = (struct zxmd_xenc_RecipientKeyInfo_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zxmd_xenc_AgreementMethod_DEL_RecipientKeyInfo) */

void zxmd_xenc_AgreementMethod_DEL_RecipientKeyInfo(struct zxmd_xenc_AgreementMethod_s* x, int n)
{
  struct zxmd_xenc_RecipientKeyInfo_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->RecipientKeyInfo = (struct zxmd_xenc_RecipientKeyInfo_s*)x->RecipientKeyInfo->gg.g.n;
    return;
  case -1:
    y = (struct zxmd_xenc_RecipientKeyInfo_s*)x->RecipientKeyInfo;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zxmd_xenc_RecipientKeyInfo_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->RecipientKeyInfo; n > 1 && y->gg.g.n; --n, y = (struct zxmd_xenc_RecipientKeyInfo_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

/* FUNC(zxmd_xenc_AgreementMethod_GET_Algorithm) */
struct zx_str_s* zxmd_xenc_AgreementMethod_GET_Algorithm(struct zxmd_xenc_AgreementMethod_s* x) { return x->Algorithm; }
/* FUNC(zxmd_xenc_AgreementMethod_PUT_Algorithm) */
void zxmd_xenc_AgreementMethod_PUT_Algorithm(struct zxmd_xenc_AgreementMethod_s* x, struct zx_str_s* y) { x->Algorithm = y; }







/* FUNC(zxmd_xenc_CipherData_NUM_CipherValue) */

int zxmd_xenc_CipherData_NUM_CipherValue(struct zxmd_xenc_CipherData_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->CipherValue; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zxmd_xenc_CipherData_GET_CipherValue) */

struct zx_elem_s* zxmd_xenc_CipherData_GET_CipherValue(struct zxmd_xenc_CipherData_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->CipherValue; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zxmd_xenc_CipherData_POP_CipherValue) */

struct zx_elem_s* zxmd_xenc_CipherData_POP_CipherValue(struct zxmd_xenc_CipherData_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->CipherValue;
  if (y)
    x->CipherValue = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zxmd_xenc_CipherData_PUSH_CipherValue) */

void zxmd_xenc_CipherData_PUSH_CipherValue(struct zxmd_xenc_CipherData_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->CipherValue->g;
  x->CipherValue = z;
}

/* FUNC(zxmd_xenc_CipherData_REV_CipherValue) */

void zxmd_xenc_CipherData_REV_CipherValue(struct zxmd_xenc_CipherData_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->CipherValue;
  if (!y) return;
  x->CipherValue = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->CipherValue->g;
    x->CipherValue = y;
    y = nxt;
  }
}

/* FUNC(zxmd_xenc_CipherData_PUT_CipherValue) */

void zxmd_xenc_CipherData_PUT_CipherValue(struct zxmd_xenc_CipherData_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->CipherValue;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->CipherValue = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zxmd_xenc_CipherData_ADD_CipherValue) */

void zxmd_xenc_CipherData_ADD_CipherValue(struct zxmd_xenc_CipherData_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->CipherValue->g;
    x->CipherValue = z;
    return;
  case -1:
    y = x->CipherValue;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->CipherValue; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zxmd_xenc_CipherData_DEL_CipherValue) */

void zxmd_xenc_CipherData_DEL_CipherValue(struct zxmd_xenc_CipherData_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->CipherValue = (struct zx_elem_s*)x->CipherValue->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->CipherValue;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->CipherValue; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}



/* FUNC(zxmd_xenc_CipherData_NUM_CipherReference) */

int zxmd_xenc_CipherData_NUM_CipherReference(struct zxmd_xenc_CipherData_s* x)
{
  struct zxmd_xenc_CipherReference_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->CipherReference; y; ++n, y = (struct zxmd_xenc_CipherReference_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zxmd_xenc_CipherData_GET_CipherReference) */

struct zxmd_xenc_CipherReference_s* zxmd_xenc_CipherData_GET_CipherReference(struct zxmd_xenc_CipherData_s* x, int n)
{
  struct zxmd_xenc_CipherReference_s* y;
  if (!x) return 0;
  for (y = x->CipherReference; n>=0 && y; --n, y = (struct zxmd_xenc_CipherReference_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zxmd_xenc_CipherData_POP_CipherReference) */

struct zxmd_xenc_CipherReference_s* zxmd_xenc_CipherData_POP_CipherReference(struct zxmd_xenc_CipherData_s* x)
{
  struct zxmd_xenc_CipherReference_s* y;
  if (!x) return 0;
  y = x->CipherReference;
  if (y)
    x->CipherReference = (struct zxmd_xenc_CipherReference_s*)y->gg.g.n;
  return y;
}

/* FUNC(zxmd_xenc_CipherData_PUSH_CipherReference) */

void zxmd_xenc_CipherData_PUSH_CipherReference(struct zxmd_xenc_CipherData_s* x, struct zxmd_xenc_CipherReference_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->CipherReference->gg.g;
  x->CipherReference = z;
}

/* FUNC(zxmd_xenc_CipherData_REV_CipherReference) */

void zxmd_xenc_CipherData_REV_CipherReference(struct zxmd_xenc_CipherData_s* x)
{
  struct zxmd_xenc_CipherReference_s* nxt;
  struct zxmd_xenc_CipherReference_s* y;
  if (!x) return;
  y = x->CipherReference;
  if (!y) return;
  x->CipherReference = 0;
  while (y) {
    nxt = (struct zxmd_xenc_CipherReference_s*)y->gg.g.n;
    y->gg.g.n = &x->CipherReference->gg.g;
    x->CipherReference = y;
    y = nxt;
  }
}

/* FUNC(zxmd_xenc_CipherData_PUT_CipherReference) */

void zxmd_xenc_CipherData_PUT_CipherReference(struct zxmd_xenc_CipherData_s* x, int n, struct zxmd_xenc_CipherReference_s* z)
{
  struct zxmd_xenc_CipherReference_s* y;
  if (!x || !z) return;
  y = x->CipherReference;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->CipherReference = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zxmd_xenc_CipherReference_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zxmd_xenc_CipherData_ADD_CipherReference) */

void zxmd_xenc_CipherData_ADD_CipherReference(struct zxmd_xenc_CipherData_s* x, int n, struct zxmd_xenc_CipherReference_s* z)
{
  struct zxmd_xenc_CipherReference_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->CipherReference->gg.g;
    x->CipherReference = z;
    return;
  case -1:
    y = x->CipherReference;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zxmd_xenc_CipherReference_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->CipherReference; n > 1 && y; --n, y = (struct zxmd_xenc_CipherReference_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zxmd_xenc_CipherData_DEL_CipherReference) */

void zxmd_xenc_CipherData_DEL_CipherReference(struct zxmd_xenc_CipherData_s* x, int n)
{
  struct zxmd_xenc_CipherReference_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->CipherReference = (struct zxmd_xenc_CipherReference_s*)x->CipherReference->gg.g.n;
    return;
  case -1:
    y = (struct zxmd_xenc_CipherReference_s*)x->CipherReference;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zxmd_xenc_CipherReference_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->CipherReference; n > 1 && y->gg.g.n; --n, y = (struct zxmd_xenc_CipherReference_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}








/* FUNC(zxmd_xenc_CipherReference_NUM_Transforms) */

int zxmd_xenc_CipherReference_NUM_Transforms(struct zxmd_xenc_CipherReference_s* x)
{
  struct zxmd_xenc_Transforms_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Transforms; y; ++n, y = (struct zxmd_xenc_Transforms_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zxmd_xenc_CipherReference_GET_Transforms) */

struct zxmd_xenc_Transforms_s* zxmd_xenc_CipherReference_GET_Transforms(struct zxmd_xenc_CipherReference_s* x, int n)
{
  struct zxmd_xenc_Transforms_s* y;
  if (!x) return 0;
  for (y = x->Transforms; n>=0 && y; --n, y = (struct zxmd_xenc_Transforms_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zxmd_xenc_CipherReference_POP_Transforms) */

struct zxmd_xenc_Transforms_s* zxmd_xenc_CipherReference_POP_Transforms(struct zxmd_xenc_CipherReference_s* x)
{
  struct zxmd_xenc_Transforms_s* y;
  if (!x) return 0;
  y = x->Transforms;
  if (y)
    x->Transforms = (struct zxmd_xenc_Transforms_s*)y->gg.g.n;
  return y;
}

/* FUNC(zxmd_xenc_CipherReference_PUSH_Transforms) */

void zxmd_xenc_CipherReference_PUSH_Transforms(struct zxmd_xenc_CipherReference_s* x, struct zxmd_xenc_Transforms_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Transforms->gg.g;
  x->Transforms = z;
}

/* FUNC(zxmd_xenc_CipherReference_REV_Transforms) */

void zxmd_xenc_CipherReference_REV_Transforms(struct zxmd_xenc_CipherReference_s* x)
{
  struct zxmd_xenc_Transforms_s* nxt;
  struct zxmd_xenc_Transforms_s* y;
  if (!x) return;
  y = x->Transforms;
  if (!y) return;
  x->Transforms = 0;
  while (y) {
    nxt = (struct zxmd_xenc_Transforms_s*)y->gg.g.n;
    y->gg.g.n = &x->Transforms->gg.g;
    x->Transforms = y;
    y = nxt;
  }
}

/* FUNC(zxmd_xenc_CipherReference_PUT_Transforms) */

void zxmd_xenc_CipherReference_PUT_Transforms(struct zxmd_xenc_CipherReference_s* x, int n, struct zxmd_xenc_Transforms_s* z)
{
  struct zxmd_xenc_Transforms_s* y;
  if (!x || !z) return;
  y = x->Transforms;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Transforms = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zxmd_xenc_Transforms_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zxmd_xenc_CipherReference_ADD_Transforms) */

void zxmd_xenc_CipherReference_ADD_Transforms(struct zxmd_xenc_CipherReference_s* x, int n, struct zxmd_xenc_Transforms_s* z)
{
  struct zxmd_xenc_Transforms_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->Transforms->gg.g;
    x->Transforms = z;
    return;
  case -1:
    y = x->Transforms;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zxmd_xenc_Transforms_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Transforms; n > 1 && y; --n, y = (struct zxmd_xenc_Transforms_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zxmd_xenc_CipherReference_DEL_Transforms) */

void zxmd_xenc_CipherReference_DEL_Transforms(struct zxmd_xenc_CipherReference_s* x, int n)
{
  struct zxmd_xenc_Transforms_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Transforms = (struct zxmd_xenc_Transforms_s*)x->Transforms->gg.g.n;
    return;
  case -1:
    y = (struct zxmd_xenc_Transforms_s*)x->Transforms;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zxmd_xenc_Transforms_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Transforms; n > 1 && y->gg.g.n; --n, y = (struct zxmd_xenc_Transforms_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

/* FUNC(zxmd_xenc_CipherReference_GET_URI) */
struct zx_str_s* zxmd_xenc_CipherReference_GET_URI(struct zxmd_xenc_CipherReference_s* x) { return x->URI; }
/* FUNC(zxmd_xenc_CipherReference_PUT_URI) */
void zxmd_xenc_CipherReference_PUT_URI(struct zxmd_xenc_CipherReference_s* x, struct zx_str_s* y) { x->URI = y; }





/* FUNC(zxmd_xenc_DataReference_GET_URI) */
struct zx_str_s* zxmd_xenc_DataReference_GET_URI(struct zxmd_xenc_DataReference_s* x) { return x->URI; }
/* FUNC(zxmd_xenc_DataReference_PUT_URI) */
void zxmd_xenc_DataReference_PUT_URI(struct zxmd_xenc_DataReference_s* x, struct zx_str_s* y) { x->URI = y; }







/* FUNC(zxmd_xenc_EncryptedData_NUM_EncryptionMethod) */

int zxmd_xenc_EncryptedData_NUM_EncryptionMethod(struct zxmd_xenc_EncryptedData_s* x)
{
  struct zxmd_xenc_EncryptionMethod_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->EncryptionMethod; y; ++n, y = (struct zxmd_xenc_EncryptionMethod_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zxmd_xenc_EncryptedData_GET_EncryptionMethod) */

struct zxmd_xenc_EncryptionMethod_s* zxmd_xenc_EncryptedData_GET_EncryptionMethod(struct zxmd_xenc_EncryptedData_s* x, int n)
{
  struct zxmd_xenc_EncryptionMethod_s* y;
  if (!x) return 0;
  for (y = x->EncryptionMethod; n>=0 && y; --n, y = (struct zxmd_xenc_EncryptionMethod_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zxmd_xenc_EncryptedData_POP_EncryptionMethod) */

struct zxmd_xenc_EncryptionMethod_s* zxmd_xenc_EncryptedData_POP_EncryptionMethod(struct zxmd_xenc_EncryptedData_s* x)
{
  struct zxmd_xenc_EncryptionMethod_s* y;
  if (!x) return 0;
  y = x->EncryptionMethod;
  if (y)
    x->EncryptionMethod = (struct zxmd_xenc_EncryptionMethod_s*)y->gg.g.n;
  return y;
}

/* FUNC(zxmd_xenc_EncryptedData_PUSH_EncryptionMethod) */

void zxmd_xenc_EncryptedData_PUSH_EncryptionMethod(struct zxmd_xenc_EncryptedData_s* x, struct zxmd_xenc_EncryptionMethod_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->EncryptionMethod->gg.g;
  x->EncryptionMethod = z;
}

/* FUNC(zxmd_xenc_EncryptedData_REV_EncryptionMethod) */

void zxmd_xenc_EncryptedData_REV_EncryptionMethod(struct zxmd_xenc_EncryptedData_s* x)
{
  struct zxmd_xenc_EncryptionMethod_s* nxt;
  struct zxmd_xenc_EncryptionMethod_s* y;
  if (!x) return;
  y = x->EncryptionMethod;
  if (!y) return;
  x->EncryptionMethod = 0;
  while (y) {
    nxt = (struct zxmd_xenc_EncryptionMethod_s*)y->gg.g.n;
    y->gg.g.n = &x->EncryptionMethod->gg.g;
    x->EncryptionMethod = y;
    y = nxt;
  }
}

/* FUNC(zxmd_xenc_EncryptedData_PUT_EncryptionMethod) */

void zxmd_xenc_EncryptedData_PUT_EncryptionMethod(struct zxmd_xenc_EncryptedData_s* x, int n, struct zxmd_xenc_EncryptionMethod_s* z)
{
  struct zxmd_xenc_EncryptionMethod_s* y;
  if (!x || !z) return;
  y = x->EncryptionMethod;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->EncryptionMethod = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zxmd_xenc_EncryptionMethod_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zxmd_xenc_EncryptedData_ADD_EncryptionMethod) */

void zxmd_xenc_EncryptedData_ADD_EncryptionMethod(struct zxmd_xenc_EncryptedData_s* x, int n, struct zxmd_xenc_EncryptionMethod_s* z)
{
  struct zxmd_xenc_EncryptionMethod_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->EncryptionMethod->gg.g;
    x->EncryptionMethod = z;
    return;
  case -1:
    y = x->EncryptionMethod;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zxmd_xenc_EncryptionMethod_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->EncryptionMethod; n > 1 && y; --n, y = (struct zxmd_xenc_EncryptionMethod_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zxmd_xenc_EncryptedData_DEL_EncryptionMethod) */

void zxmd_xenc_EncryptedData_DEL_EncryptionMethod(struct zxmd_xenc_EncryptedData_s* x, int n)
{
  struct zxmd_xenc_EncryptionMethod_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->EncryptionMethod = (struct zxmd_xenc_EncryptionMethod_s*)x->EncryptionMethod->gg.g.n;
    return;
  case -1:
    y = (struct zxmd_xenc_EncryptionMethod_s*)x->EncryptionMethod;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zxmd_xenc_EncryptionMethod_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->EncryptionMethod; n > 1 && y->gg.g.n; --n, y = (struct zxmd_xenc_EncryptionMethod_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zxmd_xenc_EncryptedData_NUM_KeyInfo) */

int zxmd_xenc_EncryptedData_NUM_KeyInfo(struct zxmd_xenc_EncryptedData_s* x)
{
  struct zxmd_ds_KeyInfo_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->KeyInfo; y; ++n, y = (struct zxmd_ds_KeyInfo_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zxmd_xenc_EncryptedData_GET_KeyInfo) */

struct zxmd_ds_KeyInfo_s* zxmd_xenc_EncryptedData_GET_KeyInfo(struct zxmd_xenc_EncryptedData_s* x, int n)
{
  struct zxmd_ds_KeyInfo_s* y;
  if (!x) return 0;
  for (y = x->KeyInfo; n>=0 && y; --n, y = (struct zxmd_ds_KeyInfo_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zxmd_xenc_EncryptedData_POP_KeyInfo) */

struct zxmd_ds_KeyInfo_s* zxmd_xenc_EncryptedData_POP_KeyInfo(struct zxmd_xenc_EncryptedData_s* x)
{
  struct zxmd_ds_KeyInfo_s* y;
  if (!x) return 0;
  y = x->KeyInfo;
  if (y)
    x->KeyInfo = (struct zxmd_ds_KeyInfo_s*)y->gg.g.n;
  return y;
}

/* FUNC(zxmd_xenc_EncryptedData_PUSH_KeyInfo) */

void zxmd_xenc_EncryptedData_PUSH_KeyInfo(struct zxmd_xenc_EncryptedData_s* x, struct zxmd_ds_KeyInfo_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->KeyInfo->gg.g;
  x->KeyInfo = z;
}

/* FUNC(zxmd_xenc_EncryptedData_REV_KeyInfo) */

void zxmd_xenc_EncryptedData_REV_KeyInfo(struct zxmd_xenc_EncryptedData_s* x)
{
  struct zxmd_ds_KeyInfo_s* nxt;
  struct zxmd_ds_KeyInfo_s* y;
  if (!x) return;
  y = x->KeyInfo;
  if (!y) return;
  x->KeyInfo = 0;
  while (y) {
    nxt = (struct zxmd_ds_KeyInfo_s*)y->gg.g.n;
    y->gg.g.n = &x->KeyInfo->gg.g;
    x->KeyInfo = y;
    y = nxt;
  }
}

/* FUNC(zxmd_xenc_EncryptedData_PUT_KeyInfo) */

void zxmd_xenc_EncryptedData_PUT_KeyInfo(struct zxmd_xenc_EncryptedData_s* x, int n, struct zxmd_ds_KeyInfo_s* z)
{
  struct zxmd_ds_KeyInfo_s* y;
  if (!x || !z) return;
  y = x->KeyInfo;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->KeyInfo = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zxmd_ds_KeyInfo_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zxmd_xenc_EncryptedData_ADD_KeyInfo) */

void zxmd_xenc_EncryptedData_ADD_KeyInfo(struct zxmd_xenc_EncryptedData_s* x, int n, struct zxmd_ds_KeyInfo_s* z)
{
  struct zxmd_ds_KeyInfo_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->KeyInfo->gg.g;
    x->KeyInfo = z;
    return;
  case -1:
    y = x->KeyInfo;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zxmd_ds_KeyInfo_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->KeyInfo; n > 1 && y; --n, y = (struct zxmd_ds_KeyInfo_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zxmd_xenc_EncryptedData_DEL_KeyInfo) */

void zxmd_xenc_EncryptedData_DEL_KeyInfo(struct zxmd_xenc_EncryptedData_s* x, int n)
{
  struct zxmd_ds_KeyInfo_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->KeyInfo = (struct zxmd_ds_KeyInfo_s*)x->KeyInfo->gg.g.n;
    return;
  case -1:
    y = (struct zxmd_ds_KeyInfo_s*)x->KeyInfo;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zxmd_ds_KeyInfo_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->KeyInfo; n > 1 && y->gg.g.n; --n, y = (struct zxmd_ds_KeyInfo_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zxmd_xenc_EncryptedData_NUM_CipherData) */

int zxmd_xenc_EncryptedData_NUM_CipherData(struct zxmd_xenc_EncryptedData_s* x)
{
  struct zxmd_xenc_CipherData_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->CipherData; y; ++n, y = (struct zxmd_xenc_CipherData_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zxmd_xenc_EncryptedData_GET_CipherData) */

struct zxmd_xenc_CipherData_s* zxmd_xenc_EncryptedData_GET_CipherData(struct zxmd_xenc_EncryptedData_s* x, int n)
{
  struct zxmd_xenc_CipherData_s* y;
  if (!x) return 0;
  for (y = x->CipherData; n>=0 && y; --n, y = (struct zxmd_xenc_CipherData_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zxmd_xenc_EncryptedData_POP_CipherData) */

struct zxmd_xenc_CipherData_s* zxmd_xenc_EncryptedData_POP_CipherData(struct zxmd_xenc_EncryptedData_s* x)
{
  struct zxmd_xenc_CipherData_s* y;
  if (!x) return 0;
  y = x->CipherData;
  if (y)
    x->CipherData = (struct zxmd_xenc_CipherData_s*)y->gg.g.n;
  return y;
}

/* FUNC(zxmd_xenc_EncryptedData_PUSH_CipherData) */

void zxmd_xenc_EncryptedData_PUSH_CipherData(struct zxmd_xenc_EncryptedData_s* x, struct zxmd_xenc_CipherData_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->CipherData->gg.g;
  x->CipherData = z;
}

/* FUNC(zxmd_xenc_EncryptedData_REV_CipherData) */

void zxmd_xenc_EncryptedData_REV_CipherData(struct zxmd_xenc_EncryptedData_s* x)
{
  struct zxmd_xenc_CipherData_s* nxt;
  struct zxmd_xenc_CipherData_s* y;
  if (!x) return;
  y = x->CipherData;
  if (!y) return;
  x->CipherData = 0;
  while (y) {
    nxt = (struct zxmd_xenc_CipherData_s*)y->gg.g.n;
    y->gg.g.n = &x->CipherData->gg.g;
    x->CipherData = y;
    y = nxt;
  }
}

/* FUNC(zxmd_xenc_EncryptedData_PUT_CipherData) */

void zxmd_xenc_EncryptedData_PUT_CipherData(struct zxmd_xenc_EncryptedData_s* x, int n, struct zxmd_xenc_CipherData_s* z)
{
  struct zxmd_xenc_CipherData_s* y;
  if (!x || !z) return;
  y = x->CipherData;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->CipherData = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zxmd_xenc_CipherData_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zxmd_xenc_EncryptedData_ADD_CipherData) */

void zxmd_xenc_EncryptedData_ADD_CipherData(struct zxmd_xenc_EncryptedData_s* x, int n, struct zxmd_xenc_CipherData_s* z)
{
  struct zxmd_xenc_CipherData_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->CipherData->gg.g;
    x->CipherData = z;
    return;
  case -1:
    y = x->CipherData;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zxmd_xenc_CipherData_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->CipherData; n > 1 && y; --n, y = (struct zxmd_xenc_CipherData_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zxmd_xenc_EncryptedData_DEL_CipherData) */

void zxmd_xenc_EncryptedData_DEL_CipherData(struct zxmd_xenc_EncryptedData_s* x, int n)
{
  struct zxmd_xenc_CipherData_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->CipherData = (struct zxmd_xenc_CipherData_s*)x->CipherData->gg.g.n;
    return;
  case -1:
    y = (struct zxmd_xenc_CipherData_s*)x->CipherData;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zxmd_xenc_CipherData_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->CipherData; n > 1 && y->gg.g.n; --n, y = (struct zxmd_xenc_CipherData_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zxmd_xenc_EncryptedData_NUM_EncryptionProperties) */

int zxmd_xenc_EncryptedData_NUM_EncryptionProperties(struct zxmd_xenc_EncryptedData_s* x)
{
  struct zxmd_xenc_EncryptionProperties_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->EncryptionProperties; y; ++n, y = (struct zxmd_xenc_EncryptionProperties_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zxmd_xenc_EncryptedData_GET_EncryptionProperties) */

struct zxmd_xenc_EncryptionProperties_s* zxmd_xenc_EncryptedData_GET_EncryptionProperties(struct zxmd_xenc_EncryptedData_s* x, int n)
{
  struct zxmd_xenc_EncryptionProperties_s* y;
  if (!x) return 0;
  for (y = x->EncryptionProperties; n>=0 && y; --n, y = (struct zxmd_xenc_EncryptionProperties_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zxmd_xenc_EncryptedData_POP_EncryptionProperties) */

struct zxmd_xenc_EncryptionProperties_s* zxmd_xenc_EncryptedData_POP_EncryptionProperties(struct zxmd_xenc_EncryptedData_s* x)
{
  struct zxmd_xenc_EncryptionProperties_s* y;
  if (!x) return 0;
  y = x->EncryptionProperties;
  if (y)
    x->EncryptionProperties = (struct zxmd_xenc_EncryptionProperties_s*)y->gg.g.n;
  return y;
}

/* FUNC(zxmd_xenc_EncryptedData_PUSH_EncryptionProperties) */

void zxmd_xenc_EncryptedData_PUSH_EncryptionProperties(struct zxmd_xenc_EncryptedData_s* x, struct zxmd_xenc_EncryptionProperties_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->EncryptionProperties->gg.g;
  x->EncryptionProperties = z;
}

/* FUNC(zxmd_xenc_EncryptedData_REV_EncryptionProperties) */

void zxmd_xenc_EncryptedData_REV_EncryptionProperties(struct zxmd_xenc_EncryptedData_s* x)
{
  struct zxmd_xenc_EncryptionProperties_s* nxt;
  struct zxmd_xenc_EncryptionProperties_s* y;
  if (!x) return;
  y = x->EncryptionProperties;
  if (!y) return;
  x->EncryptionProperties = 0;
  while (y) {
    nxt = (struct zxmd_xenc_EncryptionProperties_s*)y->gg.g.n;
    y->gg.g.n = &x->EncryptionProperties->gg.g;
    x->EncryptionProperties = y;
    y = nxt;
  }
}

/* FUNC(zxmd_xenc_EncryptedData_PUT_EncryptionProperties) */

void zxmd_xenc_EncryptedData_PUT_EncryptionProperties(struct zxmd_xenc_EncryptedData_s* x, int n, struct zxmd_xenc_EncryptionProperties_s* z)
{
  struct zxmd_xenc_EncryptionProperties_s* y;
  if (!x || !z) return;
  y = x->EncryptionProperties;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->EncryptionProperties = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zxmd_xenc_EncryptionProperties_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zxmd_xenc_EncryptedData_ADD_EncryptionProperties) */

void zxmd_xenc_EncryptedData_ADD_EncryptionProperties(struct zxmd_xenc_EncryptedData_s* x, int n, struct zxmd_xenc_EncryptionProperties_s* z)
{
  struct zxmd_xenc_EncryptionProperties_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->EncryptionProperties->gg.g;
    x->EncryptionProperties = z;
    return;
  case -1:
    y = x->EncryptionProperties;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zxmd_xenc_EncryptionProperties_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->EncryptionProperties; n > 1 && y; --n, y = (struct zxmd_xenc_EncryptionProperties_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zxmd_xenc_EncryptedData_DEL_EncryptionProperties) */

void zxmd_xenc_EncryptedData_DEL_EncryptionProperties(struct zxmd_xenc_EncryptedData_s* x, int n)
{
  struct zxmd_xenc_EncryptionProperties_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->EncryptionProperties = (struct zxmd_xenc_EncryptionProperties_s*)x->EncryptionProperties->gg.g.n;
    return;
  case -1:
    y = (struct zxmd_xenc_EncryptionProperties_s*)x->EncryptionProperties;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zxmd_xenc_EncryptionProperties_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->EncryptionProperties; n > 1 && y->gg.g.n; --n, y = (struct zxmd_xenc_EncryptionProperties_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

/* FUNC(zxmd_xenc_EncryptedData_GET_Id) */
struct zx_str_s* zxmd_xenc_EncryptedData_GET_Id(struct zxmd_xenc_EncryptedData_s* x) { return x->Id; }
/* FUNC(zxmd_xenc_EncryptedData_PUT_Id) */
void zxmd_xenc_EncryptedData_PUT_Id(struct zxmd_xenc_EncryptedData_s* x, struct zx_str_s* y) { x->Id = y; }
/* FUNC(zxmd_xenc_EncryptedData_GET_Type) */
struct zx_str_s* zxmd_xenc_EncryptedData_GET_Type(struct zxmd_xenc_EncryptedData_s* x) { return x->Type; }
/* FUNC(zxmd_xenc_EncryptedData_PUT_Type) */
void zxmd_xenc_EncryptedData_PUT_Type(struct zxmd_xenc_EncryptedData_s* x, struct zx_str_s* y) { x->Type = y; }
/* FUNC(zxmd_xenc_EncryptedData_GET_MimeType) */
struct zx_str_s* zxmd_xenc_EncryptedData_GET_MimeType(struct zxmd_xenc_EncryptedData_s* x) { return x->MimeType; }
/* FUNC(zxmd_xenc_EncryptedData_PUT_MimeType) */
void zxmd_xenc_EncryptedData_PUT_MimeType(struct zxmd_xenc_EncryptedData_s* x, struct zx_str_s* y) { x->MimeType = y; }
/* FUNC(zxmd_xenc_EncryptedData_GET_Encoding) */
struct zx_str_s* zxmd_xenc_EncryptedData_GET_Encoding(struct zxmd_xenc_EncryptedData_s* x) { return x->Encoding; }
/* FUNC(zxmd_xenc_EncryptedData_PUT_Encoding) */
void zxmd_xenc_EncryptedData_PUT_Encoding(struct zxmd_xenc_EncryptedData_s* x, struct zx_str_s* y) { x->Encoding = y; }







/* FUNC(zxmd_xenc_EncryptedKey_NUM_EncryptionMethod) */

int zxmd_xenc_EncryptedKey_NUM_EncryptionMethod(struct zxmd_xenc_EncryptedKey_s* x)
{
  struct zxmd_xenc_EncryptionMethod_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->EncryptionMethod; y; ++n, y = (struct zxmd_xenc_EncryptionMethod_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zxmd_xenc_EncryptedKey_GET_EncryptionMethod) */

struct zxmd_xenc_EncryptionMethod_s* zxmd_xenc_EncryptedKey_GET_EncryptionMethod(struct zxmd_xenc_EncryptedKey_s* x, int n)
{
  struct zxmd_xenc_EncryptionMethod_s* y;
  if (!x) return 0;
  for (y = x->EncryptionMethod; n>=0 && y; --n, y = (struct zxmd_xenc_EncryptionMethod_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zxmd_xenc_EncryptedKey_POP_EncryptionMethod) */

struct zxmd_xenc_EncryptionMethod_s* zxmd_xenc_EncryptedKey_POP_EncryptionMethod(struct zxmd_xenc_EncryptedKey_s* x)
{
  struct zxmd_xenc_EncryptionMethod_s* y;
  if (!x) return 0;
  y = x->EncryptionMethod;
  if (y)
    x->EncryptionMethod = (struct zxmd_xenc_EncryptionMethod_s*)y->gg.g.n;
  return y;
}

/* FUNC(zxmd_xenc_EncryptedKey_PUSH_EncryptionMethod) */

void zxmd_xenc_EncryptedKey_PUSH_EncryptionMethod(struct zxmd_xenc_EncryptedKey_s* x, struct zxmd_xenc_EncryptionMethod_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->EncryptionMethod->gg.g;
  x->EncryptionMethod = z;
}

/* FUNC(zxmd_xenc_EncryptedKey_REV_EncryptionMethod) */

void zxmd_xenc_EncryptedKey_REV_EncryptionMethod(struct zxmd_xenc_EncryptedKey_s* x)
{
  struct zxmd_xenc_EncryptionMethod_s* nxt;
  struct zxmd_xenc_EncryptionMethod_s* y;
  if (!x) return;
  y = x->EncryptionMethod;
  if (!y) return;
  x->EncryptionMethod = 0;
  while (y) {
    nxt = (struct zxmd_xenc_EncryptionMethod_s*)y->gg.g.n;
    y->gg.g.n = &x->EncryptionMethod->gg.g;
    x->EncryptionMethod = y;
    y = nxt;
  }
}

/* FUNC(zxmd_xenc_EncryptedKey_PUT_EncryptionMethod) */

void zxmd_xenc_EncryptedKey_PUT_EncryptionMethod(struct zxmd_xenc_EncryptedKey_s* x, int n, struct zxmd_xenc_EncryptionMethod_s* z)
{
  struct zxmd_xenc_EncryptionMethod_s* y;
  if (!x || !z) return;
  y = x->EncryptionMethod;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->EncryptionMethod = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zxmd_xenc_EncryptionMethod_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zxmd_xenc_EncryptedKey_ADD_EncryptionMethod) */

void zxmd_xenc_EncryptedKey_ADD_EncryptionMethod(struct zxmd_xenc_EncryptedKey_s* x, int n, struct zxmd_xenc_EncryptionMethod_s* z)
{
  struct zxmd_xenc_EncryptionMethod_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->EncryptionMethod->gg.g;
    x->EncryptionMethod = z;
    return;
  case -1:
    y = x->EncryptionMethod;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zxmd_xenc_EncryptionMethod_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->EncryptionMethod; n > 1 && y; --n, y = (struct zxmd_xenc_EncryptionMethod_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zxmd_xenc_EncryptedKey_DEL_EncryptionMethod) */

void zxmd_xenc_EncryptedKey_DEL_EncryptionMethod(struct zxmd_xenc_EncryptedKey_s* x, int n)
{
  struct zxmd_xenc_EncryptionMethod_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->EncryptionMethod = (struct zxmd_xenc_EncryptionMethod_s*)x->EncryptionMethod->gg.g.n;
    return;
  case -1:
    y = (struct zxmd_xenc_EncryptionMethod_s*)x->EncryptionMethod;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zxmd_xenc_EncryptionMethod_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->EncryptionMethod; n > 1 && y->gg.g.n; --n, y = (struct zxmd_xenc_EncryptionMethod_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zxmd_xenc_EncryptedKey_NUM_KeyInfo) */

int zxmd_xenc_EncryptedKey_NUM_KeyInfo(struct zxmd_xenc_EncryptedKey_s* x)
{
  struct zxmd_ds_KeyInfo_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->KeyInfo; y; ++n, y = (struct zxmd_ds_KeyInfo_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zxmd_xenc_EncryptedKey_GET_KeyInfo) */

struct zxmd_ds_KeyInfo_s* zxmd_xenc_EncryptedKey_GET_KeyInfo(struct zxmd_xenc_EncryptedKey_s* x, int n)
{
  struct zxmd_ds_KeyInfo_s* y;
  if (!x) return 0;
  for (y = x->KeyInfo; n>=0 && y; --n, y = (struct zxmd_ds_KeyInfo_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zxmd_xenc_EncryptedKey_POP_KeyInfo) */

struct zxmd_ds_KeyInfo_s* zxmd_xenc_EncryptedKey_POP_KeyInfo(struct zxmd_xenc_EncryptedKey_s* x)
{
  struct zxmd_ds_KeyInfo_s* y;
  if (!x) return 0;
  y = x->KeyInfo;
  if (y)
    x->KeyInfo = (struct zxmd_ds_KeyInfo_s*)y->gg.g.n;
  return y;
}

/* FUNC(zxmd_xenc_EncryptedKey_PUSH_KeyInfo) */

void zxmd_xenc_EncryptedKey_PUSH_KeyInfo(struct zxmd_xenc_EncryptedKey_s* x, struct zxmd_ds_KeyInfo_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->KeyInfo->gg.g;
  x->KeyInfo = z;
}

/* FUNC(zxmd_xenc_EncryptedKey_REV_KeyInfo) */

void zxmd_xenc_EncryptedKey_REV_KeyInfo(struct zxmd_xenc_EncryptedKey_s* x)
{
  struct zxmd_ds_KeyInfo_s* nxt;
  struct zxmd_ds_KeyInfo_s* y;
  if (!x) return;
  y = x->KeyInfo;
  if (!y) return;
  x->KeyInfo = 0;
  while (y) {
    nxt = (struct zxmd_ds_KeyInfo_s*)y->gg.g.n;
    y->gg.g.n = &x->KeyInfo->gg.g;
    x->KeyInfo = y;
    y = nxt;
  }
}

/* FUNC(zxmd_xenc_EncryptedKey_PUT_KeyInfo) */

void zxmd_xenc_EncryptedKey_PUT_KeyInfo(struct zxmd_xenc_EncryptedKey_s* x, int n, struct zxmd_ds_KeyInfo_s* z)
{
  struct zxmd_ds_KeyInfo_s* y;
  if (!x || !z) return;
  y = x->KeyInfo;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->KeyInfo = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zxmd_ds_KeyInfo_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zxmd_xenc_EncryptedKey_ADD_KeyInfo) */

void zxmd_xenc_EncryptedKey_ADD_KeyInfo(struct zxmd_xenc_EncryptedKey_s* x, int n, struct zxmd_ds_KeyInfo_s* z)
{
  struct zxmd_ds_KeyInfo_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->KeyInfo->gg.g;
    x->KeyInfo = z;
    return;
  case -1:
    y = x->KeyInfo;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zxmd_ds_KeyInfo_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->KeyInfo; n > 1 && y; --n, y = (struct zxmd_ds_KeyInfo_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zxmd_xenc_EncryptedKey_DEL_KeyInfo) */

void zxmd_xenc_EncryptedKey_DEL_KeyInfo(struct zxmd_xenc_EncryptedKey_s* x, int n)
{
  struct zxmd_ds_KeyInfo_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->KeyInfo = (struct zxmd_ds_KeyInfo_s*)x->KeyInfo->gg.g.n;
    return;
  case -1:
    y = (struct zxmd_ds_KeyInfo_s*)x->KeyInfo;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zxmd_ds_KeyInfo_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->KeyInfo; n > 1 && y->gg.g.n; --n, y = (struct zxmd_ds_KeyInfo_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zxmd_xenc_EncryptedKey_NUM_CipherData) */

int zxmd_xenc_EncryptedKey_NUM_CipherData(struct zxmd_xenc_EncryptedKey_s* x)
{
  struct zxmd_xenc_CipherData_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->CipherData; y; ++n, y = (struct zxmd_xenc_CipherData_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zxmd_xenc_EncryptedKey_GET_CipherData) */

struct zxmd_xenc_CipherData_s* zxmd_xenc_EncryptedKey_GET_CipherData(struct zxmd_xenc_EncryptedKey_s* x, int n)
{
  struct zxmd_xenc_CipherData_s* y;
  if (!x) return 0;
  for (y = x->CipherData; n>=0 && y; --n, y = (struct zxmd_xenc_CipherData_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zxmd_xenc_EncryptedKey_POP_CipherData) */

struct zxmd_xenc_CipherData_s* zxmd_xenc_EncryptedKey_POP_CipherData(struct zxmd_xenc_EncryptedKey_s* x)
{
  struct zxmd_xenc_CipherData_s* y;
  if (!x) return 0;
  y = x->CipherData;
  if (y)
    x->CipherData = (struct zxmd_xenc_CipherData_s*)y->gg.g.n;
  return y;
}

/* FUNC(zxmd_xenc_EncryptedKey_PUSH_CipherData) */

void zxmd_xenc_EncryptedKey_PUSH_CipherData(struct zxmd_xenc_EncryptedKey_s* x, struct zxmd_xenc_CipherData_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->CipherData->gg.g;
  x->CipherData = z;
}

/* FUNC(zxmd_xenc_EncryptedKey_REV_CipherData) */

void zxmd_xenc_EncryptedKey_REV_CipherData(struct zxmd_xenc_EncryptedKey_s* x)
{
  struct zxmd_xenc_CipherData_s* nxt;
  struct zxmd_xenc_CipherData_s* y;
  if (!x) return;
  y = x->CipherData;
  if (!y) return;
  x->CipherData = 0;
  while (y) {
    nxt = (struct zxmd_xenc_CipherData_s*)y->gg.g.n;
    y->gg.g.n = &x->CipherData->gg.g;
    x->CipherData = y;
    y = nxt;
  }
}

/* FUNC(zxmd_xenc_EncryptedKey_PUT_CipherData) */

void zxmd_xenc_EncryptedKey_PUT_CipherData(struct zxmd_xenc_EncryptedKey_s* x, int n, struct zxmd_xenc_CipherData_s* z)
{
  struct zxmd_xenc_CipherData_s* y;
  if (!x || !z) return;
  y = x->CipherData;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->CipherData = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zxmd_xenc_CipherData_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zxmd_xenc_EncryptedKey_ADD_CipherData) */

void zxmd_xenc_EncryptedKey_ADD_CipherData(struct zxmd_xenc_EncryptedKey_s* x, int n, struct zxmd_xenc_CipherData_s* z)
{
  struct zxmd_xenc_CipherData_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->CipherData->gg.g;
    x->CipherData = z;
    return;
  case -1:
    y = x->CipherData;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zxmd_xenc_CipherData_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->CipherData; n > 1 && y; --n, y = (struct zxmd_xenc_CipherData_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zxmd_xenc_EncryptedKey_DEL_CipherData) */

void zxmd_xenc_EncryptedKey_DEL_CipherData(struct zxmd_xenc_EncryptedKey_s* x, int n)
{
  struct zxmd_xenc_CipherData_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->CipherData = (struct zxmd_xenc_CipherData_s*)x->CipherData->gg.g.n;
    return;
  case -1:
    y = (struct zxmd_xenc_CipherData_s*)x->CipherData;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zxmd_xenc_CipherData_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->CipherData; n > 1 && y->gg.g.n; --n, y = (struct zxmd_xenc_CipherData_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zxmd_xenc_EncryptedKey_NUM_EncryptionProperties) */

int zxmd_xenc_EncryptedKey_NUM_EncryptionProperties(struct zxmd_xenc_EncryptedKey_s* x)
{
  struct zxmd_xenc_EncryptionProperties_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->EncryptionProperties; y; ++n, y = (struct zxmd_xenc_EncryptionProperties_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zxmd_xenc_EncryptedKey_GET_EncryptionProperties) */

struct zxmd_xenc_EncryptionProperties_s* zxmd_xenc_EncryptedKey_GET_EncryptionProperties(struct zxmd_xenc_EncryptedKey_s* x, int n)
{
  struct zxmd_xenc_EncryptionProperties_s* y;
  if (!x) return 0;
  for (y = x->EncryptionProperties; n>=0 && y; --n, y = (struct zxmd_xenc_EncryptionProperties_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zxmd_xenc_EncryptedKey_POP_EncryptionProperties) */

struct zxmd_xenc_EncryptionProperties_s* zxmd_xenc_EncryptedKey_POP_EncryptionProperties(struct zxmd_xenc_EncryptedKey_s* x)
{
  struct zxmd_xenc_EncryptionProperties_s* y;
  if (!x) return 0;
  y = x->EncryptionProperties;
  if (y)
    x->EncryptionProperties = (struct zxmd_xenc_EncryptionProperties_s*)y->gg.g.n;
  return y;
}

/* FUNC(zxmd_xenc_EncryptedKey_PUSH_EncryptionProperties) */

void zxmd_xenc_EncryptedKey_PUSH_EncryptionProperties(struct zxmd_xenc_EncryptedKey_s* x, struct zxmd_xenc_EncryptionProperties_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->EncryptionProperties->gg.g;
  x->EncryptionProperties = z;
}

/* FUNC(zxmd_xenc_EncryptedKey_REV_EncryptionProperties) */

void zxmd_xenc_EncryptedKey_REV_EncryptionProperties(struct zxmd_xenc_EncryptedKey_s* x)
{
  struct zxmd_xenc_EncryptionProperties_s* nxt;
  struct zxmd_xenc_EncryptionProperties_s* y;
  if (!x) return;
  y = x->EncryptionProperties;
  if (!y) return;
  x->EncryptionProperties = 0;
  while (y) {
    nxt = (struct zxmd_xenc_EncryptionProperties_s*)y->gg.g.n;
    y->gg.g.n = &x->EncryptionProperties->gg.g;
    x->EncryptionProperties = y;
    y = nxt;
  }
}

/* FUNC(zxmd_xenc_EncryptedKey_PUT_EncryptionProperties) */

void zxmd_xenc_EncryptedKey_PUT_EncryptionProperties(struct zxmd_xenc_EncryptedKey_s* x, int n, struct zxmd_xenc_EncryptionProperties_s* z)
{
  struct zxmd_xenc_EncryptionProperties_s* y;
  if (!x || !z) return;
  y = x->EncryptionProperties;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->EncryptionProperties = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zxmd_xenc_EncryptionProperties_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zxmd_xenc_EncryptedKey_ADD_EncryptionProperties) */

void zxmd_xenc_EncryptedKey_ADD_EncryptionProperties(struct zxmd_xenc_EncryptedKey_s* x, int n, struct zxmd_xenc_EncryptionProperties_s* z)
{
  struct zxmd_xenc_EncryptionProperties_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->EncryptionProperties->gg.g;
    x->EncryptionProperties = z;
    return;
  case -1:
    y = x->EncryptionProperties;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zxmd_xenc_EncryptionProperties_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->EncryptionProperties; n > 1 && y; --n, y = (struct zxmd_xenc_EncryptionProperties_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zxmd_xenc_EncryptedKey_DEL_EncryptionProperties) */

void zxmd_xenc_EncryptedKey_DEL_EncryptionProperties(struct zxmd_xenc_EncryptedKey_s* x, int n)
{
  struct zxmd_xenc_EncryptionProperties_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->EncryptionProperties = (struct zxmd_xenc_EncryptionProperties_s*)x->EncryptionProperties->gg.g.n;
    return;
  case -1:
    y = (struct zxmd_xenc_EncryptionProperties_s*)x->EncryptionProperties;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zxmd_xenc_EncryptionProperties_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->EncryptionProperties; n > 1 && y->gg.g.n; --n, y = (struct zxmd_xenc_EncryptionProperties_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

/* FUNC(zxmd_xenc_EncryptedKey_GET_Id) */
struct zx_str_s* zxmd_xenc_EncryptedKey_GET_Id(struct zxmd_xenc_EncryptedKey_s* x) { return x->Id; }
/* FUNC(zxmd_xenc_EncryptedKey_PUT_Id) */
void zxmd_xenc_EncryptedKey_PUT_Id(struct zxmd_xenc_EncryptedKey_s* x, struct zx_str_s* y) { x->Id = y; }
/* FUNC(zxmd_xenc_EncryptedKey_GET_Type) */
struct zx_str_s* zxmd_xenc_EncryptedKey_GET_Type(struct zxmd_xenc_EncryptedKey_s* x) { return x->Type; }
/* FUNC(zxmd_xenc_EncryptedKey_PUT_Type) */
void zxmd_xenc_EncryptedKey_PUT_Type(struct zxmd_xenc_EncryptedKey_s* x, struct zx_str_s* y) { x->Type = y; }
/* FUNC(zxmd_xenc_EncryptedKey_GET_MimeType) */
struct zx_str_s* zxmd_xenc_EncryptedKey_GET_MimeType(struct zxmd_xenc_EncryptedKey_s* x) { return x->MimeType; }
/* FUNC(zxmd_xenc_EncryptedKey_PUT_MimeType) */
void zxmd_xenc_EncryptedKey_PUT_MimeType(struct zxmd_xenc_EncryptedKey_s* x, struct zx_str_s* y) { x->MimeType = y; }
/* FUNC(zxmd_xenc_EncryptedKey_GET_Encoding) */
struct zx_str_s* zxmd_xenc_EncryptedKey_GET_Encoding(struct zxmd_xenc_EncryptedKey_s* x) { return x->Encoding; }
/* FUNC(zxmd_xenc_EncryptedKey_PUT_Encoding) */
void zxmd_xenc_EncryptedKey_PUT_Encoding(struct zxmd_xenc_EncryptedKey_s* x, struct zx_str_s* y) { x->Encoding = y; }


/* FUNC(zxmd_xenc_EncryptedKey_NUM_ReferenceList) */

int zxmd_xenc_EncryptedKey_NUM_ReferenceList(struct zxmd_xenc_EncryptedKey_s* x)
{
  struct zxmd_xenc_ReferenceList_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->ReferenceList; y; ++n, y = (struct zxmd_xenc_ReferenceList_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zxmd_xenc_EncryptedKey_GET_ReferenceList) */

struct zxmd_xenc_ReferenceList_s* zxmd_xenc_EncryptedKey_GET_ReferenceList(struct zxmd_xenc_EncryptedKey_s* x, int n)
{
  struct zxmd_xenc_ReferenceList_s* y;
  if (!x) return 0;
  for (y = x->ReferenceList; n>=0 && y; --n, y = (struct zxmd_xenc_ReferenceList_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zxmd_xenc_EncryptedKey_POP_ReferenceList) */

struct zxmd_xenc_ReferenceList_s* zxmd_xenc_EncryptedKey_POP_ReferenceList(struct zxmd_xenc_EncryptedKey_s* x)
{
  struct zxmd_xenc_ReferenceList_s* y;
  if (!x) return 0;
  y = x->ReferenceList;
  if (y)
    x->ReferenceList = (struct zxmd_xenc_ReferenceList_s*)y->gg.g.n;
  return y;
}

/* FUNC(zxmd_xenc_EncryptedKey_PUSH_ReferenceList) */

void zxmd_xenc_EncryptedKey_PUSH_ReferenceList(struct zxmd_xenc_EncryptedKey_s* x, struct zxmd_xenc_ReferenceList_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->ReferenceList->gg.g;
  x->ReferenceList = z;
}

/* FUNC(zxmd_xenc_EncryptedKey_REV_ReferenceList) */

void zxmd_xenc_EncryptedKey_REV_ReferenceList(struct zxmd_xenc_EncryptedKey_s* x)
{
  struct zxmd_xenc_ReferenceList_s* nxt;
  struct zxmd_xenc_ReferenceList_s* y;
  if (!x) return;
  y = x->ReferenceList;
  if (!y) return;
  x->ReferenceList = 0;
  while (y) {
    nxt = (struct zxmd_xenc_ReferenceList_s*)y->gg.g.n;
    y->gg.g.n = &x->ReferenceList->gg.g;
    x->ReferenceList = y;
    y = nxt;
  }
}

/* FUNC(zxmd_xenc_EncryptedKey_PUT_ReferenceList) */

void zxmd_xenc_EncryptedKey_PUT_ReferenceList(struct zxmd_xenc_EncryptedKey_s* x, int n, struct zxmd_xenc_ReferenceList_s* z)
{
  struct zxmd_xenc_ReferenceList_s* y;
  if (!x || !z) return;
  y = x->ReferenceList;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->ReferenceList = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zxmd_xenc_ReferenceList_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zxmd_xenc_EncryptedKey_ADD_ReferenceList) */

void zxmd_xenc_EncryptedKey_ADD_ReferenceList(struct zxmd_xenc_EncryptedKey_s* x, int n, struct zxmd_xenc_ReferenceList_s* z)
{
  struct zxmd_xenc_ReferenceList_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->ReferenceList->gg.g;
    x->ReferenceList = z;
    return;
  case -1:
    y = x->ReferenceList;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zxmd_xenc_ReferenceList_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->ReferenceList; n > 1 && y; --n, y = (struct zxmd_xenc_ReferenceList_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zxmd_xenc_EncryptedKey_DEL_ReferenceList) */

void zxmd_xenc_EncryptedKey_DEL_ReferenceList(struct zxmd_xenc_EncryptedKey_s* x, int n)
{
  struct zxmd_xenc_ReferenceList_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->ReferenceList = (struct zxmd_xenc_ReferenceList_s*)x->ReferenceList->gg.g.n;
    return;
  case -1:
    y = (struct zxmd_xenc_ReferenceList_s*)x->ReferenceList;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zxmd_xenc_ReferenceList_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->ReferenceList; n > 1 && y->gg.g.n; --n, y = (struct zxmd_xenc_ReferenceList_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zxmd_xenc_EncryptedKey_NUM_CarriedKeyName) */

int zxmd_xenc_EncryptedKey_NUM_CarriedKeyName(struct zxmd_xenc_EncryptedKey_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->CarriedKeyName; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zxmd_xenc_EncryptedKey_GET_CarriedKeyName) */

struct zx_elem_s* zxmd_xenc_EncryptedKey_GET_CarriedKeyName(struct zxmd_xenc_EncryptedKey_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->CarriedKeyName; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zxmd_xenc_EncryptedKey_POP_CarriedKeyName) */

struct zx_elem_s* zxmd_xenc_EncryptedKey_POP_CarriedKeyName(struct zxmd_xenc_EncryptedKey_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->CarriedKeyName;
  if (y)
    x->CarriedKeyName = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zxmd_xenc_EncryptedKey_PUSH_CarriedKeyName) */

void zxmd_xenc_EncryptedKey_PUSH_CarriedKeyName(struct zxmd_xenc_EncryptedKey_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->CarriedKeyName->g;
  x->CarriedKeyName = z;
}

/* FUNC(zxmd_xenc_EncryptedKey_REV_CarriedKeyName) */

void zxmd_xenc_EncryptedKey_REV_CarriedKeyName(struct zxmd_xenc_EncryptedKey_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->CarriedKeyName;
  if (!y) return;
  x->CarriedKeyName = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->CarriedKeyName->g;
    x->CarriedKeyName = y;
    y = nxt;
  }
}

/* FUNC(zxmd_xenc_EncryptedKey_PUT_CarriedKeyName) */

void zxmd_xenc_EncryptedKey_PUT_CarriedKeyName(struct zxmd_xenc_EncryptedKey_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->CarriedKeyName;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->CarriedKeyName = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zxmd_xenc_EncryptedKey_ADD_CarriedKeyName) */

void zxmd_xenc_EncryptedKey_ADD_CarriedKeyName(struct zxmd_xenc_EncryptedKey_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->CarriedKeyName->g;
    x->CarriedKeyName = z;
    return;
  case -1:
    y = x->CarriedKeyName;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->CarriedKeyName; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zxmd_xenc_EncryptedKey_DEL_CarriedKeyName) */

void zxmd_xenc_EncryptedKey_DEL_CarriedKeyName(struct zxmd_xenc_EncryptedKey_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->CarriedKeyName = (struct zx_elem_s*)x->CarriedKeyName->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->CarriedKeyName;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->CarriedKeyName; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

/* FUNC(zxmd_xenc_EncryptedKey_GET_Recipient) */
struct zx_str_s* zxmd_xenc_EncryptedKey_GET_Recipient(struct zxmd_xenc_EncryptedKey_s* x) { return x->Recipient; }
/* FUNC(zxmd_xenc_EncryptedKey_PUT_Recipient) */
void zxmd_xenc_EncryptedKey_PUT_Recipient(struct zxmd_xenc_EncryptedKey_s* x, struct zx_str_s* y) { x->Recipient = y; }







/* FUNC(zxmd_xenc_EncryptionMethod_NUM_KeySize) */

int zxmd_xenc_EncryptionMethod_NUM_KeySize(struct zxmd_xenc_EncryptionMethod_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->KeySize; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zxmd_xenc_EncryptionMethod_GET_KeySize) */

struct zx_elem_s* zxmd_xenc_EncryptionMethod_GET_KeySize(struct zxmd_xenc_EncryptionMethod_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->KeySize; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zxmd_xenc_EncryptionMethod_POP_KeySize) */

struct zx_elem_s* zxmd_xenc_EncryptionMethod_POP_KeySize(struct zxmd_xenc_EncryptionMethod_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->KeySize;
  if (y)
    x->KeySize = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zxmd_xenc_EncryptionMethod_PUSH_KeySize) */

void zxmd_xenc_EncryptionMethod_PUSH_KeySize(struct zxmd_xenc_EncryptionMethod_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->KeySize->g;
  x->KeySize = z;
}

/* FUNC(zxmd_xenc_EncryptionMethod_REV_KeySize) */

void zxmd_xenc_EncryptionMethod_REV_KeySize(struct zxmd_xenc_EncryptionMethod_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->KeySize;
  if (!y) return;
  x->KeySize = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->KeySize->g;
    x->KeySize = y;
    y = nxt;
  }
}

/* FUNC(zxmd_xenc_EncryptionMethod_PUT_KeySize) */

void zxmd_xenc_EncryptionMethod_PUT_KeySize(struct zxmd_xenc_EncryptionMethod_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->KeySize;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->KeySize = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zxmd_xenc_EncryptionMethod_ADD_KeySize) */

void zxmd_xenc_EncryptionMethod_ADD_KeySize(struct zxmd_xenc_EncryptionMethod_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->KeySize->g;
    x->KeySize = z;
    return;
  case -1:
    y = x->KeySize;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->KeySize; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zxmd_xenc_EncryptionMethod_DEL_KeySize) */

void zxmd_xenc_EncryptionMethod_DEL_KeySize(struct zxmd_xenc_EncryptionMethod_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->KeySize = (struct zx_elem_s*)x->KeySize->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->KeySize;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->KeySize; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}



/* FUNC(zxmd_xenc_EncryptionMethod_NUM_OAEPparams) */

int zxmd_xenc_EncryptionMethod_NUM_OAEPparams(struct zxmd_xenc_EncryptionMethod_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->OAEPparams; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zxmd_xenc_EncryptionMethod_GET_OAEPparams) */

struct zx_elem_s* zxmd_xenc_EncryptionMethod_GET_OAEPparams(struct zxmd_xenc_EncryptionMethod_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->OAEPparams; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zxmd_xenc_EncryptionMethod_POP_OAEPparams) */

struct zx_elem_s* zxmd_xenc_EncryptionMethod_POP_OAEPparams(struct zxmd_xenc_EncryptionMethod_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->OAEPparams;
  if (y)
    x->OAEPparams = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zxmd_xenc_EncryptionMethod_PUSH_OAEPparams) */

void zxmd_xenc_EncryptionMethod_PUSH_OAEPparams(struct zxmd_xenc_EncryptionMethod_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->OAEPparams->g;
  x->OAEPparams = z;
}

/* FUNC(zxmd_xenc_EncryptionMethod_REV_OAEPparams) */

void zxmd_xenc_EncryptionMethod_REV_OAEPparams(struct zxmd_xenc_EncryptionMethod_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->OAEPparams;
  if (!y) return;
  x->OAEPparams = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->OAEPparams->g;
    x->OAEPparams = y;
    y = nxt;
  }
}

/* FUNC(zxmd_xenc_EncryptionMethod_PUT_OAEPparams) */

void zxmd_xenc_EncryptionMethod_PUT_OAEPparams(struct zxmd_xenc_EncryptionMethod_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->OAEPparams;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->OAEPparams = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zxmd_xenc_EncryptionMethod_ADD_OAEPparams) */

void zxmd_xenc_EncryptionMethod_ADD_OAEPparams(struct zxmd_xenc_EncryptionMethod_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->OAEPparams->g;
    x->OAEPparams = z;
    return;
  case -1:
    y = x->OAEPparams;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->OAEPparams; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zxmd_xenc_EncryptionMethod_DEL_OAEPparams) */

void zxmd_xenc_EncryptionMethod_DEL_OAEPparams(struct zxmd_xenc_EncryptionMethod_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->OAEPparams = (struct zx_elem_s*)x->OAEPparams->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->OAEPparams;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->OAEPparams; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

/* FUNC(zxmd_xenc_EncryptionMethod_GET_Algorithm) */
struct zx_str_s* zxmd_xenc_EncryptionMethod_GET_Algorithm(struct zxmd_xenc_EncryptionMethod_s* x) { return x->Algorithm; }
/* FUNC(zxmd_xenc_EncryptionMethod_PUT_Algorithm) */
void zxmd_xenc_EncryptionMethod_PUT_Algorithm(struct zxmd_xenc_EncryptionMethod_s* x, struct zx_str_s* y) { x->Algorithm = y; }







/* FUNC(zxmd_xenc_EncryptionProperties_NUM_EncryptionProperty) */

int zxmd_xenc_EncryptionProperties_NUM_EncryptionProperty(struct zxmd_xenc_EncryptionProperties_s* x)
{
  struct zxmd_xenc_EncryptionProperty_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->EncryptionProperty; y; ++n, y = (struct zxmd_xenc_EncryptionProperty_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zxmd_xenc_EncryptionProperties_GET_EncryptionProperty) */

struct zxmd_xenc_EncryptionProperty_s* zxmd_xenc_EncryptionProperties_GET_EncryptionProperty(struct zxmd_xenc_EncryptionProperties_s* x, int n)
{
  struct zxmd_xenc_EncryptionProperty_s* y;
  if (!x) return 0;
  for (y = x->EncryptionProperty; n>=0 && y; --n, y = (struct zxmd_xenc_EncryptionProperty_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zxmd_xenc_EncryptionProperties_POP_EncryptionProperty) */

struct zxmd_xenc_EncryptionProperty_s* zxmd_xenc_EncryptionProperties_POP_EncryptionProperty(struct zxmd_xenc_EncryptionProperties_s* x)
{
  struct zxmd_xenc_EncryptionProperty_s* y;
  if (!x) return 0;
  y = x->EncryptionProperty;
  if (y)
    x->EncryptionProperty = (struct zxmd_xenc_EncryptionProperty_s*)y->gg.g.n;
  return y;
}

/* FUNC(zxmd_xenc_EncryptionProperties_PUSH_EncryptionProperty) */

void zxmd_xenc_EncryptionProperties_PUSH_EncryptionProperty(struct zxmd_xenc_EncryptionProperties_s* x, struct zxmd_xenc_EncryptionProperty_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->EncryptionProperty->gg.g;
  x->EncryptionProperty = z;
}

/* FUNC(zxmd_xenc_EncryptionProperties_REV_EncryptionProperty) */

void zxmd_xenc_EncryptionProperties_REV_EncryptionProperty(struct zxmd_xenc_EncryptionProperties_s* x)
{
  struct zxmd_xenc_EncryptionProperty_s* nxt;
  struct zxmd_xenc_EncryptionProperty_s* y;
  if (!x) return;
  y = x->EncryptionProperty;
  if (!y) return;
  x->EncryptionProperty = 0;
  while (y) {
    nxt = (struct zxmd_xenc_EncryptionProperty_s*)y->gg.g.n;
    y->gg.g.n = &x->EncryptionProperty->gg.g;
    x->EncryptionProperty = y;
    y = nxt;
  }
}

/* FUNC(zxmd_xenc_EncryptionProperties_PUT_EncryptionProperty) */

void zxmd_xenc_EncryptionProperties_PUT_EncryptionProperty(struct zxmd_xenc_EncryptionProperties_s* x, int n, struct zxmd_xenc_EncryptionProperty_s* z)
{
  struct zxmd_xenc_EncryptionProperty_s* y;
  if (!x || !z) return;
  y = x->EncryptionProperty;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->EncryptionProperty = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zxmd_xenc_EncryptionProperty_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zxmd_xenc_EncryptionProperties_ADD_EncryptionProperty) */

void zxmd_xenc_EncryptionProperties_ADD_EncryptionProperty(struct zxmd_xenc_EncryptionProperties_s* x, int n, struct zxmd_xenc_EncryptionProperty_s* z)
{
  struct zxmd_xenc_EncryptionProperty_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->EncryptionProperty->gg.g;
    x->EncryptionProperty = z;
    return;
  case -1:
    y = x->EncryptionProperty;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zxmd_xenc_EncryptionProperty_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->EncryptionProperty; n > 1 && y; --n, y = (struct zxmd_xenc_EncryptionProperty_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zxmd_xenc_EncryptionProperties_DEL_EncryptionProperty) */

void zxmd_xenc_EncryptionProperties_DEL_EncryptionProperty(struct zxmd_xenc_EncryptionProperties_s* x, int n)
{
  struct zxmd_xenc_EncryptionProperty_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->EncryptionProperty = (struct zxmd_xenc_EncryptionProperty_s*)x->EncryptionProperty->gg.g.n;
    return;
  case -1:
    y = (struct zxmd_xenc_EncryptionProperty_s*)x->EncryptionProperty;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zxmd_xenc_EncryptionProperty_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->EncryptionProperty; n > 1 && y->gg.g.n; --n, y = (struct zxmd_xenc_EncryptionProperty_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

/* FUNC(zxmd_xenc_EncryptionProperties_GET_Id) */
struct zx_str_s* zxmd_xenc_EncryptionProperties_GET_Id(struct zxmd_xenc_EncryptionProperties_s* x) { return x->Id; }
/* FUNC(zxmd_xenc_EncryptionProperties_PUT_Id) */
void zxmd_xenc_EncryptionProperties_PUT_Id(struct zxmd_xenc_EncryptionProperties_s* x, struct zx_str_s* y) { x->Id = y; }





/* FUNC(zxmd_xenc_EncryptionProperty_GET_Target) */
struct zx_str_s* zxmd_xenc_EncryptionProperty_GET_Target(struct zxmd_xenc_EncryptionProperty_s* x) { return x->Target; }
/* FUNC(zxmd_xenc_EncryptionProperty_PUT_Target) */
void zxmd_xenc_EncryptionProperty_PUT_Target(struct zxmd_xenc_EncryptionProperty_s* x, struct zx_str_s* y) { x->Target = y; }
/* FUNC(zxmd_xenc_EncryptionProperty_GET_Id) */
struct zx_str_s* zxmd_xenc_EncryptionProperty_GET_Id(struct zxmd_xenc_EncryptionProperty_s* x) { return x->Id; }
/* FUNC(zxmd_xenc_EncryptionProperty_PUT_Id) */
void zxmd_xenc_EncryptionProperty_PUT_Id(struct zxmd_xenc_EncryptionProperty_s* x, struct zx_str_s* y) { x->Id = y; }





/* FUNC(zxmd_xenc_KeyReference_GET_URI) */
struct zx_str_s* zxmd_xenc_KeyReference_GET_URI(struct zxmd_xenc_KeyReference_s* x) { return x->URI; }
/* FUNC(zxmd_xenc_KeyReference_PUT_URI) */
void zxmd_xenc_KeyReference_PUT_URI(struct zxmd_xenc_KeyReference_s* x, struct zx_str_s* y) { x->URI = y; }







/* FUNC(zxmd_xenc_OriginatorKeyInfo_NUM_KeyName) */

int zxmd_xenc_OriginatorKeyInfo_NUM_KeyName(struct zxmd_xenc_OriginatorKeyInfo_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->KeyName; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zxmd_xenc_OriginatorKeyInfo_GET_KeyName) */

struct zx_elem_s* zxmd_xenc_OriginatorKeyInfo_GET_KeyName(struct zxmd_xenc_OriginatorKeyInfo_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->KeyName; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zxmd_xenc_OriginatorKeyInfo_POP_KeyName) */

struct zx_elem_s* zxmd_xenc_OriginatorKeyInfo_POP_KeyName(struct zxmd_xenc_OriginatorKeyInfo_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->KeyName;
  if (y)
    x->KeyName = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zxmd_xenc_OriginatorKeyInfo_PUSH_KeyName) */

void zxmd_xenc_OriginatorKeyInfo_PUSH_KeyName(struct zxmd_xenc_OriginatorKeyInfo_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->KeyName->g;
  x->KeyName = z;
}

/* FUNC(zxmd_xenc_OriginatorKeyInfo_REV_KeyName) */

void zxmd_xenc_OriginatorKeyInfo_REV_KeyName(struct zxmd_xenc_OriginatorKeyInfo_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->KeyName;
  if (!y) return;
  x->KeyName = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->KeyName->g;
    x->KeyName = y;
    y = nxt;
  }
}

/* FUNC(zxmd_xenc_OriginatorKeyInfo_PUT_KeyName) */

void zxmd_xenc_OriginatorKeyInfo_PUT_KeyName(struct zxmd_xenc_OriginatorKeyInfo_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->KeyName;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->KeyName = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zxmd_xenc_OriginatorKeyInfo_ADD_KeyName) */

void zxmd_xenc_OriginatorKeyInfo_ADD_KeyName(struct zxmd_xenc_OriginatorKeyInfo_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->KeyName->g;
    x->KeyName = z;
    return;
  case -1:
    y = x->KeyName;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->KeyName; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zxmd_xenc_OriginatorKeyInfo_DEL_KeyName) */

void zxmd_xenc_OriginatorKeyInfo_DEL_KeyName(struct zxmd_xenc_OriginatorKeyInfo_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->KeyName = (struct zx_elem_s*)x->KeyName->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->KeyName;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->KeyName; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}



/* FUNC(zxmd_xenc_OriginatorKeyInfo_NUM_KeyValue) */

int zxmd_xenc_OriginatorKeyInfo_NUM_KeyValue(struct zxmd_xenc_OriginatorKeyInfo_s* x)
{
  struct zxmd_ds_KeyValue_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->KeyValue; y; ++n, y = (struct zxmd_ds_KeyValue_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zxmd_xenc_OriginatorKeyInfo_GET_KeyValue) */

struct zxmd_ds_KeyValue_s* zxmd_xenc_OriginatorKeyInfo_GET_KeyValue(struct zxmd_xenc_OriginatorKeyInfo_s* x, int n)
{
  struct zxmd_ds_KeyValue_s* y;
  if (!x) return 0;
  for (y = x->KeyValue; n>=0 && y; --n, y = (struct zxmd_ds_KeyValue_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zxmd_xenc_OriginatorKeyInfo_POP_KeyValue) */

struct zxmd_ds_KeyValue_s* zxmd_xenc_OriginatorKeyInfo_POP_KeyValue(struct zxmd_xenc_OriginatorKeyInfo_s* x)
{
  struct zxmd_ds_KeyValue_s* y;
  if (!x) return 0;
  y = x->KeyValue;
  if (y)
    x->KeyValue = (struct zxmd_ds_KeyValue_s*)y->gg.g.n;
  return y;
}

/* FUNC(zxmd_xenc_OriginatorKeyInfo_PUSH_KeyValue) */

void zxmd_xenc_OriginatorKeyInfo_PUSH_KeyValue(struct zxmd_xenc_OriginatorKeyInfo_s* x, struct zxmd_ds_KeyValue_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->KeyValue->gg.g;
  x->KeyValue = z;
}

/* FUNC(zxmd_xenc_OriginatorKeyInfo_REV_KeyValue) */

void zxmd_xenc_OriginatorKeyInfo_REV_KeyValue(struct zxmd_xenc_OriginatorKeyInfo_s* x)
{
  struct zxmd_ds_KeyValue_s* nxt;
  struct zxmd_ds_KeyValue_s* y;
  if (!x) return;
  y = x->KeyValue;
  if (!y) return;
  x->KeyValue = 0;
  while (y) {
    nxt = (struct zxmd_ds_KeyValue_s*)y->gg.g.n;
    y->gg.g.n = &x->KeyValue->gg.g;
    x->KeyValue = y;
    y = nxt;
  }
}

/* FUNC(zxmd_xenc_OriginatorKeyInfo_PUT_KeyValue) */

void zxmd_xenc_OriginatorKeyInfo_PUT_KeyValue(struct zxmd_xenc_OriginatorKeyInfo_s* x, int n, struct zxmd_ds_KeyValue_s* z)
{
  struct zxmd_ds_KeyValue_s* y;
  if (!x || !z) return;
  y = x->KeyValue;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->KeyValue = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zxmd_ds_KeyValue_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zxmd_xenc_OriginatorKeyInfo_ADD_KeyValue) */

void zxmd_xenc_OriginatorKeyInfo_ADD_KeyValue(struct zxmd_xenc_OriginatorKeyInfo_s* x, int n, struct zxmd_ds_KeyValue_s* z)
{
  struct zxmd_ds_KeyValue_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->KeyValue->gg.g;
    x->KeyValue = z;
    return;
  case -1:
    y = x->KeyValue;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zxmd_ds_KeyValue_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->KeyValue; n > 1 && y; --n, y = (struct zxmd_ds_KeyValue_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zxmd_xenc_OriginatorKeyInfo_DEL_KeyValue) */

void zxmd_xenc_OriginatorKeyInfo_DEL_KeyValue(struct zxmd_xenc_OriginatorKeyInfo_s* x, int n)
{
  struct zxmd_ds_KeyValue_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->KeyValue = (struct zxmd_ds_KeyValue_s*)x->KeyValue->gg.g.n;
    return;
  case -1:
    y = (struct zxmd_ds_KeyValue_s*)x->KeyValue;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zxmd_ds_KeyValue_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->KeyValue; n > 1 && y->gg.g.n; --n, y = (struct zxmd_ds_KeyValue_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zxmd_xenc_OriginatorKeyInfo_NUM_RetrievalMethod) */

int zxmd_xenc_OriginatorKeyInfo_NUM_RetrievalMethod(struct zxmd_xenc_OriginatorKeyInfo_s* x)
{
  struct zxmd_ds_RetrievalMethod_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->RetrievalMethod; y; ++n, y = (struct zxmd_ds_RetrievalMethod_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zxmd_xenc_OriginatorKeyInfo_GET_RetrievalMethod) */

struct zxmd_ds_RetrievalMethod_s* zxmd_xenc_OriginatorKeyInfo_GET_RetrievalMethod(struct zxmd_xenc_OriginatorKeyInfo_s* x, int n)
{
  struct zxmd_ds_RetrievalMethod_s* y;
  if (!x) return 0;
  for (y = x->RetrievalMethod; n>=0 && y; --n, y = (struct zxmd_ds_RetrievalMethod_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zxmd_xenc_OriginatorKeyInfo_POP_RetrievalMethod) */

struct zxmd_ds_RetrievalMethod_s* zxmd_xenc_OriginatorKeyInfo_POP_RetrievalMethod(struct zxmd_xenc_OriginatorKeyInfo_s* x)
{
  struct zxmd_ds_RetrievalMethod_s* y;
  if (!x) return 0;
  y = x->RetrievalMethod;
  if (y)
    x->RetrievalMethod = (struct zxmd_ds_RetrievalMethod_s*)y->gg.g.n;
  return y;
}

/* FUNC(zxmd_xenc_OriginatorKeyInfo_PUSH_RetrievalMethod) */

void zxmd_xenc_OriginatorKeyInfo_PUSH_RetrievalMethod(struct zxmd_xenc_OriginatorKeyInfo_s* x, struct zxmd_ds_RetrievalMethod_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->RetrievalMethod->gg.g;
  x->RetrievalMethod = z;
}

/* FUNC(zxmd_xenc_OriginatorKeyInfo_REV_RetrievalMethod) */

void zxmd_xenc_OriginatorKeyInfo_REV_RetrievalMethod(struct zxmd_xenc_OriginatorKeyInfo_s* x)
{
  struct zxmd_ds_RetrievalMethod_s* nxt;
  struct zxmd_ds_RetrievalMethod_s* y;
  if (!x) return;
  y = x->RetrievalMethod;
  if (!y) return;
  x->RetrievalMethod = 0;
  while (y) {
    nxt = (struct zxmd_ds_RetrievalMethod_s*)y->gg.g.n;
    y->gg.g.n = &x->RetrievalMethod->gg.g;
    x->RetrievalMethod = y;
    y = nxt;
  }
}

/* FUNC(zxmd_xenc_OriginatorKeyInfo_PUT_RetrievalMethod) */

void zxmd_xenc_OriginatorKeyInfo_PUT_RetrievalMethod(struct zxmd_xenc_OriginatorKeyInfo_s* x, int n, struct zxmd_ds_RetrievalMethod_s* z)
{
  struct zxmd_ds_RetrievalMethod_s* y;
  if (!x || !z) return;
  y = x->RetrievalMethod;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->RetrievalMethod = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zxmd_ds_RetrievalMethod_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zxmd_xenc_OriginatorKeyInfo_ADD_RetrievalMethod) */

void zxmd_xenc_OriginatorKeyInfo_ADD_RetrievalMethod(struct zxmd_xenc_OriginatorKeyInfo_s* x, int n, struct zxmd_ds_RetrievalMethod_s* z)
{
  struct zxmd_ds_RetrievalMethod_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->RetrievalMethod->gg.g;
    x->RetrievalMethod = z;
    return;
  case -1:
    y = x->RetrievalMethod;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zxmd_ds_RetrievalMethod_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->RetrievalMethod; n > 1 && y; --n, y = (struct zxmd_ds_RetrievalMethod_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zxmd_xenc_OriginatorKeyInfo_DEL_RetrievalMethod) */

void zxmd_xenc_OriginatorKeyInfo_DEL_RetrievalMethod(struct zxmd_xenc_OriginatorKeyInfo_s* x, int n)
{
  struct zxmd_ds_RetrievalMethod_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->RetrievalMethod = (struct zxmd_ds_RetrievalMethod_s*)x->RetrievalMethod->gg.g.n;
    return;
  case -1:
    y = (struct zxmd_ds_RetrievalMethod_s*)x->RetrievalMethod;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zxmd_ds_RetrievalMethod_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->RetrievalMethod; n > 1 && y->gg.g.n; --n, y = (struct zxmd_ds_RetrievalMethod_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zxmd_xenc_OriginatorKeyInfo_NUM_X509Data) */

int zxmd_xenc_OriginatorKeyInfo_NUM_X509Data(struct zxmd_xenc_OriginatorKeyInfo_s* x)
{
  struct zxmd_ds_X509Data_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->X509Data; y; ++n, y = (struct zxmd_ds_X509Data_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zxmd_xenc_OriginatorKeyInfo_GET_X509Data) */

struct zxmd_ds_X509Data_s* zxmd_xenc_OriginatorKeyInfo_GET_X509Data(struct zxmd_xenc_OriginatorKeyInfo_s* x, int n)
{
  struct zxmd_ds_X509Data_s* y;
  if (!x) return 0;
  for (y = x->X509Data; n>=0 && y; --n, y = (struct zxmd_ds_X509Data_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zxmd_xenc_OriginatorKeyInfo_POP_X509Data) */

struct zxmd_ds_X509Data_s* zxmd_xenc_OriginatorKeyInfo_POP_X509Data(struct zxmd_xenc_OriginatorKeyInfo_s* x)
{
  struct zxmd_ds_X509Data_s* y;
  if (!x) return 0;
  y = x->X509Data;
  if (y)
    x->X509Data = (struct zxmd_ds_X509Data_s*)y->gg.g.n;
  return y;
}

/* FUNC(zxmd_xenc_OriginatorKeyInfo_PUSH_X509Data) */

void zxmd_xenc_OriginatorKeyInfo_PUSH_X509Data(struct zxmd_xenc_OriginatorKeyInfo_s* x, struct zxmd_ds_X509Data_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->X509Data->gg.g;
  x->X509Data = z;
}

/* FUNC(zxmd_xenc_OriginatorKeyInfo_REV_X509Data) */

void zxmd_xenc_OriginatorKeyInfo_REV_X509Data(struct zxmd_xenc_OriginatorKeyInfo_s* x)
{
  struct zxmd_ds_X509Data_s* nxt;
  struct zxmd_ds_X509Data_s* y;
  if (!x) return;
  y = x->X509Data;
  if (!y) return;
  x->X509Data = 0;
  while (y) {
    nxt = (struct zxmd_ds_X509Data_s*)y->gg.g.n;
    y->gg.g.n = &x->X509Data->gg.g;
    x->X509Data = y;
    y = nxt;
  }
}

/* FUNC(zxmd_xenc_OriginatorKeyInfo_PUT_X509Data) */

void zxmd_xenc_OriginatorKeyInfo_PUT_X509Data(struct zxmd_xenc_OriginatorKeyInfo_s* x, int n, struct zxmd_ds_X509Data_s* z)
{
  struct zxmd_ds_X509Data_s* y;
  if (!x || !z) return;
  y = x->X509Data;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->X509Data = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zxmd_ds_X509Data_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zxmd_xenc_OriginatorKeyInfo_ADD_X509Data) */

void zxmd_xenc_OriginatorKeyInfo_ADD_X509Data(struct zxmd_xenc_OriginatorKeyInfo_s* x, int n, struct zxmd_ds_X509Data_s* z)
{
  struct zxmd_ds_X509Data_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->X509Data->gg.g;
    x->X509Data = z;
    return;
  case -1:
    y = x->X509Data;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zxmd_ds_X509Data_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->X509Data; n > 1 && y; --n, y = (struct zxmd_ds_X509Data_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zxmd_xenc_OriginatorKeyInfo_DEL_X509Data) */

void zxmd_xenc_OriginatorKeyInfo_DEL_X509Data(struct zxmd_xenc_OriginatorKeyInfo_s* x, int n)
{
  struct zxmd_ds_X509Data_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->X509Data = (struct zxmd_ds_X509Data_s*)x->X509Data->gg.g.n;
    return;
  case -1:
    y = (struct zxmd_ds_X509Data_s*)x->X509Data;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zxmd_ds_X509Data_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->X509Data; n > 1 && y->gg.g.n; --n, y = (struct zxmd_ds_X509Data_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zxmd_xenc_OriginatorKeyInfo_NUM_PGPData) */

int zxmd_xenc_OriginatorKeyInfo_NUM_PGPData(struct zxmd_xenc_OriginatorKeyInfo_s* x)
{
  struct zxmd_ds_PGPData_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->PGPData; y; ++n, y = (struct zxmd_ds_PGPData_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zxmd_xenc_OriginatorKeyInfo_GET_PGPData) */

struct zxmd_ds_PGPData_s* zxmd_xenc_OriginatorKeyInfo_GET_PGPData(struct zxmd_xenc_OriginatorKeyInfo_s* x, int n)
{
  struct zxmd_ds_PGPData_s* y;
  if (!x) return 0;
  for (y = x->PGPData; n>=0 && y; --n, y = (struct zxmd_ds_PGPData_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zxmd_xenc_OriginatorKeyInfo_POP_PGPData) */

struct zxmd_ds_PGPData_s* zxmd_xenc_OriginatorKeyInfo_POP_PGPData(struct zxmd_xenc_OriginatorKeyInfo_s* x)
{
  struct zxmd_ds_PGPData_s* y;
  if (!x) return 0;
  y = x->PGPData;
  if (y)
    x->PGPData = (struct zxmd_ds_PGPData_s*)y->gg.g.n;
  return y;
}

/* FUNC(zxmd_xenc_OriginatorKeyInfo_PUSH_PGPData) */

void zxmd_xenc_OriginatorKeyInfo_PUSH_PGPData(struct zxmd_xenc_OriginatorKeyInfo_s* x, struct zxmd_ds_PGPData_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->PGPData->gg.g;
  x->PGPData = z;
}

/* FUNC(zxmd_xenc_OriginatorKeyInfo_REV_PGPData) */

void zxmd_xenc_OriginatorKeyInfo_REV_PGPData(struct zxmd_xenc_OriginatorKeyInfo_s* x)
{
  struct zxmd_ds_PGPData_s* nxt;
  struct zxmd_ds_PGPData_s* y;
  if (!x) return;
  y = x->PGPData;
  if (!y) return;
  x->PGPData = 0;
  while (y) {
    nxt = (struct zxmd_ds_PGPData_s*)y->gg.g.n;
    y->gg.g.n = &x->PGPData->gg.g;
    x->PGPData = y;
    y = nxt;
  }
}

/* FUNC(zxmd_xenc_OriginatorKeyInfo_PUT_PGPData) */

void zxmd_xenc_OriginatorKeyInfo_PUT_PGPData(struct zxmd_xenc_OriginatorKeyInfo_s* x, int n, struct zxmd_ds_PGPData_s* z)
{
  struct zxmd_ds_PGPData_s* y;
  if (!x || !z) return;
  y = x->PGPData;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->PGPData = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zxmd_ds_PGPData_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zxmd_xenc_OriginatorKeyInfo_ADD_PGPData) */

void zxmd_xenc_OriginatorKeyInfo_ADD_PGPData(struct zxmd_xenc_OriginatorKeyInfo_s* x, int n, struct zxmd_ds_PGPData_s* z)
{
  struct zxmd_ds_PGPData_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->PGPData->gg.g;
    x->PGPData = z;
    return;
  case -1:
    y = x->PGPData;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zxmd_ds_PGPData_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->PGPData; n > 1 && y; --n, y = (struct zxmd_ds_PGPData_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zxmd_xenc_OriginatorKeyInfo_DEL_PGPData) */

void zxmd_xenc_OriginatorKeyInfo_DEL_PGPData(struct zxmd_xenc_OriginatorKeyInfo_s* x, int n)
{
  struct zxmd_ds_PGPData_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->PGPData = (struct zxmd_ds_PGPData_s*)x->PGPData->gg.g.n;
    return;
  case -1:
    y = (struct zxmd_ds_PGPData_s*)x->PGPData;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zxmd_ds_PGPData_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->PGPData; n > 1 && y->gg.g.n; --n, y = (struct zxmd_ds_PGPData_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zxmd_xenc_OriginatorKeyInfo_NUM_SPKIData) */

int zxmd_xenc_OriginatorKeyInfo_NUM_SPKIData(struct zxmd_xenc_OriginatorKeyInfo_s* x)
{
  struct zxmd_ds_SPKIData_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->SPKIData; y; ++n, y = (struct zxmd_ds_SPKIData_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zxmd_xenc_OriginatorKeyInfo_GET_SPKIData) */

struct zxmd_ds_SPKIData_s* zxmd_xenc_OriginatorKeyInfo_GET_SPKIData(struct zxmd_xenc_OriginatorKeyInfo_s* x, int n)
{
  struct zxmd_ds_SPKIData_s* y;
  if (!x) return 0;
  for (y = x->SPKIData; n>=0 && y; --n, y = (struct zxmd_ds_SPKIData_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zxmd_xenc_OriginatorKeyInfo_POP_SPKIData) */

struct zxmd_ds_SPKIData_s* zxmd_xenc_OriginatorKeyInfo_POP_SPKIData(struct zxmd_xenc_OriginatorKeyInfo_s* x)
{
  struct zxmd_ds_SPKIData_s* y;
  if (!x) return 0;
  y = x->SPKIData;
  if (y)
    x->SPKIData = (struct zxmd_ds_SPKIData_s*)y->gg.g.n;
  return y;
}

/* FUNC(zxmd_xenc_OriginatorKeyInfo_PUSH_SPKIData) */

void zxmd_xenc_OriginatorKeyInfo_PUSH_SPKIData(struct zxmd_xenc_OriginatorKeyInfo_s* x, struct zxmd_ds_SPKIData_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->SPKIData->gg.g;
  x->SPKIData = z;
}

/* FUNC(zxmd_xenc_OriginatorKeyInfo_REV_SPKIData) */

void zxmd_xenc_OriginatorKeyInfo_REV_SPKIData(struct zxmd_xenc_OriginatorKeyInfo_s* x)
{
  struct zxmd_ds_SPKIData_s* nxt;
  struct zxmd_ds_SPKIData_s* y;
  if (!x) return;
  y = x->SPKIData;
  if (!y) return;
  x->SPKIData = 0;
  while (y) {
    nxt = (struct zxmd_ds_SPKIData_s*)y->gg.g.n;
    y->gg.g.n = &x->SPKIData->gg.g;
    x->SPKIData = y;
    y = nxt;
  }
}

/* FUNC(zxmd_xenc_OriginatorKeyInfo_PUT_SPKIData) */

void zxmd_xenc_OriginatorKeyInfo_PUT_SPKIData(struct zxmd_xenc_OriginatorKeyInfo_s* x, int n, struct zxmd_ds_SPKIData_s* z)
{
  struct zxmd_ds_SPKIData_s* y;
  if (!x || !z) return;
  y = x->SPKIData;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->SPKIData = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zxmd_ds_SPKIData_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zxmd_xenc_OriginatorKeyInfo_ADD_SPKIData) */

void zxmd_xenc_OriginatorKeyInfo_ADD_SPKIData(struct zxmd_xenc_OriginatorKeyInfo_s* x, int n, struct zxmd_ds_SPKIData_s* z)
{
  struct zxmd_ds_SPKIData_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->SPKIData->gg.g;
    x->SPKIData = z;
    return;
  case -1:
    y = x->SPKIData;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zxmd_ds_SPKIData_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->SPKIData; n > 1 && y; --n, y = (struct zxmd_ds_SPKIData_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zxmd_xenc_OriginatorKeyInfo_DEL_SPKIData) */

void zxmd_xenc_OriginatorKeyInfo_DEL_SPKIData(struct zxmd_xenc_OriginatorKeyInfo_s* x, int n)
{
  struct zxmd_ds_SPKIData_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->SPKIData = (struct zxmd_ds_SPKIData_s*)x->SPKIData->gg.g.n;
    return;
  case -1:
    y = (struct zxmd_ds_SPKIData_s*)x->SPKIData;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zxmd_ds_SPKIData_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->SPKIData; n > 1 && y->gg.g.n; --n, y = (struct zxmd_ds_SPKIData_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zxmd_xenc_OriginatorKeyInfo_NUM_MgmtData) */

int zxmd_xenc_OriginatorKeyInfo_NUM_MgmtData(struct zxmd_xenc_OriginatorKeyInfo_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->MgmtData; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zxmd_xenc_OriginatorKeyInfo_GET_MgmtData) */

struct zx_elem_s* zxmd_xenc_OriginatorKeyInfo_GET_MgmtData(struct zxmd_xenc_OriginatorKeyInfo_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->MgmtData; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zxmd_xenc_OriginatorKeyInfo_POP_MgmtData) */

struct zx_elem_s* zxmd_xenc_OriginatorKeyInfo_POP_MgmtData(struct zxmd_xenc_OriginatorKeyInfo_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->MgmtData;
  if (y)
    x->MgmtData = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zxmd_xenc_OriginatorKeyInfo_PUSH_MgmtData) */

void zxmd_xenc_OriginatorKeyInfo_PUSH_MgmtData(struct zxmd_xenc_OriginatorKeyInfo_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->MgmtData->g;
  x->MgmtData = z;
}

/* FUNC(zxmd_xenc_OriginatorKeyInfo_REV_MgmtData) */

void zxmd_xenc_OriginatorKeyInfo_REV_MgmtData(struct zxmd_xenc_OriginatorKeyInfo_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->MgmtData;
  if (!y) return;
  x->MgmtData = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->MgmtData->g;
    x->MgmtData = y;
    y = nxt;
  }
}

/* FUNC(zxmd_xenc_OriginatorKeyInfo_PUT_MgmtData) */

void zxmd_xenc_OriginatorKeyInfo_PUT_MgmtData(struct zxmd_xenc_OriginatorKeyInfo_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->MgmtData;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->MgmtData = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zxmd_xenc_OriginatorKeyInfo_ADD_MgmtData) */

void zxmd_xenc_OriginatorKeyInfo_ADD_MgmtData(struct zxmd_xenc_OriginatorKeyInfo_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->MgmtData->g;
    x->MgmtData = z;
    return;
  case -1:
    y = x->MgmtData;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->MgmtData; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zxmd_xenc_OriginatorKeyInfo_DEL_MgmtData) */

void zxmd_xenc_OriginatorKeyInfo_DEL_MgmtData(struct zxmd_xenc_OriginatorKeyInfo_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->MgmtData = (struct zx_elem_s*)x->MgmtData->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->MgmtData;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->MgmtData; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

/* FUNC(zxmd_xenc_OriginatorKeyInfo_GET_Id) */
struct zx_str_s* zxmd_xenc_OriginatorKeyInfo_GET_Id(struct zxmd_xenc_OriginatorKeyInfo_s* x) { return x->Id; }
/* FUNC(zxmd_xenc_OriginatorKeyInfo_PUT_Id) */
void zxmd_xenc_OriginatorKeyInfo_PUT_Id(struct zxmd_xenc_OriginatorKeyInfo_s* x, struct zx_str_s* y) { x->Id = y; }







/* FUNC(zxmd_xenc_RecipientKeyInfo_NUM_KeyName) */

int zxmd_xenc_RecipientKeyInfo_NUM_KeyName(struct zxmd_xenc_RecipientKeyInfo_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->KeyName; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zxmd_xenc_RecipientKeyInfo_GET_KeyName) */

struct zx_elem_s* zxmd_xenc_RecipientKeyInfo_GET_KeyName(struct zxmd_xenc_RecipientKeyInfo_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->KeyName; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zxmd_xenc_RecipientKeyInfo_POP_KeyName) */

struct zx_elem_s* zxmd_xenc_RecipientKeyInfo_POP_KeyName(struct zxmd_xenc_RecipientKeyInfo_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->KeyName;
  if (y)
    x->KeyName = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zxmd_xenc_RecipientKeyInfo_PUSH_KeyName) */

void zxmd_xenc_RecipientKeyInfo_PUSH_KeyName(struct zxmd_xenc_RecipientKeyInfo_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->KeyName->g;
  x->KeyName = z;
}

/* FUNC(zxmd_xenc_RecipientKeyInfo_REV_KeyName) */

void zxmd_xenc_RecipientKeyInfo_REV_KeyName(struct zxmd_xenc_RecipientKeyInfo_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->KeyName;
  if (!y) return;
  x->KeyName = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->KeyName->g;
    x->KeyName = y;
    y = nxt;
  }
}

/* FUNC(zxmd_xenc_RecipientKeyInfo_PUT_KeyName) */

void zxmd_xenc_RecipientKeyInfo_PUT_KeyName(struct zxmd_xenc_RecipientKeyInfo_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->KeyName;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->KeyName = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zxmd_xenc_RecipientKeyInfo_ADD_KeyName) */

void zxmd_xenc_RecipientKeyInfo_ADD_KeyName(struct zxmd_xenc_RecipientKeyInfo_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->KeyName->g;
    x->KeyName = z;
    return;
  case -1:
    y = x->KeyName;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->KeyName; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zxmd_xenc_RecipientKeyInfo_DEL_KeyName) */

void zxmd_xenc_RecipientKeyInfo_DEL_KeyName(struct zxmd_xenc_RecipientKeyInfo_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->KeyName = (struct zx_elem_s*)x->KeyName->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->KeyName;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->KeyName; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}



/* FUNC(zxmd_xenc_RecipientKeyInfo_NUM_KeyValue) */

int zxmd_xenc_RecipientKeyInfo_NUM_KeyValue(struct zxmd_xenc_RecipientKeyInfo_s* x)
{
  struct zxmd_ds_KeyValue_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->KeyValue; y; ++n, y = (struct zxmd_ds_KeyValue_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zxmd_xenc_RecipientKeyInfo_GET_KeyValue) */

struct zxmd_ds_KeyValue_s* zxmd_xenc_RecipientKeyInfo_GET_KeyValue(struct zxmd_xenc_RecipientKeyInfo_s* x, int n)
{
  struct zxmd_ds_KeyValue_s* y;
  if (!x) return 0;
  for (y = x->KeyValue; n>=0 && y; --n, y = (struct zxmd_ds_KeyValue_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zxmd_xenc_RecipientKeyInfo_POP_KeyValue) */

struct zxmd_ds_KeyValue_s* zxmd_xenc_RecipientKeyInfo_POP_KeyValue(struct zxmd_xenc_RecipientKeyInfo_s* x)
{
  struct zxmd_ds_KeyValue_s* y;
  if (!x) return 0;
  y = x->KeyValue;
  if (y)
    x->KeyValue = (struct zxmd_ds_KeyValue_s*)y->gg.g.n;
  return y;
}

/* FUNC(zxmd_xenc_RecipientKeyInfo_PUSH_KeyValue) */

void zxmd_xenc_RecipientKeyInfo_PUSH_KeyValue(struct zxmd_xenc_RecipientKeyInfo_s* x, struct zxmd_ds_KeyValue_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->KeyValue->gg.g;
  x->KeyValue = z;
}

/* FUNC(zxmd_xenc_RecipientKeyInfo_REV_KeyValue) */

void zxmd_xenc_RecipientKeyInfo_REV_KeyValue(struct zxmd_xenc_RecipientKeyInfo_s* x)
{
  struct zxmd_ds_KeyValue_s* nxt;
  struct zxmd_ds_KeyValue_s* y;
  if (!x) return;
  y = x->KeyValue;
  if (!y) return;
  x->KeyValue = 0;
  while (y) {
    nxt = (struct zxmd_ds_KeyValue_s*)y->gg.g.n;
    y->gg.g.n = &x->KeyValue->gg.g;
    x->KeyValue = y;
    y = nxt;
  }
}

/* FUNC(zxmd_xenc_RecipientKeyInfo_PUT_KeyValue) */

void zxmd_xenc_RecipientKeyInfo_PUT_KeyValue(struct zxmd_xenc_RecipientKeyInfo_s* x, int n, struct zxmd_ds_KeyValue_s* z)
{
  struct zxmd_ds_KeyValue_s* y;
  if (!x || !z) return;
  y = x->KeyValue;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->KeyValue = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zxmd_ds_KeyValue_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zxmd_xenc_RecipientKeyInfo_ADD_KeyValue) */

void zxmd_xenc_RecipientKeyInfo_ADD_KeyValue(struct zxmd_xenc_RecipientKeyInfo_s* x, int n, struct zxmd_ds_KeyValue_s* z)
{
  struct zxmd_ds_KeyValue_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->KeyValue->gg.g;
    x->KeyValue = z;
    return;
  case -1:
    y = x->KeyValue;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zxmd_ds_KeyValue_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->KeyValue; n > 1 && y; --n, y = (struct zxmd_ds_KeyValue_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zxmd_xenc_RecipientKeyInfo_DEL_KeyValue) */

void zxmd_xenc_RecipientKeyInfo_DEL_KeyValue(struct zxmd_xenc_RecipientKeyInfo_s* x, int n)
{
  struct zxmd_ds_KeyValue_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->KeyValue = (struct zxmd_ds_KeyValue_s*)x->KeyValue->gg.g.n;
    return;
  case -1:
    y = (struct zxmd_ds_KeyValue_s*)x->KeyValue;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zxmd_ds_KeyValue_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->KeyValue; n > 1 && y->gg.g.n; --n, y = (struct zxmd_ds_KeyValue_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zxmd_xenc_RecipientKeyInfo_NUM_RetrievalMethod) */

int zxmd_xenc_RecipientKeyInfo_NUM_RetrievalMethod(struct zxmd_xenc_RecipientKeyInfo_s* x)
{
  struct zxmd_ds_RetrievalMethod_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->RetrievalMethod; y; ++n, y = (struct zxmd_ds_RetrievalMethod_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zxmd_xenc_RecipientKeyInfo_GET_RetrievalMethod) */

struct zxmd_ds_RetrievalMethod_s* zxmd_xenc_RecipientKeyInfo_GET_RetrievalMethod(struct zxmd_xenc_RecipientKeyInfo_s* x, int n)
{
  struct zxmd_ds_RetrievalMethod_s* y;
  if (!x) return 0;
  for (y = x->RetrievalMethod; n>=0 && y; --n, y = (struct zxmd_ds_RetrievalMethod_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zxmd_xenc_RecipientKeyInfo_POP_RetrievalMethod) */

struct zxmd_ds_RetrievalMethod_s* zxmd_xenc_RecipientKeyInfo_POP_RetrievalMethod(struct zxmd_xenc_RecipientKeyInfo_s* x)
{
  struct zxmd_ds_RetrievalMethod_s* y;
  if (!x) return 0;
  y = x->RetrievalMethod;
  if (y)
    x->RetrievalMethod = (struct zxmd_ds_RetrievalMethod_s*)y->gg.g.n;
  return y;
}

/* FUNC(zxmd_xenc_RecipientKeyInfo_PUSH_RetrievalMethod) */

void zxmd_xenc_RecipientKeyInfo_PUSH_RetrievalMethod(struct zxmd_xenc_RecipientKeyInfo_s* x, struct zxmd_ds_RetrievalMethod_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->RetrievalMethod->gg.g;
  x->RetrievalMethod = z;
}

/* FUNC(zxmd_xenc_RecipientKeyInfo_REV_RetrievalMethod) */

void zxmd_xenc_RecipientKeyInfo_REV_RetrievalMethod(struct zxmd_xenc_RecipientKeyInfo_s* x)
{
  struct zxmd_ds_RetrievalMethod_s* nxt;
  struct zxmd_ds_RetrievalMethod_s* y;
  if (!x) return;
  y = x->RetrievalMethod;
  if (!y) return;
  x->RetrievalMethod = 0;
  while (y) {
    nxt = (struct zxmd_ds_RetrievalMethod_s*)y->gg.g.n;
    y->gg.g.n = &x->RetrievalMethod->gg.g;
    x->RetrievalMethod = y;
    y = nxt;
  }
}

/* FUNC(zxmd_xenc_RecipientKeyInfo_PUT_RetrievalMethod) */

void zxmd_xenc_RecipientKeyInfo_PUT_RetrievalMethod(struct zxmd_xenc_RecipientKeyInfo_s* x, int n, struct zxmd_ds_RetrievalMethod_s* z)
{
  struct zxmd_ds_RetrievalMethod_s* y;
  if (!x || !z) return;
  y = x->RetrievalMethod;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->RetrievalMethod = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zxmd_ds_RetrievalMethod_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zxmd_xenc_RecipientKeyInfo_ADD_RetrievalMethod) */

void zxmd_xenc_RecipientKeyInfo_ADD_RetrievalMethod(struct zxmd_xenc_RecipientKeyInfo_s* x, int n, struct zxmd_ds_RetrievalMethod_s* z)
{
  struct zxmd_ds_RetrievalMethod_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->RetrievalMethod->gg.g;
    x->RetrievalMethod = z;
    return;
  case -1:
    y = x->RetrievalMethod;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zxmd_ds_RetrievalMethod_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->RetrievalMethod; n > 1 && y; --n, y = (struct zxmd_ds_RetrievalMethod_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zxmd_xenc_RecipientKeyInfo_DEL_RetrievalMethod) */

void zxmd_xenc_RecipientKeyInfo_DEL_RetrievalMethod(struct zxmd_xenc_RecipientKeyInfo_s* x, int n)
{
  struct zxmd_ds_RetrievalMethod_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->RetrievalMethod = (struct zxmd_ds_RetrievalMethod_s*)x->RetrievalMethod->gg.g.n;
    return;
  case -1:
    y = (struct zxmd_ds_RetrievalMethod_s*)x->RetrievalMethod;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zxmd_ds_RetrievalMethod_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->RetrievalMethod; n > 1 && y->gg.g.n; --n, y = (struct zxmd_ds_RetrievalMethod_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zxmd_xenc_RecipientKeyInfo_NUM_X509Data) */

int zxmd_xenc_RecipientKeyInfo_NUM_X509Data(struct zxmd_xenc_RecipientKeyInfo_s* x)
{
  struct zxmd_ds_X509Data_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->X509Data; y; ++n, y = (struct zxmd_ds_X509Data_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zxmd_xenc_RecipientKeyInfo_GET_X509Data) */

struct zxmd_ds_X509Data_s* zxmd_xenc_RecipientKeyInfo_GET_X509Data(struct zxmd_xenc_RecipientKeyInfo_s* x, int n)
{
  struct zxmd_ds_X509Data_s* y;
  if (!x) return 0;
  for (y = x->X509Data; n>=0 && y; --n, y = (struct zxmd_ds_X509Data_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zxmd_xenc_RecipientKeyInfo_POP_X509Data) */

struct zxmd_ds_X509Data_s* zxmd_xenc_RecipientKeyInfo_POP_X509Data(struct zxmd_xenc_RecipientKeyInfo_s* x)
{
  struct zxmd_ds_X509Data_s* y;
  if (!x) return 0;
  y = x->X509Data;
  if (y)
    x->X509Data = (struct zxmd_ds_X509Data_s*)y->gg.g.n;
  return y;
}

/* FUNC(zxmd_xenc_RecipientKeyInfo_PUSH_X509Data) */

void zxmd_xenc_RecipientKeyInfo_PUSH_X509Data(struct zxmd_xenc_RecipientKeyInfo_s* x, struct zxmd_ds_X509Data_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->X509Data->gg.g;
  x->X509Data = z;
}

/* FUNC(zxmd_xenc_RecipientKeyInfo_REV_X509Data) */

void zxmd_xenc_RecipientKeyInfo_REV_X509Data(struct zxmd_xenc_RecipientKeyInfo_s* x)
{
  struct zxmd_ds_X509Data_s* nxt;
  struct zxmd_ds_X509Data_s* y;
  if (!x) return;
  y = x->X509Data;
  if (!y) return;
  x->X509Data = 0;
  while (y) {
    nxt = (struct zxmd_ds_X509Data_s*)y->gg.g.n;
    y->gg.g.n = &x->X509Data->gg.g;
    x->X509Data = y;
    y = nxt;
  }
}

/* FUNC(zxmd_xenc_RecipientKeyInfo_PUT_X509Data) */

void zxmd_xenc_RecipientKeyInfo_PUT_X509Data(struct zxmd_xenc_RecipientKeyInfo_s* x, int n, struct zxmd_ds_X509Data_s* z)
{
  struct zxmd_ds_X509Data_s* y;
  if (!x || !z) return;
  y = x->X509Data;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->X509Data = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zxmd_ds_X509Data_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zxmd_xenc_RecipientKeyInfo_ADD_X509Data) */

void zxmd_xenc_RecipientKeyInfo_ADD_X509Data(struct zxmd_xenc_RecipientKeyInfo_s* x, int n, struct zxmd_ds_X509Data_s* z)
{
  struct zxmd_ds_X509Data_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->X509Data->gg.g;
    x->X509Data = z;
    return;
  case -1:
    y = x->X509Data;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zxmd_ds_X509Data_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->X509Data; n > 1 && y; --n, y = (struct zxmd_ds_X509Data_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zxmd_xenc_RecipientKeyInfo_DEL_X509Data) */

void zxmd_xenc_RecipientKeyInfo_DEL_X509Data(struct zxmd_xenc_RecipientKeyInfo_s* x, int n)
{
  struct zxmd_ds_X509Data_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->X509Data = (struct zxmd_ds_X509Data_s*)x->X509Data->gg.g.n;
    return;
  case -1:
    y = (struct zxmd_ds_X509Data_s*)x->X509Data;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zxmd_ds_X509Data_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->X509Data; n > 1 && y->gg.g.n; --n, y = (struct zxmd_ds_X509Data_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zxmd_xenc_RecipientKeyInfo_NUM_PGPData) */

int zxmd_xenc_RecipientKeyInfo_NUM_PGPData(struct zxmd_xenc_RecipientKeyInfo_s* x)
{
  struct zxmd_ds_PGPData_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->PGPData; y; ++n, y = (struct zxmd_ds_PGPData_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zxmd_xenc_RecipientKeyInfo_GET_PGPData) */

struct zxmd_ds_PGPData_s* zxmd_xenc_RecipientKeyInfo_GET_PGPData(struct zxmd_xenc_RecipientKeyInfo_s* x, int n)
{
  struct zxmd_ds_PGPData_s* y;
  if (!x) return 0;
  for (y = x->PGPData; n>=0 && y; --n, y = (struct zxmd_ds_PGPData_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zxmd_xenc_RecipientKeyInfo_POP_PGPData) */

struct zxmd_ds_PGPData_s* zxmd_xenc_RecipientKeyInfo_POP_PGPData(struct zxmd_xenc_RecipientKeyInfo_s* x)
{
  struct zxmd_ds_PGPData_s* y;
  if (!x) return 0;
  y = x->PGPData;
  if (y)
    x->PGPData = (struct zxmd_ds_PGPData_s*)y->gg.g.n;
  return y;
}

/* FUNC(zxmd_xenc_RecipientKeyInfo_PUSH_PGPData) */

void zxmd_xenc_RecipientKeyInfo_PUSH_PGPData(struct zxmd_xenc_RecipientKeyInfo_s* x, struct zxmd_ds_PGPData_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->PGPData->gg.g;
  x->PGPData = z;
}

/* FUNC(zxmd_xenc_RecipientKeyInfo_REV_PGPData) */

void zxmd_xenc_RecipientKeyInfo_REV_PGPData(struct zxmd_xenc_RecipientKeyInfo_s* x)
{
  struct zxmd_ds_PGPData_s* nxt;
  struct zxmd_ds_PGPData_s* y;
  if (!x) return;
  y = x->PGPData;
  if (!y) return;
  x->PGPData = 0;
  while (y) {
    nxt = (struct zxmd_ds_PGPData_s*)y->gg.g.n;
    y->gg.g.n = &x->PGPData->gg.g;
    x->PGPData = y;
    y = nxt;
  }
}

/* FUNC(zxmd_xenc_RecipientKeyInfo_PUT_PGPData) */

void zxmd_xenc_RecipientKeyInfo_PUT_PGPData(struct zxmd_xenc_RecipientKeyInfo_s* x, int n, struct zxmd_ds_PGPData_s* z)
{
  struct zxmd_ds_PGPData_s* y;
  if (!x || !z) return;
  y = x->PGPData;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->PGPData = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zxmd_ds_PGPData_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zxmd_xenc_RecipientKeyInfo_ADD_PGPData) */

void zxmd_xenc_RecipientKeyInfo_ADD_PGPData(struct zxmd_xenc_RecipientKeyInfo_s* x, int n, struct zxmd_ds_PGPData_s* z)
{
  struct zxmd_ds_PGPData_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->PGPData->gg.g;
    x->PGPData = z;
    return;
  case -1:
    y = x->PGPData;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zxmd_ds_PGPData_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->PGPData; n > 1 && y; --n, y = (struct zxmd_ds_PGPData_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zxmd_xenc_RecipientKeyInfo_DEL_PGPData) */

void zxmd_xenc_RecipientKeyInfo_DEL_PGPData(struct zxmd_xenc_RecipientKeyInfo_s* x, int n)
{
  struct zxmd_ds_PGPData_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->PGPData = (struct zxmd_ds_PGPData_s*)x->PGPData->gg.g.n;
    return;
  case -1:
    y = (struct zxmd_ds_PGPData_s*)x->PGPData;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zxmd_ds_PGPData_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->PGPData; n > 1 && y->gg.g.n; --n, y = (struct zxmd_ds_PGPData_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zxmd_xenc_RecipientKeyInfo_NUM_SPKIData) */

int zxmd_xenc_RecipientKeyInfo_NUM_SPKIData(struct zxmd_xenc_RecipientKeyInfo_s* x)
{
  struct zxmd_ds_SPKIData_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->SPKIData; y; ++n, y = (struct zxmd_ds_SPKIData_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zxmd_xenc_RecipientKeyInfo_GET_SPKIData) */

struct zxmd_ds_SPKIData_s* zxmd_xenc_RecipientKeyInfo_GET_SPKIData(struct zxmd_xenc_RecipientKeyInfo_s* x, int n)
{
  struct zxmd_ds_SPKIData_s* y;
  if (!x) return 0;
  for (y = x->SPKIData; n>=0 && y; --n, y = (struct zxmd_ds_SPKIData_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zxmd_xenc_RecipientKeyInfo_POP_SPKIData) */

struct zxmd_ds_SPKIData_s* zxmd_xenc_RecipientKeyInfo_POP_SPKIData(struct zxmd_xenc_RecipientKeyInfo_s* x)
{
  struct zxmd_ds_SPKIData_s* y;
  if (!x) return 0;
  y = x->SPKIData;
  if (y)
    x->SPKIData = (struct zxmd_ds_SPKIData_s*)y->gg.g.n;
  return y;
}

/* FUNC(zxmd_xenc_RecipientKeyInfo_PUSH_SPKIData) */

void zxmd_xenc_RecipientKeyInfo_PUSH_SPKIData(struct zxmd_xenc_RecipientKeyInfo_s* x, struct zxmd_ds_SPKIData_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->SPKIData->gg.g;
  x->SPKIData = z;
}

/* FUNC(zxmd_xenc_RecipientKeyInfo_REV_SPKIData) */

void zxmd_xenc_RecipientKeyInfo_REV_SPKIData(struct zxmd_xenc_RecipientKeyInfo_s* x)
{
  struct zxmd_ds_SPKIData_s* nxt;
  struct zxmd_ds_SPKIData_s* y;
  if (!x) return;
  y = x->SPKIData;
  if (!y) return;
  x->SPKIData = 0;
  while (y) {
    nxt = (struct zxmd_ds_SPKIData_s*)y->gg.g.n;
    y->gg.g.n = &x->SPKIData->gg.g;
    x->SPKIData = y;
    y = nxt;
  }
}

/* FUNC(zxmd_xenc_RecipientKeyInfo_PUT_SPKIData) */

void zxmd_xenc_RecipientKeyInfo_PUT_SPKIData(struct zxmd_xenc_RecipientKeyInfo_s* x, int n, struct zxmd_ds_SPKIData_s* z)
{
  struct zxmd_ds_SPKIData_s* y;
  if (!x || !z) return;
  y = x->SPKIData;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->SPKIData = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zxmd_ds_SPKIData_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zxmd_xenc_RecipientKeyInfo_ADD_SPKIData) */

void zxmd_xenc_RecipientKeyInfo_ADD_SPKIData(struct zxmd_xenc_RecipientKeyInfo_s* x, int n, struct zxmd_ds_SPKIData_s* z)
{
  struct zxmd_ds_SPKIData_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->SPKIData->gg.g;
    x->SPKIData = z;
    return;
  case -1:
    y = x->SPKIData;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zxmd_ds_SPKIData_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->SPKIData; n > 1 && y; --n, y = (struct zxmd_ds_SPKIData_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zxmd_xenc_RecipientKeyInfo_DEL_SPKIData) */

void zxmd_xenc_RecipientKeyInfo_DEL_SPKIData(struct zxmd_xenc_RecipientKeyInfo_s* x, int n)
{
  struct zxmd_ds_SPKIData_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->SPKIData = (struct zxmd_ds_SPKIData_s*)x->SPKIData->gg.g.n;
    return;
  case -1:
    y = (struct zxmd_ds_SPKIData_s*)x->SPKIData;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zxmd_ds_SPKIData_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->SPKIData; n > 1 && y->gg.g.n; --n, y = (struct zxmd_ds_SPKIData_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zxmd_xenc_RecipientKeyInfo_NUM_MgmtData) */

int zxmd_xenc_RecipientKeyInfo_NUM_MgmtData(struct zxmd_xenc_RecipientKeyInfo_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->MgmtData; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zxmd_xenc_RecipientKeyInfo_GET_MgmtData) */

struct zx_elem_s* zxmd_xenc_RecipientKeyInfo_GET_MgmtData(struct zxmd_xenc_RecipientKeyInfo_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->MgmtData; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zxmd_xenc_RecipientKeyInfo_POP_MgmtData) */

struct zx_elem_s* zxmd_xenc_RecipientKeyInfo_POP_MgmtData(struct zxmd_xenc_RecipientKeyInfo_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->MgmtData;
  if (y)
    x->MgmtData = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zxmd_xenc_RecipientKeyInfo_PUSH_MgmtData) */

void zxmd_xenc_RecipientKeyInfo_PUSH_MgmtData(struct zxmd_xenc_RecipientKeyInfo_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->MgmtData->g;
  x->MgmtData = z;
}

/* FUNC(zxmd_xenc_RecipientKeyInfo_REV_MgmtData) */

void zxmd_xenc_RecipientKeyInfo_REV_MgmtData(struct zxmd_xenc_RecipientKeyInfo_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->MgmtData;
  if (!y) return;
  x->MgmtData = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->MgmtData->g;
    x->MgmtData = y;
    y = nxt;
  }
}

/* FUNC(zxmd_xenc_RecipientKeyInfo_PUT_MgmtData) */

void zxmd_xenc_RecipientKeyInfo_PUT_MgmtData(struct zxmd_xenc_RecipientKeyInfo_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->MgmtData;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->MgmtData = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zxmd_xenc_RecipientKeyInfo_ADD_MgmtData) */

void zxmd_xenc_RecipientKeyInfo_ADD_MgmtData(struct zxmd_xenc_RecipientKeyInfo_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->MgmtData->g;
    x->MgmtData = z;
    return;
  case -1:
    y = x->MgmtData;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->MgmtData; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zxmd_xenc_RecipientKeyInfo_DEL_MgmtData) */

void zxmd_xenc_RecipientKeyInfo_DEL_MgmtData(struct zxmd_xenc_RecipientKeyInfo_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->MgmtData = (struct zx_elem_s*)x->MgmtData->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->MgmtData;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->MgmtData; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

/* FUNC(zxmd_xenc_RecipientKeyInfo_GET_Id) */
struct zx_str_s* zxmd_xenc_RecipientKeyInfo_GET_Id(struct zxmd_xenc_RecipientKeyInfo_s* x) { return x->Id; }
/* FUNC(zxmd_xenc_RecipientKeyInfo_PUT_Id) */
void zxmd_xenc_RecipientKeyInfo_PUT_Id(struct zxmd_xenc_RecipientKeyInfo_s* x, struct zx_str_s* y) { x->Id = y; }







/* FUNC(zxmd_xenc_ReferenceList_NUM_DataReference) */

int zxmd_xenc_ReferenceList_NUM_DataReference(struct zxmd_xenc_ReferenceList_s* x)
{
  struct zxmd_xenc_DataReference_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->DataReference; y; ++n, y = (struct zxmd_xenc_DataReference_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zxmd_xenc_ReferenceList_GET_DataReference) */

struct zxmd_xenc_DataReference_s* zxmd_xenc_ReferenceList_GET_DataReference(struct zxmd_xenc_ReferenceList_s* x, int n)
{
  struct zxmd_xenc_DataReference_s* y;
  if (!x) return 0;
  for (y = x->DataReference; n>=0 && y; --n, y = (struct zxmd_xenc_DataReference_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zxmd_xenc_ReferenceList_POP_DataReference) */

struct zxmd_xenc_DataReference_s* zxmd_xenc_ReferenceList_POP_DataReference(struct zxmd_xenc_ReferenceList_s* x)
{
  struct zxmd_xenc_DataReference_s* y;
  if (!x) return 0;
  y = x->DataReference;
  if (y)
    x->DataReference = (struct zxmd_xenc_DataReference_s*)y->gg.g.n;
  return y;
}

/* FUNC(zxmd_xenc_ReferenceList_PUSH_DataReference) */

void zxmd_xenc_ReferenceList_PUSH_DataReference(struct zxmd_xenc_ReferenceList_s* x, struct zxmd_xenc_DataReference_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->DataReference->gg.g;
  x->DataReference = z;
}

/* FUNC(zxmd_xenc_ReferenceList_REV_DataReference) */

void zxmd_xenc_ReferenceList_REV_DataReference(struct zxmd_xenc_ReferenceList_s* x)
{
  struct zxmd_xenc_DataReference_s* nxt;
  struct zxmd_xenc_DataReference_s* y;
  if (!x) return;
  y = x->DataReference;
  if (!y) return;
  x->DataReference = 0;
  while (y) {
    nxt = (struct zxmd_xenc_DataReference_s*)y->gg.g.n;
    y->gg.g.n = &x->DataReference->gg.g;
    x->DataReference = y;
    y = nxt;
  }
}

/* FUNC(zxmd_xenc_ReferenceList_PUT_DataReference) */

void zxmd_xenc_ReferenceList_PUT_DataReference(struct zxmd_xenc_ReferenceList_s* x, int n, struct zxmd_xenc_DataReference_s* z)
{
  struct zxmd_xenc_DataReference_s* y;
  if (!x || !z) return;
  y = x->DataReference;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->DataReference = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zxmd_xenc_DataReference_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zxmd_xenc_ReferenceList_ADD_DataReference) */

void zxmd_xenc_ReferenceList_ADD_DataReference(struct zxmd_xenc_ReferenceList_s* x, int n, struct zxmd_xenc_DataReference_s* z)
{
  struct zxmd_xenc_DataReference_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->DataReference->gg.g;
    x->DataReference = z;
    return;
  case -1:
    y = x->DataReference;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zxmd_xenc_DataReference_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->DataReference; n > 1 && y; --n, y = (struct zxmd_xenc_DataReference_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zxmd_xenc_ReferenceList_DEL_DataReference) */

void zxmd_xenc_ReferenceList_DEL_DataReference(struct zxmd_xenc_ReferenceList_s* x, int n)
{
  struct zxmd_xenc_DataReference_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->DataReference = (struct zxmd_xenc_DataReference_s*)x->DataReference->gg.g.n;
    return;
  case -1:
    y = (struct zxmd_xenc_DataReference_s*)x->DataReference;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zxmd_xenc_DataReference_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->DataReference; n > 1 && y->gg.g.n; --n, y = (struct zxmd_xenc_DataReference_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zxmd_xenc_ReferenceList_NUM_KeyReference) */

int zxmd_xenc_ReferenceList_NUM_KeyReference(struct zxmd_xenc_ReferenceList_s* x)
{
  struct zxmd_xenc_KeyReference_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->KeyReference; y; ++n, y = (struct zxmd_xenc_KeyReference_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zxmd_xenc_ReferenceList_GET_KeyReference) */

struct zxmd_xenc_KeyReference_s* zxmd_xenc_ReferenceList_GET_KeyReference(struct zxmd_xenc_ReferenceList_s* x, int n)
{
  struct zxmd_xenc_KeyReference_s* y;
  if (!x) return 0;
  for (y = x->KeyReference; n>=0 && y; --n, y = (struct zxmd_xenc_KeyReference_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zxmd_xenc_ReferenceList_POP_KeyReference) */

struct zxmd_xenc_KeyReference_s* zxmd_xenc_ReferenceList_POP_KeyReference(struct zxmd_xenc_ReferenceList_s* x)
{
  struct zxmd_xenc_KeyReference_s* y;
  if (!x) return 0;
  y = x->KeyReference;
  if (y)
    x->KeyReference = (struct zxmd_xenc_KeyReference_s*)y->gg.g.n;
  return y;
}

/* FUNC(zxmd_xenc_ReferenceList_PUSH_KeyReference) */

void zxmd_xenc_ReferenceList_PUSH_KeyReference(struct zxmd_xenc_ReferenceList_s* x, struct zxmd_xenc_KeyReference_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->KeyReference->gg.g;
  x->KeyReference = z;
}

/* FUNC(zxmd_xenc_ReferenceList_REV_KeyReference) */

void zxmd_xenc_ReferenceList_REV_KeyReference(struct zxmd_xenc_ReferenceList_s* x)
{
  struct zxmd_xenc_KeyReference_s* nxt;
  struct zxmd_xenc_KeyReference_s* y;
  if (!x) return;
  y = x->KeyReference;
  if (!y) return;
  x->KeyReference = 0;
  while (y) {
    nxt = (struct zxmd_xenc_KeyReference_s*)y->gg.g.n;
    y->gg.g.n = &x->KeyReference->gg.g;
    x->KeyReference = y;
    y = nxt;
  }
}

/* FUNC(zxmd_xenc_ReferenceList_PUT_KeyReference) */

void zxmd_xenc_ReferenceList_PUT_KeyReference(struct zxmd_xenc_ReferenceList_s* x, int n, struct zxmd_xenc_KeyReference_s* z)
{
  struct zxmd_xenc_KeyReference_s* y;
  if (!x || !z) return;
  y = x->KeyReference;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->KeyReference = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zxmd_xenc_KeyReference_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zxmd_xenc_ReferenceList_ADD_KeyReference) */

void zxmd_xenc_ReferenceList_ADD_KeyReference(struct zxmd_xenc_ReferenceList_s* x, int n, struct zxmd_xenc_KeyReference_s* z)
{
  struct zxmd_xenc_KeyReference_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->KeyReference->gg.g;
    x->KeyReference = z;
    return;
  case -1:
    y = x->KeyReference;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zxmd_xenc_KeyReference_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->KeyReference; n > 1 && y; --n, y = (struct zxmd_xenc_KeyReference_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zxmd_xenc_ReferenceList_DEL_KeyReference) */

void zxmd_xenc_ReferenceList_DEL_KeyReference(struct zxmd_xenc_ReferenceList_s* x, int n)
{
  struct zxmd_xenc_KeyReference_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->KeyReference = (struct zxmd_xenc_KeyReference_s*)x->KeyReference->gg.g.n;
    return;
  case -1:
    y = (struct zxmd_xenc_KeyReference_s*)x->KeyReference;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zxmd_xenc_KeyReference_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->KeyReference; n > 1 && y->gg.g.n; --n, y = (struct zxmd_xenc_KeyReference_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}








/* FUNC(zxmd_xenc_Transforms_NUM_Transform) */

int zxmd_xenc_Transforms_NUM_Transform(struct zxmd_xenc_Transforms_s* x)
{
  struct zxmd_ds_Transform_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Transform; y; ++n, y = (struct zxmd_ds_Transform_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zxmd_xenc_Transforms_GET_Transform) */

struct zxmd_ds_Transform_s* zxmd_xenc_Transforms_GET_Transform(struct zxmd_xenc_Transforms_s* x, int n)
{
  struct zxmd_ds_Transform_s* y;
  if (!x) return 0;
  for (y = x->Transform; n>=0 && y; --n, y = (struct zxmd_ds_Transform_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zxmd_xenc_Transforms_POP_Transform) */

struct zxmd_ds_Transform_s* zxmd_xenc_Transforms_POP_Transform(struct zxmd_xenc_Transforms_s* x)
{
  struct zxmd_ds_Transform_s* y;
  if (!x) return 0;
  y = x->Transform;
  if (y)
    x->Transform = (struct zxmd_ds_Transform_s*)y->gg.g.n;
  return y;
}

/* FUNC(zxmd_xenc_Transforms_PUSH_Transform) */

void zxmd_xenc_Transforms_PUSH_Transform(struct zxmd_xenc_Transforms_s* x, struct zxmd_ds_Transform_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Transform->gg.g;
  x->Transform = z;
}

/* FUNC(zxmd_xenc_Transforms_REV_Transform) */

void zxmd_xenc_Transforms_REV_Transform(struct zxmd_xenc_Transforms_s* x)
{
  struct zxmd_ds_Transform_s* nxt;
  struct zxmd_ds_Transform_s* y;
  if (!x) return;
  y = x->Transform;
  if (!y) return;
  x->Transform = 0;
  while (y) {
    nxt = (struct zxmd_ds_Transform_s*)y->gg.g.n;
    y->gg.g.n = &x->Transform->gg.g;
    x->Transform = y;
    y = nxt;
  }
}

/* FUNC(zxmd_xenc_Transforms_PUT_Transform) */

void zxmd_xenc_Transforms_PUT_Transform(struct zxmd_xenc_Transforms_s* x, int n, struct zxmd_ds_Transform_s* z)
{
  struct zxmd_ds_Transform_s* y;
  if (!x || !z) return;
  y = x->Transform;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Transform = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zxmd_ds_Transform_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zxmd_xenc_Transforms_ADD_Transform) */

void zxmd_xenc_Transforms_ADD_Transform(struct zxmd_xenc_Transforms_s* x, int n, struct zxmd_ds_Transform_s* z)
{
  struct zxmd_ds_Transform_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->Transform->gg.g;
    x->Transform = z;
    return;
  case -1:
    y = x->Transform;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zxmd_ds_Transform_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Transform; n > 1 && y; --n, y = (struct zxmd_ds_Transform_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zxmd_xenc_Transforms_DEL_Transform) */

void zxmd_xenc_Transforms_DEL_Transform(struct zxmd_xenc_Transforms_s* x, int n)
{
  struct zxmd_ds_Transform_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Transform = (struct zxmd_ds_Transform_s*)x->Transform->gg.g.n;
    return;
  case -1:
    y = (struct zxmd_ds_Transform_s*)x->Transform;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zxmd_ds_Transform_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Transform; n > 1 && y->gg.g.n; --n, y = (struct zxmd_ds_Transform_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}








/* FUNC(zxmd_root_NUM_EntityDescriptor) */

int zxmd_root_NUM_EntityDescriptor(struct zxmd_root_s* x)
{
  struct zxmd_md_EntityDescriptor_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->EntityDescriptor; y; ++n, y = (struct zxmd_md_EntityDescriptor_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zxmd_root_GET_EntityDescriptor) */

struct zxmd_md_EntityDescriptor_s* zxmd_root_GET_EntityDescriptor(struct zxmd_root_s* x, int n)
{
  struct zxmd_md_EntityDescriptor_s* y;
  if (!x) return 0;
  for (y = x->EntityDescriptor; n>=0 && y; --n, y = (struct zxmd_md_EntityDescriptor_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zxmd_root_POP_EntityDescriptor) */

struct zxmd_md_EntityDescriptor_s* zxmd_root_POP_EntityDescriptor(struct zxmd_root_s* x)
{
  struct zxmd_md_EntityDescriptor_s* y;
  if (!x) return 0;
  y = x->EntityDescriptor;
  if (y)
    x->EntityDescriptor = (struct zxmd_md_EntityDescriptor_s*)y->gg.g.n;
  return y;
}

/* FUNC(zxmd_root_PUSH_EntityDescriptor) */

void zxmd_root_PUSH_EntityDescriptor(struct zxmd_root_s* x, struct zxmd_md_EntityDescriptor_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->EntityDescriptor->gg.g;
  x->EntityDescriptor = z;
}

/* FUNC(zxmd_root_REV_EntityDescriptor) */

void zxmd_root_REV_EntityDescriptor(struct zxmd_root_s* x)
{
  struct zxmd_md_EntityDescriptor_s* nxt;
  struct zxmd_md_EntityDescriptor_s* y;
  if (!x) return;
  y = x->EntityDescriptor;
  if (!y) return;
  x->EntityDescriptor = 0;
  while (y) {
    nxt = (struct zxmd_md_EntityDescriptor_s*)y->gg.g.n;
    y->gg.g.n = &x->EntityDescriptor->gg.g;
    x->EntityDescriptor = y;
    y = nxt;
  }
}

/* FUNC(zxmd_root_PUT_EntityDescriptor) */

void zxmd_root_PUT_EntityDescriptor(struct zxmd_root_s* x, int n, struct zxmd_md_EntityDescriptor_s* z)
{
  struct zxmd_md_EntityDescriptor_s* y;
  if (!x || !z) return;
  y = x->EntityDescriptor;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->EntityDescriptor = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zxmd_md_EntityDescriptor_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zxmd_root_ADD_EntityDescriptor) */

void zxmd_root_ADD_EntityDescriptor(struct zxmd_root_s* x, int n, struct zxmd_md_EntityDescriptor_s* z)
{
  struct zxmd_md_EntityDescriptor_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->EntityDescriptor->gg.g;
    x->EntityDescriptor = z;
    return;
  case -1:
    y = x->EntityDescriptor;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zxmd_md_EntityDescriptor_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->EntityDescriptor; n > 1 && y; --n, y = (struct zxmd_md_EntityDescriptor_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zxmd_root_DEL_EntityDescriptor) */

void zxmd_root_DEL_EntityDescriptor(struct zxmd_root_s* x, int n)
{
  struct zxmd_md_EntityDescriptor_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->EntityDescriptor = (struct zxmd_md_EntityDescriptor_s*)x->EntityDescriptor->gg.g.n;
    return;
  case -1:
    y = (struct zxmd_md_EntityDescriptor_s*)x->EntityDescriptor;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zxmd_md_EntityDescriptor_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->EntityDescriptor; n > 1 && y->gg.g.n; --n, y = (struct zxmd_md_EntityDescriptor_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zxmd_root_NUM_EntitiesDescriptor) */

int zxmd_root_NUM_EntitiesDescriptor(struct zxmd_root_s* x)
{
  struct zxmd_md_EntitiesDescriptor_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->EntitiesDescriptor; y; ++n, y = (struct zxmd_md_EntitiesDescriptor_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zxmd_root_GET_EntitiesDescriptor) */

struct zxmd_md_EntitiesDescriptor_s* zxmd_root_GET_EntitiesDescriptor(struct zxmd_root_s* x, int n)
{
  struct zxmd_md_EntitiesDescriptor_s* y;
  if (!x) return 0;
  for (y = x->EntitiesDescriptor; n>=0 && y; --n, y = (struct zxmd_md_EntitiesDescriptor_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zxmd_root_POP_EntitiesDescriptor) */

struct zxmd_md_EntitiesDescriptor_s* zxmd_root_POP_EntitiesDescriptor(struct zxmd_root_s* x)
{
  struct zxmd_md_EntitiesDescriptor_s* y;
  if (!x) return 0;
  y = x->EntitiesDescriptor;
  if (y)
    x->EntitiesDescriptor = (struct zxmd_md_EntitiesDescriptor_s*)y->gg.g.n;
  return y;
}

/* FUNC(zxmd_root_PUSH_EntitiesDescriptor) */

void zxmd_root_PUSH_EntitiesDescriptor(struct zxmd_root_s* x, struct zxmd_md_EntitiesDescriptor_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->EntitiesDescriptor->gg.g;
  x->EntitiesDescriptor = z;
}

/* FUNC(zxmd_root_REV_EntitiesDescriptor) */

void zxmd_root_REV_EntitiesDescriptor(struct zxmd_root_s* x)
{
  struct zxmd_md_EntitiesDescriptor_s* nxt;
  struct zxmd_md_EntitiesDescriptor_s* y;
  if (!x) return;
  y = x->EntitiesDescriptor;
  if (!y) return;
  x->EntitiesDescriptor = 0;
  while (y) {
    nxt = (struct zxmd_md_EntitiesDescriptor_s*)y->gg.g.n;
    y->gg.g.n = &x->EntitiesDescriptor->gg.g;
    x->EntitiesDescriptor = y;
    y = nxt;
  }
}

/* FUNC(zxmd_root_PUT_EntitiesDescriptor) */

void zxmd_root_PUT_EntitiesDescriptor(struct zxmd_root_s* x, int n, struct zxmd_md_EntitiesDescriptor_s* z)
{
  struct zxmd_md_EntitiesDescriptor_s* y;
  if (!x || !z) return;
  y = x->EntitiesDescriptor;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->EntitiesDescriptor = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zxmd_md_EntitiesDescriptor_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zxmd_root_ADD_EntitiesDescriptor) */

void zxmd_root_ADD_EntitiesDescriptor(struct zxmd_root_s* x, int n, struct zxmd_md_EntitiesDescriptor_s* z)
{
  struct zxmd_md_EntitiesDescriptor_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->EntitiesDescriptor->gg.g;
    x->EntitiesDescriptor = z;
    return;
  case -1:
    y = x->EntitiesDescriptor;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zxmd_md_EntitiesDescriptor_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->EntitiesDescriptor; n > 1 && y; --n, y = (struct zxmd_md_EntitiesDescriptor_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zxmd_root_DEL_EntitiesDescriptor) */

void zxmd_root_DEL_EntitiesDescriptor(struct zxmd_root_s* x, int n)
{
  struct zxmd_md_EntitiesDescriptor_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->EntitiesDescriptor = (struct zxmd_md_EntitiesDescriptor_s*)x->EntitiesDescriptor->gg.g.n;
    return;
  case -1:
    y = (struct zxmd_md_EntitiesDescriptor_s*)x->EntitiesDescriptor;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zxmd_md_EntitiesDescriptor_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->EntitiesDescriptor; n > 1 && y->gg.g.n; --n, y = (struct zxmd_md_EntitiesDescriptor_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}











