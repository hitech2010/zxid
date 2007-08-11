/* c/zx-sp11-getput.c - WARNING: This file was automatically generated. DO NOT EDIT!
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
#include "c/zx-sp11-data.h"



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_sp11_AttributeQuery_NUM_Subject) */

int zx_sp11_AttributeQuery_NUM_Subject(struct zx_sp11_AttributeQuery_s* x)
{
  struct zx_sa11_Subject_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Subject; y; ++n, y = (struct zx_sa11_Subject_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_sp11_AttributeQuery_GET_Subject) */

struct zx_sa11_Subject_s* zx_sp11_AttributeQuery_GET_Subject(struct zx_sp11_AttributeQuery_s* x, int n)
{
  struct zx_sa11_Subject_s* y;
  if (!x) return 0;
  for (y = x->Subject; n>=0 && y; --n, y = (struct zx_sa11_Subject_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_sp11_AttributeQuery_POP_Subject) */

struct zx_sa11_Subject_s* zx_sp11_AttributeQuery_POP_Subject(struct zx_sp11_AttributeQuery_s* x)
{
  struct zx_sa11_Subject_s* y;
  if (!x) return 0;
  y = x->Subject;
  if (y)
    x->Subject = (struct zx_sa11_Subject_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_sp11_AttributeQuery_PUSH_Subject) */

void zx_sp11_AttributeQuery_PUSH_Subject(struct zx_sp11_AttributeQuery_s* x, struct zx_sa11_Subject_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Subject->gg.g;
  x->Subject = z;
}

/* FUNC(zx_sp11_AttributeQuery_REV_Subject) */

void zx_sp11_AttributeQuery_REV_Subject(struct zx_sp11_AttributeQuery_s* x)
{
  struct zx_sa11_Subject_s* nxt;
  struct zx_sa11_Subject_s* y;
  if (!x) return;
  y = x->Subject;
  if (!y) return;
  x->Subject = 0;
  while (y) {
    nxt = (struct zx_sa11_Subject_s*)y->gg.g.n;
    y->gg.g.n = &x->Subject->gg.g;
    x->Subject = y;
    y = nxt;
  }
}

/* FUNC(zx_sp11_AttributeQuery_PUT_Subject) */

void zx_sp11_AttributeQuery_PUT_Subject(struct zx_sp11_AttributeQuery_s* x, int n, struct zx_sa11_Subject_s* z)
{
  struct zx_sa11_Subject_s* y;
  if (!x || !z) return;
  y = x->Subject;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Subject = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_sa11_Subject_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_sp11_AttributeQuery_ADD_Subject) */

void zx_sp11_AttributeQuery_ADD_Subject(struct zx_sp11_AttributeQuery_s* x, int n, struct zx_sa11_Subject_s* z)
{
  struct zx_sa11_Subject_s* y;
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
    for (; y->gg.g.n; y = (struct zx_sa11_Subject_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Subject; n > 1 && y; --n, y = (struct zx_sa11_Subject_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_sp11_AttributeQuery_DEL_Subject) */

void zx_sp11_AttributeQuery_DEL_Subject(struct zx_sp11_AttributeQuery_s* x, int n)
{
  struct zx_sa11_Subject_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Subject = (struct zx_sa11_Subject_s*)x->Subject->gg.g.n;
    return;
  case -1:
    y = (struct zx_sa11_Subject_s*)x->Subject;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_sa11_Subject_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Subject; n > 1 && y->gg.g.n; --n, y = (struct zx_sa11_Subject_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_sp11_AttributeQuery_NUM_AttributeDesignator) */

int zx_sp11_AttributeQuery_NUM_AttributeDesignator(struct zx_sp11_AttributeQuery_s* x)
{
  struct zx_sa11_AttributeDesignator_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->AttributeDesignator; y; ++n, y = (struct zx_sa11_AttributeDesignator_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_sp11_AttributeQuery_GET_AttributeDesignator) */

struct zx_sa11_AttributeDesignator_s* zx_sp11_AttributeQuery_GET_AttributeDesignator(struct zx_sp11_AttributeQuery_s* x, int n)
{
  struct zx_sa11_AttributeDesignator_s* y;
  if (!x) return 0;
  for (y = x->AttributeDesignator; n>=0 && y; --n, y = (struct zx_sa11_AttributeDesignator_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_sp11_AttributeQuery_POP_AttributeDesignator) */

struct zx_sa11_AttributeDesignator_s* zx_sp11_AttributeQuery_POP_AttributeDesignator(struct zx_sp11_AttributeQuery_s* x)
{
  struct zx_sa11_AttributeDesignator_s* y;
  if (!x) return 0;
  y = x->AttributeDesignator;
  if (y)
    x->AttributeDesignator = (struct zx_sa11_AttributeDesignator_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_sp11_AttributeQuery_PUSH_AttributeDesignator) */

void zx_sp11_AttributeQuery_PUSH_AttributeDesignator(struct zx_sp11_AttributeQuery_s* x, struct zx_sa11_AttributeDesignator_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->AttributeDesignator->gg.g;
  x->AttributeDesignator = z;
}

/* FUNC(zx_sp11_AttributeQuery_REV_AttributeDesignator) */

void zx_sp11_AttributeQuery_REV_AttributeDesignator(struct zx_sp11_AttributeQuery_s* x)
{
  struct zx_sa11_AttributeDesignator_s* nxt;
  struct zx_sa11_AttributeDesignator_s* y;
  if (!x) return;
  y = x->AttributeDesignator;
  if (!y) return;
  x->AttributeDesignator = 0;
  while (y) {
    nxt = (struct zx_sa11_AttributeDesignator_s*)y->gg.g.n;
    y->gg.g.n = &x->AttributeDesignator->gg.g;
    x->AttributeDesignator = y;
    y = nxt;
  }
}

/* FUNC(zx_sp11_AttributeQuery_PUT_AttributeDesignator) */

void zx_sp11_AttributeQuery_PUT_AttributeDesignator(struct zx_sp11_AttributeQuery_s* x, int n, struct zx_sa11_AttributeDesignator_s* z)
{
  struct zx_sa11_AttributeDesignator_s* y;
  if (!x || !z) return;
  y = x->AttributeDesignator;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->AttributeDesignator = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_sa11_AttributeDesignator_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_sp11_AttributeQuery_ADD_AttributeDesignator) */

void zx_sp11_AttributeQuery_ADD_AttributeDesignator(struct zx_sp11_AttributeQuery_s* x, int n, struct zx_sa11_AttributeDesignator_s* z)
{
  struct zx_sa11_AttributeDesignator_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->AttributeDesignator->gg.g;
    x->AttributeDesignator = z;
    return;
  case -1:
    y = x->AttributeDesignator;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_sa11_AttributeDesignator_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->AttributeDesignator; n > 1 && y; --n, y = (struct zx_sa11_AttributeDesignator_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_sp11_AttributeQuery_DEL_AttributeDesignator) */

void zx_sp11_AttributeQuery_DEL_AttributeDesignator(struct zx_sp11_AttributeQuery_s* x, int n)
{
  struct zx_sa11_AttributeDesignator_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->AttributeDesignator = (struct zx_sa11_AttributeDesignator_s*)x->AttributeDesignator->gg.g.n;
    return;
  case -1:
    y = (struct zx_sa11_AttributeDesignator_s*)x->AttributeDesignator;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_sa11_AttributeDesignator_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->AttributeDesignator; n > 1 && y->gg.g.n; --n, y = (struct zx_sa11_AttributeDesignator_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif

/* FUNC(zx_sp11_AttributeQuery_GET_Resource) */
struct zx_str* zx_sp11_AttributeQuery_GET_Resource(struct zx_sp11_AttributeQuery_s* x) { return x->Resource; }
/* FUNC(zx_sp11_AttributeQuery_PUT_Resource) */
void zx_sp11_AttributeQuery_PUT_Resource(struct zx_sp11_AttributeQuery_s* x, struct zx_str* y) { x->Resource = y; }







#ifdef ZX_ENA_GETPUT

/* FUNC(zx_sp11_AuthenticationQuery_NUM_Subject) */

int zx_sp11_AuthenticationQuery_NUM_Subject(struct zx_sp11_AuthenticationQuery_s* x)
{
  struct zx_sa11_Subject_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Subject; y; ++n, y = (struct zx_sa11_Subject_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_sp11_AuthenticationQuery_GET_Subject) */

struct zx_sa11_Subject_s* zx_sp11_AuthenticationQuery_GET_Subject(struct zx_sp11_AuthenticationQuery_s* x, int n)
{
  struct zx_sa11_Subject_s* y;
  if (!x) return 0;
  for (y = x->Subject; n>=0 && y; --n, y = (struct zx_sa11_Subject_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_sp11_AuthenticationQuery_POP_Subject) */

struct zx_sa11_Subject_s* zx_sp11_AuthenticationQuery_POP_Subject(struct zx_sp11_AuthenticationQuery_s* x)
{
  struct zx_sa11_Subject_s* y;
  if (!x) return 0;
  y = x->Subject;
  if (y)
    x->Subject = (struct zx_sa11_Subject_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_sp11_AuthenticationQuery_PUSH_Subject) */

void zx_sp11_AuthenticationQuery_PUSH_Subject(struct zx_sp11_AuthenticationQuery_s* x, struct zx_sa11_Subject_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Subject->gg.g;
  x->Subject = z;
}

/* FUNC(zx_sp11_AuthenticationQuery_REV_Subject) */

void zx_sp11_AuthenticationQuery_REV_Subject(struct zx_sp11_AuthenticationQuery_s* x)
{
  struct zx_sa11_Subject_s* nxt;
  struct zx_sa11_Subject_s* y;
  if (!x) return;
  y = x->Subject;
  if (!y) return;
  x->Subject = 0;
  while (y) {
    nxt = (struct zx_sa11_Subject_s*)y->gg.g.n;
    y->gg.g.n = &x->Subject->gg.g;
    x->Subject = y;
    y = nxt;
  }
}

/* FUNC(zx_sp11_AuthenticationQuery_PUT_Subject) */

void zx_sp11_AuthenticationQuery_PUT_Subject(struct zx_sp11_AuthenticationQuery_s* x, int n, struct zx_sa11_Subject_s* z)
{
  struct zx_sa11_Subject_s* y;
  if (!x || !z) return;
  y = x->Subject;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Subject = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_sa11_Subject_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_sp11_AuthenticationQuery_ADD_Subject) */

void zx_sp11_AuthenticationQuery_ADD_Subject(struct zx_sp11_AuthenticationQuery_s* x, int n, struct zx_sa11_Subject_s* z)
{
  struct zx_sa11_Subject_s* y;
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
    for (; y->gg.g.n; y = (struct zx_sa11_Subject_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Subject; n > 1 && y; --n, y = (struct zx_sa11_Subject_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_sp11_AuthenticationQuery_DEL_Subject) */

void zx_sp11_AuthenticationQuery_DEL_Subject(struct zx_sp11_AuthenticationQuery_s* x, int n)
{
  struct zx_sa11_Subject_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Subject = (struct zx_sa11_Subject_s*)x->Subject->gg.g.n;
    return;
  case -1:
    y = (struct zx_sa11_Subject_s*)x->Subject;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_sa11_Subject_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Subject; n > 1 && y->gg.g.n; --n, y = (struct zx_sa11_Subject_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif

/* FUNC(zx_sp11_AuthenticationQuery_GET_AuthenticationMethod) */
struct zx_str* zx_sp11_AuthenticationQuery_GET_AuthenticationMethod(struct zx_sp11_AuthenticationQuery_s* x) { return x->AuthenticationMethod; }
/* FUNC(zx_sp11_AuthenticationQuery_PUT_AuthenticationMethod) */
void zx_sp11_AuthenticationQuery_PUT_AuthenticationMethod(struct zx_sp11_AuthenticationQuery_s* x, struct zx_str* y) { x->AuthenticationMethod = y; }







#ifdef ZX_ENA_GETPUT

/* FUNC(zx_sp11_AuthorizationDecisionQuery_NUM_Subject) */

int zx_sp11_AuthorizationDecisionQuery_NUM_Subject(struct zx_sp11_AuthorizationDecisionQuery_s* x)
{
  struct zx_sa11_Subject_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Subject; y; ++n, y = (struct zx_sa11_Subject_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_sp11_AuthorizationDecisionQuery_GET_Subject) */

struct zx_sa11_Subject_s* zx_sp11_AuthorizationDecisionQuery_GET_Subject(struct zx_sp11_AuthorizationDecisionQuery_s* x, int n)
{
  struct zx_sa11_Subject_s* y;
  if (!x) return 0;
  for (y = x->Subject; n>=0 && y; --n, y = (struct zx_sa11_Subject_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_sp11_AuthorizationDecisionQuery_POP_Subject) */

struct zx_sa11_Subject_s* zx_sp11_AuthorizationDecisionQuery_POP_Subject(struct zx_sp11_AuthorizationDecisionQuery_s* x)
{
  struct zx_sa11_Subject_s* y;
  if (!x) return 0;
  y = x->Subject;
  if (y)
    x->Subject = (struct zx_sa11_Subject_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_sp11_AuthorizationDecisionQuery_PUSH_Subject) */

void zx_sp11_AuthorizationDecisionQuery_PUSH_Subject(struct zx_sp11_AuthorizationDecisionQuery_s* x, struct zx_sa11_Subject_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Subject->gg.g;
  x->Subject = z;
}

/* FUNC(zx_sp11_AuthorizationDecisionQuery_REV_Subject) */

void zx_sp11_AuthorizationDecisionQuery_REV_Subject(struct zx_sp11_AuthorizationDecisionQuery_s* x)
{
  struct zx_sa11_Subject_s* nxt;
  struct zx_sa11_Subject_s* y;
  if (!x) return;
  y = x->Subject;
  if (!y) return;
  x->Subject = 0;
  while (y) {
    nxt = (struct zx_sa11_Subject_s*)y->gg.g.n;
    y->gg.g.n = &x->Subject->gg.g;
    x->Subject = y;
    y = nxt;
  }
}

/* FUNC(zx_sp11_AuthorizationDecisionQuery_PUT_Subject) */

void zx_sp11_AuthorizationDecisionQuery_PUT_Subject(struct zx_sp11_AuthorizationDecisionQuery_s* x, int n, struct zx_sa11_Subject_s* z)
{
  struct zx_sa11_Subject_s* y;
  if (!x || !z) return;
  y = x->Subject;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Subject = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_sa11_Subject_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_sp11_AuthorizationDecisionQuery_ADD_Subject) */

void zx_sp11_AuthorizationDecisionQuery_ADD_Subject(struct zx_sp11_AuthorizationDecisionQuery_s* x, int n, struct zx_sa11_Subject_s* z)
{
  struct zx_sa11_Subject_s* y;
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
    for (; y->gg.g.n; y = (struct zx_sa11_Subject_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Subject; n > 1 && y; --n, y = (struct zx_sa11_Subject_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_sp11_AuthorizationDecisionQuery_DEL_Subject) */

void zx_sp11_AuthorizationDecisionQuery_DEL_Subject(struct zx_sp11_AuthorizationDecisionQuery_s* x, int n)
{
  struct zx_sa11_Subject_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Subject = (struct zx_sa11_Subject_s*)x->Subject->gg.g.n;
    return;
  case -1:
    y = (struct zx_sa11_Subject_s*)x->Subject;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_sa11_Subject_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Subject; n > 1 && y->gg.g.n; --n, y = (struct zx_sa11_Subject_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_sp11_AuthorizationDecisionQuery_NUM_Action) */

int zx_sp11_AuthorizationDecisionQuery_NUM_Action(struct zx_sp11_AuthorizationDecisionQuery_s* x)
{
  struct zx_sa11_Action_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Action; y; ++n, y = (struct zx_sa11_Action_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_sp11_AuthorizationDecisionQuery_GET_Action) */

struct zx_sa11_Action_s* zx_sp11_AuthorizationDecisionQuery_GET_Action(struct zx_sp11_AuthorizationDecisionQuery_s* x, int n)
{
  struct zx_sa11_Action_s* y;
  if (!x) return 0;
  for (y = x->Action; n>=0 && y; --n, y = (struct zx_sa11_Action_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_sp11_AuthorizationDecisionQuery_POP_Action) */

struct zx_sa11_Action_s* zx_sp11_AuthorizationDecisionQuery_POP_Action(struct zx_sp11_AuthorizationDecisionQuery_s* x)
{
  struct zx_sa11_Action_s* y;
  if (!x) return 0;
  y = x->Action;
  if (y)
    x->Action = (struct zx_sa11_Action_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_sp11_AuthorizationDecisionQuery_PUSH_Action) */

void zx_sp11_AuthorizationDecisionQuery_PUSH_Action(struct zx_sp11_AuthorizationDecisionQuery_s* x, struct zx_sa11_Action_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Action->gg.g;
  x->Action = z;
}

/* FUNC(zx_sp11_AuthorizationDecisionQuery_REV_Action) */

void zx_sp11_AuthorizationDecisionQuery_REV_Action(struct zx_sp11_AuthorizationDecisionQuery_s* x)
{
  struct zx_sa11_Action_s* nxt;
  struct zx_sa11_Action_s* y;
  if (!x) return;
  y = x->Action;
  if (!y) return;
  x->Action = 0;
  while (y) {
    nxt = (struct zx_sa11_Action_s*)y->gg.g.n;
    y->gg.g.n = &x->Action->gg.g;
    x->Action = y;
    y = nxt;
  }
}

/* FUNC(zx_sp11_AuthorizationDecisionQuery_PUT_Action) */

void zx_sp11_AuthorizationDecisionQuery_PUT_Action(struct zx_sp11_AuthorizationDecisionQuery_s* x, int n, struct zx_sa11_Action_s* z)
{
  struct zx_sa11_Action_s* y;
  if (!x || !z) return;
  y = x->Action;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Action = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_sa11_Action_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_sp11_AuthorizationDecisionQuery_ADD_Action) */

void zx_sp11_AuthorizationDecisionQuery_ADD_Action(struct zx_sp11_AuthorizationDecisionQuery_s* x, int n, struct zx_sa11_Action_s* z)
{
  struct zx_sa11_Action_s* y;
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
    for (; y->gg.g.n; y = (struct zx_sa11_Action_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Action; n > 1 && y; --n, y = (struct zx_sa11_Action_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_sp11_AuthorizationDecisionQuery_DEL_Action) */

void zx_sp11_AuthorizationDecisionQuery_DEL_Action(struct zx_sp11_AuthorizationDecisionQuery_s* x, int n)
{
  struct zx_sa11_Action_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Action = (struct zx_sa11_Action_s*)x->Action->gg.g.n;
    return;
  case -1:
    y = (struct zx_sa11_Action_s*)x->Action;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_sa11_Action_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Action; n > 1 && y->gg.g.n; --n, y = (struct zx_sa11_Action_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_sp11_AuthorizationDecisionQuery_NUM_Evidence) */

int zx_sp11_AuthorizationDecisionQuery_NUM_Evidence(struct zx_sp11_AuthorizationDecisionQuery_s* x)
{
  struct zx_sa11_Evidence_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Evidence; y; ++n, y = (struct zx_sa11_Evidence_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_sp11_AuthorizationDecisionQuery_GET_Evidence) */

struct zx_sa11_Evidence_s* zx_sp11_AuthorizationDecisionQuery_GET_Evidence(struct zx_sp11_AuthorizationDecisionQuery_s* x, int n)
{
  struct zx_sa11_Evidence_s* y;
  if (!x) return 0;
  for (y = x->Evidence; n>=0 && y; --n, y = (struct zx_sa11_Evidence_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_sp11_AuthorizationDecisionQuery_POP_Evidence) */

struct zx_sa11_Evidence_s* zx_sp11_AuthorizationDecisionQuery_POP_Evidence(struct zx_sp11_AuthorizationDecisionQuery_s* x)
{
  struct zx_sa11_Evidence_s* y;
  if (!x) return 0;
  y = x->Evidence;
  if (y)
    x->Evidence = (struct zx_sa11_Evidence_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_sp11_AuthorizationDecisionQuery_PUSH_Evidence) */

void zx_sp11_AuthorizationDecisionQuery_PUSH_Evidence(struct zx_sp11_AuthorizationDecisionQuery_s* x, struct zx_sa11_Evidence_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Evidence->gg.g;
  x->Evidence = z;
}

/* FUNC(zx_sp11_AuthorizationDecisionQuery_REV_Evidence) */

void zx_sp11_AuthorizationDecisionQuery_REV_Evidence(struct zx_sp11_AuthorizationDecisionQuery_s* x)
{
  struct zx_sa11_Evidence_s* nxt;
  struct zx_sa11_Evidence_s* y;
  if (!x) return;
  y = x->Evidence;
  if (!y) return;
  x->Evidence = 0;
  while (y) {
    nxt = (struct zx_sa11_Evidence_s*)y->gg.g.n;
    y->gg.g.n = &x->Evidence->gg.g;
    x->Evidence = y;
    y = nxt;
  }
}

/* FUNC(zx_sp11_AuthorizationDecisionQuery_PUT_Evidence) */

void zx_sp11_AuthorizationDecisionQuery_PUT_Evidence(struct zx_sp11_AuthorizationDecisionQuery_s* x, int n, struct zx_sa11_Evidence_s* z)
{
  struct zx_sa11_Evidence_s* y;
  if (!x || !z) return;
  y = x->Evidence;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Evidence = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_sa11_Evidence_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_sp11_AuthorizationDecisionQuery_ADD_Evidence) */

void zx_sp11_AuthorizationDecisionQuery_ADD_Evidence(struct zx_sp11_AuthorizationDecisionQuery_s* x, int n, struct zx_sa11_Evidence_s* z)
{
  struct zx_sa11_Evidence_s* y;
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
    for (; y->gg.g.n; y = (struct zx_sa11_Evidence_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Evidence; n > 1 && y; --n, y = (struct zx_sa11_Evidence_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_sp11_AuthorizationDecisionQuery_DEL_Evidence) */

void zx_sp11_AuthorizationDecisionQuery_DEL_Evidence(struct zx_sp11_AuthorizationDecisionQuery_s* x, int n)
{
  struct zx_sa11_Evidence_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Evidence = (struct zx_sa11_Evidence_s*)x->Evidence->gg.g.n;
    return;
  case -1:
    y = (struct zx_sa11_Evidence_s*)x->Evidence;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_sa11_Evidence_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Evidence; n > 1 && y->gg.g.n; --n, y = (struct zx_sa11_Evidence_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif

/* FUNC(zx_sp11_AuthorizationDecisionQuery_GET_Resource) */
struct zx_str* zx_sp11_AuthorizationDecisionQuery_GET_Resource(struct zx_sp11_AuthorizationDecisionQuery_s* x) { return x->Resource; }
/* FUNC(zx_sp11_AuthorizationDecisionQuery_PUT_Resource) */
void zx_sp11_AuthorizationDecisionQuery_PUT_Resource(struct zx_sp11_AuthorizationDecisionQuery_s* x, struct zx_str* y) { x->Resource = y; }







#ifdef ZX_ENA_GETPUT

/* FUNC(zx_sp11_Request_NUM_RespondWith) */

int zx_sp11_Request_NUM_RespondWith(struct zx_sp11_Request_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->RespondWith; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_sp11_Request_GET_RespondWith) */

struct zx_elem_s* zx_sp11_Request_GET_RespondWith(struct zx_sp11_Request_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->RespondWith; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_sp11_Request_POP_RespondWith) */

struct zx_elem_s* zx_sp11_Request_POP_RespondWith(struct zx_sp11_Request_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->RespondWith;
  if (y)
    x->RespondWith = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_sp11_Request_PUSH_RespondWith) */

void zx_sp11_Request_PUSH_RespondWith(struct zx_sp11_Request_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->RespondWith->g;
  x->RespondWith = z;
}

/* FUNC(zx_sp11_Request_REV_RespondWith) */

void zx_sp11_Request_REV_RespondWith(struct zx_sp11_Request_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->RespondWith;
  if (!y) return;
  x->RespondWith = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->RespondWith->g;
    x->RespondWith = y;
    y = nxt;
  }
}

/* FUNC(zx_sp11_Request_PUT_RespondWith) */

void zx_sp11_Request_PUT_RespondWith(struct zx_sp11_Request_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->RespondWith;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->RespondWith = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_sp11_Request_ADD_RespondWith) */

void zx_sp11_Request_ADD_RespondWith(struct zx_sp11_Request_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->RespondWith->g;
    x->RespondWith = z;
    return;
  case -1:
    y = x->RespondWith;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->RespondWith; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_sp11_Request_DEL_RespondWith) */

void zx_sp11_Request_DEL_RespondWith(struct zx_sp11_Request_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->RespondWith = (struct zx_elem_s*)x->RespondWith->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->RespondWith;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->RespondWith; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_sp11_Request_NUM_Signature) */

int zx_sp11_Request_NUM_Signature(struct zx_sp11_Request_s* x)
{
  struct zx_ds_Signature_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Signature; y; ++n, y = (struct zx_ds_Signature_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_sp11_Request_GET_Signature) */

struct zx_ds_Signature_s* zx_sp11_Request_GET_Signature(struct zx_sp11_Request_s* x, int n)
{
  struct zx_ds_Signature_s* y;
  if (!x) return 0;
  for (y = x->Signature; n>=0 && y; --n, y = (struct zx_ds_Signature_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_sp11_Request_POP_Signature) */

struct zx_ds_Signature_s* zx_sp11_Request_POP_Signature(struct zx_sp11_Request_s* x)
{
  struct zx_ds_Signature_s* y;
  if (!x) return 0;
  y = x->Signature;
  if (y)
    x->Signature = (struct zx_ds_Signature_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_sp11_Request_PUSH_Signature) */

void zx_sp11_Request_PUSH_Signature(struct zx_sp11_Request_s* x, struct zx_ds_Signature_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Signature->gg.g;
  x->Signature = z;
}

/* FUNC(zx_sp11_Request_REV_Signature) */

void zx_sp11_Request_REV_Signature(struct zx_sp11_Request_s* x)
{
  struct zx_ds_Signature_s* nxt;
  struct zx_ds_Signature_s* y;
  if (!x) return;
  y = x->Signature;
  if (!y) return;
  x->Signature = 0;
  while (y) {
    nxt = (struct zx_ds_Signature_s*)y->gg.g.n;
    y->gg.g.n = &x->Signature->gg.g;
    x->Signature = y;
    y = nxt;
  }
}

/* FUNC(zx_sp11_Request_PUT_Signature) */

void zx_sp11_Request_PUT_Signature(struct zx_sp11_Request_s* x, int n, struct zx_ds_Signature_s* z)
{
  struct zx_ds_Signature_s* y;
  if (!x || !z) return;
  y = x->Signature;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Signature = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_ds_Signature_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_sp11_Request_ADD_Signature) */

void zx_sp11_Request_ADD_Signature(struct zx_sp11_Request_s* x, int n, struct zx_ds_Signature_s* z)
{
  struct zx_ds_Signature_s* y;
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
    for (; y->gg.g.n; y = (struct zx_ds_Signature_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Signature; n > 1 && y; --n, y = (struct zx_ds_Signature_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_sp11_Request_DEL_Signature) */

void zx_sp11_Request_DEL_Signature(struct zx_sp11_Request_s* x, int n)
{
  struct zx_ds_Signature_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Signature = (struct zx_ds_Signature_s*)x->Signature->gg.g.n;
    return;
  case -1:
    y = (struct zx_ds_Signature_s*)x->Signature;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_ds_Signature_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Signature; n > 1 && y->gg.g.n; --n, y = (struct zx_ds_Signature_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_sp11_Request_NUM_Query) */

int zx_sp11_Request_NUM_Query(struct zx_sp11_Request_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Query; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_sp11_Request_GET_Query) */

struct zx_elem_s* zx_sp11_Request_GET_Query(struct zx_sp11_Request_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->Query; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_sp11_Request_POP_Query) */

struct zx_elem_s* zx_sp11_Request_POP_Query(struct zx_sp11_Request_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->Query;
  if (y)
    x->Query = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_sp11_Request_PUSH_Query) */

void zx_sp11_Request_PUSH_Query(struct zx_sp11_Request_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->Query->g;
  x->Query = z;
}

/* FUNC(zx_sp11_Request_REV_Query) */

void zx_sp11_Request_REV_Query(struct zx_sp11_Request_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->Query;
  if (!y) return;
  x->Query = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->Query->g;
    x->Query = y;
    y = nxt;
  }
}

/* FUNC(zx_sp11_Request_PUT_Query) */

void zx_sp11_Request_PUT_Query(struct zx_sp11_Request_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->Query;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->Query = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_sp11_Request_ADD_Query) */

void zx_sp11_Request_ADD_Query(struct zx_sp11_Request_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->Query->g;
    x->Query = z;
    return;
  case -1:
    y = x->Query;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->Query; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_sp11_Request_DEL_Query) */

void zx_sp11_Request_DEL_Query(struct zx_sp11_Request_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Query = (struct zx_elem_s*)x->Query->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->Query;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->Query; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_sp11_Request_NUM_SubjectQuery) */

int zx_sp11_Request_NUM_SubjectQuery(struct zx_sp11_Request_s* x)
{
  struct zx_sp11_SubjectQuery_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->SubjectQuery; y; ++n, y = (struct zx_sp11_SubjectQuery_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_sp11_Request_GET_SubjectQuery) */

struct zx_sp11_SubjectQuery_s* zx_sp11_Request_GET_SubjectQuery(struct zx_sp11_Request_s* x, int n)
{
  struct zx_sp11_SubjectQuery_s* y;
  if (!x) return 0;
  for (y = x->SubjectQuery; n>=0 && y; --n, y = (struct zx_sp11_SubjectQuery_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_sp11_Request_POP_SubjectQuery) */

struct zx_sp11_SubjectQuery_s* zx_sp11_Request_POP_SubjectQuery(struct zx_sp11_Request_s* x)
{
  struct zx_sp11_SubjectQuery_s* y;
  if (!x) return 0;
  y = x->SubjectQuery;
  if (y)
    x->SubjectQuery = (struct zx_sp11_SubjectQuery_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_sp11_Request_PUSH_SubjectQuery) */

void zx_sp11_Request_PUSH_SubjectQuery(struct zx_sp11_Request_s* x, struct zx_sp11_SubjectQuery_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->SubjectQuery->gg.g;
  x->SubjectQuery = z;
}

/* FUNC(zx_sp11_Request_REV_SubjectQuery) */

void zx_sp11_Request_REV_SubjectQuery(struct zx_sp11_Request_s* x)
{
  struct zx_sp11_SubjectQuery_s* nxt;
  struct zx_sp11_SubjectQuery_s* y;
  if (!x) return;
  y = x->SubjectQuery;
  if (!y) return;
  x->SubjectQuery = 0;
  while (y) {
    nxt = (struct zx_sp11_SubjectQuery_s*)y->gg.g.n;
    y->gg.g.n = &x->SubjectQuery->gg.g;
    x->SubjectQuery = y;
    y = nxt;
  }
}

/* FUNC(zx_sp11_Request_PUT_SubjectQuery) */

void zx_sp11_Request_PUT_SubjectQuery(struct zx_sp11_Request_s* x, int n, struct zx_sp11_SubjectQuery_s* z)
{
  struct zx_sp11_SubjectQuery_s* y;
  if (!x || !z) return;
  y = x->SubjectQuery;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->SubjectQuery = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_sp11_SubjectQuery_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_sp11_Request_ADD_SubjectQuery) */

void zx_sp11_Request_ADD_SubjectQuery(struct zx_sp11_Request_s* x, int n, struct zx_sp11_SubjectQuery_s* z)
{
  struct zx_sp11_SubjectQuery_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->SubjectQuery->gg.g;
    x->SubjectQuery = z;
    return;
  case -1:
    y = x->SubjectQuery;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_sp11_SubjectQuery_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->SubjectQuery; n > 1 && y; --n, y = (struct zx_sp11_SubjectQuery_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_sp11_Request_DEL_SubjectQuery) */

void zx_sp11_Request_DEL_SubjectQuery(struct zx_sp11_Request_s* x, int n)
{
  struct zx_sp11_SubjectQuery_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->SubjectQuery = (struct zx_sp11_SubjectQuery_s*)x->SubjectQuery->gg.g.n;
    return;
  case -1:
    y = (struct zx_sp11_SubjectQuery_s*)x->SubjectQuery;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_sp11_SubjectQuery_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->SubjectQuery; n > 1 && y->gg.g.n; --n, y = (struct zx_sp11_SubjectQuery_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_sp11_Request_NUM_AuthenticationQuery) */

int zx_sp11_Request_NUM_AuthenticationQuery(struct zx_sp11_Request_s* x)
{
  struct zx_sp11_AuthenticationQuery_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->AuthenticationQuery; y; ++n, y = (struct zx_sp11_AuthenticationQuery_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_sp11_Request_GET_AuthenticationQuery) */

struct zx_sp11_AuthenticationQuery_s* zx_sp11_Request_GET_AuthenticationQuery(struct zx_sp11_Request_s* x, int n)
{
  struct zx_sp11_AuthenticationQuery_s* y;
  if (!x) return 0;
  for (y = x->AuthenticationQuery; n>=0 && y; --n, y = (struct zx_sp11_AuthenticationQuery_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_sp11_Request_POP_AuthenticationQuery) */

struct zx_sp11_AuthenticationQuery_s* zx_sp11_Request_POP_AuthenticationQuery(struct zx_sp11_Request_s* x)
{
  struct zx_sp11_AuthenticationQuery_s* y;
  if (!x) return 0;
  y = x->AuthenticationQuery;
  if (y)
    x->AuthenticationQuery = (struct zx_sp11_AuthenticationQuery_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_sp11_Request_PUSH_AuthenticationQuery) */

void zx_sp11_Request_PUSH_AuthenticationQuery(struct zx_sp11_Request_s* x, struct zx_sp11_AuthenticationQuery_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->AuthenticationQuery->gg.g;
  x->AuthenticationQuery = z;
}

/* FUNC(zx_sp11_Request_REV_AuthenticationQuery) */

void zx_sp11_Request_REV_AuthenticationQuery(struct zx_sp11_Request_s* x)
{
  struct zx_sp11_AuthenticationQuery_s* nxt;
  struct zx_sp11_AuthenticationQuery_s* y;
  if (!x) return;
  y = x->AuthenticationQuery;
  if (!y) return;
  x->AuthenticationQuery = 0;
  while (y) {
    nxt = (struct zx_sp11_AuthenticationQuery_s*)y->gg.g.n;
    y->gg.g.n = &x->AuthenticationQuery->gg.g;
    x->AuthenticationQuery = y;
    y = nxt;
  }
}

/* FUNC(zx_sp11_Request_PUT_AuthenticationQuery) */

void zx_sp11_Request_PUT_AuthenticationQuery(struct zx_sp11_Request_s* x, int n, struct zx_sp11_AuthenticationQuery_s* z)
{
  struct zx_sp11_AuthenticationQuery_s* y;
  if (!x || !z) return;
  y = x->AuthenticationQuery;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->AuthenticationQuery = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_sp11_AuthenticationQuery_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_sp11_Request_ADD_AuthenticationQuery) */

void zx_sp11_Request_ADD_AuthenticationQuery(struct zx_sp11_Request_s* x, int n, struct zx_sp11_AuthenticationQuery_s* z)
{
  struct zx_sp11_AuthenticationQuery_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->AuthenticationQuery->gg.g;
    x->AuthenticationQuery = z;
    return;
  case -1:
    y = x->AuthenticationQuery;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_sp11_AuthenticationQuery_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->AuthenticationQuery; n > 1 && y; --n, y = (struct zx_sp11_AuthenticationQuery_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_sp11_Request_DEL_AuthenticationQuery) */

void zx_sp11_Request_DEL_AuthenticationQuery(struct zx_sp11_Request_s* x, int n)
{
  struct zx_sp11_AuthenticationQuery_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->AuthenticationQuery = (struct zx_sp11_AuthenticationQuery_s*)x->AuthenticationQuery->gg.g.n;
    return;
  case -1:
    y = (struct zx_sp11_AuthenticationQuery_s*)x->AuthenticationQuery;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_sp11_AuthenticationQuery_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->AuthenticationQuery; n > 1 && y->gg.g.n; --n, y = (struct zx_sp11_AuthenticationQuery_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_sp11_Request_NUM_AttributeQuery) */

int zx_sp11_Request_NUM_AttributeQuery(struct zx_sp11_Request_s* x)
{
  struct zx_sp11_AttributeQuery_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->AttributeQuery; y; ++n, y = (struct zx_sp11_AttributeQuery_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_sp11_Request_GET_AttributeQuery) */

struct zx_sp11_AttributeQuery_s* zx_sp11_Request_GET_AttributeQuery(struct zx_sp11_Request_s* x, int n)
{
  struct zx_sp11_AttributeQuery_s* y;
  if (!x) return 0;
  for (y = x->AttributeQuery; n>=0 && y; --n, y = (struct zx_sp11_AttributeQuery_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_sp11_Request_POP_AttributeQuery) */

struct zx_sp11_AttributeQuery_s* zx_sp11_Request_POP_AttributeQuery(struct zx_sp11_Request_s* x)
{
  struct zx_sp11_AttributeQuery_s* y;
  if (!x) return 0;
  y = x->AttributeQuery;
  if (y)
    x->AttributeQuery = (struct zx_sp11_AttributeQuery_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_sp11_Request_PUSH_AttributeQuery) */

void zx_sp11_Request_PUSH_AttributeQuery(struct zx_sp11_Request_s* x, struct zx_sp11_AttributeQuery_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->AttributeQuery->gg.g;
  x->AttributeQuery = z;
}

/* FUNC(zx_sp11_Request_REV_AttributeQuery) */

void zx_sp11_Request_REV_AttributeQuery(struct zx_sp11_Request_s* x)
{
  struct zx_sp11_AttributeQuery_s* nxt;
  struct zx_sp11_AttributeQuery_s* y;
  if (!x) return;
  y = x->AttributeQuery;
  if (!y) return;
  x->AttributeQuery = 0;
  while (y) {
    nxt = (struct zx_sp11_AttributeQuery_s*)y->gg.g.n;
    y->gg.g.n = &x->AttributeQuery->gg.g;
    x->AttributeQuery = y;
    y = nxt;
  }
}

/* FUNC(zx_sp11_Request_PUT_AttributeQuery) */

void zx_sp11_Request_PUT_AttributeQuery(struct zx_sp11_Request_s* x, int n, struct zx_sp11_AttributeQuery_s* z)
{
  struct zx_sp11_AttributeQuery_s* y;
  if (!x || !z) return;
  y = x->AttributeQuery;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->AttributeQuery = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_sp11_AttributeQuery_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_sp11_Request_ADD_AttributeQuery) */

void zx_sp11_Request_ADD_AttributeQuery(struct zx_sp11_Request_s* x, int n, struct zx_sp11_AttributeQuery_s* z)
{
  struct zx_sp11_AttributeQuery_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->AttributeQuery->gg.g;
    x->AttributeQuery = z;
    return;
  case -1:
    y = x->AttributeQuery;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_sp11_AttributeQuery_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->AttributeQuery; n > 1 && y; --n, y = (struct zx_sp11_AttributeQuery_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_sp11_Request_DEL_AttributeQuery) */

void zx_sp11_Request_DEL_AttributeQuery(struct zx_sp11_Request_s* x, int n)
{
  struct zx_sp11_AttributeQuery_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->AttributeQuery = (struct zx_sp11_AttributeQuery_s*)x->AttributeQuery->gg.g.n;
    return;
  case -1:
    y = (struct zx_sp11_AttributeQuery_s*)x->AttributeQuery;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_sp11_AttributeQuery_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->AttributeQuery; n > 1 && y->gg.g.n; --n, y = (struct zx_sp11_AttributeQuery_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_sp11_Request_NUM_AuthorizationDecisionQuery) */

int zx_sp11_Request_NUM_AuthorizationDecisionQuery(struct zx_sp11_Request_s* x)
{
  struct zx_sp11_AuthorizationDecisionQuery_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->AuthorizationDecisionQuery; y; ++n, y = (struct zx_sp11_AuthorizationDecisionQuery_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_sp11_Request_GET_AuthorizationDecisionQuery) */

struct zx_sp11_AuthorizationDecisionQuery_s* zx_sp11_Request_GET_AuthorizationDecisionQuery(struct zx_sp11_Request_s* x, int n)
{
  struct zx_sp11_AuthorizationDecisionQuery_s* y;
  if (!x) return 0;
  for (y = x->AuthorizationDecisionQuery; n>=0 && y; --n, y = (struct zx_sp11_AuthorizationDecisionQuery_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_sp11_Request_POP_AuthorizationDecisionQuery) */

struct zx_sp11_AuthorizationDecisionQuery_s* zx_sp11_Request_POP_AuthorizationDecisionQuery(struct zx_sp11_Request_s* x)
{
  struct zx_sp11_AuthorizationDecisionQuery_s* y;
  if (!x) return 0;
  y = x->AuthorizationDecisionQuery;
  if (y)
    x->AuthorizationDecisionQuery = (struct zx_sp11_AuthorizationDecisionQuery_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_sp11_Request_PUSH_AuthorizationDecisionQuery) */

void zx_sp11_Request_PUSH_AuthorizationDecisionQuery(struct zx_sp11_Request_s* x, struct zx_sp11_AuthorizationDecisionQuery_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->AuthorizationDecisionQuery->gg.g;
  x->AuthorizationDecisionQuery = z;
}

/* FUNC(zx_sp11_Request_REV_AuthorizationDecisionQuery) */

void zx_sp11_Request_REV_AuthorizationDecisionQuery(struct zx_sp11_Request_s* x)
{
  struct zx_sp11_AuthorizationDecisionQuery_s* nxt;
  struct zx_sp11_AuthorizationDecisionQuery_s* y;
  if (!x) return;
  y = x->AuthorizationDecisionQuery;
  if (!y) return;
  x->AuthorizationDecisionQuery = 0;
  while (y) {
    nxt = (struct zx_sp11_AuthorizationDecisionQuery_s*)y->gg.g.n;
    y->gg.g.n = &x->AuthorizationDecisionQuery->gg.g;
    x->AuthorizationDecisionQuery = y;
    y = nxt;
  }
}

/* FUNC(zx_sp11_Request_PUT_AuthorizationDecisionQuery) */

void zx_sp11_Request_PUT_AuthorizationDecisionQuery(struct zx_sp11_Request_s* x, int n, struct zx_sp11_AuthorizationDecisionQuery_s* z)
{
  struct zx_sp11_AuthorizationDecisionQuery_s* y;
  if (!x || !z) return;
  y = x->AuthorizationDecisionQuery;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->AuthorizationDecisionQuery = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_sp11_AuthorizationDecisionQuery_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_sp11_Request_ADD_AuthorizationDecisionQuery) */

void zx_sp11_Request_ADD_AuthorizationDecisionQuery(struct zx_sp11_Request_s* x, int n, struct zx_sp11_AuthorizationDecisionQuery_s* z)
{
  struct zx_sp11_AuthorizationDecisionQuery_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->AuthorizationDecisionQuery->gg.g;
    x->AuthorizationDecisionQuery = z;
    return;
  case -1:
    y = x->AuthorizationDecisionQuery;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_sp11_AuthorizationDecisionQuery_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->AuthorizationDecisionQuery; n > 1 && y; --n, y = (struct zx_sp11_AuthorizationDecisionQuery_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_sp11_Request_DEL_AuthorizationDecisionQuery) */

void zx_sp11_Request_DEL_AuthorizationDecisionQuery(struct zx_sp11_Request_s* x, int n)
{
  struct zx_sp11_AuthorizationDecisionQuery_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->AuthorizationDecisionQuery = (struct zx_sp11_AuthorizationDecisionQuery_s*)x->AuthorizationDecisionQuery->gg.g.n;
    return;
  case -1:
    y = (struct zx_sp11_AuthorizationDecisionQuery_s*)x->AuthorizationDecisionQuery;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_sp11_AuthorizationDecisionQuery_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->AuthorizationDecisionQuery; n > 1 && y->gg.g.n; --n, y = (struct zx_sp11_AuthorizationDecisionQuery_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_sp11_Request_NUM_AssertionIDReference) */

int zx_sp11_Request_NUM_AssertionIDReference(struct zx_sp11_Request_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->AssertionIDReference; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_sp11_Request_GET_AssertionIDReference) */

struct zx_elem_s* zx_sp11_Request_GET_AssertionIDReference(struct zx_sp11_Request_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->AssertionIDReference; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_sp11_Request_POP_AssertionIDReference) */

struct zx_elem_s* zx_sp11_Request_POP_AssertionIDReference(struct zx_sp11_Request_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->AssertionIDReference;
  if (y)
    x->AssertionIDReference = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_sp11_Request_PUSH_AssertionIDReference) */

void zx_sp11_Request_PUSH_AssertionIDReference(struct zx_sp11_Request_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->AssertionIDReference->g;
  x->AssertionIDReference = z;
}

/* FUNC(zx_sp11_Request_REV_AssertionIDReference) */

void zx_sp11_Request_REV_AssertionIDReference(struct zx_sp11_Request_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->AssertionIDReference;
  if (!y) return;
  x->AssertionIDReference = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->AssertionIDReference->g;
    x->AssertionIDReference = y;
    y = nxt;
  }
}

/* FUNC(zx_sp11_Request_PUT_AssertionIDReference) */

void zx_sp11_Request_PUT_AssertionIDReference(struct zx_sp11_Request_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->AssertionIDReference;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->AssertionIDReference = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_sp11_Request_ADD_AssertionIDReference) */

void zx_sp11_Request_ADD_AssertionIDReference(struct zx_sp11_Request_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->AssertionIDReference->g;
    x->AssertionIDReference = z;
    return;
  case -1:
    y = x->AssertionIDReference;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->AssertionIDReference; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_sp11_Request_DEL_AssertionIDReference) */

void zx_sp11_Request_DEL_AssertionIDReference(struct zx_sp11_Request_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->AssertionIDReference = (struct zx_elem_s*)x->AssertionIDReference->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->AssertionIDReference;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->AssertionIDReference; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_sp11_Request_NUM_AssertionArtifact) */

int zx_sp11_Request_NUM_AssertionArtifact(struct zx_sp11_Request_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->AssertionArtifact; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_sp11_Request_GET_AssertionArtifact) */

struct zx_elem_s* zx_sp11_Request_GET_AssertionArtifact(struct zx_sp11_Request_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->AssertionArtifact; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_sp11_Request_POP_AssertionArtifact) */

struct zx_elem_s* zx_sp11_Request_POP_AssertionArtifact(struct zx_sp11_Request_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->AssertionArtifact;
  if (y)
    x->AssertionArtifact = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_sp11_Request_PUSH_AssertionArtifact) */

void zx_sp11_Request_PUSH_AssertionArtifact(struct zx_sp11_Request_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->AssertionArtifact->g;
  x->AssertionArtifact = z;
}

/* FUNC(zx_sp11_Request_REV_AssertionArtifact) */

void zx_sp11_Request_REV_AssertionArtifact(struct zx_sp11_Request_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->AssertionArtifact;
  if (!y) return;
  x->AssertionArtifact = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->AssertionArtifact->g;
    x->AssertionArtifact = y;
    y = nxt;
  }
}

/* FUNC(zx_sp11_Request_PUT_AssertionArtifact) */

void zx_sp11_Request_PUT_AssertionArtifact(struct zx_sp11_Request_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->AssertionArtifact;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->AssertionArtifact = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_sp11_Request_ADD_AssertionArtifact) */

void zx_sp11_Request_ADD_AssertionArtifact(struct zx_sp11_Request_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->AssertionArtifact->g;
    x->AssertionArtifact = z;
    return;
  case -1:
    y = x->AssertionArtifact;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->AssertionArtifact; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_sp11_Request_DEL_AssertionArtifact) */

void zx_sp11_Request_DEL_AssertionArtifact(struct zx_sp11_Request_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->AssertionArtifact = (struct zx_elem_s*)x->AssertionArtifact->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->AssertionArtifact;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->AssertionArtifact; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

#endif

/* FUNC(zx_sp11_Request_GET_RequestID) */
struct zx_str* zx_sp11_Request_GET_RequestID(struct zx_sp11_Request_s* x) { return x->RequestID; }
/* FUNC(zx_sp11_Request_PUT_RequestID) */
void zx_sp11_Request_PUT_RequestID(struct zx_sp11_Request_s* x, struct zx_str* y) { x->RequestID = y; }
/* FUNC(zx_sp11_Request_GET_MajorVersion) */
struct zx_str* zx_sp11_Request_GET_MajorVersion(struct zx_sp11_Request_s* x) { return x->MajorVersion; }
/* FUNC(zx_sp11_Request_PUT_MajorVersion) */
void zx_sp11_Request_PUT_MajorVersion(struct zx_sp11_Request_s* x, struct zx_str* y) { x->MajorVersion = y; }
/* FUNC(zx_sp11_Request_GET_MinorVersion) */
struct zx_str* zx_sp11_Request_GET_MinorVersion(struct zx_sp11_Request_s* x) { return x->MinorVersion; }
/* FUNC(zx_sp11_Request_PUT_MinorVersion) */
void zx_sp11_Request_PUT_MinorVersion(struct zx_sp11_Request_s* x, struct zx_str* y) { x->MinorVersion = y; }
/* FUNC(zx_sp11_Request_GET_IssueInstant) */
struct zx_str* zx_sp11_Request_GET_IssueInstant(struct zx_sp11_Request_s* x) { return x->IssueInstant; }
/* FUNC(zx_sp11_Request_PUT_IssueInstant) */
void zx_sp11_Request_PUT_IssueInstant(struct zx_sp11_Request_s* x, struct zx_str* y) { x->IssueInstant = y; }







#ifdef ZX_ENA_GETPUT

/* FUNC(zx_sp11_Response_NUM_Signature) */

int zx_sp11_Response_NUM_Signature(struct zx_sp11_Response_s* x)
{
  struct zx_ds_Signature_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Signature; y; ++n, y = (struct zx_ds_Signature_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_sp11_Response_GET_Signature) */

struct zx_ds_Signature_s* zx_sp11_Response_GET_Signature(struct zx_sp11_Response_s* x, int n)
{
  struct zx_ds_Signature_s* y;
  if (!x) return 0;
  for (y = x->Signature; n>=0 && y; --n, y = (struct zx_ds_Signature_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_sp11_Response_POP_Signature) */

struct zx_ds_Signature_s* zx_sp11_Response_POP_Signature(struct zx_sp11_Response_s* x)
{
  struct zx_ds_Signature_s* y;
  if (!x) return 0;
  y = x->Signature;
  if (y)
    x->Signature = (struct zx_ds_Signature_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_sp11_Response_PUSH_Signature) */

void zx_sp11_Response_PUSH_Signature(struct zx_sp11_Response_s* x, struct zx_ds_Signature_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Signature->gg.g;
  x->Signature = z;
}

/* FUNC(zx_sp11_Response_REV_Signature) */

void zx_sp11_Response_REV_Signature(struct zx_sp11_Response_s* x)
{
  struct zx_ds_Signature_s* nxt;
  struct zx_ds_Signature_s* y;
  if (!x) return;
  y = x->Signature;
  if (!y) return;
  x->Signature = 0;
  while (y) {
    nxt = (struct zx_ds_Signature_s*)y->gg.g.n;
    y->gg.g.n = &x->Signature->gg.g;
    x->Signature = y;
    y = nxt;
  }
}

/* FUNC(zx_sp11_Response_PUT_Signature) */

void zx_sp11_Response_PUT_Signature(struct zx_sp11_Response_s* x, int n, struct zx_ds_Signature_s* z)
{
  struct zx_ds_Signature_s* y;
  if (!x || !z) return;
  y = x->Signature;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Signature = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_ds_Signature_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_sp11_Response_ADD_Signature) */

void zx_sp11_Response_ADD_Signature(struct zx_sp11_Response_s* x, int n, struct zx_ds_Signature_s* z)
{
  struct zx_ds_Signature_s* y;
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
    for (; y->gg.g.n; y = (struct zx_ds_Signature_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Signature; n > 1 && y; --n, y = (struct zx_ds_Signature_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_sp11_Response_DEL_Signature) */

void zx_sp11_Response_DEL_Signature(struct zx_sp11_Response_s* x, int n)
{
  struct zx_ds_Signature_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Signature = (struct zx_ds_Signature_s*)x->Signature->gg.g.n;
    return;
  case -1:
    y = (struct zx_ds_Signature_s*)x->Signature;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_ds_Signature_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Signature; n > 1 && y->gg.g.n; --n, y = (struct zx_ds_Signature_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_sp11_Response_NUM_Status) */

int zx_sp11_Response_NUM_Status(struct zx_sp11_Response_s* x)
{
  struct zx_sp11_Status_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Status; y; ++n, y = (struct zx_sp11_Status_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_sp11_Response_GET_Status) */

struct zx_sp11_Status_s* zx_sp11_Response_GET_Status(struct zx_sp11_Response_s* x, int n)
{
  struct zx_sp11_Status_s* y;
  if (!x) return 0;
  for (y = x->Status; n>=0 && y; --n, y = (struct zx_sp11_Status_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_sp11_Response_POP_Status) */

struct zx_sp11_Status_s* zx_sp11_Response_POP_Status(struct zx_sp11_Response_s* x)
{
  struct zx_sp11_Status_s* y;
  if (!x) return 0;
  y = x->Status;
  if (y)
    x->Status = (struct zx_sp11_Status_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_sp11_Response_PUSH_Status) */

void zx_sp11_Response_PUSH_Status(struct zx_sp11_Response_s* x, struct zx_sp11_Status_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Status->gg.g;
  x->Status = z;
}

/* FUNC(zx_sp11_Response_REV_Status) */

void zx_sp11_Response_REV_Status(struct zx_sp11_Response_s* x)
{
  struct zx_sp11_Status_s* nxt;
  struct zx_sp11_Status_s* y;
  if (!x) return;
  y = x->Status;
  if (!y) return;
  x->Status = 0;
  while (y) {
    nxt = (struct zx_sp11_Status_s*)y->gg.g.n;
    y->gg.g.n = &x->Status->gg.g;
    x->Status = y;
    y = nxt;
  }
}

/* FUNC(zx_sp11_Response_PUT_Status) */

void zx_sp11_Response_PUT_Status(struct zx_sp11_Response_s* x, int n, struct zx_sp11_Status_s* z)
{
  struct zx_sp11_Status_s* y;
  if (!x || !z) return;
  y = x->Status;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Status = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_sp11_Status_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_sp11_Response_ADD_Status) */

void zx_sp11_Response_ADD_Status(struct zx_sp11_Response_s* x, int n, struct zx_sp11_Status_s* z)
{
  struct zx_sp11_Status_s* y;
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
    for (; y->gg.g.n; y = (struct zx_sp11_Status_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Status; n > 1 && y; --n, y = (struct zx_sp11_Status_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_sp11_Response_DEL_Status) */

void zx_sp11_Response_DEL_Status(struct zx_sp11_Response_s* x, int n)
{
  struct zx_sp11_Status_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Status = (struct zx_sp11_Status_s*)x->Status->gg.g.n;
    return;
  case -1:
    y = (struct zx_sp11_Status_s*)x->Status;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_sp11_Status_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Status; n > 1 && y->gg.g.n; --n, y = (struct zx_sp11_Status_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_sp11_Response_NUM_Assertion) */

int zx_sp11_Response_NUM_Assertion(struct zx_sp11_Response_s* x)
{
  struct zx_sa11_Assertion_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Assertion; y; ++n, y = (struct zx_sa11_Assertion_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_sp11_Response_GET_Assertion) */

struct zx_sa11_Assertion_s* zx_sp11_Response_GET_Assertion(struct zx_sp11_Response_s* x, int n)
{
  struct zx_sa11_Assertion_s* y;
  if (!x) return 0;
  for (y = x->Assertion; n>=0 && y; --n, y = (struct zx_sa11_Assertion_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_sp11_Response_POP_Assertion) */

struct zx_sa11_Assertion_s* zx_sp11_Response_POP_Assertion(struct zx_sp11_Response_s* x)
{
  struct zx_sa11_Assertion_s* y;
  if (!x) return 0;
  y = x->Assertion;
  if (y)
    x->Assertion = (struct zx_sa11_Assertion_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_sp11_Response_PUSH_Assertion) */

void zx_sp11_Response_PUSH_Assertion(struct zx_sp11_Response_s* x, struct zx_sa11_Assertion_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Assertion->gg.g;
  x->Assertion = z;
}

/* FUNC(zx_sp11_Response_REV_Assertion) */

void zx_sp11_Response_REV_Assertion(struct zx_sp11_Response_s* x)
{
  struct zx_sa11_Assertion_s* nxt;
  struct zx_sa11_Assertion_s* y;
  if (!x) return;
  y = x->Assertion;
  if (!y) return;
  x->Assertion = 0;
  while (y) {
    nxt = (struct zx_sa11_Assertion_s*)y->gg.g.n;
    y->gg.g.n = &x->Assertion->gg.g;
    x->Assertion = y;
    y = nxt;
  }
}

/* FUNC(zx_sp11_Response_PUT_Assertion) */

void zx_sp11_Response_PUT_Assertion(struct zx_sp11_Response_s* x, int n, struct zx_sa11_Assertion_s* z)
{
  struct zx_sa11_Assertion_s* y;
  if (!x || !z) return;
  y = x->Assertion;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Assertion = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_sa11_Assertion_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_sp11_Response_ADD_Assertion) */

void zx_sp11_Response_ADD_Assertion(struct zx_sp11_Response_s* x, int n, struct zx_sa11_Assertion_s* z)
{
  struct zx_sa11_Assertion_s* y;
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
    for (; y->gg.g.n; y = (struct zx_sa11_Assertion_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Assertion; n > 1 && y; --n, y = (struct zx_sa11_Assertion_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_sp11_Response_DEL_Assertion) */

void zx_sp11_Response_DEL_Assertion(struct zx_sp11_Response_s* x, int n)
{
  struct zx_sa11_Assertion_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Assertion = (struct zx_sa11_Assertion_s*)x->Assertion->gg.g.n;
    return;
  case -1:
    y = (struct zx_sa11_Assertion_s*)x->Assertion;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_sa11_Assertion_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Assertion; n > 1 && y->gg.g.n; --n, y = (struct zx_sa11_Assertion_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif

/* FUNC(zx_sp11_Response_GET_ResponseID) */
struct zx_str* zx_sp11_Response_GET_ResponseID(struct zx_sp11_Response_s* x) { return x->ResponseID; }
/* FUNC(zx_sp11_Response_PUT_ResponseID) */
void zx_sp11_Response_PUT_ResponseID(struct zx_sp11_Response_s* x, struct zx_str* y) { x->ResponseID = y; }
/* FUNC(zx_sp11_Response_GET_InResponseTo) */
struct zx_str* zx_sp11_Response_GET_InResponseTo(struct zx_sp11_Response_s* x) { return x->InResponseTo; }
/* FUNC(zx_sp11_Response_PUT_InResponseTo) */
void zx_sp11_Response_PUT_InResponseTo(struct zx_sp11_Response_s* x, struct zx_str* y) { x->InResponseTo = y; }
/* FUNC(zx_sp11_Response_GET_MajorVersion) */
struct zx_str* zx_sp11_Response_GET_MajorVersion(struct zx_sp11_Response_s* x) { return x->MajorVersion; }
/* FUNC(zx_sp11_Response_PUT_MajorVersion) */
void zx_sp11_Response_PUT_MajorVersion(struct zx_sp11_Response_s* x, struct zx_str* y) { x->MajorVersion = y; }
/* FUNC(zx_sp11_Response_GET_MinorVersion) */
struct zx_str* zx_sp11_Response_GET_MinorVersion(struct zx_sp11_Response_s* x) { return x->MinorVersion; }
/* FUNC(zx_sp11_Response_PUT_MinorVersion) */
void zx_sp11_Response_PUT_MinorVersion(struct zx_sp11_Response_s* x, struct zx_str* y) { x->MinorVersion = y; }
/* FUNC(zx_sp11_Response_GET_IssueInstant) */
struct zx_str* zx_sp11_Response_GET_IssueInstant(struct zx_sp11_Response_s* x) { return x->IssueInstant; }
/* FUNC(zx_sp11_Response_PUT_IssueInstant) */
void zx_sp11_Response_PUT_IssueInstant(struct zx_sp11_Response_s* x, struct zx_str* y) { x->IssueInstant = y; }
/* FUNC(zx_sp11_Response_GET_Recipient) */
struct zx_str* zx_sp11_Response_GET_Recipient(struct zx_sp11_Response_s* x) { return x->Recipient; }
/* FUNC(zx_sp11_Response_PUT_Recipient) */
void zx_sp11_Response_PUT_Recipient(struct zx_sp11_Response_s* x, struct zx_str* y) { x->Recipient = y; }







#ifdef ZX_ENA_GETPUT

/* FUNC(zx_sp11_Status_NUM_StatusCode) */

int zx_sp11_Status_NUM_StatusCode(struct zx_sp11_Status_s* x)
{
  struct zx_sp11_StatusCode_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->StatusCode; y; ++n, y = (struct zx_sp11_StatusCode_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_sp11_Status_GET_StatusCode) */

struct zx_sp11_StatusCode_s* zx_sp11_Status_GET_StatusCode(struct zx_sp11_Status_s* x, int n)
{
  struct zx_sp11_StatusCode_s* y;
  if (!x) return 0;
  for (y = x->StatusCode; n>=0 && y; --n, y = (struct zx_sp11_StatusCode_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_sp11_Status_POP_StatusCode) */

struct zx_sp11_StatusCode_s* zx_sp11_Status_POP_StatusCode(struct zx_sp11_Status_s* x)
{
  struct zx_sp11_StatusCode_s* y;
  if (!x) return 0;
  y = x->StatusCode;
  if (y)
    x->StatusCode = (struct zx_sp11_StatusCode_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_sp11_Status_PUSH_StatusCode) */

void zx_sp11_Status_PUSH_StatusCode(struct zx_sp11_Status_s* x, struct zx_sp11_StatusCode_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->StatusCode->gg.g;
  x->StatusCode = z;
}

/* FUNC(zx_sp11_Status_REV_StatusCode) */

void zx_sp11_Status_REV_StatusCode(struct zx_sp11_Status_s* x)
{
  struct zx_sp11_StatusCode_s* nxt;
  struct zx_sp11_StatusCode_s* y;
  if (!x) return;
  y = x->StatusCode;
  if (!y) return;
  x->StatusCode = 0;
  while (y) {
    nxt = (struct zx_sp11_StatusCode_s*)y->gg.g.n;
    y->gg.g.n = &x->StatusCode->gg.g;
    x->StatusCode = y;
    y = nxt;
  }
}

/* FUNC(zx_sp11_Status_PUT_StatusCode) */

void zx_sp11_Status_PUT_StatusCode(struct zx_sp11_Status_s* x, int n, struct zx_sp11_StatusCode_s* z)
{
  struct zx_sp11_StatusCode_s* y;
  if (!x || !z) return;
  y = x->StatusCode;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->StatusCode = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_sp11_StatusCode_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_sp11_Status_ADD_StatusCode) */

void zx_sp11_Status_ADD_StatusCode(struct zx_sp11_Status_s* x, int n, struct zx_sp11_StatusCode_s* z)
{
  struct zx_sp11_StatusCode_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->StatusCode->gg.g;
    x->StatusCode = z;
    return;
  case -1:
    y = x->StatusCode;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_sp11_StatusCode_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->StatusCode; n > 1 && y; --n, y = (struct zx_sp11_StatusCode_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_sp11_Status_DEL_StatusCode) */

void zx_sp11_Status_DEL_StatusCode(struct zx_sp11_Status_s* x, int n)
{
  struct zx_sp11_StatusCode_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->StatusCode = (struct zx_sp11_StatusCode_s*)x->StatusCode->gg.g.n;
    return;
  case -1:
    y = (struct zx_sp11_StatusCode_s*)x->StatusCode;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_sp11_StatusCode_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->StatusCode; n > 1 && y->gg.g.n; --n, y = (struct zx_sp11_StatusCode_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_sp11_Status_NUM_StatusMessage) */

int zx_sp11_Status_NUM_StatusMessage(struct zx_sp11_Status_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->StatusMessage; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_sp11_Status_GET_StatusMessage) */

struct zx_elem_s* zx_sp11_Status_GET_StatusMessage(struct zx_sp11_Status_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->StatusMessage; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_sp11_Status_POP_StatusMessage) */

struct zx_elem_s* zx_sp11_Status_POP_StatusMessage(struct zx_sp11_Status_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->StatusMessage;
  if (y)
    x->StatusMessage = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_sp11_Status_PUSH_StatusMessage) */

void zx_sp11_Status_PUSH_StatusMessage(struct zx_sp11_Status_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->StatusMessage->g;
  x->StatusMessage = z;
}

/* FUNC(zx_sp11_Status_REV_StatusMessage) */

void zx_sp11_Status_REV_StatusMessage(struct zx_sp11_Status_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->StatusMessage;
  if (!y) return;
  x->StatusMessage = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->StatusMessage->g;
    x->StatusMessage = y;
    y = nxt;
  }
}

/* FUNC(zx_sp11_Status_PUT_StatusMessage) */

void zx_sp11_Status_PUT_StatusMessage(struct zx_sp11_Status_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->StatusMessage;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->StatusMessage = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_sp11_Status_ADD_StatusMessage) */

void zx_sp11_Status_ADD_StatusMessage(struct zx_sp11_Status_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->StatusMessage->g;
    x->StatusMessage = z;
    return;
  case -1:
    y = x->StatusMessage;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->StatusMessage; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_sp11_Status_DEL_StatusMessage) */

void zx_sp11_Status_DEL_StatusMessage(struct zx_sp11_Status_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->StatusMessage = (struct zx_elem_s*)x->StatusMessage->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->StatusMessage;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->StatusMessage; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_sp11_Status_NUM_StatusDetail) */

int zx_sp11_Status_NUM_StatusDetail(struct zx_sp11_Status_s* x)
{
  struct zx_sp11_StatusDetail_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->StatusDetail; y; ++n, y = (struct zx_sp11_StatusDetail_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_sp11_Status_GET_StatusDetail) */

struct zx_sp11_StatusDetail_s* zx_sp11_Status_GET_StatusDetail(struct zx_sp11_Status_s* x, int n)
{
  struct zx_sp11_StatusDetail_s* y;
  if (!x) return 0;
  for (y = x->StatusDetail; n>=0 && y; --n, y = (struct zx_sp11_StatusDetail_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_sp11_Status_POP_StatusDetail) */

struct zx_sp11_StatusDetail_s* zx_sp11_Status_POP_StatusDetail(struct zx_sp11_Status_s* x)
{
  struct zx_sp11_StatusDetail_s* y;
  if (!x) return 0;
  y = x->StatusDetail;
  if (y)
    x->StatusDetail = (struct zx_sp11_StatusDetail_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_sp11_Status_PUSH_StatusDetail) */

void zx_sp11_Status_PUSH_StatusDetail(struct zx_sp11_Status_s* x, struct zx_sp11_StatusDetail_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->StatusDetail->gg.g;
  x->StatusDetail = z;
}

/* FUNC(zx_sp11_Status_REV_StatusDetail) */

void zx_sp11_Status_REV_StatusDetail(struct zx_sp11_Status_s* x)
{
  struct zx_sp11_StatusDetail_s* nxt;
  struct zx_sp11_StatusDetail_s* y;
  if (!x) return;
  y = x->StatusDetail;
  if (!y) return;
  x->StatusDetail = 0;
  while (y) {
    nxt = (struct zx_sp11_StatusDetail_s*)y->gg.g.n;
    y->gg.g.n = &x->StatusDetail->gg.g;
    x->StatusDetail = y;
    y = nxt;
  }
}

/* FUNC(zx_sp11_Status_PUT_StatusDetail) */

void zx_sp11_Status_PUT_StatusDetail(struct zx_sp11_Status_s* x, int n, struct zx_sp11_StatusDetail_s* z)
{
  struct zx_sp11_StatusDetail_s* y;
  if (!x || !z) return;
  y = x->StatusDetail;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->StatusDetail = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_sp11_StatusDetail_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_sp11_Status_ADD_StatusDetail) */

void zx_sp11_Status_ADD_StatusDetail(struct zx_sp11_Status_s* x, int n, struct zx_sp11_StatusDetail_s* z)
{
  struct zx_sp11_StatusDetail_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->StatusDetail->gg.g;
    x->StatusDetail = z;
    return;
  case -1:
    y = x->StatusDetail;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_sp11_StatusDetail_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->StatusDetail; n > 1 && y; --n, y = (struct zx_sp11_StatusDetail_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_sp11_Status_DEL_StatusDetail) */

void zx_sp11_Status_DEL_StatusDetail(struct zx_sp11_Status_s* x, int n)
{
  struct zx_sp11_StatusDetail_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->StatusDetail = (struct zx_sp11_StatusDetail_s*)x->StatusDetail->gg.g.n;
    return;
  case -1:
    y = (struct zx_sp11_StatusDetail_s*)x->StatusDetail;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_sp11_StatusDetail_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->StatusDetail; n > 1 && y->gg.g.n; --n, y = (struct zx_sp11_StatusDetail_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif








#ifdef ZX_ENA_GETPUT

/* FUNC(zx_sp11_StatusCode_NUM_StatusCode) */

int zx_sp11_StatusCode_NUM_StatusCode(struct zx_sp11_StatusCode_s* x)
{
  struct zx_sp11_StatusCode_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->StatusCode; y; ++n, y = (struct zx_sp11_StatusCode_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_sp11_StatusCode_GET_StatusCode) */

struct zx_sp11_StatusCode_s* zx_sp11_StatusCode_GET_StatusCode(struct zx_sp11_StatusCode_s* x, int n)
{
  struct zx_sp11_StatusCode_s* y;
  if (!x) return 0;
  for (y = x->StatusCode; n>=0 && y; --n, y = (struct zx_sp11_StatusCode_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_sp11_StatusCode_POP_StatusCode) */

struct zx_sp11_StatusCode_s* zx_sp11_StatusCode_POP_StatusCode(struct zx_sp11_StatusCode_s* x)
{
  struct zx_sp11_StatusCode_s* y;
  if (!x) return 0;
  y = x->StatusCode;
  if (y)
    x->StatusCode = (struct zx_sp11_StatusCode_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_sp11_StatusCode_PUSH_StatusCode) */

void zx_sp11_StatusCode_PUSH_StatusCode(struct zx_sp11_StatusCode_s* x, struct zx_sp11_StatusCode_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->StatusCode->gg.g;
  x->StatusCode = z;
}

/* FUNC(zx_sp11_StatusCode_REV_StatusCode) */

void zx_sp11_StatusCode_REV_StatusCode(struct zx_sp11_StatusCode_s* x)
{
  struct zx_sp11_StatusCode_s* nxt;
  struct zx_sp11_StatusCode_s* y;
  if (!x) return;
  y = x->StatusCode;
  if (!y) return;
  x->StatusCode = 0;
  while (y) {
    nxt = (struct zx_sp11_StatusCode_s*)y->gg.g.n;
    y->gg.g.n = &x->StatusCode->gg.g;
    x->StatusCode = y;
    y = nxt;
  }
}

/* FUNC(zx_sp11_StatusCode_PUT_StatusCode) */

void zx_sp11_StatusCode_PUT_StatusCode(struct zx_sp11_StatusCode_s* x, int n, struct zx_sp11_StatusCode_s* z)
{
  struct zx_sp11_StatusCode_s* y;
  if (!x || !z) return;
  y = x->StatusCode;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->StatusCode = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_sp11_StatusCode_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_sp11_StatusCode_ADD_StatusCode) */

void zx_sp11_StatusCode_ADD_StatusCode(struct zx_sp11_StatusCode_s* x, int n, struct zx_sp11_StatusCode_s* z)
{
  struct zx_sp11_StatusCode_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->StatusCode->gg.g;
    x->StatusCode = z;
    return;
  case -1:
    y = x->StatusCode;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_sp11_StatusCode_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->StatusCode; n > 1 && y; --n, y = (struct zx_sp11_StatusCode_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_sp11_StatusCode_DEL_StatusCode) */

void zx_sp11_StatusCode_DEL_StatusCode(struct zx_sp11_StatusCode_s* x, int n)
{
  struct zx_sp11_StatusCode_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->StatusCode = (struct zx_sp11_StatusCode_s*)x->StatusCode->gg.g.n;
    return;
  case -1:
    y = (struct zx_sp11_StatusCode_s*)x->StatusCode;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_sp11_StatusCode_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->StatusCode; n > 1 && y->gg.g.n; --n, y = (struct zx_sp11_StatusCode_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif

/* FUNC(zx_sp11_StatusCode_GET_Value) */
struct zx_str* zx_sp11_StatusCode_GET_Value(struct zx_sp11_StatusCode_s* x) { return x->Value; }
/* FUNC(zx_sp11_StatusCode_PUT_Value) */
void zx_sp11_StatusCode_PUT_Value(struct zx_sp11_StatusCode_s* x, struct zx_str* y) { x->Value = y; }












#ifdef ZX_ENA_GETPUT

/* FUNC(zx_sp11_SubjectQuery_NUM_Subject) */

int zx_sp11_SubjectQuery_NUM_Subject(struct zx_sp11_SubjectQuery_s* x)
{
  struct zx_sa11_Subject_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Subject; y; ++n, y = (struct zx_sa11_Subject_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_sp11_SubjectQuery_GET_Subject) */

struct zx_sa11_Subject_s* zx_sp11_SubjectQuery_GET_Subject(struct zx_sp11_SubjectQuery_s* x, int n)
{
  struct zx_sa11_Subject_s* y;
  if (!x) return 0;
  for (y = x->Subject; n>=0 && y; --n, y = (struct zx_sa11_Subject_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_sp11_SubjectQuery_POP_Subject) */

struct zx_sa11_Subject_s* zx_sp11_SubjectQuery_POP_Subject(struct zx_sp11_SubjectQuery_s* x)
{
  struct zx_sa11_Subject_s* y;
  if (!x) return 0;
  y = x->Subject;
  if (y)
    x->Subject = (struct zx_sa11_Subject_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_sp11_SubjectQuery_PUSH_Subject) */

void zx_sp11_SubjectQuery_PUSH_Subject(struct zx_sp11_SubjectQuery_s* x, struct zx_sa11_Subject_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Subject->gg.g;
  x->Subject = z;
}

/* FUNC(zx_sp11_SubjectQuery_REV_Subject) */

void zx_sp11_SubjectQuery_REV_Subject(struct zx_sp11_SubjectQuery_s* x)
{
  struct zx_sa11_Subject_s* nxt;
  struct zx_sa11_Subject_s* y;
  if (!x) return;
  y = x->Subject;
  if (!y) return;
  x->Subject = 0;
  while (y) {
    nxt = (struct zx_sa11_Subject_s*)y->gg.g.n;
    y->gg.g.n = &x->Subject->gg.g;
    x->Subject = y;
    y = nxt;
  }
}

/* FUNC(zx_sp11_SubjectQuery_PUT_Subject) */

void zx_sp11_SubjectQuery_PUT_Subject(struct zx_sp11_SubjectQuery_s* x, int n, struct zx_sa11_Subject_s* z)
{
  struct zx_sa11_Subject_s* y;
  if (!x || !z) return;
  y = x->Subject;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Subject = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_sa11_Subject_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_sp11_SubjectQuery_ADD_Subject) */

void zx_sp11_SubjectQuery_ADD_Subject(struct zx_sp11_SubjectQuery_s* x, int n, struct zx_sa11_Subject_s* z)
{
  struct zx_sa11_Subject_s* y;
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
    for (; y->gg.g.n; y = (struct zx_sa11_Subject_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Subject; n > 1 && y; --n, y = (struct zx_sa11_Subject_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_sp11_SubjectQuery_DEL_Subject) */

void zx_sp11_SubjectQuery_DEL_Subject(struct zx_sp11_SubjectQuery_s* x, int n)
{
  struct zx_sa11_Subject_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Subject = (struct zx_sa11_Subject_s*)x->Subject->gg.g.n;
    return;
  case -1:
    y = (struct zx_sa11_Subject_s*)x->Subject;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_sa11_Subject_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Subject; n > 1 && y->gg.g.n; --n, y = (struct zx_sa11_Subject_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif






/* EOF -- c/zx-sp11-getput.c */