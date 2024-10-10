#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#ifdef _MSC_VER
#pragma optimize("", off)
#elif defined(__clang__)
#pragma clang optimize off
#elif defined(__GNUC__)
#pragma GCC optimize ("O0")
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 921
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 371
#define ALIAS_COUNT 21
#define TOKEN_COUNT 171
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 10
#define PRODUCTION_ID_COUNT 29

enum ts_symbol_identifiers {
  anon_sym_PERCENT_PERCENT_LBRACE = 1,
  aux_sym_directive_token1 = 2,
  sym__whitespace = 3,
  sym__newline = 4,
  sym_comment = 5,
  sym__md_start = 6,
  sym__md_end = 7,
  sym_type_directive = 8,
  anon_sym_PLUS = 9,
  anon_sym_DASH = 10,
  aux_sym_note_placement_left_token1 = 11,
  aux_sym_note_placement_right_token1 = 12,
  sym__class_name = 13,
  sym__alpha_num_token = 14,
  sym__bquote_string = 15,
  sym__dquote_string = 16,
  sym_class_reltype_aggregation = 17,
  anon_sym_LT_PIPE = 18,
  anon_sym_PIPE_GT = 19,
  anon_sym_STAR = 20,
  anon_sym_LT = 21,
  anon_sym_GT = 22,
  anon_sym_DASH_DASH = 23,
  anon_sym_DOT_DOT = 24,
  aux_sym_class_label_token1 = 25,
  aux_sym__er_word_token1 = 26,
  sym__er_alphanum = 27,
  anon_sym_PIPEo = 28,
  anon_sym_o_PIPE = 29,
  anon_sym_RBRACEo = 30,
  anon_sym_o_LBRACE = 31,
  anon_sym_RBRACE_PIPE = 32,
  anon_sym_PIPE_LBRACE = 33,
  sym_er_cardinarity_only_one = 34,
  anon_sym_DOT_DASH = 35,
  anon_sym_DASH_DOT = 36,
  aux_sym_er_attribute_key_type_pk_token1 = 37,
  aux_sym_er_attribute_key_type_fk_token1 = 38,
  aux_sym_flowchart_direction_lr_token1 = 39,
  aux_sym_flowchart_direction_lr_token2 = 40,
  aux_sym_flowchart_direction_rl_token1 = 41,
  aux_sym_flowchart_direction_tb_token1 = 42,
  aux_sym_flowchart_direction_tb_token2 = 43,
  anon_sym_v = 44,
  aux_sym_flowchart_direction_bt_token1 = 45,
  anon_sym_CARET = 46,
  aux_sym_flow_text_literal_token1 = 47,
  sym_flow_text_quoted = 48,
  aux_sym_flow_link_arrow_token1 = 49,
  aux_sym_flow_link_arrow_token2 = 50,
  aux_sym_flow_link_arrow_token3 = 51,
  aux_sym_flow_link_arrow_start_token1 = 52,
  aux_sym_flow_link_arrow_start_token2 = 53,
  aux_sym_flow_link_arrow_start_token3 = 54,
  aux_sym_gantt_meta_format_token1 = 55,
  aux_sym_gantt_task_text_token1 = 56,
  sym_gantt_task_data = 57,
  sym__mindmap_text = 58,
  aux_sym_pie_showdata_token1 = 59,
  sym_pie_title = 60,
  sym_pie_value = 61,
  sym_sequence__solid_arrow = 62,
  sym_sequence__dotted_arrow = 63,
  sym_sequence__solid_open_arrow = 64,
  anon_sym_DASH_DASH_GT = 65,
  sym_sequence__solid_cross = 66,
  sym_sequence__dotted_cross = 67,
  anon_sym_DASH_RPAREN = 68,
  sym_sequence__dotted_point = 69,
  sym__sequence_actor_word = 70,
  anon_sym_LBRACK_STAR_RBRACK = 71,
  aux_sym_state_name_token1 = 72,
  aux_sym_state_hide_empty_description_token1 = 73,
  sym_state_id = 74,
  aux_sym_state_annotation_fork_token1 = 75,
  aux_sym_state_annotation_fork_token2 = 76,
  aux_sym_state_annotation_join_token1 = 77,
  aux_sym_state_annotation_join_token2 = 78,
  aux_sym_state_annotation_choice_token1 = 79,
  aux_sym_state_annotation_choice_token2 = 80,
  aux_sym_state_direction_tb_token1 = 81,
  aux_sym_state_direction_bt_token1 = 82,
  aux_sym_state_direction_rl_token1 = 83,
  aux_sym_state_direction_lr_token1 = 84,
  aux_sym_diagram_class_token1 = 85,
  aux_sym_diagram_class_token2 = 86,
  anon_sym_COLON = 87,
  anon_sym_TILDE = 88,
  aux_sym_class_generics_token1 = 89,
  anon_sym_class = 90,
  anon_sym_COLON_COLON_COLON = 91,
  anon_sym_LBRACE = 92,
  anon_sym_RBRACE = 93,
  anon_sym_POUND = 94,
  anon_sym_LPAREN = 95,
  anon_sym_RPAREN = 96,
  anon_sym_DOLLAR = 97,
  anon_sym_LT_LT = 98,
  anon_sym_GT_GT = 99,
  aux_sym_diagram_er_token1 = 100,
  aux_sym_diagram_flow_token1 = 101,
  anon_sym_SEMI = 102,
  aux_sym_flow_stmt_direction_token1 = 103,
  anon_sym_AMP = 104,
  anon_sym_PIPE = 105,
  anon_sym_LBRACK = 106,
  anon_sym_RBRACK = 107,
  anon_sym_LPAREN_LPAREN = 108,
  anon_sym_RPAREN_RPAREN = 109,
  anon_sym_LPAREN_DASH = 110,
  anon_sym_LPAREN_LBRACK = 111,
  anon_sym_RBRACK_RPAREN = 112,
  anon_sym_LBRACK_LBRACK = 113,
  anon_sym_RBRACK_RBRACK = 114,
  anon_sym_LBRACK_PIPE = 115,
  anon_sym_PIPE_RBRACK = 116,
  anon_sym_LBRACK_LPAREN = 117,
  anon_sym_RPAREN_RBRACK = 118,
  anon_sym_LBRACE_LBRACE = 119,
  anon_sym_RBRACE_RBRACE = 120,
  anon_sym_LBRACK_SLASH = 121,
  anon_sym_BSLASH_RBRACK = 122,
  anon_sym_LBRACK_BSLASH = 123,
  anon_sym_SLASH_RBRACK = 124,
  anon_sym_subgraph = 125,
  anon_sym_end = 126,
  aux_sym_diagram_gantt_token1 = 127,
  aux_sym_gantt_stmt_dateformat_token1 = 128,
  aux_sym_gantt_stmt_inclusiveenddates_token1 = 129,
  aux_sym_gantt_stmt_topaxis_token1 = 130,
  aux_sym_gantt_stmt_axisformat_token1 = 131,
  aux_sym_gantt_stmt_includes_token1 = 132,
  aux_sym_gantt_stmt_excludes_token1 = 133,
  aux_sym_gantt_stmt_todaymarker_token1 = 134,
  aux_sym_gantt_stmt_title_token1 = 135,
  aux_sym_gantt_stmt_section_token1 = 136,
  aux_sym_diagram_mindmap_token1 = 137,
  aux_sym_mmap_markdown_token1 = 138,
  aux_sym_mmap_text_token1 = 139,
  aux_sym_mmap_class_token1 = 140,
  aux_sym_mmap_class_token2 = 141,
  aux_sym_mmap_icon_token1 = 142,
  aux_sym_mmap_icon_token2 = 143,
  aux_sym_diagram_pie_token1 = 144,
  aux_sym_diagram_sequence_token1 = 145,
  aux_sym__sequence_participant_type_token1 = 146,
  aux_sym__sequence_participant_type_token2 = 147,
  aux_sym_sequence_stmt_participant_token1 = 148,
  aux_sym_sequence_stmt_actor_token1 = 149,
  aux_sym_sequence_stmt_autonumber_token1 = 150,
  aux_sym_sequence_stmt_activate_token1 = 151,
  aux_sym_sequence_stmt_deactivate_token1 = 152,
  aux_sym_sequence_stmt_note_token1 = 153,
  aux_sym_sequence_stmt_note_token2 = 154,
  anon_sym_COMMA = 155,
  aux_sym_sequence_stmt_links_token1 = 156,
  aux_sym_sequence_stmt_link_token1 = 157,
  aux_sym_sequence_stmt_properties_token1 = 158,
  aux_sym_sequence_stmt_details_token1 = 159,
  aux_sym_sequence_stmt_loop_token1 = 160,
  aux_sym_sequence_stmt_loop_token2 = 161,
  aux_sym_sequence_stmt_rect_token1 = 162,
  aux_sym_sequence_stmt_opt_token1 = 163,
  aux_sym_sequence_stmt_alt_token1 = 164,
  aux_sym_sequence_stmt_alt_token2 = 165,
  aux_sym_sequence_stmt_par_token1 = 166,
  aux_sym_sequence_stmt_par_token2 = 167,
  aux_sym_diagram_state_token1 = 168,
  aux_sym_diagram_state_token2 = 169,
  aux_sym_state_stmt_simple_token1 = 170,
  sym_source_file = 171,
  sym_directive = 172,
  sym_sequence_signal_plus_sign = 173,
  sym_sequence_signal_minus_sign = 174,
  sym_note_placement_left = 175,
  sym_note_placement_right = 176,
  sym_class_reltype_extension = 177,
  sym_class_reltype_composition = 178,
  sym_class_reltype_dependency = 179,
  sym_class_linetype_solid = 180,
  sym_class_linetype_dotted = 181,
  sym_class_label = 182,
  sym__er_word = 183,
  sym_er_cardinarity_zero_or_one = 184,
  sym_er_cardinarity_zero_or_more = 185,
  sym_er_cardinarity_one_or_more = 186,
  sym_er_reltype_non_identifying = 187,
  sym_er_reltype_identifying = 188,
  sym_er_attribute_key_type_pk = 189,
  sym_er_attribute_key_type_fk = 190,
  sym_flowchart_direction_lr = 191,
  sym_flowchart_direction_rl = 192,
  sym_flowchart_direction_tb = 193,
  sym_flowchart_direction_bt = 194,
  sym_flow_text_literal = 195,
  sym_flow_link_arrow = 196,
  sym_flow_link_arrow_start = 197,
  sym_gantt_meta_format = 198,
  sym_gantt_task_text = 199,
  sym_pie_showdata = 200,
  sym_pie_label = 201,
  sym_sequence__dotted_open_arrow = 202,
  sym_sequence__solid_point = 203,
  sym__sequence_rest_text = 204,
  sym_state_name = 205,
  sym_state_arrow = 206,
  sym_state_description = 207,
  sym_state_hide_empty_description = 208,
  sym_state_division = 209,
  sym_state_annotation_fork = 210,
  sym_state_annotation_join = 211,
  sym_state_annotation_choice = 212,
  sym_state_direction_tb = 213,
  sym_state_direction_bt = 214,
  sym_state_direction_rl = 215,
  sym_state_direction_lr = 216,
  sym_diagram_class = 217,
  sym__class_stmt = 218,
  sym_class_stmt_relation = 219,
  sym_class_name = 220,
  sym_class_name_body = 221,
  sym_class_generics = 222,
  sym_class_relation = 223,
  sym__class_reltype = 224,
  sym__class_linetype = 225,
  sym_class_stmt_class = 226,
  sym_class_method_line = 227,
  sym_class_annotation_line = 228,
  sym_class_stmt_method = 229,
  sym_class_stmt_annotation = 230,
  sym_diagram_er = 231,
  sym__er_stmt = 232,
  sym_er_stmt_entity = 233,
  sym_er_stmt_entity_relation = 234,
  sym_er_entity_name = 235,
  sym_er_relation = 236,
  sym__er_cardinarity = 237,
  sym__er_reltype = 238,
  sym_er_role = 239,
  sym_er_stmt_entity_block = 240,
  sym_er_stmt_entity_block_inner = 241,
  sym_er_attribute = 242,
  sym_er_attribute_type = 243,
  sym_er_attribute_name = 244,
  sym__er_attribute_key_type = 245,
  sym_er_attribute_comment = 246,
  sym_diagram_flow = 247,
  sym__flowchart_direction = 248,
  sym__flow_stmt = 249,
  sym_flow_stmt_direction = 250,
  sym_flow_stmt_vertice = 251,
  sym_flow_node = 252,
  sym__flow_link = 253,
  sym_flow_link_simplelink = 254,
  sym_flow_link_arrowtext = 255,
  sym_flow_link_middletext = 256,
  sym_flow_arrow_text = 257,
  sym_flow_vertex_id = 258,
  sym_flow_vertex = 259,
  sym__flow_vertex_kind = 260,
  sym_flow_vertex_square = 261,
  sym_flow_vertex_circle = 262,
  sym_flow_vertex_ellipse = 263,
  sym_flow_vertex_stadium = 264,
  sym_flow_vertex_subroutine = 265,
  sym_flow_vertex_rect = 266,
  sym_flow_vertex_cylinder = 267,
  sym_flow_vertex_round = 268,
  sym_flow_vertex_diamond = 269,
  sym_flow_vertex_hexagon = 270,
  sym_flow_vertex_odd = 271,
  sym_flow_vertex_trapezoid = 272,
  sym_flow_vertex_inv_trapezoid = 273,
  sym_flow_vertex_leanright = 274,
  sym_flow_vertex_leanleft = 275,
  sym__flow_text = 276,
  sym_flow_stmt_subgraph = 277,
  sym_flow_stmt_subgraph_inner = 278,
  sym_flow_vertex_text = 279,
  sym_diagram_gantt = 280,
  sym__gantt_stmt = 281,
  sym_gantt_stmt_dateformat = 282,
  sym_gantt_stmt_inclusiveenddates = 283,
  sym_gantt_stmt_topaxis = 284,
  sym_gantt_stmt_axisformat = 285,
  sym_gantt_stmt_includes = 286,
  sym_gantt_stmt_excludes = 287,
  sym_gantt_stmt_todaymarker = 288,
  sym_gantt_stmt_title = 289,
  sym_gantt_stmt_section = 290,
  sym_gantt_stmt_task = 291,
  sym_diagram_mindmap = 292,
  sym_mmap_node = 293,
  sym_mmap_node_id = 294,
  sym_mmap_markdown = 295,
  sym_mmap_text = 296,
  sym_mmap_node_content = 297,
  sym_mmap_node_square = 298,
  sym_mmap_node_rounded = 299,
  sym_mmap_node_circle = 300,
  sym_mmap_node_cloud = 301,
  sym_mmap_node_bang = 302,
  sym_mmap_node_hexagon = 303,
  sym_mmap_class = 304,
  sym_mmap_icon = 305,
  sym_diagram_pie = 306,
  sym__pie_stmt = 307,
  sym_pie_stmt_title = 308,
  sym_pie_stmt_element = 309,
  sym_diagram_sequence = 310,
  sym__sequence_stmt = 311,
  sym__sequence_participant_type = 312,
  sym_sequence_stmt_participant = 313,
  sym_sequence_stmt_actor = 314,
  sym_sequence_actor = 315,
  sym_sequence_stmt_signal = 316,
  sym_sequence_signal_type = 317,
  sym_sequence_text = 318,
  sym_sequence_stmt_autonumber = 319,
  sym_sequence_stmt_activate = 320,
  sym_sequence_stmt_deactivate = 321,
  sym_sequence_stmt_note = 322,
  sym_sequence_stmt_links = 323,
  sym_sequence_stmt_link = 324,
  sym_sequence_stmt_properties = 325,
  sym_sequence_stmt_details = 326,
  sym_sequence_note_placement = 327,
  sym_sequence_stmt_title = 328,
  sym_sequence_stmt_loop = 329,
  sym_sequence_stmt_rect = 330,
  sym_sequence_stmt_opt = 331,
  aux_sym__sequence_subdocument = 332,
  sym_sequence_stmt_alt = 333,
  sym_sequence_stmt_par = 334,
  sym_diagram_state = 335,
  sym__state_stmt = 336,
  sym__state_direction = 337,
  sym_state_stmt_simple = 338,
  sym_state_stmt_arrow = 339,
  sym_state_stmt_composite = 340,
  sym_state_composite_body = 341,
  sym_state_stmt_annotation = 342,
  sym_state_alias = 343,
  sym_state_stmt_hide_empty_description = 344,
  sym__state_annotation = 345,
  sym_state_note = 346,
  sym_state_note_placement = 347,
  aux_sym_source_file_repeat1 = 348,
  aux_sym_flow_text_literal_repeat1 = 349,
  aux_sym_gantt_task_text_repeat1 = 350,
  aux_sym_diagram_class_repeat1 = 351,
  aux_sym_class_name_body_repeat1 = 352,
  aux_sym_class_stmt_class_repeat1 = 353,
  aux_sym_class_method_line_repeat1 = 354,
  aux_sym_diagram_er_repeat1 = 355,
  aux_sym_er_stmt_entity_block_inner_repeat1 = 356,
  aux_sym_diagram_flow_repeat1 = 357,
  aux_sym_flow_stmt_vertice_repeat1 = 358,
  aux_sym_flow_node_repeat1 = 359,
  aux_sym_flow_arrow_text_repeat1 = 360,
  aux_sym_flow_stmt_subgraph_inner_repeat1 = 361,
  aux_sym_diagram_gantt_repeat1 = 362,
  aux_sym_diagram_mindmap_repeat1 = 363,
  aux_sym_diagram_pie_repeat1 = 364,
  aux_sym_diagram_sequence_repeat1 = 365,
  aux_sym_sequence_actor_repeat1 = 366,
  aux_sym_sequence_stmt_alt_repeat1 = 367,
  aux_sym_sequence_stmt_par_repeat1 = 368,
  aux_sym_diagram_state_repeat1 = 369,
  aux_sym_state_composite_body_repeat1 = 370,
  alias_sym_annotation = 371,
  alias_sym_class_classifier_abstract = 372,
  alias_sym_class_style_name = 373,
  alias_sym_class_visibility_internal = 374,
  alias_sym_class_visibility_private = 375,
  alias_sym_class_visibility_public = 376,
  alias_sym_gantt_axis_format = 377,
  alias_sym_gantt_end_dates = 378,
  alias_sym_gantt_excludes = 379,
  alias_sym_gantt_includes = 380,
  alias_sym_gantt_section = 381,
  alias_sym_gantt_title = 382,
  alias_sym_gantt_today_marker = 383,
  alias_sym_gantt_top_axis = 384,
  alias_sym_note_content = 385,
  alias_sym_sequence_alias = 386,
  alias_sym_sequence_stmt_alt_branch = 387,
  alias_sym_sequence_stmt_loop_inner = 388,
  alias_sym_sequence_stmt_opt_inner = 389,
  alias_sym_sequence_stmt_rect_inner = 390,
  alias_sym_title = 391,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_PERCENT_PERCENT_LBRACE] = "%%{",
  [aux_sym_directive_token1] = "arg_directive",
  [sym__whitespace] = "_whitespace",
  [sym__newline] = "_newline",
  [sym_comment] = "comment",
  [sym__md_start] = "_md_start",
  [sym__md_end] = "_md_end",
  [sym_type_directive] = "type_directive",
  [anon_sym_PLUS] = "+",
  [anon_sym_DASH] = "-",
  [aux_sym_note_placement_left_token1] = "left of",
  [aux_sym_note_placement_right_token1] = "right of",
  [sym__class_name] = "_class_name",
  [sym__alpha_num_token] = "_alpha_num_token",
  [sym__bquote_string] = "_bquote_string",
  [sym__dquote_string] = "cardinality",
  [sym_class_reltype_aggregation] = "class_reltype_aggregation",
  [anon_sym_LT_PIPE] = "<|",
  [anon_sym_PIPE_GT] = "|>",
  [anon_sym_STAR] = "*",
  [anon_sym_LT] = "<",
  [anon_sym_GT] = ">",
  [anon_sym_DASH_DASH] = "--",
  [anon_sym_DOT_DOT] = "..",
  [aux_sym_class_label_token1] = "class_label_token1",
  [aux_sym__er_word_token1] = "_er_word_token1",
  [sym__er_alphanum] = "_er_alphanum",
  [anon_sym_PIPEo] = "|o",
  [anon_sym_o_PIPE] = "o|",
  [anon_sym_RBRACEo] = "}o",
  [anon_sym_o_LBRACE] = "o{",
  [anon_sym_RBRACE_PIPE] = "}|",
  [anon_sym_PIPE_LBRACE] = "|{",
  [sym_er_cardinarity_only_one] = "er_cardinarity_only_one",
  [anon_sym_DOT_DASH] = ".-",
  [anon_sym_DASH_DOT] = "-.",
  [aux_sym_er_attribute_key_type_pk_token1] = "pk",
  [aux_sym_er_attribute_key_type_fk_token1] = "fk",
  [aux_sym_flowchart_direction_lr_token1] = "lr",
  [aux_sym_flowchart_direction_lr_token2] = "br",
  [aux_sym_flowchart_direction_rl_token1] = "rl",
  [aux_sym_flowchart_direction_tb_token1] = "tb",
  [aux_sym_flowchart_direction_tb_token2] = "td",
  [anon_sym_v] = "v",
  [aux_sym_flowchart_direction_bt_token1] = "bt",
  [anon_sym_CARET] = "^",
  [aux_sym_flow_text_literal_token1] = "flow_text_literal_token1",
  [sym_flow_text_quoted] = "flow_text_quoted",
  [aux_sym_flow_link_arrow_token1] = "flow_link_arrow_token1",
  [aux_sym_flow_link_arrow_token2] = "flow_link_arrow_token2",
  [aux_sym_flow_link_arrow_token3] = "flow_link_arrow_token3",
  [aux_sym_flow_link_arrow_start_token1] = "flow_link_arrow_start_token1",
  [aux_sym_flow_link_arrow_start_token2] = "flow_link_arrow_start_token2",
  [aux_sym_flow_link_arrow_start_token3] = "flow_link_arrow_start_token3",
  [aux_sym_gantt_meta_format_token1] = "gantt_meta_format_token1",
  [aux_sym_gantt_task_text_token1] = "gantt_task_text_token1",
  [sym_gantt_task_data] = "gantt_task_data",
  [sym__mindmap_text] = "_mindmap_text",
  [aux_sym_pie_showdata_token1] = "showdata",
  [sym_pie_title] = "pie_title",
  [sym_pie_value] = "pie_value",
  [sym_sequence__solid_arrow] = "sequence__solid_arrow",
  [sym_sequence__dotted_arrow] = "sequence__dotted_arrow",
  [sym_sequence__solid_open_arrow] = "sequence__solid_open_arrow",
  [anon_sym_DASH_DASH_GT] = "-->",
  [sym_sequence__solid_cross] = "sequence__solid_cross",
  [sym_sequence__dotted_cross] = "sequence__dotted_cross",
  [anon_sym_DASH_RPAREN] = "-)",
  [sym_sequence__dotted_point] = "sequence__dotted_point",
  [sym__sequence_actor_word] = "_sequence_actor_word",
  [anon_sym_LBRACK_STAR_RBRACK] = "[*]",
  [aux_sym_state_name_token1] = "state_name_token1",
  [aux_sym_state_hide_empty_description_token1] = "hide empty description",
  [sym_state_id] = "state_id",
  [aux_sym_state_annotation_fork_token1] = "state_annotation_fork_token1",
  [aux_sym_state_annotation_fork_token2] = "state_annotation_fork_token2",
  [aux_sym_state_annotation_join_token1] = "state_annotation_join_token1",
  [aux_sym_state_annotation_join_token2] = "state_annotation_join_token2",
  [aux_sym_state_annotation_choice_token1] = "state_annotation_choice_token1",
  [aux_sym_state_annotation_choice_token2] = "state_annotation_choice_token2",
  [aux_sym_state_direction_tb_token1] = "direction tb",
  [aux_sym_state_direction_bt_token1] = "direction bt",
  [aux_sym_state_direction_rl_token1] = "direction rl",
  [aux_sym_state_direction_lr_token1] = "direction lr",
  [aux_sym_diagram_class_token1] = "classDiagram-v2",
  [aux_sym_diagram_class_token2] = "classDiagram",
  [anon_sym_COLON] = ":",
  [anon_sym_TILDE] = "~",
  [aux_sym_class_generics_token1] = "class_name",
  [anon_sym_class] = "class",
  [anon_sym_COLON_COLON_COLON] = ":::",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_POUND] = "class_visibility_protected",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_DOLLAR] = "class_classifier_static",
  [anon_sym_LT_LT] = "<<",
  [anon_sym_GT_GT] = ">>",
  [aux_sym_diagram_er_token1] = "erdiagram",
  [aux_sym_diagram_flow_token1] = "flowchart",
  [anon_sym_SEMI] = ";",
  [aux_sym_flow_stmt_direction_token1] = "direction",
  [anon_sym_AMP] = "&",
  [anon_sym_PIPE] = "|",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_LPAREN_LPAREN] = "((",
  [anon_sym_RPAREN_RPAREN] = "))",
  [anon_sym_LPAREN_DASH] = "(-",
  [anon_sym_LPAREN_LBRACK] = "([",
  [anon_sym_RBRACK_RPAREN] = "])",
  [anon_sym_LBRACK_LBRACK] = "[[",
  [anon_sym_RBRACK_RBRACK] = "]]",
  [anon_sym_LBRACK_PIPE] = "[|",
  [anon_sym_PIPE_RBRACK] = "|]",
  [anon_sym_LBRACK_LPAREN] = "[(",
  [anon_sym_RPAREN_RBRACK] = ")]",
  [anon_sym_LBRACE_LBRACE] = "{{",
  [anon_sym_RBRACE_RBRACE] = "}}",
  [anon_sym_LBRACK_SLASH] = "[/",
  [anon_sym_BSLASH_RBRACK] = "\\]",
  [anon_sym_LBRACK_BSLASH] = "[\\",
  [anon_sym_SLASH_RBRACK] = "/]",
  [anon_sym_subgraph] = "subgraph",
  [anon_sym_end] = "end",
  [aux_sym_diagram_gantt_token1] = "gantt",
  [aux_sym_gantt_stmt_dateformat_token1] = "dateformat",
  [aux_sym_gantt_stmt_inclusiveenddates_token1] = "inclusiveenddates",
  [aux_sym_gantt_stmt_topaxis_token1] = "topaxis",
  [aux_sym_gantt_stmt_axisformat_token1] = "axisformat",
  [aux_sym_gantt_stmt_includes_token1] = "includes",
  [aux_sym_gantt_stmt_excludes_token1] = "excludes",
  [aux_sym_gantt_stmt_todaymarker_token1] = "todaymarker",
  [aux_sym_gantt_stmt_title_token1] = "title",
  [aux_sym_gantt_stmt_section_token1] = "section",
  [aux_sym_diagram_mindmap_token1] = "diagram_mindmap_token1",
  [aux_sym_mmap_markdown_token1] = "md_text",
  [aux_sym_mmap_text_token1] = "mmap_text_token1",
  [aux_sym_mmap_class_token1] = "mmap_class_token1",
  [aux_sym_mmap_class_token2] = "mmap_class_token2",
  [aux_sym_mmap_icon_token1] = "mmap_icon_token1",
  [aux_sym_mmap_icon_token2] = "mmap_icon_token2",
  [aux_sym_diagram_pie_token1] = "pie",
  [aux_sym_diagram_sequence_token1] = "sequenceDiagram",
  [aux_sym__sequence_participant_type_token1] = "participant",
  [aux_sym__sequence_participant_type_token2] = "actor",
  [aux_sym_sequence_stmt_participant_token1] = "as",
  [aux_sym_sequence_stmt_actor_token1] = "sequence_actor",
  [aux_sym_sequence_stmt_autonumber_token1] = "autonumber",
  [aux_sym_sequence_stmt_activate_token1] = "activate",
  [aux_sym_sequence_stmt_deactivate_token1] = "deactivate",
  [aux_sym_sequence_stmt_note_token1] = "note ",
  [aux_sym_sequence_stmt_note_token2] = "over",
  [anon_sym_COMMA] = ",",
  [aux_sym_sequence_stmt_links_token1] = "links",
  [aux_sym_sequence_stmt_link_token1] = "link",
  [aux_sym_sequence_stmt_properties_token1] = "properties",
  [aux_sym_sequence_stmt_details_token1] = "details",
  [aux_sym_sequence_stmt_loop_token1] = "loop",
  [aux_sym_sequence_stmt_loop_token2] = "end",
  [aux_sym_sequence_stmt_rect_token1] = "rect",
  [aux_sym_sequence_stmt_opt_token1] = "opt",
  [aux_sym_sequence_stmt_alt_token1] = "alt",
  [aux_sym_sequence_stmt_alt_token2] = "else",
  [aux_sym_sequence_stmt_par_token1] = "par",
  [aux_sym_sequence_stmt_par_token2] = "and",
  [aux_sym_diagram_state_token1] = "stateDiagram",
  [aux_sym_diagram_state_token2] = "stateDiagram-v2",
  [aux_sym_state_stmt_simple_token1] = "state ",
  [sym_source_file] = "source_file",
  [sym_directive] = "directive",
  [sym_sequence_signal_plus_sign] = "sequence_signal_plus_sign",
  [sym_sequence_signal_minus_sign] = "sequence_signal_minus_sign",
  [sym_note_placement_left] = "note_placement_left",
  [sym_note_placement_right] = "note_placement_right",
  [sym_class_reltype_extension] = "class_reltype_extension",
  [sym_class_reltype_composition] = "class_reltype_composition",
  [sym_class_reltype_dependency] = "class_reltype_dependency",
  [sym_class_linetype_solid] = "class_linetype_solid",
  [sym_class_linetype_dotted] = "class_linetype_dotted",
  [sym_class_label] = "class_label",
  [sym__er_word] = "_er_word",
  [sym_er_cardinarity_zero_or_one] = "er_cardinarity_zero_or_one",
  [sym_er_cardinarity_zero_or_more] = "er_cardinarity_zero_or_more",
  [sym_er_cardinarity_one_or_more] = "er_cardinarity_one_or_more",
  [sym_er_reltype_non_identifying] = "er_reltype_non_identifying",
  [sym_er_reltype_identifying] = "er_reltype_identifying",
  [sym_er_attribute_key_type_pk] = "er_attribute_key_type_pk",
  [sym_er_attribute_key_type_fk] = "er_attribute_key_type_fk",
  [sym_flowchart_direction_lr] = "flowchart_direction_lr",
  [sym_flowchart_direction_rl] = "flowchart_direction_rl",
  [sym_flowchart_direction_tb] = "flowchart_direction_tb",
  [sym_flowchart_direction_bt] = "flowchart_direction_bt",
  [sym_flow_text_literal] = "flow_text_literal",
  [sym_flow_link_arrow] = "flow_link_arrow",
  [sym_flow_link_arrow_start] = "flow_link_arrow_start",
  [sym_gantt_meta_format] = "gantt_date_format",
  [sym_gantt_task_text] = "gantt_task_text",
  [sym_pie_showdata] = "pie_showdata",
  [sym_pie_label] = "pie_label",
  [sym_sequence__dotted_open_arrow] = "sequence__dotted_open_arrow",
  [sym_sequence__solid_point] = "sequence__solid_point",
  [sym__sequence_rest_text] = "_sequence_rest_text",
  [sym_state_name] = "state_name",
  [sym_state_arrow] = "state_arrow",
  [sym_state_description] = "state_description",
  [sym_state_hide_empty_description] = "state_hide_empty_description",
  [sym_state_division] = "state_division",
  [sym_state_annotation_fork] = "state_annotation_fork",
  [sym_state_annotation_join] = "state_annotation_join",
  [sym_state_annotation_choice] = "state_annotation_choice",
  [sym_state_direction_tb] = "state_direction_tb",
  [sym_state_direction_bt] = "state_direction_bt",
  [sym_state_direction_rl] = "state_direction_rl",
  [sym_state_direction_lr] = "state_direction_lr",
  [sym_diagram_class] = "diagram_class",
  [sym__class_stmt] = "_class_stmt",
  [sym_class_stmt_relation] = "class_stmt_relation",
  [sym_class_name] = "class_name",
  [sym_class_name_body] = "class_name_body",
  [sym_class_generics] = "class_generics",
  [sym_class_relation] = "class_relation",
  [sym__class_reltype] = "_class_reltype",
  [sym__class_linetype] = "_class_linetype",
  [sym_class_stmt_class] = "class_stmt_class",
  [sym_class_method_line] = "class_method_line",
  [sym_class_annotation_line] = "class_annotation_line",
  [sym_class_stmt_method] = "class_stmt_method",
  [sym_class_stmt_annotation] = "class_stmt_annotation",
  [sym_diagram_er] = "diagram_er",
  [sym__er_stmt] = "_er_stmt",
  [sym_er_stmt_entity] = "er_stmt_entity",
  [sym_er_stmt_entity_relation] = "er_stmt_entity_relation",
  [sym_er_entity_name] = "er_entity_name",
  [sym_er_relation] = "er_relation",
  [sym__er_cardinarity] = "_er_cardinarity",
  [sym__er_reltype] = "_er_reltype",
  [sym_er_role] = "er_role",
  [sym_er_stmt_entity_block] = "er_stmt_entity_block",
  [sym_er_stmt_entity_block_inner] = "er_stmt_entity_block_inner",
  [sym_er_attribute] = "er_attribute",
  [sym_er_attribute_type] = "er_attribute_type",
  [sym_er_attribute_name] = "er_attribute_name",
  [sym__er_attribute_key_type] = "_er_attribute_key_type",
  [sym_er_attribute_comment] = "er_attribute_comment",
  [sym_diagram_flow] = "diagram_flow",
  [sym__flowchart_direction] = "_flowchart_direction",
  [sym__flow_stmt] = "_flow_stmt",
  [sym_flow_stmt_direction] = "flow_stmt_direction",
  [sym_flow_stmt_vertice] = "flow_stmt_vertice",
  [sym_flow_node] = "flow_node",
  [sym__flow_link] = "_flow_link",
  [sym_flow_link_simplelink] = "flow_link_simplelink",
  [sym_flow_link_arrowtext] = "flow_link_arrowtext",
  [sym_flow_link_middletext] = "flow_link_middletext",
  [sym_flow_arrow_text] = "flow_arrow_text",
  [sym_flow_vertex_id] = "flow_vertex_id",
  [sym_flow_vertex] = "flow_vertex",
  [sym__flow_vertex_kind] = "_flow_vertex_kind",
  [sym_flow_vertex_square] = "flow_vertex_square",
  [sym_flow_vertex_circle] = "flow_vertex_circle",
  [sym_flow_vertex_ellipse] = "flow_vertex_ellipse",
  [sym_flow_vertex_stadium] = "flow_vertex_stadium",
  [sym_flow_vertex_subroutine] = "flow_vertex_subroutine",
  [sym_flow_vertex_rect] = "flow_vertex_rect",
  [sym_flow_vertex_cylinder] = "flow_vertex_cylinder",
  [sym_flow_vertex_round] = "flow_vertex_round",
  [sym_flow_vertex_diamond] = "flow_vertex_diamond",
  [sym_flow_vertex_hexagon] = "flow_vertex_hexagon",
  [sym_flow_vertex_odd] = "flow_vertex_odd",
  [sym_flow_vertex_trapezoid] = "flow_vertex_trapezoid",
  [sym_flow_vertex_inv_trapezoid] = "flow_vertex_inv_trapezoid",
  [sym_flow_vertex_leanright] = "flow_vertex_leanright",
  [sym_flow_vertex_leanleft] = "flow_vertex_leanleft",
  [sym__flow_text] = "_flow_text",
  [sym_flow_stmt_subgraph] = "flow_stmt_subgraph",
  [sym_flow_stmt_subgraph_inner] = "flow_stmt_subgraph_inner",
  [sym_flow_vertex_text] = "flow_vertex_text",
  [sym_diagram_gantt] = "diagram_gantt",
  [sym__gantt_stmt] = "_gantt_stmt",
  [sym_gantt_stmt_dateformat] = "gantt_stmt_dateformat",
  [sym_gantt_stmt_inclusiveenddates] = "gantt_stmt_inclusiveenddates",
  [sym_gantt_stmt_topaxis] = "gantt_stmt_topaxis",
  [sym_gantt_stmt_axisformat] = "gantt_stmt_axisformat",
  [sym_gantt_stmt_includes] = "gantt_stmt_includes",
  [sym_gantt_stmt_excludes] = "gantt_stmt_excludes",
  [sym_gantt_stmt_todaymarker] = "gantt_stmt_todaymarker",
  [sym_gantt_stmt_title] = "gantt_stmt_title",
  [sym_gantt_stmt_section] = "gantt_stmt_section",
  [sym_gantt_stmt_task] = "gantt_stmt_task",
  [sym_diagram_mindmap] = "diagram_mindmap",
  [sym_mmap_node] = "mmap_node",
  [sym_mmap_node_id] = "mmap_node_id",
  [sym_mmap_markdown] = "mmap_markdown",
  [sym_mmap_text] = "mmap_text",
  [sym_mmap_node_content] = "mmap_node_content",
  [sym_mmap_node_square] = "mmap_node_square",
  [sym_mmap_node_rounded] = "mmap_node_rounded",
  [sym_mmap_node_circle] = "mmap_node_circle",
  [sym_mmap_node_cloud] = "mmap_node_cloud",
  [sym_mmap_node_bang] = "mmap_node_bang",
  [sym_mmap_node_hexagon] = "mmap_node_hexagon",
  [sym_mmap_class] = "mmap_class",
  [sym_mmap_icon] = "mmap_icon",
  [sym_diagram_pie] = "diagram_pie",
  [sym__pie_stmt] = "_pie_stmt",
  [sym_pie_stmt_title] = "pie_stmt_title",
  [sym_pie_stmt_element] = "pie_stmt_element",
  [sym_diagram_sequence] = "diagram_sequence",
  [sym__sequence_stmt] = "_sequence_stmt",
  [sym__sequence_participant_type] = "_sequence_participant_type",
  [sym_sequence_stmt_participant] = "sequence_stmt_participant",
  [sym_sequence_stmt_actor] = "sequence_stmt_actor",
  [sym_sequence_actor] = "sequence_actor",
  [sym_sequence_stmt_signal] = "sequence_stmt_signal",
  [sym_sequence_signal_type] = "sequence_signal_type",
  [sym_sequence_text] = "sequence_text",
  [sym_sequence_stmt_autonumber] = "sequence_stmt_autonumber",
  [sym_sequence_stmt_activate] = "sequence_stmt_activate",
  [sym_sequence_stmt_deactivate] = "sequence_stmt_deactivate",
  [sym_sequence_stmt_note] = "sequence_stmt_note",
  [sym_sequence_stmt_links] = "sequence_stmt_links",
  [sym_sequence_stmt_link] = "sequence_stmt_link",
  [sym_sequence_stmt_properties] = "sequence_stmt_properties",
  [sym_sequence_stmt_details] = "sequence_stmt_details",
  [sym_sequence_note_placement] = "sequence_note_placement",
  [sym_sequence_stmt_title] = "sequence_stmt_title",
  [sym_sequence_stmt_loop] = "sequence_stmt_loop",
  [sym_sequence_stmt_rect] = "sequence_stmt_rect",
  [sym_sequence_stmt_opt] = "sequence_stmt_opt",
  [aux_sym__sequence_subdocument] = "_sequence_subdocument",
  [sym_sequence_stmt_alt] = "sequence_stmt_alt",
  [sym_sequence_stmt_par] = "sequence_stmt_par",
  [sym_diagram_state] = "diagram_state",
  [sym__state_stmt] = "_state_stmt",
  [sym__state_direction] = "_state_direction",
  [sym_state_stmt_simple] = "state_stmt_simple",
  [sym_state_stmt_arrow] = "state_stmt_arrow",
  [sym_state_stmt_composite] = "state_stmt_composite",
  [sym_state_composite_body] = "state_composite_body",
  [sym_state_stmt_annotation] = "state_stmt_annotation",
  [sym_state_alias] = "state_alias",
  [sym_state_stmt_hide_empty_description] = "state_stmt_hide_empty_description",
  [sym__state_annotation] = "_state_annotation",
  [sym_state_note] = "state_note",
  [sym_state_note_placement] = "state_note_placement",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_flow_text_literal_repeat1] = "flow_text_literal_repeat1",
  [aux_sym_gantt_task_text_repeat1] = "gantt_task_text_repeat1",
  [aux_sym_diagram_class_repeat1] = "diagram_class_repeat1",
  [aux_sym_class_name_body_repeat1] = "class_name_body_repeat1",
  [aux_sym_class_stmt_class_repeat1] = "class_stmt_class_repeat1",
  [aux_sym_class_method_line_repeat1] = "class_method_line_repeat1",
  [aux_sym_diagram_er_repeat1] = "diagram_er_repeat1",
  [aux_sym_er_stmt_entity_block_inner_repeat1] = "er_stmt_entity_block_inner_repeat1",
  [aux_sym_diagram_flow_repeat1] = "diagram_flow_repeat1",
  [aux_sym_flow_stmt_vertice_repeat1] = "flow_stmt_vertice_repeat1",
  [aux_sym_flow_node_repeat1] = "flow_node_repeat1",
  [aux_sym_flow_arrow_text_repeat1] = "flow_arrow_text_repeat1",
  [aux_sym_flow_stmt_subgraph_inner_repeat1] = "flow_stmt_subgraph_inner_repeat1",
  [aux_sym_diagram_gantt_repeat1] = "diagram_gantt_repeat1",
  [aux_sym_diagram_mindmap_repeat1] = "diagram_mindmap_repeat1",
  [aux_sym_diagram_pie_repeat1] = "diagram_pie_repeat1",
  [aux_sym_diagram_sequence_repeat1] = "diagram_sequence_repeat1",
  [aux_sym_sequence_actor_repeat1] = "sequence_actor_repeat1",
  [aux_sym_sequence_stmt_alt_repeat1] = "sequence_stmt_alt_repeat1",
  [aux_sym_sequence_stmt_par_repeat1] = "sequence_stmt_par_repeat1",
  [aux_sym_diagram_state_repeat1] = "diagram_state_repeat1",
  [aux_sym_state_composite_body_repeat1] = "state_composite_body_repeat1",
  [alias_sym_annotation] = "annotation",
  [alias_sym_class_classifier_abstract] = "class_classifier_abstract",
  [alias_sym_class_style_name] = "class_style_name",
  [alias_sym_class_visibility_internal] = "class_visibility_internal",
  [alias_sym_class_visibility_private] = "class_visibility_private",
  [alias_sym_class_visibility_public] = "class_visibility_public",
  [alias_sym_gantt_axis_format] = "gantt_axis_format",
  [alias_sym_gantt_end_dates] = "gantt_end_dates",
  [alias_sym_gantt_excludes] = "gantt_excludes",
  [alias_sym_gantt_includes] = "gantt_includes",
  [alias_sym_gantt_section] = "gantt_section",
  [alias_sym_gantt_title] = "gantt_title",
  [alias_sym_gantt_today_marker] = "gantt_today_marker",
  [alias_sym_gantt_top_axis] = "gantt_top_axis",
  [alias_sym_note_content] = "note_content",
  [alias_sym_sequence_alias] = "sequence_alias",
  [alias_sym_sequence_stmt_alt_branch] = "sequence_stmt_alt_branch",
  [alias_sym_sequence_stmt_loop_inner] = "sequence_stmt_loop_inner",
  [alias_sym_sequence_stmt_opt_inner] = "sequence_stmt_opt_inner",
  [alias_sym_sequence_stmt_rect_inner] = "sequence_stmt_rect_inner",
  [alias_sym_title] = "title",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_PERCENT_PERCENT_LBRACE] = anon_sym_PERCENT_PERCENT_LBRACE,
  [aux_sym_directive_token1] = aux_sym_directive_token1,
  [sym__whitespace] = sym__whitespace,
  [sym__newline] = sym__newline,
  [sym_comment] = sym_comment,
  [sym__md_start] = sym__md_start,
  [sym__md_end] = sym__md_end,
  [sym_type_directive] = sym_type_directive,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_DASH] = anon_sym_DASH,
  [aux_sym_note_placement_left_token1] = aux_sym_note_placement_left_token1,
  [aux_sym_note_placement_right_token1] = aux_sym_note_placement_right_token1,
  [sym__class_name] = sym__class_name,
  [sym__alpha_num_token] = sym__alpha_num_token,
  [sym__bquote_string] = sym__bquote_string,
  [sym__dquote_string] = sym__dquote_string,
  [sym_class_reltype_aggregation] = sym_class_reltype_aggregation,
  [anon_sym_LT_PIPE] = anon_sym_LT_PIPE,
  [anon_sym_PIPE_GT] = anon_sym_PIPE_GT,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_DASH_DASH] = anon_sym_DASH_DASH,
  [anon_sym_DOT_DOT] = anon_sym_DOT_DOT,
  [aux_sym_class_label_token1] = aux_sym_class_label_token1,
  [aux_sym__er_word_token1] = aux_sym__er_word_token1,
  [sym__er_alphanum] = sym__er_alphanum,
  [anon_sym_PIPEo] = anon_sym_PIPEo,
  [anon_sym_o_PIPE] = anon_sym_o_PIPE,
  [anon_sym_RBRACEo] = anon_sym_RBRACEo,
  [anon_sym_o_LBRACE] = anon_sym_o_LBRACE,
  [anon_sym_RBRACE_PIPE] = anon_sym_RBRACE_PIPE,
  [anon_sym_PIPE_LBRACE] = anon_sym_PIPE_LBRACE,
  [sym_er_cardinarity_only_one] = sym_er_cardinarity_only_one,
  [anon_sym_DOT_DASH] = anon_sym_DOT_DASH,
  [anon_sym_DASH_DOT] = anon_sym_DASH_DOT,
  [aux_sym_er_attribute_key_type_pk_token1] = aux_sym_er_attribute_key_type_pk_token1,
  [aux_sym_er_attribute_key_type_fk_token1] = aux_sym_er_attribute_key_type_fk_token1,
  [aux_sym_flowchart_direction_lr_token1] = aux_sym_flowchart_direction_lr_token1,
  [aux_sym_flowchart_direction_lr_token2] = aux_sym_flowchart_direction_lr_token2,
  [aux_sym_flowchart_direction_rl_token1] = aux_sym_flowchart_direction_rl_token1,
  [aux_sym_flowchart_direction_tb_token1] = aux_sym_flowchart_direction_tb_token1,
  [aux_sym_flowchart_direction_tb_token2] = aux_sym_flowchart_direction_tb_token2,
  [anon_sym_v] = anon_sym_v,
  [aux_sym_flowchart_direction_bt_token1] = aux_sym_flowchart_direction_bt_token1,
  [anon_sym_CARET] = anon_sym_CARET,
  [aux_sym_flow_text_literal_token1] = aux_sym_flow_text_literal_token1,
  [sym_flow_text_quoted] = sym_flow_text_quoted,
  [aux_sym_flow_link_arrow_token1] = aux_sym_flow_link_arrow_token1,
  [aux_sym_flow_link_arrow_token2] = aux_sym_flow_link_arrow_token2,
  [aux_sym_flow_link_arrow_token3] = aux_sym_flow_link_arrow_token3,
  [aux_sym_flow_link_arrow_start_token1] = aux_sym_flow_link_arrow_start_token1,
  [aux_sym_flow_link_arrow_start_token2] = aux_sym_flow_link_arrow_start_token2,
  [aux_sym_flow_link_arrow_start_token3] = aux_sym_flow_link_arrow_start_token3,
  [aux_sym_gantt_meta_format_token1] = aux_sym_gantt_meta_format_token1,
  [aux_sym_gantt_task_text_token1] = aux_sym_gantt_task_text_token1,
  [sym_gantt_task_data] = sym_gantt_task_data,
  [sym__mindmap_text] = sym__mindmap_text,
  [aux_sym_pie_showdata_token1] = aux_sym_pie_showdata_token1,
  [sym_pie_title] = sym_pie_title,
  [sym_pie_value] = sym_pie_value,
  [sym_sequence__solid_arrow] = sym_sequence__solid_arrow,
  [sym_sequence__dotted_arrow] = sym_sequence__dotted_arrow,
  [sym_sequence__solid_open_arrow] = sym_sequence__solid_open_arrow,
  [anon_sym_DASH_DASH_GT] = anon_sym_DASH_DASH_GT,
  [sym_sequence__solid_cross] = sym_sequence__solid_cross,
  [sym_sequence__dotted_cross] = sym_sequence__dotted_cross,
  [anon_sym_DASH_RPAREN] = anon_sym_DASH_RPAREN,
  [sym_sequence__dotted_point] = sym_sequence__dotted_point,
  [sym__sequence_actor_word] = sym__sequence_actor_word,
  [anon_sym_LBRACK_STAR_RBRACK] = anon_sym_LBRACK_STAR_RBRACK,
  [aux_sym_state_name_token1] = aux_sym_state_name_token1,
  [aux_sym_state_hide_empty_description_token1] = aux_sym_state_hide_empty_description_token1,
  [sym_state_id] = sym_state_id,
  [aux_sym_state_annotation_fork_token1] = aux_sym_state_annotation_fork_token1,
  [aux_sym_state_annotation_fork_token2] = aux_sym_state_annotation_fork_token2,
  [aux_sym_state_annotation_join_token1] = aux_sym_state_annotation_join_token1,
  [aux_sym_state_annotation_join_token2] = aux_sym_state_annotation_join_token2,
  [aux_sym_state_annotation_choice_token1] = aux_sym_state_annotation_choice_token1,
  [aux_sym_state_annotation_choice_token2] = aux_sym_state_annotation_choice_token2,
  [aux_sym_state_direction_tb_token1] = aux_sym_state_direction_tb_token1,
  [aux_sym_state_direction_bt_token1] = aux_sym_state_direction_bt_token1,
  [aux_sym_state_direction_rl_token1] = aux_sym_state_direction_rl_token1,
  [aux_sym_state_direction_lr_token1] = aux_sym_state_direction_lr_token1,
  [aux_sym_diagram_class_token1] = aux_sym_diagram_class_token1,
  [aux_sym_diagram_class_token2] = aux_sym_diagram_class_token2,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_TILDE] = anon_sym_TILDE,
  [aux_sym_class_generics_token1] = sym_class_name,
  [anon_sym_class] = anon_sym_class,
  [anon_sym_COLON_COLON_COLON] = anon_sym_COLON_COLON_COLON,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_POUND] = anon_sym_POUND,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_DOLLAR] = anon_sym_DOLLAR,
  [anon_sym_LT_LT] = anon_sym_LT_LT,
  [anon_sym_GT_GT] = anon_sym_GT_GT,
  [aux_sym_diagram_er_token1] = aux_sym_diagram_er_token1,
  [aux_sym_diagram_flow_token1] = aux_sym_diagram_flow_token1,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [aux_sym_flow_stmt_direction_token1] = aux_sym_flow_stmt_direction_token1,
  [anon_sym_AMP] = anon_sym_AMP,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_LPAREN_LPAREN] = anon_sym_LPAREN_LPAREN,
  [anon_sym_RPAREN_RPAREN] = anon_sym_RPAREN_RPAREN,
  [anon_sym_LPAREN_DASH] = anon_sym_LPAREN_DASH,
  [anon_sym_LPAREN_LBRACK] = anon_sym_LPAREN_LBRACK,
  [anon_sym_RBRACK_RPAREN] = anon_sym_RBRACK_RPAREN,
  [anon_sym_LBRACK_LBRACK] = anon_sym_LBRACK_LBRACK,
  [anon_sym_RBRACK_RBRACK] = anon_sym_RBRACK_RBRACK,
  [anon_sym_LBRACK_PIPE] = anon_sym_LBRACK_PIPE,
  [anon_sym_PIPE_RBRACK] = anon_sym_PIPE_RBRACK,
  [anon_sym_LBRACK_LPAREN] = anon_sym_LBRACK_LPAREN,
  [anon_sym_RPAREN_RBRACK] = anon_sym_RPAREN_RBRACK,
  [anon_sym_LBRACE_LBRACE] = anon_sym_LBRACE_LBRACE,
  [anon_sym_RBRACE_RBRACE] = anon_sym_RBRACE_RBRACE,
  [anon_sym_LBRACK_SLASH] = anon_sym_LBRACK_SLASH,
  [anon_sym_BSLASH_RBRACK] = anon_sym_BSLASH_RBRACK,
  [anon_sym_LBRACK_BSLASH] = anon_sym_LBRACK_BSLASH,
  [anon_sym_SLASH_RBRACK] = anon_sym_SLASH_RBRACK,
  [anon_sym_subgraph] = anon_sym_subgraph,
  [anon_sym_end] = anon_sym_end,
  [aux_sym_diagram_gantt_token1] = aux_sym_diagram_gantt_token1,
  [aux_sym_gantt_stmt_dateformat_token1] = aux_sym_gantt_stmt_dateformat_token1,
  [aux_sym_gantt_stmt_inclusiveenddates_token1] = aux_sym_gantt_stmt_inclusiveenddates_token1,
  [aux_sym_gantt_stmt_topaxis_token1] = aux_sym_gantt_stmt_topaxis_token1,
  [aux_sym_gantt_stmt_axisformat_token1] = aux_sym_gantt_stmt_axisformat_token1,
  [aux_sym_gantt_stmt_includes_token1] = aux_sym_gantt_stmt_includes_token1,
  [aux_sym_gantt_stmt_excludes_token1] = aux_sym_gantt_stmt_excludes_token1,
  [aux_sym_gantt_stmt_todaymarker_token1] = aux_sym_gantt_stmt_todaymarker_token1,
  [aux_sym_gantt_stmt_title_token1] = aux_sym_gantt_stmt_title_token1,
  [aux_sym_gantt_stmt_section_token1] = aux_sym_gantt_stmt_section_token1,
  [aux_sym_diagram_mindmap_token1] = aux_sym_diagram_mindmap_token1,
  [aux_sym_mmap_markdown_token1] = aux_sym_mmap_markdown_token1,
  [aux_sym_mmap_text_token1] = aux_sym_mmap_text_token1,
  [aux_sym_mmap_class_token1] = aux_sym_mmap_class_token1,
  [aux_sym_mmap_class_token2] = aux_sym_mmap_class_token2,
  [aux_sym_mmap_icon_token1] = aux_sym_mmap_icon_token1,
  [aux_sym_mmap_icon_token2] = aux_sym_mmap_icon_token2,
  [aux_sym_diagram_pie_token1] = aux_sym_diagram_pie_token1,
  [aux_sym_diagram_sequence_token1] = aux_sym_diagram_sequence_token1,
  [aux_sym__sequence_participant_type_token1] = aux_sym__sequence_participant_type_token1,
  [aux_sym__sequence_participant_type_token2] = aux_sym__sequence_participant_type_token2,
  [aux_sym_sequence_stmt_participant_token1] = aux_sym_sequence_stmt_participant_token1,
  [aux_sym_sequence_stmt_actor_token1] = aux_sym_sequence_stmt_actor_token1,
  [aux_sym_sequence_stmt_autonumber_token1] = aux_sym_sequence_stmt_autonumber_token1,
  [aux_sym_sequence_stmt_activate_token1] = aux_sym_sequence_stmt_activate_token1,
  [aux_sym_sequence_stmt_deactivate_token1] = aux_sym_sequence_stmt_deactivate_token1,
  [aux_sym_sequence_stmt_note_token1] = aux_sym_sequence_stmt_note_token1,
  [aux_sym_sequence_stmt_note_token2] = aux_sym_sequence_stmt_note_token2,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [aux_sym_sequence_stmt_links_token1] = aux_sym_sequence_stmt_links_token1,
  [aux_sym_sequence_stmt_link_token1] = aux_sym_sequence_stmt_link_token1,
  [aux_sym_sequence_stmt_properties_token1] = aux_sym_sequence_stmt_properties_token1,
  [aux_sym_sequence_stmt_details_token1] = aux_sym_sequence_stmt_details_token1,
  [aux_sym_sequence_stmt_loop_token1] = aux_sym_sequence_stmt_loop_token1,
  [aux_sym_sequence_stmt_loop_token2] = anon_sym_end,
  [aux_sym_sequence_stmt_rect_token1] = aux_sym_sequence_stmt_rect_token1,
  [aux_sym_sequence_stmt_opt_token1] = aux_sym_sequence_stmt_opt_token1,
  [aux_sym_sequence_stmt_alt_token1] = aux_sym_sequence_stmt_alt_token1,
  [aux_sym_sequence_stmt_alt_token2] = aux_sym_sequence_stmt_alt_token2,
  [aux_sym_sequence_stmt_par_token1] = aux_sym_sequence_stmt_par_token1,
  [aux_sym_sequence_stmt_par_token2] = aux_sym_sequence_stmt_par_token2,
  [aux_sym_diagram_state_token1] = aux_sym_diagram_state_token1,
  [aux_sym_diagram_state_token2] = aux_sym_diagram_state_token2,
  [aux_sym_state_stmt_simple_token1] = aux_sym_state_stmt_simple_token1,
  [sym_source_file] = sym_source_file,
  [sym_directive] = sym_directive,
  [sym_sequence_signal_plus_sign] = sym_sequence_signal_plus_sign,
  [sym_sequence_signal_minus_sign] = sym_sequence_signal_minus_sign,
  [sym_note_placement_left] = sym_note_placement_left,
  [sym_note_placement_right] = sym_note_placement_right,
  [sym_class_reltype_extension] = sym_class_reltype_extension,
  [sym_class_reltype_composition] = sym_class_reltype_composition,
  [sym_class_reltype_dependency] = sym_class_reltype_dependency,
  [sym_class_linetype_solid] = sym_class_linetype_solid,
  [sym_class_linetype_dotted] = sym_class_linetype_dotted,
  [sym_class_label] = sym_class_label,
  [sym__er_word] = sym__er_word,
  [sym_er_cardinarity_zero_or_one] = sym_er_cardinarity_zero_or_one,
  [sym_er_cardinarity_zero_or_more] = sym_er_cardinarity_zero_or_more,
  [sym_er_cardinarity_one_or_more] = sym_er_cardinarity_one_or_more,
  [sym_er_reltype_non_identifying] = sym_er_reltype_non_identifying,
  [sym_er_reltype_identifying] = sym_er_reltype_identifying,
  [sym_er_attribute_key_type_pk] = sym_er_attribute_key_type_pk,
  [sym_er_attribute_key_type_fk] = sym_er_attribute_key_type_fk,
  [sym_flowchart_direction_lr] = sym_flowchart_direction_lr,
  [sym_flowchart_direction_rl] = sym_flowchart_direction_rl,
  [sym_flowchart_direction_tb] = sym_flowchart_direction_tb,
  [sym_flowchart_direction_bt] = sym_flowchart_direction_bt,
  [sym_flow_text_literal] = sym_flow_text_literal,
  [sym_flow_link_arrow] = sym_flow_link_arrow,
  [sym_flow_link_arrow_start] = sym_flow_link_arrow_start,
  [sym_gantt_meta_format] = sym_gantt_meta_format,
  [sym_gantt_task_text] = sym_gantt_task_text,
  [sym_pie_showdata] = sym_pie_showdata,
  [sym_pie_label] = sym_pie_label,
  [sym_sequence__dotted_open_arrow] = sym_sequence__dotted_open_arrow,
  [sym_sequence__solid_point] = sym_sequence__solid_point,
  [sym__sequence_rest_text] = sym__sequence_rest_text,
  [sym_state_name] = sym_state_name,
  [sym_state_arrow] = sym_state_arrow,
  [sym_state_description] = sym_state_description,
  [sym_state_hide_empty_description] = sym_state_hide_empty_description,
  [sym_state_division] = sym_state_division,
  [sym_state_annotation_fork] = sym_state_annotation_fork,
  [sym_state_annotation_join] = sym_state_annotation_join,
  [sym_state_annotation_choice] = sym_state_annotation_choice,
  [sym_state_direction_tb] = sym_state_direction_tb,
  [sym_state_direction_bt] = sym_state_direction_bt,
  [sym_state_direction_rl] = sym_state_direction_rl,
  [sym_state_direction_lr] = sym_state_direction_lr,
  [sym_diagram_class] = sym_diagram_class,
  [sym__class_stmt] = sym__class_stmt,
  [sym_class_stmt_relation] = sym_class_stmt_relation,
  [sym_class_name] = sym_class_name,
  [sym_class_name_body] = sym_class_name_body,
  [sym_class_generics] = sym_class_generics,
  [sym_class_relation] = sym_class_relation,
  [sym__class_reltype] = sym__class_reltype,
  [sym__class_linetype] = sym__class_linetype,
  [sym_class_stmt_class] = sym_class_stmt_class,
  [sym_class_method_line] = sym_class_method_line,
  [sym_class_annotation_line] = sym_class_annotation_line,
  [sym_class_stmt_method] = sym_class_stmt_method,
  [sym_class_stmt_annotation] = sym_class_stmt_annotation,
  [sym_diagram_er] = sym_diagram_er,
  [sym__er_stmt] = sym__er_stmt,
  [sym_er_stmt_entity] = sym_er_stmt_entity,
  [sym_er_stmt_entity_relation] = sym_er_stmt_entity_relation,
  [sym_er_entity_name] = sym_er_entity_name,
  [sym_er_relation] = sym_er_relation,
  [sym__er_cardinarity] = sym__er_cardinarity,
  [sym__er_reltype] = sym__er_reltype,
  [sym_er_role] = sym_er_role,
  [sym_er_stmt_entity_block] = sym_er_stmt_entity_block,
  [sym_er_stmt_entity_block_inner] = sym_er_stmt_entity_block_inner,
  [sym_er_attribute] = sym_er_attribute,
  [sym_er_attribute_type] = sym_er_attribute_type,
  [sym_er_attribute_name] = sym_er_attribute_name,
  [sym__er_attribute_key_type] = sym__er_attribute_key_type,
  [sym_er_attribute_comment] = sym_er_attribute_comment,
  [sym_diagram_flow] = sym_diagram_flow,
  [sym__flowchart_direction] = sym__flowchart_direction,
  [sym__flow_stmt] = sym__flow_stmt,
  [sym_flow_stmt_direction] = sym_flow_stmt_direction,
  [sym_flow_stmt_vertice] = sym_flow_stmt_vertice,
  [sym_flow_node] = sym_flow_node,
  [sym__flow_link] = sym__flow_link,
  [sym_flow_link_simplelink] = sym_flow_link_simplelink,
  [sym_flow_link_arrowtext] = sym_flow_link_arrowtext,
  [sym_flow_link_middletext] = sym_flow_link_middletext,
  [sym_flow_arrow_text] = sym_flow_arrow_text,
  [sym_flow_vertex_id] = sym_flow_vertex_id,
  [sym_flow_vertex] = sym_flow_vertex,
  [sym__flow_vertex_kind] = sym__flow_vertex_kind,
  [sym_flow_vertex_square] = sym_flow_vertex_square,
  [sym_flow_vertex_circle] = sym_flow_vertex_circle,
  [sym_flow_vertex_ellipse] = sym_flow_vertex_ellipse,
  [sym_flow_vertex_stadium] = sym_flow_vertex_stadium,
  [sym_flow_vertex_subroutine] = sym_flow_vertex_subroutine,
  [sym_flow_vertex_rect] = sym_flow_vertex_rect,
  [sym_flow_vertex_cylinder] = sym_flow_vertex_cylinder,
  [sym_flow_vertex_round] = sym_flow_vertex_round,
  [sym_flow_vertex_diamond] = sym_flow_vertex_diamond,
  [sym_flow_vertex_hexagon] = sym_flow_vertex_hexagon,
  [sym_flow_vertex_odd] = sym_flow_vertex_odd,
  [sym_flow_vertex_trapezoid] = sym_flow_vertex_trapezoid,
  [sym_flow_vertex_inv_trapezoid] = sym_flow_vertex_inv_trapezoid,
  [sym_flow_vertex_leanright] = sym_flow_vertex_leanright,
  [sym_flow_vertex_leanleft] = sym_flow_vertex_leanleft,
  [sym__flow_text] = sym__flow_text,
  [sym_flow_stmt_subgraph] = sym_flow_stmt_subgraph,
  [sym_flow_stmt_subgraph_inner] = sym_flow_stmt_subgraph_inner,
  [sym_flow_vertex_text] = sym_flow_vertex_text,
  [sym_diagram_gantt] = sym_diagram_gantt,
  [sym__gantt_stmt] = sym__gantt_stmt,
  [sym_gantt_stmt_dateformat] = sym_gantt_stmt_dateformat,
  [sym_gantt_stmt_inclusiveenddates] = sym_gantt_stmt_inclusiveenddates,
  [sym_gantt_stmt_topaxis] = sym_gantt_stmt_topaxis,
  [sym_gantt_stmt_axisformat] = sym_gantt_stmt_axisformat,
  [sym_gantt_stmt_includes] = sym_gantt_stmt_includes,
  [sym_gantt_stmt_excludes] = sym_gantt_stmt_excludes,
  [sym_gantt_stmt_todaymarker] = sym_gantt_stmt_todaymarker,
  [sym_gantt_stmt_title] = sym_gantt_stmt_title,
  [sym_gantt_stmt_section] = sym_gantt_stmt_section,
  [sym_gantt_stmt_task] = sym_gantt_stmt_task,
  [sym_diagram_mindmap] = sym_diagram_mindmap,
  [sym_mmap_node] = sym_mmap_node,
  [sym_mmap_node_id] = sym_mmap_node_id,
  [sym_mmap_markdown] = sym_mmap_markdown,
  [sym_mmap_text] = sym_mmap_text,
  [sym_mmap_node_content] = sym_mmap_node_content,
  [sym_mmap_node_square] = sym_mmap_node_square,
  [sym_mmap_node_rounded] = sym_mmap_node_rounded,
  [sym_mmap_node_circle] = sym_mmap_node_circle,
  [sym_mmap_node_cloud] = sym_mmap_node_cloud,
  [sym_mmap_node_bang] = sym_mmap_node_bang,
  [sym_mmap_node_hexagon] = sym_mmap_node_hexagon,
  [sym_mmap_class] = sym_mmap_class,
  [sym_mmap_icon] = sym_mmap_icon,
  [sym_diagram_pie] = sym_diagram_pie,
  [sym__pie_stmt] = sym__pie_stmt,
  [sym_pie_stmt_title] = sym_pie_stmt_title,
  [sym_pie_stmt_element] = sym_pie_stmt_element,
  [sym_diagram_sequence] = sym_diagram_sequence,
  [sym__sequence_stmt] = sym__sequence_stmt,
  [sym__sequence_participant_type] = sym__sequence_participant_type,
  [sym_sequence_stmt_participant] = sym_sequence_stmt_participant,
  [sym_sequence_stmt_actor] = sym_sequence_stmt_actor,
  [sym_sequence_actor] = sym_sequence_actor,
  [sym_sequence_stmt_signal] = sym_sequence_stmt_signal,
  [sym_sequence_signal_type] = sym_sequence_signal_type,
  [sym_sequence_text] = sym_sequence_text,
  [sym_sequence_stmt_autonumber] = sym_sequence_stmt_autonumber,
  [sym_sequence_stmt_activate] = sym_sequence_stmt_activate,
  [sym_sequence_stmt_deactivate] = sym_sequence_stmt_deactivate,
  [sym_sequence_stmt_note] = sym_sequence_stmt_note,
  [sym_sequence_stmt_links] = sym_sequence_stmt_links,
  [sym_sequence_stmt_link] = sym_sequence_stmt_link,
  [sym_sequence_stmt_properties] = sym_sequence_stmt_properties,
  [sym_sequence_stmt_details] = sym_sequence_stmt_details,
  [sym_sequence_note_placement] = sym_sequence_note_placement,
  [sym_sequence_stmt_title] = sym_sequence_stmt_title,
  [sym_sequence_stmt_loop] = sym_sequence_stmt_loop,
  [sym_sequence_stmt_rect] = sym_sequence_stmt_rect,
  [sym_sequence_stmt_opt] = sym_sequence_stmt_opt,
  [aux_sym__sequence_subdocument] = aux_sym__sequence_subdocument,
  [sym_sequence_stmt_alt] = sym_sequence_stmt_alt,
  [sym_sequence_stmt_par] = sym_sequence_stmt_par,
  [sym_diagram_state] = sym_diagram_state,
  [sym__state_stmt] = sym__state_stmt,
  [sym__state_direction] = sym__state_direction,
  [sym_state_stmt_simple] = sym_state_stmt_simple,
  [sym_state_stmt_arrow] = sym_state_stmt_arrow,
  [sym_state_stmt_composite] = sym_state_stmt_composite,
  [sym_state_composite_body] = sym_state_composite_body,
  [sym_state_stmt_annotation] = sym_state_stmt_annotation,
  [sym_state_alias] = sym_state_alias,
  [sym_state_stmt_hide_empty_description] = sym_state_stmt_hide_empty_description,
  [sym__state_annotation] = sym__state_annotation,
  [sym_state_note] = sym_state_note,
  [sym_state_note_placement] = sym_state_note_placement,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_flow_text_literal_repeat1] = aux_sym_flow_text_literal_repeat1,
  [aux_sym_gantt_task_text_repeat1] = aux_sym_gantt_task_text_repeat1,
  [aux_sym_diagram_class_repeat1] = aux_sym_diagram_class_repeat1,
  [aux_sym_class_name_body_repeat1] = aux_sym_class_name_body_repeat1,
  [aux_sym_class_stmt_class_repeat1] = aux_sym_class_stmt_class_repeat1,
  [aux_sym_class_method_line_repeat1] = aux_sym_class_method_line_repeat1,
  [aux_sym_diagram_er_repeat1] = aux_sym_diagram_er_repeat1,
  [aux_sym_er_stmt_entity_block_inner_repeat1] = aux_sym_er_stmt_entity_block_inner_repeat1,
  [aux_sym_diagram_flow_repeat1] = aux_sym_diagram_flow_repeat1,
  [aux_sym_flow_stmt_vertice_repeat1] = aux_sym_flow_stmt_vertice_repeat1,
  [aux_sym_flow_node_repeat1] = aux_sym_flow_node_repeat1,
  [aux_sym_flow_arrow_text_repeat1] = aux_sym_flow_arrow_text_repeat1,
  [aux_sym_flow_stmt_subgraph_inner_repeat1] = aux_sym_flow_stmt_subgraph_inner_repeat1,
  [aux_sym_diagram_gantt_repeat1] = aux_sym_diagram_gantt_repeat1,
  [aux_sym_diagram_mindmap_repeat1] = aux_sym_diagram_mindmap_repeat1,
  [aux_sym_diagram_pie_repeat1] = aux_sym_diagram_pie_repeat1,
  [aux_sym_diagram_sequence_repeat1] = aux_sym_diagram_sequence_repeat1,
  [aux_sym_sequence_actor_repeat1] = aux_sym_sequence_actor_repeat1,
  [aux_sym_sequence_stmt_alt_repeat1] = aux_sym_sequence_stmt_alt_repeat1,
  [aux_sym_sequence_stmt_par_repeat1] = aux_sym_sequence_stmt_par_repeat1,
  [aux_sym_diagram_state_repeat1] = aux_sym_diagram_state_repeat1,
  [aux_sym_state_composite_body_repeat1] = aux_sym_state_composite_body_repeat1,
  [alias_sym_annotation] = alias_sym_annotation,
  [alias_sym_class_classifier_abstract] = alias_sym_class_classifier_abstract,
  [alias_sym_class_style_name] = alias_sym_class_style_name,
  [alias_sym_class_visibility_internal] = alias_sym_class_visibility_internal,
  [alias_sym_class_visibility_private] = alias_sym_class_visibility_private,
  [alias_sym_class_visibility_public] = alias_sym_class_visibility_public,
  [alias_sym_gantt_axis_format] = alias_sym_gantt_axis_format,
  [alias_sym_gantt_end_dates] = alias_sym_gantt_end_dates,
  [alias_sym_gantt_excludes] = alias_sym_gantt_excludes,
  [alias_sym_gantt_includes] = alias_sym_gantt_includes,
  [alias_sym_gantt_section] = alias_sym_gantt_section,
  [alias_sym_gantt_title] = alias_sym_gantt_title,
  [alias_sym_gantt_today_marker] = alias_sym_gantt_today_marker,
  [alias_sym_gantt_top_axis] = alias_sym_gantt_top_axis,
  [alias_sym_note_content] = alias_sym_note_content,
  [alias_sym_sequence_alias] = alias_sym_sequence_alias,
  [alias_sym_sequence_stmt_alt_branch] = alias_sym_sequence_stmt_alt_branch,
  [alias_sym_sequence_stmt_loop_inner] = alias_sym_sequence_stmt_loop_inner,
  [alias_sym_sequence_stmt_opt_inner] = alias_sym_sequence_stmt_opt_inner,
  [alias_sym_sequence_stmt_rect_inner] = alias_sym_sequence_stmt_rect_inner,
  [alias_sym_title] = alias_sym_title,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_PERCENT_PERCENT_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_directive_token1] = {
    .visible = true,
    .named = true,
  },
  [sym__whitespace] = {
    .visible = false,
    .named = true,
  },
  [sym__newline] = {
    .visible = false,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym__md_start] = {
    .visible = false,
    .named = true,
  },
  [sym__md_end] = {
    .visible = false,
    .named = true,
  },
  [sym_type_directive] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_note_placement_left_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_note_placement_right_token1] = {
    .visible = true,
    .named = false,
  },
  [sym__class_name] = {
    .visible = false,
    .named = true,
  },
  [sym__alpha_num_token] = {
    .visible = false,
    .named = true,
  },
  [sym__bquote_string] = {
    .visible = false,
    .named = true,
  },
  [sym__dquote_string] = {
    .visible = true,
    .named = true,
  },
  [sym_class_reltype_aggregation] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LT_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT_DOT] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_class_label_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__er_word_token1] = {
    .visible = false,
    .named = false,
  },
  [sym__er_alphanum] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_PIPEo] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_o_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACEo] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_o_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [sym_er_cardinarity_only_one] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DOT_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_DOT] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_er_attribute_key_type_pk_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_er_attribute_key_type_fk_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_flowchart_direction_lr_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_flowchart_direction_lr_token2] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_flowchart_direction_rl_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_flowchart_direction_tb_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_flowchart_direction_tb_token2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_v] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_flowchart_direction_bt_token1] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CARET] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_flow_text_literal_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_flow_text_quoted] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_flow_link_arrow_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_flow_link_arrow_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_flow_link_arrow_token3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_flow_link_arrow_start_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_flow_link_arrow_start_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_flow_link_arrow_start_token3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_gantt_meta_format_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_gantt_task_text_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_gantt_task_data] = {
    .visible = true,
    .named = true,
  },
  [sym__mindmap_text] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_pie_showdata_token1] = {
    .visible = true,
    .named = false,
  },
  [sym_pie_title] = {
    .visible = true,
    .named = true,
  },
  [sym_pie_value] = {
    .visible = true,
    .named = true,
  },
  [sym_sequence__solid_arrow] = {
    .visible = true,
    .named = true,
  },
  [sym_sequence__dotted_arrow] = {
    .visible = true,
    .named = true,
  },
  [sym_sequence__solid_open_arrow] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DASH_DASH_GT] = {
    .visible = true,
    .named = false,
  },
  [sym_sequence__solid_cross] = {
    .visible = true,
    .named = true,
  },
  [sym_sequence__dotted_cross] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DASH_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [sym_sequence__dotted_point] = {
    .visible = true,
    .named = true,
  },
  [sym__sequence_actor_word] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_LBRACK_STAR_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_state_name_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_state_hide_empty_description_token1] = {
    .visible = true,
    .named = false,
  },
  [sym_state_id] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_state_annotation_fork_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_state_annotation_fork_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_state_annotation_join_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_state_annotation_join_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_state_annotation_choice_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_state_annotation_choice_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_state_direction_tb_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_state_direction_bt_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_state_direction_rl_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_state_direction_lr_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_diagram_class_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_diagram_class_token2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TILDE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_class_generics_token1] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_class] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON_COLON_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUND] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOLLAR] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LT_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_GT] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_diagram_er_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_diagram_flow_token1] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_flow_stmt_direction_token1] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASH_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK_BSLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_subgraph] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_end] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_diagram_gantt_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_gantt_stmt_dateformat_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_gantt_stmt_inclusiveenddates_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_gantt_stmt_topaxis_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_gantt_stmt_axisformat_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_gantt_stmt_includes_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_gantt_stmt_excludes_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_gantt_stmt_todaymarker_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_gantt_stmt_title_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_gantt_stmt_section_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_diagram_mindmap_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_mmap_markdown_token1] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_mmap_text_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_mmap_class_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_mmap_class_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_mmap_icon_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_mmap_icon_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_diagram_pie_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_diagram_sequence_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__sequence_participant_type_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__sequence_participant_type_token2] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_sequence_stmt_participant_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_sequence_stmt_actor_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_sequence_stmt_autonumber_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_sequence_stmt_activate_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_sequence_stmt_deactivate_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_sequence_stmt_note_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_sequence_stmt_note_token2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_sequence_stmt_links_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_sequence_stmt_link_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_sequence_stmt_properties_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_sequence_stmt_details_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_sequence_stmt_loop_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_sequence_stmt_loop_token2] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_sequence_stmt_rect_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_sequence_stmt_opt_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_sequence_stmt_alt_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_sequence_stmt_alt_token2] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_sequence_stmt_par_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_sequence_stmt_par_token2] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_diagram_state_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_diagram_state_token2] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_state_stmt_simple_token1] = {
    .visible = true,
    .named = false,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_sequence_signal_plus_sign] = {
    .visible = true,
    .named = true,
  },
  [sym_sequence_signal_minus_sign] = {
    .visible = true,
    .named = true,
  },
  [sym_note_placement_left] = {
    .visible = true,
    .named = true,
  },
  [sym_note_placement_right] = {
    .visible = true,
    .named = true,
  },
  [sym_class_reltype_extension] = {
    .visible = true,
    .named = true,
  },
  [sym_class_reltype_composition] = {
    .visible = true,
    .named = true,
  },
  [sym_class_reltype_dependency] = {
    .visible = true,
    .named = true,
  },
  [sym_class_linetype_solid] = {
    .visible = true,
    .named = true,
  },
  [sym_class_linetype_dotted] = {
    .visible = true,
    .named = true,
  },
  [sym_class_label] = {
    .visible = true,
    .named = true,
  },
  [sym__er_word] = {
    .visible = false,
    .named = true,
  },
  [sym_er_cardinarity_zero_or_one] = {
    .visible = true,
    .named = true,
  },
  [sym_er_cardinarity_zero_or_more] = {
    .visible = true,
    .named = true,
  },
  [sym_er_cardinarity_one_or_more] = {
    .visible = true,
    .named = true,
  },
  [sym_er_reltype_non_identifying] = {
    .visible = true,
    .named = true,
  },
  [sym_er_reltype_identifying] = {
    .visible = true,
    .named = true,
  },
  [sym_er_attribute_key_type_pk] = {
    .visible = true,
    .named = true,
  },
  [sym_er_attribute_key_type_fk] = {
    .visible = true,
    .named = true,
  },
  [sym_flowchart_direction_lr] = {
    .visible = true,
    .named = true,
  },
  [sym_flowchart_direction_rl] = {
    .visible = true,
    .named = true,
  },
  [sym_flowchart_direction_tb] = {
    .visible = true,
    .named = true,
  },
  [sym_flowchart_direction_bt] = {
    .visible = true,
    .named = true,
  },
  [sym_flow_text_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_flow_link_arrow] = {
    .visible = true,
    .named = true,
  },
  [sym_flow_link_arrow_start] = {
    .visible = true,
    .named = true,
  },
  [sym_gantt_meta_format] = {
    .visible = true,
    .named = true,
  },
  [sym_gantt_task_text] = {
    .visible = true,
    .named = true,
  },
  [sym_pie_showdata] = {
    .visible = true,
    .named = true,
  },
  [sym_pie_label] = {
    .visible = true,
    .named = true,
  },
  [sym_sequence__dotted_open_arrow] = {
    .visible = true,
    .named = true,
  },
  [sym_sequence__solid_point] = {
    .visible = true,
    .named = true,
  },
  [sym__sequence_rest_text] = {
    .visible = false,
    .named = true,
  },
  [sym_state_name] = {
    .visible = true,
    .named = true,
  },
  [sym_state_arrow] = {
    .visible = true,
    .named = true,
  },
  [sym_state_description] = {
    .visible = true,
    .named = true,
  },
  [sym_state_hide_empty_description] = {
    .visible = true,
    .named = true,
  },
  [sym_state_division] = {
    .visible = true,
    .named = true,
  },
  [sym_state_annotation_fork] = {
    .visible = true,
    .named = true,
  },
  [sym_state_annotation_join] = {
    .visible = true,
    .named = true,
  },
  [sym_state_annotation_choice] = {
    .visible = true,
    .named = true,
  },
  [sym_state_direction_tb] = {
    .visible = true,
    .named = true,
  },
  [sym_state_direction_bt] = {
    .visible = true,
    .named = true,
  },
  [sym_state_direction_rl] = {
    .visible = true,
    .named = true,
  },
  [sym_state_direction_lr] = {
    .visible = true,
    .named = true,
  },
  [sym_diagram_class] = {
    .visible = true,
    .named = true,
  },
  [sym__class_stmt] = {
    .visible = false,
    .named = true,
    .supertype = true,
  },
  [sym_class_stmt_relation] = {
    .visible = true,
    .named = true,
  },
  [sym_class_name] = {
    .visible = true,
    .named = true,
  },
  [sym_class_name_body] = {
    .visible = true,
    .named = true,
  },
  [sym_class_generics] = {
    .visible = true,
    .named = true,
  },
  [sym_class_relation] = {
    .visible = true,
    .named = true,
  },
  [sym__class_reltype] = {
    .visible = false,
    .named = true,
    .supertype = true,
  },
  [sym__class_linetype] = {
    .visible = false,
    .named = true,
    .supertype = true,
  },
  [sym_class_stmt_class] = {
    .visible = true,
    .named = true,
  },
  [sym_class_method_line] = {
    .visible = true,
    .named = true,
  },
  [sym_class_annotation_line] = {
    .visible = true,
    .named = true,
  },
  [sym_class_stmt_method] = {
    .visible = true,
    .named = true,
  },
  [sym_class_stmt_annotation] = {
    .visible = true,
    .named = true,
  },
  [sym_diagram_er] = {
    .visible = true,
    .named = true,
  },
  [sym__er_stmt] = {
    .visible = false,
    .named = true,
    .supertype = true,
  },
  [sym_er_stmt_entity] = {
    .visible = true,
    .named = true,
  },
  [sym_er_stmt_entity_relation] = {
    .visible = true,
    .named = true,
  },
  [sym_er_entity_name] = {
    .visible = true,
    .named = true,
  },
  [sym_er_relation] = {
    .visible = true,
    .named = true,
  },
  [sym__er_cardinarity] = {
    .visible = false,
    .named = true,
    .supertype = true,
  },
  [sym__er_reltype] = {
    .visible = false,
    .named = true,
    .supertype = true,
  },
  [sym_er_role] = {
    .visible = true,
    .named = true,
  },
  [sym_er_stmt_entity_block] = {
    .visible = true,
    .named = true,
  },
  [sym_er_stmt_entity_block_inner] = {
    .visible = true,
    .named = true,
  },
  [sym_er_attribute] = {
    .visible = true,
    .named = true,
  },
  [sym_er_attribute_type] = {
    .visible = true,
    .named = true,
  },
  [sym_er_attribute_name] = {
    .visible = true,
    .named = true,
  },
  [sym__er_attribute_key_type] = {
    .visible = false,
    .named = true,
    .supertype = true,
  },
  [sym_er_attribute_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_diagram_flow] = {
    .visible = true,
    .named = true,
  },
  [sym__flowchart_direction] = {
    .visible = false,
    .named = true,
    .supertype = true,
  },
  [sym__flow_stmt] = {
    .visible = false,
    .named = true,
    .supertype = true,
  },
  [sym_flow_stmt_direction] = {
    .visible = true,
    .named = true,
  },
  [sym_flow_stmt_vertice] = {
    .visible = true,
    .named = true,
  },
  [sym_flow_node] = {
    .visible = true,
    .named = true,
  },
  [sym__flow_link] = {
    .visible = false,
    .named = true,
    .supertype = true,
  },
  [sym_flow_link_simplelink] = {
    .visible = true,
    .named = true,
  },
  [sym_flow_link_arrowtext] = {
    .visible = true,
    .named = true,
  },
  [sym_flow_link_middletext] = {
    .visible = true,
    .named = true,
  },
  [sym_flow_arrow_text] = {
    .visible = true,
    .named = true,
  },
  [sym_flow_vertex_id] = {
    .visible = true,
    .named = true,
  },
  [sym_flow_vertex] = {
    .visible = true,
    .named = true,
  },
  [sym__flow_vertex_kind] = {
    .visible = false,
    .named = true,
    .supertype = true,
  },
  [sym_flow_vertex_square] = {
    .visible = true,
    .named = true,
  },
  [sym_flow_vertex_circle] = {
    .visible = true,
    .named = true,
  },
  [sym_flow_vertex_ellipse] = {
    .visible = true,
    .named = true,
  },
  [sym_flow_vertex_stadium] = {
    .visible = true,
    .named = true,
  },
  [sym_flow_vertex_subroutine] = {
    .visible = true,
    .named = true,
  },
  [sym_flow_vertex_rect] = {
    .visible = true,
    .named = true,
  },
  [sym_flow_vertex_cylinder] = {
    .visible = true,
    .named = true,
  },
  [sym_flow_vertex_round] = {
    .visible = true,
    .named = true,
  },
  [sym_flow_vertex_diamond] = {
    .visible = true,
    .named = true,
  },
  [sym_flow_vertex_hexagon] = {
    .visible = true,
    .named = true,
  },
  [sym_flow_vertex_odd] = {
    .visible = true,
    .named = true,
  },
  [sym_flow_vertex_trapezoid] = {
    .visible = true,
    .named = true,
  },
  [sym_flow_vertex_inv_trapezoid] = {
    .visible = true,
    .named = true,
  },
  [sym_flow_vertex_leanright] = {
    .visible = true,
    .named = true,
  },
  [sym_flow_vertex_leanleft] = {
    .visible = true,
    .named = true,
  },
  [sym__flow_text] = {
    .visible = false,
    .named = true,
  },
  [sym_flow_stmt_subgraph] = {
    .visible = true,
    .named = true,
  },
  [sym_flow_stmt_subgraph_inner] = {
    .visible = true,
    .named = true,
  },
  [sym_flow_vertex_text] = {
    .visible = true,
    .named = true,
  },
  [sym_diagram_gantt] = {
    .visible = true,
    .named = true,
  },
  [sym__gantt_stmt] = {
    .visible = false,
    .named = true,
    .supertype = true,
  },
  [sym_gantt_stmt_dateformat] = {
    .visible = true,
    .named = true,
  },
  [sym_gantt_stmt_inclusiveenddates] = {
    .visible = true,
    .named = true,
  },
  [sym_gantt_stmt_topaxis] = {
    .visible = true,
    .named = true,
  },
  [sym_gantt_stmt_axisformat] = {
    .visible = true,
    .named = true,
  },
  [sym_gantt_stmt_includes] = {
    .visible = true,
    .named = true,
  },
  [sym_gantt_stmt_excludes] = {
    .visible = true,
    .named = true,
  },
  [sym_gantt_stmt_todaymarker] = {
    .visible = true,
    .named = true,
  },
  [sym_gantt_stmt_title] = {
    .visible = true,
    .named = true,
  },
  [sym_gantt_stmt_section] = {
    .visible = true,
    .named = true,
  },
  [sym_gantt_stmt_task] = {
    .visible = true,
    .named = true,
  },
  [sym_diagram_mindmap] = {
    .visible = true,
    .named = true,
  },
  [sym_mmap_node] = {
    .visible = true,
    .named = true,
  },
  [sym_mmap_node_id] = {
    .visible = true,
    .named = true,
  },
  [sym_mmap_markdown] = {
    .visible = true,
    .named = true,
  },
  [sym_mmap_text] = {
    .visible = true,
    .named = true,
  },
  [sym_mmap_node_content] = {
    .visible = true,
    .named = true,
  },
  [sym_mmap_node_square] = {
    .visible = true,
    .named = true,
  },
  [sym_mmap_node_rounded] = {
    .visible = true,
    .named = true,
  },
  [sym_mmap_node_circle] = {
    .visible = true,
    .named = true,
  },
  [sym_mmap_node_cloud] = {
    .visible = true,
    .named = true,
  },
  [sym_mmap_node_bang] = {
    .visible = true,
    .named = true,
  },
  [sym_mmap_node_hexagon] = {
    .visible = true,
    .named = true,
  },
  [sym_mmap_class] = {
    .visible = true,
    .named = true,
  },
  [sym_mmap_icon] = {
    .visible = true,
    .named = true,
  },
  [sym_diagram_pie] = {
    .visible = true,
    .named = true,
  },
  [sym__pie_stmt] = {
    .visible = false,
    .named = true,
    .supertype = true,
  },
  [sym_pie_stmt_title] = {
    .visible = true,
    .named = true,
  },
  [sym_pie_stmt_element] = {
    .visible = true,
    .named = true,
  },
  [sym_diagram_sequence] = {
    .visible = true,
    .named = true,
  },
  [sym__sequence_stmt] = {
    .visible = false,
    .named = true,
    .supertype = true,
  },
  [sym__sequence_participant_type] = {
    .visible = false,
    .named = true,
  },
  [sym_sequence_stmt_participant] = {
    .visible = true,
    .named = true,
  },
  [sym_sequence_stmt_actor] = {
    .visible = true,
    .named = true,
  },
  [sym_sequence_actor] = {
    .visible = true,
    .named = true,
  },
  [sym_sequence_stmt_signal] = {
    .visible = true,
    .named = true,
  },
  [sym_sequence_signal_type] = {
    .visible = true,
    .named = true,
  },
  [sym_sequence_text] = {
    .visible = true,
    .named = true,
  },
  [sym_sequence_stmt_autonumber] = {
    .visible = true,
    .named = true,
  },
  [sym_sequence_stmt_activate] = {
    .visible = true,
    .named = true,
  },
  [sym_sequence_stmt_deactivate] = {
    .visible = true,
    .named = true,
  },
  [sym_sequence_stmt_note] = {
    .visible = true,
    .named = true,
  },
  [sym_sequence_stmt_links] = {
    .visible = true,
    .named = true,
  },
  [sym_sequence_stmt_link] = {
    .visible = true,
    .named = true,
  },
  [sym_sequence_stmt_properties] = {
    .visible = true,
    .named = true,
  },
  [sym_sequence_stmt_details] = {
    .visible = true,
    .named = true,
  },
  [sym_sequence_note_placement] = {
    .visible = true,
    .named = true,
  },
  [sym_sequence_stmt_title] = {
    .visible = true,
    .named = true,
  },
  [sym_sequence_stmt_loop] = {
    .visible = true,
    .named = true,
  },
  [sym_sequence_stmt_rect] = {
    .visible = true,
    .named = true,
  },
  [sym_sequence_stmt_opt] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__sequence_subdocument] = {
    .visible = false,
    .named = false,
  },
  [sym_sequence_stmt_alt] = {
    .visible = true,
    .named = true,
  },
  [sym_sequence_stmt_par] = {
    .visible = true,
    .named = true,
  },
  [sym_diagram_state] = {
    .visible = true,
    .named = true,
  },
  [sym__state_stmt] = {
    .visible = false,
    .named = true,
    .supertype = true,
  },
  [sym__state_direction] = {
    .visible = false,
    .named = true,
    .supertype = true,
  },
  [sym_state_stmt_simple] = {
    .visible = true,
    .named = true,
  },
  [sym_state_stmt_arrow] = {
    .visible = true,
    .named = true,
  },
  [sym_state_stmt_composite] = {
    .visible = true,
    .named = true,
  },
  [sym_state_composite_body] = {
    .visible = true,
    .named = true,
  },
  [sym_state_stmt_annotation] = {
    .visible = true,
    .named = true,
  },
  [sym_state_alias] = {
    .visible = true,
    .named = true,
  },
  [sym_state_stmt_hide_empty_description] = {
    .visible = true,
    .named = true,
  },
  [sym__state_annotation] = {
    .visible = false,
    .named = true,
    .supertype = true,
  },
  [sym_state_note] = {
    .visible = true,
    .named = true,
  },
  [sym_state_note_placement] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_flow_text_literal_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_gantt_task_text_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_diagram_class_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_class_name_body_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_class_stmt_class_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_class_method_line_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_diagram_er_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_er_stmt_entity_block_inner_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_diagram_flow_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_flow_stmt_vertice_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_flow_node_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_flow_arrow_text_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_flow_stmt_subgraph_inner_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_diagram_gantt_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_diagram_mindmap_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_diagram_pie_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_diagram_sequence_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_sequence_actor_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_sequence_stmt_alt_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_sequence_stmt_par_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_diagram_state_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_state_composite_body_repeat1] = {
    .visible = false,
    .named = false,
  },
  [alias_sym_annotation] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_class_classifier_abstract] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_class_style_name] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_class_visibility_internal] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_class_visibility_private] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_class_visibility_public] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_gantt_axis_format] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_gantt_end_dates] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_gantt_excludes] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_gantt_includes] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_gantt_section] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_gantt_title] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_gantt_today_marker] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_gantt_top_axis] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_note_content] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_sequence_alias] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_sequence_stmt_alt_branch] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_sequence_stmt_loop_inner] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_sequence_stmt_opt_inner] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_sequence_stmt_rect_inner] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_title] = {
    .visible = true,
    .named = true,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [1] = alias_sym_gantt_end_dates,
  },
  [2] = {
    [1] = alias_sym_gantt_top_axis,
  },
  [3] = {
    [1] = alias_sym_gantt_axis_format,
  },
  [4] = {
    [1] = alias_sym_gantt_includes,
  },
  [5] = {
    [1] = alias_sym_gantt_excludes,
  },
  [6] = {
    [1] = alias_sym_gantt_today_marker,
  },
  [7] = {
    [1] = alias_sym_gantt_title,
  },
  [8] = {
    [1] = alias_sym_gantt_section,
  },
  [9] = {
    [2] = alias_sym_title,
  },
  [10] = {
    [2] = alias_sym_sequence_stmt_alt_branch,
  },
  [11] = {
    [0] = sym_state_description,
  },
  [12] = {
    [3] = alias_sym_class_style_name,
  },
  [13] = {
    [1] = alias_sym_annotation,
  },
  [14] = {
    [0] = alias_sym_class_visibility_public,
  },
  [15] = {
    [0] = alias_sym_class_visibility_private,
  },
  [16] = {
    [0] = alias_sym_class_visibility_internal,
  },
  [17] = {
    [1] = alias_sym_class_classifier_abstract,
  },
  [18] = {
    [3] = alias_sym_sequence_alias,
  },
  [19] = {
    [3] = alias_sym_sequence_stmt_loop_inner,
  },
  [20] = {
    [3] = alias_sym_sequence_stmt_rect_inner,
  },
  [21] = {
    [3] = alias_sym_sequence_stmt_opt_inner,
  },
  [22] = {
    [3] = alias_sym_sequence_stmt_alt_branch,
  },
  [23] = {
    [4] = alias_sym_note_content,
  },
  [24] = {
    [0] = alias_sym_class_visibility_public,
    [2] = alias_sym_class_classifier_abstract,
  },
  [25] = {
    [0] = alias_sym_class_visibility_private,
    [2] = alias_sym_class_classifier_abstract,
  },
  [26] = {
    [0] = alias_sym_class_visibility_internal,
    [2] = alias_sym_class_classifier_abstract,
  },
  [27] = {
    [2] = alias_sym_class_classifier_abstract,
  },
  [28] = {
    [1] = alias_sym_sequence_stmt_alt_branch,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  sym_gantt_meta_format, 9,
    sym_gantt_meta_format,
    alias_sym_gantt_axis_format,
    alias_sym_gantt_end_dates,
    alias_sym_gantt_excludes,
    alias_sym_gantt_includes,
    alias_sym_gantt_section,
    alias_sym_gantt_title,
    alias_sym_gantt_today_marker,
    alias_sym_gantt_top_axis,
  sym__sequence_rest_text, 3,
    sym__sequence_rest_text,
    alias_sym_sequence_alias,
    alias_sym_title,
  sym_state_description, 2,
    sym_state_description,
    alias_sym_note_content,
  aux_sym__sequence_subdocument, 5,
    aux_sym__sequence_subdocument,
    alias_sym_sequence_stmt_alt_branch,
    alias_sym_sequence_stmt_loop_inner,
    alias_sym_sequence_stmt_opt_inner,
    alias_sym_sequence_stmt_rect_inner,
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 3,
  [5] = 5,
  [6] = 3,
  [7] = 2,
  [8] = 5,
  [9] = 3,
  [10] = 2,
  [11] = 5,
  [12] = 2,
  [13] = 5,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 17,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 17,
  [24] = 24,
  [25] = 25,
  [26] = 21,
  [27] = 22,
  [28] = 28,
  [29] = 24,
  [30] = 28,
  [31] = 20,
  [32] = 20,
  [33] = 25,
  [34] = 21,
  [35] = 22,
  [36] = 36,
  [37] = 24,
  [38] = 28,
  [39] = 20,
  [40] = 25,
  [41] = 25,
  [42] = 21,
  [43] = 22,
  [44] = 24,
  [45] = 28,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 47,
  [54] = 51,
  [55] = 48,
  [56] = 47,
  [57] = 51,
  [58] = 48,
  [59] = 51,
  [60] = 48,
  [61] = 47,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 113,
  [117] = 85,
  [118] = 86,
  [119] = 87,
  [120] = 88,
  [121] = 89,
  [122] = 90,
  [123] = 91,
  [124] = 92,
  [125] = 93,
  [126] = 94,
  [127] = 95,
  [128] = 96,
  [129] = 97,
  [130] = 98,
  [131] = 99,
  [132] = 100,
  [133] = 101,
  [134] = 102,
  [135] = 103,
  [136] = 104,
  [137] = 105,
  [138] = 106,
  [139] = 107,
  [140] = 108,
  [141] = 109,
  [142] = 110,
  [143] = 111,
  [144] = 112,
  [145] = 145,
  [146] = 114,
  [147] = 115,
  [148] = 145,
  [149] = 96,
  [150] = 93,
  [151] = 90,
  [152] = 91,
  [153] = 92,
  [154] = 93,
  [155] = 94,
  [156] = 95,
  [157] = 86,
  [158] = 97,
  [159] = 98,
  [160] = 99,
  [161] = 100,
  [162] = 101,
  [163] = 102,
  [164] = 103,
  [165] = 104,
  [166] = 105,
  [167] = 106,
  [168] = 107,
  [169] = 108,
  [170] = 109,
  [171] = 110,
  [172] = 111,
  [173] = 112,
  [174] = 145,
  [175] = 113,
  [176] = 94,
  [177] = 114,
  [178] = 115,
  [179] = 95,
  [180] = 96,
  [181] = 97,
  [182] = 98,
  [183] = 99,
  [184] = 100,
  [185] = 89,
  [186] = 102,
  [187] = 103,
  [188] = 104,
  [189] = 105,
  [190] = 106,
  [191] = 107,
  [192] = 108,
  [193] = 109,
  [194] = 110,
  [195] = 111,
  [196] = 112,
  [197] = 145,
  [198] = 90,
  [199] = 114,
  [200] = 115,
  [201] = 85,
  [202] = 86,
  [203] = 91,
  [204] = 92,
  [205] = 87,
  [206] = 88,
  [207] = 85,
  [208] = 87,
  [209] = 88,
  [210] = 89,
  [211] = 101,
  [212] = 212,
  [213] = 213,
  [214] = 214,
  [215] = 215,
  [216] = 216,
  [217] = 217,
  [218] = 218,
  [219] = 219,
  [220] = 220,
  [221] = 221,
  [222] = 222,
  [223] = 223,
  [224] = 224,
  [225] = 225,
  [226] = 226,
  [227] = 227,
  [228] = 228,
  [229] = 229,
  [230] = 230,
  [231] = 231,
  [232] = 232,
  [233] = 233,
  [234] = 234,
  [235] = 235,
  [236] = 236,
  [237] = 237,
  [238] = 238,
  [239] = 239,
  [240] = 240,
  [241] = 241,
  [242] = 242,
  [243] = 243,
  [244] = 244,
  [245] = 245,
  [246] = 246,
  [247] = 247,
  [248] = 248,
  [249] = 249,
  [250] = 250,
  [251] = 251,
  [252] = 252,
  [253] = 253,
  [254] = 254,
  [255] = 255,
  [256] = 256,
  [257] = 257,
  [258] = 258,
  [259] = 259,
  [260] = 260,
  [261] = 261,
  [262] = 262,
  [263] = 263,
  [264] = 264,
  [265] = 265,
  [266] = 228,
  [267] = 267,
  [268] = 268,
  [269] = 269,
  [270] = 270,
  [271] = 271,
  [272] = 272,
  [273] = 273,
  [274] = 274,
  [275] = 275,
  [276] = 276,
  [277] = 277,
  [278] = 278,
  [279] = 279,
  [280] = 280,
  [281] = 281,
  [282] = 282,
  [283] = 228,
  [284] = 284,
  [285] = 285,
  [286] = 286,
  [287] = 287,
  [288] = 288,
  [289] = 289,
  [290] = 290,
  [291] = 291,
  [292] = 292,
  [293] = 293,
  [294] = 294,
  [295] = 295,
  [296] = 296,
  [297] = 297,
  [298] = 298,
  [299] = 299,
  [300] = 300,
  [301] = 301,
  [302] = 302,
  [303] = 303,
  [304] = 304,
  [305] = 305,
  [306] = 306,
  [307] = 307,
  [308] = 308,
  [309] = 304,
  [310] = 310,
  [311] = 311,
  [312] = 312,
  [313] = 313,
  [314] = 304,
  [315] = 304,
  [316] = 316,
  [317] = 317,
  [318] = 318,
  [319] = 319,
  [320] = 320,
  [321] = 321,
  [322] = 322,
  [323] = 323,
  [324] = 324,
  [325] = 325,
  [326] = 326,
  [327] = 327,
  [328] = 328,
  [329] = 329,
  [330] = 330,
  [331] = 331,
  [332] = 332,
  [333] = 333,
  [334] = 334,
  [335] = 335,
  [336] = 336,
  [337] = 337,
  [338] = 338,
  [339] = 339,
  [340] = 340,
  [341] = 341,
  [342] = 342,
  [343] = 343,
  [344] = 344,
  [345] = 345,
  [346] = 346,
  [347] = 347,
  [348] = 348,
  [349] = 349,
  [350] = 350,
  [351] = 351,
  [352] = 352,
  [353] = 353,
  [354] = 354,
  [355] = 355,
  [356] = 356,
  [357] = 357,
  [358] = 358,
  [359] = 233,
  [360] = 360,
  [361] = 361,
  [362] = 362,
  [363] = 354,
  [364] = 354,
  [365] = 354,
  [366] = 262,
  [367] = 367,
  [368] = 368,
  [369] = 227,
  [370] = 370,
  [371] = 371,
  [372] = 233,
  [373] = 262,
  [374] = 374,
  [375] = 375,
  [376] = 370,
  [377] = 377,
  [378] = 378,
  [379] = 379,
  [380] = 380,
  [381] = 381,
  [382] = 382,
  [383] = 383,
  [384] = 370,
  [385] = 385,
  [386] = 370,
  [387] = 387,
  [388] = 388,
  [389] = 389,
  [390] = 390,
  [391] = 391,
  [392] = 222,
  [393] = 393,
  [394] = 394,
  [395] = 395,
  [396] = 396,
  [397] = 397,
  [398] = 398,
  [399] = 399,
  [400] = 400,
  [401] = 401,
  [402] = 241,
  [403] = 403,
  [404] = 404,
  [405] = 405,
  [406] = 406,
  [407] = 389,
  [408] = 408,
  [409] = 409,
  [410] = 380,
  [411] = 306,
  [412] = 412,
  [413] = 413,
  [414] = 303,
  [415] = 415,
  [416] = 416,
  [417] = 417,
  [418] = 418,
  [419] = 419,
  [420] = 420,
  [421] = 421,
  [422] = 422,
  [423] = 423,
  [424] = 424,
  [425] = 425,
  [426] = 426,
  [427] = 427,
  [428] = 428,
  [429] = 429,
  [430] = 430,
  [431] = 431,
  [432] = 263,
  [433] = 433,
  [434] = 265,
  [435] = 282,
  [436] = 436,
  [437] = 437,
  [438] = 438,
  [439] = 225,
  [440] = 245,
  [441] = 441,
  [442] = 442,
  [443] = 443,
  [444] = 444,
  [445] = 445,
  [446] = 446,
  [447] = 447,
  [448] = 448,
  [449] = 449,
  [450] = 450,
  [451] = 451,
  [452] = 452,
  [453] = 453,
  [454] = 454,
  [455] = 455,
  [456] = 456,
  [457] = 457,
  [458] = 458,
  [459] = 459,
  [460] = 460,
  [461] = 461,
  [462] = 270,
  [463] = 463,
  [464] = 464,
  [465] = 465,
  [466] = 444,
  [467] = 467,
  [468] = 444,
  [469] = 444,
  [470] = 470,
  [471] = 471,
  [472] = 472,
  [473] = 473,
  [474] = 474,
  [475] = 475,
  [476] = 476,
  [477] = 477,
  [478] = 478,
  [479] = 479,
  [480] = 480,
  [481] = 481,
  [482] = 482,
  [483] = 483,
  [484] = 484,
  [485] = 485,
  [486] = 486,
  [487] = 487,
  [488] = 488,
  [489] = 489,
  [490] = 490,
  [491] = 491,
  [492] = 492,
  [493] = 493,
  [494] = 494,
  [495] = 495,
  [496] = 496,
  [497] = 497,
  [498] = 498,
  [499] = 499,
  [500] = 500,
  [501] = 501,
  [502] = 502,
  [503] = 503,
  [504] = 504,
  [505] = 505,
  [506] = 506,
  [507] = 507,
  [508] = 508,
  [509] = 509,
  [510] = 510,
  [511] = 511,
  [512] = 512,
  [513] = 513,
  [514] = 514,
  [515] = 515,
  [516] = 516,
  [517] = 517,
  [518] = 518,
  [519] = 519,
  [520] = 520,
  [521] = 521,
  [522] = 522,
  [523] = 425,
  [524] = 524,
  [525] = 525,
  [526] = 520,
  [527] = 527,
  [528] = 528,
  [529] = 529,
  [530] = 478,
  [531] = 531,
  [532] = 532,
  [533] = 533,
  [534] = 534,
  [535] = 535,
  [536] = 536,
  [537] = 537,
  [538] = 538,
  [539] = 539,
  [540] = 540,
  [541] = 541,
  [542] = 542,
  [543] = 543,
  [544] = 544,
  [545] = 545,
  [546] = 546,
  [547] = 547,
  [548] = 548,
  [549] = 549,
  [550] = 550,
  [551] = 551,
  [552] = 552,
  [553] = 553,
  [554] = 535,
  [555] = 537,
  [556] = 538,
  [557] = 539,
  [558] = 558,
  [559] = 559,
  [560] = 560,
  [561] = 561,
  [562] = 562,
  [563] = 563,
  [564] = 561,
  [565] = 565,
  [566] = 478,
  [567] = 535,
  [568] = 537,
  [569] = 538,
  [570] = 539,
  [571] = 571,
  [572] = 572,
  [573] = 573,
  [574] = 574,
  [575] = 561,
  [576] = 565,
  [577] = 478,
  [578] = 535,
  [579] = 537,
  [580] = 538,
  [581] = 539,
  [582] = 562,
  [583] = 583,
  [584] = 561,
  [585] = 565,
  [586] = 540,
  [587] = 543,
  [588] = 545,
  [589] = 522,
  [590] = 521,
  [591] = 591,
  [592] = 508,
  [593] = 593,
  [594] = 594,
  [595] = 492,
  [596] = 540,
  [597] = 543,
  [598] = 545,
  [599] = 522,
  [600] = 562,
  [601] = 565,
  [602] = 508,
  [603] = 593,
  [604] = 594,
  [605] = 492,
  [606] = 540,
  [607] = 543,
  [608] = 545,
  [609] = 522,
  [610] = 594,
  [611] = 508,
  [612] = 593,
  [613] = 594,
  [614] = 492,
  [615] = 546,
  [616] = 571,
  [617] = 573,
  [618] = 480,
  [619] = 515,
  [620] = 497,
  [621] = 516,
  [622] = 546,
  [623] = 571,
  [624] = 573,
  [625] = 480,
  [626] = 515,
  [627] = 497,
  [628] = 516,
  [629] = 546,
  [630] = 571,
  [631] = 573,
  [632] = 480,
  [633] = 515,
  [634] = 497,
  [635] = 516,
  [636] = 518,
  [637] = 549,
  [638] = 552,
  [639] = 593,
  [640] = 541,
  [641] = 512,
  [642] = 518,
  [643] = 549,
  [644] = 552,
  [645] = 645,
  [646] = 541,
  [647] = 512,
  [648] = 518,
  [649] = 549,
  [650] = 552,
  [651] = 541,
  [652] = 512,
  [653] = 653,
  [654] = 654,
  [655] = 655,
  [656] = 562,
  [657] = 657,
  [658] = 658,
  [659] = 659,
  [660] = 660,
  [661] = 661,
  [662] = 662,
  [663] = 663,
  [664] = 664,
  [665] = 665,
  [666] = 666,
  [667] = 667,
  [668] = 668,
  [669] = 669,
  [670] = 670,
  [671] = 664,
  [672] = 672,
  [673] = 673,
  [674] = 674,
  [675] = 675,
  [676] = 676,
  [677] = 677,
  [678] = 678,
  [679] = 679,
  [680] = 667,
  [681] = 681,
  [682] = 669,
  [683] = 683,
  [684] = 664,
  [685] = 667,
  [686] = 686,
  [687] = 687,
  [688] = 688,
  [689] = 689,
  [690] = 690,
  [691] = 691,
  [692] = 692,
  [693] = 667,
  [694] = 694,
  [695] = 669,
  [696] = 664,
  [697] = 697,
  [698] = 698,
  [699] = 699,
  [700] = 700,
  [701] = 701,
  [702] = 702,
  [703] = 703,
  [704] = 704,
  [705] = 705,
  [706] = 706,
  [707] = 707,
  [708] = 708,
  [709] = 709,
  [710] = 710,
  [711] = 711,
  [712] = 712,
  [713] = 713,
  [714] = 714,
  [715] = 715,
  [716] = 708,
  [717] = 717,
  [718] = 718,
  [719] = 719,
  [720] = 720,
  [721] = 721,
  [722] = 722,
  [723] = 723,
  [724] = 708,
  [725] = 711,
  [726] = 706,
  [727] = 443,
  [728] = 728,
  [729] = 729,
  [730] = 730,
  [731] = 731,
  [732] = 732,
  [733] = 470,
  [734] = 734,
  [735] = 669,
  [736] = 436,
  [737] = 737,
  [738] = 711,
  [739] = 706,
  [740] = 740,
  [741] = 708,
  [742] = 706,
  [743] = 743,
  [744] = 744,
  [745] = 745,
  [746] = 746,
  [747] = 711,
  [748] = 748,
  [749] = 749,
  [750] = 750,
  [751] = 751,
  [752] = 752,
  [753] = 753,
  [754] = 754,
  [755] = 755,
  [756] = 756,
  [757] = 757,
  [758] = 758,
  [759] = 752,
  [760] = 760,
  [761] = 114,
  [762] = 762,
  [763] = 763,
  [764] = 764,
  [765] = 765,
  [766] = 766,
  [767] = 767,
  [768] = 768,
  [769] = 769,
  [770] = 770,
  [771] = 771,
  [772] = 755,
  [773] = 773,
  [774] = 774,
  [775] = 775,
  [776] = 776,
  [777] = 777,
  [778] = 750,
  [779] = 751,
  [780] = 752,
  [781] = 781,
  [782] = 782,
  [783] = 756,
  [784] = 784,
  [785] = 785,
  [786] = 786,
  [787] = 787,
  [788] = 788,
  [789] = 789,
  [790] = 790,
  [791] = 754,
  [792] = 782,
  [793] = 793,
  [794] = 794,
  [795] = 795,
  [796] = 796,
  [797] = 787,
  [798] = 798,
  [799] = 799,
  [800] = 800,
  [801] = 801,
  [802] = 802,
  [803] = 803,
  [804] = 804,
  [805] = 805,
  [806] = 806,
  [807] = 775,
  [808] = 808,
  [809] = 809,
  [810] = 786,
  [811] = 787,
  [812] = 788,
  [813] = 789,
  [814] = 790,
  [815] = 754,
  [816] = 782,
  [817] = 748,
  [818] = 818,
  [819] = 819,
  [820] = 788,
  [821] = 115,
  [822] = 786,
  [823] = 823,
  [824] = 824,
  [825] = 758,
  [826] = 826,
  [827] = 790,
  [828] = 828,
  [829] = 829,
  [830] = 830,
  [831] = 786,
  [832] = 787,
  [833] = 788,
  [834] = 789,
  [835] = 790,
  [836] = 754,
  [837] = 782,
  [838] = 755,
  [839] = 756,
  [840] = 767,
  [841] = 841,
  [842] = 842,
  [843] = 758,
  [844] = 844,
  [845] = 845,
  [846] = 846,
  [847] = 804,
  [848] = 848,
  [849] = 849,
  [850] = 850,
  [851] = 851,
  [852] = 852,
  [853] = 853,
  [854] = 806,
  [855] = 750,
  [856] = 795,
  [857] = 849,
  [858] = 800,
  [859] = 767,
  [860] = 845,
  [861] = 861,
  [862] = 862,
  [863] = 808,
  [864] = 804,
  [865] = 694,
  [866] = 866,
  [867] = 867,
  [868] = 802,
  [869] = 869,
  [870] = 699,
  [871] = 774,
  [872] = 774,
  [873] = 849,
  [874] = 800,
  [875] = 869,
  [876] = 845,
  [877] = 861,
  [878] = 862,
  [879] = 808,
  [880] = 804,
  [881] = 775,
  [882] = 882,
  [883] = 883,
  [884] = 750,
  [885] = 885,
  [886] = 751,
  [887] = 752,
  [888] = 862,
  [889] = 849,
  [890] = 800,
  [891] = 891,
  [892] = 845,
  [893] = 861,
  [894] = 862,
  [895] = 808,
  [896] = 896,
  [897] = 755,
  [898] = 756,
  [899] = 899,
  [900] = 758,
  [901] = 901,
  [902] = 902,
  [903] = 751,
  [904] = 861,
  [905] = 905,
  [906] = 906,
  [907] = 907,
  [908] = 853,
  [909] = 767,
  [910] = 910,
  [911] = 789,
  [912] = 912,
  [913] = 913,
  [914] = 914,
  [915] = 915,
  [916] = 916,
  [917] = 774,
  [918] = 918,
  [919] = 775,
  [920] = 920,
};

static TSCharacterRange aux_sym_flow_text_literal_token1_character_set_1[] = {
  {0, 0x08}, {0x0e, 0x1f}, {'!', '('}, {'*', ','}, {'.', '.'}, {'0', ':'}, {'<', '['}, {'^', '{'},
  {'~', 0x10ffff},
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(442);
      ADVANCE_MAP(
        '\n', 462,
        '"', 114,
        '#', 860,
        '$', 866,
        '%', 28,
        '&', 874,
        '(', 863,
        ')', 865,
        '*', 511,
        '+', 475,
        ',', 937,
        '-', 477,
        '.', 55,
        '/', 103,
        ':', 845,
        ';', 871,
        '<', 512,
        '=', 81,
        '>', 514,
        'C', 285,
        'E', 282,
        'S', 203,
        '[', 878,
        '\\', 104,
        ']', 880,
        '^', 593,
        '`', 21,
        'c', 98,
        'e', 99,
        'm', 124,
        'o', 507,
        's', 136,
        'v', 591,
        'x', 80,
        '{', 856,
        '|', 876,
        '}', 858,
        '~', 846,
        '\t', 447,
        ' ', 447,
        'A', 175,
        'a', 175,
        'B', 339,
        'b', 339,
        'D', 148,
        'd', 148,
        'F', 276,
        'f', 276,
        'G', 144,
        'g', 144,
        'H', 257,
        'h', 257,
        'I', 312,
        'i', 312,
        'L', 205,
        'l', 205,
        'N', 321,
        'n', 321,
        'P', 146,
        'p', 146,
        'R', 215,
        'r', 215,
        'T', 171,
        't', 171,
      );
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(69);
      END_STATE();
    case 1:
      if (lookahead == '\t') ADVANCE(450);
      if (lookahead == ' ') ADVANCE(445);
      if (lookahead == '%') ADVANCE(29);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(920);
      END_STATE();
    case 2:
      if (lookahead == '\t') ADVANCE(446);
      if (lookahead == '\n') ADVANCE(463);
      if (lookahead == ' ') ADVANCE(450);
      if (lookahead == '%') ADVANCE(714);
      if (lookahead == ',') ADVANCE(937);
      if (lookahead == '-') ADVANCE(52);
      if (lookahead == ':') ADVANCE(844);
      if (lookahead != 0 &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(800);
      END_STATE();
    case 3:
      ADVANCE_MAP(
        '\t', 446,
        '\n', 463,
        ' ', 450,
        '%', 714,
        'A', 724,
        'a', 724,
        'D', 737,
        'd', 737,
        'E', 760,
        'e', 760,
        'L', 747,
        'l', 747,
        'N', 767,
        'n', 767,
        'O', 772,
        'o', 772,
        'P', 716,
        'p', 716,
        'R', 738,
        'r', 738,
        'S', 739,
        's', 739,
        'T', 751,
        't', 751,
      );
      if (lookahead != 0 &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(800);
      END_STATE();
    case 4:
      ADVANCE_MAP(
        '\t', 446,
        '\n', 463,
        ' ', 450,
        '%', 714,
        'A', 725,
        'a', 725,
        'D', 737,
        'd', 737,
        'E', 760,
        'e', 760,
        'L', 747,
        'l', 747,
        'N', 767,
        'n', 767,
        'O', 772,
        'o', 772,
        'P', 716,
        'p', 716,
        'R', 738,
        'r', 738,
        'S', 739,
        's', 739,
        'T', 751,
        't', 751,
      );
      if (lookahead != 0 &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(800);
      END_STATE();
    case 5:
      ADVANCE_MAP(
        '\t', 446,
        '\n', 463,
        ' ', 450,
        '%', 714,
        'A', 725,
        'a', 725,
        'D', 737,
        'd', 737,
        'E', 756,
        'e', 756,
        'L', 747,
        'l', 747,
        'N', 767,
        'n', 767,
        'O', 772,
        'o', 772,
        'P', 716,
        'p', 716,
        'R', 738,
        'r', 738,
        'S', 739,
        's', 739,
        'T', 751,
        't', 751,
      );
      if (lookahead != 0 &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(800);
      END_STATE();
    case 6:
      if (lookahead == '\t') ADVANCE(446);
      if (lookahead == '\n') ADVANCE(463);
      if (lookahead == ' ') ADVANCE(450);
      if (lookahead == '%') ADVANCE(714);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(779);
      if (lookahead != 0 &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(800);
      END_STATE();
    case 7:
      if (lookahead == '\t') ADVANCE(446);
      if (lookahead == ' ') ADVANCE(450);
      if (lookahead == '%') ADVANCE(714);
      if (lookahead == '+') ADVANCE(475);
      if (lookahead == '-') ADVANCE(476);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(800);
      END_STATE();
    case 8:
      if (lookahead == '\n') ADVANCE(466);
      if (lookahead == '{') ADVANCE(443);
      if (lookahead != 0) ADVANCE(10);
      END_STATE();
    case 9:
      if (lookahead == '\n') ADVANCE(466);
      if (lookahead != 0 &&
          lookahead != '{') ADVANCE(10);
      END_STATE();
    case 10:
      if (lookahead == '\n') ADVANCE(465);
      if (lookahead != 0) ADVANCE(10);
      END_STATE();
    case 11:
      ADVANCE_MAP(
        '\n', 463,
        '#', 860,
        '%', 29,
        '(', 861,
        ')', 864,
        '+', 475,
        '-', 476,
        '<', 78,
        '}', 857,
        '~', 847,
        '\t', 450,
        ' ', 450,
      );
      if (lookahead == '!' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(503);
      END_STATE();
    case 12:
      ADVANCE_MAP(
        '\n', 463,
        '%', 527,
        '-', 529,
        '[', 528,
        '}', 859,
        '\t', 452,
        ' ', 452,
        'D', 544,
        'd', 544,
        'H', 545,
        'h', 545,
        'N', 555,
        'n', 555,
        'S', 563,
        's', 563,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(570);
      if (lookahead != 0 &&
          (lookahead < '0' || ';' < lookahead)) ADVANCE(571);
      END_STATE();
    case 13:
      if (lookahead == '\n') ADVANCE(463);
      if (lookahead == '%') ADVANCE(610);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(461);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(611);
      END_STATE();
    case 14:
      if (lookahead == ' ') ADVANCE(935);
      END_STATE();
    case 15:
      if (lookahead == ' ') ADVANCE(953);
      if (lookahead == 'D') ADVANCE(273);
      END_STATE();
    case 16:
      if (lookahead == ' ') ADVANCE(317);
      END_STATE();
    case 17:
      if (lookahead == ' ') ADVANCE(319);
      END_STATE();
    case 18:
      if (lookahead == ' ') ADVANCE(217);
      END_STATE();
    case 19:
      if (lookahead == ' ') ADVANCE(199);
      END_STATE();
    case 20:
      if (lookahead == '"') ADVANCE(114);
      if (lookahead == '%') ADVANCE(33);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(451);
      if (lookahead != 0) ADVANCE(423);
      END_STATE();
    case 21:
      if (lookahead == '"') ADVANCE(472);
      END_STATE();
    case 22:
      if (lookahead == '"') ADVANCE(572);
      if (lookahead != 0) ADVANCE(22);
      END_STATE();
    case 23:
      ADVANCE_MAP(
        '"', 421,
        '%', 29,
        '*', 511,
        '-', 59,
        '.', 66,
        ':', 844,
        '<', 513,
        '>', 514,
        '`', 422,
        'o', 508,
        '|', 84,
        '~', 846,
        '\t', 450,
        ' ', 450,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(484);
      END_STATE();
    case 24:
      if (lookahead == '"') ADVANCE(421);
      if (lookahead == '%') ADVANCE(29);
      if (lookahead == '[') ADVANCE(53);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(450);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(826);
      END_STATE();
    case 25:
      if (lookahead == '"') ADVANCE(505);
      if (lookahead != 0) ADVANCE(25);
      END_STATE();
    case 26:
      if (lookahead == '"') ADVANCE(596);
      if (lookahead == '%') ADVANCE(597);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(450);
      if ((!eof && set_contains(aux_sym_flow_text_literal_token1_character_set_1, 9, lookahead))) ADVANCE(598);
      END_STATE();
    case 27:
      if (lookahead == '"') ADVANCE(599);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(27);
      END_STATE();
    case 28:
      if (lookahead == '%') ADVANCE(8);
      END_STATE();
    case 29:
      if (lookahead == '%') ADVANCE(9);
      END_STATE();
    case 30:
      if (lookahead == '%') ADVANCE(614);
      if (lookahead == ':') ADVANCE(844);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(450);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(681);
      END_STATE();
    case 31:
      if (lookahead == '%') ADVANCE(597);
      if (lookahead == ')') ADVANCE(47);
      if (lookahead == '}') ADVANCE(139);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(450);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '-' &&
          lookahead != '/' &&
          lookahead != ';' &&
          lookahead != '\\' &&
          lookahead != ']' &&
          lookahead != '|' &&
          lookahead != '}') ADVANCE(598);
      END_STATE();
    case 32:
      ADVANCE_MAP(
        '%', 597,
        ')', 864,
        '-', 50,
        '/', 103,
        '\\', 104,
        ']', 880,
        '|', 105,
        '}', 857,
        '\t', 450,
        ' ', 450,
      );
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ';') ADVANCE(598);
      END_STATE();
    case 33:
      if (lookahead == '%') ADVANCE(918);
      if (lookahead != 0 &&
          lookahead != '`') ADVANCE(917);
      END_STATE();
    case 34:
      if (lookahead == '%') ADVANCE(688);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(454);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(689);
      END_STATE();
    case 35:
      if (lookahead == '%') ADVANCE(830);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(450);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '-' &&
          lookahead != ':' &&
          lookahead != '{') ADVANCE(831);
      END_STATE();
    case 36:
      if (lookahead == '%') ADVANCE(850);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(456);
      if (lookahead != 0 &&
          lookahead != '~') ADVANCE(851);
      END_STATE();
    case 37:
      if (lookahead == '%') ADVANCE(684);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(457);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(685);
      END_STATE();
    case 38:
      if (lookahead == '%') ADVANCE(915);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(458);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '`') ADVANCE(916);
      END_STATE();
    case 39:
      if (lookahead == '%') ADVANCE(444);
      END_STATE();
    case 40:
      if (lookahead == '%') ADVANCE(924);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(459);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ')') ADVANCE(925);
      END_STATE();
    case 41:
      ADVANCE_MAP(
        '%', 29,
        '-', 62,
        '.', 57,
        '<', 65,
        '=', 83,
        '\t', 450,
        ' ', 450,
        'o', 485,
        'x', 485,
      );
      if (lookahead == '!' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(503);
      END_STATE();
    case 42:
      if (lookahead == '%') ADVANCE(29);
      if (lookahead == 'e') ADVANCE(491);
      if (lookahead == 's') ADVANCE(494);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(450);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(497);
      if (lookahead == '!' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(503);
      END_STATE();
    case 43:
      if (lookahead == '%') ADVANCE(29);
      if (lookahead == '}') ADVANCE(45);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(449);
      if (lookahead != 0) ADVANCE(140);
      END_STATE();
    case 44:
      if (lookahead == '%') ADVANCE(29);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(455);
      if (('\n' <= lookahead && lookahead <= '\r')) ADVANCE(419);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(700);
      END_STATE();
    case 45:
      if (lookahead == '%') ADVANCE(39);
      if (lookahead == '}') ADVANCE(45);
      if (lookahead != 0) ADVANCE(140);
      END_STATE();
    case 46:
      if (lookahead == '(') ADVANCE(921);
      END_STATE();
    case 47:
      if (lookahead == ')') ADVANCE(882);
      if (lookahead == ']') ADVANCE(891);
      END_STATE();
    case 48:
      if (lookahead == ')') ADVANCE(885);
      if (lookahead == ']') ADVANCE(887);
      END_STATE();
    case 49:
      if (lookahead == ')') ADVANCE(710);
      if (lookahead == '>') ADVANCE(706);
      if (lookahead == 'x') ADVANCE(708);
      END_STATE();
    case 50:
      if (lookahead == ')') ADVANCE(709);
      END_STATE();
    case 51:
      if (lookahead == ')') ADVANCE(709);
      if (lookahead == '-') ADVANCE(605);
      if (lookahead == '.') ADVANCE(607);
      END_STATE();
    case 52:
      if (lookahead == ')') ADVANCE(709);
      if (lookahead == '-') ADVANCE(49);
      if (lookahead == '>') ADVANCE(704);
      if (lookahead == 'x') ADVANCE(707);
      END_STATE();
    case 53:
      if (lookahead == '*') ADVANCE(107);
      END_STATE();
    case 54:
      if (lookahead == '*') ADVANCE(107);
      if (lookahead == '[') ADVANCE(190);
      END_STATE();
    case 55:
      if (lookahead == '-') ADVANCE(582);
      if (lookahead == '.') ADVANCE(519);
      END_STATE();
    case 56:
      if (lookahead == '-') ADVANCE(605);
      if (lookahead == '.') ADVANCE(607);
      END_STATE();
    case 57:
      if (lookahead == '-') ADVANCE(418);
      if (lookahead == '.') ADVANCE(57);
      END_STATE();
    case 58:
      if (lookahead == '-') ADVANCE(601);
      if (lookahead == '>' ||
          lookahead == 'o' ||
          lookahead == 'x') ADVANCE(600);
      END_STATE();
    case 59:
      if (lookahead == '-') ADVANCE(515);
      END_STATE();
    case 60:
      if (lookahead == '-') ADVANCE(515);
      if (lookahead == '.') ADVANCE(583);
      END_STATE();
    case 61:
      if (lookahead == '-') ADVANCE(517);
      END_STATE();
    case 62:
      if (lookahead == '-') ADVANCE(58);
      if (lookahead == '.') ADVANCE(57);
      END_STATE();
    case 63:
      if (lookahead == '-') ADVANCE(56);
      if (lookahead == '.') ADVANCE(57);
      if (lookahead == '=') ADVANCE(81);
      END_STATE();
    case 64:
      if (lookahead == '-') ADVANCE(56);
      if (lookahead == '.') ADVANCE(57);
      if (lookahead == '=') ADVANCE(81);
      if (lookahead == '{') ADVANCE(578);
      if (lookahead == '|') ADVANCE(576);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(227);
      END_STATE();
    case 65:
      if (lookahead == '-') ADVANCE(62);
      if (lookahead == '.') ADVANCE(57);
      if (lookahead == '=') ADVANCE(83);
      END_STATE();
    case 66:
      if (lookahead == '.') ADVANCE(519);
      END_STATE();
    case 67:
      if (lookahead == '2') ADVANCE(842);
      END_STATE();
    case 68:
      if (lookahead == '2') ADVANCE(952);
      END_STATE();
    case 69:
      if (lookahead == ':') ADVANCE(74);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(69);
      END_STATE();
    case 70:
      if (lookahead == ':') ADVANCE(854);
      END_STATE();
    case 71:
      if (lookahead == ':') ADVANCE(854);
      if (lookahead == 'i') ADVANCE(119);
      END_STATE();
    case 72:
      if (lookahead == ':') ADVANCE(919);
      END_STATE();
    case 73:
      if (lookahead == ':') ADVANCE(919);
      if (lookahead == 'i') ADVANCE(119);
      END_STATE();
    case 74:
      if (lookahead == ':') ADVANCE(73);
      END_STATE();
    case 75:
      if (lookahead == ':') ADVANCE(70);
      END_STATE();
    case 76:
      if (lookahead == ':') ADVANCE(72);
      END_STATE();
    case 77:
      if (lookahead == ':') ADVANCE(76);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(77);
      END_STATE();
    case 78:
      if (lookahead == '<') ADVANCE(867);
      END_STATE();
    case 79:
      if (lookahead == '<') ADVANCE(178);
      END_STATE();
    case 80:
      if (lookahead == '=') ADVANCE(81);
      END_STATE();
    case 81:
      if (lookahead == '=') ADVANCE(606);
      END_STATE();
    case 82:
      if (lookahead == '=') ADVANCE(603);
      if (lookahead == '>' ||
          lookahead == 'o' ||
          lookahead == 'x') ADVANCE(602);
      END_STATE();
    case 83:
      if (lookahead == '=') ADVANCE(82);
      END_STATE();
    case 84:
      if (lookahead == '>') ADVANCE(510);
      END_STATE();
    case 85:
      if (lookahead == '>') ADVANCE(868);
      END_STATE();
    case 86:
      if (lookahead == '>') ADVANCE(832);
      END_STATE();
    case 87:
      if (lookahead == '>') ADVANCE(834);
      END_STATE();
    case 88:
      if (lookahead == '>') ADVANCE(836);
      END_STATE();
    case 89:
      if (lookahead == '>') ADVANCE(86);
      END_STATE();
    case 90:
      if (lookahead == '>') ADVANCE(87);
      END_STATE();
    case 91:
      if (lookahead == '>') ADVANCE(88);
      END_STATE();
    case 92:
      if (lookahead == 'A') ADVANCE(371);
      if (lookahead == 'a') ADVANCE(101);
      END_STATE();
    case 93:
      if (lookahead == 'D') ADVANCE(943);
      if (lookahead == 'd') ADVANCE(943);
      END_STATE();
    case 94:
      if (lookahead == 'D') ADVANCE(272);
      END_STATE();
    case 95:
      if (lookahead == 'D') ADVANCE(273);
      END_STATE();
    case 96:
      if (lookahead == 'D') ADVANCE(274);
      END_STATE();
    case 97:
      if (lookahead == 'D') ADVANCE(274);
      if (lookahead == '_') ADVANCE(163);
      END_STATE();
    case 98:
      if (lookahead == 'L') ADVANCE(145);
      if (lookahead == 'l') ADVANCE(92);
      END_STATE();
    case 99:
      ADVANCE_MAP(
        'N', 192,
        'n', 93,
        'L', 370,
        'l', 370,
        'R', 194,
        'r', 194,
        'X', 176,
        'x', 176,
      );
      END_STATE();
    case 100:
      if (lookahead == 'S') ADVANCE(94);
      if (lookahead == 's') ADVANCE(852);
      END_STATE();
    case 101:
      if (lookahead == 'S') ADVANCE(362);
      if (lookahead == 's') ADVANCE(100);
      END_STATE();
    case 102:
      if (lookahead == '[') ADVANCE(190);
      END_STATE();
    case 103:
      if (lookahead == ']') ADVANCE(897);
      END_STATE();
    case 104:
      if (lookahead == ']') ADVANCE(895);
      END_STATE();
    case 105:
      if (lookahead == ']') ADVANCE(889);
      END_STATE();
    case 106:
      if (lookahead == ']') ADVANCE(889);
      if (lookahead == 'o') ADVANCE(575);
      if (lookahead == '{') ADVANCE(580);
      if (lookahead == '|') ADVANCE(581);
      END_STATE();
    case 107:
      if (lookahead == ']') ADVANCE(801);
      END_STATE();
    case 108:
      if (lookahead == ']') ADVANCE(833);
      END_STATE();
    case 109:
      if (lookahead == ']') ADVANCE(835);
      END_STATE();
    case 110:
      if (lookahead == ']') ADVANCE(837);
      END_STATE();
    case 111:
      if (lookahead == ']') ADVANCE(108);
      END_STATE();
    case 112:
      if (lookahead == ']') ADVANCE(109);
      END_STATE();
    case 113:
      if (lookahead == ']') ADVANCE(110);
      END_STATE();
    case 114:
      if (lookahead == '`') ADVANCE(471);
      END_STATE();
    case 115:
      if (lookahead == '`') ADVANCE(504);
      if (lookahead != 0) ADVANCE(115);
      END_STATE();
    case 116:
      if (lookahead == 'a') ADVANCE(133);
      END_STATE();
    case 117:
      if (lookahead == 'a') ADVANCE(134);
      END_STATE();
    case 118:
      if (lookahead == 'b') ADVANCE(122);
      END_STATE();
    case 119:
      if (lookahead == 'c') ADVANCE(132);
      END_STATE();
    case 120:
      if (lookahead == 'd') ADVANCE(125);
      END_STATE();
    case 121:
      if (lookahead == 'd') ADVANCE(900);
      END_STATE();
    case 122:
      if (lookahead == 'g') ADVANCE(135);
      END_STATE();
    case 123:
      if (lookahead == 'h') ADVANCE(898);
      END_STATE();
    case 124:
      if (lookahead == 'i') ADVANCE(126);
      END_STATE();
    case 125:
      if (lookahead == 'm') ADVANCE(116);
      END_STATE();
    case 126:
      if (lookahead == 'n') ADVANCE(120);
      END_STATE();
    case 127:
      if (lookahead == 'n') ADVANCE(46);
      END_STATE();
    case 128:
      if (lookahead == 'n') ADVANCE(121);
      END_STATE();
    case 129:
      if (lookahead == 'o') ADVANCE(577);
      if (lookahead == '|') ADVANCE(579);
      END_STATE();
    case 130:
      if (lookahead == 'o') ADVANCE(577);
      if (lookahead == '|') ADVANCE(579);
      if (lookahead == '}') ADVANCE(893);
      END_STATE();
    case 131:
      if (lookahead == 'o') ADVANCE(575);
      if (lookahead == '{') ADVANCE(580);
      if (lookahead == '|') ADVANCE(581);
      END_STATE();
    case 132:
      if (lookahead == 'o') ADVANCE(127);
      END_STATE();
    case 133:
      if (lookahead == 'p') ADVANCE(912);
      END_STATE();
    case 134:
      if (lookahead == 'p') ADVANCE(123);
      END_STATE();
    case 135:
      if (lookahead == 'r') ADVANCE(117);
      END_STATE();
    case 136:
      if (lookahead == 'u') ADVANCE(118);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(179);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(313);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(161);
      END_STATE();
    case 137:
      if (lookahead == '{') ADVANCE(578);
      if (lookahead == '|') ADVANCE(576);
      END_STATE();
    case 138:
      if (lookahead == '{') ADVANCE(892);
      END_STATE();
    case 139:
      if (lookahead == '}') ADVANCE(893);
      END_STATE();
    case 140:
      if (lookahead == '}') ADVANCE(45);
      if (lookahead != 0 &&
          lookahead != '%') ADVANCE(140);
      END_STATE();
    case 141:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(416);
      END_STATE();
    case 142:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(415);
      END_STATE();
    case 143:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(690);
      END_STATE();
    case 144:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(307);
      END_STATE();
    case 145:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(371);
      END_STATE();
    case 146:
      ADVANCE_MAP(
        'A', 341,
        'a', 341,
        'I', 206,
        'i', 206,
        'K', 584,
        'k', 584,
        'R', 316,
        'r', 316,
      );
      END_STATE();
    case 147:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(243);
      END_STATE();
    case 148:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(385);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(159);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(350);
      END_STATE();
    case 149:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(291);
      END_STATE();
    case 150:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(256);
      END_STATE();
    case 151:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(292);
      END_STATE();
    case 152:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(293);
      END_STATE();
    case 153:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(348);
      END_STATE();
    case 154:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(294);
      END_STATE();
    case 155:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(392);
      END_STATE();
    case 156:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(378);
      END_STATE();
    case 157:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(379);
      END_STATE();
    case 158:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(308);
      END_STATE();
    case 159:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(182);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(150);
      END_STATE();
    case 160:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(358);
      END_STATE();
    case 161:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(390);
      END_STATE();
    case 162:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(395);
      END_STATE();
    case 163:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(188);
      END_STATE();
    case 164:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(396);
      END_STATE();
    case 165:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(397);
      END_STATE();
    case 166:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(398);
      END_STATE();
    case 167:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(244);
      END_STATE();
    case 168:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(245);
      END_STATE();
    case 169:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(246);
      END_STATE();
    case 170:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(589);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(590);
      END_STATE();
    case 171:
      ADVANCE_MAP(
        'B', 589,
        'b', 589,
        'D', 590,
        'd', 590,
        'I', 384,
        'i', 384,
        'O', 195,
        'o', 195,
      );
      END_STATE();
    case 172:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(838);
      END_STATE();
    case 173:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(222);
      END_STATE();
    case 174:
      ADVANCE_MAP(
        'B', 381,
        'b', 381,
        'L', 345,
        'l', 345,
        'R', 284,
        'r', 284,
        'T', 172,
        't', 172,
      );
      END_STATE();
    case 175:
      ADVANCE_MAP(
        'C', 373,
        'c', 373,
        'L', 374,
        'l', 374,
        'N', 193,
        'n', 193,
        'S', 930,
        's', 930,
        'U', 387,
        'u', 387,
        'X', 255,
        'x', 255,
      );
      END_STATE();
    case 176:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(286);
      END_STATE();
    case 177:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(247);
      END_STATE();
    case 178:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(248);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(328);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(326);
      END_STATE();
    case 179:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(386);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(404);
      END_STATE();
    case 180:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(259);
      END_STATE();
    case 181:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(375);
      END_STATE();
    case 182:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(389);
      END_STATE();
    case 183:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(353);
      END_STATE();
    case 184:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(211);
      END_STATE();
    case 185:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(232);
      END_STATE();
    case 186:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(233);
      END_STATE();
    case 187:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(287);
      END_STATE();
    case 188:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(393);
      END_STATE();
    case 189:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(400);
      END_STATE();
    case 190:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(250);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(330);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(327);
      END_STATE();
    case 191:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(236);
      END_STATE();
    case 192:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(943);
      END_STATE();
    case 193:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(950);
      END_STATE();
    case 194:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(262);
      END_STATE();
    case 195:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(141);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(142);
      END_STATE();
    case 196:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(208);
      END_STATE();
    case 197:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(220);
      END_STATE();
    case 198:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(221);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(254);
      END_STATE();
    case 199:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(225);
      END_STATE();
    case 200:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(155);
      END_STATE();
    case 201:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(202);
      END_STATE();
    case 202:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(165);
      END_STATE();
    case 203:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(179);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(313);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(161);
      END_STATE();
    case 204:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(240);
      END_STATE();
    case 205:
      ADVANCE_MAP(
        'E', 240,
        'e', 240,
        'I', 299,
        'i', 299,
        'O', 314,
        'o', 314,
        'R', 586,
        'r', 586,
      );
      END_STATE();
    case 206:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(926);
      END_STATE();
    case 207:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(947);
      END_STATE();
    case 208:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(18);
      END_STATE();
    case 209:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(15);
      END_STATE();
    case 210:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(910);
      END_STATE();
    case 211:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(97);
      END_STATE();
    case 212:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(933);
      END_STATE();
    case 213:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(934);
      END_STATE();
    case 214:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(338);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(313);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(166);
      END_STATE();
    case 215:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(181);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(242);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(588);
      END_STATE();
    case 216:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(14);
      END_STATE();
    case 217:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(295);
      END_STATE();
    case 218:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(356);
      END_STATE();
    case 219:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(306);
      END_STATE();
    case 220:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(365);
      END_STATE();
    case 221:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(366);
      END_STATE();
    case 222:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(343);
      END_STATE();
    case 223:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(367);
      END_STATE();
    case 224:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(344);
      END_STATE();
    case 225:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(372);
      END_STATE();
    case 226:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(368);
      END_STATE();
    case 227:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(347);
      END_STATE();
    case 228:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(219);
      END_STATE();
    case 229:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(305);
      END_STATE();
    case 230:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(311);
      END_STATE();
    case 231:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(189);
      END_STATE();
    case 232:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(91);
      END_STATE();
    case 233:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(113);
      END_STATE();
    case 234:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(95);
      END_STATE();
    case 235:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(241);
      END_STATE();
    case 236:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(96);
      END_STATE();
    case 237:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(478);
      END_STATE();
    case 238:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(479);
      END_STATE();
    case 239:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(323);
      END_STATE();
    case 240:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(382);
      END_STATE();
    case 241:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(332);
      END_STATE();
    case 242:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(249);
      END_STATE();
    case 243:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(352);
      END_STATE();
    case 244:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(354);
      END_STATE();
    case 245:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(355);
      END_STATE();
    case 246:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(357);
      END_STATE();
    case 247:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(160);
      END_STATE();
    case 248:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(329);
      END_STATE();
    case 249:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(399);
      END_STATE();
    case 250:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(331);
      END_STATE();
    case 251:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(206);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(584);
      END_STATE();
    case 252:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(242);
      END_STATE();
    case 253:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(411);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(342);
      END_STATE();
    case 254:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(409);
      END_STATE();
    case 255:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(369);
      END_STATE();
    case 256:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(288);
      END_STATE();
    case 257:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(196);
      END_STATE();
    case 258:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(180);
      END_STATE();
    case 259:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(337);
      END_STATE();
    case 260:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(364);
      END_STATE();
    case 261:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(384);
      END_STATE();
    case 262:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(147);
      END_STATE();
    case 263:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(320);
      END_STATE();
    case 264:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(309);
      END_STATE();
    case 265:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(310);
      END_STATE();
    case 266:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(322);
      END_STATE();
    case 267:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(324);
      END_STATE();
    case 268:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(223);
      END_STATE();
    case 269:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(336);
      END_STATE();
    case 270:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(185);
      END_STATE();
    case 271:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(186);
      END_STATE();
    case 272:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(167);
      END_STATE();
    case 273:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(168);
      END_STATE();
    case 274:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(169);
      END_STATE();
    case 275:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(412);
      END_STATE();
    case 276:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(585);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(315);
      END_STATE();
    case 277:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(939);
      END_STATE();
    case 278:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(89);
      END_STATE();
    case 279:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(111);
      END_STATE();
    case 280:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(224);
      END_STATE();
    case 281:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(370);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(192);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(194);
      END_STATE();
    case 282:
      ADVANCE_MAP(
        'L', 370,
        'l', 370,
        'N', 192,
        'n', 192,
        'R', 194,
        'r', 194,
        'X', 176,
        'x', 176,
      );
      END_STATE();
    case 283:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(588);
      END_STATE();
    case 284:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(840);
      END_STATE();
    case 285:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(145);
      END_STATE();
    case 286:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(405);
      END_STATE();
    case 287:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(402);
      END_STATE();
    case 288:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(363);
      END_STATE();
    case 289:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(210);
      END_STATE();
    case 290:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(173);
      END_STATE();
    case 291:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(869);
      END_STATE();
    case 292:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(843);
      END_STATE();
    case 293:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(951);
      END_STATE();
    case 294:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(927);
      END_STATE();
    case 295:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(335);
      END_STATE();
    case 296:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(153);
      END_STATE();
    case 297:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(156);
      END_STATE();
    case 298:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(157);
      END_STATE();
    case 299:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(277);
      END_STATE();
    case 300:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(911);
      END_STATE();
    case 301:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(873);
      END_STATE();
    case 302:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(827);
      END_STATE();
    case 303:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(193);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(930);
      END_STATE();
    case 304:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(403);
      END_STATE();
    case 305:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(184);
      END_STATE();
    case 306:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(201);
      END_STATE();
    case 307:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(394);
      END_STATE();
    case 308:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(380);
      END_STATE();
    case 309:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(90);
      END_STATE();
    case 310:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(112);
      END_STATE();
    case 311:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(191);
      END_STATE();
    case 312:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(187);
      END_STATE();
    case 313:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(414);
      END_STATE();
    case 314:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(333);
      END_STATE();
    case 315:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(413);
      END_STATE();
    case 316:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(334);
      END_STATE();
    case 317:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(237);
      END_STATE();
    case 318:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(304);
      END_STATE();
    case 319:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(238);
      END_STATE();
    case 320:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(300);
      END_STATE();
    case 321:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(388);
      END_STATE();
    case 322:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(301);
      END_STATE();
    case 323:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(359);
      END_STATE();
    case 324:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(302);
      END_STATE();
    case 325:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(346);
      END_STATE();
    case 326:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(264);
      END_STATE();
    case 327:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(265);
      END_STATE();
    case 328:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(349);
      END_STATE();
    case 329:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(270);
      END_STATE();
    case 330:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(351);
      END_STATE();
    case 331:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(271);
      END_STATE();
    case 332:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(360);
      END_STATE();
    case 333:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(942);
      END_STATE();
    case 334:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(218);
      END_STATE();
    case 335:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(383);
      END_STATE();
    case 336:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(401);
      END_STATE();
    case 337:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(158);
      END_STATE();
    case 338:
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(406);
      END_STATE();
    case 339:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(587);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(592);
      END_STATE();
    case 340:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(586);
      END_STATE();
    case 341:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(949);
      END_STATE();
    case 342:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(929);
      END_STATE();
    case 343:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(932);
      END_STATE();
    case 344:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(909);
      END_STATE();
    case 345:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(841);
      END_STATE();
    case 346:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(931);
      END_STATE();
    case 347:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(936);
      END_STATE();
    case 348:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(280);
      END_STATE();
    case 349:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(278);
      END_STATE();
    case 350:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(231);
      END_STATE();
    case 351:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(279);
      END_STATE();
    case 352:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(149);
      END_STATE();
    case 353:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(269);
      END_STATE();
    case 354:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(151);
      END_STATE();
    case 355:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(152);
      END_STATE();
    case 356:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(391);
      END_STATE();
    case 357:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(154);
      END_STATE();
    case 358:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(377);
      END_STATE();
    case 359:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(297);
      END_STATE();
    case 360:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(298);
      END_STATE();
    case 361:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(930);
      END_STATE();
    case 362:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(94);
      END_STATE();
    case 363:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(941);
      END_STATE();
    case 364:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(905);
      END_STATE();
    case 365:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(908);
      END_STATE();
    case 366:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(907);
      END_STATE();
    case 367:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(940);
      END_STATE();
    case 368:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(904);
      END_STATE();
    case 369:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(239);
      END_STATE();
    case 370:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(207);
      END_STATE();
    case 371:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(362);
      END_STATE();
    case 372:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(183);
      END_STATE();
    case 373:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(253);
      END_STATE();
    case 374:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(946);
      END_STATE();
    case 375:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(944);
      END_STATE();
    case 376:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(902);
      END_STATE();
    case 377:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(870);
      END_STATE();
    case 378:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(906);
      END_STATE();
    case 379:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(903);
      END_STATE();
    case 380:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(928);
      END_STATE();
    case 381:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(839);
      END_STATE();
    case 382:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(16);
      END_STATE();
    case 383:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(417);
      END_STATE();
    case 384:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(289);
      END_STATE();
    case 385:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(235);
      END_STATE();
    case 386:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(263);
      END_STATE();
    case 387:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(318);
      END_STATE();
    case 388:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(216);
      END_STATE();
    case 389:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(275);
      END_STATE();
    case 390:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(209);
      END_STATE();
    case 391:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(268);
      END_STATE();
    case 392:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(143);
      END_STATE();
    case 393:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(325);
      END_STATE();
    case 394:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(376);
      END_STATE();
    case 395:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(212);
      END_STATE();
    case 396:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(213);
      END_STATE();
    case 397:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(226);
      END_STATE();
    case 398:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(234);
      END_STATE();
    case 399:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(17);
      END_STATE();
    case 400:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(266);
      END_STATE();
    case 401:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(267);
      END_STATE();
    case 402:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(198);
      END_STATE();
    case 403:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(290);
      END_STATE();
    case 404:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(229);
      END_STATE();
    case 405:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(197);
      END_STATE();
    case 406:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(230);
      END_STATE();
    case 407:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(67);
      END_STATE();
    case 408:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(68);
      END_STATE();
    case 409:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(228);
      END_STATE();
    case 410:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(227);
      END_STATE();
    case 411:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(162);
      END_STATE();
    case 412:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(164);
      END_STATE();
    case 413:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(177);
      END_STATE();
    case 414:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(200);
      END_STATE();
    case 415:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(260);
      END_STATE();
    case 416:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(296);
      END_STATE();
    case 417:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(19);
      END_STATE();
    case 418:
      if (lookahead == '>' ||
          lookahead == 'o' ||
          lookahead == 'x') ADVANCE(604);
      END_STATE();
    case 419:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(419);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(700);
      END_STATE();
    case 420:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(701);
      END_STATE();
    case 421:
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(25);
      END_STATE();
    case 422:
      if (lookahead != 0 &&
          lookahead != '`') ADVANCE(115);
      END_STATE();
    case 423:
      if (lookahead != 0 &&
          lookahead != '`') ADVANCE(917);
      END_STATE();
    case 424:
      if (eof) ADVANCE(442);
      ADVANCE_MAP(
        '\t', 446,
        '\n', 463,
        ' ', 450,
        '%', 714,
        'A', 725,
        'a', 725,
        'D', 737,
        'd', 737,
        'L', 747,
        'l', 747,
        'N', 767,
        'n', 767,
        'O', 772,
        'o', 772,
        'P', 716,
        'p', 716,
        'R', 738,
        'r', 738,
        'S', 739,
        's', 739,
        'T', 751,
        't', 751,
      );
      if (lookahead != 0 &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(800);
      END_STATE();
    case 425:
      if (eof) ADVANCE(442);
      ADVANCE_MAP(
        '\n', 462,
        '%', 29,
        '(', 862,
        ')', 865,
        ':', 74,
        '[', 877,
        '{', 138,
        '\t', 447,
        ' ', 447,
      );
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(69);
      END_STATE();
    case 426:
      if (eof) ADVANCE(442);
      ADVANCE_MAP(
        '\n', 463,
        '"', 22,
        '%', 28,
        '&', 874,
        '(', 863,
        ')', 47,
        ',', 937,
        '-', 51,
        '.', 57,
        '/', 103,
        ':', 844,
        ';', 871,
        '=', 81,
        '>', 514,
        'O', 410,
        '[', 878,
        '\\', 104,
        ']', 879,
        '`', 21,
        'm', 124,
        'o', 64,
        '{', 856,
        '|', 106,
        '}', 130,
        '~', 846,
        '\t', 450,
        ' ', 450,
        '<', 63,
        'x', 63,
        'A', 303,
        'a', 303,
        'C', 285,
        'c', 285,
        'E', 281,
        'e', 281,
        'F', 276,
        'f', 276,
        'G', 144,
        'g', 144,
        'L', 204,
        'l', 204,
        'P', 251,
        'p', 251,
        'R', 252,
        'r', 252,
        'S', 214,
        's', 214,
        'T', 261,
        't', 261,
      );
      END_STATE();
    case 427:
      if (eof) ADVANCE(442);
      ADVANCE_MAP(
        '\n', 463,
        '"', 22,
        '%', 29,
        '-', 60,
        '.', 55,
        '}', 857,
        '\t', 450,
        ' ', 450,
      );
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 428:
      if (eof) ADVANCE(442);
      ADVANCE_MAP(
        '\n', 463,
        '"', 421,
        '%', 29,
        '(', 861,
        ')', 864,
        '*', 511,
        '-', 59,
        '.', 66,
        ':', 844,
        '<', 513,
        '>', 514,
        '[', 877,
        ']', 879,
        '^', 593,
        'e', 128,
        'o', 506,
        'v', 591,
        '|', 84,
        '}', 139,
        '~', 846,
        '\t', 450,
        ' ', 450,
        'B', 339,
        'b', 339,
        'L', 340,
        'l', 340,
        'R', 283,
        'r', 283,
        'T', 170,
        't', 170,
      );
      END_STATE();
    case 429:
      if (eof) ADVANCE(442);
      ADVANCE_MAP(
        '\n', 463,
        '"', 421,
        '%', 29,
        '-', 59,
        '.', 66,
        ':', 75,
        '`', 422,
        '{', 855,
        '~', 846,
        '\t', 450,
        ' ', 450,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(484);
      END_STATE();
    case 430:
      if (eof) ADVANCE(442);
      if (lookahead == '\n') ADVANCE(463);
      if (lookahead == '"') ADVANCE(693);
      if (lookahead == '%') ADVANCE(694);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(453);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(696);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(699);
      END_STATE();
    case 431:
      if (eof) ADVANCE(442);
      ADVANCE_MAP(
        '\n', 463,
        '$', 866,
        '%', 29,
        '(', 861,
        ')', 864,
        '*', 511,
        ';', 871,
        '[', 877,
        ']', 879,
        '|', 875,
        '}', 857,
        '\t', 450,
        ' ', 450,
      );
      if (lookahead == '!' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(503);
      END_STATE();
    case 432:
      if (eof) ADVANCE(442);
      ADVANCE_MAP(
        '\n', 463,
        '%', 614,
        '\t', 450,
        ' ', 450,
        'A', 677,
        'a', 677,
        'D', 615,
        'd', 615,
        'E', 678,
        'e', 678,
        'I', 655,
        'i', 655,
        'S', 631,
        's', 631,
        'T', 643,
        't', 643,
      );
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(681);
      END_STATE();
    case 433:
      if (eof) ADVANCE(442);
      if (lookahead == '\n') ADVANCE(463);
      if (lookahead == '%') ADVANCE(527);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(452);
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(571);
      END_STATE();
    case 434:
      if (eof) ADVANCE(442);
      ADVANCE_MAP(
        '\n', 463,
        '%', 29,
        '(', 861,
        ')', 864,
        '-', 60,
        '.', 55,
        ':', 844,
        '>', 85,
        '[', 53,
        ']', 48,
        '{', 855,
        '|', 875,
        '}', 857,
        '\t', 450,
        ' ', 450,
        'D', 814,
        'd', 814,
        'H', 815,
        'h', 815,
        'N', 819,
        'n', 819,
        'S', 822,
        's', 822,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(826);
      END_STATE();
    case 435:
      if (eof) ADVANCE(442);
      ADVANCE_MAP(
        '\n', 463,
        '%', 29,
        '-', 59,
        ':', 75,
        '<', 79,
        '[', 54,
        '{', 855,
        '}', 857,
        '~', 846,
        '\t', 450,
        ' ', 450,
        'A', 821,
        'a', 821,
        'D', 814,
        'd', 814,
        'H', 815,
        'h', 815,
        'N', 819,
        'n', 819,
        'S', 822,
        's', 822,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(826);
      END_STATE();
    case 436:
      if (eof) ADVANCE(442);
      ADVANCE_MAP(
        '\n', 463,
        '%', 29,
        '-', 52,
        ':', 844,
        '<', 79,
        '[', 102,
        'o', 137,
        '{', 855,
        '|', 131,
        '}', 129,
        '\t', 450,
        ' ', 450,
        'A', 361,
        'a', 361,
      );
      END_STATE();
    case 437:
      if (eof) ADVANCE(442);
      ADVANCE_MAP(
        '\n', 463,
        '%', 29,
        '-', 61,
        ':', 844,
        '[', 53,
        '}', 857,
        '\t', 450,
        ' ', 450,
        'D', 814,
        'd', 814,
        'H', 815,
        'h', 815,
        'N', 819,
        'n', 819,
        'S', 822,
        's', 822,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(826);
      END_STATE();
    case 438:
      if (eof) ADVANCE(442);
      if (lookahead == '\n') ADVANCE(463);
      if (lookahead == '%') ADVANCE(29);
      if (lookahead == ':') ADVANCE(844);
      if (lookahead == '`') ADVANCE(422);
      if (lookahead == '~') ADVANCE(846);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(450);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(484);
      END_STATE();
    case 439:
      if (eof) ADVANCE(442);
      ADVANCE_MAP(
        '\n', 463,
        '%', 29,
        ';', 871,
        's', 494,
        '\t', 450,
        ' ', 450,
        'D', 497,
        'd', 497,
      );
      if (lookahead == '!' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(503);
      END_STATE();
    case 440:
      if (eof) ADVANCE(442);
      if (lookahead == '\n') ADVANCE(464);
      if (lookahead == '%') ADVANCE(29);
      if (lookahead == ':') ADVANCE(76);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(448);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(77);
      END_STATE();
    case 441:
      if (eof) ADVANCE(442);
      if (lookahead == '%') ADVANCE(29);
      if (lookahead == '<') ADVANCE(78);
      if (lookahead == '`') ADVANCE(422);
      if (lookahead == 'c') ADVANCE(481);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(450);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(484);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(anon_sym_PERCENT_PERCENT_LBRACE);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(aux_sym_directive_token1);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(sym__whitespace);
      if (lookahead == '\t') ADVANCE(450);
      if (lookahead == ' ') ADVANCE(445);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(920);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(sym__whitespace);
      if (lookahead == '\t') ADVANCE(446);
      if (lookahead == ' ') ADVANCE(450);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(800);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(sym__whitespace);
      if (lookahead == ':') ADVANCE(74);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(447);
      if (('\n' <= lookahead && lookahead <= '\r')) ADVANCE(69);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(sym__whitespace);
      if (lookahead == ':') ADVANCE(76);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(448);
      if (('\n' <= lookahead && lookahead <= '\r')) ADVANCE(77);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(sym__whitespace);
      if (lookahead == '}') ADVANCE(45);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(449);
      if (lookahead != 0 &&
          lookahead != '%') ADVANCE(140);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(sym__whitespace);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(450);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(sym__whitespace);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(450);
      if (lookahead != 0 &&
          lookahead != '`') ADVANCE(917);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(sym__whitespace);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(452);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(571);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(sym__whitespace);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(453);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(699);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(sym__whitespace);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(454);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(689);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(sym__whitespace);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(455);
      if (('\n' <= lookahead && lookahead <= '\r')) ADVANCE(419);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(700);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(sym__whitespace);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(456);
      if (lookahead != 0 &&
          lookahead != '~') ADVANCE(851);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(sym__whitespace);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(457);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(685);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(sym__whitespace);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(458);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '`') ADVANCE(916);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(sym__whitespace);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(459);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ')') ADVANCE(925);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(sym__whitespace);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(460);
      if (lookahead != 0 &&
          lookahead != '%' &&
          lookahead != ':' &&
          lookahead != '}') ADVANCE(474);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(sym__whitespace);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(461);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(611);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(sym__newline);
      if (lookahead == '\n') ADVANCE(462);
      if (lookahead == ':') ADVANCE(74);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(69);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(sym__newline);
      if (lookahead == '\n') ADVANCE(463);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(sym__newline);
      if (lookahead == '\n') ADVANCE(464);
      if (lookahead == ':') ADVANCE(76);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(77);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(465);
      if (lookahead != 0) ADVANCE(10);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(470);
      if (lookahead == '~') ADVANCE(10);
      if (lookahead != 0) ADVANCE(849);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(469);
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(10);
      if (lookahead != 0) ADVANCE(914);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '`') ADVANCE(916);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '~') ADVANCE(851);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(sym__md_start);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(sym__md_end);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(sym_type_directive);
      if (lookahead == '%') ADVANCE(29);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(460);
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != '}') ADVANCE(474);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(sym_type_directive);
      if (lookahead != 0 &&
          lookahead != '%' &&
          lookahead != ':' &&
          lookahead != '}') ADVANCE(474);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-') ADVANCE(516);
      if (lookahead == '>') ADVANCE(704);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(aux_sym_note_placement_left_token1);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(aux_sym_note_placement_right_token1);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'a') ADVANCE(483);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(484);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'l') ADVANCE(480);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(484);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 's') ADVANCE(853);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(484);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 's') ADVANCE(482);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(484);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(sym__class_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(484);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(sym__alpha_num_token);
      if (lookahead == '-') ADVANCE(62);
      if (lookahead == '.') ADVANCE(57);
      if (lookahead == '=') ADVANCE(83);
      if (lookahead == '!' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(503);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(sym__alpha_num_token);
      if (lookahead == 'a') ADVANCE(492);
      if (lookahead == '!' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(503);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(sym__alpha_num_token);
      if (lookahead == 'b') ADVANCE(489);
      if (lookahead == '!' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(503);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(sym__alpha_num_token);
      if (lookahead == 'd') ADVANCE(901);
      if (lookahead == '!' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(503);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(sym__alpha_num_token);
      if (lookahead == 'g') ADVANCE(493);
      if (lookahead == '!' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(503);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(sym__alpha_num_token);
      if (lookahead == 'h') ADVANCE(899);
      if (lookahead == '!' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(503);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(sym__alpha_num_token);
      if (lookahead == 'n') ADVANCE(488);
      if (lookahead == '!' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(503);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(sym__alpha_num_token);
      if (lookahead == 'p') ADVANCE(490);
      if (lookahead == '!' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(503);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(sym__alpha_num_token);
      if (lookahead == 'r') ADVANCE(486);
      if (lookahead == '!' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(503);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(sym__alpha_num_token);
      if (lookahead == 'u') ADVANCE(487);
      if (lookahead == '!' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(503);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(sym__alpha_num_token);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(502);
      if (lookahead == '!' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(503);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(sym__alpha_num_token);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(495);
      if (lookahead == '!' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(503);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(sym__alpha_num_token);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(501);
      if (lookahead == '!' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(503);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(sym__alpha_num_token);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(500);
      if (lookahead == '!' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(503);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(sym__alpha_num_token);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(872);
      if (lookahead == '!' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(503);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(sym__alpha_num_token);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(499);
      if (lookahead == '!' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(503);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(sym__alpha_num_token);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(496);
      if (lookahead == '!' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(503);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(sym__alpha_num_token);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(498);
      if (lookahead == '!' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(503);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(sym__alpha_num_token);
      if (lookahead == '!' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(503);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(sym__bquote_string);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(sym__dquote_string);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(sym_class_reltype_aggregation);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(sym_class_reltype_aggregation);
      if (lookahead == '=') ADVANCE(81);
      if (lookahead == '{') ADVANCE(578);
      if (lookahead == '|') ADVANCE(576);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(sym_class_reltype_aggregation);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(484);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(anon_sym_LT_PIPE);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(anon_sym_PIPE_GT);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '<') ADVANCE(867);
      if (lookahead == '=') ADVANCE(81);
      if (lookahead == '|') ADVANCE(509);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '|') ADVANCE(509);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(anon_sym_DASH_DASH);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(anon_sym_DASH_DASH);
      if (lookahead == ')') ADVANCE(710);
      if (lookahead == '>') ADVANCE(705);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(anon_sym_DASH_DASH);
      if (lookahead == '>') ADVANCE(705);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(anon_sym_DASH_DASH);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(571);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(anon_sym_DOT_DOT);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == '\n') ADVANCE(466);
      if (lookahead == '{') ADVANCE(571);
      if (lookahead == ':' ||
          lookahead == ';') ADVANCE(10);
      if (lookahead != 0) ADVANCE(521);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == '\n') ADVANCE(465);
      if (lookahead == ':' ||
          lookahead == ';') ADVANCE(10);
      if (lookahead != 0) ADVANCE(521);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == ' ') ADVANCE(935);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(570);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          (lookahead < '0' || ';' < lookahead)) ADVANCE(571);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == ' ') ADVANCE(953);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(570);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          (lookahead < '0' || ';' < lookahead)) ADVANCE(571);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == ' ') ADVANCE(540);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(570);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          (lookahead < '0' || ';' < lookahead)) ADVANCE(571);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == ' ') ADVANCE(533);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(570);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          (lookahead < '0' || ';' < lookahead)) ADVANCE(571);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == ' ') ADVANCE(537);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(571);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == '%') ADVANCE(520);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(571);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == '*') ADVANCE(530);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(571);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == '-') ADVANCE(518);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(571);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == ']') ADVANCE(802);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(571);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(568);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(570);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          (lookahead < '0' || ';' < lookahead)) ADVANCE(571);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(838);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(571);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      ADVANCE_MAP(
        'B', 562,
        'b', 562,
        'L', 558,
        'l', 558,
        'R', 549,
        'r', 549,
        'T', 532,
        't', 532,
      );
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(571);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(560);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(571);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(566);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(570);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          (lookahead < '0' || ';' < lookahead)) ADVANCE(571);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(539);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(570);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          (lookahead < '0' || ';' < lookahead)) ADVANCE(571);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(541);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(571);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(535);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(570);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          (lookahead < '0' || ';' < lookahead)) ADVANCE(571);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(524);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(570);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          (lookahead < '0' || ';' < lookahead)) ADVANCE(571);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(550);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(571);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(561);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(571);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(522);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(570);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          (lookahead < '0' || ';' < lookahead)) ADVANCE(571);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(523);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(570);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          (lookahead < '0' || ';' < lookahead)) ADVANCE(571);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(559);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(570);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          (lookahead < '0' || ';' < lookahead)) ADVANCE(571);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(536);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(570);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          (lookahead < '0' || ';' < lookahead)) ADVANCE(571);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(554);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(571);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(553);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(570);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          (lookahead < '0' || ';' < lookahead)) ADVANCE(571);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(557);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(571);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(840);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(571);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(556);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(571);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(827);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(571);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(525);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(570);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          (lookahead < '0' || ';' < lookahead)) ADVANCE(571);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(552);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(570);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          (lookahead < '0' || ';' < lookahead)) ADVANCE(571);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(551);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(571);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(567);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(570);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          (lookahead < '0' || ';' < lookahead)) ADVANCE(571);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(564);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(571);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(565);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(571);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(841);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(571);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(538);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(570);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          (lookahead < '0' || ';' < lookahead)) ADVANCE(571);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(548);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(571);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(534);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(571);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(839);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(571);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(531);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(570);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          (lookahead < '0' || ';' < lookahead)) ADVANCE(571);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(569);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(571);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(546);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(571);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(547);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(570);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          (lookahead < '0' || ';' < lookahead)) ADVANCE(571);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(542);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(570);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          (lookahead < '0' || ';' < lookahead)) ADVANCE(571);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(543);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(570);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          (lookahead < '0' || ';' < lookahead)) ADVANCE(571);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(526);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(571);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(570);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          (lookahead < '0' || ';' < lookahead)) ADVANCE(571);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(571);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(aux_sym__er_word_token1);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(aux_sym__er_word_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(699);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(sym__er_alphanum);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(anon_sym_PIPEo);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(anon_sym_o_PIPE);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(anon_sym_RBRACEo);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(anon_sym_o_LBRACE);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(anon_sym_RBRACE_PIPE);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(anon_sym_PIPE_LBRACE);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(sym_er_cardinarity_only_one);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(anon_sym_DOT_DASH);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(anon_sym_DASH_DOT);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(aux_sym_er_attribute_key_type_pk_token1);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(aux_sym_er_attribute_key_type_fk_token1);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(aux_sym_flowchart_direction_lr_token1);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(aux_sym_flowchart_direction_lr_token2);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(aux_sym_flowchart_direction_rl_token1);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(aux_sym_flowchart_direction_tb_token1);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(aux_sym_flowchart_direction_tb_token2);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(anon_sym_v);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(aux_sym_flowchart_direction_bt_token1);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(aux_sym_flow_text_literal_token1);
      if (lookahead == '\n') ADVANCE(466);
      if (lookahead == '{') ADVANCE(598);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '/' ||
          lookahead == ';' ||
          lookahead == '\\' ||
          lookahead == ']' ||
          lookahead == '|' ||
          lookahead == '}') ADVANCE(10);
      if (lookahead != 0) ADVANCE(595);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(aux_sym_flow_text_literal_token1);
      if (lookahead == '\n') ADVANCE(465);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '/' ||
          lookahead == ';' ||
          lookahead == '\\' ||
          lookahead == ']' ||
          lookahead == '|' ||
          lookahead == '}') ADVANCE(10);
      if (lookahead != 0) ADVANCE(595);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(aux_sym_flow_text_literal_token1);
      if (lookahead == '"') ADVANCE(598);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '/' ||
          lookahead == ';' ||
          lookahead == '\\' ||
          lookahead == ']' ||
          lookahead == '|' ||
          lookahead == '}') ADVANCE(27);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(596);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(aux_sym_flow_text_literal_token1);
      if (lookahead == '%') ADVANCE(594);
      if ((!eof && set_contains(aux_sym_flow_text_literal_token1_character_set_1, 9, lookahead))) ADVANCE(598);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(aux_sym_flow_text_literal_token1);
      if ((!eof && set_contains(aux_sym_flow_text_literal_token1_character_set_1, 9, lookahead))) ADVANCE(598);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(sym_flow_text_quoted);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(aux_sym_flow_link_arrow_token1);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(aux_sym_flow_link_arrow_token1);
      if (lookahead == '-') ADVANCE(601);
      if (lookahead == '>' ||
          lookahead == 'o' ||
          lookahead == 'x') ADVANCE(600);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(aux_sym_flow_link_arrow_token2);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(aux_sym_flow_link_arrow_token2);
      if (lookahead == '=') ADVANCE(603);
      if (lookahead == '>' ||
          lookahead == 'o' ||
          lookahead == 'x') ADVANCE(602);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(aux_sym_flow_link_arrow_token3);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(aux_sym_flow_link_arrow_start_token1);
      if (lookahead == '-') ADVANCE(601);
      if (lookahead == '>' ||
          lookahead == 'o' ||
          lookahead == 'x') ADVANCE(600);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(aux_sym_flow_link_arrow_start_token2);
      if (lookahead == '=') ADVANCE(603);
      if (lookahead == '>' ||
          lookahead == 'o' ||
          lookahead == 'x') ADVANCE(602);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(aux_sym_flow_link_arrow_start_token3);
      if (lookahead == '-') ADVANCE(418);
      if (lookahead == '.') ADVANCE(607);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(aux_sym_gantt_meta_format_token1);
      if (lookahead == '\n') ADVANCE(466);
      if (lookahead == '{') ADVANCE(611);
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(10);
      if (lookahead != 0) ADVANCE(609);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(aux_sym_gantt_meta_format_token1);
      if (lookahead == '\n') ADVANCE(465);
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(10);
      if (lookahead != 0) ADVANCE(609);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(aux_sym_gantt_meta_format_token1);
      if (lookahead == '%') ADVANCE(608);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(611);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(aux_sym_gantt_meta_format_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(611);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == '\n') ADVANCE(466);
      if (lookahead == '{') ADVANCE(681);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == '#' ||
          lookahead == ':' ||
          lookahead == ';') ADVANCE(10);
      if (lookahead != 0) ADVANCE(613);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == '\n') ADVANCE(465);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == '#' ||
          lookahead == ':' ||
          lookahead == ';') ADVANCE(10);
      if (lookahead != 0) ADVANCE(613);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == '%') ADVANCE(612);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(681);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(670);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(681);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(680);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(681);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(660);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(681);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(668);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(681);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(669);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(681);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(673);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(681);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(679);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(681);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(647);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(681);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(671);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(681);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(648);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(681);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(616);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(621);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(681);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(629);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(681);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(633);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(681);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(635);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(642);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(681);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(620);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(681);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(910);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(681);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(623);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(681);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(654);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(681);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(664);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(681);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(659);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(681);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(665);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(681);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(666);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(681);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(632);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(681);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(640);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(681);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(656);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(681);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(658);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(681);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(667);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(681);
      END_STATE();
    case 642:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(676);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(681);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(672);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(625);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(681);
      END_STATE();
    case 644:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(663);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(681);
      END_STATE();
    case 645:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(657);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(681);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(634);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(681);
      END_STATE();
    case 647:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(674);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(681);
      END_STATE();
    case 648:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(675);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(681);
      END_STATE();
    case 649:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(630);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(681);
      END_STATE();
    case 650:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(617);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(681);
      END_STATE();
    case 651:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(618);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(681);
      END_STATE();
    case 652:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(619);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(681);
      END_STATE();
    case 653:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(911);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(681);
      END_STATE();
    case 654:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(626);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(681);
      END_STATE();
    case 655:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(624);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(681);
      END_STATE();
    case 656:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(661);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(681);
      END_STATE();
    case 657:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(653);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(681);
      END_STATE();
    case 658:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(662);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(681);
      END_STATE();
    case 659:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(909);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(681);
      END_STATE();
    case 660:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(646);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(681);
      END_STATE();
    case 661:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(651);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(681);
      END_STATE();
    case 662:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(652);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(681);
      END_STATE();
    case 663:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(905);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(681);
      END_STATE();
    case 664:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(908);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(681);
      END_STATE();
    case 665:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(907);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(681);
      END_STATE();
    case 666:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(904);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(681);
      END_STATE();
    case 667:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(639);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(681);
      END_STATE();
    case 668:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(906);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(681);
      END_STATE();
    case 669:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(903);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(681);
      END_STATE();
    case 670:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(638);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(681);
      END_STATE();
    case 671:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(645);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(681);
      END_STATE();
    case 672:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(649);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(681);
      END_STATE();
    case 673:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(636);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(681);
      END_STATE();
    case 674:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(627);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(681);
      END_STATE();
    case 675:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(628);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(681);
      END_STATE();
    case 676:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(637);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(681);
      END_STATE();
    case 677:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(641);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(681);
      END_STATE();
    case 678:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(622);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(681);
      END_STATE();
    case 679:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(644);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(681);
      END_STATE();
    case 680:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(650);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(681);
      END_STATE();
    case 681:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(681);
      END_STATE();
    case 682:
      ACCEPT_TOKEN(sym_gantt_task_data);
      if (lookahead == '\n') ADVANCE(466);
      if (lookahead == '{') ADVANCE(685);
      if (lookahead == '#' ||
          lookahead == ':' ||
          lookahead == ';') ADVANCE(10);
      if (lookahead != 0) ADVANCE(683);
      END_STATE();
    case 683:
      ACCEPT_TOKEN(sym_gantt_task_data);
      if (lookahead == '\n') ADVANCE(465);
      if (lookahead == '#' ||
          lookahead == ':' ||
          lookahead == ';') ADVANCE(10);
      if (lookahead != 0) ADVANCE(683);
      END_STATE();
    case 684:
      ACCEPT_TOKEN(sym_gantt_task_data);
      if (lookahead == '%') ADVANCE(682);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(685);
      END_STATE();
    case 685:
      ACCEPT_TOKEN(sym_gantt_task_data);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(685);
      END_STATE();
    case 686:
      ACCEPT_TOKEN(sym__mindmap_text);
      if (lookahead == '\n') ADVANCE(466);
      if (lookahead == '\r' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']' ||
          lookahead == '}') ADVANCE(10);
      if (lookahead != 0 &&
          lookahead != '{') ADVANCE(687);
      END_STATE();
    case 687:
      ACCEPT_TOKEN(sym__mindmap_text);
      if (lookahead == '\n') ADVANCE(465);
      if (lookahead == '\r' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(10);
      if (lookahead != 0) ADVANCE(687);
      END_STATE();
    case 688:
      ACCEPT_TOKEN(sym__mindmap_text);
      if (lookahead == '%') ADVANCE(686);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(689);
      END_STATE();
    case 689:
      ACCEPT_TOKEN(sym__mindmap_text);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(689);
      END_STATE();
    case 690:
      ACCEPT_TOKEN(aux_sym_pie_showdata_token1);
      END_STATE();
    case 691:
      ACCEPT_TOKEN(sym_pie_title);
      if (lookahead == '\n') ADVANCE(466);
      if (lookahead == '{') ADVANCE(699);
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(10);
      if (lookahead != 0) ADVANCE(692);
      END_STATE();
    case 692:
      ACCEPT_TOKEN(sym_pie_title);
      if (lookahead == '\n') ADVANCE(465);
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(10);
      if (lookahead != 0) ADVANCE(692);
      END_STATE();
    case 693:
      ACCEPT_TOKEN(sym_pie_title);
      if (lookahead == '"') ADVANCE(573);
      if (lookahead == '\n' ||
          lookahead == '#' ||
          lookahead == ';') ADVANCE(22);
      if (lookahead != 0) ADVANCE(693);
      END_STATE();
    case 694:
      ACCEPT_TOKEN(sym_pie_title);
      if (lookahead == '%') ADVANCE(691);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(699);
      END_STATE();
    case 695:
      ACCEPT_TOKEN(sym_pie_title);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(910);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(699);
      END_STATE();
    case 696:
      ACCEPT_TOKEN(sym_pie_title);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(698);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(699);
      END_STATE();
    case 697:
      ACCEPT_TOKEN(sym_pie_title);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(695);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(699);
      END_STATE();
    case 698:
      ACCEPT_TOKEN(sym_pie_title);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(697);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(699);
      END_STATE();
    case 699:
      ACCEPT_TOKEN(sym_pie_title);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(699);
      END_STATE();
    case 700:
      ACCEPT_TOKEN(sym_pie_value);
      if (lookahead == '.') ADVANCE(420);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(700);
      END_STATE();
    case 701:
      ACCEPT_TOKEN(sym_pie_value);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(701);
      END_STATE();
    case 702:
      ACCEPT_TOKEN(sym_sequence__solid_arrow);
      END_STATE();
    case 703:
      ACCEPT_TOKEN(sym_sequence__dotted_arrow);
      END_STATE();
    case 704:
      ACCEPT_TOKEN(sym_sequence__solid_open_arrow);
      if (lookahead == '>') ADVANCE(702);
      END_STATE();
    case 705:
      ACCEPT_TOKEN(anon_sym_DASH_DASH_GT);
      END_STATE();
    case 706:
      ACCEPT_TOKEN(anon_sym_DASH_DASH_GT);
      if (lookahead == '>') ADVANCE(703);
      END_STATE();
    case 707:
      ACCEPT_TOKEN(sym_sequence__solid_cross);
      END_STATE();
    case 708:
      ACCEPT_TOKEN(sym_sequence__dotted_cross);
      END_STATE();
    case 709:
      ACCEPT_TOKEN(anon_sym_DASH_RPAREN);
      END_STATE();
    case 710:
      ACCEPT_TOKEN(sym_sequence__dotted_point);
      END_STATE();
    case 711:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == '\n') ADVANCE(466);
      if (lookahead == '{') ADVANCE(800);
      if (lookahead == ' ' ||
          ('+' <= lookahead && lookahead <= '-') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '>') ADVANCE(10);
      if (lookahead != 0) ADVANCE(712);
      END_STATE();
    case 712:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == '\n') ADVANCE(465);
      if (lookahead == ' ' ||
          ('+' <= lookahead && lookahead <= '-') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '>') ADVANCE(10);
      if (lookahead != 0) ADVANCE(712);
      END_STATE();
    case 713:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == ' ') ADVANCE(935);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(800);
      END_STATE();
    case 714:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == '%') ADVANCE(711);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(800);
      END_STATE();
    case 715:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == '_') ADVANCE(722);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(800);
      END_STATE();
    case 716:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(777);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(766);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(800);
      END_STATE();
    case 717:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(749);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(800);
      END_STATE();
    case 718:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(763);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(800);
      END_STATE();
    case 719:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(794);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(800);
      END_STATE();
    case 720:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(795);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(800);
      END_STATE();
    case 721:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(728);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(717);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(800);
      END_STATE();
    case 722:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(730);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(800);
      END_STATE();
    case 723:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(745);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(800);
      END_STATE();
    case 724:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      ADVANCE_MAP(
        'C', 788,
        'c', 788,
        'L', 783,
        'l', 783,
        'N', 732,
        'n', 732,
        'U', 789,
        'u', 789,
      );
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(800);
      END_STATE();
    case 725:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(788);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(783);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(789);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(800);
      END_STATE();
    case 726:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(750);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(800);
      END_STATE();
    case 727:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(784);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(800);
      END_STATE();
    case 728:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(792);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(800);
      END_STATE();
    case 729:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(741);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(800);
      END_STATE();
    case 730:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(791);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(800);
      END_STATE();
    case 731:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(943);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(800);
      END_STATE();
    case 732:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(950);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(800);
      END_STATE();
    case 733:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(947);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(800);
      END_STATE();
    case 734:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(910);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(800);
      END_STATE();
    case 735:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(933);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(800);
      END_STATE();
    case 736:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(934);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(800);
      END_STATE();
    case 737:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(721);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(800);
      END_STATE();
    case 738:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(727);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(800);
      END_STATE();
    case 739:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(773);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(800);
      END_STATE();
    case 740:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(713);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(800);
      END_STATE();
    case 741:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(715);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(800);
      END_STATE();
    case 742:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(781);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(800);
      END_STATE();
    case 743:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(778);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(800);
      END_STATE();
    case 744:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(762);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(800);
      END_STATE();
    case 745:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(775);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(800);
      END_STATE();
    case 746:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(798);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(774);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(800);
      END_STATE();
    case 747:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(759);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(764);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(800);
      END_STATE();
    case 748:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(726);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(800);
      END_STATE();
    case 749:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(755);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(800);
      END_STATE();
    case 750:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(770);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(800);
      END_STATE();
    case 751:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(787);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(800);
      END_STATE();
    case 752:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(742);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(800);
      END_STATE();
    case 753:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(799);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(800);
      END_STATE();
    case 754:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(939);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(800);
      END_STATE();
    case 755:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(780);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(800);
      END_STATE();
    case 756:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(782);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(731);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(800);
      END_STATE();
    case 757:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(734);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(800);
      END_STATE();
    case 758:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(723);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(800);
      END_STATE();
    case 759:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(754);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(800);
      END_STATE();
    case 760:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(731);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(800);
      END_STATE();
    case 761:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(796);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(800);
      END_STATE();
    case 762:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(729);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(800);
      END_STATE();
    case 763:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(785);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(800);
      END_STATE();
    case 764:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(769);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(800);
      END_STATE();
    case 765:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(761);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(800);
      END_STATE();
    case 766:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(771);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(800);
      END_STATE();
    case 767:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(790);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(800);
      END_STATE();
    case 768:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(776);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(800);
      END_STATE();
    case 769:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(942);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(800);
      END_STATE();
    case 770:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(718);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(800);
      END_STATE();
    case 771:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(743);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(800);
      END_STATE();
    case 772:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(786);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(800);
      END_STATE();
    case 773:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(797);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(800);
      END_STATE();
    case 774:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(929);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(800);
      END_STATE();
    case 775:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(932);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(800);
      END_STATE();
    case 776:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(931);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(800);
      END_STATE();
    case 777:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(948);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(800);
      END_STATE();
    case 778:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(793);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(800);
      END_STATE();
    case 779:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(930);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(800);
      END_STATE();
    case 780:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(941);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(800);
      END_STATE();
    case 781:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(940);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(800);
      END_STATE();
    case 782:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(733);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(800);
      END_STATE();
    case 783:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(946);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(800);
      END_STATE();
    case 784:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(944);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(800);
      END_STATE();
    case 785:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(928);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(800);
      END_STATE();
    case 786:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(945);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(800);
      END_STATE();
    case 787:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(757);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(800);
      END_STATE();
    case 788:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(746);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(800);
      END_STATE();
    case 789:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(765);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(800);
      END_STATE();
    case 790:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(740);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(800);
      END_STATE();
    case 791:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(768);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(800);
      END_STATE();
    case 792:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(753);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(800);
      END_STATE();
    case 793:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(752);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(800);
      END_STATE();
    case 794:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(735);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(800);
      END_STATE();
    case 795:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(736);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(800);
      END_STATE();
    case 796:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(758);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(800);
      END_STATE();
    case 797:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(744);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(800);
      END_STATE();
    case 798:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(719);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(800);
      END_STATE();
    case 799:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(720);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(800);
      END_STATE();
    case 800:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(800);
      END_STATE();
    case 801:
      ACCEPT_TOKEN(anon_sym_LBRACK_STAR_RBRACK);
      END_STATE();
    case 802:
      ACCEPT_TOKEN(anon_sym_LBRACK_STAR_RBRACK);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(571);
      END_STATE();
    case 803:
      ACCEPT_TOKEN(aux_sym_state_name_token1);
      if (lookahead == ' ') ADVANCE(935);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(826);
      END_STATE();
    case 804:
      ACCEPT_TOKEN(aux_sym_state_name_token1);
      if (lookahead == ' ') ADVANCE(953);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(826);
      END_STATE();
    case 805:
      ACCEPT_TOKEN(aux_sym_state_name_token1);
      if (lookahead == ' ') ADVANCE(174);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(826);
      END_STATE();
    case 806:
      ACCEPT_TOKEN(aux_sym_state_name_token1);
      if (lookahead == ' ') ADVANCE(217);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(826);
      END_STATE();
    case 807:
      ACCEPT_TOKEN(aux_sym_state_name_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(825);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(826);
      END_STATE();
    case 808:
      ACCEPT_TOKEN(aux_sym_state_name_token1);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(823);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(826);
      END_STATE();
    case 809:
      ACCEPT_TOKEN(aux_sym_state_name_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(811);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(826);
      END_STATE();
    case 810:
      ACCEPT_TOKEN(aux_sym_state_name_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(808);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(826);
      END_STATE();
    case 811:
      ACCEPT_TOKEN(aux_sym_state_name_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(806);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(826);
      END_STATE();
    case 812:
      ACCEPT_TOKEN(aux_sym_state_name_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(803);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(826);
      END_STATE();
    case 813:
      ACCEPT_TOKEN(aux_sym_state_name_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(804);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(826);
      END_STATE();
    case 814:
      ACCEPT_TOKEN(aux_sym_state_name_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(820);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(826);
      END_STATE();
    case 815:
      ACCEPT_TOKEN(aux_sym_state_name_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(809);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(826);
      END_STATE();
    case 816:
      ACCEPT_TOKEN(aux_sym_state_name_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(818);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(826);
      END_STATE();
    case 817:
      ACCEPT_TOKEN(aux_sym_state_name_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(805);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(826);
      END_STATE();
    case 818:
      ACCEPT_TOKEN(aux_sym_state_name_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(817);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(826);
      END_STATE();
    case 819:
      ACCEPT_TOKEN(aux_sym_state_name_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(824);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(826);
      END_STATE();
    case 820:
      ACCEPT_TOKEN(aux_sym_state_name_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(810);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(826);
      END_STATE();
    case 821:
      ACCEPT_TOKEN(aux_sym_state_name_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(930);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(826);
      END_STATE();
    case 822:
      ACCEPT_TOKEN(aux_sym_state_name_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(807);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(826);
      END_STATE();
    case 823:
      ACCEPT_TOKEN(aux_sym_state_name_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(816);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(826);
      END_STATE();
    case 824:
      ACCEPT_TOKEN(aux_sym_state_name_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(812);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(826);
      END_STATE();
    case 825:
      ACCEPT_TOKEN(aux_sym_state_name_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(813);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(826);
      END_STATE();
    case 826:
      ACCEPT_TOKEN(aux_sym_state_name_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(826);
      END_STATE();
    case 827:
      ACCEPT_TOKEN(aux_sym_state_hide_empty_description_token1);
      END_STATE();
    case 828:
      ACCEPT_TOKEN(sym_state_id);
      if (lookahead == '\n') ADVANCE(466);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == '-' ||
          lookahead == ':') ADVANCE(10);
      if (lookahead != 0 &&
          lookahead != '{') ADVANCE(829);
      END_STATE();
    case 829:
      ACCEPT_TOKEN(sym_state_id);
      if (lookahead == '\n') ADVANCE(465);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == '-' ||
          lookahead == ':' ||
          lookahead == '{') ADVANCE(10);
      if (lookahead != 0) ADVANCE(829);
      END_STATE();
    case 830:
      ACCEPT_TOKEN(sym_state_id);
      if (lookahead == '%') ADVANCE(828);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '-' &&
          lookahead != ':' &&
          lookahead != '{') ADVANCE(831);
      END_STATE();
    case 831:
      ACCEPT_TOKEN(sym_state_id);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '-' &&
          lookahead != ':' &&
          lookahead != '{') ADVANCE(831);
      END_STATE();
    case 832:
      ACCEPT_TOKEN(aux_sym_state_annotation_fork_token1);
      END_STATE();
    case 833:
      ACCEPT_TOKEN(aux_sym_state_annotation_fork_token2);
      END_STATE();
    case 834:
      ACCEPT_TOKEN(aux_sym_state_annotation_join_token1);
      END_STATE();
    case 835:
      ACCEPT_TOKEN(aux_sym_state_annotation_join_token2);
      END_STATE();
    case 836:
      ACCEPT_TOKEN(aux_sym_state_annotation_choice_token1);
      END_STATE();
    case 837:
      ACCEPT_TOKEN(aux_sym_state_annotation_choice_token2);
      END_STATE();
    case 838:
      ACCEPT_TOKEN(aux_sym_state_direction_tb_token1);
      END_STATE();
    case 839:
      ACCEPT_TOKEN(aux_sym_state_direction_bt_token1);
      END_STATE();
    case 840:
      ACCEPT_TOKEN(aux_sym_state_direction_rl_token1);
      END_STATE();
    case 841:
      ACCEPT_TOKEN(aux_sym_state_direction_lr_token1);
      END_STATE();
    case 842:
      ACCEPT_TOKEN(aux_sym_diagram_class_token1);
      END_STATE();
    case 843:
      ACCEPT_TOKEN(aux_sym_diagram_class_token2);
      if (lookahead == '-') ADVANCE(407);
      END_STATE();
    case 844:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 845:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == ':') ADVANCE(71);
      END_STATE();
    case 846:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 847:
      ACCEPT_TOKEN(anon_sym_TILDE);
      if (lookahead == '!' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(503);
      END_STATE();
    case 848:
      ACCEPT_TOKEN(aux_sym_class_generics_token1);
      if (lookahead == '\n') ADVANCE(467);
      if (lookahead == '{') ADVANCE(851);
      if (lookahead == '~') ADVANCE(10);
      if (lookahead != 0) ADVANCE(849);
      END_STATE();
    case 849:
      ACCEPT_TOKEN(aux_sym_class_generics_token1);
      if (lookahead == '\n') ADVANCE(470);
      if (lookahead == '~') ADVANCE(10);
      if (lookahead != 0) ADVANCE(849);
      END_STATE();
    case 850:
      ACCEPT_TOKEN(aux_sym_class_generics_token1);
      if (lookahead == '%') ADVANCE(848);
      if (lookahead != 0 &&
          lookahead != '~') ADVANCE(851);
      END_STATE();
    case 851:
      ACCEPT_TOKEN(aux_sym_class_generics_token1);
      if (lookahead != 0 &&
          lookahead != '~') ADVANCE(851);
      END_STATE();
    case 852:
      ACCEPT_TOKEN(anon_sym_class);
      if (lookahead == 'D') ADVANCE(272);
      END_STATE();
    case 853:
      ACCEPT_TOKEN(anon_sym_class);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(484);
      END_STATE();
    case 854:
      ACCEPT_TOKEN(anon_sym_COLON_COLON_COLON);
      END_STATE();
    case 855:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 856:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '{') ADVANCE(892);
      END_STATE();
    case 857:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 858:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      if (lookahead == 'o') ADVANCE(577);
      if (lookahead == '|') ADVANCE(579);
      if (lookahead == '}') ADVANCE(893);
      END_STATE();
    case 859:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(571);
      END_STATE();
    case 860:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 861:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 862:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead == '(') ADVANCE(881);
      END_STATE();
    case 863:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead == '(') ADVANCE(881);
      if (lookahead == '-') ADVANCE(883);
      if (lookahead == '[') ADVANCE(884);
      END_STATE();
    case 864:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 865:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      if (lookahead == ')') ADVANCE(882);
      END_STATE();
    case 866:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 867:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      END_STATE();
    case 868:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      END_STATE();
    case 869:
      ACCEPT_TOKEN(aux_sym_diagram_er_token1);
      END_STATE();
    case 870:
      ACCEPT_TOKEN(aux_sym_diagram_flow_token1);
      END_STATE();
    case 871:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 872:
      ACCEPT_TOKEN(aux_sym_flow_stmt_direction_token1);
      END_STATE();
    case 873:
      ACCEPT_TOKEN(aux_sym_flow_stmt_direction_token1);
      if (lookahead == ' ') ADVANCE(174);
      END_STATE();
    case 874:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 875:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 876:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '>') ADVANCE(510);
      if (lookahead == ']') ADVANCE(889);
      if (lookahead == '{') ADVANCE(580);
      if (lookahead == '|') ADVANCE(581);
      END_STATE();
    case 877:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 878:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead == '(') ADVANCE(890);
      if (lookahead == '/') ADVANCE(894);
      if (lookahead == '[') ADVANCE(886);
      if (lookahead == '\\') ADVANCE(896);
      if (lookahead == '|') ADVANCE(888);
      END_STATE();
    case 879:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 880:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      if (lookahead == ')') ADVANCE(885);
      if (lookahead == ']') ADVANCE(887);
      END_STATE();
    case 881:
      ACCEPT_TOKEN(anon_sym_LPAREN_LPAREN);
      END_STATE();
    case 882:
      ACCEPT_TOKEN(anon_sym_RPAREN_RPAREN);
      END_STATE();
    case 883:
      ACCEPT_TOKEN(anon_sym_LPAREN_DASH);
      END_STATE();
    case 884:
      ACCEPT_TOKEN(anon_sym_LPAREN_LBRACK);
      END_STATE();
    case 885:
      ACCEPT_TOKEN(anon_sym_RBRACK_RPAREN);
      END_STATE();
    case 886:
      ACCEPT_TOKEN(anon_sym_LBRACK_LBRACK);
      END_STATE();
    case 887:
      ACCEPT_TOKEN(anon_sym_RBRACK_RBRACK);
      END_STATE();
    case 888:
      ACCEPT_TOKEN(anon_sym_LBRACK_PIPE);
      END_STATE();
    case 889:
      ACCEPT_TOKEN(anon_sym_PIPE_RBRACK);
      END_STATE();
    case 890:
      ACCEPT_TOKEN(anon_sym_LBRACK_LPAREN);
      END_STATE();
    case 891:
      ACCEPT_TOKEN(anon_sym_RPAREN_RBRACK);
      END_STATE();
    case 892:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE);
      END_STATE();
    case 893:
      ACCEPT_TOKEN(anon_sym_RBRACE_RBRACE);
      END_STATE();
    case 894:
      ACCEPT_TOKEN(anon_sym_LBRACK_SLASH);
      END_STATE();
    case 895:
      ACCEPT_TOKEN(anon_sym_BSLASH_RBRACK);
      END_STATE();
    case 896:
      ACCEPT_TOKEN(anon_sym_LBRACK_BSLASH);
      END_STATE();
    case 897:
      ACCEPT_TOKEN(anon_sym_SLASH_RBRACK);
      END_STATE();
    case 898:
      ACCEPT_TOKEN(anon_sym_subgraph);
      END_STATE();
    case 899:
      ACCEPT_TOKEN(anon_sym_subgraph);
      if (lookahead == '!' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(503);
      END_STATE();
    case 900:
      ACCEPT_TOKEN(anon_sym_end);
      END_STATE();
    case 901:
      ACCEPT_TOKEN(anon_sym_end);
      if (lookahead == '!' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(503);
      END_STATE();
    case 902:
      ACCEPT_TOKEN(aux_sym_diagram_gantt_token1);
      END_STATE();
    case 903:
      ACCEPT_TOKEN(aux_sym_gantt_stmt_dateformat_token1);
      END_STATE();
    case 904:
      ACCEPT_TOKEN(aux_sym_gantt_stmt_inclusiveenddates_token1);
      END_STATE();
    case 905:
      ACCEPT_TOKEN(aux_sym_gantt_stmt_topaxis_token1);
      END_STATE();
    case 906:
      ACCEPT_TOKEN(aux_sym_gantt_stmt_axisformat_token1);
      END_STATE();
    case 907:
      ACCEPT_TOKEN(aux_sym_gantt_stmt_includes_token1);
      END_STATE();
    case 908:
      ACCEPT_TOKEN(aux_sym_gantt_stmt_excludes_token1);
      END_STATE();
    case 909:
      ACCEPT_TOKEN(aux_sym_gantt_stmt_todaymarker_token1);
      END_STATE();
    case 910:
      ACCEPT_TOKEN(aux_sym_gantt_stmt_title_token1);
      END_STATE();
    case 911:
      ACCEPT_TOKEN(aux_sym_gantt_stmt_section_token1);
      END_STATE();
    case 912:
      ACCEPT_TOKEN(aux_sym_diagram_mindmap_token1);
      END_STATE();
    case 913:
      ACCEPT_TOKEN(aux_sym_mmap_markdown_token1);
      if (lookahead == '\n') ADVANCE(468);
      if (lookahead == '{') ADVANCE(916);
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(10);
      if (lookahead != 0) ADVANCE(914);
      END_STATE();
    case 914:
      ACCEPT_TOKEN(aux_sym_mmap_markdown_token1);
      if (lookahead == '\n') ADVANCE(469);
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(10);
      if (lookahead != 0) ADVANCE(914);
      END_STATE();
    case 915:
      ACCEPT_TOKEN(aux_sym_mmap_markdown_token1);
      if (lookahead == '%') ADVANCE(913);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '`') ADVANCE(916);
      END_STATE();
    case 916:
      ACCEPT_TOKEN(aux_sym_mmap_markdown_token1);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '`') ADVANCE(916);
      END_STATE();
    case 917:
      ACCEPT_TOKEN(aux_sym_mmap_text_token1);
      END_STATE();
    case 918:
      ACCEPT_TOKEN(aux_sym_mmap_text_token1);
      if (lookahead == '\n') ADVANCE(466);
      if (lookahead != 0 &&
          lookahead != '{') ADVANCE(10);
      END_STATE();
    case 919:
      ACCEPT_TOKEN(aux_sym_mmap_class_token1);
      END_STATE();
    case 920:
      ACCEPT_TOKEN(aux_sym_mmap_class_token2);
      if (lookahead == ' ' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(920);
      END_STATE();
    case 921:
      ACCEPT_TOKEN(aux_sym_mmap_icon_token1);
      END_STATE();
    case 922:
      ACCEPT_TOKEN(aux_sym_mmap_icon_token2);
      if (lookahead == '\n') ADVANCE(466);
      if (lookahead == '{') ADVANCE(925);
      if (lookahead == '\r' ||
          lookahead == ')') ADVANCE(10);
      if (lookahead != 0) ADVANCE(923);
      END_STATE();
    case 923:
      ACCEPT_TOKEN(aux_sym_mmap_icon_token2);
      if (lookahead == '\n') ADVANCE(465);
      if (lookahead == '\r' ||
          lookahead == ')') ADVANCE(10);
      if (lookahead != 0) ADVANCE(923);
      END_STATE();
    case 924:
      ACCEPT_TOKEN(aux_sym_mmap_icon_token2);
      if (lookahead == '%') ADVANCE(922);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ')') ADVANCE(925);
      END_STATE();
    case 925:
      ACCEPT_TOKEN(aux_sym_mmap_icon_token2);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ')') ADVANCE(925);
      END_STATE();
    case 926:
      ACCEPT_TOKEN(aux_sym_diagram_pie_token1);
      END_STATE();
    case 927:
      ACCEPT_TOKEN(aux_sym_diagram_sequence_token1);
      END_STATE();
    case 928:
      ACCEPT_TOKEN(aux_sym__sequence_participant_type_token1);
      END_STATE();
    case 929:
      ACCEPT_TOKEN(aux_sym__sequence_participant_type_token2);
      END_STATE();
    case 930:
      ACCEPT_TOKEN(aux_sym_sequence_stmt_participant_token1);
      END_STATE();
    case 931:
      ACCEPT_TOKEN(aux_sym_sequence_stmt_actor_token1);
      END_STATE();
    case 932:
      ACCEPT_TOKEN(aux_sym_sequence_stmt_autonumber_token1);
      END_STATE();
    case 933:
      ACCEPT_TOKEN(aux_sym_sequence_stmt_activate_token1);
      END_STATE();
    case 934:
      ACCEPT_TOKEN(aux_sym_sequence_stmt_deactivate_token1);
      END_STATE();
    case 935:
      ACCEPT_TOKEN(aux_sym_sequence_stmt_note_token1);
      END_STATE();
    case 936:
      ACCEPT_TOKEN(aux_sym_sequence_stmt_note_token2);
      END_STATE();
    case 937:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 938:
      ACCEPT_TOKEN(aux_sym_sequence_stmt_links_token1);
      END_STATE();
    case 939:
      ACCEPT_TOKEN(aux_sym_sequence_stmt_link_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(938);
      END_STATE();
    case 940:
      ACCEPT_TOKEN(aux_sym_sequence_stmt_properties_token1);
      END_STATE();
    case 941:
      ACCEPT_TOKEN(aux_sym_sequence_stmt_details_token1);
      END_STATE();
    case 942:
      ACCEPT_TOKEN(aux_sym_sequence_stmt_loop_token1);
      END_STATE();
    case 943:
      ACCEPT_TOKEN(aux_sym_sequence_stmt_loop_token2);
      END_STATE();
    case 944:
      ACCEPT_TOKEN(aux_sym_sequence_stmt_rect_token1);
      END_STATE();
    case 945:
      ACCEPT_TOKEN(aux_sym_sequence_stmt_opt_token1);
      END_STATE();
    case 946:
      ACCEPT_TOKEN(aux_sym_sequence_stmt_alt_token1);
      END_STATE();
    case 947:
      ACCEPT_TOKEN(aux_sym_sequence_stmt_alt_token2);
      END_STATE();
    case 948:
      ACCEPT_TOKEN(aux_sym_sequence_stmt_par_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(748);
      END_STATE();
    case 949:
      ACCEPT_TOKEN(aux_sym_sequence_stmt_par_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(258);
      END_STATE();
    case 950:
      ACCEPT_TOKEN(aux_sym_sequence_stmt_par_token2);
      END_STATE();
    case 951:
      ACCEPT_TOKEN(aux_sym_diagram_state_token1);
      if (lookahead == '-') ADVANCE(408);
      END_STATE();
    case 952:
      ACCEPT_TOKEN(aux_sym_diagram_state_token2);
      END_STATE();
    case 953:
      ACCEPT_TOKEN(aux_sym_state_stmt_simple_token1);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 426},
  [2] = {.lex_state = 3},
  [3] = {.lex_state = 3},
  [4] = {.lex_state = 3},
  [5] = {.lex_state = 5},
  [6] = {.lex_state = 3},
  [7] = {.lex_state = 3},
  [8] = {.lex_state = 5},
  [9] = {.lex_state = 3},
  [10] = {.lex_state = 3},
  [11] = {.lex_state = 5},
  [12] = {.lex_state = 3},
  [13] = {.lex_state = 5},
  [14] = {.lex_state = 5},
  [15] = {.lex_state = 3},
  [16] = {.lex_state = 3},
  [17] = {.lex_state = 3},
  [18] = {.lex_state = 5},
  [19] = {.lex_state = 424},
  [20] = {.lex_state = 4},
  [21] = {.lex_state = 4},
  [22] = {.lex_state = 4},
  [23] = {.lex_state = 4},
  [24] = {.lex_state = 4},
  [25] = {.lex_state = 4},
  [26] = {.lex_state = 4},
  [27] = {.lex_state = 4},
  [28] = {.lex_state = 4},
  [29] = {.lex_state = 4},
  [30] = {.lex_state = 4},
  [31] = {.lex_state = 4},
  [32] = {.lex_state = 4},
  [33] = {.lex_state = 4},
  [34] = {.lex_state = 4},
  [35] = {.lex_state = 4},
  [36] = {.lex_state = 424},
  [37] = {.lex_state = 4},
  [38] = {.lex_state = 4},
  [39] = {.lex_state = 4},
  [40] = {.lex_state = 4},
  [41] = {.lex_state = 4},
  [42] = {.lex_state = 4},
  [43] = {.lex_state = 4},
  [44] = {.lex_state = 4},
  [45] = {.lex_state = 4},
  [46] = {.lex_state = 424},
  [47] = {.lex_state = 424},
  [48] = {.lex_state = 424},
  [49] = {.lex_state = 424},
  [50] = {.lex_state = 424},
  [51] = {.lex_state = 424},
  [52] = {.lex_state = 424},
  [53] = {.lex_state = 424},
  [54] = {.lex_state = 424},
  [55] = {.lex_state = 424},
  [56] = {.lex_state = 424},
  [57] = {.lex_state = 424},
  [58] = {.lex_state = 424},
  [59] = {.lex_state = 424},
  [60] = {.lex_state = 424},
  [61] = {.lex_state = 424},
  [62] = {.lex_state = 426},
  [63] = {.lex_state = 434},
  [64] = {.lex_state = 434},
  [65] = {.lex_state = 434},
  [66] = {.lex_state = 434},
  [67] = {.lex_state = 434},
  [68] = {.lex_state = 434},
  [69] = {.lex_state = 432},
  [70] = {.lex_state = 434},
  [71] = {.lex_state = 432},
  [72] = {.lex_state = 434},
  [73] = {.lex_state = 434},
  [74] = {.lex_state = 432},
  [75] = {.lex_state = 434},
  [76] = {.lex_state = 434},
  [77] = {.lex_state = 434},
  [78] = {.lex_state = 434},
  [79] = {.lex_state = 434},
  [80] = {.lex_state = 434},
  [81] = {.lex_state = 434},
  [82] = {.lex_state = 434},
  [83] = {.lex_state = 426},
  [84] = {.lex_state = 426},
  [85] = {.lex_state = 3},
  [86] = {.lex_state = 3},
  [87] = {.lex_state = 3},
  [88] = {.lex_state = 3},
  [89] = {.lex_state = 3},
  [90] = {.lex_state = 3},
  [91] = {.lex_state = 3},
  [92] = {.lex_state = 3},
  [93] = {.lex_state = 3},
  [94] = {.lex_state = 3},
  [95] = {.lex_state = 3},
  [96] = {.lex_state = 3},
  [97] = {.lex_state = 3},
  [98] = {.lex_state = 3},
  [99] = {.lex_state = 3},
  [100] = {.lex_state = 3},
  [101] = {.lex_state = 3},
  [102] = {.lex_state = 3},
  [103] = {.lex_state = 3},
  [104] = {.lex_state = 3},
  [105] = {.lex_state = 3},
  [106] = {.lex_state = 3},
  [107] = {.lex_state = 3},
  [108] = {.lex_state = 3},
  [109] = {.lex_state = 3},
  [110] = {.lex_state = 3},
  [111] = {.lex_state = 3},
  [112] = {.lex_state = 3},
  [113] = {.lex_state = 3},
  [114] = {.lex_state = 3},
  [115] = {.lex_state = 3},
  [116] = {.lex_state = 5},
  [117] = {.lex_state = 5},
  [118] = {.lex_state = 5},
  [119] = {.lex_state = 5},
  [120] = {.lex_state = 5},
  [121] = {.lex_state = 5},
  [122] = {.lex_state = 5},
  [123] = {.lex_state = 5},
  [124] = {.lex_state = 5},
  [125] = {.lex_state = 5},
  [126] = {.lex_state = 5},
  [127] = {.lex_state = 5},
  [128] = {.lex_state = 5},
  [129] = {.lex_state = 5},
  [130] = {.lex_state = 5},
  [131] = {.lex_state = 5},
  [132] = {.lex_state = 5},
  [133] = {.lex_state = 5},
  [134] = {.lex_state = 5},
  [135] = {.lex_state = 5},
  [136] = {.lex_state = 5},
  [137] = {.lex_state = 5},
  [138] = {.lex_state = 5},
  [139] = {.lex_state = 5},
  [140] = {.lex_state = 5},
  [141] = {.lex_state = 5},
  [142] = {.lex_state = 5},
  [143] = {.lex_state = 5},
  [144] = {.lex_state = 5},
  [145] = {.lex_state = 5},
  [146] = {.lex_state = 5},
  [147] = {.lex_state = 5},
  [148] = {.lex_state = 3},
  [149] = {.lex_state = 4},
  [150] = {.lex_state = 424},
  [151] = {.lex_state = 4},
  [152] = {.lex_state = 4},
  [153] = {.lex_state = 4},
  [154] = {.lex_state = 4},
  [155] = {.lex_state = 4},
  [156] = {.lex_state = 4},
  [157] = {.lex_state = 424},
  [158] = {.lex_state = 4},
  [159] = {.lex_state = 4},
  [160] = {.lex_state = 4},
  [161] = {.lex_state = 4},
  [162] = {.lex_state = 4},
  [163] = {.lex_state = 4},
  [164] = {.lex_state = 4},
  [165] = {.lex_state = 4},
  [166] = {.lex_state = 4},
  [167] = {.lex_state = 4},
  [168] = {.lex_state = 4},
  [169] = {.lex_state = 4},
  [170] = {.lex_state = 4},
  [171] = {.lex_state = 4},
  [172] = {.lex_state = 4},
  [173] = {.lex_state = 4},
  [174] = {.lex_state = 4},
  [175] = {.lex_state = 4},
  [176] = {.lex_state = 424},
  [177] = {.lex_state = 4},
  [178] = {.lex_state = 4},
  [179] = {.lex_state = 424},
  [180] = {.lex_state = 424},
  [181] = {.lex_state = 424},
  [182] = {.lex_state = 424},
  [183] = {.lex_state = 424},
  [184] = {.lex_state = 424},
  [185] = {.lex_state = 4},
  [186] = {.lex_state = 424},
  [187] = {.lex_state = 424},
  [188] = {.lex_state = 424},
  [189] = {.lex_state = 424},
  [190] = {.lex_state = 424},
  [191] = {.lex_state = 424},
  [192] = {.lex_state = 424},
  [193] = {.lex_state = 424},
  [194] = {.lex_state = 424},
  [195] = {.lex_state = 424},
  [196] = {.lex_state = 424},
  [197] = {.lex_state = 424},
  [198] = {.lex_state = 424},
  [199] = {.lex_state = 424},
  [200] = {.lex_state = 424},
  [201] = {.lex_state = 4},
  [202] = {.lex_state = 4},
  [203] = {.lex_state = 424},
  [204] = {.lex_state = 424},
  [205] = {.lex_state = 4},
  [206] = {.lex_state = 4},
  [207] = {.lex_state = 424},
  [208] = {.lex_state = 424},
  [209] = {.lex_state = 424},
  [210] = {.lex_state = 424},
  [211] = {.lex_state = 424},
  [212] = {.lex_state = 425},
  [213] = {.lex_state = 428},
  [214] = {.lex_state = 428},
  [215] = {.lex_state = 426},
  [216] = {.lex_state = 428},
  [217] = {.lex_state = 426},
  [218] = {.lex_state = 426},
  [219] = {.lex_state = 435},
  [220] = {.lex_state = 435},
  [221] = {.lex_state = 428},
  [222] = {.lex_state = 437},
  [223] = {.lex_state = 436},
  [224] = {.lex_state = 426},
  [225] = {.lex_state = 12},
  [226] = {.lex_state = 434},
  [227] = {.lex_state = 428},
  [228] = {.lex_state = 437},
  [229] = {.lex_state = 434},
  [230] = {.lex_state = 434},
  [231] = {.lex_state = 434},
  [232] = {.lex_state = 434},
  [233] = {.lex_state = 23},
  [234] = {.lex_state = 434},
  [235] = {.lex_state = 435},
  [236] = {.lex_state = 434},
  [237] = {.lex_state = 434},
  [238] = {.lex_state = 434},
  [239] = {.lex_state = 434},
  [240] = {.lex_state = 434},
  [241] = {.lex_state = 428},
  [242] = {.lex_state = 441},
  [243] = {.lex_state = 23},
  [244] = {.lex_state = 434},
  [245] = {.lex_state = 2},
  [246] = {.lex_state = 434},
  [247] = {.lex_state = 434},
  [248] = {.lex_state = 434},
  [249] = {.lex_state = 434},
  [250] = {.lex_state = 434},
  [251] = {.lex_state = 434},
  [252] = {.lex_state = 42},
  [253] = {.lex_state = 434},
  [254] = {.lex_state = 42},
  [255] = {.lex_state = 434},
  [256] = {.lex_state = 434},
  [257] = {.lex_state = 434},
  [258] = {.lex_state = 434},
  [259] = {.lex_state = 434},
  [260] = {.lex_state = 441},
  [261] = {.lex_state = 23},
  [262] = {.lex_state = 23},
  [263] = {.lex_state = 428},
  [264] = {.lex_state = 42},
  [265] = {.lex_state = 2},
  [266] = {.lex_state = 434},
  [267] = {.lex_state = 434},
  [268] = {.lex_state = 434},
  [269] = {.lex_state = 11},
  [270] = {.lex_state = 428},
  [271] = {.lex_state = 426},
  [272] = {.lex_state = 42},
  [273] = {.lex_state = 11},
  [274] = {.lex_state = 11},
  [275] = {.lex_state = 42},
  [276] = {.lex_state = 432},
  [277] = {.lex_state = 441},
  [278] = {.lex_state = 11},
  [279] = {.lex_state = 11},
  [280] = {.lex_state = 11},
  [281] = {.lex_state = 441},
  [282] = {.lex_state = 428},
  [283] = {.lex_state = 436},
  [284] = {.lex_state = 432},
  [285] = {.lex_state = 432},
  [286] = {.lex_state = 432},
  [287] = {.lex_state = 432},
  [288] = {.lex_state = 432},
  [289] = {.lex_state = 432},
  [290] = {.lex_state = 432},
  [291] = {.lex_state = 432},
  [292] = {.lex_state = 432},
  [293] = {.lex_state = 432},
  [294] = {.lex_state = 11},
  [295] = {.lex_state = 432},
  [296] = {.lex_state = 11},
  [297] = {.lex_state = 426},
  [298] = {.lex_state = 439},
  [299] = {.lex_state = 426},
  [300] = {.lex_state = 11},
  [301] = {.lex_state = 436},
  [302] = {.lex_state = 426},
  [303] = {.lex_state = 32},
  [304] = {.lex_state = 436},
  [305] = {.lex_state = 11},
  [306] = {.lex_state = 32},
  [307] = {.lex_state = 426},
  [308] = {.lex_state = 439},
  [309] = {.lex_state = 436},
  [310] = {.lex_state = 439},
  [311] = {.lex_state = 11},
  [312] = {.lex_state = 426},
  [313] = {.lex_state = 439},
  [314] = {.lex_state = 436},
  [315] = {.lex_state = 436},
  [316] = {.lex_state = 426},
  [317] = {.lex_state = 426},
  [318] = {.lex_state = 426},
  [319] = {.lex_state = 426},
  [320] = {.lex_state = 439},
  [321] = {.lex_state = 426},
  [322] = {.lex_state = 426},
  [323] = {.lex_state = 426},
  [324] = {.lex_state = 426},
  [325] = {.lex_state = 426},
  [326] = {.lex_state = 426},
  [327] = {.lex_state = 426},
  [328] = {.lex_state = 426},
  [329] = {.lex_state = 439},
  [330] = {.lex_state = 426},
  [331] = {.lex_state = 426},
  [332] = {.lex_state = 426},
  [333] = {.lex_state = 425},
  [334] = {.lex_state = 426},
  [335] = {.lex_state = 426},
  [336] = {.lex_state = 426},
  [337] = {.lex_state = 426},
  [338] = {.lex_state = 23},
  [339] = {.lex_state = 11},
  [340] = {.lex_state = 431},
  [341] = {.lex_state = 23},
  [342] = {.lex_state = 431},
  [343] = {.lex_state = 431},
  [344] = {.lex_state = 426},
  [345] = {.lex_state = 431},
  [346] = {.lex_state = 23},
  [347] = {.lex_state = 426},
  [348] = {.lex_state = 426},
  [349] = {.lex_state = 426},
  [350] = {.lex_state = 426},
  [351] = {.lex_state = 431},
  [352] = {.lex_state = 431},
  [353] = {.lex_state = 427},
  [354] = {.lex_state = 7},
  [355] = {.lex_state = 427},
  [356] = {.lex_state = 426},
  [357] = {.lex_state = 426},
  [358] = {.lex_state = 426},
  [359] = {.lex_state = 429},
  [360] = {.lex_state = 427},
  [361] = {.lex_state = 434},
  [362] = {.lex_state = 427},
  [363] = {.lex_state = 7},
  [364] = {.lex_state = 7},
  [365] = {.lex_state = 7},
  [366] = {.lex_state = 429},
  [367] = {.lex_state = 439},
  [368] = {.lex_state = 439},
  [369] = {.lex_state = 435},
  [370] = {.lex_state = 426},
  [371] = {.lex_state = 439},
  [372] = {.lex_state = 438},
  [373] = {.lex_state = 438},
  [374] = {.lex_state = 439},
  [375] = {.lex_state = 431},
  [376] = {.lex_state = 426},
  [377] = {.lex_state = 429},
  [378] = {.lex_state = 427},
  [379] = {.lex_state = 427},
  [380] = {.lex_state = 431},
  [381] = {.lex_state = 427},
  [382] = {.lex_state = 439},
  [383] = {.lex_state = 429},
  [384] = {.lex_state = 426},
  [385] = {.lex_state = 425},
  [386] = {.lex_state = 426},
  [387] = {.lex_state = 26},
  [388] = {.lex_state = 429},
  [389] = {.lex_state = 426},
  [390] = {.lex_state = 431},
  [391] = {.lex_state = 24},
  [392] = {.lex_state = 437},
  [393] = {.lex_state = 26},
  [394] = {.lex_state = 26},
  [395] = {.lex_state = 26},
  [396] = {.lex_state = 26},
  [397] = {.lex_state = 26},
  [398] = {.lex_state = 26},
  [399] = {.lex_state = 26},
  [400] = {.lex_state = 26},
  [401] = {.lex_state = 429},
  [402] = {.lex_state = 435},
  [403] = {.lex_state = 429},
  [404] = {.lex_state = 26},
  [405] = {.lex_state = 26},
  [406] = {.lex_state = 429},
  [407] = {.lex_state = 426},
  [408] = {.lex_state = 26},
  [409] = {.lex_state = 26},
  [410] = {.lex_state = 41},
  [411] = {.lex_state = 31},
  [412] = {.lex_state = 430},
  [413] = {.lex_state = 429},
  [414] = {.lex_state = 31},
  [415] = {.lex_state = 434},
  [416] = {.lex_state = 427},
  [417] = {.lex_state = 427},
  [418] = {.lex_state = 427},
  [419] = {.lex_state = 427},
  [420] = {.lex_state = 427},
  [421] = {.lex_state = 429},
  [422] = {.lex_state = 429},
  [423] = {.lex_state = 429},
  [424] = {.lex_state = 427},
  [425] = {.lex_state = 41},
  [426] = {.lex_state = 20},
  [427] = {.lex_state = 20},
  [428] = {.lex_state = 20},
  [429] = {.lex_state = 20},
  [430] = {.lex_state = 20},
  [431] = {.lex_state = 20},
  [432] = {.lex_state = 435},
  [433] = {.lex_state = 425},
  [434] = {.lex_state = 6},
  [435] = {.lex_state = 435},
  [436] = {.lex_state = 428},
  [437] = {.lex_state = 431},
  [438] = {.lex_state = 440},
  [439] = {.lex_state = 433},
  [440] = {.lex_state = 6},
  [441] = {.lex_state = 426},
  [442] = {.lex_state = 42},
  [443] = {.lex_state = 428},
  [444] = {.lex_state = 13},
  [445] = {.lex_state = 431},
  [446] = {.lex_state = 431},
  [447] = {.lex_state = 431},
  [448] = {.lex_state = 431},
  [449] = {.lex_state = 431},
  [450] = {.lex_state = 440},
  [451] = {.lex_state = 433},
  [452] = {.lex_state = 426},
  [453] = {.lex_state = 435},
  [454] = {.lex_state = 426},
  [455] = {.lex_state = 426},
  [456] = {.lex_state = 426},
  [457] = {.lex_state = 426},
  [458] = {.lex_state = 426},
  [459] = {.lex_state = 426},
  [460] = {.lex_state = 426},
  [461] = {.lex_state = 433},
  [462] = {.lex_state = 435},
  [463] = {.lex_state = 426},
  [464] = {.lex_state = 426},
  [465] = {.lex_state = 433},
  [466] = {.lex_state = 13},
  [467] = {.lex_state = 426},
  [468] = {.lex_state = 13},
  [469] = {.lex_state = 13},
  [470] = {.lex_state = 428},
  [471] = {.lex_state = 13},
  [472] = {.lex_state = 425},
  [473] = {.lex_state = 425},
  [474] = {.lex_state = 425},
  [475] = {.lex_state = 425},
  [476] = {.lex_state = 425},
  [477] = {.lex_state = 427},
  [478] = {.lex_state = 429},
  [479] = {.lex_state = 426},
  [480] = {.lex_state = 2},
  [481] = {.lex_state = 434},
  [482] = {.lex_state = 434},
  [483] = {.lex_state = 434},
  [484] = {.lex_state = 434},
  [485] = {.lex_state = 434},
  [486] = {.lex_state = 434},
  [487] = {.lex_state = 434},
  [488] = {.lex_state = 434},
  [489] = {.lex_state = 426},
  [490] = {.lex_state = 434},
  [491] = {.lex_state = 440},
  [492] = {.lex_state = 13},
  [493] = {.lex_state = 434},
  [494] = {.lex_state = 426},
  [495] = {.lex_state = 426},
  [496] = {.lex_state = 426},
  [497] = {.lex_state = 13},
  [498] = {.lex_state = 434},
  [499] = {.lex_state = 434},
  [500] = {.lex_state = 434},
  [501] = {.lex_state = 7},
  [502] = {.lex_state = 434},
  [503] = {.lex_state = 434},
  [504] = {.lex_state = 431},
  [505] = {.lex_state = 7},
  [506] = {.lex_state = 434},
  [507] = {.lex_state = 434},
  [508] = {.lex_state = 13},
  [509] = {.lex_state = 429},
  [510] = {.lex_state = 426},
  [511] = {.lex_state = 7},
  [512] = {.lex_state = 2},
  [513] = {.lex_state = 434},
  [514] = {.lex_state = 426},
  [515] = {.lex_state = 13},
  [516] = {.lex_state = 13},
  [517] = {.lex_state = 426},
  [518] = {.lex_state = 13},
  [519] = {.lex_state = 426},
  [520] = {.lex_state = 24},
  [521] = {.lex_state = 24},
  [522] = {.lex_state = 2},
  [523] = {.lex_state = 431},
  [524] = {.lex_state = 431},
  [525] = {.lex_state = 426},
  [526] = {.lex_state = 24},
  [527] = {.lex_state = 426},
  [528] = {.lex_state = 426},
  [529] = {.lex_state = 30},
  [530] = {.lex_state = 429},
  [531] = {.lex_state = 426},
  [532] = {.lex_state = 426},
  [533] = {.lex_state = 426},
  [534] = {.lex_state = 426},
  [535] = {.lex_state = 13},
  [536] = {.lex_state = 426},
  [537] = {.lex_state = 13},
  [538] = {.lex_state = 13},
  [539] = {.lex_state = 13},
  [540] = {.lex_state = 2},
  [541] = {.lex_state = 2},
  [542] = {.lex_state = 426},
  [543] = {.lex_state = 2},
  [544] = {.lex_state = 426},
  [545] = {.lex_state = 2},
  [546] = {.lex_state = 2},
  [547] = {.lex_state = 426},
  [548] = {.lex_state = 426},
  [549] = {.lex_state = 2},
  [550] = {.lex_state = 426},
  [551] = {.lex_state = 429},
  [552] = {.lex_state = 2},
  [553] = {.lex_state = 426},
  [554] = {.lex_state = 13},
  [555] = {.lex_state = 13},
  [556] = {.lex_state = 13},
  [557] = {.lex_state = 13},
  [558] = {.lex_state = 431},
  [559] = {.lex_state = 426},
  [560] = {.lex_state = 431},
  [561] = {.lex_state = 426},
  [562] = {.lex_state = 426},
  [563] = {.lex_state = 426},
  [564] = {.lex_state = 426},
  [565] = {.lex_state = 426},
  [566] = {.lex_state = 429},
  [567] = {.lex_state = 13},
  [568] = {.lex_state = 13},
  [569] = {.lex_state = 13},
  [570] = {.lex_state = 13},
  [571] = {.lex_state = 2},
  [572] = {.lex_state = 30},
  [573] = {.lex_state = 2},
  [574] = {.lex_state = 434},
  [575] = {.lex_state = 426},
  [576] = {.lex_state = 426},
  [577] = {.lex_state = 429},
  [578] = {.lex_state = 13},
  [579] = {.lex_state = 13},
  [580] = {.lex_state = 13},
  [581] = {.lex_state = 13},
  [582] = {.lex_state = 426},
  [583] = {.lex_state = 426},
  [584] = {.lex_state = 426},
  [585] = {.lex_state = 426},
  [586] = {.lex_state = 2},
  [587] = {.lex_state = 2},
  [588] = {.lex_state = 2},
  [589] = {.lex_state = 2},
  [590] = {.lex_state = 24},
  [591] = {.lex_state = 426},
  [592] = {.lex_state = 13},
  [593] = {.lex_state = 13},
  [594] = {.lex_state = 13},
  [595] = {.lex_state = 13},
  [596] = {.lex_state = 2},
  [597] = {.lex_state = 2},
  [598] = {.lex_state = 2},
  [599] = {.lex_state = 2},
  [600] = {.lex_state = 426},
  [601] = {.lex_state = 426},
  [602] = {.lex_state = 13},
  [603] = {.lex_state = 13},
  [604] = {.lex_state = 13},
  [605] = {.lex_state = 13},
  [606] = {.lex_state = 2},
  [607] = {.lex_state = 2},
  [608] = {.lex_state = 2},
  [609] = {.lex_state = 2},
  [610] = {.lex_state = 13},
  [611] = {.lex_state = 13},
  [612] = {.lex_state = 13},
  [613] = {.lex_state = 13},
  [614] = {.lex_state = 13},
  [615] = {.lex_state = 2},
  [616] = {.lex_state = 2},
  [617] = {.lex_state = 2},
  [618] = {.lex_state = 2},
  [619] = {.lex_state = 13},
  [620] = {.lex_state = 13},
  [621] = {.lex_state = 13},
  [622] = {.lex_state = 2},
  [623] = {.lex_state = 2},
  [624] = {.lex_state = 2},
  [625] = {.lex_state = 2},
  [626] = {.lex_state = 13},
  [627] = {.lex_state = 13},
  [628] = {.lex_state = 13},
  [629] = {.lex_state = 2},
  [630] = {.lex_state = 2},
  [631] = {.lex_state = 2},
  [632] = {.lex_state = 2},
  [633] = {.lex_state = 13},
  [634] = {.lex_state = 13},
  [635] = {.lex_state = 13},
  [636] = {.lex_state = 13},
  [637] = {.lex_state = 2},
  [638] = {.lex_state = 2},
  [639] = {.lex_state = 13},
  [640] = {.lex_state = 2},
  [641] = {.lex_state = 2},
  [642] = {.lex_state = 13},
  [643] = {.lex_state = 2},
  [644] = {.lex_state = 2},
  [645] = {.lex_state = 429},
  [646] = {.lex_state = 2},
  [647] = {.lex_state = 2},
  [648] = {.lex_state = 13},
  [649] = {.lex_state = 2},
  [650] = {.lex_state = 2},
  [651] = {.lex_state = 2},
  [652] = {.lex_state = 2},
  [653] = {.lex_state = 426},
  [654] = {.lex_state = 434},
  [655] = {.lex_state = 426},
  [656] = {.lex_state = 426},
  [657] = {.lex_state = 13},
  [658] = {.lex_state = 34},
  [659] = {.lex_state = 426},
  [660] = {.lex_state = 426},
  [661] = {.lex_state = 426},
  [662] = {.lex_state = 427},
  [663] = {.lex_state = 426},
  [664] = {.lex_state = 13},
  [665] = {.lex_state = 434},
  [666] = {.lex_state = 426},
  [667] = {.lex_state = 13},
  [668] = {.lex_state = 426},
  [669] = {.lex_state = 13},
  [670] = {.lex_state = 434},
  [671] = {.lex_state = 13},
  [672] = {.lex_state = 426},
  [673] = {.lex_state = 426},
  [674] = {.lex_state = 13},
  [675] = {.lex_state = 13},
  [676] = {.lex_state = 13},
  [677] = {.lex_state = 426},
  [678] = {.lex_state = 427},
  [679] = {.lex_state = 13},
  [680] = {.lex_state = 13},
  [681] = {.lex_state = 426},
  [682] = {.lex_state = 13},
  [683] = {.lex_state = 13},
  [684] = {.lex_state = 13},
  [685] = {.lex_state = 13},
  [686] = {.lex_state = 426},
  [687] = {.lex_state = 426},
  [688] = {.lex_state = 426},
  [689] = {.lex_state = 426},
  [690] = {.lex_state = 13},
  [691] = {.lex_state = 426},
  [692] = {.lex_state = 13},
  [693] = {.lex_state = 13},
  [694] = {.lex_state = 24},
  [695] = {.lex_state = 13},
  [696] = {.lex_state = 13},
  [697] = {.lex_state = 426},
  [698] = {.lex_state = 427},
  [699] = {.lex_state = 24},
  [700] = {.lex_state = 13},
  [701] = {.lex_state = 426},
  [702] = {.lex_state = 427},
  [703] = {.lex_state = 426},
  [704] = {.lex_state = 426},
  [705] = {.lex_state = 426},
  [706] = {.lex_state = 426},
  [707] = {.lex_state = 426},
  [708] = {.lex_state = 426},
  [709] = {.lex_state = 24},
  [710] = {.lex_state = 426},
  [711] = {.lex_state = 426},
  [712] = {.lex_state = 426},
  [713] = {.lex_state = 431},
  [714] = {.lex_state = 431},
  [715] = {.lex_state = 24},
  [716] = {.lex_state = 426},
  [717] = {.lex_state = 426},
  [718] = {.lex_state = 433},
  [719] = {.lex_state = 426},
  [720] = {.lex_state = 426},
  [721] = {.lex_state = 426},
  [722] = {.lex_state = 426},
  [723] = {.lex_state = 426},
  [724] = {.lex_state = 426},
  [725] = {.lex_state = 426},
  [726] = {.lex_state = 426},
  [727] = {.lex_state = 426},
  [728] = {.lex_state = 426},
  [729] = {.lex_state = 426},
  [730] = {.lex_state = 434},
  [731] = {.lex_state = 426},
  [732] = {.lex_state = 426},
  [733] = {.lex_state = 426},
  [734] = {.lex_state = 426},
  [735] = {.lex_state = 13},
  [736] = {.lex_state = 426},
  [737] = {.lex_state = 427},
  [738] = {.lex_state = 426},
  [739] = {.lex_state = 426},
  [740] = {.lex_state = 433},
  [741] = {.lex_state = 426},
  [742] = {.lex_state = 426},
  [743] = {.lex_state = 426},
  [744] = {.lex_state = 426},
  [745] = {.lex_state = 426},
  [746] = {.lex_state = 426},
  [747] = {.lex_state = 426},
  [748] = {.lex_state = 426},
  [749] = {.lex_state = 426},
  [750] = {.lex_state = 426},
  [751] = {.lex_state = 426},
  [752] = {.lex_state = 426},
  [753] = {.lex_state = 426},
  [754] = {.lex_state = 426},
  [755] = {.lex_state = 426},
  [756] = {.lex_state = 426},
  [757] = {.lex_state = 35},
  [758] = {.lex_state = 426},
  [759] = {.lex_state = 426},
  [760] = {.lex_state = 426},
  [761] = {.lex_state = 426},
  [762] = {.lex_state = 426},
  [763] = {.lex_state = 434},
  [764] = {.lex_state = 434},
  [765] = {.lex_state = 426},
  [766] = {.lex_state = 426},
  [767] = {.lex_state = 426},
  [768] = {.lex_state = 426},
  [769] = {.lex_state = 431},
  [770] = {.lex_state = 426},
  [771] = {.lex_state = 426},
  [772] = {.lex_state = 426},
  [773] = {.lex_state = 431},
  [774] = {.lex_state = 426},
  [775] = {.lex_state = 426},
  [776] = {.lex_state = 44},
  [777] = {.lex_state = 426},
  [778] = {.lex_state = 426},
  [779] = {.lex_state = 426},
  [780] = {.lex_state = 426},
  [781] = {.lex_state = 431},
  [782] = {.lex_state = 426},
  [783] = {.lex_state = 426},
  [784] = {.lex_state = 434},
  [785] = {.lex_state = 434},
  [786] = {.lex_state = 426},
  [787] = {.lex_state = 426},
  [788] = {.lex_state = 426},
  [789] = {.lex_state = 426},
  [790] = {.lex_state = 426},
  [791] = {.lex_state = 426},
  [792] = {.lex_state = 426},
  [793] = {.lex_state = 426},
  [794] = {.lex_state = 428},
  [795] = {.lex_state = 36},
  [796] = {.lex_state = 431},
  [797] = {.lex_state = 426},
  [798] = {.lex_state = 426},
  [799] = {.lex_state = 37},
  [800] = {.lex_state = 426},
  [801] = {.lex_state = 2},
  [802] = {.lex_state = 38},
  [803] = {.lex_state = 43},
  [804] = {.lex_state = 426},
  [805] = {.lex_state = 431},
  [806] = {.lex_state = 426},
  [807] = {.lex_state = 426},
  [808] = {.lex_state = 426},
  [809] = {.lex_state = 427},
  [810] = {.lex_state = 426},
  [811] = {.lex_state = 426},
  [812] = {.lex_state = 426},
  [813] = {.lex_state = 426},
  [814] = {.lex_state = 426},
  [815] = {.lex_state = 426},
  [816] = {.lex_state = 426},
  [817] = {.lex_state = 426},
  [818] = {.lex_state = 434},
  [819] = {.lex_state = 431},
  [820] = {.lex_state = 426},
  [821] = {.lex_state = 426},
  [822] = {.lex_state = 426},
  [823] = {.lex_state = 427},
  [824] = {.lex_state = 426},
  [825] = {.lex_state = 426},
  [826] = {.lex_state = 426},
  [827] = {.lex_state = 426},
  [828] = {.lex_state = 428},
  [829] = {.lex_state = 426},
  [830] = {.lex_state = 428},
  [831] = {.lex_state = 426},
  [832] = {.lex_state = 426},
  [833] = {.lex_state = 426},
  [834] = {.lex_state = 426},
  [835] = {.lex_state = 426},
  [836] = {.lex_state = 426},
  [837] = {.lex_state = 426},
  [838] = {.lex_state = 426},
  [839] = {.lex_state = 426},
  [840] = {.lex_state = 426},
  [841] = {.lex_state = 40},
  [842] = {.lex_state = 426},
  [843] = {.lex_state = 426},
  [844] = {.lex_state = 426},
  [845] = {.lex_state = 426},
  [846] = {.lex_state = 434},
  [847] = {.lex_state = 426},
  [848] = {.lex_state = 431},
  [849] = {.lex_state = 426},
  [850] = {.lex_state = 428},
  [851] = {.lex_state = 426},
  [852] = {.lex_state = 426},
  [853] = {.lex_state = 426},
  [854] = {.lex_state = 426},
  [855] = {.lex_state = 426},
  [856] = {.lex_state = 36},
  [857] = {.lex_state = 426},
  [858] = {.lex_state = 426},
  [859] = {.lex_state = 426},
  [860] = {.lex_state = 426},
  [861] = {.lex_state = 426},
  [862] = {.lex_state = 426},
  [863] = {.lex_state = 426},
  [864] = {.lex_state = 426},
  [865] = {.lex_state = 2},
  [866] = {.lex_state = 426},
  [867] = {.lex_state = 426},
  [868] = {.lex_state = 38},
  [869] = {.lex_state = 34},
  [870] = {.lex_state = 2},
  [871] = {.lex_state = 426},
  [872] = {.lex_state = 426},
  [873] = {.lex_state = 426},
  [874] = {.lex_state = 426},
  [875] = {.lex_state = 34},
  [876] = {.lex_state = 426},
  [877] = {.lex_state = 426},
  [878] = {.lex_state = 426},
  [879] = {.lex_state = 426},
  [880] = {.lex_state = 426},
  [881] = {.lex_state = 426},
  [882] = {.lex_state = 434},
  [883] = {.lex_state = 426},
  [884] = {.lex_state = 426},
  [885] = {.lex_state = 426},
  [886] = {.lex_state = 426},
  [887] = {.lex_state = 426},
  [888] = {.lex_state = 426},
  [889] = {.lex_state = 426},
  [890] = {.lex_state = 426},
  [891] = {.lex_state = 434},
  [892] = {.lex_state = 426},
  [893] = {.lex_state = 426},
  [894] = {.lex_state = 426},
  [895] = {.lex_state = 426},
  [896] = {.lex_state = 426},
  [897] = {.lex_state = 426},
  [898] = {.lex_state = 426},
  [899] = {.lex_state = 426},
  [900] = {.lex_state = 426},
  [901] = {.lex_state = 2},
  [902] = {.lex_state = 2},
  [903] = {.lex_state = 426},
  [904] = {.lex_state = 426},
  [905] = {.lex_state = 473},
  [906] = {.lex_state = 426},
  [907] = {.lex_state = 426},
  [908] = {.lex_state = 426},
  [909] = {.lex_state = 426},
  [910] = {.lex_state = 434},
  [911] = {.lex_state = 426},
  [912] = {.lex_state = 434},
  [913] = {.lex_state = 426},
  [914] = {.lex_state = 426},
  [915] = {.lex_state = 35},
  [916] = {.lex_state = 426},
  [917] = {.lex_state = 426},
  [918] = {.lex_state = 434},
  [919] = {.lex_state = 426},
  [920] = {.lex_state = 1},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_PERCENT_PERCENT_LBRACE] = ACTIONS(1),
    [sym__whitespace] = ACTIONS(3),
    [sym__newline] = ACTIONS(1),
    [sym_comment] = ACTIONS(5),
    [sym__md_start] = ACTIONS(1),
    [sym__md_end] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [aux_sym_note_placement_left_token1] = ACTIONS(1),
    [aux_sym_note_placement_right_token1] = ACTIONS(1),
    [sym_class_reltype_aggregation] = ACTIONS(1),
    [anon_sym_LT_PIPE] = ACTIONS(1),
    [anon_sym_PIPE_GT] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_DASH_DASH] = ACTIONS(1),
    [anon_sym_DOT_DOT] = ACTIONS(1),
    [anon_sym_o_PIPE] = ACTIONS(1),
    [anon_sym_RBRACEo] = ACTIONS(1),
    [anon_sym_o_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE_PIPE] = ACTIONS(1),
    [anon_sym_PIPE_LBRACE] = ACTIONS(1),
    [sym_er_cardinarity_only_one] = ACTIONS(1),
    [anon_sym_DOT_DASH] = ACTIONS(1),
    [aux_sym_er_attribute_key_type_pk_token1] = ACTIONS(1),
    [aux_sym_er_attribute_key_type_fk_token1] = ACTIONS(1),
    [aux_sym_flowchart_direction_lr_token1] = ACTIONS(1),
    [aux_sym_flowchart_direction_lr_token2] = ACTIONS(1),
    [aux_sym_flowchart_direction_rl_token1] = ACTIONS(1),
    [aux_sym_flowchart_direction_tb_token1] = ACTIONS(1),
    [aux_sym_flowchart_direction_tb_token2] = ACTIONS(1),
    [anon_sym_v] = ACTIONS(1),
    [aux_sym_flowchart_direction_bt_token1] = ACTIONS(1),
    [anon_sym_CARET] = ACTIONS(1),
    [aux_sym_flow_link_arrow_token2] = ACTIONS(1),
    [aux_sym_flow_link_arrow_start_token2] = ACTIONS(1),
    [aux_sym_pie_showdata_token1] = ACTIONS(1),
    [sym_sequence__solid_arrow] = ACTIONS(1),
    [sym_sequence__solid_open_arrow] = ACTIONS(1),
    [anon_sym_DASH_DASH_GT] = ACTIONS(1),
    [sym_sequence__dotted_point] = ACTIONS(1),
    [aux_sym_state_hide_empty_description_token1] = ACTIONS(1),
    [aux_sym_state_direction_tb_token1] = ACTIONS(1),
    [aux_sym_state_direction_bt_token1] = ACTIONS(1),
    [aux_sym_state_direction_rl_token1] = ACTIONS(1),
    [aux_sym_state_direction_lr_token1] = ACTIONS(1),
    [aux_sym_diagram_class_token1] = ACTIONS(1),
    [aux_sym_diagram_class_token2] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_TILDE] = ACTIONS(1),
    [anon_sym_class] = ACTIONS(1),
    [anon_sym_COLON_COLON_COLON] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_DOLLAR] = ACTIONS(1),
    [anon_sym_LT_LT] = ACTIONS(1),
    [aux_sym_diagram_er_token1] = ACTIONS(1),
    [aux_sym_diagram_flow_token1] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [aux_sym_flow_stmt_direction_token1] = ACTIONS(1),
    [anon_sym_AMP] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_LPAREN_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN_RPAREN] = ACTIONS(1),
    [anon_sym_LPAREN_DASH] = ACTIONS(1),
    [anon_sym_LPAREN_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK_RPAREN] = ACTIONS(1),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(1),
    [anon_sym_LBRACK_PIPE] = ACTIONS(1),
    [anon_sym_PIPE_RBRACK] = ACTIONS(1),
    [anon_sym_LBRACK_LPAREN] = ACTIONS(1),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(1),
    [anon_sym_LBRACK_SLASH] = ACTIONS(1),
    [anon_sym_BSLASH_RBRACK] = ACTIONS(1),
    [anon_sym_LBRACK_BSLASH] = ACTIONS(1),
    [anon_sym_SLASH_RBRACK] = ACTIONS(1),
    [anon_sym_subgraph] = ACTIONS(1),
    [anon_sym_end] = ACTIONS(1),
    [aux_sym_diagram_gantt_token1] = ACTIONS(1),
    [aux_sym_gantt_stmt_dateformat_token1] = ACTIONS(1),
    [aux_sym_gantt_stmt_inclusiveenddates_token1] = ACTIONS(1),
    [aux_sym_gantt_stmt_topaxis_token1] = ACTIONS(1),
    [aux_sym_gantt_stmt_axisformat_token1] = ACTIONS(1),
    [aux_sym_gantt_stmt_includes_token1] = ACTIONS(1),
    [aux_sym_gantt_stmt_excludes_token1] = ACTIONS(1),
    [aux_sym_gantt_stmt_todaymarker_token1] = ACTIONS(1),
    [aux_sym_gantt_stmt_title_token1] = ACTIONS(1),
    [aux_sym_gantt_stmt_section_token1] = ACTIONS(1),
    [aux_sym_diagram_mindmap_token1] = ACTIONS(1),
    [aux_sym_mmap_class_token1] = ACTIONS(1),
    [aux_sym_mmap_icon_token1] = ACTIONS(1),
    [aux_sym_diagram_pie_token1] = ACTIONS(1),
    [aux_sym_diagram_sequence_token1] = ACTIONS(1),
    [aux_sym__sequence_participant_type_token1] = ACTIONS(1),
    [aux_sym__sequence_participant_type_token2] = ACTIONS(1),
    [aux_sym_sequence_stmt_participant_token1] = ACTIONS(1),
    [aux_sym_sequence_stmt_actor_token1] = ACTIONS(1),
    [aux_sym_sequence_stmt_autonumber_token1] = ACTIONS(1),
    [aux_sym_sequence_stmt_activate_token1] = ACTIONS(1),
    [aux_sym_sequence_stmt_deactivate_token1] = ACTIONS(1),
    [aux_sym_sequence_stmt_note_token1] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [aux_sym_sequence_stmt_links_token1] = ACTIONS(1),
    [aux_sym_sequence_stmt_link_token1] = ACTIONS(1),
    [aux_sym_sequence_stmt_properties_token1] = ACTIONS(1),
    [aux_sym_sequence_stmt_details_token1] = ACTIONS(1),
    [aux_sym_sequence_stmt_loop_token1] = ACTIONS(1),
    [aux_sym_sequence_stmt_loop_token2] = ACTIONS(1),
    [aux_sym_sequence_stmt_rect_token1] = ACTIONS(1),
    [aux_sym_sequence_stmt_alt_token1] = ACTIONS(1),
    [aux_sym_sequence_stmt_alt_token2] = ACTIONS(1),
    [aux_sym_sequence_stmt_par_token1] = ACTIONS(1),
    [aux_sym_sequence_stmt_par_token2] = ACTIONS(1),
    [aux_sym_diagram_state_token1] = ACTIONS(1),
    [aux_sym_diagram_state_token2] = ACTIONS(1),
    [aux_sym_state_stmt_simple_token1] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(866),
    [sym_directive] = STATE(84),
    [sym_diagram_class] = STATE(885),
    [sym_diagram_er] = STATE(885),
    [sym_diagram_flow] = STATE(885),
    [sym_diagram_gantt] = STATE(885),
    [sym_diagram_mindmap] = STATE(885),
    [sym_diagram_pie] = STATE(885),
    [sym_diagram_sequence] = STATE(885),
    [sym_diagram_state] = STATE(885),
    [aux_sym_source_file_repeat1] = STATE(84),
    [anon_sym_PERCENT_PERCENT_LBRACE] = ACTIONS(7),
    [sym__whitespace] = ACTIONS(5),
    [sym__newline] = ACTIONS(9),
    [sym_comment] = ACTIONS(5),
    [aux_sym_diagram_class_token1] = ACTIONS(11),
    [aux_sym_diagram_class_token2] = ACTIONS(13),
    [aux_sym_diagram_er_token1] = ACTIONS(15),
    [aux_sym_diagram_flow_token1] = ACTIONS(17),
    [aux_sym_diagram_gantt_token1] = ACTIONS(19),
    [aux_sym_diagram_mindmap_token1] = ACTIONS(21),
    [aux_sym_diagram_pie_token1] = ACTIONS(23),
    [aux_sym_diagram_sequence_token1] = ACTIONS(25),
    [aux_sym_diagram_state_token1] = ACTIONS(27),
    [aux_sym_diagram_state_token2] = ACTIONS(29),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 29,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(31), 1,
      sym__newline,
    ACTIONS(33), 1,
      sym__sequence_actor_word,
    ACTIONS(35), 1,
      aux_sym_gantt_stmt_title_token1,
    ACTIONS(39), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(41), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(43), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(45), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(47), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(49), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(51), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(53), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(55), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(57), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(59), 1,
      aux_sym_sequence_stmt_loop_token2,
    ACTIONS(61), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(63), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(65), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(67), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(69), 1,
      aux_sym_sequence_stmt_par_token2,
    STATE(17), 1,
      aux_sym__sequence_subdocument,
    STATE(113), 1,
      sym__sequence_stmt,
    STATE(245), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(314), 1,
      sym_sequence_actor,
    STATE(589), 1,
      sym__sequence_participant_type,
    STATE(600), 1,
      aux_sym_sequence_stmt_par_repeat1,
    ACTIONS(37), 2,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
    STATE(86), 17,
      sym_sequence_stmt_participant,
      sym_sequence_stmt_actor,
      sym_sequence_stmt_signal,
      sym_sequence_stmt_autonumber,
      sym_sequence_stmt_activate,
      sym_sequence_stmt_deactivate,
      sym_sequence_stmt_note,
      sym_sequence_stmt_links,
      sym_sequence_stmt_link,
      sym_sequence_stmt_properties,
      sym_sequence_stmt_details,
      sym_sequence_stmt_title,
      sym_sequence_stmt_loop,
      sym_sequence_stmt_rect,
      sym_sequence_stmt_opt,
      sym_sequence_stmt_alt,
      sym_sequence_stmt_par,
  [105] = 29,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(31), 1,
      sym__newline,
    ACTIONS(33), 1,
      sym__sequence_actor_word,
    ACTIONS(35), 1,
      aux_sym_gantt_stmt_title_token1,
    ACTIONS(39), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(41), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(43), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(45), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(47), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(49), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(51), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(53), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(55), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(57), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(61), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(63), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(65), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(67), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(69), 1,
      aux_sym_sequence_stmt_par_token2,
    ACTIONS(71), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(17), 1,
      aux_sym__sequence_subdocument,
    STATE(113), 1,
      sym__sequence_stmt,
    STATE(245), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(314), 1,
      sym_sequence_actor,
    STATE(585), 1,
      aux_sym_sequence_stmt_par_repeat1,
    STATE(589), 1,
      sym__sequence_participant_type,
    ACTIONS(37), 2,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
    STATE(86), 17,
      sym_sequence_stmt_participant,
      sym_sequence_stmt_actor,
      sym_sequence_stmt_signal,
      sym_sequence_stmt_autonumber,
      sym_sequence_stmt_activate,
      sym_sequence_stmt_deactivate,
      sym_sequence_stmt_note,
      sym_sequence_stmt_links,
      sym_sequence_stmt_link,
      sym_sequence_stmt_properties,
      sym_sequence_stmt_details,
      sym_sequence_stmt_title,
      sym_sequence_stmt_loop,
      sym_sequence_stmt_rect,
      sym_sequence_stmt_opt,
      sym_sequence_stmt_alt,
      sym_sequence_stmt_par,
  [210] = 29,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(31), 1,
      sym__newline,
    ACTIONS(33), 1,
      sym__sequence_actor_word,
    ACTIONS(35), 1,
      aux_sym_gantt_stmt_title_token1,
    ACTIONS(39), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(41), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(43), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(45), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(47), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(49), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(51), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(53), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(55), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(57), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(61), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(63), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(65), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(67), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(69), 1,
      aux_sym_sequence_stmt_par_token2,
    ACTIONS(73), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(17), 1,
      aux_sym__sequence_subdocument,
    STATE(113), 1,
      sym__sequence_stmt,
    STATE(245), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(314), 1,
      sym_sequence_actor,
    STATE(589), 1,
      sym__sequence_participant_type,
    STATE(601), 1,
      aux_sym_sequence_stmt_par_repeat1,
    ACTIONS(37), 2,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
    STATE(86), 17,
      sym_sequence_stmt_participant,
      sym_sequence_stmt_actor,
      sym_sequence_stmt_signal,
      sym_sequence_stmt_autonumber,
      sym_sequence_stmt_activate,
      sym_sequence_stmt_deactivate,
      sym_sequence_stmt_note,
      sym_sequence_stmt_links,
      sym_sequence_stmt_link,
      sym_sequence_stmt_properties,
      sym_sequence_stmt_details,
      sym_sequence_stmt_title,
      sym_sequence_stmt_loop,
      sym_sequence_stmt_rect,
      sym_sequence_stmt_opt,
      sym_sequence_stmt_alt,
      sym_sequence_stmt_par,
  [315] = 29,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(33), 1,
      sym__sequence_actor_word,
    ACTIONS(75), 1,
      sym__newline,
    ACTIONS(77), 1,
      aux_sym_gantt_stmt_title_token1,
    ACTIONS(81), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(83), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(85), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(87), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(89), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(91), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(93), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(95), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(97), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(99), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(101), 1,
      aux_sym_sequence_stmt_loop_token2,
    ACTIONS(103), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(105), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(107), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(109), 1,
      aux_sym_sequence_stmt_alt_token2,
    ACTIONS(111), 1,
      aux_sym_sequence_stmt_par_token1,
    STATE(18), 1,
      aux_sym__sequence_subdocument,
    STATE(116), 1,
      sym__sequence_stmt,
    STATE(245), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(304), 1,
      sym_sequence_actor,
    STATE(561), 1,
      aux_sym_sequence_stmt_alt_repeat1,
    STATE(609), 1,
      sym__sequence_participant_type,
    ACTIONS(79), 2,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
    STATE(118), 17,
      sym_sequence_stmt_participant,
      sym_sequence_stmt_actor,
      sym_sequence_stmt_signal,
      sym_sequence_stmt_autonumber,
      sym_sequence_stmt_activate,
      sym_sequence_stmt_deactivate,
      sym_sequence_stmt_note,
      sym_sequence_stmt_links,
      sym_sequence_stmt_link,
      sym_sequence_stmt_properties,
      sym_sequence_stmt_details,
      sym_sequence_stmt_title,
      sym_sequence_stmt_loop,
      sym_sequence_stmt_rect,
      sym_sequence_stmt_opt,
      sym_sequence_stmt_alt,
      sym_sequence_stmt_par,
  [420] = 29,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(31), 1,
      sym__newline,
    ACTIONS(33), 1,
      sym__sequence_actor_word,
    ACTIONS(35), 1,
      aux_sym_gantt_stmt_title_token1,
    ACTIONS(39), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(41), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(43), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(45), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(47), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(49), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(51), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(53), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(55), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(57), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(61), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(63), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(65), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(67), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(69), 1,
      aux_sym_sequence_stmt_par_token2,
    ACTIONS(113), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(17), 1,
      aux_sym__sequence_subdocument,
    STATE(113), 1,
      sym__sequence_stmt,
    STATE(245), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(314), 1,
      sym_sequence_actor,
    STATE(576), 1,
      aux_sym_sequence_stmt_par_repeat1,
    STATE(589), 1,
      sym__sequence_participant_type,
    ACTIONS(37), 2,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
    STATE(86), 17,
      sym_sequence_stmt_participant,
      sym_sequence_stmt_actor,
      sym_sequence_stmt_signal,
      sym_sequence_stmt_autonumber,
      sym_sequence_stmt_activate,
      sym_sequence_stmt_deactivate,
      sym_sequence_stmt_note,
      sym_sequence_stmt_links,
      sym_sequence_stmt_link,
      sym_sequence_stmt_properties,
      sym_sequence_stmt_details,
      sym_sequence_stmt_title,
      sym_sequence_stmt_loop,
      sym_sequence_stmt_rect,
      sym_sequence_stmt_opt,
      sym_sequence_stmt_alt,
      sym_sequence_stmt_par,
  [525] = 29,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(31), 1,
      sym__newline,
    ACTIONS(33), 1,
      sym__sequence_actor_word,
    ACTIONS(35), 1,
      aux_sym_gantt_stmt_title_token1,
    ACTIONS(39), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(41), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(43), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(45), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(47), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(49), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(51), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(53), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(55), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(57), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(61), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(63), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(65), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(67), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(69), 1,
      aux_sym_sequence_stmt_par_token2,
    ACTIONS(115), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(17), 1,
      aux_sym__sequence_subdocument,
    STATE(113), 1,
      sym__sequence_stmt,
    STATE(245), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(314), 1,
      sym_sequence_actor,
    STATE(562), 1,
      aux_sym_sequence_stmt_par_repeat1,
    STATE(589), 1,
      sym__sequence_participant_type,
    ACTIONS(37), 2,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
    STATE(86), 17,
      sym_sequence_stmt_participant,
      sym_sequence_stmt_actor,
      sym_sequence_stmt_signal,
      sym_sequence_stmt_autonumber,
      sym_sequence_stmt_activate,
      sym_sequence_stmt_deactivate,
      sym_sequence_stmt_note,
      sym_sequence_stmt_links,
      sym_sequence_stmt_link,
      sym_sequence_stmt_properties,
      sym_sequence_stmt_details,
      sym_sequence_stmt_title,
      sym_sequence_stmt_loop,
      sym_sequence_stmt_rect,
      sym_sequence_stmt_opt,
      sym_sequence_stmt_alt,
      sym_sequence_stmt_par,
  [630] = 29,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(33), 1,
      sym__sequence_actor_word,
    ACTIONS(75), 1,
      sym__newline,
    ACTIONS(77), 1,
      aux_sym_gantt_stmt_title_token1,
    ACTIONS(81), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(83), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(85), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(87), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(89), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(91), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(93), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(95), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(97), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(99), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(103), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(105), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(107), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(109), 1,
      aux_sym_sequence_stmt_alt_token2,
    ACTIONS(111), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(117), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(18), 1,
      aux_sym__sequence_subdocument,
    STATE(116), 1,
      sym__sequence_stmt,
    STATE(245), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(304), 1,
      sym_sequence_actor,
    STATE(564), 1,
      aux_sym_sequence_stmt_alt_repeat1,
    STATE(609), 1,
      sym__sequence_participant_type,
    ACTIONS(79), 2,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
    STATE(118), 17,
      sym_sequence_stmt_participant,
      sym_sequence_stmt_actor,
      sym_sequence_stmt_signal,
      sym_sequence_stmt_autonumber,
      sym_sequence_stmt_activate,
      sym_sequence_stmt_deactivate,
      sym_sequence_stmt_note,
      sym_sequence_stmt_links,
      sym_sequence_stmt_link,
      sym_sequence_stmt_properties,
      sym_sequence_stmt_details,
      sym_sequence_stmt_title,
      sym_sequence_stmt_loop,
      sym_sequence_stmt_rect,
      sym_sequence_stmt_opt,
      sym_sequence_stmt_alt,
      sym_sequence_stmt_par,
  [735] = 29,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(31), 1,
      sym__newline,
    ACTIONS(33), 1,
      sym__sequence_actor_word,
    ACTIONS(35), 1,
      aux_sym_gantt_stmt_title_token1,
    ACTIONS(39), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(41), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(43), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(45), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(47), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(49), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(51), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(53), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(55), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(57), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(61), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(63), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(65), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(67), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(69), 1,
      aux_sym_sequence_stmt_par_token2,
    ACTIONS(119), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(17), 1,
      aux_sym__sequence_subdocument,
    STATE(113), 1,
      sym__sequence_stmt,
    STATE(245), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(314), 1,
      sym_sequence_actor,
    STATE(565), 1,
      aux_sym_sequence_stmt_par_repeat1,
    STATE(589), 1,
      sym__sequence_participant_type,
    ACTIONS(37), 2,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
    STATE(86), 17,
      sym_sequence_stmt_participant,
      sym_sequence_stmt_actor,
      sym_sequence_stmt_signal,
      sym_sequence_stmt_autonumber,
      sym_sequence_stmt_activate,
      sym_sequence_stmt_deactivate,
      sym_sequence_stmt_note,
      sym_sequence_stmt_links,
      sym_sequence_stmt_link,
      sym_sequence_stmt_properties,
      sym_sequence_stmt_details,
      sym_sequence_stmt_title,
      sym_sequence_stmt_loop,
      sym_sequence_stmt_rect,
      sym_sequence_stmt_opt,
      sym_sequence_stmt_alt,
      sym_sequence_stmt_par,
  [840] = 29,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(31), 1,
      sym__newline,
    ACTIONS(33), 1,
      sym__sequence_actor_word,
    ACTIONS(35), 1,
      aux_sym_gantt_stmt_title_token1,
    ACTIONS(39), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(41), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(43), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(45), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(47), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(49), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(51), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(53), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(55), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(57), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(61), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(63), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(65), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(67), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(69), 1,
      aux_sym_sequence_stmt_par_token2,
    ACTIONS(121), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(17), 1,
      aux_sym__sequence_subdocument,
    STATE(113), 1,
      sym__sequence_stmt,
    STATE(245), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(314), 1,
      sym_sequence_actor,
    STATE(589), 1,
      sym__sequence_participant_type,
    STATE(656), 1,
      aux_sym_sequence_stmt_par_repeat1,
    ACTIONS(37), 2,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
    STATE(86), 17,
      sym_sequence_stmt_participant,
      sym_sequence_stmt_actor,
      sym_sequence_stmt_signal,
      sym_sequence_stmt_autonumber,
      sym_sequence_stmt_activate,
      sym_sequence_stmt_deactivate,
      sym_sequence_stmt_note,
      sym_sequence_stmt_links,
      sym_sequence_stmt_link,
      sym_sequence_stmt_properties,
      sym_sequence_stmt_details,
      sym_sequence_stmt_title,
      sym_sequence_stmt_loop,
      sym_sequence_stmt_rect,
      sym_sequence_stmt_opt,
      sym_sequence_stmt_alt,
      sym_sequence_stmt_par,
  [945] = 29,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(33), 1,
      sym__sequence_actor_word,
    ACTIONS(75), 1,
      sym__newline,
    ACTIONS(77), 1,
      aux_sym_gantt_stmt_title_token1,
    ACTIONS(81), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(83), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(85), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(87), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(89), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(91), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(93), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(95), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(97), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(99), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(103), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(105), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(107), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(109), 1,
      aux_sym_sequence_stmt_alt_token2,
    ACTIONS(111), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(123), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(18), 1,
      aux_sym__sequence_subdocument,
    STATE(116), 1,
      sym__sequence_stmt,
    STATE(245), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(304), 1,
      sym_sequence_actor,
    STATE(575), 1,
      aux_sym_sequence_stmt_alt_repeat1,
    STATE(609), 1,
      sym__sequence_participant_type,
    ACTIONS(79), 2,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
    STATE(118), 17,
      sym_sequence_stmt_participant,
      sym_sequence_stmt_actor,
      sym_sequence_stmt_signal,
      sym_sequence_stmt_autonumber,
      sym_sequence_stmt_activate,
      sym_sequence_stmt_deactivate,
      sym_sequence_stmt_note,
      sym_sequence_stmt_links,
      sym_sequence_stmt_link,
      sym_sequence_stmt_properties,
      sym_sequence_stmt_details,
      sym_sequence_stmt_title,
      sym_sequence_stmt_loop,
      sym_sequence_stmt_rect,
      sym_sequence_stmt_opt,
      sym_sequence_stmt_alt,
      sym_sequence_stmt_par,
  [1050] = 29,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(31), 1,
      sym__newline,
    ACTIONS(33), 1,
      sym__sequence_actor_word,
    ACTIONS(35), 1,
      aux_sym_gantt_stmt_title_token1,
    ACTIONS(39), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(41), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(43), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(45), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(47), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(49), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(51), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(53), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(55), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(57), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(61), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(63), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(65), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(67), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(69), 1,
      aux_sym_sequence_stmt_par_token2,
    ACTIONS(125), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(17), 1,
      aux_sym__sequence_subdocument,
    STATE(113), 1,
      sym__sequence_stmt,
    STATE(245), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(314), 1,
      sym_sequence_actor,
    STATE(582), 1,
      aux_sym_sequence_stmt_par_repeat1,
    STATE(589), 1,
      sym__sequence_participant_type,
    ACTIONS(37), 2,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
    STATE(86), 17,
      sym_sequence_stmt_participant,
      sym_sequence_stmt_actor,
      sym_sequence_stmt_signal,
      sym_sequence_stmt_autonumber,
      sym_sequence_stmt_activate,
      sym_sequence_stmt_deactivate,
      sym_sequence_stmt_note,
      sym_sequence_stmt_links,
      sym_sequence_stmt_link,
      sym_sequence_stmt_properties,
      sym_sequence_stmt_details,
      sym_sequence_stmt_title,
      sym_sequence_stmt_loop,
      sym_sequence_stmt_rect,
      sym_sequence_stmt_opt,
      sym_sequence_stmt_alt,
      sym_sequence_stmt_par,
  [1155] = 29,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(33), 1,
      sym__sequence_actor_word,
    ACTIONS(75), 1,
      sym__newline,
    ACTIONS(77), 1,
      aux_sym_gantt_stmt_title_token1,
    ACTIONS(81), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(83), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(85), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(87), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(89), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(91), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(93), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(95), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(97), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(99), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(103), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(105), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(107), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(109), 1,
      aux_sym_sequence_stmt_alt_token2,
    ACTIONS(111), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(127), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(18), 1,
      aux_sym__sequence_subdocument,
    STATE(116), 1,
      sym__sequence_stmt,
    STATE(245), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(304), 1,
      sym_sequence_actor,
    STATE(584), 1,
      aux_sym_sequence_stmt_alt_repeat1,
    STATE(609), 1,
      sym__sequence_participant_type,
    ACTIONS(79), 2,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
    STATE(118), 17,
      sym_sequence_stmt_participant,
      sym_sequence_stmt_actor,
      sym_sequence_stmt_signal,
      sym_sequence_stmt_autonumber,
      sym_sequence_stmt_activate,
      sym_sequence_stmt_deactivate,
      sym_sequence_stmt_note,
      sym_sequence_stmt_links,
      sym_sequence_stmt_link,
      sym_sequence_stmt_properties,
      sym_sequence_stmt_details,
      sym_sequence_stmt_title,
      sym_sequence_stmt_loop,
      sym_sequence_stmt_rect,
      sym_sequence_stmt_opt,
      sym_sequence_stmt_alt,
      sym_sequence_stmt_par,
  [1260] = 27,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(33), 1,
      sym__sequence_actor_word,
    ACTIONS(75), 1,
      sym__newline,
    ACTIONS(77), 1,
      aux_sym_gantt_stmt_title_token1,
    ACTIONS(81), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(83), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(85), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(87), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(89), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(91), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(93), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(95), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(97), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(99), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(103), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(105), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(107), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(111), 1,
      aux_sym_sequence_stmt_par_token1,
    STATE(18), 1,
      aux_sym__sequence_subdocument,
    STATE(116), 1,
      sym__sequence_stmt,
    STATE(245), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(304), 1,
      sym_sequence_actor,
    STATE(609), 1,
      sym__sequence_participant_type,
    ACTIONS(79), 2,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
    ACTIONS(129), 2,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_alt_token2,
    STATE(118), 17,
      sym_sequence_stmt_participant,
      sym_sequence_stmt_actor,
      sym_sequence_stmt_signal,
      sym_sequence_stmt_autonumber,
      sym_sequence_stmt_activate,
      sym_sequence_stmt_deactivate,
      sym_sequence_stmt_note,
      sym_sequence_stmt_links,
      sym_sequence_stmt_link,
      sym_sequence_stmt_properties,
      sym_sequence_stmt_details,
      sym_sequence_stmt_title,
      sym_sequence_stmt_loop,
      sym_sequence_stmt_rect,
      sym_sequence_stmt_opt,
      sym_sequence_stmt_alt,
      sym_sequence_stmt_par,
  [1360] = 27,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(31), 1,
      sym__newline,
    ACTIONS(33), 1,
      sym__sequence_actor_word,
    ACTIONS(35), 1,
      aux_sym_gantt_stmt_title_token1,
    ACTIONS(39), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(41), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(43), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(45), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(47), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(49), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(51), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(53), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(55), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(57), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(61), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(63), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(65), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(67), 1,
      aux_sym_sequence_stmt_par_token1,
    STATE(17), 1,
      aux_sym__sequence_subdocument,
    STATE(113), 1,
      sym__sequence_stmt,
    STATE(245), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(314), 1,
      sym_sequence_actor,
    STATE(589), 1,
      sym__sequence_participant_type,
    ACTIONS(37), 2,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
    ACTIONS(131), 2,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_par_token2,
    STATE(86), 17,
      sym_sequence_stmt_participant,
      sym_sequence_stmt_actor,
      sym_sequence_stmt_signal,
      sym_sequence_stmt_autonumber,
      sym_sequence_stmt_activate,
      sym_sequence_stmt_deactivate,
      sym_sequence_stmt_note,
      sym_sequence_stmt_links,
      sym_sequence_stmt_link,
      sym_sequence_stmt_properties,
      sym_sequence_stmt_details,
      sym_sequence_stmt_title,
      sym_sequence_stmt_loop,
      sym_sequence_stmt_rect,
      sym_sequence_stmt_opt,
      sym_sequence_stmt_alt,
      sym_sequence_stmt_par,
  [1460] = 27,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(31), 1,
      sym__newline,
    ACTIONS(33), 1,
      sym__sequence_actor_word,
    ACTIONS(35), 1,
      aux_sym_gantt_stmt_title_token1,
    ACTIONS(39), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(41), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(43), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(45), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(47), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(49), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(51), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(53), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(55), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(57), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(61), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(63), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(65), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(67), 1,
      aux_sym_sequence_stmt_par_token1,
    STATE(17), 1,
      aux_sym__sequence_subdocument,
    STATE(113), 1,
      sym__sequence_stmt,
    STATE(245), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(314), 1,
      sym_sequence_actor,
    STATE(589), 1,
      sym__sequence_participant_type,
    ACTIONS(37), 2,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
    ACTIONS(133), 2,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_par_token2,
    STATE(86), 17,
      sym_sequence_stmt_participant,
      sym_sequence_stmt_actor,
      sym_sequence_stmt_signal,
      sym_sequence_stmt_autonumber,
      sym_sequence_stmt_activate,
      sym_sequence_stmt_deactivate,
      sym_sequence_stmt_note,
      sym_sequence_stmt_links,
      sym_sequence_stmt_link,
      sym_sequence_stmt_properties,
      sym_sequence_stmt_details,
      sym_sequence_stmt_title,
      sym_sequence_stmt_loop,
      sym_sequence_stmt_rect,
      sym_sequence_stmt_opt,
      sym_sequence_stmt_alt,
      sym_sequence_stmt_par,
  [1560] = 27,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(135), 1,
      sym__newline,
    ACTIONS(138), 1,
      sym__sequence_actor_word,
    ACTIONS(141), 1,
      aux_sym_gantt_stmt_title_token1,
    ACTIONS(147), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(150), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(153), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(156), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(159), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(162), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(165), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(168), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(171), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(174), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(179), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(182), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(185), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(188), 1,
      aux_sym_sequence_stmt_par_token1,
    STATE(17), 1,
      aux_sym__sequence_subdocument,
    STATE(113), 1,
      sym__sequence_stmt,
    STATE(245), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(314), 1,
      sym_sequence_actor,
    STATE(589), 1,
      sym__sequence_participant_type,
    ACTIONS(144), 2,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
    ACTIONS(177), 2,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_par_token2,
    STATE(86), 17,
      sym_sequence_stmt_participant,
      sym_sequence_stmt_actor,
      sym_sequence_stmt_signal,
      sym_sequence_stmt_autonumber,
      sym_sequence_stmt_activate,
      sym_sequence_stmt_deactivate,
      sym_sequence_stmt_note,
      sym_sequence_stmt_links,
      sym_sequence_stmt_link,
      sym_sequence_stmt_properties,
      sym_sequence_stmt_details,
      sym_sequence_stmt_title,
      sym_sequence_stmt_loop,
      sym_sequence_stmt_rect,
      sym_sequence_stmt_opt,
      sym_sequence_stmt_alt,
      sym_sequence_stmt_par,
  [1660] = 27,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(138), 1,
      sym__sequence_actor_word,
    ACTIONS(191), 1,
      sym__newline,
    ACTIONS(194), 1,
      aux_sym_gantt_stmt_title_token1,
    ACTIONS(200), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(203), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(206), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(209), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(212), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(215), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(218), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(221), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(224), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(227), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(230), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(233), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(236), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(239), 1,
      aux_sym_sequence_stmt_par_token1,
    STATE(18), 1,
      aux_sym__sequence_subdocument,
    STATE(116), 1,
      sym__sequence_stmt,
    STATE(245), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(304), 1,
      sym_sequence_actor,
    STATE(609), 1,
      sym__sequence_participant_type,
    ACTIONS(177), 2,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_alt_token2,
    ACTIONS(197), 2,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
    STATE(118), 17,
      sym_sequence_stmt_participant,
      sym_sequence_stmt_actor,
      sym_sequence_stmt_signal,
      sym_sequence_stmt_autonumber,
      sym_sequence_stmt_activate,
      sym_sequence_stmt_deactivate,
      sym_sequence_stmt_note,
      sym_sequence_stmt_links,
      sym_sequence_stmt_link,
      sym_sequence_stmt_properties,
      sym_sequence_stmt_details,
      sym_sequence_stmt_title,
      sym_sequence_stmt_loop,
      sym_sequence_stmt_rect,
      sym_sequence_stmt_opt,
      sym_sequence_stmt_alt,
      sym_sequence_stmt_par,
  [1760] = 26,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(242), 1,
      ts_builtin_sym_end,
    ACTIONS(244), 1,
      sym__newline,
    ACTIONS(247), 1,
      sym__sequence_actor_word,
    ACTIONS(250), 1,
      aux_sym_gantt_stmt_title_token1,
    ACTIONS(256), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(259), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(262), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(265), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(268), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(271), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(274), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(277), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(280), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(283), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(286), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(289), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(292), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(295), 1,
      aux_sym_sequence_stmt_par_token1,
    STATE(245), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(309), 1,
      sym_sequence_actor,
    STATE(522), 1,
      sym__sequence_participant_type,
    ACTIONS(253), 2,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
    STATE(19), 2,
      sym__sequence_stmt,
      aux_sym_diagram_sequence_repeat1,
    STATE(157), 17,
      sym_sequence_stmt_participant,
      sym_sequence_stmt_actor,
      sym_sequence_stmt_signal,
      sym_sequence_stmt_autonumber,
      sym_sequence_stmt_activate,
      sym_sequence_stmt_deactivate,
      sym_sequence_stmt_note,
      sym_sequence_stmt_links,
      sym_sequence_stmt_link,
      sym_sequence_stmt_properties,
      sym_sequence_stmt_details,
      sym_sequence_stmt_title,
      sym_sequence_stmt_loop,
      sym_sequence_stmt_rect,
      sym_sequence_stmt_opt,
      sym_sequence_stmt_alt,
      sym_sequence_stmt_par,
  [1857] = 27,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(33), 1,
      sym__sequence_actor_word,
    ACTIONS(298), 1,
      sym__newline,
    ACTIONS(300), 1,
      aux_sym_gantt_stmt_title_token1,
    ACTIONS(304), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(306), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(308), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(310), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(312), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(314), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(316), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(318), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(320), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(322), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(324), 1,
      aux_sym_sequence_stmt_loop_token2,
    ACTIONS(326), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(328), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(330), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(332), 1,
      aux_sym_sequence_stmt_par_token1,
    STATE(23), 1,
      aux_sym__sequence_subdocument,
    STATE(175), 1,
      sym__sequence_stmt,
    STATE(245), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(315), 1,
      sym_sequence_actor,
    STATE(599), 1,
      sym__sequence_participant_type,
    ACTIONS(302), 2,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
    STATE(202), 17,
      sym_sequence_stmt_participant,
      sym_sequence_stmt_actor,
      sym_sequence_stmt_signal,
      sym_sequence_stmt_autonumber,
      sym_sequence_stmt_activate,
      sym_sequence_stmt_deactivate,
      sym_sequence_stmt_note,
      sym_sequence_stmt_links,
      sym_sequence_stmt_link,
      sym_sequence_stmt_properties,
      sym_sequence_stmt_details,
      sym_sequence_stmt_title,
      sym_sequence_stmt_loop,
      sym_sequence_stmt_rect,
      sym_sequence_stmt_opt,
      sym_sequence_stmt_alt,
      sym_sequence_stmt_par,
  [1956] = 27,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(33), 1,
      sym__sequence_actor_word,
    ACTIONS(298), 1,
      sym__newline,
    ACTIONS(300), 1,
      aux_sym_gantt_stmt_title_token1,
    ACTIONS(304), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(306), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(308), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(310), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(312), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(314), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(316), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(318), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(320), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(322), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(326), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(328), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(330), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(332), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(334), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(28), 1,
      aux_sym__sequence_subdocument,
    STATE(175), 1,
      sym__sequence_stmt,
    STATE(245), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(315), 1,
      sym_sequence_actor,
    STATE(599), 1,
      sym__sequence_participant_type,
    ACTIONS(302), 2,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
    STATE(202), 17,
      sym_sequence_stmt_participant,
      sym_sequence_stmt_actor,
      sym_sequence_stmt_signal,
      sym_sequence_stmt_autonumber,
      sym_sequence_stmt_activate,
      sym_sequence_stmt_deactivate,
      sym_sequence_stmt_note,
      sym_sequence_stmt_links,
      sym_sequence_stmt_link,
      sym_sequence_stmt_properties,
      sym_sequence_stmt_details,
      sym_sequence_stmt_title,
      sym_sequence_stmt_loop,
      sym_sequence_stmt_rect,
      sym_sequence_stmt_opt,
      sym_sequence_stmt_alt,
      sym_sequence_stmt_par,
  [2055] = 27,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(33), 1,
      sym__sequence_actor_word,
    ACTIONS(298), 1,
      sym__newline,
    ACTIONS(300), 1,
      aux_sym_gantt_stmt_title_token1,
    ACTIONS(304), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(306), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(308), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(310), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(312), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(314), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(316), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(318), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(320), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(322), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(326), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(328), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(330), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(332), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(336), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(32), 1,
      aux_sym__sequence_subdocument,
    STATE(175), 1,
      sym__sequence_stmt,
    STATE(245), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(315), 1,
      sym_sequence_actor,
    STATE(599), 1,
      sym__sequence_participant_type,
    ACTIONS(302), 2,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
    STATE(202), 17,
      sym_sequence_stmt_participant,
      sym_sequence_stmt_actor,
      sym_sequence_stmt_signal,
      sym_sequence_stmt_autonumber,
      sym_sequence_stmt_activate,
      sym_sequence_stmt_deactivate,
      sym_sequence_stmt_note,
      sym_sequence_stmt_links,
      sym_sequence_stmt_link,
      sym_sequence_stmt_properties,
      sym_sequence_stmt_details,
      sym_sequence_stmt_title,
      sym_sequence_stmt_loop,
      sym_sequence_stmt_rect,
      sym_sequence_stmt_opt,
      sym_sequence_stmt_alt,
      sym_sequence_stmt_par,
  [2154] = 27,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(138), 1,
      sym__sequence_actor_word,
    ACTIONS(177), 1,
      aux_sym_sequence_stmt_loop_token2,
    ACTIONS(338), 1,
      sym__newline,
    ACTIONS(341), 1,
      aux_sym_gantt_stmt_title_token1,
    ACTIONS(347), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(350), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(353), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(356), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(359), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(362), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(365), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(368), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(371), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(374), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(377), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(380), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(383), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(386), 1,
      aux_sym_sequence_stmt_par_token1,
    STATE(23), 1,
      aux_sym__sequence_subdocument,
    STATE(175), 1,
      sym__sequence_stmt,
    STATE(245), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(315), 1,
      sym_sequence_actor,
    STATE(599), 1,
      sym__sequence_participant_type,
    ACTIONS(344), 2,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
    STATE(202), 17,
      sym_sequence_stmt_participant,
      sym_sequence_stmt_actor,
      sym_sequence_stmt_signal,
      sym_sequence_stmt_autonumber,
      sym_sequence_stmt_activate,
      sym_sequence_stmt_deactivate,
      sym_sequence_stmt_note,
      sym_sequence_stmt_links,
      sym_sequence_stmt_link,
      sym_sequence_stmt_properties,
      sym_sequence_stmt_details,
      sym_sequence_stmt_title,
      sym_sequence_stmt_loop,
      sym_sequence_stmt_rect,
      sym_sequence_stmt_opt,
      sym_sequence_stmt_alt,
      sym_sequence_stmt_par,
  [2253] = 27,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(33), 1,
      sym__sequence_actor_word,
    ACTIONS(298), 1,
      sym__newline,
    ACTIONS(300), 1,
      aux_sym_gantt_stmt_title_token1,
    ACTIONS(304), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(306), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(308), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(310), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(312), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(314), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(316), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(318), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(320), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(322), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(326), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(328), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(330), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(332), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(389), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(23), 1,
      aux_sym__sequence_subdocument,
    STATE(175), 1,
      sym__sequence_stmt,
    STATE(245), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(315), 1,
      sym_sequence_actor,
    STATE(599), 1,
      sym__sequence_participant_type,
    ACTIONS(302), 2,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
    STATE(202), 17,
      sym_sequence_stmt_participant,
      sym_sequence_stmt_actor,
      sym_sequence_stmt_signal,
      sym_sequence_stmt_autonumber,
      sym_sequence_stmt_activate,
      sym_sequence_stmt_deactivate,
      sym_sequence_stmt_note,
      sym_sequence_stmt_links,
      sym_sequence_stmt_link,
      sym_sequence_stmt_properties,
      sym_sequence_stmt_details,
      sym_sequence_stmt_title,
      sym_sequence_stmt_loop,
      sym_sequence_stmt_rect,
      sym_sequence_stmt_opt,
      sym_sequence_stmt_alt,
      sym_sequence_stmt_par,
  [2352] = 27,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(33), 1,
      sym__sequence_actor_word,
    ACTIONS(298), 1,
      sym__newline,
    ACTIONS(300), 1,
      aux_sym_gantt_stmt_title_token1,
    ACTIONS(304), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(306), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(308), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(310), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(312), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(314), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(316), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(318), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(320), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(322), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(326), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(328), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(330), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(332), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(391), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(29), 1,
      aux_sym__sequence_subdocument,
    STATE(175), 1,
      sym__sequence_stmt,
    STATE(245), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(315), 1,
      sym_sequence_actor,
    STATE(599), 1,
      sym__sequence_participant_type,
    ACTIONS(302), 2,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
    STATE(202), 17,
      sym_sequence_stmt_participant,
      sym_sequence_stmt_actor,
      sym_sequence_stmt_signal,
      sym_sequence_stmt_autonumber,
      sym_sequence_stmt_activate,
      sym_sequence_stmt_deactivate,
      sym_sequence_stmt_note,
      sym_sequence_stmt_links,
      sym_sequence_stmt_link,
      sym_sequence_stmt_properties,
      sym_sequence_stmt_details,
      sym_sequence_stmt_title,
      sym_sequence_stmt_loop,
      sym_sequence_stmt_rect,
      sym_sequence_stmt_opt,
      sym_sequence_stmt_alt,
      sym_sequence_stmt_par,
  [2451] = 27,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(33), 1,
      sym__sequence_actor_word,
    ACTIONS(298), 1,
      sym__newline,
    ACTIONS(300), 1,
      aux_sym_gantt_stmt_title_token1,
    ACTIONS(304), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(306), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(308), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(310), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(312), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(314), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(316), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(318), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(320), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(322), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(326), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(328), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(330), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(332), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(393), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(30), 1,
      aux_sym__sequence_subdocument,
    STATE(175), 1,
      sym__sequence_stmt,
    STATE(245), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(315), 1,
      sym_sequence_actor,
    STATE(599), 1,
      sym__sequence_participant_type,
    ACTIONS(302), 2,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
    STATE(202), 17,
      sym_sequence_stmt_participant,
      sym_sequence_stmt_actor,
      sym_sequence_stmt_signal,
      sym_sequence_stmt_autonumber,
      sym_sequence_stmt_activate,
      sym_sequence_stmt_deactivate,
      sym_sequence_stmt_note,
      sym_sequence_stmt_links,
      sym_sequence_stmt_link,
      sym_sequence_stmt_properties,
      sym_sequence_stmt_details,
      sym_sequence_stmt_title,
      sym_sequence_stmt_loop,
      sym_sequence_stmt_rect,
      sym_sequence_stmt_opt,
      sym_sequence_stmt_alt,
      sym_sequence_stmt_par,
  [2550] = 27,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(33), 1,
      sym__sequence_actor_word,
    ACTIONS(298), 1,
      sym__newline,
    ACTIONS(300), 1,
      aux_sym_gantt_stmt_title_token1,
    ACTIONS(304), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(306), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(308), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(310), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(312), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(314), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(316), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(318), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(320), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(322), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(326), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(328), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(330), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(332), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(395), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(31), 1,
      aux_sym__sequence_subdocument,
    STATE(175), 1,
      sym__sequence_stmt,
    STATE(245), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(315), 1,
      sym_sequence_actor,
    STATE(599), 1,
      sym__sequence_participant_type,
    ACTIONS(302), 2,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
    STATE(202), 17,
      sym_sequence_stmt_participant,
      sym_sequence_stmt_actor,
      sym_sequence_stmt_signal,
      sym_sequence_stmt_autonumber,
      sym_sequence_stmt_activate,
      sym_sequence_stmt_deactivate,
      sym_sequence_stmt_note,
      sym_sequence_stmt_links,
      sym_sequence_stmt_link,
      sym_sequence_stmt_properties,
      sym_sequence_stmt_details,
      sym_sequence_stmt_title,
      sym_sequence_stmt_loop,
      sym_sequence_stmt_rect,
      sym_sequence_stmt_opt,
      sym_sequence_stmt_alt,
      sym_sequence_stmt_par,
  [2649] = 27,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(33), 1,
      sym__sequence_actor_word,
    ACTIONS(298), 1,
      sym__newline,
    ACTIONS(300), 1,
      aux_sym_gantt_stmt_title_token1,
    ACTIONS(304), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(306), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(308), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(310), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(312), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(314), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(316), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(318), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(320), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(322), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(326), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(328), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(330), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(332), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(397), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(23), 1,
      aux_sym__sequence_subdocument,
    STATE(175), 1,
      sym__sequence_stmt,
    STATE(245), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(315), 1,
      sym_sequence_actor,
    STATE(599), 1,
      sym__sequence_participant_type,
    ACTIONS(302), 2,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
    STATE(202), 17,
      sym_sequence_stmt_participant,
      sym_sequence_stmt_actor,
      sym_sequence_stmt_signal,
      sym_sequence_stmt_autonumber,
      sym_sequence_stmt_activate,
      sym_sequence_stmt_deactivate,
      sym_sequence_stmt_note,
      sym_sequence_stmt_links,
      sym_sequence_stmt_link,
      sym_sequence_stmt_properties,
      sym_sequence_stmt_details,
      sym_sequence_stmt_title,
      sym_sequence_stmt_loop,
      sym_sequence_stmt_rect,
      sym_sequence_stmt_opt,
      sym_sequence_stmt_alt,
      sym_sequence_stmt_par,
  [2748] = 27,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(33), 1,
      sym__sequence_actor_word,
    ACTIONS(298), 1,
      sym__newline,
    ACTIONS(300), 1,
      aux_sym_gantt_stmt_title_token1,
    ACTIONS(304), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(306), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(308), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(310), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(312), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(314), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(316), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(318), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(320), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(322), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(326), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(328), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(330), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(332), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(399), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(23), 1,
      aux_sym__sequence_subdocument,
    STATE(175), 1,
      sym__sequence_stmt,
    STATE(245), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(315), 1,
      sym_sequence_actor,
    STATE(599), 1,
      sym__sequence_participant_type,
    ACTIONS(302), 2,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
    STATE(202), 17,
      sym_sequence_stmt_participant,
      sym_sequence_stmt_actor,
      sym_sequence_stmt_signal,
      sym_sequence_stmt_autonumber,
      sym_sequence_stmt_activate,
      sym_sequence_stmt_deactivate,
      sym_sequence_stmt_note,
      sym_sequence_stmt_links,
      sym_sequence_stmt_link,
      sym_sequence_stmt_properties,
      sym_sequence_stmt_details,
      sym_sequence_stmt_title,
      sym_sequence_stmt_loop,
      sym_sequence_stmt_rect,
      sym_sequence_stmt_opt,
      sym_sequence_stmt_alt,
      sym_sequence_stmt_par,
  [2847] = 27,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(33), 1,
      sym__sequence_actor_word,
    ACTIONS(298), 1,
      sym__newline,
    ACTIONS(300), 1,
      aux_sym_gantt_stmt_title_token1,
    ACTIONS(304), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(306), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(308), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(310), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(312), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(314), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(316), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(318), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(320), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(322), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(326), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(328), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(330), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(332), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(401), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(23), 1,
      aux_sym__sequence_subdocument,
    STATE(175), 1,
      sym__sequence_stmt,
    STATE(245), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(315), 1,
      sym_sequence_actor,
    STATE(599), 1,
      sym__sequence_participant_type,
    ACTIONS(302), 2,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
    STATE(202), 17,
      sym_sequence_stmt_participant,
      sym_sequence_stmt_actor,
      sym_sequence_stmt_signal,
      sym_sequence_stmt_autonumber,
      sym_sequence_stmt_activate,
      sym_sequence_stmt_deactivate,
      sym_sequence_stmt_note,
      sym_sequence_stmt_links,
      sym_sequence_stmt_link,
      sym_sequence_stmt_properties,
      sym_sequence_stmt_details,
      sym_sequence_stmt_title,
      sym_sequence_stmt_loop,
      sym_sequence_stmt_rect,
      sym_sequence_stmt_opt,
      sym_sequence_stmt_alt,
      sym_sequence_stmt_par,
  [2946] = 27,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(33), 1,
      sym__sequence_actor_word,
    ACTIONS(298), 1,
      sym__newline,
    ACTIONS(300), 1,
      aux_sym_gantt_stmt_title_token1,
    ACTIONS(304), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(306), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(308), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(310), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(312), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(314), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(316), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(318), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(320), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(322), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(326), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(328), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(330), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(332), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(403), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(23), 1,
      aux_sym__sequence_subdocument,
    STATE(175), 1,
      sym__sequence_stmt,
    STATE(245), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(315), 1,
      sym_sequence_actor,
    STATE(599), 1,
      sym__sequence_participant_type,
    ACTIONS(302), 2,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
    STATE(202), 17,
      sym_sequence_stmt_participant,
      sym_sequence_stmt_actor,
      sym_sequence_stmt_signal,
      sym_sequence_stmt_autonumber,
      sym_sequence_stmt_activate,
      sym_sequence_stmt_deactivate,
      sym_sequence_stmt_note,
      sym_sequence_stmt_links,
      sym_sequence_stmt_link,
      sym_sequence_stmt_properties,
      sym_sequence_stmt_details,
      sym_sequence_stmt_title,
      sym_sequence_stmt_loop,
      sym_sequence_stmt_rect,
      sym_sequence_stmt_opt,
      sym_sequence_stmt_alt,
      sym_sequence_stmt_par,
  [3045] = 27,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(33), 1,
      sym__sequence_actor_word,
    ACTIONS(298), 1,
      sym__newline,
    ACTIONS(300), 1,
      aux_sym_gantt_stmt_title_token1,
    ACTIONS(304), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(306), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(308), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(310), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(312), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(314), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(316), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(318), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(320), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(322), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(326), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(328), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(330), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(332), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(405), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(23), 1,
      aux_sym__sequence_subdocument,
    STATE(175), 1,
      sym__sequence_stmt,
    STATE(245), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(315), 1,
      sym_sequence_actor,
    STATE(599), 1,
      sym__sequence_participant_type,
    ACTIONS(302), 2,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
    STATE(202), 17,
      sym_sequence_stmt_participant,
      sym_sequence_stmt_actor,
      sym_sequence_stmt_signal,
      sym_sequence_stmt_autonumber,
      sym_sequence_stmt_activate,
      sym_sequence_stmt_deactivate,
      sym_sequence_stmt_note,
      sym_sequence_stmt_links,
      sym_sequence_stmt_link,
      sym_sequence_stmt_properties,
      sym_sequence_stmt_details,
      sym_sequence_stmt_title,
      sym_sequence_stmt_loop,
      sym_sequence_stmt_rect,
      sym_sequence_stmt_opt,
      sym_sequence_stmt_alt,
      sym_sequence_stmt_par,
  [3144] = 27,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(33), 1,
      sym__sequence_actor_word,
    ACTIONS(298), 1,
      sym__newline,
    ACTIONS(300), 1,
      aux_sym_gantt_stmt_title_token1,
    ACTIONS(304), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(306), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(308), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(310), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(312), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(314), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(316), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(318), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(320), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(322), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(326), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(328), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(330), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(332), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(407), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(37), 1,
      aux_sym__sequence_subdocument,
    STATE(175), 1,
      sym__sequence_stmt,
    STATE(245), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(315), 1,
      sym_sequence_actor,
    STATE(599), 1,
      sym__sequence_participant_type,
    ACTIONS(302), 2,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
    STATE(202), 17,
      sym_sequence_stmt_participant,
      sym_sequence_stmt_actor,
      sym_sequence_stmt_signal,
      sym_sequence_stmt_autonumber,
      sym_sequence_stmt_activate,
      sym_sequence_stmt_deactivate,
      sym_sequence_stmt_note,
      sym_sequence_stmt_links,
      sym_sequence_stmt_link,
      sym_sequence_stmt_properties,
      sym_sequence_stmt_details,
      sym_sequence_stmt_title,
      sym_sequence_stmt_loop,
      sym_sequence_stmt_rect,
      sym_sequence_stmt_opt,
      sym_sequence_stmt_alt,
      sym_sequence_stmt_par,
  [3243] = 27,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(33), 1,
      sym__sequence_actor_word,
    ACTIONS(298), 1,
      sym__newline,
    ACTIONS(300), 1,
      aux_sym_gantt_stmt_title_token1,
    ACTIONS(304), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(306), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(308), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(310), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(312), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(314), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(316), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(318), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(320), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(322), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(326), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(328), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(330), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(332), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(409), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(38), 1,
      aux_sym__sequence_subdocument,
    STATE(175), 1,
      sym__sequence_stmt,
    STATE(245), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(315), 1,
      sym_sequence_actor,
    STATE(599), 1,
      sym__sequence_participant_type,
    ACTIONS(302), 2,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
    STATE(202), 17,
      sym_sequence_stmt_participant,
      sym_sequence_stmt_actor,
      sym_sequence_stmt_signal,
      sym_sequence_stmt_autonumber,
      sym_sequence_stmt_activate,
      sym_sequence_stmt_deactivate,
      sym_sequence_stmt_note,
      sym_sequence_stmt_links,
      sym_sequence_stmt_link,
      sym_sequence_stmt_properties,
      sym_sequence_stmt_details,
      sym_sequence_stmt_title,
      sym_sequence_stmt_loop,
      sym_sequence_stmt_rect,
      sym_sequence_stmt_opt,
      sym_sequence_stmt_alt,
      sym_sequence_stmt_par,
  [3342] = 27,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(33), 1,
      sym__sequence_actor_word,
    ACTIONS(298), 1,
      sym__newline,
    ACTIONS(300), 1,
      aux_sym_gantt_stmt_title_token1,
    ACTIONS(304), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(306), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(308), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(310), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(312), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(314), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(316), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(318), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(320), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(322), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(326), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(328), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(330), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(332), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(411), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(39), 1,
      aux_sym__sequence_subdocument,
    STATE(175), 1,
      sym__sequence_stmt,
    STATE(245), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(315), 1,
      sym_sequence_actor,
    STATE(599), 1,
      sym__sequence_participant_type,
    ACTIONS(302), 2,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
    STATE(202), 17,
      sym_sequence_stmt_participant,
      sym_sequence_stmt_actor,
      sym_sequence_stmt_signal,
      sym_sequence_stmt_autonumber,
      sym_sequence_stmt_activate,
      sym_sequence_stmt_deactivate,
      sym_sequence_stmt_note,
      sym_sequence_stmt_links,
      sym_sequence_stmt_link,
      sym_sequence_stmt_properties,
      sym_sequence_stmt_details,
      sym_sequence_stmt_title,
      sym_sequence_stmt_loop,
      sym_sequence_stmt_rect,
      sym_sequence_stmt_opt,
      sym_sequence_stmt_alt,
      sym_sequence_stmt_par,
  [3441] = 26,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(33), 1,
      sym__sequence_actor_word,
    ACTIONS(413), 1,
      ts_builtin_sym_end,
    ACTIONS(415), 1,
      sym__newline,
    ACTIONS(417), 1,
      aux_sym_gantt_stmt_title_token1,
    ACTIONS(421), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(423), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(425), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(427), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(429), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(431), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(433), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(435), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(437), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(439), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(441), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(443), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(445), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(447), 1,
      aux_sym_sequence_stmt_par_token1,
    STATE(245), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(309), 1,
      sym_sequence_actor,
    STATE(522), 1,
      sym__sequence_participant_type,
    ACTIONS(419), 2,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
    STATE(46), 2,
      sym__sequence_stmt,
      aux_sym_diagram_sequence_repeat1,
    STATE(157), 17,
      sym_sequence_stmt_participant,
      sym_sequence_stmt_actor,
      sym_sequence_stmt_signal,
      sym_sequence_stmt_autonumber,
      sym_sequence_stmt_activate,
      sym_sequence_stmt_deactivate,
      sym_sequence_stmt_note,
      sym_sequence_stmt_links,
      sym_sequence_stmt_link,
      sym_sequence_stmt_properties,
      sym_sequence_stmt_details,
      sym_sequence_stmt_title,
      sym_sequence_stmt_loop,
      sym_sequence_stmt_rect,
      sym_sequence_stmt_opt,
      sym_sequence_stmt_alt,
      sym_sequence_stmt_par,
  [3538] = 27,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(33), 1,
      sym__sequence_actor_word,
    ACTIONS(298), 1,
      sym__newline,
    ACTIONS(300), 1,
      aux_sym_gantt_stmt_title_token1,
    ACTIONS(304), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(306), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(308), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(310), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(312), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(314), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(316), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(318), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(320), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(322), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(326), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(328), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(330), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(332), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(449), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(23), 1,
      aux_sym__sequence_subdocument,
    STATE(175), 1,
      sym__sequence_stmt,
    STATE(245), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(315), 1,
      sym_sequence_actor,
    STATE(599), 1,
      sym__sequence_participant_type,
    ACTIONS(302), 2,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
    STATE(202), 17,
      sym_sequence_stmt_participant,
      sym_sequence_stmt_actor,
      sym_sequence_stmt_signal,
      sym_sequence_stmt_autonumber,
      sym_sequence_stmt_activate,
      sym_sequence_stmt_deactivate,
      sym_sequence_stmt_note,
      sym_sequence_stmt_links,
      sym_sequence_stmt_link,
      sym_sequence_stmt_properties,
      sym_sequence_stmt_details,
      sym_sequence_stmt_title,
      sym_sequence_stmt_loop,
      sym_sequence_stmt_rect,
      sym_sequence_stmt_opt,
      sym_sequence_stmt_alt,
      sym_sequence_stmt_par,
  [3637] = 27,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(33), 1,
      sym__sequence_actor_word,
    ACTIONS(298), 1,
      sym__newline,
    ACTIONS(300), 1,
      aux_sym_gantt_stmt_title_token1,
    ACTIONS(304), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(306), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(308), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(310), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(312), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(314), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(316), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(318), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(320), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(322), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(326), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(328), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(330), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(332), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(451), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(23), 1,
      aux_sym__sequence_subdocument,
    STATE(175), 1,
      sym__sequence_stmt,
    STATE(245), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(315), 1,
      sym_sequence_actor,
    STATE(599), 1,
      sym__sequence_participant_type,
    ACTIONS(302), 2,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
    STATE(202), 17,
      sym_sequence_stmt_participant,
      sym_sequence_stmt_actor,
      sym_sequence_stmt_signal,
      sym_sequence_stmt_autonumber,
      sym_sequence_stmt_activate,
      sym_sequence_stmt_deactivate,
      sym_sequence_stmt_note,
      sym_sequence_stmt_links,
      sym_sequence_stmt_link,
      sym_sequence_stmt_properties,
      sym_sequence_stmt_details,
      sym_sequence_stmt_title,
      sym_sequence_stmt_loop,
      sym_sequence_stmt_rect,
      sym_sequence_stmt_opt,
      sym_sequence_stmt_alt,
      sym_sequence_stmt_par,
  [3736] = 27,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(33), 1,
      sym__sequence_actor_word,
    ACTIONS(298), 1,
      sym__newline,
    ACTIONS(300), 1,
      aux_sym_gantt_stmt_title_token1,
    ACTIONS(304), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(306), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(308), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(310), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(312), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(314), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(316), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(318), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(320), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(322), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(326), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(328), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(330), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(332), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(453), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(23), 1,
      aux_sym__sequence_subdocument,
    STATE(175), 1,
      sym__sequence_stmt,
    STATE(245), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(315), 1,
      sym_sequence_actor,
    STATE(599), 1,
      sym__sequence_participant_type,
    ACTIONS(302), 2,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
    STATE(202), 17,
      sym_sequence_stmt_participant,
      sym_sequence_stmt_actor,
      sym_sequence_stmt_signal,
      sym_sequence_stmt_autonumber,
      sym_sequence_stmt_activate,
      sym_sequence_stmt_deactivate,
      sym_sequence_stmt_note,
      sym_sequence_stmt_links,
      sym_sequence_stmt_link,
      sym_sequence_stmt_properties,
      sym_sequence_stmt_details,
      sym_sequence_stmt_title,
      sym_sequence_stmt_loop,
      sym_sequence_stmt_rect,
      sym_sequence_stmt_opt,
      sym_sequence_stmt_alt,
      sym_sequence_stmt_par,
  [3835] = 27,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(33), 1,
      sym__sequence_actor_word,
    ACTIONS(298), 1,
      sym__newline,
    ACTIONS(300), 1,
      aux_sym_gantt_stmt_title_token1,
    ACTIONS(304), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(306), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(308), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(310), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(312), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(314), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(316), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(318), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(320), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(322), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(326), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(328), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(330), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(332), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(455), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(24), 1,
      aux_sym__sequence_subdocument,
    STATE(175), 1,
      sym__sequence_stmt,
    STATE(245), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(315), 1,
      sym_sequence_actor,
    STATE(599), 1,
      sym__sequence_participant_type,
    ACTIONS(302), 2,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
    STATE(202), 17,
      sym_sequence_stmt_participant,
      sym_sequence_stmt_actor,
      sym_sequence_stmt_signal,
      sym_sequence_stmt_autonumber,
      sym_sequence_stmt_activate,
      sym_sequence_stmt_deactivate,
      sym_sequence_stmt_note,
      sym_sequence_stmt_links,
      sym_sequence_stmt_link,
      sym_sequence_stmt_properties,
      sym_sequence_stmt_details,
      sym_sequence_stmt_title,
      sym_sequence_stmt_loop,
      sym_sequence_stmt_rect,
      sym_sequence_stmt_opt,
      sym_sequence_stmt_alt,
      sym_sequence_stmt_par,
  [3934] = 27,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(33), 1,
      sym__sequence_actor_word,
    ACTIONS(298), 1,
      sym__newline,
    ACTIONS(300), 1,
      aux_sym_gantt_stmt_title_token1,
    ACTIONS(304), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(306), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(308), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(310), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(312), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(314), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(316), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(318), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(320), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(322), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(326), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(328), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(330), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(332), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(457), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(44), 1,
      aux_sym__sequence_subdocument,
    STATE(175), 1,
      sym__sequence_stmt,
    STATE(245), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(315), 1,
      sym_sequence_actor,
    STATE(599), 1,
      sym__sequence_participant_type,
    ACTIONS(302), 2,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
    STATE(202), 17,
      sym_sequence_stmt_participant,
      sym_sequence_stmt_actor,
      sym_sequence_stmt_signal,
      sym_sequence_stmt_autonumber,
      sym_sequence_stmt_activate,
      sym_sequence_stmt_deactivate,
      sym_sequence_stmt_note,
      sym_sequence_stmt_links,
      sym_sequence_stmt_link,
      sym_sequence_stmt_properties,
      sym_sequence_stmt_details,
      sym_sequence_stmt_title,
      sym_sequence_stmt_loop,
      sym_sequence_stmt_rect,
      sym_sequence_stmt_opt,
      sym_sequence_stmt_alt,
      sym_sequence_stmt_par,
  [4033] = 27,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(33), 1,
      sym__sequence_actor_word,
    ACTIONS(298), 1,
      sym__newline,
    ACTIONS(300), 1,
      aux_sym_gantt_stmt_title_token1,
    ACTIONS(304), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(306), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(308), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(310), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(312), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(314), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(316), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(318), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(320), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(322), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(326), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(328), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(330), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(332), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(459), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(45), 1,
      aux_sym__sequence_subdocument,
    STATE(175), 1,
      sym__sequence_stmt,
    STATE(245), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(315), 1,
      sym_sequence_actor,
    STATE(599), 1,
      sym__sequence_participant_type,
    ACTIONS(302), 2,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
    STATE(202), 17,
      sym_sequence_stmt_participant,
      sym_sequence_stmt_actor,
      sym_sequence_stmt_signal,
      sym_sequence_stmt_autonumber,
      sym_sequence_stmt_activate,
      sym_sequence_stmt_deactivate,
      sym_sequence_stmt_note,
      sym_sequence_stmt_links,
      sym_sequence_stmt_link,
      sym_sequence_stmt_properties,
      sym_sequence_stmt_details,
      sym_sequence_stmt_title,
      sym_sequence_stmt_loop,
      sym_sequence_stmt_rect,
      sym_sequence_stmt_opt,
      sym_sequence_stmt_alt,
      sym_sequence_stmt_par,
  [4132] = 27,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(33), 1,
      sym__sequence_actor_word,
    ACTIONS(298), 1,
      sym__newline,
    ACTIONS(300), 1,
      aux_sym_gantt_stmt_title_token1,
    ACTIONS(304), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(306), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(308), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(310), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(312), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(314), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(316), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(318), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(320), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(322), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(326), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(328), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(330), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(332), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(461), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(20), 1,
      aux_sym__sequence_subdocument,
    STATE(175), 1,
      sym__sequence_stmt,
    STATE(245), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(315), 1,
      sym_sequence_actor,
    STATE(599), 1,
      sym__sequence_participant_type,
    ACTIONS(302), 2,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
    STATE(202), 17,
      sym_sequence_stmt_participant,
      sym_sequence_stmt_actor,
      sym_sequence_stmt_signal,
      sym_sequence_stmt_autonumber,
      sym_sequence_stmt_activate,
      sym_sequence_stmt_deactivate,
      sym_sequence_stmt_note,
      sym_sequence_stmt_links,
      sym_sequence_stmt_link,
      sym_sequence_stmt_properties,
      sym_sequence_stmt_details,
      sym_sequence_stmt_title,
      sym_sequence_stmt_loop,
      sym_sequence_stmt_rect,
      sym_sequence_stmt_opt,
      sym_sequence_stmt_alt,
      sym_sequence_stmt_par,
  [4231] = 27,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(33), 1,
      sym__sequence_actor_word,
    ACTIONS(298), 1,
      sym__newline,
    ACTIONS(300), 1,
      aux_sym_gantt_stmt_title_token1,
    ACTIONS(304), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(306), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(308), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(310), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(312), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(314), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(316), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(318), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(320), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(322), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(326), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(328), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(330), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(332), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(463), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(23), 1,
      aux_sym__sequence_subdocument,
    STATE(175), 1,
      sym__sequence_stmt,
    STATE(245), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(315), 1,
      sym_sequence_actor,
    STATE(599), 1,
      sym__sequence_participant_type,
    ACTIONS(302), 2,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
    STATE(202), 17,
      sym_sequence_stmt_participant,
      sym_sequence_stmt_actor,
      sym_sequence_stmt_signal,
      sym_sequence_stmt_autonumber,
      sym_sequence_stmt_activate,
      sym_sequence_stmt_deactivate,
      sym_sequence_stmt_note,
      sym_sequence_stmt_links,
      sym_sequence_stmt_link,
      sym_sequence_stmt_properties,
      sym_sequence_stmt_details,
      sym_sequence_stmt_title,
      sym_sequence_stmt_loop,
      sym_sequence_stmt_rect,
      sym_sequence_stmt_opt,
      sym_sequence_stmt_alt,
      sym_sequence_stmt_par,
  [4330] = 27,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(33), 1,
      sym__sequence_actor_word,
    ACTIONS(298), 1,
      sym__newline,
    ACTIONS(300), 1,
      aux_sym_gantt_stmt_title_token1,
    ACTIONS(304), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(306), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(308), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(310), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(312), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(314), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(316), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(318), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(320), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(322), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(326), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(328), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(330), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(332), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(465), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(23), 1,
      aux_sym__sequence_subdocument,
    STATE(175), 1,
      sym__sequence_stmt,
    STATE(245), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(315), 1,
      sym_sequence_actor,
    STATE(599), 1,
      sym__sequence_participant_type,
    ACTIONS(302), 2,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
    STATE(202), 17,
      sym_sequence_stmt_participant,
      sym_sequence_stmt_actor,
      sym_sequence_stmt_signal,
      sym_sequence_stmt_autonumber,
      sym_sequence_stmt_activate,
      sym_sequence_stmt_deactivate,
      sym_sequence_stmt_note,
      sym_sequence_stmt_links,
      sym_sequence_stmt_link,
      sym_sequence_stmt_properties,
      sym_sequence_stmt_details,
      sym_sequence_stmt_title,
      sym_sequence_stmt_loop,
      sym_sequence_stmt_rect,
      sym_sequence_stmt_opt,
      sym_sequence_stmt_alt,
      sym_sequence_stmt_par,
  [4429] = 26,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(33), 1,
      sym__sequence_actor_word,
    ACTIONS(417), 1,
      aux_sym_gantt_stmt_title_token1,
    ACTIONS(421), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(423), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(425), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(427), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(429), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(431), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(433), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(435), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(437), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(439), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(441), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(443), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(445), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(447), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(467), 1,
      ts_builtin_sym_end,
    ACTIONS(469), 1,
      sym__newline,
    STATE(245), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(309), 1,
      sym_sequence_actor,
    STATE(522), 1,
      sym__sequence_participant_type,
    ACTIONS(419), 2,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
    STATE(19), 2,
      sym__sequence_stmt,
      aux_sym_diagram_sequence_repeat1,
    STATE(157), 17,
      sym_sequence_stmt_participant,
      sym_sequence_stmt_actor,
      sym_sequence_stmt_signal,
      sym_sequence_stmt_autonumber,
      sym_sequence_stmt_activate,
      sym_sequence_stmt_deactivate,
      sym_sequence_stmt_note,
      sym_sequence_stmt_links,
      sym_sequence_stmt_link,
      sym_sequence_stmt_properties,
      sym_sequence_stmt_details,
      sym_sequence_stmt_title,
      sym_sequence_stmt_loop,
      sym_sequence_stmt_rect,
      sym_sequence_stmt_opt,
      sym_sequence_stmt_alt,
      sym_sequence_stmt_par,
  [4526] = 26,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(31), 1,
      sym__newline,
    ACTIONS(33), 1,
      sym__sequence_actor_word,
    ACTIONS(35), 1,
      aux_sym_gantt_stmt_title_token1,
    ACTIONS(39), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(41), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(43), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(45), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(47), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(49), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(51), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(53), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(55), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(57), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(61), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(63), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(65), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(67), 1,
      aux_sym_sequence_stmt_par_token1,
    STATE(4), 1,
      aux_sym__sequence_subdocument,
    STATE(113), 1,
      sym__sequence_stmt,
    STATE(245), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(314), 1,
      sym_sequence_actor,
    STATE(589), 1,
      sym__sequence_participant_type,
    ACTIONS(37), 2,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
    STATE(86), 17,
      sym_sequence_stmt_participant,
      sym_sequence_stmt_actor,
      sym_sequence_stmt_signal,
      sym_sequence_stmt_autonumber,
      sym_sequence_stmt_activate,
      sym_sequence_stmt_deactivate,
      sym_sequence_stmt_note,
      sym_sequence_stmt_links,
      sym_sequence_stmt_link,
      sym_sequence_stmt_properties,
      sym_sequence_stmt_details,
      sym_sequence_stmt_title,
      sym_sequence_stmt_loop,
      sym_sequence_stmt_rect,
      sym_sequence_stmt_opt,
      sym_sequence_stmt_alt,
      sym_sequence_stmt_par,
  [4622] = 26,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(33), 1,
      sym__sequence_actor_word,
    ACTIONS(75), 1,
      sym__newline,
    ACTIONS(77), 1,
      aux_sym_gantt_stmt_title_token1,
    ACTIONS(81), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(83), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(85), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(87), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(89), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(91), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(93), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(95), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(97), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(99), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(103), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(105), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(107), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(111), 1,
      aux_sym_sequence_stmt_par_token1,
    STATE(5), 1,
      aux_sym__sequence_subdocument,
    STATE(116), 1,
      sym__sequence_stmt,
    STATE(245), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(304), 1,
      sym_sequence_actor,
    STATE(609), 1,
      sym__sequence_participant_type,
    ACTIONS(79), 2,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
    STATE(118), 17,
      sym_sequence_stmt_participant,
      sym_sequence_stmt_actor,
      sym_sequence_stmt_signal,
      sym_sequence_stmt_autonumber,
      sym_sequence_stmt_activate,
      sym_sequence_stmt_deactivate,
      sym_sequence_stmt_note,
      sym_sequence_stmt_links,
      sym_sequence_stmt_link,
      sym_sequence_stmt_properties,
      sym_sequence_stmt_details,
      sym_sequence_stmt_title,
      sym_sequence_stmt_loop,
      sym_sequence_stmt_rect,
      sym_sequence_stmt_opt,
      sym_sequence_stmt_alt,
      sym_sequence_stmt_par,
  [4718] = 26,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(31), 1,
      sym__newline,
    ACTIONS(33), 1,
      sym__sequence_actor_word,
    ACTIONS(35), 1,
      aux_sym_gantt_stmt_title_token1,
    ACTIONS(39), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(41), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(43), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(45), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(47), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(49), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(51), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(53), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(55), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(57), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(61), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(63), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(65), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(67), 1,
      aux_sym_sequence_stmt_par_token1,
    STATE(16), 1,
      aux_sym__sequence_subdocument,
    STATE(113), 1,
      sym__sequence_stmt,
    STATE(245), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(314), 1,
      sym_sequence_actor,
    STATE(589), 1,
      sym__sequence_participant_type,
    ACTIONS(37), 2,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
    STATE(86), 17,
      sym_sequence_stmt_participant,
      sym_sequence_stmt_actor,
      sym_sequence_stmt_signal,
      sym_sequence_stmt_autonumber,
      sym_sequence_stmt_activate,
      sym_sequence_stmt_deactivate,
      sym_sequence_stmt_note,
      sym_sequence_stmt_links,
      sym_sequence_stmt_link,
      sym_sequence_stmt_properties,
      sym_sequence_stmt_details,
      sym_sequence_stmt_title,
      sym_sequence_stmt_loop,
      sym_sequence_stmt_rect,
      sym_sequence_stmt_opt,
      sym_sequence_stmt_alt,
      sym_sequence_stmt_par,
  [4814] = 26,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(33), 1,
      sym__sequence_actor_word,
    ACTIONS(75), 1,
      sym__newline,
    ACTIONS(77), 1,
      aux_sym_gantt_stmt_title_token1,
    ACTIONS(81), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(83), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(85), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(87), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(89), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(91), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(93), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(95), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(97), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(99), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(103), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(105), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(107), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(111), 1,
      aux_sym_sequence_stmt_par_token1,
    STATE(14), 1,
      aux_sym__sequence_subdocument,
    STATE(116), 1,
      sym__sequence_stmt,
    STATE(245), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(304), 1,
      sym_sequence_actor,
    STATE(609), 1,
      sym__sequence_participant_type,
    ACTIONS(79), 2,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
    STATE(118), 17,
      sym_sequence_stmt_participant,
      sym_sequence_stmt_actor,
      sym_sequence_stmt_signal,
      sym_sequence_stmt_autonumber,
      sym_sequence_stmt_activate,
      sym_sequence_stmt_deactivate,
      sym_sequence_stmt_note,
      sym_sequence_stmt_links,
      sym_sequence_stmt_link,
      sym_sequence_stmt_properties,
      sym_sequence_stmt_details,
      sym_sequence_stmt_title,
      sym_sequence_stmt_loop,
      sym_sequence_stmt_rect,
      sym_sequence_stmt_opt,
      sym_sequence_stmt_alt,
      sym_sequence_stmt_par,
  [4910] = 26,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(31), 1,
      sym__newline,
    ACTIONS(33), 1,
      sym__sequence_actor_word,
    ACTIONS(35), 1,
      aux_sym_gantt_stmt_title_token1,
    ACTIONS(39), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(41), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(43), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(45), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(47), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(49), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(51), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(53), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(55), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(57), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(61), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(63), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(65), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(67), 1,
      aux_sym_sequence_stmt_par_token1,
    STATE(2), 1,
      aux_sym__sequence_subdocument,
    STATE(113), 1,
      sym__sequence_stmt,
    STATE(245), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(314), 1,
      sym_sequence_actor,
    STATE(589), 1,
      sym__sequence_participant_type,
    ACTIONS(37), 2,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
    STATE(86), 17,
      sym_sequence_stmt_participant,
      sym_sequence_stmt_actor,
      sym_sequence_stmt_signal,
      sym_sequence_stmt_autonumber,
      sym_sequence_stmt_activate,
      sym_sequence_stmt_deactivate,
      sym_sequence_stmt_note,
      sym_sequence_stmt_links,
      sym_sequence_stmt_link,
      sym_sequence_stmt_properties,
      sym_sequence_stmt_details,
      sym_sequence_stmt_title,
      sym_sequence_stmt_loop,
      sym_sequence_stmt_rect,
      sym_sequence_stmt_opt,
      sym_sequence_stmt_alt,
      sym_sequence_stmt_par,
  [5006] = 26,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(31), 1,
      sym__newline,
    ACTIONS(33), 1,
      sym__sequence_actor_word,
    ACTIONS(35), 1,
      aux_sym_gantt_stmt_title_token1,
    ACTIONS(39), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(41), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(43), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(45), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(47), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(49), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(51), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(53), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(55), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(57), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(61), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(63), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(65), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(67), 1,
      aux_sym_sequence_stmt_par_token1,
    STATE(15), 1,
      aux_sym__sequence_subdocument,
    STATE(113), 1,
      sym__sequence_stmt,
    STATE(245), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(314), 1,
      sym_sequence_actor,
    STATE(589), 1,
      sym__sequence_participant_type,
    ACTIONS(37), 2,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
    STATE(86), 17,
      sym_sequence_stmt_participant,
      sym_sequence_stmt_actor,
      sym_sequence_stmt_signal,
      sym_sequence_stmt_autonumber,
      sym_sequence_stmt_activate,
      sym_sequence_stmt_deactivate,
      sym_sequence_stmt_note,
      sym_sequence_stmt_links,
      sym_sequence_stmt_link,
      sym_sequence_stmt_properties,
      sym_sequence_stmt_details,
      sym_sequence_stmt_title,
      sym_sequence_stmt_loop,
      sym_sequence_stmt_rect,
      sym_sequence_stmt_opt,
      sym_sequence_stmt_alt,
      sym_sequence_stmt_par,
  [5102] = 26,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(31), 1,
      sym__newline,
    ACTIONS(33), 1,
      sym__sequence_actor_word,
    ACTIONS(35), 1,
      aux_sym_gantt_stmt_title_token1,
    ACTIONS(39), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(41), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(43), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(45), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(47), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(49), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(51), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(53), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(55), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(57), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(61), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(63), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(65), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(67), 1,
      aux_sym_sequence_stmt_par_token1,
    STATE(6), 1,
      aux_sym__sequence_subdocument,
    STATE(113), 1,
      sym__sequence_stmt,
    STATE(245), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(314), 1,
      sym_sequence_actor,
    STATE(589), 1,
      sym__sequence_participant_type,
    ACTIONS(37), 2,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
    STATE(86), 17,
      sym_sequence_stmt_participant,
      sym_sequence_stmt_actor,
      sym_sequence_stmt_signal,
      sym_sequence_stmt_autonumber,
      sym_sequence_stmt_activate,
      sym_sequence_stmt_deactivate,
      sym_sequence_stmt_note,
      sym_sequence_stmt_links,
      sym_sequence_stmt_link,
      sym_sequence_stmt_properties,
      sym_sequence_stmt_details,
      sym_sequence_stmt_title,
      sym_sequence_stmt_loop,
      sym_sequence_stmt_rect,
      sym_sequence_stmt_opt,
      sym_sequence_stmt_alt,
      sym_sequence_stmt_par,
  [5198] = 26,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(31), 1,
      sym__newline,
    ACTIONS(33), 1,
      sym__sequence_actor_word,
    ACTIONS(35), 1,
      aux_sym_gantt_stmt_title_token1,
    ACTIONS(39), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(41), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(43), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(45), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(47), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(49), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(51), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(53), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(55), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(57), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(61), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(63), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(65), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(67), 1,
      aux_sym_sequence_stmt_par_token1,
    STATE(7), 1,
      aux_sym__sequence_subdocument,
    STATE(113), 1,
      sym__sequence_stmt,
    STATE(245), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(314), 1,
      sym_sequence_actor,
    STATE(589), 1,
      sym__sequence_participant_type,
    ACTIONS(37), 2,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
    STATE(86), 17,
      sym_sequence_stmt_participant,
      sym_sequence_stmt_actor,
      sym_sequence_stmt_signal,
      sym_sequence_stmt_autonumber,
      sym_sequence_stmt_activate,
      sym_sequence_stmt_deactivate,
      sym_sequence_stmt_note,
      sym_sequence_stmt_links,
      sym_sequence_stmt_link,
      sym_sequence_stmt_properties,
      sym_sequence_stmt_details,
      sym_sequence_stmt_title,
      sym_sequence_stmt_loop,
      sym_sequence_stmt_rect,
      sym_sequence_stmt_opt,
      sym_sequence_stmt_alt,
      sym_sequence_stmt_par,
  [5294] = 26,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(33), 1,
      sym__sequence_actor_word,
    ACTIONS(75), 1,
      sym__newline,
    ACTIONS(77), 1,
      aux_sym_gantt_stmt_title_token1,
    ACTIONS(81), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(83), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(85), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(87), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(89), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(91), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(93), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(95), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(97), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(99), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(103), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(105), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(107), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(111), 1,
      aux_sym_sequence_stmt_par_token1,
    STATE(8), 1,
      aux_sym__sequence_subdocument,
    STATE(116), 1,
      sym__sequence_stmt,
    STATE(245), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(304), 1,
      sym_sequence_actor,
    STATE(609), 1,
      sym__sequence_participant_type,
    ACTIONS(79), 2,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
    STATE(118), 17,
      sym_sequence_stmt_participant,
      sym_sequence_stmt_actor,
      sym_sequence_stmt_signal,
      sym_sequence_stmt_autonumber,
      sym_sequence_stmt_activate,
      sym_sequence_stmt_deactivate,
      sym_sequence_stmt_note,
      sym_sequence_stmt_links,
      sym_sequence_stmt_link,
      sym_sequence_stmt_properties,
      sym_sequence_stmt_details,
      sym_sequence_stmt_title,
      sym_sequence_stmt_loop,
      sym_sequence_stmt_rect,
      sym_sequence_stmt_opt,
      sym_sequence_stmt_alt,
      sym_sequence_stmt_par,
  [5390] = 26,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(31), 1,
      sym__newline,
    ACTIONS(33), 1,
      sym__sequence_actor_word,
    ACTIONS(35), 1,
      aux_sym_gantt_stmt_title_token1,
    ACTIONS(39), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(41), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(43), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(45), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(47), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(49), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(51), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(53), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(55), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(57), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(61), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(63), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(65), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(67), 1,
      aux_sym_sequence_stmt_par_token1,
    STATE(9), 1,
      aux_sym__sequence_subdocument,
    STATE(113), 1,
      sym__sequence_stmt,
    STATE(245), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(314), 1,
      sym_sequence_actor,
    STATE(589), 1,
      sym__sequence_participant_type,
    ACTIONS(37), 2,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
    STATE(86), 17,
      sym_sequence_stmt_participant,
      sym_sequence_stmt_actor,
      sym_sequence_stmt_signal,
      sym_sequence_stmt_autonumber,
      sym_sequence_stmt_activate,
      sym_sequence_stmt_deactivate,
      sym_sequence_stmt_note,
      sym_sequence_stmt_links,
      sym_sequence_stmt_link,
      sym_sequence_stmt_properties,
      sym_sequence_stmt_details,
      sym_sequence_stmt_title,
      sym_sequence_stmt_loop,
      sym_sequence_stmt_rect,
      sym_sequence_stmt_opt,
      sym_sequence_stmt_alt,
      sym_sequence_stmt_par,
  [5486] = 26,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(31), 1,
      sym__newline,
    ACTIONS(33), 1,
      sym__sequence_actor_word,
    ACTIONS(35), 1,
      aux_sym_gantt_stmt_title_token1,
    ACTIONS(39), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(41), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(43), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(45), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(47), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(49), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(51), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(53), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(55), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(57), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(61), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(63), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(65), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(67), 1,
      aux_sym_sequence_stmt_par_token1,
    STATE(10), 1,
      aux_sym__sequence_subdocument,
    STATE(113), 1,
      sym__sequence_stmt,
    STATE(245), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(314), 1,
      sym_sequence_actor,
    STATE(589), 1,
      sym__sequence_participant_type,
    ACTIONS(37), 2,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
    STATE(86), 17,
      sym_sequence_stmt_participant,
      sym_sequence_stmt_actor,
      sym_sequence_stmt_signal,
      sym_sequence_stmt_autonumber,
      sym_sequence_stmt_activate,
      sym_sequence_stmt_deactivate,
      sym_sequence_stmt_note,
      sym_sequence_stmt_links,
      sym_sequence_stmt_link,
      sym_sequence_stmt_properties,
      sym_sequence_stmt_details,
      sym_sequence_stmt_title,
      sym_sequence_stmt_loop,
      sym_sequence_stmt_rect,
      sym_sequence_stmt_opt,
      sym_sequence_stmt_alt,
      sym_sequence_stmt_par,
  [5582] = 26,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(33), 1,
      sym__sequence_actor_word,
    ACTIONS(75), 1,
      sym__newline,
    ACTIONS(77), 1,
      aux_sym_gantt_stmt_title_token1,
    ACTIONS(81), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(83), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(85), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(87), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(89), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(91), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(93), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(95), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(97), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(99), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(103), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(105), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(107), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(111), 1,
      aux_sym_sequence_stmt_par_token1,
    STATE(11), 1,
      aux_sym__sequence_subdocument,
    STATE(116), 1,
      sym__sequence_stmt,
    STATE(245), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(304), 1,
      sym_sequence_actor,
    STATE(609), 1,
      sym__sequence_participant_type,
    ACTIONS(79), 2,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
    STATE(118), 17,
      sym_sequence_stmt_participant,
      sym_sequence_stmt_actor,
      sym_sequence_stmt_signal,
      sym_sequence_stmt_autonumber,
      sym_sequence_stmt_activate,
      sym_sequence_stmt_deactivate,
      sym_sequence_stmt_note,
      sym_sequence_stmt_links,
      sym_sequence_stmt_link,
      sym_sequence_stmt_properties,
      sym_sequence_stmt_details,
      sym_sequence_stmt_title,
      sym_sequence_stmt_loop,
      sym_sequence_stmt_rect,
      sym_sequence_stmt_opt,
      sym_sequence_stmt_alt,
      sym_sequence_stmt_par,
  [5678] = 26,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(31), 1,
      sym__newline,
    ACTIONS(33), 1,
      sym__sequence_actor_word,
    ACTIONS(35), 1,
      aux_sym_gantt_stmt_title_token1,
    ACTIONS(39), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(41), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(43), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(45), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(47), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(49), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(51), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(53), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(55), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(57), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(61), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(63), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(65), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(67), 1,
      aux_sym_sequence_stmt_par_token1,
    STATE(12), 1,
      aux_sym__sequence_subdocument,
    STATE(113), 1,
      sym__sequence_stmt,
    STATE(245), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(314), 1,
      sym_sequence_actor,
    STATE(589), 1,
      sym__sequence_participant_type,
    ACTIONS(37), 2,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
    STATE(86), 17,
      sym_sequence_stmt_participant,
      sym_sequence_stmt_actor,
      sym_sequence_stmt_signal,
      sym_sequence_stmt_autonumber,
      sym_sequence_stmt_activate,
      sym_sequence_stmt_deactivate,
      sym_sequence_stmt_note,
      sym_sequence_stmt_links,
      sym_sequence_stmt_link,
      sym_sequence_stmt_properties,
      sym_sequence_stmt_details,
      sym_sequence_stmt_title,
      sym_sequence_stmt_loop,
      sym_sequence_stmt_rect,
      sym_sequence_stmt_opt,
      sym_sequence_stmt_alt,
      sym_sequence_stmt_par,
  [5774] = 26,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(33), 1,
      sym__sequence_actor_word,
    ACTIONS(75), 1,
      sym__newline,
    ACTIONS(77), 1,
      aux_sym_gantt_stmt_title_token1,
    ACTIONS(81), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(83), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(85), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(87), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(89), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(91), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(93), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(95), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(97), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(99), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(103), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(105), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(107), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(111), 1,
      aux_sym_sequence_stmt_par_token1,
    STATE(13), 1,
      aux_sym__sequence_subdocument,
    STATE(116), 1,
      sym__sequence_stmt,
    STATE(245), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(304), 1,
      sym_sequence_actor,
    STATE(609), 1,
      sym__sequence_participant_type,
    ACTIONS(79), 2,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
    STATE(118), 17,
      sym_sequence_stmt_participant,
      sym_sequence_stmt_actor,
      sym_sequence_stmt_signal,
      sym_sequence_stmt_autonumber,
      sym_sequence_stmt_activate,
      sym_sequence_stmt_deactivate,
      sym_sequence_stmt_note,
      sym_sequence_stmt_links,
      sym_sequence_stmt_link,
      sym_sequence_stmt_properties,
      sym_sequence_stmt_details,
      sym_sequence_stmt_title,
      sym_sequence_stmt_loop,
      sym_sequence_stmt_rect,
      sym_sequence_stmt_opt,
      sym_sequence_stmt_alt,
      sym_sequence_stmt_par,
  [5870] = 26,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(31), 1,
      sym__newline,
    ACTIONS(33), 1,
      sym__sequence_actor_word,
    ACTIONS(35), 1,
      aux_sym_gantt_stmt_title_token1,
    ACTIONS(39), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(41), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(43), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(45), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(47), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(49), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(51), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(53), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(55), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(57), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(61), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(63), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(65), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(67), 1,
      aux_sym_sequence_stmt_par_token1,
    STATE(3), 1,
      aux_sym__sequence_subdocument,
    STATE(113), 1,
      sym__sequence_stmt,
    STATE(245), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(314), 1,
      sym_sequence_actor,
    STATE(589), 1,
      sym__sequence_participant_type,
    ACTIONS(37), 2,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
    STATE(86), 17,
      sym_sequence_stmt_participant,
      sym_sequence_stmt_actor,
      sym_sequence_stmt_signal,
      sym_sequence_stmt_autonumber,
      sym_sequence_stmt_activate,
      sym_sequence_stmt_deactivate,
      sym_sequence_stmt_note,
      sym_sequence_stmt_links,
      sym_sequence_stmt_link,
      sym_sequence_stmt_properties,
      sym_sequence_stmt_details,
      sym_sequence_stmt_title,
      sym_sequence_stmt_loop,
      sym_sequence_stmt_rect,
      sym_sequence_stmt_opt,
      sym_sequence_stmt_alt,
      sym_sequence_stmt_par,
  [5966] = 18,
    ACTIONS(473), 1,
      anon_sym_GT,
    ACTIONS(477), 1,
      anon_sym_LBRACE,
    ACTIONS(479), 1,
      anon_sym_LPAREN,
    ACTIONS(481), 1,
      anon_sym_LBRACK,
    ACTIONS(483), 1,
      anon_sym_LPAREN_LPAREN,
    ACTIONS(485), 1,
      anon_sym_LPAREN_DASH,
    ACTIONS(487), 1,
      anon_sym_LPAREN_LBRACK,
    ACTIONS(489), 1,
      anon_sym_LBRACK_LBRACK,
    ACTIONS(491), 1,
      anon_sym_LBRACK_PIPE,
    ACTIONS(493), 1,
      anon_sym_LBRACK_LPAREN,
    ACTIONS(495), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(497), 1,
      anon_sym_LBRACK_SLASH,
    ACTIONS(499), 1,
      anon_sym_LBRACK_BSLASH,
    STATE(323), 1,
      sym__flow_vertex_kind,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(475), 3,
      aux_sym_flow_link_arrow_start_token1,
      aux_sym_flow_link_arrow_start_token2,
      aux_sym_flow_link_arrow_start_token3,
    ACTIONS(471), 7,
      ts_builtin_sym_end,
      sym__newline,
      aux_sym_flow_link_arrow_token1,
      aux_sym_flow_link_arrow_token2,
      aux_sym_flow_link_arrow_token3,
      anon_sym_SEMI,
      anon_sym_AMP,
    STATE(324), 15,
      sym_flow_vertex_square,
      sym_flow_vertex_circle,
      sym_flow_vertex_ellipse,
      sym_flow_vertex_stadium,
      sym_flow_vertex_subroutine,
      sym_flow_vertex_rect,
      sym_flow_vertex_cylinder,
      sym_flow_vertex_round,
      sym_flow_vertex_diamond,
      sym_flow_vertex_hexagon,
      sym_flow_vertex_odd,
      sym_flow_vertex_trapezoid,
      sym_flow_vertex_inv_trapezoid,
      sym_flow_vertex_leanright,
      sym_flow_vertex_leanleft,
  [6044] = 18,
    ACTIONS(501), 1,
      sym__newline,
    ACTIONS(503), 1,
      anon_sym_DASH_DASH,
    ACTIONS(505), 1,
      anon_sym_LBRACK_STAR_RBRACK,
    ACTIONS(507), 1,
      aux_sym_state_name_token1,
    ACTIONS(509), 1,
      aux_sym_state_hide_empty_description_token1,
    ACTIONS(511), 1,
      aux_sym_state_direction_tb_token1,
    ACTIONS(513), 1,
      aux_sym_state_direction_bt_token1,
    ACTIONS(515), 1,
      aux_sym_state_direction_rl_token1,
    ACTIONS(517), 1,
      aux_sym_state_direction_lr_token1,
    ACTIONS(519), 1,
      anon_sym_RBRACE,
    ACTIONS(521), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(523), 1,
      aux_sym_state_stmt_simple_token1,
    STATE(222), 1,
      sym_state_name,
    STATE(229), 1,
      sym_state_hide_empty_description,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    STATE(66), 2,
      sym__state_stmt,
      aux_sym_state_composite_body_repeat1,
    STATE(231), 4,
      sym_state_direction_tb,
      sym_state_direction_bt,
      sym_state_direction_rl,
      sym_state_direction_lr,
    STATE(230), 8,
      sym_state_division,
      sym__state_direction,
      sym_state_stmt_simple,
      sym_state_stmt_arrow,
      sym_state_stmt_composite,
      sym_state_stmt_annotation,
      sym_state_stmt_hide_empty_description,
      sym_state_note,
  [6111] = 18,
    ACTIONS(503), 1,
      anon_sym_DASH_DASH,
    ACTIONS(505), 1,
      anon_sym_LBRACK_STAR_RBRACK,
    ACTIONS(507), 1,
      aux_sym_state_name_token1,
    ACTIONS(509), 1,
      aux_sym_state_hide_empty_description_token1,
    ACTIONS(511), 1,
      aux_sym_state_direction_tb_token1,
    ACTIONS(513), 1,
      aux_sym_state_direction_bt_token1,
    ACTIONS(515), 1,
      aux_sym_state_direction_rl_token1,
    ACTIONS(517), 1,
      aux_sym_state_direction_lr_token1,
    ACTIONS(521), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(523), 1,
      aux_sym_state_stmt_simple_token1,
    ACTIONS(525), 1,
      sym__newline,
    ACTIONS(527), 1,
      anon_sym_RBRACE,
    STATE(222), 1,
      sym_state_name,
    STATE(229), 1,
      sym_state_hide_empty_description,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    STATE(65), 2,
      sym__state_stmt,
      aux_sym_state_composite_body_repeat1,
    STATE(231), 4,
      sym_state_direction_tb,
      sym_state_direction_bt,
      sym_state_direction_rl,
      sym_state_direction_lr,
    STATE(230), 8,
      sym_state_division,
      sym__state_direction,
      sym_state_stmt_simple,
      sym_state_stmt_arrow,
      sym_state_stmt_composite,
      sym_state_stmt_annotation,
      sym_state_stmt_hide_empty_description,
      sym_state_note,
  [6178] = 18,
    ACTIONS(529), 1,
      sym__newline,
    ACTIONS(532), 1,
      anon_sym_DASH_DASH,
    ACTIONS(535), 1,
      anon_sym_LBRACK_STAR_RBRACK,
    ACTIONS(538), 1,
      aux_sym_state_name_token1,
    ACTIONS(541), 1,
      aux_sym_state_hide_empty_description_token1,
    ACTIONS(544), 1,
      aux_sym_state_direction_tb_token1,
    ACTIONS(547), 1,
      aux_sym_state_direction_bt_token1,
    ACTIONS(550), 1,
      aux_sym_state_direction_rl_token1,
    ACTIONS(553), 1,
      aux_sym_state_direction_lr_token1,
    ACTIONS(556), 1,
      anon_sym_RBRACE,
    ACTIONS(558), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(561), 1,
      aux_sym_state_stmt_simple_token1,
    STATE(222), 1,
      sym_state_name,
    STATE(229), 1,
      sym_state_hide_empty_description,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    STATE(65), 2,
      sym__state_stmt,
      aux_sym_state_composite_body_repeat1,
    STATE(231), 4,
      sym_state_direction_tb,
      sym_state_direction_bt,
      sym_state_direction_rl,
      sym_state_direction_lr,
    STATE(230), 8,
      sym_state_division,
      sym__state_direction,
      sym_state_stmt_simple,
      sym_state_stmt_arrow,
      sym_state_stmt_composite,
      sym_state_stmt_annotation,
      sym_state_stmt_hide_empty_description,
      sym_state_note,
  [6245] = 18,
    ACTIONS(503), 1,
      anon_sym_DASH_DASH,
    ACTIONS(505), 1,
      anon_sym_LBRACK_STAR_RBRACK,
    ACTIONS(507), 1,
      aux_sym_state_name_token1,
    ACTIONS(509), 1,
      aux_sym_state_hide_empty_description_token1,
    ACTIONS(511), 1,
      aux_sym_state_direction_tb_token1,
    ACTIONS(513), 1,
      aux_sym_state_direction_bt_token1,
    ACTIONS(515), 1,
      aux_sym_state_direction_rl_token1,
    ACTIONS(517), 1,
      aux_sym_state_direction_lr_token1,
    ACTIONS(521), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(523), 1,
      aux_sym_state_stmt_simple_token1,
    ACTIONS(564), 1,
      sym__newline,
    ACTIONS(566), 1,
      anon_sym_RBRACE,
    STATE(222), 1,
      sym_state_name,
    STATE(229), 1,
      sym_state_hide_empty_description,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    STATE(65), 2,
      sym__state_stmt,
      aux_sym_state_composite_body_repeat1,
    STATE(231), 4,
      sym_state_direction_tb,
      sym_state_direction_bt,
      sym_state_direction_rl,
      sym_state_direction_lr,
    STATE(230), 8,
      sym_state_division,
      sym__state_direction,
      sym_state_stmt_simple,
      sym_state_stmt_arrow,
      sym_state_stmt_composite,
      sym_state_stmt_annotation,
      sym_state_stmt_hide_empty_description,
      sym_state_note,
  [6312] = 18,
    ACTIONS(503), 1,
      anon_sym_DASH_DASH,
    ACTIONS(505), 1,
      anon_sym_LBRACK_STAR_RBRACK,
    ACTIONS(507), 1,
      aux_sym_state_name_token1,
    ACTIONS(509), 1,
      aux_sym_state_hide_empty_description_token1,
    ACTIONS(511), 1,
      aux_sym_state_direction_tb_token1,
    ACTIONS(513), 1,
      aux_sym_state_direction_bt_token1,
    ACTIONS(515), 1,
      aux_sym_state_direction_rl_token1,
    ACTIONS(517), 1,
      aux_sym_state_direction_lr_token1,
    ACTIONS(521), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(523), 1,
      aux_sym_state_stmt_simple_token1,
    ACTIONS(564), 1,
      sym__newline,
    ACTIONS(566), 1,
      anon_sym_RBRACE,
    STATE(222), 1,
      sym_state_name,
    STATE(229), 1,
      sym_state_hide_empty_description,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    STATE(64), 2,
      sym__state_stmt,
      aux_sym_state_composite_body_repeat1,
    STATE(231), 4,
      sym_state_direction_tb,
      sym_state_direction_bt,
      sym_state_direction_rl,
      sym_state_direction_lr,
    STATE(230), 8,
      sym_state_division,
      sym__state_direction,
      sym_state_stmt_simple,
      sym_state_stmt_arrow,
      sym_state_stmt_composite,
      sym_state_stmt_annotation,
      sym_state_stmt_hide_empty_description,
      sym_state_note,
  [6379] = 17,
    ACTIONS(503), 1,
      anon_sym_DASH_DASH,
    ACTIONS(505), 1,
      anon_sym_LBRACK_STAR_RBRACK,
    ACTIONS(507), 1,
      aux_sym_state_name_token1,
    ACTIONS(509), 1,
      aux_sym_state_hide_empty_description_token1,
    ACTIONS(511), 1,
      aux_sym_state_direction_tb_token1,
    ACTIONS(513), 1,
      aux_sym_state_direction_bt_token1,
    ACTIONS(515), 1,
      aux_sym_state_direction_rl_token1,
    ACTIONS(517), 1,
      aux_sym_state_direction_lr_token1,
    ACTIONS(521), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(523), 1,
      aux_sym_state_stmt_simple_token1,
    ACTIONS(568), 1,
      anon_sym_RBRACE,
    STATE(222), 1,
      sym_state_name,
    STATE(229), 1,
      sym_state_hide_empty_description,
    STATE(268), 1,
      sym__state_stmt,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    STATE(231), 4,
      sym_state_direction_tb,
      sym_state_direction_bt,
      sym_state_direction_rl,
      sym_state_direction_lr,
    STATE(230), 8,
      sym_state_division,
      sym__state_direction,
      sym_state_stmt_simple,
      sym_state_stmt_arrow,
      sym_state_stmt_composite,
      sym_state_stmt_annotation,
      sym_state_stmt_hide_empty_description,
      sym_state_note,
  [6442] = 17,
    ACTIONS(570), 1,
      ts_builtin_sym_end,
    ACTIONS(572), 1,
      sym__newline,
    ACTIONS(575), 1,
      aux_sym_gantt_task_text_token1,
    ACTIONS(578), 1,
      aux_sym_gantt_stmt_dateformat_token1,
    ACTIONS(581), 1,
      aux_sym_gantt_stmt_inclusiveenddates_token1,
    ACTIONS(584), 1,
      aux_sym_gantt_stmt_topaxis_token1,
    ACTIONS(587), 1,
      aux_sym_gantt_stmt_axisformat_token1,
    ACTIONS(590), 1,
      aux_sym_gantt_stmt_includes_token1,
    ACTIONS(593), 1,
      aux_sym_gantt_stmt_excludes_token1,
    ACTIONS(596), 1,
      aux_sym_gantt_stmt_todaymarker_token1,
    ACTIONS(599), 1,
      aux_sym_gantt_stmt_title_token1,
    ACTIONS(602), 1,
      aux_sym_gantt_stmt_section_token1,
    STATE(572), 1,
      aux_sym_gantt_task_text_repeat1,
    STATE(851), 1,
      sym_gantt_task_text,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    STATE(69), 2,
      sym__gantt_stmt,
      aux_sym_diagram_gantt_repeat1,
    STATE(276), 10,
      sym_gantt_stmt_dateformat,
      sym_gantt_stmt_inclusiveenddates,
      sym_gantt_stmt_topaxis,
      sym_gantt_stmt_axisformat,
      sym_gantt_stmt_includes,
      sym_gantt_stmt_excludes,
      sym_gantt_stmt_todaymarker,
      sym_gantt_stmt_title,
      sym_gantt_stmt_section,
      sym_gantt_stmt_task,
  [6505] = 17,
    ACTIONS(503), 1,
      anon_sym_DASH_DASH,
    ACTIONS(509), 1,
      aux_sym_state_hide_empty_description_token1,
    ACTIONS(511), 1,
      aux_sym_state_direction_tb_token1,
    ACTIONS(513), 1,
      aux_sym_state_direction_bt_token1,
    ACTIONS(515), 1,
      aux_sym_state_direction_rl_token1,
    ACTIONS(517), 1,
      aux_sym_state_direction_lr_token1,
    ACTIONS(523), 1,
      aux_sym_state_stmt_simple_token1,
    ACTIONS(605), 1,
      ts_builtin_sym_end,
    ACTIONS(607), 1,
      anon_sym_LBRACK_STAR_RBRACK,
    ACTIONS(609), 1,
      aux_sym_state_name_token1,
    ACTIONS(611), 1,
      aux_sym_sequence_stmt_note_token1,
    STATE(229), 1,
      sym_state_hide_empty_description,
    STATE(392), 1,
      sym_state_name,
    STATE(677), 1,
      sym__state_stmt,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    STATE(231), 4,
      sym_state_direction_tb,
      sym_state_direction_bt,
      sym_state_direction_rl,
      sym_state_direction_lr,
    STATE(230), 8,
      sym_state_division,
      sym__state_direction,
      sym_state_stmt_simple,
      sym_state_stmt_arrow,
      sym_state_stmt_composite,
      sym_state_stmt_annotation,
      sym_state_stmt_hide_empty_description,
      sym_state_note,
  [6568] = 17,
    ACTIONS(613), 1,
      ts_builtin_sym_end,
    ACTIONS(615), 1,
      sym__newline,
    ACTIONS(617), 1,
      aux_sym_gantt_task_text_token1,
    ACTIONS(619), 1,
      aux_sym_gantt_stmt_dateformat_token1,
    ACTIONS(621), 1,
      aux_sym_gantt_stmt_inclusiveenddates_token1,
    ACTIONS(623), 1,
      aux_sym_gantt_stmt_topaxis_token1,
    ACTIONS(625), 1,
      aux_sym_gantt_stmt_axisformat_token1,
    ACTIONS(627), 1,
      aux_sym_gantt_stmt_includes_token1,
    ACTIONS(629), 1,
      aux_sym_gantt_stmt_excludes_token1,
    ACTIONS(631), 1,
      aux_sym_gantt_stmt_todaymarker_token1,
    ACTIONS(633), 1,
      aux_sym_gantt_stmt_title_token1,
    ACTIONS(635), 1,
      aux_sym_gantt_stmt_section_token1,
    STATE(572), 1,
      aux_sym_gantt_task_text_repeat1,
    STATE(851), 1,
      sym_gantt_task_text,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    STATE(74), 2,
      sym__gantt_stmt,
      aux_sym_diagram_gantt_repeat1,
    STATE(276), 10,
      sym_gantt_stmt_dateformat,
      sym_gantt_stmt_inclusiveenddates,
      sym_gantt_stmt_topaxis,
      sym_gantt_stmt_axisformat,
      sym_gantt_stmt_includes,
      sym_gantt_stmt_excludes,
      sym_gantt_stmt_todaymarker,
      sym_gantt_stmt_title,
      sym_gantt_stmt_section,
      sym_gantt_stmt_task,
  [6631] = 17,
    ACTIONS(503), 1,
      anon_sym_DASH_DASH,
    ACTIONS(505), 1,
      anon_sym_LBRACK_STAR_RBRACK,
    ACTIONS(507), 1,
      aux_sym_state_name_token1,
    ACTIONS(509), 1,
      aux_sym_state_hide_empty_description_token1,
    ACTIONS(511), 1,
      aux_sym_state_direction_tb_token1,
    ACTIONS(513), 1,
      aux_sym_state_direction_bt_token1,
    ACTIONS(515), 1,
      aux_sym_state_direction_rl_token1,
    ACTIONS(517), 1,
      aux_sym_state_direction_lr_token1,
    ACTIONS(521), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(523), 1,
      aux_sym_state_stmt_simple_token1,
    ACTIONS(527), 1,
      anon_sym_RBRACE,
    STATE(222), 1,
      sym_state_name,
    STATE(229), 1,
      sym_state_hide_empty_description,
    STATE(268), 1,
      sym__state_stmt,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    STATE(231), 4,
      sym_state_direction_tb,
      sym_state_direction_bt,
      sym_state_direction_rl,
      sym_state_direction_lr,
    STATE(230), 8,
      sym_state_division,
      sym__state_direction,
      sym_state_stmt_simple,
      sym_state_stmt_arrow,
      sym_state_stmt_composite,
      sym_state_stmt_annotation,
      sym_state_stmt_hide_empty_description,
      sym_state_note,
  [6694] = 17,
    ACTIONS(503), 1,
      anon_sym_DASH_DASH,
    ACTIONS(509), 1,
      aux_sym_state_hide_empty_description_token1,
    ACTIONS(511), 1,
      aux_sym_state_direction_tb_token1,
    ACTIONS(513), 1,
      aux_sym_state_direction_bt_token1,
    ACTIONS(515), 1,
      aux_sym_state_direction_rl_token1,
    ACTIONS(517), 1,
      aux_sym_state_direction_lr_token1,
    ACTIONS(523), 1,
      aux_sym_state_stmt_simple_token1,
    ACTIONS(607), 1,
      anon_sym_LBRACK_STAR_RBRACK,
    ACTIONS(609), 1,
      aux_sym_state_name_token1,
    ACTIONS(611), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(637), 1,
      sym__newline,
    STATE(229), 1,
      sym_state_hide_empty_description,
    STATE(392), 1,
      sym_state_name,
    STATE(525), 1,
      sym__state_stmt,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    STATE(231), 4,
      sym_state_direction_tb,
      sym_state_direction_bt,
      sym_state_direction_rl,
      sym_state_direction_lr,
    STATE(230), 8,
      sym_state_division,
      sym__state_direction,
      sym_state_stmt_simple,
      sym_state_stmt_arrow,
      sym_state_stmt_composite,
      sym_state_stmt_annotation,
      sym_state_stmt_hide_empty_description,
      sym_state_note,
  [6757] = 17,
    ACTIONS(617), 1,
      aux_sym_gantt_task_text_token1,
    ACTIONS(619), 1,
      aux_sym_gantt_stmt_dateformat_token1,
    ACTIONS(621), 1,
      aux_sym_gantt_stmt_inclusiveenddates_token1,
    ACTIONS(623), 1,
      aux_sym_gantt_stmt_topaxis_token1,
    ACTIONS(625), 1,
      aux_sym_gantt_stmt_axisformat_token1,
    ACTIONS(627), 1,
      aux_sym_gantt_stmt_includes_token1,
    ACTIONS(629), 1,
      aux_sym_gantt_stmt_excludes_token1,
    ACTIONS(631), 1,
      aux_sym_gantt_stmt_todaymarker_token1,
    ACTIONS(633), 1,
      aux_sym_gantt_stmt_title_token1,
    ACTIONS(635), 1,
      aux_sym_gantt_stmt_section_token1,
    ACTIONS(639), 1,
      ts_builtin_sym_end,
    ACTIONS(641), 1,
      sym__newline,
    STATE(572), 1,
      aux_sym_gantt_task_text_repeat1,
    STATE(851), 1,
      sym_gantt_task_text,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    STATE(69), 2,
      sym__gantt_stmt,
      aux_sym_diagram_gantt_repeat1,
    STATE(276), 10,
      sym_gantt_stmt_dateformat,
      sym_gantt_stmt_inclusiveenddates,
      sym_gantt_stmt_topaxis,
      sym_gantt_stmt_axisformat,
      sym_gantt_stmt_includes,
      sym_gantt_stmt_excludes,
      sym_gantt_stmt_todaymarker,
      sym_gantt_stmt_title,
      sym_gantt_stmt_section,
      sym_gantt_stmt_task,
  [6820] = 17,
    ACTIONS(503), 1,
      anon_sym_DASH_DASH,
    ACTIONS(509), 1,
      aux_sym_state_hide_empty_description_token1,
    ACTIONS(511), 1,
      aux_sym_state_direction_tb_token1,
    ACTIONS(513), 1,
      aux_sym_state_direction_bt_token1,
    ACTIONS(515), 1,
      aux_sym_state_direction_rl_token1,
    ACTIONS(517), 1,
      aux_sym_state_direction_lr_token1,
    ACTIONS(523), 1,
      aux_sym_state_stmt_simple_token1,
    ACTIONS(607), 1,
      anon_sym_LBRACK_STAR_RBRACK,
    ACTIONS(609), 1,
      aux_sym_state_name_token1,
    ACTIONS(611), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(643), 1,
      ts_builtin_sym_end,
    STATE(229), 1,
      sym_state_hide_empty_description,
    STATE(392), 1,
      sym_state_name,
    STATE(677), 1,
      sym__state_stmt,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    STATE(231), 4,
      sym_state_direction_tb,
      sym_state_direction_bt,
      sym_state_direction_rl,
      sym_state_direction_lr,
    STATE(230), 8,
      sym_state_division,
      sym__state_direction,
      sym_state_stmt_simple,
      sym_state_stmt_arrow,
      sym_state_stmt_composite,
      sym_state_stmt_annotation,
      sym_state_stmt_hide_empty_description,
      sym_state_note,
  [6883] = 17,
    ACTIONS(503), 1,
      anon_sym_DASH_DASH,
    ACTIONS(505), 1,
      anon_sym_LBRACK_STAR_RBRACK,
    ACTIONS(507), 1,
      aux_sym_state_name_token1,
    ACTIONS(509), 1,
      aux_sym_state_hide_empty_description_token1,
    ACTIONS(511), 1,
      aux_sym_state_direction_tb_token1,
    ACTIONS(513), 1,
      aux_sym_state_direction_bt_token1,
    ACTIONS(515), 1,
      aux_sym_state_direction_rl_token1,
    ACTIONS(517), 1,
      aux_sym_state_direction_lr_token1,
    ACTIONS(521), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(523), 1,
      aux_sym_state_stmt_simple_token1,
    ACTIONS(645), 1,
      sym__newline,
    STATE(63), 1,
      sym__state_stmt,
    STATE(222), 1,
      sym_state_name,
    STATE(229), 1,
      sym_state_hide_empty_description,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    STATE(231), 4,
      sym_state_direction_tb,
      sym_state_direction_bt,
      sym_state_direction_rl,
      sym_state_direction_lr,
    STATE(230), 8,
      sym_state_division,
      sym__state_direction,
      sym_state_stmt_simple,
      sym_state_stmt_arrow,
      sym_state_stmt_composite,
      sym_state_stmt_annotation,
      sym_state_stmt_hide_empty_description,
      sym_state_note,
  [6946] = 17,
    ACTIONS(503), 1,
      anon_sym_DASH_DASH,
    ACTIONS(505), 1,
      anon_sym_LBRACK_STAR_RBRACK,
    ACTIONS(507), 1,
      aux_sym_state_name_token1,
    ACTIONS(509), 1,
      aux_sym_state_hide_empty_description_token1,
    ACTIONS(511), 1,
      aux_sym_state_direction_tb_token1,
    ACTIONS(513), 1,
      aux_sym_state_direction_bt_token1,
    ACTIONS(515), 1,
      aux_sym_state_direction_rl_token1,
    ACTIONS(517), 1,
      aux_sym_state_direction_lr_token1,
    ACTIONS(521), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(523), 1,
      aux_sym_state_stmt_simple_token1,
    ACTIONS(566), 1,
      anon_sym_RBRACE,
    STATE(222), 1,
      sym_state_name,
    STATE(229), 1,
      sym_state_hide_empty_description,
    STATE(268), 1,
      sym__state_stmt,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    STATE(231), 4,
      sym_state_direction_tb,
      sym_state_direction_bt,
      sym_state_direction_rl,
      sym_state_direction_lr,
    STATE(230), 8,
      sym_state_division,
      sym__state_direction,
      sym_state_stmt_simple,
      sym_state_stmt_arrow,
      sym_state_stmt_composite,
      sym_state_stmt_annotation,
      sym_state_stmt_hide_empty_description,
      sym_state_note,
  [7009] = 17,
    ACTIONS(503), 1,
      anon_sym_DASH_DASH,
    ACTIONS(509), 1,
      aux_sym_state_hide_empty_description_token1,
    ACTIONS(511), 1,
      aux_sym_state_direction_tb_token1,
    ACTIONS(513), 1,
      aux_sym_state_direction_bt_token1,
    ACTIONS(515), 1,
      aux_sym_state_direction_rl_token1,
    ACTIONS(517), 1,
      aux_sym_state_direction_lr_token1,
    ACTIONS(523), 1,
      aux_sym_state_stmt_simple_token1,
    ACTIONS(607), 1,
      anon_sym_LBRACK_STAR_RBRACK,
    ACTIONS(609), 1,
      aux_sym_state_name_token1,
    ACTIONS(611), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(647), 1,
      ts_builtin_sym_end,
    STATE(229), 1,
      sym_state_hide_empty_description,
    STATE(392), 1,
      sym_state_name,
    STATE(677), 1,
      sym__state_stmt,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    STATE(231), 4,
      sym_state_direction_tb,
      sym_state_direction_bt,
      sym_state_direction_rl,
      sym_state_direction_lr,
    STATE(230), 8,
      sym_state_division,
      sym__state_direction,
      sym_state_stmt_simple,
      sym_state_stmt_arrow,
      sym_state_stmt_composite,
      sym_state_stmt_annotation,
      sym_state_stmt_hide_empty_description,
      sym_state_note,
  [7072] = 16,
    ACTIONS(503), 1,
      anon_sym_DASH_DASH,
    ACTIONS(509), 1,
      aux_sym_state_hide_empty_description_token1,
    ACTIONS(511), 1,
      aux_sym_state_direction_tb_token1,
    ACTIONS(513), 1,
      aux_sym_state_direction_bt_token1,
    ACTIONS(515), 1,
      aux_sym_state_direction_rl_token1,
    ACTIONS(517), 1,
      aux_sym_state_direction_lr_token1,
    ACTIONS(523), 1,
      aux_sym_state_stmt_simple_token1,
    ACTIONS(607), 1,
      anon_sym_LBRACK_STAR_RBRACK,
    ACTIONS(609), 1,
      aux_sym_state_name_token1,
    ACTIONS(611), 1,
      aux_sym_sequence_stmt_note_token1,
    STATE(229), 1,
      sym_state_hide_empty_description,
    STATE(392), 1,
      sym_state_name,
    STATE(519), 1,
      sym__state_stmt,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    STATE(231), 4,
      sym_state_direction_tb,
      sym_state_direction_bt,
      sym_state_direction_rl,
      sym_state_direction_lr,
    STATE(230), 8,
      sym_state_division,
      sym__state_direction,
      sym_state_stmt_simple,
      sym_state_stmt_arrow,
      sym_state_stmt_composite,
      sym_state_stmt_annotation,
      sym_state_stmt_hide_empty_description,
      sym_state_note,
  [7132] = 16,
    ACTIONS(503), 1,
      anon_sym_DASH_DASH,
    ACTIONS(505), 1,
      anon_sym_LBRACK_STAR_RBRACK,
    ACTIONS(507), 1,
      aux_sym_state_name_token1,
    ACTIONS(509), 1,
      aux_sym_state_hide_empty_description_token1,
    ACTIONS(511), 1,
      aux_sym_state_direction_tb_token1,
    ACTIONS(513), 1,
      aux_sym_state_direction_bt_token1,
    ACTIONS(515), 1,
      aux_sym_state_direction_rl_token1,
    ACTIONS(517), 1,
      aux_sym_state_direction_lr_token1,
    ACTIONS(521), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(523), 1,
      aux_sym_state_stmt_simple_token1,
    STATE(67), 1,
      sym__state_stmt,
    STATE(222), 1,
      sym_state_name,
    STATE(229), 1,
      sym_state_hide_empty_description,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    STATE(231), 4,
      sym_state_direction_tb,
      sym_state_direction_bt,
      sym_state_direction_rl,
      sym_state_direction_lr,
    STATE(230), 8,
      sym_state_division,
      sym__state_direction,
      sym_state_stmt_simple,
      sym_state_stmt_arrow,
      sym_state_stmt_composite,
      sym_state_stmt_annotation,
      sym_state_stmt_hide_empty_description,
      sym_state_note,
  [7192] = 16,
    ACTIONS(503), 1,
      anon_sym_DASH_DASH,
    ACTIONS(509), 1,
      aux_sym_state_hide_empty_description_token1,
    ACTIONS(511), 1,
      aux_sym_state_direction_tb_token1,
    ACTIONS(513), 1,
      aux_sym_state_direction_bt_token1,
    ACTIONS(515), 1,
      aux_sym_state_direction_rl_token1,
    ACTIONS(517), 1,
      aux_sym_state_direction_lr_token1,
    ACTIONS(523), 1,
      aux_sym_state_stmt_simple_token1,
    ACTIONS(607), 1,
      anon_sym_LBRACK_STAR_RBRACK,
    ACTIONS(609), 1,
      aux_sym_state_name_token1,
    ACTIONS(611), 1,
      aux_sym_sequence_stmt_note_token1,
    STATE(229), 1,
      sym_state_hide_empty_description,
    STATE(392), 1,
      sym_state_name,
    STATE(677), 1,
      sym__state_stmt,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    STATE(231), 4,
      sym_state_direction_tb,
      sym_state_direction_bt,
      sym_state_direction_rl,
      sym_state_direction_lr,
    STATE(230), 8,
      sym_state_division,
      sym__state_direction,
      sym_state_stmt_simple,
      sym_state_stmt_arrow,
      sym_state_stmt_composite,
      sym_state_stmt_annotation,
      sym_state_stmt_hide_empty_description,
      sym_state_note,
  [7252] = 16,
    ACTIONS(503), 1,
      anon_sym_DASH_DASH,
    ACTIONS(505), 1,
      anon_sym_LBRACK_STAR_RBRACK,
    ACTIONS(507), 1,
      aux_sym_state_name_token1,
    ACTIONS(509), 1,
      aux_sym_state_hide_empty_description_token1,
    ACTIONS(511), 1,
      aux_sym_state_direction_tb_token1,
    ACTIONS(513), 1,
      aux_sym_state_direction_bt_token1,
    ACTIONS(515), 1,
      aux_sym_state_direction_rl_token1,
    ACTIONS(517), 1,
      aux_sym_state_direction_lr_token1,
    ACTIONS(521), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(523), 1,
      aux_sym_state_stmt_simple_token1,
    STATE(222), 1,
      sym_state_name,
    STATE(229), 1,
      sym_state_hide_empty_description,
    STATE(268), 1,
      sym__state_stmt,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    STATE(231), 4,
      sym_state_direction_tb,
      sym_state_direction_bt,
      sym_state_direction_rl,
      sym_state_direction_lr,
    STATE(230), 8,
      sym_state_division,
      sym__state_direction,
      sym_state_stmt_simple,
      sym_state_stmt_arrow,
      sym_state_stmt_composite,
      sym_state_stmt_annotation,
      sym_state_stmt_hide_empty_description,
      sym_state_note,
  [7312] = 3,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(651), 6,
      aux_sym_flow_link_arrow_start_token1,
      aux_sym_flow_link_arrow_start_token2,
      aux_sym_flow_link_arrow_start_token3,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
    ACTIONS(649), 17,
      ts_builtin_sym_end,
      sym__newline,
      anon_sym_GT,
      aux_sym_flow_link_arrow_token1,
      aux_sym_flow_link_arrow_token2,
      aux_sym_flow_link_arrow_token3,
      anon_sym_SEMI,
      anon_sym_AMP,
      anon_sym_LPAREN_LPAREN,
      anon_sym_LPAREN_DASH,
      anon_sym_LPAREN_LBRACK,
      anon_sym_LBRACK_LBRACK,
      anon_sym_LBRACK_PIPE,
      anon_sym_LBRACK_LPAREN,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACK_SLASH,
      anon_sym_LBRACK_BSLASH,
  [7344] = 15,
    ACTIONS(7), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(11), 1,
      aux_sym_diagram_class_token1,
    ACTIONS(13), 1,
      aux_sym_diagram_class_token2,
    ACTIONS(15), 1,
      aux_sym_diagram_er_token1,
    ACTIONS(17), 1,
      aux_sym_diagram_flow_token1,
    ACTIONS(19), 1,
      aux_sym_diagram_gantt_token1,
    ACTIONS(21), 1,
      aux_sym_diagram_mindmap_token1,
    ACTIONS(23), 1,
      aux_sym_diagram_pie_token1,
    ACTIONS(25), 1,
      aux_sym_diagram_sequence_token1,
    ACTIONS(27), 1,
      aux_sym_diagram_state_token1,
    ACTIONS(29), 1,
      aux_sym_diagram_state_token2,
    ACTIONS(653), 1,
      sym__newline,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    STATE(224), 2,
      sym_directive,
      aux_sym_source_file_repeat1,
    STATE(762), 8,
      sym_diagram_class,
      sym_diagram_er,
      sym_diagram_flow,
      sym_diagram_gantt,
      sym_diagram_mindmap,
      sym_diagram_pie,
      sym_diagram_sequence,
      sym_diagram_state,
  [7399] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(657), 3,
      sym__sequence_actor_word,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(655), 18,
      sym__newline,
      aux_sym_gantt_stmt_title_token1,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_par_token2,
  [7431] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(661), 3,
      sym__sequence_actor_word,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(659), 18,
      sym__newline,
      aux_sym_gantt_stmt_title_token1,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_par_token2,
  [7463] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(665), 3,
      sym__sequence_actor_word,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(663), 18,
      sym__newline,
      aux_sym_gantt_stmt_title_token1,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_par_token2,
  [7495] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(669), 3,
      sym__sequence_actor_word,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(667), 18,
      sym__newline,
      aux_sym_gantt_stmt_title_token1,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_par_token2,
  [7527] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(673), 3,
      sym__sequence_actor_word,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(671), 18,
      sym__newline,
      aux_sym_gantt_stmt_title_token1,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_par_token2,
  [7559] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(677), 3,
      sym__sequence_actor_word,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(675), 18,
      sym__newline,
      aux_sym_gantt_stmt_title_token1,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_par_token2,
  [7591] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(681), 3,
      sym__sequence_actor_word,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(679), 18,
      sym__newline,
      aux_sym_gantt_stmt_title_token1,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_par_token2,
  [7623] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(685), 3,
      sym__sequence_actor_word,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(683), 18,
      sym__newline,
      aux_sym_gantt_stmt_title_token1,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_par_token2,
  [7655] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(689), 3,
      sym__sequence_actor_word,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(687), 18,
      sym__newline,
      aux_sym_gantt_stmt_title_token1,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_par_token2,
  [7687] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(693), 3,
      sym__sequence_actor_word,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(691), 18,
      sym__newline,
      aux_sym_gantt_stmt_title_token1,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_par_token2,
  [7719] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(697), 3,
      sym__sequence_actor_word,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(695), 18,
      sym__newline,
      aux_sym_gantt_stmt_title_token1,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_par_token2,
  [7751] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(701), 3,
      sym__sequence_actor_word,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(699), 18,
      sym__newline,
      aux_sym_gantt_stmt_title_token1,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_par_token2,
  [7783] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(705), 3,
      sym__sequence_actor_word,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(703), 18,
      sym__newline,
      aux_sym_gantt_stmt_title_token1,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_par_token2,
  [7815] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(709), 3,
      sym__sequence_actor_word,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(707), 18,
      sym__newline,
      aux_sym_gantt_stmt_title_token1,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_par_token2,
  [7847] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(713), 3,
      sym__sequence_actor_word,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(711), 18,
      sym__newline,
      aux_sym_gantt_stmt_title_token1,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_par_token2,
  [7879] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(717), 3,
      sym__sequence_actor_word,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(715), 18,
      sym__newline,
      aux_sym_gantt_stmt_title_token1,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_par_token2,
  [7911] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(721), 3,
      sym__sequence_actor_word,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(719), 18,
      sym__newline,
      aux_sym_gantt_stmt_title_token1,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_par_token2,
  [7943] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(725), 3,
      sym__sequence_actor_word,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(723), 18,
      sym__newline,
      aux_sym_gantt_stmt_title_token1,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_par_token2,
  [7975] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(729), 3,
      sym__sequence_actor_word,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(727), 18,
      sym__newline,
      aux_sym_gantt_stmt_title_token1,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_par_token2,
  [8007] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(733), 3,
      sym__sequence_actor_word,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(731), 18,
      sym__newline,
      aux_sym_gantt_stmt_title_token1,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_par_token2,
  [8039] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(737), 3,
      sym__sequence_actor_word,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(735), 18,
      sym__newline,
      aux_sym_gantt_stmt_title_token1,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_par_token2,
  [8071] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(741), 3,
      sym__sequence_actor_word,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(739), 18,
      sym__newline,
      aux_sym_gantt_stmt_title_token1,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_par_token2,
  [8103] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(745), 3,
      sym__sequence_actor_word,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(743), 18,
      sym__newline,
      aux_sym_gantt_stmt_title_token1,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_par_token2,
  [8135] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(749), 3,
      sym__sequence_actor_word,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(747), 18,
      sym__newline,
      aux_sym_gantt_stmt_title_token1,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_par_token2,
  [8167] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(753), 3,
      sym__sequence_actor_word,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(751), 18,
      sym__newline,
      aux_sym_gantt_stmt_title_token1,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_par_token2,
  [8199] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(757), 3,
      sym__sequence_actor_word,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(755), 18,
      sym__newline,
      aux_sym_gantt_stmt_title_token1,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_par_token2,
  [8231] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(761), 3,
      sym__sequence_actor_word,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(759), 18,
      sym__newline,
      aux_sym_gantt_stmt_title_token1,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_par_token2,
  [8263] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(765), 3,
      sym__sequence_actor_word,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(763), 18,
      sym__newline,
      aux_sym_gantt_stmt_title_token1,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_par_token2,
  [8295] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(769), 3,
      sym__sequence_actor_word,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(767), 18,
      sym__newline,
      aux_sym_gantt_stmt_title_token1,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_par_token2,
  [8327] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(773), 3,
      sym__sequence_actor_word,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(771), 18,
      sym__newline,
      aux_sym_gantt_stmt_title_token1,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_par_token2,
  [8359] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(777), 3,
      sym__sequence_actor_word,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(775), 18,
      sym__newline,
      aux_sym_gantt_stmt_title_token1,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_par_token2,
  [8391] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(769), 3,
      sym__sequence_actor_word,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(767), 18,
      sym__newline,
      aux_sym_gantt_stmt_title_token1,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_alt_token2,
  [8423] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(657), 3,
      sym__sequence_actor_word,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(655), 18,
      sym__newline,
      aux_sym_gantt_stmt_title_token1,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_alt_token2,
  [8455] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(661), 3,
      sym__sequence_actor_word,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(659), 18,
      sym__newline,
      aux_sym_gantt_stmt_title_token1,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_alt_token2,
  [8487] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(665), 3,
      sym__sequence_actor_word,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(663), 18,
      sym__newline,
      aux_sym_gantt_stmt_title_token1,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_alt_token2,
  [8519] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(669), 3,
      sym__sequence_actor_word,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(667), 18,
      sym__newline,
      aux_sym_gantt_stmt_title_token1,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_alt_token2,
  [8551] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(673), 3,
      sym__sequence_actor_word,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(671), 18,
      sym__newline,
      aux_sym_gantt_stmt_title_token1,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_alt_token2,
  [8583] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(677), 3,
      sym__sequence_actor_word,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(675), 18,
      sym__newline,
      aux_sym_gantt_stmt_title_token1,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_alt_token2,
  [8615] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(681), 3,
      sym__sequence_actor_word,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(679), 18,
      sym__newline,
      aux_sym_gantt_stmt_title_token1,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_alt_token2,
  [8647] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(685), 3,
      sym__sequence_actor_word,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(683), 18,
      sym__newline,
      aux_sym_gantt_stmt_title_token1,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_alt_token2,
  [8679] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(689), 3,
      sym__sequence_actor_word,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(687), 18,
      sym__newline,
      aux_sym_gantt_stmt_title_token1,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_alt_token2,
  [8711] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(693), 3,
      sym__sequence_actor_word,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(691), 18,
      sym__newline,
      aux_sym_gantt_stmt_title_token1,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_alt_token2,
  [8743] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(697), 3,
      sym__sequence_actor_word,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(695), 18,
      sym__newline,
      aux_sym_gantt_stmt_title_token1,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_alt_token2,
  [8775] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(701), 3,
      sym__sequence_actor_word,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(699), 18,
      sym__newline,
      aux_sym_gantt_stmt_title_token1,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_alt_token2,
  [8807] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(705), 3,
      sym__sequence_actor_word,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(703), 18,
      sym__newline,
      aux_sym_gantt_stmt_title_token1,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_alt_token2,
  [8839] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(709), 3,
      sym__sequence_actor_word,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(707), 18,
      sym__newline,
      aux_sym_gantt_stmt_title_token1,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_alt_token2,
  [8871] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(713), 3,
      sym__sequence_actor_word,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(711), 18,
      sym__newline,
      aux_sym_gantt_stmt_title_token1,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_alt_token2,
  [8903] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(717), 3,
      sym__sequence_actor_word,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(715), 18,
      sym__newline,
      aux_sym_gantt_stmt_title_token1,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_alt_token2,
  [8935] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(721), 3,
      sym__sequence_actor_word,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(719), 18,
      sym__newline,
      aux_sym_gantt_stmt_title_token1,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_alt_token2,
  [8967] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(725), 3,
      sym__sequence_actor_word,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(723), 18,
      sym__newline,
      aux_sym_gantt_stmt_title_token1,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_alt_token2,
  [8999] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(729), 3,
      sym__sequence_actor_word,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(727), 18,
      sym__newline,
      aux_sym_gantt_stmt_title_token1,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_alt_token2,
  [9031] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(733), 3,
      sym__sequence_actor_word,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(731), 18,
      sym__newline,
      aux_sym_gantt_stmt_title_token1,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_alt_token2,
  [9063] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(737), 3,
      sym__sequence_actor_word,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(735), 18,
      sym__newline,
      aux_sym_gantt_stmt_title_token1,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_alt_token2,
  [9095] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(741), 3,
      sym__sequence_actor_word,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(739), 18,
      sym__newline,
      aux_sym_gantt_stmt_title_token1,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_alt_token2,
  [9127] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(745), 3,
      sym__sequence_actor_word,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(743), 18,
      sym__newline,
      aux_sym_gantt_stmt_title_token1,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_alt_token2,
  [9159] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(749), 3,
      sym__sequence_actor_word,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(747), 18,
      sym__newline,
      aux_sym_gantt_stmt_title_token1,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_alt_token2,
  [9191] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(753), 3,
      sym__sequence_actor_word,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(751), 18,
      sym__newline,
      aux_sym_gantt_stmt_title_token1,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_alt_token2,
  [9223] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(757), 3,
      sym__sequence_actor_word,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(755), 18,
      sym__newline,
      aux_sym_gantt_stmt_title_token1,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_alt_token2,
  [9255] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(761), 3,
      sym__sequence_actor_word,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(759), 18,
      sym__newline,
      aux_sym_gantt_stmt_title_token1,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_alt_token2,
  [9287] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(765), 3,
      sym__sequence_actor_word,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(763), 18,
      sym__newline,
      aux_sym_gantt_stmt_title_token1,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_alt_token2,
  [9319] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(781), 3,
      sym__sequence_actor_word,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(779), 18,
      sym__newline,
      aux_sym_gantt_stmt_title_token1,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_alt_token2,
  [9351] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(773), 3,
      sym__sequence_actor_word,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(771), 18,
      sym__newline,
      aux_sym_gantt_stmt_title_token1,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_alt_token2,
  [9383] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(777), 3,
      sym__sequence_actor_word,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(775), 18,
      sym__newline,
      aux_sym_gantt_stmt_title_token1,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_alt_token2,
  [9415] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(781), 3,
      sym__sequence_actor_word,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(779), 18,
      sym__newline,
      aux_sym_gantt_stmt_title_token1,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_par_token2,
  [9447] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(701), 3,
      sym__sequence_actor_word,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(699), 17,
      sym__newline,
      aux_sym_gantt_stmt_title_token1,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
  [9478] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(689), 3,
      sym__sequence_actor_word,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(687), 17,
      ts_builtin_sym_end,
      sym__newline,
      aux_sym_gantt_stmt_title_token1,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
  [9509] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(677), 3,
      sym__sequence_actor_word,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(675), 17,
      sym__newline,
      aux_sym_gantt_stmt_title_token1,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
  [9540] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(681), 3,
      sym__sequence_actor_word,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(679), 17,
      sym__newline,
      aux_sym_gantt_stmt_title_token1,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
  [9571] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(685), 3,
      sym__sequence_actor_word,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(683), 17,
      sym__newline,
      aux_sym_gantt_stmt_title_token1,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
  [9602] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(689), 3,
      sym__sequence_actor_word,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(687), 17,
      sym__newline,
      aux_sym_gantt_stmt_title_token1,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
  [9633] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(693), 3,
      sym__sequence_actor_word,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(691), 17,
      sym__newline,
      aux_sym_gantt_stmt_title_token1,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
  [9664] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(697), 3,
      sym__sequence_actor_word,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(695), 17,
      sym__newline,
      aux_sym_gantt_stmt_title_token1,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
  [9695] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(661), 3,
      sym__sequence_actor_word,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(659), 17,
      ts_builtin_sym_end,
      sym__newline,
      aux_sym_gantt_stmt_title_token1,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
  [9726] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(705), 3,
      sym__sequence_actor_word,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(703), 17,
      sym__newline,
      aux_sym_gantt_stmt_title_token1,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
  [9757] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(709), 3,
      sym__sequence_actor_word,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(707), 17,
      sym__newline,
      aux_sym_gantt_stmt_title_token1,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
  [9788] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(713), 3,
      sym__sequence_actor_word,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(711), 17,
      sym__newline,
      aux_sym_gantt_stmt_title_token1,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
  [9819] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(717), 3,
      sym__sequence_actor_word,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(715), 17,
      sym__newline,
      aux_sym_gantt_stmt_title_token1,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
  [9850] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(721), 3,
      sym__sequence_actor_word,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(719), 17,
      sym__newline,
      aux_sym_gantt_stmt_title_token1,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
  [9881] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(725), 3,
      sym__sequence_actor_word,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(723), 17,
      sym__newline,
      aux_sym_gantt_stmt_title_token1,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
  [9912] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(729), 3,
      sym__sequence_actor_word,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(727), 17,
      sym__newline,
      aux_sym_gantt_stmt_title_token1,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
  [9943] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(733), 3,
      sym__sequence_actor_word,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(731), 17,
      sym__newline,
      aux_sym_gantt_stmt_title_token1,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
  [9974] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(737), 3,
      sym__sequence_actor_word,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(735), 17,
      sym__newline,
      aux_sym_gantt_stmt_title_token1,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
  [10005] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(741), 3,
      sym__sequence_actor_word,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(739), 17,
      sym__newline,
      aux_sym_gantt_stmt_title_token1,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
  [10036] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(745), 3,
      sym__sequence_actor_word,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(743), 17,
      sym__newline,
      aux_sym_gantt_stmt_title_token1,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
  [10067] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(749), 3,
      sym__sequence_actor_word,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(747), 17,
      sym__newline,
      aux_sym_gantt_stmt_title_token1,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
  [10098] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(753), 3,
      sym__sequence_actor_word,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(751), 17,
      sym__newline,
      aux_sym_gantt_stmt_title_token1,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
  [10129] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(757), 3,
      sym__sequence_actor_word,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(755), 17,
      sym__newline,
      aux_sym_gantt_stmt_title_token1,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
  [10160] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(761), 3,
      sym__sequence_actor_word,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(759), 17,
      sym__newline,
      aux_sym_gantt_stmt_title_token1,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
  [10191] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(765), 3,
      sym__sequence_actor_word,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(763), 17,
      sym__newline,
      aux_sym_gantt_stmt_title_token1,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
  [10222] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(781), 3,
      sym__sequence_actor_word,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(779), 17,
      sym__newline,
      aux_sym_gantt_stmt_title_token1,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
  [10253] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(769), 3,
      sym__sequence_actor_word,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(767), 17,
      sym__newline,
      aux_sym_gantt_stmt_title_token1,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
  [10284] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(693), 3,
      sym__sequence_actor_word,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(691), 17,
      ts_builtin_sym_end,
      sym__newline,
      aux_sym_gantt_stmt_title_token1,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
  [10315] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(773), 3,
      sym__sequence_actor_word,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(771), 17,
      sym__newline,
      aux_sym_gantt_stmt_title_token1,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
  [10346] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(777), 3,
      sym__sequence_actor_word,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(775), 17,
      sym__newline,
      aux_sym_gantt_stmt_title_token1,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
  [10377] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(697), 3,
      sym__sequence_actor_word,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(695), 17,
      ts_builtin_sym_end,
      sym__newline,
      aux_sym_gantt_stmt_title_token1,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
  [10408] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(701), 3,
      sym__sequence_actor_word,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(699), 17,
      ts_builtin_sym_end,
      sym__newline,
      aux_sym_gantt_stmt_title_token1,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
  [10439] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(705), 3,
      sym__sequence_actor_word,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(703), 17,
      ts_builtin_sym_end,
      sym__newline,
      aux_sym_gantt_stmt_title_token1,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
  [10470] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(709), 3,
      sym__sequence_actor_word,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(707), 17,
      ts_builtin_sym_end,
      sym__newline,
      aux_sym_gantt_stmt_title_token1,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
  [10501] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(713), 3,
      sym__sequence_actor_word,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(711), 17,
      ts_builtin_sym_end,
      sym__newline,
      aux_sym_gantt_stmt_title_token1,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
  [10532] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(717), 3,
      sym__sequence_actor_word,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(715), 17,
      ts_builtin_sym_end,
      sym__newline,
      aux_sym_gantt_stmt_title_token1,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
  [10563] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(673), 3,
      sym__sequence_actor_word,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(671), 17,
      sym__newline,
      aux_sym_gantt_stmt_title_token1,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
  [10594] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(725), 3,
      sym__sequence_actor_word,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(723), 17,
      ts_builtin_sym_end,
      sym__newline,
      aux_sym_gantt_stmt_title_token1,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
  [10625] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(729), 3,
      sym__sequence_actor_word,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(727), 17,
      ts_builtin_sym_end,
      sym__newline,
      aux_sym_gantt_stmt_title_token1,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
  [10656] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(733), 3,
      sym__sequence_actor_word,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(731), 17,
      ts_builtin_sym_end,
      sym__newline,
      aux_sym_gantt_stmt_title_token1,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
  [10687] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(737), 3,
      sym__sequence_actor_word,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(735), 17,
      ts_builtin_sym_end,
      sym__newline,
      aux_sym_gantt_stmt_title_token1,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
  [10718] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(741), 3,
      sym__sequence_actor_word,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(739), 17,
      ts_builtin_sym_end,
      sym__newline,
      aux_sym_gantt_stmt_title_token1,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
  [10749] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(745), 3,
      sym__sequence_actor_word,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(743), 17,
      ts_builtin_sym_end,
      sym__newline,
      aux_sym_gantt_stmt_title_token1,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
  [10780] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(749), 3,
      sym__sequence_actor_word,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(747), 17,
      ts_builtin_sym_end,
      sym__newline,
      aux_sym_gantt_stmt_title_token1,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
  [10811] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(753), 3,
      sym__sequence_actor_word,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(751), 17,
      ts_builtin_sym_end,
      sym__newline,
      aux_sym_gantt_stmt_title_token1,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
  [10842] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(757), 3,
      sym__sequence_actor_word,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(755), 17,
      ts_builtin_sym_end,
      sym__newline,
      aux_sym_gantt_stmt_title_token1,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
  [10873] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(761), 3,
      sym__sequence_actor_word,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(759), 17,
      ts_builtin_sym_end,
      sym__newline,
      aux_sym_gantt_stmt_title_token1,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
  [10904] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(765), 3,
      sym__sequence_actor_word,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(763), 17,
      ts_builtin_sym_end,
      sym__newline,
      aux_sym_gantt_stmt_title_token1,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
  [10935] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(781), 3,
      sym__sequence_actor_word,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(779), 17,
      ts_builtin_sym_end,
      sym__newline,
      aux_sym_gantt_stmt_title_token1,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
  [10966] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(677), 3,
      sym__sequence_actor_word,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(675), 17,
      ts_builtin_sym_end,
      sym__newline,
      aux_sym_gantt_stmt_title_token1,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
  [10997] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(773), 3,
      sym__sequence_actor_word,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(771), 17,
      ts_builtin_sym_end,
      sym__newline,
      aux_sym_gantt_stmt_title_token1,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
  [11028] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(777), 3,
      sym__sequence_actor_word,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(775), 17,
      ts_builtin_sym_end,
      sym__newline,
      aux_sym_gantt_stmt_title_token1,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
  [11059] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(657), 3,
      sym__sequence_actor_word,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(655), 17,
      sym__newline,
      aux_sym_gantt_stmt_title_token1,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
  [11090] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(661), 3,
      sym__sequence_actor_word,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(659), 17,
      sym__newline,
      aux_sym_gantt_stmt_title_token1,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
  [11121] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(681), 3,
      sym__sequence_actor_word,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(679), 17,
      ts_builtin_sym_end,
      sym__newline,
      aux_sym_gantt_stmt_title_token1,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
  [11152] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(685), 3,
      sym__sequence_actor_word,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(683), 17,
      ts_builtin_sym_end,
      sym__newline,
      aux_sym_gantt_stmt_title_token1,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
  [11183] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(665), 3,
      sym__sequence_actor_word,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(663), 17,
      sym__newline,
      aux_sym_gantt_stmt_title_token1,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
  [11214] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(669), 3,
      sym__sequence_actor_word,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(667), 17,
      sym__newline,
      aux_sym_gantt_stmt_title_token1,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
  [11245] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(657), 3,
      sym__sequence_actor_word,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(655), 17,
      ts_builtin_sym_end,
      sym__newline,
      aux_sym_gantt_stmt_title_token1,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
  [11276] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(665), 3,
      sym__sequence_actor_word,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(663), 17,
      ts_builtin_sym_end,
      sym__newline,
      aux_sym_gantt_stmt_title_token1,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
  [11307] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(669), 3,
      sym__sequence_actor_word,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(667), 17,
      ts_builtin_sym_end,
      sym__newline,
      aux_sym_gantt_stmt_title_token1,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
  [11338] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(673), 3,
      sym__sequence_actor_word,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(671), 17,
      ts_builtin_sym_end,
      sym__newline,
      aux_sym_gantt_stmt_title_token1,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
  [11369] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(721), 3,
      sym__sequence_actor_word,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(719), 17,
      ts_builtin_sym_end,
      sym__newline,
      aux_sym_gantt_stmt_title_token1,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
  [11400] = 15,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(783), 1,
      ts_builtin_sym_end,
    ACTIONS(785), 1,
      sym__newline,
    ACTIONS(787), 1,
      anon_sym_LPAREN,
    ACTIONS(789), 1,
      anon_sym_RPAREN,
    ACTIONS(791), 1,
      anon_sym_LBRACK,
    ACTIONS(793), 1,
      anon_sym_LPAREN_LPAREN,
    ACTIONS(795), 1,
      anon_sym_RPAREN_RPAREN,
    ACTIONS(797), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(799), 1,
      aux_sym_mmap_class_token1,
    ACTIONS(801), 1,
      aux_sym_mmap_icon_token1,
    STATE(438), 1,
      sym_mmap_icon,
    STATE(745), 1,
      sym_mmap_class,
    STATE(385), 6,
      sym_mmap_node_square,
      sym_mmap_node_rounded,
      sym_mmap_node_circle,
      sym_mmap_node_cloud,
      sym_mmap_node_bang,
      sym_mmap_node_hexagon,
  [11451] = 15,
    ACTIONS(803), 1,
      sym__dquote_string,
    ACTIONS(805), 1,
      sym_class_reltype_aggregation,
    ACTIONS(809), 1,
      anon_sym_STAR,
    ACTIONS(811), 1,
      anon_sym_LT,
    ACTIONS(813), 1,
      anon_sym_GT,
    ACTIONS(815), 1,
      anon_sym_DASH_DASH,
    ACTIONS(817), 1,
      anon_sym_DOT_DOT,
    ACTIONS(819), 1,
      anon_sym_COLON,
    STATE(261), 1,
      sym__class_linetype,
    STATE(383), 1,
      sym_class_relation,
    STATE(415), 1,
      sym__class_reltype,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(807), 2,
      anon_sym_LT_PIPE,
      anon_sym_PIPE_GT,
    STATE(341), 2,
      sym_class_linetype_solid,
      sym_class_linetype_dotted,
    STATE(388), 3,
      sym_class_reltype_extension,
      sym_class_reltype_composition,
      sym_class_reltype_dependency,
  [11502] = 13,
    ACTIONS(805), 1,
      sym_class_reltype_aggregation,
    ACTIONS(809), 1,
      anon_sym_STAR,
    ACTIONS(811), 1,
      anon_sym_LT,
    ACTIONS(813), 1,
      anon_sym_GT,
    ACTIONS(815), 1,
      anon_sym_DASH_DASH,
    ACTIONS(817), 1,
      anon_sym_DOT_DOT,
    STATE(261), 1,
      sym__class_linetype,
    STATE(377), 1,
      sym_class_relation,
    STATE(415), 1,
      sym__class_reltype,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(807), 2,
      anon_sym_LT_PIPE,
      anon_sym_PIPE_GT,
    STATE(341), 2,
      sym_class_linetype_solid,
      sym_class_linetype_dotted,
    STATE(388), 3,
      sym_class_reltype_extension,
      sym_class_reltype_composition,
      sym_class_reltype_dependency,
  [11547] = 9,
    STATE(218), 1,
      aux_sym_flow_stmt_vertice_repeat1,
    STATE(437), 1,
      sym__flow_link,
    STATE(504), 1,
      sym_flow_link_arrow_start,
    STATE(714), 1,
      sym_flow_link_arrow,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(821), 3,
      ts_builtin_sym_end,
      sym__newline,
      anon_sym_SEMI,
    ACTIONS(823), 3,
      aux_sym_flow_link_arrow_token1,
      aux_sym_flow_link_arrow_token2,
      aux_sym_flow_link_arrow_token3,
    ACTIONS(825), 3,
      aux_sym_flow_link_arrow_start_token1,
      aux_sym_flow_link_arrow_start_token2,
      aux_sym_flow_link_arrow_start_token3,
    STATE(805), 3,
      sym_flow_link_simplelink,
      sym_flow_link_arrowtext,
      sym_flow_link_middletext,
  [11584] = 8,
    ACTIONS(827), 1,
      sym__newline,
    STATE(313), 1,
      sym__flowchart_direction,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(829), 2,
      anon_sym_LT,
      aux_sym_flowchart_direction_rl_token1,
    ACTIONS(835), 2,
      aux_sym_flowchart_direction_bt_token1,
      anon_sym_CARET,
    ACTIONS(831), 3,
      anon_sym_GT,
      aux_sym_flowchart_direction_lr_token1,
      aux_sym_flowchart_direction_lr_token2,
    ACTIONS(833), 3,
      aux_sym_flowchart_direction_tb_token1,
      aux_sym_flowchart_direction_tb_token2,
      anon_sym_v,
    STATE(374), 4,
      sym_flowchart_direction_lr,
      sym_flowchart_direction_rl,
      sym_flowchart_direction_tb,
      sym_flowchart_direction_bt,
  [11619] = 9,
    STATE(215), 1,
      aux_sym_flow_stmt_vertice_repeat1,
    STATE(437), 1,
      sym__flow_link,
    STATE(504), 1,
      sym_flow_link_arrow_start,
    STATE(714), 1,
      sym_flow_link_arrow,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(823), 3,
      aux_sym_flow_link_arrow_token1,
      aux_sym_flow_link_arrow_token2,
      aux_sym_flow_link_arrow_token3,
    ACTIONS(825), 3,
      aux_sym_flow_link_arrow_start_token1,
      aux_sym_flow_link_arrow_start_token2,
      aux_sym_flow_link_arrow_start_token3,
    ACTIONS(837), 3,
      ts_builtin_sym_end,
      sym__newline,
      anon_sym_SEMI,
    STATE(805), 3,
      sym_flow_link_simplelink,
      sym_flow_link_arrowtext,
      sym_flow_link_middletext,
  [11656] = 9,
    STATE(218), 1,
      aux_sym_flow_stmt_vertice_repeat1,
    STATE(437), 1,
      sym__flow_link,
    STATE(504), 1,
      sym_flow_link_arrow_start,
    STATE(714), 1,
      sym_flow_link_arrow,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(839), 3,
      ts_builtin_sym_end,
      sym__newline,
      anon_sym_SEMI,
    ACTIONS(841), 3,
      aux_sym_flow_link_arrow_token1,
      aux_sym_flow_link_arrow_token2,
      aux_sym_flow_link_arrow_token3,
    ACTIONS(844), 3,
      aux_sym_flow_link_arrow_start_token1,
      aux_sym_flow_link_arrow_start_token2,
      aux_sym_flow_link_arrow_start_token3,
    STATE(805), 3,
      sym_flow_link_simplelink,
      sym_flow_link_arrowtext,
      sym_flow_link_middletext,
  [11693] = 6,
    ACTIONS(849), 1,
      aux_sym_state_name_token1,
    ACTIONS(851), 1,
      anon_sym_LBRACE,
    ACTIONS(853), 1,
      aux_sym_sequence_stmt_participant_token1,
    STATE(236), 1,
      sym_state_composite_body,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(847), 12,
      ts_builtin_sym_end,
      sym__newline,
      anon_sym_DASH_DASH,
      anon_sym_LBRACK_STAR_RBRACK,
      aux_sym_state_hide_empty_description_token1,
      aux_sym_state_direction_tb_token1,
      aux_sym_state_direction_bt_token1,
      aux_sym_state_direction_rl_token1,
      aux_sym_state_direction_lr_token1,
      anon_sym_RBRACE,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_state_stmt_simple_token1,
  [11724] = 3,
    ACTIONS(857), 1,
      aux_sym_state_name_token1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(855), 14,
      ts_builtin_sym_end,
      sym__newline,
      anon_sym_DASH_DASH,
      anon_sym_LBRACK_STAR_RBRACK,
      aux_sym_state_hide_empty_description_token1,
      aux_sym_state_direction_tb_token1,
      aux_sym_state_direction_bt_token1,
      aux_sym_state_direction_rl_token1,
      aux_sym_state_direction_lr_token1,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      aux_sym_sequence_stmt_participant_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_state_stmt_simple_token1,
  [11748] = 7,
    STATE(495), 1,
      sym__flowchart_direction,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(829), 2,
      anon_sym_LT,
      aux_sym_flowchart_direction_rl_token1,
    ACTIONS(835), 2,
      aux_sym_flowchart_direction_bt_token1,
      anon_sym_CARET,
    ACTIONS(831), 3,
      anon_sym_GT,
      aux_sym_flowchart_direction_lr_token1,
      aux_sym_flowchart_direction_lr_token2,
    ACTIONS(833), 3,
      aux_sym_flowchart_direction_tb_token1,
      aux_sym_flowchart_direction_tb_token2,
      anon_sym_v,
    STATE(374), 4,
      sym_flowchart_direction_lr,
      sym_flowchart_direction_rl,
      sym_flowchart_direction_tb,
      sym_flowchart_direction_bt,
  [11780] = 6,
    ACTIONS(863), 1,
      anon_sym_DASH_DASH_GT,
    ACTIONS(865), 1,
      anon_sym_COLON,
    STATE(520), 1,
      sym_state_arrow,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(861), 2,
      anon_sym_DASH_DASH,
      aux_sym_state_name_token1,
    ACTIONS(859), 10,
      sym__newline,
      anon_sym_LBRACK_STAR_RBRACK,
      aux_sym_state_hide_empty_description_token1,
      aux_sym_state_direction_tb_token1,
      aux_sym_state_direction_bt_token1,
      aux_sym_state_direction_rl_token1,
      aux_sym_state_direction_lr_token1,
      anon_sym_RBRACE,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_state_stmt_simple_token1,
  [11810] = 10,
    ACTIONS(875), 1,
      sym_er_cardinarity_only_one,
    ACTIONS(877), 1,
      anon_sym_LBRACE,
    STATE(361), 1,
      sym__er_cardinarity,
    STATE(662), 1,
      sym_er_relation,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(867), 2,
      ts_builtin_sym_end,
      sym__newline,
    ACTIONS(869), 2,
      anon_sym_PIPEo,
      anon_sym_o_PIPE,
    ACTIONS(871), 2,
      anon_sym_RBRACEo,
      anon_sym_o_LBRACE,
    ACTIONS(873), 2,
      anon_sym_RBRACE_PIPE,
      anon_sym_PIPE_LBRACE,
    STATE(419), 3,
      sym_er_cardinarity_zero_or_one,
      sym_er_cardinarity_zero_or_more,
      sym_er_cardinarity_one_or_more,
  [11848] = 6,
    ACTIONS(879), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(882), 1,
      sym__newline,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(887), 2,
      aux_sym_diagram_class_token2,
      aux_sym_diagram_state_token1,
    STATE(224), 2,
      sym_directive,
      aux_sym_source_file_repeat1,
    ACTIONS(885), 8,
      aux_sym_diagram_class_token1,
      aux_sym_diagram_er_token1,
      aux_sym_diagram_flow_token1,
      aux_sym_diagram_gantt_token1,
      aux_sym_diagram_mindmap_token1,
      aux_sym_diagram_pie_token1,
      aux_sym_diagram_sequence_token1,
      aux_sym_diagram_state_token2,
  [11877] = 6,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(893), 1,
      aux_sym_class_label_token1,
    STATE(244), 1,
      sym_state_description,
    ACTIONS(891), 4,
      anon_sym_DASH_DASH,
      anon_sym_LBRACK_STAR_RBRACK,
      aux_sym_state_name_token1,
      anon_sym_RBRACE,
    ACTIONS(889), 8,
      sym__newline,
      aux_sym_state_hide_empty_description_token1,
      aux_sym_state_direction_tb_token1,
      aux_sym_state_direction_bt_token1,
      aux_sym_state_direction_rl_token1,
      aux_sym_state_direction_lr_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_state_stmt_simple_token1,
  [11906] = 4,
    ACTIONS(897), 1,
      aux_sym_state_name_token1,
    ACTIONS(899), 1,
      anon_sym_COLON,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(895), 12,
      ts_builtin_sym_end,
      sym__newline,
      anon_sym_DASH_DASH,
      anon_sym_LBRACK_STAR_RBRACK,
      aux_sym_state_hide_empty_description_token1,
      aux_sym_state_direction_tb_token1,
      aux_sym_state_direction_bt_token1,
      aux_sym_state_direction_rl_token1,
      aux_sym_state_direction_lr_token1,
      anon_sym_RBRACE,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_state_stmt_simple_token1,
  [11931] = 5,
    ACTIONS(903), 1,
      anon_sym_LT,
    ACTIONS(905), 1,
      anon_sym_TILDE,
    STATE(282), 1,
      sym_class_generics,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(901), 11,
      ts_builtin_sym_end,
      sym__newline,
      sym__dquote_string,
      sym_class_reltype_aggregation,
      anon_sym_LT_PIPE,
      anon_sym_PIPE_GT,
      anon_sym_STAR,
      anon_sym_GT,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_COLON,
  [11958] = 3,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(909), 2,
      anon_sym_DASH_DASH,
      aux_sym_state_name_token1,
    ACTIONS(907), 12,
      sym__newline,
      anon_sym_DASH_DASH_GT,
      anon_sym_LBRACK_STAR_RBRACK,
      aux_sym_state_hide_empty_description_token1,
      aux_sym_state_direction_tb_token1,
      aux_sym_state_direction_bt_token1,
      aux_sym_state_direction_rl_token1,
      aux_sym_state_direction_lr_token1,
      anon_sym_COLON,
      anon_sym_RBRACE,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_state_stmt_simple_token1,
  [11981] = 3,
    ACTIONS(913), 1,
      aux_sym_state_name_token1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(911), 12,
      ts_builtin_sym_end,
      sym__newline,
      anon_sym_DASH_DASH,
      anon_sym_LBRACK_STAR_RBRACK,
      aux_sym_state_hide_empty_description_token1,
      aux_sym_state_direction_tb_token1,
      aux_sym_state_direction_bt_token1,
      aux_sym_state_direction_rl_token1,
      aux_sym_state_direction_lr_token1,
      anon_sym_RBRACE,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_state_stmt_simple_token1,
  [12003] = 3,
    ACTIONS(917), 1,
      aux_sym_state_name_token1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(915), 12,
      ts_builtin_sym_end,
      sym__newline,
      anon_sym_DASH_DASH,
      anon_sym_LBRACK_STAR_RBRACK,
      aux_sym_state_hide_empty_description_token1,
      aux_sym_state_direction_tb_token1,
      aux_sym_state_direction_bt_token1,
      aux_sym_state_direction_rl_token1,
      aux_sym_state_direction_lr_token1,
      anon_sym_RBRACE,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_state_stmt_simple_token1,
  [12025] = 3,
    ACTIONS(921), 1,
      aux_sym_state_name_token1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(919), 12,
      ts_builtin_sym_end,
      sym__newline,
      anon_sym_DASH_DASH,
      anon_sym_LBRACK_STAR_RBRACK,
      aux_sym_state_hide_empty_description_token1,
      aux_sym_state_direction_tb_token1,
      aux_sym_state_direction_bt_token1,
      aux_sym_state_direction_rl_token1,
      aux_sym_state_direction_lr_token1,
      anon_sym_RBRACE,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_state_stmt_simple_token1,
  [12047] = 3,
    ACTIONS(925), 1,
      aux_sym_state_name_token1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(923), 12,
      ts_builtin_sym_end,
      sym__newline,
      anon_sym_DASH_DASH,
      anon_sym_LBRACK_STAR_RBRACK,
      aux_sym_state_hide_empty_description_token1,
      aux_sym_state_direction_tb_token1,
      aux_sym_state_direction_bt_token1,
      aux_sym_state_direction_rl_token1,
      aux_sym_state_direction_lr_token1,
      anon_sym_RBRACE,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_state_stmt_simple_token1,
  [12069] = 5,
    ACTIONS(927), 1,
      sym__class_name,
    ACTIONS(929), 1,
      sym__bquote_string,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(933), 2,
      sym_class_reltype_aggregation,
      anon_sym_LT,
    ACTIONS(931), 9,
      sym__dquote_string,
      anon_sym_LT_PIPE,
      anon_sym_PIPE_GT,
      anon_sym_STAR,
      anon_sym_GT,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_COLON,
      anon_sym_TILDE,
  [12095] = 3,
    ACTIONS(937), 1,
      aux_sym_state_name_token1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(935), 12,
      ts_builtin_sym_end,
      sym__newline,
      anon_sym_DASH_DASH,
      anon_sym_LBRACK_STAR_RBRACK,
      aux_sym_state_hide_empty_description_token1,
      aux_sym_state_direction_tb_token1,
      aux_sym_state_direction_bt_token1,
      aux_sym_state_direction_rl_token1,
      aux_sym_state_direction_lr_token1,
      anon_sym_RBRACE,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_state_stmt_simple_token1,
  [12117] = 9,
    ACTIONS(851), 1,
      anon_sym_LBRACE,
    ACTIONS(853), 1,
      aux_sym_sequence_stmt_participant_token1,
    STATE(236), 1,
      sym_state_composite_body,
    STATE(237), 1,
      sym__state_annotation,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(939), 2,
      aux_sym_state_annotation_fork_token1,
      aux_sym_state_annotation_fork_token2,
    ACTIONS(941), 2,
      aux_sym_state_annotation_join_token1,
      aux_sym_state_annotation_join_token2,
    ACTIONS(943), 2,
      aux_sym_state_annotation_choice_token1,
      aux_sym_state_annotation_choice_token2,
    STATE(258), 3,
      sym_state_annotation_fork,
      sym_state_annotation_join,
      sym_state_annotation_choice,
  [12151] = 3,
    ACTIONS(947), 1,
      aux_sym_state_name_token1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(945), 12,
      ts_builtin_sym_end,
      sym__newline,
      anon_sym_DASH_DASH,
      anon_sym_LBRACK_STAR_RBRACK,
      aux_sym_state_hide_empty_description_token1,
      aux_sym_state_direction_tb_token1,
      aux_sym_state_direction_bt_token1,
      aux_sym_state_direction_rl_token1,
      aux_sym_state_direction_lr_token1,
      anon_sym_RBRACE,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_state_stmt_simple_token1,
  [12173] = 3,
    ACTIONS(951), 1,
      aux_sym_state_name_token1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(949), 12,
      ts_builtin_sym_end,
      sym__newline,
      anon_sym_DASH_DASH,
      anon_sym_LBRACK_STAR_RBRACK,
      aux_sym_state_hide_empty_description_token1,
      aux_sym_state_direction_tb_token1,
      aux_sym_state_direction_bt_token1,
      aux_sym_state_direction_rl_token1,
      aux_sym_state_direction_lr_token1,
      anon_sym_RBRACE,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_state_stmt_simple_token1,
  [12195] = 3,
    ACTIONS(955), 1,
      aux_sym_state_name_token1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(953), 12,
      ts_builtin_sym_end,
      sym__newline,
      anon_sym_DASH_DASH,
      anon_sym_LBRACK_STAR_RBRACK,
      aux_sym_state_hide_empty_description_token1,
      aux_sym_state_direction_tb_token1,
      aux_sym_state_direction_bt_token1,
      aux_sym_state_direction_rl_token1,
      aux_sym_state_direction_lr_token1,
      anon_sym_RBRACE,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_state_stmt_simple_token1,
  [12217] = 3,
    ACTIONS(959), 1,
      aux_sym_state_name_token1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(957), 12,
      ts_builtin_sym_end,
      sym__newline,
      anon_sym_DASH_DASH,
      anon_sym_LBRACK_STAR_RBRACK,
      aux_sym_state_hide_empty_description_token1,
      aux_sym_state_direction_tb_token1,
      aux_sym_state_direction_bt_token1,
      aux_sym_state_direction_rl_token1,
      aux_sym_state_direction_lr_token1,
      anon_sym_RBRACE,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_state_stmt_simple_token1,
  [12239] = 3,
    ACTIONS(963), 1,
      aux_sym_state_name_token1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(961), 12,
      ts_builtin_sym_end,
      sym__newline,
      anon_sym_DASH_DASH,
      anon_sym_LBRACK_STAR_RBRACK,
      aux_sym_state_hide_empty_description_token1,
      aux_sym_state_direction_tb_token1,
      aux_sym_state_direction_bt_token1,
      aux_sym_state_direction_rl_token1,
      aux_sym_state_direction_lr_token1,
      anon_sym_RBRACE,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_state_stmt_simple_token1,
  [12261] = 3,
    ACTIONS(933), 1,
      anon_sym_LT,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(931), 12,
      ts_builtin_sym_end,
      sym__newline,
      sym__dquote_string,
      sym_class_reltype_aggregation,
      anon_sym_LT_PIPE,
      anon_sym_PIPE_GT,
      anon_sym_STAR,
      anon_sym_GT,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_COLON,
      anon_sym_TILDE,
  [12283] = 11,
    ACTIONS(965), 1,
      ts_builtin_sym_end,
    ACTIONS(967), 1,
      sym__class_name,
    ACTIONS(969), 1,
      sym__bquote_string,
    ACTIONS(971), 1,
      anon_sym_class,
    ACTIONS(973), 1,
      anon_sym_LT_LT,
    STATE(213), 1,
      sym_class_name,
    STATE(227), 1,
      sym_class_name_body,
    STATE(530), 1,
      aux_sym_class_name_body_repeat1,
    STATE(681), 1,
      sym__class_stmt,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    STATE(728), 4,
      sym_class_stmt_relation,
      sym_class_stmt_class,
      sym_class_stmt_method,
      sym_class_stmt_annotation,
  [12321] = 10,
    ACTIONS(809), 1,
      anon_sym_STAR,
    ACTIONS(811), 1,
      anon_sym_LT,
    ACTIONS(813), 1,
      anon_sym_GT,
    ACTIONS(975), 1,
      sym__class_name,
    ACTIONS(979), 1,
      sym_class_reltype_aggregation,
    STATE(509), 1,
      sym__class_reltype,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(807), 2,
      anon_sym_LT_PIPE,
      anon_sym_PIPE_GT,
    ACTIONS(977), 2,
      sym__bquote_string,
      sym__dquote_string,
    STATE(388), 3,
      sym_class_reltype_extension,
      sym_class_reltype_composition,
      sym_class_reltype_dependency,
  [12357] = 3,
    ACTIONS(983), 1,
      aux_sym_state_name_token1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(981), 12,
      ts_builtin_sym_end,
      sym__newline,
      anon_sym_DASH_DASH,
      anon_sym_LBRACK_STAR_RBRACK,
      aux_sym_state_hide_empty_description_token1,
      aux_sym_state_direction_tb_token1,
      aux_sym_state_direction_bt_token1,
      aux_sym_state_direction_rl_token1,
      aux_sym_state_direction_lr_token1,
      anon_sym_RBRACE,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_state_stmt_simple_token1,
  [12379] = 6,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(989), 1,
      sym__sequence_actor_word,
    STATE(265), 1,
      aux_sym_sequence_actor_repeat1,
    ACTIONS(987), 2,
      sym_sequence__solid_open_arrow,
      anon_sym_DASH_DASH_GT,
    ACTIONS(985), 9,
      sym__newline,
      sym_sequence__solid_arrow,
      sym_sequence__dotted_arrow,
      sym_sequence__solid_cross,
      sym_sequence__dotted_cross,
      anon_sym_DASH_RPAREN,
      sym_sequence__dotted_point,
      anon_sym_COLON,
      anon_sym_COMMA,
  [12407] = 3,
    ACTIONS(993), 1,
      aux_sym_state_name_token1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(991), 12,
      ts_builtin_sym_end,
      sym__newline,
      anon_sym_DASH_DASH,
      anon_sym_LBRACK_STAR_RBRACK,
      aux_sym_state_hide_empty_description_token1,
      aux_sym_state_direction_tb_token1,
      aux_sym_state_direction_bt_token1,
      aux_sym_state_direction_rl_token1,
      aux_sym_state_direction_lr_token1,
      anon_sym_RBRACE,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_state_stmt_simple_token1,
  [12429] = 3,
    ACTIONS(997), 1,
      aux_sym_state_name_token1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(995), 12,
      ts_builtin_sym_end,
      sym__newline,
      anon_sym_DASH_DASH,
      anon_sym_LBRACK_STAR_RBRACK,
      aux_sym_state_hide_empty_description_token1,
      aux_sym_state_direction_tb_token1,
      aux_sym_state_direction_bt_token1,
      aux_sym_state_direction_rl_token1,
      aux_sym_state_direction_lr_token1,
      anon_sym_RBRACE,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_state_stmt_simple_token1,
  [12451] = 3,
    ACTIONS(1001), 1,
      aux_sym_state_name_token1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(999), 12,
      ts_builtin_sym_end,
      sym__newline,
      anon_sym_DASH_DASH,
      anon_sym_LBRACK_STAR_RBRACK,
      aux_sym_state_hide_empty_description_token1,
      aux_sym_state_direction_tb_token1,
      aux_sym_state_direction_bt_token1,
      aux_sym_state_direction_rl_token1,
      aux_sym_state_direction_lr_token1,
      anon_sym_RBRACE,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_state_stmt_simple_token1,
  [12473] = 3,
    ACTIONS(1005), 1,
      aux_sym_state_name_token1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1003), 12,
      ts_builtin_sym_end,
      sym__newline,
      anon_sym_DASH_DASH,
      anon_sym_LBRACK_STAR_RBRACK,
      aux_sym_state_hide_empty_description_token1,
      aux_sym_state_direction_tb_token1,
      aux_sym_state_direction_bt_token1,
      aux_sym_state_direction_rl_token1,
      aux_sym_state_direction_lr_token1,
      anon_sym_RBRACE,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_state_stmt_simple_token1,
  [12495] = 3,
    ACTIONS(1009), 1,
      aux_sym_state_name_token1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1007), 12,
      ts_builtin_sym_end,
      sym__newline,
      anon_sym_DASH_DASH,
      anon_sym_LBRACK_STAR_RBRACK,
      aux_sym_state_hide_empty_description_token1,
      aux_sym_state_direction_tb_token1,
      aux_sym_state_direction_bt_token1,
      aux_sym_state_direction_rl_token1,
      aux_sym_state_direction_lr_token1,
      anon_sym_RBRACE,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_state_stmt_simple_token1,
  [12517] = 3,
    ACTIONS(1013), 1,
      aux_sym_state_name_token1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1011), 12,
      ts_builtin_sym_end,
      sym__newline,
      anon_sym_DASH_DASH,
      anon_sym_LBRACK_STAR_RBRACK,
      aux_sym_state_hide_empty_description_token1,
      aux_sym_state_direction_tb_token1,
      aux_sym_state_direction_bt_token1,
      aux_sym_state_direction_rl_token1,
      aux_sym_state_direction_lr_token1,
      anon_sym_RBRACE,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_state_stmt_simple_token1,
  [12539] = 12,
    ACTIONS(1015), 1,
      sym__alpha_num_token,
    ACTIONS(1017), 1,
      aux_sym_flow_stmt_direction_token1,
    ACTIONS(1019), 1,
      anon_sym_subgraph,
    ACTIONS(1021), 1,
      anon_sym_end,
    STATE(62), 1,
      sym_flow_vertex_id,
    STATE(217), 1,
      sym_flow_node,
    STATE(275), 1,
      aux_sym_flow_stmt_subgraph_inner_repeat1,
    STATE(307), 1,
      sym_flow_vertex,
    STATE(703), 1,
      sym__flow_stmt,
    STATE(830), 1,
      sym_flow_stmt_subgraph_inner,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    STATE(544), 3,
      sym_flow_stmt_direction,
      sym_flow_stmt_vertice,
      sym_flow_stmt_subgraph,
  [12579] = 3,
    ACTIONS(1025), 1,
      aux_sym_state_name_token1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1023), 12,
      ts_builtin_sym_end,
      sym__newline,
      anon_sym_DASH_DASH,
      anon_sym_LBRACK_STAR_RBRACK,
      aux_sym_state_hide_empty_description_token1,
      aux_sym_state_direction_tb_token1,
      aux_sym_state_direction_bt_token1,
      aux_sym_state_direction_rl_token1,
      aux_sym_state_direction_lr_token1,
      anon_sym_RBRACE,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_state_stmt_simple_token1,
  [12601] = 12,
    ACTIONS(1015), 1,
      sym__alpha_num_token,
    ACTIONS(1017), 1,
      aux_sym_flow_stmt_direction_token1,
    ACTIONS(1019), 1,
      anon_sym_subgraph,
    ACTIONS(1027), 1,
      anon_sym_end,
    STATE(62), 1,
      sym_flow_vertex_id,
    STATE(217), 1,
      sym_flow_node,
    STATE(275), 1,
      aux_sym_flow_stmt_subgraph_inner_repeat1,
    STATE(307), 1,
      sym_flow_vertex,
    STATE(703), 1,
      sym__flow_stmt,
    STATE(850), 1,
      sym_flow_stmt_subgraph_inner,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    STATE(544), 3,
      sym_flow_stmt_direction,
      sym_flow_stmt_vertice,
      sym_flow_stmt_subgraph,
  [12641] = 3,
    ACTIONS(1031), 1,
      aux_sym_state_name_token1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1029), 12,
      ts_builtin_sym_end,
      sym__newline,
      anon_sym_DASH_DASH,
      anon_sym_LBRACK_STAR_RBRACK,
      aux_sym_state_hide_empty_description_token1,
      aux_sym_state_direction_tb_token1,
      aux_sym_state_direction_bt_token1,
      aux_sym_state_direction_rl_token1,
      aux_sym_state_direction_lr_token1,
      anon_sym_RBRACE,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_state_stmt_simple_token1,
  [12663] = 3,
    ACTIONS(1035), 1,
      aux_sym_state_name_token1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1033), 12,
      ts_builtin_sym_end,
      sym__newline,
      anon_sym_DASH_DASH,
      anon_sym_LBRACK_STAR_RBRACK,
      aux_sym_state_hide_empty_description_token1,
      aux_sym_state_direction_tb_token1,
      aux_sym_state_direction_bt_token1,
      aux_sym_state_direction_rl_token1,
      aux_sym_state_direction_lr_token1,
      anon_sym_RBRACE,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_state_stmt_simple_token1,
  [12685] = 3,
    ACTIONS(1039), 1,
      aux_sym_state_name_token1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1037), 12,
      ts_builtin_sym_end,
      sym__newline,
      anon_sym_DASH_DASH,
      anon_sym_LBRACK_STAR_RBRACK,
      aux_sym_state_hide_empty_description_token1,
      aux_sym_state_direction_tb_token1,
      aux_sym_state_direction_bt_token1,
      aux_sym_state_direction_rl_token1,
      aux_sym_state_direction_lr_token1,
      anon_sym_RBRACE,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_state_stmt_simple_token1,
  [12707] = 3,
    ACTIONS(1043), 1,
      aux_sym_state_name_token1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1041), 12,
      ts_builtin_sym_end,
      sym__newline,
      anon_sym_DASH_DASH,
      anon_sym_LBRACK_STAR_RBRACK,
      aux_sym_state_hide_empty_description_token1,
      aux_sym_state_direction_tb_token1,
      aux_sym_state_direction_bt_token1,
      aux_sym_state_direction_rl_token1,
      aux_sym_state_direction_lr_token1,
      anon_sym_RBRACE,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_state_stmt_simple_token1,
  [12729] = 3,
    ACTIONS(1047), 1,
      aux_sym_state_name_token1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1045), 12,
      ts_builtin_sym_end,
      sym__newline,
      anon_sym_DASH_DASH,
      anon_sym_LBRACK_STAR_RBRACK,
      aux_sym_state_hide_empty_description_token1,
      aux_sym_state_direction_tb_token1,
      aux_sym_state_direction_bt_token1,
      aux_sym_state_direction_rl_token1,
      aux_sym_state_direction_lr_token1,
      anon_sym_RBRACE,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_state_stmt_simple_token1,
  [12751] = 11,
    ACTIONS(967), 1,
      sym__class_name,
    ACTIONS(969), 1,
      sym__bquote_string,
    ACTIONS(971), 1,
      anon_sym_class,
    ACTIONS(973), 1,
      anon_sym_LT_LT,
    ACTIONS(1049), 1,
      ts_builtin_sym_end,
    STATE(213), 1,
      sym_class_name,
    STATE(227), 1,
      sym_class_name_body,
    STATE(530), 1,
      aux_sym_class_name_body_repeat1,
    STATE(681), 1,
      sym__class_stmt,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    STATE(728), 4,
      sym_class_stmt_relation,
      sym_class_stmt_class,
      sym_class_stmt_method,
      sym_class_stmt_annotation,
  [12789] = 10,
    ACTIONS(809), 1,
      anon_sym_STAR,
    ACTIONS(811), 1,
      anon_sym_LT,
    ACTIONS(813), 1,
      anon_sym_GT,
    ACTIONS(979), 1,
      sym_class_reltype_aggregation,
    ACTIONS(1051), 1,
      sym__class_name,
    STATE(551), 1,
      sym__class_reltype,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(807), 2,
      anon_sym_LT_PIPE,
      anon_sym_PIPE_GT,
    ACTIONS(1053), 2,
      sym__bquote_string,
      sym__dquote_string,
    STATE(388), 3,
      sym_class_reltype_extension,
      sym_class_reltype_composition,
      sym_class_reltype_dependency,
  [12825] = 5,
    ACTIONS(927), 1,
      sym__class_name,
    ACTIONS(929), 1,
      sym__bquote_string,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1057), 2,
      sym_class_reltype_aggregation,
      anon_sym_LT,
    ACTIONS(1055), 9,
      sym__dquote_string,
      anon_sym_LT_PIPE,
      anon_sym_PIPE_GT,
      anon_sym_STAR,
      anon_sym_GT,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_COLON,
      anon_sym_TILDE,
  [12851] = 3,
    ACTIONS(1057), 1,
      anon_sym_LT,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1055), 12,
      ts_builtin_sym_end,
      sym__newline,
      sym__dquote_string,
      sym_class_reltype_aggregation,
      anon_sym_LT_PIPE,
      anon_sym_PIPE_GT,
      anon_sym_STAR,
      anon_sym_GT,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_COLON,
      anon_sym_TILDE,
  [12873] = 12,
    ACTIONS(1015), 1,
      sym__alpha_num_token,
    ACTIONS(1017), 1,
      aux_sym_flow_stmt_direction_token1,
    ACTIONS(1019), 1,
      anon_sym_subgraph,
    ACTIONS(1059), 1,
      anon_sym_end,
    STATE(62), 1,
      sym_flow_vertex_id,
    STATE(217), 1,
      sym_flow_node,
    STATE(275), 1,
      aux_sym_flow_stmt_subgraph_inner_repeat1,
    STATE(307), 1,
      sym_flow_vertex,
    STATE(703), 1,
      sym__flow_stmt,
    STATE(828), 1,
      sym_flow_stmt_subgraph_inner,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    STATE(544), 3,
      sym_flow_stmt_direction,
      sym_flow_stmt_vertice,
      sym_flow_stmt_subgraph,
  [12913] = 6,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1065), 1,
      sym__sequence_actor_word,
    STATE(265), 1,
      aux_sym_sequence_actor_repeat1,
    ACTIONS(1063), 2,
      sym_sequence__solid_open_arrow,
      anon_sym_DASH_DASH_GT,
    ACTIONS(1061), 9,
      sym__newline,
      sym_sequence__solid_arrow,
      sym_sequence__dotted_arrow,
      sym_sequence__solid_cross,
      sym_sequence__dotted_cross,
      anon_sym_DASH_RPAREN,
      sym_sequence__dotted_point,
      anon_sym_COLON,
      anon_sym_COMMA,
  [12941] = 3,
    ACTIONS(909), 1,
      aux_sym_state_name_token1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(907), 12,
      sym__newline,
      anon_sym_DASH_DASH,
      anon_sym_LBRACK_STAR_RBRACK,
      aux_sym_state_hide_empty_description_token1,
      aux_sym_state_direction_tb_token1,
      aux_sym_state_direction_bt_token1,
      aux_sym_state_direction_rl_token1,
      aux_sym_state_direction_lr_token1,
      anon_sym_COLON,
      anon_sym_RBRACE,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_state_stmt_simple_token1,
  [12963] = 3,
    ACTIONS(1070), 1,
      aux_sym_state_name_token1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1068), 12,
      ts_builtin_sym_end,
      sym__newline,
      anon_sym_DASH_DASH,
      anon_sym_LBRACK_STAR_RBRACK,
      aux_sym_state_hide_empty_description_token1,
      aux_sym_state_direction_tb_token1,
      aux_sym_state_direction_bt_token1,
      aux_sym_state_direction_rl_token1,
      aux_sym_state_direction_lr_token1,
      anon_sym_RBRACE,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_state_stmt_simple_token1,
  [12985] = 3,
    ACTIONS(1072), 1,
      aux_sym_state_name_token1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(556), 11,
      sym__newline,
      anon_sym_DASH_DASH,
      anon_sym_LBRACK_STAR_RBRACK,
      aux_sym_state_hide_empty_description_token1,
      aux_sym_state_direction_tb_token1,
      aux_sym_state_direction_bt_token1,
      aux_sym_state_direction_rl_token1,
      aux_sym_state_direction_lr_token1,
      anon_sym_RBRACE,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_state_stmt_simple_token1,
  [13006] = 11,
    ACTIONS(1074), 1,
      sym__newline,
    ACTIONS(1076), 1,
      anon_sym_PLUS,
    ACTIONS(1078), 1,
      anon_sym_DASH,
    ACTIONS(1080), 1,
      sym__alpha_num_token,
    ACTIONS(1082), 1,
      anon_sym_TILDE,
    ACTIONS(1084), 1,
      anon_sym_POUND,
    ACTIONS(1088), 1,
      anon_sym_LT_LT,
    STATE(352), 1,
      aux_sym_class_method_line_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1086), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
    STATE(493), 2,
      sym_class_method_line,
      sym_class_annotation_line,
  [13043] = 3,
    ACTIONS(1092), 1,
      anon_sym_LT,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1090), 11,
      ts_builtin_sym_end,
      sym__newline,
      sym__dquote_string,
      sym_class_reltype_aggregation,
      anon_sym_LT_PIPE,
      anon_sym_PIPE_GT,
      anon_sym_STAR,
      anon_sym_GT,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_COLON,
  [13064] = 3,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1096), 2,
      aux_sym_diagram_class_token2,
      aux_sym_diagram_state_token1,
    ACTIONS(1094), 10,
      anon_sym_PERCENT_PERCENT_LBRACE,
      sym__newline,
      aux_sym_diagram_class_token1,
      aux_sym_diagram_er_token1,
      aux_sym_diagram_flow_token1,
      aux_sym_diagram_gantt_token1,
      aux_sym_diagram_mindmap_token1,
      aux_sym_diagram_pie_token1,
      aux_sym_diagram_sequence_token1,
      aux_sym_diagram_state_token2,
  [13085] = 11,
    ACTIONS(1098), 1,
      sym__alpha_num_token,
    ACTIONS(1101), 1,
      aux_sym_flow_stmt_direction_token1,
    ACTIONS(1104), 1,
      anon_sym_subgraph,
    ACTIONS(1107), 1,
      anon_sym_end,
    STATE(62), 1,
      sym_flow_vertex_id,
    STATE(217), 1,
      sym_flow_node,
    STATE(272), 1,
      aux_sym_flow_stmt_subgraph_inner_repeat1,
    STATE(307), 1,
      sym_flow_vertex,
    STATE(703), 1,
      sym__flow_stmt,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    STATE(544), 3,
      sym_flow_stmt_direction,
      sym_flow_stmt_vertice,
      sym_flow_stmt_subgraph,
  [13122] = 11,
    ACTIONS(1076), 1,
      anon_sym_PLUS,
    ACTIONS(1078), 1,
      anon_sym_DASH,
    ACTIONS(1080), 1,
      sym__alpha_num_token,
    ACTIONS(1082), 1,
      anon_sym_TILDE,
    ACTIONS(1084), 1,
      anon_sym_POUND,
    ACTIONS(1088), 1,
      anon_sym_LT_LT,
    ACTIONS(1109), 1,
      sym__newline,
    STATE(352), 1,
      aux_sym_class_method_line_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1086), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
    STATE(498), 2,
      sym_class_method_line,
      sym_class_annotation_line,
  [13159] = 11,
    ACTIONS(1076), 1,
      anon_sym_PLUS,
    ACTIONS(1078), 1,
      anon_sym_DASH,
    ACTIONS(1080), 1,
      sym__alpha_num_token,
    ACTIONS(1082), 1,
      anon_sym_TILDE,
    ACTIONS(1084), 1,
      anon_sym_POUND,
    ACTIONS(1088), 1,
      anon_sym_LT_LT,
    ACTIONS(1111), 1,
      anon_sym_RBRACE,
    STATE(352), 1,
      aux_sym_class_method_line_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1086), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
    STATE(670), 2,
      sym_class_method_line,
      sym_class_annotation_line,
  [13196] = 11,
    ACTIONS(1015), 1,
      sym__alpha_num_token,
    ACTIONS(1017), 1,
      aux_sym_flow_stmt_direction_token1,
    ACTIONS(1019), 1,
      anon_sym_subgraph,
    ACTIONS(1113), 1,
      anon_sym_end,
    STATE(62), 1,
      sym_flow_vertex_id,
    STATE(217), 1,
      sym_flow_node,
    STATE(272), 1,
      aux_sym_flow_stmt_subgraph_inner_repeat1,
    STATE(307), 1,
      sym_flow_vertex,
    STATE(703), 1,
      sym__flow_stmt,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    STATE(544), 3,
      sym_flow_stmt_direction,
      sym_flow_stmt_vertice,
      sym_flow_stmt_subgraph,
  [13233] = 3,
    ACTIONS(1117), 1,
      aux_sym_gantt_task_text_token1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1115), 11,
      ts_builtin_sym_end,
      sym__newline,
      aux_sym_gantt_stmt_dateformat_token1,
      aux_sym_gantt_stmt_inclusiveenddates_token1,
      aux_sym_gantt_stmt_topaxis_token1,
      aux_sym_gantt_stmt_axisformat_token1,
      aux_sym_gantt_stmt_includes_token1,
      aux_sym_gantt_stmt_excludes_token1,
      aux_sym_gantt_stmt_todaymarker_token1,
      aux_sym_gantt_stmt_title_token1,
      aux_sym_gantt_stmt_section_token1,
  [13254] = 10,
    ACTIONS(967), 1,
      sym__class_name,
    ACTIONS(969), 1,
      sym__bquote_string,
    ACTIONS(971), 1,
      anon_sym_class,
    ACTIONS(973), 1,
      anon_sym_LT_LT,
    STATE(213), 1,
      sym_class_name,
    STATE(227), 1,
      sym_class_name_body,
    STATE(528), 1,
      sym__class_stmt,
    STATE(530), 1,
      aux_sym_class_name_body_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    STATE(728), 4,
      sym_class_stmt_relation,
      sym_class_stmt_class,
      sym_class_stmt_method,
      sym_class_stmt_annotation,
  [13289] = 11,
    ACTIONS(1076), 1,
      anon_sym_PLUS,
    ACTIONS(1078), 1,
      anon_sym_DASH,
    ACTIONS(1080), 1,
      sym__alpha_num_token,
    ACTIONS(1082), 1,
      anon_sym_TILDE,
    ACTIONS(1084), 1,
      anon_sym_POUND,
    ACTIONS(1088), 1,
      anon_sym_LT_LT,
    ACTIONS(1119), 1,
      anon_sym_RBRACE,
    STATE(352), 1,
      aux_sym_class_method_line_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1086), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
    STATE(670), 2,
      sym_class_method_line,
      sym_class_annotation_line,
  [13326] = 11,
    ACTIONS(1076), 1,
      anon_sym_PLUS,
    ACTIONS(1078), 1,
      anon_sym_DASH,
    ACTIONS(1080), 1,
      sym__alpha_num_token,
    ACTIONS(1082), 1,
      anon_sym_TILDE,
    ACTIONS(1084), 1,
      anon_sym_POUND,
    ACTIONS(1088), 1,
      anon_sym_LT_LT,
    ACTIONS(1121), 1,
      anon_sym_RBRACE,
    STATE(352), 1,
      aux_sym_class_method_line_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1086), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
    STATE(670), 2,
      sym_class_method_line,
      sym_class_annotation_line,
  [13363] = 11,
    ACTIONS(1076), 1,
      anon_sym_PLUS,
    ACTIONS(1078), 1,
      anon_sym_DASH,
    ACTIONS(1080), 1,
      sym__alpha_num_token,
    ACTIONS(1082), 1,
      anon_sym_TILDE,
    ACTIONS(1084), 1,
      anon_sym_POUND,
    ACTIONS(1088), 1,
      anon_sym_LT_LT,
    ACTIONS(1123), 1,
      anon_sym_RBRACE,
    STATE(352), 1,
      aux_sym_class_method_line_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1086), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
    STATE(670), 2,
      sym_class_method_line,
      sym_class_annotation_line,
  [13400] = 10,
    ACTIONS(967), 1,
      sym__class_name,
    ACTIONS(969), 1,
      sym__bquote_string,
    ACTIONS(971), 1,
      anon_sym_class,
    ACTIONS(973), 1,
      anon_sym_LT_LT,
    STATE(213), 1,
      sym_class_name,
    STATE(227), 1,
      sym_class_name_body,
    STATE(530), 1,
      aux_sym_class_name_body_repeat1,
    STATE(681), 1,
      sym__class_stmt,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    STATE(728), 4,
      sym_class_stmt_relation,
      sym_class_stmt_class,
      sym_class_stmt_method,
      sym_class_stmt_annotation,
  [13435] = 3,
    ACTIONS(1127), 1,
      anon_sym_LT,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1125), 11,
      ts_builtin_sym_end,
      sym__newline,
      sym__dquote_string,
      sym_class_reltype_aggregation,
      anon_sym_LT_PIPE,
      anon_sym_PIPE_GT,
      anon_sym_STAR,
      anon_sym_GT,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_COLON,
  [13456] = 2,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(907), 12,
      ts_builtin_sym_end,
      sym__newline,
      anon_sym_DASH_DASH_GT,
      aux_sym_state_annotation_fork_token1,
      aux_sym_state_annotation_fork_token2,
      aux_sym_state_annotation_join_token1,
      aux_sym_state_annotation_join_token2,
      aux_sym_state_annotation_choice_token1,
      aux_sym_state_annotation_choice_token2,
      anon_sym_COLON,
      anon_sym_LBRACE,
      aux_sym_sequence_stmt_participant_token1,
  [13475] = 3,
    ACTIONS(1131), 1,
      aux_sym_gantt_task_text_token1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1129), 11,
      ts_builtin_sym_end,
      sym__newline,
      aux_sym_gantt_stmt_dateformat_token1,
      aux_sym_gantt_stmt_inclusiveenddates_token1,
      aux_sym_gantt_stmt_topaxis_token1,
      aux_sym_gantt_stmt_axisformat_token1,
      aux_sym_gantt_stmt_includes_token1,
      aux_sym_gantt_stmt_excludes_token1,
      aux_sym_gantt_stmt_todaymarker_token1,
      aux_sym_gantt_stmt_title_token1,
      aux_sym_gantt_stmt_section_token1,
  [13496] = 3,
    ACTIONS(1135), 1,
      aux_sym_gantt_task_text_token1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1133), 11,
      ts_builtin_sym_end,
      sym__newline,
      aux_sym_gantt_stmt_dateformat_token1,
      aux_sym_gantt_stmt_inclusiveenddates_token1,
      aux_sym_gantt_stmt_topaxis_token1,
      aux_sym_gantt_stmt_axisformat_token1,
      aux_sym_gantt_stmt_includes_token1,
      aux_sym_gantt_stmt_excludes_token1,
      aux_sym_gantt_stmt_todaymarker_token1,
      aux_sym_gantt_stmt_title_token1,
      aux_sym_gantt_stmt_section_token1,
  [13517] = 3,
    ACTIONS(1139), 1,
      aux_sym_gantt_task_text_token1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1137), 11,
      ts_builtin_sym_end,
      sym__newline,
      aux_sym_gantt_stmt_dateformat_token1,
      aux_sym_gantt_stmt_inclusiveenddates_token1,
      aux_sym_gantt_stmt_topaxis_token1,
      aux_sym_gantt_stmt_axisformat_token1,
      aux_sym_gantt_stmt_includes_token1,
      aux_sym_gantt_stmt_excludes_token1,
      aux_sym_gantt_stmt_todaymarker_token1,
      aux_sym_gantt_stmt_title_token1,
      aux_sym_gantt_stmt_section_token1,
  [13538] = 3,
    ACTIONS(1143), 1,
      aux_sym_gantt_task_text_token1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1141), 11,
      ts_builtin_sym_end,
      sym__newline,
      aux_sym_gantt_stmt_dateformat_token1,
      aux_sym_gantt_stmt_inclusiveenddates_token1,
      aux_sym_gantt_stmt_topaxis_token1,
      aux_sym_gantt_stmt_axisformat_token1,
      aux_sym_gantt_stmt_includes_token1,
      aux_sym_gantt_stmt_excludes_token1,
      aux_sym_gantt_stmt_todaymarker_token1,
      aux_sym_gantt_stmt_title_token1,
      aux_sym_gantt_stmt_section_token1,
  [13559] = 3,
    ACTIONS(1147), 1,
      aux_sym_gantt_task_text_token1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1145), 11,
      ts_builtin_sym_end,
      sym__newline,
      aux_sym_gantt_stmt_dateformat_token1,
      aux_sym_gantt_stmt_inclusiveenddates_token1,
      aux_sym_gantt_stmt_topaxis_token1,
      aux_sym_gantt_stmt_axisformat_token1,
      aux_sym_gantt_stmt_includes_token1,
      aux_sym_gantt_stmt_excludes_token1,
      aux_sym_gantt_stmt_todaymarker_token1,
      aux_sym_gantt_stmt_title_token1,
      aux_sym_gantt_stmt_section_token1,
  [13580] = 3,
    ACTIONS(1151), 1,
      aux_sym_gantt_task_text_token1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1149), 11,
      ts_builtin_sym_end,
      sym__newline,
      aux_sym_gantt_stmt_dateformat_token1,
      aux_sym_gantt_stmt_inclusiveenddates_token1,
      aux_sym_gantt_stmt_topaxis_token1,
      aux_sym_gantt_stmt_axisformat_token1,
      aux_sym_gantt_stmt_includes_token1,
      aux_sym_gantt_stmt_excludes_token1,
      aux_sym_gantt_stmt_todaymarker_token1,
      aux_sym_gantt_stmt_title_token1,
      aux_sym_gantt_stmt_section_token1,
  [13601] = 3,
    ACTIONS(1155), 1,
      aux_sym_gantt_task_text_token1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1153), 11,
      ts_builtin_sym_end,
      sym__newline,
      aux_sym_gantt_stmt_dateformat_token1,
      aux_sym_gantt_stmt_inclusiveenddates_token1,
      aux_sym_gantt_stmt_topaxis_token1,
      aux_sym_gantt_stmt_axisformat_token1,
      aux_sym_gantt_stmt_includes_token1,
      aux_sym_gantt_stmt_excludes_token1,
      aux_sym_gantt_stmt_todaymarker_token1,
      aux_sym_gantt_stmt_title_token1,
      aux_sym_gantt_stmt_section_token1,
  [13622] = 3,
    ACTIONS(1159), 1,
      aux_sym_gantt_task_text_token1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1157), 11,
      ts_builtin_sym_end,
      sym__newline,
      aux_sym_gantt_stmt_dateformat_token1,
      aux_sym_gantt_stmt_inclusiveenddates_token1,
      aux_sym_gantt_stmt_topaxis_token1,
      aux_sym_gantt_stmt_axisformat_token1,
      aux_sym_gantt_stmt_includes_token1,
      aux_sym_gantt_stmt_excludes_token1,
      aux_sym_gantt_stmt_todaymarker_token1,
      aux_sym_gantt_stmt_title_token1,
      aux_sym_gantt_stmt_section_token1,
  [13643] = 3,
    ACTIONS(1163), 1,
      aux_sym_gantt_task_text_token1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1161), 11,
      ts_builtin_sym_end,
      sym__newline,
      aux_sym_gantt_stmt_dateformat_token1,
      aux_sym_gantt_stmt_inclusiveenddates_token1,
      aux_sym_gantt_stmt_topaxis_token1,
      aux_sym_gantt_stmt_axisformat_token1,
      aux_sym_gantt_stmt_includes_token1,
      aux_sym_gantt_stmt_excludes_token1,
      aux_sym_gantt_stmt_todaymarker_token1,
      aux_sym_gantt_stmt_title_token1,
      aux_sym_gantt_stmt_section_token1,
  [13664] = 3,
    ACTIONS(1167), 1,
      aux_sym_gantt_task_text_token1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1165), 11,
      ts_builtin_sym_end,
      sym__newline,
      aux_sym_gantt_stmt_dateformat_token1,
      aux_sym_gantt_stmt_inclusiveenddates_token1,
      aux_sym_gantt_stmt_topaxis_token1,
      aux_sym_gantt_stmt_axisformat_token1,
      aux_sym_gantt_stmt_includes_token1,
      aux_sym_gantt_stmt_excludes_token1,
      aux_sym_gantt_stmt_todaymarker_token1,
      aux_sym_gantt_stmt_title_token1,
      aux_sym_gantt_stmt_section_token1,
  [13685] = 11,
    ACTIONS(1076), 1,
      anon_sym_PLUS,
    ACTIONS(1078), 1,
      anon_sym_DASH,
    ACTIONS(1080), 1,
      sym__alpha_num_token,
    ACTIONS(1082), 1,
      anon_sym_TILDE,
    ACTIONS(1084), 1,
      anon_sym_POUND,
    ACTIONS(1088), 1,
      anon_sym_LT_LT,
    ACTIONS(1169), 1,
      anon_sym_RBRACE,
    STATE(352), 1,
      aux_sym_class_method_line_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1086), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
    STATE(670), 2,
      sym_class_method_line,
      sym_class_annotation_line,
  [13722] = 3,
    ACTIONS(1173), 1,
      aux_sym_gantt_task_text_token1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1171), 11,
      ts_builtin_sym_end,
      sym__newline,
      aux_sym_gantt_stmt_dateformat_token1,
      aux_sym_gantt_stmt_inclusiveenddates_token1,
      aux_sym_gantt_stmt_topaxis_token1,
      aux_sym_gantt_stmt_axisformat_token1,
      aux_sym_gantt_stmt_includes_token1,
      aux_sym_gantt_stmt_excludes_token1,
      aux_sym_gantt_stmt_todaymarker_token1,
      aux_sym_gantt_stmt_title_token1,
      aux_sym_gantt_stmt_section_token1,
  [13743] = 11,
    ACTIONS(1076), 1,
      anon_sym_PLUS,
    ACTIONS(1078), 1,
      anon_sym_DASH,
    ACTIONS(1080), 1,
      sym__alpha_num_token,
    ACTIONS(1082), 1,
      anon_sym_TILDE,
    ACTIONS(1084), 1,
      anon_sym_POUND,
    ACTIONS(1088), 1,
      anon_sym_LT_LT,
    ACTIONS(1175), 1,
      anon_sym_RBRACE,
    STATE(352), 1,
      aux_sym_class_method_line_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1086), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
    STATE(670), 2,
      sym_class_method_line,
      sym_class_annotation_line,
  [13780] = 7,
    ACTIONS(875), 1,
      sym_er_cardinarity_only_one,
    STATE(823), 1,
      sym__er_cardinarity,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(869), 2,
      anon_sym_PIPEo,
      anon_sym_o_PIPE,
    ACTIONS(871), 2,
      anon_sym_RBRACEo,
      anon_sym_o_LBRACE,
    ACTIONS(873), 2,
      anon_sym_RBRACE_PIPE,
      anon_sym_PIPE_LBRACE,
    STATE(419), 3,
      sym_er_cardinarity_zero_or_one,
      sym_er_cardinarity_zero_or_more,
      sym_er_cardinarity_one_or_more,
  [13808] = 10,
    ACTIONS(1015), 1,
      sym__alpha_num_token,
    ACTIONS(1017), 1,
      aux_sym_flow_stmt_direction_token1,
    ACTIONS(1019), 1,
      anon_sym_subgraph,
    ACTIONS(1177), 1,
      ts_builtin_sym_end,
    STATE(62), 1,
      sym_flow_vertex_id,
    STATE(217), 1,
      sym_flow_node,
    STATE(307), 1,
      sym_flow_vertex,
    STATE(559), 1,
      sym__flow_stmt,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    STATE(544), 3,
      sym_flow_stmt_direction,
      sym_flow_stmt_vertice,
      sym_flow_stmt_subgraph,
  [13842] = 5,
    ACTIONS(1183), 1,
      anon_sym_AMP,
    STATE(312), 1,
      aux_sym_flow_node_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1181), 3,
      aux_sym_flow_link_arrow_start_token1,
      aux_sym_flow_link_arrow_start_token2,
      aux_sym_flow_link_arrow_start_token3,
    ACTIONS(1179), 6,
      ts_builtin_sym_end,
      sym__newline,
      aux_sym_flow_link_arrow_token1,
      aux_sym_flow_link_arrow_token2,
      aux_sym_flow_link_arrow_token3,
      anon_sym_SEMI,
  [13866] = 10,
    ACTIONS(1076), 1,
      anon_sym_PLUS,
    ACTIONS(1078), 1,
      anon_sym_DASH,
    ACTIONS(1080), 1,
      sym__alpha_num_token,
    ACTIONS(1082), 1,
      anon_sym_TILDE,
    ACTIONS(1084), 1,
      anon_sym_POUND,
    ACTIONS(1088), 1,
      anon_sym_LT_LT,
    STATE(352), 1,
      aux_sym_class_method_line_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1086), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
    STATE(506), 2,
      sym_class_method_line,
      sym_class_annotation_line,
  [13900] = 2,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1185), 11,
      ts_builtin_sym_end,
      sym__newline,
      anon_sym_PIPEo,
      anon_sym_o_PIPE,
      anon_sym_RBRACEo,
      anon_sym_o_LBRACE,
      anon_sym_RBRACE_PIPE,
      anon_sym_PIPE_LBRACE,
      sym_er_cardinarity_only_one,
      anon_sym_COLON,
      anon_sym_LBRACE,
  [13918] = 10,
    ACTIONS(1187), 1,
      ts_builtin_sym_end,
    ACTIONS(1189), 1,
      sym__newline,
    ACTIONS(1191), 1,
      aux_sym__er_word_token1,
    ACTIONS(1193), 1,
      aux_sym_pie_showdata_token1,
    ACTIONS(1195), 1,
      aux_sym_gantt_stmt_title_token1,
    STATE(337), 1,
      sym_pie_showdata,
    STATE(771), 1,
      sym_pie_label,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    STATE(350), 2,
      sym__pie_stmt,
      aux_sym_diagram_pie_repeat1,
    STATE(460), 2,
      sym_pie_stmt_title,
      sym_pie_stmt_element,
  [13952] = 5,
    ACTIONS(1197), 1,
      aux_sym_flow_text_literal_token1,
    ACTIONS(1202), 1,
      anon_sym_RBRACK,
    STATE(303), 1,
      aux_sym_flow_text_literal_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1200), 8,
      anon_sym_DASH_RPAREN,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_RBRACK_RPAREN,
      anon_sym_RBRACK_RBRACK,
      anon_sym_PIPE_RBRACK,
      anon_sym_BSLASH_RBRACK,
      anon_sym_SLASH_RBRACK,
  [13976] = 7,
    ACTIONS(1206), 1,
      sym_sequence__solid_open_arrow,
    ACTIONS(1208), 1,
      anon_sym_DASH_DASH_GT,
    ACTIONS(1210), 1,
      anon_sym_DASH_RPAREN,
    STATE(365), 1,
      sym_sequence_signal_type,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    STATE(501), 2,
      sym_sequence__dotted_open_arrow,
      sym_sequence__solid_point,
    ACTIONS(1204), 5,
      sym_sequence__solid_arrow,
      sym_sequence__dotted_arrow,
      sym_sequence__solid_cross,
      sym_sequence__dotted_cross,
      sym_sequence__dotted_point,
  [14004] = 10,
    ACTIONS(1076), 1,
      anon_sym_PLUS,
    ACTIONS(1078), 1,
      anon_sym_DASH,
    ACTIONS(1080), 1,
      sym__alpha_num_token,
    ACTIONS(1082), 1,
      anon_sym_TILDE,
    ACTIONS(1084), 1,
      anon_sym_POUND,
    ACTIONS(1088), 1,
      anon_sym_LT_LT,
    STATE(352), 1,
      aux_sym_class_method_line_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1086), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
    STATE(670), 2,
      sym_class_method_line,
      sym_class_annotation_line,
  [14038] = 5,
    ACTIONS(1212), 1,
      aux_sym_flow_text_literal_token1,
    ACTIONS(1216), 1,
      anon_sym_RBRACK,
    STATE(303), 1,
      aux_sym_flow_text_literal_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1214), 8,
      anon_sym_DASH_RPAREN,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_RBRACK_RPAREN,
      anon_sym_RBRACK_RBRACK,
      anon_sym_PIPE_RBRACK,
      anon_sym_BSLASH_RBRACK,
      anon_sym_SLASH_RBRACK,
  [14062] = 5,
    ACTIONS(1183), 1,
      anon_sym_AMP,
    STATE(299), 1,
      aux_sym_flow_node_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1220), 3,
      aux_sym_flow_link_arrow_start_token1,
      aux_sym_flow_link_arrow_start_token2,
      aux_sym_flow_link_arrow_start_token3,
    ACTIONS(1218), 6,
      ts_builtin_sym_end,
      sym__newline,
      aux_sym_flow_link_arrow_token1,
      aux_sym_flow_link_arrow_token2,
      aux_sym_flow_link_arrow_token3,
      anon_sym_SEMI,
  [14086] = 10,
    ACTIONS(1015), 1,
      sym__alpha_num_token,
    ACTIONS(1017), 1,
      aux_sym_flow_stmt_direction_token1,
    ACTIONS(1019), 1,
      anon_sym_subgraph,
    ACTIONS(1222), 1,
      ts_builtin_sym_end,
    STATE(62), 1,
      sym_flow_vertex_id,
    STATE(217), 1,
      sym_flow_node,
    STATE(307), 1,
      sym_flow_vertex,
    STATE(559), 1,
      sym__flow_stmt,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    STATE(544), 3,
      sym_flow_stmt_direction,
      sym_flow_stmt_vertice,
      sym_flow_stmt_subgraph,
  [14120] = 7,
    ACTIONS(1206), 1,
      sym_sequence__solid_open_arrow,
    ACTIONS(1208), 1,
      anon_sym_DASH_DASH_GT,
    ACTIONS(1210), 1,
      anon_sym_DASH_RPAREN,
    STATE(354), 1,
      sym_sequence_signal_type,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    STATE(501), 2,
      sym_sequence__dotted_open_arrow,
      sym_sequence__solid_point,
    ACTIONS(1204), 5,
      sym_sequence__solid_arrow,
      sym_sequence__dotted_arrow,
      sym_sequence__solid_cross,
      sym_sequence__dotted_cross,
      sym_sequence__dotted_point,
  [14148] = 10,
    ACTIONS(1015), 1,
      sym__alpha_num_token,
    ACTIONS(1017), 1,
      aux_sym_flow_stmt_direction_token1,
    ACTIONS(1019), 1,
      anon_sym_subgraph,
    ACTIONS(1224), 1,
      ts_builtin_sym_end,
    STATE(62), 1,
      sym_flow_vertex_id,
    STATE(217), 1,
      sym_flow_node,
    STATE(307), 1,
      sym_flow_vertex,
    STATE(559), 1,
      sym__flow_stmt,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    STATE(544), 3,
      sym_flow_stmt_direction,
      sym_flow_stmt_vertice,
      sym_flow_stmt_subgraph,
  [14182] = 10,
    ACTIONS(1076), 1,
      anon_sym_PLUS,
    ACTIONS(1078), 1,
      anon_sym_DASH,
    ACTIONS(1080), 1,
      sym__alpha_num_token,
    ACTIONS(1082), 1,
      anon_sym_TILDE,
    ACTIONS(1084), 1,
      anon_sym_POUND,
    ACTIONS(1088), 1,
      anon_sym_LT_LT,
    STATE(352), 1,
      aux_sym_class_method_line_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1086), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
    STATE(654), 2,
      sym_class_method_line,
      sym_class_annotation_line,
  [14216] = 5,
    ACTIONS(1230), 1,
      anon_sym_AMP,
    STATE(312), 1,
      aux_sym_flow_node_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1228), 3,
      aux_sym_flow_link_arrow_start_token1,
      aux_sym_flow_link_arrow_start_token2,
      aux_sym_flow_link_arrow_start_token3,
    ACTIONS(1226), 6,
      ts_builtin_sym_end,
      sym__newline,
      aux_sym_flow_link_arrow_token1,
      aux_sym_flow_link_arrow_token2,
      aux_sym_flow_link_arrow_token3,
      anon_sym_SEMI,
  [14240] = 10,
    ACTIONS(1015), 1,
      sym__alpha_num_token,
    ACTIONS(1017), 1,
      aux_sym_flow_stmt_direction_token1,
    ACTIONS(1019), 1,
      anon_sym_subgraph,
    ACTIONS(1233), 1,
      sym__newline,
    STATE(62), 1,
      sym_flow_vertex_id,
    STATE(217), 1,
      sym_flow_node,
    STATE(307), 1,
      sym_flow_vertex,
    STATE(441), 1,
      sym__flow_stmt,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    STATE(544), 3,
      sym_flow_stmt_direction,
      sym_flow_stmt_vertice,
      sym_flow_stmt_subgraph,
  [14274] = 7,
    ACTIONS(1206), 1,
      sym_sequence__solid_open_arrow,
    ACTIONS(1208), 1,
      anon_sym_DASH_DASH_GT,
    ACTIONS(1210), 1,
      anon_sym_DASH_RPAREN,
    STATE(363), 1,
      sym_sequence_signal_type,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    STATE(501), 2,
      sym_sequence__dotted_open_arrow,
      sym_sequence__solid_point,
    ACTIONS(1204), 5,
      sym_sequence__solid_arrow,
      sym_sequence__dotted_arrow,
      sym_sequence__solid_cross,
      sym_sequence__dotted_cross,
      sym_sequence__dotted_point,
  [14302] = 7,
    ACTIONS(1206), 1,
      sym_sequence__solid_open_arrow,
    ACTIONS(1208), 1,
      anon_sym_DASH_DASH_GT,
    ACTIONS(1210), 1,
      anon_sym_DASH_RPAREN,
    STATE(364), 1,
      sym_sequence_signal_type,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    STATE(501), 2,
      sym_sequence__dotted_open_arrow,
      sym_sequence__solid_point,
    ACTIONS(1204), 5,
      sym_sequence__solid_arrow,
      sym_sequence__dotted_arrow,
      sym_sequence__solid_cross,
      sym_sequence__dotted_cross,
      sym_sequence__dotted_point,
  [14330] = 3,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1237), 3,
      aux_sym_flow_link_arrow_start_token1,
      aux_sym_flow_link_arrow_start_token2,
      aux_sym_flow_link_arrow_start_token3,
    ACTIONS(1235), 7,
      ts_builtin_sym_end,
      sym__newline,
      aux_sym_flow_link_arrow_token1,
      aux_sym_flow_link_arrow_token2,
      aux_sym_flow_link_arrow_token3,
      anon_sym_SEMI,
      anon_sym_AMP,
  [14349] = 3,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1241), 3,
      aux_sym_flow_link_arrow_start_token1,
      aux_sym_flow_link_arrow_start_token2,
      aux_sym_flow_link_arrow_start_token3,
    ACTIONS(1239), 7,
      ts_builtin_sym_end,
      sym__newline,
      aux_sym_flow_link_arrow_token1,
      aux_sym_flow_link_arrow_token2,
      aux_sym_flow_link_arrow_token3,
      anon_sym_SEMI,
      anon_sym_AMP,
  [14368] = 3,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1245), 3,
      aux_sym_flow_link_arrow_start_token1,
      aux_sym_flow_link_arrow_start_token2,
      aux_sym_flow_link_arrow_start_token3,
    ACTIONS(1243), 7,
      ts_builtin_sym_end,
      sym__newline,
      aux_sym_flow_link_arrow_token1,
      aux_sym_flow_link_arrow_token2,
      aux_sym_flow_link_arrow_token3,
      anon_sym_SEMI,
      anon_sym_AMP,
  [14387] = 3,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1249), 3,
      aux_sym_flow_link_arrow_start_token1,
      aux_sym_flow_link_arrow_start_token2,
      aux_sym_flow_link_arrow_start_token3,
    ACTIONS(1247), 7,
      ts_builtin_sym_end,
      sym__newline,
      aux_sym_flow_link_arrow_token1,
      aux_sym_flow_link_arrow_token2,
      aux_sym_flow_link_arrow_token3,
      anon_sym_SEMI,
      anon_sym_AMP,
  [14406] = 9,
    ACTIONS(1015), 1,
      sym__alpha_num_token,
    ACTIONS(1017), 1,
      aux_sym_flow_stmt_direction_token1,
    ACTIONS(1019), 1,
      anon_sym_subgraph,
    STATE(62), 1,
      sym_flow_vertex_id,
    STATE(217), 1,
      sym_flow_node,
    STATE(307), 1,
      sym_flow_vertex,
    STATE(559), 1,
      sym__flow_stmt,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    STATE(544), 3,
      sym_flow_stmt_direction,
      sym_flow_stmt_vertice,
      sym_flow_stmt_subgraph,
  [14437] = 3,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1253), 3,
      aux_sym_flow_link_arrow_start_token1,
      aux_sym_flow_link_arrow_start_token2,
      aux_sym_flow_link_arrow_start_token3,
    ACTIONS(1251), 7,
      ts_builtin_sym_end,
      sym__newline,
      aux_sym_flow_link_arrow_token1,
      aux_sym_flow_link_arrow_token2,
      aux_sym_flow_link_arrow_token3,
      anon_sym_SEMI,
      anon_sym_AMP,
  [14456] = 3,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1257), 3,
      aux_sym_flow_link_arrow_start_token1,
      aux_sym_flow_link_arrow_start_token2,
      aux_sym_flow_link_arrow_start_token3,
    ACTIONS(1255), 7,
      ts_builtin_sym_end,
      sym__newline,
      aux_sym_flow_link_arrow_token1,
      aux_sym_flow_link_arrow_token2,
      aux_sym_flow_link_arrow_token3,
      anon_sym_SEMI,
      anon_sym_AMP,
  [14475] = 3,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1261), 3,
      aux_sym_flow_link_arrow_start_token1,
      aux_sym_flow_link_arrow_start_token2,
      aux_sym_flow_link_arrow_start_token3,
    ACTIONS(1259), 7,
      ts_builtin_sym_end,
      sym__newline,
      aux_sym_flow_link_arrow_token1,
      aux_sym_flow_link_arrow_token2,
      aux_sym_flow_link_arrow_token3,
      anon_sym_SEMI,
      anon_sym_AMP,
  [14494] = 3,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1265), 3,
      aux_sym_flow_link_arrow_start_token1,
      aux_sym_flow_link_arrow_start_token2,
      aux_sym_flow_link_arrow_start_token3,
    ACTIONS(1263), 7,
      ts_builtin_sym_end,
      sym__newline,
      aux_sym_flow_link_arrow_token1,
      aux_sym_flow_link_arrow_token2,
      aux_sym_flow_link_arrow_token3,
      anon_sym_SEMI,
      anon_sym_AMP,
  [14513] = 3,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1269), 3,
      aux_sym_flow_link_arrow_start_token1,
      aux_sym_flow_link_arrow_start_token2,
      aux_sym_flow_link_arrow_start_token3,
    ACTIONS(1267), 7,
      ts_builtin_sym_end,
      sym__newline,
      aux_sym_flow_link_arrow_token1,
      aux_sym_flow_link_arrow_token2,
      aux_sym_flow_link_arrow_token3,
      anon_sym_SEMI,
      anon_sym_AMP,
  [14532] = 3,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1273), 3,
      aux_sym_flow_link_arrow_start_token1,
      aux_sym_flow_link_arrow_start_token2,
      aux_sym_flow_link_arrow_start_token3,
    ACTIONS(1271), 7,
      ts_builtin_sym_end,
      sym__newline,
      aux_sym_flow_link_arrow_token1,
      aux_sym_flow_link_arrow_token2,
      aux_sym_flow_link_arrow_token3,
      anon_sym_SEMI,
      anon_sym_AMP,
  [14551] = 3,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1277), 3,
      aux_sym_flow_link_arrow_start_token1,
      aux_sym_flow_link_arrow_start_token2,
      aux_sym_flow_link_arrow_start_token3,
    ACTIONS(1275), 7,
      ts_builtin_sym_end,
      sym__newline,
      aux_sym_flow_link_arrow_token1,
      aux_sym_flow_link_arrow_token2,
      aux_sym_flow_link_arrow_token3,
      anon_sym_SEMI,
      anon_sym_AMP,
  [14570] = 3,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1281), 3,
      aux_sym_flow_link_arrow_start_token1,
      aux_sym_flow_link_arrow_start_token2,
      aux_sym_flow_link_arrow_start_token3,
    ACTIONS(1279), 7,
      ts_builtin_sym_end,
      sym__newline,
      aux_sym_flow_link_arrow_token1,
      aux_sym_flow_link_arrow_token2,
      aux_sym_flow_link_arrow_token3,
      anon_sym_SEMI,
      anon_sym_AMP,
  [14589] = 9,
    ACTIONS(1015), 1,
      sym__alpha_num_token,
    ACTIONS(1017), 1,
      aux_sym_flow_stmt_direction_token1,
    ACTIONS(1019), 1,
      anon_sym_subgraph,
    STATE(62), 1,
      sym_flow_vertex_id,
    STATE(217), 1,
      sym_flow_node,
    STATE(307), 1,
      sym_flow_vertex,
    STATE(458), 1,
      sym__flow_stmt,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    STATE(544), 3,
      sym_flow_stmt_direction,
      sym_flow_stmt_vertice,
      sym_flow_stmt_subgraph,
  [14620] = 3,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1285), 3,
      aux_sym_flow_link_arrow_start_token1,
      aux_sym_flow_link_arrow_start_token2,
      aux_sym_flow_link_arrow_start_token3,
    ACTIONS(1283), 7,
      ts_builtin_sym_end,
      sym__newline,
      aux_sym_flow_link_arrow_token1,
      aux_sym_flow_link_arrow_token2,
      aux_sym_flow_link_arrow_token3,
      anon_sym_SEMI,
      anon_sym_AMP,
  [14639] = 3,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1289), 3,
      aux_sym_flow_link_arrow_start_token1,
      aux_sym_flow_link_arrow_start_token2,
      aux_sym_flow_link_arrow_start_token3,
    ACTIONS(1287), 7,
      ts_builtin_sym_end,
      sym__newline,
      aux_sym_flow_link_arrow_token1,
      aux_sym_flow_link_arrow_token2,
      aux_sym_flow_link_arrow_token3,
      anon_sym_SEMI,
      anon_sym_AMP,
  [14658] = 3,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1293), 3,
      aux_sym_flow_link_arrow_start_token1,
      aux_sym_flow_link_arrow_start_token2,
      aux_sym_flow_link_arrow_start_token3,
    ACTIONS(1291), 7,
      ts_builtin_sym_end,
      sym__newline,
      aux_sym_flow_link_arrow_token1,
      aux_sym_flow_link_arrow_token2,
      aux_sym_flow_link_arrow_token3,
      anon_sym_SEMI,
      anon_sym_AMP,
  [14677] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1297), 3,
      sym__newline,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
    ACTIONS(1295), 7,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_LPAREN_LPAREN,
      anon_sym_RPAREN_RPAREN,
      anon_sym_LBRACE_LBRACE,
      aux_sym_mmap_class_token1,
      aux_sym_mmap_icon_token1,
  [14698] = 3,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1228), 3,
      aux_sym_flow_link_arrow_start_token1,
      aux_sym_flow_link_arrow_start_token2,
      aux_sym_flow_link_arrow_start_token3,
    ACTIONS(1226), 7,
      ts_builtin_sym_end,
      sym__newline,
      aux_sym_flow_link_arrow_token1,
      aux_sym_flow_link_arrow_token2,
      aux_sym_flow_link_arrow_token3,
      anon_sym_SEMI,
      anon_sym_AMP,
  [14717] = 3,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1301), 3,
      aux_sym_flow_link_arrow_start_token1,
      aux_sym_flow_link_arrow_start_token2,
      aux_sym_flow_link_arrow_start_token3,
    ACTIONS(1299), 7,
      ts_builtin_sym_end,
      sym__newline,
      aux_sym_flow_link_arrow_token1,
      aux_sym_flow_link_arrow_token2,
      aux_sym_flow_link_arrow_token3,
      anon_sym_SEMI,
      anon_sym_AMP,
  [14736] = 3,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1305), 3,
      aux_sym_flow_link_arrow_start_token1,
      aux_sym_flow_link_arrow_start_token2,
      aux_sym_flow_link_arrow_start_token3,
    ACTIONS(1303), 7,
      ts_builtin_sym_end,
      sym__newline,
      aux_sym_flow_link_arrow_token1,
      aux_sym_flow_link_arrow_token2,
      aux_sym_flow_link_arrow_token3,
      anon_sym_SEMI,
      anon_sym_AMP,
  [14755] = 8,
    ACTIONS(1191), 1,
      aux_sym__er_word_token1,
    ACTIONS(1195), 1,
      aux_sym_gantt_stmt_title_token1,
    ACTIONS(1307), 1,
      ts_builtin_sym_end,
    ACTIONS(1309), 1,
      sym__newline,
    STATE(771), 1,
      sym_pie_label,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    STATE(344), 2,
      sym__pie_stmt,
      aux_sym_diagram_pie_repeat1,
    STATE(460), 2,
      sym_pie_stmt_title,
      sym_pie_stmt_element,
  [14783] = 3,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1311), 3,
      sym__class_name,
      sym_class_reltype_aggregation,
      anon_sym_LT,
    ACTIONS(1313), 6,
      sym__bquote_string,
      sym__dquote_string,
      anon_sym_LT_PIPE,
      anon_sym_PIPE_GT,
      anon_sym_STAR,
      anon_sym_GT,
  [14801] = 9,
    ACTIONS(1076), 1,
      anon_sym_PLUS,
    ACTIONS(1078), 1,
      anon_sym_DASH,
    ACTIONS(1080), 1,
      sym__alpha_num_token,
    ACTIONS(1082), 1,
      anon_sym_TILDE,
    ACTIONS(1084), 1,
      anon_sym_POUND,
    STATE(352), 1,
      aux_sym_class_method_line_repeat1,
    STATE(689), 1,
      sym_class_method_line,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1086), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [14831] = 6,
    ACTIONS(1319), 1,
      anon_sym_STAR,
    ACTIONS(1321), 1,
      anon_sym_DOLLAR,
    STATE(351), 1,
      aux_sym_class_method_line_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1315), 3,
      ts_builtin_sym_end,
      sym__newline,
      anon_sym_RBRACE,
    ACTIONS(1317), 3,
      sym__alpha_num_token,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [14855] = 3,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1323), 3,
      sym__class_name,
      sym_class_reltype_aggregation,
      anon_sym_LT,
    ACTIONS(1325), 6,
      sym__bquote_string,
      sym__dquote_string,
      anon_sym_LT_PIPE,
      anon_sym_PIPE_GT,
      anon_sym_STAR,
      anon_sym_GT,
  [14873] = 6,
    ACTIONS(1329), 1,
      anon_sym_STAR,
    ACTIONS(1331), 1,
      anon_sym_DOLLAR,
    STATE(351), 1,
      aux_sym_class_method_line_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1317), 3,
      sym__alpha_num_token,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
    ACTIONS(1327), 3,
      ts_builtin_sym_end,
      sym__newline,
      anon_sym_RBRACE,
  [14897] = 6,
    ACTIONS(1335), 1,
      anon_sym_STAR,
    ACTIONS(1337), 1,
      anon_sym_DOLLAR,
    STATE(351), 1,
      aux_sym_class_method_line_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1317), 3,
      sym__alpha_num_token,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
    ACTIONS(1333), 3,
      ts_builtin_sym_end,
      sym__newline,
      anon_sym_RBRACE,
  [14921] = 8,
    ACTIONS(1191), 1,
      aux_sym__er_word_token1,
    ACTIONS(1195), 1,
      aux_sym_gantt_stmt_title_token1,
    ACTIONS(1339), 1,
      ts_builtin_sym_end,
    ACTIONS(1341), 1,
      sym__newline,
    STATE(771), 1,
      sym_pie_label,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    STATE(349), 2,
      sym__pie_stmt,
      aux_sym_diagram_pie_repeat1,
    STATE(460), 2,
      sym_pie_stmt_title,
      sym_pie_stmt_element,
  [14949] = 6,
    ACTIONS(1345), 1,
      anon_sym_STAR,
    ACTIONS(1347), 1,
      anon_sym_DOLLAR,
    STATE(351), 1,
      aux_sym_class_method_line_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1317), 3,
      sym__alpha_num_token,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
    ACTIONS(1343), 3,
      ts_builtin_sym_end,
      sym__newline,
      anon_sym_RBRACE,
  [14973] = 3,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1349), 3,
      sym__class_name,
      sym_class_reltype_aggregation,
      anon_sym_LT,
    ACTIONS(1351), 6,
      sym__bquote_string,
      sym__dquote_string,
      anon_sym_LT_PIPE,
      anon_sym_PIPE_GT,
      anon_sym_STAR,
      anon_sym_GT,
  [14991] = 3,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1353), 3,
      aux_sym_flow_link_arrow_start_token1,
      aux_sym_flow_link_arrow_start_token2,
      aux_sym_flow_link_arrow_start_token3,
    ACTIONS(839), 6,
      ts_builtin_sym_end,
      sym__newline,
      aux_sym_flow_link_arrow_token1,
      aux_sym_flow_link_arrow_token2,
      aux_sym_flow_link_arrow_token3,
      anon_sym_SEMI,
  [15009] = 9,
    ACTIONS(1355), 1,
      sym__newline,
    ACTIONS(1357), 1,
      aux_sym__er_word_token1,
    ACTIONS(1359), 1,
      aux_sym_er_attribute_key_type_pk_token1,
    ACTIONS(1361), 1,
      aux_sym_er_attribute_key_type_fk_token1,
    STATE(455), 1,
      sym__er_attribute_key_type,
    STATE(842), 1,
      sym_er_attribute_comment,
    STATE(844), 1,
      sym__er_word,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    STATE(717), 2,
      sym_er_attribute_key_type_pk,
      sym_er_attribute_key_type_fk,
  [15039] = 8,
    ACTIONS(1363), 1,
      ts_builtin_sym_end,
    ACTIONS(1365), 1,
      sym__newline,
    ACTIONS(1368), 1,
      aux_sym__er_word_token1,
    ACTIONS(1371), 1,
      aux_sym_gantt_stmt_title_token1,
    STATE(771), 1,
      sym_pie_label,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    STATE(349), 2,
      sym__pie_stmt,
      aux_sym_diagram_pie_repeat1,
    STATE(460), 2,
      sym_pie_stmt_title,
      sym_pie_stmt_element,
  [15067] = 8,
    ACTIONS(1191), 1,
      aux_sym__er_word_token1,
    ACTIONS(1195), 1,
      aux_sym_gantt_stmt_title_token1,
    ACTIONS(1307), 1,
      ts_builtin_sym_end,
    ACTIONS(1341), 1,
      sym__newline,
    STATE(771), 1,
      sym_pie_label,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    STATE(349), 2,
      sym__pie_stmt,
      aux_sym_diagram_pie_repeat1,
    STATE(460), 2,
      sym_pie_stmt_title,
      sym_pie_stmt_element,
  [15095] = 4,
    STATE(351), 1,
      aux_sym_class_method_line_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1376), 3,
      sym__alpha_num_token,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
    ACTIONS(1374), 5,
      ts_builtin_sym_end,
      sym__newline,
      anon_sym_STAR,
      anon_sym_RBRACE,
      anon_sym_DOLLAR,
  [15115] = 6,
    ACTIONS(1381), 1,
      anon_sym_STAR,
    ACTIONS(1383), 1,
      anon_sym_DOLLAR,
    STATE(351), 1,
      aux_sym_class_method_line_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1317), 3,
      sym__alpha_num_token,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
    ACTIONS(1379), 3,
      ts_builtin_sym_end,
      sym__newline,
      anon_sym_RBRACE,
  [15139] = 6,
    ACTIONS(1385), 1,
      sym__newline,
    ACTIONS(1387), 1,
      sym__er_alphanum,
    STATE(223), 1,
      sym_er_entity_name,
    STATE(536), 1,
      sym__er_stmt,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    STATE(701), 3,
      sym_er_stmt_entity,
      sym_er_stmt_entity_relation,
      sym_er_stmt_entity_block,
  [15161] = 8,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(33), 1,
      sym__sequence_actor_word,
    ACTIONS(1389), 1,
      anon_sym_PLUS,
    ACTIONS(1391), 1,
      anon_sym_DASH,
    STATE(245), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(904), 1,
      sym_sequence_actor,
    STATE(541), 2,
      sym_sequence_signal_plus_sign,
      sym_sequence_signal_minus_sign,
  [15187] = 6,
    ACTIONS(1387), 1,
      sym__er_alphanum,
    ACTIONS(1393), 1,
      ts_builtin_sym_end,
    STATE(223), 1,
      sym_er_entity_name,
    STATE(743), 1,
      sym__er_stmt,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    STATE(701), 3,
      sym_er_stmt_entity,
      sym_er_stmt_entity_relation,
      sym_er_stmt_entity_block,
  [15209] = 2,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1395), 7,
      anon_sym_PIPEo,
      anon_sym_o_PIPE,
      anon_sym_RBRACEo,
      anon_sym_o_LBRACE,
      anon_sym_RBRACE_PIPE,
      anon_sym_PIPE_LBRACE,
      sym_er_cardinarity_only_one,
  [15223] = 2,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1397), 7,
      anon_sym_PIPEo,
      anon_sym_o_PIPE,
      anon_sym_RBRACEo,
      anon_sym_o_LBRACE,
      anon_sym_RBRACE_PIPE,
      anon_sym_PIPE_LBRACE,
      sym_er_cardinarity_only_one,
  [15237] = 2,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1399), 7,
      anon_sym_PIPEo,
      anon_sym_o_PIPE,
      anon_sym_RBRACEo,
      anon_sym_o_LBRACE,
      anon_sym_RBRACE_PIPE,
      anon_sym_PIPE_LBRACE,
      sym_er_cardinarity_only_one,
  [15251] = 3,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(929), 2,
      sym__class_name,
      sym__bquote_string,
    ACTIONS(931), 5,
      ts_builtin_sym_end,
      sym__newline,
      anon_sym_TILDE,
      anon_sym_COLON_COLON_COLON,
      anon_sym_LBRACE,
  [15267] = 6,
    ACTIONS(1387), 1,
      sym__er_alphanum,
    ACTIONS(1401), 1,
      ts_builtin_sym_end,
    STATE(223), 1,
      sym_er_entity_name,
    STATE(743), 1,
      sym__er_stmt,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    STATE(701), 3,
      sym_er_stmt_entity,
      sym_er_stmt_entity_relation,
      sym_er_stmt_entity_block,
  [15289] = 5,
    ACTIONS(1403), 1,
      anon_sym_DASH_DASH,
    STATE(297), 1,
      sym__er_reltype,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    STATE(358), 2,
      sym_er_reltype_non_identifying,
      sym_er_reltype_identifying,
    ACTIONS(1405), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DASH,
      anon_sym_DASH_DOT,
  [15309] = 6,
    ACTIONS(1387), 1,
      sym__er_alphanum,
    ACTIONS(1407), 1,
      ts_builtin_sym_end,
    STATE(223), 1,
      sym_er_entity_name,
    STATE(743), 1,
      sym__er_stmt,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    STATE(701), 3,
      sym_er_stmt_entity,
      sym_er_stmt_entity_relation,
      sym_er_stmt_entity_block,
  [15331] = 8,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(33), 1,
      sym__sequence_actor_word,
    ACTIONS(1389), 1,
      anon_sym_PLUS,
    ACTIONS(1391), 1,
      anon_sym_DASH,
    STATE(245), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(861), 1,
      sym_sequence_actor,
    STATE(640), 2,
      sym_sequence_signal_plus_sign,
      sym_sequence_signal_minus_sign,
  [15357] = 8,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(33), 1,
      sym__sequence_actor_word,
    ACTIONS(1389), 1,
      anon_sym_PLUS,
    ACTIONS(1391), 1,
      anon_sym_DASH,
    STATE(245), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(877), 1,
      sym_sequence_actor,
    STATE(646), 2,
      sym_sequence_signal_plus_sign,
      sym_sequence_signal_minus_sign,
  [15383] = 8,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(33), 1,
      sym__sequence_actor_word,
    ACTIONS(1389), 1,
      anon_sym_PLUS,
    ACTIONS(1391), 1,
      anon_sym_DASH,
    STATE(245), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(893), 1,
      sym_sequence_actor,
    STATE(651), 2,
      sym_sequence_signal_plus_sign,
      sym_sequence_signal_minus_sign,
  [15409] = 3,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(929), 2,
      sym__class_name,
      sym__bquote_string,
    ACTIONS(1055), 5,
      ts_builtin_sym_end,
      sym__newline,
      anon_sym_TILDE,
      anon_sym_COLON_COLON_COLON,
      anon_sym_LBRACE,
  [15425] = 3,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1411), 2,
      sym__alpha_num_token,
      anon_sym_subgraph,
    ACTIONS(1409), 4,
      ts_builtin_sym_end,
      sym__newline,
      anon_sym_SEMI,
      aux_sym_flow_stmt_direction_token1,
  [15440] = 3,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1415), 2,
      sym__alpha_num_token,
      anon_sym_subgraph,
    ACTIONS(1413), 4,
      ts_builtin_sym_end,
      sym__newline,
      anon_sym_SEMI,
      aux_sym_flow_stmt_direction_token1,
  [15455] = 4,
    ACTIONS(1417), 1,
      anon_sym_TILDE,
    STATE(435), 1,
      sym_class_generics,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(901), 4,
      ts_builtin_sym_end,
      sym__newline,
      anon_sym_COLON_COLON_COLON,
      anon_sym_LBRACE,
  [15472] = 6,
    ACTIONS(1419), 1,
      aux_sym_note_placement_left_token1,
    ACTIONS(1421), 1,
      aux_sym_note_placement_right_token1,
    ACTIONS(1423), 1,
      aux_sym_sequence_stmt_note_token2,
    STATE(650), 1,
      sym_sequence_note_placement,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    STATE(801), 2,
      sym_note_placement_left,
      sym_note_placement_right,
  [15493] = 3,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1427), 2,
      sym__alpha_num_token,
      anon_sym_subgraph,
    ACTIONS(1425), 4,
      ts_builtin_sym_end,
      sym__newline,
      anon_sym_SEMI,
      aux_sym_flow_stmt_direction_token1,
  [15508] = 3,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(929), 2,
      sym__class_name,
      sym__bquote_string,
    ACTIONS(931), 4,
      ts_builtin_sym_end,
      sym__newline,
      anon_sym_COLON,
      anon_sym_TILDE,
  [15523] = 3,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(929), 2,
      sym__class_name,
      sym__bquote_string,
    ACTIONS(1055), 4,
      ts_builtin_sym_end,
      sym__newline,
      anon_sym_COLON,
      anon_sym_TILDE,
  [15538] = 3,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1431), 2,
      sym__alpha_num_token,
      anon_sym_subgraph,
    ACTIONS(1429), 4,
      ts_builtin_sym_end,
      sym__newline,
      anon_sym_SEMI,
      aux_sym_flow_stmt_direction_token1,
  [15553] = 6,
    ACTIONS(1435), 1,
      sym__alpha_num_token,
    STATE(390), 1,
      aux_sym_flow_arrow_text_repeat1,
    STATE(732), 1,
      sym_flow_vertex_text,
    STATE(794), 1,
      sym_flow_vertex_id,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1433), 2,
      sym__newline,
      anon_sym_SEMI,
  [15574] = 6,
    ACTIONS(1419), 1,
      aux_sym_note_placement_left_token1,
    ACTIONS(1421), 1,
      aux_sym_note_placement_right_token1,
    ACTIONS(1437), 1,
      aux_sym_sequence_stmt_note_token2,
    STATE(552), 1,
      sym_sequence_note_placement,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    STATE(801), 2,
      sym_note_placement_left,
      sym_note_placement_right,
  [15595] = 7,
    ACTIONS(969), 1,
      sym__bquote_string,
    ACTIONS(1439), 1,
      sym__class_name,
    ACTIONS(1441), 1,
      sym__dquote_string,
    STATE(227), 1,
      sym_class_name_body,
    STATE(496), 1,
      sym_class_name,
    STATE(566), 1,
      aux_sym_class_name_body_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [15618] = 5,
    ACTIONS(1387), 1,
      sym__er_alphanum,
    STATE(223), 1,
      sym_er_entity_name,
    STATE(532), 1,
      sym__er_stmt,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    STATE(701), 3,
      sym_er_stmt_entity,
      sym_er_stmt_entity_relation,
      sym_er_stmt_entity_block,
  [15637] = 5,
    ACTIONS(1387), 1,
      sym__er_alphanum,
    STATE(223), 1,
      sym_er_entity_name,
    STATE(743), 1,
      sym__er_stmt,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    STATE(701), 3,
      sym_er_stmt_entity,
      sym_er_stmt_entity_relation,
      sym_er_stmt_entity_block,
  [15656] = 4,
    ACTIONS(1445), 1,
      sym__alpha_num_token,
    STATE(380), 1,
      aux_sym_flow_arrow_text_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1443), 4,
      sym__newline,
      anon_sym_SEMI,
      anon_sym_PIPE,
      anon_sym_RBRACK,
  [15673] = 6,
    ACTIONS(1448), 1,
      sym__er_alphanum,
    ACTIONS(1450), 1,
      anon_sym_RBRACE,
    STATE(698), 1,
      sym_er_attribute_type,
    STATE(818), 1,
      sym_er_stmt_entity_block_inner,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    STATE(424), 2,
      sym_er_attribute,
      aux_sym_er_stmt_entity_block_inner_repeat1,
  [15694] = 3,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1454), 2,
      sym__alpha_num_token,
      anon_sym_subgraph,
    ACTIONS(1452), 4,
      ts_builtin_sym_end,
      sym__newline,
      anon_sym_SEMI,
      aux_sym_flow_stmt_direction_token1,
  [15709] = 7,
    ACTIONS(969), 1,
      sym__bquote_string,
    ACTIONS(1439), 1,
      sym__class_name,
    ACTIONS(1456), 1,
      sym__dquote_string,
    STATE(227), 1,
      sym_class_name_body,
    STATE(550), 1,
      sym_class_name,
    STATE(566), 1,
      aux_sym_class_name_body_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [15732] = 6,
    ACTIONS(1419), 1,
      aux_sym_note_placement_left_token1,
    ACTIONS(1421), 1,
      aux_sym_note_placement_right_token1,
    ACTIONS(1458), 1,
      aux_sym_sequence_stmt_note_token2,
    STATE(638), 1,
      sym_sequence_note_placement,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    STATE(801), 2,
      sym_note_placement_left,
      sym_note_placement_right,
  [15753] = 8,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(799), 1,
      aux_sym_mmap_class_token1,
    ACTIONS(801), 1,
      aux_sym_mmap_icon_token1,
    ACTIONS(1460), 1,
      ts_builtin_sym_end,
    ACTIONS(1462), 1,
      sym__newline,
    STATE(450), 1,
      sym_mmap_icon,
    STATE(687), 1,
      sym_mmap_class,
  [15778] = 6,
    ACTIONS(1419), 1,
      aux_sym_note_placement_left_token1,
    ACTIONS(1421), 1,
      aux_sym_note_placement_right_token1,
    ACTIONS(1464), 1,
      aux_sym_sequence_stmt_note_token2,
    STATE(644), 1,
      sym_sequence_note_placement,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    STATE(801), 2,
      sym_note_placement_left,
      sym_note_placement_right,
  [15799] = 5,
    ACTIONS(1466), 1,
      aux_sym_flow_text_literal_token1,
    ACTIONS(1468), 1,
      sym_flow_text_quoted,
    STATE(411), 1,
      aux_sym_flow_text_literal_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    STATE(768), 2,
      sym_flow_text_literal,
      sym__flow_text,
  [15817] = 2,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1470), 5,
      sym__class_name,
      sym__bquote_string,
      sym__dquote_string,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
  [15829] = 5,
    ACTIONS(1472), 1,
      aux_sym_note_placement_left_token1,
    ACTIONS(1474), 1,
      aux_sym_note_placement_right_token1,
    STATE(521), 1,
      sym_state_note_placement,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    STATE(709), 2,
      sym_note_placement_left,
      sym_note_placement_right,
  [15847] = 4,
    ACTIONS(1478), 1,
      sym__alpha_num_token,
    STATE(380), 1,
      aux_sym_flow_arrow_text_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1476), 3,
      sym__newline,
      anon_sym_SEMI,
      anon_sym_RBRACK,
  [15863] = 5,
    ACTIONS(1480), 1,
      sym__dquote_string,
    STATE(219), 1,
      sym_state_alias,
    STATE(235), 1,
      sym_state_name,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(607), 2,
      anon_sym_LBRACK_STAR_RBRACK,
      aux_sym_state_name_token1,
  [15881] = 5,
    ACTIONS(863), 1,
      anon_sym_DASH_DASH_GT,
    ACTIONS(865), 1,
      anon_sym_COLON,
    STATE(526), 1,
      sym_state_arrow,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(859), 2,
      ts_builtin_sym_end,
      sym__newline,
  [15899] = 5,
    ACTIONS(1482), 1,
      aux_sym_flow_text_literal_token1,
    ACTIONS(1484), 1,
      sym_flow_text_quoted,
    STATE(306), 1,
      aux_sym_flow_text_literal_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    STATE(907), 2,
      sym_flow_text_literal,
      sym__flow_text,
  [15917] = 5,
    ACTIONS(1482), 1,
      aux_sym_flow_text_literal_token1,
    ACTIONS(1486), 1,
      sym_flow_text_quoted,
    STATE(306), 1,
      aux_sym_flow_text_literal_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    STATE(910), 2,
      sym_flow_text_literal,
      sym__flow_text,
  [15935] = 5,
    ACTIONS(1482), 1,
      aux_sym_flow_text_literal_token1,
    ACTIONS(1488), 1,
      sym_flow_text_quoted,
    STATE(306), 1,
      aux_sym_flow_text_literal_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    STATE(912), 2,
      sym_flow_text_literal,
      sym__flow_text,
  [15953] = 5,
    ACTIONS(1482), 1,
      aux_sym_flow_text_literal_token1,
    ACTIONS(1490), 1,
      sym_flow_text_quoted,
    STATE(306), 1,
      aux_sym_flow_text_literal_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    STATE(913), 2,
      sym_flow_text_literal,
      sym__flow_text,
  [15971] = 5,
    ACTIONS(1466), 1,
      aux_sym_flow_text_literal_token1,
    ACTIONS(1492), 1,
      sym_flow_text_quoted,
    STATE(411), 1,
      aux_sym_flow_text_literal_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    STATE(914), 2,
      sym_flow_text_literal,
      sym__flow_text,
  [15989] = 5,
    ACTIONS(1482), 1,
      aux_sym_flow_text_literal_token1,
    ACTIONS(1494), 1,
      sym_flow_text_quoted,
    STATE(306), 1,
      aux_sym_flow_text_literal_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    STATE(916), 2,
      sym_flow_text_literal,
      sym__flow_text,
  [16007] = 5,
    ACTIONS(1482), 1,
      aux_sym_flow_text_literal_token1,
    ACTIONS(1496), 1,
      sym_flow_text_quoted,
    STATE(306), 1,
      aux_sym_flow_text_literal_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    STATE(763), 2,
      sym_flow_text_literal,
      sym__flow_text,
  [16025] = 5,
    ACTIONS(1482), 1,
      aux_sym_flow_text_literal_token1,
    ACTIONS(1498), 1,
      sym_flow_text_quoted,
    STATE(306), 1,
      aux_sym_flow_text_literal_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    STATE(764), 2,
      sym_flow_text_literal,
      sym__flow_text,
  [16043] = 2,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1500), 5,
      sym__class_name,
      sym__bquote_string,
      sym__dquote_string,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
  [16055] = 2,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(931), 5,
      ts_builtin_sym_end,
      sym__newline,
      anon_sym_TILDE,
      anon_sym_COLON_COLON_COLON,
      anon_sym_LBRACE,
  [16067] = 2,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1502), 5,
      sym__class_name,
      sym__bquote_string,
      sym__dquote_string,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
  [16079] = 5,
    ACTIONS(1482), 1,
      aux_sym_flow_text_literal_token1,
    ACTIONS(1504), 1,
      sym_flow_text_quoted,
    STATE(306), 1,
      aux_sym_flow_text_literal_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    STATE(765), 2,
      sym_flow_text_literal,
      sym__flow_text,
  [16097] = 5,
    ACTIONS(1466), 1,
      aux_sym_flow_text_literal_token1,
    ACTIONS(1506), 1,
      sym_flow_text_quoted,
    STATE(411), 1,
      aux_sym_flow_text_literal_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    STATE(766), 2,
      sym_flow_text_literal,
      sym__flow_text,
  [16115] = 2,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1508), 5,
      sym__class_name,
      sym__bquote_string,
      sym__dquote_string,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
  [16127] = 5,
    ACTIONS(1472), 1,
      aux_sym_note_placement_left_token1,
    ACTIONS(1474), 1,
      aux_sym_note_placement_right_token1,
    STATE(590), 1,
      sym_state_note_placement,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    STATE(709), 2,
      sym_note_placement_left,
      sym_note_placement_right,
  [16145] = 5,
    ACTIONS(1482), 1,
      aux_sym_flow_text_literal_token1,
    ACTIONS(1510), 1,
      sym_flow_text_quoted,
    STATE(306), 1,
      aux_sym_flow_text_literal_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    STATE(746), 2,
      sym_flow_text_literal,
      sym__flow_text,
  [16163] = 5,
    ACTIONS(1482), 1,
      aux_sym_flow_text_literal_token1,
    ACTIONS(1512), 1,
      sym_flow_text_quoted,
    STATE(306), 1,
      aux_sym_flow_text_literal_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    STATE(705), 2,
      sym_flow_text_literal,
      sym__flow_text,
  [16181] = 4,
    ACTIONS(1514), 1,
      sym__alpha_num_token,
    STATE(410), 1,
      aux_sym_flow_arrow_text_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1443), 3,
      aux_sym_flow_link_arrow_token1,
      aux_sym_flow_link_arrow_token2,
      aux_sym_flow_link_arrow_token3,
  [16197] = 4,
    ACTIONS(1517), 1,
      aux_sym_flow_text_literal_token1,
    STATE(414), 1,
      aux_sym_flow_text_literal_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1214), 3,
      anon_sym_RPAREN_RPAREN,
      anon_sym_RPAREN_RBRACK,
      anon_sym_RBRACE_RBRACE,
  [16213] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1521), 1,
      aux_sym__er_word_token1,
    ACTIONS(1523), 1,
      sym_pie_title,
    ACTIONS(1519), 3,
      ts_builtin_sym_end,
      sym__newline,
      aux_sym_gantt_stmt_title_token1,
  [16231] = 6,
    ACTIONS(1525), 1,
      sym__class_name,
    ACTIONS(1527), 1,
      sym__bquote_string,
    STATE(369), 1,
      sym_class_name_body,
    STATE(453), 1,
      sym_class_name,
    STATE(478), 1,
      aux_sym_class_name_body_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [16251] = 4,
    ACTIONS(1529), 1,
      aux_sym_flow_text_literal_token1,
    STATE(414), 1,
      aux_sym_flow_text_literal_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1200), 3,
      anon_sym_RPAREN_RPAREN,
      anon_sym_RPAREN_RBRACK,
      anon_sym_RBRACE_RBRACE,
  [16267] = 5,
    ACTIONS(815), 1,
      anon_sym_DASH_DASH,
    ACTIONS(817), 1,
      anon_sym_DOT_DOT,
    STATE(243), 1,
      sym__class_linetype,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    STATE(341), 2,
      sym_class_linetype_solid,
      sym_class_linetype_dotted,
  [16285] = 2,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1532), 5,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      sym__er_alphanum,
      anon_sym_DOT_DASH,
      anon_sym_DASH_DOT,
  [16297] = 2,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1534), 5,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      sym__er_alphanum,
      anon_sym_DOT_DASH,
      anon_sym_DASH_DOT,
  [16309] = 2,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1536), 5,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      sym__er_alphanum,
      anon_sym_DOT_DASH,
      anon_sym_DASH_DOT,
  [16321] = 2,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1538), 5,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      sym__er_alphanum,
      anon_sym_DOT_DASH,
      anon_sym_DASH_DOT,
  [16333] = 5,
    ACTIONS(1540), 1,
      sym__er_alphanum,
    ACTIONS(1543), 1,
      anon_sym_RBRACE,
    STATE(698), 1,
      sym_er_attribute_type,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    STATE(420), 2,
      sym_er_attribute,
      aux_sym_er_stmt_entity_block_inner_repeat1,
  [16351] = 6,
    ACTIONS(969), 1,
      sym__bquote_string,
    ACTIONS(1525), 1,
      sym__class_name,
    STATE(227), 1,
      sym_class_name_body,
    STATE(577), 1,
      aux_sym_class_name_body_repeat1,
    STATE(719), 1,
      sym_class_name,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [16371] = 6,
    ACTIONS(969), 1,
      sym__bquote_string,
    ACTIONS(1439), 1,
      sym__class_name,
    STATE(227), 1,
      sym_class_name_body,
    STATE(496), 1,
      sym_class_name,
    STATE(566), 1,
      aux_sym_class_name_body_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [16391] = 6,
    ACTIONS(969), 1,
      sym__bquote_string,
    ACTIONS(1439), 1,
      sym__class_name,
    STATE(227), 1,
      sym_class_name_body,
    STATE(479), 1,
      sym_class_name,
    STATE(566), 1,
      aux_sym_class_name_body_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [16411] = 5,
    ACTIONS(1448), 1,
      sym__er_alphanum,
    ACTIONS(1545), 1,
      anon_sym_RBRACE,
    STATE(698), 1,
      sym_er_attribute_type,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    STATE(420), 2,
      sym_er_attribute,
      aux_sym_er_stmt_entity_block_inner_repeat1,
  [16429] = 4,
    ACTIONS(1547), 1,
      sym__alpha_num_token,
    STATE(410), 1,
      aux_sym_flow_arrow_text_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1549), 3,
      aux_sym_flow_link_arrow_token1,
      aux_sym_flow_link_arrow_token2,
      aux_sym_flow_link_arrow_token3,
  [16445] = 6,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1551), 1,
      sym__md_start,
    ACTIONS(1553), 1,
      aux_sym_mmap_text_token1,
    STATE(882), 1,
      sym_mmap_node_content,
    STATE(443), 2,
      sym_mmap_markdown,
      sym_mmap_text,
  [16465] = 6,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1551), 1,
      sym__md_start,
    ACTIONS(1553), 1,
      aux_sym_mmap_text_token1,
    STATE(891), 1,
      sym_mmap_node_content,
    STATE(443), 2,
      sym_mmap_markdown,
      sym_mmap_text,
  [16485] = 6,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1551), 1,
      sym__md_start,
    ACTIONS(1553), 1,
      aux_sym_mmap_text_token1,
    STATE(749), 1,
      sym_mmap_node_content,
    STATE(443), 2,
      sym_mmap_markdown,
      sym_mmap_text,
  [16505] = 6,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1555), 1,
      sym__md_start,
    ACTIONS(1557), 1,
      aux_sym_mmap_text_token1,
    STATE(753), 1,
      sym_mmap_node_content,
    STATE(727), 2,
      sym_mmap_markdown,
      sym_mmap_text,
  [16525] = 6,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1555), 1,
      sym__md_start,
    ACTIONS(1557), 1,
      aux_sym_mmap_text_token1,
    STATE(760), 1,
      sym_mmap_node_content,
    STATE(727), 2,
      sym_mmap_markdown,
      sym_mmap_text,
  [16545] = 6,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1551), 1,
      sym__md_start,
    ACTIONS(1553), 1,
      aux_sym_mmap_text_token1,
    STATE(777), 1,
      sym_mmap_node_content,
    STATE(443), 2,
      sym_mmap_markdown,
      sym_mmap_text,
  [16565] = 2,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1055), 5,
      ts_builtin_sym_end,
      sym__newline,
      anon_sym_TILDE,
      anon_sym_COLON_COLON_COLON,
      anon_sym_LBRACE,
  [16577] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1561), 1,
      sym__newline,
    ACTIONS(1559), 3,
      ts_builtin_sym_end,
      aux_sym_mmap_class_token1,
      aux_sym_mmap_icon_token1,
  [16592] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1563), 1,
      sym__sequence_actor_word,
    STATE(434), 1,
      aux_sym_sequence_actor_repeat1,
    ACTIONS(1061), 2,
      sym__newline,
      aux_sym_sequence_stmt_participant_token1,
  [16609] = 2,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1125), 4,
      ts_builtin_sym_end,
      sym__newline,
      anon_sym_COLON_COLON_COLON,
      anon_sym_LBRACE,
  [16620] = 2,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1566), 4,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE_RBRACE,
  [16631] = 5,
    ACTIONS(1568), 1,
      sym__alpha_num_token,
    STATE(62), 1,
      sym_flow_vertex_id,
    STATE(307), 1,
      sym_flow_vertex,
    STATE(347), 1,
      sym_flow_node,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [16648] = 6,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(799), 1,
      aux_sym_mmap_class_token1,
    ACTIONS(1460), 1,
      ts_builtin_sym_end,
    ACTIONS(1462), 1,
      sym__newline,
    STATE(687), 1,
      sym_mmap_class,
  [16667] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(893), 1,
      aux_sym_class_label_token1,
    STATE(244), 1,
      sym_state_description,
    ACTIONS(889), 2,
      ts_builtin_sym_end,
      sym__newline,
  [16684] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1570), 1,
      sym__sequence_actor_word,
    STATE(434), 1,
      aux_sym_sequence_actor_repeat1,
    ACTIONS(985), 2,
      sym__newline,
      aux_sym_sequence_stmt_participant_token1,
  [16701] = 4,
    ACTIONS(1572), 1,
      ts_builtin_sym_end,
    STATE(463), 1,
      aux_sym_diagram_flow_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1574), 2,
      sym__newline,
      anon_sym_SEMI,
  [16716] = 3,
    ACTIONS(1576), 1,
      aux_sym_flow_stmt_direction_token1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1107), 3,
      sym__alpha_num_token,
      anon_sym_subgraph,
      anon_sym_end,
  [16729] = 2,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1578), 4,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE_RBRACE,
  [16740] = 6,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1580), 1,
      sym__newline,
    ACTIONS(1582), 1,
      aux_sym_gantt_meta_format_token1,
    STATE(800), 1,
      sym_sequence_text,
    STATE(821), 1,
      sym__sequence_rest_text,
  [16759] = 3,
    STATE(345), 1,
      aux_sym_class_method_line_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1584), 3,
      sym__alpha_num_token,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [16772] = 3,
    STATE(340), 1,
      aux_sym_class_method_line_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1586), 3,
      sym__alpha_num_token,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [16785] = 3,
    STATE(343), 1,
      aux_sym_class_method_line_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1588), 3,
      sym__alpha_num_token,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [16798] = 3,
    STATE(342), 1,
      aux_sym_class_method_line_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1590), 3,
      sym__alpha_num_token,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [16811] = 3,
    ACTIONS(649), 1,
      anon_sym_LBRACK,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1592), 3,
      sym__newline,
      sym__alpha_num_token,
      anon_sym_SEMI,
  [16824] = 6,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(799), 1,
      aux_sym_mmap_class_token1,
    ACTIONS(1594), 1,
      ts_builtin_sym_end,
    ACTIONS(1596), 1,
      sym__newline,
    STATE(688), 1,
      sym_mmap_class,
  [16843] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1600), 1,
      aux_sym_class_label_token1,
    STATE(691), 1,
      sym_class_label,
    ACTIONS(1598), 2,
      ts_builtin_sym_end,
      sym__newline,
  [16860] = 2,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1602), 4,
      ts_builtin_sym_end,
      sym__newline,
      aux_sym__er_word_token1,
      aux_sym_gantt_stmt_title_token1,
  [16871] = 4,
    ACTIONS(1606), 1,
      anon_sym_COLON_COLON_COLON,
    ACTIONS(1608), 1,
      anon_sym_LBRACE,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1604), 2,
      ts_builtin_sym_end,
      sym__newline,
  [16886] = 4,
    ACTIONS(1224), 1,
      ts_builtin_sym_end,
    STATE(456), 1,
      aux_sym_diagram_flow_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1610), 2,
      sym__newline,
      anon_sym_SEMI,
  [16901] = 5,
    ACTIONS(1357), 1,
      aux_sym__er_word_token1,
    ACTIONS(1612), 1,
      sym__newline,
    STATE(844), 1,
      sym__er_word,
    STATE(906), 1,
      sym_er_attribute_comment,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [16918] = 4,
    ACTIONS(1614), 1,
      ts_builtin_sym_end,
    STATE(456), 1,
      aux_sym_diagram_flow_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1616), 2,
      sym__newline,
      anon_sym_SEMI,
  [16933] = 3,
    STATE(848), 1,
      sym_flow_link_arrow,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(823), 3,
      aux_sym_flow_link_arrow_token1,
      aux_sym_flow_link_arrow_token2,
      aux_sym_flow_link_arrow_token3,
  [16946] = 4,
    ACTIONS(1177), 1,
      ts_builtin_sym_end,
    STATE(454), 1,
      aux_sym_diagram_flow_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1619), 2,
      sym__newline,
      anon_sym_SEMI,
  [16961] = 2,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1621), 4,
      ts_builtin_sym_end,
      sym__newline,
      aux_sym__er_word_token1,
      aux_sym_gantt_stmt_title_token1,
  [16972] = 2,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1623), 4,
      ts_builtin_sym_end,
      sym__newline,
      aux_sym__er_word_token1,
      aux_sym_gantt_stmt_title_token1,
  [16983] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1600), 1,
      aux_sym_class_label_token1,
    STATE(734), 1,
      sym_class_label,
    ACTIONS(1625), 2,
      ts_builtin_sym_end,
      sym__newline,
  [17000] = 2,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1090), 4,
      ts_builtin_sym_end,
      sym__newline,
      anon_sym_COLON_COLON_COLON,
      anon_sym_LBRACE,
  [17011] = 4,
    ACTIONS(1177), 1,
      ts_builtin_sym_end,
    STATE(456), 1,
      aux_sym_diagram_flow_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1619), 2,
      sym__newline,
      anon_sym_SEMI,
  [17026] = 2,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1627), 4,
      ts_builtin_sym_end,
      sym__newline,
      aux_sym__er_word_token1,
      aux_sym_gantt_stmt_title_token1,
  [17037] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1600), 1,
      aux_sym_class_label_token1,
    STATE(661), 1,
      sym_class_label,
    ACTIONS(1629), 2,
      ts_builtin_sym_end,
      sym__newline,
  [17054] = 6,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1582), 1,
      aux_sym_gantt_meta_format_token1,
    ACTIONS(1631), 1,
      sym__newline,
    STATE(821), 1,
      sym__sequence_rest_text,
    STATE(858), 1,
      sym_sequence_text,
  [17073] = 2,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1633), 4,
      sym__newline,
      aux_sym__er_word_token1,
      aux_sym_er_attribute_key_type_pk_token1,
      aux_sym_er_attribute_key_type_fk_token1,
  [17084] = 6,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1582), 1,
      aux_sym_gantt_meta_format_token1,
    ACTIONS(1635), 1,
      sym__newline,
    STATE(821), 1,
      sym__sequence_rest_text,
    STATE(874), 1,
      sym_sequence_text,
  [17103] = 6,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1582), 1,
      aux_sym_gantt_meta_format_token1,
    ACTIONS(1637), 1,
      sym__newline,
    STATE(821), 1,
      sym__sequence_rest_text,
    STATE(890), 1,
      sym_sequence_text,
  [17122] = 2,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1639), 4,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE_RBRACE,
  [17133] = 6,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1582), 1,
      aux_sym_gantt_meta_format_token1,
    ACTIONS(1641), 1,
      sym__newline,
    STATE(793), 1,
      sym_sequence_text,
    STATE(821), 1,
      sym__sequence_rest_text,
  [17152] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1645), 1,
      sym__newline,
    ACTIONS(1643), 3,
      ts_builtin_sym_end,
      aux_sym_mmap_class_token1,
      aux_sym_mmap_icon_token1,
  [17167] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1649), 1,
      sym__newline,
    ACTIONS(1647), 3,
      ts_builtin_sym_end,
      aux_sym_mmap_class_token1,
      aux_sym_mmap_icon_token1,
  [17182] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1653), 1,
      sym__newline,
    ACTIONS(1651), 3,
      ts_builtin_sym_end,
      aux_sym_mmap_class_token1,
      aux_sym_mmap_icon_token1,
  [17197] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1657), 1,
      sym__newline,
    ACTIONS(1655), 3,
      ts_builtin_sym_end,
      aux_sym_mmap_class_token1,
      aux_sym_mmap_icon_token1,
  [17212] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1661), 1,
      sym__newline,
    ACTIONS(1659), 3,
      ts_builtin_sym_end,
      aux_sym_mmap_class_token1,
      aux_sym_mmap_icon_token1,
  [17227] = 4,
    STATE(672), 1,
      sym__er_word,
    STATE(673), 1,
      sym_er_role,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1663), 2,
      aux_sym__er_word_token1,
      sym__er_alphanum,
  [17242] = 4,
    ACTIONS(1665), 1,
      sym__class_name,
    ACTIONS(1667), 1,
      sym__bquote_string,
    STATE(645), 1,
      aux_sym_class_name_body_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [17256] = 3,
    ACTIONS(1669), 1,
      anon_sym_COLON,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1598), 2,
      ts_builtin_sym_end,
      sym__newline,
  [17268] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(33), 1,
      sym__sequence_actor_word,
    STATE(245), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(911), 1,
      sym_sequence_actor,
  [17284] = 2,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1671), 3,
      ts_builtin_sym_end,
      sym__newline,
      anon_sym_RBRACE,
  [17294] = 2,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1673), 3,
      ts_builtin_sym_end,
      sym__newline,
      anon_sym_RBRACE,
  [17304] = 2,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1675), 3,
      ts_builtin_sym_end,
      sym__newline,
      anon_sym_RBRACE,
  [17314] = 2,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1677), 3,
      ts_builtin_sym_end,
      sym__newline,
      anon_sym_RBRACE,
  [17324] = 2,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1679), 3,
      ts_builtin_sym_end,
      sym__newline,
      anon_sym_RBRACE,
  [17334] = 2,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1681), 3,
      ts_builtin_sym_end,
      sym__newline,
      anon_sym_RBRACE,
  [17344] = 2,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1683), 3,
      ts_builtin_sym_end,
      sym__newline,
      anon_sym_RBRACE,
  [17354] = 2,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1685), 3,
      ts_builtin_sym_end,
      sym__newline,
      anon_sym_RBRACE,
  [17364] = 2,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1687), 3,
      ts_builtin_sym_end,
      sym__newline,
      anon_sym_SEMI,
  [17374] = 3,
    ACTIONS(1691), 1,
      anon_sym_LBRACE,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1689), 2,
      ts_builtin_sym_end,
      sym__newline,
  [17386] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1695), 1,
      sym__newline,
    ACTIONS(1693), 2,
      ts_builtin_sym_end,
      aux_sym_mmap_class_token1,
  [17400] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1582), 1,
      aux_sym_gantt_meta_format_token1,
    STATE(759), 1,
      sym_sequence_text,
    STATE(821), 1,
      sym__sequence_rest_text,
  [17416] = 4,
    ACTIONS(1697), 1,
      sym__newline,
    ACTIONS(1699), 1,
      anon_sym_RBRACE,
    STATE(574), 1,
      aux_sym_class_stmt_class_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [17430] = 4,
    ACTIONS(1701), 1,
      aux_sym_sequence_stmt_loop_token2,
    ACTIONS(1703), 1,
      aux_sym_sequence_stmt_alt_token2,
    STATE(494), 1,
      aux_sym_sequence_stmt_alt_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [17444] = 2,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1706), 3,
      ts_builtin_sym_end,
      sym__newline,
      anon_sym_SEMI,
  [17454] = 3,
    ACTIONS(1708), 1,
      anon_sym_COLON,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1629), 2,
      ts_builtin_sym_end,
      sym__newline,
  [17466] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1582), 1,
      aux_sym_gantt_meta_format_token1,
    STATE(754), 1,
      sym_sequence_text,
    STATE(821), 1,
      sym__sequence_rest_text,
  [17482] = 4,
    ACTIONS(1710), 1,
      sym__newline,
    ACTIONS(1712), 1,
      anon_sym_RBRACE,
    STATE(507), 1,
      aux_sym_class_stmt_class_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [17496] = 4,
    ACTIONS(1119), 1,
      anon_sym_RBRACE,
    ACTIONS(1714), 1,
      sym__newline,
    STATE(500), 1,
      aux_sym_class_stmt_class_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [17510] = 4,
    ACTIONS(1716), 1,
      sym__newline,
    ACTIONS(1719), 1,
      anon_sym_RBRACE,
    STATE(500), 1,
      aux_sym_class_stmt_class_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [17524] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1723), 1,
      sym__sequence_actor_word,
    ACTIONS(1721), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
  [17538] = 2,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1725), 3,
      ts_builtin_sym_end,
      sym__newline,
      anon_sym_RBRACE,
  [17548] = 2,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1327), 3,
      ts_builtin_sym_end,
      sym__newline,
      anon_sym_RBRACE,
  [17558] = 4,
    ACTIONS(1727), 1,
      sym__alpha_num_token,
    STATE(425), 1,
      aux_sym_flow_arrow_text_repeat1,
    STATE(457), 1,
      sym_flow_arrow_text,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [17572] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1731), 1,
      sym__sequence_actor_word,
    ACTIONS(1729), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
  [17586] = 4,
    ACTIONS(1121), 1,
      anon_sym_RBRACE,
    ACTIONS(1733), 1,
      sym__newline,
    STATE(513), 1,
      aux_sym_class_stmt_class_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [17600] = 4,
    ACTIONS(1121), 1,
      anon_sym_RBRACE,
    ACTIONS(1733), 1,
      sym__newline,
    STATE(500), 1,
      aux_sym_class_stmt_class_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [17614] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1582), 1,
      aux_sym_gantt_meta_format_token1,
    STATE(807), 1,
      sym_sequence_text,
    STATE(821), 1,
      sym__sequence_rest_text,
  [17630] = 2,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1735), 3,
      sym__class_name,
      sym__bquote_string,
      sym__dquote_string,
  [17640] = 2,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1737), 3,
      ts_builtin_sym_end,
      sym__newline,
      anon_sym_SEMI,
  [17650] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1741), 1,
      sym__sequence_actor_word,
    ACTIONS(1739), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
  [17664] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(33), 1,
      sym__sequence_actor_word,
    STATE(245), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(808), 1,
      sym_sequence_actor,
  [17680] = 4,
    ACTIONS(1123), 1,
      anon_sym_RBRACE,
    ACTIONS(1743), 1,
      sym__newline,
    STATE(500), 1,
      aux_sym_class_stmt_class_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [17694] = 2,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1745), 3,
      ts_builtin_sym_end,
      sym__newline,
      anon_sym_SEMI,
  [17704] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1582), 1,
      aux_sym_gantt_meta_format_token1,
    STATE(821), 1,
      sym__sequence_rest_text,
    STATE(827), 1,
      sym_sequence_text,
  [17720] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1582), 1,
      aux_sym_gantt_meta_format_token1,
    STATE(782), 1,
      sym_sequence_text,
    STATE(821), 1,
      sym__sequence_rest_text,
  [17736] = 2,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1747), 3,
      ts_builtin_sym_end,
      sym__newline,
      anon_sym_SEMI,
  [17746] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1582), 1,
      aux_sym_gantt_meta_format_token1,
    STATE(821), 1,
      sym__sequence_rest_text,
    STATE(849), 1,
      sym_sequence_text,
  [17762] = 4,
    ACTIONS(647), 1,
      ts_builtin_sym_end,
    ACTIONS(1749), 1,
      sym__newline,
    STATE(542), 1,
      aux_sym_diagram_state_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [17776] = 3,
    STATE(226), 1,
      sym_state_name,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1751), 2,
      anon_sym_LBRACK_STAR_RBRACK,
      aux_sym_state_name_token1,
  [17788] = 3,
    STATE(908), 1,
      sym_state_name,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(607), 2,
      anon_sym_LBRACK_STAR_RBRACK,
      aux_sym_state_name_token1,
  [17800] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1753), 1,
      sym__sequence_actor_word,
    STATE(440), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(742), 1,
      sym_sequence_actor,
  [17816] = 4,
    ACTIONS(1478), 1,
      sym__alpha_num_token,
    ACTIONS(1549), 1,
      anon_sym_PIPE,
    STATE(380), 1,
      aux_sym_flow_arrow_text_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [17830] = 4,
    ACTIONS(1568), 1,
      sym__alpha_num_token,
    STATE(62), 1,
      sym_flow_vertex_id,
    STATE(334), 1,
      sym_flow_vertex,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [17844] = 4,
    ACTIONS(1755), 1,
      ts_builtin_sym_end,
    ACTIONS(1757), 1,
      sym__newline,
    STATE(527), 1,
      aux_sym_diagram_state_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [17858] = 3,
    STATE(226), 1,
      sym_state_name,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(607), 2,
      anon_sym_LBRACK_STAR_RBRACK,
      aux_sym_state_name_token1,
  [17870] = 4,
    ACTIONS(647), 1,
      ts_builtin_sym_end,
    ACTIONS(1749), 1,
      sym__newline,
    STATE(547), 1,
      aux_sym_diagram_state_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [17884] = 4,
    ACTIONS(1759), 1,
      ts_builtin_sym_end,
    ACTIONS(1761), 1,
      sym__newline,
    STATE(533), 1,
      aux_sym_diagram_class_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [17898] = 4,
    ACTIONS(1763), 1,
      aux_sym_gantt_task_text_token1,
    ACTIONS(1766), 1,
      anon_sym_COLON,
    STATE(529), 1,
      aux_sym_gantt_task_text_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [17912] = 4,
    ACTIONS(1768), 1,
      sym__class_name,
    ACTIONS(1770), 1,
      sym__bquote_string,
    STATE(645), 1,
      aux_sym_class_name_body_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [17926] = 4,
    ACTIONS(1772), 1,
      ts_builtin_sym_end,
    ACTIONS(1774), 1,
      sym__newline,
    STATE(563), 1,
      aux_sym_diagram_mindmap_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [17940] = 4,
    ACTIONS(1401), 1,
      ts_builtin_sym_end,
    ACTIONS(1776), 1,
      sym__newline,
    STATE(653), 1,
      aux_sym_diagram_er_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [17954] = 4,
    ACTIONS(1049), 1,
      ts_builtin_sym_end,
    ACTIONS(1778), 1,
      sym__newline,
    STATE(548), 1,
      aux_sym_diagram_class_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [17968] = 4,
    ACTIONS(1401), 1,
      ts_builtin_sym_end,
    ACTIONS(1776), 1,
      sym__newline,
    STATE(655), 1,
      aux_sym_diagram_er_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [17982] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1780), 1,
      aux_sym_gantt_meta_format_token1,
    STATE(200), 1,
      sym__sequence_rest_text,
    STATE(204), 1,
      sym_sequence_text,
  [17998] = 4,
    ACTIONS(1782), 1,
      ts_builtin_sym_end,
    ACTIONS(1784), 1,
      sym__newline,
    STATE(534), 1,
      aux_sym_diagram_er_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [18012] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1780), 1,
      aux_sym_gantt_meta_format_token1,
    STATE(150), 1,
      sym_sequence_text,
    STATE(200), 1,
      sym__sequence_rest_text,
  [18028] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1780), 1,
      aux_sym_gantt_meta_format_token1,
    STATE(176), 1,
      sym_sequence_text,
    STATE(200), 1,
      sym__sequence_rest_text,
  [18044] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1780), 1,
      aux_sym_gantt_meta_format_token1,
    STATE(179), 1,
      sym_sequence_text,
    STATE(200), 1,
      sym__sequence_rest_text,
  [18060] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1753), 1,
      sym__sequence_actor_word,
    STATE(440), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(711), 1,
      sym_sequence_actor,
  [18076] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(33), 1,
      sym__sequence_actor_word,
    STATE(245), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(888), 1,
      sym_sequence_actor,
  [18092] = 4,
    ACTIONS(643), 1,
      ts_builtin_sym_end,
    ACTIONS(1786), 1,
      sym__newline,
    STATE(547), 1,
      aux_sym_diagram_state_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [18106] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(33), 1,
      sym__sequence_actor_word,
    STATE(245), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(772), 1,
      sym_sequence_actor,
  [18122] = 2,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1788), 3,
      ts_builtin_sym_end,
      sym__newline,
      anon_sym_SEMI,
  [18132] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(33), 1,
      sym__sequence_actor_word,
    STATE(245), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(783), 1,
      sym_sequence_actor,
  [18148] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(33), 1,
      sym__sequence_actor_word,
    STATE(245), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(822), 1,
      sym_sequence_actor,
  [18164] = 4,
    ACTIONS(1790), 1,
      ts_builtin_sym_end,
    ACTIONS(1792), 1,
      sym__newline,
    STATE(547), 1,
      aux_sym_diagram_state_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [18178] = 4,
    ACTIONS(1795), 1,
      ts_builtin_sym_end,
    ACTIONS(1797), 1,
      sym__newline,
    STATE(548), 1,
      aux_sym_diagram_class_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [18192] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(33), 1,
      sym__sequence_actor_word,
    STATE(245), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(741), 1,
      sym_sequence_actor,
  [18208] = 3,
    ACTIONS(1802), 1,
      anon_sym_COLON,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1800), 2,
      ts_builtin_sym_end,
      sym__newline,
  [18220] = 2,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(977), 3,
      sym__class_name,
      sym__bquote_string,
      sym__dquote_string,
  [18230] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(33), 1,
      sym__sequence_actor_word,
    STATE(245), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(845), 1,
      sym_sequence_actor,
  [18246] = 2,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1804), 3,
      ts_builtin_sym_end,
      sym__newline,
      anon_sym_SEMI,
  [18256] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1806), 1,
      aux_sym_gantt_meta_format_token1,
    STATE(92), 1,
      sym_sequence_text,
    STATE(115), 1,
      sym__sequence_rest_text,
  [18272] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1806), 1,
      aux_sym_gantt_meta_format_token1,
    STATE(93), 1,
      sym_sequence_text,
    STATE(115), 1,
      sym__sequence_rest_text,
  [18288] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1806), 1,
      aux_sym_gantt_meta_format_token1,
    STATE(94), 1,
      sym_sequence_text,
    STATE(115), 1,
      sym__sequence_rest_text,
  [18304] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1806), 1,
      aux_sym_gantt_meta_format_token1,
    STATE(95), 1,
      sym_sequence_text,
    STATE(115), 1,
      sym__sequence_rest_text,
  [18320] = 4,
    ACTIONS(1808), 1,
      sym__alpha_num_token,
    STATE(390), 1,
      aux_sym_flow_arrow_text_repeat1,
    STATE(829), 1,
      sym_flow_vertex_text,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [18334] = 2,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1614), 3,
      ts_builtin_sym_end,
      sym__newline,
      anon_sym_SEMI,
  [18344] = 4,
    ACTIONS(1810), 1,
      sym__alpha_num_token,
    STATE(523), 1,
      aux_sym_flow_arrow_text_repeat1,
    STATE(846), 1,
      sym_flow_arrow_text,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [18358] = 4,
    ACTIONS(109), 1,
      aux_sym_sequence_stmt_alt_token2,
    ACTIONS(1812), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(494), 1,
      aux_sym_sequence_stmt_alt_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [18372] = 4,
    ACTIONS(69), 1,
      aux_sym_sequence_stmt_par_token2,
    ACTIONS(1814), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(591), 1,
      aux_sym_sequence_stmt_par_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [18386] = 4,
    ACTIONS(1816), 1,
      ts_builtin_sym_end,
    ACTIONS(1818), 1,
      sym__newline,
    STATE(563), 1,
      aux_sym_diagram_mindmap_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [18400] = 4,
    ACTIONS(109), 1,
      aux_sym_sequence_stmt_alt_token2,
    ACTIONS(1821), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(494), 1,
      aux_sym_sequence_stmt_alt_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [18414] = 4,
    ACTIONS(69), 1,
      aux_sym_sequence_stmt_par_token2,
    ACTIONS(1823), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(591), 1,
      aux_sym_sequence_stmt_par_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [18428] = 4,
    ACTIONS(1770), 1,
      sym__bquote_string,
    ACTIONS(1825), 1,
      sym__class_name,
    STATE(645), 1,
      aux_sym_class_name_body_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [18442] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1827), 1,
      aux_sym_gantt_meta_format_token1,
    STATE(153), 1,
      sym_sequence_text,
    STATE(178), 1,
      sym__sequence_rest_text,
  [18458] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1827), 1,
      aux_sym_gantt_meta_format_token1,
    STATE(154), 1,
      sym_sequence_text,
    STATE(178), 1,
      sym__sequence_rest_text,
  [18474] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1827), 1,
      aux_sym_gantt_meta_format_token1,
    STATE(155), 1,
      sym_sequence_text,
    STATE(178), 1,
      sym__sequence_rest_text,
  [18490] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1827), 1,
      aux_sym_gantt_meta_format_token1,
    STATE(156), 1,
      sym_sequence_text,
    STATE(178), 1,
      sym__sequence_rest_text,
  [18506] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(33), 1,
      sym__sequence_actor_word,
    STATE(245), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(797), 1,
      sym_sequence_actor,
  [18522] = 4,
    ACTIONS(1829), 1,
      aux_sym_gantt_task_text_token1,
    ACTIONS(1831), 1,
      anon_sym_COLON,
    STATE(529), 1,
      aux_sym_gantt_task_text_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [18536] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(33), 1,
      sym__sequence_actor_word,
    STATE(245), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(820), 1,
      sym_sequence_actor,
  [18552] = 4,
    ACTIONS(1111), 1,
      anon_sym_RBRACE,
    ACTIONS(1833), 1,
      sym__newline,
    STATE(500), 1,
      aux_sym_class_stmt_class_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [18566] = 4,
    ACTIONS(109), 1,
      aux_sym_sequence_stmt_alt_token2,
    ACTIONS(1835), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(494), 1,
      aux_sym_sequence_stmt_alt_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [18580] = 4,
    ACTIONS(69), 1,
      aux_sym_sequence_stmt_par_token2,
    ACTIONS(1837), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(591), 1,
      aux_sym_sequence_stmt_par_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [18594] = 4,
    ACTIONS(1665), 1,
      sym__class_name,
    ACTIONS(1770), 1,
      sym__bquote_string,
    STATE(645), 1,
      aux_sym_class_name_body_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [18608] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1839), 1,
      aux_sym_gantt_meta_format_token1,
    STATE(124), 1,
      sym_sequence_text,
    STATE(147), 1,
      sym__sequence_rest_text,
  [18624] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1839), 1,
      aux_sym_gantt_meta_format_token1,
    STATE(125), 1,
      sym_sequence_text,
    STATE(147), 1,
      sym__sequence_rest_text,
  [18640] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1839), 1,
      aux_sym_gantt_meta_format_token1,
    STATE(126), 1,
      sym_sequence_text,
    STATE(147), 1,
      sym__sequence_rest_text,
  [18656] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1839), 1,
      aux_sym_gantt_meta_format_token1,
    STATE(127), 1,
      sym_sequence_text,
    STATE(147), 1,
      sym__sequence_rest_text,
  [18672] = 4,
    ACTIONS(69), 1,
      aux_sym_sequence_stmt_par_token2,
    ACTIONS(1841), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(591), 1,
      aux_sym_sequence_stmt_par_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [18686] = 4,
    ACTIONS(1843), 1,
      ts_builtin_sym_end,
    ACTIONS(1845), 1,
      sym__newline,
    STATE(531), 1,
      aux_sym_diagram_mindmap_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [18700] = 4,
    ACTIONS(109), 1,
      aux_sym_sequence_stmt_alt_token2,
    ACTIONS(1847), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(494), 1,
      aux_sym_sequence_stmt_alt_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [18714] = 4,
    ACTIONS(69), 1,
      aux_sym_sequence_stmt_par_token2,
    ACTIONS(1849), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(591), 1,
      aux_sym_sequence_stmt_par_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [18728] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1753), 1,
      sym__sequence_actor_word,
    STATE(440), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(747), 1,
      sym_sequence_actor,
  [18744] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(33), 1,
      sym__sequence_actor_word,
    STATE(245), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(838), 1,
      sym_sequence_actor,
  [18760] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(33), 1,
      sym__sequence_actor_word,
    STATE(245), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(839), 1,
      sym_sequence_actor,
  [18776] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1753), 1,
      sym__sequence_actor_word,
    STATE(440), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(706), 1,
      sym_sequence_actor,
  [18792] = 3,
    STATE(853), 1,
      sym_state_name,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(607), 2,
      anon_sym_LBRACK_STAR_RBRACK,
      aux_sym_state_name_token1,
  [18804] = 4,
    ACTIONS(1851), 1,
      aux_sym_sequence_stmt_loop_token2,
    ACTIONS(1853), 1,
      aux_sym_sequence_stmt_par_token2,
    STATE(591), 1,
      aux_sym_sequence_stmt_par_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [18818] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1582), 1,
      aux_sym_gantt_meta_format_token1,
    STATE(821), 1,
      sym__sequence_rest_text,
    STATE(881), 1,
      sym_sequence_text,
  [18834] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1582), 1,
      aux_sym_gantt_meta_format_token1,
    STATE(821), 1,
      sym__sequence_rest_text,
    STATE(884), 1,
      sym_sequence_text,
  [18850] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1582), 1,
      aux_sym_gantt_meta_format_token1,
    STATE(821), 1,
      sym__sequence_rest_text,
    STATE(886), 1,
      sym_sequence_text,
  [18866] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1582), 1,
      aux_sym_gantt_meta_format_token1,
    STATE(821), 1,
      sym__sequence_rest_text,
    STATE(887), 1,
      sym_sequence_text,
  [18882] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1753), 1,
      sym__sequence_actor_word,
    STATE(440), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(725), 1,
      sym_sequence_actor,
  [18898] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(33), 1,
      sym__sequence_actor_word,
    STATE(245), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(897), 1,
      sym_sequence_actor,
  [18914] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(33), 1,
      sym__sequence_actor_word,
    STATE(245), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(898), 1,
      sym_sequence_actor,
  [18930] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1753), 1,
      sym__sequence_actor_word,
    STATE(440), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(726), 1,
      sym_sequence_actor,
  [18946] = 4,
    ACTIONS(69), 1,
      aux_sym_sequence_stmt_par_token2,
    ACTIONS(1856), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(591), 1,
      aux_sym_sequence_stmt_par_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [18960] = 4,
    ACTIONS(69), 1,
      aux_sym_sequence_stmt_par_token2,
    ACTIONS(1858), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(591), 1,
      aux_sym_sequence_stmt_par_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [18974] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1582), 1,
      aux_sym_gantt_meta_format_token1,
    STATE(821), 1,
      sym__sequence_rest_text,
    STATE(919), 1,
      sym_sequence_text,
  [18990] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1582), 1,
      aux_sym_gantt_meta_format_token1,
    STATE(750), 1,
      sym_sequence_text,
    STATE(821), 1,
      sym__sequence_rest_text,
  [19006] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1582), 1,
      aux_sym_gantt_meta_format_token1,
    STATE(751), 1,
      sym_sequence_text,
    STATE(821), 1,
      sym__sequence_rest_text,
  [19022] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1582), 1,
      aux_sym_gantt_meta_format_token1,
    STATE(752), 1,
      sym_sequence_text,
    STATE(821), 1,
      sym__sequence_rest_text,
  [19038] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1753), 1,
      sym__sequence_actor_word,
    STATE(440), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(738), 1,
      sym_sequence_actor,
  [19054] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(33), 1,
      sym__sequence_actor_word,
    STATE(245), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(755), 1,
      sym_sequence_actor,
  [19070] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(33), 1,
      sym__sequence_actor_word,
    STATE(245), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(756), 1,
      sym_sequence_actor,
  [19086] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1753), 1,
      sym__sequence_actor_word,
    STATE(440), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(739), 1,
      sym_sequence_actor,
  [19102] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1582), 1,
      aux_sym_gantt_meta_format_token1,
    STATE(821), 1,
      sym__sequence_rest_text,
    STATE(903), 1,
      sym_sequence_text,
  [19118] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1582), 1,
      aux_sym_gantt_meta_format_token1,
    STATE(775), 1,
      sym_sequence_text,
    STATE(821), 1,
      sym__sequence_rest_text,
  [19134] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1582), 1,
      aux_sym_gantt_meta_format_token1,
    STATE(778), 1,
      sym_sequence_text,
    STATE(821), 1,
      sym__sequence_rest_text,
  [19150] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1582), 1,
      aux_sym_gantt_meta_format_token1,
    STATE(779), 1,
      sym_sequence_text,
    STATE(821), 1,
      sym__sequence_rest_text,
  [19166] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1582), 1,
      aux_sym_gantt_meta_format_token1,
    STATE(780), 1,
      sym_sequence_text,
    STATE(821), 1,
      sym__sequence_rest_text,
  [19182] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(33), 1,
      sym__sequence_actor_word,
    STATE(245), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(786), 1,
      sym_sequence_actor,
  [19198] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(33), 1,
      sym__sequence_actor_word,
    STATE(245), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(787), 1,
      sym_sequence_actor,
  [19214] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(33), 1,
      sym__sequence_actor_word,
    STATE(245), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(788), 1,
      sym_sequence_actor,
  [19230] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(33), 1,
      sym__sequence_actor_word,
    STATE(245), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(789), 1,
      sym_sequence_actor,
  [19246] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1582), 1,
      aux_sym_gantt_meta_format_token1,
    STATE(790), 1,
      sym_sequence_text,
    STATE(821), 1,
      sym__sequence_rest_text,
  [19262] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1582), 1,
      aux_sym_gantt_meta_format_token1,
    STATE(791), 1,
      sym_sequence_text,
    STATE(821), 1,
      sym__sequence_rest_text,
  [19278] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1582), 1,
      aux_sym_gantt_meta_format_token1,
    STATE(792), 1,
      sym_sequence_text,
    STATE(821), 1,
      sym__sequence_rest_text,
  [19294] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(33), 1,
      sym__sequence_actor_word,
    STATE(245), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(810), 1,
      sym_sequence_actor,
  [19310] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(33), 1,
      sym__sequence_actor_word,
    STATE(245), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(811), 1,
      sym_sequence_actor,
  [19326] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(33), 1,
      sym__sequence_actor_word,
    STATE(245), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(812), 1,
      sym_sequence_actor,
  [19342] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(33), 1,
      sym__sequence_actor_word,
    STATE(245), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(813), 1,
      sym_sequence_actor,
  [19358] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1582), 1,
      aux_sym_gantt_meta_format_token1,
    STATE(814), 1,
      sym_sequence_text,
    STATE(821), 1,
      sym__sequence_rest_text,
  [19374] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1582), 1,
      aux_sym_gantt_meta_format_token1,
    STATE(815), 1,
      sym_sequence_text,
    STATE(821), 1,
      sym__sequence_rest_text,
  [19390] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1582), 1,
      aux_sym_gantt_meta_format_token1,
    STATE(816), 1,
      sym_sequence_text,
    STATE(821), 1,
      sym__sequence_rest_text,
  [19406] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(33), 1,
      sym__sequence_actor_word,
    STATE(245), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(831), 1,
      sym_sequence_actor,
  [19422] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(33), 1,
      sym__sequence_actor_word,
    STATE(245), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(832), 1,
      sym_sequence_actor,
  [19438] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(33), 1,
      sym__sequence_actor_word,
    STATE(245), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(833), 1,
      sym_sequence_actor,
  [19454] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(33), 1,
      sym__sequence_actor_word,
    STATE(245), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(834), 1,
      sym_sequence_actor,
  [19470] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1582), 1,
      aux_sym_gantt_meta_format_token1,
    STATE(821), 1,
      sym__sequence_rest_text,
    STATE(835), 1,
      sym_sequence_text,
  [19486] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1582), 1,
      aux_sym_gantt_meta_format_token1,
    STATE(821), 1,
      sym__sequence_rest_text,
    STATE(836), 1,
      sym_sequence_text,
  [19502] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1582), 1,
      aux_sym_gantt_meta_format_token1,
    STATE(821), 1,
      sym__sequence_rest_text,
    STATE(837), 1,
      sym_sequence_text,
  [19518] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1582), 1,
      aux_sym_gantt_meta_format_token1,
    STATE(821), 1,
      sym__sequence_rest_text,
    STATE(857), 1,
      sym_sequence_text,
  [19534] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(33), 1,
      sym__sequence_actor_word,
    STATE(245), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(708), 1,
      sym_sequence_actor,
  [19550] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(33), 1,
      sym__sequence_actor_word,
    STATE(245), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(860), 1,
      sym_sequence_actor,
  [19566] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1582), 1,
      aux_sym_gantt_meta_format_token1,
    STATE(821), 1,
      sym__sequence_rest_text,
    STATE(855), 1,
      sym_sequence_text,
  [19582] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(33), 1,
      sym__sequence_actor_word,
    STATE(245), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(862), 1,
      sym_sequence_actor,
  [19598] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(33), 1,
      sym__sequence_actor_word,
    STATE(245), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(863), 1,
      sym_sequence_actor,
  [19614] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1582), 1,
      aux_sym_gantt_meta_format_token1,
    STATE(821), 1,
      sym__sequence_rest_text,
    STATE(873), 1,
      sym_sequence_text,
  [19630] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(33), 1,
      sym__sequence_actor_word,
    STATE(245), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(716), 1,
      sym_sequence_actor,
  [19646] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(33), 1,
      sym__sequence_actor_word,
    STATE(245), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(876), 1,
      sym_sequence_actor,
  [19662] = 4,
    ACTIONS(1860), 1,
      sym__class_name,
    ACTIONS(1863), 1,
      sym__bquote_string,
    STATE(645), 1,
      aux_sym_class_name_body_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [19676] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(33), 1,
      sym__sequence_actor_word,
    STATE(245), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(878), 1,
      sym_sequence_actor,
  [19692] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(33), 1,
      sym__sequence_actor_word,
    STATE(245), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(879), 1,
      sym_sequence_actor,
  [19708] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1582), 1,
      aux_sym_gantt_meta_format_token1,
    STATE(821), 1,
      sym__sequence_rest_text,
    STATE(889), 1,
      sym_sequence_text,
  [19724] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(33), 1,
      sym__sequence_actor_word,
    STATE(245), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(724), 1,
      sym_sequence_actor,
  [19740] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(33), 1,
      sym__sequence_actor_word,
    STATE(245), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(892), 1,
      sym_sequence_actor,
  [19756] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(33), 1,
      sym__sequence_actor_word,
    STATE(245), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(894), 1,
      sym_sequence_actor,
  [19772] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(33), 1,
      sym__sequence_actor_word,
    STATE(245), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(895), 1,
      sym_sequence_actor,
  [19788] = 4,
    ACTIONS(1393), 1,
      ts_builtin_sym_end,
    ACTIONS(1865), 1,
      sym__newline,
    STATE(655), 1,
      aux_sym_diagram_er_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [19802] = 4,
    ACTIONS(1111), 1,
      anon_sym_RBRACE,
    ACTIONS(1833), 1,
      sym__newline,
    STATE(499), 1,
      aux_sym_class_stmt_class_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [19816] = 4,
    ACTIONS(1867), 1,
      ts_builtin_sym_end,
    ACTIONS(1869), 1,
      sym__newline,
    STATE(655), 1,
      aux_sym_diagram_er_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [19830] = 4,
    ACTIONS(69), 1,
      aux_sym_sequence_stmt_par_token2,
    ACTIONS(1872), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(591), 1,
      aux_sym_sequence_stmt_par_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [19844] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1874), 1,
      aux_sym_gantt_meta_format_token1,
    STATE(293), 1,
      sym_gantt_meta_format,
  [19857] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1876), 1,
      sym__mindmap_text,
    STATE(212), 1,
      sym_mmap_node_id,
  [19870] = 2,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1878), 2,
      ts_builtin_sym_end,
      sym__newline,
  [19879] = 2,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1880), 2,
      ts_builtin_sym_end,
      sym__newline,
  [19888] = 2,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1598), 2,
      ts_builtin_sym_end,
      sym__newline,
  [19897] = 3,
    ACTIONS(1387), 1,
      sym__er_alphanum,
    STATE(826), 1,
      sym_er_entity_name,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [19908] = 2,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1882), 2,
      ts_builtin_sym_end,
      sym__newline,
  [19917] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1582), 1,
      aux_sym_gantt_meta_format_token1,
    STATE(872), 1,
      sym__sequence_rest_text,
  [19930] = 2,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1884), 2,
      sym__newline,
      anon_sym_RBRACE,
  [19939] = 2,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1886), 2,
      ts_builtin_sym_end,
      sym__newline,
  [19948] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1582), 1,
      aux_sym_gantt_meta_format_token1,
    STATE(843), 1,
      sym__sequence_rest_text,
  [19961] = 2,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1888), 2,
      ts_builtin_sym_end,
      sym__newline,
  [19970] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1582), 1,
      aux_sym_gantt_meta_format_token1,
    STATE(859), 1,
      sym__sequence_rest_text,
  [19983] = 2,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1719), 2,
      sym__newline,
      anon_sym_RBRACE,
  [19992] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1582), 1,
      aux_sym_gantt_meta_format_token1,
    STATE(871), 1,
      sym__sequence_rest_text,
  [20005] = 2,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1890), 2,
      ts_builtin_sym_end,
      sym__newline,
  [20014] = 2,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1892), 2,
      ts_builtin_sym_end,
      sym__newline,
  [20023] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1874), 1,
      aux_sym_gantt_meta_format_token1,
    STATE(285), 1,
      sym_gantt_meta_format,
  [20036] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1874), 1,
      aux_sym_gantt_meta_format_token1,
    STATE(286), 1,
      sym_gantt_meta_format,
  [20049] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1874), 1,
      aux_sym_gantt_meta_format_token1,
    STATE(287), 1,
      sym_gantt_meta_format,
  [20062] = 2,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1790), 2,
      ts_builtin_sym_end,
      sym__newline,
  [20071] = 2,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1894), 2,
      sym__er_alphanum,
      anon_sym_RBRACE,
  [20080] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1874), 1,
      aux_sym_gantt_meta_format_token1,
    STATE(288), 1,
      sym_gantt_meta_format,
  [20093] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1582), 1,
      aux_sym_gantt_meta_format_token1,
    STATE(900), 1,
      sym__sequence_rest_text,
  [20106] = 2,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1795), 2,
      ts_builtin_sym_end,
      sym__newline,
  [20115] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1582), 1,
      aux_sym_gantt_meta_format_token1,
    STATE(909), 1,
      sym__sequence_rest_text,
  [20128] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1874), 1,
      aux_sym_gantt_meta_format_token1,
    STATE(289), 1,
      sym_gantt_meta_format,
  [20141] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1582), 1,
      aux_sym_gantt_meta_format_token1,
    STATE(917), 1,
      sym__sequence_rest_text,
  [20154] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1582), 1,
      aux_sym_gantt_meta_format_token1,
    STATE(825), 1,
      sym__sequence_rest_text,
  [20167] = 2,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1896), 2,
      ts_builtin_sym_end,
      sym__newline,
  [20176] = 2,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1594), 2,
      ts_builtin_sym_end,
      sym__newline,
  [20185] = 2,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1898), 2,
      ts_builtin_sym_end,
      sym__newline,
  [20194] = 2,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1900), 2,
      ts_builtin_sym_end,
      sym__newline,
  [20203] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1874), 1,
      aux_sym_gantt_meta_format_token1,
    STATE(290), 1,
      sym_gantt_meta_format,
  [20216] = 2,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1625), 2,
      ts_builtin_sym_end,
      sym__newline,
  [20225] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1874), 1,
      aux_sym_gantt_meta_format_token1,
    STATE(291), 1,
      sym_gantt_meta_format,
  [20238] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1582), 1,
      aux_sym_gantt_meta_format_token1,
    STATE(758), 1,
      sym__sequence_rest_text,
  [20251] = 2,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1902), 2,
      anon_sym_LBRACK_STAR_RBRACK,
      aux_sym_state_name_token1,
  [20260] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1582), 1,
      aux_sym_gantt_meta_format_token1,
    STATE(767), 1,
      sym__sequence_rest_text,
  [20273] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1582), 1,
      aux_sym_gantt_meta_format_token1,
    STATE(774), 1,
      sym__sequence_rest_text,
  [20286] = 2,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1904), 2,
      ts_builtin_sym_end,
      sym__newline,
  [20295] = 3,
    ACTIONS(1906), 1,
      sym__er_alphanum,
    STATE(348), 1,
      sym_er_attribute_name,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [20306] = 2,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1908), 2,
      anon_sym_LBRACK_STAR_RBRACK,
      aux_sym_state_name_token1,
  [20315] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1874), 1,
      aux_sym_gantt_meta_format_token1,
    STATE(292), 1,
      sym_gantt_meta_format,
  [20328] = 2,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1910), 2,
      ts_builtin_sym_end,
      sym__newline,
  [20337] = 2,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1912), 2,
      sym__er_alphanum,
      anon_sym_RBRACE,
  [20346] = 2,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1914), 2,
      sym__newline,
      anon_sym_SEMI,
  [20355] = 2,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1816), 2,
      ts_builtin_sym_end,
      sym__newline,
  [20364] = 3,
    ACTIONS(1916), 1,
      anon_sym_BSLASH_RBRACK,
    ACTIONS(1918), 1,
      anon_sym_SLASH_RBRACK,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [20375] = 3,
    ACTIONS(1920), 1,
      sym__newline,
    ACTIONS(1922), 1,
      aux_sym_sequence_stmt_participant_token1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [20386] = 2,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1924), 2,
      sym__newline,
      aux_sym__er_word_token1,
  [20395] = 3,
    ACTIONS(1926), 1,
      anon_sym_COLON,
    ACTIONS(1928), 1,
      anon_sym_COMMA,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [20406] = 2,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1930), 2,
      anon_sym_LBRACK_STAR_RBRACK,
      aux_sym_state_name_token1,
  [20415] = 2,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1932), 2,
      sym__newline,
      aux_sym__er_word_token1,
  [20424] = 3,
    ACTIONS(1934), 1,
      sym__newline,
    ACTIONS(1936), 1,
      aux_sym_sequence_stmt_participant_token1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [20435] = 2,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1938), 2,
      ts_builtin_sym_end,
      sym__newline,
  [20444] = 2,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1940), 2,
      sym__alpha_num_token,
      anon_sym_PIPE,
  [20453] = 3,
    ACTIONS(1942), 1,
      sym__alpha_num_token,
    ACTIONS(1944), 1,
      anon_sym_PIPE,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [20464] = 2,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1946), 2,
      anon_sym_LBRACK_STAR_RBRACK,
      aux_sym_state_name_token1,
  [20473] = 3,
    ACTIONS(1948), 1,
      anon_sym_COLON,
    ACTIONS(1950), 1,
      anon_sym_COMMA,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [20484] = 2,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1952), 2,
      sym__newline,
      aux_sym__er_word_token1,
  [20493] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(893), 1,
      aux_sym_class_label_token1,
    STATE(239), 1,
      sym_state_description,
  [20506] = 2,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1954), 2,
      ts_builtin_sym_end,
      sym__newline,
  [20515] = 2,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1956), 2,
      sym__newline,
      anon_sym_SEMI,
  [20524] = 2,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1958), 2,
      ts_builtin_sym_end,
      sym__newline,
  [20533] = 4,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1960), 1,
      ts_builtin_sym_end,
    ACTIONS(1962), 1,
      sym__whitespace,
    STATE(704), 1,
      sym_mmap_node,
  [20546] = 2,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1964), 2,
      ts_builtin_sym_end,
      sym__newline,
  [20555] = 3,
    ACTIONS(1966), 1,
      anon_sym_COLON,
    ACTIONS(1968), 1,
      anon_sym_COMMA,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [20566] = 3,
    ACTIONS(1970), 1,
      sym__newline,
    ACTIONS(1972), 1,
      aux_sym_sequence_stmt_participant_token1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [20577] = 3,
    ACTIONS(1974), 1,
      sym__newline,
    ACTIONS(1976), 1,
      aux_sym_sequence_stmt_participant_token1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [20588] = 2,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1578), 2,
      anon_sym_LPAREN_LPAREN,
      anon_sym_RPAREN_RPAREN,
  [20597] = 2,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1978), 2,
      ts_builtin_sym_end,
      sym__newline,
  [20606] = 2,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1980), 2,
      ts_builtin_sym_end,
      sym__newline,
  [20615] = 3,
    ACTIONS(851), 1,
      anon_sym_LBRACE,
    STATE(247), 1,
      sym_state_composite_body,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [20626] = 4,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1772), 1,
      ts_builtin_sym_end,
    ACTIONS(1962), 1,
      sym__whitespace,
    STATE(704), 1,
      sym_mmap_node,
  [20639] = 2,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1982), 2,
      sym__newline,
      anon_sym_SEMI,
  [20648] = 2,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1639), 2,
      anon_sym_LPAREN_LPAREN,
      anon_sym_RPAREN_RPAREN,
  [20657] = 2,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1984), 2,
      ts_builtin_sym_end,
      sym__newline,
  [20666] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1582), 1,
      aux_sym_gantt_meta_format_token1,
    STATE(840), 1,
      sym__sequence_rest_text,
  [20679] = 2,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1566), 2,
      anon_sym_LPAREN_LPAREN,
      anon_sym_RPAREN_RPAREN,
  [20688] = 2,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1986), 2,
      sym__er_alphanum,
      anon_sym_RBRACE,
  [20697] = 3,
    ACTIONS(1988), 1,
      sym__newline,
    ACTIONS(1990), 1,
      aux_sym_sequence_stmt_participant_token1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [20708] = 3,
    ACTIONS(1992), 1,
      sym__newline,
    ACTIONS(1994), 1,
      aux_sym_sequence_stmt_participant_token1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [20719] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(893), 1,
      aux_sym_class_label_token1,
    STATE(248), 1,
      sym_state_description,
  [20732] = 3,
    ACTIONS(1996), 1,
      anon_sym_COLON,
    ACTIONS(1998), 1,
      anon_sym_COMMA,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [20743] = 3,
    ACTIONS(2000), 1,
      sym__newline,
    ACTIONS(2002), 1,
      aux_sym_sequence_stmt_participant_token1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [20754] = 2,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1867), 2,
      ts_builtin_sym_end,
      sym__newline,
  [20763] = 2,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(2004), 2,
      ts_builtin_sym_end,
      sym__newline,
  [20772] = 2,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1460), 2,
      ts_builtin_sym_end,
      sym__newline,
  [20781] = 3,
    ACTIONS(2006), 1,
      anon_sym_BSLASH_RBRACK,
    ACTIONS(2008), 1,
      anon_sym_SLASH_RBRACK,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [20792] = 3,
    ACTIONS(2010), 1,
      sym__newline,
    ACTIONS(2012), 1,
      aux_sym_sequence_stmt_participant_token1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [20803] = 2,
    ACTIONS(2014), 1,
      sym__md_end,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [20811] = 2,
    ACTIONS(2016), 1,
      anon_sym_RBRACK,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [20819] = 2,
    ACTIONS(2018), 1,
      sym__newline,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [20827] = 2,
    ACTIONS(2020), 1,
      sym__newline,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [20835] = 2,
    ACTIONS(2022), 1,
      sym__newline,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [20843] = 2,
    ACTIONS(2024), 1,
      anon_sym_RPAREN_RPAREN,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [20851] = 2,
    ACTIONS(2026), 1,
      sym__newline,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [20859] = 2,
    ACTIONS(2028), 1,
      sym__newline,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [20867] = 2,
    ACTIONS(2030), 1,
      sym__newline,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [20875] = 2,
    ACTIONS(2032), 1,
      sym_state_id,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [20883] = 2,
    ACTIONS(2034), 1,
      sym__newline,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [20891] = 2,
    ACTIONS(2036), 1,
      sym__newline,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [20899] = 2,
    ACTIONS(2038), 1,
      anon_sym_LPAREN_LPAREN,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [20907] = 2,
    ACTIONS(771), 1,
      sym__newline,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [20915] = 2,
    ACTIONS(2040), 1,
      ts_builtin_sym_end,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [20923] = 2,
    ACTIONS(2042), 1,
      anon_sym_RBRACK_RPAREN,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [20931] = 2,
    ACTIONS(2044), 1,
      anon_sym_RBRACK_RBRACK,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [20939] = 2,
    ACTIONS(2046), 1,
      anon_sym_PIPE_RBRACK,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [20947] = 2,
    ACTIONS(2048), 1,
      anon_sym_RPAREN_RBRACK,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [20955] = 2,
    ACTIONS(2050), 1,
      sym__newline,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [20963] = 2,
    ACTIONS(2052), 1,
      anon_sym_RBRACE_RBRACE,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [20971] = 2,
    ACTIONS(2054), 1,
      sym__alpha_num_token,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [20979] = 2,
    ACTIONS(2056), 1,
      sym__newline,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [20987] = 2,
    ACTIONS(2058), 1,
      anon_sym_COLON,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [20995] = 2,
    ACTIONS(2060), 1,
      sym__newline,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [21003] = 2,
    ACTIONS(2062), 1,
      sym__alpha_num_token,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [21011] = 2,
    ACTIONS(2064), 1,
      sym__newline,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [21019] = 2,
    ACTIONS(2066), 1,
      sym__newline,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [21027] = 3,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(2068), 1,
      sym_pie_value,
  [21037] = 2,
    ACTIONS(2070), 1,
      anon_sym_RBRACE_RBRACE,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [21045] = 2,
    ACTIONS(2072), 1,
      sym__newline,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [21053] = 2,
    ACTIONS(2074), 1,
      sym__newline,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [21061] = 2,
    ACTIONS(2076), 1,
      sym__newline,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [21069] = 2,
    ACTIONS(2078), 1,
      sym__alpha_num_token,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [21077] = 2,
    ACTIONS(2080), 1,
      sym__newline,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [21085] = 2,
    ACTIONS(2082), 1,
      sym__newline,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [21093] = 2,
    ACTIONS(2084), 1,
      anon_sym_GT_GT,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [21101] = 2,
    ACTIONS(2086), 1,
      anon_sym_RPAREN,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [21109] = 2,
    ACTIONS(2088), 1,
      anon_sym_COLON,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [21117] = 2,
    ACTIONS(2090), 1,
      anon_sym_COLON,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [21125] = 2,
    ACTIONS(2092), 1,
      anon_sym_COLON,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [21133] = 2,
    ACTIONS(2094), 1,
      anon_sym_COLON,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [21141] = 2,
    ACTIONS(2096), 1,
      sym__newline,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [21149] = 2,
    ACTIONS(2098), 1,
      sym__newline,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [21157] = 2,
    ACTIONS(2100), 1,
      sym__newline,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [21165] = 2,
    ACTIONS(2102), 1,
      sym__newline,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [21173] = 2,
    ACTIONS(2104), 1,
      anon_sym_LBRACK,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [21181] = 2,
    ACTIONS(2106), 1,
      aux_sym_class_generics_token1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [21189] = 2,
    ACTIONS(2108), 1,
      sym__alpha_num_token,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [21197] = 2,
    ACTIONS(2110), 1,
      anon_sym_COLON,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [21205] = 3,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1962), 1,
      sym__whitespace,
    STATE(704), 1,
      sym_mmap_node,
  [21215] = 3,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(2112), 1,
      sym_gantt_task_data,
  [21225] = 2,
    ACTIONS(2114), 1,
      sym__newline,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [21233] = 3,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(2116), 1,
      sym__sequence_actor_word,
  [21243] = 2,
    ACTIONS(2118), 1,
      aux_sym_mmap_markdown_token1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [21251] = 3,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(2120), 1,
      aux_sym_directive_token1,
  [21261] = 2,
    ACTIONS(2122), 1,
      anon_sym_COLON,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [21269] = 2,
    ACTIONS(2124), 1,
      sym__alpha_num_token,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [21277] = 2,
    ACTIONS(2126), 1,
      anon_sym_TILDE,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [21285] = 2,
    ACTIONS(2128), 1,
      sym__newline,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [21293] = 2,
    ACTIONS(2130), 1,
      anon_sym_COLON,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [21301] = 2,
    ACTIONS(2132), 1,
      sym__er_alphanum,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [21309] = 2,
    ACTIONS(2134), 1,
      anon_sym_COLON,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [21317] = 2,
    ACTIONS(2136), 1,
      anon_sym_COLON,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [21325] = 2,
    ACTIONS(2138), 1,
      anon_sym_COLON,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [21333] = 2,
    ACTIONS(2140), 1,
      anon_sym_COLON,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [21341] = 2,
    ACTIONS(2142), 1,
      sym__newline,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [21349] = 2,
    ACTIONS(2144), 1,
      sym__newline,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [21357] = 2,
    ACTIONS(2146), 1,
      sym__newline,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [21365] = 2,
    ACTIONS(2148), 1,
      sym__md_end,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [21373] = 2,
    ACTIONS(2150), 1,
      anon_sym_RBRACE,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [21381] = 2,
    ACTIONS(2152), 1,
      sym__alpha_num_token,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [21389] = 2,
    ACTIONS(2154), 1,
      anon_sym_COLON,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [21397] = 2,
    ACTIONS(775), 1,
      sym__newline,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [21405] = 2,
    ACTIONS(2156), 1,
      anon_sym_COLON,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [21413] = 2,
    ACTIONS(2158), 1,
      sym__er_alphanum,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [21421] = 2,
    ACTIONS(2160), 1,
      sym__newline,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [21429] = 2,
    ACTIONS(2162), 1,
      sym__newline,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [21437] = 2,
    ACTIONS(2164), 1,
      anon_sym_COLON,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [21445] = 2,
    ACTIONS(2166), 1,
      sym__newline,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [21453] = 2,
    ACTIONS(2168), 1,
      anon_sym_end,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [21461] = 2,
    ACTIONS(2170), 1,
      anon_sym_RBRACK,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [21469] = 2,
    ACTIONS(2172), 1,
      anon_sym_end,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [21477] = 2,
    ACTIONS(2174), 1,
      anon_sym_COLON,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [21485] = 2,
    ACTIONS(2176), 1,
      anon_sym_COLON,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [21493] = 2,
    ACTIONS(2178), 1,
      anon_sym_COLON,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [21501] = 2,
    ACTIONS(2180), 1,
      anon_sym_COLON,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [21509] = 2,
    ACTIONS(2182), 1,
      sym__newline,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [21517] = 2,
    ACTIONS(2184), 1,
      sym__newline,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [21525] = 2,
    ACTIONS(2186), 1,
      sym__newline,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [21533] = 2,
    ACTIONS(2188), 1,
      sym__newline,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [21541] = 2,
    ACTIONS(2190), 1,
      sym__newline,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [21549] = 2,
    ACTIONS(2192), 1,
      sym__newline,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [21557] = 3,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(2194), 1,
      aux_sym_mmap_icon_token2,
  [21567] = 2,
    ACTIONS(1612), 1,
      sym__newline,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [21575] = 2,
    ACTIONS(2196), 1,
      sym__newline,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [21583] = 2,
    ACTIONS(2198), 1,
      sym__newline,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [21591] = 2,
    ACTIONS(1996), 1,
      anon_sym_COLON,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [21599] = 2,
    ACTIONS(2200), 1,
      anon_sym_PIPE,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [21607] = 2,
    ACTIONS(2202), 1,
      anon_sym_COLON,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [21615] = 2,
    ACTIONS(2204), 1,
      sym__alpha_num_token,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [21623] = 2,
    ACTIONS(2206), 1,
      sym__newline,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [21631] = 2,
    ACTIONS(2208), 1,
      anon_sym_end,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [21639] = 2,
    ACTIONS(2210), 1,
      anon_sym_COLON,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [21647] = 2,
    ACTIONS(2212), 1,
      sym__newline,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [21655] = 2,
    ACTIONS(2214), 1,
      anon_sym_COLON,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [21663] = 2,
    ACTIONS(2216), 1,
      anon_sym_TILDE,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [21671] = 2,
    ACTIONS(2218), 1,
      sym__newline,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [21679] = 2,
    ACTIONS(2220), 1,
      aux_sym_class_generics_token1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [21687] = 2,
    ACTIONS(2222), 1,
      sym__newline,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [21695] = 2,
    ACTIONS(2224), 1,
      sym__newline,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [21703] = 2,
    ACTIONS(2226), 1,
      sym__newline,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [21711] = 2,
    ACTIONS(1926), 1,
      anon_sym_COLON,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [21719] = 2,
    ACTIONS(2228), 1,
      anon_sym_COLON,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [21727] = 2,
    ACTIONS(2230), 1,
      anon_sym_COLON,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [21735] = 2,
    ACTIONS(2232), 1,
      anon_sym_COLON,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [21743] = 2,
    ACTIONS(2234), 1,
      anon_sym_COLON,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [21751] = 3,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(2236), 1,
      sym__sequence_actor_word,
  [21761] = 2,
    ACTIONS(2238), 1,
      ts_builtin_sym_end,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [21769] = 2,
    ACTIONS(2240), 1,
      aux_sym_sequence_stmt_participant_token1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [21777] = 2,
    ACTIONS(2242), 1,
      aux_sym_mmap_markdown_token1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [21785] = 3,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(2244), 1,
      sym__mindmap_text,
  [21795] = 3,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(2246), 1,
      sym__sequence_actor_word,
  [21805] = 2,
    ACTIONS(2248), 1,
      sym__newline,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [21813] = 2,
    ACTIONS(2250), 1,
      sym__newline,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [21821] = 2,
    ACTIONS(2252), 1,
      sym__newline,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [21829] = 2,
    ACTIONS(2254), 1,
      sym__newline,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [21837] = 3,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(2256), 1,
      sym__mindmap_text,
  [21847] = 2,
    ACTIONS(1948), 1,
      anon_sym_COLON,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [21855] = 2,
    ACTIONS(2258), 1,
      anon_sym_COLON,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [21863] = 2,
    ACTIONS(2260), 1,
      anon_sym_COLON,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [21871] = 2,
    ACTIONS(2262), 1,
      anon_sym_COLON,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [21879] = 2,
    ACTIONS(2264), 1,
      anon_sym_COLON,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [21887] = 2,
    ACTIONS(2266), 1,
      sym__newline,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [21895] = 2,
    ACTIONS(2268), 1,
      anon_sym_RPAREN,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [21903] = 2,
    ACTIONS(2270), 1,
      sym__newline,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [21911] = 2,
    ACTIONS(2272), 1,
      sym__newline,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [21919] = 2,
    ACTIONS(2274), 1,
      ts_builtin_sym_end,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [21927] = 2,
    ACTIONS(2276), 1,
      sym__newline,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [21935] = 2,
    ACTIONS(2278), 1,
      sym__newline,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [21943] = 2,
    ACTIONS(2280), 1,
      anon_sym_COLON,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [21951] = 2,
    ACTIONS(2282), 1,
      sym__newline,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [21959] = 2,
    ACTIONS(2284), 1,
      sym__newline,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [21967] = 2,
    ACTIONS(2286), 1,
      anon_sym_LPAREN,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [21975] = 2,
    ACTIONS(1966), 1,
      anon_sym_COLON,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [21983] = 2,
    ACTIONS(2288), 1,
      anon_sym_COLON,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [21991] = 2,
    ACTIONS(2290), 1,
      anon_sym_COLON,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [21999] = 2,
    ACTIONS(2292), 1,
      anon_sym_COLON,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [22007] = 3,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1962), 1,
      sym__whitespace,
    STATE(583), 1,
      sym_mmap_node,
  [22017] = 2,
    ACTIONS(2294), 1,
      sym__newline,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [22025] = 2,
    ACTIONS(2296), 1,
      sym__newline,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [22033] = 2,
    ACTIONS(2298), 1,
      anon_sym_COLON,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [22041] = 2,
    ACTIONS(2300), 1,
      sym__newline,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [22049] = 3,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(2302), 1,
      sym__sequence_actor_word,
  [22059] = 3,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(2304), 1,
      sym__sequence_actor_word,
  [22069] = 2,
    ACTIONS(2306), 1,
      sym__newline,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [22077] = 2,
    ACTIONS(2308), 1,
      anon_sym_COLON,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [22085] = 3,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(2310), 1,
      sym_type_directive,
  [22095] = 2,
    ACTIONS(2312), 1,
      sym__newline,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [22103] = 2,
    ACTIONS(2314), 1,
      anon_sym_RBRACK,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [22111] = 2,
    ACTIONS(2316), 1,
      anon_sym_COLON,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [22119] = 2,
    ACTIONS(2318), 1,
      sym__newline,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [22127] = 2,
    ACTIONS(2320), 1,
      anon_sym_RBRACE,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [22135] = 2,
    ACTIONS(2322), 1,
      anon_sym_COLON,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [22143] = 2,
    ACTIONS(2324), 1,
      anon_sym_RPAREN,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [22151] = 2,
    ACTIONS(2326), 1,
      anon_sym_RBRACK,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [22159] = 2,
    ACTIONS(2328), 1,
      anon_sym_RPAREN_RPAREN,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [22167] = 2,
    ACTIONS(2330), 1,
      sym_state_id,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [22175] = 2,
    ACTIONS(2332), 1,
      anon_sym_DASH_RPAREN,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [22183] = 2,
    ACTIONS(2334), 1,
      sym__newline,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [22191] = 2,
    ACTIONS(2336), 1,
      anon_sym_GT_GT,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [22199] = 2,
    ACTIONS(2338), 1,
      sym__newline,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [22207] = 3,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(2340), 1,
      aux_sym_mmap_class_token2,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 105,
  [SMALL_STATE(4)] = 210,
  [SMALL_STATE(5)] = 315,
  [SMALL_STATE(6)] = 420,
  [SMALL_STATE(7)] = 525,
  [SMALL_STATE(8)] = 630,
  [SMALL_STATE(9)] = 735,
  [SMALL_STATE(10)] = 840,
  [SMALL_STATE(11)] = 945,
  [SMALL_STATE(12)] = 1050,
  [SMALL_STATE(13)] = 1155,
  [SMALL_STATE(14)] = 1260,
  [SMALL_STATE(15)] = 1360,
  [SMALL_STATE(16)] = 1460,
  [SMALL_STATE(17)] = 1560,
  [SMALL_STATE(18)] = 1660,
  [SMALL_STATE(19)] = 1760,
  [SMALL_STATE(20)] = 1857,
  [SMALL_STATE(21)] = 1956,
  [SMALL_STATE(22)] = 2055,
  [SMALL_STATE(23)] = 2154,
  [SMALL_STATE(24)] = 2253,
  [SMALL_STATE(25)] = 2352,
  [SMALL_STATE(26)] = 2451,
  [SMALL_STATE(27)] = 2550,
  [SMALL_STATE(28)] = 2649,
  [SMALL_STATE(29)] = 2748,
  [SMALL_STATE(30)] = 2847,
  [SMALL_STATE(31)] = 2946,
  [SMALL_STATE(32)] = 3045,
  [SMALL_STATE(33)] = 3144,
  [SMALL_STATE(34)] = 3243,
  [SMALL_STATE(35)] = 3342,
  [SMALL_STATE(36)] = 3441,
  [SMALL_STATE(37)] = 3538,
  [SMALL_STATE(38)] = 3637,
  [SMALL_STATE(39)] = 3736,
  [SMALL_STATE(40)] = 3835,
  [SMALL_STATE(41)] = 3934,
  [SMALL_STATE(42)] = 4033,
  [SMALL_STATE(43)] = 4132,
  [SMALL_STATE(44)] = 4231,
  [SMALL_STATE(45)] = 4330,
  [SMALL_STATE(46)] = 4429,
  [SMALL_STATE(47)] = 4526,
  [SMALL_STATE(48)] = 4622,
  [SMALL_STATE(49)] = 4718,
  [SMALL_STATE(50)] = 4814,
  [SMALL_STATE(51)] = 4910,
  [SMALL_STATE(52)] = 5006,
  [SMALL_STATE(53)] = 5102,
  [SMALL_STATE(54)] = 5198,
  [SMALL_STATE(55)] = 5294,
  [SMALL_STATE(56)] = 5390,
  [SMALL_STATE(57)] = 5486,
  [SMALL_STATE(58)] = 5582,
  [SMALL_STATE(59)] = 5678,
  [SMALL_STATE(60)] = 5774,
  [SMALL_STATE(61)] = 5870,
  [SMALL_STATE(62)] = 5966,
  [SMALL_STATE(63)] = 6044,
  [SMALL_STATE(64)] = 6111,
  [SMALL_STATE(65)] = 6178,
  [SMALL_STATE(66)] = 6245,
  [SMALL_STATE(67)] = 6312,
  [SMALL_STATE(68)] = 6379,
  [SMALL_STATE(69)] = 6442,
  [SMALL_STATE(70)] = 6505,
  [SMALL_STATE(71)] = 6568,
  [SMALL_STATE(72)] = 6631,
  [SMALL_STATE(73)] = 6694,
  [SMALL_STATE(74)] = 6757,
  [SMALL_STATE(75)] = 6820,
  [SMALL_STATE(76)] = 6883,
  [SMALL_STATE(77)] = 6946,
  [SMALL_STATE(78)] = 7009,
  [SMALL_STATE(79)] = 7072,
  [SMALL_STATE(80)] = 7132,
  [SMALL_STATE(81)] = 7192,
  [SMALL_STATE(82)] = 7252,
  [SMALL_STATE(83)] = 7312,
  [SMALL_STATE(84)] = 7344,
  [SMALL_STATE(85)] = 7399,
  [SMALL_STATE(86)] = 7431,
  [SMALL_STATE(87)] = 7463,
  [SMALL_STATE(88)] = 7495,
  [SMALL_STATE(89)] = 7527,
  [SMALL_STATE(90)] = 7559,
  [SMALL_STATE(91)] = 7591,
  [SMALL_STATE(92)] = 7623,
  [SMALL_STATE(93)] = 7655,
  [SMALL_STATE(94)] = 7687,
  [SMALL_STATE(95)] = 7719,
  [SMALL_STATE(96)] = 7751,
  [SMALL_STATE(97)] = 7783,
  [SMALL_STATE(98)] = 7815,
  [SMALL_STATE(99)] = 7847,
  [SMALL_STATE(100)] = 7879,
  [SMALL_STATE(101)] = 7911,
  [SMALL_STATE(102)] = 7943,
  [SMALL_STATE(103)] = 7975,
  [SMALL_STATE(104)] = 8007,
  [SMALL_STATE(105)] = 8039,
  [SMALL_STATE(106)] = 8071,
  [SMALL_STATE(107)] = 8103,
  [SMALL_STATE(108)] = 8135,
  [SMALL_STATE(109)] = 8167,
  [SMALL_STATE(110)] = 8199,
  [SMALL_STATE(111)] = 8231,
  [SMALL_STATE(112)] = 8263,
  [SMALL_STATE(113)] = 8295,
  [SMALL_STATE(114)] = 8327,
  [SMALL_STATE(115)] = 8359,
  [SMALL_STATE(116)] = 8391,
  [SMALL_STATE(117)] = 8423,
  [SMALL_STATE(118)] = 8455,
  [SMALL_STATE(119)] = 8487,
  [SMALL_STATE(120)] = 8519,
  [SMALL_STATE(121)] = 8551,
  [SMALL_STATE(122)] = 8583,
  [SMALL_STATE(123)] = 8615,
  [SMALL_STATE(124)] = 8647,
  [SMALL_STATE(125)] = 8679,
  [SMALL_STATE(126)] = 8711,
  [SMALL_STATE(127)] = 8743,
  [SMALL_STATE(128)] = 8775,
  [SMALL_STATE(129)] = 8807,
  [SMALL_STATE(130)] = 8839,
  [SMALL_STATE(131)] = 8871,
  [SMALL_STATE(132)] = 8903,
  [SMALL_STATE(133)] = 8935,
  [SMALL_STATE(134)] = 8967,
  [SMALL_STATE(135)] = 8999,
  [SMALL_STATE(136)] = 9031,
  [SMALL_STATE(137)] = 9063,
  [SMALL_STATE(138)] = 9095,
  [SMALL_STATE(139)] = 9127,
  [SMALL_STATE(140)] = 9159,
  [SMALL_STATE(141)] = 9191,
  [SMALL_STATE(142)] = 9223,
  [SMALL_STATE(143)] = 9255,
  [SMALL_STATE(144)] = 9287,
  [SMALL_STATE(145)] = 9319,
  [SMALL_STATE(146)] = 9351,
  [SMALL_STATE(147)] = 9383,
  [SMALL_STATE(148)] = 9415,
  [SMALL_STATE(149)] = 9447,
  [SMALL_STATE(150)] = 9478,
  [SMALL_STATE(151)] = 9509,
  [SMALL_STATE(152)] = 9540,
  [SMALL_STATE(153)] = 9571,
  [SMALL_STATE(154)] = 9602,
  [SMALL_STATE(155)] = 9633,
  [SMALL_STATE(156)] = 9664,
  [SMALL_STATE(157)] = 9695,
  [SMALL_STATE(158)] = 9726,
  [SMALL_STATE(159)] = 9757,
  [SMALL_STATE(160)] = 9788,
  [SMALL_STATE(161)] = 9819,
  [SMALL_STATE(162)] = 9850,
  [SMALL_STATE(163)] = 9881,
  [SMALL_STATE(164)] = 9912,
  [SMALL_STATE(165)] = 9943,
  [SMALL_STATE(166)] = 9974,
  [SMALL_STATE(167)] = 10005,
  [SMALL_STATE(168)] = 10036,
  [SMALL_STATE(169)] = 10067,
  [SMALL_STATE(170)] = 10098,
  [SMALL_STATE(171)] = 10129,
  [SMALL_STATE(172)] = 10160,
  [SMALL_STATE(173)] = 10191,
  [SMALL_STATE(174)] = 10222,
  [SMALL_STATE(175)] = 10253,
  [SMALL_STATE(176)] = 10284,
  [SMALL_STATE(177)] = 10315,
  [SMALL_STATE(178)] = 10346,
  [SMALL_STATE(179)] = 10377,
  [SMALL_STATE(180)] = 10408,
  [SMALL_STATE(181)] = 10439,
  [SMALL_STATE(182)] = 10470,
  [SMALL_STATE(183)] = 10501,
  [SMALL_STATE(184)] = 10532,
  [SMALL_STATE(185)] = 10563,
  [SMALL_STATE(186)] = 10594,
  [SMALL_STATE(187)] = 10625,
  [SMALL_STATE(188)] = 10656,
  [SMALL_STATE(189)] = 10687,
  [SMALL_STATE(190)] = 10718,
  [SMALL_STATE(191)] = 10749,
  [SMALL_STATE(192)] = 10780,
  [SMALL_STATE(193)] = 10811,
  [SMALL_STATE(194)] = 10842,
  [SMALL_STATE(195)] = 10873,
  [SMALL_STATE(196)] = 10904,
  [SMALL_STATE(197)] = 10935,
  [SMALL_STATE(198)] = 10966,
  [SMALL_STATE(199)] = 10997,
  [SMALL_STATE(200)] = 11028,
  [SMALL_STATE(201)] = 11059,
  [SMALL_STATE(202)] = 11090,
  [SMALL_STATE(203)] = 11121,
  [SMALL_STATE(204)] = 11152,
  [SMALL_STATE(205)] = 11183,
  [SMALL_STATE(206)] = 11214,
  [SMALL_STATE(207)] = 11245,
  [SMALL_STATE(208)] = 11276,
  [SMALL_STATE(209)] = 11307,
  [SMALL_STATE(210)] = 11338,
  [SMALL_STATE(211)] = 11369,
  [SMALL_STATE(212)] = 11400,
  [SMALL_STATE(213)] = 11451,
  [SMALL_STATE(214)] = 11502,
  [SMALL_STATE(215)] = 11547,
  [SMALL_STATE(216)] = 11584,
  [SMALL_STATE(217)] = 11619,
  [SMALL_STATE(218)] = 11656,
  [SMALL_STATE(219)] = 11693,
  [SMALL_STATE(220)] = 11724,
  [SMALL_STATE(221)] = 11748,
  [SMALL_STATE(222)] = 11780,
  [SMALL_STATE(223)] = 11810,
  [SMALL_STATE(224)] = 11848,
  [SMALL_STATE(225)] = 11877,
  [SMALL_STATE(226)] = 11906,
  [SMALL_STATE(227)] = 11931,
  [SMALL_STATE(228)] = 11958,
  [SMALL_STATE(229)] = 11981,
  [SMALL_STATE(230)] = 12003,
  [SMALL_STATE(231)] = 12025,
  [SMALL_STATE(232)] = 12047,
  [SMALL_STATE(233)] = 12069,
  [SMALL_STATE(234)] = 12095,
  [SMALL_STATE(235)] = 12117,
  [SMALL_STATE(236)] = 12151,
  [SMALL_STATE(237)] = 12173,
  [SMALL_STATE(238)] = 12195,
  [SMALL_STATE(239)] = 12217,
  [SMALL_STATE(240)] = 12239,
  [SMALL_STATE(241)] = 12261,
  [SMALL_STATE(242)] = 12283,
  [SMALL_STATE(243)] = 12321,
  [SMALL_STATE(244)] = 12357,
  [SMALL_STATE(245)] = 12379,
  [SMALL_STATE(246)] = 12407,
  [SMALL_STATE(247)] = 12429,
  [SMALL_STATE(248)] = 12451,
  [SMALL_STATE(249)] = 12473,
  [SMALL_STATE(250)] = 12495,
  [SMALL_STATE(251)] = 12517,
  [SMALL_STATE(252)] = 12539,
  [SMALL_STATE(253)] = 12579,
  [SMALL_STATE(254)] = 12601,
  [SMALL_STATE(255)] = 12641,
  [SMALL_STATE(256)] = 12663,
  [SMALL_STATE(257)] = 12685,
  [SMALL_STATE(258)] = 12707,
  [SMALL_STATE(259)] = 12729,
  [SMALL_STATE(260)] = 12751,
  [SMALL_STATE(261)] = 12789,
  [SMALL_STATE(262)] = 12825,
  [SMALL_STATE(263)] = 12851,
  [SMALL_STATE(264)] = 12873,
  [SMALL_STATE(265)] = 12913,
  [SMALL_STATE(266)] = 12941,
  [SMALL_STATE(267)] = 12963,
  [SMALL_STATE(268)] = 12985,
  [SMALL_STATE(269)] = 13006,
  [SMALL_STATE(270)] = 13043,
  [SMALL_STATE(271)] = 13064,
  [SMALL_STATE(272)] = 13085,
  [SMALL_STATE(273)] = 13122,
  [SMALL_STATE(274)] = 13159,
  [SMALL_STATE(275)] = 13196,
  [SMALL_STATE(276)] = 13233,
  [SMALL_STATE(277)] = 13254,
  [SMALL_STATE(278)] = 13289,
  [SMALL_STATE(279)] = 13326,
  [SMALL_STATE(280)] = 13363,
  [SMALL_STATE(281)] = 13400,
  [SMALL_STATE(282)] = 13435,
  [SMALL_STATE(283)] = 13456,
  [SMALL_STATE(284)] = 13475,
  [SMALL_STATE(285)] = 13496,
  [SMALL_STATE(286)] = 13517,
  [SMALL_STATE(287)] = 13538,
  [SMALL_STATE(288)] = 13559,
  [SMALL_STATE(289)] = 13580,
  [SMALL_STATE(290)] = 13601,
  [SMALL_STATE(291)] = 13622,
  [SMALL_STATE(292)] = 13643,
  [SMALL_STATE(293)] = 13664,
  [SMALL_STATE(294)] = 13685,
  [SMALL_STATE(295)] = 13722,
  [SMALL_STATE(296)] = 13743,
  [SMALL_STATE(297)] = 13780,
  [SMALL_STATE(298)] = 13808,
  [SMALL_STATE(299)] = 13842,
  [SMALL_STATE(300)] = 13866,
  [SMALL_STATE(301)] = 13900,
  [SMALL_STATE(302)] = 13918,
  [SMALL_STATE(303)] = 13952,
  [SMALL_STATE(304)] = 13976,
  [SMALL_STATE(305)] = 14004,
  [SMALL_STATE(306)] = 14038,
  [SMALL_STATE(307)] = 14062,
  [SMALL_STATE(308)] = 14086,
  [SMALL_STATE(309)] = 14120,
  [SMALL_STATE(310)] = 14148,
  [SMALL_STATE(311)] = 14182,
  [SMALL_STATE(312)] = 14216,
  [SMALL_STATE(313)] = 14240,
  [SMALL_STATE(314)] = 14274,
  [SMALL_STATE(315)] = 14302,
  [SMALL_STATE(316)] = 14330,
  [SMALL_STATE(317)] = 14349,
  [SMALL_STATE(318)] = 14368,
  [SMALL_STATE(319)] = 14387,
  [SMALL_STATE(320)] = 14406,
  [SMALL_STATE(321)] = 14437,
  [SMALL_STATE(322)] = 14456,
  [SMALL_STATE(323)] = 14475,
  [SMALL_STATE(324)] = 14494,
  [SMALL_STATE(325)] = 14513,
  [SMALL_STATE(326)] = 14532,
  [SMALL_STATE(327)] = 14551,
  [SMALL_STATE(328)] = 14570,
  [SMALL_STATE(329)] = 14589,
  [SMALL_STATE(330)] = 14620,
  [SMALL_STATE(331)] = 14639,
  [SMALL_STATE(332)] = 14658,
  [SMALL_STATE(333)] = 14677,
  [SMALL_STATE(334)] = 14698,
  [SMALL_STATE(335)] = 14717,
  [SMALL_STATE(336)] = 14736,
  [SMALL_STATE(337)] = 14755,
  [SMALL_STATE(338)] = 14783,
  [SMALL_STATE(339)] = 14801,
  [SMALL_STATE(340)] = 14831,
  [SMALL_STATE(341)] = 14855,
  [SMALL_STATE(342)] = 14873,
  [SMALL_STATE(343)] = 14897,
  [SMALL_STATE(344)] = 14921,
  [SMALL_STATE(345)] = 14949,
  [SMALL_STATE(346)] = 14973,
  [SMALL_STATE(347)] = 14991,
  [SMALL_STATE(348)] = 15009,
  [SMALL_STATE(349)] = 15039,
  [SMALL_STATE(350)] = 15067,
  [SMALL_STATE(351)] = 15095,
  [SMALL_STATE(352)] = 15115,
  [SMALL_STATE(353)] = 15139,
  [SMALL_STATE(354)] = 15161,
  [SMALL_STATE(355)] = 15187,
  [SMALL_STATE(356)] = 15209,
  [SMALL_STATE(357)] = 15223,
  [SMALL_STATE(358)] = 15237,
  [SMALL_STATE(359)] = 15251,
  [SMALL_STATE(360)] = 15267,
  [SMALL_STATE(361)] = 15289,
  [SMALL_STATE(362)] = 15309,
  [SMALL_STATE(363)] = 15331,
  [SMALL_STATE(364)] = 15357,
  [SMALL_STATE(365)] = 15383,
  [SMALL_STATE(366)] = 15409,
  [SMALL_STATE(367)] = 15425,
  [SMALL_STATE(368)] = 15440,
  [SMALL_STATE(369)] = 15455,
  [SMALL_STATE(370)] = 15472,
  [SMALL_STATE(371)] = 15493,
  [SMALL_STATE(372)] = 15508,
  [SMALL_STATE(373)] = 15523,
  [SMALL_STATE(374)] = 15538,
  [SMALL_STATE(375)] = 15553,
  [SMALL_STATE(376)] = 15574,
  [SMALL_STATE(377)] = 15595,
  [SMALL_STATE(378)] = 15618,
  [SMALL_STATE(379)] = 15637,
  [SMALL_STATE(380)] = 15656,
  [SMALL_STATE(381)] = 15673,
  [SMALL_STATE(382)] = 15694,
  [SMALL_STATE(383)] = 15709,
  [SMALL_STATE(384)] = 15732,
  [SMALL_STATE(385)] = 15753,
  [SMALL_STATE(386)] = 15778,
  [SMALL_STATE(387)] = 15799,
  [SMALL_STATE(388)] = 15817,
  [SMALL_STATE(389)] = 15829,
  [SMALL_STATE(390)] = 15847,
  [SMALL_STATE(391)] = 15863,
  [SMALL_STATE(392)] = 15881,
  [SMALL_STATE(393)] = 15899,
  [SMALL_STATE(394)] = 15917,
  [SMALL_STATE(395)] = 15935,
  [SMALL_STATE(396)] = 15953,
  [SMALL_STATE(397)] = 15971,
  [SMALL_STATE(398)] = 15989,
  [SMALL_STATE(399)] = 16007,
  [SMALL_STATE(400)] = 16025,
  [SMALL_STATE(401)] = 16043,
  [SMALL_STATE(402)] = 16055,
  [SMALL_STATE(403)] = 16067,
  [SMALL_STATE(404)] = 16079,
  [SMALL_STATE(405)] = 16097,
  [SMALL_STATE(406)] = 16115,
  [SMALL_STATE(407)] = 16127,
  [SMALL_STATE(408)] = 16145,
  [SMALL_STATE(409)] = 16163,
  [SMALL_STATE(410)] = 16181,
  [SMALL_STATE(411)] = 16197,
  [SMALL_STATE(412)] = 16213,
  [SMALL_STATE(413)] = 16231,
  [SMALL_STATE(414)] = 16251,
  [SMALL_STATE(415)] = 16267,
  [SMALL_STATE(416)] = 16285,
  [SMALL_STATE(417)] = 16297,
  [SMALL_STATE(418)] = 16309,
  [SMALL_STATE(419)] = 16321,
  [SMALL_STATE(420)] = 16333,
  [SMALL_STATE(421)] = 16351,
  [SMALL_STATE(422)] = 16371,
  [SMALL_STATE(423)] = 16391,
  [SMALL_STATE(424)] = 16411,
  [SMALL_STATE(425)] = 16429,
  [SMALL_STATE(426)] = 16445,
  [SMALL_STATE(427)] = 16465,
  [SMALL_STATE(428)] = 16485,
  [SMALL_STATE(429)] = 16505,
  [SMALL_STATE(430)] = 16525,
  [SMALL_STATE(431)] = 16545,
  [SMALL_STATE(432)] = 16565,
  [SMALL_STATE(433)] = 16577,
  [SMALL_STATE(434)] = 16592,
  [SMALL_STATE(435)] = 16609,
  [SMALL_STATE(436)] = 16620,
  [SMALL_STATE(437)] = 16631,
  [SMALL_STATE(438)] = 16648,
  [SMALL_STATE(439)] = 16667,
  [SMALL_STATE(440)] = 16684,
  [SMALL_STATE(441)] = 16701,
  [SMALL_STATE(442)] = 16716,
  [SMALL_STATE(443)] = 16729,
  [SMALL_STATE(444)] = 16740,
  [SMALL_STATE(445)] = 16759,
  [SMALL_STATE(446)] = 16772,
  [SMALL_STATE(447)] = 16785,
  [SMALL_STATE(448)] = 16798,
  [SMALL_STATE(449)] = 16811,
  [SMALL_STATE(450)] = 16824,
  [SMALL_STATE(451)] = 16843,
  [SMALL_STATE(452)] = 16860,
  [SMALL_STATE(453)] = 16871,
  [SMALL_STATE(454)] = 16886,
  [SMALL_STATE(455)] = 16901,
  [SMALL_STATE(456)] = 16918,
  [SMALL_STATE(457)] = 16933,
  [SMALL_STATE(458)] = 16946,
  [SMALL_STATE(459)] = 16961,
  [SMALL_STATE(460)] = 16972,
  [SMALL_STATE(461)] = 16983,
  [SMALL_STATE(462)] = 17000,
  [SMALL_STATE(463)] = 17011,
  [SMALL_STATE(464)] = 17026,
  [SMALL_STATE(465)] = 17037,
  [SMALL_STATE(466)] = 17054,
  [SMALL_STATE(467)] = 17073,
  [SMALL_STATE(468)] = 17084,
  [SMALL_STATE(469)] = 17103,
  [SMALL_STATE(470)] = 17122,
  [SMALL_STATE(471)] = 17133,
  [SMALL_STATE(472)] = 17152,
  [SMALL_STATE(473)] = 17167,
  [SMALL_STATE(474)] = 17182,
  [SMALL_STATE(475)] = 17197,
  [SMALL_STATE(476)] = 17212,
  [SMALL_STATE(477)] = 17227,
  [SMALL_STATE(478)] = 17242,
  [SMALL_STATE(479)] = 17256,
  [SMALL_STATE(480)] = 17268,
  [SMALL_STATE(481)] = 17284,
  [SMALL_STATE(482)] = 17294,
  [SMALL_STATE(483)] = 17304,
  [SMALL_STATE(484)] = 17314,
  [SMALL_STATE(485)] = 17324,
  [SMALL_STATE(486)] = 17334,
  [SMALL_STATE(487)] = 17344,
  [SMALL_STATE(488)] = 17354,
  [SMALL_STATE(489)] = 17364,
  [SMALL_STATE(490)] = 17374,
  [SMALL_STATE(491)] = 17386,
  [SMALL_STATE(492)] = 17400,
  [SMALL_STATE(493)] = 17416,
  [SMALL_STATE(494)] = 17430,
  [SMALL_STATE(495)] = 17444,
  [SMALL_STATE(496)] = 17454,
  [SMALL_STATE(497)] = 17466,
  [SMALL_STATE(498)] = 17482,
  [SMALL_STATE(499)] = 17496,
  [SMALL_STATE(500)] = 17510,
  [SMALL_STATE(501)] = 17524,
  [SMALL_STATE(502)] = 17538,
  [SMALL_STATE(503)] = 17548,
  [SMALL_STATE(504)] = 17558,
  [SMALL_STATE(505)] = 17572,
  [SMALL_STATE(506)] = 17586,
  [SMALL_STATE(507)] = 17600,
  [SMALL_STATE(508)] = 17614,
  [SMALL_STATE(509)] = 17630,
  [SMALL_STATE(510)] = 17640,
  [SMALL_STATE(511)] = 17650,
  [SMALL_STATE(512)] = 17664,
  [SMALL_STATE(513)] = 17680,
  [SMALL_STATE(514)] = 17694,
  [SMALL_STATE(515)] = 17704,
  [SMALL_STATE(516)] = 17720,
  [SMALL_STATE(517)] = 17736,
  [SMALL_STATE(518)] = 17746,
  [SMALL_STATE(519)] = 17762,
  [SMALL_STATE(520)] = 17776,
  [SMALL_STATE(521)] = 17788,
  [SMALL_STATE(522)] = 17800,
  [SMALL_STATE(523)] = 17816,
  [SMALL_STATE(524)] = 17830,
  [SMALL_STATE(525)] = 17844,
  [SMALL_STATE(526)] = 17858,
  [SMALL_STATE(527)] = 17870,
  [SMALL_STATE(528)] = 17884,
  [SMALL_STATE(529)] = 17898,
  [SMALL_STATE(530)] = 17912,
  [SMALL_STATE(531)] = 17926,
  [SMALL_STATE(532)] = 17940,
  [SMALL_STATE(533)] = 17954,
  [SMALL_STATE(534)] = 17968,
  [SMALL_STATE(535)] = 17982,
  [SMALL_STATE(536)] = 17998,
  [SMALL_STATE(537)] = 18012,
  [SMALL_STATE(538)] = 18028,
  [SMALL_STATE(539)] = 18044,
  [SMALL_STATE(540)] = 18060,
  [SMALL_STATE(541)] = 18076,
  [SMALL_STATE(542)] = 18092,
  [SMALL_STATE(543)] = 18106,
  [SMALL_STATE(544)] = 18122,
  [SMALL_STATE(545)] = 18132,
  [SMALL_STATE(546)] = 18148,
  [SMALL_STATE(547)] = 18164,
  [SMALL_STATE(548)] = 18178,
  [SMALL_STATE(549)] = 18192,
  [SMALL_STATE(550)] = 18208,
  [SMALL_STATE(551)] = 18220,
  [SMALL_STATE(552)] = 18230,
  [SMALL_STATE(553)] = 18246,
  [SMALL_STATE(554)] = 18256,
  [SMALL_STATE(555)] = 18272,
  [SMALL_STATE(556)] = 18288,
  [SMALL_STATE(557)] = 18304,
  [SMALL_STATE(558)] = 18320,
  [SMALL_STATE(559)] = 18334,
  [SMALL_STATE(560)] = 18344,
  [SMALL_STATE(561)] = 18358,
  [SMALL_STATE(562)] = 18372,
  [SMALL_STATE(563)] = 18386,
  [SMALL_STATE(564)] = 18400,
  [SMALL_STATE(565)] = 18414,
  [SMALL_STATE(566)] = 18428,
  [SMALL_STATE(567)] = 18442,
  [SMALL_STATE(568)] = 18458,
  [SMALL_STATE(569)] = 18474,
  [SMALL_STATE(570)] = 18490,
  [SMALL_STATE(571)] = 18506,
  [SMALL_STATE(572)] = 18522,
  [SMALL_STATE(573)] = 18536,
  [SMALL_STATE(574)] = 18552,
  [SMALL_STATE(575)] = 18566,
  [SMALL_STATE(576)] = 18580,
  [SMALL_STATE(577)] = 18594,
  [SMALL_STATE(578)] = 18608,
  [SMALL_STATE(579)] = 18624,
  [SMALL_STATE(580)] = 18640,
  [SMALL_STATE(581)] = 18656,
  [SMALL_STATE(582)] = 18672,
  [SMALL_STATE(583)] = 18686,
  [SMALL_STATE(584)] = 18700,
  [SMALL_STATE(585)] = 18714,
  [SMALL_STATE(586)] = 18728,
  [SMALL_STATE(587)] = 18744,
  [SMALL_STATE(588)] = 18760,
  [SMALL_STATE(589)] = 18776,
  [SMALL_STATE(590)] = 18792,
  [SMALL_STATE(591)] = 18804,
  [SMALL_STATE(592)] = 18818,
  [SMALL_STATE(593)] = 18834,
  [SMALL_STATE(594)] = 18850,
  [SMALL_STATE(595)] = 18866,
  [SMALL_STATE(596)] = 18882,
  [SMALL_STATE(597)] = 18898,
  [SMALL_STATE(598)] = 18914,
  [SMALL_STATE(599)] = 18930,
  [SMALL_STATE(600)] = 18946,
  [SMALL_STATE(601)] = 18960,
  [SMALL_STATE(602)] = 18974,
  [SMALL_STATE(603)] = 18990,
  [SMALL_STATE(604)] = 19006,
  [SMALL_STATE(605)] = 19022,
  [SMALL_STATE(606)] = 19038,
  [SMALL_STATE(607)] = 19054,
  [SMALL_STATE(608)] = 19070,
  [SMALL_STATE(609)] = 19086,
  [SMALL_STATE(610)] = 19102,
  [SMALL_STATE(611)] = 19118,
  [SMALL_STATE(612)] = 19134,
  [SMALL_STATE(613)] = 19150,
  [SMALL_STATE(614)] = 19166,
  [SMALL_STATE(615)] = 19182,
  [SMALL_STATE(616)] = 19198,
  [SMALL_STATE(617)] = 19214,
  [SMALL_STATE(618)] = 19230,
  [SMALL_STATE(619)] = 19246,
  [SMALL_STATE(620)] = 19262,
  [SMALL_STATE(621)] = 19278,
  [SMALL_STATE(622)] = 19294,
  [SMALL_STATE(623)] = 19310,
  [SMALL_STATE(624)] = 19326,
  [SMALL_STATE(625)] = 19342,
  [SMALL_STATE(626)] = 19358,
  [SMALL_STATE(627)] = 19374,
  [SMALL_STATE(628)] = 19390,
  [SMALL_STATE(629)] = 19406,
  [SMALL_STATE(630)] = 19422,
  [SMALL_STATE(631)] = 19438,
  [SMALL_STATE(632)] = 19454,
  [SMALL_STATE(633)] = 19470,
  [SMALL_STATE(634)] = 19486,
  [SMALL_STATE(635)] = 19502,
  [SMALL_STATE(636)] = 19518,
  [SMALL_STATE(637)] = 19534,
  [SMALL_STATE(638)] = 19550,
  [SMALL_STATE(639)] = 19566,
  [SMALL_STATE(640)] = 19582,
  [SMALL_STATE(641)] = 19598,
  [SMALL_STATE(642)] = 19614,
  [SMALL_STATE(643)] = 19630,
  [SMALL_STATE(644)] = 19646,
  [SMALL_STATE(645)] = 19662,
  [SMALL_STATE(646)] = 19676,
  [SMALL_STATE(647)] = 19692,
  [SMALL_STATE(648)] = 19708,
  [SMALL_STATE(649)] = 19724,
  [SMALL_STATE(650)] = 19740,
  [SMALL_STATE(651)] = 19756,
  [SMALL_STATE(652)] = 19772,
  [SMALL_STATE(653)] = 19788,
  [SMALL_STATE(654)] = 19802,
  [SMALL_STATE(655)] = 19816,
  [SMALL_STATE(656)] = 19830,
  [SMALL_STATE(657)] = 19844,
  [SMALL_STATE(658)] = 19857,
  [SMALL_STATE(659)] = 19870,
  [SMALL_STATE(660)] = 19879,
  [SMALL_STATE(661)] = 19888,
  [SMALL_STATE(662)] = 19897,
  [SMALL_STATE(663)] = 19908,
  [SMALL_STATE(664)] = 19917,
  [SMALL_STATE(665)] = 19930,
  [SMALL_STATE(666)] = 19939,
  [SMALL_STATE(667)] = 19948,
  [SMALL_STATE(668)] = 19961,
  [SMALL_STATE(669)] = 19970,
  [SMALL_STATE(670)] = 19983,
  [SMALL_STATE(671)] = 19992,
  [SMALL_STATE(672)] = 20005,
  [SMALL_STATE(673)] = 20014,
  [SMALL_STATE(674)] = 20023,
  [SMALL_STATE(675)] = 20036,
  [SMALL_STATE(676)] = 20049,
  [SMALL_STATE(677)] = 20062,
  [SMALL_STATE(678)] = 20071,
  [SMALL_STATE(679)] = 20080,
  [SMALL_STATE(680)] = 20093,
  [SMALL_STATE(681)] = 20106,
  [SMALL_STATE(682)] = 20115,
  [SMALL_STATE(683)] = 20128,
  [SMALL_STATE(684)] = 20141,
  [SMALL_STATE(685)] = 20154,
  [SMALL_STATE(686)] = 20167,
  [SMALL_STATE(687)] = 20176,
  [SMALL_STATE(688)] = 20185,
  [SMALL_STATE(689)] = 20194,
  [SMALL_STATE(690)] = 20203,
  [SMALL_STATE(691)] = 20216,
  [SMALL_STATE(692)] = 20225,
  [SMALL_STATE(693)] = 20238,
  [SMALL_STATE(694)] = 20251,
  [SMALL_STATE(695)] = 20260,
  [SMALL_STATE(696)] = 20273,
  [SMALL_STATE(697)] = 20286,
  [SMALL_STATE(698)] = 20295,
  [SMALL_STATE(699)] = 20306,
  [SMALL_STATE(700)] = 20315,
  [SMALL_STATE(701)] = 20328,
  [SMALL_STATE(702)] = 20337,
  [SMALL_STATE(703)] = 20346,
  [SMALL_STATE(704)] = 20355,
  [SMALL_STATE(705)] = 20364,
  [SMALL_STATE(706)] = 20375,
  [SMALL_STATE(707)] = 20386,
  [SMALL_STATE(708)] = 20395,
  [SMALL_STATE(709)] = 20406,
  [SMALL_STATE(710)] = 20415,
  [SMALL_STATE(711)] = 20424,
  [SMALL_STATE(712)] = 20435,
  [SMALL_STATE(713)] = 20444,
  [SMALL_STATE(714)] = 20453,
  [SMALL_STATE(715)] = 20464,
  [SMALL_STATE(716)] = 20473,
  [SMALL_STATE(717)] = 20484,
  [SMALL_STATE(718)] = 20493,
  [SMALL_STATE(719)] = 20506,
  [SMALL_STATE(720)] = 20515,
  [SMALL_STATE(721)] = 20524,
  [SMALL_STATE(722)] = 20533,
  [SMALL_STATE(723)] = 20546,
  [SMALL_STATE(724)] = 20555,
  [SMALL_STATE(725)] = 20566,
  [SMALL_STATE(726)] = 20577,
  [SMALL_STATE(727)] = 20588,
  [SMALL_STATE(728)] = 20597,
  [SMALL_STATE(729)] = 20606,
  [SMALL_STATE(730)] = 20615,
  [SMALL_STATE(731)] = 20626,
  [SMALL_STATE(732)] = 20639,
  [SMALL_STATE(733)] = 20648,
  [SMALL_STATE(734)] = 20657,
  [SMALL_STATE(735)] = 20666,
  [SMALL_STATE(736)] = 20679,
  [SMALL_STATE(737)] = 20688,
  [SMALL_STATE(738)] = 20697,
  [SMALL_STATE(739)] = 20708,
  [SMALL_STATE(740)] = 20719,
  [SMALL_STATE(741)] = 20732,
  [SMALL_STATE(742)] = 20743,
  [SMALL_STATE(743)] = 20754,
  [SMALL_STATE(744)] = 20763,
  [SMALL_STATE(745)] = 20772,
  [SMALL_STATE(746)] = 20781,
  [SMALL_STATE(747)] = 20792,
  [SMALL_STATE(748)] = 20803,
  [SMALL_STATE(749)] = 20811,
  [SMALL_STATE(750)] = 20819,
  [SMALL_STATE(751)] = 20827,
  [SMALL_STATE(752)] = 20835,
  [SMALL_STATE(753)] = 20843,
  [SMALL_STATE(754)] = 20851,
  [SMALL_STATE(755)] = 20859,
  [SMALL_STATE(756)] = 20867,
  [SMALL_STATE(757)] = 20875,
  [SMALL_STATE(758)] = 20883,
  [SMALL_STATE(759)] = 20891,
  [SMALL_STATE(760)] = 20899,
  [SMALL_STATE(761)] = 20907,
  [SMALL_STATE(762)] = 20915,
  [SMALL_STATE(763)] = 20923,
  [SMALL_STATE(764)] = 20931,
  [SMALL_STATE(765)] = 20939,
  [SMALL_STATE(766)] = 20947,
  [SMALL_STATE(767)] = 20955,
  [SMALL_STATE(768)] = 20963,
  [SMALL_STATE(769)] = 20971,
  [SMALL_STATE(770)] = 20979,
  [SMALL_STATE(771)] = 20987,
  [SMALL_STATE(772)] = 20995,
  [SMALL_STATE(773)] = 21003,
  [SMALL_STATE(774)] = 21011,
  [SMALL_STATE(775)] = 21019,
  [SMALL_STATE(776)] = 21027,
  [SMALL_STATE(777)] = 21037,
  [SMALL_STATE(778)] = 21045,
  [SMALL_STATE(779)] = 21053,
  [SMALL_STATE(780)] = 21061,
  [SMALL_STATE(781)] = 21069,
  [SMALL_STATE(782)] = 21077,
  [SMALL_STATE(783)] = 21085,
  [SMALL_STATE(784)] = 21093,
  [SMALL_STATE(785)] = 21101,
  [SMALL_STATE(786)] = 21109,
  [SMALL_STATE(787)] = 21117,
  [SMALL_STATE(788)] = 21125,
  [SMALL_STATE(789)] = 21133,
  [SMALL_STATE(790)] = 21141,
  [SMALL_STATE(791)] = 21149,
  [SMALL_STATE(792)] = 21157,
  [SMALL_STATE(793)] = 21165,
  [SMALL_STATE(794)] = 21173,
  [SMALL_STATE(795)] = 21181,
  [SMALL_STATE(796)] = 21189,
  [SMALL_STATE(797)] = 21197,
  [SMALL_STATE(798)] = 21205,
  [SMALL_STATE(799)] = 21215,
  [SMALL_STATE(800)] = 21225,
  [SMALL_STATE(801)] = 21233,
  [SMALL_STATE(802)] = 21243,
  [SMALL_STATE(803)] = 21251,
  [SMALL_STATE(804)] = 21261,
  [SMALL_STATE(805)] = 21269,
  [SMALL_STATE(806)] = 21277,
  [SMALL_STATE(807)] = 21285,
  [SMALL_STATE(808)] = 21293,
  [SMALL_STATE(809)] = 21301,
  [SMALL_STATE(810)] = 21309,
  [SMALL_STATE(811)] = 21317,
  [SMALL_STATE(812)] = 21325,
  [SMALL_STATE(813)] = 21333,
  [SMALL_STATE(814)] = 21341,
  [SMALL_STATE(815)] = 21349,
  [SMALL_STATE(816)] = 21357,
  [SMALL_STATE(817)] = 21365,
  [SMALL_STATE(818)] = 21373,
  [SMALL_STATE(819)] = 21381,
  [SMALL_STATE(820)] = 21389,
  [SMALL_STATE(821)] = 21397,
  [SMALL_STATE(822)] = 21405,
  [SMALL_STATE(823)] = 21413,
  [SMALL_STATE(824)] = 21421,
  [SMALL_STATE(825)] = 21429,
  [SMALL_STATE(826)] = 21437,
  [SMALL_STATE(827)] = 21445,
  [SMALL_STATE(828)] = 21453,
  [SMALL_STATE(829)] = 21461,
  [SMALL_STATE(830)] = 21469,
  [SMALL_STATE(831)] = 21477,
  [SMALL_STATE(832)] = 21485,
  [SMALL_STATE(833)] = 21493,
  [SMALL_STATE(834)] = 21501,
  [SMALL_STATE(835)] = 21509,
  [SMALL_STATE(836)] = 21517,
  [SMALL_STATE(837)] = 21525,
  [SMALL_STATE(838)] = 21533,
  [SMALL_STATE(839)] = 21541,
  [SMALL_STATE(840)] = 21549,
  [SMALL_STATE(841)] = 21557,
  [SMALL_STATE(842)] = 21567,
  [SMALL_STATE(843)] = 21575,
  [SMALL_STATE(844)] = 21583,
  [SMALL_STATE(845)] = 21591,
  [SMALL_STATE(846)] = 21599,
  [SMALL_STATE(847)] = 21607,
  [SMALL_STATE(848)] = 21615,
  [SMALL_STATE(849)] = 21623,
  [SMALL_STATE(850)] = 21631,
  [SMALL_STATE(851)] = 21639,
  [SMALL_STATE(852)] = 21647,
  [SMALL_STATE(853)] = 21655,
  [SMALL_STATE(854)] = 21663,
  [SMALL_STATE(855)] = 21671,
  [SMALL_STATE(856)] = 21679,
  [SMALL_STATE(857)] = 21687,
  [SMALL_STATE(858)] = 21695,
  [SMALL_STATE(859)] = 21703,
  [SMALL_STATE(860)] = 21711,
  [SMALL_STATE(861)] = 21719,
  [SMALL_STATE(862)] = 21727,
  [SMALL_STATE(863)] = 21735,
  [SMALL_STATE(864)] = 21743,
  [SMALL_STATE(865)] = 21751,
  [SMALL_STATE(866)] = 21761,
  [SMALL_STATE(867)] = 21769,
  [SMALL_STATE(868)] = 21777,
  [SMALL_STATE(869)] = 21785,
  [SMALL_STATE(870)] = 21795,
  [SMALL_STATE(871)] = 21805,
  [SMALL_STATE(872)] = 21813,
  [SMALL_STATE(873)] = 21821,
  [SMALL_STATE(874)] = 21829,
  [SMALL_STATE(875)] = 21837,
  [SMALL_STATE(876)] = 21847,
  [SMALL_STATE(877)] = 21855,
  [SMALL_STATE(878)] = 21863,
  [SMALL_STATE(879)] = 21871,
  [SMALL_STATE(880)] = 21879,
  [SMALL_STATE(881)] = 21887,
  [SMALL_STATE(882)] = 21895,
  [SMALL_STATE(883)] = 21903,
  [SMALL_STATE(884)] = 21911,
  [SMALL_STATE(885)] = 21919,
  [SMALL_STATE(886)] = 21927,
  [SMALL_STATE(887)] = 21935,
  [SMALL_STATE(888)] = 21943,
  [SMALL_STATE(889)] = 21951,
  [SMALL_STATE(890)] = 21959,
  [SMALL_STATE(891)] = 21967,
  [SMALL_STATE(892)] = 21975,
  [SMALL_STATE(893)] = 21983,
  [SMALL_STATE(894)] = 21991,
  [SMALL_STATE(895)] = 21999,
  [SMALL_STATE(896)] = 22007,
  [SMALL_STATE(897)] = 22017,
  [SMALL_STATE(898)] = 22025,
  [SMALL_STATE(899)] = 22033,
  [SMALL_STATE(900)] = 22041,
  [SMALL_STATE(901)] = 22049,
  [SMALL_STATE(902)] = 22059,
  [SMALL_STATE(903)] = 22069,
  [SMALL_STATE(904)] = 22077,
  [SMALL_STATE(905)] = 22085,
  [SMALL_STATE(906)] = 22095,
  [SMALL_STATE(907)] = 22103,
  [SMALL_STATE(908)] = 22111,
  [SMALL_STATE(909)] = 22119,
  [SMALL_STATE(910)] = 22127,
  [SMALL_STATE(911)] = 22135,
  [SMALL_STATE(912)] = 22143,
  [SMALL_STATE(913)] = 22151,
  [SMALL_STATE(914)] = 22159,
  [SMALL_STATE(915)] = 22167,
  [SMALL_STATE(916)] = 22175,
  [SMALL_STATE(917)] = 22183,
  [SMALL_STATE(918)] = 22191,
  [SMALL_STATE(919)] = 22199,
  [SMALL_STATE(920)] = 22207,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(905),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(824),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(824),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(353),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(852),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(770),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(245),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(847),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(589),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(586),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(587),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(588),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(384),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(615),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(616),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(617),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(618),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(619),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(620),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(621),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(636),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(466),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(471),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(880),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(609),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(606),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(607),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(608),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(370),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(629),
  [93] = {.entry = {.count = 1, .reusable = false}}, SHIFT(630),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(631),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(632),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(633),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(634),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(635),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(648),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [111] = {.entry = {.count = 1, .reusable = false}}, SHIFT(469),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_sequence_stmt_alt_repeat1, 2, 0, 28),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_sequence_stmt_par_repeat1, 3, 0, 10),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_sequence_stmt_par_repeat1, 4, 0, 22),
  [135] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2, 0, 0), SHIFT_REPEAT(113),
  [138] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__sequence_subdocument, 2, 0, 0), SHIFT_REPEAT(245),
  [141] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2, 0, 0), SHIFT_REPEAT(847),
  [144] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2, 0, 0), SHIFT_REPEAT(589),
  [147] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2, 0, 0), SHIFT_REPEAT(586),
  [150] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2, 0, 0), SHIFT_REPEAT(85),
  [153] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2, 0, 0), SHIFT_REPEAT(587),
  [156] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2, 0, 0), SHIFT_REPEAT(588),
  [159] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2, 0, 0), SHIFT_REPEAT(384),
  [162] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2, 0, 0), SHIFT_REPEAT(615),
  [165] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__sequence_subdocument, 2, 0, 0), SHIFT_REPEAT(616),
  [168] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2, 0, 0), SHIFT_REPEAT(617),
  [171] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2, 0, 0), SHIFT_REPEAT(618),
  [174] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2, 0, 0), SHIFT_REPEAT(619),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2, 0, 0),
  [179] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2, 0, 0), SHIFT_REPEAT(620),
  [182] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2, 0, 0), SHIFT_REPEAT(621),
  [185] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2, 0, 0), SHIFT_REPEAT(636),
  [188] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__sequence_subdocument, 2, 0, 0), SHIFT_REPEAT(466),
  [191] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2, 0, 0), SHIFT_REPEAT(116),
  [194] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2, 0, 0), SHIFT_REPEAT(880),
  [197] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2, 0, 0), SHIFT_REPEAT(609),
  [200] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2, 0, 0), SHIFT_REPEAT(606),
  [203] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2, 0, 0), SHIFT_REPEAT(117),
  [206] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2, 0, 0), SHIFT_REPEAT(607),
  [209] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2, 0, 0), SHIFT_REPEAT(608),
  [212] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2, 0, 0), SHIFT_REPEAT(370),
  [215] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2, 0, 0), SHIFT_REPEAT(629),
  [218] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__sequence_subdocument, 2, 0, 0), SHIFT_REPEAT(630),
  [221] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2, 0, 0), SHIFT_REPEAT(631),
  [224] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2, 0, 0), SHIFT_REPEAT(632),
  [227] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2, 0, 0), SHIFT_REPEAT(633),
  [230] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2, 0, 0), SHIFT_REPEAT(634),
  [233] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2, 0, 0), SHIFT_REPEAT(635),
  [236] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2, 0, 0), SHIFT_REPEAT(648),
  [239] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__sequence_subdocument, 2, 0, 0), SHIFT_REPEAT(469),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_diagram_sequence_repeat1, 2, 0, 0),
  [244] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_sequence_repeat1, 2, 0, 0), SHIFT_REPEAT(19),
  [247] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_diagram_sequence_repeat1, 2, 0, 0), SHIFT_REPEAT(245),
  [250] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_sequence_repeat1, 2, 0, 0), SHIFT_REPEAT(804),
  [253] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_sequence_repeat1, 2, 0, 0), SHIFT_REPEAT(522),
  [256] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_sequence_repeat1, 2, 0, 0), SHIFT_REPEAT(540),
  [259] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_sequence_repeat1, 2, 0, 0), SHIFT_REPEAT(207),
  [262] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_sequence_repeat1, 2, 0, 0), SHIFT_REPEAT(543),
  [265] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_sequence_repeat1, 2, 0, 0), SHIFT_REPEAT(545),
  [268] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_sequence_repeat1, 2, 0, 0), SHIFT_REPEAT(376),
  [271] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_sequence_repeat1, 2, 0, 0), SHIFT_REPEAT(546),
  [274] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_diagram_sequence_repeat1, 2, 0, 0), SHIFT_REPEAT(571),
  [277] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_sequence_repeat1, 2, 0, 0), SHIFT_REPEAT(573),
  [280] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_sequence_repeat1, 2, 0, 0), SHIFT_REPEAT(480),
  [283] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_sequence_repeat1, 2, 0, 0), SHIFT_REPEAT(515),
  [286] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_sequence_repeat1, 2, 0, 0), SHIFT_REPEAT(497),
  [289] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_sequence_repeat1, 2, 0, 0), SHIFT_REPEAT(516),
  [292] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_sequence_repeat1, 2, 0, 0), SHIFT_REPEAT(518),
  [295] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_diagram_sequence_repeat1, 2, 0, 0), SHIFT_REPEAT(444),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(864),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(599),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(596),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(597),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(598),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(386),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(622),
  [316] = {.entry = {.count = 1, .reusable = false}}, SHIFT(623),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(624),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(625),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(626),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(627),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(628),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(642),
  [332] = {.entry = {.count = 1, .reusable = false}}, SHIFT(468),
  [334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [338] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2, 0, 0), SHIFT_REPEAT(175),
  [341] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2, 0, 0), SHIFT_REPEAT(864),
  [344] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2, 0, 0), SHIFT_REPEAT(599),
  [347] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2, 0, 0), SHIFT_REPEAT(596),
  [350] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2, 0, 0), SHIFT_REPEAT(201),
  [353] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2, 0, 0), SHIFT_REPEAT(597),
  [356] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2, 0, 0), SHIFT_REPEAT(598),
  [359] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2, 0, 0), SHIFT_REPEAT(386),
  [362] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2, 0, 0), SHIFT_REPEAT(622),
  [365] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__sequence_subdocument, 2, 0, 0), SHIFT_REPEAT(623),
  [368] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2, 0, 0), SHIFT_REPEAT(624),
  [371] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2, 0, 0), SHIFT_REPEAT(625),
  [374] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2, 0, 0), SHIFT_REPEAT(626),
  [377] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2, 0, 0), SHIFT_REPEAT(627),
  [380] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2, 0, 0), SHIFT_REPEAT(628),
  [383] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2, 0, 0), SHIFT_REPEAT(642),
  [386] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__sequence_subdocument, 2, 0, 0), SHIFT_REPEAT(468),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [413] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_diagram_sequence, 1, 0, 0),
  [415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(804),
  [419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(522),
  [421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(540),
  [423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(543),
  [427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(545),
  [429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(376),
  [431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(546),
  [433] = {.entry = {.count = 1, .reusable = false}}, SHIFT(571),
  [435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(573),
  [437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(480),
  [439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(515),
  [441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(497),
  [443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(516),
  [445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(518),
  [447] = {.entry = {.count = 1, .reusable = false}}, SHIFT(444),
  [449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [467] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_diagram_sequence, 2, 0, 0),
  [469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [471] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_vertex, 1, 0, 0),
  [473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(393),
  [475] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_vertex, 1, 0, 0),
  [477] = {.entry = {.count = 1, .reusable = false}}, SHIFT(394),
  [479] = {.entry = {.count = 1, .reusable = false}}, SHIFT(395),
  [481] = {.entry = {.count = 1, .reusable = false}}, SHIFT(396),
  [483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(397),
  [485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(398),
  [487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(399),
  [489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(400),
  [491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(404),
  [493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(405),
  [495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(387),
  [497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(408),
  [499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(409),
  [501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [507] = {.entry = {.count = 1, .reusable = false}}, SHIFT(228),
  [509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(407),
  [523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(391),
  [525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [529] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_state_composite_body_repeat1, 2, 0, 0), SHIFT_REPEAT(82),
  [532] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_state_composite_body_repeat1, 2, 0, 0), SHIFT_REPEAT(259),
  [535] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_state_composite_body_repeat1, 2, 0, 0), SHIFT_REPEAT(228),
  [538] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_state_composite_body_repeat1, 2, 0, 0), SHIFT_REPEAT(228),
  [541] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_state_composite_body_repeat1, 2, 0, 0), SHIFT_REPEAT(250),
  [544] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_state_composite_body_repeat1, 2, 0, 0), SHIFT_REPEAT(240),
  [547] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_state_composite_body_repeat1, 2, 0, 0), SHIFT_REPEAT(249),
  [550] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_state_composite_body_repeat1, 2, 0, 0), SHIFT_REPEAT(251),
  [553] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_state_composite_body_repeat1, 2, 0, 0), SHIFT_REPEAT(255),
  [556] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_state_composite_body_repeat1, 2, 0, 0),
  [558] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_state_composite_body_repeat1, 2, 0, 0), SHIFT_REPEAT(407),
  [561] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_state_composite_body_repeat1, 2, 0, 0), SHIFT_REPEAT(391),
  [564] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [568] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [570] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_diagram_gantt_repeat1, 2, 0, 0),
  [572] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_gantt_repeat1, 2, 0, 0), SHIFT_REPEAT(69),
  [575] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_diagram_gantt_repeat1, 2, 0, 0), SHIFT_REPEAT(572),
  [578] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_gantt_repeat1, 2, 0, 0), SHIFT_REPEAT(674),
  [581] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_gantt_repeat1, 2, 0, 0), SHIFT_REPEAT(675),
  [584] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_gantt_repeat1, 2, 0, 0), SHIFT_REPEAT(676),
  [587] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_gantt_repeat1, 2, 0, 0), SHIFT_REPEAT(679),
  [590] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_gantt_repeat1, 2, 0, 0), SHIFT_REPEAT(683),
  [593] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_gantt_repeat1, 2, 0, 0), SHIFT_REPEAT(690),
  [596] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_gantt_repeat1, 2, 0, 0), SHIFT_REPEAT(692),
  [599] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_gantt_repeat1, 2, 0, 0), SHIFT_REPEAT(700),
  [602] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_gantt_repeat1, 2, 0, 0), SHIFT_REPEAT(657),
  [605] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_diagram_state, 5, 0, 0),
  [607] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [609] = {.entry = {.count = 1, .reusable = false}}, SHIFT(283),
  [611] = {.entry = {.count = 1, .reusable = true}}, SHIFT(389),
  [613] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_diagram_gantt, 2, 0, 0),
  [615] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [617] = {.entry = {.count = 1, .reusable = false}}, SHIFT(572),
  [619] = {.entry = {.count = 1, .reusable = true}}, SHIFT(674),
  [621] = {.entry = {.count = 1, .reusable = true}}, SHIFT(675),
  [623] = {.entry = {.count = 1, .reusable = true}}, SHIFT(676),
  [625] = {.entry = {.count = 1, .reusable = true}}, SHIFT(679),
  [627] = {.entry = {.count = 1, .reusable = true}}, SHIFT(683),
  [629] = {.entry = {.count = 1, .reusable = true}}, SHIFT(690),
  [631] = {.entry = {.count = 1, .reusable = true}}, SHIFT(692),
  [633] = {.entry = {.count = 1, .reusable = true}}, SHIFT(700),
  [635] = {.entry = {.count = 1, .reusable = true}}, SHIFT(657),
  [637] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [639] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_diagram_gantt, 3, 0, 0),
  [641] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [643] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_diagram_state, 4, 0, 0),
  [645] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [647] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_diagram_state, 3, 0, 0),
  [649] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_vertex_id, 1, 0, 0),
  [651] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_vertex_id, 1, 0, 0),
  [653] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [655] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_stmt_autonumber, 1, 0, 0),
  [657] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_stmt_autonumber, 1, 0, 0),
  [659] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__sequence_stmt, 1, 0, 0),
  [661] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__sequence_stmt, 1, 0, 0),
  [663] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_stmt_actor, 3, 0, 0),
  [665] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_stmt_actor, 3, 0, 0),
  [667] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_stmt_activate, 3, 0, 0),
  [669] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_stmt_activate, 3, 0, 0),
  [671] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_stmt_deactivate, 3, 0, 0),
  [673] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_stmt_deactivate, 3, 0, 0),
  [675] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_stmt_participant, 3, 0, 0),
  [677] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_stmt_participant, 3, 0, 0),
  [679] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_stmt_title, 4, 0, 9),
  [681] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_stmt_title, 4, 0, 9),
  [683] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_stmt_links, 4, 0, 0),
  [685] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_stmt_links, 4, 0, 0),
  [687] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_stmt_link, 4, 0, 0),
  [689] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_stmt_link, 4, 0, 0),
  [691] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_stmt_properties, 4, 0, 0),
  [693] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_stmt_properties, 4, 0, 0),
  [695] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_stmt_details, 4, 0, 0),
  [697] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_stmt_details, 4, 0, 0),
  [699] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_stmt_loop, 4, 0, 0),
  [701] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_stmt_loop, 4, 0, 0),
  [703] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_stmt_rect, 4, 0, 0),
  [705] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_stmt_rect, 4, 0, 0),
  [707] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_stmt_opt, 4, 0, 0),
  [709] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_stmt_opt, 4, 0, 0),
  [711] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_stmt_par, 4, 0, 10),
  [713] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_stmt_par, 4, 0, 10),
  [715] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_stmt_actor, 5, 0, 18),
  [717] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_stmt_actor, 5, 0, 18),
  [719] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_stmt_loop, 5, 0, 19),
  [721] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_stmt_loop, 5, 0, 19),
  [723] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_stmt_rect, 5, 0, 20),
  [725] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_stmt_rect, 5, 0, 20),
  [727] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_stmt_opt, 5, 0, 21),
  [729] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_stmt_opt, 5, 0, 21),
  [731] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_stmt_alt, 5, 0, 22),
  [733] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_stmt_alt, 5, 0, 22),
  [735] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_stmt_par, 5, 0, 10),
  [737] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_stmt_par, 5, 0, 10),
  [739] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_stmt_par, 5, 0, 22),
  [741] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_stmt_par, 5, 0, 22),
  [743] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_stmt_participant, 5, 0, 18),
  [745] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_stmt_participant, 5, 0, 18),
  [747] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_stmt_note, 6, 0, 0),
  [749] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_stmt_note, 6, 0, 0),
  [751] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_stmt_alt, 6, 0, 22),
  [753] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_stmt_alt, 6, 0, 22),
  [755] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_stmt_par, 6, 0, 22),
  [757] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_stmt_par, 6, 0, 22),
  [759] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_stmt_signal, 6, 0, 0),
  [761] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_stmt_signal, 6, 0, 0),
  [763] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_stmt_signal, 7, 0, 0),
  [765] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_stmt_signal, 7, 0, 0),
  [767] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 1, 0, 0),
  [769] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__sequence_subdocument, 1, 0, 0),
  [771] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__sequence_rest_text, 1, 0, 0),
  [773] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__sequence_rest_text, 1, 0, 0),
  [775] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_text, 1, 0, 0),
  [777] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_text, 1, 0, 0),
  [779] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_stmt_note, 8, 0, 0),
  [781] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_stmt_note, 8, 0, 0),
  [783] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mmap_node, 2, 0, 0),
  [785] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mmap_node, 2, 0, 0),
  [787] = {.entry = {.count = 1, .reusable = false}}, SHIFT(426),
  [789] = {.entry = {.count = 1, .reusable = false}}, SHIFT(427),
  [791] = {.entry = {.count = 1, .reusable = true}}, SHIFT(428),
  [793] = {.entry = {.count = 1, .reusable = true}}, SHIFT(429),
  [795] = {.entry = {.count = 1, .reusable = true}}, SHIFT(430),
  [797] = {.entry = {.count = 1, .reusable = true}}, SHIFT(431),
  [799] = {.entry = {.count = 1, .reusable = true}}, SHIFT(920),
  [801] = {.entry = {.count = 1, .reusable = true}}, SHIFT(841),
  [803] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [805] = {.entry = {.count = 1, .reusable = true}}, SHIFT(388),
  [807] = {.entry = {.count = 1, .reusable = true}}, SHIFT(401),
  [809] = {.entry = {.count = 1, .reusable = true}}, SHIFT(403),
  [811] = {.entry = {.count = 1, .reusable = false}}, SHIFT(406),
  [813] = {.entry = {.count = 1, .reusable = true}}, SHIFT(406),
  [815] = {.entry = {.count = 1, .reusable = true}}, SHIFT(338),
  [817] = {.entry = {.count = 1, .reusable = true}}, SHIFT(346),
  [819] = {.entry = {.count = 1, .reusable = true}}, SHIFT(339),
  [821] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_stmt_vertice, 2, 0, 0),
  [823] = {.entry = {.count = 1, .reusable = true}}, SHIFT(713),
  [825] = {.entry = {.count = 1, .reusable = false}}, SHIFT(769),
  [827] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [829] = {.entry = {.count = 1, .reusable = true}}, SHIFT(382),
  [831] = {.entry = {.count = 1, .reusable = true}}, SHIFT(367),
  [833] = {.entry = {.count = 1, .reusable = true}}, SHIFT(368),
  [835] = {.entry = {.count = 1, .reusable = true}}, SHIFT(371),
  [837] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_stmt_vertice, 1, 0, 0),
  [839] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_flow_stmt_vertice_repeat1, 2, 0, 0),
  [841] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_flow_stmt_vertice_repeat1, 2, 0, 0), SHIFT_REPEAT(713),
  [844] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_flow_stmt_vertice_repeat1, 2, 0, 0), SHIFT_REPEAT(769),
  [847] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_state_stmt_simple, 2, 0, 0),
  [849] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_state_stmt_simple, 2, 0, 0),
  [851] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [853] = {.entry = {.count = 1, .reusable = true}}, SHIFT(757),
  [855] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_state_alias, 3, 0, 11),
  [857] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_state_alias, 3, 0, 11),
  [859] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_state_stmt_simple, 1, 0, 0),
  [861] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_state_stmt_simple, 1, 0, 0),
  [863] = {.entry = {.count = 1, .reusable = true}}, SHIFT(715),
  [865] = {.entry = {.count = 1, .reusable = true}}, SHIFT(718),
  [867] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_er_stmt_entity, 1, 0, 0),
  [869] = {.entry = {.count = 1, .reusable = true}}, SHIFT(416),
  [871] = {.entry = {.count = 1, .reusable = true}}, SHIFT(417),
  [873] = {.entry = {.count = 1, .reusable = true}}, SHIFT(418),
  [875] = {.entry = {.count = 1, .reusable = true}}, SHIFT(419),
  [877] = {.entry = {.count = 1, .reusable = true}}, SHIFT(883),
  [879] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(905),
  [882] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(224),
  [885] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [887] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [889] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_state_note, 4, 0, 0),
  [891] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_state_note, 4, 0, 0),
  [893] = {.entry = {.count = 1, .reusable = false}}, SHIFT(238),
  [895] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_state_stmt_arrow, 3, 0, 0),
  [897] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_state_stmt_arrow, 3, 0, 0),
  [899] = {.entry = {.count = 1, .reusable = true}}, SHIFT(740),
  [901] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_name, 1, 0, 0),
  [903] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_name, 1, 0, 0),
  [905] = {.entry = {.count = 1, .reusable = true}}, SHIFT(856),
  [907] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_state_name, 1, 0, 0),
  [909] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_state_name, 1, 0, 0),
  [911] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_state_stmt_hide_empty_description, 1, 0, 0),
  [913] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_state_stmt_hide_empty_description, 1, 0, 0),
  [915] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__state_stmt, 1, 0, 0),
  [917] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__state_stmt, 1, 0, 0),
  [919] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__state_direction, 1, 0, 0),
  [921] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__state_direction, 1, 0, 0),
  [923] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_state_annotation_fork, 1, 0, 0),
  [925] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_state_annotation_fork, 1, 0, 0),
  [927] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_class_name_body_repeat1, 1, 0, 0),
  [929] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_name_body_repeat1, 1, 0, 0),
  [931] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_name_body, 1, 0, 0),
  [933] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_name_body, 1, 0, 0),
  [935] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_state_annotation_join, 1, 0, 0),
  [937] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_state_annotation_join, 1, 0, 0),
  [939] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [941] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [943] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [945] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_state_stmt_composite, 3, 0, 0),
  [947] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_state_stmt_composite, 3, 0, 0),
  [949] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_state_stmt_annotation, 3, 0, 0),
  [951] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_state_stmt_annotation, 3, 0, 0),
  [953] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_state_description, 1, 0, 0),
  [955] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_state_description, 1, 0, 0),
  [957] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_state_stmt_simple, 3, 0, 0),
  [959] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_state_stmt_simple, 3, 0, 0),
  [961] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_state_direction_tb, 1, 0, 0),
  [963] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_state_direction_tb, 1, 0, 0),
  [965] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_diagram_class, 5, 0, 0),
  [967] = {.entry = {.count = 1, .reusable = false}}, SHIFT(233),
  [969] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [971] = {.entry = {.count = 1, .reusable = false}}, SHIFT(413),
  [973] = {.entry = {.count = 1, .reusable = true}}, SHIFT(781),
  [975] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_relation, 2, 0, 0),
  [977] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_relation, 2, 0, 0),
  [979] = {.entry = {.count = 1, .reusable = false}}, SHIFT(388),
  [981] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_state_note, 5, 0, 23),
  [983] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_state_note, 5, 0, 23),
  [985] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_actor, 1, 0, 0),
  [987] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_actor, 1, 0, 0),
  [989] = {.entry = {.count = 1, .reusable = false}}, SHIFT(265),
  [991] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_state_composite_body, 3, 0, 0),
  [993] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_state_composite_body, 3, 0, 0),
  [995] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_state_stmt_composite, 5, 0, 0),
  [997] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_state_stmt_composite, 5, 0, 0),
  [999] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_state_stmt_arrow, 5, 0, 0),
  [1001] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_state_stmt_arrow, 5, 0, 0),
  [1003] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_state_direction_bt, 1, 0, 0),
  [1005] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_state_direction_bt, 1, 0, 0),
  [1007] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_state_hide_empty_description, 1, 0, 0),
  [1009] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_state_hide_empty_description, 1, 0, 0),
  [1011] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_state_direction_rl, 1, 0, 0),
  [1013] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_state_direction_rl, 1, 0, 0),
  [1015] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [1017] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [1019] = {.entry = {.count = 1, .reusable = false}}, SHIFT(375),
  [1021] = {.entry = {.count = 1, .reusable = false}}, SHIFT(517),
  [1023] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_state_composite_body, 4, 0, 0),
  [1025] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_state_composite_body, 4, 0, 0),
  [1027] = {.entry = {.count = 1, .reusable = false}}, SHIFT(510),
  [1029] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_state_direction_lr, 1, 0, 0),
  [1031] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_state_direction_lr, 1, 0, 0),
  [1033] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_state_composite_body, 5, 0, 0),
  [1035] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_state_composite_body, 5, 0, 0),
  [1037] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_state_composite_body, 6, 0, 0),
  [1039] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_state_composite_body, 6, 0, 0),
  [1041] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__state_annotation, 1, 0, 0),
  [1043] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__state_annotation, 1, 0, 0),
  [1045] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_state_division, 1, 0, 0),
  [1047] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_state_division, 1, 0, 0),
  [1049] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_diagram_class, 4, 0, 0),
  [1051] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_relation, 1, 0, 0),
  [1053] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_relation, 1, 0, 0),
  [1055] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_name_body, 2, 0, 0),
  [1057] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_name_body, 2, 0, 0),
  [1059] = {.entry = {.count = 1, .reusable = false}}, SHIFT(553),
  [1061] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_sequence_actor_repeat1, 2, 0, 0),
  [1063] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_sequence_actor_repeat1, 2, 0, 0),
  [1065] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_actor_repeat1, 2, 0, 0), SHIFT_REPEAT(265),
  [1068] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_state_annotation_choice, 1, 0, 0),
  [1070] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_state_annotation_choice, 1, 0, 0),
  [1072] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_state_composite_body_repeat1, 2, 0, 0),
  [1074] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [1076] = {.entry = {.count = 1, .reusable = true}}, SHIFT(445),
  [1078] = {.entry = {.count = 1, .reusable = true}}, SHIFT(446),
  [1080] = {.entry = {.count = 1, .reusable = false}}, SHIFT(352),
  [1082] = {.entry = {.count = 1, .reusable = false}}, SHIFT(447),
  [1084] = {.entry = {.count = 1, .reusable = true}}, SHIFT(448),
  [1086] = {.entry = {.count = 1, .reusable = true}}, SHIFT(352),
  [1088] = {.entry = {.count = 1, .reusable = true}}, SHIFT(819),
  [1090] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_generics, 3, 0, 0),
  [1092] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_generics, 3, 0, 0),
  [1094] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 3, 0, 0),
  [1096] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive, 3, 0, 0),
  [1098] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_flow_stmt_subgraph_inner_repeat1, 2, 0, 0), SHIFT_REPEAT(83),
  [1101] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_flow_stmt_subgraph_inner_repeat1, 2, 0, 0), SHIFT_REPEAT(221),
  [1104] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_flow_stmt_subgraph_inner_repeat1, 2, 0, 0), SHIFT_REPEAT(375),
  [1107] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_flow_stmt_subgraph_inner_repeat1, 2, 0, 0),
  [1109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [1111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(659),
  [1113] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_stmt_subgraph_inner, 1, 0, 0),
  [1115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__gantt_stmt, 1, 0, 0),
  [1117] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__gantt_stmt, 1, 0, 0),
  [1119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(729),
  [1121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(660),
  [1123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(666),
  [1125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_name, 2, 0, 0),
  [1127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_name, 2, 0, 0),
  [1129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gantt_meta_format, 1, 0, 0),
  [1131] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_gantt_meta_format, 1, 0, 0),
  [1133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gantt_stmt_dateformat, 2, 0, 0),
  [1135] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_gantt_stmt_dateformat, 2, 0, 0),
  [1137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gantt_stmt_inclusiveenddates, 2, 0, 1),
  [1139] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_gantt_stmt_inclusiveenddates, 2, 0, 1),
  [1141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gantt_stmt_topaxis, 2, 0, 2),
  [1143] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_gantt_stmt_topaxis, 2, 0, 2),
  [1145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gantt_stmt_axisformat, 2, 0, 3),
  [1147] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_gantt_stmt_axisformat, 2, 0, 3),
  [1149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gantt_stmt_includes, 2, 0, 4),
  [1151] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_gantt_stmt_includes, 2, 0, 4),
  [1153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gantt_stmt_excludes, 2, 0, 5),
  [1155] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_gantt_stmt_excludes, 2, 0, 5),
  [1157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gantt_stmt_todaymarker, 2, 0, 6),
  [1159] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_gantt_stmt_todaymarker, 2, 0, 6),
  [1161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gantt_stmt_title, 2, 0, 7),
  [1163] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_gantt_stmt_title, 2, 0, 7),
  [1165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gantt_stmt_section, 2, 0, 8),
  [1167] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_gantt_stmt_section, 2, 0, 8),
  [1169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(668),
  [1171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gantt_stmt_task, 3, 0, 0),
  [1173] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_gantt_stmt_task, 3, 0, 0),
  [1175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(663),
  [1177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_diagram_flow, 4, 0, 0),
  [1179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_node, 2, 0, 0),
  [1181] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_node, 2, 0, 0),
  [1183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(524),
  [1185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_er_entity_name, 1, 0, 0),
  [1187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_diagram_pie, 1, 0, 0),
  [1189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(350),
  [1191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(899),
  [1193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(452),
  [1195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(412),
  [1197] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_flow_text_literal_repeat1, 2, 0, 0), SHIFT_REPEAT(303),
  [1200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_flow_text_literal_repeat1, 2, 0, 0),
  [1202] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_flow_text_literal_repeat1, 2, 0, 0),
  [1204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(501),
  [1206] = {.entry = {.count = 1, .reusable = false}}, SHIFT(501),
  [1208] = {.entry = {.count = 1, .reusable = false}}, SHIFT(505),
  [1210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(511),
  [1212] = {.entry = {.count = 1, .reusable = false}}, SHIFT(303),
  [1214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_text_literal, 1, 0, 0),
  [1216] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_text_literal, 1, 0, 0),
  [1218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_node, 1, 0, 0),
  [1220] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_node, 1, 0, 0),
  [1222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_diagram_flow, 6, 0, 0),
  [1224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_diagram_flow, 5, 0, 0),
  [1226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_flow_node_repeat1, 2, 0, 0),
  [1228] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_flow_node_repeat1, 2, 0, 0),
  [1230] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_flow_node_repeat1, 2, 0, 0), SHIFT_REPEAT(524),
  [1233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [1235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_vertex_hexagon, 3, 0, 0),
  [1237] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_vertex_hexagon, 3, 0, 0),
  [1239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_vertex_square, 3, 0, 0),
  [1241] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_vertex_square, 3, 0, 0),
  [1243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_vertex_trapezoid, 3, 0, 0),
  [1245] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_vertex_trapezoid, 3, 0, 0),
  [1247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_vertex_leanright, 3, 0, 0),
  [1249] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_vertex_leanright, 3, 0, 0),
  [1251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_vertex_leanleft, 3, 0, 0),
  [1253] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_vertex_leanleft, 3, 0, 0),
  [1255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_vertex_inv_trapezoid, 3, 0, 0),
  [1257] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_vertex_inv_trapezoid, 3, 0, 0),
  [1259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_vertex, 2, 0, 0),
  [1261] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_vertex, 2, 0, 0),
  [1263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__flow_vertex_kind, 1, 0, 0),
  [1265] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__flow_vertex_kind, 1, 0, 0),
  [1267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_vertex_circle, 3, 0, 0),
  [1269] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_vertex_circle, 3, 0, 0),
  [1271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_vertex_ellipse, 3, 0, 0),
  [1273] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_vertex_ellipse, 3, 0, 0),
  [1275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_vertex_stadium, 3, 0, 0),
  [1277] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_vertex_stadium, 3, 0, 0),
  [1279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_vertex_odd, 3, 0, 0),
  [1281] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_vertex_odd, 3, 0, 0),
  [1283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_vertex_diamond, 3, 0, 0),
  [1285] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_vertex_diamond, 3, 0, 0),
  [1287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_vertex_round, 3, 0, 0),
  [1289] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_vertex_round, 3, 0, 0),
  [1291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_vertex_subroutine, 3, 0, 0),
  [1293] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_vertex_subroutine, 3, 0, 0),
  [1295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mmap_node_id, 1, 0, 0),
  [1297] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mmap_node_id, 1, 0, 0),
  [1299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_vertex_rect, 3, 0, 0),
  [1301] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_vertex_rect, 3, 0, 0),
  [1303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_vertex_cylinder, 3, 0, 0),
  [1305] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_vertex_cylinder, 3, 0, 0),
  [1307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_diagram_pie, 2, 0, 0),
  [1309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(344),
  [1311] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_linetype_solid, 1, 0, 0),
  [1313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_linetype_solid, 1, 0, 0),
  [1315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_method_line, 2, 0, 15),
  [1317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(351),
  [1319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(483),
  [1321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(484),
  [1323] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__class_linetype, 1, 0, 0),
  [1325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__class_linetype, 1, 0, 0),
  [1327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_method_line, 2, 0, 0),
  [1329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(487),
  [1331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(488),
  [1333] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_method_line, 2, 0, 16),
  [1335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(485),
  [1337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(486),
  [1339] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_diagram_pie, 3, 0, 0),
  [1341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(349),
  [1343] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_method_line, 2, 0, 14),
  [1345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(481),
  [1347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(482),
  [1349] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_linetype_dotted, 1, 0, 0),
  [1351] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_linetype_dotted, 1, 0, 0),
  [1353] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_flow_stmt_vertice_repeat1, 2, 0, 0),
  [1355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(678),
  [1357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(844),
  [1359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(707),
  [1361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(710),
  [1363] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_diagram_pie_repeat1, 2, 0, 0),
  [1365] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_pie_repeat1, 2, 0, 0), SHIFT_REPEAT(349),
  [1368] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_pie_repeat1, 2, 0, 0), SHIFT_REPEAT(899),
  [1371] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_pie_repeat1, 2, 0, 0), SHIFT_REPEAT(412),
  [1374] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_method_line_repeat1, 2, 0, 0),
  [1376] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_method_line_repeat1, 2, 0, 0), SHIFT_REPEAT(351),
  [1379] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_method_line, 1, 0, 0),
  [1381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(502),
  [1383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(503),
  [1385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(378),
  [1387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [1389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(901),
  [1391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(902),
  [1393] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_diagram_er, 4, 0, 0),
  [1395] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_er_reltype_identifying, 1, 0, 0),
  [1397] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_er_reltype_non_identifying, 1, 0, 0),
  [1399] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__er_reltype, 1, 0, 0),
  [1401] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_diagram_er, 3, 0, 0),
  [1403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(356),
  [1405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(357),
  [1407] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_diagram_er, 5, 0, 0),
  [1409] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flowchart_direction_lr, 1, 0, 0),
  [1411] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flowchart_direction_lr, 1, 0, 0),
  [1413] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flowchart_direction_tb, 1, 0, 0),
  [1415] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flowchart_direction_tb, 1, 0, 0),
  [1417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(795),
  [1419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(865),
  [1421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(870),
  [1423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(649),
  [1425] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flowchart_direction_bt, 1, 0, 0),
  [1427] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flowchart_direction_bt, 1, 0, 0),
  [1429] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__flowchart_direction, 1, 0, 0),
  [1431] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__flowchart_direction, 1, 0, 0),
  [1433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [1435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(449),
  [1437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(549),
  [1439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(372),
  [1441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(423),
  [1443] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_flow_arrow_text_repeat1, 2, 0, 0),
  [1445] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_flow_arrow_text_repeat1, 2, 0, 0), SHIFT_REPEAT(380),
  [1448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(809),
  [1450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(697),
  [1452] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flowchart_direction_rl, 1, 0, 0),
  [1454] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flowchart_direction_rl, 1, 0, 0),
  [1456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(422),
  [1458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(637),
  [1460] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mmap_node, 3, 0, 0),
  [1462] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mmap_node, 3, 0, 0),
  [1464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(643),
  [1466] = {.entry = {.count = 1, .reusable = false}}, SHIFT(411),
  [1468] = {.entry = {.count = 1, .reusable = false}}, SHIFT(768),
  [1470] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__class_reltype, 1, 0, 0),
  [1472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(694),
  [1474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(699),
  [1476] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_vertex_text, 1, 0, 0),
  [1478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(380),
  [1480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(867),
  [1482] = {.entry = {.count = 1, .reusable = false}}, SHIFT(306),
  [1484] = {.entry = {.count = 1, .reusable = false}}, SHIFT(907),
  [1486] = {.entry = {.count = 1, .reusable = false}}, SHIFT(910),
  [1488] = {.entry = {.count = 1, .reusable = false}}, SHIFT(912),
  [1490] = {.entry = {.count = 1, .reusable = false}}, SHIFT(913),
  [1492] = {.entry = {.count = 1, .reusable = false}}, SHIFT(914),
  [1494] = {.entry = {.count = 1, .reusable = false}}, SHIFT(916),
  [1496] = {.entry = {.count = 1, .reusable = false}}, SHIFT(763),
  [1498] = {.entry = {.count = 1, .reusable = false}}, SHIFT(764),
  [1500] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_reltype_extension, 1, 0, 0),
  [1502] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_reltype_composition, 1, 0, 0),
  [1504] = {.entry = {.count = 1, .reusable = false}}, SHIFT(765),
  [1506] = {.entry = {.count = 1, .reusable = false}}, SHIFT(766),
  [1508] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_reltype_dependency, 1, 0, 0),
  [1510] = {.entry = {.count = 1, .reusable = false}}, SHIFT(746),
  [1512] = {.entry = {.count = 1, .reusable = false}}, SHIFT(705),
  [1514] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_flow_arrow_text_repeat1, 2, 0, 0), SHIFT_REPEAT(410),
  [1517] = {.entry = {.count = 1, .reusable = false}}, SHIFT(414),
  [1519] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pie_stmt_title, 1, 0, 0),
  [1521] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pie_stmt_title, 1, 0, 0),
  [1523] = {.entry = {.count = 1, .reusable = false}}, SHIFT(459),
  [1525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(359),
  [1527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(402),
  [1529] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_flow_text_literal_repeat1, 2, 0, 0), SHIFT_REPEAT(414),
  [1532] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_er_cardinarity_zero_or_one, 1, 0, 0),
  [1534] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_er_cardinarity_zero_or_more, 1, 0, 0),
  [1536] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_er_cardinarity_one_or_more, 1, 0, 0),
  [1538] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__er_cardinarity, 1, 0, 0),
  [1540] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_er_stmt_entity_block_inner_repeat1, 2, 0, 0), SHIFT_REPEAT(809),
  [1543] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_er_stmt_entity_block_inner_repeat1, 2, 0, 0),
  [1545] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_er_stmt_entity_block_inner, 1, 0, 0),
  [1547] = {.entry = {.count = 1, .reusable = false}}, SHIFT(410),
  [1549] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_arrow_text, 1, 0, 0),
  [1551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(868),
  [1553] = {.entry = {.count = 1, .reusable = false}}, SHIFT(869),
  [1555] = {.entry = {.count = 1, .reusable = true}}, SHIFT(802),
  [1557] = {.entry = {.count = 1, .reusable = false}}, SHIFT(875),
  [1559] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mmap_node_rounded, 3, 0, 0),
  [1561] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mmap_node_rounded, 3, 0, 0),
  [1563] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_actor_repeat1, 2, 0, 0), SHIFT_REPEAT(434),
  [1566] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mmap_markdown, 3, 0, 0),
  [1568] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [1570] = {.entry = {.count = 1, .reusable = false}}, SHIFT(434),
  [1572] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_diagram_flow, 3, 0, 0),
  [1574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [1576] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_flow_stmt_subgraph_inner_repeat1, 2, 0, 0),
  [1578] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mmap_node_content, 1, 0, 0),
  [1580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [1582] = {.entry = {.count = 1, .reusable = false}}, SHIFT(761),
  [1584] = {.entry = {.count = 1, .reusable = true}}, SHIFT(345),
  [1586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(340),
  [1588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(343),
  [1590] = {.entry = {.count = 1, .reusable = true}}, SHIFT(342),
  [1592] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_flow_arrow_text_repeat1, 1, 0, 0),
  [1594] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mmap_node, 4, 0, 0),
  [1596] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mmap_node, 4, 0, 0),
  [1598] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_stmt_relation, 5, 0, 0),
  [1600] = {.entry = {.count = 1, .reusable = false}}, SHIFT(723),
  [1602] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pie_showdata, 1, 0, 0),
  [1604] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_stmt_class, 2, 0, 0),
  [1606] = {.entry = {.count = 1, .reusable = true}}, SHIFT(773),
  [1608] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [1610] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [1612] = {.entry = {.count = 1, .reusable = true}}, SHIFT(702),
  [1614] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_diagram_flow_repeat1, 2, 0, 0),
  [1616] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_flow_repeat1, 2, 0, 0), SHIFT_REPEAT(320),
  [1619] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [1621] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pie_stmt_title, 2, 0, 0),
  [1623] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__pie_stmt, 1, 0, 0),
  [1625] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_stmt_relation, 6, 0, 0),
  [1627] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pie_stmt_element, 3, 0, 0),
  [1629] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_stmt_relation, 4, 0, 0),
  [1631] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [1633] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_er_attribute_name, 1, 0, 0),
  [1635] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [1637] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [1639] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mmap_text, 2, 0, 0),
  [1641] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [1643] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mmap_node_cloud, 3, 0, 0),
  [1645] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mmap_node_cloud, 3, 0, 0),
  [1647] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mmap_node_square, 3, 0, 0),
  [1649] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mmap_node_square, 3, 0, 0),
  [1651] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mmap_node_circle, 3, 0, 0),
  [1653] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mmap_node_circle, 3, 0, 0),
  [1655] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mmap_node_bang, 3, 0, 0),
  [1657] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mmap_node_bang, 3, 0, 0),
  [1659] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mmap_node_hexagon, 3, 0, 0),
  [1661] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mmap_node_hexagon, 3, 0, 0),
  [1663] = {.entry = {.count = 1, .reusable = true}}, SHIFT(672),
  [1665] = {.entry = {.count = 1, .reusable = true}}, SHIFT(366),
  [1667] = {.entry = {.count = 1, .reusable = true}}, SHIFT(432),
  [1669] = {.entry = {.count = 1, .reusable = true}}, SHIFT(461),
  [1671] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_method_line, 3, 0, 24),
  [1673] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_method_line, 3, 0, 14),
  [1675] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_method_line, 3, 0, 25),
  [1677] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_method_line, 3, 0, 15),
  [1679] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_method_line, 3, 0, 26),
  [1681] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_method_line, 3, 0, 16),
  [1683] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_method_line, 3, 0, 27),
  [1685] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_method_line, 3, 0, 0),
  [1687] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_stmt_subgraph, 5, 0, 0),
  [1689] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_stmt_class, 4, 0, 12),
  [1691] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [1693] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mmap_icon, 3, 0, 0),
  [1695] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mmap_icon, 3, 0, 0),
  [1697] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [1699] = {.entry = {.count = 1, .reusable = true}}, SHIFT(712),
  [1701] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_sequence_stmt_alt_repeat1, 2, 0, 0),
  [1703] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sequence_stmt_alt_repeat1, 2, 0, 0), SHIFT_REPEAT(50),
  [1706] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_stmt_direction, 2, 0, 0),
  [1708] = {.entry = {.count = 1, .reusable = true}}, SHIFT(451),
  [1710] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [1712] = {.entry = {.count = 1, .reusable = true}}, SHIFT(721),
  [1714] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [1716] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_stmt_class_repeat1, 2, 0, 0), SHIFT_REPEAT(305),
  [1719] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_stmt_class_repeat1, 2, 0, 0),
  [1721] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_signal_type, 1, 0, 0),
  [1723] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_signal_type, 1, 0, 0),
  [1725] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_method_line, 2, 0, 17),
  [1727] = {.entry = {.count = 1, .reusable = true}}, SHIFT(425),
  [1729] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence__dotted_open_arrow, 1, 0, 0),
  [1731] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence__dotted_open_arrow, 1, 0, 0),
  [1733] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [1735] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_relation, 3, 0, 0),
  [1737] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_stmt_subgraph, 7, 0, 0),
  [1739] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence__solid_point, 1, 0, 0),
  [1741] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence__solid_point, 1, 0, 0),
  [1743] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [1745] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_stmt_subgraph, 8, 0, 0),
  [1747] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_stmt_subgraph, 4, 0, 0),
  [1749] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [1751] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [1753] = {.entry = {.count = 1, .reusable = false}}, SHIFT(440),
  [1755] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_diagram_state, 2, 0, 0),
  [1757] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [1759] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_diagram_class, 3, 0, 0),
  [1761] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [1763] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_gantt_task_text_repeat1, 2, 0, 0), SHIFT_REPEAT(529),
  [1766] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_gantt_task_text_repeat1, 2, 0, 0),
  [1768] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [1770] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [1772] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_diagram_mindmap, 4, 0, 0),
  [1774] = {.entry = {.count = 1, .reusable = true}}, SHIFT(722),
  [1776] = {.entry = {.count = 1, .reusable = true}}, SHIFT(355),
  [1778] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [1780] = {.entry = {.count = 1, .reusable = false}}, SHIFT(199),
  [1782] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_diagram_er, 2, 0, 0),
  [1784] = {.entry = {.count = 1, .reusable = true}}, SHIFT(360),
  [1786] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [1788] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__flow_stmt, 1, 0, 0),
  [1790] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_diagram_state_repeat1, 2, 0, 0),
  [1792] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_state_repeat1, 2, 0, 0), SHIFT_REPEAT(81),
  [1795] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_diagram_class_repeat1, 2, 0, 0),
  [1797] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_class_repeat1, 2, 0, 0), SHIFT_REPEAT(281),
  [1800] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_stmt_relation, 3, 0, 0),
  [1802] = {.entry = {.count = 1, .reusable = true}}, SHIFT(465),
  [1804] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_stmt_subgraph, 3, 0, 0),
  [1806] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [1808] = {.entry = {.count = 1, .reusable = true}}, SHIFT(390),
  [1810] = {.entry = {.count = 1, .reusable = true}}, SHIFT(523),
  [1812] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [1814] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [1816] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_diagram_mindmap_repeat1, 2, 0, 0),
  [1818] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_mindmap_repeat1, 2, 0, 0), SHIFT_REPEAT(798),
  [1821] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [1823] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [1825] = {.entry = {.count = 1, .reusable = true}}, SHIFT(373),
  [1827] = {.entry = {.count = 1, .reusable = false}}, SHIFT(177),
  [1829] = {.entry = {.count = 1, .reusable = false}}, SHIFT(529),
  [1831] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gantt_task_text, 1, 0, 0),
  [1833] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [1835] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [1837] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [1839] = {.entry = {.count = 1, .reusable = false}}, SHIFT(146),
  [1841] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [1843] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_diagram_mindmap, 3, 0, 0),
  [1845] = {.entry = {.count = 1, .reusable = true}}, SHIFT(731),
  [1847] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [1849] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [1851] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_sequence_stmt_par_repeat1, 2, 0, 0),
  [1853] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sequence_stmt_par_repeat1, 2, 0, 0), SHIFT_REPEAT(471),
  [1856] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [1858] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [1860] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_name_body_repeat1, 2, 0, 0), SHIFT_REPEAT(645),
  [1863] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_name_body_repeat1, 2, 0, 0),
  [1865] = {.entry = {.count = 1, .reusable = true}}, SHIFT(362),
  [1867] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_diagram_er_repeat1, 2, 0, 0),
  [1869] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_er_repeat1, 2, 0, 0), SHIFT_REPEAT(379),
  [1872] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [1874] = {.entry = {.count = 1, .reusable = false}}, SHIFT(284),
  [1876] = {.entry = {.count = 1, .reusable = false}}, SHIFT(333),
  [1878] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_stmt_class, 6, 0, 0),
  [1880] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_stmt_class, 8, 0, 12),
  [1882] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_stmt_class, 8, 0, 0),
  [1884] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_annotation_line, 3, 0, 13),
  [1886] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_stmt_class, 9, 0, 12),
  [1888] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_stmt_class, 10, 0, 12),
  [1890] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_er_role, 1, 0, 0),
  [1892] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_er_stmt_entity_relation, 5, 0, 0),
  [1894] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_er_attribute, 3, 0, 0),
  [1896] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mmap_class, 2, 0, 0),
  [1898] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mmap_node, 5, 0, 0),
  [1900] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_stmt_method, 3, 0, 0),
  [1902] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note_placement_left, 1, 0, 0),
  [1904] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_er_stmt_entity_block, 4, 0, 0),
  [1906] = {.entry = {.count = 1, .reusable = true}}, SHIFT(467),
  [1908] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note_placement_right, 1, 0, 0),
  [1910] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__er_stmt, 1, 0, 0),
  [1912] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_er_attribute, 4, 0, 0),
  [1914] = {.entry = {.count = 1, .reusable = true}}, SHIFT(442),
  [1916] = {.entry = {.count = 1, .reusable = true}}, SHIFT(321),
  [1918] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [1920] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [1922] = {.entry = {.count = 1, .reusable = true}}, SHIFT(671),
  [1924] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_er_attribute_key_type_pk, 1, 0, 0),
  [1926] = {.entry = {.count = 1, .reusable = true}}, SHIFT(592),
  [1928] = {.entry = {.count = 1, .reusable = true}}, SHIFT(641),
  [1930] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_state_note_placement, 1, 0, 0),
  [1932] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_er_attribute_key_type_fk, 1, 0, 0),
  [1934] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [1936] = {.entry = {.count = 1, .reusable = true}}, SHIFT(735),
  [1938] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_stmt_class, 5, 0, 0),
  [1940] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_link_arrow, 1, 0, 0),
  [1942] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_link_simplelink, 1, 0, 0),
  [1944] = {.entry = {.count = 1, .reusable = true}}, SHIFT(560),
  [1946] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_state_arrow, 1, 0, 0),
  [1948] = {.entry = {.count = 1, .reusable = true}}, SHIFT(602),
  [1950] = {.entry = {.count = 1, .reusable = true}}, SHIFT(647),
  [1952] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__er_attribute_key_type, 1, 0, 0),
  [1954] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_stmt_annotation, 4, 0, 13),
  [1956] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [1958] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_stmt_class, 7, 0, 12),
  [1960] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_diagram_mindmap, 5, 0, 0),
  [1962] = {.entry = {.count = 1, .reusable = true}}, SHIFT(658),
  [1964] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_label, 1, 0, 0),
  [1966] = {.entry = {.count = 1, .reusable = true}}, SHIFT(611),
  [1968] = {.entry = {.count = 1, .reusable = true}}, SHIFT(652),
  [1970] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [1972] = {.entry = {.count = 1, .reusable = true}}, SHIFT(682),
  [1974] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [1976] = {.entry = {.count = 1, .reusable = true}}, SHIFT(684),
  [1978] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__class_stmt, 1, 0, 0),
  [1980] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_stmt_class, 7, 0, 0),
  [1982] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [1984] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_stmt_relation, 7, 0, 0),
  [1986] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_er_attribute, 5, 0, 0),
  [1988] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [1990] = {.entry = {.count = 1, .reusable = true}}, SHIFT(695),
  [1992] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [1994] = {.entry = {.count = 1, .reusable = true}}, SHIFT(696),
  [1996] = {.entry = {.count = 1, .reusable = true}}, SHIFT(508),
  [1998] = {.entry = {.count = 1, .reusable = true}}, SHIFT(512),
  [2000] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [2002] = {.entry = {.count = 1, .reusable = true}}, SHIFT(664),
  [2004] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_er_stmt_entity_block, 5, 0, 0),
  [2006] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [2008] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [2010] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [2012] = {.entry = {.count = 1, .reusable = true}}, SHIFT(669),
  [2014] = {.entry = {.count = 1, .reusable = true}}, SHIFT(736),
  [2016] = {.entry = {.count = 1, .reusable = true}}, SHIFT(473),
  [2018] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [2020] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [2022] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [2024] = {.entry = {.count = 1, .reusable = true}}, SHIFT(474),
  [2026] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [2028] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [2030] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [2032] = {.entry = {.count = 1, .reusable = false}}, SHIFT(730),
  [2034] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [2036] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [2038] = {.entry = {.count = 1, .reusable = true}}, SHIFT(475),
  [2040] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2, 0, 0),
  [2042] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
  [2044] = {.entry = {.count = 1, .reusable = true}}, SHIFT(332),
  [2046] = {.entry = {.count = 1, .reusable = true}}, SHIFT(335),
  [2048] = {.entry = {.count = 1, .reusable = true}}, SHIFT(336),
  [2050] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [2052] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [2054] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_link_arrow_start, 1, 0, 0),
  [2056] = {.entry = {.count = 1, .reusable = true}}, SHIFT(896),
  [2058] = {.entry = {.count = 1, .reusable = true}}, SHIFT(776),
  [2060] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [2062] = {.entry = {.count = 1, .reusable = true}}, SHIFT(490),
  [2064] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [2066] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [2068] = {.entry = {.count = 1, .reusable = true}}, SHIFT(464),
  [2070] = {.entry = {.count = 1, .reusable = true}}, SHIFT(476),
  [2072] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [2074] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [2076] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [2078] = {.entry = {.count = 1, .reusable = true}}, SHIFT(784),
  [2080] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [2082] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [2084] = {.entry = {.count = 1, .reusable = true}}, SHIFT(421),
  [2086] = {.entry = {.count = 1, .reusable = true}}, SHIFT(491),
  [2088] = {.entry = {.count = 1, .reusable = true}}, SHIFT(554),
  [2090] = {.entry = {.count = 1, .reusable = true}}, SHIFT(555),
  [2092] = {.entry = {.count = 1, .reusable = true}}, SHIFT(556),
  [2094] = {.entry = {.count = 1, .reusable = true}}, SHIFT(557),
  [2096] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [2098] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [2100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [2102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [2104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(558),
  [2106] = {.entry = {.count = 1, .reusable = false}}, SHIFT(854),
  [2108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_link_arrowtext, 4, 0, 0),
  [2110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(537),
  [2112] = {.entry = {.count = 1, .reusable = false}}, SHIFT(295),
  [2114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [2116] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_note_placement, 1, 0, 0),
  [2118] = {.entry = {.count = 1, .reusable = false}}, SHIFT(748),
  [2120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [2122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(685),
  [2124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__flow_link, 1, 0, 0),
  [2126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [2128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [2130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(492),
  [2132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_er_attribute_type, 1, 0, 0),
  [2134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(567),
  [2136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(568),
  [2138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(569),
  [2140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(570),
  [2142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [2144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [2146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [2148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(436),
  [2150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(744),
  [2152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(918),
  [2154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(538),
  [2156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(535),
  [2158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_er_relation, 3, 0, 0),
  [2160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [2162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [2164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(477),
  [2166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [2168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(517),
  [2170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(720),
  [2172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(489),
  [2174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(578),
  [2176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(579),
  [2178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(580),
  [2180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(581),
  [2182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [2184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [2186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [2188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [2190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [2192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [2194] = {.entry = {.count = 1, .reusable = false}}, SHIFT(785),
  [2196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [2198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_er_attribute_comment, 1, 0, 0),
  [2200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(796),
  [2202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(667),
  [2204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_link_middletext, 3, 0, 0),
  [2206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [2208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(514),
  [2210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(799),
  [2212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [2214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [2216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(462),
  [2218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [2220] = {.entry = {.count = 1, .reusable = false}}, SHIFT(806),
  [2222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [2224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [2226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [2228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(593),
  [2230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(594),
  [2232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(595),
  [2234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(680),
  [2236] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_note_placement_left, 1, 0, 0),
  [2238] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [2240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(915),
  [2242] = {.entry = {.count = 1, .reusable = false}}, SHIFT(817),
  [2244] = {.entry = {.count = 1, .reusable = false}}, SHIFT(470),
  [2246] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_note_placement_right, 1, 0, 0),
  [2248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [2250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [2252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [2254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [2256] = {.entry = {.count = 1, .reusable = false}}, SHIFT(733),
  [2258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(603),
  [2260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(604),
  [2262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(605),
  [2264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(693),
  [2266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [2268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(433),
  [2270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(381),
  [2272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [2274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [2276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [2278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [2280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(610),
  [2282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [2284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [2286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(472),
  [2288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(612),
  [2290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(613),
  [2292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(614),
  [2294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [2296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [2298] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pie_label, 1, 0, 0),
  [2300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [2302] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_signal_plus_sign, 1, 0, 0),
  [2304] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_signal_minus_sign, 1, 0, 0),
  [2306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [2308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(639),
  [2310] = {.entry = {.count = 1, .reusable = false}}, SHIFT(803),
  [2312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(737),
  [2314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(328),
  [2316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(439),
  [2318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [2320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [2322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(539),
  [2324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(331),
  [2326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [2328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [2330] = {.entry = {.count = 1, .reusable = false}}, SHIFT(220),
  [2332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(326),
  [2334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [2336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(665),
  [2338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [2340] = {.entry = {.count = 1, .reusable = false}}, SHIFT(686),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_mermaid(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
