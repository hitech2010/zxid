/* c/zx-wsu-data.h - WARNING: This header was automatically generated. DO NOT EDIT!
 * $Id$ */
/* Datastructure design, topography, and layout
 * Copyright (c) 2006 Sampo Kellomaki (sampo@iki.fi),
 * All Rights Reserved. NO WARRANTY. See file COPYING for
 * terms and conditions of use. Element and attributes names as well
 * as some topography are derived from schema descriptions that were used as
 * input and may be subject to their own copright. */

#ifndef _c_zx_wsu_data_h
#define _c_zx_wsu_data_h

#include "zx.h"
#include "c/zx-const.h"
#include "c/zx-data.h"

#ifndef ZX_ELEM_EXT
#define ZX_ELEM_EXT  /* This extension point should be defined by who includes this file. */
#endif

/* -------------------------- wsu_Created -------------------------- */
/* refby( zx_wst_Lifetime_s zx_wsu_Timestamp_s ) */
#ifndef zx_wsu_Created_EXT
#define zx_wsu_Created_EXT
#endif

struct zx_wsu_Created_s* zx_DEC_wsu_Created(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_wsu_Created_s* zx_NEW_wsu_Created(struct zx_ctx* c);
void zx_FREE_wsu_Created(struct zx_ctx* c, struct zx_wsu_Created_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_wsu_Created_s* zx_DEEP_CLONE_wsu_Created(struct zx_ctx* c, struct zx_wsu_Created_s* x, int dup_strs);
void zx_DUP_STRS_wsu_Created(struct zx_ctx* c, struct zx_wsu_Created_s* x);
int zx_WALK_SO_wsu_Created(struct zx_ctx* c, struct zx_wsu_Created_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_wsu_Created(struct zx_ctx* c, struct zx_wsu_Created_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_wsu_Created(struct zx_ctx* c, struct zx_wsu_Created_s* x);
int zx_LEN_WO_wsu_Created(struct zx_ctx* c, struct zx_wsu_Created_s* x);
char* zx_ENC_SO_wsu_Created(struct zx_ctx* c, struct zx_wsu_Created_s* x, char* p);
char* zx_ENC_WO_wsu_Created(struct zx_ctx* c, struct zx_wsu_Created_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_wsu_Created(struct zx_ctx* c, struct zx_wsu_Created_s* x);
struct zx_str* zx_EASY_ENC_WO_wsu_Created(struct zx_ctx* c, struct zx_wsu_Created_s* x);

struct zx_wsu_Created_s {
  ZX_ELEM_EXT
  zx_wsu_Created_EXT
  struct zx_str* Id;	/* {0,1} attribute xs:ID */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_wsu_Created_GET_Id(struct zx_wsu_Created_s* x);





void zx_wsu_Created_PUT_Id(struct zx_wsu_Created_s* x, struct zx_str* y);





#endif
/* -------------------------- wsu_Expires -------------------------- */
/* refby( zx_wst_Lifetime_s zx_wsu_Timestamp_s ) */
#ifndef zx_wsu_Expires_EXT
#define zx_wsu_Expires_EXT
#endif

struct zx_wsu_Expires_s* zx_DEC_wsu_Expires(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_wsu_Expires_s* zx_NEW_wsu_Expires(struct zx_ctx* c);
void zx_FREE_wsu_Expires(struct zx_ctx* c, struct zx_wsu_Expires_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_wsu_Expires_s* zx_DEEP_CLONE_wsu_Expires(struct zx_ctx* c, struct zx_wsu_Expires_s* x, int dup_strs);
void zx_DUP_STRS_wsu_Expires(struct zx_ctx* c, struct zx_wsu_Expires_s* x);
int zx_WALK_SO_wsu_Expires(struct zx_ctx* c, struct zx_wsu_Expires_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_wsu_Expires(struct zx_ctx* c, struct zx_wsu_Expires_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_wsu_Expires(struct zx_ctx* c, struct zx_wsu_Expires_s* x);
int zx_LEN_WO_wsu_Expires(struct zx_ctx* c, struct zx_wsu_Expires_s* x);
char* zx_ENC_SO_wsu_Expires(struct zx_ctx* c, struct zx_wsu_Expires_s* x, char* p);
char* zx_ENC_WO_wsu_Expires(struct zx_ctx* c, struct zx_wsu_Expires_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_wsu_Expires(struct zx_ctx* c, struct zx_wsu_Expires_s* x);
struct zx_str* zx_EASY_ENC_WO_wsu_Expires(struct zx_ctx* c, struct zx_wsu_Expires_s* x);

struct zx_wsu_Expires_s {
  ZX_ELEM_EXT
  zx_wsu_Expires_EXT
  struct zx_str* Id;	/* {0,1} attribute xs:ID */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_wsu_Expires_GET_Id(struct zx_wsu_Expires_s* x);





void zx_wsu_Expires_PUT_Id(struct zx_wsu_Expires_s* x, struct zx_str* y);





#endif
/* -------------------------- wsu_Timestamp -------------------------- */
/* refby( zx_wsse_Security_s ) */
#ifndef zx_wsu_Timestamp_EXT
#define zx_wsu_Timestamp_EXT
#endif

struct zx_wsu_Timestamp_s* zx_DEC_wsu_Timestamp(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_wsu_Timestamp_s* zx_NEW_wsu_Timestamp(struct zx_ctx* c);
void zx_FREE_wsu_Timestamp(struct zx_ctx* c, struct zx_wsu_Timestamp_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_wsu_Timestamp_s* zx_DEEP_CLONE_wsu_Timestamp(struct zx_ctx* c, struct zx_wsu_Timestamp_s* x, int dup_strs);
void zx_DUP_STRS_wsu_Timestamp(struct zx_ctx* c, struct zx_wsu_Timestamp_s* x);
int zx_WALK_SO_wsu_Timestamp(struct zx_ctx* c, struct zx_wsu_Timestamp_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_wsu_Timestamp(struct zx_ctx* c, struct zx_wsu_Timestamp_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_wsu_Timestamp(struct zx_ctx* c, struct zx_wsu_Timestamp_s* x);
int zx_LEN_WO_wsu_Timestamp(struct zx_ctx* c, struct zx_wsu_Timestamp_s* x);
char* zx_ENC_SO_wsu_Timestamp(struct zx_ctx* c, struct zx_wsu_Timestamp_s* x, char* p);
char* zx_ENC_WO_wsu_Timestamp(struct zx_ctx* c, struct zx_wsu_Timestamp_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_wsu_Timestamp(struct zx_ctx* c, struct zx_wsu_Timestamp_s* x);
struct zx_str* zx_EASY_ENC_WO_wsu_Timestamp(struct zx_ctx* c, struct zx_wsu_Timestamp_s* x);

struct zx_wsu_Timestamp_s {
  ZX_ELEM_EXT
  zx_wsu_Timestamp_EXT
  struct zx_wsu_Created_s* Created;	/* {0,1} nada */
  struct zx_wsu_Expires_s* Expires;	/* {0,1} nada */
  struct zx_str* Id;	/* {0,1} attribute xs:ID */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_wsu_Timestamp_GET_Id(struct zx_wsu_Timestamp_s* x);

struct zx_wsu_Created_s* zx_wsu_Timestamp_GET_Created(struct zx_wsu_Timestamp_s* x, int n);
struct zx_wsu_Expires_s* zx_wsu_Timestamp_GET_Expires(struct zx_wsu_Timestamp_s* x, int n);

int zx_wsu_Timestamp_NUM_Created(struct zx_wsu_Timestamp_s* x);
int zx_wsu_Timestamp_NUM_Expires(struct zx_wsu_Timestamp_s* x);

struct zx_wsu_Created_s* zx_wsu_Timestamp_POP_Created(struct zx_wsu_Timestamp_s* x);
struct zx_wsu_Expires_s* zx_wsu_Timestamp_POP_Expires(struct zx_wsu_Timestamp_s* x);

void zx_wsu_Timestamp_PUSH_Created(struct zx_wsu_Timestamp_s* x, struct zx_wsu_Created_s* y);
void zx_wsu_Timestamp_PUSH_Expires(struct zx_wsu_Timestamp_s* x, struct zx_wsu_Expires_s* y);

void zx_wsu_Timestamp_PUT_Id(struct zx_wsu_Timestamp_s* x, struct zx_str* y);

void zx_wsu_Timestamp_PUT_Created(struct zx_wsu_Timestamp_s* x, int n, struct zx_wsu_Created_s* y);
void zx_wsu_Timestamp_PUT_Expires(struct zx_wsu_Timestamp_s* x, int n, struct zx_wsu_Expires_s* y);

void zx_wsu_Timestamp_ADD_Created(struct zx_wsu_Timestamp_s* x, int n, struct zx_wsu_Created_s* z);
void zx_wsu_Timestamp_ADD_Expires(struct zx_wsu_Timestamp_s* x, int n, struct zx_wsu_Expires_s* z);

void zx_wsu_Timestamp_DEL_Created(struct zx_wsu_Timestamp_s* x, int n);
void zx_wsu_Timestamp_DEL_Expires(struct zx_wsu_Timestamp_s* x, int n);

void zx_wsu_Timestamp_REV_Created(struct zx_wsu_Timestamp_s* x);
void zx_wsu_Timestamp_REV_Expires(struct zx_wsu_Timestamp_s* x);

#endif

#endif