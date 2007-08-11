/* c/zx-di12-data.h - WARNING: This header was automatically generated. DO NOT EDIT!
 * $Id$ */
/* Datastructure design, topography, and layout
 * Copyright (c) 2006 Sampo Kellomaki (sampo@iki.fi),
 * All Rights Reserved. NO WARRANTY. See file COPYING for
 * terms and conditions of use. Element and attributes names as well
 * as some topography are derived from schema descriptions that were used as
 * input and may be subject to their own copright. */

#ifndef _c_zx_di12_data_h
#define _c_zx_di12_data_h

#include "zx.h"
#include "c/zx-const.h"
#include "c/zx-data.h"

#ifndef ZX_ELEM_EXT
#define ZX_ELEM_EXT  /* This extension point should be defined by who includes this file. */
#endif

/* -------------------------- di12_AuthenticateRequester -------------------------- */
/* refby( ) */
#ifndef zx_di12_AuthenticateRequester_EXT
#define zx_di12_AuthenticateRequester_EXT
#endif

struct zx_di12_AuthenticateRequester_s* zx_DEC_di12_AuthenticateRequester(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_di12_AuthenticateRequester_s* zx_NEW_di12_AuthenticateRequester(struct zx_ctx* c);
void zx_FREE_di12_AuthenticateRequester(struct zx_ctx* c, struct zx_di12_AuthenticateRequester_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_di12_AuthenticateRequester_s* zx_DEEP_CLONE_di12_AuthenticateRequester(struct zx_ctx* c, struct zx_di12_AuthenticateRequester_s* x, int dup_strs);
void zx_DUP_STRS_di12_AuthenticateRequester(struct zx_ctx* c, struct zx_di12_AuthenticateRequester_s* x);
int zx_WALK_SO_di12_AuthenticateRequester(struct zx_ctx* c, struct zx_di12_AuthenticateRequester_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_di12_AuthenticateRequester(struct zx_ctx* c, struct zx_di12_AuthenticateRequester_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_di12_AuthenticateRequester(struct zx_ctx* c, struct zx_di12_AuthenticateRequester_s* x);
int zx_LEN_WO_di12_AuthenticateRequester(struct zx_ctx* c, struct zx_di12_AuthenticateRequester_s* x);
char* zx_ENC_SO_di12_AuthenticateRequester(struct zx_ctx* c, struct zx_di12_AuthenticateRequester_s* x, char* p);
char* zx_ENC_WO_di12_AuthenticateRequester(struct zx_ctx* c, struct zx_di12_AuthenticateRequester_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_di12_AuthenticateRequester(struct zx_ctx* c, struct zx_di12_AuthenticateRequester_s* x);
struct zx_str* zx_EASY_ENC_WO_di12_AuthenticateRequester(struct zx_ctx* c, struct zx_di12_AuthenticateRequester_s* x);

struct zx_di12_AuthenticateRequester_s {
  ZX_ELEM_EXT
  zx_di12_AuthenticateRequester_EXT
  struct zx_str* descriptionIDRefs;	/* {0,1} attribute xs:IDREFS */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_di12_AuthenticateRequester_GET_descriptionIDRefs(struct zx_di12_AuthenticateRequester_s* x);





void zx_di12_AuthenticateRequester_PUT_descriptionIDRefs(struct zx_di12_AuthenticateRequester_s* x, struct zx_str* y);





#endif
/* -------------------------- di12_AuthenticateSessionContext -------------------------- */
/* refby( ) */
#ifndef zx_di12_AuthenticateSessionContext_EXT
#define zx_di12_AuthenticateSessionContext_EXT
#endif

struct zx_di12_AuthenticateSessionContext_s* zx_DEC_di12_AuthenticateSessionContext(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_di12_AuthenticateSessionContext_s* zx_NEW_di12_AuthenticateSessionContext(struct zx_ctx* c);
void zx_FREE_di12_AuthenticateSessionContext(struct zx_ctx* c, struct zx_di12_AuthenticateSessionContext_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_di12_AuthenticateSessionContext_s* zx_DEEP_CLONE_di12_AuthenticateSessionContext(struct zx_ctx* c, struct zx_di12_AuthenticateSessionContext_s* x, int dup_strs);
void zx_DUP_STRS_di12_AuthenticateSessionContext(struct zx_ctx* c, struct zx_di12_AuthenticateSessionContext_s* x);
int zx_WALK_SO_di12_AuthenticateSessionContext(struct zx_ctx* c, struct zx_di12_AuthenticateSessionContext_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_di12_AuthenticateSessionContext(struct zx_ctx* c, struct zx_di12_AuthenticateSessionContext_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_di12_AuthenticateSessionContext(struct zx_ctx* c, struct zx_di12_AuthenticateSessionContext_s* x);
int zx_LEN_WO_di12_AuthenticateSessionContext(struct zx_ctx* c, struct zx_di12_AuthenticateSessionContext_s* x);
char* zx_ENC_SO_di12_AuthenticateSessionContext(struct zx_ctx* c, struct zx_di12_AuthenticateSessionContext_s* x, char* p);
char* zx_ENC_WO_di12_AuthenticateSessionContext(struct zx_ctx* c, struct zx_di12_AuthenticateSessionContext_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_di12_AuthenticateSessionContext(struct zx_ctx* c, struct zx_di12_AuthenticateSessionContext_s* x);
struct zx_str* zx_EASY_ENC_WO_di12_AuthenticateSessionContext(struct zx_ctx* c, struct zx_di12_AuthenticateSessionContext_s* x);

struct zx_di12_AuthenticateSessionContext_s {
  ZX_ELEM_EXT
  zx_di12_AuthenticateSessionContext_EXT
  struct zx_str* descriptionIDRefs;	/* {0,1} attribute xs:IDREFS */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_di12_AuthenticateSessionContext_GET_descriptionIDRefs(struct zx_di12_AuthenticateSessionContext_s* x);





void zx_di12_AuthenticateSessionContext_PUT_descriptionIDRefs(struct zx_di12_AuthenticateSessionContext_s* x, struct zx_str* y);





#endif
/* -------------------------- di12_AuthorizeRequester -------------------------- */
/* refby( ) */
#ifndef zx_di12_AuthorizeRequester_EXT
#define zx_di12_AuthorizeRequester_EXT
#endif

struct zx_di12_AuthorizeRequester_s* zx_DEC_di12_AuthorizeRequester(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_di12_AuthorizeRequester_s* zx_NEW_di12_AuthorizeRequester(struct zx_ctx* c);
void zx_FREE_di12_AuthorizeRequester(struct zx_ctx* c, struct zx_di12_AuthorizeRequester_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_di12_AuthorizeRequester_s* zx_DEEP_CLONE_di12_AuthorizeRequester(struct zx_ctx* c, struct zx_di12_AuthorizeRequester_s* x, int dup_strs);
void zx_DUP_STRS_di12_AuthorizeRequester(struct zx_ctx* c, struct zx_di12_AuthorizeRequester_s* x);
int zx_WALK_SO_di12_AuthorizeRequester(struct zx_ctx* c, struct zx_di12_AuthorizeRequester_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_di12_AuthorizeRequester(struct zx_ctx* c, struct zx_di12_AuthorizeRequester_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_di12_AuthorizeRequester(struct zx_ctx* c, struct zx_di12_AuthorizeRequester_s* x);
int zx_LEN_WO_di12_AuthorizeRequester(struct zx_ctx* c, struct zx_di12_AuthorizeRequester_s* x);
char* zx_ENC_SO_di12_AuthorizeRequester(struct zx_ctx* c, struct zx_di12_AuthorizeRequester_s* x, char* p);
char* zx_ENC_WO_di12_AuthorizeRequester(struct zx_ctx* c, struct zx_di12_AuthorizeRequester_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_di12_AuthorizeRequester(struct zx_ctx* c, struct zx_di12_AuthorizeRequester_s* x);
struct zx_str* zx_EASY_ENC_WO_di12_AuthorizeRequester(struct zx_ctx* c, struct zx_di12_AuthorizeRequester_s* x);

struct zx_di12_AuthorizeRequester_s {
  ZX_ELEM_EXT
  zx_di12_AuthorizeRequester_EXT
  struct zx_str* descriptionIDRefs;	/* {0,1} attribute xs:IDREFS */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_di12_AuthorizeRequester_GET_descriptionIDRefs(struct zx_di12_AuthorizeRequester_s* x);





void zx_di12_AuthorizeRequester_PUT_descriptionIDRefs(struct zx_di12_AuthorizeRequester_s* x, struct zx_str* y);





#endif
/* -------------------------- di12_Credentials -------------------------- */
/* refby( zx_di12_QueryResponse_s ) */
#ifndef zx_di12_Credentials_EXT
#define zx_di12_Credentials_EXT
#endif

struct zx_di12_Credentials_s* zx_DEC_di12_Credentials(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_di12_Credentials_s* zx_NEW_di12_Credentials(struct zx_ctx* c);
void zx_FREE_di12_Credentials(struct zx_ctx* c, struct zx_di12_Credentials_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_di12_Credentials_s* zx_DEEP_CLONE_di12_Credentials(struct zx_ctx* c, struct zx_di12_Credentials_s* x, int dup_strs);
void zx_DUP_STRS_di12_Credentials(struct zx_ctx* c, struct zx_di12_Credentials_s* x);
int zx_WALK_SO_di12_Credentials(struct zx_ctx* c, struct zx_di12_Credentials_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_di12_Credentials(struct zx_ctx* c, struct zx_di12_Credentials_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_di12_Credentials(struct zx_ctx* c, struct zx_di12_Credentials_s* x);
int zx_LEN_WO_di12_Credentials(struct zx_ctx* c, struct zx_di12_Credentials_s* x);
char* zx_ENC_SO_di12_Credentials(struct zx_ctx* c, struct zx_di12_Credentials_s* x, char* p);
char* zx_ENC_WO_di12_Credentials(struct zx_ctx* c, struct zx_di12_Credentials_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_di12_Credentials(struct zx_ctx* c, struct zx_di12_Credentials_s* x);
struct zx_str* zx_EASY_ENC_WO_di12_Credentials(struct zx_ctx* c, struct zx_di12_Credentials_s* x);

struct zx_di12_Credentials_s {
  ZX_ELEM_EXT
  zx_di12_Credentials_EXT
};

#ifdef ZX_ENA_GETPUT










#endif
/* -------------------------- di12_Description -------------------------- */
/* refby( zx_di12_ServiceInstance_s ) */
#ifndef zx_di12_Description_EXT
#define zx_di12_Description_EXT
#endif

struct zx_di12_Description_s* zx_DEC_di12_Description(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_di12_Description_s* zx_NEW_di12_Description(struct zx_ctx* c);
void zx_FREE_di12_Description(struct zx_ctx* c, struct zx_di12_Description_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_di12_Description_s* zx_DEEP_CLONE_di12_Description(struct zx_ctx* c, struct zx_di12_Description_s* x, int dup_strs);
void zx_DUP_STRS_di12_Description(struct zx_ctx* c, struct zx_di12_Description_s* x);
int zx_WALK_SO_di12_Description(struct zx_ctx* c, struct zx_di12_Description_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_di12_Description(struct zx_ctx* c, struct zx_di12_Description_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_di12_Description(struct zx_ctx* c, struct zx_di12_Description_s* x);
int zx_LEN_WO_di12_Description(struct zx_ctx* c, struct zx_di12_Description_s* x);
char* zx_ENC_SO_di12_Description(struct zx_ctx* c, struct zx_di12_Description_s* x, char* p);
char* zx_ENC_WO_di12_Description(struct zx_ctx* c, struct zx_di12_Description_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_di12_Description(struct zx_ctx* c, struct zx_di12_Description_s* x);
struct zx_str* zx_EASY_ENC_WO_di12_Description(struct zx_ctx* c, struct zx_di12_Description_s* x);

struct zx_di12_Description_s {
  ZX_ELEM_EXT
  zx_di12_Description_EXT
  struct zx_elem_s* SecurityMechID;	/* {1,-1} xs:anyURI */
  struct zx_elem_s* CredentialRef;	/* {0,-1} xs:IDREF */
  struct zx_elem_s* WsdlURI;	/* {1,1} xs:anyURI */
  struct zx_elem_s* ServiceNameRef;	/* {1,1} xs:QName */
  struct zx_elem_s* Endpoint;	/* {1,1} xs:anyURI */
  struct zx_elem_s* SoapAction;	/* {0,1} xs:anyURI */
  struct zx_str* id;	/* {0,1} attribute xs:ID */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_di12_Description_GET_id(struct zx_di12_Description_s* x);

struct zx_elem_s* zx_di12_Description_GET_SecurityMechID(struct zx_di12_Description_s* x, int n);
struct zx_elem_s* zx_di12_Description_GET_CredentialRef(struct zx_di12_Description_s* x, int n);
struct zx_elem_s* zx_di12_Description_GET_WsdlURI(struct zx_di12_Description_s* x, int n);
struct zx_elem_s* zx_di12_Description_GET_ServiceNameRef(struct zx_di12_Description_s* x, int n);
struct zx_elem_s* zx_di12_Description_GET_Endpoint(struct zx_di12_Description_s* x, int n);
struct zx_elem_s* zx_di12_Description_GET_SoapAction(struct zx_di12_Description_s* x, int n);

int zx_di12_Description_NUM_SecurityMechID(struct zx_di12_Description_s* x);
int zx_di12_Description_NUM_CredentialRef(struct zx_di12_Description_s* x);
int zx_di12_Description_NUM_WsdlURI(struct zx_di12_Description_s* x);
int zx_di12_Description_NUM_ServiceNameRef(struct zx_di12_Description_s* x);
int zx_di12_Description_NUM_Endpoint(struct zx_di12_Description_s* x);
int zx_di12_Description_NUM_SoapAction(struct zx_di12_Description_s* x);

struct zx_elem_s* zx_di12_Description_POP_SecurityMechID(struct zx_di12_Description_s* x);
struct zx_elem_s* zx_di12_Description_POP_CredentialRef(struct zx_di12_Description_s* x);
struct zx_elem_s* zx_di12_Description_POP_WsdlURI(struct zx_di12_Description_s* x);
struct zx_elem_s* zx_di12_Description_POP_ServiceNameRef(struct zx_di12_Description_s* x);
struct zx_elem_s* zx_di12_Description_POP_Endpoint(struct zx_di12_Description_s* x);
struct zx_elem_s* zx_di12_Description_POP_SoapAction(struct zx_di12_Description_s* x);

void zx_di12_Description_PUSH_SecurityMechID(struct zx_di12_Description_s* x, struct zx_elem_s* y);
void zx_di12_Description_PUSH_CredentialRef(struct zx_di12_Description_s* x, struct zx_elem_s* y);
void zx_di12_Description_PUSH_WsdlURI(struct zx_di12_Description_s* x, struct zx_elem_s* y);
void zx_di12_Description_PUSH_ServiceNameRef(struct zx_di12_Description_s* x, struct zx_elem_s* y);
void zx_di12_Description_PUSH_Endpoint(struct zx_di12_Description_s* x, struct zx_elem_s* y);
void zx_di12_Description_PUSH_SoapAction(struct zx_di12_Description_s* x, struct zx_elem_s* y);

void zx_di12_Description_PUT_id(struct zx_di12_Description_s* x, struct zx_str* y);

void zx_di12_Description_PUT_SecurityMechID(struct zx_di12_Description_s* x, int n, struct zx_elem_s* y);
void zx_di12_Description_PUT_CredentialRef(struct zx_di12_Description_s* x, int n, struct zx_elem_s* y);
void zx_di12_Description_PUT_WsdlURI(struct zx_di12_Description_s* x, int n, struct zx_elem_s* y);
void zx_di12_Description_PUT_ServiceNameRef(struct zx_di12_Description_s* x, int n, struct zx_elem_s* y);
void zx_di12_Description_PUT_Endpoint(struct zx_di12_Description_s* x, int n, struct zx_elem_s* y);
void zx_di12_Description_PUT_SoapAction(struct zx_di12_Description_s* x, int n, struct zx_elem_s* y);

void zx_di12_Description_ADD_SecurityMechID(struct zx_di12_Description_s* x, int n, struct zx_elem_s* z);
void zx_di12_Description_ADD_CredentialRef(struct zx_di12_Description_s* x, int n, struct zx_elem_s* z);
void zx_di12_Description_ADD_WsdlURI(struct zx_di12_Description_s* x, int n, struct zx_elem_s* z);
void zx_di12_Description_ADD_ServiceNameRef(struct zx_di12_Description_s* x, int n, struct zx_elem_s* z);
void zx_di12_Description_ADD_Endpoint(struct zx_di12_Description_s* x, int n, struct zx_elem_s* z);
void zx_di12_Description_ADD_SoapAction(struct zx_di12_Description_s* x, int n, struct zx_elem_s* z);

void zx_di12_Description_DEL_SecurityMechID(struct zx_di12_Description_s* x, int n);
void zx_di12_Description_DEL_CredentialRef(struct zx_di12_Description_s* x, int n);
void zx_di12_Description_DEL_WsdlURI(struct zx_di12_Description_s* x, int n);
void zx_di12_Description_DEL_ServiceNameRef(struct zx_di12_Description_s* x, int n);
void zx_di12_Description_DEL_Endpoint(struct zx_di12_Description_s* x, int n);
void zx_di12_Description_DEL_SoapAction(struct zx_di12_Description_s* x, int n);

void zx_di12_Description_REV_SecurityMechID(struct zx_di12_Description_s* x);
void zx_di12_Description_REV_CredentialRef(struct zx_di12_Description_s* x);
void zx_di12_Description_REV_WsdlURI(struct zx_di12_Description_s* x);
void zx_di12_Description_REV_ServiceNameRef(struct zx_di12_Description_s* x);
void zx_di12_Description_REV_Endpoint(struct zx_di12_Description_s* x);
void zx_di12_Description_REV_SoapAction(struct zx_di12_Description_s* x);

#endif
/* -------------------------- di12_EncryptResourceID -------------------------- */
/* refby( ) */
#ifndef zx_di12_EncryptResourceID_EXT
#define zx_di12_EncryptResourceID_EXT
#endif

struct zx_di12_EncryptResourceID_s* zx_DEC_di12_EncryptResourceID(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_di12_EncryptResourceID_s* zx_NEW_di12_EncryptResourceID(struct zx_ctx* c);
void zx_FREE_di12_EncryptResourceID(struct zx_ctx* c, struct zx_di12_EncryptResourceID_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_di12_EncryptResourceID_s* zx_DEEP_CLONE_di12_EncryptResourceID(struct zx_ctx* c, struct zx_di12_EncryptResourceID_s* x, int dup_strs);
void zx_DUP_STRS_di12_EncryptResourceID(struct zx_ctx* c, struct zx_di12_EncryptResourceID_s* x);
int zx_WALK_SO_di12_EncryptResourceID(struct zx_ctx* c, struct zx_di12_EncryptResourceID_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_di12_EncryptResourceID(struct zx_ctx* c, struct zx_di12_EncryptResourceID_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_di12_EncryptResourceID(struct zx_ctx* c, struct zx_di12_EncryptResourceID_s* x);
int zx_LEN_WO_di12_EncryptResourceID(struct zx_ctx* c, struct zx_di12_EncryptResourceID_s* x);
char* zx_ENC_SO_di12_EncryptResourceID(struct zx_ctx* c, struct zx_di12_EncryptResourceID_s* x, char* p);
char* zx_ENC_WO_di12_EncryptResourceID(struct zx_ctx* c, struct zx_di12_EncryptResourceID_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_di12_EncryptResourceID(struct zx_ctx* c, struct zx_di12_EncryptResourceID_s* x);
struct zx_str* zx_EASY_ENC_WO_di12_EncryptResourceID(struct zx_ctx* c, struct zx_di12_EncryptResourceID_s* x);

struct zx_di12_EncryptResourceID_s {
  ZX_ELEM_EXT
  zx_di12_EncryptResourceID_EXT
  struct zx_str* descriptionIDRefs;	/* {0,1} attribute xs:IDREFS */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_di12_EncryptResourceID_GET_descriptionIDRefs(struct zx_di12_EncryptResourceID_s* x);





void zx_di12_EncryptResourceID_PUT_descriptionIDRefs(struct zx_di12_EncryptResourceID_s* x, struct zx_str* y);





#endif
/* -------------------------- di12_EncryptedResourceID -------------------------- */
/* refby( zx_sec12_ResourceAccessStatement_s zx_di12_Query_s zx_di12_ResourceOffering_s zx_di12_Modify_s zx_is12_InteractionService_s ) */
#ifndef zx_di12_EncryptedResourceID_EXT
#define zx_di12_EncryptedResourceID_EXT
#endif

struct zx_di12_EncryptedResourceID_s* zx_DEC_di12_EncryptedResourceID(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_di12_EncryptedResourceID_s* zx_NEW_di12_EncryptedResourceID(struct zx_ctx* c);
void zx_FREE_di12_EncryptedResourceID(struct zx_ctx* c, struct zx_di12_EncryptedResourceID_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_di12_EncryptedResourceID_s* zx_DEEP_CLONE_di12_EncryptedResourceID(struct zx_ctx* c, struct zx_di12_EncryptedResourceID_s* x, int dup_strs);
void zx_DUP_STRS_di12_EncryptedResourceID(struct zx_ctx* c, struct zx_di12_EncryptedResourceID_s* x);
int zx_WALK_SO_di12_EncryptedResourceID(struct zx_ctx* c, struct zx_di12_EncryptedResourceID_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_di12_EncryptedResourceID(struct zx_ctx* c, struct zx_di12_EncryptedResourceID_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_di12_EncryptedResourceID(struct zx_ctx* c, struct zx_di12_EncryptedResourceID_s* x);
int zx_LEN_WO_di12_EncryptedResourceID(struct zx_ctx* c, struct zx_di12_EncryptedResourceID_s* x);
char* zx_ENC_SO_di12_EncryptedResourceID(struct zx_ctx* c, struct zx_di12_EncryptedResourceID_s* x, char* p);
char* zx_ENC_WO_di12_EncryptedResourceID(struct zx_ctx* c, struct zx_di12_EncryptedResourceID_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_di12_EncryptedResourceID(struct zx_ctx* c, struct zx_di12_EncryptedResourceID_s* x);
struct zx_str* zx_EASY_ENC_WO_di12_EncryptedResourceID(struct zx_ctx* c, struct zx_di12_EncryptedResourceID_s* x);

struct zx_di12_EncryptedResourceID_s {
  ZX_ELEM_EXT
  zx_di12_EncryptedResourceID_EXT
  struct zx_xenc_EncryptedData_s* EncryptedData;	/* {1,1} nada */
  struct zx_xenc_EncryptedKey_s* EncryptedKey;	/* {1,1} nada */
};

#ifdef ZX_ENA_GETPUT

struct zx_xenc_EncryptedData_s* zx_di12_EncryptedResourceID_GET_EncryptedData(struct zx_di12_EncryptedResourceID_s* x, int n);
struct zx_xenc_EncryptedKey_s* zx_di12_EncryptedResourceID_GET_EncryptedKey(struct zx_di12_EncryptedResourceID_s* x, int n);

int zx_di12_EncryptedResourceID_NUM_EncryptedData(struct zx_di12_EncryptedResourceID_s* x);
int zx_di12_EncryptedResourceID_NUM_EncryptedKey(struct zx_di12_EncryptedResourceID_s* x);

struct zx_xenc_EncryptedData_s* zx_di12_EncryptedResourceID_POP_EncryptedData(struct zx_di12_EncryptedResourceID_s* x);
struct zx_xenc_EncryptedKey_s* zx_di12_EncryptedResourceID_POP_EncryptedKey(struct zx_di12_EncryptedResourceID_s* x);

void zx_di12_EncryptedResourceID_PUSH_EncryptedData(struct zx_di12_EncryptedResourceID_s* x, struct zx_xenc_EncryptedData_s* y);
void zx_di12_EncryptedResourceID_PUSH_EncryptedKey(struct zx_di12_EncryptedResourceID_s* x, struct zx_xenc_EncryptedKey_s* y);


void zx_di12_EncryptedResourceID_PUT_EncryptedData(struct zx_di12_EncryptedResourceID_s* x, int n, struct zx_xenc_EncryptedData_s* y);
void zx_di12_EncryptedResourceID_PUT_EncryptedKey(struct zx_di12_EncryptedResourceID_s* x, int n, struct zx_xenc_EncryptedKey_s* y);

void zx_di12_EncryptedResourceID_ADD_EncryptedData(struct zx_di12_EncryptedResourceID_s* x, int n, struct zx_xenc_EncryptedData_s* z);
void zx_di12_EncryptedResourceID_ADD_EncryptedKey(struct zx_di12_EncryptedResourceID_s* x, int n, struct zx_xenc_EncryptedKey_s* z);

void zx_di12_EncryptedResourceID_DEL_EncryptedData(struct zx_di12_EncryptedResourceID_s* x, int n);
void zx_di12_EncryptedResourceID_DEL_EncryptedKey(struct zx_di12_EncryptedResourceID_s* x, int n);

void zx_di12_EncryptedResourceID_REV_EncryptedData(struct zx_di12_EncryptedResourceID_s* x);
void zx_di12_EncryptedResourceID_REV_EncryptedKey(struct zx_di12_EncryptedResourceID_s* x);

#endif
/* -------------------------- di12_Extension -------------------------- */
/* refby( zx_di12_ModifyResponse_s ) */
#ifndef zx_di12_Extension_EXT
#define zx_di12_Extension_EXT
#endif

struct zx_di12_Extension_s* zx_DEC_di12_Extension(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_di12_Extension_s* zx_NEW_di12_Extension(struct zx_ctx* c);
void zx_FREE_di12_Extension(struct zx_ctx* c, struct zx_di12_Extension_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_di12_Extension_s* zx_DEEP_CLONE_di12_Extension(struct zx_ctx* c, struct zx_di12_Extension_s* x, int dup_strs);
void zx_DUP_STRS_di12_Extension(struct zx_ctx* c, struct zx_di12_Extension_s* x);
int zx_WALK_SO_di12_Extension(struct zx_ctx* c, struct zx_di12_Extension_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_di12_Extension(struct zx_ctx* c, struct zx_di12_Extension_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_di12_Extension(struct zx_ctx* c, struct zx_di12_Extension_s* x);
int zx_LEN_WO_di12_Extension(struct zx_ctx* c, struct zx_di12_Extension_s* x);
char* zx_ENC_SO_di12_Extension(struct zx_ctx* c, struct zx_di12_Extension_s* x, char* p);
char* zx_ENC_WO_di12_Extension(struct zx_ctx* c, struct zx_di12_Extension_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_di12_Extension(struct zx_ctx* c, struct zx_di12_Extension_s* x);
struct zx_str* zx_EASY_ENC_WO_di12_Extension(struct zx_ctx* c, struct zx_di12_Extension_s* x);

struct zx_di12_Extension_s {
  ZX_ELEM_EXT
  zx_di12_Extension_EXT
};

#ifdef ZX_ENA_GETPUT










#endif
/* -------------------------- di12_InsertEntry -------------------------- */
/* refby( zx_di12_Modify_s ) */
#ifndef zx_di12_InsertEntry_EXT
#define zx_di12_InsertEntry_EXT
#endif

struct zx_di12_InsertEntry_s* zx_DEC_di12_InsertEntry(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_di12_InsertEntry_s* zx_NEW_di12_InsertEntry(struct zx_ctx* c);
void zx_FREE_di12_InsertEntry(struct zx_ctx* c, struct zx_di12_InsertEntry_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_di12_InsertEntry_s* zx_DEEP_CLONE_di12_InsertEntry(struct zx_ctx* c, struct zx_di12_InsertEntry_s* x, int dup_strs);
void zx_DUP_STRS_di12_InsertEntry(struct zx_ctx* c, struct zx_di12_InsertEntry_s* x);
int zx_WALK_SO_di12_InsertEntry(struct zx_ctx* c, struct zx_di12_InsertEntry_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_di12_InsertEntry(struct zx_ctx* c, struct zx_di12_InsertEntry_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_di12_InsertEntry(struct zx_ctx* c, struct zx_di12_InsertEntry_s* x);
int zx_LEN_WO_di12_InsertEntry(struct zx_ctx* c, struct zx_di12_InsertEntry_s* x);
char* zx_ENC_SO_di12_InsertEntry(struct zx_ctx* c, struct zx_di12_InsertEntry_s* x, char* p);
char* zx_ENC_WO_di12_InsertEntry(struct zx_ctx* c, struct zx_di12_InsertEntry_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_di12_InsertEntry(struct zx_ctx* c, struct zx_di12_InsertEntry_s* x);
struct zx_str* zx_EASY_ENC_WO_di12_InsertEntry(struct zx_ctx* c, struct zx_di12_InsertEntry_s* x);

struct zx_di12_InsertEntry_s {
  ZX_ELEM_EXT
  zx_di12_InsertEntry_EXT
  struct zx_di12_ResourceOffering_s* ResourceOffering;	/* {1,1} nada */
};

#ifdef ZX_ENA_GETPUT

struct zx_di12_ResourceOffering_s* zx_di12_InsertEntry_GET_ResourceOffering(struct zx_di12_InsertEntry_s* x, int n);

int zx_di12_InsertEntry_NUM_ResourceOffering(struct zx_di12_InsertEntry_s* x);

struct zx_di12_ResourceOffering_s* zx_di12_InsertEntry_POP_ResourceOffering(struct zx_di12_InsertEntry_s* x);

void zx_di12_InsertEntry_PUSH_ResourceOffering(struct zx_di12_InsertEntry_s* x, struct zx_di12_ResourceOffering_s* y);


void zx_di12_InsertEntry_PUT_ResourceOffering(struct zx_di12_InsertEntry_s* x, int n, struct zx_di12_ResourceOffering_s* y);

void zx_di12_InsertEntry_ADD_ResourceOffering(struct zx_di12_InsertEntry_s* x, int n, struct zx_di12_ResourceOffering_s* z);

void zx_di12_InsertEntry_DEL_ResourceOffering(struct zx_di12_InsertEntry_s* x, int n);

void zx_di12_InsertEntry_REV_ResourceOffering(struct zx_di12_InsertEntry_s* x);

#endif
/* -------------------------- di12_Modify -------------------------- */
/* refby( zx_e_Body_s ) */
#ifndef zx_di12_Modify_EXT
#define zx_di12_Modify_EXT
#endif

struct zx_di12_Modify_s* zx_DEC_di12_Modify(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_di12_Modify_s* zx_NEW_di12_Modify(struct zx_ctx* c);
void zx_FREE_di12_Modify(struct zx_ctx* c, struct zx_di12_Modify_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_di12_Modify_s* zx_DEEP_CLONE_di12_Modify(struct zx_ctx* c, struct zx_di12_Modify_s* x, int dup_strs);
void zx_DUP_STRS_di12_Modify(struct zx_ctx* c, struct zx_di12_Modify_s* x);
int zx_WALK_SO_di12_Modify(struct zx_ctx* c, struct zx_di12_Modify_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_di12_Modify(struct zx_ctx* c, struct zx_di12_Modify_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_di12_Modify(struct zx_ctx* c, struct zx_di12_Modify_s* x);
int zx_LEN_WO_di12_Modify(struct zx_ctx* c, struct zx_di12_Modify_s* x);
char* zx_ENC_SO_di12_Modify(struct zx_ctx* c, struct zx_di12_Modify_s* x, char* p);
char* zx_ENC_WO_di12_Modify(struct zx_ctx* c, struct zx_di12_Modify_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_di12_Modify(struct zx_ctx* c, struct zx_di12_Modify_s* x);
struct zx_str* zx_EASY_ENC_WO_di12_Modify(struct zx_ctx* c, struct zx_di12_Modify_s* x);

struct zx_di12_Modify_s {
  ZX_ELEM_EXT
  zx_di12_Modify_EXT
  struct zx_di12_ResourceID_s* ResourceID;	/* {0,1} nada */
  struct zx_di12_EncryptedResourceID_s* EncryptedResourceID;	/* {0,1} nada */
  struct zx_di12_InsertEntry_s* InsertEntry;	/* {0,-1}  */
  struct zx_di12_RemoveEntry_s* RemoveEntry;	/* {0,-1}  */
  struct zx_str* id;	/* {0,1} attribute xs:ID */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_di12_Modify_GET_id(struct zx_di12_Modify_s* x);

struct zx_di12_ResourceID_s* zx_di12_Modify_GET_ResourceID(struct zx_di12_Modify_s* x, int n);
struct zx_di12_EncryptedResourceID_s* zx_di12_Modify_GET_EncryptedResourceID(struct zx_di12_Modify_s* x, int n);
struct zx_di12_InsertEntry_s* zx_di12_Modify_GET_InsertEntry(struct zx_di12_Modify_s* x, int n);
struct zx_di12_RemoveEntry_s* zx_di12_Modify_GET_RemoveEntry(struct zx_di12_Modify_s* x, int n);

int zx_di12_Modify_NUM_ResourceID(struct zx_di12_Modify_s* x);
int zx_di12_Modify_NUM_EncryptedResourceID(struct zx_di12_Modify_s* x);
int zx_di12_Modify_NUM_InsertEntry(struct zx_di12_Modify_s* x);
int zx_di12_Modify_NUM_RemoveEntry(struct zx_di12_Modify_s* x);

struct zx_di12_ResourceID_s* zx_di12_Modify_POP_ResourceID(struct zx_di12_Modify_s* x);
struct zx_di12_EncryptedResourceID_s* zx_di12_Modify_POP_EncryptedResourceID(struct zx_di12_Modify_s* x);
struct zx_di12_InsertEntry_s* zx_di12_Modify_POP_InsertEntry(struct zx_di12_Modify_s* x);
struct zx_di12_RemoveEntry_s* zx_di12_Modify_POP_RemoveEntry(struct zx_di12_Modify_s* x);

void zx_di12_Modify_PUSH_ResourceID(struct zx_di12_Modify_s* x, struct zx_di12_ResourceID_s* y);
void zx_di12_Modify_PUSH_EncryptedResourceID(struct zx_di12_Modify_s* x, struct zx_di12_EncryptedResourceID_s* y);
void zx_di12_Modify_PUSH_InsertEntry(struct zx_di12_Modify_s* x, struct zx_di12_InsertEntry_s* y);
void zx_di12_Modify_PUSH_RemoveEntry(struct zx_di12_Modify_s* x, struct zx_di12_RemoveEntry_s* y);

void zx_di12_Modify_PUT_id(struct zx_di12_Modify_s* x, struct zx_str* y);

void zx_di12_Modify_PUT_ResourceID(struct zx_di12_Modify_s* x, int n, struct zx_di12_ResourceID_s* y);
void zx_di12_Modify_PUT_EncryptedResourceID(struct zx_di12_Modify_s* x, int n, struct zx_di12_EncryptedResourceID_s* y);
void zx_di12_Modify_PUT_InsertEntry(struct zx_di12_Modify_s* x, int n, struct zx_di12_InsertEntry_s* y);
void zx_di12_Modify_PUT_RemoveEntry(struct zx_di12_Modify_s* x, int n, struct zx_di12_RemoveEntry_s* y);

void zx_di12_Modify_ADD_ResourceID(struct zx_di12_Modify_s* x, int n, struct zx_di12_ResourceID_s* z);
void zx_di12_Modify_ADD_EncryptedResourceID(struct zx_di12_Modify_s* x, int n, struct zx_di12_EncryptedResourceID_s* z);
void zx_di12_Modify_ADD_InsertEntry(struct zx_di12_Modify_s* x, int n, struct zx_di12_InsertEntry_s* z);
void zx_di12_Modify_ADD_RemoveEntry(struct zx_di12_Modify_s* x, int n, struct zx_di12_RemoveEntry_s* z);

void zx_di12_Modify_DEL_ResourceID(struct zx_di12_Modify_s* x, int n);
void zx_di12_Modify_DEL_EncryptedResourceID(struct zx_di12_Modify_s* x, int n);
void zx_di12_Modify_DEL_InsertEntry(struct zx_di12_Modify_s* x, int n);
void zx_di12_Modify_DEL_RemoveEntry(struct zx_di12_Modify_s* x, int n);

void zx_di12_Modify_REV_ResourceID(struct zx_di12_Modify_s* x);
void zx_di12_Modify_REV_EncryptedResourceID(struct zx_di12_Modify_s* x);
void zx_di12_Modify_REV_InsertEntry(struct zx_di12_Modify_s* x);
void zx_di12_Modify_REV_RemoveEntry(struct zx_di12_Modify_s* x);

#endif
/* -------------------------- di12_ModifyResponse -------------------------- */
/* refby( zx_e_Body_s ) */
#ifndef zx_di12_ModifyResponse_EXT
#define zx_di12_ModifyResponse_EXT
#endif

struct zx_di12_ModifyResponse_s* zx_DEC_di12_ModifyResponse(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_di12_ModifyResponse_s* zx_NEW_di12_ModifyResponse(struct zx_ctx* c);
void zx_FREE_di12_ModifyResponse(struct zx_ctx* c, struct zx_di12_ModifyResponse_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_di12_ModifyResponse_s* zx_DEEP_CLONE_di12_ModifyResponse(struct zx_ctx* c, struct zx_di12_ModifyResponse_s* x, int dup_strs);
void zx_DUP_STRS_di12_ModifyResponse(struct zx_ctx* c, struct zx_di12_ModifyResponse_s* x);
int zx_WALK_SO_di12_ModifyResponse(struct zx_ctx* c, struct zx_di12_ModifyResponse_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_di12_ModifyResponse(struct zx_ctx* c, struct zx_di12_ModifyResponse_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_di12_ModifyResponse(struct zx_ctx* c, struct zx_di12_ModifyResponse_s* x);
int zx_LEN_WO_di12_ModifyResponse(struct zx_ctx* c, struct zx_di12_ModifyResponse_s* x);
char* zx_ENC_SO_di12_ModifyResponse(struct zx_ctx* c, struct zx_di12_ModifyResponse_s* x, char* p);
char* zx_ENC_WO_di12_ModifyResponse(struct zx_ctx* c, struct zx_di12_ModifyResponse_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_di12_ModifyResponse(struct zx_ctx* c, struct zx_di12_ModifyResponse_s* x);
struct zx_str* zx_EASY_ENC_WO_di12_ModifyResponse(struct zx_ctx* c, struct zx_di12_ModifyResponse_s* x);

struct zx_di12_ModifyResponse_s {
  ZX_ELEM_EXT
  zx_di12_ModifyResponse_EXT
  struct zx_di12_Status_s* Status;	/* {1,1} nada */
  struct zx_di12_Extension_s* Extension;	/* {0,1}  */
  struct zx_str* id;	/* {0,1} attribute xs:ID */
  struct zx_str* newEntryIDs;	/* {0,1} attribute xs:string */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_di12_ModifyResponse_GET_id(struct zx_di12_ModifyResponse_s* x);
struct zx_str* zx_di12_ModifyResponse_GET_newEntryIDs(struct zx_di12_ModifyResponse_s* x);

struct zx_di12_Status_s* zx_di12_ModifyResponse_GET_Status(struct zx_di12_ModifyResponse_s* x, int n);
struct zx_di12_Extension_s* zx_di12_ModifyResponse_GET_Extension(struct zx_di12_ModifyResponse_s* x, int n);

int zx_di12_ModifyResponse_NUM_Status(struct zx_di12_ModifyResponse_s* x);
int zx_di12_ModifyResponse_NUM_Extension(struct zx_di12_ModifyResponse_s* x);

struct zx_di12_Status_s* zx_di12_ModifyResponse_POP_Status(struct zx_di12_ModifyResponse_s* x);
struct zx_di12_Extension_s* zx_di12_ModifyResponse_POP_Extension(struct zx_di12_ModifyResponse_s* x);

void zx_di12_ModifyResponse_PUSH_Status(struct zx_di12_ModifyResponse_s* x, struct zx_di12_Status_s* y);
void zx_di12_ModifyResponse_PUSH_Extension(struct zx_di12_ModifyResponse_s* x, struct zx_di12_Extension_s* y);

void zx_di12_ModifyResponse_PUT_id(struct zx_di12_ModifyResponse_s* x, struct zx_str* y);
void zx_di12_ModifyResponse_PUT_newEntryIDs(struct zx_di12_ModifyResponse_s* x, struct zx_str* y);

void zx_di12_ModifyResponse_PUT_Status(struct zx_di12_ModifyResponse_s* x, int n, struct zx_di12_Status_s* y);
void zx_di12_ModifyResponse_PUT_Extension(struct zx_di12_ModifyResponse_s* x, int n, struct zx_di12_Extension_s* y);

void zx_di12_ModifyResponse_ADD_Status(struct zx_di12_ModifyResponse_s* x, int n, struct zx_di12_Status_s* z);
void zx_di12_ModifyResponse_ADD_Extension(struct zx_di12_ModifyResponse_s* x, int n, struct zx_di12_Extension_s* z);

void zx_di12_ModifyResponse_DEL_Status(struct zx_di12_ModifyResponse_s* x, int n);
void zx_di12_ModifyResponse_DEL_Extension(struct zx_di12_ModifyResponse_s* x, int n);

void zx_di12_ModifyResponse_REV_Status(struct zx_di12_ModifyResponse_s* x);
void zx_di12_ModifyResponse_REV_Extension(struct zx_di12_ModifyResponse_s* x);

#endif
/* -------------------------- di12_Options -------------------------- */
/* refby( zx_di12_ResourceOffering_s zx_di12_RequestedServiceType_s zx_is12_InteractionService_s ) */
#ifndef zx_di12_Options_EXT
#define zx_di12_Options_EXT
#endif

struct zx_di12_Options_s* zx_DEC_di12_Options(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_di12_Options_s* zx_NEW_di12_Options(struct zx_ctx* c);
void zx_FREE_di12_Options(struct zx_ctx* c, struct zx_di12_Options_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_di12_Options_s* zx_DEEP_CLONE_di12_Options(struct zx_ctx* c, struct zx_di12_Options_s* x, int dup_strs);
void zx_DUP_STRS_di12_Options(struct zx_ctx* c, struct zx_di12_Options_s* x);
int zx_WALK_SO_di12_Options(struct zx_ctx* c, struct zx_di12_Options_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_di12_Options(struct zx_ctx* c, struct zx_di12_Options_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_di12_Options(struct zx_ctx* c, struct zx_di12_Options_s* x);
int zx_LEN_WO_di12_Options(struct zx_ctx* c, struct zx_di12_Options_s* x);
char* zx_ENC_SO_di12_Options(struct zx_ctx* c, struct zx_di12_Options_s* x, char* p);
char* zx_ENC_WO_di12_Options(struct zx_ctx* c, struct zx_di12_Options_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_di12_Options(struct zx_ctx* c, struct zx_di12_Options_s* x);
struct zx_str* zx_EASY_ENC_WO_di12_Options(struct zx_ctx* c, struct zx_di12_Options_s* x);

struct zx_di12_Options_s {
  ZX_ELEM_EXT
  zx_di12_Options_EXT
  struct zx_elem_s* Option;	/* {0,-1} xs:anyURI */
};

#ifdef ZX_ENA_GETPUT

struct zx_elem_s* zx_di12_Options_GET_Option(struct zx_di12_Options_s* x, int n);

int zx_di12_Options_NUM_Option(struct zx_di12_Options_s* x);

struct zx_elem_s* zx_di12_Options_POP_Option(struct zx_di12_Options_s* x);

void zx_di12_Options_PUSH_Option(struct zx_di12_Options_s* x, struct zx_elem_s* y);


void zx_di12_Options_PUT_Option(struct zx_di12_Options_s* x, int n, struct zx_elem_s* y);

void zx_di12_Options_ADD_Option(struct zx_di12_Options_s* x, int n, struct zx_elem_s* z);

void zx_di12_Options_DEL_Option(struct zx_di12_Options_s* x, int n);

void zx_di12_Options_REV_Option(struct zx_di12_Options_s* x);

#endif
/* -------------------------- di12_Query -------------------------- */
/* refby( zx_e_Body_s ) */
#ifndef zx_di12_Query_EXT
#define zx_di12_Query_EXT
#endif

struct zx_di12_Query_s* zx_DEC_di12_Query(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_di12_Query_s* zx_NEW_di12_Query(struct zx_ctx* c);
void zx_FREE_di12_Query(struct zx_ctx* c, struct zx_di12_Query_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_di12_Query_s* zx_DEEP_CLONE_di12_Query(struct zx_ctx* c, struct zx_di12_Query_s* x, int dup_strs);
void zx_DUP_STRS_di12_Query(struct zx_ctx* c, struct zx_di12_Query_s* x);
int zx_WALK_SO_di12_Query(struct zx_ctx* c, struct zx_di12_Query_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_di12_Query(struct zx_ctx* c, struct zx_di12_Query_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_di12_Query(struct zx_ctx* c, struct zx_di12_Query_s* x);
int zx_LEN_WO_di12_Query(struct zx_ctx* c, struct zx_di12_Query_s* x);
char* zx_ENC_SO_di12_Query(struct zx_ctx* c, struct zx_di12_Query_s* x, char* p);
char* zx_ENC_WO_di12_Query(struct zx_ctx* c, struct zx_di12_Query_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_di12_Query(struct zx_ctx* c, struct zx_di12_Query_s* x);
struct zx_str* zx_EASY_ENC_WO_di12_Query(struct zx_ctx* c, struct zx_di12_Query_s* x);

struct zx_di12_Query_s {
  ZX_ELEM_EXT
  zx_di12_Query_EXT
  struct zx_di12_ResourceID_s* ResourceID;	/* {0,1} nada */
  struct zx_di12_EncryptedResourceID_s* EncryptedResourceID;	/* {0,1} nada */
  struct zx_di12_RequestedServiceType_s* RequestedServiceType;	/* {0,-1}  */
  struct zx_str* id;	/* {0,1} attribute xs:ID */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_di12_Query_GET_id(struct zx_di12_Query_s* x);

struct zx_di12_ResourceID_s* zx_di12_Query_GET_ResourceID(struct zx_di12_Query_s* x, int n);
struct zx_di12_EncryptedResourceID_s* zx_di12_Query_GET_EncryptedResourceID(struct zx_di12_Query_s* x, int n);
struct zx_di12_RequestedServiceType_s* zx_di12_Query_GET_RequestedServiceType(struct zx_di12_Query_s* x, int n);

int zx_di12_Query_NUM_ResourceID(struct zx_di12_Query_s* x);
int zx_di12_Query_NUM_EncryptedResourceID(struct zx_di12_Query_s* x);
int zx_di12_Query_NUM_RequestedServiceType(struct zx_di12_Query_s* x);

struct zx_di12_ResourceID_s* zx_di12_Query_POP_ResourceID(struct zx_di12_Query_s* x);
struct zx_di12_EncryptedResourceID_s* zx_di12_Query_POP_EncryptedResourceID(struct zx_di12_Query_s* x);
struct zx_di12_RequestedServiceType_s* zx_di12_Query_POP_RequestedServiceType(struct zx_di12_Query_s* x);

void zx_di12_Query_PUSH_ResourceID(struct zx_di12_Query_s* x, struct zx_di12_ResourceID_s* y);
void zx_di12_Query_PUSH_EncryptedResourceID(struct zx_di12_Query_s* x, struct zx_di12_EncryptedResourceID_s* y);
void zx_di12_Query_PUSH_RequestedServiceType(struct zx_di12_Query_s* x, struct zx_di12_RequestedServiceType_s* y);

void zx_di12_Query_PUT_id(struct zx_di12_Query_s* x, struct zx_str* y);

void zx_di12_Query_PUT_ResourceID(struct zx_di12_Query_s* x, int n, struct zx_di12_ResourceID_s* y);
void zx_di12_Query_PUT_EncryptedResourceID(struct zx_di12_Query_s* x, int n, struct zx_di12_EncryptedResourceID_s* y);
void zx_di12_Query_PUT_RequestedServiceType(struct zx_di12_Query_s* x, int n, struct zx_di12_RequestedServiceType_s* y);

void zx_di12_Query_ADD_ResourceID(struct zx_di12_Query_s* x, int n, struct zx_di12_ResourceID_s* z);
void zx_di12_Query_ADD_EncryptedResourceID(struct zx_di12_Query_s* x, int n, struct zx_di12_EncryptedResourceID_s* z);
void zx_di12_Query_ADD_RequestedServiceType(struct zx_di12_Query_s* x, int n, struct zx_di12_RequestedServiceType_s* z);

void zx_di12_Query_DEL_ResourceID(struct zx_di12_Query_s* x, int n);
void zx_di12_Query_DEL_EncryptedResourceID(struct zx_di12_Query_s* x, int n);
void zx_di12_Query_DEL_RequestedServiceType(struct zx_di12_Query_s* x, int n);

void zx_di12_Query_REV_ResourceID(struct zx_di12_Query_s* x);
void zx_di12_Query_REV_EncryptedResourceID(struct zx_di12_Query_s* x);
void zx_di12_Query_REV_RequestedServiceType(struct zx_di12_Query_s* x);

#endif
/* -------------------------- di12_QueryResponse -------------------------- */
/* refby( zx_e_Body_s ) */
#ifndef zx_di12_QueryResponse_EXT
#define zx_di12_QueryResponse_EXT
#endif

struct zx_di12_QueryResponse_s* zx_DEC_di12_QueryResponse(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_di12_QueryResponse_s* zx_NEW_di12_QueryResponse(struct zx_ctx* c);
void zx_FREE_di12_QueryResponse(struct zx_ctx* c, struct zx_di12_QueryResponse_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_di12_QueryResponse_s* zx_DEEP_CLONE_di12_QueryResponse(struct zx_ctx* c, struct zx_di12_QueryResponse_s* x, int dup_strs);
void zx_DUP_STRS_di12_QueryResponse(struct zx_ctx* c, struct zx_di12_QueryResponse_s* x);
int zx_WALK_SO_di12_QueryResponse(struct zx_ctx* c, struct zx_di12_QueryResponse_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_di12_QueryResponse(struct zx_ctx* c, struct zx_di12_QueryResponse_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_di12_QueryResponse(struct zx_ctx* c, struct zx_di12_QueryResponse_s* x);
int zx_LEN_WO_di12_QueryResponse(struct zx_ctx* c, struct zx_di12_QueryResponse_s* x);
char* zx_ENC_SO_di12_QueryResponse(struct zx_ctx* c, struct zx_di12_QueryResponse_s* x, char* p);
char* zx_ENC_WO_di12_QueryResponse(struct zx_ctx* c, struct zx_di12_QueryResponse_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_di12_QueryResponse(struct zx_ctx* c, struct zx_di12_QueryResponse_s* x);
struct zx_str* zx_EASY_ENC_WO_di12_QueryResponse(struct zx_ctx* c, struct zx_di12_QueryResponse_s* x);

struct zx_di12_QueryResponse_s {
  ZX_ELEM_EXT
  zx_di12_QueryResponse_EXT
  struct zx_di12_Status_s* Status;	/* {1,1} nada */
  struct zx_di12_ResourceOffering_s* ResourceOffering;	/* {0,-1} nada */
  struct zx_di12_Credentials_s* Credentials;	/* {0,1}  */
  struct zx_str* id;	/* {0,1} attribute xs:ID */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_di12_QueryResponse_GET_id(struct zx_di12_QueryResponse_s* x);

struct zx_di12_Status_s* zx_di12_QueryResponse_GET_Status(struct zx_di12_QueryResponse_s* x, int n);
struct zx_di12_ResourceOffering_s* zx_di12_QueryResponse_GET_ResourceOffering(struct zx_di12_QueryResponse_s* x, int n);
struct zx_di12_Credentials_s* zx_di12_QueryResponse_GET_Credentials(struct zx_di12_QueryResponse_s* x, int n);

int zx_di12_QueryResponse_NUM_Status(struct zx_di12_QueryResponse_s* x);
int zx_di12_QueryResponse_NUM_ResourceOffering(struct zx_di12_QueryResponse_s* x);
int zx_di12_QueryResponse_NUM_Credentials(struct zx_di12_QueryResponse_s* x);

struct zx_di12_Status_s* zx_di12_QueryResponse_POP_Status(struct zx_di12_QueryResponse_s* x);
struct zx_di12_ResourceOffering_s* zx_di12_QueryResponse_POP_ResourceOffering(struct zx_di12_QueryResponse_s* x);
struct zx_di12_Credentials_s* zx_di12_QueryResponse_POP_Credentials(struct zx_di12_QueryResponse_s* x);

void zx_di12_QueryResponse_PUSH_Status(struct zx_di12_QueryResponse_s* x, struct zx_di12_Status_s* y);
void zx_di12_QueryResponse_PUSH_ResourceOffering(struct zx_di12_QueryResponse_s* x, struct zx_di12_ResourceOffering_s* y);
void zx_di12_QueryResponse_PUSH_Credentials(struct zx_di12_QueryResponse_s* x, struct zx_di12_Credentials_s* y);

void zx_di12_QueryResponse_PUT_id(struct zx_di12_QueryResponse_s* x, struct zx_str* y);

void zx_di12_QueryResponse_PUT_Status(struct zx_di12_QueryResponse_s* x, int n, struct zx_di12_Status_s* y);
void zx_di12_QueryResponse_PUT_ResourceOffering(struct zx_di12_QueryResponse_s* x, int n, struct zx_di12_ResourceOffering_s* y);
void zx_di12_QueryResponse_PUT_Credentials(struct zx_di12_QueryResponse_s* x, int n, struct zx_di12_Credentials_s* y);

void zx_di12_QueryResponse_ADD_Status(struct zx_di12_QueryResponse_s* x, int n, struct zx_di12_Status_s* z);
void zx_di12_QueryResponse_ADD_ResourceOffering(struct zx_di12_QueryResponse_s* x, int n, struct zx_di12_ResourceOffering_s* z);
void zx_di12_QueryResponse_ADD_Credentials(struct zx_di12_QueryResponse_s* x, int n, struct zx_di12_Credentials_s* z);

void zx_di12_QueryResponse_DEL_Status(struct zx_di12_QueryResponse_s* x, int n);
void zx_di12_QueryResponse_DEL_ResourceOffering(struct zx_di12_QueryResponse_s* x, int n);
void zx_di12_QueryResponse_DEL_Credentials(struct zx_di12_QueryResponse_s* x, int n);

void zx_di12_QueryResponse_REV_Status(struct zx_di12_QueryResponse_s* x);
void zx_di12_QueryResponse_REV_ResourceOffering(struct zx_di12_QueryResponse_s* x);
void zx_di12_QueryResponse_REV_Credentials(struct zx_di12_QueryResponse_s* x);

#endif
/* -------------------------- di12_RemoveEntry -------------------------- */
/* refby( zx_di12_Modify_s ) */
#ifndef zx_di12_RemoveEntry_EXT
#define zx_di12_RemoveEntry_EXT
#endif

struct zx_di12_RemoveEntry_s* zx_DEC_di12_RemoveEntry(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_di12_RemoveEntry_s* zx_NEW_di12_RemoveEntry(struct zx_ctx* c);
void zx_FREE_di12_RemoveEntry(struct zx_ctx* c, struct zx_di12_RemoveEntry_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_di12_RemoveEntry_s* zx_DEEP_CLONE_di12_RemoveEntry(struct zx_ctx* c, struct zx_di12_RemoveEntry_s* x, int dup_strs);
void zx_DUP_STRS_di12_RemoveEntry(struct zx_ctx* c, struct zx_di12_RemoveEntry_s* x);
int zx_WALK_SO_di12_RemoveEntry(struct zx_ctx* c, struct zx_di12_RemoveEntry_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_di12_RemoveEntry(struct zx_ctx* c, struct zx_di12_RemoveEntry_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_di12_RemoveEntry(struct zx_ctx* c, struct zx_di12_RemoveEntry_s* x);
int zx_LEN_WO_di12_RemoveEntry(struct zx_ctx* c, struct zx_di12_RemoveEntry_s* x);
char* zx_ENC_SO_di12_RemoveEntry(struct zx_ctx* c, struct zx_di12_RemoveEntry_s* x, char* p);
char* zx_ENC_WO_di12_RemoveEntry(struct zx_ctx* c, struct zx_di12_RemoveEntry_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_di12_RemoveEntry(struct zx_ctx* c, struct zx_di12_RemoveEntry_s* x);
struct zx_str* zx_EASY_ENC_WO_di12_RemoveEntry(struct zx_ctx* c, struct zx_di12_RemoveEntry_s* x);

struct zx_di12_RemoveEntry_s {
  ZX_ELEM_EXT
  zx_di12_RemoveEntry_EXT
  struct zx_str* entryID;	/* {1,1} attribute xs:string */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_di12_RemoveEntry_GET_entryID(struct zx_di12_RemoveEntry_s* x);





void zx_di12_RemoveEntry_PUT_entryID(struct zx_di12_RemoveEntry_s* x, struct zx_str* y);





#endif
/* -------------------------- di12_RequestedServiceType -------------------------- */
/* refby( zx_di12_Query_s ) */
#ifndef zx_di12_RequestedServiceType_EXT
#define zx_di12_RequestedServiceType_EXT
#endif

struct zx_di12_RequestedServiceType_s* zx_DEC_di12_RequestedServiceType(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_di12_RequestedServiceType_s* zx_NEW_di12_RequestedServiceType(struct zx_ctx* c);
void zx_FREE_di12_RequestedServiceType(struct zx_ctx* c, struct zx_di12_RequestedServiceType_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_di12_RequestedServiceType_s* zx_DEEP_CLONE_di12_RequestedServiceType(struct zx_ctx* c, struct zx_di12_RequestedServiceType_s* x, int dup_strs);
void zx_DUP_STRS_di12_RequestedServiceType(struct zx_ctx* c, struct zx_di12_RequestedServiceType_s* x);
int zx_WALK_SO_di12_RequestedServiceType(struct zx_ctx* c, struct zx_di12_RequestedServiceType_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_di12_RequestedServiceType(struct zx_ctx* c, struct zx_di12_RequestedServiceType_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_di12_RequestedServiceType(struct zx_ctx* c, struct zx_di12_RequestedServiceType_s* x);
int zx_LEN_WO_di12_RequestedServiceType(struct zx_ctx* c, struct zx_di12_RequestedServiceType_s* x);
char* zx_ENC_SO_di12_RequestedServiceType(struct zx_ctx* c, struct zx_di12_RequestedServiceType_s* x, char* p);
char* zx_ENC_WO_di12_RequestedServiceType(struct zx_ctx* c, struct zx_di12_RequestedServiceType_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_di12_RequestedServiceType(struct zx_ctx* c, struct zx_di12_RequestedServiceType_s* x);
struct zx_str* zx_EASY_ENC_WO_di12_RequestedServiceType(struct zx_ctx* c, struct zx_di12_RequestedServiceType_s* x);

struct zx_di12_RequestedServiceType_s {
  ZX_ELEM_EXT
  zx_di12_RequestedServiceType_EXT
  struct zx_elem_s* ServiceType;	/* {1,1} xs:anyURI */
  struct zx_di12_Options_s* Options;	/* {0,1}  */
};

#ifdef ZX_ENA_GETPUT

struct zx_elem_s* zx_di12_RequestedServiceType_GET_ServiceType(struct zx_di12_RequestedServiceType_s* x, int n);
struct zx_di12_Options_s* zx_di12_RequestedServiceType_GET_Options(struct zx_di12_RequestedServiceType_s* x, int n);

int zx_di12_RequestedServiceType_NUM_ServiceType(struct zx_di12_RequestedServiceType_s* x);
int zx_di12_RequestedServiceType_NUM_Options(struct zx_di12_RequestedServiceType_s* x);

struct zx_elem_s* zx_di12_RequestedServiceType_POP_ServiceType(struct zx_di12_RequestedServiceType_s* x);
struct zx_di12_Options_s* zx_di12_RequestedServiceType_POP_Options(struct zx_di12_RequestedServiceType_s* x);

void zx_di12_RequestedServiceType_PUSH_ServiceType(struct zx_di12_RequestedServiceType_s* x, struct zx_elem_s* y);
void zx_di12_RequestedServiceType_PUSH_Options(struct zx_di12_RequestedServiceType_s* x, struct zx_di12_Options_s* y);


void zx_di12_RequestedServiceType_PUT_ServiceType(struct zx_di12_RequestedServiceType_s* x, int n, struct zx_elem_s* y);
void zx_di12_RequestedServiceType_PUT_Options(struct zx_di12_RequestedServiceType_s* x, int n, struct zx_di12_Options_s* y);

void zx_di12_RequestedServiceType_ADD_ServiceType(struct zx_di12_RequestedServiceType_s* x, int n, struct zx_elem_s* z);
void zx_di12_RequestedServiceType_ADD_Options(struct zx_di12_RequestedServiceType_s* x, int n, struct zx_di12_Options_s* z);

void zx_di12_RequestedServiceType_DEL_ServiceType(struct zx_di12_RequestedServiceType_s* x, int n);
void zx_di12_RequestedServiceType_DEL_Options(struct zx_di12_RequestedServiceType_s* x, int n);

void zx_di12_RequestedServiceType_REV_ServiceType(struct zx_di12_RequestedServiceType_s* x);
void zx_di12_RequestedServiceType_REV_Options(struct zx_di12_RequestedServiceType_s* x);

#endif
/* -------------------------- di12_ResourceID -------------------------- */
/* refby( zx_sec12_ResourceAccessStatement_s zx_di12_Query_s zx_di12_ResourceOffering_s zx_di12_Modify_s zx_is12_InteractionService_s ) */
#ifndef zx_di12_ResourceID_EXT
#define zx_di12_ResourceID_EXT
#endif

struct zx_di12_ResourceID_s* zx_DEC_di12_ResourceID(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_di12_ResourceID_s* zx_NEW_di12_ResourceID(struct zx_ctx* c);
void zx_FREE_di12_ResourceID(struct zx_ctx* c, struct zx_di12_ResourceID_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_di12_ResourceID_s* zx_DEEP_CLONE_di12_ResourceID(struct zx_ctx* c, struct zx_di12_ResourceID_s* x, int dup_strs);
void zx_DUP_STRS_di12_ResourceID(struct zx_ctx* c, struct zx_di12_ResourceID_s* x);
int zx_WALK_SO_di12_ResourceID(struct zx_ctx* c, struct zx_di12_ResourceID_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_di12_ResourceID(struct zx_ctx* c, struct zx_di12_ResourceID_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_di12_ResourceID(struct zx_ctx* c, struct zx_di12_ResourceID_s* x);
int zx_LEN_WO_di12_ResourceID(struct zx_ctx* c, struct zx_di12_ResourceID_s* x);
char* zx_ENC_SO_di12_ResourceID(struct zx_ctx* c, struct zx_di12_ResourceID_s* x, char* p);
char* zx_ENC_WO_di12_ResourceID(struct zx_ctx* c, struct zx_di12_ResourceID_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_di12_ResourceID(struct zx_ctx* c, struct zx_di12_ResourceID_s* x);
struct zx_str* zx_EASY_ENC_WO_di12_ResourceID(struct zx_ctx* c, struct zx_di12_ResourceID_s* x);

struct zx_di12_ResourceID_s {
  ZX_ELEM_EXT
  zx_di12_ResourceID_EXT
  struct zx_str* id;	/* {0,1} attribute xs:ID */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_di12_ResourceID_GET_id(struct zx_di12_ResourceID_s* x);





void zx_di12_ResourceID_PUT_id(struct zx_di12_ResourceID_s* x, struct zx_str* y);





#endif
/* -------------------------- di12_ResourceOffering -------------------------- */
/* refby( zx_di12_QueryResponse_s zx_di12_InsertEntry_s zx_sa_AttributeValue_s zx_sa11_AttributeValue_s ) */
#ifndef zx_di12_ResourceOffering_EXT
#define zx_di12_ResourceOffering_EXT
#endif

struct zx_di12_ResourceOffering_s* zx_DEC_di12_ResourceOffering(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_di12_ResourceOffering_s* zx_NEW_di12_ResourceOffering(struct zx_ctx* c);
void zx_FREE_di12_ResourceOffering(struct zx_ctx* c, struct zx_di12_ResourceOffering_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_di12_ResourceOffering_s* zx_DEEP_CLONE_di12_ResourceOffering(struct zx_ctx* c, struct zx_di12_ResourceOffering_s* x, int dup_strs);
void zx_DUP_STRS_di12_ResourceOffering(struct zx_ctx* c, struct zx_di12_ResourceOffering_s* x);
int zx_WALK_SO_di12_ResourceOffering(struct zx_ctx* c, struct zx_di12_ResourceOffering_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_di12_ResourceOffering(struct zx_ctx* c, struct zx_di12_ResourceOffering_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_di12_ResourceOffering(struct zx_ctx* c, struct zx_di12_ResourceOffering_s* x);
int zx_LEN_WO_di12_ResourceOffering(struct zx_ctx* c, struct zx_di12_ResourceOffering_s* x);
char* zx_ENC_SO_di12_ResourceOffering(struct zx_ctx* c, struct zx_di12_ResourceOffering_s* x, char* p);
char* zx_ENC_WO_di12_ResourceOffering(struct zx_ctx* c, struct zx_di12_ResourceOffering_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_di12_ResourceOffering(struct zx_ctx* c, struct zx_di12_ResourceOffering_s* x);
struct zx_str* zx_EASY_ENC_WO_di12_ResourceOffering(struct zx_ctx* c, struct zx_di12_ResourceOffering_s* x);

struct zx_di12_ResourceOffering_s {
  ZX_ELEM_EXT
  zx_di12_ResourceOffering_EXT
  struct zx_di12_ResourceID_s* ResourceID;	/* {0,1} nada */
  struct zx_di12_EncryptedResourceID_s* EncryptedResourceID;	/* {0,1} nada */
  struct zx_di12_ServiceInstance_s* ServiceInstance;	/* {1,1}  */
  struct zx_di12_Options_s* Options;	/* {0,1}  */
  struct zx_elem_s* Abstract;	/* {0,1} xs:string */
  struct zx_str* entryID;	/* {0,1} attribute xs:string */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_di12_ResourceOffering_GET_entryID(struct zx_di12_ResourceOffering_s* x);

struct zx_di12_ResourceID_s* zx_di12_ResourceOffering_GET_ResourceID(struct zx_di12_ResourceOffering_s* x, int n);
struct zx_di12_EncryptedResourceID_s* zx_di12_ResourceOffering_GET_EncryptedResourceID(struct zx_di12_ResourceOffering_s* x, int n);
struct zx_di12_ServiceInstance_s* zx_di12_ResourceOffering_GET_ServiceInstance(struct zx_di12_ResourceOffering_s* x, int n);
struct zx_di12_Options_s* zx_di12_ResourceOffering_GET_Options(struct zx_di12_ResourceOffering_s* x, int n);
struct zx_elem_s* zx_di12_ResourceOffering_GET_Abstract(struct zx_di12_ResourceOffering_s* x, int n);

int zx_di12_ResourceOffering_NUM_ResourceID(struct zx_di12_ResourceOffering_s* x);
int zx_di12_ResourceOffering_NUM_EncryptedResourceID(struct zx_di12_ResourceOffering_s* x);
int zx_di12_ResourceOffering_NUM_ServiceInstance(struct zx_di12_ResourceOffering_s* x);
int zx_di12_ResourceOffering_NUM_Options(struct zx_di12_ResourceOffering_s* x);
int zx_di12_ResourceOffering_NUM_Abstract(struct zx_di12_ResourceOffering_s* x);

struct zx_di12_ResourceID_s* zx_di12_ResourceOffering_POP_ResourceID(struct zx_di12_ResourceOffering_s* x);
struct zx_di12_EncryptedResourceID_s* zx_di12_ResourceOffering_POP_EncryptedResourceID(struct zx_di12_ResourceOffering_s* x);
struct zx_di12_ServiceInstance_s* zx_di12_ResourceOffering_POP_ServiceInstance(struct zx_di12_ResourceOffering_s* x);
struct zx_di12_Options_s* zx_di12_ResourceOffering_POP_Options(struct zx_di12_ResourceOffering_s* x);
struct zx_elem_s* zx_di12_ResourceOffering_POP_Abstract(struct zx_di12_ResourceOffering_s* x);

void zx_di12_ResourceOffering_PUSH_ResourceID(struct zx_di12_ResourceOffering_s* x, struct zx_di12_ResourceID_s* y);
void zx_di12_ResourceOffering_PUSH_EncryptedResourceID(struct zx_di12_ResourceOffering_s* x, struct zx_di12_EncryptedResourceID_s* y);
void zx_di12_ResourceOffering_PUSH_ServiceInstance(struct zx_di12_ResourceOffering_s* x, struct zx_di12_ServiceInstance_s* y);
void zx_di12_ResourceOffering_PUSH_Options(struct zx_di12_ResourceOffering_s* x, struct zx_di12_Options_s* y);
void zx_di12_ResourceOffering_PUSH_Abstract(struct zx_di12_ResourceOffering_s* x, struct zx_elem_s* y);

void zx_di12_ResourceOffering_PUT_entryID(struct zx_di12_ResourceOffering_s* x, struct zx_str* y);

void zx_di12_ResourceOffering_PUT_ResourceID(struct zx_di12_ResourceOffering_s* x, int n, struct zx_di12_ResourceID_s* y);
void zx_di12_ResourceOffering_PUT_EncryptedResourceID(struct zx_di12_ResourceOffering_s* x, int n, struct zx_di12_EncryptedResourceID_s* y);
void zx_di12_ResourceOffering_PUT_ServiceInstance(struct zx_di12_ResourceOffering_s* x, int n, struct zx_di12_ServiceInstance_s* y);
void zx_di12_ResourceOffering_PUT_Options(struct zx_di12_ResourceOffering_s* x, int n, struct zx_di12_Options_s* y);
void zx_di12_ResourceOffering_PUT_Abstract(struct zx_di12_ResourceOffering_s* x, int n, struct zx_elem_s* y);

void zx_di12_ResourceOffering_ADD_ResourceID(struct zx_di12_ResourceOffering_s* x, int n, struct zx_di12_ResourceID_s* z);
void zx_di12_ResourceOffering_ADD_EncryptedResourceID(struct zx_di12_ResourceOffering_s* x, int n, struct zx_di12_EncryptedResourceID_s* z);
void zx_di12_ResourceOffering_ADD_ServiceInstance(struct zx_di12_ResourceOffering_s* x, int n, struct zx_di12_ServiceInstance_s* z);
void zx_di12_ResourceOffering_ADD_Options(struct zx_di12_ResourceOffering_s* x, int n, struct zx_di12_Options_s* z);
void zx_di12_ResourceOffering_ADD_Abstract(struct zx_di12_ResourceOffering_s* x, int n, struct zx_elem_s* z);

void zx_di12_ResourceOffering_DEL_ResourceID(struct zx_di12_ResourceOffering_s* x, int n);
void zx_di12_ResourceOffering_DEL_EncryptedResourceID(struct zx_di12_ResourceOffering_s* x, int n);
void zx_di12_ResourceOffering_DEL_ServiceInstance(struct zx_di12_ResourceOffering_s* x, int n);
void zx_di12_ResourceOffering_DEL_Options(struct zx_di12_ResourceOffering_s* x, int n);
void zx_di12_ResourceOffering_DEL_Abstract(struct zx_di12_ResourceOffering_s* x, int n);

void zx_di12_ResourceOffering_REV_ResourceID(struct zx_di12_ResourceOffering_s* x);
void zx_di12_ResourceOffering_REV_EncryptedResourceID(struct zx_di12_ResourceOffering_s* x);
void zx_di12_ResourceOffering_REV_ServiceInstance(struct zx_di12_ResourceOffering_s* x);
void zx_di12_ResourceOffering_REV_Options(struct zx_di12_ResourceOffering_s* x);
void zx_di12_ResourceOffering_REV_Abstract(struct zx_di12_ResourceOffering_s* x);

#endif
/* -------------------------- di12_ServiceInstance -------------------------- */
/* refby( zx_di12_ResourceOffering_s zx_is12_InteractionService_s ) */
#ifndef zx_di12_ServiceInstance_EXT
#define zx_di12_ServiceInstance_EXT
#endif

struct zx_di12_ServiceInstance_s* zx_DEC_di12_ServiceInstance(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_di12_ServiceInstance_s* zx_NEW_di12_ServiceInstance(struct zx_ctx* c);
void zx_FREE_di12_ServiceInstance(struct zx_ctx* c, struct zx_di12_ServiceInstance_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_di12_ServiceInstance_s* zx_DEEP_CLONE_di12_ServiceInstance(struct zx_ctx* c, struct zx_di12_ServiceInstance_s* x, int dup_strs);
void zx_DUP_STRS_di12_ServiceInstance(struct zx_ctx* c, struct zx_di12_ServiceInstance_s* x);
int zx_WALK_SO_di12_ServiceInstance(struct zx_ctx* c, struct zx_di12_ServiceInstance_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_di12_ServiceInstance(struct zx_ctx* c, struct zx_di12_ServiceInstance_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_di12_ServiceInstance(struct zx_ctx* c, struct zx_di12_ServiceInstance_s* x);
int zx_LEN_WO_di12_ServiceInstance(struct zx_ctx* c, struct zx_di12_ServiceInstance_s* x);
char* zx_ENC_SO_di12_ServiceInstance(struct zx_ctx* c, struct zx_di12_ServiceInstance_s* x, char* p);
char* zx_ENC_WO_di12_ServiceInstance(struct zx_ctx* c, struct zx_di12_ServiceInstance_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_di12_ServiceInstance(struct zx_ctx* c, struct zx_di12_ServiceInstance_s* x);
struct zx_str* zx_EASY_ENC_WO_di12_ServiceInstance(struct zx_ctx* c, struct zx_di12_ServiceInstance_s* x);

struct zx_di12_ServiceInstance_s {
  ZX_ELEM_EXT
  zx_di12_ServiceInstance_EXT
  struct zx_elem_s* ServiceType;	/* {1,1} xs:anyURI */
  struct zx_elem_s* ProviderID;	/* {1,1} xs:anyURI */
  struct zx_di12_Description_s* Description;	/* {1,-1}  */
};

#ifdef ZX_ENA_GETPUT

struct zx_elem_s* zx_di12_ServiceInstance_GET_ServiceType(struct zx_di12_ServiceInstance_s* x, int n);
struct zx_elem_s* zx_di12_ServiceInstance_GET_ProviderID(struct zx_di12_ServiceInstance_s* x, int n);
struct zx_di12_Description_s* zx_di12_ServiceInstance_GET_Description(struct zx_di12_ServiceInstance_s* x, int n);

int zx_di12_ServiceInstance_NUM_ServiceType(struct zx_di12_ServiceInstance_s* x);
int zx_di12_ServiceInstance_NUM_ProviderID(struct zx_di12_ServiceInstance_s* x);
int zx_di12_ServiceInstance_NUM_Description(struct zx_di12_ServiceInstance_s* x);

struct zx_elem_s* zx_di12_ServiceInstance_POP_ServiceType(struct zx_di12_ServiceInstance_s* x);
struct zx_elem_s* zx_di12_ServiceInstance_POP_ProviderID(struct zx_di12_ServiceInstance_s* x);
struct zx_di12_Description_s* zx_di12_ServiceInstance_POP_Description(struct zx_di12_ServiceInstance_s* x);

void zx_di12_ServiceInstance_PUSH_ServiceType(struct zx_di12_ServiceInstance_s* x, struct zx_elem_s* y);
void zx_di12_ServiceInstance_PUSH_ProviderID(struct zx_di12_ServiceInstance_s* x, struct zx_elem_s* y);
void zx_di12_ServiceInstance_PUSH_Description(struct zx_di12_ServiceInstance_s* x, struct zx_di12_Description_s* y);


void zx_di12_ServiceInstance_PUT_ServiceType(struct zx_di12_ServiceInstance_s* x, int n, struct zx_elem_s* y);
void zx_di12_ServiceInstance_PUT_ProviderID(struct zx_di12_ServiceInstance_s* x, int n, struct zx_elem_s* y);
void zx_di12_ServiceInstance_PUT_Description(struct zx_di12_ServiceInstance_s* x, int n, struct zx_di12_Description_s* y);

void zx_di12_ServiceInstance_ADD_ServiceType(struct zx_di12_ServiceInstance_s* x, int n, struct zx_elem_s* z);
void zx_di12_ServiceInstance_ADD_ProviderID(struct zx_di12_ServiceInstance_s* x, int n, struct zx_elem_s* z);
void zx_di12_ServiceInstance_ADD_Description(struct zx_di12_ServiceInstance_s* x, int n, struct zx_di12_Description_s* z);

void zx_di12_ServiceInstance_DEL_ServiceType(struct zx_di12_ServiceInstance_s* x, int n);
void zx_di12_ServiceInstance_DEL_ProviderID(struct zx_di12_ServiceInstance_s* x, int n);
void zx_di12_ServiceInstance_DEL_Description(struct zx_di12_ServiceInstance_s* x, int n);

void zx_di12_ServiceInstance_REV_ServiceType(struct zx_di12_ServiceInstance_s* x);
void zx_di12_ServiceInstance_REV_ProviderID(struct zx_di12_ServiceInstance_s* x);
void zx_di12_ServiceInstance_REV_Description(struct zx_di12_ServiceInstance_s* x);

#endif
/* -------------------------- di12_Status -------------------------- */
/* refby( zx_di12_QueryResponse_s zx_di12_ModifyResponse_s zx_di12_Status_s ) */
#ifndef zx_di12_Status_EXT
#define zx_di12_Status_EXT
#endif

struct zx_di12_Status_s* zx_DEC_di12_Status(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_di12_Status_s* zx_NEW_di12_Status(struct zx_ctx* c);
void zx_FREE_di12_Status(struct zx_ctx* c, struct zx_di12_Status_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_di12_Status_s* zx_DEEP_CLONE_di12_Status(struct zx_ctx* c, struct zx_di12_Status_s* x, int dup_strs);
void zx_DUP_STRS_di12_Status(struct zx_ctx* c, struct zx_di12_Status_s* x);
int zx_WALK_SO_di12_Status(struct zx_ctx* c, struct zx_di12_Status_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_di12_Status(struct zx_ctx* c, struct zx_di12_Status_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_di12_Status(struct zx_ctx* c, struct zx_di12_Status_s* x);
int zx_LEN_WO_di12_Status(struct zx_ctx* c, struct zx_di12_Status_s* x);
char* zx_ENC_SO_di12_Status(struct zx_ctx* c, struct zx_di12_Status_s* x, char* p);
char* zx_ENC_WO_di12_Status(struct zx_ctx* c, struct zx_di12_Status_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_di12_Status(struct zx_ctx* c, struct zx_di12_Status_s* x);
struct zx_str* zx_EASY_ENC_WO_di12_Status(struct zx_ctx* c, struct zx_di12_Status_s* x);

struct zx_di12_Status_s {
  ZX_ELEM_EXT
  zx_di12_Status_EXT
  struct zx_di12_Status_s* Status;	/* {0,-1} nada */
  struct zx_str* code;	/* {1,1} attribute xs:QName */
  struct zx_str* ref;	/* {0,1} attribute xs:string */
  struct zx_str* comment;	/* {0,1} attribute xs:string */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_di12_Status_GET_code(struct zx_di12_Status_s* x);
struct zx_str* zx_di12_Status_GET_ref(struct zx_di12_Status_s* x);
struct zx_str* zx_di12_Status_GET_comment(struct zx_di12_Status_s* x);

struct zx_di12_Status_s* zx_di12_Status_GET_Status(struct zx_di12_Status_s* x, int n);

int zx_di12_Status_NUM_Status(struct zx_di12_Status_s* x);

struct zx_di12_Status_s* zx_di12_Status_POP_Status(struct zx_di12_Status_s* x);

void zx_di12_Status_PUSH_Status(struct zx_di12_Status_s* x, struct zx_di12_Status_s* y);

void zx_di12_Status_PUT_code(struct zx_di12_Status_s* x, struct zx_str* y);
void zx_di12_Status_PUT_ref(struct zx_di12_Status_s* x, struct zx_str* y);
void zx_di12_Status_PUT_comment(struct zx_di12_Status_s* x, struct zx_str* y);

void zx_di12_Status_PUT_Status(struct zx_di12_Status_s* x, int n, struct zx_di12_Status_s* y);

void zx_di12_Status_ADD_Status(struct zx_di12_Status_s* x, int n, struct zx_di12_Status_s* z);

void zx_di12_Status_DEL_Status(struct zx_di12_Status_s* x, int n);

void zx_di12_Status_REV_Status(struct zx_di12_Status_s* x);

#endif

#endif