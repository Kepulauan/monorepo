/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

const klass = require('./lib/diagrams/class-diagram');
const er = require('./lib/diagrams/er-diagram');
const flowchart = require('./lib/diagrams/flowchart-diagram');
const gantt = require('./lib/diagrams/gantt-diagram');
const mindmap = require('./lib/diagrams/mindmap-diagram');
const pie = require('./lib/diagrams/pie-diagram');
const sequence = require('./lib/diagrams/sequence-diagram');
const state = require('./lib/diagrams/state-diagram');

const diagrams = [klass, er, flowchart, gantt, mindmap, pie, sequence, state];
const diagramRules = diagrams.reduce(
  (acc, diagram) => ({ ...acc, ...diagram.rules }),
  {},
);
const diagramTokens = diagrams.reduce(
  (acc, diagram) => ({ ...acc, ...diagram.tokens }),
  {},
);

const tokens = {
  /// common tokens
  _whitespace: /[ \t]+/,
  _newline: /(\n)+/,
  comment: /%%([^\{].*)?\n/,
  _md_start: /"`/,
  _md_end: /`"/,
  type_directive: /[^%}:]*/,
  ...diagramTokens,
};

const tokensFunc = Object.fromEntries(
  Object.entries(tokens).map(([k, v]) => [k, (_) => v]),
);

module.exports = grammar({
  /// meta information
  name: 'mermaid',

  extras: ($) => [$._whitespace, $.comment],

  supertypes: ($) => [
    $._state_direction,
    $._flowchart_direction,

    $._sequence_stmt,
    $._class_stmt,
    $._state_stmt,
    $._gantt_stmt,
    $._pie_stmt,
    $._flow_stmt,
    $._er_stmt,

    $._class_reltype,
    $._class_linetype,
    $._state_annotation,
    $._flow_link,
    $._flow_vertex_kind,
    $._er_cardinarity,
    $._er_reltype,
    $._er_attribute_key_type,
  ],

  rules: {
    /// source file, common
    source_file: ($) =>
      seq(
        repeat(choice($.directive, $._newline)),
        choice(
          $.diagram_class,
          $.diagram_er,
          $.diagram_flow,
          $.diagram_gantt,
          $.diagram_mindmap,
          $.diagram_pie,
          $.diagram_sequence,
          $.diagram_state,
        ),
      ),

    directive: ($) =>
      seq('%%{', $.type_directive, alias(/[^%]*\}%%/, $.arg_directive)),

    ...tokensFunc,
    ...diagramRules,
  },
});
