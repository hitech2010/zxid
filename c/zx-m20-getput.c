/* c/zx-m20-getput.c - WARNING: This file was automatically generated. DO NOT EDIT!
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
#include "c/zx-m20-data.h"

/* FUNC(zx_m20_AdditionalMetaLocation_GET_namespace) */
struct zx_str* zx_m20_AdditionalMetaLocation_GET_namespace(struct zx_m20_AdditionalMetaLocation_s* x) { return x->namespace; }
/* FUNC(zx_m20_AdditionalMetaLocation_PUT_namespace) */
void zx_m20_AdditionalMetaLocation_PUT_namespace(struct zx_m20_AdditionalMetaLocation_s* x, struct zx_str* y) { x->namespace = y; }







#ifdef ZX_ENA_GETPUT

/* FUNC(zx_m20_AffiliationDescriptor_NUM_AffiliateMember) */

int zx_m20_AffiliationDescriptor_NUM_AffiliateMember(struct zx_m20_AffiliationDescriptor_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->AffiliateMember; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_m20_AffiliationDescriptor_GET_AffiliateMember) */

struct zx_elem_s* zx_m20_AffiliationDescriptor_GET_AffiliateMember(struct zx_m20_AffiliationDescriptor_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->AffiliateMember; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_m20_AffiliationDescriptor_POP_AffiliateMember) */

struct zx_elem_s* zx_m20_AffiliationDescriptor_POP_AffiliateMember(struct zx_m20_AffiliationDescriptor_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->AffiliateMember;
  if (y)
    x->AffiliateMember = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_m20_AffiliationDescriptor_PUSH_AffiliateMember) */

void zx_m20_AffiliationDescriptor_PUSH_AffiliateMember(struct zx_m20_AffiliationDescriptor_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->AffiliateMember->g;
  x->AffiliateMember = z;
}

/* FUNC(zx_m20_AffiliationDescriptor_REV_AffiliateMember) */

void zx_m20_AffiliationDescriptor_REV_AffiliateMember(struct zx_m20_AffiliationDescriptor_s* x)
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

/* FUNC(zx_m20_AffiliationDescriptor_PUT_AffiliateMember) */

void zx_m20_AffiliationDescriptor_PUT_AffiliateMember(struct zx_m20_AffiliationDescriptor_s* x, int n, struct zx_elem_s* z)
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

/* FUNC(zx_m20_AffiliationDescriptor_ADD_AffiliateMember) */

void zx_m20_AffiliationDescriptor_ADD_AffiliateMember(struct zx_m20_AffiliationDescriptor_s* x, int n, struct zx_elem_s* z)
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

/* FUNC(zx_m20_AffiliationDescriptor_DEL_AffiliateMember) */

void zx_m20_AffiliationDescriptor_DEL_AffiliateMember(struct zx_m20_AffiliationDescriptor_s* x, int n)
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

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_m20_AffiliationDescriptor_NUM_Extension) */

int zx_m20_AffiliationDescriptor_NUM_Extension(struct zx_m20_AffiliationDescriptor_s* x)
{
  struct zx_m20_Extension_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Extension; y; ++n, y = (struct zx_m20_Extension_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_m20_AffiliationDescriptor_GET_Extension) */

struct zx_m20_Extension_s* zx_m20_AffiliationDescriptor_GET_Extension(struct zx_m20_AffiliationDescriptor_s* x, int n)
{
  struct zx_m20_Extension_s* y;
  if (!x) return 0;
  for (y = x->Extension; n>=0 && y; --n, y = (struct zx_m20_Extension_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_m20_AffiliationDescriptor_POP_Extension) */

struct zx_m20_Extension_s* zx_m20_AffiliationDescriptor_POP_Extension(struct zx_m20_AffiliationDescriptor_s* x)
{
  struct zx_m20_Extension_s* y;
  if (!x) return 0;
  y = x->Extension;
  if (y)
    x->Extension = (struct zx_m20_Extension_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_m20_AffiliationDescriptor_PUSH_Extension) */

void zx_m20_AffiliationDescriptor_PUSH_Extension(struct zx_m20_AffiliationDescriptor_s* x, struct zx_m20_Extension_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Extension->gg.g;
  x->Extension = z;
}

/* FUNC(zx_m20_AffiliationDescriptor_REV_Extension) */

void zx_m20_AffiliationDescriptor_REV_Extension(struct zx_m20_AffiliationDescriptor_s* x)
{
  struct zx_m20_Extension_s* nxt;
  struct zx_m20_Extension_s* y;
  if (!x) return;
  y = x->Extension;
  if (!y) return;
  x->Extension = 0;
  while (y) {
    nxt = (struct zx_m20_Extension_s*)y->gg.g.n;
    y->gg.g.n = &x->Extension->gg.g;
    x->Extension = y;
    y = nxt;
  }
}

/* FUNC(zx_m20_AffiliationDescriptor_PUT_Extension) */

void zx_m20_AffiliationDescriptor_PUT_Extension(struct zx_m20_AffiliationDescriptor_s* x, int n, struct zx_m20_Extension_s* z)
{
  struct zx_m20_Extension_s* y;
  if (!x || !z) return;
  y = x->Extension;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Extension = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_m20_Extension_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_m20_AffiliationDescriptor_ADD_Extension) */

void zx_m20_AffiliationDescriptor_ADD_Extension(struct zx_m20_AffiliationDescriptor_s* x, int n, struct zx_m20_Extension_s* z)
{
  struct zx_m20_Extension_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->Extension->gg.g;
    x->Extension = z;
    return;
  case -1:
    y = x->Extension;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_m20_Extension_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Extension; n > 1 && y; --n, y = (struct zx_m20_Extension_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_m20_AffiliationDescriptor_DEL_Extension) */

void zx_m20_AffiliationDescriptor_DEL_Extension(struct zx_m20_AffiliationDescriptor_s* x, int n)
{
  struct zx_m20_Extension_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Extension = (struct zx_m20_Extension_s*)x->Extension->gg.g.n;
    return;
  case -1:
    y = (struct zx_m20_Extension_s*)x->Extension;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_m20_Extension_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Extension; n > 1 && y->gg.g.n; --n, y = (struct zx_m20_Extension_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_m20_AffiliationDescriptor_NUM_KeyDescriptor) */

int zx_m20_AffiliationDescriptor_NUM_KeyDescriptor(struct zx_m20_AffiliationDescriptor_s* x)
{
  struct zx_m20_KeyDescriptor_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->KeyDescriptor; y; ++n, y = (struct zx_m20_KeyDescriptor_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_m20_AffiliationDescriptor_GET_KeyDescriptor) */

struct zx_m20_KeyDescriptor_s* zx_m20_AffiliationDescriptor_GET_KeyDescriptor(struct zx_m20_AffiliationDescriptor_s* x, int n)
{
  struct zx_m20_KeyDescriptor_s* y;
  if (!x) return 0;
  for (y = x->KeyDescriptor; n>=0 && y; --n, y = (struct zx_m20_KeyDescriptor_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_m20_AffiliationDescriptor_POP_KeyDescriptor) */

struct zx_m20_KeyDescriptor_s* zx_m20_AffiliationDescriptor_POP_KeyDescriptor(struct zx_m20_AffiliationDescriptor_s* x)
{
  struct zx_m20_KeyDescriptor_s* y;
  if (!x) return 0;
  y = x->KeyDescriptor;
  if (y)
    x->KeyDescriptor = (struct zx_m20_KeyDescriptor_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_m20_AffiliationDescriptor_PUSH_KeyDescriptor) */

void zx_m20_AffiliationDescriptor_PUSH_KeyDescriptor(struct zx_m20_AffiliationDescriptor_s* x, struct zx_m20_KeyDescriptor_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->KeyDescriptor->gg.g;
  x->KeyDescriptor = z;
}

/* FUNC(zx_m20_AffiliationDescriptor_REV_KeyDescriptor) */

void zx_m20_AffiliationDescriptor_REV_KeyDescriptor(struct zx_m20_AffiliationDescriptor_s* x)
{
  struct zx_m20_KeyDescriptor_s* nxt;
  struct zx_m20_KeyDescriptor_s* y;
  if (!x) return;
  y = x->KeyDescriptor;
  if (!y) return;
  x->KeyDescriptor = 0;
  while (y) {
    nxt = (struct zx_m20_KeyDescriptor_s*)y->gg.g.n;
    y->gg.g.n = &x->KeyDescriptor->gg.g;
    x->KeyDescriptor = y;
    y = nxt;
  }
}

/* FUNC(zx_m20_AffiliationDescriptor_PUT_KeyDescriptor) */

void zx_m20_AffiliationDescriptor_PUT_KeyDescriptor(struct zx_m20_AffiliationDescriptor_s* x, int n, struct zx_m20_KeyDescriptor_s* z)
{
  struct zx_m20_KeyDescriptor_s* y;
  if (!x || !z) return;
  y = x->KeyDescriptor;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->KeyDescriptor = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_m20_KeyDescriptor_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_m20_AffiliationDescriptor_ADD_KeyDescriptor) */

void zx_m20_AffiliationDescriptor_ADD_KeyDescriptor(struct zx_m20_AffiliationDescriptor_s* x, int n, struct zx_m20_KeyDescriptor_s* z)
{
  struct zx_m20_KeyDescriptor_s* y;
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
    for (; y->gg.g.n; y = (struct zx_m20_KeyDescriptor_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->KeyDescriptor; n > 1 && y; --n, y = (struct zx_m20_KeyDescriptor_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_m20_AffiliationDescriptor_DEL_KeyDescriptor) */

void zx_m20_AffiliationDescriptor_DEL_KeyDescriptor(struct zx_m20_AffiliationDescriptor_s* x, int n)
{
  struct zx_m20_KeyDescriptor_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->KeyDescriptor = (struct zx_m20_KeyDescriptor_s*)x->KeyDescriptor->gg.g.n;
    return;
  case -1:
    y = (struct zx_m20_KeyDescriptor_s*)x->KeyDescriptor;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_m20_KeyDescriptor_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->KeyDescriptor; n > 1 && y->gg.g.n; --n, y = (struct zx_m20_KeyDescriptor_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_m20_AffiliationDescriptor_NUM_Signature) */

int zx_m20_AffiliationDescriptor_NUM_Signature(struct zx_m20_AffiliationDescriptor_s* x)
{
  struct zx_ds_Signature_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Signature; y; ++n, y = (struct zx_ds_Signature_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_m20_AffiliationDescriptor_GET_Signature) */

struct zx_ds_Signature_s* zx_m20_AffiliationDescriptor_GET_Signature(struct zx_m20_AffiliationDescriptor_s* x, int n)
{
  struct zx_ds_Signature_s* y;
  if (!x) return 0;
  for (y = x->Signature; n>=0 && y; --n, y = (struct zx_ds_Signature_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_m20_AffiliationDescriptor_POP_Signature) */

struct zx_ds_Signature_s* zx_m20_AffiliationDescriptor_POP_Signature(struct zx_m20_AffiliationDescriptor_s* x)
{
  struct zx_ds_Signature_s* y;
  if (!x) return 0;
  y = x->Signature;
  if (y)
    x->Signature = (struct zx_ds_Signature_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_m20_AffiliationDescriptor_PUSH_Signature) */

void zx_m20_AffiliationDescriptor_PUSH_Signature(struct zx_m20_AffiliationDescriptor_s* x, struct zx_ds_Signature_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Signature->gg.g;
  x->Signature = z;
}

/* FUNC(zx_m20_AffiliationDescriptor_REV_Signature) */

void zx_m20_AffiliationDescriptor_REV_Signature(struct zx_m20_AffiliationDescriptor_s* x)
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

/* FUNC(zx_m20_AffiliationDescriptor_PUT_Signature) */

void zx_m20_AffiliationDescriptor_PUT_Signature(struct zx_m20_AffiliationDescriptor_s* x, int n, struct zx_ds_Signature_s* z)
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

/* FUNC(zx_m20_AffiliationDescriptor_ADD_Signature) */

void zx_m20_AffiliationDescriptor_ADD_Signature(struct zx_m20_AffiliationDescriptor_s* x, int n, struct zx_ds_Signature_s* z)
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

/* FUNC(zx_m20_AffiliationDescriptor_DEL_Signature) */

void zx_m20_AffiliationDescriptor_DEL_Signature(struct zx_m20_AffiliationDescriptor_s* x, int n)
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

/* FUNC(zx_m20_AffiliationDescriptor_GET_affiliationOwnerID) */
struct zx_str* zx_m20_AffiliationDescriptor_GET_affiliationOwnerID(struct zx_m20_AffiliationDescriptor_s* x) { return x->affiliationOwnerID; }
/* FUNC(zx_m20_AffiliationDescriptor_PUT_affiliationOwnerID) */
void zx_m20_AffiliationDescriptor_PUT_affiliationOwnerID(struct zx_m20_AffiliationDescriptor_s* x, struct zx_str* y) { x->affiliationOwnerID = y; }
/* FUNC(zx_m20_AffiliationDescriptor_GET_validUntil) */
struct zx_str* zx_m20_AffiliationDescriptor_GET_validUntil(struct zx_m20_AffiliationDescriptor_s* x) { return x->validUntil; }
/* FUNC(zx_m20_AffiliationDescriptor_PUT_validUntil) */
void zx_m20_AffiliationDescriptor_PUT_validUntil(struct zx_m20_AffiliationDescriptor_s* x, struct zx_str* y) { x->validUntil = y; }
/* FUNC(zx_m20_AffiliationDescriptor_GET_cacheDuration) */
struct zx_str* zx_m20_AffiliationDescriptor_GET_cacheDuration(struct zx_m20_AffiliationDescriptor_s* x) { return x->cacheDuration; }
/* FUNC(zx_m20_AffiliationDescriptor_PUT_cacheDuration) */
void zx_m20_AffiliationDescriptor_PUT_cacheDuration(struct zx_m20_AffiliationDescriptor_s* x, struct zx_str* y) { x->cacheDuration = y; }
/* FUNC(zx_m20_AffiliationDescriptor_GET_id) */
struct zx_str* zx_m20_AffiliationDescriptor_GET_id(struct zx_m20_AffiliationDescriptor_s* x) { return x->id; }
/* FUNC(zx_m20_AffiliationDescriptor_PUT_id) */
void zx_m20_AffiliationDescriptor_PUT_id(struct zx_m20_AffiliationDescriptor_s* x, struct zx_str* y) { x->id = y; }





/* FUNC(zx_m20_AssertionConsumerServiceURL_GET_id) */
struct zx_str* zx_m20_AssertionConsumerServiceURL_GET_id(struct zx_m20_AssertionConsumerServiceURL_s* x) { return x->id; }
/* FUNC(zx_m20_AssertionConsumerServiceURL_PUT_id) */
void zx_m20_AssertionConsumerServiceURL_PUT_id(struct zx_m20_AssertionConsumerServiceURL_s* x, struct zx_str* y) { x->id = y; }
/* FUNC(zx_m20_AssertionConsumerServiceURL_GET_isDefault) */
struct zx_str* zx_m20_AssertionConsumerServiceURL_GET_isDefault(struct zx_m20_AssertionConsumerServiceURL_s* x) { return x->isDefault; }
/* FUNC(zx_m20_AssertionConsumerServiceURL_PUT_isDefault) */
void zx_m20_AssertionConsumerServiceURL_PUT_isDefault(struct zx_m20_AssertionConsumerServiceURL_s* x, struct zx_str* y) { x->isDefault = y; }







#ifdef ZX_ENA_GETPUT

/* FUNC(zx_m20_ContactPerson_NUM_Company) */

int zx_m20_ContactPerson_NUM_Company(struct zx_m20_ContactPerson_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Company; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_m20_ContactPerson_GET_Company) */

struct zx_elem_s* zx_m20_ContactPerson_GET_Company(struct zx_m20_ContactPerson_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->Company; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_m20_ContactPerson_POP_Company) */

struct zx_elem_s* zx_m20_ContactPerson_POP_Company(struct zx_m20_ContactPerson_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->Company;
  if (y)
    x->Company = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_m20_ContactPerson_PUSH_Company) */

void zx_m20_ContactPerson_PUSH_Company(struct zx_m20_ContactPerson_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->Company->g;
  x->Company = z;
}

/* FUNC(zx_m20_ContactPerson_REV_Company) */

void zx_m20_ContactPerson_REV_Company(struct zx_m20_ContactPerson_s* x)
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

/* FUNC(zx_m20_ContactPerson_PUT_Company) */

void zx_m20_ContactPerson_PUT_Company(struct zx_m20_ContactPerson_s* x, int n, struct zx_elem_s* z)
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

/* FUNC(zx_m20_ContactPerson_ADD_Company) */

void zx_m20_ContactPerson_ADD_Company(struct zx_m20_ContactPerson_s* x, int n, struct zx_elem_s* z)
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

/* FUNC(zx_m20_ContactPerson_DEL_Company) */

void zx_m20_ContactPerson_DEL_Company(struct zx_m20_ContactPerson_s* x, int n)
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

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_m20_ContactPerson_NUM_GivenName) */

int zx_m20_ContactPerson_NUM_GivenName(struct zx_m20_ContactPerson_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->GivenName; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_m20_ContactPerson_GET_GivenName) */

struct zx_elem_s* zx_m20_ContactPerson_GET_GivenName(struct zx_m20_ContactPerson_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->GivenName; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_m20_ContactPerson_POP_GivenName) */

struct zx_elem_s* zx_m20_ContactPerson_POP_GivenName(struct zx_m20_ContactPerson_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->GivenName;
  if (y)
    x->GivenName = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_m20_ContactPerson_PUSH_GivenName) */

void zx_m20_ContactPerson_PUSH_GivenName(struct zx_m20_ContactPerson_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->GivenName->g;
  x->GivenName = z;
}

/* FUNC(zx_m20_ContactPerson_REV_GivenName) */

void zx_m20_ContactPerson_REV_GivenName(struct zx_m20_ContactPerson_s* x)
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

/* FUNC(zx_m20_ContactPerson_PUT_GivenName) */

void zx_m20_ContactPerson_PUT_GivenName(struct zx_m20_ContactPerson_s* x, int n, struct zx_elem_s* z)
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

/* FUNC(zx_m20_ContactPerson_ADD_GivenName) */

void zx_m20_ContactPerson_ADD_GivenName(struct zx_m20_ContactPerson_s* x, int n, struct zx_elem_s* z)
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

/* FUNC(zx_m20_ContactPerson_DEL_GivenName) */

void zx_m20_ContactPerson_DEL_GivenName(struct zx_m20_ContactPerson_s* x, int n)
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

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_m20_ContactPerson_NUM_SurName) */

int zx_m20_ContactPerson_NUM_SurName(struct zx_m20_ContactPerson_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->SurName; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_m20_ContactPerson_GET_SurName) */

struct zx_elem_s* zx_m20_ContactPerson_GET_SurName(struct zx_m20_ContactPerson_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->SurName; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_m20_ContactPerson_POP_SurName) */

struct zx_elem_s* zx_m20_ContactPerson_POP_SurName(struct zx_m20_ContactPerson_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->SurName;
  if (y)
    x->SurName = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_m20_ContactPerson_PUSH_SurName) */

void zx_m20_ContactPerson_PUSH_SurName(struct zx_m20_ContactPerson_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->SurName->g;
  x->SurName = z;
}

/* FUNC(zx_m20_ContactPerson_REV_SurName) */

void zx_m20_ContactPerson_REV_SurName(struct zx_m20_ContactPerson_s* x)
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

/* FUNC(zx_m20_ContactPerson_PUT_SurName) */

void zx_m20_ContactPerson_PUT_SurName(struct zx_m20_ContactPerson_s* x, int n, struct zx_elem_s* z)
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

/* FUNC(zx_m20_ContactPerson_ADD_SurName) */

void zx_m20_ContactPerson_ADD_SurName(struct zx_m20_ContactPerson_s* x, int n, struct zx_elem_s* z)
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

/* FUNC(zx_m20_ContactPerson_DEL_SurName) */

void zx_m20_ContactPerson_DEL_SurName(struct zx_m20_ContactPerson_s* x, int n)
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

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_m20_ContactPerson_NUM_EmailAddress) */

int zx_m20_ContactPerson_NUM_EmailAddress(struct zx_m20_ContactPerson_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->EmailAddress; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_m20_ContactPerson_GET_EmailAddress) */

struct zx_elem_s* zx_m20_ContactPerson_GET_EmailAddress(struct zx_m20_ContactPerson_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->EmailAddress; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_m20_ContactPerson_POP_EmailAddress) */

struct zx_elem_s* zx_m20_ContactPerson_POP_EmailAddress(struct zx_m20_ContactPerson_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->EmailAddress;
  if (y)
    x->EmailAddress = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_m20_ContactPerson_PUSH_EmailAddress) */

void zx_m20_ContactPerson_PUSH_EmailAddress(struct zx_m20_ContactPerson_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->EmailAddress->g;
  x->EmailAddress = z;
}

/* FUNC(zx_m20_ContactPerson_REV_EmailAddress) */

void zx_m20_ContactPerson_REV_EmailAddress(struct zx_m20_ContactPerson_s* x)
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

/* FUNC(zx_m20_ContactPerson_PUT_EmailAddress) */

void zx_m20_ContactPerson_PUT_EmailAddress(struct zx_m20_ContactPerson_s* x, int n, struct zx_elem_s* z)
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

/* FUNC(zx_m20_ContactPerson_ADD_EmailAddress) */

void zx_m20_ContactPerson_ADD_EmailAddress(struct zx_m20_ContactPerson_s* x, int n, struct zx_elem_s* z)
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

/* FUNC(zx_m20_ContactPerson_DEL_EmailAddress) */

void zx_m20_ContactPerson_DEL_EmailAddress(struct zx_m20_ContactPerson_s* x, int n)
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

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_m20_ContactPerson_NUM_TelephoneNumber) */

int zx_m20_ContactPerson_NUM_TelephoneNumber(struct zx_m20_ContactPerson_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->TelephoneNumber; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_m20_ContactPerson_GET_TelephoneNumber) */

struct zx_elem_s* zx_m20_ContactPerson_GET_TelephoneNumber(struct zx_m20_ContactPerson_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->TelephoneNumber; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_m20_ContactPerson_POP_TelephoneNumber) */

struct zx_elem_s* zx_m20_ContactPerson_POP_TelephoneNumber(struct zx_m20_ContactPerson_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->TelephoneNumber;
  if (y)
    x->TelephoneNumber = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_m20_ContactPerson_PUSH_TelephoneNumber) */

void zx_m20_ContactPerson_PUSH_TelephoneNumber(struct zx_m20_ContactPerson_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->TelephoneNumber->g;
  x->TelephoneNumber = z;
}

/* FUNC(zx_m20_ContactPerson_REV_TelephoneNumber) */

void zx_m20_ContactPerson_REV_TelephoneNumber(struct zx_m20_ContactPerson_s* x)
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

/* FUNC(zx_m20_ContactPerson_PUT_TelephoneNumber) */

void zx_m20_ContactPerson_PUT_TelephoneNumber(struct zx_m20_ContactPerson_s* x, int n, struct zx_elem_s* z)
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

/* FUNC(zx_m20_ContactPerson_ADD_TelephoneNumber) */

void zx_m20_ContactPerson_ADD_TelephoneNumber(struct zx_m20_ContactPerson_s* x, int n, struct zx_elem_s* z)
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

/* FUNC(zx_m20_ContactPerson_DEL_TelephoneNumber) */

void zx_m20_ContactPerson_DEL_TelephoneNumber(struct zx_m20_ContactPerson_s* x, int n)
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

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_m20_ContactPerson_NUM_Extension) */

int zx_m20_ContactPerson_NUM_Extension(struct zx_m20_ContactPerson_s* x)
{
  struct zx_m20_Extension_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Extension; y; ++n, y = (struct zx_m20_Extension_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_m20_ContactPerson_GET_Extension) */

struct zx_m20_Extension_s* zx_m20_ContactPerson_GET_Extension(struct zx_m20_ContactPerson_s* x, int n)
{
  struct zx_m20_Extension_s* y;
  if (!x) return 0;
  for (y = x->Extension; n>=0 && y; --n, y = (struct zx_m20_Extension_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_m20_ContactPerson_POP_Extension) */

struct zx_m20_Extension_s* zx_m20_ContactPerson_POP_Extension(struct zx_m20_ContactPerson_s* x)
{
  struct zx_m20_Extension_s* y;
  if (!x) return 0;
  y = x->Extension;
  if (y)
    x->Extension = (struct zx_m20_Extension_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_m20_ContactPerson_PUSH_Extension) */

void zx_m20_ContactPerson_PUSH_Extension(struct zx_m20_ContactPerson_s* x, struct zx_m20_Extension_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Extension->gg.g;
  x->Extension = z;
}

/* FUNC(zx_m20_ContactPerson_REV_Extension) */

void zx_m20_ContactPerson_REV_Extension(struct zx_m20_ContactPerson_s* x)
{
  struct zx_m20_Extension_s* nxt;
  struct zx_m20_Extension_s* y;
  if (!x) return;
  y = x->Extension;
  if (!y) return;
  x->Extension = 0;
  while (y) {
    nxt = (struct zx_m20_Extension_s*)y->gg.g.n;
    y->gg.g.n = &x->Extension->gg.g;
    x->Extension = y;
    y = nxt;
  }
}

/* FUNC(zx_m20_ContactPerson_PUT_Extension) */

void zx_m20_ContactPerson_PUT_Extension(struct zx_m20_ContactPerson_s* x, int n, struct zx_m20_Extension_s* z)
{
  struct zx_m20_Extension_s* y;
  if (!x || !z) return;
  y = x->Extension;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Extension = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_m20_Extension_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_m20_ContactPerson_ADD_Extension) */

void zx_m20_ContactPerson_ADD_Extension(struct zx_m20_ContactPerson_s* x, int n, struct zx_m20_Extension_s* z)
{
  struct zx_m20_Extension_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->Extension->gg.g;
    x->Extension = z;
    return;
  case -1:
    y = x->Extension;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_m20_Extension_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Extension; n > 1 && y; --n, y = (struct zx_m20_Extension_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_m20_ContactPerson_DEL_Extension) */

void zx_m20_ContactPerson_DEL_Extension(struct zx_m20_ContactPerson_s* x, int n)
{
  struct zx_m20_Extension_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Extension = (struct zx_m20_Extension_s*)x->Extension->gg.g.n;
    return;
  case -1:
    y = (struct zx_m20_Extension_s*)x->Extension;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_m20_Extension_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Extension; n > 1 && y->gg.g.n; --n, y = (struct zx_m20_Extension_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif

/* FUNC(zx_m20_ContactPerson_GET_libertyPrincipalIdentifier) */
struct zx_str* zx_m20_ContactPerson_GET_libertyPrincipalIdentifier(struct zx_m20_ContactPerson_s* x) { return x->libertyPrincipalIdentifier; }
/* FUNC(zx_m20_ContactPerson_PUT_libertyPrincipalIdentifier) */
void zx_m20_ContactPerson_PUT_libertyPrincipalIdentifier(struct zx_m20_ContactPerson_s* x, struct zx_str* y) { x->libertyPrincipalIdentifier = y; }
/* FUNC(zx_m20_ContactPerson_GET_contactType) */
struct zx_str* zx_m20_ContactPerson_GET_contactType(struct zx_m20_ContactPerson_s* x) { return x->contactType; }
/* FUNC(zx_m20_ContactPerson_PUT_contactType) */
void zx_m20_ContactPerson_PUT_contactType(struct zx_m20_ContactPerson_s* x, struct zx_str* y) { x->contactType = y; }







#ifdef ZX_ENA_GETPUT

/* FUNC(zx_m20_EntitiesDescriptor_NUM_EntityDescriptor) */

int zx_m20_EntitiesDescriptor_NUM_EntityDescriptor(struct zx_m20_EntitiesDescriptor_s* x)
{
  struct zx_m20_EntityDescriptor_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->EntityDescriptor; y; ++n, y = (struct zx_m20_EntityDescriptor_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_m20_EntitiesDescriptor_GET_EntityDescriptor) */

struct zx_m20_EntityDescriptor_s* zx_m20_EntitiesDescriptor_GET_EntityDescriptor(struct zx_m20_EntitiesDescriptor_s* x, int n)
{
  struct zx_m20_EntityDescriptor_s* y;
  if (!x) return 0;
  for (y = x->EntityDescriptor; n>=0 && y; --n, y = (struct zx_m20_EntityDescriptor_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_m20_EntitiesDescriptor_POP_EntityDescriptor) */

struct zx_m20_EntityDescriptor_s* zx_m20_EntitiesDescriptor_POP_EntityDescriptor(struct zx_m20_EntitiesDescriptor_s* x)
{
  struct zx_m20_EntityDescriptor_s* y;
  if (!x) return 0;
  y = x->EntityDescriptor;
  if (y)
    x->EntityDescriptor = (struct zx_m20_EntityDescriptor_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_m20_EntitiesDescriptor_PUSH_EntityDescriptor) */

void zx_m20_EntitiesDescriptor_PUSH_EntityDescriptor(struct zx_m20_EntitiesDescriptor_s* x, struct zx_m20_EntityDescriptor_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->EntityDescriptor->gg.g;
  x->EntityDescriptor = z;
}

/* FUNC(zx_m20_EntitiesDescriptor_REV_EntityDescriptor) */

void zx_m20_EntitiesDescriptor_REV_EntityDescriptor(struct zx_m20_EntitiesDescriptor_s* x)
{
  struct zx_m20_EntityDescriptor_s* nxt;
  struct zx_m20_EntityDescriptor_s* y;
  if (!x) return;
  y = x->EntityDescriptor;
  if (!y) return;
  x->EntityDescriptor = 0;
  while (y) {
    nxt = (struct zx_m20_EntityDescriptor_s*)y->gg.g.n;
    y->gg.g.n = &x->EntityDescriptor->gg.g;
    x->EntityDescriptor = y;
    y = nxt;
  }
}

/* FUNC(zx_m20_EntitiesDescriptor_PUT_EntityDescriptor) */

void zx_m20_EntitiesDescriptor_PUT_EntityDescriptor(struct zx_m20_EntitiesDescriptor_s* x, int n, struct zx_m20_EntityDescriptor_s* z)
{
  struct zx_m20_EntityDescriptor_s* y;
  if (!x || !z) return;
  y = x->EntityDescriptor;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->EntityDescriptor = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_m20_EntityDescriptor_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_m20_EntitiesDescriptor_ADD_EntityDescriptor) */

void zx_m20_EntitiesDescriptor_ADD_EntityDescriptor(struct zx_m20_EntitiesDescriptor_s* x, int n, struct zx_m20_EntityDescriptor_s* z)
{
  struct zx_m20_EntityDescriptor_s* y;
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
    for (; y->gg.g.n; y = (struct zx_m20_EntityDescriptor_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->EntityDescriptor; n > 1 && y; --n, y = (struct zx_m20_EntityDescriptor_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_m20_EntitiesDescriptor_DEL_EntityDescriptor) */

void zx_m20_EntitiesDescriptor_DEL_EntityDescriptor(struct zx_m20_EntitiesDescriptor_s* x, int n)
{
  struct zx_m20_EntityDescriptor_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->EntityDescriptor = (struct zx_m20_EntityDescriptor_s*)x->EntityDescriptor->gg.g.n;
    return;
  case -1:
    y = (struct zx_m20_EntityDescriptor_s*)x->EntityDescriptor;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_m20_EntityDescriptor_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->EntityDescriptor; n > 1 && y->gg.g.n; --n, y = (struct zx_m20_EntityDescriptor_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif








#ifdef ZX_ENA_GETPUT

/* FUNC(zx_m20_EntityDescriptor_NUM_IDPDescriptor) */

int zx_m20_EntityDescriptor_NUM_IDPDescriptor(struct zx_m20_EntityDescriptor_s* x)
{
  struct zx_m20_IDPDescriptor_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->IDPDescriptor; y; ++n, y = (struct zx_m20_IDPDescriptor_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_m20_EntityDescriptor_GET_IDPDescriptor) */

struct zx_m20_IDPDescriptor_s* zx_m20_EntityDescriptor_GET_IDPDescriptor(struct zx_m20_EntityDescriptor_s* x, int n)
{
  struct zx_m20_IDPDescriptor_s* y;
  if (!x) return 0;
  for (y = x->IDPDescriptor; n>=0 && y; --n, y = (struct zx_m20_IDPDescriptor_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_m20_EntityDescriptor_POP_IDPDescriptor) */

struct zx_m20_IDPDescriptor_s* zx_m20_EntityDescriptor_POP_IDPDescriptor(struct zx_m20_EntityDescriptor_s* x)
{
  struct zx_m20_IDPDescriptor_s* y;
  if (!x) return 0;
  y = x->IDPDescriptor;
  if (y)
    x->IDPDescriptor = (struct zx_m20_IDPDescriptor_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_m20_EntityDescriptor_PUSH_IDPDescriptor) */

void zx_m20_EntityDescriptor_PUSH_IDPDescriptor(struct zx_m20_EntityDescriptor_s* x, struct zx_m20_IDPDescriptor_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->IDPDescriptor->gg.g;
  x->IDPDescriptor = z;
}

/* FUNC(zx_m20_EntityDescriptor_REV_IDPDescriptor) */

void zx_m20_EntityDescriptor_REV_IDPDescriptor(struct zx_m20_EntityDescriptor_s* x)
{
  struct zx_m20_IDPDescriptor_s* nxt;
  struct zx_m20_IDPDescriptor_s* y;
  if (!x) return;
  y = x->IDPDescriptor;
  if (!y) return;
  x->IDPDescriptor = 0;
  while (y) {
    nxt = (struct zx_m20_IDPDescriptor_s*)y->gg.g.n;
    y->gg.g.n = &x->IDPDescriptor->gg.g;
    x->IDPDescriptor = y;
    y = nxt;
  }
}

/* FUNC(zx_m20_EntityDescriptor_PUT_IDPDescriptor) */

void zx_m20_EntityDescriptor_PUT_IDPDescriptor(struct zx_m20_EntityDescriptor_s* x, int n, struct zx_m20_IDPDescriptor_s* z)
{
  struct zx_m20_IDPDescriptor_s* y;
  if (!x || !z) return;
  y = x->IDPDescriptor;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->IDPDescriptor = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_m20_IDPDescriptor_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_m20_EntityDescriptor_ADD_IDPDescriptor) */

void zx_m20_EntityDescriptor_ADD_IDPDescriptor(struct zx_m20_EntityDescriptor_s* x, int n, struct zx_m20_IDPDescriptor_s* z)
{
  struct zx_m20_IDPDescriptor_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->IDPDescriptor->gg.g;
    x->IDPDescriptor = z;
    return;
  case -1:
    y = x->IDPDescriptor;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_m20_IDPDescriptor_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->IDPDescriptor; n > 1 && y; --n, y = (struct zx_m20_IDPDescriptor_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_m20_EntityDescriptor_DEL_IDPDescriptor) */

void zx_m20_EntityDescriptor_DEL_IDPDescriptor(struct zx_m20_EntityDescriptor_s* x, int n)
{
  struct zx_m20_IDPDescriptor_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->IDPDescriptor = (struct zx_m20_IDPDescriptor_s*)x->IDPDescriptor->gg.g.n;
    return;
  case -1:
    y = (struct zx_m20_IDPDescriptor_s*)x->IDPDescriptor;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_m20_IDPDescriptor_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->IDPDescriptor; n > 1 && y->gg.g.n; --n, y = (struct zx_m20_IDPDescriptor_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_m20_EntityDescriptor_NUM_SPDescriptor) */

int zx_m20_EntityDescriptor_NUM_SPDescriptor(struct zx_m20_EntityDescriptor_s* x)
{
  struct zx_m20_SPDescriptor_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->SPDescriptor; y; ++n, y = (struct zx_m20_SPDescriptor_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_m20_EntityDescriptor_GET_SPDescriptor) */

struct zx_m20_SPDescriptor_s* zx_m20_EntityDescriptor_GET_SPDescriptor(struct zx_m20_EntityDescriptor_s* x, int n)
{
  struct zx_m20_SPDescriptor_s* y;
  if (!x) return 0;
  for (y = x->SPDescriptor; n>=0 && y; --n, y = (struct zx_m20_SPDescriptor_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_m20_EntityDescriptor_POP_SPDescriptor) */

struct zx_m20_SPDescriptor_s* zx_m20_EntityDescriptor_POP_SPDescriptor(struct zx_m20_EntityDescriptor_s* x)
{
  struct zx_m20_SPDescriptor_s* y;
  if (!x) return 0;
  y = x->SPDescriptor;
  if (y)
    x->SPDescriptor = (struct zx_m20_SPDescriptor_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_m20_EntityDescriptor_PUSH_SPDescriptor) */

void zx_m20_EntityDescriptor_PUSH_SPDescriptor(struct zx_m20_EntityDescriptor_s* x, struct zx_m20_SPDescriptor_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->SPDescriptor->gg.g;
  x->SPDescriptor = z;
}

/* FUNC(zx_m20_EntityDescriptor_REV_SPDescriptor) */

void zx_m20_EntityDescriptor_REV_SPDescriptor(struct zx_m20_EntityDescriptor_s* x)
{
  struct zx_m20_SPDescriptor_s* nxt;
  struct zx_m20_SPDescriptor_s* y;
  if (!x) return;
  y = x->SPDescriptor;
  if (!y) return;
  x->SPDescriptor = 0;
  while (y) {
    nxt = (struct zx_m20_SPDescriptor_s*)y->gg.g.n;
    y->gg.g.n = &x->SPDescriptor->gg.g;
    x->SPDescriptor = y;
    y = nxt;
  }
}

/* FUNC(zx_m20_EntityDescriptor_PUT_SPDescriptor) */

void zx_m20_EntityDescriptor_PUT_SPDescriptor(struct zx_m20_EntityDescriptor_s* x, int n, struct zx_m20_SPDescriptor_s* z)
{
  struct zx_m20_SPDescriptor_s* y;
  if (!x || !z) return;
  y = x->SPDescriptor;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->SPDescriptor = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_m20_SPDescriptor_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_m20_EntityDescriptor_ADD_SPDescriptor) */

void zx_m20_EntityDescriptor_ADD_SPDescriptor(struct zx_m20_EntityDescriptor_s* x, int n, struct zx_m20_SPDescriptor_s* z)
{
  struct zx_m20_SPDescriptor_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->SPDescriptor->gg.g;
    x->SPDescriptor = z;
    return;
  case -1:
    y = x->SPDescriptor;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_m20_SPDescriptor_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->SPDescriptor; n > 1 && y; --n, y = (struct zx_m20_SPDescriptor_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_m20_EntityDescriptor_DEL_SPDescriptor) */

void zx_m20_EntityDescriptor_DEL_SPDescriptor(struct zx_m20_EntityDescriptor_s* x, int n)
{
  struct zx_m20_SPDescriptor_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->SPDescriptor = (struct zx_m20_SPDescriptor_s*)x->SPDescriptor->gg.g.n;
    return;
  case -1:
    y = (struct zx_m20_SPDescriptor_s*)x->SPDescriptor;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_m20_SPDescriptor_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->SPDescriptor; n > 1 && y->gg.g.n; --n, y = (struct zx_m20_SPDescriptor_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_m20_EntityDescriptor_NUM_AffiliationDescriptor) */

int zx_m20_EntityDescriptor_NUM_AffiliationDescriptor(struct zx_m20_EntityDescriptor_s* x)
{
  struct zx_m20_AffiliationDescriptor_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->AffiliationDescriptor; y; ++n, y = (struct zx_m20_AffiliationDescriptor_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_m20_EntityDescriptor_GET_AffiliationDescriptor) */

struct zx_m20_AffiliationDescriptor_s* zx_m20_EntityDescriptor_GET_AffiliationDescriptor(struct zx_m20_EntityDescriptor_s* x, int n)
{
  struct zx_m20_AffiliationDescriptor_s* y;
  if (!x) return 0;
  for (y = x->AffiliationDescriptor; n>=0 && y; --n, y = (struct zx_m20_AffiliationDescriptor_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_m20_EntityDescriptor_POP_AffiliationDescriptor) */

struct zx_m20_AffiliationDescriptor_s* zx_m20_EntityDescriptor_POP_AffiliationDescriptor(struct zx_m20_EntityDescriptor_s* x)
{
  struct zx_m20_AffiliationDescriptor_s* y;
  if (!x) return 0;
  y = x->AffiliationDescriptor;
  if (y)
    x->AffiliationDescriptor = (struct zx_m20_AffiliationDescriptor_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_m20_EntityDescriptor_PUSH_AffiliationDescriptor) */

void zx_m20_EntityDescriptor_PUSH_AffiliationDescriptor(struct zx_m20_EntityDescriptor_s* x, struct zx_m20_AffiliationDescriptor_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->AffiliationDescriptor->gg.g;
  x->AffiliationDescriptor = z;
}

/* FUNC(zx_m20_EntityDescriptor_REV_AffiliationDescriptor) */

void zx_m20_EntityDescriptor_REV_AffiliationDescriptor(struct zx_m20_EntityDescriptor_s* x)
{
  struct zx_m20_AffiliationDescriptor_s* nxt;
  struct zx_m20_AffiliationDescriptor_s* y;
  if (!x) return;
  y = x->AffiliationDescriptor;
  if (!y) return;
  x->AffiliationDescriptor = 0;
  while (y) {
    nxt = (struct zx_m20_AffiliationDescriptor_s*)y->gg.g.n;
    y->gg.g.n = &x->AffiliationDescriptor->gg.g;
    x->AffiliationDescriptor = y;
    y = nxt;
  }
}

/* FUNC(zx_m20_EntityDescriptor_PUT_AffiliationDescriptor) */

void zx_m20_EntityDescriptor_PUT_AffiliationDescriptor(struct zx_m20_EntityDescriptor_s* x, int n, struct zx_m20_AffiliationDescriptor_s* z)
{
  struct zx_m20_AffiliationDescriptor_s* y;
  if (!x || !z) return;
  y = x->AffiliationDescriptor;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->AffiliationDescriptor = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_m20_AffiliationDescriptor_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_m20_EntityDescriptor_ADD_AffiliationDescriptor) */

void zx_m20_EntityDescriptor_ADD_AffiliationDescriptor(struct zx_m20_EntityDescriptor_s* x, int n, struct zx_m20_AffiliationDescriptor_s* z)
{
  struct zx_m20_AffiliationDescriptor_s* y;
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
    for (; y->gg.g.n; y = (struct zx_m20_AffiliationDescriptor_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->AffiliationDescriptor; n > 1 && y; --n, y = (struct zx_m20_AffiliationDescriptor_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_m20_EntityDescriptor_DEL_AffiliationDescriptor) */

void zx_m20_EntityDescriptor_DEL_AffiliationDescriptor(struct zx_m20_EntityDescriptor_s* x, int n)
{
  struct zx_m20_AffiliationDescriptor_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->AffiliationDescriptor = (struct zx_m20_AffiliationDescriptor_s*)x->AffiliationDescriptor->gg.g.n;
    return;
  case -1:
    y = (struct zx_m20_AffiliationDescriptor_s*)x->AffiliationDescriptor;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_m20_AffiliationDescriptor_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->AffiliationDescriptor; n > 1 && y->gg.g.n; --n, y = (struct zx_m20_AffiliationDescriptor_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_m20_EntityDescriptor_NUM_ContactPerson) */

int zx_m20_EntityDescriptor_NUM_ContactPerson(struct zx_m20_EntityDescriptor_s* x)
{
  struct zx_m20_ContactPerson_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->ContactPerson; y; ++n, y = (struct zx_m20_ContactPerson_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_m20_EntityDescriptor_GET_ContactPerson) */

struct zx_m20_ContactPerson_s* zx_m20_EntityDescriptor_GET_ContactPerson(struct zx_m20_EntityDescriptor_s* x, int n)
{
  struct zx_m20_ContactPerson_s* y;
  if (!x) return 0;
  for (y = x->ContactPerson; n>=0 && y; --n, y = (struct zx_m20_ContactPerson_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_m20_EntityDescriptor_POP_ContactPerson) */

struct zx_m20_ContactPerson_s* zx_m20_EntityDescriptor_POP_ContactPerson(struct zx_m20_EntityDescriptor_s* x)
{
  struct zx_m20_ContactPerson_s* y;
  if (!x) return 0;
  y = x->ContactPerson;
  if (y)
    x->ContactPerson = (struct zx_m20_ContactPerson_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_m20_EntityDescriptor_PUSH_ContactPerson) */

void zx_m20_EntityDescriptor_PUSH_ContactPerson(struct zx_m20_EntityDescriptor_s* x, struct zx_m20_ContactPerson_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->ContactPerson->gg.g;
  x->ContactPerson = z;
}

/* FUNC(zx_m20_EntityDescriptor_REV_ContactPerson) */

void zx_m20_EntityDescriptor_REV_ContactPerson(struct zx_m20_EntityDescriptor_s* x)
{
  struct zx_m20_ContactPerson_s* nxt;
  struct zx_m20_ContactPerson_s* y;
  if (!x) return;
  y = x->ContactPerson;
  if (!y) return;
  x->ContactPerson = 0;
  while (y) {
    nxt = (struct zx_m20_ContactPerson_s*)y->gg.g.n;
    y->gg.g.n = &x->ContactPerson->gg.g;
    x->ContactPerson = y;
    y = nxt;
  }
}

/* FUNC(zx_m20_EntityDescriptor_PUT_ContactPerson) */

void zx_m20_EntityDescriptor_PUT_ContactPerson(struct zx_m20_EntityDescriptor_s* x, int n, struct zx_m20_ContactPerson_s* z)
{
  struct zx_m20_ContactPerson_s* y;
  if (!x || !z) return;
  y = x->ContactPerson;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->ContactPerson = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_m20_ContactPerson_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_m20_EntityDescriptor_ADD_ContactPerson) */

void zx_m20_EntityDescriptor_ADD_ContactPerson(struct zx_m20_EntityDescriptor_s* x, int n, struct zx_m20_ContactPerson_s* z)
{
  struct zx_m20_ContactPerson_s* y;
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
    for (; y->gg.g.n; y = (struct zx_m20_ContactPerson_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->ContactPerson; n > 1 && y; --n, y = (struct zx_m20_ContactPerson_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_m20_EntityDescriptor_DEL_ContactPerson) */

void zx_m20_EntityDescriptor_DEL_ContactPerson(struct zx_m20_EntityDescriptor_s* x, int n)
{
  struct zx_m20_ContactPerson_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->ContactPerson = (struct zx_m20_ContactPerson_s*)x->ContactPerson->gg.g.n;
    return;
  case -1:
    y = (struct zx_m20_ContactPerson_s*)x->ContactPerson;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_m20_ContactPerson_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->ContactPerson; n > 1 && y->gg.g.n; --n, y = (struct zx_m20_ContactPerson_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_m20_EntityDescriptor_NUM_Organization) */

int zx_m20_EntityDescriptor_NUM_Organization(struct zx_m20_EntityDescriptor_s* x)
{
  struct zx_m20_Organization_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Organization; y; ++n, y = (struct zx_m20_Organization_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_m20_EntityDescriptor_GET_Organization) */

struct zx_m20_Organization_s* zx_m20_EntityDescriptor_GET_Organization(struct zx_m20_EntityDescriptor_s* x, int n)
{
  struct zx_m20_Organization_s* y;
  if (!x) return 0;
  for (y = x->Organization; n>=0 && y; --n, y = (struct zx_m20_Organization_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_m20_EntityDescriptor_POP_Organization) */

struct zx_m20_Organization_s* zx_m20_EntityDescriptor_POP_Organization(struct zx_m20_EntityDescriptor_s* x)
{
  struct zx_m20_Organization_s* y;
  if (!x) return 0;
  y = x->Organization;
  if (y)
    x->Organization = (struct zx_m20_Organization_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_m20_EntityDescriptor_PUSH_Organization) */

void zx_m20_EntityDescriptor_PUSH_Organization(struct zx_m20_EntityDescriptor_s* x, struct zx_m20_Organization_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Organization->gg.g;
  x->Organization = z;
}

/* FUNC(zx_m20_EntityDescriptor_REV_Organization) */

void zx_m20_EntityDescriptor_REV_Organization(struct zx_m20_EntityDescriptor_s* x)
{
  struct zx_m20_Organization_s* nxt;
  struct zx_m20_Organization_s* y;
  if (!x) return;
  y = x->Organization;
  if (!y) return;
  x->Organization = 0;
  while (y) {
    nxt = (struct zx_m20_Organization_s*)y->gg.g.n;
    y->gg.g.n = &x->Organization->gg.g;
    x->Organization = y;
    y = nxt;
  }
}

/* FUNC(zx_m20_EntityDescriptor_PUT_Organization) */

void zx_m20_EntityDescriptor_PUT_Organization(struct zx_m20_EntityDescriptor_s* x, int n, struct zx_m20_Organization_s* z)
{
  struct zx_m20_Organization_s* y;
  if (!x || !z) return;
  y = x->Organization;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Organization = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_m20_Organization_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_m20_EntityDescriptor_ADD_Organization) */

void zx_m20_EntityDescriptor_ADD_Organization(struct zx_m20_EntityDescriptor_s* x, int n, struct zx_m20_Organization_s* z)
{
  struct zx_m20_Organization_s* y;
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
    for (; y->gg.g.n; y = (struct zx_m20_Organization_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Organization; n > 1 && y; --n, y = (struct zx_m20_Organization_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_m20_EntityDescriptor_DEL_Organization) */

void zx_m20_EntityDescriptor_DEL_Organization(struct zx_m20_EntityDescriptor_s* x, int n)
{
  struct zx_m20_Organization_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Organization = (struct zx_m20_Organization_s*)x->Organization->gg.g.n;
    return;
  case -1:
    y = (struct zx_m20_Organization_s*)x->Organization;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_m20_Organization_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Organization; n > 1 && y->gg.g.n; --n, y = (struct zx_m20_Organization_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_m20_EntityDescriptor_NUM_Extension) */

int zx_m20_EntityDescriptor_NUM_Extension(struct zx_m20_EntityDescriptor_s* x)
{
  struct zx_m20_Extension_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Extension; y; ++n, y = (struct zx_m20_Extension_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_m20_EntityDescriptor_GET_Extension) */

struct zx_m20_Extension_s* zx_m20_EntityDescriptor_GET_Extension(struct zx_m20_EntityDescriptor_s* x, int n)
{
  struct zx_m20_Extension_s* y;
  if (!x) return 0;
  for (y = x->Extension; n>=0 && y; --n, y = (struct zx_m20_Extension_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_m20_EntityDescriptor_POP_Extension) */

struct zx_m20_Extension_s* zx_m20_EntityDescriptor_POP_Extension(struct zx_m20_EntityDescriptor_s* x)
{
  struct zx_m20_Extension_s* y;
  if (!x) return 0;
  y = x->Extension;
  if (y)
    x->Extension = (struct zx_m20_Extension_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_m20_EntityDescriptor_PUSH_Extension) */

void zx_m20_EntityDescriptor_PUSH_Extension(struct zx_m20_EntityDescriptor_s* x, struct zx_m20_Extension_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Extension->gg.g;
  x->Extension = z;
}

/* FUNC(zx_m20_EntityDescriptor_REV_Extension) */

void zx_m20_EntityDescriptor_REV_Extension(struct zx_m20_EntityDescriptor_s* x)
{
  struct zx_m20_Extension_s* nxt;
  struct zx_m20_Extension_s* y;
  if (!x) return;
  y = x->Extension;
  if (!y) return;
  x->Extension = 0;
  while (y) {
    nxt = (struct zx_m20_Extension_s*)y->gg.g.n;
    y->gg.g.n = &x->Extension->gg.g;
    x->Extension = y;
    y = nxt;
  }
}

/* FUNC(zx_m20_EntityDescriptor_PUT_Extension) */

void zx_m20_EntityDescriptor_PUT_Extension(struct zx_m20_EntityDescriptor_s* x, int n, struct zx_m20_Extension_s* z)
{
  struct zx_m20_Extension_s* y;
  if (!x || !z) return;
  y = x->Extension;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Extension = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_m20_Extension_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_m20_EntityDescriptor_ADD_Extension) */

void zx_m20_EntityDescriptor_ADD_Extension(struct zx_m20_EntityDescriptor_s* x, int n, struct zx_m20_Extension_s* z)
{
  struct zx_m20_Extension_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->Extension->gg.g;
    x->Extension = z;
    return;
  case -1:
    y = x->Extension;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_m20_Extension_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Extension; n > 1 && y; --n, y = (struct zx_m20_Extension_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_m20_EntityDescriptor_DEL_Extension) */

void zx_m20_EntityDescriptor_DEL_Extension(struct zx_m20_EntityDescriptor_s* x, int n)
{
  struct zx_m20_Extension_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Extension = (struct zx_m20_Extension_s*)x->Extension->gg.g.n;
    return;
  case -1:
    y = (struct zx_m20_Extension_s*)x->Extension;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_m20_Extension_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Extension; n > 1 && y->gg.g.n; --n, y = (struct zx_m20_Extension_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_m20_EntityDescriptor_NUM_Signature) */

int zx_m20_EntityDescriptor_NUM_Signature(struct zx_m20_EntityDescriptor_s* x)
{
  struct zx_ds_Signature_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Signature; y; ++n, y = (struct zx_ds_Signature_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_m20_EntityDescriptor_GET_Signature) */

struct zx_ds_Signature_s* zx_m20_EntityDescriptor_GET_Signature(struct zx_m20_EntityDescriptor_s* x, int n)
{
  struct zx_ds_Signature_s* y;
  if (!x) return 0;
  for (y = x->Signature; n>=0 && y; --n, y = (struct zx_ds_Signature_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_m20_EntityDescriptor_POP_Signature) */

struct zx_ds_Signature_s* zx_m20_EntityDescriptor_POP_Signature(struct zx_m20_EntityDescriptor_s* x)
{
  struct zx_ds_Signature_s* y;
  if (!x) return 0;
  y = x->Signature;
  if (y)
    x->Signature = (struct zx_ds_Signature_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_m20_EntityDescriptor_PUSH_Signature) */

void zx_m20_EntityDescriptor_PUSH_Signature(struct zx_m20_EntityDescriptor_s* x, struct zx_ds_Signature_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Signature->gg.g;
  x->Signature = z;
}

/* FUNC(zx_m20_EntityDescriptor_REV_Signature) */

void zx_m20_EntityDescriptor_REV_Signature(struct zx_m20_EntityDescriptor_s* x)
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

/* FUNC(zx_m20_EntityDescriptor_PUT_Signature) */

void zx_m20_EntityDescriptor_PUT_Signature(struct zx_m20_EntityDescriptor_s* x, int n, struct zx_ds_Signature_s* z)
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

/* FUNC(zx_m20_EntityDescriptor_ADD_Signature) */

void zx_m20_EntityDescriptor_ADD_Signature(struct zx_m20_EntityDescriptor_s* x, int n, struct zx_ds_Signature_s* z)
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

/* FUNC(zx_m20_EntityDescriptor_DEL_Signature) */

void zx_m20_EntityDescriptor_DEL_Signature(struct zx_m20_EntityDescriptor_s* x, int n)
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

/* FUNC(zx_m20_EntityDescriptor_GET_providerID) */
struct zx_str* zx_m20_EntityDescriptor_GET_providerID(struct zx_m20_EntityDescriptor_s* x) { return x->providerID; }
/* FUNC(zx_m20_EntityDescriptor_PUT_providerID) */
void zx_m20_EntityDescriptor_PUT_providerID(struct zx_m20_EntityDescriptor_s* x, struct zx_str* y) { x->providerID = y; }
/* FUNC(zx_m20_EntityDescriptor_GET_id) */
struct zx_str* zx_m20_EntityDescriptor_GET_id(struct zx_m20_EntityDescriptor_s* x) { return x->id; }
/* FUNC(zx_m20_EntityDescriptor_PUT_id) */
void zx_m20_EntityDescriptor_PUT_id(struct zx_m20_EntityDescriptor_s* x, struct zx_str* y) { x->id = y; }
/* FUNC(zx_m20_EntityDescriptor_GET_validUntil) */
struct zx_str* zx_m20_EntityDescriptor_GET_validUntil(struct zx_m20_EntityDescriptor_s* x) { return x->validUntil; }
/* FUNC(zx_m20_EntityDescriptor_PUT_validUntil) */
void zx_m20_EntityDescriptor_PUT_validUntil(struct zx_m20_EntityDescriptor_s* x, struct zx_str* y) { x->validUntil = y; }
/* FUNC(zx_m20_EntityDescriptor_GET_cacheDuration) */
struct zx_str* zx_m20_EntityDescriptor_GET_cacheDuration(struct zx_m20_EntityDescriptor_s* x) { return x->cacheDuration; }
/* FUNC(zx_m20_EntityDescriptor_PUT_cacheDuration) */
void zx_m20_EntityDescriptor_PUT_cacheDuration(struct zx_m20_EntityDescriptor_s* x, struct zx_str* y) { x->cacheDuration = y; }












#ifdef ZX_ENA_GETPUT

/* FUNC(zx_m20_IDPDescriptor_NUM_KeyDescriptor) */

int zx_m20_IDPDescriptor_NUM_KeyDescriptor(struct zx_m20_IDPDescriptor_s* x)
{
  struct zx_m20_KeyDescriptor_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->KeyDescriptor; y; ++n, y = (struct zx_m20_KeyDescriptor_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_m20_IDPDescriptor_GET_KeyDescriptor) */

struct zx_m20_KeyDescriptor_s* zx_m20_IDPDescriptor_GET_KeyDescriptor(struct zx_m20_IDPDescriptor_s* x, int n)
{
  struct zx_m20_KeyDescriptor_s* y;
  if (!x) return 0;
  for (y = x->KeyDescriptor; n>=0 && y; --n, y = (struct zx_m20_KeyDescriptor_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_m20_IDPDescriptor_POP_KeyDescriptor) */

struct zx_m20_KeyDescriptor_s* zx_m20_IDPDescriptor_POP_KeyDescriptor(struct zx_m20_IDPDescriptor_s* x)
{
  struct zx_m20_KeyDescriptor_s* y;
  if (!x) return 0;
  y = x->KeyDescriptor;
  if (y)
    x->KeyDescriptor = (struct zx_m20_KeyDescriptor_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_m20_IDPDescriptor_PUSH_KeyDescriptor) */

void zx_m20_IDPDescriptor_PUSH_KeyDescriptor(struct zx_m20_IDPDescriptor_s* x, struct zx_m20_KeyDescriptor_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->KeyDescriptor->gg.g;
  x->KeyDescriptor = z;
}

/* FUNC(zx_m20_IDPDescriptor_REV_KeyDescriptor) */

void zx_m20_IDPDescriptor_REV_KeyDescriptor(struct zx_m20_IDPDescriptor_s* x)
{
  struct zx_m20_KeyDescriptor_s* nxt;
  struct zx_m20_KeyDescriptor_s* y;
  if (!x) return;
  y = x->KeyDescriptor;
  if (!y) return;
  x->KeyDescriptor = 0;
  while (y) {
    nxt = (struct zx_m20_KeyDescriptor_s*)y->gg.g.n;
    y->gg.g.n = &x->KeyDescriptor->gg.g;
    x->KeyDescriptor = y;
    y = nxt;
  }
}

/* FUNC(zx_m20_IDPDescriptor_PUT_KeyDescriptor) */

void zx_m20_IDPDescriptor_PUT_KeyDescriptor(struct zx_m20_IDPDescriptor_s* x, int n, struct zx_m20_KeyDescriptor_s* z)
{
  struct zx_m20_KeyDescriptor_s* y;
  if (!x || !z) return;
  y = x->KeyDescriptor;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->KeyDescriptor = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_m20_KeyDescriptor_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_m20_IDPDescriptor_ADD_KeyDescriptor) */

void zx_m20_IDPDescriptor_ADD_KeyDescriptor(struct zx_m20_IDPDescriptor_s* x, int n, struct zx_m20_KeyDescriptor_s* z)
{
  struct zx_m20_KeyDescriptor_s* y;
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
    for (; y->gg.g.n; y = (struct zx_m20_KeyDescriptor_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->KeyDescriptor; n > 1 && y; --n, y = (struct zx_m20_KeyDescriptor_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_m20_IDPDescriptor_DEL_KeyDescriptor) */

void zx_m20_IDPDescriptor_DEL_KeyDescriptor(struct zx_m20_IDPDescriptor_s* x, int n)
{
  struct zx_m20_KeyDescriptor_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->KeyDescriptor = (struct zx_m20_KeyDescriptor_s*)x->KeyDescriptor->gg.g.n;
    return;
  case -1:
    y = (struct zx_m20_KeyDescriptor_s*)x->KeyDescriptor;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_m20_KeyDescriptor_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->KeyDescriptor; n > 1 && y->gg.g.n; --n, y = (struct zx_m20_KeyDescriptor_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_m20_IDPDescriptor_NUM_SoapEndpoint) */

int zx_m20_IDPDescriptor_NUM_SoapEndpoint(struct zx_m20_IDPDescriptor_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->SoapEndpoint; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_m20_IDPDescriptor_GET_SoapEndpoint) */

struct zx_elem_s* zx_m20_IDPDescriptor_GET_SoapEndpoint(struct zx_m20_IDPDescriptor_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->SoapEndpoint; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_m20_IDPDescriptor_POP_SoapEndpoint) */

struct zx_elem_s* zx_m20_IDPDescriptor_POP_SoapEndpoint(struct zx_m20_IDPDescriptor_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->SoapEndpoint;
  if (y)
    x->SoapEndpoint = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_m20_IDPDescriptor_PUSH_SoapEndpoint) */

void zx_m20_IDPDescriptor_PUSH_SoapEndpoint(struct zx_m20_IDPDescriptor_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->SoapEndpoint->g;
  x->SoapEndpoint = z;
}

/* FUNC(zx_m20_IDPDescriptor_REV_SoapEndpoint) */

void zx_m20_IDPDescriptor_REV_SoapEndpoint(struct zx_m20_IDPDescriptor_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->SoapEndpoint;
  if (!y) return;
  x->SoapEndpoint = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->SoapEndpoint->g;
    x->SoapEndpoint = y;
    y = nxt;
  }
}

/* FUNC(zx_m20_IDPDescriptor_PUT_SoapEndpoint) */

void zx_m20_IDPDescriptor_PUT_SoapEndpoint(struct zx_m20_IDPDescriptor_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->SoapEndpoint;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->SoapEndpoint = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_m20_IDPDescriptor_ADD_SoapEndpoint) */

void zx_m20_IDPDescriptor_ADD_SoapEndpoint(struct zx_m20_IDPDescriptor_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->SoapEndpoint->g;
    x->SoapEndpoint = z;
    return;
  case -1:
    y = x->SoapEndpoint;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->SoapEndpoint; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_m20_IDPDescriptor_DEL_SoapEndpoint) */

void zx_m20_IDPDescriptor_DEL_SoapEndpoint(struct zx_m20_IDPDescriptor_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->SoapEndpoint = (struct zx_elem_s*)x->SoapEndpoint->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->SoapEndpoint;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->SoapEndpoint; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_m20_IDPDescriptor_NUM_SingleLogoutServiceURL) */

int zx_m20_IDPDescriptor_NUM_SingleLogoutServiceURL(struct zx_m20_IDPDescriptor_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->SingleLogoutServiceURL; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_m20_IDPDescriptor_GET_SingleLogoutServiceURL) */

struct zx_elem_s* zx_m20_IDPDescriptor_GET_SingleLogoutServiceURL(struct zx_m20_IDPDescriptor_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->SingleLogoutServiceURL; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_m20_IDPDescriptor_POP_SingleLogoutServiceURL) */

struct zx_elem_s* zx_m20_IDPDescriptor_POP_SingleLogoutServiceURL(struct zx_m20_IDPDescriptor_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->SingleLogoutServiceURL;
  if (y)
    x->SingleLogoutServiceURL = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_m20_IDPDescriptor_PUSH_SingleLogoutServiceURL) */

void zx_m20_IDPDescriptor_PUSH_SingleLogoutServiceURL(struct zx_m20_IDPDescriptor_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->SingleLogoutServiceURL->g;
  x->SingleLogoutServiceURL = z;
}

/* FUNC(zx_m20_IDPDescriptor_REV_SingleLogoutServiceURL) */

void zx_m20_IDPDescriptor_REV_SingleLogoutServiceURL(struct zx_m20_IDPDescriptor_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->SingleLogoutServiceURL;
  if (!y) return;
  x->SingleLogoutServiceURL = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->SingleLogoutServiceURL->g;
    x->SingleLogoutServiceURL = y;
    y = nxt;
  }
}

/* FUNC(zx_m20_IDPDescriptor_PUT_SingleLogoutServiceURL) */

void zx_m20_IDPDescriptor_PUT_SingleLogoutServiceURL(struct zx_m20_IDPDescriptor_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->SingleLogoutServiceURL;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->SingleLogoutServiceURL = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_m20_IDPDescriptor_ADD_SingleLogoutServiceURL) */

void zx_m20_IDPDescriptor_ADD_SingleLogoutServiceURL(struct zx_m20_IDPDescriptor_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->SingleLogoutServiceURL->g;
    x->SingleLogoutServiceURL = z;
    return;
  case -1:
    y = x->SingleLogoutServiceURL;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->SingleLogoutServiceURL; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_m20_IDPDescriptor_DEL_SingleLogoutServiceURL) */

void zx_m20_IDPDescriptor_DEL_SingleLogoutServiceURL(struct zx_m20_IDPDescriptor_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->SingleLogoutServiceURL = (struct zx_elem_s*)x->SingleLogoutServiceURL->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->SingleLogoutServiceURL;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->SingleLogoutServiceURL; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_m20_IDPDescriptor_NUM_SingleLogoutServiceReturnURL) */

int zx_m20_IDPDescriptor_NUM_SingleLogoutServiceReturnURL(struct zx_m20_IDPDescriptor_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->SingleLogoutServiceReturnURL; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_m20_IDPDescriptor_GET_SingleLogoutServiceReturnURL) */

struct zx_elem_s* zx_m20_IDPDescriptor_GET_SingleLogoutServiceReturnURL(struct zx_m20_IDPDescriptor_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->SingleLogoutServiceReturnURL; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_m20_IDPDescriptor_POP_SingleLogoutServiceReturnURL) */

struct zx_elem_s* zx_m20_IDPDescriptor_POP_SingleLogoutServiceReturnURL(struct zx_m20_IDPDescriptor_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->SingleLogoutServiceReturnURL;
  if (y)
    x->SingleLogoutServiceReturnURL = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_m20_IDPDescriptor_PUSH_SingleLogoutServiceReturnURL) */

void zx_m20_IDPDescriptor_PUSH_SingleLogoutServiceReturnURL(struct zx_m20_IDPDescriptor_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->SingleLogoutServiceReturnURL->g;
  x->SingleLogoutServiceReturnURL = z;
}

/* FUNC(zx_m20_IDPDescriptor_REV_SingleLogoutServiceReturnURL) */

void zx_m20_IDPDescriptor_REV_SingleLogoutServiceReturnURL(struct zx_m20_IDPDescriptor_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->SingleLogoutServiceReturnURL;
  if (!y) return;
  x->SingleLogoutServiceReturnURL = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->SingleLogoutServiceReturnURL->g;
    x->SingleLogoutServiceReturnURL = y;
    y = nxt;
  }
}

/* FUNC(zx_m20_IDPDescriptor_PUT_SingleLogoutServiceReturnURL) */

void zx_m20_IDPDescriptor_PUT_SingleLogoutServiceReturnURL(struct zx_m20_IDPDescriptor_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->SingleLogoutServiceReturnURL;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->SingleLogoutServiceReturnURL = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_m20_IDPDescriptor_ADD_SingleLogoutServiceReturnURL) */

void zx_m20_IDPDescriptor_ADD_SingleLogoutServiceReturnURL(struct zx_m20_IDPDescriptor_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->SingleLogoutServiceReturnURL->g;
    x->SingleLogoutServiceReturnURL = z;
    return;
  case -1:
    y = x->SingleLogoutServiceReturnURL;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->SingleLogoutServiceReturnURL; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_m20_IDPDescriptor_DEL_SingleLogoutServiceReturnURL) */

void zx_m20_IDPDescriptor_DEL_SingleLogoutServiceReturnURL(struct zx_m20_IDPDescriptor_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->SingleLogoutServiceReturnURL = (struct zx_elem_s*)x->SingleLogoutServiceReturnURL->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->SingleLogoutServiceReturnURL;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->SingleLogoutServiceReturnURL; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_m20_IDPDescriptor_NUM_FederationTerminationServiceURL) */

int zx_m20_IDPDescriptor_NUM_FederationTerminationServiceURL(struct zx_m20_IDPDescriptor_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->FederationTerminationServiceURL; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_m20_IDPDescriptor_GET_FederationTerminationServiceURL) */

struct zx_elem_s* zx_m20_IDPDescriptor_GET_FederationTerminationServiceURL(struct zx_m20_IDPDescriptor_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->FederationTerminationServiceURL; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_m20_IDPDescriptor_POP_FederationTerminationServiceURL) */

struct zx_elem_s* zx_m20_IDPDescriptor_POP_FederationTerminationServiceURL(struct zx_m20_IDPDescriptor_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->FederationTerminationServiceURL;
  if (y)
    x->FederationTerminationServiceURL = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_m20_IDPDescriptor_PUSH_FederationTerminationServiceURL) */

void zx_m20_IDPDescriptor_PUSH_FederationTerminationServiceURL(struct zx_m20_IDPDescriptor_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->FederationTerminationServiceURL->g;
  x->FederationTerminationServiceURL = z;
}

/* FUNC(zx_m20_IDPDescriptor_REV_FederationTerminationServiceURL) */

void zx_m20_IDPDescriptor_REV_FederationTerminationServiceURL(struct zx_m20_IDPDescriptor_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->FederationTerminationServiceURL;
  if (!y) return;
  x->FederationTerminationServiceURL = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->FederationTerminationServiceURL->g;
    x->FederationTerminationServiceURL = y;
    y = nxt;
  }
}

/* FUNC(zx_m20_IDPDescriptor_PUT_FederationTerminationServiceURL) */

void zx_m20_IDPDescriptor_PUT_FederationTerminationServiceURL(struct zx_m20_IDPDescriptor_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->FederationTerminationServiceURL;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->FederationTerminationServiceURL = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_m20_IDPDescriptor_ADD_FederationTerminationServiceURL) */

void zx_m20_IDPDescriptor_ADD_FederationTerminationServiceURL(struct zx_m20_IDPDescriptor_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->FederationTerminationServiceURL->g;
    x->FederationTerminationServiceURL = z;
    return;
  case -1:
    y = x->FederationTerminationServiceURL;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->FederationTerminationServiceURL; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_m20_IDPDescriptor_DEL_FederationTerminationServiceURL) */

void zx_m20_IDPDescriptor_DEL_FederationTerminationServiceURL(struct zx_m20_IDPDescriptor_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->FederationTerminationServiceURL = (struct zx_elem_s*)x->FederationTerminationServiceURL->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->FederationTerminationServiceURL;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->FederationTerminationServiceURL; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_m20_IDPDescriptor_NUM_FederationTerminationServiceReturnURL) */

int zx_m20_IDPDescriptor_NUM_FederationTerminationServiceReturnURL(struct zx_m20_IDPDescriptor_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->FederationTerminationServiceReturnURL; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_m20_IDPDescriptor_GET_FederationTerminationServiceReturnURL) */

struct zx_elem_s* zx_m20_IDPDescriptor_GET_FederationTerminationServiceReturnURL(struct zx_m20_IDPDescriptor_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->FederationTerminationServiceReturnURL; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_m20_IDPDescriptor_POP_FederationTerminationServiceReturnURL) */

struct zx_elem_s* zx_m20_IDPDescriptor_POP_FederationTerminationServiceReturnURL(struct zx_m20_IDPDescriptor_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->FederationTerminationServiceReturnURL;
  if (y)
    x->FederationTerminationServiceReturnURL = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_m20_IDPDescriptor_PUSH_FederationTerminationServiceReturnURL) */

void zx_m20_IDPDescriptor_PUSH_FederationTerminationServiceReturnURL(struct zx_m20_IDPDescriptor_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->FederationTerminationServiceReturnURL->g;
  x->FederationTerminationServiceReturnURL = z;
}

/* FUNC(zx_m20_IDPDescriptor_REV_FederationTerminationServiceReturnURL) */

void zx_m20_IDPDescriptor_REV_FederationTerminationServiceReturnURL(struct zx_m20_IDPDescriptor_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->FederationTerminationServiceReturnURL;
  if (!y) return;
  x->FederationTerminationServiceReturnURL = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->FederationTerminationServiceReturnURL->g;
    x->FederationTerminationServiceReturnURL = y;
    y = nxt;
  }
}

/* FUNC(zx_m20_IDPDescriptor_PUT_FederationTerminationServiceReturnURL) */

void zx_m20_IDPDescriptor_PUT_FederationTerminationServiceReturnURL(struct zx_m20_IDPDescriptor_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->FederationTerminationServiceReturnURL;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->FederationTerminationServiceReturnURL = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_m20_IDPDescriptor_ADD_FederationTerminationServiceReturnURL) */

void zx_m20_IDPDescriptor_ADD_FederationTerminationServiceReturnURL(struct zx_m20_IDPDescriptor_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->FederationTerminationServiceReturnURL->g;
    x->FederationTerminationServiceReturnURL = z;
    return;
  case -1:
    y = x->FederationTerminationServiceReturnURL;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->FederationTerminationServiceReturnURL; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_m20_IDPDescriptor_DEL_FederationTerminationServiceReturnURL) */

void zx_m20_IDPDescriptor_DEL_FederationTerminationServiceReturnURL(struct zx_m20_IDPDescriptor_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->FederationTerminationServiceReturnURL = (struct zx_elem_s*)x->FederationTerminationServiceReturnURL->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->FederationTerminationServiceReturnURL;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->FederationTerminationServiceReturnURL; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_m20_IDPDescriptor_NUM_FederationTerminationNotificationProtocolProfile) */

int zx_m20_IDPDescriptor_NUM_FederationTerminationNotificationProtocolProfile(struct zx_m20_IDPDescriptor_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->FederationTerminationNotificationProtocolProfile; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_m20_IDPDescriptor_GET_FederationTerminationNotificationProtocolProfile) */

struct zx_elem_s* zx_m20_IDPDescriptor_GET_FederationTerminationNotificationProtocolProfile(struct zx_m20_IDPDescriptor_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->FederationTerminationNotificationProtocolProfile; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_m20_IDPDescriptor_POP_FederationTerminationNotificationProtocolProfile) */

struct zx_elem_s* zx_m20_IDPDescriptor_POP_FederationTerminationNotificationProtocolProfile(struct zx_m20_IDPDescriptor_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->FederationTerminationNotificationProtocolProfile;
  if (y)
    x->FederationTerminationNotificationProtocolProfile = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_m20_IDPDescriptor_PUSH_FederationTerminationNotificationProtocolProfile) */

void zx_m20_IDPDescriptor_PUSH_FederationTerminationNotificationProtocolProfile(struct zx_m20_IDPDescriptor_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->FederationTerminationNotificationProtocolProfile->g;
  x->FederationTerminationNotificationProtocolProfile = z;
}

/* FUNC(zx_m20_IDPDescriptor_REV_FederationTerminationNotificationProtocolProfile) */

void zx_m20_IDPDescriptor_REV_FederationTerminationNotificationProtocolProfile(struct zx_m20_IDPDescriptor_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->FederationTerminationNotificationProtocolProfile;
  if (!y) return;
  x->FederationTerminationNotificationProtocolProfile = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->FederationTerminationNotificationProtocolProfile->g;
    x->FederationTerminationNotificationProtocolProfile = y;
    y = nxt;
  }
}

/* FUNC(zx_m20_IDPDescriptor_PUT_FederationTerminationNotificationProtocolProfile) */

void zx_m20_IDPDescriptor_PUT_FederationTerminationNotificationProtocolProfile(struct zx_m20_IDPDescriptor_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->FederationTerminationNotificationProtocolProfile;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->FederationTerminationNotificationProtocolProfile = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_m20_IDPDescriptor_ADD_FederationTerminationNotificationProtocolProfile) */

void zx_m20_IDPDescriptor_ADD_FederationTerminationNotificationProtocolProfile(struct zx_m20_IDPDescriptor_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->FederationTerminationNotificationProtocolProfile->g;
    x->FederationTerminationNotificationProtocolProfile = z;
    return;
  case -1:
    y = x->FederationTerminationNotificationProtocolProfile;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->FederationTerminationNotificationProtocolProfile; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_m20_IDPDescriptor_DEL_FederationTerminationNotificationProtocolProfile) */

void zx_m20_IDPDescriptor_DEL_FederationTerminationNotificationProtocolProfile(struct zx_m20_IDPDescriptor_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->FederationTerminationNotificationProtocolProfile = (struct zx_elem_s*)x->FederationTerminationNotificationProtocolProfile->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->FederationTerminationNotificationProtocolProfile;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->FederationTerminationNotificationProtocolProfile; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_m20_IDPDescriptor_NUM_SingleLogoutProtocolProfile) */

int zx_m20_IDPDescriptor_NUM_SingleLogoutProtocolProfile(struct zx_m20_IDPDescriptor_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->SingleLogoutProtocolProfile; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_m20_IDPDescriptor_GET_SingleLogoutProtocolProfile) */

struct zx_elem_s* zx_m20_IDPDescriptor_GET_SingleLogoutProtocolProfile(struct zx_m20_IDPDescriptor_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->SingleLogoutProtocolProfile; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_m20_IDPDescriptor_POP_SingleLogoutProtocolProfile) */

struct zx_elem_s* zx_m20_IDPDescriptor_POP_SingleLogoutProtocolProfile(struct zx_m20_IDPDescriptor_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->SingleLogoutProtocolProfile;
  if (y)
    x->SingleLogoutProtocolProfile = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_m20_IDPDescriptor_PUSH_SingleLogoutProtocolProfile) */

void zx_m20_IDPDescriptor_PUSH_SingleLogoutProtocolProfile(struct zx_m20_IDPDescriptor_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->SingleLogoutProtocolProfile->g;
  x->SingleLogoutProtocolProfile = z;
}

/* FUNC(zx_m20_IDPDescriptor_REV_SingleLogoutProtocolProfile) */

void zx_m20_IDPDescriptor_REV_SingleLogoutProtocolProfile(struct zx_m20_IDPDescriptor_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->SingleLogoutProtocolProfile;
  if (!y) return;
  x->SingleLogoutProtocolProfile = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->SingleLogoutProtocolProfile->g;
    x->SingleLogoutProtocolProfile = y;
    y = nxt;
  }
}

/* FUNC(zx_m20_IDPDescriptor_PUT_SingleLogoutProtocolProfile) */

void zx_m20_IDPDescriptor_PUT_SingleLogoutProtocolProfile(struct zx_m20_IDPDescriptor_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->SingleLogoutProtocolProfile;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->SingleLogoutProtocolProfile = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_m20_IDPDescriptor_ADD_SingleLogoutProtocolProfile) */

void zx_m20_IDPDescriptor_ADD_SingleLogoutProtocolProfile(struct zx_m20_IDPDescriptor_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->SingleLogoutProtocolProfile->g;
    x->SingleLogoutProtocolProfile = z;
    return;
  case -1:
    y = x->SingleLogoutProtocolProfile;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->SingleLogoutProtocolProfile; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_m20_IDPDescriptor_DEL_SingleLogoutProtocolProfile) */

void zx_m20_IDPDescriptor_DEL_SingleLogoutProtocolProfile(struct zx_m20_IDPDescriptor_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->SingleLogoutProtocolProfile = (struct zx_elem_s*)x->SingleLogoutProtocolProfile->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->SingleLogoutProtocolProfile;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->SingleLogoutProtocolProfile; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_m20_IDPDescriptor_NUM_RegisterNameIdentifierProtocolProfile) */

int zx_m20_IDPDescriptor_NUM_RegisterNameIdentifierProtocolProfile(struct zx_m20_IDPDescriptor_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->RegisterNameIdentifierProtocolProfile; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_m20_IDPDescriptor_GET_RegisterNameIdentifierProtocolProfile) */

struct zx_elem_s* zx_m20_IDPDescriptor_GET_RegisterNameIdentifierProtocolProfile(struct zx_m20_IDPDescriptor_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->RegisterNameIdentifierProtocolProfile; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_m20_IDPDescriptor_POP_RegisterNameIdentifierProtocolProfile) */

struct zx_elem_s* zx_m20_IDPDescriptor_POP_RegisterNameIdentifierProtocolProfile(struct zx_m20_IDPDescriptor_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->RegisterNameIdentifierProtocolProfile;
  if (y)
    x->RegisterNameIdentifierProtocolProfile = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_m20_IDPDescriptor_PUSH_RegisterNameIdentifierProtocolProfile) */

void zx_m20_IDPDescriptor_PUSH_RegisterNameIdentifierProtocolProfile(struct zx_m20_IDPDescriptor_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->RegisterNameIdentifierProtocolProfile->g;
  x->RegisterNameIdentifierProtocolProfile = z;
}

/* FUNC(zx_m20_IDPDescriptor_REV_RegisterNameIdentifierProtocolProfile) */

void zx_m20_IDPDescriptor_REV_RegisterNameIdentifierProtocolProfile(struct zx_m20_IDPDescriptor_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->RegisterNameIdentifierProtocolProfile;
  if (!y) return;
  x->RegisterNameIdentifierProtocolProfile = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->RegisterNameIdentifierProtocolProfile->g;
    x->RegisterNameIdentifierProtocolProfile = y;
    y = nxt;
  }
}

/* FUNC(zx_m20_IDPDescriptor_PUT_RegisterNameIdentifierProtocolProfile) */

void zx_m20_IDPDescriptor_PUT_RegisterNameIdentifierProtocolProfile(struct zx_m20_IDPDescriptor_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->RegisterNameIdentifierProtocolProfile;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->RegisterNameIdentifierProtocolProfile = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_m20_IDPDescriptor_ADD_RegisterNameIdentifierProtocolProfile) */

void zx_m20_IDPDescriptor_ADD_RegisterNameIdentifierProtocolProfile(struct zx_m20_IDPDescriptor_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->RegisterNameIdentifierProtocolProfile->g;
    x->RegisterNameIdentifierProtocolProfile = z;
    return;
  case -1:
    y = x->RegisterNameIdentifierProtocolProfile;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->RegisterNameIdentifierProtocolProfile; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_m20_IDPDescriptor_DEL_RegisterNameIdentifierProtocolProfile) */

void zx_m20_IDPDescriptor_DEL_RegisterNameIdentifierProtocolProfile(struct zx_m20_IDPDescriptor_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->RegisterNameIdentifierProtocolProfile = (struct zx_elem_s*)x->RegisterNameIdentifierProtocolProfile->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->RegisterNameIdentifierProtocolProfile;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->RegisterNameIdentifierProtocolProfile; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_m20_IDPDescriptor_NUM_RegisterNameIdentifierServiceURL) */

int zx_m20_IDPDescriptor_NUM_RegisterNameIdentifierServiceURL(struct zx_m20_IDPDescriptor_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->RegisterNameIdentifierServiceURL; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_m20_IDPDescriptor_GET_RegisterNameIdentifierServiceURL) */

struct zx_elem_s* zx_m20_IDPDescriptor_GET_RegisterNameIdentifierServiceURL(struct zx_m20_IDPDescriptor_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->RegisterNameIdentifierServiceURL; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_m20_IDPDescriptor_POP_RegisterNameIdentifierServiceURL) */

struct zx_elem_s* zx_m20_IDPDescriptor_POP_RegisterNameIdentifierServiceURL(struct zx_m20_IDPDescriptor_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->RegisterNameIdentifierServiceURL;
  if (y)
    x->RegisterNameIdentifierServiceURL = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_m20_IDPDescriptor_PUSH_RegisterNameIdentifierServiceURL) */

void zx_m20_IDPDescriptor_PUSH_RegisterNameIdentifierServiceURL(struct zx_m20_IDPDescriptor_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->RegisterNameIdentifierServiceURL->g;
  x->RegisterNameIdentifierServiceURL = z;
}

/* FUNC(zx_m20_IDPDescriptor_REV_RegisterNameIdentifierServiceURL) */

void zx_m20_IDPDescriptor_REV_RegisterNameIdentifierServiceURL(struct zx_m20_IDPDescriptor_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->RegisterNameIdentifierServiceURL;
  if (!y) return;
  x->RegisterNameIdentifierServiceURL = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->RegisterNameIdentifierServiceURL->g;
    x->RegisterNameIdentifierServiceURL = y;
    y = nxt;
  }
}

/* FUNC(zx_m20_IDPDescriptor_PUT_RegisterNameIdentifierServiceURL) */

void zx_m20_IDPDescriptor_PUT_RegisterNameIdentifierServiceURL(struct zx_m20_IDPDescriptor_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->RegisterNameIdentifierServiceURL;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->RegisterNameIdentifierServiceURL = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_m20_IDPDescriptor_ADD_RegisterNameIdentifierServiceURL) */

void zx_m20_IDPDescriptor_ADD_RegisterNameIdentifierServiceURL(struct zx_m20_IDPDescriptor_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->RegisterNameIdentifierServiceURL->g;
    x->RegisterNameIdentifierServiceURL = z;
    return;
  case -1:
    y = x->RegisterNameIdentifierServiceURL;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->RegisterNameIdentifierServiceURL; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_m20_IDPDescriptor_DEL_RegisterNameIdentifierServiceURL) */

void zx_m20_IDPDescriptor_DEL_RegisterNameIdentifierServiceURL(struct zx_m20_IDPDescriptor_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->RegisterNameIdentifierServiceURL = (struct zx_elem_s*)x->RegisterNameIdentifierServiceURL->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->RegisterNameIdentifierServiceURL;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->RegisterNameIdentifierServiceURL; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_m20_IDPDescriptor_NUM_RegisterNameIdentifierServiceReturnURL) */

int zx_m20_IDPDescriptor_NUM_RegisterNameIdentifierServiceReturnURL(struct zx_m20_IDPDescriptor_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->RegisterNameIdentifierServiceReturnURL; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_m20_IDPDescriptor_GET_RegisterNameIdentifierServiceReturnURL) */

struct zx_elem_s* zx_m20_IDPDescriptor_GET_RegisterNameIdentifierServiceReturnURL(struct zx_m20_IDPDescriptor_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->RegisterNameIdentifierServiceReturnURL; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_m20_IDPDescriptor_POP_RegisterNameIdentifierServiceReturnURL) */

struct zx_elem_s* zx_m20_IDPDescriptor_POP_RegisterNameIdentifierServiceReturnURL(struct zx_m20_IDPDescriptor_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->RegisterNameIdentifierServiceReturnURL;
  if (y)
    x->RegisterNameIdentifierServiceReturnURL = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_m20_IDPDescriptor_PUSH_RegisterNameIdentifierServiceReturnURL) */

void zx_m20_IDPDescriptor_PUSH_RegisterNameIdentifierServiceReturnURL(struct zx_m20_IDPDescriptor_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->RegisterNameIdentifierServiceReturnURL->g;
  x->RegisterNameIdentifierServiceReturnURL = z;
}

/* FUNC(zx_m20_IDPDescriptor_REV_RegisterNameIdentifierServiceReturnURL) */

void zx_m20_IDPDescriptor_REV_RegisterNameIdentifierServiceReturnURL(struct zx_m20_IDPDescriptor_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->RegisterNameIdentifierServiceReturnURL;
  if (!y) return;
  x->RegisterNameIdentifierServiceReturnURL = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->RegisterNameIdentifierServiceReturnURL->g;
    x->RegisterNameIdentifierServiceReturnURL = y;
    y = nxt;
  }
}

/* FUNC(zx_m20_IDPDescriptor_PUT_RegisterNameIdentifierServiceReturnURL) */

void zx_m20_IDPDescriptor_PUT_RegisterNameIdentifierServiceReturnURL(struct zx_m20_IDPDescriptor_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->RegisterNameIdentifierServiceReturnURL;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->RegisterNameIdentifierServiceReturnURL = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_m20_IDPDescriptor_ADD_RegisterNameIdentifierServiceReturnURL) */

void zx_m20_IDPDescriptor_ADD_RegisterNameIdentifierServiceReturnURL(struct zx_m20_IDPDescriptor_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->RegisterNameIdentifierServiceReturnURL->g;
    x->RegisterNameIdentifierServiceReturnURL = z;
    return;
  case -1:
    y = x->RegisterNameIdentifierServiceReturnURL;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->RegisterNameIdentifierServiceReturnURL; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_m20_IDPDescriptor_DEL_RegisterNameIdentifierServiceReturnURL) */

void zx_m20_IDPDescriptor_DEL_RegisterNameIdentifierServiceReturnURL(struct zx_m20_IDPDescriptor_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->RegisterNameIdentifierServiceReturnURL = (struct zx_elem_s*)x->RegisterNameIdentifierServiceReturnURL->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->RegisterNameIdentifierServiceReturnURL;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->RegisterNameIdentifierServiceReturnURL; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_m20_IDPDescriptor_NUM_NameIdentifierMappingProtocolProfile) */

int zx_m20_IDPDescriptor_NUM_NameIdentifierMappingProtocolProfile(struct zx_m20_IDPDescriptor_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->NameIdentifierMappingProtocolProfile; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_m20_IDPDescriptor_GET_NameIdentifierMappingProtocolProfile) */

struct zx_elem_s* zx_m20_IDPDescriptor_GET_NameIdentifierMappingProtocolProfile(struct zx_m20_IDPDescriptor_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->NameIdentifierMappingProtocolProfile; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_m20_IDPDescriptor_POP_NameIdentifierMappingProtocolProfile) */

struct zx_elem_s* zx_m20_IDPDescriptor_POP_NameIdentifierMappingProtocolProfile(struct zx_m20_IDPDescriptor_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->NameIdentifierMappingProtocolProfile;
  if (y)
    x->NameIdentifierMappingProtocolProfile = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_m20_IDPDescriptor_PUSH_NameIdentifierMappingProtocolProfile) */

void zx_m20_IDPDescriptor_PUSH_NameIdentifierMappingProtocolProfile(struct zx_m20_IDPDescriptor_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->NameIdentifierMappingProtocolProfile->g;
  x->NameIdentifierMappingProtocolProfile = z;
}

/* FUNC(zx_m20_IDPDescriptor_REV_NameIdentifierMappingProtocolProfile) */

void zx_m20_IDPDescriptor_REV_NameIdentifierMappingProtocolProfile(struct zx_m20_IDPDescriptor_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->NameIdentifierMappingProtocolProfile;
  if (!y) return;
  x->NameIdentifierMappingProtocolProfile = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->NameIdentifierMappingProtocolProfile->g;
    x->NameIdentifierMappingProtocolProfile = y;
    y = nxt;
  }
}

/* FUNC(zx_m20_IDPDescriptor_PUT_NameIdentifierMappingProtocolProfile) */

void zx_m20_IDPDescriptor_PUT_NameIdentifierMappingProtocolProfile(struct zx_m20_IDPDescriptor_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->NameIdentifierMappingProtocolProfile;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->NameIdentifierMappingProtocolProfile = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_m20_IDPDescriptor_ADD_NameIdentifierMappingProtocolProfile) */

void zx_m20_IDPDescriptor_ADD_NameIdentifierMappingProtocolProfile(struct zx_m20_IDPDescriptor_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->NameIdentifierMappingProtocolProfile->g;
    x->NameIdentifierMappingProtocolProfile = z;
    return;
  case -1:
    y = x->NameIdentifierMappingProtocolProfile;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->NameIdentifierMappingProtocolProfile; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_m20_IDPDescriptor_DEL_NameIdentifierMappingProtocolProfile) */

void zx_m20_IDPDescriptor_DEL_NameIdentifierMappingProtocolProfile(struct zx_m20_IDPDescriptor_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->NameIdentifierMappingProtocolProfile = (struct zx_elem_s*)x->NameIdentifierMappingProtocolProfile->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->NameIdentifierMappingProtocolProfile;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->NameIdentifierMappingProtocolProfile; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_m20_IDPDescriptor_NUM_NameIdentifierMappingEncryptionProfile) */

int zx_m20_IDPDescriptor_NUM_NameIdentifierMappingEncryptionProfile(struct zx_m20_IDPDescriptor_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->NameIdentifierMappingEncryptionProfile; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_m20_IDPDescriptor_GET_NameIdentifierMappingEncryptionProfile) */

struct zx_elem_s* zx_m20_IDPDescriptor_GET_NameIdentifierMappingEncryptionProfile(struct zx_m20_IDPDescriptor_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->NameIdentifierMappingEncryptionProfile; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_m20_IDPDescriptor_POP_NameIdentifierMappingEncryptionProfile) */

struct zx_elem_s* zx_m20_IDPDescriptor_POP_NameIdentifierMappingEncryptionProfile(struct zx_m20_IDPDescriptor_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->NameIdentifierMappingEncryptionProfile;
  if (y)
    x->NameIdentifierMappingEncryptionProfile = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_m20_IDPDescriptor_PUSH_NameIdentifierMappingEncryptionProfile) */

void zx_m20_IDPDescriptor_PUSH_NameIdentifierMappingEncryptionProfile(struct zx_m20_IDPDescriptor_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->NameIdentifierMappingEncryptionProfile->g;
  x->NameIdentifierMappingEncryptionProfile = z;
}

/* FUNC(zx_m20_IDPDescriptor_REV_NameIdentifierMappingEncryptionProfile) */

void zx_m20_IDPDescriptor_REV_NameIdentifierMappingEncryptionProfile(struct zx_m20_IDPDescriptor_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->NameIdentifierMappingEncryptionProfile;
  if (!y) return;
  x->NameIdentifierMappingEncryptionProfile = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->NameIdentifierMappingEncryptionProfile->g;
    x->NameIdentifierMappingEncryptionProfile = y;
    y = nxt;
  }
}

/* FUNC(zx_m20_IDPDescriptor_PUT_NameIdentifierMappingEncryptionProfile) */

void zx_m20_IDPDescriptor_PUT_NameIdentifierMappingEncryptionProfile(struct zx_m20_IDPDescriptor_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->NameIdentifierMappingEncryptionProfile;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->NameIdentifierMappingEncryptionProfile = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_m20_IDPDescriptor_ADD_NameIdentifierMappingEncryptionProfile) */

void zx_m20_IDPDescriptor_ADD_NameIdentifierMappingEncryptionProfile(struct zx_m20_IDPDescriptor_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->NameIdentifierMappingEncryptionProfile->g;
    x->NameIdentifierMappingEncryptionProfile = z;
    return;
  case -1:
    y = x->NameIdentifierMappingEncryptionProfile;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->NameIdentifierMappingEncryptionProfile; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_m20_IDPDescriptor_DEL_NameIdentifierMappingEncryptionProfile) */

void zx_m20_IDPDescriptor_DEL_NameIdentifierMappingEncryptionProfile(struct zx_m20_IDPDescriptor_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->NameIdentifierMappingEncryptionProfile = (struct zx_elem_s*)x->NameIdentifierMappingEncryptionProfile->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->NameIdentifierMappingEncryptionProfile;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->NameIdentifierMappingEncryptionProfile; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_m20_IDPDescriptor_NUM_Organization) */

int zx_m20_IDPDescriptor_NUM_Organization(struct zx_m20_IDPDescriptor_s* x)
{
  struct zx_m20_Organization_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Organization; y; ++n, y = (struct zx_m20_Organization_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_m20_IDPDescriptor_GET_Organization) */

struct zx_m20_Organization_s* zx_m20_IDPDescriptor_GET_Organization(struct zx_m20_IDPDescriptor_s* x, int n)
{
  struct zx_m20_Organization_s* y;
  if (!x) return 0;
  for (y = x->Organization; n>=0 && y; --n, y = (struct zx_m20_Organization_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_m20_IDPDescriptor_POP_Organization) */

struct zx_m20_Organization_s* zx_m20_IDPDescriptor_POP_Organization(struct zx_m20_IDPDescriptor_s* x)
{
  struct zx_m20_Organization_s* y;
  if (!x) return 0;
  y = x->Organization;
  if (y)
    x->Organization = (struct zx_m20_Organization_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_m20_IDPDescriptor_PUSH_Organization) */

void zx_m20_IDPDescriptor_PUSH_Organization(struct zx_m20_IDPDescriptor_s* x, struct zx_m20_Organization_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Organization->gg.g;
  x->Organization = z;
}

/* FUNC(zx_m20_IDPDescriptor_REV_Organization) */

void zx_m20_IDPDescriptor_REV_Organization(struct zx_m20_IDPDescriptor_s* x)
{
  struct zx_m20_Organization_s* nxt;
  struct zx_m20_Organization_s* y;
  if (!x) return;
  y = x->Organization;
  if (!y) return;
  x->Organization = 0;
  while (y) {
    nxt = (struct zx_m20_Organization_s*)y->gg.g.n;
    y->gg.g.n = &x->Organization->gg.g;
    x->Organization = y;
    y = nxt;
  }
}

/* FUNC(zx_m20_IDPDescriptor_PUT_Organization) */

void zx_m20_IDPDescriptor_PUT_Organization(struct zx_m20_IDPDescriptor_s* x, int n, struct zx_m20_Organization_s* z)
{
  struct zx_m20_Organization_s* y;
  if (!x || !z) return;
  y = x->Organization;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Organization = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_m20_Organization_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_m20_IDPDescriptor_ADD_Organization) */

void zx_m20_IDPDescriptor_ADD_Organization(struct zx_m20_IDPDescriptor_s* x, int n, struct zx_m20_Organization_s* z)
{
  struct zx_m20_Organization_s* y;
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
    for (; y->gg.g.n; y = (struct zx_m20_Organization_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Organization; n > 1 && y; --n, y = (struct zx_m20_Organization_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_m20_IDPDescriptor_DEL_Organization) */

void zx_m20_IDPDescriptor_DEL_Organization(struct zx_m20_IDPDescriptor_s* x, int n)
{
  struct zx_m20_Organization_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Organization = (struct zx_m20_Organization_s*)x->Organization->gg.g.n;
    return;
  case -1:
    y = (struct zx_m20_Organization_s*)x->Organization;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_m20_Organization_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Organization; n > 1 && y->gg.g.n; --n, y = (struct zx_m20_Organization_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_m20_IDPDescriptor_NUM_ContactPerson) */

int zx_m20_IDPDescriptor_NUM_ContactPerson(struct zx_m20_IDPDescriptor_s* x)
{
  struct zx_m20_ContactPerson_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->ContactPerson; y; ++n, y = (struct zx_m20_ContactPerson_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_m20_IDPDescriptor_GET_ContactPerson) */

struct zx_m20_ContactPerson_s* zx_m20_IDPDescriptor_GET_ContactPerson(struct zx_m20_IDPDescriptor_s* x, int n)
{
  struct zx_m20_ContactPerson_s* y;
  if (!x) return 0;
  for (y = x->ContactPerson; n>=0 && y; --n, y = (struct zx_m20_ContactPerson_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_m20_IDPDescriptor_POP_ContactPerson) */

struct zx_m20_ContactPerson_s* zx_m20_IDPDescriptor_POP_ContactPerson(struct zx_m20_IDPDescriptor_s* x)
{
  struct zx_m20_ContactPerson_s* y;
  if (!x) return 0;
  y = x->ContactPerson;
  if (y)
    x->ContactPerson = (struct zx_m20_ContactPerson_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_m20_IDPDescriptor_PUSH_ContactPerson) */

void zx_m20_IDPDescriptor_PUSH_ContactPerson(struct zx_m20_IDPDescriptor_s* x, struct zx_m20_ContactPerson_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->ContactPerson->gg.g;
  x->ContactPerson = z;
}

/* FUNC(zx_m20_IDPDescriptor_REV_ContactPerson) */

void zx_m20_IDPDescriptor_REV_ContactPerson(struct zx_m20_IDPDescriptor_s* x)
{
  struct zx_m20_ContactPerson_s* nxt;
  struct zx_m20_ContactPerson_s* y;
  if (!x) return;
  y = x->ContactPerson;
  if (!y) return;
  x->ContactPerson = 0;
  while (y) {
    nxt = (struct zx_m20_ContactPerson_s*)y->gg.g.n;
    y->gg.g.n = &x->ContactPerson->gg.g;
    x->ContactPerson = y;
    y = nxt;
  }
}

/* FUNC(zx_m20_IDPDescriptor_PUT_ContactPerson) */

void zx_m20_IDPDescriptor_PUT_ContactPerson(struct zx_m20_IDPDescriptor_s* x, int n, struct zx_m20_ContactPerson_s* z)
{
  struct zx_m20_ContactPerson_s* y;
  if (!x || !z) return;
  y = x->ContactPerson;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->ContactPerson = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_m20_ContactPerson_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_m20_IDPDescriptor_ADD_ContactPerson) */

void zx_m20_IDPDescriptor_ADD_ContactPerson(struct zx_m20_IDPDescriptor_s* x, int n, struct zx_m20_ContactPerson_s* z)
{
  struct zx_m20_ContactPerson_s* y;
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
    for (; y->gg.g.n; y = (struct zx_m20_ContactPerson_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->ContactPerson; n > 1 && y; --n, y = (struct zx_m20_ContactPerson_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_m20_IDPDescriptor_DEL_ContactPerson) */

void zx_m20_IDPDescriptor_DEL_ContactPerson(struct zx_m20_IDPDescriptor_s* x, int n)
{
  struct zx_m20_ContactPerson_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->ContactPerson = (struct zx_m20_ContactPerson_s*)x->ContactPerson->gg.g.n;
    return;
  case -1:
    y = (struct zx_m20_ContactPerson_s*)x->ContactPerson;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_m20_ContactPerson_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->ContactPerson; n > 1 && y->gg.g.n; --n, y = (struct zx_m20_ContactPerson_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_m20_IDPDescriptor_NUM_AdditionalMetaLocation) */

int zx_m20_IDPDescriptor_NUM_AdditionalMetaLocation(struct zx_m20_IDPDescriptor_s* x)
{
  struct zx_m20_AdditionalMetaLocation_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->AdditionalMetaLocation; y; ++n, y = (struct zx_m20_AdditionalMetaLocation_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_m20_IDPDescriptor_GET_AdditionalMetaLocation) */

struct zx_m20_AdditionalMetaLocation_s* zx_m20_IDPDescriptor_GET_AdditionalMetaLocation(struct zx_m20_IDPDescriptor_s* x, int n)
{
  struct zx_m20_AdditionalMetaLocation_s* y;
  if (!x) return 0;
  for (y = x->AdditionalMetaLocation; n>=0 && y; --n, y = (struct zx_m20_AdditionalMetaLocation_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_m20_IDPDescriptor_POP_AdditionalMetaLocation) */

struct zx_m20_AdditionalMetaLocation_s* zx_m20_IDPDescriptor_POP_AdditionalMetaLocation(struct zx_m20_IDPDescriptor_s* x)
{
  struct zx_m20_AdditionalMetaLocation_s* y;
  if (!x) return 0;
  y = x->AdditionalMetaLocation;
  if (y)
    x->AdditionalMetaLocation = (struct zx_m20_AdditionalMetaLocation_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_m20_IDPDescriptor_PUSH_AdditionalMetaLocation) */

void zx_m20_IDPDescriptor_PUSH_AdditionalMetaLocation(struct zx_m20_IDPDescriptor_s* x, struct zx_m20_AdditionalMetaLocation_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->AdditionalMetaLocation->gg.g;
  x->AdditionalMetaLocation = z;
}

/* FUNC(zx_m20_IDPDescriptor_REV_AdditionalMetaLocation) */

void zx_m20_IDPDescriptor_REV_AdditionalMetaLocation(struct zx_m20_IDPDescriptor_s* x)
{
  struct zx_m20_AdditionalMetaLocation_s* nxt;
  struct zx_m20_AdditionalMetaLocation_s* y;
  if (!x) return;
  y = x->AdditionalMetaLocation;
  if (!y) return;
  x->AdditionalMetaLocation = 0;
  while (y) {
    nxt = (struct zx_m20_AdditionalMetaLocation_s*)y->gg.g.n;
    y->gg.g.n = &x->AdditionalMetaLocation->gg.g;
    x->AdditionalMetaLocation = y;
    y = nxt;
  }
}

/* FUNC(zx_m20_IDPDescriptor_PUT_AdditionalMetaLocation) */

void zx_m20_IDPDescriptor_PUT_AdditionalMetaLocation(struct zx_m20_IDPDescriptor_s* x, int n, struct zx_m20_AdditionalMetaLocation_s* z)
{
  struct zx_m20_AdditionalMetaLocation_s* y;
  if (!x || !z) return;
  y = x->AdditionalMetaLocation;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->AdditionalMetaLocation = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_m20_AdditionalMetaLocation_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_m20_IDPDescriptor_ADD_AdditionalMetaLocation) */

void zx_m20_IDPDescriptor_ADD_AdditionalMetaLocation(struct zx_m20_IDPDescriptor_s* x, int n, struct zx_m20_AdditionalMetaLocation_s* z)
{
  struct zx_m20_AdditionalMetaLocation_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->AdditionalMetaLocation->gg.g;
    x->AdditionalMetaLocation = z;
    return;
  case -1:
    y = x->AdditionalMetaLocation;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_m20_AdditionalMetaLocation_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->AdditionalMetaLocation; n > 1 && y; --n, y = (struct zx_m20_AdditionalMetaLocation_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_m20_IDPDescriptor_DEL_AdditionalMetaLocation) */

void zx_m20_IDPDescriptor_DEL_AdditionalMetaLocation(struct zx_m20_IDPDescriptor_s* x, int n)
{
  struct zx_m20_AdditionalMetaLocation_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->AdditionalMetaLocation = (struct zx_m20_AdditionalMetaLocation_s*)x->AdditionalMetaLocation->gg.g.n;
    return;
  case -1:
    y = (struct zx_m20_AdditionalMetaLocation_s*)x->AdditionalMetaLocation;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_m20_AdditionalMetaLocation_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->AdditionalMetaLocation; n > 1 && y->gg.g.n; --n, y = (struct zx_m20_AdditionalMetaLocation_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_m20_IDPDescriptor_NUM_Extension) */

int zx_m20_IDPDescriptor_NUM_Extension(struct zx_m20_IDPDescriptor_s* x)
{
  struct zx_m20_Extension_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Extension; y; ++n, y = (struct zx_m20_Extension_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_m20_IDPDescriptor_GET_Extension) */

struct zx_m20_Extension_s* zx_m20_IDPDescriptor_GET_Extension(struct zx_m20_IDPDescriptor_s* x, int n)
{
  struct zx_m20_Extension_s* y;
  if (!x) return 0;
  for (y = x->Extension; n>=0 && y; --n, y = (struct zx_m20_Extension_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_m20_IDPDescriptor_POP_Extension) */

struct zx_m20_Extension_s* zx_m20_IDPDescriptor_POP_Extension(struct zx_m20_IDPDescriptor_s* x)
{
  struct zx_m20_Extension_s* y;
  if (!x) return 0;
  y = x->Extension;
  if (y)
    x->Extension = (struct zx_m20_Extension_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_m20_IDPDescriptor_PUSH_Extension) */

void zx_m20_IDPDescriptor_PUSH_Extension(struct zx_m20_IDPDescriptor_s* x, struct zx_m20_Extension_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Extension->gg.g;
  x->Extension = z;
}

/* FUNC(zx_m20_IDPDescriptor_REV_Extension) */

void zx_m20_IDPDescriptor_REV_Extension(struct zx_m20_IDPDescriptor_s* x)
{
  struct zx_m20_Extension_s* nxt;
  struct zx_m20_Extension_s* y;
  if (!x) return;
  y = x->Extension;
  if (!y) return;
  x->Extension = 0;
  while (y) {
    nxt = (struct zx_m20_Extension_s*)y->gg.g.n;
    y->gg.g.n = &x->Extension->gg.g;
    x->Extension = y;
    y = nxt;
  }
}

/* FUNC(zx_m20_IDPDescriptor_PUT_Extension) */

void zx_m20_IDPDescriptor_PUT_Extension(struct zx_m20_IDPDescriptor_s* x, int n, struct zx_m20_Extension_s* z)
{
  struct zx_m20_Extension_s* y;
  if (!x || !z) return;
  y = x->Extension;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Extension = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_m20_Extension_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_m20_IDPDescriptor_ADD_Extension) */

void zx_m20_IDPDescriptor_ADD_Extension(struct zx_m20_IDPDescriptor_s* x, int n, struct zx_m20_Extension_s* z)
{
  struct zx_m20_Extension_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->Extension->gg.g;
    x->Extension = z;
    return;
  case -1:
    y = x->Extension;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_m20_Extension_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Extension; n > 1 && y; --n, y = (struct zx_m20_Extension_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_m20_IDPDescriptor_DEL_Extension) */

void zx_m20_IDPDescriptor_DEL_Extension(struct zx_m20_IDPDescriptor_s* x, int n)
{
  struct zx_m20_Extension_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Extension = (struct zx_m20_Extension_s*)x->Extension->gg.g.n;
    return;
  case -1:
    y = (struct zx_m20_Extension_s*)x->Extension;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_m20_Extension_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Extension; n > 1 && y->gg.g.n; --n, y = (struct zx_m20_Extension_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_m20_IDPDescriptor_NUM_Signature) */

int zx_m20_IDPDescriptor_NUM_Signature(struct zx_m20_IDPDescriptor_s* x)
{
  struct zx_ds_Signature_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Signature; y; ++n, y = (struct zx_ds_Signature_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_m20_IDPDescriptor_GET_Signature) */

struct zx_ds_Signature_s* zx_m20_IDPDescriptor_GET_Signature(struct zx_m20_IDPDescriptor_s* x, int n)
{
  struct zx_ds_Signature_s* y;
  if (!x) return 0;
  for (y = x->Signature; n>=0 && y; --n, y = (struct zx_ds_Signature_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_m20_IDPDescriptor_POP_Signature) */

struct zx_ds_Signature_s* zx_m20_IDPDescriptor_POP_Signature(struct zx_m20_IDPDescriptor_s* x)
{
  struct zx_ds_Signature_s* y;
  if (!x) return 0;
  y = x->Signature;
  if (y)
    x->Signature = (struct zx_ds_Signature_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_m20_IDPDescriptor_PUSH_Signature) */

void zx_m20_IDPDescriptor_PUSH_Signature(struct zx_m20_IDPDescriptor_s* x, struct zx_ds_Signature_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Signature->gg.g;
  x->Signature = z;
}

/* FUNC(zx_m20_IDPDescriptor_REV_Signature) */

void zx_m20_IDPDescriptor_REV_Signature(struct zx_m20_IDPDescriptor_s* x)
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

/* FUNC(zx_m20_IDPDescriptor_PUT_Signature) */

void zx_m20_IDPDescriptor_PUT_Signature(struct zx_m20_IDPDescriptor_s* x, int n, struct zx_ds_Signature_s* z)
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

/* FUNC(zx_m20_IDPDescriptor_ADD_Signature) */

void zx_m20_IDPDescriptor_ADD_Signature(struct zx_m20_IDPDescriptor_s* x, int n, struct zx_ds_Signature_s* z)
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

/* FUNC(zx_m20_IDPDescriptor_DEL_Signature) */

void zx_m20_IDPDescriptor_DEL_Signature(struct zx_m20_IDPDescriptor_s* x, int n)
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

/* FUNC(zx_m20_IDPDescriptor_NUM_SingleSignOnServiceURL) */

int zx_m20_IDPDescriptor_NUM_SingleSignOnServiceURL(struct zx_m20_IDPDescriptor_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->SingleSignOnServiceURL; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_m20_IDPDescriptor_GET_SingleSignOnServiceURL) */

struct zx_elem_s* zx_m20_IDPDescriptor_GET_SingleSignOnServiceURL(struct zx_m20_IDPDescriptor_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->SingleSignOnServiceURL; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_m20_IDPDescriptor_POP_SingleSignOnServiceURL) */

struct zx_elem_s* zx_m20_IDPDescriptor_POP_SingleSignOnServiceURL(struct zx_m20_IDPDescriptor_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->SingleSignOnServiceURL;
  if (y)
    x->SingleSignOnServiceURL = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_m20_IDPDescriptor_PUSH_SingleSignOnServiceURL) */

void zx_m20_IDPDescriptor_PUSH_SingleSignOnServiceURL(struct zx_m20_IDPDescriptor_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->SingleSignOnServiceURL->g;
  x->SingleSignOnServiceURL = z;
}

/* FUNC(zx_m20_IDPDescriptor_REV_SingleSignOnServiceURL) */

void zx_m20_IDPDescriptor_REV_SingleSignOnServiceURL(struct zx_m20_IDPDescriptor_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->SingleSignOnServiceURL;
  if (!y) return;
  x->SingleSignOnServiceURL = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->SingleSignOnServiceURL->g;
    x->SingleSignOnServiceURL = y;
    y = nxt;
  }
}

/* FUNC(zx_m20_IDPDescriptor_PUT_SingleSignOnServiceURL) */

void zx_m20_IDPDescriptor_PUT_SingleSignOnServiceURL(struct zx_m20_IDPDescriptor_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->SingleSignOnServiceURL;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->SingleSignOnServiceURL = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_m20_IDPDescriptor_ADD_SingleSignOnServiceURL) */

void zx_m20_IDPDescriptor_ADD_SingleSignOnServiceURL(struct zx_m20_IDPDescriptor_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->SingleSignOnServiceURL->g;
    x->SingleSignOnServiceURL = z;
    return;
  case -1:
    y = x->SingleSignOnServiceURL;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->SingleSignOnServiceURL; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_m20_IDPDescriptor_DEL_SingleSignOnServiceURL) */

void zx_m20_IDPDescriptor_DEL_SingleSignOnServiceURL(struct zx_m20_IDPDescriptor_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->SingleSignOnServiceURL = (struct zx_elem_s*)x->SingleSignOnServiceURL->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->SingleSignOnServiceURL;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->SingleSignOnServiceURL; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_m20_IDPDescriptor_NUM_SingleSignOnProtocolProfile) */

int zx_m20_IDPDescriptor_NUM_SingleSignOnProtocolProfile(struct zx_m20_IDPDescriptor_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->SingleSignOnProtocolProfile; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_m20_IDPDescriptor_GET_SingleSignOnProtocolProfile) */

struct zx_elem_s* zx_m20_IDPDescriptor_GET_SingleSignOnProtocolProfile(struct zx_m20_IDPDescriptor_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->SingleSignOnProtocolProfile; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_m20_IDPDescriptor_POP_SingleSignOnProtocolProfile) */

struct zx_elem_s* zx_m20_IDPDescriptor_POP_SingleSignOnProtocolProfile(struct zx_m20_IDPDescriptor_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->SingleSignOnProtocolProfile;
  if (y)
    x->SingleSignOnProtocolProfile = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_m20_IDPDescriptor_PUSH_SingleSignOnProtocolProfile) */

void zx_m20_IDPDescriptor_PUSH_SingleSignOnProtocolProfile(struct zx_m20_IDPDescriptor_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->SingleSignOnProtocolProfile->g;
  x->SingleSignOnProtocolProfile = z;
}

/* FUNC(zx_m20_IDPDescriptor_REV_SingleSignOnProtocolProfile) */

void zx_m20_IDPDescriptor_REV_SingleSignOnProtocolProfile(struct zx_m20_IDPDescriptor_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->SingleSignOnProtocolProfile;
  if (!y) return;
  x->SingleSignOnProtocolProfile = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->SingleSignOnProtocolProfile->g;
    x->SingleSignOnProtocolProfile = y;
    y = nxt;
  }
}

/* FUNC(zx_m20_IDPDescriptor_PUT_SingleSignOnProtocolProfile) */

void zx_m20_IDPDescriptor_PUT_SingleSignOnProtocolProfile(struct zx_m20_IDPDescriptor_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->SingleSignOnProtocolProfile;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->SingleSignOnProtocolProfile = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_m20_IDPDescriptor_ADD_SingleSignOnProtocolProfile) */

void zx_m20_IDPDescriptor_ADD_SingleSignOnProtocolProfile(struct zx_m20_IDPDescriptor_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->SingleSignOnProtocolProfile->g;
    x->SingleSignOnProtocolProfile = z;
    return;
  case -1:
    y = x->SingleSignOnProtocolProfile;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->SingleSignOnProtocolProfile; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_m20_IDPDescriptor_DEL_SingleSignOnProtocolProfile) */

void zx_m20_IDPDescriptor_DEL_SingleSignOnProtocolProfile(struct zx_m20_IDPDescriptor_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->SingleSignOnProtocolProfile = (struct zx_elem_s*)x->SingleSignOnProtocolProfile->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->SingleSignOnProtocolProfile;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->SingleSignOnProtocolProfile; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_m20_IDPDescriptor_NUM_AuthnServiceURL) */

int zx_m20_IDPDescriptor_NUM_AuthnServiceURL(struct zx_m20_IDPDescriptor_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->AuthnServiceURL; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_m20_IDPDescriptor_GET_AuthnServiceURL) */

struct zx_elem_s* zx_m20_IDPDescriptor_GET_AuthnServiceURL(struct zx_m20_IDPDescriptor_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->AuthnServiceURL; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_m20_IDPDescriptor_POP_AuthnServiceURL) */

struct zx_elem_s* zx_m20_IDPDescriptor_POP_AuthnServiceURL(struct zx_m20_IDPDescriptor_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->AuthnServiceURL;
  if (y)
    x->AuthnServiceURL = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_m20_IDPDescriptor_PUSH_AuthnServiceURL) */

void zx_m20_IDPDescriptor_PUSH_AuthnServiceURL(struct zx_m20_IDPDescriptor_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->AuthnServiceURL->g;
  x->AuthnServiceURL = z;
}

/* FUNC(zx_m20_IDPDescriptor_REV_AuthnServiceURL) */

void zx_m20_IDPDescriptor_REV_AuthnServiceURL(struct zx_m20_IDPDescriptor_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->AuthnServiceURL;
  if (!y) return;
  x->AuthnServiceURL = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->AuthnServiceURL->g;
    x->AuthnServiceURL = y;
    y = nxt;
  }
}

/* FUNC(zx_m20_IDPDescriptor_PUT_AuthnServiceURL) */

void zx_m20_IDPDescriptor_PUT_AuthnServiceURL(struct zx_m20_IDPDescriptor_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->AuthnServiceURL;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->AuthnServiceURL = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_m20_IDPDescriptor_ADD_AuthnServiceURL) */

void zx_m20_IDPDescriptor_ADD_AuthnServiceURL(struct zx_m20_IDPDescriptor_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->AuthnServiceURL->g;
    x->AuthnServiceURL = z;
    return;
  case -1:
    y = x->AuthnServiceURL;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->AuthnServiceURL; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_m20_IDPDescriptor_DEL_AuthnServiceURL) */

void zx_m20_IDPDescriptor_DEL_AuthnServiceURL(struct zx_m20_IDPDescriptor_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->AuthnServiceURL = (struct zx_elem_s*)x->AuthnServiceURL->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->AuthnServiceURL;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->AuthnServiceURL; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

#endif

/* FUNC(zx_m20_IDPDescriptor_GET_protocolSupportEnumeration) */
struct zx_str* zx_m20_IDPDescriptor_GET_protocolSupportEnumeration(struct zx_m20_IDPDescriptor_s* x) { return x->protocolSupportEnumeration; }
/* FUNC(zx_m20_IDPDescriptor_PUT_protocolSupportEnumeration) */
void zx_m20_IDPDescriptor_PUT_protocolSupportEnumeration(struct zx_m20_IDPDescriptor_s* x, struct zx_str* y) { x->protocolSupportEnumeration = y; }
/* FUNC(zx_m20_IDPDescriptor_GET_id) */
struct zx_str* zx_m20_IDPDescriptor_GET_id(struct zx_m20_IDPDescriptor_s* x) { return x->id; }
/* FUNC(zx_m20_IDPDescriptor_PUT_id) */
void zx_m20_IDPDescriptor_PUT_id(struct zx_m20_IDPDescriptor_s* x, struct zx_str* y) { x->id = y; }
/* FUNC(zx_m20_IDPDescriptor_GET_validUntil) */
struct zx_str* zx_m20_IDPDescriptor_GET_validUntil(struct zx_m20_IDPDescriptor_s* x) { return x->validUntil; }
/* FUNC(zx_m20_IDPDescriptor_PUT_validUntil) */
void zx_m20_IDPDescriptor_PUT_validUntil(struct zx_m20_IDPDescriptor_s* x, struct zx_str* y) { x->validUntil = y; }
/* FUNC(zx_m20_IDPDescriptor_GET_cacheDuration) */
struct zx_str* zx_m20_IDPDescriptor_GET_cacheDuration(struct zx_m20_IDPDescriptor_s* x) { return x->cacheDuration; }
/* FUNC(zx_m20_IDPDescriptor_PUT_cacheDuration) */
void zx_m20_IDPDescriptor_PUT_cacheDuration(struct zx_m20_IDPDescriptor_s* x, struct zx_str* y) { x->cacheDuration = y; }







#ifdef ZX_ENA_GETPUT

/* FUNC(zx_m20_KeyDescriptor_NUM_EncryptionMethod) */

int zx_m20_KeyDescriptor_NUM_EncryptionMethod(struct zx_m20_KeyDescriptor_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->EncryptionMethod; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_m20_KeyDescriptor_GET_EncryptionMethod) */

struct zx_elem_s* zx_m20_KeyDescriptor_GET_EncryptionMethod(struct zx_m20_KeyDescriptor_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->EncryptionMethod; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_m20_KeyDescriptor_POP_EncryptionMethod) */

struct zx_elem_s* zx_m20_KeyDescriptor_POP_EncryptionMethod(struct zx_m20_KeyDescriptor_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->EncryptionMethod;
  if (y)
    x->EncryptionMethod = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_m20_KeyDescriptor_PUSH_EncryptionMethod) */

void zx_m20_KeyDescriptor_PUSH_EncryptionMethod(struct zx_m20_KeyDescriptor_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->EncryptionMethod->g;
  x->EncryptionMethod = z;
}

/* FUNC(zx_m20_KeyDescriptor_REV_EncryptionMethod) */

void zx_m20_KeyDescriptor_REV_EncryptionMethod(struct zx_m20_KeyDescriptor_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->EncryptionMethod;
  if (!y) return;
  x->EncryptionMethod = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->EncryptionMethod->g;
    x->EncryptionMethod = y;
    y = nxt;
  }
}

/* FUNC(zx_m20_KeyDescriptor_PUT_EncryptionMethod) */

void zx_m20_KeyDescriptor_PUT_EncryptionMethod(struct zx_m20_KeyDescriptor_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->EncryptionMethod;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->EncryptionMethod = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_m20_KeyDescriptor_ADD_EncryptionMethod) */

void zx_m20_KeyDescriptor_ADD_EncryptionMethod(struct zx_m20_KeyDescriptor_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->EncryptionMethod->g;
    x->EncryptionMethod = z;
    return;
  case -1:
    y = x->EncryptionMethod;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->EncryptionMethod; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_m20_KeyDescriptor_DEL_EncryptionMethod) */

void zx_m20_KeyDescriptor_DEL_EncryptionMethod(struct zx_m20_KeyDescriptor_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->EncryptionMethod = (struct zx_elem_s*)x->EncryptionMethod->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->EncryptionMethod;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->EncryptionMethod; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_m20_KeyDescriptor_NUM_KeySize) */

int zx_m20_KeyDescriptor_NUM_KeySize(struct zx_m20_KeyDescriptor_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->KeySize; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_m20_KeyDescriptor_GET_KeySize) */

struct zx_elem_s* zx_m20_KeyDescriptor_GET_KeySize(struct zx_m20_KeyDescriptor_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->KeySize; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_m20_KeyDescriptor_POP_KeySize) */

struct zx_elem_s* zx_m20_KeyDescriptor_POP_KeySize(struct zx_m20_KeyDescriptor_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->KeySize;
  if (y)
    x->KeySize = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_m20_KeyDescriptor_PUSH_KeySize) */

void zx_m20_KeyDescriptor_PUSH_KeySize(struct zx_m20_KeyDescriptor_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->KeySize->g;
  x->KeySize = z;
}

/* FUNC(zx_m20_KeyDescriptor_REV_KeySize) */

void zx_m20_KeyDescriptor_REV_KeySize(struct zx_m20_KeyDescriptor_s* x)
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

/* FUNC(zx_m20_KeyDescriptor_PUT_KeySize) */

void zx_m20_KeyDescriptor_PUT_KeySize(struct zx_m20_KeyDescriptor_s* x, int n, struct zx_elem_s* z)
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

/* FUNC(zx_m20_KeyDescriptor_ADD_KeySize) */

void zx_m20_KeyDescriptor_ADD_KeySize(struct zx_m20_KeyDescriptor_s* x, int n, struct zx_elem_s* z)
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

/* FUNC(zx_m20_KeyDescriptor_DEL_KeySize) */

void zx_m20_KeyDescriptor_DEL_KeySize(struct zx_m20_KeyDescriptor_s* x, int n)
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

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_m20_KeyDescriptor_NUM_KeyInfo) */

int zx_m20_KeyDescriptor_NUM_KeyInfo(struct zx_m20_KeyDescriptor_s* x)
{
  struct zx_ds_KeyInfo_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->KeyInfo; y; ++n, y = (struct zx_ds_KeyInfo_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_m20_KeyDescriptor_GET_KeyInfo) */

struct zx_ds_KeyInfo_s* zx_m20_KeyDescriptor_GET_KeyInfo(struct zx_m20_KeyDescriptor_s* x, int n)
{
  struct zx_ds_KeyInfo_s* y;
  if (!x) return 0;
  for (y = x->KeyInfo; n>=0 && y; --n, y = (struct zx_ds_KeyInfo_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_m20_KeyDescriptor_POP_KeyInfo) */

struct zx_ds_KeyInfo_s* zx_m20_KeyDescriptor_POP_KeyInfo(struct zx_m20_KeyDescriptor_s* x)
{
  struct zx_ds_KeyInfo_s* y;
  if (!x) return 0;
  y = x->KeyInfo;
  if (y)
    x->KeyInfo = (struct zx_ds_KeyInfo_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_m20_KeyDescriptor_PUSH_KeyInfo) */

void zx_m20_KeyDescriptor_PUSH_KeyInfo(struct zx_m20_KeyDescriptor_s* x, struct zx_ds_KeyInfo_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->KeyInfo->gg.g;
  x->KeyInfo = z;
}

/* FUNC(zx_m20_KeyDescriptor_REV_KeyInfo) */

void zx_m20_KeyDescriptor_REV_KeyInfo(struct zx_m20_KeyDescriptor_s* x)
{
  struct zx_ds_KeyInfo_s* nxt;
  struct zx_ds_KeyInfo_s* y;
  if (!x) return;
  y = x->KeyInfo;
  if (!y) return;
  x->KeyInfo = 0;
  while (y) {
    nxt = (struct zx_ds_KeyInfo_s*)y->gg.g.n;
    y->gg.g.n = &x->KeyInfo->gg.g;
    x->KeyInfo = y;
    y = nxt;
  }
}

/* FUNC(zx_m20_KeyDescriptor_PUT_KeyInfo) */

void zx_m20_KeyDescriptor_PUT_KeyInfo(struct zx_m20_KeyDescriptor_s* x, int n, struct zx_ds_KeyInfo_s* z)
{
  struct zx_ds_KeyInfo_s* y;
  if (!x || !z) return;
  y = x->KeyInfo;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->KeyInfo = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_ds_KeyInfo_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_m20_KeyDescriptor_ADD_KeyInfo) */

void zx_m20_KeyDescriptor_ADD_KeyInfo(struct zx_m20_KeyDescriptor_s* x, int n, struct zx_ds_KeyInfo_s* z)
{
  struct zx_ds_KeyInfo_s* y;
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
    for (; y->gg.g.n; y = (struct zx_ds_KeyInfo_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->KeyInfo; n > 1 && y; --n, y = (struct zx_ds_KeyInfo_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_m20_KeyDescriptor_DEL_KeyInfo) */

void zx_m20_KeyDescriptor_DEL_KeyInfo(struct zx_m20_KeyDescriptor_s* x, int n)
{
  struct zx_ds_KeyInfo_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->KeyInfo = (struct zx_ds_KeyInfo_s*)x->KeyInfo->gg.g.n;
    return;
  case -1:
    y = (struct zx_ds_KeyInfo_s*)x->KeyInfo;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_ds_KeyInfo_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->KeyInfo; n > 1 && y->gg.g.n; --n, y = (struct zx_ds_KeyInfo_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_m20_KeyDescriptor_NUM_Extension) */

int zx_m20_KeyDescriptor_NUM_Extension(struct zx_m20_KeyDescriptor_s* x)
{
  struct zx_m20_Extension_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Extension; y; ++n, y = (struct zx_m20_Extension_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_m20_KeyDescriptor_GET_Extension) */

struct zx_m20_Extension_s* zx_m20_KeyDescriptor_GET_Extension(struct zx_m20_KeyDescriptor_s* x, int n)
{
  struct zx_m20_Extension_s* y;
  if (!x) return 0;
  for (y = x->Extension; n>=0 && y; --n, y = (struct zx_m20_Extension_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_m20_KeyDescriptor_POP_Extension) */

struct zx_m20_Extension_s* zx_m20_KeyDescriptor_POP_Extension(struct zx_m20_KeyDescriptor_s* x)
{
  struct zx_m20_Extension_s* y;
  if (!x) return 0;
  y = x->Extension;
  if (y)
    x->Extension = (struct zx_m20_Extension_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_m20_KeyDescriptor_PUSH_Extension) */

void zx_m20_KeyDescriptor_PUSH_Extension(struct zx_m20_KeyDescriptor_s* x, struct zx_m20_Extension_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Extension->gg.g;
  x->Extension = z;
}

/* FUNC(zx_m20_KeyDescriptor_REV_Extension) */

void zx_m20_KeyDescriptor_REV_Extension(struct zx_m20_KeyDescriptor_s* x)
{
  struct zx_m20_Extension_s* nxt;
  struct zx_m20_Extension_s* y;
  if (!x) return;
  y = x->Extension;
  if (!y) return;
  x->Extension = 0;
  while (y) {
    nxt = (struct zx_m20_Extension_s*)y->gg.g.n;
    y->gg.g.n = &x->Extension->gg.g;
    x->Extension = y;
    y = nxt;
  }
}

/* FUNC(zx_m20_KeyDescriptor_PUT_Extension) */

void zx_m20_KeyDescriptor_PUT_Extension(struct zx_m20_KeyDescriptor_s* x, int n, struct zx_m20_Extension_s* z)
{
  struct zx_m20_Extension_s* y;
  if (!x || !z) return;
  y = x->Extension;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Extension = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_m20_Extension_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_m20_KeyDescriptor_ADD_Extension) */

void zx_m20_KeyDescriptor_ADD_Extension(struct zx_m20_KeyDescriptor_s* x, int n, struct zx_m20_Extension_s* z)
{
  struct zx_m20_Extension_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->Extension->gg.g;
    x->Extension = z;
    return;
  case -1:
    y = x->Extension;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_m20_Extension_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Extension; n > 1 && y; --n, y = (struct zx_m20_Extension_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_m20_KeyDescriptor_DEL_Extension) */

void zx_m20_KeyDescriptor_DEL_Extension(struct zx_m20_KeyDescriptor_s* x, int n)
{
  struct zx_m20_Extension_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Extension = (struct zx_m20_Extension_s*)x->Extension->gg.g.n;
    return;
  case -1:
    y = (struct zx_m20_Extension_s*)x->Extension;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_m20_Extension_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Extension; n > 1 && y->gg.g.n; --n, y = (struct zx_m20_Extension_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif

/* FUNC(zx_m20_KeyDescriptor_GET_use) */
struct zx_str* zx_m20_KeyDescriptor_GET_use(struct zx_m20_KeyDescriptor_s* x) { return x->use; }
/* FUNC(zx_m20_KeyDescriptor_PUT_use) */
void zx_m20_KeyDescriptor_PUT_use(struct zx_m20_KeyDescriptor_s* x, struct zx_str* y) { x->use = y; }







#ifdef ZX_ENA_GETPUT

/* FUNC(zx_m20_Organization_NUM_OrganizationName) */

int zx_m20_Organization_NUM_OrganizationName(struct zx_m20_Organization_s* x)
{
  struct zx_m20_OrganizationName_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->OrganizationName; y; ++n, y = (struct zx_m20_OrganizationName_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_m20_Organization_GET_OrganizationName) */

struct zx_m20_OrganizationName_s* zx_m20_Organization_GET_OrganizationName(struct zx_m20_Organization_s* x, int n)
{
  struct zx_m20_OrganizationName_s* y;
  if (!x) return 0;
  for (y = x->OrganizationName; n>=0 && y; --n, y = (struct zx_m20_OrganizationName_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_m20_Organization_POP_OrganizationName) */

struct zx_m20_OrganizationName_s* zx_m20_Organization_POP_OrganizationName(struct zx_m20_Organization_s* x)
{
  struct zx_m20_OrganizationName_s* y;
  if (!x) return 0;
  y = x->OrganizationName;
  if (y)
    x->OrganizationName = (struct zx_m20_OrganizationName_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_m20_Organization_PUSH_OrganizationName) */

void zx_m20_Organization_PUSH_OrganizationName(struct zx_m20_Organization_s* x, struct zx_m20_OrganizationName_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->OrganizationName->gg.g;
  x->OrganizationName = z;
}

/* FUNC(zx_m20_Organization_REV_OrganizationName) */

void zx_m20_Organization_REV_OrganizationName(struct zx_m20_Organization_s* x)
{
  struct zx_m20_OrganizationName_s* nxt;
  struct zx_m20_OrganizationName_s* y;
  if (!x) return;
  y = x->OrganizationName;
  if (!y) return;
  x->OrganizationName = 0;
  while (y) {
    nxt = (struct zx_m20_OrganizationName_s*)y->gg.g.n;
    y->gg.g.n = &x->OrganizationName->gg.g;
    x->OrganizationName = y;
    y = nxt;
  }
}

/* FUNC(zx_m20_Organization_PUT_OrganizationName) */

void zx_m20_Organization_PUT_OrganizationName(struct zx_m20_Organization_s* x, int n, struct zx_m20_OrganizationName_s* z)
{
  struct zx_m20_OrganizationName_s* y;
  if (!x || !z) return;
  y = x->OrganizationName;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->OrganizationName = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_m20_OrganizationName_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_m20_Organization_ADD_OrganizationName) */

void zx_m20_Organization_ADD_OrganizationName(struct zx_m20_Organization_s* x, int n, struct zx_m20_OrganizationName_s* z)
{
  struct zx_m20_OrganizationName_s* y;
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
    for (; y->gg.g.n; y = (struct zx_m20_OrganizationName_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->OrganizationName; n > 1 && y; --n, y = (struct zx_m20_OrganizationName_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_m20_Organization_DEL_OrganizationName) */

void zx_m20_Organization_DEL_OrganizationName(struct zx_m20_Organization_s* x, int n)
{
  struct zx_m20_OrganizationName_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->OrganizationName = (struct zx_m20_OrganizationName_s*)x->OrganizationName->gg.g.n;
    return;
  case -1:
    y = (struct zx_m20_OrganizationName_s*)x->OrganizationName;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_m20_OrganizationName_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->OrganizationName; n > 1 && y->gg.g.n; --n, y = (struct zx_m20_OrganizationName_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_m20_Organization_NUM_OrganizationDisplayName) */

int zx_m20_Organization_NUM_OrganizationDisplayName(struct zx_m20_Organization_s* x)
{
  struct zx_m20_OrganizationDisplayName_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->OrganizationDisplayName; y; ++n, y = (struct zx_m20_OrganizationDisplayName_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_m20_Organization_GET_OrganizationDisplayName) */

struct zx_m20_OrganizationDisplayName_s* zx_m20_Organization_GET_OrganizationDisplayName(struct zx_m20_Organization_s* x, int n)
{
  struct zx_m20_OrganizationDisplayName_s* y;
  if (!x) return 0;
  for (y = x->OrganizationDisplayName; n>=0 && y; --n, y = (struct zx_m20_OrganizationDisplayName_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_m20_Organization_POP_OrganizationDisplayName) */

struct zx_m20_OrganizationDisplayName_s* zx_m20_Organization_POP_OrganizationDisplayName(struct zx_m20_Organization_s* x)
{
  struct zx_m20_OrganizationDisplayName_s* y;
  if (!x) return 0;
  y = x->OrganizationDisplayName;
  if (y)
    x->OrganizationDisplayName = (struct zx_m20_OrganizationDisplayName_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_m20_Organization_PUSH_OrganizationDisplayName) */

void zx_m20_Organization_PUSH_OrganizationDisplayName(struct zx_m20_Organization_s* x, struct zx_m20_OrganizationDisplayName_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->OrganizationDisplayName->gg.g;
  x->OrganizationDisplayName = z;
}

/* FUNC(zx_m20_Organization_REV_OrganizationDisplayName) */

void zx_m20_Organization_REV_OrganizationDisplayName(struct zx_m20_Organization_s* x)
{
  struct zx_m20_OrganizationDisplayName_s* nxt;
  struct zx_m20_OrganizationDisplayName_s* y;
  if (!x) return;
  y = x->OrganizationDisplayName;
  if (!y) return;
  x->OrganizationDisplayName = 0;
  while (y) {
    nxt = (struct zx_m20_OrganizationDisplayName_s*)y->gg.g.n;
    y->gg.g.n = &x->OrganizationDisplayName->gg.g;
    x->OrganizationDisplayName = y;
    y = nxt;
  }
}

/* FUNC(zx_m20_Organization_PUT_OrganizationDisplayName) */

void zx_m20_Organization_PUT_OrganizationDisplayName(struct zx_m20_Organization_s* x, int n, struct zx_m20_OrganizationDisplayName_s* z)
{
  struct zx_m20_OrganizationDisplayName_s* y;
  if (!x || !z) return;
  y = x->OrganizationDisplayName;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->OrganizationDisplayName = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_m20_OrganizationDisplayName_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_m20_Organization_ADD_OrganizationDisplayName) */

void zx_m20_Organization_ADD_OrganizationDisplayName(struct zx_m20_Organization_s* x, int n, struct zx_m20_OrganizationDisplayName_s* z)
{
  struct zx_m20_OrganizationDisplayName_s* y;
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
    for (; y->gg.g.n; y = (struct zx_m20_OrganizationDisplayName_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->OrganizationDisplayName; n > 1 && y; --n, y = (struct zx_m20_OrganizationDisplayName_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_m20_Organization_DEL_OrganizationDisplayName) */

void zx_m20_Organization_DEL_OrganizationDisplayName(struct zx_m20_Organization_s* x, int n)
{
  struct zx_m20_OrganizationDisplayName_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->OrganizationDisplayName = (struct zx_m20_OrganizationDisplayName_s*)x->OrganizationDisplayName->gg.g.n;
    return;
  case -1:
    y = (struct zx_m20_OrganizationDisplayName_s*)x->OrganizationDisplayName;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_m20_OrganizationDisplayName_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->OrganizationDisplayName; n > 1 && y->gg.g.n; --n, y = (struct zx_m20_OrganizationDisplayName_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_m20_Organization_NUM_OrganizationURL) */

int zx_m20_Organization_NUM_OrganizationURL(struct zx_m20_Organization_s* x)
{
  struct zx_m20_OrganizationURL_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->OrganizationURL; y; ++n, y = (struct zx_m20_OrganizationURL_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_m20_Organization_GET_OrganizationURL) */

struct zx_m20_OrganizationURL_s* zx_m20_Organization_GET_OrganizationURL(struct zx_m20_Organization_s* x, int n)
{
  struct zx_m20_OrganizationURL_s* y;
  if (!x) return 0;
  for (y = x->OrganizationURL; n>=0 && y; --n, y = (struct zx_m20_OrganizationURL_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_m20_Organization_POP_OrganizationURL) */

struct zx_m20_OrganizationURL_s* zx_m20_Organization_POP_OrganizationURL(struct zx_m20_Organization_s* x)
{
  struct zx_m20_OrganizationURL_s* y;
  if (!x) return 0;
  y = x->OrganizationURL;
  if (y)
    x->OrganizationURL = (struct zx_m20_OrganizationURL_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_m20_Organization_PUSH_OrganizationURL) */

void zx_m20_Organization_PUSH_OrganizationURL(struct zx_m20_Organization_s* x, struct zx_m20_OrganizationURL_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->OrganizationURL->gg.g;
  x->OrganizationURL = z;
}

/* FUNC(zx_m20_Organization_REV_OrganizationURL) */

void zx_m20_Organization_REV_OrganizationURL(struct zx_m20_Organization_s* x)
{
  struct zx_m20_OrganizationURL_s* nxt;
  struct zx_m20_OrganizationURL_s* y;
  if (!x) return;
  y = x->OrganizationURL;
  if (!y) return;
  x->OrganizationURL = 0;
  while (y) {
    nxt = (struct zx_m20_OrganizationURL_s*)y->gg.g.n;
    y->gg.g.n = &x->OrganizationURL->gg.g;
    x->OrganizationURL = y;
    y = nxt;
  }
}

/* FUNC(zx_m20_Organization_PUT_OrganizationURL) */

void zx_m20_Organization_PUT_OrganizationURL(struct zx_m20_Organization_s* x, int n, struct zx_m20_OrganizationURL_s* z)
{
  struct zx_m20_OrganizationURL_s* y;
  if (!x || !z) return;
  y = x->OrganizationURL;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->OrganizationURL = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_m20_OrganizationURL_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_m20_Organization_ADD_OrganizationURL) */

void zx_m20_Organization_ADD_OrganizationURL(struct zx_m20_Organization_s* x, int n, struct zx_m20_OrganizationURL_s* z)
{
  struct zx_m20_OrganizationURL_s* y;
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
    for (; y->gg.g.n; y = (struct zx_m20_OrganizationURL_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->OrganizationURL; n > 1 && y; --n, y = (struct zx_m20_OrganizationURL_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_m20_Organization_DEL_OrganizationURL) */

void zx_m20_Organization_DEL_OrganizationURL(struct zx_m20_Organization_s* x, int n)
{
  struct zx_m20_OrganizationURL_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->OrganizationURL = (struct zx_m20_OrganizationURL_s*)x->OrganizationURL->gg.g.n;
    return;
  case -1:
    y = (struct zx_m20_OrganizationURL_s*)x->OrganizationURL;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_m20_OrganizationURL_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->OrganizationURL; n > 1 && y->gg.g.n; --n, y = (struct zx_m20_OrganizationURL_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_m20_Organization_NUM_Extension) */

int zx_m20_Organization_NUM_Extension(struct zx_m20_Organization_s* x)
{
  struct zx_m20_Extension_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Extension; y; ++n, y = (struct zx_m20_Extension_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_m20_Organization_GET_Extension) */

struct zx_m20_Extension_s* zx_m20_Organization_GET_Extension(struct zx_m20_Organization_s* x, int n)
{
  struct zx_m20_Extension_s* y;
  if (!x) return 0;
  for (y = x->Extension; n>=0 && y; --n, y = (struct zx_m20_Extension_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_m20_Organization_POP_Extension) */

struct zx_m20_Extension_s* zx_m20_Organization_POP_Extension(struct zx_m20_Organization_s* x)
{
  struct zx_m20_Extension_s* y;
  if (!x) return 0;
  y = x->Extension;
  if (y)
    x->Extension = (struct zx_m20_Extension_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_m20_Organization_PUSH_Extension) */

void zx_m20_Organization_PUSH_Extension(struct zx_m20_Organization_s* x, struct zx_m20_Extension_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Extension->gg.g;
  x->Extension = z;
}

/* FUNC(zx_m20_Organization_REV_Extension) */

void zx_m20_Organization_REV_Extension(struct zx_m20_Organization_s* x)
{
  struct zx_m20_Extension_s* nxt;
  struct zx_m20_Extension_s* y;
  if (!x) return;
  y = x->Extension;
  if (!y) return;
  x->Extension = 0;
  while (y) {
    nxt = (struct zx_m20_Extension_s*)y->gg.g.n;
    y->gg.g.n = &x->Extension->gg.g;
    x->Extension = y;
    y = nxt;
  }
}

/* FUNC(zx_m20_Organization_PUT_Extension) */

void zx_m20_Organization_PUT_Extension(struct zx_m20_Organization_s* x, int n, struct zx_m20_Extension_s* z)
{
  struct zx_m20_Extension_s* y;
  if (!x || !z) return;
  y = x->Extension;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Extension = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_m20_Extension_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_m20_Organization_ADD_Extension) */

void zx_m20_Organization_ADD_Extension(struct zx_m20_Organization_s* x, int n, struct zx_m20_Extension_s* z)
{
  struct zx_m20_Extension_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->Extension->gg.g;
    x->Extension = z;
    return;
  case -1:
    y = x->Extension;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_m20_Extension_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Extension; n > 1 && y; --n, y = (struct zx_m20_Extension_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_m20_Organization_DEL_Extension) */

void zx_m20_Organization_DEL_Extension(struct zx_m20_Organization_s* x, int n)
{
  struct zx_m20_Extension_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Extension = (struct zx_m20_Extension_s*)x->Extension->gg.g.n;
    return;
  case -1:
    y = (struct zx_m20_Extension_s*)x->Extension;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_m20_Extension_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Extension; n > 1 && y->gg.g.n; --n, y = (struct zx_m20_Extension_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif






/* FUNC(zx_m20_OrganizationDisplayName_GET_lang) */
struct zx_str* zx_m20_OrganizationDisplayName_GET_lang(struct zx_m20_OrganizationDisplayName_s* x) { return x->lang; }
/* FUNC(zx_m20_OrganizationDisplayName_PUT_lang) */
void zx_m20_OrganizationDisplayName_PUT_lang(struct zx_m20_OrganizationDisplayName_s* x, struct zx_str* y) { x->lang = y; }





/* FUNC(zx_m20_OrganizationName_GET_lang) */
struct zx_str* zx_m20_OrganizationName_GET_lang(struct zx_m20_OrganizationName_s* x) { return x->lang; }
/* FUNC(zx_m20_OrganizationName_PUT_lang) */
void zx_m20_OrganizationName_PUT_lang(struct zx_m20_OrganizationName_s* x, struct zx_str* y) { x->lang = y; }





/* FUNC(zx_m20_OrganizationURL_GET_lang) */
struct zx_str* zx_m20_OrganizationURL_GET_lang(struct zx_m20_OrganizationURL_s* x) { return x->lang; }
/* FUNC(zx_m20_OrganizationURL_PUT_lang) */
void zx_m20_OrganizationURL_PUT_lang(struct zx_m20_OrganizationURL_s* x, struct zx_str* y) { x->lang = y; }







#ifdef ZX_ENA_GETPUT

/* FUNC(zx_m20_SPDescriptor_NUM_KeyDescriptor) */

int zx_m20_SPDescriptor_NUM_KeyDescriptor(struct zx_m20_SPDescriptor_s* x)
{
  struct zx_m20_KeyDescriptor_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->KeyDescriptor; y; ++n, y = (struct zx_m20_KeyDescriptor_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_m20_SPDescriptor_GET_KeyDescriptor) */

struct zx_m20_KeyDescriptor_s* zx_m20_SPDescriptor_GET_KeyDescriptor(struct zx_m20_SPDescriptor_s* x, int n)
{
  struct zx_m20_KeyDescriptor_s* y;
  if (!x) return 0;
  for (y = x->KeyDescriptor; n>=0 && y; --n, y = (struct zx_m20_KeyDescriptor_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_m20_SPDescriptor_POP_KeyDescriptor) */

struct zx_m20_KeyDescriptor_s* zx_m20_SPDescriptor_POP_KeyDescriptor(struct zx_m20_SPDescriptor_s* x)
{
  struct zx_m20_KeyDescriptor_s* y;
  if (!x) return 0;
  y = x->KeyDescriptor;
  if (y)
    x->KeyDescriptor = (struct zx_m20_KeyDescriptor_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_m20_SPDescriptor_PUSH_KeyDescriptor) */

void zx_m20_SPDescriptor_PUSH_KeyDescriptor(struct zx_m20_SPDescriptor_s* x, struct zx_m20_KeyDescriptor_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->KeyDescriptor->gg.g;
  x->KeyDescriptor = z;
}

/* FUNC(zx_m20_SPDescriptor_REV_KeyDescriptor) */

void zx_m20_SPDescriptor_REV_KeyDescriptor(struct zx_m20_SPDescriptor_s* x)
{
  struct zx_m20_KeyDescriptor_s* nxt;
  struct zx_m20_KeyDescriptor_s* y;
  if (!x) return;
  y = x->KeyDescriptor;
  if (!y) return;
  x->KeyDescriptor = 0;
  while (y) {
    nxt = (struct zx_m20_KeyDescriptor_s*)y->gg.g.n;
    y->gg.g.n = &x->KeyDescriptor->gg.g;
    x->KeyDescriptor = y;
    y = nxt;
  }
}

/* FUNC(zx_m20_SPDescriptor_PUT_KeyDescriptor) */

void zx_m20_SPDescriptor_PUT_KeyDescriptor(struct zx_m20_SPDescriptor_s* x, int n, struct zx_m20_KeyDescriptor_s* z)
{
  struct zx_m20_KeyDescriptor_s* y;
  if (!x || !z) return;
  y = x->KeyDescriptor;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->KeyDescriptor = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_m20_KeyDescriptor_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_m20_SPDescriptor_ADD_KeyDescriptor) */

void zx_m20_SPDescriptor_ADD_KeyDescriptor(struct zx_m20_SPDescriptor_s* x, int n, struct zx_m20_KeyDescriptor_s* z)
{
  struct zx_m20_KeyDescriptor_s* y;
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
    for (; y->gg.g.n; y = (struct zx_m20_KeyDescriptor_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->KeyDescriptor; n > 1 && y; --n, y = (struct zx_m20_KeyDescriptor_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_m20_SPDescriptor_DEL_KeyDescriptor) */

void zx_m20_SPDescriptor_DEL_KeyDescriptor(struct zx_m20_SPDescriptor_s* x, int n)
{
  struct zx_m20_KeyDescriptor_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->KeyDescriptor = (struct zx_m20_KeyDescriptor_s*)x->KeyDescriptor->gg.g.n;
    return;
  case -1:
    y = (struct zx_m20_KeyDescriptor_s*)x->KeyDescriptor;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_m20_KeyDescriptor_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->KeyDescriptor; n > 1 && y->gg.g.n; --n, y = (struct zx_m20_KeyDescriptor_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_m20_SPDescriptor_NUM_SoapEndpoint) */

int zx_m20_SPDescriptor_NUM_SoapEndpoint(struct zx_m20_SPDescriptor_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->SoapEndpoint; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_m20_SPDescriptor_GET_SoapEndpoint) */

struct zx_elem_s* zx_m20_SPDescriptor_GET_SoapEndpoint(struct zx_m20_SPDescriptor_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->SoapEndpoint; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_m20_SPDescriptor_POP_SoapEndpoint) */

struct zx_elem_s* zx_m20_SPDescriptor_POP_SoapEndpoint(struct zx_m20_SPDescriptor_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->SoapEndpoint;
  if (y)
    x->SoapEndpoint = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_m20_SPDescriptor_PUSH_SoapEndpoint) */

void zx_m20_SPDescriptor_PUSH_SoapEndpoint(struct zx_m20_SPDescriptor_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->SoapEndpoint->g;
  x->SoapEndpoint = z;
}

/* FUNC(zx_m20_SPDescriptor_REV_SoapEndpoint) */

void zx_m20_SPDescriptor_REV_SoapEndpoint(struct zx_m20_SPDescriptor_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->SoapEndpoint;
  if (!y) return;
  x->SoapEndpoint = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->SoapEndpoint->g;
    x->SoapEndpoint = y;
    y = nxt;
  }
}

/* FUNC(zx_m20_SPDescriptor_PUT_SoapEndpoint) */

void zx_m20_SPDescriptor_PUT_SoapEndpoint(struct zx_m20_SPDescriptor_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->SoapEndpoint;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->SoapEndpoint = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_m20_SPDescriptor_ADD_SoapEndpoint) */

void zx_m20_SPDescriptor_ADD_SoapEndpoint(struct zx_m20_SPDescriptor_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->SoapEndpoint->g;
    x->SoapEndpoint = z;
    return;
  case -1:
    y = x->SoapEndpoint;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->SoapEndpoint; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_m20_SPDescriptor_DEL_SoapEndpoint) */

void zx_m20_SPDescriptor_DEL_SoapEndpoint(struct zx_m20_SPDescriptor_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->SoapEndpoint = (struct zx_elem_s*)x->SoapEndpoint->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->SoapEndpoint;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->SoapEndpoint; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_m20_SPDescriptor_NUM_SingleLogoutServiceURL) */

int zx_m20_SPDescriptor_NUM_SingleLogoutServiceURL(struct zx_m20_SPDescriptor_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->SingleLogoutServiceURL; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_m20_SPDescriptor_GET_SingleLogoutServiceURL) */

struct zx_elem_s* zx_m20_SPDescriptor_GET_SingleLogoutServiceURL(struct zx_m20_SPDescriptor_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->SingleLogoutServiceURL; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_m20_SPDescriptor_POP_SingleLogoutServiceURL) */

struct zx_elem_s* zx_m20_SPDescriptor_POP_SingleLogoutServiceURL(struct zx_m20_SPDescriptor_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->SingleLogoutServiceURL;
  if (y)
    x->SingleLogoutServiceURL = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_m20_SPDescriptor_PUSH_SingleLogoutServiceURL) */

void zx_m20_SPDescriptor_PUSH_SingleLogoutServiceURL(struct zx_m20_SPDescriptor_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->SingleLogoutServiceURL->g;
  x->SingleLogoutServiceURL = z;
}

/* FUNC(zx_m20_SPDescriptor_REV_SingleLogoutServiceURL) */

void zx_m20_SPDescriptor_REV_SingleLogoutServiceURL(struct zx_m20_SPDescriptor_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->SingleLogoutServiceURL;
  if (!y) return;
  x->SingleLogoutServiceURL = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->SingleLogoutServiceURL->g;
    x->SingleLogoutServiceURL = y;
    y = nxt;
  }
}

/* FUNC(zx_m20_SPDescriptor_PUT_SingleLogoutServiceURL) */

void zx_m20_SPDescriptor_PUT_SingleLogoutServiceURL(struct zx_m20_SPDescriptor_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->SingleLogoutServiceURL;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->SingleLogoutServiceURL = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_m20_SPDescriptor_ADD_SingleLogoutServiceURL) */

void zx_m20_SPDescriptor_ADD_SingleLogoutServiceURL(struct zx_m20_SPDescriptor_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->SingleLogoutServiceURL->g;
    x->SingleLogoutServiceURL = z;
    return;
  case -1:
    y = x->SingleLogoutServiceURL;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->SingleLogoutServiceURL; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_m20_SPDescriptor_DEL_SingleLogoutServiceURL) */

void zx_m20_SPDescriptor_DEL_SingleLogoutServiceURL(struct zx_m20_SPDescriptor_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->SingleLogoutServiceURL = (struct zx_elem_s*)x->SingleLogoutServiceURL->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->SingleLogoutServiceURL;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->SingleLogoutServiceURL; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_m20_SPDescriptor_NUM_SingleLogoutServiceReturnURL) */

int zx_m20_SPDescriptor_NUM_SingleLogoutServiceReturnURL(struct zx_m20_SPDescriptor_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->SingleLogoutServiceReturnURL; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_m20_SPDescriptor_GET_SingleLogoutServiceReturnURL) */

struct zx_elem_s* zx_m20_SPDescriptor_GET_SingleLogoutServiceReturnURL(struct zx_m20_SPDescriptor_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->SingleLogoutServiceReturnURL; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_m20_SPDescriptor_POP_SingleLogoutServiceReturnURL) */

struct zx_elem_s* zx_m20_SPDescriptor_POP_SingleLogoutServiceReturnURL(struct zx_m20_SPDescriptor_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->SingleLogoutServiceReturnURL;
  if (y)
    x->SingleLogoutServiceReturnURL = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_m20_SPDescriptor_PUSH_SingleLogoutServiceReturnURL) */

void zx_m20_SPDescriptor_PUSH_SingleLogoutServiceReturnURL(struct zx_m20_SPDescriptor_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->SingleLogoutServiceReturnURL->g;
  x->SingleLogoutServiceReturnURL = z;
}

/* FUNC(zx_m20_SPDescriptor_REV_SingleLogoutServiceReturnURL) */

void zx_m20_SPDescriptor_REV_SingleLogoutServiceReturnURL(struct zx_m20_SPDescriptor_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->SingleLogoutServiceReturnURL;
  if (!y) return;
  x->SingleLogoutServiceReturnURL = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->SingleLogoutServiceReturnURL->g;
    x->SingleLogoutServiceReturnURL = y;
    y = nxt;
  }
}

/* FUNC(zx_m20_SPDescriptor_PUT_SingleLogoutServiceReturnURL) */

void zx_m20_SPDescriptor_PUT_SingleLogoutServiceReturnURL(struct zx_m20_SPDescriptor_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->SingleLogoutServiceReturnURL;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->SingleLogoutServiceReturnURL = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_m20_SPDescriptor_ADD_SingleLogoutServiceReturnURL) */

void zx_m20_SPDescriptor_ADD_SingleLogoutServiceReturnURL(struct zx_m20_SPDescriptor_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->SingleLogoutServiceReturnURL->g;
    x->SingleLogoutServiceReturnURL = z;
    return;
  case -1:
    y = x->SingleLogoutServiceReturnURL;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->SingleLogoutServiceReturnURL; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_m20_SPDescriptor_DEL_SingleLogoutServiceReturnURL) */

void zx_m20_SPDescriptor_DEL_SingleLogoutServiceReturnURL(struct zx_m20_SPDescriptor_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->SingleLogoutServiceReturnURL = (struct zx_elem_s*)x->SingleLogoutServiceReturnURL->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->SingleLogoutServiceReturnURL;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->SingleLogoutServiceReturnURL; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_m20_SPDescriptor_NUM_FederationTerminationServiceURL) */

int zx_m20_SPDescriptor_NUM_FederationTerminationServiceURL(struct zx_m20_SPDescriptor_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->FederationTerminationServiceURL; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_m20_SPDescriptor_GET_FederationTerminationServiceURL) */

struct zx_elem_s* zx_m20_SPDescriptor_GET_FederationTerminationServiceURL(struct zx_m20_SPDescriptor_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->FederationTerminationServiceURL; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_m20_SPDescriptor_POP_FederationTerminationServiceURL) */

struct zx_elem_s* zx_m20_SPDescriptor_POP_FederationTerminationServiceURL(struct zx_m20_SPDescriptor_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->FederationTerminationServiceURL;
  if (y)
    x->FederationTerminationServiceURL = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_m20_SPDescriptor_PUSH_FederationTerminationServiceURL) */

void zx_m20_SPDescriptor_PUSH_FederationTerminationServiceURL(struct zx_m20_SPDescriptor_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->FederationTerminationServiceURL->g;
  x->FederationTerminationServiceURL = z;
}

/* FUNC(zx_m20_SPDescriptor_REV_FederationTerminationServiceURL) */

void zx_m20_SPDescriptor_REV_FederationTerminationServiceURL(struct zx_m20_SPDescriptor_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->FederationTerminationServiceURL;
  if (!y) return;
  x->FederationTerminationServiceURL = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->FederationTerminationServiceURL->g;
    x->FederationTerminationServiceURL = y;
    y = nxt;
  }
}

/* FUNC(zx_m20_SPDescriptor_PUT_FederationTerminationServiceURL) */

void zx_m20_SPDescriptor_PUT_FederationTerminationServiceURL(struct zx_m20_SPDescriptor_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->FederationTerminationServiceURL;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->FederationTerminationServiceURL = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_m20_SPDescriptor_ADD_FederationTerminationServiceURL) */

void zx_m20_SPDescriptor_ADD_FederationTerminationServiceURL(struct zx_m20_SPDescriptor_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->FederationTerminationServiceURL->g;
    x->FederationTerminationServiceURL = z;
    return;
  case -1:
    y = x->FederationTerminationServiceURL;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->FederationTerminationServiceURL; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_m20_SPDescriptor_DEL_FederationTerminationServiceURL) */

void zx_m20_SPDescriptor_DEL_FederationTerminationServiceURL(struct zx_m20_SPDescriptor_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->FederationTerminationServiceURL = (struct zx_elem_s*)x->FederationTerminationServiceURL->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->FederationTerminationServiceURL;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->FederationTerminationServiceURL; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_m20_SPDescriptor_NUM_FederationTerminationServiceReturnURL) */

int zx_m20_SPDescriptor_NUM_FederationTerminationServiceReturnURL(struct zx_m20_SPDescriptor_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->FederationTerminationServiceReturnURL; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_m20_SPDescriptor_GET_FederationTerminationServiceReturnURL) */

struct zx_elem_s* zx_m20_SPDescriptor_GET_FederationTerminationServiceReturnURL(struct zx_m20_SPDescriptor_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->FederationTerminationServiceReturnURL; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_m20_SPDescriptor_POP_FederationTerminationServiceReturnURL) */

struct zx_elem_s* zx_m20_SPDescriptor_POP_FederationTerminationServiceReturnURL(struct zx_m20_SPDescriptor_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->FederationTerminationServiceReturnURL;
  if (y)
    x->FederationTerminationServiceReturnURL = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_m20_SPDescriptor_PUSH_FederationTerminationServiceReturnURL) */

void zx_m20_SPDescriptor_PUSH_FederationTerminationServiceReturnURL(struct zx_m20_SPDescriptor_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->FederationTerminationServiceReturnURL->g;
  x->FederationTerminationServiceReturnURL = z;
}

/* FUNC(zx_m20_SPDescriptor_REV_FederationTerminationServiceReturnURL) */

void zx_m20_SPDescriptor_REV_FederationTerminationServiceReturnURL(struct zx_m20_SPDescriptor_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->FederationTerminationServiceReturnURL;
  if (!y) return;
  x->FederationTerminationServiceReturnURL = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->FederationTerminationServiceReturnURL->g;
    x->FederationTerminationServiceReturnURL = y;
    y = nxt;
  }
}

/* FUNC(zx_m20_SPDescriptor_PUT_FederationTerminationServiceReturnURL) */

void zx_m20_SPDescriptor_PUT_FederationTerminationServiceReturnURL(struct zx_m20_SPDescriptor_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->FederationTerminationServiceReturnURL;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->FederationTerminationServiceReturnURL = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_m20_SPDescriptor_ADD_FederationTerminationServiceReturnURL) */

void zx_m20_SPDescriptor_ADD_FederationTerminationServiceReturnURL(struct zx_m20_SPDescriptor_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->FederationTerminationServiceReturnURL->g;
    x->FederationTerminationServiceReturnURL = z;
    return;
  case -1:
    y = x->FederationTerminationServiceReturnURL;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->FederationTerminationServiceReturnURL; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_m20_SPDescriptor_DEL_FederationTerminationServiceReturnURL) */

void zx_m20_SPDescriptor_DEL_FederationTerminationServiceReturnURL(struct zx_m20_SPDescriptor_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->FederationTerminationServiceReturnURL = (struct zx_elem_s*)x->FederationTerminationServiceReturnURL->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->FederationTerminationServiceReturnURL;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->FederationTerminationServiceReturnURL; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_m20_SPDescriptor_NUM_FederationTerminationNotificationProtocolProfile) */

int zx_m20_SPDescriptor_NUM_FederationTerminationNotificationProtocolProfile(struct zx_m20_SPDescriptor_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->FederationTerminationNotificationProtocolProfile; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_m20_SPDescriptor_GET_FederationTerminationNotificationProtocolProfile) */

struct zx_elem_s* zx_m20_SPDescriptor_GET_FederationTerminationNotificationProtocolProfile(struct zx_m20_SPDescriptor_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->FederationTerminationNotificationProtocolProfile; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_m20_SPDescriptor_POP_FederationTerminationNotificationProtocolProfile) */

struct zx_elem_s* zx_m20_SPDescriptor_POP_FederationTerminationNotificationProtocolProfile(struct zx_m20_SPDescriptor_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->FederationTerminationNotificationProtocolProfile;
  if (y)
    x->FederationTerminationNotificationProtocolProfile = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_m20_SPDescriptor_PUSH_FederationTerminationNotificationProtocolProfile) */

void zx_m20_SPDescriptor_PUSH_FederationTerminationNotificationProtocolProfile(struct zx_m20_SPDescriptor_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->FederationTerminationNotificationProtocolProfile->g;
  x->FederationTerminationNotificationProtocolProfile = z;
}

/* FUNC(zx_m20_SPDescriptor_REV_FederationTerminationNotificationProtocolProfile) */

void zx_m20_SPDescriptor_REV_FederationTerminationNotificationProtocolProfile(struct zx_m20_SPDescriptor_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->FederationTerminationNotificationProtocolProfile;
  if (!y) return;
  x->FederationTerminationNotificationProtocolProfile = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->FederationTerminationNotificationProtocolProfile->g;
    x->FederationTerminationNotificationProtocolProfile = y;
    y = nxt;
  }
}

/* FUNC(zx_m20_SPDescriptor_PUT_FederationTerminationNotificationProtocolProfile) */

void zx_m20_SPDescriptor_PUT_FederationTerminationNotificationProtocolProfile(struct zx_m20_SPDescriptor_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->FederationTerminationNotificationProtocolProfile;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->FederationTerminationNotificationProtocolProfile = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_m20_SPDescriptor_ADD_FederationTerminationNotificationProtocolProfile) */

void zx_m20_SPDescriptor_ADD_FederationTerminationNotificationProtocolProfile(struct zx_m20_SPDescriptor_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->FederationTerminationNotificationProtocolProfile->g;
    x->FederationTerminationNotificationProtocolProfile = z;
    return;
  case -1:
    y = x->FederationTerminationNotificationProtocolProfile;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->FederationTerminationNotificationProtocolProfile; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_m20_SPDescriptor_DEL_FederationTerminationNotificationProtocolProfile) */

void zx_m20_SPDescriptor_DEL_FederationTerminationNotificationProtocolProfile(struct zx_m20_SPDescriptor_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->FederationTerminationNotificationProtocolProfile = (struct zx_elem_s*)x->FederationTerminationNotificationProtocolProfile->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->FederationTerminationNotificationProtocolProfile;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->FederationTerminationNotificationProtocolProfile; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_m20_SPDescriptor_NUM_SingleLogoutProtocolProfile) */

int zx_m20_SPDescriptor_NUM_SingleLogoutProtocolProfile(struct zx_m20_SPDescriptor_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->SingleLogoutProtocolProfile; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_m20_SPDescriptor_GET_SingleLogoutProtocolProfile) */

struct zx_elem_s* zx_m20_SPDescriptor_GET_SingleLogoutProtocolProfile(struct zx_m20_SPDescriptor_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->SingleLogoutProtocolProfile; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_m20_SPDescriptor_POP_SingleLogoutProtocolProfile) */

struct zx_elem_s* zx_m20_SPDescriptor_POP_SingleLogoutProtocolProfile(struct zx_m20_SPDescriptor_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->SingleLogoutProtocolProfile;
  if (y)
    x->SingleLogoutProtocolProfile = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_m20_SPDescriptor_PUSH_SingleLogoutProtocolProfile) */

void zx_m20_SPDescriptor_PUSH_SingleLogoutProtocolProfile(struct zx_m20_SPDescriptor_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->SingleLogoutProtocolProfile->g;
  x->SingleLogoutProtocolProfile = z;
}

/* FUNC(zx_m20_SPDescriptor_REV_SingleLogoutProtocolProfile) */

void zx_m20_SPDescriptor_REV_SingleLogoutProtocolProfile(struct zx_m20_SPDescriptor_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->SingleLogoutProtocolProfile;
  if (!y) return;
  x->SingleLogoutProtocolProfile = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->SingleLogoutProtocolProfile->g;
    x->SingleLogoutProtocolProfile = y;
    y = nxt;
  }
}

/* FUNC(zx_m20_SPDescriptor_PUT_SingleLogoutProtocolProfile) */

void zx_m20_SPDescriptor_PUT_SingleLogoutProtocolProfile(struct zx_m20_SPDescriptor_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->SingleLogoutProtocolProfile;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->SingleLogoutProtocolProfile = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_m20_SPDescriptor_ADD_SingleLogoutProtocolProfile) */

void zx_m20_SPDescriptor_ADD_SingleLogoutProtocolProfile(struct zx_m20_SPDescriptor_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->SingleLogoutProtocolProfile->g;
    x->SingleLogoutProtocolProfile = z;
    return;
  case -1:
    y = x->SingleLogoutProtocolProfile;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->SingleLogoutProtocolProfile; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_m20_SPDescriptor_DEL_SingleLogoutProtocolProfile) */

void zx_m20_SPDescriptor_DEL_SingleLogoutProtocolProfile(struct zx_m20_SPDescriptor_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->SingleLogoutProtocolProfile = (struct zx_elem_s*)x->SingleLogoutProtocolProfile->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->SingleLogoutProtocolProfile;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->SingleLogoutProtocolProfile; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_m20_SPDescriptor_NUM_RegisterNameIdentifierProtocolProfile) */

int zx_m20_SPDescriptor_NUM_RegisterNameIdentifierProtocolProfile(struct zx_m20_SPDescriptor_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->RegisterNameIdentifierProtocolProfile; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_m20_SPDescriptor_GET_RegisterNameIdentifierProtocolProfile) */

struct zx_elem_s* zx_m20_SPDescriptor_GET_RegisterNameIdentifierProtocolProfile(struct zx_m20_SPDescriptor_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->RegisterNameIdentifierProtocolProfile; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_m20_SPDescriptor_POP_RegisterNameIdentifierProtocolProfile) */

struct zx_elem_s* zx_m20_SPDescriptor_POP_RegisterNameIdentifierProtocolProfile(struct zx_m20_SPDescriptor_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->RegisterNameIdentifierProtocolProfile;
  if (y)
    x->RegisterNameIdentifierProtocolProfile = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_m20_SPDescriptor_PUSH_RegisterNameIdentifierProtocolProfile) */

void zx_m20_SPDescriptor_PUSH_RegisterNameIdentifierProtocolProfile(struct zx_m20_SPDescriptor_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->RegisterNameIdentifierProtocolProfile->g;
  x->RegisterNameIdentifierProtocolProfile = z;
}

/* FUNC(zx_m20_SPDescriptor_REV_RegisterNameIdentifierProtocolProfile) */

void zx_m20_SPDescriptor_REV_RegisterNameIdentifierProtocolProfile(struct zx_m20_SPDescriptor_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->RegisterNameIdentifierProtocolProfile;
  if (!y) return;
  x->RegisterNameIdentifierProtocolProfile = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->RegisterNameIdentifierProtocolProfile->g;
    x->RegisterNameIdentifierProtocolProfile = y;
    y = nxt;
  }
}

/* FUNC(zx_m20_SPDescriptor_PUT_RegisterNameIdentifierProtocolProfile) */

void zx_m20_SPDescriptor_PUT_RegisterNameIdentifierProtocolProfile(struct zx_m20_SPDescriptor_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->RegisterNameIdentifierProtocolProfile;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->RegisterNameIdentifierProtocolProfile = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_m20_SPDescriptor_ADD_RegisterNameIdentifierProtocolProfile) */

void zx_m20_SPDescriptor_ADD_RegisterNameIdentifierProtocolProfile(struct zx_m20_SPDescriptor_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->RegisterNameIdentifierProtocolProfile->g;
    x->RegisterNameIdentifierProtocolProfile = z;
    return;
  case -1:
    y = x->RegisterNameIdentifierProtocolProfile;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->RegisterNameIdentifierProtocolProfile; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_m20_SPDescriptor_DEL_RegisterNameIdentifierProtocolProfile) */

void zx_m20_SPDescriptor_DEL_RegisterNameIdentifierProtocolProfile(struct zx_m20_SPDescriptor_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->RegisterNameIdentifierProtocolProfile = (struct zx_elem_s*)x->RegisterNameIdentifierProtocolProfile->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->RegisterNameIdentifierProtocolProfile;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->RegisterNameIdentifierProtocolProfile; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_m20_SPDescriptor_NUM_RegisterNameIdentifierServiceURL) */

int zx_m20_SPDescriptor_NUM_RegisterNameIdentifierServiceURL(struct zx_m20_SPDescriptor_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->RegisterNameIdentifierServiceURL; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_m20_SPDescriptor_GET_RegisterNameIdentifierServiceURL) */

struct zx_elem_s* zx_m20_SPDescriptor_GET_RegisterNameIdentifierServiceURL(struct zx_m20_SPDescriptor_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->RegisterNameIdentifierServiceURL; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_m20_SPDescriptor_POP_RegisterNameIdentifierServiceURL) */

struct zx_elem_s* zx_m20_SPDescriptor_POP_RegisterNameIdentifierServiceURL(struct zx_m20_SPDescriptor_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->RegisterNameIdentifierServiceURL;
  if (y)
    x->RegisterNameIdentifierServiceURL = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_m20_SPDescriptor_PUSH_RegisterNameIdentifierServiceURL) */

void zx_m20_SPDescriptor_PUSH_RegisterNameIdentifierServiceURL(struct zx_m20_SPDescriptor_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->RegisterNameIdentifierServiceURL->g;
  x->RegisterNameIdentifierServiceURL = z;
}

/* FUNC(zx_m20_SPDescriptor_REV_RegisterNameIdentifierServiceURL) */

void zx_m20_SPDescriptor_REV_RegisterNameIdentifierServiceURL(struct zx_m20_SPDescriptor_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->RegisterNameIdentifierServiceURL;
  if (!y) return;
  x->RegisterNameIdentifierServiceURL = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->RegisterNameIdentifierServiceURL->g;
    x->RegisterNameIdentifierServiceURL = y;
    y = nxt;
  }
}

/* FUNC(zx_m20_SPDescriptor_PUT_RegisterNameIdentifierServiceURL) */

void zx_m20_SPDescriptor_PUT_RegisterNameIdentifierServiceURL(struct zx_m20_SPDescriptor_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->RegisterNameIdentifierServiceURL;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->RegisterNameIdentifierServiceURL = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_m20_SPDescriptor_ADD_RegisterNameIdentifierServiceURL) */

void zx_m20_SPDescriptor_ADD_RegisterNameIdentifierServiceURL(struct zx_m20_SPDescriptor_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->RegisterNameIdentifierServiceURL->g;
    x->RegisterNameIdentifierServiceURL = z;
    return;
  case -1:
    y = x->RegisterNameIdentifierServiceURL;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->RegisterNameIdentifierServiceURL; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_m20_SPDescriptor_DEL_RegisterNameIdentifierServiceURL) */

void zx_m20_SPDescriptor_DEL_RegisterNameIdentifierServiceURL(struct zx_m20_SPDescriptor_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->RegisterNameIdentifierServiceURL = (struct zx_elem_s*)x->RegisterNameIdentifierServiceURL->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->RegisterNameIdentifierServiceURL;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->RegisterNameIdentifierServiceURL; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_m20_SPDescriptor_NUM_RegisterNameIdentifierServiceReturnURL) */

int zx_m20_SPDescriptor_NUM_RegisterNameIdentifierServiceReturnURL(struct zx_m20_SPDescriptor_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->RegisterNameIdentifierServiceReturnURL; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_m20_SPDescriptor_GET_RegisterNameIdentifierServiceReturnURL) */

struct zx_elem_s* zx_m20_SPDescriptor_GET_RegisterNameIdentifierServiceReturnURL(struct zx_m20_SPDescriptor_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->RegisterNameIdentifierServiceReturnURL; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_m20_SPDescriptor_POP_RegisterNameIdentifierServiceReturnURL) */

struct zx_elem_s* zx_m20_SPDescriptor_POP_RegisterNameIdentifierServiceReturnURL(struct zx_m20_SPDescriptor_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->RegisterNameIdentifierServiceReturnURL;
  if (y)
    x->RegisterNameIdentifierServiceReturnURL = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_m20_SPDescriptor_PUSH_RegisterNameIdentifierServiceReturnURL) */

void zx_m20_SPDescriptor_PUSH_RegisterNameIdentifierServiceReturnURL(struct zx_m20_SPDescriptor_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->RegisterNameIdentifierServiceReturnURL->g;
  x->RegisterNameIdentifierServiceReturnURL = z;
}

/* FUNC(zx_m20_SPDescriptor_REV_RegisterNameIdentifierServiceReturnURL) */

void zx_m20_SPDescriptor_REV_RegisterNameIdentifierServiceReturnURL(struct zx_m20_SPDescriptor_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->RegisterNameIdentifierServiceReturnURL;
  if (!y) return;
  x->RegisterNameIdentifierServiceReturnURL = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->RegisterNameIdentifierServiceReturnURL->g;
    x->RegisterNameIdentifierServiceReturnURL = y;
    y = nxt;
  }
}

/* FUNC(zx_m20_SPDescriptor_PUT_RegisterNameIdentifierServiceReturnURL) */

void zx_m20_SPDescriptor_PUT_RegisterNameIdentifierServiceReturnURL(struct zx_m20_SPDescriptor_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->RegisterNameIdentifierServiceReturnURL;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->RegisterNameIdentifierServiceReturnURL = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_m20_SPDescriptor_ADD_RegisterNameIdentifierServiceReturnURL) */

void zx_m20_SPDescriptor_ADD_RegisterNameIdentifierServiceReturnURL(struct zx_m20_SPDescriptor_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->RegisterNameIdentifierServiceReturnURL->g;
    x->RegisterNameIdentifierServiceReturnURL = z;
    return;
  case -1:
    y = x->RegisterNameIdentifierServiceReturnURL;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->RegisterNameIdentifierServiceReturnURL; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_m20_SPDescriptor_DEL_RegisterNameIdentifierServiceReturnURL) */

void zx_m20_SPDescriptor_DEL_RegisterNameIdentifierServiceReturnURL(struct zx_m20_SPDescriptor_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->RegisterNameIdentifierServiceReturnURL = (struct zx_elem_s*)x->RegisterNameIdentifierServiceReturnURL->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->RegisterNameIdentifierServiceReturnURL;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->RegisterNameIdentifierServiceReturnURL; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_m20_SPDescriptor_NUM_NameIdentifierMappingProtocolProfile) */

int zx_m20_SPDescriptor_NUM_NameIdentifierMappingProtocolProfile(struct zx_m20_SPDescriptor_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->NameIdentifierMappingProtocolProfile; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_m20_SPDescriptor_GET_NameIdentifierMappingProtocolProfile) */

struct zx_elem_s* zx_m20_SPDescriptor_GET_NameIdentifierMappingProtocolProfile(struct zx_m20_SPDescriptor_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->NameIdentifierMappingProtocolProfile; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_m20_SPDescriptor_POP_NameIdentifierMappingProtocolProfile) */

struct zx_elem_s* zx_m20_SPDescriptor_POP_NameIdentifierMappingProtocolProfile(struct zx_m20_SPDescriptor_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->NameIdentifierMappingProtocolProfile;
  if (y)
    x->NameIdentifierMappingProtocolProfile = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_m20_SPDescriptor_PUSH_NameIdentifierMappingProtocolProfile) */

void zx_m20_SPDescriptor_PUSH_NameIdentifierMappingProtocolProfile(struct zx_m20_SPDescriptor_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->NameIdentifierMappingProtocolProfile->g;
  x->NameIdentifierMappingProtocolProfile = z;
}

/* FUNC(zx_m20_SPDescriptor_REV_NameIdentifierMappingProtocolProfile) */

void zx_m20_SPDescriptor_REV_NameIdentifierMappingProtocolProfile(struct zx_m20_SPDescriptor_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->NameIdentifierMappingProtocolProfile;
  if (!y) return;
  x->NameIdentifierMappingProtocolProfile = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->NameIdentifierMappingProtocolProfile->g;
    x->NameIdentifierMappingProtocolProfile = y;
    y = nxt;
  }
}

/* FUNC(zx_m20_SPDescriptor_PUT_NameIdentifierMappingProtocolProfile) */

void zx_m20_SPDescriptor_PUT_NameIdentifierMappingProtocolProfile(struct zx_m20_SPDescriptor_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->NameIdentifierMappingProtocolProfile;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->NameIdentifierMappingProtocolProfile = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_m20_SPDescriptor_ADD_NameIdentifierMappingProtocolProfile) */

void zx_m20_SPDescriptor_ADD_NameIdentifierMappingProtocolProfile(struct zx_m20_SPDescriptor_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->NameIdentifierMappingProtocolProfile->g;
    x->NameIdentifierMappingProtocolProfile = z;
    return;
  case -1:
    y = x->NameIdentifierMappingProtocolProfile;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->NameIdentifierMappingProtocolProfile; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_m20_SPDescriptor_DEL_NameIdentifierMappingProtocolProfile) */

void zx_m20_SPDescriptor_DEL_NameIdentifierMappingProtocolProfile(struct zx_m20_SPDescriptor_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->NameIdentifierMappingProtocolProfile = (struct zx_elem_s*)x->NameIdentifierMappingProtocolProfile->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->NameIdentifierMappingProtocolProfile;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->NameIdentifierMappingProtocolProfile; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_m20_SPDescriptor_NUM_NameIdentifierMappingEncryptionProfile) */

int zx_m20_SPDescriptor_NUM_NameIdentifierMappingEncryptionProfile(struct zx_m20_SPDescriptor_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->NameIdentifierMappingEncryptionProfile; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_m20_SPDescriptor_GET_NameIdentifierMappingEncryptionProfile) */

struct zx_elem_s* zx_m20_SPDescriptor_GET_NameIdentifierMappingEncryptionProfile(struct zx_m20_SPDescriptor_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->NameIdentifierMappingEncryptionProfile; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_m20_SPDescriptor_POP_NameIdentifierMappingEncryptionProfile) */

struct zx_elem_s* zx_m20_SPDescriptor_POP_NameIdentifierMappingEncryptionProfile(struct zx_m20_SPDescriptor_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->NameIdentifierMappingEncryptionProfile;
  if (y)
    x->NameIdentifierMappingEncryptionProfile = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_m20_SPDescriptor_PUSH_NameIdentifierMappingEncryptionProfile) */

void zx_m20_SPDescriptor_PUSH_NameIdentifierMappingEncryptionProfile(struct zx_m20_SPDescriptor_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->NameIdentifierMappingEncryptionProfile->g;
  x->NameIdentifierMappingEncryptionProfile = z;
}

/* FUNC(zx_m20_SPDescriptor_REV_NameIdentifierMappingEncryptionProfile) */

void zx_m20_SPDescriptor_REV_NameIdentifierMappingEncryptionProfile(struct zx_m20_SPDescriptor_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->NameIdentifierMappingEncryptionProfile;
  if (!y) return;
  x->NameIdentifierMappingEncryptionProfile = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->NameIdentifierMappingEncryptionProfile->g;
    x->NameIdentifierMappingEncryptionProfile = y;
    y = nxt;
  }
}

/* FUNC(zx_m20_SPDescriptor_PUT_NameIdentifierMappingEncryptionProfile) */

void zx_m20_SPDescriptor_PUT_NameIdentifierMappingEncryptionProfile(struct zx_m20_SPDescriptor_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->NameIdentifierMappingEncryptionProfile;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->NameIdentifierMappingEncryptionProfile = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_m20_SPDescriptor_ADD_NameIdentifierMappingEncryptionProfile) */

void zx_m20_SPDescriptor_ADD_NameIdentifierMappingEncryptionProfile(struct zx_m20_SPDescriptor_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->NameIdentifierMappingEncryptionProfile->g;
    x->NameIdentifierMappingEncryptionProfile = z;
    return;
  case -1:
    y = x->NameIdentifierMappingEncryptionProfile;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->NameIdentifierMappingEncryptionProfile; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_m20_SPDescriptor_DEL_NameIdentifierMappingEncryptionProfile) */

void zx_m20_SPDescriptor_DEL_NameIdentifierMappingEncryptionProfile(struct zx_m20_SPDescriptor_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->NameIdentifierMappingEncryptionProfile = (struct zx_elem_s*)x->NameIdentifierMappingEncryptionProfile->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->NameIdentifierMappingEncryptionProfile;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->NameIdentifierMappingEncryptionProfile; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_m20_SPDescriptor_NUM_Organization) */

int zx_m20_SPDescriptor_NUM_Organization(struct zx_m20_SPDescriptor_s* x)
{
  struct zx_m20_Organization_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Organization; y; ++n, y = (struct zx_m20_Organization_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_m20_SPDescriptor_GET_Organization) */

struct zx_m20_Organization_s* zx_m20_SPDescriptor_GET_Organization(struct zx_m20_SPDescriptor_s* x, int n)
{
  struct zx_m20_Organization_s* y;
  if (!x) return 0;
  for (y = x->Organization; n>=0 && y; --n, y = (struct zx_m20_Organization_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_m20_SPDescriptor_POP_Organization) */

struct zx_m20_Organization_s* zx_m20_SPDescriptor_POP_Organization(struct zx_m20_SPDescriptor_s* x)
{
  struct zx_m20_Organization_s* y;
  if (!x) return 0;
  y = x->Organization;
  if (y)
    x->Organization = (struct zx_m20_Organization_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_m20_SPDescriptor_PUSH_Organization) */

void zx_m20_SPDescriptor_PUSH_Organization(struct zx_m20_SPDescriptor_s* x, struct zx_m20_Organization_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Organization->gg.g;
  x->Organization = z;
}

/* FUNC(zx_m20_SPDescriptor_REV_Organization) */

void zx_m20_SPDescriptor_REV_Organization(struct zx_m20_SPDescriptor_s* x)
{
  struct zx_m20_Organization_s* nxt;
  struct zx_m20_Organization_s* y;
  if (!x) return;
  y = x->Organization;
  if (!y) return;
  x->Organization = 0;
  while (y) {
    nxt = (struct zx_m20_Organization_s*)y->gg.g.n;
    y->gg.g.n = &x->Organization->gg.g;
    x->Organization = y;
    y = nxt;
  }
}

/* FUNC(zx_m20_SPDescriptor_PUT_Organization) */

void zx_m20_SPDescriptor_PUT_Organization(struct zx_m20_SPDescriptor_s* x, int n, struct zx_m20_Organization_s* z)
{
  struct zx_m20_Organization_s* y;
  if (!x || !z) return;
  y = x->Organization;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Organization = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_m20_Organization_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_m20_SPDescriptor_ADD_Organization) */

void zx_m20_SPDescriptor_ADD_Organization(struct zx_m20_SPDescriptor_s* x, int n, struct zx_m20_Organization_s* z)
{
  struct zx_m20_Organization_s* y;
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
    for (; y->gg.g.n; y = (struct zx_m20_Organization_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Organization; n > 1 && y; --n, y = (struct zx_m20_Organization_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_m20_SPDescriptor_DEL_Organization) */

void zx_m20_SPDescriptor_DEL_Organization(struct zx_m20_SPDescriptor_s* x, int n)
{
  struct zx_m20_Organization_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Organization = (struct zx_m20_Organization_s*)x->Organization->gg.g.n;
    return;
  case -1:
    y = (struct zx_m20_Organization_s*)x->Organization;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_m20_Organization_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Organization; n > 1 && y->gg.g.n; --n, y = (struct zx_m20_Organization_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_m20_SPDescriptor_NUM_ContactPerson) */

int zx_m20_SPDescriptor_NUM_ContactPerson(struct zx_m20_SPDescriptor_s* x)
{
  struct zx_m20_ContactPerson_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->ContactPerson; y; ++n, y = (struct zx_m20_ContactPerson_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_m20_SPDescriptor_GET_ContactPerson) */

struct zx_m20_ContactPerson_s* zx_m20_SPDescriptor_GET_ContactPerson(struct zx_m20_SPDescriptor_s* x, int n)
{
  struct zx_m20_ContactPerson_s* y;
  if (!x) return 0;
  for (y = x->ContactPerson; n>=0 && y; --n, y = (struct zx_m20_ContactPerson_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_m20_SPDescriptor_POP_ContactPerson) */

struct zx_m20_ContactPerson_s* zx_m20_SPDescriptor_POP_ContactPerson(struct zx_m20_SPDescriptor_s* x)
{
  struct zx_m20_ContactPerson_s* y;
  if (!x) return 0;
  y = x->ContactPerson;
  if (y)
    x->ContactPerson = (struct zx_m20_ContactPerson_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_m20_SPDescriptor_PUSH_ContactPerson) */

void zx_m20_SPDescriptor_PUSH_ContactPerson(struct zx_m20_SPDescriptor_s* x, struct zx_m20_ContactPerson_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->ContactPerson->gg.g;
  x->ContactPerson = z;
}

/* FUNC(zx_m20_SPDescriptor_REV_ContactPerson) */

void zx_m20_SPDescriptor_REV_ContactPerson(struct zx_m20_SPDescriptor_s* x)
{
  struct zx_m20_ContactPerson_s* nxt;
  struct zx_m20_ContactPerson_s* y;
  if (!x) return;
  y = x->ContactPerson;
  if (!y) return;
  x->ContactPerson = 0;
  while (y) {
    nxt = (struct zx_m20_ContactPerson_s*)y->gg.g.n;
    y->gg.g.n = &x->ContactPerson->gg.g;
    x->ContactPerson = y;
    y = nxt;
  }
}

/* FUNC(zx_m20_SPDescriptor_PUT_ContactPerson) */

void zx_m20_SPDescriptor_PUT_ContactPerson(struct zx_m20_SPDescriptor_s* x, int n, struct zx_m20_ContactPerson_s* z)
{
  struct zx_m20_ContactPerson_s* y;
  if (!x || !z) return;
  y = x->ContactPerson;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->ContactPerson = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_m20_ContactPerson_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_m20_SPDescriptor_ADD_ContactPerson) */

void zx_m20_SPDescriptor_ADD_ContactPerson(struct zx_m20_SPDescriptor_s* x, int n, struct zx_m20_ContactPerson_s* z)
{
  struct zx_m20_ContactPerson_s* y;
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
    for (; y->gg.g.n; y = (struct zx_m20_ContactPerson_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->ContactPerson; n > 1 && y; --n, y = (struct zx_m20_ContactPerson_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_m20_SPDescriptor_DEL_ContactPerson) */

void zx_m20_SPDescriptor_DEL_ContactPerson(struct zx_m20_SPDescriptor_s* x, int n)
{
  struct zx_m20_ContactPerson_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->ContactPerson = (struct zx_m20_ContactPerson_s*)x->ContactPerson->gg.g.n;
    return;
  case -1:
    y = (struct zx_m20_ContactPerson_s*)x->ContactPerson;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_m20_ContactPerson_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->ContactPerson; n > 1 && y->gg.g.n; --n, y = (struct zx_m20_ContactPerson_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_m20_SPDescriptor_NUM_AdditionalMetaLocation) */

int zx_m20_SPDescriptor_NUM_AdditionalMetaLocation(struct zx_m20_SPDescriptor_s* x)
{
  struct zx_m20_AdditionalMetaLocation_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->AdditionalMetaLocation; y; ++n, y = (struct zx_m20_AdditionalMetaLocation_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_m20_SPDescriptor_GET_AdditionalMetaLocation) */

struct zx_m20_AdditionalMetaLocation_s* zx_m20_SPDescriptor_GET_AdditionalMetaLocation(struct zx_m20_SPDescriptor_s* x, int n)
{
  struct zx_m20_AdditionalMetaLocation_s* y;
  if (!x) return 0;
  for (y = x->AdditionalMetaLocation; n>=0 && y; --n, y = (struct zx_m20_AdditionalMetaLocation_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_m20_SPDescriptor_POP_AdditionalMetaLocation) */

struct zx_m20_AdditionalMetaLocation_s* zx_m20_SPDescriptor_POP_AdditionalMetaLocation(struct zx_m20_SPDescriptor_s* x)
{
  struct zx_m20_AdditionalMetaLocation_s* y;
  if (!x) return 0;
  y = x->AdditionalMetaLocation;
  if (y)
    x->AdditionalMetaLocation = (struct zx_m20_AdditionalMetaLocation_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_m20_SPDescriptor_PUSH_AdditionalMetaLocation) */

void zx_m20_SPDescriptor_PUSH_AdditionalMetaLocation(struct zx_m20_SPDescriptor_s* x, struct zx_m20_AdditionalMetaLocation_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->AdditionalMetaLocation->gg.g;
  x->AdditionalMetaLocation = z;
}

/* FUNC(zx_m20_SPDescriptor_REV_AdditionalMetaLocation) */

void zx_m20_SPDescriptor_REV_AdditionalMetaLocation(struct zx_m20_SPDescriptor_s* x)
{
  struct zx_m20_AdditionalMetaLocation_s* nxt;
  struct zx_m20_AdditionalMetaLocation_s* y;
  if (!x) return;
  y = x->AdditionalMetaLocation;
  if (!y) return;
  x->AdditionalMetaLocation = 0;
  while (y) {
    nxt = (struct zx_m20_AdditionalMetaLocation_s*)y->gg.g.n;
    y->gg.g.n = &x->AdditionalMetaLocation->gg.g;
    x->AdditionalMetaLocation = y;
    y = nxt;
  }
}

/* FUNC(zx_m20_SPDescriptor_PUT_AdditionalMetaLocation) */

void zx_m20_SPDescriptor_PUT_AdditionalMetaLocation(struct zx_m20_SPDescriptor_s* x, int n, struct zx_m20_AdditionalMetaLocation_s* z)
{
  struct zx_m20_AdditionalMetaLocation_s* y;
  if (!x || !z) return;
  y = x->AdditionalMetaLocation;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->AdditionalMetaLocation = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_m20_AdditionalMetaLocation_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_m20_SPDescriptor_ADD_AdditionalMetaLocation) */

void zx_m20_SPDescriptor_ADD_AdditionalMetaLocation(struct zx_m20_SPDescriptor_s* x, int n, struct zx_m20_AdditionalMetaLocation_s* z)
{
  struct zx_m20_AdditionalMetaLocation_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->AdditionalMetaLocation->gg.g;
    x->AdditionalMetaLocation = z;
    return;
  case -1:
    y = x->AdditionalMetaLocation;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_m20_AdditionalMetaLocation_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->AdditionalMetaLocation; n > 1 && y; --n, y = (struct zx_m20_AdditionalMetaLocation_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_m20_SPDescriptor_DEL_AdditionalMetaLocation) */

void zx_m20_SPDescriptor_DEL_AdditionalMetaLocation(struct zx_m20_SPDescriptor_s* x, int n)
{
  struct zx_m20_AdditionalMetaLocation_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->AdditionalMetaLocation = (struct zx_m20_AdditionalMetaLocation_s*)x->AdditionalMetaLocation->gg.g.n;
    return;
  case -1:
    y = (struct zx_m20_AdditionalMetaLocation_s*)x->AdditionalMetaLocation;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_m20_AdditionalMetaLocation_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->AdditionalMetaLocation; n > 1 && y->gg.g.n; --n, y = (struct zx_m20_AdditionalMetaLocation_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_m20_SPDescriptor_NUM_Extension) */

int zx_m20_SPDescriptor_NUM_Extension(struct zx_m20_SPDescriptor_s* x)
{
  struct zx_m20_Extension_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Extension; y; ++n, y = (struct zx_m20_Extension_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_m20_SPDescriptor_GET_Extension) */

struct zx_m20_Extension_s* zx_m20_SPDescriptor_GET_Extension(struct zx_m20_SPDescriptor_s* x, int n)
{
  struct zx_m20_Extension_s* y;
  if (!x) return 0;
  for (y = x->Extension; n>=0 && y; --n, y = (struct zx_m20_Extension_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_m20_SPDescriptor_POP_Extension) */

struct zx_m20_Extension_s* zx_m20_SPDescriptor_POP_Extension(struct zx_m20_SPDescriptor_s* x)
{
  struct zx_m20_Extension_s* y;
  if (!x) return 0;
  y = x->Extension;
  if (y)
    x->Extension = (struct zx_m20_Extension_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_m20_SPDescriptor_PUSH_Extension) */

void zx_m20_SPDescriptor_PUSH_Extension(struct zx_m20_SPDescriptor_s* x, struct zx_m20_Extension_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Extension->gg.g;
  x->Extension = z;
}

/* FUNC(zx_m20_SPDescriptor_REV_Extension) */

void zx_m20_SPDescriptor_REV_Extension(struct zx_m20_SPDescriptor_s* x)
{
  struct zx_m20_Extension_s* nxt;
  struct zx_m20_Extension_s* y;
  if (!x) return;
  y = x->Extension;
  if (!y) return;
  x->Extension = 0;
  while (y) {
    nxt = (struct zx_m20_Extension_s*)y->gg.g.n;
    y->gg.g.n = &x->Extension->gg.g;
    x->Extension = y;
    y = nxt;
  }
}

/* FUNC(zx_m20_SPDescriptor_PUT_Extension) */

void zx_m20_SPDescriptor_PUT_Extension(struct zx_m20_SPDescriptor_s* x, int n, struct zx_m20_Extension_s* z)
{
  struct zx_m20_Extension_s* y;
  if (!x || !z) return;
  y = x->Extension;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Extension = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_m20_Extension_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_m20_SPDescriptor_ADD_Extension) */

void zx_m20_SPDescriptor_ADD_Extension(struct zx_m20_SPDescriptor_s* x, int n, struct zx_m20_Extension_s* z)
{
  struct zx_m20_Extension_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->Extension->gg.g;
    x->Extension = z;
    return;
  case -1:
    y = x->Extension;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_m20_Extension_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Extension; n > 1 && y; --n, y = (struct zx_m20_Extension_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_m20_SPDescriptor_DEL_Extension) */

void zx_m20_SPDescriptor_DEL_Extension(struct zx_m20_SPDescriptor_s* x, int n)
{
  struct zx_m20_Extension_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Extension = (struct zx_m20_Extension_s*)x->Extension->gg.g.n;
    return;
  case -1:
    y = (struct zx_m20_Extension_s*)x->Extension;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_m20_Extension_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Extension; n > 1 && y->gg.g.n; --n, y = (struct zx_m20_Extension_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_m20_SPDescriptor_NUM_Signature) */

int zx_m20_SPDescriptor_NUM_Signature(struct zx_m20_SPDescriptor_s* x)
{
  struct zx_ds_Signature_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Signature; y; ++n, y = (struct zx_ds_Signature_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_m20_SPDescriptor_GET_Signature) */

struct zx_ds_Signature_s* zx_m20_SPDescriptor_GET_Signature(struct zx_m20_SPDescriptor_s* x, int n)
{
  struct zx_ds_Signature_s* y;
  if (!x) return 0;
  for (y = x->Signature; n>=0 && y; --n, y = (struct zx_ds_Signature_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_m20_SPDescriptor_POP_Signature) */

struct zx_ds_Signature_s* zx_m20_SPDescriptor_POP_Signature(struct zx_m20_SPDescriptor_s* x)
{
  struct zx_ds_Signature_s* y;
  if (!x) return 0;
  y = x->Signature;
  if (y)
    x->Signature = (struct zx_ds_Signature_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_m20_SPDescriptor_PUSH_Signature) */

void zx_m20_SPDescriptor_PUSH_Signature(struct zx_m20_SPDescriptor_s* x, struct zx_ds_Signature_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Signature->gg.g;
  x->Signature = z;
}

/* FUNC(zx_m20_SPDescriptor_REV_Signature) */

void zx_m20_SPDescriptor_REV_Signature(struct zx_m20_SPDescriptor_s* x)
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

/* FUNC(zx_m20_SPDescriptor_PUT_Signature) */

void zx_m20_SPDescriptor_PUT_Signature(struct zx_m20_SPDescriptor_s* x, int n, struct zx_ds_Signature_s* z)
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

/* FUNC(zx_m20_SPDescriptor_ADD_Signature) */

void zx_m20_SPDescriptor_ADD_Signature(struct zx_m20_SPDescriptor_s* x, int n, struct zx_ds_Signature_s* z)
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

/* FUNC(zx_m20_SPDescriptor_DEL_Signature) */

void zx_m20_SPDescriptor_DEL_Signature(struct zx_m20_SPDescriptor_s* x, int n)
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

/* FUNC(zx_m20_SPDescriptor_NUM_AssertionConsumerServiceURL) */

int zx_m20_SPDescriptor_NUM_AssertionConsumerServiceURL(struct zx_m20_SPDescriptor_s* x)
{
  struct zx_m20_AssertionConsumerServiceURL_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->AssertionConsumerServiceURL; y; ++n, y = (struct zx_m20_AssertionConsumerServiceURL_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_m20_SPDescriptor_GET_AssertionConsumerServiceURL) */

struct zx_m20_AssertionConsumerServiceURL_s* zx_m20_SPDescriptor_GET_AssertionConsumerServiceURL(struct zx_m20_SPDescriptor_s* x, int n)
{
  struct zx_m20_AssertionConsumerServiceURL_s* y;
  if (!x) return 0;
  for (y = x->AssertionConsumerServiceURL; n>=0 && y; --n, y = (struct zx_m20_AssertionConsumerServiceURL_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_m20_SPDescriptor_POP_AssertionConsumerServiceURL) */

struct zx_m20_AssertionConsumerServiceURL_s* zx_m20_SPDescriptor_POP_AssertionConsumerServiceURL(struct zx_m20_SPDescriptor_s* x)
{
  struct zx_m20_AssertionConsumerServiceURL_s* y;
  if (!x) return 0;
  y = x->AssertionConsumerServiceURL;
  if (y)
    x->AssertionConsumerServiceURL = (struct zx_m20_AssertionConsumerServiceURL_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_m20_SPDescriptor_PUSH_AssertionConsumerServiceURL) */

void zx_m20_SPDescriptor_PUSH_AssertionConsumerServiceURL(struct zx_m20_SPDescriptor_s* x, struct zx_m20_AssertionConsumerServiceURL_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->AssertionConsumerServiceURL->gg.g;
  x->AssertionConsumerServiceURL = z;
}

/* FUNC(zx_m20_SPDescriptor_REV_AssertionConsumerServiceURL) */

void zx_m20_SPDescriptor_REV_AssertionConsumerServiceURL(struct zx_m20_SPDescriptor_s* x)
{
  struct zx_m20_AssertionConsumerServiceURL_s* nxt;
  struct zx_m20_AssertionConsumerServiceURL_s* y;
  if (!x) return;
  y = x->AssertionConsumerServiceURL;
  if (!y) return;
  x->AssertionConsumerServiceURL = 0;
  while (y) {
    nxt = (struct zx_m20_AssertionConsumerServiceURL_s*)y->gg.g.n;
    y->gg.g.n = &x->AssertionConsumerServiceURL->gg.g;
    x->AssertionConsumerServiceURL = y;
    y = nxt;
  }
}

/* FUNC(zx_m20_SPDescriptor_PUT_AssertionConsumerServiceURL) */

void zx_m20_SPDescriptor_PUT_AssertionConsumerServiceURL(struct zx_m20_SPDescriptor_s* x, int n, struct zx_m20_AssertionConsumerServiceURL_s* z)
{
  struct zx_m20_AssertionConsumerServiceURL_s* y;
  if (!x || !z) return;
  y = x->AssertionConsumerServiceURL;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->AssertionConsumerServiceURL = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_m20_AssertionConsumerServiceURL_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_m20_SPDescriptor_ADD_AssertionConsumerServiceURL) */

void zx_m20_SPDescriptor_ADD_AssertionConsumerServiceURL(struct zx_m20_SPDescriptor_s* x, int n, struct zx_m20_AssertionConsumerServiceURL_s* z)
{
  struct zx_m20_AssertionConsumerServiceURL_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->AssertionConsumerServiceURL->gg.g;
    x->AssertionConsumerServiceURL = z;
    return;
  case -1:
    y = x->AssertionConsumerServiceURL;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_m20_AssertionConsumerServiceURL_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->AssertionConsumerServiceURL; n > 1 && y; --n, y = (struct zx_m20_AssertionConsumerServiceURL_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_m20_SPDescriptor_DEL_AssertionConsumerServiceURL) */

void zx_m20_SPDescriptor_DEL_AssertionConsumerServiceURL(struct zx_m20_SPDescriptor_s* x, int n)
{
  struct zx_m20_AssertionConsumerServiceURL_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->AssertionConsumerServiceURL = (struct zx_m20_AssertionConsumerServiceURL_s*)x->AssertionConsumerServiceURL->gg.g.n;
    return;
  case -1:
    y = (struct zx_m20_AssertionConsumerServiceURL_s*)x->AssertionConsumerServiceURL;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_m20_AssertionConsumerServiceURL_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->AssertionConsumerServiceURL; n > 1 && y->gg.g.n; --n, y = (struct zx_m20_AssertionConsumerServiceURL_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_m20_SPDescriptor_NUM_AuthnRequestsSigned) */

int zx_m20_SPDescriptor_NUM_AuthnRequestsSigned(struct zx_m20_SPDescriptor_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->AuthnRequestsSigned; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_m20_SPDescriptor_GET_AuthnRequestsSigned) */

struct zx_elem_s* zx_m20_SPDescriptor_GET_AuthnRequestsSigned(struct zx_m20_SPDescriptor_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->AuthnRequestsSigned; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_m20_SPDescriptor_POP_AuthnRequestsSigned) */

struct zx_elem_s* zx_m20_SPDescriptor_POP_AuthnRequestsSigned(struct zx_m20_SPDescriptor_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->AuthnRequestsSigned;
  if (y)
    x->AuthnRequestsSigned = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_m20_SPDescriptor_PUSH_AuthnRequestsSigned) */

void zx_m20_SPDescriptor_PUSH_AuthnRequestsSigned(struct zx_m20_SPDescriptor_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->AuthnRequestsSigned->g;
  x->AuthnRequestsSigned = z;
}

/* FUNC(zx_m20_SPDescriptor_REV_AuthnRequestsSigned) */

void zx_m20_SPDescriptor_REV_AuthnRequestsSigned(struct zx_m20_SPDescriptor_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->AuthnRequestsSigned;
  if (!y) return;
  x->AuthnRequestsSigned = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->AuthnRequestsSigned->g;
    x->AuthnRequestsSigned = y;
    y = nxt;
  }
}

/* FUNC(zx_m20_SPDescriptor_PUT_AuthnRequestsSigned) */

void zx_m20_SPDescriptor_PUT_AuthnRequestsSigned(struct zx_m20_SPDescriptor_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->AuthnRequestsSigned;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->AuthnRequestsSigned = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_m20_SPDescriptor_ADD_AuthnRequestsSigned) */

void zx_m20_SPDescriptor_ADD_AuthnRequestsSigned(struct zx_m20_SPDescriptor_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->AuthnRequestsSigned->g;
    x->AuthnRequestsSigned = z;
    return;
  case -1:
    y = x->AuthnRequestsSigned;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->AuthnRequestsSigned; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_m20_SPDescriptor_DEL_AuthnRequestsSigned) */

void zx_m20_SPDescriptor_DEL_AuthnRequestsSigned(struct zx_m20_SPDescriptor_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->AuthnRequestsSigned = (struct zx_elem_s*)x->AuthnRequestsSigned->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->AuthnRequestsSigned;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->AuthnRequestsSigned; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

#endif

/* FUNC(zx_m20_SPDescriptor_GET_protocolSupportEnumeration) */
struct zx_str* zx_m20_SPDescriptor_GET_protocolSupportEnumeration(struct zx_m20_SPDescriptor_s* x) { return x->protocolSupportEnumeration; }
/* FUNC(zx_m20_SPDescriptor_PUT_protocolSupportEnumeration) */
void zx_m20_SPDescriptor_PUT_protocolSupportEnumeration(struct zx_m20_SPDescriptor_s* x, struct zx_str* y) { x->protocolSupportEnumeration = y; }
/* FUNC(zx_m20_SPDescriptor_GET_id) */
struct zx_str* zx_m20_SPDescriptor_GET_id(struct zx_m20_SPDescriptor_s* x) { return x->id; }
/* FUNC(zx_m20_SPDescriptor_PUT_id) */
void zx_m20_SPDescriptor_PUT_id(struct zx_m20_SPDescriptor_s* x, struct zx_str* y) { x->id = y; }
/* FUNC(zx_m20_SPDescriptor_GET_validUntil) */
struct zx_str* zx_m20_SPDescriptor_GET_validUntil(struct zx_m20_SPDescriptor_s* x) { return x->validUntil; }
/* FUNC(zx_m20_SPDescriptor_PUT_validUntil) */
void zx_m20_SPDescriptor_PUT_validUntil(struct zx_m20_SPDescriptor_s* x, struct zx_str* y) { x->validUntil = y; }
/* FUNC(zx_m20_SPDescriptor_GET_cacheDuration) */
struct zx_str* zx_m20_SPDescriptor_GET_cacheDuration(struct zx_m20_SPDescriptor_s* x) { return x->cacheDuration; }
/* FUNC(zx_m20_SPDescriptor_PUT_cacheDuration) */
void zx_m20_SPDescriptor_PUT_cacheDuration(struct zx_m20_SPDescriptor_s* x, struct zx_str* y) { x->cacheDuration = y; }





/* EOF -- c/zx-m20-getput.c */