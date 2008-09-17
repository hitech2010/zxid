/* c/zx-is12-data.h - WARNING: This header was automatically generated. DO NOT EDIT!
 * $Id$ */
/* Datastructure design, topography, and layout
 * Copyright (c) 2006 Sampo Kellomaki (sampo@iki.fi),
 * All Rights Reserved. NO WARRANTY. See file COPYING for
 * terms and conditions of use. Element and attributes names as well
 * as some topography are derived from schema descriptions that were used as
 * input and may be subject to their own copright. */

#ifndef _c_zx_is12_data_h
#define _c_zx_is12_data_h

#include "zx.h"
#include "c/zx-const.h"
#include "c/zx-data.h"

#ifndef ZX_ELEM_EXT
#define ZX_ELEM_EXT  /* This extension point should be defined by who includes this file. */
#endif

/* -------------------------- is12_Confirm -------------------------- */
/* refby( zx_is12_Inquiry_s ) */
#ifndef zx_is12_Confirm_EXT
#define zx_is12_Confirm_EXT
#endif

struct zx_is12_Confirm_s* zx_DEC_is12_Confirm(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_is12_Confirm_s* zx_NEW_is12_Confirm(struct zx_ctx* c);
void zx_FREE_is12_Confirm(struct zx_ctx* c, struct zx_is12_Confirm_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_is12_Confirm_s* zx_DEEP_CLONE_is12_Confirm(struct zx_ctx* c, struct zx_is12_Confirm_s* x, int dup_strs);
void zx_DUP_STRS_is12_Confirm(struct zx_ctx* c, struct zx_is12_Confirm_s* x);
int zx_WALK_SO_is12_Confirm(struct zx_ctx* c, struct zx_is12_Confirm_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_is12_Confirm(struct zx_ctx* c, struct zx_is12_Confirm_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_is12_Confirm(struct zx_ctx* c, struct zx_is12_Confirm_s* x);
int zx_LEN_WO_is12_Confirm(struct zx_ctx* c, struct zx_is12_Confirm_s* x);
char* zx_ENC_SO_is12_Confirm(struct zx_ctx* c, struct zx_is12_Confirm_s* x, char* p);
char* zx_ENC_WO_is12_Confirm(struct zx_ctx* c, struct zx_is12_Confirm_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_is12_Confirm(struct zx_ctx* c, struct zx_is12_Confirm_s* x);
struct zx_str* zx_EASY_ENC_WO_is12_Confirm(struct zx_ctx* c, struct zx_is12_Confirm_s* x);

struct zx_is12_Confirm_s {
  ZX_ELEM_EXT
  zx_is12_Confirm_EXT
  struct zx_is12_Help_s* Help;	/* {0,1} nada */
  struct zx_elem_s* Hint;	/* {0,1} xs:string */
  struct zx_elem_s* Label;	/* {0,1} xs:normalizedString */
  struct zx_elem_s* Value;	/* {0,1} xs:normalizedString */
  struct zx_str* name;	/* {1,1} attribute xs:ID */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_is12_Confirm_GET_name(struct zx_is12_Confirm_s* x);

struct zx_is12_Help_s* zx_is12_Confirm_GET_Help(struct zx_is12_Confirm_s* x, int n);
struct zx_elem_s* zx_is12_Confirm_GET_Hint(struct zx_is12_Confirm_s* x, int n);
struct zx_elem_s* zx_is12_Confirm_GET_Label(struct zx_is12_Confirm_s* x, int n);
struct zx_elem_s* zx_is12_Confirm_GET_Value(struct zx_is12_Confirm_s* x, int n);

int zx_is12_Confirm_NUM_Help(struct zx_is12_Confirm_s* x);
int zx_is12_Confirm_NUM_Hint(struct zx_is12_Confirm_s* x);
int zx_is12_Confirm_NUM_Label(struct zx_is12_Confirm_s* x);
int zx_is12_Confirm_NUM_Value(struct zx_is12_Confirm_s* x);

struct zx_is12_Help_s* zx_is12_Confirm_POP_Help(struct zx_is12_Confirm_s* x);
struct zx_elem_s* zx_is12_Confirm_POP_Hint(struct zx_is12_Confirm_s* x);
struct zx_elem_s* zx_is12_Confirm_POP_Label(struct zx_is12_Confirm_s* x);
struct zx_elem_s* zx_is12_Confirm_POP_Value(struct zx_is12_Confirm_s* x);

void zx_is12_Confirm_PUSH_Help(struct zx_is12_Confirm_s* x, struct zx_is12_Help_s* y);
void zx_is12_Confirm_PUSH_Hint(struct zx_is12_Confirm_s* x, struct zx_elem_s* y);
void zx_is12_Confirm_PUSH_Label(struct zx_is12_Confirm_s* x, struct zx_elem_s* y);
void zx_is12_Confirm_PUSH_Value(struct zx_is12_Confirm_s* x, struct zx_elem_s* y);

void zx_is12_Confirm_PUT_name(struct zx_is12_Confirm_s* x, struct zx_str* y);

void zx_is12_Confirm_PUT_Help(struct zx_is12_Confirm_s* x, int n, struct zx_is12_Help_s* y);
void zx_is12_Confirm_PUT_Hint(struct zx_is12_Confirm_s* x, int n, struct zx_elem_s* y);
void zx_is12_Confirm_PUT_Label(struct zx_is12_Confirm_s* x, int n, struct zx_elem_s* y);
void zx_is12_Confirm_PUT_Value(struct zx_is12_Confirm_s* x, int n, struct zx_elem_s* y);

void zx_is12_Confirm_ADD_Help(struct zx_is12_Confirm_s* x, int n, struct zx_is12_Help_s* z);
void zx_is12_Confirm_ADD_Hint(struct zx_is12_Confirm_s* x, int n, struct zx_elem_s* z);
void zx_is12_Confirm_ADD_Label(struct zx_is12_Confirm_s* x, int n, struct zx_elem_s* z);
void zx_is12_Confirm_ADD_Value(struct zx_is12_Confirm_s* x, int n, struct zx_elem_s* z);

void zx_is12_Confirm_DEL_Help(struct zx_is12_Confirm_s* x, int n);
void zx_is12_Confirm_DEL_Hint(struct zx_is12_Confirm_s* x, int n);
void zx_is12_Confirm_DEL_Label(struct zx_is12_Confirm_s* x, int n);
void zx_is12_Confirm_DEL_Value(struct zx_is12_Confirm_s* x, int n);

void zx_is12_Confirm_REV_Help(struct zx_is12_Confirm_s* x);
void zx_is12_Confirm_REV_Hint(struct zx_is12_Confirm_s* x);
void zx_is12_Confirm_REV_Label(struct zx_is12_Confirm_s* x);
void zx_is12_Confirm_REV_Value(struct zx_is12_Confirm_s* x);

#endif
/* -------------------------- is12_EncryptedResourceID -------------------------- */
/* refby( ) */
#ifndef zx_is12_EncryptedResourceID_EXT
#define zx_is12_EncryptedResourceID_EXT
#endif

struct zx_is12_EncryptedResourceID_s* zx_DEC_is12_EncryptedResourceID(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_is12_EncryptedResourceID_s* zx_NEW_is12_EncryptedResourceID(struct zx_ctx* c);
void zx_FREE_is12_EncryptedResourceID(struct zx_ctx* c, struct zx_is12_EncryptedResourceID_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_is12_EncryptedResourceID_s* zx_DEEP_CLONE_is12_EncryptedResourceID(struct zx_ctx* c, struct zx_is12_EncryptedResourceID_s* x, int dup_strs);
void zx_DUP_STRS_is12_EncryptedResourceID(struct zx_ctx* c, struct zx_is12_EncryptedResourceID_s* x);
int zx_WALK_SO_is12_EncryptedResourceID(struct zx_ctx* c, struct zx_is12_EncryptedResourceID_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_is12_EncryptedResourceID(struct zx_ctx* c, struct zx_is12_EncryptedResourceID_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_is12_EncryptedResourceID(struct zx_ctx* c, struct zx_is12_EncryptedResourceID_s* x);
int zx_LEN_WO_is12_EncryptedResourceID(struct zx_ctx* c, struct zx_is12_EncryptedResourceID_s* x);
char* zx_ENC_SO_is12_EncryptedResourceID(struct zx_ctx* c, struct zx_is12_EncryptedResourceID_s* x, char* p);
char* zx_ENC_WO_is12_EncryptedResourceID(struct zx_ctx* c, struct zx_is12_EncryptedResourceID_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_is12_EncryptedResourceID(struct zx_ctx* c, struct zx_is12_EncryptedResourceID_s* x);
struct zx_str* zx_EASY_ENC_WO_is12_EncryptedResourceID(struct zx_ctx* c, struct zx_is12_EncryptedResourceID_s* x);

struct zx_is12_EncryptedResourceID_s {
  ZX_ELEM_EXT
  zx_is12_EncryptedResourceID_EXT
  struct zx_xenc_EncryptedData_s* EncryptedData;	/* {1,1} nada */
  struct zx_xenc_EncryptedKey_s* EncryptedKey;	/* {1,1} nada */
};

#ifdef ZX_ENA_GETPUT

struct zx_xenc_EncryptedData_s* zx_is12_EncryptedResourceID_GET_EncryptedData(struct zx_is12_EncryptedResourceID_s* x, int n);
struct zx_xenc_EncryptedKey_s* zx_is12_EncryptedResourceID_GET_EncryptedKey(struct zx_is12_EncryptedResourceID_s* x, int n);

int zx_is12_EncryptedResourceID_NUM_EncryptedData(struct zx_is12_EncryptedResourceID_s* x);
int zx_is12_EncryptedResourceID_NUM_EncryptedKey(struct zx_is12_EncryptedResourceID_s* x);

struct zx_xenc_EncryptedData_s* zx_is12_EncryptedResourceID_POP_EncryptedData(struct zx_is12_EncryptedResourceID_s* x);
struct zx_xenc_EncryptedKey_s* zx_is12_EncryptedResourceID_POP_EncryptedKey(struct zx_is12_EncryptedResourceID_s* x);

void zx_is12_EncryptedResourceID_PUSH_EncryptedData(struct zx_is12_EncryptedResourceID_s* x, struct zx_xenc_EncryptedData_s* y);
void zx_is12_EncryptedResourceID_PUSH_EncryptedKey(struct zx_is12_EncryptedResourceID_s* x, struct zx_xenc_EncryptedKey_s* y);


void zx_is12_EncryptedResourceID_PUT_EncryptedData(struct zx_is12_EncryptedResourceID_s* x, int n, struct zx_xenc_EncryptedData_s* y);
void zx_is12_EncryptedResourceID_PUT_EncryptedKey(struct zx_is12_EncryptedResourceID_s* x, int n, struct zx_xenc_EncryptedKey_s* y);

void zx_is12_EncryptedResourceID_ADD_EncryptedData(struct zx_is12_EncryptedResourceID_s* x, int n, struct zx_xenc_EncryptedData_s* z);
void zx_is12_EncryptedResourceID_ADD_EncryptedKey(struct zx_is12_EncryptedResourceID_s* x, int n, struct zx_xenc_EncryptedKey_s* z);

void zx_is12_EncryptedResourceID_DEL_EncryptedData(struct zx_is12_EncryptedResourceID_s* x, int n);
void zx_is12_EncryptedResourceID_DEL_EncryptedKey(struct zx_is12_EncryptedResourceID_s* x, int n);

void zx_is12_EncryptedResourceID_REV_EncryptedData(struct zx_is12_EncryptedResourceID_s* x);
void zx_is12_EncryptedResourceID_REV_EncryptedKey(struct zx_is12_EncryptedResourceID_s* x);

#endif
/* -------------------------- is12_Extension -------------------------- */
/* refby( ) */
#ifndef zx_is12_Extension_EXT
#define zx_is12_Extension_EXT
#endif

struct zx_is12_Extension_s* zx_DEC_is12_Extension(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_is12_Extension_s* zx_NEW_is12_Extension(struct zx_ctx* c);
void zx_FREE_is12_Extension(struct zx_ctx* c, struct zx_is12_Extension_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_is12_Extension_s* zx_DEEP_CLONE_is12_Extension(struct zx_ctx* c, struct zx_is12_Extension_s* x, int dup_strs);
void zx_DUP_STRS_is12_Extension(struct zx_ctx* c, struct zx_is12_Extension_s* x);
int zx_WALK_SO_is12_Extension(struct zx_ctx* c, struct zx_is12_Extension_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_is12_Extension(struct zx_ctx* c, struct zx_is12_Extension_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_is12_Extension(struct zx_ctx* c, struct zx_is12_Extension_s* x);
int zx_LEN_WO_is12_Extension(struct zx_ctx* c, struct zx_is12_Extension_s* x);
char* zx_ENC_SO_is12_Extension(struct zx_ctx* c, struct zx_is12_Extension_s* x, char* p);
char* zx_ENC_WO_is12_Extension(struct zx_ctx* c, struct zx_is12_Extension_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_is12_Extension(struct zx_ctx* c, struct zx_is12_Extension_s* x);
struct zx_str* zx_EASY_ENC_WO_is12_Extension(struct zx_ctx* c, struct zx_is12_Extension_s* x);

struct zx_is12_Extension_s {
  ZX_ELEM_EXT
  zx_is12_Extension_EXT
};

#ifdef ZX_ENA_GETPUT










#endif
/* -------------------------- is12_Help -------------------------- */
/* refby( zx_is12_Inquiry_s zx_is12_Select_s zx_is12_Text_s zx_is12_Confirm_s ) */
#ifndef zx_is12_Help_EXT
#define zx_is12_Help_EXT
#endif

struct zx_is12_Help_s* zx_DEC_is12_Help(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_is12_Help_s* zx_NEW_is12_Help(struct zx_ctx* c);
void zx_FREE_is12_Help(struct zx_ctx* c, struct zx_is12_Help_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_is12_Help_s* zx_DEEP_CLONE_is12_Help(struct zx_ctx* c, struct zx_is12_Help_s* x, int dup_strs);
void zx_DUP_STRS_is12_Help(struct zx_ctx* c, struct zx_is12_Help_s* x);
int zx_WALK_SO_is12_Help(struct zx_ctx* c, struct zx_is12_Help_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_is12_Help(struct zx_ctx* c, struct zx_is12_Help_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_is12_Help(struct zx_ctx* c, struct zx_is12_Help_s* x);
int zx_LEN_WO_is12_Help(struct zx_ctx* c, struct zx_is12_Help_s* x);
char* zx_ENC_SO_is12_Help(struct zx_ctx* c, struct zx_is12_Help_s* x, char* p);
char* zx_ENC_WO_is12_Help(struct zx_ctx* c, struct zx_is12_Help_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_is12_Help(struct zx_ctx* c, struct zx_is12_Help_s* x);
struct zx_str* zx_EASY_ENC_WO_is12_Help(struct zx_ctx* c, struct zx_is12_Help_s* x);

struct zx_is12_Help_s {
  ZX_ELEM_EXT
  zx_is12_Help_EXT
  struct zx_str* label;	/* {0,1} attribute xs:string */
  struct zx_str* link;	/* {0,1} attribute xs:anyURI */
  struct zx_str* moreLink;	/* {0,1} attribute xs:anyURI */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_is12_Help_GET_label(struct zx_is12_Help_s* x);
struct zx_str* zx_is12_Help_GET_link(struct zx_is12_Help_s* x);
struct zx_str* zx_is12_Help_GET_moreLink(struct zx_is12_Help_s* x);





void zx_is12_Help_PUT_label(struct zx_is12_Help_s* x, struct zx_str* y);
void zx_is12_Help_PUT_link(struct zx_is12_Help_s* x, struct zx_str* y);
void zx_is12_Help_PUT_moreLink(struct zx_is12_Help_s* x, struct zx_str* y);





#endif
/* -------------------------- is12_Inquiry -------------------------- */
/* refby( zx_is12_InteractionRequest_s zx_is12_InteractionStatement_s ) */
#ifndef zx_is12_Inquiry_EXT
#define zx_is12_Inquiry_EXT
#endif

struct zx_is12_Inquiry_s* zx_DEC_is12_Inquiry(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_is12_Inquiry_s* zx_NEW_is12_Inquiry(struct zx_ctx* c);
void zx_FREE_is12_Inquiry(struct zx_ctx* c, struct zx_is12_Inquiry_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_is12_Inquiry_s* zx_DEEP_CLONE_is12_Inquiry(struct zx_ctx* c, struct zx_is12_Inquiry_s* x, int dup_strs);
void zx_DUP_STRS_is12_Inquiry(struct zx_ctx* c, struct zx_is12_Inquiry_s* x);
int zx_WALK_SO_is12_Inquiry(struct zx_ctx* c, struct zx_is12_Inquiry_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_is12_Inquiry(struct zx_ctx* c, struct zx_is12_Inquiry_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_is12_Inquiry(struct zx_ctx* c, struct zx_is12_Inquiry_s* x);
int zx_LEN_WO_is12_Inquiry(struct zx_ctx* c, struct zx_is12_Inquiry_s* x);
char* zx_ENC_SO_is12_Inquiry(struct zx_ctx* c, struct zx_is12_Inquiry_s* x, char* p);
char* zx_ENC_WO_is12_Inquiry(struct zx_ctx* c, struct zx_is12_Inquiry_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_is12_Inquiry(struct zx_ctx* c, struct zx_is12_Inquiry_s* x);
struct zx_str* zx_EASY_ENC_WO_is12_Inquiry(struct zx_ctx* c, struct zx_is12_Inquiry_s* x);

struct zx_is12_Inquiry_s {
  ZX_ELEM_EXT
  zx_is12_Inquiry_EXT
  struct zx_is12_Help_s* Help;	/* {0,1} nada */
  struct zx_is12_Select_s* Select;	/* {0,-1} nada */
  struct zx_is12_Confirm_s* Confirm;	/* {0,-1}  */
  struct zx_is12_Text_s* Text;	/* {0,-1} nada */
  struct zx_str* id;	/* {0,1} attribute xs:ID */
  struct zx_str* title;	/* {0,1} attribute xs:string */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_is12_Inquiry_GET_id(struct zx_is12_Inquiry_s* x);
struct zx_str* zx_is12_Inquiry_GET_title(struct zx_is12_Inquiry_s* x);

struct zx_is12_Help_s* zx_is12_Inquiry_GET_Help(struct zx_is12_Inquiry_s* x, int n);
struct zx_is12_Select_s* zx_is12_Inquiry_GET_Select(struct zx_is12_Inquiry_s* x, int n);
struct zx_is12_Confirm_s* zx_is12_Inquiry_GET_Confirm(struct zx_is12_Inquiry_s* x, int n);
struct zx_is12_Text_s* zx_is12_Inquiry_GET_Text(struct zx_is12_Inquiry_s* x, int n);

int zx_is12_Inquiry_NUM_Help(struct zx_is12_Inquiry_s* x);
int zx_is12_Inquiry_NUM_Select(struct zx_is12_Inquiry_s* x);
int zx_is12_Inquiry_NUM_Confirm(struct zx_is12_Inquiry_s* x);
int zx_is12_Inquiry_NUM_Text(struct zx_is12_Inquiry_s* x);

struct zx_is12_Help_s* zx_is12_Inquiry_POP_Help(struct zx_is12_Inquiry_s* x);
struct zx_is12_Select_s* zx_is12_Inquiry_POP_Select(struct zx_is12_Inquiry_s* x);
struct zx_is12_Confirm_s* zx_is12_Inquiry_POP_Confirm(struct zx_is12_Inquiry_s* x);
struct zx_is12_Text_s* zx_is12_Inquiry_POP_Text(struct zx_is12_Inquiry_s* x);

void zx_is12_Inquiry_PUSH_Help(struct zx_is12_Inquiry_s* x, struct zx_is12_Help_s* y);
void zx_is12_Inquiry_PUSH_Select(struct zx_is12_Inquiry_s* x, struct zx_is12_Select_s* y);
void zx_is12_Inquiry_PUSH_Confirm(struct zx_is12_Inquiry_s* x, struct zx_is12_Confirm_s* y);
void zx_is12_Inquiry_PUSH_Text(struct zx_is12_Inquiry_s* x, struct zx_is12_Text_s* y);

void zx_is12_Inquiry_PUT_id(struct zx_is12_Inquiry_s* x, struct zx_str* y);
void zx_is12_Inquiry_PUT_title(struct zx_is12_Inquiry_s* x, struct zx_str* y);

void zx_is12_Inquiry_PUT_Help(struct zx_is12_Inquiry_s* x, int n, struct zx_is12_Help_s* y);
void zx_is12_Inquiry_PUT_Select(struct zx_is12_Inquiry_s* x, int n, struct zx_is12_Select_s* y);
void zx_is12_Inquiry_PUT_Confirm(struct zx_is12_Inquiry_s* x, int n, struct zx_is12_Confirm_s* y);
void zx_is12_Inquiry_PUT_Text(struct zx_is12_Inquiry_s* x, int n, struct zx_is12_Text_s* y);

void zx_is12_Inquiry_ADD_Help(struct zx_is12_Inquiry_s* x, int n, struct zx_is12_Help_s* z);
void zx_is12_Inquiry_ADD_Select(struct zx_is12_Inquiry_s* x, int n, struct zx_is12_Select_s* z);
void zx_is12_Inquiry_ADD_Confirm(struct zx_is12_Inquiry_s* x, int n, struct zx_is12_Confirm_s* z);
void zx_is12_Inquiry_ADD_Text(struct zx_is12_Inquiry_s* x, int n, struct zx_is12_Text_s* z);

void zx_is12_Inquiry_DEL_Help(struct zx_is12_Inquiry_s* x, int n);
void zx_is12_Inquiry_DEL_Select(struct zx_is12_Inquiry_s* x, int n);
void zx_is12_Inquiry_DEL_Confirm(struct zx_is12_Inquiry_s* x, int n);
void zx_is12_Inquiry_DEL_Text(struct zx_is12_Inquiry_s* x, int n);

void zx_is12_Inquiry_REV_Help(struct zx_is12_Inquiry_s* x);
void zx_is12_Inquiry_REV_Select(struct zx_is12_Inquiry_s* x);
void zx_is12_Inquiry_REV_Confirm(struct zx_is12_Inquiry_s* x);
void zx_is12_Inquiry_REV_Text(struct zx_is12_Inquiry_s* x);

#endif
/* -------------------------- is12_InteractionRequest -------------------------- */
/* refby( ) */
#ifndef zx_is12_InteractionRequest_EXT
#define zx_is12_InteractionRequest_EXT
#endif

struct zx_is12_InteractionRequest_s* zx_DEC_is12_InteractionRequest(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_is12_InteractionRequest_s* zx_NEW_is12_InteractionRequest(struct zx_ctx* c);
void zx_FREE_is12_InteractionRequest(struct zx_ctx* c, struct zx_is12_InteractionRequest_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_is12_InteractionRequest_s* zx_DEEP_CLONE_is12_InteractionRequest(struct zx_ctx* c, struct zx_is12_InteractionRequest_s* x, int dup_strs);
void zx_DUP_STRS_is12_InteractionRequest(struct zx_ctx* c, struct zx_is12_InteractionRequest_s* x);
int zx_WALK_SO_is12_InteractionRequest(struct zx_ctx* c, struct zx_is12_InteractionRequest_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_is12_InteractionRequest(struct zx_ctx* c, struct zx_is12_InteractionRequest_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_is12_InteractionRequest(struct zx_ctx* c, struct zx_is12_InteractionRequest_s* x);
int zx_LEN_WO_is12_InteractionRequest(struct zx_ctx* c, struct zx_is12_InteractionRequest_s* x);
char* zx_ENC_SO_is12_InteractionRequest(struct zx_ctx* c, struct zx_is12_InteractionRequest_s* x, char* p);
char* zx_ENC_WO_is12_InteractionRequest(struct zx_ctx* c, struct zx_is12_InteractionRequest_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_is12_InteractionRequest(struct zx_ctx* c, struct zx_is12_InteractionRequest_s* x);
struct zx_str* zx_EASY_ENC_WO_is12_InteractionRequest(struct zx_ctx* c, struct zx_is12_InteractionRequest_s* x);

struct zx_is12_InteractionRequest_s {
  ZX_ELEM_EXT
  zx_is12_InteractionRequest_EXT
  struct zx_is12_Inquiry_s* Inquiry;	/* {1,-1} nada */
  struct zx_ds_KeyInfo_s* KeyInfo;	/* {0,1} nada */
  struct zx_str* id;	/* {0,1} attribute xs:ID */
  struct zx_str* language;	/* {0,1} attribute xs:NMTOKENS */
  struct zx_str* maxInteractTime;	/* {0,1} attribute xs:integer */
  struct zx_str* signed_is_c_keyword;	/* {0,1} attribute xs:token */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_is12_InteractionRequest_GET_id(struct zx_is12_InteractionRequest_s* x);
struct zx_str* zx_is12_InteractionRequest_GET_language(struct zx_is12_InteractionRequest_s* x);
struct zx_str* zx_is12_InteractionRequest_GET_maxInteractTime(struct zx_is12_InteractionRequest_s* x);
struct zx_str* zx_is12_InteractionRequest_GET_signed_is_c_keyword(struct zx_is12_InteractionRequest_s* x);

struct zx_is12_Inquiry_s* zx_is12_InteractionRequest_GET_Inquiry(struct zx_is12_InteractionRequest_s* x, int n);
struct zx_ds_KeyInfo_s* zx_is12_InteractionRequest_GET_KeyInfo(struct zx_is12_InteractionRequest_s* x, int n);

int zx_is12_InteractionRequest_NUM_Inquiry(struct zx_is12_InteractionRequest_s* x);
int zx_is12_InteractionRequest_NUM_KeyInfo(struct zx_is12_InteractionRequest_s* x);

struct zx_is12_Inquiry_s* zx_is12_InteractionRequest_POP_Inquiry(struct zx_is12_InteractionRequest_s* x);
struct zx_ds_KeyInfo_s* zx_is12_InteractionRequest_POP_KeyInfo(struct zx_is12_InteractionRequest_s* x);

void zx_is12_InteractionRequest_PUSH_Inquiry(struct zx_is12_InteractionRequest_s* x, struct zx_is12_Inquiry_s* y);
void zx_is12_InteractionRequest_PUSH_KeyInfo(struct zx_is12_InteractionRequest_s* x, struct zx_ds_KeyInfo_s* y);

void zx_is12_InteractionRequest_PUT_id(struct zx_is12_InteractionRequest_s* x, struct zx_str* y);
void zx_is12_InteractionRequest_PUT_language(struct zx_is12_InteractionRequest_s* x, struct zx_str* y);
void zx_is12_InteractionRequest_PUT_maxInteractTime(struct zx_is12_InteractionRequest_s* x, struct zx_str* y);
void zx_is12_InteractionRequest_PUT_signed_is_c_keyword(struct zx_is12_InteractionRequest_s* x, struct zx_str* y);

void zx_is12_InteractionRequest_PUT_Inquiry(struct zx_is12_InteractionRequest_s* x, int n, struct zx_is12_Inquiry_s* y);
void zx_is12_InteractionRequest_PUT_KeyInfo(struct zx_is12_InteractionRequest_s* x, int n, struct zx_ds_KeyInfo_s* y);

void zx_is12_InteractionRequest_ADD_Inquiry(struct zx_is12_InteractionRequest_s* x, int n, struct zx_is12_Inquiry_s* z);
void zx_is12_InteractionRequest_ADD_KeyInfo(struct zx_is12_InteractionRequest_s* x, int n, struct zx_ds_KeyInfo_s* z);

void zx_is12_InteractionRequest_DEL_Inquiry(struct zx_is12_InteractionRequest_s* x, int n);
void zx_is12_InteractionRequest_DEL_KeyInfo(struct zx_is12_InteractionRequest_s* x, int n);

void zx_is12_InteractionRequest_REV_Inquiry(struct zx_is12_InteractionRequest_s* x);
void zx_is12_InteractionRequest_REV_KeyInfo(struct zx_is12_InteractionRequest_s* x);

#endif
/* -------------------------- is12_InteractionResponse -------------------------- */
/* refby( ) */
#ifndef zx_is12_InteractionResponse_EXT
#define zx_is12_InteractionResponse_EXT
#endif

struct zx_is12_InteractionResponse_s* zx_DEC_is12_InteractionResponse(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_is12_InteractionResponse_s* zx_NEW_is12_InteractionResponse(struct zx_ctx* c);
void zx_FREE_is12_InteractionResponse(struct zx_ctx* c, struct zx_is12_InteractionResponse_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_is12_InteractionResponse_s* zx_DEEP_CLONE_is12_InteractionResponse(struct zx_ctx* c, struct zx_is12_InteractionResponse_s* x, int dup_strs);
void zx_DUP_STRS_is12_InteractionResponse(struct zx_ctx* c, struct zx_is12_InteractionResponse_s* x);
int zx_WALK_SO_is12_InteractionResponse(struct zx_ctx* c, struct zx_is12_InteractionResponse_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_is12_InteractionResponse(struct zx_ctx* c, struct zx_is12_InteractionResponse_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_is12_InteractionResponse(struct zx_ctx* c, struct zx_is12_InteractionResponse_s* x);
int zx_LEN_WO_is12_InteractionResponse(struct zx_ctx* c, struct zx_is12_InteractionResponse_s* x);
char* zx_ENC_SO_is12_InteractionResponse(struct zx_ctx* c, struct zx_is12_InteractionResponse_s* x, char* p);
char* zx_ENC_WO_is12_InteractionResponse(struct zx_ctx* c, struct zx_is12_InteractionResponse_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_is12_InteractionResponse(struct zx_ctx* c, struct zx_is12_InteractionResponse_s* x);
struct zx_str* zx_EASY_ENC_WO_is12_InteractionResponse(struct zx_ctx* c, struct zx_is12_InteractionResponse_s* x);

struct zx_is12_InteractionResponse_s {
  ZX_ELEM_EXT
  zx_is12_InteractionResponse_EXT
  struct zx_is12_Status_s* Status;	/* {1,1} nada */
  struct zx_is12_InteractionStatement_s* InteractionStatement;	/* {0,-1}  */
  struct zx_is12_Parameter_s* Parameter;	/* {0,-1}  */
};

#ifdef ZX_ENA_GETPUT

struct zx_is12_Status_s* zx_is12_InteractionResponse_GET_Status(struct zx_is12_InteractionResponse_s* x, int n);
struct zx_is12_InteractionStatement_s* zx_is12_InteractionResponse_GET_InteractionStatement(struct zx_is12_InteractionResponse_s* x, int n);
struct zx_is12_Parameter_s* zx_is12_InteractionResponse_GET_Parameter(struct zx_is12_InteractionResponse_s* x, int n);

int zx_is12_InteractionResponse_NUM_Status(struct zx_is12_InteractionResponse_s* x);
int zx_is12_InteractionResponse_NUM_InteractionStatement(struct zx_is12_InteractionResponse_s* x);
int zx_is12_InteractionResponse_NUM_Parameter(struct zx_is12_InteractionResponse_s* x);

struct zx_is12_Status_s* zx_is12_InteractionResponse_POP_Status(struct zx_is12_InteractionResponse_s* x);
struct zx_is12_InteractionStatement_s* zx_is12_InteractionResponse_POP_InteractionStatement(struct zx_is12_InteractionResponse_s* x);
struct zx_is12_Parameter_s* zx_is12_InteractionResponse_POP_Parameter(struct zx_is12_InteractionResponse_s* x);

void zx_is12_InteractionResponse_PUSH_Status(struct zx_is12_InteractionResponse_s* x, struct zx_is12_Status_s* y);
void zx_is12_InteractionResponse_PUSH_InteractionStatement(struct zx_is12_InteractionResponse_s* x, struct zx_is12_InteractionStatement_s* y);
void zx_is12_InteractionResponse_PUSH_Parameter(struct zx_is12_InteractionResponse_s* x, struct zx_is12_Parameter_s* y);


void zx_is12_InteractionResponse_PUT_Status(struct zx_is12_InteractionResponse_s* x, int n, struct zx_is12_Status_s* y);
void zx_is12_InteractionResponse_PUT_InteractionStatement(struct zx_is12_InteractionResponse_s* x, int n, struct zx_is12_InteractionStatement_s* y);
void zx_is12_InteractionResponse_PUT_Parameter(struct zx_is12_InteractionResponse_s* x, int n, struct zx_is12_Parameter_s* y);

void zx_is12_InteractionResponse_ADD_Status(struct zx_is12_InteractionResponse_s* x, int n, struct zx_is12_Status_s* z);
void zx_is12_InteractionResponse_ADD_InteractionStatement(struct zx_is12_InteractionResponse_s* x, int n, struct zx_is12_InteractionStatement_s* z);
void zx_is12_InteractionResponse_ADD_Parameter(struct zx_is12_InteractionResponse_s* x, int n, struct zx_is12_Parameter_s* z);

void zx_is12_InteractionResponse_DEL_Status(struct zx_is12_InteractionResponse_s* x, int n);
void zx_is12_InteractionResponse_DEL_InteractionStatement(struct zx_is12_InteractionResponse_s* x, int n);
void zx_is12_InteractionResponse_DEL_Parameter(struct zx_is12_InteractionResponse_s* x, int n);

void zx_is12_InteractionResponse_REV_Status(struct zx_is12_InteractionResponse_s* x);
void zx_is12_InteractionResponse_REV_InteractionStatement(struct zx_is12_InteractionResponse_s* x);
void zx_is12_InteractionResponse_REV_Parameter(struct zx_is12_InteractionResponse_s* x);

#endif
/* -------------------------- is12_InteractionService -------------------------- */
/* refby( zx_is12_UserInteraction_s ) */
#ifndef zx_is12_InteractionService_EXT
#define zx_is12_InteractionService_EXT
#endif

struct zx_is12_InteractionService_s* zx_DEC_is12_InteractionService(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_is12_InteractionService_s* zx_NEW_is12_InteractionService(struct zx_ctx* c);
void zx_FREE_is12_InteractionService(struct zx_ctx* c, struct zx_is12_InteractionService_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_is12_InteractionService_s* zx_DEEP_CLONE_is12_InteractionService(struct zx_ctx* c, struct zx_is12_InteractionService_s* x, int dup_strs);
void zx_DUP_STRS_is12_InteractionService(struct zx_ctx* c, struct zx_is12_InteractionService_s* x);
int zx_WALK_SO_is12_InteractionService(struct zx_ctx* c, struct zx_is12_InteractionService_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_is12_InteractionService(struct zx_ctx* c, struct zx_is12_InteractionService_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_is12_InteractionService(struct zx_ctx* c, struct zx_is12_InteractionService_s* x);
int zx_LEN_WO_is12_InteractionService(struct zx_ctx* c, struct zx_is12_InteractionService_s* x);
char* zx_ENC_SO_is12_InteractionService(struct zx_ctx* c, struct zx_is12_InteractionService_s* x, char* p);
char* zx_ENC_WO_is12_InteractionService(struct zx_ctx* c, struct zx_is12_InteractionService_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_is12_InteractionService(struct zx_ctx* c, struct zx_is12_InteractionService_s* x);
struct zx_str* zx_EASY_ENC_WO_is12_InteractionService(struct zx_ctx* c, struct zx_is12_InteractionService_s* x);

struct zx_is12_InteractionService_s {
  ZX_ELEM_EXT
  zx_is12_InteractionService_EXT
  struct zx_di12_ResourceID_s* ResourceID;	/* {0,1} nada */
  struct zx_di12_EncryptedResourceID_s* EncryptedResourceID;	/* {0,1} nada */
  struct zx_di12_ServiceInstance_s* ServiceInstance;	/* {1,1}  */
  struct zx_di12_Options_s* Options;	/* {0,1}  */
  struct zx_elem_s* Abstract;	/* {0,1} xs:string */
  struct zx_str* entryID;	/* {0,1} attribute xs:string */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_is12_InteractionService_GET_entryID(struct zx_is12_InteractionService_s* x);

struct zx_di12_ResourceID_s* zx_is12_InteractionService_GET_ResourceID(struct zx_is12_InteractionService_s* x, int n);
struct zx_di12_EncryptedResourceID_s* zx_is12_InteractionService_GET_EncryptedResourceID(struct zx_is12_InteractionService_s* x, int n);
struct zx_di12_ServiceInstance_s* zx_is12_InteractionService_GET_ServiceInstance(struct zx_is12_InteractionService_s* x, int n);
struct zx_di12_Options_s* zx_is12_InteractionService_GET_Options(struct zx_is12_InteractionService_s* x, int n);
struct zx_elem_s* zx_is12_InteractionService_GET_Abstract(struct zx_is12_InteractionService_s* x, int n);

int zx_is12_InteractionService_NUM_ResourceID(struct zx_is12_InteractionService_s* x);
int zx_is12_InteractionService_NUM_EncryptedResourceID(struct zx_is12_InteractionService_s* x);
int zx_is12_InteractionService_NUM_ServiceInstance(struct zx_is12_InteractionService_s* x);
int zx_is12_InteractionService_NUM_Options(struct zx_is12_InteractionService_s* x);
int zx_is12_InteractionService_NUM_Abstract(struct zx_is12_InteractionService_s* x);

struct zx_di12_ResourceID_s* zx_is12_InteractionService_POP_ResourceID(struct zx_is12_InteractionService_s* x);
struct zx_di12_EncryptedResourceID_s* zx_is12_InteractionService_POP_EncryptedResourceID(struct zx_is12_InteractionService_s* x);
struct zx_di12_ServiceInstance_s* zx_is12_InteractionService_POP_ServiceInstance(struct zx_is12_InteractionService_s* x);
struct zx_di12_Options_s* zx_is12_InteractionService_POP_Options(struct zx_is12_InteractionService_s* x);
struct zx_elem_s* zx_is12_InteractionService_POP_Abstract(struct zx_is12_InteractionService_s* x);

void zx_is12_InteractionService_PUSH_ResourceID(struct zx_is12_InteractionService_s* x, struct zx_di12_ResourceID_s* y);
void zx_is12_InteractionService_PUSH_EncryptedResourceID(struct zx_is12_InteractionService_s* x, struct zx_di12_EncryptedResourceID_s* y);
void zx_is12_InteractionService_PUSH_ServiceInstance(struct zx_is12_InteractionService_s* x, struct zx_di12_ServiceInstance_s* y);
void zx_is12_InteractionService_PUSH_Options(struct zx_is12_InteractionService_s* x, struct zx_di12_Options_s* y);
void zx_is12_InteractionService_PUSH_Abstract(struct zx_is12_InteractionService_s* x, struct zx_elem_s* y);

void zx_is12_InteractionService_PUT_entryID(struct zx_is12_InteractionService_s* x, struct zx_str* y);

void zx_is12_InteractionService_PUT_ResourceID(struct zx_is12_InteractionService_s* x, int n, struct zx_di12_ResourceID_s* y);
void zx_is12_InteractionService_PUT_EncryptedResourceID(struct zx_is12_InteractionService_s* x, int n, struct zx_di12_EncryptedResourceID_s* y);
void zx_is12_InteractionService_PUT_ServiceInstance(struct zx_is12_InteractionService_s* x, int n, struct zx_di12_ServiceInstance_s* y);
void zx_is12_InteractionService_PUT_Options(struct zx_is12_InteractionService_s* x, int n, struct zx_di12_Options_s* y);
void zx_is12_InteractionService_PUT_Abstract(struct zx_is12_InteractionService_s* x, int n, struct zx_elem_s* y);

void zx_is12_InteractionService_ADD_ResourceID(struct zx_is12_InteractionService_s* x, int n, struct zx_di12_ResourceID_s* z);
void zx_is12_InteractionService_ADD_EncryptedResourceID(struct zx_is12_InteractionService_s* x, int n, struct zx_di12_EncryptedResourceID_s* z);
void zx_is12_InteractionService_ADD_ServiceInstance(struct zx_is12_InteractionService_s* x, int n, struct zx_di12_ServiceInstance_s* z);
void zx_is12_InteractionService_ADD_Options(struct zx_is12_InteractionService_s* x, int n, struct zx_di12_Options_s* z);
void zx_is12_InteractionService_ADD_Abstract(struct zx_is12_InteractionService_s* x, int n, struct zx_elem_s* z);

void zx_is12_InteractionService_DEL_ResourceID(struct zx_is12_InteractionService_s* x, int n);
void zx_is12_InteractionService_DEL_EncryptedResourceID(struct zx_is12_InteractionService_s* x, int n);
void zx_is12_InteractionService_DEL_ServiceInstance(struct zx_is12_InteractionService_s* x, int n);
void zx_is12_InteractionService_DEL_Options(struct zx_is12_InteractionService_s* x, int n);
void zx_is12_InteractionService_DEL_Abstract(struct zx_is12_InteractionService_s* x, int n);

void zx_is12_InteractionService_REV_ResourceID(struct zx_is12_InteractionService_s* x);
void zx_is12_InteractionService_REV_EncryptedResourceID(struct zx_is12_InteractionService_s* x);
void zx_is12_InteractionService_REV_ServiceInstance(struct zx_is12_InteractionService_s* x);
void zx_is12_InteractionService_REV_Options(struct zx_is12_InteractionService_s* x);
void zx_is12_InteractionService_REV_Abstract(struct zx_is12_InteractionService_s* x);

#endif
/* -------------------------- is12_InteractionStatement -------------------------- */
/* refby( zx_is12_InteractionResponse_s ) */
#ifndef zx_is12_InteractionStatement_EXT
#define zx_is12_InteractionStatement_EXT
#endif

struct zx_is12_InteractionStatement_s* zx_DEC_is12_InteractionStatement(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_is12_InteractionStatement_s* zx_NEW_is12_InteractionStatement(struct zx_ctx* c);
void zx_FREE_is12_InteractionStatement(struct zx_ctx* c, struct zx_is12_InteractionStatement_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_is12_InteractionStatement_s* zx_DEEP_CLONE_is12_InteractionStatement(struct zx_ctx* c, struct zx_is12_InteractionStatement_s* x, int dup_strs);
void zx_DUP_STRS_is12_InteractionStatement(struct zx_ctx* c, struct zx_is12_InteractionStatement_s* x);
int zx_WALK_SO_is12_InteractionStatement(struct zx_ctx* c, struct zx_is12_InteractionStatement_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_is12_InteractionStatement(struct zx_ctx* c, struct zx_is12_InteractionStatement_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_is12_InteractionStatement(struct zx_ctx* c, struct zx_is12_InteractionStatement_s* x);
int zx_LEN_WO_is12_InteractionStatement(struct zx_ctx* c, struct zx_is12_InteractionStatement_s* x);
char* zx_ENC_SO_is12_InteractionStatement(struct zx_ctx* c, struct zx_is12_InteractionStatement_s* x, char* p);
char* zx_ENC_WO_is12_InteractionStatement(struct zx_ctx* c, struct zx_is12_InteractionStatement_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_is12_InteractionStatement(struct zx_ctx* c, struct zx_is12_InteractionStatement_s* x);
struct zx_str* zx_EASY_ENC_WO_is12_InteractionStatement(struct zx_ctx* c, struct zx_is12_InteractionStatement_s* x);

struct zx_is12_InteractionStatement_s {
  ZX_ELEM_EXT
  zx_is12_InteractionStatement_EXT
  struct zx_is12_Inquiry_s* Inquiry;	/* {1,-1} nada */
  struct zx_ds_Signature_s* Signature;	/* {1,1} nada */
};

#ifdef ZX_ENA_GETPUT

struct zx_is12_Inquiry_s* zx_is12_InteractionStatement_GET_Inquiry(struct zx_is12_InteractionStatement_s* x, int n);
struct zx_ds_Signature_s* zx_is12_InteractionStatement_GET_Signature(struct zx_is12_InteractionStatement_s* x, int n);

int zx_is12_InteractionStatement_NUM_Inquiry(struct zx_is12_InteractionStatement_s* x);
int zx_is12_InteractionStatement_NUM_Signature(struct zx_is12_InteractionStatement_s* x);

struct zx_is12_Inquiry_s* zx_is12_InteractionStatement_POP_Inquiry(struct zx_is12_InteractionStatement_s* x);
struct zx_ds_Signature_s* zx_is12_InteractionStatement_POP_Signature(struct zx_is12_InteractionStatement_s* x);

void zx_is12_InteractionStatement_PUSH_Inquiry(struct zx_is12_InteractionStatement_s* x, struct zx_is12_Inquiry_s* y);
void zx_is12_InteractionStatement_PUSH_Signature(struct zx_is12_InteractionStatement_s* x, struct zx_ds_Signature_s* y);


void zx_is12_InteractionStatement_PUT_Inquiry(struct zx_is12_InteractionStatement_s* x, int n, struct zx_is12_Inquiry_s* y);
void zx_is12_InteractionStatement_PUT_Signature(struct zx_is12_InteractionStatement_s* x, int n, struct zx_ds_Signature_s* y);

void zx_is12_InteractionStatement_ADD_Inquiry(struct zx_is12_InteractionStatement_s* x, int n, struct zx_is12_Inquiry_s* z);
void zx_is12_InteractionStatement_ADD_Signature(struct zx_is12_InteractionStatement_s* x, int n, struct zx_ds_Signature_s* z);

void zx_is12_InteractionStatement_DEL_Inquiry(struct zx_is12_InteractionStatement_s* x, int n);
void zx_is12_InteractionStatement_DEL_Signature(struct zx_is12_InteractionStatement_s* x, int n);

void zx_is12_InteractionStatement_REV_Inquiry(struct zx_is12_InteractionStatement_s* x);
void zx_is12_InteractionStatement_REV_Signature(struct zx_is12_InteractionStatement_s* x);

#endif
/* -------------------------- is12_Item -------------------------- */
/* refby( zx_is12_Select_s ) */
#ifndef zx_is12_Item_EXT
#define zx_is12_Item_EXT
#endif

struct zx_is12_Item_s* zx_DEC_is12_Item(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_is12_Item_s* zx_NEW_is12_Item(struct zx_ctx* c);
void zx_FREE_is12_Item(struct zx_ctx* c, struct zx_is12_Item_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_is12_Item_s* zx_DEEP_CLONE_is12_Item(struct zx_ctx* c, struct zx_is12_Item_s* x, int dup_strs);
void zx_DUP_STRS_is12_Item(struct zx_ctx* c, struct zx_is12_Item_s* x);
int zx_WALK_SO_is12_Item(struct zx_ctx* c, struct zx_is12_Item_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_is12_Item(struct zx_ctx* c, struct zx_is12_Item_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_is12_Item(struct zx_ctx* c, struct zx_is12_Item_s* x);
int zx_LEN_WO_is12_Item(struct zx_ctx* c, struct zx_is12_Item_s* x);
char* zx_ENC_SO_is12_Item(struct zx_ctx* c, struct zx_is12_Item_s* x, char* p);
char* zx_ENC_WO_is12_Item(struct zx_ctx* c, struct zx_is12_Item_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_is12_Item(struct zx_ctx* c, struct zx_is12_Item_s* x);
struct zx_str* zx_EASY_ENC_WO_is12_Item(struct zx_ctx* c, struct zx_is12_Item_s* x);

struct zx_is12_Item_s {
  ZX_ELEM_EXT
  zx_is12_Item_EXT
  struct zx_elem_s* Hint;	/* {0,1} xs:string */
  struct zx_str* label;	/* {0,1} attribute xs:string */
  struct zx_str* value;	/* {1,1} attribute xs:string */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_is12_Item_GET_label(struct zx_is12_Item_s* x);
struct zx_str* zx_is12_Item_GET_value(struct zx_is12_Item_s* x);

struct zx_elem_s* zx_is12_Item_GET_Hint(struct zx_is12_Item_s* x, int n);

int zx_is12_Item_NUM_Hint(struct zx_is12_Item_s* x);

struct zx_elem_s* zx_is12_Item_POP_Hint(struct zx_is12_Item_s* x);

void zx_is12_Item_PUSH_Hint(struct zx_is12_Item_s* x, struct zx_elem_s* y);

void zx_is12_Item_PUT_label(struct zx_is12_Item_s* x, struct zx_str* y);
void zx_is12_Item_PUT_value(struct zx_is12_Item_s* x, struct zx_str* y);

void zx_is12_Item_PUT_Hint(struct zx_is12_Item_s* x, int n, struct zx_elem_s* y);

void zx_is12_Item_ADD_Hint(struct zx_is12_Item_s* x, int n, struct zx_elem_s* z);

void zx_is12_Item_DEL_Hint(struct zx_is12_Item_s* x, int n);

void zx_is12_Item_REV_Hint(struct zx_is12_Item_s* x);

#endif
/* -------------------------- is12_Parameter -------------------------- */
/* refby( zx_is12_InteractionResponse_s ) */
#ifndef zx_is12_Parameter_EXT
#define zx_is12_Parameter_EXT
#endif

struct zx_is12_Parameter_s* zx_DEC_is12_Parameter(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_is12_Parameter_s* zx_NEW_is12_Parameter(struct zx_ctx* c);
void zx_FREE_is12_Parameter(struct zx_ctx* c, struct zx_is12_Parameter_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_is12_Parameter_s* zx_DEEP_CLONE_is12_Parameter(struct zx_ctx* c, struct zx_is12_Parameter_s* x, int dup_strs);
void zx_DUP_STRS_is12_Parameter(struct zx_ctx* c, struct zx_is12_Parameter_s* x);
int zx_WALK_SO_is12_Parameter(struct zx_ctx* c, struct zx_is12_Parameter_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_is12_Parameter(struct zx_ctx* c, struct zx_is12_Parameter_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_is12_Parameter(struct zx_ctx* c, struct zx_is12_Parameter_s* x);
int zx_LEN_WO_is12_Parameter(struct zx_ctx* c, struct zx_is12_Parameter_s* x);
char* zx_ENC_SO_is12_Parameter(struct zx_ctx* c, struct zx_is12_Parameter_s* x, char* p);
char* zx_ENC_WO_is12_Parameter(struct zx_ctx* c, struct zx_is12_Parameter_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_is12_Parameter(struct zx_ctx* c, struct zx_is12_Parameter_s* x);
struct zx_str* zx_EASY_ENC_WO_is12_Parameter(struct zx_ctx* c, struct zx_is12_Parameter_s* x);

struct zx_is12_Parameter_s {
  ZX_ELEM_EXT
  zx_is12_Parameter_EXT
  struct zx_str* name;	/* {1,1} attribute xs:ID */
  struct zx_str* value;	/* {1,1} attribute xs:string */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_is12_Parameter_GET_name(struct zx_is12_Parameter_s* x);
struct zx_str* zx_is12_Parameter_GET_value(struct zx_is12_Parameter_s* x);





void zx_is12_Parameter_PUT_name(struct zx_is12_Parameter_s* x, struct zx_str* y);
void zx_is12_Parameter_PUT_value(struct zx_is12_Parameter_s* x, struct zx_str* y);





#endif
/* -------------------------- is12_RedirectRequest -------------------------- */
/* refby( ) */
#ifndef zx_is12_RedirectRequest_EXT
#define zx_is12_RedirectRequest_EXT
#endif

struct zx_is12_RedirectRequest_s* zx_DEC_is12_RedirectRequest(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_is12_RedirectRequest_s* zx_NEW_is12_RedirectRequest(struct zx_ctx* c);
void zx_FREE_is12_RedirectRequest(struct zx_ctx* c, struct zx_is12_RedirectRequest_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_is12_RedirectRequest_s* zx_DEEP_CLONE_is12_RedirectRequest(struct zx_ctx* c, struct zx_is12_RedirectRequest_s* x, int dup_strs);
void zx_DUP_STRS_is12_RedirectRequest(struct zx_ctx* c, struct zx_is12_RedirectRequest_s* x);
int zx_WALK_SO_is12_RedirectRequest(struct zx_ctx* c, struct zx_is12_RedirectRequest_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_is12_RedirectRequest(struct zx_ctx* c, struct zx_is12_RedirectRequest_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_is12_RedirectRequest(struct zx_ctx* c, struct zx_is12_RedirectRequest_s* x);
int zx_LEN_WO_is12_RedirectRequest(struct zx_ctx* c, struct zx_is12_RedirectRequest_s* x);
char* zx_ENC_SO_is12_RedirectRequest(struct zx_ctx* c, struct zx_is12_RedirectRequest_s* x, char* p);
char* zx_ENC_WO_is12_RedirectRequest(struct zx_ctx* c, struct zx_is12_RedirectRequest_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_is12_RedirectRequest(struct zx_ctx* c, struct zx_is12_RedirectRequest_s* x);
struct zx_str* zx_EASY_ENC_WO_is12_RedirectRequest(struct zx_ctx* c, struct zx_is12_RedirectRequest_s* x);

struct zx_is12_RedirectRequest_s {
  ZX_ELEM_EXT
  zx_is12_RedirectRequest_EXT
  struct zx_str* redirectURL;	/* {1,1} attribute xs:anyURI */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_is12_RedirectRequest_GET_redirectURL(struct zx_is12_RedirectRequest_s* x);





void zx_is12_RedirectRequest_PUT_redirectURL(struct zx_is12_RedirectRequest_s* x, struct zx_str* y);





#endif
/* -------------------------- is12_ResourceID -------------------------- */
/* refby( ) */
#ifndef zx_is12_ResourceID_EXT
#define zx_is12_ResourceID_EXT
#endif

struct zx_is12_ResourceID_s* zx_DEC_is12_ResourceID(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_is12_ResourceID_s* zx_NEW_is12_ResourceID(struct zx_ctx* c);
void zx_FREE_is12_ResourceID(struct zx_ctx* c, struct zx_is12_ResourceID_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_is12_ResourceID_s* zx_DEEP_CLONE_is12_ResourceID(struct zx_ctx* c, struct zx_is12_ResourceID_s* x, int dup_strs);
void zx_DUP_STRS_is12_ResourceID(struct zx_ctx* c, struct zx_is12_ResourceID_s* x);
int zx_WALK_SO_is12_ResourceID(struct zx_ctx* c, struct zx_is12_ResourceID_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_is12_ResourceID(struct zx_ctx* c, struct zx_is12_ResourceID_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_is12_ResourceID(struct zx_ctx* c, struct zx_is12_ResourceID_s* x);
int zx_LEN_WO_is12_ResourceID(struct zx_ctx* c, struct zx_is12_ResourceID_s* x);
char* zx_ENC_SO_is12_ResourceID(struct zx_ctx* c, struct zx_is12_ResourceID_s* x, char* p);
char* zx_ENC_WO_is12_ResourceID(struct zx_ctx* c, struct zx_is12_ResourceID_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_is12_ResourceID(struct zx_ctx* c, struct zx_is12_ResourceID_s* x);
struct zx_str* zx_EASY_ENC_WO_is12_ResourceID(struct zx_ctx* c, struct zx_is12_ResourceID_s* x);

struct zx_is12_ResourceID_s {
  ZX_ELEM_EXT
  zx_is12_ResourceID_EXT
  struct zx_str* id;	/* {0,1} attribute xs:ID */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_is12_ResourceID_GET_id(struct zx_is12_ResourceID_s* x);





void zx_is12_ResourceID_PUT_id(struct zx_is12_ResourceID_s* x, struct zx_str* y);





#endif
/* -------------------------- is12_Select -------------------------- */
/* refby( zx_is12_Inquiry_s ) */
#ifndef zx_is12_Select_EXT
#define zx_is12_Select_EXT
#endif

struct zx_is12_Select_s* zx_DEC_is12_Select(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_is12_Select_s* zx_NEW_is12_Select(struct zx_ctx* c);
void zx_FREE_is12_Select(struct zx_ctx* c, struct zx_is12_Select_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_is12_Select_s* zx_DEEP_CLONE_is12_Select(struct zx_ctx* c, struct zx_is12_Select_s* x, int dup_strs);
void zx_DUP_STRS_is12_Select(struct zx_ctx* c, struct zx_is12_Select_s* x);
int zx_WALK_SO_is12_Select(struct zx_ctx* c, struct zx_is12_Select_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_is12_Select(struct zx_ctx* c, struct zx_is12_Select_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_is12_Select(struct zx_ctx* c, struct zx_is12_Select_s* x);
int zx_LEN_WO_is12_Select(struct zx_ctx* c, struct zx_is12_Select_s* x);
char* zx_ENC_SO_is12_Select(struct zx_ctx* c, struct zx_is12_Select_s* x, char* p);
char* zx_ENC_WO_is12_Select(struct zx_ctx* c, struct zx_is12_Select_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_is12_Select(struct zx_ctx* c, struct zx_is12_Select_s* x);
struct zx_str* zx_EASY_ENC_WO_is12_Select(struct zx_ctx* c, struct zx_is12_Select_s* x);

struct zx_is12_Select_s {
  ZX_ELEM_EXT
  zx_is12_Select_EXT
  struct zx_is12_Help_s* Help;	/* {0,1} nada */
  struct zx_elem_s* Hint;	/* {0,1} xs:string */
  struct zx_elem_s* Label;	/* {0,1} xs:normalizedString */
  struct zx_elem_s* Value;	/* {0,1} xs:normalizedString */
  struct zx_is12_Item_s* Item;	/* {2,unbounded}  */
  struct zx_str* multiple;	/* {0,1} attribute xs:boolean */
  struct zx_str* name;	/* {1,1} attribute xs:ID */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_is12_Select_GET_multiple(struct zx_is12_Select_s* x);
struct zx_str* zx_is12_Select_GET_name(struct zx_is12_Select_s* x);

struct zx_is12_Help_s* zx_is12_Select_GET_Help(struct zx_is12_Select_s* x, int n);
struct zx_elem_s* zx_is12_Select_GET_Hint(struct zx_is12_Select_s* x, int n);
struct zx_elem_s* zx_is12_Select_GET_Label(struct zx_is12_Select_s* x, int n);
struct zx_elem_s* zx_is12_Select_GET_Value(struct zx_is12_Select_s* x, int n);
struct zx_is12_Item_s* zx_is12_Select_GET_Item(struct zx_is12_Select_s* x, int n);

int zx_is12_Select_NUM_Help(struct zx_is12_Select_s* x);
int zx_is12_Select_NUM_Hint(struct zx_is12_Select_s* x);
int zx_is12_Select_NUM_Label(struct zx_is12_Select_s* x);
int zx_is12_Select_NUM_Value(struct zx_is12_Select_s* x);
int zx_is12_Select_NUM_Item(struct zx_is12_Select_s* x);

struct zx_is12_Help_s* zx_is12_Select_POP_Help(struct zx_is12_Select_s* x);
struct zx_elem_s* zx_is12_Select_POP_Hint(struct zx_is12_Select_s* x);
struct zx_elem_s* zx_is12_Select_POP_Label(struct zx_is12_Select_s* x);
struct zx_elem_s* zx_is12_Select_POP_Value(struct zx_is12_Select_s* x);
struct zx_is12_Item_s* zx_is12_Select_POP_Item(struct zx_is12_Select_s* x);

void zx_is12_Select_PUSH_Help(struct zx_is12_Select_s* x, struct zx_is12_Help_s* y);
void zx_is12_Select_PUSH_Hint(struct zx_is12_Select_s* x, struct zx_elem_s* y);
void zx_is12_Select_PUSH_Label(struct zx_is12_Select_s* x, struct zx_elem_s* y);
void zx_is12_Select_PUSH_Value(struct zx_is12_Select_s* x, struct zx_elem_s* y);
void zx_is12_Select_PUSH_Item(struct zx_is12_Select_s* x, struct zx_is12_Item_s* y);

void zx_is12_Select_PUT_multiple(struct zx_is12_Select_s* x, struct zx_str* y);
void zx_is12_Select_PUT_name(struct zx_is12_Select_s* x, struct zx_str* y);

void zx_is12_Select_PUT_Help(struct zx_is12_Select_s* x, int n, struct zx_is12_Help_s* y);
void zx_is12_Select_PUT_Hint(struct zx_is12_Select_s* x, int n, struct zx_elem_s* y);
void zx_is12_Select_PUT_Label(struct zx_is12_Select_s* x, int n, struct zx_elem_s* y);
void zx_is12_Select_PUT_Value(struct zx_is12_Select_s* x, int n, struct zx_elem_s* y);
void zx_is12_Select_PUT_Item(struct zx_is12_Select_s* x, int n, struct zx_is12_Item_s* y);

void zx_is12_Select_ADD_Help(struct zx_is12_Select_s* x, int n, struct zx_is12_Help_s* z);
void zx_is12_Select_ADD_Hint(struct zx_is12_Select_s* x, int n, struct zx_elem_s* z);
void zx_is12_Select_ADD_Label(struct zx_is12_Select_s* x, int n, struct zx_elem_s* z);
void zx_is12_Select_ADD_Value(struct zx_is12_Select_s* x, int n, struct zx_elem_s* z);
void zx_is12_Select_ADD_Item(struct zx_is12_Select_s* x, int n, struct zx_is12_Item_s* z);

void zx_is12_Select_DEL_Help(struct zx_is12_Select_s* x, int n);
void zx_is12_Select_DEL_Hint(struct zx_is12_Select_s* x, int n);
void zx_is12_Select_DEL_Label(struct zx_is12_Select_s* x, int n);
void zx_is12_Select_DEL_Value(struct zx_is12_Select_s* x, int n);
void zx_is12_Select_DEL_Item(struct zx_is12_Select_s* x, int n);

void zx_is12_Select_REV_Help(struct zx_is12_Select_s* x);
void zx_is12_Select_REV_Hint(struct zx_is12_Select_s* x);
void zx_is12_Select_REV_Label(struct zx_is12_Select_s* x);
void zx_is12_Select_REV_Value(struct zx_is12_Select_s* x);
void zx_is12_Select_REV_Item(struct zx_is12_Select_s* x);

#endif
/* -------------------------- is12_Status -------------------------- */
/* refby( zx_is12_InteractionResponse_s zx_is12_Status_s ) */
#ifndef zx_is12_Status_EXT
#define zx_is12_Status_EXT
#endif

struct zx_is12_Status_s* zx_DEC_is12_Status(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_is12_Status_s* zx_NEW_is12_Status(struct zx_ctx* c);
void zx_FREE_is12_Status(struct zx_ctx* c, struct zx_is12_Status_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_is12_Status_s* zx_DEEP_CLONE_is12_Status(struct zx_ctx* c, struct zx_is12_Status_s* x, int dup_strs);
void zx_DUP_STRS_is12_Status(struct zx_ctx* c, struct zx_is12_Status_s* x);
int zx_WALK_SO_is12_Status(struct zx_ctx* c, struct zx_is12_Status_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_is12_Status(struct zx_ctx* c, struct zx_is12_Status_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_is12_Status(struct zx_ctx* c, struct zx_is12_Status_s* x);
int zx_LEN_WO_is12_Status(struct zx_ctx* c, struct zx_is12_Status_s* x);
char* zx_ENC_SO_is12_Status(struct zx_ctx* c, struct zx_is12_Status_s* x, char* p);
char* zx_ENC_WO_is12_Status(struct zx_ctx* c, struct zx_is12_Status_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_is12_Status(struct zx_ctx* c, struct zx_is12_Status_s* x);
struct zx_str* zx_EASY_ENC_WO_is12_Status(struct zx_ctx* c, struct zx_is12_Status_s* x);

struct zx_is12_Status_s {
  ZX_ELEM_EXT
  zx_is12_Status_EXT
  struct zx_is12_Status_s* Status;	/* {0,-1} nada */
  struct zx_str* code;	/* {1,1} attribute xs:QName */
  struct zx_str* comment;	/* {0,1} attribute xs:string */
  struct zx_str* ref;	/* {0,1} attribute xs:string */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_is12_Status_GET_code(struct zx_is12_Status_s* x);
struct zx_str* zx_is12_Status_GET_comment(struct zx_is12_Status_s* x);
struct zx_str* zx_is12_Status_GET_ref(struct zx_is12_Status_s* x);

struct zx_is12_Status_s* zx_is12_Status_GET_Status(struct zx_is12_Status_s* x, int n);

int zx_is12_Status_NUM_Status(struct zx_is12_Status_s* x);

struct zx_is12_Status_s* zx_is12_Status_POP_Status(struct zx_is12_Status_s* x);

void zx_is12_Status_PUSH_Status(struct zx_is12_Status_s* x, struct zx_is12_Status_s* y);

void zx_is12_Status_PUT_code(struct zx_is12_Status_s* x, struct zx_str* y);
void zx_is12_Status_PUT_comment(struct zx_is12_Status_s* x, struct zx_str* y);
void zx_is12_Status_PUT_ref(struct zx_is12_Status_s* x, struct zx_str* y);

void zx_is12_Status_PUT_Status(struct zx_is12_Status_s* x, int n, struct zx_is12_Status_s* y);

void zx_is12_Status_ADD_Status(struct zx_is12_Status_s* x, int n, struct zx_is12_Status_s* z);

void zx_is12_Status_DEL_Status(struct zx_is12_Status_s* x, int n);

void zx_is12_Status_REV_Status(struct zx_is12_Status_s* x);

#endif
/* -------------------------- is12_Text -------------------------- */
/* refby( zx_is12_Inquiry_s ) */
#ifndef zx_is12_Text_EXT
#define zx_is12_Text_EXT
#endif

struct zx_is12_Text_s* zx_DEC_is12_Text(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_is12_Text_s* zx_NEW_is12_Text(struct zx_ctx* c);
void zx_FREE_is12_Text(struct zx_ctx* c, struct zx_is12_Text_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_is12_Text_s* zx_DEEP_CLONE_is12_Text(struct zx_ctx* c, struct zx_is12_Text_s* x, int dup_strs);
void zx_DUP_STRS_is12_Text(struct zx_ctx* c, struct zx_is12_Text_s* x);
int zx_WALK_SO_is12_Text(struct zx_ctx* c, struct zx_is12_Text_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_is12_Text(struct zx_ctx* c, struct zx_is12_Text_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_is12_Text(struct zx_ctx* c, struct zx_is12_Text_s* x);
int zx_LEN_WO_is12_Text(struct zx_ctx* c, struct zx_is12_Text_s* x);
char* zx_ENC_SO_is12_Text(struct zx_ctx* c, struct zx_is12_Text_s* x, char* p);
char* zx_ENC_WO_is12_Text(struct zx_ctx* c, struct zx_is12_Text_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_is12_Text(struct zx_ctx* c, struct zx_is12_Text_s* x);
struct zx_str* zx_EASY_ENC_WO_is12_Text(struct zx_ctx* c, struct zx_is12_Text_s* x);

struct zx_is12_Text_s {
  ZX_ELEM_EXT
  zx_is12_Text_EXT
  struct zx_is12_Help_s* Help;	/* {0,1} nada */
  struct zx_elem_s* Hint;	/* {0,1} xs:string */
  struct zx_elem_s* Label;	/* {0,1} xs:normalizedString */
  struct zx_elem_s* Value;	/* {0,1} xs:normalizedString */
  struct zx_str* format;	/* {0,1} attribute xs:string */
  struct zx_str* maxChars;	/* {0,1} attribute xs:integer */
  struct zx_str* minChars;	/* {0,1} attribute xs:integer */
  struct zx_str* name;	/* {1,1} attribute xs:ID */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_is12_Text_GET_format(struct zx_is12_Text_s* x);
struct zx_str* zx_is12_Text_GET_maxChars(struct zx_is12_Text_s* x);
struct zx_str* zx_is12_Text_GET_minChars(struct zx_is12_Text_s* x);
struct zx_str* zx_is12_Text_GET_name(struct zx_is12_Text_s* x);

struct zx_is12_Help_s* zx_is12_Text_GET_Help(struct zx_is12_Text_s* x, int n);
struct zx_elem_s* zx_is12_Text_GET_Hint(struct zx_is12_Text_s* x, int n);
struct zx_elem_s* zx_is12_Text_GET_Label(struct zx_is12_Text_s* x, int n);
struct zx_elem_s* zx_is12_Text_GET_Value(struct zx_is12_Text_s* x, int n);

int zx_is12_Text_NUM_Help(struct zx_is12_Text_s* x);
int zx_is12_Text_NUM_Hint(struct zx_is12_Text_s* x);
int zx_is12_Text_NUM_Label(struct zx_is12_Text_s* x);
int zx_is12_Text_NUM_Value(struct zx_is12_Text_s* x);

struct zx_is12_Help_s* zx_is12_Text_POP_Help(struct zx_is12_Text_s* x);
struct zx_elem_s* zx_is12_Text_POP_Hint(struct zx_is12_Text_s* x);
struct zx_elem_s* zx_is12_Text_POP_Label(struct zx_is12_Text_s* x);
struct zx_elem_s* zx_is12_Text_POP_Value(struct zx_is12_Text_s* x);

void zx_is12_Text_PUSH_Help(struct zx_is12_Text_s* x, struct zx_is12_Help_s* y);
void zx_is12_Text_PUSH_Hint(struct zx_is12_Text_s* x, struct zx_elem_s* y);
void zx_is12_Text_PUSH_Label(struct zx_is12_Text_s* x, struct zx_elem_s* y);
void zx_is12_Text_PUSH_Value(struct zx_is12_Text_s* x, struct zx_elem_s* y);

void zx_is12_Text_PUT_format(struct zx_is12_Text_s* x, struct zx_str* y);
void zx_is12_Text_PUT_maxChars(struct zx_is12_Text_s* x, struct zx_str* y);
void zx_is12_Text_PUT_minChars(struct zx_is12_Text_s* x, struct zx_str* y);
void zx_is12_Text_PUT_name(struct zx_is12_Text_s* x, struct zx_str* y);

void zx_is12_Text_PUT_Help(struct zx_is12_Text_s* x, int n, struct zx_is12_Help_s* y);
void zx_is12_Text_PUT_Hint(struct zx_is12_Text_s* x, int n, struct zx_elem_s* y);
void zx_is12_Text_PUT_Label(struct zx_is12_Text_s* x, int n, struct zx_elem_s* y);
void zx_is12_Text_PUT_Value(struct zx_is12_Text_s* x, int n, struct zx_elem_s* y);

void zx_is12_Text_ADD_Help(struct zx_is12_Text_s* x, int n, struct zx_is12_Help_s* z);
void zx_is12_Text_ADD_Hint(struct zx_is12_Text_s* x, int n, struct zx_elem_s* z);
void zx_is12_Text_ADD_Label(struct zx_is12_Text_s* x, int n, struct zx_elem_s* z);
void zx_is12_Text_ADD_Value(struct zx_is12_Text_s* x, int n, struct zx_elem_s* z);

void zx_is12_Text_DEL_Help(struct zx_is12_Text_s* x, int n);
void zx_is12_Text_DEL_Hint(struct zx_is12_Text_s* x, int n);
void zx_is12_Text_DEL_Label(struct zx_is12_Text_s* x, int n);
void zx_is12_Text_DEL_Value(struct zx_is12_Text_s* x, int n);

void zx_is12_Text_REV_Help(struct zx_is12_Text_s* x);
void zx_is12_Text_REV_Hint(struct zx_is12_Text_s* x);
void zx_is12_Text_REV_Label(struct zx_is12_Text_s* x);
void zx_is12_Text_REV_Value(struct zx_is12_Text_s* x);

#endif
/* -------------------------- is12_UserInteraction -------------------------- */
/* refby( ) */
#ifndef zx_is12_UserInteraction_EXT
#define zx_is12_UserInteraction_EXT
#endif

struct zx_is12_UserInteraction_s* zx_DEC_is12_UserInteraction(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_is12_UserInteraction_s* zx_NEW_is12_UserInteraction(struct zx_ctx* c);
void zx_FREE_is12_UserInteraction(struct zx_ctx* c, struct zx_is12_UserInteraction_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_is12_UserInteraction_s* zx_DEEP_CLONE_is12_UserInteraction(struct zx_ctx* c, struct zx_is12_UserInteraction_s* x, int dup_strs);
void zx_DUP_STRS_is12_UserInteraction(struct zx_ctx* c, struct zx_is12_UserInteraction_s* x);
int zx_WALK_SO_is12_UserInteraction(struct zx_ctx* c, struct zx_is12_UserInteraction_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_is12_UserInteraction(struct zx_ctx* c, struct zx_is12_UserInteraction_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_is12_UserInteraction(struct zx_ctx* c, struct zx_is12_UserInteraction_s* x);
int zx_LEN_WO_is12_UserInteraction(struct zx_ctx* c, struct zx_is12_UserInteraction_s* x);
char* zx_ENC_SO_is12_UserInteraction(struct zx_ctx* c, struct zx_is12_UserInteraction_s* x, char* p);
char* zx_ENC_WO_is12_UserInteraction(struct zx_ctx* c, struct zx_is12_UserInteraction_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_is12_UserInteraction(struct zx_ctx* c, struct zx_is12_UserInteraction_s* x);
struct zx_str* zx_EASY_ENC_WO_is12_UserInteraction(struct zx_ctx* c, struct zx_is12_UserInteraction_s* x);

struct zx_is12_UserInteraction_s {
  ZX_ELEM_EXT
  zx_is12_UserInteraction_EXT
  struct zx_is12_InteractionService_s* InteractionService;	/* {0,1}  */
  struct zx_str* id;	/* {0,1} attribute xs:ID */
  struct zx_str* interact;	/* {0,1} attribute xs:QName */
  struct zx_str* language;	/* {0,1} attribute xs:NMTOKENS */
  struct zx_str* maxInteractTime;	/* {0,1} attribute xs:integer */
  struct zx_str* redirect;	/* {0,1} attribute xs:boolean */
  struct zx_str* actor;	/* {0,1} attribute xs:anyURI */
  struct zx_str* mustUnderstand;	/* {0,1} attribute xs:boolean */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_is12_UserInteraction_GET_id(struct zx_is12_UserInteraction_s* x);
struct zx_str* zx_is12_UserInteraction_GET_interact(struct zx_is12_UserInteraction_s* x);
struct zx_str* zx_is12_UserInteraction_GET_language(struct zx_is12_UserInteraction_s* x);
struct zx_str* zx_is12_UserInteraction_GET_maxInteractTime(struct zx_is12_UserInteraction_s* x);
struct zx_str* zx_is12_UserInteraction_GET_redirect(struct zx_is12_UserInteraction_s* x);
struct zx_str* zx_is12_UserInteraction_GET_actor(struct zx_is12_UserInteraction_s* x);
struct zx_str* zx_is12_UserInteraction_GET_mustUnderstand(struct zx_is12_UserInteraction_s* x);

struct zx_is12_InteractionService_s* zx_is12_UserInteraction_GET_InteractionService(struct zx_is12_UserInteraction_s* x, int n);

int zx_is12_UserInteraction_NUM_InteractionService(struct zx_is12_UserInteraction_s* x);

struct zx_is12_InteractionService_s* zx_is12_UserInteraction_POP_InteractionService(struct zx_is12_UserInteraction_s* x);

void zx_is12_UserInteraction_PUSH_InteractionService(struct zx_is12_UserInteraction_s* x, struct zx_is12_InteractionService_s* y);

void zx_is12_UserInteraction_PUT_id(struct zx_is12_UserInteraction_s* x, struct zx_str* y);
void zx_is12_UserInteraction_PUT_interact(struct zx_is12_UserInteraction_s* x, struct zx_str* y);
void zx_is12_UserInteraction_PUT_language(struct zx_is12_UserInteraction_s* x, struct zx_str* y);
void zx_is12_UserInteraction_PUT_maxInteractTime(struct zx_is12_UserInteraction_s* x, struct zx_str* y);
void zx_is12_UserInteraction_PUT_redirect(struct zx_is12_UserInteraction_s* x, struct zx_str* y);
void zx_is12_UserInteraction_PUT_actor(struct zx_is12_UserInteraction_s* x, struct zx_str* y);
void zx_is12_UserInteraction_PUT_mustUnderstand(struct zx_is12_UserInteraction_s* x, struct zx_str* y);

void zx_is12_UserInteraction_PUT_InteractionService(struct zx_is12_UserInteraction_s* x, int n, struct zx_is12_InteractionService_s* y);

void zx_is12_UserInteraction_ADD_InteractionService(struct zx_is12_UserInteraction_s* x, int n, struct zx_is12_InteractionService_s* z);

void zx_is12_UserInteraction_DEL_InteractionService(struct zx_is12_UserInteraction_s* x, int n);

void zx_is12_UserInteraction_REV_InteractionService(struct zx_is12_UserInteraction_s* x);

#endif

#endif
