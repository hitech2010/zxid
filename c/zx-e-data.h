/* c/zx-e-data.h - WARNING: This header was automatically generated. DO NOT EDIT!
 * $Id$ */
/* Datastructure design, topography, and layout
 * Copyright (c) 2006 Sampo Kellomaki (sampo@iki.fi),
 * All Rights Reserved. NO WARRANTY. See file COPYING for
 * terms and conditions of use. Element and attributes names as well
 * as some topography are derived from schema descriptions that were used as
 * input and may be subject to their own copright. */

#ifndef _c_zx_e_data_h
#define _c_zx_e_data_h

#include "zx.h"
#include "c/zx-const.h"
#include "c/zx-data.h"

#ifndef ZX_ELEM_EXT
#define ZX_ELEM_EXT  /* This extension point should be defined by who includes this file. */
#endif

/* -------------------------- e_Body -------------------------- */
/* refby( zx_e_Envelope_s ) */
#ifndef zx_e_Body_EXT
#define zx_e_Body_EXT
#endif

struct zx_e_Body_s* zx_DEC_e_Body(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_e_Body_s* zx_NEW_e_Body(struct zx_ctx* c);
void zx_FREE_e_Body(struct zx_ctx* c, struct zx_e_Body_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_e_Body_s* zx_DEEP_CLONE_e_Body(struct zx_ctx* c, struct zx_e_Body_s* x, int dup_strs);
void zx_DUP_STRS_e_Body(struct zx_ctx* c, struct zx_e_Body_s* x);
int zx_WALK_SO_e_Body(struct zx_ctx* c, struct zx_e_Body_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_e_Body(struct zx_ctx* c, struct zx_e_Body_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_e_Body(struct zx_ctx* c, struct zx_e_Body_s* x);
int zx_LEN_WO_e_Body(struct zx_ctx* c, struct zx_e_Body_s* x);
char* zx_ENC_SO_e_Body(struct zx_ctx* c, struct zx_e_Body_s* x, char* p);
char* zx_ENC_WO_e_Body(struct zx_ctx* c, struct zx_e_Body_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_e_Body(struct zx_ctx* c, struct zx_e_Body_s* x);
struct zx_str* zx_EASY_ENC_WO_e_Body(struct zx_ctx* c, struct zx_e_Body_s* x);

struct zx_e_Body_s {
  ZX_ELEM_EXT
  zx_e_Body_EXT
  struct zx_sp_ArtifactResolve_s* ArtifactResolve;	/* {0,1} nada */
  struct zx_sp_ArtifactResponse_s* ArtifactResponse;	/* {0,1} nada */
  struct zx_sp_ManageNameIDRequest_s* ManageNameIDRequest;	/* {0,1} nada */
  struct zx_sp_ManageNameIDResponse_s* ManageNameIDResponse;	/* {0,1} nada */
  struct zx_sp_LogoutRequest_s* LogoutRequest;	/* {0,1} nada */
  struct zx_sp_LogoutResponse_s* LogoutResponse;	/* {0,1} nada */
  struct zx_sp_NameIDMappingRequest_s* NameIDMappingRequest;	/* {0,1} nada */
  struct zx_sp_NameIDMappingResponse_s* NameIDMappingResponse;	/* {0,1} nada */
  struct zx_sp_AttributeQuery_s* AttributeQuery;	/* {0,1} nada */
  struct zx_sp_AuthnQuery_s* AuthnQuery;	/* {0,1} nada */
  struct zx_sp_AuthzDecisionQuery_s* AuthzDecisionQuery;	/* {0,1} nada */
  struct zx_sp_AssertionIDRequest_s* AssertionIDRequest;	/* {0,1} nada */
  struct zx_sp_Response_s* Response;	/* {0,1} nada */
  struct zx_sp_AuthnRequest_s* AuthnRequest;	/* {0,1} nada */
  struct zx_sp11_Request_s* Request;	/* {0,1} nada */
  struct zx_sp11_Response_s* sp11_Response;	/* {0,1} nada */
  struct zx_ff12_RegisterNameIdentifierRequest_s* RegisterNameIdentifierRequest;	/* {0,1} nada */
  struct zx_ff12_RegisterNameIdentifierResponse_s* RegisterNameIdentifierResponse;	/* {0,1} nada */
  struct zx_ff12_FederationTerminationNotification_s* FederationTerminationNotification;	/* {0,1} nada */
  struct zx_ff12_LogoutRequest_s* ff12_LogoutRequest;	/* {0,1} nada */
  struct zx_ff12_LogoutResponse_s* ff12_LogoutResponse;	/* {0,1} nada */
  struct zx_ff12_NameIdentifierMappingRequest_s* NameIdentifierMappingRequest;	/* {0,1} nada */
  struct zx_ff12_NameIdentifierMappingResponse_s* NameIdentifierMappingResponse;	/* {0,1} nada */
  struct zx_xasp_XACMLAuthzDecisionQuery_s* XACMLAuthzDecisionQuery;	/* {0,1} nada */
  struct zx_xasp_XACMLPolicyQuery_s* XACMLPolicyQuery;	/* {0,1} nada */
  struct zx_di_Query_s* Query;	/* {0,1} nada */
  struct zx_di_QueryResponse_s* QueryResponse;	/* {0,1} nada */
  struct zx_di12_Query_s* di12_Query;	/* {0,1} nada */
  struct zx_di12_QueryResponse_s* di12_QueryResponse;	/* {0,1} nada */
  struct zx_di12_Modify_s* Modify;	/* {0,1} nada */
  struct zx_di12_ModifyResponse_s* ModifyResponse;	/* {0,1} nada */
  struct zx_e_Fault_s* Fault;	/* {0,1} nada */
  struct zx_di_SvcMDAssociationAdd_s* SvcMDAssociationAdd;	/* {0,1} nada */
  struct zx_di_SvcMDAssociationAddResponse_s* SvcMDAssociationAddResponse;	/* {0,1} nada */
  struct zx_di_SvcMDAssociationDelete_s* SvcMDAssociationDelete;	/* {0,1} nada */
  struct zx_di_SvcMDAssociationDeleteResponse_s* SvcMDAssociationDeleteResponse;	/* {0,1} nada */
  struct zx_di_SvcMDAssociationQuery_s* SvcMDAssociationQuery;	/* {0,1} nada */
  struct zx_di_SvcMDAssociationQueryResponse_s* SvcMDAssociationQueryResponse;	/* {0,1} nada */
  struct zx_di_SvcMDRegister_s* SvcMDRegister;	/* {0,1} nada */
  struct zx_di_SvcMDRegisterResponse_s* SvcMDRegisterResponse;	/* {0,1} nada */
  struct zx_di_SvcMDDelete_s* SvcMDDelete;	/* {0,1} nada */
  struct zx_di_SvcMDDeleteResponse_s* SvcMDDeleteResponse;	/* {0,1} nada */
  struct zx_di_SvcMDQuery_s* SvcMDQuery;	/* {0,1} nada */
  struct zx_di_SvcMDQueryResponse_s* SvcMDQueryResponse;	/* {0,1} nada */
  struct zx_di_SvcMDReplace_s* SvcMDReplace;	/* {0,1} nada */
  struct zx_di_SvcMDReplaceResponse_s* SvcMDReplaceResponse;	/* {0,1} nada */
  struct zx_dap_Create_s* Create;	/* {0,1} nada */
  struct zx_dap_CreateResponse_s* CreateResponse;	/* {0,1} nada */
  struct zx_dap_Query_s* dap_Query;	/* {0,1} nada */
  struct zx_dap_QueryResponse_s* dap_QueryResponse;	/* {0,1} nada */
  struct zx_dap_Modify_s* dap_Modify;	/* {0,1} nada */
  struct zx_dap_ModifyResponse_s* dap_ModifyResponse;	/* {0,1} nada */
  struct zx_dap_Delete_s* Delete;	/* {0,1} nada */
  struct zx_dap_DeleteResponse_s* DeleteResponse;	/* {0,1} nada */
  struct zx_dap_Notify_s* Notify;	/* {0,1} nada */
  struct zx_dap_NotifyResponse_s* NotifyResponse;	/* {0,1} nada */
  struct zx_ps_AddEntityRequest_s* AddEntityRequest;	/* {0,1} nada */
  struct zx_ps_AddEntityResponse_s* AddEntityResponse;	/* {0,1} nada */
  struct zx_ps_AddKnownEntityRequest_s* AddKnownEntityRequest;	/* {0,1} nada */
  struct zx_ps_AddKnownEntityResponse_s* AddKnownEntityResponse;	/* {0,1} nada */
  struct zx_ps_AddCollectionRequest_s* AddCollectionRequest;	/* {0,1} nada */
  struct zx_ps_AddCollectionResponse_s* AddCollectionResponse;	/* {0,1} nada */
  struct zx_ps_AddToCollectionRequest_s* AddToCollectionRequest;	/* {0,1} nada */
  struct zx_ps_AddToCollectionResponse_s* AddToCollectionResponse;	/* {0,1} nada */
  struct zx_ps_RemoveEntityRequest_s* RemoveEntityRequest;	/* {0,1} nada */
  struct zx_ps_RemoveEntityResponse_s* RemoveEntityResponse;	/* {0,1} nada */
  struct zx_ps_RemoveCollectionRequest_s* RemoveCollectionRequest;	/* {0,1} nada */
  struct zx_ps_RemoveCollectionResponse_s* RemoveCollectionResponse;	/* {0,1} nada */
  struct zx_ps_RemoveFromCollectionRequest_s* RemoveFromCollectionRequest;	/* {0,1} nada */
  struct zx_ps_RemoveFromCollectionResponse_s* RemoveFromCollectionResponse;	/* {0,1} nada */
  struct zx_ps_ListMembersRequest_s* ListMembersRequest;	/* {0,1} nada */
  struct zx_ps_ListMembersResponse_s* ListMembersResponse;	/* {0,1} nada */
  struct zx_ps_QueryObjectsRequest_s* QueryObjectsRequest;	/* {0,1} nada */
  struct zx_ps_QueryObjectsResponse_s* QueryObjectsResponse;	/* {0,1} nada */
  struct zx_ps_GetObjectInfoRequest_s* GetObjectInfoRequest;	/* {0,1} nada */
  struct zx_ps_GetObjectInfoResponse_s* GetObjectInfoResponse;	/* {0,1} nada */
  struct zx_ps_SetObjectInfoRequest_s* SetObjectInfoRequest;	/* {0,1} nada */
  struct zx_ps_SetObjectInfoResponse_s* SetObjectInfoResponse;	/* {0,1} nada */
  struct zx_ps_TestMembershipRequest_s* TestMembershipRequest;	/* {0,1} nada */
  struct zx_ps_TestMembershipResponse_s* TestMembershipResponse;	/* {0,1} nada */
  struct zx_ps_ResolveIdentifierRequest_s* ResolveIdentifierRequest;	/* {0,1} nada */
  struct zx_ps_ResolveIdentifierResponse_s* ResolveIdentifierResponse;	/* {0,1} nada */
  struct zx_ps_Notify_s* ps_Notify;	/* {0,1} nada */
  struct zx_ps_NotifyResponse_s* ps_NotifyResponse;	/* {0,1} nada */
  struct zx_im_IdentityMappingRequest_s* IdentityMappingRequest;	/* {0,1} nada */
  struct zx_im_IdentityMappingResponse_s* IdentityMappingResponse;	/* {0,1} nada */
  struct zx_as_SASLRequest_s* SASLRequest;	/* {0,1} nada */
  struct zx_as_SASLResponse_s* SASLResponse;	/* {0,1} nada */
  struct zx_mm7_SubmitReq_s* SubmitReq;	/* {0,1} nada */
  struct zx_mm7_SubmitRsp_s* SubmitRsp;	/* {0,1} nada */
  struct zx_mm7_DeliverReq_s* DeliverReq;	/* {0,1} nada */
  struct zx_mm7_DeliverRsp_s* DeliverRsp;	/* {0,1} nada */
  struct zx_mm7_CancelReq_s* CancelReq;	/* {0,1} nada */
  struct zx_mm7_CancelRsp_s* CancelRsp;	/* {0,1} nada */
  struct zx_mm7_ReplaceReq_s* ReplaceReq;	/* {0,1} nada */
  struct zx_mm7_ReplaceRsp_s* ReplaceRsp;	/* {0,1} nada */
  struct zx_mm7_extendedCancelReq_s* extendedCancelReq;	/* {0,1} nada */
  struct zx_mm7_extendedCancelRsp_s* extendedCancelRsp;	/* {0,1} nada */
  struct zx_mm7_extendedReplaceReq_s* extendedReplaceReq;	/* {0,1} nada */
  struct zx_mm7_extendedReplaceRsp_s* extendedReplaceRsp;	/* {0,1} nada */
  struct zx_mm7_DeliveryReportReq_s* DeliveryReportReq;	/* {0,1} nada */
  struct zx_mm7_DeliveryReportRsp_s* DeliveryReportRsp;	/* {0,1} nada */
  struct zx_mm7_ReadReplyReq_s* ReadReplyReq;	/* {0,1} nada */
  struct zx_mm7_ReadReplyRsp_s* ReadReplyRsp;	/* {0,1} nada */
  struct zx_mm7_RSErrorRsp_s* RSErrorRsp;	/* {0,1} nada */
  struct zx_mm7_VASPErrorRsp_s* VASPErrorRsp;	/* {0,1} nada */
  struct zx_mm7_QueryStatusReq_s* QueryStatusReq;	/* {0,1} nada */
  struct zx_mm7_QueryStatusRsp_s* QueryStatusRsp;	/* {0,1} nada */
  struct zx_cb_Query_s* cb_Query;	/* {0,1} nada */
  struct zx_cb_QueryResponse_s* cb_QueryResponse;	/* {0,1} nada */
  struct zx_cb_Create_s* cb_Create;	/* {0,1} nada */
  struct zx_cb_CreateResponse_s* cb_CreateResponse;	/* {0,1} nada */
  struct zx_cb_Delete_s* cb_Delete;	/* {0,1} nada */
  struct zx_cb_DeleteResponse_s* cb_DeleteResponse;	/* {0,1} nada */
  struct zx_cb_Modify_s* cb_Modify;	/* {0,1} nada */
  struct zx_cb_ModifyResponse_s* cb_ModifyResponse;	/* {0,1} nada */
  struct zx_cb_Notify_s* cb_Notify;	/* {0,1} nada */
  struct zx_cb_NotifyResponse_s* cb_NotifyResponse;	/* {0,1} nada */
  struct zx_cb_ReportUsage_s* ReportUsage;	/* {0,1} nada */
  struct zx_cb_ReportUsageResponse_s* ReportUsageResponse;	/* {0,1} nada */
  struct zx_gl_Query_s* gl_Query;	/* {0,1} nada */
  struct zx_gl_QueryResponse_s* gl_QueryResponse;	/* {0,1} nada */
  struct zx_gl_Create_s* gl_Create;	/* {0,1} nada */
  struct zx_gl_CreateResponse_s* gl_CreateResponse;	/* {0,1} nada */
  struct zx_gl_Delete_s* gl_Delete;	/* {0,1} nada */
  struct zx_gl_DeleteResponse_s* gl_DeleteResponse;	/* {0,1} nada */
  struct zx_gl_Modify_s* gl_Modify;	/* {0,1} nada */
  struct zx_gl_ModifyResponse_s* gl_ModifyResponse;	/* {0,1} nada */
  struct zx_gl_Notify_s* gl_Notify;	/* {0,1} nada */
  struct zx_gl_NotifyResponse_s* gl_NotifyResponse;	/* {0,1} nada */
  struct zx_demomed_StoreObjectRequest_s* StoreObjectRequest;	/* {0,1}  */
  struct zx_demomed_StoreObjectResponse_s* StoreObjectResponse;	/* {0,1} nada */
  struct zx_demomed_GetObjectListRequest_s* GetObjectListRequest;	/* {0,1}  */
  struct zx_demomed_GetObjectListResponse_s* GetObjectListResponse;	/* {0,1} nada */
  struct zx_demomed_GetObjectRequest_s* GetObjectRequest;	/* {0,1}  */
  struct zx_demomed_GetObjectResponse_s* GetObjectResponse;	/* {0,1} nada */
  struct zx_demomed_DeleteObjectRequest_s* DeleteObjectRequest;	/* {0,1}  */
  struct zx_demomed_DeleteObjectResponse_s* DeleteObjectResponse;	/* {0,1} nada */
  struct zx_pmm_Provision_s* Provision;	/* {0,1} nada */
  struct zx_pmm_ProvisionResponse_s* ProvisionResponse;	/* {0,1} nada */
  struct zx_pmm_PMActivate_s* PMActivate;	/* {0,1} nada */
  struct zx_pmm_PMActivateResponse_s* PMActivateResponse;	/* {0,1} nada */
  struct zx_pmm_PMDeactivate_s* PMDeactivate;	/* {0,1} nada */
  struct zx_pmm_PMDeactivateResponse_s* PMDeactivateResponse;	/* {0,1} nada */
  struct zx_pmm_PMDelete_s* PMDelete;	/* {0,1} nada */
  struct zx_pmm_PMDeleteResponse_s* PMDeleteResponse;	/* {0,1} nada */
  struct zx_pmm_PMUpdate_s* PMUpdate;	/* {0,1} nada */
  struct zx_pmm_PMUpdateResponse_s* PMUpdateResponse;	/* {0,1} nada */
  struct zx_pmm_PMGetStatus_s* PMGetStatus;	/* {0,1} nada */
  struct zx_pmm_PMGetStatusResponse_s* PMGetStatusResponse;	/* {0,1} nada */
  struct zx_pmm_PMSetStatus_s* PMSetStatus;	/* {0,1} nada */
  struct zx_pmm_PMSetStatusResponse_s* PMSetStatusResponse;	/* {0,1} nada */
  struct zx_prov_PMERegister_s* PMERegister;	/* {0,1} nada */
  struct zx_prov_PMERegisterResponse_s* PMERegisterResponse;	/* {0,1} nada */
  struct zx_prov_PMEUpload_s* PMEUpload;	/* {0,1} nada */
  struct zx_prov_PMEUploadResponse_s* PMEUploadResponse;	/* {0,1} nada */
  struct zx_prov_PMEDownload_s* PMEDownload;	/* {0,1} nada */
  struct zx_prov_PMEDownloadResponse_s* PMEDownloadResponse;	/* {0,1} nada */
  struct zx_prov_PMEEnable_s* PMEEnable;	/* {0,1} nada */
  struct zx_prov_PMEEnableResponse_s* PMEEnableResponse;	/* {0,1} nada */
  struct zx_prov_PMEDisable_s* PMEDisable;	/* {0,1} nada */
  struct zx_prov_PMEDisableResponse_s* PMEDisableResponse;	/* {0,1} nada */
  struct zx_prov_PMEDelete_s* PMEDelete;	/* {0,1} nada */
  struct zx_prov_PMEDeleteResponse_s* PMEDeleteResponse;	/* {0,1} nada */
  struct zx_prov_PMEGetInfo_s* PMEGetInfo;	/* {0,1} nada */
  struct zx_prov_PMEGetInfoResponse_s* PMEGetInfoResponse;	/* {0,1} nada */
  struct zx_prov_PMGetStatus_s* prov_PMGetStatus;	/* {0,1} nada */
  struct zx_prov_PMGetStatusResponse_s* prov_PMGetStatusResponse;	/* {0,1} nada */
  struct zx_prov_PMSetStatus_s* prov_PMSetStatus;	/* {0,1} nada */
  struct zx_prov_PMSetStatusResponse_s* prov_PMSetStatusResponse;	/* {0,1} nada */
  struct zx_prov_PMGetDescriptor_s* PMGetDescriptor;	/* {0,1} nada */
  struct zx_prov_PMGetDescriptorResponse_s* PMGetDescriptorResponse;	/* {0,1} nada */
  struct zx_prov_PMActivate_s* prov_PMActivate;	/* {0,1} nada */
  struct zx_prov_PMActivateResponse_s* prov_PMActivateResponse;	/* {0,1} nada */
  struct zx_prov_PMDeactivate_s* prov_PMDeactivate;	/* {0,1} nada */
  struct zx_prov_PMDeactivateResponse_s* prov_PMDeactivateResponse;	/* {0,1} nada */
  struct zx_prov_PMRegisterDescriptor_s* PMRegisterDescriptor;	/* {0,1} nada */
  struct zx_prov_PMRegisterDescriptorResponse_s* PMRegisterDescriptorResponse;	/* {0,1} nada */
  struct zx_prov_PMUpdate_s* prov_PMUpdate;	/* {0,1} nada */
  struct zx_prov_PMUpdateResponse_s* prov_PMUpdateResponse;	/* {0,1} nada */
  struct zx_prov_PMDelete_s* prov_PMDelete;	/* {0,1} nada */
  struct zx_prov_PMDeleteResponse_s* prov_PMDeleteResponse;	/* {0,1} nada */
  struct zx_prov_Poll_s* Poll;	/* {0,1} nada */
  struct zx_prov_PollResponse_s* PollResponse;	/* {0,1} nada */
  struct zx_prov_UpdateEPR_s* UpdateEPR;	/* {0,1} nada */
  struct zx_prov_UpdateEPRResponse_s* UpdateEPRResponse;	/* {0,1} nada */
  struct zx_idp_GetAssertion_s* GetAssertion;	/* {0,1} nada */
  struct zx_idp_GetAssertionResponse_s* GetAssertionResponse;	/* {0,1} nada */
  struct zx_idp_GetProviderInfo_s* GetProviderInfo;	/* {0,1} nada */
  struct zx_idp_GetProviderInfoResponse_s* GetProviderInfoResponse;	/* {0,1} nada */
  struct zx_idp_CreatedStatus_s* CreatedStatus;	/* {0,1}  */
  struct zx_idp_CreatedStatusResponse_s* CreatedStatusResponse;	/* {0,1}  */
  struct zx_shps_Delete_s* shps_Delete;	/* {0,1} nada */
  struct zx_shps_DeleteResponse_s* shps_DeleteResponse;	/* {0,1} nada */
  struct zx_shps_GetStatus_s* GetStatus;	/* {0,1} nada */
  struct zx_shps_GetStatusResponse_s* GetStatusResponse;	/* {0,1} nada */
  struct zx_shps_Query_s* shps_Query;	/* {0,1} nada */
  struct zx_shps_QueryResponse_s* shps_QueryResponse;	/* {0,1} nada */
  struct zx_elem_s* Invoke;	/* {0,1} InvokeType */
  struct zx_shps_InvokeResponse_s* InvokeResponse;	/* {0,1} nada */
  struct zx_shps_QueryRegistered_s* QueryRegistered;	/* {0,1} nada */
  struct zx_shps_QueryRegisteredResponse_s* QueryRegisteredResponse;	/* {0,1} nada */
  struct zx_shps_Register_s* Register;	/* {0,1} nada */
  struct zx_shps_RegisterResponse_s* RegisterResponse;	/* {0,1} nada */
  struct zx_shps_SetStatus_s* SetStatus;	/* {0,1} nada */
  struct zx_shps_SetStatusResponse_s* SetStatusResponse;	/* {0,1} nada */
  struct zx_shps_Update_s* Update;	/* {0,1} nada */
  struct zx_shps_UpdateResponse_s* UpdateResponse;	/* {0,1} nada */
  struct zx_shps_Poll_s* shps_Poll;	/* {0,1} nada */
  struct zx_shps_PollResponse_s* shps_PollResponse;	/* {0,1} nada */
  struct zx_shps_ProxyInvoke_s* ProxyInvoke;	/* {0,1} nada */
  struct zx_shps_ProxyInvokeResponse_s* ProxyInvokeResponse;	/* {0,1} nada */
  struct zx_idhrxml_Create_s* idhrxml_Create;	/* {0,1} nada */
  struct zx_idhrxml_CreateResponse_s* idhrxml_CreateResponse;	/* {0,1} nada */
  struct zx_idhrxml_Query_s* idhrxml_Query;	/* {0,1} nada */
  struct zx_idhrxml_QueryResponse_s* idhrxml_QueryResponse;	/* {0,1} nada */
  struct zx_idhrxml_Modify_s* idhrxml_Modify;	/* {0,1} nada */
  struct zx_idhrxml_ModifyResponse_s* idhrxml_ModifyResponse;	/* {0,1} nada */
  struct zx_idhrxml_Delete_s* idhrxml_Delete;	/* {0,1} nada */
  struct zx_idhrxml_DeleteResponse_s* idhrxml_DeleteResponse;	/* {0,1} nada */
  struct zx_idhrxml_Notify_s* idhrxml_Notify;	/* {0,1} nada */
  struct zx_idhrxml_NotifyResponse_s* idhrxml_NotifyResponse;	/* {0,1} nada */
};

#ifdef ZX_ENA_GETPUT

struct zx_sp_ArtifactResolve_s* zx_e_Body_GET_ArtifactResolve(struct zx_e_Body_s* x, int n);
struct zx_sp_ArtifactResponse_s* zx_e_Body_GET_ArtifactResponse(struct zx_e_Body_s* x, int n);
struct zx_sp_ManageNameIDRequest_s* zx_e_Body_GET_ManageNameIDRequest(struct zx_e_Body_s* x, int n);
struct zx_sp_ManageNameIDResponse_s* zx_e_Body_GET_ManageNameIDResponse(struct zx_e_Body_s* x, int n);
struct zx_sp_LogoutRequest_s* zx_e_Body_GET_LogoutRequest(struct zx_e_Body_s* x, int n);
struct zx_sp_LogoutResponse_s* zx_e_Body_GET_LogoutResponse(struct zx_e_Body_s* x, int n);
struct zx_sp_NameIDMappingRequest_s* zx_e_Body_GET_NameIDMappingRequest(struct zx_e_Body_s* x, int n);
struct zx_sp_NameIDMappingResponse_s* zx_e_Body_GET_NameIDMappingResponse(struct zx_e_Body_s* x, int n);
struct zx_sp_AttributeQuery_s* zx_e_Body_GET_AttributeQuery(struct zx_e_Body_s* x, int n);
struct zx_sp_AuthnQuery_s* zx_e_Body_GET_AuthnQuery(struct zx_e_Body_s* x, int n);
struct zx_sp_AuthzDecisionQuery_s* zx_e_Body_GET_AuthzDecisionQuery(struct zx_e_Body_s* x, int n);
struct zx_sp_AssertionIDRequest_s* zx_e_Body_GET_AssertionIDRequest(struct zx_e_Body_s* x, int n);
struct zx_sp_Response_s* zx_e_Body_GET_Response(struct zx_e_Body_s* x, int n);
struct zx_sp_AuthnRequest_s* zx_e_Body_GET_AuthnRequest(struct zx_e_Body_s* x, int n);
struct zx_sp11_Request_s* zx_e_Body_GET_Request(struct zx_e_Body_s* x, int n);
struct zx_sp11_Response_s* zx_e_Body_GET_sp11_Response(struct zx_e_Body_s* x, int n);
struct zx_ff12_RegisterNameIdentifierRequest_s* zx_e_Body_GET_RegisterNameIdentifierRequest(struct zx_e_Body_s* x, int n);
struct zx_ff12_RegisterNameIdentifierResponse_s* zx_e_Body_GET_RegisterNameIdentifierResponse(struct zx_e_Body_s* x, int n);
struct zx_ff12_FederationTerminationNotification_s* zx_e_Body_GET_FederationTerminationNotification(struct zx_e_Body_s* x, int n);
struct zx_ff12_LogoutRequest_s* zx_e_Body_GET_ff12_LogoutRequest(struct zx_e_Body_s* x, int n);
struct zx_ff12_LogoutResponse_s* zx_e_Body_GET_ff12_LogoutResponse(struct zx_e_Body_s* x, int n);
struct zx_ff12_NameIdentifierMappingRequest_s* zx_e_Body_GET_NameIdentifierMappingRequest(struct zx_e_Body_s* x, int n);
struct zx_ff12_NameIdentifierMappingResponse_s* zx_e_Body_GET_NameIdentifierMappingResponse(struct zx_e_Body_s* x, int n);
struct zx_xasp_XACMLAuthzDecisionQuery_s* zx_e_Body_GET_XACMLAuthzDecisionQuery(struct zx_e_Body_s* x, int n);
struct zx_xasp_XACMLPolicyQuery_s* zx_e_Body_GET_XACMLPolicyQuery(struct zx_e_Body_s* x, int n);
struct zx_di_Query_s* zx_e_Body_GET_Query(struct zx_e_Body_s* x, int n);
struct zx_di_QueryResponse_s* zx_e_Body_GET_QueryResponse(struct zx_e_Body_s* x, int n);
struct zx_di12_Query_s* zx_e_Body_GET_di12_Query(struct zx_e_Body_s* x, int n);
struct zx_di12_QueryResponse_s* zx_e_Body_GET_di12_QueryResponse(struct zx_e_Body_s* x, int n);
struct zx_di12_Modify_s* zx_e_Body_GET_Modify(struct zx_e_Body_s* x, int n);
struct zx_di12_ModifyResponse_s* zx_e_Body_GET_ModifyResponse(struct zx_e_Body_s* x, int n);
struct zx_e_Fault_s* zx_e_Body_GET_Fault(struct zx_e_Body_s* x, int n);
struct zx_di_SvcMDAssociationAdd_s* zx_e_Body_GET_SvcMDAssociationAdd(struct zx_e_Body_s* x, int n);
struct zx_di_SvcMDAssociationAddResponse_s* zx_e_Body_GET_SvcMDAssociationAddResponse(struct zx_e_Body_s* x, int n);
struct zx_di_SvcMDAssociationDelete_s* zx_e_Body_GET_SvcMDAssociationDelete(struct zx_e_Body_s* x, int n);
struct zx_di_SvcMDAssociationDeleteResponse_s* zx_e_Body_GET_SvcMDAssociationDeleteResponse(struct zx_e_Body_s* x, int n);
struct zx_di_SvcMDAssociationQuery_s* zx_e_Body_GET_SvcMDAssociationQuery(struct zx_e_Body_s* x, int n);
struct zx_di_SvcMDAssociationQueryResponse_s* zx_e_Body_GET_SvcMDAssociationQueryResponse(struct zx_e_Body_s* x, int n);
struct zx_di_SvcMDRegister_s* zx_e_Body_GET_SvcMDRegister(struct zx_e_Body_s* x, int n);
struct zx_di_SvcMDRegisterResponse_s* zx_e_Body_GET_SvcMDRegisterResponse(struct zx_e_Body_s* x, int n);
struct zx_di_SvcMDDelete_s* zx_e_Body_GET_SvcMDDelete(struct zx_e_Body_s* x, int n);
struct zx_di_SvcMDDeleteResponse_s* zx_e_Body_GET_SvcMDDeleteResponse(struct zx_e_Body_s* x, int n);
struct zx_di_SvcMDQuery_s* zx_e_Body_GET_SvcMDQuery(struct zx_e_Body_s* x, int n);
struct zx_di_SvcMDQueryResponse_s* zx_e_Body_GET_SvcMDQueryResponse(struct zx_e_Body_s* x, int n);
struct zx_di_SvcMDReplace_s* zx_e_Body_GET_SvcMDReplace(struct zx_e_Body_s* x, int n);
struct zx_di_SvcMDReplaceResponse_s* zx_e_Body_GET_SvcMDReplaceResponse(struct zx_e_Body_s* x, int n);
struct zx_dap_Create_s* zx_e_Body_GET_Create(struct zx_e_Body_s* x, int n);
struct zx_dap_CreateResponse_s* zx_e_Body_GET_CreateResponse(struct zx_e_Body_s* x, int n);
struct zx_dap_Query_s* zx_e_Body_GET_dap_Query(struct zx_e_Body_s* x, int n);
struct zx_dap_QueryResponse_s* zx_e_Body_GET_dap_QueryResponse(struct zx_e_Body_s* x, int n);
struct zx_dap_Modify_s* zx_e_Body_GET_dap_Modify(struct zx_e_Body_s* x, int n);
struct zx_dap_ModifyResponse_s* zx_e_Body_GET_dap_ModifyResponse(struct zx_e_Body_s* x, int n);
struct zx_dap_Delete_s* zx_e_Body_GET_Delete(struct zx_e_Body_s* x, int n);
struct zx_dap_DeleteResponse_s* zx_e_Body_GET_DeleteResponse(struct zx_e_Body_s* x, int n);
struct zx_dap_Notify_s* zx_e_Body_GET_Notify(struct zx_e_Body_s* x, int n);
struct zx_dap_NotifyResponse_s* zx_e_Body_GET_NotifyResponse(struct zx_e_Body_s* x, int n);
struct zx_ps_AddEntityRequest_s* zx_e_Body_GET_AddEntityRequest(struct zx_e_Body_s* x, int n);
struct zx_ps_AddEntityResponse_s* zx_e_Body_GET_AddEntityResponse(struct zx_e_Body_s* x, int n);
struct zx_ps_AddKnownEntityRequest_s* zx_e_Body_GET_AddKnownEntityRequest(struct zx_e_Body_s* x, int n);
struct zx_ps_AddKnownEntityResponse_s* zx_e_Body_GET_AddKnownEntityResponse(struct zx_e_Body_s* x, int n);
struct zx_ps_AddCollectionRequest_s* zx_e_Body_GET_AddCollectionRequest(struct zx_e_Body_s* x, int n);
struct zx_ps_AddCollectionResponse_s* zx_e_Body_GET_AddCollectionResponse(struct zx_e_Body_s* x, int n);
struct zx_ps_AddToCollectionRequest_s* zx_e_Body_GET_AddToCollectionRequest(struct zx_e_Body_s* x, int n);
struct zx_ps_AddToCollectionResponse_s* zx_e_Body_GET_AddToCollectionResponse(struct zx_e_Body_s* x, int n);
struct zx_ps_RemoveEntityRequest_s* zx_e_Body_GET_RemoveEntityRequest(struct zx_e_Body_s* x, int n);
struct zx_ps_RemoveEntityResponse_s* zx_e_Body_GET_RemoveEntityResponse(struct zx_e_Body_s* x, int n);
struct zx_ps_RemoveCollectionRequest_s* zx_e_Body_GET_RemoveCollectionRequest(struct zx_e_Body_s* x, int n);
struct zx_ps_RemoveCollectionResponse_s* zx_e_Body_GET_RemoveCollectionResponse(struct zx_e_Body_s* x, int n);
struct zx_ps_RemoveFromCollectionRequest_s* zx_e_Body_GET_RemoveFromCollectionRequest(struct zx_e_Body_s* x, int n);
struct zx_ps_RemoveFromCollectionResponse_s* zx_e_Body_GET_RemoveFromCollectionResponse(struct zx_e_Body_s* x, int n);
struct zx_ps_ListMembersRequest_s* zx_e_Body_GET_ListMembersRequest(struct zx_e_Body_s* x, int n);
struct zx_ps_ListMembersResponse_s* zx_e_Body_GET_ListMembersResponse(struct zx_e_Body_s* x, int n);
struct zx_ps_QueryObjectsRequest_s* zx_e_Body_GET_QueryObjectsRequest(struct zx_e_Body_s* x, int n);
struct zx_ps_QueryObjectsResponse_s* zx_e_Body_GET_QueryObjectsResponse(struct zx_e_Body_s* x, int n);
struct zx_ps_GetObjectInfoRequest_s* zx_e_Body_GET_GetObjectInfoRequest(struct zx_e_Body_s* x, int n);
struct zx_ps_GetObjectInfoResponse_s* zx_e_Body_GET_GetObjectInfoResponse(struct zx_e_Body_s* x, int n);
struct zx_ps_SetObjectInfoRequest_s* zx_e_Body_GET_SetObjectInfoRequest(struct zx_e_Body_s* x, int n);
struct zx_ps_SetObjectInfoResponse_s* zx_e_Body_GET_SetObjectInfoResponse(struct zx_e_Body_s* x, int n);
struct zx_ps_TestMembershipRequest_s* zx_e_Body_GET_TestMembershipRequest(struct zx_e_Body_s* x, int n);
struct zx_ps_TestMembershipResponse_s* zx_e_Body_GET_TestMembershipResponse(struct zx_e_Body_s* x, int n);
struct zx_ps_ResolveIdentifierRequest_s* zx_e_Body_GET_ResolveIdentifierRequest(struct zx_e_Body_s* x, int n);
struct zx_ps_ResolveIdentifierResponse_s* zx_e_Body_GET_ResolveIdentifierResponse(struct zx_e_Body_s* x, int n);
struct zx_ps_Notify_s* zx_e_Body_GET_ps_Notify(struct zx_e_Body_s* x, int n);
struct zx_ps_NotifyResponse_s* zx_e_Body_GET_ps_NotifyResponse(struct zx_e_Body_s* x, int n);
struct zx_im_IdentityMappingRequest_s* zx_e_Body_GET_IdentityMappingRequest(struct zx_e_Body_s* x, int n);
struct zx_im_IdentityMappingResponse_s* zx_e_Body_GET_IdentityMappingResponse(struct zx_e_Body_s* x, int n);
struct zx_as_SASLRequest_s* zx_e_Body_GET_SASLRequest(struct zx_e_Body_s* x, int n);
struct zx_as_SASLResponse_s* zx_e_Body_GET_SASLResponse(struct zx_e_Body_s* x, int n);
struct zx_mm7_SubmitReq_s* zx_e_Body_GET_SubmitReq(struct zx_e_Body_s* x, int n);
struct zx_mm7_SubmitRsp_s* zx_e_Body_GET_SubmitRsp(struct zx_e_Body_s* x, int n);
struct zx_mm7_DeliverReq_s* zx_e_Body_GET_DeliverReq(struct zx_e_Body_s* x, int n);
struct zx_mm7_DeliverRsp_s* zx_e_Body_GET_DeliverRsp(struct zx_e_Body_s* x, int n);
struct zx_mm7_CancelReq_s* zx_e_Body_GET_CancelReq(struct zx_e_Body_s* x, int n);
struct zx_mm7_CancelRsp_s* zx_e_Body_GET_CancelRsp(struct zx_e_Body_s* x, int n);
struct zx_mm7_ReplaceReq_s* zx_e_Body_GET_ReplaceReq(struct zx_e_Body_s* x, int n);
struct zx_mm7_ReplaceRsp_s* zx_e_Body_GET_ReplaceRsp(struct zx_e_Body_s* x, int n);
struct zx_mm7_extendedCancelReq_s* zx_e_Body_GET_extendedCancelReq(struct zx_e_Body_s* x, int n);
struct zx_mm7_extendedCancelRsp_s* zx_e_Body_GET_extendedCancelRsp(struct zx_e_Body_s* x, int n);
struct zx_mm7_extendedReplaceReq_s* zx_e_Body_GET_extendedReplaceReq(struct zx_e_Body_s* x, int n);
struct zx_mm7_extendedReplaceRsp_s* zx_e_Body_GET_extendedReplaceRsp(struct zx_e_Body_s* x, int n);
struct zx_mm7_DeliveryReportReq_s* zx_e_Body_GET_DeliveryReportReq(struct zx_e_Body_s* x, int n);
struct zx_mm7_DeliveryReportRsp_s* zx_e_Body_GET_DeliveryReportRsp(struct zx_e_Body_s* x, int n);
struct zx_mm7_ReadReplyReq_s* zx_e_Body_GET_ReadReplyReq(struct zx_e_Body_s* x, int n);
struct zx_mm7_ReadReplyRsp_s* zx_e_Body_GET_ReadReplyRsp(struct zx_e_Body_s* x, int n);
struct zx_mm7_RSErrorRsp_s* zx_e_Body_GET_RSErrorRsp(struct zx_e_Body_s* x, int n);
struct zx_mm7_VASPErrorRsp_s* zx_e_Body_GET_VASPErrorRsp(struct zx_e_Body_s* x, int n);
struct zx_mm7_QueryStatusReq_s* zx_e_Body_GET_QueryStatusReq(struct zx_e_Body_s* x, int n);
struct zx_mm7_QueryStatusRsp_s* zx_e_Body_GET_QueryStatusRsp(struct zx_e_Body_s* x, int n);
struct zx_cb_Query_s* zx_e_Body_GET_cb_Query(struct zx_e_Body_s* x, int n);
struct zx_cb_QueryResponse_s* zx_e_Body_GET_cb_QueryResponse(struct zx_e_Body_s* x, int n);
struct zx_cb_Create_s* zx_e_Body_GET_cb_Create(struct zx_e_Body_s* x, int n);
struct zx_cb_CreateResponse_s* zx_e_Body_GET_cb_CreateResponse(struct zx_e_Body_s* x, int n);
struct zx_cb_Delete_s* zx_e_Body_GET_cb_Delete(struct zx_e_Body_s* x, int n);
struct zx_cb_DeleteResponse_s* zx_e_Body_GET_cb_DeleteResponse(struct zx_e_Body_s* x, int n);
struct zx_cb_Modify_s* zx_e_Body_GET_cb_Modify(struct zx_e_Body_s* x, int n);
struct zx_cb_ModifyResponse_s* zx_e_Body_GET_cb_ModifyResponse(struct zx_e_Body_s* x, int n);
struct zx_cb_Notify_s* zx_e_Body_GET_cb_Notify(struct zx_e_Body_s* x, int n);
struct zx_cb_NotifyResponse_s* zx_e_Body_GET_cb_NotifyResponse(struct zx_e_Body_s* x, int n);
struct zx_cb_ReportUsage_s* zx_e_Body_GET_ReportUsage(struct zx_e_Body_s* x, int n);
struct zx_cb_ReportUsageResponse_s* zx_e_Body_GET_ReportUsageResponse(struct zx_e_Body_s* x, int n);
struct zx_gl_Query_s* zx_e_Body_GET_gl_Query(struct zx_e_Body_s* x, int n);
struct zx_gl_QueryResponse_s* zx_e_Body_GET_gl_QueryResponse(struct zx_e_Body_s* x, int n);
struct zx_gl_Create_s* zx_e_Body_GET_gl_Create(struct zx_e_Body_s* x, int n);
struct zx_gl_CreateResponse_s* zx_e_Body_GET_gl_CreateResponse(struct zx_e_Body_s* x, int n);
struct zx_gl_Delete_s* zx_e_Body_GET_gl_Delete(struct zx_e_Body_s* x, int n);
struct zx_gl_DeleteResponse_s* zx_e_Body_GET_gl_DeleteResponse(struct zx_e_Body_s* x, int n);
struct zx_gl_Modify_s* zx_e_Body_GET_gl_Modify(struct zx_e_Body_s* x, int n);
struct zx_gl_ModifyResponse_s* zx_e_Body_GET_gl_ModifyResponse(struct zx_e_Body_s* x, int n);
struct zx_gl_Notify_s* zx_e_Body_GET_gl_Notify(struct zx_e_Body_s* x, int n);
struct zx_gl_NotifyResponse_s* zx_e_Body_GET_gl_NotifyResponse(struct zx_e_Body_s* x, int n);
struct zx_demomed_StoreObjectRequest_s* zx_e_Body_GET_StoreObjectRequest(struct zx_e_Body_s* x, int n);
struct zx_demomed_StoreObjectResponse_s* zx_e_Body_GET_StoreObjectResponse(struct zx_e_Body_s* x, int n);
struct zx_demomed_GetObjectListRequest_s* zx_e_Body_GET_GetObjectListRequest(struct zx_e_Body_s* x, int n);
struct zx_demomed_GetObjectListResponse_s* zx_e_Body_GET_GetObjectListResponse(struct zx_e_Body_s* x, int n);
struct zx_demomed_GetObjectRequest_s* zx_e_Body_GET_GetObjectRequest(struct zx_e_Body_s* x, int n);
struct zx_demomed_GetObjectResponse_s* zx_e_Body_GET_GetObjectResponse(struct zx_e_Body_s* x, int n);
struct zx_demomed_DeleteObjectRequest_s* zx_e_Body_GET_DeleteObjectRequest(struct zx_e_Body_s* x, int n);
struct zx_demomed_DeleteObjectResponse_s* zx_e_Body_GET_DeleteObjectResponse(struct zx_e_Body_s* x, int n);
struct zx_pmm_Provision_s* zx_e_Body_GET_Provision(struct zx_e_Body_s* x, int n);
struct zx_pmm_ProvisionResponse_s* zx_e_Body_GET_ProvisionResponse(struct zx_e_Body_s* x, int n);
struct zx_pmm_PMActivate_s* zx_e_Body_GET_PMActivate(struct zx_e_Body_s* x, int n);
struct zx_pmm_PMActivateResponse_s* zx_e_Body_GET_PMActivateResponse(struct zx_e_Body_s* x, int n);
struct zx_pmm_PMDeactivate_s* zx_e_Body_GET_PMDeactivate(struct zx_e_Body_s* x, int n);
struct zx_pmm_PMDeactivateResponse_s* zx_e_Body_GET_PMDeactivateResponse(struct zx_e_Body_s* x, int n);
struct zx_pmm_PMDelete_s* zx_e_Body_GET_PMDelete(struct zx_e_Body_s* x, int n);
struct zx_pmm_PMDeleteResponse_s* zx_e_Body_GET_PMDeleteResponse(struct zx_e_Body_s* x, int n);
struct zx_pmm_PMUpdate_s* zx_e_Body_GET_PMUpdate(struct zx_e_Body_s* x, int n);
struct zx_pmm_PMUpdateResponse_s* zx_e_Body_GET_PMUpdateResponse(struct zx_e_Body_s* x, int n);
struct zx_pmm_PMGetStatus_s* zx_e_Body_GET_PMGetStatus(struct zx_e_Body_s* x, int n);
struct zx_pmm_PMGetStatusResponse_s* zx_e_Body_GET_PMGetStatusResponse(struct zx_e_Body_s* x, int n);
struct zx_pmm_PMSetStatus_s* zx_e_Body_GET_PMSetStatus(struct zx_e_Body_s* x, int n);
struct zx_pmm_PMSetStatusResponse_s* zx_e_Body_GET_PMSetStatusResponse(struct zx_e_Body_s* x, int n);
struct zx_prov_PMERegister_s* zx_e_Body_GET_PMERegister(struct zx_e_Body_s* x, int n);
struct zx_prov_PMERegisterResponse_s* zx_e_Body_GET_PMERegisterResponse(struct zx_e_Body_s* x, int n);
struct zx_prov_PMEUpload_s* zx_e_Body_GET_PMEUpload(struct zx_e_Body_s* x, int n);
struct zx_prov_PMEUploadResponse_s* zx_e_Body_GET_PMEUploadResponse(struct zx_e_Body_s* x, int n);
struct zx_prov_PMEDownload_s* zx_e_Body_GET_PMEDownload(struct zx_e_Body_s* x, int n);
struct zx_prov_PMEDownloadResponse_s* zx_e_Body_GET_PMEDownloadResponse(struct zx_e_Body_s* x, int n);
struct zx_prov_PMEEnable_s* zx_e_Body_GET_PMEEnable(struct zx_e_Body_s* x, int n);
struct zx_prov_PMEEnableResponse_s* zx_e_Body_GET_PMEEnableResponse(struct zx_e_Body_s* x, int n);
struct zx_prov_PMEDisable_s* zx_e_Body_GET_PMEDisable(struct zx_e_Body_s* x, int n);
struct zx_prov_PMEDisableResponse_s* zx_e_Body_GET_PMEDisableResponse(struct zx_e_Body_s* x, int n);
struct zx_prov_PMEDelete_s* zx_e_Body_GET_PMEDelete(struct zx_e_Body_s* x, int n);
struct zx_prov_PMEDeleteResponse_s* zx_e_Body_GET_PMEDeleteResponse(struct zx_e_Body_s* x, int n);
struct zx_prov_PMEGetInfo_s* zx_e_Body_GET_PMEGetInfo(struct zx_e_Body_s* x, int n);
struct zx_prov_PMEGetInfoResponse_s* zx_e_Body_GET_PMEGetInfoResponse(struct zx_e_Body_s* x, int n);
struct zx_prov_PMGetStatus_s* zx_e_Body_GET_prov_PMGetStatus(struct zx_e_Body_s* x, int n);
struct zx_prov_PMGetStatusResponse_s* zx_e_Body_GET_prov_PMGetStatusResponse(struct zx_e_Body_s* x, int n);
struct zx_prov_PMSetStatus_s* zx_e_Body_GET_prov_PMSetStatus(struct zx_e_Body_s* x, int n);
struct zx_prov_PMSetStatusResponse_s* zx_e_Body_GET_prov_PMSetStatusResponse(struct zx_e_Body_s* x, int n);
struct zx_prov_PMGetDescriptor_s* zx_e_Body_GET_PMGetDescriptor(struct zx_e_Body_s* x, int n);
struct zx_prov_PMGetDescriptorResponse_s* zx_e_Body_GET_PMGetDescriptorResponse(struct zx_e_Body_s* x, int n);
struct zx_prov_PMActivate_s* zx_e_Body_GET_prov_PMActivate(struct zx_e_Body_s* x, int n);
struct zx_prov_PMActivateResponse_s* zx_e_Body_GET_prov_PMActivateResponse(struct zx_e_Body_s* x, int n);
struct zx_prov_PMDeactivate_s* zx_e_Body_GET_prov_PMDeactivate(struct zx_e_Body_s* x, int n);
struct zx_prov_PMDeactivateResponse_s* zx_e_Body_GET_prov_PMDeactivateResponse(struct zx_e_Body_s* x, int n);
struct zx_prov_PMRegisterDescriptor_s* zx_e_Body_GET_PMRegisterDescriptor(struct zx_e_Body_s* x, int n);
struct zx_prov_PMRegisterDescriptorResponse_s* zx_e_Body_GET_PMRegisterDescriptorResponse(struct zx_e_Body_s* x, int n);
struct zx_prov_PMUpdate_s* zx_e_Body_GET_prov_PMUpdate(struct zx_e_Body_s* x, int n);
struct zx_prov_PMUpdateResponse_s* zx_e_Body_GET_prov_PMUpdateResponse(struct zx_e_Body_s* x, int n);
struct zx_prov_PMDelete_s* zx_e_Body_GET_prov_PMDelete(struct zx_e_Body_s* x, int n);
struct zx_prov_PMDeleteResponse_s* zx_e_Body_GET_prov_PMDeleteResponse(struct zx_e_Body_s* x, int n);
struct zx_prov_Poll_s* zx_e_Body_GET_Poll(struct zx_e_Body_s* x, int n);
struct zx_prov_PollResponse_s* zx_e_Body_GET_PollResponse(struct zx_e_Body_s* x, int n);
struct zx_prov_UpdateEPR_s* zx_e_Body_GET_UpdateEPR(struct zx_e_Body_s* x, int n);
struct zx_prov_UpdateEPRResponse_s* zx_e_Body_GET_UpdateEPRResponse(struct zx_e_Body_s* x, int n);
struct zx_idp_GetAssertion_s* zx_e_Body_GET_GetAssertion(struct zx_e_Body_s* x, int n);
struct zx_idp_GetAssertionResponse_s* zx_e_Body_GET_GetAssertionResponse(struct zx_e_Body_s* x, int n);
struct zx_idp_GetProviderInfo_s* zx_e_Body_GET_GetProviderInfo(struct zx_e_Body_s* x, int n);
struct zx_idp_GetProviderInfoResponse_s* zx_e_Body_GET_GetProviderInfoResponse(struct zx_e_Body_s* x, int n);
struct zx_idp_CreatedStatus_s* zx_e_Body_GET_CreatedStatus(struct zx_e_Body_s* x, int n);
struct zx_idp_CreatedStatusResponse_s* zx_e_Body_GET_CreatedStatusResponse(struct zx_e_Body_s* x, int n);
struct zx_shps_Delete_s* zx_e_Body_GET_shps_Delete(struct zx_e_Body_s* x, int n);
struct zx_shps_DeleteResponse_s* zx_e_Body_GET_shps_DeleteResponse(struct zx_e_Body_s* x, int n);
struct zx_shps_GetStatus_s* zx_e_Body_GET_GetStatus(struct zx_e_Body_s* x, int n);
struct zx_shps_GetStatusResponse_s* zx_e_Body_GET_GetStatusResponse(struct zx_e_Body_s* x, int n);
struct zx_shps_Query_s* zx_e_Body_GET_shps_Query(struct zx_e_Body_s* x, int n);
struct zx_shps_QueryResponse_s* zx_e_Body_GET_shps_QueryResponse(struct zx_e_Body_s* x, int n);
struct zx_elem_s* zx_e_Body_GET_Invoke(struct zx_e_Body_s* x, int n);
struct zx_shps_InvokeResponse_s* zx_e_Body_GET_InvokeResponse(struct zx_e_Body_s* x, int n);
struct zx_shps_QueryRegistered_s* zx_e_Body_GET_QueryRegistered(struct zx_e_Body_s* x, int n);
struct zx_shps_QueryRegisteredResponse_s* zx_e_Body_GET_QueryRegisteredResponse(struct zx_e_Body_s* x, int n);
struct zx_shps_Register_s* zx_e_Body_GET_Register(struct zx_e_Body_s* x, int n);
struct zx_shps_RegisterResponse_s* zx_e_Body_GET_RegisterResponse(struct zx_e_Body_s* x, int n);
struct zx_shps_SetStatus_s* zx_e_Body_GET_SetStatus(struct zx_e_Body_s* x, int n);
struct zx_shps_SetStatusResponse_s* zx_e_Body_GET_SetStatusResponse(struct zx_e_Body_s* x, int n);
struct zx_shps_Update_s* zx_e_Body_GET_Update(struct zx_e_Body_s* x, int n);
struct zx_shps_UpdateResponse_s* zx_e_Body_GET_UpdateResponse(struct zx_e_Body_s* x, int n);
struct zx_shps_Poll_s* zx_e_Body_GET_shps_Poll(struct zx_e_Body_s* x, int n);
struct zx_shps_PollResponse_s* zx_e_Body_GET_shps_PollResponse(struct zx_e_Body_s* x, int n);
struct zx_shps_ProxyInvoke_s* zx_e_Body_GET_ProxyInvoke(struct zx_e_Body_s* x, int n);
struct zx_shps_ProxyInvokeResponse_s* zx_e_Body_GET_ProxyInvokeResponse(struct zx_e_Body_s* x, int n);
struct zx_idhrxml_Create_s* zx_e_Body_GET_idhrxml_Create(struct zx_e_Body_s* x, int n);
struct zx_idhrxml_CreateResponse_s* zx_e_Body_GET_idhrxml_CreateResponse(struct zx_e_Body_s* x, int n);
struct zx_idhrxml_Query_s* zx_e_Body_GET_idhrxml_Query(struct zx_e_Body_s* x, int n);
struct zx_idhrxml_QueryResponse_s* zx_e_Body_GET_idhrxml_QueryResponse(struct zx_e_Body_s* x, int n);
struct zx_idhrxml_Modify_s* zx_e_Body_GET_idhrxml_Modify(struct zx_e_Body_s* x, int n);
struct zx_idhrxml_ModifyResponse_s* zx_e_Body_GET_idhrxml_ModifyResponse(struct zx_e_Body_s* x, int n);
struct zx_idhrxml_Delete_s* zx_e_Body_GET_idhrxml_Delete(struct zx_e_Body_s* x, int n);
struct zx_idhrxml_DeleteResponse_s* zx_e_Body_GET_idhrxml_DeleteResponse(struct zx_e_Body_s* x, int n);
struct zx_idhrxml_Notify_s* zx_e_Body_GET_idhrxml_Notify(struct zx_e_Body_s* x, int n);
struct zx_idhrxml_NotifyResponse_s* zx_e_Body_GET_idhrxml_NotifyResponse(struct zx_e_Body_s* x, int n);

int zx_e_Body_NUM_ArtifactResolve(struct zx_e_Body_s* x);
int zx_e_Body_NUM_ArtifactResponse(struct zx_e_Body_s* x);
int zx_e_Body_NUM_ManageNameIDRequest(struct zx_e_Body_s* x);
int zx_e_Body_NUM_ManageNameIDResponse(struct zx_e_Body_s* x);
int zx_e_Body_NUM_LogoutRequest(struct zx_e_Body_s* x);
int zx_e_Body_NUM_LogoutResponse(struct zx_e_Body_s* x);
int zx_e_Body_NUM_NameIDMappingRequest(struct zx_e_Body_s* x);
int zx_e_Body_NUM_NameIDMappingResponse(struct zx_e_Body_s* x);
int zx_e_Body_NUM_AttributeQuery(struct zx_e_Body_s* x);
int zx_e_Body_NUM_AuthnQuery(struct zx_e_Body_s* x);
int zx_e_Body_NUM_AuthzDecisionQuery(struct zx_e_Body_s* x);
int zx_e_Body_NUM_AssertionIDRequest(struct zx_e_Body_s* x);
int zx_e_Body_NUM_Response(struct zx_e_Body_s* x);
int zx_e_Body_NUM_AuthnRequest(struct zx_e_Body_s* x);
int zx_e_Body_NUM_Request(struct zx_e_Body_s* x);
int zx_e_Body_NUM_sp11_Response(struct zx_e_Body_s* x);
int zx_e_Body_NUM_RegisterNameIdentifierRequest(struct zx_e_Body_s* x);
int zx_e_Body_NUM_RegisterNameIdentifierResponse(struct zx_e_Body_s* x);
int zx_e_Body_NUM_FederationTerminationNotification(struct zx_e_Body_s* x);
int zx_e_Body_NUM_ff12_LogoutRequest(struct zx_e_Body_s* x);
int zx_e_Body_NUM_ff12_LogoutResponse(struct zx_e_Body_s* x);
int zx_e_Body_NUM_NameIdentifierMappingRequest(struct zx_e_Body_s* x);
int zx_e_Body_NUM_NameIdentifierMappingResponse(struct zx_e_Body_s* x);
int zx_e_Body_NUM_XACMLAuthzDecisionQuery(struct zx_e_Body_s* x);
int zx_e_Body_NUM_XACMLPolicyQuery(struct zx_e_Body_s* x);
int zx_e_Body_NUM_Query(struct zx_e_Body_s* x);
int zx_e_Body_NUM_QueryResponse(struct zx_e_Body_s* x);
int zx_e_Body_NUM_di12_Query(struct zx_e_Body_s* x);
int zx_e_Body_NUM_di12_QueryResponse(struct zx_e_Body_s* x);
int zx_e_Body_NUM_Modify(struct zx_e_Body_s* x);
int zx_e_Body_NUM_ModifyResponse(struct zx_e_Body_s* x);
int zx_e_Body_NUM_Fault(struct zx_e_Body_s* x);
int zx_e_Body_NUM_SvcMDAssociationAdd(struct zx_e_Body_s* x);
int zx_e_Body_NUM_SvcMDAssociationAddResponse(struct zx_e_Body_s* x);
int zx_e_Body_NUM_SvcMDAssociationDelete(struct zx_e_Body_s* x);
int zx_e_Body_NUM_SvcMDAssociationDeleteResponse(struct zx_e_Body_s* x);
int zx_e_Body_NUM_SvcMDAssociationQuery(struct zx_e_Body_s* x);
int zx_e_Body_NUM_SvcMDAssociationQueryResponse(struct zx_e_Body_s* x);
int zx_e_Body_NUM_SvcMDRegister(struct zx_e_Body_s* x);
int zx_e_Body_NUM_SvcMDRegisterResponse(struct zx_e_Body_s* x);
int zx_e_Body_NUM_SvcMDDelete(struct zx_e_Body_s* x);
int zx_e_Body_NUM_SvcMDDeleteResponse(struct zx_e_Body_s* x);
int zx_e_Body_NUM_SvcMDQuery(struct zx_e_Body_s* x);
int zx_e_Body_NUM_SvcMDQueryResponse(struct zx_e_Body_s* x);
int zx_e_Body_NUM_SvcMDReplace(struct zx_e_Body_s* x);
int zx_e_Body_NUM_SvcMDReplaceResponse(struct zx_e_Body_s* x);
int zx_e_Body_NUM_Create(struct zx_e_Body_s* x);
int zx_e_Body_NUM_CreateResponse(struct zx_e_Body_s* x);
int zx_e_Body_NUM_dap_Query(struct zx_e_Body_s* x);
int zx_e_Body_NUM_dap_QueryResponse(struct zx_e_Body_s* x);
int zx_e_Body_NUM_dap_Modify(struct zx_e_Body_s* x);
int zx_e_Body_NUM_dap_ModifyResponse(struct zx_e_Body_s* x);
int zx_e_Body_NUM_Delete(struct zx_e_Body_s* x);
int zx_e_Body_NUM_DeleteResponse(struct zx_e_Body_s* x);
int zx_e_Body_NUM_Notify(struct zx_e_Body_s* x);
int zx_e_Body_NUM_NotifyResponse(struct zx_e_Body_s* x);
int zx_e_Body_NUM_AddEntityRequest(struct zx_e_Body_s* x);
int zx_e_Body_NUM_AddEntityResponse(struct zx_e_Body_s* x);
int zx_e_Body_NUM_AddKnownEntityRequest(struct zx_e_Body_s* x);
int zx_e_Body_NUM_AddKnownEntityResponse(struct zx_e_Body_s* x);
int zx_e_Body_NUM_AddCollectionRequest(struct zx_e_Body_s* x);
int zx_e_Body_NUM_AddCollectionResponse(struct zx_e_Body_s* x);
int zx_e_Body_NUM_AddToCollectionRequest(struct zx_e_Body_s* x);
int zx_e_Body_NUM_AddToCollectionResponse(struct zx_e_Body_s* x);
int zx_e_Body_NUM_RemoveEntityRequest(struct zx_e_Body_s* x);
int zx_e_Body_NUM_RemoveEntityResponse(struct zx_e_Body_s* x);
int zx_e_Body_NUM_RemoveCollectionRequest(struct zx_e_Body_s* x);
int zx_e_Body_NUM_RemoveCollectionResponse(struct zx_e_Body_s* x);
int zx_e_Body_NUM_RemoveFromCollectionRequest(struct zx_e_Body_s* x);
int zx_e_Body_NUM_RemoveFromCollectionResponse(struct zx_e_Body_s* x);
int zx_e_Body_NUM_ListMembersRequest(struct zx_e_Body_s* x);
int zx_e_Body_NUM_ListMembersResponse(struct zx_e_Body_s* x);
int zx_e_Body_NUM_QueryObjectsRequest(struct zx_e_Body_s* x);
int zx_e_Body_NUM_QueryObjectsResponse(struct zx_e_Body_s* x);
int zx_e_Body_NUM_GetObjectInfoRequest(struct zx_e_Body_s* x);
int zx_e_Body_NUM_GetObjectInfoResponse(struct zx_e_Body_s* x);
int zx_e_Body_NUM_SetObjectInfoRequest(struct zx_e_Body_s* x);
int zx_e_Body_NUM_SetObjectInfoResponse(struct zx_e_Body_s* x);
int zx_e_Body_NUM_TestMembershipRequest(struct zx_e_Body_s* x);
int zx_e_Body_NUM_TestMembershipResponse(struct zx_e_Body_s* x);
int zx_e_Body_NUM_ResolveIdentifierRequest(struct zx_e_Body_s* x);
int zx_e_Body_NUM_ResolveIdentifierResponse(struct zx_e_Body_s* x);
int zx_e_Body_NUM_ps_Notify(struct zx_e_Body_s* x);
int zx_e_Body_NUM_ps_NotifyResponse(struct zx_e_Body_s* x);
int zx_e_Body_NUM_IdentityMappingRequest(struct zx_e_Body_s* x);
int zx_e_Body_NUM_IdentityMappingResponse(struct zx_e_Body_s* x);
int zx_e_Body_NUM_SASLRequest(struct zx_e_Body_s* x);
int zx_e_Body_NUM_SASLResponse(struct zx_e_Body_s* x);
int zx_e_Body_NUM_SubmitReq(struct zx_e_Body_s* x);
int zx_e_Body_NUM_SubmitRsp(struct zx_e_Body_s* x);
int zx_e_Body_NUM_DeliverReq(struct zx_e_Body_s* x);
int zx_e_Body_NUM_DeliverRsp(struct zx_e_Body_s* x);
int zx_e_Body_NUM_CancelReq(struct zx_e_Body_s* x);
int zx_e_Body_NUM_CancelRsp(struct zx_e_Body_s* x);
int zx_e_Body_NUM_ReplaceReq(struct zx_e_Body_s* x);
int zx_e_Body_NUM_ReplaceRsp(struct zx_e_Body_s* x);
int zx_e_Body_NUM_extendedCancelReq(struct zx_e_Body_s* x);
int zx_e_Body_NUM_extendedCancelRsp(struct zx_e_Body_s* x);
int zx_e_Body_NUM_extendedReplaceReq(struct zx_e_Body_s* x);
int zx_e_Body_NUM_extendedReplaceRsp(struct zx_e_Body_s* x);
int zx_e_Body_NUM_DeliveryReportReq(struct zx_e_Body_s* x);
int zx_e_Body_NUM_DeliveryReportRsp(struct zx_e_Body_s* x);
int zx_e_Body_NUM_ReadReplyReq(struct zx_e_Body_s* x);
int zx_e_Body_NUM_ReadReplyRsp(struct zx_e_Body_s* x);
int zx_e_Body_NUM_RSErrorRsp(struct zx_e_Body_s* x);
int zx_e_Body_NUM_VASPErrorRsp(struct zx_e_Body_s* x);
int zx_e_Body_NUM_QueryStatusReq(struct zx_e_Body_s* x);
int zx_e_Body_NUM_QueryStatusRsp(struct zx_e_Body_s* x);
int zx_e_Body_NUM_cb_Query(struct zx_e_Body_s* x);
int zx_e_Body_NUM_cb_QueryResponse(struct zx_e_Body_s* x);
int zx_e_Body_NUM_cb_Create(struct zx_e_Body_s* x);
int zx_e_Body_NUM_cb_CreateResponse(struct zx_e_Body_s* x);
int zx_e_Body_NUM_cb_Delete(struct zx_e_Body_s* x);
int zx_e_Body_NUM_cb_DeleteResponse(struct zx_e_Body_s* x);
int zx_e_Body_NUM_cb_Modify(struct zx_e_Body_s* x);
int zx_e_Body_NUM_cb_ModifyResponse(struct zx_e_Body_s* x);
int zx_e_Body_NUM_cb_Notify(struct zx_e_Body_s* x);
int zx_e_Body_NUM_cb_NotifyResponse(struct zx_e_Body_s* x);
int zx_e_Body_NUM_ReportUsage(struct zx_e_Body_s* x);
int zx_e_Body_NUM_ReportUsageResponse(struct zx_e_Body_s* x);
int zx_e_Body_NUM_gl_Query(struct zx_e_Body_s* x);
int zx_e_Body_NUM_gl_QueryResponse(struct zx_e_Body_s* x);
int zx_e_Body_NUM_gl_Create(struct zx_e_Body_s* x);
int zx_e_Body_NUM_gl_CreateResponse(struct zx_e_Body_s* x);
int zx_e_Body_NUM_gl_Delete(struct zx_e_Body_s* x);
int zx_e_Body_NUM_gl_DeleteResponse(struct zx_e_Body_s* x);
int zx_e_Body_NUM_gl_Modify(struct zx_e_Body_s* x);
int zx_e_Body_NUM_gl_ModifyResponse(struct zx_e_Body_s* x);
int zx_e_Body_NUM_gl_Notify(struct zx_e_Body_s* x);
int zx_e_Body_NUM_gl_NotifyResponse(struct zx_e_Body_s* x);
int zx_e_Body_NUM_StoreObjectRequest(struct zx_e_Body_s* x);
int zx_e_Body_NUM_StoreObjectResponse(struct zx_e_Body_s* x);
int zx_e_Body_NUM_GetObjectListRequest(struct zx_e_Body_s* x);
int zx_e_Body_NUM_GetObjectListResponse(struct zx_e_Body_s* x);
int zx_e_Body_NUM_GetObjectRequest(struct zx_e_Body_s* x);
int zx_e_Body_NUM_GetObjectResponse(struct zx_e_Body_s* x);
int zx_e_Body_NUM_DeleteObjectRequest(struct zx_e_Body_s* x);
int zx_e_Body_NUM_DeleteObjectResponse(struct zx_e_Body_s* x);
int zx_e_Body_NUM_Provision(struct zx_e_Body_s* x);
int zx_e_Body_NUM_ProvisionResponse(struct zx_e_Body_s* x);
int zx_e_Body_NUM_PMActivate(struct zx_e_Body_s* x);
int zx_e_Body_NUM_PMActivateResponse(struct zx_e_Body_s* x);
int zx_e_Body_NUM_PMDeactivate(struct zx_e_Body_s* x);
int zx_e_Body_NUM_PMDeactivateResponse(struct zx_e_Body_s* x);
int zx_e_Body_NUM_PMDelete(struct zx_e_Body_s* x);
int zx_e_Body_NUM_PMDeleteResponse(struct zx_e_Body_s* x);
int zx_e_Body_NUM_PMUpdate(struct zx_e_Body_s* x);
int zx_e_Body_NUM_PMUpdateResponse(struct zx_e_Body_s* x);
int zx_e_Body_NUM_PMGetStatus(struct zx_e_Body_s* x);
int zx_e_Body_NUM_PMGetStatusResponse(struct zx_e_Body_s* x);
int zx_e_Body_NUM_PMSetStatus(struct zx_e_Body_s* x);
int zx_e_Body_NUM_PMSetStatusResponse(struct zx_e_Body_s* x);
int zx_e_Body_NUM_PMERegister(struct zx_e_Body_s* x);
int zx_e_Body_NUM_PMERegisterResponse(struct zx_e_Body_s* x);
int zx_e_Body_NUM_PMEUpload(struct zx_e_Body_s* x);
int zx_e_Body_NUM_PMEUploadResponse(struct zx_e_Body_s* x);
int zx_e_Body_NUM_PMEDownload(struct zx_e_Body_s* x);
int zx_e_Body_NUM_PMEDownloadResponse(struct zx_e_Body_s* x);
int zx_e_Body_NUM_PMEEnable(struct zx_e_Body_s* x);
int zx_e_Body_NUM_PMEEnableResponse(struct zx_e_Body_s* x);
int zx_e_Body_NUM_PMEDisable(struct zx_e_Body_s* x);
int zx_e_Body_NUM_PMEDisableResponse(struct zx_e_Body_s* x);
int zx_e_Body_NUM_PMEDelete(struct zx_e_Body_s* x);
int zx_e_Body_NUM_PMEDeleteResponse(struct zx_e_Body_s* x);
int zx_e_Body_NUM_PMEGetInfo(struct zx_e_Body_s* x);
int zx_e_Body_NUM_PMEGetInfoResponse(struct zx_e_Body_s* x);
int zx_e_Body_NUM_prov_PMGetStatus(struct zx_e_Body_s* x);
int zx_e_Body_NUM_prov_PMGetStatusResponse(struct zx_e_Body_s* x);
int zx_e_Body_NUM_prov_PMSetStatus(struct zx_e_Body_s* x);
int zx_e_Body_NUM_prov_PMSetStatusResponse(struct zx_e_Body_s* x);
int zx_e_Body_NUM_PMGetDescriptor(struct zx_e_Body_s* x);
int zx_e_Body_NUM_PMGetDescriptorResponse(struct zx_e_Body_s* x);
int zx_e_Body_NUM_prov_PMActivate(struct zx_e_Body_s* x);
int zx_e_Body_NUM_prov_PMActivateResponse(struct zx_e_Body_s* x);
int zx_e_Body_NUM_prov_PMDeactivate(struct zx_e_Body_s* x);
int zx_e_Body_NUM_prov_PMDeactivateResponse(struct zx_e_Body_s* x);
int zx_e_Body_NUM_PMRegisterDescriptor(struct zx_e_Body_s* x);
int zx_e_Body_NUM_PMRegisterDescriptorResponse(struct zx_e_Body_s* x);
int zx_e_Body_NUM_prov_PMUpdate(struct zx_e_Body_s* x);
int zx_e_Body_NUM_prov_PMUpdateResponse(struct zx_e_Body_s* x);
int zx_e_Body_NUM_prov_PMDelete(struct zx_e_Body_s* x);
int zx_e_Body_NUM_prov_PMDeleteResponse(struct zx_e_Body_s* x);
int zx_e_Body_NUM_Poll(struct zx_e_Body_s* x);
int zx_e_Body_NUM_PollResponse(struct zx_e_Body_s* x);
int zx_e_Body_NUM_UpdateEPR(struct zx_e_Body_s* x);
int zx_e_Body_NUM_UpdateEPRResponse(struct zx_e_Body_s* x);
int zx_e_Body_NUM_GetAssertion(struct zx_e_Body_s* x);
int zx_e_Body_NUM_GetAssertionResponse(struct zx_e_Body_s* x);
int zx_e_Body_NUM_GetProviderInfo(struct zx_e_Body_s* x);
int zx_e_Body_NUM_GetProviderInfoResponse(struct zx_e_Body_s* x);
int zx_e_Body_NUM_CreatedStatus(struct zx_e_Body_s* x);
int zx_e_Body_NUM_CreatedStatusResponse(struct zx_e_Body_s* x);
int zx_e_Body_NUM_shps_Delete(struct zx_e_Body_s* x);
int zx_e_Body_NUM_shps_DeleteResponse(struct zx_e_Body_s* x);
int zx_e_Body_NUM_GetStatus(struct zx_e_Body_s* x);
int zx_e_Body_NUM_GetStatusResponse(struct zx_e_Body_s* x);
int zx_e_Body_NUM_shps_Query(struct zx_e_Body_s* x);
int zx_e_Body_NUM_shps_QueryResponse(struct zx_e_Body_s* x);
int zx_e_Body_NUM_Invoke(struct zx_e_Body_s* x);
int zx_e_Body_NUM_InvokeResponse(struct zx_e_Body_s* x);
int zx_e_Body_NUM_QueryRegistered(struct zx_e_Body_s* x);
int zx_e_Body_NUM_QueryRegisteredResponse(struct zx_e_Body_s* x);
int zx_e_Body_NUM_Register(struct zx_e_Body_s* x);
int zx_e_Body_NUM_RegisterResponse(struct zx_e_Body_s* x);
int zx_e_Body_NUM_SetStatus(struct zx_e_Body_s* x);
int zx_e_Body_NUM_SetStatusResponse(struct zx_e_Body_s* x);
int zx_e_Body_NUM_Update(struct zx_e_Body_s* x);
int zx_e_Body_NUM_UpdateResponse(struct zx_e_Body_s* x);
int zx_e_Body_NUM_shps_Poll(struct zx_e_Body_s* x);
int zx_e_Body_NUM_shps_PollResponse(struct zx_e_Body_s* x);
int zx_e_Body_NUM_ProxyInvoke(struct zx_e_Body_s* x);
int zx_e_Body_NUM_ProxyInvokeResponse(struct zx_e_Body_s* x);
int zx_e_Body_NUM_idhrxml_Create(struct zx_e_Body_s* x);
int zx_e_Body_NUM_idhrxml_CreateResponse(struct zx_e_Body_s* x);
int zx_e_Body_NUM_idhrxml_Query(struct zx_e_Body_s* x);
int zx_e_Body_NUM_idhrxml_QueryResponse(struct zx_e_Body_s* x);
int zx_e_Body_NUM_idhrxml_Modify(struct zx_e_Body_s* x);
int zx_e_Body_NUM_idhrxml_ModifyResponse(struct zx_e_Body_s* x);
int zx_e_Body_NUM_idhrxml_Delete(struct zx_e_Body_s* x);
int zx_e_Body_NUM_idhrxml_DeleteResponse(struct zx_e_Body_s* x);
int zx_e_Body_NUM_idhrxml_Notify(struct zx_e_Body_s* x);
int zx_e_Body_NUM_idhrxml_NotifyResponse(struct zx_e_Body_s* x);

struct zx_sp_ArtifactResolve_s* zx_e_Body_POP_ArtifactResolve(struct zx_e_Body_s* x);
struct zx_sp_ArtifactResponse_s* zx_e_Body_POP_ArtifactResponse(struct zx_e_Body_s* x);
struct zx_sp_ManageNameIDRequest_s* zx_e_Body_POP_ManageNameIDRequest(struct zx_e_Body_s* x);
struct zx_sp_ManageNameIDResponse_s* zx_e_Body_POP_ManageNameIDResponse(struct zx_e_Body_s* x);
struct zx_sp_LogoutRequest_s* zx_e_Body_POP_LogoutRequest(struct zx_e_Body_s* x);
struct zx_sp_LogoutResponse_s* zx_e_Body_POP_LogoutResponse(struct zx_e_Body_s* x);
struct zx_sp_NameIDMappingRequest_s* zx_e_Body_POP_NameIDMappingRequest(struct zx_e_Body_s* x);
struct zx_sp_NameIDMappingResponse_s* zx_e_Body_POP_NameIDMappingResponse(struct zx_e_Body_s* x);
struct zx_sp_AttributeQuery_s* zx_e_Body_POP_AttributeQuery(struct zx_e_Body_s* x);
struct zx_sp_AuthnQuery_s* zx_e_Body_POP_AuthnQuery(struct zx_e_Body_s* x);
struct zx_sp_AuthzDecisionQuery_s* zx_e_Body_POP_AuthzDecisionQuery(struct zx_e_Body_s* x);
struct zx_sp_AssertionIDRequest_s* zx_e_Body_POP_AssertionIDRequest(struct zx_e_Body_s* x);
struct zx_sp_Response_s* zx_e_Body_POP_Response(struct zx_e_Body_s* x);
struct zx_sp_AuthnRequest_s* zx_e_Body_POP_AuthnRequest(struct zx_e_Body_s* x);
struct zx_sp11_Request_s* zx_e_Body_POP_Request(struct zx_e_Body_s* x);
struct zx_sp11_Response_s* zx_e_Body_POP_sp11_Response(struct zx_e_Body_s* x);
struct zx_ff12_RegisterNameIdentifierRequest_s* zx_e_Body_POP_RegisterNameIdentifierRequest(struct zx_e_Body_s* x);
struct zx_ff12_RegisterNameIdentifierResponse_s* zx_e_Body_POP_RegisterNameIdentifierResponse(struct zx_e_Body_s* x);
struct zx_ff12_FederationTerminationNotification_s* zx_e_Body_POP_FederationTerminationNotification(struct zx_e_Body_s* x);
struct zx_ff12_LogoutRequest_s* zx_e_Body_POP_ff12_LogoutRequest(struct zx_e_Body_s* x);
struct zx_ff12_LogoutResponse_s* zx_e_Body_POP_ff12_LogoutResponse(struct zx_e_Body_s* x);
struct zx_ff12_NameIdentifierMappingRequest_s* zx_e_Body_POP_NameIdentifierMappingRequest(struct zx_e_Body_s* x);
struct zx_ff12_NameIdentifierMappingResponse_s* zx_e_Body_POP_NameIdentifierMappingResponse(struct zx_e_Body_s* x);
struct zx_xasp_XACMLAuthzDecisionQuery_s* zx_e_Body_POP_XACMLAuthzDecisionQuery(struct zx_e_Body_s* x);
struct zx_xasp_XACMLPolicyQuery_s* zx_e_Body_POP_XACMLPolicyQuery(struct zx_e_Body_s* x);
struct zx_di_Query_s* zx_e_Body_POP_Query(struct zx_e_Body_s* x);
struct zx_di_QueryResponse_s* zx_e_Body_POP_QueryResponse(struct zx_e_Body_s* x);
struct zx_di12_Query_s* zx_e_Body_POP_di12_Query(struct zx_e_Body_s* x);
struct zx_di12_QueryResponse_s* zx_e_Body_POP_di12_QueryResponse(struct zx_e_Body_s* x);
struct zx_di12_Modify_s* zx_e_Body_POP_Modify(struct zx_e_Body_s* x);
struct zx_di12_ModifyResponse_s* zx_e_Body_POP_ModifyResponse(struct zx_e_Body_s* x);
struct zx_e_Fault_s* zx_e_Body_POP_Fault(struct zx_e_Body_s* x);
struct zx_di_SvcMDAssociationAdd_s* zx_e_Body_POP_SvcMDAssociationAdd(struct zx_e_Body_s* x);
struct zx_di_SvcMDAssociationAddResponse_s* zx_e_Body_POP_SvcMDAssociationAddResponse(struct zx_e_Body_s* x);
struct zx_di_SvcMDAssociationDelete_s* zx_e_Body_POP_SvcMDAssociationDelete(struct zx_e_Body_s* x);
struct zx_di_SvcMDAssociationDeleteResponse_s* zx_e_Body_POP_SvcMDAssociationDeleteResponse(struct zx_e_Body_s* x);
struct zx_di_SvcMDAssociationQuery_s* zx_e_Body_POP_SvcMDAssociationQuery(struct zx_e_Body_s* x);
struct zx_di_SvcMDAssociationQueryResponse_s* zx_e_Body_POP_SvcMDAssociationQueryResponse(struct zx_e_Body_s* x);
struct zx_di_SvcMDRegister_s* zx_e_Body_POP_SvcMDRegister(struct zx_e_Body_s* x);
struct zx_di_SvcMDRegisterResponse_s* zx_e_Body_POP_SvcMDRegisterResponse(struct zx_e_Body_s* x);
struct zx_di_SvcMDDelete_s* zx_e_Body_POP_SvcMDDelete(struct zx_e_Body_s* x);
struct zx_di_SvcMDDeleteResponse_s* zx_e_Body_POP_SvcMDDeleteResponse(struct zx_e_Body_s* x);
struct zx_di_SvcMDQuery_s* zx_e_Body_POP_SvcMDQuery(struct zx_e_Body_s* x);
struct zx_di_SvcMDQueryResponse_s* zx_e_Body_POP_SvcMDQueryResponse(struct zx_e_Body_s* x);
struct zx_di_SvcMDReplace_s* zx_e_Body_POP_SvcMDReplace(struct zx_e_Body_s* x);
struct zx_di_SvcMDReplaceResponse_s* zx_e_Body_POP_SvcMDReplaceResponse(struct zx_e_Body_s* x);
struct zx_dap_Create_s* zx_e_Body_POP_Create(struct zx_e_Body_s* x);
struct zx_dap_CreateResponse_s* zx_e_Body_POP_CreateResponse(struct zx_e_Body_s* x);
struct zx_dap_Query_s* zx_e_Body_POP_dap_Query(struct zx_e_Body_s* x);
struct zx_dap_QueryResponse_s* zx_e_Body_POP_dap_QueryResponse(struct zx_e_Body_s* x);
struct zx_dap_Modify_s* zx_e_Body_POP_dap_Modify(struct zx_e_Body_s* x);
struct zx_dap_ModifyResponse_s* zx_e_Body_POP_dap_ModifyResponse(struct zx_e_Body_s* x);
struct zx_dap_Delete_s* zx_e_Body_POP_Delete(struct zx_e_Body_s* x);
struct zx_dap_DeleteResponse_s* zx_e_Body_POP_DeleteResponse(struct zx_e_Body_s* x);
struct zx_dap_Notify_s* zx_e_Body_POP_Notify(struct zx_e_Body_s* x);
struct zx_dap_NotifyResponse_s* zx_e_Body_POP_NotifyResponse(struct zx_e_Body_s* x);
struct zx_ps_AddEntityRequest_s* zx_e_Body_POP_AddEntityRequest(struct zx_e_Body_s* x);
struct zx_ps_AddEntityResponse_s* zx_e_Body_POP_AddEntityResponse(struct zx_e_Body_s* x);
struct zx_ps_AddKnownEntityRequest_s* zx_e_Body_POP_AddKnownEntityRequest(struct zx_e_Body_s* x);
struct zx_ps_AddKnownEntityResponse_s* zx_e_Body_POP_AddKnownEntityResponse(struct zx_e_Body_s* x);
struct zx_ps_AddCollectionRequest_s* zx_e_Body_POP_AddCollectionRequest(struct zx_e_Body_s* x);
struct zx_ps_AddCollectionResponse_s* zx_e_Body_POP_AddCollectionResponse(struct zx_e_Body_s* x);
struct zx_ps_AddToCollectionRequest_s* zx_e_Body_POP_AddToCollectionRequest(struct zx_e_Body_s* x);
struct zx_ps_AddToCollectionResponse_s* zx_e_Body_POP_AddToCollectionResponse(struct zx_e_Body_s* x);
struct zx_ps_RemoveEntityRequest_s* zx_e_Body_POP_RemoveEntityRequest(struct zx_e_Body_s* x);
struct zx_ps_RemoveEntityResponse_s* zx_e_Body_POP_RemoveEntityResponse(struct zx_e_Body_s* x);
struct zx_ps_RemoveCollectionRequest_s* zx_e_Body_POP_RemoveCollectionRequest(struct zx_e_Body_s* x);
struct zx_ps_RemoveCollectionResponse_s* zx_e_Body_POP_RemoveCollectionResponse(struct zx_e_Body_s* x);
struct zx_ps_RemoveFromCollectionRequest_s* zx_e_Body_POP_RemoveFromCollectionRequest(struct zx_e_Body_s* x);
struct zx_ps_RemoveFromCollectionResponse_s* zx_e_Body_POP_RemoveFromCollectionResponse(struct zx_e_Body_s* x);
struct zx_ps_ListMembersRequest_s* zx_e_Body_POP_ListMembersRequest(struct zx_e_Body_s* x);
struct zx_ps_ListMembersResponse_s* zx_e_Body_POP_ListMembersResponse(struct zx_e_Body_s* x);
struct zx_ps_QueryObjectsRequest_s* zx_e_Body_POP_QueryObjectsRequest(struct zx_e_Body_s* x);
struct zx_ps_QueryObjectsResponse_s* zx_e_Body_POP_QueryObjectsResponse(struct zx_e_Body_s* x);
struct zx_ps_GetObjectInfoRequest_s* zx_e_Body_POP_GetObjectInfoRequest(struct zx_e_Body_s* x);
struct zx_ps_GetObjectInfoResponse_s* zx_e_Body_POP_GetObjectInfoResponse(struct zx_e_Body_s* x);
struct zx_ps_SetObjectInfoRequest_s* zx_e_Body_POP_SetObjectInfoRequest(struct zx_e_Body_s* x);
struct zx_ps_SetObjectInfoResponse_s* zx_e_Body_POP_SetObjectInfoResponse(struct zx_e_Body_s* x);
struct zx_ps_TestMembershipRequest_s* zx_e_Body_POP_TestMembershipRequest(struct zx_e_Body_s* x);
struct zx_ps_TestMembershipResponse_s* zx_e_Body_POP_TestMembershipResponse(struct zx_e_Body_s* x);
struct zx_ps_ResolveIdentifierRequest_s* zx_e_Body_POP_ResolveIdentifierRequest(struct zx_e_Body_s* x);
struct zx_ps_ResolveIdentifierResponse_s* zx_e_Body_POP_ResolveIdentifierResponse(struct zx_e_Body_s* x);
struct zx_ps_Notify_s* zx_e_Body_POP_ps_Notify(struct zx_e_Body_s* x);
struct zx_ps_NotifyResponse_s* zx_e_Body_POP_ps_NotifyResponse(struct zx_e_Body_s* x);
struct zx_im_IdentityMappingRequest_s* zx_e_Body_POP_IdentityMappingRequest(struct zx_e_Body_s* x);
struct zx_im_IdentityMappingResponse_s* zx_e_Body_POP_IdentityMappingResponse(struct zx_e_Body_s* x);
struct zx_as_SASLRequest_s* zx_e_Body_POP_SASLRequest(struct zx_e_Body_s* x);
struct zx_as_SASLResponse_s* zx_e_Body_POP_SASLResponse(struct zx_e_Body_s* x);
struct zx_mm7_SubmitReq_s* zx_e_Body_POP_SubmitReq(struct zx_e_Body_s* x);
struct zx_mm7_SubmitRsp_s* zx_e_Body_POP_SubmitRsp(struct zx_e_Body_s* x);
struct zx_mm7_DeliverReq_s* zx_e_Body_POP_DeliverReq(struct zx_e_Body_s* x);
struct zx_mm7_DeliverRsp_s* zx_e_Body_POP_DeliverRsp(struct zx_e_Body_s* x);
struct zx_mm7_CancelReq_s* zx_e_Body_POP_CancelReq(struct zx_e_Body_s* x);
struct zx_mm7_CancelRsp_s* zx_e_Body_POP_CancelRsp(struct zx_e_Body_s* x);
struct zx_mm7_ReplaceReq_s* zx_e_Body_POP_ReplaceReq(struct zx_e_Body_s* x);
struct zx_mm7_ReplaceRsp_s* zx_e_Body_POP_ReplaceRsp(struct zx_e_Body_s* x);
struct zx_mm7_extendedCancelReq_s* zx_e_Body_POP_extendedCancelReq(struct zx_e_Body_s* x);
struct zx_mm7_extendedCancelRsp_s* zx_e_Body_POP_extendedCancelRsp(struct zx_e_Body_s* x);
struct zx_mm7_extendedReplaceReq_s* zx_e_Body_POP_extendedReplaceReq(struct zx_e_Body_s* x);
struct zx_mm7_extendedReplaceRsp_s* zx_e_Body_POP_extendedReplaceRsp(struct zx_e_Body_s* x);
struct zx_mm7_DeliveryReportReq_s* zx_e_Body_POP_DeliveryReportReq(struct zx_e_Body_s* x);
struct zx_mm7_DeliveryReportRsp_s* zx_e_Body_POP_DeliveryReportRsp(struct zx_e_Body_s* x);
struct zx_mm7_ReadReplyReq_s* zx_e_Body_POP_ReadReplyReq(struct zx_e_Body_s* x);
struct zx_mm7_ReadReplyRsp_s* zx_e_Body_POP_ReadReplyRsp(struct zx_e_Body_s* x);
struct zx_mm7_RSErrorRsp_s* zx_e_Body_POP_RSErrorRsp(struct zx_e_Body_s* x);
struct zx_mm7_VASPErrorRsp_s* zx_e_Body_POP_VASPErrorRsp(struct zx_e_Body_s* x);
struct zx_mm7_QueryStatusReq_s* zx_e_Body_POP_QueryStatusReq(struct zx_e_Body_s* x);
struct zx_mm7_QueryStatusRsp_s* zx_e_Body_POP_QueryStatusRsp(struct zx_e_Body_s* x);
struct zx_cb_Query_s* zx_e_Body_POP_cb_Query(struct zx_e_Body_s* x);
struct zx_cb_QueryResponse_s* zx_e_Body_POP_cb_QueryResponse(struct zx_e_Body_s* x);
struct zx_cb_Create_s* zx_e_Body_POP_cb_Create(struct zx_e_Body_s* x);
struct zx_cb_CreateResponse_s* zx_e_Body_POP_cb_CreateResponse(struct zx_e_Body_s* x);
struct zx_cb_Delete_s* zx_e_Body_POP_cb_Delete(struct zx_e_Body_s* x);
struct zx_cb_DeleteResponse_s* zx_e_Body_POP_cb_DeleteResponse(struct zx_e_Body_s* x);
struct zx_cb_Modify_s* zx_e_Body_POP_cb_Modify(struct zx_e_Body_s* x);
struct zx_cb_ModifyResponse_s* zx_e_Body_POP_cb_ModifyResponse(struct zx_e_Body_s* x);
struct zx_cb_Notify_s* zx_e_Body_POP_cb_Notify(struct zx_e_Body_s* x);
struct zx_cb_NotifyResponse_s* zx_e_Body_POP_cb_NotifyResponse(struct zx_e_Body_s* x);
struct zx_cb_ReportUsage_s* zx_e_Body_POP_ReportUsage(struct zx_e_Body_s* x);
struct zx_cb_ReportUsageResponse_s* zx_e_Body_POP_ReportUsageResponse(struct zx_e_Body_s* x);
struct zx_gl_Query_s* zx_e_Body_POP_gl_Query(struct zx_e_Body_s* x);
struct zx_gl_QueryResponse_s* zx_e_Body_POP_gl_QueryResponse(struct zx_e_Body_s* x);
struct zx_gl_Create_s* zx_e_Body_POP_gl_Create(struct zx_e_Body_s* x);
struct zx_gl_CreateResponse_s* zx_e_Body_POP_gl_CreateResponse(struct zx_e_Body_s* x);
struct zx_gl_Delete_s* zx_e_Body_POP_gl_Delete(struct zx_e_Body_s* x);
struct zx_gl_DeleteResponse_s* zx_e_Body_POP_gl_DeleteResponse(struct zx_e_Body_s* x);
struct zx_gl_Modify_s* zx_e_Body_POP_gl_Modify(struct zx_e_Body_s* x);
struct zx_gl_ModifyResponse_s* zx_e_Body_POP_gl_ModifyResponse(struct zx_e_Body_s* x);
struct zx_gl_Notify_s* zx_e_Body_POP_gl_Notify(struct zx_e_Body_s* x);
struct zx_gl_NotifyResponse_s* zx_e_Body_POP_gl_NotifyResponse(struct zx_e_Body_s* x);
struct zx_demomed_StoreObjectRequest_s* zx_e_Body_POP_StoreObjectRequest(struct zx_e_Body_s* x);
struct zx_demomed_StoreObjectResponse_s* zx_e_Body_POP_StoreObjectResponse(struct zx_e_Body_s* x);
struct zx_demomed_GetObjectListRequest_s* zx_e_Body_POP_GetObjectListRequest(struct zx_e_Body_s* x);
struct zx_demomed_GetObjectListResponse_s* zx_e_Body_POP_GetObjectListResponse(struct zx_e_Body_s* x);
struct zx_demomed_GetObjectRequest_s* zx_e_Body_POP_GetObjectRequest(struct zx_e_Body_s* x);
struct zx_demomed_GetObjectResponse_s* zx_e_Body_POP_GetObjectResponse(struct zx_e_Body_s* x);
struct zx_demomed_DeleteObjectRequest_s* zx_e_Body_POP_DeleteObjectRequest(struct zx_e_Body_s* x);
struct zx_demomed_DeleteObjectResponse_s* zx_e_Body_POP_DeleteObjectResponse(struct zx_e_Body_s* x);
struct zx_pmm_Provision_s* zx_e_Body_POP_Provision(struct zx_e_Body_s* x);
struct zx_pmm_ProvisionResponse_s* zx_e_Body_POP_ProvisionResponse(struct zx_e_Body_s* x);
struct zx_pmm_PMActivate_s* zx_e_Body_POP_PMActivate(struct zx_e_Body_s* x);
struct zx_pmm_PMActivateResponse_s* zx_e_Body_POP_PMActivateResponse(struct zx_e_Body_s* x);
struct zx_pmm_PMDeactivate_s* zx_e_Body_POP_PMDeactivate(struct zx_e_Body_s* x);
struct zx_pmm_PMDeactivateResponse_s* zx_e_Body_POP_PMDeactivateResponse(struct zx_e_Body_s* x);
struct zx_pmm_PMDelete_s* zx_e_Body_POP_PMDelete(struct zx_e_Body_s* x);
struct zx_pmm_PMDeleteResponse_s* zx_e_Body_POP_PMDeleteResponse(struct zx_e_Body_s* x);
struct zx_pmm_PMUpdate_s* zx_e_Body_POP_PMUpdate(struct zx_e_Body_s* x);
struct zx_pmm_PMUpdateResponse_s* zx_e_Body_POP_PMUpdateResponse(struct zx_e_Body_s* x);
struct zx_pmm_PMGetStatus_s* zx_e_Body_POP_PMGetStatus(struct zx_e_Body_s* x);
struct zx_pmm_PMGetStatusResponse_s* zx_e_Body_POP_PMGetStatusResponse(struct zx_e_Body_s* x);
struct zx_pmm_PMSetStatus_s* zx_e_Body_POP_PMSetStatus(struct zx_e_Body_s* x);
struct zx_pmm_PMSetStatusResponse_s* zx_e_Body_POP_PMSetStatusResponse(struct zx_e_Body_s* x);
struct zx_prov_PMERegister_s* zx_e_Body_POP_PMERegister(struct zx_e_Body_s* x);
struct zx_prov_PMERegisterResponse_s* zx_e_Body_POP_PMERegisterResponse(struct zx_e_Body_s* x);
struct zx_prov_PMEUpload_s* zx_e_Body_POP_PMEUpload(struct zx_e_Body_s* x);
struct zx_prov_PMEUploadResponse_s* zx_e_Body_POP_PMEUploadResponse(struct zx_e_Body_s* x);
struct zx_prov_PMEDownload_s* zx_e_Body_POP_PMEDownload(struct zx_e_Body_s* x);
struct zx_prov_PMEDownloadResponse_s* zx_e_Body_POP_PMEDownloadResponse(struct zx_e_Body_s* x);
struct zx_prov_PMEEnable_s* zx_e_Body_POP_PMEEnable(struct zx_e_Body_s* x);
struct zx_prov_PMEEnableResponse_s* zx_e_Body_POP_PMEEnableResponse(struct zx_e_Body_s* x);
struct zx_prov_PMEDisable_s* zx_e_Body_POP_PMEDisable(struct zx_e_Body_s* x);
struct zx_prov_PMEDisableResponse_s* zx_e_Body_POP_PMEDisableResponse(struct zx_e_Body_s* x);
struct zx_prov_PMEDelete_s* zx_e_Body_POP_PMEDelete(struct zx_e_Body_s* x);
struct zx_prov_PMEDeleteResponse_s* zx_e_Body_POP_PMEDeleteResponse(struct zx_e_Body_s* x);
struct zx_prov_PMEGetInfo_s* zx_e_Body_POP_PMEGetInfo(struct zx_e_Body_s* x);
struct zx_prov_PMEGetInfoResponse_s* zx_e_Body_POP_PMEGetInfoResponse(struct zx_e_Body_s* x);
struct zx_prov_PMGetStatus_s* zx_e_Body_POP_prov_PMGetStatus(struct zx_e_Body_s* x);
struct zx_prov_PMGetStatusResponse_s* zx_e_Body_POP_prov_PMGetStatusResponse(struct zx_e_Body_s* x);
struct zx_prov_PMSetStatus_s* zx_e_Body_POP_prov_PMSetStatus(struct zx_e_Body_s* x);
struct zx_prov_PMSetStatusResponse_s* zx_e_Body_POP_prov_PMSetStatusResponse(struct zx_e_Body_s* x);
struct zx_prov_PMGetDescriptor_s* zx_e_Body_POP_PMGetDescriptor(struct zx_e_Body_s* x);
struct zx_prov_PMGetDescriptorResponse_s* zx_e_Body_POP_PMGetDescriptorResponse(struct zx_e_Body_s* x);
struct zx_prov_PMActivate_s* zx_e_Body_POP_prov_PMActivate(struct zx_e_Body_s* x);
struct zx_prov_PMActivateResponse_s* zx_e_Body_POP_prov_PMActivateResponse(struct zx_e_Body_s* x);
struct zx_prov_PMDeactivate_s* zx_e_Body_POP_prov_PMDeactivate(struct zx_e_Body_s* x);
struct zx_prov_PMDeactivateResponse_s* zx_e_Body_POP_prov_PMDeactivateResponse(struct zx_e_Body_s* x);
struct zx_prov_PMRegisterDescriptor_s* zx_e_Body_POP_PMRegisterDescriptor(struct zx_e_Body_s* x);
struct zx_prov_PMRegisterDescriptorResponse_s* zx_e_Body_POP_PMRegisterDescriptorResponse(struct zx_e_Body_s* x);
struct zx_prov_PMUpdate_s* zx_e_Body_POP_prov_PMUpdate(struct zx_e_Body_s* x);
struct zx_prov_PMUpdateResponse_s* zx_e_Body_POP_prov_PMUpdateResponse(struct zx_e_Body_s* x);
struct zx_prov_PMDelete_s* zx_e_Body_POP_prov_PMDelete(struct zx_e_Body_s* x);
struct zx_prov_PMDeleteResponse_s* zx_e_Body_POP_prov_PMDeleteResponse(struct zx_e_Body_s* x);
struct zx_prov_Poll_s* zx_e_Body_POP_Poll(struct zx_e_Body_s* x);
struct zx_prov_PollResponse_s* zx_e_Body_POP_PollResponse(struct zx_e_Body_s* x);
struct zx_prov_UpdateEPR_s* zx_e_Body_POP_UpdateEPR(struct zx_e_Body_s* x);
struct zx_prov_UpdateEPRResponse_s* zx_e_Body_POP_UpdateEPRResponse(struct zx_e_Body_s* x);
struct zx_idp_GetAssertion_s* zx_e_Body_POP_GetAssertion(struct zx_e_Body_s* x);
struct zx_idp_GetAssertionResponse_s* zx_e_Body_POP_GetAssertionResponse(struct zx_e_Body_s* x);
struct zx_idp_GetProviderInfo_s* zx_e_Body_POP_GetProviderInfo(struct zx_e_Body_s* x);
struct zx_idp_GetProviderInfoResponse_s* zx_e_Body_POP_GetProviderInfoResponse(struct zx_e_Body_s* x);
struct zx_idp_CreatedStatus_s* zx_e_Body_POP_CreatedStatus(struct zx_e_Body_s* x);
struct zx_idp_CreatedStatusResponse_s* zx_e_Body_POP_CreatedStatusResponse(struct zx_e_Body_s* x);
struct zx_shps_Delete_s* zx_e_Body_POP_shps_Delete(struct zx_e_Body_s* x);
struct zx_shps_DeleteResponse_s* zx_e_Body_POP_shps_DeleteResponse(struct zx_e_Body_s* x);
struct zx_shps_GetStatus_s* zx_e_Body_POP_GetStatus(struct zx_e_Body_s* x);
struct zx_shps_GetStatusResponse_s* zx_e_Body_POP_GetStatusResponse(struct zx_e_Body_s* x);
struct zx_shps_Query_s* zx_e_Body_POP_shps_Query(struct zx_e_Body_s* x);
struct zx_shps_QueryResponse_s* zx_e_Body_POP_shps_QueryResponse(struct zx_e_Body_s* x);
struct zx_elem_s* zx_e_Body_POP_Invoke(struct zx_e_Body_s* x);
struct zx_shps_InvokeResponse_s* zx_e_Body_POP_InvokeResponse(struct zx_e_Body_s* x);
struct zx_shps_QueryRegistered_s* zx_e_Body_POP_QueryRegistered(struct zx_e_Body_s* x);
struct zx_shps_QueryRegisteredResponse_s* zx_e_Body_POP_QueryRegisteredResponse(struct zx_e_Body_s* x);
struct zx_shps_Register_s* zx_e_Body_POP_Register(struct zx_e_Body_s* x);
struct zx_shps_RegisterResponse_s* zx_e_Body_POP_RegisterResponse(struct zx_e_Body_s* x);
struct zx_shps_SetStatus_s* zx_e_Body_POP_SetStatus(struct zx_e_Body_s* x);
struct zx_shps_SetStatusResponse_s* zx_e_Body_POP_SetStatusResponse(struct zx_e_Body_s* x);
struct zx_shps_Update_s* zx_e_Body_POP_Update(struct zx_e_Body_s* x);
struct zx_shps_UpdateResponse_s* zx_e_Body_POP_UpdateResponse(struct zx_e_Body_s* x);
struct zx_shps_Poll_s* zx_e_Body_POP_shps_Poll(struct zx_e_Body_s* x);
struct zx_shps_PollResponse_s* zx_e_Body_POP_shps_PollResponse(struct zx_e_Body_s* x);
struct zx_shps_ProxyInvoke_s* zx_e_Body_POP_ProxyInvoke(struct zx_e_Body_s* x);
struct zx_shps_ProxyInvokeResponse_s* zx_e_Body_POP_ProxyInvokeResponse(struct zx_e_Body_s* x);
struct zx_idhrxml_Create_s* zx_e_Body_POP_idhrxml_Create(struct zx_e_Body_s* x);
struct zx_idhrxml_CreateResponse_s* zx_e_Body_POP_idhrxml_CreateResponse(struct zx_e_Body_s* x);
struct zx_idhrxml_Query_s* zx_e_Body_POP_idhrxml_Query(struct zx_e_Body_s* x);
struct zx_idhrxml_QueryResponse_s* zx_e_Body_POP_idhrxml_QueryResponse(struct zx_e_Body_s* x);
struct zx_idhrxml_Modify_s* zx_e_Body_POP_idhrxml_Modify(struct zx_e_Body_s* x);
struct zx_idhrxml_ModifyResponse_s* zx_e_Body_POP_idhrxml_ModifyResponse(struct zx_e_Body_s* x);
struct zx_idhrxml_Delete_s* zx_e_Body_POP_idhrxml_Delete(struct zx_e_Body_s* x);
struct zx_idhrxml_DeleteResponse_s* zx_e_Body_POP_idhrxml_DeleteResponse(struct zx_e_Body_s* x);
struct zx_idhrxml_Notify_s* zx_e_Body_POP_idhrxml_Notify(struct zx_e_Body_s* x);
struct zx_idhrxml_NotifyResponse_s* zx_e_Body_POP_idhrxml_NotifyResponse(struct zx_e_Body_s* x);

void zx_e_Body_PUSH_ArtifactResolve(struct zx_e_Body_s* x, struct zx_sp_ArtifactResolve_s* y);
void zx_e_Body_PUSH_ArtifactResponse(struct zx_e_Body_s* x, struct zx_sp_ArtifactResponse_s* y);
void zx_e_Body_PUSH_ManageNameIDRequest(struct zx_e_Body_s* x, struct zx_sp_ManageNameIDRequest_s* y);
void zx_e_Body_PUSH_ManageNameIDResponse(struct zx_e_Body_s* x, struct zx_sp_ManageNameIDResponse_s* y);
void zx_e_Body_PUSH_LogoutRequest(struct zx_e_Body_s* x, struct zx_sp_LogoutRequest_s* y);
void zx_e_Body_PUSH_LogoutResponse(struct zx_e_Body_s* x, struct zx_sp_LogoutResponse_s* y);
void zx_e_Body_PUSH_NameIDMappingRequest(struct zx_e_Body_s* x, struct zx_sp_NameIDMappingRequest_s* y);
void zx_e_Body_PUSH_NameIDMappingResponse(struct zx_e_Body_s* x, struct zx_sp_NameIDMappingResponse_s* y);
void zx_e_Body_PUSH_AttributeQuery(struct zx_e_Body_s* x, struct zx_sp_AttributeQuery_s* y);
void zx_e_Body_PUSH_AuthnQuery(struct zx_e_Body_s* x, struct zx_sp_AuthnQuery_s* y);
void zx_e_Body_PUSH_AuthzDecisionQuery(struct zx_e_Body_s* x, struct zx_sp_AuthzDecisionQuery_s* y);
void zx_e_Body_PUSH_AssertionIDRequest(struct zx_e_Body_s* x, struct zx_sp_AssertionIDRequest_s* y);
void zx_e_Body_PUSH_Response(struct zx_e_Body_s* x, struct zx_sp_Response_s* y);
void zx_e_Body_PUSH_AuthnRequest(struct zx_e_Body_s* x, struct zx_sp_AuthnRequest_s* y);
void zx_e_Body_PUSH_Request(struct zx_e_Body_s* x, struct zx_sp11_Request_s* y);
void zx_e_Body_PUSH_sp11_Response(struct zx_e_Body_s* x, struct zx_sp11_Response_s* y);
void zx_e_Body_PUSH_RegisterNameIdentifierRequest(struct zx_e_Body_s* x, struct zx_ff12_RegisterNameIdentifierRequest_s* y);
void zx_e_Body_PUSH_RegisterNameIdentifierResponse(struct zx_e_Body_s* x, struct zx_ff12_RegisterNameIdentifierResponse_s* y);
void zx_e_Body_PUSH_FederationTerminationNotification(struct zx_e_Body_s* x, struct zx_ff12_FederationTerminationNotification_s* y);
void zx_e_Body_PUSH_ff12_LogoutRequest(struct zx_e_Body_s* x, struct zx_ff12_LogoutRequest_s* y);
void zx_e_Body_PUSH_ff12_LogoutResponse(struct zx_e_Body_s* x, struct zx_ff12_LogoutResponse_s* y);
void zx_e_Body_PUSH_NameIdentifierMappingRequest(struct zx_e_Body_s* x, struct zx_ff12_NameIdentifierMappingRequest_s* y);
void zx_e_Body_PUSH_NameIdentifierMappingResponse(struct zx_e_Body_s* x, struct zx_ff12_NameIdentifierMappingResponse_s* y);
void zx_e_Body_PUSH_XACMLAuthzDecisionQuery(struct zx_e_Body_s* x, struct zx_xasp_XACMLAuthzDecisionQuery_s* y);
void zx_e_Body_PUSH_XACMLPolicyQuery(struct zx_e_Body_s* x, struct zx_xasp_XACMLPolicyQuery_s* y);
void zx_e_Body_PUSH_Query(struct zx_e_Body_s* x, struct zx_di_Query_s* y);
void zx_e_Body_PUSH_QueryResponse(struct zx_e_Body_s* x, struct zx_di_QueryResponse_s* y);
void zx_e_Body_PUSH_di12_Query(struct zx_e_Body_s* x, struct zx_di12_Query_s* y);
void zx_e_Body_PUSH_di12_QueryResponse(struct zx_e_Body_s* x, struct zx_di12_QueryResponse_s* y);
void zx_e_Body_PUSH_Modify(struct zx_e_Body_s* x, struct zx_di12_Modify_s* y);
void zx_e_Body_PUSH_ModifyResponse(struct zx_e_Body_s* x, struct zx_di12_ModifyResponse_s* y);
void zx_e_Body_PUSH_Fault(struct zx_e_Body_s* x, struct zx_e_Fault_s* y);
void zx_e_Body_PUSH_SvcMDAssociationAdd(struct zx_e_Body_s* x, struct zx_di_SvcMDAssociationAdd_s* y);
void zx_e_Body_PUSH_SvcMDAssociationAddResponse(struct zx_e_Body_s* x, struct zx_di_SvcMDAssociationAddResponse_s* y);
void zx_e_Body_PUSH_SvcMDAssociationDelete(struct zx_e_Body_s* x, struct zx_di_SvcMDAssociationDelete_s* y);
void zx_e_Body_PUSH_SvcMDAssociationDeleteResponse(struct zx_e_Body_s* x, struct zx_di_SvcMDAssociationDeleteResponse_s* y);
void zx_e_Body_PUSH_SvcMDAssociationQuery(struct zx_e_Body_s* x, struct zx_di_SvcMDAssociationQuery_s* y);
void zx_e_Body_PUSH_SvcMDAssociationQueryResponse(struct zx_e_Body_s* x, struct zx_di_SvcMDAssociationQueryResponse_s* y);
void zx_e_Body_PUSH_SvcMDRegister(struct zx_e_Body_s* x, struct zx_di_SvcMDRegister_s* y);
void zx_e_Body_PUSH_SvcMDRegisterResponse(struct zx_e_Body_s* x, struct zx_di_SvcMDRegisterResponse_s* y);
void zx_e_Body_PUSH_SvcMDDelete(struct zx_e_Body_s* x, struct zx_di_SvcMDDelete_s* y);
void zx_e_Body_PUSH_SvcMDDeleteResponse(struct zx_e_Body_s* x, struct zx_di_SvcMDDeleteResponse_s* y);
void zx_e_Body_PUSH_SvcMDQuery(struct zx_e_Body_s* x, struct zx_di_SvcMDQuery_s* y);
void zx_e_Body_PUSH_SvcMDQueryResponse(struct zx_e_Body_s* x, struct zx_di_SvcMDQueryResponse_s* y);
void zx_e_Body_PUSH_SvcMDReplace(struct zx_e_Body_s* x, struct zx_di_SvcMDReplace_s* y);
void zx_e_Body_PUSH_SvcMDReplaceResponse(struct zx_e_Body_s* x, struct zx_di_SvcMDReplaceResponse_s* y);
void zx_e_Body_PUSH_Create(struct zx_e_Body_s* x, struct zx_dap_Create_s* y);
void zx_e_Body_PUSH_CreateResponse(struct zx_e_Body_s* x, struct zx_dap_CreateResponse_s* y);
void zx_e_Body_PUSH_dap_Query(struct zx_e_Body_s* x, struct zx_dap_Query_s* y);
void zx_e_Body_PUSH_dap_QueryResponse(struct zx_e_Body_s* x, struct zx_dap_QueryResponse_s* y);
void zx_e_Body_PUSH_dap_Modify(struct zx_e_Body_s* x, struct zx_dap_Modify_s* y);
void zx_e_Body_PUSH_dap_ModifyResponse(struct zx_e_Body_s* x, struct zx_dap_ModifyResponse_s* y);
void zx_e_Body_PUSH_Delete(struct zx_e_Body_s* x, struct zx_dap_Delete_s* y);
void zx_e_Body_PUSH_DeleteResponse(struct zx_e_Body_s* x, struct zx_dap_DeleteResponse_s* y);
void zx_e_Body_PUSH_Notify(struct zx_e_Body_s* x, struct zx_dap_Notify_s* y);
void zx_e_Body_PUSH_NotifyResponse(struct zx_e_Body_s* x, struct zx_dap_NotifyResponse_s* y);
void zx_e_Body_PUSH_AddEntityRequest(struct zx_e_Body_s* x, struct zx_ps_AddEntityRequest_s* y);
void zx_e_Body_PUSH_AddEntityResponse(struct zx_e_Body_s* x, struct zx_ps_AddEntityResponse_s* y);
void zx_e_Body_PUSH_AddKnownEntityRequest(struct zx_e_Body_s* x, struct zx_ps_AddKnownEntityRequest_s* y);
void zx_e_Body_PUSH_AddKnownEntityResponse(struct zx_e_Body_s* x, struct zx_ps_AddKnownEntityResponse_s* y);
void zx_e_Body_PUSH_AddCollectionRequest(struct zx_e_Body_s* x, struct zx_ps_AddCollectionRequest_s* y);
void zx_e_Body_PUSH_AddCollectionResponse(struct zx_e_Body_s* x, struct zx_ps_AddCollectionResponse_s* y);
void zx_e_Body_PUSH_AddToCollectionRequest(struct zx_e_Body_s* x, struct zx_ps_AddToCollectionRequest_s* y);
void zx_e_Body_PUSH_AddToCollectionResponse(struct zx_e_Body_s* x, struct zx_ps_AddToCollectionResponse_s* y);
void zx_e_Body_PUSH_RemoveEntityRequest(struct zx_e_Body_s* x, struct zx_ps_RemoveEntityRequest_s* y);
void zx_e_Body_PUSH_RemoveEntityResponse(struct zx_e_Body_s* x, struct zx_ps_RemoveEntityResponse_s* y);
void zx_e_Body_PUSH_RemoveCollectionRequest(struct zx_e_Body_s* x, struct zx_ps_RemoveCollectionRequest_s* y);
void zx_e_Body_PUSH_RemoveCollectionResponse(struct zx_e_Body_s* x, struct zx_ps_RemoveCollectionResponse_s* y);
void zx_e_Body_PUSH_RemoveFromCollectionRequest(struct zx_e_Body_s* x, struct zx_ps_RemoveFromCollectionRequest_s* y);
void zx_e_Body_PUSH_RemoveFromCollectionResponse(struct zx_e_Body_s* x, struct zx_ps_RemoveFromCollectionResponse_s* y);
void zx_e_Body_PUSH_ListMembersRequest(struct zx_e_Body_s* x, struct zx_ps_ListMembersRequest_s* y);
void zx_e_Body_PUSH_ListMembersResponse(struct zx_e_Body_s* x, struct zx_ps_ListMembersResponse_s* y);
void zx_e_Body_PUSH_QueryObjectsRequest(struct zx_e_Body_s* x, struct zx_ps_QueryObjectsRequest_s* y);
void zx_e_Body_PUSH_QueryObjectsResponse(struct zx_e_Body_s* x, struct zx_ps_QueryObjectsResponse_s* y);
void zx_e_Body_PUSH_GetObjectInfoRequest(struct zx_e_Body_s* x, struct zx_ps_GetObjectInfoRequest_s* y);
void zx_e_Body_PUSH_GetObjectInfoResponse(struct zx_e_Body_s* x, struct zx_ps_GetObjectInfoResponse_s* y);
void zx_e_Body_PUSH_SetObjectInfoRequest(struct zx_e_Body_s* x, struct zx_ps_SetObjectInfoRequest_s* y);
void zx_e_Body_PUSH_SetObjectInfoResponse(struct zx_e_Body_s* x, struct zx_ps_SetObjectInfoResponse_s* y);
void zx_e_Body_PUSH_TestMembershipRequest(struct zx_e_Body_s* x, struct zx_ps_TestMembershipRequest_s* y);
void zx_e_Body_PUSH_TestMembershipResponse(struct zx_e_Body_s* x, struct zx_ps_TestMembershipResponse_s* y);
void zx_e_Body_PUSH_ResolveIdentifierRequest(struct zx_e_Body_s* x, struct zx_ps_ResolveIdentifierRequest_s* y);
void zx_e_Body_PUSH_ResolveIdentifierResponse(struct zx_e_Body_s* x, struct zx_ps_ResolveIdentifierResponse_s* y);
void zx_e_Body_PUSH_ps_Notify(struct zx_e_Body_s* x, struct zx_ps_Notify_s* y);
void zx_e_Body_PUSH_ps_NotifyResponse(struct zx_e_Body_s* x, struct zx_ps_NotifyResponse_s* y);
void zx_e_Body_PUSH_IdentityMappingRequest(struct zx_e_Body_s* x, struct zx_im_IdentityMappingRequest_s* y);
void zx_e_Body_PUSH_IdentityMappingResponse(struct zx_e_Body_s* x, struct zx_im_IdentityMappingResponse_s* y);
void zx_e_Body_PUSH_SASLRequest(struct zx_e_Body_s* x, struct zx_as_SASLRequest_s* y);
void zx_e_Body_PUSH_SASLResponse(struct zx_e_Body_s* x, struct zx_as_SASLResponse_s* y);
void zx_e_Body_PUSH_SubmitReq(struct zx_e_Body_s* x, struct zx_mm7_SubmitReq_s* y);
void zx_e_Body_PUSH_SubmitRsp(struct zx_e_Body_s* x, struct zx_mm7_SubmitRsp_s* y);
void zx_e_Body_PUSH_DeliverReq(struct zx_e_Body_s* x, struct zx_mm7_DeliverReq_s* y);
void zx_e_Body_PUSH_DeliverRsp(struct zx_e_Body_s* x, struct zx_mm7_DeliverRsp_s* y);
void zx_e_Body_PUSH_CancelReq(struct zx_e_Body_s* x, struct zx_mm7_CancelReq_s* y);
void zx_e_Body_PUSH_CancelRsp(struct zx_e_Body_s* x, struct zx_mm7_CancelRsp_s* y);
void zx_e_Body_PUSH_ReplaceReq(struct zx_e_Body_s* x, struct zx_mm7_ReplaceReq_s* y);
void zx_e_Body_PUSH_ReplaceRsp(struct zx_e_Body_s* x, struct zx_mm7_ReplaceRsp_s* y);
void zx_e_Body_PUSH_extendedCancelReq(struct zx_e_Body_s* x, struct zx_mm7_extendedCancelReq_s* y);
void zx_e_Body_PUSH_extendedCancelRsp(struct zx_e_Body_s* x, struct zx_mm7_extendedCancelRsp_s* y);
void zx_e_Body_PUSH_extendedReplaceReq(struct zx_e_Body_s* x, struct zx_mm7_extendedReplaceReq_s* y);
void zx_e_Body_PUSH_extendedReplaceRsp(struct zx_e_Body_s* x, struct zx_mm7_extendedReplaceRsp_s* y);
void zx_e_Body_PUSH_DeliveryReportReq(struct zx_e_Body_s* x, struct zx_mm7_DeliveryReportReq_s* y);
void zx_e_Body_PUSH_DeliveryReportRsp(struct zx_e_Body_s* x, struct zx_mm7_DeliveryReportRsp_s* y);
void zx_e_Body_PUSH_ReadReplyReq(struct zx_e_Body_s* x, struct zx_mm7_ReadReplyReq_s* y);
void zx_e_Body_PUSH_ReadReplyRsp(struct zx_e_Body_s* x, struct zx_mm7_ReadReplyRsp_s* y);
void zx_e_Body_PUSH_RSErrorRsp(struct zx_e_Body_s* x, struct zx_mm7_RSErrorRsp_s* y);
void zx_e_Body_PUSH_VASPErrorRsp(struct zx_e_Body_s* x, struct zx_mm7_VASPErrorRsp_s* y);
void zx_e_Body_PUSH_QueryStatusReq(struct zx_e_Body_s* x, struct zx_mm7_QueryStatusReq_s* y);
void zx_e_Body_PUSH_QueryStatusRsp(struct zx_e_Body_s* x, struct zx_mm7_QueryStatusRsp_s* y);
void zx_e_Body_PUSH_cb_Query(struct zx_e_Body_s* x, struct zx_cb_Query_s* y);
void zx_e_Body_PUSH_cb_QueryResponse(struct zx_e_Body_s* x, struct zx_cb_QueryResponse_s* y);
void zx_e_Body_PUSH_cb_Create(struct zx_e_Body_s* x, struct zx_cb_Create_s* y);
void zx_e_Body_PUSH_cb_CreateResponse(struct zx_e_Body_s* x, struct zx_cb_CreateResponse_s* y);
void zx_e_Body_PUSH_cb_Delete(struct zx_e_Body_s* x, struct zx_cb_Delete_s* y);
void zx_e_Body_PUSH_cb_DeleteResponse(struct zx_e_Body_s* x, struct zx_cb_DeleteResponse_s* y);
void zx_e_Body_PUSH_cb_Modify(struct zx_e_Body_s* x, struct zx_cb_Modify_s* y);
void zx_e_Body_PUSH_cb_ModifyResponse(struct zx_e_Body_s* x, struct zx_cb_ModifyResponse_s* y);
void zx_e_Body_PUSH_cb_Notify(struct zx_e_Body_s* x, struct zx_cb_Notify_s* y);
void zx_e_Body_PUSH_cb_NotifyResponse(struct zx_e_Body_s* x, struct zx_cb_NotifyResponse_s* y);
void zx_e_Body_PUSH_ReportUsage(struct zx_e_Body_s* x, struct zx_cb_ReportUsage_s* y);
void zx_e_Body_PUSH_ReportUsageResponse(struct zx_e_Body_s* x, struct zx_cb_ReportUsageResponse_s* y);
void zx_e_Body_PUSH_gl_Query(struct zx_e_Body_s* x, struct zx_gl_Query_s* y);
void zx_e_Body_PUSH_gl_QueryResponse(struct zx_e_Body_s* x, struct zx_gl_QueryResponse_s* y);
void zx_e_Body_PUSH_gl_Create(struct zx_e_Body_s* x, struct zx_gl_Create_s* y);
void zx_e_Body_PUSH_gl_CreateResponse(struct zx_e_Body_s* x, struct zx_gl_CreateResponse_s* y);
void zx_e_Body_PUSH_gl_Delete(struct zx_e_Body_s* x, struct zx_gl_Delete_s* y);
void zx_e_Body_PUSH_gl_DeleteResponse(struct zx_e_Body_s* x, struct zx_gl_DeleteResponse_s* y);
void zx_e_Body_PUSH_gl_Modify(struct zx_e_Body_s* x, struct zx_gl_Modify_s* y);
void zx_e_Body_PUSH_gl_ModifyResponse(struct zx_e_Body_s* x, struct zx_gl_ModifyResponse_s* y);
void zx_e_Body_PUSH_gl_Notify(struct zx_e_Body_s* x, struct zx_gl_Notify_s* y);
void zx_e_Body_PUSH_gl_NotifyResponse(struct zx_e_Body_s* x, struct zx_gl_NotifyResponse_s* y);
void zx_e_Body_PUSH_StoreObjectRequest(struct zx_e_Body_s* x, struct zx_demomed_StoreObjectRequest_s* y);
void zx_e_Body_PUSH_StoreObjectResponse(struct zx_e_Body_s* x, struct zx_demomed_StoreObjectResponse_s* y);
void zx_e_Body_PUSH_GetObjectListRequest(struct zx_e_Body_s* x, struct zx_demomed_GetObjectListRequest_s* y);
void zx_e_Body_PUSH_GetObjectListResponse(struct zx_e_Body_s* x, struct zx_demomed_GetObjectListResponse_s* y);
void zx_e_Body_PUSH_GetObjectRequest(struct zx_e_Body_s* x, struct zx_demomed_GetObjectRequest_s* y);
void zx_e_Body_PUSH_GetObjectResponse(struct zx_e_Body_s* x, struct zx_demomed_GetObjectResponse_s* y);
void zx_e_Body_PUSH_DeleteObjectRequest(struct zx_e_Body_s* x, struct zx_demomed_DeleteObjectRequest_s* y);
void zx_e_Body_PUSH_DeleteObjectResponse(struct zx_e_Body_s* x, struct zx_demomed_DeleteObjectResponse_s* y);
void zx_e_Body_PUSH_Provision(struct zx_e_Body_s* x, struct zx_pmm_Provision_s* y);
void zx_e_Body_PUSH_ProvisionResponse(struct zx_e_Body_s* x, struct zx_pmm_ProvisionResponse_s* y);
void zx_e_Body_PUSH_PMActivate(struct zx_e_Body_s* x, struct zx_pmm_PMActivate_s* y);
void zx_e_Body_PUSH_PMActivateResponse(struct zx_e_Body_s* x, struct zx_pmm_PMActivateResponse_s* y);
void zx_e_Body_PUSH_PMDeactivate(struct zx_e_Body_s* x, struct zx_pmm_PMDeactivate_s* y);
void zx_e_Body_PUSH_PMDeactivateResponse(struct zx_e_Body_s* x, struct zx_pmm_PMDeactivateResponse_s* y);
void zx_e_Body_PUSH_PMDelete(struct zx_e_Body_s* x, struct zx_pmm_PMDelete_s* y);
void zx_e_Body_PUSH_PMDeleteResponse(struct zx_e_Body_s* x, struct zx_pmm_PMDeleteResponse_s* y);
void zx_e_Body_PUSH_PMUpdate(struct zx_e_Body_s* x, struct zx_pmm_PMUpdate_s* y);
void zx_e_Body_PUSH_PMUpdateResponse(struct zx_e_Body_s* x, struct zx_pmm_PMUpdateResponse_s* y);
void zx_e_Body_PUSH_PMGetStatus(struct zx_e_Body_s* x, struct zx_pmm_PMGetStatus_s* y);
void zx_e_Body_PUSH_PMGetStatusResponse(struct zx_e_Body_s* x, struct zx_pmm_PMGetStatusResponse_s* y);
void zx_e_Body_PUSH_PMSetStatus(struct zx_e_Body_s* x, struct zx_pmm_PMSetStatus_s* y);
void zx_e_Body_PUSH_PMSetStatusResponse(struct zx_e_Body_s* x, struct zx_pmm_PMSetStatusResponse_s* y);
void zx_e_Body_PUSH_PMERegister(struct zx_e_Body_s* x, struct zx_prov_PMERegister_s* y);
void zx_e_Body_PUSH_PMERegisterResponse(struct zx_e_Body_s* x, struct zx_prov_PMERegisterResponse_s* y);
void zx_e_Body_PUSH_PMEUpload(struct zx_e_Body_s* x, struct zx_prov_PMEUpload_s* y);
void zx_e_Body_PUSH_PMEUploadResponse(struct zx_e_Body_s* x, struct zx_prov_PMEUploadResponse_s* y);
void zx_e_Body_PUSH_PMEDownload(struct zx_e_Body_s* x, struct zx_prov_PMEDownload_s* y);
void zx_e_Body_PUSH_PMEDownloadResponse(struct zx_e_Body_s* x, struct zx_prov_PMEDownloadResponse_s* y);
void zx_e_Body_PUSH_PMEEnable(struct zx_e_Body_s* x, struct zx_prov_PMEEnable_s* y);
void zx_e_Body_PUSH_PMEEnableResponse(struct zx_e_Body_s* x, struct zx_prov_PMEEnableResponse_s* y);
void zx_e_Body_PUSH_PMEDisable(struct zx_e_Body_s* x, struct zx_prov_PMEDisable_s* y);
void zx_e_Body_PUSH_PMEDisableResponse(struct zx_e_Body_s* x, struct zx_prov_PMEDisableResponse_s* y);
void zx_e_Body_PUSH_PMEDelete(struct zx_e_Body_s* x, struct zx_prov_PMEDelete_s* y);
void zx_e_Body_PUSH_PMEDeleteResponse(struct zx_e_Body_s* x, struct zx_prov_PMEDeleteResponse_s* y);
void zx_e_Body_PUSH_PMEGetInfo(struct zx_e_Body_s* x, struct zx_prov_PMEGetInfo_s* y);
void zx_e_Body_PUSH_PMEGetInfoResponse(struct zx_e_Body_s* x, struct zx_prov_PMEGetInfoResponse_s* y);
void zx_e_Body_PUSH_prov_PMGetStatus(struct zx_e_Body_s* x, struct zx_prov_PMGetStatus_s* y);
void zx_e_Body_PUSH_prov_PMGetStatusResponse(struct zx_e_Body_s* x, struct zx_prov_PMGetStatusResponse_s* y);
void zx_e_Body_PUSH_prov_PMSetStatus(struct zx_e_Body_s* x, struct zx_prov_PMSetStatus_s* y);
void zx_e_Body_PUSH_prov_PMSetStatusResponse(struct zx_e_Body_s* x, struct zx_prov_PMSetStatusResponse_s* y);
void zx_e_Body_PUSH_PMGetDescriptor(struct zx_e_Body_s* x, struct zx_prov_PMGetDescriptor_s* y);
void zx_e_Body_PUSH_PMGetDescriptorResponse(struct zx_e_Body_s* x, struct zx_prov_PMGetDescriptorResponse_s* y);
void zx_e_Body_PUSH_prov_PMActivate(struct zx_e_Body_s* x, struct zx_prov_PMActivate_s* y);
void zx_e_Body_PUSH_prov_PMActivateResponse(struct zx_e_Body_s* x, struct zx_prov_PMActivateResponse_s* y);
void zx_e_Body_PUSH_prov_PMDeactivate(struct zx_e_Body_s* x, struct zx_prov_PMDeactivate_s* y);
void zx_e_Body_PUSH_prov_PMDeactivateResponse(struct zx_e_Body_s* x, struct zx_prov_PMDeactivateResponse_s* y);
void zx_e_Body_PUSH_PMRegisterDescriptor(struct zx_e_Body_s* x, struct zx_prov_PMRegisterDescriptor_s* y);
void zx_e_Body_PUSH_PMRegisterDescriptorResponse(struct zx_e_Body_s* x, struct zx_prov_PMRegisterDescriptorResponse_s* y);
void zx_e_Body_PUSH_prov_PMUpdate(struct zx_e_Body_s* x, struct zx_prov_PMUpdate_s* y);
void zx_e_Body_PUSH_prov_PMUpdateResponse(struct zx_e_Body_s* x, struct zx_prov_PMUpdateResponse_s* y);
void zx_e_Body_PUSH_prov_PMDelete(struct zx_e_Body_s* x, struct zx_prov_PMDelete_s* y);
void zx_e_Body_PUSH_prov_PMDeleteResponse(struct zx_e_Body_s* x, struct zx_prov_PMDeleteResponse_s* y);
void zx_e_Body_PUSH_Poll(struct zx_e_Body_s* x, struct zx_prov_Poll_s* y);
void zx_e_Body_PUSH_PollResponse(struct zx_e_Body_s* x, struct zx_prov_PollResponse_s* y);
void zx_e_Body_PUSH_UpdateEPR(struct zx_e_Body_s* x, struct zx_prov_UpdateEPR_s* y);
void zx_e_Body_PUSH_UpdateEPRResponse(struct zx_e_Body_s* x, struct zx_prov_UpdateEPRResponse_s* y);
void zx_e_Body_PUSH_GetAssertion(struct zx_e_Body_s* x, struct zx_idp_GetAssertion_s* y);
void zx_e_Body_PUSH_GetAssertionResponse(struct zx_e_Body_s* x, struct zx_idp_GetAssertionResponse_s* y);
void zx_e_Body_PUSH_GetProviderInfo(struct zx_e_Body_s* x, struct zx_idp_GetProviderInfo_s* y);
void zx_e_Body_PUSH_GetProviderInfoResponse(struct zx_e_Body_s* x, struct zx_idp_GetProviderInfoResponse_s* y);
void zx_e_Body_PUSH_CreatedStatus(struct zx_e_Body_s* x, struct zx_idp_CreatedStatus_s* y);
void zx_e_Body_PUSH_CreatedStatusResponse(struct zx_e_Body_s* x, struct zx_idp_CreatedStatusResponse_s* y);
void zx_e_Body_PUSH_shps_Delete(struct zx_e_Body_s* x, struct zx_shps_Delete_s* y);
void zx_e_Body_PUSH_shps_DeleteResponse(struct zx_e_Body_s* x, struct zx_shps_DeleteResponse_s* y);
void zx_e_Body_PUSH_GetStatus(struct zx_e_Body_s* x, struct zx_shps_GetStatus_s* y);
void zx_e_Body_PUSH_GetStatusResponse(struct zx_e_Body_s* x, struct zx_shps_GetStatusResponse_s* y);
void zx_e_Body_PUSH_shps_Query(struct zx_e_Body_s* x, struct zx_shps_Query_s* y);
void zx_e_Body_PUSH_shps_QueryResponse(struct zx_e_Body_s* x, struct zx_shps_QueryResponse_s* y);
void zx_e_Body_PUSH_Invoke(struct zx_e_Body_s* x, struct zx_elem_s* y);
void zx_e_Body_PUSH_InvokeResponse(struct zx_e_Body_s* x, struct zx_shps_InvokeResponse_s* y);
void zx_e_Body_PUSH_QueryRegistered(struct zx_e_Body_s* x, struct zx_shps_QueryRegistered_s* y);
void zx_e_Body_PUSH_QueryRegisteredResponse(struct zx_e_Body_s* x, struct zx_shps_QueryRegisteredResponse_s* y);
void zx_e_Body_PUSH_Register(struct zx_e_Body_s* x, struct zx_shps_Register_s* y);
void zx_e_Body_PUSH_RegisterResponse(struct zx_e_Body_s* x, struct zx_shps_RegisterResponse_s* y);
void zx_e_Body_PUSH_SetStatus(struct zx_e_Body_s* x, struct zx_shps_SetStatus_s* y);
void zx_e_Body_PUSH_SetStatusResponse(struct zx_e_Body_s* x, struct zx_shps_SetStatusResponse_s* y);
void zx_e_Body_PUSH_Update(struct zx_e_Body_s* x, struct zx_shps_Update_s* y);
void zx_e_Body_PUSH_UpdateResponse(struct zx_e_Body_s* x, struct zx_shps_UpdateResponse_s* y);
void zx_e_Body_PUSH_shps_Poll(struct zx_e_Body_s* x, struct zx_shps_Poll_s* y);
void zx_e_Body_PUSH_shps_PollResponse(struct zx_e_Body_s* x, struct zx_shps_PollResponse_s* y);
void zx_e_Body_PUSH_ProxyInvoke(struct zx_e_Body_s* x, struct zx_shps_ProxyInvoke_s* y);
void zx_e_Body_PUSH_ProxyInvokeResponse(struct zx_e_Body_s* x, struct zx_shps_ProxyInvokeResponse_s* y);
void zx_e_Body_PUSH_idhrxml_Create(struct zx_e_Body_s* x, struct zx_idhrxml_Create_s* y);
void zx_e_Body_PUSH_idhrxml_CreateResponse(struct zx_e_Body_s* x, struct zx_idhrxml_CreateResponse_s* y);
void zx_e_Body_PUSH_idhrxml_Query(struct zx_e_Body_s* x, struct zx_idhrxml_Query_s* y);
void zx_e_Body_PUSH_idhrxml_QueryResponse(struct zx_e_Body_s* x, struct zx_idhrxml_QueryResponse_s* y);
void zx_e_Body_PUSH_idhrxml_Modify(struct zx_e_Body_s* x, struct zx_idhrxml_Modify_s* y);
void zx_e_Body_PUSH_idhrxml_ModifyResponse(struct zx_e_Body_s* x, struct zx_idhrxml_ModifyResponse_s* y);
void zx_e_Body_PUSH_idhrxml_Delete(struct zx_e_Body_s* x, struct zx_idhrxml_Delete_s* y);
void zx_e_Body_PUSH_idhrxml_DeleteResponse(struct zx_e_Body_s* x, struct zx_idhrxml_DeleteResponse_s* y);
void zx_e_Body_PUSH_idhrxml_Notify(struct zx_e_Body_s* x, struct zx_idhrxml_Notify_s* y);
void zx_e_Body_PUSH_idhrxml_NotifyResponse(struct zx_e_Body_s* x, struct zx_idhrxml_NotifyResponse_s* y);


void zx_e_Body_PUT_ArtifactResolve(struct zx_e_Body_s* x, int n, struct zx_sp_ArtifactResolve_s* y);
void zx_e_Body_PUT_ArtifactResponse(struct zx_e_Body_s* x, int n, struct zx_sp_ArtifactResponse_s* y);
void zx_e_Body_PUT_ManageNameIDRequest(struct zx_e_Body_s* x, int n, struct zx_sp_ManageNameIDRequest_s* y);
void zx_e_Body_PUT_ManageNameIDResponse(struct zx_e_Body_s* x, int n, struct zx_sp_ManageNameIDResponse_s* y);
void zx_e_Body_PUT_LogoutRequest(struct zx_e_Body_s* x, int n, struct zx_sp_LogoutRequest_s* y);
void zx_e_Body_PUT_LogoutResponse(struct zx_e_Body_s* x, int n, struct zx_sp_LogoutResponse_s* y);
void zx_e_Body_PUT_NameIDMappingRequest(struct zx_e_Body_s* x, int n, struct zx_sp_NameIDMappingRequest_s* y);
void zx_e_Body_PUT_NameIDMappingResponse(struct zx_e_Body_s* x, int n, struct zx_sp_NameIDMappingResponse_s* y);
void zx_e_Body_PUT_AttributeQuery(struct zx_e_Body_s* x, int n, struct zx_sp_AttributeQuery_s* y);
void zx_e_Body_PUT_AuthnQuery(struct zx_e_Body_s* x, int n, struct zx_sp_AuthnQuery_s* y);
void zx_e_Body_PUT_AuthzDecisionQuery(struct zx_e_Body_s* x, int n, struct zx_sp_AuthzDecisionQuery_s* y);
void zx_e_Body_PUT_AssertionIDRequest(struct zx_e_Body_s* x, int n, struct zx_sp_AssertionIDRequest_s* y);
void zx_e_Body_PUT_Response(struct zx_e_Body_s* x, int n, struct zx_sp_Response_s* y);
void zx_e_Body_PUT_AuthnRequest(struct zx_e_Body_s* x, int n, struct zx_sp_AuthnRequest_s* y);
void zx_e_Body_PUT_Request(struct zx_e_Body_s* x, int n, struct zx_sp11_Request_s* y);
void zx_e_Body_PUT_sp11_Response(struct zx_e_Body_s* x, int n, struct zx_sp11_Response_s* y);
void zx_e_Body_PUT_RegisterNameIdentifierRequest(struct zx_e_Body_s* x, int n, struct zx_ff12_RegisterNameIdentifierRequest_s* y);
void zx_e_Body_PUT_RegisterNameIdentifierResponse(struct zx_e_Body_s* x, int n, struct zx_ff12_RegisterNameIdentifierResponse_s* y);
void zx_e_Body_PUT_FederationTerminationNotification(struct zx_e_Body_s* x, int n, struct zx_ff12_FederationTerminationNotification_s* y);
void zx_e_Body_PUT_ff12_LogoutRequest(struct zx_e_Body_s* x, int n, struct zx_ff12_LogoutRequest_s* y);
void zx_e_Body_PUT_ff12_LogoutResponse(struct zx_e_Body_s* x, int n, struct zx_ff12_LogoutResponse_s* y);
void zx_e_Body_PUT_NameIdentifierMappingRequest(struct zx_e_Body_s* x, int n, struct zx_ff12_NameIdentifierMappingRequest_s* y);
void zx_e_Body_PUT_NameIdentifierMappingResponse(struct zx_e_Body_s* x, int n, struct zx_ff12_NameIdentifierMappingResponse_s* y);
void zx_e_Body_PUT_XACMLAuthzDecisionQuery(struct zx_e_Body_s* x, int n, struct zx_xasp_XACMLAuthzDecisionQuery_s* y);
void zx_e_Body_PUT_XACMLPolicyQuery(struct zx_e_Body_s* x, int n, struct zx_xasp_XACMLPolicyQuery_s* y);
void zx_e_Body_PUT_Query(struct zx_e_Body_s* x, int n, struct zx_di_Query_s* y);
void zx_e_Body_PUT_QueryResponse(struct zx_e_Body_s* x, int n, struct zx_di_QueryResponse_s* y);
void zx_e_Body_PUT_di12_Query(struct zx_e_Body_s* x, int n, struct zx_di12_Query_s* y);
void zx_e_Body_PUT_di12_QueryResponse(struct zx_e_Body_s* x, int n, struct zx_di12_QueryResponse_s* y);
void zx_e_Body_PUT_Modify(struct zx_e_Body_s* x, int n, struct zx_di12_Modify_s* y);
void zx_e_Body_PUT_ModifyResponse(struct zx_e_Body_s* x, int n, struct zx_di12_ModifyResponse_s* y);
void zx_e_Body_PUT_Fault(struct zx_e_Body_s* x, int n, struct zx_e_Fault_s* y);
void zx_e_Body_PUT_SvcMDAssociationAdd(struct zx_e_Body_s* x, int n, struct zx_di_SvcMDAssociationAdd_s* y);
void zx_e_Body_PUT_SvcMDAssociationAddResponse(struct zx_e_Body_s* x, int n, struct zx_di_SvcMDAssociationAddResponse_s* y);
void zx_e_Body_PUT_SvcMDAssociationDelete(struct zx_e_Body_s* x, int n, struct zx_di_SvcMDAssociationDelete_s* y);
void zx_e_Body_PUT_SvcMDAssociationDeleteResponse(struct zx_e_Body_s* x, int n, struct zx_di_SvcMDAssociationDeleteResponse_s* y);
void zx_e_Body_PUT_SvcMDAssociationQuery(struct zx_e_Body_s* x, int n, struct zx_di_SvcMDAssociationQuery_s* y);
void zx_e_Body_PUT_SvcMDAssociationQueryResponse(struct zx_e_Body_s* x, int n, struct zx_di_SvcMDAssociationQueryResponse_s* y);
void zx_e_Body_PUT_SvcMDRegister(struct zx_e_Body_s* x, int n, struct zx_di_SvcMDRegister_s* y);
void zx_e_Body_PUT_SvcMDRegisterResponse(struct zx_e_Body_s* x, int n, struct zx_di_SvcMDRegisterResponse_s* y);
void zx_e_Body_PUT_SvcMDDelete(struct zx_e_Body_s* x, int n, struct zx_di_SvcMDDelete_s* y);
void zx_e_Body_PUT_SvcMDDeleteResponse(struct zx_e_Body_s* x, int n, struct zx_di_SvcMDDeleteResponse_s* y);
void zx_e_Body_PUT_SvcMDQuery(struct zx_e_Body_s* x, int n, struct zx_di_SvcMDQuery_s* y);
void zx_e_Body_PUT_SvcMDQueryResponse(struct zx_e_Body_s* x, int n, struct zx_di_SvcMDQueryResponse_s* y);
void zx_e_Body_PUT_SvcMDReplace(struct zx_e_Body_s* x, int n, struct zx_di_SvcMDReplace_s* y);
void zx_e_Body_PUT_SvcMDReplaceResponse(struct zx_e_Body_s* x, int n, struct zx_di_SvcMDReplaceResponse_s* y);
void zx_e_Body_PUT_Create(struct zx_e_Body_s* x, int n, struct zx_dap_Create_s* y);
void zx_e_Body_PUT_CreateResponse(struct zx_e_Body_s* x, int n, struct zx_dap_CreateResponse_s* y);
void zx_e_Body_PUT_dap_Query(struct zx_e_Body_s* x, int n, struct zx_dap_Query_s* y);
void zx_e_Body_PUT_dap_QueryResponse(struct zx_e_Body_s* x, int n, struct zx_dap_QueryResponse_s* y);
void zx_e_Body_PUT_dap_Modify(struct zx_e_Body_s* x, int n, struct zx_dap_Modify_s* y);
void zx_e_Body_PUT_dap_ModifyResponse(struct zx_e_Body_s* x, int n, struct zx_dap_ModifyResponse_s* y);
void zx_e_Body_PUT_Delete(struct zx_e_Body_s* x, int n, struct zx_dap_Delete_s* y);
void zx_e_Body_PUT_DeleteResponse(struct zx_e_Body_s* x, int n, struct zx_dap_DeleteResponse_s* y);
void zx_e_Body_PUT_Notify(struct zx_e_Body_s* x, int n, struct zx_dap_Notify_s* y);
void zx_e_Body_PUT_NotifyResponse(struct zx_e_Body_s* x, int n, struct zx_dap_NotifyResponse_s* y);
void zx_e_Body_PUT_AddEntityRequest(struct zx_e_Body_s* x, int n, struct zx_ps_AddEntityRequest_s* y);
void zx_e_Body_PUT_AddEntityResponse(struct zx_e_Body_s* x, int n, struct zx_ps_AddEntityResponse_s* y);
void zx_e_Body_PUT_AddKnownEntityRequest(struct zx_e_Body_s* x, int n, struct zx_ps_AddKnownEntityRequest_s* y);
void zx_e_Body_PUT_AddKnownEntityResponse(struct zx_e_Body_s* x, int n, struct zx_ps_AddKnownEntityResponse_s* y);
void zx_e_Body_PUT_AddCollectionRequest(struct zx_e_Body_s* x, int n, struct zx_ps_AddCollectionRequest_s* y);
void zx_e_Body_PUT_AddCollectionResponse(struct zx_e_Body_s* x, int n, struct zx_ps_AddCollectionResponse_s* y);
void zx_e_Body_PUT_AddToCollectionRequest(struct zx_e_Body_s* x, int n, struct zx_ps_AddToCollectionRequest_s* y);
void zx_e_Body_PUT_AddToCollectionResponse(struct zx_e_Body_s* x, int n, struct zx_ps_AddToCollectionResponse_s* y);
void zx_e_Body_PUT_RemoveEntityRequest(struct zx_e_Body_s* x, int n, struct zx_ps_RemoveEntityRequest_s* y);
void zx_e_Body_PUT_RemoveEntityResponse(struct zx_e_Body_s* x, int n, struct zx_ps_RemoveEntityResponse_s* y);
void zx_e_Body_PUT_RemoveCollectionRequest(struct zx_e_Body_s* x, int n, struct zx_ps_RemoveCollectionRequest_s* y);
void zx_e_Body_PUT_RemoveCollectionResponse(struct zx_e_Body_s* x, int n, struct zx_ps_RemoveCollectionResponse_s* y);
void zx_e_Body_PUT_RemoveFromCollectionRequest(struct zx_e_Body_s* x, int n, struct zx_ps_RemoveFromCollectionRequest_s* y);
void zx_e_Body_PUT_RemoveFromCollectionResponse(struct zx_e_Body_s* x, int n, struct zx_ps_RemoveFromCollectionResponse_s* y);
void zx_e_Body_PUT_ListMembersRequest(struct zx_e_Body_s* x, int n, struct zx_ps_ListMembersRequest_s* y);
void zx_e_Body_PUT_ListMembersResponse(struct zx_e_Body_s* x, int n, struct zx_ps_ListMembersResponse_s* y);
void zx_e_Body_PUT_QueryObjectsRequest(struct zx_e_Body_s* x, int n, struct zx_ps_QueryObjectsRequest_s* y);
void zx_e_Body_PUT_QueryObjectsResponse(struct zx_e_Body_s* x, int n, struct zx_ps_QueryObjectsResponse_s* y);
void zx_e_Body_PUT_GetObjectInfoRequest(struct zx_e_Body_s* x, int n, struct zx_ps_GetObjectInfoRequest_s* y);
void zx_e_Body_PUT_GetObjectInfoResponse(struct zx_e_Body_s* x, int n, struct zx_ps_GetObjectInfoResponse_s* y);
void zx_e_Body_PUT_SetObjectInfoRequest(struct zx_e_Body_s* x, int n, struct zx_ps_SetObjectInfoRequest_s* y);
void zx_e_Body_PUT_SetObjectInfoResponse(struct zx_e_Body_s* x, int n, struct zx_ps_SetObjectInfoResponse_s* y);
void zx_e_Body_PUT_TestMembershipRequest(struct zx_e_Body_s* x, int n, struct zx_ps_TestMembershipRequest_s* y);
void zx_e_Body_PUT_TestMembershipResponse(struct zx_e_Body_s* x, int n, struct zx_ps_TestMembershipResponse_s* y);
void zx_e_Body_PUT_ResolveIdentifierRequest(struct zx_e_Body_s* x, int n, struct zx_ps_ResolveIdentifierRequest_s* y);
void zx_e_Body_PUT_ResolveIdentifierResponse(struct zx_e_Body_s* x, int n, struct zx_ps_ResolveIdentifierResponse_s* y);
void zx_e_Body_PUT_ps_Notify(struct zx_e_Body_s* x, int n, struct zx_ps_Notify_s* y);
void zx_e_Body_PUT_ps_NotifyResponse(struct zx_e_Body_s* x, int n, struct zx_ps_NotifyResponse_s* y);
void zx_e_Body_PUT_IdentityMappingRequest(struct zx_e_Body_s* x, int n, struct zx_im_IdentityMappingRequest_s* y);
void zx_e_Body_PUT_IdentityMappingResponse(struct zx_e_Body_s* x, int n, struct zx_im_IdentityMappingResponse_s* y);
void zx_e_Body_PUT_SASLRequest(struct zx_e_Body_s* x, int n, struct zx_as_SASLRequest_s* y);
void zx_e_Body_PUT_SASLResponse(struct zx_e_Body_s* x, int n, struct zx_as_SASLResponse_s* y);
void zx_e_Body_PUT_SubmitReq(struct zx_e_Body_s* x, int n, struct zx_mm7_SubmitReq_s* y);
void zx_e_Body_PUT_SubmitRsp(struct zx_e_Body_s* x, int n, struct zx_mm7_SubmitRsp_s* y);
void zx_e_Body_PUT_DeliverReq(struct zx_e_Body_s* x, int n, struct zx_mm7_DeliverReq_s* y);
void zx_e_Body_PUT_DeliverRsp(struct zx_e_Body_s* x, int n, struct zx_mm7_DeliverRsp_s* y);
void zx_e_Body_PUT_CancelReq(struct zx_e_Body_s* x, int n, struct zx_mm7_CancelReq_s* y);
void zx_e_Body_PUT_CancelRsp(struct zx_e_Body_s* x, int n, struct zx_mm7_CancelRsp_s* y);
void zx_e_Body_PUT_ReplaceReq(struct zx_e_Body_s* x, int n, struct zx_mm7_ReplaceReq_s* y);
void zx_e_Body_PUT_ReplaceRsp(struct zx_e_Body_s* x, int n, struct zx_mm7_ReplaceRsp_s* y);
void zx_e_Body_PUT_extendedCancelReq(struct zx_e_Body_s* x, int n, struct zx_mm7_extendedCancelReq_s* y);
void zx_e_Body_PUT_extendedCancelRsp(struct zx_e_Body_s* x, int n, struct zx_mm7_extendedCancelRsp_s* y);
void zx_e_Body_PUT_extendedReplaceReq(struct zx_e_Body_s* x, int n, struct zx_mm7_extendedReplaceReq_s* y);
void zx_e_Body_PUT_extendedReplaceRsp(struct zx_e_Body_s* x, int n, struct zx_mm7_extendedReplaceRsp_s* y);
void zx_e_Body_PUT_DeliveryReportReq(struct zx_e_Body_s* x, int n, struct zx_mm7_DeliveryReportReq_s* y);
void zx_e_Body_PUT_DeliveryReportRsp(struct zx_e_Body_s* x, int n, struct zx_mm7_DeliveryReportRsp_s* y);
void zx_e_Body_PUT_ReadReplyReq(struct zx_e_Body_s* x, int n, struct zx_mm7_ReadReplyReq_s* y);
void zx_e_Body_PUT_ReadReplyRsp(struct zx_e_Body_s* x, int n, struct zx_mm7_ReadReplyRsp_s* y);
void zx_e_Body_PUT_RSErrorRsp(struct zx_e_Body_s* x, int n, struct zx_mm7_RSErrorRsp_s* y);
void zx_e_Body_PUT_VASPErrorRsp(struct zx_e_Body_s* x, int n, struct zx_mm7_VASPErrorRsp_s* y);
void zx_e_Body_PUT_QueryStatusReq(struct zx_e_Body_s* x, int n, struct zx_mm7_QueryStatusReq_s* y);
void zx_e_Body_PUT_QueryStatusRsp(struct zx_e_Body_s* x, int n, struct zx_mm7_QueryStatusRsp_s* y);
void zx_e_Body_PUT_cb_Query(struct zx_e_Body_s* x, int n, struct zx_cb_Query_s* y);
void zx_e_Body_PUT_cb_QueryResponse(struct zx_e_Body_s* x, int n, struct zx_cb_QueryResponse_s* y);
void zx_e_Body_PUT_cb_Create(struct zx_e_Body_s* x, int n, struct zx_cb_Create_s* y);
void zx_e_Body_PUT_cb_CreateResponse(struct zx_e_Body_s* x, int n, struct zx_cb_CreateResponse_s* y);
void zx_e_Body_PUT_cb_Delete(struct zx_e_Body_s* x, int n, struct zx_cb_Delete_s* y);
void zx_e_Body_PUT_cb_DeleteResponse(struct zx_e_Body_s* x, int n, struct zx_cb_DeleteResponse_s* y);
void zx_e_Body_PUT_cb_Modify(struct zx_e_Body_s* x, int n, struct zx_cb_Modify_s* y);
void zx_e_Body_PUT_cb_ModifyResponse(struct zx_e_Body_s* x, int n, struct zx_cb_ModifyResponse_s* y);
void zx_e_Body_PUT_cb_Notify(struct zx_e_Body_s* x, int n, struct zx_cb_Notify_s* y);
void zx_e_Body_PUT_cb_NotifyResponse(struct zx_e_Body_s* x, int n, struct zx_cb_NotifyResponse_s* y);
void zx_e_Body_PUT_ReportUsage(struct zx_e_Body_s* x, int n, struct zx_cb_ReportUsage_s* y);
void zx_e_Body_PUT_ReportUsageResponse(struct zx_e_Body_s* x, int n, struct zx_cb_ReportUsageResponse_s* y);
void zx_e_Body_PUT_gl_Query(struct zx_e_Body_s* x, int n, struct zx_gl_Query_s* y);
void zx_e_Body_PUT_gl_QueryResponse(struct zx_e_Body_s* x, int n, struct zx_gl_QueryResponse_s* y);
void zx_e_Body_PUT_gl_Create(struct zx_e_Body_s* x, int n, struct zx_gl_Create_s* y);
void zx_e_Body_PUT_gl_CreateResponse(struct zx_e_Body_s* x, int n, struct zx_gl_CreateResponse_s* y);
void zx_e_Body_PUT_gl_Delete(struct zx_e_Body_s* x, int n, struct zx_gl_Delete_s* y);
void zx_e_Body_PUT_gl_DeleteResponse(struct zx_e_Body_s* x, int n, struct zx_gl_DeleteResponse_s* y);
void zx_e_Body_PUT_gl_Modify(struct zx_e_Body_s* x, int n, struct zx_gl_Modify_s* y);
void zx_e_Body_PUT_gl_ModifyResponse(struct zx_e_Body_s* x, int n, struct zx_gl_ModifyResponse_s* y);
void zx_e_Body_PUT_gl_Notify(struct zx_e_Body_s* x, int n, struct zx_gl_Notify_s* y);
void zx_e_Body_PUT_gl_NotifyResponse(struct zx_e_Body_s* x, int n, struct zx_gl_NotifyResponse_s* y);
void zx_e_Body_PUT_StoreObjectRequest(struct zx_e_Body_s* x, int n, struct zx_demomed_StoreObjectRequest_s* y);
void zx_e_Body_PUT_StoreObjectResponse(struct zx_e_Body_s* x, int n, struct zx_demomed_StoreObjectResponse_s* y);
void zx_e_Body_PUT_GetObjectListRequest(struct zx_e_Body_s* x, int n, struct zx_demomed_GetObjectListRequest_s* y);
void zx_e_Body_PUT_GetObjectListResponse(struct zx_e_Body_s* x, int n, struct zx_demomed_GetObjectListResponse_s* y);
void zx_e_Body_PUT_GetObjectRequest(struct zx_e_Body_s* x, int n, struct zx_demomed_GetObjectRequest_s* y);
void zx_e_Body_PUT_GetObjectResponse(struct zx_e_Body_s* x, int n, struct zx_demomed_GetObjectResponse_s* y);
void zx_e_Body_PUT_DeleteObjectRequest(struct zx_e_Body_s* x, int n, struct zx_demomed_DeleteObjectRequest_s* y);
void zx_e_Body_PUT_DeleteObjectResponse(struct zx_e_Body_s* x, int n, struct zx_demomed_DeleteObjectResponse_s* y);
void zx_e_Body_PUT_Provision(struct zx_e_Body_s* x, int n, struct zx_pmm_Provision_s* y);
void zx_e_Body_PUT_ProvisionResponse(struct zx_e_Body_s* x, int n, struct zx_pmm_ProvisionResponse_s* y);
void zx_e_Body_PUT_PMActivate(struct zx_e_Body_s* x, int n, struct zx_pmm_PMActivate_s* y);
void zx_e_Body_PUT_PMActivateResponse(struct zx_e_Body_s* x, int n, struct zx_pmm_PMActivateResponse_s* y);
void zx_e_Body_PUT_PMDeactivate(struct zx_e_Body_s* x, int n, struct zx_pmm_PMDeactivate_s* y);
void zx_e_Body_PUT_PMDeactivateResponse(struct zx_e_Body_s* x, int n, struct zx_pmm_PMDeactivateResponse_s* y);
void zx_e_Body_PUT_PMDelete(struct zx_e_Body_s* x, int n, struct zx_pmm_PMDelete_s* y);
void zx_e_Body_PUT_PMDeleteResponse(struct zx_e_Body_s* x, int n, struct zx_pmm_PMDeleteResponse_s* y);
void zx_e_Body_PUT_PMUpdate(struct zx_e_Body_s* x, int n, struct zx_pmm_PMUpdate_s* y);
void zx_e_Body_PUT_PMUpdateResponse(struct zx_e_Body_s* x, int n, struct zx_pmm_PMUpdateResponse_s* y);
void zx_e_Body_PUT_PMGetStatus(struct zx_e_Body_s* x, int n, struct zx_pmm_PMGetStatus_s* y);
void zx_e_Body_PUT_PMGetStatusResponse(struct zx_e_Body_s* x, int n, struct zx_pmm_PMGetStatusResponse_s* y);
void zx_e_Body_PUT_PMSetStatus(struct zx_e_Body_s* x, int n, struct zx_pmm_PMSetStatus_s* y);
void zx_e_Body_PUT_PMSetStatusResponse(struct zx_e_Body_s* x, int n, struct zx_pmm_PMSetStatusResponse_s* y);
void zx_e_Body_PUT_PMERegister(struct zx_e_Body_s* x, int n, struct zx_prov_PMERegister_s* y);
void zx_e_Body_PUT_PMERegisterResponse(struct zx_e_Body_s* x, int n, struct zx_prov_PMERegisterResponse_s* y);
void zx_e_Body_PUT_PMEUpload(struct zx_e_Body_s* x, int n, struct zx_prov_PMEUpload_s* y);
void zx_e_Body_PUT_PMEUploadResponse(struct zx_e_Body_s* x, int n, struct zx_prov_PMEUploadResponse_s* y);
void zx_e_Body_PUT_PMEDownload(struct zx_e_Body_s* x, int n, struct zx_prov_PMEDownload_s* y);
void zx_e_Body_PUT_PMEDownloadResponse(struct zx_e_Body_s* x, int n, struct zx_prov_PMEDownloadResponse_s* y);
void zx_e_Body_PUT_PMEEnable(struct zx_e_Body_s* x, int n, struct zx_prov_PMEEnable_s* y);
void zx_e_Body_PUT_PMEEnableResponse(struct zx_e_Body_s* x, int n, struct zx_prov_PMEEnableResponse_s* y);
void zx_e_Body_PUT_PMEDisable(struct zx_e_Body_s* x, int n, struct zx_prov_PMEDisable_s* y);
void zx_e_Body_PUT_PMEDisableResponse(struct zx_e_Body_s* x, int n, struct zx_prov_PMEDisableResponse_s* y);
void zx_e_Body_PUT_PMEDelete(struct zx_e_Body_s* x, int n, struct zx_prov_PMEDelete_s* y);
void zx_e_Body_PUT_PMEDeleteResponse(struct zx_e_Body_s* x, int n, struct zx_prov_PMEDeleteResponse_s* y);
void zx_e_Body_PUT_PMEGetInfo(struct zx_e_Body_s* x, int n, struct zx_prov_PMEGetInfo_s* y);
void zx_e_Body_PUT_PMEGetInfoResponse(struct zx_e_Body_s* x, int n, struct zx_prov_PMEGetInfoResponse_s* y);
void zx_e_Body_PUT_prov_PMGetStatus(struct zx_e_Body_s* x, int n, struct zx_prov_PMGetStatus_s* y);
void zx_e_Body_PUT_prov_PMGetStatusResponse(struct zx_e_Body_s* x, int n, struct zx_prov_PMGetStatusResponse_s* y);
void zx_e_Body_PUT_prov_PMSetStatus(struct zx_e_Body_s* x, int n, struct zx_prov_PMSetStatus_s* y);
void zx_e_Body_PUT_prov_PMSetStatusResponse(struct zx_e_Body_s* x, int n, struct zx_prov_PMSetStatusResponse_s* y);
void zx_e_Body_PUT_PMGetDescriptor(struct zx_e_Body_s* x, int n, struct zx_prov_PMGetDescriptor_s* y);
void zx_e_Body_PUT_PMGetDescriptorResponse(struct zx_e_Body_s* x, int n, struct zx_prov_PMGetDescriptorResponse_s* y);
void zx_e_Body_PUT_prov_PMActivate(struct zx_e_Body_s* x, int n, struct zx_prov_PMActivate_s* y);
void zx_e_Body_PUT_prov_PMActivateResponse(struct zx_e_Body_s* x, int n, struct zx_prov_PMActivateResponse_s* y);
void zx_e_Body_PUT_prov_PMDeactivate(struct zx_e_Body_s* x, int n, struct zx_prov_PMDeactivate_s* y);
void zx_e_Body_PUT_prov_PMDeactivateResponse(struct zx_e_Body_s* x, int n, struct zx_prov_PMDeactivateResponse_s* y);
void zx_e_Body_PUT_PMRegisterDescriptor(struct zx_e_Body_s* x, int n, struct zx_prov_PMRegisterDescriptor_s* y);
void zx_e_Body_PUT_PMRegisterDescriptorResponse(struct zx_e_Body_s* x, int n, struct zx_prov_PMRegisterDescriptorResponse_s* y);
void zx_e_Body_PUT_prov_PMUpdate(struct zx_e_Body_s* x, int n, struct zx_prov_PMUpdate_s* y);
void zx_e_Body_PUT_prov_PMUpdateResponse(struct zx_e_Body_s* x, int n, struct zx_prov_PMUpdateResponse_s* y);
void zx_e_Body_PUT_prov_PMDelete(struct zx_e_Body_s* x, int n, struct zx_prov_PMDelete_s* y);
void zx_e_Body_PUT_prov_PMDeleteResponse(struct zx_e_Body_s* x, int n, struct zx_prov_PMDeleteResponse_s* y);
void zx_e_Body_PUT_Poll(struct zx_e_Body_s* x, int n, struct zx_prov_Poll_s* y);
void zx_e_Body_PUT_PollResponse(struct zx_e_Body_s* x, int n, struct zx_prov_PollResponse_s* y);
void zx_e_Body_PUT_UpdateEPR(struct zx_e_Body_s* x, int n, struct zx_prov_UpdateEPR_s* y);
void zx_e_Body_PUT_UpdateEPRResponse(struct zx_e_Body_s* x, int n, struct zx_prov_UpdateEPRResponse_s* y);
void zx_e_Body_PUT_GetAssertion(struct zx_e_Body_s* x, int n, struct zx_idp_GetAssertion_s* y);
void zx_e_Body_PUT_GetAssertionResponse(struct zx_e_Body_s* x, int n, struct zx_idp_GetAssertionResponse_s* y);
void zx_e_Body_PUT_GetProviderInfo(struct zx_e_Body_s* x, int n, struct zx_idp_GetProviderInfo_s* y);
void zx_e_Body_PUT_GetProviderInfoResponse(struct zx_e_Body_s* x, int n, struct zx_idp_GetProviderInfoResponse_s* y);
void zx_e_Body_PUT_CreatedStatus(struct zx_e_Body_s* x, int n, struct zx_idp_CreatedStatus_s* y);
void zx_e_Body_PUT_CreatedStatusResponse(struct zx_e_Body_s* x, int n, struct zx_idp_CreatedStatusResponse_s* y);
void zx_e_Body_PUT_shps_Delete(struct zx_e_Body_s* x, int n, struct zx_shps_Delete_s* y);
void zx_e_Body_PUT_shps_DeleteResponse(struct zx_e_Body_s* x, int n, struct zx_shps_DeleteResponse_s* y);
void zx_e_Body_PUT_GetStatus(struct zx_e_Body_s* x, int n, struct zx_shps_GetStatus_s* y);
void zx_e_Body_PUT_GetStatusResponse(struct zx_e_Body_s* x, int n, struct zx_shps_GetStatusResponse_s* y);
void zx_e_Body_PUT_shps_Query(struct zx_e_Body_s* x, int n, struct zx_shps_Query_s* y);
void zx_e_Body_PUT_shps_QueryResponse(struct zx_e_Body_s* x, int n, struct zx_shps_QueryResponse_s* y);
void zx_e_Body_PUT_Invoke(struct zx_e_Body_s* x, int n, struct zx_elem_s* y);
void zx_e_Body_PUT_InvokeResponse(struct zx_e_Body_s* x, int n, struct zx_shps_InvokeResponse_s* y);
void zx_e_Body_PUT_QueryRegistered(struct zx_e_Body_s* x, int n, struct zx_shps_QueryRegistered_s* y);
void zx_e_Body_PUT_QueryRegisteredResponse(struct zx_e_Body_s* x, int n, struct zx_shps_QueryRegisteredResponse_s* y);
void zx_e_Body_PUT_Register(struct zx_e_Body_s* x, int n, struct zx_shps_Register_s* y);
void zx_e_Body_PUT_RegisterResponse(struct zx_e_Body_s* x, int n, struct zx_shps_RegisterResponse_s* y);
void zx_e_Body_PUT_SetStatus(struct zx_e_Body_s* x, int n, struct zx_shps_SetStatus_s* y);
void zx_e_Body_PUT_SetStatusResponse(struct zx_e_Body_s* x, int n, struct zx_shps_SetStatusResponse_s* y);
void zx_e_Body_PUT_Update(struct zx_e_Body_s* x, int n, struct zx_shps_Update_s* y);
void zx_e_Body_PUT_UpdateResponse(struct zx_e_Body_s* x, int n, struct zx_shps_UpdateResponse_s* y);
void zx_e_Body_PUT_shps_Poll(struct zx_e_Body_s* x, int n, struct zx_shps_Poll_s* y);
void zx_e_Body_PUT_shps_PollResponse(struct zx_e_Body_s* x, int n, struct zx_shps_PollResponse_s* y);
void zx_e_Body_PUT_ProxyInvoke(struct zx_e_Body_s* x, int n, struct zx_shps_ProxyInvoke_s* y);
void zx_e_Body_PUT_ProxyInvokeResponse(struct zx_e_Body_s* x, int n, struct zx_shps_ProxyInvokeResponse_s* y);
void zx_e_Body_PUT_idhrxml_Create(struct zx_e_Body_s* x, int n, struct zx_idhrxml_Create_s* y);
void zx_e_Body_PUT_idhrxml_CreateResponse(struct zx_e_Body_s* x, int n, struct zx_idhrxml_CreateResponse_s* y);
void zx_e_Body_PUT_idhrxml_Query(struct zx_e_Body_s* x, int n, struct zx_idhrxml_Query_s* y);
void zx_e_Body_PUT_idhrxml_QueryResponse(struct zx_e_Body_s* x, int n, struct zx_idhrxml_QueryResponse_s* y);
void zx_e_Body_PUT_idhrxml_Modify(struct zx_e_Body_s* x, int n, struct zx_idhrxml_Modify_s* y);
void zx_e_Body_PUT_idhrxml_ModifyResponse(struct zx_e_Body_s* x, int n, struct zx_idhrxml_ModifyResponse_s* y);
void zx_e_Body_PUT_idhrxml_Delete(struct zx_e_Body_s* x, int n, struct zx_idhrxml_Delete_s* y);
void zx_e_Body_PUT_idhrxml_DeleteResponse(struct zx_e_Body_s* x, int n, struct zx_idhrxml_DeleteResponse_s* y);
void zx_e_Body_PUT_idhrxml_Notify(struct zx_e_Body_s* x, int n, struct zx_idhrxml_Notify_s* y);
void zx_e_Body_PUT_idhrxml_NotifyResponse(struct zx_e_Body_s* x, int n, struct zx_idhrxml_NotifyResponse_s* y);

void zx_e_Body_ADD_ArtifactResolve(struct zx_e_Body_s* x, int n, struct zx_sp_ArtifactResolve_s* z);
void zx_e_Body_ADD_ArtifactResponse(struct zx_e_Body_s* x, int n, struct zx_sp_ArtifactResponse_s* z);
void zx_e_Body_ADD_ManageNameIDRequest(struct zx_e_Body_s* x, int n, struct zx_sp_ManageNameIDRequest_s* z);
void zx_e_Body_ADD_ManageNameIDResponse(struct zx_e_Body_s* x, int n, struct zx_sp_ManageNameIDResponse_s* z);
void zx_e_Body_ADD_LogoutRequest(struct zx_e_Body_s* x, int n, struct zx_sp_LogoutRequest_s* z);
void zx_e_Body_ADD_LogoutResponse(struct zx_e_Body_s* x, int n, struct zx_sp_LogoutResponse_s* z);
void zx_e_Body_ADD_NameIDMappingRequest(struct zx_e_Body_s* x, int n, struct zx_sp_NameIDMappingRequest_s* z);
void zx_e_Body_ADD_NameIDMappingResponse(struct zx_e_Body_s* x, int n, struct zx_sp_NameIDMappingResponse_s* z);
void zx_e_Body_ADD_AttributeQuery(struct zx_e_Body_s* x, int n, struct zx_sp_AttributeQuery_s* z);
void zx_e_Body_ADD_AuthnQuery(struct zx_e_Body_s* x, int n, struct zx_sp_AuthnQuery_s* z);
void zx_e_Body_ADD_AuthzDecisionQuery(struct zx_e_Body_s* x, int n, struct zx_sp_AuthzDecisionQuery_s* z);
void zx_e_Body_ADD_AssertionIDRequest(struct zx_e_Body_s* x, int n, struct zx_sp_AssertionIDRequest_s* z);
void zx_e_Body_ADD_Response(struct zx_e_Body_s* x, int n, struct zx_sp_Response_s* z);
void zx_e_Body_ADD_AuthnRequest(struct zx_e_Body_s* x, int n, struct zx_sp_AuthnRequest_s* z);
void zx_e_Body_ADD_Request(struct zx_e_Body_s* x, int n, struct zx_sp11_Request_s* z);
void zx_e_Body_ADD_sp11_Response(struct zx_e_Body_s* x, int n, struct zx_sp11_Response_s* z);
void zx_e_Body_ADD_RegisterNameIdentifierRequest(struct zx_e_Body_s* x, int n, struct zx_ff12_RegisterNameIdentifierRequest_s* z);
void zx_e_Body_ADD_RegisterNameIdentifierResponse(struct zx_e_Body_s* x, int n, struct zx_ff12_RegisterNameIdentifierResponse_s* z);
void zx_e_Body_ADD_FederationTerminationNotification(struct zx_e_Body_s* x, int n, struct zx_ff12_FederationTerminationNotification_s* z);
void zx_e_Body_ADD_ff12_LogoutRequest(struct zx_e_Body_s* x, int n, struct zx_ff12_LogoutRequest_s* z);
void zx_e_Body_ADD_ff12_LogoutResponse(struct zx_e_Body_s* x, int n, struct zx_ff12_LogoutResponse_s* z);
void zx_e_Body_ADD_NameIdentifierMappingRequest(struct zx_e_Body_s* x, int n, struct zx_ff12_NameIdentifierMappingRequest_s* z);
void zx_e_Body_ADD_NameIdentifierMappingResponse(struct zx_e_Body_s* x, int n, struct zx_ff12_NameIdentifierMappingResponse_s* z);
void zx_e_Body_ADD_XACMLAuthzDecisionQuery(struct zx_e_Body_s* x, int n, struct zx_xasp_XACMLAuthzDecisionQuery_s* z);
void zx_e_Body_ADD_XACMLPolicyQuery(struct zx_e_Body_s* x, int n, struct zx_xasp_XACMLPolicyQuery_s* z);
void zx_e_Body_ADD_Query(struct zx_e_Body_s* x, int n, struct zx_di_Query_s* z);
void zx_e_Body_ADD_QueryResponse(struct zx_e_Body_s* x, int n, struct zx_di_QueryResponse_s* z);
void zx_e_Body_ADD_di12_Query(struct zx_e_Body_s* x, int n, struct zx_di12_Query_s* z);
void zx_e_Body_ADD_di12_QueryResponse(struct zx_e_Body_s* x, int n, struct zx_di12_QueryResponse_s* z);
void zx_e_Body_ADD_Modify(struct zx_e_Body_s* x, int n, struct zx_di12_Modify_s* z);
void zx_e_Body_ADD_ModifyResponse(struct zx_e_Body_s* x, int n, struct zx_di12_ModifyResponse_s* z);
void zx_e_Body_ADD_Fault(struct zx_e_Body_s* x, int n, struct zx_e_Fault_s* z);
void zx_e_Body_ADD_SvcMDAssociationAdd(struct zx_e_Body_s* x, int n, struct zx_di_SvcMDAssociationAdd_s* z);
void zx_e_Body_ADD_SvcMDAssociationAddResponse(struct zx_e_Body_s* x, int n, struct zx_di_SvcMDAssociationAddResponse_s* z);
void zx_e_Body_ADD_SvcMDAssociationDelete(struct zx_e_Body_s* x, int n, struct zx_di_SvcMDAssociationDelete_s* z);
void zx_e_Body_ADD_SvcMDAssociationDeleteResponse(struct zx_e_Body_s* x, int n, struct zx_di_SvcMDAssociationDeleteResponse_s* z);
void zx_e_Body_ADD_SvcMDAssociationQuery(struct zx_e_Body_s* x, int n, struct zx_di_SvcMDAssociationQuery_s* z);
void zx_e_Body_ADD_SvcMDAssociationQueryResponse(struct zx_e_Body_s* x, int n, struct zx_di_SvcMDAssociationQueryResponse_s* z);
void zx_e_Body_ADD_SvcMDRegister(struct zx_e_Body_s* x, int n, struct zx_di_SvcMDRegister_s* z);
void zx_e_Body_ADD_SvcMDRegisterResponse(struct zx_e_Body_s* x, int n, struct zx_di_SvcMDRegisterResponse_s* z);
void zx_e_Body_ADD_SvcMDDelete(struct zx_e_Body_s* x, int n, struct zx_di_SvcMDDelete_s* z);
void zx_e_Body_ADD_SvcMDDeleteResponse(struct zx_e_Body_s* x, int n, struct zx_di_SvcMDDeleteResponse_s* z);
void zx_e_Body_ADD_SvcMDQuery(struct zx_e_Body_s* x, int n, struct zx_di_SvcMDQuery_s* z);
void zx_e_Body_ADD_SvcMDQueryResponse(struct zx_e_Body_s* x, int n, struct zx_di_SvcMDQueryResponse_s* z);
void zx_e_Body_ADD_SvcMDReplace(struct zx_e_Body_s* x, int n, struct zx_di_SvcMDReplace_s* z);
void zx_e_Body_ADD_SvcMDReplaceResponse(struct zx_e_Body_s* x, int n, struct zx_di_SvcMDReplaceResponse_s* z);
void zx_e_Body_ADD_Create(struct zx_e_Body_s* x, int n, struct zx_dap_Create_s* z);
void zx_e_Body_ADD_CreateResponse(struct zx_e_Body_s* x, int n, struct zx_dap_CreateResponse_s* z);
void zx_e_Body_ADD_dap_Query(struct zx_e_Body_s* x, int n, struct zx_dap_Query_s* z);
void zx_e_Body_ADD_dap_QueryResponse(struct zx_e_Body_s* x, int n, struct zx_dap_QueryResponse_s* z);
void zx_e_Body_ADD_dap_Modify(struct zx_e_Body_s* x, int n, struct zx_dap_Modify_s* z);
void zx_e_Body_ADD_dap_ModifyResponse(struct zx_e_Body_s* x, int n, struct zx_dap_ModifyResponse_s* z);
void zx_e_Body_ADD_Delete(struct zx_e_Body_s* x, int n, struct zx_dap_Delete_s* z);
void zx_e_Body_ADD_DeleteResponse(struct zx_e_Body_s* x, int n, struct zx_dap_DeleteResponse_s* z);
void zx_e_Body_ADD_Notify(struct zx_e_Body_s* x, int n, struct zx_dap_Notify_s* z);
void zx_e_Body_ADD_NotifyResponse(struct zx_e_Body_s* x, int n, struct zx_dap_NotifyResponse_s* z);
void zx_e_Body_ADD_AddEntityRequest(struct zx_e_Body_s* x, int n, struct zx_ps_AddEntityRequest_s* z);
void zx_e_Body_ADD_AddEntityResponse(struct zx_e_Body_s* x, int n, struct zx_ps_AddEntityResponse_s* z);
void zx_e_Body_ADD_AddKnownEntityRequest(struct zx_e_Body_s* x, int n, struct zx_ps_AddKnownEntityRequest_s* z);
void zx_e_Body_ADD_AddKnownEntityResponse(struct zx_e_Body_s* x, int n, struct zx_ps_AddKnownEntityResponse_s* z);
void zx_e_Body_ADD_AddCollectionRequest(struct zx_e_Body_s* x, int n, struct zx_ps_AddCollectionRequest_s* z);
void zx_e_Body_ADD_AddCollectionResponse(struct zx_e_Body_s* x, int n, struct zx_ps_AddCollectionResponse_s* z);
void zx_e_Body_ADD_AddToCollectionRequest(struct zx_e_Body_s* x, int n, struct zx_ps_AddToCollectionRequest_s* z);
void zx_e_Body_ADD_AddToCollectionResponse(struct zx_e_Body_s* x, int n, struct zx_ps_AddToCollectionResponse_s* z);
void zx_e_Body_ADD_RemoveEntityRequest(struct zx_e_Body_s* x, int n, struct zx_ps_RemoveEntityRequest_s* z);
void zx_e_Body_ADD_RemoveEntityResponse(struct zx_e_Body_s* x, int n, struct zx_ps_RemoveEntityResponse_s* z);
void zx_e_Body_ADD_RemoveCollectionRequest(struct zx_e_Body_s* x, int n, struct zx_ps_RemoveCollectionRequest_s* z);
void zx_e_Body_ADD_RemoveCollectionResponse(struct zx_e_Body_s* x, int n, struct zx_ps_RemoveCollectionResponse_s* z);
void zx_e_Body_ADD_RemoveFromCollectionRequest(struct zx_e_Body_s* x, int n, struct zx_ps_RemoveFromCollectionRequest_s* z);
void zx_e_Body_ADD_RemoveFromCollectionResponse(struct zx_e_Body_s* x, int n, struct zx_ps_RemoveFromCollectionResponse_s* z);
void zx_e_Body_ADD_ListMembersRequest(struct zx_e_Body_s* x, int n, struct zx_ps_ListMembersRequest_s* z);
void zx_e_Body_ADD_ListMembersResponse(struct zx_e_Body_s* x, int n, struct zx_ps_ListMembersResponse_s* z);
void zx_e_Body_ADD_QueryObjectsRequest(struct zx_e_Body_s* x, int n, struct zx_ps_QueryObjectsRequest_s* z);
void zx_e_Body_ADD_QueryObjectsResponse(struct zx_e_Body_s* x, int n, struct zx_ps_QueryObjectsResponse_s* z);
void zx_e_Body_ADD_GetObjectInfoRequest(struct zx_e_Body_s* x, int n, struct zx_ps_GetObjectInfoRequest_s* z);
void zx_e_Body_ADD_GetObjectInfoResponse(struct zx_e_Body_s* x, int n, struct zx_ps_GetObjectInfoResponse_s* z);
void zx_e_Body_ADD_SetObjectInfoRequest(struct zx_e_Body_s* x, int n, struct zx_ps_SetObjectInfoRequest_s* z);
void zx_e_Body_ADD_SetObjectInfoResponse(struct zx_e_Body_s* x, int n, struct zx_ps_SetObjectInfoResponse_s* z);
void zx_e_Body_ADD_TestMembershipRequest(struct zx_e_Body_s* x, int n, struct zx_ps_TestMembershipRequest_s* z);
void zx_e_Body_ADD_TestMembershipResponse(struct zx_e_Body_s* x, int n, struct zx_ps_TestMembershipResponse_s* z);
void zx_e_Body_ADD_ResolveIdentifierRequest(struct zx_e_Body_s* x, int n, struct zx_ps_ResolveIdentifierRequest_s* z);
void zx_e_Body_ADD_ResolveIdentifierResponse(struct zx_e_Body_s* x, int n, struct zx_ps_ResolveIdentifierResponse_s* z);
void zx_e_Body_ADD_ps_Notify(struct zx_e_Body_s* x, int n, struct zx_ps_Notify_s* z);
void zx_e_Body_ADD_ps_NotifyResponse(struct zx_e_Body_s* x, int n, struct zx_ps_NotifyResponse_s* z);
void zx_e_Body_ADD_IdentityMappingRequest(struct zx_e_Body_s* x, int n, struct zx_im_IdentityMappingRequest_s* z);
void zx_e_Body_ADD_IdentityMappingResponse(struct zx_e_Body_s* x, int n, struct zx_im_IdentityMappingResponse_s* z);
void zx_e_Body_ADD_SASLRequest(struct zx_e_Body_s* x, int n, struct zx_as_SASLRequest_s* z);
void zx_e_Body_ADD_SASLResponse(struct zx_e_Body_s* x, int n, struct zx_as_SASLResponse_s* z);
void zx_e_Body_ADD_SubmitReq(struct zx_e_Body_s* x, int n, struct zx_mm7_SubmitReq_s* z);
void zx_e_Body_ADD_SubmitRsp(struct zx_e_Body_s* x, int n, struct zx_mm7_SubmitRsp_s* z);
void zx_e_Body_ADD_DeliverReq(struct zx_e_Body_s* x, int n, struct zx_mm7_DeliverReq_s* z);
void zx_e_Body_ADD_DeliverRsp(struct zx_e_Body_s* x, int n, struct zx_mm7_DeliverRsp_s* z);
void zx_e_Body_ADD_CancelReq(struct zx_e_Body_s* x, int n, struct zx_mm7_CancelReq_s* z);
void zx_e_Body_ADD_CancelRsp(struct zx_e_Body_s* x, int n, struct zx_mm7_CancelRsp_s* z);
void zx_e_Body_ADD_ReplaceReq(struct zx_e_Body_s* x, int n, struct zx_mm7_ReplaceReq_s* z);
void zx_e_Body_ADD_ReplaceRsp(struct zx_e_Body_s* x, int n, struct zx_mm7_ReplaceRsp_s* z);
void zx_e_Body_ADD_extendedCancelReq(struct zx_e_Body_s* x, int n, struct zx_mm7_extendedCancelReq_s* z);
void zx_e_Body_ADD_extendedCancelRsp(struct zx_e_Body_s* x, int n, struct zx_mm7_extendedCancelRsp_s* z);
void zx_e_Body_ADD_extendedReplaceReq(struct zx_e_Body_s* x, int n, struct zx_mm7_extendedReplaceReq_s* z);
void zx_e_Body_ADD_extendedReplaceRsp(struct zx_e_Body_s* x, int n, struct zx_mm7_extendedReplaceRsp_s* z);
void zx_e_Body_ADD_DeliveryReportReq(struct zx_e_Body_s* x, int n, struct zx_mm7_DeliveryReportReq_s* z);
void zx_e_Body_ADD_DeliveryReportRsp(struct zx_e_Body_s* x, int n, struct zx_mm7_DeliveryReportRsp_s* z);
void zx_e_Body_ADD_ReadReplyReq(struct zx_e_Body_s* x, int n, struct zx_mm7_ReadReplyReq_s* z);
void zx_e_Body_ADD_ReadReplyRsp(struct zx_e_Body_s* x, int n, struct zx_mm7_ReadReplyRsp_s* z);
void zx_e_Body_ADD_RSErrorRsp(struct zx_e_Body_s* x, int n, struct zx_mm7_RSErrorRsp_s* z);
void zx_e_Body_ADD_VASPErrorRsp(struct zx_e_Body_s* x, int n, struct zx_mm7_VASPErrorRsp_s* z);
void zx_e_Body_ADD_QueryStatusReq(struct zx_e_Body_s* x, int n, struct zx_mm7_QueryStatusReq_s* z);
void zx_e_Body_ADD_QueryStatusRsp(struct zx_e_Body_s* x, int n, struct zx_mm7_QueryStatusRsp_s* z);
void zx_e_Body_ADD_cb_Query(struct zx_e_Body_s* x, int n, struct zx_cb_Query_s* z);
void zx_e_Body_ADD_cb_QueryResponse(struct zx_e_Body_s* x, int n, struct zx_cb_QueryResponse_s* z);
void zx_e_Body_ADD_cb_Create(struct zx_e_Body_s* x, int n, struct zx_cb_Create_s* z);
void zx_e_Body_ADD_cb_CreateResponse(struct zx_e_Body_s* x, int n, struct zx_cb_CreateResponse_s* z);
void zx_e_Body_ADD_cb_Delete(struct zx_e_Body_s* x, int n, struct zx_cb_Delete_s* z);
void zx_e_Body_ADD_cb_DeleteResponse(struct zx_e_Body_s* x, int n, struct zx_cb_DeleteResponse_s* z);
void zx_e_Body_ADD_cb_Modify(struct zx_e_Body_s* x, int n, struct zx_cb_Modify_s* z);
void zx_e_Body_ADD_cb_ModifyResponse(struct zx_e_Body_s* x, int n, struct zx_cb_ModifyResponse_s* z);
void zx_e_Body_ADD_cb_Notify(struct zx_e_Body_s* x, int n, struct zx_cb_Notify_s* z);
void zx_e_Body_ADD_cb_NotifyResponse(struct zx_e_Body_s* x, int n, struct zx_cb_NotifyResponse_s* z);
void zx_e_Body_ADD_ReportUsage(struct zx_e_Body_s* x, int n, struct zx_cb_ReportUsage_s* z);
void zx_e_Body_ADD_ReportUsageResponse(struct zx_e_Body_s* x, int n, struct zx_cb_ReportUsageResponse_s* z);
void zx_e_Body_ADD_gl_Query(struct zx_e_Body_s* x, int n, struct zx_gl_Query_s* z);
void zx_e_Body_ADD_gl_QueryResponse(struct zx_e_Body_s* x, int n, struct zx_gl_QueryResponse_s* z);
void zx_e_Body_ADD_gl_Create(struct zx_e_Body_s* x, int n, struct zx_gl_Create_s* z);
void zx_e_Body_ADD_gl_CreateResponse(struct zx_e_Body_s* x, int n, struct zx_gl_CreateResponse_s* z);
void zx_e_Body_ADD_gl_Delete(struct zx_e_Body_s* x, int n, struct zx_gl_Delete_s* z);
void zx_e_Body_ADD_gl_DeleteResponse(struct zx_e_Body_s* x, int n, struct zx_gl_DeleteResponse_s* z);
void zx_e_Body_ADD_gl_Modify(struct zx_e_Body_s* x, int n, struct zx_gl_Modify_s* z);
void zx_e_Body_ADD_gl_ModifyResponse(struct zx_e_Body_s* x, int n, struct zx_gl_ModifyResponse_s* z);
void zx_e_Body_ADD_gl_Notify(struct zx_e_Body_s* x, int n, struct zx_gl_Notify_s* z);
void zx_e_Body_ADD_gl_NotifyResponse(struct zx_e_Body_s* x, int n, struct zx_gl_NotifyResponse_s* z);
void zx_e_Body_ADD_StoreObjectRequest(struct zx_e_Body_s* x, int n, struct zx_demomed_StoreObjectRequest_s* z);
void zx_e_Body_ADD_StoreObjectResponse(struct zx_e_Body_s* x, int n, struct zx_demomed_StoreObjectResponse_s* z);
void zx_e_Body_ADD_GetObjectListRequest(struct zx_e_Body_s* x, int n, struct zx_demomed_GetObjectListRequest_s* z);
void zx_e_Body_ADD_GetObjectListResponse(struct zx_e_Body_s* x, int n, struct zx_demomed_GetObjectListResponse_s* z);
void zx_e_Body_ADD_GetObjectRequest(struct zx_e_Body_s* x, int n, struct zx_demomed_GetObjectRequest_s* z);
void zx_e_Body_ADD_GetObjectResponse(struct zx_e_Body_s* x, int n, struct zx_demomed_GetObjectResponse_s* z);
void zx_e_Body_ADD_DeleteObjectRequest(struct zx_e_Body_s* x, int n, struct zx_demomed_DeleteObjectRequest_s* z);
void zx_e_Body_ADD_DeleteObjectResponse(struct zx_e_Body_s* x, int n, struct zx_demomed_DeleteObjectResponse_s* z);
void zx_e_Body_ADD_Provision(struct zx_e_Body_s* x, int n, struct zx_pmm_Provision_s* z);
void zx_e_Body_ADD_ProvisionResponse(struct zx_e_Body_s* x, int n, struct zx_pmm_ProvisionResponse_s* z);
void zx_e_Body_ADD_PMActivate(struct zx_e_Body_s* x, int n, struct zx_pmm_PMActivate_s* z);
void zx_e_Body_ADD_PMActivateResponse(struct zx_e_Body_s* x, int n, struct zx_pmm_PMActivateResponse_s* z);
void zx_e_Body_ADD_PMDeactivate(struct zx_e_Body_s* x, int n, struct zx_pmm_PMDeactivate_s* z);
void zx_e_Body_ADD_PMDeactivateResponse(struct zx_e_Body_s* x, int n, struct zx_pmm_PMDeactivateResponse_s* z);
void zx_e_Body_ADD_PMDelete(struct zx_e_Body_s* x, int n, struct zx_pmm_PMDelete_s* z);
void zx_e_Body_ADD_PMDeleteResponse(struct zx_e_Body_s* x, int n, struct zx_pmm_PMDeleteResponse_s* z);
void zx_e_Body_ADD_PMUpdate(struct zx_e_Body_s* x, int n, struct zx_pmm_PMUpdate_s* z);
void zx_e_Body_ADD_PMUpdateResponse(struct zx_e_Body_s* x, int n, struct zx_pmm_PMUpdateResponse_s* z);
void zx_e_Body_ADD_PMGetStatus(struct zx_e_Body_s* x, int n, struct zx_pmm_PMGetStatus_s* z);
void zx_e_Body_ADD_PMGetStatusResponse(struct zx_e_Body_s* x, int n, struct zx_pmm_PMGetStatusResponse_s* z);
void zx_e_Body_ADD_PMSetStatus(struct zx_e_Body_s* x, int n, struct zx_pmm_PMSetStatus_s* z);
void zx_e_Body_ADD_PMSetStatusResponse(struct zx_e_Body_s* x, int n, struct zx_pmm_PMSetStatusResponse_s* z);
void zx_e_Body_ADD_PMERegister(struct zx_e_Body_s* x, int n, struct zx_prov_PMERegister_s* z);
void zx_e_Body_ADD_PMERegisterResponse(struct zx_e_Body_s* x, int n, struct zx_prov_PMERegisterResponse_s* z);
void zx_e_Body_ADD_PMEUpload(struct zx_e_Body_s* x, int n, struct zx_prov_PMEUpload_s* z);
void zx_e_Body_ADD_PMEUploadResponse(struct zx_e_Body_s* x, int n, struct zx_prov_PMEUploadResponse_s* z);
void zx_e_Body_ADD_PMEDownload(struct zx_e_Body_s* x, int n, struct zx_prov_PMEDownload_s* z);
void zx_e_Body_ADD_PMEDownloadResponse(struct zx_e_Body_s* x, int n, struct zx_prov_PMEDownloadResponse_s* z);
void zx_e_Body_ADD_PMEEnable(struct zx_e_Body_s* x, int n, struct zx_prov_PMEEnable_s* z);
void zx_e_Body_ADD_PMEEnableResponse(struct zx_e_Body_s* x, int n, struct zx_prov_PMEEnableResponse_s* z);
void zx_e_Body_ADD_PMEDisable(struct zx_e_Body_s* x, int n, struct zx_prov_PMEDisable_s* z);
void zx_e_Body_ADD_PMEDisableResponse(struct zx_e_Body_s* x, int n, struct zx_prov_PMEDisableResponse_s* z);
void zx_e_Body_ADD_PMEDelete(struct zx_e_Body_s* x, int n, struct zx_prov_PMEDelete_s* z);
void zx_e_Body_ADD_PMEDeleteResponse(struct zx_e_Body_s* x, int n, struct zx_prov_PMEDeleteResponse_s* z);
void zx_e_Body_ADD_PMEGetInfo(struct zx_e_Body_s* x, int n, struct zx_prov_PMEGetInfo_s* z);
void zx_e_Body_ADD_PMEGetInfoResponse(struct zx_e_Body_s* x, int n, struct zx_prov_PMEGetInfoResponse_s* z);
void zx_e_Body_ADD_prov_PMGetStatus(struct zx_e_Body_s* x, int n, struct zx_prov_PMGetStatus_s* z);
void zx_e_Body_ADD_prov_PMGetStatusResponse(struct zx_e_Body_s* x, int n, struct zx_prov_PMGetStatusResponse_s* z);
void zx_e_Body_ADD_prov_PMSetStatus(struct zx_e_Body_s* x, int n, struct zx_prov_PMSetStatus_s* z);
void zx_e_Body_ADD_prov_PMSetStatusResponse(struct zx_e_Body_s* x, int n, struct zx_prov_PMSetStatusResponse_s* z);
void zx_e_Body_ADD_PMGetDescriptor(struct zx_e_Body_s* x, int n, struct zx_prov_PMGetDescriptor_s* z);
void zx_e_Body_ADD_PMGetDescriptorResponse(struct zx_e_Body_s* x, int n, struct zx_prov_PMGetDescriptorResponse_s* z);
void zx_e_Body_ADD_prov_PMActivate(struct zx_e_Body_s* x, int n, struct zx_prov_PMActivate_s* z);
void zx_e_Body_ADD_prov_PMActivateResponse(struct zx_e_Body_s* x, int n, struct zx_prov_PMActivateResponse_s* z);
void zx_e_Body_ADD_prov_PMDeactivate(struct zx_e_Body_s* x, int n, struct zx_prov_PMDeactivate_s* z);
void zx_e_Body_ADD_prov_PMDeactivateResponse(struct zx_e_Body_s* x, int n, struct zx_prov_PMDeactivateResponse_s* z);
void zx_e_Body_ADD_PMRegisterDescriptor(struct zx_e_Body_s* x, int n, struct zx_prov_PMRegisterDescriptor_s* z);
void zx_e_Body_ADD_PMRegisterDescriptorResponse(struct zx_e_Body_s* x, int n, struct zx_prov_PMRegisterDescriptorResponse_s* z);
void zx_e_Body_ADD_prov_PMUpdate(struct zx_e_Body_s* x, int n, struct zx_prov_PMUpdate_s* z);
void zx_e_Body_ADD_prov_PMUpdateResponse(struct zx_e_Body_s* x, int n, struct zx_prov_PMUpdateResponse_s* z);
void zx_e_Body_ADD_prov_PMDelete(struct zx_e_Body_s* x, int n, struct zx_prov_PMDelete_s* z);
void zx_e_Body_ADD_prov_PMDeleteResponse(struct zx_e_Body_s* x, int n, struct zx_prov_PMDeleteResponse_s* z);
void zx_e_Body_ADD_Poll(struct zx_e_Body_s* x, int n, struct zx_prov_Poll_s* z);
void zx_e_Body_ADD_PollResponse(struct zx_e_Body_s* x, int n, struct zx_prov_PollResponse_s* z);
void zx_e_Body_ADD_UpdateEPR(struct zx_e_Body_s* x, int n, struct zx_prov_UpdateEPR_s* z);
void zx_e_Body_ADD_UpdateEPRResponse(struct zx_e_Body_s* x, int n, struct zx_prov_UpdateEPRResponse_s* z);
void zx_e_Body_ADD_GetAssertion(struct zx_e_Body_s* x, int n, struct zx_idp_GetAssertion_s* z);
void zx_e_Body_ADD_GetAssertionResponse(struct zx_e_Body_s* x, int n, struct zx_idp_GetAssertionResponse_s* z);
void zx_e_Body_ADD_GetProviderInfo(struct zx_e_Body_s* x, int n, struct zx_idp_GetProviderInfo_s* z);
void zx_e_Body_ADD_GetProviderInfoResponse(struct zx_e_Body_s* x, int n, struct zx_idp_GetProviderInfoResponse_s* z);
void zx_e_Body_ADD_CreatedStatus(struct zx_e_Body_s* x, int n, struct zx_idp_CreatedStatus_s* z);
void zx_e_Body_ADD_CreatedStatusResponse(struct zx_e_Body_s* x, int n, struct zx_idp_CreatedStatusResponse_s* z);
void zx_e_Body_ADD_shps_Delete(struct zx_e_Body_s* x, int n, struct zx_shps_Delete_s* z);
void zx_e_Body_ADD_shps_DeleteResponse(struct zx_e_Body_s* x, int n, struct zx_shps_DeleteResponse_s* z);
void zx_e_Body_ADD_GetStatus(struct zx_e_Body_s* x, int n, struct zx_shps_GetStatus_s* z);
void zx_e_Body_ADD_GetStatusResponse(struct zx_e_Body_s* x, int n, struct zx_shps_GetStatusResponse_s* z);
void zx_e_Body_ADD_shps_Query(struct zx_e_Body_s* x, int n, struct zx_shps_Query_s* z);
void zx_e_Body_ADD_shps_QueryResponse(struct zx_e_Body_s* x, int n, struct zx_shps_QueryResponse_s* z);
void zx_e_Body_ADD_Invoke(struct zx_e_Body_s* x, int n, struct zx_elem_s* z);
void zx_e_Body_ADD_InvokeResponse(struct zx_e_Body_s* x, int n, struct zx_shps_InvokeResponse_s* z);
void zx_e_Body_ADD_QueryRegistered(struct zx_e_Body_s* x, int n, struct zx_shps_QueryRegistered_s* z);
void zx_e_Body_ADD_QueryRegisteredResponse(struct zx_e_Body_s* x, int n, struct zx_shps_QueryRegisteredResponse_s* z);
void zx_e_Body_ADD_Register(struct zx_e_Body_s* x, int n, struct zx_shps_Register_s* z);
void zx_e_Body_ADD_RegisterResponse(struct zx_e_Body_s* x, int n, struct zx_shps_RegisterResponse_s* z);
void zx_e_Body_ADD_SetStatus(struct zx_e_Body_s* x, int n, struct zx_shps_SetStatus_s* z);
void zx_e_Body_ADD_SetStatusResponse(struct zx_e_Body_s* x, int n, struct zx_shps_SetStatusResponse_s* z);
void zx_e_Body_ADD_Update(struct zx_e_Body_s* x, int n, struct zx_shps_Update_s* z);
void zx_e_Body_ADD_UpdateResponse(struct zx_e_Body_s* x, int n, struct zx_shps_UpdateResponse_s* z);
void zx_e_Body_ADD_shps_Poll(struct zx_e_Body_s* x, int n, struct zx_shps_Poll_s* z);
void zx_e_Body_ADD_shps_PollResponse(struct zx_e_Body_s* x, int n, struct zx_shps_PollResponse_s* z);
void zx_e_Body_ADD_ProxyInvoke(struct zx_e_Body_s* x, int n, struct zx_shps_ProxyInvoke_s* z);
void zx_e_Body_ADD_ProxyInvokeResponse(struct zx_e_Body_s* x, int n, struct zx_shps_ProxyInvokeResponse_s* z);
void zx_e_Body_ADD_idhrxml_Create(struct zx_e_Body_s* x, int n, struct zx_idhrxml_Create_s* z);
void zx_e_Body_ADD_idhrxml_CreateResponse(struct zx_e_Body_s* x, int n, struct zx_idhrxml_CreateResponse_s* z);
void zx_e_Body_ADD_idhrxml_Query(struct zx_e_Body_s* x, int n, struct zx_idhrxml_Query_s* z);
void zx_e_Body_ADD_idhrxml_QueryResponse(struct zx_e_Body_s* x, int n, struct zx_idhrxml_QueryResponse_s* z);
void zx_e_Body_ADD_idhrxml_Modify(struct zx_e_Body_s* x, int n, struct zx_idhrxml_Modify_s* z);
void zx_e_Body_ADD_idhrxml_ModifyResponse(struct zx_e_Body_s* x, int n, struct zx_idhrxml_ModifyResponse_s* z);
void zx_e_Body_ADD_idhrxml_Delete(struct zx_e_Body_s* x, int n, struct zx_idhrxml_Delete_s* z);
void zx_e_Body_ADD_idhrxml_DeleteResponse(struct zx_e_Body_s* x, int n, struct zx_idhrxml_DeleteResponse_s* z);
void zx_e_Body_ADD_idhrxml_Notify(struct zx_e_Body_s* x, int n, struct zx_idhrxml_Notify_s* z);
void zx_e_Body_ADD_idhrxml_NotifyResponse(struct zx_e_Body_s* x, int n, struct zx_idhrxml_NotifyResponse_s* z);

void zx_e_Body_DEL_ArtifactResolve(struct zx_e_Body_s* x, int n);
void zx_e_Body_DEL_ArtifactResponse(struct zx_e_Body_s* x, int n);
void zx_e_Body_DEL_ManageNameIDRequest(struct zx_e_Body_s* x, int n);
void zx_e_Body_DEL_ManageNameIDResponse(struct zx_e_Body_s* x, int n);
void zx_e_Body_DEL_LogoutRequest(struct zx_e_Body_s* x, int n);
void zx_e_Body_DEL_LogoutResponse(struct zx_e_Body_s* x, int n);
void zx_e_Body_DEL_NameIDMappingRequest(struct zx_e_Body_s* x, int n);
void zx_e_Body_DEL_NameIDMappingResponse(struct zx_e_Body_s* x, int n);
void zx_e_Body_DEL_AttributeQuery(struct zx_e_Body_s* x, int n);
void zx_e_Body_DEL_AuthnQuery(struct zx_e_Body_s* x, int n);
void zx_e_Body_DEL_AuthzDecisionQuery(struct zx_e_Body_s* x, int n);
void zx_e_Body_DEL_AssertionIDRequest(struct zx_e_Body_s* x, int n);
void zx_e_Body_DEL_Response(struct zx_e_Body_s* x, int n);
void zx_e_Body_DEL_AuthnRequest(struct zx_e_Body_s* x, int n);
void zx_e_Body_DEL_Request(struct zx_e_Body_s* x, int n);
void zx_e_Body_DEL_sp11_Response(struct zx_e_Body_s* x, int n);
void zx_e_Body_DEL_RegisterNameIdentifierRequest(struct zx_e_Body_s* x, int n);
void zx_e_Body_DEL_RegisterNameIdentifierResponse(struct zx_e_Body_s* x, int n);
void zx_e_Body_DEL_FederationTerminationNotification(struct zx_e_Body_s* x, int n);
void zx_e_Body_DEL_ff12_LogoutRequest(struct zx_e_Body_s* x, int n);
void zx_e_Body_DEL_ff12_LogoutResponse(struct zx_e_Body_s* x, int n);
void zx_e_Body_DEL_NameIdentifierMappingRequest(struct zx_e_Body_s* x, int n);
void zx_e_Body_DEL_NameIdentifierMappingResponse(struct zx_e_Body_s* x, int n);
void zx_e_Body_DEL_XACMLAuthzDecisionQuery(struct zx_e_Body_s* x, int n);
void zx_e_Body_DEL_XACMLPolicyQuery(struct zx_e_Body_s* x, int n);
void zx_e_Body_DEL_Query(struct zx_e_Body_s* x, int n);
void zx_e_Body_DEL_QueryResponse(struct zx_e_Body_s* x, int n);
void zx_e_Body_DEL_di12_Query(struct zx_e_Body_s* x, int n);
void zx_e_Body_DEL_di12_QueryResponse(struct zx_e_Body_s* x, int n);
void zx_e_Body_DEL_Modify(struct zx_e_Body_s* x, int n);
void zx_e_Body_DEL_ModifyResponse(struct zx_e_Body_s* x, int n);
void zx_e_Body_DEL_Fault(struct zx_e_Body_s* x, int n);
void zx_e_Body_DEL_SvcMDAssociationAdd(struct zx_e_Body_s* x, int n);
void zx_e_Body_DEL_SvcMDAssociationAddResponse(struct zx_e_Body_s* x, int n);
void zx_e_Body_DEL_SvcMDAssociationDelete(struct zx_e_Body_s* x, int n);
void zx_e_Body_DEL_SvcMDAssociationDeleteResponse(struct zx_e_Body_s* x, int n);
void zx_e_Body_DEL_SvcMDAssociationQuery(struct zx_e_Body_s* x, int n);
void zx_e_Body_DEL_SvcMDAssociationQueryResponse(struct zx_e_Body_s* x, int n);
void zx_e_Body_DEL_SvcMDRegister(struct zx_e_Body_s* x, int n);
void zx_e_Body_DEL_SvcMDRegisterResponse(struct zx_e_Body_s* x, int n);
void zx_e_Body_DEL_SvcMDDelete(struct zx_e_Body_s* x, int n);
void zx_e_Body_DEL_SvcMDDeleteResponse(struct zx_e_Body_s* x, int n);
void zx_e_Body_DEL_SvcMDQuery(struct zx_e_Body_s* x, int n);
void zx_e_Body_DEL_SvcMDQueryResponse(struct zx_e_Body_s* x, int n);
void zx_e_Body_DEL_SvcMDReplace(struct zx_e_Body_s* x, int n);
void zx_e_Body_DEL_SvcMDReplaceResponse(struct zx_e_Body_s* x, int n);
void zx_e_Body_DEL_Create(struct zx_e_Body_s* x, int n);
void zx_e_Body_DEL_CreateResponse(struct zx_e_Body_s* x, int n);
void zx_e_Body_DEL_dap_Query(struct zx_e_Body_s* x, int n);
void zx_e_Body_DEL_dap_QueryResponse(struct zx_e_Body_s* x, int n);
void zx_e_Body_DEL_dap_Modify(struct zx_e_Body_s* x, int n);
void zx_e_Body_DEL_dap_ModifyResponse(struct zx_e_Body_s* x, int n);
void zx_e_Body_DEL_Delete(struct zx_e_Body_s* x, int n);
void zx_e_Body_DEL_DeleteResponse(struct zx_e_Body_s* x, int n);
void zx_e_Body_DEL_Notify(struct zx_e_Body_s* x, int n);
void zx_e_Body_DEL_NotifyResponse(struct zx_e_Body_s* x, int n);
void zx_e_Body_DEL_AddEntityRequest(struct zx_e_Body_s* x, int n);
void zx_e_Body_DEL_AddEntityResponse(struct zx_e_Body_s* x, int n);
void zx_e_Body_DEL_AddKnownEntityRequest(struct zx_e_Body_s* x, int n);
void zx_e_Body_DEL_AddKnownEntityResponse(struct zx_e_Body_s* x, int n);
void zx_e_Body_DEL_AddCollectionRequest(struct zx_e_Body_s* x, int n);
void zx_e_Body_DEL_AddCollectionResponse(struct zx_e_Body_s* x, int n);
void zx_e_Body_DEL_AddToCollectionRequest(struct zx_e_Body_s* x, int n);
void zx_e_Body_DEL_AddToCollectionResponse(struct zx_e_Body_s* x, int n);
void zx_e_Body_DEL_RemoveEntityRequest(struct zx_e_Body_s* x, int n);
void zx_e_Body_DEL_RemoveEntityResponse(struct zx_e_Body_s* x, int n);
void zx_e_Body_DEL_RemoveCollectionRequest(struct zx_e_Body_s* x, int n);
void zx_e_Body_DEL_RemoveCollectionResponse(struct zx_e_Body_s* x, int n);
void zx_e_Body_DEL_RemoveFromCollectionRequest(struct zx_e_Body_s* x, int n);
void zx_e_Body_DEL_RemoveFromCollectionResponse(struct zx_e_Body_s* x, int n);
void zx_e_Body_DEL_ListMembersRequest(struct zx_e_Body_s* x, int n);
void zx_e_Body_DEL_ListMembersResponse(struct zx_e_Body_s* x, int n);
void zx_e_Body_DEL_QueryObjectsRequest(struct zx_e_Body_s* x, int n);
void zx_e_Body_DEL_QueryObjectsResponse(struct zx_e_Body_s* x, int n);
void zx_e_Body_DEL_GetObjectInfoRequest(struct zx_e_Body_s* x, int n);
void zx_e_Body_DEL_GetObjectInfoResponse(struct zx_e_Body_s* x, int n);
void zx_e_Body_DEL_SetObjectInfoRequest(struct zx_e_Body_s* x, int n);
void zx_e_Body_DEL_SetObjectInfoResponse(struct zx_e_Body_s* x, int n);
void zx_e_Body_DEL_TestMembershipRequest(struct zx_e_Body_s* x, int n);
void zx_e_Body_DEL_TestMembershipResponse(struct zx_e_Body_s* x, int n);
void zx_e_Body_DEL_ResolveIdentifierRequest(struct zx_e_Body_s* x, int n);
void zx_e_Body_DEL_ResolveIdentifierResponse(struct zx_e_Body_s* x, int n);
void zx_e_Body_DEL_ps_Notify(struct zx_e_Body_s* x, int n);
void zx_e_Body_DEL_ps_NotifyResponse(struct zx_e_Body_s* x, int n);
void zx_e_Body_DEL_IdentityMappingRequest(struct zx_e_Body_s* x, int n);
void zx_e_Body_DEL_IdentityMappingResponse(struct zx_e_Body_s* x, int n);
void zx_e_Body_DEL_SASLRequest(struct zx_e_Body_s* x, int n);
void zx_e_Body_DEL_SASLResponse(struct zx_e_Body_s* x, int n);
void zx_e_Body_DEL_SubmitReq(struct zx_e_Body_s* x, int n);
void zx_e_Body_DEL_SubmitRsp(struct zx_e_Body_s* x, int n);
void zx_e_Body_DEL_DeliverReq(struct zx_e_Body_s* x, int n);
void zx_e_Body_DEL_DeliverRsp(struct zx_e_Body_s* x, int n);
void zx_e_Body_DEL_CancelReq(struct zx_e_Body_s* x, int n);
void zx_e_Body_DEL_CancelRsp(struct zx_e_Body_s* x, int n);
void zx_e_Body_DEL_ReplaceReq(struct zx_e_Body_s* x, int n);
void zx_e_Body_DEL_ReplaceRsp(struct zx_e_Body_s* x, int n);
void zx_e_Body_DEL_extendedCancelReq(struct zx_e_Body_s* x, int n);
void zx_e_Body_DEL_extendedCancelRsp(struct zx_e_Body_s* x, int n);
void zx_e_Body_DEL_extendedReplaceReq(struct zx_e_Body_s* x, int n);
void zx_e_Body_DEL_extendedReplaceRsp(struct zx_e_Body_s* x, int n);
void zx_e_Body_DEL_DeliveryReportReq(struct zx_e_Body_s* x, int n);
void zx_e_Body_DEL_DeliveryReportRsp(struct zx_e_Body_s* x, int n);
void zx_e_Body_DEL_ReadReplyReq(struct zx_e_Body_s* x, int n);
void zx_e_Body_DEL_ReadReplyRsp(struct zx_e_Body_s* x, int n);
void zx_e_Body_DEL_RSErrorRsp(struct zx_e_Body_s* x, int n);
void zx_e_Body_DEL_VASPErrorRsp(struct zx_e_Body_s* x, int n);
void zx_e_Body_DEL_QueryStatusReq(struct zx_e_Body_s* x, int n);
void zx_e_Body_DEL_QueryStatusRsp(struct zx_e_Body_s* x, int n);
void zx_e_Body_DEL_cb_Query(struct zx_e_Body_s* x, int n);
void zx_e_Body_DEL_cb_QueryResponse(struct zx_e_Body_s* x, int n);
void zx_e_Body_DEL_cb_Create(struct zx_e_Body_s* x, int n);
void zx_e_Body_DEL_cb_CreateResponse(struct zx_e_Body_s* x, int n);
void zx_e_Body_DEL_cb_Delete(struct zx_e_Body_s* x, int n);
void zx_e_Body_DEL_cb_DeleteResponse(struct zx_e_Body_s* x, int n);
void zx_e_Body_DEL_cb_Modify(struct zx_e_Body_s* x, int n);
void zx_e_Body_DEL_cb_ModifyResponse(struct zx_e_Body_s* x, int n);
void zx_e_Body_DEL_cb_Notify(struct zx_e_Body_s* x, int n);
void zx_e_Body_DEL_cb_NotifyResponse(struct zx_e_Body_s* x, int n);
void zx_e_Body_DEL_ReportUsage(struct zx_e_Body_s* x, int n);
void zx_e_Body_DEL_ReportUsageResponse(struct zx_e_Body_s* x, int n);
void zx_e_Body_DEL_gl_Query(struct zx_e_Body_s* x, int n);
void zx_e_Body_DEL_gl_QueryResponse(struct zx_e_Body_s* x, int n);
void zx_e_Body_DEL_gl_Create(struct zx_e_Body_s* x, int n);
void zx_e_Body_DEL_gl_CreateResponse(struct zx_e_Body_s* x, int n);
void zx_e_Body_DEL_gl_Delete(struct zx_e_Body_s* x, int n);
void zx_e_Body_DEL_gl_DeleteResponse(struct zx_e_Body_s* x, int n);
void zx_e_Body_DEL_gl_Modify(struct zx_e_Body_s* x, int n);
void zx_e_Body_DEL_gl_ModifyResponse(struct zx_e_Body_s* x, int n);
void zx_e_Body_DEL_gl_Notify(struct zx_e_Body_s* x, int n);
void zx_e_Body_DEL_gl_NotifyResponse(struct zx_e_Body_s* x, int n);
void zx_e_Body_DEL_StoreObjectRequest(struct zx_e_Body_s* x, int n);
void zx_e_Body_DEL_StoreObjectResponse(struct zx_e_Body_s* x, int n);
void zx_e_Body_DEL_GetObjectListRequest(struct zx_e_Body_s* x, int n);
void zx_e_Body_DEL_GetObjectListResponse(struct zx_e_Body_s* x, int n);
void zx_e_Body_DEL_GetObjectRequest(struct zx_e_Body_s* x, int n);
void zx_e_Body_DEL_GetObjectResponse(struct zx_e_Body_s* x, int n);
void zx_e_Body_DEL_DeleteObjectRequest(struct zx_e_Body_s* x, int n);
void zx_e_Body_DEL_DeleteObjectResponse(struct zx_e_Body_s* x, int n);
void zx_e_Body_DEL_Provision(struct zx_e_Body_s* x, int n);
void zx_e_Body_DEL_ProvisionResponse(struct zx_e_Body_s* x, int n);
void zx_e_Body_DEL_PMActivate(struct zx_e_Body_s* x, int n);
void zx_e_Body_DEL_PMActivateResponse(struct zx_e_Body_s* x, int n);
void zx_e_Body_DEL_PMDeactivate(struct zx_e_Body_s* x, int n);
void zx_e_Body_DEL_PMDeactivateResponse(struct zx_e_Body_s* x, int n);
void zx_e_Body_DEL_PMDelete(struct zx_e_Body_s* x, int n);
void zx_e_Body_DEL_PMDeleteResponse(struct zx_e_Body_s* x, int n);
void zx_e_Body_DEL_PMUpdate(struct zx_e_Body_s* x, int n);
void zx_e_Body_DEL_PMUpdateResponse(struct zx_e_Body_s* x, int n);
void zx_e_Body_DEL_PMGetStatus(struct zx_e_Body_s* x, int n);
void zx_e_Body_DEL_PMGetStatusResponse(struct zx_e_Body_s* x, int n);
void zx_e_Body_DEL_PMSetStatus(struct zx_e_Body_s* x, int n);
void zx_e_Body_DEL_PMSetStatusResponse(struct zx_e_Body_s* x, int n);
void zx_e_Body_DEL_PMERegister(struct zx_e_Body_s* x, int n);
void zx_e_Body_DEL_PMERegisterResponse(struct zx_e_Body_s* x, int n);
void zx_e_Body_DEL_PMEUpload(struct zx_e_Body_s* x, int n);
void zx_e_Body_DEL_PMEUploadResponse(struct zx_e_Body_s* x, int n);
void zx_e_Body_DEL_PMEDownload(struct zx_e_Body_s* x, int n);
void zx_e_Body_DEL_PMEDownloadResponse(struct zx_e_Body_s* x, int n);
void zx_e_Body_DEL_PMEEnable(struct zx_e_Body_s* x, int n);
void zx_e_Body_DEL_PMEEnableResponse(struct zx_e_Body_s* x, int n);
void zx_e_Body_DEL_PMEDisable(struct zx_e_Body_s* x, int n);
void zx_e_Body_DEL_PMEDisableResponse(struct zx_e_Body_s* x, int n);
void zx_e_Body_DEL_PMEDelete(struct zx_e_Body_s* x, int n);
void zx_e_Body_DEL_PMEDeleteResponse(struct zx_e_Body_s* x, int n);
void zx_e_Body_DEL_PMEGetInfo(struct zx_e_Body_s* x, int n);
void zx_e_Body_DEL_PMEGetInfoResponse(struct zx_e_Body_s* x, int n);
void zx_e_Body_DEL_prov_PMGetStatus(struct zx_e_Body_s* x, int n);
void zx_e_Body_DEL_prov_PMGetStatusResponse(struct zx_e_Body_s* x, int n);
void zx_e_Body_DEL_prov_PMSetStatus(struct zx_e_Body_s* x, int n);
void zx_e_Body_DEL_prov_PMSetStatusResponse(struct zx_e_Body_s* x, int n);
void zx_e_Body_DEL_PMGetDescriptor(struct zx_e_Body_s* x, int n);
void zx_e_Body_DEL_PMGetDescriptorResponse(struct zx_e_Body_s* x, int n);
void zx_e_Body_DEL_prov_PMActivate(struct zx_e_Body_s* x, int n);
void zx_e_Body_DEL_prov_PMActivateResponse(struct zx_e_Body_s* x, int n);
void zx_e_Body_DEL_prov_PMDeactivate(struct zx_e_Body_s* x, int n);
void zx_e_Body_DEL_prov_PMDeactivateResponse(struct zx_e_Body_s* x, int n);
void zx_e_Body_DEL_PMRegisterDescriptor(struct zx_e_Body_s* x, int n);
void zx_e_Body_DEL_PMRegisterDescriptorResponse(struct zx_e_Body_s* x, int n);
void zx_e_Body_DEL_prov_PMUpdate(struct zx_e_Body_s* x, int n);
void zx_e_Body_DEL_prov_PMUpdateResponse(struct zx_e_Body_s* x, int n);
void zx_e_Body_DEL_prov_PMDelete(struct zx_e_Body_s* x, int n);
void zx_e_Body_DEL_prov_PMDeleteResponse(struct zx_e_Body_s* x, int n);
void zx_e_Body_DEL_Poll(struct zx_e_Body_s* x, int n);
void zx_e_Body_DEL_PollResponse(struct zx_e_Body_s* x, int n);
void zx_e_Body_DEL_UpdateEPR(struct zx_e_Body_s* x, int n);
void zx_e_Body_DEL_UpdateEPRResponse(struct zx_e_Body_s* x, int n);
void zx_e_Body_DEL_GetAssertion(struct zx_e_Body_s* x, int n);
void zx_e_Body_DEL_GetAssertionResponse(struct zx_e_Body_s* x, int n);
void zx_e_Body_DEL_GetProviderInfo(struct zx_e_Body_s* x, int n);
void zx_e_Body_DEL_GetProviderInfoResponse(struct zx_e_Body_s* x, int n);
void zx_e_Body_DEL_CreatedStatus(struct zx_e_Body_s* x, int n);
void zx_e_Body_DEL_CreatedStatusResponse(struct zx_e_Body_s* x, int n);
void zx_e_Body_DEL_shps_Delete(struct zx_e_Body_s* x, int n);
void zx_e_Body_DEL_shps_DeleteResponse(struct zx_e_Body_s* x, int n);
void zx_e_Body_DEL_GetStatus(struct zx_e_Body_s* x, int n);
void zx_e_Body_DEL_GetStatusResponse(struct zx_e_Body_s* x, int n);
void zx_e_Body_DEL_shps_Query(struct zx_e_Body_s* x, int n);
void zx_e_Body_DEL_shps_QueryResponse(struct zx_e_Body_s* x, int n);
void zx_e_Body_DEL_Invoke(struct zx_e_Body_s* x, int n);
void zx_e_Body_DEL_InvokeResponse(struct zx_e_Body_s* x, int n);
void zx_e_Body_DEL_QueryRegistered(struct zx_e_Body_s* x, int n);
void zx_e_Body_DEL_QueryRegisteredResponse(struct zx_e_Body_s* x, int n);
void zx_e_Body_DEL_Register(struct zx_e_Body_s* x, int n);
void zx_e_Body_DEL_RegisterResponse(struct zx_e_Body_s* x, int n);
void zx_e_Body_DEL_SetStatus(struct zx_e_Body_s* x, int n);
void zx_e_Body_DEL_SetStatusResponse(struct zx_e_Body_s* x, int n);
void zx_e_Body_DEL_Update(struct zx_e_Body_s* x, int n);
void zx_e_Body_DEL_UpdateResponse(struct zx_e_Body_s* x, int n);
void zx_e_Body_DEL_shps_Poll(struct zx_e_Body_s* x, int n);
void zx_e_Body_DEL_shps_PollResponse(struct zx_e_Body_s* x, int n);
void zx_e_Body_DEL_ProxyInvoke(struct zx_e_Body_s* x, int n);
void zx_e_Body_DEL_ProxyInvokeResponse(struct zx_e_Body_s* x, int n);
void zx_e_Body_DEL_idhrxml_Create(struct zx_e_Body_s* x, int n);
void zx_e_Body_DEL_idhrxml_CreateResponse(struct zx_e_Body_s* x, int n);
void zx_e_Body_DEL_idhrxml_Query(struct zx_e_Body_s* x, int n);
void zx_e_Body_DEL_idhrxml_QueryResponse(struct zx_e_Body_s* x, int n);
void zx_e_Body_DEL_idhrxml_Modify(struct zx_e_Body_s* x, int n);
void zx_e_Body_DEL_idhrxml_ModifyResponse(struct zx_e_Body_s* x, int n);
void zx_e_Body_DEL_idhrxml_Delete(struct zx_e_Body_s* x, int n);
void zx_e_Body_DEL_idhrxml_DeleteResponse(struct zx_e_Body_s* x, int n);
void zx_e_Body_DEL_idhrxml_Notify(struct zx_e_Body_s* x, int n);
void zx_e_Body_DEL_idhrxml_NotifyResponse(struct zx_e_Body_s* x, int n);

void zx_e_Body_REV_ArtifactResolve(struct zx_e_Body_s* x);
void zx_e_Body_REV_ArtifactResponse(struct zx_e_Body_s* x);
void zx_e_Body_REV_ManageNameIDRequest(struct zx_e_Body_s* x);
void zx_e_Body_REV_ManageNameIDResponse(struct zx_e_Body_s* x);
void zx_e_Body_REV_LogoutRequest(struct zx_e_Body_s* x);
void zx_e_Body_REV_LogoutResponse(struct zx_e_Body_s* x);
void zx_e_Body_REV_NameIDMappingRequest(struct zx_e_Body_s* x);
void zx_e_Body_REV_NameIDMappingResponse(struct zx_e_Body_s* x);
void zx_e_Body_REV_AttributeQuery(struct zx_e_Body_s* x);
void zx_e_Body_REV_AuthnQuery(struct zx_e_Body_s* x);
void zx_e_Body_REV_AuthzDecisionQuery(struct zx_e_Body_s* x);
void zx_e_Body_REV_AssertionIDRequest(struct zx_e_Body_s* x);
void zx_e_Body_REV_Response(struct zx_e_Body_s* x);
void zx_e_Body_REV_AuthnRequest(struct zx_e_Body_s* x);
void zx_e_Body_REV_Request(struct zx_e_Body_s* x);
void zx_e_Body_REV_sp11_Response(struct zx_e_Body_s* x);
void zx_e_Body_REV_RegisterNameIdentifierRequest(struct zx_e_Body_s* x);
void zx_e_Body_REV_RegisterNameIdentifierResponse(struct zx_e_Body_s* x);
void zx_e_Body_REV_FederationTerminationNotification(struct zx_e_Body_s* x);
void zx_e_Body_REV_ff12_LogoutRequest(struct zx_e_Body_s* x);
void zx_e_Body_REV_ff12_LogoutResponse(struct zx_e_Body_s* x);
void zx_e_Body_REV_NameIdentifierMappingRequest(struct zx_e_Body_s* x);
void zx_e_Body_REV_NameIdentifierMappingResponse(struct zx_e_Body_s* x);
void zx_e_Body_REV_XACMLAuthzDecisionQuery(struct zx_e_Body_s* x);
void zx_e_Body_REV_XACMLPolicyQuery(struct zx_e_Body_s* x);
void zx_e_Body_REV_Query(struct zx_e_Body_s* x);
void zx_e_Body_REV_QueryResponse(struct zx_e_Body_s* x);
void zx_e_Body_REV_di12_Query(struct zx_e_Body_s* x);
void zx_e_Body_REV_di12_QueryResponse(struct zx_e_Body_s* x);
void zx_e_Body_REV_Modify(struct zx_e_Body_s* x);
void zx_e_Body_REV_ModifyResponse(struct zx_e_Body_s* x);
void zx_e_Body_REV_Fault(struct zx_e_Body_s* x);
void zx_e_Body_REV_SvcMDAssociationAdd(struct zx_e_Body_s* x);
void zx_e_Body_REV_SvcMDAssociationAddResponse(struct zx_e_Body_s* x);
void zx_e_Body_REV_SvcMDAssociationDelete(struct zx_e_Body_s* x);
void zx_e_Body_REV_SvcMDAssociationDeleteResponse(struct zx_e_Body_s* x);
void zx_e_Body_REV_SvcMDAssociationQuery(struct zx_e_Body_s* x);
void zx_e_Body_REV_SvcMDAssociationQueryResponse(struct zx_e_Body_s* x);
void zx_e_Body_REV_SvcMDRegister(struct zx_e_Body_s* x);
void zx_e_Body_REV_SvcMDRegisterResponse(struct zx_e_Body_s* x);
void zx_e_Body_REV_SvcMDDelete(struct zx_e_Body_s* x);
void zx_e_Body_REV_SvcMDDeleteResponse(struct zx_e_Body_s* x);
void zx_e_Body_REV_SvcMDQuery(struct zx_e_Body_s* x);
void zx_e_Body_REV_SvcMDQueryResponse(struct zx_e_Body_s* x);
void zx_e_Body_REV_SvcMDReplace(struct zx_e_Body_s* x);
void zx_e_Body_REV_SvcMDReplaceResponse(struct zx_e_Body_s* x);
void zx_e_Body_REV_Create(struct zx_e_Body_s* x);
void zx_e_Body_REV_CreateResponse(struct zx_e_Body_s* x);
void zx_e_Body_REV_dap_Query(struct zx_e_Body_s* x);
void zx_e_Body_REV_dap_QueryResponse(struct zx_e_Body_s* x);
void zx_e_Body_REV_dap_Modify(struct zx_e_Body_s* x);
void zx_e_Body_REV_dap_ModifyResponse(struct zx_e_Body_s* x);
void zx_e_Body_REV_Delete(struct zx_e_Body_s* x);
void zx_e_Body_REV_DeleteResponse(struct zx_e_Body_s* x);
void zx_e_Body_REV_Notify(struct zx_e_Body_s* x);
void zx_e_Body_REV_NotifyResponse(struct zx_e_Body_s* x);
void zx_e_Body_REV_AddEntityRequest(struct zx_e_Body_s* x);
void zx_e_Body_REV_AddEntityResponse(struct zx_e_Body_s* x);
void zx_e_Body_REV_AddKnownEntityRequest(struct zx_e_Body_s* x);
void zx_e_Body_REV_AddKnownEntityResponse(struct zx_e_Body_s* x);
void zx_e_Body_REV_AddCollectionRequest(struct zx_e_Body_s* x);
void zx_e_Body_REV_AddCollectionResponse(struct zx_e_Body_s* x);
void zx_e_Body_REV_AddToCollectionRequest(struct zx_e_Body_s* x);
void zx_e_Body_REV_AddToCollectionResponse(struct zx_e_Body_s* x);
void zx_e_Body_REV_RemoveEntityRequest(struct zx_e_Body_s* x);
void zx_e_Body_REV_RemoveEntityResponse(struct zx_e_Body_s* x);
void zx_e_Body_REV_RemoveCollectionRequest(struct zx_e_Body_s* x);
void zx_e_Body_REV_RemoveCollectionResponse(struct zx_e_Body_s* x);
void zx_e_Body_REV_RemoveFromCollectionRequest(struct zx_e_Body_s* x);
void zx_e_Body_REV_RemoveFromCollectionResponse(struct zx_e_Body_s* x);
void zx_e_Body_REV_ListMembersRequest(struct zx_e_Body_s* x);
void zx_e_Body_REV_ListMembersResponse(struct zx_e_Body_s* x);
void zx_e_Body_REV_QueryObjectsRequest(struct zx_e_Body_s* x);
void zx_e_Body_REV_QueryObjectsResponse(struct zx_e_Body_s* x);
void zx_e_Body_REV_GetObjectInfoRequest(struct zx_e_Body_s* x);
void zx_e_Body_REV_GetObjectInfoResponse(struct zx_e_Body_s* x);
void zx_e_Body_REV_SetObjectInfoRequest(struct zx_e_Body_s* x);
void zx_e_Body_REV_SetObjectInfoResponse(struct zx_e_Body_s* x);
void zx_e_Body_REV_TestMembershipRequest(struct zx_e_Body_s* x);
void zx_e_Body_REV_TestMembershipResponse(struct zx_e_Body_s* x);
void zx_e_Body_REV_ResolveIdentifierRequest(struct zx_e_Body_s* x);
void zx_e_Body_REV_ResolveIdentifierResponse(struct zx_e_Body_s* x);
void zx_e_Body_REV_ps_Notify(struct zx_e_Body_s* x);
void zx_e_Body_REV_ps_NotifyResponse(struct zx_e_Body_s* x);
void zx_e_Body_REV_IdentityMappingRequest(struct zx_e_Body_s* x);
void zx_e_Body_REV_IdentityMappingResponse(struct zx_e_Body_s* x);
void zx_e_Body_REV_SASLRequest(struct zx_e_Body_s* x);
void zx_e_Body_REV_SASLResponse(struct zx_e_Body_s* x);
void zx_e_Body_REV_SubmitReq(struct zx_e_Body_s* x);
void zx_e_Body_REV_SubmitRsp(struct zx_e_Body_s* x);
void zx_e_Body_REV_DeliverReq(struct zx_e_Body_s* x);
void zx_e_Body_REV_DeliverRsp(struct zx_e_Body_s* x);
void zx_e_Body_REV_CancelReq(struct zx_e_Body_s* x);
void zx_e_Body_REV_CancelRsp(struct zx_e_Body_s* x);
void zx_e_Body_REV_ReplaceReq(struct zx_e_Body_s* x);
void zx_e_Body_REV_ReplaceRsp(struct zx_e_Body_s* x);
void zx_e_Body_REV_extendedCancelReq(struct zx_e_Body_s* x);
void zx_e_Body_REV_extendedCancelRsp(struct zx_e_Body_s* x);
void zx_e_Body_REV_extendedReplaceReq(struct zx_e_Body_s* x);
void zx_e_Body_REV_extendedReplaceRsp(struct zx_e_Body_s* x);
void zx_e_Body_REV_DeliveryReportReq(struct zx_e_Body_s* x);
void zx_e_Body_REV_DeliveryReportRsp(struct zx_e_Body_s* x);
void zx_e_Body_REV_ReadReplyReq(struct zx_e_Body_s* x);
void zx_e_Body_REV_ReadReplyRsp(struct zx_e_Body_s* x);
void zx_e_Body_REV_RSErrorRsp(struct zx_e_Body_s* x);
void zx_e_Body_REV_VASPErrorRsp(struct zx_e_Body_s* x);
void zx_e_Body_REV_QueryStatusReq(struct zx_e_Body_s* x);
void zx_e_Body_REV_QueryStatusRsp(struct zx_e_Body_s* x);
void zx_e_Body_REV_cb_Query(struct zx_e_Body_s* x);
void zx_e_Body_REV_cb_QueryResponse(struct zx_e_Body_s* x);
void zx_e_Body_REV_cb_Create(struct zx_e_Body_s* x);
void zx_e_Body_REV_cb_CreateResponse(struct zx_e_Body_s* x);
void zx_e_Body_REV_cb_Delete(struct zx_e_Body_s* x);
void zx_e_Body_REV_cb_DeleteResponse(struct zx_e_Body_s* x);
void zx_e_Body_REV_cb_Modify(struct zx_e_Body_s* x);
void zx_e_Body_REV_cb_ModifyResponse(struct zx_e_Body_s* x);
void zx_e_Body_REV_cb_Notify(struct zx_e_Body_s* x);
void zx_e_Body_REV_cb_NotifyResponse(struct zx_e_Body_s* x);
void zx_e_Body_REV_ReportUsage(struct zx_e_Body_s* x);
void zx_e_Body_REV_ReportUsageResponse(struct zx_e_Body_s* x);
void zx_e_Body_REV_gl_Query(struct zx_e_Body_s* x);
void zx_e_Body_REV_gl_QueryResponse(struct zx_e_Body_s* x);
void zx_e_Body_REV_gl_Create(struct zx_e_Body_s* x);
void zx_e_Body_REV_gl_CreateResponse(struct zx_e_Body_s* x);
void zx_e_Body_REV_gl_Delete(struct zx_e_Body_s* x);
void zx_e_Body_REV_gl_DeleteResponse(struct zx_e_Body_s* x);
void zx_e_Body_REV_gl_Modify(struct zx_e_Body_s* x);
void zx_e_Body_REV_gl_ModifyResponse(struct zx_e_Body_s* x);
void zx_e_Body_REV_gl_Notify(struct zx_e_Body_s* x);
void zx_e_Body_REV_gl_NotifyResponse(struct zx_e_Body_s* x);
void zx_e_Body_REV_StoreObjectRequest(struct zx_e_Body_s* x);
void zx_e_Body_REV_StoreObjectResponse(struct zx_e_Body_s* x);
void zx_e_Body_REV_GetObjectListRequest(struct zx_e_Body_s* x);
void zx_e_Body_REV_GetObjectListResponse(struct zx_e_Body_s* x);
void zx_e_Body_REV_GetObjectRequest(struct zx_e_Body_s* x);
void zx_e_Body_REV_GetObjectResponse(struct zx_e_Body_s* x);
void zx_e_Body_REV_DeleteObjectRequest(struct zx_e_Body_s* x);
void zx_e_Body_REV_DeleteObjectResponse(struct zx_e_Body_s* x);
void zx_e_Body_REV_Provision(struct zx_e_Body_s* x);
void zx_e_Body_REV_ProvisionResponse(struct zx_e_Body_s* x);
void zx_e_Body_REV_PMActivate(struct zx_e_Body_s* x);
void zx_e_Body_REV_PMActivateResponse(struct zx_e_Body_s* x);
void zx_e_Body_REV_PMDeactivate(struct zx_e_Body_s* x);
void zx_e_Body_REV_PMDeactivateResponse(struct zx_e_Body_s* x);
void zx_e_Body_REV_PMDelete(struct zx_e_Body_s* x);
void zx_e_Body_REV_PMDeleteResponse(struct zx_e_Body_s* x);
void zx_e_Body_REV_PMUpdate(struct zx_e_Body_s* x);
void zx_e_Body_REV_PMUpdateResponse(struct zx_e_Body_s* x);
void zx_e_Body_REV_PMGetStatus(struct zx_e_Body_s* x);
void zx_e_Body_REV_PMGetStatusResponse(struct zx_e_Body_s* x);
void zx_e_Body_REV_PMSetStatus(struct zx_e_Body_s* x);
void zx_e_Body_REV_PMSetStatusResponse(struct zx_e_Body_s* x);
void zx_e_Body_REV_PMERegister(struct zx_e_Body_s* x);
void zx_e_Body_REV_PMERegisterResponse(struct zx_e_Body_s* x);
void zx_e_Body_REV_PMEUpload(struct zx_e_Body_s* x);
void zx_e_Body_REV_PMEUploadResponse(struct zx_e_Body_s* x);
void zx_e_Body_REV_PMEDownload(struct zx_e_Body_s* x);
void zx_e_Body_REV_PMEDownloadResponse(struct zx_e_Body_s* x);
void zx_e_Body_REV_PMEEnable(struct zx_e_Body_s* x);
void zx_e_Body_REV_PMEEnableResponse(struct zx_e_Body_s* x);
void zx_e_Body_REV_PMEDisable(struct zx_e_Body_s* x);
void zx_e_Body_REV_PMEDisableResponse(struct zx_e_Body_s* x);
void zx_e_Body_REV_PMEDelete(struct zx_e_Body_s* x);
void zx_e_Body_REV_PMEDeleteResponse(struct zx_e_Body_s* x);
void zx_e_Body_REV_PMEGetInfo(struct zx_e_Body_s* x);
void zx_e_Body_REV_PMEGetInfoResponse(struct zx_e_Body_s* x);
void zx_e_Body_REV_prov_PMGetStatus(struct zx_e_Body_s* x);
void zx_e_Body_REV_prov_PMGetStatusResponse(struct zx_e_Body_s* x);
void zx_e_Body_REV_prov_PMSetStatus(struct zx_e_Body_s* x);
void zx_e_Body_REV_prov_PMSetStatusResponse(struct zx_e_Body_s* x);
void zx_e_Body_REV_PMGetDescriptor(struct zx_e_Body_s* x);
void zx_e_Body_REV_PMGetDescriptorResponse(struct zx_e_Body_s* x);
void zx_e_Body_REV_prov_PMActivate(struct zx_e_Body_s* x);
void zx_e_Body_REV_prov_PMActivateResponse(struct zx_e_Body_s* x);
void zx_e_Body_REV_prov_PMDeactivate(struct zx_e_Body_s* x);
void zx_e_Body_REV_prov_PMDeactivateResponse(struct zx_e_Body_s* x);
void zx_e_Body_REV_PMRegisterDescriptor(struct zx_e_Body_s* x);
void zx_e_Body_REV_PMRegisterDescriptorResponse(struct zx_e_Body_s* x);
void zx_e_Body_REV_prov_PMUpdate(struct zx_e_Body_s* x);
void zx_e_Body_REV_prov_PMUpdateResponse(struct zx_e_Body_s* x);
void zx_e_Body_REV_prov_PMDelete(struct zx_e_Body_s* x);
void zx_e_Body_REV_prov_PMDeleteResponse(struct zx_e_Body_s* x);
void zx_e_Body_REV_Poll(struct zx_e_Body_s* x);
void zx_e_Body_REV_PollResponse(struct zx_e_Body_s* x);
void zx_e_Body_REV_UpdateEPR(struct zx_e_Body_s* x);
void zx_e_Body_REV_UpdateEPRResponse(struct zx_e_Body_s* x);
void zx_e_Body_REV_GetAssertion(struct zx_e_Body_s* x);
void zx_e_Body_REV_GetAssertionResponse(struct zx_e_Body_s* x);
void zx_e_Body_REV_GetProviderInfo(struct zx_e_Body_s* x);
void zx_e_Body_REV_GetProviderInfoResponse(struct zx_e_Body_s* x);
void zx_e_Body_REV_CreatedStatus(struct zx_e_Body_s* x);
void zx_e_Body_REV_CreatedStatusResponse(struct zx_e_Body_s* x);
void zx_e_Body_REV_shps_Delete(struct zx_e_Body_s* x);
void zx_e_Body_REV_shps_DeleteResponse(struct zx_e_Body_s* x);
void zx_e_Body_REV_GetStatus(struct zx_e_Body_s* x);
void zx_e_Body_REV_GetStatusResponse(struct zx_e_Body_s* x);
void zx_e_Body_REV_shps_Query(struct zx_e_Body_s* x);
void zx_e_Body_REV_shps_QueryResponse(struct zx_e_Body_s* x);
void zx_e_Body_REV_Invoke(struct zx_e_Body_s* x);
void zx_e_Body_REV_InvokeResponse(struct zx_e_Body_s* x);
void zx_e_Body_REV_QueryRegistered(struct zx_e_Body_s* x);
void zx_e_Body_REV_QueryRegisteredResponse(struct zx_e_Body_s* x);
void zx_e_Body_REV_Register(struct zx_e_Body_s* x);
void zx_e_Body_REV_RegisterResponse(struct zx_e_Body_s* x);
void zx_e_Body_REV_SetStatus(struct zx_e_Body_s* x);
void zx_e_Body_REV_SetStatusResponse(struct zx_e_Body_s* x);
void zx_e_Body_REV_Update(struct zx_e_Body_s* x);
void zx_e_Body_REV_UpdateResponse(struct zx_e_Body_s* x);
void zx_e_Body_REV_shps_Poll(struct zx_e_Body_s* x);
void zx_e_Body_REV_shps_PollResponse(struct zx_e_Body_s* x);
void zx_e_Body_REV_ProxyInvoke(struct zx_e_Body_s* x);
void zx_e_Body_REV_ProxyInvokeResponse(struct zx_e_Body_s* x);
void zx_e_Body_REV_idhrxml_Create(struct zx_e_Body_s* x);
void zx_e_Body_REV_idhrxml_CreateResponse(struct zx_e_Body_s* x);
void zx_e_Body_REV_idhrxml_Query(struct zx_e_Body_s* x);
void zx_e_Body_REV_idhrxml_QueryResponse(struct zx_e_Body_s* x);
void zx_e_Body_REV_idhrxml_Modify(struct zx_e_Body_s* x);
void zx_e_Body_REV_idhrxml_ModifyResponse(struct zx_e_Body_s* x);
void zx_e_Body_REV_idhrxml_Delete(struct zx_e_Body_s* x);
void zx_e_Body_REV_idhrxml_DeleteResponse(struct zx_e_Body_s* x);
void zx_e_Body_REV_idhrxml_Notify(struct zx_e_Body_s* x);
void zx_e_Body_REV_idhrxml_NotifyResponse(struct zx_e_Body_s* x);

#endif
/* -------------------------- e_Envelope -------------------------- */
/* refby( ) */
#ifndef zx_e_Envelope_EXT
#define zx_e_Envelope_EXT
#endif

struct zx_e_Envelope_s* zx_DEC_e_Envelope(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_e_Envelope_s* zx_NEW_e_Envelope(struct zx_ctx* c);
void zx_FREE_e_Envelope(struct zx_ctx* c, struct zx_e_Envelope_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_e_Envelope_s* zx_DEEP_CLONE_e_Envelope(struct zx_ctx* c, struct zx_e_Envelope_s* x, int dup_strs);
void zx_DUP_STRS_e_Envelope(struct zx_ctx* c, struct zx_e_Envelope_s* x);
int zx_WALK_SO_e_Envelope(struct zx_ctx* c, struct zx_e_Envelope_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_e_Envelope(struct zx_ctx* c, struct zx_e_Envelope_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_e_Envelope(struct zx_ctx* c, struct zx_e_Envelope_s* x);
int zx_LEN_WO_e_Envelope(struct zx_ctx* c, struct zx_e_Envelope_s* x);
char* zx_ENC_SO_e_Envelope(struct zx_ctx* c, struct zx_e_Envelope_s* x, char* p);
char* zx_ENC_WO_e_Envelope(struct zx_ctx* c, struct zx_e_Envelope_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_e_Envelope(struct zx_ctx* c, struct zx_e_Envelope_s* x);
struct zx_str* zx_EASY_ENC_WO_e_Envelope(struct zx_ctx* c, struct zx_e_Envelope_s* x);

struct zx_e_Envelope_s {
  ZX_ELEM_EXT
  zx_e_Envelope_EXT
  struct zx_e_Header_s* Header;	/* {0,1} nada */
  struct zx_e_Body_s* Body;	/* {1,1} nada */
};

#ifdef ZX_ENA_GETPUT

struct zx_e_Header_s* zx_e_Envelope_GET_Header(struct zx_e_Envelope_s* x, int n);
struct zx_e_Body_s* zx_e_Envelope_GET_Body(struct zx_e_Envelope_s* x, int n);

int zx_e_Envelope_NUM_Header(struct zx_e_Envelope_s* x);
int zx_e_Envelope_NUM_Body(struct zx_e_Envelope_s* x);

struct zx_e_Header_s* zx_e_Envelope_POP_Header(struct zx_e_Envelope_s* x);
struct zx_e_Body_s* zx_e_Envelope_POP_Body(struct zx_e_Envelope_s* x);

void zx_e_Envelope_PUSH_Header(struct zx_e_Envelope_s* x, struct zx_e_Header_s* y);
void zx_e_Envelope_PUSH_Body(struct zx_e_Envelope_s* x, struct zx_e_Body_s* y);


void zx_e_Envelope_PUT_Header(struct zx_e_Envelope_s* x, int n, struct zx_e_Header_s* y);
void zx_e_Envelope_PUT_Body(struct zx_e_Envelope_s* x, int n, struct zx_e_Body_s* y);

void zx_e_Envelope_ADD_Header(struct zx_e_Envelope_s* x, int n, struct zx_e_Header_s* z);
void zx_e_Envelope_ADD_Body(struct zx_e_Envelope_s* x, int n, struct zx_e_Body_s* z);

void zx_e_Envelope_DEL_Header(struct zx_e_Envelope_s* x, int n);
void zx_e_Envelope_DEL_Body(struct zx_e_Envelope_s* x, int n);

void zx_e_Envelope_REV_Header(struct zx_e_Envelope_s* x);
void zx_e_Envelope_REV_Body(struct zx_e_Envelope_s* x);

#endif
/* -------------------------- e_Fault -------------------------- */
/* refby( zx_e_Body_s ) */
#ifndef zx_e_Fault_EXT
#define zx_e_Fault_EXT
#endif

struct zx_e_Fault_s* zx_DEC_e_Fault(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_e_Fault_s* zx_NEW_e_Fault(struct zx_ctx* c);
void zx_FREE_e_Fault(struct zx_ctx* c, struct zx_e_Fault_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_e_Fault_s* zx_DEEP_CLONE_e_Fault(struct zx_ctx* c, struct zx_e_Fault_s* x, int dup_strs);
void zx_DUP_STRS_e_Fault(struct zx_ctx* c, struct zx_e_Fault_s* x);
int zx_WALK_SO_e_Fault(struct zx_ctx* c, struct zx_e_Fault_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_e_Fault(struct zx_ctx* c, struct zx_e_Fault_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_e_Fault(struct zx_ctx* c, struct zx_e_Fault_s* x);
int zx_LEN_WO_e_Fault(struct zx_ctx* c, struct zx_e_Fault_s* x);
char* zx_ENC_SO_e_Fault(struct zx_ctx* c, struct zx_e_Fault_s* x, char* p);
char* zx_ENC_WO_e_Fault(struct zx_ctx* c, struct zx_e_Fault_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_e_Fault(struct zx_ctx* c, struct zx_e_Fault_s* x);
struct zx_str* zx_EASY_ENC_WO_e_Fault(struct zx_ctx* c, struct zx_e_Fault_s* x);

struct zx_e_Fault_s {
  ZX_ELEM_EXT
  zx_e_Fault_EXT
  struct zx_elem_s* faultcode;	/* {1,1} xs:QName */
  struct zx_elem_s* faultstring;	/* {1,1} xs:string */
  struct zx_elem_s* faultactor;	/* {0,1} xs:anyURI */
  struct zx_e_detail_s* detail;	/* {0,1}  */
};

#ifdef ZX_ENA_GETPUT

struct zx_elem_s* zx_e_Fault_GET_faultcode(struct zx_e_Fault_s* x, int n);
struct zx_elem_s* zx_e_Fault_GET_faultstring(struct zx_e_Fault_s* x, int n);
struct zx_elem_s* zx_e_Fault_GET_faultactor(struct zx_e_Fault_s* x, int n);
struct zx_e_detail_s* zx_e_Fault_GET_detail(struct zx_e_Fault_s* x, int n);

int zx_e_Fault_NUM_faultcode(struct zx_e_Fault_s* x);
int zx_e_Fault_NUM_faultstring(struct zx_e_Fault_s* x);
int zx_e_Fault_NUM_faultactor(struct zx_e_Fault_s* x);
int zx_e_Fault_NUM_detail(struct zx_e_Fault_s* x);

struct zx_elem_s* zx_e_Fault_POP_faultcode(struct zx_e_Fault_s* x);
struct zx_elem_s* zx_e_Fault_POP_faultstring(struct zx_e_Fault_s* x);
struct zx_elem_s* zx_e_Fault_POP_faultactor(struct zx_e_Fault_s* x);
struct zx_e_detail_s* zx_e_Fault_POP_detail(struct zx_e_Fault_s* x);

void zx_e_Fault_PUSH_faultcode(struct zx_e_Fault_s* x, struct zx_elem_s* y);
void zx_e_Fault_PUSH_faultstring(struct zx_e_Fault_s* x, struct zx_elem_s* y);
void zx_e_Fault_PUSH_faultactor(struct zx_e_Fault_s* x, struct zx_elem_s* y);
void zx_e_Fault_PUSH_detail(struct zx_e_Fault_s* x, struct zx_e_detail_s* y);


void zx_e_Fault_PUT_faultcode(struct zx_e_Fault_s* x, int n, struct zx_elem_s* y);
void zx_e_Fault_PUT_faultstring(struct zx_e_Fault_s* x, int n, struct zx_elem_s* y);
void zx_e_Fault_PUT_faultactor(struct zx_e_Fault_s* x, int n, struct zx_elem_s* y);
void zx_e_Fault_PUT_detail(struct zx_e_Fault_s* x, int n, struct zx_e_detail_s* y);

void zx_e_Fault_ADD_faultcode(struct zx_e_Fault_s* x, int n, struct zx_elem_s* z);
void zx_e_Fault_ADD_faultstring(struct zx_e_Fault_s* x, int n, struct zx_elem_s* z);
void zx_e_Fault_ADD_faultactor(struct zx_e_Fault_s* x, int n, struct zx_elem_s* z);
void zx_e_Fault_ADD_detail(struct zx_e_Fault_s* x, int n, struct zx_e_detail_s* z);

void zx_e_Fault_DEL_faultcode(struct zx_e_Fault_s* x, int n);
void zx_e_Fault_DEL_faultstring(struct zx_e_Fault_s* x, int n);
void zx_e_Fault_DEL_faultactor(struct zx_e_Fault_s* x, int n);
void zx_e_Fault_DEL_detail(struct zx_e_Fault_s* x, int n);

void zx_e_Fault_REV_faultcode(struct zx_e_Fault_s* x);
void zx_e_Fault_REV_faultstring(struct zx_e_Fault_s* x);
void zx_e_Fault_REV_faultactor(struct zx_e_Fault_s* x);
void zx_e_Fault_REV_detail(struct zx_e_Fault_s* x);

#endif
/* -------------------------- e_Header -------------------------- */
/* refby( zx_e_Envelope_s ) */
#ifndef zx_e_Header_EXT
#define zx_e_Header_EXT
#endif

struct zx_e_Header_s* zx_DEC_e_Header(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_e_Header_s* zx_NEW_e_Header(struct zx_ctx* c);
void zx_FREE_e_Header(struct zx_ctx* c, struct zx_e_Header_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_e_Header_s* zx_DEEP_CLONE_e_Header(struct zx_ctx* c, struct zx_e_Header_s* x, int dup_strs);
void zx_DUP_STRS_e_Header(struct zx_ctx* c, struct zx_e_Header_s* x);
int zx_WALK_SO_e_Header(struct zx_ctx* c, struct zx_e_Header_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_e_Header(struct zx_ctx* c, struct zx_e_Header_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_e_Header(struct zx_ctx* c, struct zx_e_Header_s* x);
int zx_LEN_WO_e_Header(struct zx_ctx* c, struct zx_e_Header_s* x);
char* zx_ENC_SO_e_Header(struct zx_ctx* c, struct zx_e_Header_s* x, char* p);
char* zx_ENC_WO_e_Header(struct zx_ctx* c, struct zx_e_Header_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_e_Header(struct zx_ctx* c, struct zx_e_Header_s* x);
struct zx_str* zx_EASY_ENC_WO_e_Header(struct zx_ctx* c, struct zx_e_Header_s* x);

struct zx_e_Header_s {
  ZX_ELEM_EXT
  zx_e_Header_EXT
  struct zx_paos_Request_s* Request;	/* {0,1} nada */
  struct zx_paos_Response_s* Response;	/* {0,1} nada */
  struct zx_ecp_Request_s* ecp_Request;	/* {0,1} nada */
  struct zx_ecp_Response_s* ecp_Response;	/* {0,1} nada */
  struct zx_ecp_RelayState_s* RelayState;	/* {0,1} nada */
  struct zx_a_MessageID_s* MessageID;	/* {0,1} nada */
  struct zx_a_RelatesTo_s* RelatesTo;	/* {0,1} nada */
  struct zx_a_ReplyTo_s* ReplyTo;	/* {0,1} nada */
  struct zx_a_From_s* From;	/* {0,1} nada */
  struct zx_a_FaultTo_s* FaultTo;	/* {0,1} nada */
  struct zx_a_To_s* To;	/* {0,1} nada */
  struct zx_a_Action_s* Action;	/* {0,1} nada */
  struct zx_a_ReferenceParameters_s* ReferenceParameters;	/* {0,1} nada */
  struct zx_sbf_Framework_s* Framework;	/* {0,1} nada */
  struct zx_b_Framework_s* b_Framework;	/* {0,1} nada */
  struct zx_b_Sender_s* Sender;	/* {0,1} nada */
  struct zx_b_TargetIdentity_s* TargetIdentity;	/* {0,1} nada */
  struct zx_b_CredentialsContext_s* CredentialsContext;	/* {0,1} nada */
  struct zx_b_EndpointUpdate_s* EndpointUpdate;	/* {0,1} nada */
  struct zx_b_Timeout_s* Timeout;	/* {0,1} nada */
  struct zx_b_ProcessingContext_s* ProcessingContext;	/* {0,1} nada */
  struct zx_b_Consent_s* Consent;	/* {0,1} nada */
  struct zx_b_UsageDirective_s* UsageDirective;	/* {0,1} nada */
  struct zx_b_ApplicationEPR_s* ApplicationEPR;	/* {0,1} nada */
  struct zx_b_UserInteraction_s* UserInteraction;	/* {0,1} nada */
  struct zx_b_RedirectRequest_s* RedirectRequest;	/* {0,1} nada */
  struct zx_b12_Correlation_s* Correlation;	/* {0,1} nada */
  struct zx_b12_Provider_s* Provider;	/* {0,1} nada */
  struct zx_b12_ProcessingContext_s* b12_ProcessingContext;	/* {0,1} nada */
  struct zx_b12_Consent_s* b12_Consent;	/* {0,1} nada */
  struct zx_b12_UsageDirective_s* b12_UsageDirective;	/* {0,1} nada */
  struct zx_mm7_TransactionID_s* TransactionID;	/* {0,1} nada */
  struct zx_wsse_Security_s* Security;	/* {0,1} nada */
};

#ifdef ZX_ENA_GETPUT

struct zx_paos_Request_s* zx_e_Header_GET_Request(struct zx_e_Header_s* x, int n);
struct zx_paos_Response_s* zx_e_Header_GET_Response(struct zx_e_Header_s* x, int n);
struct zx_ecp_Request_s* zx_e_Header_GET_ecp_Request(struct zx_e_Header_s* x, int n);
struct zx_ecp_Response_s* zx_e_Header_GET_ecp_Response(struct zx_e_Header_s* x, int n);
struct zx_ecp_RelayState_s* zx_e_Header_GET_RelayState(struct zx_e_Header_s* x, int n);
struct zx_a_MessageID_s* zx_e_Header_GET_MessageID(struct zx_e_Header_s* x, int n);
struct zx_a_RelatesTo_s* zx_e_Header_GET_RelatesTo(struct zx_e_Header_s* x, int n);
struct zx_a_ReplyTo_s* zx_e_Header_GET_ReplyTo(struct zx_e_Header_s* x, int n);
struct zx_a_From_s* zx_e_Header_GET_From(struct zx_e_Header_s* x, int n);
struct zx_a_FaultTo_s* zx_e_Header_GET_FaultTo(struct zx_e_Header_s* x, int n);
struct zx_a_To_s* zx_e_Header_GET_To(struct zx_e_Header_s* x, int n);
struct zx_a_Action_s* zx_e_Header_GET_Action(struct zx_e_Header_s* x, int n);
struct zx_a_ReferenceParameters_s* zx_e_Header_GET_ReferenceParameters(struct zx_e_Header_s* x, int n);
struct zx_sbf_Framework_s* zx_e_Header_GET_Framework(struct zx_e_Header_s* x, int n);
struct zx_b_Framework_s* zx_e_Header_GET_b_Framework(struct zx_e_Header_s* x, int n);
struct zx_b_Sender_s* zx_e_Header_GET_Sender(struct zx_e_Header_s* x, int n);
struct zx_b_TargetIdentity_s* zx_e_Header_GET_TargetIdentity(struct zx_e_Header_s* x, int n);
struct zx_b_CredentialsContext_s* zx_e_Header_GET_CredentialsContext(struct zx_e_Header_s* x, int n);
struct zx_b_EndpointUpdate_s* zx_e_Header_GET_EndpointUpdate(struct zx_e_Header_s* x, int n);
struct zx_b_Timeout_s* zx_e_Header_GET_Timeout(struct zx_e_Header_s* x, int n);
struct zx_b_ProcessingContext_s* zx_e_Header_GET_ProcessingContext(struct zx_e_Header_s* x, int n);
struct zx_b_Consent_s* zx_e_Header_GET_Consent(struct zx_e_Header_s* x, int n);
struct zx_b_UsageDirective_s* zx_e_Header_GET_UsageDirective(struct zx_e_Header_s* x, int n);
struct zx_b_ApplicationEPR_s* zx_e_Header_GET_ApplicationEPR(struct zx_e_Header_s* x, int n);
struct zx_b_UserInteraction_s* zx_e_Header_GET_UserInteraction(struct zx_e_Header_s* x, int n);
struct zx_b_RedirectRequest_s* zx_e_Header_GET_RedirectRequest(struct zx_e_Header_s* x, int n);
struct zx_b12_Correlation_s* zx_e_Header_GET_Correlation(struct zx_e_Header_s* x, int n);
struct zx_b12_Provider_s* zx_e_Header_GET_Provider(struct zx_e_Header_s* x, int n);
struct zx_b12_ProcessingContext_s* zx_e_Header_GET_b12_ProcessingContext(struct zx_e_Header_s* x, int n);
struct zx_b12_Consent_s* zx_e_Header_GET_b12_Consent(struct zx_e_Header_s* x, int n);
struct zx_b12_UsageDirective_s* zx_e_Header_GET_b12_UsageDirective(struct zx_e_Header_s* x, int n);
struct zx_mm7_TransactionID_s* zx_e_Header_GET_TransactionID(struct zx_e_Header_s* x, int n);
struct zx_wsse_Security_s* zx_e_Header_GET_Security(struct zx_e_Header_s* x, int n);

int zx_e_Header_NUM_Request(struct zx_e_Header_s* x);
int zx_e_Header_NUM_Response(struct zx_e_Header_s* x);
int zx_e_Header_NUM_ecp_Request(struct zx_e_Header_s* x);
int zx_e_Header_NUM_ecp_Response(struct zx_e_Header_s* x);
int zx_e_Header_NUM_RelayState(struct zx_e_Header_s* x);
int zx_e_Header_NUM_MessageID(struct zx_e_Header_s* x);
int zx_e_Header_NUM_RelatesTo(struct zx_e_Header_s* x);
int zx_e_Header_NUM_ReplyTo(struct zx_e_Header_s* x);
int zx_e_Header_NUM_From(struct zx_e_Header_s* x);
int zx_e_Header_NUM_FaultTo(struct zx_e_Header_s* x);
int zx_e_Header_NUM_To(struct zx_e_Header_s* x);
int zx_e_Header_NUM_Action(struct zx_e_Header_s* x);
int zx_e_Header_NUM_ReferenceParameters(struct zx_e_Header_s* x);
int zx_e_Header_NUM_Framework(struct zx_e_Header_s* x);
int zx_e_Header_NUM_b_Framework(struct zx_e_Header_s* x);
int zx_e_Header_NUM_Sender(struct zx_e_Header_s* x);
int zx_e_Header_NUM_TargetIdentity(struct zx_e_Header_s* x);
int zx_e_Header_NUM_CredentialsContext(struct zx_e_Header_s* x);
int zx_e_Header_NUM_EndpointUpdate(struct zx_e_Header_s* x);
int zx_e_Header_NUM_Timeout(struct zx_e_Header_s* x);
int zx_e_Header_NUM_ProcessingContext(struct zx_e_Header_s* x);
int zx_e_Header_NUM_Consent(struct zx_e_Header_s* x);
int zx_e_Header_NUM_UsageDirective(struct zx_e_Header_s* x);
int zx_e_Header_NUM_ApplicationEPR(struct zx_e_Header_s* x);
int zx_e_Header_NUM_UserInteraction(struct zx_e_Header_s* x);
int zx_e_Header_NUM_RedirectRequest(struct zx_e_Header_s* x);
int zx_e_Header_NUM_Correlation(struct zx_e_Header_s* x);
int zx_e_Header_NUM_Provider(struct zx_e_Header_s* x);
int zx_e_Header_NUM_b12_ProcessingContext(struct zx_e_Header_s* x);
int zx_e_Header_NUM_b12_Consent(struct zx_e_Header_s* x);
int zx_e_Header_NUM_b12_UsageDirective(struct zx_e_Header_s* x);
int zx_e_Header_NUM_TransactionID(struct zx_e_Header_s* x);
int zx_e_Header_NUM_Security(struct zx_e_Header_s* x);

struct zx_paos_Request_s* zx_e_Header_POP_Request(struct zx_e_Header_s* x);
struct zx_paos_Response_s* zx_e_Header_POP_Response(struct zx_e_Header_s* x);
struct zx_ecp_Request_s* zx_e_Header_POP_ecp_Request(struct zx_e_Header_s* x);
struct zx_ecp_Response_s* zx_e_Header_POP_ecp_Response(struct zx_e_Header_s* x);
struct zx_ecp_RelayState_s* zx_e_Header_POP_RelayState(struct zx_e_Header_s* x);
struct zx_a_MessageID_s* zx_e_Header_POP_MessageID(struct zx_e_Header_s* x);
struct zx_a_RelatesTo_s* zx_e_Header_POP_RelatesTo(struct zx_e_Header_s* x);
struct zx_a_ReplyTo_s* zx_e_Header_POP_ReplyTo(struct zx_e_Header_s* x);
struct zx_a_From_s* zx_e_Header_POP_From(struct zx_e_Header_s* x);
struct zx_a_FaultTo_s* zx_e_Header_POP_FaultTo(struct zx_e_Header_s* x);
struct zx_a_To_s* zx_e_Header_POP_To(struct zx_e_Header_s* x);
struct zx_a_Action_s* zx_e_Header_POP_Action(struct zx_e_Header_s* x);
struct zx_a_ReferenceParameters_s* zx_e_Header_POP_ReferenceParameters(struct zx_e_Header_s* x);
struct zx_sbf_Framework_s* zx_e_Header_POP_Framework(struct zx_e_Header_s* x);
struct zx_b_Framework_s* zx_e_Header_POP_b_Framework(struct zx_e_Header_s* x);
struct zx_b_Sender_s* zx_e_Header_POP_Sender(struct zx_e_Header_s* x);
struct zx_b_TargetIdentity_s* zx_e_Header_POP_TargetIdentity(struct zx_e_Header_s* x);
struct zx_b_CredentialsContext_s* zx_e_Header_POP_CredentialsContext(struct zx_e_Header_s* x);
struct zx_b_EndpointUpdate_s* zx_e_Header_POP_EndpointUpdate(struct zx_e_Header_s* x);
struct zx_b_Timeout_s* zx_e_Header_POP_Timeout(struct zx_e_Header_s* x);
struct zx_b_ProcessingContext_s* zx_e_Header_POP_ProcessingContext(struct zx_e_Header_s* x);
struct zx_b_Consent_s* zx_e_Header_POP_Consent(struct zx_e_Header_s* x);
struct zx_b_UsageDirective_s* zx_e_Header_POP_UsageDirective(struct zx_e_Header_s* x);
struct zx_b_ApplicationEPR_s* zx_e_Header_POP_ApplicationEPR(struct zx_e_Header_s* x);
struct zx_b_UserInteraction_s* zx_e_Header_POP_UserInteraction(struct zx_e_Header_s* x);
struct zx_b_RedirectRequest_s* zx_e_Header_POP_RedirectRequest(struct zx_e_Header_s* x);
struct zx_b12_Correlation_s* zx_e_Header_POP_Correlation(struct zx_e_Header_s* x);
struct zx_b12_Provider_s* zx_e_Header_POP_Provider(struct zx_e_Header_s* x);
struct zx_b12_ProcessingContext_s* zx_e_Header_POP_b12_ProcessingContext(struct zx_e_Header_s* x);
struct zx_b12_Consent_s* zx_e_Header_POP_b12_Consent(struct zx_e_Header_s* x);
struct zx_b12_UsageDirective_s* zx_e_Header_POP_b12_UsageDirective(struct zx_e_Header_s* x);
struct zx_mm7_TransactionID_s* zx_e_Header_POP_TransactionID(struct zx_e_Header_s* x);
struct zx_wsse_Security_s* zx_e_Header_POP_Security(struct zx_e_Header_s* x);

void zx_e_Header_PUSH_Request(struct zx_e_Header_s* x, struct zx_paos_Request_s* y);
void zx_e_Header_PUSH_Response(struct zx_e_Header_s* x, struct zx_paos_Response_s* y);
void zx_e_Header_PUSH_ecp_Request(struct zx_e_Header_s* x, struct zx_ecp_Request_s* y);
void zx_e_Header_PUSH_ecp_Response(struct zx_e_Header_s* x, struct zx_ecp_Response_s* y);
void zx_e_Header_PUSH_RelayState(struct zx_e_Header_s* x, struct zx_ecp_RelayState_s* y);
void zx_e_Header_PUSH_MessageID(struct zx_e_Header_s* x, struct zx_a_MessageID_s* y);
void zx_e_Header_PUSH_RelatesTo(struct zx_e_Header_s* x, struct zx_a_RelatesTo_s* y);
void zx_e_Header_PUSH_ReplyTo(struct zx_e_Header_s* x, struct zx_a_ReplyTo_s* y);
void zx_e_Header_PUSH_From(struct zx_e_Header_s* x, struct zx_a_From_s* y);
void zx_e_Header_PUSH_FaultTo(struct zx_e_Header_s* x, struct zx_a_FaultTo_s* y);
void zx_e_Header_PUSH_To(struct zx_e_Header_s* x, struct zx_a_To_s* y);
void zx_e_Header_PUSH_Action(struct zx_e_Header_s* x, struct zx_a_Action_s* y);
void zx_e_Header_PUSH_ReferenceParameters(struct zx_e_Header_s* x, struct zx_a_ReferenceParameters_s* y);
void zx_e_Header_PUSH_Framework(struct zx_e_Header_s* x, struct zx_sbf_Framework_s* y);
void zx_e_Header_PUSH_b_Framework(struct zx_e_Header_s* x, struct zx_b_Framework_s* y);
void zx_e_Header_PUSH_Sender(struct zx_e_Header_s* x, struct zx_b_Sender_s* y);
void zx_e_Header_PUSH_TargetIdentity(struct zx_e_Header_s* x, struct zx_b_TargetIdentity_s* y);
void zx_e_Header_PUSH_CredentialsContext(struct zx_e_Header_s* x, struct zx_b_CredentialsContext_s* y);
void zx_e_Header_PUSH_EndpointUpdate(struct zx_e_Header_s* x, struct zx_b_EndpointUpdate_s* y);
void zx_e_Header_PUSH_Timeout(struct zx_e_Header_s* x, struct zx_b_Timeout_s* y);
void zx_e_Header_PUSH_ProcessingContext(struct zx_e_Header_s* x, struct zx_b_ProcessingContext_s* y);
void zx_e_Header_PUSH_Consent(struct zx_e_Header_s* x, struct zx_b_Consent_s* y);
void zx_e_Header_PUSH_UsageDirective(struct zx_e_Header_s* x, struct zx_b_UsageDirective_s* y);
void zx_e_Header_PUSH_ApplicationEPR(struct zx_e_Header_s* x, struct zx_b_ApplicationEPR_s* y);
void zx_e_Header_PUSH_UserInteraction(struct zx_e_Header_s* x, struct zx_b_UserInteraction_s* y);
void zx_e_Header_PUSH_RedirectRequest(struct zx_e_Header_s* x, struct zx_b_RedirectRequest_s* y);
void zx_e_Header_PUSH_Correlation(struct zx_e_Header_s* x, struct zx_b12_Correlation_s* y);
void zx_e_Header_PUSH_Provider(struct zx_e_Header_s* x, struct zx_b12_Provider_s* y);
void zx_e_Header_PUSH_b12_ProcessingContext(struct zx_e_Header_s* x, struct zx_b12_ProcessingContext_s* y);
void zx_e_Header_PUSH_b12_Consent(struct zx_e_Header_s* x, struct zx_b12_Consent_s* y);
void zx_e_Header_PUSH_b12_UsageDirective(struct zx_e_Header_s* x, struct zx_b12_UsageDirective_s* y);
void zx_e_Header_PUSH_TransactionID(struct zx_e_Header_s* x, struct zx_mm7_TransactionID_s* y);
void zx_e_Header_PUSH_Security(struct zx_e_Header_s* x, struct zx_wsse_Security_s* y);


void zx_e_Header_PUT_Request(struct zx_e_Header_s* x, int n, struct zx_paos_Request_s* y);
void zx_e_Header_PUT_Response(struct zx_e_Header_s* x, int n, struct zx_paos_Response_s* y);
void zx_e_Header_PUT_ecp_Request(struct zx_e_Header_s* x, int n, struct zx_ecp_Request_s* y);
void zx_e_Header_PUT_ecp_Response(struct zx_e_Header_s* x, int n, struct zx_ecp_Response_s* y);
void zx_e_Header_PUT_RelayState(struct zx_e_Header_s* x, int n, struct zx_ecp_RelayState_s* y);
void zx_e_Header_PUT_MessageID(struct zx_e_Header_s* x, int n, struct zx_a_MessageID_s* y);
void zx_e_Header_PUT_RelatesTo(struct zx_e_Header_s* x, int n, struct zx_a_RelatesTo_s* y);
void zx_e_Header_PUT_ReplyTo(struct zx_e_Header_s* x, int n, struct zx_a_ReplyTo_s* y);
void zx_e_Header_PUT_From(struct zx_e_Header_s* x, int n, struct zx_a_From_s* y);
void zx_e_Header_PUT_FaultTo(struct zx_e_Header_s* x, int n, struct zx_a_FaultTo_s* y);
void zx_e_Header_PUT_To(struct zx_e_Header_s* x, int n, struct zx_a_To_s* y);
void zx_e_Header_PUT_Action(struct zx_e_Header_s* x, int n, struct zx_a_Action_s* y);
void zx_e_Header_PUT_ReferenceParameters(struct zx_e_Header_s* x, int n, struct zx_a_ReferenceParameters_s* y);
void zx_e_Header_PUT_Framework(struct zx_e_Header_s* x, int n, struct zx_sbf_Framework_s* y);
void zx_e_Header_PUT_b_Framework(struct zx_e_Header_s* x, int n, struct zx_b_Framework_s* y);
void zx_e_Header_PUT_Sender(struct zx_e_Header_s* x, int n, struct zx_b_Sender_s* y);
void zx_e_Header_PUT_TargetIdentity(struct zx_e_Header_s* x, int n, struct zx_b_TargetIdentity_s* y);
void zx_e_Header_PUT_CredentialsContext(struct zx_e_Header_s* x, int n, struct zx_b_CredentialsContext_s* y);
void zx_e_Header_PUT_EndpointUpdate(struct zx_e_Header_s* x, int n, struct zx_b_EndpointUpdate_s* y);
void zx_e_Header_PUT_Timeout(struct zx_e_Header_s* x, int n, struct zx_b_Timeout_s* y);
void zx_e_Header_PUT_ProcessingContext(struct zx_e_Header_s* x, int n, struct zx_b_ProcessingContext_s* y);
void zx_e_Header_PUT_Consent(struct zx_e_Header_s* x, int n, struct zx_b_Consent_s* y);
void zx_e_Header_PUT_UsageDirective(struct zx_e_Header_s* x, int n, struct zx_b_UsageDirective_s* y);
void zx_e_Header_PUT_ApplicationEPR(struct zx_e_Header_s* x, int n, struct zx_b_ApplicationEPR_s* y);
void zx_e_Header_PUT_UserInteraction(struct zx_e_Header_s* x, int n, struct zx_b_UserInteraction_s* y);
void zx_e_Header_PUT_RedirectRequest(struct zx_e_Header_s* x, int n, struct zx_b_RedirectRequest_s* y);
void zx_e_Header_PUT_Correlation(struct zx_e_Header_s* x, int n, struct zx_b12_Correlation_s* y);
void zx_e_Header_PUT_Provider(struct zx_e_Header_s* x, int n, struct zx_b12_Provider_s* y);
void zx_e_Header_PUT_b12_ProcessingContext(struct zx_e_Header_s* x, int n, struct zx_b12_ProcessingContext_s* y);
void zx_e_Header_PUT_b12_Consent(struct zx_e_Header_s* x, int n, struct zx_b12_Consent_s* y);
void zx_e_Header_PUT_b12_UsageDirective(struct zx_e_Header_s* x, int n, struct zx_b12_UsageDirective_s* y);
void zx_e_Header_PUT_TransactionID(struct zx_e_Header_s* x, int n, struct zx_mm7_TransactionID_s* y);
void zx_e_Header_PUT_Security(struct zx_e_Header_s* x, int n, struct zx_wsse_Security_s* y);

void zx_e_Header_ADD_Request(struct zx_e_Header_s* x, int n, struct zx_paos_Request_s* z);
void zx_e_Header_ADD_Response(struct zx_e_Header_s* x, int n, struct zx_paos_Response_s* z);
void zx_e_Header_ADD_ecp_Request(struct zx_e_Header_s* x, int n, struct zx_ecp_Request_s* z);
void zx_e_Header_ADD_ecp_Response(struct zx_e_Header_s* x, int n, struct zx_ecp_Response_s* z);
void zx_e_Header_ADD_RelayState(struct zx_e_Header_s* x, int n, struct zx_ecp_RelayState_s* z);
void zx_e_Header_ADD_MessageID(struct zx_e_Header_s* x, int n, struct zx_a_MessageID_s* z);
void zx_e_Header_ADD_RelatesTo(struct zx_e_Header_s* x, int n, struct zx_a_RelatesTo_s* z);
void zx_e_Header_ADD_ReplyTo(struct zx_e_Header_s* x, int n, struct zx_a_ReplyTo_s* z);
void zx_e_Header_ADD_From(struct zx_e_Header_s* x, int n, struct zx_a_From_s* z);
void zx_e_Header_ADD_FaultTo(struct zx_e_Header_s* x, int n, struct zx_a_FaultTo_s* z);
void zx_e_Header_ADD_To(struct zx_e_Header_s* x, int n, struct zx_a_To_s* z);
void zx_e_Header_ADD_Action(struct zx_e_Header_s* x, int n, struct zx_a_Action_s* z);
void zx_e_Header_ADD_ReferenceParameters(struct zx_e_Header_s* x, int n, struct zx_a_ReferenceParameters_s* z);
void zx_e_Header_ADD_Framework(struct zx_e_Header_s* x, int n, struct zx_sbf_Framework_s* z);
void zx_e_Header_ADD_b_Framework(struct zx_e_Header_s* x, int n, struct zx_b_Framework_s* z);
void zx_e_Header_ADD_Sender(struct zx_e_Header_s* x, int n, struct zx_b_Sender_s* z);
void zx_e_Header_ADD_TargetIdentity(struct zx_e_Header_s* x, int n, struct zx_b_TargetIdentity_s* z);
void zx_e_Header_ADD_CredentialsContext(struct zx_e_Header_s* x, int n, struct zx_b_CredentialsContext_s* z);
void zx_e_Header_ADD_EndpointUpdate(struct zx_e_Header_s* x, int n, struct zx_b_EndpointUpdate_s* z);
void zx_e_Header_ADD_Timeout(struct zx_e_Header_s* x, int n, struct zx_b_Timeout_s* z);
void zx_e_Header_ADD_ProcessingContext(struct zx_e_Header_s* x, int n, struct zx_b_ProcessingContext_s* z);
void zx_e_Header_ADD_Consent(struct zx_e_Header_s* x, int n, struct zx_b_Consent_s* z);
void zx_e_Header_ADD_UsageDirective(struct zx_e_Header_s* x, int n, struct zx_b_UsageDirective_s* z);
void zx_e_Header_ADD_ApplicationEPR(struct zx_e_Header_s* x, int n, struct zx_b_ApplicationEPR_s* z);
void zx_e_Header_ADD_UserInteraction(struct zx_e_Header_s* x, int n, struct zx_b_UserInteraction_s* z);
void zx_e_Header_ADD_RedirectRequest(struct zx_e_Header_s* x, int n, struct zx_b_RedirectRequest_s* z);
void zx_e_Header_ADD_Correlation(struct zx_e_Header_s* x, int n, struct zx_b12_Correlation_s* z);
void zx_e_Header_ADD_Provider(struct zx_e_Header_s* x, int n, struct zx_b12_Provider_s* z);
void zx_e_Header_ADD_b12_ProcessingContext(struct zx_e_Header_s* x, int n, struct zx_b12_ProcessingContext_s* z);
void zx_e_Header_ADD_b12_Consent(struct zx_e_Header_s* x, int n, struct zx_b12_Consent_s* z);
void zx_e_Header_ADD_b12_UsageDirective(struct zx_e_Header_s* x, int n, struct zx_b12_UsageDirective_s* z);
void zx_e_Header_ADD_TransactionID(struct zx_e_Header_s* x, int n, struct zx_mm7_TransactionID_s* z);
void zx_e_Header_ADD_Security(struct zx_e_Header_s* x, int n, struct zx_wsse_Security_s* z);

void zx_e_Header_DEL_Request(struct zx_e_Header_s* x, int n);
void zx_e_Header_DEL_Response(struct zx_e_Header_s* x, int n);
void zx_e_Header_DEL_ecp_Request(struct zx_e_Header_s* x, int n);
void zx_e_Header_DEL_ecp_Response(struct zx_e_Header_s* x, int n);
void zx_e_Header_DEL_RelayState(struct zx_e_Header_s* x, int n);
void zx_e_Header_DEL_MessageID(struct zx_e_Header_s* x, int n);
void zx_e_Header_DEL_RelatesTo(struct zx_e_Header_s* x, int n);
void zx_e_Header_DEL_ReplyTo(struct zx_e_Header_s* x, int n);
void zx_e_Header_DEL_From(struct zx_e_Header_s* x, int n);
void zx_e_Header_DEL_FaultTo(struct zx_e_Header_s* x, int n);
void zx_e_Header_DEL_To(struct zx_e_Header_s* x, int n);
void zx_e_Header_DEL_Action(struct zx_e_Header_s* x, int n);
void zx_e_Header_DEL_ReferenceParameters(struct zx_e_Header_s* x, int n);
void zx_e_Header_DEL_Framework(struct zx_e_Header_s* x, int n);
void zx_e_Header_DEL_b_Framework(struct zx_e_Header_s* x, int n);
void zx_e_Header_DEL_Sender(struct zx_e_Header_s* x, int n);
void zx_e_Header_DEL_TargetIdentity(struct zx_e_Header_s* x, int n);
void zx_e_Header_DEL_CredentialsContext(struct zx_e_Header_s* x, int n);
void zx_e_Header_DEL_EndpointUpdate(struct zx_e_Header_s* x, int n);
void zx_e_Header_DEL_Timeout(struct zx_e_Header_s* x, int n);
void zx_e_Header_DEL_ProcessingContext(struct zx_e_Header_s* x, int n);
void zx_e_Header_DEL_Consent(struct zx_e_Header_s* x, int n);
void zx_e_Header_DEL_UsageDirective(struct zx_e_Header_s* x, int n);
void zx_e_Header_DEL_ApplicationEPR(struct zx_e_Header_s* x, int n);
void zx_e_Header_DEL_UserInteraction(struct zx_e_Header_s* x, int n);
void zx_e_Header_DEL_RedirectRequest(struct zx_e_Header_s* x, int n);
void zx_e_Header_DEL_Correlation(struct zx_e_Header_s* x, int n);
void zx_e_Header_DEL_Provider(struct zx_e_Header_s* x, int n);
void zx_e_Header_DEL_b12_ProcessingContext(struct zx_e_Header_s* x, int n);
void zx_e_Header_DEL_b12_Consent(struct zx_e_Header_s* x, int n);
void zx_e_Header_DEL_b12_UsageDirective(struct zx_e_Header_s* x, int n);
void zx_e_Header_DEL_TransactionID(struct zx_e_Header_s* x, int n);
void zx_e_Header_DEL_Security(struct zx_e_Header_s* x, int n);

void zx_e_Header_REV_Request(struct zx_e_Header_s* x);
void zx_e_Header_REV_Response(struct zx_e_Header_s* x);
void zx_e_Header_REV_ecp_Request(struct zx_e_Header_s* x);
void zx_e_Header_REV_ecp_Response(struct zx_e_Header_s* x);
void zx_e_Header_REV_RelayState(struct zx_e_Header_s* x);
void zx_e_Header_REV_MessageID(struct zx_e_Header_s* x);
void zx_e_Header_REV_RelatesTo(struct zx_e_Header_s* x);
void zx_e_Header_REV_ReplyTo(struct zx_e_Header_s* x);
void zx_e_Header_REV_From(struct zx_e_Header_s* x);
void zx_e_Header_REV_FaultTo(struct zx_e_Header_s* x);
void zx_e_Header_REV_To(struct zx_e_Header_s* x);
void zx_e_Header_REV_Action(struct zx_e_Header_s* x);
void zx_e_Header_REV_ReferenceParameters(struct zx_e_Header_s* x);
void zx_e_Header_REV_Framework(struct zx_e_Header_s* x);
void zx_e_Header_REV_b_Framework(struct zx_e_Header_s* x);
void zx_e_Header_REV_Sender(struct zx_e_Header_s* x);
void zx_e_Header_REV_TargetIdentity(struct zx_e_Header_s* x);
void zx_e_Header_REV_CredentialsContext(struct zx_e_Header_s* x);
void zx_e_Header_REV_EndpointUpdate(struct zx_e_Header_s* x);
void zx_e_Header_REV_Timeout(struct zx_e_Header_s* x);
void zx_e_Header_REV_ProcessingContext(struct zx_e_Header_s* x);
void zx_e_Header_REV_Consent(struct zx_e_Header_s* x);
void zx_e_Header_REV_UsageDirective(struct zx_e_Header_s* x);
void zx_e_Header_REV_ApplicationEPR(struct zx_e_Header_s* x);
void zx_e_Header_REV_UserInteraction(struct zx_e_Header_s* x);
void zx_e_Header_REV_RedirectRequest(struct zx_e_Header_s* x);
void zx_e_Header_REV_Correlation(struct zx_e_Header_s* x);
void zx_e_Header_REV_Provider(struct zx_e_Header_s* x);
void zx_e_Header_REV_b12_ProcessingContext(struct zx_e_Header_s* x);
void zx_e_Header_REV_b12_Consent(struct zx_e_Header_s* x);
void zx_e_Header_REV_b12_UsageDirective(struct zx_e_Header_s* x);
void zx_e_Header_REV_TransactionID(struct zx_e_Header_s* x);
void zx_e_Header_REV_Security(struct zx_e_Header_s* x);

#endif
/* -------------------------- e_detail -------------------------- */
/* refby( zx_e_Fault_s ) */
#ifndef zx_e_detail_EXT
#define zx_e_detail_EXT
#endif

struct zx_e_detail_s* zx_DEC_e_detail(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_e_detail_s* zx_NEW_e_detail(struct zx_ctx* c);
void zx_FREE_e_detail(struct zx_ctx* c, struct zx_e_detail_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_e_detail_s* zx_DEEP_CLONE_e_detail(struct zx_ctx* c, struct zx_e_detail_s* x, int dup_strs);
void zx_DUP_STRS_e_detail(struct zx_ctx* c, struct zx_e_detail_s* x);
int zx_WALK_SO_e_detail(struct zx_ctx* c, struct zx_e_detail_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_e_detail(struct zx_ctx* c, struct zx_e_detail_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_e_detail(struct zx_ctx* c, struct zx_e_detail_s* x);
int zx_LEN_WO_e_detail(struct zx_ctx* c, struct zx_e_detail_s* x);
char* zx_ENC_SO_e_detail(struct zx_ctx* c, struct zx_e_detail_s* x, char* p);
char* zx_ENC_WO_e_detail(struct zx_ctx* c, struct zx_e_detail_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_e_detail(struct zx_ctx* c, struct zx_e_detail_s* x);
struct zx_str* zx_EASY_ENC_WO_e_detail(struct zx_ctx* c, struct zx_e_detail_s* x);

struct zx_e_detail_s {
  ZX_ELEM_EXT
  zx_e_detail_EXT
};

#ifdef ZX_ENA_GETPUT










#endif

#endif