/* c/zx-sp-getput.c - WARNING: This file was automatically generated. DO NOT EDIT!
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
#include "c/zx-sp-data.h"



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_sp_ArtifactResolve_NUM_Issuer) */

int zx_sp_ArtifactResolve_NUM_Issuer(struct zx_sp_ArtifactResolve_s* x)
{
  struct zx_sa_Issuer_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Issuer; y; ++n, y = (struct zx_sa_Issuer_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_sp_ArtifactResolve_GET_Issuer) */

struct zx_sa_Issuer_s* zx_sp_ArtifactResolve_GET_Issuer(struct zx_sp_ArtifactResolve_s* x, int n)
{
  struct zx_sa_Issuer_s* y;
  if (!x) return 0;
  for (y = x->Issuer; n>=0 && y; --n, y = (struct zx_sa_Issuer_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_sp_ArtifactResolve_POP_Issuer) */

struct zx_sa_Issuer_s* zx_sp_ArtifactResolve_POP_Issuer(struct zx_sp_ArtifactResolve_s* x)
{
  struct zx_sa_Issuer_s* y;
  if (!x) return 0;
  y = x->Issuer;
  if (y)
    x->Issuer = (struct zx_sa_Issuer_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_sp_ArtifactResolve_PUSH_Issuer) */

void zx_sp_ArtifactResolve_PUSH_Issuer(struct zx_sp_ArtifactResolve_s* x, struct zx_sa_Issuer_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Issuer->gg.g;
  x->Issuer = z;
}

/* FUNC(zx_sp_ArtifactResolve_REV_Issuer) */

void zx_sp_ArtifactResolve_REV_Issuer(struct zx_sp_ArtifactResolve_s* x)
{
  struct zx_sa_Issuer_s* nxt;
  struct zx_sa_Issuer_s* y;
  if (!x) return;
  y = x->Issuer;
  if (!y) return;
  x->Issuer = 0;
  while (y) {
    nxt = (struct zx_sa_Issuer_s*)y->gg.g.n;
    y->gg.g.n = &x->Issuer->gg.g;
    x->Issuer = y;
    y = nxt;
  }
}

/* FUNC(zx_sp_ArtifactResolve_PUT_Issuer) */

void zx_sp_ArtifactResolve_PUT_Issuer(struct zx_sp_ArtifactResolve_s* x, int n, struct zx_sa_Issuer_s* z)
{
  struct zx_sa_Issuer_s* y;
  if (!x || !z) return;
  y = x->Issuer;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Issuer = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_sa_Issuer_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_sp_ArtifactResolve_ADD_Issuer) */

void zx_sp_ArtifactResolve_ADD_Issuer(struct zx_sp_ArtifactResolve_s* x, int n, struct zx_sa_Issuer_s* z)
{
  struct zx_sa_Issuer_s* y;
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
    for (; y->gg.g.n; y = (struct zx_sa_Issuer_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Issuer; n > 1 && y; --n, y = (struct zx_sa_Issuer_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_sp_ArtifactResolve_DEL_Issuer) */

void zx_sp_ArtifactResolve_DEL_Issuer(struct zx_sp_ArtifactResolve_s* x, int n)
{
  struct zx_sa_Issuer_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Issuer = (struct zx_sa_Issuer_s*)x->Issuer->gg.g.n;
    return;
  case -1:
    y = (struct zx_sa_Issuer_s*)x->Issuer;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_sa_Issuer_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Issuer; n > 1 && y->gg.g.n; --n, y = (struct zx_sa_Issuer_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_sp_ArtifactResolve_NUM_Signature) */

int zx_sp_ArtifactResolve_NUM_Signature(struct zx_sp_ArtifactResolve_s* x)
{
  struct zx_ds_Signature_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Signature; y; ++n, y = (struct zx_ds_Signature_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_sp_ArtifactResolve_GET_Signature) */

struct zx_ds_Signature_s* zx_sp_ArtifactResolve_GET_Signature(struct zx_sp_ArtifactResolve_s* x, int n)
{
  struct zx_ds_Signature_s* y;
  if (!x) return 0;
  for (y = x->Signature; n>=0 && y; --n, y = (struct zx_ds_Signature_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_sp_ArtifactResolve_POP_Signature) */

struct zx_ds_Signature_s* zx_sp_ArtifactResolve_POP_Signature(struct zx_sp_ArtifactResolve_s* x)
{
  struct zx_ds_Signature_s* y;
  if (!x) return 0;
  y = x->Signature;
  if (y)
    x->Signature = (struct zx_ds_Signature_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_sp_ArtifactResolve_PUSH_Signature) */

void zx_sp_ArtifactResolve_PUSH_Signature(struct zx_sp_ArtifactResolve_s* x, struct zx_ds_Signature_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Signature->gg.g;
  x->Signature = z;
}

/* FUNC(zx_sp_ArtifactResolve_REV_Signature) */

void zx_sp_ArtifactResolve_REV_Signature(struct zx_sp_ArtifactResolve_s* x)
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

/* FUNC(zx_sp_ArtifactResolve_PUT_Signature) */

void zx_sp_ArtifactResolve_PUT_Signature(struct zx_sp_ArtifactResolve_s* x, int n, struct zx_ds_Signature_s* z)
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

/* FUNC(zx_sp_ArtifactResolve_ADD_Signature) */

void zx_sp_ArtifactResolve_ADD_Signature(struct zx_sp_ArtifactResolve_s* x, int n, struct zx_ds_Signature_s* z)
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

/* FUNC(zx_sp_ArtifactResolve_DEL_Signature) */

void zx_sp_ArtifactResolve_DEL_Signature(struct zx_sp_ArtifactResolve_s* x, int n)
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

/* FUNC(zx_sp_ArtifactResolve_NUM_Extensions) */

int zx_sp_ArtifactResolve_NUM_Extensions(struct zx_sp_ArtifactResolve_s* x)
{
  struct zx_sp_Extensions_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Extensions; y; ++n, y = (struct zx_sp_Extensions_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_sp_ArtifactResolve_GET_Extensions) */

struct zx_sp_Extensions_s* zx_sp_ArtifactResolve_GET_Extensions(struct zx_sp_ArtifactResolve_s* x, int n)
{
  struct zx_sp_Extensions_s* y;
  if (!x) return 0;
  for (y = x->Extensions; n>=0 && y; --n, y = (struct zx_sp_Extensions_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_sp_ArtifactResolve_POP_Extensions) */

struct zx_sp_Extensions_s* zx_sp_ArtifactResolve_POP_Extensions(struct zx_sp_ArtifactResolve_s* x)
{
  struct zx_sp_Extensions_s* y;
  if (!x) return 0;
  y = x->Extensions;
  if (y)
    x->Extensions = (struct zx_sp_Extensions_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_sp_ArtifactResolve_PUSH_Extensions) */

void zx_sp_ArtifactResolve_PUSH_Extensions(struct zx_sp_ArtifactResolve_s* x, struct zx_sp_Extensions_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Extensions->gg.g;
  x->Extensions = z;
}

/* FUNC(zx_sp_ArtifactResolve_REV_Extensions) */

void zx_sp_ArtifactResolve_REV_Extensions(struct zx_sp_ArtifactResolve_s* x)
{
  struct zx_sp_Extensions_s* nxt;
  struct zx_sp_Extensions_s* y;
  if (!x) return;
  y = x->Extensions;
  if (!y) return;
  x->Extensions = 0;
  while (y) {
    nxt = (struct zx_sp_Extensions_s*)y->gg.g.n;
    y->gg.g.n = &x->Extensions->gg.g;
    x->Extensions = y;
    y = nxt;
  }
}

/* FUNC(zx_sp_ArtifactResolve_PUT_Extensions) */

void zx_sp_ArtifactResolve_PUT_Extensions(struct zx_sp_ArtifactResolve_s* x, int n, struct zx_sp_Extensions_s* z)
{
  struct zx_sp_Extensions_s* y;
  if (!x || !z) return;
  y = x->Extensions;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Extensions = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_sp_Extensions_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_sp_ArtifactResolve_ADD_Extensions) */

void zx_sp_ArtifactResolve_ADD_Extensions(struct zx_sp_ArtifactResolve_s* x, int n, struct zx_sp_Extensions_s* z)
{
  struct zx_sp_Extensions_s* y;
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
    for (; y->gg.g.n; y = (struct zx_sp_Extensions_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Extensions; n > 1 && y; --n, y = (struct zx_sp_Extensions_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_sp_ArtifactResolve_DEL_Extensions) */

void zx_sp_ArtifactResolve_DEL_Extensions(struct zx_sp_ArtifactResolve_s* x, int n)
{
  struct zx_sp_Extensions_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Extensions = (struct zx_sp_Extensions_s*)x->Extensions->gg.g.n;
    return;
  case -1:
    y = (struct zx_sp_Extensions_s*)x->Extensions;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_sp_Extensions_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Extensions; n > 1 && y->gg.g.n; --n, y = (struct zx_sp_Extensions_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_sp_ArtifactResolve_NUM_Artifact) */

int zx_sp_ArtifactResolve_NUM_Artifact(struct zx_sp_ArtifactResolve_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Artifact; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_sp_ArtifactResolve_GET_Artifact) */

struct zx_elem_s* zx_sp_ArtifactResolve_GET_Artifact(struct zx_sp_ArtifactResolve_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->Artifact; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_sp_ArtifactResolve_POP_Artifact) */

struct zx_elem_s* zx_sp_ArtifactResolve_POP_Artifact(struct zx_sp_ArtifactResolve_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->Artifact;
  if (y)
    x->Artifact = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_sp_ArtifactResolve_PUSH_Artifact) */

void zx_sp_ArtifactResolve_PUSH_Artifact(struct zx_sp_ArtifactResolve_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->Artifact->g;
  x->Artifact = z;
}

/* FUNC(zx_sp_ArtifactResolve_REV_Artifact) */

void zx_sp_ArtifactResolve_REV_Artifact(struct zx_sp_ArtifactResolve_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->Artifact;
  if (!y) return;
  x->Artifact = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->Artifact->g;
    x->Artifact = y;
    y = nxt;
  }
}

/* FUNC(zx_sp_ArtifactResolve_PUT_Artifact) */

void zx_sp_ArtifactResolve_PUT_Artifact(struct zx_sp_ArtifactResolve_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->Artifact;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->Artifact = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_sp_ArtifactResolve_ADD_Artifact) */

void zx_sp_ArtifactResolve_ADD_Artifact(struct zx_sp_ArtifactResolve_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->Artifact->g;
    x->Artifact = z;
    return;
  case -1:
    y = x->Artifact;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->Artifact; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_sp_ArtifactResolve_DEL_Artifact) */

void zx_sp_ArtifactResolve_DEL_Artifact(struct zx_sp_ArtifactResolve_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Artifact = (struct zx_elem_s*)x->Artifact->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->Artifact;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->Artifact; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

#endif

/* FUNC(zx_sp_ArtifactResolve_GET_Consent) */
struct zx_str* zx_sp_ArtifactResolve_GET_Consent(struct zx_sp_ArtifactResolve_s* x) { return x->Consent; }
/* FUNC(zx_sp_ArtifactResolve_PUT_Consent) */
void zx_sp_ArtifactResolve_PUT_Consent(struct zx_sp_ArtifactResolve_s* x, struct zx_str* y) { x->Consent = y; }
/* FUNC(zx_sp_ArtifactResolve_GET_Destination) */
struct zx_str* zx_sp_ArtifactResolve_GET_Destination(struct zx_sp_ArtifactResolve_s* x) { return x->Destination; }
/* FUNC(zx_sp_ArtifactResolve_PUT_Destination) */
void zx_sp_ArtifactResolve_PUT_Destination(struct zx_sp_ArtifactResolve_s* x, struct zx_str* y) { x->Destination = y; }
/* FUNC(zx_sp_ArtifactResolve_GET_ID) */
struct zx_str* zx_sp_ArtifactResolve_GET_ID(struct zx_sp_ArtifactResolve_s* x) { return x->ID; }
/* FUNC(zx_sp_ArtifactResolve_PUT_ID) */
void zx_sp_ArtifactResolve_PUT_ID(struct zx_sp_ArtifactResolve_s* x, struct zx_str* y) { x->ID = y; }
/* FUNC(zx_sp_ArtifactResolve_GET_IssueInstant) */
struct zx_str* zx_sp_ArtifactResolve_GET_IssueInstant(struct zx_sp_ArtifactResolve_s* x) { return x->IssueInstant; }
/* FUNC(zx_sp_ArtifactResolve_PUT_IssueInstant) */
void zx_sp_ArtifactResolve_PUT_IssueInstant(struct zx_sp_ArtifactResolve_s* x, struct zx_str* y) { x->IssueInstant = y; }
/* FUNC(zx_sp_ArtifactResolve_GET_Version) */
struct zx_str* zx_sp_ArtifactResolve_GET_Version(struct zx_sp_ArtifactResolve_s* x) { return x->Version; }
/* FUNC(zx_sp_ArtifactResolve_PUT_Version) */
void zx_sp_ArtifactResolve_PUT_Version(struct zx_sp_ArtifactResolve_s* x, struct zx_str* y) { x->Version = y; }







#ifdef ZX_ENA_GETPUT

/* FUNC(zx_sp_ArtifactResponse_NUM_Issuer) */

int zx_sp_ArtifactResponse_NUM_Issuer(struct zx_sp_ArtifactResponse_s* x)
{
  struct zx_sa_Issuer_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Issuer; y; ++n, y = (struct zx_sa_Issuer_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_sp_ArtifactResponse_GET_Issuer) */

struct zx_sa_Issuer_s* zx_sp_ArtifactResponse_GET_Issuer(struct zx_sp_ArtifactResponse_s* x, int n)
{
  struct zx_sa_Issuer_s* y;
  if (!x) return 0;
  for (y = x->Issuer; n>=0 && y; --n, y = (struct zx_sa_Issuer_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_sp_ArtifactResponse_POP_Issuer) */

struct zx_sa_Issuer_s* zx_sp_ArtifactResponse_POP_Issuer(struct zx_sp_ArtifactResponse_s* x)
{
  struct zx_sa_Issuer_s* y;
  if (!x) return 0;
  y = x->Issuer;
  if (y)
    x->Issuer = (struct zx_sa_Issuer_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_sp_ArtifactResponse_PUSH_Issuer) */

void zx_sp_ArtifactResponse_PUSH_Issuer(struct zx_sp_ArtifactResponse_s* x, struct zx_sa_Issuer_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Issuer->gg.g;
  x->Issuer = z;
}

/* FUNC(zx_sp_ArtifactResponse_REV_Issuer) */

void zx_sp_ArtifactResponse_REV_Issuer(struct zx_sp_ArtifactResponse_s* x)
{
  struct zx_sa_Issuer_s* nxt;
  struct zx_sa_Issuer_s* y;
  if (!x) return;
  y = x->Issuer;
  if (!y) return;
  x->Issuer = 0;
  while (y) {
    nxt = (struct zx_sa_Issuer_s*)y->gg.g.n;
    y->gg.g.n = &x->Issuer->gg.g;
    x->Issuer = y;
    y = nxt;
  }
}

/* FUNC(zx_sp_ArtifactResponse_PUT_Issuer) */

void zx_sp_ArtifactResponse_PUT_Issuer(struct zx_sp_ArtifactResponse_s* x, int n, struct zx_sa_Issuer_s* z)
{
  struct zx_sa_Issuer_s* y;
  if (!x || !z) return;
  y = x->Issuer;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Issuer = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_sa_Issuer_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_sp_ArtifactResponse_ADD_Issuer) */

void zx_sp_ArtifactResponse_ADD_Issuer(struct zx_sp_ArtifactResponse_s* x, int n, struct zx_sa_Issuer_s* z)
{
  struct zx_sa_Issuer_s* y;
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
    for (; y->gg.g.n; y = (struct zx_sa_Issuer_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Issuer; n > 1 && y; --n, y = (struct zx_sa_Issuer_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_sp_ArtifactResponse_DEL_Issuer) */

void zx_sp_ArtifactResponse_DEL_Issuer(struct zx_sp_ArtifactResponse_s* x, int n)
{
  struct zx_sa_Issuer_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Issuer = (struct zx_sa_Issuer_s*)x->Issuer->gg.g.n;
    return;
  case -1:
    y = (struct zx_sa_Issuer_s*)x->Issuer;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_sa_Issuer_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Issuer; n > 1 && y->gg.g.n; --n, y = (struct zx_sa_Issuer_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_sp_ArtifactResponse_NUM_Signature) */

int zx_sp_ArtifactResponse_NUM_Signature(struct zx_sp_ArtifactResponse_s* x)
{
  struct zx_ds_Signature_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Signature; y; ++n, y = (struct zx_ds_Signature_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_sp_ArtifactResponse_GET_Signature) */

struct zx_ds_Signature_s* zx_sp_ArtifactResponse_GET_Signature(struct zx_sp_ArtifactResponse_s* x, int n)
{
  struct zx_ds_Signature_s* y;
  if (!x) return 0;
  for (y = x->Signature; n>=0 && y; --n, y = (struct zx_ds_Signature_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_sp_ArtifactResponse_POP_Signature) */

struct zx_ds_Signature_s* zx_sp_ArtifactResponse_POP_Signature(struct zx_sp_ArtifactResponse_s* x)
{
  struct zx_ds_Signature_s* y;
  if (!x) return 0;
  y = x->Signature;
  if (y)
    x->Signature = (struct zx_ds_Signature_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_sp_ArtifactResponse_PUSH_Signature) */

void zx_sp_ArtifactResponse_PUSH_Signature(struct zx_sp_ArtifactResponse_s* x, struct zx_ds_Signature_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Signature->gg.g;
  x->Signature = z;
}

/* FUNC(zx_sp_ArtifactResponse_REV_Signature) */

void zx_sp_ArtifactResponse_REV_Signature(struct zx_sp_ArtifactResponse_s* x)
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

/* FUNC(zx_sp_ArtifactResponse_PUT_Signature) */

void zx_sp_ArtifactResponse_PUT_Signature(struct zx_sp_ArtifactResponse_s* x, int n, struct zx_ds_Signature_s* z)
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

/* FUNC(zx_sp_ArtifactResponse_ADD_Signature) */

void zx_sp_ArtifactResponse_ADD_Signature(struct zx_sp_ArtifactResponse_s* x, int n, struct zx_ds_Signature_s* z)
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

/* FUNC(zx_sp_ArtifactResponse_DEL_Signature) */

void zx_sp_ArtifactResponse_DEL_Signature(struct zx_sp_ArtifactResponse_s* x, int n)
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

/* FUNC(zx_sp_ArtifactResponse_NUM_Extensions) */

int zx_sp_ArtifactResponse_NUM_Extensions(struct zx_sp_ArtifactResponse_s* x)
{
  struct zx_sp_Extensions_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Extensions; y; ++n, y = (struct zx_sp_Extensions_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_sp_ArtifactResponse_GET_Extensions) */

struct zx_sp_Extensions_s* zx_sp_ArtifactResponse_GET_Extensions(struct zx_sp_ArtifactResponse_s* x, int n)
{
  struct zx_sp_Extensions_s* y;
  if (!x) return 0;
  for (y = x->Extensions; n>=0 && y; --n, y = (struct zx_sp_Extensions_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_sp_ArtifactResponse_POP_Extensions) */

struct zx_sp_Extensions_s* zx_sp_ArtifactResponse_POP_Extensions(struct zx_sp_ArtifactResponse_s* x)
{
  struct zx_sp_Extensions_s* y;
  if (!x) return 0;
  y = x->Extensions;
  if (y)
    x->Extensions = (struct zx_sp_Extensions_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_sp_ArtifactResponse_PUSH_Extensions) */

void zx_sp_ArtifactResponse_PUSH_Extensions(struct zx_sp_ArtifactResponse_s* x, struct zx_sp_Extensions_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Extensions->gg.g;
  x->Extensions = z;
}

/* FUNC(zx_sp_ArtifactResponse_REV_Extensions) */

void zx_sp_ArtifactResponse_REV_Extensions(struct zx_sp_ArtifactResponse_s* x)
{
  struct zx_sp_Extensions_s* nxt;
  struct zx_sp_Extensions_s* y;
  if (!x) return;
  y = x->Extensions;
  if (!y) return;
  x->Extensions = 0;
  while (y) {
    nxt = (struct zx_sp_Extensions_s*)y->gg.g.n;
    y->gg.g.n = &x->Extensions->gg.g;
    x->Extensions = y;
    y = nxt;
  }
}

/* FUNC(zx_sp_ArtifactResponse_PUT_Extensions) */

void zx_sp_ArtifactResponse_PUT_Extensions(struct zx_sp_ArtifactResponse_s* x, int n, struct zx_sp_Extensions_s* z)
{
  struct zx_sp_Extensions_s* y;
  if (!x || !z) return;
  y = x->Extensions;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Extensions = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_sp_Extensions_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_sp_ArtifactResponse_ADD_Extensions) */

void zx_sp_ArtifactResponse_ADD_Extensions(struct zx_sp_ArtifactResponse_s* x, int n, struct zx_sp_Extensions_s* z)
{
  struct zx_sp_Extensions_s* y;
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
    for (; y->gg.g.n; y = (struct zx_sp_Extensions_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Extensions; n > 1 && y; --n, y = (struct zx_sp_Extensions_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_sp_ArtifactResponse_DEL_Extensions) */

void zx_sp_ArtifactResponse_DEL_Extensions(struct zx_sp_ArtifactResponse_s* x, int n)
{
  struct zx_sp_Extensions_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Extensions = (struct zx_sp_Extensions_s*)x->Extensions->gg.g.n;
    return;
  case -1:
    y = (struct zx_sp_Extensions_s*)x->Extensions;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_sp_Extensions_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Extensions; n > 1 && y->gg.g.n; --n, y = (struct zx_sp_Extensions_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_sp_ArtifactResponse_NUM_Status) */

int zx_sp_ArtifactResponse_NUM_Status(struct zx_sp_ArtifactResponse_s* x)
{
  struct zx_sp_Status_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Status; y; ++n, y = (struct zx_sp_Status_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_sp_ArtifactResponse_GET_Status) */

struct zx_sp_Status_s* zx_sp_ArtifactResponse_GET_Status(struct zx_sp_ArtifactResponse_s* x, int n)
{
  struct zx_sp_Status_s* y;
  if (!x) return 0;
  for (y = x->Status; n>=0 && y; --n, y = (struct zx_sp_Status_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_sp_ArtifactResponse_POP_Status) */

struct zx_sp_Status_s* zx_sp_ArtifactResponse_POP_Status(struct zx_sp_ArtifactResponse_s* x)
{
  struct zx_sp_Status_s* y;
  if (!x) return 0;
  y = x->Status;
  if (y)
    x->Status = (struct zx_sp_Status_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_sp_ArtifactResponse_PUSH_Status) */

void zx_sp_ArtifactResponse_PUSH_Status(struct zx_sp_ArtifactResponse_s* x, struct zx_sp_Status_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Status->gg.g;
  x->Status = z;
}

/* FUNC(zx_sp_ArtifactResponse_REV_Status) */

void zx_sp_ArtifactResponse_REV_Status(struct zx_sp_ArtifactResponse_s* x)
{
  struct zx_sp_Status_s* nxt;
  struct zx_sp_Status_s* y;
  if (!x) return;
  y = x->Status;
  if (!y) return;
  x->Status = 0;
  while (y) {
    nxt = (struct zx_sp_Status_s*)y->gg.g.n;
    y->gg.g.n = &x->Status->gg.g;
    x->Status = y;
    y = nxt;
  }
}

/* FUNC(zx_sp_ArtifactResponse_PUT_Status) */

void zx_sp_ArtifactResponse_PUT_Status(struct zx_sp_ArtifactResponse_s* x, int n, struct zx_sp_Status_s* z)
{
  struct zx_sp_Status_s* y;
  if (!x || !z) return;
  y = x->Status;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Status = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_sp_Status_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_sp_ArtifactResponse_ADD_Status) */

void zx_sp_ArtifactResponse_ADD_Status(struct zx_sp_ArtifactResponse_s* x, int n, struct zx_sp_Status_s* z)
{
  struct zx_sp_Status_s* y;
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
    for (; y->gg.g.n; y = (struct zx_sp_Status_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Status; n > 1 && y; --n, y = (struct zx_sp_Status_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_sp_ArtifactResponse_DEL_Status) */

void zx_sp_ArtifactResponse_DEL_Status(struct zx_sp_ArtifactResponse_s* x, int n)
{
  struct zx_sp_Status_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Status = (struct zx_sp_Status_s*)x->Status->gg.g.n;
    return;
  case -1:
    y = (struct zx_sp_Status_s*)x->Status;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_sp_Status_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Status; n > 1 && y->gg.g.n; --n, y = (struct zx_sp_Status_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_sp_ArtifactResponse_NUM_Response) */

int zx_sp_ArtifactResponse_NUM_Response(struct zx_sp_ArtifactResponse_s* x)
{
  struct zx_sp_Response_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Response; y; ++n, y = (struct zx_sp_Response_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_sp_ArtifactResponse_GET_Response) */

struct zx_sp_Response_s* zx_sp_ArtifactResponse_GET_Response(struct zx_sp_ArtifactResponse_s* x, int n)
{
  struct zx_sp_Response_s* y;
  if (!x) return 0;
  for (y = x->Response; n>=0 && y; --n, y = (struct zx_sp_Response_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_sp_ArtifactResponse_POP_Response) */

struct zx_sp_Response_s* zx_sp_ArtifactResponse_POP_Response(struct zx_sp_ArtifactResponse_s* x)
{
  struct zx_sp_Response_s* y;
  if (!x) return 0;
  y = x->Response;
  if (y)
    x->Response = (struct zx_sp_Response_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_sp_ArtifactResponse_PUSH_Response) */

void zx_sp_ArtifactResponse_PUSH_Response(struct zx_sp_ArtifactResponse_s* x, struct zx_sp_Response_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Response->gg.g;
  x->Response = z;
}

/* FUNC(zx_sp_ArtifactResponse_REV_Response) */

void zx_sp_ArtifactResponse_REV_Response(struct zx_sp_ArtifactResponse_s* x)
{
  struct zx_sp_Response_s* nxt;
  struct zx_sp_Response_s* y;
  if (!x) return;
  y = x->Response;
  if (!y) return;
  x->Response = 0;
  while (y) {
    nxt = (struct zx_sp_Response_s*)y->gg.g.n;
    y->gg.g.n = &x->Response->gg.g;
    x->Response = y;
    y = nxt;
  }
}

/* FUNC(zx_sp_ArtifactResponse_PUT_Response) */

void zx_sp_ArtifactResponse_PUT_Response(struct zx_sp_ArtifactResponse_s* x, int n, struct zx_sp_Response_s* z)
{
  struct zx_sp_Response_s* y;
  if (!x || !z) return;
  y = x->Response;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Response = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_sp_Response_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_sp_ArtifactResponse_ADD_Response) */

void zx_sp_ArtifactResponse_ADD_Response(struct zx_sp_ArtifactResponse_s* x, int n, struct zx_sp_Response_s* z)
{
  struct zx_sp_Response_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->Response->gg.g;
    x->Response = z;
    return;
  case -1:
    y = x->Response;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_sp_Response_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Response; n > 1 && y; --n, y = (struct zx_sp_Response_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_sp_ArtifactResponse_DEL_Response) */

void zx_sp_ArtifactResponse_DEL_Response(struct zx_sp_ArtifactResponse_s* x, int n)
{
  struct zx_sp_Response_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Response = (struct zx_sp_Response_s*)x->Response->gg.g.n;
    return;
  case -1:
    y = (struct zx_sp_Response_s*)x->Response;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_sp_Response_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Response; n > 1 && y->gg.g.n; --n, y = (struct zx_sp_Response_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif

/* FUNC(zx_sp_ArtifactResponse_GET_Consent) */
struct zx_str* zx_sp_ArtifactResponse_GET_Consent(struct zx_sp_ArtifactResponse_s* x) { return x->Consent; }
/* FUNC(zx_sp_ArtifactResponse_PUT_Consent) */
void zx_sp_ArtifactResponse_PUT_Consent(struct zx_sp_ArtifactResponse_s* x, struct zx_str* y) { x->Consent = y; }
/* FUNC(zx_sp_ArtifactResponse_GET_Destination) */
struct zx_str* zx_sp_ArtifactResponse_GET_Destination(struct zx_sp_ArtifactResponse_s* x) { return x->Destination; }
/* FUNC(zx_sp_ArtifactResponse_PUT_Destination) */
void zx_sp_ArtifactResponse_PUT_Destination(struct zx_sp_ArtifactResponse_s* x, struct zx_str* y) { x->Destination = y; }
/* FUNC(zx_sp_ArtifactResponse_GET_ID) */
struct zx_str* zx_sp_ArtifactResponse_GET_ID(struct zx_sp_ArtifactResponse_s* x) { return x->ID; }
/* FUNC(zx_sp_ArtifactResponse_PUT_ID) */
void zx_sp_ArtifactResponse_PUT_ID(struct zx_sp_ArtifactResponse_s* x, struct zx_str* y) { x->ID = y; }
/* FUNC(zx_sp_ArtifactResponse_GET_InResponseTo) */
struct zx_str* zx_sp_ArtifactResponse_GET_InResponseTo(struct zx_sp_ArtifactResponse_s* x) { return x->InResponseTo; }
/* FUNC(zx_sp_ArtifactResponse_PUT_InResponseTo) */
void zx_sp_ArtifactResponse_PUT_InResponseTo(struct zx_sp_ArtifactResponse_s* x, struct zx_str* y) { x->InResponseTo = y; }
/* FUNC(zx_sp_ArtifactResponse_GET_IssueInstant) */
struct zx_str* zx_sp_ArtifactResponse_GET_IssueInstant(struct zx_sp_ArtifactResponse_s* x) { return x->IssueInstant; }
/* FUNC(zx_sp_ArtifactResponse_PUT_IssueInstant) */
void zx_sp_ArtifactResponse_PUT_IssueInstant(struct zx_sp_ArtifactResponse_s* x, struct zx_str* y) { x->IssueInstant = y; }
/* FUNC(zx_sp_ArtifactResponse_GET_Version) */
struct zx_str* zx_sp_ArtifactResponse_GET_Version(struct zx_sp_ArtifactResponse_s* x) { return x->Version; }
/* FUNC(zx_sp_ArtifactResponse_PUT_Version) */
void zx_sp_ArtifactResponse_PUT_Version(struct zx_sp_ArtifactResponse_s* x, struct zx_str* y) { x->Version = y; }







#ifdef ZX_ENA_GETPUT

/* FUNC(zx_sp_AssertionIDRequest_NUM_Issuer) */

int zx_sp_AssertionIDRequest_NUM_Issuer(struct zx_sp_AssertionIDRequest_s* x)
{
  struct zx_sa_Issuer_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Issuer; y; ++n, y = (struct zx_sa_Issuer_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_sp_AssertionIDRequest_GET_Issuer) */

struct zx_sa_Issuer_s* zx_sp_AssertionIDRequest_GET_Issuer(struct zx_sp_AssertionIDRequest_s* x, int n)
{
  struct zx_sa_Issuer_s* y;
  if (!x) return 0;
  for (y = x->Issuer; n>=0 && y; --n, y = (struct zx_sa_Issuer_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_sp_AssertionIDRequest_POP_Issuer) */

struct zx_sa_Issuer_s* zx_sp_AssertionIDRequest_POP_Issuer(struct zx_sp_AssertionIDRequest_s* x)
{
  struct zx_sa_Issuer_s* y;
  if (!x) return 0;
  y = x->Issuer;
  if (y)
    x->Issuer = (struct zx_sa_Issuer_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_sp_AssertionIDRequest_PUSH_Issuer) */

void zx_sp_AssertionIDRequest_PUSH_Issuer(struct zx_sp_AssertionIDRequest_s* x, struct zx_sa_Issuer_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Issuer->gg.g;
  x->Issuer = z;
}

/* FUNC(zx_sp_AssertionIDRequest_REV_Issuer) */

void zx_sp_AssertionIDRequest_REV_Issuer(struct zx_sp_AssertionIDRequest_s* x)
{
  struct zx_sa_Issuer_s* nxt;
  struct zx_sa_Issuer_s* y;
  if (!x) return;
  y = x->Issuer;
  if (!y) return;
  x->Issuer = 0;
  while (y) {
    nxt = (struct zx_sa_Issuer_s*)y->gg.g.n;
    y->gg.g.n = &x->Issuer->gg.g;
    x->Issuer = y;
    y = nxt;
  }
}

/* FUNC(zx_sp_AssertionIDRequest_PUT_Issuer) */

void zx_sp_AssertionIDRequest_PUT_Issuer(struct zx_sp_AssertionIDRequest_s* x, int n, struct zx_sa_Issuer_s* z)
{
  struct zx_sa_Issuer_s* y;
  if (!x || !z) return;
  y = x->Issuer;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Issuer = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_sa_Issuer_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_sp_AssertionIDRequest_ADD_Issuer) */

void zx_sp_AssertionIDRequest_ADD_Issuer(struct zx_sp_AssertionIDRequest_s* x, int n, struct zx_sa_Issuer_s* z)
{
  struct zx_sa_Issuer_s* y;
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
    for (; y->gg.g.n; y = (struct zx_sa_Issuer_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Issuer; n > 1 && y; --n, y = (struct zx_sa_Issuer_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_sp_AssertionIDRequest_DEL_Issuer) */

void zx_sp_AssertionIDRequest_DEL_Issuer(struct zx_sp_AssertionIDRequest_s* x, int n)
{
  struct zx_sa_Issuer_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Issuer = (struct zx_sa_Issuer_s*)x->Issuer->gg.g.n;
    return;
  case -1:
    y = (struct zx_sa_Issuer_s*)x->Issuer;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_sa_Issuer_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Issuer; n > 1 && y->gg.g.n; --n, y = (struct zx_sa_Issuer_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_sp_AssertionIDRequest_NUM_Signature) */

int zx_sp_AssertionIDRequest_NUM_Signature(struct zx_sp_AssertionIDRequest_s* x)
{
  struct zx_ds_Signature_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Signature; y; ++n, y = (struct zx_ds_Signature_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_sp_AssertionIDRequest_GET_Signature) */

struct zx_ds_Signature_s* zx_sp_AssertionIDRequest_GET_Signature(struct zx_sp_AssertionIDRequest_s* x, int n)
{
  struct zx_ds_Signature_s* y;
  if (!x) return 0;
  for (y = x->Signature; n>=0 && y; --n, y = (struct zx_ds_Signature_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_sp_AssertionIDRequest_POP_Signature) */

struct zx_ds_Signature_s* zx_sp_AssertionIDRequest_POP_Signature(struct zx_sp_AssertionIDRequest_s* x)
{
  struct zx_ds_Signature_s* y;
  if (!x) return 0;
  y = x->Signature;
  if (y)
    x->Signature = (struct zx_ds_Signature_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_sp_AssertionIDRequest_PUSH_Signature) */

void zx_sp_AssertionIDRequest_PUSH_Signature(struct zx_sp_AssertionIDRequest_s* x, struct zx_ds_Signature_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Signature->gg.g;
  x->Signature = z;
}

/* FUNC(zx_sp_AssertionIDRequest_REV_Signature) */

void zx_sp_AssertionIDRequest_REV_Signature(struct zx_sp_AssertionIDRequest_s* x)
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

/* FUNC(zx_sp_AssertionIDRequest_PUT_Signature) */

void zx_sp_AssertionIDRequest_PUT_Signature(struct zx_sp_AssertionIDRequest_s* x, int n, struct zx_ds_Signature_s* z)
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

/* FUNC(zx_sp_AssertionIDRequest_ADD_Signature) */

void zx_sp_AssertionIDRequest_ADD_Signature(struct zx_sp_AssertionIDRequest_s* x, int n, struct zx_ds_Signature_s* z)
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

/* FUNC(zx_sp_AssertionIDRequest_DEL_Signature) */

void zx_sp_AssertionIDRequest_DEL_Signature(struct zx_sp_AssertionIDRequest_s* x, int n)
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

/* FUNC(zx_sp_AssertionIDRequest_NUM_Extensions) */

int zx_sp_AssertionIDRequest_NUM_Extensions(struct zx_sp_AssertionIDRequest_s* x)
{
  struct zx_sp_Extensions_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Extensions; y; ++n, y = (struct zx_sp_Extensions_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_sp_AssertionIDRequest_GET_Extensions) */

struct zx_sp_Extensions_s* zx_sp_AssertionIDRequest_GET_Extensions(struct zx_sp_AssertionIDRequest_s* x, int n)
{
  struct zx_sp_Extensions_s* y;
  if (!x) return 0;
  for (y = x->Extensions; n>=0 && y; --n, y = (struct zx_sp_Extensions_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_sp_AssertionIDRequest_POP_Extensions) */

struct zx_sp_Extensions_s* zx_sp_AssertionIDRequest_POP_Extensions(struct zx_sp_AssertionIDRequest_s* x)
{
  struct zx_sp_Extensions_s* y;
  if (!x) return 0;
  y = x->Extensions;
  if (y)
    x->Extensions = (struct zx_sp_Extensions_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_sp_AssertionIDRequest_PUSH_Extensions) */

void zx_sp_AssertionIDRequest_PUSH_Extensions(struct zx_sp_AssertionIDRequest_s* x, struct zx_sp_Extensions_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Extensions->gg.g;
  x->Extensions = z;
}

/* FUNC(zx_sp_AssertionIDRequest_REV_Extensions) */

void zx_sp_AssertionIDRequest_REV_Extensions(struct zx_sp_AssertionIDRequest_s* x)
{
  struct zx_sp_Extensions_s* nxt;
  struct zx_sp_Extensions_s* y;
  if (!x) return;
  y = x->Extensions;
  if (!y) return;
  x->Extensions = 0;
  while (y) {
    nxt = (struct zx_sp_Extensions_s*)y->gg.g.n;
    y->gg.g.n = &x->Extensions->gg.g;
    x->Extensions = y;
    y = nxt;
  }
}

/* FUNC(zx_sp_AssertionIDRequest_PUT_Extensions) */

void zx_sp_AssertionIDRequest_PUT_Extensions(struct zx_sp_AssertionIDRequest_s* x, int n, struct zx_sp_Extensions_s* z)
{
  struct zx_sp_Extensions_s* y;
  if (!x || !z) return;
  y = x->Extensions;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Extensions = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_sp_Extensions_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_sp_AssertionIDRequest_ADD_Extensions) */

void zx_sp_AssertionIDRequest_ADD_Extensions(struct zx_sp_AssertionIDRequest_s* x, int n, struct zx_sp_Extensions_s* z)
{
  struct zx_sp_Extensions_s* y;
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
    for (; y->gg.g.n; y = (struct zx_sp_Extensions_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Extensions; n > 1 && y; --n, y = (struct zx_sp_Extensions_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_sp_AssertionIDRequest_DEL_Extensions) */

void zx_sp_AssertionIDRequest_DEL_Extensions(struct zx_sp_AssertionIDRequest_s* x, int n)
{
  struct zx_sp_Extensions_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Extensions = (struct zx_sp_Extensions_s*)x->Extensions->gg.g.n;
    return;
  case -1:
    y = (struct zx_sp_Extensions_s*)x->Extensions;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_sp_Extensions_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Extensions; n > 1 && y->gg.g.n; --n, y = (struct zx_sp_Extensions_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_sp_AssertionIDRequest_NUM_AssertionIDRef) */

int zx_sp_AssertionIDRequest_NUM_AssertionIDRef(struct zx_sp_AssertionIDRequest_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->AssertionIDRef; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_sp_AssertionIDRequest_GET_AssertionIDRef) */

struct zx_elem_s* zx_sp_AssertionIDRequest_GET_AssertionIDRef(struct zx_sp_AssertionIDRequest_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->AssertionIDRef; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_sp_AssertionIDRequest_POP_AssertionIDRef) */

struct zx_elem_s* zx_sp_AssertionIDRequest_POP_AssertionIDRef(struct zx_sp_AssertionIDRequest_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->AssertionIDRef;
  if (y)
    x->AssertionIDRef = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_sp_AssertionIDRequest_PUSH_AssertionIDRef) */

void zx_sp_AssertionIDRequest_PUSH_AssertionIDRef(struct zx_sp_AssertionIDRequest_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->AssertionIDRef->g;
  x->AssertionIDRef = z;
}

/* FUNC(zx_sp_AssertionIDRequest_REV_AssertionIDRef) */

void zx_sp_AssertionIDRequest_REV_AssertionIDRef(struct zx_sp_AssertionIDRequest_s* x)
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

/* FUNC(zx_sp_AssertionIDRequest_PUT_AssertionIDRef) */

void zx_sp_AssertionIDRequest_PUT_AssertionIDRef(struct zx_sp_AssertionIDRequest_s* x, int n, struct zx_elem_s* z)
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

/* FUNC(zx_sp_AssertionIDRequest_ADD_AssertionIDRef) */

void zx_sp_AssertionIDRequest_ADD_AssertionIDRef(struct zx_sp_AssertionIDRequest_s* x, int n, struct zx_elem_s* z)
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

/* FUNC(zx_sp_AssertionIDRequest_DEL_AssertionIDRef) */

void zx_sp_AssertionIDRequest_DEL_AssertionIDRef(struct zx_sp_AssertionIDRequest_s* x, int n)
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

#endif

/* FUNC(zx_sp_AssertionIDRequest_GET_Consent) */
struct zx_str* zx_sp_AssertionIDRequest_GET_Consent(struct zx_sp_AssertionIDRequest_s* x) { return x->Consent; }
/* FUNC(zx_sp_AssertionIDRequest_PUT_Consent) */
void zx_sp_AssertionIDRequest_PUT_Consent(struct zx_sp_AssertionIDRequest_s* x, struct zx_str* y) { x->Consent = y; }
/* FUNC(zx_sp_AssertionIDRequest_GET_Destination) */
struct zx_str* zx_sp_AssertionIDRequest_GET_Destination(struct zx_sp_AssertionIDRequest_s* x) { return x->Destination; }
/* FUNC(zx_sp_AssertionIDRequest_PUT_Destination) */
void zx_sp_AssertionIDRequest_PUT_Destination(struct zx_sp_AssertionIDRequest_s* x, struct zx_str* y) { x->Destination = y; }
/* FUNC(zx_sp_AssertionIDRequest_GET_ID) */
struct zx_str* zx_sp_AssertionIDRequest_GET_ID(struct zx_sp_AssertionIDRequest_s* x) { return x->ID; }
/* FUNC(zx_sp_AssertionIDRequest_PUT_ID) */
void zx_sp_AssertionIDRequest_PUT_ID(struct zx_sp_AssertionIDRequest_s* x, struct zx_str* y) { x->ID = y; }
/* FUNC(zx_sp_AssertionIDRequest_GET_IssueInstant) */
struct zx_str* zx_sp_AssertionIDRequest_GET_IssueInstant(struct zx_sp_AssertionIDRequest_s* x) { return x->IssueInstant; }
/* FUNC(zx_sp_AssertionIDRequest_PUT_IssueInstant) */
void zx_sp_AssertionIDRequest_PUT_IssueInstant(struct zx_sp_AssertionIDRequest_s* x, struct zx_str* y) { x->IssueInstant = y; }
/* FUNC(zx_sp_AssertionIDRequest_GET_Version) */
struct zx_str* zx_sp_AssertionIDRequest_GET_Version(struct zx_sp_AssertionIDRequest_s* x) { return x->Version; }
/* FUNC(zx_sp_AssertionIDRequest_PUT_Version) */
void zx_sp_AssertionIDRequest_PUT_Version(struct zx_sp_AssertionIDRequest_s* x, struct zx_str* y) { x->Version = y; }







#ifdef ZX_ENA_GETPUT

/* FUNC(zx_sp_AttributeQuery_NUM_Issuer) */

int zx_sp_AttributeQuery_NUM_Issuer(struct zx_sp_AttributeQuery_s* x)
{
  struct zx_sa_Issuer_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Issuer; y; ++n, y = (struct zx_sa_Issuer_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_sp_AttributeQuery_GET_Issuer) */

struct zx_sa_Issuer_s* zx_sp_AttributeQuery_GET_Issuer(struct zx_sp_AttributeQuery_s* x, int n)
{
  struct zx_sa_Issuer_s* y;
  if (!x) return 0;
  for (y = x->Issuer; n>=0 && y; --n, y = (struct zx_sa_Issuer_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_sp_AttributeQuery_POP_Issuer) */

struct zx_sa_Issuer_s* zx_sp_AttributeQuery_POP_Issuer(struct zx_sp_AttributeQuery_s* x)
{
  struct zx_sa_Issuer_s* y;
  if (!x) return 0;
  y = x->Issuer;
  if (y)
    x->Issuer = (struct zx_sa_Issuer_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_sp_AttributeQuery_PUSH_Issuer) */

void zx_sp_AttributeQuery_PUSH_Issuer(struct zx_sp_AttributeQuery_s* x, struct zx_sa_Issuer_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Issuer->gg.g;
  x->Issuer = z;
}

/* FUNC(zx_sp_AttributeQuery_REV_Issuer) */

void zx_sp_AttributeQuery_REV_Issuer(struct zx_sp_AttributeQuery_s* x)
{
  struct zx_sa_Issuer_s* nxt;
  struct zx_sa_Issuer_s* y;
  if (!x) return;
  y = x->Issuer;
  if (!y) return;
  x->Issuer = 0;
  while (y) {
    nxt = (struct zx_sa_Issuer_s*)y->gg.g.n;
    y->gg.g.n = &x->Issuer->gg.g;
    x->Issuer = y;
    y = nxt;
  }
}

/* FUNC(zx_sp_AttributeQuery_PUT_Issuer) */

void zx_sp_AttributeQuery_PUT_Issuer(struct zx_sp_AttributeQuery_s* x, int n, struct zx_sa_Issuer_s* z)
{
  struct zx_sa_Issuer_s* y;
  if (!x || !z) return;
  y = x->Issuer;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Issuer = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_sa_Issuer_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_sp_AttributeQuery_ADD_Issuer) */

void zx_sp_AttributeQuery_ADD_Issuer(struct zx_sp_AttributeQuery_s* x, int n, struct zx_sa_Issuer_s* z)
{
  struct zx_sa_Issuer_s* y;
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
    for (; y->gg.g.n; y = (struct zx_sa_Issuer_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Issuer; n > 1 && y; --n, y = (struct zx_sa_Issuer_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_sp_AttributeQuery_DEL_Issuer) */

void zx_sp_AttributeQuery_DEL_Issuer(struct zx_sp_AttributeQuery_s* x, int n)
{
  struct zx_sa_Issuer_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Issuer = (struct zx_sa_Issuer_s*)x->Issuer->gg.g.n;
    return;
  case -1:
    y = (struct zx_sa_Issuer_s*)x->Issuer;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_sa_Issuer_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Issuer; n > 1 && y->gg.g.n; --n, y = (struct zx_sa_Issuer_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_sp_AttributeQuery_NUM_Signature) */

int zx_sp_AttributeQuery_NUM_Signature(struct zx_sp_AttributeQuery_s* x)
{
  struct zx_ds_Signature_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Signature; y; ++n, y = (struct zx_ds_Signature_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_sp_AttributeQuery_GET_Signature) */

struct zx_ds_Signature_s* zx_sp_AttributeQuery_GET_Signature(struct zx_sp_AttributeQuery_s* x, int n)
{
  struct zx_ds_Signature_s* y;
  if (!x) return 0;
  for (y = x->Signature; n>=0 && y; --n, y = (struct zx_ds_Signature_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_sp_AttributeQuery_POP_Signature) */

struct zx_ds_Signature_s* zx_sp_AttributeQuery_POP_Signature(struct zx_sp_AttributeQuery_s* x)
{
  struct zx_ds_Signature_s* y;
  if (!x) return 0;
  y = x->Signature;
  if (y)
    x->Signature = (struct zx_ds_Signature_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_sp_AttributeQuery_PUSH_Signature) */

void zx_sp_AttributeQuery_PUSH_Signature(struct zx_sp_AttributeQuery_s* x, struct zx_ds_Signature_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Signature->gg.g;
  x->Signature = z;
}

/* FUNC(zx_sp_AttributeQuery_REV_Signature) */

void zx_sp_AttributeQuery_REV_Signature(struct zx_sp_AttributeQuery_s* x)
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

/* FUNC(zx_sp_AttributeQuery_PUT_Signature) */

void zx_sp_AttributeQuery_PUT_Signature(struct zx_sp_AttributeQuery_s* x, int n, struct zx_ds_Signature_s* z)
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

/* FUNC(zx_sp_AttributeQuery_ADD_Signature) */

void zx_sp_AttributeQuery_ADD_Signature(struct zx_sp_AttributeQuery_s* x, int n, struct zx_ds_Signature_s* z)
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

/* FUNC(zx_sp_AttributeQuery_DEL_Signature) */

void zx_sp_AttributeQuery_DEL_Signature(struct zx_sp_AttributeQuery_s* x, int n)
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

/* FUNC(zx_sp_AttributeQuery_NUM_Extensions) */

int zx_sp_AttributeQuery_NUM_Extensions(struct zx_sp_AttributeQuery_s* x)
{
  struct zx_sp_Extensions_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Extensions; y; ++n, y = (struct zx_sp_Extensions_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_sp_AttributeQuery_GET_Extensions) */

struct zx_sp_Extensions_s* zx_sp_AttributeQuery_GET_Extensions(struct zx_sp_AttributeQuery_s* x, int n)
{
  struct zx_sp_Extensions_s* y;
  if (!x) return 0;
  for (y = x->Extensions; n>=0 && y; --n, y = (struct zx_sp_Extensions_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_sp_AttributeQuery_POP_Extensions) */

struct zx_sp_Extensions_s* zx_sp_AttributeQuery_POP_Extensions(struct zx_sp_AttributeQuery_s* x)
{
  struct zx_sp_Extensions_s* y;
  if (!x) return 0;
  y = x->Extensions;
  if (y)
    x->Extensions = (struct zx_sp_Extensions_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_sp_AttributeQuery_PUSH_Extensions) */

void zx_sp_AttributeQuery_PUSH_Extensions(struct zx_sp_AttributeQuery_s* x, struct zx_sp_Extensions_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Extensions->gg.g;
  x->Extensions = z;
}

/* FUNC(zx_sp_AttributeQuery_REV_Extensions) */

void zx_sp_AttributeQuery_REV_Extensions(struct zx_sp_AttributeQuery_s* x)
{
  struct zx_sp_Extensions_s* nxt;
  struct zx_sp_Extensions_s* y;
  if (!x) return;
  y = x->Extensions;
  if (!y) return;
  x->Extensions = 0;
  while (y) {
    nxt = (struct zx_sp_Extensions_s*)y->gg.g.n;
    y->gg.g.n = &x->Extensions->gg.g;
    x->Extensions = y;
    y = nxt;
  }
}

/* FUNC(zx_sp_AttributeQuery_PUT_Extensions) */

void zx_sp_AttributeQuery_PUT_Extensions(struct zx_sp_AttributeQuery_s* x, int n, struct zx_sp_Extensions_s* z)
{
  struct zx_sp_Extensions_s* y;
  if (!x || !z) return;
  y = x->Extensions;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Extensions = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_sp_Extensions_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_sp_AttributeQuery_ADD_Extensions) */

void zx_sp_AttributeQuery_ADD_Extensions(struct zx_sp_AttributeQuery_s* x, int n, struct zx_sp_Extensions_s* z)
{
  struct zx_sp_Extensions_s* y;
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
    for (; y->gg.g.n; y = (struct zx_sp_Extensions_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Extensions; n > 1 && y; --n, y = (struct zx_sp_Extensions_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_sp_AttributeQuery_DEL_Extensions) */

void zx_sp_AttributeQuery_DEL_Extensions(struct zx_sp_AttributeQuery_s* x, int n)
{
  struct zx_sp_Extensions_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Extensions = (struct zx_sp_Extensions_s*)x->Extensions->gg.g.n;
    return;
  case -1:
    y = (struct zx_sp_Extensions_s*)x->Extensions;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_sp_Extensions_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Extensions; n > 1 && y->gg.g.n; --n, y = (struct zx_sp_Extensions_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_sp_AttributeQuery_NUM_Subject) */

int zx_sp_AttributeQuery_NUM_Subject(struct zx_sp_AttributeQuery_s* x)
{
  struct zx_sa_Subject_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Subject; y; ++n, y = (struct zx_sa_Subject_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_sp_AttributeQuery_GET_Subject) */

struct zx_sa_Subject_s* zx_sp_AttributeQuery_GET_Subject(struct zx_sp_AttributeQuery_s* x, int n)
{
  struct zx_sa_Subject_s* y;
  if (!x) return 0;
  for (y = x->Subject; n>=0 && y; --n, y = (struct zx_sa_Subject_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_sp_AttributeQuery_POP_Subject) */

struct zx_sa_Subject_s* zx_sp_AttributeQuery_POP_Subject(struct zx_sp_AttributeQuery_s* x)
{
  struct zx_sa_Subject_s* y;
  if (!x) return 0;
  y = x->Subject;
  if (y)
    x->Subject = (struct zx_sa_Subject_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_sp_AttributeQuery_PUSH_Subject) */

void zx_sp_AttributeQuery_PUSH_Subject(struct zx_sp_AttributeQuery_s* x, struct zx_sa_Subject_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Subject->gg.g;
  x->Subject = z;
}

/* FUNC(zx_sp_AttributeQuery_REV_Subject) */

void zx_sp_AttributeQuery_REV_Subject(struct zx_sp_AttributeQuery_s* x)
{
  struct zx_sa_Subject_s* nxt;
  struct zx_sa_Subject_s* y;
  if (!x) return;
  y = x->Subject;
  if (!y) return;
  x->Subject = 0;
  while (y) {
    nxt = (struct zx_sa_Subject_s*)y->gg.g.n;
    y->gg.g.n = &x->Subject->gg.g;
    x->Subject = y;
    y = nxt;
  }
}

/* FUNC(zx_sp_AttributeQuery_PUT_Subject) */

void zx_sp_AttributeQuery_PUT_Subject(struct zx_sp_AttributeQuery_s* x, int n, struct zx_sa_Subject_s* z)
{
  struct zx_sa_Subject_s* y;
  if (!x || !z) return;
  y = x->Subject;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Subject = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_sa_Subject_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_sp_AttributeQuery_ADD_Subject) */

void zx_sp_AttributeQuery_ADD_Subject(struct zx_sp_AttributeQuery_s* x, int n, struct zx_sa_Subject_s* z)
{
  struct zx_sa_Subject_s* y;
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
    for (; y->gg.g.n; y = (struct zx_sa_Subject_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Subject; n > 1 && y; --n, y = (struct zx_sa_Subject_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_sp_AttributeQuery_DEL_Subject) */

void zx_sp_AttributeQuery_DEL_Subject(struct zx_sp_AttributeQuery_s* x, int n)
{
  struct zx_sa_Subject_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Subject = (struct zx_sa_Subject_s*)x->Subject->gg.g.n;
    return;
  case -1:
    y = (struct zx_sa_Subject_s*)x->Subject;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_sa_Subject_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Subject; n > 1 && y->gg.g.n; --n, y = (struct zx_sa_Subject_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_sp_AttributeQuery_NUM_Attribute) */

int zx_sp_AttributeQuery_NUM_Attribute(struct zx_sp_AttributeQuery_s* x)
{
  struct zx_sa_Attribute_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Attribute; y; ++n, y = (struct zx_sa_Attribute_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_sp_AttributeQuery_GET_Attribute) */

struct zx_sa_Attribute_s* zx_sp_AttributeQuery_GET_Attribute(struct zx_sp_AttributeQuery_s* x, int n)
{
  struct zx_sa_Attribute_s* y;
  if (!x) return 0;
  for (y = x->Attribute; n>=0 && y; --n, y = (struct zx_sa_Attribute_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_sp_AttributeQuery_POP_Attribute) */

struct zx_sa_Attribute_s* zx_sp_AttributeQuery_POP_Attribute(struct zx_sp_AttributeQuery_s* x)
{
  struct zx_sa_Attribute_s* y;
  if (!x) return 0;
  y = x->Attribute;
  if (y)
    x->Attribute = (struct zx_sa_Attribute_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_sp_AttributeQuery_PUSH_Attribute) */

void zx_sp_AttributeQuery_PUSH_Attribute(struct zx_sp_AttributeQuery_s* x, struct zx_sa_Attribute_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Attribute->gg.g;
  x->Attribute = z;
}

/* FUNC(zx_sp_AttributeQuery_REV_Attribute) */

void zx_sp_AttributeQuery_REV_Attribute(struct zx_sp_AttributeQuery_s* x)
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

/* FUNC(zx_sp_AttributeQuery_PUT_Attribute) */

void zx_sp_AttributeQuery_PUT_Attribute(struct zx_sp_AttributeQuery_s* x, int n, struct zx_sa_Attribute_s* z)
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

/* FUNC(zx_sp_AttributeQuery_ADD_Attribute) */

void zx_sp_AttributeQuery_ADD_Attribute(struct zx_sp_AttributeQuery_s* x, int n, struct zx_sa_Attribute_s* z)
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

/* FUNC(zx_sp_AttributeQuery_DEL_Attribute) */

void zx_sp_AttributeQuery_DEL_Attribute(struct zx_sp_AttributeQuery_s* x, int n)
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

/* FUNC(zx_sp_AttributeQuery_GET_Consent) */
struct zx_str* zx_sp_AttributeQuery_GET_Consent(struct zx_sp_AttributeQuery_s* x) { return x->Consent; }
/* FUNC(zx_sp_AttributeQuery_PUT_Consent) */
void zx_sp_AttributeQuery_PUT_Consent(struct zx_sp_AttributeQuery_s* x, struct zx_str* y) { x->Consent = y; }
/* FUNC(zx_sp_AttributeQuery_GET_Destination) */
struct zx_str* zx_sp_AttributeQuery_GET_Destination(struct zx_sp_AttributeQuery_s* x) { return x->Destination; }
/* FUNC(zx_sp_AttributeQuery_PUT_Destination) */
void zx_sp_AttributeQuery_PUT_Destination(struct zx_sp_AttributeQuery_s* x, struct zx_str* y) { x->Destination = y; }
/* FUNC(zx_sp_AttributeQuery_GET_ID) */
struct zx_str* zx_sp_AttributeQuery_GET_ID(struct zx_sp_AttributeQuery_s* x) { return x->ID; }
/* FUNC(zx_sp_AttributeQuery_PUT_ID) */
void zx_sp_AttributeQuery_PUT_ID(struct zx_sp_AttributeQuery_s* x, struct zx_str* y) { x->ID = y; }
/* FUNC(zx_sp_AttributeQuery_GET_IssueInstant) */
struct zx_str* zx_sp_AttributeQuery_GET_IssueInstant(struct zx_sp_AttributeQuery_s* x) { return x->IssueInstant; }
/* FUNC(zx_sp_AttributeQuery_PUT_IssueInstant) */
void zx_sp_AttributeQuery_PUT_IssueInstant(struct zx_sp_AttributeQuery_s* x, struct zx_str* y) { x->IssueInstant = y; }
/* FUNC(zx_sp_AttributeQuery_GET_Version) */
struct zx_str* zx_sp_AttributeQuery_GET_Version(struct zx_sp_AttributeQuery_s* x) { return x->Version; }
/* FUNC(zx_sp_AttributeQuery_PUT_Version) */
void zx_sp_AttributeQuery_PUT_Version(struct zx_sp_AttributeQuery_s* x, struct zx_str* y) { x->Version = y; }







#ifdef ZX_ENA_GETPUT

/* FUNC(zx_sp_AuthnQuery_NUM_Issuer) */

int zx_sp_AuthnQuery_NUM_Issuer(struct zx_sp_AuthnQuery_s* x)
{
  struct zx_sa_Issuer_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Issuer; y; ++n, y = (struct zx_sa_Issuer_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_sp_AuthnQuery_GET_Issuer) */

struct zx_sa_Issuer_s* zx_sp_AuthnQuery_GET_Issuer(struct zx_sp_AuthnQuery_s* x, int n)
{
  struct zx_sa_Issuer_s* y;
  if (!x) return 0;
  for (y = x->Issuer; n>=0 && y; --n, y = (struct zx_sa_Issuer_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_sp_AuthnQuery_POP_Issuer) */

struct zx_sa_Issuer_s* zx_sp_AuthnQuery_POP_Issuer(struct zx_sp_AuthnQuery_s* x)
{
  struct zx_sa_Issuer_s* y;
  if (!x) return 0;
  y = x->Issuer;
  if (y)
    x->Issuer = (struct zx_sa_Issuer_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_sp_AuthnQuery_PUSH_Issuer) */

void zx_sp_AuthnQuery_PUSH_Issuer(struct zx_sp_AuthnQuery_s* x, struct zx_sa_Issuer_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Issuer->gg.g;
  x->Issuer = z;
}

/* FUNC(zx_sp_AuthnQuery_REV_Issuer) */

void zx_sp_AuthnQuery_REV_Issuer(struct zx_sp_AuthnQuery_s* x)
{
  struct zx_sa_Issuer_s* nxt;
  struct zx_sa_Issuer_s* y;
  if (!x) return;
  y = x->Issuer;
  if (!y) return;
  x->Issuer = 0;
  while (y) {
    nxt = (struct zx_sa_Issuer_s*)y->gg.g.n;
    y->gg.g.n = &x->Issuer->gg.g;
    x->Issuer = y;
    y = nxt;
  }
}

/* FUNC(zx_sp_AuthnQuery_PUT_Issuer) */

void zx_sp_AuthnQuery_PUT_Issuer(struct zx_sp_AuthnQuery_s* x, int n, struct zx_sa_Issuer_s* z)
{
  struct zx_sa_Issuer_s* y;
  if (!x || !z) return;
  y = x->Issuer;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Issuer = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_sa_Issuer_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_sp_AuthnQuery_ADD_Issuer) */

void zx_sp_AuthnQuery_ADD_Issuer(struct zx_sp_AuthnQuery_s* x, int n, struct zx_sa_Issuer_s* z)
{
  struct zx_sa_Issuer_s* y;
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
    for (; y->gg.g.n; y = (struct zx_sa_Issuer_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Issuer; n > 1 && y; --n, y = (struct zx_sa_Issuer_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_sp_AuthnQuery_DEL_Issuer) */

void zx_sp_AuthnQuery_DEL_Issuer(struct zx_sp_AuthnQuery_s* x, int n)
{
  struct zx_sa_Issuer_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Issuer = (struct zx_sa_Issuer_s*)x->Issuer->gg.g.n;
    return;
  case -1:
    y = (struct zx_sa_Issuer_s*)x->Issuer;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_sa_Issuer_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Issuer; n > 1 && y->gg.g.n; --n, y = (struct zx_sa_Issuer_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_sp_AuthnQuery_NUM_Signature) */

int zx_sp_AuthnQuery_NUM_Signature(struct zx_sp_AuthnQuery_s* x)
{
  struct zx_ds_Signature_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Signature; y; ++n, y = (struct zx_ds_Signature_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_sp_AuthnQuery_GET_Signature) */

struct zx_ds_Signature_s* zx_sp_AuthnQuery_GET_Signature(struct zx_sp_AuthnQuery_s* x, int n)
{
  struct zx_ds_Signature_s* y;
  if (!x) return 0;
  for (y = x->Signature; n>=0 && y; --n, y = (struct zx_ds_Signature_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_sp_AuthnQuery_POP_Signature) */

struct zx_ds_Signature_s* zx_sp_AuthnQuery_POP_Signature(struct zx_sp_AuthnQuery_s* x)
{
  struct zx_ds_Signature_s* y;
  if (!x) return 0;
  y = x->Signature;
  if (y)
    x->Signature = (struct zx_ds_Signature_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_sp_AuthnQuery_PUSH_Signature) */

void zx_sp_AuthnQuery_PUSH_Signature(struct zx_sp_AuthnQuery_s* x, struct zx_ds_Signature_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Signature->gg.g;
  x->Signature = z;
}

/* FUNC(zx_sp_AuthnQuery_REV_Signature) */

void zx_sp_AuthnQuery_REV_Signature(struct zx_sp_AuthnQuery_s* x)
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

/* FUNC(zx_sp_AuthnQuery_PUT_Signature) */

void zx_sp_AuthnQuery_PUT_Signature(struct zx_sp_AuthnQuery_s* x, int n, struct zx_ds_Signature_s* z)
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

/* FUNC(zx_sp_AuthnQuery_ADD_Signature) */

void zx_sp_AuthnQuery_ADD_Signature(struct zx_sp_AuthnQuery_s* x, int n, struct zx_ds_Signature_s* z)
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

/* FUNC(zx_sp_AuthnQuery_DEL_Signature) */

void zx_sp_AuthnQuery_DEL_Signature(struct zx_sp_AuthnQuery_s* x, int n)
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

/* FUNC(zx_sp_AuthnQuery_NUM_Extensions) */

int zx_sp_AuthnQuery_NUM_Extensions(struct zx_sp_AuthnQuery_s* x)
{
  struct zx_sp_Extensions_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Extensions; y; ++n, y = (struct zx_sp_Extensions_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_sp_AuthnQuery_GET_Extensions) */

struct zx_sp_Extensions_s* zx_sp_AuthnQuery_GET_Extensions(struct zx_sp_AuthnQuery_s* x, int n)
{
  struct zx_sp_Extensions_s* y;
  if (!x) return 0;
  for (y = x->Extensions; n>=0 && y; --n, y = (struct zx_sp_Extensions_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_sp_AuthnQuery_POP_Extensions) */

struct zx_sp_Extensions_s* zx_sp_AuthnQuery_POP_Extensions(struct zx_sp_AuthnQuery_s* x)
{
  struct zx_sp_Extensions_s* y;
  if (!x) return 0;
  y = x->Extensions;
  if (y)
    x->Extensions = (struct zx_sp_Extensions_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_sp_AuthnQuery_PUSH_Extensions) */

void zx_sp_AuthnQuery_PUSH_Extensions(struct zx_sp_AuthnQuery_s* x, struct zx_sp_Extensions_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Extensions->gg.g;
  x->Extensions = z;
}

/* FUNC(zx_sp_AuthnQuery_REV_Extensions) */

void zx_sp_AuthnQuery_REV_Extensions(struct zx_sp_AuthnQuery_s* x)
{
  struct zx_sp_Extensions_s* nxt;
  struct zx_sp_Extensions_s* y;
  if (!x) return;
  y = x->Extensions;
  if (!y) return;
  x->Extensions = 0;
  while (y) {
    nxt = (struct zx_sp_Extensions_s*)y->gg.g.n;
    y->gg.g.n = &x->Extensions->gg.g;
    x->Extensions = y;
    y = nxt;
  }
}

/* FUNC(zx_sp_AuthnQuery_PUT_Extensions) */

void zx_sp_AuthnQuery_PUT_Extensions(struct zx_sp_AuthnQuery_s* x, int n, struct zx_sp_Extensions_s* z)
{
  struct zx_sp_Extensions_s* y;
  if (!x || !z) return;
  y = x->Extensions;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Extensions = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_sp_Extensions_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_sp_AuthnQuery_ADD_Extensions) */

void zx_sp_AuthnQuery_ADD_Extensions(struct zx_sp_AuthnQuery_s* x, int n, struct zx_sp_Extensions_s* z)
{
  struct zx_sp_Extensions_s* y;
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
    for (; y->gg.g.n; y = (struct zx_sp_Extensions_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Extensions; n > 1 && y; --n, y = (struct zx_sp_Extensions_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_sp_AuthnQuery_DEL_Extensions) */

void zx_sp_AuthnQuery_DEL_Extensions(struct zx_sp_AuthnQuery_s* x, int n)
{
  struct zx_sp_Extensions_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Extensions = (struct zx_sp_Extensions_s*)x->Extensions->gg.g.n;
    return;
  case -1:
    y = (struct zx_sp_Extensions_s*)x->Extensions;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_sp_Extensions_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Extensions; n > 1 && y->gg.g.n; --n, y = (struct zx_sp_Extensions_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_sp_AuthnQuery_NUM_Subject) */

int zx_sp_AuthnQuery_NUM_Subject(struct zx_sp_AuthnQuery_s* x)
{
  struct zx_sa_Subject_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Subject; y; ++n, y = (struct zx_sa_Subject_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_sp_AuthnQuery_GET_Subject) */

struct zx_sa_Subject_s* zx_sp_AuthnQuery_GET_Subject(struct zx_sp_AuthnQuery_s* x, int n)
{
  struct zx_sa_Subject_s* y;
  if (!x) return 0;
  for (y = x->Subject; n>=0 && y; --n, y = (struct zx_sa_Subject_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_sp_AuthnQuery_POP_Subject) */

struct zx_sa_Subject_s* zx_sp_AuthnQuery_POP_Subject(struct zx_sp_AuthnQuery_s* x)
{
  struct zx_sa_Subject_s* y;
  if (!x) return 0;
  y = x->Subject;
  if (y)
    x->Subject = (struct zx_sa_Subject_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_sp_AuthnQuery_PUSH_Subject) */

void zx_sp_AuthnQuery_PUSH_Subject(struct zx_sp_AuthnQuery_s* x, struct zx_sa_Subject_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Subject->gg.g;
  x->Subject = z;
}

/* FUNC(zx_sp_AuthnQuery_REV_Subject) */

void zx_sp_AuthnQuery_REV_Subject(struct zx_sp_AuthnQuery_s* x)
{
  struct zx_sa_Subject_s* nxt;
  struct zx_sa_Subject_s* y;
  if (!x) return;
  y = x->Subject;
  if (!y) return;
  x->Subject = 0;
  while (y) {
    nxt = (struct zx_sa_Subject_s*)y->gg.g.n;
    y->gg.g.n = &x->Subject->gg.g;
    x->Subject = y;
    y = nxt;
  }
}

/* FUNC(zx_sp_AuthnQuery_PUT_Subject) */

void zx_sp_AuthnQuery_PUT_Subject(struct zx_sp_AuthnQuery_s* x, int n, struct zx_sa_Subject_s* z)
{
  struct zx_sa_Subject_s* y;
  if (!x || !z) return;
  y = x->Subject;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Subject = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_sa_Subject_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_sp_AuthnQuery_ADD_Subject) */

void zx_sp_AuthnQuery_ADD_Subject(struct zx_sp_AuthnQuery_s* x, int n, struct zx_sa_Subject_s* z)
{
  struct zx_sa_Subject_s* y;
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
    for (; y->gg.g.n; y = (struct zx_sa_Subject_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Subject; n > 1 && y; --n, y = (struct zx_sa_Subject_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_sp_AuthnQuery_DEL_Subject) */

void zx_sp_AuthnQuery_DEL_Subject(struct zx_sp_AuthnQuery_s* x, int n)
{
  struct zx_sa_Subject_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Subject = (struct zx_sa_Subject_s*)x->Subject->gg.g.n;
    return;
  case -1:
    y = (struct zx_sa_Subject_s*)x->Subject;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_sa_Subject_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Subject; n > 1 && y->gg.g.n; --n, y = (struct zx_sa_Subject_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_sp_AuthnQuery_NUM_RequestedAuthnContext) */

int zx_sp_AuthnQuery_NUM_RequestedAuthnContext(struct zx_sp_AuthnQuery_s* x)
{
  struct zx_sp_RequestedAuthnContext_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->RequestedAuthnContext; y; ++n, y = (struct zx_sp_RequestedAuthnContext_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_sp_AuthnQuery_GET_RequestedAuthnContext) */

struct zx_sp_RequestedAuthnContext_s* zx_sp_AuthnQuery_GET_RequestedAuthnContext(struct zx_sp_AuthnQuery_s* x, int n)
{
  struct zx_sp_RequestedAuthnContext_s* y;
  if (!x) return 0;
  for (y = x->RequestedAuthnContext; n>=0 && y; --n, y = (struct zx_sp_RequestedAuthnContext_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_sp_AuthnQuery_POP_RequestedAuthnContext) */

struct zx_sp_RequestedAuthnContext_s* zx_sp_AuthnQuery_POP_RequestedAuthnContext(struct zx_sp_AuthnQuery_s* x)
{
  struct zx_sp_RequestedAuthnContext_s* y;
  if (!x) return 0;
  y = x->RequestedAuthnContext;
  if (y)
    x->RequestedAuthnContext = (struct zx_sp_RequestedAuthnContext_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_sp_AuthnQuery_PUSH_RequestedAuthnContext) */

void zx_sp_AuthnQuery_PUSH_RequestedAuthnContext(struct zx_sp_AuthnQuery_s* x, struct zx_sp_RequestedAuthnContext_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->RequestedAuthnContext->gg.g;
  x->RequestedAuthnContext = z;
}

/* FUNC(zx_sp_AuthnQuery_REV_RequestedAuthnContext) */

void zx_sp_AuthnQuery_REV_RequestedAuthnContext(struct zx_sp_AuthnQuery_s* x)
{
  struct zx_sp_RequestedAuthnContext_s* nxt;
  struct zx_sp_RequestedAuthnContext_s* y;
  if (!x) return;
  y = x->RequestedAuthnContext;
  if (!y) return;
  x->RequestedAuthnContext = 0;
  while (y) {
    nxt = (struct zx_sp_RequestedAuthnContext_s*)y->gg.g.n;
    y->gg.g.n = &x->RequestedAuthnContext->gg.g;
    x->RequestedAuthnContext = y;
    y = nxt;
  }
}

/* FUNC(zx_sp_AuthnQuery_PUT_RequestedAuthnContext) */

void zx_sp_AuthnQuery_PUT_RequestedAuthnContext(struct zx_sp_AuthnQuery_s* x, int n, struct zx_sp_RequestedAuthnContext_s* z)
{
  struct zx_sp_RequestedAuthnContext_s* y;
  if (!x || !z) return;
  y = x->RequestedAuthnContext;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->RequestedAuthnContext = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_sp_RequestedAuthnContext_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_sp_AuthnQuery_ADD_RequestedAuthnContext) */

void zx_sp_AuthnQuery_ADD_RequestedAuthnContext(struct zx_sp_AuthnQuery_s* x, int n, struct zx_sp_RequestedAuthnContext_s* z)
{
  struct zx_sp_RequestedAuthnContext_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->RequestedAuthnContext->gg.g;
    x->RequestedAuthnContext = z;
    return;
  case -1:
    y = x->RequestedAuthnContext;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_sp_RequestedAuthnContext_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->RequestedAuthnContext; n > 1 && y; --n, y = (struct zx_sp_RequestedAuthnContext_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_sp_AuthnQuery_DEL_RequestedAuthnContext) */

void zx_sp_AuthnQuery_DEL_RequestedAuthnContext(struct zx_sp_AuthnQuery_s* x, int n)
{
  struct zx_sp_RequestedAuthnContext_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->RequestedAuthnContext = (struct zx_sp_RequestedAuthnContext_s*)x->RequestedAuthnContext->gg.g.n;
    return;
  case -1:
    y = (struct zx_sp_RequestedAuthnContext_s*)x->RequestedAuthnContext;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_sp_RequestedAuthnContext_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->RequestedAuthnContext; n > 1 && y->gg.g.n; --n, y = (struct zx_sp_RequestedAuthnContext_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif

/* FUNC(zx_sp_AuthnQuery_GET_Consent) */
struct zx_str* zx_sp_AuthnQuery_GET_Consent(struct zx_sp_AuthnQuery_s* x) { return x->Consent; }
/* FUNC(zx_sp_AuthnQuery_PUT_Consent) */
void zx_sp_AuthnQuery_PUT_Consent(struct zx_sp_AuthnQuery_s* x, struct zx_str* y) { x->Consent = y; }
/* FUNC(zx_sp_AuthnQuery_GET_Destination) */
struct zx_str* zx_sp_AuthnQuery_GET_Destination(struct zx_sp_AuthnQuery_s* x) { return x->Destination; }
/* FUNC(zx_sp_AuthnQuery_PUT_Destination) */
void zx_sp_AuthnQuery_PUT_Destination(struct zx_sp_AuthnQuery_s* x, struct zx_str* y) { x->Destination = y; }
/* FUNC(zx_sp_AuthnQuery_GET_ID) */
struct zx_str* zx_sp_AuthnQuery_GET_ID(struct zx_sp_AuthnQuery_s* x) { return x->ID; }
/* FUNC(zx_sp_AuthnQuery_PUT_ID) */
void zx_sp_AuthnQuery_PUT_ID(struct zx_sp_AuthnQuery_s* x, struct zx_str* y) { x->ID = y; }
/* FUNC(zx_sp_AuthnQuery_GET_IssueInstant) */
struct zx_str* zx_sp_AuthnQuery_GET_IssueInstant(struct zx_sp_AuthnQuery_s* x) { return x->IssueInstant; }
/* FUNC(zx_sp_AuthnQuery_PUT_IssueInstant) */
void zx_sp_AuthnQuery_PUT_IssueInstant(struct zx_sp_AuthnQuery_s* x, struct zx_str* y) { x->IssueInstant = y; }
/* FUNC(zx_sp_AuthnQuery_GET_SessionIndex) */
struct zx_str* zx_sp_AuthnQuery_GET_SessionIndex(struct zx_sp_AuthnQuery_s* x) { return x->SessionIndex; }
/* FUNC(zx_sp_AuthnQuery_PUT_SessionIndex) */
void zx_sp_AuthnQuery_PUT_SessionIndex(struct zx_sp_AuthnQuery_s* x, struct zx_str* y) { x->SessionIndex = y; }
/* FUNC(zx_sp_AuthnQuery_GET_Version) */
struct zx_str* zx_sp_AuthnQuery_GET_Version(struct zx_sp_AuthnQuery_s* x) { return x->Version; }
/* FUNC(zx_sp_AuthnQuery_PUT_Version) */
void zx_sp_AuthnQuery_PUT_Version(struct zx_sp_AuthnQuery_s* x, struct zx_str* y) { x->Version = y; }







#ifdef ZX_ENA_GETPUT

/* FUNC(zx_sp_AuthnRequest_NUM_Issuer) */

int zx_sp_AuthnRequest_NUM_Issuer(struct zx_sp_AuthnRequest_s* x)
{
  struct zx_sa_Issuer_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Issuer; y; ++n, y = (struct zx_sa_Issuer_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_sp_AuthnRequest_GET_Issuer) */

struct zx_sa_Issuer_s* zx_sp_AuthnRequest_GET_Issuer(struct zx_sp_AuthnRequest_s* x, int n)
{
  struct zx_sa_Issuer_s* y;
  if (!x) return 0;
  for (y = x->Issuer; n>=0 && y; --n, y = (struct zx_sa_Issuer_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_sp_AuthnRequest_POP_Issuer) */

struct zx_sa_Issuer_s* zx_sp_AuthnRequest_POP_Issuer(struct zx_sp_AuthnRequest_s* x)
{
  struct zx_sa_Issuer_s* y;
  if (!x) return 0;
  y = x->Issuer;
  if (y)
    x->Issuer = (struct zx_sa_Issuer_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_sp_AuthnRequest_PUSH_Issuer) */

void zx_sp_AuthnRequest_PUSH_Issuer(struct zx_sp_AuthnRequest_s* x, struct zx_sa_Issuer_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Issuer->gg.g;
  x->Issuer = z;
}

/* FUNC(zx_sp_AuthnRequest_REV_Issuer) */

void zx_sp_AuthnRequest_REV_Issuer(struct zx_sp_AuthnRequest_s* x)
{
  struct zx_sa_Issuer_s* nxt;
  struct zx_sa_Issuer_s* y;
  if (!x) return;
  y = x->Issuer;
  if (!y) return;
  x->Issuer = 0;
  while (y) {
    nxt = (struct zx_sa_Issuer_s*)y->gg.g.n;
    y->gg.g.n = &x->Issuer->gg.g;
    x->Issuer = y;
    y = nxt;
  }
}

/* FUNC(zx_sp_AuthnRequest_PUT_Issuer) */

void zx_sp_AuthnRequest_PUT_Issuer(struct zx_sp_AuthnRequest_s* x, int n, struct zx_sa_Issuer_s* z)
{
  struct zx_sa_Issuer_s* y;
  if (!x || !z) return;
  y = x->Issuer;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Issuer = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_sa_Issuer_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_sp_AuthnRequest_ADD_Issuer) */

void zx_sp_AuthnRequest_ADD_Issuer(struct zx_sp_AuthnRequest_s* x, int n, struct zx_sa_Issuer_s* z)
{
  struct zx_sa_Issuer_s* y;
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
    for (; y->gg.g.n; y = (struct zx_sa_Issuer_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Issuer; n > 1 && y; --n, y = (struct zx_sa_Issuer_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_sp_AuthnRequest_DEL_Issuer) */

void zx_sp_AuthnRequest_DEL_Issuer(struct zx_sp_AuthnRequest_s* x, int n)
{
  struct zx_sa_Issuer_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Issuer = (struct zx_sa_Issuer_s*)x->Issuer->gg.g.n;
    return;
  case -1:
    y = (struct zx_sa_Issuer_s*)x->Issuer;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_sa_Issuer_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Issuer; n > 1 && y->gg.g.n; --n, y = (struct zx_sa_Issuer_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_sp_AuthnRequest_NUM_Signature) */

int zx_sp_AuthnRequest_NUM_Signature(struct zx_sp_AuthnRequest_s* x)
{
  struct zx_ds_Signature_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Signature; y; ++n, y = (struct zx_ds_Signature_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_sp_AuthnRequest_GET_Signature) */

struct zx_ds_Signature_s* zx_sp_AuthnRequest_GET_Signature(struct zx_sp_AuthnRequest_s* x, int n)
{
  struct zx_ds_Signature_s* y;
  if (!x) return 0;
  for (y = x->Signature; n>=0 && y; --n, y = (struct zx_ds_Signature_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_sp_AuthnRequest_POP_Signature) */

struct zx_ds_Signature_s* zx_sp_AuthnRequest_POP_Signature(struct zx_sp_AuthnRequest_s* x)
{
  struct zx_ds_Signature_s* y;
  if (!x) return 0;
  y = x->Signature;
  if (y)
    x->Signature = (struct zx_ds_Signature_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_sp_AuthnRequest_PUSH_Signature) */

void zx_sp_AuthnRequest_PUSH_Signature(struct zx_sp_AuthnRequest_s* x, struct zx_ds_Signature_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Signature->gg.g;
  x->Signature = z;
}

/* FUNC(zx_sp_AuthnRequest_REV_Signature) */

void zx_sp_AuthnRequest_REV_Signature(struct zx_sp_AuthnRequest_s* x)
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

/* FUNC(zx_sp_AuthnRequest_PUT_Signature) */

void zx_sp_AuthnRequest_PUT_Signature(struct zx_sp_AuthnRequest_s* x, int n, struct zx_ds_Signature_s* z)
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

/* FUNC(zx_sp_AuthnRequest_ADD_Signature) */

void zx_sp_AuthnRequest_ADD_Signature(struct zx_sp_AuthnRequest_s* x, int n, struct zx_ds_Signature_s* z)
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

/* FUNC(zx_sp_AuthnRequest_DEL_Signature) */

void zx_sp_AuthnRequest_DEL_Signature(struct zx_sp_AuthnRequest_s* x, int n)
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

/* FUNC(zx_sp_AuthnRequest_NUM_Extensions) */

int zx_sp_AuthnRequest_NUM_Extensions(struct zx_sp_AuthnRequest_s* x)
{
  struct zx_sp_Extensions_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Extensions; y; ++n, y = (struct zx_sp_Extensions_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_sp_AuthnRequest_GET_Extensions) */

struct zx_sp_Extensions_s* zx_sp_AuthnRequest_GET_Extensions(struct zx_sp_AuthnRequest_s* x, int n)
{
  struct zx_sp_Extensions_s* y;
  if (!x) return 0;
  for (y = x->Extensions; n>=0 && y; --n, y = (struct zx_sp_Extensions_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_sp_AuthnRequest_POP_Extensions) */

struct zx_sp_Extensions_s* zx_sp_AuthnRequest_POP_Extensions(struct zx_sp_AuthnRequest_s* x)
{
  struct zx_sp_Extensions_s* y;
  if (!x) return 0;
  y = x->Extensions;
  if (y)
    x->Extensions = (struct zx_sp_Extensions_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_sp_AuthnRequest_PUSH_Extensions) */

void zx_sp_AuthnRequest_PUSH_Extensions(struct zx_sp_AuthnRequest_s* x, struct zx_sp_Extensions_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Extensions->gg.g;
  x->Extensions = z;
}

/* FUNC(zx_sp_AuthnRequest_REV_Extensions) */

void zx_sp_AuthnRequest_REV_Extensions(struct zx_sp_AuthnRequest_s* x)
{
  struct zx_sp_Extensions_s* nxt;
  struct zx_sp_Extensions_s* y;
  if (!x) return;
  y = x->Extensions;
  if (!y) return;
  x->Extensions = 0;
  while (y) {
    nxt = (struct zx_sp_Extensions_s*)y->gg.g.n;
    y->gg.g.n = &x->Extensions->gg.g;
    x->Extensions = y;
    y = nxt;
  }
}

/* FUNC(zx_sp_AuthnRequest_PUT_Extensions) */

void zx_sp_AuthnRequest_PUT_Extensions(struct zx_sp_AuthnRequest_s* x, int n, struct zx_sp_Extensions_s* z)
{
  struct zx_sp_Extensions_s* y;
  if (!x || !z) return;
  y = x->Extensions;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Extensions = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_sp_Extensions_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_sp_AuthnRequest_ADD_Extensions) */

void zx_sp_AuthnRequest_ADD_Extensions(struct zx_sp_AuthnRequest_s* x, int n, struct zx_sp_Extensions_s* z)
{
  struct zx_sp_Extensions_s* y;
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
    for (; y->gg.g.n; y = (struct zx_sp_Extensions_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Extensions; n > 1 && y; --n, y = (struct zx_sp_Extensions_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_sp_AuthnRequest_DEL_Extensions) */

void zx_sp_AuthnRequest_DEL_Extensions(struct zx_sp_AuthnRequest_s* x, int n)
{
  struct zx_sp_Extensions_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Extensions = (struct zx_sp_Extensions_s*)x->Extensions->gg.g.n;
    return;
  case -1:
    y = (struct zx_sp_Extensions_s*)x->Extensions;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_sp_Extensions_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Extensions; n > 1 && y->gg.g.n; --n, y = (struct zx_sp_Extensions_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_sp_AuthnRequest_NUM_Subject) */

int zx_sp_AuthnRequest_NUM_Subject(struct zx_sp_AuthnRequest_s* x)
{
  struct zx_sa_Subject_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Subject; y; ++n, y = (struct zx_sa_Subject_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_sp_AuthnRequest_GET_Subject) */

struct zx_sa_Subject_s* zx_sp_AuthnRequest_GET_Subject(struct zx_sp_AuthnRequest_s* x, int n)
{
  struct zx_sa_Subject_s* y;
  if (!x) return 0;
  for (y = x->Subject; n>=0 && y; --n, y = (struct zx_sa_Subject_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_sp_AuthnRequest_POP_Subject) */

struct zx_sa_Subject_s* zx_sp_AuthnRequest_POP_Subject(struct zx_sp_AuthnRequest_s* x)
{
  struct zx_sa_Subject_s* y;
  if (!x) return 0;
  y = x->Subject;
  if (y)
    x->Subject = (struct zx_sa_Subject_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_sp_AuthnRequest_PUSH_Subject) */

void zx_sp_AuthnRequest_PUSH_Subject(struct zx_sp_AuthnRequest_s* x, struct zx_sa_Subject_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Subject->gg.g;
  x->Subject = z;
}

/* FUNC(zx_sp_AuthnRequest_REV_Subject) */

void zx_sp_AuthnRequest_REV_Subject(struct zx_sp_AuthnRequest_s* x)
{
  struct zx_sa_Subject_s* nxt;
  struct zx_sa_Subject_s* y;
  if (!x) return;
  y = x->Subject;
  if (!y) return;
  x->Subject = 0;
  while (y) {
    nxt = (struct zx_sa_Subject_s*)y->gg.g.n;
    y->gg.g.n = &x->Subject->gg.g;
    x->Subject = y;
    y = nxt;
  }
}

/* FUNC(zx_sp_AuthnRequest_PUT_Subject) */

void zx_sp_AuthnRequest_PUT_Subject(struct zx_sp_AuthnRequest_s* x, int n, struct zx_sa_Subject_s* z)
{
  struct zx_sa_Subject_s* y;
  if (!x || !z) return;
  y = x->Subject;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Subject = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_sa_Subject_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_sp_AuthnRequest_ADD_Subject) */

void zx_sp_AuthnRequest_ADD_Subject(struct zx_sp_AuthnRequest_s* x, int n, struct zx_sa_Subject_s* z)
{
  struct zx_sa_Subject_s* y;
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
    for (; y->gg.g.n; y = (struct zx_sa_Subject_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Subject; n > 1 && y; --n, y = (struct zx_sa_Subject_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_sp_AuthnRequest_DEL_Subject) */

void zx_sp_AuthnRequest_DEL_Subject(struct zx_sp_AuthnRequest_s* x, int n)
{
  struct zx_sa_Subject_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Subject = (struct zx_sa_Subject_s*)x->Subject->gg.g.n;
    return;
  case -1:
    y = (struct zx_sa_Subject_s*)x->Subject;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_sa_Subject_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Subject; n > 1 && y->gg.g.n; --n, y = (struct zx_sa_Subject_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_sp_AuthnRequest_NUM_NameIDPolicy) */

int zx_sp_AuthnRequest_NUM_NameIDPolicy(struct zx_sp_AuthnRequest_s* x)
{
  struct zx_sp_NameIDPolicy_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->NameIDPolicy; y; ++n, y = (struct zx_sp_NameIDPolicy_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_sp_AuthnRequest_GET_NameIDPolicy) */

struct zx_sp_NameIDPolicy_s* zx_sp_AuthnRequest_GET_NameIDPolicy(struct zx_sp_AuthnRequest_s* x, int n)
{
  struct zx_sp_NameIDPolicy_s* y;
  if (!x) return 0;
  for (y = x->NameIDPolicy; n>=0 && y; --n, y = (struct zx_sp_NameIDPolicy_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_sp_AuthnRequest_POP_NameIDPolicy) */

struct zx_sp_NameIDPolicy_s* zx_sp_AuthnRequest_POP_NameIDPolicy(struct zx_sp_AuthnRequest_s* x)
{
  struct zx_sp_NameIDPolicy_s* y;
  if (!x) return 0;
  y = x->NameIDPolicy;
  if (y)
    x->NameIDPolicy = (struct zx_sp_NameIDPolicy_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_sp_AuthnRequest_PUSH_NameIDPolicy) */

void zx_sp_AuthnRequest_PUSH_NameIDPolicy(struct zx_sp_AuthnRequest_s* x, struct zx_sp_NameIDPolicy_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->NameIDPolicy->gg.g;
  x->NameIDPolicy = z;
}

/* FUNC(zx_sp_AuthnRequest_REV_NameIDPolicy) */

void zx_sp_AuthnRequest_REV_NameIDPolicy(struct zx_sp_AuthnRequest_s* x)
{
  struct zx_sp_NameIDPolicy_s* nxt;
  struct zx_sp_NameIDPolicy_s* y;
  if (!x) return;
  y = x->NameIDPolicy;
  if (!y) return;
  x->NameIDPolicy = 0;
  while (y) {
    nxt = (struct zx_sp_NameIDPolicy_s*)y->gg.g.n;
    y->gg.g.n = &x->NameIDPolicy->gg.g;
    x->NameIDPolicy = y;
    y = nxt;
  }
}

/* FUNC(zx_sp_AuthnRequest_PUT_NameIDPolicy) */

void zx_sp_AuthnRequest_PUT_NameIDPolicy(struct zx_sp_AuthnRequest_s* x, int n, struct zx_sp_NameIDPolicy_s* z)
{
  struct zx_sp_NameIDPolicy_s* y;
  if (!x || !z) return;
  y = x->NameIDPolicy;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->NameIDPolicy = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_sp_NameIDPolicy_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_sp_AuthnRequest_ADD_NameIDPolicy) */

void zx_sp_AuthnRequest_ADD_NameIDPolicy(struct zx_sp_AuthnRequest_s* x, int n, struct zx_sp_NameIDPolicy_s* z)
{
  struct zx_sp_NameIDPolicy_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->NameIDPolicy->gg.g;
    x->NameIDPolicy = z;
    return;
  case -1:
    y = x->NameIDPolicy;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_sp_NameIDPolicy_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->NameIDPolicy; n > 1 && y; --n, y = (struct zx_sp_NameIDPolicy_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_sp_AuthnRequest_DEL_NameIDPolicy) */

void zx_sp_AuthnRequest_DEL_NameIDPolicy(struct zx_sp_AuthnRequest_s* x, int n)
{
  struct zx_sp_NameIDPolicy_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->NameIDPolicy = (struct zx_sp_NameIDPolicy_s*)x->NameIDPolicy->gg.g.n;
    return;
  case -1:
    y = (struct zx_sp_NameIDPolicy_s*)x->NameIDPolicy;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_sp_NameIDPolicy_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->NameIDPolicy; n > 1 && y->gg.g.n; --n, y = (struct zx_sp_NameIDPolicy_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_sp_AuthnRequest_NUM_Conditions) */

int zx_sp_AuthnRequest_NUM_Conditions(struct zx_sp_AuthnRequest_s* x)
{
  struct zx_sa_Conditions_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Conditions; y; ++n, y = (struct zx_sa_Conditions_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_sp_AuthnRequest_GET_Conditions) */

struct zx_sa_Conditions_s* zx_sp_AuthnRequest_GET_Conditions(struct zx_sp_AuthnRequest_s* x, int n)
{
  struct zx_sa_Conditions_s* y;
  if (!x) return 0;
  for (y = x->Conditions; n>=0 && y; --n, y = (struct zx_sa_Conditions_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_sp_AuthnRequest_POP_Conditions) */

struct zx_sa_Conditions_s* zx_sp_AuthnRequest_POP_Conditions(struct zx_sp_AuthnRequest_s* x)
{
  struct zx_sa_Conditions_s* y;
  if (!x) return 0;
  y = x->Conditions;
  if (y)
    x->Conditions = (struct zx_sa_Conditions_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_sp_AuthnRequest_PUSH_Conditions) */

void zx_sp_AuthnRequest_PUSH_Conditions(struct zx_sp_AuthnRequest_s* x, struct zx_sa_Conditions_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Conditions->gg.g;
  x->Conditions = z;
}

/* FUNC(zx_sp_AuthnRequest_REV_Conditions) */

void zx_sp_AuthnRequest_REV_Conditions(struct zx_sp_AuthnRequest_s* x)
{
  struct zx_sa_Conditions_s* nxt;
  struct zx_sa_Conditions_s* y;
  if (!x) return;
  y = x->Conditions;
  if (!y) return;
  x->Conditions = 0;
  while (y) {
    nxt = (struct zx_sa_Conditions_s*)y->gg.g.n;
    y->gg.g.n = &x->Conditions->gg.g;
    x->Conditions = y;
    y = nxt;
  }
}

/* FUNC(zx_sp_AuthnRequest_PUT_Conditions) */

void zx_sp_AuthnRequest_PUT_Conditions(struct zx_sp_AuthnRequest_s* x, int n, struct zx_sa_Conditions_s* z)
{
  struct zx_sa_Conditions_s* y;
  if (!x || !z) return;
  y = x->Conditions;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Conditions = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_sa_Conditions_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_sp_AuthnRequest_ADD_Conditions) */

void zx_sp_AuthnRequest_ADD_Conditions(struct zx_sp_AuthnRequest_s* x, int n, struct zx_sa_Conditions_s* z)
{
  struct zx_sa_Conditions_s* y;
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
    for (; y->gg.g.n; y = (struct zx_sa_Conditions_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Conditions; n > 1 && y; --n, y = (struct zx_sa_Conditions_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_sp_AuthnRequest_DEL_Conditions) */

void zx_sp_AuthnRequest_DEL_Conditions(struct zx_sp_AuthnRequest_s* x, int n)
{
  struct zx_sa_Conditions_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Conditions = (struct zx_sa_Conditions_s*)x->Conditions->gg.g.n;
    return;
  case -1:
    y = (struct zx_sa_Conditions_s*)x->Conditions;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_sa_Conditions_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Conditions; n > 1 && y->gg.g.n; --n, y = (struct zx_sa_Conditions_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_sp_AuthnRequest_NUM_RequestedAuthnContext) */

int zx_sp_AuthnRequest_NUM_RequestedAuthnContext(struct zx_sp_AuthnRequest_s* x)
{
  struct zx_sp_RequestedAuthnContext_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->RequestedAuthnContext; y; ++n, y = (struct zx_sp_RequestedAuthnContext_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_sp_AuthnRequest_GET_RequestedAuthnContext) */

struct zx_sp_RequestedAuthnContext_s* zx_sp_AuthnRequest_GET_RequestedAuthnContext(struct zx_sp_AuthnRequest_s* x, int n)
{
  struct zx_sp_RequestedAuthnContext_s* y;
  if (!x) return 0;
  for (y = x->RequestedAuthnContext; n>=0 && y; --n, y = (struct zx_sp_RequestedAuthnContext_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_sp_AuthnRequest_POP_RequestedAuthnContext) */

struct zx_sp_RequestedAuthnContext_s* zx_sp_AuthnRequest_POP_RequestedAuthnContext(struct zx_sp_AuthnRequest_s* x)
{
  struct zx_sp_RequestedAuthnContext_s* y;
  if (!x) return 0;
  y = x->RequestedAuthnContext;
  if (y)
    x->RequestedAuthnContext = (struct zx_sp_RequestedAuthnContext_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_sp_AuthnRequest_PUSH_RequestedAuthnContext) */

void zx_sp_AuthnRequest_PUSH_RequestedAuthnContext(struct zx_sp_AuthnRequest_s* x, struct zx_sp_RequestedAuthnContext_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->RequestedAuthnContext->gg.g;
  x->RequestedAuthnContext = z;
}

/* FUNC(zx_sp_AuthnRequest_REV_RequestedAuthnContext) */

void zx_sp_AuthnRequest_REV_RequestedAuthnContext(struct zx_sp_AuthnRequest_s* x)
{
  struct zx_sp_RequestedAuthnContext_s* nxt;
  struct zx_sp_RequestedAuthnContext_s* y;
  if (!x) return;
  y = x->RequestedAuthnContext;
  if (!y) return;
  x->RequestedAuthnContext = 0;
  while (y) {
    nxt = (struct zx_sp_RequestedAuthnContext_s*)y->gg.g.n;
    y->gg.g.n = &x->RequestedAuthnContext->gg.g;
    x->RequestedAuthnContext = y;
    y = nxt;
  }
}

/* FUNC(zx_sp_AuthnRequest_PUT_RequestedAuthnContext) */

void zx_sp_AuthnRequest_PUT_RequestedAuthnContext(struct zx_sp_AuthnRequest_s* x, int n, struct zx_sp_RequestedAuthnContext_s* z)
{
  struct zx_sp_RequestedAuthnContext_s* y;
  if (!x || !z) return;
  y = x->RequestedAuthnContext;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->RequestedAuthnContext = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_sp_RequestedAuthnContext_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_sp_AuthnRequest_ADD_RequestedAuthnContext) */

void zx_sp_AuthnRequest_ADD_RequestedAuthnContext(struct zx_sp_AuthnRequest_s* x, int n, struct zx_sp_RequestedAuthnContext_s* z)
{
  struct zx_sp_RequestedAuthnContext_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->RequestedAuthnContext->gg.g;
    x->RequestedAuthnContext = z;
    return;
  case -1:
    y = x->RequestedAuthnContext;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_sp_RequestedAuthnContext_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->RequestedAuthnContext; n > 1 && y; --n, y = (struct zx_sp_RequestedAuthnContext_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_sp_AuthnRequest_DEL_RequestedAuthnContext) */

void zx_sp_AuthnRequest_DEL_RequestedAuthnContext(struct zx_sp_AuthnRequest_s* x, int n)
{
  struct zx_sp_RequestedAuthnContext_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->RequestedAuthnContext = (struct zx_sp_RequestedAuthnContext_s*)x->RequestedAuthnContext->gg.g.n;
    return;
  case -1:
    y = (struct zx_sp_RequestedAuthnContext_s*)x->RequestedAuthnContext;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_sp_RequestedAuthnContext_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->RequestedAuthnContext; n > 1 && y->gg.g.n; --n, y = (struct zx_sp_RequestedAuthnContext_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_sp_AuthnRequest_NUM_Scoping) */

int zx_sp_AuthnRequest_NUM_Scoping(struct zx_sp_AuthnRequest_s* x)
{
  struct zx_sp_Scoping_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Scoping; y; ++n, y = (struct zx_sp_Scoping_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_sp_AuthnRequest_GET_Scoping) */

struct zx_sp_Scoping_s* zx_sp_AuthnRequest_GET_Scoping(struct zx_sp_AuthnRequest_s* x, int n)
{
  struct zx_sp_Scoping_s* y;
  if (!x) return 0;
  for (y = x->Scoping; n>=0 && y; --n, y = (struct zx_sp_Scoping_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_sp_AuthnRequest_POP_Scoping) */

struct zx_sp_Scoping_s* zx_sp_AuthnRequest_POP_Scoping(struct zx_sp_AuthnRequest_s* x)
{
  struct zx_sp_Scoping_s* y;
  if (!x) return 0;
  y = x->Scoping;
  if (y)
    x->Scoping = (struct zx_sp_Scoping_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_sp_AuthnRequest_PUSH_Scoping) */

void zx_sp_AuthnRequest_PUSH_Scoping(struct zx_sp_AuthnRequest_s* x, struct zx_sp_Scoping_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Scoping->gg.g;
  x->Scoping = z;
}

/* FUNC(zx_sp_AuthnRequest_REV_Scoping) */

void zx_sp_AuthnRequest_REV_Scoping(struct zx_sp_AuthnRequest_s* x)
{
  struct zx_sp_Scoping_s* nxt;
  struct zx_sp_Scoping_s* y;
  if (!x) return;
  y = x->Scoping;
  if (!y) return;
  x->Scoping = 0;
  while (y) {
    nxt = (struct zx_sp_Scoping_s*)y->gg.g.n;
    y->gg.g.n = &x->Scoping->gg.g;
    x->Scoping = y;
    y = nxt;
  }
}

/* FUNC(zx_sp_AuthnRequest_PUT_Scoping) */

void zx_sp_AuthnRequest_PUT_Scoping(struct zx_sp_AuthnRequest_s* x, int n, struct zx_sp_Scoping_s* z)
{
  struct zx_sp_Scoping_s* y;
  if (!x || !z) return;
  y = x->Scoping;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Scoping = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_sp_Scoping_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_sp_AuthnRequest_ADD_Scoping) */

void zx_sp_AuthnRequest_ADD_Scoping(struct zx_sp_AuthnRequest_s* x, int n, struct zx_sp_Scoping_s* z)
{
  struct zx_sp_Scoping_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->Scoping->gg.g;
    x->Scoping = z;
    return;
  case -1:
    y = x->Scoping;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_sp_Scoping_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Scoping; n > 1 && y; --n, y = (struct zx_sp_Scoping_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_sp_AuthnRequest_DEL_Scoping) */

void zx_sp_AuthnRequest_DEL_Scoping(struct zx_sp_AuthnRequest_s* x, int n)
{
  struct zx_sp_Scoping_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Scoping = (struct zx_sp_Scoping_s*)x->Scoping->gg.g.n;
    return;
  case -1:
    y = (struct zx_sp_Scoping_s*)x->Scoping;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_sp_Scoping_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Scoping; n > 1 && y->gg.g.n; --n, y = (struct zx_sp_Scoping_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif

/* FUNC(zx_sp_AuthnRequest_GET_AssertionConsumerServiceIndex) */
struct zx_str* zx_sp_AuthnRequest_GET_AssertionConsumerServiceIndex(struct zx_sp_AuthnRequest_s* x) { return x->AssertionConsumerServiceIndex; }
/* FUNC(zx_sp_AuthnRequest_PUT_AssertionConsumerServiceIndex) */
void zx_sp_AuthnRequest_PUT_AssertionConsumerServiceIndex(struct zx_sp_AuthnRequest_s* x, struct zx_str* y) { x->AssertionConsumerServiceIndex = y; }
/* FUNC(zx_sp_AuthnRequest_GET_AssertionConsumerServiceURL) */
struct zx_str* zx_sp_AuthnRequest_GET_AssertionConsumerServiceURL(struct zx_sp_AuthnRequest_s* x) { return x->AssertionConsumerServiceURL; }
/* FUNC(zx_sp_AuthnRequest_PUT_AssertionConsumerServiceURL) */
void zx_sp_AuthnRequest_PUT_AssertionConsumerServiceURL(struct zx_sp_AuthnRequest_s* x, struct zx_str* y) { x->AssertionConsumerServiceURL = y; }
/* FUNC(zx_sp_AuthnRequest_GET_AttributeConsumingServiceIndex) */
struct zx_str* zx_sp_AuthnRequest_GET_AttributeConsumingServiceIndex(struct zx_sp_AuthnRequest_s* x) { return x->AttributeConsumingServiceIndex; }
/* FUNC(zx_sp_AuthnRequest_PUT_AttributeConsumingServiceIndex) */
void zx_sp_AuthnRequest_PUT_AttributeConsumingServiceIndex(struct zx_sp_AuthnRequest_s* x, struct zx_str* y) { x->AttributeConsumingServiceIndex = y; }
/* FUNC(zx_sp_AuthnRequest_GET_Consent) */
struct zx_str* zx_sp_AuthnRequest_GET_Consent(struct zx_sp_AuthnRequest_s* x) { return x->Consent; }
/* FUNC(zx_sp_AuthnRequest_PUT_Consent) */
void zx_sp_AuthnRequest_PUT_Consent(struct zx_sp_AuthnRequest_s* x, struct zx_str* y) { x->Consent = y; }
/* FUNC(zx_sp_AuthnRequest_GET_Destination) */
struct zx_str* zx_sp_AuthnRequest_GET_Destination(struct zx_sp_AuthnRequest_s* x) { return x->Destination; }
/* FUNC(zx_sp_AuthnRequest_PUT_Destination) */
void zx_sp_AuthnRequest_PUT_Destination(struct zx_sp_AuthnRequest_s* x, struct zx_str* y) { x->Destination = y; }
/* FUNC(zx_sp_AuthnRequest_GET_ForceAuthn) */
struct zx_str* zx_sp_AuthnRequest_GET_ForceAuthn(struct zx_sp_AuthnRequest_s* x) { return x->ForceAuthn; }
/* FUNC(zx_sp_AuthnRequest_PUT_ForceAuthn) */
void zx_sp_AuthnRequest_PUT_ForceAuthn(struct zx_sp_AuthnRequest_s* x, struct zx_str* y) { x->ForceAuthn = y; }
/* FUNC(zx_sp_AuthnRequest_GET_ID) */
struct zx_str* zx_sp_AuthnRequest_GET_ID(struct zx_sp_AuthnRequest_s* x) { return x->ID; }
/* FUNC(zx_sp_AuthnRequest_PUT_ID) */
void zx_sp_AuthnRequest_PUT_ID(struct zx_sp_AuthnRequest_s* x, struct zx_str* y) { x->ID = y; }
/* FUNC(zx_sp_AuthnRequest_GET_IsPassive) */
struct zx_str* zx_sp_AuthnRequest_GET_IsPassive(struct zx_sp_AuthnRequest_s* x) { return x->IsPassive; }
/* FUNC(zx_sp_AuthnRequest_PUT_IsPassive) */
void zx_sp_AuthnRequest_PUT_IsPassive(struct zx_sp_AuthnRequest_s* x, struct zx_str* y) { x->IsPassive = y; }
/* FUNC(zx_sp_AuthnRequest_GET_IssueInstant) */
struct zx_str* zx_sp_AuthnRequest_GET_IssueInstant(struct zx_sp_AuthnRequest_s* x) { return x->IssueInstant; }
/* FUNC(zx_sp_AuthnRequest_PUT_IssueInstant) */
void zx_sp_AuthnRequest_PUT_IssueInstant(struct zx_sp_AuthnRequest_s* x, struct zx_str* y) { x->IssueInstant = y; }
/* FUNC(zx_sp_AuthnRequest_GET_ProtocolBinding) */
struct zx_str* zx_sp_AuthnRequest_GET_ProtocolBinding(struct zx_sp_AuthnRequest_s* x) { return x->ProtocolBinding; }
/* FUNC(zx_sp_AuthnRequest_PUT_ProtocolBinding) */
void zx_sp_AuthnRequest_PUT_ProtocolBinding(struct zx_sp_AuthnRequest_s* x, struct zx_str* y) { x->ProtocolBinding = y; }
/* FUNC(zx_sp_AuthnRequest_GET_ProviderName) */
struct zx_str* zx_sp_AuthnRequest_GET_ProviderName(struct zx_sp_AuthnRequest_s* x) { return x->ProviderName; }
/* FUNC(zx_sp_AuthnRequest_PUT_ProviderName) */
void zx_sp_AuthnRequest_PUT_ProviderName(struct zx_sp_AuthnRequest_s* x, struct zx_str* y) { x->ProviderName = y; }
/* FUNC(zx_sp_AuthnRequest_GET_Version) */
struct zx_str* zx_sp_AuthnRequest_GET_Version(struct zx_sp_AuthnRequest_s* x) { return x->Version; }
/* FUNC(zx_sp_AuthnRequest_PUT_Version) */
void zx_sp_AuthnRequest_PUT_Version(struct zx_sp_AuthnRequest_s* x, struct zx_str* y) { x->Version = y; }







#ifdef ZX_ENA_GETPUT

/* FUNC(zx_sp_AuthzDecisionQuery_NUM_Issuer) */

int zx_sp_AuthzDecisionQuery_NUM_Issuer(struct zx_sp_AuthzDecisionQuery_s* x)
{
  struct zx_sa_Issuer_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Issuer; y; ++n, y = (struct zx_sa_Issuer_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_sp_AuthzDecisionQuery_GET_Issuer) */

struct zx_sa_Issuer_s* zx_sp_AuthzDecisionQuery_GET_Issuer(struct zx_sp_AuthzDecisionQuery_s* x, int n)
{
  struct zx_sa_Issuer_s* y;
  if (!x) return 0;
  for (y = x->Issuer; n>=0 && y; --n, y = (struct zx_sa_Issuer_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_sp_AuthzDecisionQuery_POP_Issuer) */

struct zx_sa_Issuer_s* zx_sp_AuthzDecisionQuery_POP_Issuer(struct zx_sp_AuthzDecisionQuery_s* x)
{
  struct zx_sa_Issuer_s* y;
  if (!x) return 0;
  y = x->Issuer;
  if (y)
    x->Issuer = (struct zx_sa_Issuer_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_sp_AuthzDecisionQuery_PUSH_Issuer) */

void zx_sp_AuthzDecisionQuery_PUSH_Issuer(struct zx_sp_AuthzDecisionQuery_s* x, struct zx_sa_Issuer_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Issuer->gg.g;
  x->Issuer = z;
}

/* FUNC(zx_sp_AuthzDecisionQuery_REV_Issuer) */

void zx_sp_AuthzDecisionQuery_REV_Issuer(struct zx_sp_AuthzDecisionQuery_s* x)
{
  struct zx_sa_Issuer_s* nxt;
  struct zx_sa_Issuer_s* y;
  if (!x) return;
  y = x->Issuer;
  if (!y) return;
  x->Issuer = 0;
  while (y) {
    nxt = (struct zx_sa_Issuer_s*)y->gg.g.n;
    y->gg.g.n = &x->Issuer->gg.g;
    x->Issuer = y;
    y = nxt;
  }
}

/* FUNC(zx_sp_AuthzDecisionQuery_PUT_Issuer) */

void zx_sp_AuthzDecisionQuery_PUT_Issuer(struct zx_sp_AuthzDecisionQuery_s* x, int n, struct zx_sa_Issuer_s* z)
{
  struct zx_sa_Issuer_s* y;
  if (!x || !z) return;
  y = x->Issuer;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Issuer = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_sa_Issuer_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_sp_AuthzDecisionQuery_ADD_Issuer) */

void zx_sp_AuthzDecisionQuery_ADD_Issuer(struct zx_sp_AuthzDecisionQuery_s* x, int n, struct zx_sa_Issuer_s* z)
{
  struct zx_sa_Issuer_s* y;
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
    for (; y->gg.g.n; y = (struct zx_sa_Issuer_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Issuer; n > 1 && y; --n, y = (struct zx_sa_Issuer_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_sp_AuthzDecisionQuery_DEL_Issuer) */

void zx_sp_AuthzDecisionQuery_DEL_Issuer(struct zx_sp_AuthzDecisionQuery_s* x, int n)
{
  struct zx_sa_Issuer_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Issuer = (struct zx_sa_Issuer_s*)x->Issuer->gg.g.n;
    return;
  case -1:
    y = (struct zx_sa_Issuer_s*)x->Issuer;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_sa_Issuer_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Issuer; n > 1 && y->gg.g.n; --n, y = (struct zx_sa_Issuer_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_sp_AuthzDecisionQuery_NUM_Signature) */

int zx_sp_AuthzDecisionQuery_NUM_Signature(struct zx_sp_AuthzDecisionQuery_s* x)
{
  struct zx_ds_Signature_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Signature; y; ++n, y = (struct zx_ds_Signature_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_sp_AuthzDecisionQuery_GET_Signature) */

struct zx_ds_Signature_s* zx_sp_AuthzDecisionQuery_GET_Signature(struct zx_sp_AuthzDecisionQuery_s* x, int n)
{
  struct zx_ds_Signature_s* y;
  if (!x) return 0;
  for (y = x->Signature; n>=0 && y; --n, y = (struct zx_ds_Signature_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_sp_AuthzDecisionQuery_POP_Signature) */

struct zx_ds_Signature_s* zx_sp_AuthzDecisionQuery_POP_Signature(struct zx_sp_AuthzDecisionQuery_s* x)
{
  struct zx_ds_Signature_s* y;
  if (!x) return 0;
  y = x->Signature;
  if (y)
    x->Signature = (struct zx_ds_Signature_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_sp_AuthzDecisionQuery_PUSH_Signature) */

void zx_sp_AuthzDecisionQuery_PUSH_Signature(struct zx_sp_AuthzDecisionQuery_s* x, struct zx_ds_Signature_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Signature->gg.g;
  x->Signature = z;
}

/* FUNC(zx_sp_AuthzDecisionQuery_REV_Signature) */

void zx_sp_AuthzDecisionQuery_REV_Signature(struct zx_sp_AuthzDecisionQuery_s* x)
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

/* FUNC(zx_sp_AuthzDecisionQuery_PUT_Signature) */

void zx_sp_AuthzDecisionQuery_PUT_Signature(struct zx_sp_AuthzDecisionQuery_s* x, int n, struct zx_ds_Signature_s* z)
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

/* FUNC(zx_sp_AuthzDecisionQuery_ADD_Signature) */

void zx_sp_AuthzDecisionQuery_ADD_Signature(struct zx_sp_AuthzDecisionQuery_s* x, int n, struct zx_ds_Signature_s* z)
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

/* FUNC(zx_sp_AuthzDecisionQuery_DEL_Signature) */

void zx_sp_AuthzDecisionQuery_DEL_Signature(struct zx_sp_AuthzDecisionQuery_s* x, int n)
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

/* FUNC(zx_sp_AuthzDecisionQuery_NUM_Extensions) */

int zx_sp_AuthzDecisionQuery_NUM_Extensions(struct zx_sp_AuthzDecisionQuery_s* x)
{
  struct zx_sp_Extensions_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Extensions; y; ++n, y = (struct zx_sp_Extensions_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_sp_AuthzDecisionQuery_GET_Extensions) */

struct zx_sp_Extensions_s* zx_sp_AuthzDecisionQuery_GET_Extensions(struct zx_sp_AuthzDecisionQuery_s* x, int n)
{
  struct zx_sp_Extensions_s* y;
  if (!x) return 0;
  for (y = x->Extensions; n>=0 && y; --n, y = (struct zx_sp_Extensions_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_sp_AuthzDecisionQuery_POP_Extensions) */

struct zx_sp_Extensions_s* zx_sp_AuthzDecisionQuery_POP_Extensions(struct zx_sp_AuthzDecisionQuery_s* x)
{
  struct zx_sp_Extensions_s* y;
  if (!x) return 0;
  y = x->Extensions;
  if (y)
    x->Extensions = (struct zx_sp_Extensions_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_sp_AuthzDecisionQuery_PUSH_Extensions) */

void zx_sp_AuthzDecisionQuery_PUSH_Extensions(struct zx_sp_AuthzDecisionQuery_s* x, struct zx_sp_Extensions_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Extensions->gg.g;
  x->Extensions = z;
}

/* FUNC(zx_sp_AuthzDecisionQuery_REV_Extensions) */

void zx_sp_AuthzDecisionQuery_REV_Extensions(struct zx_sp_AuthzDecisionQuery_s* x)
{
  struct zx_sp_Extensions_s* nxt;
  struct zx_sp_Extensions_s* y;
  if (!x) return;
  y = x->Extensions;
  if (!y) return;
  x->Extensions = 0;
  while (y) {
    nxt = (struct zx_sp_Extensions_s*)y->gg.g.n;
    y->gg.g.n = &x->Extensions->gg.g;
    x->Extensions = y;
    y = nxt;
  }
}

/* FUNC(zx_sp_AuthzDecisionQuery_PUT_Extensions) */

void zx_sp_AuthzDecisionQuery_PUT_Extensions(struct zx_sp_AuthzDecisionQuery_s* x, int n, struct zx_sp_Extensions_s* z)
{
  struct zx_sp_Extensions_s* y;
  if (!x || !z) return;
  y = x->Extensions;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Extensions = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_sp_Extensions_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_sp_AuthzDecisionQuery_ADD_Extensions) */

void zx_sp_AuthzDecisionQuery_ADD_Extensions(struct zx_sp_AuthzDecisionQuery_s* x, int n, struct zx_sp_Extensions_s* z)
{
  struct zx_sp_Extensions_s* y;
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
    for (; y->gg.g.n; y = (struct zx_sp_Extensions_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Extensions; n > 1 && y; --n, y = (struct zx_sp_Extensions_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_sp_AuthzDecisionQuery_DEL_Extensions) */

void zx_sp_AuthzDecisionQuery_DEL_Extensions(struct zx_sp_AuthzDecisionQuery_s* x, int n)
{
  struct zx_sp_Extensions_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Extensions = (struct zx_sp_Extensions_s*)x->Extensions->gg.g.n;
    return;
  case -1:
    y = (struct zx_sp_Extensions_s*)x->Extensions;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_sp_Extensions_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Extensions; n > 1 && y->gg.g.n; --n, y = (struct zx_sp_Extensions_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_sp_AuthzDecisionQuery_NUM_Subject) */

int zx_sp_AuthzDecisionQuery_NUM_Subject(struct zx_sp_AuthzDecisionQuery_s* x)
{
  struct zx_sa_Subject_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Subject; y; ++n, y = (struct zx_sa_Subject_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_sp_AuthzDecisionQuery_GET_Subject) */

struct zx_sa_Subject_s* zx_sp_AuthzDecisionQuery_GET_Subject(struct zx_sp_AuthzDecisionQuery_s* x, int n)
{
  struct zx_sa_Subject_s* y;
  if (!x) return 0;
  for (y = x->Subject; n>=0 && y; --n, y = (struct zx_sa_Subject_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_sp_AuthzDecisionQuery_POP_Subject) */

struct zx_sa_Subject_s* zx_sp_AuthzDecisionQuery_POP_Subject(struct zx_sp_AuthzDecisionQuery_s* x)
{
  struct zx_sa_Subject_s* y;
  if (!x) return 0;
  y = x->Subject;
  if (y)
    x->Subject = (struct zx_sa_Subject_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_sp_AuthzDecisionQuery_PUSH_Subject) */

void zx_sp_AuthzDecisionQuery_PUSH_Subject(struct zx_sp_AuthzDecisionQuery_s* x, struct zx_sa_Subject_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Subject->gg.g;
  x->Subject = z;
}

/* FUNC(zx_sp_AuthzDecisionQuery_REV_Subject) */

void zx_sp_AuthzDecisionQuery_REV_Subject(struct zx_sp_AuthzDecisionQuery_s* x)
{
  struct zx_sa_Subject_s* nxt;
  struct zx_sa_Subject_s* y;
  if (!x) return;
  y = x->Subject;
  if (!y) return;
  x->Subject = 0;
  while (y) {
    nxt = (struct zx_sa_Subject_s*)y->gg.g.n;
    y->gg.g.n = &x->Subject->gg.g;
    x->Subject = y;
    y = nxt;
  }
}

/* FUNC(zx_sp_AuthzDecisionQuery_PUT_Subject) */

void zx_sp_AuthzDecisionQuery_PUT_Subject(struct zx_sp_AuthzDecisionQuery_s* x, int n, struct zx_sa_Subject_s* z)
{
  struct zx_sa_Subject_s* y;
  if (!x || !z) return;
  y = x->Subject;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Subject = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_sa_Subject_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_sp_AuthzDecisionQuery_ADD_Subject) */

void zx_sp_AuthzDecisionQuery_ADD_Subject(struct zx_sp_AuthzDecisionQuery_s* x, int n, struct zx_sa_Subject_s* z)
{
  struct zx_sa_Subject_s* y;
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
    for (; y->gg.g.n; y = (struct zx_sa_Subject_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Subject; n > 1 && y; --n, y = (struct zx_sa_Subject_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_sp_AuthzDecisionQuery_DEL_Subject) */

void zx_sp_AuthzDecisionQuery_DEL_Subject(struct zx_sp_AuthzDecisionQuery_s* x, int n)
{
  struct zx_sa_Subject_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Subject = (struct zx_sa_Subject_s*)x->Subject->gg.g.n;
    return;
  case -1:
    y = (struct zx_sa_Subject_s*)x->Subject;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_sa_Subject_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Subject; n > 1 && y->gg.g.n; --n, y = (struct zx_sa_Subject_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_sp_AuthzDecisionQuery_NUM_Action) */

int zx_sp_AuthzDecisionQuery_NUM_Action(struct zx_sp_AuthzDecisionQuery_s* x)
{
  struct zx_sa_Action_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Action; y; ++n, y = (struct zx_sa_Action_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_sp_AuthzDecisionQuery_GET_Action) */

struct zx_sa_Action_s* zx_sp_AuthzDecisionQuery_GET_Action(struct zx_sp_AuthzDecisionQuery_s* x, int n)
{
  struct zx_sa_Action_s* y;
  if (!x) return 0;
  for (y = x->Action; n>=0 && y; --n, y = (struct zx_sa_Action_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_sp_AuthzDecisionQuery_POP_Action) */

struct zx_sa_Action_s* zx_sp_AuthzDecisionQuery_POP_Action(struct zx_sp_AuthzDecisionQuery_s* x)
{
  struct zx_sa_Action_s* y;
  if (!x) return 0;
  y = x->Action;
  if (y)
    x->Action = (struct zx_sa_Action_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_sp_AuthzDecisionQuery_PUSH_Action) */

void zx_sp_AuthzDecisionQuery_PUSH_Action(struct zx_sp_AuthzDecisionQuery_s* x, struct zx_sa_Action_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Action->gg.g;
  x->Action = z;
}

/* FUNC(zx_sp_AuthzDecisionQuery_REV_Action) */

void zx_sp_AuthzDecisionQuery_REV_Action(struct zx_sp_AuthzDecisionQuery_s* x)
{
  struct zx_sa_Action_s* nxt;
  struct zx_sa_Action_s* y;
  if (!x) return;
  y = x->Action;
  if (!y) return;
  x->Action = 0;
  while (y) {
    nxt = (struct zx_sa_Action_s*)y->gg.g.n;
    y->gg.g.n = &x->Action->gg.g;
    x->Action = y;
    y = nxt;
  }
}

/* FUNC(zx_sp_AuthzDecisionQuery_PUT_Action) */

void zx_sp_AuthzDecisionQuery_PUT_Action(struct zx_sp_AuthzDecisionQuery_s* x, int n, struct zx_sa_Action_s* z)
{
  struct zx_sa_Action_s* y;
  if (!x || !z) return;
  y = x->Action;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Action = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_sa_Action_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_sp_AuthzDecisionQuery_ADD_Action) */

void zx_sp_AuthzDecisionQuery_ADD_Action(struct zx_sp_AuthzDecisionQuery_s* x, int n, struct zx_sa_Action_s* z)
{
  struct zx_sa_Action_s* y;
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
    for (; y->gg.g.n; y = (struct zx_sa_Action_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Action; n > 1 && y; --n, y = (struct zx_sa_Action_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_sp_AuthzDecisionQuery_DEL_Action) */

void zx_sp_AuthzDecisionQuery_DEL_Action(struct zx_sp_AuthzDecisionQuery_s* x, int n)
{
  struct zx_sa_Action_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Action = (struct zx_sa_Action_s*)x->Action->gg.g.n;
    return;
  case -1:
    y = (struct zx_sa_Action_s*)x->Action;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_sa_Action_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Action; n > 1 && y->gg.g.n; --n, y = (struct zx_sa_Action_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_sp_AuthzDecisionQuery_NUM_Evidence) */

int zx_sp_AuthzDecisionQuery_NUM_Evidence(struct zx_sp_AuthzDecisionQuery_s* x)
{
  struct zx_sa_Evidence_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Evidence; y; ++n, y = (struct zx_sa_Evidence_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_sp_AuthzDecisionQuery_GET_Evidence) */

struct zx_sa_Evidence_s* zx_sp_AuthzDecisionQuery_GET_Evidence(struct zx_sp_AuthzDecisionQuery_s* x, int n)
{
  struct zx_sa_Evidence_s* y;
  if (!x) return 0;
  for (y = x->Evidence; n>=0 && y; --n, y = (struct zx_sa_Evidence_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_sp_AuthzDecisionQuery_POP_Evidence) */

struct zx_sa_Evidence_s* zx_sp_AuthzDecisionQuery_POP_Evidence(struct zx_sp_AuthzDecisionQuery_s* x)
{
  struct zx_sa_Evidence_s* y;
  if (!x) return 0;
  y = x->Evidence;
  if (y)
    x->Evidence = (struct zx_sa_Evidence_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_sp_AuthzDecisionQuery_PUSH_Evidence) */

void zx_sp_AuthzDecisionQuery_PUSH_Evidence(struct zx_sp_AuthzDecisionQuery_s* x, struct zx_sa_Evidence_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Evidence->gg.g;
  x->Evidence = z;
}

/* FUNC(zx_sp_AuthzDecisionQuery_REV_Evidence) */

void zx_sp_AuthzDecisionQuery_REV_Evidence(struct zx_sp_AuthzDecisionQuery_s* x)
{
  struct zx_sa_Evidence_s* nxt;
  struct zx_sa_Evidence_s* y;
  if (!x) return;
  y = x->Evidence;
  if (!y) return;
  x->Evidence = 0;
  while (y) {
    nxt = (struct zx_sa_Evidence_s*)y->gg.g.n;
    y->gg.g.n = &x->Evidence->gg.g;
    x->Evidence = y;
    y = nxt;
  }
}

/* FUNC(zx_sp_AuthzDecisionQuery_PUT_Evidence) */

void zx_sp_AuthzDecisionQuery_PUT_Evidence(struct zx_sp_AuthzDecisionQuery_s* x, int n, struct zx_sa_Evidence_s* z)
{
  struct zx_sa_Evidence_s* y;
  if (!x || !z) return;
  y = x->Evidence;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Evidence = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_sa_Evidence_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_sp_AuthzDecisionQuery_ADD_Evidence) */

void zx_sp_AuthzDecisionQuery_ADD_Evidence(struct zx_sp_AuthzDecisionQuery_s* x, int n, struct zx_sa_Evidence_s* z)
{
  struct zx_sa_Evidence_s* y;
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
    for (; y->gg.g.n; y = (struct zx_sa_Evidence_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Evidence; n > 1 && y; --n, y = (struct zx_sa_Evidence_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_sp_AuthzDecisionQuery_DEL_Evidence) */

void zx_sp_AuthzDecisionQuery_DEL_Evidence(struct zx_sp_AuthzDecisionQuery_s* x, int n)
{
  struct zx_sa_Evidence_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Evidence = (struct zx_sa_Evidence_s*)x->Evidence->gg.g.n;
    return;
  case -1:
    y = (struct zx_sa_Evidence_s*)x->Evidence;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_sa_Evidence_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Evidence; n > 1 && y->gg.g.n; --n, y = (struct zx_sa_Evidence_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif

/* FUNC(zx_sp_AuthzDecisionQuery_GET_Consent) */
struct zx_str* zx_sp_AuthzDecisionQuery_GET_Consent(struct zx_sp_AuthzDecisionQuery_s* x) { return x->Consent; }
/* FUNC(zx_sp_AuthzDecisionQuery_PUT_Consent) */
void zx_sp_AuthzDecisionQuery_PUT_Consent(struct zx_sp_AuthzDecisionQuery_s* x, struct zx_str* y) { x->Consent = y; }
/* FUNC(zx_sp_AuthzDecisionQuery_GET_Destination) */
struct zx_str* zx_sp_AuthzDecisionQuery_GET_Destination(struct zx_sp_AuthzDecisionQuery_s* x) { return x->Destination; }
/* FUNC(zx_sp_AuthzDecisionQuery_PUT_Destination) */
void zx_sp_AuthzDecisionQuery_PUT_Destination(struct zx_sp_AuthzDecisionQuery_s* x, struct zx_str* y) { x->Destination = y; }
/* FUNC(zx_sp_AuthzDecisionQuery_GET_ID) */
struct zx_str* zx_sp_AuthzDecisionQuery_GET_ID(struct zx_sp_AuthzDecisionQuery_s* x) { return x->ID; }
/* FUNC(zx_sp_AuthzDecisionQuery_PUT_ID) */
void zx_sp_AuthzDecisionQuery_PUT_ID(struct zx_sp_AuthzDecisionQuery_s* x, struct zx_str* y) { x->ID = y; }
/* FUNC(zx_sp_AuthzDecisionQuery_GET_IssueInstant) */
struct zx_str* zx_sp_AuthzDecisionQuery_GET_IssueInstant(struct zx_sp_AuthzDecisionQuery_s* x) { return x->IssueInstant; }
/* FUNC(zx_sp_AuthzDecisionQuery_PUT_IssueInstant) */
void zx_sp_AuthzDecisionQuery_PUT_IssueInstant(struct zx_sp_AuthzDecisionQuery_s* x, struct zx_str* y) { x->IssueInstant = y; }
/* FUNC(zx_sp_AuthzDecisionQuery_GET_Resource) */
struct zx_str* zx_sp_AuthzDecisionQuery_GET_Resource(struct zx_sp_AuthzDecisionQuery_s* x) { return x->Resource; }
/* FUNC(zx_sp_AuthzDecisionQuery_PUT_Resource) */
void zx_sp_AuthzDecisionQuery_PUT_Resource(struct zx_sp_AuthzDecisionQuery_s* x, struct zx_str* y) { x->Resource = y; }
/* FUNC(zx_sp_AuthzDecisionQuery_GET_Version) */
struct zx_str* zx_sp_AuthzDecisionQuery_GET_Version(struct zx_sp_AuthzDecisionQuery_s* x) { return x->Version; }
/* FUNC(zx_sp_AuthzDecisionQuery_PUT_Version) */
void zx_sp_AuthzDecisionQuery_PUT_Version(struct zx_sp_AuthzDecisionQuery_s* x, struct zx_str* y) { x->Version = y; }










/* FUNC(zx_sp_IDPEntry_GET_Loc) */
struct zx_str* zx_sp_IDPEntry_GET_Loc(struct zx_sp_IDPEntry_s* x) { return x->Loc; }
/* FUNC(zx_sp_IDPEntry_PUT_Loc) */
void zx_sp_IDPEntry_PUT_Loc(struct zx_sp_IDPEntry_s* x, struct zx_str* y) { x->Loc = y; }
/* FUNC(zx_sp_IDPEntry_GET_Name) */
struct zx_str* zx_sp_IDPEntry_GET_Name(struct zx_sp_IDPEntry_s* x) { return x->Name; }
/* FUNC(zx_sp_IDPEntry_PUT_Name) */
void zx_sp_IDPEntry_PUT_Name(struct zx_sp_IDPEntry_s* x, struct zx_str* y) { x->Name = y; }
/* FUNC(zx_sp_IDPEntry_GET_ProviderID) */
struct zx_str* zx_sp_IDPEntry_GET_ProviderID(struct zx_sp_IDPEntry_s* x) { return x->ProviderID; }
/* FUNC(zx_sp_IDPEntry_PUT_ProviderID) */
void zx_sp_IDPEntry_PUT_ProviderID(struct zx_sp_IDPEntry_s* x, struct zx_str* y) { x->ProviderID = y; }







#ifdef ZX_ENA_GETPUT

/* FUNC(zx_sp_IDPList_NUM_IDPEntry) */

int zx_sp_IDPList_NUM_IDPEntry(struct zx_sp_IDPList_s* x)
{
  struct zx_sp_IDPEntry_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->IDPEntry; y; ++n, y = (struct zx_sp_IDPEntry_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_sp_IDPList_GET_IDPEntry) */

struct zx_sp_IDPEntry_s* zx_sp_IDPList_GET_IDPEntry(struct zx_sp_IDPList_s* x, int n)
{
  struct zx_sp_IDPEntry_s* y;
  if (!x) return 0;
  for (y = x->IDPEntry; n>=0 && y; --n, y = (struct zx_sp_IDPEntry_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_sp_IDPList_POP_IDPEntry) */

struct zx_sp_IDPEntry_s* zx_sp_IDPList_POP_IDPEntry(struct zx_sp_IDPList_s* x)
{
  struct zx_sp_IDPEntry_s* y;
  if (!x) return 0;
  y = x->IDPEntry;
  if (y)
    x->IDPEntry = (struct zx_sp_IDPEntry_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_sp_IDPList_PUSH_IDPEntry) */

void zx_sp_IDPList_PUSH_IDPEntry(struct zx_sp_IDPList_s* x, struct zx_sp_IDPEntry_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->IDPEntry->gg.g;
  x->IDPEntry = z;
}

/* FUNC(zx_sp_IDPList_REV_IDPEntry) */

void zx_sp_IDPList_REV_IDPEntry(struct zx_sp_IDPList_s* x)
{
  struct zx_sp_IDPEntry_s* nxt;
  struct zx_sp_IDPEntry_s* y;
  if (!x) return;
  y = x->IDPEntry;
  if (!y) return;
  x->IDPEntry = 0;
  while (y) {
    nxt = (struct zx_sp_IDPEntry_s*)y->gg.g.n;
    y->gg.g.n = &x->IDPEntry->gg.g;
    x->IDPEntry = y;
    y = nxt;
  }
}

/* FUNC(zx_sp_IDPList_PUT_IDPEntry) */

void zx_sp_IDPList_PUT_IDPEntry(struct zx_sp_IDPList_s* x, int n, struct zx_sp_IDPEntry_s* z)
{
  struct zx_sp_IDPEntry_s* y;
  if (!x || !z) return;
  y = x->IDPEntry;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->IDPEntry = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_sp_IDPEntry_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_sp_IDPList_ADD_IDPEntry) */

void zx_sp_IDPList_ADD_IDPEntry(struct zx_sp_IDPList_s* x, int n, struct zx_sp_IDPEntry_s* z)
{
  struct zx_sp_IDPEntry_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->IDPEntry->gg.g;
    x->IDPEntry = z;
    return;
  case -1:
    y = x->IDPEntry;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_sp_IDPEntry_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->IDPEntry; n > 1 && y; --n, y = (struct zx_sp_IDPEntry_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_sp_IDPList_DEL_IDPEntry) */

void zx_sp_IDPList_DEL_IDPEntry(struct zx_sp_IDPList_s* x, int n)
{
  struct zx_sp_IDPEntry_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->IDPEntry = (struct zx_sp_IDPEntry_s*)x->IDPEntry->gg.g.n;
    return;
  case -1:
    y = (struct zx_sp_IDPEntry_s*)x->IDPEntry;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_sp_IDPEntry_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->IDPEntry; n > 1 && y->gg.g.n; --n, y = (struct zx_sp_IDPEntry_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_sp_IDPList_NUM_GetComplete) */

int zx_sp_IDPList_NUM_GetComplete(struct zx_sp_IDPList_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->GetComplete; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_sp_IDPList_GET_GetComplete) */

struct zx_elem_s* zx_sp_IDPList_GET_GetComplete(struct zx_sp_IDPList_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->GetComplete; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_sp_IDPList_POP_GetComplete) */

struct zx_elem_s* zx_sp_IDPList_POP_GetComplete(struct zx_sp_IDPList_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->GetComplete;
  if (y)
    x->GetComplete = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_sp_IDPList_PUSH_GetComplete) */

void zx_sp_IDPList_PUSH_GetComplete(struct zx_sp_IDPList_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->GetComplete->g;
  x->GetComplete = z;
}

/* FUNC(zx_sp_IDPList_REV_GetComplete) */

void zx_sp_IDPList_REV_GetComplete(struct zx_sp_IDPList_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->GetComplete;
  if (!y) return;
  x->GetComplete = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->GetComplete->g;
    x->GetComplete = y;
    y = nxt;
  }
}

/* FUNC(zx_sp_IDPList_PUT_GetComplete) */

void zx_sp_IDPList_PUT_GetComplete(struct zx_sp_IDPList_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->GetComplete;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->GetComplete = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_sp_IDPList_ADD_GetComplete) */

void zx_sp_IDPList_ADD_GetComplete(struct zx_sp_IDPList_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->GetComplete->g;
    x->GetComplete = z;
    return;
  case -1:
    y = x->GetComplete;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->GetComplete; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_sp_IDPList_DEL_GetComplete) */

void zx_sp_IDPList_DEL_GetComplete(struct zx_sp_IDPList_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->GetComplete = (struct zx_elem_s*)x->GetComplete->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->GetComplete;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->GetComplete; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

#endif








#ifdef ZX_ENA_GETPUT

/* FUNC(zx_sp_LogoutRequest_NUM_Issuer) */

int zx_sp_LogoutRequest_NUM_Issuer(struct zx_sp_LogoutRequest_s* x)
{
  struct zx_sa_Issuer_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Issuer; y; ++n, y = (struct zx_sa_Issuer_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_sp_LogoutRequest_GET_Issuer) */

struct zx_sa_Issuer_s* zx_sp_LogoutRequest_GET_Issuer(struct zx_sp_LogoutRequest_s* x, int n)
{
  struct zx_sa_Issuer_s* y;
  if (!x) return 0;
  for (y = x->Issuer; n>=0 && y; --n, y = (struct zx_sa_Issuer_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_sp_LogoutRequest_POP_Issuer) */

struct zx_sa_Issuer_s* zx_sp_LogoutRequest_POP_Issuer(struct zx_sp_LogoutRequest_s* x)
{
  struct zx_sa_Issuer_s* y;
  if (!x) return 0;
  y = x->Issuer;
  if (y)
    x->Issuer = (struct zx_sa_Issuer_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_sp_LogoutRequest_PUSH_Issuer) */

void zx_sp_LogoutRequest_PUSH_Issuer(struct zx_sp_LogoutRequest_s* x, struct zx_sa_Issuer_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Issuer->gg.g;
  x->Issuer = z;
}

/* FUNC(zx_sp_LogoutRequest_REV_Issuer) */

void zx_sp_LogoutRequest_REV_Issuer(struct zx_sp_LogoutRequest_s* x)
{
  struct zx_sa_Issuer_s* nxt;
  struct zx_sa_Issuer_s* y;
  if (!x) return;
  y = x->Issuer;
  if (!y) return;
  x->Issuer = 0;
  while (y) {
    nxt = (struct zx_sa_Issuer_s*)y->gg.g.n;
    y->gg.g.n = &x->Issuer->gg.g;
    x->Issuer = y;
    y = nxt;
  }
}

/* FUNC(zx_sp_LogoutRequest_PUT_Issuer) */

void zx_sp_LogoutRequest_PUT_Issuer(struct zx_sp_LogoutRequest_s* x, int n, struct zx_sa_Issuer_s* z)
{
  struct zx_sa_Issuer_s* y;
  if (!x || !z) return;
  y = x->Issuer;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Issuer = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_sa_Issuer_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_sp_LogoutRequest_ADD_Issuer) */

void zx_sp_LogoutRequest_ADD_Issuer(struct zx_sp_LogoutRequest_s* x, int n, struct zx_sa_Issuer_s* z)
{
  struct zx_sa_Issuer_s* y;
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
    for (; y->gg.g.n; y = (struct zx_sa_Issuer_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Issuer; n > 1 && y; --n, y = (struct zx_sa_Issuer_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_sp_LogoutRequest_DEL_Issuer) */

void zx_sp_LogoutRequest_DEL_Issuer(struct zx_sp_LogoutRequest_s* x, int n)
{
  struct zx_sa_Issuer_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Issuer = (struct zx_sa_Issuer_s*)x->Issuer->gg.g.n;
    return;
  case -1:
    y = (struct zx_sa_Issuer_s*)x->Issuer;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_sa_Issuer_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Issuer; n > 1 && y->gg.g.n; --n, y = (struct zx_sa_Issuer_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_sp_LogoutRequest_NUM_Signature) */

int zx_sp_LogoutRequest_NUM_Signature(struct zx_sp_LogoutRequest_s* x)
{
  struct zx_ds_Signature_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Signature; y; ++n, y = (struct zx_ds_Signature_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_sp_LogoutRequest_GET_Signature) */

struct zx_ds_Signature_s* zx_sp_LogoutRequest_GET_Signature(struct zx_sp_LogoutRequest_s* x, int n)
{
  struct zx_ds_Signature_s* y;
  if (!x) return 0;
  for (y = x->Signature; n>=0 && y; --n, y = (struct zx_ds_Signature_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_sp_LogoutRequest_POP_Signature) */

struct zx_ds_Signature_s* zx_sp_LogoutRequest_POP_Signature(struct zx_sp_LogoutRequest_s* x)
{
  struct zx_ds_Signature_s* y;
  if (!x) return 0;
  y = x->Signature;
  if (y)
    x->Signature = (struct zx_ds_Signature_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_sp_LogoutRequest_PUSH_Signature) */

void zx_sp_LogoutRequest_PUSH_Signature(struct zx_sp_LogoutRequest_s* x, struct zx_ds_Signature_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Signature->gg.g;
  x->Signature = z;
}

/* FUNC(zx_sp_LogoutRequest_REV_Signature) */

void zx_sp_LogoutRequest_REV_Signature(struct zx_sp_LogoutRequest_s* x)
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

/* FUNC(zx_sp_LogoutRequest_PUT_Signature) */

void zx_sp_LogoutRequest_PUT_Signature(struct zx_sp_LogoutRequest_s* x, int n, struct zx_ds_Signature_s* z)
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

/* FUNC(zx_sp_LogoutRequest_ADD_Signature) */

void zx_sp_LogoutRequest_ADD_Signature(struct zx_sp_LogoutRequest_s* x, int n, struct zx_ds_Signature_s* z)
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

/* FUNC(zx_sp_LogoutRequest_DEL_Signature) */

void zx_sp_LogoutRequest_DEL_Signature(struct zx_sp_LogoutRequest_s* x, int n)
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

/* FUNC(zx_sp_LogoutRequest_NUM_Extensions) */

int zx_sp_LogoutRequest_NUM_Extensions(struct zx_sp_LogoutRequest_s* x)
{
  struct zx_sp_Extensions_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Extensions; y; ++n, y = (struct zx_sp_Extensions_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_sp_LogoutRequest_GET_Extensions) */

struct zx_sp_Extensions_s* zx_sp_LogoutRequest_GET_Extensions(struct zx_sp_LogoutRequest_s* x, int n)
{
  struct zx_sp_Extensions_s* y;
  if (!x) return 0;
  for (y = x->Extensions; n>=0 && y; --n, y = (struct zx_sp_Extensions_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_sp_LogoutRequest_POP_Extensions) */

struct zx_sp_Extensions_s* zx_sp_LogoutRequest_POP_Extensions(struct zx_sp_LogoutRequest_s* x)
{
  struct zx_sp_Extensions_s* y;
  if (!x) return 0;
  y = x->Extensions;
  if (y)
    x->Extensions = (struct zx_sp_Extensions_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_sp_LogoutRequest_PUSH_Extensions) */

void zx_sp_LogoutRequest_PUSH_Extensions(struct zx_sp_LogoutRequest_s* x, struct zx_sp_Extensions_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Extensions->gg.g;
  x->Extensions = z;
}

/* FUNC(zx_sp_LogoutRequest_REV_Extensions) */

void zx_sp_LogoutRequest_REV_Extensions(struct zx_sp_LogoutRequest_s* x)
{
  struct zx_sp_Extensions_s* nxt;
  struct zx_sp_Extensions_s* y;
  if (!x) return;
  y = x->Extensions;
  if (!y) return;
  x->Extensions = 0;
  while (y) {
    nxt = (struct zx_sp_Extensions_s*)y->gg.g.n;
    y->gg.g.n = &x->Extensions->gg.g;
    x->Extensions = y;
    y = nxt;
  }
}

/* FUNC(zx_sp_LogoutRequest_PUT_Extensions) */

void zx_sp_LogoutRequest_PUT_Extensions(struct zx_sp_LogoutRequest_s* x, int n, struct zx_sp_Extensions_s* z)
{
  struct zx_sp_Extensions_s* y;
  if (!x || !z) return;
  y = x->Extensions;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Extensions = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_sp_Extensions_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_sp_LogoutRequest_ADD_Extensions) */

void zx_sp_LogoutRequest_ADD_Extensions(struct zx_sp_LogoutRequest_s* x, int n, struct zx_sp_Extensions_s* z)
{
  struct zx_sp_Extensions_s* y;
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
    for (; y->gg.g.n; y = (struct zx_sp_Extensions_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Extensions; n > 1 && y; --n, y = (struct zx_sp_Extensions_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_sp_LogoutRequest_DEL_Extensions) */

void zx_sp_LogoutRequest_DEL_Extensions(struct zx_sp_LogoutRequest_s* x, int n)
{
  struct zx_sp_Extensions_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Extensions = (struct zx_sp_Extensions_s*)x->Extensions->gg.g.n;
    return;
  case -1:
    y = (struct zx_sp_Extensions_s*)x->Extensions;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_sp_Extensions_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Extensions; n > 1 && y->gg.g.n; --n, y = (struct zx_sp_Extensions_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_sp_LogoutRequest_NUM_BaseID) */

int zx_sp_LogoutRequest_NUM_BaseID(struct zx_sp_LogoutRequest_s* x)
{
  struct zx_sa_BaseID_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->BaseID; y; ++n, y = (struct zx_sa_BaseID_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_sp_LogoutRequest_GET_BaseID) */

struct zx_sa_BaseID_s* zx_sp_LogoutRequest_GET_BaseID(struct zx_sp_LogoutRequest_s* x, int n)
{
  struct zx_sa_BaseID_s* y;
  if (!x) return 0;
  for (y = x->BaseID; n>=0 && y; --n, y = (struct zx_sa_BaseID_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_sp_LogoutRequest_POP_BaseID) */

struct zx_sa_BaseID_s* zx_sp_LogoutRequest_POP_BaseID(struct zx_sp_LogoutRequest_s* x)
{
  struct zx_sa_BaseID_s* y;
  if (!x) return 0;
  y = x->BaseID;
  if (y)
    x->BaseID = (struct zx_sa_BaseID_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_sp_LogoutRequest_PUSH_BaseID) */

void zx_sp_LogoutRequest_PUSH_BaseID(struct zx_sp_LogoutRequest_s* x, struct zx_sa_BaseID_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->BaseID->gg.g;
  x->BaseID = z;
}

/* FUNC(zx_sp_LogoutRequest_REV_BaseID) */

void zx_sp_LogoutRequest_REV_BaseID(struct zx_sp_LogoutRequest_s* x)
{
  struct zx_sa_BaseID_s* nxt;
  struct zx_sa_BaseID_s* y;
  if (!x) return;
  y = x->BaseID;
  if (!y) return;
  x->BaseID = 0;
  while (y) {
    nxt = (struct zx_sa_BaseID_s*)y->gg.g.n;
    y->gg.g.n = &x->BaseID->gg.g;
    x->BaseID = y;
    y = nxt;
  }
}

/* FUNC(zx_sp_LogoutRequest_PUT_BaseID) */

void zx_sp_LogoutRequest_PUT_BaseID(struct zx_sp_LogoutRequest_s* x, int n, struct zx_sa_BaseID_s* z)
{
  struct zx_sa_BaseID_s* y;
  if (!x || !z) return;
  y = x->BaseID;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->BaseID = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_sa_BaseID_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_sp_LogoutRequest_ADD_BaseID) */

void zx_sp_LogoutRequest_ADD_BaseID(struct zx_sp_LogoutRequest_s* x, int n, struct zx_sa_BaseID_s* z)
{
  struct zx_sa_BaseID_s* y;
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
    for (; y->gg.g.n; y = (struct zx_sa_BaseID_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->BaseID; n > 1 && y; --n, y = (struct zx_sa_BaseID_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_sp_LogoutRequest_DEL_BaseID) */

void zx_sp_LogoutRequest_DEL_BaseID(struct zx_sp_LogoutRequest_s* x, int n)
{
  struct zx_sa_BaseID_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->BaseID = (struct zx_sa_BaseID_s*)x->BaseID->gg.g.n;
    return;
  case -1:
    y = (struct zx_sa_BaseID_s*)x->BaseID;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_sa_BaseID_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->BaseID; n > 1 && y->gg.g.n; --n, y = (struct zx_sa_BaseID_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_sp_LogoutRequest_NUM_NameID) */

int zx_sp_LogoutRequest_NUM_NameID(struct zx_sp_LogoutRequest_s* x)
{
  struct zx_sa_NameID_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->NameID; y; ++n, y = (struct zx_sa_NameID_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_sp_LogoutRequest_GET_NameID) */

struct zx_sa_NameID_s* zx_sp_LogoutRequest_GET_NameID(struct zx_sp_LogoutRequest_s* x, int n)
{
  struct zx_sa_NameID_s* y;
  if (!x) return 0;
  for (y = x->NameID; n>=0 && y; --n, y = (struct zx_sa_NameID_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_sp_LogoutRequest_POP_NameID) */

struct zx_sa_NameID_s* zx_sp_LogoutRequest_POP_NameID(struct zx_sp_LogoutRequest_s* x)
{
  struct zx_sa_NameID_s* y;
  if (!x) return 0;
  y = x->NameID;
  if (y)
    x->NameID = (struct zx_sa_NameID_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_sp_LogoutRequest_PUSH_NameID) */

void zx_sp_LogoutRequest_PUSH_NameID(struct zx_sp_LogoutRequest_s* x, struct zx_sa_NameID_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->NameID->gg.g;
  x->NameID = z;
}

/* FUNC(zx_sp_LogoutRequest_REV_NameID) */

void zx_sp_LogoutRequest_REV_NameID(struct zx_sp_LogoutRequest_s* x)
{
  struct zx_sa_NameID_s* nxt;
  struct zx_sa_NameID_s* y;
  if (!x) return;
  y = x->NameID;
  if (!y) return;
  x->NameID = 0;
  while (y) {
    nxt = (struct zx_sa_NameID_s*)y->gg.g.n;
    y->gg.g.n = &x->NameID->gg.g;
    x->NameID = y;
    y = nxt;
  }
}

/* FUNC(zx_sp_LogoutRequest_PUT_NameID) */

void zx_sp_LogoutRequest_PUT_NameID(struct zx_sp_LogoutRequest_s* x, int n, struct zx_sa_NameID_s* z)
{
  struct zx_sa_NameID_s* y;
  if (!x || !z) return;
  y = x->NameID;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->NameID = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_sa_NameID_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_sp_LogoutRequest_ADD_NameID) */

void zx_sp_LogoutRequest_ADD_NameID(struct zx_sp_LogoutRequest_s* x, int n, struct zx_sa_NameID_s* z)
{
  struct zx_sa_NameID_s* y;
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
    for (; y->gg.g.n; y = (struct zx_sa_NameID_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->NameID; n > 1 && y; --n, y = (struct zx_sa_NameID_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_sp_LogoutRequest_DEL_NameID) */

void zx_sp_LogoutRequest_DEL_NameID(struct zx_sp_LogoutRequest_s* x, int n)
{
  struct zx_sa_NameID_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->NameID = (struct zx_sa_NameID_s*)x->NameID->gg.g.n;
    return;
  case -1:
    y = (struct zx_sa_NameID_s*)x->NameID;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_sa_NameID_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->NameID; n > 1 && y->gg.g.n; --n, y = (struct zx_sa_NameID_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_sp_LogoutRequest_NUM_EncryptedID) */

int zx_sp_LogoutRequest_NUM_EncryptedID(struct zx_sp_LogoutRequest_s* x)
{
  struct zx_sa_EncryptedID_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->EncryptedID; y; ++n, y = (struct zx_sa_EncryptedID_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_sp_LogoutRequest_GET_EncryptedID) */

struct zx_sa_EncryptedID_s* zx_sp_LogoutRequest_GET_EncryptedID(struct zx_sp_LogoutRequest_s* x, int n)
{
  struct zx_sa_EncryptedID_s* y;
  if (!x) return 0;
  for (y = x->EncryptedID; n>=0 && y; --n, y = (struct zx_sa_EncryptedID_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_sp_LogoutRequest_POP_EncryptedID) */

struct zx_sa_EncryptedID_s* zx_sp_LogoutRequest_POP_EncryptedID(struct zx_sp_LogoutRequest_s* x)
{
  struct zx_sa_EncryptedID_s* y;
  if (!x) return 0;
  y = x->EncryptedID;
  if (y)
    x->EncryptedID = (struct zx_sa_EncryptedID_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_sp_LogoutRequest_PUSH_EncryptedID) */

void zx_sp_LogoutRequest_PUSH_EncryptedID(struct zx_sp_LogoutRequest_s* x, struct zx_sa_EncryptedID_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->EncryptedID->gg.g;
  x->EncryptedID = z;
}

/* FUNC(zx_sp_LogoutRequest_REV_EncryptedID) */

void zx_sp_LogoutRequest_REV_EncryptedID(struct zx_sp_LogoutRequest_s* x)
{
  struct zx_sa_EncryptedID_s* nxt;
  struct zx_sa_EncryptedID_s* y;
  if (!x) return;
  y = x->EncryptedID;
  if (!y) return;
  x->EncryptedID = 0;
  while (y) {
    nxt = (struct zx_sa_EncryptedID_s*)y->gg.g.n;
    y->gg.g.n = &x->EncryptedID->gg.g;
    x->EncryptedID = y;
    y = nxt;
  }
}

/* FUNC(zx_sp_LogoutRequest_PUT_EncryptedID) */

void zx_sp_LogoutRequest_PUT_EncryptedID(struct zx_sp_LogoutRequest_s* x, int n, struct zx_sa_EncryptedID_s* z)
{
  struct zx_sa_EncryptedID_s* y;
  if (!x || !z) return;
  y = x->EncryptedID;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->EncryptedID = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_sa_EncryptedID_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_sp_LogoutRequest_ADD_EncryptedID) */

void zx_sp_LogoutRequest_ADD_EncryptedID(struct zx_sp_LogoutRequest_s* x, int n, struct zx_sa_EncryptedID_s* z)
{
  struct zx_sa_EncryptedID_s* y;
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
    for (; y->gg.g.n; y = (struct zx_sa_EncryptedID_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->EncryptedID; n > 1 && y; --n, y = (struct zx_sa_EncryptedID_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_sp_LogoutRequest_DEL_EncryptedID) */

void zx_sp_LogoutRequest_DEL_EncryptedID(struct zx_sp_LogoutRequest_s* x, int n)
{
  struct zx_sa_EncryptedID_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->EncryptedID = (struct zx_sa_EncryptedID_s*)x->EncryptedID->gg.g.n;
    return;
  case -1:
    y = (struct zx_sa_EncryptedID_s*)x->EncryptedID;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_sa_EncryptedID_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->EncryptedID; n > 1 && y->gg.g.n; --n, y = (struct zx_sa_EncryptedID_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_sp_LogoutRequest_NUM_SessionIndex) */

int zx_sp_LogoutRequest_NUM_SessionIndex(struct zx_sp_LogoutRequest_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->SessionIndex; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_sp_LogoutRequest_GET_SessionIndex) */

struct zx_elem_s* zx_sp_LogoutRequest_GET_SessionIndex(struct zx_sp_LogoutRequest_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->SessionIndex; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_sp_LogoutRequest_POP_SessionIndex) */

struct zx_elem_s* zx_sp_LogoutRequest_POP_SessionIndex(struct zx_sp_LogoutRequest_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->SessionIndex;
  if (y)
    x->SessionIndex = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_sp_LogoutRequest_PUSH_SessionIndex) */

void zx_sp_LogoutRequest_PUSH_SessionIndex(struct zx_sp_LogoutRequest_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->SessionIndex->g;
  x->SessionIndex = z;
}

/* FUNC(zx_sp_LogoutRequest_REV_SessionIndex) */

void zx_sp_LogoutRequest_REV_SessionIndex(struct zx_sp_LogoutRequest_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->SessionIndex;
  if (!y) return;
  x->SessionIndex = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->SessionIndex->g;
    x->SessionIndex = y;
    y = nxt;
  }
}

/* FUNC(zx_sp_LogoutRequest_PUT_SessionIndex) */

void zx_sp_LogoutRequest_PUT_SessionIndex(struct zx_sp_LogoutRequest_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->SessionIndex;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->SessionIndex = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_sp_LogoutRequest_ADD_SessionIndex) */

void zx_sp_LogoutRequest_ADD_SessionIndex(struct zx_sp_LogoutRequest_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->SessionIndex->g;
    x->SessionIndex = z;
    return;
  case -1:
    y = x->SessionIndex;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->SessionIndex; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_sp_LogoutRequest_DEL_SessionIndex) */

void zx_sp_LogoutRequest_DEL_SessionIndex(struct zx_sp_LogoutRequest_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->SessionIndex = (struct zx_elem_s*)x->SessionIndex->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->SessionIndex;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->SessionIndex; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

#endif

/* FUNC(zx_sp_LogoutRequest_GET_Consent) */
struct zx_str* zx_sp_LogoutRequest_GET_Consent(struct zx_sp_LogoutRequest_s* x) { return x->Consent; }
/* FUNC(zx_sp_LogoutRequest_PUT_Consent) */
void zx_sp_LogoutRequest_PUT_Consent(struct zx_sp_LogoutRequest_s* x, struct zx_str* y) { x->Consent = y; }
/* FUNC(zx_sp_LogoutRequest_GET_Destination) */
struct zx_str* zx_sp_LogoutRequest_GET_Destination(struct zx_sp_LogoutRequest_s* x) { return x->Destination; }
/* FUNC(zx_sp_LogoutRequest_PUT_Destination) */
void zx_sp_LogoutRequest_PUT_Destination(struct zx_sp_LogoutRequest_s* x, struct zx_str* y) { x->Destination = y; }
/* FUNC(zx_sp_LogoutRequest_GET_ID) */
struct zx_str* zx_sp_LogoutRequest_GET_ID(struct zx_sp_LogoutRequest_s* x) { return x->ID; }
/* FUNC(zx_sp_LogoutRequest_PUT_ID) */
void zx_sp_LogoutRequest_PUT_ID(struct zx_sp_LogoutRequest_s* x, struct zx_str* y) { x->ID = y; }
/* FUNC(zx_sp_LogoutRequest_GET_IssueInstant) */
struct zx_str* zx_sp_LogoutRequest_GET_IssueInstant(struct zx_sp_LogoutRequest_s* x) { return x->IssueInstant; }
/* FUNC(zx_sp_LogoutRequest_PUT_IssueInstant) */
void zx_sp_LogoutRequest_PUT_IssueInstant(struct zx_sp_LogoutRequest_s* x, struct zx_str* y) { x->IssueInstant = y; }
/* FUNC(zx_sp_LogoutRequest_GET_NotOnOrAfter) */
struct zx_str* zx_sp_LogoutRequest_GET_NotOnOrAfter(struct zx_sp_LogoutRequest_s* x) { return x->NotOnOrAfter; }
/* FUNC(zx_sp_LogoutRequest_PUT_NotOnOrAfter) */
void zx_sp_LogoutRequest_PUT_NotOnOrAfter(struct zx_sp_LogoutRequest_s* x, struct zx_str* y) { x->NotOnOrAfter = y; }
/* FUNC(zx_sp_LogoutRequest_GET_Reason) */
struct zx_str* zx_sp_LogoutRequest_GET_Reason(struct zx_sp_LogoutRequest_s* x) { return x->Reason; }
/* FUNC(zx_sp_LogoutRequest_PUT_Reason) */
void zx_sp_LogoutRequest_PUT_Reason(struct zx_sp_LogoutRequest_s* x, struct zx_str* y) { x->Reason = y; }
/* FUNC(zx_sp_LogoutRequest_GET_Version) */
struct zx_str* zx_sp_LogoutRequest_GET_Version(struct zx_sp_LogoutRequest_s* x) { return x->Version; }
/* FUNC(zx_sp_LogoutRequest_PUT_Version) */
void zx_sp_LogoutRequest_PUT_Version(struct zx_sp_LogoutRequest_s* x, struct zx_str* y) { x->Version = y; }







#ifdef ZX_ENA_GETPUT

/* FUNC(zx_sp_LogoutResponse_NUM_Issuer) */

int zx_sp_LogoutResponse_NUM_Issuer(struct zx_sp_LogoutResponse_s* x)
{
  struct zx_sa_Issuer_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Issuer; y; ++n, y = (struct zx_sa_Issuer_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_sp_LogoutResponse_GET_Issuer) */

struct zx_sa_Issuer_s* zx_sp_LogoutResponse_GET_Issuer(struct zx_sp_LogoutResponse_s* x, int n)
{
  struct zx_sa_Issuer_s* y;
  if (!x) return 0;
  for (y = x->Issuer; n>=0 && y; --n, y = (struct zx_sa_Issuer_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_sp_LogoutResponse_POP_Issuer) */

struct zx_sa_Issuer_s* zx_sp_LogoutResponse_POP_Issuer(struct zx_sp_LogoutResponse_s* x)
{
  struct zx_sa_Issuer_s* y;
  if (!x) return 0;
  y = x->Issuer;
  if (y)
    x->Issuer = (struct zx_sa_Issuer_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_sp_LogoutResponse_PUSH_Issuer) */

void zx_sp_LogoutResponse_PUSH_Issuer(struct zx_sp_LogoutResponse_s* x, struct zx_sa_Issuer_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Issuer->gg.g;
  x->Issuer = z;
}

/* FUNC(zx_sp_LogoutResponse_REV_Issuer) */

void zx_sp_LogoutResponse_REV_Issuer(struct zx_sp_LogoutResponse_s* x)
{
  struct zx_sa_Issuer_s* nxt;
  struct zx_sa_Issuer_s* y;
  if (!x) return;
  y = x->Issuer;
  if (!y) return;
  x->Issuer = 0;
  while (y) {
    nxt = (struct zx_sa_Issuer_s*)y->gg.g.n;
    y->gg.g.n = &x->Issuer->gg.g;
    x->Issuer = y;
    y = nxt;
  }
}

/* FUNC(zx_sp_LogoutResponse_PUT_Issuer) */

void zx_sp_LogoutResponse_PUT_Issuer(struct zx_sp_LogoutResponse_s* x, int n, struct zx_sa_Issuer_s* z)
{
  struct zx_sa_Issuer_s* y;
  if (!x || !z) return;
  y = x->Issuer;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Issuer = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_sa_Issuer_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_sp_LogoutResponse_ADD_Issuer) */

void zx_sp_LogoutResponse_ADD_Issuer(struct zx_sp_LogoutResponse_s* x, int n, struct zx_sa_Issuer_s* z)
{
  struct zx_sa_Issuer_s* y;
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
    for (; y->gg.g.n; y = (struct zx_sa_Issuer_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Issuer; n > 1 && y; --n, y = (struct zx_sa_Issuer_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_sp_LogoutResponse_DEL_Issuer) */

void zx_sp_LogoutResponse_DEL_Issuer(struct zx_sp_LogoutResponse_s* x, int n)
{
  struct zx_sa_Issuer_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Issuer = (struct zx_sa_Issuer_s*)x->Issuer->gg.g.n;
    return;
  case -1:
    y = (struct zx_sa_Issuer_s*)x->Issuer;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_sa_Issuer_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Issuer; n > 1 && y->gg.g.n; --n, y = (struct zx_sa_Issuer_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_sp_LogoutResponse_NUM_Signature) */

int zx_sp_LogoutResponse_NUM_Signature(struct zx_sp_LogoutResponse_s* x)
{
  struct zx_ds_Signature_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Signature; y; ++n, y = (struct zx_ds_Signature_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_sp_LogoutResponse_GET_Signature) */

struct zx_ds_Signature_s* zx_sp_LogoutResponse_GET_Signature(struct zx_sp_LogoutResponse_s* x, int n)
{
  struct zx_ds_Signature_s* y;
  if (!x) return 0;
  for (y = x->Signature; n>=0 && y; --n, y = (struct zx_ds_Signature_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_sp_LogoutResponse_POP_Signature) */

struct zx_ds_Signature_s* zx_sp_LogoutResponse_POP_Signature(struct zx_sp_LogoutResponse_s* x)
{
  struct zx_ds_Signature_s* y;
  if (!x) return 0;
  y = x->Signature;
  if (y)
    x->Signature = (struct zx_ds_Signature_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_sp_LogoutResponse_PUSH_Signature) */

void zx_sp_LogoutResponse_PUSH_Signature(struct zx_sp_LogoutResponse_s* x, struct zx_ds_Signature_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Signature->gg.g;
  x->Signature = z;
}

/* FUNC(zx_sp_LogoutResponse_REV_Signature) */

void zx_sp_LogoutResponse_REV_Signature(struct zx_sp_LogoutResponse_s* x)
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

/* FUNC(zx_sp_LogoutResponse_PUT_Signature) */

void zx_sp_LogoutResponse_PUT_Signature(struct zx_sp_LogoutResponse_s* x, int n, struct zx_ds_Signature_s* z)
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

/* FUNC(zx_sp_LogoutResponse_ADD_Signature) */

void zx_sp_LogoutResponse_ADD_Signature(struct zx_sp_LogoutResponse_s* x, int n, struct zx_ds_Signature_s* z)
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

/* FUNC(zx_sp_LogoutResponse_DEL_Signature) */

void zx_sp_LogoutResponse_DEL_Signature(struct zx_sp_LogoutResponse_s* x, int n)
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

/* FUNC(zx_sp_LogoutResponse_NUM_Extensions) */

int zx_sp_LogoutResponse_NUM_Extensions(struct zx_sp_LogoutResponse_s* x)
{
  struct zx_sp_Extensions_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Extensions; y; ++n, y = (struct zx_sp_Extensions_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_sp_LogoutResponse_GET_Extensions) */

struct zx_sp_Extensions_s* zx_sp_LogoutResponse_GET_Extensions(struct zx_sp_LogoutResponse_s* x, int n)
{
  struct zx_sp_Extensions_s* y;
  if (!x) return 0;
  for (y = x->Extensions; n>=0 && y; --n, y = (struct zx_sp_Extensions_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_sp_LogoutResponse_POP_Extensions) */

struct zx_sp_Extensions_s* zx_sp_LogoutResponse_POP_Extensions(struct zx_sp_LogoutResponse_s* x)
{
  struct zx_sp_Extensions_s* y;
  if (!x) return 0;
  y = x->Extensions;
  if (y)
    x->Extensions = (struct zx_sp_Extensions_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_sp_LogoutResponse_PUSH_Extensions) */

void zx_sp_LogoutResponse_PUSH_Extensions(struct zx_sp_LogoutResponse_s* x, struct zx_sp_Extensions_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Extensions->gg.g;
  x->Extensions = z;
}

/* FUNC(zx_sp_LogoutResponse_REV_Extensions) */

void zx_sp_LogoutResponse_REV_Extensions(struct zx_sp_LogoutResponse_s* x)
{
  struct zx_sp_Extensions_s* nxt;
  struct zx_sp_Extensions_s* y;
  if (!x) return;
  y = x->Extensions;
  if (!y) return;
  x->Extensions = 0;
  while (y) {
    nxt = (struct zx_sp_Extensions_s*)y->gg.g.n;
    y->gg.g.n = &x->Extensions->gg.g;
    x->Extensions = y;
    y = nxt;
  }
}

/* FUNC(zx_sp_LogoutResponse_PUT_Extensions) */

void zx_sp_LogoutResponse_PUT_Extensions(struct zx_sp_LogoutResponse_s* x, int n, struct zx_sp_Extensions_s* z)
{
  struct zx_sp_Extensions_s* y;
  if (!x || !z) return;
  y = x->Extensions;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Extensions = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_sp_Extensions_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_sp_LogoutResponse_ADD_Extensions) */

void zx_sp_LogoutResponse_ADD_Extensions(struct zx_sp_LogoutResponse_s* x, int n, struct zx_sp_Extensions_s* z)
{
  struct zx_sp_Extensions_s* y;
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
    for (; y->gg.g.n; y = (struct zx_sp_Extensions_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Extensions; n > 1 && y; --n, y = (struct zx_sp_Extensions_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_sp_LogoutResponse_DEL_Extensions) */

void zx_sp_LogoutResponse_DEL_Extensions(struct zx_sp_LogoutResponse_s* x, int n)
{
  struct zx_sp_Extensions_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Extensions = (struct zx_sp_Extensions_s*)x->Extensions->gg.g.n;
    return;
  case -1:
    y = (struct zx_sp_Extensions_s*)x->Extensions;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_sp_Extensions_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Extensions; n > 1 && y->gg.g.n; --n, y = (struct zx_sp_Extensions_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_sp_LogoutResponse_NUM_Status) */

int zx_sp_LogoutResponse_NUM_Status(struct zx_sp_LogoutResponse_s* x)
{
  struct zx_sp_Status_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Status; y; ++n, y = (struct zx_sp_Status_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_sp_LogoutResponse_GET_Status) */

struct zx_sp_Status_s* zx_sp_LogoutResponse_GET_Status(struct zx_sp_LogoutResponse_s* x, int n)
{
  struct zx_sp_Status_s* y;
  if (!x) return 0;
  for (y = x->Status; n>=0 && y; --n, y = (struct zx_sp_Status_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_sp_LogoutResponse_POP_Status) */

struct zx_sp_Status_s* zx_sp_LogoutResponse_POP_Status(struct zx_sp_LogoutResponse_s* x)
{
  struct zx_sp_Status_s* y;
  if (!x) return 0;
  y = x->Status;
  if (y)
    x->Status = (struct zx_sp_Status_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_sp_LogoutResponse_PUSH_Status) */

void zx_sp_LogoutResponse_PUSH_Status(struct zx_sp_LogoutResponse_s* x, struct zx_sp_Status_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Status->gg.g;
  x->Status = z;
}

/* FUNC(zx_sp_LogoutResponse_REV_Status) */

void zx_sp_LogoutResponse_REV_Status(struct zx_sp_LogoutResponse_s* x)
{
  struct zx_sp_Status_s* nxt;
  struct zx_sp_Status_s* y;
  if (!x) return;
  y = x->Status;
  if (!y) return;
  x->Status = 0;
  while (y) {
    nxt = (struct zx_sp_Status_s*)y->gg.g.n;
    y->gg.g.n = &x->Status->gg.g;
    x->Status = y;
    y = nxt;
  }
}

/* FUNC(zx_sp_LogoutResponse_PUT_Status) */

void zx_sp_LogoutResponse_PUT_Status(struct zx_sp_LogoutResponse_s* x, int n, struct zx_sp_Status_s* z)
{
  struct zx_sp_Status_s* y;
  if (!x || !z) return;
  y = x->Status;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Status = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_sp_Status_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_sp_LogoutResponse_ADD_Status) */

void zx_sp_LogoutResponse_ADD_Status(struct zx_sp_LogoutResponse_s* x, int n, struct zx_sp_Status_s* z)
{
  struct zx_sp_Status_s* y;
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
    for (; y->gg.g.n; y = (struct zx_sp_Status_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Status; n > 1 && y; --n, y = (struct zx_sp_Status_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_sp_LogoutResponse_DEL_Status) */

void zx_sp_LogoutResponse_DEL_Status(struct zx_sp_LogoutResponse_s* x, int n)
{
  struct zx_sp_Status_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Status = (struct zx_sp_Status_s*)x->Status->gg.g.n;
    return;
  case -1:
    y = (struct zx_sp_Status_s*)x->Status;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_sp_Status_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Status; n > 1 && y->gg.g.n; --n, y = (struct zx_sp_Status_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif

/* FUNC(zx_sp_LogoutResponse_GET_Consent) */
struct zx_str* zx_sp_LogoutResponse_GET_Consent(struct zx_sp_LogoutResponse_s* x) { return x->Consent; }
/* FUNC(zx_sp_LogoutResponse_PUT_Consent) */
void zx_sp_LogoutResponse_PUT_Consent(struct zx_sp_LogoutResponse_s* x, struct zx_str* y) { x->Consent = y; }
/* FUNC(zx_sp_LogoutResponse_GET_Destination) */
struct zx_str* zx_sp_LogoutResponse_GET_Destination(struct zx_sp_LogoutResponse_s* x) { return x->Destination; }
/* FUNC(zx_sp_LogoutResponse_PUT_Destination) */
void zx_sp_LogoutResponse_PUT_Destination(struct zx_sp_LogoutResponse_s* x, struct zx_str* y) { x->Destination = y; }
/* FUNC(zx_sp_LogoutResponse_GET_ID) */
struct zx_str* zx_sp_LogoutResponse_GET_ID(struct zx_sp_LogoutResponse_s* x) { return x->ID; }
/* FUNC(zx_sp_LogoutResponse_PUT_ID) */
void zx_sp_LogoutResponse_PUT_ID(struct zx_sp_LogoutResponse_s* x, struct zx_str* y) { x->ID = y; }
/* FUNC(zx_sp_LogoutResponse_GET_InResponseTo) */
struct zx_str* zx_sp_LogoutResponse_GET_InResponseTo(struct zx_sp_LogoutResponse_s* x) { return x->InResponseTo; }
/* FUNC(zx_sp_LogoutResponse_PUT_InResponseTo) */
void zx_sp_LogoutResponse_PUT_InResponseTo(struct zx_sp_LogoutResponse_s* x, struct zx_str* y) { x->InResponseTo = y; }
/* FUNC(zx_sp_LogoutResponse_GET_IssueInstant) */
struct zx_str* zx_sp_LogoutResponse_GET_IssueInstant(struct zx_sp_LogoutResponse_s* x) { return x->IssueInstant; }
/* FUNC(zx_sp_LogoutResponse_PUT_IssueInstant) */
void zx_sp_LogoutResponse_PUT_IssueInstant(struct zx_sp_LogoutResponse_s* x, struct zx_str* y) { x->IssueInstant = y; }
/* FUNC(zx_sp_LogoutResponse_GET_Version) */
struct zx_str* zx_sp_LogoutResponse_GET_Version(struct zx_sp_LogoutResponse_s* x) { return x->Version; }
/* FUNC(zx_sp_LogoutResponse_PUT_Version) */
void zx_sp_LogoutResponse_PUT_Version(struct zx_sp_LogoutResponse_s* x, struct zx_str* y) { x->Version = y; }







#ifdef ZX_ENA_GETPUT

/* FUNC(zx_sp_ManageNameIDRequest_NUM_Issuer) */

int zx_sp_ManageNameIDRequest_NUM_Issuer(struct zx_sp_ManageNameIDRequest_s* x)
{
  struct zx_sa_Issuer_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Issuer; y; ++n, y = (struct zx_sa_Issuer_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_sp_ManageNameIDRequest_GET_Issuer) */

struct zx_sa_Issuer_s* zx_sp_ManageNameIDRequest_GET_Issuer(struct zx_sp_ManageNameIDRequest_s* x, int n)
{
  struct zx_sa_Issuer_s* y;
  if (!x) return 0;
  for (y = x->Issuer; n>=0 && y; --n, y = (struct zx_sa_Issuer_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_sp_ManageNameIDRequest_POP_Issuer) */

struct zx_sa_Issuer_s* zx_sp_ManageNameIDRequest_POP_Issuer(struct zx_sp_ManageNameIDRequest_s* x)
{
  struct zx_sa_Issuer_s* y;
  if (!x) return 0;
  y = x->Issuer;
  if (y)
    x->Issuer = (struct zx_sa_Issuer_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_sp_ManageNameIDRequest_PUSH_Issuer) */

void zx_sp_ManageNameIDRequest_PUSH_Issuer(struct zx_sp_ManageNameIDRequest_s* x, struct zx_sa_Issuer_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Issuer->gg.g;
  x->Issuer = z;
}

/* FUNC(zx_sp_ManageNameIDRequest_REV_Issuer) */

void zx_sp_ManageNameIDRequest_REV_Issuer(struct zx_sp_ManageNameIDRequest_s* x)
{
  struct zx_sa_Issuer_s* nxt;
  struct zx_sa_Issuer_s* y;
  if (!x) return;
  y = x->Issuer;
  if (!y) return;
  x->Issuer = 0;
  while (y) {
    nxt = (struct zx_sa_Issuer_s*)y->gg.g.n;
    y->gg.g.n = &x->Issuer->gg.g;
    x->Issuer = y;
    y = nxt;
  }
}

/* FUNC(zx_sp_ManageNameIDRequest_PUT_Issuer) */

void zx_sp_ManageNameIDRequest_PUT_Issuer(struct zx_sp_ManageNameIDRequest_s* x, int n, struct zx_sa_Issuer_s* z)
{
  struct zx_sa_Issuer_s* y;
  if (!x || !z) return;
  y = x->Issuer;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Issuer = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_sa_Issuer_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_sp_ManageNameIDRequest_ADD_Issuer) */

void zx_sp_ManageNameIDRequest_ADD_Issuer(struct zx_sp_ManageNameIDRequest_s* x, int n, struct zx_sa_Issuer_s* z)
{
  struct zx_sa_Issuer_s* y;
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
    for (; y->gg.g.n; y = (struct zx_sa_Issuer_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Issuer; n > 1 && y; --n, y = (struct zx_sa_Issuer_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_sp_ManageNameIDRequest_DEL_Issuer) */

void zx_sp_ManageNameIDRequest_DEL_Issuer(struct zx_sp_ManageNameIDRequest_s* x, int n)
{
  struct zx_sa_Issuer_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Issuer = (struct zx_sa_Issuer_s*)x->Issuer->gg.g.n;
    return;
  case -1:
    y = (struct zx_sa_Issuer_s*)x->Issuer;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_sa_Issuer_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Issuer; n > 1 && y->gg.g.n; --n, y = (struct zx_sa_Issuer_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_sp_ManageNameIDRequest_NUM_Signature) */

int zx_sp_ManageNameIDRequest_NUM_Signature(struct zx_sp_ManageNameIDRequest_s* x)
{
  struct zx_ds_Signature_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Signature; y; ++n, y = (struct zx_ds_Signature_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_sp_ManageNameIDRequest_GET_Signature) */

struct zx_ds_Signature_s* zx_sp_ManageNameIDRequest_GET_Signature(struct zx_sp_ManageNameIDRequest_s* x, int n)
{
  struct zx_ds_Signature_s* y;
  if (!x) return 0;
  for (y = x->Signature; n>=0 && y; --n, y = (struct zx_ds_Signature_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_sp_ManageNameIDRequest_POP_Signature) */

struct zx_ds_Signature_s* zx_sp_ManageNameIDRequest_POP_Signature(struct zx_sp_ManageNameIDRequest_s* x)
{
  struct zx_ds_Signature_s* y;
  if (!x) return 0;
  y = x->Signature;
  if (y)
    x->Signature = (struct zx_ds_Signature_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_sp_ManageNameIDRequest_PUSH_Signature) */

void zx_sp_ManageNameIDRequest_PUSH_Signature(struct zx_sp_ManageNameIDRequest_s* x, struct zx_ds_Signature_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Signature->gg.g;
  x->Signature = z;
}

/* FUNC(zx_sp_ManageNameIDRequest_REV_Signature) */

void zx_sp_ManageNameIDRequest_REV_Signature(struct zx_sp_ManageNameIDRequest_s* x)
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

/* FUNC(zx_sp_ManageNameIDRequest_PUT_Signature) */

void zx_sp_ManageNameIDRequest_PUT_Signature(struct zx_sp_ManageNameIDRequest_s* x, int n, struct zx_ds_Signature_s* z)
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

/* FUNC(zx_sp_ManageNameIDRequest_ADD_Signature) */

void zx_sp_ManageNameIDRequest_ADD_Signature(struct zx_sp_ManageNameIDRequest_s* x, int n, struct zx_ds_Signature_s* z)
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

/* FUNC(zx_sp_ManageNameIDRequest_DEL_Signature) */

void zx_sp_ManageNameIDRequest_DEL_Signature(struct zx_sp_ManageNameIDRequest_s* x, int n)
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

/* FUNC(zx_sp_ManageNameIDRequest_NUM_Extensions) */

int zx_sp_ManageNameIDRequest_NUM_Extensions(struct zx_sp_ManageNameIDRequest_s* x)
{
  struct zx_sp_Extensions_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Extensions; y; ++n, y = (struct zx_sp_Extensions_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_sp_ManageNameIDRequest_GET_Extensions) */

struct zx_sp_Extensions_s* zx_sp_ManageNameIDRequest_GET_Extensions(struct zx_sp_ManageNameIDRequest_s* x, int n)
{
  struct zx_sp_Extensions_s* y;
  if (!x) return 0;
  for (y = x->Extensions; n>=0 && y; --n, y = (struct zx_sp_Extensions_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_sp_ManageNameIDRequest_POP_Extensions) */

struct zx_sp_Extensions_s* zx_sp_ManageNameIDRequest_POP_Extensions(struct zx_sp_ManageNameIDRequest_s* x)
{
  struct zx_sp_Extensions_s* y;
  if (!x) return 0;
  y = x->Extensions;
  if (y)
    x->Extensions = (struct zx_sp_Extensions_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_sp_ManageNameIDRequest_PUSH_Extensions) */

void zx_sp_ManageNameIDRequest_PUSH_Extensions(struct zx_sp_ManageNameIDRequest_s* x, struct zx_sp_Extensions_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Extensions->gg.g;
  x->Extensions = z;
}

/* FUNC(zx_sp_ManageNameIDRequest_REV_Extensions) */

void zx_sp_ManageNameIDRequest_REV_Extensions(struct zx_sp_ManageNameIDRequest_s* x)
{
  struct zx_sp_Extensions_s* nxt;
  struct zx_sp_Extensions_s* y;
  if (!x) return;
  y = x->Extensions;
  if (!y) return;
  x->Extensions = 0;
  while (y) {
    nxt = (struct zx_sp_Extensions_s*)y->gg.g.n;
    y->gg.g.n = &x->Extensions->gg.g;
    x->Extensions = y;
    y = nxt;
  }
}

/* FUNC(zx_sp_ManageNameIDRequest_PUT_Extensions) */

void zx_sp_ManageNameIDRequest_PUT_Extensions(struct zx_sp_ManageNameIDRequest_s* x, int n, struct zx_sp_Extensions_s* z)
{
  struct zx_sp_Extensions_s* y;
  if (!x || !z) return;
  y = x->Extensions;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Extensions = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_sp_Extensions_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_sp_ManageNameIDRequest_ADD_Extensions) */

void zx_sp_ManageNameIDRequest_ADD_Extensions(struct zx_sp_ManageNameIDRequest_s* x, int n, struct zx_sp_Extensions_s* z)
{
  struct zx_sp_Extensions_s* y;
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
    for (; y->gg.g.n; y = (struct zx_sp_Extensions_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Extensions; n > 1 && y; --n, y = (struct zx_sp_Extensions_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_sp_ManageNameIDRequest_DEL_Extensions) */

void zx_sp_ManageNameIDRequest_DEL_Extensions(struct zx_sp_ManageNameIDRequest_s* x, int n)
{
  struct zx_sp_Extensions_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Extensions = (struct zx_sp_Extensions_s*)x->Extensions->gg.g.n;
    return;
  case -1:
    y = (struct zx_sp_Extensions_s*)x->Extensions;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_sp_Extensions_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Extensions; n > 1 && y->gg.g.n; --n, y = (struct zx_sp_Extensions_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_sp_ManageNameIDRequest_NUM_NameID) */

int zx_sp_ManageNameIDRequest_NUM_NameID(struct zx_sp_ManageNameIDRequest_s* x)
{
  struct zx_sa_NameID_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->NameID; y; ++n, y = (struct zx_sa_NameID_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_sp_ManageNameIDRequest_GET_NameID) */

struct zx_sa_NameID_s* zx_sp_ManageNameIDRequest_GET_NameID(struct zx_sp_ManageNameIDRequest_s* x, int n)
{
  struct zx_sa_NameID_s* y;
  if (!x) return 0;
  for (y = x->NameID; n>=0 && y; --n, y = (struct zx_sa_NameID_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_sp_ManageNameIDRequest_POP_NameID) */

struct zx_sa_NameID_s* zx_sp_ManageNameIDRequest_POP_NameID(struct zx_sp_ManageNameIDRequest_s* x)
{
  struct zx_sa_NameID_s* y;
  if (!x) return 0;
  y = x->NameID;
  if (y)
    x->NameID = (struct zx_sa_NameID_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_sp_ManageNameIDRequest_PUSH_NameID) */

void zx_sp_ManageNameIDRequest_PUSH_NameID(struct zx_sp_ManageNameIDRequest_s* x, struct zx_sa_NameID_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->NameID->gg.g;
  x->NameID = z;
}

/* FUNC(zx_sp_ManageNameIDRequest_REV_NameID) */

void zx_sp_ManageNameIDRequest_REV_NameID(struct zx_sp_ManageNameIDRequest_s* x)
{
  struct zx_sa_NameID_s* nxt;
  struct zx_sa_NameID_s* y;
  if (!x) return;
  y = x->NameID;
  if (!y) return;
  x->NameID = 0;
  while (y) {
    nxt = (struct zx_sa_NameID_s*)y->gg.g.n;
    y->gg.g.n = &x->NameID->gg.g;
    x->NameID = y;
    y = nxt;
  }
}

/* FUNC(zx_sp_ManageNameIDRequest_PUT_NameID) */

void zx_sp_ManageNameIDRequest_PUT_NameID(struct zx_sp_ManageNameIDRequest_s* x, int n, struct zx_sa_NameID_s* z)
{
  struct zx_sa_NameID_s* y;
  if (!x || !z) return;
  y = x->NameID;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->NameID = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_sa_NameID_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_sp_ManageNameIDRequest_ADD_NameID) */

void zx_sp_ManageNameIDRequest_ADD_NameID(struct zx_sp_ManageNameIDRequest_s* x, int n, struct zx_sa_NameID_s* z)
{
  struct zx_sa_NameID_s* y;
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
    for (; y->gg.g.n; y = (struct zx_sa_NameID_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->NameID; n > 1 && y; --n, y = (struct zx_sa_NameID_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_sp_ManageNameIDRequest_DEL_NameID) */

void zx_sp_ManageNameIDRequest_DEL_NameID(struct zx_sp_ManageNameIDRequest_s* x, int n)
{
  struct zx_sa_NameID_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->NameID = (struct zx_sa_NameID_s*)x->NameID->gg.g.n;
    return;
  case -1:
    y = (struct zx_sa_NameID_s*)x->NameID;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_sa_NameID_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->NameID; n > 1 && y->gg.g.n; --n, y = (struct zx_sa_NameID_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_sp_ManageNameIDRequest_NUM_EncryptedID) */

int zx_sp_ManageNameIDRequest_NUM_EncryptedID(struct zx_sp_ManageNameIDRequest_s* x)
{
  struct zx_sa_EncryptedID_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->EncryptedID; y; ++n, y = (struct zx_sa_EncryptedID_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_sp_ManageNameIDRequest_GET_EncryptedID) */

struct zx_sa_EncryptedID_s* zx_sp_ManageNameIDRequest_GET_EncryptedID(struct zx_sp_ManageNameIDRequest_s* x, int n)
{
  struct zx_sa_EncryptedID_s* y;
  if (!x) return 0;
  for (y = x->EncryptedID; n>=0 && y; --n, y = (struct zx_sa_EncryptedID_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_sp_ManageNameIDRequest_POP_EncryptedID) */

struct zx_sa_EncryptedID_s* zx_sp_ManageNameIDRequest_POP_EncryptedID(struct zx_sp_ManageNameIDRequest_s* x)
{
  struct zx_sa_EncryptedID_s* y;
  if (!x) return 0;
  y = x->EncryptedID;
  if (y)
    x->EncryptedID = (struct zx_sa_EncryptedID_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_sp_ManageNameIDRequest_PUSH_EncryptedID) */

void zx_sp_ManageNameIDRequest_PUSH_EncryptedID(struct zx_sp_ManageNameIDRequest_s* x, struct zx_sa_EncryptedID_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->EncryptedID->gg.g;
  x->EncryptedID = z;
}

/* FUNC(zx_sp_ManageNameIDRequest_REV_EncryptedID) */

void zx_sp_ManageNameIDRequest_REV_EncryptedID(struct zx_sp_ManageNameIDRequest_s* x)
{
  struct zx_sa_EncryptedID_s* nxt;
  struct zx_sa_EncryptedID_s* y;
  if (!x) return;
  y = x->EncryptedID;
  if (!y) return;
  x->EncryptedID = 0;
  while (y) {
    nxt = (struct zx_sa_EncryptedID_s*)y->gg.g.n;
    y->gg.g.n = &x->EncryptedID->gg.g;
    x->EncryptedID = y;
    y = nxt;
  }
}

/* FUNC(zx_sp_ManageNameIDRequest_PUT_EncryptedID) */

void zx_sp_ManageNameIDRequest_PUT_EncryptedID(struct zx_sp_ManageNameIDRequest_s* x, int n, struct zx_sa_EncryptedID_s* z)
{
  struct zx_sa_EncryptedID_s* y;
  if (!x || !z) return;
  y = x->EncryptedID;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->EncryptedID = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_sa_EncryptedID_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_sp_ManageNameIDRequest_ADD_EncryptedID) */

void zx_sp_ManageNameIDRequest_ADD_EncryptedID(struct zx_sp_ManageNameIDRequest_s* x, int n, struct zx_sa_EncryptedID_s* z)
{
  struct zx_sa_EncryptedID_s* y;
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
    for (; y->gg.g.n; y = (struct zx_sa_EncryptedID_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->EncryptedID; n > 1 && y; --n, y = (struct zx_sa_EncryptedID_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_sp_ManageNameIDRequest_DEL_EncryptedID) */

void zx_sp_ManageNameIDRequest_DEL_EncryptedID(struct zx_sp_ManageNameIDRequest_s* x, int n)
{
  struct zx_sa_EncryptedID_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->EncryptedID = (struct zx_sa_EncryptedID_s*)x->EncryptedID->gg.g.n;
    return;
  case -1:
    y = (struct zx_sa_EncryptedID_s*)x->EncryptedID;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_sa_EncryptedID_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->EncryptedID; n > 1 && y->gg.g.n; --n, y = (struct zx_sa_EncryptedID_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_sp_ManageNameIDRequest_NUM_NewID) */

int zx_sp_ManageNameIDRequest_NUM_NewID(struct zx_sp_ManageNameIDRequest_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->NewID; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_sp_ManageNameIDRequest_GET_NewID) */

struct zx_elem_s* zx_sp_ManageNameIDRequest_GET_NewID(struct zx_sp_ManageNameIDRequest_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->NewID; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_sp_ManageNameIDRequest_POP_NewID) */

struct zx_elem_s* zx_sp_ManageNameIDRequest_POP_NewID(struct zx_sp_ManageNameIDRequest_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->NewID;
  if (y)
    x->NewID = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_sp_ManageNameIDRequest_PUSH_NewID) */

void zx_sp_ManageNameIDRequest_PUSH_NewID(struct zx_sp_ManageNameIDRequest_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->NewID->g;
  x->NewID = z;
}

/* FUNC(zx_sp_ManageNameIDRequest_REV_NewID) */

void zx_sp_ManageNameIDRequest_REV_NewID(struct zx_sp_ManageNameIDRequest_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->NewID;
  if (!y) return;
  x->NewID = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->NewID->g;
    x->NewID = y;
    y = nxt;
  }
}

/* FUNC(zx_sp_ManageNameIDRequest_PUT_NewID) */

void zx_sp_ManageNameIDRequest_PUT_NewID(struct zx_sp_ManageNameIDRequest_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->NewID;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->NewID = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_sp_ManageNameIDRequest_ADD_NewID) */

void zx_sp_ManageNameIDRequest_ADD_NewID(struct zx_sp_ManageNameIDRequest_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->NewID->g;
    x->NewID = z;
    return;
  case -1:
    y = x->NewID;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->NewID; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_sp_ManageNameIDRequest_DEL_NewID) */

void zx_sp_ManageNameIDRequest_DEL_NewID(struct zx_sp_ManageNameIDRequest_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->NewID = (struct zx_elem_s*)x->NewID->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->NewID;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->NewID; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_sp_ManageNameIDRequest_NUM_NewEncryptedID) */

int zx_sp_ManageNameIDRequest_NUM_NewEncryptedID(struct zx_sp_ManageNameIDRequest_s* x)
{
  struct zx_sp_NewEncryptedID_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->NewEncryptedID; y; ++n, y = (struct zx_sp_NewEncryptedID_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_sp_ManageNameIDRequest_GET_NewEncryptedID) */

struct zx_sp_NewEncryptedID_s* zx_sp_ManageNameIDRequest_GET_NewEncryptedID(struct zx_sp_ManageNameIDRequest_s* x, int n)
{
  struct zx_sp_NewEncryptedID_s* y;
  if (!x) return 0;
  for (y = x->NewEncryptedID; n>=0 && y; --n, y = (struct zx_sp_NewEncryptedID_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_sp_ManageNameIDRequest_POP_NewEncryptedID) */

struct zx_sp_NewEncryptedID_s* zx_sp_ManageNameIDRequest_POP_NewEncryptedID(struct zx_sp_ManageNameIDRequest_s* x)
{
  struct zx_sp_NewEncryptedID_s* y;
  if (!x) return 0;
  y = x->NewEncryptedID;
  if (y)
    x->NewEncryptedID = (struct zx_sp_NewEncryptedID_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_sp_ManageNameIDRequest_PUSH_NewEncryptedID) */

void zx_sp_ManageNameIDRequest_PUSH_NewEncryptedID(struct zx_sp_ManageNameIDRequest_s* x, struct zx_sp_NewEncryptedID_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->NewEncryptedID->gg.g;
  x->NewEncryptedID = z;
}

/* FUNC(zx_sp_ManageNameIDRequest_REV_NewEncryptedID) */

void zx_sp_ManageNameIDRequest_REV_NewEncryptedID(struct zx_sp_ManageNameIDRequest_s* x)
{
  struct zx_sp_NewEncryptedID_s* nxt;
  struct zx_sp_NewEncryptedID_s* y;
  if (!x) return;
  y = x->NewEncryptedID;
  if (!y) return;
  x->NewEncryptedID = 0;
  while (y) {
    nxt = (struct zx_sp_NewEncryptedID_s*)y->gg.g.n;
    y->gg.g.n = &x->NewEncryptedID->gg.g;
    x->NewEncryptedID = y;
    y = nxt;
  }
}

/* FUNC(zx_sp_ManageNameIDRequest_PUT_NewEncryptedID) */

void zx_sp_ManageNameIDRequest_PUT_NewEncryptedID(struct zx_sp_ManageNameIDRequest_s* x, int n, struct zx_sp_NewEncryptedID_s* z)
{
  struct zx_sp_NewEncryptedID_s* y;
  if (!x || !z) return;
  y = x->NewEncryptedID;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->NewEncryptedID = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_sp_NewEncryptedID_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_sp_ManageNameIDRequest_ADD_NewEncryptedID) */

void zx_sp_ManageNameIDRequest_ADD_NewEncryptedID(struct zx_sp_ManageNameIDRequest_s* x, int n, struct zx_sp_NewEncryptedID_s* z)
{
  struct zx_sp_NewEncryptedID_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->NewEncryptedID->gg.g;
    x->NewEncryptedID = z;
    return;
  case -1:
    y = x->NewEncryptedID;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_sp_NewEncryptedID_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->NewEncryptedID; n > 1 && y; --n, y = (struct zx_sp_NewEncryptedID_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_sp_ManageNameIDRequest_DEL_NewEncryptedID) */

void zx_sp_ManageNameIDRequest_DEL_NewEncryptedID(struct zx_sp_ManageNameIDRequest_s* x, int n)
{
  struct zx_sp_NewEncryptedID_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->NewEncryptedID = (struct zx_sp_NewEncryptedID_s*)x->NewEncryptedID->gg.g.n;
    return;
  case -1:
    y = (struct zx_sp_NewEncryptedID_s*)x->NewEncryptedID;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_sp_NewEncryptedID_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->NewEncryptedID; n > 1 && y->gg.g.n; --n, y = (struct zx_sp_NewEncryptedID_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_sp_ManageNameIDRequest_NUM_Terminate) */

int zx_sp_ManageNameIDRequest_NUM_Terminate(struct zx_sp_ManageNameIDRequest_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Terminate; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_sp_ManageNameIDRequest_GET_Terminate) */

struct zx_elem_s* zx_sp_ManageNameIDRequest_GET_Terminate(struct zx_sp_ManageNameIDRequest_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->Terminate; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_sp_ManageNameIDRequest_POP_Terminate) */

struct zx_elem_s* zx_sp_ManageNameIDRequest_POP_Terminate(struct zx_sp_ManageNameIDRequest_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->Terminate;
  if (y)
    x->Terminate = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_sp_ManageNameIDRequest_PUSH_Terminate) */

void zx_sp_ManageNameIDRequest_PUSH_Terminate(struct zx_sp_ManageNameIDRequest_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->Terminate->g;
  x->Terminate = z;
}

/* FUNC(zx_sp_ManageNameIDRequest_REV_Terminate) */

void zx_sp_ManageNameIDRequest_REV_Terminate(struct zx_sp_ManageNameIDRequest_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->Terminate;
  if (!y) return;
  x->Terminate = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->Terminate->g;
    x->Terminate = y;
    y = nxt;
  }
}

/* FUNC(zx_sp_ManageNameIDRequest_PUT_Terminate) */

void zx_sp_ManageNameIDRequest_PUT_Terminate(struct zx_sp_ManageNameIDRequest_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->Terminate;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->Terminate = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_sp_ManageNameIDRequest_ADD_Terminate) */

void zx_sp_ManageNameIDRequest_ADD_Terminate(struct zx_sp_ManageNameIDRequest_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->Terminate->g;
    x->Terminate = z;
    return;
  case -1:
    y = x->Terminate;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->Terminate; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_sp_ManageNameIDRequest_DEL_Terminate) */

void zx_sp_ManageNameIDRequest_DEL_Terminate(struct zx_sp_ManageNameIDRequest_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Terminate = (struct zx_elem_s*)x->Terminate->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->Terminate;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->Terminate; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

#endif

/* FUNC(zx_sp_ManageNameIDRequest_GET_Consent) */
struct zx_str* zx_sp_ManageNameIDRequest_GET_Consent(struct zx_sp_ManageNameIDRequest_s* x) { return x->Consent; }
/* FUNC(zx_sp_ManageNameIDRequest_PUT_Consent) */
void zx_sp_ManageNameIDRequest_PUT_Consent(struct zx_sp_ManageNameIDRequest_s* x, struct zx_str* y) { x->Consent = y; }
/* FUNC(zx_sp_ManageNameIDRequest_GET_Destination) */
struct zx_str* zx_sp_ManageNameIDRequest_GET_Destination(struct zx_sp_ManageNameIDRequest_s* x) { return x->Destination; }
/* FUNC(zx_sp_ManageNameIDRequest_PUT_Destination) */
void zx_sp_ManageNameIDRequest_PUT_Destination(struct zx_sp_ManageNameIDRequest_s* x, struct zx_str* y) { x->Destination = y; }
/* FUNC(zx_sp_ManageNameIDRequest_GET_ID) */
struct zx_str* zx_sp_ManageNameIDRequest_GET_ID(struct zx_sp_ManageNameIDRequest_s* x) { return x->ID; }
/* FUNC(zx_sp_ManageNameIDRequest_PUT_ID) */
void zx_sp_ManageNameIDRequest_PUT_ID(struct zx_sp_ManageNameIDRequest_s* x, struct zx_str* y) { x->ID = y; }
/* FUNC(zx_sp_ManageNameIDRequest_GET_IssueInstant) */
struct zx_str* zx_sp_ManageNameIDRequest_GET_IssueInstant(struct zx_sp_ManageNameIDRequest_s* x) { return x->IssueInstant; }
/* FUNC(zx_sp_ManageNameIDRequest_PUT_IssueInstant) */
void zx_sp_ManageNameIDRequest_PUT_IssueInstant(struct zx_sp_ManageNameIDRequest_s* x, struct zx_str* y) { x->IssueInstant = y; }
/* FUNC(zx_sp_ManageNameIDRequest_GET_Version) */
struct zx_str* zx_sp_ManageNameIDRequest_GET_Version(struct zx_sp_ManageNameIDRequest_s* x) { return x->Version; }
/* FUNC(zx_sp_ManageNameIDRequest_PUT_Version) */
void zx_sp_ManageNameIDRequest_PUT_Version(struct zx_sp_ManageNameIDRequest_s* x, struct zx_str* y) { x->Version = y; }







#ifdef ZX_ENA_GETPUT

/* FUNC(zx_sp_ManageNameIDResponse_NUM_Issuer) */

int zx_sp_ManageNameIDResponse_NUM_Issuer(struct zx_sp_ManageNameIDResponse_s* x)
{
  struct zx_sa_Issuer_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Issuer; y; ++n, y = (struct zx_sa_Issuer_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_sp_ManageNameIDResponse_GET_Issuer) */

struct zx_sa_Issuer_s* zx_sp_ManageNameIDResponse_GET_Issuer(struct zx_sp_ManageNameIDResponse_s* x, int n)
{
  struct zx_sa_Issuer_s* y;
  if (!x) return 0;
  for (y = x->Issuer; n>=0 && y; --n, y = (struct zx_sa_Issuer_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_sp_ManageNameIDResponse_POP_Issuer) */

struct zx_sa_Issuer_s* zx_sp_ManageNameIDResponse_POP_Issuer(struct zx_sp_ManageNameIDResponse_s* x)
{
  struct zx_sa_Issuer_s* y;
  if (!x) return 0;
  y = x->Issuer;
  if (y)
    x->Issuer = (struct zx_sa_Issuer_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_sp_ManageNameIDResponse_PUSH_Issuer) */

void zx_sp_ManageNameIDResponse_PUSH_Issuer(struct zx_sp_ManageNameIDResponse_s* x, struct zx_sa_Issuer_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Issuer->gg.g;
  x->Issuer = z;
}

/* FUNC(zx_sp_ManageNameIDResponse_REV_Issuer) */

void zx_sp_ManageNameIDResponse_REV_Issuer(struct zx_sp_ManageNameIDResponse_s* x)
{
  struct zx_sa_Issuer_s* nxt;
  struct zx_sa_Issuer_s* y;
  if (!x) return;
  y = x->Issuer;
  if (!y) return;
  x->Issuer = 0;
  while (y) {
    nxt = (struct zx_sa_Issuer_s*)y->gg.g.n;
    y->gg.g.n = &x->Issuer->gg.g;
    x->Issuer = y;
    y = nxt;
  }
}

/* FUNC(zx_sp_ManageNameIDResponse_PUT_Issuer) */

void zx_sp_ManageNameIDResponse_PUT_Issuer(struct zx_sp_ManageNameIDResponse_s* x, int n, struct zx_sa_Issuer_s* z)
{
  struct zx_sa_Issuer_s* y;
  if (!x || !z) return;
  y = x->Issuer;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Issuer = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_sa_Issuer_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_sp_ManageNameIDResponse_ADD_Issuer) */

void zx_sp_ManageNameIDResponse_ADD_Issuer(struct zx_sp_ManageNameIDResponse_s* x, int n, struct zx_sa_Issuer_s* z)
{
  struct zx_sa_Issuer_s* y;
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
    for (; y->gg.g.n; y = (struct zx_sa_Issuer_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Issuer; n > 1 && y; --n, y = (struct zx_sa_Issuer_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_sp_ManageNameIDResponse_DEL_Issuer) */

void zx_sp_ManageNameIDResponse_DEL_Issuer(struct zx_sp_ManageNameIDResponse_s* x, int n)
{
  struct zx_sa_Issuer_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Issuer = (struct zx_sa_Issuer_s*)x->Issuer->gg.g.n;
    return;
  case -1:
    y = (struct zx_sa_Issuer_s*)x->Issuer;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_sa_Issuer_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Issuer; n > 1 && y->gg.g.n; --n, y = (struct zx_sa_Issuer_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_sp_ManageNameIDResponse_NUM_Signature) */

int zx_sp_ManageNameIDResponse_NUM_Signature(struct zx_sp_ManageNameIDResponse_s* x)
{
  struct zx_ds_Signature_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Signature; y; ++n, y = (struct zx_ds_Signature_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_sp_ManageNameIDResponse_GET_Signature) */

struct zx_ds_Signature_s* zx_sp_ManageNameIDResponse_GET_Signature(struct zx_sp_ManageNameIDResponse_s* x, int n)
{
  struct zx_ds_Signature_s* y;
  if (!x) return 0;
  for (y = x->Signature; n>=0 && y; --n, y = (struct zx_ds_Signature_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_sp_ManageNameIDResponse_POP_Signature) */

struct zx_ds_Signature_s* zx_sp_ManageNameIDResponse_POP_Signature(struct zx_sp_ManageNameIDResponse_s* x)
{
  struct zx_ds_Signature_s* y;
  if (!x) return 0;
  y = x->Signature;
  if (y)
    x->Signature = (struct zx_ds_Signature_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_sp_ManageNameIDResponse_PUSH_Signature) */

void zx_sp_ManageNameIDResponse_PUSH_Signature(struct zx_sp_ManageNameIDResponse_s* x, struct zx_ds_Signature_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Signature->gg.g;
  x->Signature = z;
}

/* FUNC(zx_sp_ManageNameIDResponse_REV_Signature) */

void zx_sp_ManageNameIDResponse_REV_Signature(struct zx_sp_ManageNameIDResponse_s* x)
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

/* FUNC(zx_sp_ManageNameIDResponse_PUT_Signature) */

void zx_sp_ManageNameIDResponse_PUT_Signature(struct zx_sp_ManageNameIDResponse_s* x, int n, struct zx_ds_Signature_s* z)
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

/* FUNC(zx_sp_ManageNameIDResponse_ADD_Signature) */

void zx_sp_ManageNameIDResponse_ADD_Signature(struct zx_sp_ManageNameIDResponse_s* x, int n, struct zx_ds_Signature_s* z)
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

/* FUNC(zx_sp_ManageNameIDResponse_DEL_Signature) */

void zx_sp_ManageNameIDResponse_DEL_Signature(struct zx_sp_ManageNameIDResponse_s* x, int n)
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

/* FUNC(zx_sp_ManageNameIDResponse_NUM_Extensions) */

int zx_sp_ManageNameIDResponse_NUM_Extensions(struct zx_sp_ManageNameIDResponse_s* x)
{
  struct zx_sp_Extensions_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Extensions; y; ++n, y = (struct zx_sp_Extensions_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_sp_ManageNameIDResponse_GET_Extensions) */

struct zx_sp_Extensions_s* zx_sp_ManageNameIDResponse_GET_Extensions(struct zx_sp_ManageNameIDResponse_s* x, int n)
{
  struct zx_sp_Extensions_s* y;
  if (!x) return 0;
  for (y = x->Extensions; n>=0 && y; --n, y = (struct zx_sp_Extensions_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_sp_ManageNameIDResponse_POP_Extensions) */

struct zx_sp_Extensions_s* zx_sp_ManageNameIDResponse_POP_Extensions(struct zx_sp_ManageNameIDResponse_s* x)
{
  struct zx_sp_Extensions_s* y;
  if (!x) return 0;
  y = x->Extensions;
  if (y)
    x->Extensions = (struct zx_sp_Extensions_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_sp_ManageNameIDResponse_PUSH_Extensions) */

void zx_sp_ManageNameIDResponse_PUSH_Extensions(struct zx_sp_ManageNameIDResponse_s* x, struct zx_sp_Extensions_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Extensions->gg.g;
  x->Extensions = z;
}

/* FUNC(zx_sp_ManageNameIDResponse_REV_Extensions) */

void zx_sp_ManageNameIDResponse_REV_Extensions(struct zx_sp_ManageNameIDResponse_s* x)
{
  struct zx_sp_Extensions_s* nxt;
  struct zx_sp_Extensions_s* y;
  if (!x) return;
  y = x->Extensions;
  if (!y) return;
  x->Extensions = 0;
  while (y) {
    nxt = (struct zx_sp_Extensions_s*)y->gg.g.n;
    y->gg.g.n = &x->Extensions->gg.g;
    x->Extensions = y;
    y = nxt;
  }
}

/* FUNC(zx_sp_ManageNameIDResponse_PUT_Extensions) */

void zx_sp_ManageNameIDResponse_PUT_Extensions(struct zx_sp_ManageNameIDResponse_s* x, int n, struct zx_sp_Extensions_s* z)
{
  struct zx_sp_Extensions_s* y;
  if (!x || !z) return;
  y = x->Extensions;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Extensions = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_sp_Extensions_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_sp_ManageNameIDResponse_ADD_Extensions) */

void zx_sp_ManageNameIDResponse_ADD_Extensions(struct zx_sp_ManageNameIDResponse_s* x, int n, struct zx_sp_Extensions_s* z)
{
  struct zx_sp_Extensions_s* y;
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
    for (; y->gg.g.n; y = (struct zx_sp_Extensions_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Extensions; n > 1 && y; --n, y = (struct zx_sp_Extensions_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_sp_ManageNameIDResponse_DEL_Extensions) */

void zx_sp_ManageNameIDResponse_DEL_Extensions(struct zx_sp_ManageNameIDResponse_s* x, int n)
{
  struct zx_sp_Extensions_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Extensions = (struct zx_sp_Extensions_s*)x->Extensions->gg.g.n;
    return;
  case -1:
    y = (struct zx_sp_Extensions_s*)x->Extensions;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_sp_Extensions_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Extensions; n > 1 && y->gg.g.n; --n, y = (struct zx_sp_Extensions_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_sp_ManageNameIDResponse_NUM_Status) */

int zx_sp_ManageNameIDResponse_NUM_Status(struct zx_sp_ManageNameIDResponse_s* x)
{
  struct zx_sp_Status_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Status; y; ++n, y = (struct zx_sp_Status_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_sp_ManageNameIDResponse_GET_Status) */

struct zx_sp_Status_s* zx_sp_ManageNameIDResponse_GET_Status(struct zx_sp_ManageNameIDResponse_s* x, int n)
{
  struct zx_sp_Status_s* y;
  if (!x) return 0;
  for (y = x->Status; n>=0 && y; --n, y = (struct zx_sp_Status_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_sp_ManageNameIDResponse_POP_Status) */

struct zx_sp_Status_s* zx_sp_ManageNameIDResponse_POP_Status(struct zx_sp_ManageNameIDResponse_s* x)
{
  struct zx_sp_Status_s* y;
  if (!x) return 0;
  y = x->Status;
  if (y)
    x->Status = (struct zx_sp_Status_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_sp_ManageNameIDResponse_PUSH_Status) */

void zx_sp_ManageNameIDResponse_PUSH_Status(struct zx_sp_ManageNameIDResponse_s* x, struct zx_sp_Status_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Status->gg.g;
  x->Status = z;
}

/* FUNC(zx_sp_ManageNameIDResponse_REV_Status) */

void zx_sp_ManageNameIDResponse_REV_Status(struct zx_sp_ManageNameIDResponse_s* x)
{
  struct zx_sp_Status_s* nxt;
  struct zx_sp_Status_s* y;
  if (!x) return;
  y = x->Status;
  if (!y) return;
  x->Status = 0;
  while (y) {
    nxt = (struct zx_sp_Status_s*)y->gg.g.n;
    y->gg.g.n = &x->Status->gg.g;
    x->Status = y;
    y = nxt;
  }
}

/* FUNC(zx_sp_ManageNameIDResponse_PUT_Status) */

void zx_sp_ManageNameIDResponse_PUT_Status(struct zx_sp_ManageNameIDResponse_s* x, int n, struct zx_sp_Status_s* z)
{
  struct zx_sp_Status_s* y;
  if (!x || !z) return;
  y = x->Status;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Status = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_sp_Status_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_sp_ManageNameIDResponse_ADD_Status) */

void zx_sp_ManageNameIDResponse_ADD_Status(struct zx_sp_ManageNameIDResponse_s* x, int n, struct zx_sp_Status_s* z)
{
  struct zx_sp_Status_s* y;
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
    for (; y->gg.g.n; y = (struct zx_sp_Status_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Status; n > 1 && y; --n, y = (struct zx_sp_Status_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_sp_ManageNameIDResponse_DEL_Status) */

void zx_sp_ManageNameIDResponse_DEL_Status(struct zx_sp_ManageNameIDResponse_s* x, int n)
{
  struct zx_sp_Status_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Status = (struct zx_sp_Status_s*)x->Status->gg.g.n;
    return;
  case -1:
    y = (struct zx_sp_Status_s*)x->Status;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_sp_Status_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Status; n > 1 && y->gg.g.n; --n, y = (struct zx_sp_Status_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif

/* FUNC(zx_sp_ManageNameIDResponse_GET_Consent) */
struct zx_str* zx_sp_ManageNameIDResponse_GET_Consent(struct zx_sp_ManageNameIDResponse_s* x) { return x->Consent; }
/* FUNC(zx_sp_ManageNameIDResponse_PUT_Consent) */
void zx_sp_ManageNameIDResponse_PUT_Consent(struct zx_sp_ManageNameIDResponse_s* x, struct zx_str* y) { x->Consent = y; }
/* FUNC(zx_sp_ManageNameIDResponse_GET_Destination) */
struct zx_str* zx_sp_ManageNameIDResponse_GET_Destination(struct zx_sp_ManageNameIDResponse_s* x) { return x->Destination; }
/* FUNC(zx_sp_ManageNameIDResponse_PUT_Destination) */
void zx_sp_ManageNameIDResponse_PUT_Destination(struct zx_sp_ManageNameIDResponse_s* x, struct zx_str* y) { x->Destination = y; }
/* FUNC(zx_sp_ManageNameIDResponse_GET_ID) */
struct zx_str* zx_sp_ManageNameIDResponse_GET_ID(struct zx_sp_ManageNameIDResponse_s* x) { return x->ID; }
/* FUNC(zx_sp_ManageNameIDResponse_PUT_ID) */
void zx_sp_ManageNameIDResponse_PUT_ID(struct zx_sp_ManageNameIDResponse_s* x, struct zx_str* y) { x->ID = y; }
/* FUNC(zx_sp_ManageNameIDResponse_GET_InResponseTo) */
struct zx_str* zx_sp_ManageNameIDResponse_GET_InResponseTo(struct zx_sp_ManageNameIDResponse_s* x) { return x->InResponseTo; }
/* FUNC(zx_sp_ManageNameIDResponse_PUT_InResponseTo) */
void zx_sp_ManageNameIDResponse_PUT_InResponseTo(struct zx_sp_ManageNameIDResponse_s* x, struct zx_str* y) { x->InResponseTo = y; }
/* FUNC(zx_sp_ManageNameIDResponse_GET_IssueInstant) */
struct zx_str* zx_sp_ManageNameIDResponse_GET_IssueInstant(struct zx_sp_ManageNameIDResponse_s* x) { return x->IssueInstant; }
/* FUNC(zx_sp_ManageNameIDResponse_PUT_IssueInstant) */
void zx_sp_ManageNameIDResponse_PUT_IssueInstant(struct zx_sp_ManageNameIDResponse_s* x, struct zx_str* y) { x->IssueInstant = y; }
/* FUNC(zx_sp_ManageNameIDResponse_GET_Version) */
struct zx_str* zx_sp_ManageNameIDResponse_GET_Version(struct zx_sp_ManageNameIDResponse_s* x) { return x->Version; }
/* FUNC(zx_sp_ManageNameIDResponse_PUT_Version) */
void zx_sp_ManageNameIDResponse_PUT_Version(struct zx_sp_ManageNameIDResponse_s* x, struct zx_str* y) { x->Version = y; }







#ifdef ZX_ENA_GETPUT

/* FUNC(zx_sp_NameIDMappingRequest_NUM_Issuer) */

int zx_sp_NameIDMappingRequest_NUM_Issuer(struct zx_sp_NameIDMappingRequest_s* x)
{
  struct zx_sa_Issuer_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Issuer; y; ++n, y = (struct zx_sa_Issuer_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_sp_NameIDMappingRequest_GET_Issuer) */

struct zx_sa_Issuer_s* zx_sp_NameIDMappingRequest_GET_Issuer(struct zx_sp_NameIDMappingRequest_s* x, int n)
{
  struct zx_sa_Issuer_s* y;
  if (!x) return 0;
  for (y = x->Issuer; n>=0 && y; --n, y = (struct zx_sa_Issuer_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_sp_NameIDMappingRequest_POP_Issuer) */

struct zx_sa_Issuer_s* zx_sp_NameIDMappingRequest_POP_Issuer(struct zx_sp_NameIDMappingRequest_s* x)
{
  struct zx_sa_Issuer_s* y;
  if (!x) return 0;
  y = x->Issuer;
  if (y)
    x->Issuer = (struct zx_sa_Issuer_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_sp_NameIDMappingRequest_PUSH_Issuer) */

void zx_sp_NameIDMappingRequest_PUSH_Issuer(struct zx_sp_NameIDMappingRequest_s* x, struct zx_sa_Issuer_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Issuer->gg.g;
  x->Issuer = z;
}

/* FUNC(zx_sp_NameIDMappingRequest_REV_Issuer) */

void zx_sp_NameIDMappingRequest_REV_Issuer(struct zx_sp_NameIDMappingRequest_s* x)
{
  struct zx_sa_Issuer_s* nxt;
  struct zx_sa_Issuer_s* y;
  if (!x) return;
  y = x->Issuer;
  if (!y) return;
  x->Issuer = 0;
  while (y) {
    nxt = (struct zx_sa_Issuer_s*)y->gg.g.n;
    y->gg.g.n = &x->Issuer->gg.g;
    x->Issuer = y;
    y = nxt;
  }
}

/* FUNC(zx_sp_NameIDMappingRequest_PUT_Issuer) */

void zx_sp_NameIDMappingRequest_PUT_Issuer(struct zx_sp_NameIDMappingRequest_s* x, int n, struct zx_sa_Issuer_s* z)
{
  struct zx_sa_Issuer_s* y;
  if (!x || !z) return;
  y = x->Issuer;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Issuer = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_sa_Issuer_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_sp_NameIDMappingRequest_ADD_Issuer) */

void zx_sp_NameIDMappingRequest_ADD_Issuer(struct zx_sp_NameIDMappingRequest_s* x, int n, struct zx_sa_Issuer_s* z)
{
  struct zx_sa_Issuer_s* y;
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
    for (; y->gg.g.n; y = (struct zx_sa_Issuer_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Issuer; n > 1 && y; --n, y = (struct zx_sa_Issuer_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_sp_NameIDMappingRequest_DEL_Issuer) */

void zx_sp_NameIDMappingRequest_DEL_Issuer(struct zx_sp_NameIDMappingRequest_s* x, int n)
{
  struct zx_sa_Issuer_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Issuer = (struct zx_sa_Issuer_s*)x->Issuer->gg.g.n;
    return;
  case -1:
    y = (struct zx_sa_Issuer_s*)x->Issuer;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_sa_Issuer_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Issuer; n > 1 && y->gg.g.n; --n, y = (struct zx_sa_Issuer_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_sp_NameIDMappingRequest_NUM_Signature) */

int zx_sp_NameIDMappingRequest_NUM_Signature(struct zx_sp_NameIDMappingRequest_s* x)
{
  struct zx_ds_Signature_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Signature; y; ++n, y = (struct zx_ds_Signature_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_sp_NameIDMappingRequest_GET_Signature) */

struct zx_ds_Signature_s* zx_sp_NameIDMappingRequest_GET_Signature(struct zx_sp_NameIDMappingRequest_s* x, int n)
{
  struct zx_ds_Signature_s* y;
  if (!x) return 0;
  for (y = x->Signature; n>=0 && y; --n, y = (struct zx_ds_Signature_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_sp_NameIDMappingRequest_POP_Signature) */

struct zx_ds_Signature_s* zx_sp_NameIDMappingRequest_POP_Signature(struct zx_sp_NameIDMappingRequest_s* x)
{
  struct zx_ds_Signature_s* y;
  if (!x) return 0;
  y = x->Signature;
  if (y)
    x->Signature = (struct zx_ds_Signature_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_sp_NameIDMappingRequest_PUSH_Signature) */

void zx_sp_NameIDMappingRequest_PUSH_Signature(struct zx_sp_NameIDMappingRequest_s* x, struct zx_ds_Signature_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Signature->gg.g;
  x->Signature = z;
}

/* FUNC(zx_sp_NameIDMappingRequest_REV_Signature) */

void zx_sp_NameIDMappingRequest_REV_Signature(struct zx_sp_NameIDMappingRequest_s* x)
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

/* FUNC(zx_sp_NameIDMappingRequest_PUT_Signature) */

void zx_sp_NameIDMappingRequest_PUT_Signature(struct zx_sp_NameIDMappingRequest_s* x, int n, struct zx_ds_Signature_s* z)
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

/* FUNC(zx_sp_NameIDMappingRequest_ADD_Signature) */

void zx_sp_NameIDMappingRequest_ADD_Signature(struct zx_sp_NameIDMappingRequest_s* x, int n, struct zx_ds_Signature_s* z)
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

/* FUNC(zx_sp_NameIDMappingRequest_DEL_Signature) */

void zx_sp_NameIDMappingRequest_DEL_Signature(struct zx_sp_NameIDMappingRequest_s* x, int n)
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

/* FUNC(zx_sp_NameIDMappingRequest_NUM_Extensions) */

int zx_sp_NameIDMappingRequest_NUM_Extensions(struct zx_sp_NameIDMappingRequest_s* x)
{
  struct zx_sp_Extensions_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Extensions; y; ++n, y = (struct zx_sp_Extensions_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_sp_NameIDMappingRequest_GET_Extensions) */

struct zx_sp_Extensions_s* zx_sp_NameIDMappingRequest_GET_Extensions(struct zx_sp_NameIDMappingRequest_s* x, int n)
{
  struct zx_sp_Extensions_s* y;
  if (!x) return 0;
  for (y = x->Extensions; n>=0 && y; --n, y = (struct zx_sp_Extensions_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_sp_NameIDMappingRequest_POP_Extensions) */

struct zx_sp_Extensions_s* zx_sp_NameIDMappingRequest_POP_Extensions(struct zx_sp_NameIDMappingRequest_s* x)
{
  struct zx_sp_Extensions_s* y;
  if (!x) return 0;
  y = x->Extensions;
  if (y)
    x->Extensions = (struct zx_sp_Extensions_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_sp_NameIDMappingRequest_PUSH_Extensions) */

void zx_sp_NameIDMappingRequest_PUSH_Extensions(struct zx_sp_NameIDMappingRequest_s* x, struct zx_sp_Extensions_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Extensions->gg.g;
  x->Extensions = z;
}

/* FUNC(zx_sp_NameIDMappingRequest_REV_Extensions) */

void zx_sp_NameIDMappingRequest_REV_Extensions(struct zx_sp_NameIDMappingRequest_s* x)
{
  struct zx_sp_Extensions_s* nxt;
  struct zx_sp_Extensions_s* y;
  if (!x) return;
  y = x->Extensions;
  if (!y) return;
  x->Extensions = 0;
  while (y) {
    nxt = (struct zx_sp_Extensions_s*)y->gg.g.n;
    y->gg.g.n = &x->Extensions->gg.g;
    x->Extensions = y;
    y = nxt;
  }
}

/* FUNC(zx_sp_NameIDMappingRequest_PUT_Extensions) */

void zx_sp_NameIDMappingRequest_PUT_Extensions(struct zx_sp_NameIDMappingRequest_s* x, int n, struct zx_sp_Extensions_s* z)
{
  struct zx_sp_Extensions_s* y;
  if (!x || !z) return;
  y = x->Extensions;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Extensions = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_sp_Extensions_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_sp_NameIDMappingRequest_ADD_Extensions) */

void zx_sp_NameIDMappingRequest_ADD_Extensions(struct zx_sp_NameIDMappingRequest_s* x, int n, struct zx_sp_Extensions_s* z)
{
  struct zx_sp_Extensions_s* y;
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
    for (; y->gg.g.n; y = (struct zx_sp_Extensions_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Extensions; n > 1 && y; --n, y = (struct zx_sp_Extensions_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_sp_NameIDMappingRequest_DEL_Extensions) */

void zx_sp_NameIDMappingRequest_DEL_Extensions(struct zx_sp_NameIDMappingRequest_s* x, int n)
{
  struct zx_sp_Extensions_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Extensions = (struct zx_sp_Extensions_s*)x->Extensions->gg.g.n;
    return;
  case -1:
    y = (struct zx_sp_Extensions_s*)x->Extensions;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_sp_Extensions_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Extensions; n > 1 && y->gg.g.n; --n, y = (struct zx_sp_Extensions_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_sp_NameIDMappingRequest_NUM_BaseID) */

int zx_sp_NameIDMappingRequest_NUM_BaseID(struct zx_sp_NameIDMappingRequest_s* x)
{
  struct zx_sa_BaseID_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->BaseID; y; ++n, y = (struct zx_sa_BaseID_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_sp_NameIDMappingRequest_GET_BaseID) */

struct zx_sa_BaseID_s* zx_sp_NameIDMappingRequest_GET_BaseID(struct zx_sp_NameIDMappingRequest_s* x, int n)
{
  struct zx_sa_BaseID_s* y;
  if (!x) return 0;
  for (y = x->BaseID; n>=0 && y; --n, y = (struct zx_sa_BaseID_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_sp_NameIDMappingRequest_POP_BaseID) */

struct zx_sa_BaseID_s* zx_sp_NameIDMappingRequest_POP_BaseID(struct zx_sp_NameIDMappingRequest_s* x)
{
  struct zx_sa_BaseID_s* y;
  if (!x) return 0;
  y = x->BaseID;
  if (y)
    x->BaseID = (struct zx_sa_BaseID_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_sp_NameIDMappingRequest_PUSH_BaseID) */

void zx_sp_NameIDMappingRequest_PUSH_BaseID(struct zx_sp_NameIDMappingRequest_s* x, struct zx_sa_BaseID_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->BaseID->gg.g;
  x->BaseID = z;
}

/* FUNC(zx_sp_NameIDMappingRequest_REV_BaseID) */

void zx_sp_NameIDMappingRequest_REV_BaseID(struct zx_sp_NameIDMappingRequest_s* x)
{
  struct zx_sa_BaseID_s* nxt;
  struct zx_sa_BaseID_s* y;
  if (!x) return;
  y = x->BaseID;
  if (!y) return;
  x->BaseID = 0;
  while (y) {
    nxt = (struct zx_sa_BaseID_s*)y->gg.g.n;
    y->gg.g.n = &x->BaseID->gg.g;
    x->BaseID = y;
    y = nxt;
  }
}

/* FUNC(zx_sp_NameIDMappingRequest_PUT_BaseID) */

void zx_sp_NameIDMappingRequest_PUT_BaseID(struct zx_sp_NameIDMappingRequest_s* x, int n, struct zx_sa_BaseID_s* z)
{
  struct zx_sa_BaseID_s* y;
  if (!x || !z) return;
  y = x->BaseID;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->BaseID = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_sa_BaseID_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_sp_NameIDMappingRequest_ADD_BaseID) */

void zx_sp_NameIDMappingRequest_ADD_BaseID(struct zx_sp_NameIDMappingRequest_s* x, int n, struct zx_sa_BaseID_s* z)
{
  struct zx_sa_BaseID_s* y;
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
    for (; y->gg.g.n; y = (struct zx_sa_BaseID_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->BaseID; n > 1 && y; --n, y = (struct zx_sa_BaseID_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_sp_NameIDMappingRequest_DEL_BaseID) */

void zx_sp_NameIDMappingRequest_DEL_BaseID(struct zx_sp_NameIDMappingRequest_s* x, int n)
{
  struct zx_sa_BaseID_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->BaseID = (struct zx_sa_BaseID_s*)x->BaseID->gg.g.n;
    return;
  case -1:
    y = (struct zx_sa_BaseID_s*)x->BaseID;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_sa_BaseID_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->BaseID; n > 1 && y->gg.g.n; --n, y = (struct zx_sa_BaseID_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_sp_NameIDMappingRequest_NUM_NameID) */

int zx_sp_NameIDMappingRequest_NUM_NameID(struct zx_sp_NameIDMappingRequest_s* x)
{
  struct zx_sa_NameID_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->NameID; y; ++n, y = (struct zx_sa_NameID_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_sp_NameIDMappingRequest_GET_NameID) */

struct zx_sa_NameID_s* zx_sp_NameIDMappingRequest_GET_NameID(struct zx_sp_NameIDMappingRequest_s* x, int n)
{
  struct zx_sa_NameID_s* y;
  if (!x) return 0;
  for (y = x->NameID; n>=0 && y; --n, y = (struct zx_sa_NameID_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_sp_NameIDMappingRequest_POP_NameID) */

struct zx_sa_NameID_s* zx_sp_NameIDMappingRequest_POP_NameID(struct zx_sp_NameIDMappingRequest_s* x)
{
  struct zx_sa_NameID_s* y;
  if (!x) return 0;
  y = x->NameID;
  if (y)
    x->NameID = (struct zx_sa_NameID_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_sp_NameIDMappingRequest_PUSH_NameID) */

void zx_sp_NameIDMappingRequest_PUSH_NameID(struct zx_sp_NameIDMappingRequest_s* x, struct zx_sa_NameID_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->NameID->gg.g;
  x->NameID = z;
}

/* FUNC(zx_sp_NameIDMappingRequest_REV_NameID) */

void zx_sp_NameIDMappingRequest_REV_NameID(struct zx_sp_NameIDMappingRequest_s* x)
{
  struct zx_sa_NameID_s* nxt;
  struct zx_sa_NameID_s* y;
  if (!x) return;
  y = x->NameID;
  if (!y) return;
  x->NameID = 0;
  while (y) {
    nxt = (struct zx_sa_NameID_s*)y->gg.g.n;
    y->gg.g.n = &x->NameID->gg.g;
    x->NameID = y;
    y = nxt;
  }
}

/* FUNC(zx_sp_NameIDMappingRequest_PUT_NameID) */

void zx_sp_NameIDMappingRequest_PUT_NameID(struct zx_sp_NameIDMappingRequest_s* x, int n, struct zx_sa_NameID_s* z)
{
  struct zx_sa_NameID_s* y;
  if (!x || !z) return;
  y = x->NameID;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->NameID = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_sa_NameID_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_sp_NameIDMappingRequest_ADD_NameID) */

void zx_sp_NameIDMappingRequest_ADD_NameID(struct zx_sp_NameIDMappingRequest_s* x, int n, struct zx_sa_NameID_s* z)
{
  struct zx_sa_NameID_s* y;
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
    for (; y->gg.g.n; y = (struct zx_sa_NameID_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->NameID; n > 1 && y; --n, y = (struct zx_sa_NameID_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_sp_NameIDMappingRequest_DEL_NameID) */

void zx_sp_NameIDMappingRequest_DEL_NameID(struct zx_sp_NameIDMappingRequest_s* x, int n)
{
  struct zx_sa_NameID_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->NameID = (struct zx_sa_NameID_s*)x->NameID->gg.g.n;
    return;
  case -1:
    y = (struct zx_sa_NameID_s*)x->NameID;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_sa_NameID_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->NameID; n > 1 && y->gg.g.n; --n, y = (struct zx_sa_NameID_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_sp_NameIDMappingRequest_NUM_EncryptedID) */

int zx_sp_NameIDMappingRequest_NUM_EncryptedID(struct zx_sp_NameIDMappingRequest_s* x)
{
  struct zx_sa_EncryptedID_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->EncryptedID; y; ++n, y = (struct zx_sa_EncryptedID_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_sp_NameIDMappingRequest_GET_EncryptedID) */

struct zx_sa_EncryptedID_s* zx_sp_NameIDMappingRequest_GET_EncryptedID(struct zx_sp_NameIDMappingRequest_s* x, int n)
{
  struct zx_sa_EncryptedID_s* y;
  if (!x) return 0;
  for (y = x->EncryptedID; n>=0 && y; --n, y = (struct zx_sa_EncryptedID_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_sp_NameIDMappingRequest_POP_EncryptedID) */

struct zx_sa_EncryptedID_s* zx_sp_NameIDMappingRequest_POP_EncryptedID(struct zx_sp_NameIDMappingRequest_s* x)
{
  struct zx_sa_EncryptedID_s* y;
  if (!x) return 0;
  y = x->EncryptedID;
  if (y)
    x->EncryptedID = (struct zx_sa_EncryptedID_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_sp_NameIDMappingRequest_PUSH_EncryptedID) */

void zx_sp_NameIDMappingRequest_PUSH_EncryptedID(struct zx_sp_NameIDMappingRequest_s* x, struct zx_sa_EncryptedID_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->EncryptedID->gg.g;
  x->EncryptedID = z;
}

/* FUNC(zx_sp_NameIDMappingRequest_REV_EncryptedID) */

void zx_sp_NameIDMappingRequest_REV_EncryptedID(struct zx_sp_NameIDMappingRequest_s* x)
{
  struct zx_sa_EncryptedID_s* nxt;
  struct zx_sa_EncryptedID_s* y;
  if (!x) return;
  y = x->EncryptedID;
  if (!y) return;
  x->EncryptedID = 0;
  while (y) {
    nxt = (struct zx_sa_EncryptedID_s*)y->gg.g.n;
    y->gg.g.n = &x->EncryptedID->gg.g;
    x->EncryptedID = y;
    y = nxt;
  }
}

/* FUNC(zx_sp_NameIDMappingRequest_PUT_EncryptedID) */

void zx_sp_NameIDMappingRequest_PUT_EncryptedID(struct zx_sp_NameIDMappingRequest_s* x, int n, struct zx_sa_EncryptedID_s* z)
{
  struct zx_sa_EncryptedID_s* y;
  if (!x || !z) return;
  y = x->EncryptedID;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->EncryptedID = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_sa_EncryptedID_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_sp_NameIDMappingRequest_ADD_EncryptedID) */

void zx_sp_NameIDMappingRequest_ADD_EncryptedID(struct zx_sp_NameIDMappingRequest_s* x, int n, struct zx_sa_EncryptedID_s* z)
{
  struct zx_sa_EncryptedID_s* y;
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
    for (; y->gg.g.n; y = (struct zx_sa_EncryptedID_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->EncryptedID; n > 1 && y; --n, y = (struct zx_sa_EncryptedID_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_sp_NameIDMappingRequest_DEL_EncryptedID) */

void zx_sp_NameIDMappingRequest_DEL_EncryptedID(struct zx_sp_NameIDMappingRequest_s* x, int n)
{
  struct zx_sa_EncryptedID_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->EncryptedID = (struct zx_sa_EncryptedID_s*)x->EncryptedID->gg.g.n;
    return;
  case -1:
    y = (struct zx_sa_EncryptedID_s*)x->EncryptedID;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_sa_EncryptedID_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->EncryptedID; n > 1 && y->gg.g.n; --n, y = (struct zx_sa_EncryptedID_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_sp_NameIDMappingRequest_NUM_NameIDPolicy) */

int zx_sp_NameIDMappingRequest_NUM_NameIDPolicy(struct zx_sp_NameIDMappingRequest_s* x)
{
  struct zx_sp_NameIDPolicy_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->NameIDPolicy; y; ++n, y = (struct zx_sp_NameIDPolicy_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_sp_NameIDMappingRequest_GET_NameIDPolicy) */

struct zx_sp_NameIDPolicy_s* zx_sp_NameIDMappingRequest_GET_NameIDPolicy(struct zx_sp_NameIDMappingRequest_s* x, int n)
{
  struct zx_sp_NameIDPolicy_s* y;
  if (!x) return 0;
  for (y = x->NameIDPolicy; n>=0 && y; --n, y = (struct zx_sp_NameIDPolicy_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_sp_NameIDMappingRequest_POP_NameIDPolicy) */

struct zx_sp_NameIDPolicy_s* zx_sp_NameIDMappingRequest_POP_NameIDPolicy(struct zx_sp_NameIDMappingRequest_s* x)
{
  struct zx_sp_NameIDPolicy_s* y;
  if (!x) return 0;
  y = x->NameIDPolicy;
  if (y)
    x->NameIDPolicy = (struct zx_sp_NameIDPolicy_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_sp_NameIDMappingRequest_PUSH_NameIDPolicy) */

void zx_sp_NameIDMappingRequest_PUSH_NameIDPolicy(struct zx_sp_NameIDMappingRequest_s* x, struct zx_sp_NameIDPolicy_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->NameIDPolicy->gg.g;
  x->NameIDPolicy = z;
}

/* FUNC(zx_sp_NameIDMappingRequest_REV_NameIDPolicy) */

void zx_sp_NameIDMappingRequest_REV_NameIDPolicy(struct zx_sp_NameIDMappingRequest_s* x)
{
  struct zx_sp_NameIDPolicy_s* nxt;
  struct zx_sp_NameIDPolicy_s* y;
  if (!x) return;
  y = x->NameIDPolicy;
  if (!y) return;
  x->NameIDPolicy = 0;
  while (y) {
    nxt = (struct zx_sp_NameIDPolicy_s*)y->gg.g.n;
    y->gg.g.n = &x->NameIDPolicy->gg.g;
    x->NameIDPolicy = y;
    y = nxt;
  }
}

/* FUNC(zx_sp_NameIDMappingRequest_PUT_NameIDPolicy) */

void zx_sp_NameIDMappingRequest_PUT_NameIDPolicy(struct zx_sp_NameIDMappingRequest_s* x, int n, struct zx_sp_NameIDPolicy_s* z)
{
  struct zx_sp_NameIDPolicy_s* y;
  if (!x || !z) return;
  y = x->NameIDPolicy;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->NameIDPolicy = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_sp_NameIDPolicy_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_sp_NameIDMappingRequest_ADD_NameIDPolicy) */

void zx_sp_NameIDMappingRequest_ADD_NameIDPolicy(struct zx_sp_NameIDMappingRequest_s* x, int n, struct zx_sp_NameIDPolicy_s* z)
{
  struct zx_sp_NameIDPolicy_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->NameIDPolicy->gg.g;
    x->NameIDPolicy = z;
    return;
  case -1:
    y = x->NameIDPolicy;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_sp_NameIDPolicy_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->NameIDPolicy; n > 1 && y; --n, y = (struct zx_sp_NameIDPolicy_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_sp_NameIDMappingRequest_DEL_NameIDPolicy) */

void zx_sp_NameIDMappingRequest_DEL_NameIDPolicy(struct zx_sp_NameIDMappingRequest_s* x, int n)
{
  struct zx_sp_NameIDPolicy_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->NameIDPolicy = (struct zx_sp_NameIDPolicy_s*)x->NameIDPolicy->gg.g.n;
    return;
  case -1:
    y = (struct zx_sp_NameIDPolicy_s*)x->NameIDPolicy;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_sp_NameIDPolicy_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->NameIDPolicy; n > 1 && y->gg.g.n; --n, y = (struct zx_sp_NameIDPolicy_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif

/* FUNC(zx_sp_NameIDMappingRequest_GET_Consent) */
struct zx_str* zx_sp_NameIDMappingRequest_GET_Consent(struct zx_sp_NameIDMappingRequest_s* x) { return x->Consent; }
/* FUNC(zx_sp_NameIDMappingRequest_PUT_Consent) */
void zx_sp_NameIDMappingRequest_PUT_Consent(struct zx_sp_NameIDMappingRequest_s* x, struct zx_str* y) { x->Consent = y; }
/* FUNC(zx_sp_NameIDMappingRequest_GET_Destination) */
struct zx_str* zx_sp_NameIDMappingRequest_GET_Destination(struct zx_sp_NameIDMappingRequest_s* x) { return x->Destination; }
/* FUNC(zx_sp_NameIDMappingRequest_PUT_Destination) */
void zx_sp_NameIDMappingRequest_PUT_Destination(struct zx_sp_NameIDMappingRequest_s* x, struct zx_str* y) { x->Destination = y; }
/* FUNC(zx_sp_NameIDMappingRequest_GET_ID) */
struct zx_str* zx_sp_NameIDMappingRequest_GET_ID(struct zx_sp_NameIDMappingRequest_s* x) { return x->ID; }
/* FUNC(zx_sp_NameIDMappingRequest_PUT_ID) */
void zx_sp_NameIDMappingRequest_PUT_ID(struct zx_sp_NameIDMappingRequest_s* x, struct zx_str* y) { x->ID = y; }
/* FUNC(zx_sp_NameIDMappingRequest_GET_IssueInstant) */
struct zx_str* zx_sp_NameIDMappingRequest_GET_IssueInstant(struct zx_sp_NameIDMappingRequest_s* x) { return x->IssueInstant; }
/* FUNC(zx_sp_NameIDMappingRequest_PUT_IssueInstant) */
void zx_sp_NameIDMappingRequest_PUT_IssueInstant(struct zx_sp_NameIDMappingRequest_s* x, struct zx_str* y) { x->IssueInstant = y; }
/* FUNC(zx_sp_NameIDMappingRequest_GET_Version) */
struct zx_str* zx_sp_NameIDMappingRequest_GET_Version(struct zx_sp_NameIDMappingRequest_s* x) { return x->Version; }
/* FUNC(zx_sp_NameIDMappingRequest_PUT_Version) */
void zx_sp_NameIDMappingRequest_PUT_Version(struct zx_sp_NameIDMappingRequest_s* x, struct zx_str* y) { x->Version = y; }







#ifdef ZX_ENA_GETPUT

/* FUNC(zx_sp_NameIDMappingResponse_NUM_Issuer) */

int zx_sp_NameIDMappingResponse_NUM_Issuer(struct zx_sp_NameIDMappingResponse_s* x)
{
  struct zx_sa_Issuer_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Issuer; y; ++n, y = (struct zx_sa_Issuer_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_sp_NameIDMappingResponse_GET_Issuer) */

struct zx_sa_Issuer_s* zx_sp_NameIDMappingResponse_GET_Issuer(struct zx_sp_NameIDMappingResponse_s* x, int n)
{
  struct zx_sa_Issuer_s* y;
  if (!x) return 0;
  for (y = x->Issuer; n>=0 && y; --n, y = (struct zx_sa_Issuer_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_sp_NameIDMappingResponse_POP_Issuer) */

struct zx_sa_Issuer_s* zx_sp_NameIDMappingResponse_POP_Issuer(struct zx_sp_NameIDMappingResponse_s* x)
{
  struct zx_sa_Issuer_s* y;
  if (!x) return 0;
  y = x->Issuer;
  if (y)
    x->Issuer = (struct zx_sa_Issuer_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_sp_NameIDMappingResponse_PUSH_Issuer) */

void zx_sp_NameIDMappingResponse_PUSH_Issuer(struct zx_sp_NameIDMappingResponse_s* x, struct zx_sa_Issuer_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Issuer->gg.g;
  x->Issuer = z;
}

/* FUNC(zx_sp_NameIDMappingResponse_REV_Issuer) */

void zx_sp_NameIDMappingResponse_REV_Issuer(struct zx_sp_NameIDMappingResponse_s* x)
{
  struct zx_sa_Issuer_s* nxt;
  struct zx_sa_Issuer_s* y;
  if (!x) return;
  y = x->Issuer;
  if (!y) return;
  x->Issuer = 0;
  while (y) {
    nxt = (struct zx_sa_Issuer_s*)y->gg.g.n;
    y->gg.g.n = &x->Issuer->gg.g;
    x->Issuer = y;
    y = nxt;
  }
}

/* FUNC(zx_sp_NameIDMappingResponse_PUT_Issuer) */

void zx_sp_NameIDMappingResponse_PUT_Issuer(struct zx_sp_NameIDMappingResponse_s* x, int n, struct zx_sa_Issuer_s* z)
{
  struct zx_sa_Issuer_s* y;
  if (!x || !z) return;
  y = x->Issuer;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Issuer = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_sa_Issuer_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_sp_NameIDMappingResponse_ADD_Issuer) */

void zx_sp_NameIDMappingResponse_ADD_Issuer(struct zx_sp_NameIDMappingResponse_s* x, int n, struct zx_sa_Issuer_s* z)
{
  struct zx_sa_Issuer_s* y;
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
    for (; y->gg.g.n; y = (struct zx_sa_Issuer_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Issuer; n > 1 && y; --n, y = (struct zx_sa_Issuer_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_sp_NameIDMappingResponse_DEL_Issuer) */

void zx_sp_NameIDMappingResponse_DEL_Issuer(struct zx_sp_NameIDMappingResponse_s* x, int n)
{
  struct zx_sa_Issuer_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Issuer = (struct zx_sa_Issuer_s*)x->Issuer->gg.g.n;
    return;
  case -1:
    y = (struct zx_sa_Issuer_s*)x->Issuer;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_sa_Issuer_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Issuer; n > 1 && y->gg.g.n; --n, y = (struct zx_sa_Issuer_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_sp_NameIDMappingResponse_NUM_Signature) */

int zx_sp_NameIDMappingResponse_NUM_Signature(struct zx_sp_NameIDMappingResponse_s* x)
{
  struct zx_ds_Signature_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Signature; y; ++n, y = (struct zx_ds_Signature_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_sp_NameIDMappingResponse_GET_Signature) */

struct zx_ds_Signature_s* zx_sp_NameIDMappingResponse_GET_Signature(struct zx_sp_NameIDMappingResponse_s* x, int n)
{
  struct zx_ds_Signature_s* y;
  if (!x) return 0;
  for (y = x->Signature; n>=0 && y; --n, y = (struct zx_ds_Signature_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_sp_NameIDMappingResponse_POP_Signature) */

struct zx_ds_Signature_s* zx_sp_NameIDMappingResponse_POP_Signature(struct zx_sp_NameIDMappingResponse_s* x)
{
  struct zx_ds_Signature_s* y;
  if (!x) return 0;
  y = x->Signature;
  if (y)
    x->Signature = (struct zx_ds_Signature_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_sp_NameIDMappingResponse_PUSH_Signature) */

void zx_sp_NameIDMappingResponse_PUSH_Signature(struct zx_sp_NameIDMappingResponse_s* x, struct zx_ds_Signature_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Signature->gg.g;
  x->Signature = z;
}

/* FUNC(zx_sp_NameIDMappingResponse_REV_Signature) */

void zx_sp_NameIDMappingResponse_REV_Signature(struct zx_sp_NameIDMappingResponse_s* x)
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

/* FUNC(zx_sp_NameIDMappingResponse_PUT_Signature) */

void zx_sp_NameIDMappingResponse_PUT_Signature(struct zx_sp_NameIDMappingResponse_s* x, int n, struct zx_ds_Signature_s* z)
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

/* FUNC(zx_sp_NameIDMappingResponse_ADD_Signature) */

void zx_sp_NameIDMappingResponse_ADD_Signature(struct zx_sp_NameIDMappingResponse_s* x, int n, struct zx_ds_Signature_s* z)
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

/* FUNC(zx_sp_NameIDMappingResponse_DEL_Signature) */

void zx_sp_NameIDMappingResponse_DEL_Signature(struct zx_sp_NameIDMappingResponse_s* x, int n)
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

/* FUNC(zx_sp_NameIDMappingResponse_NUM_Extensions) */

int zx_sp_NameIDMappingResponse_NUM_Extensions(struct zx_sp_NameIDMappingResponse_s* x)
{
  struct zx_sp_Extensions_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Extensions; y; ++n, y = (struct zx_sp_Extensions_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_sp_NameIDMappingResponse_GET_Extensions) */

struct zx_sp_Extensions_s* zx_sp_NameIDMappingResponse_GET_Extensions(struct zx_sp_NameIDMappingResponse_s* x, int n)
{
  struct zx_sp_Extensions_s* y;
  if (!x) return 0;
  for (y = x->Extensions; n>=0 && y; --n, y = (struct zx_sp_Extensions_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_sp_NameIDMappingResponse_POP_Extensions) */

struct zx_sp_Extensions_s* zx_sp_NameIDMappingResponse_POP_Extensions(struct zx_sp_NameIDMappingResponse_s* x)
{
  struct zx_sp_Extensions_s* y;
  if (!x) return 0;
  y = x->Extensions;
  if (y)
    x->Extensions = (struct zx_sp_Extensions_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_sp_NameIDMappingResponse_PUSH_Extensions) */

void zx_sp_NameIDMappingResponse_PUSH_Extensions(struct zx_sp_NameIDMappingResponse_s* x, struct zx_sp_Extensions_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Extensions->gg.g;
  x->Extensions = z;
}

/* FUNC(zx_sp_NameIDMappingResponse_REV_Extensions) */

void zx_sp_NameIDMappingResponse_REV_Extensions(struct zx_sp_NameIDMappingResponse_s* x)
{
  struct zx_sp_Extensions_s* nxt;
  struct zx_sp_Extensions_s* y;
  if (!x) return;
  y = x->Extensions;
  if (!y) return;
  x->Extensions = 0;
  while (y) {
    nxt = (struct zx_sp_Extensions_s*)y->gg.g.n;
    y->gg.g.n = &x->Extensions->gg.g;
    x->Extensions = y;
    y = nxt;
  }
}

/* FUNC(zx_sp_NameIDMappingResponse_PUT_Extensions) */

void zx_sp_NameIDMappingResponse_PUT_Extensions(struct zx_sp_NameIDMappingResponse_s* x, int n, struct zx_sp_Extensions_s* z)
{
  struct zx_sp_Extensions_s* y;
  if (!x || !z) return;
  y = x->Extensions;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Extensions = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_sp_Extensions_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_sp_NameIDMappingResponse_ADD_Extensions) */

void zx_sp_NameIDMappingResponse_ADD_Extensions(struct zx_sp_NameIDMappingResponse_s* x, int n, struct zx_sp_Extensions_s* z)
{
  struct zx_sp_Extensions_s* y;
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
    for (; y->gg.g.n; y = (struct zx_sp_Extensions_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Extensions; n > 1 && y; --n, y = (struct zx_sp_Extensions_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_sp_NameIDMappingResponse_DEL_Extensions) */

void zx_sp_NameIDMappingResponse_DEL_Extensions(struct zx_sp_NameIDMappingResponse_s* x, int n)
{
  struct zx_sp_Extensions_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Extensions = (struct zx_sp_Extensions_s*)x->Extensions->gg.g.n;
    return;
  case -1:
    y = (struct zx_sp_Extensions_s*)x->Extensions;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_sp_Extensions_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Extensions; n > 1 && y->gg.g.n; --n, y = (struct zx_sp_Extensions_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_sp_NameIDMappingResponse_NUM_Status) */

int zx_sp_NameIDMappingResponse_NUM_Status(struct zx_sp_NameIDMappingResponse_s* x)
{
  struct zx_sp_Status_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Status; y; ++n, y = (struct zx_sp_Status_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_sp_NameIDMappingResponse_GET_Status) */

struct zx_sp_Status_s* zx_sp_NameIDMappingResponse_GET_Status(struct zx_sp_NameIDMappingResponse_s* x, int n)
{
  struct zx_sp_Status_s* y;
  if (!x) return 0;
  for (y = x->Status; n>=0 && y; --n, y = (struct zx_sp_Status_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_sp_NameIDMappingResponse_POP_Status) */

struct zx_sp_Status_s* zx_sp_NameIDMappingResponse_POP_Status(struct zx_sp_NameIDMappingResponse_s* x)
{
  struct zx_sp_Status_s* y;
  if (!x) return 0;
  y = x->Status;
  if (y)
    x->Status = (struct zx_sp_Status_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_sp_NameIDMappingResponse_PUSH_Status) */

void zx_sp_NameIDMappingResponse_PUSH_Status(struct zx_sp_NameIDMappingResponse_s* x, struct zx_sp_Status_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Status->gg.g;
  x->Status = z;
}

/* FUNC(zx_sp_NameIDMappingResponse_REV_Status) */

void zx_sp_NameIDMappingResponse_REV_Status(struct zx_sp_NameIDMappingResponse_s* x)
{
  struct zx_sp_Status_s* nxt;
  struct zx_sp_Status_s* y;
  if (!x) return;
  y = x->Status;
  if (!y) return;
  x->Status = 0;
  while (y) {
    nxt = (struct zx_sp_Status_s*)y->gg.g.n;
    y->gg.g.n = &x->Status->gg.g;
    x->Status = y;
    y = nxt;
  }
}

/* FUNC(zx_sp_NameIDMappingResponse_PUT_Status) */

void zx_sp_NameIDMappingResponse_PUT_Status(struct zx_sp_NameIDMappingResponse_s* x, int n, struct zx_sp_Status_s* z)
{
  struct zx_sp_Status_s* y;
  if (!x || !z) return;
  y = x->Status;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Status = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_sp_Status_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_sp_NameIDMappingResponse_ADD_Status) */

void zx_sp_NameIDMappingResponse_ADD_Status(struct zx_sp_NameIDMappingResponse_s* x, int n, struct zx_sp_Status_s* z)
{
  struct zx_sp_Status_s* y;
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
    for (; y->gg.g.n; y = (struct zx_sp_Status_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Status; n > 1 && y; --n, y = (struct zx_sp_Status_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_sp_NameIDMappingResponse_DEL_Status) */

void zx_sp_NameIDMappingResponse_DEL_Status(struct zx_sp_NameIDMappingResponse_s* x, int n)
{
  struct zx_sp_Status_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Status = (struct zx_sp_Status_s*)x->Status->gg.g.n;
    return;
  case -1:
    y = (struct zx_sp_Status_s*)x->Status;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_sp_Status_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Status; n > 1 && y->gg.g.n; --n, y = (struct zx_sp_Status_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_sp_NameIDMappingResponse_NUM_NameID) */

int zx_sp_NameIDMappingResponse_NUM_NameID(struct zx_sp_NameIDMappingResponse_s* x)
{
  struct zx_sa_NameID_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->NameID; y; ++n, y = (struct zx_sa_NameID_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_sp_NameIDMappingResponse_GET_NameID) */

struct zx_sa_NameID_s* zx_sp_NameIDMappingResponse_GET_NameID(struct zx_sp_NameIDMappingResponse_s* x, int n)
{
  struct zx_sa_NameID_s* y;
  if (!x) return 0;
  for (y = x->NameID; n>=0 && y; --n, y = (struct zx_sa_NameID_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_sp_NameIDMappingResponse_POP_NameID) */

struct zx_sa_NameID_s* zx_sp_NameIDMappingResponse_POP_NameID(struct zx_sp_NameIDMappingResponse_s* x)
{
  struct zx_sa_NameID_s* y;
  if (!x) return 0;
  y = x->NameID;
  if (y)
    x->NameID = (struct zx_sa_NameID_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_sp_NameIDMappingResponse_PUSH_NameID) */

void zx_sp_NameIDMappingResponse_PUSH_NameID(struct zx_sp_NameIDMappingResponse_s* x, struct zx_sa_NameID_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->NameID->gg.g;
  x->NameID = z;
}

/* FUNC(zx_sp_NameIDMappingResponse_REV_NameID) */

void zx_sp_NameIDMappingResponse_REV_NameID(struct zx_sp_NameIDMappingResponse_s* x)
{
  struct zx_sa_NameID_s* nxt;
  struct zx_sa_NameID_s* y;
  if (!x) return;
  y = x->NameID;
  if (!y) return;
  x->NameID = 0;
  while (y) {
    nxt = (struct zx_sa_NameID_s*)y->gg.g.n;
    y->gg.g.n = &x->NameID->gg.g;
    x->NameID = y;
    y = nxt;
  }
}

/* FUNC(zx_sp_NameIDMappingResponse_PUT_NameID) */

void zx_sp_NameIDMappingResponse_PUT_NameID(struct zx_sp_NameIDMappingResponse_s* x, int n, struct zx_sa_NameID_s* z)
{
  struct zx_sa_NameID_s* y;
  if (!x || !z) return;
  y = x->NameID;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->NameID = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_sa_NameID_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_sp_NameIDMappingResponse_ADD_NameID) */

void zx_sp_NameIDMappingResponse_ADD_NameID(struct zx_sp_NameIDMappingResponse_s* x, int n, struct zx_sa_NameID_s* z)
{
  struct zx_sa_NameID_s* y;
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
    for (; y->gg.g.n; y = (struct zx_sa_NameID_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->NameID; n > 1 && y; --n, y = (struct zx_sa_NameID_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_sp_NameIDMappingResponse_DEL_NameID) */

void zx_sp_NameIDMappingResponse_DEL_NameID(struct zx_sp_NameIDMappingResponse_s* x, int n)
{
  struct zx_sa_NameID_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->NameID = (struct zx_sa_NameID_s*)x->NameID->gg.g.n;
    return;
  case -1:
    y = (struct zx_sa_NameID_s*)x->NameID;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_sa_NameID_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->NameID; n > 1 && y->gg.g.n; --n, y = (struct zx_sa_NameID_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_sp_NameIDMappingResponse_NUM_EncryptedID) */

int zx_sp_NameIDMappingResponse_NUM_EncryptedID(struct zx_sp_NameIDMappingResponse_s* x)
{
  struct zx_sa_EncryptedID_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->EncryptedID; y; ++n, y = (struct zx_sa_EncryptedID_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_sp_NameIDMappingResponse_GET_EncryptedID) */

struct zx_sa_EncryptedID_s* zx_sp_NameIDMappingResponse_GET_EncryptedID(struct zx_sp_NameIDMappingResponse_s* x, int n)
{
  struct zx_sa_EncryptedID_s* y;
  if (!x) return 0;
  for (y = x->EncryptedID; n>=0 && y; --n, y = (struct zx_sa_EncryptedID_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_sp_NameIDMappingResponse_POP_EncryptedID) */

struct zx_sa_EncryptedID_s* zx_sp_NameIDMappingResponse_POP_EncryptedID(struct zx_sp_NameIDMappingResponse_s* x)
{
  struct zx_sa_EncryptedID_s* y;
  if (!x) return 0;
  y = x->EncryptedID;
  if (y)
    x->EncryptedID = (struct zx_sa_EncryptedID_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_sp_NameIDMappingResponse_PUSH_EncryptedID) */

void zx_sp_NameIDMappingResponse_PUSH_EncryptedID(struct zx_sp_NameIDMappingResponse_s* x, struct zx_sa_EncryptedID_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->EncryptedID->gg.g;
  x->EncryptedID = z;
}

/* FUNC(zx_sp_NameIDMappingResponse_REV_EncryptedID) */

void zx_sp_NameIDMappingResponse_REV_EncryptedID(struct zx_sp_NameIDMappingResponse_s* x)
{
  struct zx_sa_EncryptedID_s* nxt;
  struct zx_sa_EncryptedID_s* y;
  if (!x) return;
  y = x->EncryptedID;
  if (!y) return;
  x->EncryptedID = 0;
  while (y) {
    nxt = (struct zx_sa_EncryptedID_s*)y->gg.g.n;
    y->gg.g.n = &x->EncryptedID->gg.g;
    x->EncryptedID = y;
    y = nxt;
  }
}

/* FUNC(zx_sp_NameIDMappingResponse_PUT_EncryptedID) */

void zx_sp_NameIDMappingResponse_PUT_EncryptedID(struct zx_sp_NameIDMappingResponse_s* x, int n, struct zx_sa_EncryptedID_s* z)
{
  struct zx_sa_EncryptedID_s* y;
  if (!x || !z) return;
  y = x->EncryptedID;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->EncryptedID = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_sa_EncryptedID_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_sp_NameIDMappingResponse_ADD_EncryptedID) */

void zx_sp_NameIDMappingResponse_ADD_EncryptedID(struct zx_sp_NameIDMappingResponse_s* x, int n, struct zx_sa_EncryptedID_s* z)
{
  struct zx_sa_EncryptedID_s* y;
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
    for (; y->gg.g.n; y = (struct zx_sa_EncryptedID_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->EncryptedID; n > 1 && y; --n, y = (struct zx_sa_EncryptedID_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_sp_NameIDMappingResponse_DEL_EncryptedID) */

void zx_sp_NameIDMappingResponse_DEL_EncryptedID(struct zx_sp_NameIDMappingResponse_s* x, int n)
{
  struct zx_sa_EncryptedID_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->EncryptedID = (struct zx_sa_EncryptedID_s*)x->EncryptedID->gg.g.n;
    return;
  case -1:
    y = (struct zx_sa_EncryptedID_s*)x->EncryptedID;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_sa_EncryptedID_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->EncryptedID; n > 1 && y->gg.g.n; --n, y = (struct zx_sa_EncryptedID_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif

/* FUNC(zx_sp_NameIDMappingResponse_GET_Consent) */
struct zx_str* zx_sp_NameIDMappingResponse_GET_Consent(struct zx_sp_NameIDMappingResponse_s* x) { return x->Consent; }
/* FUNC(zx_sp_NameIDMappingResponse_PUT_Consent) */
void zx_sp_NameIDMappingResponse_PUT_Consent(struct zx_sp_NameIDMappingResponse_s* x, struct zx_str* y) { x->Consent = y; }
/* FUNC(zx_sp_NameIDMappingResponse_GET_Destination) */
struct zx_str* zx_sp_NameIDMappingResponse_GET_Destination(struct zx_sp_NameIDMappingResponse_s* x) { return x->Destination; }
/* FUNC(zx_sp_NameIDMappingResponse_PUT_Destination) */
void zx_sp_NameIDMappingResponse_PUT_Destination(struct zx_sp_NameIDMappingResponse_s* x, struct zx_str* y) { x->Destination = y; }
/* FUNC(zx_sp_NameIDMappingResponse_GET_ID) */
struct zx_str* zx_sp_NameIDMappingResponse_GET_ID(struct zx_sp_NameIDMappingResponse_s* x) { return x->ID; }
/* FUNC(zx_sp_NameIDMappingResponse_PUT_ID) */
void zx_sp_NameIDMappingResponse_PUT_ID(struct zx_sp_NameIDMappingResponse_s* x, struct zx_str* y) { x->ID = y; }
/* FUNC(zx_sp_NameIDMappingResponse_GET_InResponseTo) */
struct zx_str* zx_sp_NameIDMappingResponse_GET_InResponseTo(struct zx_sp_NameIDMappingResponse_s* x) { return x->InResponseTo; }
/* FUNC(zx_sp_NameIDMappingResponse_PUT_InResponseTo) */
void zx_sp_NameIDMappingResponse_PUT_InResponseTo(struct zx_sp_NameIDMappingResponse_s* x, struct zx_str* y) { x->InResponseTo = y; }
/* FUNC(zx_sp_NameIDMappingResponse_GET_IssueInstant) */
struct zx_str* zx_sp_NameIDMappingResponse_GET_IssueInstant(struct zx_sp_NameIDMappingResponse_s* x) { return x->IssueInstant; }
/* FUNC(zx_sp_NameIDMappingResponse_PUT_IssueInstant) */
void zx_sp_NameIDMappingResponse_PUT_IssueInstant(struct zx_sp_NameIDMappingResponse_s* x, struct zx_str* y) { x->IssueInstant = y; }
/* FUNC(zx_sp_NameIDMappingResponse_GET_Version) */
struct zx_str* zx_sp_NameIDMappingResponse_GET_Version(struct zx_sp_NameIDMappingResponse_s* x) { return x->Version; }
/* FUNC(zx_sp_NameIDMappingResponse_PUT_Version) */
void zx_sp_NameIDMappingResponse_PUT_Version(struct zx_sp_NameIDMappingResponse_s* x, struct zx_str* y) { x->Version = y; }





/* FUNC(zx_sp_NameIDPolicy_GET_AllowCreate) */
struct zx_str* zx_sp_NameIDPolicy_GET_AllowCreate(struct zx_sp_NameIDPolicy_s* x) { return x->AllowCreate; }
/* FUNC(zx_sp_NameIDPolicy_PUT_AllowCreate) */
void zx_sp_NameIDPolicy_PUT_AllowCreate(struct zx_sp_NameIDPolicy_s* x, struct zx_str* y) { x->AllowCreate = y; }
/* FUNC(zx_sp_NameIDPolicy_GET_Format) */
struct zx_str* zx_sp_NameIDPolicy_GET_Format(struct zx_sp_NameIDPolicy_s* x) { return x->Format; }
/* FUNC(zx_sp_NameIDPolicy_PUT_Format) */
void zx_sp_NameIDPolicy_PUT_Format(struct zx_sp_NameIDPolicy_s* x, struct zx_str* y) { x->Format = y; }
/* FUNC(zx_sp_NameIDPolicy_GET_SPNameQualifier) */
struct zx_str* zx_sp_NameIDPolicy_GET_SPNameQualifier(struct zx_sp_NameIDPolicy_s* x) { return x->SPNameQualifier; }
/* FUNC(zx_sp_NameIDPolicy_PUT_SPNameQualifier) */
void zx_sp_NameIDPolicy_PUT_SPNameQualifier(struct zx_sp_NameIDPolicy_s* x, struct zx_str* y) { x->SPNameQualifier = y; }







#ifdef ZX_ENA_GETPUT

/* FUNC(zx_sp_NewEncryptedID_NUM_EncryptedData) */

int zx_sp_NewEncryptedID_NUM_EncryptedData(struct zx_sp_NewEncryptedID_s* x)
{
  struct zx_xenc_EncryptedData_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->EncryptedData; y; ++n, y = (struct zx_xenc_EncryptedData_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_sp_NewEncryptedID_GET_EncryptedData) */

struct zx_xenc_EncryptedData_s* zx_sp_NewEncryptedID_GET_EncryptedData(struct zx_sp_NewEncryptedID_s* x, int n)
{
  struct zx_xenc_EncryptedData_s* y;
  if (!x) return 0;
  for (y = x->EncryptedData; n>=0 && y; --n, y = (struct zx_xenc_EncryptedData_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_sp_NewEncryptedID_POP_EncryptedData) */

struct zx_xenc_EncryptedData_s* zx_sp_NewEncryptedID_POP_EncryptedData(struct zx_sp_NewEncryptedID_s* x)
{
  struct zx_xenc_EncryptedData_s* y;
  if (!x) return 0;
  y = x->EncryptedData;
  if (y)
    x->EncryptedData = (struct zx_xenc_EncryptedData_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_sp_NewEncryptedID_PUSH_EncryptedData) */

void zx_sp_NewEncryptedID_PUSH_EncryptedData(struct zx_sp_NewEncryptedID_s* x, struct zx_xenc_EncryptedData_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->EncryptedData->gg.g;
  x->EncryptedData = z;
}

/* FUNC(zx_sp_NewEncryptedID_REV_EncryptedData) */

void zx_sp_NewEncryptedID_REV_EncryptedData(struct zx_sp_NewEncryptedID_s* x)
{
  struct zx_xenc_EncryptedData_s* nxt;
  struct zx_xenc_EncryptedData_s* y;
  if (!x) return;
  y = x->EncryptedData;
  if (!y) return;
  x->EncryptedData = 0;
  while (y) {
    nxt = (struct zx_xenc_EncryptedData_s*)y->gg.g.n;
    y->gg.g.n = &x->EncryptedData->gg.g;
    x->EncryptedData = y;
    y = nxt;
  }
}

/* FUNC(zx_sp_NewEncryptedID_PUT_EncryptedData) */

void zx_sp_NewEncryptedID_PUT_EncryptedData(struct zx_sp_NewEncryptedID_s* x, int n, struct zx_xenc_EncryptedData_s* z)
{
  struct zx_xenc_EncryptedData_s* y;
  if (!x || !z) return;
  y = x->EncryptedData;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->EncryptedData = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_xenc_EncryptedData_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_sp_NewEncryptedID_ADD_EncryptedData) */

void zx_sp_NewEncryptedID_ADD_EncryptedData(struct zx_sp_NewEncryptedID_s* x, int n, struct zx_xenc_EncryptedData_s* z)
{
  struct zx_xenc_EncryptedData_s* y;
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
    for (; y->gg.g.n; y = (struct zx_xenc_EncryptedData_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->EncryptedData; n > 1 && y; --n, y = (struct zx_xenc_EncryptedData_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_sp_NewEncryptedID_DEL_EncryptedData) */

void zx_sp_NewEncryptedID_DEL_EncryptedData(struct zx_sp_NewEncryptedID_s* x, int n)
{
  struct zx_xenc_EncryptedData_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->EncryptedData = (struct zx_xenc_EncryptedData_s*)x->EncryptedData->gg.g.n;
    return;
  case -1:
    y = (struct zx_xenc_EncryptedData_s*)x->EncryptedData;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_xenc_EncryptedData_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->EncryptedData; n > 1 && y->gg.g.n; --n, y = (struct zx_xenc_EncryptedData_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_sp_NewEncryptedID_NUM_EncryptedKey) */

int zx_sp_NewEncryptedID_NUM_EncryptedKey(struct zx_sp_NewEncryptedID_s* x)
{
  struct zx_xenc_EncryptedKey_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->EncryptedKey; y; ++n, y = (struct zx_xenc_EncryptedKey_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_sp_NewEncryptedID_GET_EncryptedKey) */

struct zx_xenc_EncryptedKey_s* zx_sp_NewEncryptedID_GET_EncryptedKey(struct zx_sp_NewEncryptedID_s* x, int n)
{
  struct zx_xenc_EncryptedKey_s* y;
  if (!x) return 0;
  for (y = x->EncryptedKey; n>=0 && y; --n, y = (struct zx_xenc_EncryptedKey_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_sp_NewEncryptedID_POP_EncryptedKey) */

struct zx_xenc_EncryptedKey_s* zx_sp_NewEncryptedID_POP_EncryptedKey(struct zx_sp_NewEncryptedID_s* x)
{
  struct zx_xenc_EncryptedKey_s* y;
  if (!x) return 0;
  y = x->EncryptedKey;
  if (y)
    x->EncryptedKey = (struct zx_xenc_EncryptedKey_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_sp_NewEncryptedID_PUSH_EncryptedKey) */

void zx_sp_NewEncryptedID_PUSH_EncryptedKey(struct zx_sp_NewEncryptedID_s* x, struct zx_xenc_EncryptedKey_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->EncryptedKey->gg.g;
  x->EncryptedKey = z;
}

/* FUNC(zx_sp_NewEncryptedID_REV_EncryptedKey) */

void zx_sp_NewEncryptedID_REV_EncryptedKey(struct zx_sp_NewEncryptedID_s* x)
{
  struct zx_xenc_EncryptedKey_s* nxt;
  struct zx_xenc_EncryptedKey_s* y;
  if (!x) return;
  y = x->EncryptedKey;
  if (!y) return;
  x->EncryptedKey = 0;
  while (y) {
    nxt = (struct zx_xenc_EncryptedKey_s*)y->gg.g.n;
    y->gg.g.n = &x->EncryptedKey->gg.g;
    x->EncryptedKey = y;
    y = nxt;
  }
}

/* FUNC(zx_sp_NewEncryptedID_PUT_EncryptedKey) */

void zx_sp_NewEncryptedID_PUT_EncryptedKey(struct zx_sp_NewEncryptedID_s* x, int n, struct zx_xenc_EncryptedKey_s* z)
{
  struct zx_xenc_EncryptedKey_s* y;
  if (!x || !z) return;
  y = x->EncryptedKey;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->EncryptedKey = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_xenc_EncryptedKey_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_sp_NewEncryptedID_ADD_EncryptedKey) */

void zx_sp_NewEncryptedID_ADD_EncryptedKey(struct zx_sp_NewEncryptedID_s* x, int n, struct zx_xenc_EncryptedKey_s* z)
{
  struct zx_xenc_EncryptedKey_s* y;
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
    for (; y->gg.g.n; y = (struct zx_xenc_EncryptedKey_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->EncryptedKey; n > 1 && y; --n, y = (struct zx_xenc_EncryptedKey_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_sp_NewEncryptedID_DEL_EncryptedKey) */

void zx_sp_NewEncryptedID_DEL_EncryptedKey(struct zx_sp_NewEncryptedID_s* x, int n)
{
  struct zx_xenc_EncryptedKey_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->EncryptedKey = (struct zx_xenc_EncryptedKey_s*)x->EncryptedKey->gg.g.n;
    return;
  case -1:
    y = (struct zx_xenc_EncryptedKey_s*)x->EncryptedKey;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_xenc_EncryptedKey_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->EncryptedKey; n > 1 && y->gg.g.n; --n, y = (struct zx_xenc_EncryptedKey_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif








#ifdef ZX_ENA_GETPUT

/* FUNC(zx_sp_RequestedAuthnContext_NUM_AuthnContextClassRef) */

int zx_sp_RequestedAuthnContext_NUM_AuthnContextClassRef(struct zx_sp_RequestedAuthnContext_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->AuthnContextClassRef; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_sp_RequestedAuthnContext_GET_AuthnContextClassRef) */

struct zx_elem_s* zx_sp_RequestedAuthnContext_GET_AuthnContextClassRef(struct zx_sp_RequestedAuthnContext_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->AuthnContextClassRef; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_sp_RequestedAuthnContext_POP_AuthnContextClassRef) */

struct zx_elem_s* zx_sp_RequestedAuthnContext_POP_AuthnContextClassRef(struct zx_sp_RequestedAuthnContext_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->AuthnContextClassRef;
  if (y)
    x->AuthnContextClassRef = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_sp_RequestedAuthnContext_PUSH_AuthnContextClassRef) */

void zx_sp_RequestedAuthnContext_PUSH_AuthnContextClassRef(struct zx_sp_RequestedAuthnContext_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->AuthnContextClassRef->g;
  x->AuthnContextClassRef = z;
}

/* FUNC(zx_sp_RequestedAuthnContext_REV_AuthnContextClassRef) */

void zx_sp_RequestedAuthnContext_REV_AuthnContextClassRef(struct zx_sp_RequestedAuthnContext_s* x)
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

/* FUNC(zx_sp_RequestedAuthnContext_PUT_AuthnContextClassRef) */

void zx_sp_RequestedAuthnContext_PUT_AuthnContextClassRef(struct zx_sp_RequestedAuthnContext_s* x, int n, struct zx_elem_s* z)
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

/* FUNC(zx_sp_RequestedAuthnContext_ADD_AuthnContextClassRef) */

void zx_sp_RequestedAuthnContext_ADD_AuthnContextClassRef(struct zx_sp_RequestedAuthnContext_s* x, int n, struct zx_elem_s* z)
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

/* FUNC(zx_sp_RequestedAuthnContext_DEL_AuthnContextClassRef) */

void zx_sp_RequestedAuthnContext_DEL_AuthnContextClassRef(struct zx_sp_RequestedAuthnContext_s* x, int n)
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

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_sp_RequestedAuthnContext_NUM_AuthnContextDeclRef) */

int zx_sp_RequestedAuthnContext_NUM_AuthnContextDeclRef(struct zx_sp_RequestedAuthnContext_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->AuthnContextDeclRef; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_sp_RequestedAuthnContext_GET_AuthnContextDeclRef) */

struct zx_elem_s* zx_sp_RequestedAuthnContext_GET_AuthnContextDeclRef(struct zx_sp_RequestedAuthnContext_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->AuthnContextDeclRef; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_sp_RequestedAuthnContext_POP_AuthnContextDeclRef) */

struct zx_elem_s* zx_sp_RequestedAuthnContext_POP_AuthnContextDeclRef(struct zx_sp_RequestedAuthnContext_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->AuthnContextDeclRef;
  if (y)
    x->AuthnContextDeclRef = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_sp_RequestedAuthnContext_PUSH_AuthnContextDeclRef) */

void zx_sp_RequestedAuthnContext_PUSH_AuthnContextDeclRef(struct zx_sp_RequestedAuthnContext_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->AuthnContextDeclRef->g;
  x->AuthnContextDeclRef = z;
}

/* FUNC(zx_sp_RequestedAuthnContext_REV_AuthnContextDeclRef) */

void zx_sp_RequestedAuthnContext_REV_AuthnContextDeclRef(struct zx_sp_RequestedAuthnContext_s* x)
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

/* FUNC(zx_sp_RequestedAuthnContext_PUT_AuthnContextDeclRef) */

void zx_sp_RequestedAuthnContext_PUT_AuthnContextDeclRef(struct zx_sp_RequestedAuthnContext_s* x, int n, struct zx_elem_s* z)
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

/* FUNC(zx_sp_RequestedAuthnContext_ADD_AuthnContextDeclRef) */

void zx_sp_RequestedAuthnContext_ADD_AuthnContextDeclRef(struct zx_sp_RequestedAuthnContext_s* x, int n, struct zx_elem_s* z)
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

/* FUNC(zx_sp_RequestedAuthnContext_DEL_AuthnContextDeclRef) */

void zx_sp_RequestedAuthnContext_DEL_AuthnContextDeclRef(struct zx_sp_RequestedAuthnContext_s* x, int n)
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

#endif

/* FUNC(zx_sp_RequestedAuthnContext_GET_Comparison) */
struct zx_str* zx_sp_RequestedAuthnContext_GET_Comparison(struct zx_sp_RequestedAuthnContext_s* x) { return x->Comparison; }
/* FUNC(zx_sp_RequestedAuthnContext_PUT_Comparison) */
void zx_sp_RequestedAuthnContext_PUT_Comparison(struct zx_sp_RequestedAuthnContext_s* x, struct zx_str* y) { x->Comparison = y; }







#ifdef ZX_ENA_GETPUT

/* FUNC(zx_sp_Response_NUM_Issuer) */

int zx_sp_Response_NUM_Issuer(struct zx_sp_Response_s* x)
{
  struct zx_sa_Issuer_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Issuer; y; ++n, y = (struct zx_sa_Issuer_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_sp_Response_GET_Issuer) */

struct zx_sa_Issuer_s* zx_sp_Response_GET_Issuer(struct zx_sp_Response_s* x, int n)
{
  struct zx_sa_Issuer_s* y;
  if (!x) return 0;
  for (y = x->Issuer; n>=0 && y; --n, y = (struct zx_sa_Issuer_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_sp_Response_POP_Issuer) */

struct zx_sa_Issuer_s* zx_sp_Response_POP_Issuer(struct zx_sp_Response_s* x)
{
  struct zx_sa_Issuer_s* y;
  if (!x) return 0;
  y = x->Issuer;
  if (y)
    x->Issuer = (struct zx_sa_Issuer_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_sp_Response_PUSH_Issuer) */

void zx_sp_Response_PUSH_Issuer(struct zx_sp_Response_s* x, struct zx_sa_Issuer_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Issuer->gg.g;
  x->Issuer = z;
}

/* FUNC(zx_sp_Response_REV_Issuer) */

void zx_sp_Response_REV_Issuer(struct zx_sp_Response_s* x)
{
  struct zx_sa_Issuer_s* nxt;
  struct zx_sa_Issuer_s* y;
  if (!x) return;
  y = x->Issuer;
  if (!y) return;
  x->Issuer = 0;
  while (y) {
    nxt = (struct zx_sa_Issuer_s*)y->gg.g.n;
    y->gg.g.n = &x->Issuer->gg.g;
    x->Issuer = y;
    y = nxt;
  }
}

/* FUNC(zx_sp_Response_PUT_Issuer) */

void zx_sp_Response_PUT_Issuer(struct zx_sp_Response_s* x, int n, struct zx_sa_Issuer_s* z)
{
  struct zx_sa_Issuer_s* y;
  if (!x || !z) return;
  y = x->Issuer;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Issuer = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_sa_Issuer_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_sp_Response_ADD_Issuer) */

void zx_sp_Response_ADD_Issuer(struct zx_sp_Response_s* x, int n, struct zx_sa_Issuer_s* z)
{
  struct zx_sa_Issuer_s* y;
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
    for (; y->gg.g.n; y = (struct zx_sa_Issuer_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Issuer; n > 1 && y; --n, y = (struct zx_sa_Issuer_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_sp_Response_DEL_Issuer) */

void zx_sp_Response_DEL_Issuer(struct zx_sp_Response_s* x, int n)
{
  struct zx_sa_Issuer_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Issuer = (struct zx_sa_Issuer_s*)x->Issuer->gg.g.n;
    return;
  case -1:
    y = (struct zx_sa_Issuer_s*)x->Issuer;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_sa_Issuer_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Issuer; n > 1 && y->gg.g.n; --n, y = (struct zx_sa_Issuer_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_sp_Response_NUM_Signature) */

int zx_sp_Response_NUM_Signature(struct zx_sp_Response_s* x)
{
  struct zx_ds_Signature_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Signature; y; ++n, y = (struct zx_ds_Signature_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_sp_Response_GET_Signature) */

struct zx_ds_Signature_s* zx_sp_Response_GET_Signature(struct zx_sp_Response_s* x, int n)
{
  struct zx_ds_Signature_s* y;
  if (!x) return 0;
  for (y = x->Signature; n>=0 && y; --n, y = (struct zx_ds_Signature_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_sp_Response_POP_Signature) */

struct zx_ds_Signature_s* zx_sp_Response_POP_Signature(struct zx_sp_Response_s* x)
{
  struct zx_ds_Signature_s* y;
  if (!x) return 0;
  y = x->Signature;
  if (y)
    x->Signature = (struct zx_ds_Signature_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_sp_Response_PUSH_Signature) */

void zx_sp_Response_PUSH_Signature(struct zx_sp_Response_s* x, struct zx_ds_Signature_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Signature->gg.g;
  x->Signature = z;
}

/* FUNC(zx_sp_Response_REV_Signature) */

void zx_sp_Response_REV_Signature(struct zx_sp_Response_s* x)
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

/* FUNC(zx_sp_Response_PUT_Signature) */

void zx_sp_Response_PUT_Signature(struct zx_sp_Response_s* x, int n, struct zx_ds_Signature_s* z)
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

/* FUNC(zx_sp_Response_ADD_Signature) */

void zx_sp_Response_ADD_Signature(struct zx_sp_Response_s* x, int n, struct zx_ds_Signature_s* z)
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

/* FUNC(zx_sp_Response_DEL_Signature) */

void zx_sp_Response_DEL_Signature(struct zx_sp_Response_s* x, int n)
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

/* FUNC(zx_sp_Response_NUM_Extensions) */

int zx_sp_Response_NUM_Extensions(struct zx_sp_Response_s* x)
{
  struct zx_sp_Extensions_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Extensions; y; ++n, y = (struct zx_sp_Extensions_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_sp_Response_GET_Extensions) */

struct zx_sp_Extensions_s* zx_sp_Response_GET_Extensions(struct zx_sp_Response_s* x, int n)
{
  struct zx_sp_Extensions_s* y;
  if (!x) return 0;
  for (y = x->Extensions; n>=0 && y; --n, y = (struct zx_sp_Extensions_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_sp_Response_POP_Extensions) */

struct zx_sp_Extensions_s* zx_sp_Response_POP_Extensions(struct zx_sp_Response_s* x)
{
  struct zx_sp_Extensions_s* y;
  if (!x) return 0;
  y = x->Extensions;
  if (y)
    x->Extensions = (struct zx_sp_Extensions_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_sp_Response_PUSH_Extensions) */

void zx_sp_Response_PUSH_Extensions(struct zx_sp_Response_s* x, struct zx_sp_Extensions_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Extensions->gg.g;
  x->Extensions = z;
}

/* FUNC(zx_sp_Response_REV_Extensions) */

void zx_sp_Response_REV_Extensions(struct zx_sp_Response_s* x)
{
  struct zx_sp_Extensions_s* nxt;
  struct zx_sp_Extensions_s* y;
  if (!x) return;
  y = x->Extensions;
  if (!y) return;
  x->Extensions = 0;
  while (y) {
    nxt = (struct zx_sp_Extensions_s*)y->gg.g.n;
    y->gg.g.n = &x->Extensions->gg.g;
    x->Extensions = y;
    y = nxt;
  }
}

/* FUNC(zx_sp_Response_PUT_Extensions) */

void zx_sp_Response_PUT_Extensions(struct zx_sp_Response_s* x, int n, struct zx_sp_Extensions_s* z)
{
  struct zx_sp_Extensions_s* y;
  if (!x || !z) return;
  y = x->Extensions;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Extensions = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_sp_Extensions_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_sp_Response_ADD_Extensions) */

void zx_sp_Response_ADD_Extensions(struct zx_sp_Response_s* x, int n, struct zx_sp_Extensions_s* z)
{
  struct zx_sp_Extensions_s* y;
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
    for (; y->gg.g.n; y = (struct zx_sp_Extensions_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Extensions; n > 1 && y; --n, y = (struct zx_sp_Extensions_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_sp_Response_DEL_Extensions) */

void zx_sp_Response_DEL_Extensions(struct zx_sp_Response_s* x, int n)
{
  struct zx_sp_Extensions_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Extensions = (struct zx_sp_Extensions_s*)x->Extensions->gg.g.n;
    return;
  case -1:
    y = (struct zx_sp_Extensions_s*)x->Extensions;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_sp_Extensions_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Extensions; n > 1 && y->gg.g.n; --n, y = (struct zx_sp_Extensions_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_sp_Response_NUM_Status) */

int zx_sp_Response_NUM_Status(struct zx_sp_Response_s* x)
{
  struct zx_sp_Status_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Status; y; ++n, y = (struct zx_sp_Status_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_sp_Response_GET_Status) */

struct zx_sp_Status_s* zx_sp_Response_GET_Status(struct zx_sp_Response_s* x, int n)
{
  struct zx_sp_Status_s* y;
  if (!x) return 0;
  for (y = x->Status; n>=0 && y; --n, y = (struct zx_sp_Status_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_sp_Response_POP_Status) */

struct zx_sp_Status_s* zx_sp_Response_POP_Status(struct zx_sp_Response_s* x)
{
  struct zx_sp_Status_s* y;
  if (!x) return 0;
  y = x->Status;
  if (y)
    x->Status = (struct zx_sp_Status_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_sp_Response_PUSH_Status) */

void zx_sp_Response_PUSH_Status(struct zx_sp_Response_s* x, struct zx_sp_Status_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Status->gg.g;
  x->Status = z;
}

/* FUNC(zx_sp_Response_REV_Status) */

void zx_sp_Response_REV_Status(struct zx_sp_Response_s* x)
{
  struct zx_sp_Status_s* nxt;
  struct zx_sp_Status_s* y;
  if (!x) return;
  y = x->Status;
  if (!y) return;
  x->Status = 0;
  while (y) {
    nxt = (struct zx_sp_Status_s*)y->gg.g.n;
    y->gg.g.n = &x->Status->gg.g;
    x->Status = y;
    y = nxt;
  }
}

/* FUNC(zx_sp_Response_PUT_Status) */

void zx_sp_Response_PUT_Status(struct zx_sp_Response_s* x, int n, struct zx_sp_Status_s* z)
{
  struct zx_sp_Status_s* y;
  if (!x || !z) return;
  y = x->Status;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Status = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_sp_Status_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_sp_Response_ADD_Status) */

void zx_sp_Response_ADD_Status(struct zx_sp_Response_s* x, int n, struct zx_sp_Status_s* z)
{
  struct zx_sp_Status_s* y;
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
    for (; y->gg.g.n; y = (struct zx_sp_Status_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Status; n > 1 && y; --n, y = (struct zx_sp_Status_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_sp_Response_DEL_Status) */

void zx_sp_Response_DEL_Status(struct zx_sp_Response_s* x, int n)
{
  struct zx_sp_Status_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Status = (struct zx_sp_Status_s*)x->Status->gg.g.n;
    return;
  case -1:
    y = (struct zx_sp_Status_s*)x->Status;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_sp_Status_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Status; n > 1 && y->gg.g.n; --n, y = (struct zx_sp_Status_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_sp_Response_NUM_Assertion) */

int zx_sp_Response_NUM_Assertion(struct zx_sp_Response_s* x)
{
  struct zx_sa_Assertion_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Assertion; y; ++n, y = (struct zx_sa_Assertion_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_sp_Response_GET_Assertion) */

struct zx_sa_Assertion_s* zx_sp_Response_GET_Assertion(struct zx_sp_Response_s* x, int n)
{
  struct zx_sa_Assertion_s* y;
  if (!x) return 0;
  for (y = x->Assertion; n>=0 && y; --n, y = (struct zx_sa_Assertion_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_sp_Response_POP_Assertion) */

struct zx_sa_Assertion_s* zx_sp_Response_POP_Assertion(struct zx_sp_Response_s* x)
{
  struct zx_sa_Assertion_s* y;
  if (!x) return 0;
  y = x->Assertion;
  if (y)
    x->Assertion = (struct zx_sa_Assertion_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_sp_Response_PUSH_Assertion) */

void zx_sp_Response_PUSH_Assertion(struct zx_sp_Response_s* x, struct zx_sa_Assertion_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Assertion->gg.g;
  x->Assertion = z;
}

/* FUNC(zx_sp_Response_REV_Assertion) */

void zx_sp_Response_REV_Assertion(struct zx_sp_Response_s* x)
{
  struct zx_sa_Assertion_s* nxt;
  struct zx_sa_Assertion_s* y;
  if (!x) return;
  y = x->Assertion;
  if (!y) return;
  x->Assertion = 0;
  while (y) {
    nxt = (struct zx_sa_Assertion_s*)y->gg.g.n;
    y->gg.g.n = &x->Assertion->gg.g;
    x->Assertion = y;
    y = nxt;
  }
}

/* FUNC(zx_sp_Response_PUT_Assertion) */

void zx_sp_Response_PUT_Assertion(struct zx_sp_Response_s* x, int n, struct zx_sa_Assertion_s* z)
{
  struct zx_sa_Assertion_s* y;
  if (!x || !z) return;
  y = x->Assertion;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Assertion = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_sa_Assertion_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_sp_Response_ADD_Assertion) */

void zx_sp_Response_ADD_Assertion(struct zx_sp_Response_s* x, int n, struct zx_sa_Assertion_s* z)
{
  struct zx_sa_Assertion_s* y;
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
    for (; y->gg.g.n; y = (struct zx_sa_Assertion_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Assertion; n > 1 && y; --n, y = (struct zx_sa_Assertion_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_sp_Response_DEL_Assertion) */

void zx_sp_Response_DEL_Assertion(struct zx_sp_Response_s* x, int n)
{
  struct zx_sa_Assertion_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Assertion = (struct zx_sa_Assertion_s*)x->Assertion->gg.g.n;
    return;
  case -1:
    y = (struct zx_sa_Assertion_s*)x->Assertion;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_sa_Assertion_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Assertion; n > 1 && y->gg.g.n; --n, y = (struct zx_sa_Assertion_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_sp_Response_NUM_EncryptedAssertion) */

int zx_sp_Response_NUM_EncryptedAssertion(struct zx_sp_Response_s* x)
{
  struct zx_sa_EncryptedAssertion_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->EncryptedAssertion; y; ++n, y = (struct zx_sa_EncryptedAssertion_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_sp_Response_GET_EncryptedAssertion) */

struct zx_sa_EncryptedAssertion_s* zx_sp_Response_GET_EncryptedAssertion(struct zx_sp_Response_s* x, int n)
{
  struct zx_sa_EncryptedAssertion_s* y;
  if (!x) return 0;
  for (y = x->EncryptedAssertion; n>=0 && y; --n, y = (struct zx_sa_EncryptedAssertion_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_sp_Response_POP_EncryptedAssertion) */

struct zx_sa_EncryptedAssertion_s* zx_sp_Response_POP_EncryptedAssertion(struct zx_sp_Response_s* x)
{
  struct zx_sa_EncryptedAssertion_s* y;
  if (!x) return 0;
  y = x->EncryptedAssertion;
  if (y)
    x->EncryptedAssertion = (struct zx_sa_EncryptedAssertion_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_sp_Response_PUSH_EncryptedAssertion) */

void zx_sp_Response_PUSH_EncryptedAssertion(struct zx_sp_Response_s* x, struct zx_sa_EncryptedAssertion_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->EncryptedAssertion->gg.g;
  x->EncryptedAssertion = z;
}

/* FUNC(zx_sp_Response_REV_EncryptedAssertion) */

void zx_sp_Response_REV_EncryptedAssertion(struct zx_sp_Response_s* x)
{
  struct zx_sa_EncryptedAssertion_s* nxt;
  struct zx_sa_EncryptedAssertion_s* y;
  if (!x) return;
  y = x->EncryptedAssertion;
  if (!y) return;
  x->EncryptedAssertion = 0;
  while (y) {
    nxt = (struct zx_sa_EncryptedAssertion_s*)y->gg.g.n;
    y->gg.g.n = &x->EncryptedAssertion->gg.g;
    x->EncryptedAssertion = y;
    y = nxt;
  }
}

/* FUNC(zx_sp_Response_PUT_EncryptedAssertion) */

void zx_sp_Response_PUT_EncryptedAssertion(struct zx_sp_Response_s* x, int n, struct zx_sa_EncryptedAssertion_s* z)
{
  struct zx_sa_EncryptedAssertion_s* y;
  if (!x || !z) return;
  y = x->EncryptedAssertion;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->EncryptedAssertion = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_sa_EncryptedAssertion_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_sp_Response_ADD_EncryptedAssertion) */

void zx_sp_Response_ADD_EncryptedAssertion(struct zx_sp_Response_s* x, int n, struct zx_sa_EncryptedAssertion_s* z)
{
  struct zx_sa_EncryptedAssertion_s* y;
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
    for (; y->gg.g.n; y = (struct zx_sa_EncryptedAssertion_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->EncryptedAssertion; n > 1 && y; --n, y = (struct zx_sa_EncryptedAssertion_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_sp_Response_DEL_EncryptedAssertion) */

void zx_sp_Response_DEL_EncryptedAssertion(struct zx_sp_Response_s* x, int n)
{
  struct zx_sa_EncryptedAssertion_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->EncryptedAssertion = (struct zx_sa_EncryptedAssertion_s*)x->EncryptedAssertion->gg.g.n;
    return;
  case -1:
    y = (struct zx_sa_EncryptedAssertion_s*)x->EncryptedAssertion;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_sa_EncryptedAssertion_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->EncryptedAssertion; n > 1 && y->gg.g.n; --n, y = (struct zx_sa_EncryptedAssertion_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif

/* FUNC(zx_sp_Response_GET_Consent) */
struct zx_str* zx_sp_Response_GET_Consent(struct zx_sp_Response_s* x) { return x->Consent; }
/* FUNC(zx_sp_Response_PUT_Consent) */
void zx_sp_Response_PUT_Consent(struct zx_sp_Response_s* x, struct zx_str* y) { x->Consent = y; }
/* FUNC(zx_sp_Response_GET_Destination) */
struct zx_str* zx_sp_Response_GET_Destination(struct zx_sp_Response_s* x) { return x->Destination; }
/* FUNC(zx_sp_Response_PUT_Destination) */
void zx_sp_Response_PUT_Destination(struct zx_sp_Response_s* x, struct zx_str* y) { x->Destination = y; }
/* FUNC(zx_sp_Response_GET_ID) */
struct zx_str* zx_sp_Response_GET_ID(struct zx_sp_Response_s* x) { return x->ID; }
/* FUNC(zx_sp_Response_PUT_ID) */
void zx_sp_Response_PUT_ID(struct zx_sp_Response_s* x, struct zx_str* y) { x->ID = y; }
/* FUNC(zx_sp_Response_GET_InResponseTo) */
struct zx_str* zx_sp_Response_GET_InResponseTo(struct zx_sp_Response_s* x) { return x->InResponseTo; }
/* FUNC(zx_sp_Response_PUT_InResponseTo) */
void zx_sp_Response_PUT_InResponseTo(struct zx_sp_Response_s* x, struct zx_str* y) { x->InResponseTo = y; }
/* FUNC(zx_sp_Response_GET_IssueInstant) */
struct zx_str* zx_sp_Response_GET_IssueInstant(struct zx_sp_Response_s* x) { return x->IssueInstant; }
/* FUNC(zx_sp_Response_PUT_IssueInstant) */
void zx_sp_Response_PUT_IssueInstant(struct zx_sp_Response_s* x, struct zx_str* y) { x->IssueInstant = y; }
/* FUNC(zx_sp_Response_GET_Version) */
struct zx_str* zx_sp_Response_GET_Version(struct zx_sp_Response_s* x) { return x->Version; }
/* FUNC(zx_sp_Response_PUT_Version) */
void zx_sp_Response_PUT_Version(struct zx_sp_Response_s* x, struct zx_str* y) { x->Version = y; }







#ifdef ZX_ENA_GETPUT

/* FUNC(zx_sp_Scoping_NUM_IDPList) */

int zx_sp_Scoping_NUM_IDPList(struct zx_sp_Scoping_s* x)
{
  struct zx_sp_IDPList_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->IDPList; y; ++n, y = (struct zx_sp_IDPList_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_sp_Scoping_GET_IDPList) */

struct zx_sp_IDPList_s* zx_sp_Scoping_GET_IDPList(struct zx_sp_Scoping_s* x, int n)
{
  struct zx_sp_IDPList_s* y;
  if (!x) return 0;
  for (y = x->IDPList; n>=0 && y; --n, y = (struct zx_sp_IDPList_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_sp_Scoping_POP_IDPList) */

struct zx_sp_IDPList_s* zx_sp_Scoping_POP_IDPList(struct zx_sp_Scoping_s* x)
{
  struct zx_sp_IDPList_s* y;
  if (!x) return 0;
  y = x->IDPList;
  if (y)
    x->IDPList = (struct zx_sp_IDPList_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_sp_Scoping_PUSH_IDPList) */

void zx_sp_Scoping_PUSH_IDPList(struct zx_sp_Scoping_s* x, struct zx_sp_IDPList_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->IDPList->gg.g;
  x->IDPList = z;
}

/* FUNC(zx_sp_Scoping_REV_IDPList) */

void zx_sp_Scoping_REV_IDPList(struct zx_sp_Scoping_s* x)
{
  struct zx_sp_IDPList_s* nxt;
  struct zx_sp_IDPList_s* y;
  if (!x) return;
  y = x->IDPList;
  if (!y) return;
  x->IDPList = 0;
  while (y) {
    nxt = (struct zx_sp_IDPList_s*)y->gg.g.n;
    y->gg.g.n = &x->IDPList->gg.g;
    x->IDPList = y;
    y = nxt;
  }
}

/* FUNC(zx_sp_Scoping_PUT_IDPList) */

void zx_sp_Scoping_PUT_IDPList(struct zx_sp_Scoping_s* x, int n, struct zx_sp_IDPList_s* z)
{
  struct zx_sp_IDPList_s* y;
  if (!x || !z) return;
  y = x->IDPList;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->IDPList = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_sp_IDPList_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_sp_Scoping_ADD_IDPList) */

void zx_sp_Scoping_ADD_IDPList(struct zx_sp_Scoping_s* x, int n, struct zx_sp_IDPList_s* z)
{
  struct zx_sp_IDPList_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->IDPList->gg.g;
    x->IDPList = z;
    return;
  case -1:
    y = x->IDPList;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_sp_IDPList_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->IDPList; n > 1 && y; --n, y = (struct zx_sp_IDPList_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_sp_Scoping_DEL_IDPList) */

void zx_sp_Scoping_DEL_IDPList(struct zx_sp_Scoping_s* x, int n)
{
  struct zx_sp_IDPList_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->IDPList = (struct zx_sp_IDPList_s*)x->IDPList->gg.g.n;
    return;
  case -1:
    y = (struct zx_sp_IDPList_s*)x->IDPList;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_sp_IDPList_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->IDPList; n > 1 && y->gg.g.n; --n, y = (struct zx_sp_IDPList_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_sp_Scoping_NUM_RequesterID) */

int zx_sp_Scoping_NUM_RequesterID(struct zx_sp_Scoping_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->RequesterID; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_sp_Scoping_GET_RequesterID) */

struct zx_elem_s* zx_sp_Scoping_GET_RequesterID(struct zx_sp_Scoping_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->RequesterID; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_sp_Scoping_POP_RequesterID) */

struct zx_elem_s* zx_sp_Scoping_POP_RequesterID(struct zx_sp_Scoping_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->RequesterID;
  if (y)
    x->RequesterID = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_sp_Scoping_PUSH_RequesterID) */

void zx_sp_Scoping_PUSH_RequesterID(struct zx_sp_Scoping_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->RequesterID->g;
  x->RequesterID = z;
}

/* FUNC(zx_sp_Scoping_REV_RequesterID) */

void zx_sp_Scoping_REV_RequesterID(struct zx_sp_Scoping_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->RequesterID;
  if (!y) return;
  x->RequesterID = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->RequesterID->g;
    x->RequesterID = y;
    y = nxt;
  }
}

/* FUNC(zx_sp_Scoping_PUT_RequesterID) */

void zx_sp_Scoping_PUT_RequesterID(struct zx_sp_Scoping_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->RequesterID;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->RequesterID = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_sp_Scoping_ADD_RequesterID) */

void zx_sp_Scoping_ADD_RequesterID(struct zx_sp_Scoping_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->RequesterID->g;
    x->RequesterID = z;
    return;
  case -1:
    y = x->RequesterID;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->RequesterID; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_sp_Scoping_DEL_RequesterID) */

void zx_sp_Scoping_DEL_RequesterID(struct zx_sp_Scoping_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->RequesterID = (struct zx_elem_s*)x->RequesterID->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->RequesterID;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->RequesterID; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

#endif

/* FUNC(zx_sp_Scoping_GET_ProxyCount) */
struct zx_str* zx_sp_Scoping_GET_ProxyCount(struct zx_sp_Scoping_s* x) { return x->ProxyCount; }
/* FUNC(zx_sp_Scoping_PUT_ProxyCount) */
void zx_sp_Scoping_PUT_ProxyCount(struct zx_sp_Scoping_s* x, struct zx_str* y) { x->ProxyCount = y; }







#ifdef ZX_ENA_GETPUT

/* FUNC(zx_sp_Status_NUM_StatusCode) */

int zx_sp_Status_NUM_StatusCode(struct zx_sp_Status_s* x)
{
  struct zx_sp_StatusCode_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->StatusCode; y; ++n, y = (struct zx_sp_StatusCode_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_sp_Status_GET_StatusCode) */

struct zx_sp_StatusCode_s* zx_sp_Status_GET_StatusCode(struct zx_sp_Status_s* x, int n)
{
  struct zx_sp_StatusCode_s* y;
  if (!x) return 0;
  for (y = x->StatusCode; n>=0 && y; --n, y = (struct zx_sp_StatusCode_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_sp_Status_POP_StatusCode) */

struct zx_sp_StatusCode_s* zx_sp_Status_POP_StatusCode(struct zx_sp_Status_s* x)
{
  struct zx_sp_StatusCode_s* y;
  if (!x) return 0;
  y = x->StatusCode;
  if (y)
    x->StatusCode = (struct zx_sp_StatusCode_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_sp_Status_PUSH_StatusCode) */

void zx_sp_Status_PUSH_StatusCode(struct zx_sp_Status_s* x, struct zx_sp_StatusCode_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->StatusCode->gg.g;
  x->StatusCode = z;
}

/* FUNC(zx_sp_Status_REV_StatusCode) */

void zx_sp_Status_REV_StatusCode(struct zx_sp_Status_s* x)
{
  struct zx_sp_StatusCode_s* nxt;
  struct zx_sp_StatusCode_s* y;
  if (!x) return;
  y = x->StatusCode;
  if (!y) return;
  x->StatusCode = 0;
  while (y) {
    nxt = (struct zx_sp_StatusCode_s*)y->gg.g.n;
    y->gg.g.n = &x->StatusCode->gg.g;
    x->StatusCode = y;
    y = nxt;
  }
}

/* FUNC(zx_sp_Status_PUT_StatusCode) */

void zx_sp_Status_PUT_StatusCode(struct zx_sp_Status_s* x, int n, struct zx_sp_StatusCode_s* z)
{
  struct zx_sp_StatusCode_s* y;
  if (!x || !z) return;
  y = x->StatusCode;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->StatusCode = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_sp_StatusCode_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_sp_Status_ADD_StatusCode) */

void zx_sp_Status_ADD_StatusCode(struct zx_sp_Status_s* x, int n, struct zx_sp_StatusCode_s* z)
{
  struct zx_sp_StatusCode_s* y;
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
    for (; y->gg.g.n; y = (struct zx_sp_StatusCode_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->StatusCode; n > 1 && y; --n, y = (struct zx_sp_StatusCode_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_sp_Status_DEL_StatusCode) */

void zx_sp_Status_DEL_StatusCode(struct zx_sp_Status_s* x, int n)
{
  struct zx_sp_StatusCode_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->StatusCode = (struct zx_sp_StatusCode_s*)x->StatusCode->gg.g.n;
    return;
  case -1:
    y = (struct zx_sp_StatusCode_s*)x->StatusCode;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_sp_StatusCode_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->StatusCode; n > 1 && y->gg.g.n; --n, y = (struct zx_sp_StatusCode_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_sp_Status_NUM_StatusMessage) */

int zx_sp_Status_NUM_StatusMessage(struct zx_sp_Status_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->StatusMessage; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_sp_Status_GET_StatusMessage) */

struct zx_elem_s* zx_sp_Status_GET_StatusMessage(struct zx_sp_Status_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->StatusMessage; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_sp_Status_POP_StatusMessage) */

struct zx_elem_s* zx_sp_Status_POP_StatusMessage(struct zx_sp_Status_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->StatusMessage;
  if (y)
    x->StatusMessage = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_sp_Status_PUSH_StatusMessage) */

void zx_sp_Status_PUSH_StatusMessage(struct zx_sp_Status_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->StatusMessage->g;
  x->StatusMessage = z;
}

/* FUNC(zx_sp_Status_REV_StatusMessage) */

void zx_sp_Status_REV_StatusMessage(struct zx_sp_Status_s* x)
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

/* FUNC(zx_sp_Status_PUT_StatusMessage) */

void zx_sp_Status_PUT_StatusMessage(struct zx_sp_Status_s* x, int n, struct zx_elem_s* z)
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

/* FUNC(zx_sp_Status_ADD_StatusMessage) */

void zx_sp_Status_ADD_StatusMessage(struct zx_sp_Status_s* x, int n, struct zx_elem_s* z)
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

/* FUNC(zx_sp_Status_DEL_StatusMessage) */

void zx_sp_Status_DEL_StatusMessage(struct zx_sp_Status_s* x, int n)
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

/* FUNC(zx_sp_Status_NUM_StatusDetail) */

int zx_sp_Status_NUM_StatusDetail(struct zx_sp_Status_s* x)
{
  struct zx_sp_StatusDetail_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->StatusDetail; y; ++n, y = (struct zx_sp_StatusDetail_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_sp_Status_GET_StatusDetail) */

struct zx_sp_StatusDetail_s* zx_sp_Status_GET_StatusDetail(struct zx_sp_Status_s* x, int n)
{
  struct zx_sp_StatusDetail_s* y;
  if (!x) return 0;
  for (y = x->StatusDetail; n>=0 && y; --n, y = (struct zx_sp_StatusDetail_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_sp_Status_POP_StatusDetail) */

struct zx_sp_StatusDetail_s* zx_sp_Status_POP_StatusDetail(struct zx_sp_Status_s* x)
{
  struct zx_sp_StatusDetail_s* y;
  if (!x) return 0;
  y = x->StatusDetail;
  if (y)
    x->StatusDetail = (struct zx_sp_StatusDetail_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_sp_Status_PUSH_StatusDetail) */

void zx_sp_Status_PUSH_StatusDetail(struct zx_sp_Status_s* x, struct zx_sp_StatusDetail_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->StatusDetail->gg.g;
  x->StatusDetail = z;
}

/* FUNC(zx_sp_Status_REV_StatusDetail) */

void zx_sp_Status_REV_StatusDetail(struct zx_sp_Status_s* x)
{
  struct zx_sp_StatusDetail_s* nxt;
  struct zx_sp_StatusDetail_s* y;
  if (!x) return;
  y = x->StatusDetail;
  if (!y) return;
  x->StatusDetail = 0;
  while (y) {
    nxt = (struct zx_sp_StatusDetail_s*)y->gg.g.n;
    y->gg.g.n = &x->StatusDetail->gg.g;
    x->StatusDetail = y;
    y = nxt;
  }
}

/* FUNC(zx_sp_Status_PUT_StatusDetail) */

void zx_sp_Status_PUT_StatusDetail(struct zx_sp_Status_s* x, int n, struct zx_sp_StatusDetail_s* z)
{
  struct zx_sp_StatusDetail_s* y;
  if (!x || !z) return;
  y = x->StatusDetail;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->StatusDetail = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_sp_StatusDetail_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_sp_Status_ADD_StatusDetail) */

void zx_sp_Status_ADD_StatusDetail(struct zx_sp_Status_s* x, int n, struct zx_sp_StatusDetail_s* z)
{
  struct zx_sp_StatusDetail_s* y;
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
    for (; y->gg.g.n; y = (struct zx_sp_StatusDetail_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->StatusDetail; n > 1 && y; --n, y = (struct zx_sp_StatusDetail_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_sp_Status_DEL_StatusDetail) */

void zx_sp_Status_DEL_StatusDetail(struct zx_sp_Status_s* x, int n)
{
  struct zx_sp_StatusDetail_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->StatusDetail = (struct zx_sp_StatusDetail_s*)x->StatusDetail->gg.g.n;
    return;
  case -1:
    y = (struct zx_sp_StatusDetail_s*)x->StatusDetail;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_sp_StatusDetail_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->StatusDetail; n > 1 && y->gg.g.n; --n, y = (struct zx_sp_StatusDetail_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif








#ifdef ZX_ENA_GETPUT

/* FUNC(zx_sp_StatusCode_NUM_StatusCode) */

int zx_sp_StatusCode_NUM_StatusCode(struct zx_sp_StatusCode_s* x)
{
  struct zx_sp_StatusCode_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->StatusCode; y; ++n, y = (struct zx_sp_StatusCode_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_sp_StatusCode_GET_StatusCode) */

struct zx_sp_StatusCode_s* zx_sp_StatusCode_GET_StatusCode(struct zx_sp_StatusCode_s* x, int n)
{
  struct zx_sp_StatusCode_s* y;
  if (!x) return 0;
  for (y = x->StatusCode; n>=0 && y; --n, y = (struct zx_sp_StatusCode_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_sp_StatusCode_POP_StatusCode) */

struct zx_sp_StatusCode_s* zx_sp_StatusCode_POP_StatusCode(struct zx_sp_StatusCode_s* x)
{
  struct zx_sp_StatusCode_s* y;
  if (!x) return 0;
  y = x->StatusCode;
  if (y)
    x->StatusCode = (struct zx_sp_StatusCode_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_sp_StatusCode_PUSH_StatusCode) */

void zx_sp_StatusCode_PUSH_StatusCode(struct zx_sp_StatusCode_s* x, struct zx_sp_StatusCode_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->StatusCode->gg.g;
  x->StatusCode = z;
}

/* FUNC(zx_sp_StatusCode_REV_StatusCode) */

void zx_sp_StatusCode_REV_StatusCode(struct zx_sp_StatusCode_s* x)
{
  struct zx_sp_StatusCode_s* nxt;
  struct zx_sp_StatusCode_s* y;
  if (!x) return;
  y = x->StatusCode;
  if (!y) return;
  x->StatusCode = 0;
  while (y) {
    nxt = (struct zx_sp_StatusCode_s*)y->gg.g.n;
    y->gg.g.n = &x->StatusCode->gg.g;
    x->StatusCode = y;
    y = nxt;
  }
}

/* FUNC(zx_sp_StatusCode_PUT_StatusCode) */

void zx_sp_StatusCode_PUT_StatusCode(struct zx_sp_StatusCode_s* x, int n, struct zx_sp_StatusCode_s* z)
{
  struct zx_sp_StatusCode_s* y;
  if (!x || !z) return;
  y = x->StatusCode;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->StatusCode = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_sp_StatusCode_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_sp_StatusCode_ADD_StatusCode) */

void zx_sp_StatusCode_ADD_StatusCode(struct zx_sp_StatusCode_s* x, int n, struct zx_sp_StatusCode_s* z)
{
  struct zx_sp_StatusCode_s* y;
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
    for (; y->gg.g.n; y = (struct zx_sp_StatusCode_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->StatusCode; n > 1 && y; --n, y = (struct zx_sp_StatusCode_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_sp_StatusCode_DEL_StatusCode) */

void zx_sp_StatusCode_DEL_StatusCode(struct zx_sp_StatusCode_s* x, int n)
{
  struct zx_sp_StatusCode_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->StatusCode = (struct zx_sp_StatusCode_s*)x->StatusCode->gg.g.n;
    return;
  case -1:
    y = (struct zx_sp_StatusCode_s*)x->StatusCode;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_sp_StatusCode_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->StatusCode; n > 1 && y->gg.g.n; --n, y = (struct zx_sp_StatusCode_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif

/* FUNC(zx_sp_StatusCode_GET_Value) */
struct zx_str* zx_sp_StatusCode_GET_Value(struct zx_sp_StatusCode_s* x) { return x->Value; }
/* FUNC(zx_sp_StatusCode_PUT_Value) */
void zx_sp_StatusCode_PUT_Value(struct zx_sp_StatusCode_s* x, struct zx_str* y) { x->Value = y; }












#ifdef ZX_ENA_GETPUT

/* FUNC(zx_sp_SubjectQuery_NUM_Issuer) */

int zx_sp_SubjectQuery_NUM_Issuer(struct zx_sp_SubjectQuery_s* x)
{
  struct zx_sa_Issuer_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Issuer; y; ++n, y = (struct zx_sa_Issuer_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_sp_SubjectQuery_GET_Issuer) */

struct zx_sa_Issuer_s* zx_sp_SubjectQuery_GET_Issuer(struct zx_sp_SubjectQuery_s* x, int n)
{
  struct zx_sa_Issuer_s* y;
  if (!x) return 0;
  for (y = x->Issuer; n>=0 && y; --n, y = (struct zx_sa_Issuer_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_sp_SubjectQuery_POP_Issuer) */

struct zx_sa_Issuer_s* zx_sp_SubjectQuery_POP_Issuer(struct zx_sp_SubjectQuery_s* x)
{
  struct zx_sa_Issuer_s* y;
  if (!x) return 0;
  y = x->Issuer;
  if (y)
    x->Issuer = (struct zx_sa_Issuer_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_sp_SubjectQuery_PUSH_Issuer) */

void zx_sp_SubjectQuery_PUSH_Issuer(struct zx_sp_SubjectQuery_s* x, struct zx_sa_Issuer_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Issuer->gg.g;
  x->Issuer = z;
}

/* FUNC(zx_sp_SubjectQuery_REV_Issuer) */

void zx_sp_SubjectQuery_REV_Issuer(struct zx_sp_SubjectQuery_s* x)
{
  struct zx_sa_Issuer_s* nxt;
  struct zx_sa_Issuer_s* y;
  if (!x) return;
  y = x->Issuer;
  if (!y) return;
  x->Issuer = 0;
  while (y) {
    nxt = (struct zx_sa_Issuer_s*)y->gg.g.n;
    y->gg.g.n = &x->Issuer->gg.g;
    x->Issuer = y;
    y = nxt;
  }
}

/* FUNC(zx_sp_SubjectQuery_PUT_Issuer) */

void zx_sp_SubjectQuery_PUT_Issuer(struct zx_sp_SubjectQuery_s* x, int n, struct zx_sa_Issuer_s* z)
{
  struct zx_sa_Issuer_s* y;
  if (!x || !z) return;
  y = x->Issuer;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Issuer = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_sa_Issuer_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_sp_SubjectQuery_ADD_Issuer) */

void zx_sp_SubjectQuery_ADD_Issuer(struct zx_sp_SubjectQuery_s* x, int n, struct zx_sa_Issuer_s* z)
{
  struct zx_sa_Issuer_s* y;
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
    for (; y->gg.g.n; y = (struct zx_sa_Issuer_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Issuer; n > 1 && y; --n, y = (struct zx_sa_Issuer_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_sp_SubjectQuery_DEL_Issuer) */

void zx_sp_SubjectQuery_DEL_Issuer(struct zx_sp_SubjectQuery_s* x, int n)
{
  struct zx_sa_Issuer_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Issuer = (struct zx_sa_Issuer_s*)x->Issuer->gg.g.n;
    return;
  case -1:
    y = (struct zx_sa_Issuer_s*)x->Issuer;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_sa_Issuer_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Issuer; n > 1 && y->gg.g.n; --n, y = (struct zx_sa_Issuer_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_sp_SubjectQuery_NUM_Signature) */

int zx_sp_SubjectQuery_NUM_Signature(struct zx_sp_SubjectQuery_s* x)
{
  struct zx_ds_Signature_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Signature; y; ++n, y = (struct zx_ds_Signature_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_sp_SubjectQuery_GET_Signature) */

struct zx_ds_Signature_s* zx_sp_SubjectQuery_GET_Signature(struct zx_sp_SubjectQuery_s* x, int n)
{
  struct zx_ds_Signature_s* y;
  if (!x) return 0;
  for (y = x->Signature; n>=0 && y; --n, y = (struct zx_ds_Signature_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_sp_SubjectQuery_POP_Signature) */

struct zx_ds_Signature_s* zx_sp_SubjectQuery_POP_Signature(struct zx_sp_SubjectQuery_s* x)
{
  struct zx_ds_Signature_s* y;
  if (!x) return 0;
  y = x->Signature;
  if (y)
    x->Signature = (struct zx_ds_Signature_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_sp_SubjectQuery_PUSH_Signature) */

void zx_sp_SubjectQuery_PUSH_Signature(struct zx_sp_SubjectQuery_s* x, struct zx_ds_Signature_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Signature->gg.g;
  x->Signature = z;
}

/* FUNC(zx_sp_SubjectQuery_REV_Signature) */

void zx_sp_SubjectQuery_REV_Signature(struct zx_sp_SubjectQuery_s* x)
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

/* FUNC(zx_sp_SubjectQuery_PUT_Signature) */

void zx_sp_SubjectQuery_PUT_Signature(struct zx_sp_SubjectQuery_s* x, int n, struct zx_ds_Signature_s* z)
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

/* FUNC(zx_sp_SubjectQuery_ADD_Signature) */

void zx_sp_SubjectQuery_ADD_Signature(struct zx_sp_SubjectQuery_s* x, int n, struct zx_ds_Signature_s* z)
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

/* FUNC(zx_sp_SubjectQuery_DEL_Signature) */

void zx_sp_SubjectQuery_DEL_Signature(struct zx_sp_SubjectQuery_s* x, int n)
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

/* FUNC(zx_sp_SubjectQuery_NUM_Extensions) */

int zx_sp_SubjectQuery_NUM_Extensions(struct zx_sp_SubjectQuery_s* x)
{
  struct zx_sp_Extensions_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Extensions; y; ++n, y = (struct zx_sp_Extensions_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_sp_SubjectQuery_GET_Extensions) */

struct zx_sp_Extensions_s* zx_sp_SubjectQuery_GET_Extensions(struct zx_sp_SubjectQuery_s* x, int n)
{
  struct zx_sp_Extensions_s* y;
  if (!x) return 0;
  for (y = x->Extensions; n>=0 && y; --n, y = (struct zx_sp_Extensions_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_sp_SubjectQuery_POP_Extensions) */

struct zx_sp_Extensions_s* zx_sp_SubjectQuery_POP_Extensions(struct zx_sp_SubjectQuery_s* x)
{
  struct zx_sp_Extensions_s* y;
  if (!x) return 0;
  y = x->Extensions;
  if (y)
    x->Extensions = (struct zx_sp_Extensions_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_sp_SubjectQuery_PUSH_Extensions) */

void zx_sp_SubjectQuery_PUSH_Extensions(struct zx_sp_SubjectQuery_s* x, struct zx_sp_Extensions_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Extensions->gg.g;
  x->Extensions = z;
}

/* FUNC(zx_sp_SubjectQuery_REV_Extensions) */

void zx_sp_SubjectQuery_REV_Extensions(struct zx_sp_SubjectQuery_s* x)
{
  struct zx_sp_Extensions_s* nxt;
  struct zx_sp_Extensions_s* y;
  if (!x) return;
  y = x->Extensions;
  if (!y) return;
  x->Extensions = 0;
  while (y) {
    nxt = (struct zx_sp_Extensions_s*)y->gg.g.n;
    y->gg.g.n = &x->Extensions->gg.g;
    x->Extensions = y;
    y = nxt;
  }
}

/* FUNC(zx_sp_SubjectQuery_PUT_Extensions) */

void zx_sp_SubjectQuery_PUT_Extensions(struct zx_sp_SubjectQuery_s* x, int n, struct zx_sp_Extensions_s* z)
{
  struct zx_sp_Extensions_s* y;
  if (!x || !z) return;
  y = x->Extensions;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Extensions = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_sp_Extensions_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_sp_SubjectQuery_ADD_Extensions) */

void zx_sp_SubjectQuery_ADD_Extensions(struct zx_sp_SubjectQuery_s* x, int n, struct zx_sp_Extensions_s* z)
{
  struct zx_sp_Extensions_s* y;
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
    for (; y->gg.g.n; y = (struct zx_sp_Extensions_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Extensions; n > 1 && y; --n, y = (struct zx_sp_Extensions_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_sp_SubjectQuery_DEL_Extensions) */

void zx_sp_SubjectQuery_DEL_Extensions(struct zx_sp_SubjectQuery_s* x, int n)
{
  struct zx_sp_Extensions_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Extensions = (struct zx_sp_Extensions_s*)x->Extensions->gg.g.n;
    return;
  case -1:
    y = (struct zx_sp_Extensions_s*)x->Extensions;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_sp_Extensions_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Extensions; n > 1 && y->gg.g.n; --n, y = (struct zx_sp_Extensions_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_sp_SubjectQuery_NUM_Subject) */

int zx_sp_SubjectQuery_NUM_Subject(struct zx_sp_SubjectQuery_s* x)
{
  struct zx_sa_Subject_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Subject; y; ++n, y = (struct zx_sa_Subject_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_sp_SubjectQuery_GET_Subject) */

struct zx_sa_Subject_s* zx_sp_SubjectQuery_GET_Subject(struct zx_sp_SubjectQuery_s* x, int n)
{
  struct zx_sa_Subject_s* y;
  if (!x) return 0;
  for (y = x->Subject; n>=0 && y; --n, y = (struct zx_sa_Subject_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_sp_SubjectQuery_POP_Subject) */

struct zx_sa_Subject_s* zx_sp_SubjectQuery_POP_Subject(struct zx_sp_SubjectQuery_s* x)
{
  struct zx_sa_Subject_s* y;
  if (!x) return 0;
  y = x->Subject;
  if (y)
    x->Subject = (struct zx_sa_Subject_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_sp_SubjectQuery_PUSH_Subject) */

void zx_sp_SubjectQuery_PUSH_Subject(struct zx_sp_SubjectQuery_s* x, struct zx_sa_Subject_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Subject->gg.g;
  x->Subject = z;
}

/* FUNC(zx_sp_SubjectQuery_REV_Subject) */

void zx_sp_SubjectQuery_REV_Subject(struct zx_sp_SubjectQuery_s* x)
{
  struct zx_sa_Subject_s* nxt;
  struct zx_sa_Subject_s* y;
  if (!x) return;
  y = x->Subject;
  if (!y) return;
  x->Subject = 0;
  while (y) {
    nxt = (struct zx_sa_Subject_s*)y->gg.g.n;
    y->gg.g.n = &x->Subject->gg.g;
    x->Subject = y;
    y = nxt;
  }
}

/* FUNC(zx_sp_SubjectQuery_PUT_Subject) */

void zx_sp_SubjectQuery_PUT_Subject(struct zx_sp_SubjectQuery_s* x, int n, struct zx_sa_Subject_s* z)
{
  struct zx_sa_Subject_s* y;
  if (!x || !z) return;
  y = x->Subject;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Subject = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_sa_Subject_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_sp_SubjectQuery_ADD_Subject) */

void zx_sp_SubjectQuery_ADD_Subject(struct zx_sp_SubjectQuery_s* x, int n, struct zx_sa_Subject_s* z)
{
  struct zx_sa_Subject_s* y;
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
    for (; y->gg.g.n; y = (struct zx_sa_Subject_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Subject; n > 1 && y; --n, y = (struct zx_sa_Subject_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_sp_SubjectQuery_DEL_Subject) */

void zx_sp_SubjectQuery_DEL_Subject(struct zx_sp_SubjectQuery_s* x, int n)
{
  struct zx_sa_Subject_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Subject = (struct zx_sa_Subject_s*)x->Subject->gg.g.n;
    return;
  case -1:
    y = (struct zx_sa_Subject_s*)x->Subject;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_sa_Subject_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Subject; n > 1 && y->gg.g.n; --n, y = (struct zx_sa_Subject_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif

/* FUNC(zx_sp_SubjectQuery_GET_Consent) */
struct zx_str* zx_sp_SubjectQuery_GET_Consent(struct zx_sp_SubjectQuery_s* x) { return x->Consent; }
/* FUNC(zx_sp_SubjectQuery_PUT_Consent) */
void zx_sp_SubjectQuery_PUT_Consent(struct zx_sp_SubjectQuery_s* x, struct zx_str* y) { x->Consent = y; }
/* FUNC(zx_sp_SubjectQuery_GET_Destination) */
struct zx_str* zx_sp_SubjectQuery_GET_Destination(struct zx_sp_SubjectQuery_s* x) { return x->Destination; }
/* FUNC(zx_sp_SubjectQuery_PUT_Destination) */
void zx_sp_SubjectQuery_PUT_Destination(struct zx_sp_SubjectQuery_s* x, struct zx_str* y) { x->Destination = y; }
/* FUNC(zx_sp_SubjectQuery_GET_ID) */
struct zx_str* zx_sp_SubjectQuery_GET_ID(struct zx_sp_SubjectQuery_s* x) { return x->ID; }
/* FUNC(zx_sp_SubjectQuery_PUT_ID) */
void zx_sp_SubjectQuery_PUT_ID(struct zx_sp_SubjectQuery_s* x, struct zx_str* y) { x->ID = y; }
/* FUNC(zx_sp_SubjectQuery_GET_IssueInstant) */
struct zx_str* zx_sp_SubjectQuery_GET_IssueInstant(struct zx_sp_SubjectQuery_s* x) { return x->IssueInstant; }
/* FUNC(zx_sp_SubjectQuery_PUT_IssueInstant) */
void zx_sp_SubjectQuery_PUT_IssueInstant(struct zx_sp_SubjectQuery_s* x, struct zx_str* y) { x->IssueInstant = y; }
/* FUNC(zx_sp_SubjectQuery_GET_Version) */
struct zx_str* zx_sp_SubjectQuery_GET_Version(struct zx_sp_SubjectQuery_s* x) { return x->Version; }
/* FUNC(zx_sp_SubjectQuery_PUT_Version) */
void zx_sp_SubjectQuery_PUT_Version(struct zx_sp_SubjectQuery_s* x, struct zx_str* y) { x->Version = y; }





/* EOF -- c/zx-sp-getput.c */
