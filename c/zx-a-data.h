/* c/zx-a-data.h - WARNING: This header was automatically generated. DO NOT EDIT!
 * $Id$ */
/* Datastructure design, topography, and layout
 * Copyright (c) 2006 Sampo Kellomaki (sampo@iki.fi),
 * All Rights Reserved. NO WARRANTY. See file COPYING for
 * terms and conditions of use. Element and attributes names as well
 * as some topography are derived from schema descriptions that were used as
 * input and may be subject to their own copright. */

#ifndef _c_zx_a_data_h
#define _c_zx_a_data_h

#include "zx.h"
#include "c/zx-const.h"
#include "c/zx-data.h"

#ifndef ZX_ELEM_EXT
#define ZX_ELEM_EXT  /* This extension point should be defined by who includes this file. */
#endif

/* -------------------------- a_Action -------------------------- */
/* refby( zx_e_Header_s zx_a_ProblemAction_s zx_shps_Poll_s zx_prov_Poll_s ) */
#ifndef zx_a_Action_EXT
#define zx_a_Action_EXT
#endif

struct zx_a_Action_s* zx_DEC_a_Action(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_a_Action_s* zx_NEW_a_Action(struct zx_ctx* c);
void zx_FREE_a_Action(struct zx_ctx* c, struct zx_a_Action_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_a_Action_s* zx_DEEP_CLONE_a_Action(struct zx_ctx* c, struct zx_a_Action_s* x, int dup_strs);
void zx_DUP_STRS_a_Action(struct zx_ctx* c, struct zx_a_Action_s* x);
int zx_WALK_SO_a_Action(struct zx_ctx* c, struct zx_a_Action_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_a_Action(struct zx_ctx* c, struct zx_a_Action_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_a_Action(struct zx_ctx* c, struct zx_a_Action_s* x);
int zx_LEN_WO_a_Action(struct zx_ctx* c, struct zx_a_Action_s* x);
char* zx_ENC_SO_a_Action(struct zx_ctx* c, struct zx_a_Action_s* x, char* p);
char* zx_ENC_WO_a_Action(struct zx_ctx* c, struct zx_a_Action_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_a_Action(struct zx_ctx* c, struct zx_a_Action_s* x);
struct zx_str* zx_EASY_ENC_WO_a_Action(struct zx_ctx* c, struct zx_a_Action_s* x);

struct zx_a_Action_s {
  ZX_ELEM_EXT
  zx_a_Action_EXT
  struct zx_str* ID;	/* {0,1} attribute xs:anyURI */
  struct zx_str* id;	/* {0,1} attribute xs:ID */
  struct zx_str* Id;	/* {0,1} attribute xs:ID */
  struct zx_str* actor;	/* {0,1} attribute xs:anyURI */
  struct zx_str* mustUnderstand;	/* {0,1} attribute xs:boolean */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_a_Action_GET_ID(struct zx_a_Action_s* x);
struct zx_str* zx_a_Action_GET_id(struct zx_a_Action_s* x);
struct zx_str* zx_a_Action_GET_Id(struct zx_a_Action_s* x);
struct zx_str* zx_a_Action_GET_actor(struct zx_a_Action_s* x);
struct zx_str* zx_a_Action_GET_mustUnderstand(struct zx_a_Action_s* x);





void zx_a_Action_PUT_ID(struct zx_a_Action_s* x, struct zx_str* y);
void zx_a_Action_PUT_id(struct zx_a_Action_s* x, struct zx_str* y);
void zx_a_Action_PUT_Id(struct zx_a_Action_s* x, struct zx_str* y);
void zx_a_Action_PUT_actor(struct zx_a_Action_s* x, struct zx_str* y);
void zx_a_Action_PUT_mustUnderstand(struct zx_a_Action_s* x, struct zx_str* y);





#endif
/* -------------------------- a_Address -------------------------- */
/* refby( zx_b_InteractionService_s zx_a_EndpointReference_s zx_a_From_s zx_wst_Issuer_s zx_b_ApplicationEPR_s zx_a_ReplyTo_s zx_prov_CallbackEPR_s zx_shps_CallbackEPR_s zx_a_FaultTo_s zx_prov_ProvisioningServiceEPR_s zx_b_EndpointUpdate_s ) */
#ifndef zx_a_Address_EXT
#define zx_a_Address_EXT
#endif

struct zx_a_Address_s* zx_DEC_a_Address(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_a_Address_s* zx_NEW_a_Address(struct zx_ctx* c);
void zx_FREE_a_Address(struct zx_ctx* c, struct zx_a_Address_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_a_Address_s* zx_DEEP_CLONE_a_Address(struct zx_ctx* c, struct zx_a_Address_s* x, int dup_strs);
void zx_DUP_STRS_a_Address(struct zx_ctx* c, struct zx_a_Address_s* x);
int zx_WALK_SO_a_Address(struct zx_ctx* c, struct zx_a_Address_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_a_Address(struct zx_ctx* c, struct zx_a_Address_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_a_Address(struct zx_ctx* c, struct zx_a_Address_s* x);
int zx_LEN_WO_a_Address(struct zx_ctx* c, struct zx_a_Address_s* x);
char* zx_ENC_SO_a_Address(struct zx_ctx* c, struct zx_a_Address_s* x, char* p);
char* zx_ENC_WO_a_Address(struct zx_ctx* c, struct zx_a_Address_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_a_Address(struct zx_ctx* c, struct zx_a_Address_s* x);
struct zx_str* zx_EASY_ENC_WO_a_Address(struct zx_ctx* c, struct zx_a_Address_s* x);

struct zx_a_Address_s {
  ZX_ELEM_EXT
  zx_a_Address_EXT
  struct zx_str* ID;	/* {0,1} attribute xs:anyURI */
  struct zx_str* id;	/* {0,1} attribute xs:ID */
  struct zx_str* Id;	/* {0,1} attribute xs:ID */
  struct zx_str* actor;	/* {0,1} attribute xs:anyURI */
  struct zx_str* mustUnderstand;	/* {0,1} attribute xs:boolean */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_a_Address_GET_ID(struct zx_a_Address_s* x);
struct zx_str* zx_a_Address_GET_id(struct zx_a_Address_s* x);
struct zx_str* zx_a_Address_GET_Id(struct zx_a_Address_s* x);
struct zx_str* zx_a_Address_GET_actor(struct zx_a_Address_s* x);
struct zx_str* zx_a_Address_GET_mustUnderstand(struct zx_a_Address_s* x);





void zx_a_Address_PUT_ID(struct zx_a_Address_s* x, struct zx_str* y);
void zx_a_Address_PUT_id(struct zx_a_Address_s* x, struct zx_str* y);
void zx_a_Address_PUT_Id(struct zx_a_Address_s* x, struct zx_str* y);
void zx_a_Address_PUT_actor(struct zx_a_Address_s* x, struct zx_str* y);
void zx_a_Address_PUT_mustUnderstand(struct zx_a_Address_s* x, struct zx_str* y);





#endif
/* -------------------------- a_EndpointReference -------------------------- */
/* refby( zx_shps_Register_s zx_shps_QueryRegisteredResponse_s zx_di_QueryResponse_s zx_shps_QueryResponse_s zx_as_SASLResponse_s zx_shps_UpdateItem_s zx_sa_AttributeValue_s zx_sa11_AttributeValue_s ) */
#ifndef zx_a_EndpointReference_EXT
#define zx_a_EndpointReference_EXT
#endif

struct zx_a_EndpointReference_s* zx_DEC_a_EndpointReference(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_a_EndpointReference_s* zx_NEW_a_EndpointReference(struct zx_ctx* c);
void zx_FREE_a_EndpointReference(struct zx_ctx* c, struct zx_a_EndpointReference_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_a_EndpointReference_s* zx_DEEP_CLONE_a_EndpointReference(struct zx_ctx* c, struct zx_a_EndpointReference_s* x, int dup_strs);
void zx_DUP_STRS_a_EndpointReference(struct zx_ctx* c, struct zx_a_EndpointReference_s* x);
int zx_WALK_SO_a_EndpointReference(struct zx_ctx* c, struct zx_a_EndpointReference_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_a_EndpointReference(struct zx_ctx* c, struct zx_a_EndpointReference_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_a_EndpointReference(struct zx_ctx* c, struct zx_a_EndpointReference_s* x);
int zx_LEN_WO_a_EndpointReference(struct zx_ctx* c, struct zx_a_EndpointReference_s* x);
char* zx_ENC_SO_a_EndpointReference(struct zx_ctx* c, struct zx_a_EndpointReference_s* x, char* p);
char* zx_ENC_WO_a_EndpointReference(struct zx_ctx* c, struct zx_a_EndpointReference_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_a_EndpointReference(struct zx_ctx* c, struct zx_a_EndpointReference_s* x);
struct zx_str* zx_EASY_ENC_WO_a_EndpointReference(struct zx_ctx* c, struct zx_a_EndpointReference_s* x);

struct zx_a_EndpointReference_s {
  ZX_ELEM_EXT
  zx_a_EndpointReference_EXT
  struct zx_a_Address_s* Address;	/* {1,1}  */
  struct zx_a_ReferenceParameters_s* ReferenceParameters;	/* {0,1} nada */
  struct zx_a_Metadata_s* Metadata;	/* {0,1} nada */
  struct zx_str* ID;	/* {0,1} attribute xs:anyURI */
  struct zx_str* id;	/* {0,1} attribute xs:ID */
  struct zx_str* notOnOrAfter;	/* {0,1} attribute xs:dateTime */
  struct zx_str* Id;	/* {0,1} attribute xs:ID */
  struct zx_str* actor;	/* {0,1} attribute xs:anyURI */
  struct zx_str* mustUnderstand;	/* {0,1} attribute xs:boolean */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_a_EndpointReference_GET_ID(struct zx_a_EndpointReference_s* x);
struct zx_str* zx_a_EndpointReference_GET_id(struct zx_a_EndpointReference_s* x);
struct zx_str* zx_a_EndpointReference_GET_notOnOrAfter(struct zx_a_EndpointReference_s* x);
struct zx_str* zx_a_EndpointReference_GET_Id(struct zx_a_EndpointReference_s* x);
struct zx_str* zx_a_EndpointReference_GET_actor(struct zx_a_EndpointReference_s* x);
struct zx_str* zx_a_EndpointReference_GET_mustUnderstand(struct zx_a_EndpointReference_s* x);

struct zx_a_Address_s* zx_a_EndpointReference_GET_Address(struct zx_a_EndpointReference_s* x, int n);
struct zx_a_ReferenceParameters_s* zx_a_EndpointReference_GET_ReferenceParameters(struct zx_a_EndpointReference_s* x, int n);
struct zx_a_Metadata_s* zx_a_EndpointReference_GET_Metadata(struct zx_a_EndpointReference_s* x, int n);

int zx_a_EndpointReference_NUM_Address(struct zx_a_EndpointReference_s* x);
int zx_a_EndpointReference_NUM_ReferenceParameters(struct zx_a_EndpointReference_s* x);
int zx_a_EndpointReference_NUM_Metadata(struct zx_a_EndpointReference_s* x);

struct zx_a_Address_s* zx_a_EndpointReference_POP_Address(struct zx_a_EndpointReference_s* x);
struct zx_a_ReferenceParameters_s* zx_a_EndpointReference_POP_ReferenceParameters(struct zx_a_EndpointReference_s* x);
struct zx_a_Metadata_s* zx_a_EndpointReference_POP_Metadata(struct zx_a_EndpointReference_s* x);

void zx_a_EndpointReference_PUSH_Address(struct zx_a_EndpointReference_s* x, struct zx_a_Address_s* y);
void zx_a_EndpointReference_PUSH_ReferenceParameters(struct zx_a_EndpointReference_s* x, struct zx_a_ReferenceParameters_s* y);
void zx_a_EndpointReference_PUSH_Metadata(struct zx_a_EndpointReference_s* x, struct zx_a_Metadata_s* y);

void zx_a_EndpointReference_PUT_ID(struct zx_a_EndpointReference_s* x, struct zx_str* y);
void zx_a_EndpointReference_PUT_id(struct zx_a_EndpointReference_s* x, struct zx_str* y);
void zx_a_EndpointReference_PUT_notOnOrAfter(struct zx_a_EndpointReference_s* x, struct zx_str* y);
void zx_a_EndpointReference_PUT_Id(struct zx_a_EndpointReference_s* x, struct zx_str* y);
void zx_a_EndpointReference_PUT_actor(struct zx_a_EndpointReference_s* x, struct zx_str* y);
void zx_a_EndpointReference_PUT_mustUnderstand(struct zx_a_EndpointReference_s* x, struct zx_str* y);

void zx_a_EndpointReference_PUT_Address(struct zx_a_EndpointReference_s* x, int n, struct zx_a_Address_s* y);
void zx_a_EndpointReference_PUT_ReferenceParameters(struct zx_a_EndpointReference_s* x, int n, struct zx_a_ReferenceParameters_s* y);
void zx_a_EndpointReference_PUT_Metadata(struct zx_a_EndpointReference_s* x, int n, struct zx_a_Metadata_s* y);

void zx_a_EndpointReference_ADD_Address(struct zx_a_EndpointReference_s* x, int n, struct zx_a_Address_s* z);
void zx_a_EndpointReference_ADD_ReferenceParameters(struct zx_a_EndpointReference_s* x, int n, struct zx_a_ReferenceParameters_s* z);
void zx_a_EndpointReference_ADD_Metadata(struct zx_a_EndpointReference_s* x, int n, struct zx_a_Metadata_s* z);

void zx_a_EndpointReference_DEL_Address(struct zx_a_EndpointReference_s* x, int n);
void zx_a_EndpointReference_DEL_ReferenceParameters(struct zx_a_EndpointReference_s* x, int n);
void zx_a_EndpointReference_DEL_Metadata(struct zx_a_EndpointReference_s* x, int n);

void zx_a_EndpointReference_REV_Address(struct zx_a_EndpointReference_s* x);
void zx_a_EndpointReference_REV_ReferenceParameters(struct zx_a_EndpointReference_s* x);
void zx_a_EndpointReference_REV_Metadata(struct zx_a_EndpointReference_s* x);

#endif
/* -------------------------- a_FaultTo -------------------------- */
/* refby( zx_e_Header_s ) */
#ifndef zx_a_FaultTo_EXT
#define zx_a_FaultTo_EXT
#endif

struct zx_a_FaultTo_s* zx_DEC_a_FaultTo(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_a_FaultTo_s* zx_NEW_a_FaultTo(struct zx_ctx* c);
void zx_FREE_a_FaultTo(struct zx_ctx* c, struct zx_a_FaultTo_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_a_FaultTo_s* zx_DEEP_CLONE_a_FaultTo(struct zx_ctx* c, struct zx_a_FaultTo_s* x, int dup_strs);
void zx_DUP_STRS_a_FaultTo(struct zx_ctx* c, struct zx_a_FaultTo_s* x);
int zx_WALK_SO_a_FaultTo(struct zx_ctx* c, struct zx_a_FaultTo_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_a_FaultTo(struct zx_ctx* c, struct zx_a_FaultTo_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_a_FaultTo(struct zx_ctx* c, struct zx_a_FaultTo_s* x);
int zx_LEN_WO_a_FaultTo(struct zx_ctx* c, struct zx_a_FaultTo_s* x);
char* zx_ENC_SO_a_FaultTo(struct zx_ctx* c, struct zx_a_FaultTo_s* x, char* p);
char* zx_ENC_WO_a_FaultTo(struct zx_ctx* c, struct zx_a_FaultTo_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_a_FaultTo(struct zx_ctx* c, struct zx_a_FaultTo_s* x);
struct zx_str* zx_EASY_ENC_WO_a_FaultTo(struct zx_ctx* c, struct zx_a_FaultTo_s* x);

struct zx_a_FaultTo_s {
  ZX_ELEM_EXT
  zx_a_FaultTo_EXT
  struct zx_a_Address_s* Address;	/* {1,1}  */
  struct zx_a_ReferenceParameters_s* ReferenceParameters;	/* {0,1} nada */
  struct zx_a_Metadata_s* Metadata;	/* {0,1} nada */
  struct zx_str* ID;	/* {0,1} attribute xs:anyURI */
  struct zx_str* id;	/* {0,1} attribute xs:ID */
  struct zx_str* notOnOrAfter;	/* {0,1} attribute xs:dateTime */
  struct zx_str* Id;	/* {0,1} attribute xs:ID */
  struct zx_str* actor;	/* {0,1} attribute xs:anyURI */
  struct zx_str* mustUnderstand;	/* {0,1} attribute xs:boolean */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_a_FaultTo_GET_ID(struct zx_a_FaultTo_s* x);
struct zx_str* zx_a_FaultTo_GET_id(struct zx_a_FaultTo_s* x);
struct zx_str* zx_a_FaultTo_GET_notOnOrAfter(struct zx_a_FaultTo_s* x);
struct zx_str* zx_a_FaultTo_GET_Id(struct zx_a_FaultTo_s* x);
struct zx_str* zx_a_FaultTo_GET_actor(struct zx_a_FaultTo_s* x);
struct zx_str* zx_a_FaultTo_GET_mustUnderstand(struct zx_a_FaultTo_s* x);

struct zx_a_Address_s* zx_a_FaultTo_GET_Address(struct zx_a_FaultTo_s* x, int n);
struct zx_a_ReferenceParameters_s* zx_a_FaultTo_GET_ReferenceParameters(struct zx_a_FaultTo_s* x, int n);
struct zx_a_Metadata_s* zx_a_FaultTo_GET_Metadata(struct zx_a_FaultTo_s* x, int n);

int zx_a_FaultTo_NUM_Address(struct zx_a_FaultTo_s* x);
int zx_a_FaultTo_NUM_ReferenceParameters(struct zx_a_FaultTo_s* x);
int zx_a_FaultTo_NUM_Metadata(struct zx_a_FaultTo_s* x);

struct zx_a_Address_s* zx_a_FaultTo_POP_Address(struct zx_a_FaultTo_s* x);
struct zx_a_ReferenceParameters_s* zx_a_FaultTo_POP_ReferenceParameters(struct zx_a_FaultTo_s* x);
struct zx_a_Metadata_s* zx_a_FaultTo_POP_Metadata(struct zx_a_FaultTo_s* x);

void zx_a_FaultTo_PUSH_Address(struct zx_a_FaultTo_s* x, struct zx_a_Address_s* y);
void zx_a_FaultTo_PUSH_ReferenceParameters(struct zx_a_FaultTo_s* x, struct zx_a_ReferenceParameters_s* y);
void zx_a_FaultTo_PUSH_Metadata(struct zx_a_FaultTo_s* x, struct zx_a_Metadata_s* y);

void zx_a_FaultTo_PUT_ID(struct zx_a_FaultTo_s* x, struct zx_str* y);
void zx_a_FaultTo_PUT_id(struct zx_a_FaultTo_s* x, struct zx_str* y);
void zx_a_FaultTo_PUT_notOnOrAfter(struct zx_a_FaultTo_s* x, struct zx_str* y);
void zx_a_FaultTo_PUT_Id(struct zx_a_FaultTo_s* x, struct zx_str* y);
void zx_a_FaultTo_PUT_actor(struct zx_a_FaultTo_s* x, struct zx_str* y);
void zx_a_FaultTo_PUT_mustUnderstand(struct zx_a_FaultTo_s* x, struct zx_str* y);

void zx_a_FaultTo_PUT_Address(struct zx_a_FaultTo_s* x, int n, struct zx_a_Address_s* y);
void zx_a_FaultTo_PUT_ReferenceParameters(struct zx_a_FaultTo_s* x, int n, struct zx_a_ReferenceParameters_s* y);
void zx_a_FaultTo_PUT_Metadata(struct zx_a_FaultTo_s* x, int n, struct zx_a_Metadata_s* y);

void zx_a_FaultTo_ADD_Address(struct zx_a_FaultTo_s* x, int n, struct zx_a_Address_s* z);
void zx_a_FaultTo_ADD_ReferenceParameters(struct zx_a_FaultTo_s* x, int n, struct zx_a_ReferenceParameters_s* z);
void zx_a_FaultTo_ADD_Metadata(struct zx_a_FaultTo_s* x, int n, struct zx_a_Metadata_s* z);

void zx_a_FaultTo_DEL_Address(struct zx_a_FaultTo_s* x, int n);
void zx_a_FaultTo_DEL_ReferenceParameters(struct zx_a_FaultTo_s* x, int n);
void zx_a_FaultTo_DEL_Metadata(struct zx_a_FaultTo_s* x, int n);

void zx_a_FaultTo_REV_Address(struct zx_a_FaultTo_s* x);
void zx_a_FaultTo_REV_ReferenceParameters(struct zx_a_FaultTo_s* x);
void zx_a_FaultTo_REV_Metadata(struct zx_a_FaultTo_s* x);

#endif
/* -------------------------- a_From -------------------------- */
/* refby( zx_e_Header_s ) */
#ifndef zx_a_From_EXT
#define zx_a_From_EXT
#endif

struct zx_a_From_s* zx_DEC_a_From(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_a_From_s* zx_NEW_a_From(struct zx_ctx* c);
void zx_FREE_a_From(struct zx_ctx* c, struct zx_a_From_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_a_From_s* zx_DEEP_CLONE_a_From(struct zx_ctx* c, struct zx_a_From_s* x, int dup_strs);
void zx_DUP_STRS_a_From(struct zx_ctx* c, struct zx_a_From_s* x);
int zx_WALK_SO_a_From(struct zx_ctx* c, struct zx_a_From_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_a_From(struct zx_ctx* c, struct zx_a_From_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_a_From(struct zx_ctx* c, struct zx_a_From_s* x);
int zx_LEN_WO_a_From(struct zx_ctx* c, struct zx_a_From_s* x);
char* zx_ENC_SO_a_From(struct zx_ctx* c, struct zx_a_From_s* x, char* p);
char* zx_ENC_WO_a_From(struct zx_ctx* c, struct zx_a_From_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_a_From(struct zx_ctx* c, struct zx_a_From_s* x);
struct zx_str* zx_EASY_ENC_WO_a_From(struct zx_ctx* c, struct zx_a_From_s* x);

struct zx_a_From_s {
  ZX_ELEM_EXT
  zx_a_From_EXT
  struct zx_a_Address_s* Address;	/* {1,1}  */
  struct zx_a_ReferenceParameters_s* ReferenceParameters;	/* {0,1} nada */
  struct zx_a_Metadata_s* Metadata;	/* {0,1} nada */
  struct zx_str* ID;	/* {0,1} attribute xs:anyURI */
  struct zx_str* id;	/* {0,1} attribute xs:ID */
  struct zx_str* notOnOrAfter;	/* {0,1} attribute xs:dateTime */
  struct zx_str* Id;	/* {0,1} attribute xs:ID */
  struct zx_str* actor;	/* {0,1} attribute xs:anyURI */
  struct zx_str* mustUnderstand;	/* {0,1} attribute xs:boolean */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_a_From_GET_ID(struct zx_a_From_s* x);
struct zx_str* zx_a_From_GET_id(struct zx_a_From_s* x);
struct zx_str* zx_a_From_GET_notOnOrAfter(struct zx_a_From_s* x);
struct zx_str* zx_a_From_GET_Id(struct zx_a_From_s* x);
struct zx_str* zx_a_From_GET_actor(struct zx_a_From_s* x);
struct zx_str* zx_a_From_GET_mustUnderstand(struct zx_a_From_s* x);

struct zx_a_Address_s* zx_a_From_GET_Address(struct zx_a_From_s* x, int n);
struct zx_a_ReferenceParameters_s* zx_a_From_GET_ReferenceParameters(struct zx_a_From_s* x, int n);
struct zx_a_Metadata_s* zx_a_From_GET_Metadata(struct zx_a_From_s* x, int n);

int zx_a_From_NUM_Address(struct zx_a_From_s* x);
int zx_a_From_NUM_ReferenceParameters(struct zx_a_From_s* x);
int zx_a_From_NUM_Metadata(struct zx_a_From_s* x);

struct zx_a_Address_s* zx_a_From_POP_Address(struct zx_a_From_s* x);
struct zx_a_ReferenceParameters_s* zx_a_From_POP_ReferenceParameters(struct zx_a_From_s* x);
struct zx_a_Metadata_s* zx_a_From_POP_Metadata(struct zx_a_From_s* x);

void zx_a_From_PUSH_Address(struct zx_a_From_s* x, struct zx_a_Address_s* y);
void zx_a_From_PUSH_ReferenceParameters(struct zx_a_From_s* x, struct zx_a_ReferenceParameters_s* y);
void zx_a_From_PUSH_Metadata(struct zx_a_From_s* x, struct zx_a_Metadata_s* y);

void zx_a_From_PUT_ID(struct zx_a_From_s* x, struct zx_str* y);
void zx_a_From_PUT_id(struct zx_a_From_s* x, struct zx_str* y);
void zx_a_From_PUT_notOnOrAfter(struct zx_a_From_s* x, struct zx_str* y);
void zx_a_From_PUT_Id(struct zx_a_From_s* x, struct zx_str* y);
void zx_a_From_PUT_actor(struct zx_a_From_s* x, struct zx_str* y);
void zx_a_From_PUT_mustUnderstand(struct zx_a_From_s* x, struct zx_str* y);

void zx_a_From_PUT_Address(struct zx_a_From_s* x, int n, struct zx_a_Address_s* y);
void zx_a_From_PUT_ReferenceParameters(struct zx_a_From_s* x, int n, struct zx_a_ReferenceParameters_s* y);
void zx_a_From_PUT_Metadata(struct zx_a_From_s* x, int n, struct zx_a_Metadata_s* y);

void zx_a_From_ADD_Address(struct zx_a_From_s* x, int n, struct zx_a_Address_s* z);
void zx_a_From_ADD_ReferenceParameters(struct zx_a_From_s* x, int n, struct zx_a_ReferenceParameters_s* z);
void zx_a_From_ADD_Metadata(struct zx_a_From_s* x, int n, struct zx_a_Metadata_s* z);

void zx_a_From_DEL_Address(struct zx_a_From_s* x, int n);
void zx_a_From_DEL_ReferenceParameters(struct zx_a_From_s* x, int n);
void zx_a_From_DEL_Metadata(struct zx_a_From_s* x, int n);

void zx_a_From_REV_Address(struct zx_a_From_s* x);
void zx_a_From_REV_ReferenceParameters(struct zx_a_From_s* x);
void zx_a_From_REV_Metadata(struct zx_a_From_s* x);

#endif
/* -------------------------- a_MessageID -------------------------- */
/* refby( zx_e_Header_s ) */
#ifndef zx_a_MessageID_EXT
#define zx_a_MessageID_EXT
#endif

struct zx_a_MessageID_s* zx_DEC_a_MessageID(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_a_MessageID_s* zx_NEW_a_MessageID(struct zx_ctx* c);
void zx_FREE_a_MessageID(struct zx_ctx* c, struct zx_a_MessageID_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_a_MessageID_s* zx_DEEP_CLONE_a_MessageID(struct zx_ctx* c, struct zx_a_MessageID_s* x, int dup_strs);
void zx_DUP_STRS_a_MessageID(struct zx_ctx* c, struct zx_a_MessageID_s* x);
int zx_WALK_SO_a_MessageID(struct zx_ctx* c, struct zx_a_MessageID_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_a_MessageID(struct zx_ctx* c, struct zx_a_MessageID_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_a_MessageID(struct zx_ctx* c, struct zx_a_MessageID_s* x);
int zx_LEN_WO_a_MessageID(struct zx_ctx* c, struct zx_a_MessageID_s* x);
char* zx_ENC_SO_a_MessageID(struct zx_ctx* c, struct zx_a_MessageID_s* x, char* p);
char* zx_ENC_WO_a_MessageID(struct zx_ctx* c, struct zx_a_MessageID_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_a_MessageID(struct zx_ctx* c, struct zx_a_MessageID_s* x);
struct zx_str* zx_EASY_ENC_WO_a_MessageID(struct zx_ctx* c, struct zx_a_MessageID_s* x);

struct zx_a_MessageID_s {
  ZX_ELEM_EXT
  zx_a_MessageID_EXT
  struct zx_str* ID;	/* {0,1} attribute xs:anyURI */
  struct zx_str* id;	/* {0,1} attribute xs:ID */
  struct zx_str* Id;	/* {0,1} attribute xs:ID */
  struct zx_str* actor;	/* {0,1} attribute xs:anyURI */
  struct zx_str* mustUnderstand;	/* {0,1} attribute xs:boolean */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_a_MessageID_GET_ID(struct zx_a_MessageID_s* x);
struct zx_str* zx_a_MessageID_GET_id(struct zx_a_MessageID_s* x);
struct zx_str* zx_a_MessageID_GET_Id(struct zx_a_MessageID_s* x);
struct zx_str* zx_a_MessageID_GET_actor(struct zx_a_MessageID_s* x);
struct zx_str* zx_a_MessageID_GET_mustUnderstand(struct zx_a_MessageID_s* x);





void zx_a_MessageID_PUT_ID(struct zx_a_MessageID_s* x, struct zx_str* y);
void zx_a_MessageID_PUT_id(struct zx_a_MessageID_s* x, struct zx_str* y);
void zx_a_MessageID_PUT_Id(struct zx_a_MessageID_s* x, struct zx_str* y);
void zx_a_MessageID_PUT_actor(struct zx_a_MessageID_s* x, struct zx_str* y);
void zx_a_MessageID_PUT_mustUnderstand(struct zx_a_MessageID_s* x, struct zx_str* y);





#endif
/* -------------------------- a_Metadata -------------------------- */
/* refby( zx_b_InteractionService_s zx_a_EndpointReference_s zx_a_From_s zx_wst_Issuer_s zx_b_ApplicationEPR_s zx_a_ReplyTo_s zx_prov_CallbackEPR_s zx_shps_CallbackEPR_s zx_a_FaultTo_s zx_prov_ProvisioningServiceEPR_s zx_b_EndpointUpdate_s ) */
#ifndef zx_a_Metadata_EXT
#define zx_a_Metadata_EXT
#endif

struct zx_a_Metadata_s* zx_DEC_a_Metadata(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_a_Metadata_s* zx_NEW_a_Metadata(struct zx_ctx* c);
void zx_FREE_a_Metadata(struct zx_ctx* c, struct zx_a_Metadata_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_a_Metadata_s* zx_DEEP_CLONE_a_Metadata(struct zx_ctx* c, struct zx_a_Metadata_s* x, int dup_strs);
void zx_DUP_STRS_a_Metadata(struct zx_ctx* c, struct zx_a_Metadata_s* x);
int zx_WALK_SO_a_Metadata(struct zx_ctx* c, struct zx_a_Metadata_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_a_Metadata(struct zx_ctx* c, struct zx_a_Metadata_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_a_Metadata(struct zx_ctx* c, struct zx_a_Metadata_s* x);
int zx_LEN_WO_a_Metadata(struct zx_ctx* c, struct zx_a_Metadata_s* x);
char* zx_ENC_SO_a_Metadata(struct zx_ctx* c, struct zx_a_Metadata_s* x, char* p);
char* zx_ENC_WO_a_Metadata(struct zx_ctx* c, struct zx_a_Metadata_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_a_Metadata(struct zx_ctx* c, struct zx_a_Metadata_s* x);
struct zx_str* zx_EASY_ENC_WO_a_Metadata(struct zx_ctx* c, struct zx_a_Metadata_s* x);

struct zx_a_Metadata_s {
  ZX_ELEM_EXT
  zx_a_Metadata_EXT
  struct zx_sbf_Framework_s* Framework;	/* {0,1} nada */
  struct zx_elem_s* Abstract;	/* {0,1} xs:string */
  struct zx_elem_s* ProviderID;	/* {0,1} xs:anyURI */
  struct zx_elem_s* ServiceType;	/* {0,1} xs:anyURI */
  struct zx_di_SecurityContext_s* SecurityContext;	/* {0,1} nada */
};

#ifdef ZX_ENA_GETPUT

struct zx_sbf_Framework_s* zx_a_Metadata_GET_Framework(struct zx_a_Metadata_s* x, int n);
struct zx_elem_s* zx_a_Metadata_GET_Abstract(struct zx_a_Metadata_s* x, int n);
struct zx_elem_s* zx_a_Metadata_GET_ProviderID(struct zx_a_Metadata_s* x, int n);
struct zx_elem_s* zx_a_Metadata_GET_ServiceType(struct zx_a_Metadata_s* x, int n);
struct zx_di_SecurityContext_s* zx_a_Metadata_GET_SecurityContext(struct zx_a_Metadata_s* x, int n);

int zx_a_Metadata_NUM_Framework(struct zx_a_Metadata_s* x);
int zx_a_Metadata_NUM_Abstract(struct zx_a_Metadata_s* x);
int zx_a_Metadata_NUM_ProviderID(struct zx_a_Metadata_s* x);
int zx_a_Metadata_NUM_ServiceType(struct zx_a_Metadata_s* x);
int zx_a_Metadata_NUM_SecurityContext(struct zx_a_Metadata_s* x);

struct zx_sbf_Framework_s* zx_a_Metadata_POP_Framework(struct zx_a_Metadata_s* x);
struct zx_elem_s* zx_a_Metadata_POP_Abstract(struct zx_a_Metadata_s* x);
struct zx_elem_s* zx_a_Metadata_POP_ProviderID(struct zx_a_Metadata_s* x);
struct zx_elem_s* zx_a_Metadata_POP_ServiceType(struct zx_a_Metadata_s* x);
struct zx_di_SecurityContext_s* zx_a_Metadata_POP_SecurityContext(struct zx_a_Metadata_s* x);

void zx_a_Metadata_PUSH_Framework(struct zx_a_Metadata_s* x, struct zx_sbf_Framework_s* y);
void zx_a_Metadata_PUSH_Abstract(struct zx_a_Metadata_s* x, struct zx_elem_s* y);
void zx_a_Metadata_PUSH_ProviderID(struct zx_a_Metadata_s* x, struct zx_elem_s* y);
void zx_a_Metadata_PUSH_ServiceType(struct zx_a_Metadata_s* x, struct zx_elem_s* y);
void zx_a_Metadata_PUSH_SecurityContext(struct zx_a_Metadata_s* x, struct zx_di_SecurityContext_s* y);


void zx_a_Metadata_PUT_Framework(struct zx_a_Metadata_s* x, int n, struct zx_sbf_Framework_s* y);
void zx_a_Metadata_PUT_Abstract(struct zx_a_Metadata_s* x, int n, struct zx_elem_s* y);
void zx_a_Metadata_PUT_ProviderID(struct zx_a_Metadata_s* x, int n, struct zx_elem_s* y);
void zx_a_Metadata_PUT_ServiceType(struct zx_a_Metadata_s* x, int n, struct zx_elem_s* y);
void zx_a_Metadata_PUT_SecurityContext(struct zx_a_Metadata_s* x, int n, struct zx_di_SecurityContext_s* y);

void zx_a_Metadata_ADD_Framework(struct zx_a_Metadata_s* x, int n, struct zx_sbf_Framework_s* z);
void zx_a_Metadata_ADD_Abstract(struct zx_a_Metadata_s* x, int n, struct zx_elem_s* z);
void zx_a_Metadata_ADD_ProviderID(struct zx_a_Metadata_s* x, int n, struct zx_elem_s* z);
void zx_a_Metadata_ADD_ServiceType(struct zx_a_Metadata_s* x, int n, struct zx_elem_s* z);
void zx_a_Metadata_ADD_SecurityContext(struct zx_a_Metadata_s* x, int n, struct zx_di_SecurityContext_s* z);

void zx_a_Metadata_DEL_Framework(struct zx_a_Metadata_s* x, int n);
void zx_a_Metadata_DEL_Abstract(struct zx_a_Metadata_s* x, int n);
void zx_a_Metadata_DEL_ProviderID(struct zx_a_Metadata_s* x, int n);
void zx_a_Metadata_DEL_ServiceType(struct zx_a_Metadata_s* x, int n);
void zx_a_Metadata_DEL_SecurityContext(struct zx_a_Metadata_s* x, int n);

void zx_a_Metadata_REV_Framework(struct zx_a_Metadata_s* x);
void zx_a_Metadata_REV_Abstract(struct zx_a_Metadata_s* x);
void zx_a_Metadata_REV_ProviderID(struct zx_a_Metadata_s* x);
void zx_a_Metadata_REV_ServiceType(struct zx_a_Metadata_s* x);
void zx_a_Metadata_REV_SecurityContext(struct zx_a_Metadata_s* x);

#endif
/* -------------------------- a_ProblemAction -------------------------- */
/* refby( ) */
#ifndef zx_a_ProblemAction_EXT
#define zx_a_ProblemAction_EXT
#endif

struct zx_a_ProblemAction_s* zx_DEC_a_ProblemAction(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_a_ProblemAction_s* zx_NEW_a_ProblemAction(struct zx_ctx* c);
void zx_FREE_a_ProblemAction(struct zx_ctx* c, struct zx_a_ProblemAction_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_a_ProblemAction_s* zx_DEEP_CLONE_a_ProblemAction(struct zx_ctx* c, struct zx_a_ProblemAction_s* x, int dup_strs);
void zx_DUP_STRS_a_ProblemAction(struct zx_ctx* c, struct zx_a_ProblemAction_s* x);
int zx_WALK_SO_a_ProblemAction(struct zx_ctx* c, struct zx_a_ProblemAction_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_a_ProblemAction(struct zx_ctx* c, struct zx_a_ProblemAction_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_a_ProblemAction(struct zx_ctx* c, struct zx_a_ProblemAction_s* x);
int zx_LEN_WO_a_ProblemAction(struct zx_ctx* c, struct zx_a_ProblemAction_s* x);
char* zx_ENC_SO_a_ProblemAction(struct zx_ctx* c, struct zx_a_ProblemAction_s* x, char* p);
char* zx_ENC_WO_a_ProblemAction(struct zx_ctx* c, struct zx_a_ProblemAction_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_a_ProblemAction(struct zx_ctx* c, struct zx_a_ProblemAction_s* x);
struct zx_str* zx_EASY_ENC_WO_a_ProblemAction(struct zx_ctx* c, struct zx_a_ProblemAction_s* x);

struct zx_a_ProblemAction_s {
  ZX_ELEM_EXT
  zx_a_ProblemAction_EXT
  struct zx_a_Action_s* Action;	/* {0,1} nada */
  struct zx_elem_s* SoapAction;	/* {0,1} xs:anyURI */
  struct zx_str* ID;	/* {0,1} attribute xs:anyURI */
  struct zx_str* id;	/* {0,1} attribute xs:ID */
  struct zx_str* Id;	/* {0,1} attribute xs:ID */
  struct zx_str* actor;	/* {0,1} attribute xs:anyURI */
  struct zx_str* mustUnderstand;	/* {0,1} attribute xs:boolean */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_a_ProblemAction_GET_ID(struct zx_a_ProblemAction_s* x);
struct zx_str* zx_a_ProblemAction_GET_id(struct zx_a_ProblemAction_s* x);
struct zx_str* zx_a_ProblemAction_GET_Id(struct zx_a_ProblemAction_s* x);
struct zx_str* zx_a_ProblemAction_GET_actor(struct zx_a_ProblemAction_s* x);
struct zx_str* zx_a_ProblemAction_GET_mustUnderstand(struct zx_a_ProblemAction_s* x);

struct zx_a_Action_s* zx_a_ProblemAction_GET_Action(struct zx_a_ProblemAction_s* x, int n);
struct zx_elem_s* zx_a_ProblemAction_GET_SoapAction(struct zx_a_ProblemAction_s* x, int n);

int zx_a_ProblemAction_NUM_Action(struct zx_a_ProblemAction_s* x);
int zx_a_ProblemAction_NUM_SoapAction(struct zx_a_ProblemAction_s* x);

struct zx_a_Action_s* zx_a_ProblemAction_POP_Action(struct zx_a_ProblemAction_s* x);
struct zx_elem_s* zx_a_ProblemAction_POP_SoapAction(struct zx_a_ProblemAction_s* x);

void zx_a_ProblemAction_PUSH_Action(struct zx_a_ProblemAction_s* x, struct zx_a_Action_s* y);
void zx_a_ProblemAction_PUSH_SoapAction(struct zx_a_ProblemAction_s* x, struct zx_elem_s* y);

void zx_a_ProblemAction_PUT_ID(struct zx_a_ProblemAction_s* x, struct zx_str* y);
void zx_a_ProblemAction_PUT_id(struct zx_a_ProblemAction_s* x, struct zx_str* y);
void zx_a_ProblemAction_PUT_Id(struct zx_a_ProblemAction_s* x, struct zx_str* y);
void zx_a_ProblemAction_PUT_actor(struct zx_a_ProblemAction_s* x, struct zx_str* y);
void zx_a_ProblemAction_PUT_mustUnderstand(struct zx_a_ProblemAction_s* x, struct zx_str* y);

void zx_a_ProblemAction_PUT_Action(struct zx_a_ProblemAction_s* x, int n, struct zx_a_Action_s* y);
void zx_a_ProblemAction_PUT_SoapAction(struct zx_a_ProblemAction_s* x, int n, struct zx_elem_s* y);

void zx_a_ProblemAction_ADD_Action(struct zx_a_ProblemAction_s* x, int n, struct zx_a_Action_s* z);
void zx_a_ProblemAction_ADD_SoapAction(struct zx_a_ProblemAction_s* x, int n, struct zx_elem_s* z);

void zx_a_ProblemAction_DEL_Action(struct zx_a_ProblemAction_s* x, int n);
void zx_a_ProblemAction_DEL_SoapAction(struct zx_a_ProblemAction_s* x, int n);

void zx_a_ProblemAction_REV_Action(struct zx_a_ProblemAction_s* x);
void zx_a_ProblemAction_REV_SoapAction(struct zx_a_ProblemAction_s* x);

#endif
/* -------------------------- a_ProblemHeader -------------------------- */
/* refby( ) */
#ifndef zx_a_ProblemHeader_EXT
#define zx_a_ProblemHeader_EXT
#endif

struct zx_a_ProblemHeader_s* zx_DEC_a_ProblemHeader(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_a_ProblemHeader_s* zx_NEW_a_ProblemHeader(struct zx_ctx* c);
void zx_FREE_a_ProblemHeader(struct zx_ctx* c, struct zx_a_ProblemHeader_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_a_ProblemHeader_s* zx_DEEP_CLONE_a_ProblemHeader(struct zx_ctx* c, struct zx_a_ProblemHeader_s* x, int dup_strs);
void zx_DUP_STRS_a_ProblemHeader(struct zx_ctx* c, struct zx_a_ProblemHeader_s* x);
int zx_WALK_SO_a_ProblemHeader(struct zx_ctx* c, struct zx_a_ProblemHeader_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_a_ProblemHeader(struct zx_ctx* c, struct zx_a_ProblemHeader_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_a_ProblemHeader(struct zx_ctx* c, struct zx_a_ProblemHeader_s* x);
int zx_LEN_WO_a_ProblemHeader(struct zx_ctx* c, struct zx_a_ProblemHeader_s* x);
char* zx_ENC_SO_a_ProblemHeader(struct zx_ctx* c, struct zx_a_ProblemHeader_s* x, char* p);
char* zx_ENC_WO_a_ProblemHeader(struct zx_ctx* c, struct zx_a_ProblemHeader_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_a_ProblemHeader(struct zx_ctx* c, struct zx_a_ProblemHeader_s* x);
struct zx_str* zx_EASY_ENC_WO_a_ProblemHeader(struct zx_ctx* c, struct zx_a_ProblemHeader_s* x);

struct zx_a_ProblemHeader_s {
  ZX_ELEM_EXT
  zx_a_ProblemHeader_EXT
  struct zx_str* ID;	/* {0,1} attribute xs:anyURI */
  struct zx_str* id;	/* {0,1} attribute xs:ID */
  struct zx_str* Id;	/* {0,1} attribute xs:ID */
  struct zx_str* actor;	/* {0,1} attribute xs:anyURI */
  struct zx_str* mustUnderstand;	/* {0,1} attribute xs:boolean */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_a_ProblemHeader_GET_ID(struct zx_a_ProblemHeader_s* x);
struct zx_str* zx_a_ProblemHeader_GET_id(struct zx_a_ProblemHeader_s* x);
struct zx_str* zx_a_ProblemHeader_GET_Id(struct zx_a_ProblemHeader_s* x);
struct zx_str* zx_a_ProblemHeader_GET_actor(struct zx_a_ProblemHeader_s* x);
struct zx_str* zx_a_ProblemHeader_GET_mustUnderstand(struct zx_a_ProblemHeader_s* x);





void zx_a_ProblemHeader_PUT_ID(struct zx_a_ProblemHeader_s* x, struct zx_str* y);
void zx_a_ProblemHeader_PUT_id(struct zx_a_ProblemHeader_s* x, struct zx_str* y);
void zx_a_ProblemHeader_PUT_Id(struct zx_a_ProblemHeader_s* x, struct zx_str* y);
void zx_a_ProblemHeader_PUT_actor(struct zx_a_ProblemHeader_s* x, struct zx_str* y);
void zx_a_ProblemHeader_PUT_mustUnderstand(struct zx_a_ProblemHeader_s* x, struct zx_str* y);





#endif
/* -------------------------- a_ProblemHeaderQName -------------------------- */
/* refby( ) */
#ifndef zx_a_ProblemHeaderQName_EXT
#define zx_a_ProblemHeaderQName_EXT
#endif

struct zx_a_ProblemHeaderQName_s* zx_DEC_a_ProblemHeaderQName(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_a_ProblemHeaderQName_s* zx_NEW_a_ProblemHeaderQName(struct zx_ctx* c);
void zx_FREE_a_ProblemHeaderQName(struct zx_ctx* c, struct zx_a_ProblemHeaderQName_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_a_ProblemHeaderQName_s* zx_DEEP_CLONE_a_ProblemHeaderQName(struct zx_ctx* c, struct zx_a_ProblemHeaderQName_s* x, int dup_strs);
void zx_DUP_STRS_a_ProblemHeaderQName(struct zx_ctx* c, struct zx_a_ProblemHeaderQName_s* x);
int zx_WALK_SO_a_ProblemHeaderQName(struct zx_ctx* c, struct zx_a_ProblemHeaderQName_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_a_ProblemHeaderQName(struct zx_ctx* c, struct zx_a_ProblemHeaderQName_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_a_ProblemHeaderQName(struct zx_ctx* c, struct zx_a_ProblemHeaderQName_s* x);
int zx_LEN_WO_a_ProblemHeaderQName(struct zx_ctx* c, struct zx_a_ProblemHeaderQName_s* x);
char* zx_ENC_SO_a_ProblemHeaderQName(struct zx_ctx* c, struct zx_a_ProblemHeaderQName_s* x, char* p);
char* zx_ENC_WO_a_ProblemHeaderQName(struct zx_ctx* c, struct zx_a_ProblemHeaderQName_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_a_ProblemHeaderQName(struct zx_ctx* c, struct zx_a_ProblemHeaderQName_s* x);
struct zx_str* zx_EASY_ENC_WO_a_ProblemHeaderQName(struct zx_ctx* c, struct zx_a_ProblemHeaderQName_s* x);

struct zx_a_ProblemHeaderQName_s {
  ZX_ELEM_EXT
  zx_a_ProblemHeaderQName_EXT
  struct zx_str* ID;	/* {0,1} attribute xs:anyURI */
  struct zx_str* id;	/* {0,1} attribute xs:ID */
  struct zx_str* Id;	/* {0,1} attribute xs:ID */
  struct zx_str* actor;	/* {0,1} attribute xs:anyURI */
  struct zx_str* mustUnderstand;	/* {0,1} attribute xs:boolean */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_a_ProblemHeaderQName_GET_ID(struct zx_a_ProblemHeaderQName_s* x);
struct zx_str* zx_a_ProblemHeaderQName_GET_id(struct zx_a_ProblemHeaderQName_s* x);
struct zx_str* zx_a_ProblemHeaderQName_GET_Id(struct zx_a_ProblemHeaderQName_s* x);
struct zx_str* zx_a_ProblemHeaderQName_GET_actor(struct zx_a_ProblemHeaderQName_s* x);
struct zx_str* zx_a_ProblemHeaderQName_GET_mustUnderstand(struct zx_a_ProblemHeaderQName_s* x);





void zx_a_ProblemHeaderQName_PUT_ID(struct zx_a_ProblemHeaderQName_s* x, struct zx_str* y);
void zx_a_ProblemHeaderQName_PUT_id(struct zx_a_ProblemHeaderQName_s* x, struct zx_str* y);
void zx_a_ProblemHeaderQName_PUT_Id(struct zx_a_ProblemHeaderQName_s* x, struct zx_str* y);
void zx_a_ProblemHeaderQName_PUT_actor(struct zx_a_ProblemHeaderQName_s* x, struct zx_str* y);
void zx_a_ProblemHeaderQName_PUT_mustUnderstand(struct zx_a_ProblemHeaderQName_s* x, struct zx_str* y);





#endif
/* -------------------------- a_ProblemURI -------------------------- */
/* refby( ) */
#ifndef zx_a_ProblemURI_EXT
#define zx_a_ProblemURI_EXT
#endif

struct zx_a_ProblemURI_s* zx_DEC_a_ProblemURI(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_a_ProblemURI_s* zx_NEW_a_ProblemURI(struct zx_ctx* c);
void zx_FREE_a_ProblemURI(struct zx_ctx* c, struct zx_a_ProblemURI_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_a_ProblemURI_s* zx_DEEP_CLONE_a_ProblemURI(struct zx_ctx* c, struct zx_a_ProblemURI_s* x, int dup_strs);
void zx_DUP_STRS_a_ProblemURI(struct zx_ctx* c, struct zx_a_ProblemURI_s* x);
int zx_WALK_SO_a_ProblemURI(struct zx_ctx* c, struct zx_a_ProblemURI_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_a_ProblemURI(struct zx_ctx* c, struct zx_a_ProblemURI_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_a_ProblemURI(struct zx_ctx* c, struct zx_a_ProblemURI_s* x);
int zx_LEN_WO_a_ProblemURI(struct zx_ctx* c, struct zx_a_ProblemURI_s* x);
char* zx_ENC_SO_a_ProblemURI(struct zx_ctx* c, struct zx_a_ProblemURI_s* x, char* p);
char* zx_ENC_WO_a_ProblemURI(struct zx_ctx* c, struct zx_a_ProblemURI_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_a_ProblemURI(struct zx_ctx* c, struct zx_a_ProblemURI_s* x);
struct zx_str* zx_EASY_ENC_WO_a_ProblemURI(struct zx_ctx* c, struct zx_a_ProblemURI_s* x);

struct zx_a_ProblemURI_s {
  ZX_ELEM_EXT
  zx_a_ProblemURI_EXT
  struct zx_str* ID;	/* {0,1} attribute xs:anyURI */
  struct zx_str* id;	/* {0,1} attribute xs:ID */
  struct zx_str* Id;	/* {0,1} attribute xs:ID */
  struct zx_str* actor;	/* {0,1} attribute xs:anyURI */
  struct zx_str* mustUnderstand;	/* {0,1} attribute xs:boolean */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_a_ProblemURI_GET_ID(struct zx_a_ProblemURI_s* x);
struct zx_str* zx_a_ProblemURI_GET_id(struct zx_a_ProblemURI_s* x);
struct zx_str* zx_a_ProblemURI_GET_Id(struct zx_a_ProblemURI_s* x);
struct zx_str* zx_a_ProblemURI_GET_actor(struct zx_a_ProblemURI_s* x);
struct zx_str* zx_a_ProblemURI_GET_mustUnderstand(struct zx_a_ProblemURI_s* x);





void zx_a_ProblemURI_PUT_ID(struct zx_a_ProblemURI_s* x, struct zx_str* y);
void zx_a_ProblemURI_PUT_id(struct zx_a_ProblemURI_s* x, struct zx_str* y);
void zx_a_ProblemURI_PUT_Id(struct zx_a_ProblemURI_s* x, struct zx_str* y);
void zx_a_ProblemURI_PUT_actor(struct zx_a_ProblemURI_s* x, struct zx_str* y);
void zx_a_ProblemURI_PUT_mustUnderstand(struct zx_a_ProblemURI_s* x, struct zx_str* y);





#endif
/* -------------------------- a_ReferenceParameters -------------------------- */
/* refby( zx_b_InteractionService_s zx_a_EndpointReference_s zx_a_From_s zx_wst_Issuer_s zx_b_ApplicationEPR_s zx_a_ReplyTo_s zx_prov_CallbackEPR_s zx_shps_CallbackEPR_s zx_a_FaultTo_s zx_e_Header_s zx_prov_ProvisioningServiceEPR_s zx_b_EndpointUpdate_s ) */
#ifndef zx_a_ReferenceParameters_EXT
#define zx_a_ReferenceParameters_EXT
#endif

struct zx_a_ReferenceParameters_s* zx_DEC_a_ReferenceParameters(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_a_ReferenceParameters_s* zx_NEW_a_ReferenceParameters(struct zx_ctx* c);
void zx_FREE_a_ReferenceParameters(struct zx_ctx* c, struct zx_a_ReferenceParameters_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_a_ReferenceParameters_s* zx_DEEP_CLONE_a_ReferenceParameters(struct zx_ctx* c, struct zx_a_ReferenceParameters_s* x, int dup_strs);
void zx_DUP_STRS_a_ReferenceParameters(struct zx_ctx* c, struct zx_a_ReferenceParameters_s* x);
int zx_WALK_SO_a_ReferenceParameters(struct zx_ctx* c, struct zx_a_ReferenceParameters_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_a_ReferenceParameters(struct zx_ctx* c, struct zx_a_ReferenceParameters_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_a_ReferenceParameters(struct zx_ctx* c, struct zx_a_ReferenceParameters_s* x);
int zx_LEN_WO_a_ReferenceParameters(struct zx_ctx* c, struct zx_a_ReferenceParameters_s* x);
char* zx_ENC_SO_a_ReferenceParameters(struct zx_ctx* c, struct zx_a_ReferenceParameters_s* x, char* p);
char* zx_ENC_WO_a_ReferenceParameters(struct zx_ctx* c, struct zx_a_ReferenceParameters_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_a_ReferenceParameters(struct zx_ctx* c, struct zx_a_ReferenceParameters_s* x);
struct zx_str* zx_EASY_ENC_WO_a_ReferenceParameters(struct zx_ctx* c, struct zx_a_ReferenceParameters_s* x);

struct zx_a_ReferenceParameters_s {
  ZX_ELEM_EXT
  zx_a_ReferenceParameters_EXT
  struct zx_b_TargetIdentity_s* TargetIdentity;	/* {0,-1} nada */
  struct zx_str* ID;	/* {0,1} attribute xs:anyURI */
  struct zx_str* id;	/* {0,1} attribute xs:ID */
  struct zx_str* Id;	/* {0,1} attribute xs:ID */
  struct zx_str* actor;	/* {0,1} attribute xs:anyURI */
  struct zx_str* mustUnderstand;	/* {0,1} attribute xs:boolean */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_a_ReferenceParameters_GET_ID(struct zx_a_ReferenceParameters_s* x);
struct zx_str* zx_a_ReferenceParameters_GET_id(struct zx_a_ReferenceParameters_s* x);
struct zx_str* zx_a_ReferenceParameters_GET_Id(struct zx_a_ReferenceParameters_s* x);
struct zx_str* zx_a_ReferenceParameters_GET_actor(struct zx_a_ReferenceParameters_s* x);
struct zx_str* zx_a_ReferenceParameters_GET_mustUnderstand(struct zx_a_ReferenceParameters_s* x);

struct zx_b_TargetIdentity_s* zx_a_ReferenceParameters_GET_TargetIdentity(struct zx_a_ReferenceParameters_s* x, int n);

int zx_a_ReferenceParameters_NUM_TargetIdentity(struct zx_a_ReferenceParameters_s* x);

struct zx_b_TargetIdentity_s* zx_a_ReferenceParameters_POP_TargetIdentity(struct zx_a_ReferenceParameters_s* x);

void zx_a_ReferenceParameters_PUSH_TargetIdentity(struct zx_a_ReferenceParameters_s* x, struct zx_b_TargetIdentity_s* y);

void zx_a_ReferenceParameters_PUT_ID(struct zx_a_ReferenceParameters_s* x, struct zx_str* y);
void zx_a_ReferenceParameters_PUT_id(struct zx_a_ReferenceParameters_s* x, struct zx_str* y);
void zx_a_ReferenceParameters_PUT_Id(struct zx_a_ReferenceParameters_s* x, struct zx_str* y);
void zx_a_ReferenceParameters_PUT_actor(struct zx_a_ReferenceParameters_s* x, struct zx_str* y);
void zx_a_ReferenceParameters_PUT_mustUnderstand(struct zx_a_ReferenceParameters_s* x, struct zx_str* y);

void zx_a_ReferenceParameters_PUT_TargetIdentity(struct zx_a_ReferenceParameters_s* x, int n, struct zx_b_TargetIdentity_s* y);

void zx_a_ReferenceParameters_ADD_TargetIdentity(struct zx_a_ReferenceParameters_s* x, int n, struct zx_b_TargetIdentity_s* z);

void zx_a_ReferenceParameters_DEL_TargetIdentity(struct zx_a_ReferenceParameters_s* x, int n);

void zx_a_ReferenceParameters_REV_TargetIdentity(struct zx_a_ReferenceParameters_s* x);

#endif
/* -------------------------- a_RelatesTo -------------------------- */
/* refby( zx_e_Header_s ) */
#ifndef zx_a_RelatesTo_EXT
#define zx_a_RelatesTo_EXT
#endif

struct zx_a_RelatesTo_s* zx_DEC_a_RelatesTo(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_a_RelatesTo_s* zx_NEW_a_RelatesTo(struct zx_ctx* c);
void zx_FREE_a_RelatesTo(struct zx_ctx* c, struct zx_a_RelatesTo_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_a_RelatesTo_s* zx_DEEP_CLONE_a_RelatesTo(struct zx_ctx* c, struct zx_a_RelatesTo_s* x, int dup_strs);
void zx_DUP_STRS_a_RelatesTo(struct zx_ctx* c, struct zx_a_RelatesTo_s* x);
int zx_WALK_SO_a_RelatesTo(struct zx_ctx* c, struct zx_a_RelatesTo_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_a_RelatesTo(struct zx_ctx* c, struct zx_a_RelatesTo_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_a_RelatesTo(struct zx_ctx* c, struct zx_a_RelatesTo_s* x);
int zx_LEN_WO_a_RelatesTo(struct zx_ctx* c, struct zx_a_RelatesTo_s* x);
char* zx_ENC_SO_a_RelatesTo(struct zx_ctx* c, struct zx_a_RelatesTo_s* x, char* p);
char* zx_ENC_WO_a_RelatesTo(struct zx_ctx* c, struct zx_a_RelatesTo_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_a_RelatesTo(struct zx_ctx* c, struct zx_a_RelatesTo_s* x);
struct zx_str* zx_EASY_ENC_WO_a_RelatesTo(struct zx_ctx* c, struct zx_a_RelatesTo_s* x);

struct zx_a_RelatesTo_s {
  ZX_ELEM_EXT
  zx_a_RelatesTo_EXT
  struct zx_str* ID;	/* {0,1} attribute xs:anyURI */
  struct zx_str* RelationshipType;	/* {0,1} attribute a:RelationshipTypeOpenEnum */
  struct zx_str* id;	/* {0,1} attribute xs:ID */
  struct zx_str* Id;	/* {0,1} attribute xs:ID */
  struct zx_str* actor;	/* {0,1} attribute xs:anyURI */
  struct zx_str* mustUnderstand;	/* {0,1} attribute xs:boolean */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_a_RelatesTo_GET_ID(struct zx_a_RelatesTo_s* x);
struct zx_str* zx_a_RelatesTo_GET_RelationshipType(struct zx_a_RelatesTo_s* x);
struct zx_str* zx_a_RelatesTo_GET_id(struct zx_a_RelatesTo_s* x);
struct zx_str* zx_a_RelatesTo_GET_Id(struct zx_a_RelatesTo_s* x);
struct zx_str* zx_a_RelatesTo_GET_actor(struct zx_a_RelatesTo_s* x);
struct zx_str* zx_a_RelatesTo_GET_mustUnderstand(struct zx_a_RelatesTo_s* x);





void zx_a_RelatesTo_PUT_ID(struct zx_a_RelatesTo_s* x, struct zx_str* y);
void zx_a_RelatesTo_PUT_RelationshipType(struct zx_a_RelatesTo_s* x, struct zx_str* y);
void zx_a_RelatesTo_PUT_id(struct zx_a_RelatesTo_s* x, struct zx_str* y);
void zx_a_RelatesTo_PUT_Id(struct zx_a_RelatesTo_s* x, struct zx_str* y);
void zx_a_RelatesTo_PUT_actor(struct zx_a_RelatesTo_s* x, struct zx_str* y);
void zx_a_RelatesTo_PUT_mustUnderstand(struct zx_a_RelatesTo_s* x, struct zx_str* y);





#endif
/* -------------------------- a_ReplyTo -------------------------- */
/* refby( zx_e_Header_s ) */
#ifndef zx_a_ReplyTo_EXT
#define zx_a_ReplyTo_EXT
#endif

struct zx_a_ReplyTo_s* zx_DEC_a_ReplyTo(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_a_ReplyTo_s* zx_NEW_a_ReplyTo(struct zx_ctx* c);
void zx_FREE_a_ReplyTo(struct zx_ctx* c, struct zx_a_ReplyTo_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_a_ReplyTo_s* zx_DEEP_CLONE_a_ReplyTo(struct zx_ctx* c, struct zx_a_ReplyTo_s* x, int dup_strs);
void zx_DUP_STRS_a_ReplyTo(struct zx_ctx* c, struct zx_a_ReplyTo_s* x);
int zx_WALK_SO_a_ReplyTo(struct zx_ctx* c, struct zx_a_ReplyTo_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_a_ReplyTo(struct zx_ctx* c, struct zx_a_ReplyTo_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_a_ReplyTo(struct zx_ctx* c, struct zx_a_ReplyTo_s* x);
int zx_LEN_WO_a_ReplyTo(struct zx_ctx* c, struct zx_a_ReplyTo_s* x);
char* zx_ENC_SO_a_ReplyTo(struct zx_ctx* c, struct zx_a_ReplyTo_s* x, char* p);
char* zx_ENC_WO_a_ReplyTo(struct zx_ctx* c, struct zx_a_ReplyTo_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_a_ReplyTo(struct zx_ctx* c, struct zx_a_ReplyTo_s* x);
struct zx_str* zx_EASY_ENC_WO_a_ReplyTo(struct zx_ctx* c, struct zx_a_ReplyTo_s* x);

struct zx_a_ReplyTo_s {
  ZX_ELEM_EXT
  zx_a_ReplyTo_EXT
  struct zx_a_Address_s* Address;	/* {1,1}  */
  struct zx_a_ReferenceParameters_s* ReferenceParameters;	/* {0,1} nada */
  struct zx_a_Metadata_s* Metadata;	/* {0,1} nada */
  struct zx_str* ID;	/* {0,1} attribute xs:anyURI */
  struct zx_str* id;	/* {0,1} attribute xs:ID */
  struct zx_str* notOnOrAfter;	/* {0,1} attribute xs:dateTime */
  struct zx_str* Id;	/* {0,1} attribute xs:ID */
  struct zx_str* actor;	/* {0,1} attribute xs:anyURI */
  struct zx_str* mustUnderstand;	/* {0,1} attribute xs:boolean */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_a_ReplyTo_GET_ID(struct zx_a_ReplyTo_s* x);
struct zx_str* zx_a_ReplyTo_GET_id(struct zx_a_ReplyTo_s* x);
struct zx_str* zx_a_ReplyTo_GET_notOnOrAfter(struct zx_a_ReplyTo_s* x);
struct zx_str* zx_a_ReplyTo_GET_Id(struct zx_a_ReplyTo_s* x);
struct zx_str* zx_a_ReplyTo_GET_actor(struct zx_a_ReplyTo_s* x);
struct zx_str* zx_a_ReplyTo_GET_mustUnderstand(struct zx_a_ReplyTo_s* x);

struct zx_a_Address_s* zx_a_ReplyTo_GET_Address(struct zx_a_ReplyTo_s* x, int n);
struct zx_a_ReferenceParameters_s* zx_a_ReplyTo_GET_ReferenceParameters(struct zx_a_ReplyTo_s* x, int n);
struct zx_a_Metadata_s* zx_a_ReplyTo_GET_Metadata(struct zx_a_ReplyTo_s* x, int n);

int zx_a_ReplyTo_NUM_Address(struct zx_a_ReplyTo_s* x);
int zx_a_ReplyTo_NUM_ReferenceParameters(struct zx_a_ReplyTo_s* x);
int zx_a_ReplyTo_NUM_Metadata(struct zx_a_ReplyTo_s* x);

struct zx_a_Address_s* zx_a_ReplyTo_POP_Address(struct zx_a_ReplyTo_s* x);
struct zx_a_ReferenceParameters_s* zx_a_ReplyTo_POP_ReferenceParameters(struct zx_a_ReplyTo_s* x);
struct zx_a_Metadata_s* zx_a_ReplyTo_POP_Metadata(struct zx_a_ReplyTo_s* x);

void zx_a_ReplyTo_PUSH_Address(struct zx_a_ReplyTo_s* x, struct zx_a_Address_s* y);
void zx_a_ReplyTo_PUSH_ReferenceParameters(struct zx_a_ReplyTo_s* x, struct zx_a_ReferenceParameters_s* y);
void zx_a_ReplyTo_PUSH_Metadata(struct zx_a_ReplyTo_s* x, struct zx_a_Metadata_s* y);

void zx_a_ReplyTo_PUT_ID(struct zx_a_ReplyTo_s* x, struct zx_str* y);
void zx_a_ReplyTo_PUT_id(struct zx_a_ReplyTo_s* x, struct zx_str* y);
void zx_a_ReplyTo_PUT_notOnOrAfter(struct zx_a_ReplyTo_s* x, struct zx_str* y);
void zx_a_ReplyTo_PUT_Id(struct zx_a_ReplyTo_s* x, struct zx_str* y);
void zx_a_ReplyTo_PUT_actor(struct zx_a_ReplyTo_s* x, struct zx_str* y);
void zx_a_ReplyTo_PUT_mustUnderstand(struct zx_a_ReplyTo_s* x, struct zx_str* y);

void zx_a_ReplyTo_PUT_Address(struct zx_a_ReplyTo_s* x, int n, struct zx_a_Address_s* y);
void zx_a_ReplyTo_PUT_ReferenceParameters(struct zx_a_ReplyTo_s* x, int n, struct zx_a_ReferenceParameters_s* y);
void zx_a_ReplyTo_PUT_Metadata(struct zx_a_ReplyTo_s* x, int n, struct zx_a_Metadata_s* y);

void zx_a_ReplyTo_ADD_Address(struct zx_a_ReplyTo_s* x, int n, struct zx_a_Address_s* z);
void zx_a_ReplyTo_ADD_ReferenceParameters(struct zx_a_ReplyTo_s* x, int n, struct zx_a_ReferenceParameters_s* z);
void zx_a_ReplyTo_ADD_Metadata(struct zx_a_ReplyTo_s* x, int n, struct zx_a_Metadata_s* z);

void zx_a_ReplyTo_DEL_Address(struct zx_a_ReplyTo_s* x, int n);
void zx_a_ReplyTo_DEL_ReferenceParameters(struct zx_a_ReplyTo_s* x, int n);
void zx_a_ReplyTo_DEL_Metadata(struct zx_a_ReplyTo_s* x, int n);

void zx_a_ReplyTo_REV_Address(struct zx_a_ReplyTo_s* x);
void zx_a_ReplyTo_REV_ReferenceParameters(struct zx_a_ReplyTo_s* x);
void zx_a_ReplyTo_REV_Metadata(struct zx_a_ReplyTo_s* x);

#endif
/* -------------------------- a_RetryAfter -------------------------- */
/* refby( ) */
#ifndef zx_a_RetryAfter_EXT
#define zx_a_RetryAfter_EXT
#endif

struct zx_a_RetryAfter_s* zx_DEC_a_RetryAfter(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_a_RetryAfter_s* zx_NEW_a_RetryAfter(struct zx_ctx* c);
void zx_FREE_a_RetryAfter(struct zx_ctx* c, struct zx_a_RetryAfter_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_a_RetryAfter_s* zx_DEEP_CLONE_a_RetryAfter(struct zx_ctx* c, struct zx_a_RetryAfter_s* x, int dup_strs);
void zx_DUP_STRS_a_RetryAfter(struct zx_ctx* c, struct zx_a_RetryAfter_s* x);
int zx_WALK_SO_a_RetryAfter(struct zx_ctx* c, struct zx_a_RetryAfter_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_a_RetryAfter(struct zx_ctx* c, struct zx_a_RetryAfter_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_a_RetryAfter(struct zx_ctx* c, struct zx_a_RetryAfter_s* x);
int zx_LEN_WO_a_RetryAfter(struct zx_ctx* c, struct zx_a_RetryAfter_s* x);
char* zx_ENC_SO_a_RetryAfter(struct zx_ctx* c, struct zx_a_RetryAfter_s* x, char* p);
char* zx_ENC_WO_a_RetryAfter(struct zx_ctx* c, struct zx_a_RetryAfter_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_a_RetryAfter(struct zx_ctx* c, struct zx_a_RetryAfter_s* x);
struct zx_str* zx_EASY_ENC_WO_a_RetryAfter(struct zx_ctx* c, struct zx_a_RetryAfter_s* x);

struct zx_a_RetryAfter_s {
  ZX_ELEM_EXT
  zx_a_RetryAfter_EXT
  struct zx_str* ID;	/* {0,1} attribute xs:anyURI */
  struct zx_str* id;	/* {0,1} attribute xs:ID */
  struct zx_str* Id;	/* {0,1} attribute xs:ID */
  struct zx_str* actor;	/* {0,1} attribute xs:anyURI */
  struct zx_str* mustUnderstand;	/* {0,1} attribute xs:boolean */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_a_RetryAfter_GET_ID(struct zx_a_RetryAfter_s* x);
struct zx_str* zx_a_RetryAfter_GET_id(struct zx_a_RetryAfter_s* x);
struct zx_str* zx_a_RetryAfter_GET_Id(struct zx_a_RetryAfter_s* x);
struct zx_str* zx_a_RetryAfter_GET_actor(struct zx_a_RetryAfter_s* x);
struct zx_str* zx_a_RetryAfter_GET_mustUnderstand(struct zx_a_RetryAfter_s* x);





void zx_a_RetryAfter_PUT_ID(struct zx_a_RetryAfter_s* x, struct zx_str* y);
void zx_a_RetryAfter_PUT_id(struct zx_a_RetryAfter_s* x, struct zx_str* y);
void zx_a_RetryAfter_PUT_Id(struct zx_a_RetryAfter_s* x, struct zx_str* y);
void zx_a_RetryAfter_PUT_actor(struct zx_a_RetryAfter_s* x, struct zx_str* y);
void zx_a_RetryAfter_PUT_mustUnderstand(struct zx_a_RetryAfter_s* x, struct zx_str* y);





#endif
/* -------------------------- a_To -------------------------- */
/* refby( zx_e_Header_s ) */
#ifndef zx_a_To_EXT
#define zx_a_To_EXT
#endif

struct zx_a_To_s* zx_DEC_a_To(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_a_To_s* zx_NEW_a_To(struct zx_ctx* c);
void zx_FREE_a_To(struct zx_ctx* c, struct zx_a_To_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_a_To_s* zx_DEEP_CLONE_a_To(struct zx_ctx* c, struct zx_a_To_s* x, int dup_strs);
void zx_DUP_STRS_a_To(struct zx_ctx* c, struct zx_a_To_s* x);
int zx_WALK_SO_a_To(struct zx_ctx* c, struct zx_a_To_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_a_To(struct zx_ctx* c, struct zx_a_To_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_a_To(struct zx_ctx* c, struct zx_a_To_s* x);
int zx_LEN_WO_a_To(struct zx_ctx* c, struct zx_a_To_s* x);
char* zx_ENC_SO_a_To(struct zx_ctx* c, struct zx_a_To_s* x, char* p);
char* zx_ENC_WO_a_To(struct zx_ctx* c, struct zx_a_To_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_a_To(struct zx_ctx* c, struct zx_a_To_s* x);
struct zx_str* zx_EASY_ENC_WO_a_To(struct zx_ctx* c, struct zx_a_To_s* x);

struct zx_a_To_s {
  ZX_ELEM_EXT
  zx_a_To_EXT
  struct zx_str* ID;	/* {0,1} attribute xs:anyURI */
  struct zx_str* id;	/* {0,1} attribute xs:ID */
  struct zx_str* Id;	/* {0,1} attribute xs:ID */
  struct zx_str* actor;	/* {0,1} attribute xs:anyURI */
  struct zx_str* mustUnderstand;	/* {0,1} attribute xs:boolean */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_a_To_GET_ID(struct zx_a_To_s* x);
struct zx_str* zx_a_To_GET_id(struct zx_a_To_s* x);
struct zx_str* zx_a_To_GET_Id(struct zx_a_To_s* x);
struct zx_str* zx_a_To_GET_actor(struct zx_a_To_s* x);
struct zx_str* zx_a_To_GET_mustUnderstand(struct zx_a_To_s* x);





void zx_a_To_PUT_ID(struct zx_a_To_s* x, struct zx_str* y);
void zx_a_To_PUT_id(struct zx_a_To_s* x, struct zx_str* y);
void zx_a_To_PUT_Id(struct zx_a_To_s* x, struct zx_str* y);
void zx_a_To_PUT_actor(struct zx_a_To_s* x, struct zx_str* y);
void zx_a_To_PUT_mustUnderstand(struct zx_a_To_s* x, struct zx_str* y);





#endif

#endif
