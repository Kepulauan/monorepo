/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

const helpers = require('../helpers');
const { kwd } = helpers;

const tokens = {
  gantt_meta_format: /[^#\n;]+/,
  // gantt_task_text: /[^#:\n;]+/,
  gantt_task_text: repeat1(/[^#:\n;\s]+/),
  gantt_task_data: /[^#:\n;]+/,
};

const rules = helpers.rules({
  /// Gantt chart
  diagram_gantt: ($) =>
    seq(kwd('gantt'), $._newline, repeat(choice($._gantt_stmt, $._newline))),

  _gantt_stmt: ($) =>
    choice(
      $.gantt_stmt_dateformat,
      $.gantt_stmt_inclusiveenddates,
      $.gantt_stmt_topaxis,
      $.gantt_stmt_axisformat,
      $.gantt_stmt_includes,
      $.gantt_stmt_excludes,
      $.gantt_stmt_todaymarker,
      $.gantt_stmt_title,
      $.gantt_stmt_section,
      $.gantt_stmt_task,
      // $.gantt_stmt_click,
    ),

  gantt_stmt_dateformat: ($) =>
    seq(kwd('dateformat'), alias($.gantt_meta_format, $.gantt_date_format)),
  gantt_stmt_inclusiveenddates: ($) =>
    seq(
      kwd('inclusiveenddates'),
      alias($.gantt_meta_format, $.gantt_end_dates),
    ),
  gantt_stmt_topaxis: ($) =>
    seq(kwd('topaxis'), alias($.gantt_meta_format, $.gantt_top_axis)),
  gantt_stmt_axisformat: ($) =>
    seq(kwd('axisformat'), alias($.gantt_meta_format, $.gantt_axis_format)),
  gantt_stmt_includes: ($) =>
    seq(kwd('includes'), alias($.gantt_meta_format, $.gantt_includes)),
  gantt_stmt_excludes: ($) =>
    seq(kwd('excludes'), alias($.gantt_meta_format, $.gantt_excludes)),
  gantt_stmt_todaymarker: ($) =>
    seq(kwd('todaymarker'), alias($.gantt_meta_format, $.gantt_today_marker)),
  gantt_stmt_title: ($) =>
    seq(kwd('title'), alias($.gantt_meta_format, $.gantt_title)),
  gantt_stmt_section: ($) =>
    seq(kwd('section'), alias($.gantt_meta_format, $.gantt_section)),

  gantt_stmt_task: ($) => seq($.gantt_task_text, ':', $.gantt_task_data),
});

module.exports = { rules, tokens };
