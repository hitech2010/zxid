/* c/zx-md-getput.c - WARNING: This file was automatically generated. DO NOT EDIT!
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
#include "c/zx-md-data.h"

/* FUNC(zx_md_AdditionalMetadataLocation_GET_namespace) */
struct zx_str* zx_md_AdditionalMetadataLocation_GET_namespace(struct zx_md_AdditionalMetadataLocation_s* x) { return x->namespace; }
/* FUNC(zx_md_AdditionalMetadataLocation_PUT_namespace) */
void zx_md_AdditionalMetadataLocation_PUT_namespace(struct zx_md_AdditionalMetadataLocation_s* x, struct zx_str* y) { x->namespace = y; }







#ifdef ZX_ENA_GETPUT

/* FUNC(zx_md_AffiliationDescriptor_NUM_Signature) */

int zx_md_AffiliationDescriptor_NUM_Signature(struct zx_md_AffiliationDescriptor_s* x)
{
  struct zx_ds_Signature_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Signature; y; ++n, y = (struct zx_ds_Signature_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_md_AffiliationDescriptor_GET_Signature) */

struct zx_ds_Signature_s* zx_md_AffiliationDescriptor_GET_Signature(struct zx_md_AffiliationDescriptor_s* x, int n)
{
  struct zx_ds_Signature_s* y;
  if (!x) return 0;
  for (y = x->Signature; n>=0 && y; --n, y = (struct zx_ds_Signature_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_md_AffiliationDescriptor_POP_Signature) */

struct zx_ds_Signature_s* zx_md_AffiliationDescriptor_POP_Signature(struct zx_md_AffiliationDescriptor_s* x)
{
  struct zx_ds_Signature_s* y;
  if (!x) return 0;
  y = x->Signature;
  if (y)
    x->Signature = (struct zx_ds_Signature_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_md_AffiliationDescriptor_PUSH_Signature) */

void zx_md_AffiliationDescriptor_PUSH_Signature(struct zx_md_AffiliationDescriptor_s* x, struct zx_ds_Signature_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Signature->gg.g;
  x->Signature = z;
}

/* FUNC(zx_md_AffiliationDescriptor_REV_Signature) */

void zx_md_AffiliationDescriptor_REV_Signature(struct zx_md_AffiliationDescriptor_s* x)
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

/* FUNC(zx_md_AffiliationDescriptor_PUT_Signature) */

void zx_md_AffiliationDescriptor_PUT_Signature(struct zx_md_AffiliationDescriptor_s* x, int n, struct zx_ds_Signature_s* z)
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

/* FUNC(zx_md_AffiliationDescriptor_ADD_Signature) */

void zx_md_AffiliationDescriptor_ADD_Signature(struct zx_md_AffiliationDescriptor_s* x, int n, struct zx_ds_Signature_s* z)
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

/* FUNC(zx_md_AffiliationDescriptor_DEL_Signature) */

void zx_md_AffiliationDescriptor_DEL_Signature(struct zx_md_AffiliationDescriptor_s* x, int n)
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

/* FUNC(zx_md_AffiliationDescriptor_NUM_Extensions) */

int zx_md_AffiliationDescriptor_NUM_Extensions(struct zx_md_AffiliationDescriptor_s* x)
{
  struct zx_md_Extensions_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Extensions; y; ++n, y = (struct zx_md_Extensions_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_md_AffiliationDescriptor_GET_Extensions) */

struct zx_md_Extensions_s* zx_md_AffiliationDescriptor_GET_Extensions(struct zx_md_AffiliationDescriptor_s* x, int n)
{
  struct zx_md_Extensions_s* y;
  if (!x) return 0;
  for (y = x->Extensions; n>=0 && y; --n, y = (struct zx_md_Extensions_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_md_AffiliationDescriptor_POP_Extensions) */

struct zx_md_Extensions_s* zx_md_AffiliationDescriptor_POP_Extensions(struct zx_md_AffiliationDescriptor_s* x)
{
  struct zx_md_Extensions_s* y;
  if (!x) return 0;
  y = x->Extensions;
  if (y)
    x->Extensions = (struct zx_md_Extensions_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_md_AffiliationDescriptor_PUSH_Extensions) */

void zx_md_AffiliationDescriptor_PUSH_Extensions(struct zx_md_AffiliationDescriptor_s* x, struct zx_md_Extensions_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Extensions->gg.g;
  x->Extensions = z;
}

/* FUNC(zx_md_AffiliationDescriptor_REV_Extensions) */

void zx_md_AffiliationDescriptor_REV_Extensions(struct zx_md_AffiliationDescriptor_s* x)
{
  struct zx_md_Extensions_s* nxt;
  struct zx_md_Extensions_s* y;
  if (!x) return;
  y = x->Extensions;
  if (!y) return;
  x->Extensions = 0;
  while (y) {
    nxt = (struct zx_md_Extensions_s*)y->gg.g.n;
    y->gg.g.n = &x->Extensions->gg.g;
    x->Extensions = y;
    y = nxt;
  }
}

/* FUNC(zx_md_AffiliationDescriptor_PUT_Extensions) */

void zx_md_AffiliationDescriptor_PUT_Extensions(struct zx_md_AffiliationDescriptor_s* x, int n, struct zx_md_Extensions_s* z)
{
  struct zx_md_Extensions_s* y;
  if (!x || !z) return;
  y = x->Extensions;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Extensions = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_md_Extensions_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_md_AffiliationDescriptor_ADD_Extensions) */

void zx_md_AffiliationDescriptor_ADD_Extensions(struct zx_md_AffiliationDescriptor_s* x, int n, struct zx_md_Extensions_s* z)
{
  struct zx_md_Extensions_s* y;
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
    for (; y->gg.g.n; y = (struct zx_md_Extensions_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Extensions; n > 1 && y; --n, y = (struct zx_md_Extensions_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_md_AffiliationDescriptor_DEL_Extensions) */

void zx_md_AffiliationDescriptor_DEL_Extensions(struct zx_md_AffiliationDescriptor_s* x, int n)
{
  struct zx_md_Extensions_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Extensions = (struct zx_md_Extensions_s*)x->Extensions->gg.g.n;
    return;
  case -1:
    y = (struct zx_md_Extensions_s*)x->Extensions;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_md_Extensions_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Extensions; n > 1 && y->gg.g.n; --n, y = (struct zx_md_Extensions_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_md_AffiliationDescriptor_NUM_AffiliateMember) */

int zx_md_AffiliationDescriptor_NUM_AffiliateMember(struct zx_md_AffiliationDescriptor_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->AffiliateMember; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_md_AffiliationDescriptor_GET_AffiliateMember) */

struct zx_elem_s* zx_md_AffiliationDescriptor_GET_AffiliateMember(struct zx_md_AffiliationDescriptor_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->AffiliateMember; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_md_AffiliationDescriptor_POP_AffiliateMember) */

struct zx_elem_s* zx_md_AffiliationDescriptor_POP_AffiliateMember(struct zx_md_AffiliationDescriptor_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->AffiliateMember;
  if (y)
    x->AffiliateMember = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_md_AffiliationDescriptor_PUSH_AffiliateMember) */

void zx_md_AffiliationDescriptor_PUSH_AffiliateMember(struct zx_md_AffiliationDescriptor_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->AffiliateMember->g;
  x->AffiliateMember = z;
}

/* FUNC(zx_md_AffiliationDescriptor_REV_AffiliateMember) */

void zx_md_AffiliationDescriptor_REV_AffiliateMember(struct zx_md_AffiliationDescriptor_s* x)
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

/* FUNC(zx_md_AffiliationDescriptor_PUT_AffiliateMember) */

void zx_md_AffiliationDescriptor_PUT_AffiliateMember(struct zx_md_AffiliationDescriptor_s* x, int n, struct zx_elem_s* z)
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

/* FUNC(zx_md_AffiliationDescriptor_ADD_AffiliateMember) */

void zx_md_AffiliationDescriptor_ADD_AffiliateMember(struct zx_md_AffiliationDescriptor_s* x, int n, struct zx_elem_s* z)
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

/* FUNC(zx_md_AffiliationDescriptor_DEL_AffiliateMember) */

void zx_md_AffiliationDescriptor_DEL_AffiliateMember(struct zx_md_AffiliationDescriptor_s* x, int n)
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

/* FUNC(zx_md_AffiliationDescriptor_NUM_KeyDescriptor) */

int zx_md_AffiliationDescriptor_NUM_KeyDescriptor(struct zx_md_AffiliationDescriptor_s* x)
{
  struct zx_md_KeyDescriptor_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->KeyDescriptor; y; ++n, y = (struct zx_md_KeyDescriptor_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_md_AffiliationDescriptor_GET_KeyDescriptor) */

struct zx_md_KeyDescriptor_s* zx_md_AffiliationDescriptor_GET_KeyDescriptor(struct zx_md_AffiliationDescriptor_s* x, int n)
{
  struct zx_md_KeyDescriptor_s* y;
  if (!x) return 0;
  for (y = x->KeyDescriptor; n>=0 && y; --n, y = (struct zx_md_KeyDescriptor_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_md_AffiliationDescriptor_POP_KeyDescriptor) */

struct zx_md_KeyDescriptor_s* zx_md_AffiliationDescriptor_POP_KeyDescriptor(struct zx_md_AffiliationDescriptor_s* x)
{
  struct zx_md_KeyDescriptor_s* y;
  if (!x) return 0;
  y = x->KeyDescriptor;
  if (y)
    x->KeyDescriptor = (struct zx_md_KeyDescriptor_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_md_AffiliationDescriptor_PUSH_KeyDescriptor) */

void zx_md_AffiliationDescriptor_PUSH_KeyDescriptor(struct zx_md_AffiliationDescriptor_s* x, struct zx_md_KeyDescriptor_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->KeyDescriptor->gg.g;
  x->KeyDescriptor = z;
}

/* FUNC(zx_md_AffiliationDescriptor_REV_KeyDescriptor) */

void zx_md_AffiliationDescriptor_REV_KeyDescriptor(struct zx_md_AffiliationDescriptor_s* x)
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

/* FUNC(zx_md_AffiliationDescriptor_PUT_KeyDescriptor) */

void zx_md_AffiliationDescriptor_PUT_KeyDescriptor(struct zx_md_AffiliationDescriptor_s* x, int n, struct zx_md_KeyDescriptor_s* z)
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

/* FUNC(zx_md_AffiliationDescriptor_ADD_KeyDescriptor) */

void zx_md_AffiliationDescriptor_ADD_KeyDescriptor(struct zx_md_AffiliationDescriptor_s* x, int n, struct zx_md_KeyDescriptor_s* z)
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

/* FUNC(zx_md_AffiliationDescriptor_DEL_KeyDescriptor) */

void zx_md_AffiliationDescriptor_DEL_KeyDescriptor(struct zx_md_AffiliationDescriptor_s* x, int n)
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

/* FUNC(zx_md_AffiliationDescriptor_GET_affiliationOwnerID) */
struct zx_str* zx_md_AffiliationDescriptor_GET_affiliationOwnerID(struct zx_md_AffiliationDescriptor_s* x) { return x->affiliationOwnerID; }
/* FUNC(zx_md_AffiliationDescriptor_PUT_affiliationOwnerID) */
void zx_md_AffiliationDescriptor_PUT_affiliationOwnerID(struct zx_md_AffiliationDescriptor_s* x, struct zx_str* y) { x->affiliationOwnerID = y; }
/* FUNC(zx_md_AffiliationDescriptor_GET_validUntil) */
struct zx_str* zx_md_AffiliationDescriptor_GET_validUntil(struct zx_md_AffiliationDescriptor_s* x) { return x->validUntil; }
/* FUNC(zx_md_AffiliationDescriptor_PUT_validUntil) */
void zx_md_AffiliationDescriptor_PUT_validUntil(struct zx_md_AffiliationDescriptor_s* x, struct zx_str* y) { x->validUntil = y; }
/* FUNC(zx_md_AffiliationDescriptor_GET_cacheDuration) */
struct zx_str* zx_md_AffiliationDescriptor_GET_cacheDuration(struct zx_md_AffiliationDescriptor_s* x) { return x->cacheDuration; }
/* FUNC(zx_md_AffiliationDescriptor_PUT_cacheDuration) */
void zx_md_AffiliationDescriptor_PUT_cacheDuration(struct zx_md_AffiliationDescriptor_s* x, struct zx_str* y) { x->cacheDuration = y; }
/* FUNC(zx_md_AffiliationDescriptor_GET_ID) */
struct zx_str* zx_md_AffiliationDescriptor_GET_ID(struct zx_md_AffiliationDescriptor_s* x) { return x->ID; }
/* FUNC(zx_md_AffiliationDescriptor_PUT_ID) */
void zx_md_AffiliationDescriptor_PUT_ID(struct zx_md_AffiliationDescriptor_s* x, struct zx_str* y) { x->ID = y; }





/* FUNC(zx_md_ArtifactResolutionService_GET_Binding) */
struct zx_str* zx_md_ArtifactResolutionService_GET_Binding(struct zx_md_ArtifactResolutionService_s* x) { return x->Binding; }
/* FUNC(zx_md_ArtifactResolutionService_PUT_Binding) */
void zx_md_ArtifactResolutionService_PUT_Binding(struct zx_md_ArtifactResolutionService_s* x, struct zx_str* y) { x->Binding = y; }
/* FUNC(zx_md_ArtifactResolutionService_GET_Location) */
struct zx_str* zx_md_ArtifactResolutionService_GET_Location(struct zx_md_ArtifactResolutionService_s* x) { return x->Location; }
/* FUNC(zx_md_ArtifactResolutionService_PUT_Location) */
void zx_md_ArtifactResolutionService_PUT_Location(struct zx_md_ArtifactResolutionService_s* x, struct zx_str* y) { x->Location = y; }
/* FUNC(zx_md_ArtifactResolutionService_GET_ResponseLocation) */
struct zx_str* zx_md_ArtifactResolutionService_GET_ResponseLocation(struct zx_md_ArtifactResolutionService_s* x) { return x->ResponseLocation; }
/* FUNC(zx_md_ArtifactResolutionService_PUT_ResponseLocation) */
void zx_md_ArtifactResolutionService_PUT_ResponseLocation(struct zx_md_ArtifactResolutionService_s* x, struct zx_str* y) { x->ResponseLocation = y; }
/* FUNC(zx_md_ArtifactResolutionService_GET_index) */
struct zx_str* zx_md_ArtifactResolutionService_GET_index(struct zx_md_ArtifactResolutionService_s* x) { return x->index; }
/* FUNC(zx_md_ArtifactResolutionService_PUT_index) */
void zx_md_ArtifactResolutionService_PUT_index(struct zx_md_ArtifactResolutionService_s* x, struct zx_str* y) { x->index = y; }
/* FUNC(zx_md_ArtifactResolutionService_GET_isDefault) */
struct zx_str* zx_md_ArtifactResolutionService_GET_isDefault(struct zx_md_ArtifactResolutionService_s* x) { return x->isDefault; }
/* FUNC(zx_md_ArtifactResolutionService_PUT_isDefault) */
void zx_md_ArtifactResolutionService_PUT_isDefault(struct zx_md_ArtifactResolutionService_s* x, struct zx_str* y) { x->isDefault = y; }





/* FUNC(zx_md_AssertionConsumerService_GET_Binding) */
struct zx_str* zx_md_AssertionConsumerService_GET_Binding(struct zx_md_AssertionConsumerService_s* x) { return x->Binding; }
/* FUNC(zx_md_AssertionConsumerService_PUT_Binding) */
void zx_md_AssertionConsumerService_PUT_Binding(struct zx_md_AssertionConsumerService_s* x, struct zx_str* y) { x->Binding = y; }
/* FUNC(zx_md_AssertionConsumerService_GET_Location) */
struct zx_str* zx_md_AssertionConsumerService_GET_Location(struct zx_md_AssertionConsumerService_s* x) { return x->Location; }
/* FUNC(zx_md_AssertionConsumerService_PUT_Location) */
void zx_md_AssertionConsumerService_PUT_Location(struct zx_md_AssertionConsumerService_s* x, struct zx_str* y) { x->Location = y; }
/* FUNC(zx_md_AssertionConsumerService_GET_ResponseLocation) */
struct zx_str* zx_md_AssertionConsumerService_GET_ResponseLocation(struct zx_md_AssertionConsumerService_s* x) { return x->ResponseLocation; }
/* FUNC(zx_md_AssertionConsumerService_PUT_ResponseLocation) */
void zx_md_AssertionConsumerService_PUT_ResponseLocation(struct zx_md_AssertionConsumerService_s* x, struct zx_str* y) { x->ResponseLocation = y; }
/* FUNC(zx_md_AssertionConsumerService_GET_index) */
struct zx_str* zx_md_AssertionConsumerService_GET_index(struct zx_md_AssertionConsumerService_s* x) { return x->index; }
/* FUNC(zx_md_AssertionConsumerService_PUT_index) */
void zx_md_AssertionConsumerService_PUT_index(struct zx_md_AssertionConsumerService_s* x, struct zx_str* y) { x->index = y; }
/* FUNC(zx_md_AssertionConsumerService_GET_isDefault) */
struct zx_str* zx_md_AssertionConsumerService_GET_isDefault(struct zx_md_AssertionConsumerService_s* x) { return x->isDefault; }
/* FUNC(zx_md_AssertionConsumerService_PUT_isDefault) */
void zx_md_AssertionConsumerService_PUT_isDefault(struct zx_md_AssertionConsumerService_s* x, struct zx_str* y) { x->isDefault = y; }





/* FUNC(zx_md_AssertionIDRequestService_GET_Binding) */
struct zx_str* zx_md_AssertionIDRequestService_GET_Binding(struct zx_md_AssertionIDRequestService_s* x) { return x->Binding; }
/* FUNC(zx_md_AssertionIDRequestService_PUT_Binding) */
void zx_md_AssertionIDRequestService_PUT_Binding(struct zx_md_AssertionIDRequestService_s* x, struct zx_str* y) { x->Binding = y; }
/* FUNC(zx_md_AssertionIDRequestService_GET_Location) */
struct zx_str* zx_md_AssertionIDRequestService_GET_Location(struct zx_md_AssertionIDRequestService_s* x) { return x->Location; }
/* FUNC(zx_md_AssertionIDRequestService_PUT_Location) */
void zx_md_AssertionIDRequestService_PUT_Location(struct zx_md_AssertionIDRequestService_s* x, struct zx_str* y) { x->Location = y; }
/* FUNC(zx_md_AssertionIDRequestService_GET_ResponseLocation) */
struct zx_str* zx_md_AssertionIDRequestService_GET_ResponseLocation(struct zx_md_AssertionIDRequestService_s* x) { return x->ResponseLocation; }
/* FUNC(zx_md_AssertionIDRequestService_PUT_ResponseLocation) */
void zx_md_AssertionIDRequestService_PUT_ResponseLocation(struct zx_md_AssertionIDRequestService_s* x, struct zx_str* y) { x->ResponseLocation = y; }
/* FUNC(zx_md_AssertionIDRequestService_GET_index) */
struct zx_str* zx_md_AssertionIDRequestService_GET_index(struct zx_md_AssertionIDRequestService_s* x) { return x->index; }
/* FUNC(zx_md_AssertionIDRequestService_PUT_index) */
void zx_md_AssertionIDRequestService_PUT_index(struct zx_md_AssertionIDRequestService_s* x, struct zx_str* y) { x->index = y; }
/* FUNC(zx_md_AssertionIDRequestService_GET_isDefault) */
struct zx_str* zx_md_AssertionIDRequestService_GET_isDefault(struct zx_md_AssertionIDRequestService_s* x) { return x->isDefault; }
/* FUNC(zx_md_AssertionIDRequestService_PUT_isDefault) */
void zx_md_AssertionIDRequestService_PUT_isDefault(struct zx_md_AssertionIDRequestService_s* x, struct zx_str* y) { x->isDefault = y; }







#ifdef ZX_ENA_GETPUT

/* FUNC(zx_md_AttributeAuthorityDescriptor_NUM_Signature) */

int zx_md_AttributeAuthorityDescriptor_NUM_Signature(struct zx_md_AttributeAuthorityDescriptor_s* x)
{
  struct zx_ds_Signature_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Signature; y; ++n, y = (struct zx_ds_Signature_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_md_AttributeAuthorityDescriptor_GET_Signature) */

struct zx_ds_Signature_s* zx_md_AttributeAuthorityDescriptor_GET_Signature(struct zx_md_AttributeAuthorityDescriptor_s* x, int n)
{
  struct zx_ds_Signature_s* y;
  if (!x) return 0;
  for (y = x->Signature; n>=0 && y; --n, y = (struct zx_ds_Signature_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_md_AttributeAuthorityDescriptor_POP_Signature) */

struct zx_ds_Signature_s* zx_md_AttributeAuthorityDescriptor_POP_Signature(struct zx_md_AttributeAuthorityDescriptor_s* x)
{
  struct zx_ds_Signature_s* y;
  if (!x) return 0;
  y = x->Signature;
  if (y)
    x->Signature = (struct zx_ds_Signature_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_md_AttributeAuthorityDescriptor_PUSH_Signature) */

void zx_md_AttributeAuthorityDescriptor_PUSH_Signature(struct zx_md_AttributeAuthorityDescriptor_s* x, struct zx_ds_Signature_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Signature->gg.g;
  x->Signature = z;
}

/* FUNC(zx_md_AttributeAuthorityDescriptor_REV_Signature) */

void zx_md_AttributeAuthorityDescriptor_REV_Signature(struct zx_md_AttributeAuthorityDescriptor_s* x)
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

/* FUNC(zx_md_AttributeAuthorityDescriptor_PUT_Signature) */

void zx_md_AttributeAuthorityDescriptor_PUT_Signature(struct zx_md_AttributeAuthorityDescriptor_s* x, int n, struct zx_ds_Signature_s* z)
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

/* FUNC(zx_md_AttributeAuthorityDescriptor_ADD_Signature) */

void zx_md_AttributeAuthorityDescriptor_ADD_Signature(struct zx_md_AttributeAuthorityDescriptor_s* x, int n, struct zx_ds_Signature_s* z)
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

/* FUNC(zx_md_AttributeAuthorityDescriptor_DEL_Signature) */

void zx_md_AttributeAuthorityDescriptor_DEL_Signature(struct zx_md_AttributeAuthorityDescriptor_s* x, int n)
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

/* FUNC(zx_md_AttributeAuthorityDescriptor_NUM_Extensions) */

int zx_md_AttributeAuthorityDescriptor_NUM_Extensions(struct zx_md_AttributeAuthorityDescriptor_s* x)
{
  struct zx_md_Extensions_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Extensions; y; ++n, y = (struct zx_md_Extensions_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_md_AttributeAuthorityDescriptor_GET_Extensions) */

struct zx_md_Extensions_s* zx_md_AttributeAuthorityDescriptor_GET_Extensions(struct zx_md_AttributeAuthorityDescriptor_s* x, int n)
{
  struct zx_md_Extensions_s* y;
  if (!x) return 0;
  for (y = x->Extensions; n>=0 && y; --n, y = (struct zx_md_Extensions_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_md_AttributeAuthorityDescriptor_POP_Extensions) */

struct zx_md_Extensions_s* zx_md_AttributeAuthorityDescriptor_POP_Extensions(struct zx_md_AttributeAuthorityDescriptor_s* x)
{
  struct zx_md_Extensions_s* y;
  if (!x) return 0;
  y = x->Extensions;
  if (y)
    x->Extensions = (struct zx_md_Extensions_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_md_AttributeAuthorityDescriptor_PUSH_Extensions) */

void zx_md_AttributeAuthorityDescriptor_PUSH_Extensions(struct zx_md_AttributeAuthorityDescriptor_s* x, struct zx_md_Extensions_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Extensions->gg.g;
  x->Extensions = z;
}

/* FUNC(zx_md_AttributeAuthorityDescriptor_REV_Extensions) */

void zx_md_AttributeAuthorityDescriptor_REV_Extensions(struct zx_md_AttributeAuthorityDescriptor_s* x)
{
  struct zx_md_Extensions_s* nxt;
  struct zx_md_Extensions_s* y;
  if (!x) return;
  y = x->Extensions;
  if (!y) return;
  x->Extensions = 0;
  while (y) {
    nxt = (struct zx_md_Extensions_s*)y->gg.g.n;
    y->gg.g.n = &x->Extensions->gg.g;
    x->Extensions = y;
    y = nxt;
  }
}

/* FUNC(zx_md_AttributeAuthorityDescriptor_PUT_Extensions) */

void zx_md_AttributeAuthorityDescriptor_PUT_Extensions(struct zx_md_AttributeAuthorityDescriptor_s* x, int n, struct zx_md_Extensions_s* z)
{
  struct zx_md_Extensions_s* y;
  if (!x || !z) return;
  y = x->Extensions;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Extensions = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_md_Extensions_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_md_AttributeAuthorityDescriptor_ADD_Extensions) */

void zx_md_AttributeAuthorityDescriptor_ADD_Extensions(struct zx_md_AttributeAuthorityDescriptor_s* x, int n, struct zx_md_Extensions_s* z)
{
  struct zx_md_Extensions_s* y;
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
    for (; y->gg.g.n; y = (struct zx_md_Extensions_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Extensions; n > 1 && y; --n, y = (struct zx_md_Extensions_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_md_AttributeAuthorityDescriptor_DEL_Extensions) */

void zx_md_AttributeAuthorityDescriptor_DEL_Extensions(struct zx_md_AttributeAuthorityDescriptor_s* x, int n)
{
  struct zx_md_Extensions_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Extensions = (struct zx_md_Extensions_s*)x->Extensions->gg.g.n;
    return;
  case -1:
    y = (struct zx_md_Extensions_s*)x->Extensions;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_md_Extensions_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Extensions; n > 1 && y->gg.g.n; --n, y = (struct zx_md_Extensions_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_md_AttributeAuthorityDescriptor_NUM_KeyDescriptor) */

int zx_md_AttributeAuthorityDescriptor_NUM_KeyDescriptor(struct zx_md_AttributeAuthorityDescriptor_s* x)
{
  struct zx_md_KeyDescriptor_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->KeyDescriptor; y; ++n, y = (struct zx_md_KeyDescriptor_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_md_AttributeAuthorityDescriptor_GET_KeyDescriptor) */

struct zx_md_KeyDescriptor_s* zx_md_AttributeAuthorityDescriptor_GET_KeyDescriptor(struct zx_md_AttributeAuthorityDescriptor_s* x, int n)
{
  struct zx_md_KeyDescriptor_s* y;
  if (!x) return 0;
  for (y = x->KeyDescriptor; n>=0 && y; --n, y = (struct zx_md_KeyDescriptor_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_md_AttributeAuthorityDescriptor_POP_KeyDescriptor) */

struct zx_md_KeyDescriptor_s* zx_md_AttributeAuthorityDescriptor_POP_KeyDescriptor(struct zx_md_AttributeAuthorityDescriptor_s* x)
{
  struct zx_md_KeyDescriptor_s* y;
  if (!x) return 0;
  y = x->KeyDescriptor;
  if (y)
    x->KeyDescriptor = (struct zx_md_KeyDescriptor_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_md_AttributeAuthorityDescriptor_PUSH_KeyDescriptor) */

void zx_md_AttributeAuthorityDescriptor_PUSH_KeyDescriptor(struct zx_md_AttributeAuthorityDescriptor_s* x, struct zx_md_KeyDescriptor_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->KeyDescriptor->gg.g;
  x->KeyDescriptor = z;
}

/* FUNC(zx_md_AttributeAuthorityDescriptor_REV_KeyDescriptor) */

void zx_md_AttributeAuthorityDescriptor_REV_KeyDescriptor(struct zx_md_AttributeAuthorityDescriptor_s* x)
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

/* FUNC(zx_md_AttributeAuthorityDescriptor_PUT_KeyDescriptor) */

void zx_md_AttributeAuthorityDescriptor_PUT_KeyDescriptor(struct zx_md_AttributeAuthorityDescriptor_s* x, int n, struct zx_md_KeyDescriptor_s* z)
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

/* FUNC(zx_md_AttributeAuthorityDescriptor_ADD_KeyDescriptor) */

void zx_md_AttributeAuthorityDescriptor_ADD_KeyDescriptor(struct zx_md_AttributeAuthorityDescriptor_s* x, int n, struct zx_md_KeyDescriptor_s* z)
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

/* FUNC(zx_md_AttributeAuthorityDescriptor_DEL_KeyDescriptor) */

void zx_md_AttributeAuthorityDescriptor_DEL_KeyDescriptor(struct zx_md_AttributeAuthorityDescriptor_s* x, int n)
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

/* FUNC(zx_md_AttributeAuthorityDescriptor_NUM_Organization) */

int zx_md_AttributeAuthorityDescriptor_NUM_Organization(struct zx_md_AttributeAuthorityDescriptor_s* x)
{
  struct zx_md_Organization_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Organization; y; ++n, y = (struct zx_md_Organization_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_md_AttributeAuthorityDescriptor_GET_Organization) */

struct zx_md_Organization_s* zx_md_AttributeAuthorityDescriptor_GET_Organization(struct zx_md_AttributeAuthorityDescriptor_s* x, int n)
{
  struct zx_md_Organization_s* y;
  if (!x) return 0;
  for (y = x->Organization; n>=0 && y; --n, y = (struct zx_md_Organization_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_md_AttributeAuthorityDescriptor_POP_Organization) */

struct zx_md_Organization_s* zx_md_AttributeAuthorityDescriptor_POP_Organization(struct zx_md_AttributeAuthorityDescriptor_s* x)
{
  struct zx_md_Organization_s* y;
  if (!x) return 0;
  y = x->Organization;
  if (y)
    x->Organization = (struct zx_md_Organization_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_md_AttributeAuthorityDescriptor_PUSH_Organization) */

void zx_md_AttributeAuthorityDescriptor_PUSH_Organization(struct zx_md_AttributeAuthorityDescriptor_s* x, struct zx_md_Organization_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Organization->gg.g;
  x->Organization = z;
}

/* FUNC(zx_md_AttributeAuthorityDescriptor_REV_Organization) */

void zx_md_AttributeAuthorityDescriptor_REV_Organization(struct zx_md_AttributeAuthorityDescriptor_s* x)
{
  struct zx_md_Organization_s* nxt;
  struct zx_md_Organization_s* y;
  if (!x) return;
  y = x->Organization;
  if (!y) return;
  x->Organization = 0;
  while (y) {
    nxt = (struct zx_md_Organization_s*)y->gg.g.n;
    y->gg.g.n = &x->Organization->gg.g;
    x->Organization = y;
    y = nxt;
  }
}

/* FUNC(zx_md_AttributeAuthorityDescriptor_PUT_Organization) */

void zx_md_AttributeAuthorityDescriptor_PUT_Organization(struct zx_md_AttributeAuthorityDescriptor_s* x, int n, struct zx_md_Organization_s* z)
{
  struct zx_md_Organization_s* y;
  if (!x || !z) return;
  y = x->Organization;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Organization = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_md_Organization_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_md_AttributeAuthorityDescriptor_ADD_Organization) */

void zx_md_AttributeAuthorityDescriptor_ADD_Organization(struct zx_md_AttributeAuthorityDescriptor_s* x, int n, struct zx_md_Organization_s* z)
{
  struct zx_md_Organization_s* y;
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
    for (; y->gg.g.n; y = (struct zx_md_Organization_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Organization; n > 1 && y; --n, y = (struct zx_md_Organization_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_md_AttributeAuthorityDescriptor_DEL_Organization) */

void zx_md_AttributeAuthorityDescriptor_DEL_Organization(struct zx_md_AttributeAuthorityDescriptor_s* x, int n)
{
  struct zx_md_Organization_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Organization = (struct zx_md_Organization_s*)x->Organization->gg.g.n;
    return;
  case -1:
    y = (struct zx_md_Organization_s*)x->Organization;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_md_Organization_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Organization; n > 1 && y->gg.g.n; --n, y = (struct zx_md_Organization_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_md_AttributeAuthorityDescriptor_NUM_ContactPerson) */

int zx_md_AttributeAuthorityDescriptor_NUM_ContactPerson(struct zx_md_AttributeAuthorityDescriptor_s* x)
{
  struct zx_md_ContactPerson_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->ContactPerson; y; ++n, y = (struct zx_md_ContactPerson_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_md_AttributeAuthorityDescriptor_GET_ContactPerson) */

struct zx_md_ContactPerson_s* zx_md_AttributeAuthorityDescriptor_GET_ContactPerson(struct zx_md_AttributeAuthorityDescriptor_s* x, int n)
{
  struct zx_md_ContactPerson_s* y;
  if (!x) return 0;
  for (y = x->ContactPerson; n>=0 && y; --n, y = (struct zx_md_ContactPerson_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_md_AttributeAuthorityDescriptor_POP_ContactPerson) */

struct zx_md_ContactPerson_s* zx_md_AttributeAuthorityDescriptor_POP_ContactPerson(struct zx_md_AttributeAuthorityDescriptor_s* x)
{
  struct zx_md_ContactPerson_s* y;
  if (!x) return 0;
  y = x->ContactPerson;
  if (y)
    x->ContactPerson = (struct zx_md_ContactPerson_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_md_AttributeAuthorityDescriptor_PUSH_ContactPerson) */

void zx_md_AttributeAuthorityDescriptor_PUSH_ContactPerson(struct zx_md_AttributeAuthorityDescriptor_s* x, struct zx_md_ContactPerson_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->ContactPerson->gg.g;
  x->ContactPerson = z;
}

/* FUNC(zx_md_AttributeAuthorityDescriptor_REV_ContactPerson) */

void zx_md_AttributeAuthorityDescriptor_REV_ContactPerson(struct zx_md_AttributeAuthorityDescriptor_s* x)
{
  struct zx_md_ContactPerson_s* nxt;
  struct zx_md_ContactPerson_s* y;
  if (!x) return;
  y = x->ContactPerson;
  if (!y) return;
  x->ContactPerson = 0;
  while (y) {
    nxt = (struct zx_md_ContactPerson_s*)y->gg.g.n;
    y->gg.g.n = &x->ContactPerson->gg.g;
    x->ContactPerson = y;
    y = nxt;
  }
}

/* FUNC(zx_md_AttributeAuthorityDescriptor_PUT_ContactPerson) */

void zx_md_AttributeAuthorityDescriptor_PUT_ContactPerson(struct zx_md_AttributeAuthorityDescriptor_s* x, int n, struct zx_md_ContactPerson_s* z)
{
  struct zx_md_ContactPerson_s* y;
  if (!x || !z) return;
  y = x->ContactPerson;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->ContactPerson = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_md_ContactPerson_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_md_AttributeAuthorityDescriptor_ADD_ContactPerson) */

void zx_md_AttributeAuthorityDescriptor_ADD_ContactPerson(struct zx_md_AttributeAuthorityDescriptor_s* x, int n, struct zx_md_ContactPerson_s* z)
{
  struct zx_md_ContactPerson_s* y;
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
    for (; y->gg.g.n; y = (struct zx_md_ContactPerson_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->ContactPerson; n > 1 && y; --n, y = (struct zx_md_ContactPerson_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_md_AttributeAuthorityDescriptor_DEL_ContactPerson) */

void zx_md_AttributeAuthorityDescriptor_DEL_ContactPerson(struct zx_md_AttributeAuthorityDescriptor_s* x, int n)
{
  struct zx_md_ContactPerson_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->ContactPerson = (struct zx_md_ContactPerson_s*)x->ContactPerson->gg.g.n;
    return;
  case -1:
    y = (struct zx_md_ContactPerson_s*)x->ContactPerson;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_md_ContactPerson_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->ContactPerson; n > 1 && y->gg.g.n; --n, y = (struct zx_md_ContactPerson_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_md_AttributeAuthorityDescriptor_NUM_AttributeService) */

int zx_md_AttributeAuthorityDescriptor_NUM_AttributeService(struct zx_md_AttributeAuthorityDescriptor_s* x)
{
  struct zx_md_AttributeService_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->AttributeService; y; ++n, y = (struct zx_md_AttributeService_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_md_AttributeAuthorityDescriptor_GET_AttributeService) */

struct zx_md_AttributeService_s* zx_md_AttributeAuthorityDescriptor_GET_AttributeService(struct zx_md_AttributeAuthorityDescriptor_s* x, int n)
{
  struct zx_md_AttributeService_s* y;
  if (!x) return 0;
  for (y = x->AttributeService; n>=0 && y; --n, y = (struct zx_md_AttributeService_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_md_AttributeAuthorityDescriptor_POP_AttributeService) */

struct zx_md_AttributeService_s* zx_md_AttributeAuthorityDescriptor_POP_AttributeService(struct zx_md_AttributeAuthorityDescriptor_s* x)
{
  struct zx_md_AttributeService_s* y;
  if (!x) return 0;
  y = x->AttributeService;
  if (y)
    x->AttributeService = (struct zx_md_AttributeService_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_md_AttributeAuthorityDescriptor_PUSH_AttributeService) */

void zx_md_AttributeAuthorityDescriptor_PUSH_AttributeService(struct zx_md_AttributeAuthorityDescriptor_s* x, struct zx_md_AttributeService_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->AttributeService->gg.g;
  x->AttributeService = z;
}

/* FUNC(zx_md_AttributeAuthorityDescriptor_REV_AttributeService) */

void zx_md_AttributeAuthorityDescriptor_REV_AttributeService(struct zx_md_AttributeAuthorityDescriptor_s* x)
{
  struct zx_md_AttributeService_s* nxt;
  struct zx_md_AttributeService_s* y;
  if (!x) return;
  y = x->AttributeService;
  if (!y) return;
  x->AttributeService = 0;
  while (y) {
    nxt = (struct zx_md_AttributeService_s*)y->gg.g.n;
    y->gg.g.n = &x->AttributeService->gg.g;
    x->AttributeService = y;
    y = nxt;
  }
}

/* FUNC(zx_md_AttributeAuthorityDescriptor_PUT_AttributeService) */

void zx_md_AttributeAuthorityDescriptor_PUT_AttributeService(struct zx_md_AttributeAuthorityDescriptor_s* x, int n, struct zx_md_AttributeService_s* z)
{
  struct zx_md_AttributeService_s* y;
  if (!x || !z) return;
  y = x->AttributeService;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->AttributeService = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_md_AttributeService_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_md_AttributeAuthorityDescriptor_ADD_AttributeService) */

void zx_md_AttributeAuthorityDescriptor_ADD_AttributeService(struct zx_md_AttributeAuthorityDescriptor_s* x, int n, struct zx_md_AttributeService_s* z)
{
  struct zx_md_AttributeService_s* y;
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
    for (; y->gg.g.n; y = (struct zx_md_AttributeService_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->AttributeService; n > 1 && y; --n, y = (struct zx_md_AttributeService_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_md_AttributeAuthorityDescriptor_DEL_AttributeService) */

void zx_md_AttributeAuthorityDescriptor_DEL_AttributeService(struct zx_md_AttributeAuthorityDescriptor_s* x, int n)
{
  struct zx_md_AttributeService_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->AttributeService = (struct zx_md_AttributeService_s*)x->AttributeService->gg.g.n;
    return;
  case -1:
    y = (struct zx_md_AttributeService_s*)x->AttributeService;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_md_AttributeService_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->AttributeService; n > 1 && y->gg.g.n; --n, y = (struct zx_md_AttributeService_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_md_AttributeAuthorityDescriptor_NUM_AssertionIDRequestService) */

int zx_md_AttributeAuthorityDescriptor_NUM_AssertionIDRequestService(struct zx_md_AttributeAuthorityDescriptor_s* x)
{
  struct zx_md_AssertionIDRequestService_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->AssertionIDRequestService; y; ++n, y = (struct zx_md_AssertionIDRequestService_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_md_AttributeAuthorityDescriptor_GET_AssertionIDRequestService) */

struct zx_md_AssertionIDRequestService_s* zx_md_AttributeAuthorityDescriptor_GET_AssertionIDRequestService(struct zx_md_AttributeAuthorityDescriptor_s* x, int n)
{
  struct zx_md_AssertionIDRequestService_s* y;
  if (!x) return 0;
  for (y = x->AssertionIDRequestService; n>=0 && y; --n, y = (struct zx_md_AssertionIDRequestService_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_md_AttributeAuthorityDescriptor_POP_AssertionIDRequestService) */

struct zx_md_AssertionIDRequestService_s* zx_md_AttributeAuthorityDescriptor_POP_AssertionIDRequestService(struct zx_md_AttributeAuthorityDescriptor_s* x)
{
  struct zx_md_AssertionIDRequestService_s* y;
  if (!x) return 0;
  y = x->AssertionIDRequestService;
  if (y)
    x->AssertionIDRequestService = (struct zx_md_AssertionIDRequestService_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_md_AttributeAuthorityDescriptor_PUSH_AssertionIDRequestService) */

void zx_md_AttributeAuthorityDescriptor_PUSH_AssertionIDRequestService(struct zx_md_AttributeAuthorityDescriptor_s* x, struct zx_md_AssertionIDRequestService_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->AssertionIDRequestService->gg.g;
  x->AssertionIDRequestService = z;
}

/* FUNC(zx_md_AttributeAuthorityDescriptor_REV_AssertionIDRequestService) */

void zx_md_AttributeAuthorityDescriptor_REV_AssertionIDRequestService(struct zx_md_AttributeAuthorityDescriptor_s* x)
{
  struct zx_md_AssertionIDRequestService_s* nxt;
  struct zx_md_AssertionIDRequestService_s* y;
  if (!x) return;
  y = x->AssertionIDRequestService;
  if (!y) return;
  x->AssertionIDRequestService = 0;
  while (y) {
    nxt = (struct zx_md_AssertionIDRequestService_s*)y->gg.g.n;
    y->gg.g.n = &x->AssertionIDRequestService->gg.g;
    x->AssertionIDRequestService = y;
    y = nxt;
  }
}

/* FUNC(zx_md_AttributeAuthorityDescriptor_PUT_AssertionIDRequestService) */

void zx_md_AttributeAuthorityDescriptor_PUT_AssertionIDRequestService(struct zx_md_AttributeAuthorityDescriptor_s* x, int n, struct zx_md_AssertionIDRequestService_s* z)
{
  struct zx_md_AssertionIDRequestService_s* y;
  if (!x || !z) return;
  y = x->AssertionIDRequestService;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->AssertionIDRequestService = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_md_AssertionIDRequestService_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_md_AttributeAuthorityDescriptor_ADD_AssertionIDRequestService) */

void zx_md_AttributeAuthorityDescriptor_ADD_AssertionIDRequestService(struct zx_md_AttributeAuthorityDescriptor_s* x, int n, struct zx_md_AssertionIDRequestService_s* z)
{
  struct zx_md_AssertionIDRequestService_s* y;
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
    for (; y->gg.g.n; y = (struct zx_md_AssertionIDRequestService_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->AssertionIDRequestService; n > 1 && y; --n, y = (struct zx_md_AssertionIDRequestService_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_md_AttributeAuthorityDescriptor_DEL_AssertionIDRequestService) */

void zx_md_AttributeAuthorityDescriptor_DEL_AssertionIDRequestService(struct zx_md_AttributeAuthorityDescriptor_s* x, int n)
{
  struct zx_md_AssertionIDRequestService_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->AssertionIDRequestService = (struct zx_md_AssertionIDRequestService_s*)x->AssertionIDRequestService->gg.g.n;
    return;
  case -1:
    y = (struct zx_md_AssertionIDRequestService_s*)x->AssertionIDRequestService;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_md_AssertionIDRequestService_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->AssertionIDRequestService; n > 1 && y->gg.g.n; --n, y = (struct zx_md_AssertionIDRequestService_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_md_AttributeAuthorityDescriptor_NUM_NameIDFormat) */

int zx_md_AttributeAuthorityDescriptor_NUM_NameIDFormat(struct zx_md_AttributeAuthorityDescriptor_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->NameIDFormat; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_md_AttributeAuthorityDescriptor_GET_NameIDFormat) */

struct zx_elem_s* zx_md_AttributeAuthorityDescriptor_GET_NameIDFormat(struct zx_md_AttributeAuthorityDescriptor_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->NameIDFormat; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_md_AttributeAuthorityDescriptor_POP_NameIDFormat) */

struct zx_elem_s* zx_md_AttributeAuthorityDescriptor_POP_NameIDFormat(struct zx_md_AttributeAuthorityDescriptor_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->NameIDFormat;
  if (y)
    x->NameIDFormat = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_md_AttributeAuthorityDescriptor_PUSH_NameIDFormat) */

void zx_md_AttributeAuthorityDescriptor_PUSH_NameIDFormat(struct zx_md_AttributeAuthorityDescriptor_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->NameIDFormat->g;
  x->NameIDFormat = z;
}

/* FUNC(zx_md_AttributeAuthorityDescriptor_REV_NameIDFormat) */

void zx_md_AttributeAuthorityDescriptor_REV_NameIDFormat(struct zx_md_AttributeAuthorityDescriptor_s* x)
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

/* FUNC(zx_md_AttributeAuthorityDescriptor_PUT_NameIDFormat) */

void zx_md_AttributeAuthorityDescriptor_PUT_NameIDFormat(struct zx_md_AttributeAuthorityDescriptor_s* x, int n, struct zx_elem_s* z)
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

/* FUNC(zx_md_AttributeAuthorityDescriptor_ADD_NameIDFormat) */

void zx_md_AttributeAuthorityDescriptor_ADD_NameIDFormat(struct zx_md_AttributeAuthorityDescriptor_s* x, int n, struct zx_elem_s* z)
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

/* FUNC(zx_md_AttributeAuthorityDescriptor_DEL_NameIDFormat) */

void zx_md_AttributeAuthorityDescriptor_DEL_NameIDFormat(struct zx_md_AttributeAuthorityDescriptor_s* x, int n)
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

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_md_AttributeAuthorityDescriptor_NUM_AttributeProfile) */

int zx_md_AttributeAuthorityDescriptor_NUM_AttributeProfile(struct zx_md_AttributeAuthorityDescriptor_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->AttributeProfile; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_md_AttributeAuthorityDescriptor_GET_AttributeProfile) */

struct zx_elem_s* zx_md_AttributeAuthorityDescriptor_GET_AttributeProfile(struct zx_md_AttributeAuthorityDescriptor_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->AttributeProfile; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_md_AttributeAuthorityDescriptor_POP_AttributeProfile) */

struct zx_elem_s* zx_md_AttributeAuthorityDescriptor_POP_AttributeProfile(struct zx_md_AttributeAuthorityDescriptor_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->AttributeProfile;
  if (y)
    x->AttributeProfile = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_md_AttributeAuthorityDescriptor_PUSH_AttributeProfile) */

void zx_md_AttributeAuthorityDescriptor_PUSH_AttributeProfile(struct zx_md_AttributeAuthorityDescriptor_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->AttributeProfile->g;
  x->AttributeProfile = z;
}

/* FUNC(zx_md_AttributeAuthorityDescriptor_REV_AttributeProfile) */

void zx_md_AttributeAuthorityDescriptor_REV_AttributeProfile(struct zx_md_AttributeAuthorityDescriptor_s* x)
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

/* FUNC(zx_md_AttributeAuthorityDescriptor_PUT_AttributeProfile) */

void zx_md_AttributeAuthorityDescriptor_PUT_AttributeProfile(struct zx_md_AttributeAuthorityDescriptor_s* x, int n, struct zx_elem_s* z)
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

/* FUNC(zx_md_AttributeAuthorityDescriptor_ADD_AttributeProfile) */

void zx_md_AttributeAuthorityDescriptor_ADD_AttributeProfile(struct zx_md_AttributeAuthorityDescriptor_s* x, int n, struct zx_elem_s* z)
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

/* FUNC(zx_md_AttributeAuthorityDescriptor_DEL_AttributeProfile) */

void zx_md_AttributeAuthorityDescriptor_DEL_AttributeProfile(struct zx_md_AttributeAuthorityDescriptor_s* x, int n)
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

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_md_AttributeAuthorityDescriptor_NUM_Attribute) */

int zx_md_AttributeAuthorityDescriptor_NUM_Attribute(struct zx_md_AttributeAuthorityDescriptor_s* x)
{
  struct zx_sa_Attribute_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Attribute; y; ++n, y = (struct zx_sa_Attribute_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_md_AttributeAuthorityDescriptor_GET_Attribute) */

struct zx_sa_Attribute_s* zx_md_AttributeAuthorityDescriptor_GET_Attribute(struct zx_md_AttributeAuthorityDescriptor_s* x, int n)
{
  struct zx_sa_Attribute_s* y;
  if (!x) return 0;
  for (y = x->Attribute; n>=0 && y; --n, y = (struct zx_sa_Attribute_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_md_AttributeAuthorityDescriptor_POP_Attribute) */

struct zx_sa_Attribute_s* zx_md_AttributeAuthorityDescriptor_POP_Attribute(struct zx_md_AttributeAuthorityDescriptor_s* x)
{
  struct zx_sa_Attribute_s* y;
  if (!x) return 0;
  y = x->Attribute;
  if (y)
    x->Attribute = (struct zx_sa_Attribute_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_md_AttributeAuthorityDescriptor_PUSH_Attribute) */

void zx_md_AttributeAuthorityDescriptor_PUSH_Attribute(struct zx_md_AttributeAuthorityDescriptor_s* x, struct zx_sa_Attribute_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Attribute->gg.g;
  x->Attribute = z;
}

/* FUNC(zx_md_AttributeAuthorityDescriptor_REV_Attribute) */

void zx_md_AttributeAuthorityDescriptor_REV_Attribute(struct zx_md_AttributeAuthorityDescriptor_s* x)
{
  struct zx_sa_Attribute_s* nxt;
  struct zx_sa_Attribute_s* y;
  if (!x) return;
  y = x->Attribute;
  if (!y) return;
  x->Attribute = 0;
  while (y) {
    nxt = (struct zx_sa_Attribute_s*)y->gg.g.n;
    y->gg.g.n = &x->Attribute->gg.g;
    x->Attribute = y;
    y = nxt;
  }
}

/* FUNC(zx_md_AttributeAuthorityDescriptor_PUT_Attribute) */

void zx_md_AttributeAuthorityDescriptor_PUT_Attribute(struct zx_md_AttributeAuthorityDescriptor_s* x, int n, struct zx_sa_Attribute_s* z)
{
  struct zx_sa_Attribute_s* y;
  if (!x || !z) return;
  y = x->Attribute;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Attribute = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_sa_Attribute_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_md_AttributeAuthorityDescriptor_ADD_Attribute) */

void zx_md_AttributeAuthorityDescriptor_ADD_Attribute(struct zx_md_AttributeAuthorityDescriptor_s* x, int n, struct zx_sa_Attribute_s* z)
{
  struct zx_sa_Attribute_s* y;
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
    for (; y->gg.g.n; y = (struct zx_sa_Attribute_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Attribute; n > 1 && y; --n, y = (struct zx_sa_Attribute_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_md_AttributeAuthorityDescriptor_DEL_Attribute) */

void zx_md_AttributeAuthorityDescriptor_DEL_Attribute(struct zx_md_AttributeAuthorityDescriptor_s* x, int n)
{
  struct zx_sa_Attribute_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Attribute = (struct zx_sa_Attribute_s*)x->Attribute->gg.g.n;
    return;
  case -1:
    y = (struct zx_sa_Attribute_s*)x->Attribute;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_sa_Attribute_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Attribute; n > 1 && y->gg.g.n; --n, y = (struct zx_sa_Attribute_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif

/* FUNC(zx_md_AttributeAuthorityDescriptor_GET_ID) */
struct zx_str* zx_md_AttributeAuthorityDescriptor_GET_ID(struct zx_md_AttributeAuthorityDescriptor_s* x) { return x->ID; }
/* FUNC(zx_md_AttributeAuthorityDescriptor_PUT_ID) */
void zx_md_AttributeAuthorityDescriptor_PUT_ID(struct zx_md_AttributeAuthorityDescriptor_s* x, struct zx_str* y) { x->ID = y; }
/* FUNC(zx_md_AttributeAuthorityDescriptor_GET_validUntil) */
struct zx_str* zx_md_AttributeAuthorityDescriptor_GET_validUntil(struct zx_md_AttributeAuthorityDescriptor_s* x) { return x->validUntil; }
/* FUNC(zx_md_AttributeAuthorityDescriptor_PUT_validUntil) */
void zx_md_AttributeAuthorityDescriptor_PUT_validUntil(struct zx_md_AttributeAuthorityDescriptor_s* x, struct zx_str* y) { x->validUntil = y; }
/* FUNC(zx_md_AttributeAuthorityDescriptor_GET_cacheDuration) */
struct zx_str* zx_md_AttributeAuthorityDescriptor_GET_cacheDuration(struct zx_md_AttributeAuthorityDescriptor_s* x) { return x->cacheDuration; }
/* FUNC(zx_md_AttributeAuthorityDescriptor_PUT_cacheDuration) */
void zx_md_AttributeAuthorityDescriptor_PUT_cacheDuration(struct zx_md_AttributeAuthorityDescriptor_s* x, struct zx_str* y) { x->cacheDuration = y; }
/* FUNC(zx_md_AttributeAuthorityDescriptor_GET_protocolSupportEnumeration) */
struct zx_str* zx_md_AttributeAuthorityDescriptor_GET_protocolSupportEnumeration(struct zx_md_AttributeAuthorityDescriptor_s* x) { return x->protocolSupportEnumeration; }
/* FUNC(zx_md_AttributeAuthorityDescriptor_PUT_protocolSupportEnumeration) */
void zx_md_AttributeAuthorityDescriptor_PUT_protocolSupportEnumeration(struct zx_md_AttributeAuthorityDescriptor_s* x, struct zx_str* y) { x->protocolSupportEnumeration = y; }
/* FUNC(zx_md_AttributeAuthorityDescriptor_GET_errorURL) */
struct zx_str* zx_md_AttributeAuthorityDescriptor_GET_errorURL(struct zx_md_AttributeAuthorityDescriptor_s* x) { return x->errorURL; }
/* FUNC(zx_md_AttributeAuthorityDescriptor_PUT_errorURL) */
void zx_md_AttributeAuthorityDescriptor_PUT_errorURL(struct zx_md_AttributeAuthorityDescriptor_s* x, struct zx_str* y) { x->errorURL = y; }







#ifdef ZX_ENA_GETPUT

/* FUNC(zx_md_AttributeConsumingService_NUM_ServiceName) */

int zx_md_AttributeConsumingService_NUM_ServiceName(struct zx_md_AttributeConsumingService_s* x)
{
  struct zx_md_ServiceName_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->ServiceName; y; ++n, y = (struct zx_md_ServiceName_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_md_AttributeConsumingService_GET_ServiceName) */

struct zx_md_ServiceName_s* zx_md_AttributeConsumingService_GET_ServiceName(struct zx_md_AttributeConsumingService_s* x, int n)
{
  struct zx_md_ServiceName_s* y;
  if (!x) return 0;
  for (y = x->ServiceName; n>=0 && y; --n, y = (struct zx_md_ServiceName_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_md_AttributeConsumingService_POP_ServiceName) */

struct zx_md_ServiceName_s* zx_md_AttributeConsumingService_POP_ServiceName(struct zx_md_AttributeConsumingService_s* x)
{
  struct zx_md_ServiceName_s* y;
  if (!x) return 0;
  y = x->ServiceName;
  if (y)
    x->ServiceName = (struct zx_md_ServiceName_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_md_AttributeConsumingService_PUSH_ServiceName) */

void zx_md_AttributeConsumingService_PUSH_ServiceName(struct zx_md_AttributeConsumingService_s* x, struct zx_md_ServiceName_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->ServiceName->gg.g;
  x->ServiceName = z;
}

/* FUNC(zx_md_AttributeConsumingService_REV_ServiceName) */

void zx_md_AttributeConsumingService_REV_ServiceName(struct zx_md_AttributeConsumingService_s* x)
{
  struct zx_md_ServiceName_s* nxt;
  struct zx_md_ServiceName_s* y;
  if (!x) return;
  y = x->ServiceName;
  if (!y) return;
  x->ServiceName = 0;
  while (y) {
    nxt = (struct zx_md_ServiceName_s*)y->gg.g.n;
    y->gg.g.n = &x->ServiceName->gg.g;
    x->ServiceName = y;
    y = nxt;
  }
}

/* FUNC(zx_md_AttributeConsumingService_PUT_ServiceName) */

void zx_md_AttributeConsumingService_PUT_ServiceName(struct zx_md_AttributeConsumingService_s* x, int n, struct zx_md_ServiceName_s* z)
{
  struct zx_md_ServiceName_s* y;
  if (!x || !z) return;
  y = x->ServiceName;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->ServiceName = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_md_ServiceName_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_md_AttributeConsumingService_ADD_ServiceName) */

void zx_md_AttributeConsumingService_ADD_ServiceName(struct zx_md_AttributeConsumingService_s* x, int n, struct zx_md_ServiceName_s* z)
{
  struct zx_md_ServiceName_s* y;
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
    for (; y->gg.g.n; y = (struct zx_md_ServiceName_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->ServiceName; n > 1 && y; --n, y = (struct zx_md_ServiceName_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_md_AttributeConsumingService_DEL_ServiceName) */

void zx_md_AttributeConsumingService_DEL_ServiceName(struct zx_md_AttributeConsumingService_s* x, int n)
{
  struct zx_md_ServiceName_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->ServiceName = (struct zx_md_ServiceName_s*)x->ServiceName->gg.g.n;
    return;
  case -1:
    y = (struct zx_md_ServiceName_s*)x->ServiceName;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_md_ServiceName_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->ServiceName; n > 1 && y->gg.g.n; --n, y = (struct zx_md_ServiceName_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_md_AttributeConsumingService_NUM_ServiceDescription) */

int zx_md_AttributeConsumingService_NUM_ServiceDescription(struct zx_md_AttributeConsumingService_s* x)
{
  struct zx_md_ServiceDescription_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->ServiceDescription; y; ++n, y = (struct zx_md_ServiceDescription_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_md_AttributeConsumingService_GET_ServiceDescription) */

struct zx_md_ServiceDescription_s* zx_md_AttributeConsumingService_GET_ServiceDescription(struct zx_md_AttributeConsumingService_s* x, int n)
{
  struct zx_md_ServiceDescription_s* y;
  if (!x) return 0;
  for (y = x->ServiceDescription; n>=0 && y; --n, y = (struct zx_md_ServiceDescription_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_md_AttributeConsumingService_POP_ServiceDescription) */

struct zx_md_ServiceDescription_s* zx_md_AttributeConsumingService_POP_ServiceDescription(struct zx_md_AttributeConsumingService_s* x)
{
  struct zx_md_ServiceDescription_s* y;
  if (!x) return 0;
  y = x->ServiceDescription;
  if (y)
    x->ServiceDescription = (struct zx_md_ServiceDescription_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_md_AttributeConsumingService_PUSH_ServiceDescription) */

void zx_md_AttributeConsumingService_PUSH_ServiceDescription(struct zx_md_AttributeConsumingService_s* x, struct zx_md_ServiceDescription_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->ServiceDescription->gg.g;
  x->ServiceDescription = z;
}

/* FUNC(zx_md_AttributeConsumingService_REV_ServiceDescription) */

void zx_md_AttributeConsumingService_REV_ServiceDescription(struct zx_md_AttributeConsumingService_s* x)
{
  struct zx_md_ServiceDescription_s* nxt;
  struct zx_md_ServiceDescription_s* y;
  if (!x) return;
  y = x->ServiceDescription;
  if (!y) return;
  x->ServiceDescription = 0;
  while (y) {
    nxt = (struct zx_md_ServiceDescription_s*)y->gg.g.n;
    y->gg.g.n = &x->ServiceDescription->gg.g;
    x->ServiceDescription = y;
    y = nxt;
  }
}

/* FUNC(zx_md_AttributeConsumingService_PUT_ServiceDescription) */

void zx_md_AttributeConsumingService_PUT_ServiceDescription(struct zx_md_AttributeConsumingService_s* x, int n, struct zx_md_ServiceDescription_s* z)
{
  struct zx_md_ServiceDescription_s* y;
  if (!x || !z) return;
  y = x->ServiceDescription;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->ServiceDescription = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_md_ServiceDescription_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_md_AttributeConsumingService_ADD_ServiceDescription) */

void zx_md_AttributeConsumingService_ADD_ServiceDescription(struct zx_md_AttributeConsumingService_s* x, int n, struct zx_md_ServiceDescription_s* z)
{
  struct zx_md_ServiceDescription_s* y;
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
    for (; y->gg.g.n; y = (struct zx_md_ServiceDescription_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->ServiceDescription; n > 1 && y; --n, y = (struct zx_md_ServiceDescription_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_md_AttributeConsumingService_DEL_ServiceDescription) */

void zx_md_AttributeConsumingService_DEL_ServiceDescription(struct zx_md_AttributeConsumingService_s* x, int n)
{
  struct zx_md_ServiceDescription_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->ServiceDescription = (struct zx_md_ServiceDescription_s*)x->ServiceDescription->gg.g.n;
    return;
  case -1:
    y = (struct zx_md_ServiceDescription_s*)x->ServiceDescription;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_md_ServiceDescription_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->ServiceDescription; n > 1 && y->gg.g.n; --n, y = (struct zx_md_ServiceDescription_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_md_AttributeConsumingService_NUM_RequestedAttribute) */

int zx_md_AttributeConsumingService_NUM_RequestedAttribute(struct zx_md_AttributeConsumingService_s* x)
{
  struct zx_md_RequestedAttribute_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->RequestedAttribute; y; ++n, y = (struct zx_md_RequestedAttribute_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_md_AttributeConsumingService_GET_RequestedAttribute) */

struct zx_md_RequestedAttribute_s* zx_md_AttributeConsumingService_GET_RequestedAttribute(struct zx_md_AttributeConsumingService_s* x, int n)
{
  struct zx_md_RequestedAttribute_s* y;
  if (!x) return 0;
  for (y = x->RequestedAttribute; n>=0 && y; --n, y = (struct zx_md_RequestedAttribute_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_md_AttributeConsumingService_POP_RequestedAttribute) */

struct zx_md_RequestedAttribute_s* zx_md_AttributeConsumingService_POP_RequestedAttribute(struct zx_md_AttributeConsumingService_s* x)
{
  struct zx_md_RequestedAttribute_s* y;
  if (!x) return 0;
  y = x->RequestedAttribute;
  if (y)
    x->RequestedAttribute = (struct zx_md_RequestedAttribute_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_md_AttributeConsumingService_PUSH_RequestedAttribute) */

void zx_md_AttributeConsumingService_PUSH_RequestedAttribute(struct zx_md_AttributeConsumingService_s* x, struct zx_md_RequestedAttribute_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->RequestedAttribute->gg.g;
  x->RequestedAttribute = z;
}

/* FUNC(zx_md_AttributeConsumingService_REV_RequestedAttribute) */

void zx_md_AttributeConsumingService_REV_RequestedAttribute(struct zx_md_AttributeConsumingService_s* x)
{
  struct zx_md_RequestedAttribute_s* nxt;
  struct zx_md_RequestedAttribute_s* y;
  if (!x) return;
  y = x->RequestedAttribute;
  if (!y) return;
  x->RequestedAttribute = 0;
  while (y) {
    nxt = (struct zx_md_RequestedAttribute_s*)y->gg.g.n;
    y->gg.g.n = &x->RequestedAttribute->gg.g;
    x->RequestedAttribute = y;
    y = nxt;
  }
}

/* FUNC(zx_md_AttributeConsumingService_PUT_RequestedAttribute) */

void zx_md_AttributeConsumingService_PUT_RequestedAttribute(struct zx_md_AttributeConsumingService_s* x, int n, struct zx_md_RequestedAttribute_s* z)
{
  struct zx_md_RequestedAttribute_s* y;
  if (!x || !z) return;
  y = x->RequestedAttribute;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->RequestedAttribute = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_md_RequestedAttribute_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_md_AttributeConsumingService_ADD_RequestedAttribute) */

void zx_md_AttributeConsumingService_ADD_RequestedAttribute(struct zx_md_AttributeConsumingService_s* x, int n, struct zx_md_RequestedAttribute_s* z)
{
  struct zx_md_RequestedAttribute_s* y;
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
    for (; y->gg.g.n; y = (struct zx_md_RequestedAttribute_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->RequestedAttribute; n > 1 && y; --n, y = (struct zx_md_RequestedAttribute_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_md_AttributeConsumingService_DEL_RequestedAttribute) */

void zx_md_AttributeConsumingService_DEL_RequestedAttribute(struct zx_md_AttributeConsumingService_s* x, int n)
{
  struct zx_md_RequestedAttribute_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->RequestedAttribute = (struct zx_md_RequestedAttribute_s*)x->RequestedAttribute->gg.g.n;
    return;
  case -1:
    y = (struct zx_md_RequestedAttribute_s*)x->RequestedAttribute;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_md_RequestedAttribute_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->RequestedAttribute; n > 1 && y->gg.g.n; --n, y = (struct zx_md_RequestedAttribute_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif

/* FUNC(zx_md_AttributeConsumingService_GET_index) */
struct zx_str* zx_md_AttributeConsumingService_GET_index(struct zx_md_AttributeConsumingService_s* x) { return x->index; }
/* FUNC(zx_md_AttributeConsumingService_PUT_index) */
void zx_md_AttributeConsumingService_PUT_index(struct zx_md_AttributeConsumingService_s* x, struct zx_str* y) { x->index = y; }
/* FUNC(zx_md_AttributeConsumingService_GET_isDefault) */
struct zx_str* zx_md_AttributeConsumingService_GET_isDefault(struct zx_md_AttributeConsumingService_s* x) { return x->isDefault; }
/* FUNC(zx_md_AttributeConsumingService_PUT_isDefault) */
void zx_md_AttributeConsumingService_PUT_isDefault(struct zx_md_AttributeConsumingService_s* x, struct zx_str* y) { x->isDefault = y; }





/* FUNC(zx_md_AttributeService_GET_Binding) */
struct zx_str* zx_md_AttributeService_GET_Binding(struct zx_md_AttributeService_s* x) { return x->Binding; }
/* FUNC(zx_md_AttributeService_PUT_Binding) */
void zx_md_AttributeService_PUT_Binding(struct zx_md_AttributeService_s* x, struct zx_str* y) { x->Binding = y; }
/* FUNC(zx_md_AttributeService_GET_Location) */
struct zx_str* zx_md_AttributeService_GET_Location(struct zx_md_AttributeService_s* x) { return x->Location; }
/* FUNC(zx_md_AttributeService_PUT_Location) */
void zx_md_AttributeService_PUT_Location(struct zx_md_AttributeService_s* x, struct zx_str* y) { x->Location = y; }
/* FUNC(zx_md_AttributeService_GET_ResponseLocation) */
struct zx_str* zx_md_AttributeService_GET_ResponseLocation(struct zx_md_AttributeService_s* x) { return x->ResponseLocation; }
/* FUNC(zx_md_AttributeService_PUT_ResponseLocation) */
void zx_md_AttributeService_PUT_ResponseLocation(struct zx_md_AttributeService_s* x, struct zx_str* y) { x->ResponseLocation = y; }
/* FUNC(zx_md_AttributeService_GET_index) */
struct zx_str* zx_md_AttributeService_GET_index(struct zx_md_AttributeService_s* x) { return x->index; }
/* FUNC(zx_md_AttributeService_PUT_index) */
void zx_md_AttributeService_PUT_index(struct zx_md_AttributeService_s* x, struct zx_str* y) { x->index = y; }
/* FUNC(zx_md_AttributeService_GET_isDefault) */
struct zx_str* zx_md_AttributeService_GET_isDefault(struct zx_md_AttributeService_s* x) { return x->isDefault; }
/* FUNC(zx_md_AttributeService_PUT_isDefault) */
void zx_md_AttributeService_PUT_isDefault(struct zx_md_AttributeService_s* x, struct zx_str* y) { x->isDefault = y; }







#ifdef ZX_ENA_GETPUT

/* FUNC(zx_md_AuthnAuthorityDescriptor_NUM_Signature) */

int zx_md_AuthnAuthorityDescriptor_NUM_Signature(struct zx_md_AuthnAuthorityDescriptor_s* x)
{
  struct zx_ds_Signature_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Signature; y; ++n, y = (struct zx_ds_Signature_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_md_AuthnAuthorityDescriptor_GET_Signature) */

struct zx_ds_Signature_s* zx_md_AuthnAuthorityDescriptor_GET_Signature(struct zx_md_AuthnAuthorityDescriptor_s* x, int n)
{
  struct zx_ds_Signature_s* y;
  if (!x) return 0;
  for (y = x->Signature; n>=0 && y; --n, y = (struct zx_ds_Signature_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_md_AuthnAuthorityDescriptor_POP_Signature) */

struct zx_ds_Signature_s* zx_md_AuthnAuthorityDescriptor_POP_Signature(struct zx_md_AuthnAuthorityDescriptor_s* x)
{
  struct zx_ds_Signature_s* y;
  if (!x) return 0;
  y = x->Signature;
  if (y)
    x->Signature = (struct zx_ds_Signature_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_md_AuthnAuthorityDescriptor_PUSH_Signature) */

void zx_md_AuthnAuthorityDescriptor_PUSH_Signature(struct zx_md_AuthnAuthorityDescriptor_s* x, struct zx_ds_Signature_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Signature->gg.g;
  x->Signature = z;
}

/* FUNC(zx_md_AuthnAuthorityDescriptor_REV_Signature) */

void zx_md_AuthnAuthorityDescriptor_REV_Signature(struct zx_md_AuthnAuthorityDescriptor_s* x)
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

/* FUNC(zx_md_AuthnAuthorityDescriptor_PUT_Signature) */

void zx_md_AuthnAuthorityDescriptor_PUT_Signature(struct zx_md_AuthnAuthorityDescriptor_s* x, int n, struct zx_ds_Signature_s* z)
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

/* FUNC(zx_md_AuthnAuthorityDescriptor_ADD_Signature) */

void zx_md_AuthnAuthorityDescriptor_ADD_Signature(struct zx_md_AuthnAuthorityDescriptor_s* x, int n, struct zx_ds_Signature_s* z)
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

/* FUNC(zx_md_AuthnAuthorityDescriptor_DEL_Signature) */

void zx_md_AuthnAuthorityDescriptor_DEL_Signature(struct zx_md_AuthnAuthorityDescriptor_s* x, int n)
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

/* FUNC(zx_md_AuthnAuthorityDescriptor_NUM_Extensions) */

int zx_md_AuthnAuthorityDescriptor_NUM_Extensions(struct zx_md_AuthnAuthorityDescriptor_s* x)
{
  struct zx_md_Extensions_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Extensions; y; ++n, y = (struct zx_md_Extensions_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_md_AuthnAuthorityDescriptor_GET_Extensions) */

struct zx_md_Extensions_s* zx_md_AuthnAuthorityDescriptor_GET_Extensions(struct zx_md_AuthnAuthorityDescriptor_s* x, int n)
{
  struct zx_md_Extensions_s* y;
  if (!x) return 0;
  for (y = x->Extensions; n>=0 && y; --n, y = (struct zx_md_Extensions_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_md_AuthnAuthorityDescriptor_POP_Extensions) */

struct zx_md_Extensions_s* zx_md_AuthnAuthorityDescriptor_POP_Extensions(struct zx_md_AuthnAuthorityDescriptor_s* x)
{
  struct zx_md_Extensions_s* y;
  if (!x) return 0;
  y = x->Extensions;
  if (y)
    x->Extensions = (struct zx_md_Extensions_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_md_AuthnAuthorityDescriptor_PUSH_Extensions) */

void zx_md_AuthnAuthorityDescriptor_PUSH_Extensions(struct zx_md_AuthnAuthorityDescriptor_s* x, struct zx_md_Extensions_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Extensions->gg.g;
  x->Extensions = z;
}

/* FUNC(zx_md_AuthnAuthorityDescriptor_REV_Extensions) */

void zx_md_AuthnAuthorityDescriptor_REV_Extensions(struct zx_md_AuthnAuthorityDescriptor_s* x)
{
  struct zx_md_Extensions_s* nxt;
  struct zx_md_Extensions_s* y;
  if (!x) return;
  y = x->Extensions;
  if (!y) return;
  x->Extensions = 0;
  while (y) {
    nxt = (struct zx_md_Extensions_s*)y->gg.g.n;
    y->gg.g.n = &x->Extensions->gg.g;
    x->Extensions = y;
    y = nxt;
  }
}

/* FUNC(zx_md_AuthnAuthorityDescriptor_PUT_Extensions) */

void zx_md_AuthnAuthorityDescriptor_PUT_Extensions(struct zx_md_AuthnAuthorityDescriptor_s* x, int n, struct zx_md_Extensions_s* z)
{
  struct zx_md_Extensions_s* y;
  if (!x || !z) return;
  y = x->Extensions;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Extensions = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_md_Extensions_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_md_AuthnAuthorityDescriptor_ADD_Extensions) */

void zx_md_AuthnAuthorityDescriptor_ADD_Extensions(struct zx_md_AuthnAuthorityDescriptor_s* x, int n, struct zx_md_Extensions_s* z)
{
  struct zx_md_Extensions_s* y;
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
    for (; y->gg.g.n; y = (struct zx_md_Extensions_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Extensions; n > 1 && y; --n, y = (struct zx_md_Extensions_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_md_AuthnAuthorityDescriptor_DEL_Extensions) */

void zx_md_AuthnAuthorityDescriptor_DEL_Extensions(struct zx_md_AuthnAuthorityDescriptor_s* x, int n)
{
  struct zx_md_Extensions_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Extensions = (struct zx_md_Extensions_s*)x->Extensions->gg.g.n;
    return;
  case -1:
    y = (struct zx_md_Extensions_s*)x->Extensions;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_md_Extensions_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Extensions; n > 1 && y->gg.g.n; --n, y = (struct zx_md_Extensions_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_md_AuthnAuthorityDescriptor_NUM_KeyDescriptor) */

int zx_md_AuthnAuthorityDescriptor_NUM_KeyDescriptor(struct zx_md_AuthnAuthorityDescriptor_s* x)
{
  struct zx_md_KeyDescriptor_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->KeyDescriptor; y; ++n, y = (struct zx_md_KeyDescriptor_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_md_AuthnAuthorityDescriptor_GET_KeyDescriptor) */

struct zx_md_KeyDescriptor_s* zx_md_AuthnAuthorityDescriptor_GET_KeyDescriptor(struct zx_md_AuthnAuthorityDescriptor_s* x, int n)
{
  struct zx_md_KeyDescriptor_s* y;
  if (!x) return 0;
  for (y = x->KeyDescriptor; n>=0 && y; --n, y = (struct zx_md_KeyDescriptor_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_md_AuthnAuthorityDescriptor_POP_KeyDescriptor) */

struct zx_md_KeyDescriptor_s* zx_md_AuthnAuthorityDescriptor_POP_KeyDescriptor(struct zx_md_AuthnAuthorityDescriptor_s* x)
{
  struct zx_md_KeyDescriptor_s* y;
  if (!x) return 0;
  y = x->KeyDescriptor;
  if (y)
    x->KeyDescriptor = (struct zx_md_KeyDescriptor_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_md_AuthnAuthorityDescriptor_PUSH_KeyDescriptor) */

void zx_md_AuthnAuthorityDescriptor_PUSH_KeyDescriptor(struct zx_md_AuthnAuthorityDescriptor_s* x, struct zx_md_KeyDescriptor_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->KeyDescriptor->gg.g;
  x->KeyDescriptor = z;
}

/* FUNC(zx_md_AuthnAuthorityDescriptor_REV_KeyDescriptor) */

void zx_md_AuthnAuthorityDescriptor_REV_KeyDescriptor(struct zx_md_AuthnAuthorityDescriptor_s* x)
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

/* FUNC(zx_md_AuthnAuthorityDescriptor_PUT_KeyDescriptor) */

void zx_md_AuthnAuthorityDescriptor_PUT_KeyDescriptor(struct zx_md_AuthnAuthorityDescriptor_s* x, int n, struct zx_md_KeyDescriptor_s* z)
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

/* FUNC(zx_md_AuthnAuthorityDescriptor_ADD_KeyDescriptor) */

void zx_md_AuthnAuthorityDescriptor_ADD_KeyDescriptor(struct zx_md_AuthnAuthorityDescriptor_s* x, int n, struct zx_md_KeyDescriptor_s* z)
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

/* FUNC(zx_md_AuthnAuthorityDescriptor_DEL_KeyDescriptor) */

void zx_md_AuthnAuthorityDescriptor_DEL_KeyDescriptor(struct zx_md_AuthnAuthorityDescriptor_s* x, int n)
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

/* FUNC(zx_md_AuthnAuthorityDescriptor_NUM_Organization) */

int zx_md_AuthnAuthorityDescriptor_NUM_Organization(struct zx_md_AuthnAuthorityDescriptor_s* x)
{
  struct zx_md_Organization_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Organization; y; ++n, y = (struct zx_md_Organization_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_md_AuthnAuthorityDescriptor_GET_Organization) */

struct zx_md_Organization_s* zx_md_AuthnAuthorityDescriptor_GET_Organization(struct zx_md_AuthnAuthorityDescriptor_s* x, int n)
{
  struct zx_md_Organization_s* y;
  if (!x) return 0;
  for (y = x->Organization; n>=0 && y; --n, y = (struct zx_md_Organization_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_md_AuthnAuthorityDescriptor_POP_Organization) */

struct zx_md_Organization_s* zx_md_AuthnAuthorityDescriptor_POP_Organization(struct zx_md_AuthnAuthorityDescriptor_s* x)
{
  struct zx_md_Organization_s* y;
  if (!x) return 0;
  y = x->Organization;
  if (y)
    x->Organization = (struct zx_md_Organization_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_md_AuthnAuthorityDescriptor_PUSH_Organization) */

void zx_md_AuthnAuthorityDescriptor_PUSH_Organization(struct zx_md_AuthnAuthorityDescriptor_s* x, struct zx_md_Organization_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Organization->gg.g;
  x->Organization = z;
}

/* FUNC(zx_md_AuthnAuthorityDescriptor_REV_Organization) */

void zx_md_AuthnAuthorityDescriptor_REV_Organization(struct zx_md_AuthnAuthorityDescriptor_s* x)
{
  struct zx_md_Organization_s* nxt;
  struct zx_md_Organization_s* y;
  if (!x) return;
  y = x->Organization;
  if (!y) return;
  x->Organization = 0;
  while (y) {
    nxt = (struct zx_md_Organization_s*)y->gg.g.n;
    y->gg.g.n = &x->Organization->gg.g;
    x->Organization = y;
    y = nxt;
  }
}

/* FUNC(zx_md_AuthnAuthorityDescriptor_PUT_Organization) */

void zx_md_AuthnAuthorityDescriptor_PUT_Organization(struct zx_md_AuthnAuthorityDescriptor_s* x, int n, struct zx_md_Organization_s* z)
{
  struct zx_md_Organization_s* y;
  if (!x || !z) return;
  y = x->Organization;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Organization = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_md_Organization_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_md_AuthnAuthorityDescriptor_ADD_Organization) */

void zx_md_AuthnAuthorityDescriptor_ADD_Organization(struct zx_md_AuthnAuthorityDescriptor_s* x, int n, struct zx_md_Organization_s* z)
{
  struct zx_md_Organization_s* y;
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
    for (; y->gg.g.n; y = (struct zx_md_Organization_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Organization; n > 1 && y; --n, y = (struct zx_md_Organization_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_md_AuthnAuthorityDescriptor_DEL_Organization) */

void zx_md_AuthnAuthorityDescriptor_DEL_Organization(struct zx_md_AuthnAuthorityDescriptor_s* x, int n)
{
  struct zx_md_Organization_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Organization = (struct zx_md_Organization_s*)x->Organization->gg.g.n;
    return;
  case -1:
    y = (struct zx_md_Organization_s*)x->Organization;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_md_Organization_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Organization; n > 1 && y->gg.g.n; --n, y = (struct zx_md_Organization_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_md_AuthnAuthorityDescriptor_NUM_ContactPerson) */

int zx_md_AuthnAuthorityDescriptor_NUM_ContactPerson(struct zx_md_AuthnAuthorityDescriptor_s* x)
{
  struct zx_md_ContactPerson_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->ContactPerson; y; ++n, y = (struct zx_md_ContactPerson_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_md_AuthnAuthorityDescriptor_GET_ContactPerson) */

struct zx_md_ContactPerson_s* zx_md_AuthnAuthorityDescriptor_GET_ContactPerson(struct zx_md_AuthnAuthorityDescriptor_s* x, int n)
{
  struct zx_md_ContactPerson_s* y;
  if (!x) return 0;
  for (y = x->ContactPerson; n>=0 && y; --n, y = (struct zx_md_ContactPerson_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_md_AuthnAuthorityDescriptor_POP_ContactPerson) */

struct zx_md_ContactPerson_s* zx_md_AuthnAuthorityDescriptor_POP_ContactPerson(struct zx_md_AuthnAuthorityDescriptor_s* x)
{
  struct zx_md_ContactPerson_s* y;
  if (!x) return 0;
  y = x->ContactPerson;
  if (y)
    x->ContactPerson = (struct zx_md_ContactPerson_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_md_AuthnAuthorityDescriptor_PUSH_ContactPerson) */

void zx_md_AuthnAuthorityDescriptor_PUSH_ContactPerson(struct zx_md_AuthnAuthorityDescriptor_s* x, struct zx_md_ContactPerson_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->ContactPerson->gg.g;
  x->ContactPerson = z;
}

/* FUNC(zx_md_AuthnAuthorityDescriptor_REV_ContactPerson) */

void zx_md_AuthnAuthorityDescriptor_REV_ContactPerson(struct zx_md_AuthnAuthorityDescriptor_s* x)
{
  struct zx_md_ContactPerson_s* nxt;
  struct zx_md_ContactPerson_s* y;
  if (!x) return;
  y = x->ContactPerson;
  if (!y) return;
  x->ContactPerson = 0;
  while (y) {
    nxt = (struct zx_md_ContactPerson_s*)y->gg.g.n;
    y->gg.g.n = &x->ContactPerson->gg.g;
    x->ContactPerson = y;
    y = nxt;
  }
}

/* FUNC(zx_md_AuthnAuthorityDescriptor_PUT_ContactPerson) */

void zx_md_AuthnAuthorityDescriptor_PUT_ContactPerson(struct zx_md_AuthnAuthorityDescriptor_s* x, int n, struct zx_md_ContactPerson_s* z)
{
  struct zx_md_ContactPerson_s* y;
  if (!x || !z) return;
  y = x->ContactPerson;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->ContactPerson = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_md_ContactPerson_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_md_AuthnAuthorityDescriptor_ADD_ContactPerson) */

void zx_md_AuthnAuthorityDescriptor_ADD_ContactPerson(struct zx_md_AuthnAuthorityDescriptor_s* x, int n, struct zx_md_ContactPerson_s* z)
{
  struct zx_md_ContactPerson_s* y;
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
    for (; y->gg.g.n; y = (struct zx_md_ContactPerson_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->ContactPerson; n > 1 && y; --n, y = (struct zx_md_ContactPerson_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_md_AuthnAuthorityDescriptor_DEL_ContactPerson) */

void zx_md_AuthnAuthorityDescriptor_DEL_ContactPerson(struct zx_md_AuthnAuthorityDescriptor_s* x, int n)
{
  struct zx_md_ContactPerson_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->ContactPerson = (struct zx_md_ContactPerson_s*)x->ContactPerson->gg.g.n;
    return;
  case -1:
    y = (struct zx_md_ContactPerson_s*)x->ContactPerson;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_md_ContactPerson_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->ContactPerson; n > 1 && y->gg.g.n; --n, y = (struct zx_md_ContactPerson_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_md_AuthnAuthorityDescriptor_NUM_AuthnQueryService) */

int zx_md_AuthnAuthorityDescriptor_NUM_AuthnQueryService(struct zx_md_AuthnAuthorityDescriptor_s* x)
{
  struct zx_md_AuthnQueryService_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->AuthnQueryService; y; ++n, y = (struct zx_md_AuthnQueryService_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_md_AuthnAuthorityDescriptor_GET_AuthnQueryService) */

struct zx_md_AuthnQueryService_s* zx_md_AuthnAuthorityDescriptor_GET_AuthnQueryService(struct zx_md_AuthnAuthorityDescriptor_s* x, int n)
{
  struct zx_md_AuthnQueryService_s* y;
  if (!x) return 0;
  for (y = x->AuthnQueryService; n>=0 && y; --n, y = (struct zx_md_AuthnQueryService_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_md_AuthnAuthorityDescriptor_POP_AuthnQueryService) */

struct zx_md_AuthnQueryService_s* zx_md_AuthnAuthorityDescriptor_POP_AuthnQueryService(struct zx_md_AuthnAuthorityDescriptor_s* x)
{
  struct zx_md_AuthnQueryService_s* y;
  if (!x) return 0;
  y = x->AuthnQueryService;
  if (y)
    x->AuthnQueryService = (struct zx_md_AuthnQueryService_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_md_AuthnAuthorityDescriptor_PUSH_AuthnQueryService) */

void zx_md_AuthnAuthorityDescriptor_PUSH_AuthnQueryService(struct zx_md_AuthnAuthorityDescriptor_s* x, struct zx_md_AuthnQueryService_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->AuthnQueryService->gg.g;
  x->AuthnQueryService = z;
}

/* FUNC(zx_md_AuthnAuthorityDescriptor_REV_AuthnQueryService) */

void zx_md_AuthnAuthorityDescriptor_REV_AuthnQueryService(struct zx_md_AuthnAuthorityDescriptor_s* x)
{
  struct zx_md_AuthnQueryService_s* nxt;
  struct zx_md_AuthnQueryService_s* y;
  if (!x) return;
  y = x->AuthnQueryService;
  if (!y) return;
  x->AuthnQueryService = 0;
  while (y) {
    nxt = (struct zx_md_AuthnQueryService_s*)y->gg.g.n;
    y->gg.g.n = &x->AuthnQueryService->gg.g;
    x->AuthnQueryService = y;
    y = nxt;
  }
}

/* FUNC(zx_md_AuthnAuthorityDescriptor_PUT_AuthnQueryService) */

void zx_md_AuthnAuthorityDescriptor_PUT_AuthnQueryService(struct zx_md_AuthnAuthorityDescriptor_s* x, int n, struct zx_md_AuthnQueryService_s* z)
{
  struct zx_md_AuthnQueryService_s* y;
  if (!x || !z) return;
  y = x->AuthnQueryService;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->AuthnQueryService = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_md_AuthnQueryService_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_md_AuthnAuthorityDescriptor_ADD_AuthnQueryService) */

void zx_md_AuthnAuthorityDescriptor_ADD_AuthnQueryService(struct zx_md_AuthnAuthorityDescriptor_s* x, int n, struct zx_md_AuthnQueryService_s* z)
{
  struct zx_md_AuthnQueryService_s* y;
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
    for (; y->gg.g.n; y = (struct zx_md_AuthnQueryService_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->AuthnQueryService; n > 1 && y; --n, y = (struct zx_md_AuthnQueryService_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_md_AuthnAuthorityDescriptor_DEL_AuthnQueryService) */

void zx_md_AuthnAuthorityDescriptor_DEL_AuthnQueryService(struct zx_md_AuthnAuthorityDescriptor_s* x, int n)
{
  struct zx_md_AuthnQueryService_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->AuthnQueryService = (struct zx_md_AuthnQueryService_s*)x->AuthnQueryService->gg.g.n;
    return;
  case -1:
    y = (struct zx_md_AuthnQueryService_s*)x->AuthnQueryService;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_md_AuthnQueryService_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->AuthnQueryService; n > 1 && y->gg.g.n; --n, y = (struct zx_md_AuthnQueryService_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_md_AuthnAuthorityDescriptor_NUM_AssertionIDRequestService) */

int zx_md_AuthnAuthorityDescriptor_NUM_AssertionIDRequestService(struct zx_md_AuthnAuthorityDescriptor_s* x)
{
  struct zx_md_AssertionIDRequestService_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->AssertionIDRequestService; y; ++n, y = (struct zx_md_AssertionIDRequestService_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_md_AuthnAuthorityDescriptor_GET_AssertionIDRequestService) */

struct zx_md_AssertionIDRequestService_s* zx_md_AuthnAuthorityDescriptor_GET_AssertionIDRequestService(struct zx_md_AuthnAuthorityDescriptor_s* x, int n)
{
  struct zx_md_AssertionIDRequestService_s* y;
  if (!x) return 0;
  for (y = x->AssertionIDRequestService; n>=0 && y; --n, y = (struct zx_md_AssertionIDRequestService_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_md_AuthnAuthorityDescriptor_POP_AssertionIDRequestService) */

struct zx_md_AssertionIDRequestService_s* zx_md_AuthnAuthorityDescriptor_POP_AssertionIDRequestService(struct zx_md_AuthnAuthorityDescriptor_s* x)
{
  struct zx_md_AssertionIDRequestService_s* y;
  if (!x) return 0;
  y = x->AssertionIDRequestService;
  if (y)
    x->AssertionIDRequestService = (struct zx_md_AssertionIDRequestService_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_md_AuthnAuthorityDescriptor_PUSH_AssertionIDRequestService) */

void zx_md_AuthnAuthorityDescriptor_PUSH_AssertionIDRequestService(struct zx_md_AuthnAuthorityDescriptor_s* x, struct zx_md_AssertionIDRequestService_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->AssertionIDRequestService->gg.g;
  x->AssertionIDRequestService = z;
}

/* FUNC(zx_md_AuthnAuthorityDescriptor_REV_AssertionIDRequestService) */

void zx_md_AuthnAuthorityDescriptor_REV_AssertionIDRequestService(struct zx_md_AuthnAuthorityDescriptor_s* x)
{
  struct zx_md_AssertionIDRequestService_s* nxt;
  struct zx_md_AssertionIDRequestService_s* y;
  if (!x) return;
  y = x->AssertionIDRequestService;
  if (!y) return;
  x->AssertionIDRequestService = 0;
  while (y) {
    nxt = (struct zx_md_AssertionIDRequestService_s*)y->gg.g.n;
    y->gg.g.n = &x->AssertionIDRequestService->gg.g;
    x->AssertionIDRequestService = y;
    y = nxt;
  }
}

/* FUNC(zx_md_AuthnAuthorityDescriptor_PUT_AssertionIDRequestService) */

void zx_md_AuthnAuthorityDescriptor_PUT_AssertionIDRequestService(struct zx_md_AuthnAuthorityDescriptor_s* x, int n, struct zx_md_AssertionIDRequestService_s* z)
{
  struct zx_md_AssertionIDRequestService_s* y;
  if (!x || !z) return;
  y = x->AssertionIDRequestService;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->AssertionIDRequestService = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_md_AssertionIDRequestService_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_md_AuthnAuthorityDescriptor_ADD_AssertionIDRequestService) */

void zx_md_AuthnAuthorityDescriptor_ADD_AssertionIDRequestService(struct zx_md_AuthnAuthorityDescriptor_s* x, int n, struct zx_md_AssertionIDRequestService_s* z)
{
  struct zx_md_AssertionIDRequestService_s* y;
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
    for (; y->gg.g.n; y = (struct zx_md_AssertionIDRequestService_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->AssertionIDRequestService; n > 1 && y; --n, y = (struct zx_md_AssertionIDRequestService_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_md_AuthnAuthorityDescriptor_DEL_AssertionIDRequestService) */

void zx_md_AuthnAuthorityDescriptor_DEL_AssertionIDRequestService(struct zx_md_AuthnAuthorityDescriptor_s* x, int n)
{
  struct zx_md_AssertionIDRequestService_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->AssertionIDRequestService = (struct zx_md_AssertionIDRequestService_s*)x->AssertionIDRequestService->gg.g.n;
    return;
  case -1:
    y = (struct zx_md_AssertionIDRequestService_s*)x->AssertionIDRequestService;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_md_AssertionIDRequestService_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->AssertionIDRequestService; n > 1 && y->gg.g.n; --n, y = (struct zx_md_AssertionIDRequestService_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_md_AuthnAuthorityDescriptor_NUM_NameIDFormat) */

int zx_md_AuthnAuthorityDescriptor_NUM_NameIDFormat(struct zx_md_AuthnAuthorityDescriptor_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->NameIDFormat; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_md_AuthnAuthorityDescriptor_GET_NameIDFormat) */

struct zx_elem_s* zx_md_AuthnAuthorityDescriptor_GET_NameIDFormat(struct zx_md_AuthnAuthorityDescriptor_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->NameIDFormat; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_md_AuthnAuthorityDescriptor_POP_NameIDFormat) */

struct zx_elem_s* zx_md_AuthnAuthorityDescriptor_POP_NameIDFormat(struct zx_md_AuthnAuthorityDescriptor_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->NameIDFormat;
  if (y)
    x->NameIDFormat = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_md_AuthnAuthorityDescriptor_PUSH_NameIDFormat) */

void zx_md_AuthnAuthorityDescriptor_PUSH_NameIDFormat(struct zx_md_AuthnAuthorityDescriptor_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->NameIDFormat->g;
  x->NameIDFormat = z;
}

/* FUNC(zx_md_AuthnAuthorityDescriptor_REV_NameIDFormat) */

void zx_md_AuthnAuthorityDescriptor_REV_NameIDFormat(struct zx_md_AuthnAuthorityDescriptor_s* x)
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

/* FUNC(zx_md_AuthnAuthorityDescriptor_PUT_NameIDFormat) */

void zx_md_AuthnAuthorityDescriptor_PUT_NameIDFormat(struct zx_md_AuthnAuthorityDescriptor_s* x, int n, struct zx_elem_s* z)
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

/* FUNC(zx_md_AuthnAuthorityDescriptor_ADD_NameIDFormat) */

void zx_md_AuthnAuthorityDescriptor_ADD_NameIDFormat(struct zx_md_AuthnAuthorityDescriptor_s* x, int n, struct zx_elem_s* z)
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

/* FUNC(zx_md_AuthnAuthorityDescriptor_DEL_NameIDFormat) */

void zx_md_AuthnAuthorityDescriptor_DEL_NameIDFormat(struct zx_md_AuthnAuthorityDescriptor_s* x, int n)
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

#endif

/* FUNC(zx_md_AuthnAuthorityDescriptor_GET_ID) */
struct zx_str* zx_md_AuthnAuthorityDescriptor_GET_ID(struct zx_md_AuthnAuthorityDescriptor_s* x) { return x->ID; }
/* FUNC(zx_md_AuthnAuthorityDescriptor_PUT_ID) */
void zx_md_AuthnAuthorityDescriptor_PUT_ID(struct zx_md_AuthnAuthorityDescriptor_s* x, struct zx_str* y) { x->ID = y; }
/* FUNC(zx_md_AuthnAuthorityDescriptor_GET_validUntil) */
struct zx_str* zx_md_AuthnAuthorityDescriptor_GET_validUntil(struct zx_md_AuthnAuthorityDescriptor_s* x) { return x->validUntil; }
/* FUNC(zx_md_AuthnAuthorityDescriptor_PUT_validUntil) */
void zx_md_AuthnAuthorityDescriptor_PUT_validUntil(struct zx_md_AuthnAuthorityDescriptor_s* x, struct zx_str* y) { x->validUntil = y; }
/* FUNC(zx_md_AuthnAuthorityDescriptor_GET_cacheDuration) */
struct zx_str* zx_md_AuthnAuthorityDescriptor_GET_cacheDuration(struct zx_md_AuthnAuthorityDescriptor_s* x) { return x->cacheDuration; }
/* FUNC(zx_md_AuthnAuthorityDescriptor_PUT_cacheDuration) */
void zx_md_AuthnAuthorityDescriptor_PUT_cacheDuration(struct zx_md_AuthnAuthorityDescriptor_s* x, struct zx_str* y) { x->cacheDuration = y; }
/* FUNC(zx_md_AuthnAuthorityDescriptor_GET_protocolSupportEnumeration) */
struct zx_str* zx_md_AuthnAuthorityDescriptor_GET_protocolSupportEnumeration(struct zx_md_AuthnAuthorityDescriptor_s* x) { return x->protocolSupportEnumeration; }
/* FUNC(zx_md_AuthnAuthorityDescriptor_PUT_protocolSupportEnumeration) */
void zx_md_AuthnAuthorityDescriptor_PUT_protocolSupportEnumeration(struct zx_md_AuthnAuthorityDescriptor_s* x, struct zx_str* y) { x->protocolSupportEnumeration = y; }
/* FUNC(zx_md_AuthnAuthorityDescriptor_GET_errorURL) */
struct zx_str* zx_md_AuthnAuthorityDescriptor_GET_errorURL(struct zx_md_AuthnAuthorityDescriptor_s* x) { return x->errorURL; }
/* FUNC(zx_md_AuthnAuthorityDescriptor_PUT_errorURL) */
void zx_md_AuthnAuthorityDescriptor_PUT_errorURL(struct zx_md_AuthnAuthorityDescriptor_s* x, struct zx_str* y) { x->errorURL = y; }





/* FUNC(zx_md_AuthnQueryService_GET_Binding) */
struct zx_str* zx_md_AuthnQueryService_GET_Binding(struct zx_md_AuthnQueryService_s* x) { return x->Binding; }
/* FUNC(zx_md_AuthnQueryService_PUT_Binding) */
void zx_md_AuthnQueryService_PUT_Binding(struct zx_md_AuthnQueryService_s* x, struct zx_str* y) { x->Binding = y; }
/* FUNC(zx_md_AuthnQueryService_GET_Location) */
struct zx_str* zx_md_AuthnQueryService_GET_Location(struct zx_md_AuthnQueryService_s* x) { return x->Location; }
/* FUNC(zx_md_AuthnQueryService_PUT_Location) */
void zx_md_AuthnQueryService_PUT_Location(struct zx_md_AuthnQueryService_s* x, struct zx_str* y) { x->Location = y; }
/* FUNC(zx_md_AuthnQueryService_GET_ResponseLocation) */
struct zx_str* zx_md_AuthnQueryService_GET_ResponseLocation(struct zx_md_AuthnQueryService_s* x) { return x->ResponseLocation; }
/* FUNC(zx_md_AuthnQueryService_PUT_ResponseLocation) */
void zx_md_AuthnQueryService_PUT_ResponseLocation(struct zx_md_AuthnQueryService_s* x, struct zx_str* y) { x->ResponseLocation = y; }
/* FUNC(zx_md_AuthnQueryService_GET_index) */
struct zx_str* zx_md_AuthnQueryService_GET_index(struct zx_md_AuthnQueryService_s* x) { return x->index; }
/* FUNC(zx_md_AuthnQueryService_PUT_index) */
void zx_md_AuthnQueryService_PUT_index(struct zx_md_AuthnQueryService_s* x, struct zx_str* y) { x->index = y; }
/* FUNC(zx_md_AuthnQueryService_GET_isDefault) */
struct zx_str* zx_md_AuthnQueryService_GET_isDefault(struct zx_md_AuthnQueryService_s* x) { return x->isDefault; }
/* FUNC(zx_md_AuthnQueryService_PUT_isDefault) */
void zx_md_AuthnQueryService_PUT_isDefault(struct zx_md_AuthnQueryService_s* x, struct zx_str* y) { x->isDefault = y; }





/* FUNC(zx_md_AuthzService_GET_Binding) */
struct zx_str* zx_md_AuthzService_GET_Binding(struct zx_md_AuthzService_s* x) { return x->Binding; }
/* FUNC(zx_md_AuthzService_PUT_Binding) */
void zx_md_AuthzService_PUT_Binding(struct zx_md_AuthzService_s* x, struct zx_str* y) { x->Binding = y; }
/* FUNC(zx_md_AuthzService_GET_Location) */
struct zx_str* zx_md_AuthzService_GET_Location(struct zx_md_AuthzService_s* x) { return x->Location; }
/* FUNC(zx_md_AuthzService_PUT_Location) */
void zx_md_AuthzService_PUT_Location(struct zx_md_AuthzService_s* x, struct zx_str* y) { x->Location = y; }
/* FUNC(zx_md_AuthzService_GET_ResponseLocation) */
struct zx_str* zx_md_AuthzService_GET_ResponseLocation(struct zx_md_AuthzService_s* x) { return x->ResponseLocation; }
/* FUNC(zx_md_AuthzService_PUT_ResponseLocation) */
void zx_md_AuthzService_PUT_ResponseLocation(struct zx_md_AuthzService_s* x, struct zx_str* y) { x->ResponseLocation = y; }
/* FUNC(zx_md_AuthzService_GET_index) */
struct zx_str* zx_md_AuthzService_GET_index(struct zx_md_AuthzService_s* x) { return x->index; }
/* FUNC(zx_md_AuthzService_PUT_index) */
void zx_md_AuthzService_PUT_index(struct zx_md_AuthzService_s* x, struct zx_str* y) { x->index = y; }
/* FUNC(zx_md_AuthzService_GET_isDefault) */
struct zx_str* zx_md_AuthzService_GET_isDefault(struct zx_md_AuthzService_s* x) { return x->isDefault; }
/* FUNC(zx_md_AuthzService_PUT_isDefault) */
void zx_md_AuthzService_PUT_isDefault(struct zx_md_AuthzService_s* x, struct zx_str* y) { x->isDefault = y; }







#ifdef ZX_ENA_GETPUT

/* FUNC(zx_md_ContactPerson_NUM_Extensions) */

int zx_md_ContactPerson_NUM_Extensions(struct zx_md_ContactPerson_s* x)
{
  struct zx_md_Extensions_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Extensions; y; ++n, y = (struct zx_md_Extensions_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_md_ContactPerson_GET_Extensions) */

struct zx_md_Extensions_s* zx_md_ContactPerson_GET_Extensions(struct zx_md_ContactPerson_s* x, int n)
{
  struct zx_md_Extensions_s* y;
  if (!x) return 0;
  for (y = x->Extensions; n>=0 && y; --n, y = (struct zx_md_Extensions_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_md_ContactPerson_POP_Extensions) */

struct zx_md_Extensions_s* zx_md_ContactPerson_POP_Extensions(struct zx_md_ContactPerson_s* x)
{
  struct zx_md_Extensions_s* y;
  if (!x) return 0;
  y = x->Extensions;
  if (y)
    x->Extensions = (struct zx_md_Extensions_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_md_ContactPerson_PUSH_Extensions) */

void zx_md_ContactPerson_PUSH_Extensions(struct zx_md_ContactPerson_s* x, struct zx_md_Extensions_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Extensions->gg.g;
  x->Extensions = z;
}

/* FUNC(zx_md_ContactPerson_REV_Extensions) */

void zx_md_ContactPerson_REV_Extensions(struct zx_md_ContactPerson_s* x)
{
  struct zx_md_Extensions_s* nxt;
  struct zx_md_Extensions_s* y;
  if (!x) return;
  y = x->Extensions;
  if (!y) return;
  x->Extensions = 0;
  while (y) {
    nxt = (struct zx_md_Extensions_s*)y->gg.g.n;
    y->gg.g.n = &x->Extensions->gg.g;
    x->Extensions = y;
    y = nxt;
  }
}

/* FUNC(zx_md_ContactPerson_PUT_Extensions) */

void zx_md_ContactPerson_PUT_Extensions(struct zx_md_ContactPerson_s* x, int n, struct zx_md_Extensions_s* z)
{
  struct zx_md_Extensions_s* y;
  if (!x || !z) return;
  y = x->Extensions;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Extensions = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_md_Extensions_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_md_ContactPerson_ADD_Extensions) */

void zx_md_ContactPerson_ADD_Extensions(struct zx_md_ContactPerson_s* x, int n, struct zx_md_Extensions_s* z)
{
  struct zx_md_Extensions_s* y;
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
    for (; y->gg.g.n; y = (struct zx_md_Extensions_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Extensions; n > 1 && y; --n, y = (struct zx_md_Extensions_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_md_ContactPerson_DEL_Extensions) */

void zx_md_ContactPerson_DEL_Extensions(struct zx_md_ContactPerson_s* x, int n)
{
  struct zx_md_Extensions_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Extensions = (struct zx_md_Extensions_s*)x->Extensions->gg.g.n;
    return;
  case -1:
    y = (struct zx_md_Extensions_s*)x->Extensions;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_md_Extensions_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Extensions; n > 1 && y->gg.g.n; --n, y = (struct zx_md_Extensions_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_md_ContactPerson_NUM_Company) */

int zx_md_ContactPerson_NUM_Company(struct zx_md_ContactPerson_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Company; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_md_ContactPerson_GET_Company) */

struct zx_elem_s* zx_md_ContactPerson_GET_Company(struct zx_md_ContactPerson_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->Company; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_md_ContactPerson_POP_Company) */

struct zx_elem_s* zx_md_ContactPerson_POP_Company(struct zx_md_ContactPerson_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->Company;
  if (y)
    x->Company = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_md_ContactPerson_PUSH_Company) */

void zx_md_ContactPerson_PUSH_Company(struct zx_md_ContactPerson_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->Company->g;
  x->Company = z;
}

/* FUNC(zx_md_ContactPerson_REV_Company) */

void zx_md_ContactPerson_REV_Company(struct zx_md_ContactPerson_s* x)
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

/* FUNC(zx_md_ContactPerson_PUT_Company) */

void zx_md_ContactPerson_PUT_Company(struct zx_md_ContactPerson_s* x, int n, struct zx_elem_s* z)
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

/* FUNC(zx_md_ContactPerson_ADD_Company) */

void zx_md_ContactPerson_ADD_Company(struct zx_md_ContactPerson_s* x, int n, struct zx_elem_s* z)
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

/* FUNC(zx_md_ContactPerson_DEL_Company) */

void zx_md_ContactPerson_DEL_Company(struct zx_md_ContactPerson_s* x, int n)
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

/* FUNC(zx_md_ContactPerson_NUM_GivenName) */

int zx_md_ContactPerson_NUM_GivenName(struct zx_md_ContactPerson_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->GivenName; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_md_ContactPerson_GET_GivenName) */

struct zx_elem_s* zx_md_ContactPerson_GET_GivenName(struct zx_md_ContactPerson_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->GivenName; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_md_ContactPerson_POP_GivenName) */

struct zx_elem_s* zx_md_ContactPerson_POP_GivenName(struct zx_md_ContactPerson_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->GivenName;
  if (y)
    x->GivenName = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_md_ContactPerson_PUSH_GivenName) */

void zx_md_ContactPerson_PUSH_GivenName(struct zx_md_ContactPerson_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->GivenName->g;
  x->GivenName = z;
}

/* FUNC(zx_md_ContactPerson_REV_GivenName) */

void zx_md_ContactPerson_REV_GivenName(struct zx_md_ContactPerson_s* x)
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

/* FUNC(zx_md_ContactPerson_PUT_GivenName) */

void zx_md_ContactPerson_PUT_GivenName(struct zx_md_ContactPerson_s* x, int n, struct zx_elem_s* z)
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

/* FUNC(zx_md_ContactPerson_ADD_GivenName) */

void zx_md_ContactPerson_ADD_GivenName(struct zx_md_ContactPerson_s* x, int n, struct zx_elem_s* z)
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

/* FUNC(zx_md_ContactPerson_DEL_GivenName) */

void zx_md_ContactPerson_DEL_GivenName(struct zx_md_ContactPerson_s* x, int n)
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

/* FUNC(zx_md_ContactPerson_NUM_SurName) */

int zx_md_ContactPerson_NUM_SurName(struct zx_md_ContactPerson_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->SurName; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_md_ContactPerson_GET_SurName) */

struct zx_elem_s* zx_md_ContactPerson_GET_SurName(struct zx_md_ContactPerson_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->SurName; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_md_ContactPerson_POP_SurName) */

struct zx_elem_s* zx_md_ContactPerson_POP_SurName(struct zx_md_ContactPerson_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->SurName;
  if (y)
    x->SurName = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_md_ContactPerson_PUSH_SurName) */

void zx_md_ContactPerson_PUSH_SurName(struct zx_md_ContactPerson_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->SurName->g;
  x->SurName = z;
}

/* FUNC(zx_md_ContactPerson_REV_SurName) */

void zx_md_ContactPerson_REV_SurName(struct zx_md_ContactPerson_s* x)
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

/* FUNC(zx_md_ContactPerson_PUT_SurName) */

void zx_md_ContactPerson_PUT_SurName(struct zx_md_ContactPerson_s* x, int n, struct zx_elem_s* z)
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

/* FUNC(zx_md_ContactPerson_ADD_SurName) */

void zx_md_ContactPerson_ADD_SurName(struct zx_md_ContactPerson_s* x, int n, struct zx_elem_s* z)
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

/* FUNC(zx_md_ContactPerson_DEL_SurName) */

void zx_md_ContactPerson_DEL_SurName(struct zx_md_ContactPerson_s* x, int n)
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

/* FUNC(zx_md_ContactPerson_NUM_EmailAddress) */

int zx_md_ContactPerson_NUM_EmailAddress(struct zx_md_ContactPerson_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->EmailAddress; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_md_ContactPerson_GET_EmailAddress) */

struct zx_elem_s* zx_md_ContactPerson_GET_EmailAddress(struct zx_md_ContactPerson_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->EmailAddress; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_md_ContactPerson_POP_EmailAddress) */

struct zx_elem_s* zx_md_ContactPerson_POP_EmailAddress(struct zx_md_ContactPerson_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->EmailAddress;
  if (y)
    x->EmailAddress = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_md_ContactPerson_PUSH_EmailAddress) */

void zx_md_ContactPerson_PUSH_EmailAddress(struct zx_md_ContactPerson_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->EmailAddress->g;
  x->EmailAddress = z;
}

/* FUNC(zx_md_ContactPerson_REV_EmailAddress) */

void zx_md_ContactPerson_REV_EmailAddress(struct zx_md_ContactPerson_s* x)
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

/* FUNC(zx_md_ContactPerson_PUT_EmailAddress) */

void zx_md_ContactPerson_PUT_EmailAddress(struct zx_md_ContactPerson_s* x, int n, struct zx_elem_s* z)
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

/* FUNC(zx_md_ContactPerson_ADD_EmailAddress) */

void zx_md_ContactPerson_ADD_EmailAddress(struct zx_md_ContactPerson_s* x, int n, struct zx_elem_s* z)
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

/* FUNC(zx_md_ContactPerson_DEL_EmailAddress) */

void zx_md_ContactPerson_DEL_EmailAddress(struct zx_md_ContactPerson_s* x, int n)
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

/* FUNC(zx_md_ContactPerson_NUM_TelephoneNumber) */

int zx_md_ContactPerson_NUM_TelephoneNumber(struct zx_md_ContactPerson_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->TelephoneNumber; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_md_ContactPerson_GET_TelephoneNumber) */

struct zx_elem_s* zx_md_ContactPerson_GET_TelephoneNumber(struct zx_md_ContactPerson_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->TelephoneNumber; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_md_ContactPerson_POP_TelephoneNumber) */

struct zx_elem_s* zx_md_ContactPerson_POP_TelephoneNumber(struct zx_md_ContactPerson_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->TelephoneNumber;
  if (y)
    x->TelephoneNumber = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_md_ContactPerson_PUSH_TelephoneNumber) */

void zx_md_ContactPerson_PUSH_TelephoneNumber(struct zx_md_ContactPerson_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->TelephoneNumber->g;
  x->TelephoneNumber = z;
}

/* FUNC(zx_md_ContactPerson_REV_TelephoneNumber) */

void zx_md_ContactPerson_REV_TelephoneNumber(struct zx_md_ContactPerson_s* x)
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

/* FUNC(zx_md_ContactPerson_PUT_TelephoneNumber) */

void zx_md_ContactPerson_PUT_TelephoneNumber(struct zx_md_ContactPerson_s* x, int n, struct zx_elem_s* z)
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

/* FUNC(zx_md_ContactPerson_ADD_TelephoneNumber) */

void zx_md_ContactPerson_ADD_TelephoneNumber(struct zx_md_ContactPerson_s* x, int n, struct zx_elem_s* z)
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

/* FUNC(zx_md_ContactPerson_DEL_TelephoneNumber) */

void zx_md_ContactPerson_DEL_TelephoneNumber(struct zx_md_ContactPerson_s* x, int n)
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

/* FUNC(zx_md_ContactPerson_GET_contactType) */
struct zx_str* zx_md_ContactPerson_GET_contactType(struct zx_md_ContactPerson_s* x) { return x->contactType; }
/* FUNC(zx_md_ContactPerson_PUT_contactType) */
void zx_md_ContactPerson_PUT_contactType(struct zx_md_ContactPerson_s* x, struct zx_str* y) { x->contactType = y; }







#ifdef ZX_ENA_GETPUT

/* FUNC(zx_md_EncryptionMethod_NUM_KeySize) */

int zx_md_EncryptionMethod_NUM_KeySize(struct zx_md_EncryptionMethod_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->KeySize; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_md_EncryptionMethod_GET_KeySize) */

struct zx_elem_s* zx_md_EncryptionMethod_GET_KeySize(struct zx_md_EncryptionMethod_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->KeySize; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_md_EncryptionMethod_POP_KeySize) */

struct zx_elem_s* zx_md_EncryptionMethod_POP_KeySize(struct zx_md_EncryptionMethod_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->KeySize;
  if (y)
    x->KeySize = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_md_EncryptionMethod_PUSH_KeySize) */

void zx_md_EncryptionMethod_PUSH_KeySize(struct zx_md_EncryptionMethod_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->KeySize->g;
  x->KeySize = z;
}

/* FUNC(zx_md_EncryptionMethod_REV_KeySize) */

void zx_md_EncryptionMethod_REV_KeySize(struct zx_md_EncryptionMethod_s* x)
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

/* FUNC(zx_md_EncryptionMethod_PUT_KeySize) */

void zx_md_EncryptionMethod_PUT_KeySize(struct zx_md_EncryptionMethod_s* x, int n, struct zx_elem_s* z)
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

/* FUNC(zx_md_EncryptionMethod_ADD_KeySize) */

void zx_md_EncryptionMethod_ADD_KeySize(struct zx_md_EncryptionMethod_s* x, int n, struct zx_elem_s* z)
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

/* FUNC(zx_md_EncryptionMethod_DEL_KeySize) */

void zx_md_EncryptionMethod_DEL_KeySize(struct zx_md_EncryptionMethod_s* x, int n)
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

/* FUNC(zx_md_EncryptionMethod_NUM_OAEPparams) */

int zx_md_EncryptionMethod_NUM_OAEPparams(struct zx_md_EncryptionMethod_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->OAEPparams; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_md_EncryptionMethod_GET_OAEPparams) */

struct zx_elem_s* zx_md_EncryptionMethod_GET_OAEPparams(struct zx_md_EncryptionMethod_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->OAEPparams; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_md_EncryptionMethod_POP_OAEPparams) */

struct zx_elem_s* zx_md_EncryptionMethod_POP_OAEPparams(struct zx_md_EncryptionMethod_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->OAEPparams;
  if (y)
    x->OAEPparams = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_md_EncryptionMethod_PUSH_OAEPparams) */

void zx_md_EncryptionMethod_PUSH_OAEPparams(struct zx_md_EncryptionMethod_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->OAEPparams->g;
  x->OAEPparams = z;
}

/* FUNC(zx_md_EncryptionMethod_REV_OAEPparams) */

void zx_md_EncryptionMethod_REV_OAEPparams(struct zx_md_EncryptionMethod_s* x)
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

/* FUNC(zx_md_EncryptionMethod_PUT_OAEPparams) */

void zx_md_EncryptionMethod_PUT_OAEPparams(struct zx_md_EncryptionMethod_s* x, int n, struct zx_elem_s* z)
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

/* FUNC(zx_md_EncryptionMethod_ADD_OAEPparams) */

void zx_md_EncryptionMethod_ADD_OAEPparams(struct zx_md_EncryptionMethod_s* x, int n, struct zx_elem_s* z)
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

/* FUNC(zx_md_EncryptionMethod_DEL_OAEPparams) */

void zx_md_EncryptionMethod_DEL_OAEPparams(struct zx_md_EncryptionMethod_s* x, int n)
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

#endif

/* FUNC(zx_md_EncryptionMethod_GET_Algorithm) */
struct zx_str* zx_md_EncryptionMethod_GET_Algorithm(struct zx_md_EncryptionMethod_s* x) { return x->Algorithm; }
/* FUNC(zx_md_EncryptionMethod_PUT_Algorithm) */
void zx_md_EncryptionMethod_PUT_Algorithm(struct zx_md_EncryptionMethod_s* x, struct zx_str* y) { x->Algorithm = y; }







#ifdef ZX_ENA_GETPUT

/* FUNC(zx_md_EntitiesDescriptor_NUM_Signature) */

int zx_md_EntitiesDescriptor_NUM_Signature(struct zx_md_EntitiesDescriptor_s* x)
{
  struct zx_ds_Signature_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Signature; y; ++n, y = (struct zx_ds_Signature_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_md_EntitiesDescriptor_GET_Signature) */

struct zx_ds_Signature_s* zx_md_EntitiesDescriptor_GET_Signature(struct zx_md_EntitiesDescriptor_s* x, int n)
{
  struct zx_ds_Signature_s* y;
  if (!x) return 0;
  for (y = x->Signature; n>=0 && y; --n, y = (struct zx_ds_Signature_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_md_EntitiesDescriptor_POP_Signature) */

struct zx_ds_Signature_s* zx_md_EntitiesDescriptor_POP_Signature(struct zx_md_EntitiesDescriptor_s* x)
{
  struct zx_ds_Signature_s* y;
  if (!x) return 0;
  y = x->Signature;
  if (y)
    x->Signature = (struct zx_ds_Signature_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_md_EntitiesDescriptor_PUSH_Signature) */

void zx_md_EntitiesDescriptor_PUSH_Signature(struct zx_md_EntitiesDescriptor_s* x, struct zx_ds_Signature_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Signature->gg.g;
  x->Signature = z;
}

/* FUNC(zx_md_EntitiesDescriptor_REV_Signature) */

void zx_md_EntitiesDescriptor_REV_Signature(struct zx_md_EntitiesDescriptor_s* x)
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

/* FUNC(zx_md_EntitiesDescriptor_PUT_Signature) */

void zx_md_EntitiesDescriptor_PUT_Signature(struct zx_md_EntitiesDescriptor_s* x, int n, struct zx_ds_Signature_s* z)
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

/* FUNC(zx_md_EntitiesDescriptor_ADD_Signature) */

void zx_md_EntitiesDescriptor_ADD_Signature(struct zx_md_EntitiesDescriptor_s* x, int n, struct zx_ds_Signature_s* z)
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

/* FUNC(zx_md_EntitiesDescriptor_DEL_Signature) */

void zx_md_EntitiesDescriptor_DEL_Signature(struct zx_md_EntitiesDescriptor_s* x, int n)
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

/* FUNC(zx_md_EntitiesDescriptor_NUM_Extensions) */

int zx_md_EntitiesDescriptor_NUM_Extensions(struct zx_md_EntitiesDescriptor_s* x)
{
  struct zx_md_Extensions_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Extensions; y; ++n, y = (struct zx_md_Extensions_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_md_EntitiesDescriptor_GET_Extensions) */

struct zx_md_Extensions_s* zx_md_EntitiesDescriptor_GET_Extensions(struct zx_md_EntitiesDescriptor_s* x, int n)
{
  struct zx_md_Extensions_s* y;
  if (!x) return 0;
  for (y = x->Extensions; n>=0 && y; --n, y = (struct zx_md_Extensions_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_md_EntitiesDescriptor_POP_Extensions) */

struct zx_md_Extensions_s* zx_md_EntitiesDescriptor_POP_Extensions(struct zx_md_EntitiesDescriptor_s* x)
{
  struct zx_md_Extensions_s* y;
  if (!x) return 0;
  y = x->Extensions;
  if (y)
    x->Extensions = (struct zx_md_Extensions_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_md_EntitiesDescriptor_PUSH_Extensions) */

void zx_md_EntitiesDescriptor_PUSH_Extensions(struct zx_md_EntitiesDescriptor_s* x, struct zx_md_Extensions_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Extensions->gg.g;
  x->Extensions = z;
}

/* FUNC(zx_md_EntitiesDescriptor_REV_Extensions) */

void zx_md_EntitiesDescriptor_REV_Extensions(struct zx_md_EntitiesDescriptor_s* x)
{
  struct zx_md_Extensions_s* nxt;
  struct zx_md_Extensions_s* y;
  if (!x) return;
  y = x->Extensions;
  if (!y) return;
  x->Extensions = 0;
  while (y) {
    nxt = (struct zx_md_Extensions_s*)y->gg.g.n;
    y->gg.g.n = &x->Extensions->gg.g;
    x->Extensions = y;
    y = nxt;
  }
}

/* FUNC(zx_md_EntitiesDescriptor_PUT_Extensions) */

void zx_md_EntitiesDescriptor_PUT_Extensions(struct zx_md_EntitiesDescriptor_s* x, int n, struct zx_md_Extensions_s* z)
{
  struct zx_md_Extensions_s* y;
  if (!x || !z) return;
  y = x->Extensions;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Extensions = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_md_Extensions_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_md_EntitiesDescriptor_ADD_Extensions) */

void zx_md_EntitiesDescriptor_ADD_Extensions(struct zx_md_EntitiesDescriptor_s* x, int n, struct zx_md_Extensions_s* z)
{
  struct zx_md_Extensions_s* y;
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
    for (; y->gg.g.n; y = (struct zx_md_Extensions_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Extensions; n > 1 && y; --n, y = (struct zx_md_Extensions_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_md_EntitiesDescriptor_DEL_Extensions) */

void zx_md_EntitiesDescriptor_DEL_Extensions(struct zx_md_EntitiesDescriptor_s* x, int n)
{
  struct zx_md_Extensions_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Extensions = (struct zx_md_Extensions_s*)x->Extensions->gg.g.n;
    return;
  case -1:
    y = (struct zx_md_Extensions_s*)x->Extensions;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_md_Extensions_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Extensions; n > 1 && y->gg.g.n; --n, y = (struct zx_md_Extensions_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_md_EntitiesDescriptor_NUM_EntityDescriptor) */

int zx_md_EntitiesDescriptor_NUM_EntityDescriptor(struct zx_md_EntitiesDescriptor_s* x)
{
  struct zx_md_EntityDescriptor_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->EntityDescriptor; y; ++n, y = (struct zx_md_EntityDescriptor_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_md_EntitiesDescriptor_GET_EntityDescriptor) */

struct zx_md_EntityDescriptor_s* zx_md_EntitiesDescriptor_GET_EntityDescriptor(struct zx_md_EntitiesDescriptor_s* x, int n)
{
  struct zx_md_EntityDescriptor_s* y;
  if (!x) return 0;
  for (y = x->EntityDescriptor; n>=0 && y; --n, y = (struct zx_md_EntityDescriptor_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_md_EntitiesDescriptor_POP_EntityDescriptor) */

struct zx_md_EntityDescriptor_s* zx_md_EntitiesDescriptor_POP_EntityDescriptor(struct zx_md_EntitiesDescriptor_s* x)
{
  struct zx_md_EntityDescriptor_s* y;
  if (!x) return 0;
  y = x->EntityDescriptor;
  if (y)
    x->EntityDescriptor = (struct zx_md_EntityDescriptor_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_md_EntitiesDescriptor_PUSH_EntityDescriptor) */

void zx_md_EntitiesDescriptor_PUSH_EntityDescriptor(struct zx_md_EntitiesDescriptor_s* x, struct zx_md_EntityDescriptor_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->EntityDescriptor->gg.g;
  x->EntityDescriptor = z;
}

/* FUNC(zx_md_EntitiesDescriptor_REV_EntityDescriptor) */

void zx_md_EntitiesDescriptor_REV_EntityDescriptor(struct zx_md_EntitiesDescriptor_s* x)
{
  struct zx_md_EntityDescriptor_s* nxt;
  struct zx_md_EntityDescriptor_s* y;
  if (!x) return;
  y = x->EntityDescriptor;
  if (!y) return;
  x->EntityDescriptor = 0;
  while (y) {
    nxt = (struct zx_md_EntityDescriptor_s*)y->gg.g.n;
    y->gg.g.n = &x->EntityDescriptor->gg.g;
    x->EntityDescriptor = y;
    y = nxt;
  }
}

/* FUNC(zx_md_EntitiesDescriptor_PUT_EntityDescriptor) */

void zx_md_EntitiesDescriptor_PUT_EntityDescriptor(struct zx_md_EntitiesDescriptor_s* x, int n, struct zx_md_EntityDescriptor_s* z)
{
  struct zx_md_EntityDescriptor_s* y;
  if (!x || !z) return;
  y = x->EntityDescriptor;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->EntityDescriptor = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_md_EntityDescriptor_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_md_EntitiesDescriptor_ADD_EntityDescriptor) */

void zx_md_EntitiesDescriptor_ADD_EntityDescriptor(struct zx_md_EntitiesDescriptor_s* x, int n, struct zx_md_EntityDescriptor_s* z)
{
  struct zx_md_EntityDescriptor_s* y;
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
    for (; y->gg.g.n; y = (struct zx_md_EntityDescriptor_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->EntityDescriptor; n > 1 && y; --n, y = (struct zx_md_EntityDescriptor_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_md_EntitiesDescriptor_DEL_EntityDescriptor) */

void zx_md_EntitiesDescriptor_DEL_EntityDescriptor(struct zx_md_EntitiesDescriptor_s* x, int n)
{
  struct zx_md_EntityDescriptor_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->EntityDescriptor = (struct zx_md_EntityDescriptor_s*)x->EntityDescriptor->gg.g.n;
    return;
  case -1:
    y = (struct zx_md_EntityDescriptor_s*)x->EntityDescriptor;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_md_EntityDescriptor_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->EntityDescriptor; n > 1 && y->gg.g.n; --n, y = (struct zx_md_EntityDescriptor_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_md_EntitiesDescriptor_NUM_EntitiesDescriptor) */

int zx_md_EntitiesDescriptor_NUM_EntitiesDescriptor(struct zx_md_EntitiesDescriptor_s* x)
{
  struct zx_md_EntitiesDescriptor_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->EntitiesDescriptor; y; ++n, y = (struct zx_md_EntitiesDescriptor_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_md_EntitiesDescriptor_GET_EntitiesDescriptor) */

struct zx_md_EntitiesDescriptor_s* zx_md_EntitiesDescriptor_GET_EntitiesDescriptor(struct zx_md_EntitiesDescriptor_s* x, int n)
{
  struct zx_md_EntitiesDescriptor_s* y;
  if (!x) return 0;
  for (y = x->EntitiesDescriptor; n>=0 && y; --n, y = (struct zx_md_EntitiesDescriptor_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_md_EntitiesDescriptor_POP_EntitiesDescriptor) */

struct zx_md_EntitiesDescriptor_s* zx_md_EntitiesDescriptor_POP_EntitiesDescriptor(struct zx_md_EntitiesDescriptor_s* x)
{
  struct zx_md_EntitiesDescriptor_s* y;
  if (!x) return 0;
  y = x->EntitiesDescriptor;
  if (y)
    x->EntitiesDescriptor = (struct zx_md_EntitiesDescriptor_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_md_EntitiesDescriptor_PUSH_EntitiesDescriptor) */

void zx_md_EntitiesDescriptor_PUSH_EntitiesDescriptor(struct zx_md_EntitiesDescriptor_s* x, struct zx_md_EntitiesDescriptor_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->EntitiesDescriptor->gg.g;
  x->EntitiesDescriptor = z;
}

/* FUNC(zx_md_EntitiesDescriptor_REV_EntitiesDescriptor) */

void zx_md_EntitiesDescriptor_REV_EntitiesDescriptor(struct zx_md_EntitiesDescriptor_s* x)
{
  struct zx_md_EntitiesDescriptor_s* nxt;
  struct zx_md_EntitiesDescriptor_s* y;
  if (!x) return;
  y = x->EntitiesDescriptor;
  if (!y) return;
  x->EntitiesDescriptor = 0;
  while (y) {
    nxt = (struct zx_md_EntitiesDescriptor_s*)y->gg.g.n;
    y->gg.g.n = &x->EntitiesDescriptor->gg.g;
    x->EntitiesDescriptor = y;
    y = nxt;
  }
}

/* FUNC(zx_md_EntitiesDescriptor_PUT_EntitiesDescriptor) */

void zx_md_EntitiesDescriptor_PUT_EntitiesDescriptor(struct zx_md_EntitiesDescriptor_s* x, int n, struct zx_md_EntitiesDescriptor_s* z)
{
  struct zx_md_EntitiesDescriptor_s* y;
  if (!x || !z) return;
  y = x->EntitiesDescriptor;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->EntitiesDescriptor = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_md_EntitiesDescriptor_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_md_EntitiesDescriptor_ADD_EntitiesDescriptor) */

void zx_md_EntitiesDescriptor_ADD_EntitiesDescriptor(struct zx_md_EntitiesDescriptor_s* x, int n, struct zx_md_EntitiesDescriptor_s* z)
{
  struct zx_md_EntitiesDescriptor_s* y;
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
    for (; y->gg.g.n; y = (struct zx_md_EntitiesDescriptor_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->EntitiesDescriptor; n > 1 && y; --n, y = (struct zx_md_EntitiesDescriptor_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_md_EntitiesDescriptor_DEL_EntitiesDescriptor) */

void zx_md_EntitiesDescriptor_DEL_EntitiesDescriptor(struct zx_md_EntitiesDescriptor_s* x, int n)
{
  struct zx_md_EntitiesDescriptor_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->EntitiesDescriptor = (struct zx_md_EntitiesDescriptor_s*)x->EntitiesDescriptor->gg.g.n;
    return;
  case -1:
    y = (struct zx_md_EntitiesDescriptor_s*)x->EntitiesDescriptor;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_md_EntitiesDescriptor_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->EntitiesDescriptor; n > 1 && y->gg.g.n; --n, y = (struct zx_md_EntitiesDescriptor_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif

/* FUNC(zx_md_EntitiesDescriptor_GET_validUntil) */
struct zx_str* zx_md_EntitiesDescriptor_GET_validUntil(struct zx_md_EntitiesDescriptor_s* x) { return x->validUntil; }
/* FUNC(zx_md_EntitiesDescriptor_PUT_validUntil) */
void zx_md_EntitiesDescriptor_PUT_validUntil(struct zx_md_EntitiesDescriptor_s* x, struct zx_str* y) { x->validUntil = y; }
/* FUNC(zx_md_EntitiesDescriptor_GET_cacheDuration) */
struct zx_str* zx_md_EntitiesDescriptor_GET_cacheDuration(struct zx_md_EntitiesDescriptor_s* x) { return x->cacheDuration; }
/* FUNC(zx_md_EntitiesDescriptor_PUT_cacheDuration) */
void zx_md_EntitiesDescriptor_PUT_cacheDuration(struct zx_md_EntitiesDescriptor_s* x, struct zx_str* y) { x->cacheDuration = y; }
/* FUNC(zx_md_EntitiesDescriptor_GET_ID) */
struct zx_str* zx_md_EntitiesDescriptor_GET_ID(struct zx_md_EntitiesDescriptor_s* x) { return x->ID; }
/* FUNC(zx_md_EntitiesDescriptor_PUT_ID) */
void zx_md_EntitiesDescriptor_PUT_ID(struct zx_md_EntitiesDescriptor_s* x, struct zx_str* y) { x->ID = y; }
/* FUNC(zx_md_EntitiesDescriptor_GET_Name) */
struct zx_str* zx_md_EntitiesDescriptor_GET_Name(struct zx_md_EntitiesDescriptor_s* x) { return x->Name; }
/* FUNC(zx_md_EntitiesDescriptor_PUT_Name) */
void zx_md_EntitiesDescriptor_PUT_Name(struct zx_md_EntitiesDescriptor_s* x, struct zx_str* y) { x->Name = y; }







#ifdef ZX_ENA_GETPUT

/* FUNC(zx_md_EntityDescriptor_NUM_Signature) */

int zx_md_EntityDescriptor_NUM_Signature(struct zx_md_EntityDescriptor_s* x)
{
  struct zx_ds_Signature_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Signature; y; ++n, y = (struct zx_ds_Signature_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_md_EntityDescriptor_GET_Signature) */

struct zx_ds_Signature_s* zx_md_EntityDescriptor_GET_Signature(struct zx_md_EntityDescriptor_s* x, int n)
{
  struct zx_ds_Signature_s* y;
  if (!x) return 0;
  for (y = x->Signature; n>=0 && y; --n, y = (struct zx_ds_Signature_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_md_EntityDescriptor_POP_Signature) */

struct zx_ds_Signature_s* zx_md_EntityDescriptor_POP_Signature(struct zx_md_EntityDescriptor_s* x)
{
  struct zx_ds_Signature_s* y;
  if (!x) return 0;
  y = x->Signature;
  if (y)
    x->Signature = (struct zx_ds_Signature_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_md_EntityDescriptor_PUSH_Signature) */

void zx_md_EntityDescriptor_PUSH_Signature(struct zx_md_EntityDescriptor_s* x, struct zx_ds_Signature_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Signature->gg.g;
  x->Signature = z;
}

/* FUNC(zx_md_EntityDescriptor_REV_Signature) */

void zx_md_EntityDescriptor_REV_Signature(struct zx_md_EntityDescriptor_s* x)
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

/* FUNC(zx_md_EntityDescriptor_PUT_Signature) */

void zx_md_EntityDescriptor_PUT_Signature(struct zx_md_EntityDescriptor_s* x, int n, struct zx_ds_Signature_s* z)
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

/* FUNC(zx_md_EntityDescriptor_ADD_Signature) */

void zx_md_EntityDescriptor_ADD_Signature(struct zx_md_EntityDescriptor_s* x, int n, struct zx_ds_Signature_s* z)
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

/* FUNC(zx_md_EntityDescriptor_DEL_Signature) */

void zx_md_EntityDescriptor_DEL_Signature(struct zx_md_EntityDescriptor_s* x, int n)
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

/* FUNC(zx_md_EntityDescriptor_NUM_Extensions) */

int zx_md_EntityDescriptor_NUM_Extensions(struct zx_md_EntityDescriptor_s* x)
{
  struct zx_md_Extensions_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Extensions; y; ++n, y = (struct zx_md_Extensions_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_md_EntityDescriptor_GET_Extensions) */

struct zx_md_Extensions_s* zx_md_EntityDescriptor_GET_Extensions(struct zx_md_EntityDescriptor_s* x, int n)
{
  struct zx_md_Extensions_s* y;
  if (!x) return 0;
  for (y = x->Extensions; n>=0 && y; --n, y = (struct zx_md_Extensions_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_md_EntityDescriptor_POP_Extensions) */

struct zx_md_Extensions_s* zx_md_EntityDescriptor_POP_Extensions(struct zx_md_EntityDescriptor_s* x)
{
  struct zx_md_Extensions_s* y;
  if (!x) return 0;
  y = x->Extensions;
  if (y)
    x->Extensions = (struct zx_md_Extensions_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_md_EntityDescriptor_PUSH_Extensions) */

void zx_md_EntityDescriptor_PUSH_Extensions(struct zx_md_EntityDescriptor_s* x, struct zx_md_Extensions_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Extensions->gg.g;
  x->Extensions = z;
}

/* FUNC(zx_md_EntityDescriptor_REV_Extensions) */

void zx_md_EntityDescriptor_REV_Extensions(struct zx_md_EntityDescriptor_s* x)
{
  struct zx_md_Extensions_s* nxt;
  struct zx_md_Extensions_s* y;
  if (!x) return;
  y = x->Extensions;
  if (!y) return;
  x->Extensions = 0;
  while (y) {
    nxt = (struct zx_md_Extensions_s*)y->gg.g.n;
    y->gg.g.n = &x->Extensions->gg.g;
    x->Extensions = y;
    y = nxt;
  }
}

/* FUNC(zx_md_EntityDescriptor_PUT_Extensions) */

void zx_md_EntityDescriptor_PUT_Extensions(struct zx_md_EntityDescriptor_s* x, int n, struct zx_md_Extensions_s* z)
{
  struct zx_md_Extensions_s* y;
  if (!x || !z) return;
  y = x->Extensions;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Extensions = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_md_Extensions_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_md_EntityDescriptor_ADD_Extensions) */

void zx_md_EntityDescriptor_ADD_Extensions(struct zx_md_EntityDescriptor_s* x, int n, struct zx_md_Extensions_s* z)
{
  struct zx_md_Extensions_s* y;
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
    for (; y->gg.g.n; y = (struct zx_md_Extensions_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Extensions; n > 1 && y; --n, y = (struct zx_md_Extensions_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_md_EntityDescriptor_DEL_Extensions) */

void zx_md_EntityDescriptor_DEL_Extensions(struct zx_md_EntityDescriptor_s* x, int n)
{
  struct zx_md_Extensions_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Extensions = (struct zx_md_Extensions_s*)x->Extensions->gg.g.n;
    return;
  case -1:
    y = (struct zx_md_Extensions_s*)x->Extensions;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_md_Extensions_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Extensions; n > 1 && y->gg.g.n; --n, y = (struct zx_md_Extensions_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_md_EntityDescriptor_NUM_RoleDescriptor) */

int zx_md_EntityDescriptor_NUM_RoleDescriptor(struct zx_md_EntityDescriptor_s* x)
{
  struct zx_md_RoleDescriptor_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->RoleDescriptor; y; ++n, y = (struct zx_md_RoleDescriptor_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_md_EntityDescriptor_GET_RoleDescriptor) */

struct zx_md_RoleDescriptor_s* zx_md_EntityDescriptor_GET_RoleDescriptor(struct zx_md_EntityDescriptor_s* x, int n)
{
  struct zx_md_RoleDescriptor_s* y;
  if (!x) return 0;
  for (y = x->RoleDescriptor; n>=0 && y; --n, y = (struct zx_md_RoleDescriptor_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_md_EntityDescriptor_POP_RoleDescriptor) */

struct zx_md_RoleDescriptor_s* zx_md_EntityDescriptor_POP_RoleDescriptor(struct zx_md_EntityDescriptor_s* x)
{
  struct zx_md_RoleDescriptor_s* y;
  if (!x) return 0;
  y = x->RoleDescriptor;
  if (y)
    x->RoleDescriptor = (struct zx_md_RoleDescriptor_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_md_EntityDescriptor_PUSH_RoleDescriptor) */

void zx_md_EntityDescriptor_PUSH_RoleDescriptor(struct zx_md_EntityDescriptor_s* x, struct zx_md_RoleDescriptor_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->RoleDescriptor->gg.g;
  x->RoleDescriptor = z;
}

/* FUNC(zx_md_EntityDescriptor_REV_RoleDescriptor) */

void zx_md_EntityDescriptor_REV_RoleDescriptor(struct zx_md_EntityDescriptor_s* x)
{
  struct zx_md_RoleDescriptor_s* nxt;
  struct zx_md_RoleDescriptor_s* y;
  if (!x) return;
  y = x->RoleDescriptor;
  if (!y) return;
  x->RoleDescriptor = 0;
  while (y) {
    nxt = (struct zx_md_RoleDescriptor_s*)y->gg.g.n;
    y->gg.g.n = &x->RoleDescriptor->gg.g;
    x->RoleDescriptor = y;
    y = nxt;
  }
}

/* FUNC(zx_md_EntityDescriptor_PUT_RoleDescriptor) */

void zx_md_EntityDescriptor_PUT_RoleDescriptor(struct zx_md_EntityDescriptor_s* x, int n, struct zx_md_RoleDescriptor_s* z)
{
  struct zx_md_RoleDescriptor_s* y;
  if (!x || !z) return;
  y = x->RoleDescriptor;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->RoleDescriptor = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_md_RoleDescriptor_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_md_EntityDescriptor_ADD_RoleDescriptor) */

void zx_md_EntityDescriptor_ADD_RoleDescriptor(struct zx_md_EntityDescriptor_s* x, int n, struct zx_md_RoleDescriptor_s* z)
{
  struct zx_md_RoleDescriptor_s* y;
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
    for (; y->gg.g.n; y = (struct zx_md_RoleDescriptor_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->RoleDescriptor; n > 1 && y; --n, y = (struct zx_md_RoleDescriptor_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_md_EntityDescriptor_DEL_RoleDescriptor) */

void zx_md_EntityDescriptor_DEL_RoleDescriptor(struct zx_md_EntityDescriptor_s* x, int n)
{
  struct zx_md_RoleDescriptor_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->RoleDescriptor = (struct zx_md_RoleDescriptor_s*)x->RoleDescriptor->gg.g.n;
    return;
  case -1:
    y = (struct zx_md_RoleDescriptor_s*)x->RoleDescriptor;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_md_RoleDescriptor_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->RoleDescriptor; n > 1 && y->gg.g.n; --n, y = (struct zx_md_RoleDescriptor_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_md_EntityDescriptor_NUM_IDPSSODescriptor) */

int zx_md_EntityDescriptor_NUM_IDPSSODescriptor(struct zx_md_EntityDescriptor_s* x)
{
  struct zx_md_IDPSSODescriptor_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->IDPSSODescriptor; y; ++n, y = (struct zx_md_IDPSSODescriptor_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_md_EntityDescriptor_GET_IDPSSODescriptor) */

struct zx_md_IDPSSODescriptor_s* zx_md_EntityDescriptor_GET_IDPSSODescriptor(struct zx_md_EntityDescriptor_s* x, int n)
{
  struct zx_md_IDPSSODescriptor_s* y;
  if (!x) return 0;
  for (y = x->IDPSSODescriptor; n>=0 && y; --n, y = (struct zx_md_IDPSSODescriptor_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_md_EntityDescriptor_POP_IDPSSODescriptor) */

struct zx_md_IDPSSODescriptor_s* zx_md_EntityDescriptor_POP_IDPSSODescriptor(struct zx_md_EntityDescriptor_s* x)
{
  struct zx_md_IDPSSODescriptor_s* y;
  if (!x) return 0;
  y = x->IDPSSODescriptor;
  if (y)
    x->IDPSSODescriptor = (struct zx_md_IDPSSODescriptor_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_md_EntityDescriptor_PUSH_IDPSSODescriptor) */

void zx_md_EntityDescriptor_PUSH_IDPSSODescriptor(struct zx_md_EntityDescriptor_s* x, struct zx_md_IDPSSODescriptor_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->IDPSSODescriptor->gg.g;
  x->IDPSSODescriptor = z;
}

/* FUNC(zx_md_EntityDescriptor_REV_IDPSSODescriptor) */

void zx_md_EntityDescriptor_REV_IDPSSODescriptor(struct zx_md_EntityDescriptor_s* x)
{
  struct zx_md_IDPSSODescriptor_s* nxt;
  struct zx_md_IDPSSODescriptor_s* y;
  if (!x) return;
  y = x->IDPSSODescriptor;
  if (!y) return;
  x->IDPSSODescriptor = 0;
  while (y) {
    nxt = (struct zx_md_IDPSSODescriptor_s*)y->gg.g.n;
    y->gg.g.n = &x->IDPSSODescriptor->gg.g;
    x->IDPSSODescriptor = y;
    y = nxt;
  }
}

/* FUNC(zx_md_EntityDescriptor_PUT_IDPSSODescriptor) */

void zx_md_EntityDescriptor_PUT_IDPSSODescriptor(struct zx_md_EntityDescriptor_s* x, int n, struct zx_md_IDPSSODescriptor_s* z)
{
  struct zx_md_IDPSSODescriptor_s* y;
  if (!x || !z) return;
  y = x->IDPSSODescriptor;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->IDPSSODescriptor = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_md_IDPSSODescriptor_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_md_EntityDescriptor_ADD_IDPSSODescriptor) */

void zx_md_EntityDescriptor_ADD_IDPSSODescriptor(struct zx_md_EntityDescriptor_s* x, int n, struct zx_md_IDPSSODescriptor_s* z)
{
  struct zx_md_IDPSSODescriptor_s* y;
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
    for (; y->gg.g.n; y = (struct zx_md_IDPSSODescriptor_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->IDPSSODescriptor; n > 1 && y; --n, y = (struct zx_md_IDPSSODescriptor_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_md_EntityDescriptor_DEL_IDPSSODescriptor) */

void zx_md_EntityDescriptor_DEL_IDPSSODescriptor(struct zx_md_EntityDescriptor_s* x, int n)
{
  struct zx_md_IDPSSODescriptor_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->IDPSSODescriptor = (struct zx_md_IDPSSODescriptor_s*)x->IDPSSODescriptor->gg.g.n;
    return;
  case -1:
    y = (struct zx_md_IDPSSODescriptor_s*)x->IDPSSODescriptor;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_md_IDPSSODescriptor_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->IDPSSODescriptor; n > 1 && y->gg.g.n; --n, y = (struct zx_md_IDPSSODescriptor_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_md_EntityDescriptor_NUM_SPSSODescriptor) */

int zx_md_EntityDescriptor_NUM_SPSSODescriptor(struct zx_md_EntityDescriptor_s* x)
{
  struct zx_md_SPSSODescriptor_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->SPSSODescriptor; y; ++n, y = (struct zx_md_SPSSODescriptor_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_md_EntityDescriptor_GET_SPSSODescriptor) */

struct zx_md_SPSSODescriptor_s* zx_md_EntityDescriptor_GET_SPSSODescriptor(struct zx_md_EntityDescriptor_s* x, int n)
{
  struct zx_md_SPSSODescriptor_s* y;
  if (!x) return 0;
  for (y = x->SPSSODescriptor; n>=0 && y; --n, y = (struct zx_md_SPSSODescriptor_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_md_EntityDescriptor_POP_SPSSODescriptor) */

struct zx_md_SPSSODescriptor_s* zx_md_EntityDescriptor_POP_SPSSODescriptor(struct zx_md_EntityDescriptor_s* x)
{
  struct zx_md_SPSSODescriptor_s* y;
  if (!x) return 0;
  y = x->SPSSODescriptor;
  if (y)
    x->SPSSODescriptor = (struct zx_md_SPSSODescriptor_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_md_EntityDescriptor_PUSH_SPSSODescriptor) */

void zx_md_EntityDescriptor_PUSH_SPSSODescriptor(struct zx_md_EntityDescriptor_s* x, struct zx_md_SPSSODescriptor_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->SPSSODescriptor->gg.g;
  x->SPSSODescriptor = z;
}

/* FUNC(zx_md_EntityDescriptor_REV_SPSSODescriptor) */

void zx_md_EntityDescriptor_REV_SPSSODescriptor(struct zx_md_EntityDescriptor_s* x)
{
  struct zx_md_SPSSODescriptor_s* nxt;
  struct zx_md_SPSSODescriptor_s* y;
  if (!x) return;
  y = x->SPSSODescriptor;
  if (!y) return;
  x->SPSSODescriptor = 0;
  while (y) {
    nxt = (struct zx_md_SPSSODescriptor_s*)y->gg.g.n;
    y->gg.g.n = &x->SPSSODescriptor->gg.g;
    x->SPSSODescriptor = y;
    y = nxt;
  }
}

/* FUNC(zx_md_EntityDescriptor_PUT_SPSSODescriptor) */

void zx_md_EntityDescriptor_PUT_SPSSODescriptor(struct zx_md_EntityDescriptor_s* x, int n, struct zx_md_SPSSODescriptor_s* z)
{
  struct zx_md_SPSSODescriptor_s* y;
  if (!x || !z) return;
  y = x->SPSSODescriptor;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->SPSSODescriptor = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_md_SPSSODescriptor_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_md_EntityDescriptor_ADD_SPSSODescriptor) */

void zx_md_EntityDescriptor_ADD_SPSSODescriptor(struct zx_md_EntityDescriptor_s* x, int n, struct zx_md_SPSSODescriptor_s* z)
{
  struct zx_md_SPSSODescriptor_s* y;
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
    for (; y->gg.g.n; y = (struct zx_md_SPSSODescriptor_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->SPSSODescriptor; n > 1 && y; --n, y = (struct zx_md_SPSSODescriptor_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_md_EntityDescriptor_DEL_SPSSODescriptor) */

void zx_md_EntityDescriptor_DEL_SPSSODescriptor(struct zx_md_EntityDescriptor_s* x, int n)
{
  struct zx_md_SPSSODescriptor_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->SPSSODescriptor = (struct zx_md_SPSSODescriptor_s*)x->SPSSODescriptor->gg.g.n;
    return;
  case -1:
    y = (struct zx_md_SPSSODescriptor_s*)x->SPSSODescriptor;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_md_SPSSODescriptor_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->SPSSODescriptor; n > 1 && y->gg.g.n; --n, y = (struct zx_md_SPSSODescriptor_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_md_EntityDescriptor_NUM_AuthnAuthorityDescriptor) */

int zx_md_EntityDescriptor_NUM_AuthnAuthorityDescriptor(struct zx_md_EntityDescriptor_s* x)
{
  struct zx_md_AuthnAuthorityDescriptor_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->AuthnAuthorityDescriptor; y; ++n, y = (struct zx_md_AuthnAuthorityDescriptor_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_md_EntityDescriptor_GET_AuthnAuthorityDescriptor) */

struct zx_md_AuthnAuthorityDescriptor_s* zx_md_EntityDescriptor_GET_AuthnAuthorityDescriptor(struct zx_md_EntityDescriptor_s* x, int n)
{
  struct zx_md_AuthnAuthorityDescriptor_s* y;
  if (!x) return 0;
  for (y = x->AuthnAuthorityDescriptor; n>=0 && y; --n, y = (struct zx_md_AuthnAuthorityDescriptor_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_md_EntityDescriptor_POP_AuthnAuthorityDescriptor) */

struct zx_md_AuthnAuthorityDescriptor_s* zx_md_EntityDescriptor_POP_AuthnAuthorityDescriptor(struct zx_md_EntityDescriptor_s* x)
{
  struct zx_md_AuthnAuthorityDescriptor_s* y;
  if (!x) return 0;
  y = x->AuthnAuthorityDescriptor;
  if (y)
    x->AuthnAuthorityDescriptor = (struct zx_md_AuthnAuthorityDescriptor_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_md_EntityDescriptor_PUSH_AuthnAuthorityDescriptor) */

void zx_md_EntityDescriptor_PUSH_AuthnAuthorityDescriptor(struct zx_md_EntityDescriptor_s* x, struct zx_md_AuthnAuthorityDescriptor_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->AuthnAuthorityDescriptor->gg.g;
  x->AuthnAuthorityDescriptor = z;
}

/* FUNC(zx_md_EntityDescriptor_REV_AuthnAuthorityDescriptor) */

void zx_md_EntityDescriptor_REV_AuthnAuthorityDescriptor(struct zx_md_EntityDescriptor_s* x)
{
  struct zx_md_AuthnAuthorityDescriptor_s* nxt;
  struct zx_md_AuthnAuthorityDescriptor_s* y;
  if (!x) return;
  y = x->AuthnAuthorityDescriptor;
  if (!y) return;
  x->AuthnAuthorityDescriptor = 0;
  while (y) {
    nxt = (struct zx_md_AuthnAuthorityDescriptor_s*)y->gg.g.n;
    y->gg.g.n = &x->AuthnAuthorityDescriptor->gg.g;
    x->AuthnAuthorityDescriptor = y;
    y = nxt;
  }
}

/* FUNC(zx_md_EntityDescriptor_PUT_AuthnAuthorityDescriptor) */

void zx_md_EntityDescriptor_PUT_AuthnAuthorityDescriptor(struct zx_md_EntityDescriptor_s* x, int n, struct zx_md_AuthnAuthorityDescriptor_s* z)
{
  struct zx_md_AuthnAuthorityDescriptor_s* y;
  if (!x || !z) return;
  y = x->AuthnAuthorityDescriptor;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->AuthnAuthorityDescriptor = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_md_AuthnAuthorityDescriptor_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_md_EntityDescriptor_ADD_AuthnAuthorityDescriptor) */

void zx_md_EntityDescriptor_ADD_AuthnAuthorityDescriptor(struct zx_md_EntityDescriptor_s* x, int n, struct zx_md_AuthnAuthorityDescriptor_s* z)
{
  struct zx_md_AuthnAuthorityDescriptor_s* y;
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
    for (; y->gg.g.n; y = (struct zx_md_AuthnAuthorityDescriptor_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->AuthnAuthorityDescriptor; n > 1 && y; --n, y = (struct zx_md_AuthnAuthorityDescriptor_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_md_EntityDescriptor_DEL_AuthnAuthorityDescriptor) */

void zx_md_EntityDescriptor_DEL_AuthnAuthorityDescriptor(struct zx_md_EntityDescriptor_s* x, int n)
{
  struct zx_md_AuthnAuthorityDescriptor_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->AuthnAuthorityDescriptor = (struct zx_md_AuthnAuthorityDescriptor_s*)x->AuthnAuthorityDescriptor->gg.g.n;
    return;
  case -1:
    y = (struct zx_md_AuthnAuthorityDescriptor_s*)x->AuthnAuthorityDescriptor;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_md_AuthnAuthorityDescriptor_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->AuthnAuthorityDescriptor; n > 1 && y->gg.g.n; --n, y = (struct zx_md_AuthnAuthorityDescriptor_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_md_EntityDescriptor_NUM_AttributeAuthorityDescriptor) */

int zx_md_EntityDescriptor_NUM_AttributeAuthorityDescriptor(struct zx_md_EntityDescriptor_s* x)
{
  struct zx_md_AttributeAuthorityDescriptor_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->AttributeAuthorityDescriptor; y; ++n, y = (struct zx_md_AttributeAuthorityDescriptor_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_md_EntityDescriptor_GET_AttributeAuthorityDescriptor) */

struct zx_md_AttributeAuthorityDescriptor_s* zx_md_EntityDescriptor_GET_AttributeAuthorityDescriptor(struct zx_md_EntityDescriptor_s* x, int n)
{
  struct zx_md_AttributeAuthorityDescriptor_s* y;
  if (!x) return 0;
  for (y = x->AttributeAuthorityDescriptor; n>=0 && y; --n, y = (struct zx_md_AttributeAuthorityDescriptor_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_md_EntityDescriptor_POP_AttributeAuthorityDescriptor) */

struct zx_md_AttributeAuthorityDescriptor_s* zx_md_EntityDescriptor_POP_AttributeAuthorityDescriptor(struct zx_md_EntityDescriptor_s* x)
{
  struct zx_md_AttributeAuthorityDescriptor_s* y;
  if (!x) return 0;
  y = x->AttributeAuthorityDescriptor;
  if (y)
    x->AttributeAuthorityDescriptor = (struct zx_md_AttributeAuthorityDescriptor_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_md_EntityDescriptor_PUSH_AttributeAuthorityDescriptor) */

void zx_md_EntityDescriptor_PUSH_AttributeAuthorityDescriptor(struct zx_md_EntityDescriptor_s* x, struct zx_md_AttributeAuthorityDescriptor_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->AttributeAuthorityDescriptor->gg.g;
  x->AttributeAuthorityDescriptor = z;
}

/* FUNC(zx_md_EntityDescriptor_REV_AttributeAuthorityDescriptor) */

void zx_md_EntityDescriptor_REV_AttributeAuthorityDescriptor(struct zx_md_EntityDescriptor_s* x)
{
  struct zx_md_AttributeAuthorityDescriptor_s* nxt;
  struct zx_md_AttributeAuthorityDescriptor_s* y;
  if (!x) return;
  y = x->AttributeAuthorityDescriptor;
  if (!y) return;
  x->AttributeAuthorityDescriptor = 0;
  while (y) {
    nxt = (struct zx_md_AttributeAuthorityDescriptor_s*)y->gg.g.n;
    y->gg.g.n = &x->AttributeAuthorityDescriptor->gg.g;
    x->AttributeAuthorityDescriptor = y;
    y = nxt;
  }
}

/* FUNC(zx_md_EntityDescriptor_PUT_AttributeAuthorityDescriptor) */

void zx_md_EntityDescriptor_PUT_AttributeAuthorityDescriptor(struct zx_md_EntityDescriptor_s* x, int n, struct zx_md_AttributeAuthorityDescriptor_s* z)
{
  struct zx_md_AttributeAuthorityDescriptor_s* y;
  if (!x || !z) return;
  y = x->AttributeAuthorityDescriptor;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->AttributeAuthorityDescriptor = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_md_AttributeAuthorityDescriptor_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_md_EntityDescriptor_ADD_AttributeAuthorityDescriptor) */

void zx_md_EntityDescriptor_ADD_AttributeAuthorityDescriptor(struct zx_md_EntityDescriptor_s* x, int n, struct zx_md_AttributeAuthorityDescriptor_s* z)
{
  struct zx_md_AttributeAuthorityDescriptor_s* y;
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
    for (; y->gg.g.n; y = (struct zx_md_AttributeAuthorityDescriptor_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->AttributeAuthorityDescriptor; n > 1 && y; --n, y = (struct zx_md_AttributeAuthorityDescriptor_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_md_EntityDescriptor_DEL_AttributeAuthorityDescriptor) */

void zx_md_EntityDescriptor_DEL_AttributeAuthorityDescriptor(struct zx_md_EntityDescriptor_s* x, int n)
{
  struct zx_md_AttributeAuthorityDescriptor_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->AttributeAuthorityDescriptor = (struct zx_md_AttributeAuthorityDescriptor_s*)x->AttributeAuthorityDescriptor->gg.g.n;
    return;
  case -1:
    y = (struct zx_md_AttributeAuthorityDescriptor_s*)x->AttributeAuthorityDescriptor;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_md_AttributeAuthorityDescriptor_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->AttributeAuthorityDescriptor; n > 1 && y->gg.g.n; --n, y = (struct zx_md_AttributeAuthorityDescriptor_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_md_EntityDescriptor_NUM_PDPDescriptor) */

int zx_md_EntityDescriptor_NUM_PDPDescriptor(struct zx_md_EntityDescriptor_s* x)
{
  struct zx_md_PDPDescriptor_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->PDPDescriptor; y; ++n, y = (struct zx_md_PDPDescriptor_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_md_EntityDescriptor_GET_PDPDescriptor) */

struct zx_md_PDPDescriptor_s* zx_md_EntityDescriptor_GET_PDPDescriptor(struct zx_md_EntityDescriptor_s* x, int n)
{
  struct zx_md_PDPDescriptor_s* y;
  if (!x) return 0;
  for (y = x->PDPDescriptor; n>=0 && y; --n, y = (struct zx_md_PDPDescriptor_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_md_EntityDescriptor_POP_PDPDescriptor) */

struct zx_md_PDPDescriptor_s* zx_md_EntityDescriptor_POP_PDPDescriptor(struct zx_md_EntityDescriptor_s* x)
{
  struct zx_md_PDPDescriptor_s* y;
  if (!x) return 0;
  y = x->PDPDescriptor;
  if (y)
    x->PDPDescriptor = (struct zx_md_PDPDescriptor_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_md_EntityDescriptor_PUSH_PDPDescriptor) */

void zx_md_EntityDescriptor_PUSH_PDPDescriptor(struct zx_md_EntityDescriptor_s* x, struct zx_md_PDPDescriptor_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->PDPDescriptor->gg.g;
  x->PDPDescriptor = z;
}

/* FUNC(zx_md_EntityDescriptor_REV_PDPDescriptor) */

void zx_md_EntityDescriptor_REV_PDPDescriptor(struct zx_md_EntityDescriptor_s* x)
{
  struct zx_md_PDPDescriptor_s* nxt;
  struct zx_md_PDPDescriptor_s* y;
  if (!x) return;
  y = x->PDPDescriptor;
  if (!y) return;
  x->PDPDescriptor = 0;
  while (y) {
    nxt = (struct zx_md_PDPDescriptor_s*)y->gg.g.n;
    y->gg.g.n = &x->PDPDescriptor->gg.g;
    x->PDPDescriptor = y;
    y = nxt;
  }
}

/* FUNC(zx_md_EntityDescriptor_PUT_PDPDescriptor) */

void zx_md_EntityDescriptor_PUT_PDPDescriptor(struct zx_md_EntityDescriptor_s* x, int n, struct zx_md_PDPDescriptor_s* z)
{
  struct zx_md_PDPDescriptor_s* y;
  if (!x || !z) return;
  y = x->PDPDescriptor;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->PDPDescriptor = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_md_PDPDescriptor_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_md_EntityDescriptor_ADD_PDPDescriptor) */

void zx_md_EntityDescriptor_ADD_PDPDescriptor(struct zx_md_EntityDescriptor_s* x, int n, struct zx_md_PDPDescriptor_s* z)
{
  struct zx_md_PDPDescriptor_s* y;
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
    for (; y->gg.g.n; y = (struct zx_md_PDPDescriptor_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->PDPDescriptor; n > 1 && y; --n, y = (struct zx_md_PDPDescriptor_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_md_EntityDescriptor_DEL_PDPDescriptor) */

void zx_md_EntityDescriptor_DEL_PDPDescriptor(struct zx_md_EntityDescriptor_s* x, int n)
{
  struct zx_md_PDPDescriptor_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->PDPDescriptor = (struct zx_md_PDPDescriptor_s*)x->PDPDescriptor->gg.g.n;
    return;
  case -1:
    y = (struct zx_md_PDPDescriptor_s*)x->PDPDescriptor;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_md_PDPDescriptor_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->PDPDescriptor; n > 1 && y->gg.g.n; --n, y = (struct zx_md_PDPDescriptor_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_md_EntityDescriptor_NUM_AffiliationDescriptor) */

int zx_md_EntityDescriptor_NUM_AffiliationDescriptor(struct zx_md_EntityDescriptor_s* x)
{
  struct zx_md_AffiliationDescriptor_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->AffiliationDescriptor; y; ++n, y = (struct zx_md_AffiliationDescriptor_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_md_EntityDescriptor_GET_AffiliationDescriptor) */

struct zx_md_AffiliationDescriptor_s* zx_md_EntityDescriptor_GET_AffiliationDescriptor(struct zx_md_EntityDescriptor_s* x, int n)
{
  struct zx_md_AffiliationDescriptor_s* y;
  if (!x) return 0;
  for (y = x->AffiliationDescriptor; n>=0 && y; --n, y = (struct zx_md_AffiliationDescriptor_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_md_EntityDescriptor_POP_AffiliationDescriptor) */

struct zx_md_AffiliationDescriptor_s* zx_md_EntityDescriptor_POP_AffiliationDescriptor(struct zx_md_EntityDescriptor_s* x)
{
  struct zx_md_AffiliationDescriptor_s* y;
  if (!x) return 0;
  y = x->AffiliationDescriptor;
  if (y)
    x->AffiliationDescriptor = (struct zx_md_AffiliationDescriptor_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_md_EntityDescriptor_PUSH_AffiliationDescriptor) */

void zx_md_EntityDescriptor_PUSH_AffiliationDescriptor(struct zx_md_EntityDescriptor_s* x, struct zx_md_AffiliationDescriptor_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->AffiliationDescriptor->gg.g;
  x->AffiliationDescriptor = z;
}

/* FUNC(zx_md_EntityDescriptor_REV_AffiliationDescriptor) */

void zx_md_EntityDescriptor_REV_AffiliationDescriptor(struct zx_md_EntityDescriptor_s* x)
{
  struct zx_md_AffiliationDescriptor_s* nxt;
  struct zx_md_AffiliationDescriptor_s* y;
  if (!x) return;
  y = x->AffiliationDescriptor;
  if (!y) return;
  x->AffiliationDescriptor = 0;
  while (y) {
    nxt = (struct zx_md_AffiliationDescriptor_s*)y->gg.g.n;
    y->gg.g.n = &x->AffiliationDescriptor->gg.g;
    x->AffiliationDescriptor = y;
    y = nxt;
  }
}

/* FUNC(zx_md_EntityDescriptor_PUT_AffiliationDescriptor) */

void zx_md_EntityDescriptor_PUT_AffiliationDescriptor(struct zx_md_EntityDescriptor_s* x, int n, struct zx_md_AffiliationDescriptor_s* z)
{
  struct zx_md_AffiliationDescriptor_s* y;
  if (!x || !z) return;
  y = x->AffiliationDescriptor;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->AffiliationDescriptor = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_md_AffiliationDescriptor_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_md_EntityDescriptor_ADD_AffiliationDescriptor) */

void zx_md_EntityDescriptor_ADD_AffiliationDescriptor(struct zx_md_EntityDescriptor_s* x, int n, struct zx_md_AffiliationDescriptor_s* z)
{
  struct zx_md_AffiliationDescriptor_s* y;
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
    for (; y->gg.g.n; y = (struct zx_md_AffiliationDescriptor_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->AffiliationDescriptor; n > 1 && y; --n, y = (struct zx_md_AffiliationDescriptor_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_md_EntityDescriptor_DEL_AffiliationDescriptor) */

void zx_md_EntityDescriptor_DEL_AffiliationDescriptor(struct zx_md_EntityDescriptor_s* x, int n)
{
  struct zx_md_AffiliationDescriptor_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->AffiliationDescriptor = (struct zx_md_AffiliationDescriptor_s*)x->AffiliationDescriptor->gg.g.n;
    return;
  case -1:
    y = (struct zx_md_AffiliationDescriptor_s*)x->AffiliationDescriptor;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_md_AffiliationDescriptor_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->AffiliationDescriptor; n > 1 && y->gg.g.n; --n, y = (struct zx_md_AffiliationDescriptor_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_md_EntityDescriptor_NUM_Organization) */

int zx_md_EntityDescriptor_NUM_Organization(struct zx_md_EntityDescriptor_s* x)
{
  struct zx_md_Organization_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Organization; y; ++n, y = (struct zx_md_Organization_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_md_EntityDescriptor_GET_Organization) */

struct zx_md_Organization_s* zx_md_EntityDescriptor_GET_Organization(struct zx_md_EntityDescriptor_s* x, int n)
{
  struct zx_md_Organization_s* y;
  if (!x) return 0;
  for (y = x->Organization; n>=0 && y; --n, y = (struct zx_md_Organization_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_md_EntityDescriptor_POP_Organization) */

struct zx_md_Organization_s* zx_md_EntityDescriptor_POP_Organization(struct zx_md_EntityDescriptor_s* x)
{
  struct zx_md_Organization_s* y;
  if (!x) return 0;
  y = x->Organization;
  if (y)
    x->Organization = (struct zx_md_Organization_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_md_EntityDescriptor_PUSH_Organization) */

void zx_md_EntityDescriptor_PUSH_Organization(struct zx_md_EntityDescriptor_s* x, struct zx_md_Organization_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Organization->gg.g;
  x->Organization = z;
}

/* FUNC(zx_md_EntityDescriptor_REV_Organization) */

void zx_md_EntityDescriptor_REV_Organization(struct zx_md_EntityDescriptor_s* x)
{
  struct zx_md_Organization_s* nxt;
  struct zx_md_Organization_s* y;
  if (!x) return;
  y = x->Organization;
  if (!y) return;
  x->Organization = 0;
  while (y) {
    nxt = (struct zx_md_Organization_s*)y->gg.g.n;
    y->gg.g.n = &x->Organization->gg.g;
    x->Organization = y;
    y = nxt;
  }
}

/* FUNC(zx_md_EntityDescriptor_PUT_Organization) */

void zx_md_EntityDescriptor_PUT_Organization(struct zx_md_EntityDescriptor_s* x, int n, struct zx_md_Organization_s* z)
{
  struct zx_md_Organization_s* y;
  if (!x || !z) return;
  y = x->Organization;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Organization = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_md_Organization_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_md_EntityDescriptor_ADD_Organization) */

void zx_md_EntityDescriptor_ADD_Organization(struct zx_md_EntityDescriptor_s* x, int n, struct zx_md_Organization_s* z)
{
  struct zx_md_Organization_s* y;
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
    for (; y->gg.g.n; y = (struct zx_md_Organization_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Organization; n > 1 && y; --n, y = (struct zx_md_Organization_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_md_EntityDescriptor_DEL_Organization) */

void zx_md_EntityDescriptor_DEL_Organization(struct zx_md_EntityDescriptor_s* x, int n)
{
  struct zx_md_Organization_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Organization = (struct zx_md_Organization_s*)x->Organization->gg.g.n;
    return;
  case -1:
    y = (struct zx_md_Organization_s*)x->Organization;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_md_Organization_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Organization; n > 1 && y->gg.g.n; --n, y = (struct zx_md_Organization_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_md_EntityDescriptor_NUM_ContactPerson) */

int zx_md_EntityDescriptor_NUM_ContactPerson(struct zx_md_EntityDescriptor_s* x)
{
  struct zx_md_ContactPerson_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->ContactPerson; y; ++n, y = (struct zx_md_ContactPerson_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_md_EntityDescriptor_GET_ContactPerson) */

struct zx_md_ContactPerson_s* zx_md_EntityDescriptor_GET_ContactPerson(struct zx_md_EntityDescriptor_s* x, int n)
{
  struct zx_md_ContactPerson_s* y;
  if (!x) return 0;
  for (y = x->ContactPerson; n>=0 && y; --n, y = (struct zx_md_ContactPerson_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_md_EntityDescriptor_POP_ContactPerson) */

struct zx_md_ContactPerson_s* zx_md_EntityDescriptor_POP_ContactPerson(struct zx_md_EntityDescriptor_s* x)
{
  struct zx_md_ContactPerson_s* y;
  if (!x) return 0;
  y = x->ContactPerson;
  if (y)
    x->ContactPerson = (struct zx_md_ContactPerson_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_md_EntityDescriptor_PUSH_ContactPerson) */

void zx_md_EntityDescriptor_PUSH_ContactPerson(struct zx_md_EntityDescriptor_s* x, struct zx_md_ContactPerson_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->ContactPerson->gg.g;
  x->ContactPerson = z;
}

/* FUNC(zx_md_EntityDescriptor_REV_ContactPerson) */

void zx_md_EntityDescriptor_REV_ContactPerson(struct zx_md_EntityDescriptor_s* x)
{
  struct zx_md_ContactPerson_s* nxt;
  struct zx_md_ContactPerson_s* y;
  if (!x) return;
  y = x->ContactPerson;
  if (!y) return;
  x->ContactPerson = 0;
  while (y) {
    nxt = (struct zx_md_ContactPerson_s*)y->gg.g.n;
    y->gg.g.n = &x->ContactPerson->gg.g;
    x->ContactPerson = y;
    y = nxt;
  }
}

/* FUNC(zx_md_EntityDescriptor_PUT_ContactPerson) */

void zx_md_EntityDescriptor_PUT_ContactPerson(struct zx_md_EntityDescriptor_s* x, int n, struct zx_md_ContactPerson_s* z)
{
  struct zx_md_ContactPerson_s* y;
  if (!x || !z) return;
  y = x->ContactPerson;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->ContactPerson = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_md_ContactPerson_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_md_EntityDescriptor_ADD_ContactPerson) */

void zx_md_EntityDescriptor_ADD_ContactPerson(struct zx_md_EntityDescriptor_s* x, int n, struct zx_md_ContactPerson_s* z)
{
  struct zx_md_ContactPerson_s* y;
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
    for (; y->gg.g.n; y = (struct zx_md_ContactPerson_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->ContactPerson; n > 1 && y; --n, y = (struct zx_md_ContactPerson_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_md_EntityDescriptor_DEL_ContactPerson) */

void zx_md_EntityDescriptor_DEL_ContactPerson(struct zx_md_EntityDescriptor_s* x, int n)
{
  struct zx_md_ContactPerson_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->ContactPerson = (struct zx_md_ContactPerson_s*)x->ContactPerson->gg.g.n;
    return;
  case -1:
    y = (struct zx_md_ContactPerson_s*)x->ContactPerson;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_md_ContactPerson_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->ContactPerson; n > 1 && y->gg.g.n; --n, y = (struct zx_md_ContactPerson_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_md_EntityDescriptor_NUM_AdditionalMetadataLocation) */

int zx_md_EntityDescriptor_NUM_AdditionalMetadataLocation(struct zx_md_EntityDescriptor_s* x)
{
  struct zx_md_AdditionalMetadataLocation_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->AdditionalMetadataLocation; y; ++n, y = (struct zx_md_AdditionalMetadataLocation_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_md_EntityDescriptor_GET_AdditionalMetadataLocation) */

struct zx_md_AdditionalMetadataLocation_s* zx_md_EntityDescriptor_GET_AdditionalMetadataLocation(struct zx_md_EntityDescriptor_s* x, int n)
{
  struct zx_md_AdditionalMetadataLocation_s* y;
  if (!x) return 0;
  for (y = x->AdditionalMetadataLocation; n>=0 && y; --n, y = (struct zx_md_AdditionalMetadataLocation_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_md_EntityDescriptor_POP_AdditionalMetadataLocation) */

struct zx_md_AdditionalMetadataLocation_s* zx_md_EntityDescriptor_POP_AdditionalMetadataLocation(struct zx_md_EntityDescriptor_s* x)
{
  struct zx_md_AdditionalMetadataLocation_s* y;
  if (!x) return 0;
  y = x->AdditionalMetadataLocation;
  if (y)
    x->AdditionalMetadataLocation = (struct zx_md_AdditionalMetadataLocation_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_md_EntityDescriptor_PUSH_AdditionalMetadataLocation) */

void zx_md_EntityDescriptor_PUSH_AdditionalMetadataLocation(struct zx_md_EntityDescriptor_s* x, struct zx_md_AdditionalMetadataLocation_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->AdditionalMetadataLocation->gg.g;
  x->AdditionalMetadataLocation = z;
}

/* FUNC(zx_md_EntityDescriptor_REV_AdditionalMetadataLocation) */

void zx_md_EntityDescriptor_REV_AdditionalMetadataLocation(struct zx_md_EntityDescriptor_s* x)
{
  struct zx_md_AdditionalMetadataLocation_s* nxt;
  struct zx_md_AdditionalMetadataLocation_s* y;
  if (!x) return;
  y = x->AdditionalMetadataLocation;
  if (!y) return;
  x->AdditionalMetadataLocation = 0;
  while (y) {
    nxt = (struct zx_md_AdditionalMetadataLocation_s*)y->gg.g.n;
    y->gg.g.n = &x->AdditionalMetadataLocation->gg.g;
    x->AdditionalMetadataLocation = y;
    y = nxt;
  }
}

/* FUNC(zx_md_EntityDescriptor_PUT_AdditionalMetadataLocation) */

void zx_md_EntityDescriptor_PUT_AdditionalMetadataLocation(struct zx_md_EntityDescriptor_s* x, int n, struct zx_md_AdditionalMetadataLocation_s* z)
{
  struct zx_md_AdditionalMetadataLocation_s* y;
  if (!x || !z) return;
  y = x->AdditionalMetadataLocation;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->AdditionalMetadataLocation = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_md_AdditionalMetadataLocation_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_md_EntityDescriptor_ADD_AdditionalMetadataLocation) */

void zx_md_EntityDescriptor_ADD_AdditionalMetadataLocation(struct zx_md_EntityDescriptor_s* x, int n, struct zx_md_AdditionalMetadataLocation_s* z)
{
  struct zx_md_AdditionalMetadataLocation_s* y;
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
    for (; y->gg.g.n; y = (struct zx_md_AdditionalMetadataLocation_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->AdditionalMetadataLocation; n > 1 && y; --n, y = (struct zx_md_AdditionalMetadataLocation_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_md_EntityDescriptor_DEL_AdditionalMetadataLocation) */

void zx_md_EntityDescriptor_DEL_AdditionalMetadataLocation(struct zx_md_EntityDescriptor_s* x, int n)
{
  struct zx_md_AdditionalMetadataLocation_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->AdditionalMetadataLocation = (struct zx_md_AdditionalMetadataLocation_s*)x->AdditionalMetadataLocation->gg.g.n;
    return;
  case -1:
    y = (struct zx_md_AdditionalMetadataLocation_s*)x->AdditionalMetadataLocation;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_md_AdditionalMetadataLocation_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->AdditionalMetadataLocation; n > 1 && y->gg.g.n; --n, y = (struct zx_md_AdditionalMetadataLocation_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif

/* FUNC(zx_md_EntityDescriptor_GET_entityID) */
struct zx_str* zx_md_EntityDescriptor_GET_entityID(struct zx_md_EntityDescriptor_s* x) { return x->entityID; }
/* FUNC(zx_md_EntityDescriptor_PUT_entityID) */
void zx_md_EntityDescriptor_PUT_entityID(struct zx_md_EntityDescriptor_s* x, struct zx_str* y) { x->entityID = y; }
/* FUNC(zx_md_EntityDescriptor_GET_validUntil) */
struct zx_str* zx_md_EntityDescriptor_GET_validUntil(struct zx_md_EntityDescriptor_s* x) { return x->validUntil; }
/* FUNC(zx_md_EntityDescriptor_PUT_validUntil) */
void zx_md_EntityDescriptor_PUT_validUntil(struct zx_md_EntityDescriptor_s* x, struct zx_str* y) { x->validUntil = y; }
/* FUNC(zx_md_EntityDescriptor_GET_cacheDuration) */
struct zx_str* zx_md_EntityDescriptor_GET_cacheDuration(struct zx_md_EntityDescriptor_s* x) { return x->cacheDuration; }
/* FUNC(zx_md_EntityDescriptor_PUT_cacheDuration) */
void zx_md_EntityDescriptor_PUT_cacheDuration(struct zx_md_EntityDescriptor_s* x, struct zx_str* y) { x->cacheDuration = y; }
/* FUNC(zx_md_EntityDescriptor_GET_ID) */
struct zx_str* zx_md_EntityDescriptor_GET_ID(struct zx_md_EntityDescriptor_s* x) { return x->ID; }
/* FUNC(zx_md_EntityDescriptor_PUT_ID) */
void zx_md_EntityDescriptor_PUT_ID(struct zx_md_EntityDescriptor_s* x, struct zx_str* y) { x->ID = y; }












#ifdef ZX_ENA_GETPUT

/* FUNC(zx_md_IDPSSODescriptor_NUM_Signature) */

int zx_md_IDPSSODescriptor_NUM_Signature(struct zx_md_IDPSSODescriptor_s* x)
{
  struct zx_ds_Signature_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Signature; y; ++n, y = (struct zx_ds_Signature_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_md_IDPSSODescriptor_GET_Signature) */

struct zx_ds_Signature_s* zx_md_IDPSSODescriptor_GET_Signature(struct zx_md_IDPSSODescriptor_s* x, int n)
{
  struct zx_ds_Signature_s* y;
  if (!x) return 0;
  for (y = x->Signature; n>=0 && y; --n, y = (struct zx_ds_Signature_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_md_IDPSSODescriptor_POP_Signature) */

struct zx_ds_Signature_s* zx_md_IDPSSODescriptor_POP_Signature(struct zx_md_IDPSSODescriptor_s* x)
{
  struct zx_ds_Signature_s* y;
  if (!x) return 0;
  y = x->Signature;
  if (y)
    x->Signature = (struct zx_ds_Signature_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_md_IDPSSODescriptor_PUSH_Signature) */

void zx_md_IDPSSODescriptor_PUSH_Signature(struct zx_md_IDPSSODescriptor_s* x, struct zx_ds_Signature_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Signature->gg.g;
  x->Signature = z;
}

/* FUNC(zx_md_IDPSSODescriptor_REV_Signature) */

void zx_md_IDPSSODescriptor_REV_Signature(struct zx_md_IDPSSODescriptor_s* x)
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

/* FUNC(zx_md_IDPSSODescriptor_PUT_Signature) */

void zx_md_IDPSSODescriptor_PUT_Signature(struct zx_md_IDPSSODescriptor_s* x, int n, struct zx_ds_Signature_s* z)
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

/* FUNC(zx_md_IDPSSODescriptor_ADD_Signature) */

void zx_md_IDPSSODescriptor_ADD_Signature(struct zx_md_IDPSSODescriptor_s* x, int n, struct zx_ds_Signature_s* z)
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

/* FUNC(zx_md_IDPSSODescriptor_DEL_Signature) */

void zx_md_IDPSSODescriptor_DEL_Signature(struct zx_md_IDPSSODescriptor_s* x, int n)
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

/* FUNC(zx_md_IDPSSODescriptor_NUM_Extensions) */

int zx_md_IDPSSODescriptor_NUM_Extensions(struct zx_md_IDPSSODescriptor_s* x)
{
  struct zx_md_Extensions_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Extensions; y; ++n, y = (struct zx_md_Extensions_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_md_IDPSSODescriptor_GET_Extensions) */

struct zx_md_Extensions_s* zx_md_IDPSSODescriptor_GET_Extensions(struct zx_md_IDPSSODescriptor_s* x, int n)
{
  struct zx_md_Extensions_s* y;
  if (!x) return 0;
  for (y = x->Extensions; n>=0 && y; --n, y = (struct zx_md_Extensions_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_md_IDPSSODescriptor_POP_Extensions) */

struct zx_md_Extensions_s* zx_md_IDPSSODescriptor_POP_Extensions(struct zx_md_IDPSSODescriptor_s* x)
{
  struct zx_md_Extensions_s* y;
  if (!x) return 0;
  y = x->Extensions;
  if (y)
    x->Extensions = (struct zx_md_Extensions_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_md_IDPSSODescriptor_PUSH_Extensions) */

void zx_md_IDPSSODescriptor_PUSH_Extensions(struct zx_md_IDPSSODescriptor_s* x, struct zx_md_Extensions_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Extensions->gg.g;
  x->Extensions = z;
}

/* FUNC(zx_md_IDPSSODescriptor_REV_Extensions) */

void zx_md_IDPSSODescriptor_REV_Extensions(struct zx_md_IDPSSODescriptor_s* x)
{
  struct zx_md_Extensions_s* nxt;
  struct zx_md_Extensions_s* y;
  if (!x) return;
  y = x->Extensions;
  if (!y) return;
  x->Extensions = 0;
  while (y) {
    nxt = (struct zx_md_Extensions_s*)y->gg.g.n;
    y->gg.g.n = &x->Extensions->gg.g;
    x->Extensions = y;
    y = nxt;
  }
}

/* FUNC(zx_md_IDPSSODescriptor_PUT_Extensions) */

void zx_md_IDPSSODescriptor_PUT_Extensions(struct zx_md_IDPSSODescriptor_s* x, int n, struct zx_md_Extensions_s* z)
{
  struct zx_md_Extensions_s* y;
  if (!x || !z) return;
  y = x->Extensions;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Extensions = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_md_Extensions_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_md_IDPSSODescriptor_ADD_Extensions) */

void zx_md_IDPSSODescriptor_ADD_Extensions(struct zx_md_IDPSSODescriptor_s* x, int n, struct zx_md_Extensions_s* z)
{
  struct zx_md_Extensions_s* y;
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
    for (; y->gg.g.n; y = (struct zx_md_Extensions_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Extensions; n > 1 && y; --n, y = (struct zx_md_Extensions_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_md_IDPSSODescriptor_DEL_Extensions) */

void zx_md_IDPSSODescriptor_DEL_Extensions(struct zx_md_IDPSSODescriptor_s* x, int n)
{
  struct zx_md_Extensions_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Extensions = (struct zx_md_Extensions_s*)x->Extensions->gg.g.n;
    return;
  case -1:
    y = (struct zx_md_Extensions_s*)x->Extensions;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_md_Extensions_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Extensions; n > 1 && y->gg.g.n; --n, y = (struct zx_md_Extensions_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_md_IDPSSODescriptor_NUM_KeyDescriptor) */

int zx_md_IDPSSODescriptor_NUM_KeyDescriptor(struct zx_md_IDPSSODescriptor_s* x)
{
  struct zx_md_KeyDescriptor_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->KeyDescriptor; y; ++n, y = (struct zx_md_KeyDescriptor_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_md_IDPSSODescriptor_GET_KeyDescriptor) */

struct zx_md_KeyDescriptor_s* zx_md_IDPSSODescriptor_GET_KeyDescriptor(struct zx_md_IDPSSODescriptor_s* x, int n)
{
  struct zx_md_KeyDescriptor_s* y;
  if (!x) return 0;
  for (y = x->KeyDescriptor; n>=0 && y; --n, y = (struct zx_md_KeyDescriptor_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_md_IDPSSODescriptor_POP_KeyDescriptor) */

struct zx_md_KeyDescriptor_s* zx_md_IDPSSODescriptor_POP_KeyDescriptor(struct zx_md_IDPSSODescriptor_s* x)
{
  struct zx_md_KeyDescriptor_s* y;
  if (!x) return 0;
  y = x->KeyDescriptor;
  if (y)
    x->KeyDescriptor = (struct zx_md_KeyDescriptor_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_md_IDPSSODescriptor_PUSH_KeyDescriptor) */

void zx_md_IDPSSODescriptor_PUSH_KeyDescriptor(struct zx_md_IDPSSODescriptor_s* x, struct zx_md_KeyDescriptor_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->KeyDescriptor->gg.g;
  x->KeyDescriptor = z;
}

/* FUNC(zx_md_IDPSSODescriptor_REV_KeyDescriptor) */

void zx_md_IDPSSODescriptor_REV_KeyDescriptor(struct zx_md_IDPSSODescriptor_s* x)
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

/* FUNC(zx_md_IDPSSODescriptor_PUT_KeyDescriptor) */

void zx_md_IDPSSODescriptor_PUT_KeyDescriptor(struct zx_md_IDPSSODescriptor_s* x, int n, struct zx_md_KeyDescriptor_s* z)
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

/* FUNC(zx_md_IDPSSODescriptor_ADD_KeyDescriptor) */

void zx_md_IDPSSODescriptor_ADD_KeyDescriptor(struct zx_md_IDPSSODescriptor_s* x, int n, struct zx_md_KeyDescriptor_s* z)
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

/* FUNC(zx_md_IDPSSODescriptor_DEL_KeyDescriptor) */

void zx_md_IDPSSODescriptor_DEL_KeyDescriptor(struct zx_md_IDPSSODescriptor_s* x, int n)
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

/* FUNC(zx_md_IDPSSODescriptor_NUM_Organization) */

int zx_md_IDPSSODescriptor_NUM_Organization(struct zx_md_IDPSSODescriptor_s* x)
{
  struct zx_md_Organization_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Organization; y; ++n, y = (struct zx_md_Organization_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_md_IDPSSODescriptor_GET_Organization) */

struct zx_md_Organization_s* zx_md_IDPSSODescriptor_GET_Organization(struct zx_md_IDPSSODescriptor_s* x, int n)
{
  struct zx_md_Organization_s* y;
  if (!x) return 0;
  for (y = x->Organization; n>=0 && y; --n, y = (struct zx_md_Organization_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_md_IDPSSODescriptor_POP_Organization) */

struct zx_md_Organization_s* zx_md_IDPSSODescriptor_POP_Organization(struct zx_md_IDPSSODescriptor_s* x)
{
  struct zx_md_Organization_s* y;
  if (!x) return 0;
  y = x->Organization;
  if (y)
    x->Organization = (struct zx_md_Organization_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_md_IDPSSODescriptor_PUSH_Organization) */

void zx_md_IDPSSODescriptor_PUSH_Organization(struct zx_md_IDPSSODescriptor_s* x, struct zx_md_Organization_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Organization->gg.g;
  x->Organization = z;
}

/* FUNC(zx_md_IDPSSODescriptor_REV_Organization) */

void zx_md_IDPSSODescriptor_REV_Organization(struct zx_md_IDPSSODescriptor_s* x)
{
  struct zx_md_Organization_s* nxt;
  struct zx_md_Organization_s* y;
  if (!x) return;
  y = x->Organization;
  if (!y) return;
  x->Organization = 0;
  while (y) {
    nxt = (struct zx_md_Organization_s*)y->gg.g.n;
    y->gg.g.n = &x->Organization->gg.g;
    x->Organization = y;
    y = nxt;
  }
}

/* FUNC(zx_md_IDPSSODescriptor_PUT_Organization) */

void zx_md_IDPSSODescriptor_PUT_Organization(struct zx_md_IDPSSODescriptor_s* x, int n, struct zx_md_Organization_s* z)
{
  struct zx_md_Organization_s* y;
  if (!x || !z) return;
  y = x->Organization;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Organization = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_md_Organization_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_md_IDPSSODescriptor_ADD_Organization) */

void zx_md_IDPSSODescriptor_ADD_Organization(struct zx_md_IDPSSODescriptor_s* x, int n, struct zx_md_Organization_s* z)
{
  struct zx_md_Organization_s* y;
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
    for (; y->gg.g.n; y = (struct zx_md_Organization_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Organization; n > 1 && y; --n, y = (struct zx_md_Organization_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_md_IDPSSODescriptor_DEL_Organization) */

void zx_md_IDPSSODescriptor_DEL_Organization(struct zx_md_IDPSSODescriptor_s* x, int n)
{
  struct zx_md_Organization_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Organization = (struct zx_md_Organization_s*)x->Organization->gg.g.n;
    return;
  case -1:
    y = (struct zx_md_Organization_s*)x->Organization;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_md_Organization_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Organization; n > 1 && y->gg.g.n; --n, y = (struct zx_md_Organization_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_md_IDPSSODescriptor_NUM_ContactPerson) */

int zx_md_IDPSSODescriptor_NUM_ContactPerson(struct zx_md_IDPSSODescriptor_s* x)
{
  struct zx_md_ContactPerson_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->ContactPerson; y; ++n, y = (struct zx_md_ContactPerson_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_md_IDPSSODescriptor_GET_ContactPerson) */

struct zx_md_ContactPerson_s* zx_md_IDPSSODescriptor_GET_ContactPerson(struct zx_md_IDPSSODescriptor_s* x, int n)
{
  struct zx_md_ContactPerson_s* y;
  if (!x) return 0;
  for (y = x->ContactPerson; n>=0 && y; --n, y = (struct zx_md_ContactPerson_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_md_IDPSSODescriptor_POP_ContactPerson) */

struct zx_md_ContactPerson_s* zx_md_IDPSSODescriptor_POP_ContactPerson(struct zx_md_IDPSSODescriptor_s* x)
{
  struct zx_md_ContactPerson_s* y;
  if (!x) return 0;
  y = x->ContactPerson;
  if (y)
    x->ContactPerson = (struct zx_md_ContactPerson_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_md_IDPSSODescriptor_PUSH_ContactPerson) */

void zx_md_IDPSSODescriptor_PUSH_ContactPerson(struct zx_md_IDPSSODescriptor_s* x, struct zx_md_ContactPerson_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->ContactPerson->gg.g;
  x->ContactPerson = z;
}

/* FUNC(zx_md_IDPSSODescriptor_REV_ContactPerson) */

void zx_md_IDPSSODescriptor_REV_ContactPerson(struct zx_md_IDPSSODescriptor_s* x)
{
  struct zx_md_ContactPerson_s* nxt;
  struct zx_md_ContactPerson_s* y;
  if (!x) return;
  y = x->ContactPerson;
  if (!y) return;
  x->ContactPerson = 0;
  while (y) {
    nxt = (struct zx_md_ContactPerson_s*)y->gg.g.n;
    y->gg.g.n = &x->ContactPerson->gg.g;
    x->ContactPerson = y;
    y = nxt;
  }
}

/* FUNC(zx_md_IDPSSODescriptor_PUT_ContactPerson) */

void zx_md_IDPSSODescriptor_PUT_ContactPerson(struct zx_md_IDPSSODescriptor_s* x, int n, struct zx_md_ContactPerson_s* z)
{
  struct zx_md_ContactPerson_s* y;
  if (!x || !z) return;
  y = x->ContactPerson;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->ContactPerson = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_md_ContactPerson_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_md_IDPSSODescriptor_ADD_ContactPerson) */

void zx_md_IDPSSODescriptor_ADD_ContactPerson(struct zx_md_IDPSSODescriptor_s* x, int n, struct zx_md_ContactPerson_s* z)
{
  struct zx_md_ContactPerson_s* y;
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
    for (; y->gg.g.n; y = (struct zx_md_ContactPerson_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->ContactPerson; n > 1 && y; --n, y = (struct zx_md_ContactPerson_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_md_IDPSSODescriptor_DEL_ContactPerson) */

void zx_md_IDPSSODescriptor_DEL_ContactPerson(struct zx_md_IDPSSODescriptor_s* x, int n)
{
  struct zx_md_ContactPerson_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->ContactPerson = (struct zx_md_ContactPerson_s*)x->ContactPerson->gg.g.n;
    return;
  case -1:
    y = (struct zx_md_ContactPerson_s*)x->ContactPerson;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_md_ContactPerson_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->ContactPerson; n > 1 && y->gg.g.n; --n, y = (struct zx_md_ContactPerson_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_md_IDPSSODescriptor_NUM_ArtifactResolutionService) */

int zx_md_IDPSSODescriptor_NUM_ArtifactResolutionService(struct zx_md_IDPSSODescriptor_s* x)
{
  struct zx_md_ArtifactResolutionService_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->ArtifactResolutionService; y; ++n, y = (struct zx_md_ArtifactResolutionService_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_md_IDPSSODescriptor_GET_ArtifactResolutionService) */

struct zx_md_ArtifactResolutionService_s* zx_md_IDPSSODescriptor_GET_ArtifactResolutionService(struct zx_md_IDPSSODescriptor_s* x, int n)
{
  struct zx_md_ArtifactResolutionService_s* y;
  if (!x) return 0;
  for (y = x->ArtifactResolutionService; n>=0 && y; --n, y = (struct zx_md_ArtifactResolutionService_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_md_IDPSSODescriptor_POP_ArtifactResolutionService) */

struct zx_md_ArtifactResolutionService_s* zx_md_IDPSSODescriptor_POP_ArtifactResolutionService(struct zx_md_IDPSSODescriptor_s* x)
{
  struct zx_md_ArtifactResolutionService_s* y;
  if (!x) return 0;
  y = x->ArtifactResolutionService;
  if (y)
    x->ArtifactResolutionService = (struct zx_md_ArtifactResolutionService_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_md_IDPSSODescriptor_PUSH_ArtifactResolutionService) */

void zx_md_IDPSSODescriptor_PUSH_ArtifactResolutionService(struct zx_md_IDPSSODescriptor_s* x, struct zx_md_ArtifactResolutionService_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->ArtifactResolutionService->gg.g;
  x->ArtifactResolutionService = z;
}

/* FUNC(zx_md_IDPSSODescriptor_REV_ArtifactResolutionService) */

void zx_md_IDPSSODescriptor_REV_ArtifactResolutionService(struct zx_md_IDPSSODescriptor_s* x)
{
  struct zx_md_ArtifactResolutionService_s* nxt;
  struct zx_md_ArtifactResolutionService_s* y;
  if (!x) return;
  y = x->ArtifactResolutionService;
  if (!y) return;
  x->ArtifactResolutionService = 0;
  while (y) {
    nxt = (struct zx_md_ArtifactResolutionService_s*)y->gg.g.n;
    y->gg.g.n = &x->ArtifactResolutionService->gg.g;
    x->ArtifactResolutionService = y;
    y = nxt;
  }
}

/* FUNC(zx_md_IDPSSODescriptor_PUT_ArtifactResolutionService) */

void zx_md_IDPSSODescriptor_PUT_ArtifactResolutionService(struct zx_md_IDPSSODescriptor_s* x, int n, struct zx_md_ArtifactResolutionService_s* z)
{
  struct zx_md_ArtifactResolutionService_s* y;
  if (!x || !z) return;
  y = x->ArtifactResolutionService;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->ArtifactResolutionService = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_md_ArtifactResolutionService_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_md_IDPSSODescriptor_ADD_ArtifactResolutionService) */

void zx_md_IDPSSODescriptor_ADD_ArtifactResolutionService(struct zx_md_IDPSSODescriptor_s* x, int n, struct zx_md_ArtifactResolutionService_s* z)
{
  struct zx_md_ArtifactResolutionService_s* y;
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
    for (; y->gg.g.n; y = (struct zx_md_ArtifactResolutionService_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->ArtifactResolutionService; n > 1 && y; --n, y = (struct zx_md_ArtifactResolutionService_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_md_IDPSSODescriptor_DEL_ArtifactResolutionService) */

void zx_md_IDPSSODescriptor_DEL_ArtifactResolutionService(struct zx_md_IDPSSODescriptor_s* x, int n)
{
  struct zx_md_ArtifactResolutionService_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->ArtifactResolutionService = (struct zx_md_ArtifactResolutionService_s*)x->ArtifactResolutionService->gg.g.n;
    return;
  case -1:
    y = (struct zx_md_ArtifactResolutionService_s*)x->ArtifactResolutionService;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_md_ArtifactResolutionService_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->ArtifactResolutionService; n > 1 && y->gg.g.n; --n, y = (struct zx_md_ArtifactResolutionService_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_md_IDPSSODescriptor_NUM_SingleLogoutService) */

int zx_md_IDPSSODescriptor_NUM_SingleLogoutService(struct zx_md_IDPSSODescriptor_s* x)
{
  struct zx_md_SingleLogoutService_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->SingleLogoutService; y; ++n, y = (struct zx_md_SingleLogoutService_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_md_IDPSSODescriptor_GET_SingleLogoutService) */

struct zx_md_SingleLogoutService_s* zx_md_IDPSSODescriptor_GET_SingleLogoutService(struct zx_md_IDPSSODescriptor_s* x, int n)
{
  struct zx_md_SingleLogoutService_s* y;
  if (!x) return 0;
  for (y = x->SingleLogoutService; n>=0 && y; --n, y = (struct zx_md_SingleLogoutService_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_md_IDPSSODescriptor_POP_SingleLogoutService) */

struct zx_md_SingleLogoutService_s* zx_md_IDPSSODescriptor_POP_SingleLogoutService(struct zx_md_IDPSSODescriptor_s* x)
{
  struct zx_md_SingleLogoutService_s* y;
  if (!x) return 0;
  y = x->SingleLogoutService;
  if (y)
    x->SingleLogoutService = (struct zx_md_SingleLogoutService_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_md_IDPSSODescriptor_PUSH_SingleLogoutService) */

void zx_md_IDPSSODescriptor_PUSH_SingleLogoutService(struct zx_md_IDPSSODescriptor_s* x, struct zx_md_SingleLogoutService_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->SingleLogoutService->gg.g;
  x->SingleLogoutService = z;
}

/* FUNC(zx_md_IDPSSODescriptor_REV_SingleLogoutService) */

void zx_md_IDPSSODescriptor_REV_SingleLogoutService(struct zx_md_IDPSSODescriptor_s* x)
{
  struct zx_md_SingleLogoutService_s* nxt;
  struct zx_md_SingleLogoutService_s* y;
  if (!x) return;
  y = x->SingleLogoutService;
  if (!y) return;
  x->SingleLogoutService = 0;
  while (y) {
    nxt = (struct zx_md_SingleLogoutService_s*)y->gg.g.n;
    y->gg.g.n = &x->SingleLogoutService->gg.g;
    x->SingleLogoutService = y;
    y = nxt;
  }
}

/* FUNC(zx_md_IDPSSODescriptor_PUT_SingleLogoutService) */

void zx_md_IDPSSODescriptor_PUT_SingleLogoutService(struct zx_md_IDPSSODescriptor_s* x, int n, struct zx_md_SingleLogoutService_s* z)
{
  struct zx_md_SingleLogoutService_s* y;
  if (!x || !z) return;
  y = x->SingleLogoutService;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->SingleLogoutService = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_md_SingleLogoutService_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_md_IDPSSODescriptor_ADD_SingleLogoutService) */

void zx_md_IDPSSODescriptor_ADD_SingleLogoutService(struct zx_md_IDPSSODescriptor_s* x, int n, struct zx_md_SingleLogoutService_s* z)
{
  struct zx_md_SingleLogoutService_s* y;
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
    for (; y->gg.g.n; y = (struct zx_md_SingleLogoutService_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->SingleLogoutService; n > 1 && y; --n, y = (struct zx_md_SingleLogoutService_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_md_IDPSSODescriptor_DEL_SingleLogoutService) */

void zx_md_IDPSSODescriptor_DEL_SingleLogoutService(struct zx_md_IDPSSODescriptor_s* x, int n)
{
  struct zx_md_SingleLogoutService_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->SingleLogoutService = (struct zx_md_SingleLogoutService_s*)x->SingleLogoutService->gg.g.n;
    return;
  case -1:
    y = (struct zx_md_SingleLogoutService_s*)x->SingleLogoutService;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_md_SingleLogoutService_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->SingleLogoutService; n > 1 && y->gg.g.n; --n, y = (struct zx_md_SingleLogoutService_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_md_IDPSSODescriptor_NUM_ManageNameIDService) */

int zx_md_IDPSSODescriptor_NUM_ManageNameIDService(struct zx_md_IDPSSODescriptor_s* x)
{
  struct zx_md_ManageNameIDService_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->ManageNameIDService; y; ++n, y = (struct zx_md_ManageNameIDService_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_md_IDPSSODescriptor_GET_ManageNameIDService) */

struct zx_md_ManageNameIDService_s* zx_md_IDPSSODescriptor_GET_ManageNameIDService(struct zx_md_IDPSSODescriptor_s* x, int n)
{
  struct zx_md_ManageNameIDService_s* y;
  if (!x) return 0;
  for (y = x->ManageNameIDService; n>=0 && y; --n, y = (struct zx_md_ManageNameIDService_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_md_IDPSSODescriptor_POP_ManageNameIDService) */

struct zx_md_ManageNameIDService_s* zx_md_IDPSSODescriptor_POP_ManageNameIDService(struct zx_md_IDPSSODescriptor_s* x)
{
  struct zx_md_ManageNameIDService_s* y;
  if (!x) return 0;
  y = x->ManageNameIDService;
  if (y)
    x->ManageNameIDService = (struct zx_md_ManageNameIDService_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_md_IDPSSODescriptor_PUSH_ManageNameIDService) */

void zx_md_IDPSSODescriptor_PUSH_ManageNameIDService(struct zx_md_IDPSSODescriptor_s* x, struct zx_md_ManageNameIDService_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->ManageNameIDService->gg.g;
  x->ManageNameIDService = z;
}

/* FUNC(zx_md_IDPSSODescriptor_REV_ManageNameIDService) */

void zx_md_IDPSSODescriptor_REV_ManageNameIDService(struct zx_md_IDPSSODescriptor_s* x)
{
  struct zx_md_ManageNameIDService_s* nxt;
  struct zx_md_ManageNameIDService_s* y;
  if (!x) return;
  y = x->ManageNameIDService;
  if (!y) return;
  x->ManageNameIDService = 0;
  while (y) {
    nxt = (struct zx_md_ManageNameIDService_s*)y->gg.g.n;
    y->gg.g.n = &x->ManageNameIDService->gg.g;
    x->ManageNameIDService = y;
    y = nxt;
  }
}

/* FUNC(zx_md_IDPSSODescriptor_PUT_ManageNameIDService) */

void zx_md_IDPSSODescriptor_PUT_ManageNameIDService(struct zx_md_IDPSSODescriptor_s* x, int n, struct zx_md_ManageNameIDService_s* z)
{
  struct zx_md_ManageNameIDService_s* y;
  if (!x || !z) return;
  y = x->ManageNameIDService;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->ManageNameIDService = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_md_ManageNameIDService_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_md_IDPSSODescriptor_ADD_ManageNameIDService) */

void zx_md_IDPSSODescriptor_ADD_ManageNameIDService(struct zx_md_IDPSSODescriptor_s* x, int n, struct zx_md_ManageNameIDService_s* z)
{
  struct zx_md_ManageNameIDService_s* y;
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
    for (; y->gg.g.n; y = (struct zx_md_ManageNameIDService_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->ManageNameIDService; n > 1 && y; --n, y = (struct zx_md_ManageNameIDService_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_md_IDPSSODescriptor_DEL_ManageNameIDService) */

void zx_md_IDPSSODescriptor_DEL_ManageNameIDService(struct zx_md_IDPSSODescriptor_s* x, int n)
{
  struct zx_md_ManageNameIDService_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->ManageNameIDService = (struct zx_md_ManageNameIDService_s*)x->ManageNameIDService->gg.g.n;
    return;
  case -1:
    y = (struct zx_md_ManageNameIDService_s*)x->ManageNameIDService;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_md_ManageNameIDService_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->ManageNameIDService; n > 1 && y->gg.g.n; --n, y = (struct zx_md_ManageNameIDService_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_md_IDPSSODescriptor_NUM_NameIDFormat) */

int zx_md_IDPSSODescriptor_NUM_NameIDFormat(struct zx_md_IDPSSODescriptor_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->NameIDFormat; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_md_IDPSSODescriptor_GET_NameIDFormat) */

struct zx_elem_s* zx_md_IDPSSODescriptor_GET_NameIDFormat(struct zx_md_IDPSSODescriptor_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->NameIDFormat; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_md_IDPSSODescriptor_POP_NameIDFormat) */

struct zx_elem_s* zx_md_IDPSSODescriptor_POP_NameIDFormat(struct zx_md_IDPSSODescriptor_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->NameIDFormat;
  if (y)
    x->NameIDFormat = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_md_IDPSSODescriptor_PUSH_NameIDFormat) */

void zx_md_IDPSSODescriptor_PUSH_NameIDFormat(struct zx_md_IDPSSODescriptor_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->NameIDFormat->g;
  x->NameIDFormat = z;
}

/* FUNC(zx_md_IDPSSODescriptor_REV_NameIDFormat) */

void zx_md_IDPSSODescriptor_REV_NameIDFormat(struct zx_md_IDPSSODescriptor_s* x)
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

/* FUNC(zx_md_IDPSSODescriptor_PUT_NameIDFormat) */

void zx_md_IDPSSODescriptor_PUT_NameIDFormat(struct zx_md_IDPSSODescriptor_s* x, int n, struct zx_elem_s* z)
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

/* FUNC(zx_md_IDPSSODescriptor_ADD_NameIDFormat) */

void zx_md_IDPSSODescriptor_ADD_NameIDFormat(struct zx_md_IDPSSODescriptor_s* x, int n, struct zx_elem_s* z)
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

/* FUNC(zx_md_IDPSSODescriptor_DEL_NameIDFormat) */

void zx_md_IDPSSODescriptor_DEL_NameIDFormat(struct zx_md_IDPSSODescriptor_s* x, int n)
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

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_md_IDPSSODescriptor_NUM_SingleSignOnService) */

int zx_md_IDPSSODescriptor_NUM_SingleSignOnService(struct zx_md_IDPSSODescriptor_s* x)
{
  struct zx_md_SingleSignOnService_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->SingleSignOnService; y; ++n, y = (struct zx_md_SingleSignOnService_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_md_IDPSSODescriptor_GET_SingleSignOnService) */

struct zx_md_SingleSignOnService_s* zx_md_IDPSSODescriptor_GET_SingleSignOnService(struct zx_md_IDPSSODescriptor_s* x, int n)
{
  struct zx_md_SingleSignOnService_s* y;
  if (!x) return 0;
  for (y = x->SingleSignOnService; n>=0 && y; --n, y = (struct zx_md_SingleSignOnService_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_md_IDPSSODescriptor_POP_SingleSignOnService) */

struct zx_md_SingleSignOnService_s* zx_md_IDPSSODescriptor_POP_SingleSignOnService(struct zx_md_IDPSSODescriptor_s* x)
{
  struct zx_md_SingleSignOnService_s* y;
  if (!x) return 0;
  y = x->SingleSignOnService;
  if (y)
    x->SingleSignOnService = (struct zx_md_SingleSignOnService_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_md_IDPSSODescriptor_PUSH_SingleSignOnService) */

void zx_md_IDPSSODescriptor_PUSH_SingleSignOnService(struct zx_md_IDPSSODescriptor_s* x, struct zx_md_SingleSignOnService_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->SingleSignOnService->gg.g;
  x->SingleSignOnService = z;
}

/* FUNC(zx_md_IDPSSODescriptor_REV_SingleSignOnService) */

void zx_md_IDPSSODescriptor_REV_SingleSignOnService(struct zx_md_IDPSSODescriptor_s* x)
{
  struct zx_md_SingleSignOnService_s* nxt;
  struct zx_md_SingleSignOnService_s* y;
  if (!x) return;
  y = x->SingleSignOnService;
  if (!y) return;
  x->SingleSignOnService = 0;
  while (y) {
    nxt = (struct zx_md_SingleSignOnService_s*)y->gg.g.n;
    y->gg.g.n = &x->SingleSignOnService->gg.g;
    x->SingleSignOnService = y;
    y = nxt;
  }
}

/* FUNC(zx_md_IDPSSODescriptor_PUT_SingleSignOnService) */

void zx_md_IDPSSODescriptor_PUT_SingleSignOnService(struct zx_md_IDPSSODescriptor_s* x, int n, struct zx_md_SingleSignOnService_s* z)
{
  struct zx_md_SingleSignOnService_s* y;
  if (!x || !z) return;
  y = x->SingleSignOnService;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->SingleSignOnService = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_md_SingleSignOnService_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_md_IDPSSODescriptor_ADD_SingleSignOnService) */

void zx_md_IDPSSODescriptor_ADD_SingleSignOnService(struct zx_md_IDPSSODescriptor_s* x, int n, struct zx_md_SingleSignOnService_s* z)
{
  struct zx_md_SingleSignOnService_s* y;
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
    for (; y->gg.g.n; y = (struct zx_md_SingleSignOnService_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->SingleSignOnService; n > 1 && y; --n, y = (struct zx_md_SingleSignOnService_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_md_IDPSSODescriptor_DEL_SingleSignOnService) */

void zx_md_IDPSSODescriptor_DEL_SingleSignOnService(struct zx_md_IDPSSODescriptor_s* x, int n)
{
  struct zx_md_SingleSignOnService_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->SingleSignOnService = (struct zx_md_SingleSignOnService_s*)x->SingleSignOnService->gg.g.n;
    return;
  case -1:
    y = (struct zx_md_SingleSignOnService_s*)x->SingleSignOnService;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_md_SingleSignOnService_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->SingleSignOnService; n > 1 && y->gg.g.n; --n, y = (struct zx_md_SingleSignOnService_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_md_IDPSSODescriptor_NUM_NameIDMappingService) */

int zx_md_IDPSSODescriptor_NUM_NameIDMappingService(struct zx_md_IDPSSODescriptor_s* x)
{
  struct zx_md_NameIDMappingService_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->NameIDMappingService; y; ++n, y = (struct zx_md_NameIDMappingService_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_md_IDPSSODescriptor_GET_NameIDMappingService) */

struct zx_md_NameIDMappingService_s* zx_md_IDPSSODescriptor_GET_NameIDMappingService(struct zx_md_IDPSSODescriptor_s* x, int n)
{
  struct zx_md_NameIDMappingService_s* y;
  if (!x) return 0;
  for (y = x->NameIDMappingService; n>=0 && y; --n, y = (struct zx_md_NameIDMappingService_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_md_IDPSSODescriptor_POP_NameIDMappingService) */

struct zx_md_NameIDMappingService_s* zx_md_IDPSSODescriptor_POP_NameIDMappingService(struct zx_md_IDPSSODescriptor_s* x)
{
  struct zx_md_NameIDMappingService_s* y;
  if (!x) return 0;
  y = x->NameIDMappingService;
  if (y)
    x->NameIDMappingService = (struct zx_md_NameIDMappingService_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_md_IDPSSODescriptor_PUSH_NameIDMappingService) */

void zx_md_IDPSSODescriptor_PUSH_NameIDMappingService(struct zx_md_IDPSSODescriptor_s* x, struct zx_md_NameIDMappingService_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->NameIDMappingService->gg.g;
  x->NameIDMappingService = z;
}

/* FUNC(zx_md_IDPSSODescriptor_REV_NameIDMappingService) */

void zx_md_IDPSSODescriptor_REV_NameIDMappingService(struct zx_md_IDPSSODescriptor_s* x)
{
  struct zx_md_NameIDMappingService_s* nxt;
  struct zx_md_NameIDMappingService_s* y;
  if (!x) return;
  y = x->NameIDMappingService;
  if (!y) return;
  x->NameIDMappingService = 0;
  while (y) {
    nxt = (struct zx_md_NameIDMappingService_s*)y->gg.g.n;
    y->gg.g.n = &x->NameIDMappingService->gg.g;
    x->NameIDMappingService = y;
    y = nxt;
  }
}

/* FUNC(zx_md_IDPSSODescriptor_PUT_NameIDMappingService) */

void zx_md_IDPSSODescriptor_PUT_NameIDMappingService(struct zx_md_IDPSSODescriptor_s* x, int n, struct zx_md_NameIDMappingService_s* z)
{
  struct zx_md_NameIDMappingService_s* y;
  if (!x || !z) return;
  y = x->NameIDMappingService;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->NameIDMappingService = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_md_NameIDMappingService_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_md_IDPSSODescriptor_ADD_NameIDMappingService) */

void zx_md_IDPSSODescriptor_ADD_NameIDMappingService(struct zx_md_IDPSSODescriptor_s* x, int n, struct zx_md_NameIDMappingService_s* z)
{
  struct zx_md_NameIDMappingService_s* y;
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
    for (; y->gg.g.n; y = (struct zx_md_NameIDMappingService_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->NameIDMappingService; n > 1 && y; --n, y = (struct zx_md_NameIDMappingService_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_md_IDPSSODescriptor_DEL_NameIDMappingService) */

void zx_md_IDPSSODescriptor_DEL_NameIDMappingService(struct zx_md_IDPSSODescriptor_s* x, int n)
{
  struct zx_md_NameIDMappingService_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->NameIDMappingService = (struct zx_md_NameIDMappingService_s*)x->NameIDMappingService->gg.g.n;
    return;
  case -1:
    y = (struct zx_md_NameIDMappingService_s*)x->NameIDMappingService;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_md_NameIDMappingService_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->NameIDMappingService; n > 1 && y->gg.g.n; --n, y = (struct zx_md_NameIDMappingService_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_md_IDPSSODescriptor_NUM_AssertionIDRequestService) */

int zx_md_IDPSSODescriptor_NUM_AssertionIDRequestService(struct zx_md_IDPSSODescriptor_s* x)
{
  struct zx_md_AssertionIDRequestService_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->AssertionIDRequestService; y; ++n, y = (struct zx_md_AssertionIDRequestService_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_md_IDPSSODescriptor_GET_AssertionIDRequestService) */

struct zx_md_AssertionIDRequestService_s* zx_md_IDPSSODescriptor_GET_AssertionIDRequestService(struct zx_md_IDPSSODescriptor_s* x, int n)
{
  struct zx_md_AssertionIDRequestService_s* y;
  if (!x) return 0;
  for (y = x->AssertionIDRequestService; n>=0 && y; --n, y = (struct zx_md_AssertionIDRequestService_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_md_IDPSSODescriptor_POP_AssertionIDRequestService) */

struct zx_md_AssertionIDRequestService_s* zx_md_IDPSSODescriptor_POP_AssertionIDRequestService(struct zx_md_IDPSSODescriptor_s* x)
{
  struct zx_md_AssertionIDRequestService_s* y;
  if (!x) return 0;
  y = x->AssertionIDRequestService;
  if (y)
    x->AssertionIDRequestService = (struct zx_md_AssertionIDRequestService_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_md_IDPSSODescriptor_PUSH_AssertionIDRequestService) */

void zx_md_IDPSSODescriptor_PUSH_AssertionIDRequestService(struct zx_md_IDPSSODescriptor_s* x, struct zx_md_AssertionIDRequestService_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->AssertionIDRequestService->gg.g;
  x->AssertionIDRequestService = z;
}

/* FUNC(zx_md_IDPSSODescriptor_REV_AssertionIDRequestService) */

void zx_md_IDPSSODescriptor_REV_AssertionIDRequestService(struct zx_md_IDPSSODescriptor_s* x)
{
  struct zx_md_AssertionIDRequestService_s* nxt;
  struct zx_md_AssertionIDRequestService_s* y;
  if (!x) return;
  y = x->AssertionIDRequestService;
  if (!y) return;
  x->AssertionIDRequestService = 0;
  while (y) {
    nxt = (struct zx_md_AssertionIDRequestService_s*)y->gg.g.n;
    y->gg.g.n = &x->AssertionIDRequestService->gg.g;
    x->AssertionIDRequestService = y;
    y = nxt;
  }
}

/* FUNC(zx_md_IDPSSODescriptor_PUT_AssertionIDRequestService) */

void zx_md_IDPSSODescriptor_PUT_AssertionIDRequestService(struct zx_md_IDPSSODescriptor_s* x, int n, struct zx_md_AssertionIDRequestService_s* z)
{
  struct zx_md_AssertionIDRequestService_s* y;
  if (!x || !z) return;
  y = x->AssertionIDRequestService;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->AssertionIDRequestService = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_md_AssertionIDRequestService_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_md_IDPSSODescriptor_ADD_AssertionIDRequestService) */

void zx_md_IDPSSODescriptor_ADD_AssertionIDRequestService(struct zx_md_IDPSSODescriptor_s* x, int n, struct zx_md_AssertionIDRequestService_s* z)
{
  struct zx_md_AssertionIDRequestService_s* y;
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
    for (; y->gg.g.n; y = (struct zx_md_AssertionIDRequestService_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->AssertionIDRequestService; n > 1 && y; --n, y = (struct zx_md_AssertionIDRequestService_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_md_IDPSSODescriptor_DEL_AssertionIDRequestService) */

void zx_md_IDPSSODescriptor_DEL_AssertionIDRequestService(struct zx_md_IDPSSODescriptor_s* x, int n)
{
  struct zx_md_AssertionIDRequestService_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->AssertionIDRequestService = (struct zx_md_AssertionIDRequestService_s*)x->AssertionIDRequestService->gg.g.n;
    return;
  case -1:
    y = (struct zx_md_AssertionIDRequestService_s*)x->AssertionIDRequestService;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_md_AssertionIDRequestService_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->AssertionIDRequestService; n > 1 && y->gg.g.n; --n, y = (struct zx_md_AssertionIDRequestService_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_md_IDPSSODescriptor_NUM_AttributeProfile) */

int zx_md_IDPSSODescriptor_NUM_AttributeProfile(struct zx_md_IDPSSODescriptor_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->AttributeProfile; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_md_IDPSSODescriptor_GET_AttributeProfile) */

struct zx_elem_s* zx_md_IDPSSODescriptor_GET_AttributeProfile(struct zx_md_IDPSSODescriptor_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->AttributeProfile; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_md_IDPSSODescriptor_POP_AttributeProfile) */

struct zx_elem_s* zx_md_IDPSSODescriptor_POP_AttributeProfile(struct zx_md_IDPSSODescriptor_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->AttributeProfile;
  if (y)
    x->AttributeProfile = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_md_IDPSSODescriptor_PUSH_AttributeProfile) */

void zx_md_IDPSSODescriptor_PUSH_AttributeProfile(struct zx_md_IDPSSODescriptor_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->AttributeProfile->g;
  x->AttributeProfile = z;
}

/* FUNC(zx_md_IDPSSODescriptor_REV_AttributeProfile) */

void zx_md_IDPSSODescriptor_REV_AttributeProfile(struct zx_md_IDPSSODescriptor_s* x)
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

/* FUNC(zx_md_IDPSSODescriptor_PUT_AttributeProfile) */

void zx_md_IDPSSODescriptor_PUT_AttributeProfile(struct zx_md_IDPSSODescriptor_s* x, int n, struct zx_elem_s* z)
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

/* FUNC(zx_md_IDPSSODescriptor_ADD_AttributeProfile) */

void zx_md_IDPSSODescriptor_ADD_AttributeProfile(struct zx_md_IDPSSODescriptor_s* x, int n, struct zx_elem_s* z)
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

/* FUNC(zx_md_IDPSSODescriptor_DEL_AttributeProfile) */

void zx_md_IDPSSODescriptor_DEL_AttributeProfile(struct zx_md_IDPSSODescriptor_s* x, int n)
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

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_md_IDPSSODescriptor_NUM_Attribute) */

int zx_md_IDPSSODescriptor_NUM_Attribute(struct zx_md_IDPSSODescriptor_s* x)
{
  struct zx_sa_Attribute_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Attribute; y; ++n, y = (struct zx_sa_Attribute_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_md_IDPSSODescriptor_GET_Attribute) */

struct zx_sa_Attribute_s* zx_md_IDPSSODescriptor_GET_Attribute(struct zx_md_IDPSSODescriptor_s* x, int n)
{
  struct zx_sa_Attribute_s* y;
  if (!x) return 0;
  for (y = x->Attribute; n>=0 && y; --n, y = (struct zx_sa_Attribute_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_md_IDPSSODescriptor_POP_Attribute) */

struct zx_sa_Attribute_s* zx_md_IDPSSODescriptor_POP_Attribute(struct zx_md_IDPSSODescriptor_s* x)
{
  struct zx_sa_Attribute_s* y;
  if (!x) return 0;
  y = x->Attribute;
  if (y)
    x->Attribute = (struct zx_sa_Attribute_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_md_IDPSSODescriptor_PUSH_Attribute) */

void zx_md_IDPSSODescriptor_PUSH_Attribute(struct zx_md_IDPSSODescriptor_s* x, struct zx_sa_Attribute_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Attribute->gg.g;
  x->Attribute = z;
}

/* FUNC(zx_md_IDPSSODescriptor_REV_Attribute) */

void zx_md_IDPSSODescriptor_REV_Attribute(struct zx_md_IDPSSODescriptor_s* x)
{
  struct zx_sa_Attribute_s* nxt;
  struct zx_sa_Attribute_s* y;
  if (!x) return;
  y = x->Attribute;
  if (!y) return;
  x->Attribute = 0;
  while (y) {
    nxt = (struct zx_sa_Attribute_s*)y->gg.g.n;
    y->gg.g.n = &x->Attribute->gg.g;
    x->Attribute = y;
    y = nxt;
  }
}

/* FUNC(zx_md_IDPSSODescriptor_PUT_Attribute) */

void zx_md_IDPSSODescriptor_PUT_Attribute(struct zx_md_IDPSSODescriptor_s* x, int n, struct zx_sa_Attribute_s* z)
{
  struct zx_sa_Attribute_s* y;
  if (!x || !z) return;
  y = x->Attribute;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Attribute = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_sa_Attribute_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_md_IDPSSODescriptor_ADD_Attribute) */

void zx_md_IDPSSODescriptor_ADD_Attribute(struct zx_md_IDPSSODescriptor_s* x, int n, struct zx_sa_Attribute_s* z)
{
  struct zx_sa_Attribute_s* y;
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
    for (; y->gg.g.n; y = (struct zx_sa_Attribute_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Attribute; n > 1 && y; --n, y = (struct zx_sa_Attribute_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_md_IDPSSODescriptor_DEL_Attribute) */

void zx_md_IDPSSODescriptor_DEL_Attribute(struct zx_md_IDPSSODescriptor_s* x, int n)
{
  struct zx_sa_Attribute_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Attribute = (struct zx_sa_Attribute_s*)x->Attribute->gg.g.n;
    return;
  case -1:
    y = (struct zx_sa_Attribute_s*)x->Attribute;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_sa_Attribute_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Attribute; n > 1 && y->gg.g.n; --n, y = (struct zx_sa_Attribute_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif

/* FUNC(zx_md_IDPSSODescriptor_GET_ID) */
struct zx_str* zx_md_IDPSSODescriptor_GET_ID(struct zx_md_IDPSSODescriptor_s* x) { return x->ID; }
/* FUNC(zx_md_IDPSSODescriptor_PUT_ID) */
void zx_md_IDPSSODescriptor_PUT_ID(struct zx_md_IDPSSODescriptor_s* x, struct zx_str* y) { x->ID = y; }
/* FUNC(zx_md_IDPSSODescriptor_GET_validUntil) */
struct zx_str* zx_md_IDPSSODescriptor_GET_validUntil(struct zx_md_IDPSSODescriptor_s* x) { return x->validUntil; }
/* FUNC(zx_md_IDPSSODescriptor_PUT_validUntil) */
void zx_md_IDPSSODescriptor_PUT_validUntil(struct zx_md_IDPSSODescriptor_s* x, struct zx_str* y) { x->validUntil = y; }
/* FUNC(zx_md_IDPSSODescriptor_GET_cacheDuration) */
struct zx_str* zx_md_IDPSSODescriptor_GET_cacheDuration(struct zx_md_IDPSSODescriptor_s* x) { return x->cacheDuration; }
/* FUNC(zx_md_IDPSSODescriptor_PUT_cacheDuration) */
void zx_md_IDPSSODescriptor_PUT_cacheDuration(struct zx_md_IDPSSODescriptor_s* x, struct zx_str* y) { x->cacheDuration = y; }
/* FUNC(zx_md_IDPSSODescriptor_GET_protocolSupportEnumeration) */
struct zx_str* zx_md_IDPSSODescriptor_GET_protocolSupportEnumeration(struct zx_md_IDPSSODescriptor_s* x) { return x->protocolSupportEnumeration; }
/* FUNC(zx_md_IDPSSODescriptor_PUT_protocolSupportEnumeration) */
void zx_md_IDPSSODescriptor_PUT_protocolSupportEnumeration(struct zx_md_IDPSSODescriptor_s* x, struct zx_str* y) { x->protocolSupportEnumeration = y; }
/* FUNC(zx_md_IDPSSODescriptor_GET_errorURL) */
struct zx_str* zx_md_IDPSSODescriptor_GET_errorURL(struct zx_md_IDPSSODescriptor_s* x) { return x->errorURL; }
/* FUNC(zx_md_IDPSSODescriptor_PUT_errorURL) */
void zx_md_IDPSSODescriptor_PUT_errorURL(struct zx_md_IDPSSODescriptor_s* x, struct zx_str* y) { x->errorURL = y; }
/* FUNC(zx_md_IDPSSODescriptor_GET_WantAuthnRequestsSigned) */
struct zx_str* zx_md_IDPSSODescriptor_GET_WantAuthnRequestsSigned(struct zx_md_IDPSSODescriptor_s* x) { return x->WantAuthnRequestsSigned; }
/* FUNC(zx_md_IDPSSODescriptor_PUT_WantAuthnRequestsSigned) */
void zx_md_IDPSSODescriptor_PUT_WantAuthnRequestsSigned(struct zx_md_IDPSSODescriptor_s* x, struct zx_str* y) { x->WantAuthnRequestsSigned = y; }







#ifdef ZX_ENA_GETPUT

/* FUNC(zx_md_KeyDescriptor_NUM_KeyInfo) */

int zx_md_KeyDescriptor_NUM_KeyInfo(struct zx_md_KeyDescriptor_s* x)
{
  struct zx_ds_KeyInfo_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->KeyInfo; y; ++n, y = (struct zx_ds_KeyInfo_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_md_KeyDescriptor_GET_KeyInfo) */

struct zx_ds_KeyInfo_s* zx_md_KeyDescriptor_GET_KeyInfo(struct zx_md_KeyDescriptor_s* x, int n)
{
  struct zx_ds_KeyInfo_s* y;
  if (!x) return 0;
  for (y = x->KeyInfo; n>=0 && y; --n, y = (struct zx_ds_KeyInfo_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_md_KeyDescriptor_POP_KeyInfo) */

struct zx_ds_KeyInfo_s* zx_md_KeyDescriptor_POP_KeyInfo(struct zx_md_KeyDescriptor_s* x)
{
  struct zx_ds_KeyInfo_s* y;
  if (!x) return 0;
  y = x->KeyInfo;
  if (y)
    x->KeyInfo = (struct zx_ds_KeyInfo_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_md_KeyDescriptor_PUSH_KeyInfo) */

void zx_md_KeyDescriptor_PUSH_KeyInfo(struct zx_md_KeyDescriptor_s* x, struct zx_ds_KeyInfo_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->KeyInfo->gg.g;
  x->KeyInfo = z;
}

/* FUNC(zx_md_KeyDescriptor_REV_KeyInfo) */

void zx_md_KeyDescriptor_REV_KeyInfo(struct zx_md_KeyDescriptor_s* x)
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

/* FUNC(zx_md_KeyDescriptor_PUT_KeyInfo) */

void zx_md_KeyDescriptor_PUT_KeyInfo(struct zx_md_KeyDescriptor_s* x, int n, struct zx_ds_KeyInfo_s* z)
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

/* FUNC(zx_md_KeyDescriptor_ADD_KeyInfo) */

void zx_md_KeyDescriptor_ADD_KeyInfo(struct zx_md_KeyDescriptor_s* x, int n, struct zx_ds_KeyInfo_s* z)
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

/* FUNC(zx_md_KeyDescriptor_DEL_KeyInfo) */

void zx_md_KeyDescriptor_DEL_KeyInfo(struct zx_md_KeyDescriptor_s* x, int n)
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

/* FUNC(zx_md_KeyDescriptor_NUM_EncryptionMethod) */

int zx_md_KeyDescriptor_NUM_EncryptionMethod(struct zx_md_KeyDescriptor_s* x)
{
  struct zx_md_EncryptionMethod_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->EncryptionMethod; y; ++n, y = (struct zx_md_EncryptionMethod_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_md_KeyDescriptor_GET_EncryptionMethod) */

struct zx_md_EncryptionMethod_s* zx_md_KeyDescriptor_GET_EncryptionMethod(struct zx_md_KeyDescriptor_s* x, int n)
{
  struct zx_md_EncryptionMethod_s* y;
  if (!x) return 0;
  for (y = x->EncryptionMethod; n>=0 && y; --n, y = (struct zx_md_EncryptionMethod_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_md_KeyDescriptor_POP_EncryptionMethod) */

struct zx_md_EncryptionMethod_s* zx_md_KeyDescriptor_POP_EncryptionMethod(struct zx_md_KeyDescriptor_s* x)
{
  struct zx_md_EncryptionMethod_s* y;
  if (!x) return 0;
  y = x->EncryptionMethod;
  if (y)
    x->EncryptionMethod = (struct zx_md_EncryptionMethod_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_md_KeyDescriptor_PUSH_EncryptionMethod) */

void zx_md_KeyDescriptor_PUSH_EncryptionMethod(struct zx_md_KeyDescriptor_s* x, struct zx_md_EncryptionMethod_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->EncryptionMethod->gg.g;
  x->EncryptionMethod = z;
}

/* FUNC(zx_md_KeyDescriptor_REV_EncryptionMethod) */

void zx_md_KeyDescriptor_REV_EncryptionMethod(struct zx_md_KeyDescriptor_s* x)
{
  struct zx_md_EncryptionMethod_s* nxt;
  struct zx_md_EncryptionMethod_s* y;
  if (!x) return;
  y = x->EncryptionMethod;
  if (!y) return;
  x->EncryptionMethod = 0;
  while (y) {
    nxt = (struct zx_md_EncryptionMethod_s*)y->gg.g.n;
    y->gg.g.n = &x->EncryptionMethod->gg.g;
    x->EncryptionMethod = y;
    y = nxt;
  }
}

/* FUNC(zx_md_KeyDescriptor_PUT_EncryptionMethod) */

void zx_md_KeyDescriptor_PUT_EncryptionMethod(struct zx_md_KeyDescriptor_s* x, int n, struct zx_md_EncryptionMethod_s* z)
{
  struct zx_md_EncryptionMethod_s* y;
  if (!x || !z) return;
  y = x->EncryptionMethod;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->EncryptionMethod = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_md_EncryptionMethod_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_md_KeyDescriptor_ADD_EncryptionMethod) */

void zx_md_KeyDescriptor_ADD_EncryptionMethod(struct zx_md_KeyDescriptor_s* x, int n, struct zx_md_EncryptionMethod_s* z)
{
  struct zx_md_EncryptionMethod_s* y;
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
    for (; y->gg.g.n; y = (struct zx_md_EncryptionMethod_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->EncryptionMethod; n > 1 && y; --n, y = (struct zx_md_EncryptionMethod_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_md_KeyDescriptor_DEL_EncryptionMethod) */

void zx_md_KeyDescriptor_DEL_EncryptionMethod(struct zx_md_KeyDescriptor_s* x, int n)
{
  struct zx_md_EncryptionMethod_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->EncryptionMethod = (struct zx_md_EncryptionMethod_s*)x->EncryptionMethod->gg.g.n;
    return;
  case -1:
    y = (struct zx_md_EncryptionMethod_s*)x->EncryptionMethod;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_md_EncryptionMethod_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->EncryptionMethod; n > 1 && y->gg.g.n; --n, y = (struct zx_md_EncryptionMethod_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif

/* FUNC(zx_md_KeyDescriptor_GET_use) */
struct zx_str* zx_md_KeyDescriptor_GET_use(struct zx_md_KeyDescriptor_s* x) { return x->use; }
/* FUNC(zx_md_KeyDescriptor_PUT_use) */
void zx_md_KeyDescriptor_PUT_use(struct zx_md_KeyDescriptor_s* x, struct zx_str* y) { x->use = y; }





/* FUNC(zx_md_ManageNameIDService_GET_Binding) */
struct zx_str* zx_md_ManageNameIDService_GET_Binding(struct zx_md_ManageNameIDService_s* x) { return x->Binding; }
/* FUNC(zx_md_ManageNameIDService_PUT_Binding) */
void zx_md_ManageNameIDService_PUT_Binding(struct zx_md_ManageNameIDService_s* x, struct zx_str* y) { x->Binding = y; }
/* FUNC(zx_md_ManageNameIDService_GET_Location) */
struct zx_str* zx_md_ManageNameIDService_GET_Location(struct zx_md_ManageNameIDService_s* x) { return x->Location; }
/* FUNC(zx_md_ManageNameIDService_PUT_Location) */
void zx_md_ManageNameIDService_PUT_Location(struct zx_md_ManageNameIDService_s* x, struct zx_str* y) { x->Location = y; }
/* FUNC(zx_md_ManageNameIDService_GET_ResponseLocation) */
struct zx_str* zx_md_ManageNameIDService_GET_ResponseLocation(struct zx_md_ManageNameIDService_s* x) { return x->ResponseLocation; }
/* FUNC(zx_md_ManageNameIDService_PUT_ResponseLocation) */
void zx_md_ManageNameIDService_PUT_ResponseLocation(struct zx_md_ManageNameIDService_s* x, struct zx_str* y) { x->ResponseLocation = y; }
/* FUNC(zx_md_ManageNameIDService_GET_index) */
struct zx_str* zx_md_ManageNameIDService_GET_index(struct zx_md_ManageNameIDService_s* x) { return x->index; }
/* FUNC(zx_md_ManageNameIDService_PUT_index) */
void zx_md_ManageNameIDService_PUT_index(struct zx_md_ManageNameIDService_s* x, struct zx_str* y) { x->index = y; }
/* FUNC(zx_md_ManageNameIDService_GET_isDefault) */
struct zx_str* zx_md_ManageNameIDService_GET_isDefault(struct zx_md_ManageNameIDService_s* x) { return x->isDefault; }
/* FUNC(zx_md_ManageNameIDService_PUT_isDefault) */
void zx_md_ManageNameIDService_PUT_isDefault(struct zx_md_ManageNameIDService_s* x, struct zx_str* y) { x->isDefault = y; }





/* FUNC(zx_md_NameIDMappingService_GET_Binding) */
struct zx_str* zx_md_NameIDMappingService_GET_Binding(struct zx_md_NameIDMappingService_s* x) { return x->Binding; }
/* FUNC(zx_md_NameIDMappingService_PUT_Binding) */
void zx_md_NameIDMappingService_PUT_Binding(struct zx_md_NameIDMappingService_s* x, struct zx_str* y) { x->Binding = y; }
/* FUNC(zx_md_NameIDMappingService_GET_Location) */
struct zx_str* zx_md_NameIDMappingService_GET_Location(struct zx_md_NameIDMappingService_s* x) { return x->Location; }
/* FUNC(zx_md_NameIDMappingService_PUT_Location) */
void zx_md_NameIDMappingService_PUT_Location(struct zx_md_NameIDMappingService_s* x, struct zx_str* y) { x->Location = y; }
/* FUNC(zx_md_NameIDMappingService_GET_ResponseLocation) */
struct zx_str* zx_md_NameIDMappingService_GET_ResponseLocation(struct zx_md_NameIDMappingService_s* x) { return x->ResponseLocation; }
/* FUNC(zx_md_NameIDMappingService_PUT_ResponseLocation) */
void zx_md_NameIDMappingService_PUT_ResponseLocation(struct zx_md_NameIDMappingService_s* x, struct zx_str* y) { x->ResponseLocation = y; }
/* FUNC(zx_md_NameIDMappingService_GET_index) */
struct zx_str* zx_md_NameIDMappingService_GET_index(struct zx_md_NameIDMappingService_s* x) { return x->index; }
/* FUNC(zx_md_NameIDMappingService_PUT_index) */
void zx_md_NameIDMappingService_PUT_index(struct zx_md_NameIDMappingService_s* x, struct zx_str* y) { x->index = y; }
/* FUNC(zx_md_NameIDMappingService_GET_isDefault) */
struct zx_str* zx_md_NameIDMappingService_GET_isDefault(struct zx_md_NameIDMappingService_s* x) { return x->isDefault; }
/* FUNC(zx_md_NameIDMappingService_PUT_isDefault) */
void zx_md_NameIDMappingService_PUT_isDefault(struct zx_md_NameIDMappingService_s* x, struct zx_str* y) { x->isDefault = y; }







#ifdef ZX_ENA_GETPUT

/* FUNC(zx_md_Organization_NUM_Extensions) */

int zx_md_Organization_NUM_Extensions(struct zx_md_Organization_s* x)
{
  struct zx_md_Extensions_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Extensions; y; ++n, y = (struct zx_md_Extensions_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_md_Organization_GET_Extensions) */

struct zx_md_Extensions_s* zx_md_Organization_GET_Extensions(struct zx_md_Organization_s* x, int n)
{
  struct zx_md_Extensions_s* y;
  if (!x) return 0;
  for (y = x->Extensions; n>=0 && y; --n, y = (struct zx_md_Extensions_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_md_Organization_POP_Extensions) */

struct zx_md_Extensions_s* zx_md_Organization_POP_Extensions(struct zx_md_Organization_s* x)
{
  struct zx_md_Extensions_s* y;
  if (!x) return 0;
  y = x->Extensions;
  if (y)
    x->Extensions = (struct zx_md_Extensions_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_md_Organization_PUSH_Extensions) */

void zx_md_Organization_PUSH_Extensions(struct zx_md_Organization_s* x, struct zx_md_Extensions_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Extensions->gg.g;
  x->Extensions = z;
}

/* FUNC(zx_md_Organization_REV_Extensions) */

void zx_md_Organization_REV_Extensions(struct zx_md_Organization_s* x)
{
  struct zx_md_Extensions_s* nxt;
  struct zx_md_Extensions_s* y;
  if (!x) return;
  y = x->Extensions;
  if (!y) return;
  x->Extensions = 0;
  while (y) {
    nxt = (struct zx_md_Extensions_s*)y->gg.g.n;
    y->gg.g.n = &x->Extensions->gg.g;
    x->Extensions = y;
    y = nxt;
  }
}

/* FUNC(zx_md_Organization_PUT_Extensions) */

void zx_md_Organization_PUT_Extensions(struct zx_md_Organization_s* x, int n, struct zx_md_Extensions_s* z)
{
  struct zx_md_Extensions_s* y;
  if (!x || !z) return;
  y = x->Extensions;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Extensions = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_md_Extensions_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_md_Organization_ADD_Extensions) */

void zx_md_Organization_ADD_Extensions(struct zx_md_Organization_s* x, int n, struct zx_md_Extensions_s* z)
{
  struct zx_md_Extensions_s* y;
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
    for (; y->gg.g.n; y = (struct zx_md_Extensions_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Extensions; n > 1 && y; --n, y = (struct zx_md_Extensions_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_md_Organization_DEL_Extensions) */

void zx_md_Organization_DEL_Extensions(struct zx_md_Organization_s* x, int n)
{
  struct zx_md_Extensions_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Extensions = (struct zx_md_Extensions_s*)x->Extensions->gg.g.n;
    return;
  case -1:
    y = (struct zx_md_Extensions_s*)x->Extensions;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_md_Extensions_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Extensions; n > 1 && y->gg.g.n; --n, y = (struct zx_md_Extensions_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_md_Organization_NUM_OrganizationName) */

int zx_md_Organization_NUM_OrganizationName(struct zx_md_Organization_s* x)
{
  struct zx_md_OrganizationName_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->OrganizationName; y; ++n, y = (struct zx_md_OrganizationName_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_md_Organization_GET_OrganizationName) */

struct zx_md_OrganizationName_s* zx_md_Organization_GET_OrganizationName(struct zx_md_Organization_s* x, int n)
{
  struct zx_md_OrganizationName_s* y;
  if (!x) return 0;
  for (y = x->OrganizationName; n>=0 && y; --n, y = (struct zx_md_OrganizationName_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_md_Organization_POP_OrganizationName) */

struct zx_md_OrganizationName_s* zx_md_Organization_POP_OrganizationName(struct zx_md_Organization_s* x)
{
  struct zx_md_OrganizationName_s* y;
  if (!x) return 0;
  y = x->OrganizationName;
  if (y)
    x->OrganizationName = (struct zx_md_OrganizationName_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_md_Organization_PUSH_OrganizationName) */

void zx_md_Organization_PUSH_OrganizationName(struct zx_md_Organization_s* x, struct zx_md_OrganizationName_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->OrganizationName->gg.g;
  x->OrganizationName = z;
}

/* FUNC(zx_md_Organization_REV_OrganizationName) */

void zx_md_Organization_REV_OrganizationName(struct zx_md_Organization_s* x)
{
  struct zx_md_OrganizationName_s* nxt;
  struct zx_md_OrganizationName_s* y;
  if (!x) return;
  y = x->OrganizationName;
  if (!y) return;
  x->OrganizationName = 0;
  while (y) {
    nxt = (struct zx_md_OrganizationName_s*)y->gg.g.n;
    y->gg.g.n = &x->OrganizationName->gg.g;
    x->OrganizationName = y;
    y = nxt;
  }
}

/* FUNC(zx_md_Organization_PUT_OrganizationName) */

void zx_md_Organization_PUT_OrganizationName(struct zx_md_Organization_s* x, int n, struct zx_md_OrganizationName_s* z)
{
  struct zx_md_OrganizationName_s* y;
  if (!x || !z) return;
  y = x->OrganizationName;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->OrganizationName = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_md_OrganizationName_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_md_Organization_ADD_OrganizationName) */

void zx_md_Organization_ADD_OrganizationName(struct zx_md_Organization_s* x, int n, struct zx_md_OrganizationName_s* z)
{
  struct zx_md_OrganizationName_s* y;
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
    for (; y->gg.g.n; y = (struct zx_md_OrganizationName_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->OrganizationName; n > 1 && y; --n, y = (struct zx_md_OrganizationName_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_md_Organization_DEL_OrganizationName) */

void zx_md_Organization_DEL_OrganizationName(struct zx_md_Organization_s* x, int n)
{
  struct zx_md_OrganizationName_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->OrganizationName = (struct zx_md_OrganizationName_s*)x->OrganizationName->gg.g.n;
    return;
  case -1:
    y = (struct zx_md_OrganizationName_s*)x->OrganizationName;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_md_OrganizationName_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->OrganizationName; n > 1 && y->gg.g.n; --n, y = (struct zx_md_OrganizationName_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_md_Organization_NUM_OrganizationDisplayName) */

int zx_md_Organization_NUM_OrganizationDisplayName(struct zx_md_Organization_s* x)
{
  struct zx_md_OrganizationDisplayName_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->OrganizationDisplayName; y; ++n, y = (struct zx_md_OrganizationDisplayName_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_md_Organization_GET_OrganizationDisplayName) */

struct zx_md_OrganizationDisplayName_s* zx_md_Organization_GET_OrganizationDisplayName(struct zx_md_Organization_s* x, int n)
{
  struct zx_md_OrganizationDisplayName_s* y;
  if (!x) return 0;
  for (y = x->OrganizationDisplayName; n>=0 && y; --n, y = (struct zx_md_OrganizationDisplayName_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_md_Organization_POP_OrganizationDisplayName) */

struct zx_md_OrganizationDisplayName_s* zx_md_Organization_POP_OrganizationDisplayName(struct zx_md_Organization_s* x)
{
  struct zx_md_OrganizationDisplayName_s* y;
  if (!x) return 0;
  y = x->OrganizationDisplayName;
  if (y)
    x->OrganizationDisplayName = (struct zx_md_OrganizationDisplayName_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_md_Organization_PUSH_OrganizationDisplayName) */

void zx_md_Organization_PUSH_OrganizationDisplayName(struct zx_md_Organization_s* x, struct zx_md_OrganizationDisplayName_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->OrganizationDisplayName->gg.g;
  x->OrganizationDisplayName = z;
}

/* FUNC(zx_md_Organization_REV_OrganizationDisplayName) */

void zx_md_Organization_REV_OrganizationDisplayName(struct zx_md_Organization_s* x)
{
  struct zx_md_OrganizationDisplayName_s* nxt;
  struct zx_md_OrganizationDisplayName_s* y;
  if (!x) return;
  y = x->OrganizationDisplayName;
  if (!y) return;
  x->OrganizationDisplayName = 0;
  while (y) {
    nxt = (struct zx_md_OrganizationDisplayName_s*)y->gg.g.n;
    y->gg.g.n = &x->OrganizationDisplayName->gg.g;
    x->OrganizationDisplayName = y;
    y = nxt;
  }
}

/* FUNC(zx_md_Organization_PUT_OrganizationDisplayName) */

void zx_md_Organization_PUT_OrganizationDisplayName(struct zx_md_Organization_s* x, int n, struct zx_md_OrganizationDisplayName_s* z)
{
  struct zx_md_OrganizationDisplayName_s* y;
  if (!x || !z) return;
  y = x->OrganizationDisplayName;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->OrganizationDisplayName = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_md_OrganizationDisplayName_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_md_Organization_ADD_OrganizationDisplayName) */

void zx_md_Organization_ADD_OrganizationDisplayName(struct zx_md_Organization_s* x, int n, struct zx_md_OrganizationDisplayName_s* z)
{
  struct zx_md_OrganizationDisplayName_s* y;
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
    for (; y->gg.g.n; y = (struct zx_md_OrganizationDisplayName_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->OrganizationDisplayName; n > 1 && y; --n, y = (struct zx_md_OrganizationDisplayName_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_md_Organization_DEL_OrganizationDisplayName) */

void zx_md_Organization_DEL_OrganizationDisplayName(struct zx_md_Organization_s* x, int n)
{
  struct zx_md_OrganizationDisplayName_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->OrganizationDisplayName = (struct zx_md_OrganizationDisplayName_s*)x->OrganizationDisplayName->gg.g.n;
    return;
  case -1:
    y = (struct zx_md_OrganizationDisplayName_s*)x->OrganizationDisplayName;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_md_OrganizationDisplayName_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->OrganizationDisplayName; n > 1 && y->gg.g.n; --n, y = (struct zx_md_OrganizationDisplayName_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_md_Organization_NUM_OrganizationURL) */

int zx_md_Organization_NUM_OrganizationURL(struct zx_md_Organization_s* x)
{
  struct zx_md_OrganizationURL_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->OrganizationURL; y; ++n, y = (struct zx_md_OrganizationURL_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_md_Organization_GET_OrganizationURL) */

struct zx_md_OrganizationURL_s* zx_md_Organization_GET_OrganizationURL(struct zx_md_Organization_s* x, int n)
{
  struct zx_md_OrganizationURL_s* y;
  if (!x) return 0;
  for (y = x->OrganizationURL; n>=0 && y; --n, y = (struct zx_md_OrganizationURL_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_md_Organization_POP_OrganizationURL) */

struct zx_md_OrganizationURL_s* zx_md_Organization_POP_OrganizationURL(struct zx_md_Organization_s* x)
{
  struct zx_md_OrganizationURL_s* y;
  if (!x) return 0;
  y = x->OrganizationURL;
  if (y)
    x->OrganizationURL = (struct zx_md_OrganizationURL_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_md_Organization_PUSH_OrganizationURL) */

void zx_md_Organization_PUSH_OrganizationURL(struct zx_md_Organization_s* x, struct zx_md_OrganizationURL_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->OrganizationURL->gg.g;
  x->OrganizationURL = z;
}

/* FUNC(zx_md_Organization_REV_OrganizationURL) */

void zx_md_Organization_REV_OrganizationURL(struct zx_md_Organization_s* x)
{
  struct zx_md_OrganizationURL_s* nxt;
  struct zx_md_OrganizationURL_s* y;
  if (!x) return;
  y = x->OrganizationURL;
  if (!y) return;
  x->OrganizationURL = 0;
  while (y) {
    nxt = (struct zx_md_OrganizationURL_s*)y->gg.g.n;
    y->gg.g.n = &x->OrganizationURL->gg.g;
    x->OrganizationURL = y;
    y = nxt;
  }
}

/* FUNC(zx_md_Organization_PUT_OrganizationURL) */

void zx_md_Organization_PUT_OrganizationURL(struct zx_md_Organization_s* x, int n, struct zx_md_OrganizationURL_s* z)
{
  struct zx_md_OrganizationURL_s* y;
  if (!x || !z) return;
  y = x->OrganizationURL;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->OrganizationURL = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_md_OrganizationURL_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_md_Organization_ADD_OrganizationURL) */

void zx_md_Organization_ADD_OrganizationURL(struct zx_md_Organization_s* x, int n, struct zx_md_OrganizationURL_s* z)
{
  struct zx_md_OrganizationURL_s* y;
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
    for (; y->gg.g.n; y = (struct zx_md_OrganizationURL_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->OrganizationURL; n > 1 && y; --n, y = (struct zx_md_OrganizationURL_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_md_Organization_DEL_OrganizationURL) */

void zx_md_Organization_DEL_OrganizationURL(struct zx_md_Organization_s* x, int n)
{
  struct zx_md_OrganizationURL_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->OrganizationURL = (struct zx_md_OrganizationURL_s*)x->OrganizationURL->gg.g.n;
    return;
  case -1:
    y = (struct zx_md_OrganizationURL_s*)x->OrganizationURL;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_md_OrganizationURL_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->OrganizationURL; n > 1 && y->gg.g.n; --n, y = (struct zx_md_OrganizationURL_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif






/* FUNC(zx_md_OrganizationDisplayName_GET_lang) */
struct zx_str* zx_md_OrganizationDisplayName_GET_lang(struct zx_md_OrganizationDisplayName_s* x) { return x->lang; }
/* FUNC(zx_md_OrganizationDisplayName_PUT_lang) */
void zx_md_OrganizationDisplayName_PUT_lang(struct zx_md_OrganizationDisplayName_s* x, struct zx_str* y) { x->lang = y; }





/* FUNC(zx_md_OrganizationName_GET_lang) */
struct zx_str* zx_md_OrganizationName_GET_lang(struct zx_md_OrganizationName_s* x) { return x->lang; }
/* FUNC(zx_md_OrganizationName_PUT_lang) */
void zx_md_OrganizationName_PUT_lang(struct zx_md_OrganizationName_s* x, struct zx_str* y) { x->lang = y; }





/* FUNC(zx_md_OrganizationURL_GET_lang) */
struct zx_str* zx_md_OrganizationURL_GET_lang(struct zx_md_OrganizationURL_s* x) { return x->lang; }
/* FUNC(zx_md_OrganizationURL_PUT_lang) */
void zx_md_OrganizationURL_PUT_lang(struct zx_md_OrganizationURL_s* x, struct zx_str* y) { x->lang = y; }







#ifdef ZX_ENA_GETPUT

/* FUNC(zx_md_PDPDescriptor_NUM_Signature) */

int zx_md_PDPDescriptor_NUM_Signature(struct zx_md_PDPDescriptor_s* x)
{
  struct zx_ds_Signature_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Signature; y; ++n, y = (struct zx_ds_Signature_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_md_PDPDescriptor_GET_Signature) */

struct zx_ds_Signature_s* zx_md_PDPDescriptor_GET_Signature(struct zx_md_PDPDescriptor_s* x, int n)
{
  struct zx_ds_Signature_s* y;
  if (!x) return 0;
  for (y = x->Signature; n>=0 && y; --n, y = (struct zx_ds_Signature_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_md_PDPDescriptor_POP_Signature) */

struct zx_ds_Signature_s* zx_md_PDPDescriptor_POP_Signature(struct zx_md_PDPDescriptor_s* x)
{
  struct zx_ds_Signature_s* y;
  if (!x) return 0;
  y = x->Signature;
  if (y)
    x->Signature = (struct zx_ds_Signature_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_md_PDPDescriptor_PUSH_Signature) */

void zx_md_PDPDescriptor_PUSH_Signature(struct zx_md_PDPDescriptor_s* x, struct zx_ds_Signature_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Signature->gg.g;
  x->Signature = z;
}

/* FUNC(zx_md_PDPDescriptor_REV_Signature) */

void zx_md_PDPDescriptor_REV_Signature(struct zx_md_PDPDescriptor_s* x)
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

/* FUNC(zx_md_PDPDescriptor_PUT_Signature) */

void zx_md_PDPDescriptor_PUT_Signature(struct zx_md_PDPDescriptor_s* x, int n, struct zx_ds_Signature_s* z)
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

/* FUNC(zx_md_PDPDescriptor_ADD_Signature) */

void zx_md_PDPDescriptor_ADD_Signature(struct zx_md_PDPDescriptor_s* x, int n, struct zx_ds_Signature_s* z)
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

/* FUNC(zx_md_PDPDescriptor_DEL_Signature) */

void zx_md_PDPDescriptor_DEL_Signature(struct zx_md_PDPDescriptor_s* x, int n)
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

/* FUNC(zx_md_PDPDescriptor_NUM_Extensions) */

int zx_md_PDPDescriptor_NUM_Extensions(struct zx_md_PDPDescriptor_s* x)
{
  struct zx_md_Extensions_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Extensions; y; ++n, y = (struct zx_md_Extensions_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_md_PDPDescriptor_GET_Extensions) */

struct zx_md_Extensions_s* zx_md_PDPDescriptor_GET_Extensions(struct zx_md_PDPDescriptor_s* x, int n)
{
  struct zx_md_Extensions_s* y;
  if (!x) return 0;
  for (y = x->Extensions; n>=0 && y; --n, y = (struct zx_md_Extensions_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_md_PDPDescriptor_POP_Extensions) */

struct zx_md_Extensions_s* zx_md_PDPDescriptor_POP_Extensions(struct zx_md_PDPDescriptor_s* x)
{
  struct zx_md_Extensions_s* y;
  if (!x) return 0;
  y = x->Extensions;
  if (y)
    x->Extensions = (struct zx_md_Extensions_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_md_PDPDescriptor_PUSH_Extensions) */

void zx_md_PDPDescriptor_PUSH_Extensions(struct zx_md_PDPDescriptor_s* x, struct zx_md_Extensions_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Extensions->gg.g;
  x->Extensions = z;
}

/* FUNC(zx_md_PDPDescriptor_REV_Extensions) */

void zx_md_PDPDescriptor_REV_Extensions(struct zx_md_PDPDescriptor_s* x)
{
  struct zx_md_Extensions_s* nxt;
  struct zx_md_Extensions_s* y;
  if (!x) return;
  y = x->Extensions;
  if (!y) return;
  x->Extensions = 0;
  while (y) {
    nxt = (struct zx_md_Extensions_s*)y->gg.g.n;
    y->gg.g.n = &x->Extensions->gg.g;
    x->Extensions = y;
    y = nxt;
  }
}

/* FUNC(zx_md_PDPDescriptor_PUT_Extensions) */

void zx_md_PDPDescriptor_PUT_Extensions(struct zx_md_PDPDescriptor_s* x, int n, struct zx_md_Extensions_s* z)
{
  struct zx_md_Extensions_s* y;
  if (!x || !z) return;
  y = x->Extensions;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Extensions = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_md_Extensions_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_md_PDPDescriptor_ADD_Extensions) */

void zx_md_PDPDescriptor_ADD_Extensions(struct zx_md_PDPDescriptor_s* x, int n, struct zx_md_Extensions_s* z)
{
  struct zx_md_Extensions_s* y;
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
    for (; y->gg.g.n; y = (struct zx_md_Extensions_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Extensions; n > 1 && y; --n, y = (struct zx_md_Extensions_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_md_PDPDescriptor_DEL_Extensions) */

void zx_md_PDPDescriptor_DEL_Extensions(struct zx_md_PDPDescriptor_s* x, int n)
{
  struct zx_md_Extensions_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Extensions = (struct zx_md_Extensions_s*)x->Extensions->gg.g.n;
    return;
  case -1:
    y = (struct zx_md_Extensions_s*)x->Extensions;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_md_Extensions_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Extensions; n > 1 && y->gg.g.n; --n, y = (struct zx_md_Extensions_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_md_PDPDescriptor_NUM_KeyDescriptor) */

int zx_md_PDPDescriptor_NUM_KeyDescriptor(struct zx_md_PDPDescriptor_s* x)
{
  struct zx_md_KeyDescriptor_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->KeyDescriptor; y; ++n, y = (struct zx_md_KeyDescriptor_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_md_PDPDescriptor_GET_KeyDescriptor) */

struct zx_md_KeyDescriptor_s* zx_md_PDPDescriptor_GET_KeyDescriptor(struct zx_md_PDPDescriptor_s* x, int n)
{
  struct zx_md_KeyDescriptor_s* y;
  if (!x) return 0;
  for (y = x->KeyDescriptor; n>=0 && y; --n, y = (struct zx_md_KeyDescriptor_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_md_PDPDescriptor_POP_KeyDescriptor) */

struct zx_md_KeyDescriptor_s* zx_md_PDPDescriptor_POP_KeyDescriptor(struct zx_md_PDPDescriptor_s* x)
{
  struct zx_md_KeyDescriptor_s* y;
  if (!x) return 0;
  y = x->KeyDescriptor;
  if (y)
    x->KeyDescriptor = (struct zx_md_KeyDescriptor_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_md_PDPDescriptor_PUSH_KeyDescriptor) */

void zx_md_PDPDescriptor_PUSH_KeyDescriptor(struct zx_md_PDPDescriptor_s* x, struct zx_md_KeyDescriptor_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->KeyDescriptor->gg.g;
  x->KeyDescriptor = z;
}

/* FUNC(zx_md_PDPDescriptor_REV_KeyDescriptor) */

void zx_md_PDPDescriptor_REV_KeyDescriptor(struct zx_md_PDPDescriptor_s* x)
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

/* FUNC(zx_md_PDPDescriptor_PUT_KeyDescriptor) */

void zx_md_PDPDescriptor_PUT_KeyDescriptor(struct zx_md_PDPDescriptor_s* x, int n, struct zx_md_KeyDescriptor_s* z)
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

/* FUNC(zx_md_PDPDescriptor_ADD_KeyDescriptor) */

void zx_md_PDPDescriptor_ADD_KeyDescriptor(struct zx_md_PDPDescriptor_s* x, int n, struct zx_md_KeyDescriptor_s* z)
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

/* FUNC(zx_md_PDPDescriptor_DEL_KeyDescriptor) */

void zx_md_PDPDescriptor_DEL_KeyDescriptor(struct zx_md_PDPDescriptor_s* x, int n)
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

/* FUNC(zx_md_PDPDescriptor_NUM_Organization) */

int zx_md_PDPDescriptor_NUM_Organization(struct zx_md_PDPDescriptor_s* x)
{
  struct zx_md_Organization_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Organization; y; ++n, y = (struct zx_md_Organization_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_md_PDPDescriptor_GET_Organization) */

struct zx_md_Organization_s* zx_md_PDPDescriptor_GET_Organization(struct zx_md_PDPDescriptor_s* x, int n)
{
  struct zx_md_Organization_s* y;
  if (!x) return 0;
  for (y = x->Organization; n>=0 && y; --n, y = (struct zx_md_Organization_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_md_PDPDescriptor_POP_Organization) */

struct zx_md_Organization_s* zx_md_PDPDescriptor_POP_Organization(struct zx_md_PDPDescriptor_s* x)
{
  struct zx_md_Organization_s* y;
  if (!x) return 0;
  y = x->Organization;
  if (y)
    x->Organization = (struct zx_md_Organization_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_md_PDPDescriptor_PUSH_Organization) */

void zx_md_PDPDescriptor_PUSH_Organization(struct zx_md_PDPDescriptor_s* x, struct zx_md_Organization_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Organization->gg.g;
  x->Organization = z;
}

/* FUNC(zx_md_PDPDescriptor_REV_Organization) */

void zx_md_PDPDescriptor_REV_Organization(struct zx_md_PDPDescriptor_s* x)
{
  struct zx_md_Organization_s* nxt;
  struct zx_md_Organization_s* y;
  if (!x) return;
  y = x->Organization;
  if (!y) return;
  x->Organization = 0;
  while (y) {
    nxt = (struct zx_md_Organization_s*)y->gg.g.n;
    y->gg.g.n = &x->Organization->gg.g;
    x->Organization = y;
    y = nxt;
  }
}

/* FUNC(zx_md_PDPDescriptor_PUT_Organization) */

void zx_md_PDPDescriptor_PUT_Organization(struct zx_md_PDPDescriptor_s* x, int n, struct zx_md_Organization_s* z)
{
  struct zx_md_Organization_s* y;
  if (!x || !z) return;
  y = x->Organization;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Organization = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_md_Organization_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_md_PDPDescriptor_ADD_Organization) */

void zx_md_PDPDescriptor_ADD_Organization(struct zx_md_PDPDescriptor_s* x, int n, struct zx_md_Organization_s* z)
{
  struct zx_md_Organization_s* y;
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
    for (; y->gg.g.n; y = (struct zx_md_Organization_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Organization; n > 1 && y; --n, y = (struct zx_md_Organization_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_md_PDPDescriptor_DEL_Organization) */

void zx_md_PDPDescriptor_DEL_Organization(struct zx_md_PDPDescriptor_s* x, int n)
{
  struct zx_md_Organization_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Organization = (struct zx_md_Organization_s*)x->Organization->gg.g.n;
    return;
  case -1:
    y = (struct zx_md_Organization_s*)x->Organization;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_md_Organization_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Organization; n > 1 && y->gg.g.n; --n, y = (struct zx_md_Organization_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_md_PDPDescriptor_NUM_ContactPerson) */

int zx_md_PDPDescriptor_NUM_ContactPerson(struct zx_md_PDPDescriptor_s* x)
{
  struct zx_md_ContactPerson_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->ContactPerson; y; ++n, y = (struct zx_md_ContactPerson_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_md_PDPDescriptor_GET_ContactPerson) */

struct zx_md_ContactPerson_s* zx_md_PDPDescriptor_GET_ContactPerson(struct zx_md_PDPDescriptor_s* x, int n)
{
  struct zx_md_ContactPerson_s* y;
  if (!x) return 0;
  for (y = x->ContactPerson; n>=0 && y; --n, y = (struct zx_md_ContactPerson_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_md_PDPDescriptor_POP_ContactPerson) */

struct zx_md_ContactPerson_s* zx_md_PDPDescriptor_POP_ContactPerson(struct zx_md_PDPDescriptor_s* x)
{
  struct zx_md_ContactPerson_s* y;
  if (!x) return 0;
  y = x->ContactPerson;
  if (y)
    x->ContactPerson = (struct zx_md_ContactPerson_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_md_PDPDescriptor_PUSH_ContactPerson) */

void zx_md_PDPDescriptor_PUSH_ContactPerson(struct zx_md_PDPDescriptor_s* x, struct zx_md_ContactPerson_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->ContactPerson->gg.g;
  x->ContactPerson = z;
}

/* FUNC(zx_md_PDPDescriptor_REV_ContactPerson) */

void zx_md_PDPDescriptor_REV_ContactPerson(struct zx_md_PDPDescriptor_s* x)
{
  struct zx_md_ContactPerson_s* nxt;
  struct zx_md_ContactPerson_s* y;
  if (!x) return;
  y = x->ContactPerson;
  if (!y) return;
  x->ContactPerson = 0;
  while (y) {
    nxt = (struct zx_md_ContactPerson_s*)y->gg.g.n;
    y->gg.g.n = &x->ContactPerson->gg.g;
    x->ContactPerson = y;
    y = nxt;
  }
}

/* FUNC(zx_md_PDPDescriptor_PUT_ContactPerson) */

void zx_md_PDPDescriptor_PUT_ContactPerson(struct zx_md_PDPDescriptor_s* x, int n, struct zx_md_ContactPerson_s* z)
{
  struct zx_md_ContactPerson_s* y;
  if (!x || !z) return;
  y = x->ContactPerson;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->ContactPerson = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_md_ContactPerson_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_md_PDPDescriptor_ADD_ContactPerson) */

void zx_md_PDPDescriptor_ADD_ContactPerson(struct zx_md_PDPDescriptor_s* x, int n, struct zx_md_ContactPerson_s* z)
{
  struct zx_md_ContactPerson_s* y;
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
    for (; y->gg.g.n; y = (struct zx_md_ContactPerson_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->ContactPerson; n > 1 && y; --n, y = (struct zx_md_ContactPerson_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_md_PDPDescriptor_DEL_ContactPerson) */

void zx_md_PDPDescriptor_DEL_ContactPerson(struct zx_md_PDPDescriptor_s* x, int n)
{
  struct zx_md_ContactPerson_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->ContactPerson = (struct zx_md_ContactPerson_s*)x->ContactPerson->gg.g.n;
    return;
  case -1:
    y = (struct zx_md_ContactPerson_s*)x->ContactPerson;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_md_ContactPerson_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->ContactPerson; n > 1 && y->gg.g.n; --n, y = (struct zx_md_ContactPerson_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_md_PDPDescriptor_NUM_AuthzService) */

int zx_md_PDPDescriptor_NUM_AuthzService(struct zx_md_PDPDescriptor_s* x)
{
  struct zx_md_AuthzService_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->AuthzService; y; ++n, y = (struct zx_md_AuthzService_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_md_PDPDescriptor_GET_AuthzService) */

struct zx_md_AuthzService_s* zx_md_PDPDescriptor_GET_AuthzService(struct zx_md_PDPDescriptor_s* x, int n)
{
  struct zx_md_AuthzService_s* y;
  if (!x) return 0;
  for (y = x->AuthzService; n>=0 && y; --n, y = (struct zx_md_AuthzService_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_md_PDPDescriptor_POP_AuthzService) */

struct zx_md_AuthzService_s* zx_md_PDPDescriptor_POP_AuthzService(struct zx_md_PDPDescriptor_s* x)
{
  struct zx_md_AuthzService_s* y;
  if (!x) return 0;
  y = x->AuthzService;
  if (y)
    x->AuthzService = (struct zx_md_AuthzService_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_md_PDPDescriptor_PUSH_AuthzService) */

void zx_md_PDPDescriptor_PUSH_AuthzService(struct zx_md_PDPDescriptor_s* x, struct zx_md_AuthzService_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->AuthzService->gg.g;
  x->AuthzService = z;
}

/* FUNC(zx_md_PDPDescriptor_REV_AuthzService) */

void zx_md_PDPDescriptor_REV_AuthzService(struct zx_md_PDPDescriptor_s* x)
{
  struct zx_md_AuthzService_s* nxt;
  struct zx_md_AuthzService_s* y;
  if (!x) return;
  y = x->AuthzService;
  if (!y) return;
  x->AuthzService = 0;
  while (y) {
    nxt = (struct zx_md_AuthzService_s*)y->gg.g.n;
    y->gg.g.n = &x->AuthzService->gg.g;
    x->AuthzService = y;
    y = nxt;
  }
}

/* FUNC(zx_md_PDPDescriptor_PUT_AuthzService) */

void zx_md_PDPDescriptor_PUT_AuthzService(struct zx_md_PDPDescriptor_s* x, int n, struct zx_md_AuthzService_s* z)
{
  struct zx_md_AuthzService_s* y;
  if (!x || !z) return;
  y = x->AuthzService;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->AuthzService = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_md_AuthzService_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_md_PDPDescriptor_ADD_AuthzService) */

void zx_md_PDPDescriptor_ADD_AuthzService(struct zx_md_PDPDescriptor_s* x, int n, struct zx_md_AuthzService_s* z)
{
  struct zx_md_AuthzService_s* y;
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
    for (; y->gg.g.n; y = (struct zx_md_AuthzService_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->AuthzService; n > 1 && y; --n, y = (struct zx_md_AuthzService_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_md_PDPDescriptor_DEL_AuthzService) */

void zx_md_PDPDescriptor_DEL_AuthzService(struct zx_md_PDPDescriptor_s* x, int n)
{
  struct zx_md_AuthzService_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->AuthzService = (struct zx_md_AuthzService_s*)x->AuthzService->gg.g.n;
    return;
  case -1:
    y = (struct zx_md_AuthzService_s*)x->AuthzService;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_md_AuthzService_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->AuthzService; n > 1 && y->gg.g.n; --n, y = (struct zx_md_AuthzService_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_md_PDPDescriptor_NUM_AssertionIDRequestService) */

int zx_md_PDPDescriptor_NUM_AssertionIDRequestService(struct zx_md_PDPDescriptor_s* x)
{
  struct zx_md_AssertionIDRequestService_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->AssertionIDRequestService; y; ++n, y = (struct zx_md_AssertionIDRequestService_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_md_PDPDescriptor_GET_AssertionIDRequestService) */

struct zx_md_AssertionIDRequestService_s* zx_md_PDPDescriptor_GET_AssertionIDRequestService(struct zx_md_PDPDescriptor_s* x, int n)
{
  struct zx_md_AssertionIDRequestService_s* y;
  if (!x) return 0;
  for (y = x->AssertionIDRequestService; n>=0 && y; --n, y = (struct zx_md_AssertionIDRequestService_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_md_PDPDescriptor_POP_AssertionIDRequestService) */

struct zx_md_AssertionIDRequestService_s* zx_md_PDPDescriptor_POP_AssertionIDRequestService(struct zx_md_PDPDescriptor_s* x)
{
  struct zx_md_AssertionIDRequestService_s* y;
  if (!x) return 0;
  y = x->AssertionIDRequestService;
  if (y)
    x->AssertionIDRequestService = (struct zx_md_AssertionIDRequestService_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_md_PDPDescriptor_PUSH_AssertionIDRequestService) */

void zx_md_PDPDescriptor_PUSH_AssertionIDRequestService(struct zx_md_PDPDescriptor_s* x, struct zx_md_AssertionIDRequestService_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->AssertionIDRequestService->gg.g;
  x->AssertionIDRequestService = z;
}

/* FUNC(zx_md_PDPDescriptor_REV_AssertionIDRequestService) */

void zx_md_PDPDescriptor_REV_AssertionIDRequestService(struct zx_md_PDPDescriptor_s* x)
{
  struct zx_md_AssertionIDRequestService_s* nxt;
  struct zx_md_AssertionIDRequestService_s* y;
  if (!x) return;
  y = x->AssertionIDRequestService;
  if (!y) return;
  x->AssertionIDRequestService = 0;
  while (y) {
    nxt = (struct zx_md_AssertionIDRequestService_s*)y->gg.g.n;
    y->gg.g.n = &x->AssertionIDRequestService->gg.g;
    x->AssertionIDRequestService = y;
    y = nxt;
  }
}

/* FUNC(zx_md_PDPDescriptor_PUT_AssertionIDRequestService) */

void zx_md_PDPDescriptor_PUT_AssertionIDRequestService(struct zx_md_PDPDescriptor_s* x, int n, struct zx_md_AssertionIDRequestService_s* z)
{
  struct zx_md_AssertionIDRequestService_s* y;
  if (!x || !z) return;
  y = x->AssertionIDRequestService;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->AssertionIDRequestService = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_md_AssertionIDRequestService_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_md_PDPDescriptor_ADD_AssertionIDRequestService) */

void zx_md_PDPDescriptor_ADD_AssertionIDRequestService(struct zx_md_PDPDescriptor_s* x, int n, struct zx_md_AssertionIDRequestService_s* z)
{
  struct zx_md_AssertionIDRequestService_s* y;
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
    for (; y->gg.g.n; y = (struct zx_md_AssertionIDRequestService_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->AssertionIDRequestService; n > 1 && y; --n, y = (struct zx_md_AssertionIDRequestService_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_md_PDPDescriptor_DEL_AssertionIDRequestService) */

void zx_md_PDPDescriptor_DEL_AssertionIDRequestService(struct zx_md_PDPDescriptor_s* x, int n)
{
  struct zx_md_AssertionIDRequestService_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->AssertionIDRequestService = (struct zx_md_AssertionIDRequestService_s*)x->AssertionIDRequestService->gg.g.n;
    return;
  case -1:
    y = (struct zx_md_AssertionIDRequestService_s*)x->AssertionIDRequestService;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_md_AssertionIDRequestService_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->AssertionIDRequestService; n > 1 && y->gg.g.n; --n, y = (struct zx_md_AssertionIDRequestService_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_md_PDPDescriptor_NUM_NameIDFormat) */

int zx_md_PDPDescriptor_NUM_NameIDFormat(struct zx_md_PDPDescriptor_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->NameIDFormat; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_md_PDPDescriptor_GET_NameIDFormat) */

struct zx_elem_s* zx_md_PDPDescriptor_GET_NameIDFormat(struct zx_md_PDPDescriptor_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->NameIDFormat; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_md_PDPDescriptor_POP_NameIDFormat) */

struct zx_elem_s* zx_md_PDPDescriptor_POP_NameIDFormat(struct zx_md_PDPDescriptor_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->NameIDFormat;
  if (y)
    x->NameIDFormat = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_md_PDPDescriptor_PUSH_NameIDFormat) */

void zx_md_PDPDescriptor_PUSH_NameIDFormat(struct zx_md_PDPDescriptor_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->NameIDFormat->g;
  x->NameIDFormat = z;
}

/* FUNC(zx_md_PDPDescriptor_REV_NameIDFormat) */

void zx_md_PDPDescriptor_REV_NameIDFormat(struct zx_md_PDPDescriptor_s* x)
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

/* FUNC(zx_md_PDPDescriptor_PUT_NameIDFormat) */

void zx_md_PDPDescriptor_PUT_NameIDFormat(struct zx_md_PDPDescriptor_s* x, int n, struct zx_elem_s* z)
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

/* FUNC(zx_md_PDPDescriptor_ADD_NameIDFormat) */

void zx_md_PDPDescriptor_ADD_NameIDFormat(struct zx_md_PDPDescriptor_s* x, int n, struct zx_elem_s* z)
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

/* FUNC(zx_md_PDPDescriptor_DEL_NameIDFormat) */

void zx_md_PDPDescriptor_DEL_NameIDFormat(struct zx_md_PDPDescriptor_s* x, int n)
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

#endif

/* FUNC(zx_md_PDPDescriptor_GET_ID) */
struct zx_str* zx_md_PDPDescriptor_GET_ID(struct zx_md_PDPDescriptor_s* x) { return x->ID; }
/* FUNC(zx_md_PDPDescriptor_PUT_ID) */
void zx_md_PDPDescriptor_PUT_ID(struct zx_md_PDPDescriptor_s* x, struct zx_str* y) { x->ID = y; }
/* FUNC(zx_md_PDPDescriptor_GET_validUntil) */
struct zx_str* zx_md_PDPDescriptor_GET_validUntil(struct zx_md_PDPDescriptor_s* x) { return x->validUntil; }
/* FUNC(zx_md_PDPDescriptor_PUT_validUntil) */
void zx_md_PDPDescriptor_PUT_validUntil(struct zx_md_PDPDescriptor_s* x, struct zx_str* y) { x->validUntil = y; }
/* FUNC(zx_md_PDPDescriptor_GET_cacheDuration) */
struct zx_str* zx_md_PDPDescriptor_GET_cacheDuration(struct zx_md_PDPDescriptor_s* x) { return x->cacheDuration; }
/* FUNC(zx_md_PDPDescriptor_PUT_cacheDuration) */
void zx_md_PDPDescriptor_PUT_cacheDuration(struct zx_md_PDPDescriptor_s* x, struct zx_str* y) { x->cacheDuration = y; }
/* FUNC(zx_md_PDPDescriptor_GET_protocolSupportEnumeration) */
struct zx_str* zx_md_PDPDescriptor_GET_protocolSupportEnumeration(struct zx_md_PDPDescriptor_s* x) { return x->protocolSupportEnumeration; }
/* FUNC(zx_md_PDPDescriptor_PUT_protocolSupportEnumeration) */
void zx_md_PDPDescriptor_PUT_protocolSupportEnumeration(struct zx_md_PDPDescriptor_s* x, struct zx_str* y) { x->protocolSupportEnumeration = y; }
/* FUNC(zx_md_PDPDescriptor_GET_errorURL) */
struct zx_str* zx_md_PDPDescriptor_GET_errorURL(struct zx_md_PDPDescriptor_s* x) { return x->errorURL; }
/* FUNC(zx_md_PDPDescriptor_PUT_errorURL) */
void zx_md_PDPDescriptor_PUT_errorURL(struct zx_md_PDPDescriptor_s* x, struct zx_str* y) { x->errorURL = y; }







#ifdef ZX_ENA_GETPUT

/* FUNC(zx_md_RequestedAttribute_NUM_AttributeValue) */

int zx_md_RequestedAttribute_NUM_AttributeValue(struct zx_md_RequestedAttribute_s* x)
{
  struct zx_sa_AttributeValue_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->AttributeValue; y; ++n, y = (struct zx_sa_AttributeValue_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_md_RequestedAttribute_GET_AttributeValue) */

struct zx_sa_AttributeValue_s* zx_md_RequestedAttribute_GET_AttributeValue(struct zx_md_RequestedAttribute_s* x, int n)
{
  struct zx_sa_AttributeValue_s* y;
  if (!x) return 0;
  for (y = x->AttributeValue; n>=0 && y; --n, y = (struct zx_sa_AttributeValue_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_md_RequestedAttribute_POP_AttributeValue) */

struct zx_sa_AttributeValue_s* zx_md_RequestedAttribute_POP_AttributeValue(struct zx_md_RequestedAttribute_s* x)
{
  struct zx_sa_AttributeValue_s* y;
  if (!x) return 0;
  y = x->AttributeValue;
  if (y)
    x->AttributeValue = (struct zx_sa_AttributeValue_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_md_RequestedAttribute_PUSH_AttributeValue) */

void zx_md_RequestedAttribute_PUSH_AttributeValue(struct zx_md_RequestedAttribute_s* x, struct zx_sa_AttributeValue_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->AttributeValue->gg.g;
  x->AttributeValue = z;
}

/* FUNC(zx_md_RequestedAttribute_REV_AttributeValue) */

void zx_md_RequestedAttribute_REV_AttributeValue(struct zx_md_RequestedAttribute_s* x)
{
  struct zx_sa_AttributeValue_s* nxt;
  struct zx_sa_AttributeValue_s* y;
  if (!x) return;
  y = x->AttributeValue;
  if (!y) return;
  x->AttributeValue = 0;
  while (y) {
    nxt = (struct zx_sa_AttributeValue_s*)y->gg.g.n;
    y->gg.g.n = &x->AttributeValue->gg.g;
    x->AttributeValue = y;
    y = nxt;
  }
}

/* FUNC(zx_md_RequestedAttribute_PUT_AttributeValue) */

void zx_md_RequestedAttribute_PUT_AttributeValue(struct zx_md_RequestedAttribute_s* x, int n, struct zx_sa_AttributeValue_s* z)
{
  struct zx_sa_AttributeValue_s* y;
  if (!x || !z) return;
  y = x->AttributeValue;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->AttributeValue = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_sa_AttributeValue_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_md_RequestedAttribute_ADD_AttributeValue) */

void zx_md_RequestedAttribute_ADD_AttributeValue(struct zx_md_RequestedAttribute_s* x, int n, struct zx_sa_AttributeValue_s* z)
{
  struct zx_sa_AttributeValue_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->AttributeValue->gg.g;
    x->AttributeValue = z;
    return;
  case -1:
    y = x->AttributeValue;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_sa_AttributeValue_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->AttributeValue; n > 1 && y; --n, y = (struct zx_sa_AttributeValue_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_md_RequestedAttribute_DEL_AttributeValue) */

void zx_md_RequestedAttribute_DEL_AttributeValue(struct zx_md_RequestedAttribute_s* x, int n)
{
  struct zx_sa_AttributeValue_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->AttributeValue = (struct zx_sa_AttributeValue_s*)x->AttributeValue->gg.g.n;
    return;
  case -1:
    y = (struct zx_sa_AttributeValue_s*)x->AttributeValue;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_sa_AttributeValue_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->AttributeValue; n > 1 && y->gg.g.n; --n, y = (struct zx_sa_AttributeValue_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif

/* FUNC(zx_md_RequestedAttribute_GET_Name) */
struct zx_str* zx_md_RequestedAttribute_GET_Name(struct zx_md_RequestedAttribute_s* x) { return x->Name; }
/* FUNC(zx_md_RequestedAttribute_PUT_Name) */
void zx_md_RequestedAttribute_PUT_Name(struct zx_md_RequestedAttribute_s* x, struct zx_str* y) { x->Name = y; }
/* FUNC(zx_md_RequestedAttribute_GET_NameFormat) */
struct zx_str* zx_md_RequestedAttribute_GET_NameFormat(struct zx_md_RequestedAttribute_s* x) { return x->NameFormat; }
/* FUNC(zx_md_RequestedAttribute_PUT_NameFormat) */
void zx_md_RequestedAttribute_PUT_NameFormat(struct zx_md_RequestedAttribute_s* x, struct zx_str* y) { x->NameFormat = y; }
/* FUNC(zx_md_RequestedAttribute_GET_FriendlyName) */
struct zx_str* zx_md_RequestedAttribute_GET_FriendlyName(struct zx_md_RequestedAttribute_s* x) { return x->FriendlyName; }
/* FUNC(zx_md_RequestedAttribute_PUT_FriendlyName) */
void zx_md_RequestedAttribute_PUT_FriendlyName(struct zx_md_RequestedAttribute_s* x, struct zx_str* y) { x->FriendlyName = y; }
/* FUNC(zx_md_RequestedAttribute_GET_isRequired) */
struct zx_str* zx_md_RequestedAttribute_GET_isRequired(struct zx_md_RequestedAttribute_s* x) { return x->isRequired; }
/* FUNC(zx_md_RequestedAttribute_PUT_isRequired) */
void zx_md_RequestedAttribute_PUT_isRequired(struct zx_md_RequestedAttribute_s* x, struct zx_str* y) { x->isRequired = y; }







#ifdef ZX_ENA_GETPUT

/* FUNC(zx_md_RoleDescriptor_NUM_Signature) */

int zx_md_RoleDescriptor_NUM_Signature(struct zx_md_RoleDescriptor_s* x)
{
  struct zx_ds_Signature_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Signature; y; ++n, y = (struct zx_ds_Signature_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_md_RoleDescriptor_GET_Signature) */

struct zx_ds_Signature_s* zx_md_RoleDescriptor_GET_Signature(struct zx_md_RoleDescriptor_s* x, int n)
{
  struct zx_ds_Signature_s* y;
  if (!x) return 0;
  for (y = x->Signature; n>=0 && y; --n, y = (struct zx_ds_Signature_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_md_RoleDescriptor_POP_Signature) */

struct zx_ds_Signature_s* zx_md_RoleDescriptor_POP_Signature(struct zx_md_RoleDescriptor_s* x)
{
  struct zx_ds_Signature_s* y;
  if (!x) return 0;
  y = x->Signature;
  if (y)
    x->Signature = (struct zx_ds_Signature_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_md_RoleDescriptor_PUSH_Signature) */

void zx_md_RoleDescriptor_PUSH_Signature(struct zx_md_RoleDescriptor_s* x, struct zx_ds_Signature_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Signature->gg.g;
  x->Signature = z;
}

/* FUNC(zx_md_RoleDescriptor_REV_Signature) */

void zx_md_RoleDescriptor_REV_Signature(struct zx_md_RoleDescriptor_s* x)
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

/* FUNC(zx_md_RoleDescriptor_PUT_Signature) */

void zx_md_RoleDescriptor_PUT_Signature(struct zx_md_RoleDescriptor_s* x, int n, struct zx_ds_Signature_s* z)
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

/* FUNC(zx_md_RoleDescriptor_ADD_Signature) */

void zx_md_RoleDescriptor_ADD_Signature(struct zx_md_RoleDescriptor_s* x, int n, struct zx_ds_Signature_s* z)
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

/* FUNC(zx_md_RoleDescriptor_DEL_Signature) */

void zx_md_RoleDescriptor_DEL_Signature(struct zx_md_RoleDescriptor_s* x, int n)
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

/* FUNC(zx_md_RoleDescriptor_NUM_Extensions) */

int zx_md_RoleDescriptor_NUM_Extensions(struct zx_md_RoleDescriptor_s* x)
{
  struct zx_md_Extensions_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Extensions; y; ++n, y = (struct zx_md_Extensions_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_md_RoleDescriptor_GET_Extensions) */

struct zx_md_Extensions_s* zx_md_RoleDescriptor_GET_Extensions(struct zx_md_RoleDescriptor_s* x, int n)
{
  struct zx_md_Extensions_s* y;
  if (!x) return 0;
  for (y = x->Extensions; n>=0 && y; --n, y = (struct zx_md_Extensions_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_md_RoleDescriptor_POP_Extensions) */

struct zx_md_Extensions_s* zx_md_RoleDescriptor_POP_Extensions(struct zx_md_RoleDescriptor_s* x)
{
  struct zx_md_Extensions_s* y;
  if (!x) return 0;
  y = x->Extensions;
  if (y)
    x->Extensions = (struct zx_md_Extensions_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_md_RoleDescriptor_PUSH_Extensions) */

void zx_md_RoleDescriptor_PUSH_Extensions(struct zx_md_RoleDescriptor_s* x, struct zx_md_Extensions_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Extensions->gg.g;
  x->Extensions = z;
}

/* FUNC(zx_md_RoleDescriptor_REV_Extensions) */

void zx_md_RoleDescriptor_REV_Extensions(struct zx_md_RoleDescriptor_s* x)
{
  struct zx_md_Extensions_s* nxt;
  struct zx_md_Extensions_s* y;
  if (!x) return;
  y = x->Extensions;
  if (!y) return;
  x->Extensions = 0;
  while (y) {
    nxt = (struct zx_md_Extensions_s*)y->gg.g.n;
    y->gg.g.n = &x->Extensions->gg.g;
    x->Extensions = y;
    y = nxt;
  }
}

/* FUNC(zx_md_RoleDescriptor_PUT_Extensions) */

void zx_md_RoleDescriptor_PUT_Extensions(struct zx_md_RoleDescriptor_s* x, int n, struct zx_md_Extensions_s* z)
{
  struct zx_md_Extensions_s* y;
  if (!x || !z) return;
  y = x->Extensions;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Extensions = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_md_Extensions_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_md_RoleDescriptor_ADD_Extensions) */

void zx_md_RoleDescriptor_ADD_Extensions(struct zx_md_RoleDescriptor_s* x, int n, struct zx_md_Extensions_s* z)
{
  struct zx_md_Extensions_s* y;
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
    for (; y->gg.g.n; y = (struct zx_md_Extensions_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Extensions; n > 1 && y; --n, y = (struct zx_md_Extensions_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_md_RoleDescriptor_DEL_Extensions) */

void zx_md_RoleDescriptor_DEL_Extensions(struct zx_md_RoleDescriptor_s* x, int n)
{
  struct zx_md_Extensions_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Extensions = (struct zx_md_Extensions_s*)x->Extensions->gg.g.n;
    return;
  case -1:
    y = (struct zx_md_Extensions_s*)x->Extensions;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_md_Extensions_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Extensions; n > 1 && y->gg.g.n; --n, y = (struct zx_md_Extensions_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_md_RoleDescriptor_NUM_KeyDescriptor) */

int zx_md_RoleDescriptor_NUM_KeyDescriptor(struct zx_md_RoleDescriptor_s* x)
{
  struct zx_md_KeyDescriptor_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->KeyDescriptor; y; ++n, y = (struct zx_md_KeyDescriptor_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_md_RoleDescriptor_GET_KeyDescriptor) */

struct zx_md_KeyDescriptor_s* zx_md_RoleDescriptor_GET_KeyDescriptor(struct zx_md_RoleDescriptor_s* x, int n)
{
  struct zx_md_KeyDescriptor_s* y;
  if (!x) return 0;
  for (y = x->KeyDescriptor; n>=0 && y; --n, y = (struct zx_md_KeyDescriptor_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_md_RoleDescriptor_POP_KeyDescriptor) */

struct zx_md_KeyDescriptor_s* zx_md_RoleDescriptor_POP_KeyDescriptor(struct zx_md_RoleDescriptor_s* x)
{
  struct zx_md_KeyDescriptor_s* y;
  if (!x) return 0;
  y = x->KeyDescriptor;
  if (y)
    x->KeyDescriptor = (struct zx_md_KeyDescriptor_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_md_RoleDescriptor_PUSH_KeyDescriptor) */

void zx_md_RoleDescriptor_PUSH_KeyDescriptor(struct zx_md_RoleDescriptor_s* x, struct zx_md_KeyDescriptor_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->KeyDescriptor->gg.g;
  x->KeyDescriptor = z;
}

/* FUNC(zx_md_RoleDescriptor_REV_KeyDescriptor) */

void zx_md_RoleDescriptor_REV_KeyDescriptor(struct zx_md_RoleDescriptor_s* x)
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

/* FUNC(zx_md_RoleDescriptor_PUT_KeyDescriptor) */

void zx_md_RoleDescriptor_PUT_KeyDescriptor(struct zx_md_RoleDescriptor_s* x, int n, struct zx_md_KeyDescriptor_s* z)
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

/* FUNC(zx_md_RoleDescriptor_ADD_KeyDescriptor) */

void zx_md_RoleDescriptor_ADD_KeyDescriptor(struct zx_md_RoleDescriptor_s* x, int n, struct zx_md_KeyDescriptor_s* z)
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

/* FUNC(zx_md_RoleDescriptor_DEL_KeyDescriptor) */

void zx_md_RoleDescriptor_DEL_KeyDescriptor(struct zx_md_RoleDescriptor_s* x, int n)
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

/* FUNC(zx_md_RoleDescriptor_NUM_Organization) */

int zx_md_RoleDescriptor_NUM_Organization(struct zx_md_RoleDescriptor_s* x)
{
  struct zx_md_Organization_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Organization; y; ++n, y = (struct zx_md_Organization_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_md_RoleDescriptor_GET_Organization) */

struct zx_md_Organization_s* zx_md_RoleDescriptor_GET_Organization(struct zx_md_RoleDescriptor_s* x, int n)
{
  struct zx_md_Organization_s* y;
  if (!x) return 0;
  for (y = x->Organization; n>=0 && y; --n, y = (struct zx_md_Organization_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_md_RoleDescriptor_POP_Organization) */

struct zx_md_Organization_s* zx_md_RoleDescriptor_POP_Organization(struct zx_md_RoleDescriptor_s* x)
{
  struct zx_md_Organization_s* y;
  if (!x) return 0;
  y = x->Organization;
  if (y)
    x->Organization = (struct zx_md_Organization_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_md_RoleDescriptor_PUSH_Organization) */

void zx_md_RoleDescriptor_PUSH_Organization(struct zx_md_RoleDescriptor_s* x, struct zx_md_Organization_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Organization->gg.g;
  x->Organization = z;
}

/* FUNC(zx_md_RoleDescriptor_REV_Organization) */

void zx_md_RoleDescriptor_REV_Organization(struct zx_md_RoleDescriptor_s* x)
{
  struct zx_md_Organization_s* nxt;
  struct zx_md_Organization_s* y;
  if (!x) return;
  y = x->Organization;
  if (!y) return;
  x->Organization = 0;
  while (y) {
    nxt = (struct zx_md_Organization_s*)y->gg.g.n;
    y->gg.g.n = &x->Organization->gg.g;
    x->Organization = y;
    y = nxt;
  }
}

/* FUNC(zx_md_RoleDescriptor_PUT_Organization) */

void zx_md_RoleDescriptor_PUT_Organization(struct zx_md_RoleDescriptor_s* x, int n, struct zx_md_Organization_s* z)
{
  struct zx_md_Organization_s* y;
  if (!x || !z) return;
  y = x->Organization;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Organization = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_md_Organization_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_md_RoleDescriptor_ADD_Organization) */

void zx_md_RoleDescriptor_ADD_Organization(struct zx_md_RoleDescriptor_s* x, int n, struct zx_md_Organization_s* z)
{
  struct zx_md_Organization_s* y;
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
    for (; y->gg.g.n; y = (struct zx_md_Organization_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Organization; n > 1 && y; --n, y = (struct zx_md_Organization_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_md_RoleDescriptor_DEL_Organization) */

void zx_md_RoleDescriptor_DEL_Organization(struct zx_md_RoleDescriptor_s* x, int n)
{
  struct zx_md_Organization_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Organization = (struct zx_md_Organization_s*)x->Organization->gg.g.n;
    return;
  case -1:
    y = (struct zx_md_Organization_s*)x->Organization;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_md_Organization_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Organization; n > 1 && y->gg.g.n; --n, y = (struct zx_md_Organization_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_md_RoleDescriptor_NUM_ContactPerson) */

int zx_md_RoleDescriptor_NUM_ContactPerson(struct zx_md_RoleDescriptor_s* x)
{
  struct zx_md_ContactPerson_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->ContactPerson; y; ++n, y = (struct zx_md_ContactPerson_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_md_RoleDescriptor_GET_ContactPerson) */

struct zx_md_ContactPerson_s* zx_md_RoleDescriptor_GET_ContactPerson(struct zx_md_RoleDescriptor_s* x, int n)
{
  struct zx_md_ContactPerson_s* y;
  if (!x) return 0;
  for (y = x->ContactPerson; n>=0 && y; --n, y = (struct zx_md_ContactPerson_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_md_RoleDescriptor_POP_ContactPerson) */

struct zx_md_ContactPerson_s* zx_md_RoleDescriptor_POP_ContactPerson(struct zx_md_RoleDescriptor_s* x)
{
  struct zx_md_ContactPerson_s* y;
  if (!x) return 0;
  y = x->ContactPerson;
  if (y)
    x->ContactPerson = (struct zx_md_ContactPerson_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_md_RoleDescriptor_PUSH_ContactPerson) */

void zx_md_RoleDescriptor_PUSH_ContactPerson(struct zx_md_RoleDescriptor_s* x, struct zx_md_ContactPerson_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->ContactPerson->gg.g;
  x->ContactPerson = z;
}

/* FUNC(zx_md_RoleDescriptor_REV_ContactPerson) */

void zx_md_RoleDescriptor_REV_ContactPerson(struct zx_md_RoleDescriptor_s* x)
{
  struct zx_md_ContactPerson_s* nxt;
  struct zx_md_ContactPerson_s* y;
  if (!x) return;
  y = x->ContactPerson;
  if (!y) return;
  x->ContactPerson = 0;
  while (y) {
    nxt = (struct zx_md_ContactPerson_s*)y->gg.g.n;
    y->gg.g.n = &x->ContactPerson->gg.g;
    x->ContactPerson = y;
    y = nxt;
  }
}

/* FUNC(zx_md_RoleDescriptor_PUT_ContactPerson) */

void zx_md_RoleDescriptor_PUT_ContactPerson(struct zx_md_RoleDescriptor_s* x, int n, struct zx_md_ContactPerson_s* z)
{
  struct zx_md_ContactPerson_s* y;
  if (!x || !z) return;
  y = x->ContactPerson;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->ContactPerson = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_md_ContactPerson_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_md_RoleDescriptor_ADD_ContactPerson) */

void zx_md_RoleDescriptor_ADD_ContactPerson(struct zx_md_RoleDescriptor_s* x, int n, struct zx_md_ContactPerson_s* z)
{
  struct zx_md_ContactPerson_s* y;
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
    for (; y->gg.g.n; y = (struct zx_md_ContactPerson_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->ContactPerson; n > 1 && y; --n, y = (struct zx_md_ContactPerson_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_md_RoleDescriptor_DEL_ContactPerson) */

void zx_md_RoleDescriptor_DEL_ContactPerson(struct zx_md_RoleDescriptor_s* x, int n)
{
  struct zx_md_ContactPerson_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->ContactPerson = (struct zx_md_ContactPerson_s*)x->ContactPerson->gg.g.n;
    return;
  case -1:
    y = (struct zx_md_ContactPerson_s*)x->ContactPerson;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_md_ContactPerson_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->ContactPerson; n > 1 && y->gg.g.n; --n, y = (struct zx_md_ContactPerson_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif

/* FUNC(zx_md_RoleDescriptor_GET_ID) */
struct zx_str* zx_md_RoleDescriptor_GET_ID(struct zx_md_RoleDescriptor_s* x) { return x->ID; }
/* FUNC(zx_md_RoleDescriptor_PUT_ID) */
void zx_md_RoleDescriptor_PUT_ID(struct zx_md_RoleDescriptor_s* x, struct zx_str* y) { x->ID = y; }
/* FUNC(zx_md_RoleDescriptor_GET_validUntil) */
struct zx_str* zx_md_RoleDescriptor_GET_validUntil(struct zx_md_RoleDescriptor_s* x) { return x->validUntil; }
/* FUNC(zx_md_RoleDescriptor_PUT_validUntil) */
void zx_md_RoleDescriptor_PUT_validUntil(struct zx_md_RoleDescriptor_s* x, struct zx_str* y) { x->validUntil = y; }
/* FUNC(zx_md_RoleDescriptor_GET_cacheDuration) */
struct zx_str* zx_md_RoleDescriptor_GET_cacheDuration(struct zx_md_RoleDescriptor_s* x) { return x->cacheDuration; }
/* FUNC(zx_md_RoleDescriptor_PUT_cacheDuration) */
void zx_md_RoleDescriptor_PUT_cacheDuration(struct zx_md_RoleDescriptor_s* x, struct zx_str* y) { x->cacheDuration = y; }
/* FUNC(zx_md_RoleDescriptor_GET_protocolSupportEnumeration) */
struct zx_str* zx_md_RoleDescriptor_GET_protocolSupportEnumeration(struct zx_md_RoleDescriptor_s* x) { return x->protocolSupportEnumeration; }
/* FUNC(zx_md_RoleDescriptor_PUT_protocolSupportEnumeration) */
void zx_md_RoleDescriptor_PUT_protocolSupportEnumeration(struct zx_md_RoleDescriptor_s* x, struct zx_str* y) { x->protocolSupportEnumeration = y; }
/* FUNC(zx_md_RoleDescriptor_GET_errorURL) */
struct zx_str* zx_md_RoleDescriptor_GET_errorURL(struct zx_md_RoleDescriptor_s* x) { return x->errorURL; }
/* FUNC(zx_md_RoleDescriptor_PUT_errorURL) */
void zx_md_RoleDescriptor_PUT_errorURL(struct zx_md_RoleDescriptor_s* x, struct zx_str* y) { x->errorURL = y; }







#ifdef ZX_ENA_GETPUT

/* FUNC(zx_md_SPSSODescriptor_NUM_Signature) */

int zx_md_SPSSODescriptor_NUM_Signature(struct zx_md_SPSSODescriptor_s* x)
{
  struct zx_ds_Signature_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Signature; y; ++n, y = (struct zx_ds_Signature_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_md_SPSSODescriptor_GET_Signature) */

struct zx_ds_Signature_s* zx_md_SPSSODescriptor_GET_Signature(struct zx_md_SPSSODescriptor_s* x, int n)
{
  struct zx_ds_Signature_s* y;
  if (!x) return 0;
  for (y = x->Signature; n>=0 && y; --n, y = (struct zx_ds_Signature_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_md_SPSSODescriptor_POP_Signature) */

struct zx_ds_Signature_s* zx_md_SPSSODescriptor_POP_Signature(struct zx_md_SPSSODescriptor_s* x)
{
  struct zx_ds_Signature_s* y;
  if (!x) return 0;
  y = x->Signature;
  if (y)
    x->Signature = (struct zx_ds_Signature_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_md_SPSSODescriptor_PUSH_Signature) */

void zx_md_SPSSODescriptor_PUSH_Signature(struct zx_md_SPSSODescriptor_s* x, struct zx_ds_Signature_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Signature->gg.g;
  x->Signature = z;
}

/* FUNC(zx_md_SPSSODescriptor_REV_Signature) */

void zx_md_SPSSODescriptor_REV_Signature(struct zx_md_SPSSODescriptor_s* x)
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

/* FUNC(zx_md_SPSSODescriptor_PUT_Signature) */

void zx_md_SPSSODescriptor_PUT_Signature(struct zx_md_SPSSODescriptor_s* x, int n, struct zx_ds_Signature_s* z)
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

/* FUNC(zx_md_SPSSODescriptor_ADD_Signature) */

void zx_md_SPSSODescriptor_ADD_Signature(struct zx_md_SPSSODescriptor_s* x, int n, struct zx_ds_Signature_s* z)
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

/* FUNC(zx_md_SPSSODescriptor_DEL_Signature) */

void zx_md_SPSSODescriptor_DEL_Signature(struct zx_md_SPSSODescriptor_s* x, int n)
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

/* FUNC(zx_md_SPSSODescriptor_NUM_Extensions) */

int zx_md_SPSSODescriptor_NUM_Extensions(struct zx_md_SPSSODescriptor_s* x)
{
  struct zx_md_Extensions_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Extensions; y; ++n, y = (struct zx_md_Extensions_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_md_SPSSODescriptor_GET_Extensions) */

struct zx_md_Extensions_s* zx_md_SPSSODescriptor_GET_Extensions(struct zx_md_SPSSODescriptor_s* x, int n)
{
  struct zx_md_Extensions_s* y;
  if (!x) return 0;
  for (y = x->Extensions; n>=0 && y; --n, y = (struct zx_md_Extensions_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_md_SPSSODescriptor_POP_Extensions) */

struct zx_md_Extensions_s* zx_md_SPSSODescriptor_POP_Extensions(struct zx_md_SPSSODescriptor_s* x)
{
  struct zx_md_Extensions_s* y;
  if (!x) return 0;
  y = x->Extensions;
  if (y)
    x->Extensions = (struct zx_md_Extensions_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_md_SPSSODescriptor_PUSH_Extensions) */

void zx_md_SPSSODescriptor_PUSH_Extensions(struct zx_md_SPSSODescriptor_s* x, struct zx_md_Extensions_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Extensions->gg.g;
  x->Extensions = z;
}

/* FUNC(zx_md_SPSSODescriptor_REV_Extensions) */

void zx_md_SPSSODescriptor_REV_Extensions(struct zx_md_SPSSODescriptor_s* x)
{
  struct zx_md_Extensions_s* nxt;
  struct zx_md_Extensions_s* y;
  if (!x) return;
  y = x->Extensions;
  if (!y) return;
  x->Extensions = 0;
  while (y) {
    nxt = (struct zx_md_Extensions_s*)y->gg.g.n;
    y->gg.g.n = &x->Extensions->gg.g;
    x->Extensions = y;
    y = nxt;
  }
}

/* FUNC(zx_md_SPSSODescriptor_PUT_Extensions) */

void zx_md_SPSSODescriptor_PUT_Extensions(struct zx_md_SPSSODescriptor_s* x, int n, struct zx_md_Extensions_s* z)
{
  struct zx_md_Extensions_s* y;
  if (!x || !z) return;
  y = x->Extensions;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Extensions = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_md_Extensions_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_md_SPSSODescriptor_ADD_Extensions) */

void zx_md_SPSSODescriptor_ADD_Extensions(struct zx_md_SPSSODescriptor_s* x, int n, struct zx_md_Extensions_s* z)
{
  struct zx_md_Extensions_s* y;
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
    for (; y->gg.g.n; y = (struct zx_md_Extensions_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Extensions; n > 1 && y; --n, y = (struct zx_md_Extensions_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_md_SPSSODescriptor_DEL_Extensions) */

void zx_md_SPSSODescriptor_DEL_Extensions(struct zx_md_SPSSODescriptor_s* x, int n)
{
  struct zx_md_Extensions_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Extensions = (struct zx_md_Extensions_s*)x->Extensions->gg.g.n;
    return;
  case -1:
    y = (struct zx_md_Extensions_s*)x->Extensions;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_md_Extensions_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Extensions; n > 1 && y->gg.g.n; --n, y = (struct zx_md_Extensions_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_md_SPSSODescriptor_NUM_KeyDescriptor) */

int zx_md_SPSSODescriptor_NUM_KeyDescriptor(struct zx_md_SPSSODescriptor_s* x)
{
  struct zx_md_KeyDescriptor_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->KeyDescriptor; y; ++n, y = (struct zx_md_KeyDescriptor_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_md_SPSSODescriptor_GET_KeyDescriptor) */

struct zx_md_KeyDescriptor_s* zx_md_SPSSODescriptor_GET_KeyDescriptor(struct zx_md_SPSSODescriptor_s* x, int n)
{
  struct zx_md_KeyDescriptor_s* y;
  if (!x) return 0;
  for (y = x->KeyDescriptor; n>=0 && y; --n, y = (struct zx_md_KeyDescriptor_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_md_SPSSODescriptor_POP_KeyDescriptor) */

struct zx_md_KeyDescriptor_s* zx_md_SPSSODescriptor_POP_KeyDescriptor(struct zx_md_SPSSODescriptor_s* x)
{
  struct zx_md_KeyDescriptor_s* y;
  if (!x) return 0;
  y = x->KeyDescriptor;
  if (y)
    x->KeyDescriptor = (struct zx_md_KeyDescriptor_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_md_SPSSODescriptor_PUSH_KeyDescriptor) */

void zx_md_SPSSODescriptor_PUSH_KeyDescriptor(struct zx_md_SPSSODescriptor_s* x, struct zx_md_KeyDescriptor_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->KeyDescriptor->gg.g;
  x->KeyDescriptor = z;
}

/* FUNC(zx_md_SPSSODescriptor_REV_KeyDescriptor) */

void zx_md_SPSSODescriptor_REV_KeyDescriptor(struct zx_md_SPSSODescriptor_s* x)
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

/* FUNC(zx_md_SPSSODescriptor_PUT_KeyDescriptor) */

void zx_md_SPSSODescriptor_PUT_KeyDescriptor(struct zx_md_SPSSODescriptor_s* x, int n, struct zx_md_KeyDescriptor_s* z)
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

/* FUNC(zx_md_SPSSODescriptor_ADD_KeyDescriptor) */

void zx_md_SPSSODescriptor_ADD_KeyDescriptor(struct zx_md_SPSSODescriptor_s* x, int n, struct zx_md_KeyDescriptor_s* z)
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

/* FUNC(zx_md_SPSSODescriptor_DEL_KeyDescriptor) */

void zx_md_SPSSODescriptor_DEL_KeyDescriptor(struct zx_md_SPSSODescriptor_s* x, int n)
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

/* FUNC(zx_md_SPSSODescriptor_NUM_Organization) */

int zx_md_SPSSODescriptor_NUM_Organization(struct zx_md_SPSSODescriptor_s* x)
{
  struct zx_md_Organization_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Organization; y; ++n, y = (struct zx_md_Organization_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_md_SPSSODescriptor_GET_Organization) */

struct zx_md_Organization_s* zx_md_SPSSODescriptor_GET_Organization(struct zx_md_SPSSODescriptor_s* x, int n)
{
  struct zx_md_Organization_s* y;
  if (!x) return 0;
  for (y = x->Organization; n>=0 && y; --n, y = (struct zx_md_Organization_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_md_SPSSODescriptor_POP_Organization) */

struct zx_md_Organization_s* zx_md_SPSSODescriptor_POP_Organization(struct zx_md_SPSSODescriptor_s* x)
{
  struct zx_md_Organization_s* y;
  if (!x) return 0;
  y = x->Organization;
  if (y)
    x->Organization = (struct zx_md_Organization_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_md_SPSSODescriptor_PUSH_Organization) */

void zx_md_SPSSODescriptor_PUSH_Organization(struct zx_md_SPSSODescriptor_s* x, struct zx_md_Organization_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Organization->gg.g;
  x->Organization = z;
}

/* FUNC(zx_md_SPSSODescriptor_REV_Organization) */

void zx_md_SPSSODescriptor_REV_Organization(struct zx_md_SPSSODescriptor_s* x)
{
  struct zx_md_Organization_s* nxt;
  struct zx_md_Organization_s* y;
  if (!x) return;
  y = x->Organization;
  if (!y) return;
  x->Organization = 0;
  while (y) {
    nxt = (struct zx_md_Organization_s*)y->gg.g.n;
    y->gg.g.n = &x->Organization->gg.g;
    x->Organization = y;
    y = nxt;
  }
}

/* FUNC(zx_md_SPSSODescriptor_PUT_Organization) */

void zx_md_SPSSODescriptor_PUT_Organization(struct zx_md_SPSSODescriptor_s* x, int n, struct zx_md_Organization_s* z)
{
  struct zx_md_Organization_s* y;
  if (!x || !z) return;
  y = x->Organization;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Organization = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_md_Organization_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_md_SPSSODescriptor_ADD_Organization) */

void zx_md_SPSSODescriptor_ADD_Organization(struct zx_md_SPSSODescriptor_s* x, int n, struct zx_md_Organization_s* z)
{
  struct zx_md_Organization_s* y;
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
    for (; y->gg.g.n; y = (struct zx_md_Organization_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Organization; n > 1 && y; --n, y = (struct zx_md_Organization_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_md_SPSSODescriptor_DEL_Organization) */

void zx_md_SPSSODescriptor_DEL_Organization(struct zx_md_SPSSODescriptor_s* x, int n)
{
  struct zx_md_Organization_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Organization = (struct zx_md_Organization_s*)x->Organization->gg.g.n;
    return;
  case -1:
    y = (struct zx_md_Organization_s*)x->Organization;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_md_Organization_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Organization; n > 1 && y->gg.g.n; --n, y = (struct zx_md_Organization_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_md_SPSSODescriptor_NUM_ContactPerson) */

int zx_md_SPSSODescriptor_NUM_ContactPerson(struct zx_md_SPSSODescriptor_s* x)
{
  struct zx_md_ContactPerson_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->ContactPerson; y; ++n, y = (struct zx_md_ContactPerson_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_md_SPSSODescriptor_GET_ContactPerson) */

struct zx_md_ContactPerson_s* zx_md_SPSSODescriptor_GET_ContactPerson(struct zx_md_SPSSODescriptor_s* x, int n)
{
  struct zx_md_ContactPerson_s* y;
  if (!x) return 0;
  for (y = x->ContactPerson; n>=0 && y; --n, y = (struct zx_md_ContactPerson_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_md_SPSSODescriptor_POP_ContactPerson) */

struct zx_md_ContactPerson_s* zx_md_SPSSODescriptor_POP_ContactPerson(struct zx_md_SPSSODescriptor_s* x)
{
  struct zx_md_ContactPerson_s* y;
  if (!x) return 0;
  y = x->ContactPerson;
  if (y)
    x->ContactPerson = (struct zx_md_ContactPerson_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_md_SPSSODescriptor_PUSH_ContactPerson) */

void zx_md_SPSSODescriptor_PUSH_ContactPerson(struct zx_md_SPSSODescriptor_s* x, struct zx_md_ContactPerson_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->ContactPerson->gg.g;
  x->ContactPerson = z;
}

/* FUNC(zx_md_SPSSODescriptor_REV_ContactPerson) */

void zx_md_SPSSODescriptor_REV_ContactPerson(struct zx_md_SPSSODescriptor_s* x)
{
  struct zx_md_ContactPerson_s* nxt;
  struct zx_md_ContactPerson_s* y;
  if (!x) return;
  y = x->ContactPerson;
  if (!y) return;
  x->ContactPerson = 0;
  while (y) {
    nxt = (struct zx_md_ContactPerson_s*)y->gg.g.n;
    y->gg.g.n = &x->ContactPerson->gg.g;
    x->ContactPerson = y;
    y = nxt;
  }
}

/* FUNC(zx_md_SPSSODescriptor_PUT_ContactPerson) */

void zx_md_SPSSODescriptor_PUT_ContactPerson(struct zx_md_SPSSODescriptor_s* x, int n, struct zx_md_ContactPerson_s* z)
{
  struct zx_md_ContactPerson_s* y;
  if (!x || !z) return;
  y = x->ContactPerson;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->ContactPerson = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_md_ContactPerson_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_md_SPSSODescriptor_ADD_ContactPerson) */

void zx_md_SPSSODescriptor_ADD_ContactPerson(struct zx_md_SPSSODescriptor_s* x, int n, struct zx_md_ContactPerson_s* z)
{
  struct zx_md_ContactPerson_s* y;
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
    for (; y->gg.g.n; y = (struct zx_md_ContactPerson_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->ContactPerson; n > 1 && y; --n, y = (struct zx_md_ContactPerson_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_md_SPSSODescriptor_DEL_ContactPerson) */

void zx_md_SPSSODescriptor_DEL_ContactPerson(struct zx_md_SPSSODescriptor_s* x, int n)
{
  struct zx_md_ContactPerson_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->ContactPerson = (struct zx_md_ContactPerson_s*)x->ContactPerson->gg.g.n;
    return;
  case -1:
    y = (struct zx_md_ContactPerson_s*)x->ContactPerson;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_md_ContactPerson_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->ContactPerson; n > 1 && y->gg.g.n; --n, y = (struct zx_md_ContactPerson_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_md_SPSSODescriptor_NUM_ArtifactResolutionService) */

int zx_md_SPSSODescriptor_NUM_ArtifactResolutionService(struct zx_md_SPSSODescriptor_s* x)
{
  struct zx_md_ArtifactResolutionService_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->ArtifactResolutionService; y; ++n, y = (struct zx_md_ArtifactResolutionService_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_md_SPSSODescriptor_GET_ArtifactResolutionService) */

struct zx_md_ArtifactResolutionService_s* zx_md_SPSSODescriptor_GET_ArtifactResolutionService(struct zx_md_SPSSODescriptor_s* x, int n)
{
  struct zx_md_ArtifactResolutionService_s* y;
  if (!x) return 0;
  for (y = x->ArtifactResolutionService; n>=0 && y; --n, y = (struct zx_md_ArtifactResolutionService_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_md_SPSSODescriptor_POP_ArtifactResolutionService) */

struct zx_md_ArtifactResolutionService_s* zx_md_SPSSODescriptor_POP_ArtifactResolutionService(struct zx_md_SPSSODescriptor_s* x)
{
  struct zx_md_ArtifactResolutionService_s* y;
  if (!x) return 0;
  y = x->ArtifactResolutionService;
  if (y)
    x->ArtifactResolutionService = (struct zx_md_ArtifactResolutionService_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_md_SPSSODescriptor_PUSH_ArtifactResolutionService) */

void zx_md_SPSSODescriptor_PUSH_ArtifactResolutionService(struct zx_md_SPSSODescriptor_s* x, struct zx_md_ArtifactResolutionService_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->ArtifactResolutionService->gg.g;
  x->ArtifactResolutionService = z;
}

/* FUNC(zx_md_SPSSODescriptor_REV_ArtifactResolutionService) */

void zx_md_SPSSODescriptor_REV_ArtifactResolutionService(struct zx_md_SPSSODescriptor_s* x)
{
  struct zx_md_ArtifactResolutionService_s* nxt;
  struct zx_md_ArtifactResolutionService_s* y;
  if (!x) return;
  y = x->ArtifactResolutionService;
  if (!y) return;
  x->ArtifactResolutionService = 0;
  while (y) {
    nxt = (struct zx_md_ArtifactResolutionService_s*)y->gg.g.n;
    y->gg.g.n = &x->ArtifactResolutionService->gg.g;
    x->ArtifactResolutionService = y;
    y = nxt;
  }
}

/* FUNC(zx_md_SPSSODescriptor_PUT_ArtifactResolutionService) */

void zx_md_SPSSODescriptor_PUT_ArtifactResolutionService(struct zx_md_SPSSODescriptor_s* x, int n, struct zx_md_ArtifactResolutionService_s* z)
{
  struct zx_md_ArtifactResolutionService_s* y;
  if (!x || !z) return;
  y = x->ArtifactResolutionService;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->ArtifactResolutionService = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_md_ArtifactResolutionService_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_md_SPSSODescriptor_ADD_ArtifactResolutionService) */

void zx_md_SPSSODescriptor_ADD_ArtifactResolutionService(struct zx_md_SPSSODescriptor_s* x, int n, struct zx_md_ArtifactResolutionService_s* z)
{
  struct zx_md_ArtifactResolutionService_s* y;
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
    for (; y->gg.g.n; y = (struct zx_md_ArtifactResolutionService_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->ArtifactResolutionService; n > 1 && y; --n, y = (struct zx_md_ArtifactResolutionService_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_md_SPSSODescriptor_DEL_ArtifactResolutionService) */

void zx_md_SPSSODescriptor_DEL_ArtifactResolutionService(struct zx_md_SPSSODescriptor_s* x, int n)
{
  struct zx_md_ArtifactResolutionService_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->ArtifactResolutionService = (struct zx_md_ArtifactResolutionService_s*)x->ArtifactResolutionService->gg.g.n;
    return;
  case -1:
    y = (struct zx_md_ArtifactResolutionService_s*)x->ArtifactResolutionService;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_md_ArtifactResolutionService_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->ArtifactResolutionService; n > 1 && y->gg.g.n; --n, y = (struct zx_md_ArtifactResolutionService_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_md_SPSSODescriptor_NUM_SingleLogoutService) */

int zx_md_SPSSODescriptor_NUM_SingleLogoutService(struct zx_md_SPSSODescriptor_s* x)
{
  struct zx_md_SingleLogoutService_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->SingleLogoutService; y; ++n, y = (struct zx_md_SingleLogoutService_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_md_SPSSODescriptor_GET_SingleLogoutService) */

struct zx_md_SingleLogoutService_s* zx_md_SPSSODescriptor_GET_SingleLogoutService(struct zx_md_SPSSODescriptor_s* x, int n)
{
  struct zx_md_SingleLogoutService_s* y;
  if (!x) return 0;
  for (y = x->SingleLogoutService; n>=0 && y; --n, y = (struct zx_md_SingleLogoutService_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_md_SPSSODescriptor_POP_SingleLogoutService) */

struct zx_md_SingleLogoutService_s* zx_md_SPSSODescriptor_POP_SingleLogoutService(struct zx_md_SPSSODescriptor_s* x)
{
  struct zx_md_SingleLogoutService_s* y;
  if (!x) return 0;
  y = x->SingleLogoutService;
  if (y)
    x->SingleLogoutService = (struct zx_md_SingleLogoutService_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_md_SPSSODescriptor_PUSH_SingleLogoutService) */

void zx_md_SPSSODescriptor_PUSH_SingleLogoutService(struct zx_md_SPSSODescriptor_s* x, struct zx_md_SingleLogoutService_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->SingleLogoutService->gg.g;
  x->SingleLogoutService = z;
}

/* FUNC(zx_md_SPSSODescriptor_REV_SingleLogoutService) */

void zx_md_SPSSODescriptor_REV_SingleLogoutService(struct zx_md_SPSSODescriptor_s* x)
{
  struct zx_md_SingleLogoutService_s* nxt;
  struct zx_md_SingleLogoutService_s* y;
  if (!x) return;
  y = x->SingleLogoutService;
  if (!y) return;
  x->SingleLogoutService = 0;
  while (y) {
    nxt = (struct zx_md_SingleLogoutService_s*)y->gg.g.n;
    y->gg.g.n = &x->SingleLogoutService->gg.g;
    x->SingleLogoutService = y;
    y = nxt;
  }
}

/* FUNC(zx_md_SPSSODescriptor_PUT_SingleLogoutService) */

void zx_md_SPSSODescriptor_PUT_SingleLogoutService(struct zx_md_SPSSODescriptor_s* x, int n, struct zx_md_SingleLogoutService_s* z)
{
  struct zx_md_SingleLogoutService_s* y;
  if (!x || !z) return;
  y = x->SingleLogoutService;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->SingleLogoutService = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_md_SingleLogoutService_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_md_SPSSODescriptor_ADD_SingleLogoutService) */

void zx_md_SPSSODescriptor_ADD_SingleLogoutService(struct zx_md_SPSSODescriptor_s* x, int n, struct zx_md_SingleLogoutService_s* z)
{
  struct zx_md_SingleLogoutService_s* y;
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
    for (; y->gg.g.n; y = (struct zx_md_SingleLogoutService_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->SingleLogoutService; n > 1 && y; --n, y = (struct zx_md_SingleLogoutService_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_md_SPSSODescriptor_DEL_SingleLogoutService) */

void zx_md_SPSSODescriptor_DEL_SingleLogoutService(struct zx_md_SPSSODescriptor_s* x, int n)
{
  struct zx_md_SingleLogoutService_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->SingleLogoutService = (struct zx_md_SingleLogoutService_s*)x->SingleLogoutService->gg.g.n;
    return;
  case -1:
    y = (struct zx_md_SingleLogoutService_s*)x->SingleLogoutService;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_md_SingleLogoutService_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->SingleLogoutService; n > 1 && y->gg.g.n; --n, y = (struct zx_md_SingleLogoutService_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_md_SPSSODescriptor_NUM_ManageNameIDService) */

int zx_md_SPSSODescriptor_NUM_ManageNameIDService(struct zx_md_SPSSODescriptor_s* x)
{
  struct zx_md_ManageNameIDService_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->ManageNameIDService; y; ++n, y = (struct zx_md_ManageNameIDService_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_md_SPSSODescriptor_GET_ManageNameIDService) */

struct zx_md_ManageNameIDService_s* zx_md_SPSSODescriptor_GET_ManageNameIDService(struct zx_md_SPSSODescriptor_s* x, int n)
{
  struct zx_md_ManageNameIDService_s* y;
  if (!x) return 0;
  for (y = x->ManageNameIDService; n>=0 && y; --n, y = (struct zx_md_ManageNameIDService_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_md_SPSSODescriptor_POP_ManageNameIDService) */

struct zx_md_ManageNameIDService_s* zx_md_SPSSODescriptor_POP_ManageNameIDService(struct zx_md_SPSSODescriptor_s* x)
{
  struct zx_md_ManageNameIDService_s* y;
  if (!x) return 0;
  y = x->ManageNameIDService;
  if (y)
    x->ManageNameIDService = (struct zx_md_ManageNameIDService_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_md_SPSSODescriptor_PUSH_ManageNameIDService) */

void zx_md_SPSSODescriptor_PUSH_ManageNameIDService(struct zx_md_SPSSODescriptor_s* x, struct zx_md_ManageNameIDService_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->ManageNameIDService->gg.g;
  x->ManageNameIDService = z;
}

/* FUNC(zx_md_SPSSODescriptor_REV_ManageNameIDService) */

void zx_md_SPSSODescriptor_REV_ManageNameIDService(struct zx_md_SPSSODescriptor_s* x)
{
  struct zx_md_ManageNameIDService_s* nxt;
  struct zx_md_ManageNameIDService_s* y;
  if (!x) return;
  y = x->ManageNameIDService;
  if (!y) return;
  x->ManageNameIDService = 0;
  while (y) {
    nxt = (struct zx_md_ManageNameIDService_s*)y->gg.g.n;
    y->gg.g.n = &x->ManageNameIDService->gg.g;
    x->ManageNameIDService = y;
    y = nxt;
  }
}

/* FUNC(zx_md_SPSSODescriptor_PUT_ManageNameIDService) */

void zx_md_SPSSODescriptor_PUT_ManageNameIDService(struct zx_md_SPSSODescriptor_s* x, int n, struct zx_md_ManageNameIDService_s* z)
{
  struct zx_md_ManageNameIDService_s* y;
  if (!x || !z) return;
  y = x->ManageNameIDService;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->ManageNameIDService = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_md_ManageNameIDService_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_md_SPSSODescriptor_ADD_ManageNameIDService) */

void zx_md_SPSSODescriptor_ADD_ManageNameIDService(struct zx_md_SPSSODescriptor_s* x, int n, struct zx_md_ManageNameIDService_s* z)
{
  struct zx_md_ManageNameIDService_s* y;
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
    for (; y->gg.g.n; y = (struct zx_md_ManageNameIDService_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->ManageNameIDService; n > 1 && y; --n, y = (struct zx_md_ManageNameIDService_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_md_SPSSODescriptor_DEL_ManageNameIDService) */

void zx_md_SPSSODescriptor_DEL_ManageNameIDService(struct zx_md_SPSSODescriptor_s* x, int n)
{
  struct zx_md_ManageNameIDService_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->ManageNameIDService = (struct zx_md_ManageNameIDService_s*)x->ManageNameIDService->gg.g.n;
    return;
  case -1:
    y = (struct zx_md_ManageNameIDService_s*)x->ManageNameIDService;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_md_ManageNameIDService_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->ManageNameIDService; n > 1 && y->gg.g.n; --n, y = (struct zx_md_ManageNameIDService_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_md_SPSSODescriptor_NUM_NameIDFormat) */

int zx_md_SPSSODescriptor_NUM_NameIDFormat(struct zx_md_SPSSODescriptor_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->NameIDFormat; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_md_SPSSODescriptor_GET_NameIDFormat) */

struct zx_elem_s* zx_md_SPSSODescriptor_GET_NameIDFormat(struct zx_md_SPSSODescriptor_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->NameIDFormat; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_md_SPSSODescriptor_POP_NameIDFormat) */

struct zx_elem_s* zx_md_SPSSODescriptor_POP_NameIDFormat(struct zx_md_SPSSODescriptor_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->NameIDFormat;
  if (y)
    x->NameIDFormat = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_md_SPSSODescriptor_PUSH_NameIDFormat) */

void zx_md_SPSSODescriptor_PUSH_NameIDFormat(struct zx_md_SPSSODescriptor_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->NameIDFormat->g;
  x->NameIDFormat = z;
}

/* FUNC(zx_md_SPSSODescriptor_REV_NameIDFormat) */

void zx_md_SPSSODescriptor_REV_NameIDFormat(struct zx_md_SPSSODescriptor_s* x)
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

/* FUNC(zx_md_SPSSODescriptor_PUT_NameIDFormat) */

void zx_md_SPSSODescriptor_PUT_NameIDFormat(struct zx_md_SPSSODescriptor_s* x, int n, struct zx_elem_s* z)
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

/* FUNC(zx_md_SPSSODescriptor_ADD_NameIDFormat) */

void zx_md_SPSSODescriptor_ADD_NameIDFormat(struct zx_md_SPSSODescriptor_s* x, int n, struct zx_elem_s* z)
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

/* FUNC(zx_md_SPSSODescriptor_DEL_NameIDFormat) */

void zx_md_SPSSODescriptor_DEL_NameIDFormat(struct zx_md_SPSSODescriptor_s* x, int n)
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

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_md_SPSSODescriptor_NUM_AssertionConsumerService) */

int zx_md_SPSSODescriptor_NUM_AssertionConsumerService(struct zx_md_SPSSODescriptor_s* x)
{
  struct zx_md_AssertionConsumerService_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->AssertionConsumerService; y; ++n, y = (struct zx_md_AssertionConsumerService_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_md_SPSSODescriptor_GET_AssertionConsumerService) */

struct zx_md_AssertionConsumerService_s* zx_md_SPSSODescriptor_GET_AssertionConsumerService(struct zx_md_SPSSODescriptor_s* x, int n)
{
  struct zx_md_AssertionConsumerService_s* y;
  if (!x) return 0;
  for (y = x->AssertionConsumerService; n>=0 && y; --n, y = (struct zx_md_AssertionConsumerService_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_md_SPSSODescriptor_POP_AssertionConsumerService) */

struct zx_md_AssertionConsumerService_s* zx_md_SPSSODescriptor_POP_AssertionConsumerService(struct zx_md_SPSSODescriptor_s* x)
{
  struct zx_md_AssertionConsumerService_s* y;
  if (!x) return 0;
  y = x->AssertionConsumerService;
  if (y)
    x->AssertionConsumerService = (struct zx_md_AssertionConsumerService_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_md_SPSSODescriptor_PUSH_AssertionConsumerService) */

void zx_md_SPSSODescriptor_PUSH_AssertionConsumerService(struct zx_md_SPSSODescriptor_s* x, struct zx_md_AssertionConsumerService_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->AssertionConsumerService->gg.g;
  x->AssertionConsumerService = z;
}

/* FUNC(zx_md_SPSSODescriptor_REV_AssertionConsumerService) */

void zx_md_SPSSODescriptor_REV_AssertionConsumerService(struct zx_md_SPSSODescriptor_s* x)
{
  struct zx_md_AssertionConsumerService_s* nxt;
  struct zx_md_AssertionConsumerService_s* y;
  if (!x) return;
  y = x->AssertionConsumerService;
  if (!y) return;
  x->AssertionConsumerService = 0;
  while (y) {
    nxt = (struct zx_md_AssertionConsumerService_s*)y->gg.g.n;
    y->gg.g.n = &x->AssertionConsumerService->gg.g;
    x->AssertionConsumerService = y;
    y = nxt;
  }
}

/* FUNC(zx_md_SPSSODescriptor_PUT_AssertionConsumerService) */

void zx_md_SPSSODescriptor_PUT_AssertionConsumerService(struct zx_md_SPSSODescriptor_s* x, int n, struct zx_md_AssertionConsumerService_s* z)
{
  struct zx_md_AssertionConsumerService_s* y;
  if (!x || !z) return;
  y = x->AssertionConsumerService;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->AssertionConsumerService = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_md_AssertionConsumerService_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_md_SPSSODescriptor_ADD_AssertionConsumerService) */

void zx_md_SPSSODescriptor_ADD_AssertionConsumerService(struct zx_md_SPSSODescriptor_s* x, int n, struct zx_md_AssertionConsumerService_s* z)
{
  struct zx_md_AssertionConsumerService_s* y;
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
    for (; y->gg.g.n; y = (struct zx_md_AssertionConsumerService_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->AssertionConsumerService; n > 1 && y; --n, y = (struct zx_md_AssertionConsumerService_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_md_SPSSODescriptor_DEL_AssertionConsumerService) */

void zx_md_SPSSODescriptor_DEL_AssertionConsumerService(struct zx_md_SPSSODescriptor_s* x, int n)
{
  struct zx_md_AssertionConsumerService_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->AssertionConsumerService = (struct zx_md_AssertionConsumerService_s*)x->AssertionConsumerService->gg.g.n;
    return;
  case -1:
    y = (struct zx_md_AssertionConsumerService_s*)x->AssertionConsumerService;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_md_AssertionConsumerService_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->AssertionConsumerService; n > 1 && y->gg.g.n; --n, y = (struct zx_md_AssertionConsumerService_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_md_SPSSODescriptor_NUM_AttributeConsumingService) */

int zx_md_SPSSODescriptor_NUM_AttributeConsumingService(struct zx_md_SPSSODescriptor_s* x)
{
  struct zx_md_AttributeConsumingService_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->AttributeConsumingService; y; ++n, y = (struct zx_md_AttributeConsumingService_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_md_SPSSODescriptor_GET_AttributeConsumingService) */

struct zx_md_AttributeConsumingService_s* zx_md_SPSSODescriptor_GET_AttributeConsumingService(struct zx_md_SPSSODescriptor_s* x, int n)
{
  struct zx_md_AttributeConsumingService_s* y;
  if (!x) return 0;
  for (y = x->AttributeConsumingService; n>=0 && y; --n, y = (struct zx_md_AttributeConsumingService_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_md_SPSSODescriptor_POP_AttributeConsumingService) */

struct zx_md_AttributeConsumingService_s* zx_md_SPSSODescriptor_POP_AttributeConsumingService(struct zx_md_SPSSODescriptor_s* x)
{
  struct zx_md_AttributeConsumingService_s* y;
  if (!x) return 0;
  y = x->AttributeConsumingService;
  if (y)
    x->AttributeConsumingService = (struct zx_md_AttributeConsumingService_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_md_SPSSODescriptor_PUSH_AttributeConsumingService) */

void zx_md_SPSSODescriptor_PUSH_AttributeConsumingService(struct zx_md_SPSSODescriptor_s* x, struct zx_md_AttributeConsumingService_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->AttributeConsumingService->gg.g;
  x->AttributeConsumingService = z;
}

/* FUNC(zx_md_SPSSODescriptor_REV_AttributeConsumingService) */

void zx_md_SPSSODescriptor_REV_AttributeConsumingService(struct zx_md_SPSSODescriptor_s* x)
{
  struct zx_md_AttributeConsumingService_s* nxt;
  struct zx_md_AttributeConsumingService_s* y;
  if (!x) return;
  y = x->AttributeConsumingService;
  if (!y) return;
  x->AttributeConsumingService = 0;
  while (y) {
    nxt = (struct zx_md_AttributeConsumingService_s*)y->gg.g.n;
    y->gg.g.n = &x->AttributeConsumingService->gg.g;
    x->AttributeConsumingService = y;
    y = nxt;
  }
}

/* FUNC(zx_md_SPSSODescriptor_PUT_AttributeConsumingService) */

void zx_md_SPSSODescriptor_PUT_AttributeConsumingService(struct zx_md_SPSSODescriptor_s* x, int n, struct zx_md_AttributeConsumingService_s* z)
{
  struct zx_md_AttributeConsumingService_s* y;
  if (!x || !z) return;
  y = x->AttributeConsumingService;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->AttributeConsumingService = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_md_AttributeConsumingService_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_md_SPSSODescriptor_ADD_AttributeConsumingService) */

void zx_md_SPSSODescriptor_ADD_AttributeConsumingService(struct zx_md_SPSSODescriptor_s* x, int n, struct zx_md_AttributeConsumingService_s* z)
{
  struct zx_md_AttributeConsumingService_s* y;
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
    for (; y->gg.g.n; y = (struct zx_md_AttributeConsumingService_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->AttributeConsumingService; n > 1 && y; --n, y = (struct zx_md_AttributeConsumingService_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_md_SPSSODescriptor_DEL_AttributeConsumingService) */

void zx_md_SPSSODescriptor_DEL_AttributeConsumingService(struct zx_md_SPSSODescriptor_s* x, int n)
{
  struct zx_md_AttributeConsumingService_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->AttributeConsumingService = (struct zx_md_AttributeConsumingService_s*)x->AttributeConsumingService->gg.g.n;
    return;
  case -1:
    y = (struct zx_md_AttributeConsumingService_s*)x->AttributeConsumingService;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_md_AttributeConsumingService_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->AttributeConsumingService; n > 1 && y->gg.g.n; --n, y = (struct zx_md_AttributeConsumingService_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif

/* FUNC(zx_md_SPSSODescriptor_GET_ID) */
struct zx_str* zx_md_SPSSODescriptor_GET_ID(struct zx_md_SPSSODescriptor_s* x) { return x->ID; }
/* FUNC(zx_md_SPSSODescriptor_PUT_ID) */
void zx_md_SPSSODescriptor_PUT_ID(struct zx_md_SPSSODescriptor_s* x, struct zx_str* y) { x->ID = y; }
/* FUNC(zx_md_SPSSODescriptor_GET_validUntil) */
struct zx_str* zx_md_SPSSODescriptor_GET_validUntil(struct zx_md_SPSSODescriptor_s* x) { return x->validUntil; }
/* FUNC(zx_md_SPSSODescriptor_PUT_validUntil) */
void zx_md_SPSSODescriptor_PUT_validUntil(struct zx_md_SPSSODescriptor_s* x, struct zx_str* y) { x->validUntil = y; }
/* FUNC(zx_md_SPSSODescriptor_GET_cacheDuration) */
struct zx_str* zx_md_SPSSODescriptor_GET_cacheDuration(struct zx_md_SPSSODescriptor_s* x) { return x->cacheDuration; }
/* FUNC(zx_md_SPSSODescriptor_PUT_cacheDuration) */
void zx_md_SPSSODescriptor_PUT_cacheDuration(struct zx_md_SPSSODescriptor_s* x, struct zx_str* y) { x->cacheDuration = y; }
/* FUNC(zx_md_SPSSODescriptor_GET_protocolSupportEnumeration) */
struct zx_str* zx_md_SPSSODescriptor_GET_protocolSupportEnumeration(struct zx_md_SPSSODescriptor_s* x) { return x->protocolSupportEnumeration; }
/* FUNC(zx_md_SPSSODescriptor_PUT_protocolSupportEnumeration) */
void zx_md_SPSSODescriptor_PUT_protocolSupportEnumeration(struct zx_md_SPSSODescriptor_s* x, struct zx_str* y) { x->protocolSupportEnumeration = y; }
/* FUNC(zx_md_SPSSODescriptor_GET_errorURL) */
struct zx_str* zx_md_SPSSODescriptor_GET_errorURL(struct zx_md_SPSSODescriptor_s* x) { return x->errorURL; }
/* FUNC(zx_md_SPSSODescriptor_PUT_errorURL) */
void zx_md_SPSSODescriptor_PUT_errorURL(struct zx_md_SPSSODescriptor_s* x, struct zx_str* y) { x->errorURL = y; }
/* FUNC(zx_md_SPSSODescriptor_GET_AuthnRequestsSigned) */
struct zx_str* zx_md_SPSSODescriptor_GET_AuthnRequestsSigned(struct zx_md_SPSSODescriptor_s* x) { return x->AuthnRequestsSigned; }
/* FUNC(zx_md_SPSSODescriptor_PUT_AuthnRequestsSigned) */
void zx_md_SPSSODescriptor_PUT_AuthnRequestsSigned(struct zx_md_SPSSODescriptor_s* x, struct zx_str* y) { x->AuthnRequestsSigned = y; }
/* FUNC(zx_md_SPSSODescriptor_GET_WantAssertionsSigned) */
struct zx_str* zx_md_SPSSODescriptor_GET_WantAssertionsSigned(struct zx_md_SPSSODescriptor_s* x) { return x->WantAssertionsSigned; }
/* FUNC(zx_md_SPSSODescriptor_PUT_WantAssertionsSigned) */
void zx_md_SPSSODescriptor_PUT_WantAssertionsSigned(struct zx_md_SPSSODescriptor_s* x, struct zx_str* y) { x->WantAssertionsSigned = y; }





/* FUNC(zx_md_ServiceDescription_GET_lang) */
struct zx_str* zx_md_ServiceDescription_GET_lang(struct zx_md_ServiceDescription_s* x) { return x->lang; }
/* FUNC(zx_md_ServiceDescription_PUT_lang) */
void zx_md_ServiceDescription_PUT_lang(struct zx_md_ServiceDescription_s* x, struct zx_str* y) { x->lang = y; }





/* FUNC(zx_md_ServiceName_GET_lang) */
struct zx_str* zx_md_ServiceName_GET_lang(struct zx_md_ServiceName_s* x) { return x->lang; }
/* FUNC(zx_md_ServiceName_PUT_lang) */
void zx_md_ServiceName_PUT_lang(struct zx_md_ServiceName_s* x, struct zx_str* y) { x->lang = y; }





/* FUNC(zx_md_SingleLogoutService_GET_Binding) */
struct zx_str* zx_md_SingleLogoutService_GET_Binding(struct zx_md_SingleLogoutService_s* x) { return x->Binding; }
/* FUNC(zx_md_SingleLogoutService_PUT_Binding) */
void zx_md_SingleLogoutService_PUT_Binding(struct zx_md_SingleLogoutService_s* x, struct zx_str* y) { x->Binding = y; }
/* FUNC(zx_md_SingleLogoutService_GET_Location) */
struct zx_str* zx_md_SingleLogoutService_GET_Location(struct zx_md_SingleLogoutService_s* x) { return x->Location; }
/* FUNC(zx_md_SingleLogoutService_PUT_Location) */
void zx_md_SingleLogoutService_PUT_Location(struct zx_md_SingleLogoutService_s* x, struct zx_str* y) { x->Location = y; }
/* FUNC(zx_md_SingleLogoutService_GET_ResponseLocation) */
struct zx_str* zx_md_SingleLogoutService_GET_ResponseLocation(struct zx_md_SingleLogoutService_s* x) { return x->ResponseLocation; }
/* FUNC(zx_md_SingleLogoutService_PUT_ResponseLocation) */
void zx_md_SingleLogoutService_PUT_ResponseLocation(struct zx_md_SingleLogoutService_s* x, struct zx_str* y) { x->ResponseLocation = y; }
/* FUNC(zx_md_SingleLogoutService_GET_index) */
struct zx_str* zx_md_SingleLogoutService_GET_index(struct zx_md_SingleLogoutService_s* x) { return x->index; }
/* FUNC(zx_md_SingleLogoutService_PUT_index) */
void zx_md_SingleLogoutService_PUT_index(struct zx_md_SingleLogoutService_s* x, struct zx_str* y) { x->index = y; }
/* FUNC(zx_md_SingleLogoutService_GET_isDefault) */
struct zx_str* zx_md_SingleLogoutService_GET_isDefault(struct zx_md_SingleLogoutService_s* x) { return x->isDefault; }
/* FUNC(zx_md_SingleLogoutService_PUT_isDefault) */
void zx_md_SingleLogoutService_PUT_isDefault(struct zx_md_SingleLogoutService_s* x, struct zx_str* y) { x->isDefault = y; }





/* FUNC(zx_md_SingleSignOnService_GET_Binding) */
struct zx_str* zx_md_SingleSignOnService_GET_Binding(struct zx_md_SingleSignOnService_s* x) { return x->Binding; }
/* FUNC(zx_md_SingleSignOnService_PUT_Binding) */
void zx_md_SingleSignOnService_PUT_Binding(struct zx_md_SingleSignOnService_s* x, struct zx_str* y) { x->Binding = y; }
/* FUNC(zx_md_SingleSignOnService_GET_Location) */
struct zx_str* zx_md_SingleSignOnService_GET_Location(struct zx_md_SingleSignOnService_s* x) { return x->Location; }
/* FUNC(zx_md_SingleSignOnService_PUT_Location) */
void zx_md_SingleSignOnService_PUT_Location(struct zx_md_SingleSignOnService_s* x, struct zx_str* y) { x->Location = y; }
/* FUNC(zx_md_SingleSignOnService_GET_ResponseLocation) */
struct zx_str* zx_md_SingleSignOnService_GET_ResponseLocation(struct zx_md_SingleSignOnService_s* x) { return x->ResponseLocation; }
/* FUNC(zx_md_SingleSignOnService_PUT_ResponseLocation) */
void zx_md_SingleSignOnService_PUT_ResponseLocation(struct zx_md_SingleSignOnService_s* x, struct zx_str* y) { x->ResponseLocation = y; }
/* FUNC(zx_md_SingleSignOnService_GET_index) */
struct zx_str* zx_md_SingleSignOnService_GET_index(struct zx_md_SingleSignOnService_s* x) { return x->index; }
/* FUNC(zx_md_SingleSignOnService_PUT_index) */
void zx_md_SingleSignOnService_PUT_index(struct zx_md_SingleSignOnService_s* x, struct zx_str* y) { x->index = y; }
/* FUNC(zx_md_SingleSignOnService_GET_isDefault) */
struct zx_str* zx_md_SingleSignOnService_GET_isDefault(struct zx_md_SingleSignOnService_s* x) { return x->isDefault; }
/* FUNC(zx_md_SingleSignOnService_PUT_isDefault) */
void zx_md_SingleSignOnService_PUT_isDefault(struct zx_md_SingleSignOnService_s* x, struct zx_str* y) { x->isDefault = y; }





/* EOF -- c/zx-md-getput.c */