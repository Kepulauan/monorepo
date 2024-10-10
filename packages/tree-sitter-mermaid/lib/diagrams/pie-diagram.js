/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

const helpers = require('../helpers');
const { kwd } = helpers;

const tokens = {
  pie_showdata: kwd('showdata'),
  pie_title: /[^\n;#]+/,
  pie_label: /"[^"]*"/,
  pie_value: /[\s]*[\d]+(\.[\d]+)?/,
};

const rules = helpers.rules({
  /// pie chart
  diagram_pie: ($) =>
    seq(
      kwd('pie'),
      optional($.pie_showdata),
      repeat(choice($._pie_stmt, $._newline)),
    ),

  _pie_stmt: ($) => choice($.pie_stmt_title, $.pie_stmt_element),

  pie_stmt_title: ($) => seq(kwd('title'), optional($.pie_title)),

  pie_stmt_element: ($) => seq($.pie_label, ':', $.pie_value),
});

module.exports = { rules, tokens };
