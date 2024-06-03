#include "parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 77
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 82
#define ALIAS_COUNT 0
#define TOKEN_COUNT 43
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
  sym__s = 41,
  sym_comment = 42,
  sym_document = 43,
  sym_meta = 44,
  sym_http = 45,
  sym_http_verb = 46,
  sym_query = 47,
  sym_headers = 48,
  sym_auths = 49,
  sym_auth_awsv4 = 50,
  sym_auth_basic = 51,
  sym_auth_bearer = 52,
  sym_auth_digest = 53,
  sym_auth_oauth2 = 54,
  sym_bodies = 55,
  sym_body_json = 56,
  sym_body_text = 57,
  sym_body_xml = 58,
  sym_body_sparql = 59,
  sym_body_graphql = 60,
  sym_body_graphql_vars = 61,
  sym_body_form_urlencoded = 62,
  sym_body_multipart_form = 63,
  sym_body = 64,
  sym_vars = 65,
  sym_vars_pre_request = 66,
  sym_vars_post_response = 67,
  sym_assert = 68,
  sym_scripts = 69,
  sym_script_pre_request = 70,
  sym_script_post_response = 71,
  sym_tests = 72,
  sym_docs = 73,
  sym_dictionary = 74,
  sym_pair = 75,
  sym_text_block = 76,
  sym_text = 77,
  sym__text = 78,
  aux_sym_document_repeat1 = 79,
  aux_sym_dictionary_repeat1 = 80,
  aux_sym_text_repeat1 = 81,
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(190);
      ADVANCE_MAP(
        '\n', 234,
        '\r', 235,
        '#', 237,
        ':', 226,
        'a', 135,
        'b', 93,
        'c', 94,
        'd', 39,
        'g', 47,
        'h', 46,
        'm', 49,
        'o', 105,
        'p', 22,
        'q', 179,
        's', 28,
        't', 58,
        'v', 18,
        '{', 224,
        '}', 225,
        '\t', 236,
        0x0b, 236,
        '\f', 236,
        ' ', 236,
      );
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(234);
      if (lookahead == '\r') ADVANCE(235);
      if (lookahead == '#') ADVANCE(227);
      if (lookahead == '}') ADVANCE(225);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(236);
      if (lookahead != 0 &&
          lookahead != ':') ADVANCE(228);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(234);
      if (lookahead == '\r') ADVANCE(235);
      if (lookahead == '#') ADVANCE(229);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(236);
      if (lookahead != 0) ADVANCE(229);
      END_STATE();
    case 3:
      ADVANCE_MAP(
        '\n', 232,
        '\r', 230,
        '#', 231,
        '{', 224,
        '}', 225,
        '\t', 232,
        0x0b, 232,
        '\f', 232,
        ' ', 232,
      );
      if (lookahead != 0) ADVANCE(233);
      END_STATE();
    case 4:
      if (lookahead == '-') ADVANCE(66);
      END_STATE();
    case 5:
      if (lookahead == '-') ADVANCE(180);
      END_STATE();
    case 6:
      if (lookahead == '-') ADVANCE(127);
      END_STATE();
    case 7:
      if (lookahead == '-') ADVANCE(129);
      END_STATE();
    case 8:
      if (lookahead == '-') ADVANCE(134);
      END_STATE();
    case 9:
      if (lookahead == '-') ADVANCE(133);
      END_STATE();
    case 10:
      if (lookahead == '2') ADVANCE(207);
      END_STATE();
    case 11:
      if (lookahead == '4') ADVANCE(203);
      END_STATE();
    case 12:
      if (lookahead == ':') ADVANCE(16);
      END_STATE();
    case 13:
      if (lookahead == ':') ADVANCE(104);
      END_STATE();
    case 14:
      if (lookahead == ':') ADVANCE(112);
      END_STATE();
    case 15:
      if (lookahead == 'a') ADVANCE(191);
      END_STATE();
    case 16:
      if (lookahead == 'a') ADVANCE(186);
      if (lookahead == 'b') ADVANCE(25);
      if (lookahead == 'd') ADVANCE(72);
      if (lookahead == 'o') ADVANCE(19);
      END_STATE();
    case 17:
      if (lookahead == 'a') ADVANCE(36);
      END_STATE();
    case 18:
      if (lookahead == 'a') ADVANCE(123);
      END_STATE();
    case 19:
      if (lookahead == 'a') ADVANCE(181);
      END_STATE();
    case 20:
      if (lookahead == 'a') ADVANCE(106);
      END_STATE();
    case 21:
      if (lookahead == 'a') ADVANCE(32);
      END_STATE();
    case 22:
      if (lookahead == 'a') ADVANCE(168);
      if (lookahead == 'o') ADVANCE(145);
      if (lookahead == 'u') ADVANCE(160);
      END_STATE();
    case 23:
      if (lookahead == 'a') ADVANCE(132);
      END_STATE();
    case 24:
      if (lookahead == 'a') ADVANCE(117);
      END_STATE();
    case 25:
      if (lookahead == 'a') ADVANCE(143);
      if (lookahead == 'e') ADVANCE(23);
      END_STATE();
    case 26:
      if (lookahead == 'a') ADVANCE(131);
      END_STATE();
    case 27:
      if (lookahead == 'a') ADVANCE(130);
      END_STATE();
    case 28:
      if (lookahead == 'c') ADVANCE(120);
      END_STATE();
    case 29:
      if (lookahead == 'c') ADVANCE(204);
      END_STATE();
    case 30:
      if (lookahead == 'c') ADVANCE(69);
      END_STATE();
    case 31:
      if (lookahead == 'c') ADVANCE(136);
      END_STATE();
    case 32:
      if (lookahead == 'c') ADVANCE(40);
      END_STATE();
    case 33:
      if (lookahead == 'c') ADVANCE(163);
      END_STATE();
    case 34:
      if (lookahead == 'c') ADVANCE(95);
      END_STATE();
    case 35:
      if (lookahead == 'd') ADVANCE(188);
      END_STATE();
    case 36:
      if (lookahead == 'd') ADVANCE(198);
      END_STATE();
    case 37:
      if (lookahead == 'd') ADVANCE(214);
      END_STATE();
    case 38:
      if (lookahead == 'd') ADVANCE(51);
      END_STATE();
    case 39:
      if (lookahead == 'e') ADVANCE(82);
      if (lookahead == 'o') ADVANCE(31);
      END_STATE();
    case 40:
      if (lookahead == 'e') ADVANCE(200);
      END_STATE();
    case 41:
      if (lookahead == 'e') ADVANCE(195);
      END_STATE();
    case 42:
      if (lookahead == 'e') ADVANCE(187);
      END_STATE();
    case 43:
      if (lookahead == 'e') ADVANCE(6);
      END_STATE();
    case 44:
      if (lookahead == 'e') ADVANCE(218);
      END_STATE();
    case 45:
      if (lookahead == 'e') ADVANCE(221);
      END_STATE();
    case 46:
      if (lookahead == 'e') ADVANCE(17);
      END_STATE();
    case 47:
      if (lookahead == 'e') ADVANCE(158);
      END_STATE();
    case 48:
      if (lookahead == 'e') ADVANCE(115);
      END_STATE();
    case 49:
      if (lookahead == 'e') ADVANCE(171);
      END_STATE();
    case 50:
      if (lookahead == 'e') ADVANCE(119);
      END_STATE();
    case 51:
      if (lookahead == 'e') ADVANCE(37);
      END_STATE();
    case 52:
      if (lookahead == 'e') ADVANCE(128);
      END_STATE();
    case 53:
      if (lookahead == 'e') ADVANCE(33);
      END_STATE();
    case 54:
      if (lookahead == 'e') ADVANCE(89);
      END_STATE();
    case 55:
      if (lookahead == 'e') ADVANCE(174);
      END_STATE();
    case 56:
      if (lookahead == 'e') ADVANCE(118);
      END_STATE();
    case 57:
      if (lookahead == 'e') ADVANCE(144);
      END_STATE();
    case 58:
      if (lookahead == 'e') ADVANCE(146);
      if (lookahead == 'r') ADVANCE(21);
      END_STATE();
    case 59:
      if (lookahead == 'e') ADVANCE(150);
      END_STATE();
    case 60:
      if (lookahead == 'e') ADVANCE(151);
      END_STATE();
    case 61:
      if (lookahead == 'e') ADVANCE(152);
      END_STATE();
    case 62:
      if (lookahead == 'e') ADVANCE(155);
      END_STATE();
    case 63:
      if (lookahead == 'e') ADVANCE(116);
      END_STATE();
    case 64:
      if (lookahead == 'e') ADVANCE(9);
      END_STATE();
    case 65:
      if (lookahead == 'f') ADVANCE(99);
      if (lookahead == 'g') ADVANCE(124);
      if (lookahead == 'j') ADVANCE(153);
      if (lookahead == 'm') ADVANCE(178);
      if (lookahead == 's') ADVANCE(108);
      if (lookahead == 't') ADVANCE(42);
      if (lookahead == 'x') ADVANCE(85);
      END_STATE();
    case 66:
      if (lookahead == 'f') ADVANCE(100);
      END_STATE();
    case 67:
      if (lookahead == 'g') ADVANCE(59);
      END_STATE();
    case 68:
      if (lookahead == 'h') ADVANCE(12);
      END_STATE();
    case 69:
      if (lookahead == 'h') ADVANCE(196);
      END_STATE();
    case 70:
      if (lookahead == 'h') ADVANCE(10);
      END_STATE();
    case 71:
      if (lookahead == 'h') ADVANCE(114);
      END_STATE();
    case 72:
      if (lookahead == 'i') ADVANCE(67);
      END_STATE();
    case 73:
      if (lookahead == 'i') ADVANCE(96);
      END_STATE();
    case 74:
      if (lookahead == 'i') ADVANCE(29);
      END_STATE();
    case 75:
      if (lookahead == 'i') ADVANCE(107);
      END_STATE();
    case 76:
      if (lookahead == 'i') ADVANCE(110);
      END_STATE();
    case 77:
      if (lookahead == 'l') ADVANCE(210);
      END_STATE();
    case 78:
      if (lookahead == 'l') ADVANCE(211);
      END_STATE();
    case 79:
      if (lookahead == 'l') ADVANCE(212);
      END_STATE();
    case 80:
      if (lookahead == 'l') ADVANCE(54);
      END_STATE();
    case 81:
      if (lookahead == 'l') ADVANCE(173);
      END_STATE();
    case 82:
      if (lookahead == 'l') ADVANCE(55);
      END_STATE();
    case 83:
      if (lookahead == 'm') ADVANCE(215);
      END_STATE();
    case 84:
      if (lookahead == 'm') ADVANCE(5);
      END_STATE();
    case 85:
      if (lookahead == 'm') ADVANCE(77);
      END_STATE();
    case 86:
      if (lookahead == 'n') ADVANCE(208);
      END_STATE();
    case 87:
      if (lookahead == 'n') ADVANCE(88);
      END_STATE();
    case 88:
      if (lookahead == 'n') ADVANCE(53);
      END_STATE();
    case 89:
      if (lookahead == 'n') ADVANCE(34);
      END_STATE();
    case 90:
      if (lookahead == 'n') ADVANCE(139);
      END_STATE();
    case 91:
      if (lookahead == 'n') ADVANCE(147);
      END_STATE();
    case 92:
      if (lookahead == 'n') ADVANCE(148);
      END_STATE();
    case 93:
      if (lookahead == 'o') ADVANCE(35);
      END_STATE();
    case 94:
      if (lookahead == 'o') ADVANCE(87);
      END_STATE();
    case 95:
      if (lookahead == 'o') ADVANCE(38);
      END_STATE();
    case 96:
      if (lookahead == 'o') ADVANCE(90);
      END_STATE();
    case 97:
      if (lookahead == 'o') ADVANCE(86);
      END_STATE();
    case 98:
      if (lookahead == 'o') ADVANCE(91);
      END_STATE();
    case 99:
      if (lookahead == 'o') ADVANCE(121);
      END_STATE();
    case 100:
      if (lookahead == 'o') ADVANCE(122);
      END_STATE();
    case 101:
      if (lookahead == 'o') ADVANCE(149);
      if (lookahead == 'r') ADVANCE(43);
      END_STATE();
    case 102:
      if (lookahead == 'o') ADVANCE(92);
      END_STATE();
    case 103:
      if (lookahead == 'o') ADVANCE(156);
      if (lookahead == 'r') ADVANCE(64);
      END_STATE();
    case 104:
      if (lookahead == 'p') ADVANCE(101);
      END_STATE();
    case 105:
      if (lookahead == 'p') ADVANCE(159);
      END_STATE();
    case 106:
      if (lookahead == 'p') ADVANCE(71);
      END_STATE();
    case 107:
      if (lookahead == 'p') ADVANCE(177);
      END_STATE();
    case 108:
      if (lookahead == 'p') ADVANCE(24);
      END_STATE();
    case 109:
      if (lookahead == 'p') ADVANCE(98);
      END_STATE();
    case 110:
      if (lookahead == 'p') ADVANCE(26);
      END_STATE();
    case 111:
      if (lookahead == 'p') ADVANCE(102);
      END_STATE();
    case 112:
      if (lookahead == 'p') ADVANCE(103);
      END_STATE();
    case 113:
      if (lookahead == 'q') ADVANCE(78);
      END_STATE();
    case 114:
      if (lookahead == 'q') ADVANCE(79);
      END_STATE();
    case 115:
      if (lookahead == 'q') ADVANCE(182);
      END_STATE();
    case 116:
      if (lookahead == 'q') ADVANCE(183);
      END_STATE();
    case 117:
      if (lookahead == 'r') ADVANCE(113);
      END_STATE();
    case 118:
      if (lookahead == 'r') ADVANCE(205);
      END_STATE();
    case 119:
      if (lookahead == 'r') ADVANCE(189);
      END_STATE();
    case 120:
      if (lookahead == 'r') ADVANCE(75);
      END_STATE();
    case 121:
      if (lookahead == 'r') ADVANCE(84);
      END_STATE();
    case 122:
      if (lookahead == 'r') ADVANCE(83);
      END_STATE();
    case 123:
      if (lookahead == 'r') ADVANCE(142);
      END_STATE();
    case 124:
      if (lookahead == 'r') ADVANCE(20);
      END_STATE();
    case 125:
      if (lookahead == 'r') ADVANCE(80);
      END_STATE();
    case 126:
      if (lookahead == 'r') ADVANCE(138);
      END_STATE();
    case 127:
      if (lookahead == 'r') ADVANCE(48);
      END_STATE();
    case 128:
      if (lookahead == 'r') ADVANCE(162);
      END_STATE();
    case 129:
      if (lookahead == 'r') ADVANCE(57);
      END_STATE();
    case 130:
      if (lookahead == 'r') ADVANCE(141);
      END_STATE();
    case 131:
      if (lookahead == 'r') ADVANCE(170);
      END_STATE();
    case 132:
      if (lookahead == 'r') ADVANCE(56);
      END_STATE();
    case 133:
      if (lookahead == 'r') ADVANCE(63);
      END_STATE();
    case 134:
      if (lookahead == 'r') ADVANCE(62);
      END_STATE();
    case 135:
      if (lookahead == 's') ADVANCE(154);
      if (lookahead == 'u') ADVANCE(157);
      END_STATE();
    case 136:
      if (lookahead == 's') ADVANCE(223);
      END_STATE();
    case 137:
      if (lookahead == 's') ADVANCE(222);
      END_STATE();
    case 138:
      if (lookahead == 's') ADVANCE(202);
      END_STATE();
    case 139:
      if (lookahead == 's') ADVANCE(197);
      END_STATE();
    case 140:
      if (lookahead == 's') ADVANCE(184);
      END_STATE();
    case 141:
      if (lookahead == 's') ADVANCE(213);
      END_STATE();
    case 142:
      if (lookahead == 's') ADVANCE(13);
      END_STATE();
    case 143:
      if (lookahead == 's') ADVANCE(74);
      END_STATE();
    case 144:
      if (lookahead == 's') ADVANCE(109);
      END_STATE();
    case 145:
      if (lookahead == 's') ADVANCE(161);
      END_STATE();
    case 146:
      if (lookahead == 's') ADVANCE(172);
      END_STATE();
    case 147:
      if (lookahead == 's') ADVANCE(44);
      END_STATE();
    case 148:
      if (lookahead == 's') ADVANCE(45);
      END_STATE();
    case 149:
      if (lookahead == 's') ADVANCE(175);
      END_STATE();
    case 150:
      if (lookahead == 's') ADVANCE(165);
      END_STATE();
    case 151:
      if (lookahead == 's') ADVANCE(166);
      END_STATE();
    case 152:
      if (lookahead == 's') ADVANCE(167);
      END_STATE();
    case 153:
      if (lookahead == 's') ADVANCE(97);
      END_STATE();
    case 154:
      if (lookahead == 's') ADVANCE(52);
      END_STATE();
    case 155:
      if (lookahead == 's') ADVANCE(111);
      END_STATE();
    case 156:
      if (lookahead == 's') ADVANCE(176);
      END_STATE();
    case 157:
      if (lookahead == 't') ADVANCE(68);
      END_STATE();
    case 158:
      if (lookahead == 't') ADVANCE(192);
      END_STATE();
    case 159:
      if (lookahead == 't') ADVANCE(73);
      END_STATE();
    case 160:
      if (lookahead == 't') ADVANCE(194);
      END_STATE();
    case 161:
      if (lookahead == 't') ADVANCE(193);
      END_STATE();
    case 162:
      if (lookahead == 't') ADVANCE(219);
      END_STATE();
    case 163:
      if (lookahead == 't') ADVANCE(199);
      END_STATE();
    case 164:
      if (lookahead == 't') ADVANCE(209);
      END_STATE();
    case 165:
      if (lookahead == 't') ADVANCE(206);
      END_STATE();
    case 166:
      if (lookahead == 't') ADVANCE(217);
      END_STATE();
    case 167:
      if (lookahead == 't') ADVANCE(220);
      END_STATE();
    case 168:
      if (lookahead == 't') ADVANCE(30);
      END_STATE();
    case 169:
      if (lookahead == 't') ADVANCE(70);
      END_STATE();
    case 170:
      if (lookahead == 't') ADVANCE(4);
      END_STATE();
    case 171:
      if (lookahead == 't') ADVANCE(15);
      END_STATE();
    case 172:
      if (lookahead == 't') ADVANCE(137);
      END_STATE();
    case 173:
      if (lookahead == 't') ADVANCE(76);
      END_STATE();
    case 174:
      if (lookahead == 't') ADVANCE(41);
      END_STATE();
    case 175:
      if (lookahead == 't') ADVANCE(7);
      END_STATE();
    case 176:
      if (lookahead == 't') ADVANCE(8);
      END_STATE();
    case 177:
      if (lookahead == 't') ADVANCE(14);
      END_STATE();
    case 178:
      if (lookahead == 'u') ADVANCE(81);
      END_STATE();
    case 179:
      if (lookahead == 'u') ADVANCE(50);
      END_STATE();
    case 180:
      if (lookahead == 'u') ADVANCE(125);
      END_STATE();
    case 181:
      if (lookahead == 'u') ADVANCE(169);
      END_STATE();
    case 182:
      if (lookahead == 'u') ADVANCE(60);
      END_STATE();
    case 183:
      if (lookahead == 'u') ADVANCE(61);
      END_STATE();
    case 184:
      if (lookahead == 'v') ADVANCE(11);
      END_STATE();
    case 185:
      if (lookahead == 'v') ADVANCE(27);
      END_STATE();
    case 186:
      if (lookahead == 'w') ADVANCE(140);
      END_STATE();
    case 187:
      if (lookahead == 'x') ADVANCE(164);
      END_STATE();
    case 188:
      if (lookahead == 'y') ADVANCE(216);
      END_STATE();
    case 189:
      if (lookahead == 'y') ADVANCE(201);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(anon_sym_meta);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(anon_sym_get);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_post);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_put);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_delete);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_patch);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(anon_sym_options);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(anon_sym_head);
      if (lookahead == 'e') ADVANCE(126);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_connect);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_trace);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_query);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_headers);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_auth_COLONawsv4);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(anon_sym_auth_COLONbasic);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_auth_COLONbearer);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_auth_COLONdigest);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_auth_COLONoauth2);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(anon_sym_body_COLONjson);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(anon_sym_body_COLONtext);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(anon_sym_body_COLONxml);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(anon_sym_body_COLONsparql);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(anon_sym_body_COLONgraphql);
      if (lookahead == ':') ADVANCE(185);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(anon_sym_body_COLONgraphql_COLONvars);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(anon_sym_body_COLONform_DASHurlencoded);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(anon_sym_body_COLONmultipart_DASHform);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(anon_sym_body);
      if (lookahead == ':') ADVANCE(65);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(anon_sym_vars_COLONpre_DASHrequest);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(anon_sym_vars_COLONpost_DASHresponse);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(anon_sym_assert);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(anon_sym_script_COLONpre_DASHrequest);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(anon_sym_script_COLONpost_DASHresponse);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(anon_sym_tests);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(anon_sym_docs);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == ':' ||
          lookahead == '}') ADVANCE(237);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(227);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_key);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ':' &&
          lookahead != '}') ADVANCE(228);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_value);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(229);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym__any);
      if (lookahead == '\n') ADVANCE(232);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(232);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(233);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym__any);
      if (lookahead == '\n') ADVANCE(233);
      if (lookahead == '{' ||
          lookahead == '}') ADVANCE(237);
      if (lookahead != 0) ADVANCE(231);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym__any);
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
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(236);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym__s);
      if (lookahead == '\n') ADVANCE(234);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(236);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym__s);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(236);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(237);
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
  [36] = {.lex_state = 3},
  [37] = {.lex_state = 3},
  [38] = {.lex_state = 3},
  [39] = {.lex_state = 3},
  [40] = {.lex_state = 3},
  [41] = {.lex_state = 1},
  [42] = {.lex_state = 1},
  [43] = {.lex_state = 1},
  [44] = {.lex_state = 3},
  [45] = {.lex_state = 3},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
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
  [63] = {.lex_state = 1},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 2},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
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
    [sym__nl] = ACTIONS(3),
    [sym__s] = ACTIONS(3),
    [sym_comment] = ACTIONS(5),
  },
  [1] = {
    [sym_document] = STATE(75),
    [sym_meta] = STATE(2),
    [sym_http] = STATE(2),
    [sym_http_verb] = STATE(51),
    [sym_query] = STATE(2),
    [sym_headers] = STATE(2),
    [sym_auths] = STATE(2),
    [sym_auth_awsv4] = STATE(29),
    [sym_auth_basic] = STATE(29),
    [sym_auth_bearer] = STATE(29),
    [sym_auth_digest] = STATE(29),
    [sym_auth_oauth2] = STATE(29),
    [sym_bodies] = STATE(2),
    [sym_body_json] = STATE(30),
    [sym_body_text] = STATE(30),
    [sym_body_xml] = STATE(30),
    [sym_body_sparql] = STATE(30),
    [sym_body_graphql] = STATE(30),
    [sym_body_graphql_vars] = STATE(30),
    [sym_body_form_urlencoded] = STATE(30),
    [sym_body_multipart_form] = STATE(30),
    [sym_body] = STATE(30),
    [sym_vars] = STATE(2),
    [sym_vars_pre_request] = STATE(31),
    [sym_vars_post_response] = STATE(31),
    [sym_assert] = STATE(2),
    [sym_scripts] = STATE(2),
    [sym_script_pre_request] = STATE(32),
    [sym_script_post_response] = STATE(32),
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
    [anon_sym_headers] = ACTIONS(17),
    [anon_sym_auth_COLONawsv4] = ACTIONS(19),
    [anon_sym_auth_COLONbasic] = ACTIONS(21),
    [anon_sym_auth_COLONbearer] = ACTIONS(23),
    [anon_sym_auth_COLONdigest] = ACTIONS(25),
    [anon_sym_auth_COLONoauth2] = ACTIONS(27),
    [anon_sym_body_COLONjson] = ACTIONS(29),
    [anon_sym_body_COLONtext] = ACTIONS(31),
    [anon_sym_body_COLONxml] = ACTIONS(33),
    [anon_sym_body_COLONsparql] = ACTIONS(35),
    [anon_sym_body_COLONgraphql] = ACTIONS(37),
    [anon_sym_body_COLONgraphql_COLONvars] = ACTIONS(39),
    [anon_sym_body_COLONform_DASHurlencoded] = ACTIONS(41),
    [anon_sym_body_COLONmultipart_DASHform] = ACTIONS(43),
    [anon_sym_body] = ACTIONS(45),
    [anon_sym_vars_COLONpre_DASHrequest] = ACTIONS(47),
    [anon_sym_vars_COLONpost_DASHresponse] = ACTIONS(49),
    [anon_sym_assert] = ACTIONS(51),
    [anon_sym_script_COLONpre_DASHrequest] = ACTIONS(53),
    [anon_sym_script_COLONpost_DASHresponse] = ACTIONS(55),
    [anon_sym_tests] = ACTIONS(57),
    [anon_sym_docs] = ACTIONS(59),
    [sym__nl] = ACTIONS(3),
    [sym__s] = ACTIONS(3),
    [sym_comment] = ACTIONS(5),
  },
  [2] = {
    [sym_meta] = STATE(3),
    [sym_http] = STATE(3),
    [sym_http_verb] = STATE(51),
    [sym_query] = STATE(3),
    [sym_headers] = STATE(3),
    [sym_auths] = STATE(3),
    [sym_auth_awsv4] = STATE(29),
    [sym_auth_basic] = STATE(29),
    [sym_auth_bearer] = STATE(29),
    [sym_auth_digest] = STATE(29),
    [sym_auth_oauth2] = STATE(29),
    [sym_bodies] = STATE(3),
    [sym_body_json] = STATE(30),
    [sym_body_text] = STATE(30),
    [sym_body_xml] = STATE(30),
    [sym_body_sparql] = STATE(30),
    [sym_body_graphql] = STATE(30),
    [sym_body_graphql_vars] = STATE(30),
    [sym_body_form_urlencoded] = STATE(30),
    [sym_body_multipart_form] = STATE(30),
    [sym_body] = STATE(30),
    [sym_vars] = STATE(3),
    [sym_vars_pre_request] = STATE(31),
    [sym_vars_post_response] = STATE(31),
    [sym_assert] = STATE(3),
    [sym_scripts] = STATE(3),
    [sym_script_pre_request] = STATE(32),
    [sym_script_post_response] = STATE(32),
    [sym_tests] = STATE(3),
    [sym_docs] = STATE(3),
    [aux_sym_document_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(61),
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
    [anon_sym_headers] = ACTIONS(17),
    [anon_sym_auth_COLONawsv4] = ACTIONS(19),
    [anon_sym_auth_COLONbasic] = ACTIONS(21),
    [anon_sym_auth_COLONbearer] = ACTIONS(23),
    [anon_sym_auth_COLONdigest] = ACTIONS(25),
    [anon_sym_auth_COLONoauth2] = ACTIONS(27),
    [anon_sym_body_COLONjson] = ACTIONS(29),
    [anon_sym_body_COLONtext] = ACTIONS(31),
    [anon_sym_body_COLONxml] = ACTIONS(33),
    [anon_sym_body_COLONsparql] = ACTIONS(35),
    [anon_sym_body_COLONgraphql] = ACTIONS(37),
    [anon_sym_body_COLONgraphql_COLONvars] = ACTIONS(39),
    [anon_sym_body_COLONform_DASHurlencoded] = ACTIONS(41),
    [anon_sym_body_COLONmultipart_DASHform] = ACTIONS(43),
    [anon_sym_body] = ACTIONS(45),
    [anon_sym_vars_COLONpre_DASHrequest] = ACTIONS(47),
    [anon_sym_vars_COLONpost_DASHresponse] = ACTIONS(49),
    [anon_sym_assert] = ACTIONS(51),
    [anon_sym_script_COLONpre_DASHrequest] = ACTIONS(53),
    [anon_sym_script_COLONpost_DASHresponse] = ACTIONS(55),
    [anon_sym_tests] = ACTIONS(57),
    [anon_sym_docs] = ACTIONS(59),
    [sym__nl] = ACTIONS(3),
    [sym__s] = ACTIONS(3),
    [sym_comment] = ACTIONS(5),
  },
  [3] = {
    [sym_meta] = STATE(3),
    [sym_http] = STATE(3),
    [sym_http_verb] = STATE(51),
    [sym_query] = STATE(3),
    [sym_headers] = STATE(3),
    [sym_auths] = STATE(3),
    [sym_auth_awsv4] = STATE(29),
    [sym_auth_basic] = STATE(29),
    [sym_auth_bearer] = STATE(29),
    [sym_auth_digest] = STATE(29),
    [sym_auth_oauth2] = STATE(29),
    [sym_bodies] = STATE(3),
    [sym_body_json] = STATE(30),
    [sym_body_text] = STATE(30),
    [sym_body_xml] = STATE(30),
    [sym_body_sparql] = STATE(30),
    [sym_body_graphql] = STATE(30),
    [sym_body_graphql_vars] = STATE(30),
    [sym_body_form_urlencoded] = STATE(30),
    [sym_body_multipart_form] = STATE(30),
    [sym_body] = STATE(30),
    [sym_vars] = STATE(3),
    [sym_vars_pre_request] = STATE(31),
    [sym_vars_post_response] = STATE(31),
    [sym_assert] = STATE(3),
    [sym_scripts] = STATE(3),
    [sym_script_pre_request] = STATE(32),
    [sym_script_post_response] = STATE(32),
    [sym_tests] = STATE(3),
    [sym_docs] = STATE(3),
    [aux_sym_document_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(63),
    [anon_sym_meta] = ACTIONS(65),
    [anon_sym_get] = ACTIONS(68),
    [anon_sym_post] = ACTIONS(68),
    [anon_sym_put] = ACTIONS(68),
    [anon_sym_delete] = ACTIONS(68),
    [anon_sym_patch] = ACTIONS(68),
    [anon_sym_options] = ACTIONS(68),
    [anon_sym_head] = ACTIONS(71),
    [anon_sym_connect] = ACTIONS(68),
    [anon_sym_trace] = ACTIONS(68),
    [anon_sym_query] = ACTIONS(74),
    [anon_sym_headers] = ACTIONS(77),
    [anon_sym_auth_COLONawsv4] = ACTIONS(80),
    [anon_sym_auth_COLONbasic] = ACTIONS(83),
    [anon_sym_auth_COLONbearer] = ACTIONS(86),
    [anon_sym_auth_COLONdigest] = ACTIONS(89),
    [anon_sym_auth_COLONoauth2] = ACTIONS(92),
    [anon_sym_body_COLONjson] = ACTIONS(95),
    [anon_sym_body_COLONtext] = ACTIONS(98),
    [anon_sym_body_COLONxml] = ACTIONS(101),
    [anon_sym_body_COLONsparql] = ACTIONS(104),
    [anon_sym_body_COLONgraphql] = ACTIONS(107),
    [anon_sym_body_COLONgraphql_COLONvars] = ACTIONS(110),
    [anon_sym_body_COLONform_DASHurlencoded] = ACTIONS(113),
    [anon_sym_body_COLONmultipart_DASHform] = ACTIONS(116),
    [anon_sym_body] = ACTIONS(119),
    [anon_sym_vars_COLONpre_DASHrequest] = ACTIONS(122),
    [anon_sym_vars_COLONpost_DASHresponse] = ACTIONS(125),
    [anon_sym_assert] = ACTIONS(128),
    [anon_sym_script_COLONpre_DASHrequest] = ACTIONS(131),
    [anon_sym_script_COLONpost_DASHresponse] = ACTIONS(134),
    [anon_sym_tests] = ACTIONS(137),
    [anon_sym_docs] = ACTIONS(140),
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
    ACTIONS(145), 3,
      anon_sym_head,
      anon_sym_body_COLONgraphql,
      anon_sym_body,
    ACTIONS(143), 31,
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
  [46] = 4,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(3), 2,
      sym__nl,
      sym__s,
    ACTIONS(149), 3,
      anon_sym_head,
      anon_sym_body_COLONgraphql,
      anon_sym_body,
    ACTIONS(147), 31,
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
  [92] = 4,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(3), 2,
      sym__nl,
      sym__s,
    ACTIONS(153), 3,
      anon_sym_head,
      anon_sym_body_COLONgraphql,
      anon_sym_body,
    ACTIONS(151), 31,
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
  [138] = 4,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(3), 2,
      sym__nl,
      sym__s,
    ACTIONS(157), 3,
      anon_sym_head,
      anon_sym_body_COLONgraphql,
      anon_sym_body,
    ACTIONS(155), 31,
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
  [184] = 4,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(3), 2,
      sym__nl,
      sym__s,
    ACTIONS(161), 3,
      anon_sym_head,
      anon_sym_body_COLONgraphql,
      anon_sym_body,
    ACTIONS(159), 31,
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
  [230] = 4,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(3), 2,
      sym__nl,
      sym__s,
    ACTIONS(165), 3,
      anon_sym_head,
      anon_sym_body_COLONgraphql,
      anon_sym_body,
    ACTIONS(163), 31,
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
  [276] = 4,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(3), 2,
      sym__nl,
      sym__s,
    ACTIONS(169), 3,
      anon_sym_head,
      anon_sym_body_COLONgraphql,
      anon_sym_body,
    ACTIONS(167), 31,
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
  [322] = 4,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(3), 2,
      sym__nl,
      sym__s,
    ACTIONS(173), 3,
      anon_sym_head,
      anon_sym_body_COLONgraphql,
      anon_sym_body,
    ACTIONS(171), 31,
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
  [368] = 4,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(3), 2,
      sym__nl,
      sym__s,
    ACTIONS(177), 3,
      anon_sym_head,
      anon_sym_body_COLONgraphql,
      anon_sym_body,
    ACTIONS(175), 31,
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
  [414] = 4,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(3), 2,
      sym__nl,
      sym__s,
    ACTIONS(181), 3,
      anon_sym_head,
      anon_sym_body_COLONgraphql,
      anon_sym_body,
    ACTIONS(179), 31,
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
  [460] = 4,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(3), 2,
      sym__nl,
      sym__s,
    ACTIONS(185), 3,
      anon_sym_head,
      anon_sym_body_COLONgraphql,
      anon_sym_body,
    ACTIONS(183), 31,
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
  [506] = 4,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(3), 2,
      sym__nl,
      sym__s,
    ACTIONS(189), 3,
      anon_sym_head,
      anon_sym_body_COLONgraphql,
      anon_sym_body,
    ACTIONS(187), 31,
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
  [552] = 4,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(3), 2,
      sym__nl,
      sym__s,
    ACTIONS(193), 3,
      anon_sym_head,
      anon_sym_body_COLONgraphql,
      anon_sym_body,
    ACTIONS(191), 31,
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
  [598] = 4,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(3), 2,
      sym__nl,
      sym__s,
    ACTIONS(197), 3,
      anon_sym_head,
      anon_sym_body_COLONgraphql,
      anon_sym_body,
    ACTIONS(195), 31,
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
  [644] = 4,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(3), 2,
      sym__nl,
      sym__s,
    ACTIONS(201), 3,
      anon_sym_head,
      anon_sym_body_COLONgraphql,
      anon_sym_body,
    ACTIONS(199), 31,
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
  [690] = 4,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(3), 2,
      sym__nl,
      sym__s,
    ACTIONS(205), 3,
      anon_sym_head,
      anon_sym_body_COLONgraphql,
      anon_sym_body,
    ACTIONS(203), 31,
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
  [736] = 4,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(3), 2,
      sym__nl,
      sym__s,
    ACTIONS(209), 3,
      anon_sym_head,
      anon_sym_body_COLONgraphql,
      anon_sym_body,
    ACTIONS(207), 31,
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
  [782] = 4,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(3), 2,
      sym__nl,
      sym__s,
    ACTIONS(213), 3,
      anon_sym_head,
      anon_sym_body_COLONgraphql,
      anon_sym_body,
    ACTIONS(211), 31,
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
  [828] = 4,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(3), 2,
      sym__nl,
      sym__s,
    ACTIONS(217), 3,
      anon_sym_head,
      anon_sym_body_COLONgraphql,
      anon_sym_body,
    ACTIONS(215), 31,
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
  [874] = 4,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(3), 2,
      sym__nl,
      sym__s,
    ACTIONS(221), 3,
      anon_sym_head,
      anon_sym_body_COLONgraphql,
      anon_sym_body,
    ACTIONS(219), 31,
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
  [920] = 4,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(3), 2,
      sym__nl,
      sym__s,
    ACTIONS(225), 3,
      anon_sym_head,
      anon_sym_body_COLONgraphql,
      anon_sym_body,
    ACTIONS(223), 31,
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
  [966] = 4,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(3), 2,
      sym__nl,
      sym__s,
    ACTIONS(229), 3,
      anon_sym_head,
      anon_sym_body_COLONgraphql,
      anon_sym_body,
    ACTIONS(227), 31,
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
  [1012] = 4,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(3), 2,
      sym__nl,
      sym__s,
    ACTIONS(233), 3,
      anon_sym_head,
      anon_sym_body_COLONgraphql,
      anon_sym_body,
    ACTIONS(231), 31,
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
  [1058] = 4,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(3), 2,
      sym__nl,
      sym__s,
    ACTIONS(237), 3,
      anon_sym_head,
      anon_sym_body_COLONgraphql,
      anon_sym_body,
    ACTIONS(235), 31,
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
  [1104] = 4,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(3), 2,
      sym__nl,
      sym__s,
    ACTIONS(241), 3,
      anon_sym_head,
      anon_sym_body_COLONgraphql,
      anon_sym_body,
    ACTIONS(239), 31,
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
  [1150] = 4,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(3), 2,
      sym__nl,
      sym__s,
    ACTIONS(245), 3,
      anon_sym_head,
      anon_sym_body_COLONgraphql,
      anon_sym_body,
    ACTIONS(243), 31,
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
  [1196] = 4,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(3), 2,
      sym__nl,
      sym__s,
    ACTIONS(249), 3,
      anon_sym_head,
      anon_sym_body_COLONgraphql,
      anon_sym_body,
    ACTIONS(247), 31,
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
  [1242] = 4,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(3), 2,
      sym__nl,
      sym__s,
    ACTIONS(253), 3,
      anon_sym_head,
      anon_sym_body_COLONgraphql,
      anon_sym_body,
    ACTIONS(251), 31,
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
  [1288] = 4,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(3), 2,
      sym__nl,
      sym__s,
    ACTIONS(257), 3,
      anon_sym_head,
      anon_sym_body_COLONgraphql,
      anon_sym_body,
    ACTIONS(255), 31,
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
  [1334] = 4,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(3), 2,
      sym__nl,
      sym__s,
    ACTIONS(261), 3,
      anon_sym_head,
      anon_sym_body_COLONgraphql,
      anon_sym_body,
    ACTIONS(259), 31,
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
  [1380] = 4,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(3), 2,
      sym__nl,
      sym__s,
    ACTIONS(265), 3,
      anon_sym_head,
      anon_sym_body_COLONgraphql,
      anon_sym_body,
    ACTIONS(263), 31,
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
  [1426] = 4,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(3), 2,
      sym__nl,
      sym__s,
    ACTIONS(269), 3,
      anon_sym_head,
      anon_sym_body_COLONgraphql,
      anon_sym_body,
    ACTIONS(267), 31,
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
  [1472] = 5,
    ACTIONS(271), 1,
      anon_sym_LBRACE,
    ACTIONS(273), 1,
      anon_sym_RBRACE,
    ACTIONS(275), 1,
      sym__any,
    STATE(39), 2,
      sym__text,
      aux_sym_text_repeat1,
    ACTIONS(3), 3,
      sym__nl,
      sym__s,
      sym_comment,
  [1491] = 5,
    ACTIONS(271), 1,
      anon_sym_LBRACE,
    ACTIONS(277), 1,
      anon_sym_RBRACE,
    ACTIONS(279), 1,
      sym__any,
    STATE(40), 2,
      sym__text,
      aux_sym_text_repeat1,
    ACTIONS(3), 3,
      sym__nl,
      sym__s,
      sym_comment,
  [1510] = 5,
    ACTIONS(271), 1,
      anon_sym_LBRACE,
    ACTIONS(281), 1,
      sym__any,
    STATE(73), 1,
      sym_text,
    STATE(37), 2,
      sym__text,
      aux_sym_text_repeat1,
    ACTIONS(3), 3,
      sym__nl,
      sym__s,
      sym_comment,
  [1529] = 5,
    ACTIONS(271), 1,
      anon_sym_LBRACE,
    ACTIONS(279), 1,
      sym__any,
    ACTIONS(283), 1,
      anon_sym_RBRACE,
    STATE(40), 2,
      sym__text,
      aux_sym_text_repeat1,
    ACTIONS(3), 3,
      sym__nl,
      sym__s,
      sym_comment,
  [1548] = 5,
    ACTIONS(285), 1,
      anon_sym_LBRACE,
    ACTIONS(288), 1,
      anon_sym_RBRACE,
    ACTIONS(290), 1,
      sym__any,
    STATE(40), 2,
      sym__text,
      aux_sym_text_repeat1,
    ACTIONS(3), 3,
      sym__nl,
      sym__s,
      sym_comment,
  [1567] = 4,
    ACTIONS(293), 1,
      anon_sym_RBRACE,
    ACTIONS(295), 1,
      sym_key,
    STATE(42), 2,
      sym_pair,
      aux_sym_dictionary_repeat1,
    ACTIONS(3), 3,
      sym__nl,
      sym__s,
      sym_comment,
  [1583] = 4,
    ACTIONS(295), 1,
      sym_key,
    ACTIONS(297), 1,
      anon_sym_RBRACE,
    STATE(43), 2,
      sym_pair,
      aux_sym_dictionary_repeat1,
    ACTIONS(3), 3,
      sym__nl,
      sym__s,
      sym_comment,
  [1599] = 4,
    ACTIONS(299), 1,
      anon_sym_RBRACE,
    ACTIONS(301), 1,
      sym_key,
    STATE(43), 2,
      sym_pair,
      aux_sym_dictionary_repeat1,
    ACTIONS(3), 3,
      sym__nl,
      sym__s,
      sym_comment,
  [1615] = 3,
    ACTIONS(306), 1,
      sym__any,
    ACTIONS(304), 2,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(3), 3,
      sym__nl,
      sym__s,
      sym_comment,
  [1628] = 3,
    ACTIONS(310), 1,
      sym__any,
    ACTIONS(308), 2,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(3), 3,
      sym__nl,
      sym__s,
      sym_comment,
  [1641] = 4,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(312), 1,
      anon_sym_LBRACE,
    STATE(21), 1,
      sym_text_block,
    ACTIONS(3), 2,
      sym__nl,
      sym__s,
  [1655] = 4,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(314), 1,
      anon_sym_LBRACE,
    STATE(25), 1,
      sym_dictionary,
    ACTIONS(3), 2,
      sym__nl,
      sym__s,
  [1669] = 4,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(314), 1,
      anon_sym_LBRACE,
    STATE(15), 1,
      sym_dictionary,
    ACTIONS(3), 2,
      sym__nl,
      sym__s,
  [1683] = 4,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(314), 1,
      anon_sym_LBRACE,
    STATE(16), 1,
      sym_dictionary,
    ACTIONS(3), 2,
      sym__nl,
      sym__s,
  [1697] = 4,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(314), 1,
      anon_sym_LBRACE,
    STATE(5), 1,
      sym_dictionary,
    ACTIONS(3), 2,
      sym__nl,
      sym__s,
  [1711] = 4,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(314), 1,
      anon_sym_LBRACE,
    STATE(18), 1,
      sym_dictionary,
    ACTIONS(3), 2,
      sym__nl,
      sym__s,
  [1725] = 4,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(314), 1,
      anon_sym_LBRACE,
    STATE(14), 1,
      sym_dictionary,
    ACTIONS(3), 2,
      sym__nl,
      sym__s,
  [1739] = 4,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(312), 1,
      anon_sym_LBRACE,
    STATE(19), 1,
      sym_text_block,
    ACTIONS(3), 2,
      sym__nl,
      sym__s,
  [1753] = 4,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(312), 1,
      anon_sym_LBRACE,
    STATE(20), 1,
      sym_text_block,
    ACTIONS(3), 2,
      sym__nl,
      sym__s,
  [1767] = 4,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(312), 1,
      anon_sym_LBRACE,
    STATE(4), 1,
      sym_text_block,
    ACTIONS(3), 2,
      sym__nl,
      sym__s,
  [1781] = 4,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(314), 1,
      anon_sym_LBRACE,
    STATE(22), 1,
      sym_dictionary,
    ACTIONS(3), 2,
      sym__nl,
      sym__s,
  [1795] = 4,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(314), 1,
      anon_sym_LBRACE,
    STATE(34), 1,
      sym_dictionary,
    ACTIONS(3), 2,
      sym__nl,
      sym__s,
  [1809] = 4,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(314), 1,
      anon_sym_LBRACE,
    STATE(24), 1,
      sym_dictionary,
    ACTIONS(3), 2,
      sym__nl,
      sym__s,
  [1823] = 4,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(314), 1,
      anon_sym_LBRACE,
    STATE(23), 1,
      sym_dictionary,
    ACTIONS(3), 2,
      sym__nl,
      sym__s,
  [1837] = 4,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(312), 1,
      anon_sym_LBRACE,
    STATE(26), 1,
      sym_text_block,
    ACTIONS(3), 2,
      sym__nl,
      sym__s,
  [1851] = 4,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(312), 1,
      anon_sym_LBRACE,
    STATE(6), 1,
      sym_text_block,
    ACTIONS(3), 2,
      sym__nl,
      sym__s,
  [1865] = 4,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(314), 1,
      anon_sym_LBRACE,
    STATE(27), 1,
      sym_dictionary,
    ACTIONS(3), 2,
      sym__nl,
      sym__s,
  [1879] = 3,
    ACTIONS(316), 1,
      anon_sym_RBRACE,
    ACTIONS(318), 1,
      sym_key,
    ACTIONS(3), 3,
      sym__nl,
      sym__s,
      sym_comment,
  [1891] = 4,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(314), 1,
      anon_sym_LBRACE,
    STATE(28), 1,
      sym_dictionary,
    ACTIONS(3), 2,
      sym__nl,
      sym__s,
  [1905] = 4,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(312), 1,
      anon_sym_LBRACE,
    STATE(33), 1,
      sym_text_block,
    ACTIONS(3), 2,
      sym__nl,
      sym__s,
  [1919] = 4,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(312), 1,
      anon_sym_LBRACE,
    STATE(11), 1,
      sym_text_block,
    ACTIONS(3), 2,
      sym__nl,
      sym__s,
  [1933] = 4,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(312), 1,
      anon_sym_LBRACE,
    STATE(35), 1,
      sym_text_block,
    ACTIONS(3), 2,
      sym__nl,
      sym__s,
  [1947] = 4,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(312), 1,
      anon_sym_LBRACE,
    STATE(7), 1,
      sym_text_block,
    ACTIONS(3), 2,
      sym__nl,
      sym__s,
  [1961] = 4,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(312), 1,
      anon_sym_LBRACE,
    STATE(9), 1,
      sym_text_block,
    ACTIONS(3), 2,
      sym__nl,
      sym__s,
  [1975] = 4,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(314), 1,
      anon_sym_LBRACE,
    STATE(13), 1,
      sym_dictionary,
    ACTIONS(3), 2,
      sym__nl,
      sym__s,
  [1989] = 4,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(314), 1,
      anon_sym_LBRACE,
    STATE(10), 1,
      sym_dictionary,
    ACTIONS(3), 2,
      sym__nl,
      sym__s,
  [2003] = 3,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(320), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym__nl,
      sym__s,
  [2014] = 3,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(322), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym__nl,
      sym__s,
  [2025] = 2,
    ACTIONS(324), 1,
      sym_value,
    ACTIONS(3), 3,
      sym__nl,
      sym__s,
      sym_comment,
  [2034] = 3,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(326), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym__nl,
      sym__s,
  [2045] = 3,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(328), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__nl,
      sym__s,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 46,
  [SMALL_STATE(6)] = 92,
  [SMALL_STATE(7)] = 138,
  [SMALL_STATE(8)] = 184,
  [SMALL_STATE(9)] = 230,
  [SMALL_STATE(10)] = 276,
  [SMALL_STATE(11)] = 322,
  [SMALL_STATE(12)] = 368,
  [SMALL_STATE(13)] = 414,
  [SMALL_STATE(14)] = 460,
  [SMALL_STATE(15)] = 506,
  [SMALL_STATE(16)] = 552,
  [SMALL_STATE(17)] = 598,
  [SMALL_STATE(18)] = 644,
  [SMALL_STATE(19)] = 690,
  [SMALL_STATE(20)] = 736,
  [SMALL_STATE(21)] = 782,
  [SMALL_STATE(22)] = 828,
  [SMALL_STATE(23)] = 874,
  [SMALL_STATE(24)] = 920,
  [SMALL_STATE(25)] = 966,
  [SMALL_STATE(26)] = 1012,
  [SMALL_STATE(27)] = 1058,
  [SMALL_STATE(28)] = 1104,
  [SMALL_STATE(29)] = 1150,
  [SMALL_STATE(30)] = 1196,
  [SMALL_STATE(31)] = 1242,
  [SMALL_STATE(32)] = 1288,
  [SMALL_STATE(33)] = 1334,
  [SMALL_STATE(34)] = 1380,
  [SMALL_STATE(35)] = 1426,
  [SMALL_STATE(36)] = 1472,
  [SMALL_STATE(37)] = 1491,
  [SMALL_STATE(38)] = 1510,
  [SMALL_STATE(39)] = 1529,
  [SMALL_STATE(40)] = 1548,
  [SMALL_STATE(41)] = 1567,
  [SMALL_STATE(42)] = 1583,
  [SMALL_STATE(43)] = 1599,
  [SMALL_STATE(44)] = 1615,
  [SMALL_STATE(45)] = 1628,
  [SMALL_STATE(46)] = 1641,
  [SMALL_STATE(47)] = 1655,
  [SMALL_STATE(48)] = 1669,
  [SMALL_STATE(49)] = 1683,
  [SMALL_STATE(50)] = 1697,
  [SMALL_STATE(51)] = 1711,
  [SMALL_STATE(52)] = 1725,
  [SMALL_STATE(53)] = 1739,
  [SMALL_STATE(54)] = 1753,
  [SMALL_STATE(55)] = 1767,
  [SMALL_STATE(56)] = 1781,
  [SMALL_STATE(57)] = 1795,
  [SMALL_STATE(58)] = 1809,
  [SMALL_STATE(59)] = 1823,
  [SMALL_STATE(60)] = 1837,
  [SMALL_STATE(61)] = 1851,
  [SMALL_STATE(62)] = 1865,
  [SMALL_STATE(63)] = 1879,
  [SMALL_STATE(64)] = 1891,
  [SMALL_STATE(65)] = 1905,
  [SMALL_STATE(66)] = 1919,
  [SMALL_STATE(67)] = 1933,
  [SMALL_STATE(68)] = 1947,
  [SMALL_STATE(69)] = 1961,
  [SMALL_STATE(70)] = 1975,
  [SMALL_STATE(71)] = 1989,
  [SMALL_STATE(72)] = 2003,
  [SMALL_STATE(73)] = 2014,
  [SMALL_STATE(74)] = 2025,
  [SMALL_STATE(75)] = 2034,
  [SMALL_STATE(76)] = 2045,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 0, 0, 0),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1, 0, 0),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0),
  [65] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(50),
  [68] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(72),
  [71] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(72),
  [74] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(57),
  [77] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(49),
  [80] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(48),
  [83] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(52),
  [86] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(59),
  [89] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(71),
  [92] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(70),
  [95] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(69),
  [98] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(68),
  [101] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(61),
  [104] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(67),
  [107] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(66),
  [110] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(65),
  [113] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(64),
  [116] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(62),
  [119] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(60),
  [122] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(47),
  [125] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(58),
  [128] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(56),
  [131] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(46),
  [134] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(55),
  [137] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(54),
  [140] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(53),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script_post_response, 2, 0, 0),
  [145] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_script_post_response, 2, 0, 0),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_meta, 2, 0, 0),
  [149] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_meta, 2, 0, 0),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body_xml, 2, 0, 0),
  [153] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_body_xml, 2, 0, 0),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body_text, 2, 0, 0),
  [157] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_body_text, 2, 0, 0),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text_block, 3, 0, 0),
  [161] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_text_block, 3, 0, 0),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body_json, 2, 0, 0),
  [165] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_body_json, 2, 0, 0),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_auth_digest, 2, 0, 0),
  [169] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_auth_digest, 2, 0, 0),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body_graphql, 2, 0, 0),
  [173] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_body_graphql, 2, 0, 0),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dictionary, 3, 0, 0),
  [177] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dictionary, 3, 0, 0),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_auth_oauth2, 2, 0, 0),
  [181] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_auth_oauth2, 2, 0, 0),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_auth_basic, 2, 0, 0),
  [185] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_auth_basic, 2, 0, 0),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_auth_awsv4, 2, 0, 0),
  [189] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_auth_awsv4, 2, 0, 0),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_headers, 2, 0, 0),
  [193] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_headers, 2, 0, 0),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dictionary, 2, 0, 0),
  [197] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dictionary, 2, 0, 0),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_http, 2, 0, 0),
  [201] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_http, 2, 0, 0),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_docs, 2, 0, 0),
  [205] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_docs, 2, 0, 0),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tests, 2, 0, 0),
  [209] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tests, 2, 0, 0),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script_pre_request, 2, 0, 0),
  [213] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_script_pre_request, 2, 0, 0),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assert, 2, 0, 0),
  [217] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assert, 2, 0, 0),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_auth_bearer, 2, 0, 0),
  [221] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_auth_bearer, 2, 0, 0),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vars_post_response, 2, 0, 0),
  [225] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_vars_post_response, 2, 0, 0),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vars_pre_request, 2, 0, 0),
  [229] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_vars_pre_request, 2, 0, 0),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body, 2, 0, 0),
  [233] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_body, 2, 0, 0),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body_multipart_form, 2, 0, 0),
  [237] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_body_multipart_form, 2, 0, 0),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body_form_urlencoded, 2, 0, 0),
  [241] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_body_form_urlencoded, 2, 0, 0),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_auths, 1, 0, 0),
  [245] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_auths, 1, 0, 0),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bodies, 1, 0, 0),
  [249] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bodies, 1, 0, 0),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vars, 1, 0, 0),
  [253] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_vars, 1, 0, 0),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scripts, 1, 0, 0),
  [257] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scripts, 1, 0, 0),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body_graphql_vars, 2, 0, 0),
  [261] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_body_graphql_vars, 2, 0, 0),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query, 2, 0, 0),
  [265] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_query, 2, 0, 0),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body_sparql, 2, 0, 0),
  [269] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_body_sparql, 2, 0, 0),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [275] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text, 1, 0, 0),
  [279] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [281] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [285] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_text_repeat1, 2, 0, 0), SHIFT_REPEAT(36),
  [288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_text_repeat1, 2, 0, 0),
  [290] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_text_repeat1, 2, 0, 0), SHIFT_REPEAT(40),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [295] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_dictionary_repeat1, 2, 0, 0),
  [301] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_dictionary_repeat1, 2, 0, 0), SHIFT_REPEAT(76),
  [304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__text, 2, 0, 0),
  [306] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__text, 2, 0, 0),
  [308] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__text, 3, 0, 0),
  [310] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__text, 3, 0, 0),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [316] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pair, 3, 0, 0),
  [318] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pair, 3, 0, 0),
  [320] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_http_verb, 1, 0, 0),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [326] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
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
