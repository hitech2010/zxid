/* c/zx-idp-data.h - WARNING: This header was automatically generated. DO NOT EDIT!
 * $Id$ */
/* Datastructure design, topography, and layout
 * Copyright (c) 2006 Sampo Kellomaki (sampo@iki.fi),
 * All Rights Reserved. NO WARRANTY. See file COPYING for
 * terms and conditions of use. Element and attributes names as well
 * as some topography are derived from schema descriptions that were used as
 * input and may be subject to their own copright. */

#ifndef _c_zx_idp_data_h
#define _c_zx_idp_data_h

#include "zx.h"
#include "c/zx-const.h"
#include "c/zx-data.h"

#ifndef ZX_ELEM_EXT
#define ZX_ELEM_EXT  /* This extension point should be defined by who includes this file. */
#endif

/* -------------------------- idp_AssertionItem -------------------------- */
/* refby( zx_idp_GetAssertionResponseItem_s ) */
#ifndef zx_idp_AssertionItem_EXT
#define zx_idp_AssertionItem_EXT
#endif

struct zx_idp_AssertionItem_s* zx_DEC_idp_AssertionItem(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_idp_AssertionItem_s* zx_NEW_idp_AssertionItem(struct zx_ctx* c);
void zx_FREE_idp_AssertionItem(struct zx_ctx* c, struct zx_idp_AssertionItem_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_idp_AssertionItem_s* zx_DEEP_CLONE_idp_AssertionItem(struct zx_ctx* c, struct zx_idp_AssertionItem_s* x, int dup_strs);
void zx_DUP_STRS_idp_AssertionItem(struct zx_ctx* c, struct zx_idp_AssertionItem_s* x);
int zx_WALK_SO_idp_AssertionItem(struct zx_ctx* c, struct zx_idp_AssertionItem_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_idp_AssertionItem(struct zx_ctx* c, struct zx_idp_AssertionItem_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_idp_AssertionItem(struct zx_ctx* c, struct zx_idp_AssertionItem_s* x);
int zx_LEN_WO_idp_AssertionItem(struct zx_ctx* c, struct zx_idp_AssertionItem_s* x);
char* zx_ENC_SO_idp_AssertionItem(struct zx_ctx* c, struct zx_idp_AssertionItem_s* x, char* p);
char* zx_ENC_WO_idp_AssertionItem(struct zx_ctx* c, struct zx_idp_AssertionItem_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_idp_AssertionItem(struct zx_ctx* c, struct zx_idp_AssertionItem_s* x);
struct zx_str* zx_EASY_ENC_WO_idp_AssertionItem(struct zx_ctx* c, struct zx_idp_AssertionItem_s* x);

struct zx_idp_AssertionItem_s {
  ZX_ELEM_EXT
  zx_idp_AssertionItem_EXT
  struct zx_idp_MEDInfo_s* MEDInfo;	/* {1,1} nada */
  struct zx_sa_Assertion_s* Assertion;	/* {0,-1} nada */
  struct zx_str* created;	/* {0,1} attribute xs:boolean */
  struct zx_str* id;	/* {0,1} attribute xs:ID */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_idp_AssertionItem_GET_created(struct zx_idp_AssertionItem_s* x);
struct zx_str* zx_idp_AssertionItem_GET_id(struct zx_idp_AssertionItem_s* x);

struct zx_idp_MEDInfo_s* zx_idp_AssertionItem_GET_MEDInfo(struct zx_idp_AssertionItem_s* x, int n);
struct zx_sa_Assertion_s* zx_idp_AssertionItem_GET_Assertion(struct zx_idp_AssertionItem_s* x, int n);

int zx_idp_AssertionItem_NUM_MEDInfo(struct zx_idp_AssertionItem_s* x);
int zx_idp_AssertionItem_NUM_Assertion(struct zx_idp_AssertionItem_s* x);

struct zx_idp_MEDInfo_s* zx_idp_AssertionItem_POP_MEDInfo(struct zx_idp_AssertionItem_s* x);
struct zx_sa_Assertion_s* zx_idp_AssertionItem_POP_Assertion(struct zx_idp_AssertionItem_s* x);

void zx_idp_AssertionItem_PUSH_MEDInfo(struct zx_idp_AssertionItem_s* x, struct zx_idp_MEDInfo_s* y);
void zx_idp_AssertionItem_PUSH_Assertion(struct zx_idp_AssertionItem_s* x, struct zx_sa_Assertion_s* y);

void zx_idp_AssertionItem_PUT_created(struct zx_idp_AssertionItem_s* x, struct zx_str* y);
void zx_idp_AssertionItem_PUT_id(struct zx_idp_AssertionItem_s* x, struct zx_str* y);

void zx_idp_AssertionItem_PUT_MEDInfo(struct zx_idp_AssertionItem_s* x, int n, struct zx_idp_MEDInfo_s* y);
void zx_idp_AssertionItem_PUT_Assertion(struct zx_idp_AssertionItem_s* x, int n, struct zx_sa_Assertion_s* y);

void zx_idp_AssertionItem_ADD_MEDInfo(struct zx_idp_AssertionItem_s* x, int n, struct zx_idp_MEDInfo_s* z);
void zx_idp_AssertionItem_ADD_Assertion(struct zx_idp_AssertionItem_s* x, int n, struct zx_sa_Assertion_s* z);

void zx_idp_AssertionItem_DEL_MEDInfo(struct zx_idp_AssertionItem_s* x, int n);
void zx_idp_AssertionItem_DEL_Assertion(struct zx_idp_AssertionItem_s* x, int n);

void zx_idp_AssertionItem_REV_MEDInfo(struct zx_idp_AssertionItem_s* x);
void zx_idp_AssertionItem_REV_Assertion(struct zx_idp_AssertionItem_s* x);

#endif
/* -------------------------- idp_AuthnContextRestriction -------------------------- */
/* refby( ) */
#ifndef zx_idp_AuthnContextRestriction_EXT
#define zx_idp_AuthnContextRestriction_EXT
#endif

struct zx_idp_AuthnContextRestriction_s* zx_DEC_idp_AuthnContextRestriction(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_idp_AuthnContextRestriction_s* zx_NEW_idp_AuthnContextRestriction(struct zx_ctx* c);
void zx_FREE_idp_AuthnContextRestriction(struct zx_ctx* c, struct zx_idp_AuthnContextRestriction_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_idp_AuthnContextRestriction_s* zx_DEEP_CLONE_idp_AuthnContextRestriction(struct zx_ctx* c, struct zx_idp_AuthnContextRestriction_s* x, int dup_strs);
void zx_DUP_STRS_idp_AuthnContextRestriction(struct zx_ctx* c, struct zx_idp_AuthnContextRestriction_s* x);
int zx_WALK_SO_idp_AuthnContextRestriction(struct zx_ctx* c, struct zx_idp_AuthnContextRestriction_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_idp_AuthnContextRestriction(struct zx_ctx* c, struct zx_idp_AuthnContextRestriction_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_idp_AuthnContextRestriction(struct zx_ctx* c, struct zx_idp_AuthnContextRestriction_s* x);
int zx_LEN_WO_idp_AuthnContextRestriction(struct zx_ctx* c, struct zx_idp_AuthnContextRestriction_s* x);
char* zx_ENC_SO_idp_AuthnContextRestriction(struct zx_ctx* c, struct zx_idp_AuthnContextRestriction_s* x, char* p);
char* zx_ENC_WO_idp_AuthnContextRestriction(struct zx_ctx* c, struct zx_idp_AuthnContextRestriction_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_idp_AuthnContextRestriction(struct zx_ctx* c, struct zx_idp_AuthnContextRestriction_s* x);
struct zx_str* zx_EASY_ENC_WO_idp_AuthnContextRestriction(struct zx_ctx* c, struct zx_idp_AuthnContextRestriction_s* x);

struct zx_idp_AuthnContextRestriction_s {
  ZX_ELEM_EXT
  zx_idp_AuthnContextRestriction_EXT
  struct zx_sa_AuthnContext_s* AuthnContext;	/* {1,-1} nada */
};

#ifdef ZX_ENA_GETPUT

struct zx_sa_AuthnContext_s* zx_idp_AuthnContextRestriction_GET_AuthnContext(struct zx_idp_AuthnContextRestriction_s* x, int n);

int zx_idp_AuthnContextRestriction_NUM_AuthnContext(struct zx_idp_AuthnContextRestriction_s* x);

struct zx_sa_AuthnContext_s* zx_idp_AuthnContextRestriction_POP_AuthnContext(struct zx_idp_AuthnContextRestriction_s* x);

void zx_idp_AuthnContextRestriction_PUSH_AuthnContext(struct zx_idp_AuthnContextRestriction_s* x, struct zx_sa_AuthnContext_s* y);


void zx_idp_AuthnContextRestriction_PUT_AuthnContext(struct zx_idp_AuthnContextRestriction_s* x, int n, struct zx_sa_AuthnContext_s* y);

void zx_idp_AuthnContextRestriction_ADD_AuthnContext(struct zx_idp_AuthnContextRestriction_s* x, int n, struct zx_sa_AuthnContext_s* z);

void zx_idp_AuthnContextRestriction_DEL_AuthnContext(struct zx_idp_AuthnContextRestriction_s* x, int n);

void zx_idp_AuthnContextRestriction_REV_AuthnContext(struct zx_idp_AuthnContextRestriction_s* x);

#endif
/* -------------------------- idp_CreatedStatus -------------------------- */
/* refby( zx_e_Body_s ) */
#ifndef zx_idp_CreatedStatus_EXT
#define zx_idp_CreatedStatus_EXT
#endif

struct zx_idp_CreatedStatus_s* zx_DEC_idp_CreatedStatus(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_idp_CreatedStatus_s* zx_NEW_idp_CreatedStatus(struct zx_ctx* c);
void zx_FREE_idp_CreatedStatus(struct zx_ctx* c, struct zx_idp_CreatedStatus_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_idp_CreatedStatus_s* zx_DEEP_CLONE_idp_CreatedStatus(struct zx_ctx* c, struct zx_idp_CreatedStatus_s* x, int dup_strs);
void zx_DUP_STRS_idp_CreatedStatus(struct zx_ctx* c, struct zx_idp_CreatedStatus_s* x);
int zx_WALK_SO_idp_CreatedStatus(struct zx_ctx* c, struct zx_idp_CreatedStatus_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_idp_CreatedStatus(struct zx_ctx* c, struct zx_idp_CreatedStatus_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_idp_CreatedStatus(struct zx_ctx* c, struct zx_idp_CreatedStatus_s* x);
int zx_LEN_WO_idp_CreatedStatus(struct zx_ctx* c, struct zx_idp_CreatedStatus_s* x);
char* zx_ENC_SO_idp_CreatedStatus(struct zx_ctx* c, struct zx_idp_CreatedStatus_s* x, char* p);
char* zx_ENC_WO_idp_CreatedStatus(struct zx_ctx* c, struct zx_idp_CreatedStatus_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_idp_CreatedStatus(struct zx_ctx* c, struct zx_idp_CreatedStatus_s* x);
struct zx_str* zx_EASY_ENC_WO_idp_CreatedStatus(struct zx_ctx* c, struct zx_idp_CreatedStatus_s* x);

struct zx_idp_CreatedStatus_s {
  ZX_ELEM_EXT
  zx_idp_CreatedStatus_EXT
  struct zx_idp_CreatedStatusItem_s* CreatedStatusItem;	/* {0,-1} nada */
};

#ifdef ZX_ENA_GETPUT

struct zx_idp_CreatedStatusItem_s* zx_idp_CreatedStatus_GET_CreatedStatusItem(struct zx_idp_CreatedStatus_s* x, int n);

int zx_idp_CreatedStatus_NUM_CreatedStatusItem(struct zx_idp_CreatedStatus_s* x);

struct zx_idp_CreatedStatusItem_s* zx_idp_CreatedStatus_POP_CreatedStatusItem(struct zx_idp_CreatedStatus_s* x);

void zx_idp_CreatedStatus_PUSH_CreatedStatusItem(struct zx_idp_CreatedStatus_s* x, struct zx_idp_CreatedStatusItem_s* y);


void zx_idp_CreatedStatus_PUT_CreatedStatusItem(struct zx_idp_CreatedStatus_s* x, int n, struct zx_idp_CreatedStatusItem_s* y);

void zx_idp_CreatedStatus_ADD_CreatedStatusItem(struct zx_idp_CreatedStatus_s* x, int n, struct zx_idp_CreatedStatusItem_s* z);

void zx_idp_CreatedStatus_DEL_CreatedStatusItem(struct zx_idp_CreatedStatus_s* x, int n);

void zx_idp_CreatedStatus_REV_CreatedStatusItem(struct zx_idp_CreatedStatus_s* x);

#endif
/* -------------------------- idp_CreatedStatusItem -------------------------- */
/* refby( zx_idp_CreatedStatus_s ) */
#ifndef zx_idp_CreatedStatusItem_EXT
#define zx_idp_CreatedStatusItem_EXT
#endif

struct zx_idp_CreatedStatusItem_s* zx_DEC_idp_CreatedStatusItem(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_idp_CreatedStatusItem_s* zx_NEW_idp_CreatedStatusItem(struct zx_ctx* c);
void zx_FREE_idp_CreatedStatusItem(struct zx_ctx* c, struct zx_idp_CreatedStatusItem_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_idp_CreatedStatusItem_s* zx_DEEP_CLONE_idp_CreatedStatusItem(struct zx_ctx* c, struct zx_idp_CreatedStatusItem_s* x, int dup_strs);
void zx_DUP_STRS_idp_CreatedStatusItem(struct zx_ctx* c, struct zx_idp_CreatedStatusItem_s* x);
int zx_WALK_SO_idp_CreatedStatusItem(struct zx_ctx* c, struct zx_idp_CreatedStatusItem_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_idp_CreatedStatusItem(struct zx_ctx* c, struct zx_idp_CreatedStatusItem_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_idp_CreatedStatusItem(struct zx_ctx* c, struct zx_idp_CreatedStatusItem_s* x);
int zx_LEN_WO_idp_CreatedStatusItem(struct zx_ctx* c, struct zx_idp_CreatedStatusItem_s* x);
char* zx_ENC_SO_idp_CreatedStatusItem(struct zx_ctx* c, struct zx_idp_CreatedStatusItem_s* x, char* p);
char* zx_ENC_WO_idp_CreatedStatusItem(struct zx_ctx* c, struct zx_idp_CreatedStatusItem_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_idp_CreatedStatusItem(struct zx_ctx* c, struct zx_idp_CreatedStatusItem_s* x);
struct zx_str* zx_EASY_ENC_WO_idp_CreatedStatusItem(struct zx_ctx* c, struct zx_idp_CreatedStatusItem_s* x);

struct zx_idp_CreatedStatusItem_s {
  ZX_ELEM_EXT
  zx_idp_CreatedStatusItem_EXT
  struct zx_str* firstUsed;	/* {0,1} attribute xs:dateTime */
  struct zx_str* ref;	/* {1,1} attribute xs:string */
  struct zx_str* used;	/* {1,1} attribute xs:boolean */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_idp_CreatedStatusItem_GET_firstUsed(struct zx_idp_CreatedStatusItem_s* x);
struct zx_str* zx_idp_CreatedStatusItem_GET_ref(struct zx_idp_CreatedStatusItem_s* x);
struct zx_str* zx_idp_CreatedStatusItem_GET_used(struct zx_idp_CreatedStatusItem_s* x);





void zx_idp_CreatedStatusItem_PUT_firstUsed(struct zx_idp_CreatedStatusItem_s* x, struct zx_str* y);
void zx_idp_CreatedStatusItem_PUT_ref(struct zx_idp_CreatedStatusItem_s* x, struct zx_str* y);
void zx_idp_CreatedStatusItem_PUT_used(struct zx_idp_CreatedStatusItem_s* x, struct zx_str* y);





#endif
/* -------------------------- idp_CreatedStatusResponse -------------------------- */
/* refby( zx_e_Body_s ) */
#ifndef zx_idp_CreatedStatusResponse_EXT
#define zx_idp_CreatedStatusResponse_EXT
#endif

struct zx_idp_CreatedStatusResponse_s* zx_DEC_idp_CreatedStatusResponse(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_idp_CreatedStatusResponse_s* zx_NEW_idp_CreatedStatusResponse(struct zx_ctx* c);
void zx_FREE_idp_CreatedStatusResponse(struct zx_ctx* c, struct zx_idp_CreatedStatusResponse_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_idp_CreatedStatusResponse_s* zx_DEEP_CLONE_idp_CreatedStatusResponse(struct zx_ctx* c, struct zx_idp_CreatedStatusResponse_s* x, int dup_strs);
void zx_DUP_STRS_idp_CreatedStatusResponse(struct zx_ctx* c, struct zx_idp_CreatedStatusResponse_s* x);
int zx_WALK_SO_idp_CreatedStatusResponse(struct zx_ctx* c, struct zx_idp_CreatedStatusResponse_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_idp_CreatedStatusResponse(struct zx_ctx* c, struct zx_idp_CreatedStatusResponse_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_idp_CreatedStatusResponse(struct zx_ctx* c, struct zx_idp_CreatedStatusResponse_s* x);
int zx_LEN_WO_idp_CreatedStatusResponse(struct zx_ctx* c, struct zx_idp_CreatedStatusResponse_s* x);
char* zx_ENC_SO_idp_CreatedStatusResponse(struct zx_ctx* c, struct zx_idp_CreatedStatusResponse_s* x, char* p);
char* zx_ENC_WO_idp_CreatedStatusResponse(struct zx_ctx* c, struct zx_idp_CreatedStatusResponse_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_idp_CreatedStatusResponse(struct zx_ctx* c, struct zx_idp_CreatedStatusResponse_s* x);
struct zx_str* zx_EASY_ENC_WO_idp_CreatedStatusResponse(struct zx_ctx* c, struct zx_idp_CreatedStatusResponse_s* x);

struct zx_idp_CreatedStatusResponse_s {
  ZX_ELEM_EXT
  zx_idp_CreatedStatusResponse_EXT
  struct zx_lu_Status_s* Status;	/* {1,1} nada */
};

#ifdef ZX_ENA_GETPUT

struct zx_lu_Status_s* zx_idp_CreatedStatusResponse_GET_Status(struct zx_idp_CreatedStatusResponse_s* x, int n);

int zx_idp_CreatedStatusResponse_NUM_Status(struct zx_idp_CreatedStatusResponse_s* x);

struct zx_lu_Status_s* zx_idp_CreatedStatusResponse_POP_Status(struct zx_idp_CreatedStatusResponse_s* x);

void zx_idp_CreatedStatusResponse_PUSH_Status(struct zx_idp_CreatedStatusResponse_s* x, struct zx_lu_Status_s* y);


void zx_idp_CreatedStatusResponse_PUT_Status(struct zx_idp_CreatedStatusResponse_s* x, int n, struct zx_lu_Status_s* y);

void zx_idp_CreatedStatusResponse_ADD_Status(struct zx_idp_CreatedStatusResponse_s* x, int n, struct zx_lu_Status_s* z);

void zx_idp_CreatedStatusResponse_DEL_Status(struct zx_idp_CreatedStatusResponse_s* x, int n);

void zx_idp_CreatedStatusResponse_REV_Status(struct zx_idp_CreatedStatusResponse_s* x);

#endif
/* -------------------------- idp_GetAssertion -------------------------- */
/* refby( zx_e_Body_s ) */
#ifndef zx_idp_GetAssertion_EXT
#define zx_idp_GetAssertion_EXT
#endif

struct zx_idp_GetAssertion_s* zx_DEC_idp_GetAssertion(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_idp_GetAssertion_s* zx_NEW_idp_GetAssertion(struct zx_ctx* c);
void zx_FREE_idp_GetAssertion(struct zx_ctx* c, struct zx_idp_GetAssertion_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_idp_GetAssertion_s* zx_DEEP_CLONE_idp_GetAssertion(struct zx_ctx* c, struct zx_idp_GetAssertion_s* x, int dup_strs);
void zx_DUP_STRS_idp_GetAssertion(struct zx_ctx* c, struct zx_idp_GetAssertion_s* x);
int zx_WALK_SO_idp_GetAssertion(struct zx_ctx* c, struct zx_idp_GetAssertion_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_idp_GetAssertion(struct zx_ctx* c, struct zx_idp_GetAssertion_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_idp_GetAssertion(struct zx_ctx* c, struct zx_idp_GetAssertion_s* x);
int zx_LEN_WO_idp_GetAssertion(struct zx_ctx* c, struct zx_idp_GetAssertion_s* x);
char* zx_ENC_SO_idp_GetAssertion(struct zx_ctx* c, struct zx_idp_GetAssertion_s* x, char* p);
char* zx_ENC_WO_idp_GetAssertion(struct zx_ctx* c, struct zx_idp_GetAssertion_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_idp_GetAssertion(struct zx_ctx* c, struct zx_idp_GetAssertion_s* x);
struct zx_str* zx_EASY_ENC_WO_idp_GetAssertion(struct zx_ctx* c, struct zx_idp_GetAssertion_s* x);

struct zx_idp_GetAssertion_s {
  ZX_ELEM_EXT
  zx_idp_GetAssertion_EXT
  struct zx_sp_AuthnRequest_s* AuthnRequest;	/* {1,-1} nada */
  struct zx_str* purpose;	/* {1,1} attribute hrxml:OrganizationContactPurposeType */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_idp_GetAssertion_GET_purpose(struct zx_idp_GetAssertion_s* x);

struct zx_sp_AuthnRequest_s* zx_idp_GetAssertion_GET_AuthnRequest(struct zx_idp_GetAssertion_s* x, int n);

int zx_idp_GetAssertion_NUM_AuthnRequest(struct zx_idp_GetAssertion_s* x);

struct zx_sp_AuthnRequest_s* zx_idp_GetAssertion_POP_AuthnRequest(struct zx_idp_GetAssertion_s* x);

void zx_idp_GetAssertion_PUSH_AuthnRequest(struct zx_idp_GetAssertion_s* x, struct zx_sp_AuthnRequest_s* y);

void zx_idp_GetAssertion_PUT_purpose(struct zx_idp_GetAssertion_s* x, struct zx_str* y);

void zx_idp_GetAssertion_PUT_AuthnRequest(struct zx_idp_GetAssertion_s* x, int n, struct zx_sp_AuthnRequest_s* y);

void zx_idp_GetAssertion_ADD_AuthnRequest(struct zx_idp_GetAssertion_s* x, int n, struct zx_sp_AuthnRequest_s* z);

void zx_idp_GetAssertion_DEL_AuthnRequest(struct zx_idp_GetAssertion_s* x, int n);

void zx_idp_GetAssertion_REV_AuthnRequest(struct zx_idp_GetAssertion_s* x);

#endif
/* -------------------------- idp_GetAssertionResponse -------------------------- */
/* refby( zx_e_Body_s ) */
#ifndef zx_idp_GetAssertionResponse_EXT
#define zx_idp_GetAssertionResponse_EXT
#endif

struct zx_idp_GetAssertionResponse_s* zx_DEC_idp_GetAssertionResponse(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_idp_GetAssertionResponse_s* zx_NEW_idp_GetAssertionResponse(struct zx_ctx* c);
void zx_FREE_idp_GetAssertionResponse(struct zx_ctx* c, struct zx_idp_GetAssertionResponse_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_idp_GetAssertionResponse_s* zx_DEEP_CLONE_idp_GetAssertionResponse(struct zx_ctx* c, struct zx_idp_GetAssertionResponse_s* x, int dup_strs);
void zx_DUP_STRS_idp_GetAssertionResponse(struct zx_ctx* c, struct zx_idp_GetAssertionResponse_s* x);
int zx_WALK_SO_idp_GetAssertionResponse(struct zx_ctx* c, struct zx_idp_GetAssertionResponse_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_idp_GetAssertionResponse(struct zx_ctx* c, struct zx_idp_GetAssertionResponse_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_idp_GetAssertionResponse(struct zx_ctx* c, struct zx_idp_GetAssertionResponse_s* x);
int zx_LEN_WO_idp_GetAssertionResponse(struct zx_ctx* c, struct zx_idp_GetAssertionResponse_s* x);
char* zx_ENC_SO_idp_GetAssertionResponse(struct zx_ctx* c, struct zx_idp_GetAssertionResponse_s* x, char* p);
char* zx_ENC_WO_idp_GetAssertionResponse(struct zx_ctx* c, struct zx_idp_GetAssertionResponse_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_idp_GetAssertionResponse(struct zx_ctx* c, struct zx_idp_GetAssertionResponse_s* x);
struct zx_str* zx_EASY_ENC_WO_idp_GetAssertionResponse(struct zx_ctx* c, struct zx_idp_GetAssertionResponse_s* x);

struct zx_idp_GetAssertionResponse_s {
  ZX_ELEM_EXT
  zx_idp_GetAssertionResponse_EXT
  struct zx_lu_Status_s* Status;	/* {1,1} nada */
  struct zx_idp_GetAssertionResponseItem_s* GetAssertionResponseItem;	/* {0,-1} nada */
};

#ifdef ZX_ENA_GETPUT

struct zx_lu_Status_s* zx_idp_GetAssertionResponse_GET_Status(struct zx_idp_GetAssertionResponse_s* x, int n);
struct zx_idp_GetAssertionResponseItem_s* zx_idp_GetAssertionResponse_GET_GetAssertionResponseItem(struct zx_idp_GetAssertionResponse_s* x, int n);

int zx_idp_GetAssertionResponse_NUM_Status(struct zx_idp_GetAssertionResponse_s* x);
int zx_idp_GetAssertionResponse_NUM_GetAssertionResponseItem(struct zx_idp_GetAssertionResponse_s* x);

struct zx_lu_Status_s* zx_idp_GetAssertionResponse_POP_Status(struct zx_idp_GetAssertionResponse_s* x);
struct zx_idp_GetAssertionResponseItem_s* zx_idp_GetAssertionResponse_POP_GetAssertionResponseItem(struct zx_idp_GetAssertionResponse_s* x);

void zx_idp_GetAssertionResponse_PUSH_Status(struct zx_idp_GetAssertionResponse_s* x, struct zx_lu_Status_s* y);
void zx_idp_GetAssertionResponse_PUSH_GetAssertionResponseItem(struct zx_idp_GetAssertionResponse_s* x, struct zx_idp_GetAssertionResponseItem_s* y);


void zx_idp_GetAssertionResponse_PUT_Status(struct zx_idp_GetAssertionResponse_s* x, int n, struct zx_lu_Status_s* y);
void zx_idp_GetAssertionResponse_PUT_GetAssertionResponseItem(struct zx_idp_GetAssertionResponse_s* x, int n, struct zx_idp_GetAssertionResponseItem_s* y);

void zx_idp_GetAssertionResponse_ADD_Status(struct zx_idp_GetAssertionResponse_s* x, int n, struct zx_lu_Status_s* z);
void zx_idp_GetAssertionResponse_ADD_GetAssertionResponseItem(struct zx_idp_GetAssertionResponse_s* x, int n, struct zx_idp_GetAssertionResponseItem_s* z);

void zx_idp_GetAssertionResponse_DEL_Status(struct zx_idp_GetAssertionResponse_s* x, int n);
void zx_idp_GetAssertionResponse_DEL_GetAssertionResponseItem(struct zx_idp_GetAssertionResponse_s* x, int n);

void zx_idp_GetAssertionResponse_REV_Status(struct zx_idp_GetAssertionResponse_s* x);
void zx_idp_GetAssertionResponse_REV_GetAssertionResponseItem(struct zx_idp_GetAssertionResponse_s* x);

#endif
/* -------------------------- idp_GetAssertionResponseItem -------------------------- */
/* refby( zx_idp_GetAssertionResponse_s ) */
#ifndef zx_idp_GetAssertionResponseItem_EXT
#define zx_idp_GetAssertionResponseItem_EXT
#endif

struct zx_idp_GetAssertionResponseItem_s* zx_DEC_idp_GetAssertionResponseItem(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_idp_GetAssertionResponseItem_s* zx_NEW_idp_GetAssertionResponseItem(struct zx_ctx* c);
void zx_FREE_idp_GetAssertionResponseItem(struct zx_ctx* c, struct zx_idp_GetAssertionResponseItem_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_idp_GetAssertionResponseItem_s* zx_DEEP_CLONE_idp_GetAssertionResponseItem(struct zx_ctx* c, struct zx_idp_GetAssertionResponseItem_s* x, int dup_strs);
void zx_DUP_STRS_idp_GetAssertionResponseItem(struct zx_ctx* c, struct zx_idp_GetAssertionResponseItem_s* x);
int zx_WALK_SO_idp_GetAssertionResponseItem(struct zx_ctx* c, struct zx_idp_GetAssertionResponseItem_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_idp_GetAssertionResponseItem(struct zx_ctx* c, struct zx_idp_GetAssertionResponseItem_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_idp_GetAssertionResponseItem(struct zx_ctx* c, struct zx_idp_GetAssertionResponseItem_s* x);
int zx_LEN_WO_idp_GetAssertionResponseItem(struct zx_ctx* c, struct zx_idp_GetAssertionResponseItem_s* x);
char* zx_ENC_SO_idp_GetAssertionResponseItem(struct zx_ctx* c, struct zx_idp_GetAssertionResponseItem_s* x, char* p);
char* zx_ENC_WO_idp_GetAssertionResponseItem(struct zx_ctx* c, struct zx_idp_GetAssertionResponseItem_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_idp_GetAssertionResponseItem(struct zx_ctx* c, struct zx_idp_GetAssertionResponseItem_s* x);
struct zx_str* zx_EASY_ENC_WO_idp_GetAssertionResponseItem(struct zx_ctx* c, struct zx_idp_GetAssertionResponseItem_s* x);

struct zx_idp_GetAssertionResponseItem_s {
  ZX_ELEM_EXT
  zx_idp_GetAssertionResponseItem_EXT
  struct zx_idp_AssertionItem_s* AssertionItem;	/* {0,-1} nada */
  struct zx_str* id;	/* {0,1} attribute xs:ID */
  struct zx_str* ref;	/* {1,1} attribute xs:string */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_idp_GetAssertionResponseItem_GET_id(struct zx_idp_GetAssertionResponseItem_s* x);
struct zx_str* zx_idp_GetAssertionResponseItem_GET_ref(struct zx_idp_GetAssertionResponseItem_s* x);

struct zx_idp_AssertionItem_s* zx_idp_GetAssertionResponseItem_GET_AssertionItem(struct zx_idp_GetAssertionResponseItem_s* x, int n);

int zx_idp_GetAssertionResponseItem_NUM_AssertionItem(struct zx_idp_GetAssertionResponseItem_s* x);

struct zx_idp_AssertionItem_s* zx_idp_GetAssertionResponseItem_POP_AssertionItem(struct zx_idp_GetAssertionResponseItem_s* x);

void zx_idp_GetAssertionResponseItem_PUSH_AssertionItem(struct zx_idp_GetAssertionResponseItem_s* x, struct zx_idp_AssertionItem_s* y);

void zx_idp_GetAssertionResponseItem_PUT_id(struct zx_idp_GetAssertionResponseItem_s* x, struct zx_str* y);
void zx_idp_GetAssertionResponseItem_PUT_ref(struct zx_idp_GetAssertionResponseItem_s* x, struct zx_str* y);

void zx_idp_GetAssertionResponseItem_PUT_AssertionItem(struct zx_idp_GetAssertionResponseItem_s* x, int n, struct zx_idp_AssertionItem_s* y);

void zx_idp_GetAssertionResponseItem_ADD_AssertionItem(struct zx_idp_GetAssertionResponseItem_s* x, int n, struct zx_idp_AssertionItem_s* z);

void zx_idp_GetAssertionResponseItem_DEL_AssertionItem(struct zx_idp_GetAssertionResponseItem_s* x, int n);

void zx_idp_GetAssertionResponseItem_REV_AssertionItem(struct zx_idp_GetAssertionResponseItem_s* x);

#endif
/* -------------------------- idp_GetProviderInfo -------------------------- */
/* refby( zx_e_Body_s ) */
#ifndef zx_idp_GetProviderInfo_EXT
#define zx_idp_GetProviderInfo_EXT
#endif

struct zx_idp_GetProviderInfo_s* zx_DEC_idp_GetProviderInfo(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_idp_GetProviderInfo_s* zx_NEW_idp_GetProviderInfo(struct zx_ctx* c);
void zx_FREE_idp_GetProviderInfo(struct zx_ctx* c, struct zx_idp_GetProviderInfo_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_idp_GetProviderInfo_s* zx_DEEP_CLONE_idp_GetProviderInfo(struct zx_ctx* c, struct zx_idp_GetProviderInfo_s* x, int dup_strs);
void zx_DUP_STRS_idp_GetProviderInfo(struct zx_ctx* c, struct zx_idp_GetProviderInfo_s* x);
int zx_WALK_SO_idp_GetProviderInfo(struct zx_ctx* c, struct zx_idp_GetProviderInfo_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_idp_GetProviderInfo(struct zx_ctx* c, struct zx_idp_GetProviderInfo_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_idp_GetProviderInfo(struct zx_ctx* c, struct zx_idp_GetProviderInfo_s* x);
int zx_LEN_WO_idp_GetProviderInfo(struct zx_ctx* c, struct zx_idp_GetProviderInfo_s* x);
char* zx_ENC_SO_idp_GetProviderInfo(struct zx_ctx* c, struct zx_idp_GetProviderInfo_s* x, char* p);
char* zx_ENC_WO_idp_GetProviderInfo(struct zx_ctx* c, struct zx_idp_GetProviderInfo_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_idp_GetProviderInfo(struct zx_ctx* c, struct zx_idp_GetProviderInfo_s* x);
struct zx_str* zx_EASY_ENC_WO_idp_GetProviderInfo(struct zx_ctx* c, struct zx_idp_GetProviderInfo_s* x);

struct zx_idp_GetProviderInfo_s {
  ZX_ELEM_EXT
  zx_idp_GetProviderInfo_EXT
  struct zx_elem_s* ProviderID;	/* {0,-1} xs:anyURI */
  struct zx_str* all;	/* {0,1} attribute xs:boolean */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_idp_GetProviderInfo_GET_all(struct zx_idp_GetProviderInfo_s* x);

struct zx_elem_s* zx_idp_GetProviderInfo_GET_ProviderID(struct zx_idp_GetProviderInfo_s* x, int n);

int zx_idp_GetProviderInfo_NUM_ProviderID(struct zx_idp_GetProviderInfo_s* x);

struct zx_elem_s* zx_idp_GetProviderInfo_POP_ProviderID(struct zx_idp_GetProviderInfo_s* x);

void zx_idp_GetProviderInfo_PUSH_ProviderID(struct zx_idp_GetProviderInfo_s* x, struct zx_elem_s* y);

void zx_idp_GetProviderInfo_PUT_all(struct zx_idp_GetProviderInfo_s* x, struct zx_str* y);

void zx_idp_GetProviderInfo_PUT_ProviderID(struct zx_idp_GetProviderInfo_s* x, int n, struct zx_elem_s* y);

void zx_idp_GetProviderInfo_ADD_ProviderID(struct zx_idp_GetProviderInfo_s* x, int n, struct zx_elem_s* z);

void zx_idp_GetProviderInfo_DEL_ProviderID(struct zx_idp_GetProviderInfo_s* x, int n);

void zx_idp_GetProviderInfo_REV_ProviderID(struct zx_idp_GetProviderInfo_s* x);

#endif
/* -------------------------- idp_GetProviderInfoResponse -------------------------- */
/* refby( zx_e_Body_s ) */
#ifndef zx_idp_GetProviderInfoResponse_EXT
#define zx_idp_GetProviderInfoResponse_EXT
#endif

struct zx_idp_GetProviderInfoResponse_s* zx_DEC_idp_GetProviderInfoResponse(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_idp_GetProviderInfoResponse_s* zx_NEW_idp_GetProviderInfoResponse(struct zx_ctx* c);
void zx_FREE_idp_GetProviderInfoResponse(struct zx_ctx* c, struct zx_idp_GetProviderInfoResponse_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_idp_GetProviderInfoResponse_s* zx_DEEP_CLONE_idp_GetProviderInfoResponse(struct zx_ctx* c, struct zx_idp_GetProviderInfoResponse_s* x, int dup_strs);
void zx_DUP_STRS_idp_GetProviderInfoResponse(struct zx_ctx* c, struct zx_idp_GetProviderInfoResponse_s* x);
int zx_WALK_SO_idp_GetProviderInfoResponse(struct zx_ctx* c, struct zx_idp_GetProviderInfoResponse_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_idp_GetProviderInfoResponse(struct zx_ctx* c, struct zx_idp_GetProviderInfoResponse_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_idp_GetProviderInfoResponse(struct zx_ctx* c, struct zx_idp_GetProviderInfoResponse_s* x);
int zx_LEN_WO_idp_GetProviderInfoResponse(struct zx_ctx* c, struct zx_idp_GetProviderInfoResponse_s* x);
char* zx_ENC_SO_idp_GetProviderInfoResponse(struct zx_ctx* c, struct zx_idp_GetProviderInfoResponse_s* x, char* p);
char* zx_ENC_WO_idp_GetProviderInfoResponse(struct zx_ctx* c, struct zx_idp_GetProviderInfoResponse_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_idp_GetProviderInfoResponse(struct zx_ctx* c, struct zx_idp_GetProviderInfoResponse_s* x);
struct zx_str* zx_EASY_ENC_WO_idp_GetProviderInfoResponse(struct zx_ctx* c, struct zx_idp_GetProviderInfoResponse_s* x);

struct zx_idp_GetProviderInfoResponse_s {
  ZX_ELEM_EXT
  zx_idp_GetProviderInfoResponse_EXT
  struct zx_lu_Status_s* Status;	/* {1,1} nada */
  struct zx_idp_ProviderInfo_s* ProviderInfo;	/* {0,-1} nada */
};

#ifdef ZX_ENA_GETPUT

struct zx_lu_Status_s* zx_idp_GetProviderInfoResponse_GET_Status(struct zx_idp_GetProviderInfoResponse_s* x, int n);
struct zx_idp_ProviderInfo_s* zx_idp_GetProviderInfoResponse_GET_ProviderInfo(struct zx_idp_GetProviderInfoResponse_s* x, int n);

int zx_idp_GetProviderInfoResponse_NUM_Status(struct zx_idp_GetProviderInfoResponse_s* x);
int zx_idp_GetProviderInfoResponse_NUM_ProviderInfo(struct zx_idp_GetProviderInfoResponse_s* x);

struct zx_lu_Status_s* zx_idp_GetProviderInfoResponse_POP_Status(struct zx_idp_GetProviderInfoResponse_s* x);
struct zx_idp_ProviderInfo_s* zx_idp_GetProviderInfoResponse_POP_ProviderInfo(struct zx_idp_GetProviderInfoResponse_s* x);

void zx_idp_GetProviderInfoResponse_PUSH_Status(struct zx_idp_GetProviderInfoResponse_s* x, struct zx_lu_Status_s* y);
void zx_idp_GetProviderInfoResponse_PUSH_ProviderInfo(struct zx_idp_GetProviderInfoResponse_s* x, struct zx_idp_ProviderInfo_s* y);


void zx_idp_GetProviderInfoResponse_PUT_Status(struct zx_idp_GetProviderInfoResponse_s* x, int n, struct zx_lu_Status_s* y);
void zx_idp_GetProviderInfoResponse_PUT_ProviderInfo(struct zx_idp_GetProviderInfoResponse_s* x, int n, struct zx_idp_ProviderInfo_s* y);

void zx_idp_GetProviderInfoResponse_ADD_Status(struct zx_idp_GetProviderInfoResponse_s* x, int n, struct zx_lu_Status_s* z);
void zx_idp_GetProviderInfoResponse_ADD_ProviderInfo(struct zx_idp_GetProviderInfoResponse_s* x, int n, struct zx_idp_ProviderInfo_s* z);

void zx_idp_GetProviderInfoResponse_DEL_Status(struct zx_idp_GetProviderInfoResponse_s* x, int n);
void zx_idp_GetProviderInfoResponse_DEL_ProviderInfo(struct zx_idp_GetProviderInfoResponse_s* x, int n);

void zx_idp_GetProviderInfoResponse_REV_Status(struct zx_idp_GetProviderInfoResponse_s* x);
void zx_idp_GetProviderInfoResponse_REV_ProviderInfo(struct zx_idp_GetProviderInfoResponse_s* x);

#endif
/* -------------------------- idp_MEDInfo -------------------------- */
/* refby( zx_idp_AssertionItem_s ) */
#ifndef zx_idp_MEDInfo_EXT
#define zx_idp_MEDInfo_EXT
#endif

struct zx_idp_MEDInfo_s* zx_DEC_idp_MEDInfo(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_idp_MEDInfo_s* zx_NEW_idp_MEDInfo(struct zx_ctx* c);
void zx_FREE_idp_MEDInfo(struct zx_ctx* c, struct zx_idp_MEDInfo_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_idp_MEDInfo_s* zx_DEEP_CLONE_idp_MEDInfo(struct zx_ctx* c, struct zx_idp_MEDInfo_s* x, int dup_strs);
void zx_DUP_STRS_idp_MEDInfo(struct zx_ctx* c, struct zx_idp_MEDInfo_s* x);
int zx_WALK_SO_idp_MEDInfo(struct zx_ctx* c, struct zx_idp_MEDInfo_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_idp_MEDInfo(struct zx_ctx* c, struct zx_idp_MEDInfo_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_idp_MEDInfo(struct zx_ctx* c, struct zx_idp_MEDInfo_s* x);
int zx_LEN_WO_idp_MEDInfo(struct zx_ctx* c, struct zx_idp_MEDInfo_s* x);
char* zx_ENC_SO_idp_MEDInfo(struct zx_ctx* c, struct zx_idp_MEDInfo_s* x, char* p);
char* zx_ENC_WO_idp_MEDInfo(struct zx_ctx* c, struct zx_idp_MEDInfo_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_idp_MEDInfo(struct zx_ctx* c, struct zx_idp_MEDInfo_s* x);
struct zx_str* zx_EASY_ENC_WO_idp_MEDInfo(struct zx_ctx* c, struct zx_idp_MEDInfo_s* x);

struct zx_idp_MEDInfo_s {
  ZX_ELEM_EXT
  zx_idp_MEDInfo_EXT
  struct zx_sa_NameID_s* NameID;	/* {1,-1} nada */
  struct zx_sa_AttributeStatement_s* AttributeStatement;	/* {0,-1} nada */
};

#ifdef ZX_ENA_GETPUT

struct zx_sa_NameID_s* zx_idp_MEDInfo_GET_NameID(struct zx_idp_MEDInfo_s* x, int n);
struct zx_sa_AttributeStatement_s* zx_idp_MEDInfo_GET_AttributeStatement(struct zx_idp_MEDInfo_s* x, int n);

int zx_idp_MEDInfo_NUM_NameID(struct zx_idp_MEDInfo_s* x);
int zx_idp_MEDInfo_NUM_AttributeStatement(struct zx_idp_MEDInfo_s* x);

struct zx_sa_NameID_s* zx_idp_MEDInfo_POP_NameID(struct zx_idp_MEDInfo_s* x);
struct zx_sa_AttributeStatement_s* zx_idp_MEDInfo_POP_AttributeStatement(struct zx_idp_MEDInfo_s* x);

void zx_idp_MEDInfo_PUSH_NameID(struct zx_idp_MEDInfo_s* x, struct zx_sa_NameID_s* y);
void zx_idp_MEDInfo_PUSH_AttributeStatement(struct zx_idp_MEDInfo_s* x, struct zx_sa_AttributeStatement_s* y);


void zx_idp_MEDInfo_PUT_NameID(struct zx_idp_MEDInfo_s* x, int n, struct zx_sa_NameID_s* y);
void zx_idp_MEDInfo_PUT_AttributeStatement(struct zx_idp_MEDInfo_s* x, int n, struct zx_sa_AttributeStatement_s* y);

void zx_idp_MEDInfo_ADD_NameID(struct zx_idp_MEDInfo_s* x, int n, struct zx_sa_NameID_s* z);
void zx_idp_MEDInfo_ADD_AttributeStatement(struct zx_idp_MEDInfo_s* x, int n, struct zx_sa_AttributeStatement_s* z);

void zx_idp_MEDInfo_DEL_NameID(struct zx_idp_MEDInfo_s* x, int n);
void zx_idp_MEDInfo_DEL_AttributeStatement(struct zx_idp_MEDInfo_s* x, int n);

void zx_idp_MEDInfo_REV_NameID(struct zx_idp_MEDInfo_s* x);
void zx_idp_MEDInfo_REV_AttributeStatement(struct zx_idp_MEDInfo_s* x);

#endif
/* -------------------------- idp_ProviderInfo -------------------------- */
/* refby( zx_idp_GetProviderInfoResponse_s ) */
#ifndef zx_idp_ProviderInfo_EXT
#define zx_idp_ProviderInfo_EXT
#endif

struct zx_idp_ProviderInfo_s* zx_DEC_idp_ProviderInfo(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_idp_ProviderInfo_s* zx_NEW_idp_ProviderInfo(struct zx_ctx* c);
void zx_FREE_idp_ProviderInfo(struct zx_ctx* c, struct zx_idp_ProviderInfo_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_idp_ProviderInfo_s* zx_DEEP_CLONE_idp_ProviderInfo(struct zx_ctx* c, struct zx_idp_ProviderInfo_s* x, int dup_strs);
void zx_DUP_STRS_idp_ProviderInfo(struct zx_ctx* c, struct zx_idp_ProviderInfo_s* x);
int zx_WALK_SO_idp_ProviderInfo(struct zx_ctx* c, struct zx_idp_ProviderInfo_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_idp_ProviderInfo(struct zx_ctx* c, struct zx_idp_ProviderInfo_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_idp_ProviderInfo(struct zx_ctx* c, struct zx_idp_ProviderInfo_s* x);
int zx_LEN_WO_idp_ProviderInfo(struct zx_ctx* c, struct zx_idp_ProviderInfo_s* x);
char* zx_ENC_SO_idp_ProviderInfo(struct zx_ctx* c, struct zx_idp_ProviderInfo_s* x, char* p);
char* zx_ENC_WO_idp_ProviderInfo(struct zx_ctx* c, struct zx_idp_ProviderInfo_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_idp_ProviderInfo(struct zx_ctx* c, struct zx_idp_ProviderInfo_s* x);
struct zx_str* zx_EASY_ENC_WO_idp_ProviderInfo(struct zx_ctx* c, struct zx_idp_ProviderInfo_s* x);

struct zx_idp_ProviderInfo_s {
  ZX_ELEM_EXT
  zx_idp_ProviderInfo_EXT
  struct zx_str* name;	/* {0,1} attribute xs:ID */
  struct zx_str* providerID;	/* {1,1} attribute xs:anyURI */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_idp_ProviderInfo_GET_name(struct zx_idp_ProviderInfo_s* x);
struct zx_str* zx_idp_ProviderInfo_GET_providerID(struct zx_idp_ProviderInfo_s* x);





void zx_idp_ProviderInfo_PUT_name(struct zx_idp_ProviderInfo_s* x, struct zx_str* y);
void zx_idp_ProviderInfo_PUT_providerID(struct zx_idp_ProviderInfo_s* x, struct zx_str* y);





#endif
/* -------------------------- idp_SubjectRestriction -------------------------- */
/* refby( zx_sa_Conditions_s ) */
#ifndef zx_idp_SubjectRestriction_EXT
#define zx_idp_SubjectRestriction_EXT
#endif

struct zx_idp_SubjectRestriction_s* zx_DEC_idp_SubjectRestriction(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_idp_SubjectRestriction_s* zx_NEW_idp_SubjectRestriction(struct zx_ctx* c);
void zx_FREE_idp_SubjectRestriction(struct zx_ctx* c, struct zx_idp_SubjectRestriction_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_idp_SubjectRestriction_s* zx_DEEP_CLONE_idp_SubjectRestriction(struct zx_ctx* c, struct zx_idp_SubjectRestriction_s* x, int dup_strs);
void zx_DUP_STRS_idp_SubjectRestriction(struct zx_ctx* c, struct zx_idp_SubjectRestriction_s* x);
int zx_WALK_SO_idp_SubjectRestriction(struct zx_ctx* c, struct zx_idp_SubjectRestriction_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_idp_SubjectRestriction(struct zx_ctx* c, struct zx_idp_SubjectRestriction_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_idp_SubjectRestriction(struct zx_ctx* c, struct zx_idp_SubjectRestriction_s* x);
int zx_LEN_WO_idp_SubjectRestriction(struct zx_ctx* c, struct zx_idp_SubjectRestriction_s* x);
char* zx_ENC_SO_idp_SubjectRestriction(struct zx_ctx* c, struct zx_idp_SubjectRestriction_s* x, char* p);
char* zx_ENC_WO_idp_SubjectRestriction(struct zx_ctx* c, struct zx_idp_SubjectRestriction_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_idp_SubjectRestriction(struct zx_ctx* c, struct zx_idp_SubjectRestriction_s* x);
struct zx_str* zx_EASY_ENC_WO_idp_SubjectRestriction(struct zx_ctx* c, struct zx_idp_SubjectRestriction_s* x);

struct zx_idp_SubjectRestriction_s {
  ZX_ELEM_EXT
  zx_idp_SubjectRestriction_EXT
  struct zx_sa_Subject_s* Subject;	/* {1,-1} nada */
};

#ifdef ZX_ENA_GETPUT

struct zx_sa_Subject_s* zx_idp_SubjectRestriction_GET_Subject(struct zx_idp_SubjectRestriction_s* x, int n);

int zx_idp_SubjectRestriction_NUM_Subject(struct zx_idp_SubjectRestriction_s* x);

struct zx_sa_Subject_s* zx_idp_SubjectRestriction_POP_Subject(struct zx_idp_SubjectRestriction_s* x);

void zx_idp_SubjectRestriction_PUSH_Subject(struct zx_idp_SubjectRestriction_s* x, struct zx_sa_Subject_s* y);


void zx_idp_SubjectRestriction_PUT_Subject(struct zx_idp_SubjectRestriction_s* x, int n, struct zx_sa_Subject_s* y);

void zx_idp_SubjectRestriction_ADD_Subject(struct zx_idp_SubjectRestriction_s* x, int n, struct zx_sa_Subject_s* z);

void zx_idp_SubjectRestriction_DEL_Subject(struct zx_idp_SubjectRestriction_s* x, int n);

void zx_idp_SubjectRestriction_REV_Subject(struct zx_idp_SubjectRestriction_s* x);

#endif

#endif
