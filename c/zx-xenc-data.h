/* c/zx-xenc-data.h - WARNING: This header was automatically generated. DO NOT EDIT!
 * $Id$ */
/* Datastructure design, topography, and layout
 * Copyright (c) 2006 Sampo Kellomaki (sampo@iki.fi),
 * All Rights Reserved. NO WARRANTY. See file COPYING for
 * terms and conditions of use. Element and attributes names as well
 * as some topography are derived from schema descriptions that were used as
 * input and may be subject to their own copright. */

#ifndef _c_zx_xenc_data_h
#define _c_zx_xenc_data_h

#include "zx.h"
#include "c/zx-const.h"
#include "c/zx-data.h"

#ifndef ZX_ELEM_EXT
#define ZX_ELEM_EXT  /* This extension point should be defined by who includes this file. */
#endif

/* -------------------------- xenc_AgreementMethod -------------------------- */
/* refby( ) */
#ifndef zx_xenc_AgreementMethod_EXT
#define zx_xenc_AgreementMethod_EXT
#endif

struct zx_xenc_AgreementMethod_s* zx_DEC_xenc_AgreementMethod(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_xenc_AgreementMethod_s* zx_NEW_xenc_AgreementMethod(struct zx_ctx* c);
void zx_FREE_xenc_AgreementMethod(struct zx_ctx* c, struct zx_xenc_AgreementMethod_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_xenc_AgreementMethod_s* zx_DEEP_CLONE_xenc_AgreementMethod(struct zx_ctx* c, struct zx_xenc_AgreementMethod_s* x, int dup_strs);
void zx_DUP_STRS_xenc_AgreementMethod(struct zx_ctx* c, struct zx_xenc_AgreementMethod_s* x);
int zx_WALK_SO_xenc_AgreementMethod(struct zx_ctx* c, struct zx_xenc_AgreementMethod_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_xenc_AgreementMethod(struct zx_ctx* c, struct zx_xenc_AgreementMethod_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_xenc_AgreementMethod(struct zx_ctx* c, struct zx_xenc_AgreementMethod_s* x);
int zx_LEN_WO_xenc_AgreementMethod(struct zx_ctx* c, struct zx_xenc_AgreementMethod_s* x);
char* zx_ENC_SO_xenc_AgreementMethod(struct zx_ctx* c, struct zx_xenc_AgreementMethod_s* x, char* p);
char* zx_ENC_WO_xenc_AgreementMethod(struct zx_ctx* c, struct zx_xenc_AgreementMethod_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_xenc_AgreementMethod(struct zx_ctx* c, struct zx_xenc_AgreementMethod_s* x);
struct zx_str* zx_EASY_ENC_WO_xenc_AgreementMethod(struct zx_ctx* c, struct zx_xenc_AgreementMethod_s* x);

struct zx_xenc_AgreementMethod_s {
  ZX_ELEM_EXT
  zx_xenc_AgreementMethod_EXT
  struct zx_elem_s* KA_Nonce;	/* {0,1} xs:base64Binary */
  struct zx_xenc_OriginatorKeyInfo_s* OriginatorKeyInfo;	/* {0,1}  */
  struct zx_xenc_RecipientKeyInfo_s* RecipientKeyInfo;	/* {0,1}  */
  struct zx_str* Algorithm;	/* {1,1} attribute xs:anyURI */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_xenc_AgreementMethod_GET_Algorithm(struct zx_xenc_AgreementMethod_s* x);

struct zx_elem_s* zx_xenc_AgreementMethod_GET_KA_Nonce(struct zx_xenc_AgreementMethod_s* x, int n);
struct zx_xenc_OriginatorKeyInfo_s* zx_xenc_AgreementMethod_GET_OriginatorKeyInfo(struct zx_xenc_AgreementMethod_s* x, int n);
struct zx_xenc_RecipientKeyInfo_s* zx_xenc_AgreementMethod_GET_RecipientKeyInfo(struct zx_xenc_AgreementMethod_s* x, int n);

int zx_xenc_AgreementMethod_NUM_KA_Nonce(struct zx_xenc_AgreementMethod_s* x);
int zx_xenc_AgreementMethod_NUM_OriginatorKeyInfo(struct zx_xenc_AgreementMethod_s* x);
int zx_xenc_AgreementMethod_NUM_RecipientKeyInfo(struct zx_xenc_AgreementMethod_s* x);

struct zx_elem_s* zx_xenc_AgreementMethod_POP_KA_Nonce(struct zx_xenc_AgreementMethod_s* x);
struct zx_xenc_OriginatorKeyInfo_s* zx_xenc_AgreementMethod_POP_OriginatorKeyInfo(struct zx_xenc_AgreementMethod_s* x);
struct zx_xenc_RecipientKeyInfo_s* zx_xenc_AgreementMethod_POP_RecipientKeyInfo(struct zx_xenc_AgreementMethod_s* x);

void zx_xenc_AgreementMethod_PUSH_KA_Nonce(struct zx_xenc_AgreementMethod_s* x, struct zx_elem_s* y);
void zx_xenc_AgreementMethod_PUSH_OriginatorKeyInfo(struct zx_xenc_AgreementMethod_s* x, struct zx_xenc_OriginatorKeyInfo_s* y);
void zx_xenc_AgreementMethod_PUSH_RecipientKeyInfo(struct zx_xenc_AgreementMethod_s* x, struct zx_xenc_RecipientKeyInfo_s* y);

void zx_xenc_AgreementMethod_PUT_Algorithm(struct zx_xenc_AgreementMethod_s* x, struct zx_str* y);

void zx_xenc_AgreementMethod_PUT_KA_Nonce(struct zx_xenc_AgreementMethod_s* x, int n, struct zx_elem_s* y);
void zx_xenc_AgreementMethod_PUT_OriginatorKeyInfo(struct zx_xenc_AgreementMethod_s* x, int n, struct zx_xenc_OriginatorKeyInfo_s* y);
void zx_xenc_AgreementMethod_PUT_RecipientKeyInfo(struct zx_xenc_AgreementMethod_s* x, int n, struct zx_xenc_RecipientKeyInfo_s* y);

void zx_xenc_AgreementMethod_ADD_KA_Nonce(struct zx_xenc_AgreementMethod_s* x, int n, struct zx_elem_s* z);
void zx_xenc_AgreementMethod_ADD_OriginatorKeyInfo(struct zx_xenc_AgreementMethod_s* x, int n, struct zx_xenc_OriginatorKeyInfo_s* z);
void zx_xenc_AgreementMethod_ADD_RecipientKeyInfo(struct zx_xenc_AgreementMethod_s* x, int n, struct zx_xenc_RecipientKeyInfo_s* z);

void zx_xenc_AgreementMethod_DEL_KA_Nonce(struct zx_xenc_AgreementMethod_s* x, int n);
void zx_xenc_AgreementMethod_DEL_OriginatorKeyInfo(struct zx_xenc_AgreementMethod_s* x, int n);
void zx_xenc_AgreementMethod_DEL_RecipientKeyInfo(struct zx_xenc_AgreementMethod_s* x, int n);

void zx_xenc_AgreementMethod_REV_KA_Nonce(struct zx_xenc_AgreementMethod_s* x);
void zx_xenc_AgreementMethod_REV_OriginatorKeyInfo(struct zx_xenc_AgreementMethod_s* x);
void zx_xenc_AgreementMethod_REV_RecipientKeyInfo(struct zx_xenc_AgreementMethod_s* x);

#endif
/* -------------------------- xenc_CipherData -------------------------- */
/* refby( zx_xenc_EncryptedData_s zx_xenc_EncryptedKey_s ) */
#ifndef zx_xenc_CipherData_EXT
#define zx_xenc_CipherData_EXT
#endif

struct zx_xenc_CipherData_s* zx_DEC_xenc_CipherData(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_xenc_CipherData_s* zx_NEW_xenc_CipherData(struct zx_ctx* c);
void zx_FREE_xenc_CipherData(struct zx_ctx* c, struct zx_xenc_CipherData_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_xenc_CipherData_s* zx_DEEP_CLONE_xenc_CipherData(struct zx_ctx* c, struct zx_xenc_CipherData_s* x, int dup_strs);
void zx_DUP_STRS_xenc_CipherData(struct zx_ctx* c, struct zx_xenc_CipherData_s* x);
int zx_WALK_SO_xenc_CipherData(struct zx_ctx* c, struct zx_xenc_CipherData_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_xenc_CipherData(struct zx_ctx* c, struct zx_xenc_CipherData_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_xenc_CipherData(struct zx_ctx* c, struct zx_xenc_CipherData_s* x);
int zx_LEN_WO_xenc_CipherData(struct zx_ctx* c, struct zx_xenc_CipherData_s* x);
char* zx_ENC_SO_xenc_CipherData(struct zx_ctx* c, struct zx_xenc_CipherData_s* x, char* p);
char* zx_ENC_WO_xenc_CipherData(struct zx_ctx* c, struct zx_xenc_CipherData_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_xenc_CipherData(struct zx_ctx* c, struct zx_xenc_CipherData_s* x);
struct zx_str* zx_EASY_ENC_WO_xenc_CipherData(struct zx_ctx* c, struct zx_xenc_CipherData_s* x);

struct zx_xenc_CipherData_s {
  ZX_ELEM_EXT
  zx_xenc_CipherData_EXT
  struct zx_elem_s* CipherValue;	/* {0,1} xs:base64Binary */
  struct zx_xenc_CipherReference_s* CipherReference;	/* {0,1} nada */
};

#ifdef ZX_ENA_GETPUT

struct zx_elem_s* zx_xenc_CipherData_GET_CipherValue(struct zx_xenc_CipherData_s* x, int n);
struct zx_xenc_CipherReference_s* zx_xenc_CipherData_GET_CipherReference(struct zx_xenc_CipherData_s* x, int n);

int zx_xenc_CipherData_NUM_CipherValue(struct zx_xenc_CipherData_s* x);
int zx_xenc_CipherData_NUM_CipherReference(struct zx_xenc_CipherData_s* x);

struct zx_elem_s* zx_xenc_CipherData_POP_CipherValue(struct zx_xenc_CipherData_s* x);
struct zx_xenc_CipherReference_s* zx_xenc_CipherData_POP_CipherReference(struct zx_xenc_CipherData_s* x);

void zx_xenc_CipherData_PUSH_CipherValue(struct zx_xenc_CipherData_s* x, struct zx_elem_s* y);
void zx_xenc_CipherData_PUSH_CipherReference(struct zx_xenc_CipherData_s* x, struct zx_xenc_CipherReference_s* y);


void zx_xenc_CipherData_PUT_CipherValue(struct zx_xenc_CipherData_s* x, int n, struct zx_elem_s* y);
void zx_xenc_CipherData_PUT_CipherReference(struct zx_xenc_CipherData_s* x, int n, struct zx_xenc_CipherReference_s* y);

void zx_xenc_CipherData_ADD_CipherValue(struct zx_xenc_CipherData_s* x, int n, struct zx_elem_s* z);
void zx_xenc_CipherData_ADD_CipherReference(struct zx_xenc_CipherData_s* x, int n, struct zx_xenc_CipherReference_s* z);

void zx_xenc_CipherData_DEL_CipherValue(struct zx_xenc_CipherData_s* x, int n);
void zx_xenc_CipherData_DEL_CipherReference(struct zx_xenc_CipherData_s* x, int n);

void zx_xenc_CipherData_REV_CipherValue(struct zx_xenc_CipherData_s* x);
void zx_xenc_CipherData_REV_CipherReference(struct zx_xenc_CipherData_s* x);

#endif
/* -------------------------- xenc_CipherReference -------------------------- */
/* refby( zx_xenc_CipherData_s ) */
#ifndef zx_xenc_CipherReference_EXT
#define zx_xenc_CipherReference_EXT
#endif

struct zx_xenc_CipherReference_s* zx_DEC_xenc_CipherReference(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_xenc_CipherReference_s* zx_NEW_xenc_CipherReference(struct zx_ctx* c);
void zx_FREE_xenc_CipherReference(struct zx_ctx* c, struct zx_xenc_CipherReference_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_xenc_CipherReference_s* zx_DEEP_CLONE_xenc_CipherReference(struct zx_ctx* c, struct zx_xenc_CipherReference_s* x, int dup_strs);
void zx_DUP_STRS_xenc_CipherReference(struct zx_ctx* c, struct zx_xenc_CipherReference_s* x);
int zx_WALK_SO_xenc_CipherReference(struct zx_ctx* c, struct zx_xenc_CipherReference_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_xenc_CipherReference(struct zx_ctx* c, struct zx_xenc_CipherReference_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_xenc_CipherReference(struct zx_ctx* c, struct zx_xenc_CipherReference_s* x);
int zx_LEN_WO_xenc_CipherReference(struct zx_ctx* c, struct zx_xenc_CipherReference_s* x);
char* zx_ENC_SO_xenc_CipherReference(struct zx_ctx* c, struct zx_xenc_CipherReference_s* x, char* p);
char* zx_ENC_WO_xenc_CipherReference(struct zx_ctx* c, struct zx_xenc_CipherReference_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_xenc_CipherReference(struct zx_ctx* c, struct zx_xenc_CipherReference_s* x);
struct zx_str* zx_EASY_ENC_WO_xenc_CipherReference(struct zx_ctx* c, struct zx_xenc_CipherReference_s* x);

struct zx_xenc_CipherReference_s {
  ZX_ELEM_EXT
  zx_xenc_CipherReference_EXT
  struct zx_xenc_Transforms_s* Transforms;	/* {0,1}  */
  struct zx_str* URI;	/* {1,1} attribute xs:anyURI */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_xenc_CipherReference_GET_URI(struct zx_xenc_CipherReference_s* x);

struct zx_xenc_Transforms_s* zx_xenc_CipherReference_GET_Transforms(struct zx_xenc_CipherReference_s* x, int n);

int zx_xenc_CipherReference_NUM_Transforms(struct zx_xenc_CipherReference_s* x);

struct zx_xenc_Transforms_s* zx_xenc_CipherReference_POP_Transforms(struct zx_xenc_CipherReference_s* x);

void zx_xenc_CipherReference_PUSH_Transforms(struct zx_xenc_CipherReference_s* x, struct zx_xenc_Transforms_s* y);

void zx_xenc_CipherReference_PUT_URI(struct zx_xenc_CipherReference_s* x, struct zx_str* y);

void zx_xenc_CipherReference_PUT_Transforms(struct zx_xenc_CipherReference_s* x, int n, struct zx_xenc_Transforms_s* y);

void zx_xenc_CipherReference_ADD_Transforms(struct zx_xenc_CipherReference_s* x, int n, struct zx_xenc_Transforms_s* z);

void zx_xenc_CipherReference_DEL_Transforms(struct zx_xenc_CipherReference_s* x, int n);

void zx_xenc_CipherReference_REV_Transforms(struct zx_xenc_CipherReference_s* x);

#endif
/* -------------------------- xenc_DataReference -------------------------- */
/* refby( zx_xenc_ReferenceList_s ) */
#ifndef zx_xenc_DataReference_EXT
#define zx_xenc_DataReference_EXT
#endif

struct zx_xenc_DataReference_s* zx_DEC_xenc_DataReference(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_xenc_DataReference_s* zx_NEW_xenc_DataReference(struct zx_ctx* c);
void zx_FREE_xenc_DataReference(struct zx_ctx* c, struct zx_xenc_DataReference_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_xenc_DataReference_s* zx_DEEP_CLONE_xenc_DataReference(struct zx_ctx* c, struct zx_xenc_DataReference_s* x, int dup_strs);
void zx_DUP_STRS_xenc_DataReference(struct zx_ctx* c, struct zx_xenc_DataReference_s* x);
int zx_WALK_SO_xenc_DataReference(struct zx_ctx* c, struct zx_xenc_DataReference_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_xenc_DataReference(struct zx_ctx* c, struct zx_xenc_DataReference_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_xenc_DataReference(struct zx_ctx* c, struct zx_xenc_DataReference_s* x);
int zx_LEN_WO_xenc_DataReference(struct zx_ctx* c, struct zx_xenc_DataReference_s* x);
char* zx_ENC_SO_xenc_DataReference(struct zx_ctx* c, struct zx_xenc_DataReference_s* x, char* p);
char* zx_ENC_WO_xenc_DataReference(struct zx_ctx* c, struct zx_xenc_DataReference_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_xenc_DataReference(struct zx_ctx* c, struct zx_xenc_DataReference_s* x);
struct zx_str* zx_EASY_ENC_WO_xenc_DataReference(struct zx_ctx* c, struct zx_xenc_DataReference_s* x);

struct zx_xenc_DataReference_s {
  ZX_ELEM_EXT
  zx_xenc_DataReference_EXT
  struct zx_str* URI;	/* {1,1} attribute xs:anyURI */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_xenc_DataReference_GET_URI(struct zx_xenc_DataReference_s* x);





void zx_xenc_DataReference_PUT_URI(struct zx_xenc_DataReference_s* x, struct zx_str* y);





#endif
/* -------------------------- xenc_EncryptedData -------------------------- */
/* refby( zx_gl_EncryptedResourceID_s zx_is12_EncryptedResourceID_s zx_di12_EncryptedResourceID_s zx_ff12_EncryptedNameIdentifier_s zx_sa_EncryptedID_s zx_sa_EncryptedAttribute_s zx_sp_NewEncryptedID_s zx_cb_EncryptedResourceID_s zx_sa_EncryptedAssertion_s ) */
#ifndef zx_xenc_EncryptedData_EXT
#define zx_xenc_EncryptedData_EXT
#endif

struct zx_xenc_EncryptedData_s* zx_DEC_xenc_EncryptedData(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_xenc_EncryptedData_s* zx_NEW_xenc_EncryptedData(struct zx_ctx* c);
void zx_FREE_xenc_EncryptedData(struct zx_ctx* c, struct zx_xenc_EncryptedData_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_xenc_EncryptedData_s* zx_DEEP_CLONE_xenc_EncryptedData(struct zx_ctx* c, struct zx_xenc_EncryptedData_s* x, int dup_strs);
void zx_DUP_STRS_xenc_EncryptedData(struct zx_ctx* c, struct zx_xenc_EncryptedData_s* x);
int zx_WALK_SO_xenc_EncryptedData(struct zx_ctx* c, struct zx_xenc_EncryptedData_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_xenc_EncryptedData(struct zx_ctx* c, struct zx_xenc_EncryptedData_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_xenc_EncryptedData(struct zx_ctx* c, struct zx_xenc_EncryptedData_s* x);
int zx_LEN_WO_xenc_EncryptedData(struct zx_ctx* c, struct zx_xenc_EncryptedData_s* x);
char* zx_ENC_SO_xenc_EncryptedData(struct zx_ctx* c, struct zx_xenc_EncryptedData_s* x, char* p);
char* zx_ENC_WO_xenc_EncryptedData(struct zx_ctx* c, struct zx_xenc_EncryptedData_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_xenc_EncryptedData(struct zx_ctx* c, struct zx_xenc_EncryptedData_s* x);
struct zx_str* zx_EASY_ENC_WO_xenc_EncryptedData(struct zx_ctx* c, struct zx_xenc_EncryptedData_s* x);

struct zx_xenc_EncryptedData_s {
  ZX_ELEM_EXT
  zx_xenc_EncryptedData_EXT
  struct zx_xenc_EncryptionMethod_s* EncryptionMethod;	/* {0,1}  */
  struct zx_ds_KeyInfo_s* KeyInfo;	/* {0,1} nada */
  struct zx_xenc_CipherData_s* CipherData;	/* {1,1} nada */
  struct zx_xenc_EncryptionProperties_s* EncryptionProperties;	/* {0,1} nada */
  struct zx_str* Encoding;	/* {0,1} attribute xs:anyURI */
  struct zx_str* Id;	/* {0,1} attribute xs:ID */
  struct zx_str* MimeType;	/* {0,1} attribute xs:string */
  struct zx_str* Type;	/* {0,1} attribute wst:BinarySecretTypeEnum */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_xenc_EncryptedData_GET_Encoding(struct zx_xenc_EncryptedData_s* x);
struct zx_str* zx_xenc_EncryptedData_GET_Id(struct zx_xenc_EncryptedData_s* x);
struct zx_str* zx_xenc_EncryptedData_GET_MimeType(struct zx_xenc_EncryptedData_s* x);
struct zx_str* zx_xenc_EncryptedData_GET_Type(struct zx_xenc_EncryptedData_s* x);

struct zx_xenc_EncryptionMethod_s* zx_xenc_EncryptedData_GET_EncryptionMethod(struct zx_xenc_EncryptedData_s* x, int n);
struct zx_ds_KeyInfo_s* zx_xenc_EncryptedData_GET_KeyInfo(struct zx_xenc_EncryptedData_s* x, int n);
struct zx_xenc_CipherData_s* zx_xenc_EncryptedData_GET_CipherData(struct zx_xenc_EncryptedData_s* x, int n);
struct zx_xenc_EncryptionProperties_s* zx_xenc_EncryptedData_GET_EncryptionProperties(struct zx_xenc_EncryptedData_s* x, int n);

int zx_xenc_EncryptedData_NUM_EncryptionMethod(struct zx_xenc_EncryptedData_s* x);
int zx_xenc_EncryptedData_NUM_KeyInfo(struct zx_xenc_EncryptedData_s* x);
int zx_xenc_EncryptedData_NUM_CipherData(struct zx_xenc_EncryptedData_s* x);
int zx_xenc_EncryptedData_NUM_EncryptionProperties(struct zx_xenc_EncryptedData_s* x);

struct zx_xenc_EncryptionMethod_s* zx_xenc_EncryptedData_POP_EncryptionMethod(struct zx_xenc_EncryptedData_s* x);
struct zx_ds_KeyInfo_s* zx_xenc_EncryptedData_POP_KeyInfo(struct zx_xenc_EncryptedData_s* x);
struct zx_xenc_CipherData_s* zx_xenc_EncryptedData_POP_CipherData(struct zx_xenc_EncryptedData_s* x);
struct zx_xenc_EncryptionProperties_s* zx_xenc_EncryptedData_POP_EncryptionProperties(struct zx_xenc_EncryptedData_s* x);

void zx_xenc_EncryptedData_PUSH_EncryptionMethod(struct zx_xenc_EncryptedData_s* x, struct zx_xenc_EncryptionMethod_s* y);
void zx_xenc_EncryptedData_PUSH_KeyInfo(struct zx_xenc_EncryptedData_s* x, struct zx_ds_KeyInfo_s* y);
void zx_xenc_EncryptedData_PUSH_CipherData(struct zx_xenc_EncryptedData_s* x, struct zx_xenc_CipherData_s* y);
void zx_xenc_EncryptedData_PUSH_EncryptionProperties(struct zx_xenc_EncryptedData_s* x, struct zx_xenc_EncryptionProperties_s* y);

void zx_xenc_EncryptedData_PUT_Encoding(struct zx_xenc_EncryptedData_s* x, struct zx_str* y);
void zx_xenc_EncryptedData_PUT_Id(struct zx_xenc_EncryptedData_s* x, struct zx_str* y);
void zx_xenc_EncryptedData_PUT_MimeType(struct zx_xenc_EncryptedData_s* x, struct zx_str* y);
void zx_xenc_EncryptedData_PUT_Type(struct zx_xenc_EncryptedData_s* x, struct zx_str* y);

void zx_xenc_EncryptedData_PUT_EncryptionMethod(struct zx_xenc_EncryptedData_s* x, int n, struct zx_xenc_EncryptionMethod_s* y);
void zx_xenc_EncryptedData_PUT_KeyInfo(struct zx_xenc_EncryptedData_s* x, int n, struct zx_ds_KeyInfo_s* y);
void zx_xenc_EncryptedData_PUT_CipherData(struct zx_xenc_EncryptedData_s* x, int n, struct zx_xenc_CipherData_s* y);
void zx_xenc_EncryptedData_PUT_EncryptionProperties(struct zx_xenc_EncryptedData_s* x, int n, struct zx_xenc_EncryptionProperties_s* y);

void zx_xenc_EncryptedData_ADD_EncryptionMethod(struct zx_xenc_EncryptedData_s* x, int n, struct zx_xenc_EncryptionMethod_s* z);
void zx_xenc_EncryptedData_ADD_KeyInfo(struct zx_xenc_EncryptedData_s* x, int n, struct zx_ds_KeyInfo_s* z);
void zx_xenc_EncryptedData_ADD_CipherData(struct zx_xenc_EncryptedData_s* x, int n, struct zx_xenc_CipherData_s* z);
void zx_xenc_EncryptedData_ADD_EncryptionProperties(struct zx_xenc_EncryptedData_s* x, int n, struct zx_xenc_EncryptionProperties_s* z);

void zx_xenc_EncryptedData_DEL_EncryptionMethod(struct zx_xenc_EncryptedData_s* x, int n);
void zx_xenc_EncryptedData_DEL_KeyInfo(struct zx_xenc_EncryptedData_s* x, int n);
void zx_xenc_EncryptedData_DEL_CipherData(struct zx_xenc_EncryptedData_s* x, int n);
void zx_xenc_EncryptedData_DEL_EncryptionProperties(struct zx_xenc_EncryptedData_s* x, int n);

void zx_xenc_EncryptedData_REV_EncryptionMethod(struct zx_xenc_EncryptedData_s* x);
void zx_xenc_EncryptedData_REV_KeyInfo(struct zx_xenc_EncryptedData_s* x);
void zx_xenc_EncryptedData_REV_CipherData(struct zx_xenc_EncryptedData_s* x);
void zx_xenc_EncryptedData_REV_EncryptionProperties(struct zx_xenc_EncryptedData_s* x);

#endif
/* -------------------------- xenc_EncryptedKey -------------------------- */
/* refby( zx_ds_KeyInfo_s zx_gl_EncryptedResourceID_s zx_is12_EncryptedResourceID_s zx_di12_EncryptedResourceID_s zx_ff12_EncryptedNameIdentifier_s zx_xenc_OriginatorKeyInfo_s zx_sa_EncryptedID_s zx_sa_EncryptedAttribute_s zx_xenc_RecipientKeyInfo_s zx_sp_NewEncryptedID_s zx_cb_EncryptedResourceID_s zx_sa_EncryptedAssertion_s ) */
#ifndef zx_xenc_EncryptedKey_EXT
#define zx_xenc_EncryptedKey_EXT
#endif

struct zx_xenc_EncryptedKey_s* zx_DEC_xenc_EncryptedKey(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_xenc_EncryptedKey_s* zx_NEW_xenc_EncryptedKey(struct zx_ctx* c);
void zx_FREE_xenc_EncryptedKey(struct zx_ctx* c, struct zx_xenc_EncryptedKey_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_xenc_EncryptedKey_s* zx_DEEP_CLONE_xenc_EncryptedKey(struct zx_ctx* c, struct zx_xenc_EncryptedKey_s* x, int dup_strs);
void zx_DUP_STRS_xenc_EncryptedKey(struct zx_ctx* c, struct zx_xenc_EncryptedKey_s* x);
int zx_WALK_SO_xenc_EncryptedKey(struct zx_ctx* c, struct zx_xenc_EncryptedKey_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_xenc_EncryptedKey(struct zx_ctx* c, struct zx_xenc_EncryptedKey_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_xenc_EncryptedKey(struct zx_ctx* c, struct zx_xenc_EncryptedKey_s* x);
int zx_LEN_WO_xenc_EncryptedKey(struct zx_ctx* c, struct zx_xenc_EncryptedKey_s* x);
char* zx_ENC_SO_xenc_EncryptedKey(struct zx_ctx* c, struct zx_xenc_EncryptedKey_s* x, char* p);
char* zx_ENC_WO_xenc_EncryptedKey(struct zx_ctx* c, struct zx_xenc_EncryptedKey_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_xenc_EncryptedKey(struct zx_ctx* c, struct zx_xenc_EncryptedKey_s* x);
struct zx_str* zx_EASY_ENC_WO_xenc_EncryptedKey(struct zx_ctx* c, struct zx_xenc_EncryptedKey_s* x);

struct zx_xenc_EncryptedKey_s {
  ZX_ELEM_EXT
  zx_xenc_EncryptedKey_EXT
  struct zx_xenc_EncryptionMethod_s* EncryptionMethod;	/* {0,1}  */
  struct zx_ds_KeyInfo_s* KeyInfo;	/* {0,1} nada */
  struct zx_xenc_CipherData_s* CipherData;	/* {1,1} nada */
  struct zx_xenc_EncryptionProperties_s* EncryptionProperties;	/* {0,1} nada */
  struct zx_xenc_ReferenceList_s* ReferenceList;	/* {0,1} nada */
  struct zx_elem_s* CarriedKeyName;	/* {0,1} xs:string */
  struct zx_str* Encoding;	/* {0,1} attribute xs:anyURI */
  struct zx_str* Id;	/* {0,1} attribute xs:ID */
  struct zx_str* MimeType;	/* {0,1} attribute xs:string */
  struct zx_str* Recipient;	/* {0,1} attribute xs:anyURI */
  struct zx_str* Type;	/* {0,1} attribute wst:BinarySecretTypeEnum */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_xenc_EncryptedKey_GET_Encoding(struct zx_xenc_EncryptedKey_s* x);
struct zx_str* zx_xenc_EncryptedKey_GET_Id(struct zx_xenc_EncryptedKey_s* x);
struct zx_str* zx_xenc_EncryptedKey_GET_MimeType(struct zx_xenc_EncryptedKey_s* x);
struct zx_str* zx_xenc_EncryptedKey_GET_Recipient(struct zx_xenc_EncryptedKey_s* x);
struct zx_str* zx_xenc_EncryptedKey_GET_Type(struct zx_xenc_EncryptedKey_s* x);

struct zx_xenc_EncryptionMethod_s* zx_xenc_EncryptedKey_GET_EncryptionMethod(struct zx_xenc_EncryptedKey_s* x, int n);
struct zx_ds_KeyInfo_s* zx_xenc_EncryptedKey_GET_KeyInfo(struct zx_xenc_EncryptedKey_s* x, int n);
struct zx_xenc_CipherData_s* zx_xenc_EncryptedKey_GET_CipherData(struct zx_xenc_EncryptedKey_s* x, int n);
struct zx_xenc_EncryptionProperties_s* zx_xenc_EncryptedKey_GET_EncryptionProperties(struct zx_xenc_EncryptedKey_s* x, int n);
struct zx_xenc_ReferenceList_s* zx_xenc_EncryptedKey_GET_ReferenceList(struct zx_xenc_EncryptedKey_s* x, int n);
struct zx_elem_s* zx_xenc_EncryptedKey_GET_CarriedKeyName(struct zx_xenc_EncryptedKey_s* x, int n);

int zx_xenc_EncryptedKey_NUM_EncryptionMethod(struct zx_xenc_EncryptedKey_s* x);
int zx_xenc_EncryptedKey_NUM_KeyInfo(struct zx_xenc_EncryptedKey_s* x);
int zx_xenc_EncryptedKey_NUM_CipherData(struct zx_xenc_EncryptedKey_s* x);
int zx_xenc_EncryptedKey_NUM_EncryptionProperties(struct zx_xenc_EncryptedKey_s* x);
int zx_xenc_EncryptedKey_NUM_ReferenceList(struct zx_xenc_EncryptedKey_s* x);
int zx_xenc_EncryptedKey_NUM_CarriedKeyName(struct zx_xenc_EncryptedKey_s* x);

struct zx_xenc_EncryptionMethod_s* zx_xenc_EncryptedKey_POP_EncryptionMethod(struct zx_xenc_EncryptedKey_s* x);
struct zx_ds_KeyInfo_s* zx_xenc_EncryptedKey_POP_KeyInfo(struct zx_xenc_EncryptedKey_s* x);
struct zx_xenc_CipherData_s* zx_xenc_EncryptedKey_POP_CipherData(struct zx_xenc_EncryptedKey_s* x);
struct zx_xenc_EncryptionProperties_s* zx_xenc_EncryptedKey_POP_EncryptionProperties(struct zx_xenc_EncryptedKey_s* x);
struct zx_xenc_ReferenceList_s* zx_xenc_EncryptedKey_POP_ReferenceList(struct zx_xenc_EncryptedKey_s* x);
struct zx_elem_s* zx_xenc_EncryptedKey_POP_CarriedKeyName(struct zx_xenc_EncryptedKey_s* x);

void zx_xenc_EncryptedKey_PUSH_EncryptionMethod(struct zx_xenc_EncryptedKey_s* x, struct zx_xenc_EncryptionMethod_s* y);
void zx_xenc_EncryptedKey_PUSH_KeyInfo(struct zx_xenc_EncryptedKey_s* x, struct zx_ds_KeyInfo_s* y);
void zx_xenc_EncryptedKey_PUSH_CipherData(struct zx_xenc_EncryptedKey_s* x, struct zx_xenc_CipherData_s* y);
void zx_xenc_EncryptedKey_PUSH_EncryptionProperties(struct zx_xenc_EncryptedKey_s* x, struct zx_xenc_EncryptionProperties_s* y);
void zx_xenc_EncryptedKey_PUSH_ReferenceList(struct zx_xenc_EncryptedKey_s* x, struct zx_xenc_ReferenceList_s* y);
void zx_xenc_EncryptedKey_PUSH_CarriedKeyName(struct zx_xenc_EncryptedKey_s* x, struct zx_elem_s* y);

void zx_xenc_EncryptedKey_PUT_Encoding(struct zx_xenc_EncryptedKey_s* x, struct zx_str* y);
void zx_xenc_EncryptedKey_PUT_Id(struct zx_xenc_EncryptedKey_s* x, struct zx_str* y);
void zx_xenc_EncryptedKey_PUT_MimeType(struct zx_xenc_EncryptedKey_s* x, struct zx_str* y);
void zx_xenc_EncryptedKey_PUT_Recipient(struct zx_xenc_EncryptedKey_s* x, struct zx_str* y);
void zx_xenc_EncryptedKey_PUT_Type(struct zx_xenc_EncryptedKey_s* x, struct zx_str* y);

void zx_xenc_EncryptedKey_PUT_EncryptionMethod(struct zx_xenc_EncryptedKey_s* x, int n, struct zx_xenc_EncryptionMethod_s* y);
void zx_xenc_EncryptedKey_PUT_KeyInfo(struct zx_xenc_EncryptedKey_s* x, int n, struct zx_ds_KeyInfo_s* y);
void zx_xenc_EncryptedKey_PUT_CipherData(struct zx_xenc_EncryptedKey_s* x, int n, struct zx_xenc_CipherData_s* y);
void zx_xenc_EncryptedKey_PUT_EncryptionProperties(struct zx_xenc_EncryptedKey_s* x, int n, struct zx_xenc_EncryptionProperties_s* y);
void zx_xenc_EncryptedKey_PUT_ReferenceList(struct zx_xenc_EncryptedKey_s* x, int n, struct zx_xenc_ReferenceList_s* y);
void zx_xenc_EncryptedKey_PUT_CarriedKeyName(struct zx_xenc_EncryptedKey_s* x, int n, struct zx_elem_s* y);

void zx_xenc_EncryptedKey_ADD_EncryptionMethod(struct zx_xenc_EncryptedKey_s* x, int n, struct zx_xenc_EncryptionMethod_s* z);
void zx_xenc_EncryptedKey_ADD_KeyInfo(struct zx_xenc_EncryptedKey_s* x, int n, struct zx_ds_KeyInfo_s* z);
void zx_xenc_EncryptedKey_ADD_CipherData(struct zx_xenc_EncryptedKey_s* x, int n, struct zx_xenc_CipherData_s* z);
void zx_xenc_EncryptedKey_ADD_EncryptionProperties(struct zx_xenc_EncryptedKey_s* x, int n, struct zx_xenc_EncryptionProperties_s* z);
void zx_xenc_EncryptedKey_ADD_ReferenceList(struct zx_xenc_EncryptedKey_s* x, int n, struct zx_xenc_ReferenceList_s* z);
void zx_xenc_EncryptedKey_ADD_CarriedKeyName(struct zx_xenc_EncryptedKey_s* x, int n, struct zx_elem_s* z);

void zx_xenc_EncryptedKey_DEL_EncryptionMethod(struct zx_xenc_EncryptedKey_s* x, int n);
void zx_xenc_EncryptedKey_DEL_KeyInfo(struct zx_xenc_EncryptedKey_s* x, int n);
void zx_xenc_EncryptedKey_DEL_CipherData(struct zx_xenc_EncryptedKey_s* x, int n);
void zx_xenc_EncryptedKey_DEL_EncryptionProperties(struct zx_xenc_EncryptedKey_s* x, int n);
void zx_xenc_EncryptedKey_DEL_ReferenceList(struct zx_xenc_EncryptedKey_s* x, int n);
void zx_xenc_EncryptedKey_DEL_CarriedKeyName(struct zx_xenc_EncryptedKey_s* x, int n);

void zx_xenc_EncryptedKey_REV_EncryptionMethod(struct zx_xenc_EncryptedKey_s* x);
void zx_xenc_EncryptedKey_REV_KeyInfo(struct zx_xenc_EncryptedKey_s* x);
void zx_xenc_EncryptedKey_REV_CipherData(struct zx_xenc_EncryptedKey_s* x);
void zx_xenc_EncryptedKey_REV_EncryptionProperties(struct zx_xenc_EncryptedKey_s* x);
void zx_xenc_EncryptedKey_REV_ReferenceList(struct zx_xenc_EncryptedKey_s* x);
void zx_xenc_EncryptedKey_REV_CarriedKeyName(struct zx_xenc_EncryptedKey_s* x);

#endif
/* -------------------------- xenc_EncryptionMethod -------------------------- */
/* refby( zx_xenc_EncryptedData_s zx_xenc_EncryptedKey_s ) */
#ifndef zx_xenc_EncryptionMethod_EXT
#define zx_xenc_EncryptionMethod_EXT
#endif

struct zx_xenc_EncryptionMethod_s* zx_DEC_xenc_EncryptionMethod(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_xenc_EncryptionMethod_s* zx_NEW_xenc_EncryptionMethod(struct zx_ctx* c);
void zx_FREE_xenc_EncryptionMethod(struct zx_ctx* c, struct zx_xenc_EncryptionMethod_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_xenc_EncryptionMethod_s* zx_DEEP_CLONE_xenc_EncryptionMethod(struct zx_ctx* c, struct zx_xenc_EncryptionMethod_s* x, int dup_strs);
void zx_DUP_STRS_xenc_EncryptionMethod(struct zx_ctx* c, struct zx_xenc_EncryptionMethod_s* x);
int zx_WALK_SO_xenc_EncryptionMethod(struct zx_ctx* c, struct zx_xenc_EncryptionMethod_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_xenc_EncryptionMethod(struct zx_ctx* c, struct zx_xenc_EncryptionMethod_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_xenc_EncryptionMethod(struct zx_ctx* c, struct zx_xenc_EncryptionMethod_s* x);
int zx_LEN_WO_xenc_EncryptionMethod(struct zx_ctx* c, struct zx_xenc_EncryptionMethod_s* x);
char* zx_ENC_SO_xenc_EncryptionMethod(struct zx_ctx* c, struct zx_xenc_EncryptionMethod_s* x, char* p);
char* zx_ENC_WO_xenc_EncryptionMethod(struct zx_ctx* c, struct zx_xenc_EncryptionMethod_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_xenc_EncryptionMethod(struct zx_ctx* c, struct zx_xenc_EncryptionMethod_s* x);
struct zx_str* zx_EASY_ENC_WO_xenc_EncryptionMethod(struct zx_ctx* c, struct zx_xenc_EncryptionMethod_s* x);

struct zx_xenc_EncryptionMethod_s {
  ZX_ELEM_EXT
  zx_xenc_EncryptionMethod_EXT
  struct zx_elem_s* KeySize;	/* {0,1} xs:integer */
  struct zx_elem_s* OAEPparams;	/* {0,1} xs:base64Binary */
  struct zx_str* Algorithm;	/* {1,1} attribute xs:anyURI */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_xenc_EncryptionMethod_GET_Algorithm(struct zx_xenc_EncryptionMethod_s* x);

struct zx_elem_s* zx_xenc_EncryptionMethod_GET_KeySize(struct zx_xenc_EncryptionMethod_s* x, int n);
struct zx_elem_s* zx_xenc_EncryptionMethod_GET_OAEPparams(struct zx_xenc_EncryptionMethod_s* x, int n);

int zx_xenc_EncryptionMethod_NUM_KeySize(struct zx_xenc_EncryptionMethod_s* x);
int zx_xenc_EncryptionMethod_NUM_OAEPparams(struct zx_xenc_EncryptionMethod_s* x);

struct zx_elem_s* zx_xenc_EncryptionMethod_POP_KeySize(struct zx_xenc_EncryptionMethod_s* x);
struct zx_elem_s* zx_xenc_EncryptionMethod_POP_OAEPparams(struct zx_xenc_EncryptionMethod_s* x);

void zx_xenc_EncryptionMethod_PUSH_KeySize(struct zx_xenc_EncryptionMethod_s* x, struct zx_elem_s* y);
void zx_xenc_EncryptionMethod_PUSH_OAEPparams(struct zx_xenc_EncryptionMethod_s* x, struct zx_elem_s* y);

void zx_xenc_EncryptionMethod_PUT_Algorithm(struct zx_xenc_EncryptionMethod_s* x, struct zx_str* y);

void zx_xenc_EncryptionMethod_PUT_KeySize(struct zx_xenc_EncryptionMethod_s* x, int n, struct zx_elem_s* y);
void zx_xenc_EncryptionMethod_PUT_OAEPparams(struct zx_xenc_EncryptionMethod_s* x, int n, struct zx_elem_s* y);

void zx_xenc_EncryptionMethod_ADD_KeySize(struct zx_xenc_EncryptionMethod_s* x, int n, struct zx_elem_s* z);
void zx_xenc_EncryptionMethod_ADD_OAEPparams(struct zx_xenc_EncryptionMethod_s* x, int n, struct zx_elem_s* z);

void zx_xenc_EncryptionMethod_DEL_KeySize(struct zx_xenc_EncryptionMethod_s* x, int n);
void zx_xenc_EncryptionMethod_DEL_OAEPparams(struct zx_xenc_EncryptionMethod_s* x, int n);

void zx_xenc_EncryptionMethod_REV_KeySize(struct zx_xenc_EncryptionMethod_s* x);
void zx_xenc_EncryptionMethod_REV_OAEPparams(struct zx_xenc_EncryptionMethod_s* x);

#endif
/* -------------------------- xenc_EncryptionProperties -------------------------- */
/* refby( zx_xenc_EncryptedData_s zx_xenc_EncryptedKey_s ) */
#ifndef zx_xenc_EncryptionProperties_EXT
#define zx_xenc_EncryptionProperties_EXT
#endif

struct zx_xenc_EncryptionProperties_s* zx_DEC_xenc_EncryptionProperties(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_xenc_EncryptionProperties_s* zx_NEW_xenc_EncryptionProperties(struct zx_ctx* c);
void zx_FREE_xenc_EncryptionProperties(struct zx_ctx* c, struct zx_xenc_EncryptionProperties_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_xenc_EncryptionProperties_s* zx_DEEP_CLONE_xenc_EncryptionProperties(struct zx_ctx* c, struct zx_xenc_EncryptionProperties_s* x, int dup_strs);
void zx_DUP_STRS_xenc_EncryptionProperties(struct zx_ctx* c, struct zx_xenc_EncryptionProperties_s* x);
int zx_WALK_SO_xenc_EncryptionProperties(struct zx_ctx* c, struct zx_xenc_EncryptionProperties_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_xenc_EncryptionProperties(struct zx_ctx* c, struct zx_xenc_EncryptionProperties_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_xenc_EncryptionProperties(struct zx_ctx* c, struct zx_xenc_EncryptionProperties_s* x);
int zx_LEN_WO_xenc_EncryptionProperties(struct zx_ctx* c, struct zx_xenc_EncryptionProperties_s* x);
char* zx_ENC_SO_xenc_EncryptionProperties(struct zx_ctx* c, struct zx_xenc_EncryptionProperties_s* x, char* p);
char* zx_ENC_WO_xenc_EncryptionProperties(struct zx_ctx* c, struct zx_xenc_EncryptionProperties_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_xenc_EncryptionProperties(struct zx_ctx* c, struct zx_xenc_EncryptionProperties_s* x);
struct zx_str* zx_EASY_ENC_WO_xenc_EncryptionProperties(struct zx_ctx* c, struct zx_xenc_EncryptionProperties_s* x);

struct zx_xenc_EncryptionProperties_s {
  ZX_ELEM_EXT
  zx_xenc_EncryptionProperties_EXT
  struct zx_xenc_EncryptionProperty_s* EncryptionProperty;	/* {1,-1} nada */
  struct zx_str* Id;	/* {0,1} attribute xs:ID */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_xenc_EncryptionProperties_GET_Id(struct zx_xenc_EncryptionProperties_s* x);

struct zx_xenc_EncryptionProperty_s* zx_xenc_EncryptionProperties_GET_EncryptionProperty(struct zx_xenc_EncryptionProperties_s* x, int n);

int zx_xenc_EncryptionProperties_NUM_EncryptionProperty(struct zx_xenc_EncryptionProperties_s* x);

struct zx_xenc_EncryptionProperty_s* zx_xenc_EncryptionProperties_POP_EncryptionProperty(struct zx_xenc_EncryptionProperties_s* x);

void zx_xenc_EncryptionProperties_PUSH_EncryptionProperty(struct zx_xenc_EncryptionProperties_s* x, struct zx_xenc_EncryptionProperty_s* y);

void zx_xenc_EncryptionProperties_PUT_Id(struct zx_xenc_EncryptionProperties_s* x, struct zx_str* y);

void zx_xenc_EncryptionProperties_PUT_EncryptionProperty(struct zx_xenc_EncryptionProperties_s* x, int n, struct zx_xenc_EncryptionProperty_s* y);

void zx_xenc_EncryptionProperties_ADD_EncryptionProperty(struct zx_xenc_EncryptionProperties_s* x, int n, struct zx_xenc_EncryptionProperty_s* z);

void zx_xenc_EncryptionProperties_DEL_EncryptionProperty(struct zx_xenc_EncryptionProperties_s* x, int n);

void zx_xenc_EncryptionProperties_REV_EncryptionProperty(struct zx_xenc_EncryptionProperties_s* x);

#endif
/* -------------------------- xenc_EncryptionProperty -------------------------- */
/* refby( zx_xenc_EncryptionProperties_s ) */
#ifndef zx_xenc_EncryptionProperty_EXT
#define zx_xenc_EncryptionProperty_EXT
#endif

struct zx_xenc_EncryptionProperty_s* zx_DEC_xenc_EncryptionProperty(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_xenc_EncryptionProperty_s* zx_NEW_xenc_EncryptionProperty(struct zx_ctx* c);
void zx_FREE_xenc_EncryptionProperty(struct zx_ctx* c, struct zx_xenc_EncryptionProperty_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_xenc_EncryptionProperty_s* zx_DEEP_CLONE_xenc_EncryptionProperty(struct zx_ctx* c, struct zx_xenc_EncryptionProperty_s* x, int dup_strs);
void zx_DUP_STRS_xenc_EncryptionProperty(struct zx_ctx* c, struct zx_xenc_EncryptionProperty_s* x);
int zx_WALK_SO_xenc_EncryptionProperty(struct zx_ctx* c, struct zx_xenc_EncryptionProperty_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_xenc_EncryptionProperty(struct zx_ctx* c, struct zx_xenc_EncryptionProperty_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_xenc_EncryptionProperty(struct zx_ctx* c, struct zx_xenc_EncryptionProperty_s* x);
int zx_LEN_WO_xenc_EncryptionProperty(struct zx_ctx* c, struct zx_xenc_EncryptionProperty_s* x);
char* zx_ENC_SO_xenc_EncryptionProperty(struct zx_ctx* c, struct zx_xenc_EncryptionProperty_s* x, char* p);
char* zx_ENC_WO_xenc_EncryptionProperty(struct zx_ctx* c, struct zx_xenc_EncryptionProperty_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_xenc_EncryptionProperty(struct zx_ctx* c, struct zx_xenc_EncryptionProperty_s* x);
struct zx_str* zx_EASY_ENC_WO_xenc_EncryptionProperty(struct zx_ctx* c, struct zx_xenc_EncryptionProperty_s* x);

struct zx_xenc_EncryptionProperty_s {
  ZX_ELEM_EXT
  zx_xenc_EncryptionProperty_EXT
  struct zx_str* Id;	/* {0,1} attribute xs:ID */
  struct zx_str* Target;	/* {0,1} attribute xs:anyURI */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_xenc_EncryptionProperty_GET_Id(struct zx_xenc_EncryptionProperty_s* x);
struct zx_str* zx_xenc_EncryptionProperty_GET_Target(struct zx_xenc_EncryptionProperty_s* x);





void zx_xenc_EncryptionProperty_PUT_Id(struct zx_xenc_EncryptionProperty_s* x, struct zx_str* y);
void zx_xenc_EncryptionProperty_PUT_Target(struct zx_xenc_EncryptionProperty_s* x, struct zx_str* y);





#endif
/* -------------------------- xenc_KeyReference -------------------------- */
/* refby( zx_xenc_ReferenceList_s ) */
#ifndef zx_xenc_KeyReference_EXT
#define zx_xenc_KeyReference_EXT
#endif

struct zx_xenc_KeyReference_s* zx_DEC_xenc_KeyReference(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_xenc_KeyReference_s* zx_NEW_xenc_KeyReference(struct zx_ctx* c);
void zx_FREE_xenc_KeyReference(struct zx_ctx* c, struct zx_xenc_KeyReference_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_xenc_KeyReference_s* zx_DEEP_CLONE_xenc_KeyReference(struct zx_ctx* c, struct zx_xenc_KeyReference_s* x, int dup_strs);
void zx_DUP_STRS_xenc_KeyReference(struct zx_ctx* c, struct zx_xenc_KeyReference_s* x);
int zx_WALK_SO_xenc_KeyReference(struct zx_ctx* c, struct zx_xenc_KeyReference_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_xenc_KeyReference(struct zx_ctx* c, struct zx_xenc_KeyReference_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_xenc_KeyReference(struct zx_ctx* c, struct zx_xenc_KeyReference_s* x);
int zx_LEN_WO_xenc_KeyReference(struct zx_ctx* c, struct zx_xenc_KeyReference_s* x);
char* zx_ENC_SO_xenc_KeyReference(struct zx_ctx* c, struct zx_xenc_KeyReference_s* x, char* p);
char* zx_ENC_WO_xenc_KeyReference(struct zx_ctx* c, struct zx_xenc_KeyReference_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_xenc_KeyReference(struct zx_ctx* c, struct zx_xenc_KeyReference_s* x);
struct zx_str* zx_EASY_ENC_WO_xenc_KeyReference(struct zx_ctx* c, struct zx_xenc_KeyReference_s* x);

struct zx_xenc_KeyReference_s {
  ZX_ELEM_EXT
  zx_xenc_KeyReference_EXT
  struct zx_str* URI;	/* {1,1} attribute xs:anyURI */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_xenc_KeyReference_GET_URI(struct zx_xenc_KeyReference_s* x);





void zx_xenc_KeyReference_PUT_URI(struct zx_xenc_KeyReference_s* x, struct zx_str* y);





#endif
/* -------------------------- xenc_OriginatorKeyInfo -------------------------- */
/* refby( zx_xenc_AgreementMethod_s ) */
#ifndef zx_xenc_OriginatorKeyInfo_EXT
#define zx_xenc_OriginatorKeyInfo_EXT
#endif

struct zx_xenc_OriginatorKeyInfo_s* zx_DEC_xenc_OriginatorKeyInfo(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_xenc_OriginatorKeyInfo_s* zx_NEW_xenc_OriginatorKeyInfo(struct zx_ctx* c);
void zx_FREE_xenc_OriginatorKeyInfo(struct zx_ctx* c, struct zx_xenc_OriginatorKeyInfo_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_xenc_OriginatorKeyInfo_s* zx_DEEP_CLONE_xenc_OriginatorKeyInfo(struct zx_ctx* c, struct zx_xenc_OriginatorKeyInfo_s* x, int dup_strs);
void zx_DUP_STRS_xenc_OriginatorKeyInfo(struct zx_ctx* c, struct zx_xenc_OriginatorKeyInfo_s* x);
int zx_WALK_SO_xenc_OriginatorKeyInfo(struct zx_ctx* c, struct zx_xenc_OriginatorKeyInfo_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_xenc_OriginatorKeyInfo(struct zx_ctx* c, struct zx_xenc_OriginatorKeyInfo_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_xenc_OriginatorKeyInfo(struct zx_ctx* c, struct zx_xenc_OriginatorKeyInfo_s* x);
int zx_LEN_WO_xenc_OriginatorKeyInfo(struct zx_ctx* c, struct zx_xenc_OriginatorKeyInfo_s* x);
char* zx_ENC_SO_xenc_OriginatorKeyInfo(struct zx_ctx* c, struct zx_xenc_OriginatorKeyInfo_s* x, char* p);
char* zx_ENC_WO_xenc_OriginatorKeyInfo(struct zx_ctx* c, struct zx_xenc_OriginatorKeyInfo_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_xenc_OriginatorKeyInfo(struct zx_ctx* c, struct zx_xenc_OriginatorKeyInfo_s* x);
struct zx_str* zx_EASY_ENC_WO_xenc_OriginatorKeyInfo(struct zx_ctx* c, struct zx_xenc_OriginatorKeyInfo_s* x);

struct zx_xenc_OriginatorKeyInfo_s {
  ZX_ELEM_EXT
  zx_xenc_OriginatorKeyInfo_EXT
  struct zx_elem_s* KeyName;	/* {0,-1} xs:string */
  struct zx_ds_KeyValue_s* KeyValue;	/* {0,-1} nada */
  struct zx_ds_RetrievalMethod_s* RetrievalMethod;	/* {0,-1} nada */
  struct zx_ds_X509Data_s* X509Data;	/* {0,-1} nada */
  struct zx_ds_PGPData_s* PGPData;	/* {0,-1} nada */
  struct zx_ds_SPKIData_s* SPKIData;	/* {0,-1} nada */
  struct zx_elem_s* MgmtData;	/* {0,-1} xs:string */
  struct zx_xenc_EncryptedKey_s* EncryptedKey;	/* {0,-1} nada */
  struct zx_str* Id;	/* {0,1} attribute xs:ID */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_xenc_OriginatorKeyInfo_GET_Id(struct zx_xenc_OriginatorKeyInfo_s* x);

struct zx_elem_s* zx_xenc_OriginatorKeyInfo_GET_KeyName(struct zx_xenc_OriginatorKeyInfo_s* x, int n);
struct zx_ds_KeyValue_s* zx_xenc_OriginatorKeyInfo_GET_KeyValue(struct zx_xenc_OriginatorKeyInfo_s* x, int n);
struct zx_ds_RetrievalMethod_s* zx_xenc_OriginatorKeyInfo_GET_RetrievalMethod(struct zx_xenc_OriginatorKeyInfo_s* x, int n);
struct zx_ds_X509Data_s* zx_xenc_OriginatorKeyInfo_GET_X509Data(struct zx_xenc_OriginatorKeyInfo_s* x, int n);
struct zx_ds_PGPData_s* zx_xenc_OriginatorKeyInfo_GET_PGPData(struct zx_xenc_OriginatorKeyInfo_s* x, int n);
struct zx_ds_SPKIData_s* zx_xenc_OriginatorKeyInfo_GET_SPKIData(struct zx_xenc_OriginatorKeyInfo_s* x, int n);
struct zx_elem_s* zx_xenc_OriginatorKeyInfo_GET_MgmtData(struct zx_xenc_OriginatorKeyInfo_s* x, int n);
struct zx_xenc_EncryptedKey_s* zx_xenc_OriginatorKeyInfo_GET_EncryptedKey(struct zx_xenc_OriginatorKeyInfo_s* x, int n);

int zx_xenc_OriginatorKeyInfo_NUM_KeyName(struct zx_xenc_OriginatorKeyInfo_s* x);
int zx_xenc_OriginatorKeyInfo_NUM_KeyValue(struct zx_xenc_OriginatorKeyInfo_s* x);
int zx_xenc_OriginatorKeyInfo_NUM_RetrievalMethod(struct zx_xenc_OriginatorKeyInfo_s* x);
int zx_xenc_OriginatorKeyInfo_NUM_X509Data(struct zx_xenc_OriginatorKeyInfo_s* x);
int zx_xenc_OriginatorKeyInfo_NUM_PGPData(struct zx_xenc_OriginatorKeyInfo_s* x);
int zx_xenc_OriginatorKeyInfo_NUM_SPKIData(struct zx_xenc_OriginatorKeyInfo_s* x);
int zx_xenc_OriginatorKeyInfo_NUM_MgmtData(struct zx_xenc_OriginatorKeyInfo_s* x);
int zx_xenc_OriginatorKeyInfo_NUM_EncryptedKey(struct zx_xenc_OriginatorKeyInfo_s* x);

struct zx_elem_s* zx_xenc_OriginatorKeyInfo_POP_KeyName(struct zx_xenc_OriginatorKeyInfo_s* x);
struct zx_ds_KeyValue_s* zx_xenc_OriginatorKeyInfo_POP_KeyValue(struct zx_xenc_OriginatorKeyInfo_s* x);
struct zx_ds_RetrievalMethod_s* zx_xenc_OriginatorKeyInfo_POP_RetrievalMethod(struct zx_xenc_OriginatorKeyInfo_s* x);
struct zx_ds_X509Data_s* zx_xenc_OriginatorKeyInfo_POP_X509Data(struct zx_xenc_OriginatorKeyInfo_s* x);
struct zx_ds_PGPData_s* zx_xenc_OriginatorKeyInfo_POP_PGPData(struct zx_xenc_OriginatorKeyInfo_s* x);
struct zx_ds_SPKIData_s* zx_xenc_OriginatorKeyInfo_POP_SPKIData(struct zx_xenc_OriginatorKeyInfo_s* x);
struct zx_elem_s* zx_xenc_OriginatorKeyInfo_POP_MgmtData(struct zx_xenc_OriginatorKeyInfo_s* x);
struct zx_xenc_EncryptedKey_s* zx_xenc_OriginatorKeyInfo_POP_EncryptedKey(struct zx_xenc_OriginatorKeyInfo_s* x);

void zx_xenc_OriginatorKeyInfo_PUSH_KeyName(struct zx_xenc_OriginatorKeyInfo_s* x, struct zx_elem_s* y);
void zx_xenc_OriginatorKeyInfo_PUSH_KeyValue(struct zx_xenc_OriginatorKeyInfo_s* x, struct zx_ds_KeyValue_s* y);
void zx_xenc_OriginatorKeyInfo_PUSH_RetrievalMethod(struct zx_xenc_OriginatorKeyInfo_s* x, struct zx_ds_RetrievalMethod_s* y);
void zx_xenc_OriginatorKeyInfo_PUSH_X509Data(struct zx_xenc_OriginatorKeyInfo_s* x, struct zx_ds_X509Data_s* y);
void zx_xenc_OriginatorKeyInfo_PUSH_PGPData(struct zx_xenc_OriginatorKeyInfo_s* x, struct zx_ds_PGPData_s* y);
void zx_xenc_OriginatorKeyInfo_PUSH_SPKIData(struct zx_xenc_OriginatorKeyInfo_s* x, struct zx_ds_SPKIData_s* y);
void zx_xenc_OriginatorKeyInfo_PUSH_MgmtData(struct zx_xenc_OriginatorKeyInfo_s* x, struct zx_elem_s* y);
void zx_xenc_OriginatorKeyInfo_PUSH_EncryptedKey(struct zx_xenc_OriginatorKeyInfo_s* x, struct zx_xenc_EncryptedKey_s* y);

void zx_xenc_OriginatorKeyInfo_PUT_Id(struct zx_xenc_OriginatorKeyInfo_s* x, struct zx_str* y);

void zx_xenc_OriginatorKeyInfo_PUT_KeyName(struct zx_xenc_OriginatorKeyInfo_s* x, int n, struct zx_elem_s* y);
void zx_xenc_OriginatorKeyInfo_PUT_KeyValue(struct zx_xenc_OriginatorKeyInfo_s* x, int n, struct zx_ds_KeyValue_s* y);
void zx_xenc_OriginatorKeyInfo_PUT_RetrievalMethod(struct zx_xenc_OriginatorKeyInfo_s* x, int n, struct zx_ds_RetrievalMethod_s* y);
void zx_xenc_OriginatorKeyInfo_PUT_X509Data(struct zx_xenc_OriginatorKeyInfo_s* x, int n, struct zx_ds_X509Data_s* y);
void zx_xenc_OriginatorKeyInfo_PUT_PGPData(struct zx_xenc_OriginatorKeyInfo_s* x, int n, struct zx_ds_PGPData_s* y);
void zx_xenc_OriginatorKeyInfo_PUT_SPKIData(struct zx_xenc_OriginatorKeyInfo_s* x, int n, struct zx_ds_SPKIData_s* y);
void zx_xenc_OriginatorKeyInfo_PUT_MgmtData(struct zx_xenc_OriginatorKeyInfo_s* x, int n, struct zx_elem_s* y);
void zx_xenc_OriginatorKeyInfo_PUT_EncryptedKey(struct zx_xenc_OriginatorKeyInfo_s* x, int n, struct zx_xenc_EncryptedKey_s* y);

void zx_xenc_OriginatorKeyInfo_ADD_KeyName(struct zx_xenc_OriginatorKeyInfo_s* x, int n, struct zx_elem_s* z);
void zx_xenc_OriginatorKeyInfo_ADD_KeyValue(struct zx_xenc_OriginatorKeyInfo_s* x, int n, struct zx_ds_KeyValue_s* z);
void zx_xenc_OriginatorKeyInfo_ADD_RetrievalMethod(struct zx_xenc_OriginatorKeyInfo_s* x, int n, struct zx_ds_RetrievalMethod_s* z);
void zx_xenc_OriginatorKeyInfo_ADD_X509Data(struct zx_xenc_OriginatorKeyInfo_s* x, int n, struct zx_ds_X509Data_s* z);
void zx_xenc_OriginatorKeyInfo_ADD_PGPData(struct zx_xenc_OriginatorKeyInfo_s* x, int n, struct zx_ds_PGPData_s* z);
void zx_xenc_OriginatorKeyInfo_ADD_SPKIData(struct zx_xenc_OriginatorKeyInfo_s* x, int n, struct zx_ds_SPKIData_s* z);
void zx_xenc_OriginatorKeyInfo_ADD_MgmtData(struct zx_xenc_OriginatorKeyInfo_s* x, int n, struct zx_elem_s* z);
void zx_xenc_OriginatorKeyInfo_ADD_EncryptedKey(struct zx_xenc_OriginatorKeyInfo_s* x, int n, struct zx_xenc_EncryptedKey_s* z);

void zx_xenc_OriginatorKeyInfo_DEL_KeyName(struct zx_xenc_OriginatorKeyInfo_s* x, int n);
void zx_xenc_OriginatorKeyInfo_DEL_KeyValue(struct zx_xenc_OriginatorKeyInfo_s* x, int n);
void zx_xenc_OriginatorKeyInfo_DEL_RetrievalMethod(struct zx_xenc_OriginatorKeyInfo_s* x, int n);
void zx_xenc_OriginatorKeyInfo_DEL_X509Data(struct zx_xenc_OriginatorKeyInfo_s* x, int n);
void zx_xenc_OriginatorKeyInfo_DEL_PGPData(struct zx_xenc_OriginatorKeyInfo_s* x, int n);
void zx_xenc_OriginatorKeyInfo_DEL_SPKIData(struct zx_xenc_OriginatorKeyInfo_s* x, int n);
void zx_xenc_OriginatorKeyInfo_DEL_MgmtData(struct zx_xenc_OriginatorKeyInfo_s* x, int n);
void zx_xenc_OriginatorKeyInfo_DEL_EncryptedKey(struct zx_xenc_OriginatorKeyInfo_s* x, int n);

void zx_xenc_OriginatorKeyInfo_REV_KeyName(struct zx_xenc_OriginatorKeyInfo_s* x);
void zx_xenc_OriginatorKeyInfo_REV_KeyValue(struct zx_xenc_OriginatorKeyInfo_s* x);
void zx_xenc_OriginatorKeyInfo_REV_RetrievalMethod(struct zx_xenc_OriginatorKeyInfo_s* x);
void zx_xenc_OriginatorKeyInfo_REV_X509Data(struct zx_xenc_OriginatorKeyInfo_s* x);
void zx_xenc_OriginatorKeyInfo_REV_PGPData(struct zx_xenc_OriginatorKeyInfo_s* x);
void zx_xenc_OriginatorKeyInfo_REV_SPKIData(struct zx_xenc_OriginatorKeyInfo_s* x);
void zx_xenc_OriginatorKeyInfo_REV_MgmtData(struct zx_xenc_OriginatorKeyInfo_s* x);
void zx_xenc_OriginatorKeyInfo_REV_EncryptedKey(struct zx_xenc_OriginatorKeyInfo_s* x);

#endif
/* -------------------------- xenc_RecipientKeyInfo -------------------------- */
/* refby( zx_xenc_AgreementMethod_s ) */
#ifndef zx_xenc_RecipientKeyInfo_EXT
#define zx_xenc_RecipientKeyInfo_EXT
#endif

struct zx_xenc_RecipientKeyInfo_s* zx_DEC_xenc_RecipientKeyInfo(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_xenc_RecipientKeyInfo_s* zx_NEW_xenc_RecipientKeyInfo(struct zx_ctx* c);
void zx_FREE_xenc_RecipientKeyInfo(struct zx_ctx* c, struct zx_xenc_RecipientKeyInfo_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_xenc_RecipientKeyInfo_s* zx_DEEP_CLONE_xenc_RecipientKeyInfo(struct zx_ctx* c, struct zx_xenc_RecipientKeyInfo_s* x, int dup_strs);
void zx_DUP_STRS_xenc_RecipientKeyInfo(struct zx_ctx* c, struct zx_xenc_RecipientKeyInfo_s* x);
int zx_WALK_SO_xenc_RecipientKeyInfo(struct zx_ctx* c, struct zx_xenc_RecipientKeyInfo_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_xenc_RecipientKeyInfo(struct zx_ctx* c, struct zx_xenc_RecipientKeyInfo_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_xenc_RecipientKeyInfo(struct zx_ctx* c, struct zx_xenc_RecipientKeyInfo_s* x);
int zx_LEN_WO_xenc_RecipientKeyInfo(struct zx_ctx* c, struct zx_xenc_RecipientKeyInfo_s* x);
char* zx_ENC_SO_xenc_RecipientKeyInfo(struct zx_ctx* c, struct zx_xenc_RecipientKeyInfo_s* x, char* p);
char* zx_ENC_WO_xenc_RecipientKeyInfo(struct zx_ctx* c, struct zx_xenc_RecipientKeyInfo_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_xenc_RecipientKeyInfo(struct zx_ctx* c, struct zx_xenc_RecipientKeyInfo_s* x);
struct zx_str* zx_EASY_ENC_WO_xenc_RecipientKeyInfo(struct zx_ctx* c, struct zx_xenc_RecipientKeyInfo_s* x);

struct zx_xenc_RecipientKeyInfo_s {
  ZX_ELEM_EXT
  zx_xenc_RecipientKeyInfo_EXT
  struct zx_elem_s* KeyName;	/* {0,-1} xs:string */
  struct zx_ds_KeyValue_s* KeyValue;	/* {0,-1} nada */
  struct zx_ds_RetrievalMethod_s* RetrievalMethod;	/* {0,-1} nada */
  struct zx_ds_X509Data_s* X509Data;	/* {0,-1} nada */
  struct zx_ds_PGPData_s* PGPData;	/* {0,-1} nada */
  struct zx_ds_SPKIData_s* SPKIData;	/* {0,-1} nada */
  struct zx_elem_s* MgmtData;	/* {0,-1} xs:string */
  struct zx_xenc_EncryptedKey_s* EncryptedKey;	/* {0,-1} nada */
  struct zx_str* Id;	/* {0,1} attribute xs:ID */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_xenc_RecipientKeyInfo_GET_Id(struct zx_xenc_RecipientKeyInfo_s* x);

struct zx_elem_s* zx_xenc_RecipientKeyInfo_GET_KeyName(struct zx_xenc_RecipientKeyInfo_s* x, int n);
struct zx_ds_KeyValue_s* zx_xenc_RecipientKeyInfo_GET_KeyValue(struct zx_xenc_RecipientKeyInfo_s* x, int n);
struct zx_ds_RetrievalMethod_s* zx_xenc_RecipientKeyInfo_GET_RetrievalMethod(struct zx_xenc_RecipientKeyInfo_s* x, int n);
struct zx_ds_X509Data_s* zx_xenc_RecipientKeyInfo_GET_X509Data(struct zx_xenc_RecipientKeyInfo_s* x, int n);
struct zx_ds_PGPData_s* zx_xenc_RecipientKeyInfo_GET_PGPData(struct zx_xenc_RecipientKeyInfo_s* x, int n);
struct zx_ds_SPKIData_s* zx_xenc_RecipientKeyInfo_GET_SPKIData(struct zx_xenc_RecipientKeyInfo_s* x, int n);
struct zx_elem_s* zx_xenc_RecipientKeyInfo_GET_MgmtData(struct zx_xenc_RecipientKeyInfo_s* x, int n);
struct zx_xenc_EncryptedKey_s* zx_xenc_RecipientKeyInfo_GET_EncryptedKey(struct zx_xenc_RecipientKeyInfo_s* x, int n);

int zx_xenc_RecipientKeyInfo_NUM_KeyName(struct zx_xenc_RecipientKeyInfo_s* x);
int zx_xenc_RecipientKeyInfo_NUM_KeyValue(struct zx_xenc_RecipientKeyInfo_s* x);
int zx_xenc_RecipientKeyInfo_NUM_RetrievalMethod(struct zx_xenc_RecipientKeyInfo_s* x);
int zx_xenc_RecipientKeyInfo_NUM_X509Data(struct zx_xenc_RecipientKeyInfo_s* x);
int zx_xenc_RecipientKeyInfo_NUM_PGPData(struct zx_xenc_RecipientKeyInfo_s* x);
int zx_xenc_RecipientKeyInfo_NUM_SPKIData(struct zx_xenc_RecipientKeyInfo_s* x);
int zx_xenc_RecipientKeyInfo_NUM_MgmtData(struct zx_xenc_RecipientKeyInfo_s* x);
int zx_xenc_RecipientKeyInfo_NUM_EncryptedKey(struct zx_xenc_RecipientKeyInfo_s* x);

struct zx_elem_s* zx_xenc_RecipientKeyInfo_POP_KeyName(struct zx_xenc_RecipientKeyInfo_s* x);
struct zx_ds_KeyValue_s* zx_xenc_RecipientKeyInfo_POP_KeyValue(struct zx_xenc_RecipientKeyInfo_s* x);
struct zx_ds_RetrievalMethod_s* zx_xenc_RecipientKeyInfo_POP_RetrievalMethod(struct zx_xenc_RecipientKeyInfo_s* x);
struct zx_ds_X509Data_s* zx_xenc_RecipientKeyInfo_POP_X509Data(struct zx_xenc_RecipientKeyInfo_s* x);
struct zx_ds_PGPData_s* zx_xenc_RecipientKeyInfo_POP_PGPData(struct zx_xenc_RecipientKeyInfo_s* x);
struct zx_ds_SPKIData_s* zx_xenc_RecipientKeyInfo_POP_SPKIData(struct zx_xenc_RecipientKeyInfo_s* x);
struct zx_elem_s* zx_xenc_RecipientKeyInfo_POP_MgmtData(struct zx_xenc_RecipientKeyInfo_s* x);
struct zx_xenc_EncryptedKey_s* zx_xenc_RecipientKeyInfo_POP_EncryptedKey(struct zx_xenc_RecipientKeyInfo_s* x);

void zx_xenc_RecipientKeyInfo_PUSH_KeyName(struct zx_xenc_RecipientKeyInfo_s* x, struct zx_elem_s* y);
void zx_xenc_RecipientKeyInfo_PUSH_KeyValue(struct zx_xenc_RecipientKeyInfo_s* x, struct zx_ds_KeyValue_s* y);
void zx_xenc_RecipientKeyInfo_PUSH_RetrievalMethod(struct zx_xenc_RecipientKeyInfo_s* x, struct zx_ds_RetrievalMethod_s* y);
void zx_xenc_RecipientKeyInfo_PUSH_X509Data(struct zx_xenc_RecipientKeyInfo_s* x, struct zx_ds_X509Data_s* y);
void zx_xenc_RecipientKeyInfo_PUSH_PGPData(struct zx_xenc_RecipientKeyInfo_s* x, struct zx_ds_PGPData_s* y);
void zx_xenc_RecipientKeyInfo_PUSH_SPKIData(struct zx_xenc_RecipientKeyInfo_s* x, struct zx_ds_SPKIData_s* y);
void zx_xenc_RecipientKeyInfo_PUSH_MgmtData(struct zx_xenc_RecipientKeyInfo_s* x, struct zx_elem_s* y);
void zx_xenc_RecipientKeyInfo_PUSH_EncryptedKey(struct zx_xenc_RecipientKeyInfo_s* x, struct zx_xenc_EncryptedKey_s* y);

void zx_xenc_RecipientKeyInfo_PUT_Id(struct zx_xenc_RecipientKeyInfo_s* x, struct zx_str* y);

void zx_xenc_RecipientKeyInfo_PUT_KeyName(struct zx_xenc_RecipientKeyInfo_s* x, int n, struct zx_elem_s* y);
void zx_xenc_RecipientKeyInfo_PUT_KeyValue(struct zx_xenc_RecipientKeyInfo_s* x, int n, struct zx_ds_KeyValue_s* y);
void zx_xenc_RecipientKeyInfo_PUT_RetrievalMethod(struct zx_xenc_RecipientKeyInfo_s* x, int n, struct zx_ds_RetrievalMethod_s* y);
void zx_xenc_RecipientKeyInfo_PUT_X509Data(struct zx_xenc_RecipientKeyInfo_s* x, int n, struct zx_ds_X509Data_s* y);
void zx_xenc_RecipientKeyInfo_PUT_PGPData(struct zx_xenc_RecipientKeyInfo_s* x, int n, struct zx_ds_PGPData_s* y);
void zx_xenc_RecipientKeyInfo_PUT_SPKIData(struct zx_xenc_RecipientKeyInfo_s* x, int n, struct zx_ds_SPKIData_s* y);
void zx_xenc_RecipientKeyInfo_PUT_MgmtData(struct zx_xenc_RecipientKeyInfo_s* x, int n, struct zx_elem_s* y);
void zx_xenc_RecipientKeyInfo_PUT_EncryptedKey(struct zx_xenc_RecipientKeyInfo_s* x, int n, struct zx_xenc_EncryptedKey_s* y);

void zx_xenc_RecipientKeyInfo_ADD_KeyName(struct zx_xenc_RecipientKeyInfo_s* x, int n, struct zx_elem_s* z);
void zx_xenc_RecipientKeyInfo_ADD_KeyValue(struct zx_xenc_RecipientKeyInfo_s* x, int n, struct zx_ds_KeyValue_s* z);
void zx_xenc_RecipientKeyInfo_ADD_RetrievalMethod(struct zx_xenc_RecipientKeyInfo_s* x, int n, struct zx_ds_RetrievalMethod_s* z);
void zx_xenc_RecipientKeyInfo_ADD_X509Data(struct zx_xenc_RecipientKeyInfo_s* x, int n, struct zx_ds_X509Data_s* z);
void zx_xenc_RecipientKeyInfo_ADD_PGPData(struct zx_xenc_RecipientKeyInfo_s* x, int n, struct zx_ds_PGPData_s* z);
void zx_xenc_RecipientKeyInfo_ADD_SPKIData(struct zx_xenc_RecipientKeyInfo_s* x, int n, struct zx_ds_SPKIData_s* z);
void zx_xenc_RecipientKeyInfo_ADD_MgmtData(struct zx_xenc_RecipientKeyInfo_s* x, int n, struct zx_elem_s* z);
void zx_xenc_RecipientKeyInfo_ADD_EncryptedKey(struct zx_xenc_RecipientKeyInfo_s* x, int n, struct zx_xenc_EncryptedKey_s* z);

void zx_xenc_RecipientKeyInfo_DEL_KeyName(struct zx_xenc_RecipientKeyInfo_s* x, int n);
void zx_xenc_RecipientKeyInfo_DEL_KeyValue(struct zx_xenc_RecipientKeyInfo_s* x, int n);
void zx_xenc_RecipientKeyInfo_DEL_RetrievalMethod(struct zx_xenc_RecipientKeyInfo_s* x, int n);
void zx_xenc_RecipientKeyInfo_DEL_X509Data(struct zx_xenc_RecipientKeyInfo_s* x, int n);
void zx_xenc_RecipientKeyInfo_DEL_PGPData(struct zx_xenc_RecipientKeyInfo_s* x, int n);
void zx_xenc_RecipientKeyInfo_DEL_SPKIData(struct zx_xenc_RecipientKeyInfo_s* x, int n);
void zx_xenc_RecipientKeyInfo_DEL_MgmtData(struct zx_xenc_RecipientKeyInfo_s* x, int n);
void zx_xenc_RecipientKeyInfo_DEL_EncryptedKey(struct zx_xenc_RecipientKeyInfo_s* x, int n);

void zx_xenc_RecipientKeyInfo_REV_KeyName(struct zx_xenc_RecipientKeyInfo_s* x);
void zx_xenc_RecipientKeyInfo_REV_KeyValue(struct zx_xenc_RecipientKeyInfo_s* x);
void zx_xenc_RecipientKeyInfo_REV_RetrievalMethod(struct zx_xenc_RecipientKeyInfo_s* x);
void zx_xenc_RecipientKeyInfo_REV_X509Data(struct zx_xenc_RecipientKeyInfo_s* x);
void zx_xenc_RecipientKeyInfo_REV_PGPData(struct zx_xenc_RecipientKeyInfo_s* x);
void zx_xenc_RecipientKeyInfo_REV_SPKIData(struct zx_xenc_RecipientKeyInfo_s* x);
void zx_xenc_RecipientKeyInfo_REV_MgmtData(struct zx_xenc_RecipientKeyInfo_s* x);
void zx_xenc_RecipientKeyInfo_REV_EncryptedKey(struct zx_xenc_RecipientKeyInfo_s* x);

#endif
/* -------------------------- xenc_ReferenceList -------------------------- */
/* refby( zx_xenc_EncryptedKey_s ) */
#ifndef zx_xenc_ReferenceList_EXT
#define zx_xenc_ReferenceList_EXT
#endif

struct zx_xenc_ReferenceList_s* zx_DEC_xenc_ReferenceList(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_xenc_ReferenceList_s* zx_NEW_xenc_ReferenceList(struct zx_ctx* c);
void zx_FREE_xenc_ReferenceList(struct zx_ctx* c, struct zx_xenc_ReferenceList_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_xenc_ReferenceList_s* zx_DEEP_CLONE_xenc_ReferenceList(struct zx_ctx* c, struct zx_xenc_ReferenceList_s* x, int dup_strs);
void zx_DUP_STRS_xenc_ReferenceList(struct zx_ctx* c, struct zx_xenc_ReferenceList_s* x);
int zx_WALK_SO_xenc_ReferenceList(struct zx_ctx* c, struct zx_xenc_ReferenceList_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_xenc_ReferenceList(struct zx_ctx* c, struct zx_xenc_ReferenceList_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_xenc_ReferenceList(struct zx_ctx* c, struct zx_xenc_ReferenceList_s* x);
int zx_LEN_WO_xenc_ReferenceList(struct zx_ctx* c, struct zx_xenc_ReferenceList_s* x);
char* zx_ENC_SO_xenc_ReferenceList(struct zx_ctx* c, struct zx_xenc_ReferenceList_s* x, char* p);
char* zx_ENC_WO_xenc_ReferenceList(struct zx_ctx* c, struct zx_xenc_ReferenceList_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_xenc_ReferenceList(struct zx_ctx* c, struct zx_xenc_ReferenceList_s* x);
struct zx_str* zx_EASY_ENC_WO_xenc_ReferenceList(struct zx_ctx* c, struct zx_xenc_ReferenceList_s* x);

struct zx_xenc_ReferenceList_s {
  ZX_ELEM_EXT
  zx_xenc_ReferenceList_EXT
  struct zx_xenc_DataReference_s* DataReference;	/* {0,1}  */
  struct zx_xenc_KeyReference_s* KeyReference;	/* {0,1}  */
};

#ifdef ZX_ENA_GETPUT

struct zx_xenc_DataReference_s* zx_xenc_ReferenceList_GET_DataReference(struct zx_xenc_ReferenceList_s* x, int n);
struct zx_xenc_KeyReference_s* zx_xenc_ReferenceList_GET_KeyReference(struct zx_xenc_ReferenceList_s* x, int n);

int zx_xenc_ReferenceList_NUM_DataReference(struct zx_xenc_ReferenceList_s* x);
int zx_xenc_ReferenceList_NUM_KeyReference(struct zx_xenc_ReferenceList_s* x);

struct zx_xenc_DataReference_s* zx_xenc_ReferenceList_POP_DataReference(struct zx_xenc_ReferenceList_s* x);
struct zx_xenc_KeyReference_s* zx_xenc_ReferenceList_POP_KeyReference(struct zx_xenc_ReferenceList_s* x);

void zx_xenc_ReferenceList_PUSH_DataReference(struct zx_xenc_ReferenceList_s* x, struct zx_xenc_DataReference_s* y);
void zx_xenc_ReferenceList_PUSH_KeyReference(struct zx_xenc_ReferenceList_s* x, struct zx_xenc_KeyReference_s* y);


void zx_xenc_ReferenceList_PUT_DataReference(struct zx_xenc_ReferenceList_s* x, int n, struct zx_xenc_DataReference_s* y);
void zx_xenc_ReferenceList_PUT_KeyReference(struct zx_xenc_ReferenceList_s* x, int n, struct zx_xenc_KeyReference_s* y);

void zx_xenc_ReferenceList_ADD_DataReference(struct zx_xenc_ReferenceList_s* x, int n, struct zx_xenc_DataReference_s* z);
void zx_xenc_ReferenceList_ADD_KeyReference(struct zx_xenc_ReferenceList_s* x, int n, struct zx_xenc_KeyReference_s* z);

void zx_xenc_ReferenceList_DEL_DataReference(struct zx_xenc_ReferenceList_s* x, int n);
void zx_xenc_ReferenceList_DEL_KeyReference(struct zx_xenc_ReferenceList_s* x, int n);

void zx_xenc_ReferenceList_REV_DataReference(struct zx_xenc_ReferenceList_s* x);
void zx_xenc_ReferenceList_REV_KeyReference(struct zx_xenc_ReferenceList_s* x);

#endif
/* -------------------------- xenc_Transforms -------------------------- */
/* refby( zx_xenc_CipherReference_s ) */
#ifndef zx_xenc_Transforms_EXT
#define zx_xenc_Transforms_EXT
#endif

struct zx_xenc_Transforms_s* zx_DEC_xenc_Transforms(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_xenc_Transforms_s* zx_NEW_xenc_Transforms(struct zx_ctx* c);
void zx_FREE_xenc_Transforms(struct zx_ctx* c, struct zx_xenc_Transforms_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_xenc_Transforms_s* zx_DEEP_CLONE_xenc_Transforms(struct zx_ctx* c, struct zx_xenc_Transforms_s* x, int dup_strs);
void zx_DUP_STRS_xenc_Transforms(struct zx_ctx* c, struct zx_xenc_Transforms_s* x);
int zx_WALK_SO_xenc_Transforms(struct zx_ctx* c, struct zx_xenc_Transforms_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_xenc_Transforms(struct zx_ctx* c, struct zx_xenc_Transforms_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_xenc_Transforms(struct zx_ctx* c, struct zx_xenc_Transforms_s* x);
int zx_LEN_WO_xenc_Transforms(struct zx_ctx* c, struct zx_xenc_Transforms_s* x);
char* zx_ENC_SO_xenc_Transforms(struct zx_ctx* c, struct zx_xenc_Transforms_s* x, char* p);
char* zx_ENC_WO_xenc_Transforms(struct zx_ctx* c, struct zx_xenc_Transforms_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_xenc_Transforms(struct zx_ctx* c, struct zx_xenc_Transforms_s* x);
struct zx_str* zx_EASY_ENC_WO_xenc_Transforms(struct zx_ctx* c, struct zx_xenc_Transforms_s* x);

struct zx_xenc_Transforms_s {
  ZX_ELEM_EXT
  zx_xenc_Transforms_EXT
  struct zx_ds_Transform_s* Transform;	/* {1,-1} nada */
};

#ifdef ZX_ENA_GETPUT

struct zx_ds_Transform_s* zx_xenc_Transforms_GET_Transform(struct zx_xenc_Transforms_s* x, int n);

int zx_xenc_Transforms_NUM_Transform(struct zx_xenc_Transforms_s* x);

struct zx_ds_Transform_s* zx_xenc_Transforms_POP_Transform(struct zx_xenc_Transforms_s* x);

void zx_xenc_Transforms_PUSH_Transform(struct zx_xenc_Transforms_s* x, struct zx_ds_Transform_s* y);


void zx_xenc_Transforms_PUT_Transform(struct zx_xenc_Transforms_s* x, int n, struct zx_ds_Transform_s* y);

void zx_xenc_Transforms_ADD_Transform(struct zx_xenc_Transforms_s* x, int n, struct zx_ds_Transform_s* z);

void zx_xenc_Transforms_DEL_Transform(struct zx_xenc_Transforms_s* x, int n);

void zx_xenc_Transforms_REV_Transform(struct zx_xenc_Transforms_s* x);

#endif

#endif
