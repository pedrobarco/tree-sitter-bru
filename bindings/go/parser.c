#include "parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 94
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 90
#define ALIAS_COUNT 0
#define TOKEN_COUNT 42
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  anon_sym_meta = 1,
  anon_sym_get = 2,
  anon_sym_post = 3,
  anon_sym_put = 4,
  anon_sym_delete = 5,
  anon_sym_patch = 6,
  anon_sym_options = 7,
  anon_sym_head = 8,
  anon_sym_connect = 9,
  anon_sym_trace = 10,
  anon_sym_query = 11,
  anon_sym_headers = 12,
  anon_sym_auth_COLONawsv4 = 13,
  anon_sym_auth_COLONbasic = 14,
  anon_sym_auth_COLONbearer = 15,
  anon_sym_auth_COLONdigest = 16,
  anon_sym_auth_COLONoauth2 = 17,
  anon_sym_body_COLONjson = 18,
  anon_sym_body_COLONtext = 19,
  anon_sym_body_COLONxml = 20,
  anon_sym_body_COLONsparql = 21,
  anon_sym_body_COLONgraphql = 22,
  anon_sym_body_COLONgraphql_COLONvars = 23,
  anon_sym_body_COLONform_DASHurlencoded = 24,
  anon_sym_body_COLONmultipart_DASHform = 25,
  anon_sym_body = 26,
  anon_sym_vars_COLONpre_DASHrequest = 27,
  anon_sym_vars_COLONpost_DASHresponse = 28,
  anon_sym_assert = 29,
  anon_sym_script_COLONpre_DASHrequest = 30,
  anon_sym_script_COLONpost_DASHresponse = 31,
  anon_sym_tests = 32,
  anon_sym_docs = 33,
  anon_sym_LBRACE = 34,
  anon_sym_RBRACE = 35,
  anon_sym_COLON = 36,
  sym_key = 37,
  sym_value = 38,
  sym__any = 39,
  sym__nl = 40,
  sym_comment = 41,
  sym_document = 42,
  sym_meta = 43,
  sym_http = 44,
  sym_get = 45,
  sym_post = 46,
  sym_put = 47,
  sym_delete = 48,
  sym_patch = 49,
  sym_options = 50,
  sym_head = 51,
  sym_connect = 52,
  sym_trace = 53,
  sym_query = 54,
  sym_headers = 55,
  sym_auths = 56,
  sym_auth_awsv4 = 57,
  sym_auth_basic = 58,
  sym_auth_bearer = 59,
  sym_auth_digest = 60,
  sym_auth_oauth2 = 61,
  sym_bodies = 62,
  sym_body_json = 63,
  sym_body_text = 64,
  sym_body_xml = 65,
  sym_body_sparql = 66,
  sym_body_graphql = 67,
  sym_body_graphql_vars = 68,
  sym_body_form_urlencoded = 69,
  sym_body_multipart_form = 70,
  sym_body = 71,
  sym_vars = 72,
  sym_vars_pre_request = 73,
  sym_vars_post_response = 74,
  sym_assert = 75,
  sym_scripts = 76,
  sym_script_pre_request = 77,
  sym_script_post_response = 78,
  sym_tests = 79,
  sym_docs = 80,
  sym_dictionary_block = 81,
  sym_dictionary = 82,
  sym_pair = 83,
  sym_text_block = 84,
  sym_text = 85,
  sym__text = 86,
  aux_sym_document_repeat1 = 87,
  aux_sym_dictionary_repeat1 = 88,
  aux_sym_text_repeat1 = 89,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_meta] = "meta",
  [anon_sym_get] = "get",
  [anon_sym_post] = "post",
  [anon_sym_put] = "put",
  [anon_sym_delete] = "delete",
  [anon_sym_patch] = "patch",
  [anon_sym_options] = "options",
  [anon_sym_head] = "head",
  [anon_sym_connect] = "connect",
  [anon_sym_trace] = "trace",
  [anon_sym_query] = "query",
  [anon_sym_headers] = "headers",
  [anon_sym_auth_COLONawsv4] = "auth:awsv4",
  [anon_sym_auth_COLONbasic] = "auth:basic",
  [anon_sym_auth_COLONbearer] = "auth:bearer",
  [anon_sym_auth_COLONdigest] = "auth:digest",
  [anon_sym_auth_COLONoauth2] = "auth:oauth2",
  [anon_sym_body_COLONjson] = "body:json",
  [anon_sym_body_COLONtext] = "body:text",
  [anon_sym_body_COLONxml] = "body:xml",
  [anon_sym_body_COLONsparql] = "body:sparql",
  [anon_sym_body_COLONgraphql] = "body:graphql",
  [anon_sym_body_COLONgraphql_COLONvars] = "body:graphql:vars",
  [anon_sym_body_COLONform_DASHurlencoded] = "body:form-urlencoded",
  [anon_sym_body_COLONmultipart_DASHform] = "body:multipart-form",
  [anon_sym_body] = "body",
  [anon_sym_vars_COLONpre_DASHrequest] = "vars:pre-request",
  [anon_sym_vars_COLONpost_DASHresponse] = "vars:post-response",
  [anon_sym_assert] = "assert",
  [anon_sym_script_COLONpre_DASHrequest] = "script:pre-request",
  [anon_sym_script_COLONpost_DASHresponse] = "script:post-response",
  [anon_sym_tests] = "tests",
  [anon_sym_docs] = "docs",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_COLON] = ":",
  [sym_key] = "key",
  [sym_value] = "value",
  [sym__any] = "_any",
  [sym__nl] = "_nl",
  [sym_comment] = "comment",
  [sym_document] = "document",
  [sym_meta] = "meta",
  [sym_http] = "http",
  [sym_get] = "get",
  [sym_post] = "post",
  [sym_put] = "put",
  [sym_delete] = "delete",
  [sym_patch] = "patch",
  [sym_options] = "options",
  [sym_head] = "head",
  [sym_connect] = "connect",
  [sym_trace] = "trace",
  [sym_query] = "query",
  [sym_headers] = "headers",
  [sym_auths] = "auths",
  [sym_auth_awsv4] = "auth_awsv4",
  [sym_auth_basic] = "auth_basic",
  [sym_auth_bearer] = "auth_bearer",
  [sym_auth_digest] = "auth_digest",
  [sym_auth_oauth2] = "auth_oauth2",
  [sym_bodies] = "bodies",
  [sym_body_json] = "body_json",
  [sym_body_text] = "body_text",
  [sym_body_xml] = "body_xml",
  [sym_body_sparql] = "body_sparql",
  [sym_body_graphql] = "body_graphql",
  [sym_body_graphql_vars] = "body_graphql_vars",
  [sym_body_form_urlencoded] = "body_form_urlencoded",
  [sym_body_multipart_form] = "body_multipart_form",
  [sym_body] = "body",
  [sym_vars] = "vars",
  [sym_vars_pre_request] = "vars_pre_request",
  [sym_vars_post_response] = "vars_post_response",
  [sym_assert] = "assert",
  [sym_scripts] = "scripts",
  [sym_script_pre_request] = "script_pre_request",
  [sym_script_post_response] = "script_post_response",
  [sym_tests] = "tests",
  [sym_docs] = "docs",
  [sym_dictionary_block] = "dictionary_block",
  [sym_dictionary] = "dictionary",
  [sym_pair] = "pair",
  [sym_text_block] = "text_block",
  [sym_text] = "text",
  [sym__text] = "_text",
  [aux_sym_document_repeat1] = "document_repeat1",
  [aux_sym_dictionary_repeat1] = "dictionary_repeat1",
  [aux_sym_text_repeat1] = "text_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_meta] = anon_sym_meta,
  [anon_sym_get] = anon_sym_get,
  [anon_sym_post] = anon_sym_post,
  [anon_sym_put] = anon_sym_put,
  [anon_sym_delete] = anon_sym_delete,
  [anon_sym_patch] = anon_sym_patch,
  [anon_sym_options] = anon_sym_options,
  [anon_sym_head] = anon_sym_head,
  [anon_sym_connect] = anon_sym_connect,
  [anon_sym_trace] = anon_sym_trace,
  [anon_sym_query] = anon_sym_query,
  [anon_sym_headers] = anon_sym_headers,
  [anon_sym_auth_COLONawsv4] = anon_sym_auth_COLONawsv4,
  [anon_sym_auth_COLONbasic] = anon_sym_auth_COLONbasic,
  [anon_sym_auth_COLONbearer] = anon_sym_auth_COLONbearer,
  [anon_sym_auth_COLONdigest] = anon_sym_auth_COLONdigest,
  [anon_sym_auth_COLONoauth2] = anon_sym_auth_COLONoauth2,
  [anon_sym_body_COLONjson] = anon_sym_body_COLONjson,
  [anon_sym_body_COLONtext] = anon_sym_body_COLONtext,
  [anon_sym_body_COLONxml] = anon_sym_body_COLONxml,
  [anon_sym_body_COLONsparql] = anon_sym_body_COLONsparql,
  [anon_sym_body_COLONgraphql] = anon_sym_body_COLONgraphql,
  [anon_sym_body_COLONgraphql_COLONvars] = anon_sym_body_COLONgraphql_COLONvars,
  [anon_sym_body_COLONform_DASHurlencoded] = anon_sym_body_COLONform_DASHurlencoded,
  [anon_sym_body_COLONmultipart_DASHform] = anon_sym_body_COLONmultipart_DASHform,
  [anon_sym_body] = anon_sym_body,
  [anon_sym_vars_COLONpre_DASHrequest] = anon_sym_vars_COLONpre_DASHrequest,
  [anon_sym_vars_COLONpost_DASHresponse] = anon_sym_vars_COLONpost_DASHresponse,
  [anon_sym_assert] = anon_sym_assert,
  [anon_sym_script_COLONpre_DASHrequest] = anon_sym_script_COLONpre_DASHrequest,
  [anon_sym_script_COLONpost_DASHresponse] = anon_sym_script_COLONpost_DASHresponse,
  [anon_sym_tests] = anon_sym_tests,
  [anon_sym_docs] = anon_sym_docs,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_COLON] = anon_sym_COLON,
  [sym_key] = sym_key,
  [sym_value] = sym_value,
  [sym__any] = sym__any,
  [sym__nl] = sym__nl,
  [sym_comment] = sym_comment,
  [sym_document] = sym_document,
  [sym_meta] = sym_meta,
  [sym_http] = sym_http,
  [sym_get] = sym_get,
  [sym_post] = sym_post,
  [sym_put] = sym_put,
  [sym_delete] = sym_delete,
  [sym_patch] = sym_patch,
  [sym_options] = sym_options,
  [sym_head] = sym_head,
  [sym_connect] = sym_connect,
  [sym_trace] = sym_trace,
  [sym_query] = sym_query,
  [sym_headers] = sym_headers,
  [sym_auths] = sym_auths,
  [sym_auth_awsv4] = sym_auth_awsv4,
  [sym_auth_basic] = sym_auth_basic,
  [sym_auth_bearer] = sym_auth_bearer,
  [sym_auth_digest] = sym_auth_digest,
  [sym_auth_oauth2] = sym_auth_oauth2,
  [sym_bodies] = sym_bodies,
  [sym_body_json] = sym_body_json,
  [sym_body_text] = sym_body_text,
  [sym_body_xml] = sym_body_xml,
  [sym_body_sparql] = sym_body_sparql,
  [sym_body_graphql] = sym_body_graphql,
  [sym_body_graphql_vars] = sym_body_graphql_vars,
  [sym_body_form_urlencoded] = sym_body_form_urlencoded,
  [sym_body_multipart_form] = sym_body_multipart_form,
  [sym_body] = sym_body,
  [sym_vars] = sym_vars,
  [sym_vars_pre_request] = sym_vars_pre_request,
  [sym_vars_post_response] = sym_vars_post_response,
  [sym_assert] = sym_assert,
  [sym_scripts] = sym_scripts,
  [sym_script_pre_request] = sym_script_pre_request,
  [sym_script_post_response] = sym_script_post_response,
  [sym_tests] = sym_tests,
  [sym_docs] = sym_docs,
  [sym_dictionary_block] = sym_dictionary_block,
  [sym_dictionary] = sym_dictionary,
  [sym_pair] = sym_pair,
  [sym_text_block] = sym_text_block,
  [sym_text] = sym_text,
  [sym__text] = sym__text,
  [aux_sym_document_repeat1] = aux_sym_document_repeat1,
  [aux_sym_dictionary_repeat1] = aux_sym_dictionary_repeat1,
  [aux_sym_text_repeat1] = aux_sym_text_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_meta] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_get] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_post] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_put] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_delete] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_patch] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_options] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_head] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_connect] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_trace] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_query] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_headers] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_auth_COLONawsv4] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_auth_COLONbasic] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_auth_COLONbearer] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_auth_COLONdigest] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_auth_COLONoauth2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_body_COLONjson] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_body_COLONtext] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_body_COLONxml] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_body_COLONsparql] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_body_COLONgraphql] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_body_COLONgraphql_COLONvars] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_body_COLONform_DASHurlencoded] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_body_COLONmultipart_DASHform] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_body] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_vars_COLONpre_DASHrequest] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_vars_COLONpost_DASHresponse] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_assert] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_script_COLONpre_DASHrequest] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_script_COLONpost_DASHresponse] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_tests] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_docs] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [sym_key] = {
    .visible = true,
    .named = true,
  },
  [sym_value] = {
    .visible = true,
    .named = true,
  },
  [sym__any] = {
    .visible = false,
    .named = true,
  },
  [sym__nl] = {
    .visible = false,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_document] = {
    .visible = true,
    .named = true,
  },
  [sym_meta] = {
    .visible = true,
    .named = true,
  },
  [sym_http] = {
    .visible = true,
    .named = true,
  },
  [sym_get] = {
    .visible = true,
    .named = true,
  },
  [sym_post] = {
    .visible = true,
    .named = true,
  },
  [sym_put] = {
    .visible = true,
    .named = true,
  },
  [sym_delete] = {
    .visible = true,
    .named = true,
  },
  [sym_patch] = {
    .visible = true,
    .named = true,
  },
  [sym_options] = {
    .visible = true,
    .named = true,
  },
  [sym_head] = {
    .visible = true,
    .named = true,
  },
  [sym_connect] = {
    .visible = true,
    .named = true,
  },
  [sym_trace] = {
    .visible = true,
    .named = true,
  },
  [sym_query] = {
    .visible = true,
    .named = true,
  },
  [sym_headers] = {
    .visible = true,
    .named = true,
  },
  [sym_auths] = {
    .visible = true,
    .named = true,
  },
  [sym_auth_awsv4] = {
    .visible = true,
    .named = true,
  },
  [sym_auth_basic] = {
    .visible = true,
    .named = true,
  },
  [sym_auth_bearer] = {
    .visible = true,
    .named = true,
  },
  [sym_auth_digest] = {
    .visible = true,
    .named = true,
  },
  [sym_auth_oauth2] = {
    .visible = true,
    .named = true,
  },
  [sym_bodies] = {
    .visible = true,
    .named = true,
  },
  [sym_body_json] = {
    .visible = true,
    .named = true,
  },
  [sym_body_text] = {
    .visible = true,
    .named = true,
  },
  [sym_body_xml] = {
    .visible = true,
    .named = true,
  },
  [sym_body_sparql] = {
    .visible = true,
    .named = true,
  },
  [sym_body_graphql] = {
    .visible = true,
    .named = true,
  },
  [sym_body_graphql_vars] = {
    .visible = true,
    .named = true,
  },
  [sym_body_form_urlencoded] = {
    .visible = true,
    .named = true,
  },
  [sym_body_multipart_form] = {
    .visible = true,
    .named = true,
  },
  [sym_body] = {
    .visible = true,
    .named = true,
  },
  [sym_vars] = {
    .visible = true,
    .named = true,
  },
  [sym_vars_pre_request] = {
    .visible = true,
    .named = true,
  },
  [sym_vars_post_response] = {
    .visible = true,
    .named = true,
  },
  [sym_assert] = {
    .visible = true,
    .named = true,
  },
  [sym_scripts] = {
    .visible = true,
    .named = true,
  },
  [sym_script_pre_request] = {
    .visible = true,
    .named = true,
  },
  [sym_script_post_response] = {
    .visible = true,
    .named = true,
  },
  [sym_tests] = {
    .visible = true,
    .named = true,
  },
  [sym_docs] = {
    .visible = true,
    .named = true,
  },
  [sym_dictionary_block] = {
    .visible = true,
    .named = true,
  },
  [sym_dictionary] = {
    .visible = true,
    .named = true,
  },
  [sym_pair] = {
    .visible = true,
    .named = true,
  },
  [sym_text_block] = {
    .visible = true,
    .named = true,
  },
  [sym_text] = {
    .visible = true,
    .named = true,
  },
  [sym__text] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_document_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_dictionary_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_text_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(191);
      ADVANCE_MAP(
        '#', 235,
        ':', 227,
        'a', 136,
        'b', 94,
        'c', 95,
        'd', 40,
        'g', 48,
        'h', 47,
        'm', 50,
        'o', 106,
        'p', 23,
        'q', 180,
        's', 29,
        't', 59,
        'v', 19,
        '{', 225,
        '}', 226,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(234);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(228);
      if (lookahead == '}') ADVANCE(226);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(1);
      if (lookahead != 0 &&
          lookahead != ':') ADVANCE(229);
      END_STATE();
    case 2:
      if (lookahead == '#') ADVANCE(231);
      if (lookahead == '{') ADVANCE(225);
      if (lookahead == '}') ADVANCE(226);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(232);
      if (lookahead != 0) ADVANCE(233);
      END_STATE();
    case 3:
      if (lookahead == '#') ADVANCE(228);
      if (lookahead == '}') ADVANCE(226);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(3);
      if (lookahead != 0 &&
          lookahead != ':') ADVANCE(229);
      END_STATE();
    case 4:
      if (lookahead == '#') ADVANCE(230);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(4);
      if (lookahead != 0) ADVANCE(230);
      END_STATE();
    case 5:
      if (lookahead == '-') ADVANCE(67);
      END_STATE();
    case 6:
      if (lookahead == '-') ADVANCE(181);
      END_STATE();
    case 7:
      if (lookahead == '-') ADVANCE(128);
      END_STATE();
    case 8:
      if (lookahead == '-') ADVANCE(130);
      END_STATE();
    case 9:
      if (lookahead == '-') ADVANCE(135);
      END_STATE();
    case 10:
      if (lookahead == '-') ADVANCE(134);
      END_STATE();
    case 11:
      if (lookahead == '2') ADVANCE(208);
      END_STATE();
    case 12:
      if (lookahead == '4') ADVANCE(204);
      END_STATE();
    case 13:
      if (lookahead == ':') ADVANCE(17);
      END_STATE();
    case 14:
      if (lookahead == ':') ADVANCE(105);
      END_STATE();
    case 15:
      if (lookahead == ':') ADVANCE(113);
      END_STATE();
    case 16:
      if (lookahead == 'a') ADVANCE(192);
      END_STATE();
    case 17:
      if (lookahead == 'a') ADVANCE(187);
      if (lookahead == 'b') ADVANCE(26);
      if (lookahead == 'd') ADVANCE(73);
      if (lookahead == 'o') ADVANCE(20);
      END_STATE();
    case 18:
      if (lookahead == 'a') ADVANCE(37);
      END_STATE();
    case 19:
      if (lookahead == 'a') ADVANCE(124);
      END_STATE();
    case 20:
      if (lookahead == 'a') ADVANCE(182);
      END_STATE();
    case 21:
      if (lookahead == 'a') ADVANCE(107);
      END_STATE();
    case 22:
      if (lookahead == 'a') ADVANCE(33);
      END_STATE();
    case 23:
      if (lookahead == 'a') ADVANCE(169);
      if (lookahead == 'o') ADVANCE(146);
      if (lookahead == 'u') ADVANCE(161);
      END_STATE();
    case 24:
      if (lookahead == 'a') ADVANCE(133);
      END_STATE();
    case 25:
      if (lookahead == 'a') ADVANCE(118);
      END_STATE();
    case 26:
      if (lookahead == 'a') ADVANCE(144);
      if (lookahead == 'e') ADVANCE(24);
      END_STATE();
    case 27:
      if (lookahead == 'a') ADVANCE(132);
      END_STATE();
    case 28:
      if (lookahead == 'a') ADVANCE(131);
      END_STATE();
    case 29:
      if (lookahead == 'c') ADVANCE(121);
      END_STATE();
    case 30:
      if (lookahead == 'c') ADVANCE(205);
      END_STATE();
    case 31:
      if (lookahead == 'c') ADVANCE(70);
      END_STATE();
    case 32:
      if (lookahead == 'c') ADVANCE(137);
      END_STATE();
    case 33:
      if (lookahead == 'c') ADVANCE(41);
      END_STATE();
    case 34:
      if (lookahead == 'c') ADVANCE(164);
      END_STATE();
    case 35:
      if (lookahead == 'c') ADVANCE(96);
      END_STATE();
    case 36:
      if (lookahead == 'd') ADVANCE(189);
      END_STATE();
    case 37:
      if (lookahead == 'd') ADVANCE(199);
      END_STATE();
    case 38:
      if (lookahead == 'd') ADVANCE(215);
      END_STATE();
    case 39:
      if (lookahead == 'd') ADVANCE(52);
      END_STATE();
    case 40:
      if (lookahead == 'e') ADVANCE(83);
      if (lookahead == 'o') ADVANCE(32);
      END_STATE();
    case 41:
      if (lookahead == 'e') ADVANCE(201);
      END_STATE();
    case 42:
      if (lookahead == 'e') ADVANCE(196);
      END_STATE();
    case 43:
      if (lookahead == 'e') ADVANCE(188);
      END_STATE();
    case 44:
      if (lookahead == 'e') ADVANCE(7);
      END_STATE();
    case 45:
      if (lookahead == 'e') ADVANCE(219);
      END_STATE();
    case 46:
      if (lookahead == 'e') ADVANCE(222);
      END_STATE();
    case 47:
      if (lookahead == 'e') ADVANCE(18);
      END_STATE();
    case 48:
      if (lookahead == 'e') ADVANCE(159);
      END_STATE();
    case 49:
      if (lookahead == 'e') ADVANCE(116);
      END_STATE();
    case 50:
      if (lookahead == 'e') ADVANCE(172);
      END_STATE();
    case 51:
      if (lookahead == 'e') ADVANCE(120);
      END_STATE();
    case 52:
      if (lookahead == 'e') ADVANCE(38);
      END_STATE();
    case 53:
      if (lookahead == 'e') ADVANCE(129);
      END_STATE();
    case 54:
      if (lookahead == 'e') ADVANCE(34);
      END_STATE();
    case 55:
      if (lookahead == 'e') ADVANCE(90);
      END_STATE();
    case 56:
      if (lookahead == 'e') ADVANCE(175);
      END_STATE();
    case 57:
      if (lookahead == 'e') ADVANCE(119);
      END_STATE();
    case 58:
      if (lookahead == 'e') ADVANCE(145);
      END_STATE();
    case 59:
      if (lookahead == 'e') ADVANCE(147);
      if (lookahead == 'r') ADVANCE(22);
      END_STATE();
    case 60:
      if (lookahead == 'e') ADVANCE(151);
      END_STATE();
    case 61:
      if (lookahead == 'e') ADVANCE(152);
      END_STATE();
    case 62:
      if (lookahead == 'e') ADVANCE(153);
      END_STATE();
    case 63:
      if (lookahead == 'e') ADVANCE(156);
      END_STATE();
    case 64:
      if (lookahead == 'e') ADVANCE(117);
      END_STATE();
    case 65:
      if (lookahead == 'e') ADVANCE(10);
      END_STATE();
    case 66:
      if (lookahead == 'f') ADVANCE(100);
      if (lookahead == 'g') ADVANCE(125);
      if (lookahead == 'j') ADVANCE(154);
      if (lookahead == 'm') ADVANCE(179);
      if (lookahead == 's') ADVANCE(109);
      if (lookahead == 't') ADVANCE(43);
      if (lookahead == 'x') ADVANCE(86);
      END_STATE();
    case 67:
      if (lookahead == 'f') ADVANCE(101);
      END_STATE();
    case 68:
      if (lookahead == 'g') ADVANCE(60);
      END_STATE();
    case 69:
      if (lookahead == 'h') ADVANCE(13);
      END_STATE();
    case 70:
      if (lookahead == 'h') ADVANCE(197);
      END_STATE();
    case 71:
      if (lookahead == 'h') ADVANCE(11);
      END_STATE();
    case 72:
      if (lookahead == 'h') ADVANCE(115);
      END_STATE();
    case 73:
      if (lookahead == 'i') ADVANCE(68);
      END_STATE();
    case 74:
      if (lookahead == 'i') ADVANCE(97);
      END_STATE();
    case 75:
      if (lookahead == 'i') ADVANCE(30);
      END_STATE();
    case 76:
      if (lookahead == 'i') ADVANCE(108);
      END_STATE();
    case 77:
      if (lookahead == 'i') ADVANCE(111);
      END_STATE();
    case 78:
      if (lookahead == 'l') ADVANCE(211);
      END_STATE();
    case 79:
      if (lookahead == 'l') ADVANCE(212);
      END_STATE();
    case 80:
      if (lookahead == 'l') ADVANCE(213);
      END_STATE();
    case 81:
      if (lookahead == 'l') ADVANCE(55);
      END_STATE();
    case 82:
      if (lookahead == 'l') ADVANCE(174);
      END_STATE();
    case 83:
      if (lookahead == 'l') ADVANCE(56);
      END_STATE();
    case 84:
      if (lookahead == 'm') ADVANCE(216);
      END_STATE();
    case 85:
      if (lookahead == 'm') ADVANCE(6);
      END_STATE();
    case 86:
      if (lookahead == 'm') ADVANCE(78);
      END_STATE();
    case 87:
      if (lookahead == 'n') ADVANCE(209);
      END_STATE();
    case 88:
      if (lookahead == 'n') ADVANCE(89);
      END_STATE();
    case 89:
      if (lookahead == 'n') ADVANCE(54);
      END_STATE();
    case 90:
      if (lookahead == 'n') ADVANCE(35);
      END_STATE();
    case 91:
      if (lookahead == 'n') ADVANCE(140);
      END_STATE();
    case 92:
      if (lookahead == 'n') ADVANCE(148);
      END_STATE();
    case 93:
      if (lookahead == 'n') ADVANCE(149);
      END_STATE();
    case 94:
      if (lookahead == 'o') ADVANCE(36);
      END_STATE();
    case 95:
      if (lookahead == 'o') ADVANCE(88);
      END_STATE();
    case 96:
      if (lookahead == 'o') ADVANCE(39);
      END_STATE();
    case 97:
      if (lookahead == 'o') ADVANCE(91);
      END_STATE();
    case 98:
      if (lookahead == 'o') ADVANCE(87);
      END_STATE();
    case 99:
      if (lookahead == 'o') ADVANCE(92);
      END_STATE();
    case 100:
      if (lookahead == 'o') ADVANCE(122);
      END_STATE();
    case 101:
      if (lookahead == 'o') ADVANCE(123);
      END_STATE();
    case 102:
      if (lookahead == 'o') ADVANCE(150);
      if (lookahead == 'r') ADVANCE(44);
      END_STATE();
    case 103:
      if (lookahead == 'o') ADVANCE(93);
      END_STATE();
    case 104:
      if (lookahead == 'o') ADVANCE(157);
      if (lookahead == 'r') ADVANCE(65);
      END_STATE();
    case 105:
      if (lookahead == 'p') ADVANCE(102);
      END_STATE();
    case 106:
      if (lookahead == 'p') ADVANCE(160);
      END_STATE();
    case 107:
      if (lookahead == 'p') ADVANCE(72);
      END_STATE();
    case 108:
      if (lookahead == 'p') ADVANCE(178);
      END_STATE();
    case 109:
      if (lookahead == 'p') ADVANCE(25);
      END_STATE();
    case 110:
      if (lookahead == 'p') ADVANCE(99);
      END_STATE();
    case 111:
      if (lookahead == 'p') ADVANCE(27);
      END_STATE();
    case 112:
      if (lookahead == 'p') ADVANCE(103);
      END_STATE();
    case 113:
      if (lookahead == 'p') ADVANCE(104);
      END_STATE();
    case 114:
      if (lookahead == 'q') ADVANCE(79);
      END_STATE();
    case 115:
      if (lookahead == 'q') ADVANCE(80);
      END_STATE();
    case 116:
      if (lookahead == 'q') ADVANCE(183);
      END_STATE();
    case 117:
      if (lookahead == 'q') ADVANCE(184);
      END_STATE();
    case 118:
      if (lookahead == 'r') ADVANCE(114);
      END_STATE();
    case 119:
      if (lookahead == 'r') ADVANCE(206);
      END_STATE();
    case 120:
      if (lookahead == 'r') ADVANCE(190);
      END_STATE();
    case 121:
      if (lookahead == 'r') ADVANCE(76);
      END_STATE();
    case 122:
      if (lookahead == 'r') ADVANCE(85);
      END_STATE();
    case 123:
      if (lookahead == 'r') ADVANCE(84);
      END_STATE();
    case 124:
      if (lookahead == 'r') ADVANCE(143);
      END_STATE();
    case 125:
      if (lookahead == 'r') ADVANCE(21);
      END_STATE();
    case 126:
      if (lookahead == 'r') ADVANCE(81);
      END_STATE();
    case 127:
      if (lookahead == 'r') ADVANCE(139);
      END_STATE();
    case 128:
      if (lookahead == 'r') ADVANCE(49);
      END_STATE();
    case 129:
      if (lookahead == 'r') ADVANCE(163);
      END_STATE();
    case 130:
      if (lookahead == 'r') ADVANCE(58);
      END_STATE();
    case 131:
      if (lookahead == 'r') ADVANCE(142);
      END_STATE();
    case 132:
      if (lookahead == 'r') ADVANCE(171);
      END_STATE();
    case 133:
      if (lookahead == 'r') ADVANCE(57);
      END_STATE();
    case 134:
      if (lookahead == 'r') ADVANCE(64);
      END_STATE();
    case 135:
      if (lookahead == 'r') ADVANCE(63);
      END_STATE();
    case 136:
      if (lookahead == 's') ADVANCE(155);
      if (lookahead == 'u') ADVANCE(158);
      END_STATE();
    case 137:
      if (lookahead == 's') ADVANCE(224);
      END_STATE();
    case 138:
      if (lookahead == 's') ADVANCE(223);
      END_STATE();
    case 139:
      if (lookahead == 's') ADVANCE(203);
      END_STATE();
    case 140:
      if (lookahead == 's') ADVANCE(198);
      END_STATE();
    case 141:
      if (lookahead == 's') ADVANCE(185);
      END_STATE();
    case 142:
      if (lookahead == 's') ADVANCE(214);
      END_STATE();
    case 143:
      if (lookahead == 's') ADVANCE(14);
      END_STATE();
    case 144:
      if (lookahead == 's') ADVANCE(75);
      END_STATE();
    case 145:
      if (lookahead == 's') ADVANCE(110);
      END_STATE();
    case 146:
      if (lookahead == 's') ADVANCE(162);
      END_STATE();
    case 147:
      if (lookahead == 's') ADVANCE(173);
      END_STATE();
    case 148:
      if (lookahead == 's') ADVANCE(45);
      END_STATE();
    case 149:
      if (lookahead == 's') ADVANCE(46);
      END_STATE();
    case 150:
      if (lookahead == 's') ADVANCE(176);
      END_STATE();
    case 151:
      if (lookahead == 's') ADVANCE(166);
      END_STATE();
    case 152:
      if (lookahead == 's') ADVANCE(167);
      END_STATE();
    case 153:
      if (lookahead == 's') ADVANCE(168);
      END_STATE();
    case 154:
      if (lookahead == 's') ADVANCE(98);
      END_STATE();
    case 155:
      if (lookahead == 's') ADVANCE(53);
      END_STATE();
    case 156:
      if (lookahead == 's') ADVANCE(112);
      END_STATE();
    case 157:
      if (lookahead == 's') ADVANCE(177);
      END_STATE();
    case 158:
      if (lookahead == 't') ADVANCE(69);
      END_STATE();
    case 159:
      if (lookahead == 't') ADVANCE(193);
      END_STATE();
    case 160:
      if (lookahead == 't') ADVANCE(74);
      END_STATE();
    case 161:
      if (lookahead == 't') ADVANCE(195);
      END_STATE();
    case 162:
      if (lookahead == 't') ADVANCE(194);
      END_STATE();
    case 163:
      if (lookahead == 't') ADVANCE(220);
      END_STATE();
    case 164:
      if (lookahead == 't') ADVANCE(200);
      END_STATE();
    case 165:
      if (lookahead == 't') ADVANCE(210);
      END_STATE();
    case 166:
      if (lookahead == 't') ADVANCE(207);
      END_STATE();
    case 167:
      if (lookahead == 't') ADVANCE(218);
      END_STATE();
    case 168:
      if (lookahead == 't') ADVANCE(221);
      END_STATE();
    case 169:
      if (lookahead == 't') ADVANCE(31);
      END_STATE();
    case 170:
      if (lookahead == 't') ADVANCE(71);
      END_STATE();
    case 171:
      if (lookahead == 't') ADVANCE(5);
      END_STATE();
    case 172:
      if (lookahead == 't') ADVANCE(16);
      END_STATE();
    case 173:
      if (lookahead == 't') ADVANCE(138);
      END_STATE();
    case 174:
      if (lookahead == 't') ADVANCE(77);
      END_STATE();
    case 175:
      if (lookahead == 't') ADVANCE(42);
      END_STATE();
    case 176:
      if (lookahead == 't') ADVANCE(8);
      END_STATE();
    case 177:
      if (lookahead == 't') ADVANCE(9);
      END_STATE();
    case 178:
      if (lookahead == 't') ADVANCE(15);
      END_STATE();
    case 179:
      if (lookahead == 'u') ADVANCE(82);
      END_STATE();
    case 180:
      if (lookahead == 'u') ADVANCE(51);
      END_STATE();
    case 181:
      if (lookahead == 'u') ADVANCE(126);
      END_STATE();
    case 182:
      if (lookahead == 'u') ADVANCE(170);
      END_STATE();
    case 183:
      if (lookahead == 'u') ADVANCE(61);
      END_STATE();
    case 184:
      if (lookahead == 'u') ADVANCE(62);
      END_STATE();
    case 185:
      if (lookahead == 'v') ADVANCE(12);
      END_STATE();
    case 186:
      if (lookahead == 'v') ADVANCE(28);
      END_STATE();
    case 187:
      if (lookahead == 'w') ADVANCE(141);
      END_STATE();
    case 188:
      if (lookahead == 'x') ADVANCE(165);
      END_STATE();
    case 189:
      if (lookahead == 'y') ADVANCE(217);
      END_STATE();
    case 190:
      if (lookahead == 'y') ADVANCE(202);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(anon_sym_meta);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_get);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_post);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_put);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_delete);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(anon_sym_patch);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(anon_sym_options);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_head);
      if (lookahead == 'e') ADVANCE(127);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_connect);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_trace);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_query);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_headers);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(anon_sym_auth_COLONawsv4);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_auth_COLONbasic);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_auth_COLONbearer);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_auth_COLONdigest);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(anon_sym_auth_COLONoauth2);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(anon_sym_body_COLONjson);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(anon_sym_body_COLONtext);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(anon_sym_body_COLONxml);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(anon_sym_body_COLONsparql);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(anon_sym_body_COLONgraphql);
      if (lookahead == ':') ADVANCE(186);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(anon_sym_body_COLONgraphql_COLONvars);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(anon_sym_body_COLONform_DASHurlencoded);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(anon_sym_body_COLONmultipart_DASHform);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(anon_sym_body);
      if (lookahead == ':') ADVANCE(66);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(anon_sym_vars_COLONpre_DASHrequest);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(anon_sym_vars_COLONpost_DASHresponse);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(anon_sym_assert);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(anon_sym_script_COLONpre_DASHrequest);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(anon_sym_script_COLONpost_DASHresponse);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(anon_sym_tests);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(anon_sym_docs);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == ':' ||
          lookahead == '}') ADVANCE(235);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(228);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_key);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ':' &&
          lookahead != '}') ADVANCE(229);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_value);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(230);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym__any);
      if (lookahead == '\n') ADVANCE(233);
      if (lookahead == '{' ||
          lookahead == '}') ADVANCE(235);
      if (lookahead != 0) ADVANCE(231);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym__any);
      if (lookahead == '#') ADVANCE(231);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(232);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(233);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym__any);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(233);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym__nl);
      if (lookahead == '\n') ADVANCE(234);
      if (lookahead == '\r') ADVANCE(1);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(235);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 2},
  [45] = {.lex_state = 2},
  [46] = {.lex_state = 2},
  [47] = {.lex_state = 2},
  [48] = {.lex_state = 2},
  [49] = {.lex_state = 3},
  [50] = {.lex_state = 3},
  [51] = {.lex_state = 3},
  [52] = {.lex_state = 2},
  [53] = {.lex_state = 1},
  [54] = {.lex_state = 2},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 3},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 4},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_meta] = ACTIONS(1),
    [anon_sym_get] = ACTIONS(1),
    [anon_sym_post] = ACTIONS(1),
    [anon_sym_put] = ACTIONS(1),
    [anon_sym_delete] = ACTIONS(1),
    [anon_sym_patch] = ACTIONS(1),
    [anon_sym_options] = ACTIONS(1),
    [anon_sym_head] = ACTIONS(1),
    [anon_sym_connect] = ACTIONS(1),
    [anon_sym_trace] = ACTIONS(1),
    [anon_sym_query] = ACTIONS(1),
    [anon_sym_headers] = ACTIONS(1),
    [anon_sym_auth_COLONawsv4] = ACTIONS(1),
    [anon_sym_auth_COLONbasic] = ACTIONS(1),
    [anon_sym_auth_COLONbearer] = ACTIONS(1),
    [anon_sym_auth_COLONdigest] = ACTIONS(1),
    [anon_sym_auth_COLONoauth2] = ACTIONS(1),
    [anon_sym_body_COLONjson] = ACTIONS(1),
    [anon_sym_body_COLONtext] = ACTIONS(1),
    [anon_sym_body_COLONxml] = ACTIONS(1),
    [anon_sym_body_COLONsparql] = ACTIONS(1),
    [anon_sym_body_COLONgraphql] = ACTIONS(1),
    [anon_sym_body_COLONgraphql_COLONvars] = ACTIONS(1),
    [anon_sym_body_COLONform_DASHurlencoded] = ACTIONS(1),
    [anon_sym_body_COLONmultipart_DASHform] = ACTIONS(1),
    [anon_sym_body] = ACTIONS(1),
    [anon_sym_vars_COLONpre_DASHrequest] = ACTIONS(1),
    [anon_sym_vars_COLONpost_DASHresponse] = ACTIONS(1),
    [anon_sym_assert] = ACTIONS(1),
    [anon_sym_script_COLONpre_DASHrequest] = ACTIONS(1),
    [anon_sym_script_COLONpost_DASHresponse] = ACTIONS(1),
    [anon_sym_tests] = ACTIONS(1),
    [anon_sym_docs] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_document] = STATE(90),
    [sym_meta] = STATE(2),
    [sym_http] = STATE(2),
    [sym_get] = STATE(36),
    [sym_post] = STATE(36),
    [sym_put] = STATE(36),
    [sym_delete] = STATE(36),
    [sym_patch] = STATE(36),
    [sym_options] = STATE(36),
    [sym_head] = STATE(36),
    [sym_connect] = STATE(36),
    [sym_trace] = STATE(36),
    [sym_query] = STATE(2),
    [sym_headers] = STATE(2),
    [sym_auths] = STATE(2),
    [sym_auth_awsv4] = STATE(37),
    [sym_auth_basic] = STATE(37),
    [sym_auth_bearer] = STATE(37),
    [sym_auth_digest] = STATE(37),
    [sym_auth_oauth2] = STATE(37),
    [sym_bodies] = STATE(2),
    [sym_body_json] = STATE(38),
    [sym_body_text] = STATE(38),
    [sym_body_xml] = STATE(38),
    [sym_body_sparql] = STATE(38),
    [sym_body_graphql] = STATE(38),
    [sym_body_graphql_vars] = STATE(38),
    [sym_body_form_urlencoded] = STATE(38),
    [sym_body_multipart_form] = STATE(38),
    [sym_body] = STATE(38),
    [sym_vars] = STATE(2),
    [sym_vars_pre_request] = STATE(39),
    [sym_vars_post_response] = STATE(39),
    [sym_assert] = STATE(2),
    [sym_scripts] = STATE(2),
    [sym_script_pre_request] = STATE(40),
    [sym_script_post_response] = STATE(40),
    [sym_tests] = STATE(2),
    [sym_docs] = STATE(2),
    [aux_sym_document_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_meta] = ACTIONS(7),
    [anon_sym_get] = ACTIONS(9),
    [anon_sym_post] = ACTIONS(11),
    [anon_sym_put] = ACTIONS(13),
    [anon_sym_delete] = ACTIONS(15),
    [anon_sym_patch] = ACTIONS(17),
    [anon_sym_options] = ACTIONS(19),
    [anon_sym_head] = ACTIONS(21),
    [anon_sym_connect] = ACTIONS(23),
    [anon_sym_trace] = ACTIONS(25),
    [anon_sym_query] = ACTIONS(27),
    [anon_sym_headers] = ACTIONS(29),
    [anon_sym_auth_COLONawsv4] = ACTIONS(31),
    [anon_sym_auth_COLONbasic] = ACTIONS(33),
    [anon_sym_auth_COLONbearer] = ACTIONS(35),
    [anon_sym_auth_COLONdigest] = ACTIONS(37),
    [anon_sym_auth_COLONoauth2] = ACTIONS(39),
    [anon_sym_body_COLONjson] = ACTIONS(41),
    [anon_sym_body_COLONtext] = ACTIONS(43),
    [anon_sym_body_COLONxml] = ACTIONS(45),
    [anon_sym_body_COLONsparql] = ACTIONS(47),
    [anon_sym_body_COLONgraphql] = ACTIONS(49),
    [anon_sym_body_COLONgraphql_COLONvars] = ACTIONS(51),
    [anon_sym_body_COLONform_DASHurlencoded] = ACTIONS(53),
    [anon_sym_body_COLONmultipart_DASHform] = ACTIONS(55),
    [anon_sym_body] = ACTIONS(57),
    [anon_sym_vars_COLONpre_DASHrequest] = ACTIONS(59),
    [anon_sym_vars_COLONpost_DASHresponse] = ACTIONS(61),
    [anon_sym_assert] = ACTIONS(63),
    [anon_sym_script_COLONpre_DASHrequest] = ACTIONS(65),
    [anon_sym_script_COLONpost_DASHresponse] = ACTIONS(67),
    [anon_sym_tests] = ACTIONS(69),
    [anon_sym_docs] = ACTIONS(71),
    [sym_comment] = ACTIONS(3),
  },
  [2] = {
    [sym_meta] = STATE(3),
    [sym_http] = STATE(3),
    [sym_get] = STATE(36),
    [sym_post] = STATE(36),
    [sym_put] = STATE(36),
    [sym_delete] = STATE(36),
    [sym_patch] = STATE(36),
    [sym_options] = STATE(36),
    [sym_head] = STATE(36),
    [sym_connect] = STATE(36),
    [sym_trace] = STATE(36),
    [sym_query] = STATE(3),
    [sym_headers] = STATE(3),
    [sym_auths] = STATE(3),
    [sym_auth_awsv4] = STATE(37),
    [sym_auth_basic] = STATE(37),
    [sym_auth_bearer] = STATE(37),
    [sym_auth_digest] = STATE(37),
    [sym_auth_oauth2] = STATE(37),
    [sym_bodies] = STATE(3),
    [sym_body_json] = STATE(38),
    [sym_body_text] = STATE(38),
    [sym_body_xml] = STATE(38),
    [sym_body_sparql] = STATE(38),
    [sym_body_graphql] = STATE(38),
    [sym_body_graphql_vars] = STATE(38),
    [sym_body_form_urlencoded] = STATE(38),
    [sym_body_multipart_form] = STATE(38),
    [sym_body] = STATE(38),
    [sym_vars] = STATE(3),
    [sym_vars_pre_request] = STATE(39),
    [sym_vars_post_response] = STATE(39),
    [sym_assert] = STATE(3),
    [sym_scripts] = STATE(3),
    [sym_script_pre_request] = STATE(40),
    [sym_script_post_response] = STATE(40),
    [sym_tests] = STATE(3),
    [sym_docs] = STATE(3),
    [aux_sym_document_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(73),
    [anon_sym_meta] = ACTIONS(7),
    [anon_sym_get] = ACTIONS(9),
    [anon_sym_post] = ACTIONS(11),
    [anon_sym_put] = ACTIONS(13),
    [anon_sym_delete] = ACTIONS(15),
    [anon_sym_patch] = ACTIONS(17),
    [anon_sym_options] = ACTIONS(19),
    [anon_sym_head] = ACTIONS(21),
    [anon_sym_connect] = ACTIONS(23),
    [anon_sym_trace] = ACTIONS(25),
    [anon_sym_query] = ACTIONS(27),
    [anon_sym_headers] = ACTIONS(29),
    [anon_sym_auth_COLONawsv4] = ACTIONS(31),
    [anon_sym_auth_COLONbasic] = ACTIONS(33),
    [anon_sym_auth_COLONbearer] = ACTIONS(35),
    [anon_sym_auth_COLONdigest] = ACTIONS(37),
    [anon_sym_auth_COLONoauth2] = ACTIONS(39),
    [anon_sym_body_COLONjson] = ACTIONS(41),
    [anon_sym_body_COLONtext] = ACTIONS(43),
    [anon_sym_body_COLONxml] = ACTIONS(45),
    [anon_sym_body_COLONsparql] = ACTIONS(47),
    [anon_sym_body_COLONgraphql] = ACTIONS(49),
    [anon_sym_body_COLONgraphql_COLONvars] = ACTIONS(51),
    [anon_sym_body_COLONform_DASHurlencoded] = ACTIONS(53),
    [anon_sym_body_COLONmultipart_DASHform] = ACTIONS(55),
    [anon_sym_body] = ACTIONS(57),
    [anon_sym_vars_COLONpre_DASHrequest] = ACTIONS(59),
    [anon_sym_vars_COLONpost_DASHresponse] = ACTIONS(61),
    [anon_sym_assert] = ACTIONS(63),
    [anon_sym_script_COLONpre_DASHrequest] = ACTIONS(65),
    [anon_sym_script_COLONpost_DASHresponse] = ACTIONS(67),
    [anon_sym_tests] = ACTIONS(69),
    [anon_sym_docs] = ACTIONS(71),
    [sym_comment] = ACTIONS(3),
  },
  [3] = {
    [sym_meta] = STATE(3),
    [sym_http] = STATE(3),
    [sym_get] = STATE(36),
    [sym_post] = STATE(36),
    [sym_put] = STATE(36),
    [sym_delete] = STATE(36),
    [sym_patch] = STATE(36),
    [sym_options] = STATE(36),
    [sym_head] = STATE(36),
    [sym_connect] = STATE(36),
    [sym_trace] = STATE(36),
    [sym_query] = STATE(3),
    [sym_headers] = STATE(3),
    [sym_auths] = STATE(3),
    [sym_auth_awsv4] = STATE(37),
    [sym_auth_basic] = STATE(37),
    [sym_auth_bearer] = STATE(37),
    [sym_auth_digest] = STATE(37),
    [sym_auth_oauth2] = STATE(37),
    [sym_bodies] = STATE(3),
    [sym_body_json] = STATE(38),
    [sym_body_text] = STATE(38),
    [sym_body_xml] = STATE(38),
    [sym_body_sparql] = STATE(38),
    [sym_body_graphql] = STATE(38),
    [sym_body_graphql_vars] = STATE(38),
    [sym_body_form_urlencoded] = STATE(38),
    [sym_body_multipart_form] = STATE(38),
    [sym_body] = STATE(38),
    [sym_vars] = STATE(3),
    [sym_vars_pre_request] = STATE(39),
    [sym_vars_post_response] = STATE(39),
    [sym_assert] = STATE(3),
    [sym_scripts] = STATE(3),
    [sym_script_pre_request] = STATE(40),
    [sym_script_post_response] = STATE(40),
    [sym_tests] = STATE(3),
    [sym_docs] = STATE(3),
    [aux_sym_document_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(75),
    [anon_sym_meta] = ACTIONS(77),
    [anon_sym_get] = ACTIONS(80),
    [anon_sym_post] = ACTIONS(83),
    [anon_sym_put] = ACTIONS(86),
    [anon_sym_delete] = ACTIONS(89),
    [anon_sym_patch] = ACTIONS(92),
    [anon_sym_options] = ACTIONS(95),
    [anon_sym_head] = ACTIONS(98),
    [anon_sym_connect] = ACTIONS(101),
    [anon_sym_trace] = ACTIONS(104),
    [anon_sym_query] = ACTIONS(107),
    [anon_sym_headers] = ACTIONS(110),
    [anon_sym_auth_COLONawsv4] = ACTIONS(113),
    [anon_sym_auth_COLONbasic] = ACTIONS(116),
    [anon_sym_auth_COLONbearer] = ACTIONS(119),
    [anon_sym_auth_COLONdigest] = ACTIONS(122),
    [anon_sym_auth_COLONoauth2] = ACTIONS(125),
    [anon_sym_body_COLONjson] = ACTIONS(128),
    [anon_sym_body_COLONtext] = ACTIONS(131),
    [anon_sym_body_COLONxml] = ACTIONS(134),
    [anon_sym_body_COLONsparql] = ACTIONS(137),
    [anon_sym_body_COLONgraphql] = ACTIONS(140),
    [anon_sym_body_COLONgraphql_COLONvars] = ACTIONS(143),
    [anon_sym_body_COLONform_DASHurlencoded] = ACTIONS(146),
    [anon_sym_body_COLONmultipart_DASHform] = ACTIONS(149),
    [anon_sym_body] = ACTIONS(152),
    [anon_sym_vars_COLONpre_DASHrequest] = ACTIONS(155),
    [anon_sym_vars_COLONpost_DASHresponse] = ACTIONS(158),
    [anon_sym_assert] = ACTIONS(161),
    [anon_sym_script_COLONpre_DASHrequest] = ACTIONS(164),
    [anon_sym_script_COLONpost_DASHresponse] = ACTIONS(167),
    [anon_sym_tests] = ACTIONS(170),
    [anon_sym_docs] = ACTIONS(173),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(178), 3,
      anon_sym_head,
      anon_sym_body_COLONgraphql,
      anon_sym_body,
    ACTIONS(176), 31,
      ts_builtin_sym_end,
      anon_sym_meta,
      anon_sym_get,
      anon_sym_post,
      anon_sym_put,
      anon_sym_delete,
      anon_sym_patch,
      anon_sym_options,
      anon_sym_connect,
      anon_sym_trace,
      anon_sym_query,
      anon_sym_headers,
      anon_sym_auth_COLONawsv4,
      anon_sym_auth_COLONbasic,
      anon_sym_auth_COLONbearer,
      anon_sym_auth_COLONdigest,
      anon_sym_auth_COLONoauth2,
      anon_sym_body_COLONjson,
      anon_sym_body_COLONtext,
      anon_sym_body_COLONxml,
      anon_sym_body_COLONsparql,
      anon_sym_body_COLONgraphql_COLONvars,
      anon_sym_body_COLONform_DASHurlencoded,
      anon_sym_body_COLONmultipart_DASHform,
      anon_sym_vars_COLONpre_DASHrequest,
      anon_sym_vars_COLONpost_DASHresponse,
      anon_sym_assert,
      anon_sym_script_COLONpre_DASHrequest,
      anon_sym_script_COLONpost_DASHresponse,
      anon_sym_tests,
      anon_sym_docs,
  [42] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(182), 3,
      anon_sym_head,
      anon_sym_body_COLONgraphql,
      anon_sym_body,
    ACTIONS(180), 31,
      ts_builtin_sym_end,
      anon_sym_meta,
      anon_sym_get,
      anon_sym_post,
      anon_sym_put,
      anon_sym_delete,
      anon_sym_patch,
      anon_sym_options,
      anon_sym_connect,
      anon_sym_trace,
      anon_sym_query,
      anon_sym_headers,
      anon_sym_auth_COLONawsv4,
      anon_sym_auth_COLONbasic,
      anon_sym_auth_COLONbearer,
      anon_sym_auth_COLONdigest,
      anon_sym_auth_COLONoauth2,
      anon_sym_body_COLONjson,
      anon_sym_body_COLONtext,
      anon_sym_body_COLONxml,
      anon_sym_body_COLONsparql,
      anon_sym_body_COLONgraphql_COLONvars,
      anon_sym_body_COLONform_DASHurlencoded,
      anon_sym_body_COLONmultipart_DASHform,
      anon_sym_vars_COLONpre_DASHrequest,
      anon_sym_vars_COLONpost_DASHresponse,
      anon_sym_assert,
      anon_sym_script_COLONpre_DASHrequest,
      anon_sym_script_COLONpost_DASHresponse,
      anon_sym_tests,
      anon_sym_docs,
  [84] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(186), 3,
      anon_sym_head,
      anon_sym_body_COLONgraphql,
      anon_sym_body,
    ACTIONS(184), 31,
      ts_builtin_sym_end,
      anon_sym_meta,
      anon_sym_get,
      anon_sym_post,
      anon_sym_put,
      anon_sym_delete,
      anon_sym_patch,
      anon_sym_options,
      anon_sym_connect,
      anon_sym_trace,
      anon_sym_query,
      anon_sym_headers,
      anon_sym_auth_COLONawsv4,
      anon_sym_auth_COLONbasic,
      anon_sym_auth_COLONbearer,
      anon_sym_auth_COLONdigest,
      anon_sym_auth_COLONoauth2,
      anon_sym_body_COLONjson,
      anon_sym_body_COLONtext,
      anon_sym_body_COLONxml,
      anon_sym_body_COLONsparql,
      anon_sym_body_COLONgraphql_COLONvars,
      anon_sym_body_COLONform_DASHurlencoded,
      anon_sym_body_COLONmultipart_DASHform,
      anon_sym_vars_COLONpre_DASHrequest,
      anon_sym_vars_COLONpost_DASHresponse,
      anon_sym_assert,
      anon_sym_script_COLONpre_DASHrequest,
      anon_sym_script_COLONpost_DASHresponse,
      anon_sym_tests,
      anon_sym_docs,
  [126] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(190), 3,
      anon_sym_head,
      anon_sym_body_COLONgraphql,
      anon_sym_body,
    ACTIONS(188), 31,
      ts_builtin_sym_end,
      anon_sym_meta,
      anon_sym_get,
      anon_sym_post,
      anon_sym_put,
      anon_sym_delete,
      anon_sym_patch,
      anon_sym_options,
      anon_sym_connect,
      anon_sym_trace,
      anon_sym_query,
      anon_sym_headers,
      anon_sym_auth_COLONawsv4,
      anon_sym_auth_COLONbasic,
      anon_sym_auth_COLONbearer,
      anon_sym_auth_COLONdigest,
      anon_sym_auth_COLONoauth2,
      anon_sym_body_COLONjson,
      anon_sym_body_COLONtext,
      anon_sym_body_COLONxml,
      anon_sym_body_COLONsparql,
      anon_sym_body_COLONgraphql_COLONvars,
      anon_sym_body_COLONform_DASHurlencoded,
      anon_sym_body_COLONmultipart_DASHform,
      anon_sym_vars_COLONpre_DASHrequest,
      anon_sym_vars_COLONpost_DASHresponse,
      anon_sym_assert,
      anon_sym_script_COLONpre_DASHrequest,
      anon_sym_script_COLONpost_DASHresponse,
      anon_sym_tests,
      anon_sym_docs,
  [168] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(194), 3,
      anon_sym_head,
      anon_sym_body_COLONgraphql,
      anon_sym_body,
    ACTIONS(192), 31,
      ts_builtin_sym_end,
      anon_sym_meta,
      anon_sym_get,
      anon_sym_post,
      anon_sym_put,
      anon_sym_delete,
      anon_sym_patch,
      anon_sym_options,
      anon_sym_connect,
      anon_sym_trace,
      anon_sym_query,
      anon_sym_headers,
      anon_sym_auth_COLONawsv4,
      anon_sym_auth_COLONbasic,
      anon_sym_auth_COLONbearer,
      anon_sym_auth_COLONdigest,
      anon_sym_auth_COLONoauth2,
      anon_sym_body_COLONjson,
      anon_sym_body_COLONtext,
      anon_sym_body_COLONxml,
      anon_sym_body_COLONsparql,
      anon_sym_body_COLONgraphql_COLONvars,
      anon_sym_body_COLONform_DASHurlencoded,
      anon_sym_body_COLONmultipart_DASHform,
      anon_sym_vars_COLONpre_DASHrequest,
      anon_sym_vars_COLONpost_DASHresponse,
      anon_sym_assert,
      anon_sym_script_COLONpre_DASHrequest,
      anon_sym_script_COLONpost_DASHresponse,
      anon_sym_tests,
      anon_sym_docs,
  [210] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(198), 3,
      anon_sym_head,
      anon_sym_body_COLONgraphql,
      anon_sym_body,
    ACTIONS(196), 31,
      ts_builtin_sym_end,
      anon_sym_meta,
      anon_sym_get,
      anon_sym_post,
      anon_sym_put,
      anon_sym_delete,
      anon_sym_patch,
      anon_sym_options,
      anon_sym_connect,
      anon_sym_trace,
      anon_sym_query,
      anon_sym_headers,
      anon_sym_auth_COLONawsv4,
      anon_sym_auth_COLONbasic,
      anon_sym_auth_COLONbearer,
      anon_sym_auth_COLONdigest,
      anon_sym_auth_COLONoauth2,
      anon_sym_body_COLONjson,
      anon_sym_body_COLONtext,
      anon_sym_body_COLONxml,
      anon_sym_body_COLONsparql,
      anon_sym_body_COLONgraphql_COLONvars,
      anon_sym_body_COLONform_DASHurlencoded,
      anon_sym_body_COLONmultipart_DASHform,
      anon_sym_vars_COLONpre_DASHrequest,
      anon_sym_vars_COLONpost_DASHresponse,
      anon_sym_assert,
      anon_sym_script_COLONpre_DASHrequest,
      anon_sym_script_COLONpost_DASHresponse,
      anon_sym_tests,
      anon_sym_docs,
  [252] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(202), 3,
      anon_sym_head,
      anon_sym_body_COLONgraphql,
      anon_sym_body,
    ACTIONS(200), 31,
      ts_builtin_sym_end,
      anon_sym_meta,
      anon_sym_get,
      anon_sym_post,
      anon_sym_put,
      anon_sym_delete,
      anon_sym_patch,
      anon_sym_options,
      anon_sym_connect,
      anon_sym_trace,
      anon_sym_query,
      anon_sym_headers,
      anon_sym_auth_COLONawsv4,
      anon_sym_auth_COLONbasic,
      anon_sym_auth_COLONbearer,
      anon_sym_auth_COLONdigest,
      anon_sym_auth_COLONoauth2,
      anon_sym_body_COLONjson,
      anon_sym_body_COLONtext,
      anon_sym_body_COLONxml,
      anon_sym_body_COLONsparql,
      anon_sym_body_COLONgraphql_COLONvars,
      anon_sym_body_COLONform_DASHurlencoded,
      anon_sym_body_COLONmultipart_DASHform,
      anon_sym_vars_COLONpre_DASHrequest,
      anon_sym_vars_COLONpost_DASHresponse,
      anon_sym_assert,
      anon_sym_script_COLONpre_DASHrequest,
      anon_sym_script_COLONpost_DASHresponse,
      anon_sym_tests,
      anon_sym_docs,
  [294] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 3,
      anon_sym_head,
      anon_sym_body_COLONgraphql,
      anon_sym_body,
    ACTIONS(204), 31,
      ts_builtin_sym_end,
      anon_sym_meta,
      anon_sym_get,
      anon_sym_post,
      anon_sym_put,
      anon_sym_delete,
      anon_sym_patch,
      anon_sym_options,
      anon_sym_connect,
      anon_sym_trace,
      anon_sym_query,
      anon_sym_headers,
      anon_sym_auth_COLONawsv4,
      anon_sym_auth_COLONbasic,
      anon_sym_auth_COLONbearer,
      anon_sym_auth_COLONdigest,
      anon_sym_auth_COLONoauth2,
      anon_sym_body_COLONjson,
      anon_sym_body_COLONtext,
      anon_sym_body_COLONxml,
      anon_sym_body_COLONsparql,
      anon_sym_body_COLONgraphql_COLONvars,
      anon_sym_body_COLONform_DASHurlencoded,
      anon_sym_body_COLONmultipart_DASHform,
      anon_sym_vars_COLONpre_DASHrequest,
      anon_sym_vars_COLONpost_DASHresponse,
      anon_sym_assert,
      anon_sym_script_COLONpre_DASHrequest,
      anon_sym_script_COLONpost_DASHresponse,
      anon_sym_tests,
      anon_sym_docs,
  [336] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(210), 3,
      anon_sym_head,
      anon_sym_body_COLONgraphql,
      anon_sym_body,
    ACTIONS(208), 31,
      ts_builtin_sym_end,
      anon_sym_meta,
      anon_sym_get,
      anon_sym_post,
      anon_sym_put,
      anon_sym_delete,
      anon_sym_patch,
      anon_sym_options,
      anon_sym_connect,
      anon_sym_trace,
      anon_sym_query,
      anon_sym_headers,
      anon_sym_auth_COLONawsv4,
      anon_sym_auth_COLONbasic,
      anon_sym_auth_COLONbearer,
      anon_sym_auth_COLONdigest,
      anon_sym_auth_COLONoauth2,
      anon_sym_body_COLONjson,
      anon_sym_body_COLONtext,
      anon_sym_body_COLONxml,
      anon_sym_body_COLONsparql,
      anon_sym_body_COLONgraphql_COLONvars,
      anon_sym_body_COLONform_DASHurlencoded,
      anon_sym_body_COLONmultipart_DASHform,
      anon_sym_vars_COLONpre_DASHrequest,
      anon_sym_vars_COLONpost_DASHresponse,
      anon_sym_assert,
      anon_sym_script_COLONpre_DASHrequest,
      anon_sym_script_COLONpost_DASHresponse,
      anon_sym_tests,
      anon_sym_docs,
  [378] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(214), 3,
      anon_sym_head,
      anon_sym_body_COLONgraphql,
      anon_sym_body,
    ACTIONS(212), 31,
      ts_builtin_sym_end,
      anon_sym_meta,
      anon_sym_get,
      anon_sym_post,
      anon_sym_put,
      anon_sym_delete,
      anon_sym_patch,
      anon_sym_options,
      anon_sym_connect,
      anon_sym_trace,
      anon_sym_query,
      anon_sym_headers,
      anon_sym_auth_COLONawsv4,
      anon_sym_auth_COLONbasic,
      anon_sym_auth_COLONbearer,
      anon_sym_auth_COLONdigest,
      anon_sym_auth_COLONoauth2,
      anon_sym_body_COLONjson,
      anon_sym_body_COLONtext,
      anon_sym_body_COLONxml,
      anon_sym_body_COLONsparql,
      anon_sym_body_COLONgraphql_COLONvars,
      anon_sym_body_COLONform_DASHurlencoded,
      anon_sym_body_COLONmultipart_DASHform,
      anon_sym_vars_COLONpre_DASHrequest,
      anon_sym_vars_COLONpost_DASHresponse,
      anon_sym_assert,
      anon_sym_script_COLONpre_DASHrequest,
      anon_sym_script_COLONpost_DASHresponse,
      anon_sym_tests,
      anon_sym_docs,
  [420] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(218), 3,
      anon_sym_head,
      anon_sym_body_COLONgraphql,
      anon_sym_body,
    ACTIONS(216), 31,
      ts_builtin_sym_end,
      anon_sym_meta,
      anon_sym_get,
      anon_sym_post,
      anon_sym_put,
      anon_sym_delete,
      anon_sym_patch,
      anon_sym_options,
      anon_sym_connect,
      anon_sym_trace,
      anon_sym_query,
      anon_sym_headers,
      anon_sym_auth_COLONawsv4,
      anon_sym_auth_COLONbasic,
      anon_sym_auth_COLONbearer,
      anon_sym_auth_COLONdigest,
      anon_sym_auth_COLONoauth2,
      anon_sym_body_COLONjson,
      anon_sym_body_COLONtext,
      anon_sym_body_COLONxml,
      anon_sym_body_COLONsparql,
      anon_sym_body_COLONgraphql_COLONvars,
      anon_sym_body_COLONform_DASHurlencoded,
      anon_sym_body_COLONmultipart_DASHform,
      anon_sym_vars_COLONpre_DASHrequest,
      anon_sym_vars_COLONpost_DASHresponse,
      anon_sym_assert,
      anon_sym_script_COLONpre_DASHrequest,
      anon_sym_script_COLONpost_DASHresponse,
      anon_sym_tests,
      anon_sym_docs,
  [462] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(222), 3,
      anon_sym_head,
      anon_sym_body_COLONgraphql,
      anon_sym_body,
    ACTIONS(220), 31,
      ts_builtin_sym_end,
      anon_sym_meta,
      anon_sym_get,
      anon_sym_post,
      anon_sym_put,
      anon_sym_delete,
      anon_sym_patch,
      anon_sym_options,
      anon_sym_connect,
      anon_sym_trace,
      anon_sym_query,
      anon_sym_headers,
      anon_sym_auth_COLONawsv4,
      anon_sym_auth_COLONbasic,
      anon_sym_auth_COLONbearer,
      anon_sym_auth_COLONdigest,
      anon_sym_auth_COLONoauth2,
      anon_sym_body_COLONjson,
      anon_sym_body_COLONtext,
      anon_sym_body_COLONxml,
      anon_sym_body_COLONsparql,
      anon_sym_body_COLONgraphql_COLONvars,
      anon_sym_body_COLONform_DASHurlencoded,
      anon_sym_body_COLONmultipart_DASHform,
      anon_sym_vars_COLONpre_DASHrequest,
      anon_sym_vars_COLONpost_DASHresponse,
      anon_sym_assert,
      anon_sym_script_COLONpre_DASHrequest,
      anon_sym_script_COLONpost_DASHresponse,
      anon_sym_tests,
      anon_sym_docs,
  [504] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(226), 3,
      anon_sym_head,
      anon_sym_body_COLONgraphql,
      anon_sym_body,
    ACTIONS(224), 31,
      ts_builtin_sym_end,
      anon_sym_meta,
      anon_sym_get,
      anon_sym_post,
      anon_sym_put,
      anon_sym_delete,
      anon_sym_patch,
      anon_sym_options,
      anon_sym_connect,
      anon_sym_trace,
      anon_sym_query,
      anon_sym_headers,
      anon_sym_auth_COLONawsv4,
      anon_sym_auth_COLONbasic,
      anon_sym_auth_COLONbearer,
      anon_sym_auth_COLONdigest,
      anon_sym_auth_COLONoauth2,
      anon_sym_body_COLONjson,
      anon_sym_body_COLONtext,
      anon_sym_body_COLONxml,
      anon_sym_body_COLONsparql,
      anon_sym_body_COLONgraphql_COLONvars,
      anon_sym_body_COLONform_DASHurlencoded,
      anon_sym_body_COLONmultipart_DASHform,
      anon_sym_vars_COLONpre_DASHrequest,
      anon_sym_vars_COLONpost_DASHresponse,
      anon_sym_assert,
      anon_sym_script_COLONpre_DASHrequest,
      anon_sym_script_COLONpost_DASHresponse,
      anon_sym_tests,
      anon_sym_docs,
  [546] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(230), 3,
      anon_sym_head,
      anon_sym_body_COLONgraphql,
      anon_sym_body,
    ACTIONS(228), 31,
      ts_builtin_sym_end,
      anon_sym_meta,
      anon_sym_get,
      anon_sym_post,
      anon_sym_put,
      anon_sym_delete,
      anon_sym_patch,
      anon_sym_options,
      anon_sym_connect,
      anon_sym_trace,
      anon_sym_query,
      anon_sym_headers,
      anon_sym_auth_COLONawsv4,
      anon_sym_auth_COLONbasic,
      anon_sym_auth_COLONbearer,
      anon_sym_auth_COLONdigest,
      anon_sym_auth_COLONoauth2,
      anon_sym_body_COLONjson,
      anon_sym_body_COLONtext,
      anon_sym_body_COLONxml,
      anon_sym_body_COLONsparql,
      anon_sym_body_COLONgraphql_COLONvars,
      anon_sym_body_COLONform_DASHurlencoded,
      anon_sym_body_COLONmultipart_DASHform,
      anon_sym_vars_COLONpre_DASHrequest,
      anon_sym_vars_COLONpost_DASHresponse,
      anon_sym_assert,
      anon_sym_script_COLONpre_DASHrequest,
      anon_sym_script_COLONpost_DASHresponse,
      anon_sym_tests,
      anon_sym_docs,
  [588] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(234), 3,
      anon_sym_head,
      anon_sym_body_COLONgraphql,
      anon_sym_body,
    ACTIONS(232), 31,
      ts_builtin_sym_end,
      anon_sym_meta,
      anon_sym_get,
      anon_sym_post,
      anon_sym_put,
      anon_sym_delete,
      anon_sym_patch,
      anon_sym_options,
      anon_sym_connect,
      anon_sym_trace,
      anon_sym_query,
      anon_sym_headers,
      anon_sym_auth_COLONawsv4,
      anon_sym_auth_COLONbasic,
      anon_sym_auth_COLONbearer,
      anon_sym_auth_COLONdigest,
      anon_sym_auth_COLONoauth2,
      anon_sym_body_COLONjson,
      anon_sym_body_COLONtext,
      anon_sym_body_COLONxml,
      anon_sym_body_COLONsparql,
      anon_sym_body_COLONgraphql_COLONvars,
      anon_sym_body_COLONform_DASHurlencoded,
      anon_sym_body_COLONmultipart_DASHform,
      anon_sym_vars_COLONpre_DASHrequest,
      anon_sym_vars_COLONpost_DASHresponse,
      anon_sym_assert,
      anon_sym_script_COLONpre_DASHrequest,
      anon_sym_script_COLONpost_DASHresponse,
      anon_sym_tests,
      anon_sym_docs,
  [630] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(238), 3,
      anon_sym_head,
      anon_sym_body_COLONgraphql,
      anon_sym_body,
    ACTIONS(236), 31,
      ts_builtin_sym_end,
      anon_sym_meta,
      anon_sym_get,
      anon_sym_post,
      anon_sym_put,
      anon_sym_delete,
      anon_sym_patch,
      anon_sym_options,
      anon_sym_connect,
      anon_sym_trace,
      anon_sym_query,
      anon_sym_headers,
      anon_sym_auth_COLONawsv4,
      anon_sym_auth_COLONbasic,
      anon_sym_auth_COLONbearer,
      anon_sym_auth_COLONdigest,
      anon_sym_auth_COLONoauth2,
      anon_sym_body_COLONjson,
      anon_sym_body_COLONtext,
      anon_sym_body_COLONxml,
      anon_sym_body_COLONsparql,
      anon_sym_body_COLONgraphql_COLONvars,
      anon_sym_body_COLONform_DASHurlencoded,
      anon_sym_body_COLONmultipart_DASHform,
      anon_sym_vars_COLONpre_DASHrequest,
      anon_sym_vars_COLONpost_DASHresponse,
      anon_sym_assert,
      anon_sym_script_COLONpre_DASHrequest,
      anon_sym_script_COLONpost_DASHresponse,
      anon_sym_tests,
      anon_sym_docs,
  [672] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(242), 3,
      anon_sym_head,
      anon_sym_body_COLONgraphql,
      anon_sym_body,
    ACTIONS(240), 31,
      ts_builtin_sym_end,
      anon_sym_meta,
      anon_sym_get,
      anon_sym_post,
      anon_sym_put,
      anon_sym_delete,
      anon_sym_patch,
      anon_sym_options,
      anon_sym_connect,
      anon_sym_trace,
      anon_sym_query,
      anon_sym_headers,
      anon_sym_auth_COLONawsv4,
      anon_sym_auth_COLONbasic,
      anon_sym_auth_COLONbearer,
      anon_sym_auth_COLONdigest,
      anon_sym_auth_COLONoauth2,
      anon_sym_body_COLONjson,
      anon_sym_body_COLONtext,
      anon_sym_body_COLONxml,
      anon_sym_body_COLONsparql,
      anon_sym_body_COLONgraphql_COLONvars,
      anon_sym_body_COLONform_DASHurlencoded,
      anon_sym_body_COLONmultipart_DASHform,
      anon_sym_vars_COLONpre_DASHrequest,
      anon_sym_vars_COLONpost_DASHresponse,
      anon_sym_assert,
      anon_sym_script_COLONpre_DASHrequest,
      anon_sym_script_COLONpost_DASHresponse,
      anon_sym_tests,
      anon_sym_docs,
  [714] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(246), 3,
      anon_sym_head,
      anon_sym_body_COLONgraphql,
      anon_sym_body,
    ACTIONS(244), 31,
      ts_builtin_sym_end,
      anon_sym_meta,
      anon_sym_get,
      anon_sym_post,
      anon_sym_put,
      anon_sym_delete,
      anon_sym_patch,
      anon_sym_options,
      anon_sym_connect,
      anon_sym_trace,
      anon_sym_query,
      anon_sym_headers,
      anon_sym_auth_COLONawsv4,
      anon_sym_auth_COLONbasic,
      anon_sym_auth_COLONbearer,
      anon_sym_auth_COLONdigest,
      anon_sym_auth_COLONoauth2,
      anon_sym_body_COLONjson,
      anon_sym_body_COLONtext,
      anon_sym_body_COLONxml,
      anon_sym_body_COLONsparql,
      anon_sym_body_COLONgraphql_COLONvars,
      anon_sym_body_COLONform_DASHurlencoded,
      anon_sym_body_COLONmultipart_DASHform,
      anon_sym_vars_COLONpre_DASHrequest,
      anon_sym_vars_COLONpost_DASHresponse,
      anon_sym_assert,
      anon_sym_script_COLONpre_DASHrequest,
      anon_sym_script_COLONpost_DASHresponse,
      anon_sym_tests,
      anon_sym_docs,
  [756] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(250), 3,
      anon_sym_head,
      anon_sym_body_COLONgraphql,
      anon_sym_body,
    ACTIONS(248), 31,
      ts_builtin_sym_end,
      anon_sym_meta,
      anon_sym_get,
      anon_sym_post,
      anon_sym_put,
      anon_sym_delete,
      anon_sym_patch,
      anon_sym_options,
      anon_sym_connect,
      anon_sym_trace,
      anon_sym_query,
      anon_sym_headers,
      anon_sym_auth_COLONawsv4,
      anon_sym_auth_COLONbasic,
      anon_sym_auth_COLONbearer,
      anon_sym_auth_COLONdigest,
      anon_sym_auth_COLONoauth2,
      anon_sym_body_COLONjson,
      anon_sym_body_COLONtext,
      anon_sym_body_COLONxml,
      anon_sym_body_COLONsparql,
      anon_sym_body_COLONgraphql_COLONvars,
      anon_sym_body_COLONform_DASHurlencoded,
      anon_sym_body_COLONmultipart_DASHform,
      anon_sym_vars_COLONpre_DASHrequest,
      anon_sym_vars_COLONpost_DASHresponse,
      anon_sym_assert,
      anon_sym_script_COLONpre_DASHrequest,
      anon_sym_script_COLONpost_DASHresponse,
      anon_sym_tests,
      anon_sym_docs,
  [798] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(254), 3,
      anon_sym_head,
      anon_sym_body_COLONgraphql,
      anon_sym_body,
    ACTIONS(252), 31,
      ts_builtin_sym_end,
      anon_sym_meta,
      anon_sym_get,
      anon_sym_post,
      anon_sym_put,
      anon_sym_delete,
      anon_sym_patch,
      anon_sym_options,
      anon_sym_connect,
      anon_sym_trace,
      anon_sym_query,
      anon_sym_headers,
      anon_sym_auth_COLONawsv4,
      anon_sym_auth_COLONbasic,
      anon_sym_auth_COLONbearer,
      anon_sym_auth_COLONdigest,
      anon_sym_auth_COLONoauth2,
      anon_sym_body_COLONjson,
      anon_sym_body_COLONtext,
      anon_sym_body_COLONxml,
      anon_sym_body_COLONsparql,
      anon_sym_body_COLONgraphql_COLONvars,
      anon_sym_body_COLONform_DASHurlencoded,
      anon_sym_body_COLONmultipart_DASHform,
      anon_sym_vars_COLONpre_DASHrequest,
      anon_sym_vars_COLONpost_DASHresponse,
      anon_sym_assert,
      anon_sym_script_COLONpre_DASHrequest,
      anon_sym_script_COLONpost_DASHresponse,
      anon_sym_tests,
      anon_sym_docs,
  [840] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(258), 3,
      anon_sym_head,
      anon_sym_body_COLONgraphql,
      anon_sym_body,
    ACTIONS(256), 31,
      ts_builtin_sym_end,
      anon_sym_meta,
      anon_sym_get,
      anon_sym_post,
      anon_sym_put,
      anon_sym_delete,
      anon_sym_patch,
      anon_sym_options,
      anon_sym_connect,
      anon_sym_trace,
      anon_sym_query,
      anon_sym_headers,
      anon_sym_auth_COLONawsv4,
      anon_sym_auth_COLONbasic,
      anon_sym_auth_COLONbearer,
      anon_sym_auth_COLONdigest,
      anon_sym_auth_COLONoauth2,
      anon_sym_body_COLONjson,
      anon_sym_body_COLONtext,
      anon_sym_body_COLONxml,
      anon_sym_body_COLONsparql,
      anon_sym_body_COLONgraphql_COLONvars,
      anon_sym_body_COLONform_DASHurlencoded,
      anon_sym_body_COLONmultipart_DASHform,
      anon_sym_vars_COLONpre_DASHrequest,
      anon_sym_vars_COLONpost_DASHresponse,
      anon_sym_assert,
      anon_sym_script_COLONpre_DASHrequest,
      anon_sym_script_COLONpost_DASHresponse,
      anon_sym_tests,
      anon_sym_docs,
  [882] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(262), 3,
      anon_sym_head,
      anon_sym_body_COLONgraphql,
      anon_sym_body,
    ACTIONS(260), 31,
      ts_builtin_sym_end,
      anon_sym_meta,
      anon_sym_get,
      anon_sym_post,
      anon_sym_put,
      anon_sym_delete,
      anon_sym_patch,
      anon_sym_options,
      anon_sym_connect,
      anon_sym_trace,
      anon_sym_query,
      anon_sym_headers,
      anon_sym_auth_COLONawsv4,
      anon_sym_auth_COLONbasic,
      anon_sym_auth_COLONbearer,
      anon_sym_auth_COLONdigest,
      anon_sym_auth_COLONoauth2,
      anon_sym_body_COLONjson,
      anon_sym_body_COLONtext,
      anon_sym_body_COLONxml,
      anon_sym_body_COLONsparql,
      anon_sym_body_COLONgraphql_COLONvars,
      anon_sym_body_COLONform_DASHurlencoded,
      anon_sym_body_COLONmultipart_DASHform,
      anon_sym_vars_COLONpre_DASHrequest,
      anon_sym_vars_COLONpost_DASHresponse,
      anon_sym_assert,
      anon_sym_script_COLONpre_DASHrequest,
      anon_sym_script_COLONpost_DASHresponse,
      anon_sym_tests,
      anon_sym_docs,
  [924] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(266), 3,
      anon_sym_head,
      anon_sym_body_COLONgraphql,
      anon_sym_body,
    ACTIONS(264), 31,
      ts_builtin_sym_end,
      anon_sym_meta,
      anon_sym_get,
      anon_sym_post,
      anon_sym_put,
      anon_sym_delete,
      anon_sym_patch,
      anon_sym_options,
      anon_sym_connect,
      anon_sym_trace,
      anon_sym_query,
      anon_sym_headers,
      anon_sym_auth_COLONawsv4,
      anon_sym_auth_COLONbasic,
      anon_sym_auth_COLONbearer,
      anon_sym_auth_COLONdigest,
      anon_sym_auth_COLONoauth2,
      anon_sym_body_COLONjson,
      anon_sym_body_COLONtext,
      anon_sym_body_COLONxml,
      anon_sym_body_COLONsparql,
      anon_sym_body_COLONgraphql_COLONvars,
      anon_sym_body_COLONform_DASHurlencoded,
      anon_sym_body_COLONmultipart_DASHform,
      anon_sym_vars_COLONpre_DASHrequest,
      anon_sym_vars_COLONpost_DASHresponse,
      anon_sym_assert,
      anon_sym_script_COLONpre_DASHrequest,
      anon_sym_script_COLONpost_DASHresponse,
      anon_sym_tests,
      anon_sym_docs,
  [966] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(270), 3,
      anon_sym_head,
      anon_sym_body_COLONgraphql,
      anon_sym_body,
    ACTIONS(268), 31,
      ts_builtin_sym_end,
      anon_sym_meta,
      anon_sym_get,
      anon_sym_post,
      anon_sym_put,
      anon_sym_delete,
      anon_sym_patch,
      anon_sym_options,
      anon_sym_connect,
      anon_sym_trace,
      anon_sym_query,
      anon_sym_headers,
      anon_sym_auth_COLONawsv4,
      anon_sym_auth_COLONbasic,
      anon_sym_auth_COLONbearer,
      anon_sym_auth_COLONdigest,
      anon_sym_auth_COLONoauth2,
      anon_sym_body_COLONjson,
      anon_sym_body_COLONtext,
      anon_sym_body_COLONxml,
      anon_sym_body_COLONsparql,
      anon_sym_body_COLONgraphql_COLONvars,
      anon_sym_body_COLONform_DASHurlencoded,
      anon_sym_body_COLONmultipart_DASHform,
      anon_sym_vars_COLONpre_DASHrequest,
      anon_sym_vars_COLONpost_DASHresponse,
      anon_sym_assert,
      anon_sym_script_COLONpre_DASHrequest,
      anon_sym_script_COLONpost_DASHresponse,
      anon_sym_tests,
      anon_sym_docs,
  [1008] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(274), 3,
      anon_sym_head,
      anon_sym_body_COLONgraphql,
      anon_sym_body,
    ACTIONS(272), 31,
      ts_builtin_sym_end,
      anon_sym_meta,
      anon_sym_get,
      anon_sym_post,
      anon_sym_put,
      anon_sym_delete,
      anon_sym_patch,
      anon_sym_options,
      anon_sym_connect,
      anon_sym_trace,
      anon_sym_query,
      anon_sym_headers,
      anon_sym_auth_COLONawsv4,
      anon_sym_auth_COLONbasic,
      anon_sym_auth_COLONbearer,
      anon_sym_auth_COLONdigest,
      anon_sym_auth_COLONoauth2,
      anon_sym_body_COLONjson,
      anon_sym_body_COLONtext,
      anon_sym_body_COLONxml,
      anon_sym_body_COLONsparql,
      anon_sym_body_COLONgraphql_COLONvars,
      anon_sym_body_COLONform_DASHurlencoded,
      anon_sym_body_COLONmultipart_DASHform,
      anon_sym_vars_COLONpre_DASHrequest,
      anon_sym_vars_COLONpost_DASHresponse,
      anon_sym_assert,
      anon_sym_script_COLONpre_DASHrequest,
      anon_sym_script_COLONpost_DASHresponse,
      anon_sym_tests,
      anon_sym_docs,
  [1050] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(278), 3,
      anon_sym_head,
      anon_sym_body_COLONgraphql,
      anon_sym_body,
    ACTIONS(276), 31,
      ts_builtin_sym_end,
      anon_sym_meta,
      anon_sym_get,
      anon_sym_post,
      anon_sym_put,
      anon_sym_delete,
      anon_sym_patch,
      anon_sym_options,
      anon_sym_connect,
      anon_sym_trace,
      anon_sym_query,
      anon_sym_headers,
      anon_sym_auth_COLONawsv4,
      anon_sym_auth_COLONbasic,
      anon_sym_auth_COLONbearer,
      anon_sym_auth_COLONdigest,
      anon_sym_auth_COLONoauth2,
      anon_sym_body_COLONjson,
      anon_sym_body_COLONtext,
      anon_sym_body_COLONxml,
      anon_sym_body_COLONsparql,
      anon_sym_body_COLONgraphql_COLONvars,
      anon_sym_body_COLONform_DASHurlencoded,
      anon_sym_body_COLONmultipart_DASHform,
      anon_sym_vars_COLONpre_DASHrequest,
      anon_sym_vars_COLONpost_DASHresponse,
      anon_sym_assert,
      anon_sym_script_COLONpre_DASHrequest,
      anon_sym_script_COLONpost_DASHresponse,
      anon_sym_tests,
      anon_sym_docs,
  [1092] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(282), 3,
      anon_sym_head,
      anon_sym_body_COLONgraphql,
      anon_sym_body,
    ACTIONS(280), 31,
      ts_builtin_sym_end,
      anon_sym_meta,
      anon_sym_get,
      anon_sym_post,
      anon_sym_put,
      anon_sym_delete,
      anon_sym_patch,
      anon_sym_options,
      anon_sym_connect,
      anon_sym_trace,
      anon_sym_query,
      anon_sym_headers,
      anon_sym_auth_COLONawsv4,
      anon_sym_auth_COLONbasic,
      anon_sym_auth_COLONbearer,
      anon_sym_auth_COLONdigest,
      anon_sym_auth_COLONoauth2,
      anon_sym_body_COLONjson,
      anon_sym_body_COLONtext,
      anon_sym_body_COLONxml,
      anon_sym_body_COLONsparql,
      anon_sym_body_COLONgraphql_COLONvars,
      anon_sym_body_COLONform_DASHurlencoded,
      anon_sym_body_COLONmultipart_DASHform,
      anon_sym_vars_COLONpre_DASHrequest,
      anon_sym_vars_COLONpost_DASHresponse,
      anon_sym_assert,
      anon_sym_script_COLONpre_DASHrequest,
      anon_sym_script_COLONpost_DASHresponse,
      anon_sym_tests,
      anon_sym_docs,
  [1134] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(286), 3,
      anon_sym_head,
      anon_sym_body_COLONgraphql,
      anon_sym_body,
    ACTIONS(284), 31,
      ts_builtin_sym_end,
      anon_sym_meta,
      anon_sym_get,
      anon_sym_post,
      anon_sym_put,
      anon_sym_delete,
      anon_sym_patch,
      anon_sym_options,
      anon_sym_connect,
      anon_sym_trace,
      anon_sym_query,
      anon_sym_headers,
      anon_sym_auth_COLONawsv4,
      anon_sym_auth_COLONbasic,
      anon_sym_auth_COLONbearer,
      anon_sym_auth_COLONdigest,
      anon_sym_auth_COLONoauth2,
      anon_sym_body_COLONjson,
      anon_sym_body_COLONtext,
      anon_sym_body_COLONxml,
      anon_sym_body_COLONsparql,
      anon_sym_body_COLONgraphql_COLONvars,
      anon_sym_body_COLONform_DASHurlencoded,
      anon_sym_body_COLONmultipart_DASHform,
      anon_sym_vars_COLONpre_DASHrequest,
      anon_sym_vars_COLONpost_DASHresponse,
      anon_sym_assert,
      anon_sym_script_COLONpre_DASHrequest,
      anon_sym_script_COLONpost_DASHresponse,
      anon_sym_tests,
      anon_sym_docs,
  [1176] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(290), 3,
      anon_sym_head,
      anon_sym_body_COLONgraphql,
      anon_sym_body,
    ACTIONS(288), 31,
      ts_builtin_sym_end,
      anon_sym_meta,
      anon_sym_get,
      anon_sym_post,
      anon_sym_put,
      anon_sym_delete,
      anon_sym_patch,
      anon_sym_options,
      anon_sym_connect,
      anon_sym_trace,
      anon_sym_query,
      anon_sym_headers,
      anon_sym_auth_COLONawsv4,
      anon_sym_auth_COLONbasic,
      anon_sym_auth_COLONbearer,
      anon_sym_auth_COLONdigest,
      anon_sym_auth_COLONoauth2,
      anon_sym_body_COLONjson,
      anon_sym_body_COLONtext,
      anon_sym_body_COLONxml,
      anon_sym_body_COLONsparql,
      anon_sym_body_COLONgraphql_COLONvars,
      anon_sym_body_COLONform_DASHurlencoded,
      anon_sym_body_COLONmultipart_DASHform,
      anon_sym_vars_COLONpre_DASHrequest,
      anon_sym_vars_COLONpost_DASHresponse,
      anon_sym_assert,
      anon_sym_script_COLONpre_DASHrequest,
      anon_sym_script_COLONpost_DASHresponse,
      anon_sym_tests,
      anon_sym_docs,
  [1218] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(294), 3,
      anon_sym_head,
      anon_sym_body_COLONgraphql,
      anon_sym_body,
    ACTIONS(292), 31,
      ts_builtin_sym_end,
      anon_sym_meta,
      anon_sym_get,
      anon_sym_post,
      anon_sym_put,
      anon_sym_delete,
      anon_sym_patch,
      anon_sym_options,
      anon_sym_connect,
      anon_sym_trace,
      anon_sym_query,
      anon_sym_headers,
      anon_sym_auth_COLONawsv4,
      anon_sym_auth_COLONbasic,
      anon_sym_auth_COLONbearer,
      anon_sym_auth_COLONdigest,
      anon_sym_auth_COLONoauth2,
      anon_sym_body_COLONjson,
      anon_sym_body_COLONtext,
      anon_sym_body_COLONxml,
      anon_sym_body_COLONsparql,
      anon_sym_body_COLONgraphql_COLONvars,
      anon_sym_body_COLONform_DASHurlencoded,
      anon_sym_body_COLONmultipart_DASHform,
      anon_sym_vars_COLONpre_DASHrequest,
      anon_sym_vars_COLONpost_DASHresponse,
      anon_sym_assert,
      anon_sym_script_COLONpre_DASHrequest,
      anon_sym_script_COLONpost_DASHresponse,
      anon_sym_tests,
      anon_sym_docs,
  [1260] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(298), 3,
      anon_sym_head,
      anon_sym_body_COLONgraphql,
      anon_sym_body,
    ACTIONS(296), 31,
      ts_builtin_sym_end,
      anon_sym_meta,
      anon_sym_get,
      anon_sym_post,
      anon_sym_put,
      anon_sym_delete,
      anon_sym_patch,
      anon_sym_options,
      anon_sym_connect,
      anon_sym_trace,
      anon_sym_query,
      anon_sym_headers,
      anon_sym_auth_COLONawsv4,
      anon_sym_auth_COLONbasic,
      anon_sym_auth_COLONbearer,
      anon_sym_auth_COLONdigest,
      anon_sym_auth_COLONoauth2,
      anon_sym_body_COLONjson,
      anon_sym_body_COLONtext,
      anon_sym_body_COLONxml,
      anon_sym_body_COLONsparql,
      anon_sym_body_COLONgraphql_COLONvars,
      anon_sym_body_COLONform_DASHurlencoded,
      anon_sym_body_COLONmultipart_DASHform,
      anon_sym_vars_COLONpre_DASHrequest,
      anon_sym_vars_COLONpost_DASHresponse,
      anon_sym_assert,
      anon_sym_script_COLONpre_DASHrequest,
      anon_sym_script_COLONpost_DASHresponse,
      anon_sym_tests,
      anon_sym_docs,
  [1302] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(302), 3,
      anon_sym_head,
      anon_sym_body_COLONgraphql,
      anon_sym_body,
    ACTIONS(300), 31,
      ts_builtin_sym_end,
      anon_sym_meta,
      anon_sym_get,
      anon_sym_post,
      anon_sym_put,
      anon_sym_delete,
      anon_sym_patch,
      anon_sym_options,
      anon_sym_connect,
      anon_sym_trace,
      anon_sym_query,
      anon_sym_headers,
      anon_sym_auth_COLONawsv4,
      anon_sym_auth_COLONbasic,
      anon_sym_auth_COLONbearer,
      anon_sym_auth_COLONdigest,
      anon_sym_auth_COLONoauth2,
      anon_sym_body_COLONjson,
      anon_sym_body_COLONtext,
      anon_sym_body_COLONxml,
      anon_sym_body_COLONsparql,
      anon_sym_body_COLONgraphql_COLONvars,
      anon_sym_body_COLONform_DASHurlencoded,
      anon_sym_body_COLONmultipart_DASHform,
      anon_sym_vars_COLONpre_DASHrequest,
      anon_sym_vars_COLONpost_DASHresponse,
      anon_sym_assert,
      anon_sym_script_COLONpre_DASHrequest,
      anon_sym_script_COLONpost_DASHresponse,
      anon_sym_tests,
      anon_sym_docs,
  [1344] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(306), 3,
      anon_sym_head,
      anon_sym_body_COLONgraphql,
      anon_sym_body,
    ACTIONS(304), 31,
      ts_builtin_sym_end,
      anon_sym_meta,
      anon_sym_get,
      anon_sym_post,
      anon_sym_put,
      anon_sym_delete,
      anon_sym_patch,
      anon_sym_options,
      anon_sym_connect,
      anon_sym_trace,
      anon_sym_query,
      anon_sym_headers,
      anon_sym_auth_COLONawsv4,
      anon_sym_auth_COLONbasic,
      anon_sym_auth_COLONbearer,
      anon_sym_auth_COLONdigest,
      anon_sym_auth_COLONoauth2,
      anon_sym_body_COLONjson,
      anon_sym_body_COLONtext,
      anon_sym_body_COLONxml,
      anon_sym_body_COLONsparql,
      anon_sym_body_COLONgraphql_COLONvars,
      anon_sym_body_COLONform_DASHurlencoded,
      anon_sym_body_COLONmultipart_DASHform,
      anon_sym_vars_COLONpre_DASHrequest,
      anon_sym_vars_COLONpost_DASHresponse,
      anon_sym_assert,
      anon_sym_script_COLONpre_DASHrequest,
      anon_sym_script_COLONpost_DASHresponse,
      anon_sym_tests,
      anon_sym_docs,
  [1386] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(310), 3,
      anon_sym_head,
      anon_sym_body_COLONgraphql,
      anon_sym_body,
    ACTIONS(308), 31,
      ts_builtin_sym_end,
      anon_sym_meta,
      anon_sym_get,
      anon_sym_post,
      anon_sym_put,
      anon_sym_delete,
      anon_sym_patch,
      anon_sym_options,
      anon_sym_connect,
      anon_sym_trace,
      anon_sym_query,
      anon_sym_headers,
      anon_sym_auth_COLONawsv4,
      anon_sym_auth_COLONbasic,
      anon_sym_auth_COLONbearer,
      anon_sym_auth_COLONdigest,
      anon_sym_auth_COLONoauth2,
      anon_sym_body_COLONjson,
      anon_sym_body_COLONtext,
      anon_sym_body_COLONxml,
      anon_sym_body_COLONsparql,
      anon_sym_body_COLONgraphql_COLONvars,
      anon_sym_body_COLONform_DASHurlencoded,
      anon_sym_body_COLONmultipart_DASHform,
      anon_sym_vars_COLONpre_DASHrequest,
      anon_sym_vars_COLONpost_DASHresponse,
      anon_sym_assert,
      anon_sym_script_COLONpre_DASHrequest,
      anon_sym_script_COLONpost_DASHresponse,
      anon_sym_tests,
      anon_sym_docs,
  [1428] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(314), 3,
      anon_sym_head,
      anon_sym_body_COLONgraphql,
      anon_sym_body,
    ACTIONS(312), 31,
      ts_builtin_sym_end,
      anon_sym_meta,
      anon_sym_get,
      anon_sym_post,
      anon_sym_put,
      anon_sym_delete,
      anon_sym_patch,
      anon_sym_options,
      anon_sym_connect,
      anon_sym_trace,
      anon_sym_query,
      anon_sym_headers,
      anon_sym_auth_COLONawsv4,
      anon_sym_auth_COLONbasic,
      anon_sym_auth_COLONbearer,
      anon_sym_auth_COLONdigest,
      anon_sym_auth_COLONoauth2,
      anon_sym_body_COLONjson,
      anon_sym_body_COLONtext,
      anon_sym_body_COLONxml,
      anon_sym_body_COLONsparql,
      anon_sym_body_COLONgraphql_COLONvars,
      anon_sym_body_COLONform_DASHurlencoded,
      anon_sym_body_COLONmultipart_DASHform,
      anon_sym_vars_COLONpre_DASHrequest,
      anon_sym_vars_COLONpost_DASHresponse,
      anon_sym_assert,
      anon_sym_script_COLONpre_DASHrequest,
      anon_sym_script_COLONpost_DASHresponse,
      anon_sym_tests,
      anon_sym_docs,
  [1470] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(318), 3,
      anon_sym_head,
      anon_sym_body_COLONgraphql,
      anon_sym_body,
    ACTIONS(316), 31,
      ts_builtin_sym_end,
      anon_sym_meta,
      anon_sym_get,
      anon_sym_post,
      anon_sym_put,
      anon_sym_delete,
      anon_sym_patch,
      anon_sym_options,
      anon_sym_connect,
      anon_sym_trace,
      anon_sym_query,
      anon_sym_headers,
      anon_sym_auth_COLONawsv4,
      anon_sym_auth_COLONbasic,
      anon_sym_auth_COLONbearer,
      anon_sym_auth_COLONdigest,
      anon_sym_auth_COLONoauth2,
      anon_sym_body_COLONjson,
      anon_sym_body_COLONtext,
      anon_sym_body_COLONxml,
      anon_sym_body_COLONsparql,
      anon_sym_body_COLONgraphql_COLONvars,
      anon_sym_body_COLONform_DASHurlencoded,
      anon_sym_body_COLONmultipart_DASHform,
      anon_sym_vars_COLONpre_DASHrequest,
      anon_sym_vars_COLONpost_DASHresponse,
      anon_sym_assert,
      anon_sym_script_COLONpre_DASHrequest,
      anon_sym_script_COLONpost_DASHresponse,
      anon_sym_tests,
      anon_sym_docs,
  [1512] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(322), 3,
      anon_sym_head,
      anon_sym_body_COLONgraphql,
      anon_sym_body,
    ACTIONS(320), 31,
      ts_builtin_sym_end,
      anon_sym_meta,
      anon_sym_get,
      anon_sym_post,
      anon_sym_put,
      anon_sym_delete,
      anon_sym_patch,
      anon_sym_options,
      anon_sym_connect,
      anon_sym_trace,
      anon_sym_query,
      anon_sym_headers,
      anon_sym_auth_COLONawsv4,
      anon_sym_auth_COLONbasic,
      anon_sym_auth_COLONbearer,
      anon_sym_auth_COLONdigest,
      anon_sym_auth_COLONoauth2,
      anon_sym_body_COLONjson,
      anon_sym_body_COLONtext,
      anon_sym_body_COLONxml,
      anon_sym_body_COLONsparql,
      anon_sym_body_COLONgraphql_COLONvars,
      anon_sym_body_COLONform_DASHurlencoded,
      anon_sym_body_COLONmultipart_DASHform,
      anon_sym_vars_COLONpre_DASHrequest,
      anon_sym_vars_COLONpost_DASHresponse,
      anon_sym_assert,
      anon_sym_script_COLONpre_DASHrequest,
      anon_sym_script_COLONpost_DASHresponse,
      anon_sym_tests,
      anon_sym_docs,
  [1554] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(326), 3,
      anon_sym_head,
      anon_sym_body_COLONgraphql,
      anon_sym_body,
    ACTIONS(324), 31,
      ts_builtin_sym_end,
      anon_sym_meta,
      anon_sym_get,
      anon_sym_post,
      anon_sym_put,
      anon_sym_delete,
      anon_sym_patch,
      anon_sym_options,
      anon_sym_connect,
      anon_sym_trace,
      anon_sym_query,
      anon_sym_headers,
      anon_sym_auth_COLONawsv4,
      anon_sym_auth_COLONbasic,
      anon_sym_auth_COLONbearer,
      anon_sym_auth_COLONdigest,
      anon_sym_auth_COLONoauth2,
      anon_sym_body_COLONjson,
      anon_sym_body_COLONtext,
      anon_sym_body_COLONxml,
      anon_sym_body_COLONsparql,
      anon_sym_body_COLONgraphql_COLONvars,
      anon_sym_body_COLONform_DASHurlencoded,
      anon_sym_body_COLONmultipart_DASHform,
      anon_sym_vars_COLONpre_DASHrequest,
      anon_sym_vars_COLONpost_DASHresponse,
      anon_sym_assert,
      anon_sym_script_COLONpre_DASHrequest,
      anon_sym_script_COLONpost_DASHresponse,
      anon_sym_tests,
      anon_sym_docs,
  [1596] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(330), 3,
      anon_sym_head,
      anon_sym_body_COLONgraphql,
      anon_sym_body,
    ACTIONS(328), 31,
      ts_builtin_sym_end,
      anon_sym_meta,
      anon_sym_get,
      anon_sym_post,
      anon_sym_put,
      anon_sym_delete,
      anon_sym_patch,
      anon_sym_options,
      anon_sym_connect,
      anon_sym_trace,
      anon_sym_query,
      anon_sym_headers,
      anon_sym_auth_COLONawsv4,
      anon_sym_auth_COLONbasic,
      anon_sym_auth_COLONbearer,
      anon_sym_auth_COLONdigest,
      anon_sym_auth_COLONoauth2,
      anon_sym_body_COLONjson,
      anon_sym_body_COLONtext,
      anon_sym_body_COLONxml,
      anon_sym_body_COLONsparql,
      anon_sym_body_COLONgraphql_COLONvars,
      anon_sym_body_COLONform_DASHurlencoded,
      anon_sym_body_COLONmultipart_DASHform,
      anon_sym_vars_COLONpre_DASHrequest,
      anon_sym_vars_COLONpost_DASHresponse,
      anon_sym_assert,
      anon_sym_script_COLONpre_DASHrequest,
      anon_sym_script_COLONpost_DASHresponse,
      anon_sym_tests,
      anon_sym_docs,
  [1638] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(334), 3,
      anon_sym_head,
      anon_sym_body_COLONgraphql,
      anon_sym_body,
    ACTIONS(332), 31,
      ts_builtin_sym_end,
      anon_sym_meta,
      anon_sym_get,
      anon_sym_post,
      anon_sym_put,
      anon_sym_delete,
      anon_sym_patch,
      anon_sym_options,
      anon_sym_connect,
      anon_sym_trace,
      anon_sym_query,
      anon_sym_headers,
      anon_sym_auth_COLONawsv4,
      anon_sym_auth_COLONbasic,
      anon_sym_auth_COLONbearer,
      anon_sym_auth_COLONdigest,
      anon_sym_auth_COLONoauth2,
      anon_sym_body_COLONjson,
      anon_sym_body_COLONtext,
      anon_sym_body_COLONxml,
      anon_sym_body_COLONsparql,
      anon_sym_body_COLONgraphql_COLONvars,
      anon_sym_body_COLONform_DASHurlencoded,
      anon_sym_body_COLONmultipart_DASHform,
      anon_sym_vars_COLONpre_DASHrequest,
      anon_sym_vars_COLONpost_DASHresponse,
      anon_sym_assert,
      anon_sym_script_COLONpre_DASHrequest,
      anon_sym_script_COLONpost_DASHresponse,
      anon_sym_tests,
      anon_sym_docs,
  [1680] = 5,
    ACTIONS(336), 1,
      anon_sym_LBRACE,
    ACTIONS(338), 1,
      sym__any,
    ACTIONS(340), 1,
      sym_comment,
    STATE(91), 1,
      sym_text,
    STATE(47), 2,
      sym__text,
      aux_sym_text_repeat1,
  [1697] = 5,
    ACTIONS(340), 1,
      sym_comment,
    ACTIONS(342), 1,
      anon_sym_LBRACE,
    ACTIONS(345), 1,
      anon_sym_RBRACE,
    ACTIONS(347), 1,
      sym__any,
    STATE(45), 2,
      sym__text,
      aux_sym_text_repeat1,
  [1714] = 5,
    ACTIONS(336), 1,
      anon_sym_LBRACE,
    ACTIONS(340), 1,
      sym_comment,
    ACTIONS(350), 1,
      anon_sym_RBRACE,
    ACTIONS(352), 1,
      sym__any,
    STATE(45), 2,
      sym__text,
      aux_sym_text_repeat1,
  [1731] = 5,
    ACTIONS(336), 1,
      anon_sym_LBRACE,
    ACTIONS(340), 1,
      sym_comment,
    ACTIONS(352), 1,
      sym__any,
    ACTIONS(354), 1,
      anon_sym_RBRACE,
    STATE(45), 2,
      sym__text,
      aux_sym_text_repeat1,
  [1748] = 5,
    ACTIONS(336), 1,
      anon_sym_LBRACE,
    ACTIONS(340), 1,
      sym_comment,
    ACTIONS(356), 1,
      anon_sym_RBRACE,
    ACTIONS(358), 1,
      sym__any,
    STATE(46), 2,
      sym__text,
      aux_sym_text_repeat1,
  [1765] = 4,
    ACTIONS(340), 1,
      sym_comment,
    ACTIONS(360), 1,
      anon_sym_RBRACE,
    ACTIONS(362), 1,
      sym_key,
    STATE(49), 2,
      sym_pair,
      aux_sym_dictionary_repeat1,
  [1779] = 4,
    ACTIONS(340), 1,
      sym_comment,
    ACTIONS(365), 1,
      anon_sym_RBRACE,
    ACTIONS(367), 1,
      sym_key,
    STATE(49), 2,
      sym_pair,
      aux_sym_dictionary_repeat1,
  [1793] = 4,
    ACTIONS(340), 1,
      sym_comment,
    ACTIONS(367), 1,
      sym_key,
    STATE(92), 1,
      sym_dictionary,
    STATE(50), 2,
      sym_pair,
      aux_sym_dictionary_repeat1,
  [1807] = 2,
    ACTIONS(340), 1,
      sym_comment,
    ACTIONS(369), 3,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym__any,
  [1816] = 3,
    ACTIONS(340), 1,
      sym_comment,
    ACTIONS(373), 1,
      sym__nl,
    ACTIONS(371), 2,
      anon_sym_RBRACE,
      sym_key,
  [1827] = 2,
    ACTIONS(340), 1,
      sym_comment,
    ACTIONS(375), 3,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym__any,
  [1836] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(377), 1,
      anon_sym_LBRACE,
    STATE(29), 1,
      sym_dictionary_block,
  [1846] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(377), 1,
      anon_sym_LBRACE,
    STATE(35), 1,
      sym_dictionary_block,
  [1856] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(377), 1,
      anon_sym_LBRACE,
    STATE(14), 1,
      sym_dictionary_block,
  [1866] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(377), 1,
      anon_sym_LBRACE,
    STATE(15), 1,
      sym_dictionary_block,
  [1876] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(379), 1,
      anon_sym_LBRACE,
    STATE(16), 1,
      sym_text_block,
  [1886] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(379), 1,
      anon_sym_LBRACE,
    STATE(17), 1,
      sym_text_block,
  [1896] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(379), 1,
      anon_sym_LBRACE,
    STATE(18), 1,
      sym_text_block,
  [1906] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(379), 1,
      anon_sym_LBRACE,
    STATE(19), 1,
      sym_text_block,
  [1916] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(379), 1,
      anon_sym_LBRACE,
    STATE(20), 1,
      sym_text_block,
  [1926] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(379), 1,
      anon_sym_LBRACE,
    STATE(21), 1,
      sym_text_block,
  [1936] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(377), 1,
      anon_sym_LBRACE,
    STATE(22), 1,
      sym_dictionary_block,
  [1946] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(377), 1,
      anon_sym_LBRACE,
    STATE(33), 1,
      sym_dictionary_block,
  [1956] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(377), 1,
      anon_sym_LBRACE,
    STATE(24), 1,
      sym_dictionary_block,
  [1966] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(377), 1,
      anon_sym_LBRACE,
    STATE(25), 1,
      sym_dictionary_block,
  [1976] = 3,
    ACTIONS(340), 1,
      sym_comment,
    ACTIONS(381), 1,
      anon_sym_RBRACE,
    ACTIONS(383), 1,
      sym_key,
  [1986] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(377), 1,
      anon_sym_LBRACE,
    STATE(32), 1,
      sym_dictionary_block,
  [1996] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(377), 1,
      anon_sym_LBRACE,
    STATE(31), 1,
      sym_dictionary_block,
  [2006] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(377), 1,
      anon_sym_LBRACE,
    STATE(28), 1,
      sym_dictionary_block,
  [2016] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(379), 1,
      anon_sym_LBRACE,
    STATE(4), 1,
      sym_text_block,
  [2026] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(379), 1,
      anon_sym_LBRACE,
    STATE(11), 1,
      sym_text_block,
  [2036] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(377), 1,
      anon_sym_LBRACE,
    STATE(41), 1,
      sym_dictionary_block,
  [2046] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(377), 1,
      anon_sym_LBRACE,
    STATE(23), 1,
      sym_dictionary_block,
  [2056] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(377), 1,
      anon_sym_LBRACE,
    STATE(42), 1,
      sym_dictionary_block,
  [2066] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(377), 1,
      anon_sym_LBRACE,
    STATE(27), 1,
      sym_dictionary_block,
  [2076] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(377), 1,
      anon_sym_LBRACE,
    STATE(13), 1,
      sym_dictionary_block,
  [2086] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(377), 1,
      anon_sym_LBRACE,
    STATE(43), 1,
      sym_dictionary_block,
  [2096] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(379), 1,
      anon_sym_LBRACE,
    STATE(10), 1,
      sym_text_block,
  [2106] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(377), 1,
      anon_sym_LBRACE,
    STATE(5), 1,
      sym_dictionary_block,
  [2116] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(379), 1,
      anon_sym_LBRACE,
    STATE(9), 1,
      sym_text_block,
  [2126] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(377), 1,
      anon_sym_LBRACE,
    STATE(34), 1,
      sym_dictionary_block,
  [2136] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(377), 1,
      anon_sym_LBRACE,
    STATE(30), 1,
      sym_dictionary_block,
  [2146] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(377), 1,
      anon_sym_LBRACE,
    STATE(12), 1,
      sym_dictionary_block,
  [2156] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(377), 1,
      anon_sym_LBRACE,
    STATE(26), 1,
      sym_dictionary_block,
  [2166] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(379), 1,
      anon_sym_LBRACE,
    STATE(8), 1,
      sym_text_block,
  [2176] = 2,
    ACTIONS(340), 1,
      sym_comment,
    ACTIONS(385), 1,
      sym_value,
  [2183] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(387), 1,
      ts_builtin_sym_end,
  [2190] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(389), 1,
      anon_sym_RBRACE,
  [2197] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(391), 1,
      anon_sym_RBRACE,
  [2204] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(393), 1,
      anon_sym_COLON,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 42,
  [SMALL_STATE(6)] = 84,
  [SMALL_STATE(7)] = 126,
  [SMALL_STATE(8)] = 168,
  [SMALL_STATE(9)] = 210,
  [SMALL_STATE(10)] = 252,
  [SMALL_STATE(11)] = 294,
  [SMALL_STATE(12)] = 336,
  [SMALL_STATE(13)] = 378,
  [SMALL_STATE(14)] = 420,
  [SMALL_STATE(15)] = 462,
  [SMALL_STATE(16)] = 504,
  [SMALL_STATE(17)] = 546,
  [SMALL_STATE(18)] = 588,
  [SMALL_STATE(19)] = 630,
  [SMALL_STATE(20)] = 672,
  [SMALL_STATE(21)] = 714,
  [SMALL_STATE(22)] = 756,
  [SMALL_STATE(23)] = 798,
  [SMALL_STATE(24)] = 840,
  [SMALL_STATE(25)] = 882,
  [SMALL_STATE(26)] = 924,
  [SMALL_STATE(27)] = 966,
  [SMALL_STATE(28)] = 1008,
  [SMALL_STATE(29)] = 1050,
  [SMALL_STATE(30)] = 1092,
  [SMALL_STATE(31)] = 1134,
  [SMALL_STATE(32)] = 1176,
  [SMALL_STATE(33)] = 1218,
  [SMALL_STATE(34)] = 1260,
  [SMALL_STATE(35)] = 1302,
  [SMALL_STATE(36)] = 1344,
  [SMALL_STATE(37)] = 1386,
  [SMALL_STATE(38)] = 1428,
  [SMALL_STATE(39)] = 1470,
  [SMALL_STATE(40)] = 1512,
  [SMALL_STATE(41)] = 1554,
  [SMALL_STATE(42)] = 1596,
  [SMALL_STATE(43)] = 1638,
  [SMALL_STATE(44)] = 1680,
  [SMALL_STATE(45)] = 1697,
  [SMALL_STATE(46)] = 1714,
  [SMALL_STATE(47)] = 1731,
  [SMALL_STATE(48)] = 1748,
  [SMALL_STATE(49)] = 1765,
  [SMALL_STATE(50)] = 1779,
  [SMALL_STATE(51)] = 1793,
  [SMALL_STATE(52)] = 1807,
  [SMALL_STATE(53)] = 1816,
  [SMALL_STATE(54)] = 1827,
  [SMALL_STATE(55)] = 1836,
  [SMALL_STATE(56)] = 1846,
  [SMALL_STATE(57)] = 1856,
  [SMALL_STATE(58)] = 1866,
  [SMALL_STATE(59)] = 1876,
  [SMALL_STATE(60)] = 1886,
  [SMALL_STATE(61)] = 1896,
  [SMALL_STATE(62)] = 1906,
  [SMALL_STATE(63)] = 1916,
  [SMALL_STATE(64)] = 1926,
  [SMALL_STATE(65)] = 1936,
  [SMALL_STATE(66)] = 1946,
  [SMALL_STATE(67)] = 1956,
  [SMALL_STATE(68)] = 1966,
  [SMALL_STATE(69)] = 1976,
  [SMALL_STATE(70)] = 1986,
  [SMALL_STATE(71)] = 1996,
  [SMALL_STATE(72)] = 2006,
  [SMALL_STATE(73)] = 2016,
  [SMALL_STATE(74)] = 2026,
  [SMALL_STATE(75)] = 2036,
  [SMALL_STATE(76)] = 2046,
  [SMALL_STATE(77)] = 2056,
  [SMALL_STATE(78)] = 2066,
  [SMALL_STATE(79)] = 2076,
  [SMALL_STATE(80)] = 2086,
  [SMALL_STATE(81)] = 2096,
  [SMALL_STATE(82)] = 2106,
  [SMALL_STATE(83)] = 2116,
  [SMALL_STATE(84)] = 2126,
  [SMALL_STATE(85)] = 2136,
  [SMALL_STATE(86)] = 2146,
  [SMALL_STATE(87)] = 2156,
  [SMALL_STATE(88)] = 2166,
  [SMALL_STATE(89)] = 2176,
  [SMALL_STATE(90)] = 2183,
  [SMALL_STATE(91)] = 2190,
  [SMALL_STATE(92)] = 2197,
  [SMALL_STATE(93)] = 2204,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 0, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1, 0, 0),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0),
  [77] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(80),
  [80] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(77),
  [83] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(75),
  [86] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(56),
  [89] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(84),
  [92] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(85),
  [95] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(76),
  [98] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(78),
  [101] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(71),
  [104] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(55),
  [107] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(72),
  [110] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(70),
  [113] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(87),
  [116] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(68),
  [119] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(67),
  [122] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(66),
  [125] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(65),
  [128] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(64),
  [131] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(63),
  [134] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(62),
  [137] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(61),
  [140] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(60),
  [143] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(59),
  [146] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(58),
  [149] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(57),
  [152] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(73),
  [155] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(79),
  [158] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(82),
  [161] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(86),
  [164] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(74),
  [167] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(81),
  [170] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(83),
  [173] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(88),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body, 2, 0, 0),
  [178] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_body, 2, 0, 0),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vars_post_response, 2, 0, 0),
  [182] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_vars_post_response, 2, 0, 0),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text_block, 3, 0, 0),
  [186] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_text_block, 3, 0, 0),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dictionary_block, 3, 0, 0),
  [190] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dictionary_block, 3, 0, 0),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_docs, 2, 0, 0),
  [194] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_docs, 2, 0, 0),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tests, 2, 0, 0),
  [198] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tests, 2, 0, 0),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script_post_response, 2, 0, 0),
  [202] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_script_post_response, 2, 0, 0),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script_pre_request, 2, 0, 0),
  [206] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_script_pre_request, 2, 0, 0),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assert, 2, 0, 0),
  [210] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assert, 2, 0, 0),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vars_pre_request, 2, 0, 0),
  [214] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_vars_pre_request, 2, 0, 0),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body_multipart_form, 2, 0, 0),
  [218] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_body_multipart_form, 2, 0, 0),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body_form_urlencoded, 2, 0, 0),
  [222] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_body_form_urlencoded, 2, 0, 0),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body_graphql_vars, 2, 0, 0),
  [226] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_body_graphql_vars, 2, 0, 0),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body_graphql, 2, 0, 0),
  [230] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_body_graphql, 2, 0, 0),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body_sparql, 2, 0, 0),
  [234] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_body_sparql, 2, 0, 0),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body_xml, 2, 0, 0),
  [238] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_body_xml, 2, 0, 0),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body_text, 2, 0, 0),
  [242] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_body_text, 2, 0, 0),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body_json, 2, 0, 0),
  [246] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_body_json, 2, 0, 0),
  [248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_auth_oauth2, 2, 0, 0),
  [250] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_auth_oauth2, 2, 0, 0),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_options, 2, 0, 0),
  [254] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_options, 2, 0, 0),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_auth_bearer, 2, 0, 0),
  [258] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_auth_bearer, 2, 0, 0),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_auth_basic, 2, 0, 0),
  [262] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_auth_basic, 2, 0, 0),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_auth_awsv4, 2, 0, 0),
  [266] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_auth_awsv4, 2, 0, 0),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_head, 2, 0, 0),
  [270] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_head, 2, 0, 0),
  [272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query, 2, 0, 0),
  [274] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_query, 2, 0, 0),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trace, 2, 0, 0),
  [278] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_trace, 2, 0, 0),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_patch, 2, 0, 0),
  [282] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_patch, 2, 0, 0),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_connect, 2, 0, 0),
  [286] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_connect, 2, 0, 0),
  [288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_headers, 2, 0, 0),
  [290] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_headers, 2, 0, 0),
  [292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_auth_digest, 2, 0, 0),
  [294] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_auth_digest, 2, 0, 0),
  [296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete, 2, 0, 0),
  [298] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_delete, 2, 0, 0),
  [300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_put, 2, 0, 0),
  [302] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_put, 2, 0, 0),
  [304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_http, 1, 0, 0),
  [306] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_http, 1, 0, 0),
  [308] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_auths, 1, 0, 0),
  [310] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_auths, 1, 0, 0),
  [312] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bodies, 1, 0, 0),
  [314] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bodies, 1, 0, 0),
  [316] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vars, 1, 0, 0),
  [318] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_vars, 1, 0, 0),
  [320] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scripts, 1, 0, 0),
  [322] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scripts, 1, 0, 0),
  [324] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_post, 2, 0, 0),
  [326] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_post, 2, 0, 0),
  [328] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_get, 2, 0, 0),
  [330] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_get, 2, 0, 0),
  [332] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_meta, 2, 0, 0),
  [334] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_meta, 2, 0, 0),
  [336] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [338] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [340] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [342] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_text_repeat1, 2, 0, 0), SHIFT_REPEAT(48),
  [345] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_text_repeat1, 2, 0, 0),
  [347] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_text_repeat1, 2, 0, 0), SHIFT_REPEAT(45),
  [350] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [352] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [354] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_text, 1, 0, 0),
  [356] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [358] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [360] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_dictionary_repeat1, 2, 0, 0),
  [362] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_dictionary_repeat1, 2, 0, 0), SHIFT_REPEAT(93),
  [365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dictionary, 1, 0, 0),
  [367] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [369] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__text, 2, 0, 0),
  [371] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pair, 3, 0, 0),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [375] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__text, 3, 0, 0),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [381] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pair, 4, 0, 0),
  [383] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pair, 4, 0, 0),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [387] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_bru(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
