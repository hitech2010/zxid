/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 1.3.29
 * 
 * This file is not intended to be easily readable and contains a number of 
 * coding conventions designed to improve portability and efficiency. Do not make
 * changes to this file unless you know what you are doing--modify the SWIG 
 * interface file instead. 
 * ----------------------------------------------------------------------------- */

/*
  +----------------------------------------------------------------------+
  | PHP version 4.0                                                      |
  +----------------------------------------------------------------------+
  | Copyright (c) 1997, 1998, 1999, 2000, 2001 The PHP Group             |
  +----------------------------------------------------------------------+
  | This source file is subject to version 2.02 of the PHP license,      |
  | that is bundled with this package in the file LICENSE, and is        |
  | available at through the world-wide-web at                           |
  | http://www.php.net/license/2_02.txt.                                 |
  | If you did not receive a copy of the PHP license and are unable to   |
  | obtain it through the world-wide-web, please send a note to          |
  | license@php.net so we can mail you a copy immediately.               |
  +----------------------------------------------------------------------+
  | Authors:                                                             |
  |                                                                      |
  +----------------------------------------------------------------------+
 */


#ifndef PHP_ZXID_H
#define PHP_ZXID_H

extern zend_module_entry zxid_module_entry;
#define phpext_zxid_ptr &zxid_module_entry

#ifdef PHP_WIN32
# define PHP_ZXID_API __declspec(dllexport)
#else
# define PHP_ZXID_API
#endif

#ifdef ZTS
#include "TSRM.h"
#endif

PHP_MINIT_FUNCTION(zxid);
PHP_MSHUTDOWN_FUNCTION(zxid);
PHP_RINIT_FUNCTION(zxid);
PHP_RSHUTDOWN_FUNCTION(zxid);
PHP_MINFO_FUNCTION(zxid);

ZEND_NAMED_FUNCTION(_wrap_zx_ns_s_n_set);
ZEND_NAMED_FUNCTION(_wrap_zx_ns_s_n_get);
ZEND_NAMED_FUNCTION(_wrap_zx_ns_s_m_set);
ZEND_NAMED_FUNCTION(_wrap_zx_ns_s_m_get);
ZEND_NAMED_FUNCTION(_wrap_zx_ns_s_seen_set);
ZEND_NAMED_FUNCTION(_wrap_zx_ns_s_seen_get);
ZEND_NAMED_FUNCTION(_wrap_zx_ns_s_seen_n_set);
ZEND_NAMED_FUNCTION(_wrap_zx_ns_s_seen_n_get);
ZEND_NAMED_FUNCTION(_wrap_zx_ns_s_seen_p_set);
ZEND_NAMED_FUNCTION(_wrap_zx_ns_s_seen_p_get);
ZEND_NAMED_FUNCTION(_wrap_zx_ns_s_seen_pop_set);
ZEND_NAMED_FUNCTION(_wrap_zx_ns_s_seen_pop_get);
ZEND_NAMED_FUNCTION(_wrap_zx_ns_s_inc_n_set);
ZEND_NAMED_FUNCTION(_wrap_zx_ns_s_inc_n_get);
ZEND_NAMED_FUNCTION(_wrap_zx_ns_s_prefix_len_set);
ZEND_NAMED_FUNCTION(_wrap_zx_ns_s_prefix_len_get);
ZEND_NAMED_FUNCTION(_wrap_zx_ns_s_prefix_set);
ZEND_NAMED_FUNCTION(_wrap_zx_ns_s_prefix_get);
ZEND_NAMED_FUNCTION(_wrap_zx_ns_s_url_len_set);
ZEND_NAMED_FUNCTION(_wrap_zx_ns_s_url_len_get);
ZEND_NAMED_FUNCTION(_wrap_zx_ns_s_url_set);
ZEND_NAMED_FUNCTION(_wrap_zx_ns_s_url_get);
ZEND_NAMED_FUNCTION(_wrap_new_zx_ns_s);
ZEND_NAMED_FUNCTION(_wrap_zx_ctx_base_set);
ZEND_NAMED_FUNCTION(_wrap_zx_ctx_base_get);
ZEND_NAMED_FUNCTION(_wrap_zx_ctx_p_set);
ZEND_NAMED_FUNCTION(_wrap_zx_ctx_p_get);
ZEND_NAMED_FUNCTION(_wrap_zx_ctx_lim_set);
ZEND_NAMED_FUNCTION(_wrap_zx_ctx_lim_get);
ZEND_NAMED_FUNCTION(_wrap_zx_ctx_ns_tab_set);
ZEND_NAMED_FUNCTION(_wrap_zx_ctx_ns_tab_get);
ZEND_NAMED_FUNCTION(_wrap_zx_ctx_unknown_ns_set);
ZEND_NAMED_FUNCTION(_wrap_zx_ctx_unknown_ns_get);
ZEND_NAMED_FUNCTION(_wrap_zx_ctx_guard_seen_n_set);
ZEND_NAMED_FUNCTION(_wrap_zx_ctx_guard_seen_n_get);
ZEND_NAMED_FUNCTION(_wrap_zx_ctx_guard_seen_p_set);
ZEND_NAMED_FUNCTION(_wrap_zx_ctx_guard_seen_p_get);
ZEND_NAMED_FUNCTION(_wrap_zx_ctx_exclude_sig_set);
ZEND_NAMED_FUNCTION(_wrap_zx_ctx_exclude_sig_get);
ZEND_NAMED_FUNCTION(_wrap_zx_ctx_inc_ns_len_set);
ZEND_NAMED_FUNCTION(_wrap_zx_ctx_inc_ns_len_get);
ZEND_NAMED_FUNCTION(_wrap_zx_ctx_inc_ns_set);
ZEND_NAMED_FUNCTION(_wrap_zx_ctx_inc_ns_get);
ZEND_NAMED_FUNCTION(_wrap_zx_ctx_malloc_func_set);
ZEND_NAMED_FUNCTION(_wrap_zx_ctx_malloc_func_get);
ZEND_NAMED_FUNCTION(_wrap_zx_ctx_realloc_func_set);
ZEND_NAMED_FUNCTION(_wrap_zx_ctx_realloc_func_get);
ZEND_NAMED_FUNCTION(_wrap_zx_ctx_free_func_set);
ZEND_NAMED_FUNCTION(_wrap_zx_ctx_free_func_get);
ZEND_NAMED_FUNCTION(_wrap_new_zx_ctx);
ZEND_NAMED_FUNCTION(_wrap_zx_node_s_n_set);
ZEND_NAMED_FUNCTION(_wrap_zx_node_s_n_get);
ZEND_NAMED_FUNCTION(_wrap_zx_node_s_wo_set);
ZEND_NAMED_FUNCTION(_wrap_zx_node_s_wo_get);
ZEND_NAMED_FUNCTION(_wrap_zx_node_s_ns_set);
ZEND_NAMED_FUNCTION(_wrap_zx_node_s_ns_get);
ZEND_NAMED_FUNCTION(_wrap_zx_node_s_tok_set);
ZEND_NAMED_FUNCTION(_wrap_zx_node_s_tok_get);
ZEND_NAMED_FUNCTION(_wrap_zx_node_s_err_set);
ZEND_NAMED_FUNCTION(_wrap_zx_node_s_err_get);
ZEND_NAMED_FUNCTION(_wrap_new_zx_node_s);
ZEND_NAMED_FUNCTION(_wrap_zx_elem_s_g_set);
ZEND_NAMED_FUNCTION(_wrap_zx_elem_s_g_get);
ZEND_NAMED_FUNCTION(_wrap_zx_elem_s_kids_set);
ZEND_NAMED_FUNCTION(_wrap_zx_elem_s_kids_get);
ZEND_NAMED_FUNCTION(_wrap_zx_elem_s_any_attr_set);
ZEND_NAMED_FUNCTION(_wrap_zx_elem_s_any_attr_get);
ZEND_NAMED_FUNCTION(_wrap_zx_elem_s_any_elem_set);
ZEND_NAMED_FUNCTION(_wrap_zx_elem_s_any_elem_get);
ZEND_NAMED_FUNCTION(_wrap_zx_elem_s_xmlns_set);
ZEND_NAMED_FUNCTION(_wrap_zx_elem_s_xmlns_get);
ZEND_NAMED_FUNCTION(_wrap_zx_elem_s_content_set);
ZEND_NAMED_FUNCTION(_wrap_zx_elem_s_content_get);
ZEND_NAMED_FUNCTION(_wrap_new_zx_elem_s);
ZEND_NAMED_FUNCTION(_wrap_zx_new_simple_elem);
ZEND_NAMED_FUNCTION(_wrap_zx_ref_len_simple_elem);
ZEND_NAMED_FUNCTION(_wrap_zx_ref_simple_elem);
ZEND_NAMED_FUNCTION(_wrap_zx_dup_len_simple_elem);
ZEND_NAMED_FUNCTION(_wrap_zx_dup_simple_elem);
ZEND_NAMED_FUNCTION(_wrap_zx_str_g_set);
ZEND_NAMED_FUNCTION(_wrap_zx_str_g_get);
ZEND_NAMED_FUNCTION(_wrap_zx_str_len_set);
ZEND_NAMED_FUNCTION(_wrap_zx_str_len_get);
ZEND_NAMED_FUNCTION(_wrap_zx_str_s_set);
ZEND_NAMED_FUNCTION(_wrap_zx_str_s_get);
ZEND_NAMED_FUNCTION(_wrap_new_zx_str);
ZEND_NAMED_FUNCTION(_wrap_zx_ref_str);
ZEND_NAMED_FUNCTION(_wrap_zx_ref_len_str);
ZEND_NAMED_FUNCTION(_wrap_zx_new_len_str);
ZEND_NAMED_FUNCTION(_wrap_zx_dup_str);
ZEND_NAMED_FUNCTION(_wrap_zx_dup_len_str);
ZEND_NAMED_FUNCTION(_wrap_zx_alloc_sprintf);
ZEND_NAMED_FUNCTION(_wrap_zx_strf);
ZEND_NAMED_FUNCTION(_wrap_zx_str_free);
ZEND_NAMED_FUNCTION(_wrap_zx_str_to_c);
ZEND_NAMED_FUNCTION(_wrap_zx_str_conv);
ZEND_NAMED_FUNCTION(_wrap_zx_str_ends_in);
ZEND_NAMED_FUNCTION(_wrap_zx_any_elem_s_gg_set);
ZEND_NAMED_FUNCTION(_wrap_zx_any_elem_s_gg_get);
ZEND_NAMED_FUNCTION(_wrap_zx_any_elem_s_name_len_set);
ZEND_NAMED_FUNCTION(_wrap_zx_any_elem_s_name_len_get);
ZEND_NAMED_FUNCTION(_wrap_zx_any_elem_s_name_set);
ZEND_NAMED_FUNCTION(_wrap_zx_any_elem_s_name_get);
ZEND_NAMED_FUNCTION(_wrap_new_zx_any_elem_s);
ZEND_NAMED_FUNCTION(_wrap_zx_any_attr_s_ss_set);
ZEND_NAMED_FUNCTION(_wrap_zx_any_attr_s_ss_get);
ZEND_NAMED_FUNCTION(_wrap_zx_any_attr_s_name_len_set);
ZEND_NAMED_FUNCTION(_wrap_zx_any_attr_s_name_len_get);
ZEND_NAMED_FUNCTION(_wrap_zx_any_attr_s_name_set);
ZEND_NAMED_FUNCTION(_wrap_zx_any_attr_s_name_get);
ZEND_NAMED_FUNCTION(_wrap_new_zx_any_attr_s);
ZEND_NAMED_FUNCTION(_wrap_zx_memmem);
ZEND_NAMED_FUNCTION(_wrap_zx_alloc);
ZEND_NAMED_FUNCTION(_wrap_zx_zalloc);
ZEND_NAMED_FUNCTION(_wrap_zx_free);
ZEND_NAMED_FUNCTION(_wrap_zx_dup_cstr);
ZEND_NAMED_FUNCTION(_wrap_zx_reset_ctx);
ZEND_NAMED_FUNCTION(_wrap_zx_init_ctx);
ZEND_NAMED_FUNCTION(_wrap_zx_tok_name_set);
ZEND_NAMED_FUNCTION(_wrap_zx_tok_name_get);
ZEND_NAMED_FUNCTION(_wrap_zx_tok_prefix_set);
ZEND_NAMED_FUNCTION(_wrap_zx_tok_prefix_get);
ZEND_NAMED_FUNCTION(_wrap_zx_tok_ns_set);
ZEND_NAMED_FUNCTION(_wrap_zx_tok_ns_get);
ZEND_NAMED_FUNCTION(_wrap_new_zx_tok);
ZEND_NAMED_FUNCTION(_wrap_zx_date_time_to_secs);
ZEND_NAMED_FUNCTION(_wrap_write2_or_append_lock_c_path);
ZEND_NAMED_FUNCTION(_wrap_zx_report_openssl_error);
ZEND_NAMED_FUNCTION(_wrap_zx_fix_any_elem_dec);
ZEND_NAMED_FUNCTION(_wrap_zx_locate_ns_by_prefix);
ZEND_NAMED_FUNCTION(_wrap_zx_is_ns_prefix);
ZEND_NAMED_FUNCTION(_wrap_zx_prefix_seen);
ZEND_NAMED_FUNCTION(_wrap_zx_prefix_seen_whine);
ZEND_NAMED_FUNCTION(_wrap_zx_scan_xmlns);
ZEND_NAMED_FUNCTION(_wrap_zx_pop_seen);
ZEND_NAMED_FUNCTION(_wrap_zx_raw_cipher);
ZEND_NAMED_FUNCTION(_wrap_zx_rsa_pub_enc);
ZEND_NAMED_FUNCTION(_wrap_zx_rsa_pub_dec);
ZEND_NAMED_FUNCTION(_wrap_zx_rsa_priv_dec);
ZEND_NAMED_FUNCTION(_wrap_zx_rsa_priv_enc);
ZEND_NAMED_FUNCTION(_wrap_zx_get_rsa_pub_from_cert);
ZEND_NAMED_FUNCTION(_wrap_zx_rand);
ZEND_NAMED_FUNCTION(_wrap_zx_tok_by_ns);
ZEND_NAMED_FUNCTION(_wrap_zx_len_xmlns_if_not_seen);
ZEND_NAMED_FUNCTION(_wrap_zx_enc_xmlns_if_not_seen);
ZEND_NAMED_FUNCTION(_wrap_zx_add_xmlns_if_not_seen);
ZEND_NAMED_FUNCTION(_wrap_zx_enc_seen);
ZEND_NAMED_FUNCTION(_wrap_zx_len_so_common);
ZEND_NAMED_FUNCTION(_wrap_zx_len_wo_common);
ZEND_NAMED_FUNCTION(_wrap_zx_enc_unknown_attrs);
ZEND_NAMED_FUNCTION(_wrap_zx_enc_so_unknown_elems_and_content);
ZEND_NAMED_FUNCTION(_wrap_zx_easy_enc_common);
ZEND_NAMED_FUNCTION(_wrap_zx_attr_so_len);
ZEND_NAMED_FUNCTION(_wrap_zx_attr_so_enc);
ZEND_NAMED_FUNCTION(_wrap_zx_attr_wo_len);
ZEND_NAMED_FUNCTION(_wrap_zx_attr_wo_enc);
ZEND_NAMED_FUNCTION(_wrap_zx_free_attr);
ZEND_NAMED_FUNCTION(_wrap_zx_free_elem_common);
ZEND_NAMED_FUNCTION(_wrap_zx_free_simple_elems);
ZEND_NAMED_FUNCTION(_wrap_zx_prepare_dec_ctx);
ZEND_NAMED_FUNCTION(_wrap_zx_scan_data);
ZEND_NAMED_FUNCTION(_wrap_zx_scan_pi_or_comment);
ZEND_NAMED_FUNCTION(_wrap_zx_dec_unknown_attr);
ZEND_NAMED_FUNCTION(_wrap_zx_dec_attr_val);
ZEND_NAMED_FUNCTION(_wrap_zx_xml_parse_err);
ZEND_NAMED_FUNCTION(_wrap_zx_len_inc_ns);
ZEND_NAMED_FUNCTION(_wrap_zx_add_inc_ns);
ZEND_NAMED_FUNCTION(_wrap_zx_enc_inc_ns);
ZEND_NAMED_FUNCTION(_wrap_zxid_conf_magic_set);
ZEND_NAMED_FUNCTION(_wrap_zxid_conf_magic_get);
ZEND_NAMED_FUNCTION(_wrap_zxid_conf_ctx_set);
ZEND_NAMED_FUNCTION(_wrap_zxid_conf_ctx_get);
ZEND_NAMED_FUNCTION(_wrap_zxid_conf_cot_set);
ZEND_NAMED_FUNCTION(_wrap_zxid_conf_cot_get);
ZEND_NAMED_FUNCTION(_wrap_zxid_conf_path_supplied_set);
ZEND_NAMED_FUNCTION(_wrap_zxid_conf_path_supplied_get);
ZEND_NAMED_FUNCTION(_wrap_zxid_conf_path_len_set);
ZEND_NAMED_FUNCTION(_wrap_zxid_conf_path_len_get);
ZEND_NAMED_FUNCTION(_wrap_zxid_conf_path_set);
ZEND_NAMED_FUNCTION(_wrap_zxid_conf_path_get);
ZEND_NAMED_FUNCTION(_wrap_zxid_conf_url_set);
ZEND_NAMED_FUNCTION(_wrap_zxid_conf_url_get);
ZEND_NAMED_FUNCTION(_wrap_zxid_conf_non_standard_entityid_set);
ZEND_NAMED_FUNCTION(_wrap_zxid_conf_non_standard_entityid_get);
ZEND_NAMED_FUNCTION(_wrap_zxid_conf_cdc_url_set);
ZEND_NAMED_FUNCTION(_wrap_zxid_conf_cdc_url_get);
ZEND_NAMED_FUNCTION(_wrap_zxid_conf_cdc_choice_set);
ZEND_NAMED_FUNCTION(_wrap_zxid_conf_cdc_choice_get);
ZEND_NAMED_FUNCTION(_wrap_zxid_conf_md_fetch_set);
ZEND_NAMED_FUNCTION(_wrap_zxid_conf_md_fetch_get);
ZEND_NAMED_FUNCTION(_wrap_zxid_conf_md_populate_cache_set);
ZEND_NAMED_FUNCTION(_wrap_zxid_conf_md_populate_cache_get);
ZEND_NAMED_FUNCTION(_wrap_zxid_conf_md_cache_first_set);
ZEND_NAMED_FUNCTION(_wrap_zxid_conf_md_cache_first_get);
ZEND_NAMED_FUNCTION(_wrap_zxid_conf_md_cache_last_set);
ZEND_NAMED_FUNCTION(_wrap_zxid_conf_md_cache_last_get);
ZEND_NAMED_FUNCTION(_wrap_zxid_conf_user_local_set);
ZEND_NAMED_FUNCTION(_wrap_zxid_conf_user_local_get);
ZEND_NAMED_FUNCTION(_wrap_zxid_conf_authn_req_sign_set);
ZEND_NAMED_FUNCTION(_wrap_zxid_conf_authn_req_sign_get);
ZEND_NAMED_FUNCTION(_wrap_zxid_conf_want_sso_a7n_signed_set);
ZEND_NAMED_FUNCTION(_wrap_zxid_conf_want_sso_a7n_signed_get);
ZEND_NAMED_FUNCTION(_wrap_zxid_conf_sso_soap_sign_set);
ZEND_NAMED_FUNCTION(_wrap_zxid_conf_sso_soap_sign_get);
ZEND_NAMED_FUNCTION(_wrap_zxid_conf_sso_soap_resp_sign_set);
ZEND_NAMED_FUNCTION(_wrap_zxid_conf_sso_soap_resp_sign_get);
ZEND_NAMED_FUNCTION(_wrap_zxid_conf_nameid_enc_set);
ZEND_NAMED_FUNCTION(_wrap_zxid_conf_nameid_enc_get);
ZEND_NAMED_FUNCTION(_wrap_zxid_conf_affiliation_set);
ZEND_NAMED_FUNCTION(_wrap_zxid_conf_affiliation_get);
ZEND_NAMED_FUNCTION(_wrap_zxid_conf_nice_name_set);
ZEND_NAMED_FUNCTION(_wrap_zxid_conf_nice_name_get);
ZEND_NAMED_FUNCTION(_wrap_zxid_conf_ses_arch_dir_set);
ZEND_NAMED_FUNCTION(_wrap_zxid_conf_ses_arch_dir_get);
ZEND_NAMED_FUNCTION(_wrap_zxid_conf_ses_cookie_name_set);
ZEND_NAMED_FUNCTION(_wrap_zxid_conf_ses_cookie_name_get);
ZEND_NAMED_FUNCTION(_wrap_zxid_conf_ipport_set);
ZEND_NAMED_FUNCTION(_wrap_zxid_conf_ipport_get);
ZEND_NAMED_FUNCTION(_wrap_zxid_conf_log_err_set);
ZEND_NAMED_FUNCTION(_wrap_zxid_conf_log_err_get);
ZEND_NAMED_FUNCTION(_wrap_zxid_conf_log_act_set);
ZEND_NAMED_FUNCTION(_wrap_zxid_conf_log_act_get);
ZEND_NAMED_FUNCTION(_wrap_zxid_conf_log_issue_a7n_set);
ZEND_NAMED_FUNCTION(_wrap_zxid_conf_log_issue_a7n_get);
ZEND_NAMED_FUNCTION(_wrap_zxid_conf_log_issue_msg_set);
ZEND_NAMED_FUNCTION(_wrap_zxid_conf_log_issue_msg_get);
ZEND_NAMED_FUNCTION(_wrap_zxid_conf_log_rely_a7n_set);
ZEND_NAMED_FUNCTION(_wrap_zxid_conf_log_rely_a7n_get);
ZEND_NAMED_FUNCTION(_wrap_zxid_conf_log_rely_msg_set);
ZEND_NAMED_FUNCTION(_wrap_zxid_conf_log_rely_msg_get);
ZEND_NAMED_FUNCTION(_wrap_zxid_conf_log_err_in_act_set);
ZEND_NAMED_FUNCTION(_wrap_zxid_conf_log_err_in_act_get);
ZEND_NAMED_FUNCTION(_wrap_zxid_conf_log_sigfail_is_err_set);
ZEND_NAMED_FUNCTION(_wrap_zxid_conf_log_sigfail_is_err_get);
ZEND_NAMED_FUNCTION(_wrap_zxid_conf_log_level_set);
ZEND_NAMED_FUNCTION(_wrap_zxid_conf_log_level_get);
ZEND_NAMED_FUNCTION(_wrap_zxid_conf_sig_fatal_set);
ZEND_NAMED_FUNCTION(_wrap_zxid_conf_sig_fatal_get);
ZEND_NAMED_FUNCTION(_wrap_zxid_conf_nosig_fatal_set);
ZEND_NAMED_FUNCTION(_wrap_zxid_conf_nosig_fatal_get);
ZEND_NAMED_FUNCTION(_wrap_zxid_conf_timeout_fatal_set);
ZEND_NAMED_FUNCTION(_wrap_zxid_conf_timeout_fatal_get);
ZEND_NAMED_FUNCTION(_wrap_zxid_conf_audience_fatal_set);
ZEND_NAMED_FUNCTION(_wrap_zxid_conf_audience_fatal_get);
ZEND_NAMED_FUNCTION(_wrap_zxid_conf_dup_a7n_fatal_set);
ZEND_NAMED_FUNCTION(_wrap_zxid_conf_dup_a7n_fatal_get);
ZEND_NAMED_FUNCTION(_wrap_zxid_conf_dup_msg_fatal_set);
ZEND_NAMED_FUNCTION(_wrap_zxid_conf_dup_msg_fatal_get);
ZEND_NAMED_FUNCTION(_wrap_zxid_conf_before_slop_set);
ZEND_NAMED_FUNCTION(_wrap_zxid_conf_before_slop_get);
ZEND_NAMED_FUNCTION(_wrap_zxid_conf_after_slop_set);
ZEND_NAMED_FUNCTION(_wrap_zxid_conf_after_slop_get);
ZEND_NAMED_FUNCTION(_wrap_zxid_conf_timeskew_set);
ZEND_NAMED_FUNCTION(_wrap_zxid_conf_timeskew_get);
ZEND_NAMED_FUNCTION(_wrap_zxid_conf_redir_to_content_set);
ZEND_NAMED_FUNCTION(_wrap_zxid_conf_redir_to_content_get);
ZEND_NAMED_FUNCTION(_wrap_zxid_conf_max_soap_retry_set);
ZEND_NAMED_FUNCTION(_wrap_zxid_conf_max_soap_retry_get);
ZEND_NAMED_FUNCTION(_wrap_zxid_conf_defaultqs_set);
ZEND_NAMED_FUNCTION(_wrap_zxid_conf_defaultqs_get);
ZEND_NAMED_FUNCTION(_wrap_zxid_conf_mod_saml_attr_prefix_set);
ZEND_NAMED_FUNCTION(_wrap_zxid_conf_mod_saml_attr_prefix_get);
ZEND_NAMED_FUNCTION(_wrap_zxid_conf_idp_sel_start_set);
ZEND_NAMED_FUNCTION(_wrap_zxid_conf_idp_sel_start_get);
ZEND_NAMED_FUNCTION(_wrap_zxid_conf_idp_sel_new_idp_set);
ZEND_NAMED_FUNCTION(_wrap_zxid_conf_idp_sel_new_idp_get);
ZEND_NAMED_FUNCTION(_wrap_zxid_conf_idp_sel_our_eid_set);
ZEND_NAMED_FUNCTION(_wrap_zxid_conf_idp_sel_our_eid_get);
ZEND_NAMED_FUNCTION(_wrap_zxid_conf_idp_sel_tech_user_set);
ZEND_NAMED_FUNCTION(_wrap_zxid_conf_idp_sel_tech_user_get);
ZEND_NAMED_FUNCTION(_wrap_zxid_conf_idp_sel_tech_site_set);
ZEND_NAMED_FUNCTION(_wrap_zxid_conf_idp_sel_tech_site_get);
ZEND_NAMED_FUNCTION(_wrap_zxid_conf_idp_sel_footer_set);
ZEND_NAMED_FUNCTION(_wrap_zxid_conf_idp_sel_footer_get);
ZEND_NAMED_FUNCTION(_wrap_zxid_conf_idp_sel_end_set);
ZEND_NAMED_FUNCTION(_wrap_zxid_conf_idp_sel_end_get);
ZEND_NAMED_FUNCTION(_wrap_zxid_conf_mgmt_start_set);
ZEND_NAMED_FUNCTION(_wrap_zxid_conf_mgmt_start_get);
ZEND_NAMED_FUNCTION(_wrap_zxid_conf_mgmt_logout_set);
ZEND_NAMED_FUNCTION(_wrap_zxid_conf_mgmt_logout_get);
ZEND_NAMED_FUNCTION(_wrap_zxid_conf_mgmt_defed_set);
ZEND_NAMED_FUNCTION(_wrap_zxid_conf_mgmt_defed_get);
ZEND_NAMED_FUNCTION(_wrap_zxid_conf_mgmt_footer_set);
ZEND_NAMED_FUNCTION(_wrap_zxid_conf_mgmt_footer_get);
ZEND_NAMED_FUNCTION(_wrap_zxid_conf_mgmt_end_set);
ZEND_NAMED_FUNCTION(_wrap_zxid_conf_mgmt_end_get);
ZEND_NAMED_FUNCTION(_wrap_zxid_conf_dbg_set);
ZEND_NAMED_FUNCTION(_wrap_zxid_conf_dbg_get);
ZEND_NAMED_FUNCTION(_wrap_new_zxid_conf);
ZEND_NAMED_FUNCTION(_wrap_zxid_cgi_magic_set);
ZEND_NAMED_FUNCTION(_wrap_zxid_cgi_magic_get);
ZEND_NAMED_FUNCTION(_wrap_zxid_cgi_op_set);
ZEND_NAMED_FUNCTION(_wrap_zxid_cgi_op_get);
ZEND_NAMED_FUNCTION(_wrap_zxid_cgi_pr_ix_set);
ZEND_NAMED_FUNCTION(_wrap_zxid_cgi_pr_ix_get);
ZEND_NAMED_FUNCTION(_wrap_zxid_cgi_allow_create_set);
ZEND_NAMED_FUNCTION(_wrap_zxid_cgi_allow_create_get);
ZEND_NAMED_FUNCTION(_wrap_zxid_cgi_ispassive_set);
ZEND_NAMED_FUNCTION(_wrap_zxid_cgi_ispassive_get);
ZEND_NAMED_FUNCTION(_wrap_zxid_cgi_force_authn_set);
ZEND_NAMED_FUNCTION(_wrap_zxid_cgi_force_authn_get);
ZEND_NAMED_FUNCTION(_wrap_zxid_cgi_enc_hint_set);
ZEND_NAMED_FUNCTION(_wrap_zxid_cgi_enc_hint_get);
ZEND_NAMED_FUNCTION(_wrap_zxid_cgi_sid_set);
ZEND_NAMED_FUNCTION(_wrap_zxid_cgi_sid_get);
ZEND_NAMED_FUNCTION(_wrap_zxid_cgi_nid_set);
ZEND_NAMED_FUNCTION(_wrap_zxid_cgi_nid_get);
ZEND_NAMED_FUNCTION(_wrap_zxid_cgi_user_set);
ZEND_NAMED_FUNCTION(_wrap_zxid_cgi_user_get);
ZEND_NAMED_FUNCTION(_wrap_zxid_cgi_pw_set);
ZEND_NAMED_FUNCTION(_wrap_zxid_cgi_pw_get);
ZEND_NAMED_FUNCTION(_wrap_zxid_cgi_cdc_set);
ZEND_NAMED_FUNCTION(_wrap_zxid_cgi_cdc_get);
ZEND_NAMED_FUNCTION(_wrap_zxid_cgi_eid_set);
ZEND_NAMED_FUNCTION(_wrap_zxid_cgi_eid_get);
ZEND_NAMED_FUNCTION(_wrap_zxid_cgi_nid_fmt_set);
ZEND_NAMED_FUNCTION(_wrap_zxid_cgi_nid_fmt_get);
ZEND_NAMED_FUNCTION(_wrap_zxid_cgi_affil_set);
ZEND_NAMED_FUNCTION(_wrap_zxid_cgi_affil_get);
ZEND_NAMED_FUNCTION(_wrap_zxid_cgi_consent_set);
ZEND_NAMED_FUNCTION(_wrap_zxid_cgi_consent_get);
ZEND_NAMED_FUNCTION(_wrap_zxid_cgi_matching_rule_set);
ZEND_NAMED_FUNCTION(_wrap_zxid_cgi_matching_rule_get);
ZEND_NAMED_FUNCTION(_wrap_zxid_cgi_authn_ctx_set);
ZEND_NAMED_FUNCTION(_wrap_zxid_cgi_authn_ctx_get);
ZEND_NAMED_FUNCTION(_wrap_zxid_cgi_pxy_count_set);
ZEND_NAMED_FUNCTION(_wrap_zxid_cgi_pxy_count_get);
ZEND_NAMED_FUNCTION(_wrap_zxid_cgi_get_complete_set);
ZEND_NAMED_FUNCTION(_wrap_zxid_cgi_get_complete_get);
ZEND_NAMED_FUNCTION(_wrap_zxid_cgi_idppxylist_set);
ZEND_NAMED_FUNCTION(_wrap_zxid_cgi_idppxylist_get);
ZEND_NAMED_FUNCTION(_wrap_zxid_cgi_rs_set);
ZEND_NAMED_FUNCTION(_wrap_zxid_cgi_rs_get);
ZEND_NAMED_FUNCTION(_wrap_zxid_cgi_newnym_set);
ZEND_NAMED_FUNCTION(_wrap_zxid_cgi_newnym_get);
ZEND_NAMED_FUNCTION(_wrap_zxid_cgi_saml_art_set);
ZEND_NAMED_FUNCTION(_wrap_zxid_cgi_saml_art_get);
ZEND_NAMED_FUNCTION(_wrap_zxid_cgi_saml_resp_set);
ZEND_NAMED_FUNCTION(_wrap_zxid_cgi_saml_resp_get);
ZEND_NAMED_FUNCTION(_wrap_zxid_cgi_saml_req_set);
ZEND_NAMED_FUNCTION(_wrap_zxid_cgi_saml_req_get);
ZEND_NAMED_FUNCTION(_wrap_zxid_cgi_sigalg_set);
ZEND_NAMED_FUNCTION(_wrap_zxid_cgi_sigalg_get);
ZEND_NAMED_FUNCTION(_wrap_zxid_cgi_sig_set);
ZEND_NAMED_FUNCTION(_wrap_zxid_cgi_sig_get);
ZEND_NAMED_FUNCTION(_wrap_zxid_cgi_sigval_set);
ZEND_NAMED_FUNCTION(_wrap_zxid_cgi_sigval_get);
ZEND_NAMED_FUNCTION(_wrap_zxid_cgi_sigmsg_set);
ZEND_NAMED_FUNCTION(_wrap_zxid_cgi_sigmsg_get);
ZEND_NAMED_FUNCTION(_wrap_zxid_cgi_err_set);
ZEND_NAMED_FUNCTION(_wrap_zxid_cgi_err_get);
ZEND_NAMED_FUNCTION(_wrap_zxid_cgi_msg_set);
ZEND_NAMED_FUNCTION(_wrap_zxid_cgi_msg_get);
ZEND_NAMED_FUNCTION(_wrap_zxid_cgi_dbg_set);
ZEND_NAMED_FUNCTION(_wrap_zxid_cgi_dbg_get);
ZEND_NAMED_FUNCTION(_wrap_zxid_cgi_idp_list_set);
ZEND_NAMED_FUNCTION(_wrap_zxid_cgi_idp_list_get);
ZEND_NAMED_FUNCTION(_wrap_new_zxid_cgi);
ZEND_NAMED_FUNCTION(_wrap_zxid_ses_magic_set);
ZEND_NAMED_FUNCTION(_wrap_zxid_ses_magic_get);
ZEND_NAMED_FUNCTION(_wrap_zxid_ses_sid_set);
ZEND_NAMED_FUNCTION(_wrap_zxid_ses_sid_get);
ZEND_NAMED_FUNCTION(_wrap_zxid_ses_nid_set);
ZEND_NAMED_FUNCTION(_wrap_zxid_ses_nid_get);
ZEND_NAMED_FUNCTION(_wrap_zxid_ses_sesix_set);
ZEND_NAMED_FUNCTION(_wrap_zxid_ses_sesix_get);
ZEND_NAMED_FUNCTION(_wrap_zxid_ses_nidfmt_set);
ZEND_NAMED_FUNCTION(_wrap_zxid_ses_nidfmt_get);
ZEND_NAMED_FUNCTION(_wrap_zxid_ses_sigres_set);
ZEND_NAMED_FUNCTION(_wrap_zxid_ses_sigres_get);
ZEND_NAMED_FUNCTION(_wrap_zxid_ses_pad2_set);
ZEND_NAMED_FUNCTION(_wrap_zxid_ses_pad2_get);
ZEND_NAMED_FUNCTION(_wrap_zxid_ses_pad3_set);
ZEND_NAMED_FUNCTION(_wrap_zxid_ses_pad3_get);
ZEND_NAMED_FUNCTION(_wrap_zxid_ses_sso_a7n_path_set);
ZEND_NAMED_FUNCTION(_wrap_zxid_ses_sso_a7n_path_get);
ZEND_NAMED_FUNCTION(_wrap_zxid_ses_setcookie_set);
ZEND_NAMED_FUNCTION(_wrap_zxid_ses_setcookie_get);
ZEND_NAMED_FUNCTION(_wrap_zxid_ses_cookie_set);
ZEND_NAMED_FUNCTION(_wrap_zxid_ses_cookie_get);
ZEND_NAMED_FUNCTION(_wrap_zxid_ses_rs_set);
ZEND_NAMED_FUNCTION(_wrap_zxid_ses_rs_get);
ZEND_NAMED_FUNCTION(_wrap_zxid_ses_nameid_set);
ZEND_NAMED_FUNCTION(_wrap_zxid_ses_nameid_get);
ZEND_NAMED_FUNCTION(_wrap_zxid_ses_a7n_set);
ZEND_NAMED_FUNCTION(_wrap_zxid_ses_a7n_get);
ZEND_NAMED_FUNCTION(_wrap_zxid_ses_a7n11_set);
ZEND_NAMED_FUNCTION(_wrap_zxid_ses_a7n11_get);
ZEND_NAMED_FUNCTION(_wrap_zxid_ses_a7n12_set);
ZEND_NAMED_FUNCTION(_wrap_zxid_ses_a7n12_get);
ZEND_NAMED_FUNCTION(_wrap_zxid_ses_sesbuf_set);
ZEND_NAMED_FUNCTION(_wrap_zxid_ses_sesbuf_get);
ZEND_NAMED_FUNCTION(_wrap_zxid_ses_sso_a7n_buf_set);
ZEND_NAMED_FUNCTION(_wrap_zxid_ses_sso_a7n_buf_get);
ZEND_NAMED_FUNCTION(_wrap_new_zxid_ses);
ZEND_NAMED_FUNCTION(_wrap_zxid_entity_n_set);
ZEND_NAMED_FUNCTION(_wrap_zxid_entity_n_get);
ZEND_NAMED_FUNCTION(_wrap_zxid_entity_n_cdc_set);
ZEND_NAMED_FUNCTION(_wrap_zxid_entity_n_cdc_get);
ZEND_NAMED_FUNCTION(_wrap_zxid_entity_eid_len_set);
ZEND_NAMED_FUNCTION(_wrap_zxid_entity_eid_len_get);
ZEND_NAMED_FUNCTION(_wrap_zxid_entity_eid_set);
ZEND_NAMED_FUNCTION(_wrap_zxid_entity_eid_get);
ZEND_NAMED_FUNCTION(_wrap_zxid_entity_sha1_name_set);
ZEND_NAMED_FUNCTION(_wrap_zxid_entity_sha1_name_get);
ZEND_NAMED_FUNCTION(_wrap_zxid_entity_tls_cert_set);
ZEND_NAMED_FUNCTION(_wrap_zxid_entity_tls_cert_get);
ZEND_NAMED_FUNCTION(_wrap_zxid_entity_sign_cert_set);
ZEND_NAMED_FUNCTION(_wrap_zxid_entity_sign_cert_get);
ZEND_NAMED_FUNCTION(_wrap_zxid_entity_enc_cert_set);
ZEND_NAMED_FUNCTION(_wrap_zxid_entity_enc_cert_get);
ZEND_NAMED_FUNCTION(_wrap_zxid_entity_ed_set);
ZEND_NAMED_FUNCTION(_wrap_zxid_entity_ed_get);
ZEND_NAMED_FUNCTION(_wrap_new_zxid_entity);
ZEND_NAMED_FUNCTION(_wrap_zxid_simple);
ZEND_NAMED_FUNCTION(_wrap_zxid_idp_list);
ZEND_NAMED_FUNCTION(_wrap_zxid_idp_select);
ZEND_NAMED_FUNCTION(_wrap_zxid_fed_mgmt);
ZEND_NAMED_FUNCTION(_wrap_zxid_new_conf_to_cf);
ZEND_NAMED_FUNCTION(_wrap_zxid_simple_cf);
ZEND_NAMED_FUNCTION(_wrap_zxid_idp_list_cf);
ZEND_NAMED_FUNCTION(_wrap_zxid_idp_select_cf);
ZEND_NAMED_FUNCTION(_wrap_zxid_fed_mgmt_cf);
ZEND_NAMED_FUNCTION(_wrap_zxid_conf_to_cf_len);
ZEND_NAMED_FUNCTION(_wrap_zxid_simple_len);
ZEND_NAMED_FUNCTION(_wrap_zxid_idp_list_len);
ZEND_NAMED_FUNCTION(_wrap_zxid_idp_select_len);
ZEND_NAMED_FUNCTION(_wrap_zxid_fed_mgmt_len);
ZEND_NAMED_FUNCTION(_wrap_zxid_idp_select_zxstr_cf);
ZEND_NAMED_FUNCTION(_wrap_zxid_ses_to_ldif);
ZEND_NAMED_FUNCTION(_wrap_zxid_simple_render_ses);
ZEND_NAMED_FUNCTION(_wrap_zxid_simple_ses_active_cf);
ZEND_NAMED_FUNCTION(_wrap_zxid_simple_no_ses_cf);
ZEND_NAMED_FUNCTION(_wrap_zxsig_ref_sref_set);
ZEND_NAMED_FUNCTION(_wrap_zxsig_ref_sref_get);
ZEND_NAMED_FUNCTION(_wrap_zxsig_ref_blob_set);
ZEND_NAMED_FUNCTION(_wrap_zxsig_ref_blob_get);
ZEND_NAMED_FUNCTION(_wrap_zxsig_ref_id_set);
ZEND_NAMED_FUNCTION(_wrap_zxsig_ref_id_get);
ZEND_NAMED_FUNCTION(_wrap_zxsig_ref_canon_set);
ZEND_NAMED_FUNCTION(_wrap_zxsig_ref_canon_get);
ZEND_NAMED_FUNCTION(_wrap_new_zxsig_ref);
ZEND_NAMED_FUNCTION(_wrap_zxsig_sign);
ZEND_NAMED_FUNCTION(_wrap_zxsig_validate);
ZEND_NAMED_FUNCTION(_wrap_zxsig_data_rsa_sha1);
ZEND_NAMED_FUNCTION(_wrap_zxsig_verify_data_rsa_sha1);
ZEND_NAMED_FUNCTION(_wrap_zxenc_symkey_dec);
ZEND_NAMED_FUNCTION(_wrap_zxenc_privkey_dec);
ZEND_NAMED_FUNCTION(_wrap_zxenc_symkey_enc);
ZEND_NAMED_FUNCTION(_wrap_zxenc_pubkey_enc);
ZEND_NAMED_FUNCTION(_wrap_zxlog_write_line);
ZEND_NAMED_FUNCTION(_wrap_zxlog_path);
ZEND_NAMED_FUNCTION(_wrap_zxlog_dup_check);
ZEND_NAMED_FUNCTION(_wrap_zxlog_blob);
ZEND_NAMED_FUNCTION(_wrap_zxlog);
ZEND_NAMED_FUNCTION(_wrap_zxid_get_ent_from_file);
ZEND_NAMED_FUNCTION(_wrap_zxid_get_ent_from_cache);
ZEND_NAMED_FUNCTION(_wrap_zxid_write_ent_to_cache);
ZEND_NAMED_FUNCTION(_wrap_zxid_parse_meta);
ZEND_NAMED_FUNCTION(_wrap_zxid_get_meta_ss);
ZEND_NAMED_FUNCTION(_wrap_zxid_get_meta);
ZEND_NAMED_FUNCTION(_wrap_zxid_get_ent_ss);
ZEND_NAMED_FUNCTION(_wrap_zxid_get_ent);
ZEND_NAMED_FUNCTION(_wrap_zxid_get_ent_by_succinct_id);
ZEND_NAMED_FUNCTION(_wrap_zxid_get_ent_by_sha1_name);
ZEND_NAMED_FUNCTION(_wrap_zxid_load_cot_cache);
ZEND_NAMED_FUNCTION(_wrap_zxid_key_info);
ZEND_NAMED_FUNCTION(_wrap_zxid_key_desc);
ZEND_NAMED_FUNCTION(_wrap_zxid_slo_desc);
ZEND_NAMED_FUNCTION(_wrap_zxid_mni_desc);
ZEND_NAMED_FUNCTION(_wrap_zxid_ac_desc);
ZEND_NAMED_FUNCTION(_wrap_zxid_sp_sso_desc);
ZEND_NAMED_FUNCTION(_wrap_zxid_sp_meta);
ZEND_NAMED_FUNCTION(_wrap_zxid_send_sp_meta);
ZEND_NAMED_FUNCTION(_wrap_zxid_my_entity_id);
ZEND_NAMED_FUNCTION(_wrap_zxid_my_cdc_url);
ZEND_NAMED_FUNCTION(_wrap_zxid_my_issuer);
ZEND_NAMED_FUNCTION(_wrap_zxid_sha1_file);
ZEND_NAMED_FUNCTION(_wrap_zxid_extract_cert);
ZEND_NAMED_FUNCTION(_wrap_zxid_extract_private_key);
ZEND_NAMED_FUNCTION(_wrap_zxid_read_cert);
ZEND_NAMED_FUNCTION(_wrap_zxid_read_private_key);
ZEND_NAMED_FUNCTION(_wrap_zxid_set_opt);
ZEND_NAMED_FUNCTION(_wrap_zxid_url_set);
ZEND_NAMED_FUNCTION(_wrap_zxid_init_conf);
ZEND_NAMED_FUNCTION(_wrap_zxid_init_conf_ctx);
ZEND_NAMED_FUNCTION(_wrap_zxid_new_conf);
ZEND_NAMED_FUNCTION(_wrap_zxid_parse_conf_raw);
ZEND_NAMED_FUNCTION(_wrap_zxid_parse_conf);
ZEND_NAMED_FUNCTION(_wrap_zxid_parse_cgi);
ZEND_NAMED_FUNCTION(_wrap_zxid_new_cgi);
ZEND_NAMED_FUNCTION(_wrap_zxid_get_sid_from_cookie);
ZEND_NAMED_FUNCTION(_wrap_zxid_fetch_ses);
ZEND_NAMED_FUNCTION(_wrap_zxid_get_ses);
ZEND_NAMED_FUNCTION(_wrap_zxid_put_ses);
ZEND_NAMED_FUNCTION(_wrap_zxid_del_ses);
ZEND_NAMED_FUNCTION(_wrap_zxid_get_ses_sso_a7n);
ZEND_NAMED_FUNCTION(_wrap_zxid_get_ses_idp);
ZEND_NAMED_FUNCTION(_wrap_zxid_find_ses);
ZEND_NAMED_FUNCTION(_wrap_zxid_put_user);
ZEND_NAMED_FUNCTION(_wrap_zxid_get_user_nameid);
ZEND_NAMED_FUNCTION(_wrap_zxid_user_change_nameid);
ZEND_NAMED_FUNCTION(_wrap_zxid_soap_call_raw);
ZEND_NAMED_FUNCTION(_wrap_zxid_lecp_check);
ZEND_NAMED_FUNCTION(_wrap_zxid_cdc_read);
ZEND_NAMED_FUNCTION(_wrap_zxid_cdc_check);
ZEND_NAMED_FUNCTION(_wrap_zxid_soap_call_envelope);
ZEND_NAMED_FUNCTION(_wrap_zxid_soap_call_hdr_body);
ZEND_NAMED_FUNCTION(_wrap_zxid_soap_call_body);
ZEND_NAMED_FUNCTION(_wrap_zxid_soap_cgi_resp_body);
ZEND_NAMED_FUNCTION(_wrap_zxid_saml2_redir_enc);
ZEND_NAMED_FUNCTION(_wrap_zxid_saml2_redir);
ZEND_NAMED_FUNCTION(_wrap_zxid_saml2_redir_url);
ZEND_NAMED_FUNCTION(_wrap_zxid_saml2_location);
ZEND_NAMED_FUNCTION(_wrap_zxid_saml2_resp_location);
ZEND_NAMED_FUNCTION(_wrap_zxid_saml2_resp_redir);
ZEND_NAMED_FUNCTION(_wrap_zxid_saml_ok);
ZEND_NAMED_FUNCTION(_wrap_zxid_decrypt_nameid);
ZEND_NAMED_FUNCTION(_wrap_zxid_decrypt_newnym);
ZEND_NAMED_FUNCTION(_wrap_zxid_idp_loc_raw);
ZEND_NAMED_FUNCTION(_wrap_zxid_idp_loc);
ZEND_NAMED_FUNCTION(_wrap_zxid_idp_soap);
ZEND_NAMED_FUNCTION(_wrap_zxid_pick_sso_profile);
ZEND_NAMED_FUNCTION(_wrap_zxid_start_sso);
ZEND_NAMED_FUNCTION(_wrap_zxid_start_sso_url);
ZEND_NAMED_FUNCTION(_wrap_zxid_start_sso_location);
ZEND_NAMED_FUNCTION(_wrap_zxid_sp_deref_art);
ZEND_NAMED_FUNCTION(_wrap_zxid_sp_sso_finalize);
ZEND_NAMED_FUNCTION(_wrap_zxid_saml2_map_nid_fmt);
ZEND_NAMED_FUNCTION(_wrap_zxid_saml2_map_protocol_binding);
ZEND_NAMED_FUNCTION(_wrap_zxid_saml2_map_authn_ctx);
ZEND_NAMED_FUNCTION(_wrap_zxid_date_time);
ZEND_NAMED_FUNCTION(_wrap_zxid_mk_id);
ZEND_NAMED_FUNCTION(_wrap_zxid_issuer);
ZEND_NAMED_FUNCTION(_wrap_zxid_sigres_map);
ZEND_NAMED_FUNCTION(_wrap_zxid_sp_slo_soap);
ZEND_NAMED_FUNCTION(_wrap_zxid_sp_slo_redir);
ZEND_NAMED_FUNCTION(_wrap_zxid_sp_slo_location);
ZEND_NAMED_FUNCTION(_wrap_zxid_sp_dispatch_location);
ZEND_NAMED_FUNCTION(_wrap_zxid_sp_dispatch);
ZEND_NAMED_FUNCTION(_wrap_zxid_sp_soap_dispatch);
ZEND_NAMED_FUNCTION(_wrap_zxid_sp_soap_parse);
ZEND_NAMED_FUNCTION(_wrap_zxid_sp_mni_soap);
ZEND_NAMED_FUNCTION(_wrap_zxid_sp_mni_redir);
ZEND_NAMED_FUNCTION(_wrap_zxid_sp_mni_location);
ZEND_NAMED_FUNCTION(_wrap_zxid_mni_do);
ZEND_NAMED_FUNCTION(_wrap_zxid_mni_do_ss);
ZEND_NAMED_FUNCTION(_wrap_zxid_find_attribute);
ZEND_NAMED_FUNCTION(_wrap_zxid_mk_authn_req);
ZEND_NAMED_FUNCTION(_wrap_zxid_mk_art_deref);
ZEND_NAMED_FUNCTION(_wrap_zxid_mk_Status);
ZEND_NAMED_FUNCTION(_wrap_zxid_OK);
ZEND_NAMED_FUNCTION(_wrap_zxid_mk_logout);
ZEND_NAMED_FUNCTION(_wrap_zxid_mk_logout_resp);
ZEND_NAMED_FUNCTION(_wrap_zxid_mk_mni);
ZEND_NAMED_FUNCTION(_wrap_zxid_mk_mni_resp);
ZEND_NAMED_FUNCTION(_wrap_zxid_mk_di_query);
ZEND_NAMED_FUNCTION(_wrap_zxid_mk_addr);
ZEND_NAMED_FUNCTION(_wrap_zxid_mk_dap_select);
ZEND_NAMED_FUNCTION(_wrap_zxid_mk_dap_query_item);
ZEND_NAMED_FUNCTION(_wrap_zxid_mk_dap_testop);
ZEND_NAMED_FUNCTION(_wrap_zxid_mk_dap_test_item);
ZEND_NAMED_FUNCTION(_wrap_zxid_mk_dap_resquery);
ZEND_NAMED_FUNCTION(_wrap_zxid_mk_dap_subscription);
ZEND_NAMED_FUNCTION(_wrap_zxid_mk_dap_query);
ZEND_NAMED_FUNCTION(_wrap_zxid_map_sec_mech);
ZEND_NAMED_FUNCTION(_wrap_zxid_wsc_call);
ZEND_NAMED_FUNCTION(_wrap_zxid_new_envf);
ZEND_NAMED_FUNCTION(_wrap_zxid_callf);
ZEND_NAMED_FUNCTION(_wrap_zxid_get_epr);
ZEND_NAMED_FUNCTION(_wrap_zxid_find_epr);
ZEND_NAMED_FUNCTION(_wrap_zxid_cache_epr);
ZEND_NAMED_FUNCTION(_wrap_zxid_snarf_eprs_from_ses);
ZEND_NAMED_FUNCTION(_wrap_std_basis_64_set);
ZEND_NAMED_FUNCTION(_wrap_std_basis_64_get);
ZEND_NAMED_FUNCTION(_wrap_safe_basis_64_set);
ZEND_NAMED_FUNCTION(_wrap_safe_basis_64_get);
ZEND_NAMED_FUNCTION(_wrap_zx_std_index_64_set);
ZEND_NAMED_FUNCTION(_wrap_zx_std_index_64_get);
ZEND_NAMED_FUNCTION(_wrap_base64_fancy_raw);
ZEND_NAMED_FUNCTION(_wrap_unbase64_raw);
ZEND_NAMED_FUNCTION(_wrap_sha1_safe_base64);
ZEND_NAMED_FUNCTION(_wrap_zx_zlib_raw_deflate);
ZEND_NAMED_FUNCTION(_wrap_zx_zlib_raw_inflate);
ZEND_NAMED_FUNCTION(_wrap_zx_url_encode_len);
ZEND_NAMED_FUNCTION(_wrap_zx_url_encode_raw);
ZEND_NAMED_FUNCTION(_wrap_zx_url_encode);
ZEND_NAMED_FUNCTION(_wrap_read_all);
ZEND_NAMED_FUNCTION(_wrap_name_from_path);
ZEND_NAMED_FUNCTION(_wrap_open_fd_from_path);
ZEND_NAMED_FUNCTION(_wrap_read_all_fd);
ZEND_NAMED_FUNCTION(_wrap_write_all_fd);
ZEND_NAMED_FUNCTION(_wrap_write_all_path_fmt);
ZEND_NAMED_FUNCTION(_wrap_close_file);
ZEND_NAMED_FUNCTION(_wrap_zxid_curl_ctx_p_set);
ZEND_NAMED_FUNCTION(_wrap_zxid_curl_ctx_p_get);
ZEND_NAMED_FUNCTION(_wrap_zxid_curl_ctx_lim_set);
ZEND_NAMED_FUNCTION(_wrap_zxid_curl_ctx_lim_get);
ZEND_NAMED_FUNCTION(_wrap_new_zxid_curl_ctx);
ZEND_NAMED_FUNCTION(_wrap_zxid_curl_write_data);
ZEND_NAMED_FUNCTION(_wrap_zxid_curl_read_data);
ZEND_NAMED_FUNCTION(_wrap_zxid_version);
ZEND_NAMED_FUNCTION(_wrap_zxid_version_str);
#endif /* PHP_ZXID_H */
