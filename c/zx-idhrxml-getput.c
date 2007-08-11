/* c/zx-idhrxml-getput.c - WARNING: This file was automatically generated. DO NOT EDIT!
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
#include "c/zx-idhrxml-data.h"



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_idhrxml_Create_NUM_Extension) */

int zx_idhrxml_Create_NUM_Extension(struct zx_idhrxml_Create_s* x)
{
  struct zx_lu_Extension_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Extension; y; ++n, y = (struct zx_lu_Extension_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_idhrxml_Create_GET_Extension) */

struct zx_lu_Extension_s* zx_idhrxml_Create_GET_Extension(struct zx_idhrxml_Create_s* x, int n)
{
  struct zx_lu_Extension_s* y;
  if (!x) return 0;
  for (y = x->Extension; n>=0 && y; --n, y = (struct zx_lu_Extension_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_idhrxml_Create_POP_Extension) */

struct zx_lu_Extension_s* zx_idhrxml_Create_POP_Extension(struct zx_idhrxml_Create_s* x)
{
  struct zx_lu_Extension_s* y;
  if (!x) return 0;
  y = x->Extension;
  if (y)
    x->Extension = (struct zx_lu_Extension_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_idhrxml_Create_PUSH_Extension) */

void zx_idhrxml_Create_PUSH_Extension(struct zx_idhrxml_Create_s* x, struct zx_lu_Extension_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Extension->gg.g;
  x->Extension = z;
}

/* FUNC(zx_idhrxml_Create_REV_Extension) */

void zx_idhrxml_Create_REV_Extension(struct zx_idhrxml_Create_s* x)
{
  struct zx_lu_Extension_s* nxt;
  struct zx_lu_Extension_s* y;
  if (!x) return;
  y = x->Extension;
  if (!y) return;
  x->Extension = 0;
  while (y) {
    nxt = (struct zx_lu_Extension_s*)y->gg.g.n;
    y->gg.g.n = &x->Extension->gg.g;
    x->Extension = y;
    y = nxt;
  }
}

/* FUNC(zx_idhrxml_Create_PUT_Extension) */

void zx_idhrxml_Create_PUT_Extension(struct zx_idhrxml_Create_s* x, int n, struct zx_lu_Extension_s* z)
{
  struct zx_lu_Extension_s* y;
  if (!x || !z) return;
  y = x->Extension;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Extension = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_lu_Extension_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_idhrxml_Create_ADD_Extension) */

void zx_idhrxml_Create_ADD_Extension(struct zx_idhrxml_Create_s* x, int n, struct zx_lu_Extension_s* z)
{
  struct zx_lu_Extension_s* y;
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
    for (; y->gg.g.n; y = (struct zx_lu_Extension_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Extension; n > 1 && y; --n, y = (struct zx_lu_Extension_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_idhrxml_Create_DEL_Extension) */

void zx_idhrxml_Create_DEL_Extension(struct zx_idhrxml_Create_s* x, int n)
{
  struct zx_lu_Extension_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Extension = (struct zx_lu_Extension_s*)x->Extension->gg.g.n;
    return;
  case -1:
    y = (struct zx_lu_Extension_s*)x->Extension;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_lu_Extension_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Extension; n > 1 && y->gg.g.n; --n, y = (struct zx_lu_Extension_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_idhrxml_Create_NUM_Subscription) */

int zx_idhrxml_Create_NUM_Subscription(struct zx_idhrxml_Create_s* x)
{
  struct zx_idhrxml_Subscription_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Subscription; y; ++n, y = (struct zx_idhrxml_Subscription_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_idhrxml_Create_GET_Subscription) */

struct zx_idhrxml_Subscription_s* zx_idhrxml_Create_GET_Subscription(struct zx_idhrxml_Create_s* x, int n)
{
  struct zx_idhrxml_Subscription_s* y;
  if (!x) return 0;
  for (y = x->Subscription; n>=0 && y; --n, y = (struct zx_idhrxml_Subscription_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_idhrxml_Create_POP_Subscription) */

struct zx_idhrxml_Subscription_s* zx_idhrxml_Create_POP_Subscription(struct zx_idhrxml_Create_s* x)
{
  struct zx_idhrxml_Subscription_s* y;
  if (!x) return 0;
  y = x->Subscription;
  if (y)
    x->Subscription = (struct zx_idhrxml_Subscription_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_idhrxml_Create_PUSH_Subscription) */

void zx_idhrxml_Create_PUSH_Subscription(struct zx_idhrxml_Create_s* x, struct zx_idhrxml_Subscription_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Subscription->gg.g;
  x->Subscription = z;
}

/* FUNC(zx_idhrxml_Create_REV_Subscription) */

void zx_idhrxml_Create_REV_Subscription(struct zx_idhrxml_Create_s* x)
{
  struct zx_idhrxml_Subscription_s* nxt;
  struct zx_idhrxml_Subscription_s* y;
  if (!x) return;
  y = x->Subscription;
  if (!y) return;
  x->Subscription = 0;
  while (y) {
    nxt = (struct zx_idhrxml_Subscription_s*)y->gg.g.n;
    y->gg.g.n = &x->Subscription->gg.g;
    x->Subscription = y;
    y = nxt;
  }
}

/* FUNC(zx_idhrxml_Create_PUT_Subscription) */

void zx_idhrxml_Create_PUT_Subscription(struct zx_idhrxml_Create_s* x, int n, struct zx_idhrxml_Subscription_s* z)
{
  struct zx_idhrxml_Subscription_s* y;
  if (!x || !z) return;
  y = x->Subscription;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Subscription = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_idhrxml_Subscription_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_idhrxml_Create_ADD_Subscription) */

void zx_idhrxml_Create_ADD_Subscription(struct zx_idhrxml_Create_s* x, int n, struct zx_idhrxml_Subscription_s* z)
{
  struct zx_idhrxml_Subscription_s* y;
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
    for (; y->gg.g.n; y = (struct zx_idhrxml_Subscription_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Subscription; n > 1 && y; --n, y = (struct zx_idhrxml_Subscription_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_idhrxml_Create_DEL_Subscription) */

void zx_idhrxml_Create_DEL_Subscription(struct zx_idhrxml_Create_s* x, int n)
{
  struct zx_idhrxml_Subscription_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Subscription = (struct zx_idhrxml_Subscription_s*)x->Subscription->gg.g.n;
    return;
  case -1:
    y = (struct zx_idhrxml_Subscription_s*)x->Subscription;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_idhrxml_Subscription_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Subscription; n > 1 && y->gg.g.n; --n, y = (struct zx_idhrxml_Subscription_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_idhrxml_Create_NUM_CreateItem) */

int zx_idhrxml_Create_NUM_CreateItem(struct zx_idhrxml_Create_s* x)
{
  struct zx_idhrxml_CreateItem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->CreateItem; y; ++n, y = (struct zx_idhrxml_CreateItem_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_idhrxml_Create_GET_CreateItem) */

struct zx_idhrxml_CreateItem_s* zx_idhrxml_Create_GET_CreateItem(struct zx_idhrxml_Create_s* x, int n)
{
  struct zx_idhrxml_CreateItem_s* y;
  if (!x) return 0;
  for (y = x->CreateItem; n>=0 && y; --n, y = (struct zx_idhrxml_CreateItem_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_idhrxml_Create_POP_CreateItem) */

struct zx_idhrxml_CreateItem_s* zx_idhrxml_Create_POP_CreateItem(struct zx_idhrxml_Create_s* x)
{
  struct zx_idhrxml_CreateItem_s* y;
  if (!x) return 0;
  y = x->CreateItem;
  if (y)
    x->CreateItem = (struct zx_idhrxml_CreateItem_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_idhrxml_Create_PUSH_CreateItem) */

void zx_idhrxml_Create_PUSH_CreateItem(struct zx_idhrxml_Create_s* x, struct zx_idhrxml_CreateItem_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->CreateItem->gg.g;
  x->CreateItem = z;
}

/* FUNC(zx_idhrxml_Create_REV_CreateItem) */

void zx_idhrxml_Create_REV_CreateItem(struct zx_idhrxml_Create_s* x)
{
  struct zx_idhrxml_CreateItem_s* nxt;
  struct zx_idhrxml_CreateItem_s* y;
  if (!x) return;
  y = x->CreateItem;
  if (!y) return;
  x->CreateItem = 0;
  while (y) {
    nxt = (struct zx_idhrxml_CreateItem_s*)y->gg.g.n;
    y->gg.g.n = &x->CreateItem->gg.g;
    x->CreateItem = y;
    y = nxt;
  }
}

/* FUNC(zx_idhrxml_Create_PUT_CreateItem) */

void zx_idhrxml_Create_PUT_CreateItem(struct zx_idhrxml_Create_s* x, int n, struct zx_idhrxml_CreateItem_s* z)
{
  struct zx_idhrxml_CreateItem_s* y;
  if (!x || !z) return;
  y = x->CreateItem;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->CreateItem = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_idhrxml_CreateItem_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_idhrxml_Create_ADD_CreateItem) */

void zx_idhrxml_Create_ADD_CreateItem(struct zx_idhrxml_Create_s* x, int n, struct zx_idhrxml_CreateItem_s* z)
{
  struct zx_idhrxml_CreateItem_s* y;
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
    for (; y->gg.g.n; y = (struct zx_idhrxml_CreateItem_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->CreateItem; n > 1 && y; --n, y = (struct zx_idhrxml_CreateItem_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_idhrxml_Create_DEL_CreateItem) */

void zx_idhrxml_Create_DEL_CreateItem(struct zx_idhrxml_Create_s* x, int n)
{
  struct zx_idhrxml_CreateItem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->CreateItem = (struct zx_idhrxml_CreateItem_s*)x->CreateItem->gg.g.n;
    return;
  case -1:
    y = (struct zx_idhrxml_CreateItem_s*)x->CreateItem;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_idhrxml_CreateItem_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->CreateItem; n > 1 && y->gg.g.n; --n, y = (struct zx_idhrxml_CreateItem_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_idhrxml_Create_NUM_ResultQuery) */

int zx_idhrxml_Create_NUM_ResultQuery(struct zx_idhrxml_Create_s* x)
{
  struct zx_idhrxml_ResultQuery_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->ResultQuery; y; ++n, y = (struct zx_idhrxml_ResultQuery_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_idhrxml_Create_GET_ResultQuery) */

struct zx_idhrxml_ResultQuery_s* zx_idhrxml_Create_GET_ResultQuery(struct zx_idhrxml_Create_s* x, int n)
{
  struct zx_idhrxml_ResultQuery_s* y;
  if (!x) return 0;
  for (y = x->ResultQuery; n>=0 && y; --n, y = (struct zx_idhrxml_ResultQuery_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_idhrxml_Create_POP_ResultQuery) */

struct zx_idhrxml_ResultQuery_s* zx_idhrxml_Create_POP_ResultQuery(struct zx_idhrxml_Create_s* x)
{
  struct zx_idhrxml_ResultQuery_s* y;
  if (!x) return 0;
  y = x->ResultQuery;
  if (y)
    x->ResultQuery = (struct zx_idhrxml_ResultQuery_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_idhrxml_Create_PUSH_ResultQuery) */

void zx_idhrxml_Create_PUSH_ResultQuery(struct zx_idhrxml_Create_s* x, struct zx_idhrxml_ResultQuery_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->ResultQuery->gg.g;
  x->ResultQuery = z;
}

/* FUNC(zx_idhrxml_Create_REV_ResultQuery) */

void zx_idhrxml_Create_REV_ResultQuery(struct zx_idhrxml_Create_s* x)
{
  struct zx_idhrxml_ResultQuery_s* nxt;
  struct zx_idhrxml_ResultQuery_s* y;
  if (!x) return;
  y = x->ResultQuery;
  if (!y) return;
  x->ResultQuery = 0;
  while (y) {
    nxt = (struct zx_idhrxml_ResultQuery_s*)y->gg.g.n;
    y->gg.g.n = &x->ResultQuery->gg.g;
    x->ResultQuery = y;
    y = nxt;
  }
}

/* FUNC(zx_idhrxml_Create_PUT_ResultQuery) */

void zx_idhrxml_Create_PUT_ResultQuery(struct zx_idhrxml_Create_s* x, int n, struct zx_idhrxml_ResultQuery_s* z)
{
  struct zx_idhrxml_ResultQuery_s* y;
  if (!x || !z) return;
  y = x->ResultQuery;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->ResultQuery = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_idhrxml_ResultQuery_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_idhrxml_Create_ADD_ResultQuery) */

void zx_idhrxml_Create_ADD_ResultQuery(struct zx_idhrxml_Create_s* x, int n, struct zx_idhrxml_ResultQuery_s* z)
{
  struct zx_idhrxml_ResultQuery_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->ResultQuery->gg.g;
    x->ResultQuery = z;
    return;
  case -1:
    y = x->ResultQuery;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_idhrxml_ResultQuery_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->ResultQuery; n > 1 && y; --n, y = (struct zx_idhrxml_ResultQuery_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_idhrxml_Create_DEL_ResultQuery) */

void zx_idhrxml_Create_DEL_ResultQuery(struct zx_idhrxml_Create_s* x, int n)
{
  struct zx_idhrxml_ResultQuery_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->ResultQuery = (struct zx_idhrxml_ResultQuery_s*)x->ResultQuery->gg.g.n;
    return;
  case -1:
    y = (struct zx_idhrxml_ResultQuery_s*)x->ResultQuery;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_idhrxml_ResultQuery_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->ResultQuery; n > 1 && y->gg.g.n; --n, y = (struct zx_idhrxml_ResultQuery_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif

/* FUNC(zx_idhrxml_Create_GET_itemID) */
struct zx_str* zx_idhrxml_Create_GET_itemID(struct zx_idhrxml_Create_s* x) { return x->itemID; }
/* FUNC(zx_idhrxml_Create_PUT_itemID) */
void zx_idhrxml_Create_PUT_itemID(struct zx_idhrxml_Create_s* x, struct zx_str* y) { x->itemID = y; }







#ifdef ZX_ENA_GETPUT

/* FUNC(zx_idhrxml_CreateItem_NUM_NewData) */

int zx_idhrxml_CreateItem_NUM_NewData(struct zx_idhrxml_CreateItem_s* x)
{
  struct zx_idhrxml_NewData_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->NewData; y; ++n, y = (struct zx_idhrxml_NewData_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_idhrxml_CreateItem_GET_NewData) */

struct zx_idhrxml_NewData_s* zx_idhrxml_CreateItem_GET_NewData(struct zx_idhrxml_CreateItem_s* x, int n)
{
  struct zx_idhrxml_NewData_s* y;
  if (!x) return 0;
  for (y = x->NewData; n>=0 && y; --n, y = (struct zx_idhrxml_NewData_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_idhrxml_CreateItem_POP_NewData) */

struct zx_idhrxml_NewData_s* zx_idhrxml_CreateItem_POP_NewData(struct zx_idhrxml_CreateItem_s* x)
{
  struct zx_idhrxml_NewData_s* y;
  if (!x) return 0;
  y = x->NewData;
  if (y)
    x->NewData = (struct zx_idhrxml_NewData_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_idhrxml_CreateItem_PUSH_NewData) */

void zx_idhrxml_CreateItem_PUSH_NewData(struct zx_idhrxml_CreateItem_s* x, struct zx_idhrxml_NewData_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->NewData->gg.g;
  x->NewData = z;
}

/* FUNC(zx_idhrxml_CreateItem_REV_NewData) */

void zx_idhrxml_CreateItem_REV_NewData(struct zx_idhrxml_CreateItem_s* x)
{
  struct zx_idhrxml_NewData_s* nxt;
  struct zx_idhrxml_NewData_s* y;
  if (!x) return;
  y = x->NewData;
  if (!y) return;
  x->NewData = 0;
  while (y) {
    nxt = (struct zx_idhrxml_NewData_s*)y->gg.g.n;
    y->gg.g.n = &x->NewData->gg.g;
    x->NewData = y;
    y = nxt;
  }
}

/* FUNC(zx_idhrxml_CreateItem_PUT_NewData) */

void zx_idhrxml_CreateItem_PUT_NewData(struct zx_idhrxml_CreateItem_s* x, int n, struct zx_idhrxml_NewData_s* z)
{
  struct zx_idhrxml_NewData_s* y;
  if (!x || !z) return;
  y = x->NewData;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->NewData = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_idhrxml_NewData_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_idhrxml_CreateItem_ADD_NewData) */

void zx_idhrxml_CreateItem_ADD_NewData(struct zx_idhrxml_CreateItem_s* x, int n, struct zx_idhrxml_NewData_s* z)
{
  struct zx_idhrxml_NewData_s* y;
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
    for (; y->gg.g.n; y = (struct zx_idhrxml_NewData_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->NewData; n > 1 && y; --n, y = (struct zx_idhrxml_NewData_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_idhrxml_CreateItem_DEL_NewData) */

void zx_idhrxml_CreateItem_DEL_NewData(struct zx_idhrxml_CreateItem_s* x, int n)
{
  struct zx_idhrxml_NewData_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->NewData = (struct zx_idhrxml_NewData_s*)x->NewData->gg.g.n;
    return;
  case -1:
    y = (struct zx_idhrxml_NewData_s*)x->NewData;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_idhrxml_NewData_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->NewData; n > 1 && y->gg.g.n; --n, y = (struct zx_idhrxml_NewData_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif

/* FUNC(zx_idhrxml_CreateItem_GET_id) */
struct zx_str* zx_idhrxml_CreateItem_GET_id(struct zx_idhrxml_CreateItem_s* x) { return x->id; }
/* FUNC(zx_idhrxml_CreateItem_PUT_id) */
void zx_idhrxml_CreateItem_PUT_id(struct zx_idhrxml_CreateItem_s* x, struct zx_str* y) { x->id = y; }
/* FUNC(zx_idhrxml_CreateItem_GET_objectType) */
struct zx_str* zx_idhrxml_CreateItem_GET_objectType(struct zx_idhrxml_CreateItem_s* x) { return x->objectType; }
/* FUNC(zx_idhrxml_CreateItem_PUT_objectType) */
void zx_idhrxml_CreateItem_PUT_objectType(struct zx_idhrxml_CreateItem_s* x, struct zx_str* y) { x->objectType = y; }
/* FUNC(zx_idhrxml_CreateItem_GET_itemID) */
struct zx_str* zx_idhrxml_CreateItem_GET_itemID(struct zx_idhrxml_CreateItem_s* x) { return x->itemID; }
/* FUNC(zx_idhrxml_CreateItem_PUT_itemID) */
void zx_idhrxml_CreateItem_PUT_itemID(struct zx_idhrxml_CreateItem_s* x, struct zx_str* y) { x->itemID = y; }







#ifdef ZX_ENA_GETPUT

/* FUNC(zx_idhrxml_CreateResponse_NUM_Status) */

int zx_idhrxml_CreateResponse_NUM_Status(struct zx_idhrxml_CreateResponse_s* x)
{
  struct zx_lu_Status_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Status; y; ++n, y = (struct zx_lu_Status_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_idhrxml_CreateResponse_GET_Status) */

struct zx_lu_Status_s* zx_idhrxml_CreateResponse_GET_Status(struct zx_idhrxml_CreateResponse_s* x, int n)
{
  struct zx_lu_Status_s* y;
  if (!x) return 0;
  for (y = x->Status; n>=0 && y; --n, y = (struct zx_lu_Status_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_idhrxml_CreateResponse_POP_Status) */

struct zx_lu_Status_s* zx_idhrxml_CreateResponse_POP_Status(struct zx_idhrxml_CreateResponse_s* x)
{
  struct zx_lu_Status_s* y;
  if (!x) return 0;
  y = x->Status;
  if (y)
    x->Status = (struct zx_lu_Status_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_idhrxml_CreateResponse_PUSH_Status) */

void zx_idhrxml_CreateResponse_PUSH_Status(struct zx_idhrxml_CreateResponse_s* x, struct zx_lu_Status_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Status->gg.g;
  x->Status = z;
}

/* FUNC(zx_idhrxml_CreateResponse_REV_Status) */

void zx_idhrxml_CreateResponse_REV_Status(struct zx_idhrxml_CreateResponse_s* x)
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

/* FUNC(zx_idhrxml_CreateResponse_PUT_Status) */

void zx_idhrxml_CreateResponse_PUT_Status(struct zx_idhrxml_CreateResponse_s* x, int n, struct zx_lu_Status_s* z)
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

/* FUNC(zx_idhrxml_CreateResponse_ADD_Status) */

void zx_idhrxml_CreateResponse_ADD_Status(struct zx_idhrxml_CreateResponse_s* x, int n, struct zx_lu_Status_s* z)
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

/* FUNC(zx_idhrxml_CreateResponse_DEL_Status) */

void zx_idhrxml_CreateResponse_DEL_Status(struct zx_idhrxml_CreateResponse_s* x, int n)
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

/* FUNC(zx_idhrxml_CreateResponse_NUM_Extension) */

int zx_idhrxml_CreateResponse_NUM_Extension(struct zx_idhrxml_CreateResponse_s* x)
{
  struct zx_lu_Extension_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Extension; y; ++n, y = (struct zx_lu_Extension_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_idhrxml_CreateResponse_GET_Extension) */

struct zx_lu_Extension_s* zx_idhrxml_CreateResponse_GET_Extension(struct zx_idhrxml_CreateResponse_s* x, int n)
{
  struct zx_lu_Extension_s* y;
  if (!x) return 0;
  for (y = x->Extension; n>=0 && y; --n, y = (struct zx_lu_Extension_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_idhrxml_CreateResponse_POP_Extension) */

struct zx_lu_Extension_s* zx_idhrxml_CreateResponse_POP_Extension(struct zx_idhrxml_CreateResponse_s* x)
{
  struct zx_lu_Extension_s* y;
  if (!x) return 0;
  y = x->Extension;
  if (y)
    x->Extension = (struct zx_lu_Extension_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_idhrxml_CreateResponse_PUSH_Extension) */

void zx_idhrxml_CreateResponse_PUSH_Extension(struct zx_idhrxml_CreateResponse_s* x, struct zx_lu_Extension_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Extension->gg.g;
  x->Extension = z;
}

/* FUNC(zx_idhrxml_CreateResponse_REV_Extension) */

void zx_idhrxml_CreateResponse_REV_Extension(struct zx_idhrxml_CreateResponse_s* x)
{
  struct zx_lu_Extension_s* nxt;
  struct zx_lu_Extension_s* y;
  if (!x) return;
  y = x->Extension;
  if (!y) return;
  x->Extension = 0;
  while (y) {
    nxt = (struct zx_lu_Extension_s*)y->gg.g.n;
    y->gg.g.n = &x->Extension->gg.g;
    x->Extension = y;
    y = nxt;
  }
}

/* FUNC(zx_idhrxml_CreateResponse_PUT_Extension) */

void zx_idhrxml_CreateResponse_PUT_Extension(struct zx_idhrxml_CreateResponse_s* x, int n, struct zx_lu_Extension_s* z)
{
  struct zx_lu_Extension_s* y;
  if (!x || !z) return;
  y = x->Extension;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Extension = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_lu_Extension_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_idhrxml_CreateResponse_ADD_Extension) */

void zx_idhrxml_CreateResponse_ADD_Extension(struct zx_idhrxml_CreateResponse_s* x, int n, struct zx_lu_Extension_s* z)
{
  struct zx_lu_Extension_s* y;
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
    for (; y->gg.g.n; y = (struct zx_lu_Extension_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Extension; n > 1 && y; --n, y = (struct zx_lu_Extension_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_idhrxml_CreateResponse_DEL_Extension) */

void zx_idhrxml_CreateResponse_DEL_Extension(struct zx_idhrxml_CreateResponse_s* x, int n)
{
  struct zx_lu_Extension_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Extension = (struct zx_lu_Extension_s*)x->Extension->gg.g.n;
    return;
  case -1:
    y = (struct zx_lu_Extension_s*)x->Extension;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_lu_Extension_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Extension; n > 1 && y->gg.g.n; --n, y = (struct zx_lu_Extension_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_idhrxml_CreateResponse_NUM_ItemData) */

int zx_idhrxml_CreateResponse_NUM_ItemData(struct zx_idhrxml_CreateResponse_s* x)
{
  struct zx_idhrxml_ItemData_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->ItemData; y; ++n, y = (struct zx_idhrxml_ItemData_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_idhrxml_CreateResponse_GET_ItemData) */

struct zx_idhrxml_ItemData_s* zx_idhrxml_CreateResponse_GET_ItemData(struct zx_idhrxml_CreateResponse_s* x, int n)
{
  struct zx_idhrxml_ItemData_s* y;
  if (!x) return 0;
  for (y = x->ItemData; n>=0 && y; --n, y = (struct zx_idhrxml_ItemData_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_idhrxml_CreateResponse_POP_ItemData) */

struct zx_idhrxml_ItemData_s* zx_idhrxml_CreateResponse_POP_ItemData(struct zx_idhrxml_CreateResponse_s* x)
{
  struct zx_idhrxml_ItemData_s* y;
  if (!x) return 0;
  y = x->ItemData;
  if (y)
    x->ItemData = (struct zx_idhrxml_ItemData_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_idhrxml_CreateResponse_PUSH_ItemData) */

void zx_idhrxml_CreateResponse_PUSH_ItemData(struct zx_idhrxml_CreateResponse_s* x, struct zx_idhrxml_ItemData_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->ItemData->gg.g;
  x->ItemData = z;
}

/* FUNC(zx_idhrxml_CreateResponse_REV_ItemData) */

void zx_idhrxml_CreateResponse_REV_ItemData(struct zx_idhrxml_CreateResponse_s* x)
{
  struct zx_idhrxml_ItemData_s* nxt;
  struct zx_idhrxml_ItemData_s* y;
  if (!x) return;
  y = x->ItemData;
  if (!y) return;
  x->ItemData = 0;
  while (y) {
    nxt = (struct zx_idhrxml_ItemData_s*)y->gg.g.n;
    y->gg.g.n = &x->ItemData->gg.g;
    x->ItemData = y;
    y = nxt;
  }
}

/* FUNC(zx_idhrxml_CreateResponse_PUT_ItemData) */

void zx_idhrxml_CreateResponse_PUT_ItemData(struct zx_idhrxml_CreateResponse_s* x, int n, struct zx_idhrxml_ItemData_s* z)
{
  struct zx_idhrxml_ItemData_s* y;
  if (!x || !z) return;
  y = x->ItemData;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->ItemData = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_idhrxml_ItemData_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_idhrxml_CreateResponse_ADD_ItemData) */

void zx_idhrxml_CreateResponse_ADD_ItemData(struct zx_idhrxml_CreateResponse_s* x, int n, struct zx_idhrxml_ItemData_s* z)
{
  struct zx_idhrxml_ItemData_s* y;
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
    for (; y->gg.g.n; y = (struct zx_idhrxml_ItemData_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->ItemData; n > 1 && y; --n, y = (struct zx_idhrxml_ItemData_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_idhrxml_CreateResponse_DEL_ItemData) */

void zx_idhrxml_CreateResponse_DEL_ItemData(struct zx_idhrxml_CreateResponse_s* x, int n)
{
  struct zx_idhrxml_ItemData_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->ItemData = (struct zx_idhrxml_ItemData_s*)x->ItemData->gg.g.n;
    return;
  case -1:
    y = (struct zx_idhrxml_ItemData_s*)x->ItemData;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_idhrxml_ItemData_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->ItemData; n > 1 && y->gg.g.n; --n, y = (struct zx_idhrxml_ItemData_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif

/* FUNC(zx_idhrxml_CreateResponse_GET_timeStamp) */
struct zx_str* zx_idhrxml_CreateResponse_GET_timeStamp(struct zx_idhrxml_CreateResponse_s* x) { return x->timeStamp; }
/* FUNC(zx_idhrxml_CreateResponse_PUT_timeStamp) */
void zx_idhrxml_CreateResponse_PUT_timeStamp(struct zx_idhrxml_CreateResponse_s* x, struct zx_str* y) { x->timeStamp = y; }
/* FUNC(zx_idhrxml_CreateResponse_GET_itemIDRef) */
struct zx_str* zx_idhrxml_CreateResponse_GET_itemIDRef(struct zx_idhrxml_CreateResponse_s* x) { return x->itemIDRef; }
/* FUNC(zx_idhrxml_CreateResponse_PUT_itemIDRef) */
void zx_idhrxml_CreateResponse_PUT_itemIDRef(struct zx_idhrxml_CreateResponse_s* x, struct zx_str* y) { x->itemIDRef = y; }







#ifdef ZX_ENA_GETPUT

/* FUNC(zx_idhrxml_Data_NUM_Candidate) */

int zx_idhrxml_Data_NUM_Candidate(struct zx_idhrxml_Data_s* x)
{
  struct zx_hrxml_Candidate_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Candidate; y; ++n, y = (struct zx_hrxml_Candidate_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_idhrxml_Data_GET_Candidate) */

struct zx_hrxml_Candidate_s* zx_idhrxml_Data_GET_Candidate(struct zx_idhrxml_Data_s* x, int n)
{
  struct zx_hrxml_Candidate_s* y;
  if (!x) return 0;
  for (y = x->Candidate; n>=0 && y; --n, y = (struct zx_hrxml_Candidate_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_idhrxml_Data_POP_Candidate) */

struct zx_hrxml_Candidate_s* zx_idhrxml_Data_POP_Candidate(struct zx_idhrxml_Data_s* x)
{
  struct zx_hrxml_Candidate_s* y;
  if (!x) return 0;
  y = x->Candidate;
  if (y)
    x->Candidate = (struct zx_hrxml_Candidate_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_idhrxml_Data_PUSH_Candidate) */

void zx_idhrxml_Data_PUSH_Candidate(struct zx_idhrxml_Data_s* x, struct zx_hrxml_Candidate_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Candidate->gg.g;
  x->Candidate = z;
}

/* FUNC(zx_idhrxml_Data_REV_Candidate) */

void zx_idhrxml_Data_REV_Candidate(struct zx_idhrxml_Data_s* x)
{
  struct zx_hrxml_Candidate_s* nxt;
  struct zx_hrxml_Candidate_s* y;
  if (!x) return;
  y = x->Candidate;
  if (!y) return;
  x->Candidate = 0;
  while (y) {
    nxt = (struct zx_hrxml_Candidate_s*)y->gg.g.n;
    y->gg.g.n = &x->Candidate->gg.g;
    x->Candidate = y;
    y = nxt;
  }
}

/* FUNC(zx_idhrxml_Data_PUT_Candidate) */

void zx_idhrxml_Data_PUT_Candidate(struct zx_idhrxml_Data_s* x, int n, struct zx_hrxml_Candidate_s* z)
{
  struct zx_hrxml_Candidate_s* y;
  if (!x || !z) return;
  y = x->Candidate;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Candidate = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_hrxml_Candidate_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_idhrxml_Data_ADD_Candidate) */

void zx_idhrxml_Data_ADD_Candidate(struct zx_idhrxml_Data_s* x, int n, struct zx_hrxml_Candidate_s* z)
{
  struct zx_hrxml_Candidate_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->Candidate->gg.g;
    x->Candidate = z;
    return;
  case -1:
    y = x->Candidate;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_hrxml_Candidate_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Candidate; n > 1 && y; --n, y = (struct zx_hrxml_Candidate_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_idhrxml_Data_DEL_Candidate) */

void zx_idhrxml_Data_DEL_Candidate(struct zx_idhrxml_Data_s* x, int n)
{
  struct zx_hrxml_Candidate_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Candidate = (struct zx_hrxml_Candidate_s*)x->Candidate->gg.g.n;
    return;
  case -1:
    y = (struct zx_hrxml_Candidate_s*)x->Candidate;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_hrxml_Candidate_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Candidate; n > 1 && y->gg.g.n; --n, y = (struct zx_hrxml_Candidate_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_idhrxml_Data_NUM_Subscription) */

int zx_idhrxml_Data_NUM_Subscription(struct zx_idhrxml_Data_s* x)
{
  struct zx_idhrxml_Subscription_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Subscription; y; ++n, y = (struct zx_idhrxml_Subscription_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_idhrxml_Data_GET_Subscription) */

struct zx_idhrxml_Subscription_s* zx_idhrxml_Data_GET_Subscription(struct zx_idhrxml_Data_s* x, int n)
{
  struct zx_idhrxml_Subscription_s* y;
  if (!x) return 0;
  for (y = x->Subscription; n>=0 && y; --n, y = (struct zx_idhrxml_Subscription_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_idhrxml_Data_POP_Subscription) */

struct zx_idhrxml_Subscription_s* zx_idhrxml_Data_POP_Subscription(struct zx_idhrxml_Data_s* x)
{
  struct zx_idhrxml_Subscription_s* y;
  if (!x) return 0;
  y = x->Subscription;
  if (y)
    x->Subscription = (struct zx_idhrxml_Subscription_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_idhrxml_Data_PUSH_Subscription) */

void zx_idhrxml_Data_PUSH_Subscription(struct zx_idhrxml_Data_s* x, struct zx_idhrxml_Subscription_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Subscription->gg.g;
  x->Subscription = z;
}

/* FUNC(zx_idhrxml_Data_REV_Subscription) */

void zx_idhrxml_Data_REV_Subscription(struct zx_idhrxml_Data_s* x)
{
  struct zx_idhrxml_Subscription_s* nxt;
  struct zx_idhrxml_Subscription_s* y;
  if (!x) return;
  y = x->Subscription;
  if (!y) return;
  x->Subscription = 0;
  while (y) {
    nxt = (struct zx_idhrxml_Subscription_s*)y->gg.g.n;
    y->gg.g.n = &x->Subscription->gg.g;
    x->Subscription = y;
    y = nxt;
  }
}

/* FUNC(zx_idhrxml_Data_PUT_Subscription) */

void zx_idhrxml_Data_PUT_Subscription(struct zx_idhrxml_Data_s* x, int n, struct zx_idhrxml_Subscription_s* z)
{
  struct zx_idhrxml_Subscription_s* y;
  if (!x || !z) return;
  y = x->Subscription;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Subscription = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_idhrxml_Subscription_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_idhrxml_Data_ADD_Subscription) */

void zx_idhrxml_Data_ADD_Subscription(struct zx_idhrxml_Data_s* x, int n, struct zx_idhrxml_Subscription_s* z)
{
  struct zx_idhrxml_Subscription_s* y;
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
    for (; y->gg.g.n; y = (struct zx_idhrxml_Subscription_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Subscription; n > 1 && y; --n, y = (struct zx_idhrxml_Subscription_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_idhrxml_Data_DEL_Subscription) */

void zx_idhrxml_Data_DEL_Subscription(struct zx_idhrxml_Data_s* x, int n)
{
  struct zx_idhrxml_Subscription_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Subscription = (struct zx_idhrxml_Subscription_s*)x->Subscription->gg.g.n;
    return;
  case -1:
    y = (struct zx_idhrxml_Subscription_s*)x->Subscription;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_idhrxml_Subscription_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Subscription; n > 1 && y->gg.g.n; --n, y = (struct zx_idhrxml_Subscription_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif

/* FUNC(zx_idhrxml_Data_GET_notSorted) */
struct zx_str* zx_idhrxml_Data_GET_notSorted(struct zx_idhrxml_Data_s* x) { return x->notSorted; }
/* FUNC(zx_idhrxml_Data_PUT_notSorted) */
void zx_idhrxml_Data_PUT_notSorted(struct zx_idhrxml_Data_s* x, struct zx_str* y) { x->notSorted = y; }
/* FUNC(zx_idhrxml_Data_GET_remaining) */
struct zx_str* zx_idhrxml_Data_GET_remaining(struct zx_idhrxml_Data_s* x) { return x->remaining; }
/* FUNC(zx_idhrxml_Data_PUT_remaining) */
void zx_idhrxml_Data_PUT_remaining(struct zx_idhrxml_Data_s* x, struct zx_str* y) { x->remaining = y; }
/* FUNC(zx_idhrxml_Data_GET_nextOffset) */
struct zx_str* zx_idhrxml_Data_GET_nextOffset(struct zx_idhrxml_Data_s* x) { return x->nextOffset; }
/* FUNC(zx_idhrxml_Data_PUT_nextOffset) */
void zx_idhrxml_Data_PUT_nextOffset(struct zx_idhrxml_Data_s* x, struct zx_str* y) { x->nextOffset = y; }
/* FUNC(zx_idhrxml_Data_GET_setID) */
struct zx_str* zx_idhrxml_Data_GET_setID(struct zx_idhrxml_Data_s* x) { return x->setID; }
/* FUNC(zx_idhrxml_Data_PUT_setID) */
void zx_idhrxml_Data_PUT_setID(struct zx_idhrxml_Data_s* x, struct zx_str* y) { x->setID = y; }
/* FUNC(zx_idhrxml_Data_GET_itemIDRef) */
struct zx_str* zx_idhrxml_Data_GET_itemIDRef(struct zx_idhrxml_Data_s* x) { return x->itemIDRef; }
/* FUNC(zx_idhrxml_Data_PUT_itemIDRef) */
void zx_idhrxml_Data_PUT_itemIDRef(struct zx_idhrxml_Data_s* x, struct zx_str* y) { x->itemIDRef = y; }
/* FUNC(zx_idhrxml_Data_GET_changeFormat) */
struct zx_str* zx_idhrxml_Data_GET_changeFormat(struct zx_idhrxml_Data_s* x) { return x->changeFormat; }
/* FUNC(zx_idhrxml_Data_PUT_changeFormat) */
void zx_idhrxml_Data_PUT_changeFormat(struct zx_idhrxml_Data_s* x, struct zx_str* y) { x->changeFormat = y; }







#ifdef ZX_ENA_GETPUT

/* FUNC(zx_idhrxml_Delete_NUM_Extension) */

int zx_idhrxml_Delete_NUM_Extension(struct zx_idhrxml_Delete_s* x)
{
  struct zx_lu_Extension_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Extension; y; ++n, y = (struct zx_lu_Extension_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_idhrxml_Delete_GET_Extension) */

struct zx_lu_Extension_s* zx_idhrxml_Delete_GET_Extension(struct zx_idhrxml_Delete_s* x, int n)
{
  struct zx_lu_Extension_s* y;
  if (!x) return 0;
  for (y = x->Extension; n>=0 && y; --n, y = (struct zx_lu_Extension_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_idhrxml_Delete_POP_Extension) */

struct zx_lu_Extension_s* zx_idhrxml_Delete_POP_Extension(struct zx_idhrxml_Delete_s* x)
{
  struct zx_lu_Extension_s* y;
  if (!x) return 0;
  y = x->Extension;
  if (y)
    x->Extension = (struct zx_lu_Extension_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_idhrxml_Delete_PUSH_Extension) */

void zx_idhrxml_Delete_PUSH_Extension(struct zx_idhrxml_Delete_s* x, struct zx_lu_Extension_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Extension->gg.g;
  x->Extension = z;
}

/* FUNC(zx_idhrxml_Delete_REV_Extension) */

void zx_idhrxml_Delete_REV_Extension(struct zx_idhrxml_Delete_s* x)
{
  struct zx_lu_Extension_s* nxt;
  struct zx_lu_Extension_s* y;
  if (!x) return;
  y = x->Extension;
  if (!y) return;
  x->Extension = 0;
  while (y) {
    nxt = (struct zx_lu_Extension_s*)y->gg.g.n;
    y->gg.g.n = &x->Extension->gg.g;
    x->Extension = y;
    y = nxt;
  }
}

/* FUNC(zx_idhrxml_Delete_PUT_Extension) */

void zx_idhrxml_Delete_PUT_Extension(struct zx_idhrxml_Delete_s* x, int n, struct zx_lu_Extension_s* z)
{
  struct zx_lu_Extension_s* y;
  if (!x || !z) return;
  y = x->Extension;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Extension = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_lu_Extension_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_idhrxml_Delete_ADD_Extension) */

void zx_idhrxml_Delete_ADD_Extension(struct zx_idhrxml_Delete_s* x, int n, struct zx_lu_Extension_s* z)
{
  struct zx_lu_Extension_s* y;
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
    for (; y->gg.g.n; y = (struct zx_lu_Extension_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Extension; n > 1 && y; --n, y = (struct zx_lu_Extension_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_idhrxml_Delete_DEL_Extension) */

void zx_idhrxml_Delete_DEL_Extension(struct zx_idhrxml_Delete_s* x, int n)
{
  struct zx_lu_Extension_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Extension = (struct zx_lu_Extension_s*)x->Extension->gg.g.n;
    return;
  case -1:
    y = (struct zx_lu_Extension_s*)x->Extension;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_lu_Extension_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Extension; n > 1 && y->gg.g.n; --n, y = (struct zx_lu_Extension_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_idhrxml_Delete_NUM_DeleteItem) */

int zx_idhrxml_Delete_NUM_DeleteItem(struct zx_idhrxml_Delete_s* x)
{
  struct zx_idhrxml_DeleteItem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->DeleteItem; y; ++n, y = (struct zx_idhrxml_DeleteItem_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_idhrxml_Delete_GET_DeleteItem) */

struct zx_idhrxml_DeleteItem_s* zx_idhrxml_Delete_GET_DeleteItem(struct zx_idhrxml_Delete_s* x, int n)
{
  struct zx_idhrxml_DeleteItem_s* y;
  if (!x) return 0;
  for (y = x->DeleteItem; n>=0 && y; --n, y = (struct zx_idhrxml_DeleteItem_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_idhrxml_Delete_POP_DeleteItem) */

struct zx_idhrxml_DeleteItem_s* zx_idhrxml_Delete_POP_DeleteItem(struct zx_idhrxml_Delete_s* x)
{
  struct zx_idhrxml_DeleteItem_s* y;
  if (!x) return 0;
  y = x->DeleteItem;
  if (y)
    x->DeleteItem = (struct zx_idhrxml_DeleteItem_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_idhrxml_Delete_PUSH_DeleteItem) */

void zx_idhrxml_Delete_PUSH_DeleteItem(struct zx_idhrxml_Delete_s* x, struct zx_idhrxml_DeleteItem_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->DeleteItem->gg.g;
  x->DeleteItem = z;
}

/* FUNC(zx_idhrxml_Delete_REV_DeleteItem) */

void zx_idhrxml_Delete_REV_DeleteItem(struct zx_idhrxml_Delete_s* x)
{
  struct zx_idhrxml_DeleteItem_s* nxt;
  struct zx_idhrxml_DeleteItem_s* y;
  if (!x) return;
  y = x->DeleteItem;
  if (!y) return;
  x->DeleteItem = 0;
  while (y) {
    nxt = (struct zx_idhrxml_DeleteItem_s*)y->gg.g.n;
    y->gg.g.n = &x->DeleteItem->gg.g;
    x->DeleteItem = y;
    y = nxt;
  }
}

/* FUNC(zx_idhrxml_Delete_PUT_DeleteItem) */

void zx_idhrxml_Delete_PUT_DeleteItem(struct zx_idhrxml_Delete_s* x, int n, struct zx_idhrxml_DeleteItem_s* z)
{
  struct zx_idhrxml_DeleteItem_s* y;
  if (!x || !z) return;
  y = x->DeleteItem;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->DeleteItem = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_idhrxml_DeleteItem_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_idhrxml_Delete_ADD_DeleteItem) */

void zx_idhrxml_Delete_ADD_DeleteItem(struct zx_idhrxml_Delete_s* x, int n, struct zx_idhrxml_DeleteItem_s* z)
{
  struct zx_idhrxml_DeleteItem_s* y;
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
    for (; y->gg.g.n; y = (struct zx_idhrxml_DeleteItem_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->DeleteItem; n > 1 && y; --n, y = (struct zx_idhrxml_DeleteItem_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_idhrxml_Delete_DEL_DeleteItem) */

void zx_idhrxml_Delete_DEL_DeleteItem(struct zx_idhrxml_Delete_s* x, int n)
{
  struct zx_idhrxml_DeleteItem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->DeleteItem = (struct zx_idhrxml_DeleteItem_s*)x->DeleteItem->gg.g.n;
    return;
  case -1:
    y = (struct zx_idhrxml_DeleteItem_s*)x->DeleteItem;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_idhrxml_DeleteItem_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->DeleteItem; n > 1 && y->gg.g.n; --n, y = (struct zx_idhrxml_DeleteItem_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif

/* FUNC(zx_idhrxml_Delete_GET_itemID) */
struct zx_str* zx_idhrxml_Delete_GET_itemID(struct zx_idhrxml_Delete_s* x) { return x->itemID; }
/* FUNC(zx_idhrxml_Delete_PUT_itemID) */
void zx_idhrxml_Delete_PUT_itemID(struct zx_idhrxml_Delete_s* x, struct zx_str* y) { x->itemID = y; }







#ifdef ZX_ENA_GETPUT

/* FUNC(zx_idhrxml_DeleteItem_NUM_Select) */

int zx_idhrxml_DeleteItem_NUM_Select(struct zx_idhrxml_DeleteItem_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Select; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_idhrxml_DeleteItem_GET_Select) */

struct zx_elem_s* zx_idhrxml_DeleteItem_GET_Select(struct zx_idhrxml_DeleteItem_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->Select; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_idhrxml_DeleteItem_POP_Select) */

struct zx_elem_s* zx_idhrxml_DeleteItem_POP_Select(struct zx_idhrxml_DeleteItem_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->Select;
  if (y)
    x->Select = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_idhrxml_DeleteItem_PUSH_Select) */

void zx_idhrxml_DeleteItem_PUSH_Select(struct zx_idhrxml_DeleteItem_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->Select->g;
  x->Select = z;
}

/* FUNC(zx_idhrxml_DeleteItem_REV_Select) */

void zx_idhrxml_DeleteItem_REV_Select(struct zx_idhrxml_DeleteItem_s* x)
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

/* FUNC(zx_idhrxml_DeleteItem_PUT_Select) */

void zx_idhrxml_DeleteItem_PUT_Select(struct zx_idhrxml_DeleteItem_s* x, int n, struct zx_elem_s* z)
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

/* FUNC(zx_idhrxml_DeleteItem_ADD_Select) */

void zx_idhrxml_DeleteItem_ADD_Select(struct zx_idhrxml_DeleteItem_s* x, int n, struct zx_elem_s* z)
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

/* FUNC(zx_idhrxml_DeleteItem_DEL_Select) */

void zx_idhrxml_DeleteItem_DEL_Select(struct zx_idhrxml_DeleteItem_s* x, int n)
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

/* FUNC(zx_idhrxml_DeleteItem_GET_notChangedSince) */
struct zx_str* zx_idhrxml_DeleteItem_GET_notChangedSince(struct zx_idhrxml_DeleteItem_s* x) { return x->notChangedSince; }
/* FUNC(zx_idhrxml_DeleteItem_PUT_notChangedSince) */
void zx_idhrxml_DeleteItem_PUT_notChangedSince(struct zx_idhrxml_DeleteItem_s* x, struct zx_str* y) { x->notChangedSince = y; }
/* FUNC(zx_idhrxml_DeleteItem_GET_id) */
struct zx_str* zx_idhrxml_DeleteItem_GET_id(struct zx_idhrxml_DeleteItem_s* x) { return x->id; }
/* FUNC(zx_idhrxml_DeleteItem_PUT_id) */
void zx_idhrxml_DeleteItem_PUT_id(struct zx_idhrxml_DeleteItem_s* x, struct zx_str* y) { x->id = y; }
/* FUNC(zx_idhrxml_DeleteItem_GET_objectType) */
struct zx_str* zx_idhrxml_DeleteItem_GET_objectType(struct zx_idhrxml_DeleteItem_s* x) { return x->objectType; }
/* FUNC(zx_idhrxml_DeleteItem_PUT_objectType) */
void zx_idhrxml_DeleteItem_PUT_objectType(struct zx_idhrxml_DeleteItem_s* x, struct zx_str* y) { x->objectType = y; }
/* FUNC(zx_idhrxml_DeleteItem_GET_predefined) */
struct zx_str* zx_idhrxml_DeleteItem_GET_predefined(struct zx_idhrxml_DeleteItem_s* x) { return x->predefined; }
/* FUNC(zx_idhrxml_DeleteItem_PUT_predefined) */
void zx_idhrxml_DeleteItem_PUT_predefined(struct zx_idhrxml_DeleteItem_s* x, struct zx_str* y) { x->predefined = y; }
/* FUNC(zx_idhrxml_DeleteItem_GET_itemID) */
struct zx_str* zx_idhrxml_DeleteItem_GET_itemID(struct zx_idhrxml_DeleteItem_s* x) { return x->itemID; }
/* FUNC(zx_idhrxml_DeleteItem_PUT_itemID) */
void zx_idhrxml_DeleteItem_PUT_itemID(struct zx_idhrxml_DeleteItem_s* x, struct zx_str* y) { x->itemID = y; }







#ifdef ZX_ENA_GETPUT

/* FUNC(zx_idhrxml_DeleteResponse_NUM_Status) */

int zx_idhrxml_DeleteResponse_NUM_Status(struct zx_idhrxml_DeleteResponse_s* x)
{
  struct zx_lu_Status_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Status; y; ++n, y = (struct zx_lu_Status_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_idhrxml_DeleteResponse_GET_Status) */

struct zx_lu_Status_s* zx_idhrxml_DeleteResponse_GET_Status(struct zx_idhrxml_DeleteResponse_s* x, int n)
{
  struct zx_lu_Status_s* y;
  if (!x) return 0;
  for (y = x->Status; n>=0 && y; --n, y = (struct zx_lu_Status_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_idhrxml_DeleteResponse_POP_Status) */

struct zx_lu_Status_s* zx_idhrxml_DeleteResponse_POP_Status(struct zx_idhrxml_DeleteResponse_s* x)
{
  struct zx_lu_Status_s* y;
  if (!x) return 0;
  y = x->Status;
  if (y)
    x->Status = (struct zx_lu_Status_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_idhrxml_DeleteResponse_PUSH_Status) */

void zx_idhrxml_DeleteResponse_PUSH_Status(struct zx_idhrxml_DeleteResponse_s* x, struct zx_lu_Status_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Status->gg.g;
  x->Status = z;
}

/* FUNC(zx_idhrxml_DeleteResponse_REV_Status) */

void zx_idhrxml_DeleteResponse_REV_Status(struct zx_idhrxml_DeleteResponse_s* x)
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

/* FUNC(zx_idhrxml_DeleteResponse_PUT_Status) */

void zx_idhrxml_DeleteResponse_PUT_Status(struct zx_idhrxml_DeleteResponse_s* x, int n, struct zx_lu_Status_s* z)
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

/* FUNC(zx_idhrxml_DeleteResponse_ADD_Status) */

void zx_idhrxml_DeleteResponse_ADD_Status(struct zx_idhrxml_DeleteResponse_s* x, int n, struct zx_lu_Status_s* z)
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

/* FUNC(zx_idhrxml_DeleteResponse_DEL_Status) */

void zx_idhrxml_DeleteResponse_DEL_Status(struct zx_idhrxml_DeleteResponse_s* x, int n)
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

/* FUNC(zx_idhrxml_DeleteResponse_NUM_Extension) */

int zx_idhrxml_DeleteResponse_NUM_Extension(struct zx_idhrxml_DeleteResponse_s* x)
{
  struct zx_lu_Extension_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Extension; y; ++n, y = (struct zx_lu_Extension_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_idhrxml_DeleteResponse_GET_Extension) */

struct zx_lu_Extension_s* zx_idhrxml_DeleteResponse_GET_Extension(struct zx_idhrxml_DeleteResponse_s* x, int n)
{
  struct zx_lu_Extension_s* y;
  if (!x) return 0;
  for (y = x->Extension; n>=0 && y; --n, y = (struct zx_lu_Extension_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_idhrxml_DeleteResponse_POP_Extension) */

struct zx_lu_Extension_s* zx_idhrxml_DeleteResponse_POP_Extension(struct zx_idhrxml_DeleteResponse_s* x)
{
  struct zx_lu_Extension_s* y;
  if (!x) return 0;
  y = x->Extension;
  if (y)
    x->Extension = (struct zx_lu_Extension_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_idhrxml_DeleteResponse_PUSH_Extension) */

void zx_idhrxml_DeleteResponse_PUSH_Extension(struct zx_idhrxml_DeleteResponse_s* x, struct zx_lu_Extension_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Extension->gg.g;
  x->Extension = z;
}

/* FUNC(zx_idhrxml_DeleteResponse_REV_Extension) */

void zx_idhrxml_DeleteResponse_REV_Extension(struct zx_idhrxml_DeleteResponse_s* x)
{
  struct zx_lu_Extension_s* nxt;
  struct zx_lu_Extension_s* y;
  if (!x) return;
  y = x->Extension;
  if (!y) return;
  x->Extension = 0;
  while (y) {
    nxt = (struct zx_lu_Extension_s*)y->gg.g.n;
    y->gg.g.n = &x->Extension->gg.g;
    x->Extension = y;
    y = nxt;
  }
}

/* FUNC(zx_idhrxml_DeleteResponse_PUT_Extension) */

void zx_idhrxml_DeleteResponse_PUT_Extension(struct zx_idhrxml_DeleteResponse_s* x, int n, struct zx_lu_Extension_s* z)
{
  struct zx_lu_Extension_s* y;
  if (!x || !z) return;
  y = x->Extension;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Extension = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_lu_Extension_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_idhrxml_DeleteResponse_ADD_Extension) */

void zx_idhrxml_DeleteResponse_ADD_Extension(struct zx_idhrxml_DeleteResponse_s* x, int n, struct zx_lu_Extension_s* z)
{
  struct zx_lu_Extension_s* y;
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
    for (; y->gg.g.n; y = (struct zx_lu_Extension_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Extension; n > 1 && y; --n, y = (struct zx_lu_Extension_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_idhrxml_DeleteResponse_DEL_Extension) */

void zx_idhrxml_DeleteResponse_DEL_Extension(struct zx_idhrxml_DeleteResponse_s* x, int n)
{
  struct zx_lu_Extension_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Extension = (struct zx_lu_Extension_s*)x->Extension->gg.g.n;
    return;
  case -1:
    y = (struct zx_lu_Extension_s*)x->Extension;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_lu_Extension_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Extension; n > 1 && y->gg.g.n; --n, y = (struct zx_lu_Extension_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif

/* FUNC(zx_idhrxml_DeleteResponse_GET_itemIDRef) */
struct zx_str* zx_idhrxml_DeleteResponse_GET_itemIDRef(struct zx_idhrxml_DeleteResponse_s* x) { return x->itemIDRef; }
/* FUNC(zx_idhrxml_DeleteResponse_PUT_itemIDRef) */
void zx_idhrxml_DeleteResponse_PUT_itemIDRef(struct zx_idhrxml_DeleteResponse_s* x, struct zx_str* y) { x->itemIDRef = y; }







#ifdef ZX_ENA_GETPUT

/* FUNC(zx_idhrxml_ItemData_NUM_Candidate) */

int zx_idhrxml_ItemData_NUM_Candidate(struct zx_idhrxml_ItemData_s* x)
{
  struct zx_hrxml_Candidate_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Candidate; y; ++n, y = (struct zx_hrxml_Candidate_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_idhrxml_ItemData_GET_Candidate) */

struct zx_hrxml_Candidate_s* zx_idhrxml_ItemData_GET_Candidate(struct zx_idhrxml_ItemData_s* x, int n)
{
  struct zx_hrxml_Candidate_s* y;
  if (!x) return 0;
  for (y = x->Candidate; n>=0 && y; --n, y = (struct zx_hrxml_Candidate_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_idhrxml_ItemData_POP_Candidate) */

struct zx_hrxml_Candidate_s* zx_idhrxml_ItemData_POP_Candidate(struct zx_idhrxml_ItemData_s* x)
{
  struct zx_hrxml_Candidate_s* y;
  if (!x) return 0;
  y = x->Candidate;
  if (y)
    x->Candidate = (struct zx_hrxml_Candidate_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_idhrxml_ItemData_PUSH_Candidate) */

void zx_idhrxml_ItemData_PUSH_Candidate(struct zx_idhrxml_ItemData_s* x, struct zx_hrxml_Candidate_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Candidate->gg.g;
  x->Candidate = z;
}

/* FUNC(zx_idhrxml_ItemData_REV_Candidate) */

void zx_idhrxml_ItemData_REV_Candidate(struct zx_idhrxml_ItemData_s* x)
{
  struct zx_hrxml_Candidate_s* nxt;
  struct zx_hrxml_Candidate_s* y;
  if (!x) return;
  y = x->Candidate;
  if (!y) return;
  x->Candidate = 0;
  while (y) {
    nxt = (struct zx_hrxml_Candidate_s*)y->gg.g.n;
    y->gg.g.n = &x->Candidate->gg.g;
    x->Candidate = y;
    y = nxt;
  }
}

/* FUNC(zx_idhrxml_ItemData_PUT_Candidate) */

void zx_idhrxml_ItemData_PUT_Candidate(struct zx_idhrxml_ItemData_s* x, int n, struct zx_hrxml_Candidate_s* z)
{
  struct zx_hrxml_Candidate_s* y;
  if (!x || !z) return;
  y = x->Candidate;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Candidate = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_hrxml_Candidate_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_idhrxml_ItemData_ADD_Candidate) */

void zx_idhrxml_ItemData_ADD_Candidate(struct zx_idhrxml_ItemData_s* x, int n, struct zx_hrxml_Candidate_s* z)
{
  struct zx_hrxml_Candidate_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->Candidate->gg.g;
    x->Candidate = z;
    return;
  case -1:
    y = x->Candidate;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_hrxml_Candidate_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Candidate; n > 1 && y; --n, y = (struct zx_hrxml_Candidate_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_idhrxml_ItemData_DEL_Candidate) */

void zx_idhrxml_ItemData_DEL_Candidate(struct zx_idhrxml_ItemData_s* x, int n)
{
  struct zx_hrxml_Candidate_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Candidate = (struct zx_hrxml_Candidate_s*)x->Candidate->gg.g.n;
    return;
  case -1:
    y = (struct zx_hrxml_Candidate_s*)x->Candidate;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_hrxml_Candidate_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Candidate; n > 1 && y->gg.g.n; --n, y = (struct zx_hrxml_Candidate_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_idhrxml_ItemData_NUM_Subscription) */

int zx_idhrxml_ItemData_NUM_Subscription(struct zx_idhrxml_ItemData_s* x)
{
  struct zx_idhrxml_Subscription_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Subscription; y; ++n, y = (struct zx_idhrxml_Subscription_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_idhrxml_ItemData_GET_Subscription) */

struct zx_idhrxml_Subscription_s* zx_idhrxml_ItemData_GET_Subscription(struct zx_idhrxml_ItemData_s* x, int n)
{
  struct zx_idhrxml_Subscription_s* y;
  if (!x) return 0;
  for (y = x->Subscription; n>=0 && y; --n, y = (struct zx_idhrxml_Subscription_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_idhrxml_ItemData_POP_Subscription) */

struct zx_idhrxml_Subscription_s* zx_idhrxml_ItemData_POP_Subscription(struct zx_idhrxml_ItemData_s* x)
{
  struct zx_idhrxml_Subscription_s* y;
  if (!x) return 0;
  y = x->Subscription;
  if (y)
    x->Subscription = (struct zx_idhrxml_Subscription_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_idhrxml_ItemData_PUSH_Subscription) */

void zx_idhrxml_ItemData_PUSH_Subscription(struct zx_idhrxml_ItemData_s* x, struct zx_idhrxml_Subscription_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Subscription->gg.g;
  x->Subscription = z;
}

/* FUNC(zx_idhrxml_ItemData_REV_Subscription) */

void zx_idhrxml_ItemData_REV_Subscription(struct zx_idhrxml_ItemData_s* x)
{
  struct zx_idhrxml_Subscription_s* nxt;
  struct zx_idhrxml_Subscription_s* y;
  if (!x) return;
  y = x->Subscription;
  if (!y) return;
  x->Subscription = 0;
  while (y) {
    nxt = (struct zx_idhrxml_Subscription_s*)y->gg.g.n;
    y->gg.g.n = &x->Subscription->gg.g;
    x->Subscription = y;
    y = nxt;
  }
}

/* FUNC(zx_idhrxml_ItemData_PUT_Subscription) */

void zx_idhrxml_ItemData_PUT_Subscription(struct zx_idhrxml_ItemData_s* x, int n, struct zx_idhrxml_Subscription_s* z)
{
  struct zx_idhrxml_Subscription_s* y;
  if (!x || !z) return;
  y = x->Subscription;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Subscription = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_idhrxml_Subscription_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_idhrxml_ItemData_ADD_Subscription) */

void zx_idhrxml_ItemData_ADD_Subscription(struct zx_idhrxml_ItemData_s* x, int n, struct zx_idhrxml_Subscription_s* z)
{
  struct zx_idhrxml_Subscription_s* y;
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
    for (; y->gg.g.n; y = (struct zx_idhrxml_Subscription_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Subscription; n > 1 && y; --n, y = (struct zx_idhrxml_Subscription_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_idhrxml_ItemData_DEL_Subscription) */

void zx_idhrxml_ItemData_DEL_Subscription(struct zx_idhrxml_ItemData_s* x, int n)
{
  struct zx_idhrxml_Subscription_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Subscription = (struct zx_idhrxml_Subscription_s*)x->Subscription->gg.g.n;
    return;
  case -1:
    y = (struct zx_idhrxml_Subscription_s*)x->Subscription;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_idhrxml_Subscription_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Subscription; n > 1 && y->gg.g.n; --n, y = (struct zx_idhrxml_Subscription_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif

/* FUNC(zx_idhrxml_ItemData_GET_notSorted) */
struct zx_str* zx_idhrxml_ItemData_GET_notSorted(struct zx_idhrxml_ItemData_s* x) { return x->notSorted; }
/* FUNC(zx_idhrxml_ItemData_PUT_notSorted) */
void zx_idhrxml_ItemData_PUT_notSorted(struct zx_idhrxml_ItemData_s* x, struct zx_str* y) { x->notSorted = y; }
/* FUNC(zx_idhrxml_ItemData_GET_itemIDRef) */
struct zx_str* zx_idhrxml_ItemData_GET_itemIDRef(struct zx_idhrxml_ItemData_s* x) { return x->itemIDRef; }
/* FUNC(zx_idhrxml_ItemData_PUT_itemIDRef) */
void zx_idhrxml_ItemData_PUT_itemIDRef(struct zx_idhrxml_ItemData_s* x, struct zx_str* y) { x->itemIDRef = y; }
/* FUNC(zx_idhrxml_ItemData_GET_changeFormat) */
struct zx_str* zx_idhrxml_ItemData_GET_changeFormat(struct zx_idhrxml_ItemData_s* x) { return x->changeFormat; }
/* FUNC(zx_idhrxml_ItemData_PUT_changeFormat) */
void zx_idhrxml_ItemData_PUT_changeFormat(struct zx_idhrxml_ItemData_s* x, struct zx_str* y) { x->changeFormat = y; }







#ifdef ZX_ENA_GETPUT

/* FUNC(zx_idhrxml_Modify_NUM_Extension) */

int zx_idhrxml_Modify_NUM_Extension(struct zx_idhrxml_Modify_s* x)
{
  struct zx_lu_Extension_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Extension; y; ++n, y = (struct zx_lu_Extension_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_idhrxml_Modify_GET_Extension) */

struct zx_lu_Extension_s* zx_idhrxml_Modify_GET_Extension(struct zx_idhrxml_Modify_s* x, int n)
{
  struct zx_lu_Extension_s* y;
  if (!x) return 0;
  for (y = x->Extension; n>=0 && y; --n, y = (struct zx_lu_Extension_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_idhrxml_Modify_POP_Extension) */

struct zx_lu_Extension_s* zx_idhrxml_Modify_POP_Extension(struct zx_idhrxml_Modify_s* x)
{
  struct zx_lu_Extension_s* y;
  if (!x) return 0;
  y = x->Extension;
  if (y)
    x->Extension = (struct zx_lu_Extension_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_idhrxml_Modify_PUSH_Extension) */

void zx_idhrxml_Modify_PUSH_Extension(struct zx_idhrxml_Modify_s* x, struct zx_lu_Extension_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Extension->gg.g;
  x->Extension = z;
}

/* FUNC(zx_idhrxml_Modify_REV_Extension) */

void zx_idhrxml_Modify_REV_Extension(struct zx_idhrxml_Modify_s* x)
{
  struct zx_lu_Extension_s* nxt;
  struct zx_lu_Extension_s* y;
  if (!x) return;
  y = x->Extension;
  if (!y) return;
  x->Extension = 0;
  while (y) {
    nxt = (struct zx_lu_Extension_s*)y->gg.g.n;
    y->gg.g.n = &x->Extension->gg.g;
    x->Extension = y;
    y = nxt;
  }
}

/* FUNC(zx_idhrxml_Modify_PUT_Extension) */

void zx_idhrxml_Modify_PUT_Extension(struct zx_idhrxml_Modify_s* x, int n, struct zx_lu_Extension_s* z)
{
  struct zx_lu_Extension_s* y;
  if (!x || !z) return;
  y = x->Extension;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Extension = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_lu_Extension_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_idhrxml_Modify_ADD_Extension) */

void zx_idhrxml_Modify_ADD_Extension(struct zx_idhrxml_Modify_s* x, int n, struct zx_lu_Extension_s* z)
{
  struct zx_lu_Extension_s* y;
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
    for (; y->gg.g.n; y = (struct zx_lu_Extension_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Extension; n > 1 && y; --n, y = (struct zx_lu_Extension_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_idhrxml_Modify_DEL_Extension) */

void zx_idhrxml_Modify_DEL_Extension(struct zx_idhrxml_Modify_s* x, int n)
{
  struct zx_lu_Extension_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Extension = (struct zx_lu_Extension_s*)x->Extension->gg.g.n;
    return;
  case -1:
    y = (struct zx_lu_Extension_s*)x->Extension;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_lu_Extension_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Extension; n > 1 && y->gg.g.n; --n, y = (struct zx_lu_Extension_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_idhrxml_Modify_NUM_Subscription) */

int zx_idhrxml_Modify_NUM_Subscription(struct zx_idhrxml_Modify_s* x)
{
  struct zx_idhrxml_Subscription_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Subscription; y; ++n, y = (struct zx_idhrxml_Subscription_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_idhrxml_Modify_GET_Subscription) */

struct zx_idhrxml_Subscription_s* zx_idhrxml_Modify_GET_Subscription(struct zx_idhrxml_Modify_s* x, int n)
{
  struct zx_idhrxml_Subscription_s* y;
  if (!x) return 0;
  for (y = x->Subscription; n>=0 && y; --n, y = (struct zx_idhrxml_Subscription_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_idhrxml_Modify_POP_Subscription) */

struct zx_idhrxml_Subscription_s* zx_idhrxml_Modify_POP_Subscription(struct zx_idhrxml_Modify_s* x)
{
  struct zx_idhrxml_Subscription_s* y;
  if (!x) return 0;
  y = x->Subscription;
  if (y)
    x->Subscription = (struct zx_idhrxml_Subscription_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_idhrxml_Modify_PUSH_Subscription) */

void zx_idhrxml_Modify_PUSH_Subscription(struct zx_idhrxml_Modify_s* x, struct zx_idhrxml_Subscription_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Subscription->gg.g;
  x->Subscription = z;
}

/* FUNC(zx_idhrxml_Modify_REV_Subscription) */

void zx_idhrxml_Modify_REV_Subscription(struct zx_idhrxml_Modify_s* x)
{
  struct zx_idhrxml_Subscription_s* nxt;
  struct zx_idhrxml_Subscription_s* y;
  if (!x) return;
  y = x->Subscription;
  if (!y) return;
  x->Subscription = 0;
  while (y) {
    nxt = (struct zx_idhrxml_Subscription_s*)y->gg.g.n;
    y->gg.g.n = &x->Subscription->gg.g;
    x->Subscription = y;
    y = nxt;
  }
}

/* FUNC(zx_idhrxml_Modify_PUT_Subscription) */

void zx_idhrxml_Modify_PUT_Subscription(struct zx_idhrxml_Modify_s* x, int n, struct zx_idhrxml_Subscription_s* z)
{
  struct zx_idhrxml_Subscription_s* y;
  if (!x || !z) return;
  y = x->Subscription;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Subscription = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_idhrxml_Subscription_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_idhrxml_Modify_ADD_Subscription) */

void zx_idhrxml_Modify_ADD_Subscription(struct zx_idhrxml_Modify_s* x, int n, struct zx_idhrxml_Subscription_s* z)
{
  struct zx_idhrxml_Subscription_s* y;
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
    for (; y->gg.g.n; y = (struct zx_idhrxml_Subscription_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Subscription; n > 1 && y; --n, y = (struct zx_idhrxml_Subscription_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_idhrxml_Modify_DEL_Subscription) */

void zx_idhrxml_Modify_DEL_Subscription(struct zx_idhrxml_Modify_s* x, int n)
{
  struct zx_idhrxml_Subscription_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Subscription = (struct zx_idhrxml_Subscription_s*)x->Subscription->gg.g.n;
    return;
  case -1:
    y = (struct zx_idhrxml_Subscription_s*)x->Subscription;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_idhrxml_Subscription_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Subscription; n > 1 && y->gg.g.n; --n, y = (struct zx_idhrxml_Subscription_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_idhrxml_Modify_NUM_ModifyItem) */

int zx_idhrxml_Modify_NUM_ModifyItem(struct zx_idhrxml_Modify_s* x)
{
  struct zx_idhrxml_ModifyItem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->ModifyItem; y; ++n, y = (struct zx_idhrxml_ModifyItem_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_idhrxml_Modify_GET_ModifyItem) */

struct zx_idhrxml_ModifyItem_s* zx_idhrxml_Modify_GET_ModifyItem(struct zx_idhrxml_Modify_s* x, int n)
{
  struct zx_idhrxml_ModifyItem_s* y;
  if (!x) return 0;
  for (y = x->ModifyItem; n>=0 && y; --n, y = (struct zx_idhrxml_ModifyItem_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_idhrxml_Modify_POP_ModifyItem) */

struct zx_idhrxml_ModifyItem_s* zx_idhrxml_Modify_POP_ModifyItem(struct zx_idhrxml_Modify_s* x)
{
  struct zx_idhrxml_ModifyItem_s* y;
  if (!x) return 0;
  y = x->ModifyItem;
  if (y)
    x->ModifyItem = (struct zx_idhrxml_ModifyItem_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_idhrxml_Modify_PUSH_ModifyItem) */

void zx_idhrxml_Modify_PUSH_ModifyItem(struct zx_idhrxml_Modify_s* x, struct zx_idhrxml_ModifyItem_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->ModifyItem->gg.g;
  x->ModifyItem = z;
}

/* FUNC(zx_idhrxml_Modify_REV_ModifyItem) */

void zx_idhrxml_Modify_REV_ModifyItem(struct zx_idhrxml_Modify_s* x)
{
  struct zx_idhrxml_ModifyItem_s* nxt;
  struct zx_idhrxml_ModifyItem_s* y;
  if (!x) return;
  y = x->ModifyItem;
  if (!y) return;
  x->ModifyItem = 0;
  while (y) {
    nxt = (struct zx_idhrxml_ModifyItem_s*)y->gg.g.n;
    y->gg.g.n = &x->ModifyItem->gg.g;
    x->ModifyItem = y;
    y = nxt;
  }
}

/* FUNC(zx_idhrxml_Modify_PUT_ModifyItem) */

void zx_idhrxml_Modify_PUT_ModifyItem(struct zx_idhrxml_Modify_s* x, int n, struct zx_idhrxml_ModifyItem_s* z)
{
  struct zx_idhrxml_ModifyItem_s* y;
  if (!x || !z) return;
  y = x->ModifyItem;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->ModifyItem = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_idhrxml_ModifyItem_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_idhrxml_Modify_ADD_ModifyItem) */

void zx_idhrxml_Modify_ADD_ModifyItem(struct zx_idhrxml_Modify_s* x, int n, struct zx_idhrxml_ModifyItem_s* z)
{
  struct zx_idhrxml_ModifyItem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->ModifyItem->gg.g;
    x->ModifyItem = z;
    return;
  case -1:
    y = x->ModifyItem;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_idhrxml_ModifyItem_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->ModifyItem; n > 1 && y; --n, y = (struct zx_idhrxml_ModifyItem_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_idhrxml_Modify_DEL_ModifyItem) */

void zx_idhrxml_Modify_DEL_ModifyItem(struct zx_idhrxml_Modify_s* x, int n)
{
  struct zx_idhrxml_ModifyItem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->ModifyItem = (struct zx_idhrxml_ModifyItem_s*)x->ModifyItem->gg.g.n;
    return;
  case -1:
    y = (struct zx_idhrxml_ModifyItem_s*)x->ModifyItem;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_idhrxml_ModifyItem_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->ModifyItem; n > 1 && y->gg.g.n; --n, y = (struct zx_idhrxml_ModifyItem_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_idhrxml_Modify_NUM_ResultQuery) */

int zx_idhrxml_Modify_NUM_ResultQuery(struct zx_idhrxml_Modify_s* x)
{
  struct zx_idhrxml_ResultQuery_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->ResultQuery; y; ++n, y = (struct zx_idhrxml_ResultQuery_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_idhrxml_Modify_GET_ResultQuery) */

struct zx_idhrxml_ResultQuery_s* zx_idhrxml_Modify_GET_ResultQuery(struct zx_idhrxml_Modify_s* x, int n)
{
  struct zx_idhrxml_ResultQuery_s* y;
  if (!x) return 0;
  for (y = x->ResultQuery; n>=0 && y; --n, y = (struct zx_idhrxml_ResultQuery_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_idhrxml_Modify_POP_ResultQuery) */

struct zx_idhrxml_ResultQuery_s* zx_idhrxml_Modify_POP_ResultQuery(struct zx_idhrxml_Modify_s* x)
{
  struct zx_idhrxml_ResultQuery_s* y;
  if (!x) return 0;
  y = x->ResultQuery;
  if (y)
    x->ResultQuery = (struct zx_idhrxml_ResultQuery_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_idhrxml_Modify_PUSH_ResultQuery) */

void zx_idhrxml_Modify_PUSH_ResultQuery(struct zx_idhrxml_Modify_s* x, struct zx_idhrxml_ResultQuery_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->ResultQuery->gg.g;
  x->ResultQuery = z;
}

/* FUNC(zx_idhrxml_Modify_REV_ResultQuery) */

void zx_idhrxml_Modify_REV_ResultQuery(struct zx_idhrxml_Modify_s* x)
{
  struct zx_idhrxml_ResultQuery_s* nxt;
  struct zx_idhrxml_ResultQuery_s* y;
  if (!x) return;
  y = x->ResultQuery;
  if (!y) return;
  x->ResultQuery = 0;
  while (y) {
    nxt = (struct zx_idhrxml_ResultQuery_s*)y->gg.g.n;
    y->gg.g.n = &x->ResultQuery->gg.g;
    x->ResultQuery = y;
    y = nxt;
  }
}

/* FUNC(zx_idhrxml_Modify_PUT_ResultQuery) */

void zx_idhrxml_Modify_PUT_ResultQuery(struct zx_idhrxml_Modify_s* x, int n, struct zx_idhrxml_ResultQuery_s* z)
{
  struct zx_idhrxml_ResultQuery_s* y;
  if (!x || !z) return;
  y = x->ResultQuery;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->ResultQuery = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_idhrxml_ResultQuery_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_idhrxml_Modify_ADD_ResultQuery) */

void zx_idhrxml_Modify_ADD_ResultQuery(struct zx_idhrxml_Modify_s* x, int n, struct zx_idhrxml_ResultQuery_s* z)
{
  struct zx_idhrxml_ResultQuery_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->ResultQuery->gg.g;
    x->ResultQuery = z;
    return;
  case -1:
    y = x->ResultQuery;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_idhrxml_ResultQuery_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->ResultQuery; n > 1 && y; --n, y = (struct zx_idhrxml_ResultQuery_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_idhrxml_Modify_DEL_ResultQuery) */

void zx_idhrxml_Modify_DEL_ResultQuery(struct zx_idhrxml_Modify_s* x, int n)
{
  struct zx_idhrxml_ResultQuery_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->ResultQuery = (struct zx_idhrxml_ResultQuery_s*)x->ResultQuery->gg.g.n;
    return;
  case -1:
    y = (struct zx_idhrxml_ResultQuery_s*)x->ResultQuery;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_idhrxml_ResultQuery_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->ResultQuery; n > 1 && y->gg.g.n; --n, y = (struct zx_idhrxml_ResultQuery_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif

/* FUNC(zx_idhrxml_Modify_GET_itemID) */
struct zx_str* zx_idhrxml_Modify_GET_itemID(struct zx_idhrxml_Modify_s* x) { return x->itemID; }
/* FUNC(zx_idhrxml_Modify_PUT_itemID) */
void zx_idhrxml_Modify_PUT_itemID(struct zx_idhrxml_Modify_s* x, struct zx_str* y) { x->itemID = y; }







#ifdef ZX_ENA_GETPUT

/* FUNC(zx_idhrxml_ModifyItem_NUM_Select) */

int zx_idhrxml_ModifyItem_NUM_Select(struct zx_idhrxml_ModifyItem_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Select; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_idhrxml_ModifyItem_GET_Select) */

struct zx_elem_s* zx_idhrxml_ModifyItem_GET_Select(struct zx_idhrxml_ModifyItem_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->Select; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_idhrxml_ModifyItem_POP_Select) */

struct zx_elem_s* zx_idhrxml_ModifyItem_POP_Select(struct zx_idhrxml_ModifyItem_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->Select;
  if (y)
    x->Select = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_idhrxml_ModifyItem_PUSH_Select) */

void zx_idhrxml_ModifyItem_PUSH_Select(struct zx_idhrxml_ModifyItem_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->Select->g;
  x->Select = z;
}

/* FUNC(zx_idhrxml_ModifyItem_REV_Select) */

void zx_idhrxml_ModifyItem_REV_Select(struct zx_idhrxml_ModifyItem_s* x)
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

/* FUNC(zx_idhrxml_ModifyItem_PUT_Select) */

void zx_idhrxml_ModifyItem_PUT_Select(struct zx_idhrxml_ModifyItem_s* x, int n, struct zx_elem_s* z)
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

/* FUNC(zx_idhrxml_ModifyItem_ADD_Select) */

void zx_idhrxml_ModifyItem_ADD_Select(struct zx_idhrxml_ModifyItem_s* x, int n, struct zx_elem_s* z)
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

/* FUNC(zx_idhrxml_ModifyItem_DEL_Select) */

void zx_idhrxml_ModifyItem_DEL_Select(struct zx_idhrxml_ModifyItem_s* x, int n)
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

/* FUNC(zx_idhrxml_ModifyItem_NUM_NewData) */

int zx_idhrxml_ModifyItem_NUM_NewData(struct zx_idhrxml_ModifyItem_s* x)
{
  struct zx_idhrxml_NewData_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->NewData; y; ++n, y = (struct zx_idhrxml_NewData_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_idhrxml_ModifyItem_GET_NewData) */

struct zx_idhrxml_NewData_s* zx_idhrxml_ModifyItem_GET_NewData(struct zx_idhrxml_ModifyItem_s* x, int n)
{
  struct zx_idhrxml_NewData_s* y;
  if (!x) return 0;
  for (y = x->NewData; n>=0 && y; --n, y = (struct zx_idhrxml_NewData_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_idhrxml_ModifyItem_POP_NewData) */

struct zx_idhrxml_NewData_s* zx_idhrxml_ModifyItem_POP_NewData(struct zx_idhrxml_ModifyItem_s* x)
{
  struct zx_idhrxml_NewData_s* y;
  if (!x) return 0;
  y = x->NewData;
  if (y)
    x->NewData = (struct zx_idhrxml_NewData_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_idhrxml_ModifyItem_PUSH_NewData) */

void zx_idhrxml_ModifyItem_PUSH_NewData(struct zx_idhrxml_ModifyItem_s* x, struct zx_idhrxml_NewData_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->NewData->gg.g;
  x->NewData = z;
}

/* FUNC(zx_idhrxml_ModifyItem_REV_NewData) */

void zx_idhrxml_ModifyItem_REV_NewData(struct zx_idhrxml_ModifyItem_s* x)
{
  struct zx_idhrxml_NewData_s* nxt;
  struct zx_idhrxml_NewData_s* y;
  if (!x) return;
  y = x->NewData;
  if (!y) return;
  x->NewData = 0;
  while (y) {
    nxt = (struct zx_idhrxml_NewData_s*)y->gg.g.n;
    y->gg.g.n = &x->NewData->gg.g;
    x->NewData = y;
    y = nxt;
  }
}

/* FUNC(zx_idhrxml_ModifyItem_PUT_NewData) */

void zx_idhrxml_ModifyItem_PUT_NewData(struct zx_idhrxml_ModifyItem_s* x, int n, struct zx_idhrxml_NewData_s* z)
{
  struct zx_idhrxml_NewData_s* y;
  if (!x || !z) return;
  y = x->NewData;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->NewData = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_idhrxml_NewData_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_idhrxml_ModifyItem_ADD_NewData) */

void zx_idhrxml_ModifyItem_ADD_NewData(struct zx_idhrxml_ModifyItem_s* x, int n, struct zx_idhrxml_NewData_s* z)
{
  struct zx_idhrxml_NewData_s* y;
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
    for (; y->gg.g.n; y = (struct zx_idhrxml_NewData_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->NewData; n > 1 && y; --n, y = (struct zx_idhrxml_NewData_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_idhrxml_ModifyItem_DEL_NewData) */

void zx_idhrxml_ModifyItem_DEL_NewData(struct zx_idhrxml_ModifyItem_s* x, int n)
{
  struct zx_idhrxml_NewData_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->NewData = (struct zx_idhrxml_NewData_s*)x->NewData->gg.g.n;
    return;
  case -1:
    y = (struct zx_idhrxml_NewData_s*)x->NewData;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_idhrxml_NewData_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->NewData; n > 1 && y->gg.g.n; --n, y = (struct zx_idhrxml_NewData_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif

/* FUNC(zx_idhrxml_ModifyItem_GET_notChangedSince) */
struct zx_str* zx_idhrxml_ModifyItem_GET_notChangedSince(struct zx_idhrxml_ModifyItem_s* x) { return x->notChangedSince; }
/* FUNC(zx_idhrxml_ModifyItem_PUT_notChangedSince) */
void zx_idhrxml_ModifyItem_PUT_notChangedSince(struct zx_idhrxml_ModifyItem_s* x, struct zx_str* y) { x->notChangedSince = y; }
/* FUNC(zx_idhrxml_ModifyItem_GET_overrideAllowed) */
struct zx_str* zx_idhrxml_ModifyItem_GET_overrideAllowed(struct zx_idhrxml_ModifyItem_s* x) { return x->overrideAllowed; }
/* FUNC(zx_idhrxml_ModifyItem_PUT_overrideAllowed) */
void zx_idhrxml_ModifyItem_PUT_overrideAllowed(struct zx_idhrxml_ModifyItem_s* x, struct zx_str* y) { x->overrideAllowed = y; }
/* FUNC(zx_idhrxml_ModifyItem_GET_id) */
struct zx_str* zx_idhrxml_ModifyItem_GET_id(struct zx_idhrxml_ModifyItem_s* x) { return x->id; }
/* FUNC(zx_idhrxml_ModifyItem_PUT_id) */
void zx_idhrxml_ModifyItem_PUT_id(struct zx_idhrxml_ModifyItem_s* x, struct zx_str* y) { x->id = y; }
/* FUNC(zx_idhrxml_ModifyItem_GET_objectType) */
struct zx_str* zx_idhrxml_ModifyItem_GET_objectType(struct zx_idhrxml_ModifyItem_s* x) { return x->objectType; }
/* FUNC(zx_idhrxml_ModifyItem_PUT_objectType) */
void zx_idhrxml_ModifyItem_PUT_objectType(struct zx_idhrxml_ModifyItem_s* x, struct zx_str* y) { x->objectType = y; }
/* FUNC(zx_idhrxml_ModifyItem_GET_predefined) */
struct zx_str* zx_idhrxml_ModifyItem_GET_predefined(struct zx_idhrxml_ModifyItem_s* x) { return x->predefined; }
/* FUNC(zx_idhrxml_ModifyItem_PUT_predefined) */
void zx_idhrxml_ModifyItem_PUT_predefined(struct zx_idhrxml_ModifyItem_s* x, struct zx_str* y) { x->predefined = y; }
/* FUNC(zx_idhrxml_ModifyItem_GET_itemID) */
struct zx_str* zx_idhrxml_ModifyItem_GET_itemID(struct zx_idhrxml_ModifyItem_s* x) { return x->itemID; }
/* FUNC(zx_idhrxml_ModifyItem_PUT_itemID) */
void zx_idhrxml_ModifyItem_PUT_itemID(struct zx_idhrxml_ModifyItem_s* x, struct zx_str* y) { x->itemID = y; }







#ifdef ZX_ENA_GETPUT

/* FUNC(zx_idhrxml_ModifyResponse_NUM_Status) */

int zx_idhrxml_ModifyResponse_NUM_Status(struct zx_idhrxml_ModifyResponse_s* x)
{
  struct zx_lu_Status_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Status; y; ++n, y = (struct zx_lu_Status_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_idhrxml_ModifyResponse_GET_Status) */

struct zx_lu_Status_s* zx_idhrxml_ModifyResponse_GET_Status(struct zx_idhrxml_ModifyResponse_s* x, int n)
{
  struct zx_lu_Status_s* y;
  if (!x) return 0;
  for (y = x->Status; n>=0 && y; --n, y = (struct zx_lu_Status_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_idhrxml_ModifyResponse_POP_Status) */

struct zx_lu_Status_s* zx_idhrxml_ModifyResponse_POP_Status(struct zx_idhrxml_ModifyResponse_s* x)
{
  struct zx_lu_Status_s* y;
  if (!x) return 0;
  y = x->Status;
  if (y)
    x->Status = (struct zx_lu_Status_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_idhrxml_ModifyResponse_PUSH_Status) */

void zx_idhrxml_ModifyResponse_PUSH_Status(struct zx_idhrxml_ModifyResponse_s* x, struct zx_lu_Status_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Status->gg.g;
  x->Status = z;
}

/* FUNC(zx_idhrxml_ModifyResponse_REV_Status) */

void zx_idhrxml_ModifyResponse_REV_Status(struct zx_idhrxml_ModifyResponse_s* x)
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

/* FUNC(zx_idhrxml_ModifyResponse_PUT_Status) */

void zx_idhrxml_ModifyResponse_PUT_Status(struct zx_idhrxml_ModifyResponse_s* x, int n, struct zx_lu_Status_s* z)
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

/* FUNC(zx_idhrxml_ModifyResponse_ADD_Status) */

void zx_idhrxml_ModifyResponse_ADD_Status(struct zx_idhrxml_ModifyResponse_s* x, int n, struct zx_lu_Status_s* z)
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

/* FUNC(zx_idhrxml_ModifyResponse_DEL_Status) */

void zx_idhrxml_ModifyResponse_DEL_Status(struct zx_idhrxml_ModifyResponse_s* x, int n)
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

/* FUNC(zx_idhrxml_ModifyResponse_NUM_Extension) */

int zx_idhrxml_ModifyResponse_NUM_Extension(struct zx_idhrxml_ModifyResponse_s* x)
{
  struct zx_lu_Extension_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Extension; y; ++n, y = (struct zx_lu_Extension_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_idhrxml_ModifyResponse_GET_Extension) */

struct zx_lu_Extension_s* zx_idhrxml_ModifyResponse_GET_Extension(struct zx_idhrxml_ModifyResponse_s* x, int n)
{
  struct zx_lu_Extension_s* y;
  if (!x) return 0;
  for (y = x->Extension; n>=0 && y; --n, y = (struct zx_lu_Extension_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_idhrxml_ModifyResponse_POP_Extension) */

struct zx_lu_Extension_s* zx_idhrxml_ModifyResponse_POP_Extension(struct zx_idhrxml_ModifyResponse_s* x)
{
  struct zx_lu_Extension_s* y;
  if (!x) return 0;
  y = x->Extension;
  if (y)
    x->Extension = (struct zx_lu_Extension_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_idhrxml_ModifyResponse_PUSH_Extension) */

void zx_idhrxml_ModifyResponse_PUSH_Extension(struct zx_idhrxml_ModifyResponse_s* x, struct zx_lu_Extension_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Extension->gg.g;
  x->Extension = z;
}

/* FUNC(zx_idhrxml_ModifyResponse_REV_Extension) */

void zx_idhrxml_ModifyResponse_REV_Extension(struct zx_idhrxml_ModifyResponse_s* x)
{
  struct zx_lu_Extension_s* nxt;
  struct zx_lu_Extension_s* y;
  if (!x) return;
  y = x->Extension;
  if (!y) return;
  x->Extension = 0;
  while (y) {
    nxt = (struct zx_lu_Extension_s*)y->gg.g.n;
    y->gg.g.n = &x->Extension->gg.g;
    x->Extension = y;
    y = nxt;
  }
}

/* FUNC(zx_idhrxml_ModifyResponse_PUT_Extension) */

void zx_idhrxml_ModifyResponse_PUT_Extension(struct zx_idhrxml_ModifyResponse_s* x, int n, struct zx_lu_Extension_s* z)
{
  struct zx_lu_Extension_s* y;
  if (!x || !z) return;
  y = x->Extension;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Extension = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_lu_Extension_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_idhrxml_ModifyResponse_ADD_Extension) */

void zx_idhrxml_ModifyResponse_ADD_Extension(struct zx_idhrxml_ModifyResponse_s* x, int n, struct zx_lu_Extension_s* z)
{
  struct zx_lu_Extension_s* y;
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
    for (; y->gg.g.n; y = (struct zx_lu_Extension_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Extension; n > 1 && y; --n, y = (struct zx_lu_Extension_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_idhrxml_ModifyResponse_DEL_Extension) */

void zx_idhrxml_ModifyResponse_DEL_Extension(struct zx_idhrxml_ModifyResponse_s* x, int n)
{
  struct zx_lu_Extension_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Extension = (struct zx_lu_Extension_s*)x->Extension->gg.g.n;
    return;
  case -1:
    y = (struct zx_lu_Extension_s*)x->Extension;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_lu_Extension_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Extension; n > 1 && y->gg.g.n; --n, y = (struct zx_lu_Extension_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_idhrxml_ModifyResponse_NUM_ItemData) */

int zx_idhrxml_ModifyResponse_NUM_ItemData(struct zx_idhrxml_ModifyResponse_s* x)
{
  struct zx_idhrxml_ItemData_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->ItemData; y; ++n, y = (struct zx_idhrxml_ItemData_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_idhrxml_ModifyResponse_GET_ItemData) */

struct zx_idhrxml_ItemData_s* zx_idhrxml_ModifyResponse_GET_ItemData(struct zx_idhrxml_ModifyResponse_s* x, int n)
{
  struct zx_idhrxml_ItemData_s* y;
  if (!x) return 0;
  for (y = x->ItemData; n>=0 && y; --n, y = (struct zx_idhrxml_ItemData_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_idhrxml_ModifyResponse_POP_ItemData) */

struct zx_idhrxml_ItemData_s* zx_idhrxml_ModifyResponse_POP_ItemData(struct zx_idhrxml_ModifyResponse_s* x)
{
  struct zx_idhrxml_ItemData_s* y;
  if (!x) return 0;
  y = x->ItemData;
  if (y)
    x->ItemData = (struct zx_idhrxml_ItemData_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_idhrxml_ModifyResponse_PUSH_ItemData) */

void zx_idhrxml_ModifyResponse_PUSH_ItemData(struct zx_idhrxml_ModifyResponse_s* x, struct zx_idhrxml_ItemData_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->ItemData->gg.g;
  x->ItemData = z;
}

/* FUNC(zx_idhrxml_ModifyResponse_REV_ItemData) */

void zx_idhrxml_ModifyResponse_REV_ItemData(struct zx_idhrxml_ModifyResponse_s* x)
{
  struct zx_idhrxml_ItemData_s* nxt;
  struct zx_idhrxml_ItemData_s* y;
  if (!x) return;
  y = x->ItemData;
  if (!y) return;
  x->ItemData = 0;
  while (y) {
    nxt = (struct zx_idhrxml_ItemData_s*)y->gg.g.n;
    y->gg.g.n = &x->ItemData->gg.g;
    x->ItemData = y;
    y = nxt;
  }
}

/* FUNC(zx_idhrxml_ModifyResponse_PUT_ItemData) */

void zx_idhrxml_ModifyResponse_PUT_ItemData(struct zx_idhrxml_ModifyResponse_s* x, int n, struct zx_idhrxml_ItemData_s* z)
{
  struct zx_idhrxml_ItemData_s* y;
  if (!x || !z) return;
  y = x->ItemData;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->ItemData = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_idhrxml_ItemData_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_idhrxml_ModifyResponse_ADD_ItemData) */

void zx_idhrxml_ModifyResponse_ADD_ItemData(struct zx_idhrxml_ModifyResponse_s* x, int n, struct zx_idhrxml_ItemData_s* z)
{
  struct zx_idhrxml_ItemData_s* y;
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
    for (; y->gg.g.n; y = (struct zx_idhrxml_ItemData_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->ItemData; n > 1 && y; --n, y = (struct zx_idhrxml_ItemData_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_idhrxml_ModifyResponse_DEL_ItemData) */

void zx_idhrxml_ModifyResponse_DEL_ItemData(struct zx_idhrxml_ModifyResponse_s* x, int n)
{
  struct zx_idhrxml_ItemData_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->ItemData = (struct zx_idhrxml_ItemData_s*)x->ItemData->gg.g.n;
    return;
  case -1:
    y = (struct zx_idhrxml_ItemData_s*)x->ItemData;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_idhrxml_ItemData_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->ItemData; n > 1 && y->gg.g.n; --n, y = (struct zx_idhrxml_ItemData_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif

/* FUNC(zx_idhrxml_ModifyResponse_GET_timeStamp) */
struct zx_str* zx_idhrxml_ModifyResponse_GET_timeStamp(struct zx_idhrxml_ModifyResponse_s* x) { return x->timeStamp; }
/* FUNC(zx_idhrxml_ModifyResponse_PUT_timeStamp) */
void zx_idhrxml_ModifyResponse_PUT_timeStamp(struct zx_idhrxml_ModifyResponse_s* x, struct zx_str* y) { x->timeStamp = y; }
/* FUNC(zx_idhrxml_ModifyResponse_GET_itemIDRef) */
struct zx_str* zx_idhrxml_ModifyResponse_GET_itemIDRef(struct zx_idhrxml_ModifyResponse_s* x) { return x->itemIDRef; }
/* FUNC(zx_idhrxml_ModifyResponse_PUT_itemIDRef) */
void zx_idhrxml_ModifyResponse_PUT_itemIDRef(struct zx_idhrxml_ModifyResponse_s* x, struct zx_str* y) { x->itemIDRef = y; }







#ifdef ZX_ENA_GETPUT

/* FUNC(zx_idhrxml_NewData_NUM_Candidate) */

int zx_idhrxml_NewData_NUM_Candidate(struct zx_idhrxml_NewData_s* x)
{
  struct zx_hrxml_Candidate_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Candidate; y; ++n, y = (struct zx_hrxml_Candidate_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_idhrxml_NewData_GET_Candidate) */

struct zx_hrxml_Candidate_s* zx_idhrxml_NewData_GET_Candidate(struct zx_idhrxml_NewData_s* x, int n)
{
  struct zx_hrxml_Candidate_s* y;
  if (!x) return 0;
  for (y = x->Candidate; n>=0 && y; --n, y = (struct zx_hrxml_Candidate_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_idhrxml_NewData_POP_Candidate) */

struct zx_hrxml_Candidate_s* zx_idhrxml_NewData_POP_Candidate(struct zx_idhrxml_NewData_s* x)
{
  struct zx_hrxml_Candidate_s* y;
  if (!x) return 0;
  y = x->Candidate;
  if (y)
    x->Candidate = (struct zx_hrxml_Candidate_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_idhrxml_NewData_PUSH_Candidate) */

void zx_idhrxml_NewData_PUSH_Candidate(struct zx_idhrxml_NewData_s* x, struct zx_hrxml_Candidate_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Candidate->gg.g;
  x->Candidate = z;
}

/* FUNC(zx_idhrxml_NewData_REV_Candidate) */

void zx_idhrxml_NewData_REV_Candidate(struct zx_idhrxml_NewData_s* x)
{
  struct zx_hrxml_Candidate_s* nxt;
  struct zx_hrxml_Candidate_s* y;
  if (!x) return;
  y = x->Candidate;
  if (!y) return;
  x->Candidate = 0;
  while (y) {
    nxt = (struct zx_hrxml_Candidate_s*)y->gg.g.n;
    y->gg.g.n = &x->Candidate->gg.g;
    x->Candidate = y;
    y = nxt;
  }
}

/* FUNC(zx_idhrxml_NewData_PUT_Candidate) */

void zx_idhrxml_NewData_PUT_Candidate(struct zx_idhrxml_NewData_s* x, int n, struct zx_hrxml_Candidate_s* z)
{
  struct zx_hrxml_Candidate_s* y;
  if (!x || !z) return;
  y = x->Candidate;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Candidate = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_hrxml_Candidate_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_idhrxml_NewData_ADD_Candidate) */

void zx_idhrxml_NewData_ADD_Candidate(struct zx_idhrxml_NewData_s* x, int n, struct zx_hrxml_Candidate_s* z)
{
  struct zx_hrxml_Candidate_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->Candidate->gg.g;
    x->Candidate = z;
    return;
  case -1:
    y = x->Candidate;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_hrxml_Candidate_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Candidate; n > 1 && y; --n, y = (struct zx_hrxml_Candidate_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_idhrxml_NewData_DEL_Candidate) */

void zx_idhrxml_NewData_DEL_Candidate(struct zx_idhrxml_NewData_s* x, int n)
{
  struct zx_hrxml_Candidate_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Candidate = (struct zx_hrxml_Candidate_s*)x->Candidate->gg.g.n;
    return;
  case -1:
    y = (struct zx_hrxml_Candidate_s*)x->Candidate;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_hrxml_Candidate_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Candidate; n > 1 && y->gg.g.n; --n, y = (struct zx_hrxml_Candidate_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_idhrxml_NewData_NUM_Subscription) */

int zx_idhrxml_NewData_NUM_Subscription(struct zx_idhrxml_NewData_s* x)
{
  struct zx_idhrxml_Subscription_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Subscription; y; ++n, y = (struct zx_idhrxml_Subscription_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_idhrxml_NewData_GET_Subscription) */

struct zx_idhrxml_Subscription_s* zx_idhrxml_NewData_GET_Subscription(struct zx_idhrxml_NewData_s* x, int n)
{
  struct zx_idhrxml_Subscription_s* y;
  if (!x) return 0;
  for (y = x->Subscription; n>=0 && y; --n, y = (struct zx_idhrxml_Subscription_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_idhrxml_NewData_POP_Subscription) */

struct zx_idhrxml_Subscription_s* zx_idhrxml_NewData_POP_Subscription(struct zx_idhrxml_NewData_s* x)
{
  struct zx_idhrxml_Subscription_s* y;
  if (!x) return 0;
  y = x->Subscription;
  if (y)
    x->Subscription = (struct zx_idhrxml_Subscription_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_idhrxml_NewData_PUSH_Subscription) */

void zx_idhrxml_NewData_PUSH_Subscription(struct zx_idhrxml_NewData_s* x, struct zx_idhrxml_Subscription_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Subscription->gg.g;
  x->Subscription = z;
}

/* FUNC(zx_idhrxml_NewData_REV_Subscription) */

void zx_idhrxml_NewData_REV_Subscription(struct zx_idhrxml_NewData_s* x)
{
  struct zx_idhrxml_Subscription_s* nxt;
  struct zx_idhrxml_Subscription_s* y;
  if (!x) return;
  y = x->Subscription;
  if (!y) return;
  x->Subscription = 0;
  while (y) {
    nxt = (struct zx_idhrxml_Subscription_s*)y->gg.g.n;
    y->gg.g.n = &x->Subscription->gg.g;
    x->Subscription = y;
    y = nxt;
  }
}

/* FUNC(zx_idhrxml_NewData_PUT_Subscription) */

void zx_idhrxml_NewData_PUT_Subscription(struct zx_idhrxml_NewData_s* x, int n, struct zx_idhrxml_Subscription_s* z)
{
  struct zx_idhrxml_Subscription_s* y;
  if (!x || !z) return;
  y = x->Subscription;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Subscription = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_idhrxml_Subscription_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_idhrxml_NewData_ADD_Subscription) */

void zx_idhrxml_NewData_ADD_Subscription(struct zx_idhrxml_NewData_s* x, int n, struct zx_idhrxml_Subscription_s* z)
{
  struct zx_idhrxml_Subscription_s* y;
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
    for (; y->gg.g.n; y = (struct zx_idhrxml_Subscription_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Subscription; n > 1 && y; --n, y = (struct zx_idhrxml_Subscription_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_idhrxml_NewData_DEL_Subscription) */

void zx_idhrxml_NewData_DEL_Subscription(struct zx_idhrxml_NewData_s* x, int n)
{
  struct zx_idhrxml_Subscription_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Subscription = (struct zx_idhrxml_Subscription_s*)x->Subscription->gg.g.n;
    return;
  case -1:
    y = (struct zx_idhrxml_Subscription_s*)x->Subscription;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_idhrxml_Subscription_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Subscription; n > 1 && y->gg.g.n; --n, y = (struct zx_idhrxml_Subscription_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif








#ifdef ZX_ENA_GETPUT

/* FUNC(zx_idhrxml_Notification_NUM_TestResult) */

int zx_idhrxml_Notification_NUM_TestResult(struct zx_idhrxml_Notification_s* x)
{
  struct zx_lu_TestResult_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->TestResult; y; ++n, y = (struct zx_lu_TestResult_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_idhrxml_Notification_GET_TestResult) */

struct zx_lu_TestResult_s* zx_idhrxml_Notification_GET_TestResult(struct zx_idhrxml_Notification_s* x, int n)
{
  struct zx_lu_TestResult_s* y;
  if (!x) return 0;
  for (y = x->TestResult; n>=0 && y; --n, y = (struct zx_lu_TestResult_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_idhrxml_Notification_POP_TestResult) */

struct zx_lu_TestResult_s* zx_idhrxml_Notification_POP_TestResult(struct zx_idhrxml_Notification_s* x)
{
  struct zx_lu_TestResult_s* y;
  if (!x) return 0;
  y = x->TestResult;
  if (y)
    x->TestResult = (struct zx_lu_TestResult_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_idhrxml_Notification_PUSH_TestResult) */

void zx_idhrxml_Notification_PUSH_TestResult(struct zx_idhrxml_Notification_s* x, struct zx_lu_TestResult_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->TestResult->gg.g;
  x->TestResult = z;
}

/* FUNC(zx_idhrxml_Notification_REV_TestResult) */

void zx_idhrxml_Notification_REV_TestResult(struct zx_idhrxml_Notification_s* x)
{
  struct zx_lu_TestResult_s* nxt;
  struct zx_lu_TestResult_s* y;
  if (!x) return;
  y = x->TestResult;
  if (!y) return;
  x->TestResult = 0;
  while (y) {
    nxt = (struct zx_lu_TestResult_s*)y->gg.g.n;
    y->gg.g.n = &x->TestResult->gg.g;
    x->TestResult = y;
    y = nxt;
  }
}

/* FUNC(zx_idhrxml_Notification_PUT_TestResult) */

void zx_idhrxml_Notification_PUT_TestResult(struct zx_idhrxml_Notification_s* x, int n, struct zx_lu_TestResult_s* z)
{
  struct zx_lu_TestResult_s* y;
  if (!x || !z) return;
  y = x->TestResult;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->TestResult = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_lu_TestResult_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_idhrxml_Notification_ADD_TestResult) */

void zx_idhrxml_Notification_ADD_TestResult(struct zx_idhrxml_Notification_s* x, int n, struct zx_lu_TestResult_s* z)
{
  struct zx_lu_TestResult_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->TestResult->gg.g;
    x->TestResult = z;
    return;
  case -1:
    y = x->TestResult;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_lu_TestResult_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->TestResult; n > 1 && y; --n, y = (struct zx_lu_TestResult_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_idhrxml_Notification_DEL_TestResult) */

void zx_idhrxml_Notification_DEL_TestResult(struct zx_idhrxml_Notification_s* x, int n)
{
  struct zx_lu_TestResult_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->TestResult = (struct zx_lu_TestResult_s*)x->TestResult->gg.g.n;
    return;
  case -1:
    y = (struct zx_lu_TestResult_s*)x->TestResult;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_lu_TestResult_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->TestResult; n > 1 && y->gg.g.n; --n, y = (struct zx_lu_TestResult_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_idhrxml_Notification_NUM_ItemData) */

int zx_idhrxml_Notification_NUM_ItemData(struct zx_idhrxml_Notification_s* x)
{
  struct zx_idhrxml_ItemData_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->ItemData; y; ++n, y = (struct zx_idhrxml_ItemData_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_idhrxml_Notification_GET_ItemData) */

struct zx_idhrxml_ItemData_s* zx_idhrxml_Notification_GET_ItemData(struct zx_idhrxml_Notification_s* x, int n)
{
  struct zx_idhrxml_ItemData_s* y;
  if (!x) return 0;
  for (y = x->ItemData; n>=0 && y; --n, y = (struct zx_idhrxml_ItemData_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_idhrxml_Notification_POP_ItemData) */

struct zx_idhrxml_ItemData_s* zx_idhrxml_Notification_POP_ItemData(struct zx_idhrxml_Notification_s* x)
{
  struct zx_idhrxml_ItemData_s* y;
  if (!x) return 0;
  y = x->ItemData;
  if (y)
    x->ItemData = (struct zx_idhrxml_ItemData_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_idhrxml_Notification_PUSH_ItemData) */

void zx_idhrxml_Notification_PUSH_ItemData(struct zx_idhrxml_Notification_s* x, struct zx_idhrxml_ItemData_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->ItemData->gg.g;
  x->ItemData = z;
}

/* FUNC(zx_idhrxml_Notification_REV_ItemData) */

void zx_idhrxml_Notification_REV_ItemData(struct zx_idhrxml_Notification_s* x)
{
  struct zx_idhrxml_ItemData_s* nxt;
  struct zx_idhrxml_ItemData_s* y;
  if (!x) return;
  y = x->ItemData;
  if (!y) return;
  x->ItemData = 0;
  while (y) {
    nxt = (struct zx_idhrxml_ItemData_s*)y->gg.g.n;
    y->gg.g.n = &x->ItemData->gg.g;
    x->ItemData = y;
    y = nxt;
  }
}

/* FUNC(zx_idhrxml_Notification_PUT_ItemData) */

void zx_idhrxml_Notification_PUT_ItemData(struct zx_idhrxml_Notification_s* x, int n, struct zx_idhrxml_ItemData_s* z)
{
  struct zx_idhrxml_ItemData_s* y;
  if (!x || !z) return;
  y = x->ItemData;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->ItemData = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_idhrxml_ItemData_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_idhrxml_Notification_ADD_ItemData) */

void zx_idhrxml_Notification_ADD_ItemData(struct zx_idhrxml_Notification_s* x, int n, struct zx_idhrxml_ItemData_s* z)
{
  struct zx_idhrxml_ItemData_s* y;
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
    for (; y->gg.g.n; y = (struct zx_idhrxml_ItemData_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->ItemData; n > 1 && y; --n, y = (struct zx_idhrxml_ItemData_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_idhrxml_Notification_DEL_ItemData) */

void zx_idhrxml_Notification_DEL_ItemData(struct zx_idhrxml_Notification_s* x, int n)
{
  struct zx_idhrxml_ItemData_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->ItemData = (struct zx_idhrxml_ItemData_s*)x->ItemData->gg.g.n;
    return;
  case -1:
    y = (struct zx_idhrxml_ItemData_s*)x->ItemData;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_idhrxml_ItemData_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->ItemData; n > 1 && y->gg.g.n; --n, y = (struct zx_idhrxml_ItemData_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif

/* FUNC(zx_idhrxml_Notification_GET_id) */
struct zx_str* zx_idhrxml_Notification_GET_id(struct zx_idhrxml_Notification_s* x) { return x->id; }
/* FUNC(zx_idhrxml_Notification_PUT_id) */
void zx_idhrxml_Notification_PUT_id(struct zx_idhrxml_Notification_s* x, struct zx_str* y) { x->id = y; }
/* FUNC(zx_idhrxml_Notification_GET_subscriptionID) */
struct zx_str* zx_idhrxml_Notification_GET_subscriptionID(struct zx_idhrxml_Notification_s* x) { return x->subscriptionID; }
/* FUNC(zx_idhrxml_Notification_PUT_subscriptionID) */
void zx_idhrxml_Notification_PUT_subscriptionID(struct zx_idhrxml_Notification_s* x, struct zx_str* y) { x->subscriptionID = y; }
/* FUNC(zx_idhrxml_Notification_GET_expires) */
struct zx_str* zx_idhrxml_Notification_GET_expires(struct zx_idhrxml_Notification_s* x) { return x->expires; }
/* FUNC(zx_idhrxml_Notification_PUT_expires) */
void zx_idhrxml_Notification_PUT_expires(struct zx_idhrxml_Notification_s* x, struct zx_str* y) { x->expires = y; }
/* FUNC(zx_idhrxml_Notification_GET_endReason) */
struct zx_str* zx_idhrxml_Notification_GET_endReason(struct zx_idhrxml_Notification_s* x) { return x->endReason; }
/* FUNC(zx_idhrxml_Notification_PUT_endReason) */
void zx_idhrxml_Notification_PUT_endReason(struct zx_idhrxml_Notification_s* x, struct zx_str* y) { x->endReason = y; }







#ifdef ZX_ENA_GETPUT

/* FUNC(zx_idhrxml_Notify_NUM_Extension) */

int zx_idhrxml_Notify_NUM_Extension(struct zx_idhrxml_Notify_s* x)
{
  struct zx_lu_Extension_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Extension; y; ++n, y = (struct zx_lu_Extension_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_idhrxml_Notify_GET_Extension) */

struct zx_lu_Extension_s* zx_idhrxml_Notify_GET_Extension(struct zx_idhrxml_Notify_s* x, int n)
{
  struct zx_lu_Extension_s* y;
  if (!x) return 0;
  for (y = x->Extension; n>=0 && y; --n, y = (struct zx_lu_Extension_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_idhrxml_Notify_POP_Extension) */

struct zx_lu_Extension_s* zx_idhrxml_Notify_POP_Extension(struct zx_idhrxml_Notify_s* x)
{
  struct zx_lu_Extension_s* y;
  if (!x) return 0;
  y = x->Extension;
  if (y)
    x->Extension = (struct zx_lu_Extension_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_idhrxml_Notify_PUSH_Extension) */

void zx_idhrxml_Notify_PUSH_Extension(struct zx_idhrxml_Notify_s* x, struct zx_lu_Extension_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Extension->gg.g;
  x->Extension = z;
}

/* FUNC(zx_idhrxml_Notify_REV_Extension) */

void zx_idhrxml_Notify_REV_Extension(struct zx_idhrxml_Notify_s* x)
{
  struct zx_lu_Extension_s* nxt;
  struct zx_lu_Extension_s* y;
  if (!x) return;
  y = x->Extension;
  if (!y) return;
  x->Extension = 0;
  while (y) {
    nxt = (struct zx_lu_Extension_s*)y->gg.g.n;
    y->gg.g.n = &x->Extension->gg.g;
    x->Extension = y;
    y = nxt;
  }
}

/* FUNC(zx_idhrxml_Notify_PUT_Extension) */

void zx_idhrxml_Notify_PUT_Extension(struct zx_idhrxml_Notify_s* x, int n, struct zx_lu_Extension_s* z)
{
  struct zx_lu_Extension_s* y;
  if (!x || !z) return;
  y = x->Extension;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Extension = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_lu_Extension_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_idhrxml_Notify_ADD_Extension) */

void zx_idhrxml_Notify_ADD_Extension(struct zx_idhrxml_Notify_s* x, int n, struct zx_lu_Extension_s* z)
{
  struct zx_lu_Extension_s* y;
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
    for (; y->gg.g.n; y = (struct zx_lu_Extension_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Extension; n > 1 && y; --n, y = (struct zx_lu_Extension_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_idhrxml_Notify_DEL_Extension) */

void zx_idhrxml_Notify_DEL_Extension(struct zx_idhrxml_Notify_s* x, int n)
{
  struct zx_lu_Extension_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Extension = (struct zx_lu_Extension_s*)x->Extension->gg.g.n;
    return;
  case -1:
    y = (struct zx_lu_Extension_s*)x->Extension;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_lu_Extension_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Extension; n > 1 && y->gg.g.n; --n, y = (struct zx_lu_Extension_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_idhrxml_Notify_NUM_Notification) */

int zx_idhrxml_Notify_NUM_Notification(struct zx_idhrxml_Notify_s* x)
{
  struct zx_idhrxml_Notification_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Notification; y; ++n, y = (struct zx_idhrxml_Notification_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_idhrxml_Notify_GET_Notification) */

struct zx_idhrxml_Notification_s* zx_idhrxml_Notify_GET_Notification(struct zx_idhrxml_Notify_s* x, int n)
{
  struct zx_idhrxml_Notification_s* y;
  if (!x) return 0;
  for (y = x->Notification; n>=0 && y; --n, y = (struct zx_idhrxml_Notification_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_idhrxml_Notify_POP_Notification) */

struct zx_idhrxml_Notification_s* zx_idhrxml_Notify_POP_Notification(struct zx_idhrxml_Notify_s* x)
{
  struct zx_idhrxml_Notification_s* y;
  if (!x) return 0;
  y = x->Notification;
  if (y)
    x->Notification = (struct zx_idhrxml_Notification_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_idhrxml_Notify_PUSH_Notification) */

void zx_idhrxml_Notify_PUSH_Notification(struct zx_idhrxml_Notify_s* x, struct zx_idhrxml_Notification_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Notification->gg.g;
  x->Notification = z;
}

/* FUNC(zx_idhrxml_Notify_REV_Notification) */

void zx_idhrxml_Notify_REV_Notification(struct zx_idhrxml_Notify_s* x)
{
  struct zx_idhrxml_Notification_s* nxt;
  struct zx_idhrxml_Notification_s* y;
  if (!x) return;
  y = x->Notification;
  if (!y) return;
  x->Notification = 0;
  while (y) {
    nxt = (struct zx_idhrxml_Notification_s*)y->gg.g.n;
    y->gg.g.n = &x->Notification->gg.g;
    x->Notification = y;
    y = nxt;
  }
}

/* FUNC(zx_idhrxml_Notify_PUT_Notification) */

void zx_idhrxml_Notify_PUT_Notification(struct zx_idhrxml_Notify_s* x, int n, struct zx_idhrxml_Notification_s* z)
{
  struct zx_idhrxml_Notification_s* y;
  if (!x || !z) return;
  y = x->Notification;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Notification = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_idhrxml_Notification_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_idhrxml_Notify_ADD_Notification) */

void zx_idhrxml_Notify_ADD_Notification(struct zx_idhrxml_Notify_s* x, int n, struct zx_idhrxml_Notification_s* z)
{
  struct zx_idhrxml_Notification_s* y;
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
    for (; y->gg.g.n; y = (struct zx_idhrxml_Notification_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Notification; n > 1 && y; --n, y = (struct zx_idhrxml_Notification_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_idhrxml_Notify_DEL_Notification) */

void zx_idhrxml_Notify_DEL_Notification(struct zx_idhrxml_Notify_s* x, int n)
{
  struct zx_idhrxml_Notification_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Notification = (struct zx_idhrxml_Notification_s*)x->Notification->gg.g.n;
    return;
  case -1:
    y = (struct zx_idhrxml_Notification_s*)x->Notification;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_idhrxml_Notification_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Notification; n > 1 && y->gg.g.n; --n, y = (struct zx_idhrxml_Notification_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif

/* FUNC(zx_idhrxml_Notify_GET_timeStamp) */
struct zx_str* zx_idhrxml_Notify_GET_timeStamp(struct zx_idhrxml_Notify_s* x) { return x->timeStamp; }
/* FUNC(zx_idhrxml_Notify_PUT_timeStamp) */
void zx_idhrxml_Notify_PUT_timeStamp(struct zx_idhrxml_Notify_s* x, struct zx_str* y) { x->timeStamp = y; }
/* FUNC(zx_idhrxml_Notify_GET_itemID) */
struct zx_str* zx_idhrxml_Notify_GET_itemID(struct zx_idhrxml_Notify_s* x) { return x->itemID; }
/* FUNC(zx_idhrxml_Notify_PUT_itemID) */
void zx_idhrxml_Notify_PUT_itemID(struct zx_idhrxml_Notify_s* x, struct zx_str* y) { x->itemID = y; }







#ifdef ZX_ENA_GETPUT

/* FUNC(zx_idhrxml_NotifyResponse_NUM_Status) */

int zx_idhrxml_NotifyResponse_NUM_Status(struct zx_idhrxml_NotifyResponse_s* x)
{
  struct zx_lu_Status_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Status; y; ++n, y = (struct zx_lu_Status_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_idhrxml_NotifyResponse_GET_Status) */

struct zx_lu_Status_s* zx_idhrxml_NotifyResponse_GET_Status(struct zx_idhrxml_NotifyResponse_s* x, int n)
{
  struct zx_lu_Status_s* y;
  if (!x) return 0;
  for (y = x->Status; n>=0 && y; --n, y = (struct zx_lu_Status_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_idhrxml_NotifyResponse_POP_Status) */

struct zx_lu_Status_s* zx_idhrxml_NotifyResponse_POP_Status(struct zx_idhrxml_NotifyResponse_s* x)
{
  struct zx_lu_Status_s* y;
  if (!x) return 0;
  y = x->Status;
  if (y)
    x->Status = (struct zx_lu_Status_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_idhrxml_NotifyResponse_PUSH_Status) */

void zx_idhrxml_NotifyResponse_PUSH_Status(struct zx_idhrxml_NotifyResponse_s* x, struct zx_lu_Status_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Status->gg.g;
  x->Status = z;
}

/* FUNC(zx_idhrxml_NotifyResponse_REV_Status) */

void zx_idhrxml_NotifyResponse_REV_Status(struct zx_idhrxml_NotifyResponse_s* x)
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

/* FUNC(zx_idhrxml_NotifyResponse_PUT_Status) */

void zx_idhrxml_NotifyResponse_PUT_Status(struct zx_idhrxml_NotifyResponse_s* x, int n, struct zx_lu_Status_s* z)
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

/* FUNC(zx_idhrxml_NotifyResponse_ADD_Status) */

void zx_idhrxml_NotifyResponse_ADD_Status(struct zx_idhrxml_NotifyResponse_s* x, int n, struct zx_lu_Status_s* z)
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

/* FUNC(zx_idhrxml_NotifyResponse_DEL_Status) */

void zx_idhrxml_NotifyResponse_DEL_Status(struct zx_idhrxml_NotifyResponse_s* x, int n)
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

/* FUNC(zx_idhrxml_NotifyResponse_NUM_Extension) */

int zx_idhrxml_NotifyResponse_NUM_Extension(struct zx_idhrxml_NotifyResponse_s* x)
{
  struct zx_lu_Extension_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Extension; y; ++n, y = (struct zx_lu_Extension_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_idhrxml_NotifyResponse_GET_Extension) */

struct zx_lu_Extension_s* zx_idhrxml_NotifyResponse_GET_Extension(struct zx_idhrxml_NotifyResponse_s* x, int n)
{
  struct zx_lu_Extension_s* y;
  if (!x) return 0;
  for (y = x->Extension; n>=0 && y; --n, y = (struct zx_lu_Extension_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_idhrxml_NotifyResponse_POP_Extension) */

struct zx_lu_Extension_s* zx_idhrxml_NotifyResponse_POP_Extension(struct zx_idhrxml_NotifyResponse_s* x)
{
  struct zx_lu_Extension_s* y;
  if (!x) return 0;
  y = x->Extension;
  if (y)
    x->Extension = (struct zx_lu_Extension_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_idhrxml_NotifyResponse_PUSH_Extension) */

void zx_idhrxml_NotifyResponse_PUSH_Extension(struct zx_idhrxml_NotifyResponse_s* x, struct zx_lu_Extension_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Extension->gg.g;
  x->Extension = z;
}

/* FUNC(zx_idhrxml_NotifyResponse_REV_Extension) */

void zx_idhrxml_NotifyResponse_REV_Extension(struct zx_idhrxml_NotifyResponse_s* x)
{
  struct zx_lu_Extension_s* nxt;
  struct zx_lu_Extension_s* y;
  if (!x) return;
  y = x->Extension;
  if (!y) return;
  x->Extension = 0;
  while (y) {
    nxt = (struct zx_lu_Extension_s*)y->gg.g.n;
    y->gg.g.n = &x->Extension->gg.g;
    x->Extension = y;
    y = nxt;
  }
}

/* FUNC(zx_idhrxml_NotifyResponse_PUT_Extension) */

void zx_idhrxml_NotifyResponse_PUT_Extension(struct zx_idhrxml_NotifyResponse_s* x, int n, struct zx_lu_Extension_s* z)
{
  struct zx_lu_Extension_s* y;
  if (!x || !z) return;
  y = x->Extension;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Extension = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_lu_Extension_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_idhrxml_NotifyResponse_ADD_Extension) */

void zx_idhrxml_NotifyResponse_ADD_Extension(struct zx_idhrxml_NotifyResponse_s* x, int n, struct zx_lu_Extension_s* z)
{
  struct zx_lu_Extension_s* y;
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
    for (; y->gg.g.n; y = (struct zx_lu_Extension_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Extension; n > 1 && y; --n, y = (struct zx_lu_Extension_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_idhrxml_NotifyResponse_DEL_Extension) */

void zx_idhrxml_NotifyResponse_DEL_Extension(struct zx_idhrxml_NotifyResponse_s* x, int n)
{
  struct zx_lu_Extension_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Extension = (struct zx_lu_Extension_s*)x->Extension->gg.g.n;
    return;
  case -1:
    y = (struct zx_lu_Extension_s*)x->Extension;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_lu_Extension_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Extension; n > 1 && y->gg.g.n; --n, y = (struct zx_lu_Extension_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif

/* FUNC(zx_idhrxml_NotifyResponse_GET_itemIDRef) */
struct zx_str* zx_idhrxml_NotifyResponse_GET_itemIDRef(struct zx_idhrxml_NotifyResponse_s* x) { return x->itemIDRef; }
/* FUNC(zx_idhrxml_NotifyResponse_PUT_itemIDRef) */
void zx_idhrxml_NotifyResponse_PUT_itemIDRef(struct zx_idhrxml_NotifyResponse_s* x, struct zx_str* y) { x->itemIDRef = y; }







#ifdef ZX_ENA_GETPUT

/* FUNC(zx_idhrxml_Query_NUM_Extension) */

int zx_idhrxml_Query_NUM_Extension(struct zx_idhrxml_Query_s* x)
{
  struct zx_lu_Extension_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Extension; y; ++n, y = (struct zx_lu_Extension_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_idhrxml_Query_GET_Extension) */

struct zx_lu_Extension_s* zx_idhrxml_Query_GET_Extension(struct zx_idhrxml_Query_s* x, int n)
{
  struct zx_lu_Extension_s* y;
  if (!x) return 0;
  for (y = x->Extension; n>=0 && y; --n, y = (struct zx_lu_Extension_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_idhrxml_Query_POP_Extension) */

struct zx_lu_Extension_s* zx_idhrxml_Query_POP_Extension(struct zx_idhrxml_Query_s* x)
{
  struct zx_lu_Extension_s* y;
  if (!x) return 0;
  y = x->Extension;
  if (y)
    x->Extension = (struct zx_lu_Extension_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_idhrxml_Query_PUSH_Extension) */

void zx_idhrxml_Query_PUSH_Extension(struct zx_idhrxml_Query_s* x, struct zx_lu_Extension_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Extension->gg.g;
  x->Extension = z;
}

/* FUNC(zx_idhrxml_Query_REV_Extension) */

void zx_idhrxml_Query_REV_Extension(struct zx_idhrxml_Query_s* x)
{
  struct zx_lu_Extension_s* nxt;
  struct zx_lu_Extension_s* y;
  if (!x) return;
  y = x->Extension;
  if (!y) return;
  x->Extension = 0;
  while (y) {
    nxt = (struct zx_lu_Extension_s*)y->gg.g.n;
    y->gg.g.n = &x->Extension->gg.g;
    x->Extension = y;
    y = nxt;
  }
}

/* FUNC(zx_idhrxml_Query_PUT_Extension) */

void zx_idhrxml_Query_PUT_Extension(struct zx_idhrxml_Query_s* x, int n, struct zx_lu_Extension_s* z)
{
  struct zx_lu_Extension_s* y;
  if (!x || !z) return;
  y = x->Extension;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Extension = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_lu_Extension_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_idhrxml_Query_ADD_Extension) */

void zx_idhrxml_Query_ADD_Extension(struct zx_idhrxml_Query_s* x, int n, struct zx_lu_Extension_s* z)
{
  struct zx_lu_Extension_s* y;
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
    for (; y->gg.g.n; y = (struct zx_lu_Extension_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Extension; n > 1 && y; --n, y = (struct zx_lu_Extension_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_idhrxml_Query_DEL_Extension) */

void zx_idhrxml_Query_DEL_Extension(struct zx_idhrxml_Query_s* x, int n)
{
  struct zx_lu_Extension_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Extension = (struct zx_lu_Extension_s*)x->Extension->gg.g.n;
    return;
  case -1:
    y = (struct zx_lu_Extension_s*)x->Extension;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_lu_Extension_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Extension; n > 1 && y->gg.g.n; --n, y = (struct zx_lu_Extension_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_idhrxml_Query_NUM_TestItem) */

int zx_idhrxml_Query_NUM_TestItem(struct zx_idhrxml_Query_s* x)
{
  struct zx_idhrxml_TestItem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->TestItem; y; ++n, y = (struct zx_idhrxml_TestItem_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_idhrxml_Query_GET_TestItem) */

struct zx_idhrxml_TestItem_s* zx_idhrxml_Query_GET_TestItem(struct zx_idhrxml_Query_s* x, int n)
{
  struct zx_idhrxml_TestItem_s* y;
  if (!x) return 0;
  for (y = x->TestItem; n>=0 && y; --n, y = (struct zx_idhrxml_TestItem_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_idhrxml_Query_POP_TestItem) */

struct zx_idhrxml_TestItem_s* zx_idhrxml_Query_POP_TestItem(struct zx_idhrxml_Query_s* x)
{
  struct zx_idhrxml_TestItem_s* y;
  if (!x) return 0;
  y = x->TestItem;
  if (y)
    x->TestItem = (struct zx_idhrxml_TestItem_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_idhrxml_Query_PUSH_TestItem) */

void zx_idhrxml_Query_PUSH_TestItem(struct zx_idhrxml_Query_s* x, struct zx_idhrxml_TestItem_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->TestItem->gg.g;
  x->TestItem = z;
}

/* FUNC(zx_idhrxml_Query_REV_TestItem) */

void zx_idhrxml_Query_REV_TestItem(struct zx_idhrxml_Query_s* x)
{
  struct zx_idhrxml_TestItem_s* nxt;
  struct zx_idhrxml_TestItem_s* y;
  if (!x) return;
  y = x->TestItem;
  if (!y) return;
  x->TestItem = 0;
  while (y) {
    nxt = (struct zx_idhrxml_TestItem_s*)y->gg.g.n;
    y->gg.g.n = &x->TestItem->gg.g;
    x->TestItem = y;
    y = nxt;
  }
}

/* FUNC(zx_idhrxml_Query_PUT_TestItem) */

void zx_idhrxml_Query_PUT_TestItem(struct zx_idhrxml_Query_s* x, int n, struct zx_idhrxml_TestItem_s* z)
{
  struct zx_idhrxml_TestItem_s* y;
  if (!x || !z) return;
  y = x->TestItem;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->TestItem = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_idhrxml_TestItem_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_idhrxml_Query_ADD_TestItem) */

void zx_idhrxml_Query_ADD_TestItem(struct zx_idhrxml_Query_s* x, int n, struct zx_idhrxml_TestItem_s* z)
{
  struct zx_idhrxml_TestItem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->TestItem->gg.g;
    x->TestItem = z;
    return;
  case -1:
    y = x->TestItem;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_idhrxml_TestItem_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->TestItem; n > 1 && y; --n, y = (struct zx_idhrxml_TestItem_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_idhrxml_Query_DEL_TestItem) */

void zx_idhrxml_Query_DEL_TestItem(struct zx_idhrxml_Query_s* x, int n)
{
  struct zx_idhrxml_TestItem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->TestItem = (struct zx_idhrxml_TestItem_s*)x->TestItem->gg.g.n;
    return;
  case -1:
    y = (struct zx_idhrxml_TestItem_s*)x->TestItem;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_idhrxml_TestItem_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->TestItem; n > 1 && y->gg.g.n; --n, y = (struct zx_idhrxml_TestItem_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_idhrxml_Query_NUM_QueryItem) */

int zx_idhrxml_Query_NUM_QueryItem(struct zx_idhrxml_Query_s* x)
{
  struct zx_idhrxml_QueryItem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->QueryItem; y; ++n, y = (struct zx_idhrxml_QueryItem_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_idhrxml_Query_GET_QueryItem) */

struct zx_idhrxml_QueryItem_s* zx_idhrxml_Query_GET_QueryItem(struct zx_idhrxml_Query_s* x, int n)
{
  struct zx_idhrxml_QueryItem_s* y;
  if (!x) return 0;
  for (y = x->QueryItem; n>=0 && y; --n, y = (struct zx_idhrxml_QueryItem_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_idhrxml_Query_POP_QueryItem) */

struct zx_idhrxml_QueryItem_s* zx_idhrxml_Query_POP_QueryItem(struct zx_idhrxml_Query_s* x)
{
  struct zx_idhrxml_QueryItem_s* y;
  if (!x) return 0;
  y = x->QueryItem;
  if (y)
    x->QueryItem = (struct zx_idhrxml_QueryItem_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_idhrxml_Query_PUSH_QueryItem) */

void zx_idhrxml_Query_PUSH_QueryItem(struct zx_idhrxml_Query_s* x, struct zx_idhrxml_QueryItem_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->QueryItem->gg.g;
  x->QueryItem = z;
}

/* FUNC(zx_idhrxml_Query_REV_QueryItem) */

void zx_idhrxml_Query_REV_QueryItem(struct zx_idhrxml_Query_s* x)
{
  struct zx_idhrxml_QueryItem_s* nxt;
  struct zx_idhrxml_QueryItem_s* y;
  if (!x) return;
  y = x->QueryItem;
  if (!y) return;
  x->QueryItem = 0;
  while (y) {
    nxt = (struct zx_idhrxml_QueryItem_s*)y->gg.g.n;
    y->gg.g.n = &x->QueryItem->gg.g;
    x->QueryItem = y;
    y = nxt;
  }
}

/* FUNC(zx_idhrxml_Query_PUT_QueryItem) */

void zx_idhrxml_Query_PUT_QueryItem(struct zx_idhrxml_Query_s* x, int n, struct zx_idhrxml_QueryItem_s* z)
{
  struct zx_idhrxml_QueryItem_s* y;
  if (!x || !z) return;
  y = x->QueryItem;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->QueryItem = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_idhrxml_QueryItem_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_idhrxml_Query_ADD_QueryItem) */

void zx_idhrxml_Query_ADD_QueryItem(struct zx_idhrxml_Query_s* x, int n, struct zx_idhrxml_QueryItem_s* z)
{
  struct zx_idhrxml_QueryItem_s* y;
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
    for (; y->gg.g.n; y = (struct zx_idhrxml_QueryItem_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->QueryItem; n > 1 && y; --n, y = (struct zx_idhrxml_QueryItem_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_idhrxml_Query_DEL_QueryItem) */

void zx_idhrxml_Query_DEL_QueryItem(struct zx_idhrxml_Query_s* x, int n)
{
  struct zx_idhrxml_QueryItem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->QueryItem = (struct zx_idhrxml_QueryItem_s*)x->QueryItem->gg.g.n;
    return;
  case -1:
    y = (struct zx_idhrxml_QueryItem_s*)x->QueryItem;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_idhrxml_QueryItem_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->QueryItem; n > 1 && y->gg.g.n; --n, y = (struct zx_idhrxml_QueryItem_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_idhrxml_Query_NUM_Subscription) */

int zx_idhrxml_Query_NUM_Subscription(struct zx_idhrxml_Query_s* x)
{
  struct zx_idhrxml_Subscription_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Subscription; y; ++n, y = (struct zx_idhrxml_Subscription_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_idhrxml_Query_GET_Subscription) */

struct zx_idhrxml_Subscription_s* zx_idhrxml_Query_GET_Subscription(struct zx_idhrxml_Query_s* x, int n)
{
  struct zx_idhrxml_Subscription_s* y;
  if (!x) return 0;
  for (y = x->Subscription; n>=0 && y; --n, y = (struct zx_idhrxml_Subscription_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_idhrxml_Query_POP_Subscription) */

struct zx_idhrxml_Subscription_s* zx_idhrxml_Query_POP_Subscription(struct zx_idhrxml_Query_s* x)
{
  struct zx_idhrxml_Subscription_s* y;
  if (!x) return 0;
  y = x->Subscription;
  if (y)
    x->Subscription = (struct zx_idhrxml_Subscription_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_idhrxml_Query_PUSH_Subscription) */

void zx_idhrxml_Query_PUSH_Subscription(struct zx_idhrxml_Query_s* x, struct zx_idhrxml_Subscription_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Subscription->gg.g;
  x->Subscription = z;
}

/* FUNC(zx_idhrxml_Query_REV_Subscription) */

void zx_idhrxml_Query_REV_Subscription(struct zx_idhrxml_Query_s* x)
{
  struct zx_idhrxml_Subscription_s* nxt;
  struct zx_idhrxml_Subscription_s* y;
  if (!x) return;
  y = x->Subscription;
  if (!y) return;
  x->Subscription = 0;
  while (y) {
    nxt = (struct zx_idhrxml_Subscription_s*)y->gg.g.n;
    y->gg.g.n = &x->Subscription->gg.g;
    x->Subscription = y;
    y = nxt;
  }
}

/* FUNC(zx_idhrxml_Query_PUT_Subscription) */

void zx_idhrxml_Query_PUT_Subscription(struct zx_idhrxml_Query_s* x, int n, struct zx_idhrxml_Subscription_s* z)
{
  struct zx_idhrxml_Subscription_s* y;
  if (!x || !z) return;
  y = x->Subscription;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Subscription = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_idhrxml_Subscription_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_idhrxml_Query_ADD_Subscription) */

void zx_idhrxml_Query_ADD_Subscription(struct zx_idhrxml_Query_s* x, int n, struct zx_idhrxml_Subscription_s* z)
{
  struct zx_idhrxml_Subscription_s* y;
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
    for (; y->gg.g.n; y = (struct zx_idhrxml_Subscription_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Subscription; n > 1 && y; --n, y = (struct zx_idhrxml_Subscription_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_idhrxml_Query_DEL_Subscription) */

void zx_idhrxml_Query_DEL_Subscription(struct zx_idhrxml_Query_s* x, int n)
{
  struct zx_idhrxml_Subscription_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Subscription = (struct zx_idhrxml_Subscription_s*)x->Subscription->gg.g.n;
    return;
  case -1:
    y = (struct zx_idhrxml_Subscription_s*)x->Subscription;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_idhrxml_Subscription_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Subscription; n > 1 && y->gg.g.n; --n, y = (struct zx_idhrxml_Subscription_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif

/* FUNC(zx_idhrxml_Query_GET_itemID) */
struct zx_str* zx_idhrxml_Query_GET_itemID(struct zx_idhrxml_Query_s* x) { return x->itemID; }
/* FUNC(zx_idhrxml_Query_PUT_itemID) */
void zx_idhrxml_Query_PUT_itemID(struct zx_idhrxml_Query_s* x, struct zx_str* y) { x->itemID = y; }







#ifdef ZX_ENA_GETPUT

/* FUNC(zx_idhrxml_QueryItem_NUM_ChangeFormat) */

int zx_idhrxml_QueryItem_NUM_ChangeFormat(struct zx_idhrxml_QueryItem_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->ChangeFormat; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_idhrxml_QueryItem_GET_ChangeFormat) */

struct zx_elem_s* zx_idhrxml_QueryItem_GET_ChangeFormat(struct zx_idhrxml_QueryItem_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->ChangeFormat; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_idhrxml_QueryItem_POP_ChangeFormat) */

struct zx_elem_s* zx_idhrxml_QueryItem_POP_ChangeFormat(struct zx_idhrxml_QueryItem_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->ChangeFormat;
  if (y)
    x->ChangeFormat = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_idhrxml_QueryItem_PUSH_ChangeFormat) */

void zx_idhrxml_QueryItem_PUSH_ChangeFormat(struct zx_idhrxml_QueryItem_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->ChangeFormat->g;
  x->ChangeFormat = z;
}

/* FUNC(zx_idhrxml_QueryItem_REV_ChangeFormat) */

void zx_idhrxml_QueryItem_REV_ChangeFormat(struct zx_idhrxml_QueryItem_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->ChangeFormat;
  if (!y) return;
  x->ChangeFormat = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->ChangeFormat->g;
    x->ChangeFormat = y;
    y = nxt;
  }
}

/* FUNC(zx_idhrxml_QueryItem_PUT_ChangeFormat) */

void zx_idhrxml_QueryItem_PUT_ChangeFormat(struct zx_idhrxml_QueryItem_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->ChangeFormat;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->ChangeFormat = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_idhrxml_QueryItem_ADD_ChangeFormat) */

void zx_idhrxml_QueryItem_ADD_ChangeFormat(struct zx_idhrxml_QueryItem_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->ChangeFormat->g;
    x->ChangeFormat = z;
    return;
  case -1:
    y = x->ChangeFormat;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->ChangeFormat; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_idhrxml_QueryItem_DEL_ChangeFormat) */

void zx_idhrxml_QueryItem_DEL_ChangeFormat(struct zx_idhrxml_QueryItem_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->ChangeFormat = (struct zx_elem_s*)x->ChangeFormat->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->ChangeFormat;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->ChangeFormat; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_idhrxml_QueryItem_NUM_Select) */

int zx_idhrxml_QueryItem_NUM_Select(struct zx_idhrxml_QueryItem_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Select; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_idhrxml_QueryItem_GET_Select) */

struct zx_elem_s* zx_idhrxml_QueryItem_GET_Select(struct zx_idhrxml_QueryItem_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->Select; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_idhrxml_QueryItem_POP_Select) */

struct zx_elem_s* zx_idhrxml_QueryItem_POP_Select(struct zx_idhrxml_QueryItem_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->Select;
  if (y)
    x->Select = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_idhrxml_QueryItem_PUSH_Select) */

void zx_idhrxml_QueryItem_PUSH_Select(struct zx_idhrxml_QueryItem_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->Select->g;
  x->Select = z;
}

/* FUNC(zx_idhrxml_QueryItem_REV_Select) */

void zx_idhrxml_QueryItem_REV_Select(struct zx_idhrxml_QueryItem_s* x)
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

/* FUNC(zx_idhrxml_QueryItem_PUT_Select) */

void zx_idhrxml_QueryItem_PUT_Select(struct zx_idhrxml_QueryItem_s* x, int n, struct zx_elem_s* z)
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

/* FUNC(zx_idhrxml_QueryItem_ADD_Select) */

void zx_idhrxml_QueryItem_ADD_Select(struct zx_idhrxml_QueryItem_s* x, int n, struct zx_elem_s* z)
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

/* FUNC(zx_idhrxml_QueryItem_DEL_Select) */

void zx_idhrxml_QueryItem_DEL_Select(struct zx_idhrxml_QueryItem_s* x, int n)
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

/* FUNC(zx_idhrxml_QueryItem_NUM_Sort) */

int zx_idhrxml_QueryItem_NUM_Sort(struct zx_idhrxml_QueryItem_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Sort; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_idhrxml_QueryItem_GET_Sort) */

struct zx_elem_s* zx_idhrxml_QueryItem_GET_Sort(struct zx_idhrxml_QueryItem_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->Sort; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_idhrxml_QueryItem_POP_Sort) */

struct zx_elem_s* zx_idhrxml_QueryItem_POP_Sort(struct zx_idhrxml_QueryItem_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->Sort;
  if (y)
    x->Sort = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_idhrxml_QueryItem_PUSH_Sort) */

void zx_idhrxml_QueryItem_PUSH_Sort(struct zx_idhrxml_QueryItem_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->Sort->g;
  x->Sort = z;
}

/* FUNC(zx_idhrxml_QueryItem_REV_Sort) */

void zx_idhrxml_QueryItem_REV_Sort(struct zx_idhrxml_QueryItem_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->Sort;
  if (!y) return;
  x->Sort = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->Sort->g;
    x->Sort = y;
    y = nxt;
  }
}

/* FUNC(zx_idhrxml_QueryItem_PUT_Sort) */

void zx_idhrxml_QueryItem_PUT_Sort(struct zx_idhrxml_QueryItem_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->Sort;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->Sort = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_idhrxml_QueryItem_ADD_Sort) */

void zx_idhrxml_QueryItem_ADD_Sort(struct zx_idhrxml_QueryItem_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->Sort->g;
    x->Sort = z;
    return;
  case -1:
    y = x->Sort;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->Sort; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_idhrxml_QueryItem_DEL_Sort) */

void zx_idhrxml_QueryItem_DEL_Sort(struct zx_idhrxml_QueryItem_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Sort = (struct zx_elem_s*)x->Sort->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->Sort;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->Sort; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

#endif

/* FUNC(zx_idhrxml_QueryItem_GET_contingency) */
struct zx_str* zx_idhrxml_QueryItem_GET_contingency(struct zx_idhrxml_QueryItem_s* x) { return x->contingency; }
/* FUNC(zx_idhrxml_QueryItem_PUT_contingency) */
void zx_idhrxml_QueryItem_PUT_contingency(struct zx_idhrxml_QueryItem_s* x, struct zx_str* y) { x->contingency = y; }
/* FUNC(zx_idhrxml_QueryItem_GET_includeCommonAttributes) */
struct zx_str* zx_idhrxml_QueryItem_GET_includeCommonAttributes(struct zx_idhrxml_QueryItem_s* x) { return x->includeCommonAttributes; }
/* FUNC(zx_idhrxml_QueryItem_PUT_includeCommonAttributes) */
void zx_idhrxml_QueryItem_PUT_includeCommonAttributes(struct zx_idhrxml_QueryItem_s* x, struct zx_str* y) { x->includeCommonAttributes = y; }
/* FUNC(zx_idhrxml_QueryItem_GET_changedSince) */
struct zx_str* zx_idhrxml_QueryItem_GET_changedSince(struct zx_idhrxml_QueryItem_s* x) { return x->changedSince; }
/* FUNC(zx_idhrxml_QueryItem_PUT_changedSince) */
void zx_idhrxml_QueryItem_PUT_changedSince(struct zx_idhrxml_QueryItem_s* x, struct zx_str* y) { x->changedSince = y; }
/* FUNC(zx_idhrxml_QueryItem_GET_count) */
struct zx_str* zx_idhrxml_QueryItem_GET_count(struct zx_idhrxml_QueryItem_s* x) { return x->count; }
/* FUNC(zx_idhrxml_QueryItem_PUT_count) */
void zx_idhrxml_QueryItem_PUT_count(struct zx_idhrxml_QueryItem_s* x, struct zx_str* y) { x->count = y; }
/* FUNC(zx_idhrxml_QueryItem_GET_offset) */
struct zx_str* zx_idhrxml_QueryItem_GET_offset(struct zx_idhrxml_QueryItem_s* x) { return x->offset; }
/* FUNC(zx_idhrxml_QueryItem_PUT_offset) */
void zx_idhrxml_QueryItem_PUT_offset(struct zx_idhrxml_QueryItem_s* x, struct zx_str* y) { x->offset = y; }
/* FUNC(zx_idhrxml_QueryItem_GET_setID) */
struct zx_str* zx_idhrxml_QueryItem_GET_setID(struct zx_idhrxml_QueryItem_s* x) { return x->setID; }
/* FUNC(zx_idhrxml_QueryItem_PUT_setID) */
void zx_idhrxml_QueryItem_PUT_setID(struct zx_idhrxml_QueryItem_s* x, struct zx_str* y) { x->setID = y; }
/* FUNC(zx_idhrxml_QueryItem_GET_setReq) */
struct zx_str* zx_idhrxml_QueryItem_GET_setReq(struct zx_idhrxml_QueryItem_s* x) { return x->setReq; }
/* FUNC(zx_idhrxml_QueryItem_PUT_setReq) */
void zx_idhrxml_QueryItem_PUT_setReq(struct zx_idhrxml_QueryItem_s* x, struct zx_str* y) { x->setReq = y; }
/* FUNC(zx_idhrxml_QueryItem_GET_objectType) */
struct zx_str* zx_idhrxml_QueryItem_GET_objectType(struct zx_idhrxml_QueryItem_s* x) { return x->objectType; }
/* FUNC(zx_idhrxml_QueryItem_PUT_objectType) */
void zx_idhrxml_QueryItem_PUT_objectType(struct zx_idhrxml_QueryItem_s* x, struct zx_str* y) { x->objectType = y; }
/* FUNC(zx_idhrxml_QueryItem_GET_predefined) */
struct zx_str* zx_idhrxml_QueryItem_GET_predefined(struct zx_idhrxml_QueryItem_s* x) { return x->predefined; }
/* FUNC(zx_idhrxml_QueryItem_PUT_predefined) */
void zx_idhrxml_QueryItem_PUT_predefined(struct zx_idhrxml_QueryItem_s* x, struct zx_str* y) { x->predefined = y; }
/* FUNC(zx_idhrxml_QueryItem_GET_itemIDRef) */
struct zx_str* zx_idhrxml_QueryItem_GET_itemIDRef(struct zx_idhrxml_QueryItem_s* x) { return x->itemIDRef; }
/* FUNC(zx_idhrxml_QueryItem_PUT_itemIDRef) */
void zx_idhrxml_QueryItem_PUT_itemIDRef(struct zx_idhrxml_QueryItem_s* x, struct zx_str* y) { x->itemIDRef = y; }
/* FUNC(zx_idhrxml_QueryItem_GET_itemID) */
struct zx_str* zx_idhrxml_QueryItem_GET_itemID(struct zx_idhrxml_QueryItem_s* x) { return x->itemID; }
/* FUNC(zx_idhrxml_QueryItem_PUT_itemID) */
void zx_idhrxml_QueryItem_PUT_itemID(struct zx_idhrxml_QueryItem_s* x, struct zx_str* y) { x->itemID = y; }







#ifdef ZX_ENA_GETPUT

/* FUNC(zx_idhrxml_QueryResponse_NUM_Status) */

int zx_idhrxml_QueryResponse_NUM_Status(struct zx_idhrxml_QueryResponse_s* x)
{
  struct zx_lu_Status_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Status; y; ++n, y = (struct zx_lu_Status_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_idhrxml_QueryResponse_GET_Status) */

struct zx_lu_Status_s* zx_idhrxml_QueryResponse_GET_Status(struct zx_idhrxml_QueryResponse_s* x, int n)
{
  struct zx_lu_Status_s* y;
  if (!x) return 0;
  for (y = x->Status; n>=0 && y; --n, y = (struct zx_lu_Status_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_idhrxml_QueryResponse_POP_Status) */

struct zx_lu_Status_s* zx_idhrxml_QueryResponse_POP_Status(struct zx_idhrxml_QueryResponse_s* x)
{
  struct zx_lu_Status_s* y;
  if (!x) return 0;
  y = x->Status;
  if (y)
    x->Status = (struct zx_lu_Status_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_idhrxml_QueryResponse_PUSH_Status) */

void zx_idhrxml_QueryResponse_PUSH_Status(struct zx_idhrxml_QueryResponse_s* x, struct zx_lu_Status_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Status->gg.g;
  x->Status = z;
}

/* FUNC(zx_idhrxml_QueryResponse_REV_Status) */

void zx_idhrxml_QueryResponse_REV_Status(struct zx_idhrxml_QueryResponse_s* x)
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

/* FUNC(zx_idhrxml_QueryResponse_PUT_Status) */

void zx_idhrxml_QueryResponse_PUT_Status(struct zx_idhrxml_QueryResponse_s* x, int n, struct zx_lu_Status_s* z)
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

/* FUNC(zx_idhrxml_QueryResponse_ADD_Status) */

void zx_idhrxml_QueryResponse_ADD_Status(struct zx_idhrxml_QueryResponse_s* x, int n, struct zx_lu_Status_s* z)
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

/* FUNC(zx_idhrxml_QueryResponse_DEL_Status) */

void zx_idhrxml_QueryResponse_DEL_Status(struct zx_idhrxml_QueryResponse_s* x, int n)
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

/* FUNC(zx_idhrxml_QueryResponse_NUM_Extension) */

int zx_idhrxml_QueryResponse_NUM_Extension(struct zx_idhrxml_QueryResponse_s* x)
{
  struct zx_lu_Extension_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Extension; y; ++n, y = (struct zx_lu_Extension_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_idhrxml_QueryResponse_GET_Extension) */

struct zx_lu_Extension_s* zx_idhrxml_QueryResponse_GET_Extension(struct zx_idhrxml_QueryResponse_s* x, int n)
{
  struct zx_lu_Extension_s* y;
  if (!x) return 0;
  for (y = x->Extension; n>=0 && y; --n, y = (struct zx_lu_Extension_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_idhrxml_QueryResponse_POP_Extension) */

struct zx_lu_Extension_s* zx_idhrxml_QueryResponse_POP_Extension(struct zx_idhrxml_QueryResponse_s* x)
{
  struct zx_lu_Extension_s* y;
  if (!x) return 0;
  y = x->Extension;
  if (y)
    x->Extension = (struct zx_lu_Extension_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_idhrxml_QueryResponse_PUSH_Extension) */

void zx_idhrxml_QueryResponse_PUSH_Extension(struct zx_idhrxml_QueryResponse_s* x, struct zx_lu_Extension_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Extension->gg.g;
  x->Extension = z;
}

/* FUNC(zx_idhrxml_QueryResponse_REV_Extension) */

void zx_idhrxml_QueryResponse_REV_Extension(struct zx_idhrxml_QueryResponse_s* x)
{
  struct zx_lu_Extension_s* nxt;
  struct zx_lu_Extension_s* y;
  if (!x) return;
  y = x->Extension;
  if (!y) return;
  x->Extension = 0;
  while (y) {
    nxt = (struct zx_lu_Extension_s*)y->gg.g.n;
    y->gg.g.n = &x->Extension->gg.g;
    x->Extension = y;
    y = nxt;
  }
}

/* FUNC(zx_idhrxml_QueryResponse_PUT_Extension) */

void zx_idhrxml_QueryResponse_PUT_Extension(struct zx_idhrxml_QueryResponse_s* x, int n, struct zx_lu_Extension_s* z)
{
  struct zx_lu_Extension_s* y;
  if (!x || !z) return;
  y = x->Extension;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Extension = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_lu_Extension_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_idhrxml_QueryResponse_ADD_Extension) */

void zx_idhrxml_QueryResponse_ADD_Extension(struct zx_idhrxml_QueryResponse_s* x, int n, struct zx_lu_Extension_s* z)
{
  struct zx_lu_Extension_s* y;
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
    for (; y->gg.g.n; y = (struct zx_lu_Extension_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Extension; n > 1 && y; --n, y = (struct zx_lu_Extension_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_idhrxml_QueryResponse_DEL_Extension) */

void zx_idhrxml_QueryResponse_DEL_Extension(struct zx_idhrxml_QueryResponse_s* x, int n)
{
  struct zx_lu_Extension_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Extension = (struct zx_lu_Extension_s*)x->Extension->gg.g.n;
    return;
  case -1:
    y = (struct zx_lu_Extension_s*)x->Extension;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_lu_Extension_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Extension; n > 1 && y->gg.g.n; --n, y = (struct zx_lu_Extension_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_idhrxml_QueryResponse_NUM_TestResult) */

int zx_idhrxml_QueryResponse_NUM_TestResult(struct zx_idhrxml_QueryResponse_s* x)
{
  struct zx_dst_TestResult_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->TestResult; y; ++n, y = (struct zx_dst_TestResult_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_idhrxml_QueryResponse_GET_TestResult) */

struct zx_dst_TestResult_s* zx_idhrxml_QueryResponse_GET_TestResult(struct zx_idhrxml_QueryResponse_s* x, int n)
{
  struct zx_dst_TestResult_s* y;
  if (!x) return 0;
  for (y = x->TestResult; n>=0 && y; --n, y = (struct zx_dst_TestResult_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_idhrxml_QueryResponse_POP_TestResult) */

struct zx_dst_TestResult_s* zx_idhrxml_QueryResponse_POP_TestResult(struct zx_idhrxml_QueryResponse_s* x)
{
  struct zx_dst_TestResult_s* y;
  if (!x) return 0;
  y = x->TestResult;
  if (y)
    x->TestResult = (struct zx_dst_TestResult_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_idhrxml_QueryResponse_PUSH_TestResult) */

void zx_idhrxml_QueryResponse_PUSH_TestResult(struct zx_idhrxml_QueryResponse_s* x, struct zx_dst_TestResult_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->TestResult->gg.g;
  x->TestResult = z;
}

/* FUNC(zx_idhrxml_QueryResponse_REV_TestResult) */

void zx_idhrxml_QueryResponse_REV_TestResult(struct zx_idhrxml_QueryResponse_s* x)
{
  struct zx_dst_TestResult_s* nxt;
  struct zx_dst_TestResult_s* y;
  if (!x) return;
  y = x->TestResult;
  if (!y) return;
  x->TestResult = 0;
  while (y) {
    nxt = (struct zx_dst_TestResult_s*)y->gg.g.n;
    y->gg.g.n = &x->TestResult->gg.g;
    x->TestResult = y;
    y = nxt;
  }
}

/* FUNC(zx_idhrxml_QueryResponse_PUT_TestResult) */

void zx_idhrxml_QueryResponse_PUT_TestResult(struct zx_idhrxml_QueryResponse_s* x, int n, struct zx_dst_TestResult_s* z)
{
  struct zx_dst_TestResult_s* y;
  if (!x || !z) return;
  y = x->TestResult;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->TestResult = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_dst_TestResult_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_idhrxml_QueryResponse_ADD_TestResult) */

void zx_idhrxml_QueryResponse_ADD_TestResult(struct zx_idhrxml_QueryResponse_s* x, int n, struct zx_dst_TestResult_s* z)
{
  struct zx_dst_TestResult_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->TestResult->gg.g;
    x->TestResult = z;
    return;
  case -1:
    y = x->TestResult;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_dst_TestResult_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->TestResult; n > 1 && y; --n, y = (struct zx_dst_TestResult_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_idhrxml_QueryResponse_DEL_TestResult) */

void zx_idhrxml_QueryResponse_DEL_TestResult(struct zx_idhrxml_QueryResponse_s* x, int n)
{
  struct zx_dst_TestResult_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->TestResult = (struct zx_dst_TestResult_s*)x->TestResult->gg.g.n;
    return;
  case -1:
    y = (struct zx_dst_TestResult_s*)x->TestResult;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_dst_TestResult_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->TestResult; n > 1 && y->gg.g.n; --n, y = (struct zx_dst_TestResult_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_idhrxml_QueryResponse_NUM_Data) */

int zx_idhrxml_QueryResponse_NUM_Data(struct zx_idhrxml_QueryResponse_s* x)
{
  struct zx_idhrxml_Data_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Data; y; ++n, y = (struct zx_idhrxml_Data_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_idhrxml_QueryResponse_GET_Data) */

struct zx_idhrxml_Data_s* zx_idhrxml_QueryResponse_GET_Data(struct zx_idhrxml_QueryResponse_s* x, int n)
{
  struct zx_idhrxml_Data_s* y;
  if (!x) return 0;
  for (y = x->Data; n>=0 && y; --n, y = (struct zx_idhrxml_Data_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_idhrxml_QueryResponse_POP_Data) */

struct zx_idhrxml_Data_s* zx_idhrxml_QueryResponse_POP_Data(struct zx_idhrxml_QueryResponse_s* x)
{
  struct zx_idhrxml_Data_s* y;
  if (!x) return 0;
  y = x->Data;
  if (y)
    x->Data = (struct zx_idhrxml_Data_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_idhrxml_QueryResponse_PUSH_Data) */

void zx_idhrxml_QueryResponse_PUSH_Data(struct zx_idhrxml_QueryResponse_s* x, struct zx_idhrxml_Data_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Data->gg.g;
  x->Data = z;
}

/* FUNC(zx_idhrxml_QueryResponse_REV_Data) */

void zx_idhrxml_QueryResponse_REV_Data(struct zx_idhrxml_QueryResponse_s* x)
{
  struct zx_idhrxml_Data_s* nxt;
  struct zx_idhrxml_Data_s* y;
  if (!x) return;
  y = x->Data;
  if (!y) return;
  x->Data = 0;
  while (y) {
    nxt = (struct zx_idhrxml_Data_s*)y->gg.g.n;
    y->gg.g.n = &x->Data->gg.g;
    x->Data = y;
    y = nxt;
  }
}

/* FUNC(zx_idhrxml_QueryResponse_PUT_Data) */

void zx_idhrxml_QueryResponse_PUT_Data(struct zx_idhrxml_QueryResponse_s* x, int n, struct zx_idhrxml_Data_s* z)
{
  struct zx_idhrxml_Data_s* y;
  if (!x || !z) return;
  y = x->Data;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Data = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_idhrxml_Data_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_idhrxml_QueryResponse_ADD_Data) */

void zx_idhrxml_QueryResponse_ADD_Data(struct zx_idhrxml_QueryResponse_s* x, int n, struct zx_idhrxml_Data_s* z)
{
  struct zx_idhrxml_Data_s* y;
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
    for (; y->gg.g.n; y = (struct zx_idhrxml_Data_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Data; n > 1 && y; --n, y = (struct zx_idhrxml_Data_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_idhrxml_QueryResponse_DEL_Data) */

void zx_idhrxml_QueryResponse_DEL_Data(struct zx_idhrxml_QueryResponse_s* x, int n)
{
  struct zx_idhrxml_Data_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Data = (struct zx_idhrxml_Data_s*)x->Data->gg.g.n;
    return;
  case -1:
    y = (struct zx_idhrxml_Data_s*)x->Data;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_idhrxml_Data_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Data; n > 1 && y->gg.g.n; --n, y = (struct zx_idhrxml_Data_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif

/* FUNC(zx_idhrxml_QueryResponse_GET_timeStamp) */
struct zx_str* zx_idhrxml_QueryResponse_GET_timeStamp(struct zx_idhrxml_QueryResponse_s* x) { return x->timeStamp; }
/* FUNC(zx_idhrxml_QueryResponse_PUT_timeStamp) */
void zx_idhrxml_QueryResponse_PUT_timeStamp(struct zx_idhrxml_QueryResponse_s* x, struct zx_str* y) { x->timeStamp = y; }
/* FUNC(zx_idhrxml_QueryResponse_GET_itemIDRef) */
struct zx_str* zx_idhrxml_QueryResponse_GET_itemIDRef(struct zx_idhrxml_QueryResponse_s* x) { return x->itemIDRef; }
/* FUNC(zx_idhrxml_QueryResponse_PUT_itemIDRef) */
void zx_idhrxml_QueryResponse_PUT_itemIDRef(struct zx_idhrxml_QueryResponse_s* x, struct zx_str* y) { x->itemIDRef = y; }







#ifdef ZX_ENA_GETPUT

/* FUNC(zx_idhrxml_ResultQuery_NUM_ChangeFormat) */

int zx_idhrxml_ResultQuery_NUM_ChangeFormat(struct zx_idhrxml_ResultQuery_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->ChangeFormat; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_idhrxml_ResultQuery_GET_ChangeFormat) */

struct zx_elem_s* zx_idhrxml_ResultQuery_GET_ChangeFormat(struct zx_idhrxml_ResultQuery_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->ChangeFormat; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_idhrxml_ResultQuery_POP_ChangeFormat) */

struct zx_elem_s* zx_idhrxml_ResultQuery_POP_ChangeFormat(struct zx_idhrxml_ResultQuery_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->ChangeFormat;
  if (y)
    x->ChangeFormat = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_idhrxml_ResultQuery_PUSH_ChangeFormat) */

void zx_idhrxml_ResultQuery_PUSH_ChangeFormat(struct zx_idhrxml_ResultQuery_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->ChangeFormat->g;
  x->ChangeFormat = z;
}

/* FUNC(zx_idhrxml_ResultQuery_REV_ChangeFormat) */

void zx_idhrxml_ResultQuery_REV_ChangeFormat(struct zx_idhrxml_ResultQuery_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->ChangeFormat;
  if (!y) return;
  x->ChangeFormat = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->ChangeFormat->g;
    x->ChangeFormat = y;
    y = nxt;
  }
}

/* FUNC(zx_idhrxml_ResultQuery_PUT_ChangeFormat) */

void zx_idhrxml_ResultQuery_PUT_ChangeFormat(struct zx_idhrxml_ResultQuery_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->ChangeFormat;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->ChangeFormat = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_idhrxml_ResultQuery_ADD_ChangeFormat) */

void zx_idhrxml_ResultQuery_ADD_ChangeFormat(struct zx_idhrxml_ResultQuery_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->ChangeFormat->g;
    x->ChangeFormat = z;
    return;
  case -1:
    y = x->ChangeFormat;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->ChangeFormat; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_idhrxml_ResultQuery_DEL_ChangeFormat) */

void zx_idhrxml_ResultQuery_DEL_ChangeFormat(struct zx_idhrxml_ResultQuery_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->ChangeFormat = (struct zx_elem_s*)x->ChangeFormat->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->ChangeFormat;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->ChangeFormat; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_idhrxml_ResultQuery_NUM_Select) */

int zx_idhrxml_ResultQuery_NUM_Select(struct zx_idhrxml_ResultQuery_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Select; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_idhrxml_ResultQuery_GET_Select) */

struct zx_elem_s* zx_idhrxml_ResultQuery_GET_Select(struct zx_idhrxml_ResultQuery_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->Select; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_idhrxml_ResultQuery_POP_Select) */

struct zx_elem_s* zx_idhrxml_ResultQuery_POP_Select(struct zx_idhrxml_ResultQuery_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->Select;
  if (y)
    x->Select = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_idhrxml_ResultQuery_PUSH_Select) */

void zx_idhrxml_ResultQuery_PUSH_Select(struct zx_idhrxml_ResultQuery_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->Select->g;
  x->Select = z;
}

/* FUNC(zx_idhrxml_ResultQuery_REV_Select) */

void zx_idhrxml_ResultQuery_REV_Select(struct zx_idhrxml_ResultQuery_s* x)
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

/* FUNC(zx_idhrxml_ResultQuery_PUT_Select) */

void zx_idhrxml_ResultQuery_PUT_Select(struct zx_idhrxml_ResultQuery_s* x, int n, struct zx_elem_s* z)
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

/* FUNC(zx_idhrxml_ResultQuery_ADD_Select) */

void zx_idhrxml_ResultQuery_ADD_Select(struct zx_idhrxml_ResultQuery_s* x, int n, struct zx_elem_s* z)
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

/* FUNC(zx_idhrxml_ResultQuery_DEL_Select) */

void zx_idhrxml_ResultQuery_DEL_Select(struct zx_idhrxml_ResultQuery_s* x, int n)
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

/* FUNC(zx_idhrxml_ResultQuery_NUM_Sort) */

int zx_idhrxml_ResultQuery_NUM_Sort(struct zx_idhrxml_ResultQuery_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Sort; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_idhrxml_ResultQuery_GET_Sort) */

struct zx_elem_s* zx_idhrxml_ResultQuery_GET_Sort(struct zx_idhrxml_ResultQuery_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->Sort; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_idhrxml_ResultQuery_POP_Sort) */

struct zx_elem_s* zx_idhrxml_ResultQuery_POP_Sort(struct zx_idhrxml_ResultQuery_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->Sort;
  if (y)
    x->Sort = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_idhrxml_ResultQuery_PUSH_Sort) */

void zx_idhrxml_ResultQuery_PUSH_Sort(struct zx_idhrxml_ResultQuery_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->Sort->g;
  x->Sort = z;
}

/* FUNC(zx_idhrxml_ResultQuery_REV_Sort) */

void zx_idhrxml_ResultQuery_REV_Sort(struct zx_idhrxml_ResultQuery_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->Sort;
  if (!y) return;
  x->Sort = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->Sort->g;
    x->Sort = y;
    y = nxt;
  }
}

/* FUNC(zx_idhrxml_ResultQuery_PUT_Sort) */

void zx_idhrxml_ResultQuery_PUT_Sort(struct zx_idhrxml_ResultQuery_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->Sort;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->Sort = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_idhrxml_ResultQuery_ADD_Sort) */

void zx_idhrxml_ResultQuery_ADD_Sort(struct zx_idhrxml_ResultQuery_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->Sort->g;
    x->Sort = z;
    return;
  case -1:
    y = x->Sort;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->Sort; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_idhrxml_ResultQuery_DEL_Sort) */

void zx_idhrxml_ResultQuery_DEL_Sort(struct zx_idhrxml_ResultQuery_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Sort = (struct zx_elem_s*)x->Sort->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->Sort;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->Sort; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

#endif

/* FUNC(zx_idhrxml_ResultQuery_GET_contingency) */
struct zx_str* zx_idhrxml_ResultQuery_GET_contingency(struct zx_idhrxml_ResultQuery_s* x) { return x->contingency; }
/* FUNC(zx_idhrxml_ResultQuery_PUT_contingency) */
void zx_idhrxml_ResultQuery_PUT_contingency(struct zx_idhrxml_ResultQuery_s* x, struct zx_str* y) { x->contingency = y; }
/* FUNC(zx_idhrxml_ResultQuery_GET_includeCommonAttributes) */
struct zx_str* zx_idhrxml_ResultQuery_GET_includeCommonAttributes(struct zx_idhrxml_ResultQuery_s* x) { return x->includeCommonAttributes; }
/* FUNC(zx_idhrxml_ResultQuery_PUT_includeCommonAttributes) */
void zx_idhrxml_ResultQuery_PUT_includeCommonAttributes(struct zx_idhrxml_ResultQuery_s* x, struct zx_str* y) { x->includeCommonAttributes = y; }
/* FUNC(zx_idhrxml_ResultQuery_GET_changedSince) */
struct zx_str* zx_idhrxml_ResultQuery_GET_changedSince(struct zx_idhrxml_ResultQuery_s* x) { return x->changedSince; }
/* FUNC(zx_idhrxml_ResultQuery_PUT_changedSince) */
void zx_idhrxml_ResultQuery_PUT_changedSince(struct zx_idhrxml_ResultQuery_s* x, struct zx_str* y) { x->changedSince = y; }
/* FUNC(zx_idhrxml_ResultQuery_GET_objectType) */
struct zx_str* zx_idhrxml_ResultQuery_GET_objectType(struct zx_idhrxml_ResultQuery_s* x) { return x->objectType; }
/* FUNC(zx_idhrxml_ResultQuery_PUT_objectType) */
void zx_idhrxml_ResultQuery_PUT_objectType(struct zx_idhrxml_ResultQuery_s* x, struct zx_str* y) { x->objectType = y; }
/* FUNC(zx_idhrxml_ResultQuery_GET_predefined) */
struct zx_str* zx_idhrxml_ResultQuery_GET_predefined(struct zx_idhrxml_ResultQuery_s* x) { return x->predefined; }
/* FUNC(zx_idhrxml_ResultQuery_PUT_predefined) */
void zx_idhrxml_ResultQuery_PUT_predefined(struct zx_idhrxml_ResultQuery_s* x, struct zx_str* y) { x->predefined = y; }
/* FUNC(zx_idhrxml_ResultQuery_GET_itemIDRef) */
struct zx_str* zx_idhrxml_ResultQuery_GET_itemIDRef(struct zx_idhrxml_ResultQuery_s* x) { return x->itemIDRef; }
/* FUNC(zx_idhrxml_ResultQuery_PUT_itemIDRef) */
void zx_idhrxml_ResultQuery_PUT_itemIDRef(struct zx_idhrxml_ResultQuery_s* x, struct zx_str* y) { x->itemIDRef = y; }
/* FUNC(zx_idhrxml_ResultQuery_GET_itemID) */
struct zx_str* zx_idhrxml_ResultQuery_GET_itemID(struct zx_idhrxml_ResultQuery_s* x) { return x->itemID; }
/* FUNC(zx_idhrxml_ResultQuery_PUT_itemID) */
void zx_idhrxml_ResultQuery_PUT_itemID(struct zx_idhrxml_ResultQuery_s* x, struct zx_str* y) { x->itemID = y; }







#ifdef ZX_ENA_GETPUT

/* FUNC(zx_idhrxml_Subscription_NUM_RefItem) */

int zx_idhrxml_Subscription_NUM_RefItem(struct zx_idhrxml_Subscription_s* x)
{
  struct zx_subs_RefItem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->RefItem; y; ++n, y = (struct zx_subs_RefItem_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_idhrxml_Subscription_GET_RefItem) */

struct zx_subs_RefItem_s* zx_idhrxml_Subscription_GET_RefItem(struct zx_idhrxml_Subscription_s* x, int n)
{
  struct zx_subs_RefItem_s* y;
  if (!x) return 0;
  for (y = x->RefItem; n>=0 && y; --n, y = (struct zx_subs_RefItem_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_idhrxml_Subscription_POP_RefItem) */

struct zx_subs_RefItem_s* zx_idhrxml_Subscription_POP_RefItem(struct zx_idhrxml_Subscription_s* x)
{
  struct zx_subs_RefItem_s* y;
  if (!x) return 0;
  y = x->RefItem;
  if (y)
    x->RefItem = (struct zx_subs_RefItem_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_idhrxml_Subscription_PUSH_RefItem) */

void zx_idhrxml_Subscription_PUSH_RefItem(struct zx_idhrxml_Subscription_s* x, struct zx_subs_RefItem_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->RefItem->gg.g;
  x->RefItem = z;
}

/* FUNC(zx_idhrxml_Subscription_REV_RefItem) */

void zx_idhrxml_Subscription_REV_RefItem(struct zx_idhrxml_Subscription_s* x)
{
  struct zx_subs_RefItem_s* nxt;
  struct zx_subs_RefItem_s* y;
  if (!x) return;
  y = x->RefItem;
  if (!y) return;
  x->RefItem = 0;
  while (y) {
    nxt = (struct zx_subs_RefItem_s*)y->gg.g.n;
    y->gg.g.n = &x->RefItem->gg.g;
    x->RefItem = y;
    y = nxt;
  }
}

/* FUNC(zx_idhrxml_Subscription_PUT_RefItem) */

void zx_idhrxml_Subscription_PUT_RefItem(struct zx_idhrxml_Subscription_s* x, int n, struct zx_subs_RefItem_s* z)
{
  struct zx_subs_RefItem_s* y;
  if (!x || !z) return;
  y = x->RefItem;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->RefItem = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_subs_RefItem_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_idhrxml_Subscription_ADD_RefItem) */

void zx_idhrxml_Subscription_ADD_RefItem(struct zx_idhrxml_Subscription_s* x, int n, struct zx_subs_RefItem_s* z)
{
  struct zx_subs_RefItem_s* y;
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
    for (; y->gg.g.n; y = (struct zx_subs_RefItem_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->RefItem; n > 1 && y; --n, y = (struct zx_subs_RefItem_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_idhrxml_Subscription_DEL_RefItem) */

void zx_idhrxml_Subscription_DEL_RefItem(struct zx_idhrxml_Subscription_s* x, int n)
{
  struct zx_subs_RefItem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->RefItem = (struct zx_subs_RefItem_s*)x->RefItem->gg.g.n;
    return;
  case -1:
    y = (struct zx_subs_RefItem_s*)x->RefItem;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_subs_RefItem_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->RefItem; n > 1 && y->gg.g.n; --n, y = (struct zx_subs_RefItem_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_idhrxml_Subscription_NUM_Extension) */

int zx_idhrxml_Subscription_NUM_Extension(struct zx_idhrxml_Subscription_s* x)
{
  struct zx_lu_Extension_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Extension; y; ++n, y = (struct zx_lu_Extension_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_idhrxml_Subscription_GET_Extension) */

struct zx_lu_Extension_s* zx_idhrxml_Subscription_GET_Extension(struct zx_idhrxml_Subscription_s* x, int n)
{
  struct zx_lu_Extension_s* y;
  if (!x) return 0;
  for (y = x->Extension; n>=0 && y; --n, y = (struct zx_lu_Extension_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_idhrxml_Subscription_POP_Extension) */

struct zx_lu_Extension_s* zx_idhrxml_Subscription_POP_Extension(struct zx_idhrxml_Subscription_s* x)
{
  struct zx_lu_Extension_s* y;
  if (!x) return 0;
  y = x->Extension;
  if (y)
    x->Extension = (struct zx_lu_Extension_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_idhrxml_Subscription_PUSH_Extension) */

void zx_idhrxml_Subscription_PUSH_Extension(struct zx_idhrxml_Subscription_s* x, struct zx_lu_Extension_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Extension->gg.g;
  x->Extension = z;
}

/* FUNC(zx_idhrxml_Subscription_REV_Extension) */

void zx_idhrxml_Subscription_REV_Extension(struct zx_idhrxml_Subscription_s* x)
{
  struct zx_lu_Extension_s* nxt;
  struct zx_lu_Extension_s* y;
  if (!x) return;
  y = x->Extension;
  if (!y) return;
  x->Extension = 0;
  while (y) {
    nxt = (struct zx_lu_Extension_s*)y->gg.g.n;
    y->gg.g.n = &x->Extension->gg.g;
    x->Extension = y;
    y = nxt;
  }
}

/* FUNC(zx_idhrxml_Subscription_PUT_Extension) */

void zx_idhrxml_Subscription_PUT_Extension(struct zx_idhrxml_Subscription_s* x, int n, struct zx_lu_Extension_s* z)
{
  struct zx_lu_Extension_s* y;
  if (!x || !z) return;
  y = x->Extension;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Extension = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_lu_Extension_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_idhrxml_Subscription_ADD_Extension) */

void zx_idhrxml_Subscription_ADD_Extension(struct zx_idhrxml_Subscription_s* x, int n, struct zx_lu_Extension_s* z)
{
  struct zx_lu_Extension_s* y;
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
    for (; y->gg.g.n; y = (struct zx_lu_Extension_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Extension; n > 1 && y; --n, y = (struct zx_lu_Extension_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_idhrxml_Subscription_DEL_Extension) */

void zx_idhrxml_Subscription_DEL_Extension(struct zx_idhrxml_Subscription_s* x, int n)
{
  struct zx_lu_Extension_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Extension = (struct zx_lu_Extension_s*)x->Extension->gg.g.n;
    return;
  case -1:
    y = (struct zx_lu_Extension_s*)x->Extension;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_lu_Extension_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Extension; n > 1 && y->gg.g.n; --n, y = (struct zx_lu_Extension_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_idhrxml_Subscription_NUM_ResultQuery) */

int zx_idhrxml_Subscription_NUM_ResultQuery(struct zx_idhrxml_Subscription_s* x)
{
  struct zx_idhrxml_ResultQuery_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->ResultQuery; y; ++n, y = (struct zx_idhrxml_ResultQuery_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_idhrxml_Subscription_GET_ResultQuery) */

struct zx_idhrxml_ResultQuery_s* zx_idhrxml_Subscription_GET_ResultQuery(struct zx_idhrxml_Subscription_s* x, int n)
{
  struct zx_idhrxml_ResultQuery_s* y;
  if (!x) return 0;
  for (y = x->ResultQuery; n>=0 && y; --n, y = (struct zx_idhrxml_ResultQuery_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_idhrxml_Subscription_POP_ResultQuery) */

struct zx_idhrxml_ResultQuery_s* zx_idhrxml_Subscription_POP_ResultQuery(struct zx_idhrxml_Subscription_s* x)
{
  struct zx_idhrxml_ResultQuery_s* y;
  if (!x) return 0;
  y = x->ResultQuery;
  if (y)
    x->ResultQuery = (struct zx_idhrxml_ResultQuery_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_idhrxml_Subscription_PUSH_ResultQuery) */

void zx_idhrxml_Subscription_PUSH_ResultQuery(struct zx_idhrxml_Subscription_s* x, struct zx_idhrxml_ResultQuery_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->ResultQuery->gg.g;
  x->ResultQuery = z;
}

/* FUNC(zx_idhrxml_Subscription_REV_ResultQuery) */

void zx_idhrxml_Subscription_REV_ResultQuery(struct zx_idhrxml_Subscription_s* x)
{
  struct zx_idhrxml_ResultQuery_s* nxt;
  struct zx_idhrxml_ResultQuery_s* y;
  if (!x) return;
  y = x->ResultQuery;
  if (!y) return;
  x->ResultQuery = 0;
  while (y) {
    nxt = (struct zx_idhrxml_ResultQuery_s*)y->gg.g.n;
    y->gg.g.n = &x->ResultQuery->gg.g;
    x->ResultQuery = y;
    y = nxt;
  }
}

/* FUNC(zx_idhrxml_Subscription_PUT_ResultQuery) */

void zx_idhrxml_Subscription_PUT_ResultQuery(struct zx_idhrxml_Subscription_s* x, int n, struct zx_idhrxml_ResultQuery_s* z)
{
  struct zx_idhrxml_ResultQuery_s* y;
  if (!x || !z) return;
  y = x->ResultQuery;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->ResultQuery = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_idhrxml_ResultQuery_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_idhrxml_Subscription_ADD_ResultQuery) */

void zx_idhrxml_Subscription_ADD_ResultQuery(struct zx_idhrxml_Subscription_s* x, int n, struct zx_idhrxml_ResultQuery_s* z)
{
  struct zx_idhrxml_ResultQuery_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->ResultQuery->gg.g;
    x->ResultQuery = z;
    return;
  case -1:
    y = x->ResultQuery;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_idhrxml_ResultQuery_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->ResultQuery; n > 1 && y; --n, y = (struct zx_idhrxml_ResultQuery_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_idhrxml_Subscription_DEL_ResultQuery) */

void zx_idhrxml_Subscription_DEL_ResultQuery(struct zx_idhrxml_Subscription_s* x, int n)
{
  struct zx_idhrxml_ResultQuery_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->ResultQuery = (struct zx_idhrxml_ResultQuery_s*)x->ResultQuery->gg.g.n;
    return;
  case -1:
    y = (struct zx_idhrxml_ResultQuery_s*)x->ResultQuery;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_idhrxml_ResultQuery_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->ResultQuery; n > 1 && y->gg.g.n; --n, y = (struct zx_idhrxml_ResultQuery_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_idhrxml_Subscription_NUM_Aggregation) */

int zx_idhrxml_Subscription_NUM_Aggregation(struct zx_idhrxml_Subscription_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Aggregation; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_idhrxml_Subscription_GET_Aggregation) */

struct zx_elem_s* zx_idhrxml_Subscription_GET_Aggregation(struct zx_idhrxml_Subscription_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->Aggregation; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_idhrxml_Subscription_POP_Aggregation) */

struct zx_elem_s* zx_idhrxml_Subscription_POP_Aggregation(struct zx_idhrxml_Subscription_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->Aggregation;
  if (y)
    x->Aggregation = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_idhrxml_Subscription_PUSH_Aggregation) */

void zx_idhrxml_Subscription_PUSH_Aggregation(struct zx_idhrxml_Subscription_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->Aggregation->g;
  x->Aggregation = z;
}

/* FUNC(zx_idhrxml_Subscription_REV_Aggregation) */

void zx_idhrxml_Subscription_REV_Aggregation(struct zx_idhrxml_Subscription_s* x)
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

/* FUNC(zx_idhrxml_Subscription_PUT_Aggregation) */

void zx_idhrxml_Subscription_PUT_Aggregation(struct zx_idhrxml_Subscription_s* x, int n, struct zx_elem_s* z)
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

/* FUNC(zx_idhrxml_Subscription_ADD_Aggregation) */

void zx_idhrxml_Subscription_ADD_Aggregation(struct zx_idhrxml_Subscription_s* x, int n, struct zx_elem_s* z)
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

/* FUNC(zx_idhrxml_Subscription_DEL_Aggregation) */

void zx_idhrxml_Subscription_DEL_Aggregation(struct zx_idhrxml_Subscription_s* x, int n)
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

/* FUNC(zx_idhrxml_Subscription_NUM_Trigger) */

int zx_idhrxml_Subscription_NUM_Trigger(struct zx_idhrxml_Subscription_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Trigger; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_idhrxml_Subscription_GET_Trigger) */

struct zx_elem_s* zx_idhrxml_Subscription_GET_Trigger(struct zx_idhrxml_Subscription_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->Trigger; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_idhrxml_Subscription_POP_Trigger) */

struct zx_elem_s* zx_idhrxml_Subscription_POP_Trigger(struct zx_idhrxml_Subscription_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->Trigger;
  if (y)
    x->Trigger = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_idhrxml_Subscription_PUSH_Trigger) */

void zx_idhrxml_Subscription_PUSH_Trigger(struct zx_idhrxml_Subscription_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->Trigger->g;
  x->Trigger = z;
}

/* FUNC(zx_idhrxml_Subscription_REV_Trigger) */

void zx_idhrxml_Subscription_REV_Trigger(struct zx_idhrxml_Subscription_s* x)
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

/* FUNC(zx_idhrxml_Subscription_PUT_Trigger) */

void zx_idhrxml_Subscription_PUT_Trigger(struct zx_idhrxml_Subscription_s* x, int n, struct zx_elem_s* z)
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

/* FUNC(zx_idhrxml_Subscription_ADD_Trigger) */

void zx_idhrxml_Subscription_ADD_Trigger(struct zx_idhrxml_Subscription_s* x, int n, struct zx_elem_s* z)
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

/* FUNC(zx_idhrxml_Subscription_DEL_Trigger) */

void zx_idhrxml_Subscription_DEL_Trigger(struct zx_idhrxml_Subscription_s* x, int n)
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

/* FUNC(zx_idhrxml_Subscription_GET_subscriptionID) */
struct zx_str* zx_idhrxml_Subscription_GET_subscriptionID(struct zx_idhrxml_Subscription_s* x) { return x->subscriptionID; }
/* FUNC(zx_idhrxml_Subscription_PUT_subscriptionID) */
void zx_idhrxml_Subscription_PUT_subscriptionID(struct zx_idhrxml_Subscription_s* x, struct zx_str* y) { x->subscriptionID = y; }
/* FUNC(zx_idhrxml_Subscription_GET_notifyToRef) */
struct zx_str* zx_idhrxml_Subscription_GET_notifyToRef(struct zx_idhrxml_Subscription_s* x) { return x->notifyToRef; }
/* FUNC(zx_idhrxml_Subscription_PUT_notifyToRef) */
void zx_idhrxml_Subscription_PUT_notifyToRef(struct zx_idhrxml_Subscription_s* x, struct zx_str* y) { x->notifyToRef = y; }
/* FUNC(zx_idhrxml_Subscription_GET_adminNotifyToRef) */
struct zx_str* zx_idhrxml_Subscription_GET_adminNotifyToRef(struct zx_idhrxml_Subscription_s* x) { return x->adminNotifyToRef; }
/* FUNC(zx_idhrxml_Subscription_PUT_adminNotifyToRef) */
void zx_idhrxml_Subscription_PUT_adminNotifyToRef(struct zx_idhrxml_Subscription_s* x, struct zx_str* y) { x->adminNotifyToRef = y; }
/* FUNC(zx_idhrxml_Subscription_GET_starts) */
struct zx_str* zx_idhrxml_Subscription_GET_starts(struct zx_idhrxml_Subscription_s* x) { return x->starts; }
/* FUNC(zx_idhrxml_Subscription_PUT_starts) */
void zx_idhrxml_Subscription_PUT_starts(struct zx_idhrxml_Subscription_s* x, struct zx_str* y) { x->starts = y; }
/* FUNC(zx_idhrxml_Subscription_GET_expires) */
struct zx_str* zx_idhrxml_Subscription_GET_expires(struct zx_idhrxml_Subscription_s* x) { return x->expires; }
/* FUNC(zx_idhrxml_Subscription_PUT_expires) */
void zx_idhrxml_Subscription_PUT_expires(struct zx_idhrxml_Subscription_s* x, struct zx_str* y) { x->expires = y; }
/* FUNC(zx_idhrxml_Subscription_GET_id) */
struct zx_str* zx_idhrxml_Subscription_GET_id(struct zx_idhrxml_Subscription_s* x) { return x->id; }
/* FUNC(zx_idhrxml_Subscription_PUT_id) */
void zx_idhrxml_Subscription_PUT_id(struct zx_idhrxml_Subscription_s* x, struct zx_str* y) { x->id = y; }
/* FUNC(zx_idhrxml_Subscription_GET_includeData) */
struct zx_str* zx_idhrxml_Subscription_GET_includeData(struct zx_idhrxml_Subscription_s* x) { return x->includeData; }
/* FUNC(zx_idhrxml_Subscription_PUT_includeData) */
void zx_idhrxml_Subscription_PUT_includeData(struct zx_idhrxml_Subscription_s* x, struct zx_str* y) { x->includeData = y; }







#ifdef ZX_ENA_GETPUT

/* FUNC(zx_idhrxml_TestItem_NUM_TestOp) */

int zx_idhrxml_TestItem_NUM_TestOp(struct zx_idhrxml_TestItem_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->TestOp; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_idhrxml_TestItem_GET_TestOp) */

struct zx_elem_s* zx_idhrxml_TestItem_GET_TestOp(struct zx_idhrxml_TestItem_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->TestOp; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_idhrxml_TestItem_POP_TestOp) */

struct zx_elem_s* zx_idhrxml_TestItem_POP_TestOp(struct zx_idhrxml_TestItem_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->TestOp;
  if (y)
    x->TestOp = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_idhrxml_TestItem_PUSH_TestOp) */

void zx_idhrxml_TestItem_PUSH_TestOp(struct zx_idhrxml_TestItem_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->TestOp->g;
  x->TestOp = z;
}

/* FUNC(zx_idhrxml_TestItem_REV_TestOp) */

void zx_idhrxml_TestItem_REV_TestOp(struct zx_idhrxml_TestItem_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->TestOp;
  if (!y) return;
  x->TestOp = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->TestOp->g;
    x->TestOp = y;
    y = nxt;
  }
}

/* FUNC(zx_idhrxml_TestItem_PUT_TestOp) */

void zx_idhrxml_TestItem_PUT_TestOp(struct zx_idhrxml_TestItem_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->TestOp;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->TestOp = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_idhrxml_TestItem_ADD_TestOp) */

void zx_idhrxml_TestItem_ADD_TestOp(struct zx_idhrxml_TestItem_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->TestOp->g;
    x->TestOp = z;
    return;
  case -1:
    y = x->TestOp;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->TestOp; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_idhrxml_TestItem_DEL_TestOp) */

void zx_idhrxml_TestItem_DEL_TestOp(struct zx_idhrxml_TestItem_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->TestOp = (struct zx_elem_s*)x->TestOp->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->TestOp;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->TestOp; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

#endif

/* FUNC(zx_idhrxml_TestItem_GET_id) */
struct zx_str* zx_idhrxml_TestItem_GET_id(struct zx_idhrxml_TestItem_s* x) { return x->id; }
/* FUNC(zx_idhrxml_TestItem_PUT_id) */
void zx_idhrxml_TestItem_PUT_id(struct zx_idhrxml_TestItem_s* x, struct zx_str* y) { x->id = y; }
/* FUNC(zx_idhrxml_TestItem_GET_objectType) */
struct zx_str* zx_idhrxml_TestItem_GET_objectType(struct zx_idhrxml_TestItem_s* x) { return x->objectType; }
/* FUNC(zx_idhrxml_TestItem_PUT_objectType) */
void zx_idhrxml_TestItem_PUT_objectType(struct zx_idhrxml_TestItem_s* x, struct zx_str* y) { x->objectType = y; }
/* FUNC(zx_idhrxml_TestItem_GET_predefined) */
struct zx_str* zx_idhrxml_TestItem_GET_predefined(struct zx_idhrxml_TestItem_s* x) { return x->predefined; }
/* FUNC(zx_idhrxml_TestItem_PUT_predefined) */
void zx_idhrxml_TestItem_PUT_predefined(struct zx_idhrxml_TestItem_s* x, struct zx_str* y) { x->predefined = y; }
/* FUNC(zx_idhrxml_TestItem_GET_itemID) */
struct zx_str* zx_idhrxml_TestItem_GET_itemID(struct zx_idhrxml_TestItem_s* x) { return x->itemID; }
/* FUNC(zx_idhrxml_TestItem_PUT_itemID) */
void zx_idhrxml_TestItem_PUT_itemID(struct zx_idhrxml_TestItem_s* x, struct zx_str* y) { x->itemID = y; }





/* EOF -- c/zx-idhrxml-getput.c */