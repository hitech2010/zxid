/* c/zx-ff12-data.h - WARNING: This header was automatically generated. DO NOT EDIT!
 * $Id$ */
/* Datastructure design, topography, and layout
 * Copyright (c) 2006 Sampo Kellomaki (sampo@iki.fi),
 * All Rights Reserved. NO WARRANTY. See file COPYING for
 * terms and conditions of use. Element and attributes names as well
 * as some topography are derived from schema descriptions that were used as
 * input and may be subject to their own copright. */

#ifndef _c_zx_ff12_data_h
#define _c_zx_ff12_data_h

#include "zx.h"
#include "c/zx-const.h"
#include "c/zx-data.h"

#ifndef ZX_ELEM_EXT
#define ZX_ELEM_EXT  /* This extension point should be defined by who includes this file. */
#endif

/* -------------------------- ff12_Assertion -------------------------- */
/* refby( zx_wsse_Security_s zx_b_TargetIdentity_s zx_sa11_Advice_s zx_sec_Token_s zx_sa_Advice_s ) */
#ifndef zx_ff12_Assertion_EXT
#define zx_ff12_Assertion_EXT
#endif

struct zx_ff12_Assertion_s* zx_DEC_ff12_Assertion(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_ff12_Assertion_s* zx_NEW_ff12_Assertion(struct zx_ctx* c);
void zx_FREE_ff12_Assertion(struct zx_ctx* c, struct zx_ff12_Assertion_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_ff12_Assertion_s* zx_DEEP_CLONE_ff12_Assertion(struct zx_ctx* c, struct zx_ff12_Assertion_s* x, int dup_strs);
void zx_DUP_STRS_ff12_Assertion(struct zx_ctx* c, struct zx_ff12_Assertion_s* x);
int zx_WALK_SO_ff12_Assertion(struct zx_ctx* c, struct zx_ff12_Assertion_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_ff12_Assertion(struct zx_ctx* c, struct zx_ff12_Assertion_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_ff12_Assertion(struct zx_ctx* c, struct zx_ff12_Assertion_s* x);
int zx_LEN_WO_ff12_Assertion(struct zx_ctx* c, struct zx_ff12_Assertion_s* x);
char* zx_ENC_SO_ff12_Assertion(struct zx_ctx* c, struct zx_ff12_Assertion_s* x, char* p);
char* zx_ENC_WO_ff12_Assertion(struct zx_ctx* c, struct zx_ff12_Assertion_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_ff12_Assertion(struct zx_ctx* c, struct zx_ff12_Assertion_s* x);
struct zx_str* zx_EASY_ENC_WO_ff12_Assertion(struct zx_ctx* c, struct zx_ff12_Assertion_s* x);

struct zx_ff12_Assertion_s {
  ZX_ELEM_EXT
  zx_ff12_Assertion_EXT
  struct zx_sa11_Conditions_s* Conditions;	/* {0,1} nada */
  struct zx_sa11_Advice_s* Advice;	/* {0,1} nada */
  struct zx_elem_s* Statement;	/* {0,-1} sa11:StatementAbstractType */
  struct zx_sa11_SubjectStatement_s* SubjectStatement;	/* {0,-1}  */
  struct zx_sa11_AuthenticationStatement_s* AuthenticationStatement;	/* {0,-1} nada */
  struct zx_sa11_AuthorizationDecisionStatement_s* AuthorizationDecisionStatement;	/* {0,-1} nada */
  struct zx_sa11_AttributeStatement_s* AttributeStatement;	/* {0,-1} nada */
  struct zx_xasa_XACMLAuthzDecisionStatement_s* XACMLAuthzDecisionStatement;	/* {0,-1} nada */
  struct zx_xasa_XACMLPolicyStatement_s* XACMLPolicyStatement;	/* {0,-1} nada */
  struct zx_ds_Signature_s* Signature;	/* {0,1} nada */
  struct zx_str* AssertionID;	/* {1,1} attribute xs:ID */
  struct zx_str* InResponseTo;	/* {0,1} attribute xs:NCName */
  struct zx_str* IssueInstant;	/* {1,1} attribute xs:dateTime */
  struct zx_str* Issuer;	/* {1,1} attribute xs:string */
  struct zx_str* MajorVersion;	/* {1,1} attribute xs:integer */
  struct zx_str* MinorVersion;	/* {1,1} attribute xs:integer */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_ff12_Assertion_GET_AssertionID(struct zx_ff12_Assertion_s* x);
struct zx_str* zx_ff12_Assertion_GET_InResponseTo(struct zx_ff12_Assertion_s* x);
struct zx_str* zx_ff12_Assertion_GET_IssueInstant(struct zx_ff12_Assertion_s* x);
struct zx_str* zx_ff12_Assertion_GET_Issuer(struct zx_ff12_Assertion_s* x);
struct zx_str* zx_ff12_Assertion_GET_MajorVersion(struct zx_ff12_Assertion_s* x);
struct zx_str* zx_ff12_Assertion_GET_MinorVersion(struct zx_ff12_Assertion_s* x);

struct zx_sa11_Conditions_s* zx_ff12_Assertion_GET_Conditions(struct zx_ff12_Assertion_s* x, int n);
struct zx_sa11_Advice_s* zx_ff12_Assertion_GET_Advice(struct zx_ff12_Assertion_s* x, int n);
struct zx_elem_s* zx_ff12_Assertion_GET_Statement(struct zx_ff12_Assertion_s* x, int n);
struct zx_sa11_SubjectStatement_s* zx_ff12_Assertion_GET_SubjectStatement(struct zx_ff12_Assertion_s* x, int n);
struct zx_sa11_AuthenticationStatement_s* zx_ff12_Assertion_GET_AuthenticationStatement(struct zx_ff12_Assertion_s* x, int n);
struct zx_sa11_AuthorizationDecisionStatement_s* zx_ff12_Assertion_GET_AuthorizationDecisionStatement(struct zx_ff12_Assertion_s* x, int n);
struct zx_sa11_AttributeStatement_s* zx_ff12_Assertion_GET_AttributeStatement(struct zx_ff12_Assertion_s* x, int n);
struct zx_xasa_XACMLAuthzDecisionStatement_s* zx_ff12_Assertion_GET_XACMLAuthzDecisionStatement(struct zx_ff12_Assertion_s* x, int n);
struct zx_xasa_XACMLPolicyStatement_s* zx_ff12_Assertion_GET_XACMLPolicyStatement(struct zx_ff12_Assertion_s* x, int n);
struct zx_ds_Signature_s* zx_ff12_Assertion_GET_Signature(struct zx_ff12_Assertion_s* x, int n);

int zx_ff12_Assertion_NUM_Conditions(struct zx_ff12_Assertion_s* x);
int zx_ff12_Assertion_NUM_Advice(struct zx_ff12_Assertion_s* x);
int zx_ff12_Assertion_NUM_Statement(struct zx_ff12_Assertion_s* x);
int zx_ff12_Assertion_NUM_SubjectStatement(struct zx_ff12_Assertion_s* x);
int zx_ff12_Assertion_NUM_AuthenticationStatement(struct zx_ff12_Assertion_s* x);
int zx_ff12_Assertion_NUM_AuthorizationDecisionStatement(struct zx_ff12_Assertion_s* x);
int zx_ff12_Assertion_NUM_AttributeStatement(struct zx_ff12_Assertion_s* x);
int zx_ff12_Assertion_NUM_XACMLAuthzDecisionStatement(struct zx_ff12_Assertion_s* x);
int zx_ff12_Assertion_NUM_XACMLPolicyStatement(struct zx_ff12_Assertion_s* x);
int zx_ff12_Assertion_NUM_Signature(struct zx_ff12_Assertion_s* x);

struct zx_sa11_Conditions_s* zx_ff12_Assertion_POP_Conditions(struct zx_ff12_Assertion_s* x);
struct zx_sa11_Advice_s* zx_ff12_Assertion_POP_Advice(struct zx_ff12_Assertion_s* x);
struct zx_elem_s* zx_ff12_Assertion_POP_Statement(struct zx_ff12_Assertion_s* x);
struct zx_sa11_SubjectStatement_s* zx_ff12_Assertion_POP_SubjectStatement(struct zx_ff12_Assertion_s* x);
struct zx_sa11_AuthenticationStatement_s* zx_ff12_Assertion_POP_AuthenticationStatement(struct zx_ff12_Assertion_s* x);
struct zx_sa11_AuthorizationDecisionStatement_s* zx_ff12_Assertion_POP_AuthorizationDecisionStatement(struct zx_ff12_Assertion_s* x);
struct zx_sa11_AttributeStatement_s* zx_ff12_Assertion_POP_AttributeStatement(struct zx_ff12_Assertion_s* x);
struct zx_xasa_XACMLAuthzDecisionStatement_s* zx_ff12_Assertion_POP_XACMLAuthzDecisionStatement(struct zx_ff12_Assertion_s* x);
struct zx_xasa_XACMLPolicyStatement_s* zx_ff12_Assertion_POP_XACMLPolicyStatement(struct zx_ff12_Assertion_s* x);
struct zx_ds_Signature_s* zx_ff12_Assertion_POP_Signature(struct zx_ff12_Assertion_s* x);

void zx_ff12_Assertion_PUSH_Conditions(struct zx_ff12_Assertion_s* x, struct zx_sa11_Conditions_s* y);
void zx_ff12_Assertion_PUSH_Advice(struct zx_ff12_Assertion_s* x, struct zx_sa11_Advice_s* y);
void zx_ff12_Assertion_PUSH_Statement(struct zx_ff12_Assertion_s* x, struct zx_elem_s* y);
void zx_ff12_Assertion_PUSH_SubjectStatement(struct zx_ff12_Assertion_s* x, struct zx_sa11_SubjectStatement_s* y);
void zx_ff12_Assertion_PUSH_AuthenticationStatement(struct zx_ff12_Assertion_s* x, struct zx_sa11_AuthenticationStatement_s* y);
void zx_ff12_Assertion_PUSH_AuthorizationDecisionStatement(struct zx_ff12_Assertion_s* x, struct zx_sa11_AuthorizationDecisionStatement_s* y);
void zx_ff12_Assertion_PUSH_AttributeStatement(struct zx_ff12_Assertion_s* x, struct zx_sa11_AttributeStatement_s* y);
void zx_ff12_Assertion_PUSH_XACMLAuthzDecisionStatement(struct zx_ff12_Assertion_s* x, struct zx_xasa_XACMLAuthzDecisionStatement_s* y);
void zx_ff12_Assertion_PUSH_XACMLPolicyStatement(struct zx_ff12_Assertion_s* x, struct zx_xasa_XACMLPolicyStatement_s* y);
void zx_ff12_Assertion_PUSH_Signature(struct zx_ff12_Assertion_s* x, struct zx_ds_Signature_s* y);

void zx_ff12_Assertion_PUT_AssertionID(struct zx_ff12_Assertion_s* x, struct zx_str* y);
void zx_ff12_Assertion_PUT_InResponseTo(struct zx_ff12_Assertion_s* x, struct zx_str* y);
void zx_ff12_Assertion_PUT_IssueInstant(struct zx_ff12_Assertion_s* x, struct zx_str* y);
void zx_ff12_Assertion_PUT_Issuer(struct zx_ff12_Assertion_s* x, struct zx_str* y);
void zx_ff12_Assertion_PUT_MajorVersion(struct zx_ff12_Assertion_s* x, struct zx_str* y);
void zx_ff12_Assertion_PUT_MinorVersion(struct zx_ff12_Assertion_s* x, struct zx_str* y);

void zx_ff12_Assertion_PUT_Conditions(struct zx_ff12_Assertion_s* x, int n, struct zx_sa11_Conditions_s* y);
void zx_ff12_Assertion_PUT_Advice(struct zx_ff12_Assertion_s* x, int n, struct zx_sa11_Advice_s* y);
void zx_ff12_Assertion_PUT_Statement(struct zx_ff12_Assertion_s* x, int n, struct zx_elem_s* y);
void zx_ff12_Assertion_PUT_SubjectStatement(struct zx_ff12_Assertion_s* x, int n, struct zx_sa11_SubjectStatement_s* y);
void zx_ff12_Assertion_PUT_AuthenticationStatement(struct zx_ff12_Assertion_s* x, int n, struct zx_sa11_AuthenticationStatement_s* y);
void zx_ff12_Assertion_PUT_AuthorizationDecisionStatement(struct zx_ff12_Assertion_s* x, int n, struct zx_sa11_AuthorizationDecisionStatement_s* y);
void zx_ff12_Assertion_PUT_AttributeStatement(struct zx_ff12_Assertion_s* x, int n, struct zx_sa11_AttributeStatement_s* y);
void zx_ff12_Assertion_PUT_XACMLAuthzDecisionStatement(struct zx_ff12_Assertion_s* x, int n, struct zx_xasa_XACMLAuthzDecisionStatement_s* y);
void zx_ff12_Assertion_PUT_XACMLPolicyStatement(struct zx_ff12_Assertion_s* x, int n, struct zx_xasa_XACMLPolicyStatement_s* y);
void zx_ff12_Assertion_PUT_Signature(struct zx_ff12_Assertion_s* x, int n, struct zx_ds_Signature_s* y);

void zx_ff12_Assertion_ADD_Conditions(struct zx_ff12_Assertion_s* x, int n, struct zx_sa11_Conditions_s* z);
void zx_ff12_Assertion_ADD_Advice(struct zx_ff12_Assertion_s* x, int n, struct zx_sa11_Advice_s* z);
void zx_ff12_Assertion_ADD_Statement(struct zx_ff12_Assertion_s* x, int n, struct zx_elem_s* z);
void zx_ff12_Assertion_ADD_SubjectStatement(struct zx_ff12_Assertion_s* x, int n, struct zx_sa11_SubjectStatement_s* z);
void zx_ff12_Assertion_ADD_AuthenticationStatement(struct zx_ff12_Assertion_s* x, int n, struct zx_sa11_AuthenticationStatement_s* z);
void zx_ff12_Assertion_ADD_AuthorizationDecisionStatement(struct zx_ff12_Assertion_s* x, int n, struct zx_sa11_AuthorizationDecisionStatement_s* z);
void zx_ff12_Assertion_ADD_AttributeStatement(struct zx_ff12_Assertion_s* x, int n, struct zx_sa11_AttributeStatement_s* z);
void zx_ff12_Assertion_ADD_XACMLAuthzDecisionStatement(struct zx_ff12_Assertion_s* x, int n, struct zx_xasa_XACMLAuthzDecisionStatement_s* z);
void zx_ff12_Assertion_ADD_XACMLPolicyStatement(struct zx_ff12_Assertion_s* x, int n, struct zx_xasa_XACMLPolicyStatement_s* z);
void zx_ff12_Assertion_ADD_Signature(struct zx_ff12_Assertion_s* x, int n, struct zx_ds_Signature_s* z);

void zx_ff12_Assertion_DEL_Conditions(struct zx_ff12_Assertion_s* x, int n);
void zx_ff12_Assertion_DEL_Advice(struct zx_ff12_Assertion_s* x, int n);
void zx_ff12_Assertion_DEL_Statement(struct zx_ff12_Assertion_s* x, int n);
void zx_ff12_Assertion_DEL_SubjectStatement(struct zx_ff12_Assertion_s* x, int n);
void zx_ff12_Assertion_DEL_AuthenticationStatement(struct zx_ff12_Assertion_s* x, int n);
void zx_ff12_Assertion_DEL_AuthorizationDecisionStatement(struct zx_ff12_Assertion_s* x, int n);
void zx_ff12_Assertion_DEL_AttributeStatement(struct zx_ff12_Assertion_s* x, int n);
void zx_ff12_Assertion_DEL_XACMLAuthzDecisionStatement(struct zx_ff12_Assertion_s* x, int n);
void zx_ff12_Assertion_DEL_XACMLPolicyStatement(struct zx_ff12_Assertion_s* x, int n);
void zx_ff12_Assertion_DEL_Signature(struct zx_ff12_Assertion_s* x, int n);

void zx_ff12_Assertion_REV_Conditions(struct zx_ff12_Assertion_s* x);
void zx_ff12_Assertion_REV_Advice(struct zx_ff12_Assertion_s* x);
void zx_ff12_Assertion_REV_Statement(struct zx_ff12_Assertion_s* x);
void zx_ff12_Assertion_REV_SubjectStatement(struct zx_ff12_Assertion_s* x);
void zx_ff12_Assertion_REV_AuthenticationStatement(struct zx_ff12_Assertion_s* x);
void zx_ff12_Assertion_REV_AuthorizationDecisionStatement(struct zx_ff12_Assertion_s* x);
void zx_ff12_Assertion_REV_AttributeStatement(struct zx_ff12_Assertion_s* x);
void zx_ff12_Assertion_REV_XACMLAuthzDecisionStatement(struct zx_ff12_Assertion_s* x);
void zx_ff12_Assertion_REV_XACMLPolicyStatement(struct zx_ff12_Assertion_s* x);
void zx_ff12_Assertion_REV_Signature(struct zx_ff12_Assertion_s* x);

#endif
/* -------------------------- ff12_AuthenticationStatement -------------------------- */
/* refby( ) */
#ifndef zx_ff12_AuthenticationStatement_EXT
#define zx_ff12_AuthenticationStatement_EXT
#endif

struct zx_ff12_AuthenticationStatement_s* zx_DEC_ff12_AuthenticationStatement(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_ff12_AuthenticationStatement_s* zx_NEW_ff12_AuthenticationStatement(struct zx_ctx* c);
void zx_FREE_ff12_AuthenticationStatement(struct zx_ctx* c, struct zx_ff12_AuthenticationStatement_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_ff12_AuthenticationStatement_s* zx_DEEP_CLONE_ff12_AuthenticationStatement(struct zx_ctx* c, struct zx_ff12_AuthenticationStatement_s* x, int dup_strs);
void zx_DUP_STRS_ff12_AuthenticationStatement(struct zx_ctx* c, struct zx_ff12_AuthenticationStatement_s* x);
int zx_WALK_SO_ff12_AuthenticationStatement(struct zx_ctx* c, struct zx_ff12_AuthenticationStatement_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_ff12_AuthenticationStatement(struct zx_ctx* c, struct zx_ff12_AuthenticationStatement_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_ff12_AuthenticationStatement(struct zx_ctx* c, struct zx_ff12_AuthenticationStatement_s* x);
int zx_LEN_WO_ff12_AuthenticationStatement(struct zx_ctx* c, struct zx_ff12_AuthenticationStatement_s* x);
char* zx_ENC_SO_ff12_AuthenticationStatement(struct zx_ctx* c, struct zx_ff12_AuthenticationStatement_s* x, char* p);
char* zx_ENC_WO_ff12_AuthenticationStatement(struct zx_ctx* c, struct zx_ff12_AuthenticationStatement_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_ff12_AuthenticationStatement(struct zx_ctx* c, struct zx_ff12_AuthenticationStatement_s* x);
struct zx_str* zx_EASY_ENC_WO_ff12_AuthenticationStatement(struct zx_ctx* c, struct zx_ff12_AuthenticationStatement_s* x);

struct zx_ff12_AuthenticationStatement_s {
  ZX_ELEM_EXT
  zx_ff12_AuthenticationStatement_EXT
  struct zx_sa11_Subject_s* Subject;	/* {1,1} nada */
  struct zx_sa11_SubjectLocality_s* SubjectLocality;	/* {0,1} nada */
  struct zx_sa11_AuthorityBinding_s* AuthorityBinding;	/* {0,-1} nada */
  struct zx_ff12_AuthnContext_s* AuthnContext;	/* {0,1}  */
  struct zx_str* AuthenticationInstant;	/* {1,1} attribute xs:dateTime */
  struct zx_str* AuthenticationMethod;	/* {1,1} attribute xs:anyURI */
  struct zx_str* ReauthenticateOnOrAfter;	/* {0,1} attribute xs:dateTime */
  struct zx_str* SessionIndex;	/* {1,1} attribute xs:string */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_ff12_AuthenticationStatement_GET_AuthenticationInstant(struct zx_ff12_AuthenticationStatement_s* x);
struct zx_str* zx_ff12_AuthenticationStatement_GET_AuthenticationMethod(struct zx_ff12_AuthenticationStatement_s* x);
struct zx_str* zx_ff12_AuthenticationStatement_GET_ReauthenticateOnOrAfter(struct zx_ff12_AuthenticationStatement_s* x);
struct zx_str* zx_ff12_AuthenticationStatement_GET_SessionIndex(struct zx_ff12_AuthenticationStatement_s* x);

struct zx_sa11_Subject_s* zx_ff12_AuthenticationStatement_GET_Subject(struct zx_ff12_AuthenticationStatement_s* x, int n);
struct zx_sa11_SubjectLocality_s* zx_ff12_AuthenticationStatement_GET_SubjectLocality(struct zx_ff12_AuthenticationStatement_s* x, int n);
struct zx_sa11_AuthorityBinding_s* zx_ff12_AuthenticationStatement_GET_AuthorityBinding(struct zx_ff12_AuthenticationStatement_s* x, int n);
struct zx_ff12_AuthnContext_s* zx_ff12_AuthenticationStatement_GET_AuthnContext(struct zx_ff12_AuthenticationStatement_s* x, int n);

int zx_ff12_AuthenticationStatement_NUM_Subject(struct zx_ff12_AuthenticationStatement_s* x);
int zx_ff12_AuthenticationStatement_NUM_SubjectLocality(struct zx_ff12_AuthenticationStatement_s* x);
int zx_ff12_AuthenticationStatement_NUM_AuthorityBinding(struct zx_ff12_AuthenticationStatement_s* x);
int zx_ff12_AuthenticationStatement_NUM_AuthnContext(struct zx_ff12_AuthenticationStatement_s* x);

struct zx_sa11_Subject_s* zx_ff12_AuthenticationStatement_POP_Subject(struct zx_ff12_AuthenticationStatement_s* x);
struct zx_sa11_SubjectLocality_s* zx_ff12_AuthenticationStatement_POP_SubjectLocality(struct zx_ff12_AuthenticationStatement_s* x);
struct zx_sa11_AuthorityBinding_s* zx_ff12_AuthenticationStatement_POP_AuthorityBinding(struct zx_ff12_AuthenticationStatement_s* x);
struct zx_ff12_AuthnContext_s* zx_ff12_AuthenticationStatement_POP_AuthnContext(struct zx_ff12_AuthenticationStatement_s* x);

void zx_ff12_AuthenticationStatement_PUSH_Subject(struct zx_ff12_AuthenticationStatement_s* x, struct zx_sa11_Subject_s* y);
void zx_ff12_AuthenticationStatement_PUSH_SubjectLocality(struct zx_ff12_AuthenticationStatement_s* x, struct zx_sa11_SubjectLocality_s* y);
void zx_ff12_AuthenticationStatement_PUSH_AuthorityBinding(struct zx_ff12_AuthenticationStatement_s* x, struct zx_sa11_AuthorityBinding_s* y);
void zx_ff12_AuthenticationStatement_PUSH_AuthnContext(struct zx_ff12_AuthenticationStatement_s* x, struct zx_ff12_AuthnContext_s* y);

void zx_ff12_AuthenticationStatement_PUT_AuthenticationInstant(struct zx_ff12_AuthenticationStatement_s* x, struct zx_str* y);
void zx_ff12_AuthenticationStatement_PUT_AuthenticationMethod(struct zx_ff12_AuthenticationStatement_s* x, struct zx_str* y);
void zx_ff12_AuthenticationStatement_PUT_ReauthenticateOnOrAfter(struct zx_ff12_AuthenticationStatement_s* x, struct zx_str* y);
void zx_ff12_AuthenticationStatement_PUT_SessionIndex(struct zx_ff12_AuthenticationStatement_s* x, struct zx_str* y);

void zx_ff12_AuthenticationStatement_PUT_Subject(struct zx_ff12_AuthenticationStatement_s* x, int n, struct zx_sa11_Subject_s* y);
void zx_ff12_AuthenticationStatement_PUT_SubjectLocality(struct zx_ff12_AuthenticationStatement_s* x, int n, struct zx_sa11_SubjectLocality_s* y);
void zx_ff12_AuthenticationStatement_PUT_AuthorityBinding(struct zx_ff12_AuthenticationStatement_s* x, int n, struct zx_sa11_AuthorityBinding_s* y);
void zx_ff12_AuthenticationStatement_PUT_AuthnContext(struct zx_ff12_AuthenticationStatement_s* x, int n, struct zx_ff12_AuthnContext_s* y);

void zx_ff12_AuthenticationStatement_ADD_Subject(struct zx_ff12_AuthenticationStatement_s* x, int n, struct zx_sa11_Subject_s* z);
void zx_ff12_AuthenticationStatement_ADD_SubjectLocality(struct zx_ff12_AuthenticationStatement_s* x, int n, struct zx_sa11_SubjectLocality_s* z);
void zx_ff12_AuthenticationStatement_ADD_AuthorityBinding(struct zx_ff12_AuthenticationStatement_s* x, int n, struct zx_sa11_AuthorityBinding_s* z);
void zx_ff12_AuthenticationStatement_ADD_AuthnContext(struct zx_ff12_AuthenticationStatement_s* x, int n, struct zx_ff12_AuthnContext_s* z);

void zx_ff12_AuthenticationStatement_DEL_Subject(struct zx_ff12_AuthenticationStatement_s* x, int n);
void zx_ff12_AuthenticationStatement_DEL_SubjectLocality(struct zx_ff12_AuthenticationStatement_s* x, int n);
void zx_ff12_AuthenticationStatement_DEL_AuthorityBinding(struct zx_ff12_AuthenticationStatement_s* x, int n);
void zx_ff12_AuthenticationStatement_DEL_AuthnContext(struct zx_ff12_AuthenticationStatement_s* x, int n);

void zx_ff12_AuthenticationStatement_REV_Subject(struct zx_ff12_AuthenticationStatement_s* x);
void zx_ff12_AuthenticationStatement_REV_SubjectLocality(struct zx_ff12_AuthenticationStatement_s* x);
void zx_ff12_AuthenticationStatement_REV_AuthorityBinding(struct zx_ff12_AuthenticationStatement_s* x);
void zx_ff12_AuthenticationStatement_REV_AuthnContext(struct zx_ff12_AuthenticationStatement_s* x);

#endif
/* -------------------------- ff12_AuthnContext -------------------------- */
/* refby( zx_ff12_AuthenticationStatement_s ) */
#ifndef zx_ff12_AuthnContext_EXT
#define zx_ff12_AuthnContext_EXT
#endif

struct zx_ff12_AuthnContext_s* zx_DEC_ff12_AuthnContext(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_ff12_AuthnContext_s* zx_NEW_ff12_AuthnContext(struct zx_ctx* c);
void zx_FREE_ff12_AuthnContext(struct zx_ctx* c, struct zx_ff12_AuthnContext_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_ff12_AuthnContext_s* zx_DEEP_CLONE_ff12_AuthnContext(struct zx_ctx* c, struct zx_ff12_AuthnContext_s* x, int dup_strs);
void zx_DUP_STRS_ff12_AuthnContext(struct zx_ctx* c, struct zx_ff12_AuthnContext_s* x);
int zx_WALK_SO_ff12_AuthnContext(struct zx_ctx* c, struct zx_ff12_AuthnContext_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_ff12_AuthnContext(struct zx_ctx* c, struct zx_ff12_AuthnContext_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_ff12_AuthnContext(struct zx_ctx* c, struct zx_ff12_AuthnContext_s* x);
int zx_LEN_WO_ff12_AuthnContext(struct zx_ctx* c, struct zx_ff12_AuthnContext_s* x);
char* zx_ENC_SO_ff12_AuthnContext(struct zx_ctx* c, struct zx_ff12_AuthnContext_s* x, char* p);
char* zx_ENC_WO_ff12_AuthnContext(struct zx_ctx* c, struct zx_ff12_AuthnContext_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_ff12_AuthnContext(struct zx_ctx* c, struct zx_ff12_AuthnContext_s* x);
struct zx_str* zx_EASY_ENC_WO_ff12_AuthnContext(struct zx_ctx* c, struct zx_ff12_AuthnContext_s* x);

struct zx_ff12_AuthnContext_s {
  ZX_ELEM_EXT
  zx_ff12_AuthnContext_EXT
  struct zx_elem_s* AuthnContextClassRef;	/* {0,1} xs:anyURI */
  struct zx_ac_AuthenticationContextStatement_s* AuthenticationContextStatement;	/* {0,1} nada */
  struct zx_elem_s* AuthnContextStatementRef;	/* {0,1} xs:anyURI */
};

#ifdef ZX_ENA_GETPUT

struct zx_elem_s* zx_ff12_AuthnContext_GET_AuthnContextClassRef(struct zx_ff12_AuthnContext_s* x, int n);
struct zx_ac_AuthenticationContextStatement_s* zx_ff12_AuthnContext_GET_AuthenticationContextStatement(struct zx_ff12_AuthnContext_s* x, int n);
struct zx_elem_s* zx_ff12_AuthnContext_GET_AuthnContextStatementRef(struct zx_ff12_AuthnContext_s* x, int n);

int zx_ff12_AuthnContext_NUM_AuthnContextClassRef(struct zx_ff12_AuthnContext_s* x);
int zx_ff12_AuthnContext_NUM_AuthenticationContextStatement(struct zx_ff12_AuthnContext_s* x);
int zx_ff12_AuthnContext_NUM_AuthnContextStatementRef(struct zx_ff12_AuthnContext_s* x);

struct zx_elem_s* zx_ff12_AuthnContext_POP_AuthnContextClassRef(struct zx_ff12_AuthnContext_s* x);
struct zx_ac_AuthenticationContextStatement_s* zx_ff12_AuthnContext_POP_AuthenticationContextStatement(struct zx_ff12_AuthnContext_s* x);
struct zx_elem_s* zx_ff12_AuthnContext_POP_AuthnContextStatementRef(struct zx_ff12_AuthnContext_s* x);

void zx_ff12_AuthnContext_PUSH_AuthnContextClassRef(struct zx_ff12_AuthnContext_s* x, struct zx_elem_s* y);
void zx_ff12_AuthnContext_PUSH_AuthenticationContextStatement(struct zx_ff12_AuthnContext_s* x, struct zx_ac_AuthenticationContextStatement_s* y);
void zx_ff12_AuthnContext_PUSH_AuthnContextStatementRef(struct zx_ff12_AuthnContext_s* x, struct zx_elem_s* y);


void zx_ff12_AuthnContext_PUT_AuthnContextClassRef(struct zx_ff12_AuthnContext_s* x, int n, struct zx_elem_s* y);
void zx_ff12_AuthnContext_PUT_AuthenticationContextStatement(struct zx_ff12_AuthnContext_s* x, int n, struct zx_ac_AuthenticationContextStatement_s* y);
void zx_ff12_AuthnContext_PUT_AuthnContextStatementRef(struct zx_ff12_AuthnContext_s* x, int n, struct zx_elem_s* y);

void zx_ff12_AuthnContext_ADD_AuthnContextClassRef(struct zx_ff12_AuthnContext_s* x, int n, struct zx_elem_s* z);
void zx_ff12_AuthnContext_ADD_AuthenticationContextStatement(struct zx_ff12_AuthnContext_s* x, int n, struct zx_ac_AuthenticationContextStatement_s* z);
void zx_ff12_AuthnContext_ADD_AuthnContextStatementRef(struct zx_ff12_AuthnContext_s* x, int n, struct zx_elem_s* z);

void zx_ff12_AuthnContext_DEL_AuthnContextClassRef(struct zx_ff12_AuthnContext_s* x, int n);
void zx_ff12_AuthnContext_DEL_AuthenticationContextStatement(struct zx_ff12_AuthnContext_s* x, int n);
void zx_ff12_AuthnContext_DEL_AuthnContextStatementRef(struct zx_ff12_AuthnContext_s* x, int n);

void zx_ff12_AuthnContext_REV_AuthnContextClassRef(struct zx_ff12_AuthnContext_s* x);
void zx_ff12_AuthnContext_REV_AuthenticationContextStatement(struct zx_ff12_AuthnContext_s* x);
void zx_ff12_AuthnContext_REV_AuthnContextStatementRef(struct zx_ff12_AuthnContext_s* x);

#endif
/* -------------------------- ff12_AuthnRequest -------------------------- */
/* refby( zx_ff12_AuthnRequestEnvelope_s ) */
#ifndef zx_ff12_AuthnRequest_EXT
#define zx_ff12_AuthnRequest_EXT
#endif

struct zx_ff12_AuthnRequest_s* zx_DEC_ff12_AuthnRequest(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_ff12_AuthnRequest_s* zx_NEW_ff12_AuthnRequest(struct zx_ctx* c);
void zx_FREE_ff12_AuthnRequest(struct zx_ctx* c, struct zx_ff12_AuthnRequest_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_ff12_AuthnRequest_s* zx_DEEP_CLONE_ff12_AuthnRequest(struct zx_ctx* c, struct zx_ff12_AuthnRequest_s* x, int dup_strs);
void zx_DUP_STRS_ff12_AuthnRequest(struct zx_ctx* c, struct zx_ff12_AuthnRequest_s* x);
int zx_WALK_SO_ff12_AuthnRequest(struct zx_ctx* c, struct zx_ff12_AuthnRequest_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_ff12_AuthnRequest(struct zx_ctx* c, struct zx_ff12_AuthnRequest_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_ff12_AuthnRequest(struct zx_ctx* c, struct zx_ff12_AuthnRequest_s* x);
int zx_LEN_WO_ff12_AuthnRequest(struct zx_ctx* c, struct zx_ff12_AuthnRequest_s* x);
char* zx_ENC_SO_ff12_AuthnRequest(struct zx_ctx* c, struct zx_ff12_AuthnRequest_s* x, char* p);
char* zx_ENC_WO_ff12_AuthnRequest(struct zx_ctx* c, struct zx_ff12_AuthnRequest_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_ff12_AuthnRequest(struct zx_ctx* c, struct zx_ff12_AuthnRequest_s* x);
struct zx_str* zx_EASY_ENC_WO_ff12_AuthnRequest(struct zx_ctx* c, struct zx_ff12_AuthnRequest_s* x);

struct zx_ff12_AuthnRequest_s {
  ZX_ELEM_EXT
  zx_ff12_AuthnRequest_EXT
  struct zx_elem_s* RespondWith;	/* {0,-1} xs:QName */
  struct zx_ds_Signature_s* Signature;	/* {0,1} nada */
  struct zx_ff12_Extension_s* Extension;	/* {0,-1}  */
  struct zx_elem_s* ProviderID;	/* {1,1} xs:anyURI */
  struct zx_elem_s* AffiliationID;	/* {0,1} xs:anyURI */
  struct zx_elem_s* NameIDPolicy;	/* {0,1} none */
  struct zx_elem_s* ForceAuthn;	/* {0,1} xs:boolean */
  struct zx_elem_s* IsPassive;	/* {0,1} xs:boolean */
  struct zx_elem_s* ProtocolProfile;	/* {0,1} xs:anyURI */
  struct zx_elem_s* AssertionConsumerServiceID;	/* {0,1} xs:string */
  struct zx_ff12_RequestAuthnContext_s* RequestAuthnContext;	/* {0,1} nada */
  struct zx_elem_s* RelayState;	/* {0,1} xs:string */
  struct zx_ff12_Scoping_s* Scoping;	/* {0,1} nada */
  struct zx_str* IssueInstant;	/* {1,1} attribute xs:dateTime */
  struct zx_str* MajorVersion;	/* {1,1} attribute xs:integer */
  struct zx_str* MinorVersion;	/* {1,1} attribute xs:integer */
  struct zx_str* RequestID;	/* {1,1} attribute xs:ID */
  struct zx_str* consent;	/* {0,1} attribute xs:string */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_ff12_AuthnRequest_GET_IssueInstant(struct zx_ff12_AuthnRequest_s* x);
struct zx_str* zx_ff12_AuthnRequest_GET_MajorVersion(struct zx_ff12_AuthnRequest_s* x);
struct zx_str* zx_ff12_AuthnRequest_GET_MinorVersion(struct zx_ff12_AuthnRequest_s* x);
struct zx_str* zx_ff12_AuthnRequest_GET_RequestID(struct zx_ff12_AuthnRequest_s* x);
struct zx_str* zx_ff12_AuthnRequest_GET_consent(struct zx_ff12_AuthnRequest_s* x);

struct zx_elem_s* zx_ff12_AuthnRequest_GET_RespondWith(struct zx_ff12_AuthnRequest_s* x, int n);
struct zx_ds_Signature_s* zx_ff12_AuthnRequest_GET_Signature(struct zx_ff12_AuthnRequest_s* x, int n);
struct zx_ff12_Extension_s* zx_ff12_AuthnRequest_GET_Extension(struct zx_ff12_AuthnRequest_s* x, int n);
struct zx_elem_s* zx_ff12_AuthnRequest_GET_ProviderID(struct zx_ff12_AuthnRequest_s* x, int n);
struct zx_elem_s* zx_ff12_AuthnRequest_GET_AffiliationID(struct zx_ff12_AuthnRequest_s* x, int n);
struct zx_elem_s* zx_ff12_AuthnRequest_GET_NameIDPolicy(struct zx_ff12_AuthnRequest_s* x, int n);
struct zx_elem_s* zx_ff12_AuthnRequest_GET_ForceAuthn(struct zx_ff12_AuthnRequest_s* x, int n);
struct zx_elem_s* zx_ff12_AuthnRequest_GET_IsPassive(struct zx_ff12_AuthnRequest_s* x, int n);
struct zx_elem_s* zx_ff12_AuthnRequest_GET_ProtocolProfile(struct zx_ff12_AuthnRequest_s* x, int n);
struct zx_elem_s* zx_ff12_AuthnRequest_GET_AssertionConsumerServiceID(struct zx_ff12_AuthnRequest_s* x, int n);
struct zx_ff12_RequestAuthnContext_s* zx_ff12_AuthnRequest_GET_RequestAuthnContext(struct zx_ff12_AuthnRequest_s* x, int n);
struct zx_elem_s* zx_ff12_AuthnRequest_GET_RelayState(struct zx_ff12_AuthnRequest_s* x, int n);
struct zx_ff12_Scoping_s* zx_ff12_AuthnRequest_GET_Scoping(struct zx_ff12_AuthnRequest_s* x, int n);

int zx_ff12_AuthnRequest_NUM_RespondWith(struct zx_ff12_AuthnRequest_s* x);
int zx_ff12_AuthnRequest_NUM_Signature(struct zx_ff12_AuthnRequest_s* x);
int zx_ff12_AuthnRequest_NUM_Extension(struct zx_ff12_AuthnRequest_s* x);
int zx_ff12_AuthnRequest_NUM_ProviderID(struct zx_ff12_AuthnRequest_s* x);
int zx_ff12_AuthnRequest_NUM_AffiliationID(struct zx_ff12_AuthnRequest_s* x);
int zx_ff12_AuthnRequest_NUM_NameIDPolicy(struct zx_ff12_AuthnRequest_s* x);
int zx_ff12_AuthnRequest_NUM_ForceAuthn(struct zx_ff12_AuthnRequest_s* x);
int zx_ff12_AuthnRequest_NUM_IsPassive(struct zx_ff12_AuthnRequest_s* x);
int zx_ff12_AuthnRequest_NUM_ProtocolProfile(struct zx_ff12_AuthnRequest_s* x);
int zx_ff12_AuthnRequest_NUM_AssertionConsumerServiceID(struct zx_ff12_AuthnRequest_s* x);
int zx_ff12_AuthnRequest_NUM_RequestAuthnContext(struct zx_ff12_AuthnRequest_s* x);
int zx_ff12_AuthnRequest_NUM_RelayState(struct zx_ff12_AuthnRequest_s* x);
int zx_ff12_AuthnRequest_NUM_Scoping(struct zx_ff12_AuthnRequest_s* x);

struct zx_elem_s* zx_ff12_AuthnRequest_POP_RespondWith(struct zx_ff12_AuthnRequest_s* x);
struct zx_ds_Signature_s* zx_ff12_AuthnRequest_POP_Signature(struct zx_ff12_AuthnRequest_s* x);
struct zx_ff12_Extension_s* zx_ff12_AuthnRequest_POP_Extension(struct zx_ff12_AuthnRequest_s* x);
struct zx_elem_s* zx_ff12_AuthnRequest_POP_ProviderID(struct zx_ff12_AuthnRequest_s* x);
struct zx_elem_s* zx_ff12_AuthnRequest_POP_AffiliationID(struct zx_ff12_AuthnRequest_s* x);
struct zx_elem_s* zx_ff12_AuthnRequest_POP_NameIDPolicy(struct zx_ff12_AuthnRequest_s* x);
struct zx_elem_s* zx_ff12_AuthnRequest_POP_ForceAuthn(struct zx_ff12_AuthnRequest_s* x);
struct zx_elem_s* zx_ff12_AuthnRequest_POP_IsPassive(struct zx_ff12_AuthnRequest_s* x);
struct zx_elem_s* zx_ff12_AuthnRequest_POP_ProtocolProfile(struct zx_ff12_AuthnRequest_s* x);
struct zx_elem_s* zx_ff12_AuthnRequest_POP_AssertionConsumerServiceID(struct zx_ff12_AuthnRequest_s* x);
struct zx_ff12_RequestAuthnContext_s* zx_ff12_AuthnRequest_POP_RequestAuthnContext(struct zx_ff12_AuthnRequest_s* x);
struct zx_elem_s* zx_ff12_AuthnRequest_POP_RelayState(struct zx_ff12_AuthnRequest_s* x);
struct zx_ff12_Scoping_s* zx_ff12_AuthnRequest_POP_Scoping(struct zx_ff12_AuthnRequest_s* x);

void zx_ff12_AuthnRequest_PUSH_RespondWith(struct zx_ff12_AuthnRequest_s* x, struct zx_elem_s* y);
void zx_ff12_AuthnRequest_PUSH_Signature(struct zx_ff12_AuthnRequest_s* x, struct zx_ds_Signature_s* y);
void zx_ff12_AuthnRequest_PUSH_Extension(struct zx_ff12_AuthnRequest_s* x, struct zx_ff12_Extension_s* y);
void zx_ff12_AuthnRequest_PUSH_ProviderID(struct zx_ff12_AuthnRequest_s* x, struct zx_elem_s* y);
void zx_ff12_AuthnRequest_PUSH_AffiliationID(struct zx_ff12_AuthnRequest_s* x, struct zx_elem_s* y);
void zx_ff12_AuthnRequest_PUSH_NameIDPolicy(struct zx_ff12_AuthnRequest_s* x, struct zx_elem_s* y);
void zx_ff12_AuthnRequest_PUSH_ForceAuthn(struct zx_ff12_AuthnRequest_s* x, struct zx_elem_s* y);
void zx_ff12_AuthnRequest_PUSH_IsPassive(struct zx_ff12_AuthnRequest_s* x, struct zx_elem_s* y);
void zx_ff12_AuthnRequest_PUSH_ProtocolProfile(struct zx_ff12_AuthnRequest_s* x, struct zx_elem_s* y);
void zx_ff12_AuthnRequest_PUSH_AssertionConsumerServiceID(struct zx_ff12_AuthnRequest_s* x, struct zx_elem_s* y);
void zx_ff12_AuthnRequest_PUSH_RequestAuthnContext(struct zx_ff12_AuthnRequest_s* x, struct zx_ff12_RequestAuthnContext_s* y);
void zx_ff12_AuthnRequest_PUSH_RelayState(struct zx_ff12_AuthnRequest_s* x, struct zx_elem_s* y);
void zx_ff12_AuthnRequest_PUSH_Scoping(struct zx_ff12_AuthnRequest_s* x, struct zx_ff12_Scoping_s* y);

void zx_ff12_AuthnRequest_PUT_IssueInstant(struct zx_ff12_AuthnRequest_s* x, struct zx_str* y);
void zx_ff12_AuthnRequest_PUT_MajorVersion(struct zx_ff12_AuthnRequest_s* x, struct zx_str* y);
void zx_ff12_AuthnRequest_PUT_MinorVersion(struct zx_ff12_AuthnRequest_s* x, struct zx_str* y);
void zx_ff12_AuthnRequest_PUT_RequestID(struct zx_ff12_AuthnRequest_s* x, struct zx_str* y);
void zx_ff12_AuthnRequest_PUT_consent(struct zx_ff12_AuthnRequest_s* x, struct zx_str* y);

void zx_ff12_AuthnRequest_PUT_RespondWith(struct zx_ff12_AuthnRequest_s* x, int n, struct zx_elem_s* y);
void zx_ff12_AuthnRequest_PUT_Signature(struct zx_ff12_AuthnRequest_s* x, int n, struct zx_ds_Signature_s* y);
void zx_ff12_AuthnRequest_PUT_Extension(struct zx_ff12_AuthnRequest_s* x, int n, struct zx_ff12_Extension_s* y);
void zx_ff12_AuthnRequest_PUT_ProviderID(struct zx_ff12_AuthnRequest_s* x, int n, struct zx_elem_s* y);
void zx_ff12_AuthnRequest_PUT_AffiliationID(struct zx_ff12_AuthnRequest_s* x, int n, struct zx_elem_s* y);
void zx_ff12_AuthnRequest_PUT_NameIDPolicy(struct zx_ff12_AuthnRequest_s* x, int n, struct zx_elem_s* y);
void zx_ff12_AuthnRequest_PUT_ForceAuthn(struct zx_ff12_AuthnRequest_s* x, int n, struct zx_elem_s* y);
void zx_ff12_AuthnRequest_PUT_IsPassive(struct zx_ff12_AuthnRequest_s* x, int n, struct zx_elem_s* y);
void zx_ff12_AuthnRequest_PUT_ProtocolProfile(struct zx_ff12_AuthnRequest_s* x, int n, struct zx_elem_s* y);
void zx_ff12_AuthnRequest_PUT_AssertionConsumerServiceID(struct zx_ff12_AuthnRequest_s* x, int n, struct zx_elem_s* y);
void zx_ff12_AuthnRequest_PUT_RequestAuthnContext(struct zx_ff12_AuthnRequest_s* x, int n, struct zx_ff12_RequestAuthnContext_s* y);
void zx_ff12_AuthnRequest_PUT_RelayState(struct zx_ff12_AuthnRequest_s* x, int n, struct zx_elem_s* y);
void zx_ff12_AuthnRequest_PUT_Scoping(struct zx_ff12_AuthnRequest_s* x, int n, struct zx_ff12_Scoping_s* y);

void zx_ff12_AuthnRequest_ADD_RespondWith(struct zx_ff12_AuthnRequest_s* x, int n, struct zx_elem_s* z);
void zx_ff12_AuthnRequest_ADD_Signature(struct zx_ff12_AuthnRequest_s* x, int n, struct zx_ds_Signature_s* z);
void zx_ff12_AuthnRequest_ADD_Extension(struct zx_ff12_AuthnRequest_s* x, int n, struct zx_ff12_Extension_s* z);
void zx_ff12_AuthnRequest_ADD_ProviderID(struct zx_ff12_AuthnRequest_s* x, int n, struct zx_elem_s* z);
void zx_ff12_AuthnRequest_ADD_AffiliationID(struct zx_ff12_AuthnRequest_s* x, int n, struct zx_elem_s* z);
void zx_ff12_AuthnRequest_ADD_NameIDPolicy(struct zx_ff12_AuthnRequest_s* x, int n, struct zx_elem_s* z);
void zx_ff12_AuthnRequest_ADD_ForceAuthn(struct zx_ff12_AuthnRequest_s* x, int n, struct zx_elem_s* z);
void zx_ff12_AuthnRequest_ADD_IsPassive(struct zx_ff12_AuthnRequest_s* x, int n, struct zx_elem_s* z);
void zx_ff12_AuthnRequest_ADD_ProtocolProfile(struct zx_ff12_AuthnRequest_s* x, int n, struct zx_elem_s* z);
void zx_ff12_AuthnRequest_ADD_AssertionConsumerServiceID(struct zx_ff12_AuthnRequest_s* x, int n, struct zx_elem_s* z);
void zx_ff12_AuthnRequest_ADD_RequestAuthnContext(struct zx_ff12_AuthnRequest_s* x, int n, struct zx_ff12_RequestAuthnContext_s* z);
void zx_ff12_AuthnRequest_ADD_RelayState(struct zx_ff12_AuthnRequest_s* x, int n, struct zx_elem_s* z);
void zx_ff12_AuthnRequest_ADD_Scoping(struct zx_ff12_AuthnRequest_s* x, int n, struct zx_ff12_Scoping_s* z);

void zx_ff12_AuthnRequest_DEL_RespondWith(struct zx_ff12_AuthnRequest_s* x, int n);
void zx_ff12_AuthnRequest_DEL_Signature(struct zx_ff12_AuthnRequest_s* x, int n);
void zx_ff12_AuthnRequest_DEL_Extension(struct zx_ff12_AuthnRequest_s* x, int n);
void zx_ff12_AuthnRequest_DEL_ProviderID(struct zx_ff12_AuthnRequest_s* x, int n);
void zx_ff12_AuthnRequest_DEL_AffiliationID(struct zx_ff12_AuthnRequest_s* x, int n);
void zx_ff12_AuthnRequest_DEL_NameIDPolicy(struct zx_ff12_AuthnRequest_s* x, int n);
void zx_ff12_AuthnRequest_DEL_ForceAuthn(struct zx_ff12_AuthnRequest_s* x, int n);
void zx_ff12_AuthnRequest_DEL_IsPassive(struct zx_ff12_AuthnRequest_s* x, int n);
void zx_ff12_AuthnRequest_DEL_ProtocolProfile(struct zx_ff12_AuthnRequest_s* x, int n);
void zx_ff12_AuthnRequest_DEL_AssertionConsumerServiceID(struct zx_ff12_AuthnRequest_s* x, int n);
void zx_ff12_AuthnRequest_DEL_RequestAuthnContext(struct zx_ff12_AuthnRequest_s* x, int n);
void zx_ff12_AuthnRequest_DEL_RelayState(struct zx_ff12_AuthnRequest_s* x, int n);
void zx_ff12_AuthnRequest_DEL_Scoping(struct zx_ff12_AuthnRequest_s* x, int n);

void zx_ff12_AuthnRequest_REV_RespondWith(struct zx_ff12_AuthnRequest_s* x);
void zx_ff12_AuthnRequest_REV_Signature(struct zx_ff12_AuthnRequest_s* x);
void zx_ff12_AuthnRequest_REV_Extension(struct zx_ff12_AuthnRequest_s* x);
void zx_ff12_AuthnRequest_REV_ProviderID(struct zx_ff12_AuthnRequest_s* x);
void zx_ff12_AuthnRequest_REV_AffiliationID(struct zx_ff12_AuthnRequest_s* x);
void zx_ff12_AuthnRequest_REV_NameIDPolicy(struct zx_ff12_AuthnRequest_s* x);
void zx_ff12_AuthnRequest_REV_ForceAuthn(struct zx_ff12_AuthnRequest_s* x);
void zx_ff12_AuthnRequest_REV_IsPassive(struct zx_ff12_AuthnRequest_s* x);
void zx_ff12_AuthnRequest_REV_ProtocolProfile(struct zx_ff12_AuthnRequest_s* x);
void zx_ff12_AuthnRequest_REV_AssertionConsumerServiceID(struct zx_ff12_AuthnRequest_s* x);
void zx_ff12_AuthnRequest_REV_RequestAuthnContext(struct zx_ff12_AuthnRequest_s* x);
void zx_ff12_AuthnRequest_REV_RelayState(struct zx_ff12_AuthnRequest_s* x);
void zx_ff12_AuthnRequest_REV_Scoping(struct zx_ff12_AuthnRequest_s* x);

#endif
/* -------------------------- ff12_AuthnRequestEnvelope -------------------------- */
/* refby( ) */
#ifndef zx_ff12_AuthnRequestEnvelope_EXT
#define zx_ff12_AuthnRequestEnvelope_EXT
#endif

struct zx_ff12_AuthnRequestEnvelope_s* zx_DEC_ff12_AuthnRequestEnvelope(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_ff12_AuthnRequestEnvelope_s* zx_NEW_ff12_AuthnRequestEnvelope(struct zx_ctx* c);
void zx_FREE_ff12_AuthnRequestEnvelope(struct zx_ctx* c, struct zx_ff12_AuthnRequestEnvelope_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_ff12_AuthnRequestEnvelope_s* zx_DEEP_CLONE_ff12_AuthnRequestEnvelope(struct zx_ctx* c, struct zx_ff12_AuthnRequestEnvelope_s* x, int dup_strs);
void zx_DUP_STRS_ff12_AuthnRequestEnvelope(struct zx_ctx* c, struct zx_ff12_AuthnRequestEnvelope_s* x);
int zx_WALK_SO_ff12_AuthnRequestEnvelope(struct zx_ctx* c, struct zx_ff12_AuthnRequestEnvelope_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_ff12_AuthnRequestEnvelope(struct zx_ctx* c, struct zx_ff12_AuthnRequestEnvelope_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_ff12_AuthnRequestEnvelope(struct zx_ctx* c, struct zx_ff12_AuthnRequestEnvelope_s* x);
int zx_LEN_WO_ff12_AuthnRequestEnvelope(struct zx_ctx* c, struct zx_ff12_AuthnRequestEnvelope_s* x);
char* zx_ENC_SO_ff12_AuthnRequestEnvelope(struct zx_ctx* c, struct zx_ff12_AuthnRequestEnvelope_s* x, char* p);
char* zx_ENC_WO_ff12_AuthnRequestEnvelope(struct zx_ctx* c, struct zx_ff12_AuthnRequestEnvelope_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_ff12_AuthnRequestEnvelope(struct zx_ctx* c, struct zx_ff12_AuthnRequestEnvelope_s* x);
struct zx_str* zx_EASY_ENC_WO_ff12_AuthnRequestEnvelope(struct zx_ctx* c, struct zx_ff12_AuthnRequestEnvelope_s* x);

struct zx_ff12_AuthnRequestEnvelope_s {
  ZX_ELEM_EXT
  zx_ff12_AuthnRequestEnvelope_EXT
  struct zx_ff12_Extension_s* Extension;	/* {0,-1}  */
  struct zx_ff12_AuthnRequest_s* AuthnRequest;	/* {1,1} nada */
  struct zx_elem_s* ProviderID;	/* {1,1} xs:anyURI */
  struct zx_elem_s* ProviderName;	/* {0,1} xs:string */
  struct zx_elem_s* AssertionConsumerServiceURL;	/* {1,1} xs:anyURI */
  struct zx_ff12_IDPList_s* IDPList;	/* {0,1} nada */
  struct zx_elem_s* IsPassive;	/* {0,1} xs:boolean */
};

#ifdef ZX_ENA_GETPUT

struct zx_ff12_Extension_s* zx_ff12_AuthnRequestEnvelope_GET_Extension(struct zx_ff12_AuthnRequestEnvelope_s* x, int n);
struct zx_ff12_AuthnRequest_s* zx_ff12_AuthnRequestEnvelope_GET_AuthnRequest(struct zx_ff12_AuthnRequestEnvelope_s* x, int n);
struct zx_elem_s* zx_ff12_AuthnRequestEnvelope_GET_ProviderID(struct zx_ff12_AuthnRequestEnvelope_s* x, int n);
struct zx_elem_s* zx_ff12_AuthnRequestEnvelope_GET_ProviderName(struct zx_ff12_AuthnRequestEnvelope_s* x, int n);
struct zx_elem_s* zx_ff12_AuthnRequestEnvelope_GET_AssertionConsumerServiceURL(struct zx_ff12_AuthnRequestEnvelope_s* x, int n);
struct zx_ff12_IDPList_s* zx_ff12_AuthnRequestEnvelope_GET_IDPList(struct zx_ff12_AuthnRequestEnvelope_s* x, int n);
struct zx_elem_s* zx_ff12_AuthnRequestEnvelope_GET_IsPassive(struct zx_ff12_AuthnRequestEnvelope_s* x, int n);

int zx_ff12_AuthnRequestEnvelope_NUM_Extension(struct zx_ff12_AuthnRequestEnvelope_s* x);
int zx_ff12_AuthnRequestEnvelope_NUM_AuthnRequest(struct zx_ff12_AuthnRequestEnvelope_s* x);
int zx_ff12_AuthnRequestEnvelope_NUM_ProviderID(struct zx_ff12_AuthnRequestEnvelope_s* x);
int zx_ff12_AuthnRequestEnvelope_NUM_ProviderName(struct zx_ff12_AuthnRequestEnvelope_s* x);
int zx_ff12_AuthnRequestEnvelope_NUM_AssertionConsumerServiceURL(struct zx_ff12_AuthnRequestEnvelope_s* x);
int zx_ff12_AuthnRequestEnvelope_NUM_IDPList(struct zx_ff12_AuthnRequestEnvelope_s* x);
int zx_ff12_AuthnRequestEnvelope_NUM_IsPassive(struct zx_ff12_AuthnRequestEnvelope_s* x);

struct zx_ff12_Extension_s* zx_ff12_AuthnRequestEnvelope_POP_Extension(struct zx_ff12_AuthnRequestEnvelope_s* x);
struct zx_ff12_AuthnRequest_s* zx_ff12_AuthnRequestEnvelope_POP_AuthnRequest(struct zx_ff12_AuthnRequestEnvelope_s* x);
struct zx_elem_s* zx_ff12_AuthnRequestEnvelope_POP_ProviderID(struct zx_ff12_AuthnRequestEnvelope_s* x);
struct zx_elem_s* zx_ff12_AuthnRequestEnvelope_POP_ProviderName(struct zx_ff12_AuthnRequestEnvelope_s* x);
struct zx_elem_s* zx_ff12_AuthnRequestEnvelope_POP_AssertionConsumerServiceURL(struct zx_ff12_AuthnRequestEnvelope_s* x);
struct zx_ff12_IDPList_s* zx_ff12_AuthnRequestEnvelope_POP_IDPList(struct zx_ff12_AuthnRequestEnvelope_s* x);
struct zx_elem_s* zx_ff12_AuthnRequestEnvelope_POP_IsPassive(struct zx_ff12_AuthnRequestEnvelope_s* x);

void zx_ff12_AuthnRequestEnvelope_PUSH_Extension(struct zx_ff12_AuthnRequestEnvelope_s* x, struct zx_ff12_Extension_s* y);
void zx_ff12_AuthnRequestEnvelope_PUSH_AuthnRequest(struct zx_ff12_AuthnRequestEnvelope_s* x, struct zx_ff12_AuthnRequest_s* y);
void zx_ff12_AuthnRequestEnvelope_PUSH_ProviderID(struct zx_ff12_AuthnRequestEnvelope_s* x, struct zx_elem_s* y);
void zx_ff12_AuthnRequestEnvelope_PUSH_ProviderName(struct zx_ff12_AuthnRequestEnvelope_s* x, struct zx_elem_s* y);
void zx_ff12_AuthnRequestEnvelope_PUSH_AssertionConsumerServiceURL(struct zx_ff12_AuthnRequestEnvelope_s* x, struct zx_elem_s* y);
void zx_ff12_AuthnRequestEnvelope_PUSH_IDPList(struct zx_ff12_AuthnRequestEnvelope_s* x, struct zx_ff12_IDPList_s* y);
void zx_ff12_AuthnRequestEnvelope_PUSH_IsPassive(struct zx_ff12_AuthnRequestEnvelope_s* x, struct zx_elem_s* y);


void zx_ff12_AuthnRequestEnvelope_PUT_Extension(struct zx_ff12_AuthnRequestEnvelope_s* x, int n, struct zx_ff12_Extension_s* y);
void zx_ff12_AuthnRequestEnvelope_PUT_AuthnRequest(struct zx_ff12_AuthnRequestEnvelope_s* x, int n, struct zx_ff12_AuthnRequest_s* y);
void zx_ff12_AuthnRequestEnvelope_PUT_ProviderID(struct zx_ff12_AuthnRequestEnvelope_s* x, int n, struct zx_elem_s* y);
void zx_ff12_AuthnRequestEnvelope_PUT_ProviderName(struct zx_ff12_AuthnRequestEnvelope_s* x, int n, struct zx_elem_s* y);
void zx_ff12_AuthnRequestEnvelope_PUT_AssertionConsumerServiceURL(struct zx_ff12_AuthnRequestEnvelope_s* x, int n, struct zx_elem_s* y);
void zx_ff12_AuthnRequestEnvelope_PUT_IDPList(struct zx_ff12_AuthnRequestEnvelope_s* x, int n, struct zx_ff12_IDPList_s* y);
void zx_ff12_AuthnRequestEnvelope_PUT_IsPassive(struct zx_ff12_AuthnRequestEnvelope_s* x, int n, struct zx_elem_s* y);

void zx_ff12_AuthnRequestEnvelope_ADD_Extension(struct zx_ff12_AuthnRequestEnvelope_s* x, int n, struct zx_ff12_Extension_s* z);
void zx_ff12_AuthnRequestEnvelope_ADD_AuthnRequest(struct zx_ff12_AuthnRequestEnvelope_s* x, int n, struct zx_ff12_AuthnRequest_s* z);
void zx_ff12_AuthnRequestEnvelope_ADD_ProviderID(struct zx_ff12_AuthnRequestEnvelope_s* x, int n, struct zx_elem_s* z);
void zx_ff12_AuthnRequestEnvelope_ADD_ProviderName(struct zx_ff12_AuthnRequestEnvelope_s* x, int n, struct zx_elem_s* z);
void zx_ff12_AuthnRequestEnvelope_ADD_AssertionConsumerServiceURL(struct zx_ff12_AuthnRequestEnvelope_s* x, int n, struct zx_elem_s* z);
void zx_ff12_AuthnRequestEnvelope_ADD_IDPList(struct zx_ff12_AuthnRequestEnvelope_s* x, int n, struct zx_ff12_IDPList_s* z);
void zx_ff12_AuthnRequestEnvelope_ADD_IsPassive(struct zx_ff12_AuthnRequestEnvelope_s* x, int n, struct zx_elem_s* z);

void zx_ff12_AuthnRequestEnvelope_DEL_Extension(struct zx_ff12_AuthnRequestEnvelope_s* x, int n);
void zx_ff12_AuthnRequestEnvelope_DEL_AuthnRequest(struct zx_ff12_AuthnRequestEnvelope_s* x, int n);
void zx_ff12_AuthnRequestEnvelope_DEL_ProviderID(struct zx_ff12_AuthnRequestEnvelope_s* x, int n);
void zx_ff12_AuthnRequestEnvelope_DEL_ProviderName(struct zx_ff12_AuthnRequestEnvelope_s* x, int n);
void zx_ff12_AuthnRequestEnvelope_DEL_AssertionConsumerServiceURL(struct zx_ff12_AuthnRequestEnvelope_s* x, int n);
void zx_ff12_AuthnRequestEnvelope_DEL_IDPList(struct zx_ff12_AuthnRequestEnvelope_s* x, int n);
void zx_ff12_AuthnRequestEnvelope_DEL_IsPassive(struct zx_ff12_AuthnRequestEnvelope_s* x, int n);

void zx_ff12_AuthnRequestEnvelope_REV_Extension(struct zx_ff12_AuthnRequestEnvelope_s* x);
void zx_ff12_AuthnRequestEnvelope_REV_AuthnRequest(struct zx_ff12_AuthnRequestEnvelope_s* x);
void zx_ff12_AuthnRequestEnvelope_REV_ProviderID(struct zx_ff12_AuthnRequestEnvelope_s* x);
void zx_ff12_AuthnRequestEnvelope_REV_ProviderName(struct zx_ff12_AuthnRequestEnvelope_s* x);
void zx_ff12_AuthnRequestEnvelope_REV_AssertionConsumerServiceURL(struct zx_ff12_AuthnRequestEnvelope_s* x);
void zx_ff12_AuthnRequestEnvelope_REV_IDPList(struct zx_ff12_AuthnRequestEnvelope_s* x);
void zx_ff12_AuthnRequestEnvelope_REV_IsPassive(struct zx_ff12_AuthnRequestEnvelope_s* x);

#endif
/* -------------------------- ff12_AuthnResponse -------------------------- */
/* refby( zx_ff12_AuthnResponseEnvelope_s ) */
#ifndef zx_ff12_AuthnResponse_EXT
#define zx_ff12_AuthnResponse_EXT
#endif

struct zx_ff12_AuthnResponse_s* zx_DEC_ff12_AuthnResponse(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_ff12_AuthnResponse_s* zx_NEW_ff12_AuthnResponse(struct zx_ctx* c);
void zx_FREE_ff12_AuthnResponse(struct zx_ctx* c, struct zx_ff12_AuthnResponse_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_ff12_AuthnResponse_s* zx_DEEP_CLONE_ff12_AuthnResponse(struct zx_ctx* c, struct zx_ff12_AuthnResponse_s* x, int dup_strs);
void zx_DUP_STRS_ff12_AuthnResponse(struct zx_ctx* c, struct zx_ff12_AuthnResponse_s* x);
int zx_WALK_SO_ff12_AuthnResponse(struct zx_ctx* c, struct zx_ff12_AuthnResponse_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_ff12_AuthnResponse(struct zx_ctx* c, struct zx_ff12_AuthnResponse_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_ff12_AuthnResponse(struct zx_ctx* c, struct zx_ff12_AuthnResponse_s* x);
int zx_LEN_WO_ff12_AuthnResponse(struct zx_ctx* c, struct zx_ff12_AuthnResponse_s* x);
char* zx_ENC_SO_ff12_AuthnResponse(struct zx_ctx* c, struct zx_ff12_AuthnResponse_s* x, char* p);
char* zx_ENC_WO_ff12_AuthnResponse(struct zx_ctx* c, struct zx_ff12_AuthnResponse_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_ff12_AuthnResponse(struct zx_ctx* c, struct zx_ff12_AuthnResponse_s* x);
struct zx_str* zx_EASY_ENC_WO_ff12_AuthnResponse(struct zx_ctx* c, struct zx_ff12_AuthnResponse_s* x);

struct zx_ff12_AuthnResponse_s {
  ZX_ELEM_EXT
  zx_ff12_AuthnResponse_EXT
  struct zx_ds_Signature_s* Signature;	/* {0,1} nada */
  struct zx_sp11_Status_s* Status;	/* {1,1} nada */
  struct zx_sa11_Assertion_s* Assertion;	/* {0,-1} nada */
  struct zx_ff12_Extension_s* Extension;	/* {0,-1}  */
  struct zx_elem_s* ProviderID;	/* {1,1} xs:anyURI */
  struct zx_elem_s* RelayState;	/* {0,1} xs:string */
  struct zx_str* InResponseTo;	/* {0,1} attribute xs:NCName */
  struct zx_str* IssueInstant;	/* {1,1} attribute xs:dateTime */
  struct zx_str* MajorVersion;	/* {1,1} attribute xs:integer */
  struct zx_str* MinorVersion;	/* {1,1} attribute xs:integer */
  struct zx_str* Recipient;	/* {0,1} attribute xs:anyURI */
  struct zx_str* ResponseID;	/* {1,1} attribute xs:ID */
  struct zx_str* consent;	/* {0,1} attribute xs:string */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_ff12_AuthnResponse_GET_InResponseTo(struct zx_ff12_AuthnResponse_s* x);
struct zx_str* zx_ff12_AuthnResponse_GET_IssueInstant(struct zx_ff12_AuthnResponse_s* x);
struct zx_str* zx_ff12_AuthnResponse_GET_MajorVersion(struct zx_ff12_AuthnResponse_s* x);
struct zx_str* zx_ff12_AuthnResponse_GET_MinorVersion(struct zx_ff12_AuthnResponse_s* x);
struct zx_str* zx_ff12_AuthnResponse_GET_Recipient(struct zx_ff12_AuthnResponse_s* x);
struct zx_str* zx_ff12_AuthnResponse_GET_ResponseID(struct zx_ff12_AuthnResponse_s* x);
struct zx_str* zx_ff12_AuthnResponse_GET_consent(struct zx_ff12_AuthnResponse_s* x);

struct zx_ds_Signature_s* zx_ff12_AuthnResponse_GET_Signature(struct zx_ff12_AuthnResponse_s* x, int n);
struct zx_sp11_Status_s* zx_ff12_AuthnResponse_GET_Status(struct zx_ff12_AuthnResponse_s* x, int n);
struct zx_sa11_Assertion_s* zx_ff12_AuthnResponse_GET_Assertion(struct zx_ff12_AuthnResponse_s* x, int n);
struct zx_ff12_Extension_s* zx_ff12_AuthnResponse_GET_Extension(struct zx_ff12_AuthnResponse_s* x, int n);
struct zx_elem_s* zx_ff12_AuthnResponse_GET_ProviderID(struct zx_ff12_AuthnResponse_s* x, int n);
struct zx_elem_s* zx_ff12_AuthnResponse_GET_RelayState(struct zx_ff12_AuthnResponse_s* x, int n);

int zx_ff12_AuthnResponse_NUM_Signature(struct zx_ff12_AuthnResponse_s* x);
int zx_ff12_AuthnResponse_NUM_Status(struct zx_ff12_AuthnResponse_s* x);
int zx_ff12_AuthnResponse_NUM_Assertion(struct zx_ff12_AuthnResponse_s* x);
int zx_ff12_AuthnResponse_NUM_Extension(struct zx_ff12_AuthnResponse_s* x);
int zx_ff12_AuthnResponse_NUM_ProviderID(struct zx_ff12_AuthnResponse_s* x);
int zx_ff12_AuthnResponse_NUM_RelayState(struct zx_ff12_AuthnResponse_s* x);

struct zx_ds_Signature_s* zx_ff12_AuthnResponse_POP_Signature(struct zx_ff12_AuthnResponse_s* x);
struct zx_sp11_Status_s* zx_ff12_AuthnResponse_POP_Status(struct zx_ff12_AuthnResponse_s* x);
struct zx_sa11_Assertion_s* zx_ff12_AuthnResponse_POP_Assertion(struct zx_ff12_AuthnResponse_s* x);
struct zx_ff12_Extension_s* zx_ff12_AuthnResponse_POP_Extension(struct zx_ff12_AuthnResponse_s* x);
struct zx_elem_s* zx_ff12_AuthnResponse_POP_ProviderID(struct zx_ff12_AuthnResponse_s* x);
struct zx_elem_s* zx_ff12_AuthnResponse_POP_RelayState(struct zx_ff12_AuthnResponse_s* x);

void zx_ff12_AuthnResponse_PUSH_Signature(struct zx_ff12_AuthnResponse_s* x, struct zx_ds_Signature_s* y);
void zx_ff12_AuthnResponse_PUSH_Status(struct zx_ff12_AuthnResponse_s* x, struct zx_sp11_Status_s* y);
void zx_ff12_AuthnResponse_PUSH_Assertion(struct zx_ff12_AuthnResponse_s* x, struct zx_sa11_Assertion_s* y);
void zx_ff12_AuthnResponse_PUSH_Extension(struct zx_ff12_AuthnResponse_s* x, struct zx_ff12_Extension_s* y);
void zx_ff12_AuthnResponse_PUSH_ProviderID(struct zx_ff12_AuthnResponse_s* x, struct zx_elem_s* y);
void zx_ff12_AuthnResponse_PUSH_RelayState(struct zx_ff12_AuthnResponse_s* x, struct zx_elem_s* y);

void zx_ff12_AuthnResponse_PUT_InResponseTo(struct zx_ff12_AuthnResponse_s* x, struct zx_str* y);
void zx_ff12_AuthnResponse_PUT_IssueInstant(struct zx_ff12_AuthnResponse_s* x, struct zx_str* y);
void zx_ff12_AuthnResponse_PUT_MajorVersion(struct zx_ff12_AuthnResponse_s* x, struct zx_str* y);
void zx_ff12_AuthnResponse_PUT_MinorVersion(struct zx_ff12_AuthnResponse_s* x, struct zx_str* y);
void zx_ff12_AuthnResponse_PUT_Recipient(struct zx_ff12_AuthnResponse_s* x, struct zx_str* y);
void zx_ff12_AuthnResponse_PUT_ResponseID(struct zx_ff12_AuthnResponse_s* x, struct zx_str* y);
void zx_ff12_AuthnResponse_PUT_consent(struct zx_ff12_AuthnResponse_s* x, struct zx_str* y);

void zx_ff12_AuthnResponse_PUT_Signature(struct zx_ff12_AuthnResponse_s* x, int n, struct zx_ds_Signature_s* y);
void zx_ff12_AuthnResponse_PUT_Status(struct zx_ff12_AuthnResponse_s* x, int n, struct zx_sp11_Status_s* y);
void zx_ff12_AuthnResponse_PUT_Assertion(struct zx_ff12_AuthnResponse_s* x, int n, struct zx_sa11_Assertion_s* y);
void zx_ff12_AuthnResponse_PUT_Extension(struct zx_ff12_AuthnResponse_s* x, int n, struct zx_ff12_Extension_s* y);
void zx_ff12_AuthnResponse_PUT_ProviderID(struct zx_ff12_AuthnResponse_s* x, int n, struct zx_elem_s* y);
void zx_ff12_AuthnResponse_PUT_RelayState(struct zx_ff12_AuthnResponse_s* x, int n, struct zx_elem_s* y);

void zx_ff12_AuthnResponse_ADD_Signature(struct zx_ff12_AuthnResponse_s* x, int n, struct zx_ds_Signature_s* z);
void zx_ff12_AuthnResponse_ADD_Status(struct zx_ff12_AuthnResponse_s* x, int n, struct zx_sp11_Status_s* z);
void zx_ff12_AuthnResponse_ADD_Assertion(struct zx_ff12_AuthnResponse_s* x, int n, struct zx_sa11_Assertion_s* z);
void zx_ff12_AuthnResponse_ADD_Extension(struct zx_ff12_AuthnResponse_s* x, int n, struct zx_ff12_Extension_s* z);
void zx_ff12_AuthnResponse_ADD_ProviderID(struct zx_ff12_AuthnResponse_s* x, int n, struct zx_elem_s* z);
void zx_ff12_AuthnResponse_ADD_RelayState(struct zx_ff12_AuthnResponse_s* x, int n, struct zx_elem_s* z);

void zx_ff12_AuthnResponse_DEL_Signature(struct zx_ff12_AuthnResponse_s* x, int n);
void zx_ff12_AuthnResponse_DEL_Status(struct zx_ff12_AuthnResponse_s* x, int n);
void zx_ff12_AuthnResponse_DEL_Assertion(struct zx_ff12_AuthnResponse_s* x, int n);
void zx_ff12_AuthnResponse_DEL_Extension(struct zx_ff12_AuthnResponse_s* x, int n);
void zx_ff12_AuthnResponse_DEL_ProviderID(struct zx_ff12_AuthnResponse_s* x, int n);
void zx_ff12_AuthnResponse_DEL_RelayState(struct zx_ff12_AuthnResponse_s* x, int n);

void zx_ff12_AuthnResponse_REV_Signature(struct zx_ff12_AuthnResponse_s* x);
void zx_ff12_AuthnResponse_REV_Status(struct zx_ff12_AuthnResponse_s* x);
void zx_ff12_AuthnResponse_REV_Assertion(struct zx_ff12_AuthnResponse_s* x);
void zx_ff12_AuthnResponse_REV_Extension(struct zx_ff12_AuthnResponse_s* x);
void zx_ff12_AuthnResponse_REV_ProviderID(struct zx_ff12_AuthnResponse_s* x);
void zx_ff12_AuthnResponse_REV_RelayState(struct zx_ff12_AuthnResponse_s* x);

#endif
/* -------------------------- ff12_AuthnResponseEnvelope -------------------------- */
/* refby( ) */
#ifndef zx_ff12_AuthnResponseEnvelope_EXT
#define zx_ff12_AuthnResponseEnvelope_EXT
#endif

struct zx_ff12_AuthnResponseEnvelope_s* zx_DEC_ff12_AuthnResponseEnvelope(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_ff12_AuthnResponseEnvelope_s* zx_NEW_ff12_AuthnResponseEnvelope(struct zx_ctx* c);
void zx_FREE_ff12_AuthnResponseEnvelope(struct zx_ctx* c, struct zx_ff12_AuthnResponseEnvelope_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_ff12_AuthnResponseEnvelope_s* zx_DEEP_CLONE_ff12_AuthnResponseEnvelope(struct zx_ctx* c, struct zx_ff12_AuthnResponseEnvelope_s* x, int dup_strs);
void zx_DUP_STRS_ff12_AuthnResponseEnvelope(struct zx_ctx* c, struct zx_ff12_AuthnResponseEnvelope_s* x);
int zx_WALK_SO_ff12_AuthnResponseEnvelope(struct zx_ctx* c, struct zx_ff12_AuthnResponseEnvelope_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_ff12_AuthnResponseEnvelope(struct zx_ctx* c, struct zx_ff12_AuthnResponseEnvelope_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_ff12_AuthnResponseEnvelope(struct zx_ctx* c, struct zx_ff12_AuthnResponseEnvelope_s* x);
int zx_LEN_WO_ff12_AuthnResponseEnvelope(struct zx_ctx* c, struct zx_ff12_AuthnResponseEnvelope_s* x);
char* zx_ENC_SO_ff12_AuthnResponseEnvelope(struct zx_ctx* c, struct zx_ff12_AuthnResponseEnvelope_s* x, char* p);
char* zx_ENC_WO_ff12_AuthnResponseEnvelope(struct zx_ctx* c, struct zx_ff12_AuthnResponseEnvelope_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_ff12_AuthnResponseEnvelope(struct zx_ctx* c, struct zx_ff12_AuthnResponseEnvelope_s* x);
struct zx_str* zx_EASY_ENC_WO_ff12_AuthnResponseEnvelope(struct zx_ctx* c, struct zx_ff12_AuthnResponseEnvelope_s* x);

struct zx_ff12_AuthnResponseEnvelope_s {
  ZX_ELEM_EXT
  zx_ff12_AuthnResponseEnvelope_EXT
  struct zx_ff12_Extension_s* Extension;	/* {0,-1}  */
  struct zx_ff12_AuthnResponse_s* AuthnResponse;	/* {1,1} nada */
  struct zx_elem_s* AssertionConsumerServiceURL;	/* {1,1} xs:anyURI */
};

#ifdef ZX_ENA_GETPUT

struct zx_ff12_Extension_s* zx_ff12_AuthnResponseEnvelope_GET_Extension(struct zx_ff12_AuthnResponseEnvelope_s* x, int n);
struct zx_ff12_AuthnResponse_s* zx_ff12_AuthnResponseEnvelope_GET_AuthnResponse(struct zx_ff12_AuthnResponseEnvelope_s* x, int n);
struct zx_elem_s* zx_ff12_AuthnResponseEnvelope_GET_AssertionConsumerServiceURL(struct zx_ff12_AuthnResponseEnvelope_s* x, int n);

int zx_ff12_AuthnResponseEnvelope_NUM_Extension(struct zx_ff12_AuthnResponseEnvelope_s* x);
int zx_ff12_AuthnResponseEnvelope_NUM_AuthnResponse(struct zx_ff12_AuthnResponseEnvelope_s* x);
int zx_ff12_AuthnResponseEnvelope_NUM_AssertionConsumerServiceURL(struct zx_ff12_AuthnResponseEnvelope_s* x);

struct zx_ff12_Extension_s* zx_ff12_AuthnResponseEnvelope_POP_Extension(struct zx_ff12_AuthnResponseEnvelope_s* x);
struct zx_ff12_AuthnResponse_s* zx_ff12_AuthnResponseEnvelope_POP_AuthnResponse(struct zx_ff12_AuthnResponseEnvelope_s* x);
struct zx_elem_s* zx_ff12_AuthnResponseEnvelope_POP_AssertionConsumerServiceURL(struct zx_ff12_AuthnResponseEnvelope_s* x);

void zx_ff12_AuthnResponseEnvelope_PUSH_Extension(struct zx_ff12_AuthnResponseEnvelope_s* x, struct zx_ff12_Extension_s* y);
void zx_ff12_AuthnResponseEnvelope_PUSH_AuthnResponse(struct zx_ff12_AuthnResponseEnvelope_s* x, struct zx_ff12_AuthnResponse_s* y);
void zx_ff12_AuthnResponseEnvelope_PUSH_AssertionConsumerServiceURL(struct zx_ff12_AuthnResponseEnvelope_s* x, struct zx_elem_s* y);


void zx_ff12_AuthnResponseEnvelope_PUT_Extension(struct zx_ff12_AuthnResponseEnvelope_s* x, int n, struct zx_ff12_Extension_s* y);
void zx_ff12_AuthnResponseEnvelope_PUT_AuthnResponse(struct zx_ff12_AuthnResponseEnvelope_s* x, int n, struct zx_ff12_AuthnResponse_s* y);
void zx_ff12_AuthnResponseEnvelope_PUT_AssertionConsumerServiceURL(struct zx_ff12_AuthnResponseEnvelope_s* x, int n, struct zx_elem_s* y);

void zx_ff12_AuthnResponseEnvelope_ADD_Extension(struct zx_ff12_AuthnResponseEnvelope_s* x, int n, struct zx_ff12_Extension_s* z);
void zx_ff12_AuthnResponseEnvelope_ADD_AuthnResponse(struct zx_ff12_AuthnResponseEnvelope_s* x, int n, struct zx_ff12_AuthnResponse_s* z);
void zx_ff12_AuthnResponseEnvelope_ADD_AssertionConsumerServiceURL(struct zx_ff12_AuthnResponseEnvelope_s* x, int n, struct zx_elem_s* z);

void zx_ff12_AuthnResponseEnvelope_DEL_Extension(struct zx_ff12_AuthnResponseEnvelope_s* x, int n);
void zx_ff12_AuthnResponseEnvelope_DEL_AuthnResponse(struct zx_ff12_AuthnResponseEnvelope_s* x, int n);
void zx_ff12_AuthnResponseEnvelope_DEL_AssertionConsumerServiceURL(struct zx_ff12_AuthnResponseEnvelope_s* x, int n);

void zx_ff12_AuthnResponseEnvelope_REV_Extension(struct zx_ff12_AuthnResponseEnvelope_s* x);
void zx_ff12_AuthnResponseEnvelope_REV_AuthnResponse(struct zx_ff12_AuthnResponseEnvelope_s* x);
void zx_ff12_AuthnResponseEnvelope_REV_AssertionConsumerServiceURL(struct zx_ff12_AuthnResponseEnvelope_s* x);

#endif
/* -------------------------- ff12_EncryptableNameIdentifier -------------------------- */
/* refby( ) */
#ifndef zx_ff12_EncryptableNameIdentifier_EXT
#define zx_ff12_EncryptableNameIdentifier_EXT
#endif

struct zx_ff12_EncryptableNameIdentifier_s* zx_DEC_ff12_EncryptableNameIdentifier(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_ff12_EncryptableNameIdentifier_s* zx_NEW_ff12_EncryptableNameIdentifier(struct zx_ctx* c);
void zx_FREE_ff12_EncryptableNameIdentifier(struct zx_ctx* c, struct zx_ff12_EncryptableNameIdentifier_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_ff12_EncryptableNameIdentifier_s* zx_DEEP_CLONE_ff12_EncryptableNameIdentifier(struct zx_ctx* c, struct zx_ff12_EncryptableNameIdentifier_s* x, int dup_strs);
void zx_DUP_STRS_ff12_EncryptableNameIdentifier(struct zx_ctx* c, struct zx_ff12_EncryptableNameIdentifier_s* x);
int zx_WALK_SO_ff12_EncryptableNameIdentifier(struct zx_ctx* c, struct zx_ff12_EncryptableNameIdentifier_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_ff12_EncryptableNameIdentifier(struct zx_ctx* c, struct zx_ff12_EncryptableNameIdentifier_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_ff12_EncryptableNameIdentifier(struct zx_ctx* c, struct zx_ff12_EncryptableNameIdentifier_s* x);
int zx_LEN_WO_ff12_EncryptableNameIdentifier(struct zx_ctx* c, struct zx_ff12_EncryptableNameIdentifier_s* x);
char* zx_ENC_SO_ff12_EncryptableNameIdentifier(struct zx_ctx* c, struct zx_ff12_EncryptableNameIdentifier_s* x, char* p);
char* zx_ENC_WO_ff12_EncryptableNameIdentifier(struct zx_ctx* c, struct zx_ff12_EncryptableNameIdentifier_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_ff12_EncryptableNameIdentifier(struct zx_ctx* c, struct zx_ff12_EncryptableNameIdentifier_s* x);
struct zx_str* zx_EASY_ENC_WO_ff12_EncryptableNameIdentifier(struct zx_ctx* c, struct zx_ff12_EncryptableNameIdentifier_s* x);

struct zx_ff12_EncryptableNameIdentifier_s {
  ZX_ELEM_EXT
  zx_ff12_EncryptableNameIdentifier_EXT
  struct zx_str* Format;	/* {0,1} attribute xs:anyURI */
  struct zx_str* IssueInstant;	/* {0,1} attribute xs:dateTime */
  struct zx_str* NameQualifier;	/* {0,1} attribute xs:string */
  struct zx_str* Nonce;	/* {0,1} attribute xs:string */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_ff12_EncryptableNameIdentifier_GET_Format(struct zx_ff12_EncryptableNameIdentifier_s* x);
struct zx_str* zx_ff12_EncryptableNameIdentifier_GET_IssueInstant(struct zx_ff12_EncryptableNameIdentifier_s* x);
struct zx_str* zx_ff12_EncryptableNameIdentifier_GET_NameQualifier(struct zx_ff12_EncryptableNameIdentifier_s* x);
struct zx_str* zx_ff12_EncryptableNameIdentifier_GET_Nonce(struct zx_ff12_EncryptableNameIdentifier_s* x);





void zx_ff12_EncryptableNameIdentifier_PUT_Format(struct zx_ff12_EncryptableNameIdentifier_s* x, struct zx_str* y);
void zx_ff12_EncryptableNameIdentifier_PUT_IssueInstant(struct zx_ff12_EncryptableNameIdentifier_s* x, struct zx_str* y);
void zx_ff12_EncryptableNameIdentifier_PUT_NameQualifier(struct zx_ff12_EncryptableNameIdentifier_s* x, struct zx_str* y);
void zx_ff12_EncryptableNameIdentifier_PUT_Nonce(struct zx_ff12_EncryptableNameIdentifier_s* x, struct zx_str* y);





#endif
/* -------------------------- ff12_EncryptedNameIdentifier -------------------------- */
/* refby( ) */
#ifndef zx_ff12_EncryptedNameIdentifier_EXT
#define zx_ff12_EncryptedNameIdentifier_EXT
#endif

struct zx_ff12_EncryptedNameIdentifier_s* zx_DEC_ff12_EncryptedNameIdentifier(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_ff12_EncryptedNameIdentifier_s* zx_NEW_ff12_EncryptedNameIdentifier(struct zx_ctx* c);
void zx_FREE_ff12_EncryptedNameIdentifier(struct zx_ctx* c, struct zx_ff12_EncryptedNameIdentifier_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_ff12_EncryptedNameIdentifier_s* zx_DEEP_CLONE_ff12_EncryptedNameIdentifier(struct zx_ctx* c, struct zx_ff12_EncryptedNameIdentifier_s* x, int dup_strs);
void zx_DUP_STRS_ff12_EncryptedNameIdentifier(struct zx_ctx* c, struct zx_ff12_EncryptedNameIdentifier_s* x);
int zx_WALK_SO_ff12_EncryptedNameIdentifier(struct zx_ctx* c, struct zx_ff12_EncryptedNameIdentifier_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_ff12_EncryptedNameIdentifier(struct zx_ctx* c, struct zx_ff12_EncryptedNameIdentifier_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_ff12_EncryptedNameIdentifier(struct zx_ctx* c, struct zx_ff12_EncryptedNameIdentifier_s* x);
int zx_LEN_WO_ff12_EncryptedNameIdentifier(struct zx_ctx* c, struct zx_ff12_EncryptedNameIdentifier_s* x);
char* zx_ENC_SO_ff12_EncryptedNameIdentifier(struct zx_ctx* c, struct zx_ff12_EncryptedNameIdentifier_s* x, char* p);
char* zx_ENC_WO_ff12_EncryptedNameIdentifier(struct zx_ctx* c, struct zx_ff12_EncryptedNameIdentifier_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_ff12_EncryptedNameIdentifier(struct zx_ctx* c, struct zx_ff12_EncryptedNameIdentifier_s* x);
struct zx_str* zx_EASY_ENC_WO_ff12_EncryptedNameIdentifier(struct zx_ctx* c, struct zx_ff12_EncryptedNameIdentifier_s* x);

struct zx_ff12_EncryptedNameIdentifier_s {
  ZX_ELEM_EXT
  zx_ff12_EncryptedNameIdentifier_EXT
  struct zx_xenc_EncryptedData_s* EncryptedData;	/* {1,1} nada */
  struct zx_xenc_EncryptedKey_s* EncryptedKey;	/* {0,1} nada */
};

#ifdef ZX_ENA_GETPUT

struct zx_xenc_EncryptedData_s* zx_ff12_EncryptedNameIdentifier_GET_EncryptedData(struct zx_ff12_EncryptedNameIdentifier_s* x, int n);
struct zx_xenc_EncryptedKey_s* zx_ff12_EncryptedNameIdentifier_GET_EncryptedKey(struct zx_ff12_EncryptedNameIdentifier_s* x, int n);

int zx_ff12_EncryptedNameIdentifier_NUM_EncryptedData(struct zx_ff12_EncryptedNameIdentifier_s* x);
int zx_ff12_EncryptedNameIdentifier_NUM_EncryptedKey(struct zx_ff12_EncryptedNameIdentifier_s* x);

struct zx_xenc_EncryptedData_s* zx_ff12_EncryptedNameIdentifier_POP_EncryptedData(struct zx_ff12_EncryptedNameIdentifier_s* x);
struct zx_xenc_EncryptedKey_s* zx_ff12_EncryptedNameIdentifier_POP_EncryptedKey(struct zx_ff12_EncryptedNameIdentifier_s* x);

void zx_ff12_EncryptedNameIdentifier_PUSH_EncryptedData(struct zx_ff12_EncryptedNameIdentifier_s* x, struct zx_xenc_EncryptedData_s* y);
void zx_ff12_EncryptedNameIdentifier_PUSH_EncryptedKey(struct zx_ff12_EncryptedNameIdentifier_s* x, struct zx_xenc_EncryptedKey_s* y);


void zx_ff12_EncryptedNameIdentifier_PUT_EncryptedData(struct zx_ff12_EncryptedNameIdentifier_s* x, int n, struct zx_xenc_EncryptedData_s* y);
void zx_ff12_EncryptedNameIdentifier_PUT_EncryptedKey(struct zx_ff12_EncryptedNameIdentifier_s* x, int n, struct zx_xenc_EncryptedKey_s* y);

void zx_ff12_EncryptedNameIdentifier_ADD_EncryptedData(struct zx_ff12_EncryptedNameIdentifier_s* x, int n, struct zx_xenc_EncryptedData_s* z);
void zx_ff12_EncryptedNameIdentifier_ADD_EncryptedKey(struct zx_ff12_EncryptedNameIdentifier_s* x, int n, struct zx_xenc_EncryptedKey_s* z);

void zx_ff12_EncryptedNameIdentifier_DEL_EncryptedData(struct zx_ff12_EncryptedNameIdentifier_s* x, int n);
void zx_ff12_EncryptedNameIdentifier_DEL_EncryptedKey(struct zx_ff12_EncryptedNameIdentifier_s* x, int n);

void zx_ff12_EncryptedNameIdentifier_REV_EncryptedData(struct zx_ff12_EncryptedNameIdentifier_s* x);
void zx_ff12_EncryptedNameIdentifier_REV_EncryptedKey(struct zx_ff12_EncryptedNameIdentifier_s* x);

#endif
/* -------------------------- ff12_Extension -------------------------- */
/* refby( zx_ff12_NameIdentifierMappingResponse_s zx_ff12_RegisterNameIdentifierRequest_s zx_ff12_LogoutResponse_s zx_ff12_AuthnResponseEnvelope_s zx_ff12_FederationTerminationNotification_s zx_ff12_NameIdentifierMappingRequest_s zx_ff12_LogoutRequest_s zx_ff12_AuthnResponse_s zx_ff12_AuthnRequestEnvelope_s zx_ff12_AuthnRequest_s zx_ff12_RegisterNameIdentifierResponse_s ) */
#ifndef zx_ff12_Extension_EXT
#define zx_ff12_Extension_EXT
#endif

struct zx_ff12_Extension_s* zx_DEC_ff12_Extension(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_ff12_Extension_s* zx_NEW_ff12_Extension(struct zx_ctx* c);
void zx_FREE_ff12_Extension(struct zx_ctx* c, struct zx_ff12_Extension_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_ff12_Extension_s* zx_DEEP_CLONE_ff12_Extension(struct zx_ctx* c, struct zx_ff12_Extension_s* x, int dup_strs);
void zx_DUP_STRS_ff12_Extension(struct zx_ctx* c, struct zx_ff12_Extension_s* x);
int zx_WALK_SO_ff12_Extension(struct zx_ctx* c, struct zx_ff12_Extension_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_ff12_Extension(struct zx_ctx* c, struct zx_ff12_Extension_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_ff12_Extension(struct zx_ctx* c, struct zx_ff12_Extension_s* x);
int zx_LEN_WO_ff12_Extension(struct zx_ctx* c, struct zx_ff12_Extension_s* x);
char* zx_ENC_SO_ff12_Extension(struct zx_ctx* c, struct zx_ff12_Extension_s* x, char* p);
char* zx_ENC_WO_ff12_Extension(struct zx_ctx* c, struct zx_ff12_Extension_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_ff12_Extension(struct zx_ctx* c, struct zx_ff12_Extension_s* x);
struct zx_str* zx_EASY_ENC_WO_ff12_Extension(struct zx_ctx* c, struct zx_ff12_Extension_s* x);

struct zx_ff12_Extension_s {
  ZX_ELEM_EXT
  zx_ff12_Extension_EXT
};

#ifdef ZX_ENA_GETPUT










#endif
/* -------------------------- ff12_FederationTerminationNotification -------------------------- */
/* refby( zx_e_Body_s ) */
#ifndef zx_ff12_FederationTerminationNotification_EXT
#define zx_ff12_FederationTerminationNotification_EXT
#endif

struct zx_ff12_FederationTerminationNotification_s* zx_DEC_ff12_FederationTerminationNotification(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_ff12_FederationTerminationNotification_s* zx_NEW_ff12_FederationTerminationNotification(struct zx_ctx* c);
void zx_FREE_ff12_FederationTerminationNotification(struct zx_ctx* c, struct zx_ff12_FederationTerminationNotification_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_ff12_FederationTerminationNotification_s* zx_DEEP_CLONE_ff12_FederationTerminationNotification(struct zx_ctx* c, struct zx_ff12_FederationTerminationNotification_s* x, int dup_strs);
void zx_DUP_STRS_ff12_FederationTerminationNotification(struct zx_ctx* c, struct zx_ff12_FederationTerminationNotification_s* x);
int zx_WALK_SO_ff12_FederationTerminationNotification(struct zx_ctx* c, struct zx_ff12_FederationTerminationNotification_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_ff12_FederationTerminationNotification(struct zx_ctx* c, struct zx_ff12_FederationTerminationNotification_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_ff12_FederationTerminationNotification(struct zx_ctx* c, struct zx_ff12_FederationTerminationNotification_s* x);
int zx_LEN_WO_ff12_FederationTerminationNotification(struct zx_ctx* c, struct zx_ff12_FederationTerminationNotification_s* x);
char* zx_ENC_SO_ff12_FederationTerminationNotification(struct zx_ctx* c, struct zx_ff12_FederationTerminationNotification_s* x, char* p);
char* zx_ENC_WO_ff12_FederationTerminationNotification(struct zx_ctx* c, struct zx_ff12_FederationTerminationNotification_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_ff12_FederationTerminationNotification(struct zx_ctx* c, struct zx_ff12_FederationTerminationNotification_s* x);
struct zx_str* zx_EASY_ENC_WO_ff12_FederationTerminationNotification(struct zx_ctx* c, struct zx_ff12_FederationTerminationNotification_s* x);

struct zx_ff12_FederationTerminationNotification_s {
  ZX_ELEM_EXT
  zx_ff12_FederationTerminationNotification_EXT
  struct zx_elem_s* RespondWith;	/* {0,-1} xs:QName */
  struct zx_ds_Signature_s* Signature;	/* {0,1} nada */
  struct zx_ff12_Extension_s* Extension;	/* {0,-1}  */
  struct zx_elem_s* ProviderID;	/* {1,1} xs:anyURI */
  struct zx_sa11_NameIdentifier_s* NameIdentifier;	/* {1,1} nada */
  struct zx_str* IssueInstant;	/* {1,1} attribute xs:dateTime */
  struct zx_str* MajorVersion;	/* {1,1} attribute xs:integer */
  struct zx_str* MinorVersion;	/* {1,1} attribute xs:integer */
  struct zx_str* RequestID;	/* {1,1} attribute xs:ID */
  struct zx_str* consent;	/* {0,1} attribute xs:string */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_ff12_FederationTerminationNotification_GET_IssueInstant(struct zx_ff12_FederationTerminationNotification_s* x);
struct zx_str* zx_ff12_FederationTerminationNotification_GET_MajorVersion(struct zx_ff12_FederationTerminationNotification_s* x);
struct zx_str* zx_ff12_FederationTerminationNotification_GET_MinorVersion(struct zx_ff12_FederationTerminationNotification_s* x);
struct zx_str* zx_ff12_FederationTerminationNotification_GET_RequestID(struct zx_ff12_FederationTerminationNotification_s* x);
struct zx_str* zx_ff12_FederationTerminationNotification_GET_consent(struct zx_ff12_FederationTerminationNotification_s* x);

struct zx_elem_s* zx_ff12_FederationTerminationNotification_GET_RespondWith(struct zx_ff12_FederationTerminationNotification_s* x, int n);
struct zx_ds_Signature_s* zx_ff12_FederationTerminationNotification_GET_Signature(struct zx_ff12_FederationTerminationNotification_s* x, int n);
struct zx_ff12_Extension_s* zx_ff12_FederationTerminationNotification_GET_Extension(struct zx_ff12_FederationTerminationNotification_s* x, int n);
struct zx_elem_s* zx_ff12_FederationTerminationNotification_GET_ProviderID(struct zx_ff12_FederationTerminationNotification_s* x, int n);
struct zx_sa11_NameIdentifier_s* zx_ff12_FederationTerminationNotification_GET_NameIdentifier(struct zx_ff12_FederationTerminationNotification_s* x, int n);

int zx_ff12_FederationTerminationNotification_NUM_RespondWith(struct zx_ff12_FederationTerminationNotification_s* x);
int zx_ff12_FederationTerminationNotification_NUM_Signature(struct zx_ff12_FederationTerminationNotification_s* x);
int zx_ff12_FederationTerminationNotification_NUM_Extension(struct zx_ff12_FederationTerminationNotification_s* x);
int zx_ff12_FederationTerminationNotification_NUM_ProviderID(struct zx_ff12_FederationTerminationNotification_s* x);
int zx_ff12_FederationTerminationNotification_NUM_NameIdentifier(struct zx_ff12_FederationTerminationNotification_s* x);

struct zx_elem_s* zx_ff12_FederationTerminationNotification_POP_RespondWith(struct zx_ff12_FederationTerminationNotification_s* x);
struct zx_ds_Signature_s* zx_ff12_FederationTerminationNotification_POP_Signature(struct zx_ff12_FederationTerminationNotification_s* x);
struct zx_ff12_Extension_s* zx_ff12_FederationTerminationNotification_POP_Extension(struct zx_ff12_FederationTerminationNotification_s* x);
struct zx_elem_s* zx_ff12_FederationTerminationNotification_POP_ProviderID(struct zx_ff12_FederationTerminationNotification_s* x);
struct zx_sa11_NameIdentifier_s* zx_ff12_FederationTerminationNotification_POP_NameIdentifier(struct zx_ff12_FederationTerminationNotification_s* x);

void zx_ff12_FederationTerminationNotification_PUSH_RespondWith(struct zx_ff12_FederationTerminationNotification_s* x, struct zx_elem_s* y);
void zx_ff12_FederationTerminationNotification_PUSH_Signature(struct zx_ff12_FederationTerminationNotification_s* x, struct zx_ds_Signature_s* y);
void zx_ff12_FederationTerminationNotification_PUSH_Extension(struct zx_ff12_FederationTerminationNotification_s* x, struct zx_ff12_Extension_s* y);
void zx_ff12_FederationTerminationNotification_PUSH_ProviderID(struct zx_ff12_FederationTerminationNotification_s* x, struct zx_elem_s* y);
void zx_ff12_FederationTerminationNotification_PUSH_NameIdentifier(struct zx_ff12_FederationTerminationNotification_s* x, struct zx_sa11_NameIdentifier_s* y);

void zx_ff12_FederationTerminationNotification_PUT_IssueInstant(struct zx_ff12_FederationTerminationNotification_s* x, struct zx_str* y);
void zx_ff12_FederationTerminationNotification_PUT_MajorVersion(struct zx_ff12_FederationTerminationNotification_s* x, struct zx_str* y);
void zx_ff12_FederationTerminationNotification_PUT_MinorVersion(struct zx_ff12_FederationTerminationNotification_s* x, struct zx_str* y);
void zx_ff12_FederationTerminationNotification_PUT_RequestID(struct zx_ff12_FederationTerminationNotification_s* x, struct zx_str* y);
void zx_ff12_FederationTerminationNotification_PUT_consent(struct zx_ff12_FederationTerminationNotification_s* x, struct zx_str* y);

void zx_ff12_FederationTerminationNotification_PUT_RespondWith(struct zx_ff12_FederationTerminationNotification_s* x, int n, struct zx_elem_s* y);
void zx_ff12_FederationTerminationNotification_PUT_Signature(struct zx_ff12_FederationTerminationNotification_s* x, int n, struct zx_ds_Signature_s* y);
void zx_ff12_FederationTerminationNotification_PUT_Extension(struct zx_ff12_FederationTerminationNotification_s* x, int n, struct zx_ff12_Extension_s* y);
void zx_ff12_FederationTerminationNotification_PUT_ProviderID(struct zx_ff12_FederationTerminationNotification_s* x, int n, struct zx_elem_s* y);
void zx_ff12_FederationTerminationNotification_PUT_NameIdentifier(struct zx_ff12_FederationTerminationNotification_s* x, int n, struct zx_sa11_NameIdentifier_s* y);

void zx_ff12_FederationTerminationNotification_ADD_RespondWith(struct zx_ff12_FederationTerminationNotification_s* x, int n, struct zx_elem_s* z);
void zx_ff12_FederationTerminationNotification_ADD_Signature(struct zx_ff12_FederationTerminationNotification_s* x, int n, struct zx_ds_Signature_s* z);
void zx_ff12_FederationTerminationNotification_ADD_Extension(struct zx_ff12_FederationTerminationNotification_s* x, int n, struct zx_ff12_Extension_s* z);
void zx_ff12_FederationTerminationNotification_ADD_ProviderID(struct zx_ff12_FederationTerminationNotification_s* x, int n, struct zx_elem_s* z);
void zx_ff12_FederationTerminationNotification_ADD_NameIdentifier(struct zx_ff12_FederationTerminationNotification_s* x, int n, struct zx_sa11_NameIdentifier_s* z);

void zx_ff12_FederationTerminationNotification_DEL_RespondWith(struct zx_ff12_FederationTerminationNotification_s* x, int n);
void zx_ff12_FederationTerminationNotification_DEL_Signature(struct zx_ff12_FederationTerminationNotification_s* x, int n);
void zx_ff12_FederationTerminationNotification_DEL_Extension(struct zx_ff12_FederationTerminationNotification_s* x, int n);
void zx_ff12_FederationTerminationNotification_DEL_ProviderID(struct zx_ff12_FederationTerminationNotification_s* x, int n);
void zx_ff12_FederationTerminationNotification_DEL_NameIdentifier(struct zx_ff12_FederationTerminationNotification_s* x, int n);

void zx_ff12_FederationTerminationNotification_REV_RespondWith(struct zx_ff12_FederationTerminationNotification_s* x);
void zx_ff12_FederationTerminationNotification_REV_Signature(struct zx_ff12_FederationTerminationNotification_s* x);
void zx_ff12_FederationTerminationNotification_REV_Extension(struct zx_ff12_FederationTerminationNotification_s* x);
void zx_ff12_FederationTerminationNotification_REV_ProviderID(struct zx_ff12_FederationTerminationNotification_s* x);
void zx_ff12_FederationTerminationNotification_REV_NameIdentifier(struct zx_ff12_FederationTerminationNotification_s* x);

#endif
/* -------------------------- ff12_IDPEntries -------------------------- */
/* refby( zx_ff12_IDPList_s ) */
#ifndef zx_ff12_IDPEntries_EXT
#define zx_ff12_IDPEntries_EXT
#endif

struct zx_ff12_IDPEntries_s* zx_DEC_ff12_IDPEntries(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_ff12_IDPEntries_s* zx_NEW_ff12_IDPEntries(struct zx_ctx* c);
void zx_FREE_ff12_IDPEntries(struct zx_ctx* c, struct zx_ff12_IDPEntries_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_ff12_IDPEntries_s* zx_DEEP_CLONE_ff12_IDPEntries(struct zx_ctx* c, struct zx_ff12_IDPEntries_s* x, int dup_strs);
void zx_DUP_STRS_ff12_IDPEntries(struct zx_ctx* c, struct zx_ff12_IDPEntries_s* x);
int zx_WALK_SO_ff12_IDPEntries(struct zx_ctx* c, struct zx_ff12_IDPEntries_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_ff12_IDPEntries(struct zx_ctx* c, struct zx_ff12_IDPEntries_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_ff12_IDPEntries(struct zx_ctx* c, struct zx_ff12_IDPEntries_s* x);
int zx_LEN_WO_ff12_IDPEntries(struct zx_ctx* c, struct zx_ff12_IDPEntries_s* x);
char* zx_ENC_SO_ff12_IDPEntries(struct zx_ctx* c, struct zx_ff12_IDPEntries_s* x, char* p);
char* zx_ENC_WO_ff12_IDPEntries(struct zx_ctx* c, struct zx_ff12_IDPEntries_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_ff12_IDPEntries(struct zx_ctx* c, struct zx_ff12_IDPEntries_s* x);
struct zx_str* zx_EASY_ENC_WO_ff12_IDPEntries(struct zx_ctx* c, struct zx_ff12_IDPEntries_s* x);

struct zx_ff12_IDPEntries_s {
  ZX_ELEM_EXT
  zx_ff12_IDPEntries_EXT
  struct zx_ff12_IDPEntry_s* IDPEntry;	/* {1,-1} nada */
};

#ifdef ZX_ENA_GETPUT

struct zx_ff12_IDPEntry_s* zx_ff12_IDPEntries_GET_IDPEntry(struct zx_ff12_IDPEntries_s* x, int n);

int zx_ff12_IDPEntries_NUM_IDPEntry(struct zx_ff12_IDPEntries_s* x);

struct zx_ff12_IDPEntry_s* zx_ff12_IDPEntries_POP_IDPEntry(struct zx_ff12_IDPEntries_s* x);

void zx_ff12_IDPEntries_PUSH_IDPEntry(struct zx_ff12_IDPEntries_s* x, struct zx_ff12_IDPEntry_s* y);


void zx_ff12_IDPEntries_PUT_IDPEntry(struct zx_ff12_IDPEntries_s* x, int n, struct zx_ff12_IDPEntry_s* y);

void zx_ff12_IDPEntries_ADD_IDPEntry(struct zx_ff12_IDPEntries_s* x, int n, struct zx_ff12_IDPEntry_s* z);

void zx_ff12_IDPEntries_DEL_IDPEntry(struct zx_ff12_IDPEntries_s* x, int n);

void zx_ff12_IDPEntries_REV_IDPEntry(struct zx_ff12_IDPEntries_s* x);

#endif
/* -------------------------- ff12_IDPEntry -------------------------- */
/* refby( zx_ff12_IDPEntries_s ) */
#ifndef zx_ff12_IDPEntry_EXT
#define zx_ff12_IDPEntry_EXT
#endif

struct zx_ff12_IDPEntry_s* zx_DEC_ff12_IDPEntry(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_ff12_IDPEntry_s* zx_NEW_ff12_IDPEntry(struct zx_ctx* c);
void zx_FREE_ff12_IDPEntry(struct zx_ctx* c, struct zx_ff12_IDPEntry_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_ff12_IDPEntry_s* zx_DEEP_CLONE_ff12_IDPEntry(struct zx_ctx* c, struct zx_ff12_IDPEntry_s* x, int dup_strs);
void zx_DUP_STRS_ff12_IDPEntry(struct zx_ctx* c, struct zx_ff12_IDPEntry_s* x);
int zx_WALK_SO_ff12_IDPEntry(struct zx_ctx* c, struct zx_ff12_IDPEntry_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_ff12_IDPEntry(struct zx_ctx* c, struct zx_ff12_IDPEntry_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_ff12_IDPEntry(struct zx_ctx* c, struct zx_ff12_IDPEntry_s* x);
int zx_LEN_WO_ff12_IDPEntry(struct zx_ctx* c, struct zx_ff12_IDPEntry_s* x);
char* zx_ENC_SO_ff12_IDPEntry(struct zx_ctx* c, struct zx_ff12_IDPEntry_s* x, char* p);
char* zx_ENC_WO_ff12_IDPEntry(struct zx_ctx* c, struct zx_ff12_IDPEntry_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_ff12_IDPEntry(struct zx_ctx* c, struct zx_ff12_IDPEntry_s* x);
struct zx_str* zx_EASY_ENC_WO_ff12_IDPEntry(struct zx_ctx* c, struct zx_ff12_IDPEntry_s* x);

struct zx_ff12_IDPEntry_s {
  ZX_ELEM_EXT
  zx_ff12_IDPEntry_EXT
  struct zx_elem_s* ProviderID;	/* {1,1} xs:anyURI */
  struct zx_elem_s* ProviderName;	/* {0,1} xs:string */
  struct zx_elem_s* Loc;	/* {1,1} xs:anyURI */
};

#ifdef ZX_ENA_GETPUT

struct zx_elem_s* zx_ff12_IDPEntry_GET_ProviderID(struct zx_ff12_IDPEntry_s* x, int n);
struct zx_elem_s* zx_ff12_IDPEntry_GET_ProviderName(struct zx_ff12_IDPEntry_s* x, int n);
struct zx_elem_s* zx_ff12_IDPEntry_GET_Loc(struct zx_ff12_IDPEntry_s* x, int n);

int zx_ff12_IDPEntry_NUM_ProviderID(struct zx_ff12_IDPEntry_s* x);
int zx_ff12_IDPEntry_NUM_ProviderName(struct zx_ff12_IDPEntry_s* x);
int zx_ff12_IDPEntry_NUM_Loc(struct zx_ff12_IDPEntry_s* x);

struct zx_elem_s* zx_ff12_IDPEntry_POP_ProviderID(struct zx_ff12_IDPEntry_s* x);
struct zx_elem_s* zx_ff12_IDPEntry_POP_ProviderName(struct zx_ff12_IDPEntry_s* x);
struct zx_elem_s* zx_ff12_IDPEntry_POP_Loc(struct zx_ff12_IDPEntry_s* x);

void zx_ff12_IDPEntry_PUSH_ProviderID(struct zx_ff12_IDPEntry_s* x, struct zx_elem_s* y);
void zx_ff12_IDPEntry_PUSH_ProviderName(struct zx_ff12_IDPEntry_s* x, struct zx_elem_s* y);
void zx_ff12_IDPEntry_PUSH_Loc(struct zx_ff12_IDPEntry_s* x, struct zx_elem_s* y);


void zx_ff12_IDPEntry_PUT_ProviderID(struct zx_ff12_IDPEntry_s* x, int n, struct zx_elem_s* y);
void zx_ff12_IDPEntry_PUT_ProviderName(struct zx_ff12_IDPEntry_s* x, int n, struct zx_elem_s* y);
void zx_ff12_IDPEntry_PUT_Loc(struct zx_ff12_IDPEntry_s* x, int n, struct zx_elem_s* y);

void zx_ff12_IDPEntry_ADD_ProviderID(struct zx_ff12_IDPEntry_s* x, int n, struct zx_elem_s* z);
void zx_ff12_IDPEntry_ADD_ProviderName(struct zx_ff12_IDPEntry_s* x, int n, struct zx_elem_s* z);
void zx_ff12_IDPEntry_ADD_Loc(struct zx_ff12_IDPEntry_s* x, int n, struct zx_elem_s* z);

void zx_ff12_IDPEntry_DEL_ProviderID(struct zx_ff12_IDPEntry_s* x, int n);
void zx_ff12_IDPEntry_DEL_ProviderName(struct zx_ff12_IDPEntry_s* x, int n);
void zx_ff12_IDPEntry_DEL_Loc(struct zx_ff12_IDPEntry_s* x, int n);

void zx_ff12_IDPEntry_REV_ProviderID(struct zx_ff12_IDPEntry_s* x);
void zx_ff12_IDPEntry_REV_ProviderName(struct zx_ff12_IDPEntry_s* x);
void zx_ff12_IDPEntry_REV_Loc(struct zx_ff12_IDPEntry_s* x);

#endif
/* -------------------------- ff12_IDPList -------------------------- */
/* refby( zx_ff12_Scoping_s zx_ff12_AuthnRequestEnvelope_s ) */
#ifndef zx_ff12_IDPList_EXT
#define zx_ff12_IDPList_EXT
#endif

struct zx_ff12_IDPList_s* zx_DEC_ff12_IDPList(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_ff12_IDPList_s* zx_NEW_ff12_IDPList(struct zx_ctx* c);
void zx_FREE_ff12_IDPList(struct zx_ctx* c, struct zx_ff12_IDPList_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_ff12_IDPList_s* zx_DEEP_CLONE_ff12_IDPList(struct zx_ctx* c, struct zx_ff12_IDPList_s* x, int dup_strs);
void zx_DUP_STRS_ff12_IDPList(struct zx_ctx* c, struct zx_ff12_IDPList_s* x);
int zx_WALK_SO_ff12_IDPList(struct zx_ctx* c, struct zx_ff12_IDPList_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_ff12_IDPList(struct zx_ctx* c, struct zx_ff12_IDPList_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_ff12_IDPList(struct zx_ctx* c, struct zx_ff12_IDPList_s* x);
int zx_LEN_WO_ff12_IDPList(struct zx_ctx* c, struct zx_ff12_IDPList_s* x);
char* zx_ENC_SO_ff12_IDPList(struct zx_ctx* c, struct zx_ff12_IDPList_s* x, char* p);
char* zx_ENC_WO_ff12_IDPList(struct zx_ctx* c, struct zx_ff12_IDPList_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_ff12_IDPList(struct zx_ctx* c, struct zx_ff12_IDPList_s* x);
struct zx_str* zx_EASY_ENC_WO_ff12_IDPList(struct zx_ctx* c, struct zx_ff12_IDPList_s* x);

struct zx_ff12_IDPList_s {
  ZX_ELEM_EXT
  zx_ff12_IDPList_EXT
  struct zx_ff12_IDPEntries_s* IDPEntries;	/* {1,1}  */
  struct zx_elem_s* GetComplete;	/* {0,1} xs:anyURI */
};

#ifdef ZX_ENA_GETPUT

struct zx_ff12_IDPEntries_s* zx_ff12_IDPList_GET_IDPEntries(struct zx_ff12_IDPList_s* x, int n);
struct zx_elem_s* zx_ff12_IDPList_GET_GetComplete(struct zx_ff12_IDPList_s* x, int n);

int zx_ff12_IDPList_NUM_IDPEntries(struct zx_ff12_IDPList_s* x);
int zx_ff12_IDPList_NUM_GetComplete(struct zx_ff12_IDPList_s* x);

struct zx_ff12_IDPEntries_s* zx_ff12_IDPList_POP_IDPEntries(struct zx_ff12_IDPList_s* x);
struct zx_elem_s* zx_ff12_IDPList_POP_GetComplete(struct zx_ff12_IDPList_s* x);

void zx_ff12_IDPList_PUSH_IDPEntries(struct zx_ff12_IDPList_s* x, struct zx_ff12_IDPEntries_s* y);
void zx_ff12_IDPList_PUSH_GetComplete(struct zx_ff12_IDPList_s* x, struct zx_elem_s* y);


void zx_ff12_IDPList_PUT_IDPEntries(struct zx_ff12_IDPList_s* x, int n, struct zx_ff12_IDPEntries_s* y);
void zx_ff12_IDPList_PUT_GetComplete(struct zx_ff12_IDPList_s* x, int n, struct zx_elem_s* y);

void zx_ff12_IDPList_ADD_IDPEntries(struct zx_ff12_IDPList_s* x, int n, struct zx_ff12_IDPEntries_s* z);
void zx_ff12_IDPList_ADD_GetComplete(struct zx_ff12_IDPList_s* x, int n, struct zx_elem_s* z);

void zx_ff12_IDPList_DEL_IDPEntries(struct zx_ff12_IDPList_s* x, int n);
void zx_ff12_IDPList_DEL_GetComplete(struct zx_ff12_IDPList_s* x, int n);

void zx_ff12_IDPList_REV_IDPEntries(struct zx_ff12_IDPList_s* x);
void zx_ff12_IDPList_REV_GetComplete(struct zx_ff12_IDPList_s* x);

#endif
/* -------------------------- ff12_IDPProvidedNameIdentifier -------------------------- */
/* refby( zx_ff12_RegisterNameIdentifierRequest_s zx_ff12_Subject_s zx_sec12_SessionSubject_s ) */
#ifndef zx_ff12_IDPProvidedNameIdentifier_EXT
#define zx_ff12_IDPProvidedNameIdentifier_EXT
#endif

struct zx_ff12_IDPProvidedNameIdentifier_s* zx_DEC_ff12_IDPProvidedNameIdentifier(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_ff12_IDPProvidedNameIdentifier_s* zx_NEW_ff12_IDPProvidedNameIdentifier(struct zx_ctx* c);
void zx_FREE_ff12_IDPProvidedNameIdentifier(struct zx_ctx* c, struct zx_ff12_IDPProvidedNameIdentifier_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_ff12_IDPProvidedNameIdentifier_s* zx_DEEP_CLONE_ff12_IDPProvidedNameIdentifier(struct zx_ctx* c, struct zx_ff12_IDPProvidedNameIdentifier_s* x, int dup_strs);
void zx_DUP_STRS_ff12_IDPProvidedNameIdentifier(struct zx_ctx* c, struct zx_ff12_IDPProvidedNameIdentifier_s* x);
int zx_WALK_SO_ff12_IDPProvidedNameIdentifier(struct zx_ctx* c, struct zx_ff12_IDPProvidedNameIdentifier_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_ff12_IDPProvidedNameIdentifier(struct zx_ctx* c, struct zx_ff12_IDPProvidedNameIdentifier_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_ff12_IDPProvidedNameIdentifier(struct zx_ctx* c, struct zx_ff12_IDPProvidedNameIdentifier_s* x);
int zx_LEN_WO_ff12_IDPProvidedNameIdentifier(struct zx_ctx* c, struct zx_ff12_IDPProvidedNameIdentifier_s* x);
char* zx_ENC_SO_ff12_IDPProvidedNameIdentifier(struct zx_ctx* c, struct zx_ff12_IDPProvidedNameIdentifier_s* x, char* p);
char* zx_ENC_WO_ff12_IDPProvidedNameIdentifier(struct zx_ctx* c, struct zx_ff12_IDPProvidedNameIdentifier_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_ff12_IDPProvidedNameIdentifier(struct zx_ctx* c, struct zx_ff12_IDPProvidedNameIdentifier_s* x);
struct zx_str* zx_EASY_ENC_WO_ff12_IDPProvidedNameIdentifier(struct zx_ctx* c, struct zx_ff12_IDPProvidedNameIdentifier_s* x);

struct zx_ff12_IDPProvidedNameIdentifier_s {
  ZX_ELEM_EXT
  zx_ff12_IDPProvidedNameIdentifier_EXT
  struct zx_str* Format;	/* {0,1} attribute xs:anyURI */
  struct zx_str* NameQualifier;	/* {0,1} attribute xs:string */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_ff12_IDPProvidedNameIdentifier_GET_Format(struct zx_ff12_IDPProvidedNameIdentifier_s* x);
struct zx_str* zx_ff12_IDPProvidedNameIdentifier_GET_NameQualifier(struct zx_ff12_IDPProvidedNameIdentifier_s* x);





void zx_ff12_IDPProvidedNameIdentifier_PUT_Format(struct zx_ff12_IDPProvidedNameIdentifier_s* x, struct zx_str* y);
void zx_ff12_IDPProvidedNameIdentifier_PUT_NameQualifier(struct zx_ff12_IDPProvidedNameIdentifier_s* x, struct zx_str* y);





#endif
/* -------------------------- ff12_LogoutRequest -------------------------- */
/* refby( zx_e_Body_s ) */
#ifndef zx_ff12_LogoutRequest_EXT
#define zx_ff12_LogoutRequest_EXT
#endif

struct zx_ff12_LogoutRequest_s* zx_DEC_ff12_LogoutRequest(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_ff12_LogoutRequest_s* zx_NEW_ff12_LogoutRequest(struct zx_ctx* c);
void zx_FREE_ff12_LogoutRequest(struct zx_ctx* c, struct zx_ff12_LogoutRequest_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_ff12_LogoutRequest_s* zx_DEEP_CLONE_ff12_LogoutRequest(struct zx_ctx* c, struct zx_ff12_LogoutRequest_s* x, int dup_strs);
void zx_DUP_STRS_ff12_LogoutRequest(struct zx_ctx* c, struct zx_ff12_LogoutRequest_s* x);
int zx_WALK_SO_ff12_LogoutRequest(struct zx_ctx* c, struct zx_ff12_LogoutRequest_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_ff12_LogoutRequest(struct zx_ctx* c, struct zx_ff12_LogoutRequest_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_ff12_LogoutRequest(struct zx_ctx* c, struct zx_ff12_LogoutRequest_s* x);
int zx_LEN_WO_ff12_LogoutRequest(struct zx_ctx* c, struct zx_ff12_LogoutRequest_s* x);
char* zx_ENC_SO_ff12_LogoutRequest(struct zx_ctx* c, struct zx_ff12_LogoutRequest_s* x, char* p);
char* zx_ENC_WO_ff12_LogoutRequest(struct zx_ctx* c, struct zx_ff12_LogoutRequest_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_ff12_LogoutRequest(struct zx_ctx* c, struct zx_ff12_LogoutRequest_s* x);
struct zx_str* zx_EASY_ENC_WO_ff12_LogoutRequest(struct zx_ctx* c, struct zx_ff12_LogoutRequest_s* x);

struct zx_ff12_LogoutRequest_s {
  ZX_ELEM_EXT
  zx_ff12_LogoutRequest_EXT
  struct zx_elem_s* RespondWith;	/* {0,-1} xs:QName */
  struct zx_ds_Signature_s* Signature;	/* {0,1} nada */
  struct zx_ff12_Extension_s* Extension;	/* {0,-1}  */
  struct zx_elem_s* ProviderID;	/* {1,1} xs:anyURI */
  struct zx_sa11_NameIdentifier_s* NameIdentifier;	/* {1,1} nada */
  struct zx_elem_s* SessionIndex;	/* {0,-1} xs:string */
  struct zx_elem_s* RelayState;	/* {0,1} xs:string */
  struct zx_str* IssueInstant;	/* {1,1} attribute xs:dateTime */
  struct zx_str* MajorVersion;	/* {1,1} attribute xs:integer */
  struct zx_str* MinorVersion;	/* {1,1} attribute xs:integer */
  struct zx_str* NotOnOrAfter;	/* {0,1} attribute xs:dateTime */
  struct zx_str* RequestID;	/* {1,1} attribute xs:ID */
  struct zx_str* consent;	/* {0,1} attribute xs:string */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_ff12_LogoutRequest_GET_IssueInstant(struct zx_ff12_LogoutRequest_s* x);
struct zx_str* zx_ff12_LogoutRequest_GET_MajorVersion(struct zx_ff12_LogoutRequest_s* x);
struct zx_str* zx_ff12_LogoutRequest_GET_MinorVersion(struct zx_ff12_LogoutRequest_s* x);
struct zx_str* zx_ff12_LogoutRequest_GET_NotOnOrAfter(struct zx_ff12_LogoutRequest_s* x);
struct zx_str* zx_ff12_LogoutRequest_GET_RequestID(struct zx_ff12_LogoutRequest_s* x);
struct zx_str* zx_ff12_LogoutRequest_GET_consent(struct zx_ff12_LogoutRequest_s* x);

struct zx_elem_s* zx_ff12_LogoutRequest_GET_RespondWith(struct zx_ff12_LogoutRequest_s* x, int n);
struct zx_ds_Signature_s* zx_ff12_LogoutRequest_GET_Signature(struct zx_ff12_LogoutRequest_s* x, int n);
struct zx_ff12_Extension_s* zx_ff12_LogoutRequest_GET_Extension(struct zx_ff12_LogoutRequest_s* x, int n);
struct zx_elem_s* zx_ff12_LogoutRequest_GET_ProviderID(struct zx_ff12_LogoutRequest_s* x, int n);
struct zx_sa11_NameIdentifier_s* zx_ff12_LogoutRequest_GET_NameIdentifier(struct zx_ff12_LogoutRequest_s* x, int n);
struct zx_elem_s* zx_ff12_LogoutRequest_GET_SessionIndex(struct zx_ff12_LogoutRequest_s* x, int n);
struct zx_elem_s* zx_ff12_LogoutRequest_GET_RelayState(struct zx_ff12_LogoutRequest_s* x, int n);

int zx_ff12_LogoutRequest_NUM_RespondWith(struct zx_ff12_LogoutRequest_s* x);
int zx_ff12_LogoutRequest_NUM_Signature(struct zx_ff12_LogoutRequest_s* x);
int zx_ff12_LogoutRequest_NUM_Extension(struct zx_ff12_LogoutRequest_s* x);
int zx_ff12_LogoutRequest_NUM_ProviderID(struct zx_ff12_LogoutRequest_s* x);
int zx_ff12_LogoutRequest_NUM_NameIdentifier(struct zx_ff12_LogoutRequest_s* x);
int zx_ff12_LogoutRequest_NUM_SessionIndex(struct zx_ff12_LogoutRequest_s* x);
int zx_ff12_LogoutRequest_NUM_RelayState(struct zx_ff12_LogoutRequest_s* x);

struct zx_elem_s* zx_ff12_LogoutRequest_POP_RespondWith(struct zx_ff12_LogoutRequest_s* x);
struct zx_ds_Signature_s* zx_ff12_LogoutRequest_POP_Signature(struct zx_ff12_LogoutRequest_s* x);
struct zx_ff12_Extension_s* zx_ff12_LogoutRequest_POP_Extension(struct zx_ff12_LogoutRequest_s* x);
struct zx_elem_s* zx_ff12_LogoutRequest_POP_ProviderID(struct zx_ff12_LogoutRequest_s* x);
struct zx_sa11_NameIdentifier_s* zx_ff12_LogoutRequest_POP_NameIdentifier(struct zx_ff12_LogoutRequest_s* x);
struct zx_elem_s* zx_ff12_LogoutRequest_POP_SessionIndex(struct zx_ff12_LogoutRequest_s* x);
struct zx_elem_s* zx_ff12_LogoutRequest_POP_RelayState(struct zx_ff12_LogoutRequest_s* x);

void zx_ff12_LogoutRequest_PUSH_RespondWith(struct zx_ff12_LogoutRequest_s* x, struct zx_elem_s* y);
void zx_ff12_LogoutRequest_PUSH_Signature(struct zx_ff12_LogoutRequest_s* x, struct zx_ds_Signature_s* y);
void zx_ff12_LogoutRequest_PUSH_Extension(struct zx_ff12_LogoutRequest_s* x, struct zx_ff12_Extension_s* y);
void zx_ff12_LogoutRequest_PUSH_ProviderID(struct zx_ff12_LogoutRequest_s* x, struct zx_elem_s* y);
void zx_ff12_LogoutRequest_PUSH_NameIdentifier(struct zx_ff12_LogoutRequest_s* x, struct zx_sa11_NameIdentifier_s* y);
void zx_ff12_LogoutRequest_PUSH_SessionIndex(struct zx_ff12_LogoutRequest_s* x, struct zx_elem_s* y);
void zx_ff12_LogoutRequest_PUSH_RelayState(struct zx_ff12_LogoutRequest_s* x, struct zx_elem_s* y);

void zx_ff12_LogoutRequest_PUT_IssueInstant(struct zx_ff12_LogoutRequest_s* x, struct zx_str* y);
void zx_ff12_LogoutRequest_PUT_MajorVersion(struct zx_ff12_LogoutRequest_s* x, struct zx_str* y);
void zx_ff12_LogoutRequest_PUT_MinorVersion(struct zx_ff12_LogoutRequest_s* x, struct zx_str* y);
void zx_ff12_LogoutRequest_PUT_NotOnOrAfter(struct zx_ff12_LogoutRequest_s* x, struct zx_str* y);
void zx_ff12_LogoutRequest_PUT_RequestID(struct zx_ff12_LogoutRequest_s* x, struct zx_str* y);
void zx_ff12_LogoutRequest_PUT_consent(struct zx_ff12_LogoutRequest_s* x, struct zx_str* y);

void zx_ff12_LogoutRequest_PUT_RespondWith(struct zx_ff12_LogoutRequest_s* x, int n, struct zx_elem_s* y);
void zx_ff12_LogoutRequest_PUT_Signature(struct zx_ff12_LogoutRequest_s* x, int n, struct zx_ds_Signature_s* y);
void zx_ff12_LogoutRequest_PUT_Extension(struct zx_ff12_LogoutRequest_s* x, int n, struct zx_ff12_Extension_s* y);
void zx_ff12_LogoutRequest_PUT_ProviderID(struct zx_ff12_LogoutRequest_s* x, int n, struct zx_elem_s* y);
void zx_ff12_LogoutRequest_PUT_NameIdentifier(struct zx_ff12_LogoutRequest_s* x, int n, struct zx_sa11_NameIdentifier_s* y);
void zx_ff12_LogoutRequest_PUT_SessionIndex(struct zx_ff12_LogoutRequest_s* x, int n, struct zx_elem_s* y);
void zx_ff12_LogoutRequest_PUT_RelayState(struct zx_ff12_LogoutRequest_s* x, int n, struct zx_elem_s* y);

void zx_ff12_LogoutRequest_ADD_RespondWith(struct zx_ff12_LogoutRequest_s* x, int n, struct zx_elem_s* z);
void zx_ff12_LogoutRequest_ADD_Signature(struct zx_ff12_LogoutRequest_s* x, int n, struct zx_ds_Signature_s* z);
void zx_ff12_LogoutRequest_ADD_Extension(struct zx_ff12_LogoutRequest_s* x, int n, struct zx_ff12_Extension_s* z);
void zx_ff12_LogoutRequest_ADD_ProviderID(struct zx_ff12_LogoutRequest_s* x, int n, struct zx_elem_s* z);
void zx_ff12_LogoutRequest_ADD_NameIdentifier(struct zx_ff12_LogoutRequest_s* x, int n, struct zx_sa11_NameIdentifier_s* z);
void zx_ff12_LogoutRequest_ADD_SessionIndex(struct zx_ff12_LogoutRequest_s* x, int n, struct zx_elem_s* z);
void zx_ff12_LogoutRequest_ADD_RelayState(struct zx_ff12_LogoutRequest_s* x, int n, struct zx_elem_s* z);

void zx_ff12_LogoutRequest_DEL_RespondWith(struct zx_ff12_LogoutRequest_s* x, int n);
void zx_ff12_LogoutRequest_DEL_Signature(struct zx_ff12_LogoutRequest_s* x, int n);
void zx_ff12_LogoutRequest_DEL_Extension(struct zx_ff12_LogoutRequest_s* x, int n);
void zx_ff12_LogoutRequest_DEL_ProviderID(struct zx_ff12_LogoutRequest_s* x, int n);
void zx_ff12_LogoutRequest_DEL_NameIdentifier(struct zx_ff12_LogoutRequest_s* x, int n);
void zx_ff12_LogoutRequest_DEL_SessionIndex(struct zx_ff12_LogoutRequest_s* x, int n);
void zx_ff12_LogoutRequest_DEL_RelayState(struct zx_ff12_LogoutRequest_s* x, int n);

void zx_ff12_LogoutRequest_REV_RespondWith(struct zx_ff12_LogoutRequest_s* x);
void zx_ff12_LogoutRequest_REV_Signature(struct zx_ff12_LogoutRequest_s* x);
void zx_ff12_LogoutRequest_REV_Extension(struct zx_ff12_LogoutRequest_s* x);
void zx_ff12_LogoutRequest_REV_ProviderID(struct zx_ff12_LogoutRequest_s* x);
void zx_ff12_LogoutRequest_REV_NameIdentifier(struct zx_ff12_LogoutRequest_s* x);
void zx_ff12_LogoutRequest_REV_SessionIndex(struct zx_ff12_LogoutRequest_s* x);
void zx_ff12_LogoutRequest_REV_RelayState(struct zx_ff12_LogoutRequest_s* x);

#endif
/* -------------------------- ff12_LogoutResponse -------------------------- */
/* refby( zx_e_Body_s ) */
#ifndef zx_ff12_LogoutResponse_EXT
#define zx_ff12_LogoutResponse_EXT
#endif

struct zx_ff12_LogoutResponse_s* zx_DEC_ff12_LogoutResponse(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_ff12_LogoutResponse_s* zx_NEW_ff12_LogoutResponse(struct zx_ctx* c);
void zx_FREE_ff12_LogoutResponse(struct zx_ctx* c, struct zx_ff12_LogoutResponse_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_ff12_LogoutResponse_s* zx_DEEP_CLONE_ff12_LogoutResponse(struct zx_ctx* c, struct zx_ff12_LogoutResponse_s* x, int dup_strs);
void zx_DUP_STRS_ff12_LogoutResponse(struct zx_ctx* c, struct zx_ff12_LogoutResponse_s* x);
int zx_WALK_SO_ff12_LogoutResponse(struct zx_ctx* c, struct zx_ff12_LogoutResponse_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_ff12_LogoutResponse(struct zx_ctx* c, struct zx_ff12_LogoutResponse_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_ff12_LogoutResponse(struct zx_ctx* c, struct zx_ff12_LogoutResponse_s* x);
int zx_LEN_WO_ff12_LogoutResponse(struct zx_ctx* c, struct zx_ff12_LogoutResponse_s* x);
char* zx_ENC_SO_ff12_LogoutResponse(struct zx_ctx* c, struct zx_ff12_LogoutResponse_s* x, char* p);
char* zx_ENC_WO_ff12_LogoutResponse(struct zx_ctx* c, struct zx_ff12_LogoutResponse_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_ff12_LogoutResponse(struct zx_ctx* c, struct zx_ff12_LogoutResponse_s* x);
struct zx_str* zx_EASY_ENC_WO_ff12_LogoutResponse(struct zx_ctx* c, struct zx_ff12_LogoutResponse_s* x);

struct zx_ff12_LogoutResponse_s {
  ZX_ELEM_EXT
  zx_ff12_LogoutResponse_EXT
  struct zx_ds_Signature_s* Signature;	/* {0,1} nada */
  struct zx_ff12_Extension_s* Extension;	/* {0,-1}  */
  struct zx_elem_s* ProviderID;	/* {1,1} xs:anyURI */
  struct zx_sp11_Status_s* Status;	/* {1,1} nada */
  struct zx_elem_s* RelayState;	/* {0,1} xs:string */
  struct zx_str* InResponseTo;	/* {0,1} attribute xs:NCName */
  struct zx_str* IssueInstant;	/* {1,1} attribute xs:dateTime */
  struct zx_str* MajorVersion;	/* {1,1} attribute xs:integer */
  struct zx_str* MinorVersion;	/* {1,1} attribute xs:integer */
  struct zx_str* Recipient;	/* {0,1} attribute xs:anyURI */
  struct zx_str* ResponseID;	/* {1,1} attribute xs:ID */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_ff12_LogoutResponse_GET_InResponseTo(struct zx_ff12_LogoutResponse_s* x);
struct zx_str* zx_ff12_LogoutResponse_GET_IssueInstant(struct zx_ff12_LogoutResponse_s* x);
struct zx_str* zx_ff12_LogoutResponse_GET_MajorVersion(struct zx_ff12_LogoutResponse_s* x);
struct zx_str* zx_ff12_LogoutResponse_GET_MinorVersion(struct zx_ff12_LogoutResponse_s* x);
struct zx_str* zx_ff12_LogoutResponse_GET_Recipient(struct zx_ff12_LogoutResponse_s* x);
struct zx_str* zx_ff12_LogoutResponse_GET_ResponseID(struct zx_ff12_LogoutResponse_s* x);

struct zx_ds_Signature_s* zx_ff12_LogoutResponse_GET_Signature(struct zx_ff12_LogoutResponse_s* x, int n);
struct zx_ff12_Extension_s* zx_ff12_LogoutResponse_GET_Extension(struct zx_ff12_LogoutResponse_s* x, int n);
struct zx_elem_s* zx_ff12_LogoutResponse_GET_ProviderID(struct zx_ff12_LogoutResponse_s* x, int n);
struct zx_sp11_Status_s* zx_ff12_LogoutResponse_GET_Status(struct zx_ff12_LogoutResponse_s* x, int n);
struct zx_elem_s* zx_ff12_LogoutResponse_GET_RelayState(struct zx_ff12_LogoutResponse_s* x, int n);

int zx_ff12_LogoutResponse_NUM_Signature(struct zx_ff12_LogoutResponse_s* x);
int zx_ff12_LogoutResponse_NUM_Extension(struct zx_ff12_LogoutResponse_s* x);
int zx_ff12_LogoutResponse_NUM_ProviderID(struct zx_ff12_LogoutResponse_s* x);
int zx_ff12_LogoutResponse_NUM_Status(struct zx_ff12_LogoutResponse_s* x);
int zx_ff12_LogoutResponse_NUM_RelayState(struct zx_ff12_LogoutResponse_s* x);

struct zx_ds_Signature_s* zx_ff12_LogoutResponse_POP_Signature(struct zx_ff12_LogoutResponse_s* x);
struct zx_ff12_Extension_s* zx_ff12_LogoutResponse_POP_Extension(struct zx_ff12_LogoutResponse_s* x);
struct zx_elem_s* zx_ff12_LogoutResponse_POP_ProviderID(struct zx_ff12_LogoutResponse_s* x);
struct zx_sp11_Status_s* zx_ff12_LogoutResponse_POP_Status(struct zx_ff12_LogoutResponse_s* x);
struct zx_elem_s* zx_ff12_LogoutResponse_POP_RelayState(struct zx_ff12_LogoutResponse_s* x);

void zx_ff12_LogoutResponse_PUSH_Signature(struct zx_ff12_LogoutResponse_s* x, struct zx_ds_Signature_s* y);
void zx_ff12_LogoutResponse_PUSH_Extension(struct zx_ff12_LogoutResponse_s* x, struct zx_ff12_Extension_s* y);
void zx_ff12_LogoutResponse_PUSH_ProviderID(struct zx_ff12_LogoutResponse_s* x, struct zx_elem_s* y);
void zx_ff12_LogoutResponse_PUSH_Status(struct zx_ff12_LogoutResponse_s* x, struct zx_sp11_Status_s* y);
void zx_ff12_LogoutResponse_PUSH_RelayState(struct zx_ff12_LogoutResponse_s* x, struct zx_elem_s* y);

void zx_ff12_LogoutResponse_PUT_InResponseTo(struct zx_ff12_LogoutResponse_s* x, struct zx_str* y);
void zx_ff12_LogoutResponse_PUT_IssueInstant(struct zx_ff12_LogoutResponse_s* x, struct zx_str* y);
void zx_ff12_LogoutResponse_PUT_MajorVersion(struct zx_ff12_LogoutResponse_s* x, struct zx_str* y);
void zx_ff12_LogoutResponse_PUT_MinorVersion(struct zx_ff12_LogoutResponse_s* x, struct zx_str* y);
void zx_ff12_LogoutResponse_PUT_Recipient(struct zx_ff12_LogoutResponse_s* x, struct zx_str* y);
void zx_ff12_LogoutResponse_PUT_ResponseID(struct zx_ff12_LogoutResponse_s* x, struct zx_str* y);

void zx_ff12_LogoutResponse_PUT_Signature(struct zx_ff12_LogoutResponse_s* x, int n, struct zx_ds_Signature_s* y);
void zx_ff12_LogoutResponse_PUT_Extension(struct zx_ff12_LogoutResponse_s* x, int n, struct zx_ff12_Extension_s* y);
void zx_ff12_LogoutResponse_PUT_ProviderID(struct zx_ff12_LogoutResponse_s* x, int n, struct zx_elem_s* y);
void zx_ff12_LogoutResponse_PUT_Status(struct zx_ff12_LogoutResponse_s* x, int n, struct zx_sp11_Status_s* y);
void zx_ff12_LogoutResponse_PUT_RelayState(struct zx_ff12_LogoutResponse_s* x, int n, struct zx_elem_s* y);

void zx_ff12_LogoutResponse_ADD_Signature(struct zx_ff12_LogoutResponse_s* x, int n, struct zx_ds_Signature_s* z);
void zx_ff12_LogoutResponse_ADD_Extension(struct zx_ff12_LogoutResponse_s* x, int n, struct zx_ff12_Extension_s* z);
void zx_ff12_LogoutResponse_ADD_ProviderID(struct zx_ff12_LogoutResponse_s* x, int n, struct zx_elem_s* z);
void zx_ff12_LogoutResponse_ADD_Status(struct zx_ff12_LogoutResponse_s* x, int n, struct zx_sp11_Status_s* z);
void zx_ff12_LogoutResponse_ADD_RelayState(struct zx_ff12_LogoutResponse_s* x, int n, struct zx_elem_s* z);

void zx_ff12_LogoutResponse_DEL_Signature(struct zx_ff12_LogoutResponse_s* x, int n);
void zx_ff12_LogoutResponse_DEL_Extension(struct zx_ff12_LogoutResponse_s* x, int n);
void zx_ff12_LogoutResponse_DEL_ProviderID(struct zx_ff12_LogoutResponse_s* x, int n);
void zx_ff12_LogoutResponse_DEL_Status(struct zx_ff12_LogoutResponse_s* x, int n);
void zx_ff12_LogoutResponse_DEL_RelayState(struct zx_ff12_LogoutResponse_s* x, int n);

void zx_ff12_LogoutResponse_REV_Signature(struct zx_ff12_LogoutResponse_s* x);
void zx_ff12_LogoutResponse_REV_Extension(struct zx_ff12_LogoutResponse_s* x);
void zx_ff12_LogoutResponse_REV_ProviderID(struct zx_ff12_LogoutResponse_s* x);
void zx_ff12_LogoutResponse_REV_Status(struct zx_ff12_LogoutResponse_s* x);
void zx_ff12_LogoutResponse_REV_RelayState(struct zx_ff12_LogoutResponse_s* x);

#endif
/* -------------------------- ff12_NameIdentifierMappingRequest -------------------------- */
/* refby( zx_e_Body_s ) */
#ifndef zx_ff12_NameIdentifierMappingRequest_EXT
#define zx_ff12_NameIdentifierMappingRequest_EXT
#endif

struct zx_ff12_NameIdentifierMappingRequest_s* zx_DEC_ff12_NameIdentifierMappingRequest(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_ff12_NameIdentifierMappingRequest_s* zx_NEW_ff12_NameIdentifierMappingRequest(struct zx_ctx* c);
void zx_FREE_ff12_NameIdentifierMappingRequest(struct zx_ctx* c, struct zx_ff12_NameIdentifierMappingRequest_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_ff12_NameIdentifierMappingRequest_s* zx_DEEP_CLONE_ff12_NameIdentifierMappingRequest(struct zx_ctx* c, struct zx_ff12_NameIdentifierMappingRequest_s* x, int dup_strs);
void zx_DUP_STRS_ff12_NameIdentifierMappingRequest(struct zx_ctx* c, struct zx_ff12_NameIdentifierMappingRequest_s* x);
int zx_WALK_SO_ff12_NameIdentifierMappingRequest(struct zx_ctx* c, struct zx_ff12_NameIdentifierMappingRequest_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_ff12_NameIdentifierMappingRequest(struct zx_ctx* c, struct zx_ff12_NameIdentifierMappingRequest_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_ff12_NameIdentifierMappingRequest(struct zx_ctx* c, struct zx_ff12_NameIdentifierMappingRequest_s* x);
int zx_LEN_WO_ff12_NameIdentifierMappingRequest(struct zx_ctx* c, struct zx_ff12_NameIdentifierMappingRequest_s* x);
char* zx_ENC_SO_ff12_NameIdentifierMappingRequest(struct zx_ctx* c, struct zx_ff12_NameIdentifierMappingRequest_s* x, char* p);
char* zx_ENC_WO_ff12_NameIdentifierMappingRequest(struct zx_ctx* c, struct zx_ff12_NameIdentifierMappingRequest_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_ff12_NameIdentifierMappingRequest(struct zx_ctx* c, struct zx_ff12_NameIdentifierMappingRequest_s* x);
struct zx_str* zx_EASY_ENC_WO_ff12_NameIdentifierMappingRequest(struct zx_ctx* c, struct zx_ff12_NameIdentifierMappingRequest_s* x);

struct zx_ff12_NameIdentifierMappingRequest_s {
  ZX_ELEM_EXT
  zx_ff12_NameIdentifierMappingRequest_EXT
  struct zx_elem_s* RespondWith;	/* {0,-1} xs:QName */
  struct zx_ds_Signature_s* Signature;	/* {0,1} nada */
  struct zx_ff12_Extension_s* Extension;	/* {0,-1}  */
  struct zx_elem_s* ProviderID;	/* {1,1} xs:anyURI */
  struct zx_sa11_NameIdentifier_s* NameIdentifier;	/* {1,1} nada */
  struct zx_elem_s* TargetNamespace;	/* {1,1} xs:anyURI */
  struct zx_str* IssueInstant;	/* {1,1} attribute xs:dateTime */
  struct zx_str* MajorVersion;	/* {1,1} attribute xs:integer */
  struct zx_str* MinorVersion;	/* {1,1} attribute xs:integer */
  struct zx_str* RequestID;	/* {1,1} attribute xs:ID */
  struct zx_str* consent;	/* {0,1} attribute xs:string */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_ff12_NameIdentifierMappingRequest_GET_IssueInstant(struct zx_ff12_NameIdentifierMappingRequest_s* x);
struct zx_str* zx_ff12_NameIdentifierMappingRequest_GET_MajorVersion(struct zx_ff12_NameIdentifierMappingRequest_s* x);
struct zx_str* zx_ff12_NameIdentifierMappingRequest_GET_MinorVersion(struct zx_ff12_NameIdentifierMappingRequest_s* x);
struct zx_str* zx_ff12_NameIdentifierMappingRequest_GET_RequestID(struct zx_ff12_NameIdentifierMappingRequest_s* x);
struct zx_str* zx_ff12_NameIdentifierMappingRequest_GET_consent(struct zx_ff12_NameIdentifierMappingRequest_s* x);

struct zx_elem_s* zx_ff12_NameIdentifierMappingRequest_GET_RespondWith(struct zx_ff12_NameIdentifierMappingRequest_s* x, int n);
struct zx_ds_Signature_s* zx_ff12_NameIdentifierMappingRequest_GET_Signature(struct zx_ff12_NameIdentifierMappingRequest_s* x, int n);
struct zx_ff12_Extension_s* zx_ff12_NameIdentifierMappingRequest_GET_Extension(struct zx_ff12_NameIdentifierMappingRequest_s* x, int n);
struct zx_elem_s* zx_ff12_NameIdentifierMappingRequest_GET_ProviderID(struct zx_ff12_NameIdentifierMappingRequest_s* x, int n);
struct zx_sa11_NameIdentifier_s* zx_ff12_NameIdentifierMappingRequest_GET_NameIdentifier(struct zx_ff12_NameIdentifierMappingRequest_s* x, int n);
struct zx_elem_s* zx_ff12_NameIdentifierMappingRequest_GET_TargetNamespace(struct zx_ff12_NameIdentifierMappingRequest_s* x, int n);

int zx_ff12_NameIdentifierMappingRequest_NUM_RespondWith(struct zx_ff12_NameIdentifierMappingRequest_s* x);
int zx_ff12_NameIdentifierMappingRequest_NUM_Signature(struct zx_ff12_NameIdentifierMappingRequest_s* x);
int zx_ff12_NameIdentifierMappingRequest_NUM_Extension(struct zx_ff12_NameIdentifierMappingRequest_s* x);
int zx_ff12_NameIdentifierMappingRequest_NUM_ProviderID(struct zx_ff12_NameIdentifierMappingRequest_s* x);
int zx_ff12_NameIdentifierMappingRequest_NUM_NameIdentifier(struct zx_ff12_NameIdentifierMappingRequest_s* x);
int zx_ff12_NameIdentifierMappingRequest_NUM_TargetNamespace(struct zx_ff12_NameIdentifierMappingRequest_s* x);

struct zx_elem_s* zx_ff12_NameIdentifierMappingRequest_POP_RespondWith(struct zx_ff12_NameIdentifierMappingRequest_s* x);
struct zx_ds_Signature_s* zx_ff12_NameIdentifierMappingRequest_POP_Signature(struct zx_ff12_NameIdentifierMappingRequest_s* x);
struct zx_ff12_Extension_s* zx_ff12_NameIdentifierMappingRequest_POP_Extension(struct zx_ff12_NameIdentifierMappingRequest_s* x);
struct zx_elem_s* zx_ff12_NameIdentifierMappingRequest_POP_ProviderID(struct zx_ff12_NameIdentifierMappingRequest_s* x);
struct zx_sa11_NameIdentifier_s* zx_ff12_NameIdentifierMappingRequest_POP_NameIdentifier(struct zx_ff12_NameIdentifierMappingRequest_s* x);
struct zx_elem_s* zx_ff12_NameIdentifierMappingRequest_POP_TargetNamespace(struct zx_ff12_NameIdentifierMappingRequest_s* x);

void zx_ff12_NameIdentifierMappingRequest_PUSH_RespondWith(struct zx_ff12_NameIdentifierMappingRequest_s* x, struct zx_elem_s* y);
void zx_ff12_NameIdentifierMappingRequest_PUSH_Signature(struct zx_ff12_NameIdentifierMappingRequest_s* x, struct zx_ds_Signature_s* y);
void zx_ff12_NameIdentifierMappingRequest_PUSH_Extension(struct zx_ff12_NameIdentifierMappingRequest_s* x, struct zx_ff12_Extension_s* y);
void zx_ff12_NameIdentifierMappingRequest_PUSH_ProviderID(struct zx_ff12_NameIdentifierMappingRequest_s* x, struct zx_elem_s* y);
void zx_ff12_NameIdentifierMappingRequest_PUSH_NameIdentifier(struct zx_ff12_NameIdentifierMappingRequest_s* x, struct zx_sa11_NameIdentifier_s* y);
void zx_ff12_NameIdentifierMappingRequest_PUSH_TargetNamespace(struct zx_ff12_NameIdentifierMappingRequest_s* x, struct zx_elem_s* y);

void zx_ff12_NameIdentifierMappingRequest_PUT_IssueInstant(struct zx_ff12_NameIdentifierMappingRequest_s* x, struct zx_str* y);
void zx_ff12_NameIdentifierMappingRequest_PUT_MajorVersion(struct zx_ff12_NameIdentifierMappingRequest_s* x, struct zx_str* y);
void zx_ff12_NameIdentifierMappingRequest_PUT_MinorVersion(struct zx_ff12_NameIdentifierMappingRequest_s* x, struct zx_str* y);
void zx_ff12_NameIdentifierMappingRequest_PUT_RequestID(struct zx_ff12_NameIdentifierMappingRequest_s* x, struct zx_str* y);
void zx_ff12_NameIdentifierMappingRequest_PUT_consent(struct zx_ff12_NameIdentifierMappingRequest_s* x, struct zx_str* y);

void zx_ff12_NameIdentifierMappingRequest_PUT_RespondWith(struct zx_ff12_NameIdentifierMappingRequest_s* x, int n, struct zx_elem_s* y);
void zx_ff12_NameIdentifierMappingRequest_PUT_Signature(struct zx_ff12_NameIdentifierMappingRequest_s* x, int n, struct zx_ds_Signature_s* y);
void zx_ff12_NameIdentifierMappingRequest_PUT_Extension(struct zx_ff12_NameIdentifierMappingRequest_s* x, int n, struct zx_ff12_Extension_s* y);
void zx_ff12_NameIdentifierMappingRequest_PUT_ProviderID(struct zx_ff12_NameIdentifierMappingRequest_s* x, int n, struct zx_elem_s* y);
void zx_ff12_NameIdentifierMappingRequest_PUT_NameIdentifier(struct zx_ff12_NameIdentifierMappingRequest_s* x, int n, struct zx_sa11_NameIdentifier_s* y);
void zx_ff12_NameIdentifierMappingRequest_PUT_TargetNamespace(struct zx_ff12_NameIdentifierMappingRequest_s* x, int n, struct zx_elem_s* y);

void zx_ff12_NameIdentifierMappingRequest_ADD_RespondWith(struct zx_ff12_NameIdentifierMappingRequest_s* x, int n, struct zx_elem_s* z);
void zx_ff12_NameIdentifierMappingRequest_ADD_Signature(struct zx_ff12_NameIdentifierMappingRequest_s* x, int n, struct zx_ds_Signature_s* z);
void zx_ff12_NameIdentifierMappingRequest_ADD_Extension(struct zx_ff12_NameIdentifierMappingRequest_s* x, int n, struct zx_ff12_Extension_s* z);
void zx_ff12_NameIdentifierMappingRequest_ADD_ProviderID(struct zx_ff12_NameIdentifierMappingRequest_s* x, int n, struct zx_elem_s* z);
void zx_ff12_NameIdentifierMappingRequest_ADD_NameIdentifier(struct zx_ff12_NameIdentifierMappingRequest_s* x, int n, struct zx_sa11_NameIdentifier_s* z);
void zx_ff12_NameIdentifierMappingRequest_ADD_TargetNamespace(struct zx_ff12_NameIdentifierMappingRequest_s* x, int n, struct zx_elem_s* z);

void zx_ff12_NameIdentifierMappingRequest_DEL_RespondWith(struct zx_ff12_NameIdentifierMappingRequest_s* x, int n);
void zx_ff12_NameIdentifierMappingRequest_DEL_Signature(struct zx_ff12_NameIdentifierMappingRequest_s* x, int n);
void zx_ff12_NameIdentifierMappingRequest_DEL_Extension(struct zx_ff12_NameIdentifierMappingRequest_s* x, int n);
void zx_ff12_NameIdentifierMappingRequest_DEL_ProviderID(struct zx_ff12_NameIdentifierMappingRequest_s* x, int n);
void zx_ff12_NameIdentifierMappingRequest_DEL_NameIdentifier(struct zx_ff12_NameIdentifierMappingRequest_s* x, int n);
void zx_ff12_NameIdentifierMappingRequest_DEL_TargetNamespace(struct zx_ff12_NameIdentifierMappingRequest_s* x, int n);

void zx_ff12_NameIdentifierMappingRequest_REV_RespondWith(struct zx_ff12_NameIdentifierMappingRequest_s* x);
void zx_ff12_NameIdentifierMappingRequest_REV_Signature(struct zx_ff12_NameIdentifierMappingRequest_s* x);
void zx_ff12_NameIdentifierMappingRequest_REV_Extension(struct zx_ff12_NameIdentifierMappingRequest_s* x);
void zx_ff12_NameIdentifierMappingRequest_REV_ProviderID(struct zx_ff12_NameIdentifierMappingRequest_s* x);
void zx_ff12_NameIdentifierMappingRequest_REV_NameIdentifier(struct zx_ff12_NameIdentifierMappingRequest_s* x);
void zx_ff12_NameIdentifierMappingRequest_REV_TargetNamespace(struct zx_ff12_NameIdentifierMappingRequest_s* x);

#endif
/* -------------------------- ff12_NameIdentifierMappingResponse -------------------------- */
/* refby( zx_e_Body_s ) */
#ifndef zx_ff12_NameIdentifierMappingResponse_EXT
#define zx_ff12_NameIdentifierMappingResponse_EXT
#endif

struct zx_ff12_NameIdentifierMappingResponse_s* zx_DEC_ff12_NameIdentifierMappingResponse(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_ff12_NameIdentifierMappingResponse_s* zx_NEW_ff12_NameIdentifierMappingResponse(struct zx_ctx* c);
void zx_FREE_ff12_NameIdentifierMappingResponse(struct zx_ctx* c, struct zx_ff12_NameIdentifierMappingResponse_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_ff12_NameIdentifierMappingResponse_s* zx_DEEP_CLONE_ff12_NameIdentifierMappingResponse(struct zx_ctx* c, struct zx_ff12_NameIdentifierMappingResponse_s* x, int dup_strs);
void zx_DUP_STRS_ff12_NameIdentifierMappingResponse(struct zx_ctx* c, struct zx_ff12_NameIdentifierMappingResponse_s* x);
int zx_WALK_SO_ff12_NameIdentifierMappingResponse(struct zx_ctx* c, struct zx_ff12_NameIdentifierMappingResponse_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_ff12_NameIdentifierMappingResponse(struct zx_ctx* c, struct zx_ff12_NameIdentifierMappingResponse_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_ff12_NameIdentifierMappingResponse(struct zx_ctx* c, struct zx_ff12_NameIdentifierMappingResponse_s* x);
int zx_LEN_WO_ff12_NameIdentifierMappingResponse(struct zx_ctx* c, struct zx_ff12_NameIdentifierMappingResponse_s* x);
char* zx_ENC_SO_ff12_NameIdentifierMappingResponse(struct zx_ctx* c, struct zx_ff12_NameIdentifierMappingResponse_s* x, char* p);
char* zx_ENC_WO_ff12_NameIdentifierMappingResponse(struct zx_ctx* c, struct zx_ff12_NameIdentifierMappingResponse_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_ff12_NameIdentifierMappingResponse(struct zx_ctx* c, struct zx_ff12_NameIdentifierMappingResponse_s* x);
struct zx_str* zx_EASY_ENC_WO_ff12_NameIdentifierMappingResponse(struct zx_ctx* c, struct zx_ff12_NameIdentifierMappingResponse_s* x);

struct zx_ff12_NameIdentifierMappingResponse_s {
  ZX_ELEM_EXT
  zx_ff12_NameIdentifierMappingResponse_EXT
  struct zx_ds_Signature_s* Signature;	/* {0,1} nada */
  struct zx_ff12_Extension_s* Extension;	/* {0,-1}  */
  struct zx_elem_s* ProviderID;	/* {1,1} xs:anyURI */
  struct zx_sp11_Status_s* Status;	/* {1,1} nada */
  struct zx_sa11_NameIdentifier_s* NameIdentifier;	/* {0,1} nada */
  struct zx_str* InResponseTo;	/* {0,1} attribute xs:NCName */
  struct zx_str* IssueInstant;	/* {1,1} attribute xs:dateTime */
  struct zx_str* MajorVersion;	/* {1,1} attribute xs:integer */
  struct zx_str* MinorVersion;	/* {1,1} attribute xs:integer */
  struct zx_str* Recipient;	/* {0,1} attribute xs:anyURI */
  struct zx_str* ResponseID;	/* {1,1} attribute xs:ID */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_ff12_NameIdentifierMappingResponse_GET_InResponseTo(struct zx_ff12_NameIdentifierMappingResponse_s* x);
struct zx_str* zx_ff12_NameIdentifierMappingResponse_GET_IssueInstant(struct zx_ff12_NameIdentifierMappingResponse_s* x);
struct zx_str* zx_ff12_NameIdentifierMappingResponse_GET_MajorVersion(struct zx_ff12_NameIdentifierMappingResponse_s* x);
struct zx_str* zx_ff12_NameIdentifierMappingResponse_GET_MinorVersion(struct zx_ff12_NameIdentifierMappingResponse_s* x);
struct zx_str* zx_ff12_NameIdentifierMappingResponse_GET_Recipient(struct zx_ff12_NameIdentifierMappingResponse_s* x);
struct zx_str* zx_ff12_NameIdentifierMappingResponse_GET_ResponseID(struct zx_ff12_NameIdentifierMappingResponse_s* x);

struct zx_ds_Signature_s* zx_ff12_NameIdentifierMappingResponse_GET_Signature(struct zx_ff12_NameIdentifierMappingResponse_s* x, int n);
struct zx_ff12_Extension_s* zx_ff12_NameIdentifierMappingResponse_GET_Extension(struct zx_ff12_NameIdentifierMappingResponse_s* x, int n);
struct zx_elem_s* zx_ff12_NameIdentifierMappingResponse_GET_ProviderID(struct zx_ff12_NameIdentifierMappingResponse_s* x, int n);
struct zx_sp11_Status_s* zx_ff12_NameIdentifierMappingResponse_GET_Status(struct zx_ff12_NameIdentifierMappingResponse_s* x, int n);
struct zx_sa11_NameIdentifier_s* zx_ff12_NameIdentifierMappingResponse_GET_NameIdentifier(struct zx_ff12_NameIdentifierMappingResponse_s* x, int n);

int zx_ff12_NameIdentifierMappingResponse_NUM_Signature(struct zx_ff12_NameIdentifierMappingResponse_s* x);
int zx_ff12_NameIdentifierMappingResponse_NUM_Extension(struct zx_ff12_NameIdentifierMappingResponse_s* x);
int zx_ff12_NameIdentifierMappingResponse_NUM_ProviderID(struct zx_ff12_NameIdentifierMappingResponse_s* x);
int zx_ff12_NameIdentifierMappingResponse_NUM_Status(struct zx_ff12_NameIdentifierMappingResponse_s* x);
int zx_ff12_NameIdentifierMappingResponse_NUM_NameIdentifier(struct zx_ff12_NameIdentifierMappingResponse_s* x);

struct zx_ds_Signature_s* zx_ff12_NameIdentifierMappingResponse_POP_Signature(struct zx_ff12_NameIdentifierMappingResponse_s* x);
struct zx_ff12_Extension_s* zx_ff12_NameIdentifierMappingResponse_POP_Extension(struct zx_ff12_NameIdentifierMappingResponse_s* x);
struct zx_elem_s* zx_ff12_NameIdentifierMappingResponse_POP_ProviderID(struct zx_ff12_NameIdentifierMappingResponse_s* x);
struct zx_sp11_Status_s* zx_ff12_NameIdentifierMappingResponse_POP_Status(struct zx_ff12_NameIdentifierMappingResponse_s* x);
struct zx_sa11_NameIdentifier_s* zx_ff12_NameIdentifierMappingResponse_POP_NameIdentifier(struct zx_ff12_NameIdentifierMappingResponse_s* x);

void zx_ff12_NameIdentifierMappingResponse_PUSH_Signature(struct zx_ff12_NameIdentifierMappingResponse_s* x, struct zx_ds_Signature_s* y);
void zx_ff12_NameIdentifierMappingResponse_PUSH_Extension(struct zx_ff12_NameIdentifierMappingResponse_s* x, struct zx_ff12_Extension_s* y);
void zx_ff12_NameIdentifierMappingResponse_PUSH_ProviderID(struct zx_ff12_NameIdentifierMappingResponse_s* x, struct zx_elem_s* y);
void zx_ff12_NameIdentifierMappingResponse_PUSH_Status(struct zx_ff12_NameIdentifierMappingResponse_s* x, struct zx_sp11_Status_s* y);
void zx_ff12_NameIdentifierMappingResponse_PUSH_NameIdentifier(struct zx_ff12_NameIdentifierMappingResponse_s* x, struct zx_sa11_NameIdentifier_s* y);

void zx_ff12_NameIdentifierMappingResponse_PUT_InResponseTo(struct zx_ff12_NameIdentifierMappingResponse_s* x, struct zx_str* y);
void zx_ff12_NameIdentifierMappingResponse_PUT_IssueInstant(struct zx_ff12_NameIdentifierMappingResponse_s* x, struct zx_str* y);
void zx_ff12_NameIdentifierMappingResponse_PUT_MajorVersion(struct zx_ff12_NameIdentifierMappingResponse_s* x, struct zx_str* y);
void zx_ff12_NameIdentifierMappingResponse_PUT_MinorVersion(struct zx_ff12_NameIdentifierMappingResponse_s* x, struct zx_str* y);
void zx_ff12_NameIdentifierMappingResponse_PUT_Recipient(struct zx_ff12_NameIdentifierMappingResponse_s* x, struct zx_str* y);
void zx_ff12_NameIdentifierMappingResponse_PUT_ResponseID(struct zx_ff12_NameIdentifierMappingResponse_s* x, struct zx_str* y);

void zx_ff12_NameIdentifierMappingResponse_PUT_Signature(struct zx_ff12_NameIdentifierMappingResponse_s* x, int n, struct zx_ds_Signature_s* y);
void zx_ff12_NameIdentifierMappingResponse_PUT_Extension(struct zx_ff12_NameIdentifierMappingResponse_s* x, int n, struct zx_ff12_Extension_s* y);
void zx_ff12_NameIdentifierMappingResponse_PUT_ProviderID(struct zx_ff12_NameIdentifierMappingResponse_s* x, int n, struct zx_elem_s* y);
void zx_ff12_NameIdentifierMappingResponse_PUT_Status(struct zx_ff12_NameIdentifierMappingResponse_s* x, int n, struct zx_sp11_Status_s* y);
void zx_ff12_NameIdentifierMappingResponse_PUT_NameIdentifier(struct zx_ff12_NameIdentifierMappingResponse_s* x, int n, struct zx_sa11_NameIdentifier_s* y);

void zx_ff12_NameIdentifierMappingResponse_ADD_Signature(struct zx_ff12_NameIdentifierMappingResponse_s* x, int n, struct zx_ds_Signature_s* z);
void zx_ff12_NameIdentifierMappingResponse_ADD_Extension(struct zx_ff12_NameIdentifierMappingResponse_s* x, int n, struct zx_ff12_Extension_s* z);
void zx_ff12_NameIdentifierMappingResponse_ADD_ProviderID(struct zx_ff12_NameIdentifierMappingResponse_s* x, int n, struct zx_elem_s* z);
void zx_ff12_NameIdentifierMappingResponse_ADD_Status(struct zx_ff12_NameIdentifierMappingResponse_s* x, int n, struct zx_sp11_Status_s* z);
void zx_ff12_NameIdentifierMappingResponse_ADD_NameIdentifier(struct zx_ff12_NameIdentifierMappingResponse_s* x, int n, struct zx_sa11_NameIdentifier_s* z);

void zx_ff12_NameIdentifierMappingResponse_DEL_Signature(struct zx_ff12_NameIdentifierMappingResponse_s* x, int n);
void zx_ff12_NameIdentifierMappingResponse_DEL_Extension(struct zx_ff12_NameIdentifierMappingResponse_s* x, int n);
void zx_ff12_NameIdentifierMappingResponse_DEL_ProviderID(struct zx_ff12_NameIdentifierMappingResponse_s* x, int n);
void zx_ff12_NameIdentifierMappingResponse_DEL_Status(struct zx_ff12_NameIdentifierMappingResponse_s* x, int n);
void zx_ff12_NameIdentifierMappingResponse_DEL_NameIdentifier(struct zx_ff12_NameIdentifierMappingResponse_s* x, int n);

void zx_ff12_NameIdentifierMappingResponse_REV_Signature(struct zx_ff12_NameIdentifierMappingResponse_s* x);
void zx_ff12_NameIdentifierMappingResponse_REV_Extension(struct zx_ff12_NameIdentifierMappingResponse_s* x);
void zx_ff12_NameIdentifierMappingResponse_REV_ProviderID(struct zx_ff12_NameIdentifierMappingResponse_s* x);
void zx_ff12_NameIdentifierMappingResponse_REV_Status(struct zx_ff12_NameIdentifierMappingResponse_s* x);
void zx_ff12_NameIdentifierMappingResponse_REV_NameIdentifier(struct zx_ff12_NameIdentifierMappingResponse_s* x);

#endif
/* -------------------------- ff12_OldProvidedNameIdentifier -------------------------- */
/* refby( zx_ff12_RegisterNameIdentifierRequest_s ) */
#ifndef zx_ff12_OldProvidedNameIdentifier_EXT
#define zx_ff12_OldProvidedNameIdentifier_EXT
#endif

struct zx_ff12_OldProvidedNameIdentifier_s* zx_DEC_ff12_OldProvidedNameIdentifier(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_ff12_OldProvidedNameIdentifier_s* zx_NEW_ff12_OldProvidedNameIdentifier(struct zx_ctx* c);
void zx_FREE_ff12_OldProvidedNameIdentifier(struct zx_ctx* c, struct zx_ff12_OldProvidedNameIdentifier_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_ff12_OldProvidedNameIdentifier_s* zx_DEEP_CLONE_ff12_OldProvidedNameIdentifier(struct zx_ctx* c, struct zx_ff12_OldProvidedNameIdentifier_s* x, int dup_strs);
void zx_DUP_STRS_ff12_OldProvidedNameIdentifier(struct zx_ctx* c, struct zx_ff12_OldProvidedNameIdentifier_s* x);
int zx_WALK_SO_ff12_OldProvidedNameIdentifier(struct zx_ctx* c, struct zx_ff12_OldProvidedNameIdentifier_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_ff12_OldProvidedNameIdentifier(struct zx_ctx* c, struct zx_ff12_OldProvidedNameIdentifier_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_ff12_OldProvidedNameIdentifier(struct zx_ctx* c, struct zx_ff12_OldProvidedNameIdentifier_s* x);
int zx_LEN_WO_ff12_OldProvidedNameIdentifier(struct zx_ctx* c, struct zx_ff12_OldProvidedNameIdentifier_s* x);
char* zx_ENC_SO_ff12_OldProvidedNameIdentifier(struct zx_ctx* c, struct zx_ff12_OldProvidedNameIdentifier_s* x, char* p);
char* zx_ENC_WO_ff12_OldProvidedNameIdentifier(struct zx_ctx* c, struct zx_ff12_OldProvidedNameIdentifier_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_ff12_OldProvidedNameIdentifier(struct zx_ctx* c, struct zx_ff12_OldProvidedNameIdentifier_s* x);
struct zx_str* zx_EASY_ENC_WO_ff12_OldProvidedNameIdentifier(struct zx_ctx* c, struct zx_ff12_OldProvidedNameIdentifier_s* x);

struct zx_ff12_OldProvidedNameIdentifier_s {
  ZX_ELEM_EXT
  zx_ff12_OldProvidedNameIdentifier_EXT
  struct zx_str* Format;	/* {0,1} attribute xs:anyURI */
  struct zx_str* NameQualifier;	/* {0,1} attribute xs:string */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_ff12_OldProvidedNameIdentifier_GET_Format(struct zx_ff12_OldProvidedNameIdentifier_s* x);
struct zx_str* zx_ff12_OldProvidedNameIdentifier_GET_NameQualifier(struct zx_ff12_OldProvidedNameIdentifier_s* x);





void zx_ff12_OldProvidedNameIdentifier_PUT_Format(struct zx_ff12_OldProvidedNameIdentifier_s* x, struct zx_str* y);
void zx_ff12_OldProvidedNameIdentifier_PUT_NameQualifier(struct zx_ff12_OldProvidedNameIdentifier_s* x, struct zx_str* y);





#endif
/* -------------------------- ff12_RegisterNameIdentifierRequest -------------------------- */
/* refby( zx_e_Body_s ) */
#ifndef zx_ff12_RegisterNameIdentifierRequest_EXT
#define zx_ff12_RegisterNameIdentifierRequest_EXT
#endif

struct zx_ff12_RegisterNameIdentifierRequest_s* zx_DEC_ff12_RegisterNameIdentifierRequest(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_ff12_RegisterNameIdentifierRequest_s* zx_NEW_ff12_RegisterNameIdentifierRequest(struct zx_ctx* c);
void zx_FREE_ff12_RegisterNameIdentifierRequest(struct zx_ctx* c, struct zx_ff12_RegisterNameIdentifierRequest_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_ff12_RegisterNameIdentifierRequest_s* zx_DEEP_CLONE_ff12_RegisterNameIdentifierRequest(struct zx_ctx* c, struct zx_ff12_RegisterNameIdentifierRequest_s* x, int dup_strs);
void zx_DUP_STRS_ff12_RegisterNameIdentifierRequest(struct zx_ctx* c, struct zx_ff12_RegisterNameIdentifierRequest_s* x);
int zx_WALK_SO_ff12_RegisterNameIdentifierRequest(struct zx_ctx* c, struct zx_ff12_RegisterNameIdentifierRequest_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_ff12_RegisterNameIdentifierRequest(struct zx_ctx* c, struct zx_ff12_RegisterNameIdentifierRequest_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_ff12_RegisterNameIdentifierRequest(struct zx_ctx* c, struct zx_ff12_RegisterNameIdentifierRequest_s* x);
int zx_LEN_WO_ff12_RegisterNameIdentifierRequest(struct zx_ctx* c, struct zx_ff12_RegisterNameIdentifierRequest_s* x);
char* zx_ENC_SO_ff12_RegisterNameIdentifierRequest(struct zx_ctx* c, struct zx_ff12_RegisterNameIdentifierRequest_s* x, char* p);
char* zx_ENC_WO_ff12_RegisterNameIdentifierRequest(struct zx_ctx* c, struct zx_ff12_RegisterNameIdentifierRequest_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_ff12_RegisterNameIdentifierRequest(struct zx_ctx* c, struct zx_ff12_RegisterNameIdentifierRequest_s* x);
struct zx_str* zx_EASY_ENC_WO_ff12_RegisterNameIdentifierRequest(struct zx_ctx* c, struct zx_ff12_RegisterNameIdentifierRequest_s* x);

struct zx_ff12_RegisterNameIdentifierRequest_s {
  ZX_ELEM_EXT
  zx_ff12_RegisterNameIdentifierRequest_EXT
  struct zx_elem_s* RespondWith;	/* {0,-1} xs:QName */
  struct zx_ds_Signature_s* Signature;	/* {0,1} nada */
  struct zx_ff12_Extension_s* Extension;	/* {0,-1}  */
  struct zx_elem_s* ProviderID;	/* {1,1} xs:anyURI */
  struct zx_ff12_IDPProvidedNameIdentifier_s* IDPProvidedNameIdentifier;	/* {1,1} nada */
  struct zx_ff12_SPProvidedNameIdentifier_s* SPProvidedNameIdentifier;	/* {0,1} nada */
  struct zx_ff12_OldProvidedNameIdentifier_s* OldProvidedNameIdentifier;	/* {1,1} nada */
  struct zx_elem_s* RelayState;	/* {0,1} xs:string */
  struct zx_str* IssueInstant;	/* {1,1} attribute xs:dateTime */
  struct zx_str* MajorVersion;	/* {1,1} attribute xs:integer */
  struct zx_str* MinorVersion;	/* {1,1} attribute xs:integer */
  struct zx_str* RequestID;	/* {1,1} attribute xs:ID */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_ff12_RegisterNameIdentifierRequest_GET_IssueInstant(struct zx_ff12_RegisterNameIdentifierRequest_s* x);
struct zx_str* zx_ff12_RegisterNameIdentifierRequest_GET_MajorVersion(struct zx_ff12_RegisterNameIdentifierRequest_s* x);
struct zx_str* zx_ff12_RegisterNameIdentifierRequest_GET_MinorVersion(struct zx_ff12_RegisterNameIdentifierRequest_s* x);
struct zx_str* zx_ff12_RegisterNameIdentifierRequest_GET_RequestID(struct zx_ff12_RegisterNameIdentifierRequest_s* x);

struct zx_elem_s* zx_ff12_RegisterNameIdentifierRequest_GET_RespondWith(struct zx_ff12_RegisterNameIdentifierRequest_s* x, int n);
struct zx_ds_Signature_s* zx_ff12_RegisterNameIdentifierRequest_GET_Signature(struct zx_ff12_RegisterNameIdentifierRequest_s* x, int n);
struct zx_ff12_Extension_s* zx_ff12_RegisterNameIdentifierRequest_GET_Extension(struct zx_ff12_RegisterNameIdentifierRequest_s* x, int n);
struct zx_elem_s* zx_ff12_RegisterNameIdentifierRequest_GET_ProviderID(struct zx_ff12_RegisterNameIdentifierRequest_s* x, int n);
struct zx_ff12_IDPProvidedNameIdentifier_s* zx_ff12_RegisterNameIdentifierRequest_GET_IDPProvidedNameIdentifier(struct zx_ff12_RegisterNameIdentifierRequest_s* x, int n);
struct zx_ff12_SPProvidedNameIdentifier_s* zx_ff12_RegisterNameIdentifierRequest_GET_SPProvidedNameIdentifier(struct zx_ff12_RegisterNameIdentifierRequest_s* x, int n);
struct zx_ff12_OldProvidedNameIdentifier_s* zx_ff12_RegisterNameIdentifierRequest_GET_OldProvidedNameIdentifier(struct zx_ff12_RegisterNameIdentifierRequest_s* x, int n);
struct zx_elem_s* zx_ff12_RegisterNameIdentifierRequest_GET_RelayState(struct zx_ff12_RegisterNameIdentifierRequest_s* x, int n);

int zx_ff12_RegisterNameIdentifierRequest_NUM_RespondWith(struct zx_ff12_RegisterNameIdentifierRequest_s* x);
int zx_ff12_RegisterNameIdentifierRequest_NUM_Signature(struct zx_ff12_RegisterNameIdentifierRequest_s* x);
int zx_ff12_RegisterNameIdentifierRequest_NUM_Extension(struct zx_ff12_RegisterNameIdentifierRequest_s* x);
int zx_ff12_RegisterNameIdentifierRequest_NUM_ProviderID(struct zx_ff12_RegisterNameIdentifierRequest_s* x);
int zx_ff12_RegisterNameIdentifierRequest_NUM_IDPProvidedNameIdentifier(struct zx_ff12_RegisterNameIdentifierRequest_s* x);
int zx_ff12_RegisterNameIdentifierRequest_NUM_SPProvidedNameIdentifier(struct zx_ff12_RegisterNameIdentifierRequest_s* x);
int zx_ff12_RegisterNameIdentifierRequest_NUM_OldProvidedNameIdentifier(struct zx_ff12_RegisterNameIdentifierRequest_s* x);
int zx_ff12_RegisterNameIdentifierRequest_NUM_RelayState(struct zx_ff12_RegisterNameIdentifierRequest_s* x);

struct zx_elem_s* zx_ff12_RegisterNameIdentifierRequest_POP_RespondWith(struct zx_ff12_RegisterNameIdentifierRequest_s* x);
struct zx_ds_Signature_s* zx_ff12_RegisterNameIdentifierRequest_POP_Signature(struct zx_ff12_RegisterNameIdentifierRequest_s* x);
struct zx_ff12_Extension_s* zx_ff12_RegisterNameIdentifierRequest_POP_Extension(struct zx_ff12_RegisterNameIdentifierRequest_s* x);
struct zx_elem_s* zx_ff12_RegisterNameIdentifierRequest_POP_ProviderID(struct zx_ff12_RegisterNameIdentifierRequest_s* x);
struct zx_ff12_IDPProvidedNameIdentifier_s* zx_ff12_RegisterNameIdentifierRequest_POP_IDPProvidedNameIdentifier(struct zx_ff12_RegisterNameIdentifierRequest_s* x);
struct zx_ff12_SPProvidedNameIdentifier_s* zx_ff12_RegisterNameIdentifierRequest_POP_SPProvidedNameIdentifier(struct zx_ff12_RegisterNameIdentifierRequest_s* x);
struct zx_ff12_OldProvidedNameIdentifier_s* zx_ff12_RegisterNameIdentifierRequest_POP_OldProvidedNameIdentifier(struct zx_ff12_RegisterNameIdentifierRequest_s* x);
struct zx_elem_s* zx_ff12_RegisterNameIdentifierRequest_POP_RelayState(struct zx_ff12_RegisterNameIdentifierRequest_s* x);

void zx_ff12_RegisterNameIdentifierRequest_PUSH_RespondWith(struct zx_ff12_RegisterNameIdentifierRequest_s* x, struct zx_elem_s* y);
void zx_ff12_RegisterNameIdentifierRequest_PUSH_Signature(struct zx_ff12_RegisterNameIdentifierRequest_s* x, struct zx_ds_Signature_s* y);
void zx_ff12_RegisterNameIdentifierRequest_PUSH_Extension(struct zx_ff12_RegisterNameIdentifierRequest_s* x, struct zx_ff12_Extension_s* y);
void zx_ff12_RegisterNameIdentifierRequest_PUSH_ProviderID(struct zx_ff12_RegisterNameIdentifierRequest_s* x, struct zx_elem_s* y);
void zx_ff12_RegisterNameIdentifierRequest_PUSH_IDPProvidedNameIdentifier(struct zx_ff12_RegisterNameIdentifierRequest_s* x, struct zx_ff12_IDPProvidedNameIdentifier_s* y);
void zx_ff12_RegisterNameIdentifierRequest_PUSH_SPProvidedNameIdentifier(struct zx_ff12_RegisterNameIdentifierRequest_s* x, struct zx_ff12_SPProvidedNameIdentifier_s* y);
void zx_ff12_RegisterNameIdentifierRequest_PUSH_OldProvidedNameIdentifier(struct zx_ff12_RegisterNameIdentifierRequest_s* x, struct zx_ff12_OldProvidedNameIdentifier_s* y);
void zx_ff12_RegisterNameIdentifierRequest_PUSH_RelayState(struct zx_ff12_RegisterNameIdentifierRequest_s* x, struct zx_elem_s* y);

void zx_ff12_RegisterNameIdentifierRequest_PUT_IssueInstant(struct zx_ff12_RegisterNameIdentifierRequest_s* x, struct zx_str* y);
void zx_ff12_RegisterNameIdentifierRequest_PUT_MajorVersion(struct zx_ff12_RegisterNameIdentifierRequest_s* x, struct zx_str* y);
void zx_ff12_RegisterNameIdentifierRequest_PUT_MinorVersion(struct zx_ff12_RegisterNameIdentifierRequest_s* x, struct zx_str* y);
void zx_ff12_RegisterNameIdentifierRequest_PUT_RequestID(struct zx_ff12_RegisterNameIdentifierRequest_s* x, struct zx_str* y);

void zx_ff12_RegisterNameIdentifierRequest_PUT_RespondWith(struct zx_ff12_RegisterNameIdentifierRequest_s* x, int n, struct zx_elem_s* y);
void zx_ff12_RegisterNameIdentifierRequest_PUT_Signature(struct zx_ff12_RegisterNameIdentifierRequest_s* x, int n, struct zx_ds_Signature_s* y);
void zx_ff12_RegisterNameIdentifierRequest_PUT_Extension(struct zx_ff12_RegisterNameIdentifierRequest_s* x, int n, struct zx_ff12_Extension_s* y);
void zx_ff12_RegisterNameIdentifierRequest_PUT_ProviderID(struct zx_ff12_RegisterNameIdentifierRequest_s* x, int n, struct zx_elem_s* y);
void zx_ff12_RegisterNameIdentifierRequest_PUT_IDPProvidedNameIdentifier(struct zx_ff12_RegisterNameIdentifierRequest_s* x, int n, struct zx_ff12_IDPProvidedNameIdentifier_s* y);
void zx_ff12_RegisterNameIdentifierRequest_PUT_SPProvidedNameIdentifier(struct zx_ff12_RegisterNameIdentifierRequest_s* x, int n, struct zx_ff12_SPProvidedNameIdentifier_s* y);
void zx_ff12_RegisterNameIdentifierRequest_PUT_OldProvidedNameIdentifier(struct zx_ff12_RegisterNameIdentifierRequest_s* x, int n, struct zx_ff12_OldProvidedNameIdentifier_s* y);
void zx_ff12_RegisterNameIdentifierRequest_PUT_RelayState(struct zx_ff12_RegisterNameIdentifierRequest_s* x, int n, struct zx_elem_s* y);

void zx_ff12_RegisterNameIdentifierRequest_ADD_RespondWith(struct zx_ff12_RegisterNameIdentifierRequest_s* x, int n, struct zx_elem_s* z);
void zx_ff12_RegisterNameIdentifierRequest_ADD_Signature(struct zx_ff12_RegisterNameIdentifierRequest_s* x, int n, struct zx_ds_Signature_s* z);
void zx_ff12_RegisterNameIdentifierRequest_ADD_Extension(struct zx_ff12_RegisterNameIdentifierRequest_s* x, int n, struct zx_ff12_Extension_s* z);
void zx_ff12_RegisterNameIdentifierRequest_ADD_ProviderID(struct zx_ff12_RegisterNameIdentifierRequest_s* x, int n, struct zx_elem_s* z);
void zx_ff12_RegisterNameIdentifierRequest_ADD_IDPProvidedNameIdentifier(struct zx_ff12_RegisterNameIdentifierRequest_s* x, int n, struct zx_ff12_IDPProvidedNameIdentifier_s* z);
void zx_ff12_RegisterNameIdentifierRequest_ADD_SPProvidedNameIdentifier(struct zx_ff12_RegisterNameIdentifierRequest_s* x, int n, struct zx_ff12_SPProvidedNameIdentifier_s* z);
void zx_ff12_RegisterNameIdentifierRequest_ADD_OldProvidedNameIdentifier(struct zx_ff12_RegisterNameIdentifierRequest_s* x, int n, struct zx_ff12_OldProvidedNameIdentifier_s* z);
void zx_ff12_RegisterNameIdentifierRequest_ADD_RelayState(struct zx_ff12_RegisterNameIdentifierRequest_s* x, int n, struct zx_elem_s* z);

void zx_ff12_RegisterNameIdentifierRequest_DEL_RespondWith(struct zx_ff12_RegisterNameIdentifierRequest_s* x, int n);
void zx_ff12_RegisterNameIdentifierRequest_DEL_Signature(struct zx_ff12_RegisterNameIdentifierRequest_s* x, int n);
void zx_ff12_RegisterNameIdentifierRequest_DEL_Extension(struct zx_ff12_RegisterNameIdentifierRequest_s* x, int n);
void zx_ff12_RegisterNameIdentifierRequest_DEL_ProviderID(struct zx_ff12_RegisterNameIdentifierRequest_s* x, int n);
void zx_ff12_RegisterNameIdentifierRequest_DEL_IDPProvidedNameIdentifier(struct zx_ff12_RegisterNameIdentifierRequest_s* x, int n);
void zx_ff12_RegisterNameIdentifierRequest_DEL_SPProvidedNameIdentifier(struct zx_ff12_RegisterNameIdentifierRequest_s* x, int n);
void zx_ff12_RegisterNameIdentifierRequest_DEL_OldProvidedNameIdentifier(struct zx_ff12_RegisterNameIdentifierRequest_s* x, int n);
void zx_ff12_RegisterNameIdentifierRequest_DEL_RelayState(struct zx_ff12_RegisterNameIdentifierRequest_s* x, int n);

void zx_ff12_RegisterNameIdentifierRequest_REV_RespondWith(struct zx_ff12_RegisterNameIdentifierRequest_s* x);
void zx_ff12_RegisterNameIdentifierRequest_REV_Signature(struct zx_ff12_RegisterNameIdentifierRequest_s* x);
void zx_ff12_RegisterNameIdentifierRequest_REV_Extension(struct zx_ff12_RegisterNameIdentifierRequest_s* x);
void zx_ff12_RegisterNameIdentifierRequest_REV_ProviderID(struct zx_ff12_RegisterNameIdentifierRequest_s* x);
void zx_ff12_RegisterNameIdentifierRequest_REV_IDPProvidedNameIdentifier(struct zx_ff12_RegisterNameIdentifierRequest_s* x);
void zx_ff12_RegisterNameIdentifierRequest_REV_SPProvidedNameIdentifier(struct zx_ff12_RegisterNameIdentifierRequest_s* x);
void zx_ff12_RegisterNameIdentifierRequest_REV_OldProvidedNameIdentifier(struct zx_ff12_RegisterNameIdentifierRequest_s* x);
void zx_ff12_RegisterNameIdentifierRequest_REV_RelayState(struct zx_ff12_RegisterNameIdentifierRequest_s* x);

#endif
/* -------------------------- ff12_RegisterNameIdentifierResponse -------------------------- */
/* refby( zx_e_Body_s ) */
#ifndef zx_ff12_RegisterNameIdentifierResponse_EXT
#define zx_ff12_RegisterNameIdentifierResponse_EXT
#endif

struct zx_ff12_RegisterNameIdentifierResponse_s* zx_DEC_ff12_RegisterNameIdentifierResponse(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_ff12_RegisterNameIdentifierResponse_s* zx_NEW_ff12_RegisterNameIdentifierResponse(struct zx_ctx* c);
void zx_FREE_ff12_RegisterNameIdentifierResponse(struct zx_ctx* c, struct zx_ff12_RegisterNameIdentifierResponse_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_ff12_RegisterNameIdentifierResponse_s* zx_DEEP_CLONE_ff12_RegisterNameIdentifierResponse(struct zx_ctx* c, struct zx_ff12_RegisterNameIdentifierResponse_s* x, int dup_strs);
void zx_DUP_STRS_ff12_RegisterNameIdentifierResponse(struct zx_ctx* c, struct zx_ff12_RegisterNameIdentifierResponse_s* x);
int zx_WALK_SO_ff12_RegisterNameIdentifierResponse(struct zx_ctx* c, struct zx_ff12_RegisterNameIdentifierResponse_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_ff12_RegisterNameIdentifierResponse(struct zx_ctx* c, struct zx_ff12_RegisterNameIdentifierResponse_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_ff12_RegisterNameIdentifierResponse(struct zx_ctx* c, struct zx_ff12_RegisterNameIdentifierResponse_s* x);
int zx_LEN_WO_ff12_RegisterNameIdentifierResponse(struct zx_ctx* c, struct zx_ff12_RegisterNameIdentifierResponse_s* x);
char* zx_ENC_SO_ff12_RegisterNameIdentifierResponse(struct zx_ctx* c, struct zx_ff12_RegisterNameIdentifierResponse_s* x, char* p);
char* zx_ENC_WO_ff12_RegisterNameIdentifierResponse(struct zx_ctx* c, struct zx_ff12_RegisterNameIdentifierResponse_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_ff12_RegisterNameIdentifierResponse(struct zx_ctx* c, struct zx_ff12_RegisterNameIdentifierResponse_s* x);
struct zx_str* zx_EASY_ENC_WO_ff12_RegisterNameIdentifierResponse(struct zx_ctx* c, struct zx_ff12_RegisterNameIdentifierResponse_s* x);

struct zx_ff12_RegisterNameIdentifierResponse_s {
  ZX_ELEM_EXT
  zx_ff12_RegisterNameIdentifierResponse_EXT
  struct zx_ds_Signature_s* Signature;	/* {0,1} nada */
  struct zx_ff12_Extension_s* Extension;	/* {0,-1}  */
  struct zx_elem_s* ProviderID;	/* {1,1} xs:anyURI */
  struct zx_sp11_Status_s* Status;	/* {1,1} nada */
  struct zx_elem_s* RelayState;	/* {0,1} xs:string */
  struct zx_str* InResponseTo;	/* {0,1} attribute xs:NCName */
  struct zx_str* IssueInstant;	/* {1,1} attribute xs:dateTime */
  struct zx_str* MajorVersion;	/* {1,1} attribute xs:integer */
  struct zx_str* MinorVersion;	/* {1,1} attribute xs:integer */
  struct zx_str* Recipient;	/* {0,1} attribute xs:anyURI */
  struct zx_str* ResponseID;	/* {1,1} attribute xs:ID */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_ff12_RegisterNameIdentifierResponse_GET_InResponseTo(struct zx_ff12_RegisterNameIdentifierResponse_s* x);
struct zx_str* zx_ff12_RegisterNameIdentifierResponse_GET_IssueInstant(struct zx_ff12_RegisterNameIdentifierResponse_s* x);
struct zx_str* zx_ff12_RegisterNameIdentifierResponse_GET_MajorVersion(struct zx_ff12_RegisterNameIdentifierResponse_s* x);
struct zx_str* zx_ff12_RegisterNameIdentifierResponse_GET_MinorVersion(struct zx_ff12_RegisterNameIdentifierResponse_s* x);
struct zx_str* zx_ff12_RegisterNameIdentifierResponse_GET_Recipient(struct zx_ff12_RegisterNameIdentifierResponse_s* x);
struct zx_str* zx_ff12_RegisterNameIdentifierResponse_GET_ResponseID(struct zx_ff12_RegisterNameIdentifierResponse_s* x);

struct zx_ds_Signature_s* zx_ff12_RegisterNameIdentifierResponse_GET_Signature(struct zx_ff12_RegisterNameIdentifierResponse_s* x, int n);
struct zx_ff12_Extension_s* zx_ff12_RegisterNameIdentifierResponse_GET_Extension(struct zx_ff12_RegisterNameIdentifierResponse_s* x, int n);
struct zx_elem_s* zx_ff12_RegisterNameIdentifierResponse_GET_ProviderID(struct zx_ff12_RegisterNameIdentifierResponse_s* x, int n);
struct zx_sp11_Status_s* zx_ff12_RegisterNameIdentifierResponse_GET_Status(struct zx_ff12_RegisterNameIdentifierResponse_s* x, int n);
struct zx_elem_s* zx_ff12_RegisterNameIdentifierResponse_GET_RelayState(struct zx_ff12_RegisterNameIdentifierResponse_s* x, int n);

int zx_ff12_RegisterNameIdentifierResponse_NUM_Signature(struct zx_ff12_RegisterNameIdentifierResponse_s* x);
int zx_ff12_RegisterNameIdentifierResponse_NUM_Extension(struct zx_ff12_RegisterNameIdentifierResponse_s* x);
int zx_ff12_RegisterNameIdentifierResponse_NUM_ProviderID(struct zx_ff12_RegisterNameIdentifierResponse_s* x);
int zx_ff12_RegisterNameIdentifierResponse_NUM_Status(struct zx_ff12_RegisterNameIdentifierResponse_s* x);
int zx_ff12_RegisterNameIdentifierResponse_NUM_RelayState(struct zx_ff12_RegisterNameIdentifierResponse_s* x);

struct zx_ds_Signature_s* zx_ff12_RegisterNameIdentifierResponse_POP_Signature(struct zx_ff12_RegisterNameIdentifierResponse_s* x);
struct zx_ff12_Extension_s* zx_ff12_RegisterNameIdentifierResponse_POP_Extension(struct zx_ff12_RegisterNameIdentifierResponse_s* x);
struct zx_elem_s* zx_ff12_RegisterNameIdentifierResponse_POP_ProviderID(struct zx_ff12_RegisterNameIdentifierResponse_s* x);
struct zx_sp11_Status_s* zx_ff12_RegisterNameIdentifierResponse_POP_Status(struct zx_ff12_RegisterNameIdentifierResponse_s* x);
struct zx_elem_s* zx_ff12_RegisterNameIdentifierResponse_POP_RelayState(struct zx_ff12_RegisterNameIdentifierResponse_s* x);

void zx_ff12_RegisterNameIdentifierResponse_PUSH_Signature(struct zx_ff12_RegisterNameIdentifierResponse_s* x, struct zx_ds_Signature_s* y);
void zx_ff12_RegisterNameIdentifierResponse_PUSH_Extension(struct zx_ff12_RegisterNameIdentifierResponse_s* x, struct zx_ff12_Extension_s* y);
void zx_ff12_RegisterNameIdentifierResponse_PUSH_ProviderID(struct zx_ff12_RegisterNameIdentifierResponse_s* x, struct zx_elem_s* y);
void zx_ff12_RegisterNameIdentifierResponse_PUSH_Status(struct zx_ff12_RegisterNameIdentifierResponse_s* x, struct zx_sp11_Status_s* y);
void zx_ff12_RegisterNameIdentifierResponse_PUSH_RelayState(struct zx_ff12_RegisterNameIdentifierResponse_s* x, struct zx_elem_s* y);

void zx_ff12_RegisterNameIdentifierResponse_PUT_InResponseTo(struct zx_ff12_RegisterNameIdentifierResponse_s* x, struct zx_str* y);
void zx_ff12_RegisterNameIdentifierResponse_PUT_IssueInstant(struct zx_ff12_RegisterNameIdentifierResponse_s* x, struct zx_str* y);
void zx_ff12_RegisterNameIdentifierResponse_PUT_MajorVersion(struct zx_ff12_RegisterNameIdentifierResponse_s* x, struct zx_str* y);
void zx_ff12_RegisterNameIdentifierResponse_PUT_MinorVersion(struct zx_ff12_RegisterNameIdentifierResponse_s* x, struct zx_str* y);
void zx_ff12_RegisterNameIdentifierResponse_PUT_Recipient(struct zx_ff12_RegisterNameIdentifierResponse_s* x, struct zx_str* y);
void zx_ff12_RegisterNameIdentifierResponse_PUT_ResponseID(struct zx_ff12_RegisterNameIdentifierResponse_s* x, struct zx_str* y);

void zx_ff12_RegisterNameIdentifierResponse_PUT_Signature(struct zx_ff12_RegisterNameIdentifierResponse_s* x, int n, struct zx_ds_Signature_s* y);
void zx_ff12_RegisterNameIdentifierResponse_PUT_Extension(struct zx_ff12_RegisterNameIdentifierResponse_s* x, int n, struct zx_ff12_Extension_s* y);
void zx_ff12_RegisterNameIdentifierResponse_PUT_ProviderID(struct zx_ff12_RegisterNameIdentifierResponse_s* x, int n, struct zx_elem_s* y);
void zx_ff12_RegisterNameIdentifierResponse_PUT_Status(struct zx_ff12_RegisterNameIdentifierResponse_s* x, int n, struct zx_sp11_Status_s* y);
void zx_ff12_RegisterNameIdentifierResponse_PUT_RelayState(struct zx_ff12_RegisterNameIdentifierResponse_s* x, int n, struct zx_elem_s* y);

void zx_ff12_RegisterNameIdentifierResponse_ADD_Signature(struct zx_ff12_RegisterNameIdentifierResponse_s* x, int n, struct zx_ds_Signature_s* z);
void zx_ff12_RegisterNameIdentifierResponse_ADD_Extension(struct zx_ff12_RegisterNameIdentifierResponse_s* x, int n, struct zx_ff12_Extension_s* z);
void zx_ff12_RegisterNameIdentifierResponse_ADD_ProviderID(struct zx_ff12_RegisterNameIdentifierResponse_s* x, int n, struct zx_elem_s* z);
void zx_ff12_RegisterNameIdentifierResponse_ADD_Status(struct zx_ff12_RegisterNameIdentifierResponse_s* x, int n, struct zx_sp11_Status_s* z);
void zx_ff12_RegisterNameIdentifierResponse_ADD_RelayState(struct zx_ff12_RegisterNameIdentifierResponse_s* x, int n, struct zx_elem_s* z);

void zx_ff12_RegisterNameIdentifierResponse_DEL_Signature(struct zx_ff12_RegisterNameIdentifierResponse_s* x, int n);
void zx_ff12_RegisterNameIdentifierResponse_DEL_Extension(struct zx_ff12_RegisterNameIdentifierResponse_s* x, int n);
void zx_ff12_RegisterNameIdentifierResponse_DEL_ProviderID(struct zx_ff12_RegisterNameIdentifierResponse_s* x, int n);
void zx_ff12_RegisterNameIdentifierResponse_DEL_Status(struct zx_ff12_RegisterNameIdentifierResponse_s* x, int n);
void zx_ff12_RegisterNameIdentifierResponse_DEL_RelayState(struct zx_ff12_RegisterNameIdentifierResponse_s* x, int n);

void zx_ff12_RegisterNameIdentifierResponse_REV_Signature(struct zx_ff12_RegisterNameIdentifierResponse_s* x);
void zx_ff12_RegisterNameIdentifierResponse_REV_Extension(struct zx_ff12_RegisterNameIdentifierResponse_s* x);
void zx_ff12_RegisterNameIdentifierResponse_REV_ProviderID(struct zx_ff12_RegisterNameIdentifierResponse_s* x);
void zx_ff12_RegisterNameIdentifierResponse_REV_Status(struct zx_ff12_RegisterNameIdentifierResponse_s* x);
void zx_ff12_RegisterNameIdentifierResponse_REV_RelayState(struct zx_ff12_RegisterNameIdentifierResponse_s* x);

#endif
/* -------------------------- ff12_RequestAuthnContext -------------------------- */
/* refby( zx_sec12_SessionContext_s zx_ff12_AuthnRequest_s ) */
#ifndef zx_ff12_RequestAuthnContext_EXT
#define zx_ff12_RequestAuthnContext_EXT
#endif

struct zx_ff12_RequestAuthnContext_s* zx_DEC_ff12_RequestAuthnContext(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_ff12_RequestAuthnContext_s* zx_NEW_ff12_RequestAuthnContext(struct zx_ctx* c);
void zx_FREE_ff12_RequestAuthnContext(struct zx_ctx* c, struct zx_ff12_RequestAuthnContext_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_ff12_RequestAuthnContext_s* zx_DEEP_CLONE_ff12_RequestAuthnContext(struct zx_ctx* c, struct zx_ff12_RequestAuthnContext_s* x, int dup_strs);
void zx_DUP_STRS_ff12_RequestAuthnContext(struct zx_ctx* c, struct zx_ff12_RequestAuthnContext_s* x);
int zx_WALK_SO_ff12_RequestAuthnContext(struct zx_ctx* c, struct zx_ff12_RequestAuthnContext_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_ff12_RequestAuthnContext(struct zx_ctx* c, struct zx_ff12_RequestAuthnContext_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_ff12_RequestAuthnContext(struct zx_ctx* c, struct zx_ff12_RequestAuthnContext_s* x);
int zx_LEN_WO_ff12_RequestAuthnContext(struct zx_ctx* c, struct zx_ff12_RequestAuthnContext_s* x);
char* zx_ENC_SO_ff12_RequestAuthnContext(struct zx_ctx* c, struct zx_ff12_RequestAuthnContext_s* x, char* p);
char* zx_ENC_WO_ff12_RequestAuthnContext(struct zx_ctx* c, struct zx_ff12_RequestAuthnContext_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_ff12_RequestAuthnContext(struct zx_ctx* c, struct zx_ff12_RequestAuthnContext_s* x);
struct zx_str* zx_EASY_ENC_WO_ff12_RequestAuthnContext(struct zx_ctx* c, struct zx_ff12_RequestAuthnContext_s* x);

struct zx_ff12_RequestAuthnContext_s {
  ZX_ELEM_EXT
  zx_ff12_RequestAuthnContext_EXT
  struct zx_elem_s* AuthnContextClassRef;	/* {1,-1} xs:anyURI */
  struct zx_elem_s* AuthnContextStatementRef;	/* {1,-1} xs:anyURI */
  struct zx_elem_s* AuthnContextComparison;	/* {0,1} exact */
};

#ifdef ZX_ENA_GETPUT

struct zx_elem_s* zx_ff12_RequestAuthnContext_GET_AuthnContextClassRef(struct zx_ff12_RequestAuthnContext_s* x, int n);
struct zx_elem_s* zx_ff12_RequestAuthnContext_GET_AuthnContextStatementRef(struct zx_ff12_RequestAuthnContext_s* x, int n);
struct zx_elem_s* zx_ff12_RequestAuthnContext_GET_AuthnContextComparison(struct zx_ff12_RequestAuthnContext_s* x, int n);

int zx_ff12_RequestAuthnContext_NUM_AuthnContextClassRef(struct zx_ff12_RequestAuthnContext_s* x);
int zx_ff12_RequestAuthnContext_NUM_AuthnContextStatementRef(struct zx_ff12_RequestAuthnContext_s* x);
int zx_ff12_RequestAuthnContext_NUM_AuthnContextComparison(struct zx_ff12_RequestAuthnContext_s* x);

struct zx_elem_s* zx_ff12_RequestAuthnContext_POP_AuthnContextClassRef(struct zx_ff12_RequestAuthnContext_s* x);
struct zx_elem_s* zx_ff12_RequestAuthnContext_POP_AuthnContextStatementRef(struct zx_ff12_RequestAuthnContext_s* x);
struct zx_elem_s* zx_ff12_RequestAuthnContext_POP_AuthnContextComparison(struct zx_ff12_RequestAuthnContext_s* x);

void zx_ff12_RequestAuthnContext_PUSH_AuthnContextClassRef(struct zx_ff12_RequestAuthnContext_s* x, struct zx_elem_s* y);
void zx_ff12_RequestAuthnContext_PUSH_AuthnContextStatementRef(struct zx_ff12_RequestAuthnContext_s* x, struct zx_elem_s* y);
void zx_ff12_RequestAuthnContext_PUSH_AuthnContextComparison(struct zx_ff12_RequestAuthnContext_s* x, struct zx_elem_s* y);


void zx_ff12_RequestAuthnContext_PUT_AuthnContextClassRef(struct zx_ff12_RequestAuthnContext_s* x, int n, struct zx_elem_s* y);
void zx_ff12_RequestAuthnContext_PUT_AuthnContextStatementRef(struct zx_ff12_RequestAuthnContext_s* x, int n, struct zx_elem_s* y);
void zx_ff12_RequestAuthnContext_PUT_AuthnContextComparison(struct zx_ff12_RequestAuthnContext_s* x, int n, struct zx_elem_s* y);

void zx_ff12_RequestAuthnContext_ADD_AuthnContextClassRef(struct zx_ff12_RequestAuthnContext_s* x, int n, struct zx_elem_s* z);
void zx_ff12_RequestAuthnContext_ADD_AuthnContextStatementRef(struct zx_ff12_RequestAuthnContext_s* x, int n, struct zx_elem_s* z);
void zx_ff12_RequestAuthnContext_ADD_AuthnContextComparison(struct zx_ff12_RequestAuthnContext_s* x, int n, struct zx_elem_s* z);

void zx_ff12_RequestAuthnContext_DEL_AuthnContextClassRef(struct zx_ff12_RequestAuthnContext_s* x, int n);
void zx_ff12_RequestAuthnContext_DEL_AuthnContextStatementRef(struct zx_ff12_RequestAuthnContext_s* x, int n);
void zx_ff12_RequestAuthnContext_DEL_AuthnContextComparison(struct zx_ff12_RequestAuthnContext_s* x, int n);

void zx_ff12_RequestAuthnContext_REV_AuthnContextClassRef(struct zx_ff12_RequestAuthnContext_s* x);
void zx_ff12_RequestAuthnContext_REV_AuthnContextStatementRef(struct zx_ff12_RequestAuthnContext_s* x);
void zx_ff12_RequestAuthnContext_REV_AuthnContextComparison(struct zx_ff12_RequestAuthnContext_s* x);

#endif
/* -------------------------- ff12_SPProvidedNameIdentifier -------------------------- */
/* refby( zx_ff12_RegisterNameIdentifierRequest_s ) */
#ifndef zx_ff12_SPProvidedNameIdentifier_EXT
#define zx_ff12_SPProvidedNameIdentifier_EXT
#endif

struct zx_ff12_SPProvidedNameIdentifier_s* zx_DEC_ff12_SPProvidedNameIdentifier(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_ff12_SPProvidedNameIdentifier_s* zx_NEW_ff12_SPProvidedNameIdentifier(struct zx_ctx* c);
void zx_FREE_ff12_SPProvidedNameIdentifier(struct zx_ctx* c, struct zx_ff12_SPProvidedNameIdentifier_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_ff12_SPProvidedNameIdentifier_s* zx_DEEP_CLONE_ff12_SPProvidedNameIdentifier(struct zx_ctx* c, struct zx_ff12_SPProvidedNameIdentifier_s* x, int dup_strs);
void zx_DUP_STRS_ff12_SPProvidedNameIdentifier(struct zx_ctx* c, struct zx_ff12_SPProvidedNameIdentifier_s* x);
int zx_WALK_SO_ff12_SPProvidedNameIdentifier(struct zx_ctx* c, struct zx_ff12_SPProvidedNameIdentifier_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_ff12_SPProvidedNameIdentifier(struct zx_ctx* c, struct zx_ff12_SPProvidedNameIdentifier_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_ff12_SPProvidedNameIdentifier(struct zx_ctx* c, struct zx_ff12_SPProvidedNameIdentifier_s* x);
int zx_LEN_WO_ff12_SPProvidedNameIdentifier(struct zx_ctx* c, struct zx_ff12_SPProvidedNameIdentifier_s* x);
char* zx_ENC_SO_ff12_SPProvidedNameIdentifier(struct zx_ctx* c, struct zx_ff12_SPProvidedNameIdentifier_s* x, char* p);
char* zx_ENC_WO_ff12_SPProvidedNameIdentifier(struct zx_ctx* c, struct zx_ff12_SPProvidedNameIdentifier_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_ff12_SPProvidedNameIdentifier(struct zx_ctx* c, struct zx_ff12_SPProvidedNameIdentifier_s* x);
struct zx_str* zx_EASY_ENC_WO_ff12_SPProvidedNameIdentifier(struct zx_ctx* c, struct zx_ff12_SPProvidedNameIdentifier_s* x);

struct zx_ff12_SPProvidedNameIdentifier_s {
  ZX_ELEM_EXT
  zx_ff12_SPProvidedNameIdentifier_EXT
  struct zx_str* Format;	/* {0,1} attribute xs:anyURI */
  struct zx_str* NameQualifier;	/* {0,1} attribute xs:string */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_ff12_SPProvidedNameIdentifier_GET_Format(struct zx_ff12_SPProvidedNameIdentifier_s* x);
struct zx_str* zx_ff12_SPProvidedNameIdentifier_GET_NameQualifier(struct zx_ff12_SPProvidedNameIdentifier_s* x);





void zx_ff12_SPProvidedNameIdentifier_PUT_Format(struct zx_ff12_SPProvidedNameIdentifier_s* x, struct zx_str* y);
void zx_ff12_SPProvidedNameIdentifier_PUT_NameQualifier(struct zx_ff12_SPProvidedNameIdentifier_s* x, struct zx_str* y);





#endif
/* -------------------------- ff12_Scoping -------------------------- */
/* refby( zx_ff12_AuthnRequest_s ) */
#ifndef zx_ff12_Scoping_EXT
#define zx_ff12_Scoping_EXT
#endif

struct zx_ff12_Scoping_s* zx_DEC_ff12_Scoping(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_ff12_Scoping_s* zx_NEW_ff12_Scoping(struct zx_ctx* c);
void zx_FREE_ff12_Scoping(struct zx_ctx* c, struct zx_ff12_Scoping_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_ff12_Scoping_s* zx_DEEP_CLONE_ff12_Scoping(struct zx_ctx* c, struct zx_ff12_Scoping_s* x, int dup_strs);
void zx_DUP_STRS_ff12_Scoping(struct zx_ctx* c, struct zx_ff12_Scoping_s* x);
int zx_WALK_SO_ff12_Scoping(struct zx_ctx* c, struct zx_ff12_Scoping_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_ff12_Scoping(struct zx_ctx* c, struct zx_ff12_Scoping_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_ff12_Scoping(struct zx_ctx* c, struct zx_ff12_Scoping_s* x);
int zx_LEN_WO_ff12_Scoping(struct zx_ctx* c, struct zx_ff12_Scoping_s* x);
char* zx_ENC_SO_ff12_Scoping(struct zx_ctx* c, struct zx_ff12_Scoping_s* x, char* p);
char* zx_ENC_WO_ff12_Scoping(struct zx_ctx* c, struct zx_ff12_Scoping_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_ff12_Scoping(struct zx_ctx* c, struct zx_ff12_Scoping_s* x);
struct zx_str* zx_EASY_ENC_WO_ff12_Scoping(struct zx_ctx* c, struct zx_ff12_Scoping_s* x);

struct zx_ff12_Scoping_s {
  ZX_ELEM_EXT
  zx_ff12_Scoping_EXT
  struct zx_elem_s* ProxyCount;	/* {0,1} xs:nonNegativeInteger */
  struct zx_ff12_IDPList_s* IDPList;	/* {0,1} nada */
};

#ifdef ZX_ENA_GETPUT

struct zx_elem_s* zx_ff12_Scoping_GET_ProxyCount(struct zx_ff12_Scoping_s* x, int n);
struct zx_ff12_IDPList_s* zx_ff12_Scoping_GET_IDPList(struct zx_ff12_Scoping_s* x, int n);

int zx_ff12_Scoping_NUM_ProxyCount(struct zx_ff12_Scoping_s* x);
int zx_ff12_Scoping_NUM_IDPList(struct zx_ff12_Scoping_s* x);

struct zx_elem_s* zx_ff12_Scoping_POP_ProxyCount(struct zx_ff12_Scoping_s* x);
struct zx_ff12_IDPList_s* zx_ff12_Scoping_POP_IDPList(struct zx_ff12_Scoping_s* x);

void zx_ff12_Scoping_PUSH_ProxyCount(struct zx_ff12_Scoping_s* x, struct zx_elem_s* y);
void zx_ff12_Scoping_PUSH_IDPList(struct zx_ff12_Scoping_s* x, struct zx_ff12_IDPList_s* y);


void zx_ff12_Scoping_PUT_ProxyCount(struct zx_ff12_Scoping_s* x, int n, struct zx_elem_s* y);
void zx_ff12_Scoping_PUT_IDPList(struct zx_ff12_Scoping_s* x, int n, struct zx_ff12_IDPList_s* y);

void zx_ff12_Scoping_ADD_ProxyCount(struct zx_ff12_Scoping_s* x, int n, struct zx_elem_s* z);
void zx_ff12_Scoping_ADD_IDPList(struct zx_ff12_Scoping_s* x, int n, struct zx_ff12_IDPList_s* z);

void zx_ff12_Scoping_DEL_ProxyCount(struct zx_ff12_Scoping_s* x, int n);
void zx_ff12_Scoping_DEL_IDPList(struct zx_ff12_Scoping_s* x, int n);

void zx_ff12_Scoping_REV_ProxyCount(struct zx_ff12_Scoping_s* x);
void zx_ff12_Scoping_REV_IDPList(struct zx_ff12_Scoping_s* x);

#endif
/* -------------------------- ff12_Subject -------------------------- */
/* refby( ) */
#ifndef zx_ff12_Subject_EXT
#define zx_ff12_Subject_EXT
#endif

struct zx_ff12_Subject_s* zx_DEC_ff12_Subject(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_ff12_Subject_s* zx_NEW_ff12_Subject(struct zx_ctx* c);
void zx_FREE_ff12_Subject(struct zx_ctx* c, struct zx_ff12_Subject_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_ff12_Subject_s* zx_DEEP_CLONE_ff12_Subject(struct zx_ctx* c, struct zx_ff12_Subject_s* x, int dup_strs);
void zx_DUP_STRS_ff12_Subject(struct zx_ctx* c, struct zx_ff12_Subject_s* x);
int zx_WALK_SO_ff12_Subject(struct zx_ctx* c, struct zx_ff12_Subject_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_ff12_Subject(struct zx_ctx* c, struct zx_ff12_Subject_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_ff12_Subject(struct zx_ctx* c, struct zx_ff12_Subject_s* x);
int zx_LEN_WO_ff12_Subject(struct zx_ctx* c, struct zx_ff12_Subject_s* x);
char* zx_ENC_SO_ff12_Subject(struct zx_ctx* c, struct zx_ff12_Subject_s* x, char* p);
char* zx_ENC_WO_ff12_Subject(struct zx_ctx* c, struct zx_ff12_Subject_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_ff12_Subject(struct zx_ctx* c, struct zx_ff12_Subject_s* x);
struct zx_str* zx_EASY_ENC_WO_ff12_Subject(struct zx_ctx* c, struct zx_ff12_Subject_s* x);

struct zx_ff12_Subject_s {
  ZX_ELEM_EXT
  zx_ff12_Subject_EXT
  struct zx_sa11_NameIdentifier_s* NameIdentifier;	/* {0,1} nada */
  struct zx_sa11_SubjectConfirmation_s* SubjectConfirmation;	/* {0,1} nada */
  struct zx_ff12_IDPProvidedNameIdentifier_s* IDPProvidedNameIdentifier;	/* {0,1} nada */
};

#ifdef ZX_ENA_GETPUT

struct zx_sa11_NameIdentifier_s* zx_ff12_Subject_GET_NameIdentifier(struct zx_ff12_Subject_s* x, int n);
struct zx_sa11_SubjectConfirmation_s* zx_ff12_Subject_GET_SubjectConfirmation(struct zx_ff12_Subject_s* x, int n);
struct zx_ff12_IDPProvidedNameIdentifier_s* zx_ff12_Subject_GET_IDPProvidedNameIdentifier(struct zx_ff12_Subject_s* x, int n);

int zx_ff12_Subject_NUM_NameIdentifier(struct zx_ff12_Subject_s* x);
int zx_ff12_Subject_NUM_SubjectConfirmation(struct zx_ff12_Subject_s* x);
int zx_ff12_Subject_NUM_IDPProvidedNameIdentifier(struct zx_ff12_Subject_s* x);

struct zx_sa11_NameIdentifier_s* zx_ff12_Subject_POP_NameIdentifier(struct zx_ff12_Subject_s* x);
struct zx_sa11_SubjectConfirmation_s* zx_ff12_Subject_POP_SubjectConfirmation(struct zx_ff12_Subject_s* x);
struct zx_ff12_IDPProvidedNameIdentifier_s* zx_ff12_Subject_POP_IDPProvidedNameIdentifier(struct zx_ff12_Subject_s* x);

void zx_ff12_Subject_PUSH_NameIdentifier(struct zx_ff12_Subject_s* x, struct zx_sa11_NameIdentifier_s* y);
void zx_ff12_Subject_PUSH_SubjectConfirmation(struct zx_ff12_Subject_s* x, struct zx_sa11_SubjectConfirmation_s* y);
void zx_ff12_Subject_PUSH_IDPProvidedNameIdentifier(struct zx_ff12_Subject_s* x, struct zx_ff12_IDPProvidedNameIdentifier_s* y);


void zx_ff12_Subject_PUT_NameIdentifier(struct zx_ff12_Subject_s* x, int n, struct zx_sa11_NameIdentifier_s* y);
void zx_ff12_Subject_PUT_SubjectConfirmation(struct zx_ff12_Subject_s* x, int n, struct zx_sa11_SubjectConfirmation_s* y);
void zx_ff12_Subject_PUT_IDPProvidedNameIdentifier(struct zx_ff12_Subject_s* x, int n, struct zx_ff12_IDPProvidedNameIdentifier_s* y);

void zx_ff12_Subject_ADD_NameIdentifier(struct zx_ff12_Subject_s* x, int n, struct zx_sa11_NameIdentifier_s* z);
void zx_ff12_Subject_ADD_SubjectConfirmation(struct zx_ff12_Subject_s* x, int n, struct zx_sa11_SubjectConfirmation_s* z);
void zx_ff12_Subject_ADD_IDPProvidedNameIdentifier(struct zx_ff12_Subject_s* x, int n, struct zx_ff12_IDPProvidedNameIdentifier_s* z);

void zx_ff12_Subject_DEL_NameIdentifier(struct zx_ff12_Subject_s* x, int n);
void zx_ff12_Subject_DEL_SubjectConfirmation(struct zx_ff12_Subject_s* x, int n);
void zx_ff12_Subject_DEL_IDPProvidedNameIdentifier(struct zx_ff12_Subject_s* x, int n);

void zx_ff12_Subject_REV_NameIdentifier(struct zx_ff12_Subject_s* x);
void zx_ff12_Subject_REV_SubjectConfirmation(struct zx_ff12_Subject_s* x);
void zx_ff12_Subject_REV_IDPProvidedNameIdentifier(struct zx_ff12_Subject_s* x);

#endif

#endif
