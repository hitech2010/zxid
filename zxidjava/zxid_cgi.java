/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 1.3.29
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package zxidjava;

public class zxid_cgi {
  private long swigCPtr;
  protected boolean swigCMemOwn;

  protected zxid_cgi(long cPtr, boolean cMemoryOwn) {
    swigCMemOwn = cMemoryOwn;
    swigCPtr = cPtr;
  }

  protected static long getCPtr(zxid_cgi obj) {
    return (obj == null) ? 0 : obj.swigCPtr;
  }

  protected void finalize() {
    delete();
  }

  public void delete() {
    if(swigCPtr != 0 && swigCMemOwn) {
      swigCMemOwn = false;
      zxidjniJNI.delete_zxid_cgi(swigCPtr);
    }
    swigCPtr = 0;
  }

  public void setMagic(long value) {
    zxidjniJNI.zxid_cgi_magic_set(swigCPtr, value);
  }

  public long getMagic() {
    return zxidjniJNI.zxid_cgi_magic_get(swigCPtr);
  }

  public void setOp(char value) {
    zxidjniJNI.zxid_cgi_op_set(swigCPtr, value);
  }

  public char getOp() {
    return zxidjniJNI.zxid_cgi_op_get(swigCPtr);
  }

  public void setPr_ix(char value) {
    zxidjniJNI.zxid_cgi_pr_ix_set(swigCPtr, value);
  }

  public char getPr_ix() {
    return zxidjniJNI.zxid_cgi_pr_ix_get(swigCPtr);
  }

  public void setAllow_create(char value) {
    zxidjniJNI.zxid_cgi_allow_create_set(swigCPtr, value);
  }

  public char getAllow_create() {
    return zxidjniJNI.zxid_cgi_allow_create_get(swigCPtr);
  }

  public void setIspassive(char value) {
    zxidjniJNI.zxid_cgi_ispassive_set(swigCPtr, value);
  }

  public char getIspassive() {
    return zxidjniJNI.zxid_cgi_ispassive_get(swigCPtr);
  }

  public void setForce_authn(char value) {
    zxidjniJNI.zxid_cgi_force_authn_set(swigCPtr, value);
  }

  public char getForce_authn() {
    return zxidjniJNI.zxid_cgi_force_authn_get(swigCPtr);
  }

  public void setSid(String value) {
    zxidjniJNI.zxid_cgi_sid_set(swigCPtr, value);
  }

  public String getSid() {
    return zxidjniJNI.zxid_cgi_sid_get(swigCPtr);
  }

  public void setNid(String value) {
    zxidjniJNI.zxid_cgi_nid_set(swigCPtr, value);
  }

  public String getNid() {
    return zxidjniJNI.zxid_cgi_nid_get(swigCPtr);
  }

  public void setUser(String value) {
    zxidjniJNI.zxid_cgi_user_set(swigCPtr, value);
  }

  public String getUser() {
    return zxidjniJNI.zxid_cgi_user_get(swigCPtr);
  }

  public void setPw(String value) {
    zxidjniJNI.zxid_cgi_pw_set(swigCPtr, value);
  }

  public String getPw() {
    return zxidjniJNI.zxid_cgi_pw_get(swigCPtr);
  }

  public void setCdc(String value) {
    zxidjniJNI.zxid_cgi_cdc_set(swigCPtr, value);
  }

  public String getCdc() {
    return zxidjniJNI.zxid_cgi_cdc_get(swigCPtr);
  }

  public void setEid(String value) {
    zxidjniJNI.zxid_cgi_eid_set(swigCPtr, value);
  }

  public String getEid() {
    return zxidjniJNI.zxid_cgi_eid_get(swigCPtr);
  }

  public void setNid_fmt(String value) {
    zxidjniJNI.zxid_cgi_nid_fmt_set(swigCPtr, value);
  }

  public String getNid_fmt() {
    return zxidjniJNI.zxid_cgi_nid_fmt_get(swigCPtr);
  }

  public void setAffil(String value) {
    zxidjniJNI.zxid_cgi_affil_set(swigCPtr, value);
  }

  public String getAffil() {
    return zxidjniJNI.zxid_cgi_affil_get(swigCPtr);
  }

  public void setConsent(String value) {
    zxidjniJNI.zxid_cgi_consent_set(swigCPtr, value);
  }

  public String getConsent() {
    return zxidjniJNI.zxid_cgi_consent_get(swigCPtr);
  }

  public void setMatching_rule(String value) {
    zxidjniJNI.zxid_cgi_matching_rule_set(swigCPtr, value);
  }

  public String getMatching_rule() {
    return zxidjniJNI.zxid_cgi_matching_rule_get(swigCPtr);
  }

  public void setAuthn_ctx(String value) {
    zxidjniJNI.zxid_cgi_authn_ctx_set(swigCPtr, value);
  }

  public String getAuthn_ctx() {
    return zxidjniJNI.zxid_cgi_authn_ctx_get(swigCPtr);
  }

  public void setRs(String value) {
    zxidjniJNI.zxid_cgi_rs_set(swigCPtr, value);
  }

  public String getRs() {
    return zxidjniJNI.zxid_cgi_rs_get(swigCPtr);
  }

  public void setSaml_art(String value) {
    zxidjniJNI.zxid_cgi_saml_art_set(swigCPtr, value);
  }

  public String getSaml_art() {
    return zxidjniJNI.zxid_cgi_saml_art_get(swigCPtr);
  }

  public void setSaml_resp(String value) {
    zxidjniJNI.zxid_cgi_saml_resp_set(swigCPtr, value);
  }

  public String getSaml_resp() {
    return zxidjniJNI.zxid_cgi_saml_resp_get(swigCPtr);
  }

  public void setSaml_req(String value) {
    zxidjniJNI.zxid_cgi_saml_req_set(swigCPtr, value);
  }

  public String getSaml_req() {
    return zxidjniJNI.zxid_cgi_saml_req_get(swigCPtr);
  }

  public void setSigalg(String value) {
    zxidjniJNI.zxid_cgi_sigalg_set(swigCPtr, value);
  }

  public String getSigalg() {
    return zxidjniJNI.zxid_cgi_sigalg_get(swigCPtr);
  }

  public void setSig(String value) {
    zxidjniJNI.zxid_cgi_sig_set(swigCPtr, value);
  }

  public String getSig() {
    return zxidjniJNI.zxid_cgi_sig_get(swigCPtr);
  }

  public void setSigval(String value) {
    zxidjniJNI.zxid_cgi_sigval_set(swigCPtr, value);
  }

  public String getSigval() {
    return zxidjniJNI.zxid_cgi_sigval_get(swigCPtr);
  }

  public void setSigmsg(String value) {
    zxidjniJNI.zxid_cgi_sigmsg_set(swigCPtr, value);
  }

  public String getSigmsg() {
    return zxidjniJNI.zxid_cgi_sigmsg_get(swigCPtr);
  }

  public void setErr(String value) {
    zxidjniJNI.zxid_cgi_err_set(swigCPtr, value);
  }

  public String getErr() {
    return zxidjniJNI.zxid_cgi_err_get(swigCPtr);
  }

  public void setMsg(String value) {
    zxidjniJNI.zxid_cgi_msg_set(swigCPtr, value);
  }

  public String getMsg() {
    return zxidjniJNI.zxid_cgi_msg_get(swigCPtr);
  }

  public void setDbg(String value) {
    zxidjniJNI.zxid_cgi_dbg_set(swigCPtr, value);
  }

  public String getDbg() {
    return zxidjniJNI.zxid_cgi_dbg_get(swigCPtr);
  }

  public zxid_cgi() {
    this(zxidjniJNI.new_zxid_cgi(), true);
  }

}