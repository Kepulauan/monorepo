/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

const helpers = require('../helpers');
const { kwd, sep } = helpers;

const tokens = {
  /// tokens in flow chart
  flowchart_direction_lr: choice(kwd('lr'), kwd('br'), '>'),
  flowchart_direction_rl: choice(kwd('rl'), '<'),
  flowchart_direction_tb: choice(kwd('tb'), kwd('td'), 'v'),

  flowchart_direction_bt: choice(kwd('bt'), '^'),
  flow_text_literal: repeat1(/[^-|}\])\s\n;/\\]+/),
  flow_text_quoted: /"[^"\n]*"/,

  // 適当
  flow_link_arrow: choice(
    /[xo<]?--+[-xo>]/,
    /[xo<]?==+[=xo>]/,
    /[xo<]?-?\.+-[xo>]/,
  ),
  flow_link_arrow_start: choice(/[xo<]?--+/, /[xo<]?==+/, /[xo<]?-\.+/),
};

const rules = helpers.rules({
  diagram_flow: ($) =>
    seq(
      kwd('flowchart'),
      choice($._flowchart_direction, $._newline),
      optional($._newline),
      sep($._flow_stmt, choice($._newline, ';')),
      optional(choice($._newline, ';')),
    ),
  _flowchart_direction: ($) =>
    choice(
      $.flowchart_direction_lr,
      $.flowchart_direction_rl,
      $.flowchart_direction_tb,
      $.flowchart_direction_bt,
    ),

  _flow_stmt: ($) =>
    choice(
      $.flow_stmt_vertice,
      // $.flow_stmt_style,
      // $.flow_stmt_linkstyle,
      // $.flow_stmt_classdef,
      // $.flow_stmt_class,
      $.flow_stmt_subgraph,
      $.flow_stmt_direction,
    ),

  flow_stmt_direction: ($) => seq(kwd('direction'), $._flowchart_direction),

  flow_stmt_vertice: ($) => sep($.flow_node, $._flow_link),

  flow_node: ($) => sep($.flow_vertex, '&'),

  _flow_link: ($) =>
    choice(
      $.flow_link_simplelink,
      $.flow_link_arrowtext,
      $.flow_link_middletext,
    ),

  flow_link_simplelink: ($) => seq($.flow_link_arrow),
  flow_link_arrowtext: ($) =>
    seq($.flow_link_arrow, '|', $.flow_arrow_text, '|'),
  flow_link_middletext: ($) =>
    seq($.flow_link_arrow_start, $.flow_arrow_text, $.flow_link_arrow),
  flow_arrow_text: ($) => repeat1($._alpha_num_token),

  flow_vertex_id: ($) => $._alpha_num_token,

  flow_vertex: ($) => seq($.flow_vertex_id, optional($._flow_vertex_kind)),
  _flow_vertex_kind: ($) =>
    choice(
      $.flow_vertex_square,
      $.flow_vertex_circle,
      $.flow_vertex_ellipse,
      $.flow_vertex_stadium,
      $.flow_vertex_subroutine,
      $.flow_vertex_rect,
      $.flow_vertex_cylinder,
      $.flow_vertex_round,
      $.flow_vertex_diamond,
      $.flow_vertex_hexagon,
      $.flow_vertex_odd,
      $.flow_vertex_trapezoid,
      $.flow_vertex_inv_trapezoid,
      $.flow_vertex_leanright,
      $.flow_vertex_leanleft,
    ),
  flow_vertex_square: ($) => seq('[', $._flow_text, ']'),
  flow_vertex_circle: ($) => seq('((', $._flow_text, '))'),
  flow_vertex_ellipse: ($) => seq('(-', $._flow_text, '-)'),
  flow_vertex_stadium: ($) => seq('([', $._flow_text, '])'),
  flow_vertex_subroutine: ($) => seq('[[', $._flow_text, ']]'),
  flow_vertex_rect: ($) => seq('[|', $._flow_text, '|]'),
  flow_vertex_cylinder: ($) => seq('[(', $._flow_text, ')]'),
  flow_vertex_round: ($) => seq('(', $._flow_text, ')'),
  flow_vertex_diamond: ($) => seq('{', $._flow_text, '}'),
  flow_vertex_hexagon: ($) => seq('{{', $._flow_text, '}}'),
  flow_vertex_odd: ($) => seq('>', $._flow_text, ']'),
  flow_vertex_trapezoid: ($) => seq('[/', $._flow_text, '\\]'),
  flow_vertex_inv_trapezoid: ($) => seq('[\\', $._flow_text, '/]'),
  flow_vertex_leanright: ($) => seq('[/', $._flow_text, '/]'),
  flow_vertex_leanleft: ($) => seq('[\\', $._flow_text, '\\]'),
  _flow_text: ($) => choice($.flow_text_literal, $.flow_text_quoted),

  flow_stmt_subgraph: ($) =>
    seq(
      'subgraph',
      optional(
        choice(
          seq($.flow_vertex_id, '[', $.flow_vertex_text, ']'),
          seq($.flow_vertex_text),
        ),
      ),
      choice(';', $._newline),
      optional($.flow_stmt_subgraph_inner),
      'end',
    ),
  flow_stmt_subgraph_inner: ($) =>
    repeat1(seq($._flow_stmt, choice($._newline, ';'))),
  flow_vertex_text: ($) => repeat1($._alpha_num_token),
});

module.exports = { rules, tokens };
