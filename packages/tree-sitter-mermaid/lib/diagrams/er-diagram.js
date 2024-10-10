/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

const helpers = require('../helpers');
const { kwd, sep } = helpers;

const tokens = {
  _er_word: /"[^"]*"/,
  _er_alphanum: /[A-Za-z][A-Za-z0-9\-_]*/,

  er_cardinarity_zero_or_one: choice('|o', 'o|'),
  er_cardinarity_zero_or_more: choice('}o', 'o{'),
  er_cardinarity_one_or_more: choice('}|', '|{'),
  er_cardinarity_only_one: '||',
  er_reltype_non_identifying: choice('..', '.-', '-.'),
  er_reltype_identifying: '--',

  er_attribute_key_type_pk: kwd('pk'),
  er_attribute_key_type_fk: kwd('fk'),
};

const rules = helpers.rules({
  /// ER diagram
  diagram_er: ($) =>
    seq(
      kwd('erdiagram'),
      optional($._newline),
      sep($._er_stmt, $._newline),
      optional($._newline),
    ),

  _er_stmt: ($) =>
    choice($.er_stmt_entity, $.er_stmt_entity_relation, $.er_stmt_entity_block),

  er_stmt_entity: ($) => $.er_entity_name,

  er_stmt_entity_relation: ($) =>
    seq($.er_entity_name, $.er_relation, $.er_entity_name, ':', $.er_role),
  er_entity_name: ($) => $._er_alphanum,
  er_relation: ($) => seq($._er_cardinarity, $._er_reltype, $._er_cardinarity),
  _er_cardinarity: ($) =>
    choice(
      $.er_cardinarity_zero_or_one,
      $.er_cardinarity_zero_or_more,
      $.er_cardinarity_one_or_more,
      $.er_cardinarity_only_one,
    ),
  _er_reltype: ($) =>
    choice($.er_reltype_non_identifying, $.er_reltype_identifying),
  er_role: ($) => choice($._er_word, $._er_alphanum),

  er_stmt_entity_block: ($) =>
    seq(
      $.er_entity_name,
      '{',
      $._newline,
      optional($.er_stmt_entity_block_inner),
      '}',
    ),

  er_stmt_entity_block_inner: ($) => repeat1($.er_attribute),

  er_attribute: ($) =>
    seq(
      $.er_attribute_type,
      $.er_attribute_name,
      optional($._er_attribute_key_type),
      optional($.er_attribute_comment),
      $._newline,
    ),

  er_attribute_type: ($) => $._er_alphanum,
  er_attribute_name: ($) => $._er_alphanum,

  _er_attribute_key_type: ($) =>
    choice($.er_attribute_key_type_pk, $.er_attribute_key_type_fk),

  er_attribute_comment: ($) => $._er_word,
});

module.exports = { tokens, rules };
