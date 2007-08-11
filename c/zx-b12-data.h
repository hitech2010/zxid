/* c/zx-b12-data.h - WARNING: This header was automatically generated. DO NOT EDIT!
 * $Id$ */
/* Datastructure design, topography, and layout
 * Copyright (c) 2006 Sampo Kellomaki (sampo@iki.fi),
 * All Rights Reserved. NO WARRANTY. See file COPYING for
 * terms and conditions of use. Element and attributes names as well
 * as some topography are derived from schema descriptions that were used as
 * input and may be subject to their own copright. */

#ifndef _c_zx_b12_data_h
#define _c_zx_b12_data_h

#include "zx.h"
#include "c/zx-const.h"
#include "c/zx-data.h"

#ifndef ZX_ELEM_EXT
#define ZX_ELEM_EXT  /* This extension point should be defined by who includes this file. */
#endif

/* -------------------------- b12_Consent -------------------------- */
/* refby( zx_e_Header_s ) */
#ifndef zx_b12_Consent_EXT
#define zx_b12_Consent_EXT
#endif

struct zx_b12_Consent_s* zx_DEC_b12_Consent(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_b12_Consent_s* zx_NEW_b12_Consent(struct zx_ctx* c);
void zx_FREE_b12_Consent(struct zx_ctx* c, struct zx_b12_Consent_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_b12_Consent_s* zx_DEEP_CLONE_b12_Consent(struct zx_ctx* c, struct zx_b12_Consent_s* x, int dup_strs);
void zx_DUP_STRS_b12_Consent(struct zx_ctx* c, struct zx_b12_Consent_s* x);
int zx_WALK_SO_b12_Consent(struct zx_ctx* c, struct zx_b12_Consent_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_b12_Consent(struct zx_ctx* c, struct zx_b12_Consent_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_b12_Consent(struct zx_ctx* c, struct zx_b12_Consent_s* x);
int zx_LEN_WO_b12_Consent(struct zx_ctx* c, struct zx_b12_Consent_s* x);
char* zx_ENC_SO_b12_Consent(struct zx_ctx* c, struct zx_b12_Consent_s* x, char* p);
char* zx_ENC_WO_b12_Consent(struct zx_ctx* c, struct zx_b12_Consent_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_b12_Consent(struct zx_ctx* c, struct zx_b12_Consent_s* x);
struct zx_str* zx_EASY_ENC_WO_b12_Consent(struct zx_ctx* c, struct zx_b12_Consent_s* x);

struct zx_b12_Consent_s {
  ZX_ELEM_EXT
  zx_b12_Consent_EXT
  struct zx_str* uri;	/* {1,1} attribute xs:anyURI */
  struct zx_str* timestamp;	/* {0,1} attribute xs:dateTime */
  struct zx_str* id;	/* {0,1} attribute xs:ID */
  struct zx_str* mustUnderstand;	/* {0,1} attribute xs:boolean */
  struct zx_str* actor;	/* {0,1} attribute xs:anyURI */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_b12_Consent_GET_uri(struct zx_b12_Consent_s* x);
struct zx_str* zx_b12_Consent_GET_timestamp(struct zx_b12_Consent_s* x);
struct zx_str* zx_b12_Consent_GET_id(struct zx_b12_Consent_s* x);
struct zx_str* zx_b12_Consent_GET_mustUnderstand(struct zx_b12_Consent_s* x);
struct zx_str* zx_b12_Consent_GET_actor(struct zx_b12_Consent_s* x);





void zx_b12_Consent_PUT_uri(struct zx_b12_Consent_s* x, struct zx_str* y);
void zx_b12_Consent_PUT_timestamp(struct zx_b12_Consent_s* x, struct zx_str* y);
void zx_b12_Consent_PUT_id(struct zx_b12_Consent_s* x, struct zx_str* y);
void zx_b12_Consent_PUT_mustUnderstand(struct zx_b12_Consent_s* x, struct zx_str* y);
void zx_b12_Consent_PUT_actor(struct zx_b12_Consent_s* x, struct zx_str* y);





#endif
/* -------------------------- b12_Correlation -------------------------- */
/* refby( zx_e_Header_s ) */
#ifndef zx_b12_Correlation_EXT
#define zx_b12_Correlation_EXT
#endif

struct zx_b12_Correlation_s* zx_DEC_b12_Correlation(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_b12_Correlation_s* zx_NEW_b12_Correlation(struct zx_ctx* c);
void zx_FREE_b12_Correlation(struct zx_ctx* c, struct zx_b12_Correlation_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_b12_Correlation_s* zx_DEEP_CLONE_b12_Correlation(struct zx_ctx* c, struct zx_b12_Correlation_s* x, int dup_strs);
void zx_DUP_STRS_b12_Correlation(struct zx_ctx* c, struct zx_b12_Correlation_s* x);
int zx_WALK_SO_b12_Correlation(struct zx_ctx* c, struct zx_b12_Correlation_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_b12_Correlation(struct zx_ctx* c, struct zx_b12_Correlation_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_b12_Correlation(struct zx_ctx* c, struct zx_b12_Correlation_s* x);
int zx_LEN_WO_b12_Correlation(struct zx_ctx* c, struct zx_b12_Correlation_s* x);
char* zx_ENC_SO_b12_Correlation(struct zx_ctx* c, struct zx_b12_Correlation_s* x, char* p);
char* zx_ENC_WO_b12_Correlation(struct zx_ctx* c, struct zx_b12_Correlation_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_b12_Correlation(struct zx_ctx* c, struct zx_b12_Correlation_s* x);
struct zx_str* zx_EASY_ENC_WO_b12_Correlation(struct zx_ctx* c, struct zx_b12_Correlation_s* x);

struct zx_b12_Correlation_s {
  ZX_ELEM_EXT
  zx_b12_Correlation_EXT
  struct zx_str* messageID;	/* {1,1} attribute xs:string */
  struct zx_str* refToMessageID;	/* {0,1} attribute xs:string */
  struct zx_str* timestamp;	/* {1,1} attribute xs:dateTime */
  struct zx_str* id;	/* {0,1} attribute xs:ID */
  struct zx_str* mustUnderstand;	/* {0,1} attribute xs:boolean */
  struct zx_str* actor;	/* {0,1} attribute xs:anyURI */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_b12_Correlation_GET_messageID(struct zx_b12_Correlation_s* x);
struct zx_str* zx_b12_Correlation_GET_refToMessageID(struct zx_b12_Correlation_s* x);
struct zx_str* zx_b12_Correlation_GET_timestamp(struct zx_b12_Correlation_s* x);
struct zx_str* zx_b12_Correlation_GET_id(struct zx_b12_Correlation_s* x);
struct zx_str* zx_b12_Correlation_GET_mustUnderstand(struct zx_b12_Correlation_s* x);
struct zx_str* zx_b12_Correlation_GET_actor(struct zx_b12_Correlation_s* x);





void zx_b12_Correlation_PUT_messageID(struct zx_b12_Correlation_s* x, struct zx_str* y);
void zx_b12_Correlation_PUT_refToMessageID(struct zx_b12_Correlation_s* x, struct zx_str* y);
void zx_b12_Correlation_PUT_timestamp(struct zx_b12_Correlation_s* x, struct zx_str* y);
void zx_b12_Correlation_PUT_id(struct zx_b12_Correlation_s* x, struct zx_str* y);
void zx_b12_Correlation_PUT_mustUnderstand(struct zx_b12_Correlation_s* x, struct zx_str* y);
void zx_b12_Correlation_PUT_actor(struct zx_b12_Correlation_s* x, struct zx_str* y);





#endif
/* -------------------------- b12_ProcessingContext -------------------------- */
/* refby( zx_e_Header_s ) */
#ifndef zx_b12_ProcessingContext_EXT
#define zx_b12_ProcessingContext_EXT
#endif

struct zx_b12_ProcessingContext_s* zx_DEC_b12_ProcessingContext(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_b12_ProcessingContext_s* zx_NEW_b12_ProcessingContext(struct zx_ctx* c);
void zx_FREE_b12_ProcessingContext(struct zx_ctx* c, struct zx_b12_ProcessingContext_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_b12_ProcessingContext_s* zx_DEEP_CLONE_b12_ProcessingContext(struct zx_ctx* c, struct zx_b12_ProcessingContext_s* x, int dup_strs);
void zx_DUP_STRS_b12_ProcessingContext(struct zx_ctx* c, struct zx_b12_ProcessingContext_s* x);
int zx_WALK_SO_b12_ProcessingContext(struct zx_ctx* c, struct zx_b12_ProcessingContext_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_b12_ProcessingContext(struct zx_ctx* c, struct zx_b12_ProcessingContext_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_b12_ProcessingContext(struct zx_ctx* c, struct zx_b12_ProcessingContext_s* x);
int zx_LEN_WO_b12_ProcessingContext(struct zx_ctx* c, struct zx_b12_ProcessingContext_s* x);
char* zx_ENC_SO_b12_ProcessingContext(struct zx_ctx* c, struct zx_b12_ProcessingContext_s* x, char* p);
char* zx_ENC_WO_b12_ProcessingContext(struct zx_ctx* c, struct zx_b12_ProcessingContext_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_b12_ProcessingContext(struct zx_ctx* c, struct zx_b12_ProcessingContext_s* x);
struct zx_str* zx_EASY_ENC_WO_b12_ProcessingContext(struct zx_ctx* c, struct zx_b12_ProcessingContext_s* x);

struct zx_b12_ProcessingContext_s {
  ZX_ELEM_EXT
  zx_b12_ProcessingContext_EXT
  struct zx_str* id;	/* {0,1} attribute xs:ID */
  struct zx_str* mustUnderstand;	/* {0,1} attribute xs:boolean */
  struct zx_str* actor;	/* {0,1} attribute xs:anyURI */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_b12_ProcessingContext_GET_id(struct zx_b12_ProcessingContext_s* x);
struct zx_str* zx_b12_ProcessingContext_GET_mustUnderstand(struct zx_b12_ProcessingContext_s* x);
struct zx_str* zx_b12_ProcessingContext_GET_actor(struct zx_b12_ProcessingContext_s* x);





void zx_b12_ProcessingContext_PUT_id(struct zx_b12_ProcessingContext_s* x, struct zx_str* y);
void zx_b12_ProcessingContext_PUT_mustUnderstand(struct zx_b12_ProcessingContext_s* x, struct zx_str* y);
void zx_b12_ProcessingContext_PUT_actor(struct zx_b12_ProcessingContext_s* x, struct zx_str* y);





#endif
/* -------------------------- b12_Provider -------------------------- */
/* refby( zx_e_Header_s ) */
#ifndef zx_b12_Provider_EXT
#define zx_b12_Provider_EXT
#endif

struct zx_b12_Provider_s* zx_DEC_b12_Provider(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_b12_Provider_s* zx_NEW_b12_Provider(struct zx_ctx* c);
void zx_FREE_b12_Provider(struct zx_ctx* c, struct zx_b12_Provider_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_b12_Provider_s* zx_DEEP_CLONE_b12_Provider(struct zx_ctx* c, struct zx_b12_Provider_s* x, int dup_strs);
void zx_DUP_STRS_b12_Provider(struct zx_ctx* c, struct zx_b12_Provider_s* x);
int zx_WALK_SO_b12_Provider(struct zx_ctx* c, struct zx_b12_Provider_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_b12_Provider(struct zx_ctx* c, struct zx_b12_Provider_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_b12_Provider(struct zx_ctx* c, struct zx_b12_Provider_s* x);
int zx_LEN_WO_b12_Provider(struct zx_ctx* c, struct zx_b12_Provider_s* x);
char* zx_ENC_SO_b12_Provider(struct zx_ctx* c, struct zx_b12_Provider_s* x, char* p);
char* zx_ENC_WO_b12_Provider(struct zx_ctx* c, struct zx_b12_Provider_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_b12_Provider(struct zx_ctx* c, struct zx_b12_Provider_s* x);
struct zx_str* zx_EASY_ENC_WO_b12_Provider(struct zx_ctx* c, struct zx_b12_Provider_s* x);

struct zx_b12_Provider_s {
  ZX_ELEM_EXT
  zx_b12_Provider_EXT
  struct zx_str* providerID;	/* {1,1} attribute xs:anyURI */
  struct zx_str* affiliationID;	/* {0,1} attribute xs:anyURI */
  struct zx_str* id;	/* {0,1} attribute xs:ID */
  struct zx_str* mustUnderstand;	/* {0,1} attribute xs:boolean */
  struct zx_str* actor;	/* {0,1} attribute xs:anyURI */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_b12_Provider_GET_providerID(struct zx_b12_Provider_s* x);
struct zx_str* zx_b12_Provider_GET_affiliationID(struct zx_b12_Provider_s* x);
struct zx_str* zx_b12_Provider_GET_id(struct zx_b12_Provider_s* x);
struct zx_str* zx_b12_Provider_GET_mustUnderstand(struct zx_b12_Provider_s* x);
struct zx_str* zx_b12_Provider_GET_actor(struct zx_b12_Provider_s* x);





void zx_b12_Provider_PUT_providerID(struct zx_b12_Provider_s* x, struct zx_str* y);
void zx_b12_Provider_PUT_affiliationID(struct zx_b12_Provider_s* x, struct zx_str* y);
void zx_b12_Provider_PUT_id(struct zx_b12_Provider_s* x, struct zx_str* y);
void zx_b12_Provider_PUT_mustUnderstand(struct zx_b12_Provider_s* x, struct zx_str* y);
void zx_b12_Provider_PUT_actor(struct zx_b12_Provider_s* x, struct zx_str* y);





#endif
/* -------------------------- b12_UsageDirective -------------------------- */
/* refby( zx_e_Header_s ) */
#ifndef zx_b12_UsageDirective_EXT
#define zx_b12_UsageDirective_EXT
#endif

struct zx_b12_UsageDirective_s* zx_DEC_b12_UsageDirective(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_b12_UsageDirective_s* zx_NEW_b12_UsageDirective(struct zx_ctx* c);
void zx_FREE_b12_UsageDirective(struct zx_ctx* c, struct zx_b12_UsageDirective_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_b12_UsageDirective_s* zx_DEEP_CLONE_b12_UsageDirective(struct zx_ctx* c, struct zx_b12_UsageDirective_s* x, int dup_strs);
void zx_DUP_STRS_b12_UsageDirective(struct zx_ctx* c, struct zx_b12_UsageDirective_s* x);
int zx_WALK_SO_b12_UsageDirective(struct zx_ctx* c, struct zx_b12_UsageDirective_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_b12_UsageDirective(struct zx_ctx* c, struct zx_b12_UsageDirective_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_b12_UsageDirective(struct zx_ctx* c, struct zx_b12_UsageDirective_s* x);
int zx_LEN_WO_b12_UsageDirective(struct zx_ctx* c, struct zx_b12_UsageDirective_s* x);
char* zx_ENC_SO_b12_UsageDirective(struct zx_ctx* c, struct zx_b12_UsageDirective_s* x, char* p);
char* zx_ENC_WO_b12_UsageDirective(struct zx_ctx* c, struct zx_b12_UsageDirective_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_b12_UsageDirective(struct zx_ctx* c, struct zx_b12_UsageDirective_s* x);
struct zx_str* zx_EASY_ENC_WO_b12_UsageDirective(struct zx_ctx* c, struct zx_b12_UsageDirective_s* x);

struct zx_b12_UsageDirective_s {
  ZX_ELEM_EXT
  zx_b12_UsageDirective_EXT
  struct zx_str* id;	/* {0,1} attribute xs:ID */
  struct zx_str* ref;	/* {1,1} attribute xs:string */
  struct zx_str* mustUnderstand;	/* {0,1} attribute xs:boolean */
  struct zx_str* actor;	/* {0,1} attribute xs:anyURI */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_b12_UsageDirective_GET_id(struct zx_b12_UsageDirective_s* x);
struct zx_str* zx_b12_UsageDirective_GET_ref(struct zx_b12_UsageDirective_s* x);
struct zx_str* zx_b12_UsageDirective_GET_mustUnderstand(struct zx_b12_UsageDirective_s* x);
struct zx_str* zx_b12_UsageDirective_GET_actor(struct zx_b12_UsageDirective_s* x);





void zx_b12_UsageDirective_PUT_id(struct zx_b12_UsageDirective_s* x, struct zx_str* y);
void zx_b12_UsageDirective_PUT_ref(struct zx_b12_UsageDirective_s* x, struct zx_str* y);
void zx_b12_UsageDirective_PUT_mustUnderstand(struct zx_b12_UsageDirective_s* x, struct zx_str* y);
void zx_b12_UsageDirective_PUT_actor(struct zx_b12_UsageDirective_s* x, struct zx_str* y);





#endif

#endif