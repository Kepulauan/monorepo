/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

const helpers = require('../helpers');
const { kwd, optseq, sep } = helpers;

const tokens = {
  /// tokens in class diagram
  _class_name: /[a-zA-Z0-9_]+/,
  _alpha_num_token: /[a-zA-Z0-9_~!?]+/,
  _bquote_string: /`[^`]+`/,
  _dquote_string: /"[^"]+"/,

  class_reltype_aggregation: 'o',
  class_reltype_extension: choice('<|', '|>'),
  class_reltype_composition: '*',
  class_reltype_dependency: choice('<', '>'),
  class_linetype_solid: '--',
  class_linetype_dotted: '..',
  class_label: /[^:\n;]+/,
};

const rules = helpers.rules({
  diagram_class: ($) =>
    seq(
      choice(kwd('classDiagram-v2'), kwd('classDiagram')),
      $._newline,
      sep($._class_stmt, $._newline),
      optional($._newline),
      // repeat(choice($._class_stmt, $._newline))
    ),

  _class_stmt: ($) =>
    choice(
      $.class_stmt_relation,
      $.class_stmt_class,
      $.class_stmt_method,
      $.class_stmt_annotation,
      // TODO
      // $.class_stmt_click,
      // $.class_stmt_css,
    ),

  class_stmt_relation: ($) =>
    seq(
      $.class_name,
      optional(alias($._dquote_string, $.cardinality)),
      $.class_relation,
      optional(alias($._dquote_string, $.cardinality)),
      $.class_name,
      optseq(':', optional($.class_label)),
    ),
  class_name: ($) => seq($.class_name_body, optional($.class_generics)),
  class_name_body: ($) =>
    seq(repeat($._class_name), choice($._class_name, $._bquote_string)),
  class_generics: ($) => seq('~', alias(/[^~]+/, $.class_name), '~'),
  class_relation: ($) =>
    seq(
      optional($._class_reltype),
      $._class_linetype,
      optional($._class_reltype),
    ),
  _class_reltype: ($) =>
    choice(
      $.class_reltype_aggregation,
      $.class_reltype_extension,
      $.class_reltype_composition,
      $.class_reltype_dependency,
    ),
  _class_linetype: ($) =>
    choice($.class_linetype_solid, $.class_linetype_dotted),

  class_stmt_class: ($) =>
    seq(
      'class',
      $.class_name,
      optseq(':::', alias($._alpha_num_token, $.class_style_name)),
      optseq(
        '{',
        optional($._newline),
        sep(choice($.class_method_line, $.class_annotation_line), $._newline),
        optional($._newline),
        '}',
      ),
    ),
  class_method_line: ($) =>
    seq(
      optional(
        choice(
          alias('+', $.class_visibility_public),
          alias('-', $.class_visibility_private),
          alias('#', $.class_visibility_protected),
          alias('~', $.class_visibility_internal),
        ),
      ),
      repeat1(choice('(', ')', $._alpha_num_token)),
      optional(
        choice(
          alias('*', $.class_classifier_abstract),
          alias('$', $.class_classifier_static),
        ),
      ),
    ),
  class_annotation_line: ($) =>
    seq('<<', alias($._alpha_num_token, $.annotation), '>>'),

  class_stmt_method: ($) => seq($.class_name, ':', $.class_method_line),

  class_stmt_annotation: ($) =>
    seq('<<', alias($._alpha_num_token, $.annotation), '>>', $.class_name),
  // class_stmt_click: $ => seq(),
  // class_stmt_css: $ => seq(),
});

module.exports = { tokens, rules };
