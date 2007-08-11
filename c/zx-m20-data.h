/* c/zx-m20-data.h - WARNING: This header was automatically generated. DO NOT EDIT!
 * $Id$ */
/* Datastructure design, topography, and layout
 * Copyright (c) 2006 Sampo Kellomaki (sampo@iki.fi),
 * All Rights Reserved. NO WARRANTY. See file COPYING for
 * terms and conditions of use. Element and attributes names as well
 * as some topography are derived from schema descriptions that were used as
 * input and may be subject to their own copright. */

#ifndef _c_zx_m20_data_h
#define _c_zx_m20_data_h

#include "zx.h"
#include "c/zx-const.h"
#include "c/zx-data.h"

#ifndef ZX_ELEM_EXT
#define ZX_ELEM_EXT  /* This extension point should be defined by who includes this file. */
#endif

/* -------------------------- m20_AdditionalMetaLocation -------------------------- */
/* refby( zx_m20_SPDescriptor_s zx_m20_IDPDescriptor_s ) */
#ifndef zx_m20_AdditionalMetaLocation_EXT
#define zx_m20_AdditionalMetaLocation_EXT
#endif

struct zx_m20_AdditionalMetaLocation_s* zx_DEC_m20_AdditionalMetaLocation(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_m20_AdditionalMetaLocation_s* zx_NEW_m20_AdditionalMetaLocation(struct zx_ctx* c);
void zx_FREE_m20_AdditionalMetaLocation(struct zx_ctx* c, struct zx_m20_AdditionalMetaLocation_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_m20_AdditionalMetaLocation_s* zx_DEEP_CLONE_m20_AdditionalMetaLocation(struct zx_ctx* c, struct zx_m20_AdditionalMetaLocation_s* x, int dup_strs);
void zx_DUP_STRS_m20_AdditionalMetaLocation(struct zx_ctx* c, struct zx_m20_AdditionalMetaLocation_s* x);
int zx_WALK_SO_m20_AdditionalMetaLocation(struct zx_ctx* c, struct zx_m20_AdditionalMetaLocation_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_m20_AdditionalMetaLocation(struct zx_ctx* c, struct zx_m20_AdditionalMetaLocation_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_m20_AdditionalMetaLocation(struct zx_ctx* c, struct zx_m20_AdditionalMetaLocation_s* x);
int zx_LEN_WO_m20_AdditionalMetaLocation(struct zx_ctx* c, struct zx_m20_AdditionalMetaLocation_s* x);
char* zx_ENC_SO_m20_AdditionalMetaLocation(struct zx_ctx* c, struct zx_m20_AdditionalMetaLocation_s* x, char* p);
char* zx_ENC_WO_m20_AdditionalMetaLocation(struct zx_ctx* c, struct zx_m20_AdditionalMetaLocation_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_m20_AdditionalMetaLocation(struct zx_ctx* c, struct zx_m20_AdditionalMetaLocation_s* x);
struct zx_str* zx_EASY_ENC_WO_m20_AdditionalMetaLocation(struct zx_ctx* c, struct zx_m20_AdditionalMetaLocation_s* x);

struct zx_m20_AdditionalMetaLocation_s {
  ZX_ELEM_EXT
  zx_m20_AdditionalMetaLocation_EXT
  struct zx_str* namespace;	/* {0,1} attribute xs:anyURI */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_m20_AdditionalMetaLocation_GET_namespace(struct zx_m20_AdditionalMetaLocation_s* x);





void zx_m20_AdditionalMetaLocation_PUT_namespace(struct zx_m20_AdditionalMetaLocation_s* x, struct zx_str* y);





#endif
/* -------------------------- m20_AffiliationDescriptor -------------------------- */
/* refby( zx_m20_EntityDescriptor_s ) */
#ifndef zx_m20_AffiliationDescriptor_EXT
#define zx_m20_AffiliationDescriptor_EXT
#endif

struct zx_m20_AffiliationDescriptor_s* zx_DEC_m20_AffiliationDescriptor(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_m20_AffiliationDescriptor_s* zx_NEW_m20_AffiliationDescriptor(struct zx_ctx* c);
void zx_FREE_m20_AffiliationDescriptor(struct zx_ctx* c, struct zx_m20_AffiliationDescriptor_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_m20_AffiliationDescriptor_s* zx_DEEP_CLONE_m20_AffiliationDescriptor(struct zx_ctx* c, struct zx_m20_AffiliationDescriptor_s* x, int dup_strs);
void zx_DUP_STRS_m20_AffiliationDescriptor(struct zx_ctx* c, struct zx_m20_AffiliationDescriptor_s* x);
int zx_WALK_SO_m20_AffiliationDescriptor(struct zx_ctx* c, struct zx_m20_AffiliationDescriptor_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_m20_AffiliationDescriptor(struct zx_ctx* c, struct zx_m20_AffiliationDescriptor_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_m20_AffiliationDescriptor(struct zx_ctx* c, struct zx_m20_AffiliationDescriptor_s* x);
int zx_LEN_WO_m20_AffiliationDescriptor(struct zx_ctx* c, struct zx_m20_AffiliationDescriptor_s* x);
char* zx_ENC_SO_m20_AffiliationDescriptor(struct zx_ctx* c, struct zx_m20_AffiliationDescriptor_s* x, char* p);
char* zx_ENC_WO_m20_AffiliationDescriptor(struct zx_ctx* c, struct zx_m20_AffiliationDescriptor_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_m20_AffiliationDescriptor(struct zx_ctx* c, struct zx_m20_AffiliationDescriptor_s* x);
struct zx_str* zx_EASY_ENC_WO_m20_AffiliationDescriptor(struct zx_ctx* c, struct zx_m20_AffiliationDescriptor_s* x);

struct zx_m20_AffiliationDescriptor_s {
  ZX_ELEM_EXT
  zx_m20_AffiliationDescriptor_EXT
  struct zx_elem_s* AffiliateMember;	/* {1,-1} xs:anyURI */
  struct zx_m20_Extension_s* Extension;	/* {0,1}  */
  struct zx_m20_KeyDescriptor_s* KeyDescriptor;	/* {0,-1}  */
  struct zx_ds_Signature_s* Signature;	/* {0,1} nada */
  struct zx_str* affiliationOwnerID;	/* {1,1} attribute m20:entityIDType */
  struct zx_str* validUntil;	/* {0,1} attribute xs:dateTime */
  struct zx_str* cacheDuration;	/* {0,1} attribute xs:duration */
  struct zx_str* id;	/* {0,1} attribute xs:ID */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_m20_AffiliationDescriptor_GET_affiliationOwnerID(struct zx_m20_AffiliationDescriptor_s* x);
struct zx_str* zx_m20_AffiliationDescriptor_GET_validUntil(struct zx_m20_AffiliationDescriptor_s* x);
struct zx_str* zx_m20_AffiliationDescriptor_GET_cacheDuration(struct zx_m20_AffiliationDescriptor_s* x);
struct zx_str* zx_m20_AffiliationDescriptor_GET_id(struct zx_m20_AffiliationDescriptor_s* x);

struct zx_elem_s* zx_m20_AffiliationDescriptor_GET_AffiliateMember(struct zx_m20_AffiliationDescriptor_s* x, int n);
struct zx_m20_Extension_s* zx_m20_AffiliationDescriptor_GET_Extension(struct zx_m20_AffiliationDescriptor_s* x, int n);
struct zx_m20_KeyDescriptor_s* zx_m20_AffiliationDescriptor_GET_KeyDescriptor(struct zx_m20_AffiliationDescriptor_s* x, int n);
struct zx_ds_Signature_s* zx_m20_AffiliationDescriptor_GET_Signature(struct zx_m20_AffiliationDescriptor_s* x, int n);

int zx_m20_AffiliationDescriptor_NUM_AffiliateMember(struct zx_m20_AffiliationDescriptor_s* x);
int zx_m20_AffiliationDescriptor_NUM_Extension(struct zx_m20_AffiliationDescriptor_s* x);
int zx_m20_AffiliationDescriptor_NUM_KeyDescriptor(struct zx_m20_AffiliationDescriptor_s* x);
int zx_m20_AffiliationDescriptor_NUM_Signature(struct zx_m20_AffiliationDescriptor_s* x);

struct zx_elem_s* zx_m20_AffiliationDescriptor_POP_AffiliateMember(struct zx_m20_AffiliationDescriptor_s* x);
struct zx_m20_Extension_s* zx_m20_AffiliationDescriptor_POP_Extension(struct zx_m20_AffiliationDescriptor_s* x);
struct zx_m20_KeyDescriptor_s* zx_m20_AffiliationDescriptor_POP_KeyDescriptor(struct zx_m20_AffiliationDescriptor_s* x);
struct zx_ds_Signature_s* zx_m20_AffiliationDescriptor_POP_Signature(struct zx_m20_AffiliationDescriptor_s* x);

void zx_m20_AffiliationDescriptor_PUSH_AffiliateMember(struct zx_m20_AffiliationDescriptor_s* x, struct zx_elem_s* y);
void zx_m20_AffiliationDescriptor_PUSH_Extension(struct zx_m20_AffiliationDescriptor_s* x, struct zx_m20_Extension_s* y);
void zx_m20_AffiliationDescriptor_PUSH_KeyDescriptor(struct zx_m20_AffiliationDescriptor_s* x, struct zx_m20_KeyDescriptor_s* y);
void zx_m20_AffiliationDescriptor_PUSH_Signature(struct zx_m20_AffiliationDescriptor_s* x, struct zx_ds_Signature_s* y);

void zx_m20_AffiliationDescriptor_PUT_affiliationOwnerID(struct zx_m20_AffiliationDescriptor_s* x, struct zx_str* y);
void zx_m20_AffiliationDescriptor_PUT_validUntil(struct zx_m20_AffiliationDescriptor_s* x, struct zx_str* y);
void zx_m20_AffiliationDescriptor_PUT_cacheDuration(struct zx_m20_AffiliationDescriptor_s* x, struct zx_str* y);
void zx_m20_AffiliationDescriptor_PUT_id(struct zx_m20_AffiliationDescriptor_s* x, struct zx_str* y);

void zx_m20_AffiliationDescriptor_PUT_AffiliateMember(struct zx_m20_AffiliationDescriptor_s* x, int n, struct zx_elem_s* y);
void zx_m20_AffiliationDescriptor_PUT_Extension(struct zx_m20_AffiliationDescriptor_s* x, int n, struct zx_m20_Extension_s* y);
void zx_m20_AffiliationDescriptor_PUT_KeyDescriptor(struct zx_m20_AffiliationDescriptor_s* x, int n, struct zx_m20_KeyDescriptor_s* y);
void zx_m20_AffiliationDescriptor_PUT_Signature(struct zx_m20_AffiliationDescriptor_s* x, int n, struct zx_ds_Signature_s* y);

void zx_m20_AffiliationDescriptor_ADD_AffiliateMember(struct zx_m20_AffiliationDescriptor_s* x, int n, struct zx_elem_s* z);
void zx_m20_AffiliationDescriptor_ADD_Extension(struct zx_m20_AffiliationDescriptor_s* x, int n, struct zx_m20_Extension_s* z);
void zx_m20_AffiliationDescriptor_ADD_KeyDescriptor(struct zx_m20_AffiliationDescriptor_s* x, int n, struct zx_m20_KeyDescriptor_s* z);
void zx_m20_AffiliationDescriptor_ADD_Signature(struct zx_m20_AffiliationDescriptor_s* x, int n, struct zx_ds_Signature_s* z);

void zx_m20_AffiliationDescriptor_DEL_AffiliateMember(struct zx_m20_AffiliationDescriptor_s* x, int n);
void zx_m20_AffiliationDescriptor_DEL_Extension(struct zx_m20_AffiliationDescriptor_s* x, int n);
void zx_m20_AffiliationDescriptor_DEL_KeyDescriptor(struct zx_m20_AffiliationDescriptor_s* x, int n);
void zx_m20_AffiliationDescriptor_DEL_Signature(struct zx_m20_AffiliationDescriptor_s* x, int n);

void zx_m20_AffiliationDescriptor_REV_AffiliateMember(struct zx_m20_AffiliationDescriptor_s* x);
void zx_m20_AffiliationDescriptor_REV_Extension(struct zx_m20_AffiliationDescriptor_s* x);
void zx_m20_AffiliationDescriptor_REV_KeyDescriptor(struct zx_m20_AffiliationDescriptor_s* x);
void zx_m20_AffiliationDescriptor_REV_Signature(struct zx_m20_AffiliationDescriptor_s* x);

#endif
/* -------------------------- m20_AssertionConsumerServiceURL -------------------------- */
/* refby( zx_m20_SPDescriptor_s ) */
#ifndef zx_m20_AssertionConsumerServiceURL_EXT
#define zx_m20_AssertionConsumerServiceURL_EXT
#endif

struct zx_m20_AssertionConsumerServiceURL_s* zx_DEC_m20_AssertionConsumerServiceURL(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_m20_AssertionConsumerServiceURL_s* zx_NEW_m20_AssertionConsumerServiceURL(struct zx_ctx* c);
void zx_FREE_m20_AssertionConsumerServiceURL(struct zx_ctx* c, struct zx_m20_AssertionConsumerServiceURL_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_m20_AssertionConsumerServiceURL_s* zx_DEEP_CLONE_m20_AssertionConsumerServiceURL(struct zx_ctx* c, struct zx_m20_AssertionConsumerServiceURL_s* x, int dup_strs);
void zx_DUP_STRS_m20_AssertionConsumerServiceURL(struct zx_ctx* c, struct zx_m20_AssertionConsumerServiceURL_s* x);
int zx_WALK_SO_m20_AssertionConsumerServiceURL(struct zx_ctx* c, struct zx_m20_AssertionConsumerServiceURL_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_m20_AssertionConsumerServiceURL(struct zx_ctx* c, struct zx_m20_AssertionConsumerServiceURL_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_m20_AssertionConsumerServiceURL(struct zx_ctx* c, struct zx_m20_AssertionConsumerServiceURL_s* x);
int zx_LEN_WO_m20_AssertionConsumerServiceURL(struct zx_ctx* c, struct zx_m20_AssertionConsumerServiceURL_s* x);
char* zx_ENC_SO_m20_AssertionConsumerServiceURL(struct zx_ctx* c, struct zx_m20_AssertionConsumerServiceURL_s* x, char* p);
char* zx_ENC_WO_m20_AssertionConsumerServiceURL(struct zx_ctx* c, struct zx_m20_AssertionConsumerServiceURL_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_m20_AssertionConsumerServiceURL(struct zx_ctx* c, struct zx_m20_AssertionConsumerServiceURL_s* x);
struct zx_str* zx_EASY_ENC_WO_m20_AssertionConsumerServiceURL(struct zx_ctx* c, struct zx_m20_AssertionConsumerServiceURL_s* x);

struct zx_m20_AssertionConsumerServiceURL_s {
  ZX_ELEM_EXT
  zx_m20_AssertionConsumerServiceURL_EXT
  struct zx_str* id;	/* {1,1} attribute xs:ID */
  struct zx_str* isDefault;	/* {0,1} attribute xs:boolean */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_m20_AssertionConsumerServiceURL_GET_id(struct zx_m20_AssertionConsumerServiceURL_s* x);
struct zx_str* zx_m20_AssertionConsumerServiceURL_GET_isDefault(struct zx_m20_AssertionConsumerServiceURL_s* x);





void zx_m20_AssertionConsumerServiceURL_PUT_id(struct zx_m20_AssertionConsumerServiceURL_s* x, struct zx_str* y);
void zx_m20_AssertionConsumerServiceURL_PUT_isDefault(struct zx_m20_AssertionConsumerServiceURL_s* x, struct zx_str* y);





#endif
/* -------------------------- m20_ContactPerson -------------------------- */
/* refby( zx_m20_EntityDescriptor_s zx_m20_SPDescriptor_s zx_m20_IDPDescriptor_s ) */
#ifndef zx_m20_ContactPerson_EXT
#define zx_m20_ContactPerson_EXT
#endif

struct zx_m20_ContactPerson_s* zx_DEC_m20_ContactPerson(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_m20_ContactPerson_s* zx_NEW_m20_ContactPerson(struct zx_ctx* c);
void zx_FREE_m20_ContactPerson(struct zx_ctx* c, struct zx_m20_ContactPerson_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_m20_ContactPerson_s* zx_DEEP_CLONE_m20_ContactPerson(struct zx_ctx* c, struct zx_m20_ContactPerson_s* x, int dup_strs);
void zx_DUP_STRS_m20_ContactPerson(struct zx_ctx* c, struct zx_m20_ContactPerson_s* x);
int zx_WALK_SO_m20_ContactPerson(struct zx_ctx* c, struct zx_m20_ContactPerson_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_m20_ContactPerson(struct zx_ctx* c, struct zx_m20_ContactPerson_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_m20_ContactPerson(struct zx_ctx* c, struct zx_m20_ContactPerson_s* x);
int zx_LEN_WO_m20_ContactPerson(struct zx_ctx* c, struct zx_m20_ContactPerson_s* x);
char* zx_ENC_SO_m20_ContactPerson(struct zx_ctx* c, struct zx_m20_ContactPerson_s* x, char* p);
char* zx_ENC_WO_m20_ContactPerson(struct zx_ctx* c, struct zx_m20_ContactPerson_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_m20_ContactPerson(struct zx_ctx* c, struct zx_m20_ContactPerson_s* x);
struct zx_str* zx_EASY_ENC_WO_m20_ContactPerson(struct zx_ctx* c, struct zx_m20_ContactPerson_s* x);

struct zx_m20_ContactPerson_s {
  ZX_ELEM_EXT
  zx_m20_ContactPerson_EXT
  struct zx_elem_s* Company;	/* {0,1} xs:string */
  struct zx_elem_s* GivenName;	/* {0,1} xs:string */
  struct zx_elem_s* SurName;	/* {0,1} xs:string */
  struct zx_elem_s* EmailAddress;	/* {0,-1} xs:anyURI */
  struct zx_elem_s* TelephoneNumber;	/* {0,-1} xs:string */
  struct zx_m20_Extension_s* Extension;	/* {0,1}  */
  struct zx_str* libertyPrincipalIdentifier;	/* {0,1} attribute m20:entityIDType */
  struct zx_str* contactType;	/* {1,1} attribute hrxml:ContactTypeStringExtensionType */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_m20_ContactPerson_GET_libertyPrincipalIdentifier(struct zx_m20_ContactPerson_s* x);
struct zx_str* zx_m20_ContactPerson_GET_contactType(struct zx_m20_ContactPerson_s* x);

struct zx_elem_s* zx_m20_ContactPerson_GET_Company(struct zx_m20_ContactPerson_s* x, int n);
struct zx_elem_s* zx_m20_ContactPerson_GET_GivenName(struct zx_m20_ContactPerson_s* x, int n);
struct zx_elem_s* zx_m20_ContactPerson_GET_SurName(struct zx_m20_ContactPerson_s* x, int n);
struct zx_elem_s* zx_m20_ContactPerson_GET_EmailAddress(struct zx_m20_ContactPerson_s* x, int n);
struct zx_elem_s* zx_m20_ContactPerson_GET_TelephoneNumber(struct zx_m20_ContactPerson_s* x, int n);
struct zx_m20_Extension_s* zx_m20_ContactPerson_GET_Extension(struct zx_m20_ContactPerson_s* x, int n);

int zx_m20_ContactPerson_NUM_Company(struct zx_m20_ContactPerson_s* x);
int zx_m20_ContactPerson_NUM_GivenName(struct zx_m20_ContactPerson_s* x);
int zx_m20_ContactPerson_NUM_SurName(struct zx_m20_ContactPerson_s* x);
int zx_m20_ContactPerson_NUM_EmailAddress(struct zx_m20_ContactPerson_s* x);
int zx_m20_ContactPerson_NUM_TelephoneNumber(struct zx_m20_ContactPerson_s* x);
int zx_m20_ContactPerson_NUM_Extension(struct zx_m20_ContactPerson_s* x);

struct zx_elem_s* zx_m20_ContactPerson_POP_Company(struct zx_m20_ContactPerson_s* x);
struct zx_elem_s* zx_m20_ContactPerson_POP_GivenName(struct zx_m20_ContactPerson_s* x);
struct zx_elem_s* zx_m20_ContactPerson_POP_SurName(struct zx_m20_ContactPerson_s* x);
struct zx_elem_s* zx_m20_ContactPerson_POP_EmailAddress(struct zx_m20_ContactPerson_s* x);
struct zx_elem_s* zx_m20_ContactPerson_POP_TelephoneNumber(struct zx_m20_ContactPerson_s* x);
struct zx_m20_Extension_s* zx_m20_ContactPerson_POP_Extension(struct zx_m20_ContactPerson_s* x);

void zx_m20_ContactPerson_PUSH_Company(struct zx_m20_ContactPerson_s* x, struct zx_elem_s* y);
void zx_m20_ContactPerson_PUSH_GivenName(struct zx_m20_ContactPerson_s* x, struct zx_elem_s* y);
void zx_m20_ContactPerson_PUSH_SurName(struct zx_m20_ContactPerson_s* x, struct zx_elem_s* y);
void zx_m20_ContactPerson_PUSH_EmailAddress(struct zx_m20_ContactPerson_s* x, struct zx_elem_s* y);
void zx_m20_ContactPerson_PUSH_TelephoneNumber(struct zx_m20_ContactPerson_s* x, struct zx_elem_s* y);
void zx_m20_ContactPerson_PUSH_Extension(struct zx_m20_ContactPerson_s* x, struct zx_m20_Extension_s* y);

void zx_m20_ContactPerson_PUT_libertyPrincipalIdentifier(struct zx_m20_ContactPerson_s* x, struct zx_str* y);
void zx_m20_ContactPerson_PUT_contactType(struct zx_m20_ContactPerson_s* x, struct zx_str* y);

void zx_m20_ContactPerson_PUT_Company(struct zx_m20_ContactPerson_s* x, int n, struct zx_elem_s* y);
void zx_m20_ContactPerson_PUT_GivenName(struct zx_m20_ContactPerson_s* x, int n, struct zx_elem_s* y);
void zx_m20_ContactPerson_PUT_SurName(struct zx_m20_ContactPerson_s* x, int n, struct zx_elem_s* y);
void zx_m20_ContactPerson_PUT_EmailAddress(struct zx_m20_ContactPerson_s* x, int n, struct zx_elem_s* y);
void zx_m20_ContactPerson_PUT_TelephoneNumber(struct zx_m20_ContactPerson_s* x, int n, struct zx_elem_s* y);
void zx_m20_ContactPerson_PUT_Extension(struct zx_m20_ContactPerson_s* x, int n, struct zx_m20_Extension_s* y);

void zx_m20_ContactPerson_ADD_Company(struct zx_m20_ContactPerson_s* x, int n, struct zx_elem_s* z);
void zx_m20_ContactPerson_ADD_GivenName(struct zx_m20_ContactPerson_s* x, int n, struct zx_elem_s* z);
void zx_m20_ContactPerson_ADD_SurName(struct zx_m20_ContactPerson_s* x, int n, struct zx_elem_s* z);
void zx_m20_ContactPerson_ADD_EmailAddress(struct zx_m20_ContactPerson_s* x, int n, struct zx_elem_s* z);
void zx_m20_ContactPerson_ADD_TelephoneNumber(struct zx_m20_ContactPerson_s* x, int n, struct zx_elem_s* z);
void zx_m20_ContactPerson_ADD_Extension(struct zx_m20_ContactPerson_s* x, int n, struct zx_m20_Extension_s* z);

void zx_m20_ContactPerson_DEL_Company(struct zx_m20_ContactPerson_s* x, int n);
void zx_m20_ContactPerson_DEL_GivenName(struct zx_m20_ContactPerson_s* x, int n);
void zx_m20_ContactPerson_DEL_SurName(struct zx_m20_ContactPerson_s* x, int n);
void zx_m20_ContactPerson_DEL_EmailAddress(struct zx_m20_ContactPerson_s* x, int n);
void zx_m20_ContactPerson_DEL_TelephoneNumber(struct zx_m20_ContactPerson_s* x, int n);
void zx_m20_ContactPerson_DEL_Extension(struct zx_m20_ContactPerson_s* x, int n);

void zx_m20_ContactPerson_REV_Company(struct zx_m20_ContactPerson_s* x);
void zx_m20_ContactPerson_REV_GivenName(struct zx_m20_ContactPerson_s* x);
void zx_m20_ContactPerson_REV_SurName(struct zx_m20_ContactPerson_s* x);
void zx_m20_ContactPerson_REV_EmailAddress(struct zx_m20_ContactPerson_s* x);
void zx_m20_ContactPerson_REV_TelephoneNumber(struct zx_m20_ContactPerson_s* x);
void zx_m20_ContactPerson_REV_Extension(struct zx_m20_ContactPerson_s* x);

#endif
/* -------------------------- m20_EntitiesDescriptor -------------------------- */
/* refby( ) */
#ifndef zx_m20_EntitiesDescriptor_EXT
#define zx_m20_EntitiesDescriptor_EXT
#endif

struct zx_m20_EntitiesDescriptor_s* zx_DEC_m20_EntitiesDescriptor(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_m20_EntitiesDescriptor_s* zx_NEW_m20_EntitiesDescriptor(struct zx_ctx* c);
void zx_FREE_m20_EntitiesDescriptor(struct zx_ctx* c, struct zx_m20_EntitiesDescriptor_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_m20_EntitiesDescriptor_s* zx_DEEP_CLONE_m20_EntitiesDescriptor(struct zx_ctx* c, struct zx_m20_EntitiesDescriptor_s* x, int dup_strs);
void zx_DUP_STRS_m20_EntitiesDescriptor(struct zx_ctx* c, struct zx_m20_EntitiesDescriptor_s* x);
int zx_WALK_SO_m20_EntitiesDescriptor(struct zx_ctx* c, struct zx_m20_EntitiesDescriptor_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_m20_EntitiesDescriptor(struct zx_ctx* c, struct zx_m20_EntitiesDescriptor_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_m20_EntitiesDescriptor(struct zx_ctx* c, struct zx_m20_EntitiesDescriptor_s* x);
int zx_LEN_WO_m20_EntitiesDescriptor(struct zx_ctx* c, struct zx_m20_EntitiesDescriptor_s* x);
char* zx_ENC_SO_m20_EntitiesDescriptor(struct zx_ctx* c, struct zx_m20_EntitiesDescriptor_s* x, char* p);
char* zx_ENC_WO_m20_EntitiesDescriptor(struct zx_ctx* c, struct zx_m20_EntitiesDescriptor_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_m20_EntitiesDescriptor(struct zx_ctx* c, struct zx_m20_EntitiesDescriptor_s* x);
struct zx_str* zx_EASY_ENC_WO_m20_EntitiesDescriptor(struct zx_ctx* c, struct zx_m20_EntitiesDescriptor_s* x);

struct zx_m20_EntitiesDescriptor_s {
  ZX_ELEM_EXT
  zx_m20_EntitiesDescriptor_EXT
  struct zx_m20_EntityDescriptor_s* EntityDescriptor;	/* {2,unbounded} nada */
};

#ifdef ZX_ENA_GETPUT

struct zx_m20_EntityDescriptor_s* zx_m20_EntitiesDescriptor_GET_EntityDescriptor(struct zx_m20_EntitiesDescriptor_s* x, int n);

int zx_m20_EntitiesDescriptor_NUM_EntityDescriptor(struct zx_m20_EntitiesDescriptor_s* x);

struct zx_m20_EntityDescriptor_s* zx_m20_EntitiesDescriptor_POP_EntityDescriptor(struct zx_m20_EntitiesDescriptor_s* x);

void zx_m20_EntitiesDescriptor_PUSH_EntityDescriptor(struct zx_m20_EntitiesDescriptor_s* x, struct zx_m20_EntityDescriptor_s* y);


void zx_m20_EntitiesDescriptor_PUT_EntityDescriptor(struct zx_m20_EntitiesDescriptor_s* x, int n, struct zx_m20_EntityDescriptor_s* y);

void zx_m20_EntitiesDescriptor_ADD_EntityDescriptor(struct zx_m20_EntitiesDescriptor_s* x, int n, struct zx_m20_EntityDescriptor_s* z);

void zx_m20_EntitiesDescriptor_DEL_EntityDescriptor(struct zx_m20_EntitiesDescriptor_s* x, int n);

void zx_m20_EntitiesDescriptor_REV_EntityDescriptor(struct zx_m20_EntitiesDescriptor_s* x);

#endif
/* -------------------------- m20_EntityDescriptor -------------------------- */
/* refby( zx_m20_EntitiesDescriptor_s ) */
#ifndef zx_m20_EntityDescriptor_EXT
#define zx_m20_EntityDescriptor_EXT
#endif

struct zx_m20_EntityDescriptor_s* zx_DEC_m20_EntityDescriptor(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_m20_EntityDescriptor_s* zx_NEW_m20_EntityDescriptor(struct zx_ctx* c);
void zx_FREE_m20_EntityDescriptor(struct zx_ctx* c, struct zx_m20_EntityDescriptor_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_m20_EntityDescriptor_s* zx_DEEP_CLONE_m20_EntityDescriptor(struct zx_ctx* c, struct zx_m20_EntityDescriptor_s* x, int dup_strs);
void zx_DUP_STRS_m20_EntityDescriptor(struct zx_ctx* c, struct zx_m20_EntityDescriptor_s* x);
int zx_WALK_SO_m20_EntityDescriptor(struct zx_ctx* c, struct zx_m20_EntityDescriptor_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_m20_EntityDescriptor(struct zx_ctx* c, struct zx_m20_EntityDescriptor_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_m20_EntityDescriptor(struct zx_ctx* c, struct zx_m20_EntityDescriptor_s* x);
int zx_LEN_WO_m20_EntityDescriptor(struct zx_ctx* c, struct zx_m20_EntityDescriptor_s* x);
char* zx_ENC_SO_m20_EntityDescriptor(struct zx_ctx* c, struct zx_m20_EntityDescriptor_s* x, char* p);
char* zx_ENC_WO_m20_EntityDescriptor(struct zx_ctx* c, struct zx_m20_EntityDescriptor_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_m20_EntityDescriptor(struct zx_ctx* c, struct zx_m20_EntityDescriptor_s* x);
struct zx_str* zx_EASY_ENC_WO_m20_EntityDescriptor(struct zx_ctx* c, struct zx_m20_EntityDescriptor_s* x);

struct zx_m20_EntityDescriptor_s {
  ZX_ELEM_EXT
  zx_m20_EntityDescriptor_EXT
  struct zx_m20_IDPDescriptor_s* IDPDescriptor;	/* {0,-1}  */
  struct zx_m20_SPDescriptor_s* SPDescriptor;	/* {0,-1}  */
  struct zx_m20_AffiliationDescriptor_s* AffiliationDescriptor;	/* {0,-1}  */
  struct zx_m20_ContactPerson_s* ContactPerson;	/* {0,1}  */
  struct zx_m20_Organization_s* Organization;	/* {0,1}  */
  struct zx_m20_Extension_s* Extension;	/* {0,1}  */
  struct zx_ds_Signature_s* Signature;	/* {0,1} nada */
  struct zx_str* providerID;	/* {1,1} attribute xs:anyURI */
  struct zx_str* id;	/* {0,1} attribute xs:ID */
  struct zx_str* validUntil;	/* {0,1} attribute xs:dateTime */
  struct zx_str* cacheDuration;	/* {0,1} attribute xs:duration */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_m20_EntityDescriptor_GET_providerID(struct zx_m20_EntityDescriptor_s* x);
struct zx_str* zx_m20_EntityDescriptor_GET_id(struct zx_m20_EntityDescriptor_s* x);
struct zx_str* zx_m20_EntityDescriptor_GET_validUntil(struct zx_m20_EntityDescriptor_s* x);
struct zx_str* zx_m20_EntityDescriptor_GET_cacheDuration(struct zx_m20_EntityDescriptor_s* x);

struct zx_m20_IDPDescriptor_s* zx_m20_EntityDescriptor_GET_IDPDescriptor(struct zx_m20_EntityDescriptor_s* x, int n);
struct zx_m20_SPDescriptor_s* zx_m20_EntityDescriptor_GET_SPDescriptor(struct zx_m20_EntityDescriptor_s* x, int n);
struct zx_m20_AffiliationDescriptor_s* zx_m20_EntityDescriptor_GET_AffiliationDescriptor(struct zx_m20_EntityDescriptor_s* x, int n);
struct zx_m20_ContactPerson_s* zx_m20_EntityDescriptor_GET_ContactPerson(struct zx_m20_EntityDescriptor_s* x, int n);
struct zx_m20_Organization_s* zx_m20_EntityDescriptor_GET_Organization(struct zx_m20_EntityDescriptor_s* x, int n);
struct zx_m20_Extension_s* zx_m20_EntityDescriptor_GET_Extension(struct zx_m20_EntityDescriptor_s* x, int n);
struct zx_ds_Signature_s* zx_m20_EntityDescriptor_GET_Signature(struct zx_m20_EntityDescriptor_s* x, int n);

int zx_m20_EntityDescriptor_NUM_IDPDescriptor(struct zx_m20_EntityDescriptor_s* x);
int zx_m20_EntityDescriptor_NUM_SPDescriptor(struct zx_m20_EntityDescriptor_s* x);
int zx_m20_EntityDescriptor_NUM_AffiliationDescriptor(struct zx_m20_EntityDescriptor_s* x);
int zx_m20_EntityDescriptor_NUM_ContactPerson(struct zx_m20_EntityDescriptor_s* x);
int zx_m20_EntityDescriptor_NUM_Organization(struct zx_m20_EntityDescriptor_s* x);
int zx_m20_EntityDescriptor_NUM_Extension(struct zx_m20_EntityDescriptor_s* x);
int zx_m20_EntityDescriptor_NUM_Signature(struct zx_m20_EntityDescriptor_s* x);

struct zx_m20_IDPDescriptor_s* zx_m20_EntityDescriptor_POP_IDPDescriptor(struct zx_m20_EntityDescriptor_s* x);
struct zx_m20_SPDescriptor_s* zx_m20_EntityDescriptor_POP_SPDescriptor(struct zx_m20_EntityDescriptor_s* x);
struct zx_m20_AffiliationDescriptor_s* zx_m20_EntityDescriptor_POP_AffiliationDescriptor(struct zx_m20_EntityDescriptor_s* x);
struct zx_m20_ContactPerson_s* zx_m20_EntityDescriptor_POP_ContactPerson(struct zx_m20_EntityDescriptor_s* x);
struct zx_m20_Organization_s* zx_m20_EntityDescriptor_POP_Organization(struct zx_m20_EntityDescriptor_s* x);
struct zx_m20_Extension_s* zx_m20_EntityDescriptor_POP_Extension(struct zx_m20_EntityDescriptor_s* x);
struct zx_ds_Signature_s* zx_m20_EntityDescriptor_POP_Signature(struct zx_m20_EntityDescriptor_s* x);

void zx_m20_EntityDescriptor_PUSH_IDPDescriptor(struct zx_m20_EntityDescriptor_s* x, struct zx_m20_IDPDescriptor_s* y);
void zx_m20_EntityDescriptor_PUSH_SPDescriptor(struct zx_m20_EntityDescriptor_s* x, struct zx_m20_SPDescriptor_s* y);
void zx_m20_EntityDescriptor_PUSH_AffiliationDescriptor(struct zx_m20_EntityDescriptor_s* x, struct zx_m20_AffiliationDescriptor_s* y);
void zx_m20_EntityDescriptor_PUSH_ContactPerson(struct zx_m20_EntityDescriptor_s* x, struct zx_m20_ContactPerson_s* y);
void zx_m20_EntityDescriptor_PUSH_Organization(struct zx_m20_EntityDescriptor_s* x, struct zx_m20_Organization_s* y);
void zx_m20_EntityDescriptor_PUSH_Extension(struct zx_m20_EntityDescriptor_s* x, struct zx_m20_Extension_s* y);
void zx_m20_EntityDescriptor_PUSH_Signature(struct zx_m20_EntityDescriptor_s* x, struct zx_ds_Signature_s* y);

void zx_m20_EntityDescriptor_PUT_providerID(struct zx_m20_EntityDescriptor_s* x, struct zx_str* y);
void zx_m20_EntityDescriptor_PUT_id(struct zx_m20_EntityDescriptor_s* x, struct zx_str* y);
void zx_m20_EntityDescriptor_PUT_validUntil(struct zx_m20_EntityDescriptor_s* x, struct zx_str* y);
void zx_m20_EntityDescriptor_PUT_cacheDuration(struct zx_m20_EntityDescriptor_s* x, struct zx_str* y);

void zx_m20_EntityDescriptor_PUT_IDPDescriptor(struct zx_m20_EntityDescriptor_s* x, int n, struct zx_m20_IDPDescriptor_s* y);
void zx_m20_EntityDescriptor_PUT_SPDescriptor(struct zx_m20_EntityDescriptor_s* x, int n, struct zx_m20_SPDescriptor_s* y);
void zx_m20_EntityDescriptor_PUT_AffiliationDescriptor(struct zx_m20_EntityDescriptor_s* x, int n, struct zx_m20_AffiliationDescriptor_s* y);
void zx_m20_EntityDescriptor_PUT_ContactPerson(struct zx_m20_EntityDescriptor_s* x, int n, struct zx_m20_ContactPerson_s* y);
void zx_m20_EntityDescriptor_PUT_Organization(struct zx_m20_EntityDescriptor_s* x, int n, struct zx_m20_Organization_s* y);
void zx_m20_EntityDescriptor_PUT_Extension(struct zx_m20_EntityDescriptor_s* x, int n, struct zx_m20_Extension_s* y);
void zx_m20_EntityDescriptor_PUT_Signature(struct zx_m20_EntityDescriptor_s* x, int n, struct zx_ds_Signature_s* y);

void zx_m20_EntityDescriptor_ADD_IDPDescriptor(struct zx_m20_EntityDescriptor_s* x, int n, struct zx_m20_IDPDescriptor_s* z);
void zx_m20_EntityDescriptor_ADD_SPDescriptor(struct zx_m20_EntityDescriptor_s* x, int n, struct zx_m20_SPDescriptor_s* z);
void zx_m20_EntityDescriptor_ADD_AffiliationDescriptor(struct zx_m20_EntityDescriptor_s* x, int n, struct zx_m20_AffiliationDescriptor_s* z);
void zx_m20_EntityDescriptor_ADD_ContactPerson(struct zx_m20_EntityDescriptor_s* x, int n, struct zx_m20_ContactPerson_s* z);
void zx_m20_EntityDescriptor_ADD_Organization(struct zx_m20_EntityDescriptor_s* x, int n, struct zx_m20_Organization_s* z);
void zx_m20_EntityDescriptor_ADD_Extension(struct zx_m20_EntityDescriptor_s* x, int n, struct zx_m20_Extension_s* z);
void zx_m20_EntityDescriptor_ADD_Signature(struct zx_m20_EntityDescriptor_s* x, int n, struct zx_ds_Signature_s* z);

void zx_m20_EntityDescriptor_DEL_IDPDescriptor(struct zx_m20_EntityDescriptor_s* x, int n);
void zx_m20_EntityDescriptor_DEL_SPDescriptor(struct zx_m20_EntityDescriptor_s* x, int n);
void zx_m20_EntityDescriptor_DEL_AffiliationDescriptor(struct zx_m20_EntityDescriptor_s* x, int n);
void zx_m20_EntityDescriptor_DEL_ContactPerson(struct zx_m20_EntityDescriptor_s* x, int n);
void zx_m20_EntityDescriptor_DEL_Organization(struct zx_m20_EntityDescriptor_s* x, int n);
void zx_m20_EntityDescriptor_DEL_Extension(struct zx_m20_EntityDescriptor_s* x, int n);
void zx_m20_EntityDescriptor_DEL_Signature(struct zx_m20_EntityDescriptor_s* x, int n);

void zx_m20_EntityDescriptor_REV_IDPDescriptor(struct zx_m20_EntityDescriptor_s* x);
void zx_m20_EntityDescriptor_REV_SPDescriptor(struct zx_m20_EntityDescriptor_s* x);
void zx_m20_EntityDescriptor_REV_AffiliationDescriptor(struct zx_m20_EntityDescriptor_s* x);
void zx_m20_EntityDescriptor_REV_ContactPerson(struct zx_m20_EntityDescriptor_s* x);
void zx_m20_EntityDescriptor_REV_Organization(struct zx_m20_EntityDescriptor_s* x);
void zx_m20_EntityDescriptor_REV_Extension(struct zx_m20_EntityDescriptor_s* x);
void zx_m20_EntityDescriptor_REV_Signature(struct zx_m20_EntityDescriptor_s* x);

#endif
/* -------------------------- m20_Extension -------------------------- */
/* refby( zx_m20_Organization_s zx_m20_EntityDescriptor_s zx_m20_SPDescriptor_s zx_m20_KeyDescriptor_s zx_m20_ContactPerson_s zx_m20_AffiliationDescriptor_s zx_m20_IDPDescriptor_s ) */
#ifndef zx_m20_Extension_EXT
#define zx_m20_Extension_EXT
#endif

struct zx_m20_Extension_s* zx_DEC_m20_Extension(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_m20_Extension_s* zx_NEW_m20_Extension(struct zx_ctx* c);
void zx_FREE_m20_Extension(struct zx_ctx* c, struct zx_m20_Extension_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_m20_Extension_s* zx_DEEP_CLONE_m20_Extension(struct zx_ctx* c, struct zx_m20_Extension_s* x, int dup_strs);
void zx_DUP_STRS_m20_Extension(struct zx_ctx* c, struct zx_m20_Extension_s* x);
int zx_WALK_SO_m20_Extension(struct zx_ctx* c, struct zx_m20_Extension_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_m20_Extension(struct zx_ctx* c, struct zx_m20_Extension_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_m20_Extension(struct zx_ctx* c, struct zx_m20_Extension_s* x);
int zx_LEN_WO_m20_Extension(struct zx_ctx* c, struct zx_m20_Extension_s* x);
char* zx_ENC_SO_m20_Extension(struct zx_ctx* c, struct zx_m20_Extension_s* x, char* p);
char* zx_ENC_WO_m20_Extension(struct zx_ctx* c, struct zx_m20_Extension_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_m20_Extension(struct zx_ctx* c, struct zx_m20_Extension_s* x);
struct zx_str* zx_EASY_ENC_WO_m20_Extension(struct zx_ctx* c, struct zx_m20_Extension_s* x);

struct zx_m20_Extension_s {
  ZX_ELEM_EXT
  zx_m20_Extension_EXT
};

#ifdef ZX_ENA_GETPUT










#endif
/* -------------------------- m20_IDPDescriptor -------------------------- */
/* refby( zx_m20_EntityDescriptor_s ) */
#ifndef zx_m20_IDPDescriptor_EXT
#define zx_m20_IDPDescriptor_EXT
#endif

struct zx_m20_IDPDescriptor_s* zx_DEC_m20_IDPDescriptor(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_m20_IDPDescriptor_s* zx_NEW_m20_IDPDescriptor(struct zx_ctx* c);
void zx_FREE_m20_IDPDescriptor(struct zx_ctx* c, struct zx_m20_IDPDescriptor_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_m20_IDPDescriptor_s* zx_DEEP_CLONE_m20_IDPDescriptor(struct zx_ctx* c, struct zx_m20_IDPDescriptor_s* x, int dup_strs);
void zx_DUP_STRS_m20_IDPDescriptor(struct zx_ctx* c, struct zx_m20_IDPDescriptor_s* x);
int zx_WALK_SO_m20_IDPDescriptor(struct zx_ctx* c, struct zx_m20_IDPDescriptor_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_m20_IDPDescriptor(struct zx_ctx* c, struct zx_m20_IDPDescriptor_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_m20_IDPDescriptor(struct zx_ctx* c, struct zx_m20_IDPDescriptor_s* x);
int zx_LEN_WO_m20_IDPDescriptor(struct zx_ctx* c, struct zx_m20_IDPDescriptor_s* x);
char* zx_ENC_SO_m20_IDPDescriptor(struct zx_ctx* c, struct zx_m20_IDPDescriptor_s* x, char* p);
char* zx_ENC_WO_m20_IDPDescriptor(struct zx_ctx* c, struct zx_m20_IDPDescriptor_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_m20_IDPDescriptor(struct zx_ctx* c, struct zx_m20_IDPDescriptor_s* x);
struct zx_str* zx_EASY_ENC_WO_m20_IDPDescriptor(struct zx_ctx* c, struct zx_m20_IDPDescriptor_s* x);

struct zx_m20_IDPDescriptor_s {
  ZX_ELEM_EXT
  zx_m20_IDPDescriptor_EXT
  struct zx_m20_KeyDescriptor_s* KeyDescriptor;	/* {0,-1} nada */
  struct zx_elem_s* SoapEndpoint;	/* {0,1} xs:anyURI */
  struct zx_elem_s* SingleLogoutServiceURL;	/* {0,1} xs:anyURI */
  struct zx_elem_s* SingleLogoutServiceReturnURL;	/* {0,1} xs:anyURI */
  struct zx_elem_s* FederationTerminationServiceURL;	/* {0,1} xs:anyURI */
  struct zx_elem_s* FederationTerminationServiceReturnURL;	/* {0,1} xs:anyURI */
  struct zx_elem_s* FederationTerminationNotificationProtocolProfile;	/* {0,-1} xs:anyURI */
  struct zx_elem_s* SingleLogoutProtocolProfile;	/* {0,-1} xs:anyURI */
  struct zx_elem_s* RegisterNameIdentifierProtocolProfile;	/* {0,-1} xs:anyURI */
  struct zx_elem_s* RegisterNameIdentifierServiceURL;	/* {0,1} xs:anyURI */
  struct zx_elem_s* RegisterNameIdentifierServiceReturnURL;	/* {0,1} xs:anyURI */
  struct zx_elem_s* NameIdentifierMappingProtocolProfile;	/* {0,-1} xs:anyURI */
  struct zx_elem_s* NameIdentifierMappingEncryptionProfile;	/* {0,-1} xs:anyURI */
  struct zx_m20_Organization_s* Organization;	/* {0,1}  */
  struct zx_m20_ContactPerson_s* ContactPerson;	/* {0,-1}  */
  struct zx_m20_AdditionalMetaLocation_s* AdditionalMetaLocation;	/* {0,-1}  */
  struct zx_m20_Extension_s* Extension;	/* {0,1}  */
  struct zx_ds_Signature_s* Signature;	/* {0,1} nada */
  struct zx_elem_s* SingleSignOnServiceURL;	/* {1,1} xs:anyURI */
  struct zx_elem_s* SingleSignOnProtocolProfile;	/* {1,-1} xs:anyURI */
  struct zx_elem_s* AuthnServiceURL;	/* {0,1} xs:anyURI */
  struct zx_str* protocolSupportEnumeration;	/* {1,1} attribute xs:string */
  struct zx_str* id;	/* {0,1} attribute xs:ID */
  struct zx_str* validUntil;	/* {0,1} attribute xs:dateTime */
  struct zx_str* cacheDuration;	/* {0,1} attribute xs:duration */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_m20_IDPDescriptor_GET_protocolSupportEnumeration(struct zx_m20_IDPDescriptor_s* x);
struct zx_str* zx_m20_IDPDescriptor_GET_id(struct zx_m20_IDPDescriptor_s* x);
struct zx_str* zx_m20_IDPDescriptor_GET_validUntil(struct zx_m20_IDPDescriptor_s* x);
struct zx_str* zx_m20_IDPDescriptor_GET_cacheDuration(struct zx_m20_IDPDescriptor_s* x);

struct zx_m20_KeyDescriptor_s* zx_m20_IDPDescriptor_GET_KeyDescriptor(struct zx_m20_IDPDescriptor_s* x, int n);
struct zx_elem_s* zx_m20_IDPDescriptor_GET_SoapEndpoint(struct zx_m20_IDPDescriptor_s* x, int n);
struct zx_elem_s* zx_m20_IDPDescriptor_GET_SingleLogoutServiceURL(struct zx_m20_IDPDescriptor_s* x, int n);
struct zx_elem_s* zx_m20_IDPDescriptor_GET_SingleLogoutServiceReturnURL(struct zx_m20_IDPDescriptor_s* x, int n);
struct zx_elem_s* zx_m20_IDPDescriptor_GET_FederationTerminationServiceURL(struct zx_m20_IDPDescriptor_s* x, int n);
struct zx_elem_s* zx_m20_IDPDescriptor_GET_FederationTerminationServiceReturnURL(struct zx_m20_IDPDescriptor_s* x, int n);
struct zx_elem_s* zx_m20_IDPDescriptor_GET_FederationTerminationNotificationProtocolProfile(struct zx_m20_IDPDescriptor_s* x, int n);
struct zx_elem_s* zx_m20_IDPDescriptor_GET_SingleLogoutProtocolProfile(struct zx_m20_IDPDescriptor_s* x, int n);
struct zx_elem_s* zx_m20_IDPDescriptor_GET_RegisterNameIdentifierProtocolProfile(struct zx_m20_IDPDescriptor_s* x, int n);
struct zx_elem_s* zx_m20_IDPDescriptor_GET_RegisterNameIdentifierServiceURL(struct zx_m20_IDPDescriptor_s* x, int n);
struct zx_elem_s* zx_m20_IDPDescriptor_GET_RegisterNameIdentifierServiceReturnURL(struct zx_m20_IDPDescriptor_s* x, int n);
struct zx_elem_s* zx_m20_IDPDescriptor_GET_NameIdentifierMappingProtocolProfile(struct zx_m20_IDPDescriptor_s* x, int n);
struct zx_elem_s* zx_m20_IDPDescriptor_GET_NameIdentifierMappingEncryptionProfile(struct zx_m20_IDPDescriptor_s* x, int n);
struct zx_m20_Organization_s* zx_m20_IDPDescriptor_GET_Organization(struct zx_m20_IDPDescriptor_s* x, int n);
struct zx_m20_ContactPerson_s* zx_m20_IDPDescriptor_GET_ContactPerson(struct zx_m20_IDPDescriptor_s* x, int n);
struct zx_m20_AdditionalMetaLocation_s* zx_m20_IDPDescriptor_GET_AdditionalMetaLocation(struct zx_m20_IDPDescriptor_s* x, int n);
struct zx_m20_Extension_s* zx_m20_IDPDescriptor_GET_Extension(struct zx_m20_IDPDescriptor_s* x, int n);
struct zx_ds_Signature_s* zx_m20_IDPDescriptor_GET_Signature(struct zx_m20_IDPDescriptor_s* x, int n);
struct zx_elem_s* zx_m20_IDPDescriptor_GET_SingleSignOnServiceURL(struct zx_m20_IDPDescriptor_s* x, int n);
struct zx_elem_s* zx_m20_IDPDescriptor_GET_SingleSignOnProtocolProfile(struct zx_m20_IDPDescriptor_s* x, int n);
struct zx_elem_s* zx_m20_IDPDescriptor_GET_AuthnServiceURL(struct zx_m20_IDPDescriptor_s* x, int n);

int zx_m20_IDPDescriptor_NUM_KeyDescriptor(struct zx_m20_IDPDescriptor_s* x);
int zx_m20_IDPDescriptor_NUM_SoapEndpoint(struct zx_m20_IDPDescriptor_s* x);
int zx_m20_IDPDescriptor_NUM_SingleLogoutServiceURL(struct zx_m20_IDPDescriptor_s* x);
int zx_m20_IDPDescriptor_NUM_SingleLogoutServiceReturnURL(struct zx_m20_IDPDescriptor_s* x);
int zx_m20_IDPDescriptor_NUM_FederationTerminationServiceURL(struct zx_m20_IDPDescriptor_s* x);
int zx_m20_IDPDescriptor_NUM_FederationTerminationServiceReturnURL(struct zx_m20_IDPDescriptor_s* x);
int zx_m20_IDPDescriptor_NUM_FederationTerminationNotificationProtocolProfile(struct zx_m20_IDPDescriptor_s* x);
int zx_m20_IDPDescriptor_NUM_SingleLogoutProtocolProfile(struct zx_m20_IDPDescriptor_s* x);
int zx_m20_IDPDescriptor_NUM_RegisterNameIdentifierProtocolProfile(struct zx_m20_IDPDescriptor_s* x);
int zx_m20_IDPDescriptor_NUM_RegisterNameIdentifierServiceURL(struct zx_m20_IDPDescriptor_s* x);
int zx_m20_IDPDescriptor_NUM_RegisterNameIdentifierServiceReturnURL(struct zx_m20_IDPDescriptor_s* x);
int zx_m20_IDPDescriptor_NUM_NameIdentifierMappingProtocolProfile(struct zx_m20_IDPDescriptor_s* x);
int zx_m20_IDPDescriptor_NUM_NameIdentifierMappingEncryptionProfile(struct zx_m20_IDPDescriptor_s* x);
int zx_m20_IDPDescriptor_NUM_Organization(struct zx_m20_IDPDescriptor_s* x);
int zx_m20_IDPDescriptor_NUM_ContactPerson(struct zx_m20_IDPDescriptor_s* x);
int zx_m20_IDPDescriptor_NUM_AdditionalMetaLocation(struct zx_m20_IDPDescriptor_s* x);
int zx_m20_IDPDescriptor_NUM_Extension(struct zx_m20_IDPDescriptor_s* x);
int zx_m20_IDPDescriptor_NUM_Signature(struct zx_m20_IDPDescriptor_s* x);
int zx_m20_IDPDescriptor_NUM_SingleSignOnServiceURL(struct zx_m20_IDPDescriptor_s* x);
int zx_m20_IDPDescriptor_NUM_SingleSignOnProtocolProfile(struct zx_m20_IDPDescriptor_s* x);
int zx_m20_IDPDescriptor_NUM_AuthnServiceURL(struct zx_m20_IDPDescriptor_s* x);

struct zx_m20_KeyDescriptor_s* zx_m20_IDPDescriptor_POP_KeyDescriptor(struct zx_m20_IDPDescriptor_s* x);
struct zx_elem_s* zx_m20_IDPDescriptor_POP_SoapEndpoint(struct zx_m20_IDPDescriptor_s* x);
struct zx_elem_s* zx_m20_IDPDescriptor_POP_SingleLogoutServiceURL(struct zx_m20_IDPDescriptor_s* x);
struct zx_elem_s* zx_m20_IDPDescriptor_POP_SingleLogoutServiceReturnURL(struct zx_m20_IDPDescriptor_s* x);
struct zx_elem_s* zx_m20_IDPDescriptor_POP_FederationTerminationServiceURL(struct zx_m20_IDPDescriptor_s* x);
struct zx_elem_s* zx_m20_IDPDescriptor_POP_FederationTerminationServiceReturnURL(struct zx_m20_IDPDescriptor_s* x);
struct zx_elem_s* zx_m20_IDPDescriptor_POP_FederationTerminationNotificationProtocolProfile(struct zx_m20_IDPDescriptor_s* x);
struct zx_elem_s* zx_m20_IDPDescriptor_POP_SingleLogoutProtocolProfile(struct zx_m20_IDPDescriptor_s* x);
struct zx_elem_s* zx_m20_IDPDescriptor_POP_RegisterNameIdentifierProtocolProfile(struct zx_m20_IDPDescriptor_s* x);
struct zx_elem_s* zx_m20_IDPDescriptor_POP_RegisterNameIdentifierServiceURL(struct zx_m20_IDPDescriptor_s* x);
struct zx_elem_s* zx_m20_IDPDescriptor_POP_RegisterNameIdentifierServiceReturnURL(struct zx_m20_IDPDescriptor_s* x);
struct zx_elem_s* zx_m20_IDPDescriptor_POP_NameIdentifierMappingProtocolProfile(struct zx_m20_IDPDescriptor_s* x);
struct zx_elem_s* zx_m20_IDPDescriptor_POP_NameIdentifierMappingEncryptionProfile(struct zx_m20_IDPDescriptor_s* x);
struct zx_m20_Organization_s* zx_m20_IDPDescriptor_POP_Organization(struct zx_m20_IDPDescriptor_s* x);
struct zx_m20_ContactPerson_s* zx_m20_IDPDescriptor_POP_ContactPerson(struct zx_m20_IDPDescriptor_s* x);
struct zx_m20_AdditionalMetaLocation_s* zx_m20_IDPDescriptor_POP_AdditionalMetaLocation(struct zx_m20_IDPDescriptor_s* x);
struct zx_m20_Extension_s* zx_m20_IDPDescriptor_POP_Extension(struct zx_m20_IDPDescriptor_s* x);
struct zx_ds_Signature_s* zx_m20_IDPDescriptor_POP_Signature(struct zx_m20_IDPDescriptor_s* x);
struct zx_elem_s* zx_m20_IDPDescriptor_POP_SingleSignOnServiceURL(struct zx_m20_IDPDescriptor_s* x);
struct zx_elem_s* zx_m20_IDPDescriptor_POP_SingleSignOnProtocolProfile(struct zx_m20_IDPDescriptor_s* x);
struct zx_elem_s* zx_m20_IDPDescriptor_POP_AuthnServiceURL(struct zx_m20_IDPDescriptor_s* x);

void zx_m20_IDPDescriptor_PUSH_KeyDescriptor(struct zx_m20_IDPDescriptor_s* x, struct zx_m20_KeyDescriptor_s* y);
void zx_m20_IDPDescriptor_PUSH_SoapEndpoint(struct zx_m20_IDPDescriptor_s* x, struct zx_elem_s* y);
void zx_m20_IDPDescriptor_PUSH_SingleLogoutServiceURL(struct zx_m20_IDPDescriptor_s* x, struct zx_elem_s* y);
void zx_m20_IDPDescriptor_PUSH_SingleLogoutServiceReturnURL(struct zx_m20_IDPDescriptor_s* x, struct zx_elem_s* y);
void zx_m20_IDPDescriptor_PUSH_FederationTerminationServiceURL(struct zx_m20_IDPDescriptor_s* x, struct zx_elem_s* y);
void zx_m20_IDPDescriptor_PUSH_FederationTerminationServiceReturnURL(struct zx_m20_IDPDescriptor_s* x, struct zx_elem_s* y);
void zx_m20_IDPDescriptor_PUSH_FederationTerminationNotificationProtocolProfile(struct zx_m20_IDPDescriptor_s* x, struct zx_elem_s* y);
void zx_m20_IDPDescriptor_PUSH_SingleLogoutProtocolProfile(struct zx_m20_IDPDescriptor_s* x, struct zx_elem_s* y);
void zx_m20_IDPDescriptor_PUSH_RegisterNameIdentifierProtocolProfile(struct zx_m20_IDPDescriptor_s* x, struct zx_elem_s* y);
void zx_m20_IDPDescriptor_PUSH_RegisterNameIdentifierServiceURL(struct zx_m20_IDPDescriptor_s* x, struct zx_elem_s* y);
void zx_m20_IDPDescriptor_PUSH_RegisterNameIdentifierServiceReturnURL(struct zx_m20_IDPDescriptor_s* x, struct zx_elem_s* y);
void zx_m20_IDPDescriptor_PUSH_NameIdentifierMappingProtocolProfile(struct zx_m20_IDPDescriptor_s* x, struct zx_elem_s* y);
void zx_m20_IDPDescriptor_PUSH_NameIdentifierMappingEncryptionProfile(struct zx_m20_IDPDescriptor_s* x, struct zx_elem_s* y);
void zx_m20_IDPDescriptor_PUSH_Organization(struct zx_m20_IDPDescriptor_s* x, struct zx_m20_Organization_s* y);
void zx_m20_IDPDescriptor_PUSH_ContactPerson(struct zx_m20_IDPDescriptor_s* x, struct zx_m20_ContactPerson_s* y);
void zx_m20_IDPDescriptor_PUSH_AdditionalMetaLocation(struct zx_m20_IDPDescriptor_s* x, struct zx_m20_AdditionalMetaLocation_s* y);
void zx_m20_IDPDescriptor_PUSH_Extension(struct zx_m20_IDPDescriptor_s* x, struct zx_m20_Extension_s* y);
void zx_m20_IDPDescriptor_PUSH_Signature(struct zx_m20_IDPDescriptor_s* x, struct zx_ds_Signature_s* y);
void zx_m20_IDPDescriptor_PUSH_SingleSignOnServiceURL(struct zx_m20_IDPDescriptor_s* x, struct zx_elem_s* y);
void zx_m20_IDPDescriptor_PUSH_SingleSignOnProtocolProfile(struct zx_m20_IDPDescriptor_s* x, struct zx_elem_s* y);
void zx_m20_IDPDescriptor_PUSH_AuthnServiceURL(struct zx_m20_IDPDescriptor_s* x, struct zx_elem_s* y);

void zx_m20_IDPDescriptor_PUT_protocolSupportEnumeration(struct zx_m20_IDPDescriptor_s* x, struct zx_str* y);
void zx_m20_IDPDescriptor_PUT_id(struct zx_m20_IDPDescriptor_s* x, struct zx_str* y);
void zx_m20_IDPDescriptor_PUT_validUntil(struct zx_m20_IDPDescriptor_s* x, struct zx_str* y);
void zx_m20_IDPDescriptor_PUT_cacheDuration(struct zx_m20_IDPDescriptor_s* x, struct zx_str* y);

void zx_m20_IDPDescriptor_PUT_KeyDescriptor(struct zx_m20_IDPDescriptor_s* x, int n, struct zx_m20_KeyDescriptor_s* y);
void zx_m20_IDPDescriptor_PUT_SoapEndpoint(struct zx_m20_IDPDescriptor_s* x, int n, struct zx_elem_s* y);
void zx_m20_IDPDescriptor_PUT_SingleLogoutServiceURL(struct zx_m20_IDPDescriptor_s* x, int n, struct zx_elem_s* y);
void zx_m20_IDPDescriptor_PUT_SingleLogoutServiceReturnURL(struct zx_m20_IDPDescriptor_s* x, int n, struct zx_elem_s* y);
void zx_m20_IDPDescriptor_PUT_FederationTerminationServiceURL(struct zx_m20_IDPDescriptor_s* x, int n, struct zx_elem_s* y);
void zx_m20_IDPDescriptor_PUT_FederationTerminationServiceReturnURL(struct zx_m20_IDPDescriptor_s* x, int n, struct zx_elem_s* y);
void zx_m20_IDPDescriptor_PUT_FederationTerminationNotificationProtocolProfile(struct zx_m20_IDPDescriptor_s* x, int n, struct zx_elem_s* y);
void zx_m20_IDPDescriptor_PUT_SingleLogoutProtocolProfile(struct zx_m20_IDPDescriptor_s* x, int n, struct zx_elem_s* y);
void zx_m20_IDPDescriptor_PUT_RegisterNameIdentifierProtocolProfile(struct zx_m20_IDPDescriptor_s* x, int n, struct zx_elem_s* y);
void zx_m20_IDPDescriptor_PUT_RegisterNameIdentifierServiceURL(struct zx_m20_IDPDescriptor_s* x, int n, struct zx_elem_s* y);
void zx_m20_IDPDescriptor_PUT_RegisterNameIdentifierServiceReturnURL(struct zx_m20_IDPDescriptor_s* x, int n, struct zx_elem_s* y);
void zx_m20_IDPDescriptor_PUT_NameIdentifierMappingProtocolProfile(struct zx_m20_IDPDescriptor_s* x, int n, struct zx_elem_s* y);
void zx_m20_IDPDescriptor_PUT_NameIdentifierMappingEncryptionProfile(struct zx_m20_IDPDescriptor_s* x, int n, struct zx_elem_s* y);
void zx_m20_IDPDescriptor_PUT_Organization(struct zx_m20_IDPDescriptor_s* x, int n, struct zx_m20_Organization_s* y);
void zx_m20_IDPDescriptor_PUT_ContactPerson(struct zx_m20_IDPDescriptor_s* x, int n, struct zx_m20_ContactPerson_s* y);
void zx_m20_IDPDescriptor_PUT_AdditionalMetaLocation(struct zx_m20_IDPDescriptor_s* x, int n, struct zx_m20_AdditionalMetaLocation_s* y);
void zx_m20_IDPDescriptor_PUT_Extension(struct zx_m20_IDPDescriptor_s* x, int n, struct zx_m20_Extension_s* y);
void zx_m20_IDPDescriptor_PUT_Signature(struct zx_m20_IDPDescriptor_s* x, int n, struct zx_ds_Signature_s* y);
void zx_m20_IDPDescriptor_PUT_SingleSignOnServiceURL(struct zx_m20_IDPDescriptor_s* x, int n, struct zx_elem_s* y);
void zx_m20_IDPDescriptor_PUT_SingleSignOnProtocolProfile(struct zx_m20_IDPDescriptor_s* x, int n, struct zx_elem_s* y);
void zx_m20_IDPDescriptor_PUT_AuthnServiceURL(struct zx_m20_IDPDescriptor_s* x, int n, struct zx_elem_s* y);

void zx_m20_IDPDescriptor_ADD_KeyDescriptor(struct zx_m20_IDPDescriptor_s* x, int n, struct zx_m20_KeyDescriptor_s* z);
void zx_m20_IDPDescriptor_ADD_SoapEndpoint(struct zx_m20_IDPDescriptor_s* x, int n, struct zx_elem_s* z);
void zx_m20_IDPDescriptor_ADD_SingleLogoutServiceURL(struct zx_m20_IDPDescriptor_s* x, int n, struct zx_elem_s* z);
void zx_m20_IDPDescriptor_ADD_SingleLogoutServiceReturnURL(struct zx_m20_IDPDescriptor_s* x, int n, struct zx_elem_s* z);
void zx_m20_IDPDescriptor_ADD_FederationTerminationServiceURL(struct zx_m20_IDPDescriptor_s* x, int n, struct zx_elem_s* z);
void zx_m20_IDPDescriptor_ADD_FederationTerminationServiceReturnURL(struct zx_m20_IDPDescriptor_s* x, int n, struct zx_elem_s* z);
void zx_m20_IDPDescriptor_ADD_FederationTerminationNotificationProtocolProfile(struct zx_m20_IDPDescriptor_s* x, int n, struct zx_elem_s* z);
void zx_m20_IDPDescriptor_ADD_SingleLogoutProtocolProfile(struct zx_m20_IDPDescriptor_s* x, int n, struct zx_elem_s* z);
void zx_m20_IDPDescriptor_ADD_RegisterNameIdentifierProtocolProfile(struct zx_m20_IDPDescriptor_s* x, int n, struct zx_elem_s* z);
void zx_m20_IDPDescriptor_ADD_RegisterNameIdentifierServiceURL(struct zx_m20_IDPDescriptor_s* x, int n, struct zx_elem_s* z);
void zx_m20_IDPDescriptor_ADD_RegisterNameIdentifierServiceReturnURL(struct zx_m20_IDPDescriptor_s* x, int n, struct zx_elem_s* z);
void zx_m20_IDPDescriptor_ADD_NameIdentifierMappingProtocolProfile(struct zx_m20_IDPDescriptor_s* x, int n, struct zx_elem_s* z);
void zx_m20_IDPDescriptor_ADD_NameIdentifierMappingEncryptionProfile(struct zx_m20_IDPDescriptor_s* x, int n, struct zx_elem_s* z);
void zx_m20_IDPDescriptor_ADD_Organization(struct zx_m20_IDPDescriptor_s* x, int n, struct zx_m20_Organization_s* z);
void zx_m20_IDPDescriptor_ADD_ContactPerson(struct zx_m20_IDPDescriptor_s* x, int n, struct zx_m20_ContactPerson_s* z);
void zx_m20_IDPDescriptor_ADD_AdditionalMetaLocation(struct zx_m20_IDPDescriptor_s* x, int n, struct zx_m20_AdditionalMetaLocation_s* z);
void zx_m20_IDPDescriptor_ADD_Extension(struct zx_m20_IDPDescriptor_s* x, int n, struct zx_m20_Extension_s* z);
void zx_m20_IDPDescriptor_ADD_Signature(struct zx_m20_IDPDescriptor_s* x, int n, struct zx_ds_Signature_s* z);
void zx_m20_IDPDescriptor_ADD_SingleSignOnServiceURL(struct zx_m20_IDPDescriptor_s* x, int n, struct zx_elem_s* z);
void zx_m20_IDPDescriptor_ADD_SingleSignOnProtocolProfile(struct zx_m20_IDPDescriptor_s* x, int n, struct zx_elem_s* z);
void zx_m20_IDPDescriptor_ADD_AuthnServiceURL(struct zx_m20_IDPDescriptor_s* x, int n, struct zx_elem_s* z);

void zx_m20_IDPDescriptor_DEL_KeyDescriptor(struct zx_m20_IDPDescriptor_s* x, int n);
void zx_m20_IDPDescriptor_DEL_SoapEndpoint(struct zx_m20_IDPDescriptor_s* x, int n);
void zx_m20_IDPDescriptor_DEL_SingleLogoutServiceURL(struct zx_m20_IDPDescriptor_s* x, int n);
void zx_m20_IDPDescriptor_DEL_SingleLogoutServiceReturnURL(struct zx_m20_IDPDescriptor_s* x, int n);
void zx_m20_IDPDescriptor_DEL_FederationTerminationServiceURL(struct zx_m20_IDPDescriptor_s* x, int n);
void zx_m20_IDPDescriptor_DEL_FederationTerminationServiceReturnURL(struct zx_m20_IDPDescriptor_s* x, int n);
void zx_m20_IDPDescriptor_DEL_FederationTerminationNotificationProtocolProfile(struct zx_m20_IDPDescriptor_s* x, int n);
void zx_m20_IDPDescriptor_DEL_SingleLogoutProtocolProfile(struct zx_m20_IDPDescriptor_s* x, int n);
void zx_m20_IDPDescriptor_DEL_RegisterNameIdentifierProtocolProfile(struct zx_m20_IDPDescriptor_s* x, int n);
void zx_m20_IDPDescriptor_DEL_RegisterNameIdentifierServiceURL(struct zx_m20_IDPDescriptor_s* x, int n);
void zx_m20_IDPDescriptor_DEL_RegisterNameIdentifierServiceReturnURL(struct zx_m20_IDPDescriptor_s* x, int n);
void zx_m20_IDPDescriptor_DEL_NameIdentifierMappingProtocolProfile(struct zx_m20_IDPDescriptor_s* x, int n);
void zx_m20_IDPDescriptor_DEL_NameIdentifierMappingEncryptionProfile(struct zx_m20_IDPDescriptor_s* x, int n);
void zx_m20_IDPDescriptor_DEL_Organization(struct zx_m20_IDPDescriptor_s* x, int n);
void zx_m20_IDPDescriptor_DEL_ContactPerson(struct zx_m20_IDPDescriptor_s* x, int n);
void zx_m20_IDPDescriptor_DEL_AdditionalMetaLocation(struct zx_m20_IDPDescriptor_s* x, int n);
void zx_m20_IDPDescriptor_DEL_Extension(struct zx_m20_IDPDescriptor_s* x, int n);
void zx_m20_IDPDescriptor_DEL_Signature(struct zx_m20_IDPDescriptor_s* x, int n);
void zx_m20_IDPDescriptor_DEL_SingleSignOnServiceURL(struct zx_m20_IDPDescriptor_s* x, int n);
void zx_m20_IDPDescriptor_DEL_SingleSignOnProtocolProfile(struct zx_m20_IDPDescriptor_s* x, int n);
void zx_m20_IDPDescriptor_DEL_AuthnServiceURL(struct zx_m20_IDPDescriptor_s* x, int n);

void zx_m20_IDPDescriptor_REV_KeyDescriptor(struct zx_m20_IDPDescriptor_s* x);
void zx_m20_IDPDescriptor_REV_SoapEndpoint(struct zx_m20_IDPDescriptor_s* x);
void zx_m20_IDPDescriptor_REV_SingleLogoutServiceURL(struct zx_m20_IDPDescriptor_s* x);
void zx_m20_IDPDescriptor_REV_SingleLogoutServiceReturnURL(struct zx_m20_IDPDescriptor_s* x);
void zx_m20_IDPDescriptor_REV_FederationTerminationServiceURL(struct zx_m20_IDPDescriptor_s* x);
void zx_m20_IDPDescriptor_REV_FederationTerminationServiceReturnURL(struct zx_m20_IDPDescriptor_s* x);
void zx_m20_IDPDescriptor_REV_FederationTerminationNotificationProtocolProfile(struct zx_m20_IDPDescriptor_s* x);
void zx_m20_IDPDescriptor_REV_SingleLogoutProtocolProfile(struct zx_m20_IDPDescriptor_s* x);
void zx_m20_IDPDescriptor_REV_RegisterNameIdentifierProtocolProfile(struct zx_m20_IDPDescriptor_s* x);
void zx_m20_IDPDescriptor_REV_RegisterNameIdentifierServiceURL(struct zx_m20_IDPDescriptor_s* x);
void zx_m20_IDPDescriptor_REV_RegisterNameIdentifierServiceReturnURL(struct zx_m20_IDPDescriptor_s* x);
void zx_m20_IDPDescriptor_REV_NameIdentifierMappingProtocolProfile(struct zx_m20_IDPDescriptor_s* x);
void zx_m20_IDPDescriptor_REV_NameIdentifierMappingEncryptionProfile(struct zx_m20_IDPDescriptor_s* x);
void zx_m20_IDPDescriptor_REV_Organization(struct zx_m20_IDPDescriptor_s* x);
void zx_m20_IDPDescriptor_REV_ContactPerson(struct zx_m20_IDPDescriptor_s* x);
void zx_m20_IDPDescriptor_REV_AdditionalMetaLocation(struct zx_m20_IDPDescriptor_s* x);
void zx_m20_IDPDescriptor_REV_Extension(struct zx_m20_IDPDescriptor_s* x);
void zx_m20_IDPDescriptor_REV_Signature(struct zx_m20_IDPDescriptor_s* x);
void zx_m20_IDPDescriptor_REV_SingleSignOnServiceURL(struct zx_m20_IDPDescriptor_s* x);
void zx_m20_IDPDescriptor_REV_SingleSignOnProtocolProfile(struct zx_m20_IDPDescriptor_s* x);
void zx_m20_IDPDescriptor_REV_AuthnServiceURL(struct zx_m20_IDPDescriptor_s* x);

#endif
/* -------------------------- m20_KeyDescriptor -------------------------- */
/* refby( zx_m20_SPDescriptor_s zx_m20_AffiliationDescriptor_s zx_m20_IDPDescriptor_s ) */
#ifndef zx_m20_KeyDescriptor_EXT
#define zx_m20_KeyDescriptor_EXT
#endif

struct zx_m20_KeyDescriptor_s* zx_DEC_m20_KeyDescriptor(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_m20_KeyDescriptor_s* zx_NEW_m20_KeyDescriptor(struct zx_ctx* c);
void zx_FREE_m20_KeyDescriptor(struct zx_ctx* c, struct zx_m20_KeyDescriptor_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_m20_KeyDescriptor_s* zx_DEEP_CLONE_m20_KeyDescriptor(struct zx_ctx* c, struct zx_m20_KeyDescriptor_s* x, int dup_strs);
void zx_DUP_STRS_m20_KeyDescriptor(struct zx_ctx* c, struct zx_m20_KeyDescriptor_s* x);
int zx_WALK_SO_m20_KeyDescriptor(struct zx_ctx* c, struct zx_m20_KeyDescriptor_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_m20_KeyDescriptor(struct zx_ctx* c, struct zx_m20_KeyDescriptor_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_m20_KeyDescriptor(struct zx_ctx* c, struct zx_m20_KeyDescriptor_s* x);
int zx_LEN_WO_m20_KeyDescriptor(struct zx_ctx* c, struct zx_m20_KeyDescriptor_s* x);
char* zx_ENC_SO_m20_KeyDescriptor(struct zx_ctx* c, struct zx_m20_KeyDescriptor_s* x, char* p);
char* zx_ENC_WO_m20_KeyDescriptor(struct zx_ctx* c, struct zx_m20_KeyDescriptor_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_m20_KeyDescriptor(struct zx_ctx* c, struct zx_m20_KeyDescriptor_s* x);
struct zx_str* zx_EASY_ENC_WO_m20_KeyDescriptor(struct zx_ctx* c, struct zx_m20_KeyDescriptor_s* x);

struct zx_m20_KeyDescriptor_s {
  ZX_ELEM_EXT
  zx_m20_KeyDescriptor_EXT
  struct zx_elem_s* EncryptionMethod;	/* {0,1} xs:anyURI */
  struct zx_elem_s* KeySize;	/* {0,1} xs:integer */
  struct zx_ds_KeyInfo_s* KeyInfo;	/* {0,1} nada */
  struct zx_m20_Extension_s* Extension;	/* {0,1}  */
  struct zx_str* use;	/* {0,1} attribute keyTypes */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_m20_KeyDescriptor_GET_use(struct zx_m20_KeyDescriptor_s* x);

struct zx_elem_s* zx_m20_KeyDescriptor_GET_EncryptionMethod(struct zx_m20_KeyDescriptor_s* x, int n);
struct zx_elem_s* zx_m20_KeyDescriptor_GET_KeySize(struct zx_m20_KeyDescriptor_s* x, int n);
struct zx_ds_KeyInfo_s* zx_m20_KeyDescriptor_GET_KeyInfo(struct zx_m20_KeyDescriptor_s* x, int n);
struct zx_m20_Extension_s* zx_m20_KeyDescriptor_GET_Extension(struct zx_m20_KeyDescriptor_s* x, int n);

int zx_m20_KeyDescriptor_NUM_EncryptionMethod(struct zx_m20_KeyDescriptor_s* x);
int zx_m20_KeyDescriptor_NUM_KeySize(struct zx_m20_KeyDescriptor_s* x);
int zx_m20_KeyDescriptor_NUM_KeyInfo(struct zx_m20_KeyDescriptor_s* x);
int zx_m20_KeyDescriptor_NUM_Extension(struct zx_m20_KeyDescriptor_s* x);

struct zx_elem_s* zx_m20_KeyDescriptor_POP_EncryptionMethod(struct zx_m20_KeyDescriptor_s* x);
struct zx_elem_s* zx_m20_KeyDescriptor_POP_KeySize(struct zx_m20_KeyDescriptor_s* x);
struct zx_ds_KeyInfo_s* zx_m20_KeyDescriptor_POP_KeyInfo(struct zx_m20_KeyDescriptor_s* x);
struct zx_m20_Extension_s* zx_m20_KeyDescriptor_POP_Extension(struct zx_m20_KeyDescriptor_s* x);

void zx_m20_KeyDescriptor_PUSH_EncryptionMethod(struct zx_m20_KeyDescriptor_s* x, struct zx_elem_s* y);
void zx_m20_KeyDescriptor_PUSH_KeySize(struct zx_m20_KeyDescriptor_s* x, struct zx_elem_s* y);
void zx_m20_KeyDescriptor_PUSH_KeyInfo(struct zx_m20_KeyDescriptor_s* x, struct zx_ds_KeyInfo_s* y);
void zx_m20_KeyDescriptor_PUSH_Extension(struct zx_m20_KeyDescriptor_s* x, struct zx_m20_Extension_s* y);

void zx_m20_KeyDescriptor_PUT_use(struct zx_m20_KeyDescriptor_s* x, struct zx_str* y);

void zx_m20_KeyDescriptor_PUT_EncryptionMethod(struct zx_m20_KeyDescriptor_s* x, int n, struct zx_elem_s* y);
void zx_m20_KeyDescriptor_PUT_KeySize(struct zx_m20_KeyDescriptor_s* x, int n, struct zx_elem_s* y);
void zx_m20_KeyDescriptor_PUT_KeyInfo(struct zx_m20_KeyDescriptor_s* x, int n, struct zx_ds_KeyInfo_s* y);
void zx_m20_KeyDescriptor_PUT_Extension(struct zx_m20_KeyDescriptor_s* x, int n, struct zx_m20_Extension_s* y);

void zx_m20_KeyDescriptor_ADD_EncryptionMethod(struct zx_m20_KeyDescriptor_s* x, int n, struct zx_elem_s* z);
void zx_m20_KeyDescriptor_ADD_KeySize(struct zx_m20_KeyDescriptor_s* x, int n, struct zx_elem_s* z);
void zx_m20_KeyDescriptor_ADD_KeyInfo(struct zx_m20_KeyDescriptor_s* x, int n, struct zx_ds_KeyInfo_s* z);
void zx_m20_KeyDescriptor_ADD_Extension(struct zx_m20_KeyDescriptor_s* x, int n, struct zx_m20_Extension_s* z);

void zx_m20_KeyDescriptor_DEL_EncryptionMethod(struct zx_m20_KeyDescriptor_s* x, int n);
void zx_m20_KeyDescriptor_DEL_KeySize(struct zx_m20_KeyDescriptor_s* x, int n);
void zx_m20_KeyDescriptor_DEL_KeyInfo(struct zx_m20_KeyDescriptor_s* x, int n);
void zx_m20_KeyDescriptor_DEL_Extension(struct zx_m20_KeyDescriptor_s* x, int n);

void zx_m20_KeyDescriptor_REV_EncryptionMethod(struct zx_m20_KeyDescriptor_s* x);
void zx_m20_KeyDescriptor_REV_KeySize(struct zx_m20_KeyDescriptor_s* x);
void zx_m20_KeyDescriptor_REV_KeyInfo(struct zx_m20_KeyDescriptor_s* x);
void zx_m20_KeyDescriptor_REV_Extension(struct zx_m20_KeyDescriptor_s* x);

#endif
/* -------------------------- m20_Organization -------------------------- */
/* refby( zx_m20_EntityDescriptor_s zx_m20_SPDescriptor_s zx_m20_IDPDescriptor_s ) */
#ifndef zx_m20_Organization_EXT
#define zx_m20_Organization_EXT
#endif

struct zx_m20_Organization_s* zx_DEC_m20_Organization(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_m20_Organization_s* zx_NEW_m20_Organization(struct zx_ctx* c);
void zx_FREE_m20_Organization(struct zx_ctx* c, struct zx_m20_Organization_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_m20_Organization_s* zx_DEEP_CLONE_m20_Organization(struct zx_ctx* c, struct zx_m20_Organization_s* x, int dup_strs);
void zx_DUP_STRS_m20_Organization(struct zx_ctx* c, struct zx_m20_Organization_s* x);
int zx_WALK_SO_m20_Organization(struct zx_ctx* c, struct zx_m20_Organization_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_m20_Organization(struct zx_ctx* c, struct zx_m20_Organization_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_m20_Organization(struct zx_ctx* c, struct zx_m20_Organization_s* x);
int zx_LEN_WO_m20_Organization(struct zx_ctx* c, struct zx_m20_Organization_s* x);
char* zx_ENC_SO_m20_Organization(struct zx_ctx* c, struct zx_m20_Organization_s* x, char* p);
char* zx_ENC_WO_m20_Organization(struct zx_ctx* c, struct zx_m20_Organization_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_m20_Organization(struct zx_ctx* c, struct zx_m20_Organization_s* x);
struct zx_str* zx_EASY_ENC_WO_m20_Organization(struct zx_ctx* c, struct zx_m20_Organization_s* x);

struct zx_m20_Organization_s {
  ZX_ELEM_EXT
  zx_m20_Organization_EXT
  struct zx_m20_OrganizationName_s* OrganizationName;	/* {1,-1}  */
  struct zx_m20_OrganizationDisplayName_s* OrganizationDisplayName;	/* {1,-1}  */
  struct zx_m20_OrganizationURL_s* OrganizationURL;	/* {1,-1}  */
  struct zx_m20_Extension_s* Extension;	/* {0,1}  */
};

#ifdef ZX_ENA_GETPUT

struct zx_m20_OrganizationName_s* zx_m20_Organization_GET_OrganizationName(struct zx_m20_Organization_s* x, int n);
struct zx_m20_OrganizationDisplayName_s* zx_m20_Organization_GET_OrganizationDisplayName(struct zx_m20_Organization_s* x, int n);
struct zx_m20_OrganizationURL_s* zx_m20_Organization_GET_OrganizationURL(struct zx_m20_Organization_s* x, int n);
struct zx_m20_Extension_s* zx_m20_Organization_GET_Extension(struct zx_m20_Organization_s* x, int n);

int zx_m20_Organization_NUM_OrganizationName(struct zx_m20_Organization_s* x);
int zx_m20_Organization_NUM_OrganizationDisplayName(struct zx_m20_Organization_s* x);
int zx_m20_Organization_NUM_OrganizationURL(struct zx_m20_Organization_s* x);
int zx_m20_Organization_NUM_Extension(struct zx_m20_Organization_s* x);

struct zx_m20_OrganizationName_s* zx_m20_Organization_POP_OrganizationName(struct zx_m20_Organization_s* x);
struct zx_m20_OrganizationDisplayName_s* zx_m20_Organization_POP_OrganizationDisplayName(struct zx_m20_Organization_s* x);
struct zx_m20_OrganizationURL_s* zx_m20_Organization_POP_OrganizationURL(struct zx_m20_Organization_s* x);
struct zx_m20_Extension_s* zx_m20_Organization_POP_Extension(struct zx_m20_Organization_s* x);

void zx_m20_Organization_PUSH_OrganizationName(struct zx_m20_Organization_s* x, struct zx_m20_OrganizationName_s* y);
void zx_m20_Organization_PUSH_OrganizationDisplayName(struct zx_m20_Organization_s* x, struct zx_m20_OrganizationDisplayName_s* y);
void zx_m20_Organization_PUSH_OrganizationURL(struct zx_m20_Organization_s* x, struct zx_m20_OrganizationURL_s* y);
void zx_m20_Organization_PUSH_Extension(struct zx_m20_Organization_s* x, struct zx_m20_Extension_s* y);


void zx_m20_Organization_PUT_OrganizationName(struct zx_m20_Organization_s* x, int n, struct zx_m20_OrganizationName_s* y);
void zx_m20_Organization_PUT_OrganizationDisplayName(struct zx_m20_Organization_s* x, int n, struct zx_m20_OrganizationDisplayName_s* y);
void zx_m20_Organization_PUT_OrganizationURL(struct zx_m20_Organization_s* x, int n, struct zx_m20_OrganizationURL_s* y);
void zx_m20_Organization_PUT_Extension(struct zx_m20_Organization_s* x, int n, struct zx_m20_Extension_s* y);

void zx_m20_Organization_ADD_OrganizationName(struct zx_m20_Organization_s* x, int n, struct zx_m20_OrganizationName_s* z);
void zx_m20_Organization_ADD_OrganizationDisplayName(struct zx_m20_Organization_s* x, int n, struct zx_m20_OrganizationDisplayName_s* z);
void zx_m20_Organization_ADD_OrganizationURL(struct zx_m20_Organization_s* x, int n, struct zx_m20_OrganizationURL_s* z);
void zx_m20_Organization_ADD_Extension(struct zx_m20_Organization_s* x, int n, struct zx_m20_Extension_s* z);

void zx_m20_Organization_DEL_OrganizationName(struct zx_m20_Organization_s* x, int n);
void zx_m20_Organization_DEL_OrganizationDisplayName(struct zx_m20_Organization_s* x, int n);
void zx_m20_Organization_DEL_OrganizationURL(struct zx_m20_Organization_s* x, int n);
void zx_m20_Organization_DEL_Extension(struct zx_m20_Organization_s* x, int n);

void zx_m20_Organization_REV_OrganizationName(struct zx_m20_Organization_s* x);
void zx_m20_Organization_REV_OrganizationDisplayName(struct zx_m20_Organization_s* x);
void zx_m20_Organization_REV_OrganizationURL(struct zx_m20_Organization_s* x);
void zx_m20_Organization_REV_Extension(struct zx_m20_Organization_s* x);

#endif
/* -------------------------- m20_OrganizationDisplayName -------------------------- */
/* refby( zx_m20_Organization_s ) */
#ifndef zx_m20_OrganizationDisplayName_EXT
#define zx_m20_OrganizationDisplayName_EXT
#endif

struct zx_m20_OrganizationDisplayName_s* zx_DEC_m20_OrganizationDisplayName(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_m20_OrganizationDisplayName_s* zx_NEW_m20_OrganizationDisplayName(struct zx_ctx* c);
void zx_FREE_m20_OrganizationDisplayName(struct zx_ctx* c, struct zx_m20_OrganizationDisplayName_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_m20_OrganizationDisplayName_s* zx_DEEP_CLONE_m20_OrganizationDisplayName(struct zx_ctx* c, struct zx_m20_OrganizationDisplayName_s* x, int dup_strs);
void zx_DUP_STRS_m20_OrganizationDisplayName(struct zx_ctx* c, struct zx_m20_OrganizationDisplayName_s* x);
int zx_WALK_SO_m20_OrganizationDisplayName(struct zx_ctx* c, struct zx_m20_OrganizationDisplayName_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_m20_OrganizationDisplayName(struct zx_ctx* c, struct zx_m20_OrganizationDisplayName_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_m20_OrganizationDisplayName(struct zx_ctx* c, struct zx_m20_OrganizationDisplayName_s* x);
int zx_LEN_WO_m20_OrganizationDisplayName(struct zx_ctx* c, struct zx_m20_OrganizationDisplayName_s* x);
char* zx_ENC_SO_m20_OrganizationDisplayName(struct zx_ctx* c, struct zx_m20_OrganizationDisplayName_s* x, char* p);
char* zx_ENC_WO_m20_OrganizationDisplayName(struct zx_ctx* c, struct zx_m20_OrganizationDisplayName_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_m20_OrganizationDisplayName(struct zx_ctx* c, struct zx_m20_OrganizationDisplayName_s* x);
struct zx_str* zx_EASY_ENC_WO_m20_OrganizationDisplayName(struct zx_ctx* c, struct zx_m20_OrganizationDisplayName_s* x);

struct zx_m20_OrganizationDisplayName_s {
  ZX_ELEM_EXT
  zx_m20_OrganizationDisplayName_EXT
  struct zx_str* lang;	/* {1,1} attribute xs:string */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_m20_OrganizationDisplayName_GET_lang(struct zx_m20_OrganizationDisplayName_s* x);





void zx_m20_OrganizationDisplayName_PUT_lang(struct zx_m20_OrganizationDisplayName_s* x, struct zx_str* y);





#endif
/* -------------------------- m20_OrganizationName -------------------------- */
/* refby( zx_m20_Organization_s ) */
#ifndef zx_m20_OrganizationName_EXT
#define zx_m20_OrganizationName_EXT
#endif

struct zx_m20_OrganizationName_s* zx_DEC_m20_OrganizationName(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_m20_OrganizationName_s* zx_NEW_m20_OrganizationName(struct zx_ctx* c);
void zx_FREE_m20_OrganizationName(struct zx_ctx* c, struct zx_m20_OrganizationName_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_m20_OrganizationName_s* zx_DEEP_CLONE_m20_OrganizationName(struct zx_ctx* c, struct zx_m20_OrganizationName_s* x, int dup_strs);
void zx_DUP_STRS_m20_OrganizationName(struct zx_ctx* c, struct zx_m20_OrganizationName_s* x);
int zx_WALK_SO_m20_OrganizationName(struct zx_ctx* c, struct zx_m20_OrganizationName_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_m20_OrganizationName(struct zx_ctx* c, struct zx_m20_OrganizationName_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_m20_OrganizationName(struct zx_ctx* c, struct zx_m20_OrganizationName_s* x);
int zx_LEN_WO_m20_OrganizationName(struct zx_ctx* c, struct zx_m20_OrganizationName_s* x);
char* zx_ENC_SO_m20_OrganizationName(struct zx_ctx* c, struct zx_m20_OrganizationName_s* x, char* p);
char* zx_ENC_WO_m20_OrganizationName(struct zx_ctx* c, struct zx_m20_OrganizationName_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_m20_OrganizationName(struct zx_ctx* c, struct zx_m20_OrganizationName_s* x);
struct zx_str* zx_EASY_ENC_WO_m20_OrganizationName(struct zx_ctx* c, struct zx_m20_OrganizationName_s* x);

struct zx_m20_OrganizationName_s {
  ZX_ELEM_EXT
  zx_m20_OrganizationName_EXT
  struct zx_str* lang;	/* {1,1} attribute xs:string */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_m20_OrganizationName_GET_lang(struct zx_m20_OrganizationName_s* x);





void zx_m20_OrganizationName_PUT_lang(struct zx_m20_OrganizationName_s* x, struct zx_str* y);





#endif
/* -------------------------- m20_OrganizationURL -------------------------- */
/* refby( zx_m20_Organization_s ) */
#ifndef zx_m20_OrganizationURL_EXT
#define zx_m20_OrganizationURL_EXT
#endif

struct zx_m20_OrganizationURL_s* zx_DEC_m20_OrganizationURL(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_m20_OrganizationURL_s* zx_NEW_m20_OrganizationURL(struct zx_ctx* c);
void zx_FREE_m20_OrganizationURL(struct zx_ctx* c, struct zx_m20_OrganizationURL_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_m20_OrganizationURL_s* zx_DEEP_CLONE_m20_OrganizationURL(struct zx_ctx* c, struct zx_m20_OrganizationURL_s* x, int dup_strs);
void zx_DUP_STRS_m20_OrganizationURL(struct zx_ctx* c, struct zx_m20_OrganizationURL_s* x);
int zx_WALK_SO_m20_OrganizationURL(struct zx_ctx* c, struct zx_m20_OrganizationURL_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_m20_OrganizationURL(struct zx_ctx* c, struct zx_m20_OrganizationURL_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_m20_OrganizationURL(struct zx_ctx* c, struct zx_m20_OrganizationURL_s* x);
int zx_LEN_WO_m20_OrganizationURL(struct zx_ctx* c, struct zx_m20_OrganizationURL_s* x);
char* zx_ENC_SO_m20_OrganizationURL(struct zx_ctx* c, struct zx_m20_OrganizationURL_s* x, char* p);
char* zx_ENC_WO_m20_OrganizationURL(struct zx_ctx* c, struct zx_m20_OrganizationURL_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_m20_OrganizationURL(struct zx_ctx* c, struct zx_m20_OrganizationURL_s* x);
struct zx_str* zx_EASY_ENC_WO_m20_OrganizationURL(struct zx_ctx* c, struct zx_m20_OrganizationURL_s* x);

struct zx_m20_OrganizationURL_s {
  ZX_ELEM_EXT
  zx_m20_OrganizationURL_EXT
  struct zx_str* lang;	/* {1,1} attribute xs:string */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_m20_OrganizationURL_GET_lang(struct zx_m20_OrganizationURL_s* x);





void zx_m20_OrganizationURL_PUT_lang(struct zx_m20_OrganizationURL_s* x, struct zx_str* y);





#endif
/* -------------------------- m20_SPDescriptor -------------------------- */
/* refby( zx_m20_EntityDescriptor_s ) */
#ifndef zx_m20_SPDescriptor_EXT
#define zx_m20_SPDescriptor_EXT
#endif

struct zx_m20_SPDescriptor_s* zx_DEC_m20_SPDescriptor(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_m20_SPDescriptor_s* zx_NEW_m20_SPDescriptor(struct zx_ctx* c);
void zx_FREE_m20_SPDescriptor(struct zx_ctx* c, struct zx_m20_SPDescriptor_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_m20_SPDescriptor_s* zx_DEEP_CLONE_m20_SPDescriptor(struct zx_ctx* c, struct zx_m20_SPDescriptor_s* x, int dup_strs);
void zx_DUP_STRS_m20_SPDescriptor(struct zx_ctx* c, struct zx_m20_SPDescriptor_s* x);
int zx_WALK_SO_m20_SPDescriptor(struct zx_ctx* c, struct zx_m20_SPDescriptor_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_m20_SPDescriptor(struct zx_ctx* c, struct zx_m20_SPDescriptor_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_m20_SPDescriptor(struct zx_ctx* c, struct zx_m20_SPDescriptor_s* x);
int zx_LEN_WO_m20_SPDescriptor(struct zx_ctx* c, struct zx_m20_SPDescriptor_s* x);
char* zx_ENC_SO_m20_SPDescriptor(struct zx_ctx* c, struct zx_m20_SPDescriptor_s* x, char* p);
char* zx_ENC_WO_m20_SPDescriptor(struct zx_ctx* c, struct zx_m20_SPDescriptor_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_m20_SPDescriptor(struct zx_ctx* c, struct zx_m20_SPDescriptor_s* x);
struct zx_str* zx_EASY_ENC_WO_m20_SPDescriptor(struct zx_ctx* c, struct zx_m20_SPDescriptor_s* x);

struct zx_m20_SPDescriptor_s {
  ZX_ELEM_EXT
  zx_m20_SPDescriptor_EXT
  struct zx_m20_KeyDescriptor_s* KeyDescriptor;	/* {0,-1} nada */
  struct zx_elem_s* SoapEndpoint;	/* {0,1} xs:anyURI */
  struct zx_elem_s* SingleLogoutServiceURL;	/* {0,1} xs:anyURI */
  struct zx_elem_s* SingleLogoutServiceReturnURL;	/* {0,1} xs:anyURI */
  struct zx_elem_s* FederationTerminationServiceURL;	/* {0,1} xs:anyURI */
  struct zx_elem_s* FederationTerminationServiceReturnURL;	/* {0,1} xs:anyURI */
  struct zx_elem_s* FederationTerminationNotificationProtocolProfile;	/* {0,-1} xs:anyURI */
  struct zx_elem_s* SingleLogoutProtocolProfile;	/* {0,-1} xs:anyURI */
  struct zx_elem_s* RegisterNameIdentifierProtocolProfile;	/* {0,-1} xs:anyURI */
  struct zx_elem_s* RegisterNameIdentifierServiceURL;	/* {0,1} xs:anyURI */
  struct zx_elem_s* RegisterNameIdentifierServiceReturnURL;	/* {0,1} xs:anyURI */
  struct zx_elem_s* NameIdentifierMappingProtocolProfile;	/* {0,-1} xs:anyURI */
  struct zx_elem_s* NameIdentifierMappingEncryptionProfile;	/* {0,-1} xs:anyURI */
  struct zx_m20_Organization_s* Organization;	/* {0,1}  */
  struct zx_m20_ContactPerson_s* ContactPerson;	/* {0,-1}  */
  struct zx_m20_AdditionalMetaLocation_s* AdditionalMetaLocation;	/* {0,-1}  */
  struct zx_m20_Extension_s* Extension;	/* {0,1}  */
  struct zx_ds_Signature_s* Signature;	/* {0,1} nada */
  struct zx_m20_AssertionConsumerServiceURL_s* AssertionConsumerServiceURL;	/* {1,-1}  */
  struct zx_elem_s* AuthnRequestsSigned;	/* {1,1} xs:boolean */
  struct zx_str* protocolSupportEnumeration;	/* {1,1} attribute xs:string */
  struct zx_str* id;	/* {0,1} attribute xs:ID */
  struct zx_str* validUntil;	/* {0,1} attribute xs:dateTime */
  struct zx_str* cacheDuration;	/* {0,1} attribute xs:duration */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_m20_SPDescriptor_GET_protocolSupportEnumeration(struct zx_m20_SPDescriptor_s* x);
struct zx_str* zx_m20_SPDescriptor_GET_id(struct zx_m20_SPDescriptor_s* x);
struct zx_str* zx_m20_SPDescriptor_GET_validUntil(struct zx_m20_SPDescriptor_s* x);
struct zx_str* zx_m20_SPDescriptor_GET_cacheDuration(struct zx_m20_SPDescriptor_s* x);

struct zx_m20_KeyDescriptor_s* zx_m20_SPDescriptor_GET_KeyDescriptor(struct zx_m20_SPDescriptor_s* x, int n);
struct zx_elem_s* zx_m20_SPDescriptor_GET_SoapEndpoint(struct zx_m20_SPDescriptor_s* x, int n);
struct zx_elem_s* zx_m20_SPDescriptor_GET_SingleLogoutServiceURL(struct zx_m20_SPDescriptor_s* x, int n);
struct zx_elem_s* zx_m20_SPDescriptor_GET_SingleLogoutServiceReturnURL(struct zx_m20_SPDescriptor_s* x, int n);
struct zx_elem_s* zx_m20_SPDescriptor_GET_FederationTerminationServiceURL(struct zx_m20_SPDescriptor_s* x, int n);
struct zx_elem_s* zx_m20_SPDescriptor_GET_FederationTerminationServiceReturnURL(struct zx_m20_SPDescriptor_s* x, int n);
struct zx_elem_s* zx_m20_SPDescriptor_GET_FederationTerminationNotificationProtocolProfile(struct zx_m20_SPDescriptor_s* x, int n);
struct zx_elem_s* zx_m20_SPDescriptor_GET_SingleLogoutProtocolProfile(struct zx_m20_SPDescriptor_s* x, int n);
struct zx_elem_s* zx_m20_SPDescriptor_GET_RegisterNameIdentifierProtocolProfile(struct zx_m20_SPDescriptor_s* x, int n);
struct zx_elem_s* zx_m20_SPDescriptor_GET_RegisterNameIdentifierServiceURL(struct zx_m20_SPDescriptor_s* x, int n);
struct zx_elem_s* zx_m20_SPDescriptor_GET_RegisterNameIdentifierServiceReturnURL(struct zx_m20_SPDescriptor_s* x, int n);
struct zx_elem_s* zx_m20_SPDescriptor_GET_NameIdentifierMappingProtocolProfile(struct zx_m20_SPDescriptor_s* x, int n);
struct zx_elem_s* zx_m20_SPDescriptor_GET_NameIdentifierMappingEncryptionProfile(struct zx_m20_SPDescriptor_s* x, int n);
struct zx_m20_Organization_s* zx_m20_SPDescriptor_GET_Organization(struct zx_m20_SPDescriptor_s* x, int n);
struct zx_m20_ContactPerson_s* zx_m20_SPDescriptor_GET_ContactPerson(struct zx_m20_SPDescriptor_s* x, int n);
struct zx_m20_AdditionalMetaLocation_s* zx_m20_SPDescriptor_GET_AdditionalMetaLocation(struct zx_m20_SPDescriptor_s* x, int n);
struct zx_m20_Extension_s* zx_m20_SPDescriptor_GET_Extension(struct zx_m20_SPDescriptor_s* x, int n);
struct zx_ds_Signature_s* zx_m20_SPDescriptor_GET_Signature(struct zx_m20_SPDescriptor_s* x, int n);
struct zx_m20_AssertionConsumerServiceURL_s* zx_m20_SPDescriptor_GET_AssertionConsumerServiceURL(struct zx_m20_SPDescriptor_s* x, int n);
struct zx_elem_s* zx_m20_SPDescriptor_GET_AuthnRequestsSigned(struct zx_m20_SPDescriptor_s* x, int n);

int zx_m20_SPDescriptor_NUM_KeyDescriptor(struct zx_m20_SPDescriptor_s* x);
int zx_m20_SPDescriptor_NUM_SoapEndpoint(struct zx_m20_SPDescriptor_s* x);
int zx_m20_SPDescriptor_NUM_SingleLogoutServiceURL(struct zx_m20_SPDescriptor_s* x);
int zx_m20_SPDescriptor_NUM_SingleLogoutServiceReturnURL(struct zx_m20_SPDescriptor_s* x);
int zx_m20_SPDescriptor_NUM_FederationTerminationServiceURL(struct zx_m20_SPDescriptor_s* x);
int zx_m20_SPDescriptor_NUM_FederationTerminationServiceReturnURL(struct zx_m20_SPDescriptor_s* x);
int zx_m20_SPDescriptor_NUM_FederationTerminationNotificationProtocolProfile(struct zx_m20_SPDescriptor_s* x);
int zx_m20_SPDescriptor_NUM_SingleLogoutProtocolProfile(struct zx_m20_SPDescriptor_s* x);
int zx_m20_SPDescriptor_NUM_RegisterNameIdentifierProtocolProfile(struct zx_m20_SPDescriptor_s* x);
int zx_m20_SPDescriptor_NUM_RegisterNameIdentifierServiceURL(struct zx_m20_SPDescriptor_s* x);
int zx_m20_SPDescriptor_NUM_RegisterNameIdentifierServiceReturnURL(struct zx_m20_SPDescriptor_s* x);
int zx_m20_SPDescriptor_NUM_NameIdentifierMappingProtocolProfile(struct zx_m20_SPDescriptor_s* x);
int zx_m20_SPDescriptor_NUM_NameIdentifierMappingEncryptionProfile(struct zx_m20_SPDescriptor_s* x);
int zx_m20_SPDescriptor_NUM_Organization(struct zx_m20_SPDescriptor_s* x);
int zx_m20_SPDescriptor_NUM_ContactPerson(struct zx_m20_SPDescriptor_s* x);
int zx_m20_SPDescriptor_NUM_AdditionalMetaLocation(struct zx_m20_SPDescriptor_s* x);
int zx_m20_SPDescriptor_NUM_Extension(struct zx_m20_SPDescriptor_s* x);
int zx_m20_SPDescriptor_NUM_Signature(struct zx_m20_SPDescriptor_s* x);
int zx_m20_SPDescriptor_NUM_AssertionConsumerServiceURL(struct zx_m20_SPDescriptor_s* x);
int zx_m20_SPDescriptor_NUM_AuthnRequestsSigned(struct zx_m20_SPDescriptor_s* x);

struct zx_m20_KeyDescriptor_s* zx_m20_SPDescriptor_POP_KeyDescriptor(struct zx_m20_SPDescriptor_s* x);
struct zx_elem_s* zx_m20_SPDescriptor_POP_SoapEndpoint(struct zx_m20_SPDescriptor_s* x);
struct zx_elem_s* zx_m20_SPDescriptor_POP_SingleLogoutServiceURL(struct zx_m20_SPDescriptor_s* x);
struct zx_elem_s* zx_m20_SPDescriptor_POP_SingleLogoutServiceReturnURL(struct zx_m20_SPDescriptor_s* x);
struct zx_elem_s* zx_m20_SPDescriptor_POP_FederationTerminationServiceURL(struct zx_m20_SPDescriptor_s* x);
struct zx_elem_s* zx_m20_SPDescriptor_POP_FederationTerminationServiceReturnURL(struct zx_m20_SPDescriptor_s* x);
struct zx_elem_s* zx_m20_SPDescriptor_POP_FederationTerminationNotificationProtocolProfile(struct zx_m20_SPDescriptor_s* x);
struct zx_elem_s* zx_m20_SPDescriptor_POP_SingleLogoutProtocolProfile(struct zx_m20_SPDescriptor_s* x);
struct zx_elem_s* zx_m20_SPDescriptor_POP_RegisterNameIdentifierProtocolProfile(struct zx_m20_SPDescriptor_s* x);
struct zx_elem_s* zx_m20_SPDescriptor_POP_RegisterNameIdentifierServiceURL(struct zx_m20_SPDescriptor_s* x);
struct zx_elem_s* zx_m20_SPDescriptor_POP_RegisterNameIdentifierServiceReturnURL(struct zx_m20_SPDescriptor_s* x);
struct zx_elem_s* zx_m20_SPDescriptor_POP_NameIdentifierMappingProtocolProfile(struct zx_m20_SPDescriptor_s* x);
struct zx_elem_s* zx_m20_SPDescriptor_POP_NameIdentifierMappingEncryptionProfile(struct zx_m20_SPDescriptor_s* x);
struct zx_m20_Organization_s* zx_m20_SPDescriptor_POP_Organization(struct zx_m20_SPDescriptor_s* x);
struct zx_m20_ContactPerson_s* zx_m20_SPDescriptor_POP_ContactPerson(struct zx_m20_SPDescriptor_s* x);
struct zx_m20_AdditionalMetaLocation_s* zx_m20_SPDescriptor_POP_AdditionalMetaLocation(struct zx_m20_SPDescriptor_s* x);
struct zx_m20_Extension_s* zx_m20_SPDescriptor_POP_Extension(struct zx_m20_SPDescriptor_s* x);
struct zx_ds_Signature_s* zx_m20_SPDescriptor_POP_Signature(struct zx_m20_SPDescriptor_s* x);
struct zx_m20_AssertionConsumerServiceURL_s* zx_m20_SPDescriptor_POP_AssertionConsumerServiceURL(struct zx_m20_SPDescriptor_s* x);
struct zx_elem_s* zx_m20_SPDescriptor_POP_AuthnRequestsSigned(struct zx_m20_SPDescriptor_s* x);

void zx_m20_SPDescriptor_PUSH_KeyDescriptor(struct zx_m20_SPDescriptor_s* x, struct zx_m20_KeyDescriptor_s* y);
void zx_m20_SPDescriptor_PUSH_SoapEndpoint(struct zx_m20_SPDescriptor_s* x, struct zx_elem_s* y);
void zx_m20_SPDescriptor_PUSH_SingleLogoutServiceURL(struct zx_m20_SPDescriptor_s* x, struct zx_elem_s* y);
void zx_m20_SPDescriptor_PUSH_SingleLogoutServiceReturnURL(struct zx_m20_SPDescriptor_s* x, struct zx_elem_s* y);
void zx_m20_SPDescriptor_PUSH_FederationTerminationServiceURL(struct zx_m20_SPDescriptor_s* x, struct zx_elem_s* y);
void zx_m20_SPDescriptor_PUSH_FederationTerminationServiceReturnURL(struct zx_m20_SPDescriptor_s* x, struct zx_elem_s* y);
void zx_m20_SPDescriptor_PUSH_FederationTerminationNotificationProtocolProfile(struct zx_m20_SPDescriptor_s* x, struct zx_elem_s* y);
void zx_m20_SPDescriptor_PUSH_SingleLogoutProtocolProfile(struct zx_m20_SPDescriptor_s* x, struct zx_elem_s* y);
void zx_m20_SPDescriptor_PUSH_RegisterNameIdentifierProtocolProfile(struct zx_m20_SPDescriptor_s* x, struct zx_elem_s* y);
void zx_m20_SPDescriptor_PUSH_RegisterNameIdentifierServiceURL(struct zx_m20_SPDescriptor_s* x, struct zx_elem_s* y);
void zx_m20_SPDescriptor_PUSH_RegisterNameIdentifierServiceReturnURL(struct zx_m20_SPDescriptor_s* x, struct zx_elem_s* y);
void zx_m20_SPDescriptor_PUSH_NameIdentifierMappingProtocolProfile(struct zx_m20_SPDescriptor_s* x, struct zx_elem_s* y);
void zx_m20_SPDescriptor_PUSH_NameIdentifierMappingEncryptionProfile(struct zx_m20_SPDescriptor_s* x, struct zx_elem_s* y);
void zx_m20_SPDescriptor_PUSH_Organization(struct zx_m20_SPDescriptor_s* x, struct zx_m20_Organization_s* y);
void zx_m20_SPDescriptor_PUSH_ContactPerson(struct zx_m20_SPDescriptor_s* x, struct zx_m20_ContactPerson_s* y);
void zx_m20_SPDescriptor_PUSH_AdditionalMetaLocation(struct zx_m20_SPDescriptor_s* x, struct zx_m20_AdditionalMetaLocation_s* y);
void zx_m20_SPDescriptor_PUSH_Extension(struct zx_m20_SPDescriptor_s* x, struct zx_m20_Extension_s* y);
void zx_m20_SPDescriptor_PUSH_Signature(struct zx_m20_SPDescriptor_s* x, struct zx_ds_Signature_s* y);
void zx_m20_SPDescriptor_PUSH_AssertionConsumerServiceURL(struct zx_m20_SPDescriptor_s* x, struct zx_m20_AssertionConsumerServiceURL_s* y);
void zx_m20_SPDescriptor_PUSH_AuthnRequestsSigned(struct zx_m20_SPDescriptor_s* x, struct zx_elem_s* y);

void zx_m20_SPDescriptor_PUT_protocolSupportEnumeration(struct zx_m20_SPDescriptor_s* x, struct zx_str* y);
void zx_m20_SPDescriptor_PUT_id(struct zx_m20_SPDescriptor_s* x, struct zx_str* y);
void zx_m20_SPDescriptor_PUT_validUntil(struct zx_m20_SPDescriptor_s* x, struct zx_str* y);
void zx_m20_SPDescriptor_PUT_cacheDuration(struct zx_m20_SPDescriptor_s* x, struct zx_str* y);

void zx_m20_SPDescriptor_PUT_KeyDescriptor(struct zx_m20_SPDescriptor_s* x, int n, struct zx_m20_KeyDescriptor_s* y);
void zx_m20_SPDescriptor_PUT_SoapEndpoint(struct zx_m20_SPDescriptor_s* x, int n, struct zx_elem_s* y);
void zx_m20_SPDescriptor_PUT_SingleLogoutServiceURL(struct zx_m20_SPDescriptor_s* x, int n, struct zx_elem_s* y);
void zx_m20_SPDescriptor_PUT_SingleLogoutServiceReturnURL(struct zx_m20_SPDescriptor_s* x, int n, struct zx_elem_s* y);
void zx_m20_SPDescriptor_PUT_FederationTerminationServiceURL(struct zx_m20_SPDescriptor_s* x, int n, struct zx_elem_s* y);
void zx_m20_SPDescriptor_PUT_FederationTerminationServiceReturnURL(struct zx_m20_SPDescriptor_s* x, int n, struct zx_elem_s* y);
void zx_m20_SPDescriptor_PUT_FederationTerminationNotificationProtocolProfile(struct zx_m20_SPDescriptor_s* x, int n, struct zx_elem_s* y);
void zx_m20_SPDescriptor_PUT_SingleLogoutProtocolProfile(struct zx_m20_SPDescriptor_s* x, int n, struct zx_elem_s* y);
void zx_m20_SPDescriptor_PUT_RegisterNameIdentifierProtocolProfile(struct zx_m20_SPDescriptor_s* x, int n, struct zx_elem_s* y);
void zx_m20_SPDescriptor_PUT_RegisterNameIdentifierServiceURL(struct zx_m20_SPDescriptor_s* x, int n, struct zx_elem_s* y);
void zx_m20_SPDescriptor_PUT_RegisterNameIdentifierServiceReturnURL(struct zx_m20_SPDescriptor_s* x, int n, struct zx_elem_s* y);
void zx_m20_SPDescriptor_PUT_NameIdentifierMappingProtocolProfile(struct zx_m20_SPDescriptor_s* x, int n, struct zx_elem_s* y);
void zx_m20_SPDescriptor_PUT_NameIdentifierMappingEncryptionProfile(struct zx_m20_SPDescriptor_s* x, int n, struct zx_elem_s* y);
void zx_m20_SPDescriptor_PUT_Organization(struct zx_m20_SPDescriptor_s* x, int n, struct zx_m20_Organization_s* y);
void zx_m20_SPDescriptor_PUT_ContactPerson(struct zx_m20_SPDescriptor_s* x, int n, struct zx_m20_ContactPerson_s* y);
void zx_m20_SPDescriptor_PUT_AdditionalMetaLocation(struct zx_m20_SPDescriptor_s* x, int n, struct zx_m20_AdditionalMetaLocation_s* y);
void zx_m20_SPDescriptor_PUT_Extension(struct zx_m20_SPDescriptor_s* x, int n, struct zx_m20_Extension_s* y);
void zx_m20_SPDescriptor_PUT_Signature(struct zx_m20_SPDescriptor_s* x, int n, struct zx_ds_Signature_s* y);
void zx_m20_SPDescriptor_PUT_AssertionConsumerServiceURL(struct zx_m20_SPDescriptor_s* x, int n, struct zx_m20_AssertionConsumerServiceURL_s* y);
void zx_m20_SPDescriptor_PUT_AuthnRequestsSigned(struct zx_m20_SPDescriptor_s* x, int n, struct zx_elem_s* y);

void zx_m20_SPDescriptor_ADD_KeyDescriptor(struct zx_m20_SPDescriptor_s* x, int n, struct zx_m20_KeyDescriptor_s* z);
void zx_m20_SPDescriptor_ADD_SoapEndpoint(struct zx_m20_SPDescriptor_s* x, int n, struct zx_elem_s* z);
void zx_m20_SPDescriptor_ADD_SingleLogoutServiceURL(struct zx_m20_SPDescriptor_s* x, int n, struct zx_elem_s* z);
void zx_m20_SPDescriptor_ADD_SingleLogoutServiceReturnURL(struct zx_m20_SPDescriptor_s* x, int n, struct zx_elem_s* z);
void zx_m20_SPDescriptor_ADD_FederationTerminationServiceURL(struct zx_m20_SPDescriptor_s* x, int n, struct zx_elem_s* z);
void zx_m20_SPDescriptor_ADD_FederationTerminationServiceReturnURL(struct zx_m20_SPDescriptor_s* x, int n, struct zx_elem_s* z);
void zx_m20_SPDescriptor_ADD_FederationTerminationNotificationProtocolProfile(struct zx_m20_SPDescriptor_s* x, int n, struct zx_elem_s* z);
void zx_m20_SPDescriptor_ADD_SingleLogoutProtocolProfile(struct zx_m20_SPDescriptor_s* x, int n, struct zx_elem_s* z);
void zx_m20_SPDescriptor_ADD_RegisterNameIdentifierProtocolProfile(struct zx_m20_SPDescriptor_s* x, int n, struct zx_elem_s* z);
void zx_m20_SPDescriptor_ADD_RegisterNameIdentifierServiceURL(struct zx_m20_SPDescriptor_s* x, int n, struct zx_elem_s* z);
void zx_m20_SPDescriptor_ADD_RegisterNameIdentifierServiceReturnURL(struct zx_m20_SPDescriptor_s* x, int n, struct zx_elem_s* z);
void zx_m20_SPDescriptor_ADD_NameIdentifierMappingProtocolProfile(struct zx_m20_SPDescriptor_s* x, int n, struct zx_elem_s* z);
void zx_m20_SPDescriptor_ADD_NameIdentifierMappingEncryptionProfile(struct zx_m20_SPDescriptor_s* x, int n, struct zx_elem_s* z);
void zx_m20_SPDescriptor_ADD_Organization(struct zx_m20_SPDescriptor_s* x, int n, struct zx_m20_Organization_s* z);
void zx_m20_SPDescriptor_ADD_ContactPerson(struct zx_m20_SPDescriptor_s* x, int n, struct zx_m20_ContactPerson_s* z);
void zx_m20_SPDescriptor_ADD_AdditionalMetaLocation(struct zx_m20_SPDescriptor_s* x, int n, struct zx_m20_AdditionalMetaLocation_s* z);
void zx_m20_SPDescriptor_ADD_Extension(struct zx_m20_SPDescriptor_s* x, int n, struct zx_m20_Extension_s* z);
void zx_m20_SPDescriptor_ADD_Signature(struct zx_m20_SPDescriptor_s* x, int n, struct zx_ds_Signature_s* z);
void zx_m20_SPDescriptor_ADD_AssertionConsumerServiceURL(struct zx_m20_SPDescriptor_s* x, int n, struct zx_m20_AssertionConsumerServiceURL_s* z);
void zx_m20_SPDescriptor_ADD_AuthnRequestsSigned(struct zx_m20_SPDescriptor_s* x, int n, struct zx_elem_s* z);

void zx_m20_SPDescriptor_DEL_KeyDescriptor(struct zx_m20_SPDescriptor_s* x, int n);
void zx_m20_SPDescriptor_DEL_SoapEndpoint(struct zx_m20_SPDescriptor_s* x, int n);
void zx_m20_SPDescriptor_DEL_SingleLogoutServiceURL(struct zx_m20_SPDescriptor_s* x, int n);
void zx_m20_SPDescriptor_DEL_SingleLogoutServiceReturnURL(struct zx_m20_SPDescriptor_s* x, int n);
void zx_m20_SPDescriptor_DEL_FederationTerminationServiceURL(struct zx_m20_SPDescriptor_s* x, int n);
void zx_m20_SPDescriptor_DEL_FederationTerminationServiceReturnURL(struct zx_m20_SPDescriptor_s* x, int n);
void zx_m20_SPDescriptor_DEL_FederationTerminationNotificationProtocolProfile(struct zx_m20_SPDescriptor_s* x, int n);
void zx_m20_SPDescriptor_DEL_SingleLogoutProtocolProfile(struct zx_m20_SPDescriptor_s* x, int n);
void zx_m20_SPDescriptor_DEL_RegisterNameIdentifierProtocolProfile(struct zx_m20_SPDescriptor_s* x, int n);
void zx_m20_SPDescriptor_DEL_RegisterNameIdentifierServiceURL(struct zx_m20_SPDescriptor_s* x, int n);
void zx_m20_SPDescriptor_DEL_RegisterNameIdentifierServiceReturnURL(struct zx_m20_SPDescriptor_s* x, int n);
void zx_m20_SPDescriptor_DEL_NameIdentifierMappingProtocolProfile(struct zx_m20_SPDescriptor_s* x, int n);
void zx_m20_SPDescriptor_DEL_NameIdentifierMappingEncryptionProfile(struct zx_m20_SPDescriptor_s* x, int n);
void zx_m20_SPDescriptor_DEL_Organization(struct zx_m20_SPDescriptor_s* x, int n);
void zx_m20_SPDescriptor_DEL_ContactPerson(struct zx_m20_SPDescriptor_s* x, int n);
void zx_m20_SPDescriptor_DEL_AdditionalMetaLocation(struct zx_m20_SPDescriptor_s* x, int n);
void zx_m20_SPDescriptor_DEL_Extension(struct zx_m20_SPDescriptor_s* x, int n);
void zx_m20_SPDescriptor_DEL_Signature(struct zx_m20_SPDescriptor_s* x, int n);
void zx_m20_SPDescriptor_DEL_AssertionConsumerServiceURL(struct zx_m20_SPDescriptor_s* x, int n);
void zx_m20_SPDescriptor_DEL_AuthnRequestsSigned(struct zx_m20_SPDescriptor_s* x, int n);

void zx_m20_SPDescriptor_REV_KeyDescriptor(struct zx_m20_SPDescriptor_s* x);
void zx_m20_SPDescriptor_REV_SoapEndpoint(struct zx_m20_SPDescriptor_s* x);
void zx_m20_SPDescriptor_REV_SingleLogoutServiceURL(struct zx_m20_SPDescriptor_s* x);
void zx_m20_SPDescriptor_REV_SingleLogoutServiceReturnURL(struct zx_m20_SPDescriptor_s* x);
void zx_m20_SPDescriptor_REV_FederationTerminationServiceURL(struct zx_m20_SPDescriptor_s* x);
void zx_m20_SPDescriptor_REV_FederationTerminationServiceReturnURL(struct zx_m20_SPDescriptor_s* x);
void zx_m20_SPDescriptor_REV_FederationTerminationNotificationProtocolProfile(struct zx_m20_SPDescriptor_s* x);
void zx_m20_SPDescriptor_REV_SingleLogoutProtocolProfile(struct zx_m20_SPDescriptor_s* x);
void zx_m20_SPDescriptor_REV_RegisterNameIdentifierProtocolProfile(struct zx_m20_SPDescriptor_s* x);
void zx_m20_SPDescriptor_REV_RegisterNameIdentifierServiceURL(struct zx_m20_SPDescriptor_s* x);
void zx_m20_SPDescriptor_REV_RegisterNameIdentifierServiceReturnURL(struct zx_m20_SPDescriptor_s* x);
void zx_m20_SPDescriptor_REV_NameIdentifierMappingProtocolProfile(struct zx_m20_SPDescriptor_s* x);
void zx_m20_SPDescriptor_REV_NameIdentifierMappingEncryptionProfile(struct zx_m20_SPDescriptor_s* x);
void zx_m20_SPDescriptor_REV_Organization(struct zx_m20_SPDescriptor_s* x);
void zx_m20_SPDescriptor_REV_ContactPerson(struct zx_m20_SPDescriptor_s* x);
void zx_m20_SPDescriptor_REV_AdditionalMetaLocation(struct zx_m20_SPDescriptor_s* x);
void zx_m20_SPDescriptor_REV_Extension(struct zx_m20_SPDescriptor_s* x);
void zx_m20_SPDescriptor_REV_Signature(struct zx_m20_SPDescriptor_s* x);
void zx_m20_SPDescriptor_REV_AssertionConsumerServiceURL(struct zx_m20_SPDescriptor_s* x);
void zx_m20_SPDescriptor_REV_AuthnRequestsSigned(struct zx_m20_SPDescriptor_s* x);

#endif

#endif