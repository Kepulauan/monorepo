/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

const helpers = require('../helpers');
const { reserved, sep } = helpers;

const tokens = {
  _mindmap_text: /[^(){}\[\]\n\r]+/,
};

const rules = helpers.rules({
  diagram_mindmap: ($) =>
    seq(
      reserved('mindmap'),
      $._newline,
      // repeat($.mmap_node),
      sep($.mmap_node, $._newline),
      optional($._newline),
    ),

  mmap_node: ($) =>
    seq(
      $._whitespace,
      $.mmap_node_id,
      optional(
        choice(
          $.mmap_node_square,
          $.mmap_node_rounded,
          $.mmap_node_circle,
          $.mmap_node_cloud,
          $.mmap_node_bang,
          $.mmap_node_hexagon,
        ),
      ),
      optional($.mmap_icon),
      optional($.mmap_class),
    ),

  mmap_node_id: ($) => $._mindmap_text,
  mmap_markdown: ($) =>
    prec(1, seq($._md_start, alias(/[^`"]+/, $.md_text), $._md_end)),
  mmap_text: ($) => seq(/[^"][^`]/, $._mindmap_text),

  mmap_node_content: ($) => choice($.mmap_markdown, $.mmap_text),

  mmap_node_square: ($) => seq('[', $.mmap_node_content, ']'),
  mmap_node_rounded: ($) => seq('(', $.mmap_node_content, ')'),
  mmap_node_circle: ($) => seq('((', $.mmap_node_content, '))'),
  mmap_node_cloud: ($) => seq(')', $.mmap_node_content, '('),
  mmap_node_bang: ($) => seq('))', $.mmap_node_content, '(('),
  mmap_node_hexagon: ($) => seq('{{', $.mmap_node_content, '}}'),

  mmap_class: (_) => seq(/\n?\s*:::/, /[_a-zA-Z0-9- ]+/),
  // experimental icon https://mermaid.js.org/syntax/mindmap.html#icons
  mmap_icon: (_) => seq(/\n?\s*::icon\(/, /[^)\n\r]+/, ')'),
});

module.exports = { rules, tokens };
