/* c/zx-cb-getput.c - WARNING: This file was automatically generated. DO NOT EDIT!
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
#include "c/zx-cb-data.h"

/* FUNC(zx_cb_By_GET_sortAlg) */
struct zx_str* zx_cb_By_GET_sortAlg(struct zx_cb_By_s* x) { return x->sortAlg; }
/* FUNC(zx_cb_By_PUT_sortAlg) */
void zx_cb_By_PUT_sortAlg(struct zx_cb_By_s* x, struct zx_str* y) { x->sortAlg = y; }
/* FUNC(zx_cb_By_GET_sortWeight) */
struct zx_str* zx_cb_By_GET_sortWeight(struct zx_cb_By_s* x) { return x->sortWeight; }
/* FUNC(zx_cb_By_PUT_sortWeight) */
void zx_cb_By_PUT_sortWeight(struct zx_cb_By_s* x, struct zx_str* y) { x->sortWeight = y; }







#ifdef ZX_ENA_GETPUT

/* FUNC(zx_cb_Create_NUM_ResourceID) */

int zx_cb_Create_NUM_ResourceID(struct zx_cb_Create_s* x)
{
  struct zx_cb_ResourceID_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->ResourceID; y; ++n, y = (struct zx_cb_ResourceID_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_cb_Create_GET_ResourceID) */

struct zx_cb_ResourceID_s* zx_cb_Create_GET_ResourceID(struct zx_cb_Create_s* x, int n)
{
  struct zx_cb_ResourceID_s* y;
  if (!x) return 0;
  for (y = x->ResourceID; n>=0 && y; --n, y = (struct zx_cb_ResourceID_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_cb_Create_POP_ResourceID) */

struct zx_cb_ResourceID_s* zx_cb_Create_POP_ResourceID(struct zx_cb_Create_s* x)
{
  struct zx_cb_ResourceID_s* y;
  if (!x) return 0;
  y = x->ResourceID;
  if (y)
    x->ResourceID = (struct zx_cb_ResourceID_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_cb_Create_PUSH_ResourceID) */

void zx_cb_Create_PUSH_ResourceID(struct zx_cb_Create_s* x, struct zx_cb_ResourceID_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->ResourceID->gg.g;
  x->ResourceID = z;
}

/* FUNC(zx_cb_Create_REV_ResourceID) */

void zx_cb_Create_REV_ResourceID(struct zx_cb_Create_s* x)
{
  struct zx_cb_ResourceID_s* nxt;
  struct zx_cb_ResourceID_s* y;
  if (!x) return;
  y = x->ResourceID;
  if (!y) return;
  x->ResourceID = 0;
  while (y) {
    nxt = (struct zx_cb_ResourceID_s*)y->gg.g.n;
    y->gg.g.n = &x->ResourceID->gg.g;
    x->ResourceID = y;
    y = nxt;
  }
}

/* FUNC(zx_cb_Create_PUT_ResourceID) */

void zx_cb_Create_PUT_ResourceID(struct zx_cb_Create_s* x, int n, struct zx_cb_ResourceID_s* z)
{
  struct zx_cb_ResourceID_s* y;
  if (!x || !z) return;
  y = x->ResourceID;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->ResourceID = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_cb_ResourceID_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_cb_Create_ADD_ResourceID) */

void zx_cb_Create_ADD_ResourceID(struct zx_cb_Create_s* x, int n, struct zx_cb_ResourceID_s* z)
{
  struct zx_cb_ResourceID_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->ResourceID->gg.g;
    x->ResourceID = z;
    return;
  case -1:
    y = x->ResourceID;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_cb_ResourceID_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->ResourceID; n > 1 && y; --n, y = (struct zx_cb_ResourceID_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_cb_Create_DEL_ResourceID) */

void zx_cb_Create_DEL_ResourceID(struct zx_cb_Create_s* x, int n)
{
  struct zx_cb_ResourceID_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->ResourceID = (struct zx_cb_ResourceID_s*)x->ResourceID->gg.g.n;
    return;
  case -1:
    y = (struct zx_cb_ResourceID_s*)x->ResourceID;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_cb_ResourceID_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->ResourceID; n > 1 && y->gg.g.n; --n, y = (struct zx_cb_ResourceID_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_cb_Create_NUM_EncryptedResourceID) */

int zx_cb_Create_NUM_EncryptedResourceID(struct zx_cb_Create_s* x)
{
  struct zx_cb_EncryptedResourceID_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->EncryptedResourceID; y; ++n, y = (struct zx_cb_EncryptedResourceID_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_cb_Create_GET_EncryptedResourceID) */

struct zx_cb_EncryptedResourceID_s* zx_cb_Create_GET_EncryptedResourceID(struct zx_cb_Create_s* x, int n)
{
  struct zx_cb_EncryptedResourceID_s* y;
  if (!x) return 0;
  for (y = x->EncryptedResourceID; n>=0 && y; --n, y = (struct zx_cb_EncryptedResourceID_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_cb_Create_POP_EncryptedResourceID) */

struct zx_cb_EncryptedResourceID_s* zx_cb_Create_POP_EncryptedResourceID(struct zx_cb_Create_s* x)
{
  struct zx_cb_EncryptedResourceID_s* y;
  if (!x) return 0;
  y = x->EncryptedResourceID;
  if (y)
    x->EncryptedResourceID = (struct zx_cb_EncryptedResourceID_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_cb_Create_PUSH_EncryptedResourceID) */

void zx_cb_Create_PUSH_EncryptedResourceID(struct zx_cb_Create_s* x, struct zx_cb_EncryptedResourceID_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->EncryptedResourceID->gg.g;
  x->EncryptedResourceID = z;
}

/* FUNC(zx_cb_Create_REV_EncryptedResourceID) */

void zx_cb_Create_REV_EncryptedResourceID(struct zx_cb_Create_s* x)
{
  struct zx_cb_EncryptedResourceID_s* nxt;
  struct zx_cb_EncryptedResourceID_s* y;
  if (!x) return;
  y = x->EncryptedResourceID;
  if (!y) return;
  x->EncryptedResourceID = 0;
  while (y) {
    nxt = (struct zx_cb_EncryptedResourceID_s*)y->gg.g.n;
    y->gg.g.n = &x->EncryptedResourceID->gg.g;
    x->EncryptedResourceID = y;
    y = nxt;
  }
}

/* FUNC(zx_cb_Create_PUT_EncryptedResourceID) */

void zx_cb_Create_PUT_EncryptedResourceID(struct zx_cb_Create_s* x, int n, struct zx_cb_EncryptedResourceID_s* z)
{
  struct zx_cb_EncryptedResourceID_s* y;
  if (!x || !z) return;
  y = x->EncryptedResourceID;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->EncryptedResourceID = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_cb_EncryptedResourceID_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_cb_Create_ADD_EncryptedResourceID) */

void zx_cb_Create_ADD_EncryptedResourceID(struct zx_cb_Create_s* x, int n, struct zx_cb_EncryptedResourceID_s* z)
{
  struct zx_cb_EncryptedResourceID_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->EncryptedResourceID->gg.g;
    x->EncryptedResourceID = z;
    return;
  case -1:
    y = x->EncryptedResourceID;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_cb_EncryptedResourceID_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->EncryptedResourceID; n > 1 && y; --n, y = (struct zx_cb_EncryptedResourceID_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_cb_Create_DEL_EncryptedResourceID) */

void zx_cb_Create_DEL_EncryptedResourceID(struct zx_cb_Create_s* x, int n)
{
  struct zx_cb_EncryptedResourceID_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->EncryptedResourceID = (struct zx_cb_EncryptedResourceID_s*)x->EncryptedResourceID->gg.g.n;
    return;
  case -1:
    y = (struct zx_cb_EncryptedResourceID_s*)x->EncryptedResourceID;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_cb_EncryptedResourceID_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->EncryptedResourceID; n > 1 && y->gg.g.n; --n, y = (struct zx_cb_EncryptedResourceID_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_cb_Create_NUM_Subscription) */

int zx_cb_Create_NUM_Subscription(struct zx_cb_Create_s* x)
{
  struct zx_cb_Subscription_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Subscription; y; ++n, y = (struct zx_cb_Subscription_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_cb_Create_GET_Subscription) */

struct zx_cb_Subscription_s* zx_cb_Create_GET_Subscription(struct zx_cb_Create_s* x, int n)
{
  struct zx_cb_Subscription_s* y;
  if (!x) return 0;
  for (y = x->Subscription; n>=0 && y; --n, y = (struct zx_cb_Subscription_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_cb_Create_POP_Subscription) */

struct zx_cb_Subscription_s* zx_cb_Create_POP_Subscription(struct zx_cb_Create_s* x)
{
  struct zx_cb_Subscription_s* y;
  if (!x) return 0;
  y = x->Subscription;
  if (y)
    x->Subscription = (struct zx_cb_Subscription_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_cb_Create_PUSH_Subscription) */

void zx_cb_Create_PUSH_Subscription(struct zx_cb_Create_s* x, struct zx_cb_Subscription_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Subscription->gg.g;
  x->Subscription = z;
}

/* FUNC(zx_cb_Create_REV_Subscription) */

void zx_cb_Create_REV_Subscription(struct zx_cb_Create_s* x)
{
  struct zx_cb_Subscription_s* nxt;
  struct zx_cb_Subscription_s* y;
  if (!x) return;
  y = x->Subscription;
  if (!y) return;
  x->Subscription = 0;
  while (y) {
    nxt = (struct zx_cb_Subscription_s*)y->gg.g.n;
    y->gg.g.n = &x->Subscription->gg.g;
    x->Subscription = y;
    y = nxt;
  }
}

/* FUNC(zx_cb_Create_PUT_Subscription) */

void zx_cb_Create_PUT_Subscription(struct zx_cb_Create_s* x, int n, struct zx_cb_Subscription_s* z)
{
  struct zx_cb_Subscription_s* y;
  if (!x || !z) return;
  y = x->Subscription;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Subscription = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_cb_Subscription_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_cb_Create_ADD_Subscription) */

void zx_cb_Create_ADD_Subscription(struct zx_cb_Create_s* x, int n, struct zx_cb_Subscription_s* z)
{
  struct zx_cb_Subscription_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->Subscription->gg.g;
    x->Subscription = z;
    return;
  case -1:
    y = x->Subscription;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_cb_Subscription_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Subscription; n > 1 && y; --n, y = (struct zx_cb_Subscription_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_cb_Create_DEL_Subscription) */

void zx_cb_Create_DEL_Subscription(struct zx_cb_Create_s* x, int n)
{
  struct zx_cb_Subscription_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Subscription = (struct zx_cb_Subscription_s*)x->Subscription->gg.g.n;
    return;
  case -1:
    y = (struct zx_cb_Subscription_s*)x->Subscription;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_cb_Subscription_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Subscription; n > 1 && y->gg.g.n; --n, y = (struct zx_cb_Subscription_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_cb_Create_NUM_CreateItem) */

int zx_cb_Create_NUM_CreateItem(struct zx_cb_Create_s* x)
{
  struct zx_cb_CreateItem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->CreateItem; y; ++n, y = (struct zx_cb_CreateItem_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_cb_Create_GET_CreateItem) */

struct zx_cb_CreateItem_s* zx_cb_Create_GET_CreateItem(struct zx_cb_Create_s* x, int n)
{
  struct zx_cb_CreateItem_s* y;
  if (!x) return 0;
  for (y = x->CreateItem; n>=0 && y; --n, y = (struct zx_cb_CreateItem_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_cb_Create_POP_CreateItem) */

struct zx_cb_CreateItem_s* zx_cb_Create_POP_CreateItem(struct zx_cb_Create_s* x)
{
  struct zx_cb_CreateItem_s* y;
  if (!x) return 0;
  y = x->CreateItem;
  if (y)
    x->CreateItem = (struct zx_cb_CreateItem_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_cb_Create_PUSH_CreateItem) */

void zx_cb_Create_PUSH_CreateItem(struct zx_cb_Create_s* x, struct zx_cb_CreateItem_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->CreateItem->gg.g;
  x->CreateItem = z;
}

/* FUNC(zx_cb_Create_REV_CreateItem) */

void zx_cb_Create_REV_CreateItem(struct zx_cb_Create_s* x)
{
  struct zx_cb_CreateItem_s* nxt;
  struct zx_cb_CreateItem_s* y;
  if (!x) return;
  y = x->CreateItem;
  if (!y) return;
  x->CreateItem = 0;
  while (y) {
    nxt = (struct zx_cb_CreateItem_s*)y->gg.g.n;
    y->gg.g.n = &x->CreateItem->gg.g;
    x->CreateItem = y;
    y = nxt;
  }
}

/* FUNC(zx_cb_Create_PUT_CreateItem) */

void zx_cb_Create_PUT_CreateItem(struct zx_cb_Create_s* x, int n, struct zx_cb_CreateItem_s* z)
{
  struct zx_cb_CreateItem_s* y;
  if (!x || !z) return;
  y = x->CreateItem;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->CreateItem = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_cb_CreateItem_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_cb_Create_ADD_CreateItem) */

void zx_cb_Create_ADD_CreateItem(struct zx_cb_Create_s* x, int n, struct zx_cb_CreateItem_s* z)
{
  struct zx_cb_CreateItem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->CreateItem->gg.g;
    x->CreateItem = z;
    return;
  case -1:
    y = x->CreateItem;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_cb_CreateItem_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->CreateItem; n > 1 && y; --n, y = (struct zx_cb_CreateItem_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_cb_Create_DEL_CreateItem) */

void zx_cb_Create_DEL_CreateItem(struct zx_cb_Create_s* x, int n)
{
  struct zx_cb_CreateItem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->CreateItem = (struct zx_cb_CreateItem_s*)x->CreateItem->gg.g.n;
    return;
  case -1:
    y = (struct zx_cb_CreateItem_s*)x->CreateItem;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_cb_CreateItem_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->CreateItem; n > 1 && y->gg.g.n; --n, y = (struct zx_cb_CreateItem_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_cb_Create_NUM_ItemSelection) */

int zx_cb_Create_NUM_ItemSelection(struct zx_cb_Create_s* x)
{
  struct zx_cb_ItemSelection_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->ItemSelection; y; ++n, y = (struct zx_cb_ItemSelection_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_cb_Create_GET_ItemSelection) */

struct zx_cb_ItemSelection_s* zx_cb_Create_GET_ItemSelection(struct zx_cb_Create_s* x, int n)
{
  struct zx_cb_ItemSelection_s* y;
  if (!x) return 0;
  for (y = x->ItemSelection; n>=0 && y; --n, y = (struct zx_cb_ItemSelection_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_cb_Create_POP_ItemSelection) */

struct zx_cb_ItemSelection_s* zx_cb_Create_POP_ItemSelection(struct zx_cb_Create_s* x)
{
  struct zx_cb_ItemSelection_s* y;
  if (!x) return 0;
  y = x->ItemSelection;
  if (y)
    x->ItemSelection = (struct zx_cb_ItemSelection_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_cb_Create_PUSH_ItemSelection) */

void zx_cb_Create_PUSH_ItemSelection(struct zx_cb_Create_s* x, struct zx_cb_ItemSelection_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->ItemSelection->gg.g;
  x->ItemSelection = z;
}

/* FUNC(zx_cb_Create_REV_ItemSelection) */

void zx_cb_Create_REV_ItemSelection(struct zx_cb_Create_s* x)
{
  struct zx_cb_ItemSelection_s* nxt;
  struct zx_cb_ItemSelection_s* y;
  if (!x) return;
  y = x->ItemSelection;
  if (!y) return;
  x->ItemSelection = 0;
  while (y) {
    nxt = (struct zx_cb_ItemSelection_s*)y->gg.g.n;
    y->gg.g.n = &x->ItemSelection->gg.g;
    x->ItemSelection = y;
    y = nxt;
  }
}

/* FUNC(zx_cb_Create_PUT_ItemSelection) */

void zx_cb_Create_PUT_ItemSelection(struct zx_cb_Create_s* x, int n, struct zx_cb_ItemSelection_s* z)
{
  struct zx_cb_ItemSelection_s* y;
  if (!x || !z) return;
  y = x->ItemSelection;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->ItemSelection = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_cb_ItemSelection_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_cb_Create_ADD_ItemSelection) */

void zx_cb_Create_ADD_ItemSelection(struct zx_cb_Create_s* x, int n, struct zx_cb_ItemSelection_s* z)
{
  struct zx_cb_ItemSelection_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->ItemSelection->gg.g;
    x->ItemSelection = z;
    return;
  case -1:
    y = x->ItemSelection;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_cb_ItemSelection_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->ItemSelection; n > 1 && y; --n, y = (struct zx_cb_ItemSelection_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_cb_Create_DEL_ItemSelection) */

void zx_cb_Create_DEL_ItemSelection(struct zx_cb_Create_s* x, int n)
{
  struct zx_cb_ItemSelection_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->ItemSelection = (struct zx_cb_ItemSelection_s*)x->ItemSelection->gg.g.n;
    return;
  case -1:
    y = (struct zx_cb_ItemSelection_s*)x->ItemSelection;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_cb_ItemSelection_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->ItemSelection; n > 1 && y->gg.g.n; --n, y = (struct zx_cb_ItemSelection_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_cb_Create_NUM_Extension) */

int zx_cb_Create_NUM_Extension(struct zx_cb_Create_s* x)
{
  struct zx_cb_Extension_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Extension; y; ++n, y = (struct zx_cb_Extension_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_cb_Create_GET_Extension) */

struct zx_cb_Extension_s* zx_cb_Create_GET_Extension(struct zx_cb_Create_s* x, int n)
{
  struct zx_cb_Extension_s* y;
  if (!x) return 0;
  for (y = x->Extension; n>=0 && y; --n, y = (struct zx_cb_Extension_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_cb_Create_POP_Extension) */

struct zx_cb_Extension_s* zx_cb_Create_POP_Extension(struct zx_cb_Create_s* x)
{
  struct zx_cb_Extension_s* y;
  if (!x) return 0;
  y = x->Extension;
  if (y)
    x->Extension = (struct zx_cb_Extension_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_cb_Create_PUSH_Extension) */

void zx_cb_Create_PUSH_Extension(struct zx_cb_Create_s* x, struct zx_cb_Extension_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Extension->gg.g;
  x->Extension = z;
}

/* FUNC(zx_cb_Create_REV_Extension) */

void zx_cb_Create_REV_Extension(struct zx_cb_Create_s* x)
{
  struct zx_cb_Extension_s* nxt;
  struct zx_cb_Extension_s* y;
  if (!x) return;
  y = x->Extension;
  if (!y) return;
  x->Extension = 0;
  while (y) {
    nxt = (struct zx_cb_Extension_s*)y->gg.g.n;
    y->gg.g.n = &x->Extension->gg.g;
    x->Extension = y;
    y = nxt;
  }
}

/* FUNC(zx_cb_Create_PUT_Extension) */

void zx_cb_Create_PUT_Extension(struct zx_cb_Create_s* x, int n, struct zx_cb_Extension_s* z)
{
  struct zx_cb_Extension_s* y;
  if (!x || !z) return;
  y = x->Extension;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Extension = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_cb_Extension_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_cb_Create_ADD_Extension) */

void zx_cb_Create_ADD_Extension(struct zx_cb_Create_s* x, int n, struct zx_cb_Extension_s* z)
{
  struct zx_cb_Extension_s* y;
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
    for (; y->gg.g.n; y = (struct zx_cb_Extension_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Extension; n > 1 && y; --n, y = (struct zx_cb_Extension_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_cb_Create_DEL_Extension) */

void zx_cb_Create_DEL_Extension(struct zx_cb_Create_s* x, int n)
{
  struct zx_cb_Extension_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Extension = (struct zx_cb_Extension_s*)x->Extension->gg.g.n;
    return;
  case -1:
    y = (struct zx_cb_Extension_s*)x->Extension;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_cb_Extension_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Extension; n > 1 && y->gg.g.n; --n, y = (struct zx_cb_Extension_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif

/* FUNC(zx_cb_Create_GET_id) */
struct zx_str* zx_cb_Create_GET_id(struct zx_cb_Create_s* x) { return x->id; }
/* FUNC(zx_cb_Create_PUT_id) */
void zx_cb_Create_PUT_id(struct zx_cb_Create_s* x, struct zx_str* y) { x->id = y; }







#ifdef ZX_ENA_GETPUT

/* FUNC(zx_cb_CreateItem_NUM_NewData) */

int zx_cb_CreateItem_NUM_NewData(struct zx_cb_CreateItem_s* x)
{
  struct zx_cb_NewData_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->NewData; y; ++n, y = (struct zx_cb_NewData_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_cb_CreateItem_GET_NewData) */

struct zx_cb_NewData_s* zx_cb_CreateItem_GET_NewData(struct zx_cb_CreateItem_s* x, int n)
{
  struct zx_cb_NewData_s* y;
  if (!x) return 0;
  for (y = x->NewData; n>=0 && y; --n, y = (struct zx_cb_NewData_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_cb_CreateItem_POP_NewData) */

struct zx_cb_NewData_s* zx_cb_CreateItem_POP_NewData(struct zx_cb_CreateItem_s* x)
{
  struct zx_cb_NewData_s* y;
  if (!x) return 0;
  y = x->NewData;
  if (y)
    x->NewData = (struct zx_cb_NewData_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_cb_CreateItem_PUSH_NewData) */

void zx_cb_CreateItem_PUSH_NewData(struct zx_cb_CreateItem_s* x, struct zx_cb_NewData_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->NewData->gg.g;
  x->NewData = z;
}

/* FUNC(zx_cb_CreateItem_REV_NewData) */

void zx_cb_CreateItem_REV_NewData(struct zx_cb_CreateItem_s* x)
{
  struct zx_cb_NewData_s* nxt;
  struct zx_cb_NewData_s* y;
  if (!x) return;
  y = x->NewData;
  if (!y) return;
  x->NewData = 0;
  while (y) {
    nxt = (struct zx_cb_NewData_s*)y->gg.g.n;
    y->gg.g.n = &x->NewData->gg.g;
    x->NewData = y;
    y = nxt;
  }
}

/* FUNC(zx_cb_CreateItem_PUT_NewData) */

void zx_cb_CreateItem_PUT_NewData(struct zx_cb_CreateItem_s* x, int n, struct zx_cb_NewData_s* z)
{
  struct zx_cb_NewData_s* y;
  if (!x || !z) return;
  y = x->NewData;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->NewData = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_cb_NewData_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_cb_CreateItem_ADD_NewData) */

void zx_cb_CreateItem_ADD_NewData(struct zx_cb_CreateItem_s* x, int n, struct zx_cb_NewData_s* z)
{
  struct zx_cb_NewData_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->NewData->gg.g;
    x->NewData = z;
    return;
  case -1:
    y = x->NewData;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_cb_NewData_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->NewData; n > 1 && y; --n, y = (struct zx_cb_NewData_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_cb_CreateItem_DEL_NewData) */

void zx_cb_CreateItem_DEL_NewData(struct zx_cb_CreateItem_s* x, int n)
{
  struct zx_cb_NewData_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->NewData = (struct zx_cb_NewData_s*)x->NewData->gg.g.n;
    return;
  case -1:
    y = (struct zx_cb_NewData_s*)x->NewData;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_cb_NewData_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->NewData; n > 1 && y->gg.g.n; --n, y = (struct zx_cb_NewData_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif

/* FUNC(zx_cb_CreateItem_GET_id) */
struct zx_str* zx_cb_CreateItem_GET_id(struct zx_cb_CreateItem_s* x) { return x->id; }
/* FUNC(zx_cb_CreateItem_PUT_id) */
void zx_cb_CreateItem_PUT_id(struct zx_cb_CreateItem_s* x, struct zx_str* y) { x->id = y; }
/* FUNC(zx_cb_CreateItem_GET_itemID) */
struct zx_str* zx_cb_CreateItem_GET_itemID(struct zx_cb_CreateItem_s* x) { return x->itemID; }
/* FUNC(zx_cb_CreateItem_PUT_itemID) */
void zx_cb_CreateItem_PUT_itemID(struct zx_cb_CreateItem_s* x, struct zx_str* y) { x->itemID = y; }
/* FUNC(zx_cb_CreateItem_GET_objectType) */
struct zx_str* zx_cb_CreateItem_GET_objectType(struct zx_cb_CreateItem_s* x) { return x->objectType; }
/* FUNC(zx_cb_CreateItem_PUT_objectType) */
void zx_cb_CreateItem_PUT_objectType(struct zx_cb_CreateItem_s* x, struct zx_str* y) { x->objectType = y; }







#ifdef ZX_ENA_GETPUT

/* FUNC(zx_cb_CreateResponse_NUM_Status) */

int zx_cb_CreateResponse_NUM_Status(struct zx_cb_CreateResponse_s* x)
{
  struct zx_cb_Status_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Status; y; ++n, y = (struct zx_cb_Status_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_cb_CreateResponse_GET_Status) */

struct zx_cb_Status_s* zx_cb_CreateResponse_GET_Status(struct zx_cb_CreateResponse_s* x, int n)
{
  struct zx_cb_Status_s* y;
  if (!x) return 0;
  for (y = x->Status; n>=0 && y; --n, y = (struct zx_cb_Status_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_cb_CreateResponse_POP_Status) */

struct zx_cb_Status_s* zx_cb_CreateResponse_POP_Status(struct zx_cb_CreateResponse_s* x)
{
  struct zx_cb_Status_s* y;
  if (!x) return 0;
  y = x->Status;
  if (y)
    x->Status = (struct zx_cb_Status_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_cb_CreateResponse_PUSH_Status) */

void zx_cb_CreateResponse_PUSH_Status(struct zx_cb_CreateResponse_s* x, struct zx_cb_Status_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Status->gg.g;
  x->Status = z;
}

/* FUNC(zx_cb_CreateResponse_REV_Status) */

void zx_cb_CreateResponse_REV_Status(struct zx_cb_CreateResponse_s* x)
{
  struct zx_cb_Status_s* nxt;
  struct zx_cb_Status_s* y;
  if (!x) return;
  y = x->Status;
  if (!y) return;
  x->Status = 0;
  while (y) {
    nxt = (struct zx_cb_Status_s*)y->gg.g.n;
    y->gg.g.n = &x->Status->gg.g;
    x->Status = y;
    y = nxt;
  }
}

/* FUNC(zx_cb_CreateResponse_PUT_Status) */

void zx_cb_CreateResponse_PUT_Status(struct zx_cb_CreateResponse_s* x, int n, struct zx_cb_Status_s* z)
{
  struct zx_cb_Status_s* y;
  if (!x || !z) return;
  y = x->Status;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Status = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_cb_Status_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_cb_CreateResponse_ADD_Status) */

void zx_cb_CreateResponse_ADD_Status(struct zx_cb_CreateResponse_s* x, int n, struct zx_cb_Status_s* z)
{
  struct zx_cb_Status_s* y;
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
    for (; y->gg.g.n; y = (struct zx_cb_Status_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Status; n > 1 && y; --n, y = (struct zx_cb_Status_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_cb_CreateResponse_DEL_Status) */

void zx_cb_CreateResponse_DEL_Status(struct zx_cb_CreateResponse_s* x, int n)
{
  struct zx_cb_Status_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Status = (struct zx_cb_Status_s*)x->Status->gg.g.n;
    return;
  case -1:
    y = (struct zx_cb_Status_s*)x->Status;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_cb_Status_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Status; n > 1 && y->gg.g.n; --n, y = (struct zx_cb_Status_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_cb_CreateResponse_NUM_ItemData) */

int zx_cb_CreateResponse_NUM_ItemData(struct zx_cb_CreateResponse_s* x)
{
  struct zx_cb_ItemData_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->ItemData; y; ++n, y = (struct zx_cb_ItemData_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_cb_CreateResponse_GET_ItemData) */

struct zx_cb_ItemData_s* zx_cb_CreateResponse_GET_ItemData(struct zx_cb_CreateResponse_s* x, int n)
{
  struct zx_cb_ItemData_s* y;
  if (!x) return 0;
  for (y = x->ItemData; n>=0 && y; --n, y = (struct zx_cb_ItemData_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_cb_CreateResponse_POP_ItemData) */

struct zx_cb_ItemData_s* zx_cb_CreateResponse_POP_ItemData(struct zx_cb_CreateResponse_s* x)
{
  struct zx_cb_ItemData_s* y;
  if (!x) return 0;
  y = x->ItemData;
  if (y)
    x->ItemData = (struct zx_cb_ItemData_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_cb_CreateResponse_PUSH_ItemData) */

void zx_cb_CreateResponse_PUSH_ItemData(struct zx_cb_CreateResponse_s* x, struct zx_cb_ItemData_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->ItemData->gg.g;
  x->ItemData = z;
}

/* FUNC(zx_cb_CreateResponse_REV_ItemData) */

void zx_cb_CreateResponse_REV_ItemData(struct zx_cb_CreateResponse_s* x)
{
  struct zx_cb_ItemData_s* nxt;
  struct zx_cb_ItemData_s* y;
  if (!x) return;
  y = x->ItemData;
  if (!y) return;
  x->ItemData = 0;
  while (y) {
    nxt = (struct zx_cb_ItemData_s*)y->gg.g.n;
    y->gg.g.n = &x->ItemData->gg.g;
    x->ItemData = y;
    y = nxt;
  }
}

/* FUNC(zx_cb_CreateResponse_PUT_ItemData) */

void zx_cb_CreateResponse_PUT_ItemData(struct zx_cb_CreateResponse_s* x, int n, struct zx_cb_ItemData_s* z)
{
  struct zx_cb_ItemData_s* y;
  if (!x || !z) return;
  y = x->ItemData;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->ItemData = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_cb_ItemData_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_cb_CreateResponse_ADD_ItemData) */

void zx_cb_CreateResponse_ADD_ItemData(struct zx_cb_CreateResponse_s* x, int n, struct zx_cb_ItemData_s* z)
{
  struct zx_cb_ItemData_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->ItemData->gg.g;
    x->ItemData = z;
    return;
  case -1:
    y = x->ItemData;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_cb_ItemData_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->ItemData; n > 1 && y; --n, y = (struct zx_cb_ItemData_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_cb_CreateResponse_DEL_ItemData) */

void zx_cb_CreateResponse_DEL_ItemData(struct zx_cb_CreateResponse_s* x, int n)
{
  struct zx_cb_ItemData_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->ItemData = (struct zx_cb_ItemData_s*)x->ItemData->gg.g.n;
    return;
  case -1:
    y = (struct zx_cb_ItemData_s*)x->ItemData;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_cb_ItemData_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->ItemData; n > 1 && y->gg.g.n; --n, y = (struct zx_cb_ItemData_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_cb_CreateResponse_NUM_Extension) */

int zx_cb_CreateResponse_NUM_Extension(struct zx_cb_CreateResponse_s* x)
{
  struct zx_cb_Extension_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Extension; y; ++n, y = (struct zx_cb_Extension_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_cb_CreateResponse_GET_Extension) */

struct zx_cb_Extension_s* zx_cb_CreateResponse_GET_Extension(struct zx_cb_CreateResponse_s* x, int n)
{
  struct zx_cb_Extension_s* y;
  if (!x) return 0;
  for (y = x->Extension; n>=0 && y; --n, y = (struct zx_cb_Extension_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_cb_CreateResponse_POP_Extension) */

struct zx_cb_Extension_s* zx_cb_CreateResponse_POP_Extension(struct zx_cb_CreateResponse_s* x)
{
  struct zx_cb_Extension_s* y;
  if (!x) return 0;
  y = x->Extension;
  if (y)
    x->Extension = (struct zx_cb_Extension_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_cb_CreateResponse_PUSH_Extension) */

void zx_cb_CreateResponse_PUSH_Extension(struct zx_cb_CreateResponse_s* x, struct zx_cb_Extension_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Extension->gg.g;
  x->Extension = z;
}

/* FUNC(zx_cb_CreateResponse_REV_Extension) */

void zx_cb_CreateResponse_REV_Extension(struct zx_cb_CreateResponse_s* x)
{
  struct zx_cb_Extension_s* nxt;
  struct zx_cb_Extension_s* y;
  if (!x) return;
  y = x->Extension;
  if (!y) return;
  x->Extension = 0;
  while (y) {
    nxt = (struct zx_cb_Extension_s*)y->gg.g.n;
    y->gg.g.n = &x->Extension->gg.g;
    x->Extension = y;
    y = nxt;
  }
}

/* FUNC(zx_cb_CreateResponse_PUT_Extension) */

void zx_cb_CreateResponse_PUT_Extension(struct zx_cb_CreateResponse_s* x, int n, struct zx_cb_Extension_s* z)
{
  struct zx_cb_Extension_s* y;
  if (!x || !z) return;
  y = x->Extension;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Extension = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_cb_Extension_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_cb_CreateResponse_ADD_Extension) */

void zx_cb_CreateResponse_ADD_Extension(struct zx_cb_CreateResponse_s* x, int n, struct zx_cb_Extension_s* z)
{
  struct zx_cb_Extension_s* y;
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
    for (; y->gg.g.n; y = (struct zx_cb_Extension_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Extension; n > 1 && y; --n, y = (struct zx_cb_Extension_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_cb_CreateResponse_DEL_Extension) */

void zx_cb_CreateResponse_DEL_Extension(struct zx_cb_CreateResponse_s* x, int n)
{
  struct zx_cb_Extension_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Extension = (struct zx_cb_Extension_s*)x->Extension->gg.g.n;
    return;
  case -1:
    y = (struct zx_cb_Extension_s*)x->Extension;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_cb_Extension_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Extension; n > 1 && y->gg.g.n; --n, y = (struct zx_cb_Extension_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif

/* FUNC(zx_cb_CreateResponse_GET_id) */
struct zx_str* zx_cb_CreateResponse_GET_id(struct zx_cb_CreateResponse_s* x) { return x->id; }
/* FUNC(zx_cb_CreateResponse_PUT_id) */
void zx_cb_CreateResponse_PUT_id(struct zx_cb_CreateResponse_s* x, struct zx_str* y) { x->id = y; }
/* FUNC(zx_cb_CreateResponse_GET_timeStamp) */
struct zx_str* zx_cb_CreateResponse_GET_timeStamp(struct zx_cb_CreateResponse_s* x) { return x->timeStamp; }
/* FUNC(zx_cb_CreateResponse_PUT_timeStamp) */
void zx_cb_CreateResponse_PUT_timeStamp(struct zx_cb_CreateResponse_s* x, struct zx_str* y) { x->timeStamp = y; }







#ifdef ZX_ENA_GETPUT

/* FUNC(zx_cb_Credential_NUM_Assertion) */

int zx_cb_Credential_NUM_Assertion(struct zx_cb_Credential_s* x)
{
  struct zx_sa_Assertion_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Assertion; y; ++n, y = (struct zx_sa_Assertion_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_cb_Credential_GET_Assertion) */

struct zx_sa_Assertion_s* zx_cb_Credential_GET_Assertion(struct zx_cb_Credential_s* x, int n)
{
  struct zx_sa_Assertion_s* y;
  if (!x) return 0;
  for (y = x->Assertion; n>=0 && y; --n, y = (struct zx_sa_Assertion_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_cb_Credential_POP_Assertion) */

struct zx_sa_Assertion_s* zx_cb_Credential_POP_Assertion(struct zx_cb_Credential_s* x)
{
  struct zx_sa_Assertion_s* y;
  if (!x) return 0;
  y = x->Assertion;
  if (y)
    x->Assertion = (struct zx_sa_Assertion_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_cb_Credential_PUSH_Assertion) */

void zx_cb_Credential_PUSH_Assertion(struct zx_cb_Credential_s* x, struct zx_sa_Assertion_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Assertion->gg.g;
  x->Assertion = z;
}

/* FUNC(zx_cb_Credential_REV_Assertion) */

void zx_cb_Credential_REV_Assertion(struct zx_cb_Credential_s* x)
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

/* FUNC(zx_cb_Credential_PUT_Assertion) */

void zx_cb_Credential_PUT_Assertion(struct zx_cb_Credential_s* x, int n, struct zx_sa_Assertion_s* z)
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

/* FUNC(zx_cb_Credential_ADD_Assertion) */

void zx_cb_Credential_ADD_Assertion(struct zx_cb_Credential_s* x, int n, struct zx_sa_Assertion_s* z)
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

/* FUNC(zx_cb_Credential_DEL_Assertion) */

void zx_cb_Credential_DEL_Assertion(struct zx_cb_Credential_s* x, int n)
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

/* FUNC(zx_cb_Credential_GET_notOnOrAfter) */
struct zx_str* zx_cb_Credential_GET_notOnOrAfter(struct zx_cb_Credential_s* x) { return x->notOnOrAfter; }
/* FUNC(zx_cb_Credential_PUT_notOnOrAfter) */
void zx_cb_Credential_PUT_notOnOrAfter(struct zx_cb_Credential_s* x, struct zx_str* y) { x->notOnOrAfter = y; }







#ifdef ZX_ENA_GETPUT

/* FUNC(zx_cb_Data_NUM_Card) */

int zx_cb_Data_NUM_Card(struct zx_cb_Data_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Card; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_cb_Data_GET_Card) */

struct zx_elem_s* zx_cb_Data_GET_Card(struct zx_cb_Data_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->Card; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_cb_Data_POP_Card) */

struct zx_elem_s* zx_cb_Data_POP_Card(struct zx_cb_Data_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->Card;
  if (y)
    x->Card = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_cb_Data_PUSH_Card) */

void zx_cb_Data_PUSH_Card(struct zx_cb_Data_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->Card->g;
  x->Card = z;
}

/* FUNC(zx_cb_Data_REV_Card) */

void zx_cb_Data_REV_Card(struct zx_cb_Data_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->Card;
  if (!y) return;
  x->Card = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->Card->g;
    x->Card = y;
    y = nxt;
  }
}

/* FUNC(zx_cb_Data_PUT_Card) */

void zx_cb_Data_PUT_Card(struct zx_cb_Data_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->Card;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->Card = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_cb_Data_ADD_Card) */

void zx_cb_Data_ADD_Card(struct zx_cb_Data_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->Card->g;
    x->Card = z;
    return;
  case -1:
    y = x->Card;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->Card; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_cb_Data_DEL_Card) */

void zx_cb_Data_DEL_Card(struct zx_cb_Data_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Card = (struct zx_elem_s*)x->Card->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->Card;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->Card; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

#endif

/* FUNC(zx_cb_Data_GET_id) */
struct zx_str* zx_cb_Data_GET_id(struct zx_cb_Data_s* x) { return x->id; }
/* FUNC(zx_cb_Data_PUT_id) */
void zx_cb_Data_PUT_id(struct zx_cb_Data_s* x, struct zx_str* y) { x->id = y; }
/* FUNC(zx_cb_Data_GET_itemIDRef) */
struct zx_str* zx_cb_Data_GET_itemIDRef(struct zx_cb_Data_s* x) { return x->itemIDRef; }
/* FUNC(zx_cb_Data_PUT_itemIDRef) */
void zx_cb_Data_PUT_itemIDRef(struct zx_cb_Data_s* x, struct zx_str* y) { x->itemIDRef = y; }
/* FUNC(zx_cb_Data_GET_nextOffset) */
struct zx_str* zx_cb_Data_GET_nextOffset(struct zx_cb_Data_s* x) { return x->nextOffset; }
/* FUNC(zx_cb_Data_PUT_nextOffset) */
void zx_cb_Data_PUT_nextOffset(struct zx_cb_Data_s* x, struct zx_str* y) { x->nextOffset = y; }
/* FUNC(zx_cb_Data_GET_notSorted) */
struct zx_str* zx_cb_Data_GET_notSorted(struct zx_cb_Data_s* x) { return x->notSorted; }
/* FUNC(zx_cb_Data_PUT_notSorted) */
void zx_cb_Data_PUT_notSorted(struct zx_cb_Data_s* x, struct zx_str* y) { x->notSorted = y; }
/* FUNC(zx_cb_Data_GET_remaining) */
struct zx_str* zx_cb_Data_GET_remaining(struct zx_cb_Data_s* x) { return x->remaining; }
/* FUNC(zx_cb_Data_PUT_remaining) */
void zx_cb_Data_PUT_remaining(struct zx_cb_Data_s* x, struct zx_str* y) { x->remaining = y; }
/* FUNC(zx_cb_Data_GET_setID) */
struct zx_str* zx_cb_Data_GET_setID(struct zx_cb_Data_s* x) { return x->setID; }
/* FUNC(zx_cb_Data_PUT_setID) */
void zx_cb_Data_PUT_setID(struct zx_cb_Data_s* x, struct zx_str* y) { x->setID = y; }
/* FUNC(zx_cb_Data_GET_changeFormat) */
struct zx_str* zx_cb_Data_GET_changeFormat(struct zx_cb_Data_s* x) { return x->changeFormat; }
/* FUNC(zx_cb_Data_PUT_changeFormat) */
void zx_cb_Data_PUT_changeFormat(struct zx_cb_Data_s* x, struct zx_str* y) { x->changeFormat = y; }







#ifdef ZX_ENA_GETPUT

/* FUNC(zx_cb_Delete_NUM_ResourceID) */

int zx_cb_Delete_NUM_ResourceID(struct zx_cb_Delete_s* x)
{
  struct zx_cb_ResourceID_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->ResourceID; y; ++n, y = (struct zx_cb_ResourceID_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_cb_Delete_GET_ResourceID) */

struct zx_cb_ResourceID_s* zx_cb_Delete_GET_ResourceID(struct zx_cb_Delete_s* x, int n)
{
  struct zx_cb_ResourceID_s* y;
  if (!x) return 0;
  for (y = x->ResourceID; n>=0 && y; --n, y = (struct zx_cb_ResourceID_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_cb_Delete_POP_ResourceID) */

struct zx_cb_ResourceID_s* zx_cb_Delete_POP_ResourceID(struct zx_cb_Delete_s* x)
{
  struct zx_cb_ResourceID_s* y;
  if (!x) return 0;
  y = x->ResourceID;
  if (y)
    x->ResourceID = (struct zx_cb_ResourceID_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_cb_Delete_PUSH_ResourceID) */

void zx_cb_Delete_PUSH_ResourceID(struct zx_cb_Delete_s* x, struct zx_cb_ResourceID_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->ResourceID->gg.g;
  x->ResourceID = z;
}

/* FUNC(zx_cb_Delete_REV_ResourceID) */

void zx_cb_Delete_REV_ResourceID(struct zx_cb_Delete_s* x)
{
  struct zx_cb_ResourceID_s* nxt;
  struct zx_cb_ResourceID_s* y;
  if (!x) return;
  y = x->ResourceID;
  if (!y) return;
  x->ResourceID = 0;
  while (y) {
    nxt = (struct zx_cb_ResourceID_s*)y->gg.g.n;
    y->gg.g.n = &x->ResourceID->gg.g;
    x->ResourceID = y;
    y = nxt;
  }
}

/* FUNC(zx_cb_Delete_PUT_ResourceID) */

void zx_cb_Delete_PUT_ResourceID(struct zx_cb_Delete_s* x, int n, struct zx_cb_ResourceID_s* z)
{
  struct zx_cb_ResourceID_s* y;
  if (!x || !z) return;
  y = x->ResourceID;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->ResourceID = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_cb_ResourceID_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_cb_Delete_ADD_ResourceID) */

void zx_cb_Delete_ADD_ResourceID(struct zx_cb_Delete_s* x, int n, struct zx_cb_ResourceID_s* z)
{
  struct zx_cb_ResourceID_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->ResourceID->gg.g;
    x->ResourceID = z;
    return;
  case -1:
    y = x->ResourceID;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_cb_ResourceID_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->ResourceID; n > 1 && y; --n, y = (struct zx_cb_ResourceID_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_cb_Delete_DEL_ResourceID) */

void zx_cb_Delete_DEL_ResourceID(struct zx_cb_Delete_s* x, int n)
{
  struct zx_cb_ResourceID_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->ResourceID = (struct zx_cb_ResourceID_s*)x->ResourceID->gg.g.n;
    return;
  case -1:
    y = (struct zx_cb_ResourceID_s*)x->ResourceID;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_cb_ResourceID_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->ResourceID; n > 1 && y->gg.g.n; --n, y = (struct zx_cb_ResourceID_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_cb_Delete_NUM_EncryptedResourceID) */

int zx_cb_Delete_NUM_EncryptedResourceID(struct zx_cb_Delete_s* x)
{
  struct zx_cb_EncryptedResourceID_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->EncryptedResourceID; y; ++n, y = (struct zx_cb_EncryptedResourceID_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_cb_Delete_GET_EncryptedResourceID) */

struct zx_cb_EncryptedResourceID_s* zx_cb_Delete_GET_EncryptedResourceID(struct zx_cb_Delete_s* x, int n)
{
  struct zx_cb_EncryptedResourceID_s* y;
  if (!x) return 0;
  for (y = x->EncryptedResourceID; n>=0 && y; --n, y = (struct zx_cb_EncryptedResourceID_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_cb_Delete_POP_EncryptedResourceID) */

struct zx_cb_EncryptedResourceID_s* zx_cb_Delete_POP_EncryptedResourceID(struct zx_cb_Delete_s* x)
{
  struct zx_cb_EncryptedResourceID_s* y;
  if (!x) return 0;
  y = x->EncryptedResourceID;
  if (y)
    x->EncryptedResourceID = (struct zx_cb_EncryptedResourceID_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_cb_Delete_PUSH_EncryptedResourceID) */

void zx_cb_Delete_PUSH_EncryptedResourceID(struct zx_cb_Delete_s* x, struct zx_cb_EncryptedResourceID_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->EncryptedResourceID->gg.g;
  x->EncryptedResourceID = z;
}

/* FUNC(zx_cb_Delete_REV_EncryptedResourceID) */

void zx_cb_Delete_REV_EncryptedResourceID(struct zx_cb_Delete_s* x)
{
  struct zx_cb_EncryptedResourceID_s* nxt;
  struct zx_cb_EncryptedResourceID_s* y;
  if (!x) return;
  y = x->EncryptedResourceID;
  if (!y) return;
  x->EncryptedResourceID = 0;
  while (y) {
    nxt = (struct zx_cb_EncryptedResourceID_s*)y->gg.g.n;
    y->gg.g.n = &x->EncryptedResourceID->gg.g;
    x->EncryptedResourceID = y;
    y = nxt;
  }
}

/* FUNC(zx_cb_Delete_PUT_EncryptedResourceID) */

void zx_cb_Delete_PUT_EncryptedResourceID(struct zx_cb_Delete_s* x, int n, struct zx_cb_EncryptedResourceID_s* z)
{
  struct zx_cb_EncryptedResourceID_s* y;
  if (!x || !z) return;
  y = x->EncryptedResourceID;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->EncryptedResourceID = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_cb_EncryptedResourceID_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_cb_Delete_ADD_EncryptedResourceID) */

void zx_cb_Delete_ADD_EncryptedResourceID(struct zx_cb_Delete_s* x, int n, struct zx_cb_EncryptedResourceID_s* z)
{
  struct zx_cb_EncryptedResourceID_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->EncryptedResourceID->gg.g;
    x->EncryptedResourceID = z;
    return;
  case -1:
    y = x->EncryptedResourceID;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_cb_EncryptedResourceID_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->EncryptedResourceID; n > 1 && y; --n, y = (struct zx_cb_EncryptedResourceID_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_cb_Delete_DEL_EncryptedResourceID) */

void zx_cb_Delete_DEL_EncryptedResourceID(struct zx_cb_Delete_s* x, int n)
{
  struct zx_cb_EncryptedResourceID_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->EncryptedResourceID = (struct zx_cb_EncryptedResourceID_s*)x->EncryptedResourceID->gg.g.n;
    return;
  case -1:
    y = (struct zx_cb_EncryptedResourceID_s*)x->EncryptedResourceID;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_cb_EncryptedResourceID_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->EncryptedResourceID; n > 1 && y->gg.g.n; --n, y = (struct zx_cb_EncryptedResourceID_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_cb_Delete_NUM_DeleteItem) */

int zx_cb_Delete_NUM_DeleteItem(struct zx_cb_Delete_s* x)
{
  struct zx_cb_DeleteItem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->DeleteItem; y; ++n, y = (struct zx_cb_DeleteItem_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_cb_Delete_GET_DeleteItem) */

struct zx_cb_DeleteItem_s* zx_cb_Delete_GET_DeleteItem(struct zx_cb_Delete_s* x, int n)
{
  struct zx_cb_DeleteItem_s* y;
  if (!x) return 0;
  for (y = x->DeleteItem; n>=0 && y; --n, y = (struct zx_cb_DeleteItem_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_cb_Delete_POP_DeleteItem) */

struct zx_cb_DeleteItem_s* zx_cb_Delete_POP_DeleteItem(struct zx_cb_Delete_s* x)
{
  struct zx_cb_DeleteItem_s* y;
  if (!x) return 0;
  y = x->DeleteItem;
  if (y)
    x->DeleteItem = (struct zx_cb_DeleteItem_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_cb_Delete_PUSH_DeleteItem) */

void zx_cb_Delete_PUSH_DeleteItem(struct zx_cb_Delete_s* x, struct zx_cb_DeleteItem_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->DeleteItem->gg.g;
  x->DeleteItem = z;
}

/* FUNC(zx_cb_Delete_REV_DeleteItem) */

void zx_cb_Delete_REV_DeleteItem(struct zx_cb_Delete_s* x)
{
  struct zx_cb_DeleteItem_s* nxt;
  struct zx_cb_DeleteItem_s* y;
  if (!x) return;
  y = x->DeleteItem;
  if (!y) return;
  x->DeleteItem = 0;
  while (y) {
    nxt = (struct zx_cb_DeleteItem_s*)y->gg.g.n;
    y->gg.g.n = &x->DeleteItem->gg.g;
    x->DeleteItem = y;
    y = nxt;
  }
}

/* FUNC(zx_cb_Delete_PUT_DeleteItem) */

void zx_cb_Delete_PUT_DeleteItem(struct zx_cb_Delete_s* x, int n, struct zx_cb_DeleteItem_s* z)
{
  struct zx_cb_DeleteItem_s* y;
  if (!x || !z) return;
  y = x->DeleteItem;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->DeleteItem = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_cb_DeleteItem_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_cb_Delete_ADD_DeleteItem) */

void zx_cb_Delete_ADD_DeleteItem(struct zx_cb_Delete_s* x, int n, struct zx_cb_DeleteItem_s* z)
{
  struct zx_cb_DeleteItem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->DeleteItem->gg.g;
    x->DeleteItem = z;
    return;
  case -1:
    y = x->DeleteItem;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_cb_DeleteItem_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->DeleteItem; n > 1 && y; --n, y = (struct zx_cb_DeleteItem_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_cb_Delete_DEL_DeleteItem) */

void zx_cb_Delete_DEL_DeleteItem(struct zx_cb_Delete_s* x, int n)
{
  struct zx_cb_DeleteItem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->DeleteItem = (struct zx_cb_DeleteItem_s*)x->DeleteItem->gg.g.n;
    return;
  case -1:
    y = (struct zx_cb_DeleteItem_s*)x->DeleteItem;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_cb_DeleteItem_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->DeleteItem; n > 1 && y->gg.g.n; --n, y = (struct zx_cb_DeleteItem_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_cb_Delete_NUM_Extension) */

int zx_cb_Delete_NUM_Extension(struct zx_cb_Delete_s* x)
{
  struct zx_cb_Extension_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Extension; y; ++n, y = (struct zx_cb_Extension_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_cb_Delete_GET_Extension) */

struct zx_cb_Extension_s* zx_cb_Delete_GET_Extension(struct zx_cb_Delete_s* x, int n)
{
  struct zx_cb_Extension_s* y;
  if (!x) return 0;
  for (y = x->Extension; n>=0 && y; --n, y = (struct zx_cb_Extension_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_cb_Delete_POP_Extension) */

struct zx_cb_Extension_s* zx_cb_Delete_POP_Extension(struct zx_cb_Delete_s* x)
{
  struct zx_cb_Extension_s* y;
  if (!x) return 0;
  y = x->Extension;
  if (y)
    x->Extension = (struct zx_cb_Extension_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_cb_Delete_PUSH_Extension) */

void zx_cb_Delete_PUSH_Extension(struct zx_cb_Delete_s* x, struct zx_cb_Extension_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Extension->gg.g;
  x->Extension = z;
}

/* FUNC(zx_cb_Delete_REV_Extension) */

void zx_cb_Delete_REV_Extension(struct zx_cb_Delete_s* x)
{
  struct zx_cb_Extension_s* nxt;
  struct zx_cb_Extension_s* y;
  if (!x) return;
  y = x->Extension;
  if (!y) return;
  x->Extension = 0;
  while (y) {
    nxt = (struct zx_cb_Extension_s*)y->gg.g.n;
    y->gg.g.n = &x->Extension->gg.g;
    x->Extension = y;
    y = nxt;
  }
}

/* FUNC(zx_cb_Delete_PUT_Extension) */

void zx_cb_Delete_PUT_Extension(struct zx_cb_Delete_s* x, int n, struct zx_cb_Extension_s* z)
{
  struct zx_cb_Extension_s* y;
  if (!x || !z) return;
  y = x->Extension;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Extension = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_cb_Extension_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_cb_Delete_ADD_Extension) */

void zx_cb_Delete_ADD_Extension(struct zx_cb_Delete_s* x, int n, struct zx_cb_Extension_s* z)
{
  struct zx_cb_Extension_s* y;
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
    for (; y->gg.g.n; y = (struct zx_cb_Extension_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Extension; n > 1 && y; --n, y = (struct zx_cb_Extension_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_cb_Delete_DEL_Extension) */

void zx_cb_Delete_DEL_Extension(struct zx_cb_Delete_s* x, int n)
{
  struct zx_cb_Extension_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Extension = (struct zx_cb_Extension_s*)x->Extension->gg.g.n;
    return;
  case -1:
    y = (struct zx_cb_Extension_s*)x->Extension;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_cb_Extension_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Extension; n > 1 && y->gg.g.n; --n, y = (struct zx_cb_Extension_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif

/* FUNC(zx_cb_Delete_GET_id) */
struct zx_str* zx_cb_Delete_GET_id(struct zx_cb_Delete_s* x) { return x->id; }
/* FUNC(zx_cb_Delete_PUT_id) */
void zx_cb_Delete_PUT_id(struct zx_cb_Delete_s* x, struct zx_str* y) { x->id = y; }







#ifdef ZX_ENA_GETPUT

/* FUNC(zx_cb_DeleteItem_NUM_Select) */

int zx_cb_DeleteItem_NUM_Select(struct zx_cb_DeleteItem_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Select; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_cb_DeleteItem_GET_Select) */

struct zx_elem_s* zx_cb_DeleteItem_GET_Select(struct zx_cb_DeleteItem_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->Select; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_cb_DeleteItem_POP_Select) */

struct zx_elem_s* zx_cb_DeleteItem_POP_Select(struct zx_cb_DeleteItem_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->Select;
  if (y)
    x->Select = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_cb_DeleteItem_PUSH_Select) */

void zx_cb_DeleteItem_PUSH_Select(struct zx_cb_DeleteItem_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->Select->g;
  x->Select = z;
}

/* FUNC(zx_cb_DeleteItem_REV_Select) */

void zx_cb_DeleteItem_REV_Select(struct zx_cb_DeleteItem_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->Select;
  if (!y) return;
  x->Select = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->Select->g;
    x->Select = y;
    y = nxt;
  }
}

/* FUNC(zx_cb_DeleteItem_PUT_Select) */

void zx_cb_DeleteItem_PUT_Select(struct zx_cb_DeleteItem_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->Select;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->Select = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_cb_DeleteItem_ADD_Select) */

void zx_cb_DeleteItem_ADD_Select(struct zx_cb_DeleteItem_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->Select->g;
    x->Select = z;
    return;
  case -1:
    y = x->Select;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->Select; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_cb_DeleteItem_DEL_Select) */

void zx_cb_DeleteItem_DEL_Select(struct zx_cb_DeleteItem_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Select = (struct zx_elem_s*)x->Select->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->Select;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->Select; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

#endif

/* FUNC(zx_cb_DeleteItem_GET_id) */
struct zx_str* zx_cb_DeleteItem_GET_id(struct zx_cb_DeleteItem_s* x) { return x->id; }
/* FUNC(zx_cb_DeleteItem_PUT_id) */
void zx_cb_DeleteItem_PUT_id(struct zx_cb_DeleteItem_s* x, struct zx_str* y) { x->id = y; }
/* FUNC(zx_cb_DeleteItem_GET_itemID) */
struct zx_str* zx_cb_DeleteItem_GET_itemID(struct zx_cb_DeleteItem_s* x) { return x->itemID; }
/* FUNC(zx_cb_DeleteItem_PUT_itemID) */
void zx_cb_DeleteItem_PUT_itemID(struct zx_cb_DeleteItem_s* x, struct zx_str* y) { x->itemID = y; }
/* FUNC(zx_cb_DeleteItem_GET_notChangedSince) */
struct zx_str* zx_cb_DeleteItem_GET_notChangedSince(struct zx_cb_DeleteItem_s* x) { return x->notChangedSince; }
/* FUNC(zx_cb_DeleteItem_PUT_notChangedSince) */
void zx_cb_DeleteItem_PUT_notChangedSince(struct zx_cb_DeleteItem_s* x, struct zx_str* y) { x->notChangedSince = y; }
/* FUNC(zx_cb_DeleteItem_GET_objectType) */
struct zx_str* zx_cb_DeleteItem_GET_objectType(struct zx_cb_DeleteItem_s* x) { return x->objectType; }
/* FUNC(zx_cb_DeleteItem_PUT_objectType) */
void zx_cb_DeleteItem_PUT_objectType(struct zx_cb_DeleteItem_s* x, struct zx_str* y) { x->objectType = y; }
/* FUNC(zx_cb_DeleteItem_GET_predefined) */
struct zx_str* zx_cb_DeleteItem_GET_predefined(struct zx_cb_DeleteItem_s* x) { return x->predefined; }
/* FUNC(zx_cb_DeleteItem_PUT_predefined) */
void zx_cb_DeleteItem_PUT_predefined(struct zx_cb_DeleteItem_s* x, struct zx_str* y) { x->predefined = y; }







#ifdef ZX_ENA_GETPUT

/* FUNC(zx_cb_DeleteResponse_NUM_Status) */

int zx_cb_DeleteResponse_NUM_Status(struct zx_cb_DeleteResponse_s* x)
{
  struct zx_cb_Status_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Status; y; ++n, y = (struct zx_cb_Status_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_cb_DeleteResponse_GET_Status) */

struct zx_cb_Status_s* zx_cb_DeleteResponse_GET_Status(struct zx_cb_DeleteResponse_s* x, int n)
{
  struct zx_cb_Status_s* y;
  if (!x) return 0;
  for (y = x->Status; n>=0 && y; --n, y = (struct zx_cb_Status_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_cb_DeleteResponse_POP_Status) */

struct zx_cb_Status_s* zx_cb_DeleteResponse_POP_Status(struct zx_cb_DeleteResponse_s* x)
{
  struct zx_cb_Status_s* y;
  if (!x) return 0;
  y = x->Status;
  if (y)
    x->Status = (struct zx_cb_Status_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_cb_DeleteResponse_PUSH_Status) */

void zx_cb_DeleteResponse_PUSH_Status(struct zx_cb_DeleteResponse_s* x, struct zx_cb_Status_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Status->gg.g;
  x->Status = z;
}

/* FUNC(zx_cb_DeleteResponse_REV_Status) */

void zx_cb_DeleteResponse_REV_Status(struct zx_cb_DeleteResponse_s* x)
{
  struct zx_cb_Status_s* nxt;
  struct zx_cb_Status_s* y;
  if (!x) return;
  y = x->Status;
  if (!y) return;
  x->Status = 0;
  while (y) {
    nxt = (struct zx_cb_Status_s*)y->gg.g.n;
    y->gg.g.n = &x->Status->gg.g;
    x->Status = y;
    y = nxt;
  }
}

/* FUNC(zx_cb_DeleteResponse_PUT_Status) */

void zx_cb_DeleteResponse_PUT_Status(struct zx_cb_DeleteResponse_s* x, int n, struct zx_cb_Status_s* z)
{
  struct zx_cb_Status_s* y;
  if (!x || !z) return;
  y = x->Status;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Status = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_cb_Status_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_cb_DeleteResponse_ADD_Status) */

void zx_cb_DeleteResponse_ADD_Status(struct zx_cb_DeleteResponse_s* x, int n, struct zx_cb_Status_s* z)
{
  struct zx_cb_Status_s* y;
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
    for (; y->gg.g.n; y = (struct zx_cb_Status_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Status; n > 1 && y; --n, y = (struct zx_cb_Status_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_cb_DeleteResponse_DEL_Status) */

void zx_cb_DeleteResponse_DEL_Status(struct zx_cb_DeleteResponse_s* x, int n)
{
  struct zx_cb_Status_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Status = (struct zx_cb_Status_s*)x->Status->gg.g.n;
    return;
  case -1:
    y = (struct zx_cb_Status_s*)x->Status;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_cb_Status_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Status; n > 1 && y->gg.g.n; --n, y = (struct zx_cb_Status_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_cb_DeleteResponse_NUM_Extension) */

int zx_cb_DeleteResponse_NUM_Extension(struct zx_cb_DeleteResponse_s* x)
{
  struct zx_cb_Extension_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Extension; y; ++n, y = (struct zx_cb_Extension_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_cb_DeleteResponse_GET_Extension) */

struct zx_cb_Extension_s* zx_cb_DeleteResponse_GET_Extension(struct zx_cb_DeleteResponse_s* x, int n)
{
  struct zx_cb_Extension_s* y;
  if (!x) return 0;
  for (y = x->Extension; n>=0 && y; --n, y = (struct zx_cb_Extension_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_cb_DeleteResponse_POP_Extension) */

struct zx_cb_Extension_s* zx_cb_DeleteResponse_POP_Extension(struct zx_cb_DeleteResponse_s* x)
{
  struct zx_cb_Extension_s* y;
  if (!x) return 0;
  y = x->Extension;
  if (y)
    x->Extension = (struct zx_cb_Extension_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_cb_DeleteResponse_PUSH_Extension) */

void zx_cb_DeleteResponse_PUSH_Extension(struct zx_cb_DeleteResponse_s* x, struct zx_cb_Extension_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Extension->gg.g;
  x->Extension = z;
}

/* FUNC(zx_cb_DeleteResponse_REV_Extension) */

void zx_cb_DeleteResponse_REV_Extension(struct zx_cb_DeleteResponse_s* x)
{
  struct zx_cb_Extension_s* nxt;
  struct zx_cb_Extension_s* y;
  if (!x) return;
  y = x->Extension;
  if (!y) return;
  x->Extension = 0;
  while (y) {
    nxt = (struct zx_cb_Extension_s*)y->gg.g.n;
    y->gg.g.n = &x->Extension->gg.g;
    x->Extension = y;
    y = nxt;
  }
}

/* FUNC(zx_cb_DeleteResponse_PUT_Extension) */

void zx_cb_DeleteResponse_PUT_Extension(struct zx_cb_DeleteResponse_s* x, int n, struct zx_cb_Extension_s* z)
{
  struct zx_cb_Extension_s* y;
  if (!x || !z) return;
  y = x->Extension;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Extension = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_cb_Extension_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_cb_DeleteResponse_ADD_Extension) */

void zx_cb_DeleteResponse_ADD_Extension(struct zx_cb_DeleteResponse_s* x, int n, struct zx_cb_Extension_s* z)
{
  struct zx_cb_Extension_s* y;
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
    for (; y->gg.g.n; y = (struct zx_cb_Extension_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Extension; n > 1 && y; --n, y = (struct zx_cb_Extension_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_cb_DeleteResponse_DEL_Extension) */

void zx_cb_DeleteResponse_DEL_Extension(struct zx_cb_DeleteResponse_s* x, int n)
{
  struct zx_cb_Extension_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Extension = (struct zx_cb_Extension_s*)x->Extension->gg.g.n;
    return;
  case -1:
    y = (struct zx_cb_Extension_s*)x->Extension;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_cb_Extension_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Extension; n > 1 && y->gg.g.n; --n, y = (struct zx_cb_Extension_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif

/* FUNC(zx_cb_DeleteResponse_GET_id) */
struct zx_str* zx_cb_DeleteResponse_GET_id(struct zx_cb_DeleteResponse_s* x) { return x->id; }
/* FUNC(zx_cb_DeleteResponse_PUT_id) */
void zx_cb_DeleteResponse_PUT_id(struct zx_cb_DeleteResponse_s* x, struct zx_str* y) { x->id = y; }







#ifdef ZX_ENA_GETPUT

/* FUNC(zx_cb_EncryptedResourceID_NUM_EncryptedData) */

int zx_cb_EncryptedResourceID_NUM_EncryptedData(struct zx_cb_EncryptedResourceID_s* x)
{
  struct zx_xenc_EncryptedData_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->EncryptedData; y; ++n, y = (struct zx_xenc_EncryptedData_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_cb_EncryptedResourceID_GET_EncryptedData) */

struct zx_xenc_EncryptedData_s* zx_cb_EncryptedResourceID_GET_EncryptedData(struct zx_cb_EncryptedResourceID_s* x, int n)
{
  struct zx_xenc_EncryptedData_s* y;
  if (!x) return 0;
  for (y = x->EncryptedData; n>=0 && y; --n, y = (struct zx_xenc_EncryptedData_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_cb_EncryptedResourceID_POP_EncryptedData) */

struct zx_xenc_EncryptedData_s* zx_cb_EncryptedResourceID_POP_EncryptedData(struct zx_cb_EncryptedResourceID_s* x)
{
  struct zx_xenc_EncryptedData_s* y;
  if (!x) return 0;
  y = x->EncryptedData;
  if (y)
    x->EncryptedData = (struct zx_xenc_EncryptedData_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_cb_EncryptedResourceID_PUSH_EncryptedData) */

void zx_cb_EncryptedResourceID_PUSH_EncryptedData(struct zx_cb_EncryptedResourceID_s* x, struct zx_xenc_EncryptedData_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->EncryptedData->gg.g;
  x->EncryptedData = z;
}

/* FUNC(zx_cb_EncryptedResourceID_REV_EncryptedData) */

void zx_cb_EncryptedResourceID_REV_EncryptedData(struct zx_cb_EncryptedResourceID_s* x)
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

/* FUNC(zx_cb_EncryptedResourceID_PUT_EncryptedData) */

void zx_cb_EncryptedResourceID_PUT_EncryptedData(struct zx_cb_EncryptedResourceID_s* x, int n, struct zx_xenc_EncryptedData_s* z)
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

/* FUNC(zx_cb_EncryptedResourceID_ADD_EncryptedData) */

void zx_cb_EncryptedResourceID_ADD_EncryptedData(struct zx_cb_EncryptedResourceID_s* x, int n, struct zx_xenc_EncryptedData_s* z)
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

/* FUNC(zx_cb_EncryptedResourceID_DEL_EncryptedData) */

void zx_cb_EncryptedResourceID_DEL_EncryptedData(struct zx_cb_EncryptedResourceID_s* x, int n)
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

/* FUNC(zx_cb_EncryptedResourceID_NUM_EncryptedKey) */

int zx_cb_EncryptedResourceID_NUM_EncryptedKey(struct zx_cb_EncryptedResourceID_s* x)
{
  struct zx_xenc_EncryptedKey_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->EncryptedKey; y; ++n, y = (struct zx_xenc_EncryptedKey_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_cb_EncryptedResourceID_GET_EncryptedKey) */

struct zx_xenc_EncryptedKey_s* zx_cb_EncryptedResourceID_GET_EncryptedKey(struct zx_cb_EncryptedResourceID_s* x, int n)
{
  struct zx_xenc_EncryptedKey_s* y;
  if (!x) return 0;
  for (y = x->EncryptedKey; n>=0 && y; --n, y = (struct zx_xenc_EncryptedKey_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_cb_EncryptedResourceID_POP_EncryptedKey) */

struct zx_xenc_EncryptedKey_s* zx_cb_EncryptedResourceID_POP_EncryptedKey(struct zx_cb_EncryptedResourceID_s* x)
{
  struct zx_xenc_EncryptedKey_s* y;
  if (!x) return 0;
  y = x->EncryptedKey;
  if (y)
    x->EncryptedKey = (struct zx_xenc_EncryptedKey_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_cb_EncryptedResourceID_PUSH_EncryptedKey) */

void zx_cb_EncryptedResourceID_PUSH_EncryptedKey(struct zx_cb_EncryptedResourceID_s* x, struct zx_xenc_EncryptedKey_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->EncryptedKey->gg.g;
  x->EncryptedKey = z;
}

/* FUNC(zx_cb_EncryptedResourceID_REV_EncryptedKey) */

void zx_cb_EncryptedResourceID_REV_EncryptedKey(struct zx_cb_EncryptedResourceID_s* x)
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

/* FUNC(zx_cb_EncryptedResourceID_PUT_EncryptedKey) */

void zx_cb_EncryptedResourceID_PUT_EncryptedKey(struct zx_cb_EncryptedResourceID_s* x, int n, struct zx_xenc_EncryptedKey_s* z)
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

/* FUNC(zx_cb_EncryptedResourceID_ADD_EncryptedKey) */

void zx_cb_EncryptedResourceID_ADD_EncryptedKey(struct zx_cb_EncryptedResourceID_s* x, int n, struct zx_xenc_EncryptedKey_s* z)
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

/* FUNC(zx_cb_EncryptedResourceID_DEL_EncryptedKey) */

void zx_cb_EncryptedResourceID_DEL_EncryptedKey(struct zx_cb_EncryptedResourceID_s* x, int n)
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

/* FUNC(zx_cb_ItemData_NUM_Card) */

int zx_cb_ItemData_NUM_Card(struct zx_cb_ItemData_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Card; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_cb_ItemData_GET_Card) */

struct zx_elem_s* zx_cb_ItemData_GET_Card(struct zx_cb_ItemData_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->Card; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_cb_ItemData_POP_Card) */

struct zx_elem_s* zx_cb_ItemData_POP_Card(struct zx_cb_ItemData_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->Card;
  if (y)
    x->Card = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_cb_ItemData_PUSH_Card) */

void zx_cb_ItemData_PUSH_Card(struct zx_cb_ItemData_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->Card->g;
  x->Card = z;
}

/* FUNC(zx_cb_ItemData_REV_Card) */

void zx_cb_ItemData_REV_Card(struct zx_cb_ItemData_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->Card;
  if (!y) return;
  x->Card = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->Card->g;
    x->Card = y;
    y = nxt;
  }
}

/* FUNC(zx_cb_ItemData_PUT_Card) */

void zx_cb_ItemData_PUT_Card(struct zx_cb_ItemData_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->Card;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->Card = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_cb_ItemData_ADD_Card) */

void zx_cb_ItemData_ADD_Card(struct zx_cb_ItemData_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->Card->g;
    x->Card = z;
    return;
  case -1:
    y = x->Card;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->Card; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_cb_ItemData_DEL_Card) */

void zx_cb_ItemData_DEL_Card(struct zx_cb_ItemData_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Card = (struct zx_elem_s*)x->Card->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->Card;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->Card; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

#endif

/* FUNC(zx_cb_ItemData_GET_id) */
struct zx_str* zx_cb_ItemData_GET_id(struct zx_cb_ItemData_s* x) { return x->id; }
/* FUNC(zx_cb_ItemData_PUT_id) */
void zx_cb_ItemData_PUT_id(struct zx_cb_ItemData_s* x, struct zx_str* y) { x->id = y; }
/* FUNC(zx_cb_ItemData_GET_itemIDRef) */
struct zx_str* zx_cb_ItemData_GET_itemIDRef(struct zx_cb_ItemData_s* x) { return x->itemIDRef; }
/* FUNC(zx_cb_ItemData_PUT_itemIDRef) */
void zx_cb_ItemData_PUT_itemIDRef(struct zx_cb_ItemData_s* x, struct zx_str* y) { x->itemIDRef = y; }
/* FUNC(zx_cb_ItemData_GET_notSorted) */
struct zx_str* zx_cb_ItemData_GET_notSorted(struct zx_cb_ItemData_s* x) { return x->notSorted; }
/* FUNC(zx_cb_ItemData_PUT_notSorted) */
void zx_cb_ItemData_PUT_notSorted(struct zx_cb_ItemData_s* x, struct zx_str* y) { x->notSorted = y; }
/* FUNC(zx_cb_ItemData_GET_changeFormat) */
struct zx_str* zx_cb_ItemData_GET_changeFormat(struct zx_cb_ItemData_s* x) { return x->changeFormat; }
/* FUNC(zx_cb_ItemData_PUT_changeFormat) */
void zx_cb_ItemData_PUT_changeFormat(struct zx_cb_ItemData_s* x, struct zx_str* y) { x->changeFormat = y; }





/* FUNC(zx_cb_ItemSelection_GET_format) */
struct zx_str* zx_cb_ItemSelection_GET_format(struct zx_cb_ItemSelection_s* x) { return x->format; }
/* FUNC(zx_cb_ItemSelection_PUT_format) */
void zx_cb_ItemSelection_PUT_format(struct zx_cb_ItemSelection_s* x, struct zx_str* y) { x->format = y; }







#ifdef ZX_ENA_GETPUT

/* FUNC(zx_cb_Modification_NUM_Select) */

int zx_cb_Modification_NUM_Select(struct zx_cb_Modification_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Select; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_cb_Modification_GET_Select) */

struct zx_elem_s* zx_cb_Modification_GET_Select(struct zx_cb_Modification_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->Select; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_cb_Modification_POP_Select) */

struct zx_elem_s* zx_cb_Modification_POP_Select(struct zx_cb_Modification_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->Select;
  if (y)
    x->Select = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_cb_Modification_PUSH_Select) */

void zx_cb_Modification_PUSH_Select(struct zx_cb_Modification_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->Select->g;
  x->Select = z;
}

/* FUNC(zx_cb_Modification_REV_Select) */

void zx_cb_Modification_REV_Select(struct zx_cb_Modification_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->Select;
  if (!y) return;
  x->Select = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->Select->g;
    x->Select = y;
    y = nxt;
  }
}

/* FUNC(zx_cb_Modification_PUT_Select) */

void zx_cb_Modification_PUT_Select(struct zx_cb_Modification_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->Select;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->Select = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_cb_Modification_ADD_Select) */

void zx_cb_Modification_ADD_Select(struct zx_cb_Modification_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->Select->g;
    x->Select = z;
    return;
  case -1:
    y = x->Select;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->Select; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_cb_Modification_DEL_Select) */

void zx_cb_Modification_DEL_Select(struct zx_cb_Modification_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Select = (struct zx_elem_s*)x->Select->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->Select;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->Select; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_cb_Modification_NUM_NewData) */

int zx_cb_Modification_NUM_NewData(struct zx_cb_Modification_s* x)
{
  struct zx_cb_NewData_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->NewData; y; ++n, y = (struct zx_cb_NewData_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_cb_Modification_GET_NewData) */

struct zx_cb_NewData_s* zx_cb_Modification_GET_NewData(struct zx_cb_Modification_s* x, int n)
{
  struct zx_cb_NewData_s* y;
  if (!x) return 0;
  for (y = x->NewData; n>=0 && y; --n, y = (struct zx_cb_NewData_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_cb_Modification_POP_NewData) */

struct zx_cb_NewData_s* zx_cb_Modification_POP_NewData(struct zx_cb_Modification_s* x)
{
  struct zx_cb_NewData_s* y;
  if (!x) return 0;
  y = x->NewData;
  if (y)
    x->NewData = (struct zx_cb_NewData_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_cb_Modification_PUSH_NewData) */

void zx_cb_Modification_PUSH_NewData(struct zx_cb_Modification_s* x, struct zx_cb_NewData_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->NewData->gg.g;
  x->NewData = z;
}

/* FUNC(zx_cb_Modification_REV_NewData) */

void zx_cb_Modification_REV_NewData(struct zx_cb_Modification_s* x)
{
  struct zx_cb_NewData_s* nxt;
  struct zx_cb_NewData_s* y;
  if (!x) return;
  y = x->NewData;
  if (!y) return;
  x->NewData = 0;
  while (y) {
    nxt = (struct zx_cb_NewData_s*)y->gg.g.n;
    y->gg.g.n = &x->NewData->gg.g;
    x->NewData = y;
    y = nxt;
  }
}

/* FUNC(zx_cb_Modification_PUT_NewData) */

void zx_cb_Modification_PUT_NewData(struct zx_cb_Modification_s* x, int n, struct zx_cb_NewData_s* z)
{
  struct zx_cb_NewData_s* y;
  if (!x || !z) return;
  y = x->NewData;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->NewData = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_cb_NewData_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_cb_Modification_ADD_NewData) */

void zx_cb_Modification_ADD_NewData(struct zx_cb_Modification_s* x, int n, struct zx_cb_NewData_s* z)
{
  struct zx_cb_NewData_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->NewData->gg.g;
    x->NewData = z;
    return;
  case -1:
    y = x->NewData;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_cb_NewData_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->NewData; n > 1 && y; --n, y = (struct zx_cb_NewData_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_cb_Modification_DEL_NewData) */

void zx_cb_Modification_DEL_NewData(struct zx_cb_Modification_s* x, int n)
{
  struct zx_cb_NewData_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->NewData = (struct zx_cb_NewData_s*)x->NewData->gg.g.n;
    return;
  case -1:
    y = (struct zx_cb_NewData_s*)x->NewData;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_cb_NewData_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->NewData; n > 1 && y->gg.g.n; --n, y = (struct zx_cb_NewData_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif

/* FUNC(zx_cb_Modification_GET_id) */
struct zx_str* zx_cb_Modification_GET_id(struct zx_cb_Modification_s* x) { return x->id; }
/* FUNC(zx_cb_Modification_PUT_id) */
void zx_cb_Modification_PUT_id(struct zx_cb_Modification_s* x, struct zx_str* y) { x->id = y; }
/* FUNC(zx_cb_Modification_GET_itemID) */
struct zx_str* zx_cb_Modification_GET_itemID(struct zx_cb_Modification_s* x) { return x->itemID; }
/* FUNC(zx_cb_Modification_PUT_itemID) */
void zx_cb_Modification_PUT_itemID(struct zx_cb_Modification_s* x, struct zx_str* y) { x->itemID = y; }
/* FUNC(zx_cb_Modification_GET_notChangedSince) */
struct zx_str* zx_cb_Modification_GET_notChangedSince(struct zx_cb_Modification_s* x) { return x->notChangedSince; }
/* FUNC(zx_cb_Modification_PUT_notChangedSince) */
void zx_cb_Modification_PUT_notChangedSince(struct zx_cb_Modification_s* x, struct zx_str* y) { x->notChangedSince = y; }
/* FUNC(zx_cb_Modification_GET_objectType) */
struct zx_str* zx_cb_Modification_GET_objectType(struct zx_cb_Modification_s* x) { return x->objectType; }
/* FUNC(zx_cb_Modification_PUT_objectType) */
void zx_cb_Modification_PUT_objectType(struct zx_cb_Modification_s* x, struct zx_str* y) { x->objectType = y; }
/* FUNC(zx_cb_Modification_GET_overrideAllowed) */
struct zx_str* zx_cb_Modification_GET_overrideAllowed(struct zx_cb_Modification_s* x) { return x->overrideAllowed; }
/* FUNC(zx_cb_Modification_PUT_overrideAllowed) */
void zx_cb_Modification_PUT_overrideAllowed(struct zx_cb_Modification_s* x, struct zx_str* y) { x->overrideAllowed = y; }







#ifdef ZX_ENA_GETPUT

/* FUNC(zx_cb_Modify_NUM_ResourceID) */

int zx_cb_Modify_NUM_ResourceID(struct zx_cb_Modify_s* x)
{
  struct zx_cb_ResourceID_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->ResourceID; y; ++n, y = (struct zx_cb_ResourceID_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_cb_Modify_GET_ResourceID) */

struct zx_cb_ResourceID_s* zx_cb_Modify_GET_ResourceID(struct zx_cb_Modify_s* x, int n)
{
  struct zx_cb_ResourceID_s* y;
  if (!x) return 0;
  for (y = x->ResourceID; n>=0 && y; --n, y = (struct zx_cb_ResourceID_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_cb_Modify_POP_ResourceID) */

struct zx_cb_ResourceID_s* zx_cb_Modify_POP_ResourceID(struct zx_cb_Modify_s* x)
{
  struct zx_cb_ResourceID_s* y;
  if (!x) return 0;
  y = x->ResourceID;
  if (y)
    x->ResourceID = (struct zx_cb_ResourceID_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_cb_Modify_PUSH_ResourceID) */

void zx_cb_Modify_PUSH_ResourceID(struct zx_cb_Modify_s* x, struct zx_cb_ResourceID_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->ResourceID->gg.g;
  x->ResourceID = z;
}

/* FUNC(zx_cb_Modify_REV_ResourceID) */

void zx_cb_Modify_REV_ResourceID(struct zx_cb_Modify_s* x)
{
  struct zx_cb_ResourceID_s* nxt;
  struct zx_cb_ResourceID_s* y;
  if (!x) return;
  y = x->ResourceID;
  if (!y) return;
  x->ResourceID = 0;
  while (y) {
    nxt = (struct zx_cb_ResourceID_s*)y->gg.g.n;
    y->gg.g.n = &x->ResourceID->gg.g;
    x->ResourceID = y;
    y = nxt;
  }
}

/* FUNC(zx_cb_Modify_PUT_ResourceID) */

void zx_cb_Modify_PUT_ResourceID(struct zx_cb_Modify_s* x, int n, struct zx_cb_ResourceID_s* z)
{
  struct zx_cb_ResourceID_s* y;
  if (!x || !z) return;
  y = x->ResourceID;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->ResourceID = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_cb_ResourceID_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_cb_Modify_ADD_ResourceID) */

void zx_cb_Modify_ADD_ResourceID(struct zx_cb_Modify_s* x, int n, struct zx_cb_ResourceID_s* z)
{
  struct zx_cb_ResourceID_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->ResourceID->gg.g;
    x->ResourceID = z;
    return;
  case -1:
    y = x->ResourceID;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_cb_ResourceID_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->ResourceID; n > 1 && y; --n, y = (struct zx_cb_ResourceID_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_cb_Modify_DEL_ResourceID) */

void zx_cb_Modify_DEL_ResourceID(struct zx_cb_Modify_s* x, int n)
{
  struct zx_cb_ResourceID_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->ResourceID = (struct zx_cb_ResourceID_s*)x->ResourceID->gg.g.n;
    return;
  case -1:
    y = (struct zx_cb_ResourceID_s*)x->ResourceID;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_cb_ResourceID_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->ResourceID; n > 1 && y->gg.g.n; --n, y = (struct zx_cb_ResourceID_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_cb_Modify_NUM_EncryptedResourceID) */

int zx_cb_Modify_NUM_EncryptedResourceID(struct zx_cb_Modify_s* x)
{
  struct zx_cb_EncryptedResourceID_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->EncryptedResourceID; y; ++n, y = (struct zx_cb_EncryptedResourceID_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_cb_Modify_GET_EncryptedResourceID) */

struct zx_cb_EncryptedResourceID_s* zx_cb_Modify_GET_EncryptedResourceID(struct zx_cb_Modify_s* x, int n)
{
  struct zx_cb_EncryptedResourceID_s* y;
  if (!x) return 0;
  for (y = x->EncryptedResourceID; n>=0 && y; --n, y = (struct zx_cb_EncryptedResourceID_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_cb_Modify_POP_EncryptedResourceID) */

struct zx_cb_EncryptedResourceID_s* zx_cb_Modify_POP_EncryptedResourceID(struct zx_cb_Modify_s* x)
{
  struct zx_cb_EncryptedResourceID_s* y;
  if (!x) return 0;
  y = x->EncryptedResourceID;
  if (y)
    x->EncryptedResourceID = (struct zx_cb_EncryptedResourceID_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_cb_Modify_PUSH_EncryptedResourceID) */

void zx_cb_Modify_PUSH_EncryptedResourceID(struct zx_cb_Modify_s* x, struct zx_cb_EncryptedResourceID_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->EncryptedResourceID->gg.g;
  x->EncryptedResourceID = z;
}

/* FUNC(zx_cb_Modify_REV_EncryptedResourceID) */

void zx_cb_Modify_REV_EncryptedResourceID(struct zx_cb_Modify_s* x)
{
  struct zx_cb_EncryptedResourceID_s* nxt;
  struct zx_cb_EncryptedResourceID_s* y;
  if (!x) return;
  y = x->EncryptedResourceID;
  if (!y) return;
  x->EncryptedResourceID = 0;
  while (y) {
    nxt = (struct zx_cb_EncryptedResourceID_s*)y->gg.g.n;
    y->gg.g.n = &x->EncryptedResourceID->gg.g;
    x->EncryptedResourceID = y;
    y = nxt;
  }
}

/* FUNC(zx_cb_Modify_PUT_EncryptedResourceID) */

void zx_cb_Modify_PUT_EncryptedResourceID(struct zx_cb_Modify_s* x, int n, struct zx_cb_EncryptedResourceID_s* z)
{
  struct zx_cb_EncryptedResourceID_s* y;
  if (!x || !z) return;
  y = x->EncryptedResourceID;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->EncryptedResourceID = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_cb_EncryptedResourceID_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_cb_Modify_ADD_EncryptedResourceID) */

void zx_cb_Modify_ADD_EncryptedResourceID(struct zx_cb_Modify_s* x, int n, struct zx_cb_EncryptedResourceID_s* z)
{
  struct zx_cb_EncryptedResourceID_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->EncryptedResourceID->gg.g;
    x->EncryptedResourceID = z;
    return;
  case -1:
    y = x->EncryptedResourceID;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_cb_EncryptedResourceID_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->EncryptedResourceID; n > 1 && y; --n, y = (struct zx_cb_EncryptedResourceID_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_cb_Modify_DEL_EncryptedResourceID) */

void zx_cb_Modify_DEL_EncryptedResourceID(struct zx_cb_Modify_s* x, int n)
{
  struct zx_cb_EncryptedResourceID_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->EncryptedResourceID = (struct zx_cb_EncryptedResourceID_s*)x->EncryptedResourceID->gg.g.n;
    return;
  case -1:
    y = (struct zx_cb_EncryptedResourceID_s*)x->EncryptedResourceID;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_cb_EncryptedResourceID_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->EncryptedResourceID; n > 1 && y->gg.g.n; --n, y = (struct zx_cb_EncryptedResourceID_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_cb_Modify_NUM_Subscription) */

int zx_cb_Modify_NUM_Subscription(struct zx_cb_Modify_s* x)
{
  struct zx_cb_Subscription_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Subscription; y; ++n, y = (struct zx_cb_Subscription_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_cb_Modify_GET_Subscription) */

struct zx_cb_Subscription_s* zx_cb_Modify_GET_Subscription(struct zx_cb_Modify_s* x, int n)
{
  struct zx_cb_Subscription_s* y;
  if (!x) return 0;
  for (y = x->Subscription; n>=0 && y; --n, y = (struct zx_cb_Subscription_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_cb_Modify_POP_Subscription) */

struct zx_cb_Subscription_s* zx_cb_Modify_POP_Subscription(struct zx_cb_Modify_s* x)
{
  struct zx_cb_Subscription_s* y;
  if (!x) return 0;
  y = x->Subscription;
  if (y)
    x->Subscription = (struct zx_cb_Subscription_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_cb_Modify_PUSH_Subscription) */

void zx_cb_Modify_PUSH_Subscription(struct zx_cb_Modify_s* x, struct zx_cb_Subscription_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Subscription->gg.g;
  x->Subscription = z;
}

/* FUNC(zx_cb_Modify_REV_Subscription) */

void zx_cb_Modify_REV_Subscription(struct zx_cb_Modify_s* x)
{
  struct zx_cb_Subscription_s* nxt;
  struct zx_cb_Subscription_s* y;
  if (!x) return;
  y = x->Subscription;
  if (!y) return;
  x->Subscription = 0;
  while (y) {
    nxt = (struct zx_cb_Subscription_s*)y->gg.g.n;
    y->gg.g.n = &x->Subscription->gg.g;
    x->Subscription = y;
    y = nxt;
  }
}

/* FUNC(zx_cb_Modify_PUT_Subscription) */

void zx_cb_Modify_PUT_Subscription(struct zx_cb_Modify_s* x, int n, struct zx_cb_Subscription_s* z)
{
  struct zx_cb_Subscription_s* y;
  if (!x || !z) return;
  y = x->Subscription;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Subscription = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_cb_Subscription_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_cb_Modify_ADD_Subscription) */

void zx_cb_Modify_ADD_Subscription(struct zx_cb_Modify_s* x, int n, struct zx_cb_Subscription_s* z)
{
  struct zx_cb_Subscription_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->Subscription->gg.g;
    x->Subscription = z;
    return;
  case -1:
    y = x->Subscription;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_cb_Subscription_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Subscription; n > 1 && y; --n, y = (struct zx_cb_Subscription_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_cb_Modify_DEL_Subscription) */

void zx_cb_Modify_DEL_Subscription(struct zx_cb_Modify_s* x, int n)
{
  struct zx_cb_Subscription_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Subscription = (struct zx_cb_Subscription_s*)x->Subscription->gg.g.n;
    return;
  case -1:
    y = (struct zx_cb_Subscription_s*)x->Subscription;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_cb_Subscription_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Subscription; n > 1 && y->gg.g.n; --n, y = (struct zx_cb_Subscription_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_cb_Modify_NUM_Modification) */

int zx_cb_Modify_NUM_Modification(struct zx_cb_Modify_s* x)
{
  struct zx_cb_Modification_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Modification; y; ++n, y = (struct zx_cb_Modification_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_cb_Modify_GET_Modification) */

struct zx_cb_Modification_s* zx_cb_Modify_GET_Modification(struct zx_cb_Modify_s* x, int n)
{
  struct zx_cb_Modification_s* y;
  if (!x) return 0;
  for (y = x->Modification; n>=0 && y; --n, y = (struct zx_cb_Modification_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_cb_Modify_POP_Modification) */

struct zx_cb_Modification_s* zx_cb_Modify_POP_Modification(struct zx_cb_Modify_s* x)
{
  struct zx_cb_Modification_s* y;
  if (!x) return 0;
  y = x->Modification;
  if (y)
    x->Modification = (struct zx_cb_Modification_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_cb_Modify_PUSH_Modification) */

void zx_cb_Modify_PUSH_Modification(struct zx_cb_Modify_s* x, struct zx_cb_Modification_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Modification->gg.g;
  x->Modification = z;
}

/* FUNC(zx_cb_Modify_REV_Modification) */

void zx_cb_Modify_REV_Modification(struct zx_cb_Modify_s* x)
{
  struct zx_cb_Modification_s* nxt;
  struct zx_cb_Modification_s* y;
  if (!x) return;
  y = x->Modification;
  if (!y) return;
  x->Modification = 0;
  while (y) {
    nxt = (struct zx_cb_Modification_s*)y->gg.g.n;
    y->gg.g.n = &x->Modification->gg.g;
    x->Modification = y;
    y = nxt;
  }
}

/* FUNC(zx_cb_Modify_PUT_Modification) */

void zx_cb_Modify_PUT_Modification(struct zx_cb_Modify_s* x, int n, struct zx_cb_Modification_s* z)
{
  struct zx_cb_Modification_s* y;
  if (!x || !z) return;
  y = x->Modification;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Modification = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_cb_Modification_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_cb_Modify_ADD_Modification) */

void zx_cb_Modify_ADD_Modification(struct zx_cb_Modify_s* x, int n, struct zx_cb_Modification_s* z)
{
  struct zx_cb_Modification_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->Modification->gg.g;
    x->Modification = z;
    return;
  case -1:
    y = x->Modification;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_cb_Modification_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Modification; n > 1 && y; --n, y = (struct zx_cb_Modification_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_cb_Modify_DEL_Modification) */

void zx_cb_Modify_DEL_Modification(struct zx_cb_Modify_s* x, int n)
{
  struct zx_cb_Modification_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Modification = (struct zx_cb_Modification_s*)x->Modification->gg.g.n;
    return;
  case -1:
    y = (struct zx_cb_Modification_s*)x->Modification;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_cb_Modification_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Modification; n > 1 && y->gg.g.n; --n, y = (struct zx_cb_Modification_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_cb_Modify_NUM_ItemSelection) */

int zx_cb_Modify_NUM_ItemSelection(struct zx_cb_Modify_s* x)
{
  struct zx_cb_ItemSelection_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->ItemSelection; y; ++n, y = (struct zx_cb_ItemSelection_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_cb_Modify_GET_ItemSelection) */

struct zx_cb_ItemSelection_s* zx_cb_Modify_GET_ItemSelection(struct zx_cb_Modify_s* x, int n)
{
  struct zx_cb_ItemSelection_s* y;
  if (!x) return 0;
  for (y = x->ItemSelection; n>=0 && y; --n, y = (struct zx_cb_ItemSelection_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_cb_Modify_POP_ItemSelection) */

struct zx_cb_ItemSelection_s* zx_cb_Modify_POP_ItemSelection(struct zx_cb_Modify_s* x)
{
  struct zx_cb_ItemSelection_s* y;
  if (!x) return 0;
  y = x->ItemSelection;
  if (y)
    x->ItemSelection = (struct zx_cb_ItemSelection_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_cb_Modify_PUSH_ItemSelection) */

void zx_cb_Modify_PUSH_ItemSelection(struct zx_cb_Modify_s* x, struct zx_cb_ItemSelection_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->ItemSelection->gg.g;
  x->ItemSelection = z;
}

/* FUNC(zx_cb_Modify_REV_ItemSelection) */

void zx_cb_Modify_REV_ItemSelection(struct zx_cb_Modify_s* x)
{
  struct zx_cb_ItemSelection_s* nxt;
  struct zx_cb_ItemSelection_s* y;
  if (!x) return;
  y = x->ItemSelection;
  if (!y) return;
  x->ItemSelection = 0;
  while (y) {
    nxt = (struct zx_cb_ItemSelection_s*)y->gg.g.n;
    y->gg.g.n = &x->ItemSelection->gg.g;
    x->ItemSelection = y;
    y = nxt;
  }
}

/* FUNC(zx_cb_Modify_PUT_ItemSelection) */

void zx_cb_Modify_PUT_ItemSelection(struct zx_cb_Modify_s* x, int n, struct zx_cb_ItemSelection_s* z)
{
  struct zx_cb_ItemSelection_s* y;
  if (!x || !z) return;
  y = x->ItemSelection;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->ItemSelection = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_cb_ItemSelection_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_cb_Modify_ADD_ItemSelection) */

void zx_cb_Modify_ADD_ItemSelection(struct zx_cb_Modify_s* x, int n, struct zx_cb_ItemSelection_s* z)
{
  struct zx_cb_ItemSelection_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->ItemSelection->gg.g;
    x->ItemSelection = z;
    return;
  case -1:
    y = x->ItemSelection;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_cb_ItemSelection_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->ItemSelection; n > 1 && y; --n, y = (struct zx_cb_ItemSelection_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_cb_Modify_DEL_ItemSelection) */

void zx_cb_Modify_DEL_ItemSelection(struct zx_cb_Modify_s* x, int n)
{
  struct zx_cb_ItemSelection_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->ItemSelection = (struct zx_cb_ItemSelection_s*)x->ItemSelection->gg.g.n;
    return;
  case -1:
    y = (struct zx_cb_ItemSelection_s*)x->ItemSelection;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_cb_ItemSelection_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->ItemSelection; n > 1 && y->gg.g.n; --n, y = (struct zx_cb_ItemSelection_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_cb_Modify_NUM_Extension) */

int zx_cb_Modify_NUM_Extension(struct zx_cb_Modify_s* x)
{
  struct zx_cb_Extension_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Extension; y; ++n, y = (struct zx_cb_Extension_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_cb_Modify_GET_Extension) */

struct zx_cb_Extension_s* zx_cb_Modify_GET_Extension(struct zx_cb_Modify_s* x, int n)
{
  struct zx_cb_Extension_s* y;
  if (!x) return 0;
  for (y = x->Extension; n>=0 && y; --n, y = (struct zx_cb_Extension_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_cb_Modify_POP_Extension) */

struct zx_cb_Extension_s* zx_cb_Modify_POP_Extension(struct zx_cb_Modify_s* x)
{
  struct zx_cb_Extension_s* y;
  if (!x) return 0;
  y = x->Extension;
  if (y)
    x->Extension = (struct zx_cb_Extension_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_cb_Modify_PUSH_Extension) */

void zx_cb_Modify_PUSH_Extension(struct zx_cb_Modify_s* x, struct zx_cb_Extension_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Extension->gg.g;
  x->Extension = z;
}

/* FUNC(zx_cb_Modify_REV_Extension) */

void zx_cb_Modify_REV_Extension(struct zx_cb_Modify_s* x)
{
  struct zx_cb_Extension_s* nxt;
  struct zx_cb_Extension_s* y;
  if (!x) return;
  y = x->Extension;
  if (!y) return;
  x->Extension = 0;
  while (y) {
    nxt = (struct zx_cb_Extension_s*)y->gg.g.n;
    y->gg.g.n = &x->Extension->gg.g;
    x->Extension = y;
    y = nxt;
  }
}

/* FUNC(zx_cb_Modify_PUT_Extension) */

void zx_cb_Modify_PUT_Extension(struct zx_cb_Modify_s* x, int n, struct zx_cb_Extension_s* z)
{
  struct zx_cb_Extension_s* y;
  if (!x || !z) return;
  y = x->Extension;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Extension = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_cb_Extension_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_cb_Modify_ADD_Extension) */

void zx_cb_Modify_ADD_Extension(struct zx_cb_Modify_s* x, int n, struct zx_cb_Extension_s* z)
{
  struct zx_cb_Extension_s* y;
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
    for (; y->gg.g.n; y = (struct zx_cb_Extension_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Extension; n > 1 && y; --n, y = (struct zx_cb_Extension_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_cb_Modify_DEL_Extension) */

void zx_cb_Modify_DEL_Extension(struct zx_cb_Modify_s* x, int n)
{
  struct zx_cb_Extension_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Extension = (struct zx_cb_Extension_s*)x->Extension->gg.g.n;
    return;
  case -1:
    y = (struct zx_cb_Extension_s*)x->Extension;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_cb_Extension_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Extension; n > 1 && y->gg.g.n; --n, y = (struct zx_cb_Extension_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif

/* FUNC(zx_cb_Modify_GET_id) */
struct zx_str* zx_cb_Modify_GET_id(struct zx_cb_Modify_s* x) { return x->id; }
/* FUNC(zx_cb_Modify_PUT_id) */
void zx_cb_Modify_PUT_id(struct zx_cb_Modify_s* x, struct zx_str* y) { x->id = y; }







#ifdef ZX_ENA_GETPUT

/* FUNC(zx_cb_ModifyResponse_NUM_Status) */

int zx_cb_ModifyResponse_NUM_Status(struct zx_cb_ModifyResponse_s* x)
{
  struct zx_cb_Status_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Status; y; ++n, y = (struct zx_cb_Status_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_cb_ModifyResponse_GET_Status) */

struct zx_cb_Status_s* zx_cb_ModifyResponse_GET_Status(struct zx_cb_ModifyResponse_s* x, int n)
{
  struct zx_cb_Status_s* y;
  if (!x) return 0;
  for (y = x->Status; n>=0 && y; --n, y = (struct zx_cb_Status_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_cb_ModifyResponse_POP_Status) */

struct zx_cb_Status_s* zx_cb_ModifyResponse_POP_Status(struct zx_cb_ModifyResponse_s* x)
{
  struct zx_cb_Status_s* y;
  if (!x) return 0;
  y = x->Status;
  if (y)
    x->Status = (struct zx_cb_Status_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_cb_ModifyResponse_PUSH_Status) */

void zx_cb_ModifyResponse_PUSH_Status(struct zx_cb_ModifyResponse_s* x, struct zx_cb_Status_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Status->gg.g;
  x->Status = z;
}

/* FUNC(zx_cb_ModifyResponse_REV_Status) */

void zx_cb_ModifyResponse_REV_Status(struct zx_cb_ModifyResponse_s* x)
{
  struct zx_cb_Status_s* nxt;
  struct zx_cb_Status_s* y;
  if (!x) return;
  y = x->Status;
  if (!y) return;
  x->Status = 0;
  while (y) {
    nxt = (struct zx_cb_Status_s*)y->gg.g.n;
    y->gg.g.n = &x->Status->gg.g;
    x->Status = y;
    y = nxt;
  }
}

/* FUNC(zx_cb_ModifyResponse_PUT_Status) */

void zx_cb_ModifyResponse_PUT_Status(struct zx_cb_ModifyResponse_s* x, int n, struct zx_cb_Status_s* z)
{
  struct zx_cb_Status_s* y;
  if (!x || !z) return;
  y = x->Status;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Status = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_cb_Status_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_cb_ModifyResponse_ADD_Status) */

void zx_cb_ModifyResponse_ADD_Status(struct zx_cb_ModifyResponse_s* x, int n, struct zx_cb_Status_s* z)
{
  struct zx_cb_Status_s* y;
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
    for (; y->gg.g.n; y = (struct zx_cb_Status_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Status; n > 1 && y; --n, y = (struct zx_cb_Status_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_cb_ModifyResponse_DEL_Status) */

void zx_cb_ModifyResponse_DEL_Status(struct zx_cb_ModifyResponse_s* x, int n)
{
  struct zx_cb_Status_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Status = (struct zx_cb_Status_s*)x->Status->gg.g.n;
    return;
  case -1:
    y = (struct zx_cb_Status_s*)x->Status;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_cb_Status_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Status; n > 1 && y->gg.g.n; --n, y = (struct zx_cb_Status_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_cb_ModifyResponse_NUM_ItemData) */

int zx_cb_ModifyResponse_NUM_ItemData(struct zx_cb_ModifyResponse_s* x)
{
  struct zx_cb_ItemData_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->ItemData; y; ++n, y = (struct zx_cb_ItemData_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_cb_ModifyResponse_GET_ItemData) */

struct zx_cb_ItemData_s* zx_cb_ModifyResponse_GET_ItemData(struct zx_cb_ModifyResponse_s* x, int n)
{
  struct zx_cb_ItemData_s* y;
  if (!x) return 0;
  for (y = x->ItemData; n>=0 && y; --n, y = (struct zx_cb_ItemData_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_cb_ModifyResponse_POP_ItemData) */

struct zx_cb_ItemData_s* zx_cb_ModifyResponse_POP_ItemData(struct zx_cb_ModifyResponse_s* x)
{
  struct zx_cb_ItemData_s* y;
  if (!x) return 0;
  y = x->ItemData;
  if (y)
    x->ItemData = (struct zx_cb_ItemData_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_cb_ModifyResponse_PUSH_ItemData) */

void zx_cb_ModifyResponse_PUSH_ItemData(struct zx_cb_ModifyResponse_s* x, struct zx_cb_ItemData_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->ItemData->gg.g;
  x->ItemData = z;
}

/* FUNC(zx_cb_ModifyResponse_REV_ItemData) */

void zx_cb_ModifyResponse_REV_ItemData(struct zx_cb_ModifyResponse_s* x)
{
  struct zx_cb_ItemData_s* nxt;
  struct zx_cb_ItemData_s* y;
  if (!x) return;
  y = x->ItemData;
  if (!y) return;
  x->ItemData = 0;
  while (y) {
    nxt = (struct zx_cb_ItemData_s*)y->gg.g.n;
    y->gg.g.n = &x->ItemData->gg.g;
    x->ItemData = y;
    y = nxt;
  }
}

/* FUNC(zx_cb_ModifyResponse_PUT_ItemData) */

void zx_cb_ModifyResponse_PUT_ItemData(struct zx_cb_ModifyResponse_s* x, int n, struct zx_cb_ItemData_s* z)
{
  struct zx_cb_ItemData_s* y;
  if (!x || !z) return;
  y = x->ItemData;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->ItemData = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_cb_ItemData_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_cb_ModifyResponse_ADD_ItemData) */

void zx_cb_ModifyResponse_ADD_ItemData(struct zx_cb_ModifyResponse_s* x, int n, struct zx_cb_ItemData_s* z)
{
  struct zx_cb_ItemData_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->ItemData->gg.g;
    x->ItemData = z;
    return;
  case -1:
    y = x->ItemData;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_cb_ItemData_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->ItemData; n > 1 && y; --n, y = (struct zx_cb_ItemData_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_cb_ModifyResponse_DEL_ItemData) */

void zx_cb_ModifyResponse_DEL_ItemData(struct zx_cb_ModifyResponse_s* x, int n)
{
  struct zx_cb_ItemData_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->ItemData = (struct zx_cb_ItemData_s*)x->ItemData->gg.g.n;
    return;
  case -1:
    y = (struct zx_cb_ItemData_s*)x->ItemData;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_cb_ItemData_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->ItemData; n > 1 && y->gg.g.n; --n, y = (struct zx_cb_ItemData_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_cb_ModifyResponse_NUM_Extension) */

int zx_cb_ModifyResponse_NUM_Extension(struct zx_cb_ModifyResponse_s* x)
{
  struct zx_cb_Extension_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Extension; y; ++n, y = (struct zx_cb_Extension_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_cb_ModifyResponse_GET_Extension) */

struct zx_cb_Extension_s* zx_cb_ModifyResponse_GET_Extension(struct zx_cb_ModifyResponse_s* x, int n)
{
  struct zx_cb_Extension_s* y;
  if (!x) return 0;
  for (y = x->Extension; n>=0 && y; --n, y = (struct zx_cb_Extension_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_cb_ModifyResponse_POP_Extension) */

struct zx_cb_Extension_s* zx_cb_ModifyResponse_POP_Extension(struct zx_cb_ModifyResponse_s* x)
{
  struct zx_cb_Extension_s* y;
  if (!x) return 0;
  y = x->Extension;
  if (y)
    x->Extension = (struct zx_cb_Extension_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_cb_ModifyResponse_PUSH_Extension) */

void zx_cb_ModifyResponse_PUSH_Extension(struct zx_cb_ModifyResponse_s* x, struct zx_cb_Extension_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Extension->gg.g;
  x->Extension = z;
}

/* FUNC(zx_cb_ModifyResponse_REV_Extension) */

void zx_cb_ModifyResponse_REV_Extension(struct zx_cb_ModifyResponse_s* x)
{
  struct zx_cb_Extension_s* nxt;
  struct zx_cb_Extension_s* y;
  if (!x) return;
  y = x->Extension;
  if (!y) return;
  x->Extension = 0;
  while (y) {
    nxt = (struct zx_cb_Extension_s*)y->gg.g.n;
    y->gg.g.n = &x->Extension->gg.g;
    x->Extension = y;
    y = nxt;
  }
}

/* FUNC(zx_cb_ModifyResponse_PUT_Extension) */

void zx_cb_ModifyResponse_PUT_Extension(struct zx_cb_ModifyResponse_s* x, int n, struct zx_cb_Extension_s* z)
{
  struct zx_cb_Extension_s* y;
  if (!x || !z) return;
  y = x->Extension;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Extension = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_cb_Extension_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_cb_ModifyResponse_ADD_Extension) */

void zx_cb_ModifyResponse_ADD_Extension(struct zx_cb_ModifyResponse_s* x, int n, struct zx_cb_Extension_s* z)
{
  struct zx_cb_Extension_s* y;
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
    for (; y->gg.g.n; y = (struct zx_cb_Extension_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Extension; n > 1 && y; --n, y = (struct zx_cb_Extension_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_cb_ModifyResponse_DEL_Extension) */

void zx_cb_ModifyResponse_DEL_Extension(struct zx_cb_ModifyResponse_s* x, int n)
{
  struct zx_cb_Extension_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Extension = (struct zx_cb_Extension_s*)x->Extension->gg.g.n;
    return;
  case -1:
    y = (struct zx_cb_Extension_s*)x->Extension;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_cb_Extension_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Extension; n > 1 && y->gg.g.n; --n, y = (struct zx_cb_Extension_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif

/* FUNC(zx_cb_ModifyResponse_GET_id) */
struct zx_str* zx_cb_ModifyResponse_GET_id(struct zx_cb_ModifyResponse_s* x) { return x->id; }
/* FUNC(zx_cb_ModifyResponse_PUT_id) */
void zx_cb_ModifyResponse_PUT_id(struct zx_cb_ModifyResponse_s* x, struct zx_str* y) { x->id = y; }
/* FUNC(zx_cb_ModifyResponse_GET_timeStamp) */
struct zx_str* zx_cb_ModifyResponse_GET_timeStamp(struct zx_cb_ModifyResponse_s* x) { return x->timeStamp; }
/* FUNC(zx_cb_ModifyResponse_PUT_timeStamp) */
void zx_cb_ModifyResponse_PUT_timeStamp(struct zx_cb_ModifyResponse_s* x, struct zx_str* y) { x->timeStamp = y; }







#ifdef ZX_ENA_GETPUT

/* FUNC(zx_cb_NewData_NUM_Card) */

int zx_cb_NewData_NUM_Card(struct zx_cb_NewData_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Card; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_cb_NewData_GET_Card) */

struct zx_elem_s* zx_cb_NewData_GET_Card(struct zx_cb_NewData_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->Card; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_cb_NewData_POP_Card) */

struct zx_elem_s* zx_cb_NewData_POP_Card(struct zx_cb_NewData_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->Card;
  if (y)
    x->Card = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_cb_NewData_PUSH_Card) */

void zx_cb_NewData_PUSH_Card(struct zx_cb_NewData_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->Card->g;
  x->Card = z;
}

/* FUNC(zx_cb_NewData_REV_Card) */

void zx_cb_NewData_REV_Card(struct zx_cb_NewData_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->Card;
  if (!y) return;
  x->Card = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->Card->g;
    x->Card = y;
    y = nxt;
  }
}

/* FUNC(zx_cb_NewData_PUT_Card) */

void zx_cb_NewData_PUT_Card(struct zx_cb_NewData_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->Card;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->Card = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_cb_NewData_ADD_Card) */

void zx_cb_NewData_ADD_Card(struct zx_cb_NewData_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->Card->g;
    x->Card = z;
    return;
  case -1:
    y = x->Card;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->Card; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_cb_NewData_DEL_Card) */

void zx_cb_NewData_DEL_Card(struct zx_cb_NewData_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Card = (struct zx_elem_s*)x->Card->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->Card;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->Card; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

#endif








#ifdef ZX_ENA_GETPUT

/* FUNC(zx_cb_Notification_NUM_ItemData) */

int zx_cb_Notification_NUM_ItemData(struct zx_cb_Notification_s* x)
{
  struct zx_cb_ItemData_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->ItemData; y; ++n, y = (struct zx_cb_ItemData_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_cb_Notification_GET_ItemData) */

struct zx_cb_ItemData_s* zx_cb_Notification_GET_ItemData(struct zx_cb_Notification_s* x, int n)
{
  struct zx_cb_ItemData_s* y;
  if (!x) return 0;
  for (y = x->ItemData; n>=0 && y; --n, y = (struct zx_cb_ItemData_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_cb_Notification_POP_ItemData) */

struct zx_cb_ItemData_s* zx_cb_Notification_POP_ItemData(struct zx_cb_Notification_s* x)
{
  struct zx_cb_ItemData_s* y;
  if (!x) return 0;
  y = x->ItemData;
  if (y)
    x->ItemData = (struct zx_cb_ItemData_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_cb_Notification_PUSH_ItemData) */

void zx_cb_Notification_PUSH_ItemData(struct zx_cb_Notification_s* x, struct zx_cb_ItemData_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->ItemData->gg.g;
  x->ItemData = z;
}

/* FUNC(zx_cb_Notification_REV_ItemData) */

void zx_cb_Notification_REV_ItemData(struct zx_cb_Notification_s* x)
{
  struct zx_cb_ItemData_s* nxt;
  struct zx_cb_ItemData_s* y;
  if (!x) return;
  y = x->ItemData;
  if (!y) return;
  x->ItemData = 0;
  while (y) {
    nxt = (struct zx_cb_ItemData_s*)y->gg.g.n;
    y->gg.g.n = &x->ItemData->gg.g;
    x->ItemData = y;
    y = nxt;
  }
}

/* FUNC(zx_cb_Notification_PUT_ItemData) */

void zx_cb_Notification_PUT_ItemData(struct zx_cb_Notification_s* x, int n, struct zx_cb_ItemData_s* z)
{
  struct zx_cb_ItemData_s* y;
  if (!x || !z) return;
  y = x->ItemData;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->ItemData = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_cb_ItemData_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_cb_Notification_ADD_ItemData) */

void zx_cb_Notification_ADD_ItemData(struct zx_cb_Notification_s* x, int n, struct zx_cb_ItemData_s* z)
{
  struct zx_cb_ItemData_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->ItemData->gg.g;
    x->ItemData = z;
    return;
  case -1:
    y = x->ItemData;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_cb_ItemData_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->ItemData; n > 1 && y; --n, y = (struct zx_cb_ItemData_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_cb_Notification_DEL_ItemData) */

void zx_cb_Notification_DEL_ItemData(struct zx_cb_Notification_s* x, int n)
{
  struct zx_cb_ItemData_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->ItemData = (struct zx_cb_ItemData_s*)x->ItemData->gg.g.n;
    return;
  case -1:
    y = (struct zx_cb_ItemData_s*)x->ItemData;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_cb_ItemData_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->ItemData; n > 1 && y->gg.g.n; --n, y = (struct zx_cb_ItemData_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif

/* FUNC(zx_cb_Notification_GET_endReason) */
struct zx_str* zx_cb_Notification_GET_endReason(struct zx_cb_Notification_s* x) { return x->endReason; }
/* FUNC(zx_cb_Notification_PUT_endReason) */
void zx_cb_Notification_PUT_endReason(struct zx_cb_Notification_s* x, struct zx_str* y) { x->endReason = y; }
/* FUNC(zx_cb_Notification_GET_expires) */
struct zx_str* zx_cb_Notification_GET_expires(struct zx_cb_Notification_s* x) { return x->expires; }
/* FUNC(zx_cb_Notification_PUT_expires) */
void zx_cb_Notification_PUT_expires(struct zx_cb_Notification_s* x, struct zx_str* y) { x->expires = y; }
/* FUNC(zx_cb_Notification_GET_id) */
struct zx_str* zx_cb_Notification_GET_id(struct zx_cb_Notification_s* x) { return x->id; }
/* FUNC(zx_cb_Notification_PUT_id) */
void zx_cb_Notification_PUT_id(struct zx_cb_Notification_s* x, struct zx_str* y) { x->id = y; }
/* FUNC(zx_cb_Notification_GET_subscriptionID) */
struct zx_str* zx_cb_Notification_GET_subscriptionID(struct zx_cb_Notification_s* x) { return x->subscriptionID; }
/* FUNC(zx_cb_Notification_PUT_subscriptionID) */
void zx_cb_Notification_PUT_subscriptionID(struct zx_cb_Notification_s* x, struct zx_str* y) { x->subscriptionID = y; }







#ifdef ZX_ENA_GETPUT

/* FUNC(zx_cb_Notify_NUM_Notification) */

int zx_cb_Notify_NUM_Notification(struct zx_cb_Notify_s* x)
{
  struct zx_cb_Notification_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Notification; y; ++n, y = (struct zx_cb_Notification_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_cb_Notify_GET_Notification) */

struct zx_cb_Notification_s* zx_cb_Notify_GET_Notification(struct zx_cb_Notify_s* x, int n)
{
  struct zx_cb_Notification_s* y;
  if (!x) return 0;
  for (y = x->Notification; n>=0 && y; --n, y = (struct zx_cb_Notification_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_cb_Notify_POP_Notification) */

struct zx_cb_Notification_s* zx_cb_Notify_POP_Notification(struct zx_cb_Notify_s* x)
{
  struct zx_cb_Notification_s* y;
  if (!x) return 0;
  y = x->Notification;
  if (y)
    x->Notification = (struct zx_cb_Notification_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_cb_Notify_PUSH_Notification) */

void zx_cb_Notify_PUSH_Notification(struct zx_cb_Notify_s* x, struct zx_cb_Notification_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Notification->gg.g;
  x->Notification = z;
}

/* FUNC(zx_cb_Notify_REV_Notification) */

void zx_cb_Notify_REV_Notification(struct zx_cb_Notify_s* x)
{
  struct zx_cb_Notification_s* nxt;
  struct zx_cb_Notification_s* y;
  if (!x) return;
  y = x->Notification;
  if (!y) return;
  x->Notification = 0;
  while (y) {
    nxt = (struct zx_cb_Notification_s*)y->gg.g.n;
    y->gg.g.n = &x->Notification->gg.g;
    x->Notification = y;
    y = nxt;
  }
}

/* FUNC(zx_cb_Notify_PUT_Notification) */

void zx_cb_Notify_PUT_Notification(struct zx_cb_Notify_s* x, int n, struct zx_cb_Notification_s* z)
{
  struct zx_cb_Notification_s* y;
  if (!x || !z) return;
  y = x->Notification;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Notification = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_cb_Notification_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_cb_Notify_ADD_Notification) */

void zx_cb_Notify_ADD_Notification(struct zx_cb_Notify_s* x, int n, struct zx_cb_Notification_s* z)
{
  struct zx_cb_Notification_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->Notification->gg.g;
    x->Notification = z;
    return;
  case -1:
    y = x->Notification;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_cb_Notification_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Notification; n > 1 && y; --n, y = (struct zx_cb_Notification_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_cb_Notify_DEL_Notification) */

void zx_cb_Notify_DEL_Notification(struct zx_cb_Notify_s* x, int n)
{
  struct zx_cb_Notification_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Notification = (struct zx_cb_Notification_s*)x->Notification->gg.g.n;
    return;
  case -1:
    y = (struct zx_cb_Notification_s*)x->Notification;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_cb_Notification_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Notification; n > 1 && y->gg.g.n; --n, y = (struct zx_cb_Notification_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_cb_Notify_NUM_Extension) */

int zx_cb_Notify_NUM_Extension(struct zx_cb_Notify_s* x)
{
  struct zx_cb_Extension_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Extension; y; ++n, y = (struct zx_cb_Extension_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_cb_Notify_GET_Extension) */

struct zx_cb_Extension_s* zx_cb_Notify_GET_Extension(struct zx_cb_Notify_s* x, int n)
{
  struct zx_cb_Extension_s* y;
  if (!x) return 0;
  for (y = x->Extension; n>=0 && y; --n, y = (struct zx_cb_Extension_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_cb_Notify_POP_Extension) */

struct zx_cb_Extension_s* zx_cb_Notify_POP_Extension(struct zx_cb_Notify_s* x)
{
  struct zx_cb_Extension_s* y;
  if (!x) return 0;
  y = x->Extension;
  if (y)
    x->Extension = (struct zx_cb_Extension_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_cb_Notify_PUSH_Extension) */

void zx_cb_Notify_PUSH_Extension(struct zx_cb_Notify_s* x, struct zx_cb_Extension_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Extension->gg.g;
  x->Extension = z;
}

/* FUNC(zx_cb_Notify_REV_Extension) */

void zx_cb_Notify_REV_Extension(struct zx_cb_Notify_s* x)
{
  struct zx_cb_Extension_s* nxt;
  struct zx_cb_Extension_s* y;
  if (!x) return;
  y = x->Extension;
  if (!y) return;
  x->Extension = 0;
  while (y) {
    nxt = (struct zx_cb_Extension_s*)y->gg.g.n;
    y->gg.g.n = &x->Extension->gg.g;
    x->Extension = y;
    y = nxt;
  }
}

/* FUNC(zx_cb_Notify_PUT_Extension) */

void zx_cb_Notify_PUT_Extension(struct zx_cb_Notify_s* x, int n, struct zx_cb_Extension_s* z)
{
  struct zx_cb_Extension_s* y;
  if (!x || !z) return;
  y = x->Extension;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Extension = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_cb_Extension_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_cb_Notify_ADD_Extension) */

void zx_cb_Notify_ADD_Extension(struct zx_cb_Notify_s* x, int n, struct zx_cb_Extension_s* z)
{
  struct zx_cb_Extension_s* y;
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
    for (; y->gg.g.n; y = (struct zx_cb_Extension_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Extension; n > 1 && y; --n, y = (struct zx_cb_Extension_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_cb_Notify_DEL_Extension) */

void zx_cb_Notify_DEL_Extension(struct zx_cb_Notify_s* x, int n)
{
  struct zx_cb_Extension_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Extension = (struct zx_cb_Extension_s*)x->Extension->gg.g.n;
    return;
  case -1:
    y = (struct zx_cb_Extension_s*)x->Extension;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_cb_Extension_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Extension; n > 1 && y->gg.g.n; --n, y = (struct zx_cb_Extension_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif

/* FUNC(zx_cb_Notify_GET_id) */
struct zx_str* zx_cb_Notify_GET_id(struct zx_cb_Notify_s* x) { return x->id; }
/* FUNC(zx_cb_Notify_PUT_id) */
void zx_cb_Notify_PUT_id(struct zx_cb_Notify_s* x, struct zx_str* y) { x->id = y; }
/* FUNC(zx_cb_Notify_GET_timeStamp) */
struct zx_str* zx_cb_Notify_GET_timeStamp(struct zx_cb_Notify_s* x) { return x->timeStamp; }
/* FUNC(zx_cb_Notify_PUT_timeStamp) */
void zx_cb_Notify_PUT_timeStamp(struct zx_cb_Notify_s* x, struct zx_str* y) { x->timeStamp = y; }







#ifdef ZX_ENA_GETPUT

/* FUNC(zx_cb_NotifyAdminTo_NUM_SecurityMechID) */

int zx_cb_NotifyAdminTo_NUM_SecurityMechID(struct zx_cb_NotifyAdminTo_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->SecurityMechID; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_cb_NotifyAdminTo_GET_SecurityMechID) */

struct zx_elem_s* zx_cb_NotifyAdminTo_GET_SecurityMechID(struct zx_cb_NotifyAdminTo_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->SecurityMechID; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_cb_NotifyAdminTo_POP_SecurityMechID) */

struct zx_elem_s* zx_cb_NotifyAdminTo_POP_SecurityMechID(struct zx_cb_NotifyAdminTo_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->SecurityMechID;
  if (y)
    x->SecurityMechID = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_cb_NotifyAdminTo_PUSH_SecurityMechID) */

void zx_cb_NotifyAdminTo_PUSH_SecurityMechID(struct zx_cb_NotifyAdminTo_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->SecurityMechID->g;
  x->SecurityMechID = z;
}

/* FUNC(zx_cb_NotifyAdminTo_REV_SecurityMechID) */

void zx_cb_NotifyAdminTo_REV_SecurityMechID(struct zx_cb_NotifyAdminTo_s* x)
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

/* FUNC(zx_cb_NotifyAdminTo_PUT_SecurityMechID) */

void zx_cb_NotifyAdminTo_PUT_SecurityMechID(struct zx_cb_NotifyAdminTo_s* x, int n, struct zx_elem_s* z)
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

/* FUNC(zx_cb_NotifyAdminTo_ADD_SecurityMechID) */

void zx_cb_NotifyAdminTo_ADD_SecurityMechID(struct zx_cb_NotifyAdminTo_s* x, int n, struct zx_elem_s* z)
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

/* FUNC(zx_cb_NotifyAdminTo_DEL_SecurityMechID) */

void zx_cb_NotifyAdminTo_DEL_SecurityMechID(struct zx_cb_NotifyAdminTo_s* x, int n)
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

/* FUNC(zx_cb_NotifyAdminTo_NUM_Credential) */

int zx_cb_NotifyAdminTo_NUM_Credential(struct zx_cb_NotifyAdminTo_s* x)
{
  struct zx_cb_Credential_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Credential; y; ++n, y = (struct zx_cb_Credential_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_cb_NotifyAdminTo_GET_Credential) */

struct zx_cb_Credential_s* zx_cb_NotifyAdminTo_GET_Credential(struct zx_cb_NotifyAdminTo_s* x, int n)
{
  struct zx_cb_Credential_s* y;
  if (!x) return 0;
  for (y = x->Credential; n>=0 && y; --n, y = (struct zx_cb_Credential_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_cb_NotifyAdminTo_POP_Credential) */

struct zx_cb_Credential_s* zx_cb_NotifyAdminTo_POP_Credential(struct zx_cb_NotifyAdminTo_s* x)
{
  struct zx_cb_Credential_s* y;
  if (!x) return 0;
  y = x->Credential;
  if (y)
    x->Credential = (struct zx_cb_Credential_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_cb_NotifyAdminTo_PUSH_Credential) */

void zx_cb_NotifyAdminTo_PUSH_Credential(struct zx_cb_NotifyAdminTo_s* x, struct zx_cb_Credential_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Credential->gg.g;
  x->Credential = z;
}

/* FUNC(zx_cb_NotifyAdminTo_REV_Credential) */

void zx_cb_NotifyAdminTo_REV_Credential(struct zx_cb_NotifyAdminTo_s* x)
{
  struct zx_cb_Credential_s* nxt;
  struct zx_cb_Credential_s* y;
  if (!x) return;
  y = x->Credential;
  if (!y) return;
  x->Credential = 0;
  while (y) {
    nxt = (struct zx_cb_Credential_s*)y->gg.g.n;
    y->gg.g.n = &x->Credential->gg.g;
    x->Credential = y;
    y = nxt;
  }
}

/* FUNC(zx_cb_NotifyAdminTo_PUT_Credential) */

void zx_cb_NotifyAdminTo_PUT_Credential(struct zx_cb_NotifyAdminTo_s* x, int n, struct zx_cb_Credential_s* z)
{
  struct zx_cb_Credential_s* y;
  if (!x || !z) return;
  y = x->Credential;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Credential = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_cb_Credential_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_cb_NotifyAdminTo_ADD_Credential) */

void zx_cb_NotifyAdminTo_ADD_Credential(struct zx_cb_NotifyAdminTo_s* x, int n, struct zx_cb_Credential_s* z)
{
  struct zx_cb_Credential_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->Credential->gg.g;
    x->Credential = z;
    return;
  case -1:
    y = x->Credential;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_cb_Credential_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Credential; n > 1 && y; --n, y = (struct zx_cb_Credential_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_cb_NotifyAdminTo_DEL_Credential) */

void zx_cb_NotifyAdminTo_DEL_Credential(struct zx_cb_NotifyAdminTo_s* x, int n)
{
  struct zx_cb_Credential_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Credential = (struct zx_cb_Credential_s*)x->Credential->gg.g.n;
    return;
  case -1:
    y = (struct zx_cb_Credential_s*)x->Credential;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_cb_Credential_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Credential; n > 1 && y->gg.g.n; --n, y = (struct zx_cb_Credential_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_cb_NotifyAdminTo_NUM_Endpoint) */

int zx_cb_NotifyAdminTo_NUM_Endpoint(struct zx_cb_NotifyAdminTo_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Endpoint; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_cb_NotifyAdminTo_GET_Endpoint) */

struct zx_elem_s* zx_cb_NotifyAdminTo_GET_Endpoint(struct zx_cb_NotifyAdminTo_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->Endpoint; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_cb_NotifyAdminTo_POP_Endpoint) */

struct zx_elem_s* zx_cb_NotifyAdminTo_POP_Endpoint(struct zx_cb_NotifyAdminTo_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->Endpoint;
  if (y)
    x->Endpoint = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_cb_NotifyAdminTo_PUSH_Endpoint) */

void zx_cb_NotifyAdminTo_PUSH_Endpoint(struct zx_cb_NotifyAdminTo_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->Endpoint->g;
  x->Endpoint = z;
}

/* FUNC(zx_cb_NotifyAdminTo_REV_Endpoint) */

void zx_cb_NotifyAdminTo_REV_Endpoint(struct zx_cb_NotifyAdminTo_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->Endpoint;
  if (!y) return;
  x->Endpoint = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->Endpoint->g;
    x->Endpoint = y;
    y = nxt;
  }
}

/* FUNC(zx_cb_NotifyAdminTo_PUT_Endpoint) */

void zx_cb_NotifyAdminTo_PUT_Endpoint(struct zx_cb_NotifyAdminTo_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->Endpoint;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->Endpoint = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_cb_NotifyAdminTo_ADD_Endpoint) */

void zx_cb_NotifyAdminTo_ADD_Endpoint(struct zx_cb_NotifyAdminTo_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->Endpoint->g;
    x->Endpoint = z;
    return;
  case -1:
    y = x->Endpoint;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->Endpoint; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_cb_NotifyAdminTo_DEL_Endpoint) */

void zx_cb_NotifyAdminTo_DEL_Endpoint(struct zx_cb_NotifyAdminTo_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Endpoint = (struct zx_elem_s*)x->Endpoint->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->Endpoint;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->Endpoint; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

#endif

/* FUNC(zx_cb_NotifyAdminTo_GET_id) */
struct zx_str* zx_cb_NotifyAdminTo_GET_id(struct zx_cb_NotifyAdminTo_s* x) { return x->id; }
/* FUNC(zx_cb_NotifyAdminTo_PUT_id) */
void zx_cb_NotifyAdminTo_PUT_id(struct zx_cb_NotifyAdminTo_s* x, struct zx_str* y) { x->id = y; }







#ifdef ZX_ENA_GETPUT

/* FUNC(zx_cb_NotifyResponse_NUM_Status) */

int zx_cb_NotifyResponse_NUM_Status(struct zx_cb_NotifyResponse_s* x)
{
  struct zx_cb_Status_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Status; y; ++n, y = (struct zx_cb_Status_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_cb_NotifyResponse_GET_Status) */

struct zx_cb_Status_s* zx_cb_NotifyResponse_GET_Status(struct zx_cb_NotifyResponse_s* x, int n)
{
  struct zx_cb_Status_s* y;
  if (!x) return 0;
  for (y = x->Status; n>=0 && y; --n, y = (struct zx_cb_Status_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_cb_NotifyResponse_POP_Status) */

struct zx_cb_Status_s* zx_cb_NotifyResponse_POP_Status(struct zx_cb_NotifyResponse_s* x)
{
  struct zx_cb_Status_s* y;
  if (!x) return 0;
  y = x->Status;
  if (y)
    x->Status = (struct zx_cb_Status_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_cb_NotifyResponse_PUSH_Status) */

void zx_cb_NotifyResponse_PUSH_Status(struct zx_cb_NotifyResponse_s* x, struct zx_cb_Status_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Status->gg.g;
  x->Status = z;
}

/* FUNC(zx_cb_NotifyResponse_REV_Status) */

void zx_cb_NotifyResponse_REV_Status(struct zx_cb_NotifyResponse_s* x)
{
  struct zx_cb_Status_s* nxt;
  struct zx_cb_Status_s* y;
  if (!x) return;
  y = x->Status;
  if (!y) return;
  x->Status = 0;
  while (y) {
    nxt = (struct zx_cb_Status_s*)y->gg.g.n;
    y->gg.g.n = &x->Status->gg.g;
    x->Status = y;
    y = nxt;
  }
}

/* FUNC(zx_cb_NotifyResponse_PUT_Status) */

void zx_cb_NotifyResponse_PUT_Status(struct zx_cb_NotifyResponse_s* x, int n, struct zx_cb_Status_s* z)
{
  struct zx_cb_Status_s* y;
  if (!x || !z) return;
  y = x->Status;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Status = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_cb_Status_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_cb_NotifyResponse_ADD_Status) */

void zx_cb_NotifyResponse_ADD_Status(struct zx_cb_NotifyResponse_s* x, int n, struct zx_cb_Status_s* z)
{
  struct zx_cb_Status_s* y;
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
    for (; y->gg.g.n; y = (struct zx_cb_Status_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Status; n > 1 && y; --n, y = (struct zx_cb_Status_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_cb_NotifyResponse_DEL_Status) */

void zx_cb_NotifyResponse_DEL_Status(struct zx_cb_NotifyResponse_s* x, int n)
{
  struct zx_cb_Status_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Status = (struct zx_cb_Status_s*)x->Status->gg.g.n;
    return;
  case -1:
    y = (struct zx_cb_Status_s*)x->Status;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_cb_Status_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Status; n > 1 && y->gg.g.n; --n, y = (struct zx_cb_Status_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_cb_NotifyResponse_NUM_Extension) */

int zx_cb_NotifyResponse_NUM_Extension(struct zx_cb_NotifyResponse_s* x)
{
  struct zx_cb_Extension_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Extension; y; ++n, y = (struct zx_cb_Extension_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_cb_NotifyResponse_GET_Extension) */

struct zx_cb_Extension_s* zx_cb_NotifyResponse_GET_Extension(struct zx_cb_NotifyResponse_s* x, int n)
{
  struct zx_cb_Extension_s* y;
  if (!x) return 0;
  for (y = x->Extension; n>=0 && y; --n, y = (struct zx_cb_Extension_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_cb_NotifyResponse_POP_Extension) */

struct zx_cb_Extension_s* zx_cb_NotifyResponse_POP_Extension(struct zx_cb_NotifyResponse_s* x)
{
  struct zx_cb_Extension_s* y;
  if (!x) return 0;
  y = x->Extension;
  if (y)
    x->Extension = (struct zx_cb_Extension_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_cb_NotifyResponse_PUSH_Extension) */

void zx_cb_NotifyResponse_PUSH_Extension(struct zx_cb_NotifyResponse_s* x, struct zx_cb_Extension_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Extension->gg.g;
  x->Extension = z;
}

/* FUNC(zx_cb_NotifyResponse_REV_Extension) */

void zx_cb_NotifyResponse_REV_Extension(struct zx_cb_NotifyResponse_s* x)
{
  struct zx_cb_Extension_s* nxt;
  struct zx_cb_Extension_s* y;
  if (!x) return;
  y = x->Extension;
  if (!y) return;
  x->Extension = 0;
  while (y) {
    nxt = (struct zx_cb_Extension_s*)y->gg.g.n;
    y->gg.g.n = &x->Extension->gg.g;
    x->Extension = y;
    y = nxt;
  }
}

/* FUNC(zx_cb_NotifyResponse_PUT_Extension) */

void zx_cb_NotifyResponse_PUT_Extension(struct zx_cb_NotifyResponse_s* x, int n, struct zx_cb_Extension_s* z)
{
  struct zx_cb_Extension_s* y;
  if (!x || !z) return;
  y = x->Extension;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Extension = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_cb_Extension_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_cb_NotifyResponse_ADD_Extension) */

void zx_cb_NotifyResponse_ADD_Extension(struct zx_cb_NotifyResponse_s* x, int n, struct zx_cb_Extension_s* z)
{
  struct zx_cb_Extension_s* y;
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
    for (; y->gg.g.n; y = (struct zx_cb_Extension_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Extension; n > 1 && y; --n, y = (struct zx_cb_Extension_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_cb_NotifyResponse_DEL_Extension) */

void zx_cb_NotifyResponse_DEL_Extension(struct zx_cb_NotifyResponse_s* x, int n)
{
  struct zx_cb_Extension_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Extension = (struct zx_cb_Extension_s*)x->Extension->gg.g.n;
    return;
  case -1:
    y = (struct zx_cb_Extension_s*)x->Extension;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_cb_Extension_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Extension; n > 1 && y->gg.g.n; --n, y = (struct zx_cb_Extension_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif

/* FUNC(zx_cb_NotifyResponse_GET_id) */
struct zx_str* zx_cb_NotifyResponse_GET_id(struct zx_cb_NotifyResponse_s* x) { return x->id; }
/* FUNC(zx_cb_NotifyResponse_PUT_id) */
void zx_cb_NotifyResponse_PUT_id(struct zx_cb_NotifyResponse_s* x, struct zx_str* y) { x->id = y; }







#ifdef ZX_ENA_GETPUT

/* FUNC(zx_cb_NotifyTo_NUM_SecurityMechID) */

int zx_cb_NotifyTo_NUM_SecurityMechID(struct zx_cb_NotifyTo_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->SecurityMechID; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_cb_NotifyTo_GET_SecurityMechID) */

struct zx_elem_s* zx_cb_NotifyTo_GET_SecurityMechID(struct zx_cb_NotifyTo_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->SecurityMechID; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_cb_NotifyTo_POP_SecurityMechID) */

struct zx_elem_s* zx_cb_NotifyTo_POP_SecurityMechID(struct zx_cb_NotifyTo_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->SecurityMechID;
  if (y)
    x->SecurityMechID = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_cb_NotifyTo_PUSH_SecurityMechID) */

void zx_cb_NotifyTo_PUSH_SecurityMechID(struct zx_cb_NotifyTo_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->SecurityMechID->g;
  x->SecurityMechID = z;
}

/* FUNC(zx_cb_NotifyTo_REV_SecurityMechID) */

void zx_cb_NotifyTo_REV_SecurityMechID(struct zx_cb_NotifyTo_s* x)
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

/* FUNC(zx_cb_NotifyTo_PUT_SecurityMechID) */

void zx_cb_NotifyTo_PUT_SecurityMechID(struct zx_cb_NotifyTo_s* x, int n, struct zx_elem_s* z)
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

/* FUNC(zx_cb_NotifyTo_ADD_SecurityMechID) */

void zx_cb_NotifyTo_ADD_SecurityMechID(struct zx_cb_NotifyTo_s* x, int n, struct zx_elem_s* z)
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

/* FUNC(zx_cb_NotifyTo_DEL_SecurityMechID) */

void zx_cb_NotifyTo_DEL_SecurityMechID(struct zx_cb_NotifyTo_s* x, int n)
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

/* FUNC(zx_cb_NotifyTo_NUM_Credential) */

int zx_cb_NotifyTo_NUM_Credential(struct zx_cb_NotifyTo_s* x)
{
  struct zx_cb_Credential_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Credential; y; ++n, y = (struct zx_cb_Credential_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_cb_NotifyTo_GET_Credential) */

struct zx_cb_Credential_s* zx_cb_NotifyTo_GET_Credential(struct zx_cb_NotifyTo_s* x, int n)
{
  struct zx_cb_Credential_s* y;
  if (!x) return 0;
  for (y = x->Credential; n>=0 && y; --n, y = (struct zx_cb_Credential_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_cb_NotifyTo_POP_Credential) */

struct zx_cb_Credential_s* zx_cb_NotifyTo_POP_Credential(struct zx_cb_NotifyTo_s* x)
{
  struct zx_cb_Credential_s* y;
  if (!x) return 0;
  y = x->Credential;
  if (y)
    x->Credential = (struct zx_cb_Credential_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_cb_NotifyTo_PUSH_Credential) */

void zx_cb_NotifyTo_PUSH_Credential(struct zx_cb_NotifyTo_s* x, struct zx_cb_Credential_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Credential->gg.g;
  x->Credential = z;
}

/* FUNC(zx_cb_NotifyTo_REV_Credential) */

void zx_cb_NotifyTo_REV_Credential(struct zx_cb_NotifyTo_s* x)
{
  struct zx_cb_Credential_s* nxt;
  struct zx_cb_Credential_s* y;
  if (!x) return;
  y = x->Credential;
  if (!y) return;
  x->Credential = 0;
  while (y) {
    nxt = (struct zx_cb_Credential_s*)y->gg.g.n;
    y->gg.g.n = &x->Credential->gg.g;
    x->Credential = y;
    y = nxt;
  }
}

/* FUNC(zx_cb_NotifyTo_PUT_Credential) */

void zx_cb_NotifyTo_PUT_Credential(struct zx_cb_NotifyTo_s* x, int n, struct zx_cb_Credential_s* z)
{
  struct zx_cb_Credential_s* y;
  if (!x || !z) return;
  y = x->Credential;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Credential = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_cb_Credential_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_cb_NotifyTo_ADD_Credential) */

void zx_cb_NotifyTo_ADD_Credential(struct zx_cb_NotifyTo_s* x, int n, struct zx_cb_Credential_s* z)
{
  struct zx_cb_Credential_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->Credential->gg.g;
    x->Credential = z;
    return;
  case -1:
    y = x->Credential;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_cb_Credential_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Credential; n > 1 && y; --n, y = (struct zx_cb_Credential_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_cb_NotifyTo_DEL_Credential) */

void zx_cb_NotifyTo_DEL_Credential(struct zx_cb_NotifyTo_s* x, int n)
{
  struct zx_cb_Credential_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Credential = (struct zx_cb_Credential_s*)x->Credential->gg.g.n;
    return;
  case -1:
    y = (struct zx_cb_Credential_s*)x->Credential;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_cb_Credential_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Credential; n > 1 && y->gg.g.n; --n, y = (struct zx_cb_Credential_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_cb_NotifyTo_NUM_Endpoint) */

int zx_cb_NotifyTo_NUM_Endpoint(struct zx_cb_NotifyTo_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Endpoint; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_cb_NotifyTo_GET_Endpoint) */

struct zx_elem_s* zx_cb_NotifyTo_GET_Endpoint(struct zx_cb_NotifyTo_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->Endpoint; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_cb_NotifyTo_POP_Endpoint) */

struct zx_elem_s* zx_cb_NotifyTo_POP_Endpoint(struct zx_cb_NotifyTo_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->Endpoint;
  if (y)
    x->Endpoint = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_cb_NotifyTo_PUSH_Endpoint) */

void zx_cb_NotifyTo_PUSH_Endpoint(struct zx_cb_NotifyTo_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->Endpoint->g;
  x->Endpoint = z;
}

/* FUNC(zx_cb_NotifyTo_REV_Endpoint) */

void zx_cb_NotifyTo_REV_Endpoint(struct zx_cb_NotifyTo_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->Endpoint;
  if (!y) return;
  x->Endpoint = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->Endpoint->g;
    x->Endpoint = y;
    y = nxt;
  }
}

/* FUNC(zx_cb_NotifyTo_PUT_Endpoint) */

void zx_cb_NotifyTo_PUT_Endpoint(struct zx_cb_NotifyTo_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->Endpoint;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->Endpoint = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_cb_NotifyTo_ADD_Endpoint) */

void zx_cb_NotifyTo_ADD_Endpoint(struct zx_cb_NotifyTo_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->Endpoint->g;
    x->Endpoint = z;
    return;
  case -1:
    y = x->Endpoint;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->Endpoint; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_cb_NotifyTo_DEL_Endpoint) */

void zx_cb_NotifyTo_DEL_Endpoint(struct zx_cb_NotifyTo_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Endpoint = (struct zx_elem_s*)x->Endpoint->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->Endpoint;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->Endpoint; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

#endif

/* FUNC(zx_cb_NotifyTo_GET_id) */
struct zx_str* zx_cb_NotifyTo_GET_id(struct zx_cb_NotifyTo_s* x) { return x->id; }
/* FUNC(zx_cb_NotifyTo_PUT_id) */
void zx_cb_NotifyTo_PUT_id(struct zx_cb_NotifyTo_s* x, struct zx_str* y) { x->id = y; }







#ifdef ZX_ENA_GETPUT

/* FUNC(zx_cb_Query_NUM_ResourceID) */

int zx_cb_Query_NUM_ResourceID(struct zx_cb_Query_s* x)
{
  struct zx_cb_ResourceID_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->ResourceID; y; ++n, y = (struct zx_cb_ResourceID_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_cb_Query_GET_ResourceID) */

struct zx_cb_ResourceID_s* zx_cb_Query_GET_ResourceID(struct zx_cb_Query_s* x, int n)
{
  struct zx_cb_ResourceID_s* y;
  if (!x) return 0;
  for (y = x->ResourceID; n>=0 && y; --n, y = (struct zx_cb_ResourceID_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_cb_Query_POP_ResourceID) */

struct zx_cb_ResourceID_s* zx_cb_Query_POP_ResourceID(struct zx_cb_Query_s* x)
{
  struct zx_cb_ResourceID_s* y;
  if (!x) return 0;
  y = x->ResourceID;
  if (y)
    x->ResourceID = (struct zx_cb_ResourceID_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_cb_Query_PUSH_ResourceID) */

void zx_cb_Query_PUSH_ResourceID(struct zx_cb_Query_s* x, struct zx_cb_ResourceID_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->ResourceID->gg.g;
  x->ResourceID = z;
}

/* FUNC(zx_cb_Query_REV_ResourceID) */

void zx_cb_Query_REV_ResourceID(struct zx_cb_Query_s* x)
{
  struct zx_cb_ResourceID_s* nxt;
  struct zx_cb_ResourceID_s* y;
  if (!x) return;
  y = x->ResourceID;
  if (!y) return;
  x->ResourceID = 0;
  while (y) {
    nxt = (struct zx_cb_ResourceID_s*)y->gg.g.n;
    y->gg.g.n = &x->ResourceID->gg.g;
    x->ResourceID = y;
    y = nxt;
  }
}

/* FUNC(zx_cb_Query_PUT_ResourceID) */

void zx_cb_Query_PUT_ResourceID(struct zx_cb_Query_s* x, int n, struct zx_cb_ResourceID_s* z)
{
  struct zx_cb_ResourceID_s* y;
  if (!x || !z) return;
  y = x->ResourceID;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->ResourceID = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_cb_ResourceID_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_cb_Query_ADD_ResourceID) */

void zx_cb_Query_ADD_ResourceID(struct zx_cb_Query_s* x, int n, struct zx_cb_ResourceID_s* z)
{
  struct zx_cb_ResourceID_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->ResourceID->gg.g;
    x->ResourceID = z;
    return;
  case -1:
    y = x->ResourceID;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_cb_ResourceID_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->ResourceID; n > 1 && y; --n, y = (struct zx_cb_ResourceID_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_cb_Query_DEL_ResourceID) */

void zx_cb_Query_DEL_ResourceID(struct zx_cb_Query_s* x, int n)
{
  struct zx_cb_ResourceID_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->ResourceID = (struct zx_cb_ResourceID_s*)x->ResourceID->gg.g.n;
    return;
  case -1:
    y = (struct zx_cb_ResourceID_s*)x->ResourceID;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_cb_ResourceID_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->ResourceID; n > 1 && y->gg.g.n; --n, y = (struct zx_cb_ResourceID_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_cb_Query_NUM_EncryptedResourceID) */

int zx_cb_Query_NUM_EncryptedResourceID(struct zx_cb_Query_s* x)
{
  struct zx_cb_EncryptedResourceID_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->EncryptedResourceID; y; ++n, y = (struct zx_cb_EncryptedResourceID_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_cb_Query_GET_EncryptedResourceID) */

struct zx_cb_EncryptedResourceID_s* zx_cb_Query_GET_EncryptedResourceID(struct zx_cb_Query_s* x, int n)
{
  struct zx_cb_EncryptedResourceID_s* y;
  if (!x) return 0;
  for (y = x->EncryptedResourceID; n>=0 && y; --n, y = (struct zx_cb_EncryptedResourceID_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_cb_Query_POP_EncryptedResourceID) */

struct zx_cb_EncryptedResourceID_s* zx_cb_Query_POP_EncryptedResourceID(struct zx_cb_Query_s* x)
{
  struct zx_cb_EncryptedResourceID_s* y;
  if (!x) return 0;
  y = x->EncryptedResourceID;
  if (y)
    x->EncryptedResourceID = (struct zx_cb_EncryptedResourceID_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_cb_Query_PUSH_EncryptedResourceID) */

void zx_cb_Query_PUSH_EncryptedResourceID(struct zx_cb_Query_s* x, struct zx_cb_EncryptedResourceID_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->EncryptedResourceID->gg.g;
  x->EncryptedResourceID = z;
}

/* FUNC(zx_cb_Query_REV_EncryptedResourceID) */

void zx_cb_Query_REV_EncryptedResourceID(struct zx_cb_Query_s* x)
{
  struct zx_cb_EncryptedResourceID_s* nxt;
  struct zx_cb_EncryptedResourceID_s* y;
  if (!x) return;
  y = x->EncryptedResourceID;
  if (!y) return;
  x->EncryptedResourceID = 0;
  while (y) {
    nxt = (struct zx_cb_EncryptedResourceID_s*)y->gg.g.n;
    y->gg.g.n = &x->EncryptedResourceID->gg.g;
    x->EncryptedResourceID = y;
    y = nxt;
  }
}

/* FUNC(zx_cb_Query_PUT_EncryptedResourceID) */

void zx_cb_Query_PUT_EncryptedResourceID(struct zx_cb_Query_s* x, int n, struct zx_cb_EncryptedResourceID_s* z)
{
  struct zx_cb_EncryptedResourceID_s* y;
  if (!x || !z) return;
  y = x->EncryptedResourceID;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->EncryptedResourceID = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_cb_EncryptedResourceID_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_cb_Query_ADD_EncryptedResourceID) */

void zx_cb_Query_ADD_EncryptedResourceID(struct zx_cb_Query_s* x, int n, struct zx_cb_EncryptedResourceID_s* z)
{
  struct zx_cb_EncryptedResourceID_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->EncryptedResourceID->gg.g;
    x->EncryptedResourceID = z;
    return;
  case -1:
    y = x->EncryptedResourceID;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_cb_EncryptedResourceID_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->EncryptedResourceID; n > 1 && y; --n, y = (struct zx_cb_EncryptedResourceID_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_cb_Query_DEL_EncryptedResourceID) */

void zx_cb_Query_DEL_EncryptedResourceID(struct zx_cb_Query_s* x, int n)
{
  struct zx_cb_EncryptedResourceID_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->EncryptedResourceID = (struct zx_cb_EncryptedResourceID_s*)x->EncryptedResourceID->gg.g.n;
    return;
  case -1:
    y = (struct zx_cb_EncryptedResourceID_s*)x->EncryptedResourceID;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_cb_EncryptedResourceID_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->EncryptedResourceID; n > 1 && y->gg.g.n; --n, y = (struct zx_cb_EncryptedResourceID_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_cb_Query_NUM_Subscription) */

int zx_cb_Query_NUM_Subscription(struct zx_cb_Query_s* x)
{
  struct zx_cb_Subscription_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Subscription; y; ++n, y = (struct zx_cb_Subscription_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_cb_Query_GET_Subscription) */

struct zx_cb_Subscription_s* zx_cb_Query_GET_Subscription(struct zx_cb_Query_s* x, int n)
{
  struct zx_cb_Subscription_s* y;
  if (!x) return 0;
  for (y = x->Subscription; n>=0 && y; --n, y = (struct zx_cb_Subscription_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_cb_Query_POP_Subscription) */

struct zx_cb_Subscription_s* zx_cb_Query_POP_Subscription(struct zx_cb_Query_s* x)
{
  struct zx_cb_Subscription_s* y;
  if (!x) return 0;
  y = x->Subscription;
  if (y)
    x->Subscription = (struct zx_cb_Subscription_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_cb_Query_PUSH_Subscription) */

void zx_cb_Query_PUSH_Subscription(struct zx_cb_Query_s* x, struct zx_cb_Subscription_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Subscription->gg.g;
  x->Subscription = z;
}

/* FUNC(zx_cb_Query_REV_Subscription) */

void zx_cb_Query_REV_Subscription(struct zx_cb_Query_s* x)
{
  struct zx_cb_Subscription_s* nxt;
  struct zx_cb_Subscription_s* y;
  if (!x) return;
  y = x->Subscription;
  if (!y) return;
  x->Subscription = 0;
  while (y) {
    nxt = (struct zx_cb_Subscription_s*)y->gg.g.n;
    y->gg.g.n = &x->Subscription->gg.g;
    x->Subscription = y;
    y = nxt;
  }
}

/* FUNC(zx_cb_Query_PUT_Subscription) */

void zx_cb_Query_PUT_Subscription(struct zx_cb_Query_s* x, int n, struct zx_cb_Subscription_s* z)
{
  struct zx_cb_Subscription_s* y;
  if (!x || !z) return;
  y = x->Subscription;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Subscription = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_cb_Subscription_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_cb_Query_ADD_Subscription) */

void zx_cb_Query_ADD_Subscription(struct zx_cb_Query_s* x, int n, struct zx_cb_Subscription_s* z)
{
  struct zx_cb_Subscription_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->Subscription->gg.g;
    x->Subscription = z;
    return;
  case -1:
    y = x->Subscription;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_cb_Subscription_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Subscription; n > 1 && y; --n, y = (struct zx_cb_Subscription_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_cb_Query_DEL_Subscription) */

void zx_cb_Query_DEL_Subscription(struct zx_cb_Query_s* x, int n)
{
  struct zx_cb_Subscription_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Subscription = (struct zx_cb_Subscription_s*)x->Subscription->gg.g.n;
    return;
  case -1:
    y = (struct zx_cb_Subscription_s*)x->Subscription;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_cb_Subscription_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Subscription; n > 1 && y->gg.g.n; --n, y = (struct zx_cb_Subscription_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_cb_Query_NUM_QueryItem) */

int zx_cb_Query_NUM_QueryItem(struct zx_cb_Query_s* x)
{
  struct zx_cb_QueryItem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->QueryItem; y; ++n, y = (struct zx_cb_QueryItem_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_cb_Query_GET_QueryItem) */

struct zx_cb_QueryItem_s* zx_cb_Query_GET_QueryItem(struct zx_cb_Query_s* x, int n)
{
  struct zx_cb_QueryItem_s* y;
  if (!x) return 0;
  for (y = x->QueryItem; n>=0 && y; --n, y = (struct zx_cb_QueryItem_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_cb_Query_POP_QueryItem) */

struct zx_cb_QueryItem_s* zx_cb_Query_POP_QueryItem(struct zx_cb_Query_s* x)
{
  struct zx_cb_QueryItem_s* y;
  if (!x) return 0;
  y = x->QueryItem;
  if (y)
    x->QueryItem = (struct zx_cb_QueryItem_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_cb_Query_PUSH_QueryItem) */

void zx_cb_Query_PUSH_QueryItem(struct zx_cb_Query_s* x, struct zx_cb_QueryItem_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->QueryItem->gg.g;
  x->QueryItem = z;
}

/* FUNC(zx_cb_Query_REV_QueryItem) */

void zx_cb_Query_REV_QueryItem(struct zx_cb_Query_s* x)
{
  struct zx_cb_QueryItem_s* nxt;
  struct zx_cb_QueryItem_s* y;
  if (!x) return;
  y = x->QueryItem;
  if (!y) return;
  x->QueryItem = 0;
  while (y) {
    nxt = (struct zx_cb_QueryItem_s*)y->gg.g.n;
    y->gg.g.n = &x->QueryItem->gg.g;
    x->QueryItem = y;
    y = nxt;
  }
}

/* FUNC(zx_cb_Query_PUT_QueryItem) */

void zx_cb_Query_PUT_QueryItem(struct zx_cb_Query_s* x, int n, struct zx_cb_QueryItem_s* z)
{
  struct zx_cb_QueryItem_s* y;
  if (!x || !z) return;
  y = x->QueryItem;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->QueryItem = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_cb_QueryItem_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_cb_Query_ADD_QueryItem) */

void zx_cb_Query_ADD_QueryItem(struct zx_cb_Query_s* x, int n, struct zx_cb_QueryItem_s* z)
{
  struct zx_cb_QueryItem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->QueryItem->gg.g;
    x->QueryItem = z;
    return;
  case -1:
    y = x->QueryItem;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_cb_QueryItem_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->QueryItem; n > 1 && y; --n, y = (struct zx_cb_QueryItem_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_cb_Query_DEL_QueryItem) */

void zx_cb_Query_DEL_QueryItem(struct zx_cb_Query_s* x, int n)
{
  struct zx_cb_QueryItem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->QueryItem = (struct zx_cb_QueryItem_s*)x->QueryItem->gg.g.n;
    return;
  case -1:
    y = (struct zx_cb_QueryItem_s*)x->QueryItem;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_cb_QueryItem_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->QueryItem; n > 1 && y->gg.g.n; --n, y = (struct zx_cb_QueryItem_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_cb_Query_NUM_Extension) */

int zx_cb_Query_NUM_Extension(struct zx_cb_Query_s* x)
{
  struct zx_cb_Extension_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Extension; y; ++n, y = (struct zx_cb_Extension_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_cb_Query_GET_Extension) */

struct zx_cb_Extension_s* zx_cb_Query_GET_Extension(struct zx_cb_Query_s* x, int n)
{
  struct zx_cb_Extension_s* y;
  if (!x) return 0;
  for (y = x->Extension; n>=0 && y; --n, y = (struct zx_cb_Extension_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_cb_Query_POP_Extension) */

struct zx_cb_Extension_s* zx_cb_Query_POP_Extension(struct zx_cb_Query_s* x)
{
  struct zx_cb_Extension_s* y;
  if (!x) return 0;
  y = x->Extension;
  if (y)
    x->Extension = (struct zx_cb_Extension_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_cb_Query_PUSH_Extension) */

void zx_cb_Query_PUSH_Extension(struct zx_cb_Query_s* x, struct zx_cb_Extension_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Extension->gg.g;
  x->Extension = z;
}

/* FUNC(zx_cb_Query_REV_Extension) */

void zx_cb_Query_REV_Extension(struct zx_cb_Query_s* x)
{
  struct zx_cb_Extension_s* nxt;
  struct zx_cb_Extension_s* y;
  if (!x) return;
  y = x->Extension;
  if (!y) return;
  x->Extension = 0;
  while (y) {
    nxt = (struct zx_cb_Extension_s*)y->gg.g.n;
    y->gg.g.n = &x->Extension->gg.g;
    x->Extension = y;
    y = nxt;
  }
}

/* FUNC(zx_cb_Query_PUT_Extension) */

void zx_cb_Query_PUT_Extension(struct zx_cb_Query_s* x, int n, struct zx_cb_Extension_s* z)
{
  struct zx_cb_Extension_s* y;
  if (!x || !z) return;
  y = x->Extension;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Extension = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_cb_Extension_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_cb_Query_ADD_Extension) */

void zx_cb_Query_ADD_Extension(struct zx_cb_Query_s* x, int n, struct zx_cb_Extension_s* z)
{
  struct zx_cb_Extension_s* y;
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
    for (; y->gg.g.n; y = (struct zx_cb_Extension_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Extension; n > 1 && y; --n, y = (struct zx_cb_Extension_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_cb_Query_DEL_Extension) */

void zx_cb_Query_DEL_Extension(struct zx_cb_Query_s* x, int n)
{
  struct zx_cb_Extension_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Extension = (struct zx_cb_Extension_s*)x->Extension->gg.g.n;
    return;
  case -1:
    y = (struct zx_cb_Extension_s*)x->Extension;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_cb_Extension_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Extension; n > 1 && y->gg.g.n; --n, y = (struct zx_cb_Extension_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif

/* FUNC(zx_cb_Query_GET_id) */
struct zx_str* zx_cb_Query_GET_id(struct zx_cb_Query_s* x) { return x->id; }
/* FUNC(zx_cb_Query_PUT_id) */
void zx_cb_Query_PUT_id(struct zx_cb_Query_s* x, struct zx_str* y) { x->id = y; }





/* FUNC(zx_cb_QueryItem_GET_count) */
struct zx_str* zx_cb_QueryItem_GET_count(struct zx_cb_QueryItem_s* x) { return x->count; }
/* FUNC(zx_cb_QueryItem_PUT_count) */
void zx_cb_QueryItem_PUT_count(struct zx_cb_QueryItem_s* x, struct zx_str* y) { x->count = y; }
/* FUNC(zx_cb_QueryItem_GET_offset) */
struct zx_str* zx_cb_QueryItem_GET_offset(struct zx_cb_QueryItem_s* x) { return x->offset; }
/* FUNC(zx_cb_QueryItem_PUT_offset) */
void zx_cb_QueryItem_PUT_offset(struct zx_cb_QueryItem_s* x, struct zx_str* y) { x->offset = y; }
/* FUNC(zx_cb_QueryItem_GET_setID) */
struct zx_str* zx_cb_QueryItem_GET_setID(struct zx_cb_QueryItem_s* x) { return x->setID; }
/* FUNC(zx_cb_QueryItem_PUT_setID) */
void zx_cb_QueryItem_PUT_setID(struct zx_cb_QueryItem_s* x, struct zx_str* y) { x->setID = y; }
/* FUNC(zx_cb_QueryItem_GET_setReq) */
struct zx_str* zx_cb_QueryItem_GET_setReq(struct zx_cb_QueryItem_s* x) { return x->setReq; }
/* FUNC(zx_cb_QueryItem_PUT_setReq) */
void zx_cb_QueryItem_PUT_setReq(struct zx_cb_QueryItem_s* x, struct zx_str* y) { x->setReq = y; }
/* FUNC(zx_cb_QueryItem_GET_format) */
struct zx_str* zx_cb_QueryItem_GET_format(struct zx_cb_QueryItem_s* x) { return x->format; }
/* FUNC(zx_cb_QueryItem_PUT_format) */
void zx_cb_QueryItem_PUT_format(struct zx_cb_QueryItem_s* x, struct zx_str* y) { x->format = y; }







#ifdef ZX_ENA_GETPUT

/* FUNC(zx_cb_QueryResponse_NUM_Status) */

int zx_cb_QueryResponse_NUM_Status(struct zx_cb_QueryResponse_s* x)
{
  struct zx_cb_Status_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Status; y; ++n, y = (struct zx_cb_Status_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_cb_QueryResponse_GET_Status) */

struct zx_cb_Status_s* zx_cb_QueryResponse_GET_Status(struct zx_cb_QueryResponse_s* x, int n)
{
  struct zx_cb_Status_s* y;
  if (!x) return 0;
  for (y = x->Status; n>=0 && y; --n, y = (struct zx_cb_Status_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_cb_QueryResponse_POP_Status) */

struct zx_cb_Status_s* zx_cb_QueryResponse_POP_Status(struct zx_cb_QueryResponse_s* x)
{
  struct zx_cb_Status_s* y;
  if (!x) return 0;
  y = x->Status;
  if (y)
    x->Status = (struct zx_cb_Status_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_cb_QueryResponse_PUSH_Status) */

void zx_cb_QueryResponse_PUSH_Status(struct zx_cb_QueryResponse_s* x, struct zx_cb_Status_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Status->gg.g;
  x->Status = z;
}

/* FUNC(zx_cb_QueryResponse_REV_Status) */

void zx_cb_QueryResponse_REV_Status(struct zx_cb_QueryResponse_s* x)
{
  struct zx_cb_Status_s* nxt;
  struct zx_cb_Status_s* y;
  if (!x) return;
  y = x->Status;
  if (!y) return;
  x->Status = 0;
  while (y) {
    nxt = (struct zx_cb_Status_s*)y->gg.g.n;
    y->gg.g.n = &x->Status->gg.g;
    x->Status = y;
    y = nxt;
  }
}

/* FUNC(zx_cb_QueryResponse_PUT_Status) */

void zx_cb_QueryResponse_PUT_Status(struct zx_cb_QueryResponse_s* x, int n, struct zx_cb_Status_s* z)
{
  struct zx_cb_Status_s* y;
  if (!x || !z) return;
  y = x->Status;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Status = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_cb_Status_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_cb_QueryResponse_ADD_Status) */

void zx_cb_QueryResponse_ADD_Status(struct zx_cb_QueryResponse_s* x, int n, struct zx_cb_Status_s* z)
{
  struct zx_cb_Status_s* y;
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
    for (; y->gg.g.n; y = (struct zx_cb_Status_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Status; n > 1 && y; --n, y = (struct zx_cb_Status_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_cb_QueryResponse_DEL_Status) */

void zx_cb_QueryResponse_DEL_Status(struct zx_cb_QueryResponse_s* x, int n)
{
  struct zx_cb_Status_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Status = (struct zx_cb_Status_s*)x->Status->gg.g.n;
    return;
  case -1:
    y = (struct zx_cb_Status_s*)x->Status;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_cb_Status_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Status; n > 1 && y->gg.g.n; --n, y = (struct zx_cb_Status_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_cb_QueryResponse_NUM_Data) */

int zx_cb_QueryResponse_NUM_Data(struct zx_cb_QueryResponse_s* x)
{
  struct zx_cb_Data_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Data; y; ++n, y = (struct zx_cb_Data_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_cb_QueryResponse_GET_Data) */

struct zx_cb_Data_s* zx_cb_QueryResponse_GET_Data(struct zx_cb_QueryResponse_s* x, int n)
{
  struct zx_cb_Data_s* y;
  if (!x) return 0;
  for (y = x->Data; n>=0 && y; --n, y = (struct zx_cb_Data_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_cb_QueryResponse_POP_Data) */

struct zx_cb_Data_s* zx_cb_QueryResponse_POP_Data(struct zx_cb_QueryResponse_s* x)
{
  struct zx_cb_Data_s* y;
  if (!x) return 0;
  y = x->Data;
  if (y)
    x->Data = (struct zx_cb_Data_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_cb_QueryResponse_PUSH_Data) */

void zx_cb_QueryResponse_PUSH_Data(struct zx_cb_QueryResponse_s* x, struct zx_cb_Data_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Data->gg.g;
  x->Data = z;
}

/* FUNC(zx_cb_QueryResponse_REV_Data) */

void zx_cb_QueryResponse_REV_Data(struct zx_cb_QueryResponse_s* x)
{
  struct zx_cb_Data_s* nxt;
  struct zx_cb_Data_s* y;
  if (!x) return;
  y = x->Data;
  if (!y) return;
  x->Data = 0;
  while (y) {
    nxt = (struct zx_cb_Data_s*)y->gg.g.n;
    y->gg.g.n = &x->Data->gg.g;
    x->Data = y;
    y = nxt;
  }
}

/* FUNC(zx_cb_QueryResponse_PUT_Data) */

void zx_cb_QueryResponse_PUT_Data(struct zx_cb_QueryResponse_s* x, int n, struct zx_cb_Data_s* z)
{
  struct zx_cb_Data_s* y;
  if (!x || !z) return;
  y = x->Data;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Data = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_cb_Data_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_cb_QueryResponse_ADD_Data) */

void zx_cb_QueryResponse_ADD_Data(struct zx_cb_QueryResponse_s* x, int n, struct zx_cb_Data_s* z)
{
  struct zx_cb_Data_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->Data->gg.g;
    x->Data = z;
    return;
  case -1:
    y = x->Data;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_cb_Data_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Data; n > 1 && y; --n, y = (struct zx_cb_Data_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_cb_QueryResponse_DEL_Data) */

void zx_cb_QueryResponse_DEL_Data(struct zx_cb_QueryResponse_s* x, int n)
{
  struct zx_cb_Data_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Data = (struct zx_cb_Data_s*)x->Data->gg.g.n;
    return;
  case -1:
    y = (struct zx_cb_Data_s*)x->Data;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_cb_Data_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Data; n > 1 && y->gg.g.n; --n, y = (struct zx_cb_Data_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_cb_QueryResponse_NUM_Extension) */

int zx_cb_QueryResponse_NUM_Extension(struct zx_cb_QueryResponse_s* x)
{
  struct zx_cb_Extension_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Extension; y; ++n, y = (struct zx_cb_Extension_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_cb_QueryResponse_GET_Extension) */

struct zx_cb_Extension_s* zx_cb_QueryResponse_GET_Extension(struct zx_cb_QueryResponse_s* x, int n)
{
  struct zx_cb_Extension_s* y;
  if (!x) return 0;
  for (y = x->Extension; n>=0 && y; --n, y = (struct zx_cb_Extension_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_cb_QueryResponse_POP_Extension) */

struct zx_cb_Extension_s* zx_cb_QueryResponse_POP_Extension(struct zx_cb_QueryResponse_s* x)
{
  struct zx_cb_Extension_s* y;
  if (!x) return 0;
  y = x->Extension;
  if (y)
    x->Extension = (struct zx_cb_Extension_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_cb_QueryResponse_PUSH_Extension) */

void zx_cb_QueryResponse_PUSH_Extension(struct zx_cb_QueryResponse_s* x, struct zx_cb_Extension_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Extension->gg.g;
  x->Extension = z;
}

/* FUNC(zx_cb_QueryResponse_REV_Extension) */

void zx_cb_QueryResponse_REV_Extension(struct zx_cb_QueryResponse_s* x)
{
  struct zx_cb_Extension_s* nxt;
  struct zx_cb_Extension_s* y;
  if (!x) return;
  y = x->Extension;
  if (!y) return;
  x->Extension = 0;
  while (y) {
    nxt = (struct zx_cb_Extension_s*)y->gg.g.n;
    y->gg.g.n = &x->Extension->gg.g;
    x->Extension = y;
    y = nxt;
  }
}

/* FUNC(zx_cb_QueryResponse_PUT_Extension) */

void zx_cb_QueryResponse_PUT_Extension(struct zx_cb_QueryResponse_s* x, int n, struct zx_cb_Extension_s* z)
{
  struct zx_cb_Extension_s* y;
  if (!x || !z) return;
  y = x->Extension;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Extension = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_cb_Extension_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_cb_QueryResponse_ADD_Extension) */

void zx_cb_QueryResponse_ADD_Extension(struct zx_cb_QueryResponse_s* x, int n, struct zx_cb_Extension_s* z)
{
  struct zx_cb_Extension_s* y;
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
    for (; y->gg.g.n; y = (struct zx_cb_Extension_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Extension; n > 1 && y; --n, y = (struct zx_cb_Extension_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_cb_QueryResponse_DEL_Extension) */

void zx_cb_QueryResponse_DEL_Extension(struct zx_cb_QueryResponse_s* x, int n)
{
  struct zx_cb_Extension_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Extension = (struct zx_cb_Extension_s*)x->Extension->gg.g.n;
    return;
  case -1:
    y = (struct zx_cb_Extension_s*)x->Extension;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_cb_Extension_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Extension; n > 1 && y->gg.g.n; --n, y = (struct zx_cb_Extension_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif

/* FUNC(zx_cb_QueryResponse_GET_id) */
struct zx_str* zx_cb_QueryResponse_GET_id(struct zx_cb_QueryResponse_s* x) { return x->id; }
/* FUNC(zx_cb_QueryResponse_PUT_id) */
void zx_cb_QueryResponse_PUT_id(struct zx_cb_QueryResponse_s* x, struct zx_str* y) { x->id = y; }
/* FUNC(zx_cb_QueryResponse_GET_itemIDRef) */
struct zx_str* zx_cb_QueryResponse_GET_itemIDRef(struct zx_cb_QueryResponse_s* x) { return x->itemIDRef; }
/* FUNC(zx_cb_QueryResponse_PUT_itemIDRef) */
void zx_cb_QueryResponse_PUT_itemIDRef(struct zx_cb_QueryResponse_s* x, struct zx_str* y) { x->itemIDRef = y; }
/* FUNC(zx_cb_QueryResponse_GET_timeStamp) */
struct zx_str* zx_cb_QueryResponse_GET_timeStamp(struct zx_cb_QueryResponse_s* x) { return x->timeStamp; }
/* FUNC(zx_cb_QueryResponse_PUT_timeStamp) */
void zx_cb_QueryResponse_PUT_timeStamp(struct zx_cb_QueryResponse_s* x, struct zx_str* y) { x->timeStamp = y; }





/* FUNC(zx_cb_RefItem_GET_ItemIDRef) */
struct zx_str* zx_cb_RefItem_GET_ItemIDRef(struct zx_cb_RefItem_s* x) { return x->ItemIDRef; }
/* FUNC(zx_cb_RefItem_PUT_ItemIDRef) */
void zx_cb_RefItem_PUT_ItemIDRef(struct zx_cb_RefItem_s* x, struct zx_str* y) { x->ItemIDRef = y; }
/* FUNC(zx_cb_RefItem_GET_subscriptionID) */
struct zx_str* zx_cb_RefItem_GET_subscriptionID(struct zx_cb_RefItem_s* x) { return x->subscriptionID; }
/* FUNC(zx_cb_RefItem_PUT_subscriptionID) */
void zx_cb_RefItem_PUT_subscriptionID(struct zx_cb_RefItem_s* x, struct zx_str* y) { x->subscriptionID = y; }







#ifdef ZX_ENA_GETPUT

/* FUNC(zx_cb_ReportUsage_NUM_ResourceID) */

int zx_cb_ReportUsage_NUM_ResourceID(struct zx_cb_ReportUsage_s* x)
{
  struct zx_cb_ResourceID_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->ResourceID; y; ++n, y = (struct zx_cb_ResourceID_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_cb_ReportUsage_GET_ResourceID) */

struct zx_cb_ResourceID_s* zx_cb_ReportUsage_GET_ResourceID(struct zx_cb_ReportUsage_s* x, int n)
{
  struct zx_cb_ResourceID_s* y;
  if (!x) return 0;
  for (y = x->ResourceID; n>=0 && y; --n, y = (struct zx_cb_ResourceID_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_cb_ReportUsage_POP_ResourceID) */

struct zx_cb_ResourceID_s* zx_cb_ReportUsage_POP_ResourceID(struct zx_cb_ReportUsage_s* x)
{
  struct zx_cb_ResourceID_s* y;
  if (!x) return 0;
  y = x->ResourceID;
  if (y)
    x->ResourceID = (struct zx_cb_ResourceID_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_cb_ReportUsage_PUSH_ResourceID) */

void zx_cb_ReportUsage_PUSH_ResourceID(struct zx_cb_ReportUsage_s* x, struct zx_cb_ResourceID_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->ResourceID->gg.g;
  x->ResourceID = z;
}

/* FUNC(zx_cb_ReportUsage_REV_ResourceID) */

void zx_cb_ReportUsage_REV_ResourceID(struct zx_cb_ReportUsage_s* x)
{
  struct zx_cb_ResourceID_s* nxt;
  struct zx_cb_ResourceID_s* y;
  if (!x) return;
  y = x->ResourceID;
  if (!y) return;
  x->ResourceID = 0;
  while (y) {
    nxt = (struct zx_cb_ResourceID_s*)y->gg.g.n;
    y->gg.g.n = &x->ResourceID->gg.g;
    x->ResourceID = y;
    y = nxt;
  }
}

/* FUNC(zx_cb_ReportUsage_PUT_ResourceID) */

void zx_cb_ReportUsage_PUT_ResourceID(struct zx_cb_ReportUsage_s* x, int n, struct zx_cb_ResourceID_s* z)
{
  struct zx_cb_ResourceID_s* y;
  if (!x || !z) return;
  y = x->ResourceID;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->ResourceID = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_cb_ResourceID_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_cb_ReportUsage_ADD_ResourceID) */

void zx_cb_ReportUsage_ADD_ResourceID(struct zx_cb_ReportUsage_s* x, int n, struct zx_cb_ResourceID_s* z)
{
  struct zx_cb_ResourceID_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->ResourceID->gg.g;
    x->ResourceID = z;
    return;
  case -1:
    y = x->ResourceID;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_cb_ResourceID_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->ResourceID; n > 1 && y; --n, y = (struct zx_cb_ResourceID_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_cb_ReportUsage_DEL_ResourceID) */

void zx_cb_ReportUsage_DEL_ResourceID(struct zx_cb_ReportUsage_s* x, int n)
{
  struct zx_cb_ResourceID_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->ResourceID = (struct zx_cb_ResourceID_s*)x->ResourceID->gg.g.n;
    return;
  case -1:
    y = (struct zx_cb_ResourceID_s*)x->ResourceID;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_cb_ResourceID_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->ResourceID; n > 1 && y->gg.g.n; --n, y = (struct zx_cb_ResourceID_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_cb_ReportUsage_NUM_EncryptedResourceID) */

int zx_cb_ReportUsage_NUM_EncryptedResourceID(struct zx_cb_ReportUsage_s* x)
{
  struct zx_cb_EncryptedResourceID_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->EncryptedResourceID; y; ++n, y = (struct zx_cb_EncryptedResourceID_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_cb_ReportUsage_GET_EncryptedResourceID) */

struct zx_cb_EncryptedResourceID_s* zx_cb_ReportUsage_GET_EncryptedResourceID(struct zx_cb_ReportUsage_s* x, int n)
{
  struct zx_cb_EncryptedResourceID_s* y;
  if (!x) return 0;
  for (y = x->EncryptedResourceID; n>=0 && y; --n, y = (struct zx_cb_EncryptedResourceID_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_cb_ReportUsage_POP_EncryptedResourceID) */

struct zx_cb_EncryptedResourceID_s* zx_cb_ReportUsage_POP_EncryptedResourceID(struct zx_cb_ReportUsage_s* x)
{
  struct zx_cb_EncryptedResourceID_s* y;
  if (!x) return 0;
  y = x->EncryptedResourceID;
  if (y)
    x->EncryptedResourceID = (struct zx_cb_EncryptedResourceID_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_cb_ReportUsage_PUSH_EncryptedResourceID) */

void zx_cb_ReportUsage_PUSH_EncryptedResourceID(struct zx_cb_ReportUsage_s* x, struct zx_cb_EncryptedResourceID_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->EncryptedResourceID->gg.g;
  x->EncryptedResourceID = z;
}

/* FUNC(zx_cb_ReportUsage_REV_EncryptedResourceID) */

void zx_cb_ReportUsage_REV_EncryptedResourceID(struct zx_cb_ReportUsage_s* x)
{
  struct zx_cb_EncryptedResourceID_s* nxt;
  struct zx_cb_EncryptedResourceID_s* y;
  if (!x) return;
  y = x->EncryptedResourceID;
  if (!y) return;
  x->EncryptedResourceID = 0;
  while (y) {
    nxt = (struct zx_cb_EncryptedResourceID_s*)y->gg.g.n;
    y->gg.g.n = &x->EncryptedResourceID->gg.g;
    x->EncryptedResourceID = y;
    y = nxt;
  }
}

/* FUNC(zx_cb_ReportUsage_PUT_EncryptedResourceID) */

void zx_cb_ReportUsage_PUT_EncryptedResourceID(struct zx_cb_ReportUsage_s* x, int n, struct zx_cb_EncryptedResourceID_s* z)
{
  struct zx_cb_EncryptedResourceID_s* y;
  if (!x || !z) return;
  y = x->EncryptedResourceID;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->EncryptedResourceID = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_cb_EncryptedResourceID_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_cb_ReportUsage_ADD_EncryptedResourceID) */

void zx_cb_ReportUsage_ADD_EncryptedResourceID(struct zx_cb_ReportUsage_s* x, int n, struct zx_cb_EncryptedResourceID_s* z)
{
  struct zx_cb_EncryptedResourceID_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->EncryptedResourceID->gg.g;
    x->EncryptedResourceID = z;
    return;
  case -1:
    y = x->EncryptedResourceID;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_cb_EncryptedResourceID_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->EncryptedResourceID; n > 1 && y; --n, y = (struct zx_cb_EncryptedResourceID_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_cb_ReportUsage_DEL_EncryptedResourceID) */

void zx_cb_ReportUsage_DEL_EncryptedResourceID(struct zx_cb_ReportUsage_s* x, int n)
{
  struct zx_cb_EncryptedResourceID_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->EncryptedResourceID = (struct zx_cb_EncryptedResourceID_s*)x->EncryptedResourceID->gg.g.n;
    return;
  case -1:
    y = (struct zx_cb_EncryptedResourceID_s*)x->EncryptedResourceID;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_cb_EncryptedResourceID_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->EncryptedResourceID; n > 1 && y->gg.g.n; --n, y = (struct zx_cb_EncryptedResourceID_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_cb_ReportUsage_NUM_CARDID) */

int zx_cb_ReportUsage_NUM_CARDID(struct zx_cb_ReportUsage_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->CARDID; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_cb_ReportUsage_GET_CARDID) */

struct zx_elem_s* zx_cb_ReportUsage_GET_CARDID(struct zx_cb_ReportUsage_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->CARDID; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_cb_ReportUsage_POP_CARDID) */

struct zx_elem_s* zx_cb_ReportUsage_POP_CARDID(struct zx_cb_ReportUsage_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->CARDID;
  if (y)
    x->CARDID = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_cb_ReportUsage_PUSH_CARDID) */

void zx_cb_ReportUsage_PUSH_CARDID(struct zx_cb_ReportUsage_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->CARDID->g;
  x->CARDID = z;
}

/* FUNC(zx_cb_ReportUsage_REV_CARDID) */

void zx_cb_ReportUsage_REV_CARDID(struct zx_cb_ReportUsage_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->CARDID;
  if (!y) return;
  x->CARDID = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->CARDID->g;
    x->CARDID = y;
    y = nxt;
  }
}

/* FUNC(zx_cb_ReportUsage_PUT_CARDID) */

void zx_cb_ReportUsage_PUT_CARDID(struct zx_cb_ReportUsage_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->CARDID;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->CARDID = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_cb_ReportUsage_ADD_CARDID) */

void zx_cb_ReportUsage_ADD_CARDID(struct zx_cb_ReportUsage_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->CARDID->g;
    x->CARDID = z;
    return;
  case -1:
    y = x->CARDID;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->CARDID; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_cb_ReportUsage_DEL_CARDID) */

void zx_cb_ReportUsage_DEL_CARDID(struct zx_cb_ReportUsage_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->CARDID = (struct zx_elem_s*)x->CARDID->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->CARDID;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->CARDID; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_cb_ReportUsage_NUM_UsageType) */

int zx_cb_ReportUsage_NUM_UsageType(struct zx_cb_ReportUsage_s* x)
{
  struct zx_cb_UsageType_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->UsageType; y; ++n, y = (struct zx_cb_UsageType_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_cb_ReportUsage_GET_UsageType) */

struct zx_cb_UsageType_s* zx_cb_ReportUsage_GET_UsageType(struct zx_cb_ReportUsage_s* x, int n)
{
  struct zx_cb_UsageType_s* y;
  if (!x) return 0;
  for (y = x->UsageType; n>=0 && y; --n, y = (struct zx_cb_UsageType_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_cb_ReportUsage_POP_UsageType) */

struct zx_cb_UsageType_s* zx_cb_ReportUsage_POP_UsageType(struct zx_cb_ReportUsage_s* x)
{
  struct zx_cb_UsageType_s* y;
  if (!x) return 0;
  y = x->UsageType;
  if (y)
    x->UsageType = (struct zx_cb_UsageType_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_cb_ReportUsage_PUSH_UsageType) */

void zx_cb_ReportUsage_PUSH_UsageType(struct zx_cb_ReportUsage_s* x, struct zx_cb_UsageType_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->UsageType->gg.g;
  x->UsageType = z;
}

/* FUNC(zx_cb_ReportUsage_REV_UsageType) */

void zx_cb_ReportUsage_REV_UsageType(struct zx_cb_ReportUsage_s* x)
{
  struct zx_cb_UsageType_s* nxt;
  struct zx_cb_UsageType_s* y;
  if (!x) return;
  y = x->UsageType;
  if (!y) return;
  x->UsageType = 0;
  while (y) {
    nxt = (struct zx_cb_UsageType_s*)y->gg.g.n;
    y->gg.g.n = &x->UsageType->gg.g;
    x->UsageType = y;
    y = nxt;
  }
}

/* FUNC(zx_cb_ReportUsage_PUT_UsageType) */

void zx_cb_ReportUsage_PUT_UsageType(struct zx_cb_ReportUsage_s* x, int n, struct zx_cb_UsageType_s* z)
{
  struct zx_cb_UsageType_s* y;
  if (!x || !z) return;
  y = x->UsageType;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->UsageType = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_cb_UsageType_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_cb_ReportUsage_ADD_UsageType) */

void zx_cb_ReportUsage_ADD_UsageType(struct zx_cb_ReportUsage_s* x, int n, struct zx_cb_UsageType_s* z)
{
  struct zx_cb_UsageType_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->UsageType->gg.g;
    x->UsageType = z;
    return;
  case -1:
    y = x->UsageType;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_cb_UsageType_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->UsageType; n > 1 && y; --n, y = (struct zx_cb_UsageType_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_cb_ReportUsage_DEL_UsageType) */

void zx_cb_ReportUsage_DEL_UsageType(struct zx_cb_ReportUsage_s* x, int n)
{
  struct zx_cb_UsageType_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->UsageType = (struct zx_cb_UsageType_s*)x->UsageType->gg.g.n;
    return;
  case -1:
    y = (struct zx_cb_UsageType_s*)x->UsageType;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_cb_UsageType_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->UsageType; n > 1 && y->gg.g.n; --n, y = (struct zx_cb_UsageType_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif

/* FUNC(zx_cb_ReportUsage_GET_id) */
struct zx_str* zx_cb_ReportUsage_GET_id(struct zx_cb_ReportUsage_s* x) { return x->id; }
/* FUNC(zx_cb_ReportUsage_PUT_id) */
void zx_cb_ReportUsage_PUT_id(struct zx_cb_ReportUsage_s* x, struct zx_str* y) { x->id = y; }







#ifdef ZX_ENA_GETPUT

/* FUNC(zx_cb_ReportUsageResponse_NUM_Status) */

int zx_cb_ReportUsageResponse_NUM_Status(struct zx_cb_ReportUsageResponse_s* x)
{
  struct zx_cb_Status_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Status; y; ++n, y = (struct zx_cb_Status_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_cb_ReportUsageResponse_GET_Status) */

struct zx_cb_Status_s* zx_cb_ReportUsageResponse_GET_Status(struct zx_cb_ReportUsageResponse_s* x, int n)
{
  struct zx_cb_Status_s* y;
  if (!x) return 0;
  for (y = x->Status; n>=0 && y; --n, y = (struct zx_cb_Status_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_cb_ReportUsageResponse_POP_Status) */

struct zx_cb_Status_s* zx_cb_ReportUsageResponse_POP_Status(struct zx_cb_ReportUsageResponse_s* x)
{
  struct zx_cb_Status_s* y;
  if (!x) return 0;
  y = x->Status;
  if (y)
    x->Status = (struct zx_cb_Status_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_cb_ReportUsageResponse_PUSH_Status) */

void zx_cb_ReportUsageResponse_PUSH_Status(struct zx_cb_ReportUsageResponse_s* x, struct zx_cb_Status_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Status->gg.g;
  x->Status = z;
}

/* FUNC(zx_cb_ReportUsageResponse_REV_Status) */

void zx_cb_ReportUsageResponse_REV_Status(struct zx_cb_ReportUsageResponse_s* x)
{
  struct zx_cb_Status_s* nxt;
  struct zx_cb_Status_s* y;
  if (!x) return;
  y = x->Status;
  if (!y) return;
  x->Status = 0;
  while (y) {
    nxt = (struct zx_cb_Status_s*)y->gg.g.n;
    y->gg.g.n = &x->Status->gg.g;
    x->Status = y;
    y = nxt;
  }
}

/* FUNC(zx_cb_ReportUsageResponse_PUT_Status) */

void zx_cb_ReportUsageResponse_PUT_Status(struct zx_cb_ReportUsageResponse_s* x, int n, struct zx_cb_Status_s* z)
{
  struct zx_cb_Status_s* y;
  if (!x || !z) return;
  y = x->Status;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Status = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_cb_Status_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_cb_ReportUsageResponse_ADD_Status) */

void zx_cb_ReportUsageResponse_ADD_Status(struct zx_cb_ReportUsageResponse_s* x, int n, struct zx_cb_Status_s* z)
{
  struct zx_cb_Status_s* y;
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
    for (; y->gg.g.n; y = (struct zx_cb_Status_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Status; n > 1 && y; --n, y = (struct zx_cb_Status_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_cb_ReportUsageResponse_DEL_Status) */

void zx_cb_ReportUsageResponse_DEL_Status(struct zx_cb_ReportUsageResponse_s* x, int n)
{
  struct zx_cb_Status_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Status = (struct zx_cb_Status_s*)x->Status->gg.g.n;
    return;
  case -1:
    y = (struct zx_cb_Status_s*)x->Status;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_cb_Status_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Status; n > 1 && y->gg.g.n; --n, y = (struct zx_cb_Status_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif

/* FUNC(zx_cb_ReportUsageResponse_GET_id) */
struct zx_str* zx_cb_ReportUsageResponse_GET_id(struct zx_cb_ReportUsageResponse_s* x) { return x->id; }
/* FUNC(zx_cb_ReportUsageResponse_PUT_id) */
void zx_cb_ReportUsageResponse_PUT_id(struct zx_cb_ReportUsageResponse_s* x, struct zx_str* y) { x->id = y; }





/* FUNC(zx_cb_ResourceID_GET_id) */
struct zx_str* zx_cb_ResourceID_GET_id(struct zx_cb_ResourceID_s* x) { return x->id; }
/* FUNC(zx_cb_ResourceID_PUT_id) */
void zx_cb_ResourceID_PUT_id(struct zx_cb_ResourceID_s* x, struct zx_str* y) { x->id = y; }







#ifdef ZX_ENA_GETPUT

/* FUNC(zx_cb_Status_NUM_Status) */

int zx_cb_Status_NUM_Status(struct zx_cb_Status_s* x)
{
  struct zx_cb_Status_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Status; y; ++n, y = (struct zx_cb_Status_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_cb_Status_GET_Status) */

struct zx_cb_Status_s* zx_cb_Status_GET_Status(struct zx_cb_Status_s* x, int n)
{
  struct zx_cb_Status_s* y;
  if (!x) return 0;
  for (y = x->Status; n>=0 && y; --n, y = (struct zx_cb_Status_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_cb_Status_POP_Status) */

struct zx_cb_Status_s* zx_cb_Status_POP_Status(struct zx_cb_Status_s* x)
{
  struct zx_cb_Status_s* y;
  if (!x) return 0;
  y = x->Status;
  if (y)
    x->Status = (struct zx_cb_Status_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_cb_Status_PUSH_Status) */

void zx_cb_Status_PUSH_Status(struct zx_cb_Status_s* x, struct zx_cb_Status_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Status->gg.g;
  x->Status = z;
}

/* FUNC(zx_cb_Status_REV_Status) */

void zx_cb_Status_REV_Status(struct zx_cb_Status_s* x)
{
  struct zx_cb_Status_s* nxt;
  struct zx_cb_Status_s* y;
  if (!x) return;
  y = x->Status;
  if (!y) return;
  x->Status = 0;
  while (y) {
    nxt = (struct zx_cb_Status_s*)y->gg.g.n;
    y->gg.g.n = &x->Status->gg.g;
    x->Status = y;
    y = nxt;
  }
}

/* FUNC(zx_cb_Status_PUT_Status) */

void zx_cb_Status_PUT_Status(struct zx_cb_Status_s* x, int n, struct zx_cb_Status_s* z)
{
  struct zx_cb_Status_s* y;
  if (!x || !z) return;
  y = x->Status;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Status = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_cb_Status_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_cb_Status_ADD_Status) */

void zx_cb_Status_ADD_Status(struct zx_cb_Status_s* x, int n, struct zx_cb_Status_s* z)
{
  struct zx_cb_Status_s* y;
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
    for (; y->gg.g.n; y = (struct zx_cb_Status_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Status; n > 1 && y; --n, y = (struct zx_cb_Status_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_cb_Status_DEL_Status) */

void zx_cb_Status_DEL_Status(struct zx_cb_Status_s* x, int n)
{
  struct zx_cb_Status_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Status = (struct zx_cb_Status_s*)x->Status->gg.g.n;
    return;
  case -1:
    y = (struct zx_cb_Status_s*)x->Status;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_cb_Status_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Status; n > 1 && y->gg.g.n; --n, y = (struct zx_cb_Status_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif

/* FUNC(zx_cb_Status_GET_code) */
struct zx_str* zx_cb_Status_GET_code(struct zx_cb_Status_s* x) { return x->code; }
/* FUNC(zx_cb_Status_PUT_code) */
void zx_cb_Status_PUT_code(struct zx_cb_Status_s* x, struct zx_str* y) { x->code = y; }
/* FUNC(zx_cb_Status_GET_comment) */
struct zx_str* zx_cb_Status_GET_comment(struct zx_cb_Status_s* x) { return x->comment; }
/* FUNC(zx_cb_Status_PUT_comment) */
void zx_cb_Status_PUT_comment(struct zx_cb_Status_s* x, struct zx_str* y) { x->comment = y; }
/* FUNC(zx_cb_Status_GET_ref) */
struct zx_str* zx_cb_Status_GET_ref(struct zx_cb_Status_s* x) { return x->ref; }
/* FUNC(zx_cb_Status_PUT_ref) */
void zx_cb_Status_PUT_ref(struct zx_cb_Status_s* x, struct zx_str* y) { x->ref = y; }







#ifdef ZX_ENA_GETPUT

/* FUNC(zx_cb_Subscription_NUM_ItemSelection) */

int zx_cb_Subscription_NUM_ItemSelection(struct zx_cb_Subscription_s* x)
{
  struct zx_cb_ItemSelection_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->ItemSelection; y; ++n, y = (struct zx_cb_ItemSelection_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_cb_Subscription_GET_ItemSelection) */

struct zx_cb_ItemSelection_s* zx_cb_Subscription_GET_ItemSelection(struct zx_cb_Subscription_s* x, int n)
{
  struct zx_cb_ItemSelection_s* y;
  if (!x) return 0;
  for (y = x->ItemSelection; n>=0 && y; --n, y = (struct zx_cb_ItemSelection_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_cb_Subscription_POP_ItemSelection) */

struct zx_cb_ItemSelection_s* zx_cb_Subscription_POP_ItemSelection(struct zx_cb_Subscription_s* x)
{
  struct zx_cb_ItemSelection_s* y;
  if (!x) return 0;
  y = x->ItemSelection;
  if (y)
    x->ItemSelection = (struct zx_cb_ItemSelection_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_cb_Subscription_PUSH_ItemSelection) */

void zx_cb_Subscription_PUSH_ItemSelection(struct zx_cb_Subscription_s* x, struct zx_cb_ItemSelection_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->ItemSelection->gg.g;
  x->ItemSelection = z;
}

/* FUNC(zx_cb_Subscription_REV_ItemSelection) */

void zx_cb_Subscription_REV_ItemSelection(struct zx_cb_Subscription_s* x)
{
  struct zx_cb_ItemSelection_s* nxt;
  struct zx_cb_ItemSelection_s* y;
  if (!x) return;
  y = x->ItemSelection;
  if (!y) return;
  x->ItemSelection = 0;
  while (y) {
    nxt = (struct zx_cb_ItemSelection_s*)y->gg.g.n;
    y->gg.g.n = &x->ItemSelection->gg.g;
    x->ItemSelection = y;
    y = nxt;
  }
}

/* FUNC(zx_cb_Subscription_PUT_ItemSelection) */

void zx_cb_Subscription_PUT_ItemSelection(struct zx_cb_Subscription_s* x, int n, struct zx_cb_ItemSelection_s* z)
{
  struct zx_cb_ItemSelection_s* y;
  if (!x || !z) return;
  y = x->ItemSelection;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->ItemSelection = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_cb_ItemSelection_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_cb_Subscription_ADD_ItemSelection) */

void zx_cb_Subscription_ADD_ItemSelection(struct zx_cb_Subscription_s* x, int n, struct zx_cb_ItemSelection_s* z)
{
  struct zx_cb_ItemSelection_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->ItemSelection->gg.g;
    x->ItemSelection = z;
    return;
  case -1:
    y = x->ItemSelection;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_cb_ItemSelection_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->ItemSelection; n > 1 && y; --n, y = (struct zx_cb_ItemSelection_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_cb_Subscription_DEL_ItemSelection) */

void zx_cb_Subscription_DEL_ItemSelection(struct zx_cb_Subscription_s* x, int n)
{
  struct zx_cb_ItemSelection_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->ItemSelection = (struct zx_cb_ItemSelection_s*)x->ItemSelection->gg.g.n;
    return;
  case -1:
    y = (struct zx_cb_ItemSelection_s*)x->ItemSelection;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_cb_ItemSelection_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->ItemSelection; n > 1 && y->gg.g.n; --n, y = (struct zx_cb_ItemSelection_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_cb_Subscription_NUM_RefItem) */

int zx_cb_Subscription_NUM_RefItem(struct zx_cb_Subscription_s* x)
{
  struct zx_cb_RefItem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->RefItem; y; ++n, y = (struct zx_cb_RefItem_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_cb_Subscription_GET_RefItem) */

struct zx_cb_RefItem_s* zx_cb_Subscription_GET_RefItem(struct zx_cb_Subscription_s* x, int n)
{
  struct zx_cb_RefItem_s* y;
  if (!x) return 0;
  for (y = x->RefItem; n>=0 && y; --n, y = (struct zx_cb_RefItem_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_cb_Subscription_POP_RefItem) */

struct zx_cb_RefItem_s* zx_cb_Subscription_POP_RefItem(struct zx_cb_Subscription_s* x)
{
  struct zx_cb_RefItem_s* y;
  if (!x) return 0;
  y = x->RefItem;
  if (y)
    x->RefItem = (struct zx_cb_RefItem_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_cb_Subscription_PUSH_RefItem) */

void zx_cb_Subscription_PUSH_RefItem(struct zx_cb_Subscription_s* x, struct zx_cb_RefItem_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->RefItem->gg.g;
  x->RefItem = z;
}

/* FUNC(zx_cb_Subscription_REV_RefItem) */

void zx_cb_Subscription_REV_RefItem(struct zx_cb_Subscription_s* x)
{
  struct zx_cb_RefItem_s* nxt;
  struct zx_cb_RefItem_s* y;
  if (!x) return;
  y = x->RefItem;
  if (!y) return;
  x->RefItem = 0;
  while (y) {
    nxt = (struct zx_cb_RefItem_s*)y->gg.g.n;
    y->gg.g.n = &x->RefItem->gg.g;
    x->RefItem = y;
    y = nxt;
  }
}

/* FUNC(zx_cb_Subscription_PUT_RefItem) */

void zx_cb_Subscription_PUT_RefItem(struct zx_cb_Subscription_s* x, int n, struct zx_cb_RefItem_s* z)
{
  struct zx_cb_RefItem_s* y;
  if (!x || !z) return;
  y = x->RefItem;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->RefItem = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_cb_RefItem_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_cb_Subscription_ADD_RefItem) */

void zx_cb_Subscription_ADD_RefItem(struct zx_cb_Subscription_s* x, int n, struct zx_cb_RefItem_s* z)
{
  struct zx_cb_RefItem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->RefItem->gg.g;
    x->RefItem = z;
    return;
  case -1:
    y = x->RefItem;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_cb_RefItem_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->RefItem; n > 1 && y; --n, y = (struct zx_cb_RefItem_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_cb_Subscription_DEL_RefItem) */

void zx_cb_Subscription_DEL_RefItem(struct zx_cb_Subscription_s* x, int n)
{
  struct zx_cb_RefItem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->RefItem = (struct zx_cb_RefItem_s*)x->RefItem->gg.g.n;
    return;
  case -1:
    y = (struct zx_cb_RefItem_s*)x->RefItem;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_cb_RefItem_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->RefItem; n > 1 && y->gg.g.n; --n, y = (struct zx_cb_RefItem_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_cb_Subscription_NUM_NotifyTo) */

int zx_cb_Subscription_NUM_NotifyTo(struct zx_cb_Subscription_s* x)
{
  struct zx_cb_NotifyTo_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->NotifyTo; y; ++n, y = (struct zx_cb_NotifyTo_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_cb_Subscription_GET_NotifyTo) */

struct zx_cb_NotifyTo_s* zx_cb_Subscription_GET_NotifyTo(struct zx_cb_Subscription_s* x, int n)
{
  struct zx_cb_NotifyTo_s* y;
  if (!x) return 0;
  for (y = x->NotifyTo; n>=0 && y; --n, y = (struct zx_cb_NotifyTo_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_cb_Subscription_POP_NotifyTo) */

struct zx_cb_NotifyTo_s* zx_cb_Subscription_POP_NotifyTo(struct zx_cb_Subscription_s* x)
{
  struct zx_cb_NotifyTo_s* y;
  if (!x) return 0;
  y = x->NotifyTo;
  if (y)
    x->NotifyTo = (struct zx_cb_NotifyTo_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_cb_Subscription_PUSH_NotifyTo) */

void zx_cb_Subscription_PUSH_NotifyTo(struct zx_cb_Subscription_s* x, struct zx_cb_NotifyTo_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->NotifyTo->gg.g;
  x->NotifyTo = z;
}

/* FUNC(zx_cb_Subscription_REV_NotifyTo) */

void zx_cb_Subscription_REV_NotifyTo(struct zx_cb_Subscription_s* x)
{
  struct zx_cb_NotifyTo_s* nxt;
  struct zx_cb_NotifyTo_s* y;
  if (!x) return;
  y = x->NotifyTo;
  if (!y) return;
  x->NotifyTo = 0;
  while (y) {
    nxt = (struct zx_cb_NotifyTo_s*)y->gg.g.n;
    y->gg.g.n = &x->NotifyTo->gg.g;
    x->NotifyTo = y;
    y = nxt;
  }
}

/* FUNC(zx_cb_Subscription_PUT_NotifyTo) */

void zx_cb_Subscription_PUT_NotifyTo(struct zx_cb_Subscription_s* x, int n, struct zx_cb_NotifyTo_s* z)
{
  struct zx_cb_NotifyTo_s* y;
  if (!x || !z) return;
  y = x->NotifyTo;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->NotifyTo = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_cb_NotifyTo_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_cb_Subscription_ADD_NotifyTo) */

void zx_cb_Subscription_ADD_NotifyTo(struct zx_cb_Subscription_s* x, int n, struct zx_cb_NotifyTo_s* z)
{
  struct zx_cb_NotifyTo_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->NotifyTo->gg.g;
    x->NotifyTo = z;
    return;
  case -1:
    y = x->NotifyTo;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_cb_NotifyTo_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->NotifyTo; n > 1 && y; --n, y = (struct zx_cb_NotifyTo_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_cb_Subscription_DEL_NotifyTo) */

void zx_cb_Subscription_DEL_NotifyTo(struct zx_cb_Subscription_s* x, int n)
{
  struct zx_cb_NotifyTo_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->NotifyTo = (struct zx_cb_NotifyTo_s*)x->NotifyTo->gg.g.n;
    return;
  case -1:
    y = (struct zx_cb_NotifyTo_s*)x->NotifyTo;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_cb_NotifyTo_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->NotifyTo; n > 1 && y->gg.g.n; --n, y = (struct zx_cb_NotifyTo_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_cb_Subscription_NUM_NotifyAdminTo) */

int zx_cb_Subscription_NUM_NotifyAdminTo(struct zx_cb_Subscription_s* x)
{
  struct zx_cb_NotifyAdminTo_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->NotifyAdminTo; y; ++n, y = (struct zx_cb_NotifyAdminTo_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_cb_Subscription_GET_NotifyAdminTo) */

struct zx_cb_NotifyAdminTo_s* zx_cb_Subscription_GET_NotifyAdminTo(struct zx_cb_Subscription_s* x, int n)
{
  struct zx_cb_NotifyAdminTo_s* y;
  if (!x) return 0;
  for (y = x->NotifyAdminTo; n>=0 && y; --n, y = (struct zx_cb_NotifyAdminTo_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_cb_Subscription_POP_NotifyAdminTo) */

struct zx_cb_NotifyAdminTo_s* zx_cb_Subscription_POP_NotifyAdminTo(struct zx_cb_Subscription_s* x)
{
  struct zx_cb_NotifyAdminTo_s* y;
  if (!x) return 0;
  y = x->NotifyAdminTo;
  if (y)
    x->NotifyAdminTo = (struct zx_cb_NotifyAdminTo_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_cb_Subscription_PUSH_NotifyAdminTo) */

void zx_cb_Subscription_PUSH_NotifyAdminTo(struct zx_cb_Subscription_s* x, struct zx_cb_NotifyAdminTo_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->NotifyAdminTo->gg.g;
  x->NotifyAdminTo = z;
}

/* FUNC(zx_cb_Subscription_REV_NotifyAdminTo) */

void zx_cb_Subscription_REV_NotifyAdminTo(struct zx_cb_Subscription_s* x)
{
  struct zx_cb_NotifyAdminTo_s* nxt;
  struct zx_cb_NotifyAdminTo_s* y;
  if (!x) return;
  y = x->NotifyAdminTo;
  if (!y) return;
  x->NotifyAdminTo = 0;
  while (y) {
    nxt = (struct zx_cb_NotifyAdminTo_s*)y->gg.g.n;
    y->gg.g.n = &x->NotifyAdminTo->gg.g;
    x->NotifyAdminTo = y;
    y = nxt;
  }
}

/* FUNC(zx_cb_Subscription_PUT_NotifyAdminTo) */

void zx_cb_Subscription_PUT_NotifyAdminTo(struct zx_cb_Subscription_s* x, int n, struct zx_cb_NotifyAdminTo_s* z)
{
  struct zx_cb_NotifyAdminTo_s* y;
  if (!x || !z) return;
  y = x->NotifyAdminTo;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->NotifyAdminTo = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_cb_NotifyAdminTo_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_cb_Subscription_ADD_NotifyAdminTo) */

void zx_cb_Subscription_ADD_NotifyAdminTo(struct zx_cb_Subscription_s* x, int n, struct zx_cb_NotifyAdminTo_s* z)
{
  struct zx_cb_NotifyAdminTo_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->NotifyAdminTo->gg.g;
    x->NotifyAdminTo = z;
    return;
  case -1:
    y = x->NotifyAdminTo;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_cb_NotifyAdminTo_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->NotifyAdminTo; n > 1 && y; --n, y = (struct zx_cb_NotifyAdminTo_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_cb_Subscription_DEL_NotifyAdminTo) */

void zx_cb_Subscription_DEL_NotifyAdminTo(struct zx_cb_Subscription_s* x, int n)
{
  struct zx_cb_NotifyAdminTo_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->NotifyAdminTo = (struct zx_cb_NotifyAdminTo_s*)x->NotifyAdminTo->gg.g.n;
    return;
  case -1:
    y = (struct zx_cb_NotifyAdminTo_s*)x->NotifyAdminTo;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_cb_NotifyAdminTo_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->NotifyAdminTo; n > 1 && y->gg.g.n; --n, y = (struct zx_cb_NotifyAdminTo_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_cb_Subscription_NUM_Aggregation) */

int zx_cb_Subscription_NUM_Aggregation(struct zx_cb_Subscription_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Aggregation; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_cb_Subscription_GET_Aggregation) */

struct zx_elem_s* zx_cb_Subscription_GET_Aggregation(struct zx_cb_Subscription_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->Aggregation; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_cb_Subscription_POP_Aggregation) */

struct zx_elem_s* zx_cb_Subscription_POP_Aggregation(struct zx_cb_Subscription_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->Aggregation;
  if (y)
    x->Aggregation = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_cb_Subscription_PUSH_Aggregation) */

void zx_cb_Subscription_PUSH_Aggregation(struct zx_cb_Subscription_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->Aggregation->g;
  x->Aggregation = z;
}

/* FUNC(zx_cb_Subscription_REV_Aggregation) */

void zx_cb_Subscription_REV_Aggregation(struct zx_cb_Subscription_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->Aggregation;
  if (!y) return;
  x->Aggregation = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->Aggregation->g;
    x->Aggregation = y;
    y = nxt;
  }
}

/* FUNC(zx_cb_Subscription_PUT_Aggregation) */

void zx_cb_Subscription_PUT_Aggregation(struct zx_cb_Subscription_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->Aggregation;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->Aggregation = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_cb_Subscription_ADD_Aggregation) */

void zx_cb_Subscription_ADD_Aggregation(struct zx_cb_Subscription_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->Aggregation->g;
    x->Aggregation = z;
    return;
  case -1:
    y = x->Aggregation;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->Aggregation; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_cb_Subscription_DEL_Aggregation) */

void zx_cb_Subscription_DEL_Aggregation(struct zx_cb_Subscription_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Aggregation = (struct zx_elem_s*)x->Aggregation->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->Aggregation;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->Aggregation; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_cb_Subscription_NUM_Trigger) */

int zx_cb_Subscription_NUM_Trigger(struct zx_cb_Subscription_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Trigger; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_cb_Subscription_GET_Trigger) */

struct zx_elem_s* zx_cb_Subscription_GET_Trigger(struct zx_cb_Subscription_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->Trigger; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_cb_Subscription_POP_Trigger) */

struct zx_elem_s* zx_cb_Subscription_POP_Trigger(struct zx_cb_Subscription_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->Trigger;
  if (y)
    x->Trigger = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_cb_Subscription_PUSH_Trigger) */

void zx_cb_Subscription_PUSH_Trigger(struct zx_cb_Subscription_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->Trigger->g;
  x->Trigger = z;
}

/* FUNC(zx_cb_Subscription_REV_Trigger) */

void zx_cb_Subscription_REV_Trigger(struct zx_cb_Subscription_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->Trigger;
  if (!y) return;
  x->Trigger = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->Trigger->g;
    x->Trigger = y;
    y = nxt;
  }
}

/* FUNC(zx_cb_Subscription_PUT_Trigger) */

void zx_cb_Subscription_PUT_Trigger(struct zx_cb_Subscription_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->Trigger;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->Trigger = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_cb_Subscription_ADD_Trigger) */

void zx_cb_Subscription_ADD_Trigger(struct zx_cb_Subscription_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->Trigger->g;
    x->Trigger = z;
    return;
  case -1:
    y = x->Trigger;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->Trigger; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_cb_Subscription_DEL_Trigger) */

void zx_cb_Subscription_DEL_Trigger(struct zx_cb_Subscription_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Trigger = (struct zx_elem_s*)x->Trigger->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->Trigger;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->Trigger; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_cb_Subscription_NUM_Extension) */

int zx_cb_Subscription_NUM_Extension(struct zx_cb_Subscription_s* x)
{
  struct zx_cb_Extension_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Extension; y; ++n, y = (struct zx_cb_Extension_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_cb_Subscription_GET_Extension) */

struct zx_cb_Extension_s* zx_cb_Subscription_GET_Extension(struct zx_cb_Subscription_s* x, int n)
{
  struct zx_cb_Extension_s* y;
  if (!x) return 0;
  for (y = x->Extension; n>=0 && y; --n, y = (struct zx_cb_Extension_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_cb_Subscription_POP_Extension) */

struct zx_cb_Extension_s* zx_cb_Subscription_POP_Extension(struct zx_cb_Subscription_s* x)
{
  struct zx_cb_Extension_s* y;
  if (!x) return 0;
  y = x->Extension;
  if (y)
    x->Extension = (struct zx_cb_Extension_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_cb_Subscription_PUSH_Extension) */

void zx_cb_Subscription_PUSH_Extension(struct zx_cb_Subscription_s* x, struct zx_cb_Extension_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Extension->gg.g;
  x->Extension = z;
}

/* FUNC(zx_cb_Subscription_REV_Extension) */

void zx_cb_Subscription_REV_Extension(struct zx_cb_Subscription_s* x)
{
  struct zx_cb_Extension_s* nxt;
  struct zx_cb_Extension_s* y;
  if (!x) return;
  y = x->Extension;
  if (!y) return;
  x->Extension = 0;
  while (y) {
    nxt = (struct zx_cb_Extension_s*)y->gg.g.n;
    y->gg.g.n = &x->Extension->gg.g;
    x->Extension = y;
    y = nxt;
  }
}

/* FUNC(zx_cb_Subscription_PUT_Extension) */

void zx_cb_Subscription_PUT_Extension(struct zx_cb_Subscription_s* x, int n, struct zx_cb_Extension_s* z)
{
  struct zx_cb_Extension_s* y;
  if (!x || !z) return;
  y = x->Extension;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Extension = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_cb_Extension_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_cb_Subscription_ADD_Extension) */

void zx_cb_Subscription_ADD_Extension(struct zx_cb_Subscription_s* x, int n, struct zx_cb_Extension_s* z)
{
  struct zx_cb_Extension_s* y;
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
    for (; y->gg.g.n; y = (struct zx_cb_Extension_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Extension; n > 1 && y; --n, y = (struct zx_cb_Extension_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_cb_Subscription_DEL_Extension) */

void zx_cb_Subscription_DEL_Extension(struct zx_cb_Subscription_s* x, int n)
{
  struct zx_cb_Extension_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Extension = (struct zx_cb_Extension_s*)x->Extension->gg.g.n;
    return;
  case -1:
    y = (struct zx_cb_Extension_s*)x->Extension;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_cb_Extension_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Extension; n > 1 && y->gg.g.n; --n, y = (struct zx_cb_Extension_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif

/* FUNC(zx_cb_Subscription_GET_expires) */
struct zx_str* zx_cb_Subscription_GET_expires(struct zx_cb_Subscription_s* x) { return x->expires; }
/* FUNC(zx_cb_Subscription_PUT_expires) */
void zx_cb_Subscription_PUT_expires(struct zx_cb_Subscription_s* x, struct zx_str* y) { x->expires = y; }
/* FUNC(zx_cb_Subscription_GET_id) */
struct zx_str* zx_cb_Subscription_GET_id(struct zx_cb_Subscription_s* x) { return x->id; }
/* FUNC(zx_cb_Subscription_PUT_id) */
void zx_cb_Subscription_PUT_id(struct zx_cb_Subscription_s* x, struct zx_str* y) { x->id = y; }
/* FUNC(zx_cb_Subscription_GET_includeData) */
struct zx_str* zx_cb_Subscription_GET_includeData(struct zx_cb_Subscription_s* x) { return x->includeData; }
/* FUNC(zx_cb_Subscription_PUT_includeData) */
void zx_cb_Subscription_PUT_includeData(struct zx_cb_Subscription_s* x, struct zx_str* y) { x->includeData = y; }
/* FUNC(zx_cb_Subscription_GET_starts) */
struct zx_str* zx_cb_Subscription_GET_starts(struct zx_cb_Subscription_s* x) { return x->starts; }
/* FUNC(zx_cb_Subscription_PUT_starts) */
void zx_cb_Subscription_PUT_starts(struct zx_cb_Subscription_s* x, struct zx_str* y) { x->starts = y; }
/* FUNC(zx_cb_Subscription_GET_subscriptionID) */
struct zx_str* zx_cb_Subscription_GET_subscriptionID(struct zx_cb_Subscription_s* x) { return x->subscriptionID; }
/* FUNC(zx_cb_Subscription_PUT_subscriptionID) */
void zx_cb_Subscription_PUT_subscriptionID(struct zx_cb_Subscription_s* x, struct zx_str* y) { x->subscriptionID = y; }





/* FUNC(zx_cb_UsageType_GET_success) */
struct zx_str* zx_cb_UsageType_GET_success(struct zx_cb_UsageType_s* x) { return x->success; }
/* FUNC(zx_cb_UsageType_PUT_success) */
void zx_cb_UsageType_PUT_success(struct zx_cb_UsageType_s* x, struct zx_str* y) { x->success = y; }
/* FUNC(zx_cb_UsageType_GET_ACC) */
struct zx_str* zx_cb_UsageType_GET_ACC(struct zx_cb_UsageType_s* x) { return x->ACC; }
/* FUNC(zx_cb_UsageType_PUT_ACC) */
void zx_cb_UsageType_PUT_ACC(struct zx_cb_UsageType_s* x, struct zx_str* y) { x->ACC = y; }
/* FUNC(zx_cb_UsageType_GET_ACCTime) */
struct zx_str* zx_cb_UsageType_GET_ACCTime(struct zx_cb_UsageType_s* x) { return x->ACCTime; }
/* FUNC(zx_cb_UsageType_PUT_ACCTime) */
void zx_cb_UsageType_PUT_ACCTime(struct zx_cb_UsageType_s* x, struct zx_str* y) { x->ACCTime = y; }
/* FUNC(zx_cb_UsageType_GET_id) */
struct zx_str* zx_cb_UsageType_GET_id(struct zx_cb_UsageType_s* x) { return x->id; }
/* FUNC(zx_cb_UsageType_PUT_id) */
void zx_cb_UsageType_PUT_id(struct zx_cb_UsageType_s* x, struct zx_str* y) { x->id = y; }
/* FUNC(zx_cb_UsageType_GET_modificationTime) */
struct zx_str* zx_cb_UsageType_GET_modificationTime(struct zx_cb_UsageType_s* x) { return x->modificationTime; }
/* FUNC(zx_cb_UsageType_PUT_modificationTime) */
void zx_cb_UsageType_PUT_modificationTime(struct zx_cb_UsageType_s* x, struct zx_str* y) { x->modificationTime = y; }
/* FUNC(zx_cb_UsageType_GET_modifier) */
struct zx_str* zx_cb_UsageType_GET_modifier(struct zx_cb_UsageType_s* x) { return x->modifier; }
/* FUNC(zx_cb_UsageType_PUT_modifier) */
void zx_cb_UsageType_PUT_modifier(struct zx_cb_UsageType_s* x, struct zx_str* y) { x->modifier = y; }





/* EOF -- c/zx-cb-getput.c */
