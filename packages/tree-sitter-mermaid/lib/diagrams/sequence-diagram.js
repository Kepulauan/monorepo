/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

const helpers = require('../helpers');
const { kwd, sep } = helpers;

const tokens = {
  sequence__solid_arrow: '->>',
  sequence__dotted_arrow: '-->>',
  sequence__solid_open_arrow: '->',
  sequence__dotted_open_arrow: '-->',
  sequence__solid_cross: '-x',
  sequence__dotted_cross: '--x',
  sequence__solid_point: '-)',
  sequence__dotted_point: '--)',
  sequence__sequence_signal_plus_sign: '+',
  sequence__sequence_signal_minus_sign: '-',
  sequence__note_placement_left: kwd('left of'),
  sequence__note_placement_right: kwd('right of'),
  // rest: /(?:[:]?(?:no)?wrap:)?[^#\n;]*/,
  _sequence_rest_text: /[^#\n;]+/,
  // tree-sitter doesn't support negative lookahead
  // TODO: Replicate more precise rule
  // sequence_actor: /[^\+\->:\n,;]+((?!(\-x|\-\-x|\-\)|\-\-\)))[\-]*[^\+\->:\n,;]+)*/,
  _sequence_actor_word: /[^ \+\->:\n,;]+/,
};

const rules = helpers.rules({
  /// sequence diagram
  diagram_sequence: ($) =>
    seq(kwd('sequenceDiagram'), repeat(choice($._sequence_stmt, $._newline))),

  _sequence_stmt: ($) =>
    choice(
      $.sequence_stmt_participant,
      $.sequence_stmt_actor,
      $.sequence_stmt_signal,
      $.sequence_stmt_autonumber,
      $.sequence_stmt_activate,
      $.sequence_stmt_deactivate,
      $.sequence_stmt_note,
      $.sequence_stmt_links,
      $.sequence_stmt_link,
      $.sequence_stmt_properties,
      $.sequence_stmt_details,
      $.sequence_stmt_title,
      $.sequence_stmt_loop,
      $.sequence_stmt_rect,
      $.sequence_stmt_opt,
      $.sequence_stmt_alt,
      $.sequence_stmt_par,
    ),

  _sequence_participant_type: ($) => choice(kwd('participant'), kwd('actor')),

  sequence_stmt_participant: ($) =>
    seq(
      $._sequence_participant_type,
      $.sequence_actor,
      optional(seq(kwd('as'), alias($._sequence_rest_text, $.sequence_alias))),
      $._newline,
    ),
  sequence_stmt_actor: ($) =>
    seq(
      kwd('sequence_actor'),
      $.sequence_actor,
      optional(seq(kwd('as'), alias($._sequence_rest_text, $.sequence_alias))),
      $._newline,
    ),
  sequence_actor: ($) => repeat1($._sequence_actor_word),

  sequence_stmt_signal: ($) =>
    seq(
      $.sequence_actor,
      $.sequence_signal_type,
      optional(
        choice($.sequence_signal_plus_sign, $.sequence_signal_minus_sign),
      ),
      $.sequence_actor,
      ':',
      $.sequence_text,
      $._newline,
    ),
  sequence_signal_type: ($) =>
    choice(
      $.sequence__solid_arrow,
      $.sequence__dotted_arrow,
      $.sequence__solid_open_arrow,
      $.sequence__dotted_open_arrow,
      $.sequence__solid_cross,
      $.sequence__dotted_cross,
      $.sequence__solid_point,
      $.sequence__dotted_point,
    ),
  sequence_text: ($) => $._sequence_rest_text,

  sequence_stmt_autonumber: (_) => kwd('autonumber'),
  sequence_stmt_activate: ($) =>
    seq(kwd('activate'), $.sequence_actor, $._newline),
  sequence_stmt_deactivate: ($) =>
    seq(kwd('deactivate'), $.sequence_actor, $._newline),

  sequence_stmt_note: ($) =>
    seq(
      kwd('note '),
      choice(
        seq($.sequence_note_placement, $.sequence_actor),
        seq(
          kwd('over'),
          $.sequence_actor,
          optional(seq(',', $.sequence_actor)),
        ),
      ),
      ':',
      $.sequence_text,
      $._newline,
    ),

  sequence_stmt_links: ($) =>
    seq(kwd('links'), $.sequence_actor, ':', $.sequence_text),
  sequence_stmt_link: ($) =>
    seq(kwd('link'), $.sequence_actor, ':', $.sequence_text),
  sequence_stmt_properties: ($) =>
    seq(kwd('properties'), $.sequence_actor, ':', $.sequence_text),
  sequence_stmt_details: ($) =>
    seq(kwd('details'), $.sequence_actor, ':', $.sequence_text),

  sequence_note_placement: ($) =>
    choice($.note_placement_left, $.note_placement_right),

  sequence_stmt_title: ($) =>
    seq(kwd('title'), ':', alias($._sequence_rest_text, $.title), $._newline),

  sequence_stmt_loop: ($) =>
    seq(
      kwd('loop'),
      $.sequence_text,
      $._newline,
      optional(alias($._sequence_subdocument, $.sequence_stmt_loop_inner)),
      kwd('end'),
    ),
  sequence_stmt_rect: ($) =>
    seq(
      kwd('rect'),
      $.sequence_text,
      $._newline,
      optional(alias($._sequence_subdocument, $.sequence_stmt_rect_inner)),
      kwd('end'),
    ),
  sequence_stmt_opt: ($) =>
    seq(
      kwd('opt'),
      $.sequence_text,
      $._newline,
      optional(alias($._sequence_subdocument, $.sequence_stmt_opt_inner)),
      kwd('end'),
    ),
  _sequence_subdocument: ($) => repeat1(choice($._sequence_stmt, $._newline)),

  sequence_stmt_alt: ($) =>
    seq(
      kwd('alt'),
      $.sequence_text,
      $._newline,
      sep(
        alias($._sequence_subdocument, $.sequence_stmt_alt_branch),
        kwd('else'),
      ),
      kwd('end'),
    ),

  sequence_stmt_par: ($) =>
    seq(
      kwd('par'),
      optional($.sequence_text),
      $._newline,
      alias($._sequence_subdocument, $.sequence_stmt_alt_branch),
      repeat(
        seq(
          kwd('and'),
          optional($.sequence_text),
          $._newline,
          alias($._sequence_subdocument, $.sequence_stmt_alt_branch),
        ),
      ),
      kwd('end'),
    ),
});

module.exports = { tokens, rules };
