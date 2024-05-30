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

    meta: ($) => seq("meta", $.dictionary),

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
    get: ($) => seq("get", $.dictionary),
    post: ($) => seq("post", $.dictionary),
    put: ($) => seq("put", $.dictionary),
    delete: ($) => seq("delete", $.dictionary),
    patch: ($) => seq("patch", $.dictionary),
    options: ($) => seq("options", $.dictionary),
    head: ($) => seq("head", $.dictionary),
    connect: ($) => seq("connect", $.dictionary),
    trace: ($) => seq("trace", $.dictionary),

    query: ($) => seq("query", $.dictionary),

    headers: ($) => seq("headers", $.dictionary),

    auths: ($) =>
      choice(
        $.auth_awsv4,
        $.auth_basic,
        $.auth_bearer,
        $.auth_digest,
        $.auth_oauth2,
      ),
    auth_awsv4: ($) => seq("auth:awsv4", $.dictionary),
    auth_basic: ($) => seq("auth:basic", $.dictionary),
    auth_bearer: ($) => seq("auth:bearer", $.dictionary),
    auth_digest: ($) => seq("auth:digest", $.dictionary),
    auth_oauth2: ($) => seq("auth:oauth2", $.dictionary),

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
    body_json: ($) => seq("body:json", $.block_content),
    body_text: ($) => seq("body:text", $.block_content),
    body_xml: ($) => seq("body:xml", $.block_content),
    body_sparql: ($) => seq("body:sparql", $.block_content),
    body_graphql: ($) => seq("body:graphql", $.block_content),
    body_graphql_vars: ($) => seq("body:graphql:vars", $.block_content),
    body_form_urlencoded: ($) => seq("body:form-urlencoded", $.block_content),
    body_multipart_form: ($) => seq("body:multipart", $.block_content),
    body: ($) => seq("body", $.block_content),

    vars: ($) => choice($.vars_pre_request, $.vars_post_response),
    vars_pre_request: ($) => seq("vars:pre-request", $.dictionary),
    vars_post_response: ($) => seq("vars:post-response", $.dictionary),

    // TODO: refactor into assert dictionary
    assert: ($) => seq("assert", $.block_content),

    scripts: ($) => choice($.script_pre_request, $.script_post_response),
    script_pre_request: ($) => seq("script:pre-request", $.block_content),
    script_post_response: ($) => seq("script:post-response", $.block_content),

    tests: ($) => seq("tests", $.block_content),
    docs: ($) => seq("docs", $.block_content),

    dictionary: ($) => seq("{", repeat1($.pair), "}"),
    pair: ($) => seq($.key, ":", $.value, optional($._nl)),
    key: () => /[^}\s:]+/,
    value: () => /[^\s][^\n]*/,

    block_content: ($) => seq("{", repeat(choice($._raw_content, $._any)), "}"),
    _raw_content: ($) => seq("{", repeat(choice($._raw_content, $._any)), "}"),

    _any: () => /[^{}]+/,
    _nl: () => /\r?\n/,
  },
});
