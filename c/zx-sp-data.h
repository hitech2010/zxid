/* c/zx-sp-data.h - WARNING: This header was automatically generated. DO NOT EDIT!
 * $Id$ */
/* Datastructure design, topography, and layout
 * Copyright (c) 2006 Sampo Kellomaki (sampo@iki.fi),
 * All Rights Reserved. NO WARRANTY. See file COPYING for
 * terms and conditions of use. Element and attributes names as well
 * as some topography are derived from schema descriptions that were used as
 * input and may be subject to their own copright. */

#ifndef _c_zx_sp_data_h
#define _c_zx_sp_data_h

#include "zx.h"
#include "c/zx-const.h"
#include "c/zx-data.h"

#ifndef ZX_ELEM_EXT
#define ZX_ELEM_EXT  /* This extension point should be defined by who includes this file. */
#endif

/* -------------------------- sp_ArtifactResolve -------------------------- */
/* refby( zx_e_Body_s ) */
#ifndef zx_sp_ArtifactResolve_EXT
#define zx_sp_ArtifactResolve_EXT
#endif

struct zx_sp_ArtifactResolve_s* zx_DEC_sp_ArtifactResolve(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_sp_ArtifactResolve_s* zx_NEW_sp_ArtifactResolve(struct zx_ctx* c);
void zx_FREE_sp_ArtifactResolve(struct zx_ctx* c, struct zx_sp_ArtifactResolve_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_sp_ArtifactResolve_s* zx_DEEP_CLONE_sp_ArtifactResolve(struct zx_ctx* c, struct zx_sp_ArtifactResolve_s* x, int dup_strs);
void zx_DUP_STRS_sp_ArtifactResolve(struct zx_ctx* c, struct zx_sp_ArtifactResolve_s* x);
int zx_WALK_SO_sp_ArtifactResolve(struct zx_ctx* c, struct zx_sp_ArtifactResolve_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_sp_ArtifactResolve(struct zx_ctx* c, struct zx_sp_ArtifactResolve_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_sp_ArtifactResolve(struct zx_ctx* c, struct zx_sp_ArtifactResolve_s* x);
int zx_LEN_WO_sp_ArtifactResolve(struct zx_ctx* c, struct zx_sp_ArtifactResolve_s* x);
char* zx_ENC_SO_sp_ArtifactResolve(struct zx_ctx* c, struct zx_sp_ArtifactResolve_s* x, char* p);
char* zx_ENC_WO_sp_ArtifactResolve(struct zx_ctx* c, struct zx_sp_ArtifactResolve_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_sp_ArtifactResolve(struct zx_ctx* c, struct zx_sp_ArtifactResolve_s* x);
struct zx_str* zx_EASY_ENC_WO_sp_ArtifactResolve(struct zx_ctx* c, struct zx_sp_ArtifactResolve_s* x);

struct zx_sp_ArtifactResolve_s {
  ZX_ELEM_EXT
  zx_sp_ArtifactResolve_EXT
  struct zx_sa_Issuer_s* Issuer;	/* {0,1} nada */
  struct zx_ds_Signature_s* Signature;	/* {0,1} nada */
  struct zx_sp_Extensions_s* Extensions;	/* {0,1}  */
  struct zx_elem_s* Artifact;	/* {1,1} xs:string */
  struct zx_str* Consent;	/* {0,1} attribute xs:anyURI */
  struct zx_str* Destination;	/* {0,1} attribute xs:anyURI */
  struct zx_str* ID;	/* {1,1} attribute xs:anyURI */
  struct zx_str* IssueInstant;	/* {1,1} attribute xs:dateTime */
  struct zx_str* Version;	/* {1,1} attribute xa:VersionType */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_sp_ArtifactResolve_GET_Consent(struct zx_sp_ArtifactResolve_s* x);
struct zx_str* zx_sp_ArtifactResolve_GET_Destination(struct zx_sp_ArtifactResolve_s* x);
struct zx_str* zx_sp_ArtifactResolve_GET_ID(struct zx_sp_ArtifactResolve_s* x);
struct zx_str* zx_sp_ArtifactResolve_GET_IssueInstant(struct zx_sp_ArtifactResolve_s* x);
struct zx_str* zx_sp_ArtifactResolve_GET_Version(struct zx_sp_ArtifactResolve_s* x);

struct zx_sa_Issuer_s* zx_sp_ArtifactResolve_GET_Issuer(struct zx_sp_ArtifactResolve_s* x, int n);
struct zx_ds_Signature_s* zx_sp_ArtifactResolve_GET_Signature(struct zx_sp_ArtifactResolve_s* x, int n);
struct zx_sp_Extensions_s* zx_sp_ArtifactResolve_GET_Extensions(struct zx_sp_ArtifactResolve_s* x, int n);
struct zx_elem_s* zx_sp_ArtifactResolve_GET_Artifact(struct zx_sp_ArtifactResolve_s* x, int n);

int zx_sp_ArtifactResolve_NUM_Issuer(struct zx_sp_ArtifactResolve_s* x);
int zx_sp_ArtifactResolve_NUM_Signature(struct zx_sp_ArtifactResolve_s* x);
int zx_sp_ArtifactResolve_NUM_Extensions(struct zx_sp_ArtifactResolve_s* x);
int zx_sp_ArtifactResolve_NUM_Artifact(struct zx_sp_ArtifactResolve_s* x);

struct zx_sa_Issuer_s* zx_sp_ArtifactResolve_POP_Issuer(struct zx_sp_ArtifactResolve_s* x);
struct zx_ds_Signature_s* zx_sp_ArtifactResolve_POP_Signature(struct zx_sp_ArtifactResolve_s* x);
struct zx_sp_Extensions_s* zx_sp_ArtifactResolve_POP_Extensions(struct zx_sp_ArtifactResolve_s* x);
struct zx_elem_s* zx_sp_ArtifactResolve_POP_Artifact(struct zx_sp_ArtifactResolve_s* x);

void zx_sp_ArtifactResolve_PUSH_Issuer(struct zx_sp_ArtifactResolve_s* x, struct zx_sa_Issuer_s* y);
void zx_sp_ArtifactResolve_PUSH_Signature(struct zx_sp_ArtifactResolve_s* x, struct zx_ds_Signature_s* y);
void zx_sp_ArtifactResolve_PUSH_Extensions(struct zx_sp_ArtifactResolve_s* x, struct zx_sp_Extensions_s* y);
void zx_sp_ArtifactResolve_PUSH_Artifact(struct zx_sp_ArtifactResolve_s* x, struct zx_elem_s* y);

void zx_sp_ArtifactResolve_PUT_Consent(struct zx_sp_ArtifactResolve_s* x, struct zx_str* y);
void zx_sp_ArtifactResolve_PUT_Destination(struct zx_sp_ArtifactResolve_s* x, struct zx_str* y);
void zx_sp_ArtifactResolve_PUT_ID(struct zx_sp_ArtifactResolve_s* x, struct zx_str* y);
void zx_sp_ArtifactResolve_PUT_IssueInstant(struct zx_sp_ArtifactResolve_s* x, struct zx_str* y);
void zx_sp_ArtifactResolve_PUT_Version(struct zx_sp_ArtifactResolve_s* x, struct zx_str* y);

void zx_sp_ArtifactResolve_PUT_Issuer(struct zx_sp_ArtifactResolve_s* x, int n, struct zx_sa_Issuer_s* y);
void zx_sp_ArtifactResolve_PUT_Signature(struct zx_sp_ArtifactResolve_s* x, int n, struct zx_ds_Signature_s* y);
void zx_sp_ArtifactResolve_PUT_Extensions(struct zx_sp_ArtifactResolve_s* x, int n, struct zx_sp_Extensions_s* y);
void zx_sp_ArtifactResolve_PUT_Artifact(struct zx_sp_ArtifactResolve_s* x, int n, struct zx_elem_s* y);

void zx_sp_ArtifactResolve_ADD_Issuer(struct zx_sp_ArtifactResolve_s* x, int n, struct zx_sa_Issuer_s* z);
void zx_sp_ArtifactResolve_ADD_Signature(struct zx_sp_ArtifactResolve_s* x, int n, struct zx_ds_Signature_s* z);
void zx_sp_ArtifactResolve_ADD_Extensions(struct zx_sp_ArtifactResolve_s* x, int n, struct zx_sp_Extensions_s* z);
void zx_sp_ArtifactResolve_ADD_Artifact(struct zx_sp_ArtifactResolve_s* x, int n, struct zx_elem_s* z);

void zx_sp_ArtifactResolve_DEL_Issuer(struct zx_sp_ArtifactResolve_s* x, int n);
void zx_sp_ArtifactResolve_DEL_Signature(struct zx_sp_ArtifactResolve_s* x, int n);
void zx_sp_ArtifactResolve_DEL_Extensions(struct zx_sp_ArtifactResolve_s* x, int n);
void zx_sp_ArtifactResolve_DEL_Artifact(struct zx_sp_ArtifactResolve_s* x, int n);

void zx_sp_ArtifactResolve_REV_Issuer(struct zx_sp_ArtifactResolve_s* x);
void zx_sp_ArtifactResolve_REV_Signature(struct zx_sp_ArtifactResolve_s* x);
void zx_sp_ArtifactResolve_REV_Extensions(struct zx_sp_ArtifactResolve_s* x);
void zx_sp_ArtifactResolve_REV_Artifact(struct zx_sp_ArtifactResolve_s* x);

#endif
/* -------------------------- sp_ArtifactResponse -------------------------- */
/* refby( zx_e_Body_s ) */
#ifndef zx_sp_ArtifactResponse_EXT
#define zx_sp_ArtifactResponse_EXT
#endif

struct zx_sp_ArtifactResponse_s* zx_DEC_sp_ArtifactResponse(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_sp_ArtifactResponse_s* zx_NEW_sp_ArtifactResponse(struct zx_ctx* c);
void zx_FREE_sp_ArtifactResponse(struct zx_ctx* c, struct zx_sp_ArtifactResponse_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_sp_ArtifactResponse_s* zx_DEEP_CLONE_sp_ArtifactResponse(struct zx_ctx* c, struct zx_sp_ArtifactResponse_s* x, int dup_strs);
void zx_DUP_STRS_sp_ArtifactResponse(struct zx_ctx* c, struct zx_sp_ArtifactResponse_s* x);
int zx_WALK_SO_sp_ArtifactResponse(struct zx_ctx* c, struct zx_sp_ArtifactResponse_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_sp_ArtifactResponse(struct zx_ctx* c, struct zx_sp_ArtifactResponse_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_sp_ArtifactResponse(struct zx_ctx* c, struct zx_sp_ArtifactResponse_s* x);
int zx_LEN_WO_sp_ArtifactResponse(struct zx_ctx* c, struct zx_sp_ArtifactResponse_s* x);
char* zx_ENC_SO_sp_ArtifactResponse(struct zx_ctx* c, struct zx_sp_ArtifactResponse_s* x, char* p);
char* zx_ENC_WO_sp_ArtifactResponse(struct zx_ctx* c, struct zx_sp_ArtifactResponse_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_sp_ArtifactResponse(struct zx_ctx* c, struct zx_sp_ArtifactResponse_s* x);
struct zx_str* zx_EASY_ENC_WO_sp_ArtifactResponse(struct zx_ctx* c, struct zx_sp_ArtifactResponse_s* x);

struct zx_sp_ArtifactResponse_s {
  ZX_ELEM_EXT
  zx_sp_ArtifactResponse_EXT
  struct zx_sa_Issuer_s* Issuer;	/* {0,1} nada */
  struct zx_ds_Signature_s* Signature;	/* {0,1} nada */
  struct zx_sp_Extensions_s* Extensions;	/* {0,1}  */
  struct zx_sp_Status_s* Status;	/* {1,1} nada */
  struct zx_sp_Response_s* Response;	/* {0,1} nada */
  struct zx_str* Consent;	/* {0,1} attribute xs:anyURI */
  struct zx_str* Destination;	/* {0,1} attribute xs:anyURI */
  struct zx_str* ID;	/* {1,1} attribute xs:anyURI */
  struct zx_str* InResponseTo;	/* {0,1} attribute xs:NCName */
  struct zx_str* IssueInstant;	/* {1,1} attribute xs:dateTime */
  struct zx_str* Version;	/* {1,1} attribute xa:VersionType */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_sp_ArtifactResponse_GET_Consent(struct zx_sp_ArtifactResponse_s* x);
struct zx_str* zx_sp_ArtifactResponse_GET_Destination(struct zx_sp_ArtifactResponse_s* x);
struct zx_str* zx_sp_ArtifactResponse_GET_ID(struct zx_sp_ArtifactResponse_s* x);
struct zx_str* zx_sp_ArtifactResponse_GET_InResponseTo(struct zx_sp_ArtifactResponse_s* x);
struct zx_str* zx_sp_ArtifactResponse_GET_IssueInstant(struct zx_sp_ArtifactResponse_s* x);
struct zx_str* zx_sp_ArtifactResponse_GET_Version(struct zx_sp_ArtifactResponse_s* x);

struct zx_sa_Issuer_s* zx_sp_ArtifactResponse_GET_Issuer(struct zx_sp_ArtifactResponse_s* x, int n);
struct zx_ds_Signature_s* zx_sp_ArtifactResponse_GET_Signature(struct zx_sp_ArtifactResponse_s* x, int n);
struct zx_sp_Extensions_s* zx_sp_ArtifactResponse_GET_Extensions(struct zx_sp_ArtifactResponse_s* x, int n);
struct zx_sp_Status_s* zx_sp_ArtifactResponse_GET_Status(struct zx_sp_ArtifactResponse_s* x, int n);
struct zx_sp_Response_s* zx_sp_ArtifactResponse_GET_Response(struct zx_sp_ArtifactResponse_s* x, int n);

int zx_sp_ArtifactResponse_NUM_Issuer(struct zx_sp_ArtifactResponse_s* x);
int zx_sp_ArtifactResponse_NUM_Signature(struct zx_sp_ArtifactResponse_s* x);
int zx_sp_ArtifactResponse_NUM_Extensions(struct zx_sp_ArtifactResponse_s* x);
int zx_sp_ArtifactResponse_NUM_Status(struct zx_sp_ArtifactResponse_s* x);
int zx_sp_ArtifactResponse_NUM_Response(struct zx_sp_ArtifactResponse_s* x);

struct zx_sa_Issuer_s* zx_sp_ArtifactResponse_POP_Issuer(struct zx_sp_ArtifactResponse_s* x);
struct zx_ds_Signature_s* zx_sp_ArtifactResponse_POP_Signature(struct zx_sp_ArtifactResponse_s* x);
struct zx_sp_Extensions_s* zx_sp_ArtifactResponse_POP_Extensions(struct zx_sp_ArtifactResponse_s* x);
struct zx_sp_Status_s* zx_sp_ArtifactResponse_POP_Status(struct zx_sp_ArtifactResponse_s* x);
struct zx_sp_Response_s* zx_sp_ArtifactResponse_POP_Response(struct zx_sp_ArtifactResponse_s* x);

void zx_sp_ArtifactResponse_PUSH_Issuer(struct zx_sp_ArtifactResponse_s* x, struct zx_sa_Issuer_s* y);
void zx_sp_ArtifactResponse_PUSH_Signature(struct zx_sp_ArtifactResponse_s* x, struct zx_ds_Signature_s* y);
void zx_sp_ArtifactResponse_PUSH_Extensions(struct zx_sp_ArtifactResponse_s* x, struct zx_sp_Extensions_s* y);
void zx_sp_ArtifactResponse_PUSH_Status(struct zx_sp_ArtifactResponse_s* x, struct zx_sp_Status_s* y);
void zx_sp_ArtifactResponse_PUSH_Response(struct zx_sp_ArtifactResponse_s* x, struct zx_sp_Response_s* y);

void zx_sp_ArtifactResponse_PUT_Consent(struct zx_sp_ArtifactResponse_s* x, struct zx_str* y);
void zx_sp_ArtifactResponse_PUT_Destination(struct zx_sp_ArtifactResponse_s* x, struct zx_str* y);
void zx_sp_ArtifactResponse_PUT_ID(struct zx_sp_ArtifactResponse_s* x, struct zx_str* y);
void zx_sp_ArtifactResponse_PUT_InResponseTo(struct zx_sp_ArtifactResponse_s* x, struct zx_str* y);
void zx_sp_ArtifactResponse_PUT_IssueInstant(struct zx_sp_ArtifactResponse_s* x, struct zx_str* y);
void zx_sp_ArtifactResponse_PUT_Version(struct zx_sp_ArtifactResponse_s* x, struct zx_str* y);

void zx_sp_ArtifactResponse_PUT_Issuer(struct zx_sp_ArtifactResponse_s* x, int n, struct zx_sa_Issuer_s* y);
void zx_sp_ArtifactResponse_PUT_Signature(struct zx_sp_ArtifactResponse_s* x, int n, struct zx_ds_Signature_s* y);
void zx_sp_ArtifactResponse_PUT_Extensions(struct zx_sp_ArtifactResponse_s* x, int n, struct zx_sp_Extensions_s* y);
void zx_sp_ArtifactResponse_PUT_Status(struct zx_sp_ArtifactResponse_s* x, int n, struct zx_sp_Status_s* y);
void zx_sp_ArtifactResponse_PUT_Response(struct zx_sp_ArtifactResponse_s* x, int n, struct zx_sp_Response_s* y);

void zx_sp_ArtifactResponse_ADD_Issuer(struct zx_sp_ArtifactResponse_s* x, int n, struct zx_sa_Issuer_s* z);
void zx_sp_ArtifactResponse_ADD_Signature(struct zx_sp_ArtifactResponse_s* x, int n, struct zx_ds_Signature_s* z);
void zx_sp_ArtifactResponse_ADD_Extensions(struct zx_sp_ArtifactResponse_s* x, int n, struct zx_sp_Extensions_s* z);
void zx_sp_ArtifactResponse_ADD_Status(struct zx_sp_ArtifactResponse_s* x, int n, struct zx_sp_Status_s* z);
void zx_sp_ArtifactResponse_ADD_Response(struct zx_sp_ArtifactResponse_s* x, int n, struct zx_sp_Response_s* z);

void zx_sp_ArtifactResponse_DEL_Issuer(struct zx_sp_ArtifactResponse_s* x, int n);
void zx_sp_ArtifactResponse_DEL_Signature(struct zx_sp_ArtifactResponse_s* x, int n);
void zx_sp_ArtifactResponse_DEL_Extensions(struct zx_sp_ArtifactResponse_s* x, int n);
void zx_sp_ArtifactResponse_DEL_Status(struct zx_sp_ArtifactResponse_s* x, int n);
void zx_sp_ArtifactResponse_DEL_Response(struct zx_sp_ArtifactResponse_s* x, int n);

void zx_sp_ArtifactResponse_REV_Issuer(struct zx_sp_ArtifactResponse_s* x);
void zx_sp_ArtifactResponse_REV_Signature(struct zx_sp_ArtifactResponse_s* x);
void zx_sp_ArtifactResponse_REV_Extensions(struct zx_sp_ArtifactResponse_s* x);
void zx_sp_ArtifactResponse_REV_Status(struct zx_sp_ArtifactResponse_s* x);
void zx_sp_ArtifactResponse_REV_Response(struct zx_sp_ArtifactResponse_s* x);

#endif
/* -------------------------- sp_AssertionIDRequest -------------------------- */
/* refby( zx_e_Body_s ) */
#ifndef zx_sp_AssertionIDRequest_EXT
#define zx_sp_AssertionIDRequest_EXT
#endif

struct zx_sp_AssertionIDRequest_s* zx_DEC_sp_AssertionIDRequest(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_sp_AssertionIDRequest_s* zx_NEW_sp_AssertionIDRequest(struct zx_ctx* c);
void zx_FREE_sp_AssertionIDRequest(struct zx_ctx* c, struct zx_sp_AssertionIDRequest_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_sp_AssertionIDRequest_s* zx_DEEP_CLONE_sp_AssertionIDRequest(struct zx_ctx* c, struct zx_sp_AssertionIDRequest_s* x, int dup_strs);
void zx_DUP_STRS_sp_AssertionIDRequest(struct zx_ctx* c, struct zx_sp_AssertionIDRequest_s* x);
int zx_WALK_SO_sp_AssertionIDRequest(struct zx_ctx* c, struct zx_sp_AssertionIDRequest_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_sp_AssertionIDRequest(struct zx_ctx* c, struct zx_sp_AssertionIDRequest_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_sp_AssertionIDRequest(struct zx_ctx* c, struct zx_sp_AssertionIDRequest_s* x);
int zx_LEN_WO_sp_AssertionIDRequest(struct zx_ctx* c, struct zx_sp_AssertionIDRequest_s* x);
char* zx_ENC_SO_sp_AssertionIDRequest(struct zx_ctx* c, struct zx_sp_AssertionIDRequest_s* x, char* p);
char* zx_ENC_WO_sp_AssertionIDRequest(struct zx_ctx* c, struct zx_sp_AssertionIDRequest_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_sp_AssertionIDRequest(struct zx_ctx* c, struct zx_sp_AssertionIDRequest_s* x);
struct zx_str* zx_EASY_ENC_WO_sp_AssertionIDRequest(struct zx_ctx* c, struct zx_sp_AssertionIDRequest_s* x);

struct zx_sp_AssertionIDRequest_s {
  ZX_ELEM_EXT
  zx_sp_AssertionIDRequest_EXT
  struct zx_sa_Issuer_s* Issuer;	/* {0,1} nada */
  struct zx_ds_Signature_s* Signature;	/* {0,1} nada */
  struct zx_sp_Extensions_s* Extensions;	/* {0,1}  */
  struct zx_elem_s* AssertionIDRef;	/* {1,-1} xs:NCName */
  struct zx_str* Consent;	/* {0,1} attribute xs:anyURI */
  struct zx_str* Destination;	/* {0,1} attribute xs:anyURI */
  struct zx_str* ID;	/* {1,1} attribute xs:anyURI */
  struct zx_str* IssueInstant;	/* {1,1} attribute xs:dateTime */
  struct zx_str* Version;	/* {1,1} attribute xa:VersionType */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_sp_AssertionIDRequest_GET_Consent(struct zx_sp_AssertionIDRequest_s* x);
struct zx_str* zx_sp_AssertionIDRequest_GET_Destination(struct zx_sp_AssertionIDRequest_s* x);
struct zx_str* zx_sp_AssertionIDRequest_GET_ID(struct zx_sp_AssertionIDRequest_s* x);
struct zx_str* zx_sp_AssertionIDRequest_GET_IssueInstant(struct zx_sp_AssertionIDRequest_s* x);
struct zx_str* zx_sp_AssertionIDRequest_GET_Version(struct zx_sp_AssertionIDRequest_s* x);

struct zx_sa_Issuer_s* zx_sp_AssertionIDRequest_GET_Issuer(struct zx_sp_AssertionIDRequest_s* x, int n);
struct zx_ds_Signature_s* zx_sp_AssertionIDRequest_GET_Signature(struct zx_sp_AssertionIDRequest_s* x, int n);
struct zx_sp_Extensions_s* zx_sp_AssertionIDRequest_GET_Extensions(struct zx_sp_AssertionIDRequest_s* x, int n);
struct zx_elem_s* zx_sp_AssertionIDRequest_GET_AssertionIDRef(struct zx_sp_AssertionIDRequest_s* x, int n);

int zx_sp_AssertionIDRequest_NUM_Issuer(struct zx_sp_AssertionIDRequest_s* x);
int zx_sp_AssertionIDRequest_NUM_Signature(struct zx_sp_AssertionIDRequest_s* x);
int zx_sp_AssertionIDRequest_NUM_Extensions(struct zx_sp_AssertionIDRequest_s* x);
int zx_sp_AssertionIDRequest_NUM_AssertionIDRef(struct zx_sp_AssertionIDRequest_s* x);

struct zx_sa_Issuer_s* zx_sp_AssertionIDRequest_POP_Issuer(struct zx_sp_AssertionIDRequest_s* x);
struct zx_ds_Signature_s* zx_sp_AssertionIDRequest_POP_Signature(struct zx_sp_AssertionIDRequest_s* x);
struct zx_sp_Extensions_s* zx_sp_AssertionIDRequest_POP_Extensions(struct zx_sp_AssertionIDRequest_s* x);
struct zx_elem_s* zx_sp_AssertionIDRequest_POP_AssertionIDRef(struct zx_sp_AssertionIDRequest_s* x);

void zx_sp_AssertionIDRequest_PUSH_Issuer(struct zx_sp_AssertionIDRequest_s* x, struct zx_sa_Issuer_s* y);
void zx_sp_AssertionIDRequest_PUSH_Signature(struct zx_sp_AssertionIDRequest_s* x, struct zx_ds_Signature_s* y);
void zx_sp_AssertionIDRequest_PUSH_Extensions(struct zx_sp_AssertionIDRequest_s* x, struct zx_sp_Extensions_s* y);
void zx_sp_AssertionIDRequest_PUSH_AssertionIDRef(struct zx_sp_AssertionIDRequest_s* x, struct zx_elem_s* y);

void zx_sp_AssertionIDRequest_PUT_Consent(struct zx_sp_AssertionIDRequest_s* x, struct zx_str* y);
void zx_sp_AssertionIDRequest_PUT_Destination(struct zx_sp_AssertionIDRequest_s* x, struct zx_str* y);
void zx_sp_AssertionIDRequest_PUT_ID(struct zx_sp_AssertionIDRequest_s* x, struct zx_str* y);
void zx_sp_AssertionIDRequest_PUT_IssueInstant(struct zx_sp_AssertionIDRequest_s* x, struct zx_str* y);
void zx_sp_AssertionIDRequest_PUT_Version(struct zx_sp_AssertionIDRequest_s* x, struct zx_str* y);

void zx_sp_AssertionIDRequest_PUT_Issuer(struct zx_sp_AssertionIDRequest_s* x, int n, struct zx_sa_Issuer_s* y);
void zx_sp_AssertionIDRequest_PUT_Signature(struct zx_sp_AssertionIDRequest_s* x, int n, struct zx_ds_Signature_s* y);
void zx_sp_AssertionIDRequest_PUT_Extensions(struct zx_sp_AssertionIDRequest_s* x, int n, struct zx_sp_Extensions_s* y);
void zx_sp_AssertionIDRequest_PUT_AssertionIDRef(struct zx_sp_AssertionIDRequest_s* x, int n, struct zx_elem_s* y);

void zx_sp_AssertionIDRequest_ADD_Issuer(struct zx_sp_AssertionIDRequest_s* x, int n, struct zx_sa_Issuer_s* z);
void zx_sp_AssertionIDRequest_ADD_Signature(struct zx_sp_AssertionIDRequest_s* x, int n, struct zx_ds_Signature_s* z);
void zx_sp_AssertionIDRequest_ADD_Extensions(struct zx_sp_AssertionIDRequest_s* x, int n, struct zx_sp_Extensions_s* z);
void zx_sp_AssertionIDRequest_ADD_AssertionIDRef(struct zx_sp_AssertionIDRequest_s* x, int n, struct zx_elem_s* z);

void zx_sp_AssertionIDRequest_DEL_Issuer(struct zx_sp_AssertionIDRequest_s* x, int n);
void zx_sp_AssertionIDRequest_DEL_Signature(struct zx_sp_AssertionIDRequest_s* x, int n);
void zx_sp_AssertionIDRequest_DEL_Extensions(struct zx_sp_AssertionIDRequest_s* x, int n);
void zx_sp_AssertionIDRequest_DEL_AssertionIDRef(struct zx_sp_AssertionIDRequest_s* x, int n);

void zx_sp_AssertionIDRequest_REV_Issuer(struct zx_sp_AssertionIDRequest_s* x);
void zx_sp_AssertionIDRequest_REV_Signature(struct zx_sp_AssertionIDRequest_s* x);
void zx_sp_AssertionIDRequest_REV_Extensions(struct zx_sp_AssertionIDRequest_s* x);
void zx_sp_AssertionIDRequest_REV_AssertionIDRef(struct zx_sp_AssertionIDRequest_s* x);

#endif
/* -------------------------- sp_AttributeQuery -------------------------- */
/* refby( zx_e_Body_s ) */
#ifndef zx_sp_AttributeQuery_EXT
#define zx_sp_AttributeQuery_EXT
#endif

struct zx_sp_AttributeQuery_s* zx_DEC_sp_AttributeQuery(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_sp_AttributeQuery_s* zx_NEW_sp_AttributeQuery(struct zx_ctx* c);
void zx_FREE_sp_AttributeQuery(struct zx_ctx* c, struct zx_sp_AttributeQuery_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_sp_AttributeQuery_s* zx_DEEP_CLONE_sp_AttributeQuery(struct zx_ctx* c, struct zx_sp_AttributeQuery_s* x, int dup_strs);
void zx_DUP_STRS_sp_AttributeQuery(struct zx_ctx* c, struct zx_sp_AttributeQuery_s* x);
int zx_WALK_SO_sp_AttributeQuery(struct zx_ctx* c, struct zx_sp_AttributeQuery_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_sp_AttributeQuery(struct zx_ctx* c, struct zx_sp_AttributeQuery_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_sp_AttributeQuery(struct zx_ctx* c, struct zx_sp_AttributeQuery_s* x);
int zx_LEN_WO_sp_AttributeQuery(struct zx_ctx* c, struct zx_sp_AttributeQuery_s* x);
char* zx_ENC_SO_sp_AttributeQuery(struct zx_ctx* c, struct zx_sp_AttributeQuery_s* x, char* p);
char* zx_ENC_WO_sp_AttributeQuery(struct zx_ctx* c, struct zx_sp_AttributeQuery_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_sp_AttributeQuery(struct zx_ctx* c, struct zx_sp_AttributeQuery_s* x);
struct zx_str* zx_EASY_ENC_WO_sp_AttributeQuery(struct zx_ctx* c, struct zx_sp_AttributeQuery_s* x);

struct zx_sp_AttributeQuery_s {
  ZX_ELEM_EXT
  zx_sp_AttributeQuery_EXT
  struct zx_sa_Issuer_s* Issuer;	/* {0,1} nada */
  struct zx_ds_Signature_s* Signature;	/* {0,1} nada */
  struct zx_sp_Extensions_s* Extensions;	/* {0,1}  */
  struct zx_sa_Subject_s* Subject;	/* {1,1} nada */
  struct zx_sa_Attribute_s* Attribute;	/* {0,-1} nada */
  struct zx_str* Consent;	/* {0,1} attribute xs:anyURI */
  struct zx_str* Destination;	/* {0,1} attribute xs:anyURI */
  struct zx_str* ID;	/* {1,1} attribute xs:anyURI */
  struct zx_str* IssueInstant;	/* {1,1} attribute xs:dateTime */
  struct zx_str* Version;	/* {1,1} attribute xa:VersionType */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_sp_AttributeQuery_GET_Consent(struct zx_sp_AttributeQuery_s* x);
struct zx_str* zx_sp_AttributeQuery_GET_Destination(struct zx_sp_AttributeQuery_s* x);
struct zx_str* zx_sp_AttributeQuery_GET_ID(struct zx_sp_AttributeQuery_s* x);
struct zx_str* zx_sp_AttributeQuery_GET_IssueInstant(struct zx_sp_AttributeQuery_s* x);
struct zx_str* zx_sp_AttributeQuery_GET_Version(struct zx_sp_AttributeQuery_s* x);

struct zx_sa_Issuer_s* zx_sp_AttributeQuery_GET_Issuer(struct zx_sp_AttributeQuery_s* x, int n);
struct zx_ds_Signature_s* zx_sp_AttributeQuery_GET_Signature(struct zx_sp_AttributeQuery_s* x, int n);
struct zx_sp_Extensions_s* zx_sp_AttributeQuery_GET_Extensions(struct zx_sp_AttributeQuery_s* x, int n);
struct zx_sa_Subject_s* zx_sp_AttributeQuery_GET_Subject(struct zx_sp_AttributeQuery_s* x, int n);
struct zx_sa_Attribute_s* zx_sp_AttributeQuery_GET_Attribute(struct zx_sp_AttributeQuery_s* x, int n);

int zx_sp_AttributeQuery_NUM_Issuer(struct zx_sp_AttributeQuery_s* x);
int zx_sp_AttributeQuery_NUM_Signature(struct zx_sp_AttributeQuery_s* x);
int zx_sp_AttributeQuery_NUM_Extensions(struct zx_sp_AttributeQuery_s* x);
int zx_sp_AttributeQuery_NUM_Subject(struct zx_sp_AttributeQuery_s* x);
int zx_sp_AttributeQuery_NUM_Attribute(struct zx_sp_AttributeQuery_s* x);

struct zx_sa_Issuer_s* zx_sp_AttributeQuery_POP_Issuer(struct zx_sp_AttributeQuery_s* x);
struct zx_ds_Signature_s* zx_sp_AttributeQuery_POP_Signature(struct zx_sp_AttributeQuery_s* x);
struct zx_sp_Extensions_s* zx_sp_AttributeQuery_POP_Extensions(struct zx_sp_AttributeQuery_s* x);
struct zx_sa_Subject_s* zx_sp_AttributeQuery_POP_Subject(struct zx_sp_AttributeQuery_s* x);
struct zx_sa_Attribute_s* zx_sp_AttributeQuery_POP_Attribute(struct zx_sp_AttributeQuery_s* x);

void zx_sp_AttributeQuery_PUSH_Issuer(struct zx_sp_AttributeQuery_s* x, struct zx_sa_Issuer_s* y);
void zx_sp_AttributeQuery_PUSH_Signature(struct zx_sp_AttributeQuery_s* x, struct zx_ds_Signature_s* y);
void zx_sp_AttributeQuery_PUSH_Extensions(struct zx_sp_AttributeQuery_s* x, struct zx_sp_Extensions_s* y);
void zx_sp_AttributeQuery_PUSH_Subject(struct zx_sp_AttributeQuery_s* x, struct zx_sa_Subject_s* y);
void zx_sp_AttributeQuery_PUSH_Attribute(struct zx_sp_AttributeQuery_s* x, struct zx_sa_Attribute_s* y);

void zx_sp_AttributeQuery_PUT_Consent(struct zx_sp_AttributeQuery_s* x, struct zx_str* y);
void zx_sp_AttributeQuery_PUT_Destination(struct zx_sp_AttributeQuery_s* x, struct zx_str* y);
void zx_sp_AttributeQuery_PUT_ID(struct zx_sp_AttributeQuery_s* x, struct zx_str* y);
void zx_sp_AttributeQuery_PUT_IssueInstant(struct zx_sp_AttributeQuery_s* x, struct zx_str* y);
void zx_sp_AttributeQuery_PUT_Version(struct zx_sp_AttributeQuery_s* x, struct zx_str* y);

void zx_sp_AttributeQuery_PUT_Issuer(struct zx_sp_AttributeQuery_s* x, int n, struct zx_sa_Issuer_s* y);
void zx_sp_AttributeQuery_PUT_Signature(struct zx_sp_AttributeQuery_s* x, int n, struct zx_ds_Signature_s* y);
void zx_sp_AttributeQuery_PUT_Extensions(struct zx_sp_AttributeQuery_s* x, int n, struct zx_sp_Extensions_s* y);
void zx_sp_AttributeQuery_PUT_Subject(struct zx_sp_AttributeQuery_s* x, int n, struct zx_sa_Subject_s* y);
void zx_sp_AttributeQuery_PUT_Attribute(struct zx_sp_AttributeQuery_s* x, int n, struct zx_sa_Attribute_s* y);

void zx_sp_AttributeQuery_ADD_Issuer(struct zx_sp_AttributeQuery_s* x, int n, struct zx_sa_Issuer_s* z);
void zx_sp_AttributeQuery_ADD_Signature(struct zx_sp_AttributeQuery_s* x, int n, struct zx_ds_Signature_s* z);
void zx_sp_AttributeQuery_ADD_Extensions(struct zx_sp_AttributeQuery_s* x, int n, struct zx_sp_Extensions_s* z);
void zx_sp_AttributeQuery_ADD_Subject(struct zx_sp_AttributeQuery_s* x, int n, struct zx_sa_Subject_s* z);
void zx_sp_AttributeQuery_ADD_Attribute(struct zx_sp_AttributeQuery_s* x, int n, struct zx_sa_Attribute_s* z);

void zx_sp_AttributeQuery_DEL_Issuer(struct zx_sp_AttributeQuery_s* x, int n);
void zx_sp_AttributeQuery_DEL_Signature(struct zx_sp_AttributeQuery_s* x, int n);
void zx_sp_AttributeQuery_DEL_Extensions(struct zx_sp_AttributeQuery_s* x, int n);
void zx_sp_AttributeQuery_DEL_Subject(struct zx_sp_AttributeQuery_s* x, int n);
void zx_sp_AttributeQuery_DEL_Attribute(struct zx_sp_AttributeQuery_s* x, int n);

void zx_sp_AttributeQuery_REV_Issuer(struct zx_sp_AttributeQuery_s* x);
void zx_sp_AttributeQuery_REV_Signature(struct zx_sp_AttributeQuery_s* x);
void zx_sp_AttributeQuery_REV_Extensions(struct zx_sp_AttributeQuery_s* x);
void zx_sp_AttributeQuery_REV_Subject(struct zx_sp_AttributeQuery_s* x);
void zx_sp_AttributeQuery_REV_Attribute(struct zx_sp_AttributeQuery_s* x);

#endif
/* -------------------------- sp_AuthnQuery -------------------------- */
/* refby( zx_e_Body_s ) */
#ifndef zx_sp_AuthnQuery_EXT
#define zx_sp_AuthnQuery_EXT
#endif

struct zx_sp_AuthnQuery_s* zx_DEC_sp_AuthnQuery(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_sp_AuthnQuery_s* zx_NEW_sp_AuthnQuery(struct zx_ctx* c);
void zx_FREE_sp_AuthnQuery(struct zx_ctx* c, struct zx_sp_AuthnQuery_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_sp_AuthnQuery_s* zx_DEEP_CLONE_sp_AuthnQuery(struct zx_ctx* c, struct zx_sp_AuthnQuery_s* x, int dup_strs);
void zx_DUP_STRS_sp_AuthnQuery(struct zx_ctx* c, struct zx_sp_AuthnQuery_s* x);
int zx_WALK_SO_sp_AuthnQuery(struct zx_ctx* c, struct zx_sp_AuthnQuery_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_sp_AuthnQuery(struct zx_ctx* c, struct zx_sp_AuthnQuery_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_sp_AuthnQuery(struct zx_ctx* c, struct zx_sp_AuthnQuery_s* x);
int zx_LEN_WO_sp_AuthnQuery(struct zx_ctx* c, struct zx_sp_AuthnQuery_s* x);
char* zx_ENC_SO_sp_AuthnQuery(struct zx_ctx* c, struct zx_sp_AuthnQuery_s* x, char* p);
char* zx_ENC_WO_sp_AuthnQuery(struct zx_ctx* c, struct zx_sp_AuthnQuery_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_sp_AuthnQuery(struct zx_ctx* c, struct zx_sp_AuthnQuery_s* x);
struct zx_str* zx_EASY_ENC_WO_sp_AuthnQuery(struct zx_ctx* c, struct zx_sp_AuthnQuery_s* x);

struct zx_sp_AuthnQuery_s {
  ZX_ELEM_EXT
  zx_sp_AuthnQuery_EXT
  struct zx_sa_Issuer_s* Issuer;	/* {0,1} nada */
  struct zx_ds_Signature_s* Signature;	/* {0,1} nada */
  struct zx_sp_Extensions_s* Extensions;	/* {0,1}  */
  struct zx_sa_Subject_s* Subject;	/* {1,1} nada */
  struct zx_sp_RequestedAuthnContext_s* RequestedAuthnContext;	/* {0,1} nada */
  struct zx_str* Consent;	/* {0,1} attribute xs:anyURI */
  struct zx_str* Destination;	/* {0,1} attribute xs:anyURI */
  struct zx_str* ID;	/* {1,1} attribute xs:anyURI */
  struct zx_str* IssueInstant;	/* {1,1} attribute xs:dateTime */
  struct zx_str* SessionIndex;	/* {0,1} attribute xs:string */
  struct zx_str* Version;	/* {1,1} attribute xa:VersionType */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_sp_AuthnQuery_GET_Consent(struct zx_sp_AuthnQuery_s* x);
struct zx_str* zx_sp_AuthnQuery_GET_Destination(struct zx_sp_AuthnQuery_s* x);
struct zx_str* zx_sp_AuthnQuery_GET_ID(struct zx_sp_AuthnQuery_s* x);
struct zx_str* zx_sp_AuthnQuery_GET_IssueInstant(struct zx_sp_AuthnQuery_s* x);
struct zx_str* zx_sp_AuthnQuery_GET_SessionIndex(struct zx_sp_AuthnQuery_s* x);
struct zx_str* zx_sp_AuthnQuery_GET_Version(struct zx_sp_AuthnQuery_s* x);

struct zx_sa_Issuer_s* zx_sp_AuthnQuery_GET_Issuer(struct zx_sp_AuthnQuery_s* x, int n);
struct zx_ds_Signature_s* zx_sp_AuthnQuery_GET_Signature(struct zx_sp_AuthnQuery_s* x, int n);
struct zx_sp_Extensions_s* zx_sp_AuthnQuery_GET_Extensions(struct zx_sp_AuthnQuery_s* x, int n);
struct zx_sa_Subject_s* zx_sp_AuthnQuery_GET_Subject(struct zx_sp_AuthnQuery_s* x, int n);
struct zx_sp_RequestedAuthnContext_s* zx_sp_AuthnQuery_GET_RequestedAuthnContext(struct zx_sp_AuthnQuery_s* x, int n);

int zx_sp_AuthnQuery_NUM_Issuer(struct zx_sp_AuthnQuery_s* x);
int zx_sp_AuthnQuery_NUM_Signature(struct zx_sp_AuthnQuery_s* x);
int zx_sp_AuthnQuery_NUM_Extensions(struct zx_sp_AuthnQuery_s* x);
int zx_sp_AuthnQuery_NUM_Subject(struct zx_sp_AuthnQuery_s* x);
int zx_sp_AuthnQuery_NUM_RequestedAuthnContext(struct zx_sp_AuthnQuery_s* x);

struct zx_sa_Issuer_s* zx_sp_AuthnQuery_POP_Issuer(struct zx_sp_AuthnQuery_s* x);
struct zx_ds_Signature_s* zx_sp_AuthnQuery_POP_Signature(struct zx_sp_AuthnQuery_s* x);
struct zx_sp_Extensions_s* zx_sp_AuthnQuery_POP_Extensions(struct zx_sp_AuthnQuery_s* x);
struct zx_sa_Subject_s* zx_sp_AuthnQuery_POP_Subject(struct zx_sp_AuthnQuery_s* x);
struct zx_sp_RequestedAuthnContext_s* zx_sp_AuthnQuery_POP_RequestedAuthnContext(struct zx_sp_AuthnQuery_s* x);

void zx_sp_AuthnQuery_PUSH_Issuer(struct zx_sp_AuthnQuery_s* x, struct zx_sa_Issuer_s* y);
void zx_sp_AuthnQuery_PUSH_Signature(struct zx_sp_AuthnQuery_s* x, struct zx_ds_Signature_s* y);
void zx_sp_AuthnQuery_PUSH_Extensions(struct zx_sp_AuthnQuery_s* x, struct zx_sp_Extensions_s* y);
void zx_sp_AuthnQuery_PUSH_Subject(struct zx_sp_AuthnQuery_s* x, struct zx_sa_Subject_s* y);
void zx_sp_AuthnQuery_PUSH_RequestedAuthnContext(struct zx_sp_AuthnQuery_s* x, struct zx_sp_RequestedAuthnContext_s* y);

void zx_sp_AuthnQuery_PUT_Consent(struct zx_sp_AuthnQuery_s* x, struct zx_str* y);
void zx_sp_AuthnQuery_PUT_Destination(struct zx_sp_AuthnQuery_s* x, struct zx_str* y);
void zx_sp_AuthnQuery_PUT_ID(struct zx_sp_AuthnQuery_s* x, struct zx_str* y);
void zx_sp_AuthnQuery_PUT_IssueInstant(struct zx_sp_AuthnQuery_s* x, struct zx_str* y);
void zx_sp_AuthnQuery_PUT_SessionIndex(struct zx_sp_AuthnQuery_s* x, struct zx_str* y);
void zx_sp_AuthnQuery_PUT_Version(struct zx_sp_AuthnQuery_s* x, struct zx_str* y);

void zx_sp_AuthnQuery_PUT_Issuer(struct zx_sp_AuthnQuery_s* x, int n, struct zx_sa_Issuer_s* y);
void zx_sp_AuthnQuery_PUT_Signature(struct zx_sp_AuthnQuery_s* x, int n, struct zx_ds_Signature_s* y);
void zx_sp_AuthnQuery_PUT_Extensions(struct zx_sp_AuthnQuery_s* x, int n, struct zx_sp_Extensions_s* y);
void zx_sp_AuthnQuery_PUT_Subject(struct zx_sp_AuthnQuery_s* x, int n, struct zx_sa_Subject_s* y);
void zx_sp_AuthnQuery_PUT_RequestedAuthnContext(struct zx_sp_AuthnQuery_s* x, int n, struct zx_sp_RequestedAuthnContext_s* y);

void zx_sp_AuthnQuery_ADD_Issuer(struct zx_sp_AuthnQuery_s* x, int n, struct zx_sa_Issuer_s* z);
void zx_sp_AuthnQuery_ADD_Signature(struct zx_sp_AuthnQuery_s* x, int n, struct zx_ds_Signature_s* z);
void zx_sp_AuthnQuery_ADD_Extensions(struct zx_sp_AuthnQuery_s* x, int n, struct zx_sp_Extensions_s* z);
void zx_sp_AuthnQuery_ADD_Subject(struct zx_sp_AuthnQuery_s* x, int n, struct zx_sa_Subject_s* z);
void zx_sp_AuthnQuery_ADD_RequestedAuthnContext(struct zx_sp_AuthnQuery_s* x, int n, struct zx_sp_RequestedAuthnContext_s* z);

void zx_sp_AuthnQuery_DEL_Issuer(struct zx_sp_AuthnQuery_s* x, int n);
void zx_sp_AuthnQuery_DEL_Signature(struct zx_sp_AuthnQuery_s* x, int n);
void zx_sp_AuthnQuery_DEL_Extensions(struct zx_sp_AuthnQuery_s* x, int n);
void zx_sp_AuthnQuery_DEL_Subject(struct zx_sp_AuthnQuery_s* x, int n);
void zx_sp_AuthnQuery_DEL_RequestedAuthnContext(struct zx_sp_AuthnQuery_s* x, int n);

void zx_sp_AuthnQuery_REV_Issuer(struct zx_sp_AuthnQuery_s* x);
void zx_sp_AuthnQuery_REV_Signature(struct zx_sp_AuthnQuery_s* x);
void zx_sp_AuthnQuery_REV_Extensions(struct zx_sp_AuthnQuery_s* x);
void zx_sp_AuthnQuery_REV_Subject(struct zx_sp_AuthnQuery_s* x);
void zx_sp_AuthnQuery_REV_RequestedAuthnContext(struct zx_sp_AuthnQuery_s* x);

#endif
/* -------------------------- sp_AuthnRequest -------------------------- */
/* refby( zx_idp_GetAssertion_s zx_e_Body_s ) */
#ifndef zx_sp_AuthnRequest_EXT
#define zx_sp_AuthnRequest_EXT
#endif

struct zx_sp_AuthnRequest_s* zx_DEC_sp_AuthnRequest(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_sp_AuthnRequest_s* zx_NEW_sp_AuthnRequest(struct zx_ctx* c);
void zx_FREE_sp_AuthnRequest(struct zx_ctx* c, struct zx_sp_AuthnRequest_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_sp_AuthnRequest_s* zx_DEEP_CLONE_sp_AuthnRequest(struct zx_ctx* c, struct zx_sp_AuthnRequest_s* x, int dup_strs);
void zx_DUP_STRS_sp_AuthnRequest(struct zx_ctx* c, struct zx_sp_AuthnRequest_s* x);
int zx_WALK_SO_sp_AuthnRequest(struct zx_ctx* c, struct zx_sp_AuthnRequest_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_sp_AuthnRequest(struct zx_ctx* c, struct zx_sp_AuthnRequest_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_sp_AuthnRequest(struct zx_ctx* c, struct zx_sp_AuthnRequest_s* x);
int zx_LEN_WO_sp_AuthnRequest(struct zx_ctx* c, struct zx_sp_AuthnRequest_s* x);
char* zx_ENC_SO_sp_AuthnRequest(struct zx_ctx* c, struct zx_sp_AuthnRequest_s* x, char* p);
char* zx_ENC_WO_sp_AuthnRequest(struct zx_ctx* c, struct zx_sp_AuthnRequest_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_sp_AuthnRequest(struct zx_ctx* c, struct zx_sp_AuthnRequest_s* x);
struct zx_str* zx_EASY_ENC_WO_sp_AuthnRequest(struct zx_ctx* c, struct zx_sp_AuthnRequest_s* x);

struct zx_sp_AuthnRequest_s {
  ZX_ELEM_EXT
  zx_sp_AuthnRequest_EXT
  struct zx_sa_Issuer_s* Issuer;	/* {0,1} nada */
  struct zx_ds_Signature_s* Signature;	/* {0,1} nada */
  struct zx_sp_Extensions_s* Extensions;	/* {0,1}  */
  struct zx_sa_Subject_s* Subject;	/* {0,1} nada */
  struct zx_sp_NameIDPolicy_s* NameIDPolicy;	/* {0,1} nada */
  struct zx_sa_Conditions_s* Conditions;	/* {0,1} nada */
  struct zx_sp_RequestedAuthnContext_s* RequestedAuthnContext;	/* {0,1} nada */
  struct zx_sp_Scoping_s* Scoping;	/* {0,1} nada */
  struct zx_str* AssertionConsumerServiceIndex;	/* {0,1} attribute xs:unsignedShort */
  struct zx_str* AssertionConsumerServiceURL;	/* {0,1} attribute xs:anyURI */
  struct zx_str* AttributeConsumingServiceIndex;	/* {0,1} attribute xs:unsignedShort */
  struct zx_str* Consent;	/* {0,1} attribute xs:anyURI */
  struct zx_str* Destination;	/* {0,1} attribute xs:anyURI */
  struct zx_str* ForceAuthn;	/* {0,1} attribute xs:boolean */
  struct zx_str* ID;	/* {1,1} attribute xs:anyURI */
  struct zx_str* IsPassive;	/* {0,1} attribute xs:boolean */
  struct zx_str* IssueInstant;	/* {1,1} attribute xs:dateTime */
  struct zx_str* ProtocolBinding;	/* {0,1} attribute xs:anyURI */
  struct zx_str* ProviderName;	/* {0,1} attribute xs:string */
  struct zx_str* Version;	/* {1,1} attribute xa:VersionType */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_sp_AuthnRequest_GET_AssertionConsumerServiceIndex(struct zx_sp_AuthnRequest_s* x);
struct zx_str* zx_sp_AuthnRequest_GET_AssertionConsumerServiceURL(struct zx_sp_AuthnRequest_s* x);
struct zx_str* zx_sp_AuthnRequest_GET_AttributeConsumingServiceIndex(struct zx_sp_AuthnRequest_s* x);
struct zx_str* zx_sp_AuthnRequest_GET_Consent(struct zx_sp_AuthnRequest_s* x);
struct zx_str* zx_sp_AuthnRequest_GET_Destination(struct zx_sp_AuthnRequest_s* x);
struct zx_str* zx_sp_AuthnRequest_GET_ForceAuthn(struct zx_sp_AuthnRequest_s* x);
struct zx_str* zx_sp_AuthnRequest_GET_ID(struct zx_sp_AuthnRequest_s* x);
struct zx_str* zx_sp_AuthnRequest_GET_IsPassive(struct zx_sp_AuthnRequest_s* x);
struct zx_str* zx_sp_AuthnRequest_GET_IssueInstant(struct zx_sp_AuthnRequest_s* x);
struct zx_str* zx_sp_AuthnRequest_GET_ProtocolBinding(struct zx_sp_AuthnRequest_s* x);
struct zx_str* zx_sp_AuthnRequest_GET_ProviderName(struct zx_sp_AuthnRequest_s* x);
struct zx_str* zx_sp_AuthnRequest_GET_Version(struct zx_sp_AuthnRequest_s* x);

struct zx_sa_Issuer_s* zx_sp_AuthnRequest_GET_Issuer(struct zx_sp_AuthnRequest_s* x, int n);
struct zx_ds_Signature_s* zx_sp_AuthnRequest_GET_Signature(struct zx_sp_AuthnRequest_s* x, int n);
struct zx_sp_Extensions_s* zx_sp_AuthnRequest_GET_Extensions(struct zx_sp_AuthnRequest_s* x, int n);
struct zx_sa_Subject_s* zx_sp_AuthnRequest_GET_Subject(struct zx_sp_AuthnRequest_s* x, int n);
struct zx_sp_NameIDPolicy_s* zx_sp_AuthnRequest_GET_NameIDPolicy(struct zx_sp_AuthnRequest_s* x, int n);
struct zx_sa_Conditions_s* zx_sp_AuthnRequest_GET_Conditions(struct zx_sp_AuthnRequest_s* x, int n);
struct zx_sp_RequestedAuthnContext_s* zx_sp_AuthnRequest_GET_RequestedAuthnContext(struct zx_sp_AuthnRequest_s* x, int n);
struct zx_sp_Scoping_s* zx_sp_AuthnRequest_GET_Scoping(struct zx_sp_AuthnRequest_s* x, int n);

int zx_sp_AuthnRequest_NUM_Issuer(struct zx_sp_AuthnRequest_s* x);
int zx_sp_AuthnRequest_NUM_Signature(struct zx_sp_AuthnRequest_s* x);
int zx_sp_AuthnRequest_NUM_Extensions(struct zx_sp_AuthnRequest_s* x);
int zx_sp_AuthnRequest_NUM_Subject(struct zx_sp_AuthnRequest_s* x);
int zx_sp_AuthnRequest_NUM_NameIDPolicy(struct zx_sp_AuthnRequest_s* x);
int zx_sp_AuthnRequest_NUM_Conditions(struct zx_sp_AuthnRequest_s* x);
int zx_sp_AuthnRequest_NUM_RequestedAuthnContext(struct zx_sp_AuthnRequest_s* x);
int zx_sp_AuthnRequest_NUM_Scoping(struct zx_sp_AuthnRequest_s* x);

struct zx_sa_Issuer_s* zx_sp_AuthnRequest_POP_Issuer(struct zx_sp_AuthnRequest_s* x);
struct zx_ds_Signature_s* zx_sp_AuthnRequest_POP_Signature(struct zx_sp_AuthnRequest_s* x);
struct zx_sp_Extensions_s* zx_sp_AuthnRequest_POP_Extensions(struct zx_sp_AuthnRequest_s* x);
struct zx_sa_Subject_s* zx_sp_AuthnRequest_POP_Subject(struct zx_sp_AuthnRequest_s* x);
struct zx_sp_NameIDPolicy_s* zx_sp_AuthnRequest_POP_NameIDPolicy(struct zx_sp_AuthnRequest_s* x);
struct zx_sa_Conditions_s* zx_sp_AuthnRequest_POP_Conditions(struct zx_sp_AuthnRequest_s* x);
struct zx_sp_RequestedAuthnContext_s* zx_sp_AuthnRequest_POP_RequestedAuthnContext(struct zx_sp_AuthnRequest_s* x);
struct zx_sp_Scoping_s* zx_sp_AuthnRequest_POP_Scoping(struct zx_sp_AuthnRequest_s* x);

void zx_sp_AuthnRequest_PUSH_Issuer(struct zx_sp_AuthnRequest_s* x, struct zx_sa_Issuer_s* y);
void zx_sp_AuthnRequest_PUSH_Signature(struct zx_sp_AuthnRequest_s* x, struct zx_ds_Signature_s* y);
void zx_sp_AuthnRequest_PUSH_Extensions(struct zx_sp_AuthnRequest_s* x, struct zx_sp_Extensions_s* y);
void zx_sp_AuthnRequest_PUSH_Subject(struct zx_sp_AuthnRequest_s* x, struct zx_sa_Subject_s* y);
void zx_sp_AuthnRequest_PUSH_NameIDPolicy(struct zx_sp_AuthnRequest_s* x, struct zx_sp_NameIDPolicy_s* y);
void zx_sp_AuthnRequest_PUSH_Conditions(struct zx_sp_AuthnRequest_s* x, struct zx_sa_Conditions_s* y);
void zx_sp_AuthnRequest_PUSH_RequestedAuthnContext(struct zx_sp_AuthnRequest_s* x, struct zx_sp_RequestedAuthnContext_s* y);
void zx_sp_AuthnRequest_PUSH_Scoping(struct zx_sp_AuthnRequest_s* x, struct zx_sp_Scoping_s* y);

void zx_sp_AuthnRequest_PUT_AssertionConsumerServiceIndex(struct zx_sp_AuthnRequest_s* x, struct zx_str* y);
void zx_sp_AuthnRequest_PUT_AssertionConsumerServiceURL(struct zx_sp_AuthnRequest_s* x, struct zx_str* y);
void zx_sp_AuthnRequest_PUT_AttributeConsumingServiceIndex(struct zx_sp_AuthnRequest_s* x, struct zx_str* y);
void zx_sp_AuthnRequest_PUT_Consent(struct zx_sp_AuthnRequest_s* x, struct zx_str* y);
void zx_sp_AuthnRequest_PUT_Destination(struct zx_sp_AuthnRequest_s* x, struct zx_str* y);
void zx_sp_AuthnRequest_PUT_ForceAuthn(struct zx_sp_AuthnRequest_s* x, struct zx_str* y);
void zx_sp_AuthnRequest_PUT_ID(struct zx_sp_AuthnRequest_s* x, struct zx_str* y);
void zx_sp_AuthnRequest_PUT_IsPassive(struct zx_sp_AuthnRequest_s* x, struct zx_str* y);
void zx_sp_AuthnRequest_PUT_IssueInstant(struct zx_sp_AuthnRequest_s* x, struct zx_str* y);
void zx_sp_AuthnRequest_PUT_ProtocolBinding(struct zx_sp_AuthnRequest_s* x, struct zx_str* y);
void zx_sp_AuthnRequest_PUT_ProviderName(struct zx_sp_AuthnRequest_s* x, struct zx_str* y);
void zx_sp_AuthnRequest_PUT_Version(struct zx_sp_AuthnRequest_s* x, struct zx_str* y);

void zx_sp_AuthnRequest_PUT_Issuer(struct zx_sp_AuthnRequest_s* x, int n, struct zx_sa_Issuer_s* y);
void zx_sp_AuthnRequest_PUT_Signature(struct zx_sp_AuthnRequest_s* x, int n, struct zx_ds_Signature_s* y);
void zx_sp_AuthnRequest_PUT_Extensions(struct zx_sp_AuthnRequest_s* x, int n, struct zx_sp_Extensions_s* y);
void zx_sp_AuthnRequest_PUT_Subject(struct zx_sp_AuthnRequest_s* x, int n, struct zx_sa_Subject_s* y);
void zx_sp_AuthnRequest_PUT_NameIDPolicy(struct zx_sp_AuthnRequest_s* x, int n, struct zx_sp_NameIDPolicy_s* y);
void zx_sp_AuthnRequest_PUT_Conditions(struct zx_sp_AuthnRequest_s* x, int n, struct zx_sa_Conditions_s* y);
void zx_sp_AuthnRequest_PUT_RequestedAuthnContext(struct zx_sp_AuthnRequest_s* x, int n, struct zx_sp_RequestedAuthnContext_s* y);
void zx_sp_AuthnRequest_PUT_Scoping(struct zx_sp_AuthnRequest_s* x, int n, struct zx_sp_Scoping_s* y);

void zx_sp_AuthnRequest_ADD_Issuer(struct zx_sp_AuthnRequest_s* x, int n, struct zx_sa_Issuer_s* z);
void zx_sp_AuthnRequest_ADD_Signature(struct zx_sp_AuthnRequest_s* x, int n, struct zx_ds_Signature_s* z);
void zx_sp_AuthnRequest_ADD_Extensions(struct zx_sp_AuthnRequest_s* x, int n, struct zx_sp_Extensions_s* z);
void zx_sp_AuthnRequest_ADD_Subject(struct zx_sp_AuthnRequest_s* x, int n, struct zx_sa_Subject_s* z);
void zx_sp_AuthnRequest_ADD_NameIDPolicy(struct zx_sp_AuthnRequest_s* x, int n, struct zx_sp_NameIDPolicy_s* z);
void zx_sp_AuthnRequest_ADD_Conditions(struct zx_sp_AuthnRequest_s* x, int n, struct zx_sa_Conditions_s* z);
void zx_sp_AuthnRequest_ADD_RequestedAuthnContext(struct zx_sp_AuthnRequest_s* x, int n, struct zx_sp_RequestedAuthnContext_s* z);
void zx_sp_AuthnRequest_ADD_Scoping(struct zx_sp_AuthnRequest_s* x, int n, struct zx_sp_Scoping_s* z);

void zx_sp_AuthnRequest_DEL_Issuer(struct zx_sp_AuthnRequest_s* x, int n);
void zx_sp_AuthnRequest_DEL_Signature(struct zx_sp_AuthnRequest_s* x, int n);
void zx_sp_AuthnRequest_DEL_Extensions(struct zx_sp_AuthnRequest_s* x, int n);
void zx_sp_AuthnRequest_DEL_Subject(struct zx_sp_AuthnRequest_s* x, int n);
void zx_sp_AuthnRequest_DEL_NameIDPolicy(struct zx_sp_AuthnRequest_s* x, int n);
void zx_sp_AuthnRequest_DEL_Conditions(struct zx_sp_AuthnRequest_s* x, int n);
void zx_sp_AuthnRequest_DEL_RequestedAuthnContext(struct zx_sp_AuthnRequest_s* x, int n);
void zx_sp_AuthnRequest_DEL_Scoping(struct zx_sp_AuthnRequest_s* x, int n);

void zx_sp_AuthnRequest_REV_Issuer(struct zx_sp_AuthnRequest_s* x);
void zx_sp_AuthnRequest_REV_Signature(struct zx_sp_AuthnRequest_s* x);
void zx_sp_AuthnRequest_REV_Extensions(struct zx_sp_AuthnRequest_s* x);
void zx_sp_AuthnRequest_REV_Subject(struct zx_sp_AuthnRequest_s* x);
void zx_sp_AuthnRequest_REV_NameIDPolicy(struct zx_sp_AuthnRequest_s* x);
void zx_sp_AuthnRequest_REV_Conditions(struct zx_sp_AuthnRequest_s* x);
void zx_sp_AuthnRequest_REV_RequestedAuthnContext(struct zx_sp_AuthnRequest_s* x);
void zx_sp_AuthnRequest_REV_Scoping(struct zx_sp_AuthnRequest_s* x);

#endif
/* -------------------------- sp_AuthzDecisionQuery -------------------------- */
/* refby( zx_e_Body_s ) */
#ifndef zx_sp_AuthzDecisionQuery_EXT
#define zx_sp_AuthzDecisionQuery_EXT
#endif

struct zx_sp_AuthzDecisionQuery_s* zx_DEC_sp_AuthzDecisionQuery(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_sp_AuthzDecisionQuery_s* zx_NEW_sp_AuthzDecisionQuery(struct zx_ctx* c);
void zx_FREE_sp_AuthzDecisionQuery(struct zx_ctx* c, struct zx_sp_AuthzDecisionQuery_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_sp_AuthzDecisionQuery_s* zx_DEEP_CLONE_sp_AuthzDecisionQuery(struct zx_ctx* c, struct zx_sp_AuthzDecisionQuery_s* x, int dup_strs);
void zx_DUP_STRS_sp_AuthzDecisionQuery(struct zx_ctx* c, struct zx_sp_AuthzDecisionQuery_s* x);
int zx_WALK_SO_sp_AuthzDecisionQuery(struct zx_ctx* c, struct zx_sp_AuthzDecisionQuery_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_sp_AuthzDecisionQuery(struct zx_ctx* c, struct zx_sp_AuthzDecisionQuery_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_sp_AuthzDecisionQuery(struct zx_ctx* c, struct zx_sp_AuthzDecisionQuery_s* x);
int zx_LEN_WO_sp_AuthzDecisionQuery(struct zx_ctx* c, struct zx_sp_AuthzDecisionQuery_s* x);
char* zx_ENC_SO_sp_AuthzDecisionQuery(struct zx_ctx* c, struct zx_sp_AuthzDecisionQuery_s* x, char* p);
char* zx_ENC_WO_sp_AuthzDecisionQuery(struct zx_ctx* c, struct zx_sp_AuthzDecisionQuery_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_sp_AuthzDecisionQuery(struct zx_ctx* c, struct zx_sp_AuthzDecisionQuery_s* x);
struct zx_str* zx_EASY_ENC_WO_sp_AuthzDecisionQuery(struct zx_ctx* c, struct zx_sp_AuthzDecisionQuery_s* x);

struct zx_sp_AuthzDecisionQuery_s {
  ZX_ELEM_EXT
  zx_sp_AuthzDecisionQuery_EXT
  struct zx_sa_Issuer_s* Issuer;	/* {0,1} nada */
  struct zx_ds_Signature_s* Signature;	/* {0,1} nada */
  struct zx_sp_Extensions_s* Extensions;	/* {0,1}  */
  struct zx_sa_Subject_s* Subject;	/* {1,1} nada */
  struct zx_sa_Action_s* Action;	/* {1,-1} nada */
  struct zx_sa_Evidence_s* Evidence;	/* {0,1} nada */
  struct zx_str* Consent;	/* {0,1} attribute xs:anyURI */
  struct zx_str* Destination;	/* {0,1} attribute xs:anyURI */
  struct zx_str* ID;	/* {1,1} attribute xs:anyURI */
  struct zx_str* IssueInstant;	/* {1,1} attribute xs:dateTime */
  struct zx_str* Resource;	/* {1,1} attribute xs:anyURI */
  struct zx_str* Version;	/* {1,1} attribute xa:VersionType */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_sp_AuthzDecisionQuery_GET_Consent(struct zx_sp_AuthzDecisionQuery_s* x);
struct zx_str* zx_sp_AuthzDecisionQuery_GET_Destination(struct zx_sp_AuthzDecisionQuery_s* x);
struct zx_str* zx_sp_AuthzDecisionQuery_GET_ID(struct zx_sp_AuthzDecisionQuery_s* x);
struct zx_str* zx_sp_AuthzDecisionQuery_GET_IssueInstant(struct zx_sp_AuthzDecisionQuery_s* x);
struct zx_str* zx_sp_AuthzDecisionQuery_GET_Resource(struct zx_sp_AuthzDecisionQuery_s* x);
struct zx_str* zx_sp_AuthzDecisionQuery_GET_Version(struct zx_sp_AuthzDecisionQuery_s* x);

struct zx_sa_Issuer_s* zx_sp_AuthzDecisionQuery_GET_Issuer(struct zx_sp_AuthzDecisionQuery_s* x, int n);
struct zx_ds_Signature_s* zx_sp_AuthzDecisionQuery_GET_Signature(struct zx_sp_AuthzDecisionQuery_s* x, int n);
struct zx_sp_Extensions_s* zx_sp_AuthzDecisionQuery_GET_Extensions(struct zx_sp_AuthzDecisionQuery_s* x, int n);
struct zx_sa_Subject_s* zx_sp_AuthzDecisionQuery_GET_Subject(struct zx_sp_AuthzDecisionQuery_s* x, int n);
struct zx_sa_Action_s* zx_sp_AuthzDecisionQuery_GET_Action(struct zx_sp_AuthzDecisionQuery_s* x, int n);
struct zx_sa_Evidence_s* zx_sp_AuthzDecisionQuery_GET_Evidence(struct zx_sp_AuthzDecisionQuery_s* x, int n);

int zx_sp_AuthzDecisionQuery_NUM_Issuer(struct zx_sp_AuthzDecisionQuery_s* x);
int zx_sp_AuthzDecisionQuery_NUM_Signature(struct zx_sp_AuthzDecisionQuery_s* x);
int zx_sp_AuthzDecisionQuery_NUM_Extensions(struct zx_sp_AuthzDecisionQuery_s* x);
int zx_sp_AuthzDecisionQuery_NUM_Subject(struct zx_sp_AuthzDecisionQuery_s* x);
int zx_sp_AuthzDecisionQuery_NUM_Action(struct zx_sp_AuthzDecisionQuery_s* x);
int zx_sp_AuthzDecisionQuery_NUM_Evidence(struct zx_sp_AuthzDecisionQuery_s* x);

struct zx_sa_Issuer_s* zx_sp_AuthzDecisionQuery_POP_Issuer(struct zx_sp_AuthzDecisionQuery_s* x);
struct zx_ds_Signature_s* zx_sp_AuthzDecisionQuery_POP_Signature(struct zx_sp_AuthzDecisionQuery_s* x);
struct zx_sp_Extensions_s* zx_sp_AuthzDecisionQuery_POP_Extensions(struct zx_sp_AuthzDecisionQuery_s* x);
struct zx_sa_Subject_s* zx_sp_AuthzDecisionQuery_POP_Subject(struct zx_sp_AuthzDecisionQuery_s* x);
struct zx_sa_Action_s* zx_sp_AuthzDecisionQuery_POP_Action(struct zx_sp_AuthzDecisionQuery_s* x);
struct zx_sa_Evidence_s* zx_sp_AuthzDecisionQuery_POP_Evidence(struct zx_sp_AuthzDecisionQuery_s* x);

void zx_sp_AuthzDecisionQuery_PUSH_Issuer(struct zx_sp_AuthzDecisionQuery_s* x, struct zx_sa_Issuer_s* y);
void zx_sp_AuthzDecisionQuery_PUSH_Signature(struct zx_sp_AuthzDecisionQuery_s* x, struct zx_ds_Signature_s* y);
void zx_sp_AuthzDecisionQuery_PUSH_Extensions(struct zx_sp_AuthzDecisionQuery_s* x, struct zx_sp_Extensions_s* y);
void zx_sp_AuthzDecisionQuery_PUSH_Subject(struct zx_sp_AuthzDecisionQuery_s* x, struct zx_sa_Subject_s* y);
void zx_sp_AuthzDecisionQuery_PUSH_Action(struct zx_sp_AuthzDecisionQuery_s* x, struct zx_sa_Action_s* y);
void zx_sp_AuthzDecisionQuery_PUSH_Evidence(struct zx_sp_AuthzDecisionQuery_s* x, struct zx_sa_Evidence_s* y);

void zx_sp_AuthzDecisionQuery_PUT_Consent(struct zx_sp_AuthzDecisionQuery_s* x, struct zx_str* y);
void zx_sp_AuthzDecisionQuery_PUT_Destination(struct zx_sp_AuthzDecisionQuery_s* x, struct zx_str* y);
void zx_sp_AuthzDecisionQuery_PUT_ID(struct zx_sp_AuthzDecisionQuery_s* x, struct zx_str* y);
void zx_sp_AuthzDecisionQuery_PUT_IssueInstant(struct zx_sp_AuthzDecisionQuery_s* x, struct zx_str* y);
void zx_sp_AuthzDecisionQuery_PUT_Resource(struct zx_sp_AuthzDecisionQuery_s* x, struct zx_str* y);
void zx_sp_AuthzDecisionQuery_PUT_Version(struct zx_sp_AuthzDecisionQuery_s* x, struct zx_str* y);

void zx_sp_AuthzDecisionQuery_PUT_Issuer(struct zx_sp_AuthzDecisionQuery_s* x, int n, struct zx_sa_Issuer_s* y);
void zx_sp_AuthzDecisionQuery_PUT_Signature(struct zx_sp_AuthzDecisionQuery_s* x, int n, struct zx_ds_Signature_s* y);
void zx_sp_AuthzDecisionQuery_PUT_Extensions(struct zx_sp_AuthzDecisionQuery_s* x, int n, struct zx_sp_Extensions_s* y);
void zx_sp_AuthzDecisionQuery_PUT_Subject(struct zx_sp_AuthzDecisionQuery_s* x, int n, struct zx_sa_Subject_s* y);
void zx_sp_AuthzDecisionQuery_PUT_Action(struct zx_sp_AuthzDecisionQuery_s* x, int n, struct zx_sa_Action_s* y);
void zx_sp_AuthzDecisionQuery_PUT_Evidence(struct zx_sp_AuthzDecisionQuery_s* x, int n, struct zx_sa_Evidence_s* y);

void zx_sp_AuthzDecisionQuery_ADD_Issuer(struct zx_sp_AuthzDecisionQuery_s* x, int n, struct zx_sa_Issuer_s* z);
void zx_sp_AuthzDecisionQuery_ADD_Signature(struct zx_sp_AuthzDecisionQuery_s* x, int n, struct zx_ds_Signature_s* z);
void zx_sp_AuthzDecisionQuery_ADD_Extensions(struct zx_sp_AuthzDecisionQuery_s* x, int n, struct zx_sp_Extensions_s* z);
void zx_sp_AuthzDecisionQuery_ADD_Subject(struct zx_sp_AuthzDecisionQuery_s* x, int n, struct zx_sa_Subject_s* z);
void zx_sp_AuthzDecisionQuery_ADD_Action(struct zx_sp_AuthzDecisionQuery_s* x, int n, struct zx_sa_Action_s* z);
void zx_sp_AuthzDecisionQuery_ADD_Evidence(struct zx_sp_AuthzDecisionQuery_s* x, int n, struct zx_sa_Evidence_s* z);

void zx_sp_AuthzDecisionQuery_DEL_Issuer(struct zx_sp_AuthzDecisionQuery_s* x, int n);
void zx_sp_AuthzDecisionQuery_DEL_Signature(struct zx_sp_AuthzDecisionQuery_s* x, int n);
void zx_sp_AuthzDecisionQuery_DEL_Extensions(struct zx_sp_AuthzDecisionQuery_s* x, int n);
void zx_sp_AuthzDecisionQuery_DEL_Subject(struct zx_sp_AuthzDecisionQuery_s* x, int n);
void zx_sp_AuthzDecisionQuery_DEL_Action(struct zx_sp_AuthzDecisionQuery_s* x, int n);
void zx_sp_AuthzDecisionQuery_DEL_Evidence(struct zx_sp_AuthzDecisionQuery_s* x, int n);

void zx_sp_AuthzDecisionQuery_REV_Issuer(struct zx_sp_AuthzDecisionQuery_s* x);
void zx_sp_AuthzDecisionQuery_REV_Signature(struct zx_sp_AuthzDecisionQuery_s* x);
void zx_sp_AuthzDecisionQuery_REV_Extensions(struct zx_sp_AuthzDecisionQuery_s* x);
void zx_sp_AuthzDecisionQuery_REV_Subject(struct zx_sp_AuthzDecisionQuery_s* x);
void zx_sp_AuthzDecisionQuery_REV_Action(struct zx_sp_AuthzDecisionQuery_s* x);
void zx_sp_AuthzDecisionQuery_REV_Evidence(struct zx_sp_AuthzDecisionQuery_s* x);

#endif
/* -------------------------- sp_Extensions -------------------------- */
/* refby( zx_sp_ArtifactResolve_s zx_sp_SubjectQuery_s zx_xaspcd1_XACMLPolicyQuery_s zx_sp_AuthnRequest_s zx_sp_NameIDMappingResponse_s zx_xasp_XACMLPolicyQuery_s zx_sp_NameIDMappingRequest_s zx_xaspcd1_XACMLAuthzDecisionQuery_s zx_sp_AuthnQuery_s zx_xasp_XACMLAuthzDecisionQuery_s zx_sp_AuthzDecisionQuery_s zx_sp_AttributeQuery_s zx_sp_ManageNameIDResponse_s zx_sp_AssertionIDRequest_s zx_sp_LogoutRequest_s zx_sp_ArtifactResponse_s zx_sp_LogoutResponse_s zx_sp_Response_s zx_sp_ManageNameIDRequest_s ) */
#ifndef zx_sp_Extensions_EXT
#define zx_sp_Extensions_EXT
#endif

struct zx_sp_Extensions_s* zx_DEC_sp_Extensions(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_sp_Extensions_s* zx_NEW_sp_Extensions(struct zx_ctx* c);
void zx_FREE_sp_Extensions(struct zx_ctx* c, struct zx_sp_Extensions_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_sp_Extensions_s* zx_DEEP_CLONE_sp_Extensions(struct zx_ctx* c, struct zx_sp_Extensions_s* x, int dup_strs);
void zx_DUP_STRS_sp_Extensions(struct zx_ctx* c, struct zx_sp_Extensions_s* x);
int zx_WALK_SO_sp_Extensions(struct zx_ctx* c, struct zx_sp_Extensions_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_sp_Extensions(struct zx_ctx* c, struct zx_sp_Extensions_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_sp_Extensions(struct zx_ctx* c, struct zx_sp_Extensions_s* x);
int zx_LEN_WO_sp_Extensions(struct zx_ctx* c, struct zx_sp_Extensions_s* x);
char* zx_ENC_SO_sp_Extensions(struct zx_ctx* c, struct zx_sp_Extensions_s* x, char* p);
char* zx_ENC_WO_sp_Extensions(struct zx_ctx* c, struct zx_sp_Extensions_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_sp_Extensions(struct zx_ctx* c, struct zx_sp_Extensions_s* x);
struct zx_str* zx_EASY_ENC_WO_sp_Extensions(struct zx_ctx* c, struct zx_sp_Extensions_s* x);

struct zx_sp_Extensions_s {
  ZX_ELEM_EXT
  zx_sp_Extensions_EXT
};

#ifdef ZX_ENA_GETPUT










#endif
/* -------------------------- sp_IDPEntry -------------------------- */
/* refby( zx_sp_IDPList_s ) */
#ifndef zx_sp_IDPEntry_EXT
#define zx_sp_IDPEntry_EXT
#endif

struct zx_sp_IDPEntry_s* zx_DEC_sp_IDPEntry(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_sp_IDPEntry_s* zx_NEW_sp_IDPEntry(struct zx_ctx* c);
void zx_FREE_sp_IDPEntry(struct zx_ctx* c, struct zx_sp_IDPEntry_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_sp_IDPEntry_s* zx_DEEP_CLONE_sp_IDPEntry(struct zx_ctx* c, struct zx_sp_IDPEntry_s* x, int dup_strs);
void zx_DUP_STRS_sp_IDPEntry(struct zx_ctx* c, struct zx_sp_IDPEntry_s* x);
int zx_WALK_SO_sp_IDPEntry(struct zx_ctx* c, struct zx_sp_IDPEntry_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_sp_IDPEntry(struct zx_ctx* c, struct zx_sp_IDPEntry_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_sp_IDPEntry(struct zx_ctx* c, struct zx_sp_IDPEntry_s* x);
int zx_LEN_WO_sp_IDPEntry(struct zx_ctx* c, struct zx_sp_IDPEntry_s* x);
char* zx_ENC_SO_sp_IDPEntry(struct zx_ctx* c, struct zx_sp_IDPEntry_s* x, char* p);
char* zx_ENC_WO_sp_IDPEntry(struct zx_ctx* c, struct zx_sp_IDPEntry_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_sp_IDPEntry(struct zx_ctx* c, struct zx_sp_IDPEntry_s* x);
struct zx_str* zx_EASY_ENC_WO_sp_IDPEntry(struct zx_ctx* c, struct zx_sp_IDPEntry_s* x);

struct zx_sp_IDPEntry_s {
  ZX_ELEM_EXT
  zx_sp_IDPEntry_EXT
  struct zx_str* Loc;	/* {0,1} attribute xs:anyURI */
  struct zx_str* Name;	/* {0,1} attribute xs:anyURI */
  struct zx_str* ProviderID;	/* {1,1} attribute xs:anyURI */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_sp_IDPEntry_GET_Loc(struct zx_sp_IDPEntry_s* x);
struct zx_str* zx_sp_IDPEntry_GET_Name(struct zx_sp_IDPEntry_s* x);
struct zx_str* zx_sp_IDPEntry_GET_ProviderID(struct zx_sp_IDPEntry_s* x);





void zx_sp_IDPEntry_PUT_Loc(struct zx_sp_IDPEntry_s* x, struct zx_str* y);
void zx_sp_IDPEntry_PUT_Name(struct zx_sp_IDPEntry_s* x, struct zx_str* y);
void zx_sp_IDPEntry_PUT_ProviderID(struct zx_sp_IDPEntry_s* x, struct zx_str* y);





#endif
/* -------------------------- sp_IDPList -------------------------- */
/* refby( zx_sp_Scoping_s zx_ecp_Request_s ) */
#ifndef zx_sp_IDPList_EXT
#define zx_sp_IDPList_EXT
#endif

struct zx_sp_IDPList_s* zx_DEC_sp_IDPList(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_sp_IDPList_s* zx_NEW_sp_IDPList(struct zx_ctx* c);
void zx_FREE_sp_IDPList(struct zx_ctx* c, struct zx_sp_IDPList_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_sp_IDPList_s* zx_DEEP_CLONE_sp_IDPList(struct zx_ctx* c, struct zx_sp_IDPList_s* x, int dup_strs);
void zx_DUP_STRS_sp_IDPList(struct zx_ctx* c, struct zx_sp_IDPList_s* x);
int zx_WALK_SO_sp_IDPList(struct zx_ctx* c, struct zx_sp_IDPList_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_sp_IDPList(struct zx_ctx* c, struct zx_sp_IDPList_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_sp_IDPList(struct zx_ctx* c, struct zx_sp_IDPList_s* x);
int zx_LEN_WO_sp_IDPList(struct zx_ctx* c, struct zx_sp_IDPList_s* x);
char* zx_ENC_SO_sp_IDPList(struct zx_ctx* c, struct zx_sp_IDPList_s* x, char* p);
char* zx_ENC_WO_sp_IDPList(struct zx_ctx* c, struct zx_sp_IDPList_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_sp_IDPList(struct zx_ctx* c, struct zx_sp_IDPList_s* x);
struct zx_str* zx_EASY_ENC_WO_sp_IDPList(struct zx_ctx* c, struct zx_sp_IDPList_s* x);

struct zx_sp_IDPList_s {
  ZX_ELEM_EXT
  zx_sp_IDPList_EXT
  struct zx_sp_IDPEntry_s* IDPEntry;	/* {1,-1} nada */
  struct zx_elem_s* GetComplete;	/* {0,1} xs:anyURI */
};

#ifdef ZX_ENA_GETPUT

struct zx_sp_IDPEntry_s* zx_sp_IDPList_GET_IDPEntry(struct zx_sp_IDPList_s* x, int n);
struct zx_elem_s* zx_sp_IDPList_GET_GetComplete(struct zx_sp_IDPList_s* x, int n);

int zx_sp_IDPList_NUM_IDPEntry(struct zx_sp_IDPList_s* x);
int zx_sp_IDPList_NUM_GetComplete(struct zx_sp_IDPList_s* x);

struct zx_sp_IDPEntry_s* zx_sp_IDPList_POP_IDPEntry(struct zx_sp_IDPList_s* x);
struct zx_elem_s* zx_sp_IDPList_POP_GetComplete(struct zx_sp_IDPList_s* x);

void zx_sp_IDPList_PUSH_IDPEntry(struct zx_sp_IDPList_s* x, struct zx_sp_IDPEntry_s* y);
void zx_sp_IDPList_PUSH_GetComplete(struct zx_sp_IDPList_s* x, struct zx_elem_s* y);


void zx_sp_IDPList_PUT_IDPEntry(struct zx_sp_IDPList_s* x, int n, struct zx_sp_IDPEntry_s* y);
void zx_sp_IDPList_PUT_GetComplete(struct zx_sp_IDPList_s* x, int n, struct zx_elem_s* y);

void zx_sp_IDPList_ADD_IDPEntry(struct zx_sp_IDPList_s* x, int n, struct zx_sp_IDPEntry_s* z);
void zx_sp_IDPList_ADD_GetComplete(struct zx_sp_IDPList_s* x, int n, struct zx_elem_s* z);

void zx_sp_IDPList_DEL_IDPEntry(struct zx_sp_IDPList_s* x, int n);
void zx_sp_IDPList_DEL_GetComplete(struct zx_sp_IDPList_s* x, int n);

void zx_sp_IDPList_REV_IDPEntry(struct zx_sp_IDPList_s* x);
void zx_sp_IDPList_REV_GetComplete(struct zx_sp_IDPList_s* x);

#endif
/* -------------------------- sp_LogoutRequest -------------------------- */
/* refby( zx_e_Body_s ) */
#ifndef zx_sp_LogoutRequest_EXT
#define zx_sp_LogoutRequest_EXT
#endif

struct zx_sp_LogoutRequest_s* zx_DEC_sp_LogoutRequest(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_sp_LogoutRequest_s* zx_NEW_sp_LogoutRequest(struct zx_ctx* c);
void zx_FREE_sp_LogoutRequest(struct zx_ctx* c, struct zx_sp_LogoutRequest_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_sp_LogoutRequest_s* zx_DEEP_CLONE_sp_LogoutRequest(struct zx_ctx* c, struct zx_sp_LogoutRequest_s* x, int dup_strs);
void zx_DUP_STRS_sp_LogoutRequest(struct zx_ctx* c, struct zx_sp_LogoutRequest_s* x);
int zx_WALK_SO_sp_LogoutRequest(struct zx_ctx* c, struct zx_sp_LogoutRequest_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_sp_LogoutRequest(struct zx_ctx* c, struct zx_sp_LogoutRequest_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_sp_LogoutRequest(struct zx_ctx* c, struct zx_sp_LogoutRequest_s* x);
int zx_LEN_WO_sp_LogoutRequest(struct zx_ctx* c, struct zx_sp_LogoutRequest_s* x);
char* zx_ENC_SO_sp_LogoutRequest(struct zx_ctx* c, struct zx_sp_LogoutRequest_s* x, char* p);
char* zx_ENC_WO_sp_LogoutRequest(struct zx_ctx* c, struct zx_sp_LogoutRequest_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_sp_LogoutRequest(struct zx_ctx* c, struct zx_sp_LogoutRequest_s* x);
struct zx_str* zx_EASY_ENC_WO_sp_LogoutRequest(struct zx_ctx* c, struct zx_sp_LogoutRequest_s* x);

struct zx_sp_LogoutRequest_s {
  ZX_ELEM_EXT
  zx_sp_LogoutRequest_EXT
  struct zx_sa_Issuer_s* Issuer;	/* {0,1} nada */
  struct zx_ds_Signature_s* Signature;	/* {0,1} nada */
  struct zx_sp_Extensions_s* Extensions;	/* {0,1}  */
  struct zx_sa_BaseID_s* BaseID;	/* {0,1} nada */
  struct zx_sa_NameID_s* NameID;	/* {0,1} nada */
  struct zx_sa_EncryptedID_s* EncryptedID;	/* {0,1} nada */
  struct zx_elem_s* SessionIndex;	/* {0,-1} xs:string */
  struct zx_str* Consent;	/* {0,1} attribute xs:anyURI */
  struct zx_str* Destination;	/* {0,1} attribute xs:anyURI */
  struct zx_str* ID;	/* {1,1} attribute xs:anyURI */
  struct zx_str* IssueInstant;	/* {1,1} attribute xs:dateTime */
  struct zx_str* NotOnOrAfter;	/* {0,1} attribute xs:dateTime */
  struct zx_str* Reason;	/* {0,1} attribute xs:string */
  struct zx_str* Version;	/* {1,1} attribute xa:VersionType */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_sp_LogoutRequest_GET_Consent(struct zx_sp_LogoutRequest_s* x);
struct zx_str* zx_sp_LogoutRequest_GET_Destination(struct zx_sp_LogoutRequest_s* x);
struct zx_str* zx_sp_LogoutRequest_GET_ID(struct zx_sp_LogoutRequest_s* x);
struct zx_str* zx_sp_LogoutRequest_GET_IssueInstant(struct zx_sp_LogoutRequest_s* x);
struct zx_str* zx_sp_LogoutRequest_GET_NotOnOrAfter(struct zx_sp_LogoutRequest_s* x);
struct zx_str* zx_sp_LogoutRequest_GET_Reason(struct zx_sp_LogoutRequest_s* x);
struct zx_str* zx_sp_LogoutRequest_GET_Version(struct zx_sp_LogoutRequest_s* x);

struct zx_sa_Issuer_s* zx_sp_LogoutRequest_GET_Issuer(struct zx_sp_LogoutRequest_s* x, int n);
struct zx_ds_Signature_s* zx_sp_LogoutRequest_GET_Signature(struct zx_sp_LogoutRequest_s* x, int n);
struct zx_sp_Extensions_s* zx_sp_LogoutRequest_GET_Extensions(struct zx_sp_LogoutRequest_s* x, int n);
struct zx_sa_BaseID_s* zx_sp_LogoutRequest_GET_BaseID(struct zx_sp_LogoutRequest_s* x, int n);
struct zx_sa_NameID_s* zx_sp_LogoutRequest_GET_NameID(struct zx_sp_LogoutRequest_s* x, int n);
struct zx_sa_EncryptedID_s* zx_sp_LogoutRequest_GET_EncryptedID(struct zx_sp_LogoutRequest_s* x, int n);
struct zx_elem_s* zx_sp_LogoutRequest_GET_SessionIndex(struct zx_sp_LogoutRequest_s* x, int n);

int zx_sp_LogoutRequest_NUM_Issuer(struct zx_sp_LogoutRequest_s* x);
int zx_sp_LogoutRequest_NUM_Signature(struct zx_sp_LogoutRequest_s* x);
int zx_sp_LogoutRequest_NUM_Extensions(struct zx_sp_LogoutRequest_s* x);
int zx_sp_LogoutRequest_NUM_BaseID(struct zx_sp_LogoutRequest_s* x);
int zx_sp_LogoutRequest_NUM_NameID(struct zx_sp_LogoutRequest_s* x);
int zx_sp_LogoutRequest_NUM_EncryptedID(struct zx_sp_LogoutRequest_s* x);
int zx_sp_LogoutRequest_NUM_SessionIndex(struct zx_sp_LogoutRequest_s* x);

struct zx_sa_Issuer_s* zx_sp_LogoutRequest_POP_Issuer(struct zx_sp_LogoutRequest_s* x);
struct zx_ds_Signature_s* zx_sp_LogoutRequest_POP_Signature(struct zx_sp_LogoutRequest_s* x);
struct zx_sp_Extensions_s* zx_sp_LogoutRequest_POP_Extensions(struct zx_sp_LogoutRequest_s* x);
struct zx_sa_BaseID_s* zx_sp_LogoutRequest_POP_BaseID(struct zx_sp_LogoutRequest_s* x);
struct zx_sa_NameID_s* zx_sp_LogoutRequest_POP_NameID(struct zx_sp_LogoutRequest_s* x);
struct zx_sa_EncryptedID_s* zx_sp_LogoutRequest_POP_EncryptedID(struct zx_sp_LogoutRequest_s* x);
struct zx_elem_s* zx_sp_LogoutRequest_POP_SessionIndex(struct zx_sp_LogoutRequest_s* x);

void zx_sp_LogoutRequest_PUSH_Issuer(struct zx_sp_LogoutRequest_s* x, struct zx_sa_Issuer_s* y);
void zx_sp_LogoutRequest_PUSH_Signature(struct zx_sp_LogoutRequest_s* x, struct zx_ds_Signature_s* y);
void zx_sp_LogoutRequest_PUSH_Extensions(struct zx_sp_LogoutRequest_s* x, struct zx_sp_Extensions_s* y);
void zx_sp_LogoutRequest_PUSH_BaseID(struct zx_sp_LogoutRequest_s* x, struct zx_sa_BaseID_s* y);
void zx_sp_LogoutRequest_PUSH_NameID(struct zx_sp_LogoutRequest_s* x, struct zx_sa_NameID_s* y);
void zx_sp_LogoutRequest_PUSH_EncryptedID(struct zx_sp_LogoutRequest_s* x, struct zx_sa_EncryptedID_s* y);
void zx_sp_LogoutRequest_PUSH_SessionIndex(struct zx_sp_LogoutRequest_s* x, struct zx_elem_s* y);

void zx_sp_LogoutRequest_PUT_Consent(struct zx_sp_LogoutRequest_s* x, struct zx_str* y);
void zx_sp_LogoutRequest_PUT_Destination(struct zx_sp_LogoutRequest_s* x, struct zx_str* y);
void zx_sp_LogoutRequest_PUT_ID(struct zx_sp_LogoutRequest_s* x, struct zx_str* y);
void zx_sp_LogoutRequest_PUT_IssueInstant(struct zx_sp_LogoutRequest_s* x, struct zx_str* y);
void zx_sp_LogoutRequest_PUT_NotOnOrAfter(struct zx_sp_LogoutRequest_s* x, struct zx_str* y);
void zx_sp_LogoutRequest_PUT_Reason(struct zx_sp_LogoutRequest_s* x, struct zx_str* y);
void zx_sp_LogoutRequest_PUT_Version(struct zx_sp_LogoutRequest_s* x, struct zx_str* y);

void zx_sp_LogoutRequest_PUT_Issuer(struct zx_sp_LogoutRequest_s* x, int n, struct zx_sa_Issuer_s* y);
void zx_sp_LogoutRequest_PUT_Signature(struct zx_sp_LogoutRequest_s* x, int n, struct zx_ds_Signature_s* y);
void zx_sp_LogoutRequest_PUT_Extensions(struct zx_sp_LogoutRequest_s* x, int n, struct zx_sp_Extensions_s* y);
void zx_sp_LogoutRequest_PUT_BaseID(struct zx_sp_LogoutRequest_s* x, int n, struct zx_sa_BaseID_s* y);
void zx_sp_LogoutRequest_PUT_NameID(struct zx_sp_LogoutRequest_s* x, int n, struct zx_sa_NameID_s* y);
void zx_sp_LogoutRequest_PUT_EncryptedID(struct zx_sp_LogoutRequest_s* x, int n, struct zx_sa_EncryptedID_s* y);
void zx_sp_LogoutRequest_PUT_SessionIndex(struct zx_sp_LogoutRequest_s* x, int n, struct zx_elem_s* y);

void zx_sp_LogoutRequest_ADD_Issuer(struct zx_sp_LogoutRequest_s* x, int n, struct zx_sa_Issuer_s* z);
void zx_sp_LogoutRequest_ADD_Signature(struct zx_sp_LogoutRequest_s* x, int n, struct zx_ds_Signature_s* z);
void zx_sp_LogoutRequest_ADD_Extensions(struct zx_sp_LogoutRequest_s* x, int n, struct zx_sp_Extensions_s* z);
void zx_sp_LogoutRequest_ADD_BaseID(struct zx_sp_LogoutRequest_s* x, int n, struct zx_sa_BaseID_s* z);
void zx_sp_LogoutRequest_ADD_NameID(struct zx_sp_LogoutRequest_s* x, int n, struct zx_sa_NameID_s* z);
void zx_sp_LogoutRequest_ADD_EncryptedID(struct zx_sp_LogoutRequest_s* x, int n, struct zx_sa_EncryptedID_s* z);
void zx_sp_LogoutRequest_ADD_SessionIndex(struct zx_sp_LogoutRequest_s* x, int n, struct zx_elem_s* z);

void zx_sp_LogoutRequest_DEL_Issuer(struct zx_sp_LogoutRequest_s* x, int n);
void zx_sp_LogoutRequest_DEL_Signature(struct zx_sp_LogoutRequest_s* x, int n);
void zx_sp_LogoutRequest_DEL_Extensions(struct zx_sp_LogoutRequest_s* x, int n);
void zx_sp_LogoutRequest_DEL_BaseID(struct zx_sp_LogoutRequest_s* x, int n);
void zx_sp_LogoutRequest_DEL_NameID(struct zx_sp_LogoutRequest_s* x, int n);
void zx_sp_LogoutRequest_DEL_EncryptedID(struct zx_sp_LogoutRequest_s* x, int n);
void zx_sp_LogoutRequest_DEL_SessionIndex(struct zx_sp_LogoutRequest_s* x, int n);

void zx_sp_LogoutRequest_REV_Issuer(struct zx_sp_LogoutRequest_s* x);
void zx_sp_LogoutRequest_REV_Signature(struct zx_sp_LogoutRequest_s* x);
void zx_sp_LogoutRequest_REV_Extensions(struct zx_sp_LogoutRequest_s* x);
void zx_sp_LogoutRequest_REV_BaseID(struct zx_sp_LogoutRequest_s* x);
void zx_sp_LogoutRequest_REV_NameID(struct zx_sp_LogoutRequest_s* x);
void zx_sp_LogoutRequest_REV_EncryptedID(struct zx_sp_LogoutRequest_s* x);
void zx_sp_LogoutRequest_REV_SessionIndex(struct zx_sp_LogoutRequest_s* x);

#endif
/* -------------------------- sp_LogoutResponse -------------------------- */
/* refby( zx_e_Body_s ) */
#ifndef zx_sp_LogoutResponse_EXT
#define zx_sp_LogoutResponse_EXT
#endif

struct zx_sp_LogoutResponse_s* zx_DEC_sp_LogoutResponse(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_sp_LogoutResponse_s* zx_NEW_sp_LogoutResponse(struct zx_ctx* c);
void zx_FREE_sp_LogoutResponse(struct zx_ctx* c, struct zx_sp_LogoutResponse_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_sp_LogoutResponse_s* zx_DEEP_CLONE_sp_LogoutResponse(struct zx_ctx* c, struct zx_sp_LogoutResponse_s* x, int dup_strs);
void zx_DUP_STRS_sp_LogoutResponse(struct zx_ctx* c, struct zx_sp_LogoutResponse_s* x);
int zx_WALK_SO_sp_LogoutResponse(struct zx_ctx* c, struct zx_sp_LogoutResponse_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_sp_LogoutResponse(struct zx_ctx* c, struct zx_sp_LogoutResponse_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_sp_LogoutResponse(struct zx_ctx* c, struct zx_sp_LogoutResponse_s* x);
int zx_LEN_WO_sp_LogoutResponse(struct zx_ctx* c, struct zx_sp_LogoutResponse_s* x);
char* zx_ENC_SO_sp_LogoutResponse(struct zx_ctx* c, struct zx_sp_LogoutResponse_s* x, char* p);
char* zx_ENC_WO_sp_LogoutResponse(struct zx_ctx* c, struct zx_sp_LogoutResponse_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_sp_LogoutResponse(struct zx_ctx* c, struct zx_sp_LogoutResponse_s* x);
struct zx_str* zx_EASY_ENC_WO_sp_LogoutResponse(struct zx_ctx* c, struct zx_sp_LogoutResponse_s* x);

struct zx_sp_LogoutResponse_s {
  ZX_ELEM_EXT
  zx_sp_LogoutResponse_EXT
  struct zx_sa_Issuer_s* Issuer;	/* {0,1} nada */
  struct zx_ds_Signature_s* Signature;	/* {0,1} nada */
  struct zx_sp_Extensions_s* Extensions;	/* {0,1}  */
  struct zx_sp_Status_s* Status;	/* {1,1} nada */
  struct zx_str* Consent;	/* {0,1} attribute xs:anyURI */
  struct zx_str* Destination;	/* {0,1} attribute xs:anyURI */
  struct zx_str* ID;	/* {1,1} attribute xs:anyURI */
  struct zx_str* InResponseTo;	/* {0,1} attribute xs:NCName */
  struct zx_str* IssueInstant;	/* {1,1} attribute xs:dateTime */
  struct zx_str* Version;	/* {1,1} attribute xa:VersionType */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_sp_LogoutResponse_GET_Consent(struct zx_sp_LogoutResponse_s* x);
struct zx_str* zx_sp_LogoutResponse_GET_Destination(struct zx_sp_LogoutResponse_s* x);
struct zx_str* zx_sp_LogoutResponse_GET_ID(struct zx_sp_LogoutResponse_s* x);
struct zx_str* zx_sp_LogoutResponse_GET_InResponseTo(struct zx_sp_LogoutResponse_s* x);
struct zx_str* zx_sp_LogoutResponse_GET_IssueInstant(struct zx_sp_LogoutResponse_s* x);
struct zx_str* zx_sp_LogoutResponse_GET_Version(struct zx_sp_LogoutResponse_s* x);

struct zx_sa_Issuer_s* zx_sp_LogoutResponse_GET_Issuer(struct zx_sp_LogoutResponse_s* x, int n);
struct zx_ds_Signature_s* zx_sp_LogoutResponse_GET_Signature(struct zx_sp_LogoutResponse_s* x, int n);
struct zx_sp_Extensions_s* zx_sp_LogoutResponse_GET_Extensions(struct zx_sp_LogoutResponse_s* x, int n);
struct zx_sp_Status_s* zx_sp_LogoutResponse_GET_Status(struct zx_sp_LogoutResponse_s* x, int n);

int zx_sp_LogoutResponse_NUM_Issuer(struct zx_sp_LogoutResponse_s* x);
int zx_sp_LogoutResponse_NUM_Signature(struct zx_sp_LogoutResponse_s* x);
int zx_sp_LogoutResponse_NUM_Extensions(struct zx_sp_LogoutResponse_s* x);
int zx_sp_LogoutResponse_NUM_Status(struct zx_sp_LogoutResponse_s* x);

struct zx_sa_Issuer_s* zx_sp_LogoutResponse_POP_Issuer(struct zx_sp_LogoutResponse_s* x);
struct zx_ds_Signature_s* zx_sp_LogoutResponse_POP_Signature(struct zx_sp_LogoutResponse_s* x);
struct zx_sp_Extensions_s* zx_sp_LogoutResponse_POP_Extensions(struct zx_sp_LogoutResponse_s* x);
struct zx_sp_Status_s* zx_sp_LogoutResponse_POP_Status(struct zx_sp_LogoutResponse_s* x);

void zx_sp_LogoutResponse_PUSH_Issuer(struct zx_sp_LogoutResponse_s* x, struct zx_sa_Issuer_s* y);
void zx_sp_LogoutResponse_PUSH_Signature(struct zx_sp_LogoutResponse_s* x, struct zx_ds_Signature_s* y);
void zx_sp_LogoutResponse_PUSH_Extensions(struct zx_sp_LogoutResponse_s* x, struct zx_sp_Extensions_s* y);
void zx_sp_LogoutResponse_PUSH_Status(struct zx_sp_LogoutResponse_s* x, struct zx_sp_Status_s* y);

void zx_sp_LogoutResponse_PUT_Consent(struct zx_sp_LogoutResponse_s* x, struct zx_str* y);
void zx_sp_LogoutResponse_PUT_Destination(struct zx_sp_LogoutResponse_s* x, struct zx_str* y);
void zx_sp_LogoutResponse_PUT_ID(struct zx_sp_LogoutResponse_s* x, struct zx_str* y);
void zx_sp_LogoutResponse_PUT_InResponseTo(struct zx_sp_LogoutResponse_s* x, struct zx_str* y);
void zx_sp_LogoutResponse_PUT_IssueInstant(struct zx_sp_LogoutResponse_s* x, struct zx_str* y);
void zx_sp_LogoutResponse_PUT_Version(struct zx_sp_LogoutResponse_s* x, struct zx_str* y);

void zx_sp_LogoutResponse_PUT_Issuer(struct zx_sp_LogoutResponse_s* x, int n, struct zx_sa_Issuer_s* y);
void zx_sp_LogoutResponse_PUT_Signature(struct zx_sp_LogoutResponse_s* x, int n, struct zx_ds_Signature_s* y);
void zx_sp_LogoutResponse_PUT_Extensions(struct zx_sp_LogoutResponse_s* x, int n, struct zx_sp_Extensions_s* y);
void zx_sp_LogoutResponse_PUT_Status(struct zx_sp_LogoutResponse_s* x, int n, struct zx_sp_Status_s* y);

void zx_sp_LogoutResponse_ADD_Issuer(struct zx_sp_LogoutResponse_s* x, int n, struct zx_sa_Issuer_s* z);
void zx_sp_LogoutResponse_ADD_Signature(struct zx_sp_LogoutResponse_s* x, int n, struct zx_ds_Signature_s* z);
void zx_sp_LogoutResponse_ADD_Extensions(struct zx_sp_LogoutResponse_s* x, int n, struct zx_sp_Extensions_s* z);
void zx_sp_LogoutResponse_ADD_Status(struct zx_sp_LogoutResponse_s* x, int n, struct zx_sp_Status_s* z);

void zx_sp_LogoutResponse_DEL_Issuer(struct zx_sp_LogoutResponse_s* x, int n);
void zx_sp_LogoutResponse_DEL_Signature(struct zx_sp_LogoutResponse_s* x, int n);
void zx_sp_LogoutResponse_DEL_Extensions(struct zx_sp_LogoutResponse_s* x, int n);
void zx_sp_LogoutResponse_DEL_Status(struct zx_sp_LogoutResponse_s* x, int n);

void zx_sp_LogoutResponse_REV_Issuer(struct zx_sp_LogoutResponse_s* x);
void zx_sp_LogoutResponse_REV_Signature(struct zx_sp_LogoutResponse_s* x);
void zx_sp_LogoutResponse_REV_Extensions(struct zx_sp_LogoutResponse_s* x);
void zx_sp_LogoutResponse_REV_Status(struct zx_sp_LogoutResponse_s* x);

#endif
/* -------------------------- sp_ManageNameIDRequest -------------------------- */
/* refby( zx_e_Body_s ) */
#ifndef zx_sp_ManageNameIDRequest_EXT
#define zx_sp_ManageNameIDRequest_EXT
#endif

struct zx_sp_ManageNameIDRequest_s* zx_DEC_sp_ManageNameIDRequest(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_sp_ManageNameIDRequest_s* zx_NEW_sp_ManageNameIDRequest(struct zx_ctx* c);
void zx_FREE_sp_ManageNameIDRequest(struct zx_ctx* c, struct zx_sp_ManageNameIDRequest_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_sp_ManageNameIDRequest_s* zx_DEEP_CLONE_sp_ManageNameIDRequest(struct zx_ctx* c, struct zx_sp_ManageNameIDRequest_s* x, int dup_strs);
void zx_DUP_STRS_sp_ManageNameIDRequest(struct zx_ctx* c, struct zx_sp_ManageNameIDRequest_s* x);
int zx_WALK_SO_sp_ManageNameIDRequest(struct zx_ctx* c, struct zx_sp_ManageNameIDRequest_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_sp_ManageNameIDRequest(struct zx_ctx* c, struct zx_sp_ManageNameIDRequest_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_sp_ManageNameIDRequest(struct zx_ctx* c, struct zx_sp_ManageNameIDRequest_s* x);
int zx_LEN_WO_sp_ManageNameIDRequest(struct zx_ctx* c, struct zx_sp_ManageNameIDRequest_s* x);
char* zx_ENC_SO_sp_ManageNameIDRequest(struct zx_ctx* c, struct zx_sp_ManageNameIDRequest_s* x, char* p);
char* zx_ENC_WO_sp_ManageNameIDRequest(struct zx_ctx* c, struct zx_sp_ManageNameIDRequest_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_sp_ManageNameIDRequest(struct zx_ctx* c, struct zx_sp_ManageNameIDRequest_s* x);
struct zx_str* zx_EASY_ENC_WO_sp_ManageNameIDRequest(struct zx_ctx* c, struct zx_sp_ManageNameIDRequest_s* x);

struct zx_sp_ManageNameIDRequest_s {
  ZX_ELEM_EXT
  zx_sp_ManageNameIDRequest_EXT
  struct zx_sa_Issuer_s* Issuer;	/* {0,1} nada */
  struct zx_ds_Signature_s* Signature;	/* {0,1} nada */
  struct zx_sp_Extensions_s* Extensions;	/* {0,1}  */
  struct zx_sa_NameID_s* NameID;	/* {0,1} nada */
  struct zx_sa_EncryptedID_s* EncryptedID;	/* {0,1} nada */
  struct zx_elem_s* NewID;	/* {0,1} xs:string */
  struct zx_sp_NewEncryptedID_s* NewEncryptedID;	/* {0,1} nada */
  struct zx_elem_s* Terminate;	/* {0,1} sp:TerminateType */
  struct zx_str* Consent;	/* {0,1} attribute xs:anyURI */
  struct zx_str* Destination;	/* {0,1} attribute xs:anyURI */
  struct zx_str* ID;	/* {1,1} attribute xs:anyURI */
  struct zx_str* IssueInstant;	/* {1,1} attribute xs:dateTime */
  struct zx_str* Version;	/* {1,1} attribute xa:VersionType */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_sp_ManageNameIDRequest_GET_Consent(struct zx_sp_ManageNameIDRequest_s* x);
struct zx_str* zx_sp_ManageNameIDRequest_GET_Destination(struct zx_sp_ManageNameIDRequest_s* x);
struct zx_str* zx_sp_ManageNameIDRequest_GET_ID(struct zx_sp_ManageNameIDRequest_s* x);
struct zx_str* zx_sp_ManageNameIDRequest_GET_IssueInstant(struct zx_sp_ManageNameIDRequest_s* x);
struct zx_str* zx_sp_ManageNameIDRequest_GET_Version(struct zx_sp_ManageNameIDRequest_s* x);

struct zx_sa_Issuer_s* zx_sp_ManageNameIDRequest_GET_Issuer(struct zx_sp_ManageNameIDRequest_s* x, int n);
struct zx_ds_Signature_s* zx_sp_ManageNameIDRequest_GET_Signature(struct zx_sp_ManageNameIDRequest_s* x, int n);
struct zx_sp_Extensions_s* zx_sp_ManageNameIDRequest_GET_Extensions(struct zx_sp_ManageNameIDRequest_s* x, int n);
struct zx_sa_NameID_s* zx_sp_ManageNameIDRequest_GET_NameID(struct zx_sp_ManageNameIDRequest_s* x, int n);
struct zx_sa_EncryptedID_s* zx_sp_ManageNameIDRequest_GET_EncryptedID(struct zx_sp_ManageNameIDRequest_s* x, int n);
struct zx_elem_s* zx_sp_ManageNameIDRequest_GET_NewID(struct zx_sp_ManageNameIDRequest_s* x, int n);
struct zx_sp_NewEncryptedID_s* zx_sp_ManageNameIDRequest_GET_NewEncryptedID(struct zx_sp_ManageNameIDRequest_s* x, int n);
struct zx_elem_s* zx_sp_ManageNameIDRequest_GET_Terminate(struct zx_sp_ManageNameIDRequest_s* x, int n);

int zx_sp_ManageNameIDRequest_NUM_Issuer(struct zx_sp_ManageNameIDRequest_s* x);
int zx_sp_ManageNameIDRequest_NUM_Signature(struct zx_sp_ManageNameIDRequest_s* x);
int zx_sp_ManageNameIDRequest_NUM_Extensions(struct zx_sp_ManageNameIDRequest_s* x);
int zx_sp_ManageNameIDRequest_NUM_NameID(struct zx_sp_ManageNameIDRequest_s* x);
int zx_sp_ManageNameIDRequest_NUM_EncryptedID(struct zx_sp_ManageNameIDRequest_s* x);
int zx_sp_ManageNameIDRequest_NUM_NewID(struct zx_sp_ManageNameIDRequest_s* x);
int zx_sp_ManageNameIDRequest_NUM_NewEncryptedID(struct zx_sp_ManageNameIDRequest_s* x);
int zx_sp_ManageNameIDRequest_NUM_Terminate(struct zx_sp_ManageNameIDRequest_s* x);

struct zx_sa_Issuer_s* zx_sp_ManageNameIDRequest_POP_Issuer(struct zx_sp_ManageNameIDRequest_s* x);
struct zx_ds_Signature_s* zx_sp_ManageNameIDRequest_POP_Signature(struct zx_sp_ManageNameIDRequest_s* x);
struct zx_sp_Extensions_s* zx_sp_ManageNameIDRequest_POP_Extensions(struct zx_sp_ManageNameIDRequest_s* x);
struct zx_sa_NameID_s* zx_sp_ManageNameIDRequest_POP_NameID(struct zx_sp_ManageNameIDRequest_s* x);
struct zx_sa_EncryptedID_s* zx_sp_ManageNameIDRequest_POP_EncryptedID(struct zx_sp_ManageNameIDRequest_s* x);
struct zx_elem_s* zx_sp_ManageNameIDRequest_POP_NewID(struct zx_sp_ManageNameIDRequest_s* x);
struct zx_sp_NewEncryptedID_s* zx_sp_ManageNameIDRequest_POP_NewEncryptedID(struct zx_sp_ManageNameIDRequest_s* x);
struct zx_elem_s* zx_sp_ManageNameIDRequest_POP_Terminate(struct zx_sp_ManageNameIDRequest_s* x);

void zx_sp_ManageNameIDRequest_PUSH_Issuer(struct zx_sp_ManageNameIDRequest_s* x, struct zx_sa_Issuer_s* y);
void zx_sp_ManageNameIDRequest_PUSH_Signature(struct zx_sp_ManageNameIDRequest_s* x, struct zx_ds_Signature_s* y);
void zx_sp_ManageNameIDRequest_PUSH_Extensions(struct zx_sp_ManageNameIDRequest_s* x, struct zx_sp_Extensions_s* y);
void zx_sp_ManageNameIDRequest_PUSH_NameID(struct zx_sp_ManageNameIDRequest_s* x, struct zx_sa_NameID_s* y);
void zx_sp_ManageNameIDRequest_PUSH_EncryptedID(struct zx_sp_ManageNameIDRequest_s* x, struct zx_sa_EncryptedID_s* y);
void zx_sp_ManageNameIDRequest_PUSH_NewID(struct zx_sp_ManageNameIDRequest_s* x, struct zx_elem_s* y);
void zx_sp_ManageNameIDRequest_PUSH_NewEncryptedID(struct zx_sp_ManageNameIDRequest_s* x, struct zx_sp_NewEncryptedID_s* y);
void zx_sp_ManageNameIDRequest_PUSH_Terminate(struct zx_sp_ManageNameIDRequest_s* x, struct zx_elem_s* y);

void zx_sp_ManageNameIDRequest_PUT_Consent(struct zx_sp_ManageNameIDRequest_s* x, struct zx_str* y);
void zx_sp_ManageNameIDRequest_PUT_Destination(struct zx_sp_ManageNameIDRequest_s* x, struct zx_str* y);
void zx_sp_ManageNameIDRequest_PUT_ID(struct zx_sp_ManageNameIDRequest_s* x, struct zx_str* y);
void zx_sp_ManageNameIDRequest_PUT_IssueInstant(struct zx_sp_ManageNameIDRequest_s* x, struct zx_str* y);
void zx_sp_ManageNameIDRequest_PUT_Version(struct zx_sp_ManageNameIDRequest_s* x, struct zx_str* y);

void zx_sp_ManageNameIDRequest_PUT_Issuer(struct zx_sp_ManageNameIDRequest_s* x, int n, struct zx_sa_Issuer_s* y);
void zx_sp_ManageNameIDRequest_PUT_Signature(struct zx_sp_ManageNameIDRequest_s* x, int n, struct zx_ds_Signature_s* y);
void zx_sp_ManageNameIDRequest_PUT_Extensions(struct zx_sp_ManageNameIDRequest_s* x, int n, struct zx_sp_Extensions_s* y);
void zx_sp_ManageNameIDRequest_PUT_NameID(struct zx_sp_ManageNameIDRequest_s* x, int n, struct zx_sa_NameID_s* y);
void zx_sp_ManageNameIDRequest_PUT_EncryptedID(struct zx_sp_ManageNameIDRequest_s* x, int n, struct zx_sa_EncryptedID_s* y);
void zx_sp_ManageNameIDRequest_PUT_NewID(struct zx_sp_ManageNameIDRequest_s* x, int n, struct zx_elem_s* y);
void zx_sp_ManageNameIDRequest_PUT_NewEncryptedID(struct zx_sp_ManageNameIDRequest_s* x, int n, struct zx_sp_NewEncryptedID_s* y);
void zx_sp_ManageNameIDRequest_PUT_Terminate(struct zx_sp_ManageNameIDRequest_s* x, int n, struct zx_elem_s* y);

void zx_sp_ManageNameIDRequest_ADD_Issuer(struct zx_sp_ManageNameIDRequest_s* x, int n, struct zx_sa_Issuer_s* z);
void zx_sp_ManageNameIDRequest_ADD_Signature(struct zx_sp_ManageNameIDRequest_s* x, int n, struct zx_ds_Signature_s* z);
void zx_sp_ManageNameIDRequest_ADD_Extensions(struct zx_sp_ManageNameIDRequest_s* x, int n, struct zx_sp_Extensions_s* z);
void zx_sp_ManageNameIDRequest_ADD_NameID(struct zx_sp_ManageNameIDRequest_s* x, int n, struct zx_sa_NameID_s* z);
void zx_sp_ManageNameIDRequest_ADD_EncryptedID(struct zx_sp_ManageNameIDRequest_s* x, int n, struct zx_sa_EncryptedID_s* z);
void zx_sp_ManageNameIDRequest_ADD_NewID(struct zx_sp_ManageNameIDRequest_s* x, int n, struct zx_elem_s* z);
void zx_sp_ManageNameIDRequest_ADD_NewEncryptedID(struct zx_sp_ManageNameIDRequest_s* x, int n, struct zx_sp_NewEncryptedID_s* z);
void zx_sp_ManageNameIDRequest_ADD_Terminate(struct zx_sp_ManageNameIDRequest_s* x, int n, struct zx_elem_s* z);

void zx_sp_ManageNameIDRequest_DEL_Issuer(struct zx_sp_ManageNameIDRequest_s* x, int n);
void zx_sp_ManageNameIDRequest_DEL_Signature(struct zx_sp_ManageNameIDRequest_s* x, int n);
void zx_sp_ManageNameIDRequest_DEL_Extensions(struct zx_sp_ManageNameIDRequest_s* x, int n);
void zx_sp_ManageNameIDRequest_DEL_NameID(struct zx_sp_ManageNameIDRequest_s* x, int n);
void zx_sp_ManageNameIDRequest_DEL_EncryptedID(struct zx_sp_ManageNameIDRequest_s* x, int n);
void zx_sp_ManageNameIDRequest_DEL_NewID(struct zx_sp_ManageNameIDRequest_s* x, int n);
void zx_sp_ManageNameIDRequest_DEL_NewEncryptedID(struct zx_sp_ManageNameIDRequest_s* x, int n);
void zx_sp_ManageNameIDRequest_DEL_Terminate(struct zx_sp_ManageNameIDRequest_s* x, int n);

void zx_sp_ManageNameIDRequest_REV_Issuer(struct zx_sp_ManageNameIDRequest_s* x);
void zx_sp_ManageNameIDRequest_REV_Signature(struct zx_sp_ManageNameIDRequest_s* x);
void zx_sp_ManageNameIDRequest_REV_Extensions(struct zx_sp_ManageNameIDRequest_s* x);
void zx_sp_ManageNameIDRequest_REV_NameID(struct zx_sp_ManageNameIDRequest_s* x);
void zx_sp_ManageNameIDRequest_REV_EncryptedID(struct zx_sp_ManageNameIDRequest_s* x);
void zx_sp_ManageNameIDRequest_REV_NewID(struct zx_sp_ManageNameIDRequest_s* x);
void zx_sp_ManageNameIDRequest_REV_NewEncryptedID(struct zx_sp_ManageNameIDRequest_s* x);
void zx_sp_ManageNameIDRequest_REV_Terminate(struct zx_sp_ManageNameIDRequest_s* x);

#endif
/* -------------------------- sp_ManageNameIDResponse -------------------------- */
/* refby( zx_e_Body_s ) */
#ifndef zx_sp_ManageNameIDResponse_EXT
#define zx_sp_ManageNameIDResponse_EXT
#endif

struct zx_sp_ManageNameIDResponse_s* zx_DEC_sp_ManageNameIDResponse(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_sp_ManageNameIDResponse_s* zx_NEW_sp_ManageNameIDResponse(struct zx_ctx* c);
void zx_FREE_sp_ManageNameIDResponse(struct zx_ctx* c, struct zx_sp_ManageNameIDResponse_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_sp_ManageNameIDResponse_s* zx_DEEP_CLONE_sp_ManageNameIDResponse(struct zx_ctx* c, struct zx_sp_ManageNameIDResponse_s* x, int dup_strs);
void zx_DUP_STRS_sp_ManageNameIDResponse(struct zx_ctx* c, struct zx_sp_ManageNameIDResponse_s* x);
int zx_WALK_SO_sp_ManageNameIDResponse(struct zx_ctx* c, struct zx_sp_ManageNameIDResponse_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_sp_ManageNameIDResponse(struct zx_ctx* c, struct zx_sp_ManageNameIDResponse_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_sp_ManageNameIDResponse(struct zx_ctx* c, struct zx_sp_ManageNameIDResponse_s* x);
int zx_LEN_WO_sp_ManageNameIDResponse(struct zx_ctx* c, struct zx_sp_ManageNameIDResponse_s* x);
char* zx_ENC_SO_sp_ManageNameIDResponse(struct zx_ctx* c, struct zx_sp_ManageNameIDResponse_s* x, char* p);
char* zx_ENC_WO_sp_ManageNameIDResponse(struct zx_ctx* c, struct zx_sp_ManageNameIDResponse_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_sp_ManageNameIDResponse(struct zx_ctx* c, struct zx_sp_ManageNameIDResponse_s* x);
struct zx_str* zx_EASY_ENC_WO_sp_ManageNameIDResponse(struct zx_ctx* c, struct zx_sp_ManageNameIDResponse_s* x);

struct zx_sp_ManageNameIDResponse_s {
  ZX_ELEM_EXT
  zx_sp_ManageNameIDResponse_EXT
  struct zx_sa_Issuer_s* Issuer;	/* {0,1} nada */
  struct zx_ds_Signature_s* Signature;	/* {0,1} nada */
  struct zx_sp_Extensions_s* Extensions;	/* {0,1}  */
  struct zx_sp_Status_s* Status;	/* {1,1} nada */
  struct zx_str* Consent;	/* {0,1} attribute xs:anyURI */
  struct zx_str* Destination;	/* {0,1} attribute xs:anyURI */
  struct zx_str* ID;	/* {1,1} attribute xs:anyURI */
  struct zx_str* InResponseTo;	/* {0,1} attribute xs:NCName */
  struct zx_str* IssueInstant;	/* {1,1} attribute xs:dateTime */
  struct zx_str* Version;	/* {1,1} attribute xa:VersionType */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_sp_ManageNameIDResponse_GET_Consent(struct zx_sp_ManageNameIDResponse_s* x);
struct zx_str* zx_sp_ManageNameIDResponse_GET_Destination(struct zx_sp_ManageNameIDResponse_s* x);
struct zx_str* zx_sp_ManageNameIDResponse_GET_ID(struct zx_sp_ManageNameIDResponse_s* x);
struct zx_str* zx_sp_ManageNameIDResponse_GET_InResponseTo(struct zx_sp_ManageNameIDResponse_s* x);
struct zx_str* zx_sp_ManageNameIDResponse_GET_IssueInstant(struct zx_sp_ManageNameIDResponse_s* x);
struct zx_str* zx_sp_ManageNameIDResponse_GET_Version(struct zx_sp_ManageNameIDResponse_s* x);

struct zx_sa_Issuer_s* zx_sp_ManageNameIDResponse_GET_Issuer(struct zx_sp_ManageNameIDResponse_s* x, int n);
struct zx_ds_Signature_s* zx_sp_ManageNameIDResponse_GET_Signature(struct zx_sp_ManageNameIDResponse_s* x, int n);
struct zx_sp_Extensions_s* zx_sp_ManageNameIDResponse_GET_Extensions(struct zx_sp_ManageNameIDResponse_s* x, int n);
struct zx_sp_Status_s* zx_sp_ManageNameIDResponse_GET_Status(struct zx_sp_ManageNameIDResponse_s* x, int n);

int zx_sp_ManageNameIDResponse_NUM_Issuer(struct zx_sp_ManageNameIDResponse_s* x);
int zx_sp_ManageNameIDResponse_NUM_Signature(struct zx_sp_ManageNameIDResponse_s* x);
int zx_sp_ManageNameIDResponse_NUM_Extensions(struct zx_sp_ManageNameIDResponse_s* x);
int zx_sp_ManageNameIDResponse_NUM_Status(struct zx_sp_ManageNameIDResponse_s* x);

struct zx_sa_Issuer_s* zx_sp_ManageNameIDResponse_POP_Issuer(struct zx_sp_ManageNameIDResponse_s* x);
struct zx_ds_Signature_s* zx_sp_ManageNameIDResponse_POP_Signature(struct zx_sp_ManageNameIDResponse_s* x);
struct zx_sp_Extensions_s* zx_sp_ManageNameIDResponse_POP_Extensions(struct zx_sp_ManageNameIDResponse_s* x);
struct zx_sp_Status_s* zx_sp_ManageNameIDResponse_POP_Status(struct zx_sp_ManageNameIDResponse_s* x);

void zx_sp_ManageNameIDResponse_PUSH_Issuer(struct zx_sp_ManageNameIDResponse_s* x, struct zx_sa_Issuer_s* y);
void zx_sp_ManageNameIDResponse_PUSH_Signature(struct zx_sp_ManageNameIDResponse_s* x, struct zx_ds_Signature_s* y);
void zx_sp_ManageNameIDResponse_PUSH_Extensions(struct zx_sp_ManageNameIDResponse_s* x, struct zx_sp_Extensions_s* y);
void zx_sp_ManageNameIDResponse_PUSH_Status(struct zx_sp_ManageNameIDResponse_s* x, struct zx_sp_Status_s* y);

void zx_sp_ManageNameIDResponse_PUT_Consent(struct zx_sp_ManageNameIDResponse_s* x, struct zx_str* y);
void zx_sp_ManageNameIDResponse_PUT_Destination(struct zx_sp_ManageNameIDResponse_s* x, struct zx_str* y);
void zx_sp_ManageNameIDResponse_PUT_ID(struct zx_sp_ManageNameIDResponse_s* x, struct zx_str* y);
void zx_sp_ManageNameIDResponse_PUT_InResponseTo(struct zx_sp_ManageNameIDResponse_s* x, struct zx_str* y);
void zx_sp_ManageNameIDResponse_PUT_IssueInstant(struct zx_sp_ManageNameIDResponse_s* x, struct zx_str* y);
void zx_sp_ManageNameIDResponse_PUT_Version(struct zx_sp_ManageNameIDResponse_s* x, struct zx_str* y);

void zx_sp_ManageNameIDResponse_PUT_Issuer(struct zx_sp_ManageNameIDResponse_s* x, int n, struct zx_sa_Issuer_s* y);
void zx_sp_ManageNameIDResponse_PUT_Signature(struct zx_sp_ManageNameIDResponse_s* x, int n, struct zx_ds_Signature_s* y);
void zx_sp_ManageNameIDResponse_PUT_Extensions(struct zx_sp_ManageNameIDResponse_s* x, int n, struct zx_sp_Extensions_s* y);
void zx_sp_ManageNameIDResponse_PUT_Status(struct zx_sp_ManageNameIDResponse_s* x, int n, struct zx_sp_Status_s* y);

void zx_sp_ManageNameIDResponse_ADD_Issuer(struct zx_sp_ManageNameIDResponse_s* x, int n, struct zx_sa_Issuer_s* z);
void zx_sp_ManageNameIDResponse_ADD_Signature(struct zx_sp_ManageNameIDResponse_s* x, int n, struct zx_ds_Signature_s* z);
void zx_sp_ManageNameIDResponse_ADD_Extensions(struct zx_sp_ManageNameIDResponse_s* x, int n, struct zx_sp_Extensions_s* z);
void zx_sp_ManageNameIDResponse_ADD_Status(struct zx_sp_ManageNameIDResponse_s* x, int n, struct zx_sp_Status_s* z);

void zx_sp_ManageNameIDResponse_DEL_Issuer(struct zx_sp_ManageNameIDResponse_s* x, int n);
void zx_sp_ManageNameIDResponse_DEL_Signature(struct zx_sp_ManageNameIDResponse_s* x, int n);
void zx_sp_ManageNameIDResponse_DEL_Extensions(struct zx_sp_ManageNameIDResponse_s* x, int n);
void zx_sp_ManageNameIDResponse_DEL_Status(struct zx_sp_ManageNameIDResponse_s* x, int n);

void zx_sp_ManageNameIDResponse_REV_Issuer(struct zx_sp_ManageNameIDResponse_s* x);
void zx_sp_ManageNameIDResponse_REV_Signature(struct zx_sp_ManageNameIDResponse_s* x);
void zx_sp_ManageNameIDResponse_REV_Extensions(struct zx_sp_ManageNameIDResponse_s* x);
void zx_sp_ManageNameIDResponse_REV_Status(struct zx_sp_ManageNameIDResponse_s* x);

#endif
/* -------------------------- sp_NameIDMappingRequest -------------------------- */
/* refby( zx_e_Body_s ) */
#ifndef zx_sp_NameIDMappingRequest_EXT
#define zx_sp_NameIDMappingRequest_EXT
#endif

struct zx_sp_NameIDMappingRequest_s* zx_DEC_sp_NameIDMappingRequest(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_sp_NameIDMappingRequest_s* zx_NEW_sp_NameIDMappingRequest(struct zx_ctx* c);
void zx_FREE_sp_NameIDMappingRequest(struct zx_ctx* c, struct zx_sp_NameIDMappingRequest_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_sp_NameIDMappingRequest_s* zx_DEEP_CLONE_sp_NameIDMappingRequest(struct zx_ctx* c, struct zx_sp_NameIDMappingRequest_s* x, int dup_strs);
void zx_DUP_STRS_sp_NameIDMappingRequest(struct zx_ctx* c, struct zx_sp_NameIDMappingRequest_s* x);
int zx_WALK_SO_sp_NameIDMappingRequest(struct zx_ctx* c, struct zx_sp_NameIDMappingRequest_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_sp_NameIDMappingRequest(struct zx_ctx* c, struct zx_sp_NameIDMappingRequest_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_sp_NameIDMappingRequest(struct zx_ctx* c, struct zx_sp_NameIDMappingRequest_s* x);
int zx_LEN_WO_sp_NameIDMappingRequest(struct zx_ctx* c, struct zx_sp_NameIDMappingRequest_s* x);
char* zx_ENC_SO_sp_NameIDMappingRequest(struct zx_ctx* c, struct zx_sp_NameIDMappingRequest_s* x, char* p);
char* zx_ENC_WO_sp_NameIDMappingRequest(struct zx_ctx* c, struct zx_sp_NameIDMappingRequest_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_sp_NameIDMappingRequest(struct zx_ctx* c, struct zx_sp_NameIDMappingRequest_s* x);
struct zx_str* zx_EASY_ENC_WO_sp_NameIDMappingRequest(struct zx_ctx* c, struct zx_sp_NameIDMappingRequest_s* x);

struct zx_sp_NameIDMappingRequest_s {
  ZX_ELEM_EXT
  zx_sp_NameIDMappingRequest_EXT
  struct zx_sa_Issuer_s* Issuer;	/* {0,1} nada */
  struct zx_ds_Signature_s* Signature;	/* {0,1} nada */
  struct zx_sp_Extensions_s* Extensions;	/* {0,1}  */
  struct zx_sa_BaseID_s* BaseID;	/* {0,1} nada */
  struct zx_sa_NameID_s* NameID;	/* {0,1} nada */
  struct zx_sa_EncryptedID_s* EncryptedID;	/* {0,1} nada */
  struct zx_sp_NameIDPolicy_s* NameIDPolicy;	/* {1,1} nada */
  struct zx_str* Consent;	/* {0,1} attribute xs:anyURI */
  struct zx_str* Destination;	/* {0,1} attribute xs:anyURI */
  struct zx_str* ID;	/* {1,1} attribute xs:anyURI */
  struct zx_str* IssueInstant;	/* {1,1} attribute xs:dateTime */
  struct zx_str* Version;	/* {1,1} attribute xa:VersionType */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_sp_NameIDMappingRequest_GET_Consent(struct zx_sp_NameIDMappingRequest_s* x);
struct zx_str* zx_sp_NameIDMappingRequest_GET_Destination(struct zx_sp_NameIDMappingRequest_s* x);
struct zx_str* zx_sp_NameIDMappingRequest_GET_ID(struct zx_sp_NameIDMappingRequest_s* x);
struct zx_str* zx_sp_NameIDMappingRequest_GET_IssueInstant(struct zx_sp_NameIDMappingRequest_s* x);
struct zx_str* zx_sp_NameIDMappingRequest_GET_Version(struct zx_sp_NameIDMappingRequest_s* x);

struct zx_sa_Issuer_s* zx_sp_NameIDMappingRequest_GET_Issuer(struct zx_sp_NameIDMappingRequest_s* x, int n);
struct zx_ds_Signature_s* zx_sp_NameIDMappingRequest_GET_Signature(struct zx_sp_NameIDMappingRequest_s* x, int n);
struct zx_sp_Extensions_s* zx_sp_NameIDMappingRequest_GET_Extensions(struct zx_sp_NameIDMappingRequest_s* x, int n);
struct zx_sa_BaseID_s* zx_sp_NameIDMappingRequest_GET_BaseID(struct zx_sp_NameIDMappingRequest_s* x, int n);
struct zx_sa_NameID_s* zx_sp_NameIDMappingRequest_GET_NameID(struct zx_sp_NameIDMappingRequest_s* x, int n);
struct zx_sa_EncryptedID_s* zx_sp_NameIDMappingRequest_GET_EncryptedID(struct zx_sp_NameIDMappingRequest_s* x, int n);
struct zx_sp_NameIDPolicy_s* zx_sp_NameIDMappingRequest_GET_NameIDPolicy(struct zx_sp_NameIDMappingRequest_s* x, int n);

int zx_sp_NameIDMappingRequest_NUM_Issuer(struct zx_sp_NameIDMappingRequest_s* x);
int zx_sp_NameIDMappingRequest_NUM_Signature(struct zx_sp_NameIDMappingRequest_s* x);
int zx_sp_NameIDMappingRequest_NUM_Extensions(struct zx_sp_NameIDMappingRequest_s* x);
int zx_sp_NameIDMappingRequest_NUM_BaseID(struct zx_sp_NameIDMappingRequest_s* x);
int zx_sp_NameIDMappingRequest_NUM_NameID(struct zx_sp_NameIDMappingRequest_s* x);
int zx_sp_NameIDMappingRequest_NUM_EncryptedID(struct zx_sp_NameIDMappingRequest_s* x);
int zx_sp_NameIDMappingRequest_NUM_NameIDPolicy(struct zx_sp_NameIDMappingRequest_s* x);

struct zx_sa_Issuer_s* zx_sp_NameIDMappingRequest_POP_Issuer(struct zx_sp_NameIDMappingRequest_s* x);
struct zx_ds_Signature_s* zx_sp_NameIDMappingRequest_POP_Signature(struct zx_sp_NameIDMappingRequest_s* x);
struct zx_sp_Extensions_s* zx_sp_NameIDMappingRequest_POP_Extensions(struct zx_sp_NameIDMappingRequest_s* x);
struct zx_sa_BaseID_s* zx_sp_NameIDMappingRequest_POP_BaseID(struct zx_sp_NameIDMappingRequest_s* x);
struct zx_sa_NameID_s* zx_sp_NameIDMappingRequest_POP_NameID(struct zx_sp_NameIDMappingRequest_s* x);
struct zx_sa_EncryptedID_s* zx_sp_NameIDMappingRequest_POP_EncryptedID(struct zx_sp_NameIDMappingRequest_s* x);
struct zx_sp_NameIDPolicy_s* zx_sp_NameIDMappingRequest_POP_NameIDPolicy(struct zx_sp_NameIDMappingRequest_s* x);

void zx_sp_NameIDMappingRequest_PUSH_Issuer(struct zx_sp_NameIDMappingRequest_s* x, struct zx_sa_Issuer_s* y);
void zx_sp_NameIDMappingRequest_PUSH_Signature(struct zx_sp_NameIDMappingRequest_s* x, struct zx_ds_Signature_s* y);
void zx_sp_NameIDMappingRequest_PUSH_Extensions(struct zx_sp_NameIDMappingRequest_s* x, struct zx_sp_Extensions_s* y);
void zx_sp_NameIDMappingRequest_PUSH_BaseID(struct zx_sp_NameIDMappingRequest_s* x, struct zx_sa_BaseID_s* y);
void zx_sp_NameIDMappingRequest_PUSH_NameID(struct zx_sp_NameIDMappingRequest_s* x, struct zx_sa_NameID_s* y);
void zx_sp_NameIDMappingRequest_PUSH_EncryptedID(struct zx_sp_NameIDMappingRequest_s* x, struct zx_sa_EncryptedID_s* y);
void zx_sp_NameIDMappingRequest_PUSH_NameIDPolicy(struct zx_sp_NameIDMappingRequest_s* x, struct zx_sp_NameIDPolicy_s* y);

void zx_sp_NameIDMappingRequest_PUT_Consent(struct zx_sp_NameIDMappingRequest_s* x, struct zx_str* y);
void zx_sp_NameIDMappingRequest_PUT_Destination(struct zx_sp_NameIDMappingRequest_s* x, struct zx_str* y);
void zx_sp_NameIDMappingRequest_PUT_ID(struct zx_sp_NameIDMappingRequest_s* x, struct zx_str* y);
void zx_sp_NameIDMappingRequest_PUT_IssueInstant(struct zx_sp_NameIDMappingRequest_s* x, struct zx_str* y);
void zx_sp_NameIDMappingRequest_PUT_Version(struct zx_sp_NameIDMappingRequest_s* x, struct zx_str* y);

void zx_sp_NameIDMappingRequest_PUT_Issuer(struct zx_sp_NameIDMappingRequest_s* x, int n, struct zx_sa_Issuer_s* y);
void zx_sp_NameIDMappingRequest_PUT_Signature(struct zx_sp_NameIDMappingRequest_s* x, int n, struct zx_ds_Signature_s* y);
void zx_sp_NameIDMappingRequest_PUT_Extensions(struct zx_sp_NameIDMappingRequest_s* x, int n, struct zx_sp_Extensions_s* y);
void zx_sp_NameIDMappingRequest_PUT_BaseID(struct zx_sp_NameIDMappingRequest_s* x, int n, struct zx_sa_BaseID_s* y);
void zx_sp_NameIDMappingRequest_PUT_NameID(struct zx_sp_NameIDMappingRequest_s* x, int n, struct zx_sa_NameID_s* y);
void zx_sp_NameIDMappingRequest_PUT_EncryptedID(struct zx_sp_NameIDMappingRequest_s* x, int n, struct zx_sa_EncryptedID_s* y);
void zx_sp_NameIDMappingRequest_PUT_NameIDPolicy(struct zx_sp_NameIDMappingRequest_s* x, int n, struct zx_sp_NameIDPolicy_s* y);

void zx_sp_NameIDMappingRequest_ADD_Issuer(struct zx_sp_NameIDMappingRequest_s* x, int n, struct zx_sa_Issuer_s* z);
void zx_sp_NameIDMappingRequest_ADD_Signature(struct zx_sp_NameIDMappingRequest_s* x, int n, struct zx_ds_Signature_s* z);
void zx_sp_NameIDMappingRequest_ADD_Extensions(struct zx_sp_NameIDMappingRequest_s* x, int n, struct zx_sp_Extensions_s* z);
void zx_sp_NameIDMappingRequest_ADD_BaseID(struct zx_sp_NameIDMappingRequest_s* x, int n, struct zx_sa_BaseID_s* z);
void zx_sp_NameIDMappingRequest_ADD_NameID(struct zx_sp_NameIDMappingRequest_s* x, int n, struct zx_sa_NameID_s* z);
void zx_sp_NameIDMappingRequest_ADD_EncryptedID(struct zx_sp_NameIDMappingRequest_s* x, int n, struct zx_sa_EncryptedID_s* z);
void zx_sp_NameIDMappingRequest_ADD_NameIDPolicy(struct zx_sp_NameIDMappingRequest_s* x, int n, struct zx_sp_NameIDPolicy_s* z);

void zx_sp_NameIDMappingRequest_DEL_Issuer(struct zx_sp_NameIDMappingRequest_s* x, int n);
void zx_sp_NameIDMappingRequest_DEL_Signature(struct zx_sp_NameIDMappingRequest_s* x, int n);
void zx_sp_NameIDMappingRequest_DEL_Extensions(struct zx_sp_NameIDMappingRequest_s* x, int n);
void zx_sp_NameIDMappingRequest_DEL_BaseID(struct zx_sp_NameIDMappingRequest_s* x, int n);
void zx_sp_NameIDMappingRequest_DEL_NameID(struct zx_sp_NameIDMappingRequest_s* x, int n);
void zx_sp_NameIDMappingRequest_DEL_EncryptedID(struct zx_sp_NameIDMappingRequest_s* x, int n);
void zx_sp_NameIDMappingRequest_DEL_NameIDPolicy(struct zx_sp_NameIDMappingRequest_s* x, int n);

void zx_sp_NameIDMappingRequest_REV_Issuer(struct zx_sp_NameIDMappingRequest_s* x);
void zx_sp_NameIDMappingRequest_REV_Signature(struct zx_sp_NameIDMappingRequest_s* x);
void zx_sp_NameIDMappingRequest_REV_Extensions(struct zx_sp_NameIDMappingRequest_s* x);
void zx_sp_NameIDMappingRequest_REV_BaseID(struct zx_sp_NameIDMappingRequest_s* x);
void zx_sp_NameIDMappingRequest_REV_NameID(struct zx_sp_NameIDMappingRequest_s* x);
void zx_sp_NameIDMappingRequest_REV_EncryptedID(struct zx_sp_NameIDMappingRequest_s* x);
void zx_sp_NameIDMappingRequest_REV_NameIDPolicy(struct zx_sp_NameIDMappingRequest_s* x);

#endif
/* -------------------------- sp_NameIDMappingResponse -------------------------- */
/* refby( zx_e_Body_s ) */
#ifndef zx_sp_NameIDMappingResponse_EXT
#define zx_sp_NameIDMappingResponse_EXT
#endif

struct zx_sp_NameIDMappingResponse_s* zx_DEC_sp_NameIDMappingResponse(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_sp_NameIDMappingResponse_s* zx_NEW_sp_NameIDMappingResponse(struct zx_ctx* c);
void zx_FREE_sp_NameIDMappingResponse(struct zx_ctx* c, struct zx_sp_NameIDMappingResponse_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_sp_NameIDMappingResponse_s* zx_DEEP_CLONE_sp_NameIDMappingResponse(struct zx_ctx* c, struct zx_sp_NameIDMappingResponse_s* x, int dup_strs);
void zx_DUP_STRS_sp_NameIDMappingResponse(struct zx_ctx* c, struct zx_sp_NameIDMappingResponse_s* x);
int zx_WALK_SO_sp_NameIDMappingResponse(struct zx_ctx* c, struct zx_sp_NameIDMappingResponse_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_sp_NameIDMappingResponse(struct zx_ctx* c, struct zx_sp_NameIDMappingResponse_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_sp_NameIDMappingResponse(struct zx_ctx* c, struct zx_sp_NameIDMappingResponse_s* x);
int zx_LEN_WO_sp_NameIDMappingResponse(struct zx_ctx* c, struct zx_sp_NameIDMappingResponse_s* x);
char* zx_ENC_SO_sp_NameIDMappingResponse(struct zx_ctx* c, struct zx_sp_NameIDMappingResponse_s* x, char* p);
char* zx_ENC_WO_sp_NameIDMappingResponse(struct zx_ctx* c, struct zx_sp_NameIDMappingResponse_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_sp_NameIDMappingResponse(struct zx_ctx* c, struct zx_sp_NameIDMappingResponse_s* x);
struct zx_str* zx_EASY_ENC_WO_sp_NameIDMappingResponse(struct zx_ctx* c, struct zx_sp_NameIDMappingResponse_s* x);

struct zx_sp_NameIDMappingResponse_s {
  ZX_ELEM_EXT
  zx_sp_NameIDMappingResponse_EXT
  struct zx_sa_Issuer_s* Issuer;	/* {0,1} nada */
  struct zx_ds_Signature_s* Signature;	/* {0,1} nada */
  struct zx_sp_Extensions_s* Extensions;	/* {0,1}  */
  struct zx_sp_Status_s* Status;	/* {1,1} nada */
  struct zx_sa_NameID_s* NameID;	/* {0,1} nada */
  struct zx_sa_EncryptedID_s* EncryptedID;	/* {0,1} nada */
  struct zx_str* Consent;	/* {0,1} attribute xs:anyURI */
  struct zx_str* Destination;	/* {0,1} attribute xs:anyURI */
  struct zx_str* ID;	/* {1,1} attribute xs:anyURI */
  struct zx_str* InResponseTo;	/* {0,1} attribute xs:NCName */
  struct zx_str* IssueInstant;	/* {1,1} attribute xs:dateTime */
  struct zx_str* Version;	/* {1,1} attribute xa:VersionType */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_sp_NameIDMappingResponse_GET_Consent(struct zx_sp_NameIDMappingResponse_s* x);
struct zx_str* zx_sp_NameIDMappingResponse_GET_Destination(struct zx_sp_NameIDMappingResponse_s* x);
struct zx_str* zx_sp_NameIDMappingResponse_GET_ID(struct zx_sp_NameIDMappingResponse_s* x);
struct zx_str* zx_sp_NameIDMappingResponse_GET_InResponseTo(struct zx_sp_NameIDMappingResponse_s* x);
struct zx_str* zx_sp_NameIDMappingResponse_GET_IssueInstant(struct zx_sp_NameIDMappingResponse_s* x);
struct zx_str* zx_sp_NameIDMappingResponse_GET_Version(struct zx_sp_NameIDMappingResponse_s* x);

struct zx_sa_Issuer_s* zx_sp_NameIDMappingResponse_GET_Issuer(struct zx_sp_NameIDMappingResponse_s* x, int n);
struct zx_ds_Signature_s* zx_sp_NameIDMappingResponse_GET_Signature(struct zx_sp_NameIDMappingResponse_s* x, int n);
struct zx_sp_Extensions_s* zx_sp_NameIDMappingResponse_GET_Extensions(struct zx_sp_NameIDMappingResponse_s* x, int n);
struct zx_sp_Status_s* zx_sp_NameIDMappingResponse_GET_Status(struct zx_sp_NameIDMappingResponse_s* x, int n);
struct zx_sa_NameID_s* zx_sp_NameIDMappingResponse_GET_NameID(struct zx_sp_NameIDMappingResponse_s* x, int n);
struct zx_sa_EncryptedID_s* zx_sp_NameIDMappingResponse_GET_EncryptedID(struct zx_sp_NameIDMappingResponse_s* x, int n);

int zx_sp_NameIDMappingResponse_NUM_Issuer(struct zx_sp_NameIDMappingResponse_s* x);
int zx_sp_NameIDMappingResponse_NUM_Signature(struct zx_sp_NameIDMappingResponse_s* x);
int zx_sp_NameIDMappingResponse_NUM_Extensions(struct zx_sp_NameIDMappingResponse_s* x);
int zx_sp_NameIDMappingResponse_NUM_Status(struct zx_sp_NameIDMappingResponse_s* x);
int zx_sp_NameIDMappingResponse_NUM_NameID(struct zx_sp_NameIDMappingResponse_s* x);
int zx_sp_NameIDMappingResponse_NUM_EncryptedID(struct zx_sp_NameIDMappingResponse_s* x);

struct zx_sa_Issuer_s* zx_sp_NameIDMappingResponse_POP_Issuer(struct zx_sp_NameIDMappingResponse_s* x);
struct zx_ds_Signature_s* zx_sp_NameIDMappingResponse_POP_Signature(struct zx_sp_NameIDMappingResponse_s* x);
struct zx_sp_Extensions_s* zx_sp_NameIDMappingResponse_POP_Extensions(struct zx_sp_NameIDMappingResponse_s* x);
struct zx_sp_Status_s* zx_sp_NameIDMappingResponse_POP_Status(struct zx_sp_NameIDMappingResponse_s* x);
struct zx_sa_NameID_s* zx_sp_NameIDMappingResponse_POP_NameID(struct zx_sp_NameIDMappingResponse_s* x);
struct zx_sa_EncryptedID_s* zx_sp_NameIDMappingResponse_POP_EncryptedID(struct zx_sp_NameIDMappingResponse_s* x);

void zx_sp_NameIDMappingResponse_PUSH_Issuer(struct zx_sp_NameIDMappingResponse_s* x, struct zx_sa_Issuer_s* y);
void zx_sp_NameIDMappingResponse_PUSH_Signature(struct zx_sp_NameIDMappingResponse_s* x, struct zx_ds_Signature_s* y);
void zx_sp_NameIDMappingResponse_PUSH_Extensions(struct zx_sp_NameIDMappingResponse_s* x, struct zx_sp_Extensions_s* y);
void zx_sp_NameIDMappingResponse_PUSH_Status(struct zx_sp_NameIDMappingResponse_s* x, struct zx_sp_Status_s* y);
void zx_sp_NameIDMappingResponse_PUSH_NameID(struct zx_sp_NameIDMappingResponse_s* x, struct zx_sa_NameID_s* y);
void zx_sp_NameIDMappingResponse_PUSH_EncryptedID(struct zx_sp_NameIDMappingResponse_s* x, struct zx_sa_EncryptedID_s* y);

void zx_sp_NameIDMappingResponse_PUT_Consent(struct zx_sp_NameIDMappingResponse_s* x, struct zx_str* y);
void zx_sp_NameIDMappingResponse_PUT_Destination(struct zx_sp_NameIDMappingResponse_s* x, struct zx_str* y);
void zx_sp_NameIDMappingResponse_PUT_ID(struct zx_sp_NameIDMappingResponse_s* x, struct zx_str* y);
void zx_sp_NameIDMappingResponse_PUT_InResponseTo(struct zx_sp_NameIDMappingResponse_s* x, struct zx_str* y);
void zx_sp_NameIDMappingResponse_PUT_IssueInstant(struct zx_sp_NameIDMappingResponse_s* x, struct zx_str* y);
void zx_sp_NameIDMappingResponse_PUT_Version(struct zx_sp_NameIDMappingResponse_s* x, struct zx_str* y);

void zx_sp_NameIDMappingResponse_PUT_Issuer(struct zx_sp_NameIDMappingResponse_s* x, int n, struct zx_sa_Issuer_s* y);
void zx_sp_NameIDMappingResponse_PUT_Signature(struct zx_sp_NameIDMappingResponse_s* x, int n, struct zx_ds_Signature_s* y);
void zx_sp_NameIDMappingResponse_PUT_Extensions(struct zx_sp_NameIDMappingResponse_s* x, int n, struct zx_sp_Extensions_s* y);
void zx_sp_NameIDMappingResponse_PUT_Status(struct zx_sp_NameIDMappingResponse_s* x, int n, struct zx_sp_Status_s* y);
void zx_sp_NameIDMappingResponse_PUT_NameID(struct zx_sp_NameIDMappingResponse_s* x, int n, struct zx_sa_NameID_s* y);
void zx_sp_NameIDMappingResponse_PUT_EncryptedID(struct zx_sp_NameIDMappingResponse_s* x, int n, struct zx_sa_EncryptedID_s* y);

void zx_sp_NameIDMappingResponse_ADD_Issuer(struct zx_sp_NameIDMappingResponse_s* x, int n, struct zx_sa_Issuer_s* z);
void zx_sp_NameIDMappingResponse_ADD_Signature(struct zx_sp_NameIDMappingResponse_s* x, int n, struct zx_ds_Signature_s* z);
void zx_sp_NameIDMappingResponse_ADD_Extensions(struct zx_sp_NameIDMappingResponse_s* x, int n, struct zx_sp_Extensions_s* z);
void zx_sp_NameIDMappingResponse_ADD_Status(struct zx_sp_NameIDMappingResponse_s* x, int n, struct zx_sp_Status_s* z);
void zx_sp_NameIDMappingResponse_ADD_NameID(struct zx_sp_NameIDMappingResponse_s* x, int n, struct zx_sa_NameID_s* z);
void zx_sp_NameIDMappingResponse_ADD_EncryptedID(struct zx_sp_NameIDMappingResponse_s* x, int n, struct zx_sa_EncryptedID_s* z);

void zx_sp_NameIDMappingResponse_DEL_Issuer(struct zx_sp_NameIDMappingResponse_s* x, int n);
void zx_sp_NameIDMappingResponse_DEL_Signature(struct zx_sp_NameIDMappingResponse_s* x, int n);
void zx_sp_NameIDMappingResponse_DEL_Extensions(struct zx_sp_NameIDMappingResponse_s* x, int n);
void zx_sp_NameIDMappingResponse_DEL_Status(struct zx_sp_NameIDMappingResponse_s* x, int n);
void zx_sp_NameIDMappingResponse_DEL_NameID(struct zx_sp_NameIDMappingResponse_s* x, int n);
void zx_sp_NameIDMappingResponse_DEL_EncryptedID(struct zx_sp_NameIDMappingResponse_s* x, int n);

void zx_sp_NameIDMappingResponse_REV_Issuer(struct zx_sp_NameIDMappingResponse_s* x);
void zx_sp_NameIDMappingResponse_REV_Signature(struct zx_sp_NameIDMappingResponse_s* x);
void zx_sp_NameIDMappingResponse_REV_Extensions(struct zx_sp_NameIDMappingResponse_s* x);
void zx_sp_NameIDMappingResponse_REV_Status(struct zx_sp_NameIDMappingResponse_s* x);
void zx_sp_NameIDMappingResponse_REV_NameID(struct zx_sp_NameIDMappingResponse_s* x);
void zx_sp_NameIDMappingResponse_REV_EncryptedID(struct zx_sp_NameIDMappingResponse_s* x);

#endif
/* -------------------------- sp_NameIDPolicy -------------------------- */
/* refby( zx_sp_AuthnRequest_s zx_sp_NameIDMappingRequest_s zx_sec_TokenPolicy_s ) */
#ifndef zx_sp_NameIDPolicy_EXT
#define zx_sp_NameIDPolicy_EXT
#endif

struct zx_sp_NameIDPolicy_s* zx_DEC_sp_NameIDPolicy(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_sp_NameIDPolicy_s* zx_NEW_sp_NameIDPolicy(struct zx_ctx* c);
void zx_FREE_sp_NameIDPolicy(struct zx_ctx* c, struct zx_sp_NameIDPolicy_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_sp_NameIDPolicy_s* zx_DEEP_CLONE_sp_NameIDPolicy(struct zx_ctx* c, struct zx_sp_NameIDPolicy_s* x, int dup_strs);
void zx_DUP_STRS_sp_NameIDPolicy(struct zx_ctx* c, struct zx_sp_NameIDPolicy_s* x);
int zx_WALK_SO_sp_NameIDPolicy(struct zx_ctx* c, struct zx_sp_NameIDPolicy_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_sp_NameIDPolicy(struct zx_ctx* c, struct zx_sp_NameIDPolicy_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_sp_NameIDPolicy(struct zx_ctx* c, struct zx_sp_NameIDPolicy_s* x);
int zx_LEN_WO_sp_NameIDPolicy(struct zx_ctx* c, struct zx_sp_NameIDPolicy_s* x);
char* zx_ENC_SO_sp_NameIDPolicy(struct zx_ctx* c, struct zx_sp_NameIDPolicy_s* x, char* p);
char* zx_ENC_WO_sp_NameIDPolicy(struct zx_ctx* c, struct zx_sp_NameIDPolicy_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_sp_NameIDPolicy(struct zx_ctx* c, struct zx_sp_NameIDPolicy_s* x);
struct zx_str* zx_EASY_ENC_WO_sp_NameIDPolicy(struct zx_ctx* c, struct zx_sp_NameIDPolicy_s* x);

struct zx_sp_NameIDPolicy_s {
  ZX_ELEM_EXT
  zx_sp_NameIDPolicy_EXT
  struct zx_str* AllowCreate;	/* {0,1} attribute xs:boolean */
  struct zx_str* Format;	/* {0,1} attribute xs:anyURI */
  struct zx_str* SPNameQualifier;	/* {0,1} attribute xs:string */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_sp_NameIDPolicy_GET_AllowCreate(struct zx_sp_NameIDPolicy_s* x);
struct zx_str* zx_sp_NameIDPolicy_GET_Format(struct zx_sp_NameIDPolicy_s* x);
struct zx_str* zx_sp_NameIDPolicy_GET_SPNameQualifier(struct zx_sp_NameIDPolicy_s* x);





void zx_sp_NameIDPolicy_PUT_AllowCreate(struct zx_sp_NameIDPolicy_s* x, struct zx_str* y);
void zx_sp_NameIDPolicy_PUT_Format(struct zx_sp_NameIDPolicy_s* x, struct zx_str* y);
void zx_sp_NameIDPolicy_PUT_SPNameQualifier(struct zx_sp_NameIDPolicy_s* x, struct zx_str* y);





#endif
/* -------------------------- sp_NewEncryptedID -------------------------- */
/* refby( zx_sp_ManageNameIDRequest_s ) */
#ifndef zx_sp_NewEncryptedID_EXT
#define zx_sp_NewEncryptedID_EXT
#endif

struct zx_sp_NewEncryptedID_s* zx_DEC_sp_NewEncryptedID(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_sp_NewEncryptedID_s* zx_NEW_sp_NewEncryptedID(struct zx_ctx* c);
void zx_FREE_sp_NewEncryptedID(struct zx_ctx* c, struct zx_sp_NewEncryptedID_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_sp_NewEncryptedID_s* zx_DEEP_CLONE_sp_NewEncryptedID(struct zx_ctx* c, struct zx_sp_NewEncryptedID_s* x, int dup_strs);
void zx_DUP_STRS_sp_NewEncryptedID(struct zx_ctx* c, struct zx_sp_NewEncryptedID_s* x);
int zx_WALK_SO_sp_NewEncryptedID(struct zx_ctx* c, struct zx_sp_NewEncryptedID_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_sp_NewEncryptedID(struct zx_ctx* c, struct zx_sp_NewEncryptedID_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_sp_NewEncryptedID(struct zx_ctx* c, struct zx_sp_NewEncryptedID_s* x);
int zx_LEN_WO_sp_NewEncryptedID(struct zx_ctx* c, struct zx_sp_NewEncryptedID_s* x);
char* zx_ENC_SO_sp_NewEncryptedID(struct zx_ctx* c, struct zx_sp_NewEncryptedID_s* x, char* p);
char* zx_ENC_WO_sp_NewEncryptedID(struct zx_ctx* c, struct zx_sp_NewEncryptedID_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_sp_NewEncryptedID(struct zx_ctx* c, struct zx_sp_NewEncryptedID_s* x);
struct zx_str* zx_EASY_ENC_WO_sp_NewEncryptedID(struct zx_ctx* c, struct zx_sp_NewEncryptedID_s* x);

struct zx_sp_NewEncryptedID_s {
  ZX_ELEM_EXT
  zx_sp_NewEncryptedID_EXT
  struct zx_xenc_EncryptedData_s* EncryptedData;	/* {1,1} nada */
  struct zx_xenc_EncryptedKey_s* EncryptedKey;	/* {0,-1} nada */
};

#ifdef ZX_ENA_GETPUT

struct zx_xenc_EncryptedData_s* zx_sp_NewEncryptedID_GET_EncryptedData(struct zx_sp_NewEncryptedID_s* x, int n);
struct zx_xenc_EncryptedKey_s* zx_sp_NewEncryptedID_GET_EncryptedKey(struct zx_sp_NewEncryptedID_s* x, int n);

int zx_sp_NewEncryptedID_NUM_EncryptedData(struct zx_sp_NewEncryptedID_s* x);
int zx_sp_NewEncryptedID_NUM_EncryptedKey(struct zx_sp_NewEncryptedID_s* x);

struct zx_xenc_EncryptedData_s* zx_sp_NewEncryptedID_POP_EncryptedData(struct zx_sp_NewEncryptedID_s* x);
struct zx_xenc_EncryptedKey_s* zx_sp_NewEncryptedID_POP_EncryptedKey(struct zx_sp_NewEncryptedID_s* x);

void zx_sp_NewEncryptedID_PUSH_EncryptedData(struct zx_sp_NewEncryptedID_s* x, struct zx_xenc_EncryptedData_s* y);
void zx_sp_NewEncryptedID_PUSH_EncryptedKey(struct zx_sp_NewEncryptedID_s* x, struct zx_xenc_EncryptedKey_s* y);


void zx_sp_NewEncryptedID_PUT_EncryptedData(struct zx_sp_NewEncryptedID_s* x, int n, struct zx_xenc_EncryptedData_s* y);
void zx_sp_NewEncryptedID_PUT_EncryptedKey(struct zx_sp_NewEncryptedID_s* x, int n, struct zx_xenc_EncryptedKey_s* y);

void zx_sp_NewEncryptedID_ADD_EncryptedData(struct zx_sp_NewEncryptedID_s* x, int n, struct zx_xenc_EncryptedData_s* z);
void zx_sp_NewEncryptedID_ADD_EncryptedKey(struct zx_sp_NewEncryptedID_s* x, int n, struct zx_xenc_EncryptedKey_s* z);

void zx_sp_NewEncryptedID_DEL_EncryptedData(struct zx_sp_NewEncryptedID_s* x, int n);
void zx_sp_NewEncryptedID_DEL_EncryptedKey(struct zx_sp_NewEncryptedID_s* x, int n);

void zx_sp_NewEncryptedID_REV_EncryptedData(struct zx_sp_NewEncryptedID_s* x);
void zx_sp_NewEncryptedID_REV_EncryptedKey(struct zx_sp_NewEncryptedID_s* x);

#endif
/* -------------------------- sp_RequestedAuthnContext -------------------------- */
/* refby( zx_sp_AuthnRequest_s zx_as_SASLRequest_s zx_sp_AuthnQuery_s zx_b_CredentialsContext_s ) */
#ifndef zx_sp_RequestedAuthnContext_EXT
#define zx_sp_RequestedAuthnContext_EXT
#endif

struct zx_sp_RequestedAuthnContext_s* zx_DEC_sp_RequestedAuthnContext(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_sp_RequestedAuthnContext_s* zx_NEW_sp_RequestedAuthnContext(struct zx_ctx* c);
void zx_FREE_sp_RequestedAuthnContext(struct zx_ctx* c, struct zx_sp_RequestedAuthnContext_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_sp_RequestedAuthnContext_s* zx_DEEP_CLONE_sp_RequestedAuthnContext(struct zx_ctx* c, struct zx_sp_RequestedAuthnContext_s* x, int dup_strs);
void zx_DUP_STRS_sp_RequestedAuthnContext(struct zx_ctx* c, struct zx_sp_RequestedAuthnContext_s* x);
int zx_WALK_SO_sp_RequestedAuthnContext(struct zx_ctx* c, struct zx_sp_RequestedAuthnContext_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_sp_RequestedAuthnContext(struct zx_ctx* c, struct zx_sp_RequestedAuthnContext_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_sp_RequestedAuthnContext(struct zx_ctx* c, struct zx_sp_RequestedAuthnContext_s* x);
int zx_LEN_WO_sp_RequestedAuthnContext(struct zx_ctx* c, struct zx_sp_RequestedAuthnContext_s* x);
char* zx_ENC_SO_sp_RequestedAuthnContext(struct zx_ctx* c, struct zx_sp_RequestedAuthnContext_s* x, char* p);
char* zx_ENC_WO_sp_RequestedAuthnContext(struct zx_ctx* c, struct zx_sp_RequestedAuthnContext_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_sp_RequestedAuthnContext(struct zx_ctx* c, struct zx_sp_RequestedAuthnContext_s* x);
struct zx_str* zx_EASY_ENC_WO_sp_RequestedAuthnContext(struct zx_ctx* c, struct zx_sp_RequestedAuthnContext_s* x);

struct zx_sp_RequestedAuthnContext_s {
  ZX_ELEM_EXT
  zx_sp_RequestedAuthnContext_EXT
  struct zx_elem_s* AuthnContextClassRef;	/* {0,-1} xs:anyURI */
  struct zx_elem_s* AuthnContextDeclRef;	/* {0,-1} xs:anyURI */
  struct zx_str* Comparison;	/* {0,1} attribute sp:AuthnContextComparisonType */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_sp_RequestedAuthnContext_GET_Comparison(struct zx_sp_RequestedAuthnContext_s* x);

struct zx_elem_s* zx_sp_RequestedAuthnContext_GET_AuthnContextClassRef(struct zx_sp_RequestedAuthnContext_s* x, int n);
struct zx_elem_s* zx_sp_RequestedAuthnContext_GET_AuthnContextDeclRef(struct zx_sp_RequestedAuthnContext_s* x, int n);

int zx_sp_RequestedAuthnContext_NUM_AuthnContextClassRef(struct zx_sp_RequestedAuthnContext_s* x);
int zx_sp_RequestedAuthnContext_NUM_AuthnContextDeclRef(struct zx_sp_RequestedAuthnContext_s* x);

struct zx_elem_s* zx_sp_RequestedAuthnContext_POP_AuthnContextClassRef(struct zx_sp_RequestedAuthnContext_s* x);
struct zx_elem_s* zx_sp_RequestedAuthnContext_POP_AuthnContextDeclRef(struct zx_sp_RequestedAuthnContext_s* x);

void zx_sp_RequestedAuthnContext_PUSH_AuthnContextClassRef(struct zx_sp_RequestedAuthnContext_s* x, struct zx_elem_s* y);
void zx_sp_RequestedAuthnContext_PUSH_AuthnContextDeclRef(struct zx_sp_RequestedAuthnContext_s* x, struct zx_elem_s* y);

void zx_sp_RequestedAuthnContext_PUT_Comparison(struct zx_sp_RequestedAuthnContext_s* x, struct zx_str* y);

void zx_sp_RequestedAuthnContext_PUT_AuthnContextClassRef(struct zx_sp_RequestedAuthnContext_s* x, int n, struct zx_elem_s* y);
void zx_sp_RequestedAuthnContext_PUT_AuthnContextDeclRef(struct zx_sp_RequestedAuthnContext_s* x, int n, struct zx_elem_s* y);

void zx_sp_RequestedAuthnContext_ADD_AuthnContextClassRef(struct zx_sp_RequestedAuthnContext_s* x, int n, struct zx_elem_s* z);
void zx_sp_RequestedAuthnContext_ADD_AuthnContextDeclRef(struct zx_sp_RequestedAuthnContext_s* x, int n, struct zx_elem_s* z);

void zx_sp_RequestedAuthnContext_DEL_AuthnContextClassRef(struct zx_sp_RequestedAuthnContext_s* x, int n);
void zx_sp_RequestedAuthnContext_DEL_AuthnContextDeclRef(struct zx_sp_RequestedAuthnContext_s* x, int n);

void zx_sp_RequestedAuthnContext_REV_AuthnContextClassRef(struct zx_sp_RequestedAuthnContext_s* x);
void zx_sp_RequestedAuthnContext_REV_AuthnContextDeclRef(struct zx_sp_RequestedAuthnContext_s* x);

#endif
/* -------------------------- sp_Response -------------------------- */
/* refby( zx_sp_ArtifactResponse_s zx_e_Body_s ) */
#ifndef zx_sp_Response_EXT
#define zx_sp_Response_EXT
#endif

struct zx_sp_Response_s* zx_DEC_sp_Response(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_sp_Response_s* zx_NEW_sp_Response(struct zx_ctx* c);
void zx_FREE_sp_Response(struct zx_ctx* c, struct zx_sp_Response_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_sp_Response_s* zx_DEEP_CLONE_sp_Response(struct zx_ctx* c, struct zx_sp_Response_s* x, int dup_strs);
void zx_DUP_STRS_sp_Response(struct zx_ctx* c, struct zx_sp_Response_s* x);
int zx_WALK_SO_sp_Response(struct zx_ctx* c, struct zx_sp_Response_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_sp_Response(struct zx_ctx* c, struct zx_sp_Response_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_sp_Response(struct zx_ctx* c, struct zx_sp_Response_s* x);
int zx_LEN_WO_sp_Response(struct zx_ctx* c, struct zx_sp_Response_s* x);
char* zx_ENC_SO_sp_Response(struct zx_ctx* c, struct zx_sp_Response_s* x, char* p);
char* zx_ENC_WO_sp_Response(struct zx_ctx* c, struct zx_sp_Response_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_sp_Response(struct zx_ctx* c, struct zx_sp_Response_s* x);
struct zx_str* zx_EASY_ENC_WO_sp_Response(struct zx_ctx* c, struct zx_sp_Response_s* x);

struct zx_sp_Response_s {
  ZX_ELEM_EXT
  zx_sp_Response_EXT
  struct zx_sa_Issuer_s* Issuer;	/* {0,1} nada */
  struct zx_ds_Signature_s* Signature;	/* {0,1} nada */
  struct zx_sp_Extensions_s* Extensions;	/* {0,1}  */
  struct zx_sp_Status_s* Status;	/* {1,1} nada */
  struct zx_sa_Assertion_s* Assertion;	/* {0,1} nada */
  struct zx_sa_EncryptedAssertion_s* EncryptedAssertion;	/* {0,1} nada */
  struct zx_str* Consent;	/* {0,1} attribute xs:anyURI */
  struct zx_str* Destination;	/* {0,1} attribute xs:anyURI */
  struct zx_str* ID;	/* {1,1} attribute xs:anyURI */
  struct zx_str* InResponseTo;	/* {0,1} attribute xs:NCName */
  struct zx_str* IssueInstant;	/* {1,1} attribute xs:dateTime */
  struct zx_str* Version;	/* {1,1} attribute xa:VersionType */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_sp_Response_GET_Consent(struct zx_sp_Response_s* x);
struct zx_str* zx_sp_Response_GET_Destination(struct zx_sp_Response_s* x);
struct zx_str* zx_sp_Response_GET_ID(struct zx_sp_Response_s* x);
struct zx_str* zx_sp_Response_GET_InResponseTo(struct zx_sp_Response_s* x);
struct zx_str* zx_sp_Response_GET_IssueInstant(struct zx_sp_Response_s* x);
struct zx_str* zx_sp_Response_GET_Version(struct zx_sp_Response_s* x);

struct zx_sa_Issuer_s* zx_sp_Response_GET_Issuer(struct zx_sp_Response_s* x, int n);
struct zx_ds_Signature_s* zx_sp_Response_GET_Signature(struct zx_sp_Response_s* x, int n);
struct zx_sp_Extensions_s* zx_sp_Response_GET_Extensions(struct zx_sp_Response_s* x, int n);
struct zx_sp_Status_s* zx_sp_Response_GET_Status(struct zx_sp_Response_s* x, int n);
struct zx_sa_Assertion_s* zx_sp_Response_GET_Assertion(struct zx_sp_Response_s* x, int n);
struct zx_sa_EncryptedAssertion_s* zx_sp_Response_GET_EncryptedAssertion(struct zx_sp_Response_s* x, int n);

int zx_sp_Response_NUM_Issuer(struct zx_sp_Response_s* x);
int zx_sp_Response_NUM_Signature(struct zx_sp_Response_s* x);
int zx_sp_Response_NUM_Extensions(struct zx_sp_Response_s* x);
int zx_sp_Response_NUM_Status(struct zx_sp_Response_s* x);
int zx_sp_Response_NUM_Assertion(struct zx_sp_Response_s* x);
int zx_sp_Response_NUM_EncryptedAssertion(struct zx_sp_Response_s* x);

struct zx_sa_Issuer_s* zx_sp_Response_POP_Issuer(struct zx_sp_Response_s* x);
struct zx_ds_Signature_s* zx_sp_Response_POP_Signature(struct zx_sp_Response_s* x);
struct zx_sp_Extensions_s* zx_sp_Response_POP_Extensions(struct zx_sp_Response_s* x);
struct zx_sp_Status_s* zx_sp_Response_POP_Status(struct zx_sp_Response_s* x);
struct zx_sa_Assertion_s* zx_sp_Response_POP_Assertion(struct zx_sp_Response_s* x);
struct zx_sa_EncryptedAssertion_s* zx_sp_Response_POP_EncryptedAssertion(struct zx_sp_Response_s* x);

void zx_sp_Response_PUSH_Issuer(struct zx_sp_Response_s* x, struct zx_sa_Issuer_s* y);
void zx_sp_Response_PUSH_Signature(struct zx_sp_Response_s* x, struct zx_ds_Signature_s* y);
void zx_sp_Response_PUSH_Extensions(struct zx_sp_Response_s* x, struct zx_sp_Extensions_s* y);
void zx_sp_Response_PUSH_Status(struct zx_sp_Response_s* x, struct zx_sp_Status_s* y);
void zx_sp_Response_PUSH_Assertion(struct zx_sp_Response_s* x, struct zx_sa_Assertion_s* y);
void zx_sp_Response_PUSH_EncryptedAssertion(struct zx_sp_Response_s* x, struct zx_sa_EncryptedAssertion_s* y);

void zx_sp_Response_PUT_Consent(struct zx_sp_Response_s* x, struct zx_str* y);
void zx_sp_Response_PUT_Destination(struct zx_sp_Response_s* x, struct zx_str* y);
void zx_sp_Response_PUT_ID(struct zx_sp_Response_s* x, struct zx_str* y);
void zx_sp_Response_PUT_InResponseTo(struct zx_sp_Response_s* x, struct zx_str* y);
void zx_sp_Response_PUT_IssueInstant(struct zx_sp_Response_s* x, struct zx_str* y);
void zx_sp_Response_PUT_Version(struct zx_sp_Response_s* x, struct zx_str* y);

void zx_sp_Response_PUT_Issuer(struct zx_sp_Response_s* x, int n, struct zx_sa_Issuer_s* y);
void zx_sp_Response_PUT_Signature(struct zx_sp_Response_s* x, int n, struct zx_ds_Signature_s* y);
void zx_sp_Response_PUT_Extensions(struct zx_sp_Response_s* x, int n, struct zx_sp_Extensions_s* y);
void zx_sp_Response_PUT_Status(struct zx_sp_Response_s* x, int n, struct zx_sp_Status_s* y);
void zx_sp_Response_PUT_Assertion(struct zx_sp_Response_s* x, int n, struct zx_sa_Assertion_s* y);
void zx_sp_Response_PUT_EncryptedAssertion(struct zx_sp_Response_s* x, int n, struct zx_sa_EncryptedAssertion_s* y);

void zx_sp_Response_ADD_Issuer(struct zx_sp_Response_s* x, int n, struct zx_sa_Issuer_s* z);
void zx_sp_Response_ADD_Signature(struct zx_sp_Response_s* x, int n, struct zx_ds_Signature_s* z);
void zx_sp_Response_ADD_Extensions(struct zx_sp_Response_s* x, int n, struct zx_sp_Extensions_s* z);
void zx_sp_Response_ADD_Status(struct zx_sp_Response_s* x, int n, struct zx_sp_Status_s* z);
void zx_sp_Response_ADD_Assertion(struct zx_sp_Response_s* x, int n, struct zx_sa_Assertion_s* z);
void zx_sp_Response_ADD_EncryptedAssertion(struct zx_sp_Response_s* x, int n, struct zx_sa_EncryptedAssertion_s* z);

void zx_sp_Response_DEL_Issuer(struct zx_sp_Response_s* x, int n);
void zx_sp_Response_DEL_Signature(struct zx_sp_Response_s* x, int n);
void zx_sp_Response_DEL_Extensions(struct zx_sp_Response_s* x, int n);
void zx_sp_Response_DEL_Status(struct zx_sp_Response_s* x, int n);
void zx_sp_Response_DEL_Assertion(struct zx_sp_Response_s* x, int n);
void zx_sp_Response_DEL_EncryptedAssertion(struct zx_sp_Response_s* x, int n);

void zx_sp_Response_REV_Issuer(struct zx_sp_Response_s* x);
void zx_sp_Response_REV_Signature(struct zx_sp_Response_s* x);
void zx_sp_Response_REV_Extensions(struct zx_sp_Response_s* x);
void zx_sp_Response_REV_Status(struct zx_sp_Response_s* x);
void zx_sp_Response_REV_Assertion(struct zx_sp_Response_s* x);
void zx_sp_Response_REV_EncryptedAssertion(struct zx_sp_Response_s* x);

#endif
/* -------------------------- sp_Scoping -------------------------- */
/* refby( zx_sp_AuthnRequest_s ) */
#ifndef zx_sp_Scoping_EXT
#define zx_sp_Scoping_EXT
#endif

struct zx_sp_Scoping_s* zx_DEC_sp_Scoping(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_sp_Scoping_s* zx_NEW_sp_Scoping(struct zx_ctx* c);
void zx_FREE_sp_Scoping(struct zx_ctx* c, struct zx_sp_Scoping_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_sp_Scoping_s* zx_DEEP_CLONE_sp_Scoping(struct zx_ctx* c, struct zx_sp_Scoping_s* x, int dup_strs);
void zx_DUP_STRS_sp_Scoping(struct zx_ctx* c, struct zx_sp_Scoping_s* x);
int zx_WALK_SO_sp_Scoping(struct zx_ctx* c, struct zx_sp_Scoping_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_sp_Scoping(struct zx_ctx* c, struct zx_sp_Scoping_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_sp_Scoping(struct zx_ctx* c, struct zx_sp_Scoping_s* x);
int zx_LEN_WO_sp_Scoping(struct zx_ctx* c, struct zx_sp_Scoping_s* x);
char* zx_ENC_SO_sp_Scoping(struct zx_ctx* c, struct zx_sp_Scoping_s* x, char* p);
char* zx_ENC_WO_sp_Scoping(struct zx_ctx* c, struct zx_sp_Scoping_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_sp_Scoping(struct zx_ctx* c, struct zx_sp_Scoping_s* x);
struct zx_str* zx_EASY_ENC_WO_sp_Scoping(struct zx_ctx* c, struct zx_sp_Scoping_s* x);

struct zx_sp_Scoping_s {
  ZX_ELEM_EXT
  zx_sp_Scoping_EXT
  struct zx_sp_IDPList_s* IDPList;	/* {0,1} nada */
  struct zx_elem_s* RequesterID;	/* {0,-1} xs:anyURI */
  struct zx_str* ProxyCount;	/* {0,1} attribute xs:nonNegativeInteger */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_sp_Scoping_GET_ProxyCount(struct zx_sp_Scoping_s* x);

struct zx_sp_IDPList_s* zx_sp_Scoping_GET_IDPList(struct zx_sp_Scoping_s* x, int n);
struct zx_elem_s* zx_sp_Scoping_GET_RequesterID(struct zx_sp_Scoping_s* x, int n);

int zx_sp_Scoping_NUM_IDPList(struct zx_sp_Scoping_s* x);
int zx_sp_Scoping_NUM_RequesterID(struct zx_sp_Scoping_s* x);

struct zx_sp_IDPList_s* zx_sp_Scoping_POP_IDPList(struct zx_sp_Scoping_s* x);
struct zx_elem_s* zx_sp_Scoping_POP_RequesterID(struct zx_sp_Scoping_s* x);

void zx_sp_Scoping_PUSH_IDPList(struct zx_sp_Scoping_s* x, struct zx_sp_IDPList_s* y);
void zx_sp_Scoping_PUSH_RequesterID(struct zx_sp_Scoping_s* x, struct zx_elem_s* y);

void zx_sp_Scoping_PUT_ProxyCount(struct zx_sp_Scoping_s* x, struct zx_str* y);

void zx_sp_Scoping_PUT_IDPList(struct zx_sp_Scoping_s* x, int n, struct zx_sp_IDPList_s* y);
void zx_sp_Scoping_PUT_RequesterID(struct zx_sp_Scoping_s* x, int n, struct zx_elem_s* y);

void zx_sp_Scoping_ADD_IDPList(struct zx_sp_Scoping_s* x, int n, struct zx_sp_IDPList_s* z);
void zx_sp_Scoping_ADD_RequesterID(struct zx_sp_Scoping_s* x, int n, struct zx_elem_s* z);

void zx_sp_Scoping_DEL_IDPList(struct zx_sp_Scoping_s* x, int n);
void zx_sp_Scoping_DEL_RequesterID(struct zx_sp_Scoping_s* x, int n);

void zx_sp_Scoping_REV_IDPList(struct zx_sp_Scoping_s* x);
void zx_sp_Scoping_REV_RequesterID(struct zx_sp_Scoping_s* x);

#endif
/* -------------------------- sp_Status -------------------------- */
/* refby( zx_sp_NameIDMappingResponse_s zx_sp_ManageNameIDResponse_s zx_sp_ArtifactResponse_s zx_sp_LogoutResponse_s zx_sp_Response_s ) */
#ifndef zx_sp_Status_EXT
#define zx_sp_Status_EXT
#endif

struct zx_sp_Status_s* zx_DEC_sp_Status(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_sp_Status_s* zx_NEW_sp_Status(struct zx_ctx* c);
void zx_FREE_sp_Status(struct zx_ctx* c, struct zx_sp_Status_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_sp_Status_s* zx_DEEP_CLONE_sp_Status(struct zx_ctx* c, struct zx_sp_Status_s* x, int dup_strs);
void zx_DUP_STRS_sp_Status(struct zx_ctx* c, struct zx_sp_Status_s* x);
int zx_WALK_SO_sp_Status(struct zx_ctx* c, struct zx_sp_Status_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_sp_Status(struct zx_ctx* c, struct zx_sp_Status_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_sp_Status(struct zx_ctx* c, struct zx_sp_Status_s* x);
int zx_LEN_WO_sp_Status(struct zx_ctx* c, struct zx_sp_Status_s* x);
char* zx_ENC_SO_sp_Status(struct zx_ctx* c, struct zx_sp_Status_s* x, char* p);
char* zx_ENC_WO_sp_Status(struct zx_ctx* c, struct zx_sp_Status_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_sp_Status(struct zx_ctx* c, struct zx_sp_Status_s* x);
struct zx_str* zx_EASY_ENC_WO_sp_Status(struct zx_ctx* c, struct zx_sp_Status_s* x);

struct zx_sp_Status_s {
  ZX_ELEM_EXT
  zx_sp_Status_EXT
  struct zx_sp_StatusCode_s* StatusCode;	/* {1,1} nada */
  struct zx_elem_s* StatusMessage;	/* {0,1} xs:string */
  struct zx_sp_StatusDetail_s* StatusDetail;	/* {0,1}  */
};

#ifdef ZX_ENA_GETPUT

struct zx_sp_StatusCode_s* zx_sp_Status_GET_StatusCode(struct zx_sp_Status_s* x, int n);
struct zx_elem_s* zx_sp_Status_GET_StatusMessage(struct zx_sp_Status_s* x, int n);
struct zx_sp_StatusDetail_s* zx_sp_Status_GET_StatusDetail(struct zx_sp_Status_s* x, int n);

int zx_sp_Status_NUM_StatusCode(struct zx_sp_Status_s* x);
int zx_sp_Status_NUM_StatusMessage(struct zx_sp_Status_s* x);
int zx_sp_Status_NUM_StatusDetail(struct zx_sp_Status_s* x);

struct zx_sp_StatusCode_s* zx_sp_Status_POP_StatusCode(struct zx_sp_Status_s* x);
struct zx_elem_s* zx_sp_Status_POP_StatusMessage(struct zx_sp_Status_s* x);
struct zx_sp_StatusDetail_s* zx_sp_Status_POP_StatusDetail(struct zx_sp_Status_s* x);

void zx_sp_Status_PUSH_StatusCode(struct zx_sp_Status_s* x, struct zx_sp_StatusCode_s* y);
void zx_sp_Status_PUSH_StatusMessage(struct zx_sp_Status_s* x, struct zx_elem_s* y);
void zx_sp_Status_PUSH_StatusDetail(struct zx_sp_Status_s* x, struct zx_sp_StatusDetail_s* y);


void zx_sp_Status_PUT_StatusCode(struct zx_sp_Status_s* x, int n, struct zx_sp_StatusCode_s* y);
void zx_sp_Status_PUT_StatusMessage(struct zx_sp_Status_s* x, int n, struct zx_elem_s* y);
void zx_sp_Status_PUT_StatusDetail(struct zx_sp_Status_s* x, int n, struct zx_sp_StatusDetail_s* y);

void zx_sp_Status_ADD_StatusCode(struct zx_sp_Status_s* x, int n, struct zx_sp_StatusCode_s* z);
void zx_sp_Status_ADD_StatusMessage(struct zx_sp_Status_s* x, int n, struct zx_elem_s* z);
void zx_sp_Status_ADD_StatusDetail(struct zx_sp_Status_s* x, int n, struct zx_sp_StatusDetail_s* z);

void zx_sp_Status_DEL_StatusCode(struct zx_sp_Status_s* x, int n);
void zx_sp_Status_DEL_StatusMessage(struct zx_sp_Status_s* x, int n);
void zx_sp_Status_DEL_StatusDetail(struct zx_sp_Status_s* x, int n);

void zx_sp_Status_REV_StatusCode(struct zx_sp_Status_s* x);
void zx_sp_Status_REV_StatusMessage(struct zx_sp_Status_s* x);
void zx_sp_Status_REV_StatusDetail(struct zx_sp_Status_s* x);

#endif
/* -------------------------- sp_StatusCode -------------------------- */
/* refby( zx_sp_StatusCode_s zx_sp_Status_s ) */
#ifndef zx_sp_StatusCode_EXT
#define zx_sp_StatusCode_EXT
#endif

struct zx_sp_StatusCode_s* zx_DEC_sp_StatusCode(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_sp_StatusCode_s* zx_NEW_sp_StatusCode(struct zx_ctx* c);
void zx_FREE_sp_StatusCode(struct zx_ctx* c, struct zx_sp_StatusCode_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_sp_StatusCode_s* zx_DEEP_CLONE_sp_StatusCode(struct zx_ctx* c, struct zx_sp_StatusCode_s* x, int dup_strs);
void zx_DUP_STRS_sp_StatusCode(struct zx_ctx* c, struct zx_sp_StatusCode_s* x);
int zx_WALK_SO_sp_StatusCode(struct zx_ctx* c, struct zx_sp_StatusCode_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_sp_StatusCode(struct zx_ctx* c, struct zx_sp_StatusCode_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_sp_StatusCode(struct zx_ctx* c, struct zx_sp_StatusCode_s* x);
int zx_LEN_WO_sp_StatusCode(struct zx_ctx* c, struct zx_sp_StatusCode_s* x);
char* zx_ENC_SO_sp_StatusCode(struct zx_ctx* c, struct zx_sp_StatusCode_s* x, char* p);
char* zx_ENC_WO_sp_StatusCode(struct zx_ctx* c, struct zx_sp_StatusCode_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_sp_StatusCode(struct zx_ctx* c, struct zx_sp_StatusCode_s* x);
struct zx_str* zx_EASY_ENC_WO_sp_StatusCode(struct zx_ctx* c, struct zx_sp_StatusCode_s* x);

struct zx_sp_StatusCode_s {
  ZX_ELEM_EXT
  zx_sp_StatusCode_EXT
  struct zx_sp_StatusCode_s* StatusCode;	/* {0,1} nada */
  struct zx_str* Value;	/* {1,1} attribute xs:anyURI */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_sp_StatusCode_GET_Value(struct zx_sp_StatusCode_s* x);

struct zx_sp_StatusCode_s* zx_sp_StatusCode_GET_StatusCode(struct zx_sp_StatusCode_s* x, int n);

int zx_sp_StatusCode_NUM_StatusCode(struct zx_sp_StatusCode_s* x);

struct zx_sp_StatusCode_s* zx_sp_StatusCode_POP_StatusCode(struct zx_sp_StatusCode_s* x);

void zx_sp_StatusCode_PUSH_StatusCode(struct zx_sp_StatusCode_s* x, struct zx_sp_StatusCode_s* y);

void zx_sp_StatusCode_PUT_Value(struct zx_sp_StatusCode_s* x, struct zx_str* y);

void zx_sp_StatusCode_PUT_StatusCode(struct zx_sp_StatusCode_s* x, int n, struct zx_sp_StatusCode_s* y);

void zx_sp_StatusCode_ADD_StatusCode(struct zx_sp_StatusCode_s* x, int n, struct zx_sp_StatusCode_s* z);

void zx_sp_StatusCode_DEL_StatusCode(struct zx_sp_StatusCode_s* x, int n);

void zx_sp_StatusCode_REV_StatusCode(struct zx_sp_StatusCode_s* x);

#endif
/* -------------------------- sp_StatusDetail -------------------------- */
/* refby( zx_sp_Status_s ) */
#ifndef zx_sp_StatusDetail_EXT
#define zx_sp_StatusDetail_EXT
#endif

struct zx_sp_StatusDetail_s* zx_DEC_sp_StatusDetail(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_sp_StatusDetail_s* zx_NEW_sp_StatusDetail(struct zx_ctx* c);
void zx_FREE_sp_StatusDetail(struct zx_ctx* c, struct zx_sp_StatusDetail_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_sp_StatusDetail_s* zx_DEEP_CLONE_sp_StatusDetail(struct zx_ctx* c, struct zx_sp_StatusDetail_s* x, int dup_strs);
void zx_DUP_STRS_sp_StatusDetail(struct zx_ctx* c, struct zx_sp_StatusDetail_s* x);
int zx_WALK_SO_sp_StatusDetail(struct zx_ctx* c, struct zx_sp_StatusDetail_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_sp_StatusDetail(struct zx_ctx* c, struct zx_sp_StatusDetail_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_sp_StatusDetail(struct zx_ctx* c, struct zx_sp_StatusDetail_s* x);
int zx_LEN_WO_sp_StatusDetail(struct zx_ctx* c, struct zx_sp_StatusDetail_s* x);
char* zx_ENC_SO_sp_StatusDetail(struct zx_ctx* c, struct zx_sp_StatusDetail_s* x, char* p);
char* zx_ENC_WO_sp_StatusDetail(struct zx_ctx* c, struct zx_sp_StatusDetail_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_sp_StatusDetail(struct zx_ctx* c, struct zx_sp_StatusDetail_s* x);
struct zx_str* zx_EASY_ENC_WO_sp_StatusDetail(struct zx_ctx* c, struct zx_sp_StatusDetail_s* x);

struct zx_sp_StatusDetail_s {
  ZX_ELEM_EXT
  zx_sp_StatusDetail_EXT
};

#ifdef ZX_ENA_GETPUT










#endif
/* -------------------------- sp_SubjectQuery -------------------------- */
/* refby( ) */
#ifndef zx_sp_SubjectQuery_EXT
#define zx_sp_SubjectQuery_EXT
#endif

struct zx_sp_SubjectQuery_s* zx_DEC_sp_SubjectQuery(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_sp_SubjectQuery_s* zx_NEW_sp_SubjectQuery(struct zx_ctx* c);
void zx_FREE_sp_SubjectQuery(struct zx_ctx* c, struct zx_sp_SubjectQuery_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_sp_SubjectQuery_s* zx_DEEP_CLONE_sp_SubjectQuery(struct zx_ctx* c, struct zx_sp_SubjectQuery_s* x, int dup_strs);
void zx_DUP_STRS_sp_SubjectQuery(struct zx_ctx* c, struct zx_sp_SubjectQuery_s* x);
int zx_WALK_SO_sp_SubjectQuery(struct zx_ctx* c, struct zx_sp_SubjectQuery_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_sp_SubjectQuery(struct zx_ctx* c, struct zx_sp_SubjectQuery_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_sp_SubjectQuery(struct zx_ctx* c, struct zx_sp_SubjectQuery_s* x);
int zx_LEN_WO_sp_SubjectQuery(struct zx_ctx* c, struct zx_sp_SubjectQuery_s* x);
char* zx_ENC_SO_sp_SubjectQuery(struct zx_ctx* c, struct zx_sp_SubjectQuery_s* x, char* p);
char* zx_ENC_WO_sp_SubjectQuery(struct zx_ctx* c, struct zx_sp_SubjectQuery_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_sp_SubjectQuery(struct zx_ctx* c, struct zx_sp_SubjectQuery_s* x);
struct zx_str* zx_EASY_ENC_WO_sp_SubjectQuery(struct zx_ctx* c, struct zx_sp_SubjectQuery_s* x);

struct zx_sp_SubjectQuery_s {
  ZX_ELEM_EXT
  zx_sp_SubjectQuery_EXT
  struct zx_sa_Issuer_s* Issuer;	/* {0,1} nada */
  struct zx_ds_Signature_s* Signature;	/* {0,1} nada */
  struct zx_sp_Extensions_s* Extensions;	/* {0,1}  */
  struct zx_sa_Subject_s* Subject;	/* {1,1} nada */
  struct zx_str* Consent;	/* {0,1} attribute xs:anyURI */
  struct zx_str* Destination;	/* {0,1} attribute xs:anyURI */
  struct zx_str* ID;	/* {1,1} attribute xs:anyURI */
  struct zx_str* IssueInstant;	/* {1,1} attribute xs:dateTime */
  struct zx_str* Version;	/* {1,1} attribute xa:VersionType */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_sp_SubjectQuery_GET_Consent(struct zx_sp_SubjectQuery_s* x);
struct zx_str* zx_sp_SubjectQuery_GET_Destination(struct zx_sp_SubjectQuery_s* x);
struct zx_str* zx_sp_SubjectQuery_GET_ID(struct zx_sp_SubjectQuery_s* x);
struct zx_str* zx_sp_SubjectQuery_GET_IssueInstant(struct zx_sp_SubjectQuery_s* x);
struct zx_str* zx_sp_SubjectQuery_GET_Version(struct zx_sp_SubjectQuery_s* x);

struct zx_sa_Issuer_s* zx_sp_SubjectQuery_GET_Issuer(struct zx_sp_SubjectQuery_s* x, int n);
struct zx_ds_Signature_s* zx_sp_SubjectQuery_GET_Signature(struct zx_sp_SubjectQuery_s* x, int n);
struct zx_sp_Extensions_s* zx_sp_SubjectQuery_GET_Extensions(struct zx_sp_SubjectQuery_s* x, int n);
struct zx_sa_Subject_s* zx_sp_SubjectQuery_GET_Subject(struct zx_sp_SubjectQuery_s* x, int n);

int zx_sp_SubjectQuery_NUM_Issuer(struct zx_sp_SubjectQuery_s* x);
int zx_sp_SubjectQuery_NUM_Signature(struct zx_sp_SubjectQuery_s* x);
int zx_sp_SubjectQuery_NUM_Extensions(struct zx_sp_SubjectQuery_s* x);
int zx_sp_SubjectQuery_NUM_Subject(struct zx_sp_SubjectQuery_s* x);

struct zx_sa_Issuer_s* zx_sp_SubjectQuery_POP_Issuer(struct zx_sp_SubjectQuery_s* x);
struct zx_ds_Signature_s* zx_sp_SubjectQuery_POP_Signature(struct zx_sp_SubjectQuery_s* x);
struct zx_sp_Extensions_s* zx_sp_SubjectQuery_POP_Extensions(struct zx_sp_SubjectQuery_s* x);
struct zx_sa_Subject_s* zx_sp_SubjectQuery_POP_Subject(struct zx_sp_SubjectQuery_s* x);

void zx_sp_SubjectQuery_PUSH_Issuer(struct zx_sp_SubjectQuery_s* x, struct zx_sa_Issuer_s* y);
void zx_sp_SubjectQuery_PUSH_Signature(struct zx_sp_SubjectQuery_s* x, struct zx_ds_Signature_s* y);
void zx_sp_SubjectQuery_PUSH_Extensions(struct zx_sp_SubjectQuery_s* x, struct zx_sp_Extensions_s* y);
void zx_sp_SubjectQuery_PUSH_Subject(struct zx_sp_SubjectQuery_s* x, struct zx_sa_Subject_s* y);

void zx_sp_SubjectQuery_PUT_Consent(struct zx_sp_SubjectQuery_s* x, struct zx_str* y);
void zx_sp_SubjectQuery_PUT_Destination(struct zx_sp_SubjectQuery_s* x, struct zx_str* y);
void zx_sp_SubjectQuery_PUT_ID(struct zx_sp_SubjectQuery_s* x, struct zx_str* y);
void zx_sp_SubjectQuery_PUT_IssueInstant(struct zx_sp_SubjectQuery_s* x, struct zx_str* y);
void zx_sp_SubjectQuery_PUT_Version(struct zx_sp_SubjectQuery_s* x, struct zx_str* y);

void zx_sp_SubjectQuery_PUT_Issuer(struct zx_sp_SubjectQuery_s* x, int n, struct zx_sa_Issuer_s* y);
void zx_sp_SubjectQuery_PUT_Signature(struct zx_sp_SubjectQuery_s* x, int n, struct zx_ds_Signature_s* y);
void zx_sp_SubjectQuery_PUT_Extensions(struct zx_sp_SubjectQuery_s* x, int n, struct zx_sp_Extensions_s* y);
void zx_sp_SubjectQuery_PUT_Subject(struct zx_sp_SubjectQuery_s* x, int n, struct zx_sa_Subject_s* y);

void zx_sp_SubjectQuery_ADD_Issuer(struct zx_sp_SubjectQuery_s* x, int n, struct zx_sa_Issuer_s* z);
void zx_sp_SubjectQuery_ADD_Signature(struct zx_sp_SubjectQuery_s* x, int n, struct zx_ds_Signature_s* z);
void zx_sp_SubjectQuery_ADD_Extensions(struct zx_sp_SubjectQuery_s* x, int n, struct zx_sp_Extensions_s* z);
void zx_sp_SubjectQuery_ADD_Subject(struct zx_sp_SubjectQuery_s* x, int n, struct zx_sa_Subject_s* z);

void zx_sp_SubjectQuery_DEL_Issuer(struct zx_sp_SubjectQuery_s* x, int n);
void zx_sp_SubjectQuery_DEL_Signature(struct zx_sp_SubjectQuery_s* x, int n);
void zx_sp_SubjectQuery_DEL_Extensions(struct zx_sp_SubjectQuery_s* x, int n);
void zx_sp_SubjectQuery_DEL_Subject(struct zx_sp_SubjectQuery_s* x, int n);

void zx_sp_SubjectQuery_REV_Issuer(struct zx_sp_SubjectQuery_s* x);
void zx_sp_SubjectQuery_REV_Signature(struct zx_sp_SubjectQuery_s* x);
void zx_sp_SubjectQuery_REV_Extensions(struct zx_sp_SubjectQuery_s* x);
void zx_sp_SubjectQuery_REV_Subject(struct zx_sp_SubjectQuery_s* x);

#endif

#endif
