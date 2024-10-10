/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

const { rules } = require('./helper');

module.exports = rules({
  frontmatter: ($) =>
    seq(
      '---',
      $._newline,
      field('frontmatter', repeat(seq(/.*/, $._newline))),
      '---',
    ),
});
