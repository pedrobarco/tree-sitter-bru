module.exports = grammar({
  name: "bru",

  rules: {
    BruFile: ($) =>
      repeat(
        choice(
          $.meta,
          $.http,

          $.query,
          $.headers,
          $.auths,

          $.bodies,
          $.varsandassert,
          $.script,

          $.tests,
          $.docs,
        ),
      ),

    auths: ($) =>
      choice(
        $.authawsv4,
        $.authbasic,
        $.authbearer,
        $.authdigest,
        $.authOAuth2,
      ),

    bodies: ($) =>
      choice(
        $.bodyjson,
        $.bodytext,
        $.bodyxml,
        $.bodysparql,
        $.bodygraphql,
        $.bodygraphqlvars,
        $.bodyforms,
        $.body,
      ),

    bodyforms: ($) => choice($.bodyformurlencoded, $.bodymultipart),

    nl: ($) => choice(/\r?\n/, "\n"),

    st: ($) => choice(" ", "\t"),

    tagend: ($) => seq($.nl, "}"),

    optionalnl: ($) => seq(optional($.tagend), $.nl),

    keychar: ($) => /[^\r\n:{}\t ]/,

    valuechar: ($) => /[^{}\r\n]/,

    multilinetextblock: ($) =>
      seq("'''", repeat(choice(/[^']+/, "''", "'")), "'''"),

    dictionary: ($) =>
      seq(
        repeat($.st),

        "{",

        optional($.pairlist),
        $.tagend,
      ),

    pairlist: ($) =>
      seq(
        optional($.optionalnl),
        $.pair,
        repeat(seq(optional($.tagend), repeat(seq($.st, $.nl)), $.pair)),
        repeat(optional($.tagend), $.st),
      ),

    pair: ($) =>
      seq(
        repeat($.st),
        $.key,
        repeat($.st),
        ":",
        repeat($.st),
        $.value,
        repeat($.st),
      ),

    key: ($) => repeat1($.keychar),

    value: ($) => choice($.multilinetextblock, repeat1($.valuechar)),

    assertdictionary: ($) =>
      seq(
        repeat($.st),

        "{",

        optional($.assertpairlist),
        $.tagend,
      ),

    assertpairlist: ($) =>
      seq(
        optional($.optionalnl),
        $.assertpair,
        repeat(seq(optional($.tagend), repeat(seq($.st, $.nl)), $.assertpair)),
        repeat(optional($.tagend), $.st),
      ),

    assertpair: ($) =>
      seq(
        repeat($.st),
        $.assertkey,
        repeat($.st),
        ":",
        repeat($.st),
        $.value,
        repeat($.st),
      ),

    assertkey: ($) => repeat1($.assertkeychar),

    assertkeychar: ($) => choice(/[^\r\n:{}\t ]/, $.assertkeychar),

    textblock: ($) => seq($.textline, repeat(seq($.tagend, $.nl, $.textline))),

    textline: ($) => repeat($.textchar),

    textchar: ($) => /[^{}\r\n]/,
  },
});
