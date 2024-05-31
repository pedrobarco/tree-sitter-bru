/// <reference types="tree-sitter-cli/dsl" />
module.exports = grammar({
  name: "bru",

  extras: () => [
    /\s/, // whitespace
  ],

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

    meta: ($) => seq("meta", $.dictionary_block),

    http: ($) =>
      choice(
        $.get,
        $.post,
        $.put,
        $.delete,
        $.patch,
        $.options,
        $.head,
        $.connect,
        $.trace,
      ),
    get: ($) => seq("get", $.dictionary_block),
    post: ($) => seq("post", $.dictionary_block),
    put: ($) => seq("put", $.dictionary_block),
    delete: ($) => seq("delete", $.dictionary_block),
    patch: ($) => seq("patch", $.dictionary_block),
    options: ($) => seq("options", $.dictionary_block),
    head: ($) => seq("head", $.dictionary_block),
    connect: ($) => seq("connect", $.dictionary_block),
    trace: ($) => seq("trace", $.dictionary_block),

    query: ($) => seq("query", $.dictionary_block),

    headers: ($) => seq("headers", $.dictionary_block),

    auths: ($) =>
      choice(
        $.auth_awsv4,
        $.auth_basic,
        $.auth_bearer,
        $.auth_digest,
        $.auth_oauth2,
      ),
    auth_awsv4: ($) => seq("auth:awsv4", $.dictionary_block),
    auth_basic: ($) => seq("auth:basic", $.dictionary_block),
    auth_bearer: ($) => seq("auth:bearer", $.dictionary_block),
    auth_digest: ($) => seq("auth:digest", $.dictionary_block),
    auth_oauth2: ($) => seq("auth:oauth2", $.dictionary_block),

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
    body_json: ($) => seq("body:json", $.text_block),
    body_text: ($) => seq("body:text", $.text_block),
    body_xml: ($) => seq("body:xml", $.text_block),
    body_sparql: ($) => seq("body:sparql", $.text_block),
    body_graphql: ($) => seq("body:graphql", $.text_block),
    body_graphql_vars: ($) => seq("body:graphql:vars", $.text_block),
    body_form_urlencoded: ($) =>
      seq("body:form-urlencoded", $.dictionary_block),
    body_multipart_form: ($) => seq("body:multipart-form", $.dictionary_block),
    body: ($) => seq("body", $.text_block),

    vars: ($) => choice($.vars_pre_request, $.vars_post_response),
    vars_pre_request: ($) => seq("vars:pre-request", $.dictionary_block),
    vars_post_response: ($) => seq("vars:post-response", $.dictionary_block),

    assert: ($) => seq("assert", $.dictionary_block),

    scripts: ($) => choice($.script_pre_request, $.script_post_response),
    script_pre_request: ($) => seq("script:pre-request", $.text_block),
    script_post_response: ($) => seq("script:post-response", $.text_block),

    tests: ($) => seq("tests", $.text_block),
    docs: ($) => seq("docs", $.text_block),

    dictionary_block: ($) => seq("{", $.dictionary, "}"),
    dictionary: ($) => repeat1($.pair),
    pair: ($) => seq($.key, ":", $.value, optional($._nl)),
    key: () => /[^}\s:]+/,
    value: () => /[^\s][^\n]*/,

    text_block: ($) => seq("{", $.text, "}"),
    text: ($) => repeat1(choice($._text, $._any)),
    _text: ($) => seq("{", repeat(choice($._text, $._any)), "}"),

    _any: () => /[^{}]+/,
    _nl: () => /\r?\n/,
  },
});
