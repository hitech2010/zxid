/* c/zx-tas3-data.h - WARNING: This header was automatically generated. DO NOT EDIT!
 * $Id$ */
/* Datastructure design, topography, and layout
 * Copyright (c) 2006 Sampo Kellomaki (sampo@iki.fi),
 * All Rights Reserved. NO WARRANTY. See file COPYING for
 * terms and conditions of use. Element and attributes names as well
 * as some topography are derived from schema descriptions that were used as
 * input and may be subject to their own copright. */

#ifndef _c_zx_tas3_data_h
#define _c_zx_tas3_data_h

#include "zx.h"
#include "c/zx-const.h"
#include "c/zx-data.h"

#ifndef ZX_ELEM_EXT
#define ZX_ELEM_EXT  /* This extension point should be defined by who includes this file. */
#endif

/* -------------------------- tas3_Credentials -------------------------- */
/* refby( zx_e_Header_s ) */
#ifndef zx_tas3_Credentials_EXT
#define zx_tas3_Credentials_EXT
#endif

struct zx_tas3_Credentials_s* zx_DEC_tas3_Credentials(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_tas3_Credentials_s* zx_NEW_tas3_Credentials(struct zx_ctx* c);
void zx_FREE_tas3_Credentials(struct zx_ctx* c, struct zx_tas3_Credentials_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_tas3_Credentials_s* zx_DEEP_CLONE_tas3_Credentials(struct zx_ctx* c, struct zx_tas3_Credentials_s* x, int dup_strs);
void zx_DUP_STRS_tas3_Credentials(struct zx_ctx* c, struct zx_tas3_Credentials_s* x);
int zx_WALK_SO_tas3_Credentials(struct zx_ctx* c, struct zx_tas3_Credentials_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_tas3_Credentials(struct zx_ctx* c, struct zx_tas3_Credentials_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_tas3_Credentials(struct zx_ctx* c, struct zx_tas3_Credentials_s* x);
int zx_LEN_WO_tas3_Credentials(struct zx_ctx* c, struct zx_tas3_Credentials_s* x);
char* zx_ENC_SO_tas3_Credentials(struct zx_ctx* c, struct zx_tas3_Credentials_s* x, char* p);
char* zx_ENC_WO_tas3_Credentials(struct zx_ctx* c, struct zx_tas3_Credentials_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_tas3_Credentials(struct zx_ctx* c, struct zx_tas3_Credentials_s* x);
struct zx_str* zx_EASY_ENC_WO_tas3_Credentials(struct zx_ctx* c, struct zx_tas3_Credentials_s* x);

struct zx_tas3_Credentials_s {
  ZX_ELEM_EXT
  zx_tas3_Credentials_EXT
  struct zx_sa_Assertion_s* Assertion;	/* {0,1} nada */
  struct zx_sa_EncryptedAssertion_s* EncryptedAssertion;	/* {0,1} nada */
  struct zx_sa11_Assertion_s* sa11_Assertion;	/* {0,1} nada */
  struct zx_ff12_Assertion_s* ff12_Assertion;	/* {0,1} nada */
  struct zx_sa_Attribute_s* Attribute;	/* {0,-1} nada */
  struct zx_sa_EncryptedAttribute_s* EncryptedAttribute;	/* {0,-1} nada */
  struct zx_xac_Attribute_s* xac_Attribute;	/* {0,-1} nada */
  struct zx_str* id;	/* {0,1} attribute xs:ID */
  struct zx_str* usage;	/* {0,1} attribute xs:anyURI */
  struct zx_str* Id;	/* {0,1} attribute xs:ID */
  struct zx_str* actor;	/* {0,1} attribute xs:anyURI */
  struct zx_str* mustUnderstand;	/* {0,1} attribute xs:boolean */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_tas3_Credentials_GET_id(struct zx_tas3_Credentials_s* x);
struct zx_str* zx_tas3_Credentials_GET_usage(struct zx_tas3_Credentials_s* x);
struct zx_str* zx_tas3_Credentials_GET_Id(struct zx_tas3_Credentials_s* x);
struct zx_str* zx_tas3_Credentials_GET_actor(struct zx_tas3_Credentials_s* x);
struct zx_str* zx_tas3_Credentials_GET_mustUnderstand(struct zx_tas3_Credentials_s* x);

struct zx_sa_Assertion_s* zx_tas3_Credentials_GET_Assertion(struct zx_tas3_Credentials_s* x, int n);
struct zx_sa_EncryptedAssertion_s* zx_tas3_Credentials_GET_EncryptedAssertion(struct zx_tas3_Credentials_s* x, int n);
struct zx_sa11_Assertion_s* zx_tas3_Credentials_GET_sa11_Assertion(struct zx_tas3_Credentials_s* x, int n);
struct zx_ff12_Assertion_s* zx_tas3_Credentials_GET_ff12_Assertion(struct zx_tas3_Credentials_s* x, int n);
struct zx_sa_Attribute_s* zx_tas3_Credentials_GET_Attribute(struct zx_tas3_Credentials_s* x, int n);
struct zx_sa_EncryptedAttribute_s* zx_tas3_Credentials_GET_EncryptedAttribute(struct zx_tas3_Credentials_s* x, int n);
struct zx_xac_Attribute_s* zx_tas3_Credentials_GET_xac_Attribute(struct zx_tas3_Credentials_s* x, int n);

int zx_tas3_Credentials_NUM_Assertion(struct zx_tas3_Credentials_s* x);
int zx_tas3_Credentials_NUM_EncryptedAssertion(struct zx_tas3_Credentials_s* x);
int zx_tas3_Credentials_NUM_sa11_Assertion(struct zx_tas3_Credentials_s* x);
int zx_tas3_Credentials_NUM_ff12_Assertion(struct zx_tas3_Credentials_s* x);
int zx_tas3_Credentials_NUM_Attribute(struct zx_tas3_Credentials_s* x);
int zx_tas3_Credentials_NUM_EncryptedAttribute(struct zx_tas3_Credentials_s* x);
int zx_tas3_Credentials_NUM_xac_Attribute(struct zx_tas3_Credentials_s* x);

struct zx_sa_Assertion_s* zx_tas3_Credentials_POP_Assertion(struct zx_tas3_Credentials_s* x);
struct zx_sa_EncryptedAssertion_s* zx_tas3_Credentials_POP_EncryptedAssertion(struct zx_tas3_Credentials_s* x);
struct zx_sa11_Assertion_s* zx_tas3_Credentials_POP_sa11_Assertion(struct zx_tas3_Credentials_s* x);
struct zx_ff12_Assertion_s* zx_tas3_Credentials_POP_ff12_Assertion(struct zx_tas3_Credentials_s* x);
struct zx_sa_Attribute_s* zx_tas3_Credentials_POP_Attribute(struct zx_tas3_Credentials_s* x);
struct zx_sa_EncryptedAttribute_s* zx_tas3_Credentials_POP_EncryptedAttribute(struct zx_tas3_Credentials_s* x);
struct zx_xac_Attribute_s* zx_tas3_Credentials_POP_xac_Attribute(struct zx_tas3_Credentials_s* x);

void zx_tas3_Credentials_PUSH_Assertion(struct zx_tas3_Credentials_s* x, struct zx_sa_Assertion_s* y);
void zx_tas3_Credentials_PUSH_EncryptedAssertion(struct zx_tas3_Credentials_s* x, struct zx_sa_EncryptedAssertion_s* y);
void zx_tas3_Credentials_PUSH_sa11_Assertion(struct zx_tas3_Credentials_s* x, struct zx_sa11_Assertion_s* y);
void zx_tas3_Credentials_PUSH_ff12_Assertion(struct zx_tas3_Credentials_s* x, struct zx_ff12_Assertion_s* y);
void zx_tas3_Credentials_PUSH_Attribute(struct zx_tas3_Credentials_s* x, struct zx_sa_Attribute_s* y);
void zx_tas3_Credentials_PUSH_EncryptedAttribute(struct zx_tas3_Credentials_s* x, struct zx_sa_EncryptedAttribute_s* y);
void zx_tas3_Credentials_PUSH_xac_Attribute(struct zx_tas3_Credentials_s* x, struct zx_xac_Attribute_s* y);

void zx_tas3_Credentials_PUT_id(struct zx_tas3_Credentials_s* x, struct zx_str* y);
void zx_tas3_Credentials_PUT_usage(struct zx_tas3_Credentials_s* x, struct zx_str* y);
void zx_tas3_Credentials_PUT_Id(struct zx_tas3_Credentials_s* x, struct zx_str* y);
void zx_tas3_Credentials_PUT_actor(struct zx_tas3_Credentials_s* x, struct zx_str* y);
void zx_tas3_Credentials_PUT_mustUnderstand(struct zx_tas3_Credentials_s* x, struct zx_str* y);

void zx_tas3_Credentials_PUT_Assertion(struct zx_tas3_Credentials_s* x, int n, struct zx_sa_Assertion_s* y);
void zx_tas3_Credentials_PUT_EncryptedAssertion(struct zx_tas3_Credentials_s* x, int n, struct zx_sa_EncryptedAssertion_s* y);
void zx_tas3_Credentials_PUT_sa11_Assertion(struct zx_tas3_Credentials_s* x, int n, struct zx_sa11_Assertion_s* y);
void zx_tas3_Credentials_PUT_ff12_Assertion(struct zx_tas3_Credentials_s* x, int n, struct zx_ff12_Assertion_s* y);
void zx_tas3_Credentials_PUT_Attribute(struct zx_tas3_Credentials_s* x, int n, struct zx_sa_Attribute_s* y);
void zx_tas3_Credentials_PUT_EncryptedAttribute(struct zx_tas3_Credentials_s* x, int n, struct zx_sa_EncryptedAttribute_s* y);
void zx_tas3_Credentials_PUT_xac_Attribute(struct zx_tas3_Credentials_s* x, int n, struct zx_xac_Attribute_s* y);

void zx_tas3_Credentials_ADD_Assertion(struct zx_tas3_Credentials_s* x, int n, struct zx_sa_Assertion_s* z);
void zx_tas3_Credentials_ADD_EncryptedAssertion(struct zx_tas3_Credentials_s* x, int n, struct zx_sa_EncryptedAssertion_s* z);
void zx_tas3_Credentials_ADD_sa11_Assertion(struct zx_tas3_Credentials_s* x, int n, struct zx_sa11_Assertion_s* z);
void zx_tas3_Credentials_ADD_ff12_Assertion(struct zx_tas3_Credentials_s* x, int n, struct zx_ff12_Assertion_s* z);
void zx_tas3_Credentials_ADD_Attribute(struct zx_tas3_Credentials_s* x, int n, struct zx_sa_Attribute_s* z);
void zx_tas3_Credentials_ADD_EncryptedAttribute(struct zx_tas3_Credentials_s* x, int n, struct zx_sa_EncryptedAttribute_s* z);
void zx_tas3_Credentials_ADD_xac_Attribute(struct zx_tas3_Credentials_s* x, int n, struct zx_xac_Attribute_s* z);

void zx_tas3_Credentials_DEL_Assertion(struct zx_tas3_Credentials_s* x, int n);
void zx_tas3_Credentials_DEL_EncryptedAssertion(struct zx_tas3_Credentials_s* x, int n);
void zx_tas3_Credentials_DEL_sa11_Assertion(struct zx_tas3_Credentials_s* x, int n);
void zx_tas3_Credentials_DEL_ff12_Assertion(struct zx_tas3_Credentials_s* x, int n);
void zx_tas3_Credentials_DEL_Attribute(struct zx_tas3_Credentials_s* x, int n);
void zx_tas3_Credentials_DEL_EncryptedAttribute(struct zx_tas3_Credentials_s* x, int n);
void zx_tas3_Credentials_DEL_xac_Attribute(struct zx_tas3_Credentials_s* x, int n);

void zx_tas3_Credentials_REV_Assertion(struct zx_tas3_Credentials_s* x);
void zx_tas3_Credentials_REV_EncryptedAssertion(struct zx_tas3_Credentials_s* x);
void zx_tas3_Credentials_REV_sa11_Assertion(struct zx_tas3_Credentials_s* x);
void zx_tas3_Credentials_REV_ff12_Assertion(struct zx_tas3_Credentials_s* x);
void zx_tas3_Credentials_REV_Attribute(struct zx_tas3_Credentials_s* x);
void zx_tas3_Credentials_REV_EncryptedAttribute(struct zx_tas3_Credentials_s* x);
void zx_tas3_Credentials_REV_xac_Attribute(struct zx_tas3_Credentials_s* x);

#endif
/* -------------------------- tas3_ESLApply -------------------------- */
/* refby( zx_tas3_ESLPolicies_s ) */
#ifndef zx_tas3_ESLApply_EXT
#define zx_tas3_ESLApply_EXT
#endif

struct zx_tas3_ESLApply_s* zx_DEC_tas3_ESLApply(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_tas3_ESLApply_s* zx_NEW_tas3_ESLApply(struct zx_ctx* c);
void zx_FREE_tas3_ESLApply(struct zx_ctx* c, struct zx_tas3_ESLApply_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_tas3_ESLApply_s* zx_DEEP_CLONE_tas3_ESLApply(struct zx_ctx* c, struct zx_tas3_ESLApply_s* x, int dup_strs);
void zx_DUP_STRS_tas3_ESLApply(struct zx_ctx* c, struct zx_tas3_ESLApply_s* x);
int zx_WALK_SO_tas3_ESLApply(struct zx_ctx* c, struct zx_tas3_ESLApply_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_tas3_ESLApply(struct zx_ctx* c, struct zx_tas3_ESLApply_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_tas3_ESLApply(struct zx_ctx* c, struct zx_tas3_ESLApply_s* x);
int zx_LEN_WO_tas3_ESLApply(struct zx_ctx* c, struct zx_tas3_ESLApply_s* x);
char* zx_ENC_SO_tas3_ESLApply(struct zx_ctx* c, struct zx_tas3_ESLApply_s* x, char* p);
char* zx_ENC_WO_tas3_ESLApply(struct zx_ctx* c, struct zx_tas3_ESLApply_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_tas3_ESLApply(struct zx_ctx* c, struct zx_tas3_ESLApply_s* x);
struct zx_str* zx_EASY_ENC_WO_tas3_ESLApply(struct zx_ctx* c, struct zx_tas3_ESLApply_s* x);

struct zx_tas3_ESLApply_s {
  ZX_ELEM_EXT
  zx_tas3_ESLApply_EXT
  struct zx_tas3_ESLRef_s* ESLRef;	/* {1,-1} nada */
  struct zx_xa_Obligation_s* Obligation;	/* {1,-1} nada */
};

#ifdef ZX_ENA_GETPUT

struct zx_tas3_ESLRef_s* zx_tas3_ESLApply_GET_ESLRef(struct zx_tas3_ESLApply_s* x, int n);
struct zx_xa_Obligation_s* zx_tas3_ESLApply_GET_Obligation(struct zx_tas3_ESLApply_s* x, int n);

int zx_tas3_ESLApply_NUM_ESLRef(struct zx_tas3_ESLApply_s* x);
int zx_tas3_ESLApply_NUM_Obligation(struct zx_tas3_ESLApply_s* x);

struct zx_tas3_ESLRef_s* zx_tas3_ESLApply_POP_ESLRef(struct zx_tas3_ESLApply_s* x);
struct zx_xa_Obligation_s* zx_tas3_ESLApply_POP_Obligation(struct zx_tas3_ESLApply_s* x);

void zx_tas3_ESLApply_PUSH_ESLRef(struct zx_tas3_ESLApply_s* x, struct zx_tas3_ESLRef_s* y);
void zx_tas3_ESLApply_PUSH_Obligation(struct zx_tas3_ESLApply_s* x, struct zx_xa_Obligation_s* y);


void zx_tas3_ESLApply_PUT_ESLRef(struct zx_tas3_ESLApply_s* x, int n, struct zx_tas3_ESLRef_s* y);
void zx_tas3_ESLApply_PUT_Obligation(struct zx_tas3_ESLApply_s* x, int n, struct zx_xa_Obligation_s* y);

void zx_tas3_ESLApply_ADD_ESLRef(struct zx_tas3_ESLApply_s* x, int n, struct zx_tas3_ESLRef_s* z);
void zx_tas3_ESLApply_ADD_Obligation(struct zx_tas3_ESLApply_s* x, int n, struct zx_xa_Obligation_s* z);

void zx_tas3_ESLApply_DEL_ESLRef(struct zx_tas3_ESLApply_s* x, int n);
void zx_tas3_ESLApply_DEL_Obligation(struct zx_tas3_ESLApply_s* x, int n);

void zx_tas3_ESLApply_REV_ESLRef(struct zx_tas3_ESLApply_s* x);
void zx_tas3_ESLApply_REV_Obligation(struct zx_tas3_ESLApply_s* x);

#endif
/* -------------------------- tas3_ESLPolicies -------------------------- */
/* refby( zx_e_Header_s ) */
#ifndef zx_tas3_ESLPolicies_EXT
#define zx_tas3_ESLPolicies_EXT
#endif

struct zx_tas3_ESLPolicies_s* zx_DEC_tas3_ESLPolicies(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_tas3_ESLPolicies_s* zx_NEW_tas3_ESLPolicies(struct zx_ctx* c);
void zx_FREE_tas3_ESLPolicies(struct zx_ctx* c, struct zx_tas3_ESLPolicies_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_tas3_ESLPolicies_s* zx_DEEP_CLONE_tas3_ESLPolicies(struct zx_ctx* c, struct zx_tas3_ESLPolicies_s* x, int dup_strs);
void zx_DUP_STRS_tas3_ESLPolicies(struct zx_ctx* c, struct zx_tas3_ESLPolicies_s* x);
int zx_WALK_SO_tas3_ESLPolicies(struct zx_ctx* c, struct zx_tas3_ESLPolicies_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_tas3_ESLPolicies(struct zx_ctx* c, struct zx_tas3_ESLPolicies_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_tas3_ESLPolicies(struct zx_ctx* c, struct zx_tas3_ESLPolicies_s* x);
int zx_LEN_WO_tas3_ESLPolicies(struct zx_ctx* c, struct zx_tas3_ESLPolicies_s* x);
char* zx_ENC_SO_tas3_ESLPolicies(struct zx_ctx* c, struct zx_tas3_ESLPolicies_s* x, char* p);
char* zx_ENC_WO_tas3_ESLPolicies(struct zx_ctx* c, struct zx_tas3_ESLPolicies_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_tas3_ESLPolicies(struct zx_ctx* c, struct zx_tas3_ESLPolicies_s* x);
struct zx_str* zx_EASY_ENC_WO_tas3_ESLPolicies(struct zx_ctx* c, struct zx_tas3_ESLPolicies_s* x);

struct zx_tas3_ESLPolicies_s {
  ZX_ELEM_EXT
  zx_tas3_ESLPolicies_EXT
  struct zx_tas3_ESLApply_s* ESLApply;	/* {1,-1} nada */
  struct zx_str* id;	/* {0,1} attribute xs:ID */
  struct zx_str* usage;	/* {0,1} attribute xs:anyURI */
  struct zx_str* Id;	/* {0,1} attribute xs:ID */
  struct zx_str* actor;	/* {0,1} attribute xs:anyURI */
  struct zx_str* mustUnderstand;	/* {0,1} attribute xs:boolean */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_tas3_ESLPolicies_GET_id(struct zx_tas3_ESLPolicies_s* x);
struct zx_str* zx_tas3_ESLPolicies_GET_usage(struct zx_tas3_ESLPolicies_s* x);
struct zx_str* zx_tas3_ESLPolicies_GET_Id(struct zx_tas3_ESLPolicies_s* x);
struct zx_str* zx_tas3_ESLPolicies_GET_actor(struct zx_tas3_ESLPolicies_s* x);
struct zx_str* zx_tas3_ESLPolicies_GET_mustUnderstand(struct zx_tas3_ESLPolicies_s* x);

struct zx_tas3_ESLApply_s* zx_tas3_ESLPolicies_GET_ESLApply(struct zx_tas3_ESLPolicies_s* x, int n);

int zx_tas3_ESLPolicies_NUM_ESLApply(struct zx_tas3_ESLPolicies_s* x);

struct zx_tas3_ESLApply_s* zx_tas3_ESLPolicies_POP_ESLApply(struct zx_tas3_ESLPolicies_s* x);

void zx_tas3_ESLPolicies_PUSH_ESLApply(struct zx_tas3_ESLPolicies_s* x, struct zx_tas3_ESLApply_s* y);

void zx_tas3_ESLPolicies_PUT_id(struct zx_tas3_ESLPolicies_s* x, struct zx_str* y);
void zx_tas3_ESLPolicies_PUT_usage(struct zx_tas3_ESLPolicies_s* x, struct zx_str* y);
void zx_tas3_ESLPolicies_PUT_Id(struct zx_tas3_ESLPolicies_s* x, struct zx_str* y);
void zx_tas3_ESLPolicies_PUT_actor(struct zx_tas3_ESLPolicies_s* x, struct zx_str* y);
void zx_tas3_ESLPolicies_PUT_mustUnderstand(struct zx_tas3_ESLPolicies_s* x, struct zx_str* y);

void zx_tas3_ESLPolicies_PUT_ESLApply(struct zx_tas3_ESLPolicies_s* x, int n, struct zx_tas3_ESLApply_s* y);

void zx_tas3_ESLPolicies_ADD_ESLApply(struct zx_tas3_ESLPolicies_s* x, int n, struct zx_tas3_ESLApply_s* z);

void zx_tas3_ESLPolicies_DEL_ESLApply(struct zx_tas3_ESLPolicies_s* x, int n);

void zx_tas3_ESLPolicies_REV_ESLApply(struct zx_tas3_ESLPolicies_s* x);

#endif
/* -------------------------- tas3_ESLRef -------------------------- */
/* refby( zx_tas3_ESLApply_s ) */
#ifndef zx_tas3_ESLRef_EXT
#define zx_tas3_ESLRef_EXT
#endif

struct zx_tas3_ESLRef_s* zx_DEC_tas3_ESLRef(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_tas3_ESLRef_s* zx_NEW_tas3_ESLRef(struct zx_ctx* c);
void zx_FREE_tas3_ESLRef(struct zx_ctx* c, struct zx_tas3_ESLRef_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_tas3_ESLRef_s* zx_DEEP_CLONE_tas3_ESLRef(struct zx_ctx* c, struct zx_tas3_ESLRef_s* x, int dup_strs);
void zx_DUP_STRS_tas3_ESLRef(struct zx_ctx* c, struct zx_tas3_ESLRef_s* x);
int zx_WALK_SO_tas3_ESLRef(struct zx_ctx* c, struct zx_tas3_ESLRef_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_tas3_ESLRef(struct zx_ctx* c, struct zx_tas3_ESLRef_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_tas3_ESLRef(struct zx_ctx* c, struct zx_tas3_ESLRef_s* x);
int zx_LEN_WO_tas3_ESLRef(struct zx_ctx* c, struct zx_tas3_ESLRef_s* x);
char* zx_ENC_SO_tas3_ESLRef(struct zx_ctx* c, struct zx_tas3_ESLRef_s* x, char* p);
char* zx_ENC_WO_tas3_ESLRef(struct zx_ctx* c, struct zx_tas3_ESLRef_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_tas3_ESLRef(struct zx_ctx* c, struct zx_tas3_ESLRef_s* x);
struct zx_str* zx_EASY_ENC_WO_tas3_ESLRef(struct zx_ctx* c, struct zx_tas3_ESLRef_s* x);

struct zx_tas3_ESLRef_s {
  ZX_ELEM_EXT
  zx_tas3_ESLRef_EXT
  struct zx_str* ref;	/* {0,1} attribute xs:anyURI */
  struct zx_str* xpath;	/* {0,1} attribute xs:string */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_tas3_ESLRef_GET_ref(struct zx_tas3_ESLRef_s* x);
struct zx_str* zx_tas3_ESLRef_GET_xpath(struct zx_tas3_ESLRef_s* x);





void zx_tas3_ESLRef_PUT_ref(struct zx_tas3_ESLRef_s* x, struct zx_str* y);
void zx_tas3_ESLRef_PUT_xpath(struct zx_tas3_ESLRef_s* x, struct zx_str* y);





#endif
/* -------------------------- tas3_Status -------------------------- */
/* refby( zx_e_Header_s ) */
#ifndef zx_tas3_Status_EXT
#define zx_tas3_Status_EXT
#endif

struct zx_tas3_Status_s* zx_DEC_tas3_Status(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_tas3_Status_s* zx_NEW_tas3_Status(struct zx_ctx* c);
void zx_FREE_tas3_Status(struct zx_ctx* c, struct zx_tas3_Status_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_tas3_Status_s* zx_DEEP_CLONE_tas3_Status(struct zx_ctx* c, struct zx_tas3_Status_s* x, int dup_strs);
void zx_DUP_STRS_tas3_Status(struct zx_ctx* c, struct zx_tas3_Status_s* x);
int zx_WALK_SO_tas3_Status(struct zx_ctx* c, struct zx_tas3_Status_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_tas3_Status(struct zx_ctx* c, struct zx_tas3_Status_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_tas3_Status(struct zx_ctx* c, struct zx_tas3_Status_s* x);
int zx_LEN_WO_tas3_Status(struct zx_ctx* c, struct zx_tas3_Status_s* x);
char* zx_ENC_SO_tas3_Status(struct zx_ctx* c, struct zx_tas3_Status_s* x, char* p);
char* zx_ENC_WO_tas3_Status(struct zx_ctx* c, struct zx_tas3_Status_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_tas3_Status(struct zx_ctx* c, struct zx_tas3_Status_s* x);
struct zx_str* zx_EASY_ENC_WO_tas3_Status(struct zx_ctx* c, struct zx_tas3_Status_s* x);

struct zx_tas3_Status_s {
  ZX_ELEM_EXT
  zx_tas3_Status_EXT
  struct zx_lu_Status_s* Status;	/* {0,-1} nada */
  struct zx_str* code;	/* {1,1} attribute xs:QName */
  struct zx_str* comment;	/* {0,1} attribute xs:string */
  struct zx_str* ctlpt;	/* {0,1} attribute xs:string */
  struct zx_str* id;	/* {0,1} attribute xs:ID */
  struct zx_str* ref;	/* {0,1} attribute xs:anyURI */
  struct zx_str* Id;	/* {0,1} attribute xs:ID */
  struct zx_str* actor;	/* {0,1} attribute xs:anyURI */
  struct zx_str* mustUnderstand;	/* {0,1} attribute xs:boolean */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_tas3_Status_GET_code(struct zx_tas3_Status_s* x);
struct zx_str* zx_tas3_Status_GET_comment(struct zx_tas3_Status_s* x);
struct zx_str* zx_tas3_Status_GET_ctlpt(struct zx_tas3_Status_s* x);
struct zx_str* zx_tas3_Status_GET_id(struct zx_tas3_Status_s* x);
struct zx_str* zx_tas3_Status_GET_ref(struct zx_tas3_Status_s* x);
struct zx_str* zx_tas3_Status_GET_Id(struct zx_tas3_Status_s* x);
struct zx_str* zx_tas3_Status_GET_actor(struct zx_tas3_Status_s* x);
struct zx_str* zx_tas3_Status_GET_mustUnderstand(struct zx_tas3_Status_s* x);

struct zx_lu_Status_s* zx_tas3_Status_GET_Status(struct zx_tas3_Status_s* x, int n);

int zx_tas3_Status_NUM_Status(struct zx_tas3_Status_s* x);

struct zx_lu_Status_s* zx_tas3_Status_POP_Status(struct zx_tas3_Status_s* x);

void zx_tas3_Status_PUSH_Status(struct zx_tas3_Status_s* x, struct zx_lu_Status_s* y);

void zx_tas3_Status_PUT_code(struct zx_tas3_Status_s* x, struct zx_str* y);
void zx_tas3_Status_PUT_comment(struct zx_tas3_Status_s* x, struct zx_str* y);
void zx_tas3_Status_PUT_ctlpt(struct zx_tas3_Status_s* x, struct zx_str* y);
void zx_tas3_Status_PUT_id(struct zx_tas3_Status_s* x, struct zx_str* y);
void zx_tas3_Status_PUT_ref(struct zx_tas3_Status_s* x, struct zx_str* y);
void zx_tas3_Status_PUT_Id(struct zx_tas3_Status_s* x, struct zx_str* y);
void zx_tas3_Status_PUT_actor(struct zx_tas3_Status_s* x, struct zx_str* y);
void zx_tas3_Status_PUT_mustUnderstand(struct zx_tas3_Status_s* x, struct zx_str* y);

void zx_tas3_Status_PUT_Status(struct zx_tas3_Status_s* x, int n, struct zx_lu_Status_s* y);

void zx_tas3_Status_ADD_Status(struct zx_tas3_Status_s* x, int n, struct zx_lu_Status_s* z);

void zx_tas3_Status_DEL_Status(struct zx_tas3_Status_s* x, int n);

void zx_tas3_Status_REV_Status(struct zx_tas3_Status_s* x);

#endif

#endif
