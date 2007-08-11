/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 1.3.29
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package zxidjava;

public class zxid_conf {
  private long swigCPtr;
  protected boolean swigCMemOwn;

  protected zxid_conf(long cPtr, boolean cMemoryOwn) {
    swigCMemOwn = cMemoryOwn;
    swigCPtr = cPtr;
  }

  protected static long getCPtr(zxid_conf obj) {
    return (obj == null) ? 0 : obj.swigCPtr;
  }

  protected void finalize() {
    delete();
  }

  public void delete() {
    if(swigCPtr != 0 && swigCMemOwn) {
      swigCMemOwn = false;
      zxidjniJNI.delete_zxid_conf(swigCPtr);
    }
    swigCPtr = 0;
  }

  public void setMagic(long value) {
    zxidjniJNI.zxid_conf_magic_set(swigCPtr, value);
  }

  public long getMagic() {
    return zxidjniJNI.zxid_conf_magic_get(swigCPtr);
  }

  public void setCtx(zx_ctx value) {
    zxidjniJNI.zxid_conf_ctx_set(swigCPtr, zx_ctx.getCPtr(value));
  }

  public zx_ctx getCtx() {
    long cPtr = zxidjniJNI.zxid_conf_ctx_get(swigCPtr);
    return (cPtr == 0) ? null : new zx_ctx(cPtr, false);
  }

  public void setCot(zxid_entity value) {
    zxidjniJNI.zxid_conf_cot_set(swigCPtr, zxid_entity.getCPtr(value));
  }

  public zxid_entity getCot() {
    long cPtr = zxidjniJNI.zxid_conf_cot_get(swigCPtr);
    return (cPtr == 0) ? null : new zxid_entity(cPtr, false);
  }

  public void setPath_len(int value) {
    zxidjniJNI.zxid_conf_path_len_set(swigCPtr, value);
  }

  public int getPath_len() {
    return zxidjniJNI.zxid_conf_path_len_get(swigCPtr);
  }

  public void setPath(String value) {
    zxidjniJNI.zxid_conf_path_set(swigCPtr, value);
  }

  public String getPath() {
    return zxidjniJNI.zxid_conf_path_get(swigCPtr);
  }

  public void setUrl(String value) {
    zxidjniJNI.zxid_conf_url_set(swigCPtr, value);
  }

  public String getUrl() {
    return zxidjniJNI.zxid_conf_url_get(swigCPtr);
  }

  public void setCdc_url(String value) {
    zxidjniJNI.zxid_conf_cdc_url_set(swigCPtr, value);
  }

  public String getCdc_url() {
    return zxidjniJNI.zxid_conf_cdc_url_get(swigCPtr);
  }

  public void setCdc_choice(char value) {
    zxidjniJNI.zxid_conf_cdc_choice_set(swigCPtr, value);
  }

  public char getCdc_choice() {
    return zxidjniJNI.zxid_conf_cdc_choice_get(swigCPtr);
  }

  public void setMd_fetch(char value) {
    zxidjniJNI.zxid_conf_md_fetch_set(swigCPtr, value);
  }

  public char getMd_fetch() {
    return zxidjniJNI.zxid_conf_md_fetch_get(swigCPtr);
  }

  public void setMd_populate_cache(char value) {
    zxidjniJNI.zxid_conf_md_populate_cache_set(swigCPtr, value);
  }

  public char getMd_populate_cache() {
    return zxidjniJNI.zxid_conf_md_populate_cache_get(swigCPtr);
  }

  public void setMd_cache_first(char value) {
    zxidjniJNI.zxid_conf_md_cache_first_set(swigCPtr, value);
  }

  public char getMd_cache_first() {
    return zxidjniJNI.zxid_conf_md_cache_first_get(swigCPtr);
  }

  public void setMd_cache_last(char value) {
    zxidjniJNI.zxid_conf_md_cache_last_set(swigCPtr, value);
  }

  public char getMd_cache_last() {
    return zxidjniJNI.zxid_conf_md_cache_last_get(swigCPtr);
  }

  public void setAuthn_req_sign(char value) {
    zxidjniJNI.zxid_conf_authn_req_sign_set(swigCPtr, value);
  }

  public char getAuthn_req_sign() {
    return zxidjniJNI.zxid_conf_authn_req_sign_get(swigCPtr);
  }

  public void setWant_sso_a7n_signed(char value) {
    zxidjniJNI.zxid_conf_want_sso_a7n_signed_set(swigCPtr, value);
  }

  public char getWant_sso_a7n_signed() {
    return zxidjniJNI.zxid_conf_want_sso_a7n_signed_get(swigCPtr);
  }

  public void setAffiliation(String value) {
    zxidjniJNI.zxid_conf_affiliation_set(swigCPtr, value);
  }

  public String getAffiliation() {
    return zxidjniJNI.zxid_conf_affiliation_get(swigCPtr);
  }

  public void setNice_name(String value) {
    zxidjniJNI.zxid_conf_nice_name_set(swigCPtr, value);
  }

  public String getNice_name() {
    return zxidjniJNI.zxid_conf_nice_name_get(swigCPtr);
  }

  public void setSes_arch_dir(String value) {
    zxidjniJNI.zxid_conf_ses_arch_dir_set(swigCPtr, value);
  }

  public String getSes_arch_dir() {
    return zxidjniJNI.zxid_conf_ses_arch_dir_get(swigCPtr);
  }

  public void setLog_err(char value) {
    zxidjniJNI.zxid_conf_log_err_set(swigCPtr, value);
  }

  public char getLog_err() {
    return zxidjniJNI.zxid_conf_log_err_get(swigCPtr);
  }

  public void setLog_act(char value) {
    zxidjniJNI.zxid_conf_log_act_set(swigCPtr, value);
  }

  public char getLog_act() {
    return zxidjniJNI.zxid_conf_log_act_get(swigCPtr);
  }

  public void setLog_issue_a7n(char value) {
    zxidjniJNI.zxid_conf_log_issue_a7n_set(swigCPtr, value);
  }

  public char getLog_issue_a7n() {
    return zxidjniJNI.zxid_conf_log_issue_a7n_get(swigCPtr);
  }

  public void setLog_issue_msg(char value) {
    zxidjniJNI.zxid_conf_log_issue_msg_set(swigCPtr, value);
  }

  public char getLog_issue_msg() {
    return zxidjniJNI.zxid_conf_log_issue_msg_get(swigCPtr);
  }

  public void setLog_rely_a7n(char value) {
    zxidjniJNI.zxid_conf_log_rely_a7n_set(swigCPtr, value);
  }

  public char getLog_rely_a7n() {
    return zxidjniJNI.zxid_conf_log_rely_a7n_get(swigCPtr);
  }

  public void setLog_rely_msg(char value) {
    zxidjniJNI.zxid_conf_log_rely_msg_set(swigCPtr, value);
  }

  public char getLog_rely_msg() {
    return zxidjniJNI.zxid_conf_log_rely_msg_get(swigCPtr);
  }

  public void setLog_err_in_act(char value) {
    zxidjniJNI.zxid_conf_log_err_in_act_set(swigCPtr, value);
  }

  public char getLog_err_in_act() {
    return zxidjniJNI.zxid_conf_log_err_in_act_get(swigCPtr);
  }

  public void setLog_sigfail_is_err(char value) {
    zxidjniJNI.zxid_conf_log_sigfail_is_err_set(swigCPtr, value);
  }

  public char getLog_sigfail_is_err() {
    return zxidjniJNI.zxid_conf_log_sigfail_is_err_get(swigCPtr);
  }

  public void setSig_fatal(char value) {
    zxidjniJNI.zxid_conf_sig_fatal_set(swigCPtr, value);
  }

  public char getSig_fatal() {
    return zxidjniJNI.zxid_conf_sig_fatal_get(swigCPtr);
  }

  public void setNosig_fatal(char value) {
    zxidjniJNI.zxid_conf_nosig_fatal_set(swigCPtr, value);
  }

  public char getNosig_fatal() {
    return zxidjniJNI.zxid_conf_nosig_fatal_get(swigCPtr);
  }

  public void setTimeout_fatal(char value) {
    zxidjniJNI.zxid_conf_timeout_fatal_set(swigCPtr, value);
  }

  public char getTimeout_fatal() {
    return zxidjniJNI.zxid_conf_timeout_fatal_get(swigCPtr);
  }

  public void setAudience_fatal(char value) {
    zxidjniJNI.zxid_conf_audience_fatal_set(swigCPtr, value);
  }

  public char getAudience_fatal() {
    return zxidjniJNI.zxid_conf_audience_fatal_get(swigCPtr);
  }

  public void setDup_a7n_fatal(char value) {
    zxidjniJNI.zxid_conf_dup_a7n_fatal_set(swigCPtr, value);
  }

  public char getDup_a7n_fatal() {
    return zxidjniJNI.zxid_conf_dup_a7n_fatal_get(swigCPtr);
  }

  public void setDup_msg_fatal(char value) {
    zxidjniJNI.zxid_conf_dup_msg_fatal_set(swigCPtr, value);
  }

  public char getDup_msg_fatal() {
    return zxidjniJNI.zxid_conf_dup_msg_fatal_get(swigCPtr);
  }

  public void setBefore_slop(int value) {
    zxidjniJNI.zxid_conf_before_slop_set(swigCPtr, value);
  }

  public int getBefore_slop() {
    return zxidjniJNI.zxid_conf_before_slop_get(swigCPtr);
  }

  public void setAfter_slop(int value) {
    zxidjniJNI.zxid_conf_after_slop_set(swigCPtr, value);
  }

  public int getAfter_slop() {
    return zxidjniJNI.zxid_conf_after_slop_get(swigCPtr);
  }

  public void setMax_soap_retry(int value) {
    zxidjniJNI.zxid_conf_max_soap_retry_set(swigCPtr, value);
  }

  public int getMax_soap_retry() {
    return zxidjniJNI.zxid_conf_max_soap_retry_get(swigCPtr);
  }

  public void setIdp_sel_start(String value) {
    zxidjniJNI.zxid_conf_idp_sel_start_set(swigCPtr, value);
  }

  public String getIdp_sel_start() {
    return zxidjniJNI.zxid_conf_idp_sel_start_get(swigCPtr);
  }

  public void setIdp_sel_new_idp(String value) {
    zxidjniJNI.zxid_conf_idp_sel_new_idp_set(swigCPtr, value);
  }

  public String getIdp_sel_new_idp() {
    return zxidjniJNI.zxid_conf_idp_sel_new_idp_get(swigCPtr);
  }

  public void setIdp_sel_our_eid(String value) {
    zxidjniJNI.zxid_conf_idp_sel_our_eid_set(swigCPtr, value);
  }

  public String getIdp_sel_our_eid() {
    return zxidjniJNI.zxid_conf_idp_sel_our_eid_get(swigCPtr);
  }

  public void setIdp_sel_tech_user(String value) {
    zxidjniJNI.zxid_conf_idp_sel_tech_user_set(swigCPtr, value);
  }

  public String getIdp_sel_tech_user() {
    return zxidjniJNI.zxid_conf_idp_sel_tech_user_get(swigCPtr);
  }

  public void setIdp_sel_tech_site(String value) {
    zxidjniJNI.zxid_conf_idp_sel_tech_site_set(swigCPtr, value);
  }

  public String getIdp_sel_tech_site() {
    return zxidjniJNI.zxid_conf_idp_sel_tech_site_get(swigCPtr);
  }

  public void setIdp_sel_footer(String value) {
    zxidjniJNI.zxid_conf_idp_sel_footer_set(swigCPtr, value);
  }

  public String getIdp_sel_footer() {
    return zxidjniJNI.zxid_conf_idp_sel_footer_get(swigCPtr);
  }

  public void setIdp_sel_end(String value) {
    zxidjniJNI.zxid_conf_idp_sel_end_set(swigCPtr, value);
  }

  public String getIdp_sel_end() {
    return zxidjniJNI.zxid_conf_idp_sel_end_get(swigCPtr);
  }

  public void setMgmt_start(String value) {
    zxidjniJNI.zxid_conf_mgmt_start_set(swigCPtr, value);
  }

  public String getMgmt_start() {
    return zxidjniJNI.zxid_conf_mgmt_start_get(swigCPtr);
  }

  public void setMgmt_logout(String value) {
    zxidjniJNI.zxid_conf_mgmt_logout_set(swigCPtr, value);
  }

  public String getMgmt_logout() {
    return zxidjniJNI.zxid_conf_mgmt_logout_get(swigCPtr);
  }

  public void setMgmt_defed(String value) {
    zxidjniJNI.zxid_conf_mgmt_defed_set(swigCPtr, value);
  }

  public String getMgmt_defed() {
    return zxidjniJNI.zxid_conf_mgmt_defed_get(swigCPtr);
  }

  public void setMgmt_footer(String value) {
    zxidjniJNI.zxid_conf_mgmt_footer_set(swigCPtr, value);
  }

  public String getMgmt_footer() {
    return zxidjniJNI.zxid_conf_mgmt_footer_get(swigCPtr);
  }

  public void setMgmt_end(String value) {
    zxidjniJNI.zxid_conf_mgmt_end_set(swigCPtr, value);
  }

  public String getMgmt_end() {
    return zxidjniJNI.zxid_conf_mgmt_end_get(swigCPtr);
  }

  public zxid_conf() {
    this(zxidjniJNI.new_zxid_conf(), true);
  }

}