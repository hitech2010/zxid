/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 1.3.29
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package zxidjava;

public class zx_ns_s {
  private long swigCPtr;
  protected boolean swigCMemOwn;

  protected zx_ns_s(long cPtr, boolean cMemoryOwn) {
    swigCMemOwn = cMemoryOwn;
    swigCPtr = cPtr;
  }

  protected static long getCPtr(zx_ns_s obj) {
    return (obj == null) ? 0 : obj.swigCPtr;
  }

  protected void finalize() {
    delete();
  }

  public void delete() {
    if(swigCPtr != 0 && swigCMemOwn) {
      swigCMemOwn = false;
      zxidjniJNI.delete_zx_ns_s(swigCPtr);
    }
    swigCPtr = 0;
  }

  public void setN(zx_ns_s value) {
    zxidjniJNI.zx_ns_s_n_set(swigCPtr, zx_ns_s.getCPtr(value));
  }

  public zx_ns_s getN() {
    long cPtr = zxidjniJNI.zx_ns_s_n_get(swigCPtr);
    return (cPtr == 0) ? null : new zx_ns_s(cPtr, false);
  }

  public void setM(zx_ns_s value) {
    zxidjniJNI.zx_ns_s_m_set(swigCPtr, zx_ns_s.getCPtr(value));
  }

  public zx_ns_s getM() {
    long cPtr = zxidjniJNI.zx_ns_s_m_get(swigCPtr);
    return (cPtr == 0) ? null : new zx_ns_s(cPtr, false);
  }

  public void setSeen(zx_ns_s value) {
    zxidjniJNI.zx_ns_s_seen_set(swigCPtr, zx_ns_s.getCPtr(value));
  }

  public zx_ns_s getSeen() {
    long cPtr = zxidjniJNI.zx_ns_s_seen_get(swigCPtr);
    return (cPtr == 0) ? null : new zx_ns_s(cPtr, false);
  }

  public void setSeen_n(zx_ns_s value) {
    zxidjniJNI.zx_ns_s_seen_n_set(swigCPtr, zx_ns_s.getCPtr(value));
  }

  public zx_ns_s getSeen_n() {
    long cPtr = zxidjniJNI.zx_ns_s_seen_n_get(swigCPtr);
    return (cPtr == 0) ? null : new zx_ns_s(cPtr, false);
  }

  public void setSeen_p(zx_ns_s value) {
    zxidjniJNI.zx_ns_s_seen_p_set(swigCPtr, zx_ns_s.getCPtr(value));
  }

  public zx_ns_s getSeen_p() {
    long cPtr = zxidjniJNI.zx_ns_s_seen_p_get(swigCPtr);
    return (cPtr == 0) ? null : new zx_ns_s(cPtr, false);
  }

  public void setSeen_pop(zx_ns_s value) {
    zxidjniJNI.zx_ns_s_seen_pop_set(swigCPtr, zx_ns_s.getCPtr(value));
  }

  public zx_ns_s getSeen_pop() {
    long cPtr = zxidjniJNI.zx_ns_s_seen_pop_get(swigCPtr);
    return (cPtr == 0) ? null : new zx_ns_s(cPtr, false);
  }

  public void setInc_n(zx_ns_s value) {
    zxidjniJNI.zx_ns_s_inc_n_set(swigCPtr, zx_ns_s.getCPtr(value));
  }

  public zx_ns_s getInc_n() {
    long cPtr = zxidjniJNI.zx_ns_s_inc_n_get(swigCPtr);
    return (cPtr == 0) ? null : new zx_ns_s(cPtr, false);
  }

  public void setPrefix_len(int value) {
    zxidjniJNI.zx_ns_s_prefix_len_set(swigCPtr, value);
  }

  public int getPrefix_len() {
    return zxidjniJNI.zx_ns_s_prefix_len_get(swigCPtr);
  }

  public void setPrefix(String value) {
    zxidjniJNI.zx_ns_s_prefix_set(swigCPtr, value);
  }

  public String getPrefix() {
    return zxidjniJNI.zx_ns_s_prefix_get(swigCPtr);
  }

  public void setUrl_len(int value) {
    zxidjniJNI.zx_ns_s_url_len_set(swigCPtr, value);
  }

  public int getUrl_len() {
    return zxidjniJNI.zx_ns_s_url_len_get(swigCPtr);
  }

  public void setUrl(String value) {
    zxidjniJNI.zx_ns_s_url_set(swigCPtr, value);
  }

  public String getUrl() {
    return zxidjniJNI.zx_ns_s_url_get(swigCPtr);
  }

  public zx_ns_s() {
    this(zxidjniJNI.new_zx_ns_s(), true);
  }

}
