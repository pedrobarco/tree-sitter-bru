/// <reference types="tree-sitter-cli/dsl" />
module.exports = grammar({
  name: "bru",

  extras: ($) => [$.comment, $._nl, $._s],

  rules: {
    document: ($) =>
      repeat(
        choice(
          $.meta,
          $.http,
          $.query,
          $.headers,
          $.auths,
          $.bodies,
          $.vars,
          $.assert,
          $.scripts,
          $.tests,
          $.docs,
        ),
      ),

    meta: ($) => seq(alias("meta", $.keyword), $.dictionary),

    http: ($) => seq(alias($.http_verb, $.keyword), $.dictionary),
    http_verb: () =>
      choice(
        "get",
        "post",
        "put",
        "delete",
        "patch",
        "options",
        "head",
        "connect",
        "trace",
      ),

    query: ($) => seq(alias("query", $.keyword), $.dictionary),

    headers: ($) => seq(alias("headers", $.keyword), $.dictionary),

    auths: ($) =>
      choice(
        $.auth_awsv4,
        $.auth_basic,
        $.auth_bearer,
        $.auth_digest,
        $.auth_oauth2,
      ),
    auth_awsv4: ($) => seq(alias("auth:awsv4", $.keyword), $.dictionary),
    auth_basic: ($) => seq(alias("auth:basic", $.keyword), $.dictionary),
    auth_bearer: ($) => seq(alias("auth:bearer", $.keyword), $.dictionary),
    auth_digest: ($) => seq(alias("auth:digest", $.keyword), $.dictionary),
    auth_oauth2: ($) => seq(alias("auth:oauth2", $.keyword), $.dictionary),

    bodies: ($) =>
      choice(
        $.body_json,
        $.body_text,
        $.body_xml,
        $.body_sparql,
        $.body_graphql,
        $.body_graphql_vars,
        $.body_form_urlencoded,
        $.body_multipart_form,
        $.body,
      ),
    body_json: ($) => seq(alias("body:json", $.keyword), $.text_block),
    body_text: ($) => seq(alias("body:text", $.keyword), $.text_block),
    body_xml: ($) => seq(alias("body:xml", $.keyword), $.text_block),
    body_sparql: ($) => seq(alias("body:sparql", $.keyword), $.text_block),
    body_graphql: ($) => seq(alias("body:graphql", $.keyword), $.text_block),
    body_graphql_vars: ($) =>
      seq(alias("body:graphql:vars", $.keyword), $.text_block),
    body_form_urlencoded: ($) =>
      seq(alias("body:form-urlencoded", $.keyword), $.dictionary),
    body_multipart_form: ($) =>
      seq(alias("body:multipart-form", $.keyword), $.dictionary),
    body: ($) => seq(alias("body", $.keyword), $.text_block),

    vars: ($) => choice($.vars_pre_request, $.vars_post_response),
    vars_pre_request: ($) =>
      seq(alias("vars:pre-request", $.keyword), $.dictionary),
    vars_post_response: ($) =>
      seq(alias("vars:post-response", $.keyword), $.dictionary),

    assert: ($) => seq(alias("assert", $.keyword), $.dictionary),

    scripts: ($) => choice($.script_pre_request, $.script_post_response),
    script_pre_request: ($) =>
      seq(alias("script:pre-request", $.keyword), $.text_block),
    script_post_response: ($) =>
      seq(alias("script:post-response", $.keyword), $.text_block),

    tests: ($) => seq(alias("tests", $.keyword), $.text_block),
    docs: ($) => seq(alias("docs", $.keyword), $.text_block),

    dictionary: ($) => seq("{", repeat($.pair), "}"),
    pair: ($) => seq($.key, ":", $.value),
    key: () => /[^}\s:]+/,
    value: () => /[^\s][^\n]*/,

    text_block: ($) => seq("{", $.text, "}"),
    text: ($) => repeat1(choice($._text, $._any)),
    _text: ($) => seq("{", repeat(choice($._text, $._any)), "}"),

    _any: () => /[^{}]+/,
    _nl: () => /\r?\n/,
    _s: () => /\s+/,

    comment: () => token(seq("#", /.*/)),
  },
});
