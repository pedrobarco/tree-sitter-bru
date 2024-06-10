#include "parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 82
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 87
#define ALIAS_COUNT 0
#define TOKEN_COUNT 45
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 3
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
  anon_sym_params_COLONpath = 12,
  anon_sym_params_COLONquery = 13,
  anon_sym_headers = 14,
  anon_sym_auth_COLONawsv4 = 15,
  anon_sym_auth_COLONbasic = 16,
  anon_sym_auth_COLONbearer = 17,
  anon_sym_auth_COLONdigest = 18,
  anon_sym_auth_COLONoauth2 = 19,
  anon_sym_body_COLONjson = 20,
  anon_sym_body_COLONtext = 21,
  anon_sym_body_COLONxml = 22,
  anon_sym_body_COLONsparql = 23,
  anon_sym_body_COLONgraphql = 24,
  anon_sym_body_COLONgraphql_COLONvars = 25,
  anon_sym_body_COLONform_DASHurlencoded = 26,
  anon_sym_body_COLONmultipart_DASHform = 27,
  anon_sym_body = 28,
  anon_sym_vars_COLONpre_DASHrequest = 29,
  anon_sym_vars_COLONpost_DASHresponse = 30,
  anon_sym_assert = 31,
  anon_sym_script_COLONpre_DASHrequest = 32,
  anon_sym_script_COLONpost_DASHresponse = 33,
  anon_sym_tests = 34,
  anon_sym_docs = 35,
  anon_sym_LBRACE = 36,
  anon_sym_RBRACE = 37,
  anon_sym_COLON = 38,
  sym_key = 39,
  sym_value = 40,
  sym__any = 41,
  sym__nl = 42,
  sym__s = 43,
  sym_comment = 44,
  sym_document = 45,
  sym_meta = 46,
  sym_http = 47,
  sym_http_verb = 48,
  sym_query = 49,
  sym_params = 50,
  sym_params_path = 51,
  sym_params_query = 52,
  sym_headers = 53,
  sym_auths = 54,
  sym_auth_awsv4 = 55,
  sym_auth_basic = 56,
  sym_auth_bearer = 57,
  sym_auth_digest = 58,
  sym_auth_oauth2 = 59,
  sym_bodies = 60,
  sym_body_json = 61,
  sym_body_text = 62,
  sym_body_xml = 63,
  sym_body_sparql = 64,
  sym_body_graphql = 65,
  sym_body_graphql_vars = 66,
  sym_body_form_urlencoded = 67,
  sym_body_multipart_form = 68,
  sym_body = 69,
  sym_vars = 70,
  sym_vars_pre_request = 71,
  sym_vars_post_response = 72,
  sym_assert = 73,
  sym_scripts = 74,
  sym_script_pre_request = 75,
  sym_script_post_response = 76,
  sym_tests = 77,
  sym_docs = 78,
  sym_dictionary = 79,
  sym_pair = 80,
  sym_text_block = 81,
  sym_text = 82,
  sym__text = 83,
  aux_sym_document_repeat1 = 84,
  aux_sym_dictionary_repeat1 = 85,
  aux_sym_text_repeat1 = 86,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_meta] = "keyword",
  [anon_sym_get] = "get",
  [anon_sym_post] = "post",
  [anon_sym_put] = "put",
  [anon_sym_delete] = "delete",
  [anon_sym_patch] = "patch",
  [anon_sym_options] = "options",
  [anon_sym_head] = "head",
  [anon_sym_connect] = "connect",
  [anon_sym_trace] = "trace",
  [anon_sym_query] = "keyword",
  [anon_sym_params_COLONpath] = "keyword",
  [anon_sym_params_COLONquery] = "keyword",
  [anon_sym_headers] = "keyword",
  [anon_sym_auth_COLONawsv4] = "keyword",
  [anon_sym_auth_COLONbasic] = "keyword",
  [anon_sym_auth_COLONbearer] = "keyword",
  [anon_sym_auth_COLONdigest] = "keyword",
  [anon_sym_auth_COLONoauth2] = "keyword",
  [anon_sym_body_COLONjson] = "keyword",
  [anon_sym_body_COLONtext] = "keyword",
  [anon_sym_body_COLONxml] = "keyword",
  [anon_sym_body_COLONsparql] = "keyword",
  [anon_sym_body_COLONgraphql] = "keyword",
  [anon_sym_body_COLONgraphql_COLONvars] = "keyword",
  [anon_sym_body_COLONform_DASHurlencoded] = "keyword",
  [anon_sym_body_COLONmultipart_DASHform] = "keyword",
  [anon_sym_body] = "keyword",
  [anon_sym_vars_COLONpre_DASHrequest] = "keyword",
  [anon_sym_vars_COLONpost_DASHresponse] = "keyword",
  [anon_sym_assert] = "keyword",
  [anon_sym_script_COLONpre_DASHrequest] = "keyword",
  [anon_sym_script_COLONpost_DASHresponse] = "keyword",
  [anon_sym_tests] = "keyword",
  [anon_sym_docs] = "keyword",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_COLON] = ":",
  [sym_key] = "key",
  [sym_value] = "value",
  [sym__any] = "_any",
  [sym__nl] = "_nl",
  [sym__s] = "_s",
  [sym_comment] = "comment",
  [sym_document] = "document",
  [sym_meta] = "meta",
  [sym_http] = "http",
  [sym_http_verb] = "keyword",
  [sym_query] = "query",
  [sym_params] = "params",
  [sym_params_path] = "params_path",
  [sym_params_query] = "params_query",
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
  [anon_sym_query] = anon_sym_meta,
  [anon_sym_params_COLONpath] = anon_sym_meta,
  [anon_sym_params_COLONquery] = anon_sym_meta,
  [anon_sym_headers] = anon_sym_meta,
  [anon_sym_auth_COLONawsv4] = anon_sym_meta,
  [anon_sym_auth_COLONbasic] = anon_sym_meta,
  [anon_sym_auth_COLONbearer] = anon_sym_meta,
  [anon_sym_auth_COLONdigest] = anon_sym_meta,
  [anon_sym_auth_COLONoauth2] = anon_sym_meta,
  [anon_sym_body_COLONjson] = anon_sym_meta,
  [anon_sym_body_COLONtext] = anon_sym_meta,
  [anon_sym_body_COLONxml] = anon_sym_meta,
  [anon_sym_body_COLONsparql] = anon_sym_meta,
  [anon_sym_body_COLONgraphql] = anon_sym_meta,
  [anon_sym_body_COLONgraphql_COLONvars] = anon_sym_meta,
  [anon_sym_body_COLONform_DASHurlencoded] = anon_sym_meta,
  [anon_sym_body_COLONmultipart_DASHform] = anon_sym_meta,
  [anon_sym_body] = anon_sym_meta,
  [anon_sym_vars_COLONpre_DASHrequest] = anon_sym_meta,
  [anon_sym_vars_COLONpost_DASHresponse] = anon_sym_meta,
  [anon_sym_assert] = anon_sym_meta,
  [anon_sym_script_COLONpre_DASHrequest] = anon_sym_meta,
  [anon_sym_script_COLONpost_DASHresponse] = anon_sym_meta,
  [anon_sym_tests] = anon_sym_meta,
  [anon_sym_docs] = anon_sym_meta,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_COLON] = anon_sym_COLON,
  [sym_key] = sym_key,
  [sym_value] = sym_value,
  [sym__any] = sym__any,
  [sym__nl] = sym__nl,
  [sym__s] = sym__s,
  [sym_comment] = sym_comment,
  [sym_document] = sym_document,
  [sym_meta] = sym_meta,
  [sym_http] = sym_http,
  [sym_http_verb] = anon_sym_meta,
  [sym_query] = sym_query,
  [sym_params] = sym_params,
  [sym_params_path] = sym_params_path,
  [sym_params_query] = sym_params_query,
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
    .named = true,
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
    .named = true,
  },
  [anon_sym_params_COLONpath] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_params_COLONquery] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_headers] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_auth_COLONawsv4] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_auth_COLONbasic] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_auth_COLONbearer] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_auth_COLONdigest] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_auth_COLONoauth2] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_body_COLONjson] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_body_COLONtext] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_body_COLONxml] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_body_COLONsparql] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_body_COLONgraphql] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_body_COLONgraphql_COLONvars] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_body_COLONform_DASHurlencoded] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_body_COLONmultipart_DASHform] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_body] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_vars_COLONpre_DASHrequest] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_vars_COLONpost_DASHresponse] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_assert] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_script_COLONpre_DASHrequest] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_script_COLONpost_DASHresponse] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_tests] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_docs] = {
    .visible = true,
    .named = true,
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
  [sym__s] = {
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
  [sym_http_verb] = {
    .visible = true,
    .named = true,
  },
  [sym_query] = {
    .visible = true,
    .named = true,
  },
  [sym_params] = {
    .visible = true,
    .named = true,
  },
  [sym_params_path] = {
    .visible = true,
    .named = true,
  },
  [sym_params_query] = {
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(202);
      ADVANCE_MAP(
        '\n', 248,
        '\r', 249,
        '#', 251,
        ':', 240,
        'a', 144,
        'b', 99,
        'c', 100,
        'd', 42,
        'g', 50,
        'h', 49,
        'm', 52,
        'o', 111,
        'p', 16,
        'q', 189,
        's', 31,
        't', 62,
        'v', 21,
        '{', 238,
        '}', 239,
        '\t', 250,
        0x0b, 250,
        '\f', 250,
        ' ', 250,
      );
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(248);
      if (lookahead == '\r') ADVANCE(249);
      if (lookahead == '#') ADVANCE(241);
      if (lookahead == '}') ADVANCE(239);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(250);
      if (lookahead != 0 &&
          lookahead != ':') ADVANCE(242);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(248);
      if (lookahead == '\r') ADVANCE(249);
      if (lookahead == '#') ADVANCE(243);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(250);
      if (lookahead != 0) ADVANCE(243);
      END_STATE();
    case 3:
      ADVANCE_MAP(
        '\n', 246,
        '\r', 244,
        '#', 245,
        '{', 238,
        '}', 239,
        '\t', 246,
        0x0b, 246,
        '\f', 246,
        ' ', 246,
      );
      if (lookahead != 0) ADVANCE(247);
      END_STATE();
    case 4:
      if (lookahead == '-') ADVANCE(70);
      END_STATE();
    case 5:
      if (lookahead == '-') ADVANCE(190);
      END_STATE();
    case 6:
      if (lookahead == '-') ADVANCE(137);
      END_STATE();
    case 7:
      if (lookahead == '-') ADVANCE(138);
      END_STATE();
    case 8:
      if (lookahead == '-') ADVANCE(143);
      END_STATE();
    case 9:
      if (lookahead == '-') ADVANCE(142);
      END_STATE();
    case 10:
      if (lookahead == '2') ADVANCE(221);
      END_STATE();
    case 11:
      if (lookahead == '4') ADVANCE(217);
      END_STATE();
    case 12:
      if (lookahead == ':') ADVANCE(19);
      END_STATE();
    case 13:
      if (lookahead == ':') ADVANCE(113);
      END_STATE();
    case 14:
      if (lookahead == ':') ADVANCE(110);
      END_STATE();
    case 15:
      if (lookahead == ':') ADVANCE(119);
      END_STATE();
    case 16:
      if (lookahead == 'a') ADVANCE(132);
      if (lookahead == 'o') ADVANCE(155);
      if (lookahead == 'u') ADVANCE(170);
      END_STATE();
    case 17:
      if (lookahead == 'a') ADVANCE(203);
      END_STATE();
    case 18:
      if (lookahead == 'a') ADVANCE(91);
      END_STATE();
    case 19:
      if (lookahead == 'a') ADVANCE(197);
      if (lookahead == 'b') ADVANCE(27);
      if (lookahead == 'd') ADVANCE(77);
      if (lookahead == 'o') ADVANCE(22);
      END_STATE();
    case 20:
      if (lookahead == 'a') ADVANCE(39);
      END_STATE();
    case 21:
      if (lookahead == 'a') ADVANCE(130);
      END_STATE();
    case 22:
      if (lookahead == 'a') ADVANCE(191);
      END_STATE();
    case 23:
      if (lookahead == 'a') ADVANCE(112);
      END_STATE();
    case 24:
      if (lookahead == 'a') ADVANCE(35);
      END_STATE();
    case 25:
      if (lookahead == 'a') ADVANCE(141);
      END_STATE();
    case 26:
      if (lookahead == 'a') ADVANCE(124);
      END_STATE();
    case 27:
      if (lookahead == 'a') ADVANCE(153);
      if (lookahead == 'e') ADVANCE(25);
      END_STATE();
    case 28:
      if (lookahead == 'a') ADVANCE(140);
      END_STATE();
    case 29:
      if (lookahead == 'a') ADVANCE(182);
      END_STATE();
    case 30:
      if (lookahead == 'a') ADVANCE(139);
      END_STATE();
    case 31:
      if (lookahead == 'c') ADVANCE(127);
      END_STATE();
    case 32:
      if (lookahead == 'c') ADVANCE(218);
      END_STATE();
    case 33:
      if (lookahead == 'c') ADVANCE(73);
      END_STATE();
    case 34:
      if (lookahead == 'c') ADVANCE(145);
      END_STATE();
    case 35:
      if (lookahead == 'c') ADVANCE(43);
      END_STATE();
    case 36:
      if (lookahead == 'c') ADVANCE(173);
      END_STATE();
    case 37:
      if (lookahead == 'c') ADVANCE(101);
      END_STATE();
    case 38:
      if (lookahead == 'd') ADVANCE(199);
      END_STATE();
    case 39:
      if (lookahead == 'd') ADVANCE(210);
      END_STATE();
    case 40:
      if (lookahead == 'd') ADVANCE(228);
      END_STATE();
    case 41:
      if (lookahead == 'd') ADVANCE(54);
      END_STATE();
    case 42:
      if (lookahead == 'e') ADVANCE(87);
      if (lookahead == 'o') ADVANCE(34);
      END_STATE();
    case 43:
      if (lookahead == 'e') ADVANCE(212);
      END_STATE();
    case 44:
      if (lookahead == 'e') ADVANCE(207);
      END_STATE();
    case 45:
      if (lookahead == 'e') ADVANCE(198);
      END_STATE();
    case 46:
      if (lookahead == 'e') ADVANCE(6);
      END_STATE();
    case 47:
      if (lookahead == 'e') ADVANCE(232);
      END_STATE();
    case 48:
      if (lookahead == 'e') ADVANCE(235);
      END_STATE();
    case 49:
      if (lookahead == 'e') ADVANCE(20);
      END_STATE();
    case 50:
      if (lookahead == 'e') ADVANCE(168);
      END_STATE();
    case 51:
      if (lookahead == 'e') ADVANCE(122);
      END_STATE();
    case 52:
      if (lookahead == 'e') ADVANCE(180);
      END_STATE();
    case 53:
      if (lookahead == 'e') ADVANCE(126);
      END_STATE();
    case 54:
      if (lookahead == 'e') ADVANCE(40);
      END_STATE();
    case 55:
      if (lookahead == 'e') ADVANCE(136);
      END_STATE();
    case 56:
      if (lookahead == 'e') ADVANCE(36);
      END_STATE();
    case 57:
      if (lookahead == 'e') ADVANCE(95);
      END_STATE();
    case 58:
      if (lookahead == 'e') ADVANCE(184);
      END_STATE();
    case 59:
      if (lookahead == 'e') ADVANCE(125);
      END_STATE();
    case 60:
      if (lookahead == 'e') ADVANCE(128);
      END_STATE();
    case 61:
      if (lookahead == 'e') ADVANCE(154);
      END_STATE();
    case 62:
      if (lookahead == 'e') ADVANCE(156);
      if (lookahead == 'r') ADVANCE(24);
      END_STATE();
    case 63:
      if (lookahead == 'e') ADVANCE(160);
      END_STATE();
    case 64:
      if (lookahead == 'e') ADVANCE(161);
      END_STATE();
    case 65:
      if (lookahead == 'e') ADVANCE(162);
      END_STATE();
    case 66:
      if (lookahead == 'e') ADVANCE(165);
      END_STATE();
    case 67:
      if (lookahead == 'e') ADVANCE(123);
      END_STATE();
    case 68:
      if (lookahead == 'e') ADVANCE(9);
      END_STATE();
    case 69:
      if (lookahead == 'f') ADVANCE(105);
      if (lookahead == 'g') ADVANCE(134);
      if (lookahead == 'j') ADVANCE(163);
      if (lookahead == 'm') ADVANCE(188);
      if (lookahead == 's') ADVANCE(115);
      if (lookahead == 't') ADVANCE(45);
      if (lookahead == 'x') ADVANCE(90);
      END_STATE();
    case 70:
      if (lookahead == 'f') ADVANCE(106);
      END_STATE();
    case 71:
      if (lookahead == 'g') ADVANCE(63);
      END_STATE();
    case 72:
      if (lookahead == 'h') ADVANCE(12);
      END_STATE();
    case 73:
      if (lookahead == 'h') ADVANCE(208);
      END_STATE();
    case 74:
      if (lookahead == 'h') ADVANCE(10);
      END_STATE();
    case 75:
      if (lookahead == 'h') ADVANCE(214);
      END_STATE();
    case 76:
      if (lookahead == 'h') ADVANCE(121);
      END_STATE();
    case 77:
      if (lookahead == 'i') ADVANCE(71);
      END_STATE();
    case 78:
      if (lookahead == 'i') ADVANCE(102);
      END_STATE();
    case 79:
      if (lookahead == 'i') ADVANCE(32);
      END_STATE();
    case 80:
      if (lookahead == 'i') ADVANCE(114);
      END_STATE();
    case 81:
      if (lookahead == 'i') ADVANCE(117);
      END_STATE();
    case 82:
      if (lookahead == 'l') ADVANCE(224);
      END_STATE();
    case 83:
      if (lookahead == 'l') ADVANCE(225);
      END_STATE();
    case 84:
      if (lookahead == 'l') ADVANCE(226);
      END_STATE();
    case 85:
      if (lookahead == 'l') ADVANCE(57);
      END_STATE();
    case 86:
      if (lookahead == 'l') ADVANCE(183);
      END_STATE();
    case 87:
      if (lookahead == 'l') ADVANCE(58);
      END_STATE();
    case 88:
      if (lookahead == 'm') ADVANCE(229);
      END_STATE();
    case 89:
      if (lookahead == 'm') ADVANCE(5);
      END_STATE();
    case 90:
      if (lookahead == 'm') ADVANCE(82);
      END_STATE();
    case 91:
      if (lookahead == 'm') ADVANCE(152);
      END_STATE();
    case 92:
      if (lookahead == 'n') ADVANCE(222);
      END_STATE();
    case 93:
      if (lookahead == 'n') ADVANCE(94);
      END_STATE();
    case 94:
      if (lookahead == 'n') ADVANCE(56);
      END_STATE();
    case 95:
      if (lookahead == 'n') ADVANCE(37);
      END_STATE();
    case 96:
      if (lookahead == 'n') ADVANCE(148);
      END_STATE();
    case 97:
      if (lookahead == 'n') ADVANCE(157);
      END_STATE();
    case 98:
      if (lookahead == 'n') ADVANCE(159);
      END_STATE();
    case 99:
      if (lookahead == 'o') ADVANCE(38);
      END_STATE();
    case 100:
      if (lookahead == 'o') ADVANCE(93);
      END_STATE();
    case 101:
      if (lookahead == 'o') ADVANCE(41);
      END_STATE();
    case 102:
      if (lookahead == 'o') ADVANCE(96);
      END_STATE();
    case 103:
      if (lookahead == 'o') ADVANCE(92);
      END_STATE();
    case 104:
      if (lookahead == 'o') ADVANCE(97);
      END_STATE();
    case 105:
      if (lookahead == 'o') ADVANCE(129);
      END_STATE();
    case 106:
      if (lookahead == 'o') ADVANCE(131);
      END_STATE();
    case 107:
      if (lookahead == 'o') ADVANCE(158);
      if (lookahead == 'r') ADVANCE(46);
      END_STATE();
    case 108:
      if (lookahead == 'o') ADVANCE(98);
      END_STATE();
    case 109:
      if (lookahead == 'o') ADVANCE(166);
      if (lookahead == 'r') ADVANCE(68);
      END_STATE();
    case 110:
      if (lookahead == 'p') ADVANCE(107);
      END_STATE();
    case 111:
      if (lookahead == 'p') ADVANCE(169);
      END_STATE();
    case 112:
      if (lookahead == 'p') ADVANCE(76);
      END_STATE();
    case 113:
      if (lookahead == 'p') ADVANCE(29);
      if (lookahead == 'q') ADVANCE(192);
      END_STATE();
    case 114:
      if (lookahead == 'p') ADVANCE(187);
      END_STATE();
    case 115:
      if (lookahead == 'p') ADVANCE(26);
      END_STATE();
    case 116:
      if (lookahead == 'p') ADVANCE(104);
      END_STATE();
    case 117:
      if (lookahead == 'p') ADVANCE(28);
      END_STATE();
    case 118:
      if (lookahead == 'p') ADVANCE(108);
      END_STATE();
    case 119:
      if (lookahead == 'p') ADVANCE(109);
      END_STATE();
    case 120:
      if (lookahead == 'q') ADVANCE(83);
      END_STATE();
    case 121:
      if (lookahead == 'q') ADVANCE(84);
      END_STATE();
    case 122:
      if (lookahead == 'q') ADVANCE(193);
      END_STATE();
    case 123:
      if (lookahead == 'q') ADVANCE(194);
      END_STATE();
    case 124:
      if (lookahead == 'r') ADVANCE(120);
      END_STATE();
    case 125:
      if (lookahead == 'r') ADVANCE(219);
      END_STATE();
    case 126:
      if (lookahead == 'r') ADVANCE(200);
      END_STATE();
    case 127:
      if (lookahead == 'r') ADVANCE(80);
      END_STATE();
    case 128:
      if (lookahead == 'r') ADVANCE(201);
      END_STATE();
    case 129:
      if (lookahead == 'r') ADVANCE(89);
      END_STATE();
    case 130:
      if (lookahead == 'r') ADVANCE(151);
      END_STATE();
    case 131:
      if (lookahead == 'r') ADVANCE(88);
      END_STATE();
    case 132:
      if (lookahead == 'r') ADVANCE(18);
      if (lookahead == 't') ADVANCE(33);
      END_STATE();
    case 133:
      if (lookahead == 'r') ADVANCE(85);
      END_STATE();
    case 134:
      if (lookahead == 'r') ADVANCE(23);
      END_STATE();
    case 135:
      if (lookahead == 'r') ADVANCE(147);
      END_STATE();
    case 136:
      if (lookahead == 'r') ADVANCE(172);
      END_STATE();
    case 137:
      if (lookahead == 'r') ADVANCE(51);
      END_STATE();
    case 138:
      if (lookahead == 'r') ADVANCE(61);
      END_STATE();
    case 139:
      if (lookahead == 'r') ADVANCE(150);
      END_STATE();
    case 140:
      if (lookahead == 'r') ADVANCE(179);
      END_STATE();
    case 141:
      if (lookahead == 'r') ADVANCE(59);
      END_STATE();
    case 142:
      if (lookahead == 'r') ADVANCE(67);
      END_STATE();
    case 143:
      if (lookahead == 'r') ADVANCE(66);
      END_STATE();
    case 144:
      if (lookahead == 's') ADVANCE(164);
      if (lookahead == 'u') ADVANCE(167);
      END_STATE();
    case 145:
      if (lookahead == 's') ADVANCE(237);
      END_STATE();
    case 146:
      if (lookahead == 's') ADVANCE(236);
      END_STATE();
    case 147:
      if (lookahead == 's') ADVANCE(216);
      END_STATE();
    case 148:
      if (lookahead == 's') ADVANCE(209);
      END_STATE();
    case 149:
      if (lookahead == 's') ADVANCE(195);
      END_STATE();
    case 150:
      if (lookahead == 's') ADVANCE(227);
      END_STATE();
    case 151:
      if (lookahead == 's') ADVANCE(14);
      END_STATE();
    case 152:
      if (lookahead == 's') ADVANCE(13);
      END_STATE();
    case 153:
      if (lookahead == 's') ADVANCE(79);
      END_STATE();
    case 154:
      if (lookahead == 's') ADVANCE(116);
      END_STATE();
    case 155:
      if (lookahead == 's') ADVANCE(171);
      END_STATE();
    case 156:
      if (lookahead == 's') ADVANCE(181);
      END_STATE();
    case 157:
      if (lookahead == 's') ADVANCE(47);
      END_STATE();
    case 158:
      if (lookahead == 's') ADVANCE(185);
      END_STATE();
    case 159:
      if (lookahead == 's') ADVANCE(48);
      END_STATE();
    case 160:
      if (lookahead == 's') ADVANCE(175);
      END_STATE();
    case 161:
      if (lookahead == 's') ADVANCE(176);
      END_STATE();
    case 162:
      if (lookahead == 's') ADVANCE(177);
      END_STATE();
    case 163:
      if (lookahead == 's') ADVANCE(103);
      END_STATE();
    case 164:
      if (lookahead == 's') ADVANCE(55);
      END_STATE();
    case 165:
      if (lookahead == 's') ADVANCE(118);
      END_STATE();
    case 166:
      if (lookahead == 's') ADVANCE(186);
      END_STATE();
    case 167:
      if (lookahead == 't') ADVANCE(72);
      END_STATE();
    case 168:
      if (lookahead == 't') ADVANCE(204);
      END_STATE();
    case 169:
      if (lookahead == 't') ADVANCE(78);
      END_STATE();
    case 170:
      if (lookahead == 't') ADVANCE(206);
      END_STATE();
    case 171:
      if (lookahead == 't') ADVANCE(205);
      END_STATE();
    case 172:
      if (lookahead == 't') ADVANCE(233);
      END_STATE();
    case 173:
      if (lookahead == 't') ADVANCE(211);
      END_STATE();
    case 174:
      if (lookahead == 't') ADVANCE(223);
      END_STATE();
    case 175:
      if (lookahead == 't') ADVANCE(220);
      END_STATE();
    case 176:
      if (lookahead == 't') ADVANCE(231);
      END_STATE();
    case 177:
      if (lookahead == 't') ADVANCE(234);
      END_STATE();
    case 178:
      if (lookahead == 't') ADVANCE(74);
      END_STATE();
    case 179:
      if (lookahead == 't') ADVANCE(4);
      END_STATE();
    case 180:
      if (lookahead == 't') ADVANCE(17);
      END_STATE();
    case 181:
      if (lookahead == 't') ADVANCE(146);
      END_STATE();
    case 182:
      if (lookahead == 't') ADVANCE(75);
      END_STATE();
    case 183:
      if (lookahead == 't') ADVANCE(81);
      END_STATE();
    case 184:
      if (lookahead == 't') ADVANCE(44);
      END_STATE();
    case 185:
      if (lookahead == 't') ADVANCE(7);
      END_STATE();
    case 186:
      if (lookahead == 't') ADVANCE(8);
      END_STATE();
    case 187:
      if (lookahead == 't') ADVANCE(15);
      END_STATE();
    case 188:
      if (lookahead == 'u') ADVANCE(86);
      END_STATE();
    case 189:
      if (lookahead == 'u') ADVANCE(53);
      END_STATE();
    case 190:
      if (lookahead == 'u') ADVANCE(133);
      END_STATE();
    case 191:
      if (lookahead == 'u') ADVANCE(178);
      END_STATE();
    case 192:
      if (lookahead == 'u') ADVANCE(60);
      END_STATE();
    case 193:
      if (lookahead == 'u') ADVANCE(64);
      END_STATE();
    case 194:
      if (lookahead == 'u') ADVANCE(65);
      END_STATE();
    case 195:
      if (lookahead == 'v') ADVANCE(11);
      END_STATE();
    case 196:
      if (lookahead == 'v') ADVANCE(30);
      END_STATE();
    case 197:
      if (lookahead == 'w') ADVANCE(149);
      END_STATE();
    case 198:
      if (lookahead == 'x') ADVANCE(174);
      END_STATE();
    case 199:
      if (lookahead == 'y') ADVANCE(230);
      END_STATE();
    case 200:
      if (lookahead == 'y') ADVANCE(213);
      END_STATE();
    case 201:
      if (lookahead == 'y') ADVANCE(215);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_meta);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(anon_sym_get);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_post);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_put);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_delete);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(anon_sym_patch);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(anon_sym_options);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(anon_sym_head);
      if (lookahead == 'e') ADVANCE(135);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(anon_sym_connect);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(anon_sym_trace);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(anon_sym_query);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(anon_sym_params_COLONpath);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(anon_sym_params_COLONquery);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(anon_sym_headers);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(anon_sym_auth_COLONawsv4);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(anon_sym_auth_COLONbasic);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(anon_sym_auth_COLONbearer);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(anon_sym_auth_COLONdigest);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(anon_sym_auth_COLONoauth2);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(anon_sym_body_COLONjson);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(anon_sym_body_COLONtext);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(anon_sym_body_COLONxml);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(anon_sym_body_COLONsparql);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(anon_sym_body_COLONgraphql);
      if (lookahead == ':') ADVANCE(196);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(anon_sym_body_COLONgraphql_COLONvars);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(anon_sym_body_COLONform_DASHurlencoded);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(anon_sym_body_COLONmultipart_DASHform);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(anon_sym_body);
      if (lookahead == ':') ADVANCE(69);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(anon_sym_vars_COLONpre_DASHrequest);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(anon_sym_vars_COLONpost_DASHresponse);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(anon_sym_assert);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(anon_sym_script_COLONpre_DASHrequest);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(anon_sym_script_COLONpost_DASHresponse);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(anon_sym_tests);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(anon_sym_docs);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == ':' ||
          lookahead == '}') ADVANCE(251);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(241);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_key);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ':' &&
          lookahead != '}') ADVANCE(242);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_value);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(243);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym__any);
      if (lookahead == '\n') ADVANCE(246);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(246);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(247);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym__any);
      if (lookahead == '\n') ADVANCE(247);
      if (lookahead == '{' ||
          lookahead == '}') ADVANCE(251);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym__any);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(246);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(247);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym__any);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(247);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym__nl);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(250);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym__s);
      if (lookahead == '\n') ADVANCE(248);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(250);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym__s);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(250);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(251);
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
  [39] = {.lex_state = 3},
  [40] = {.lex_state = 3},
  [41] = {.lex_state = 3},
  [42] = {.lex_state = 3},
  [43] = {.lex_state = 3},
  [44] = {.lex_state = 1},
  [45] = {.lex_state = 1},
  [46] = {.lex_state = 1},
  [47] = {.lex_state = 3},
  [48] = {.lex_state = 3},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
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
  [66] = {.lex_state = 1},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 2},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
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
    [anon_sym_params_COLONpath] = ACTIONS(1),
    [anon_sym_params_COLONquery] = ACTIONS(1),
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
    [sym__nl] = ACTIONS(3),
    [sym__s] = ACTIONS(3),
    [sym_comment] = ACTIONS(5),
  },
  [1] = {
    [sym_document] = STATE(81),
    [sym_meta] = STATE(2),
    [sym_http] = STATE(2),
    [sym_http_verb] = STATE(54),
    [sym_query] = STATE(2),
    [sym_params] = STATE(2),
    [sym_params_path] = STATE(31),
    [sym_params_query] = STATE(31),
    [sym_headers] = STATE(2),
    [sym_auths] = STATE(2),
    [sym_auth_awsv4] = STATE(32),
    [sym_auth_basic] = STATE(32),
    [sym_auth_bearer] = STATE(32),
    [sym_auth_digest] = STATE(32),
    [sym_auth_oauth2] = STATE(32),
    [sym_bodies] = STATE(2),
    [sym_body_json] = STATE(33),
    [sym_body_text] = STATE(33),
    [sym_body_xml] = STATE(33),
    [sym_body_sparql] = STATE(33),
    [sym_body_graphql] = STATE(33),
    [sym_body_graphql_vars] = STATE(33),
    [sym_body_form_urlencoded] = STATE(33),
    [sym_body_multipart_form] = STATE(33),
    [sym_body] = STATE(33),
    [sym_vars] = STATE(2),
    [sym_vars_pre_request] = STATE(34),
    [sym_vars_post_response] = STATE(34),
    [sym_assert] = STATE(2),
    [sym_scripts] = STATE(2),
    [sym_script_pre_request] = STATE(35),
    [sym_script_post_response] = STATE(35),
    [sym_tests] = STATE(2),
    [sym_docs] = STATE(2),
    [aux_sym_document_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(7),
    [anon_sym_meta] = ACTIONS(9),
    [anon_sym_get] = ACTIONS(11),
    [anon_sym_post] = ACTIONS(11),
    [anon_sym_put] = ACTIONS(11),
    [anon_sym_delete] = ACTIONS(11),
    [anon_sym_patch] = ACTIONS(11),
    [anon_sym_options] = ACTIONS(11),
    [anon_sym_head] = ACTIONS(13),
    [anon_sym_connect] = ACTIONS(11),
    [anon_sym_trace] = ACTIONS(11),
    [anon_sym_query] = ACTIONS(15),
    [anon_sym_params_COLONpath] = ACTIONS(17),
    [anon_sym_params_COLONquery] = ACTIONS(19),
    [anon_sym_headers] = ACTIONS(21),
    [anon_sym_auth_COLONawsv4] = ACTIONS(23),
    [anon_sym_auth_COLONbasic] = ACTIONS(25),
    [anon_sym_auth_COLONbearer] = ACTIONS(27),
    [anon_sym_auth_COLONdigest] = ACTIONS(29),
    [anon_sym_auth_COLONoauth2] = ACTIONS(31),
    [anon_sym_body_COLONjson] = ACTIONS(33),
    [anon_sym_body_COLONtext] = ACTIONS(35),
    [anon_sym_body_COLONxml] = ACTIONS(37),
    [anon_sym_body_COLONsparql] = ACTIONS(39),
    [anon_sym_body_COLONgraphql] = ACTIONS(41),
    [anon_sym_body_COLONgraphql_COLONvars] = ACTIONS(43),
    [anon_sym_body_COLONform_DASHurlencoded] = ACTIONS(45),
    [anon_sym_body_COLONmultipart_DASHform] = ACTIONS(47),
    [anon_sym_body] = ACTIONS(49),
    [anon_sym_vars_COLONpre_DASHrequest] = ACTIONS(51),
    [anon_sym_vars_COLONpost_DASHresponse] = ACTIONS(53),
    [anon_sym_assert] = ACTIONS(55),
    [anon_sym_script_COLONpre_DASHrequest] = ACTIONS(57),
    [anon_sym_script_COLONpost_DASHresponse] = ACTIONS(59),
    [anon_sym_tests] = ACTIONS(61),
    [anon_sym_docs] = ACTIONS(63),
    [sym__nl] = ACTIONS(3),
    [sym__s] = ACTIONS(3),
    [sym_comment] = ACTIONS(5),
  },
  [2] = {
    [sym_meta] = STATE(3),
    [sym_http] = STATE(3),
    [sym_http_verb] = STATE(54),
    [sym_query] = STATE(3),
    [sym_params] = STATE(3),
    [sym_params_path] = STATE(31),
    [sym_params_query] = STATE(31),
    [sym_headers] = STATE(3),
    [sym_auths] = STATE(3),
    [sym_auth_awsv4] = STATE(32),
    [sym_auth_basic] = STATE(32),
    [sym_auth_bearer] = STATE(32),
    [sym_auth_digest] = STATE(32),
    [sym_auth_oauth2] = STATE(32),
    [sym_bodies] = STATE(3),
    [sym_body_json] = STATE(33),
    [sym_body_text] = STATE(33),
    [sym_body_xml] = STATE(33),
    [sym_body_sparql] = STATE(33),
    [sym_body_graphql] = STATE(33),
    [sym_body_graphql_vars] = STATE(33),
    [sym_body_form_urlencoded] = STATE(33),
    [sym_body_multipart_form] = STATE(33),
    [sym_body] = STATE(33),
    [sym_vars] = STATE(3),
    [sym_vars_pre_request] = STATE(34),
    [sym_vars_post_response] = STATE(34),
    [sym_assert] = STATE(3),
    [sym_scripts] = STATE(3),
    [sym_script_pre_request] = STATE(35),
    [sym_script_post_response] = STATE(35),
    [sym_tests] = STATE(3),
    [sym_docs] = STATE(3),
    [aux_sym_document_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(65),
    [anon_sym_meta] = ACTIONS(9),
    [anon_sym_get] = ACTIONS(11),
    [anon_sym_post] = ACTIONS(11),
    [anon_sym_put] = ACTIONS(11),
    [anon_sym_delete] = ACTIONS(11),
    [anon_sym_patch] = ACTIONS(11),
    [anon_sym_options] = ACTIONS(11),
    [anon_sym_head] = ACTIONS(13),
    [anon_sym_connect] = ACTIONS(11),
    [anon_sym_trace] = ACTIONS(11),
    [anon_sym_query] = ACTIONS(15),
    [anon_sym_params_COLONpath] = ACTIONS(17),
    [anon_sym_params_COLONquery] = ACTIONS(19),
    [anon_sym_headers] = ACTIONS(21),
    [anon_sym_auth_COLONawsv4] = ACTIONS(23),
    [anon_sym_auth_COLONbasic] = ACTIONS(25),
    [anon_sym_auth_COLONbearer] = ACTIONS(27),
    [anon_sym_auth_COLONdigest] = ACTIONS(29),
    [anon_sym_auth_COLONoauth2] = ACTIONS(31),
    [anon_sym_body_COLONjson] = ACTIONS(33),
    [anon_sym_body_COLONtext] = ACTIONS(35),
    [anon_sym_body_COLONxml] = ACTIONS(37),
    [anon_sym_body_COLONsparql] = ACTIONS(39),
    [anon_sym_body_COLONgraphql] = ACTIONS(41),
    [anon_sym_body_COLONgraphql_COLONvars] = ACTIONS(43),
    [anon_sym_body_COLONform_DASHurlencoded] = ACTIONS(45),
    [anon_sym_body_COLONmultipart_DASHform] = ACTIONS(47),
    [anon_sym_body] = ACTIONS(49),
    [anon_sym_vars_COLONpre_DASHrequest] = ACTIONS(51),
    [anon_sym_vars_COLONpost_DASHresponse] = ACTIONS(53),
    [anon_sym_assert] = ACTIONS(55),
    [anon_sym_script_COLONpre_DASHrequest] = ACTIONS(57),
    [anon_sym_script_COLONpost_DASHresponse] = ACTIONS(59),
    [anon_sym_tests] = ACTIONS(61),
    [anon_sym_docs] = ACTIONS(63),
    [sym__nl] = ACTIONS(3),
    [sym__s] = ACTIONS(3),
    [sym_comment] = ACTIONS(5),
  },
  [3] = {
    [sym_meta] = STATE(3),
    [sym_http] = STATE(3),
    [sym_http_verb] = STATE(54),
    [sym_query] = STATE(3),
    [sym_params] = STATE(3),
    [sym_params_path] = STATE(31),
    [sym_params_query] = STATE(31),
    [sym_headers] = STATE(3),
    [sym_auths] = STATE(3),
    [sym_auth_awsv4] = STATE(32),
    [sym_auth_basic] = STATE(32),
    [sym_auth_bearer] = STATE(32),
    [sym_auth_digest] = STATE(32),
    [sym_auth_oauth2] = STATE(32),
    [sym_bodies] = STATE(3),
    [sym_body_json] = STATE(33),
    [sym_body_text] = STATE(33),
    [sym_body_xml] = STATE(33),
    [sym_body_sparql] = STATE(33),
    [sym_body_graphql] = STATE(33),
    [sym_body_graphql_vars] = STATE(33),
    [sym_body_form_urlencoded] = STATE(33),
    [sym_body_multipart_form] = STATE(33),
    [sym_body] = STATE(33),
    [sym_vars] = STATE(3),
    [sym_vars_pre_request] = STATE(34),
    [sym_vars_post_response] = STATE(34),
    [sym_assert] = STATE(3),
    [sym_scripts] = STATE(3),
    [sym_script_pre_request] = STATE(35),
    [sym_script_post_response] = STATE(35),
    [sym_tests] = STATE(3),
    [sym_docs] = STATE(3),
    [aux_sym_document_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(67),
    [anon_sym_meta] = ACTIONS(69),
    [anon_sym_get] = ACTIONS(72),
    [anon_sym_post] = ACTIONS(72),
    [anon_sym_put] = ACTIONS(72),
    [anon_sym_delete] = ACTIONS(72),
    [anon_sym_patch] = ACTIONS(72),
    [anon_sym_options] = ACTIONS(72),
    [anon_sym_head] = ACTIONS(75),
    [anon_sym_connect] = ACTIONS(72),
    [anon_sym_trace] = ACTIONS(72),
    [anon_sym_query] = ACTIONS(78),
    [anon_sym_params_COLONpath] = ACTIONS(81),
    [anon_sym_params_COLONquery] = ACTIONS(84),
    [anon_sym_headers] = ACTIONS(87),
    [anon_sym_auth_COLONawsv4] = ACTIONS(90),
    [anon_sym_auth_COLONbasic] = ACTIONS(93),
    [anon_sym_auth_COLONbearer] = ACTIONS(96),
    [anon_sym_auth_COLONdigest] = ACTIONS(99),
    [anon_sym_auth_COLONoauth2] = ACTIONS(102),
    [anon_sym_body_COLONjson] = ACTIONS(105),
    [anon_sym_body_COLONtext] = ACTIONS(108),
    [anon_sym_body_COLONxml] = ACTIONS(111),
    [anon_sym_body_COLONsparql] = ACTIONS(114),
    [anon_sym_body_COLONgraphql] = ACTIONS(117),
    [anon_sym_body_COLONgraphql_COLONvars] = ACTIONS(120),
    [anon_sym_body_COLONform_DASHurlencoded] = ACTIONS(123),
    [anon_sym_body_COLONmultipart_DASHform] = ACTIONS(126),
    [anon_sym_body] = ACTIONS(129),
    [anon_sym_vars_COLONpre_DASHrequest] = ACTIONS(132),
    [anon_sym_vars_COLONpost_DASHresponse] = ACTIONS(135),
    [anon_sym_assert] = ACTIONS(138),
    [anon_sym_script_COLONpre_DASHrequest] = ACTIONS(141),
    [anon_sym_script_COLONpost_DASHresponse] = ACTIONS(144),
    [anon_sym_tests] = ACTIONS(147),
    [anon_sym_docs] = ACTIONS(150),
    [sym__nl] = ACTIONS(3),
    [sym__s] = ACTIONS(3),
    [sym_comment] = ACTIONS(5),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 4,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(3), 2,
      sym__nl,
      sym__s,
    ACTIONS(155), 3,
      anon_sym_head,
      anon_sym_body_COLONgraphql,
      anon_sym_body,
    ACTIONS(153), 33,
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
      anon_sym_params_COLONpath,
      anon_sym_params_COLONquery,
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
  [48] = 4,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(3), 2,
      sym__nl,
      sym__s,
    ACTIONS(159), 3,
      anon_sym_head,
      anon_sym_body_COLONgraphql,
      anon_sym_body,
    ACTIONS(157), 33,
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
      anon_sym_params_COLONpath,
      anon_sym_params_COLONquery,
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
  [96] = 4,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(3), 2,
      sym__nl,
      sym__s,
    ACTIONS(163), 3,
      anon_sym_head,
      anon_sym_body_COLONgraphql,
      anon_sym_body,
    ACTIONS(161), 33,
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
      anon_sym_params_COLONpath,
      anon_sym_params_COLONquery,
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
  [144] = 4,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(3), 2,
      sym__nl,
      sym__s,
    ACTIONS(167), 3,
      anon_sym_head,
      anon_sym_body_COLONgraphql,
      anon_sym_body,
    ACTIONS(165), 33,
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
      anon_sym_params_COLONpath,
      anon_sym_params_COLONquery,
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
  [192] = 4,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(3), 2,
      sym__nl,
      sym__s,
    ACTIONS(171), 3,
      anon_sym_head,
      anon_sym_body_COLONgraphql,
      anon_sym_body,
    ACTIONS(169), 33,
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
      anon_sym_params_COLONpath,
      anon_sym_params_COLONquery,
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
  [240] = 4,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(3), 2,
      sym__nl,
      sym__s,
    ACTIONS(175), 3,
      anon_sym_head,
      anon_sym_body_COLONgraphql,
      anon_sym_body,
    ACTIONS(173), 33,
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
      anon_sym_params_COLONpath,
      anon_sym_params_COLONquery,
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
  [288] = 4,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(3), 2,
      sym__nl,
      sym__s,
    ACTIONS(179), 3,
      anon_sym_head,
      anon_sym_body_COLONgraphql,
      anon_sym_body,
    ACTIONS(177), 33,
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
      anon_sym_params_COLONpath,
      anon_sym_params_COLONquery,
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
  [336] = 4,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(3), 2,
      sym__nl,
      sym__s,
    ACTIONS(183), 3,
      anon_sym_head,
      anon_sym_body_COLONgraphql,
      anon_sym_body,
    ACTIONS(181), 33,
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
      anon_sym_params_COLONpath,
      anon_sym_params_COLONquery,
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
  [384] = 4,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(3), 2,
      sym__nl,
      sym__s,
    ACTIONS(187), 3,
      anon_sym_head,
      anon_sym_body_COLONgraphql,
      anon_sym_body,
    ACTIONS(185), 33,
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
      anon_sym_params_COLONpath,
      anon_sym_params_COLONquery,
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
  [432] = 4,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(3), 2,
      sym__nl,
      sym__s,
    ACTIONS(191), 3,
      anon_sym_head,
      anon_sym_body_COLONgraphql,
      anon_sym_body,
    ACTIONS(189), 33,
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
      anon_sym_params_COLONpath,
      anon_sym_params_COLONquery,
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
  [480] = 4,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(3), 2,
      sym__nl,
      sym__s,
    ACTIONS(195), 3,
      anon_sym_head,
      anon_sym_body_COLONgraphql,
      anon_sym_body,
    ACTIONS(193), 33,
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
      anon_sym_params_COLONpath,
      anon_sym_params_COLONquery,
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
  [528] = 4,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(3), 2,
      sym__nl,
      sym__s,
    ACTIONS(199), 3,
      anon_sym_head,
      anon_sym_body_COLONgraphql,
      anon_sym_body,
    ACTIONS(197), 33,
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
      anon_sym_params_COLONpath,
      anon_sym_params_COLONquery,
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
  [576] = 4,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(3), 2,
      sym__nl,
      sym__s,
    ACTIONS(203), 3,
      anon_sym_head,
      anon_sym_body_COLONgraphql,
      anon_sym_body,
    ACTIONS(201), 33,
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
      anon_sym_params_COLONpath,
      anon_sym_params_COLONquery,
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
  [624] = 4,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(3), 2,
      sym__nl,
      sym__s,
    ACTIONS(207), 3,
      anon_sym_head,
      anon_sym_body_COLONgraphql,
      anon_sym_body,
    ACTIONS(205), 33,
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
      anon_sym_params_COLONpath,
      anon_sym_params_COLONquery,
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
  [672] = 4,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(3), 2,
      sym__nl,
      sym__s,
    ACTIONS(211), 3,
      anon_sym_head,
      anon_sym_body_COLONgraphql,
      anon_sym_body,
    ACTIONS(209), 33,
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
      anon_sym_params_COLONpath,
      anon_sym_params_COLONquery,
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
  [720] = 4,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(3), 2,
      sym__nl,
      sym__s,
    ACTIONS(215), 3,
      anon_sym_head,
      anon_sym_body_COLONgraphql,
      anon_sym_body,
    ACTIONS(213), 33,
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
      anon_sym_params_COLONpath,
      anon_sym_params_COLONquery,
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
  [768] = 4,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(3), 2,
      sym__nl,
      sym__s,
    ACTIONS(219), 3,
      anon_sym_head,
      anon_sym_body_COLONgraphql,
      anon_sym_body,
    ACTIONS(217), 33,
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
      anon_sym_params_COLONpath,
      anon_sym_params_COLONquery,
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
  [816] = 4,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(3), 2,
      sym__nl,
      sym__s,
    ACTIONS(223), 3,
      anon_sym_head,
      anon_sym_body_COLONgraphql,
      anon_sym_body,
    ACTIONS(221), 33,
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
      anon_sym_params_COLONpath,
      anon_sym_params_COLONquery,
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
  [864] = 4,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(3), 2,
      sym__nl,
      sym__s,
    ACTIONS(227), 3,
      anon_sym_head,
      anon_sym_body_COLONgraphql,
      anon_sym_body,
    ACTIONS(225), 33,
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
      anon_sym_params_COLONpath,
      anon_sym_params_COLONquery,
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
  [912] = 4,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(3), 2,
      sym__nl,
      sym__s,
    ACTIONS(231), 3,
      anon_sym_head,
      anon_sym_body_COLONgraphql,
      anon_sym_body,
    ACTIONS(229), 33,
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
      anon_sym_params_COLONpath,
      anon_sym_params_COLONquery,
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
  [960] = 4,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(3), 2,
      sym__nl,
      sym__s,
    ACTIONS(235), 3,
      anon_sym_head,
      anon_sym_body_COLONgraphql,
      anon_sym_body,
    ACTIONS(233), 33,
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
      anon_sym_params_COLONpath,
      anon_sym_params_COLONquery,
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
  [1008] = 4,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(3), 2,
      sym__nl,
      sym__s,
    ACTIONS(239), 3,
      anon_sym_head,
      anon_sym_body_COLONgraphql,
      anon_sym_body,
    ACTIONS(237), 33,
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
      anon_sym_params_COLONpath,
      anon_sym_params_COLONquery,
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
  [1056] = 4,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(3), 2,
      sym__nl,
      sym__s,
    ACTIONS(243), 3,
      anon_sym_head,
      anon_sym_body_COLONgraphql,
      anon_sym_body,
    ACTIONS(241), 33,
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
      anon_sym_params_COLONpath,
      anon_sym_params_COLONquery,
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
  [1104] = 4,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(3), 2,
      sym__nl,
      sym__s,
    ACTIONS(247), 3,
      anon_sym_head,
      anon_sym_body_COLONgraphql,
      anon_sym_body,
    ACTIONS(245), 33,
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
      anon_sym_params_COLONpath,
      anon_sym_params_COLONquery,
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
  [1152] = 4,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(3), 2,
      sym__nl,
      sym__s,
    ACTIONS(251), 3,
      anon_sym_head,
      anon_sym_body_COLONgraphql,
      anon_sym_body,
    ACTIONS(249), 33,
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
      anon_sym_params_COLONpath,
      anon_sym_params_COLONquery,
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
  [1200] = 4,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(3), 2,
      sym__nl,
      sym__s,
    ACTIONS(255), 3,
      anon_sym_head,
      anon_sym_body_COLONgraphql,
      anon_sym_body,
    ACTIONS(253), 33,
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
      anon_sym_params_COLONpath,
      anon_sym_params_COLONquery,
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
  [1248] = 4,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(3), 2,
      sym__nl,
      sym__s,
    ACTIONS(259), 3,
      anon_sym_head,
      anon_sym_body_COLONgraphql,
      anon_sym_body,
    ACTIONS(257), 33,
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
      anon_sym_params_COLONpath,
      anon_sym_params_COLONquery,
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
  [1296] = 4,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(3), 2,
      sym__nl,
      sym__s,
    ACTIONS(263), 3,
      anon_sym_head,
      anon_sym_body_COLONgraphql,
      anon_sym_body,
    ACTIONS(261), 33,
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
      anon_sym_params_COLONpath,
      anon_sym_params_COLONquery,
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
  [1344] = 4,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(3), 2,
      sym__nl,
      sym__s,
    ACTIONS(267), 3,
      anon_sym_head,
      anon_sym_body_COLONgraphql,
      anon_sym_body,
    ACTIONS(265), 33,
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
      anon_sym_params_COLONpath,
      anon_sym_params_COLONquery,
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
  [1392] = 4,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(3), 2,
      sym__nl,
      sym__s,
    ACTIONS(271), 3,
      anon_sym_head,
      anon_sym_body_COLONgraphql,
      anon_sym_body,
    ACTIONS(269), 33,
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
      anon_sym_params_COLONpath,
      anon_sym_params_COLONquery,
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
  [1440] = 4,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(3), 2,
      sym__nl,
      sym__s,
    ACTIONS(275), 3,
      anon_sym_head,
      anon_sym_body_COLONgraphql,
      anon_sym_body,
    ACTIONS(273), 33,
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
      anon_sym_params_COLONpath,
      anon_sym_params_COLONquery,
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
  [1488] = 4,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(3), 2,
      sym__nl,
      sym__s,
    ACTIONS(279), 3,
      anon_sym_head,
      anon_sym_body_COLONgraphql,
      anon_sym_body,
    ACTIONS(277), 33,
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
      anon_sym_params_COLONpath,
      anon_sym_params_COLONquery,
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
  [1536] = 4,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(3), 2,
      sym__nl,
      sym__s,
    ACTIONS(283), 3,
      anon_sym_head,
      anon_sym_body_COLONgraphql,
      anon_sym_body,
    ACTIONS(281), 33,
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
      anon_sym_params_COLONpath,
      anon_sym_params_COLONquery,
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
  [1584] = 4,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(3), 2,
      sym__nl,
      sym__s,
    ACTIONS(287), 3,
      anon_sym_head,
      anon_sym_body_COLONgraphql,
      anon_sym_body,
    ACTIONS(285), 33,
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
      anon_sym_params_COLONpath,
      anon_sym_params_COLONquery,
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
  [1632] = 4,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(3), 2,
      sym__nl,
      sym__s,
    ACTIONS(291), 3,
      anon_sym_head,
      anon_sym_body_COLONgraphql,
      anon_sym_body,
    ACTIONS(289), 33,
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
      anon_sym_params_COLONpath,
      anon_sym_params_COLONquery,
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
    ACTIONS(293), 1,
      anon_sym_LBRACE,
    ACTIONS(295), 1,
      anon_sym_RBRACE,
    ACTIONS(297), 1,
      sym__any,
    STATE(42), 2,
      sym__text,
      aux_sym_text_repeat1,
    ACTIONS(3), 3,
      sym__nl,
      sym__s,
      sym_comment,
  [1699] = 5,
    ACTIONS(293), 1,
      anon_sym_LBRACE,
    ACTIONS(299), 1,
      anon_sym_RBRACE,
    ACTIONS(301), 1,
      sym__any,
    STATE(43), 2,
      sym__text,
      aux_sym_text_repeat1,
    ACTIONS(3), 3,
      sym__nl,
      sym__s,
      sym_comment,
  [1718] = 5,
    ACTIONS(293), 1,
      anon_sym_LBRACE,
    ACTIONS(303), 1,
      sym__any,
    STATE(78), 1,
      sym_text,
    STATE(40), 2,
      sym__text,
      aux_sym_text_repeat1,
    ACTIONS(3), 3,
      sym__nl,
      sym__s,
      sym_comment,
  [1737] = 5,
    ACTIONS(293), 1,
      anon_sym_LBRACE,
    ACTIONS(301), 1,
      sym__any,
    ACTIONS(305), 1,
      anon_sym_RBRACE,
    STATE(43), 2,
      sym__text,
      aux_sym_text_repeat1,
    ACTIONS(3), 3,
      sym__nl,
      sym__s,
      sym_comment,
  [1756] = 5,
    ACTIONS(307), 1,
      anon_sym_LBRACE,
    ACTIONS(310), 1,
      anon_sym_RBRACE,
    ACTIONS(312), 1,
      sym__any,
    STATE(43), 2,
      sym__text,
      aux_sym_text_repeat1,
    ACTIONS(3), 3,
      sym__nl,
      sym__s,
      sym_comment,
  [1775] = 4,
    ACTIONS(315), 1,
      anon_sym_RBRACE,
    ACTIONS(317), 1,
      sym_key,
    STATE(45), 2,
      sym_pair,
      aux_sym_dictionary_repeat1,
    ACTIONS(3), 3,
      sym__nl,
      sym__s,
      sym_comment,
  [1791] = 4,
    ACTIONS(317), 1,
      sym_key,
    ACTIONS(319), 1,
      anon_sym_RBRACE,
    STATE(46), 2,
      sym_pair,
      aux_sym_dictionary_repeat1,
    ACTIONS(3), 3,
      sym__nl,
      sym__s,
      sym_comment,
  [1807] = 4,
    ACTIONS(321), 1,
      anon_sym_RBRACE,
    ACTIONS(323), 1,
      sym_key,
    STATE(46), 2,
      sym_pair,
      aux_sym_dictionary_repeat1,
    ACTIONS(3), 3,
      sym__nl,
      sym__s,
      sym_comment,
  [1823] = 3,
    ACTIONS(328), 1,
      sym__any,
    ACTIONS(326), 2,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(3), 3,
      sym__nl,
      sym__s,
      sym_comment,
  [1836] = 3,
    ACTIONS(332), 1,
      sym__any,
    ACTIONS(330), 2,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(3), 3,
      sym__nl,
      sym__s,
      sym_comment,
  [1849] = 4,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(334), 1,
      anon_sym_LBRACE,
    STATE(4), 1,
      sym_dictionary,
    ACTIONS(3), 2,
      sym__nl,
      sym__s,
  [1863] = 4,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(336), 1,
      anon_sym_LBRACE,
    STATE(38), 1,
      sym_text_block,
    ACTIONS(3), 2,
      sym__nl,
      sym__s,
  [1877] = 4,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(334), 1,
      anon_sym_LBRACE,
    STATE(15), 1,
      sym_dictionary,
    ACTIONS(3), 2,
      sym__nl,
      sym__s,
  [1891] = 4,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(336), 1,
      anon_sym_LBRACE,
    STATE(29), 1,
      sym_text_block,
    ACTIONS(3), 2,
      sym__nl,
      sym__s,
  [1905] = 4,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(334), 1,
      anon_sym_LBRACE,
    STATE(5), 1,
      sym_dictionary,
    ACTIONS(3), 2,
      sym__nl,
      sym__s,
  [1919] = 4,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(334), 1,
      anon_sym_LBRACE,
    STATE(19), 1,
      sym_dictionary,
    ACTIONS(3), 2,
      sym__nl,
      sym__s,
  [1933] = 4,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(334), 1,
      anon_sym_LBRACE,
    STATE(18), 1,
      sym_dictionary,
    ACTIONS(3), 2,
      sym__nl,
      sym__s,
  [1947] = 4,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(336), 1,
      anon_sym_LBRACE,
    STATE(20), 1,
      sym_text_block,
    ACTIONS(3), 2,
      sym__nl,
      sym__s,
  [1961] = 4,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(336), 1,
      anon_sym_LBRACE,
    STATE(21), 1,
      sym_text_block,
    ACTIONS(3), 2,
      sym__nl,
      sym__s,
  [1975] = 4,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(336), 1,
      anon_sym_LBRACE,
    STATE(22), 1,
      sym_text_block,
    ACTIONS(3), 2,
      sym__nl,
      sym__s,
  [1989] = 4,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(336), 1,
      anon_sym_LBRACE,
    STATE(23), 1,
      sym_text_block,
    ACTIONS(3), 2,
      sym__nl,
      sym__s,
  [2003] = 4,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(334), 1,
      anon_sym_LBRACE,
    STATE(37), 1,
      sym_dictionary,
    ACTIONS(3), 2,
      sym__nl,
      sym__s,
  [2017] = 4,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(334), 1,
      anon_sym_LBRACE,
    STATE(16), 1,
      sym_dictionary,
    ACTIONS(3), 2,
      sym__nl,
      sym__s,
  [2031] = 4,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(334), 1,
      anon_sym_LBRACE,
    STATE(24), 1,
      sym_dictionary,
    ACTIONS(3), 2,
      sym__nl,
      sym__s,
  [2045] = 4,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(334), 1,
      anon_sym_LBRACE,
    STATE(25), 1,
      sym_dictionary,
    ACTIONS(3), 2,
      sym__nl,
      sym__s,
  [2059] = 4,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(336), 1,
      anon_sym_LBRACE,
    STATE(26), 1,
      sym_text_block,
    ACTIONS(3), 2,
      sym__nl,
      sym__s,
  [2073] = 4,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(334), 1,
      anon_sym_LBRACE,
    STATE(27), 1,
      sym_dictionary,
    ACTIONS(3), 2,
      sym__nl,
      sym__s,
  [2087] = 3,
    ACTIONS(338), 1,
      anon_sym_RBRACE,
    ACTIONS(340), 1,
      sym_key,
    ACTIONS(3), 3,
      sym__nl,
      sym__s,
      sym_comment,
  [2099] = 4,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(334), 1,
      anon_sym_LBRACE,
    STATE(28), 1,
      sym_dictionary,
    ACTIONS(3), 2,
      sym__nl,
      sym__s,
  [2113] = 4,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(334), 1,
      anon_sym_LBRACE,
    STATE(7), 1,
      sym_dictionary,
    ACTIONS(3), 2,
      sym__nl,
      sym__s,
  [2127] = 4,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(336), 1,
      anon_sym_LBRACE,
    STATE(30), 1,
      sym_text_block,
    ACTIONS(3), 2,
      sym__nl,
      sym__s,
  [2141] = 4,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(336), 1,
      anon_sym_LBRACE,
    STATE(36), 1,
      sym_text_block,
    ACTIONS(3), 2,
      sym__nl,
      sym__s,
  [2155] = 4,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(334), 1,
      anon_sym_LBRACE,
    STATE(10), 1,
      sym_dictionary,
    ACTIONS(3), 2,
      sym__nl,
      sym__s,
  [2169] = 4,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(336), 1,
      anon_sym_LBRACE,
    STATE(14), 1,
      sym_text_block,
    ACTIONS(3), 2,
      sym__nl,
      sym__s,
  [2183] = 4,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(334), 1,
      anon_sym_LBRACE,
    STATE(11), 1,
      sym_dictionary,
    ACTIONS(3), 2,
      sym__nl,
      sym__s,
  [2197] = 4,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(334), 1,
      anon_sym_LBRACE,
    STATE(12), 1,
      sym_dictionary,
    ACTIONS(3), 2,
      sym__nl,
      sym__s,
  [2211] = 4,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(336), 1,
      anon_sym_LBRACE,
    STATE(6), 1,
      sym_text_block,
    ACTIONS(3), 2,
      sym__nl,
      sym__s,
  [2225] = 4,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(334), 1,
      anon_sym_LBRACE,
    STATE(9), 1,
      sym_dictionary,
    ACTIONS(3), 2,
      sym__nl,
      sym__s,
  [2239] = 2,
    ACTIONS(342), 1,
      sym_value,
    ACTIONS(3), 3,
      sym__nl,
      sym__s,
      sym_comment,
  [2248] = 3,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(344), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym__nl,
      sym__s,
  [2259] = 3,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(346), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__nl,
      sym__s,
  [2270] = 3,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(348), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym__nl,
      sym__s,
  [2281] = 3,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(350), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym__nl,
      sym__s,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 48,
  [SMALL_STATE(6)] = 96,
  [SMALL_STATE(7)] = 144,
  [SMALL_STATE(8)] = 192,
  [SMALL_STATE(9)] = 240,
  [SMALL_STATE(10)] = 288,
  [SMALL_STATE(11)] = 336,
  [SMALL_STATE(12)] = 384,
  [SMALL_STATE(13)] = 432,
  [SMALL_STATE(14)] = 480,
  [SMALL_STATE(15)] = 528,
  [SMALL_STATE(16)] = 576,
  [SMALL_STATE(17)] = 624,
  [SMALL_STATE(18)] = 672,
  [SMALL_STATE(19)] = 720,
  [SMALL_STATE(20)] = 768,
  [SMALL_STATE(21)] = 816,
  [SMALL_STATE(22)] = 864,
  [SMALL_STATE(23)] = 912,
  [SMALL_STATE(24)] = 960,
  [SMALL_STATE(25)] = 1008,
  [SMALL_STATE(26)] = 1056,
  [SMALL_STATE(27)] = 1104,
  [SMALL_STATE(28)] = 1152,
  [SMALL_STATE(29)] = 1200,
  [SMALL_STATE(30)] = 1248,
  [SMALL_STATE(31)] = 1296,
  [SMALL_STATE(32)] = 1344,
  [SMALL_STATE(33)] = 1392,
  [SMALL_STATE(34)] = 1440,
  [SMALL_STATE(35)] = 1488,
  [SMALL_STATE(36)] = 1536,
  [SMALL_STATE(37)] = 1584,
  [SMALL_STATE(38)] = 1632,
  [SMALL_STATE(39)] = 1680,
  [SMALL_STATE(40)] = 1699,
  [SMALL_STATE(41)] = 1718,
  [SMALL_STATE(42)] = 1737,
  [SMALL_STATE(43)] = 1756,
  [SMALL_STATE(44)] = 1775,
  [SMALL_STATE(45)] = 1791,
  [SMALL_STATE(46)] = 1807,
  [SMALL_STATE(47)] = 1823,
  [SMALL_STATE(48)] = 1836,
  [SMALL_STATE(49)] = 1849,
  [SMALL_STATE(50)] = 1863,
  [SMALL_STATE(51)] = 1877,
  [SMALL_STATE(52)] = 1891,
  [SMALL_STATE(53)] = 1905,
  [SMALL_STATE(54)] = 1919,
  [SMALL_STATE(55)] = 1933,
  [SMALL_STATE(56)] = 1947,
  [SMALL_STATE(57)] = 1961,
  [SMALL_STATE(58)] = 1975,
  [SMALL_STATE(59)] = 1989,
  [SMALL_STATE(60)] = 2003,
  [SMALL_STATE(61)] = 2017,
  [SMALL_STATE(62)] = 2031,
  [SMALL_STATE(63)] = 2045,
  [SMALL_STATE(64)] = 2059,
  [SMALL_STATE(65)] = 2073,
  [SMALL_STATE(66)] = 2087,
  [SMALL_STATE(67)] = 2099,
  [SMALL_STATE(68)] = 2113,
  [SMALL_STATE(69)] = 2127,
  [SMALL_STATE(70)] = 2141,
  [SMALL_STATE(71)] = 2155,
  [SMALL_STATE(72)] = 2169,
  [SMALL_STATE(73)] = 2183,
  [SMALL_STATE(74)] = 2197,
  [SMALL_STATE(75)] = 2211,
  [SMALL_STATE(76)] = 2225,
  [SMALL_STATE(77)] = 2239,
  [SMALL_STATE(78)] = 2248,
  [SMALL_STATE(79)] = 2259,
  [SMALL_STATE(80)] = 2270,
  [SMALL_STATE(81)] = 2281,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 0, 0, 0),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1, 0, 0),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0),
  [69] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(53),
  [72] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(80),
  [75] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(80),
  [78] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(60),
  [81] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(61),
  [84] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(51),
  [87] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(55),
  [90] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(68),
  [93] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(71),
  [96] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(74),
  [99] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(73),
  [102] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(76),
  [105] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(75),
  [108] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(50),
  [111] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(72),
  [114] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(70),
  [117] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(69),
  [120] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(52),
  [123] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(67),
  [126] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(65),
  [129] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(64),
  [132] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(63),
  [135] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(62),
  [138] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(49),
  [141] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(59),
  [144] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(58),
  [147] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(57),
  [150] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(56),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assert, 2, 0, 0),
  [155] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assert, 2, 0, 0),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_meta, 2, 0, 0),
  [159] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_meta, 2, 0, 0),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body_json, 2, 0, 0),
  [163] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_body_json, 2, 0, 0),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_auth_awsv4, 2, 0, 0),
  [167] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_auth_awsv4, 2, 0, 0),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text_block, 3, 0, 0),
  [171] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_text_block, 3, 0, 0),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_auth_oauth2, 2, 0, 0),
  [175] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_auth_oauth2, 2, 0, 0),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_auth_basic, 2, 0, 0),
  [179] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_auth_basic, 2, 0, 0),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_auth_digest, 2, 0, 0),
  [183] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_auth_digest, 2, 0, 0),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_auth_bearer, 2, 0, 0),
  [187] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_auth_bearer, 2, 0, 0),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dictionary, 3, 0, 0),
  [191] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dictionary, 3, 0, 0),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body_xml, 2, 0, 0),
  [195] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_body_xml, 2, 0, 0),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_params_query, 2, 0, 0),
  [199] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_params_query, 2, 0, 0),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_params_path, 2, 0, 0),
  [203] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_params_path, 2, 0, 0),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dictionary, 2, 0, 0),
  [207] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dictionary, 2, 0, 0),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_headers, 2, 0, 0),
  [211] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_headers, 2, 0, 0),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_http, 2, 0, 0),
  [215] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_http, 2, 0, 0),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_docs, 2, 0, 0),
  [219] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_docs, 2, 0, 0),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tests, 2, 0, 0),
  [223] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tests, 2, 0, 0),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script_post_response, 2, 0, 0),
  [227] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_script_post_response, 2, 0, 0),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script_pre_request, 2, 0, 0),
  [231] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_script_pre_request, 2, 0, 0),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vars_post_response, 2, 0, 0),
  [235] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_vars_post_response, 2, 0, 0),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vars_pre_request, 2, 0, 0),
  [239] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_vars_pre_request, 2, 0, 0),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body, 2, 0, 0),
  [243] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_body, 2, 0, 0),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body_multipart_form, 2, 0, 0),
  [247] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_body_multipart_form, 2, 0, 0),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body_form_urlencoded, 2, 0, 0),
  [251] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_body_form_urlencoded, 2, 0, 0),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body_graphql_vars, 2, 0, 0),
  [255] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_body_graphql_vars, 2, 0, 0),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body_graphql, 2, 0, 0),
  [259] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_body_graphql, 2, 0, 0),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_params, 1, 0, 0),
  [263] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_params, 1, 0, 0),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_auths, 1, 0, 0),
  [267] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_auths, 1, 0, 0),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bodies, 1, 0, 0),
  [271] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bodies, 1, 0, 0),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vars, 1, 0, 0),
  [275] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_vars, 1, 0, 0),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scripts, 1, 0, 0),
  [279] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scripts, 1, 0, 0),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body_sparql, 2, 0, 0),
  [283] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_body_sparql, 2, 0, 0),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query, 2, 0, 0),
  [287] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_query, 2, 0, 0),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body_text, 2, 0, 0),
  [291] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_body_text, 2, 0, 0),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [297] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text, 1, 0, 0),
  [301] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [303] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [307] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_text_repeat1, 2, 0, 0), SHIFT_REPEAT(39),
  [310] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_text_repeat1, 2, 0, 0),
  [312] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_text_repeat1, 2, 0, 0), SHIFT_REPEAT(43),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [317] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_dictionary_repeat1, 2, 0, 0),
  [323] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_dictionary_repeat1, 2, 0, 0), SHIFT_REPEAT(79),
  [326] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__text, 2, 0, 0),
  [328] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__text, 2, 0, 0),
  [330] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__text, 3, 0, 0),
  [332] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__text, 3, 0, 0),
  [334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [338] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pair, 3, 0, 0),
  [340] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pair, 3, 0, 0),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [348] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_http_verb, 1, 0, 0),
  [350] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
