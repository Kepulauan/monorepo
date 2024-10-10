/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

const helpers = require('../helpers');
const { kwd, optseq, sep } = helpers;

const tokens = {
  state_name: choice(
    '[*]', // initial/final state
    /[_a-zA-Z0-9]+/,
  ),
  state_arrow: '-->',
  state_description: /[^:\n;]+/,
  state_hide_empty_description: kwd('hide empty description'),
  state_id: /[^:\n\s\-\{]+/,
  state_division: '--',
  state_annotation_fork: choice(
    token.immediate(seq('<<', kwd('fork'), '>>')),
    token.immediate(seq('[[', kwd('fork'), ']]')),
  ),
  state_annotation_join: choice(
    token.immediate(seq('<<', kwd('join'), '>>')),
    token.immediate(seq('[[', kwd('join'), ']]')),
  ),
  state_annotation_choice: choice(
    token.immediate(seq('<<', kwd('choice'), '>>')),
    token.immediate(seq('[[', kwd('choice'), ']]')),
  ),

  state_direction_tb: kwd('direction tb'),
  state_direction_bt: kwd('direction bt'),
  state_direction_rl: kwd('direction rl'),
  state_direction_lr: kwd('direction lr'),
};

const rules = helpers.rules({
  /// state diagram
  diagram_state: ($) =>
    seq(
      choice(kwd('stateDiagram'), kwd('stateDiagram-v2')),
      optional($._newline),
      sep($._state_stmt, $._newline),
      optional($._newline),
    ),
  _state_stmt: ($) =>
    choice(
      // s1
      // s1: foo
      // state "foo" as s1
      $.state_stmt_simple,

      // s1 --> s2
      $.state_stmt_arrow,

      // state s1 { ... }
      $.state_stmt_composite,

      // state s1 <<join>>
      $.state_stmt_annotation,
      $.state_stmt_hide_empty_description,
      $.state_division,
      $.state_note,
      $._state_direction,
    ),

  _state_direction: ($) =>
    choice(
      $.state_direction_tb,
      $.state_direction_bt,
      $.state_direction_rl,
      $.state_direction_lr,
    ),

  state_stmt_simple: ($) =>
    choice(
      seq($.state_name, optseq(':', $.state_description)),
      seq(kwd('state '), $.state_alias),
    ),

  state_stmt_arrow: ($) =>
    seq(
      $.state_name,
      $.state_arrow,
      $.state_name,
      optseq(':', $.state_description),
    ),

  state_stmt_composite: ($) =>
    seq(
      kwd('state '),
      choice($.state_name, $.state_alias),
      optseq(kwd('as'), $.state_id),
      $.state_composite_body,
    ),
  state_composite_body: ($) =>
    seq(
      '{',
      optional($._newline),
      sep($._state_stmt, optional($._newline)),
      optional($._newline),
      '}',
    ),

  state_stmt_annotation: ($) =>
    seq(kwd('state '), $.state_name, $._state_annotation),

  state_alias: ($) =>
    seq(alias($._dquote_string, $.state_description), kwd('as'), $.state_id),

  state_stmt_hide_empty_description: ($) => $.state_hide_empty_description,

  _state_annotation: ($) =>
    choice(
      $.state_annotation_fork,
      $.state_annotation_join,
      $.state_annotation_choice,
    ),

  state_note: ($) =>
    seq(
      kwd('note '),
      $.state_note_placement,
      $.state_name,
      choice(
        seq(':', optional(alias($.state_description, $.note_content))),
        // seq($._newline, alias(repeat(seq(/[^\n]+/, $._newline)), $.note_content), optional(/\s+/), kwd("end note"))
      ),
    ),
  state_note_placement: ($) =>
    choice($.note_placement_left, $.note_placement_right),
});

module.exports = { tokens, rules };
