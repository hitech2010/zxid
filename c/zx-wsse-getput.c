/* c/zx-wsse-getput.c - WARNING: This file was automatically generated. DO NOT EDIT!
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
#include "c/zx-wsse-data.h"

/* FUNC(zx_wsse_BinarySecurityToken_GET_EncodingType) */
struct zx_str* zx_wsse_BinarySecurityToken_GET_EncodingType(struct zx_wsse_BinarySecurityToken_s* x) { return x->EncodingType; }
/* FUNC(zx_wsse_BinarySecurityToken_PUT_EncodingType) */
void zx_wsse_BinarySecurityToken_PUT_EncodingType(struct zx_wsse_BinarySecurityToken_s* x, struct zx_str* y) { x->EncodingType = y; }
/* FUNC(zx_wsse_BinarySecurityToken_GET_ValueType) */
struct zx_str* zx_wsse_BinarySecurityToken_GET_ValueType(struct zx_wsse_BinarySecurityToken_s* x) { return x->ValueType; }
/* FUNC(zx_wsse_BinarySecurityToken_PUT_ValueType) */
void zx_wsse_BinarySecurityToken_PUT_ValueType(struct zx_wsse_BinarySecurityToken_s* x, struct zx_str* y) { x->ValueType = y; }
/* FUNC(zx_wsse_BinarySecurityToken_GET_Id) */
struct zx_str* zx_wsse_BinarySecurityToken_GET_Id(struct zx_wsse_BinarySecurityToken_s* x) { return x->Id; }
/* FUNC(zx_wsse_BinarySecurityToken_PUT_Id) */
void zx_wsse_BinarySecurityToken_PUT_Id(struct zx_wsse_BinarySecurityToken_s* x, struct zx_str* y) { x->Id = y; }





/* FUNC(zx_wsse_Embedded_GET_ValueType) */
struct zx_str* zx_wsse_Embedded_GET_ValueType(struct zx_wsse_Embedded_s* x) { return x->ValueType; }
/* FUNC(zx_wsse_Embedded_PUT_ValueType) */
void zx_wsse_Embedded_PUT_ValueType(struct zx_wsse_Embedded_s* x, struct zx_str* y) { x->ValueType = y; }





/* FUNC(zx_wsse_KeyIdentifier_GET_EncodingType) */
struct zx_str* zx_wsse_KeyIdentifier_GET_EncodingType(struct zx_wsse_KeyIdentifier_s* x) { return x->EncodingType; }
/* FUNC(zx_wsse_KeyIdentifier_PUT_EncodingType) */
void zx_wsse_KeyIdentifier_PUT_EncodingType(struct zx_wsse_KeyIdentifier_s* x, struct zx_str* y) { x->EncodingType = y; }
/* FUNC(zx_wsse_KeyIdentifier_GET_ValueType) */
struct zx_str* zx_wsse_KeyIdentifier_GET_ValueType(struct zx_wsse_KeyIdentifier_s* x) { return x->ValueType; }
/* FUNC(zx_wsse_KeyIdentifier_PUT_ValueType) */
void zx_wsse_KeyIdentifier_PUT_ValueType(struct zx_wsse_KeyIdentifier_s* x, struct zx_str* y) { x->ValueType = y; }
/* FUNC(zx_wsse_KeyIdentifier_GET_Id) */
struct zx_str* zx_wsse_KeyIdentifier_GET_Id(struct zx_wsse_KeyIdentifier_s* x) { return x->Id; }
/* FUNC(zx_wsse_KeyIdentifier_PUT_Id) */
void zx_wsse_KeyIdentifier_PUT_Id(struct zx_wsse_KeyIdentifier_s* x, struct zx_str* y) { x->Id = y; }





/* FUNC(zx_wsse_Nonce_GET_EncodingType) */
struct zx_str* zx_wsse_Nonce_GET_EncodingType(struct zx_wsse_Nonce_s* x) { return x->EncodingType; }
/* FUNC(zx_wsse_Nonce_PUT_EncodingType) */
void zx_wsse_Nonce_PUT_EncodingType(struct zx_wsse_Nonce_s* x, struct zx_str* y) { x->EncodingType = y; }
/* FUNC(zx_wsse_Nonce_GET_Id) */
struct zx_str* zx_wsse_Nonce_GET_Id(struct zx_wsse_Nonce_s* x) { return x->Id; }
/* FUNC(zx_wsse_Nonce_PUT_Id) */
void zx_wsse_Nonce_PUT_Id(struct zx_wsse_Nonce_s* x, struct zx_str* y) { x->Id = y; }





/* FUNC(zx_wsse_Password_GET_Type) */
struct zx_str* zx_wsse_Password_GET_Type(struct zx_wsse_Password_s* x) { return x->Type; }
/* FUNC(zx_wsse_Password_PUT_Type) */
void zx_wsse_Password_PUT_Type(struct zx_wsse_Password_s* x, struct zx_str* y) { x->Type = y; }
/* FUNC(zx_wsse_Password_GET_Id) */
struct zx_str* zx_wsse_Password_GET_Id(struct zx_wsse_Password_s* x) { return x->Id; }
/* FUNC(zx_wsse_Password_PUT_Id) */
void zx_wsse_Password_PUT_Id(struct zx_wsse_Password_s* x, struct zx_str* y) { x->Id = y; }





/* FUNC(zx_wsse_Reference_GET_URI) */
struct zx_str* zx_wsse_Reference_GET_URI(struct zx_wsse_Reference_s* x) { return x->URI; }
/* FUNC(zx_wsse_Reference_PUT_URI) */
void zx_wsse_Reference_PUT_URI(struct zx_wsse_Reference_s* x, struct zx_str* y) { x->URI = y; }
/* FUNC(zx_wsse_Reference_GET_ValueType) */
struct zx_str* zx_wsse_Reference_GET_ValueType(struct zx_wsse_Reference_s* x) { return x->ValueType; }
/* FUNC(zx_wsse_Reference_PUT_ValueType) */
void zx_wsse_Reference_PUT_ValueType(struct zx_wsse_Reference_s* x, struct zx_str* y) { x->ValueType = y; }







#ifdef ZX_ENA_GETPUT

/* FUNC(zx_wsse_Security_NUM_Signature) */

int zx_wsse_Security_NUM_Signature(struct zx_wsse_Security_s* x)
{
  struct zx_ds_Signature_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Signature; y; ++n, y = (struct zx_ds_Signature_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_wsse_Security_GET_Signature) */

struct zx_ds_Signature_s* zx_wsse_Security_GET_Signature(struct zx_wsse_Security_s* x, int n)
{
  struct zx_ds_Signature_s* y;
  if (!x) return 0;
  for (y = x->Signature; n>=0 && y; --n, y = (struct zx_ds_Signature_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_wsse_Security_POP_Signature) */

struct zx_ds_Signature_s* zx_wsse_Security_POP_Signature(struct zx_wsse_Security_s* x)
{
  struct zx_ds_Signature_s* y;
  if (!x) return 0;
  y = x->Signature;
  if (y)
    x->Signature = (struct zx_ds_Signature_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_wsse_Security_PUSH_Signature) */

void zx_wsse_Security_PUSH_Signature(struct zx_wsse_Security_s* x, struct zx_ds_Signature_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Signature->gg.g;
  x->Signature = z;
}

/* FUNC(zx_wsse_Security_REV_Signature) */

void zx_wsse_Security_REV_Signature(struct zx_wsse_Security_s* x)
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

/* FUNC(zx_wsse_Security_PUT_Signature) */

void zx_wsse_Security_PUT_Signature(struct zx_wsse_Security_s* x, int n, struct zx_ds_Signature_s* z)
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

/* FUNC(zx_wsse_Security_ADD_Signature) */

void zx_wsse_Security_ADD_Signature(struct zx_wsse_Security_s* x, int n, struct zx_ds_Signature_s* z)
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

/* FUNC(zx_wsse_Security_DEL_Signature) */

void zx_wsse_Security_DEL_Signature(struct zx_wsse_Security_s* x, int n)
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

/* FUNC(zx_wsse_Security_NUM_Assertion) */

int zx_wsse_Security_NUM_Assertion(struct zx_wsse_Security_s* x)
{
  struct zx_sa_Assertion_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Assertion; y; ++n, y = (struct zx_sa_Assertion_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_wsse_Security_GET_Assertion) */

struct zx_sa_Assertion_s* zx_wsse_Security_GET_Assertion(struct zx_wsse_Security_s* x, int n)
{
  struct zx_sa_Assertion_s* y;
  if (!x) return 0;
  for (y = x->Assertion; n>=0 && y; --n, y = (struct zx_sa_Assertion_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_wsse_Security_POP_Assertion) */

struct zx_sa_Assertion_s* zx_wsse_Security_POP_Assertion(struct zx_wsse_Security_s* x)
{
  struct zx_sa_Assertion_s* y;
  if (!x) return 0;
  y = x->Assertion;
  if (y)
    x->Assertion = (struct zx_sa_Assertion_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_wsse_Security_PUSH_Assertion) */

void zx_wsse_Security_PUSH_Assertion(struct zx_wsse_Security_s* x, struct zx_sa_Assertion_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Assertion->gg.g;
  x->Assertion = z;
}

/* FUNC(zx_wsse_Security_REV_Assertion) */

void zx_wsse_Security_REV_Assertion(struct zx_wsse_Security_s* x)
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

/* FUNC(zx_wsse_Security_PUT_Assertion) */

void zx_wsse_Security_PUT_Assertion(struct zx_wsse_Security_s* x, int n, struct zx_sa_Assertion_s* z)
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

/* FUNC(zx_wsse_Security_ADD_Assertion) */

void zx_wsse_Security_ADD_Assertion(struct zx_wsse_Security_s* x, int n, struct zx_sa_Assertion_s* z)
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

/* FUNC(zx_wsse_Security_DEL_Assertion) */

void zx_wsse_Security_DEL_Assertion(struct zx_wsse_Security_s* x, int n)
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

/* FUNC(zx_wsse_Security_NUM_sa11_Assertion) */

int zx_wsse_Security_NUM_sa11_Assertion(struct zx_wsse_Security_s* x)
{
  struct zx_sa11_Assertion_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->sa11_Assertion; y; ++n, y = (struct zx_sa11_Assertion_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_wsse_Security_GET_sa11_Assertion) */

struct zx_sa11_Assertion_s* zx_wsse_Security_GET_sa11_Assertion(struct zx_wsse_Security_s* x, int n)
{
  struct zx_sa11_Assertion_s* y;
  if (!x) return 0;
  for (y = x->sa11_Assertion; n>=0 && y; --n, y = (struct zx_sa11_Assertion_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_wsse_Security_POP_sa11_Assertion) */

struct zx_sa11_Assertion_s* zx_wsse_Security_POP_sa11_Assertion(struct zx_wsse_Security_s* x)
{
  struct zx_sa11_Assertion_s* y;
  if (!x) return 0;
  y = x->sa11_Assertion;
  if (y)
    x->sa11_Assertion = (struct zx_sa11_Assertion_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_wsse_Security_PUSH_sa11_Assertion) */

void zx_wsse_Security_PUSH_sa11_Assertion(struct zx_wsse_Security_s* x, struct zx_sa11_Assertion_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->sa11_Assertion->gg.g;
  x->sa11_Assertion = z;
}

/* FUNC(zx_wsse_Security_REV_sa11_Assertion) */

void zx_wsse_Security_REV_sa11_Assertion(struct zx_wsse_Security_s* x)
{
  struct zx_sa11_Assertion_s* nxt;
  struct zx_sa11_Assertion_s* y;
  if (!x) return;
  y = x->sa11_Assertion;
  if (!y) return;
  x->sa11_Assertion = 0;
  while (y) {
    nxt = (struct zx_sa11_Assertion_s*)y->gg.g.n;
    y->gg.g.n = &x->sa11_Assertion->gg.g;
    x->sa11_Assertion = y;
    y = nxt;
  }
}

/* FUNC(zx_wsse_Security_PUT_sa11_Assertion) */

void zx_wsse_Security_PUT_sa11_Assertion(struct zx_wsse_Security_s* x, int n, struct zx_sa11_Assertion_s* z)
{
  struct zx_sa11_Assertion_s* y;
  if (!x || !z) return;
  y = x->sa11_Assertion;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->sa11_Assertion = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_sa11_Assertion_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_wsse_Security_ADD_sa11_Assertion) */

void zx_wsse_Security_ADD_sa11_Assertion(struct zx_wsse_Security_s* x, int n, struct zx_sa11_Assertion_s* z)
{
  struct zx_sa11_Assertion_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->sa11_Assertion->gg.g;
    x->sa11_Assertion = z;
    return;
  case -1:
    y = x->sa11_Assertion;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_sa11_Assertion_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->sa11_Assertion; n > 1 && y; --n, y = (struct zx_sa11_Assertion_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_wsse_Security_DEL_sa11_Assertion) */

void zx_wsse_Security_DEL_sa11_Assertion(struct zx_wsse_Security_s* x, int n)
{
  struct zx_sa11_Assertion_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->sa11_Assertion = (struct zx_sa11_Assertion_s*)x->sa11_Assertion->gg.g.n;
    return;
  case -1:
    y = (struct zx_sa11_Assertion_s*)x->sa11_Assertion;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_sa11_Assertion_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->sa11_Assertion; n > 1 && y->gg.g.n; --n, y = (struct zx_sa11_Assertion_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_wsse_Security_NUM_ff12_Assertion) */

int zx_wsse_Security_NUM_ff12_Assertion(struct zx_wsse_Security_s* x)
{
  struct zx_ff12_Assertion_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->ff12_Assertion; y; ++n, y = (struct zx_ff12_Assertion_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_wsse_Security_GET_ff12_Assertion) */

struct zx_ff12_Assertion_s* zx_wsse_Security_GET_ff12_Assertion(struct zx_wsse_Security_s* x, int n)
{
  struct zx_ff12_Assertion_s* y;
  if (!x) return 0;
  for (y = x->ff12_Assertion; n>=0 && y; --n, y = (struct zx_ff12_Assertion_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_wsse_Security_POP_ff12_Assertion) */

struct zx_ff12_Assertion_s* zx_wsse_Security_POP_ff12_Assertion(struct zx_wsse_Security_s* x)
{
  struct zx_ff12_Assertion_s* y;
  if (!x) return 0;
  y = x->ff12_Assertion;
  if (y)
    x->ff12_Assertion = (struct zx_ff12_Assertion_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_wsse_Security_PUSH_ff12_Assertion) */

void zx_wsse_Security_PUSH_ff12_Assertion(struct zx_wsse_Security_s* x, struct zx_ff12_Assertion_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->ff12_Assertion->gg.g;
  x->ff12_Assertion = z;
}

/* FUNC(zx_wsse_Security_REV_ff12_Assertion) */

void zx_wsse_Security_REV_ff12_Assertion(struct zx_wsse_Security_s* x)
{
  struct zx_ff12_Assertion_s* nxt;
  struct zx_ff12_Assertion_s* y;
  if (!x) return;
  y = x->ff12_Assertion;
  if (!y) return;
  x->ff12_Assertion = 0;
  while (y) {
    nxt = (struct zx_ff12_Assertion_s*)y->gg.g.n;
    y->gg.g.n = &x->ff12_Assertion->gg.g;
    x->ff12_Assertion = y;
    y = nxt;
  }
}

/* FUNC(zx_wsse_Security_PUT_ff12_Assertion) */

void zx_wsse_Security_PUT_ff12_Assertion(struct zx_wsse_Security_s* x, int n, struct zx_ff12_Assertion_s* z)
{
  struct zx_ff12_Assertion_s* y;
  if (!x || !z) return;
  y = x->ff12_Assertion;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->ff12_Assertion = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_ff12_Assertion_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_wsse_Security_ADD_ff12_Assertion) */

void zx_wsse_Security_ADD_ff12_Assertion(struct zx_wsse_Security_s* x, int n, struct zx_ff12_Assertion_s* z)
{
  struct zx_ff12_Assertion_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->ff12_Assertion->gg.g;
    x->ff12_Assertion = z;
    return;
  case -1:
    y = x->ff12_Assertion;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_ff12_Assertion_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->ff12_Assertion; n > 1 && y; --n, y = (struct zx_ff12_Assertion_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_wsse_Security_DEL_ff12_Assertion) */

void zx_wsse_Security_DEL_ff12_Assertion(struct zx_wsse_Security_s* x, int n)
{
  struct zx_ff12_Assertion_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->ff12_Assertion = (struct zx_ff12_Assertion_s*)x->ff12_Assertion->gg.g.n;
    return;
  case -1:
    y = (struct zx_ff12_Assertion_s*)x->ff12_Assertion;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_ff12_Assertion_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->ff12_Assertion; n > 1 && y->gg.g.n; --n, y = (struct zx_ff12_Assertion_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_wsse_Security_NUM_BinarySecurityToken) */

int zx_wsse_Security_NUM_BinarySecurityToken(struct zx_wsse_Security_s* x)
{
  struct zx_wsse_BinarySecurityToken_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->BinarySecurityToken; y; ++n, y = (struct zx_wsse_BinarySecurityToken_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_wsse_Security_GET_BinarySecurityToken) */

struct zx_wsse_BinarySecurityToken_s* zx_wsse_Security_GET_BinarySecurityToken(struct zx_wsse_Security_s* x, int n)
{
  struct zx_wsse_BinarySecurityToken_s* y;
  if (!x) return 0;
  for (y = x->BinarySecurityToken; n>=0 && y; --n, y = (struct zx_wsse_BinarySecurityToken_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_wsse_Security_POP_BinarySecurityToken) */

struct zx_wsse_BinarySecurityToken_s* zx_wsse_Security_POP_BinarySecurityToken(struct zx_wsse_Security_s* x)
{
  struct zx_wsse_BinarySecurityToken_s* y;
  if (!x) return 0;
  y = x->BinarySecurityToken;
  if (y)
    x->BinarySecurityToken = (struct zx_wsse_BinarySecurityToken_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_wsse_Security_PUSH_BinarySecurityToken) */

void zx_wsse_Security_PUSH_BinarySecurityToken(struct zx_wsse_Security_s* x, struct zx_wsse_BinarySecurityToken_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->BinarySecurityToken->gg.g;
  x->BinarySecurityToken = z;
}

/* FUNC(zx_wsse_Security_REV_BinarySecurityToken) */

void zx_wsse_Security_REV_BinarySecurityToken(struct zx_wsse_Security_s* x)
{
  struct zx_wsse_BinarySecurityToken_s* nxt;
  struct zx_wsse_BinarySecurityToken_s* y;
  if (!x) return;
  y = x->BinarySecurityToken;
  if (!y) return;
  x->BinarySecurityToken = 0;
  while (y) {
    nxt = (struct zx_wsse_BinarySecurityToken_s*)y->gg.g.n;
    y->gg.g.n = &x->BinarySecurityToken->gg.g;
    x->BinarySecurityToken = y;
    y = nxt;
  }
}

/* FUNC(zx_wsse_Security_PUT_BinarySecurityToken) */

void zx_wsse_Security_PUT_BinarySecurityToken(struct zx_wsse_Security_s* x, int n, struct zx_wsse_BinarySecurityToken_s* z)
{
  struct zx_wsse_BinarySecurityToken_s* y;
  if (!x || !z) return;
  y = x->BinarySecurityToken;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->BinarySecurityToken = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_wsse_BinarySecurityToken_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_wsse_Security_ADD_BinarySecurityToken) */

void zx_wsse_Security_ADD_BinarySecurityToken(struct zx_wsse_Security_s* x, int n, struct zx_wsse_BinarySecurityToken_s* z)
{
  struct zx_wsse_BinarySecurityToken_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->BinarySecurityToken->gg.g;
    x->BinarySecurityToken = z;
    return;
  case -1:
    y = x->BinarySecurityToken;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_wsse_BinarySecurityToken_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->BinarySecurityToken; n > 1 && y; --n, y = (struct zx_wsse_BinarySecurityToken_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_wsse_Security_DEL_BinarySecurityToken) */

void zx_wsse_Security_DEL_BinarySecurityToken(struct zx_wsse_Security_s* x, int n)
{
  struct zx_wsse_BinarySecurityToken_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->BinarySecurityToken = (struct zx_wsse_BinarySecurityToken_s*)x->BinarySecurityToken->gg.g.n;
    return;
  case -1:
    y = (struct zx_wsse_BinarySecurityToken_s*)x->BinarySecurityToken;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_wsse_BinarySecurityToken_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->BinarySecurityToken; n > 1 && y->gg.g.n; --n, y = (struct zx_wsse_BinarySecurityToken_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_wsse_Security_NUM_SecurityTokenReference) */

int zx_wsse_Security_NUM_SecurityTokenReference(struct zx_wsse_Security_s* x)
{
  struct zx_wsse_SecurityTokenReference_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->SecurityTokenReference; y; ++n, y = (struct zx_wsse_SecurityTokenReference_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_wsse_Security_GET_SecurityTokenReference) */

struct zx_wsse_SecurityTokenReference_s* zx_wsse_Security_GET_SecurityTokenReference(struct zx_wsse_Security_s* x, int n)
{
  struct zx_wsse_SecurityTokenReference_s* y;
  if (!x) return 0;
  for (y = x->SecurityTokenReference; n>=0 && y; --n, y = (struct zx_wsse_SecurityTokenReference_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_wsse_Security_POP_SecurityTokenReference) */

struct zx_wsse_SecurityTokenReference_s* zx_wsse_Security_POP_SecurityTokenReference(struct zx_wsse_Security_s* x)
{
  struct zx_wsse_SecurityTokenReference_s* y;
  if (!x) return 0;
  y = x->SecurityTokenReference;
  if (y)
    x->SecurityTokenReference = (struct zx_wsse_SecurityTokenReference_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_wsse_Security_PUSH_SecurityTokenReference) */

void zx_wsse_Security_PUSH_SecurityTokenReference(struct zx_wsse_Security_s* x, struct zx_wsse_SecurityTokenReference_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->SecurityTokenReference->gg.g;
  x->SecurityTokenReference = z;
}

/* FUNC(zx_wsse_Security_REV_SecurityTokenReference) */

void zx_wsse_Security_REV_SecurityTokenReference(struct zx_wsse_Security_s* x)
{
  struct zx_wsse_SecurityTokenReference_s* nxt;
  struct zx_wsse_SecurityTokenReference_s* y;
  if (!x) return;
  y = x->SecurityTokenReference;
  if (!y) return;
  x->SecurityTokenReference = 0;
  while (y) {
    nxt = (struct zx_wsse_SecurityTokenReference_s*)y->gg.g.n;
    y->gg.g.n = &x->SecurityTokenReference->gg.g;
    x->SecurityTokenReference = y;
    y = nxt;
  }
}

/* FUNC(zx_wsse_Security_PUT_SecurityTokenReference) */

void zx_wsse_Security_PUT_SecurityTokenReference(struct zx_wsse_Security_s* x, int n, struct zx_wsse_SecurityTokenReference_s* z)
{
  struct zx_wsse_SecurityTokenReference_s* y;
  if (!x || !z) return;
  y = x->SecurityTokenReference;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->SecurityTokenReference = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_wsse_SecurityTokenReference_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_wsse_Security_ADD_SecurityTokenReference) */

void zx_wsse_Security_ADD_SecurityTokenReference(struct zx_wsse_Security_s* x, int n, struct zx_wsse_SecurityTokenReference_s* z)
{
  struct zx_wsse_SecurityTokenReference_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->SecurityTokenReference->gg.g;
    x->SecurityTokenReference = z;
    return;
  case -1:
    y = x->SecurityTokenReference;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_wsse_SecurityTokenReference_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->SecurityTokenReference; n > 1 && y; --n, y = (struct zx_wsse_SecurityTokenReference_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_wsse_Security_DEL_SecurityTokenReference) */

void zx_wsse_Security_DEL_SecurityTokenReference(struct zx_wsse_Security_s* x, int n)
{
  struct zx_wsse_SecurityTokenReference_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->SecurityTokenReference = (struct zx_wsse_SecurityTokenReference_s*)x->SecurityTokenReference->gg.g.n;
    return;
  case -1:
    y = (struct zx_wsse_SecurityTokenReference_s*)x->SecurityTokenReference;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_wsse_SecurityTokenReference_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->SecurityTokenReference; n > 1 && y->gg.g.n; --n, y = (struct zx_wsse_SecurityTokenReference_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_wsse_Security_NUM_Timestamp) */

int zx_wsse_Security_NUM_Timestamp(struct zx_wsse_Security_s* x)
{
  struct zx_wsu_Timestamp_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Timestamp; y; ++n, y = (struct zx_wsu_Timestamp_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_wsse_Security_GET_Timestamp) */

struct zx_wsu_Timestamp_s* zx_wsse_Security_GET_Timestamp(struct zx_wsse_Security_s* x, int n)
{
  struct zx_wsu_Timestamp_s* y;
  if (!x) return 0;
  for (y = x->Timestamp; n>=0 && y; --n, y = (struct zx_wsu_Timestamp_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_wsse_Security_POP_Timestamp) */

struct zx_wsu_Timestamp_s* zx_wsse_Security_POP_Timestamp(struct zx_wsse_Security_s* x)
{
  struct zx_wsu_Timestamp_s* y;
  if (!x) return 0;
  y = x->Timestamp;
  if (y)
    x->Timestamp = (struct zx_wsu_Timestamp_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_wsse_Security_PUSH_Timestamp) */

void zx_wsse_Security_PUSH_Timestamp(struct zx_wsse_Security_s* x, struct zx_wsu_Timestamp_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Timestamp->gg.g;
  x->Timestamp = z;
}

/* FUNC(zx_wsse_Security_REV_Timestamp) */

void zx_wsse_Security_REV_Timestamp(struct zx_wsse_Security_s* x)
{
  struct zx_wsu_Timestamp_s* nxt;
  struct zx_wsu_Timestamp_s* y;
  if (!x) return;
  y = x->Timestamp;
  if (!y) return;
  x->Timestamp = 0;
  while (y) {
    nxt = (struct zx_wsu_Timestamp_s*)y->gg.g.n;
    y->gg.g.n = &x->Timestamp->gg.g;
    x->Timestamp = y;
    y = nxt;
  }
}

/* FUNC(zx_wsse_Security_PUT_Timestamp) */

void zx_wsse_Security_PUT_Timestamp(struct zx_wsse_Security_s* x, int n, struct zx_wsu_Timestamp_s* z)
{
  struct zx_wsu_Timestamp_s* y;
  if (!x || !z) return;
  y = x->Timestamp;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Timestamp = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_wsu_Timestamp_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_wsse_Security_ADD_Timestamp) */

void zx_wsse_Security_ADD_Timestamp(struct zx_wsse_Security_s* x, int n, struct zx_wsu_Timestamp_s* z)
{
  struct zx_wsu_Timestamp_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->Timestamp->gg.g;
    x->Timestamp = z;
    return;
  case -1:
    y = x->Timestamp;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_wsu_Timestamp_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Timestamp; n > 1 && y; --n, y = (struct zx_wsu_Timestamp_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_wsse_Security_DEL_Timestamp) */

void zx_wsse_Security_DEL_Timestamp(struct zx_wsse_Security_s* x, int n)
{
  struct zx_wsu_Timestamp_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Timestamp = (struct zx_wsu_Timestamp_s*)x->Timestamp->gg.g.n;
    return;
  case -1:
    y = (struct zx_wsu_Timestamp_s*)x->Timestamp;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_wsu_Timestamp_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Timestamp; n > 1 && y->gg.g.n; --n, y = (struct zx_wsu_Timestamp_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif

/* FUNC(zx_wsse_Security_GET_Id) */
struct zx_str* zx_wsse_Security_GET_Id(struct zx_wsse_Security_s* x) { return x->Id; }
/* FUNC(zx_wsse_Security_PUT_Id) */
void zx_wsse_Security_PUT_Id(struct zx_wsse_Security_s* x, struct zx_str* y) { x->Id = y; }
/* FUNC(zx_wsse_Security_GET_actor) */
struct zx_str* zx_wsse_Security_GET_actor(struct zx_wsse_Security_s* x) { return x->actor; }
/* FUNC(zx_wsse_Security_PUT_actor) */
void zx_wsse_Security_PUT_actor(struct zx_wsse_Security_s* x, struct zx_str* y) { x->actor = y; }
/* FUNC(zx_wsse_Security_GET_mustUnderstand) */
struct zx_str* zx_wsse_Security_GET_mustUnderstand(struct zx_wsse_Security_s* x) { return x->mustUnderstand; }
/* FUNC(zx_wsse_Security_PUT_mustUnderstand) */
void zx_wsse_Security_PUT_mustUnderstand(struct zx_wsse_Security_s* x, struct zx_str* y) { x->mustUnderstand = y; }







#ifdef ZX_ENA_GETPUT

/* FUNC(zx_wsse_SecurityTokenReference_NUM_KeyIdentifier) */

int zx_wsse_SecurityTokenReference_NUM_KeyIdentifier(struct zx_wsse_SecurityTokenReference_s* x)
{
  struct zx_wsse_KeyIdentifier_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->KeyIdentifier; y; ++n, y = (struct zx_wsse_KeyIdentifier_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_wsse_SecurityTokenReference_GET_KeyIdentifier) */

struct zx_wsse_KeyIdentifier_s* zx_wsse_SecurityTokenReference_GET_KeyIdentifier(struct zx_wsse_SecurityTokenReference_s* x, int n)
{
  struct zx_wsse_KeyIdentifier_s* y;
  if (!x) return 0;
  for (y = x->KeyIdentifier; n>=0 && y; --n, y = (struct zx_wsse_KeyIdentifier_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_wsse_SecurityTokenReference_POP_KeyIdentifier) */

struct zx_wsse_KeyIdentifier_s* zx_wsse_SecurityTokenReference_POP_KeyIdentifier(struct zx_wsse_SecurityTokenReference_s* x)
{
  struct zx_wsse_KeyIdentifier_s* y;
  if (!x) return 0;
  y = x->KeyIdentifier;
  if (y)
    x->KeyIdentifier = (struct zx_wsse_KeyIdentifier_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_wsse_SecurityTokenReference_PUSH_KeyIdentifier) */

void zx_wsse_SecurityTokenReference_PUSH_KeyIdentifier(struct zx_wsse_SecurityTokenReference_s* x, struct zx_wsse_KeyIdentifier_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->KeyIdentifier->gg.g;
  x->KeyIdentifier = z;
}

/* FUNC(zx_wsse_SecurityTokenReference_REV_KeyIdentifier) */

void zx_wsse_SecurityTokenReference_REV_KeyIdentifier(struct zx_wsse_SecurityTokenReference_s* x)
{
  struct zx_wsse_KeyIdentifier_s* nxt;
  struct zx_wsse_KeyIdentifier_s* y;
  if (!x) return;
  y = x->KeyIdentifier;
  if (!y) return;
  x->KeyIdentifier = 0;
  while (y) {
    nxt = (struct zx_wsse_KeyIdentifier_s*)y->gg.g.n;
    y->gg.g.n = &x->KeyIdentifier->gg.g;
    x->KeyIdentifier = y;
    y = nxt;
  }
}

/* FUNC(zx_wsse_SecurityTokenReference_PUT_KeyIdentifier) */

void zx_wsse_SecurityTokenReference_PUT_KeyIdentifier(struct zx_wsse_SecurityTokenReference_s* x, int n, struct zx_wsse_KeyIdentifier_s* z)
{
  struct zx_wsse_KeyIdentifier_s* y;
  if (!x || !z) return;
  y = x->KeyIdentifier;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->KeyIdentifier = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_wsse_KeyIdentifier_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_wsse_SecurityTokenReference_ADD_KeyIdentifier) */

void zx_wsse_SecurityTokenReference_ADD_KeyIdentifier(struct zx_wsse_SecurityTokenReference_s* x, int n, struct zx_wsse_KeyIdentifier_s* z)
{
  struct zx_wsse_KeyIdentifier_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->KeyIdentifier->gg.g;
    x->KeyIdentifier = z;
    return;
  case -1:
    y = x->KeyIdentifier;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_wsse_KeyIdentifier_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->KeyIdentifier; n > 1 && y; --n, y = (struct zx_wsse_KeyIdentifier_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_wsse_SecurityTokenReference_DEL_KeyIdentifier) */

void zx_wsse_SecurityTokenReference_DEL_KeyIdentifier(struct zx_wsse_SecurityTokenReference_s* x, int n)
{
  struct zx_wsse_KeyIdentifier_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->KeyIdentifier = (struct zx_wsse_KeyIdentifier_s*)x->KeyIdentifier->gg.g.n;
    return;
  case -1:
    y = (struct zx_wsse_KeyIdentifier_s*)x->KeyIdentifier;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_wsse_KeyIdentifier_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->KeyIdentifier; n > 1 && y->gg.g.n; --n, y = (struct zx_wsse_KeyIdentifier_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif

/* FUNC(zx_wsse_SecurityTokenReference_GET_Usage) */
struct zx_str* zx_wsse_SecurityTokenReference_GET_Usage(struct zx_wsse_SecurityTokenReference_s* x) { return x->Usage; }
/* FUNC(zx_wsse_SecurityTokenReference_PUT_Usage) */
void zx_wsse_SecurityTokenReference_PUT_Usage(struct zx_wsse_SecurityTokenReference_s* x, struct zx_str* y) { x->Usage = y; }
/* FUNC(zx_wsse_SecurityTokenReference_GET_Id) */
struct zx_str* zx_wsse_SecurityTokenReference_GET_Id(struct zx_wsse_SecurityTokenReference_s* x) { return x->Id; }
/* FUNC(zx_wsse_SecurityTokenReference_PUT_Id) */
void zx_wsse_SecurityTokenReference_PUT_Id(struct zx_wsse_SecurityTokenReference_s* x, struct zx_str* y) { x->Id = y; }










/* FUNC(zx_wsse_Username_GET_Id) */
struct zx_str* zx_wsse_Username_GET_Id(struct zx_wsse_Username_s* x) { return x->Id; }
/* FUNC(zx_wsse_Username_PUT_Id) */
void zx_wsse_Username_PUT_Id(struct zx_wsse_Username_s* x, struct zx_str* y) { x->Id = y; }







#ifdef ZX_ENA_GETPUT

/* FUNC(zx_wsse_UsernameToken_NUM_Username) */

int zx_wsse_UsernameToken_NUM_Username(struct zx_wsse_UsernameToken_s* x)
{
  struct zx_wsse_Username_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Username; y; ++n, y = (struct zx_wsse_Username_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_wsse_UsernameToken_GET_Username) */

struct zx_wsse_Username_s* zx_wsse_UsernameToken_GET_Username(struct zx_wsse_UsernameToken_s* x, int n)
{
  struct zx_wsse_Username_s* y;
  if (!x) return 0;
  for (y = x->Username; n>=0 && y; --n, y = (struct zx_wsse_Username_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_wsse_UsernameToken_POP_Username) */

struct zx_wsse_Username_s* zx_wsse_UsernameToken_POP_Username(struct zx_wsse_UsernameToken_s* x)
{
  struct zx_wsse_Username_s* y;
  if (!x) return 0;
  y = x->Username;
  if (y)
    x->Username = (struct zx_wsse_Username_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_wsse_UsernameToken_PUSH_Username) */

void zx_wsse_UsernameToken_PUSH_Username(struct zx_wsse_UsernameToken_s* x, struct zx_wsse_Username_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Username->gg.g;
  x->Username = z;
}

/* FUNC(zx_wsse_UsernameToken_REV_Username) */

void zx_wsse_UsernameToken_REV_Username(struct zx_wsse_UsernameToken_s* x)
{
  struct zx_wsse_Username_s* nxt;
  struct zx_wsse_Username_s* y;
  if (!x) return;
  y = x->Username;
  if (!y) return;
  x->Username = 0;
  while (y) {
    nxt = (struct zx_wsse_Username_s*)y->gg.g.n;
    y->gg.g.n = &x->Username->gg.g;
    x->Username = y;
    y = nxt;
  }
}

/* FUNC(zx_wsse_UsernameToken_PUT_Username) */

void zx_wsse_UsernameToken_PUT_Username(struct zx_wsse_UsernameToken_s* x, int n, struct zx_wsse_Username_s* z)
{
  struct zx_wsse_Username_s* y;
  if (!x || !z) return;
  y = x->Username;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Username = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_wsse_Username_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_wsse_UsernameToken_ADD_Username) */

void zx_wsse_UsernameToken_ADD_Username(struct zx_wsse_UsernameToken_s* x, int n, struct zx_wsse_Username_s* z)
{
  struct zx_wsse_Username_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->Username->gg.g;
    x->Username = z;
    return;
  case -1:
    y = x->Username;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_wsse_Username_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Username; n > 1 && y; --n, y = (struct zx_wsse_Username_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_wsse_UsernameToken_DEL_Username) */

void zx_wsse_UsernameToken_DEL_Username(struct zx_wsse_UsernameToken_s* x, int n)
{
  struct zx_wsse_Username_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Username = (struct zx_wsse_Username_s*)x->Username->gg.g.n;
    return;
  case -1:
    y = (struct zx_wsse_Username_s*)x->Username;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_wsse_Username_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Username; n > 1 && y->gg.g.n; --n, y = (struct zx_wsse_Username_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif

/* FUNC(zx_wsse_UsernameToken_GET_Id) */
struct zx_str* zx_wsse_UsernameToken_GET_Id(struct zx_wsse_UsernameToken_s* x) { return x->Id; }
/* FUNC(zx_wsse_UsernameToken_PUT_Id) */
void zx_wsse_UsernameToken_PUT_Id(struct zx_wsse_UsernameToken_s* x, struct zx_str* y) { x->Id = y; }





/* EOF -- c/zx-wsse-getput.c */
