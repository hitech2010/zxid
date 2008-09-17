/* c/zx-sec12-data.h - WARNING: This header was automatically generated. DO NOT EDIT!
 * $Id$ */
/* Datastructure design, topography, and layout
 * Copyright (c) 2006 Sampo Kellomaki (sampo@iki.fi),
 * All Rights Reserved. NO WARRANTY. See file COPYING for
 * terms and conditions of use. Element and attributes names as well
 * as some topography are derived from schema descriptions that were used as
 * input and may be subject to their own copright. */

#ifndef _c_zx_sec12_data_h
#define _c_zx_sec12_data_h

#include "zx.h"
#include "c/zx-const.h"
#include "c/zx-data.h"

#ifndef ZX_ELEM_EXT
#define ZX_ELEM_EXT  /* This extension point should be defined by who includes this file. */
#endif

/* -------------------------- sec12_ProxyInfoConfirmationData -------------------------- */
/* refby( ) */
#ifndef zx_sec12_ProxyInfoConfirmationData_EXT
#define zx_sec12_ProxyInfoConfirmationData_EXT
#endif

struct zx_sec12_ProxyInfoConfirmationData_s* zx_DEC_sec12_ProxyInfoConfirmationData(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_sec12_ProxyInfoConfirmationData_s* zx_NEW_sec12_ProxyInfoConfirmationData(struct zx_ctx* c);
void zx_FREE_sec12_ProxyInfoConfirmationData(struct zx_ctx* c, struct zx_sec12_ProxyInfoConfirmationData_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_sec12_ProxyInfoConfirmationData_s* zx_DEEP_CLONE_sec12_ProxyInfoConfirmationData(struct zx_ctx* c, struct zx_sec12_ProxyInfoConfirmationData_s* x, int dup_strs);
void zx_DUP_STRS_sec12_ProxyInfoConfirmationData(struct zx_ctx* c, struct zx_sec12_ProxyInfoConfirmationData_s* x);
int zx_WALK_SO_sec12_ProxyInfoConfirmationData(struct zx_ctx* c, struct zx_sec12_ProxyInfoConfirmationData_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_sec12_ProxyInfoConfirmationData(struct zx_ctx* c, struct zx_sec12_ProxyInfoConfirmationData_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_sec12_ProxyInfoConfirmationData(struct zx_ctx* c, struct zx_sec12_ProxyInfoConfirmationData_s* x);
int zx_LEN_WO_sec12_ProxyInfoConfirmationData(struct zx_ctx* c, struct zx_sec12_ProxyInfoConfirmationData_s* x);
char* zx_ENC_SO_sec12_ProxyInfoConfirmationData(struct zx_ctx* c, struct zx_sec12_ProxyInfoConfirmationData_s* x, char* p);
char* zx_ENC_WO_sec12_ProxyInfoConfirmationData(struct zx_ctx* c, struct zx_sec12_ProxyInfoConfirmationData_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_sec12_ProxyInfoConfirmationData(struct zx_ctx* c, struct zx_sec12_ProxyInfoConfirmationData_s* x);
struct zx_str* zx_EASY_ENC_WO_sec12_ProxyInfoConfirmationData(struct zx_ctx* c, struct zx_sec12_ProxyInfoConfirmationData_s* x);

struct zx_sec12_ProxyInfoConfirmationData_s {
  ZX_ELEM_EXT
  zx_sec12_ProxyInfoConfirmationData_EXT
  struct zx_elem_s* AssertionIDReference;	/* {1,1} xs:NCName */
  struct zx_elem_s* Issuer;	/* {1,1} xs:string */
  struct zx_elem_s* IssueInstant;	/* {1,1} xs:dateTime */
  struct zx_ds_Signature_s* Signature;	/* {0,1} nada */
  struct zx_str* id;	/* {0,1} attribute xs:ID */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_sec12_ProxyInfoConfirmationData_GET_id(struct zx_sec12_ProxyInfoConfirmationData_s* x);

struct zx_elem_s* zx_sec12_ProxyInfoConfirmationData_GET_AssertionIDReference(struct zx_sec12_ProxyInfoConfirmationData_s* x, int n);
struct zx_elem_s* zx_sec12_ProxyInfoConfirmationData_GET_Issuer(struct zx_sec12_ProxyInfoConfirmationData_s* x, int n);
struct zx_elem_s* zx_sec12_ProxyInfoConfirmationData_GET_IssueInstant(struct zx_sec12_ProxyInfoConfirmationData_s* x, int n);
struct zx_ds_Signature_s* zx_sec12_ProxyInfoConfirmationData_GET_Signature(struct zx_sec12_ProxyInfoConfirmationData_s* x, int n);

int zx_sec12_ProxyInfoConfirmationData_NUM_AssertionIDReference(struct zx_sec12_ProxyInfoConfirmationData_s* x);
int zx_sec12_ProxyInfoConfirmationData_NUM_Issuer(struct zx_sec12_ProxyInfoConfirmationData_s* x);
int zx_sec12_ProxyInfoConfirmationData_NUM_IssueInstant(struct zx_sec12_ProxyInfoConfirmationData_s* x);
int zx_sec12_ProxyInfoConfirmationData_NUM_Signature(struct zx_sec12_ProxyInfoConfirmationData_s* x);

struct zx_elem_s* zx_sec12_ProxyInfoConfirmationData_POP_AssertionIDReference(struct zx_sec12_ProxyInfoConfirmationData_s* x);
struct zx_elem_s* zx_sec12_ProxyInfoConfirmationData_POP_Issuer(struct zx_sec12_ProxyInfoConfirmationData_s* x);
struct zx_elem_s* zx_sec12_ProxyInfoConfirmationData_POP_IssueInstant(struct zx_sec12_ProxyInfoConfirmationData_s* x);
struct zx_ds_Signature_s* zx_sec12_ProxyInfoConfirmationData_POP_Signature(struct zx_sec12_ProxyInfoConfirmationData_s* x);

void zx_sec12_ProxyInfoConfirmationData_PUSH_AssertionIDReference(struct zx_sec12_ProxyInfoConfirmationData_s* x, struct zx_elem_s* y);
void zx_sec12_ProxyInfoConfirmationData_PUSH_Issuer(struct zx_sec12_ProxyInfoConfirmationData_s* x, struct zx_elem_s* y);
void zx_sec12_ProxyInfoConfirmationData_PUSH_IssueInstant(struct zx_sec12_ProxyInfoConfirmationData_s* x, struct zx_elem_s* y);
void zx_sec12_ProxyInfoConfirmationData_PUSH_Signature(struct zx_sec12_ProxyInfoConfirmationData_s* x, struct zx_ds_Signature_s* y);

void zx_sec12_ProxyInfoConfirmationData_PUT_id(struct zx_sec12_ProxyInfoConfirmationData_s* x, struct zx_str* y);

void zx_sec12_ProxyInfoConfirmationData_PUT_AssertionIDReference(struct zx_sec12_ProxyInfoConfirmationData_s* x, int n, struct zx_elem_s* y);
void zx_sec12_ProxyInfoConfirmationData_PUT_Issuer(struct zx_sec12_ProxyInfoConfirmationData_s* x, int n, struct zx_elem_s* y);
void zx_sec12_ProxyInfoConfirmationData_PUT_IssueInstant(struct zx_sec12_ProxyInfoConfirmationData_s* x, int n, struct zx_elem_s* y);
void zx_sec12_ProxyInfoConfirmationData_PUT_Signature(struct zx_sec12_ProxyInfoConfirmationData_s* x, int n, struct zx_ds_Signature_s* y);

void zx_sec12_ProxyInfoConfirmationData_ADD_AssertionIDReference(struct zx_sec12_ProxyInfoConfirmationData_s* x, int n, struct zx_elem_s* z);
void zx_sec12_ProxyInfoConfirmationData_ADD_Issuer(struct zx_sec12_ProxyInfoConfirmationData_s* x, int n, struct zx_elem_s* z);
void zx_sec12_ProxyInfoConfirmationData_ADD_IssueInstant(struct zx_sec12_ProxyInfoConfirmationData_s* x, int n, struct zx_elem_s* z);
void zx_sec12_ProxyInfoConfirmationData_ADD_Signature(struct zx_sec12_ProxyInfoConfirmationData_s* x, int n, struct zx_ds_Signature_s* z);

void zx_sec12_ProxyInfoConfirmationData_DEL_AssertionIDReference(struct zx_sec12_ProxyInfoConfirmationData_s* x, int n);
void zx_sec12_ProxyInfoConfirmationData_DEL_Issuer(struct zx_sec12_ProxyInfoConfirmationData_s* x, int n);
void zx_sec12_ProxyInfoConfirmationData_DEL_IssueInstant(struct zx_sec12_ProxyInfoConfirmationData_s* x, int n);
void zx_sec12_ProxyInfoConfirmationData_DEL_Signature(struct zx_sec12_ProxyInfoConfirmationData_s* x, int n);

void zx_sec12_ProxyInfoConfirmationData_REV_AssertionIDReference(struct zx_sec12_ProxyInfoConfirmationData_s* x);
void zx_sec12_ProxyInfoConfirmationData_REV_Issuer(struct zx_sec12_ProxyInfoConfirmationData_s* x);
void zx_sec12_ProxyInfoConfirmationData_REV_IssueInstant(struct zx_sec12_ProxyInfoConfirmationData_s* x);
void zx_sec12_ProxyInfoConfirmationData_REV_Signature(struct zx_sec12_ProxyInfoConfirmationData_s* x);

#endif
/* -------------------------- sec12_ProxySubject -------------------------- */
/* refby( zx_sec12_ResourceAccessStatement_s zx_sec12_SessionContextStatement_s ) */
#ifndef zx_sec12_ProxySubject_EXT
#define zx_sec12_ProxySubject_EXT
#endif

struct zx_sec12_ProxySubject_s* zx_DEC_sec12_ProxySubject(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_sec12_ProxySubject_s* zx_NEW_sec12_ProxySubject(struct zx_ctx* c);
void zx_FREE_sec12_ProxySubject(struct zx_ctx* c, struct zx_sec12_ProxySubject_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_sec12_ProxySubject_s* zx_DEEP_CLONE_sec12_ProxySubject(struct zx_ctx* c, struct zx_sec12_ProxySubject_s* x, int dup_strs);
void zx_DUP_STRS_sec12_ProxySubject(struct zx_ctx* c, struct zx_sec12_ProxySubject_s* x);
int zx_WALK_SO_sec12_ProxySubject(struct zx_ctx* c, struct zx_sec12_ProxySubject_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_sec12_ProxySubject(struct zx_ctx* c, struct zx_sec12_ProxySubject_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_sec12_ProxySubject(struct zx_ctx* c, struct zx_sec12_ProxySubject_s* x);
int zx_LEN_WO_sec12_ProxySubject(struct zx_ctx* c, struct zx_sec12_ProxySubject_s* x);
char* zx_ENC_SO_sec12_ProxySubject(struct zx_ctx* c, struct zx_sec12_ProxySubject_s* x, char* p);
char* zx_ENC_WO_sec12_ProxySubject(struct zx_ctx* c, struct zx_sec12_ProxySubject_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_sec12_ProxySubject(struct zx_ctx* c, struct zx_sec12_ProxySubject_s* x);
struct zx_str* zx_EASY_ENC_WO_sec12_ProxySubject(struct zx_ctx* c, struct zx_sec12_ProxySubject_s* x);

struct zx_sec12_ProxySubject_s {
  ZX_ELEM_EXT
  zx_sec12_ProxySubject_EXT
  struct zx_sa11_NameIdentifier_s* NameIdentifier;	/* {0,1} nada */
  struct zx_sa11_SubjectConfirmation_s* SubjectConfirmation;	/* {0,1} nada */
};

#ifdef ZX_ENA_GETPUT

struct zx_sa11_NameIdentifier_s* zx_sec12_ProxySubject_GET_NameIdentifier(struct zx_sec12_ProxySubject_s* x, int n);
struct zx_sa11_SubjectConfirmation_s* zx_sec12_ProxySubject_GET_SubjectConfirmation(struct zx_sec12_ProxySubject_s* x, int n);

int zx_sec12_ProxySubject_NUM_NameIdentifier(struct zx_sec12_ProxySubject_s* x);
int zx_sec12_ProxySubject_NUM_SubjectConfirmation(struct zx_sec12_ProxySubject_s* x);

struct zx_sa11_NameIdentifier_s* zx_sec12_ProxySubject_POP_NameIdentifier(struct zx_sec12_ProxySubject_s* x);
struct zx_sa11_SubjectConfirmation_s* zx_sec12_ProxySubject_POP_SubjectConfirmation(struct zx_sec12_ProxySubject_s* x);

void zx_sec12_ProxySubject_PUSH_NameIdentifier(struct zx_sec12_ProxySubject_s* x, struct zx_sa11_NameIdentifier_s* y);
void zx_sec12_ProxySubject_PUSH_SubjectConfirmation(struct zx_sec12_ProxySubject_s* x, struct zx_sa11_SubjectConfirmation_s* y);


void zx_sec12_ProxySubject_PUT_NameIdentifier(struct zx_sec12_ProxySubject_s* x, int n, struct zx_sa11_NameIdentifier_s* y);
void zx_sec12_ProxySubject_PUT_SubjectConfirmation(struct zx_sec12_ProxySubject_s* x, int n, struct zx_sa11_SubjectConfirmation_s* y);

void zx_sec12_ProxySubject_ADD_NameIdentifier(struct zx_sec12_ProxySubject_s* x, int n, struct zx_sa11_NameIdentifier_s* z);
void zx_sec12_ProxySubject_ADD_SubjectConfirmation(struct zx_sec12_ProxySubject_s* x, int n, struct zx_sa11_SubjectConfirmation_s* z);

void zx_sec12_ProxySubject_DEL_NameIdentifier(struct zx_sec12_ProxySubject_s* x, int n);
void zx_sec12_ProxySubject_DEL_SubjectConfirmation(struct zx_sec12_ProxySubject_s* x, int n);

void zx_sec12_ProxySubject_REV_NameIdentifier(struct zx_sec12_ProxySubject_s* x);
void zx_sec12_ProxySubject_REV_SubjectConfirmation(struct zx_sec12_ProxySubject_s* x);

#endif
/* -------------------------- sec12_ProxyTransitedStatement -------------------------- */
/* refby( ) */
#ifndef zx_sec12_ProxyTransitedStatement_EXT
#define zx_sec12_ProxyTransitedStatement_EXT
#endif

struct zx_sec12_ProxyTransitedStatement_s* zx_DEC_sec12_ProxyTransitedStatement(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_sec12_ProxyTransitedStatement_s* zx_NEW_sec12_ProxyTransitedStatement(struct zx_ctx* c);
void zx_FREE_sec12_ProxyTransitedStatement(struct zx_ctx* c, struct zx_sec12_ProxyTransitedStatement_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_sec12_ProxyTransitedStatement_s* zx_DEEP_CLONE_sec12_ProxyTransitedStatement(struct zx_ctx* c, struct zx_sec12_ProxyTransitedStatement_s* x, int dup_strs);
void zx_DUP_STRS_sec12_ProxyTransitedStatement(struct zx_ctx* c, struct zx_sec12_ProxyTransitedStatement_s* x);
int zx_WALK_SO_sec12_ProxyTransitedStatement(struct zx_ctx* c, struct zx_sec12_ProxyTransitedStatement_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_sec12_ProxyTransitedStatement(struct zx_ctx* c, struct zx_sec12_ProxyTransitedStatement_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_sec12_ProxyTransitedStatement(struct zx_ctx* c, struct zx_sec12_ProxyTransitedStatement_s* x);
int zx_LEN_WO_sec12_ProxyTransitedStatement(struct zx_ctx* c, struct zx_sec12_ProxyTransitedStatement_s* x);
char* zx_ENC_SO_sec12_ProxyTransitedStatement(struct zx_ctx* c, struct zx_sec12_ProxyTransitedStatement_s* x, char* p);
char* zx_ENC_WO_sec12_ProxyTransitedStatement(struct zx_ctx* c, struct zx_sec12_ProxyTransitedStatement_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_sec12_ProxyTransitedStatement(struct zx_ctx* c, struct zx_sec12_ProxyTransitedStatement_s* x);
struct zx_str* zx_EASY_ENC_WO_sec12_ProxyTransitedStatement(struct zx_ctx* c, struct zx_sec12_ProxyTransitedStatement_s* x);

struct zx_sec12_ProxyTransitedStatement_s {
  ZX_ELEM_EXT
  zx_sec12_ProxyTransitedStatement_EXT
  struct zx_sa11_Subject_s* Subject;	/* {1,1} nada */
};

#ifdef ZX_ENA_GETPUT

struct zx_sa11_Subject_s* zx_sec12_ProxyTransitedStatement_GET_Subject(struct zx_sec12_ProxyTransitedStatement_s* x, int n);

int zx_sec12_ProxyTransitedStatement_NUM_Subject(struct zx_sec12_ProxyTransitedStatement_s* x);

struct zx_sa11_Subject_s* zx_sec12_ProxyTransitedStatement_POP_Subject(struct zx_sec12_ProxyTransitedStatement_s* x);

void zx_sec12_ProxyTransitedStatement_PUSH_Subject(struct zx_sec12_ProxyTransitedStatement_s* x, struct zx_sa11_Subject_s* y);


void zx_sec12_ProxyTransitedStatement_PUT_Subject(struct zx_sec12_ProxyTransitedStatement_s* x, int n, struct zx_sa11_Subject_s* y);

void zx_sec12_ProxyTransitedStatement_ADD_Subject(struct zx_sec12_ProxyTransitedStatement_s* x, int n, struct zx_sa11_Subject_s* z);

void zx_sec12_ProxyTransitedStatement_DEL_Subject(struct zx_sec12_ProxyTransitedStatement_s* x, int n);

void zx_sec12_ProxyTransitedStatement_REV_Subject(struct zx_sec12_ProxyTransitedStatement_s* x);

#endif
/* -------------------------- sec12_ResourceAccessStatement -------------------------- */
/* refby( ) */
#ifndef zx_sec12_ResourceAccessStatement_EXT
#define zx_sec12_ResourceAccessStatement_EXT
#endif

struct zx_sec12_ResourceAccessStatement_s* zx_DEC_sec12_ResourceAccessStatement(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_sec12_ResourceAccessStatement_s* zx_NEW_sec12_ResourceAccessStatement(struct zx_ctx* c);
void zx_FREE_sec12_ResourceAccessStatement(struct zx_ctx* c, struct zx_sec12_ResourceAccessStatement_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_sec12_ResourceAccessStatement_s* zx_DEEP_CLONE_sec12_ResourceAccessStatement(struct zx_ctx* c, struct zx_sec12_ResourceAccessStatement_s* x, int dup_strs);
void zx_DUP_STRS_sec12_ResourceAccessStatement(struct zx_ctx* c, struct zx_sec12_ResourceAccessStatement_s* x);
int zx_WALK_SO_sec12_ResourceAccessStatement(struct zx_ctx* c, struct zx_sec12_ResourceAccessStatement_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_sec12_ResourceAccessStatement(struct zx_ctx* c, struct zx_sec12_ResourceAccessStatement_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_sec12_ResourceAccessStatement(struct zx_ctx* c, struct zx_sec12_ResourceAccessStatement_s* x);
int zx_LEN_WO_sec12_ResourceAccessStatement(struct zx_ctx* c, struct zx_sec12_ResourceAccessStatement_s* x);
char* zx_ENC_SO_sec12_ResourceAccessStatement(struct zx_ctx* c, struct zx_sec12_ResourceAccessStatement_s* x, char* p);
char* zx_ENC_WO_sec12_ResourceAccessStatement(struct zx_ctx* c, struct zx_sec12_ResourceAccessStatement_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_sec12_ResourceAccessStatement(struct zx_ctx* c, struct zx_sec12_ResourceAccessStatement_s* x);
struct zx_str* zx_EASY_ENC_WO_sec12_ResourceAccessStatement(struct zx_ctx* c, struct zx_sec12_ResourceAccessStatement_s* x);

struct zx_sec12_ResourceAccessStatement_s {
  ZX_ELEM_EXT
  zx_sec12_ResourceAccessStatement_EXT
  struct zx_sa11_Subject_s* Subject;	/* {1,1} nada */
  struct zx_di12_ResourceID_s* ResourceID;	/* {0,1} nada */
  struct zx_di12_EncryptedResourceID_s* EncryptedResourceID;	/* {0,1} nada */
  struct zx_sec12_ProxySubject_s* ProxySubject;	/* {1,1} nada */
  struct zx_sec12_SessionContext_s* SessionContext;	/* {0,1} nada */
};

#ifdef ZX_ENA_GETPUT

struct zx_sa11_Subject_s* zx_sec12_ResourceAccessStatement_GET_Subject(struct zx_sec12_ResourceAccessStatement_s* x, int n);
struct zx_di12_ResourceID_s* zx_sec12_ResourceAccessStatement_GET_ResourceID(struct zx_sec12_ResourceAccessStatement_s* x, int n);
struct zx_di12_EncryptedResourceID_s* zx_sec12_ResourceAccessStatement_GET_EncryptedResourceID(struct zx_sec12_ResourceAccessStatement_s* x, int n);
struct zx_sec12_ProxySubject_s* zx_sec12_ResourceAccessStatement_GET_ProxySubject(struct zx_sec12_ResourceAccessStatement_s* x, int n);
struct zx_sec12_SessionContext_s* zx_sec12_ResourceAccessStatement_GET_SessionContext(struct zx_sec12_ResourceAccessStatement_s* x, int n);

int zx_sec12_ResourceAccessStatement_NUM_Subject(struct zx_sec12_ResourceAccessStatement_s* x);
int zx_sec12_ResourceAccessStatement_NUM_ResourceID(struct zx_sec12_ResourceAccessStatement_s* x);
int zx_sec12_ResourceAccessStatement_NUM_EncryptedResourceID(struct zx_sec12_ResourceAccessStatement_s* x);
int zx_sec12_ResourceAccessStatement_NUM_ProxySubject(struct zx_sec12_ResourceAccessStatement_s* x);
int zx_sec12_ResourceAccessStatement_NUM_SessionContext(struct zx_sec12_ResourceAccessStatement_s* x);

struct zx_sa11_Subject_s* zx_sec12_ResourceAccessStatement_POP_Subject(struct zx_sec12_ResourceAccessStatement_s* x);
struct zx_di12_ResourceID_s* zx_sec12_ResourceAccessStatement_POP_ResourceID(struct zx_sec12_ResourceAccessStatement_s* x);
struct zx_di12_EncryptedResourceID_s* zx_sec12_ResourceAccessStatement_POP_EncryptedResourceID(struct zx_sec12_ResourceAccessStatement_s* x);
struct zx_sec12_ProxySubject_s* zx_sec12_ResourceAccessStatement_POP_ProxySubject(struct zx_sec12_ResourceAccessStatement_s* x);
struct zx_sec12_SessionContext_s* zx_sec12_ResourceAccessStatement_POP_SessionContext(struct zx_sec12_ResourceAccessStatement_s* x);

void zx_sec12_ResourceAccessStatement_PUSH_Subject(struct zx_sec12_ResourceAccessStatement_s* x, struct zx_sa11_Subject_s* y);
void zx_sec12_ResourceAccessStatement_PUSH_ResourceID(struct zx_sec12_ResourceAccessStatement_s* x, struct zx_di12_ResourceID_s* y);
void zx_sec12_ResourceAccessStatement_PUSH_EncryptedResourceID(struct zx_sec12_ResourceAccessStatement_s* x, struct zx_di12_EncryptedResourceID_s* y);
void zx_sec12_ResourceAccessStatement_PUSH_ProxySubject(struct zx_sec12_ResourceAccessStatement_s* x, struct zx_sec12_ProxySubject_s* y);
void zx_sec12_ResourceAccessStatement_PUSH_SessionContext(struct zx_sec12_ResourceAccessStatement_s* x, struct zx_sec12_SessionContext_s* y);


void zx_sec12_ResourceAccessStatement_PUT_Subject(struct zx_sec12_ResourceAccessStatement_s* x, int n, struct zx_sa11_Subject_s* y);
void zx_sec12_ResourceAccessStatement_PUT_ResourceID(struct zx_sec12_ResourceAccessStatement_s* x, int n, struct zx_di12_ResourceID_s* y);
void zx_sec12_ResourceAccessStatement_PUT_EncryptedResourceID(struct zx_sec12_ResourceAccessStatement_s* x, int n, struct zx_di12_EncryptedResourceID_s* y);
void zx_sec12_ResourceAccessStatement_PUT_ProxySubject(struct zx_sec12_ResourceAccessStatement_s* x, int n, struct zx_sec12_ProxySubject_s* y);
void zx_sec12_ResourceAccessStatement_PUT_SessionContext(struct zx_sec12_ResourceAccessStatement_s* x, int n, struct zx_sec12_SessionContext_s* y);

void zx_sec12_ResourceAccessStatement_ADD_Subject(struct zx_sec12_ResourceAccessStatement_s* x, int n, struct zx_sa11_Subject_s* z);
void zx_sec12_ResourceAccessStatement_ADD_ResourceID(struct zx_sec12_ResourceAccessStatement_s* x, int n, struct zx_di12_ResourceID_s* z);
void zx_sec12_ResourceAccessStatement_ADD_EncryptedResourceID(struct zx_sec12_ResourceAccessStatement_s* x, int n, struct zx_di12_EncryptedResourceID_s* z);
void zx_sec12_ResourceAccessStatement_ADD_ProxySubject(struct zx_sec12_ResourceAccessStatement_s* x, int n, struct zx_sec12_ProxySubject_s* z);
void zx_sec12_ResourceAccessStatement_ADD_SessionContext(struct zx_sec12_ResourceAccessStatement_s* x, int n, struct zx_sec12_SessionContext_s* z);

void zx_sec12_ResourceAccessStatement_DEL_Subject(struct zx_sec12_ResourceAccessStatement_s* x, int n);
void zx_sec12_ResourceAccessStatement_DEL_ResourceID(struct zx_sec12_ResourceAccessStatement_s* x, int n);
void zx_sec12_ResourceAccessStatement_DEL_EncryptedResourceID(struct zx_sec12_ResourceAccessStatement_s* x, int n);
void zx_sec12_ResourceAccessStatement_DEL_ProxySubject(struct zx_sec12_ResourceAccessStatement_s* x, int n);
void zx_sec12_ResourceAccessStatement_DEL_SessionContext(struct zx_sec12_ResourceAccessStatement_s* x, int n);

void zx_sec12_ResourceAccessStatement_REV_Subject(struct zx_sec12_ResourceAccessStatement_s* x);
void zx_sec12_ResourceAccessStatement_REV_ResourceID(struct zx_sec12_ResourceAccessStatement_s* x);
void zx_sec12_ResourceAccessStatement_REV_EncryptedResourceID(struct zx_sec12_ResourceAccessStatement_s* x);
void zx_sec12_ResourceAccessStatement_REV_ProxySubject(struct zx_sec12_ResourceAccessStatement_s* x);
void zx_sec12_ResourceAccessStatement_REV_SessionContext(struct zx_sec12_ResourceAccessStatement_s* x);

#endif
/* -------------------------- sec12_SessionContext -------------------------- */
/* refby( zx_sec12_ResourceAccessStatement_s zx_sec12_SessionContextStatement_s ) */
#ifndef zx_sec12_SessionContext_EXT
#define zx_sec12_SessionContext_EXT
#endif

struct zx_sec12_SessionContext_s* zx_DEC_sec12_SessionContext(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_sec12_SessionContext_s* zx_NEW_sec12_SessionContext(struct zx_ctx* c);
void zx_FREE_sec12_SessionContext(struct zx_ctx* c, struct zx_sec12_SessionContext_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_sec12_SessionContext_s* zx_DEEP_CLONE_sec12_SessionContext(struct zx_ctx* c, struct zx_sec12_SessionContext_s* x, int dup_strs);
void zx_DUP_STRS_sec12_SessionContext(struct zx_ctx* c, struct zx_sec12_SessionContext_s* x);
int zx_WALK_SO_sec12_SessionContext(struct zx_ctx* c, struct zx_sec12_SessionContext_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_sec12_SessionContext(struct zx_ctx* c, struct zx_sec12_SessionContext_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_sec12_SessionContext(struct zx_ctx* c, struct zx_sec12_SessionContext_s* x);
int zx_LEN_WO_sec12_SessionContext(struct zx_ctx* c, struct zx_sec12_SessionContext_s* x);
char* zx_ENC_SO_sec12_SessionContext(struct zx_ctx* c, struct zx_sec12_SessionContext_s* x, char* p);
char* zx_ENC_WO_sec12_SessionContext(struct zx_ctx* c, struct zx_sec12_SessionContext_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_sec12_SessionContext(struct zx_ctx* c, struct zx_sec12_SessionContext_s* x);
struct zx_str* zx_EASY_ENC_WO_sec12_SessionContext(struct zx_ctx* c, struct zx_sec12_SessionContext_s* x);

struct zx_sec12_SessionContext_s {
  ZX_ELEM_EXT
  zx_sec12_SessionContext_EXT
  struct zx_sec12_SessionSubject_s* SessionSubject;	/* {1,1}  */
  struct zx_elem_s* ProviderID;	/* {1,1} xs:anyURI */
  struct zx_ff12_RequestAuthnContext_s* RequestAuthnContext;	/* {0,1} nada */
  struct zx_str* AssertionIssueInstant;	/* {1,1} attribute xs:dateTime */
  struct zx_str* AuthenticationInstant;	/* {1,1} attribute xs:dateTime */
  struct zx_str* SessionIndex;	/* {0,1} attribute xs:string */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_sec12_SessionContext_GET_AssertionIssueInstant(struct zx_sec12_SessionContext_s* x);
struct zx_str* zx_sec12_SessionContext_GET_AuthenticationInstant(struct zx_sec12_SessionContext_s* x);
struct zx_str* zx_sec12_SessionContext_GET_SessionIndex(struct zx_sec12_SessionContext_s* x);

struct zx_sec12_SessionSubject_s* zx_sec12_SessionContext_GET_SessionSubject(struct zx_sec12_SessionContext_s* x, int n);
struct zx_elem_s* zx_sec12_SessionContext_GET_ProviderID(struct zx_sec12_SessionContext_s* x, int n);
struct zx_ff12_RequestAuthnContext_s* zx_sec12_SessionContext_GET_RequestAuthnContext(struct zx_sec12_SessionContext_s* x, int n);

int zx_sec12_SessionContext_NUM_SessionSubject(struct zx_sec12_SessionContext_s* x);
int zx_sec12_SessionContext_NUM_ProviderID(struct zx_sec12_SessionContext_s* x);
int zx_sec12_SessionContext_NUM_RequestAuthnContext(struct zx_sec12_SessionContext_s* x);

struct zx_sec12_SessionSubject_s* zx_sec12_SessionContext_POP_SessionSubject(struct zx_sec12_SessionContext_s* x);
struct zx_elem_s* zx_sec12_SessionContext_POP_ProviderID(struct zx_sec12_SessionContext_s* x);
struct zx_ff12_RequestAuthnContext_s* zx_sec12_SessionContext_POP_RequestAuthnContext(struct zx_sec12_SessionContext_s* x);

void zx_sec12_SessionContext_PUSH_SessionSubject(struct zx_sec12_SessionContext_s* x, struct zx_sec12_SessionSubject_s* y);
void zx_sec12_SessionContext_PUSH_ProviderID(struct zx_sec12_SessionContext_s* x, struct zx_elem_s* y);
void zx_sec12_SessionContext_PUSH_RequestAuthnContext(struct zx_sec12_SessionContext_s* x, struct zx_ff12_RequestAuthnContext_s* y);

void zx_sec12_SessionContext_PUT_AssertionIssueInstant(struct zx_sec12_SessionContext_s* x, struct zx_str* y);
void zx_sec12_SessionContext_PUT_AuthenticationInstant(struct zx_sec12_SessionContext_s* x, struct zx_str* y);
void zx_sec12_SessionContext_PUT_SessionIndex(struct zx_sec12_SessionContext_s* x, struct zx_str* y);

void zx_sec12_SessionContext_PUT_SessionSubject(struct zx_sec12_SessionContext_s* x, int n, struct zx_sec12_SessionSubject_s* y);
void zx_sec12_SessionContext_PUT_ProviderID(struct zx_sec12_SessionContext_s* x, int n, struct zx_elem_s* y);
void zx_sec12_SessionContext_PUT_RequestAuthnContext(struct zx_sec12_SessionContext_s* x, int n, struct zx_ff12_RequestAuthnContext_s* y);

void zx_sec12_SessionContext_ADD_SessionSubject(struct zx_sec12_SessionContext_s* x, int n, struct zx_sec12_SessionSubject_s* z);
void zx_sec12_SessionContext_ADD_ProviderID(struct zx_sec12_SessionContext_s* x, int n, struct zx_elem_s* z);
void zx_sec12_SessionContext_ADD_RequestAuthnContext(struct zx_sec12_SessionContext_s* x, int n, struct zx_ff12_RequestAuthnContext_s* z);

void zx_sec12_SessionContext_DEL_SessionSubject(struct zx_sec12_SessionContext_s* x, int n);
void zx_sec12_SessionContext_DEL_ProviderID(struct zx_sec12_SessionContext_s* x, int n);
void zx_sec12_SessionContext_DEL_RequestAuthnContext(struct zx_sec12_SessionContext_s* x, int n);

void zx_sec12_SessionContext_REV_SessionSubject(struct zx_sec12_SessionContext_s* x);
void zx_sec12_SessionContext_REV_ProviderID(struct zx_sec12_SessionContext_s* x);
void zx_sec12_SessionContext_REV_RequestAuthnContext(struct zx_sec12_SessionContext_s* x);

#endif
/* -------------------------- sec12_SessionContextStatement -------------------------- */
/* refby( ) */
#ifndef zx_sec12_SessionContextStatement_EXT
#define zx_sec12_SessionContextStatement_EXT
#endif

struct zx_sec12_SessionContextStatement_s* zx_DEC_sec12_SessionContextStatement(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_sec12_SessionContextStatement_s* zx_NEW_sec12_SessionContextStatement(struct zx_ctx* c);
void zx_FREE_sec12_SessionContextStatement(struct zx_ctx* c, struct zx_sec12_SessionContextStatement_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_sec12_SessionContextStatement_s* zx_DEEP_CLONE_sec12_SessionContextStatement(struct zx_ctx* c, struct zx_sec12_SessionContextStatement_s* x, int dup_strs);
void zx_DUP_STRS_sec12_SessionContextStatement(struct zx_ctx* c, struct zx_sec12_SessionContextStatement_s* x);
int zx_WALK_SO_sec12_SessionContextStatement(struct zx_ctx* c, struct zx_sec12_SessionContextStatement_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_sec12_SessionContextStatement(struct zx_ctx* c, struct zx_sec12_SessionContextStatement_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_sec12_SessionContextStatement(struct zx_ctx* c, struct zx_sec12_SessionContextStatement_s* x);
int zx_LEN_WO_sec12_SessionContextStatement(struct zx_ctx* c, struct zx_sec12_SessionContextStatement_s* x);
char* zx_ENC_SO_sec12_SessionContextStatement(struct zx_ctx* c, struct zx_sec12_SessionContextStatement_s* x, char* p);
char* zx_ENC_WO_sec12_SessionContextStatement(struct zx_ctx* c, struct zx_sec12_SessionContextStatement_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_sec12_SessionContextStatement(struct zx_ctx* c, struct zx_sec12_SessionContextStatement_s* x);
struct zx_str* zx_EASY_ENC_WO_sec12_SessionContextStatement(struct zx_ctx* c, struct zx_sec12_SessionContextStatement_s* x);

struct zx_sec12_SessionContextStatement_s {
  ZX_ELEM_EXT
  zx_sec12_SessionContextStatement_EXT
  struct zx_sa11_Subject_s* Subject;	/* {1,1} nada */
  struct zx_sec12_ProxySubject_s* ProxySubject;	/* {0,1} nada */
  struct zx_sec12_SessionContext_s* SessionContext;	/* {1,1} nada */
};

#ifdef ZX_ENA_GETPUT

struct zx_sa11_Subject_s* zx_sec12_SessionContextStatement_GET_Subject(struct zx_sec12_SessionContextStatement_s* x, int n);
struct zx_sec12_ProxySubject_s* zx_sec12_SessionContextStatement_GET_ProxySubject(struct zx_sec12_SessionContextStatement_s* x, int n);
struct zx_sec12_SessionContext_s* zx_sec12_SessionContextStatement_GET_SessionContext(struct zx_sec12_SessionContextStatement_s* x, int n);

int zx_sec12_SessionContextStatement_NUM_Subject(struct zx_sec12_SessionContextStatement_s* x);
int zx_sec12_SessionContextStatement_NUM_ProxySubject(struct zx_sec12_SessionContextStatement_s* x);
int zx_sec12_SessionContextStatement_NUM_SessionContext(struct zx_sec12_SessionContextStatement_s* x);

struct zx_sa11_Subject_s* zx_sec12_SessionContextStatement_POP_Subject(struct zx_sec12_SessionContextStatement_s* x);
struct zx_sec12_ProxySubject_s* zx_sec12_SessionContextStatement_POP_ProxySubject(struct zx_sec12_SessionContextStatement_s* x);
struct zx_sec12_SessionContext_s* zx_sec12_SessionContextStatement_POP_SessionContext(struct zx_sec12_SessionContextStatement_s* x);

void zx_sec12_SessionContextStatement_PUSH_Subject(struct zx_sec12_SessionContextStatement_s* x, struct zx_sa11_Subject_s* y);
void zx_sec12_SessionContextStatement_PUSH_ProxySubject(struct zx_sec12_SessionContextStatement_s* x, struct zx_sec12_ProxySubject_s* y);
void zx_sec12_SessionContextStatement_PUSH_SessionContext(struct zx_sec12_SessionContextStatement_s* x, struct zx_sec12_SessionContext_s* y);


void zx_sec12_SessionContextStatement_PUT_Subject(struct zx_sec12_SessionContextStatement_s* x, int n, struct zx_sa11_Subject_s* y);
void zx_sec12_SessionContextStatement_PUT_ProxySubject(struct zx_sec12_SessionContextStatement_s* x, int n, struct zx_sec12_ProxySubject_s* y);
void zx_sec12_SessionContextStatement_PUT_SessionContext(struct zx_sec12_SessionContextStatement_s* x, int n, struct zx_sec12_SessionContext_s* y);

void zx_sec12_SessionContextStatement_ADD_Subject(struct zx_sec12_SessionContextStatement_s* x, int n, struct zx_sa11_Subject_s* z);
void zx_sec12_SessionContextStatement_ADD_ProxySubject(struct zx_sec12_SessionContextStatement_s* x, int n, struct zx_sec12_ProxySubject_s* z);
void zx_sec12_SessionContextStatement_ADD_SessionContext(struct zx_sec12_SessionContextStatement_s* x, int n, struct zx_sec12_SessionContext_s* z);

void zx_sec12_SessionContextStatement_DEL_Subject(struct zx_sec12_SessionContextStatement_s* x, int n);
void zx_sec12_SessionContextStatement_DEL_ProxySubject(struct zx_sec12_SessionContextStatement_s* x, int n);
void zx_sec12_SessionContextStatement_DEL_SessionContext(struct zx_sec12_SessionContextStatement_s* x, int n);

void zx_sec12_SessionContextStatement_REV_Subject(struct zx_sec12_SessionContextStatement_s* x);
void zx_sec12_SessionContextStatement_REV_ProxySubject(struct zx_sec12_SessionContextStatement_s* x);
void zx_sec12_SessionContextStatement_REV_SessionContext(struct zx_sec12_SessionContextStatement_s* x);

#endif
/* -------------------------- sec12_SessionSubject -------------------------- */
/* refby( zx_sec12_SessionContext_s ) */
#ifndef zx_sec12_SessionSubject_EXT
#define zx_sec12_SessionSubject_EXT
#endif

struct zx_sec12_SessionSubject_s* zx_DEC_sec12_SessionSubject(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_sec12_SessionSubject_s* zx_NEW_sec12_SessionSubject(struct zx_ctx* c);
void zx_FREE_sec12_SessionSubject(struct zx_ctx* c, struct zx_sec12_SessionSubject_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_sec12_SessionSubject_s* zx_DEEP_CLONE_sec12_SessionSubject(struct zx_ctx* c, struct zx_sec12_SessionSubject_s* x, int dup_strs);
void zx_DUP_STRS_sec12_SessionSubject(struct zx_ctx* c, struct zx_sec12_SessionSubject_s* x);
int zx_WALK_SO_sec12_SessionSubject(struct zx_ctx* c, struct zx_sec12_SessionSubject_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_sec12_SessionSubject(struct zx_ctx* c, struct zx_sec12_SessionSubject_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_sec12_SessionSubject(struct zx_ctx* c, struct zx_sec12_SessionSubject_s* x);
int zx_LEN_WO_sec12_SessionSubject(struct zx_ctx* c, struct zx_sec12_SessionSubject_s* x);
char* zx_ENC_SO_sec12_SessionSubject(struct zx_ctx* c, struct zx_sec12_SessionSubject_s* x, char* p);
char* zx_ENC_WO_sec12_SessionSubject(struct zx_ctx* c, struct zx_sec12_SessionSubject_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_sec12_SessionSubject(struct zx_ctx* c, struct zx_sec12_SessionSubject_s* x);
struct zx_str* zx_EASY_ENC_WO_sec12_SessionSubject(struct zx_ctx* c, struct zx_sec12_SessionSubject_s* x);

struct zx_sec12_SessionSubject_s {
  ZX_ELEM_EXT
  zx_sec12_SessionSubject_EXT
  struct zx_sa11_NameIdentifier_s* NameIdentifier;	/* {0,1} nada */
  struct zx_sa11_SubjectConfirmation_s* SubjectConfirmation;	/* {0,1} nada */
  struct zx_ff12_IDPProvidedNameIdentifier_s* IDPProvidedNameIdentifier;	/* {0,1} nada */
};

#ifdef ZX_ENA_GETPUT

struct zx_sa11_NameIdentifier_s* zx_sec12_SessionSubject_GET_NameIdentifier(struct zx_sec12_SessionSubject_s* x, int n);
struct zx_sa11_SubjectConfirmation_s* zx_sec12_SessionSubject_GET_SubjectConfirmation(struct zx_sec12_SessionSubject_s* x, int n);
struct zx_ff12_IDPProvidedNameIdentifier_s* zx_sec12_SessionSubject_GET_IDPProvidedNameIdentifier(struct zx_sec12_SessionSubject_s* x, int n);

int zx_sec12_SessionSubject_NUM_NameIdentifier(struct zx_sec12_SessionSubject_s* x);
int zx_sec12_SessionSubject_NUM_SubjectConfirmation(struct zx_sec12_SessionSubject_s* x);
int zx_sec12_SessionSubject_NUM_IDPProvidedNameIdentifier(struct zx_sec12_SessionSubject_s* x);

struct zx_sa11_NameIdentifier_s* zx_sec12_SessionSubject_POP_NameIdentifier(struct zx_sec12_SessionSubject_s* x);
struct zx_sa11_SubjectConfirmation_s* zx_sec12_SessionSubject_POP_SubjectConfirmation(struct zx_sec12_SessionSubject_s* x);
struct zx_ff12_IDPProvidedNameIdentifier_s* zx_sec12_SessionSubject_POP_IDPProvidedNameIdentifier(struct zx_sec12_SessionSubject_s* x);

void zx_sec12_SessionSubject_PUSH_NameIdentifier(struct zx_sec12_SessionSubject_s* x, struct zx_sa11_NameIdentifier_s* y);
void zx_sec12_SessionSubject_PUSH_SubjectConfirmation(struct zx_sec12_SessionSubject_s* x, struct zx_sa11_SubjectConfirmation_s* y);
void zx_sec12_SessionSubject_PUSH_IDPProvidedNameIdentifier(struct zx_sec12_SessionSubject_s* x, struct zx_ff12_IDPProvidedNameIdentifier_s* y);


void zx_sec12_SessionSubject_PUT_NameIdentifier(struct zx_sec12_SessionSubject_s* x, int n, struct zx_sa11_NameIdentifier_s* y);
void zx_sec12_SessionSubject_PUT_SubjectConfirmation(struct zx_sec12_SessionSubject_s* x, int n, struct zx_sa11_SubjectConfirmation_s* y);
void zx_sec12_SessionSubject_PUT_IDPProvidedNameIdentifier(struct zx_sec12_SessionSubject_s* x, int n, struct zx_ff12_IDPProvidedNameIdentifier_s* y);

void zx_sec12_SessionSubject_ADD_NameIdentifier(struct zx_sec12_SessionSubject_s* x, int n, struct zx_sa11_NameIdentifier_s* z);
void zx_sec12_SessionSubject_ADD_SubjectConfirmation(struct zx_sec12_SessionSubject_s* x, int n, struct zx_sa11_SubjectConfirmation_s* z);
void zx_sec12_SessionSubject_ADD_IDPProvidedNameIdentifier(struct zx_sec12_SessionSubject_s* x, int n, struct zx_ff12_IDPProvidedNameIdentifier_s* z);

void zx_sec12_SessionSubject_DEL_NameIdentifier(struct zx_sec12_SessionSubject_s* x, int n);
void zx_sec12_SessionSubject_DEL_SubjectConfirmation(struct zx_sec12_SessionSubject_s* x, int n);
void zx_sec12_SessionSubject_DEL_IDPProvidedNameIdentifier(struct zx_sec12_SessionSubject_s* x, int n);

void zx_sec12_SessionSubject_REV_NameIdentifier(struct zx_sec12_SessionSubject_s* x);
void zx_sec12_SessionSubject_REV_SubjectConfirmation(struct zx_sec12_SessionSubject_s* x);
void zx_sec12_SessionSubject_REV_IDPProvidedNameIdentifier(struct zx_sec12_SessionSubject_s* x);

#endif
/* -------------------------- sec12_ValidityRestrictionCondition -------------------------- */
/* refby( ) */
#ifndef zx_sec12_ValidityRestrictionCondition_EXT
#define zx_sec12_ValidityRestrictionCondition_EXT
#endif

struct zx_sec12_ValidityRestrictionCondition_s* zx_DEC_sec12_ValidityRestrictionCondition(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_sec12_ValidityRestrictionCondition_s* zx_NEW_sec12_ValidityRestrictionCondition(struct zx_ctx* c);
void zx_FREE_sec12_ValidityRestrictionCondition(struct zx_ctx* c, struct zx_sec12_ValidityRestrictionCondition_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_sec12_ValidityRestrictionCondition_s* zx_DEEP_CLONE_sec12_ValidityRestrictionCondition(struct zx_ctx* c, struct zx_sec12_ValidityRestrictionCondition_s* x, int dup_strs);
void zx_DUP_STRS_sec12_ValidityRestrictionCondition(struct zx_ctx* c, struct zx_sec12_ValidityRestrictionCondition_s* x);
int zx_WALK_SO_sec12_ValidityRestrictionCondition(struct zx_ctx* c, struct zx_sec12_ValidityRestrictionCondition_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_sec12_ValidityRestrictionCondition(struct zx_ctx* c, struct zx_sec12_ValidityRestrictionCondition_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_sec12_ValidityRestrictionCondition(struct zx_ctx* c, struct zx_sec12_ValidityRestrictionCondition_s* x);
int zx_LEN_WO_sec12_ValidityRestrictionCondition(struct zx_ctx* c, struct zx_sec12_ValidityRestrictionCondition_s* x);
char* zx_ENC_SO_sec12_ValidityRestrictionCondition(struct zx_ctx* c, struct zx_sec12_ValidityRestrictionCondition_s* x, char* p);
char* zx_ENC_WO_sec12_ValidityRestrictionCondition(struct zx_ctx* c, struct zx_sec12_ValidityRestrictionCondition_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_sec12_ValidityRestrictionCondition(struct zx_ctx* c, struct zx_sec12_ValidityRestrictionCondition_s* x);
struct zx_str* zx_EASY_ENC_WO_sec12_ValidityRestrictionCondition(struct zx_ctx* c, struct zx_sec12_ValidityRestrictionCondition_s* x);

struct zx_sec12_ValidityRestrictionCondition_s {
  ZX_ELEM_EXT
  zx_sec12_ValidityRestrictionCondition_EXT
  struct zx_elem_s* NumberOfUses;	/* {1,1} xs:integer */
};

#ifdef ZX_ENA_GETPUT

struct zx_elem_s* zx_sec12_ValidityRestrictionCondition_GET_NumberOfUses(struct zx_sec12_ValidityRestrictionCondition_s* x, int n);

int zx_sec12_ValidityRestrictionCondition_NUM_NumberOfUses(struct zx_sec12_ValidityRestrictionCondition_s* x);

struct zx_elem_s* zx_sec12_ValidityRestrictionCondition_POP_NumberOfUses(struct zx_sec12_ValidityRestrictionCondition_s* x);

void zx_sec12_ValidityRestrictionCondition_PUSH_NumberOfUses(struct zx_sec12_ValidityRestrictionCondition_s* x, struct zx_elem_s* y);


void zx_sec12_ValidityRestrictionCondition_PUT_NumberOfUses(struct zx_sec12_ValidityRestrictionCondition_s* x, int n, struct zx_elem_s* y);

void zx_sec12_ValidityRestrictionCondition_ADD_NumberOfUses(struct zx_sec12_ValidityRestrictionCondition_s* x, int n, struct zx_elem_s* z);

void zx_sec12_ValidityRestrictionCondition_DEL_NumberOfUses(struct zx_sec12_ValidityRestrictionCondition_s* x, int n);

void zx_sec12_ValidityRestrictionCondition_REV_NumberOfUses(struct zx_sec12_ValidityRestrictionCondition_s* x);

#endif

#endif
