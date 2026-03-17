#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
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
#define STATE_COUNT 241
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 142
#define ALIAS_COUNT 1
#define TOKEN_COUNT 73
#define EXTERNAL_TOKEN_COUNT 2
#define FIELD_COUNT 1
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 3

enum {
  anon_sym_SEMI = 1,
  anon_sym_PERCENT_LBRACE = 2,
  anon_sym_PERCENT_RBRACE = 3,
  aux_sym_prologue_body_token1 = 4,
  anon_sym_PERCENT_PERCENT = 5,
  anon_sym_COLON = 6,
  anon_sym_PIPE = 7,
  anon_sym_LBRACK = 8,
  aux_sym__component_token1 = 9,
  anon_sym_RBRACK = 10,
  anon_sym_PERCENT = 11,
  anon_sym_type = 12,
  anon_sym_require = 13,
  anon_sym_token = 14,
  anon_sym_nterm = 15,
  aux_sym__decl_op_precedence_token1 = 16,
  anon_sym_initial_DASHdeclaration = 17,
  anon_sym_glr_DASHparser = 18,
  anon_sym_destructor = 19,
  anon_sym_LT = 20,
  anon_sym_STAR = 21,
  anon_sym_GT = 22,
  anon_sym_printer = 23,
  aux_sym__decl_expect_token1 = 24,
  aux_sym__decl_expect_token2 = 25,
  anon_sym_start = 26,
  anon_sym_define = 27,
  anon_sym_DOT = 28,
  anon_sym_LBRACE = 29,
  anon_sym_RBRACE = 30,
  anon_sym_code = 31,
  anon_sym_DASH = 32,
  anon_sym_union = 33,
  anon_sym_debug = 34,
  anon_sym_header = 35,
  anon_sym_language = 36,
  anon_sym_locations = 37,
  anon_sym_name_DASHprefix = 38,
  anon_sym_no_DASHlines = 39,
  anon_sym_output = 40,
  anon_sym_pure_DASHparser = 41,
  anon_sym_skeleton = 42,
  anon_sym_token_DASHtable = 43,
  anon_sym_verbose = 44,
  anon_sym_yacc = 45,
  anon_sym_initial_DASHaction = 46,
  anon_sym_parse_DASHparam = 47,
  anon_sym_param = 48,
  anon_sym_lex_DASHparam = 49,
  anon_sym_PERCENTmerge = 50,
  sym_directive_empty = 51,
  anon_sym__LPAREN = 52,
  anon_sym_RPAREN = 53,
  anon_sym_L_DQUOTE = 54,
  anon_sym_u_DQUOTE = 55,
  anon_sym_U_DQUOTE = 56,
  anon_sym_u8_DQUOTE = 57,
  anon_sym_DQUOTE = 58,
  aux_sym_string_literal_token1 = 59,
  sym_number_literal = 60,
  anon_sym_COLON_COLON = 61,
  aux_sym_grammar_rule_identifier_token1 = 62,
  anon_sym_SQUOTE = 63,
  anon_sym_BSLASH = 64,
  aux_sym_char_literal_token1 = 65,
  anon_sym_SLASH_SLASH = 66,
  aux_sym_comment_token1 = 67,
  anon_sym_SLASH_STAR = 68,
  aux_sym_comment_token2 = 69,
  anon_sym_SLASH = 70,
  sym_undelimited_code_block = 71,
  sym_error_sentinel = 72,
  sym_sections = 73,
  sym_prologue = 74,
  sym_prologue_body = 75,
  sym_grammar_rules_section = 76,
  sym_grammar_rules_body = 77,
  sym_grammar_rule = 78,
  sym__component = 79,
  sym_action = 80,
  sym_declaration = 81,
  sym__decl_type = 82,
  sym__decl_require = 83,
  sym__decl_token = 84,
  sym__decl_nterm = 85,
  sym__decl_op_precedence = 86,
  sym__decl_initial_declaration = 87,
  sym__decl_glr_parser = 88,
  sym__decl_destructor = 89,
  sym__decl_printer = 90,
  sym__decl_expect = 91,
  sym__decl_start = 92,
  sym__decl_define = 93,
  sym__decl_code = 94,
  sym__decl_union = 95,
  sym__decl_debug = 96,
  sym__decl_header = 97,
  sym_decl_language = 98,
  sym__decl_locations = 99,
  sym__decl_name_prefix = 100,
  sym__decl_no_lines = 101,
  sym__decl_output = 102,
  sym__decl_pure_parser = 103,
  sym__decl_skeleton = 104,
  sym__decl_token_table = 105,
  sym__decl_verbose = 106,
  sym__decl_yacc = 107,
  sym__decl_initial_action = 108,
  sym__decl_parse_param = 109,
  sym__decl_param = 110,
  sym__decl_lex_param = 111,
  sym_directive_merge = 112,
  sym_epilogue = 113,
  sym_string = 114,
  sym_string_literal = 115,
  sym_type_tag = 116,
  sym_type = 117,
  sym__type_atom = 118,
  sym_grammar_rule_identifier = 119,
  sym_code_block = 120,
  sym_char_literal = 121,
  sym_comment = 122,
  aux_sym_sections_repeat1 = 123,
  aux_sym_prologue_body_repeat1 = 124,
  aux_sym_grammar_rules_body_repeat1 = 125,
  aux_sym_grammar_rule_repeat1 = 126,
  aux_sym_grammar_rule_repeat2 = 127,
  aux_sym__decl_type_repeat1 = 128,
  aux_sym__decl_type_repeat2 = 129,
  aux_sym__decl_token_repeat1 = 130,
  aux_sym__decl_token_repeat2 = 131,
  aux_sym__decl_token_repeat3 = 132,
  aux_sym__decl_nterm_repeat1 = 133,
  aux_sym__decl_nterm_repeat2 = 134,
  aux_sym__decl_op_precedence_repeat1 = 135,
  aux_sym__decl_op_precedence_repeat2 = 136,
  aux_sym__decl_destructor_repeat1 = 137,
  aux_sym__decl_define_repeat1 = 138,
  aux_sym__decl_code_repeat1 = 139,
  aux_sym_string_literal_repeat1 = 140,
  aux_sym__type_atom_repeat1 = 141,
  alias_sym_grammar_rule_declaration = 142,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_SEMI] = ";",
  [anon_sym_PERCENT_LBRACE] = "%{",
  [anon_sym_PERCENT_RBRACE] = "%}",
  [aux_sym_prologue_body_token1] = "prologue_body_token1",
  [anon_sym_PERCENT_PERCENT] = "%%",
  [anon_sym_COLON] = ":",
  [anon_sym_PIPE] = "|",
  [anon_sym_LBRACK] = "[",
  [aux_sym__component_token1] = "_component_token1",
  [anon_sym_RBRACK] = "]",
  [anon_sym_PERCENT] = "declaration_name",
  [anon_sym_type] = "declaration_name",
  [anon_sym_require] = "declaration_name",
  [anon_sym_token] = "declaration_name",
  [anon_sym_nterm] = "declaration_name",
  [aux_sym__decl_op_precedence_token1] = "declaration_name",
  [anon_sym_initial_DASHdeclaration] = "declaration_name",
  [anon_sym_glr_DASHparser] = "declaration_name",
  [anon_sym_destructor] = "declaration_name",
  [anon_sym_LT] = "<",
  [anon_sym_STAR] = "*",
  [anon_sym_GT] = ">",
  [anon_sym_printer] = "declaration_name",
  [aux_sym__decl_expect_token1] = "declaration_name",
  [aux_sym__decl_expect_token2] = "_decl_expect_token2",
  [anon_sym_start] = "declaration_name",
  [anon_sym_define] = "declaration_name",
  [anon_sym_DOT] = ".",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_code] = "declaration_name",
  [anon_sym_DASH] = "-",
  [anon_sym_union] = "declaration_name",
  [anon_sym_debug] = "declaration_name",
  [anon_sym_header] = "declaration_name",
  [anon_sym_language] = "declaration_name",
  [anon_sym_locations] = "declaration_name",
  [anon_sym_name_DASHprefix] = "declaration_name",
  [anon_sym_no_DASHlines] = "declaration_name",
  [anon_sym_output] = "declaration_name",
  [anon_sym_pure_DASHparser] = "declaration_name",
  [anon_sym_skeleton] = "declaration_name",
  [anon_sym_token_DASHtable] = "declaration_name",
  [anon_sym_verbose] = "declaration_name",
  [anon_sym_yacc] = "declaration_name",
  [anon_sym_initial_DASHaction] = "declaration_name",
  [anon_sym_parse_DASHparam] = "declaration_name",
  [anon_sym_param] = "declaration_name",
  [anon_sym_lex_DASHparam] = "declaration_name",
  [anon_sym_PERCENTmerge] = "%merge",
  [sym_directive_empty] = "directive",
  [anon_sym__LPAREN] = "_(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_L_DQUOTE] = "L\"",
  [anon_sym_u_DQUOTE] = "u\"",
  [anon_sym_U_DQUOTE] = "U\"",
  [anon_sym_u8_DQUOTE] = "u8\"",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_string_literal_token1] = "string_content",
  [sym_number_literal] = "number_literal",
  [anon_sym_COLON_COLON] = "::",
  [aux_sym_grammar_rule_identifier_token1] = "grammar_rule_identifier_token1",
  [anon_sym_SQUOTE] = "'",
  [anon_sym_BSLASH] = "\\",
  [aux_sym_char_literal_token1] = "char_literal_token1",
  [anon_sym_SLASH_SLASH] = "//",
  [aux_sym_comment_token1] = "comment_token1",
  [anon_sym_SLASH_STAR] = "/*",
  [aux_sym_comment_token2] = "comment_token2",
  [anon_sym_SLASH] = "/",
  [sym_undelimited_code_block] = "embedded_code",
  [sym_error_sentinel] = "error_sentinel",
  [sym_sections] = "sections",
  [sym_prologue] = "prologue",
  [sym_prologue_body] = "embedded_code",
  [sym_grammar_rules_section] = "grammar_rules_section",
  [sym_grammar_rules_body] = "grammar_rules_body",
  [sym_grammar_rule] = "grammar_rule",
  [sym__component] = "_component",
  [sym_action] = "action",
  [sym_declaration] = "declaration",
  [sym__decl_type] = "_decl_type",
  [sym__decl_require] = "_decl_require",
  [sym__decl_token] = "_decl_token",
  [sym__decl_nterm] = "_decl_nterm",
  [sym__decl_op_precedence] = "_decl_op_precedence",
  [sym__decl_initial_declaration] = "_decl_initial_declaration",
  [sym__decl_glr_parser] = "_decl_glr_parser",
  [sym__decl_destructor] = "_decl_destructor",
  [sym__decl_printer] = "_decl_printer",
  [sym__decl_expect] = "_decl_expect",
  [sym__decl_start] = "_decl_start",
  [sym__decl_define] = "_decl_define",
  [sym__decl_code] = "_decl_code",
  [sym__decl_union] = "_decl_union",
  [sym__decl_debug] = "_decl_debug",
  [sym__decl_header] = "_decl_header",
  [sym_decl_language] = "decl_language",
  [sym__decl_locations] = "_decl_locations",
  [sym__decl_name_prefix] = "_decl_name_prefix",
  [sym__decl_no_lines] = "_decl_no_lines",
  [sym__decl_output] = "_decl_output",
  [sym__decl_pure_parser] = "_decl_pure_parser",
  [sym__decl_skeleton] = "_decl_skeleton",
  [sym__decl_token_table] = "_decl_token_table",
  [sym__decl_verbose] = "_decl_verbose",
  [sym__decl_yacc] = "_decl_yacc",
  [sym__decl_initial_action] = "_decl_initial_action",
  [sym__decl_parse_param] = "_decl_parse_param",
  [sym__decl_param] = "_decl_param",
  [sym__decl_lex_param] = "_decl_lex_param",
  [sym_directive_merge] = "directive",
  [sym_epilogue] = "epilogue",
  [sym_string] = "string",
  [sym_string_literal] = "string_literal",
  [sym_type_tag] = "type_tag",
  [sym_type] = "type",
  [sym__type_atom] = "_type_atom",
  [sym_grammar_rule_identifier] = "grammar_rule_identifier",
  [sym_code_block] = "code_block",
  [sym_char_literal] = "char_literal",
  [sym_comment] = "comment",
  [aux_sym_sections_repeat1] = "sections_repeat1",
  [aux_sym_prologue_body_repeat1] = "prologue_body_repeat1",
  [aux_sym_grammar_rules_body_repeat1] = "grammar_rules_body_repeat1",
  [aux_sym_grammar_rule_repeat1] = "grammar_rule_repeat1",
  [aux_sym_grammar_rule_repeat2] = "grammar_rule_repeat2",
  [aux_sym__decl_type_repeat1] = "_decl_type_repeat1",
  [aux_sym__decl_type_repeat2] = "_decl_type_repeat2",
  [aux_sym__decl_token_repeat1] = "_decl_token_repeat1",
  [aux_sym__decl_token_repeat2] = "_decl_token_repeat2",
  [aux_sym__decl_token_repeat3] = "_decl_token_repeat3",
  [aux_sym__decl_nterm_repeat1] = "_decl_nterm_repeat1",
  [aux_sym__decl_nterm_repeat2] = "_decl_nterm_repeat2",
  [aux_sym__decl_op_precedence_repeat1] = "_decl_op_precedence_repeat1",
  [aux_sym__decl_op_precedence_repeat2] = "_decl_op_precedence_repeat2",
  [aux_sym__decl_destructor_repeat1] = "_decl_destructor_repeat1",
  [aux_sym__decl_define_repeat1] = "_decl_define_repeat1",
  [aux_sym__decl_code_repeat1] = "_decl_code_repeat1",
  [aux_sym_string_literal_repeat1] = "string_literal_repeat1",
  [aux_sym__type_atom_repeat1] = "_type_atom_repeat1",
  [alias_sym_grammar_rule_declaration] = "grammar_rule_declaration",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_PERCENT_LBRACE] = anon_sym_PERCENT_LBRACE,
  [anon_sym_PERCENT_RBRACE] = anon_sym_PERCENT_RBRACE,
  [aux_sym_prologue_body_token1] = aux_sym_prologue_body_token1,
  [anon_sym_PERCENT_PERCENT] = anon_sym_PERCENT_PERCENT,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [aux_sym__component_token1] = aux_sym__component_token1,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_PERCENT] = anon_sym_PERCENT,
  [anon_sym_type] = anon_sym_PERCENT,
  [anon_sym_require] = anon_sym_PERCENT,
  [anon_sym_token] = anon_sym_PERCENT,
  [anon_sym_nterm] = anon_sym_PERCENT,
  [aux_sym__decl_op_precedence_token1] = anon_sym_PERCENT,
  [anon_sym_initial_DASHdeclaration] = anon_sym_PERCENT,
  [anon_sym_glr_DASHparser] = anon_sym_PERCENT,
  [anon_sym_destructor] = anon_sym_PERCENT,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_printer] = anon_sym_PERCENT,
  [aux_sym__decl_expect_token1] = anon_sym_PERCENT,
  [aux_sym__decl_expect_token2] = aux_sym__decl_expect_token2,
  [anon_sym_start] = anon_sym_PERCENT,
  [anon_sym_define] = anon_sym_PERCENT,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_code] = anon_sym_PERCENT,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_union] = anon_sym_PERCENT,
  [anon_sym_debug] = anon_sym_PERCENT,
  [anon_sym_header] = anon_sym_PERCENT,
  [anon_sym_language] = anon_sym_PERCENT,
  [anon_sym_locations] = anon_sym_PERCENT,
  [anon_sym_name_DASHprefix] = anon_sym_PERCENT,
  [anon_sym_no_DASHlines] = anon_sym_PERCENT,
  [anon_sym_output] = anon_sym_PERCENT,
  [anon_sym_pure_DASHparser] = anon_sym_PERCENT,
  [anon_sym_skeleton] = anon_sym_PERCENT,
  [anon_sym_token_DASHtable] = anon_sym_PERCENT,
  [anon_sym_verbose] = anon_sym_PERCENT,
  [anon_sym_yacc] = anon_sym_PERCENT,
  [anon_sym_initial_DASHaction] = anon_sym_PERCENT,
  [anon_sym_parse_DASHparam] = anon_sym_PERCENT,
  [anon_sym_param] = anon_sym_PERCENT,
  [anon_sym_lex_DASHparam] = anon_sym_PERCENT,
  [anon_sym_PERCENTmerge] = anon_sym_PERCENTmerge,
  [sym_directive_empty] = sym_directive_empty,
  [anon_sym__LPAREN] = anon_sym__LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_L_DQUOTE] = anon_sym_L_DQUOTE,
  [anon_sym_u_DQUOTE] = anon_sym_u_DQUOTE,
  [anon_sym_U_DQUOTE] = anon_sym_U_DQUOTE,
  [anon_sym_u8_DQUOTE] = anon_sym_u8_DQUOTE,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_string_literal_token1] = aux_sym_string_literal_token1,
  [sym_number_literal] = sym_number_literal,
  [anon_sym_COLON_COLON] = anon_sym_COLON_COLON,
  [aux_sym_grammar_rule_identifier_token1] = aux_sym_grammar_rule_identifier_token1,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [anon_sym_BSLASH] = anon_sym_BSLASH,
  [aux_sym_char_literal_token1] = aux_sym_char_literal_token1,
  [anon_sym_SLASH_SLASH] = anon_sym_SLASH_SLASH,
  [aux_sym_comment_token1] = aux_sym_comment_token1,
  [anon_sym_SLASH_STAR] = anon_sym_SLASH_STAR,
  [aux_sym_comment_token2] = aux_sym_comment_token2,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [sym_undelimited_code_block] = sym_undelimited_code_block,
  [sym_error_sentinel] = sym_error_sentinel,
  [sym_sections] = sym_sections,
  [sym_prologue] = sym_prologue,
  [sym_prologue_body] = sym_undelimited_code_block,
  [sym_grammar_rules_section] = sym_grammar_rules_section,
  [sym_grammar_rules_body] = sym_grammar_rules_body,
  [sym_grammar_rule] = sym_grammar_rule,
  [sym__component] = sym__component,
  [sym_action] = sym_action,
  [sym_declaration] = sym_declaration,
  [sym__decl_type] = sym__decl_type,
  [sym__decl_require] = sym__decl_require,
  [sym__decl_token] = sym__decl_token,
  [sym__decl_nterm] = sym__decl_nterm,
  [sym__decl_op_precedence] = sym__decl_op_precedence,
  [sym__decl_initial_declaration] = sym__decl_initial_declaration,
  [sym__decl_glr_parser] = sym__decl_glr_parser,
  [sym__decl_destructor] = sym__decl_destructor,
  [sym__decl_printer] = sym__decl_printer,
  [sym__decl_expect] = sym__decl_expect,
  [sym__decl_start] = sym__decl_start,
  [sym__decl_define] = sym__decl_define,
  [sym__decl_code] = sym__decl_code,
  [sym__decl_union] = sym__decl_union,
  [sym__decl_debug] = sym__decl_debug,
  [sym__decl_header] = sym__decl_header,
  [sym_decl_language] = sym_decl_language,
  [sym__decl_locations] = sym__decl_locations,
  [sym__decl_name_prefix] = sym__decl_name_prefix,
  [sym__decl_no_lines] = sym__decl_no_lines,
  [sym__decl_output] = sym__decl_output,
  [sym__decl_pure_parser] = sym__decl_pure_parser,
  [sym__decl_skeleton] = sym__decl_skeleton,
  [sym__decl_token_table] = sym__decl_token_table,
  [sym__decl_verbose] = sym__decl_verbose,
  [sym__decl_yacc] = sym__decl_yacc,
  [sym__decl_initial_action] = sym__decl_initial_action,
  [sym__decl_parse_param] = sym__decl_parse_param,
  [sym__decl_param] = sym__decl_param,
  [sym__decl_lex_param] = sym__decl_lex_param,
  [sym_directive_merge] = sym_directive_empty,
  [sym_epilogue] = sym_epilogue,
  [sym_string] = sym_string,
  [sym_string_literal] = sym_string_literal,
  [sym_type_tag] = sym_type_tag,
  [sym_type] = sym_type,
  [sym__type_atom] = sym__type_atom,
  [sym_grammar_rule_identifier] = sym_grammar_rule_identifier,
  [sym_code_block] = sym_code_block,
  [sym_char_literal] = sym_char_literal,
  [sym_comment] = sym_comment,
  [aux_sym_sections_repeat1] = aux_sym_sections_repeat1,
  [aux_sym_prologue_body_repeat1] = aux_sym_prologue_body_repeat1,
  [aux_sym_grammar_rules_body_repeat1] = aux_sym_grammar_rules_body_repeat1,
  [aux_sym_grammar_rule_repeat1] = aux_sym_grammar_rule_repeat1,
  [aux_sym_grammar_rule_repeat2] = aux_sym_grammar_rule_repeat2,
  [aux_sym__decl_type_repeat1] = aux_sym__decl_type_repeat1,
  [aux_sym__decl_type_repeat2] = aux_sym__decl_type_repeat2,
  [aux_sym__decl_token_repeat1] = aux_sym__decl_token_repeat1,
  [aux_sym__decl_token_repeat2] = aux_sym__decl_token_repeat2,
  [aux_sym__decl_token_repeat3] = aux_sym__decl_token_repeat3,
  [aux_sym__decl_nterm_repeat1] = aux_sym__decl_nterm_repeat1,
  [aux_sym__decl_nterm_repeat2] = aux_sym__decl_nterm_repeat2,
  [aux_sym__decl_op_precedence_repeat1] = aux_sym__decl_op_precedence_repeat1,
  [aux_sym__decl_op_precedence_repeat2] = aux_sym__decl_op_precedence_repeat2,
  [aux_sym__decl_destructor_repeat1] = aux_sym__decl_destructor_repeat1,
  [aux_sym__decl_define_repeat1] = aux_sym__decl_define_repeat1,
  [aux_sym__decl_code_repeat1] = aux_sym__decl_code_repeat1,
  [aux_sym_string_literal_repeat1] = aux_sym_string_literal_repeat1,
  [aux_sym__type_atom_repeat1] = aux_sym__type_atom_repeat1,
  [alias_sym_grammar_rule_declaration] = alias_sym_grammar_rule_declaration,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENT_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENT_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_prologue_body_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_PERCENT_PERCENT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
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
  [aux_sym__component_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENT] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_type] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_require] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_token] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_nterm] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__decl_op_precedence_token1] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_initial_DASHdeclaration] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_glr_DASHparser] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_destructor] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_printer] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__decl_expect_token1] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__decl_expect_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_start] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_define] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DOT] = {
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
  [anon_sym_code] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_union] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_debug] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_header] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_language] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_locations] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_name_DASHprefix] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_no_DASHlines] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_output] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_pure_DASHparser] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_skeleton] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_token_DASHtable] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_verbose] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_yacc] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_initial_DASHaction] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_parse_DASHparam] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_param] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_lex_DASHparam] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_PERCENTmerge] = {
    .visible = true,
    .named = false,
  },
  [sym_directive_empty] = {
    .visible = true,
    .named = true,
  },
  [anon_sym__LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_L_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_u_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_U_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_u8_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_literal_token1] = {
    .visible = true,
    .named = true,
  },
  [sym_number_literal] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_COLON_COLON] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_grammar_rule_identifier_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASH] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_char_literal_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_SLASH_SLASH] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_comment_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_SLASH_STAR] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_comment_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [sym_undelimited_code_block] = {
    .visible = true,
    .named = true,
  },
  [sym_error_sentinel] = {
    .visible = true,
    .named = true,
  },
  [sym_sections] = {
    .visible = true,
    .named = true,
  },
  [sym_prologue] = {
    .visible = true,
    .named = true,
  },
  [sym_prologue_body] = {
    .visible = true,
    .named = true,
  },
  [sym_grammar_rules_section] = {
    .visible = true,
    .named = true,
  },
  [sym_grammar_rules_body] = {
    .visible = true,
    .named = true,
  },
  [sym_grammar_rule] = {
    .visible = true,
    .named = true,
  },
  [sym__component] = {
    .visible = false,
    .named = true,
  },
  [sym_action] = {
    .visible = true,
    .named = true,
  },
  [sym_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym__decl_type] = {
    .visible = false,
    .named = true,
  },
  [sym__decl_require] = {
    .visible = false,
    .named = true,
  },
  [sym__decl_token] = {
    .visible = false,
    .named = true,
  },
  [sym__decl_nterm] = {
    .visible = false,
    .named = true,
  },
  [sym__decl_op_precedence] = {
    .visible = false,
    .named = true,
  },
  [sym__decl_initial_declaration] = {
    .visible = false,
    .named = true,
  },
  [sym__decl_glr_parser] = {
    .visible = false,
    .named = true,
  },
  [sym__decl_destructor] = {
    .visible = false,
    .named = true,
  },
  [sym__decl_printer] = {
    .visible = false,
    .named = true,
  },
  [sym__decl_expect] = {
    .visible = false,
    .named = true,
  },
  [sym__decl_start] = {
    .visible = false,
    .named = true,
  },
  [sym__decl_define] = {
    .visible = false,
    .named = true,
  },
  [sym__decl_code] = {
    .visible = false,
    .named = true,
  },
  [sym__decl_union] = {
    .visible = false,
    .named = true,
  },
  [sym__decl_debug] = {
    .visible = false,
    .named = true,
  },
  [sym__decl_header] = {
    .visible = false,
    .named = true,
  },
  [sym_decl_language] = {
    .visible = true,
    .named = true,
  },
  [sym__decl_locations] = {
    .visible = false,
    .named = true,
  },
  [sym__decl_name_prefix] = {
    .visible = false,
    .named = true,
  },
  [sym__decl_no_lines] = {
    .visible = false,
    .named = true,
  },
  [sym__decl_output] = {
    .visible = false,
    .named = true,
  },
  [sym__decl_pure_parser] = {
    .visible = false,
    .named = true,
  },
  [sym__decl_skeleton] = {
    .visible = false,
    .named = true,
  },
  [sym__decl_token_table] = {
    .visible = false,
    .named = true,
  },
  [sym__decl_verbose] = {
    .visible = false,
    .named = true,
  },
  [sym__decl_yacc] = {
    .visible = false,
    .named = true,
  },
  [sym__decl_initial_action] = {
    .visible = false,
    .named = true,
  },
  [sym__decl_parse_param] = {
    .visible = false,
    .named = true,
  },
  [sym__decl_param] = {
    .visible = false,
    .named = true,
  },
  [sym__decl_lex_param] = {
    .visible = false,
    .named = true,
  },
  [sym_directive_merge] = {
    .visible = true,
    .named = true,
  },
  [sym_epilogue] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_string_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_type_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_type] = {
    .visible = true,
    .named = true,
  },
  [sym__type_atom] = {
    .visible = false,
    .named = true,
  },
  [sym_grammar_rule_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_code_block] = {
    .visible = true,
    .named = true,
  },
  [sym_char_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_sections_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_prologue_body_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_grammar_rules_body_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_grammar_rule_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_grammar_rule_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__decl_type_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__decl_type_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__decl_token_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__decl_token_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__decl_token_repeat3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__decl_nterm_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__decl_nterm_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__decl_op_precedence_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__decl_op_precedence_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__decl_destructor_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__decl_define_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__decl_code_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_literal_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__type_atom_repeat1] = {
    .visible = false,
    .named = false,
  },
  [alias_sym_grammar_rule_declaration] = {
    .visible = true,
    .named = true,
  },
};

enum {
  field_language = 1,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_language] = "language",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_language, 2},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [2] = {
    [0] = alias_sym_grammar_rule_declaration,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  sym_grammar_rule_identifier, 2,
    sym_grammar_rule_identifier,
    alias_sym_grammar_rule_declaration,
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 36,
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
  [90] = 12,
  [91] = 91,
  [92] = 92,
  [93] = 79,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 10,
  [99] = 13,
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
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 126,
  [127] = 127,
  [128] = 128,
  [129] = 129,
  [130] = 130,
  [131] = 131,
  [132] = 132,
  [133] = 133,
  [134] = 134,
  [135] = 135,
  [136] = 136,
  [137] = 137,
  [138] = 138,
  [139] = 139,
  [140] = 140,
  [141] = 141,
  [142] = 142,
  [143] = 143,
  [144] = 144,
  [145] = 145,
  [146] = 146,
  [147] = 147,
  [148] = 148,
  [149] = 149,
  [150] = 150,
  [151] = 151,
  [152] = 152,
  [153] = 153,
  [154] = 154,
  [155] = 155,
  [156] = 156,
  [157] = 156,
  [158] = 158,
  [159] = 159,
  [160] = 158,
  [161] = 161,
  [162] = 162,
  [163] = 163,
  [164] = 164,
  [165] = 165,
  [166] = 166,
  [167] = 167,
  [168] = 168,
  [169] = 169,
  [170] = 170,
  [171] = 171,
  [172] = 172,
  [173] = 173,
  [174] = 174,
  [175] = 175,
  [176] = 176,
  [177] = 177,
  [178] = 178,
  [179] = 179,
  [180] = 180,
  [181] = 181,
  [182] = 163,
  [183] = 183,
  [184] = 184,
  [185] = 185,
  [186] = 186,
  [187] = 187,
  [188] = 188,
  [189] = 189,
  [190] = 190,
  [191] = 191,
  [192] = 192,
  [193] = 193,
  [194] = 194,
  [195] = 195,
  [196] = 196,
  [197] = 197,
  [198] = 198,
  [199] = 199,
  [200] = 200,
  [201] = 201,
  [202] = 202,
  [203] = 203,
  [204] = 204,
  [205] = 205,
  [206] = 206,
  [207] = 207,
  [208] = 208,
  [209] = 209,
  [210] = 210,
  [211] = 211,
  [212] = 212,
  [213] = 213,
  [214] = 214,
  [215] = 215,
  [216] = 215,
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
  [234] = 203,
  [235] = 235,
  [236] = 212,
  [237] = 237,
  [238] = 237,
  [239] = 239,
  [240] = 240,
};

static inline bool aux_sym__component_token1_character_set_1(int32_t c) {
  return (c < 43514
    ? (c < 4193
      ? (c < 2707
        ? (c < 1994
          ? (c < 931
            ? (c < 748
              ? (c < 192
                ? (c < 170
                  ? (c < 'a'
                    ? (c >= 'A' && c <= 'Z')
                    : c <= 'z')
                  : (c <= 170 || (c < 186
                    ? c == 181
                    : c <= 186)))
                : (c <= 214 || (c < 710
                  ? (c < 248
                    ? (c >= 216 && c <= 246)
                    : c <= 705)
                  : (c <= 721 || (c >= 736 && c <= 740)))))
              : (c <= 748 || (c < 895
                ? (c < 886
                  ? (c < 880
                    ? c == 750
                    : c <= 884)
                  : (c <= 887 || (c >= 891 && c <= 893)))
                : (c <= 895 || (c < 908
                  ? (c < 904
                    ? c == 902
                    : c <= 906)
                  : (c <= 908 || (c >= 910 && c <= 929)))))))
            : (c <= 1013 || (c < 1649
              ? (c < 1376
                ? (c < 1329
                  ? (c < 1162
                    ? (c >= 1015 && c <= 1153)
                    : c <= 1327)
                  : (c <= 1366 || c == 1369))
                : (c <= 1416 || (c < 1568
                  ? (c < 1519
                    ? (c >= 1488 && c <= 1514)
                    : c <= 1522)
                  : (c <= 1610 || (c >= 1646 && c <= 1647)))))
              : (c <= 1747 || (c < 1791
                ? (c < 1774
                  ? (c < 1765
                    ? c == 1749
                    : c <= 1766)
                  : (c <= 1775 || (c >= 1786 && c <= 1788)))
                : (c <= 1791 || (c < 1869
                  ? (c < 1810
                    ? c == 1808
                    : c <= 1839)
                  : (c <= 1957 || c == 1969))))))))
          : (c <= 2026 || (c < 2482
            ? (c < 2208
              ? (c < 2088
                ? (c < 2048
                  ? (c < 2042
                    ? (c >= 2036 && c <= 2037)
                    : c <= 2042)
                  : (c <= 2069 || (c < 2084
                    ? c == 2074
                    : c <= 2084)))
                : (c <= 2088 || (c < 2160
                  ? (c < 2144
                    ? (c >= 2112 && c <= 2136)
                    : c <= 2154)
                  : (c <= 2183 || (c >= 2185 && c <= 2190)))))
              : (c <= 2249 || (c < 2417
                ? (c < 2384
                  ? (c < 2365
                    ? (c >= 2308 && c <= 2361)
                    : c <= 2365)
                  : (c <= 2384 || (c >= 2392 && c <= 2401)))
                : (c <= 2432 || (c < 2451
                  ? (c < 2447
                    ? (c >= 2437 && c <= 2444)
                    : c <= 2448)
                  : (c <= 2472 || (c >= 2474 && c <= 2480)))))))
            : (c <= 2482 || (c < 2579
              ? (c < 2527
                ? (c < 2510
                  ? (c < 2493
                    ? (c >= 2486 && c <= 2489)
                    : c <= 2493)
                  : (c <= 2510 || (c >= 2524 && c <= 2525)))
                : (c <= 2529 || (c < 2565
                  ? (c < 2556
                    ? (c >= 2544 && c <= 2545)
                    : c <= 2556)
                  : (c <= 2570 || (c >= 2575 && c <= 2576)))))
              : (c <= 2600 || (c < 2649
                ? (c < 2613
                  ? (c < 2610
                    ? (c >= 2602 && c <= 2608)
                    : c <= 2611)
                  : (c <= 2614 || (c >= 2616 && c <= 2617)))
                : (c <= 2652 || (c < 2693
                  ? (c < 2674
                    ? c == 2654
                    : c <= 2676)
                  : (c <= 2701 || (c >= 2703 && c <= 2705)))))))))))
        : (c <= 2728 || (c < 3242
          ? (c < 2962
            ? (c < 2858
              ? (c < 2784
                ? (c < 2741
                  ? (c < 2738
                    ? (c >= 2730 && c <= 2736)
                    : c <= 2739)
                  : (c <= 2745 || (c < 2768
                    ? c == 2749
                    : c <= 2768)))
                : (c <= 2785 || (c < 2831
                  ? (c < 2821
                    ? c == 2809
                    : c <= 2828)
                  : (c <= 2832 || (c >= 2835 && c <= 2856)))))
              : (c <= 2864 || (c < 2911
                ? (c < 2877
                  ? (c < 2869
                    ? (c >= 2866 && c <= 2867)
                    : c <= 2873)
                  : (c <= 2877 || (c >= 2908 && c <= 2909)))
                : (c <= 2913 || (c < 2949
                  ? (c < 2947
                    ? c == 2929
                    : c <= 2947)
                  : (c <= 2954 || (c >= 2958 && c <= 2960)))))))
            : (c <= 2965 || (c < 3090
              ? (c < 2984
                ? (c < 2974
                  ? (c < 2972
                    ? (c >= 2969 && c <= 2970)
                    : c <= 2972)
                  : (c <= 2975 || (c >= 2979 && c <= 2980)))
                : (c <= 2986 || (c < 3077
                  ? (c < 3024
                    ? (c >= 2990 && c <= 3001)
                    : c <= 3024)
                  : (c <= 3084 || (c >= 3086 && c <= 3088)))))
              : (c <= 3112 || (c < 3168
                ? (c < 3160
                  ? (c < 3133
                    ? (c >= 3114 && c <= 3129)
                    : c <= 3133)
                  : (c <= 3162 || c == 3165))
                : (c <= 3169 || (c < 3214
                  ? (c < 3205
                    ? c == 3200
                    : c <= 3212)
                  : (c <= 3216 || (c >= 3218 && c <= 3240)))))))))
          : (c <= 3251 || (c < 3648
            ? (c < 3412
              ? (c < 3332
                ? (c < 3293
                  ? (c < 3261
                    ? (c >= 3253 && c <= 3257)
                    : c <= 3261)
                  : (c <= 3294 || (c < 3313
                    ? (c >= 3296 && c <= 3297)
                    : c <= 3314)))
                : (c <= 3340 || (c < 3389
                  ? (c < 3346
                    ? (c >= 3342 && c <= 3344)
                    : c <= 3386)
                  : (c <= 3389 || c == 3406))))
              : (c <= 3414 || (c < 3507
                ? (c < 3461
                  ? (c < 3450
                    ? (c >= 3423 && c <= 3425)
                    : c <= 3455)
                  : (c <= 3478 || (c >= 3482 && c <= 3505)))
                : (c <= 3515 || (c < 3585
                  ? (c < 3520
                    ? c == 3517
                    : c <= 3526)
                  : (c <= 3632 || c == 3634))))))
            : (c <= 3654 || (c < 3782
              ? (c < 3749
                ? (c < 3718
                  ? (c < 3716
                    ? (c >= 3713 && c <= 3714)
                    : c <= 3716)
                  : (c <= 3722 || (c >= 3724 && c <= 3747)))
                : (c <= 3749 || (c < 3773
                  ? (c < 3762
                    ? (c >= 3751 && c <= 3760)
                    : c <= 3762)
                  : (c <= 3773 || (c >= 3776 && c <= 3780)))))
              : (c <= 3782 || (c < 3976
                ? (c < 3904
                  ? (c < 3840
                    ? (c >= 3804 && c <= 3807)
                    : c <= 3840)
                  : (c <= 3911 || (c >= 3913 && c <= 3948)))
                : (c <= 3980 || (c < 4176
                  ? (c < 4159
                    ? (c >= 4096 && c <= 4138)
                    : c <= 4159)
                  : (c <= 4181 || (c >= 4186 && c <= 4189)))))))))))))
      : (c <= 4193 || (c < 8134
        ? (c < 6176
          ? (c < 4808
            ? (c < 4688
              ? (c < 4295
                ? (c < 4213
                  ? (c < 4206
                    ? (c >= 4197 && c <= 4198)
                    : c <= 4208)
                  : (c <= 4225 || (c < 4256
                    ? c == 4238
                    : c <= 4293)))
                : (c <= 4295 || (c < 4348
                  ? (c < 4304
                    ? c == 4301
                    : c <= 4346)
                  : (c <= 4680 || (c >= 4682 && c <= 4685)))))
              : (c <= 4694 || (c < 4752
                ? (c < 4704
                  ? (c < 4698
                    ? c == 4696
                    : c <= 4701)
                  : (c <= 4744 || (c >= 4746 && c <= 4749)))
                : (c <= 4784 || (c < 4800
                  ? (c < 4792
                    ? (c >= 4786 && c <= 4789)
                    : c <= 4798)
                  : (c <= 4800 || (c >= 4802 && c <= 4805)))))))
            : (c <= 4822 || (c < 5792
              ? (c < 5024
                ? (c < 4888
                  ? (c < 4882
                    ? (c >= 4824 && c <= 4880)
                    : c <= 4885)
                  : (c <= 4954 || (c >= 4992 && c <= 5007)))
                : (c <= 5109 || (c < 5743
                  ? (c < 5121
                    ? (c >= 5112 && c <= 5117)
                    : c <= 5740)
                  : (c <= 5759 || (c >= 5761 && c <= 5786)))))
              : (c <= 5866 || (c < 5984
                ? (c < 5919
                  ? (c < 5888
                    ? (c >= 5870 && c <= 5880)
                    : c <= 5905)
                  : (c <= 5937 || (c >= 5952 && c <= 5969)))
                : (c <= 5996 || (c < 6103
                  ? (c < 6016
                    ? (c >= 5998 && c <= 6000)
                    : c <= 6067)
                  : (c <= 6103 || c == 6108))))))))
          : (c <= 6264 || (c < 7312
            ? (c < 6823
              ? (c < 6512
                ? (c < 6320
                  ? (c < 6314
                    ? (c >= 6272 && c <= 6312)
                    : c <= 6314)
                  : (c <= 6389 || (c < 6480
                    ? (c >= 6400 && c <= 6430)
                    : c <= 6509)))
                : (c <= 6516 || (c < 6656
                  ? (c < 6576
                    ? (c >= 6528 && c <= 6571)
                    : c <= 6601)
                  : (c <= 6678 || (c >= 6688 && c <= 6740)))))
              : (c <= 6823 || (c < 7098
                ? (c < 7043
                  ? (c < 6981
                    ? (c >= 6917 && c <= 6963)
                    : c <= 6988)
                  : (c <= 7072 || (c >= 7086 && c <= 7087)))
                : (c <= 7141 || (c < 7258
                  ? (c < 7245
                    ? (c >= 7168 && c <= 7203)
                    : c <= 7247)
                  : (c <= 7293 || (c >= 7296 && c <= 7304)))))))
            : (c <= 7354 || (c < 8008
              ? (c < 7418
                ? (c < 7406
                  ? (c < 7401
                    ? (c >= 7357 && c <= 7359)
                    : c <= 7404)
                  : (c <= 7411 || (c >= 7413 && c <= 7414)))
                : (c <= 7418 || (c < 7960
                  ? (c < 7680
                    ? (c >= 7424 && c <= 7615)
                    : c <= 7957)
                  : (c <= 7965 || (c >= 7968 && c <= 8005)))))
              : (c <= 8013 || (c < 8031
                ? (c < 8027
                  ? (c < 8025
                    ? (c >= 8016 && c <= 8023)
                    : c <= 8025)
                  : (c <= 8027 || c == 8029))
                : (c <= 8061 || (c < 8126
                  ? (c < 8118
                    ? (c >= 8064 && c <= 8116)
                    : c <= 8124)
                  : (c <= 8126 || (c >= 8130 && c <= 8132)))))))))))
        : (c <= 8140 || (c < 12337
          ? (c < 8544
            ? (c < 8458
              ? (c < 8305
                ? (c < 8160
                  ? (c < 8150
                    ? (c >= 8144 && c <= 8147)
                    : c <= 8155)
                  : (c <= 8172 || (c < 8182
                    ? (c >= 8178 && c <= 8180)
                    : c <= 8188)))
                : (c <= 8305 || (c < 8450
                  ? (c < 8336
                    ? c == 8319
                    : c <= 8348)
                  : (c <= 8450 || c == 8455))))
              : (c <= 8467 || (c < 8488
                ? (c < 8484
                  ? (c < 8472
                    ? c == 8469
                    : c <= 8477)
                  : (c <= 8484 || c == 8486))
                : (c <= 8488 || (c < 8517
                  ? (c < 8508
                    ? (c >= 8490 && c <= 8505)
                    : c <= 8511)
                  : (c <= 8521 || c == 8526))))))
            : (c <= 8584 || (c < 11680
              ? (c < 11559
                ? (c < 11506
                  ? (c < 11499
                    ? (c >= 11264 && c <= 11492)
                    : c <= 11502)
                  : (c <= 11507 || (c >= 11520 && c <= 11557)))
                : (c <= 11559 || (c < 11631
                  ? (c < 11568
                    ? c == 11565
                    : c <= 11623)
                  : (c <= 11631 || (c >= 11648 && c <= 11670)))))
              : (c <= 11686 || (c < 11720
                ? (c < 11704
                  ? (c < 11696
                    ? (c >= 11688 && c <= 11694)
                    : c <= 11702)
                  : (c <= 11710 || (c >= 11712 && c <= 11718)))
                : (c <= 11726 || (c < 12293
                  ? (c < 11736
                    ? (c >= 11728 && c <= 11734)
                    : c <= 11742)
                  : (c <= 12295 || (c >= 12321 && c <= 12329)))))))))
          : (c <= 12341 || (c < 42891
            ? (c < 19968
              ? (c < 12549
                ? (c < 12445
                  ? (c < 12353
                    ? (c >= 12344 && c <= 12348)
                    : c <= 12438)
                  : (c <= 12447 || (c < 12540
                    ? (c >= 12449 && c <= 12538)
                    : c <= 12543)))
                : (c <= 12591 || (c < 12784
                  ? (c < 12704
                    ? (c >= 12593 && c <= 12686)
                    : c <= 12735)
                  : (c <= 12799 || (c >= 13312 && c <= 19903)))))
              : (c <= 42124 || (c < 42560
                ? (c < 42512
                  ? (c < 42240
                    ? (c >= 42192 && c <= 42237)
                    : c <= 42508)
                  : (c <= 42527 || (c >= 42538 && c <= 42539)))
                : (c <= 42606 || (c < 42775
                  ? (c < 42656
                    ? (c >= 42623 && c <= 42653)
                    : c <= 42735)
                  : (c <= 42783 || (c >= 42786 && c <= 42888)))))))
            : (c <= 42954 || (c < 43250
              ? (c < 43011
                ? (c < 42965
                  ? (c < 42963
                    ? (c >= 42960 && c <= 42961)
                    : c <= 42963)
                  : (c <= 42969 || (c >= 42994 && c <= 43009)))
                : (c <= 43013 || (c < 43072
                  ? (c < 43020
                    ? (c >= 43015 && c <= 43018)
                    : c <= 43042)
                  : (c <= 43123 || (c >= 43138 && c <= 43187)))))
              : (c <= 43255 || (c < 43360
                ? (c < 43274
                  ? (c < 43261
                    ? c == 43259
                    : c <= 43262)
                  : (c <= 43301 || (c >= 43312 && c <= 43334)))
                : (c <= 43388 || (c < 43488
                  ? (c < 43471
                    ? (c >= 43396 && c <= 43442)
                    : c <= 43471)
                  : (c <= 43492 || (c >= 43494 && c <= 43503)))))))))))))))
    : (c <= 43518 || (c < 70727
      ? (c < 66956
        ? (c < 64914
          ? (c < 43868
            ? (c < 43714
              ? (c < 43646
                ? (c < 43588
                  ? (c < 43584
                    ? (c >= 43520 && c <= 43560)
                    : c <= 43586)
                  : (c <= 43595 || (c < 43642
                    ? (c >= 43616 && c <= 43638)
                    : c <= 43642)))
                : (c <= 43695 || (c < 43705
                  ? (c < 43701
                    ? c == 43697
                    : c <= 43702)
                  : (c <= 43709 || c == 43712))))
              : (c <= 43714 || (c < 43785
                ? (c < 43762
                  ? (c < 43744
                    ? (c >= 43739 && c <= 43741)
                    : c <= 43754)
                  : (c <= 43764 || (c >= 43777 && c <= 43782)))
                : (c <= 43790 || (c < 43816
                  ? (c < 43808
                    ? (c >= 43793 && c <= 43798)
                    : c <= 43814)
                  : (c <= 43822 || (c >= 43824 && c <= 43866)))))))
            : (c <= 43881 || (c < 64287
              ? (c < 63744
                ? (c < 55216
                  ? (c < 44032
                    ? (c >= 43888 && c <= 44002)
                    : c <= 55203)
                  : (c <= 55238 || (c >= 55243 && c <= 55291)))
                : (c <= 64109 || (c < 64275
                  ? (c < 64256
                    ? (c >= 64112 && c <= 64217)
                    : c <= 64262)
                  : (c <= 64279 || c == 64285))))
              : (c <= 64296 || (c < 64323
                ? (c < 64318
                  ? (c < 64312
                    ? (c >= 64298 && c <= 64310)
                    : c <= 64316)
                  : (c <= 64318 || (c >= 64320 && c <= 64321)))
                : (c <= 64324 || (c < 64612
                  ? (c < 64467
                    ? (c >= 64326 && c <= 64433)
                    : c <= 64605)
                  : (c <= 64829 || (c >= 64848 && c <= 64911)))))))))
          : (c <= 64967 || (c < 65599
            ? (c < 65382
              ? (c < 65147
                ? (c < 65139
                  ? (c < 65137
                    ? (c >= 65008 && c <= 65017)
                    : c <= 65137)
                  : (c <= 65139 || (c < 65145
                    ? c == 65143
                    : c <= 65145)))
                : (c <= 65147 || (c < 65313
                  ? (c < 65151
                    ? c == 65149
                    : c <= 65276)
                  : (c <= 65338 || (c >= 65345 && c <= 65370)))))
              : (c <= 65437 || (c < 65498
                ? (c < 65482
                  ? (c < 65474
                    ? (c >= 65440 && c <= 65470)
                    : c <= 65479)
                  : (c <= 65487 || (c >= 65490 && c <= 65495)))
                : (c <= 65500 || (c < 65576
                  ? (c < 65549
                    ? (c >= 65536 && c <= 65547)
                    : c <= 65574)
                  : (c <= 65594 || (c >= 65596 && c <= 65597)))))))
            : (c <= 65613 || (c < 66464
              ? (c < 66208
                ? (c < 65856
                  ? (c < 65664
                    ? (c >= 65616 && c <= 65629)
                    : c <= 65786)
                  : (c <= 65908 || (c >= 66176 && c <= 66204)))
                : (c <= 66256 || (c < 66384
                  ? (c < 66349
                    ? (c >= 66304 && c <= 66335)
                    : c <= 66378)
                  : (c <= 66421 || (c >= 66432 && c <= 66461)))))
              : (c <= 66499 || (c < 66776
                ? (c < 66560
                  ? (c < 66513
                    ? (c >= 66504 && c <= 66511)
                    : c <= 66517)
                  : (c <= 66717 || (c >= 66736 && c <= 66771)))
                : (c <= 66811 || (c < 66928
                  ? (c < 66864
                    ? (c >= 66816 && c <= 66855)
                    : c <= 66915)
                  : (c <= 66938 || (c >= 66940 && c <= 66954)))))))))))
        : (c <= 66962 || (c < 68864
          ? (c < 67828
            ? (c < 67506
              ? (c < 67072
                ? (c < 66979
                  ? (c < 66967
                    ? (c >= 66964 && c <= 66965)
                    : c <= 66977)
                  : (c <= 66993 || (c < 67003
                    ? (c >= 66995 && c <= 67001)
                    : c <= 67004)))
                : (c <= 67382 || (c < 67456
                  ? (c < 67424
                    ? (c >= 67392 && c <= 67413)
                    : c <= 67431)
                  : (c <= 67461 || (c >= 67463 && c <= 67504)))))
              : (c <= 67514 || (c < 67644
                ? (c < 67594
                  ? (c < 67592
                    ? (c >= 67584 && c <= 67589)
                    : c <= 67592)
                  : (c <= 67637 || (c >= 67639 && c <= 67640)))
                : (c <= 67644 || (c < 67712
                  ? (c < 67680
                    ? (c >= 67647 && c <= 67669)
                    : c <= 67702)
                  : (c <= 67742 || (c >= 67808 && c <= 67826)))))))
            : (c <= 67829 || (c < 68224
              ? (c < 68096
                ? (c < 67968
                  ? (c < 67872
                    ? (c >= 67840 && c <= 67861)
                    : c <= 67897)
                  : (c <= 68023 || (c >= 68030 && c <= 68031)))
                : (c <= 68096 || (c < 68121
                  ? (c < 68117
                    ? (c >= 68112 && c <= 68115)
                    : c <= 68119)
                  : (c <= 68149 || (c >= 68192 && c <= 68220)))))
              : (c <= 68252 || (c < 68448
                ? (c < 68352
                  ? (c < 68297
                    ? (c >= 68288 && c <= 68295)
                    : c <= 68324)
                  : (c <= 68405 || (c >= 68416 && c <= 68437)))
                : (c <= 68466 || (c < 68736
                  ? (c < 68608
                    ? (c >= 68480 && c <= 68497)
                    : c <= 68680)
                  : (c <= 68786 || (c >= 68800 && c <= 68850)))))))))
          : (c <= 68899 || (c < 70106
            ? (c < 69749
              ? (c < 69488
                ? (c < 69376
                  ? (c < 69296
                    ? (c >= 69248 && c <= 69289)
                    : c <= 69297)
                  : (c <= 69404 || (c < 69424
                    ? c == 69415
                    : c <= 69445)))
                : (c <= 69505 || (c < 69635
                  ? (c < 69600
                    ? (c >= 69552 && c <= 69572)
                    : c <= 69622)
                  : (c <= 69687 || (c >= 69745 && c <= 69746)))))
              : (c <= 69749 || (c < 69959
                ? (c < 69891
                  ? (c < 69840
                    ? (c >= 69763 && c <= 69807)
                    : c <= 69864)
                  : (c <= 69926 || c == 69956))
                : (c <= 69959 || (c < 70019
                  ? (c < 70006
                    ? (c >= 69968 && c <= 70002)
                    : c <= 70006)
                  : (c <= 70066 || (c >= 70081 && c <= 70084)))))))
            : (c <= 70106 || (c < 70405
              ? (c < 70280
                ? (c < 70163
                  ? (c < 70144
                    ? c == 70108
                    : c <= 70161)
                  : (c <= 70187 || (c >= 70272 && c <= 70278)))
                : (c <= 70280 || (c < 70303
                  ? (c < 70287
                    ? (c >= 70282 && c <= 70285)
                    : c <= 70301)
                  : (c <= 70312 || (c >= 70320 && c <= 70366)))))
              : (c <= 70412 || (c < 70453
                ? (c < 70442
                  ? (c < 70419
                    ? (c >= 70415 && c <= 70416)
                    : c <= 70440)
                  : (c <= 70448 || (c >= 70450 && c <= 70451)))
                : (c <= 70457 || (c < 70493
                  ? (c < 70480
                    ? c == 70461
                    : c <= 70480)
                  : (c <= 70497 || (c >= 70656 && c <= 70708)))))))))))))
      : (c <= 70730 || (c < 119894
        ? (c < 73056
          ? (c < 72001
            ? (c < 71424
              ? (c < 71128
                ? (c < 70852
                  ? (c < 70784
                    ? (c >= 70751 && c <= 70753)
                    : c <= 70831)
                  : (c <= 70853 || (c < 71040
                    ? c == 70855
                    : c <= 71086)))
                : (c <= 71131 || (c < 71296
                  ? (c < 71236
                    ? (c >= 71168 && c <= 71215)
                    : c <= 71236)
                  : (c <= 71338 || c == 71352))))
              : (c <= 71450 || (c < 71945
                ? (c < 71840
                  ? (c < 71680
                    ? (c >= 71488 && c <= 71494)
                    : c <= 71723)
                  : (c <= 71903 || (c >= 71935 && c <= 71942)))
                : (c <= 71945 || (c < 71960
                  ? (c < 71957
                    ? (c >= 71948 && c <= 71955)
                    : c <= 71958)
                  : (c <= 71983 || c == 71999))))))
            : (c <= 72001 || (c < 72349
              ? (c < 72192
                ? (c < 72161
                  ? (c < 72106
                    ? (c >= 72096 && c <= 72103)
                    : c <= 72144)
                  : (c <= 72161 || c == 72163))
                : (c <= 72192 || (c < 72272
                  ? (c < 72250
                    ? (c >= 72203 && c <= 72242)
                    : c <= 72250)
                  : (c <= 72272 || (c >= 72284 && c <= 72329)))))
              : (c <= 72349 || (c < 72818
                ? (c < 72714
                  ? (c < 72704
                    ? (c >= 72368 && c <= 72440)
                    : c <= 72712)
                  : (c <= 72750 || c == 72768))
                : (c <= 72847 || (c < 72971
                  ? (c < 72968
                    ? (c >= 72960 && c <= 72966)
                    : c <= 72969)
                  : (c <= 73008 || c == 73030))))))))
          : (c <= 73061 || (c < 93952
            ? (c < 82944
              ? (c < 73728
                ? (c < 73112
                  ? (c < 73066
                    ? (c >= 73063 && c <= 73064)
                    : c <= 73097)
                  : (c <= 73112 || (c < 73648
                    ? (c >= 73440 && c <= 73458)
                    : c <= 73648)))
                : (c <= 74649 || (c < 77712
                  ? (c < 74880
                    ? (c >= 74752 && c <= 74862)
                    : c <= 75075)
                  : (c <= 77808 || (c >= 77824 && c <= 78894)))))
              : (c <= 83526 || (c < 92928
                ? (c < 92784
                  ? (c < 92736
                    ? (c >= 92160 && c <= 92728)
                    : c <= 92766)
                  : (c <= 92862 || (c >= 92880 && c <= 92909)))
                : (c <= 92975 || (c < 93053
                  ? (c < 93027
                    ? (c >= 92992 && c <= 92995)
                    : c <= 93047)
                  : (c <= 93071 || (c >= 93760 && c <= 93823)))))))
            : (c <= 94026 || (c < 110589
              ? (c < 94208
                ? (c < 94176
                  ? (c < 94099
                    ? c == 94032
                    : c <= 94111)
                  : (c <= 94177 || c == 94179))
                : (c <= 100343 || (c < 110576
                  ? (c < 101632
                    ? (c >= 100352 && c <= 101589)
                    : c <= 101640)
                  : (c <= 110579 || (c >= 110581 && c <= 110587)))))
              : (c <= 110590 || (c < 113664
                ? (c < 110948
                  ? (c < 110928
                    ? (c >= 110592 && c <= 110882)
                    : c <= 110930)
                  : (c <= 110951 || (c >= 110960 && c <= 111355)))
                : (c <= 113770 || (c < 113808
                  ? (c < 113792
                    ? (c >= 113776 && c <= 113788)
                    : c <= 113800)
                  : (c <= 113817 || (c >= 119808 && c <= 119892)))))))))))
        : (c <= 119964 || (c < 125259
          ? (c < 120572
            ? (c < 120086
              ? (c < 119995
                ? (c < 119973
                  ? (c < 119970
                    ? (c >= 119966 && c <= 119967)
                    : c <= 119970)
                  : (c <= 119974 || (c < 119982
                    ? (c >= 119977 && c <= 119980)
                    : c <= 119993)))
                : (c <= 119995 || (c < 120071
                  ? (c < 120005
                    ? (c >= 119997 && c <= 120003)
                    : c <= 120069)
                  : (c <= 120074 || (c >= 120077 && c <= 120084)))))
              : (c <= 120092 || (c < 120138
                ? (c < 120128
                  ? (c < 120123
                    ? (c >= 120094 && c <= 120121)
                    : c <= 120126)
                  : (c <= 120132 || c == 120134))
                : (c <= 120144 || (c < 120514
                  ? (c < 120488
                    ? (c >= 120146 && c <= 120485)
                    : c <= 120512)
                  : (c <= 120538 || (c >= 120540 && c <= 120570)))))))
            : (c <= 120596 || (c < 123191
              ? (c < 120714
                ? (c < 120656
                  ? (c < 120630
                    ? (c >= 120598 && c <= 120628)
                    : c <= 120654)
                  : (c <= 120686 || (c >= 120688 && c <= 120712)))
                : (c <= 120744 || (c < 122624
                  ? (c < 120772
                    ? (c >= 120746 && c <= 120770)
                    : c <= 120779)
                  : (c <= 122654 || (c >= 123136 && c <= 123180)))))
              : (c <= 123197 || (c < 124904
                ? (c < 123584
                  ? (c < 123536
                    ? c == 123214
                    : c <= 123565)
                  : (c <= 123627 || (c >= 124896 && c <= 124902)))
                : (c <= 124907 || (c < 124928
                  ? (c < 124912
                    ? (c >= 124909 && c <= 124910)
                    : c <= 124926)
                  : (c <= 125124 || (c >= 125184 && c <= 125251)))))))))
          : (c <= 125259 || (c < 126559
            ? (c < 126535
              ? (c < 126505
                ? (c < 126497
                  ? (c < 126469
                    ? (c >= 126464 && c <= 126467)
                    : c <= 126495)
                  : (c <= 126498 || (c < 126503
                    ? c == 126500
                    : c <= 126503)))
                : (c <= 126514 || (c < 126523
                  ? (c < 126521
                    ? (c >= 126516 && c <= 126519)
                    : c <= 126521)
                  : (c <= 126523 || c == 126530))))
              : (c <= 126535 || (c < 126548
                ? (c < 126541
                  ? (c < 126539
                    ? c == 126537
                    : c <= 126539)
                  : (c <= 126543 || (c >= 126545 && c <= 126546)))
                : (c <= 126548 || (c < 126555
                  ? (c < 126553
                    ? c == 126551
                    : c <= 126553)
                  : (c <= 126555 || c == 126557))))))
            : (c <= 126559 || (c < 126625
              ? (c < 126580
                ? (c < 126567
                  ? (c < 126564
                    ? (c >= 126561 && c <= 126562)
                    : c <= 126564)
                  : (c <= 126570 || (c >= 126572 && c <= 126578)))
                : (c <= 126583 || (c < 126592
                  ? (c < 126590
                    ? (c >= 126585 && c <= 126588)
                    : c <= 126590)
                  : (c <= 126601 || (c >= 126603 && c <= 126619)))))
              : (c <= 126627 || (c < 177984
                ? (c < 131072
                  ? (c < 126635
                    ? (c >= 126629 && c <= 126633)
                    : c <= 126651)
                  : (c <= 173791 || (c >= 173824 && c <= 177976)))
                : (c <= 178205 || (c < 194560
                  ? (c < 183984
                    ? (c >= 178208 && c <= 183969)
                    : c <= 191456)
                  : (c <= 195101 || (c >= 196608 && c <= 201546)))))))))))))))));
}

static inline bool aux_sym__component_token1_character_set_2(int32_t c) {
  return (c < 43494
    ? (c < 4186
      ? (c < 2703
        ? (c < 1969
          ? (c < 908
            ? (c < 710
              ? (c < 181
                ? (c < 'a'
                  ? (c < '_'
                    ? (c >= 'A' && c <= 'Z')
                    : c <= '_')
                  : (c <= 't' || (c < 170
                    ? (c >= 'v' && c <= 'z')
                    : c <= 170)))
                : (c <= 181 || (c < 216
                  ? (c < 192
                    ? c == 186
                    : c <= 214)
                  : (c <= 246 || (c >= 248 && c <= 705)))))
              : (c <= 721 || (c < 886
                ? (c < 750
                  ? (c < 748
                    ? (c >= 736 && c <= 740)
                    : c <= 748)
                  : (c <= 750 || (c >= 880 && c <= 884)))
                : (c <= 887 || (c < 902
                  ? (c < 895
                    ? (c >= 891 && c <= 893)
                    : c <= 895)
                  : (c <= 902 || (c >= 904 && c <= 906)))))))
            : (c <= 908 || (c < 1646
              ? (c < 1369
                ? (c < 1015
                  ? (c < 931
                    ? (c >= 910 && c <= 929)
                    : c <= 1013)
                  : (c <= 1153 || (c < 1329
                    ? (c >= 1162 && c <= 1327)
                    : c <= 1366)))
                : (c <= 1369 || (c < 1519
                  ? (c < 1488
                    ? (c >= 1376 && c <= 1416)
                    : c <= 1514)
                  : (c <= 1522 || (c >= 1568 && c <= 1610)))))
              : (c <= 1647 || (c < 1786
                ? (c < 1765
                  ? (c < 1749
                    ? (c >= 1649 && c <= 1747)
                    : c <= 1749)
                  : (c <= 1766 || (c >= 1774 && c <= 1775)))
                : (c <= 1788 || (c < 1810
                  ? (c < 1808
                    ? c == 1791
                    : c <= 1808)
                  : (c <= 1839 || (c >= 1869 && c <= 1957)))))))))
          : (c <= 1969 || (c < 2474
            ? (c < 2185
              ? (c < 2084
                ? (c < 2042
                  ? (c < 2036
                    ? (c >= 1994 && c <= 2026)
                    : c <= 2037)
                  : (c <= 2042 || (c < 2074
                    ? (c >= 2048 && c <= 2069)
                    : c <= 2074)))
                : (c <= 2084 || (c < 2144
                  ? (c < 2112
                    ? c == 2088
                    : c <= 2136)
                  : (c <= 2154 || (c >= 2160 && c <= 2183)))))
              : (c <= 2190 || (c < 2392
                ? (c < 2365
                  ? (c < 2308
                    ? (c >= 2208 && c <= 2249)
                    : c <= 2361)
                  : (c <= 2365 || c == 2384))
                : (c <= 2401 || (c < 2447
                  ? (c < 2437
                    ? (c >= 2417 && c <= 2432)
                    : c <= 2444)
                  : (c <= 2448 || (c >= 2451 && c <= 2472)))))))
            : (c <= 2480 || (c < 2575
              ? (c < 2524
                ? (c < 2493
                  ? (c < 2486
                    ? c == 2482
                    : c <= 2489)
                  : (c <= 2493 || c == 2510))
                : (c <= 2525 || (c < 2556
                  ? (c < 2544
                    ? (c >= 2527 && c <= 2529)
                    : c <= 2545)
                  : (c <= 2556 || (c >= 2565 && c <= 2570)))))
              : (c <= 2576 || (c < 2616
                ? (c < 2610
                  ? (c < 2602
                    ? (c >= 2579 && c <= 2600)
                    : c <= 2608)
                  : (c <= 2611 || (c >= 2613 && c <= 2614)))
                : (c <= 2617 || (c < 2674
                  ? (c < 2654
                    ? (c >= 2649 && c <= 2652)
                    : c <= 2654)
                  : (c <= 2676 || (c >= 2693 && c <= 2701)))))))))))
        : (c <= 2705 || (c < 3218
          ? (c < 2958
            ? (c < 2835
              ? (c < 2768
                ? (c < 2738
                  ? (c < 2730
                    ? (c >= 2707 && c <= 2728)
                    : c <= 2736)
                  : (c <= 2739 || (c < 2749
                    ? (c >= 2741 && c <= 2745)
                    : c <= 2749)))
                : (c <= 2768 || (c < 2821
                  ? (c < 2809
                    ? (c >= 2784 && c <= 2785)
                    : c <= 2809)
                  : (c <= 2828 || (c >= 2831 && c <= 2832)))))
              : (c <= 2856 || (c < 2908
                ? (c < 2869
                  ? (c < 2866
                    ? (c >= 2858 && c <= 2864)
                    : c <= 2867)
                  : (c <= 2873 || c == 2877))
                : (c <= 2909 || (c < 2947
                  ? (c < 2929
                    ? (c >= 2911 && c <= 2913)
                    : c <= 2929)
                  : (c <= 2947 || (c >= 2949 && c <= 2954)))))))
            : (c <= 2960 || (c < 3086
              ? (c < 2979
                ? (c < 2972
                  ? (c < 2969
                    ? (c >= 2962 && c <= 2965)
                    : c <= 2970)
                  : (c <= 2972 || (c >= 2974 && c <= 2975)))
                : (c <= 2980 || (c < 3024
                  ? (c < 2990
                    ? (c >= 2984 && c <= 2986)
                    : c <= 3001)
                  : (c <= 3024 || (c >= 3077 && c <= 3084)))))
              : (c <= 3088 || (c < 3165
                ? (c < 3133
                  ? (c < 3114
                    ? (c >= 3090 && c <= 3112)
                    : c <= 3129)
                  : (c <= 3133 || (c >= 3160 && c <= 3162)))
                : (c <= 3165 || (c < 3205
                  ? (c < 3200
                    ? (c >= 3168 && c <= 3169)
                    : c <= 3200)
                  : (c <= 3212 || (c >= 3214 && c <= 3216)))))))))
          : (c <= 3240 || (c < 3634
            ? (c < 3406
              ? (c < 3313
                ? (c < 3261
                  ? (c < 3253
                    ? (c >= 3242 && c <= 3251)
                    : c <= 3257)
                  : (c <= 3261 || (c < 3296
                    ? (c >= 3293 && c <= 3294)
                    : c <= 3297)))
                : (c <= 3314 || (c < 3346
                  ? (c < 3342
                    ? (c >= 3332 && c <= 3340)
                    : c <= 3344)
                  : (c <= 3386 || c == 3389))))
              : (c <= 3406 || (c < 3482
                ? (c < 3450
                  ? (c < 3423
                    ? (c >= 3412 && c <= 3414)
                    : c <= 3425)
                  : (c <= 3455 || (c >= 3461 && c <= 3478)))
                : (c <= 3505 || (c < 3520
                  ? (c < 3517
                    ? (c >= 3507 && c <= 3515)
                    : c <= 3517)
                  : (c <= 3526 || (c >= 3585 && c <= 3632)))))))
            : (c <= 3634 || (c < 3776
              ? (c < 3724
                ? (c < 3716
                  ? (c < 3713
                    ? (c >= 3648 && c <= 3654)
                    : c <= 3714)
                  : (c <= 3716 || (c >= 3718 && c <= 3722)))
                : (c <= 3747 || (c < 3762
                  ? (c < 3751
                    ? c == 3749
                    : c <= 3760)
                  : (c <= 3762 || c == 3773))))
              : (c <= 3780 || (c < 3913
                ? (c < 3840
                  ? (c < 3804
                    ? c == 3782
                    : c <= 3807)
                  : (c <= 3840 || (c >= 3904 && c <= 3911)))
                : (c <= 3948 || (c < 4159
                  ? (c < 4096
                    ? (c >= 3976 && c <= 3980)
                    : c <= 4138)
                  : (c <= 4159 || (c >= 4176 && c <= 4181)))))))))))))
      : (c <= 4189 || (c < 8130
        ? (c < 6108
          ? (c < 4802
            ? (c < 4682
              ? (c < 4256
                ? (c < 4206
                  ? (c < 4197
                    ? c == 4193
                    : c <= 4198)
                  : (c <= 4208 || (c < 4238
                    ? (c >= 4213 && c <= 4225)
                    : c <= 4238)))
                : (c <= 4293 || (c < 4304
                  ? (c < 4301
                    ? c == 4295
                    : c <= 4301)
                  : (c <= 4346 || (c >= 4348 && c <= 4680)))))
              : (c <= 4685 || (c < 4746
                ? (c < 4698
                  ? (c < 4696
                    ? (c >= 4688 && c <= 4694)
                    : c <= 4696)
                  : (c <= 4701 || (c >= 4704 && c <= 4744)))
                : (c <= 4749 || (c < 4792
                  ? (c < 4786
                    ? (c >= 4752 && c <= 4784)
                    : c <= 4789)
                  : (c <= 4798 || c == 4800))))))
            : (c <= 4805 || (c < 5761
              ? (c < 4992
                ? (c < 4882
                  ? (c < 4824
                    ? (c >= 4808 && c <= 4822)
                    : c <= 4880)
                  : (c <= 4885 || (c >= 4888 && c <= 4954)))
                : (c <= 5007 || (c < 5121
                  ? (c < 5112
                    ? (c >= 5024 && c <= 5109)
                    : c <= 5117)
                  : (c <= 5740 || (c >= 5743 && c <= 5759)))))
              : (c <= 5786 || (c < 5952
                ? (c < 5888
                  ? (c < 5870
                    ? (c >= 5792 && c <= 5866)
                    : c <= 5880)
                  : (c <= 5905 || (c >= 5919 && c <= 5937)))
                : (c <= 5969 || (c < 6016
                  ? (c < 5998
                    ? (c >= 5984 && c <= 5996)
                    : c <= 6000)
                  : (c <= 6067 || c == 6103))))))))
          : (c <= 6108 || (c < 7296
            ? (c < 6688
              ? (c < 6480
                ? (c < 6314
                  ? (c < 6272
                    ? (c >= 6176 && c <= 6264)
                    : c <= 6312)
                  : (c <= 6314 || (c < 6400
                    ? (c >= 6320 && c <= 6389)
                    : c <= 6430)))
                : (c <= 6509 || (c < 6576
                  ? (c < 6528
                    ? (c >= 6512 && c <= 6516)
                    : c <= 6571)
                  : (c <= 6601 || (c >= 6656 && c <= 6678)))))
              : (c <= 6740 || (c < 7086
                ? (c < 6981
                  ? (c < 6917
                    ? c == 6823
                    : c <= 6963)
                  : (c <= 6988 || (c >= 7043 && c <= 7072)))
                : (c <= 7087 || (c < 7245
                  ? (c < 7168
                    ? (c >= 7098 && c <= 7141)
                    : c <= 7203)
                  : (c <= 7247 || (c >= 7258 && c <= 7293)))))))
            : (c <= 7304 || (c < 7968
              ? (c < 7413
                ? (c < 7401
                  ? (c < 7357
                    ? (c >= 7312 && c <= 7354)
                    : c <= 7359)
                  : (c <= 7404 || (c >= 7406 && c <= 7411)))
                : (c <= 7414 || (c < 7680
                  ? (c < 7424
                    ? c == 7418
                    : c <= 7615)
                  : (c <= 7957 || (c >= 7960 && c <= 7965)))))
              : (c <= 8005 || (c < 8029
                ? (c < 8025
                  ? (c < 8016
                    ? (c >= 8008 && c <= 8013)
                    : c <= 8023)
                  : (c <= 8025 || c == 8027))
                : (c <= 8029 || (c < 8118
                  ? (c < 8064
                    ? (c >= 8031 && c <= 8061)
                    : c <= 8116)
                  : (c <= 8124 || c == 8126))))))))))
        : (c <= 8132 || (c < 12321
          ? (c < 8526
            ? (c < 8455
              ? (c < 8182
                ? (c < 8150
                  ? (c < 8144
                    ? (c >= 8134 && c <= 8140)
                    : c <= 8147)
                  : (c <= 8155 || (c < 8178
                    ? (c >= 8160 && c <= 8172)
                    : c <= 8180)))
                : (c <= 8188 || (c < 8336
                  ? (c < 8319
                    ? c == 8305
                    : c <= 8319)
                  : (c <= 8348 || c == 8450))))
              : (c <= 8455 || (c < 8486
                ? (c < 8472
                  ? (c < 8469
                    ? (c >= 8458 && c <= 8467)
                    : c <= 8469)
                  : (c <= 8477 || c == 8484))
                : (c <= 8486 || (c < 8508
                  ? (c < 8490
                    ? c == 8488
                    : c <= 8505)
                  : (c <= 8511 || (c >= 8517 && c <= 8521)))))))
            : (c <= 8526 || (c < 11648
              ? (c < 11520
                ? (c < 11499
                  ? (c < 11264
                    ? (c >= 8544 && c <= 8584)
                    : c <= 11492)
                  : (c <= 11502 || (c >= 11506 && c <= 11507)))
                : (c <= 11557 || (c < 11568
                  ? (c < 11565
                    ? c == 11559
                    : c <= 11565)
                  : (c <= 11623 || c == 11631))))
              : (c <= 11670 || (c < 11712
                ? (c < 11696
                  ? (c < 11688
                    ? (c >= 11680 && c <= 11686)
                    : c <= 11694)
                  : (c <= 11702 || (c >= 11704 && c <= 11710)))
                : (c <= 11718 || (c < 11736
                  ? (c < 11728
                    ? (c >= 11720 && c <= 11726)
                    : c <= 11734)
                  : (c <= 11742 || (c >= 12293 && c <= 12295)))))))))
          : (c <= 12329 || (c < 42786
            ? (c < 13312
              ? (c < 12540
                ? (c < 12353
                  ? (c < 12344
                    ? (c >= 12337 && c <= 12341)
                    : c <= 12348)
                  : (c <= 12438 || (c < 12449
                    ? (c >= 12445 && c <= 12447)
                    : c <= 12538)))
                : (c <= 12543 || (c < 12704
                  ? (c < 12593
                    ? (c >= 12549 && c <= 12591)
                    : c <= 12686)
                  : (c <= 12735 || (c >= 12784 && c <= 12799)))))
              : (c <= 19903 || (c < 42538
                ? (c < 42240
                  ? (c < 42192
                    ? (c >= 19968 && c <= 42124)
                    : c <= 42237)
                  : (c <= 42508 || (c >= 42512 && c <= 42527)))
                : (c <= 42539 || (c < 42656
                  ? (c < 42623
                    ? (c >= 42560 && c <= 42606)
                    : c <= 42653)
                  : (c <= 42735 || (c >= 42775 && c <= 42783)))))))
            : (c <= 42888 || (c < 43138
              ? (c < 42994
                ? (c < 42963
                  ? (c < 42960
                    ? (c >= 42891 && c <= 42954)
                    : c <= 42961)
                  : (c <= 42963 || (c >= 42965 && c <= 42969)))
                : (c <= 43009 || (c < 43020
                  ? (c < 43015
                    ? (c >= 43011 && c <= 43013)
                    : c <= 43018)
                  : (c <= 43042 || (c >= 43072 && c <= 43123)))))
              : (c <= 43187 || (c < 43312
                ? (c < 43261
                  ? (c < 43259
                    ? (c >= 43250 && c <= 43255)
                    : c <= 43259)
                  : (c <= 43262 || (c >= 43274 && c <= 43301)))
                : (c <= 43334 || (c < 43471
                  ? (c < 43396
                    ? (c >= 43360 && c <= 43388)
                    : c <= 43442)
                  : (c <= 43471 || (c >= 43488 && c <= 43492)))))))))))))))
    : (c <= 43503 || (c < 70727
      ? (c < 66956
        ? (c < 64914
          ? (c < 43824
            ? (c < 43712
              ? (c < 43642
                ? (c < 43584
                  ? (c < 43520
                    ? (c >= 43514 && c <= 43518)
                    : c <= 43560)
                  : (c <= 43586 || (c < 43616
                    ? (c >= 43588 && c <= 43595)
                    : c <= 43638)))
                : (c <= 43642 || (c < 43701
                  ? (c < 43697
                    ? (c >= 43646 && c <= 43695)
                    : c <= 43697)
                  : (c <= 43702 || (c >= 43705 && c <= 43709)))))
              : (c <= 43712 || (c < 43777
                ? (c < 43744
                  ? (c < 43739
                    ? c == 43714
                    : c <= 43741)
                  : (c <= 43754 || (c >= 43762 && c <= 43764)))
                : (c <= 43782 || (c < 43808
                  ? (c < 43793
                    ? (c >= 43785 && c <= 43790)
                    : c <= 43798)
                  : (c <= 43814 || (c >= 43816 && c <= 43822)))))))
            : (c <= 43866 || (c < 64287
              ? (c < 63744
                ? (c < 44032
                  ? (c < 43888
                    ? (c >= 43868 && c <= 43881)
                    : c <= 44002)
                  : (c <= 55203 || (c < 55243
                    ? (c >= 55216 && c <= 55238)
                    : c <= 55291)))
                : (c <= 64109 || (c < 64275
                  ? (c < 64256
                    ? (c >= 64112 && c <= 64217)
                    : c <= 64262)
                  : (c <= 64279 || c == 64285))))
              : (c <= 64296 || (c < 64323
                ? (c < 64318
                  ? (c < 64312
                    ? (c >= 64298 && c <= 64310)
                    : c <= 64316)
                  : (c <= 64318 || (c >= 64320 && c <= 64321)))
                : (c <= 64324 || (c < 64612
                  ? (c < 64467
                    ? (c >= 64326 && c <= 64433)
                    : c <= 64605)
                  : (c <= 64829 || (c >= 64848 && c <= 64911)))))))))
          : (c <= 64967 || (c < 65599
            ? (c < 65382
              ? (c < 65147
                ? (c < 65139
                  ? (c < 65137
                    ? (c >= 65008 && c <= 65017)
                    : c <= 65137)
                  : (c <= 65139 || (c < 65145
                    ? c == 65143
                    : c <= 65145)))
                : (c <= 65147 || (c < 65313
                  ? (c < 65151
                    ? c == 65149
                    : c <= 65276)
                  : (c <= 65338 || (c >= 65345 && c <= 65370)))))
              : (c <= 65437 || (c < 65498
                ? (c < 65482
                  ? (c < 65474
                    ? (c >= 65440 && c <= 65470)
                    : c <= 65479)
                  : (c <= 65487 || (c >= 65490 && c <= 65495)))
                : (c <= 65500 || (c < 65576
                  ? (c < 65549
                    ? (c >= 65536 && c <= 65547)
                    : c <= 65574)
                  : (c <= 65594 || (c >= 65596 && c <= 65597)))))))
            : (c <= 65613 || (c < 66464
              ? (c < 66208
                ? (c < 65856
                  ? (c < 65664
                    ? (c >= 65616 && c <= 65629)
                    : c <= 65786)
                  : (c <= 65908 || (c >= 66176 && c <= 66204)))
                : (c <= 66256 || (c < 66384
                  ? (c < 66349
                    ? (c >= 66304 && c <= 66335)
                    : c <= 66378)
                  : (c <= 66421 || (c >= 66432 && c <= 66461)))))
              : (c <= 66499 || (c < 66776
                ? (c < 66560
                  ? (c < 66513
                    ? (c >= 66504 && c <= 66511)
                    : c <= 66517)
                  : (c <= 66717 || (c >= 66736 && c <= 66771)))
                : (c <= 66811 || (c < 66928
                  ? (c < 66864
                    ? (c >= 66816 && c <= 66855)
                    : c <= 66915)
                  : (c <= 66938 || (c >= 66940 && c <= 66954)))))))))))
        : (c <= 66962 || (c < 68864
          ? (c < 67828
            ? (c < 67506
              ? (c < 67072
                ? (c < 66979
                  ? (c < 66967
                    ? (c >= 66964 && c <= 66965)
                    : c <= 66977)
                  : (c <= 66993 || (c < 67003
                    ? (c >= 66995 && c <= 67001)
                    : c <= 67004)))
                : (c <= 67382 || (c < 67456
                  ? (c < 67424
                    ? (c >= 67392 && c <= 67413)
                    : c <= 67431)
                  : (c <= 67461 || (c >= 67463 && c <= 67504)))))
              : (c <= 67514 || (c < 67644
                ? (c < 67594
                  ? (c < 67592
                    ? (c >= 67584 && c <= 67589)
                    : c <= 67592)
                  : (c <= 67637 || (c >= 67639 && c <= 67640)))
                : (c <= 67644 || (c < 67712
                  ? (c < 67680
                    ? (c >= 67647 && c <= 67669)
                    : c <= 67702)
                  : (c <= 67742 || (c >= 67808 && c <= 67826)))))))
            : (c <= 67829 || (c < 68224
              ? (c < 68096
                ? (c < 67968
                  ? (c < 67872
                    ? (c >= 67840 && c <= 67861)
                    : c <= 67897)
                  : (c <= 68023 || (c >= 68030 && c <= 68031)))
                : (c <= 68096 || (c < 68121
                  ? (c < 68117
                    ? (c >= 68112 && c <= 68115)
                    : c <= 68119)
                  : (c <= 68149 || (c >= 68192 && c <= 68220)))))
              : (c <= 68252 || (c < 68448
                ? (c < 68352
                  ? (c < 68297
                    ? (c >= 68288 && c <= 68295)
                    : c <= 68324)
                  : (c <= 68405 || (c >= 68416 && c <= 68437)))
                : (c <= 68466 || (c < 68736
                  ? (c < 68608
                    ? (c >= 68480 && c <= 68497)
                    : c <= 68680)
                  : (c <= 68786 || (c >= 68800 && c <= 68850)))))))))
          : (c <= 68899 || (c < 70106
            ? (c < 69749
              ? (c < 69488
                ? (c < 69376
                  ? (c < 69296
                    ? (c >= 69248 && c <= 69289)
                    : c <= 69297)
                  : (c <= 69404 || (c < 69424
                    ? c == 69415
                    : c <= 69445)))
                : (c <= 69505 || (c < 69635
                  ? (c < 69600
                    ? (c >= 69552 && c <= 69572)
                    : c <= 69622)
                  : (c <= 69687 || (c >= 69745 && c <= 69746)))))
              : (c <= 69749 || (c < 69959
                ? (c < 69891
                  ? (c < 69840
                    ? (c >= 69763 && c <= 69807)
                    : c <= 69864)
                  : (c <= 69926 || c == 69956))
                : (c <= 69959 || (c < 70019
                  ? (c < 70006
                    ? (c >= 69968 && c <= 70002)
                    : c <= 70006)
                  : (c <= 70066 || (c >= 70081 && c <= 70084)))))))
            : (c <= 70106 || (c < 70405
              ? (c < 70280
                ? (c < 70163
                  ? (c < 70144
                    ? c == 70108
                    : c <= 70161)
                  : (c <= 70187 || (c >= 70272 && c <= 70278)))
                : (c <= 70280 || (c < 70303
                  ? (c < 70287
                    ? (c >= 70282 && c <= 70285)
                    : c <= 70301)
                  : (c <= 70312 || (c >= 70320 && c <= 70366)))))
              : (c <= 70412 || (c < 70453
                ? (c < 70442
                  ? (c < 70419
                    ? (c >= 70415 && c <= 70416)
                    : c <= 70440)
                  : (c <= 70448 || (c >= 70450 && c <= 70451)))
                : (c <= 70457 || (c < 70493
                  ? (c < 70480
                    ? c == 70461
                    : c <= 70480)
                  : (c <= 70497 || (c >= 70656 && c <= 70708)))))))))))))
      : (c <= 70730 || (c < 119894
        ? (c < 73056
          ? (c < 72001
            ? (c < 71424
              ? (c < 71128
                ? (c < 70852
                  ? (c < 70784
                    ? (c >= 70751 && c <= 70753)
                    : c <= 70831)
                  : (c <= 70853 || (c < 71040
                    ? c == 70855
                    : c <= 71086)))
                : (c <= 71131 || (c < 71296
                  ? (c < 71236
                    ? (c >= 71168 && c <= 71215)
                    : c <= 71236)
                  : (c <= 71338 || c == 71352))))
              : (c <= 71450 || (c < 71945
                ? (c < 71840
                  ? (c < 71680
                    ? (c >= 71488 && c <= 71494)
                    : c <= 71723)
                  : (c <= 71903 || (c >= 71935 && c <= 71942)))
                : (c <= 71945 || (c < 71960
                  ? (c < 71957
                    ? (c >= 71948 && c <= 71955)
                    : c <= 71958)
                  : (c <= 71983 || c == 71999))))))
            : (c <= 72001 || (c < 72349
              ? (c < 72192
                ? (c < 72161
                  ? (c < 72106
                    ? (c >= 72096 && c <= 72103)
                    : c <= 72144)
                  : (c <= 72161 || c == 72163))
                : (c <= 72192 || (c < 72272
                  ? (c < 72250
                    ? (c >= 72203 && c <= 72242)
                    : c <= 72250)
                  : (c <= 72272 || (c >= 72284 && c <= 72329)))))
              : (c <= 72349 || (c < 72818
                ? (c < 72714
                  ? (c < 72704
                    ? (c >= 72368 && c <= 72440)
                    : c <= 72712)
                  : (c <= 72750 || c == 72768))
                : (c <= 72847 || (c < 72971
                  ? (c < 72968
                    ? (c >= 72960 && c <= 72966)
                    : c <= 72969)
                  : (c <= 73008 || c == 73030))))))))
          : (c <= 73061 || (c < 93952
            ? (c < 82944
              ? (c < 73728
                ? (c < 73112
                  ? (c < 73066
                    ? (c >= 73063 && c <= 73064)
                    : c <= 73097)
                  : (c <= 73112 || (c < 73648
                    ? (c >= 73440 && c <= 73458)
                    : c <= 73648)))
                : (c <= 74649 || (c < 77712
                  ? (c < 74880
                    ? (c >= 74752 && c <= 74862)
                    : c <= 75075)
                  : (c <= 77808 || (c >= 77824 && c <= 78894)))))
              : (c <= 83526 || (c < 92928
                ? (c < 92784
                  ? (c < 92736
                    ? (c >= 92160 && c <= 92728)
                    : c <= 92766)
                  : (c <= 92862 || (c >= 92880 && c <= 92909)))
                : (c <= 92975 || (c < 93053
                  ? (c < 93027
                    ? (c >= 92992 && c <= 92995)
                    : c <= 93047)
                  : (c <= 93071 || (c >= 93760 && c <= 93823)))))))
            : (c <= 94026 || (c < 110589
              ? (c < 94208
                ? (c < 94176
                  ? (c < 94099
                    ? c == 94032
                    : c <= 94111)
                  : (c <= 94177 || c == 94179))
                : (c <= 100343 || (c < 110576
                  ? (c < 101632
                    ? (c >= 100352 && c <= 101589)
                    : c <= 101640)
                  : (c <= 110579 || (c >= 110581 && c <= 110587)))))
              : (c <= 110590 || (c < 113664
                ? (c < 110948
                  ? (c < 110928
                    ? (c >= 110592 && c <= 110882)
                    : c <= 110930)
                  : (c <= 110951 || (c >= 110960 && c <= 111355)))
                : (c <= 113770 || (c < 113808
                  ? (c < 113792
                    ? (c >= 113776 && c <= 113788)
                    : c <= 113800)
                  : (c <= 113817 || (c >= 119808 && c <= 119892)))))))))))
        : (c <= 119964 || (c < 125259
          ? (c < 120572
            ? (c < 120086
              ? (c < 119995
                ? (c < 119973
                  ? (c < 119970
                    ? (c >= 119966 && c <= 119967)
                    : c <= 119970)
                  : (c <= 119974 || (c < 119982
                    ? (c >= 119977 && c <= 119980)
                    : c <= 119993)))
                : (c <= 119995 || (c < 120071
                  ? (c < 120005
                    ? (c >= 119997 && c <= 120003)
                    : c <= 120069)
                  : (c <= 120074 || (c >= 120077 && c <= 120084)))))
              : (c <= 120092 || (c < 120138
                ? (c < 120128
                  ? (c < 120123
                    ? (c >= 120094 && c <= 120121)
                    : c <= 120126)
                  : (c <= 120132 || c == 120134))
                : (c <= 120144 || (c < 120514
                  ? (c < 120488
                    ? (c >= 120146 && c <= 120485)
                    : c <= 120512)
                  : (c <= 120538 || (c >= 120540 && c <= 120570)))))))
            : (c <= 120596 || (c < 123191
              ? (c < 120714
                ? (c < 120656
                  ? (c < 120630
                    ? (c >= 120598 && c <= 120628)
                    : c <= 120654)
                  : (c <= 120686 || (c >= 120688 && c <= 120712)))
                : (c <= 120744 || (c < 122624
                  ? (c < 120772
                    ? (c >= 120746 && c <= 120770)
                    : c <= 120779)
                  : (c <= 122654 || (c >= 123136 && c <= 123180)))))
              : (c <= 123197 || (c < 124904
                ? (c < 123584
                  ? (c < 123536
                    ? c == 123214
                    : c <= 123565)
                  : (c <= 123627 || (c >= 124896 && c <= 124902)))
                : (c <= 124907 || (c < 124928
                  ? (c < 124912
                    ? (c >= 124909 && c <= 124910)
                    : c <= 124926)
                  : (c <= 125124 || (c >= 125184 && c <= 125251)))))))))
          : (c <= 125259 || (c < 126559
            ? (c < 126535
              ? (c < 126505
                ? (c < 126497
                  ? (c < 126469
                    ? (c >= 126464 && c <= 126467)
                    : c <= 126495)
                  : (c <= 126498 || (c < 126503
                    ? c == 126500
                    : c <= 126503)))
                : (c <= 126514 || (c < 126523
                  ? (c < 126521
                    ? (c >= 126516 && c <= 126519)
                    : c <= 126521)
                  : (c <= 126523 || c == 126530))))
              : (c <= 126535 || (c < 126548
                ? (c < 126541
                  ? (c < 126539
                    ? c == 126537
                    : c <= 126539)
                  : (c <= 126543 || (c >= 126545 && c <= 126546)))
                : (c <= 126548 || (c < 126555
                  ? (c < 126553
                    ? c == 126551
                    : c <= 126553)
                  : (c <= 126555 || c == 126557))))))
            : (c <= 126559 || (c < 126625
              ? (c < 126580
                ? (c < 126567
                  ? (c < 126564
                    ? (c >= 126561 && c <= 126562)
                    : c <= 126564)
                  : (c <= 126570 || (c >= 126572 && c <= 126578)))
                : (c <= 126583 || (c < 126592
                  ? (c < 126590
                    ? (c >= 126585 && c <= 126588)
                    : c <= 126590)
                  : (c <= 126601 || (c >= 126603 && c <= 126619)))))
              : (c <= 126627 || (c < 177984
                ? (c < 131072
                  ? (c < 126635
                    ? (c >= 126629 && c <= 126633)
                    : c <= 126651)
                  : (c <= 173791 || (c >= 173824 && c <= 177976)))
                : (c <= 178205 || (c < 194560
                  ? (c < 183984
                    ? (c >= 178208 && c <= 183969)
                    : c <= 191456)
                  : (c <= 195101 || (c >= 196608 && c <= 201546)))))))))))))))));
}

static inline bool aux_sym__component_token1_character_set_3(int32_t c) {
  return (c < 43514
    ? (c < 4193
      ? (c < 2707
        ? (c < 1994
          ? (c < 910
            ? (c < 736
              ? (c < 186
                ? (c < 'a'
                  ? (c < '_'
                    ? (c >= 'A' && c <= 'Z')
                    : c <= '_')
                  : (c <= 'z' || (c < 181
                    ? c == 170
                    : c <= 181)))
                : (c <= 186 || (c < 248
                  ? (c < 216
                    ? (c >= 192 && c <= 214)
                    : c <= 246)
                  : (c <= 705 || (c >= 710 && c <= 721)))))
              : (c <= 740 || (c < 891
                ? (c < 880
                  ? (c < 750
                    ? c == 748
                    : c <= 750)
                  : (c <= 884 || (c >= 886 && c <= 887)))
                : (c <= 893 || (c < 904
                  ? (c < 902
                    ? c == 895
                    : c <= 902)
                  : (c <= 906 || c == 908))))))
            : (c <= 929 || (c < 1649
              ? (c < 1376
                ? (c < 1162
                  ? (c < 1015
                    ? (c >= 931 && c <= 1013)
                    : c <= 1153)
                  : (c <= 1327 || (c < 1369
                    ? (c >= 1329 && c <= 1366)
                    : c <= 1369)))
                : (c <= 1416 || (c < 1568
                  ? (c < 1519
                    ? (c >= 1488 && c <= 1514)
                    : c <= 1522)
                  : (c <= 1610 || (c >= 1646 && c <= 1647)))))
              : (c <= 1747 || (c < 1791
                ? (c < 1774
                  ? (c < 1765
                    ? c == 1749
                    : c <= 1766)
                  : (c <= 1775 || (c >= 1786 && c <= 1788)))
                : (c <= 1791 || (c < 1869
                  ? (c < 1810
                    ? c == 1808
                    : c <= 1839)
                  : (c <= 1957 || c == 1969))))))))
          : (c <= 2026 || (c < 2482
            ? (c < 2208
              ? (c < 2088
                ? (c < 2048
                  ? (c < 2042
                    ? (c >= 2036 && c <= 2037)
                    : c <= 2042)
                  : (c <= 2069 || (c < 2084
                    ? c == 2074
                    : c <= 2084)))
                : (c <= 2088 || (c < 2160
                  ? (c < 2144
                    ? (c >= 2112 && c <= 2136)
                    : c <= 2154)
                  : (c <= 2183 || (c >= 2185 && c <= 2190)))))
              : (c <= 2249 || (c < 2417
                ? (c < 2384
                  ? (c < 2365
                    ? (c >= 2308 && c <= 2361)
                    : c <= 2365)
                  : (c <= 2384 || (c >= 2392 && c <= 2401)))
                : (c <= 2432 || (c < 2451
                  ? (c < 2447
                    ? (c >= 2437 && c <= 2444)
                    : c <= 2448)
                  : (c <= 2472 || (c >= 2474 && c <= 2480)))))))
            : (c <= 2482 || (c < 2579
              ? (c < 2527
                ? (c < 2510
                  ? (c < 2493
                    ? (c >= 2486 && c <= 2489)
                    : c <= 2493)
                  : (c <= 2510 || (c >= 2524 && c <= 2525)))
                : (c <= 2529 || (c < 2565
                  ? (c < 2556
                    ? (c >= 2544 && c <= 2545)
                    : c <= 2556)
                  : (c <= 2570 || (c >= 2575 && c <= 2576)))))
              : (c <= 2600 || (c < 2649
                ? (c < 2613
                  ? (c < 2610
                    ? (c >= 2602 && c <= 2608)
                    : c <= 2611)
                  : (c <= 2614 || (c >= 2616 && c <= 2617)))
                : (c <= 2652 || (c < 2693
                  ? (c < 2674
                    ? c == 2654
                    : c <= 2676)
                  : (c <= 2701 || (c >= 2703 && c <= 2705)))))))))))
        : (c <= 2728 || (c < 3242
          ? (c < 2962
            ? (c < 2858
              ? (c < 2784
                ? (c < 2741
                  ? (c < 2738
                    ? (c >= 2730 && c <= 2736)
                    : c <= 2739)
                  : (c <= 2745 || (c < 2768
                    ? c == 2749
                    : c <= 2768)))
                : (c <= 2785 || (c < 2831
                  ? (c < 2821
                    ? c == 2809
                    : c <= 2828)
                  : (c <= 2832 || (c >= 2835 && c <= 2856)))))
              : (c <= 2864 || (c < 2911
                ? (c < 2877
                  ? (c < 2869
                    ? (c >= 2866 && c <= 2867)
                    : c <= 2873)
                  : (c <= 2877 || (c >= 2908 && c <= 2909)))
                : (c <= 2913 || (c < 2949
                  ? (c < 2947
                    ? c == 2929
                    : c <= 2947)
                  : (c <= 2954 || (c >= 2958 && c <= 2960)))))))
            : (c <= 2965 || (c < 3090
              ? (c < 2984
                ? (c < 2974
                  ? (c < 2972
                    ? (c >= 2969 && c <= 2970)
                    : c <= 2972)
                  : (c <= 2975 || (c >= 2979 && c <= 2980)))
                : (c <= 2986 || (c < 3077
                  ? (c < 3024
                    ? (c >= 2990 && c <= 3001)
                    : c <= 3024)
                  : (c <= 3084 || (c >= 3086 && c <= 3088)))))
              : (c <= 3112 || (c < 3168
                ? (c < 3160
                  ? (c < 3133
                    ? (c >= 3114 && c <= 3129)
                    : c <= 3133)
                  : (c <= 3162 || c == 3165))
                : (c <= 3169 || (c < 3214
                  ? (c < 3205
                    ? c == 3200
                    : c <= 3212)
                  : (c <= 3216 || (c >= 3218 && c <= 3240)))))))))
          : (c <= 3251 || (c < 3648
            ? (c < 3412
              ? (c < 3332
                ? (c < 3293
                  ? (c < 3261
                    ? (c >= 3253 && c <= 3257)
                    : c <= 3261)
                  : (c <= 3294 || (c < 3313
                    ? (c >= 3296 && c <= 3297)
                    : c <= 3314)))
                : (c <= 3340 || (c < 3389
                  ? (c < 3346
                    ? (c >= 3342 && c <= 3344)
                    : c <= 3386)
                  : (c <= 3389 || c == 3406))))
              : (c <= 3414 || (c < 3507
                ? (c < 3461
                  ? (c < 3450
                    ? (c >= 3423 && c <= 3425)
                    : c <= 3455)
                  : (c <= 3478 || (c >= 3482 && c <= 3505)))
                : (c <= 3515 || (c < 3585
                  ? (c < 3520
                    ? c == 3517
                    : c <= 3526)
                  : (c <= 3632 || c == 3634))))))
            : (c <= 3654 || (c < 3782
              ? (c < 3749
                ? (c < 3718
                  ? (c < 3716
                    ? (c >= 3713 && c <= 3714)
                    : c <= 3716)
                  : (c <= 3722 || (c >= 3724 && c <= 3747)))
                : (c <= 3749 || (c < 3773
                  ? (c < 3762
                    ? (c >= 3751 && c <= 3760)
                    : c <= 3762)
                  : (c <= 3773 || (c >= 3776 && c <= 3780)))))
              : (c <= 3782 || (c < 3976
                ? (c < 3904
                  ? (c < 3840
                    ? (c >= 3804 && c <= 3807)
                    : c <= 3840)
                  : (c <= 3911 || (c >= 3913 && c <= 3948)))
                : (c <= 3980 || (c < 4176
                  ? (c < 4159
                    ? (c >= 4096 && c <= 4138)
                    : c <= 4159)
                  : (c <= 4181 || (c >= 4186 && c <= 4189)))))))))))))
      : (c <= 4193 || (c < 8134
        ? (c < 6176
          ? (c < 4808
            ? (c < 4688
              ? (c < 4295
                ? (c < 4213
                  ? (c < 4206
                    ? (c >= 4197 && c <= 4198)
                    : c <= 4208)
                  : (c <= 4225 || (c < 4256
                    ? c == 4238
                    : c <= 4293)))
                : (c <= 4295 || (c < 4348
                  ? (c < 4304
                    ? c == 4301
                    : c <= 4346)
                  : (c <= 4680 || (c >= 4682 && c <= 4685)))))
              : (c <= 4694 || (c < 4752
                ? (c < 4704
                  ? (c < 4698
                    ? c == 4696
                    : c <= 4701)
                  : (c <= 4744 || (c >= 4746 && c <= 4749)))
                : (c <= 4784 || (c < 4800
                  ? (c < 4792
                    ? (c >= 4786 && c <= 4789)
                    : c <= 4798)
                  : (c <= 4800 || (c >= 4802 && c <= 4805)))))))
            : (c <= 4822 || (c < 5792
              ? (c < 5024
                ? (c < 4888
                  ? (c < 4882
                    ? (c >= 4824 && c <= 4880)
                    : c <= 4885)
                  : (c <= 4954 || (c >= 4992 && c <= 5007)))
                : (c <= 5109 || (c < 5743
                  ? (c < 5121
                    ? (c >= 5112 && c <= 5117)
                    : c <= 5740)
                  : (c <= 5759 || (c >= 5761 && c <= 5786)))))
              : (c <= 5866 || (c < 5984
                ? (c < 5919
                  ? (c < 5888
                    ? (c >= 5870 && c <= 5880)
                    : c <= 5905)
                  : (c <= 5937 || (c >= 5952 && c <= 5969)))
                : (c <= 5996 || (c < 6103
                  ? (c < 6016
                    ? (c >= 5998 && c <= 6000)
                    : c <= 6067)
                  : (c <= 6103 || c == 6108))))))))
          : (c <= 6264 || (c < 7312
            ? (c < 6823
              ? (c < 6512
                ? (c < 6320
                  ? (c < 6314
                    ? (c >= 6272 && c <= 6312)
                    : c <= 6314)
                  : (c <= 6389 || (c < 6480
                    ? (c >= 6400 && c <= 6430)
                    : c <= 6509)))
                : (c <= 6516 || (c < 6656
                  ? (c < 6576
                    ? (c >= 6528 && c <= 6571)
                    : c <= 6601)
                  : (c <= 6678 || (c >= 6688 && c <= 6740)))))
              : (c <= 6823 || (c < 7098
                ? (c < 7043
                  ? (c < 6981
                    ? (c >= 6917 && c <= 6963)
                    : c <= 6988)
                  : (c <= 7072 || (c >= 7086 && c <= 7087)))
                : (c <= 7141 || (c < 7258
                  ? (c < 7245
                    ? (c >= 7168 && c <= 7203)
                    : c <= 7247)
                  : (c <= 7293 || (c >= 7296 && c <= 7304)))))))
            : (c <= 7354 || (c < 8008
              ? (c < 7418
                ? (c < 7406
                  ? (c < 7401
                    ? (c >= 7357 && c <= 7359)
                    : c <= 7404)
                  : (c <= 7411 || (c >= 7413 && c <= 7414)))
                : (c <= 7418 || (c < 7960
                  ? (c < 7680
                    ? (c >= 7424 && c <= 7615)
                    : c <= 7957)
                  : (c <= 7965 || (c >= 7968 && c <= 8005)))))
              : (c <= 8013 || (c < 8031
                ? (c < 8027
                  ? (c < 8025
                    ? (c >= 8016 && c <= 8023)
                    : c <= 8025)
                  : (c <= 8027 || c == 8029))
                : (c <= 8061 || (c < 8126
                  ? (c < 8118
                    ? (c >= 8064 && c <= 8116)
                    : c <= 8124)
                  : (c <= 8126 || (c >= 8130 && c <= 8132)))))))))))
        : (c <= 8140 || (c < 12337
          ? (c < 8544
            ? (c < 8458
              ? (c < 8305
                ? (c < 8160
                  ? (c < 8150
                    ? (c >= 8144 && c <= 8147)
                    : c <= 8155)
                  : (c <= 8172 || (c < 8182
                    ? (c >= 8178 && c <= 8180)
                    : c <= 8188)))
                : (c <= 8305 || (c < 8450
                  ? (c < 8336
                    ? c == 8319
                    : c <= 8348)
                  : (c <= 8450 || c == 8455))))
              : (c <= 8467 || (c < 8488
                ? (c < 8484
                  ? (c < 8472
                    ? c == 8469
                    : c <= 8477)
                  : (c <= 8484 || c == 8486))
                : (c <= 8488 || (c < 8517
                  ? (c < 8508
                    ? (c >= 8490 && c <= 8505)
                    : c <= 8511)
                  : (c <= 8521 || c == 8526))))))
            : (c <= 8584 || (c < 11680
              ? (c < 11559
                ? (c < 11506
                  ? (c < 11499
                    ? (c >= 11264 && c <= 11492)
                    : c <= 11502)
                  : (c <= 11507 || (c >= 11520 && c <= 11557)))
                : (c <= 11559 || (c < 11631
                  ? (c < 11568
                    ? c == 11565
                    : c <= 11623)
                  : (c <= 11631 || (c >= 11648 && c <= 11670)))))
              : (c <= 11686 || (c < 11720
                ? (c < 11704
                  ? (c < 11696
                    ? (c >= 11688 && c <= 11694)
                    : c <= 11702)
                  : (c <= 11710 || (c >= 11712 && c <= 11718)))
                : (c <= 11726 || (c < 12293
                  ? (c < 11736
                    ? (c >= 11728 && c <= 11734)
                    : c <= 11742)
                  : (c <= 12295 || (c >= 12321 && c <= 12329)))))))))
          : (c <= 12341 || (c < 42891
            ? (c < 19968
              ? (c < 12549
                ? (c < 12445
                  ? (c < 12353
                    ? (c >= 12344 && c <= 12348)
                    : c <= 12438)
                  : (c <= 12447 || (c < 12540
                    ? (c >= 12449 && c <= 12538)
                    : c <= 12543)))
                : (c <= 12591 || (c < 12784
                  ? (c < 12704
                    ? (c >= 12593 && c <= 12686)
                    : c <= 12735)
                  : (c <= 12799 || (c >= 13312 && c <= 19903)))))
              : (c <= 42124 || (c < 42560
                ? (c < 42512
                  ? (c < 42240
                    ? (c >= 42192 && c <= 42237)
                    : c <= 42508)
                  : (c <= 42527 || (c >= 42538 && c <= 42539)))
                : (c <= 42606 || (c < 42775
                  ? (c < 42656
                    ? (c >= 42623 && c <= 42653)
                    : c <= 42735)
                  : (c <= 42783 || (c >= 42786 && c <= 42888)))))))
            : (c <= 42954 || (c < 43250
              ? (c < 43011
                ? (c < 42965
                  ? (c < 42963
                    ? (c >= 42960 && c <= 42961)
                    : c <= 42963)
                  : (c <= 42969 || (c >= 42994 && c <= 43009)))
                : (c <= 43013 || (c < 43072
                  ? (c < 43020
                    ? (c >= 43015 && c <= 43018)
                    : c <= 43042)
                  : (c <= 43123 || (c >= 43138 && c <= 43187)))))
              : (c <= 43255 || (c < 43360
                ? (c < 43274
                  ? (c < 43261
                    ? c == 43259
                    : c <= 43262)
                  : (c <= 43301 || (c >= 43312 && c <= 43334)))
                : (c <= 43388 || (c < 43488
                  ? (c < 43471
                    ? (c >= 43396 && c <= 43442)
                    : c <= 43471)
                  : (c <= 43492 || (c >= 43494 && c <= 43503)))))))))))))))
    : (c <= 43518 || (c < 70727
      ? (c < 66956
        ? (c < 64914
          ? (c < 43868
            ? (c < 43714
              ? (c < 43646
                ? (c < 43588
                  ? (c < 43584
                    ? (c >= 43520 && c <= 43560)
                    : c <= 43586)
                  : (c <= 43595 || (c < 43642
                    ? (c >= 43616 && c <= 43638)
                    : c <= 43642)))
                : (c <= 43695 || (c < 43705
                  ? (c < 43701
                    ? c == 43697
                    : c <= 43702)
                  : (c <= 43709 || c == 43712))))
              : (c <= 43714 || (c < 43785
                ? (c < 43762
                  ? (c < 43744
                    ? (c >= 43739 && c <= 43741)
                    : c <= 43754)
                  : (c <= 43764 || (c >= 43777 && c <= 43782)))
                : (c <= 43790 || (c < 43816
                  ? (c < 43808
                    ? (c >= 43793 && c <= 43798)
                    : c <= 43814)
                  : (c <= 43822 || (c >= 43824 && c <= 43866)))))))
            : (c <= 43881 || (c < 64287
              ? (c < 63744
                ? (c < 55216
                  ? (c < 44032
                    ? (c >= 43888 && c <= 44002)
                    : c <= 55203)
                  : (c <= 55238 || (c >= 55243 && c <= 55291)))
                : (c <= 64109 || (c < 64275
                  ? (c < 64256
                    ? (c >= 64112 && c <= 64217)
                    : c <= 64262)
                  : (c <= 64279 || c == 64285))))
              : (c <= 64296 || (c < 64323
                ? (c < 64318
                  ? (c < 64312
                    ? (c >= 64298 && c <= 64310)
                    : c <= 64316)
                  : (c <= 64318 || (c >= 64320 && c <= 64321)))
                : (c <= 64324 || (c < 64612
                  ? (c < 64467
                    ? (c >= 64326 && c <= 64433)
                    : c <= 64605)
                  : (c <= 64829 || (c >= 64848 && c <= 64911)))))))))
          : (c <= 64967 || (c < 65599
            ? (c < 65382
              ? (c < 65147
                ? (c < 65139
                  ? (c < 65137
                    ? (c >= 65008 && c <= 65017)
                    : c <= 65137)
                  : (c <= 65139 || (c < 65145
                    ? c == 65143
                    : c <= 65145)))
                : (c <= 65147 || (c < 65313
                  ? (c < 65151
                    ? c == 65149
                    : c <= 65276)
                  : (c <= 65338 || (c >= 65345 && c <= 65370)))))
              : (c <= 65437 || (c < 65498
                ? (c < 65482
                  ? (c < 65474
                    ? (c >= 65440 && c <= 65470)
                    : c <= 65479)
                  : (c <= 65487 || (c >= 65490 && c <= 65495)))
                : (c <= 65500 || (c < 65576
                  ? (c < 65549
                    ? (c >= 65536 && c <= 65547)
                    : c <= 65574)
                  : (c <= 65594 || (c >= 65596 && c <= 65597)))))))
            : (c <= 65613 || (c < 66464
              ? (c < 66208
                ? (c < 65856
                  ? (c < 65664
                    ? (c >= 65616 && c <= 65629)
                    : c <= 65786)
                  : (c <= 65908 || (c >= 66176 && c <= 66204)))
                : (c <= 66256 || (c < 66384
                  ? (c < 66349
                    ? (c >= 66304 && c <= 66335)
                    : c <= 66378)
                  : (c <= 66421 || (c >= 66432 && c <= 66461)))))
              : (c <= 66499 || (c < 66776
                ? (c < 66560
                  ? (c < 66513
                    ? (c >= 66504 && c <= 66511)
                    : c <= 66517)
                  : (c <= 66717 || (c >= 66736 && c <= 66771)))
                : (c <= 66811 || (c < 66928
                  ? (c < 66864
                    ? (c >= 66816 && c <= 66855)
                    : c <= 66915)
                  : (c <= 66938 || (c >= 66940 && c <= 66954)))))))))))
        : (c <= 66962 || (c < 68864
          ? (c < 67828
            ? (c < 67506
              ? (c < 67072
                ? (c < 66979
                  ? (c < 66967
                    ? (c >= 66964 && c <= 66965)
                    : c <= 66977)
                  : (c <= 66993 || (c < 67003
                    ? (c >= 66995 && c <= 67001)
                    : c <= 67004)))
                : (c <= 67382 || (c < 67456
                  ? (c < 67424
                    ? (c >= 67392 && c <= 67413)
                    : c <= 67431)
                  : (c <= 67461 || (c >= 67463 && c <= 67504)))))
              : (c <= 67514 || (c < 67644
                ? (c < 67594
                  ? (c < 67592
                    ? (c >= 67584 && c <= 67589)
                    : c <= 67592)
                  : (c <= 67637 || (c >= 67639 && c <= 67640)))
                : (c <= 67644 || (c < 67712
                  ? (c < 67680
                    ? (c >= 67647 && c <= 67669)
                    : c <= 67702)
                  : (c <= 67742 || (c >= 67808 && c <= 67826)))))))
            : (c <= 67829 || (c < 68224
              ? (c < 68096
                ? (c < 67968
                  ? (c < 67872
                    ? (c >= 67840 && c <= 67861)
                    : c <= 67897)
                  : (c <= 68023 || (c >= 68030 && c <= 68031)))
                : (c <= 68096 || (c < 68121
                  ? (c < 68117
                    ? (c >= 68112 && c <= 68115)
                    : c <= 68119)
                  : (c <= 68149 || (c >= 68192 && c <= 68220)))))
              : (c <= 68252 || (c < 68448
                ? (c < 68352
                  ? (c < 68297
                    ? (c >= 68288 && c <= 68295)
                    : c <= 68324)
                  : (c <= 68405 || (c >= 68416 && c <= 68437)))
                : (c <= 68466 || (c < 68736
                  ? (c < 68608
                    ? (c >= 68480 && c <= 68497)
                    : c <= 68680)
                  : (c <= 68786 || (c >= 68800 && c <= 68850)))))))))
          : (c <= 68899 || (c < 70106
            ? (c < 69749
              ? (c < 69488
                ? (c < 69376
                  ? (c < 69296
                    ? (c >= 69248 && c <= 69289)
                    : c <= 69297)
                  : (c <= 69404 || (c < 69424
                    ? c == 69415
                    : c <= 69445)))
                : (c <= 69505 || (c < 69635
                  ? (c < 69600
                    ? (c >= 69552 && c <= 69572)
                    : c <= 69622)
                  : (c <= 69687 || (c >= 69745 && c <= 69746)))))
              : (c <= 69749 || (c < 69959
                ? (c < 69891
                  ? (c < 69840
                    ? (c >= 69763 && c <= 69807)
                    : c <= 69864)
                  : (c <= 69926 || c == 69956))
                : (c <= 69959 || (c < 70019
                  ? (c < 70006
                    ? (c >= 69968 && c <= 70002)
                    : c <= 70006)
                  : (c <= 70066 || (c >= 70081 && c <= 70084)))))))
            : (c <= 70106 || (c < 70405
              ? (c < 70280
                ? (c < 70163
                  ? (c < 70144
                    ? c == 70108
                    : c <= 70161)
                  : (c <= 70187 || (c >= 70272 && c <= 70278)))
                : (c <= 70280 || (c < 70303
                  ? (c < 70287
                    ? (c >= 70282 && c <= 70285)
                    : c <= 70301)
                  : (c <= 70312 || (c >= 70320 && c <= 70366)))))
              : (c <= 70412 || (c < 70453
                ? (c < 70442
                  ? (c < 70419
                    ? (c >= 70415 && c <= 70416)
                    : c <= 70440)
                  : (c <= 70448 || (c >= 70450 && c <= 70451)))
                : (c <= 70457 || (c < 70493
                  ? (c < 70480
                    ? c == 70461
                    : c <= 70480)
                  : (c <= 70497 || (c >= 70656 && c <= 70708)))))))))))))
      : (c <= 70730 || (c < 119894
        ? (c < 73056
          ? (c < 72001
            ? (c < 71424
              ? (c < 71128
                ? (c < 70852
                  ? (c < 70784
                    ? (c >= 70751 && c <= 70753)
                    : c <= 70831)
                  : (c <= 70853 || (c < 71040
                    ? c == 70855
                    : c <= 71086)))
                : (c <= 71131 || (c < 71296
                  ? (c < 71236
                    ? (c >= 71168 && c <= 71215)
                    : c <= 71236)
                  : (c <= 71338 || c == 71352))))
              : (c <= 71450 || (c < 71945
                ? (c < 71840
                  ? (c < 71680
                    ? (c >= 71488 && c <= 71494)
                    : c <= 71723)
                  : (c <= 71903 || (c >= 71935 && c <= 71942)))
                : (c <= 71945 || (c < 71960
                  ? (c < 71957
                    ? (c >= 71948 && c <= 71955)
                    : c <= 71958)
                  : (c <= 71983 || c == 71999))))))
            : (c <= 72001 || (c < 72349
              ? (c < 72192
                ? (c < 72161
                  ? (c < 72106
                    ? (c >= 72096 && c <= 72103)
                    : c <= 72144)
                  : (c <= 72161 || c == 72163))
                : (c <= 72192 || (c < 72272
                  ? (c < 72250
                    ? (c >= 72203 && c <= 72242)
                    : c <= 72250)
                  : (c <= 72272 || (c >= 72284 && c <= 72329)))))
              : (c <= 72349 || (c < 72818
                ? (c < 72714
                  ? (c < 72704
                    ? (c >= 72368 && c <= 72440)
                    : c <= 72712)
                  : (c <= 72750 || c == 72768))
                : (c <= 72847 || (c < 72971
                  ? (c < 72968
                    ? (c >= 72960 && c <= 72966)
                    : c <= 72969)
                  : (c <= 73008 || c == 73030))))))))
          : (c <= 73061 || (c < 93952
            ? (c < 82944
              ? (c < 73728
                ? (c < 73112
                  ? (c < 73066
                    ? (c >= 73063 && c <= 73064)
                    : c <= 73097)
                  : (c <= 73112 || (c < 73648
                    ? (c >= 73440 && c <= 73458)
                    : c <= 73648)))
                : (c <= 74649 || (c < 77712
                  ? (c < 74880
                    ? (c >= 74752 && c <= 74862)
                    : c <= 75075)
                  : (c <= 77808 || (c >= 77824 && c <= 78894)))))
              : (c <= 83526 || (c < 92928
                ? (c < 92784
                  ? (c < 92736
                    ? (c >= 92160 && c <= 92728)
                    : c <= 92766)
                  : (c <= 92862 || (c >= 92880 && c <= 92909)))
                : (c <= 92975 || (c < 93053
                  ? (c < 93027
                    ? (c >= 92992 && c <= 92995)
                    : c <= 93047)
                  : (c <= 93071 || (c >= 93760 && c <= 93823)))))))
            : (c <= 94026 || (c < 110589
              ? (c < 94208
                ? (c < 94176
                  ? (c < 94099
                    ? c == 94032
                    : c <= 94111)
                  : (c <= 94177 || c == 94179))
                : (c <= 100343 || (c < 110576
                  ? (c < 101632
                    ? (c >= 100352 && c <= 101589)
                    : c <= 101640)
                  : (c <= 110579 || (c >= 110581 && c <= 110587)))))
              : (c <= 110590 || (c < 113664
                ? (c < 110948
                  ? (c < 110928
                    ? (c >= 110592 && c <= 110882)
                    : c <= 110930)
                  : (c <= 110951 || (c >= 110960 && c <= 111355)))
                : (c <= 113770 || (c < 113808
                  ? (c < 113792
                    ? (c >= 113776 && c <= 113788)
                    : c <= 113800)
                  : (c <= 113817 || (c >= 119808 && c <= 119892)))))))))))
        : (c <= 119964 || (c < 125259
          ? (c < 120572
            ? (c < 120086
              ? (c < 119995
                ? (c < 119973
                  ? (c < 119970
                    ? (c >= 119966 && c <= 119967)
                    : c <= 119970)
                  : (c <= 119974 || (c < 119982
                    ? (c >= 119977 && c <= 119980)
                    : c <= 119993)))
                : (c <= 119995 || (c < 120071
                  ? (c < 120005
                    ? (c >= 119997 && c <= 120003)
                    : c <= 120069)
                  : (c <= 120074 || (c >= 120077 && c <= 120084)))))
              : (c <= 120092 || (c < 120138
                ? (c < 120128
                  ? (c < 120123
                    ? (c >= 120094 && c <= 120121)
                    : c <= 120126)
                  : (c <= 120132 || c == 120134))
                : (c <= 120144 || (c < 120514
                  ? (c < 120488
                    ? (c >= 120146 && c <= 120485)
                    : c <= 120512)
                  : (c <= 120538 || (c >= 120540 && c <= 120570)))))))
            : (c <= 120596 || (c < 123191
              ? (c < 120714
                ? (c < 120656
                  ? (c < 120630
                    ? (c >= 120598 && c <= 120628)
                    : c <= 120654)
                  : (c <= 120686 || (c >= 120688 && c <= 120712)))
                : (c <= 120744 || (c < 122624
                  ? (c < 120772
                    ? (c >= 120746 && c <= 120770)
                    : c <= 120779)
                  : (c <= 122654 || (c >= 123136 && c <= 123180)))))
              : (c <= 123197 || (c < 124904
                ? (c < 123584
                  ? (c < 123536
                    ? c == 123214
                    : c <= 123565)
                  : (c <= 123627 || (c >= 124896 && c <= 124902)))
                : (c <= 124907 || (c < 124928
                  ? (c < 124912
                    ? (c >= 124909 && c <= 124910)
                    : c <= 124926)
                  : (c <= 125124 || (c >= 125184 && c <= 125251)))))))))
          : (c <= 125259 || (c < 126559
            ? (c < 126535
              ? (c < 126505
                ? (c < 126497
                  ? (c < 126469
                    ? (c >= 126464 && c <= 126467)
                    : c <= 126495)
                  : (c <= 126498 || (c < 126503
                    ? c == 126500
                    : c <= 126503)))
                : (c <= 126514 || (c < 126523
                  ? (c < 126521
                    ? (c >= 126516 && c <= 126519)
                    : c <= 126521)
                  : (c <= 126523 || c == 126530))))
              : (c <= 126535 || (c < 126548
                ? (c < 126541
                  ? (c < 126539
                    ? c == 126537
                    : c <= 126539)
                  : (c <= 126543 || (c >= 126545 && c <= 126546)))
                : (c <= 126548 || (c < 126555
                  ? (c < 126553
                    ? c == 126551
                    : c <= 126553)
                  : (c <= 126555 || c == 126557))))))
            : (c <= 126559 || (c < 126625
              ? (c < 126580
                ? (c < 126567
                  ? (c < 126564
                    ? (c >= 126561 && c <= 126562)
                    : c <= 126564)
                  : (c <= 126570 || (c >= 126572 && c <= 126578)))
                : (c <= 126583 || (c < 126592
                  ? (c < 126590
                    ? (c >= 126585 && c <= 126588)
                    : c <= 126590)
                  : (c <= 126601 || (c >= 126603 && c <= 126619)))))
              : (c <= 126627 || (c < 177984
                ? (c < 131072
                  ? (c < 126635
                    ? (c >= 126629 && c <= 126633)
                    : c <= 126651)
                  : (c <= 173791 || (c >= 173824 && c <= 177976)))
                : (c <= 178205 || (c < 194560
                  ? (c < 183984
                    ? (c >= 178208 && c <= 183969)
                    : c <= 191456)
                  : (c <= 195101 || (c >= 196608 && c <= 201546)))))))))))))))));
}

static inline bool aux_sym__component_token1_character_set_4(int32_t c) {
  return (c < 43616
    ? (c < 3782
      ? (c < 2748
        ? (c < 2045
          ? (c < 1015
            ? (c < 710
              ? (c < 181
                ? (c < '_'
                  ? (c < 'A'
                    ? (c >= '0' && c <= '9')
                    : c <= 'Z')
                  : (c <= '_' || (c < 170
                    ? (c >= 'a' && c <= 'z')
                    : c <= 170)))
                : (c <= 181 || (c < 192
                  ? (c < 186
                    ? c == 183
                    : c <= 186)
                  : (c <= 214 || (c < 248
                    ? (c >= 216 && c <= 246)
                    : c <= 705)))))
              : (c <= 721 || (c < 891
                ? (c < 750
                  ? (c < 748
                    ? (c >= 736 && c <= 740)
                    : c <= 748)
                  : (c <= 750 || (c < 886
                    ? (c >= 768 && c <= 884)
                    : c <= 887)))
                : (c <= 893 || (c < 908
                  ? (c < 902
                    ? c == 895
                    : c <= 906)
                  : (c <= 908 || (c < 931
                    ? (c >= 910 && c <= 929)
                    : c <= 1013)))))))
            : (c <= 1153 || (c < 1519
              ? (c < 1425
                ? (c < 1329
                  ? (c < 1162
                    ? (c >= 1155 && c <= 1159)
                    : c <= 1327)
                  : (c <= 1366 || (c < 1376
                    ? c == 1369
                    : c <= 1416)))
                : (c <= 1469 || (c < 1476
                  ? (c < 1473
                    ? c == 1471
                    : c <= 1474)
                  : (c <= 1477 || (c < 1488
                    ? c == 1479
                    : c <= 1514)))))
              : (c <= 1522 || (c < 1770
                ? (c < 1646
                  ? (c < 1568
                    ? (c >= 1552 && c <= 1562)
                    : c <= 1641)
                  : (c <= 1747 || (c < 1759
                    ? (c >= 1749 && c <= 1756)
                    : c <= 1768)))
                : (c <= 1788 || (c < 1869
                  ? (c < 1808
                    ? c == 1791
                    : c <= 1866)
                  : (c <= 1969 || (c < 2042
                    ? (c >= 1984 && c <= 2037)
                    : c <= 2042)))))))))
          : (c <= 2045 || (c < 2558
            ? (c < 2451
              ? (c < 2200
                ? (c < 2144
                  ? (c < 2112
                    ? (c >= 2048 && c <= 2093)
                    : c <= 2139)
                  : (c <= 2154 || (c < 2185
                    ? (c >= 2160 && c <= 2183)
                    : c <= 2190)))
                : (c <= 2273 || (c < 2417
                  ? (c < 2406
                    ? (c >= 2275 && c <= 2403)
                    : c <= 2415)
                  : (c <= 2435 || (c < 2447
                    ? (c >= 2437 && c <= 2444)
                    : c <= 2448)))))
              : (c <= 2472 || (c < 2507
                ? (c < 2486
                  ? (c < 2482
                    ? (c >= 2474 && c <= 2480)
                    : c <= 2482)
                  : (c <= 2489 || (c < 2503
                    ? (c >= 2492 && c <= 2500)
                    : c <= 2504)))
                : (c <= 2510 || (c < 2527
                  ? (c < 2524
                    ? c == 2519
                    : c <= 2525)
                  : (c <= 2531 || (c < 2556
                    ? (c >= 2534 && c <= 2545)
                    : c <= 2556)))))))
            : (c <= 2558 || (c < 2635
              ? (c < 2610
                ? (c < 2575
                  ? (c < 2565
                    ? (c >= 2561 && c <= 2563)
                    : c <= 2570)
                  : (c <= 2576 || (c < 2602
                    ? (c >= 2579 && c <= 2600)
                    : c <= 2608)))
                : (c <= 2611 || (c < 2620
                  ? (c < 2616
                    ? (c >= 2613 && c <= 2614)
                    : c <= 2617)
                  : (c <= 2620 || (c < 2631
                    ? (c >= 2622 && c <= 2626)
                    : c <= 2632)))))
              : (c <= 2637 || (c < 2693
                ? (c < 2654
                  ? (c < 2649
                    ? c == 2641
                    : c <= 2652)
                  : (c <= 2654 || (c < 2689
                    ? (c >= 2662 && c <= 2677)
                    : c <= 2691)))
                : (c <= 2701 || (c < 2730
                  ? (c < 2707
                    ? (c >= 2703 && c <= 2705)
                    : c <= 2728)
                  : (c <= 2736 || (c < 2741
                    ? (c >= 2738 && c <= 2739)
                    : c <= 2745)))))))))))
        : (c <= 2757 || (c < 3168
          ? (c < 2958
            ? (c < 2866
              ? (c < 2809
                ? (c < 2768
                  ? (c < 2763
                    ? (c >= 2759 && c <= 2761)
                    : c <= 2765)
                  : (c <= 2768 || (c < 2790
                    ? (c >= 2784 && c <= 2787)
                    : c <= 2799)))
                : (c <= 2815 || (c < 2831
                  ? (c < 2821
                    ? (c >= 2817 && c <= 2819)
                    : c <= 2828)
                  : (c <= 2832 || (c < 2858
                    ? (c >= 2835 && c <= 2856)
                    : c <= 2864)))))
              : (c <= 2867 || (c < 2908
                ? (c < 2887
                  ? (c < 2876
                    ? (c >= 2869 && c <= 2873)
                    : c <= 2884)
                  : (c <= 2888 || (c < 2901
                    ? (c >= 2891 && c <= 2893)
                    : c <= 2903)))
                : (c <= 2909 || (c < 2929
                  ? (c < 2918
                    ? (c >= 2911 && c <= 2915)
                    : c <= 2927)
                  : (c <= 2929 || (c < 2949
                    ? (c >= 2946 && c <= 2947)
                    : c <= 2954)))))))
            : (c <= 2960 || (c < 3031
              ? (c < 2984
                ? (c < 2972
                  ? (c < 2969
                    ? (c >= 2962 && c <= 2965)
                    : c <= 2970)
                  : (c <= 2972 || (c < 2979
                    ? (c >= 2974 && c <= 2975)
                    : c <= 2980)))
                : (c <= 2986 || (c < 3014
                  ? (c < 3006
                    ? (c >= 2990 && c <= 3001)
                    : c <= 3010)
                  : (c <= 3016 || (c < 3024
                    ? (c >= 3018 && c <= 3021)
                    : c <= 3024)))))
              : (c <= 3031 || (c < 3132
                ? (c < 3086
                  ? (c < 3072
                    ? (c >= 3046 && c <= 3055)
                    : c <= 3084)
                  : (c <= 3088 || (c < 3114
                    ? (c >= 3090 && c <= 3112)
                    : c <= 3129)))
                : (c <= 3140 || (c < 3157
                  ? (c < 3146
                    ? (c >= 3142 && c <= 3144)
                    : c <= 3149)
                  : (c <= 3158 || (c < 3165
                    ? (c >= 3160 && c <= 3162)
                    : c <= 3165)))))))))
          : (c <= 3171 || (c < 3450
            ? (c < 3293
              ? (c < 3242
                ? (c < 3205
                  ? (c < 3200
                    ? (c >= 3174 && c <= 3183)
                    : c <= 3203)
                  : (c <= 3212 || (c < 3218
                    ? (c >= 3214 && c <= 3216)
                    : c <= 3240)))
                : (c <= 3251 || (c < 3270
                  ? (c < 3260
                    ? (c >= 3253 && c <= 3257)
                    : c <= 3268)
                  : (c <= 3272 || (c < 3285
                    ? (c >= 3274 && c <= 3277)
                    : c <= 3286)))))
              : (c <= 3294 || (c < 3346
                ? (c < 3313
                  ? (c < 3302
                    ? (c >= 3296 && c <= 3299)
                    : c <= 3311)
                  : (c <= 3314 || (c < 3342
                    ? (c >= 3328 && c <= 3340)
                    : c <= 3344)))
                : (c <= 3396 || (c < 3412
                  ? (c < 3402
                    ? (c >= 3398 && c <= 3400)
                    : c <= 3406)
                  : (c <= 3415 || (c < 3430
                    ? (c >= 3423 && c <= 3427)
                    : c <= 3439)))))))
            : (c <= 3455 || (c < 3570
              ? (c < 3520
                ? (c < 3482
                  ? (c < 3461
                    ? (c >= 3457 && c <= 3459)
                    : c <= 3478)
                  : (c <= 3505 || (c < 3517
                    ? (c >= 3507 && c <= 3515)
                    : c <= 3517)))
                : (c <= 3526 || (c < 3542
                  ? (c < 3535
                    ? c == 3530
                    : c <= 3540)
                  : (c <= 3542 || (c < 3558
                    ? (c >= 3544 && c <= 3551)
                    : c <= 3567)))))
              : (c <= 3571 || (c < 3718
                ? (c < 3664
                  ? (c < 3648
                    ? (c >= 3585 && c <= 3642)
                    : c <= 3662)
                  : (c <= 3673 || (c < 3716
                    ? (c >= 3713 && c <= 3714)
                    : c <= 3716)))
                : (c <= 3722 || (c < 3751
                  ? (c < 3749
                    ? (c >= 3724 && c <= 3747)
                    : c <= 3749)
                  : (c <= 3773 || (c >= 3776 && c <= 3780)))))))))))))
      : (c <= 3782 || (c < 8025
        ? (c < 5888
          ? (c < 4688
            ? (c < 3953
              ? (c < 3872
                ? (c < 3804
                  ? (c < 3792
                    ? (c >= 3784 && c <= 3789)
                    : c <= 3801)
                  : (c <= 3807 || (c < 3864
                    ? c == 3840
                    : c <= 3865)))
                : (c <= 3881 || (c < 3897
                  ? (c < 3895
                    ? c == 3893
                    : c <= 3895)
                  : (c <= 3897 || (c < 3913
                    ? (c >= 3902 && c <= 3911)
                    : c <= 3948)))))
              : (c <= 3972 || (c < 4256
                ? (c < 4038
                  ? (c < 3993
                    ? (c >= 3974 && c <= 3991)
                    : c <= 4028)
                  : (c <= 4038 || (c < 4176
                    ? (c >= 4096 && c <= 4169)
                    : c <= 4253)))
                : (c <= 4293 || (c < 4304
                  ? (c < 4301
                    ? c == 4295
                    : c <= 4301)
                  : (c <= 4346 || (c < 4682
                    ? (c >= 4348 && c <= 4680)
                    : c <= 4685)))))))
            : (c <= 4694 || (c < 4882
              ? (c < 4786
                ? (c < 4704
                  ? (c < 4698
                    ? c == 4696
                    : c <= 4701)
                  : (c <= 4744 || (c < 4752
                    ? (c >= 4746 && c <= 4749)
                    : c <= 4784)))
                : (c <= 4789 || (c < 4802
                  ? (c < 4800
                    ? (c >= 4792 && c <= 4798)
                    : c <= 4800)
                  : (c <= 4805 || (c < 4824
                    ? (c >= 4808 && c <= 4822)
                    : c <= 4880)))))
              : (c <= 4885 || (c < 5112
                ? (c < 4969
                  ? (c < 4957
                    ? (c >= 4888 && c <= 4954)
                    : c <= 4959)
                  : (c <= 4977 || (c < 5024
                    ? (c >= 4992 && c <= 5007)
                    : c <= 5109)))
                : (c <= 5117 || (c < 5761
                  ? (c < 5743
                    ? (c >= 5121 && c <= 5740)
                    : c <= 5759)
                  : (c <= 5786 || (c < 5870
                    ? (c >= 5792 && c <= 5866)
                    : c <= 5880)))))))))
          : (c <= 5909 || (c < 6688
            ? (c < 6176
              ? (c < 6016
                ? (c < 5984
                  ? (c < 5952
                    ? (c >= 5919 && c <= 5940)
                    : c <= 5971)
                  : (c <= 5996 || (c < 6002
                    ? (c >= 5998 && c <= 6000)
                    : c <= 6003)))
                : (c <= 6099 || (c < 6112
                  ? (c < 6108
                    ? c == 6103
                    : c <= 6109)
                  : (c <= 6121 || (c < 6159
                    ? (c >= 6155 && c <= 6157)
                    : c <= 6169)))))
              : (c <= 6264 || (c < 6470
                ? (c < 6400
                  ? (c < 6320
                    ? (c >= 6272 && c <= 6314)
                    : c <= 6389)
                  : (c <= 6430 || (c < 6448
                    ? (c >= 6432 && c <= 6443)
                    : c <= 6459)))
                : (c <= 6509 || (c < 6576
                  ? (c < 6528
                    ? (c >= 6512 && c <= 6516)
                    : c <= 6571)
                  : (c <= 6601 || (c < 6656
                    ? (c >= 6608 && c <= 6618)
                    : c <= 6683)))))))
            : (c <= 6750 || (c < 7232
              ? (c < 6847
                ? (c < 6800
                  ? (c < 6783
                    ? (c >= 6752 && c <= 6780)
                    : c <= 6793)
                  : (c <= 6809 || (c < 6832
                    ? c == 6823
                    : c <= 6845)))
                : (c <= 6862 || (c < 7019
                  ? (c < 6992
                    ? (c >= 6912 && c <= 6988)
                    : c <= 7001)
                  : (c <= 7027 || (c < 7168
                    ? (c >= 7040 && c <= 7155)
                    : c <= 7223)))))
              : (c <= 7241 || (c < 7380
                ? (c < 7312
                  ? (c < 7296
                    ? (c >= 7245 && c <= 7293)
                    : c <= 7304)
                  : (c <= 7354 || (c < 7376
                    ? (c >= 7357 && c <= 7359)
                    : c <= 7378)))
                : (c <= 7418 || (c < 7968
                  ? (c < 7960
                    ? (c >= 7424 && c <= 7957)
                    : c <= 7965)
                  : (c <= 8005 || (c < 8016
                    ? (c >= 8008 && c <= 8013)
                    : c <= 8023)))))))))))
        : (c <= 8025 || (c < 11720
          ? (c < 8458
            ? (c < 8178
              ? (c < 8126
                ? (c < 8031
                  ? (c < 8029
                    ? c == 8027
                    : c <= 8029)
                  : (c <= 8061 || (c < 8118
                    ? (c >= 8064 && c <= 8116)
                    : c <= 8124)))
                : (c <= 8126 || (c < 8144
                  ? (c < 8134
                    ? (c >= 8130 && c <= 8132)
                    : c <= 8140)
                  : (c <= 8147 || (c < 8160
                    ? (c >= 8150 && c <= 8155)
                    : c <= 8172)))))
              : (c <= 8180 || (c < 8336
                ? (c < 8276
                  ? (c < 8255
                    ? (c >= 8182 && c <= 8188)
                    : c <= 8256)
                  : (c <= 8276 || (c < 8319
                    ? c == 8305
                    : c <= 8319)))
                : (c <= 8348 || (c < 8421
                  ? (c < 8417
                    ? (c >= 8400 && c <= 8412)
                    : c <= 8417)
                  : (c <= 8432 || (c < 8455
                    ? c == 8450
                    : c <= 8455)))))))
            : (c <= 8467 || (c < 11499
              ? (c < 8490
                ? (c < 8484
                  ? (c < 8472
                    ? c == 8469
                    : c <= 8477)
                  : (c <= 8484 || (c < 8488
                    ? c == 8486
                    : c <= 8488)))
                : (c <= 8505 || (c < 8526
                  ? (c < 8517
                    ? (c >= 8508 && c <= 8511)
                    : c <= 8521)
                  : (c <= 8526 || (c < 11264
                    ? (c >= 8544 && c <= 8584)
                    : c <= 11492)))))
              : (c <= 11507 || (c < 11647
                ? (c < 11565
                  ? (c < 11559
                    ? (c >= 11520 && c <= 11557)
                    : c <= 11559)
                  : (c <= 11565 || (c < 11631
                    ? (c >= 11568 && c <= 11623)
                    : c <= 11631)))
                : (c <= 11670 || (c < 11696
                  ? (c < 11688
                    ? (c >= 11680 && c <= 11686)
                    : c <= 11694)
                  : (c <= 11702 || (c < 11712
                    ? (c >= 11704 && c <= 11710)
                    : c <= 11718)))))))))
          : (c <= 11726 || (c < 42623
            ? (c < 12540
              ? (c < 12337
                ? (c < 11744
                  ? (c < 11736
                    ? (c >= 11728 && c <= 11734)
                    : c <= 11742)
                  : (c <= 11775 || (c < 12321
                    ? (c >= 12293 && c <= 12295)
                    : c <= 12335)))
                : (c <= 12341 || (c < 12441
                  ? (c < 12353
                    ? (c >= 12344 && c <= 12348)
                    : c <= 12438)
                  : (c <= 12442 || (c < 12449
                    ? (c >= 12445 && c <= 12447)
                    : c <= 12538)))))
              : (c <= 12543 || (c < 19968
                ? (c < 12704
                  ? (c < 12593
                    ? (c >= 12549 && c <= 12591)
                    : c <= 12686)
                  : (c <= 12735 || (c < 13312
                    ? (c >= 12784 && c <= 12799)
                    : c <= 19903)))
                : (c <= 42124 || (c < 42512
                  ? (c < 42240
                    ? (c >= 42192 && c <= 42237)
                    : c <= 42508)
                  : (c <= 42539 || (c < 42612
                    ? (c >= 42560 && c <= 42607)
                    : c <= 42621)))))))
            : (c <= 42737 || (c < 43232
              ? (c < 42965
                ? (c < 42891
                  ? (c < 42786
                    ? (c >= 42775 && c <= 42783)
                    : c <= 42888)
                  : (c <= 42954 || (c < 42963
                    ? (c >= 42960 && c <= 42961)
                    : c <= 42963)))
                : (c <= 42969 || (c < 43072
                  ? (c < 43052
                    ? (c >= 42994 && c <= 43047)
                    : c <= 43052)
                  : (c <= 43123 || (c < 43216
                    ? (c >= 43136 && c <= 43205)
                    : c <= 43225)))))
              : (c <= 43255 || (c < 43471
                ? (c < 43312
                  ? (c < 43261
                    ? c == 43259
                    : c <= 43309)
                  : (c <= 43347 || (c < 43392
                    ? (c >= 43360 && c <= 43388)
                    : c <= 43456)))
                : (c <= 43481 || (c < 43584
                  ? (c < 43520
                    ? (c >= 43488 && c <= 43518)
                    : c <= 43574)
                  : (c <= 43597 || (c >= 43600 && c <= 43609)))))))))))))))
    : (c <= 43638 || (c < 71453
      ? (c < 67639
        ? (c < 65345
          ? (c < 64312
            ? (c < 43888
              ? (c < 43785
                ? (c < 43744
                  ? (c < 43739
                    ? (c >= 43642 && c <= 43714)
                    : c <= 43741)
                  : (c <= 43759 || (c < 43777
                    ? (c >= 43762 && c <= 43766)
                    : c <= 43782)))
                : (c <= 43790 || (c < 43816
                  ? (c < 43808
                    ? (c >= 43793 && c <= 43798)
                    : c <= 43814)
                  : (c <= 43822 || (c < 43868
                    ? (c >= 43824 && c <= 43866)
                    : c <= 43881)))))
              : (c <= 44010 || (c < 63744
                ? (c < 44032
                  ? (c < 44016
                    ? (c >= 44012 && c <= 44013)
                    : c <= 44025)
                  : (c <= 55203 || (c < 55243
                    ? (c >= 55216 && c <= 55238)
                    : c <= 55291)))
                : (c <= 64109 || (c < 64275
                  ? (c < 64256
                    ? (c >= 64112 && c <= 64217)
                    : c <= 64262)
                  : (c <= 64279 || (c < 64298
                    ? (c >= 64285 && c <= 64296)
                    : c <= 64310)))))))
            : (c <= 64316 || (c < 65075
              ? (c < 64612
                ? (c < 64323
                  ? (c < 64320
                    ? c == 64318
                    : c <= 64321)
                  : (c <= 64324 || (c < 64467
                    ? (c >= 64326 && c <= 64433)
                    : c <= 64605)))
                : (c <= 64829 || (c < 65008
                  ? (c < 64914
                    ? (c >= 64848 && c <= 64911)
                    : c <= 64967)
                  : (c <= 65017 || (c < 65056
                    ? (c >= 65024 && c <= 65039)
                    : c <= 65071)))))
              : (c <= 65076 || (c < 65147
                ? (c < 65139
                  ? (c < 65137
                    ? (c >= 65101 && c <= 65103)
                    : c <= 65137)
                  : (c <= 65139 || (c < 65145
                    ? c == 65143
                    : c <= 65145)))
                : (c <= 65147 || (c < 65296
                  ? (c < 65151
                    ? c == 65149
                    : c <= 65276)
                  : (c <= 65305 || (c < 65343
                    ? (c >= 65313 && c <= 65338)
                    : c <= 65343)))))))))
          : (c <= 65370 || (c < 66513
            ? (c < 65664
              ? (c < 65536
                ? (c < 65482
                  ? (c < 65474
                    ? (c >= 65382 && c <= 65470)
                    : c <= 65479)
                  : (c <= 65487 || (c < 65498
                    ? (c >= 65490 && c <= 65495)
                    : c <= 65500)))
                : (c <= 65547 || (c < 65596
                  ? (c < 65576
                    ? (c >= 65549 && c <= 65574)
                    : c <= 65594)
                  : (c <= 65597 || (c < 65616
                    ? (c >= 65599 && c <= 65613)
                    : c <= 65629)))))
              : (c <= 65786 || (c < 66304
                ? (c < 66176
                  ? (c < 66045
                    ? (c >= 65856 && c <= 65908)
                    : c <= 66045)
                  : (c <= 66204 || (c < 66272
                    ? (c >= 66208 && c <= 66256)
                    : c <= 66272)))
                : (c <= 66335 || (c < 66432
                  ? (c < 66384
                    ? (c >= 66349 && c <= 66378)
                    : c <= 66426)
                  : (c <= 66461 || (c < 66504
                    ? (c >= 66464 && c <= 66499)
                    : c <= 66511)))))))
            : (c <= 66517 || (c < 66979
              ? (c < 66864
                ? (c < 66736
                  ? (c < 66720
                    ? (c >= 66560 && c <= 66717)
                    : c <= 66729)
                  : (c <= 66771 || (c < 66816
                    ? (c >= 66776 && c <= 66811)
                    : c <= 66855)))
                : (c <= 66915 || (c < 66956
                  ? (c < 66940
                    ? (c >= 66928 && c <= 66938)
                    : c <= 66954)
                  : (c <= 66962 || (c < 66967
                    ? (c >= 66964 && c <= 66965)
                    : c <= 66977)))))
              : (c <= 66993 || (c < 67456
                ? (c < 67072
                  ? (c < 67003
                    ? (c >= 66995 && c <= 67001)
                    : c <= 67004)
                  : (c <= 67382 || (c < 67424
                    ? (c >= 67392 && c <= 67413)
                    : c <= 67431)))
                : (c <= 67461 || (c < 67584
                  ? (c < 67506
                    ? (c >= 67463 && c <= 67504)
                    : c <= 67514)
                  : (c <= 67589 || (c < 67594
                    ? c == 67592
                    : c <= 67637)))))))))))
        : (c <= 67640 || (c < 69956
          ? (c < 68448
            ? (c < 68101
              ? (c < 67828
                ? (c < 67680
                  ? (c < 67647
                    ? c == 67644
                    : c <= 67669)
                  : (c <= 67702 || (c < 67808
                    ? (c >= 67712 && c <= 67742)
                    : c <= 67826)))
                : (c <= 67829 || (c < 67968
                  ? (c < 67872
                    ? (c >= 67840 && c <= 67861)
                    : c <= 67897)
                  : (c <= 68023 || (c < 68096
                    ? (c >= 68030 && c <= 68031)
                    : c <= 68099)))))
              : (c <= 68102 || (c < 68192
                ? (c < 68121
                  ? (c < 68117
                    ? (c >= 68108 && c <= 68115)
                    : c <= 68119)
                  : (c <= 68149 || (c < 68159
                    ? (c >= 68152 && c <= 68154)
                    : c <= 68159)))
                : (c <= 68220 || (c < 68297
                  ? (c < 68288
                    ? (c >= 68224 && c <= 68252)
                    : c <= 68295)
                  : (c <= 68326 || (c < 68416
                    ? (c >= 68352 && c <= 68405)
                    : c <= 68437)))))))
            : (c <= 68466 || (c < 69424
              ? (c < 68912
                ? (c < 68736
                  ? (c < 68608
                    ? (c >= 68480 && c <= 68497)
                    : c <= 68680)
                  : (c <= 68786 || (c < 68864
                    ? (c >= 68800 && c <= 68850)
                    : c <= 68903)))
                : (c <= 68921 || (c < 69296
                  ? (c < 69291
                    ? (c >= 69248 && c <= 69289)
                    : c <= 69292)
                  : (c <= 69297 || (c < 69415
                    ? (c >= 69376 && c <= 69404)
                    : c <= 69415)))))
              : (c <= 69456 || (c < 69759
                ? (c < 69600
                  ? (c < 69552
                    ? (c >= 69488 && c <= 69509)
                    : c <= 69572)
                  : (c <= 69622 || (c < 69734
                    ? (c >= 69632 && c <= 69702)
                    : c <= 69749)))
                : (c <= 69818 || (c < 69872
                  ? (c < 69840
                    ? c == 69826
                    : c <= 69864)
                  : (c <= 69881 || (c < 69942
                    ? (c >= 69888 && c <= 69940)
                    : c <= 69951)))))))))
          : (c <= 69959 || (c < 70459
            ? (c < 70282
              ? (c < 70108
                ? (c < 70016
                  ? (c < 70006
                    ? (c >= 69968 && c <= 70003)
                    : c <= 70006)
                  : (c <= 70084 || (c < 70094
                    ? (c >= 70089 && c <= 70092)
                    : c <= 70106)))
                : (c <= 70108 || (c < 70206
                  ? (c < 70163
                    ? (c >= 70144 && c <= 70161)
                    : c <= 70199)
                  : (c <= 70206 || (c < 70280
                    ? (c >= 70272 && c <= 70278)
                    : c <= 70280)))))
              : (c <= 70285 || (c < 70405
                ? (c < 70320
                  ? (c < 70303
                    ? (c >= 70287 && c <= 70301)
                    : c <= 70312)
                  : (c <= 70378 || (c < 70400
                    ? (c >= 70384 && c <= 70393)
                    : c <= 70403)))
                : (c <= 70412 || (c < 70442
                  ? (c < 70419
                    ? (c >= 70415 && c <= 70416)
                    : c <= 70440)
                  : (c <= 70448 || (c < 70453
                    ? (c >= 70450 && c <= 70451)
                    : c <= 70457)))))))
            : (c <= 70468 || (c < 70855
              ? (c < 70502
                ? (c < 70480
                  ? (c < 70475
                    ? (c >= 70471 && c <= 70472)
                    : c <= 70477)
                  : (c <= 70480 || (c < 70493
                    ? c == 70487
                    : c <= 70499)))
                : (c <= 70508 || (c < 70736
                  ? (c < 70656
                    ? (c >= 70512 && c <= 70516)
                    : c <= 70730)
                  : (c <= 70745 || (c < 70784
                    ? (c >= 70750 && c <= 70753)
                    : c <= 70853)))))
              : (c <= 70855 || (c < 71236
                ? (c < 71096
                  ? (c < 71040
                    ? (c >= 70864 && c <= 70873)
                    : c <= 71093)
                  : (c <= 71104 || (c < 71168
                    ? (c >= 71128 && c <= 71133)
                    : c <= 71232)))
                : (c <= 71236 || (c < 71360
                  ? (c < 71296
                    ? (c >= 71248 && c <= 71257)
                    : c <= 71352)
                  : (c <= 71369 || (c >= 71424 && c <= 71450)))))))))))))
      : (c <= 71467 || (c < 119973
        ? (c < 77824
          ? (c < 72760
            ? (c < 72016
              ? (c < 71945
                ? (c < 71680
                  ? (c < 71488
                    ? (c >= 71472 && c <= 71481)
                    : c <= 71494)
                  : (c <= 71738 || (c < 71935
                    ? (c >= 71840 && c <= 71913)
                    : c <= 71942)))
                : (c <= 71945 || (c < 71960
                  ? (c < 71957
                    ? (c >= 71948 && c <= 71955)
                    : c <= 71958)
                  : (c <= 71989 || (c < 71995
                    ? (c >= 71991 && c <= 71992)
                    : c <= 72003)))))
              : (c <= 72025 || (c < 72263
                ? (c < 72154
                  ? (c < 72106
                    ? (c >= 72096 && c <= 72103)
                    : c <= 72151)
                  : (c <= 72161 || (c < 72192
                    ? (c >= 72163 && c <= 72164)
                    : c <= 72254)))
                : (c <= 72263 || (c < 72368
                  ? (c < 72349
                    ? (c >= 72272 && c <= 72345)
                    : c <= 72349)
                  : (c <= 72440 || (c < 72714
                    ? (c >= 72704 && c <= 72712)
                    : c <= 72758)))))))
            : (c <= 72768 || (c < 73056
              ? (c < 72968
                ? (c < 72850
                  ? (c < 72818
                    ? (c >= 72784 && c <= 72793)
                    : c <= 72847)
                  : (c <= 72871 || (c < 72960
                    ? (c >= 72873 && c <= 72886)
                    : c <= 72966)))
                : (c <= 72969 || (c < 73020
                  ? (c < 73018
                    ? (c >= 72971 && c <= 73014)
                    : c <= 73018)
                  : (c <= 73021 || (c < 73040
                    ? (c >= 73023 && c <= 73031)
                    : c <= 73049)))))
              : (c <= 73061 || (c < 73440
                ? (c < 73104
                  ? (c < 73066
                    ? (c >= 73063 && c <= 73064)
                    : c <= 73102)
                  : (c <= 73105 || (c < 73120
                    ? (c >= 73107 && c <= 73112)
                    : c <= 73129)))
                : (c <= 73462 || (c < 74752
                  ? (c < 73728
                    ? c == 73648
                    : c <= 74649)
                  : (c <= 74862 || (c < 77712
                    ? (c >= 74880 && c <= 75075)
                    : c <= 77808)))))))))
          : (c <= 78894 || (c < 110576
            ? (c < 93027
              ? (c < 92864
                ? (c < 92736
                  ? (c < 92160
                    ? (c >= 82944 && c <= 83526)
                    : c <= 92728)
                  : (c <= 92766 || (c < 92784
                    ? (c >= 92768 && c <= 92777)
                    : c <= 92862)))
                : (c <= 92873 || (c < 92928
                  ? (c < 92912
                    ? (c >= 92880 && c <= 92909)
                    : c <= 92916)
                  : (c <= 92982 || (c < 93008
                    ? (c >= 92992 && c <= 92995)
                    : c <= 93017)))))
              : (c <= 93047 || (c < 94176
                ? (c < 93952
                  ? (c < 93760
                    ? (c >= 93053 && c <= 93071)
                    : c <= 93823)
                  : (c <= 94026 || (c < 94095
                    ? (c >= 94031 && c <= 94087)
                    : c <= 94111)))
                : (c <= 94177 || (c < 94208
                  ? (c < 94192
                    ? (c >= 94179 && c <= 94180)
                    : c <= 94193)
                  : (c <= 100343 || (c < 101632
                    ? (c >= 100352 && c <= 101589)
                    : c <= 101640)))))))
            : (c <= 110579 || (c < 118528
              ? (c < 110960
                ? (c < 110592
                  ? (c < 110589
                    ? (c >= 110581 && c <= 110587)
                    : c <= 110590)
                  : (c <= 110882 || (c < 110948
                    ? (c >= 110928 && c <= 110930)
                    : c <= 110951)))
                : (c <= 111355 || (c < 113792
                  ? (c < 113776
                    ? (c >= 113664 && c <= 113770)
                    : c <= 113788)
                  : (c <= 113800 || (c < 113821
                    ? (c >= 113808 && c <= 113817)
                    : c <= 113822)))))
              : (c <= 118573 || (c < 119210
                ? (c < 119149
                  ? (c < 119141
                    ? (c >= 118576 && c <= 118598)
                    : c <= 119145)
                  : (c <= 119154 || (c < 119173
                    ? (c >= 119163 && c <= 119170)
                    : c <= 119179)))
                : (c <= 119213 || (c < 119894
                  ? (c < 119808
                    ? (c >= 119362 && c <= 119364)
                    : c <= 119892)
                  : (c <= 119964 || (c < 119970
                    ? (c >= 119966 && c <= 119967)
                    : c <= 119970)))))))))))
        : (c <= 119974 || (c < 124912
          ? (c < 120746
            ? (c < 120134
              ? (c < 120071
                ? (c < 119995
                  ? (c < 119982
                    ? (c >= 119977 && c <= 119980)
                    : c <= 119993)
                  : (c <= 119995 || (c < 120005
                    ? (c >= 119997 && c <= 120003)
                    : c <= 120069)))
                : (c <= 120074 || (c < 120094
                  ? (c < 120086
                    ? (c >= 120077 && c <= 120084)
                    : c <= 120092)
                  : (c <= 120121 || (c < 120128
                    ? (c >= 120123 && c <= 120126)
                    : c <= 120132)))))
              : (c <= 120134 || (c < 120572
                ? (c < 120488
                  ? (c < 120146
                    ? (c >= 120138 && c <= 120144)
                    : c <= 120485)
                  : (c <= 120512 || (c < 120540
                    ? (c >= 120514 && c <= 120538)
                    : c <= 120570)))
                : (c <= 120596 || (c < 120656
                  ? (c < 120630
                    ? (c >= 120598 && c <= 120628)
                    : c <= 120654)
                  : (c <= 120686 || (c < 120714
                    ? (c >= 120688 && c <= 120712)
                    : c <= 120744)))))))
            : (c <= 120770 || (c < 122907
              ? (c < 121476
                ? (c < 121344
                  ? (c < 120782
                    ? (c >= 120772 && c <= 120779)
                    : c <= 120831)
                  : (c <= 121398 || (c < 121461
                    ? (c >= 121403 && c <= 121452)
                    : c <= 121461)))
                : (c <= 121476 || (c < 122624
                  ? (c < 121505
                    ? (c >= 121499 && c <= 121503)
                    : c <= 121519)
                  : (c <= 122654 || (c < 122888
                    ? (c >= 122880 && c <= 122886)
                    : c <= 122904)))))
              : (c <= 122913 || (c < 123214
                ? (c < 123136
                  ? (c < 122918
                    ? (c >= 122915 && c <= 122916)
                    : c <= 122922)
                  : (c <= 123180 || (c < 123200
                    ? (c >= 123184 && c <= 123197)
                    : c <= 123209)))
                : (c <= 123214 || (c < 124896
                  ? (c < 123584
                    ? (c >= 123536 && c <= 123566)
                    : c <= 123641)
                  : (c <= 124902 || (c < 124909
                    ? (c >= 124904 && c <= 124907)
                    : c <= 124910)))))))))
          : (c <= 124926 || (c < 126557
            ? (c < 126521
              ? (c < 126469
                ? (c < 125184
                  ? (c < 125136
                    ? (c >= 124928 && c <= 125124)
                    : c <= 125142)
                  : (c <= 125259 || (c < 126464
                    ? (c >= 125264 && c <= 125273)
                    : c <= 126467)))
                : (c <= 126495 || (c < 126503
                  ? (c < 126500
                    ? (c >= 126497 && c <= 126498)
                    : c <= 126500)
                  : (c <= 126503 || (c < 126516
                    ? (c >= 126505 && c <= 126514)
                    : c <= 126519)))))
              : (c <= 126521 || (c < 126541
                ? (c < 126535
                  ? (c < 126530
                    ? c == 126523
                    : c <= 126530)
                  : (c <= 126535 || (c < 126539
                    ? c == 126537
                    : c <= 126539)))
                : (c <= 126543 || (c < 126551
                  ? (c < 126548
                    ? (c >= 126545 && c <= 126546)
                    : c <= 126548)
                  : (c <= 126551 || (c < 126555
                    ? c == 126553
                    : c <= 126555)))))))
            : (c <= 126557 || (c < 126629
              ? (c < 126580
                ? (c < 126564
                  ? (c < 126561
                    ? c == 126559
                    : c <= 126562)
                  : (c <= 126564 || (c < 126572
                    ? (c >= 126567 && c <= 126570)
                    : c <= 126578)))
                : (c <= 126583 || (c < 126592
                  ? (c < 126590
                    ? (c >= 126585 && c <= 126588)
                    : c <= 126590)
                  : (c <= 126601 || (c < 126625
                    ? (c >= 126603 && c <= 126619)
                    : c <= 126627)))))
              : (c <= 126633 || (c < 178208
                ? (c < 131072
                  ? (c < 130032
                    ? (c >= 126635 && c <= 126651)
                    : c <= 130041)
                  : (c <= 173791 || (c < 177984
                    ? (c >= 173824 && c <= 177976)
                    : c <= 178205)))
                : (c <= 183969 || (c < 196608
                  ? (c < 194560
                    ? (c >= 183984 && c <= 191456)
                    : c <= 195101)
                  : (c <= 201546 || (c >= 917760 && c <= 917999)))))))))))))))));
}

static inline bool sym_number_literal_character_set_1(int32_t c) {
  return (c < 'b'
    ? (c < 'L'
      ? (c < 'D'
        ? c == 'B'
        : c <= 'F')
      : (c <= 'L' || (c < 'W'
        ? c == 'U'
        : c <= 'W')))
    : (c <= 'b' || (c < 'u'
      ? (c < 'l'
        ? (c >= 'd' && c <= 'f')
        : c <= 'l')
      : (c <= 'u' || c == 'w'))));
}

static inline bool sym_number_literal_character_set_2(int32_t c) {
  return (c < 'b'
    ? (c < 'L'
      ? (c < 'D'
        ? c == 'B'
        : (c <= 'D' || c == 'F'))
      : (c <= 'L' || (c < 'W'
        ? c == 'U'
        : c <= 'W')))
    : (c <= 'b' || (c < 'l'
      ? (c < 'f'
        ? c == 'd'
        : c <= 'f')
      : (c <= 'l' || (c < 'w'
        ? c == 'u'
        : c <= 'w')))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(242);
      if (lookahead == '"') ADVANCE(315);
      if (lookahead == '%') ADVANCE(262);
      if (lookahead == '\'') ADVANCE(339);
      if (lookahead == ')') ADVANCE(310);
      if (lookahead == '*') ADVANCE(273);
      if (lookahead == '+') ADVANCE(28);
      if (lookahead == '-') ADVANCE(289);
      if (lookahead == '.') ADVANCE(284);
      if (lookahead == '/') ADVANCE(357);
      if (lookahead == '0') ADVANCE(278);
      if (lookahead == ':') ADVANCE(251);
      if (lookahead == ';') ADVANCE(243);
      if (lookahead == '<') ADVANCE(272);
      if (lookahead == '>') ADVANCE(274);
      if (lookahead == 'L') ADVANCE(10);
      if (lookahead == 'U') ADVANCE(11);
      if (lookahead == '[') ADVANCE(253);
      if (lookahead == '\\') ADVANCE(340);
      if (lookahead == ']') ADVANCE(260);
      if (lookahead == '_') ADVANCE(16);
      if (lookahead == 'c') ADVANCE(148);
      if (lookahead == 'd') ADVANCE(71);
      if (lookahead == 'e') ADVANCE(220);
      if (lookahead == 'g') ADVANCE(124);
      if (lookahead == 'h') ADVANCE(83);
      if (lookahead == 'i') ADVANCE(136);
      if (lookahead == 'l') ADVANCE(36);
      if (lookahead == 'n') ADVANCE(34);
      if (lookahead == 'o') ADVANCE(214);
      if (lookahead == 'p') ADVANCE(37);
      if (lookahead == 'r') ADVANCE(72);
      if (lookahead == 's') ADVANCE(122);
      if (lookahead == 't') ADVANCE(149);
      if (lookahead == 'u') ADVANCE(13);
      if (lookahead == 'v') ADVANCE(86);
      if (lookahead == 'y') ADVANCE(38);
      if (lookahead == '{') ADVANCE(285);
      if (lookahead == '|') ADVANCE(252);
      if (lookahead == '}') ADVANCE(286);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(240)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(279);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(1)
      if (lookahead == '"') ADVANCE(33);
      if (lookahead == '%') ADVANCE(223);
      if (lookahead == '/') ADVANCE(247);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(246);
      if (lookahead != 0) ADVANCE(248);
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(9)
      if (lookahead == '"') ADVANCE(315);
      if (lookahead == '/') ADVANCE(316);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(317);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(318);
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(3)
      if (lookahead == '/') ADVANCE(342);
      if (lookahead == '\\') ADVANCE(340);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(343);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(341);
      END_STATE();
    case 4:
      if (lookahead == '\n') SKIP(4)
      if (lookahead == '/') ADVANCE(342);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(344);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(341);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(315);
      if (lookahead == '%') ADVANCE(263);
      if (lookahead == '\'') ADVANCE(339);
      if (lookahead == '.') ADVANCE(225);
      if (lookahead == '/') ADVANCE(17);
      if (lookahead == '0') ADVANCE(323);
      if (lookahead == ';') ADVANCE(243);
      if (lookahead == '<') ADVANCE(272);
      if (lookahead == 'L') ADVANCE(254);
      if (lookahead == 'U') ADVANCE(255);
      if (lookahead == '\\') ADVANCE(32);
      if (lookahead == '_') ADVANCE(258);
      if (lookahead == 'u') ADVANCE(256);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(28);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(325);
      if (aux_sym__component_token1_character_set_1(lookahead)) ADVANCE(259);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(315);
      if (lookahead == '%') ADVANCE(263);
      if (lookahead == '.') ADVANCE(283);
      if (lookahead == '/') ADVANCE(17);
      if (lookahead == ';') ADVANCE(243);
      if (lookahead == 'L') ADVANCE(254);
      if (lookahead == 'U') ADVANCE(255);
      if (lookahead == '\\') ADVANCE(32);
      if (aux_sym__component_token1_character_set_2(lookahead)) ADVANCE(259);
      if (lookahead == 'u') ADVANCE(256);
      if (lookahead == '{') ADVANCE(285);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(315);
      if (lookahead == '%') ADVANCE(92);
      if (lookahead == '\'') ADVANCE(339);
      if (lookahead == '/') ADVANCE(17);
      if (lookahead == ':') ADVANCE(250);
      if (lookahead == ';') ADVANCE(243);
      if (lookahead == '<') ADVANCE(272);
      if (lookahead == 'L') ADVANCE(254);
      if (lookahead == 'U') ADVANCE(255);
      if (lookahead == '[') ADVANCE(253);
      if (lookahead == '\\') ADVANCE(32);
      if (aux_sym__component_token1_character_set_2(lookahead)) ADVANCE(259);
      if (lookahead == 'u') ADVANCE(256);
      if (lookahead == '{') ADVANCE(285);
      if (lookahead == '|') ADVANCE(252);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      END_STATE();
    case 8:
      if (lookahead == '"') ADVANCE(315);
      if (lookahead == '%') ADVANCE(261);
      if (lookahead == '\'') ADVANCE(339);
      if (lookahead == ')') ADVANCE(310);
      if (lookahead == '.') ADVANCE(225);
      if (lookahead == '/') ADVANCE(17);
      if (lookahead == '0') ADVANCE(323);
      if (lookahead == ':') ADVANCE(250);
      if (lookahead == ';') ADVANCE(243);
      if (lookahead == '<') ADVANCE(272);
      if (lookahead == 'L') ADVANCE(254);
      if (lookahead == 'U') ADVANCE(255);
      if (lookahead == '[') ADVANCE(253);
      if (lookahead == '\\') ADVANCE(32);
      if (lookahead == '_') ADVANCE(258);
      if (lookahead == 'u') ADVANCE(256);
      if (lookahead == '{') ADVANCE(285);
      if (lookahead == '|') ADVANCE(252);
      if (lookahead == '}') ADVANCE(286);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(28);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(325);
      if (aux_sym__component_token1_character_set_1(lookahead)) ADVANCE(259);
      END_STATE();
    case 9:
      if (lookahead == '"') ADVANCE(315);
      if (lookahead == '/') ADVANCE(17);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      END_STATE();
    case 10:
      if (lookahead == '"') ADVANCE(311);
      END_STATE();
    case 11:
      if (lookahead == '"') ADVANCE(313);
      END_STATE();
    case 12:
      if (lookahead == '"') ADVANCE(312);
      if (lookahead == '8') ADVANCE(14);
      END_STATE();
    case 13:
      if (lookahead == '"') ADVANCE(312);
      if (lookahead == '8') ADVANCE(14);
      if (lookahead == 'n') ADVANCE(112);
      END_STATE();
    case 14:
      if (lookahead == '"') ADVANCE(314);
      END_STATE();
    case 15:
      if (lookahead == '"') ADVANCE(248);
      if (lookahead == '\\') ADVANCE(239);
      if (lookahead != 0) ADVANCE(15);
      END_STATE();
    case 16:
      if (lookahead == '(') ADVANCE(309);
      END_STATE();
    case 17:
      if (lookahead == '*') ADVANCE(352);
      if (lookahead == '/') ADVANCE(345);
      END_STATE();
    case 18:
      if (lookahead == '*') ADVANCE(356);
      if (lookahead == '/') ADVANCE(20);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(18);
      if (lookahead != 0) ADVANCE(19);
      END_STATE();
    case 19:
      if (lookahead == '*') ADVANCE(356);
      if (lookahead != 0) ADVANCE(19);
      END_STATE();
    case 20:
      if (lookahead == '*') ADVANCE(354);
      if (lookahead == '/') ADVANCE(347);
      if (lookahead != 0) ADVANCE(19);
      END_STATE();
    case 21:
      if (lookahead == '-') ADVANCE(52);
      END_STATE();
    case 22:
      if (lookahead == '-') ADVANCE(129);
      if (lookahead == 'n') ADVANCE(35);
      END_STATE();
    case 23:
      if (lookahead == '-') ADVANCE(163);
      END_STATE();
    case 24:
      if (lookahead == '-') ADVANCE(165);
      END_STATE();
    case 25:
      if (lookahead == '-') ADVANCE(164);
      END_STATE();
    case 26:
      if (lookahead == '-') ADVANCE(166);
      END_STATE();
    case 27:
      if (lookahead == '-') ADVANCE(167);
      END_STATE();
    case 28:
      if (lookahead == '.') ADVANCE(225);
      if (lookahead == '0') ADVANCE(323);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(325);
      END_STATE();
    case 29:
      if (lookahead == '.') ADVANCE(225);
      if (lookahead == '0') ADVANCE(321);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(322);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(330);
      END_STATE();
    case 30:
      if (lookahead == '1') ADVANCE(337);
      if (lookahead == 'o') ADVANCE(161);
      END_STATE();
    case 31:
      if (lookahead == ':') ADVANCE(336);
      END_STATE();
    case 32:
      if (lookahead == 'U') ADVANCE(237);
      if (lookahead == 'u') ADVANCE(233);
      END_STATE();
    case 33:
      if (lookahead == '\\') ADVANCE(239);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(15);
      END_STATE();
    case 34:
      if (lookahead == 'a') ADVANCE(135);
      if (lookahead == 'o') ADVANCE(22);
      if (lookahead == 't') ADVANCE(91);
      END_STATE();
    case 35:
      if (lookahead == 'a') ADVANCE(193);
      END_STATE();
    case 36:
      if (lookahead == 'a') ADVANCE(142);
      if (lookahead == 'e') ADVANCE(104);
      if (lookahead == 'o') ADVANCE(60);
      END_STATE();
    case 37:
      if (lookahead == 'a') ADVANCE(170);
      if (lookahead == 'r') ADVANCE(85);
      if (lookahead == 'u') ADVANCE(188);
      END_STATE();
    case 38:
      if (lookahead == 'a') ADVANCE(61);
      END_STATE();
    case 39:
      if (lookahead == 'a') ADVANCE(57);
      END_STATE();
    case 40:
      if (lookahead == 'a') ADVANCE(131);
      if (lookahead == 's') ADVANCE(102);
      END_STATE();
    case 41:
      if (lookahead == 'a') ADVANCE(125);
      END_STATE();
    case 42:
      if (lookahead == 'a') ADVANCE(132);
      END_STATE();
    case 43:
      if (lookahead == 'a') ADVANCE(133);
      END_STATE();
    case 44:
      if (lookahead == 'a') ADVANCE(209);
      END_STATE();
    case 45:
      if (lookahead == 'a') ADVANCE(182);
      END_STATE();
    case 46:
      if (lookahead == 'a') ADVANCE(180);
      END_STATE();
    case 47:
      if (lookahead == 'a') ADVANCE(183);
      END_STATE();
    case 48:
      if (lookahead == 'a') ADVANCE(184);
      END_STATE();
    case 49:
      if (lookahead == 'a') ADVANCE(190);
      END_STATE();
    case 50:
      if (lookahead == 'a') ADVANCE(70);
      END_STATE();
    case 51:
      if (lookahead == 'a') ADVANCE(110);
      END_STATE();
    case 52:
      if (lookahead == 'a') ADVANCE(67);
      if (lookahead == 'd') ADVANCE(93);
      END_STATE();
    case 53:
      if (lookahead == 'a') ADVANCE(189);
      END_STATE();
    case 54:
      if (lookahead == 'a') ADVANCE(213);
      END_STATE();
    case 55:
      if (lookahead == 'b') ADVANCE(215);
      if (lookahead == 'f') ADVANCE(115);
      if (lookahead == 's') ADVANCE(207);
      END_STATE();
    case 56:
      if (lookahead == 'b') ADVANCE(150);
      END_STATE();
    case 57:
      if (lookahead == 'b') ADVANCE(127);
      END_STATE();
    case 58:
      if (lookahead == 'c') ADVANCE(268);
      END_STATE();
    case 59:
      if (lookahead == 'c') ADVANCE(302);
      END_STATE();
    case 60:
      if (lookahead == 'c') ADVANCE(44);
      END_STATE();
    case 61:
      if (lookahead == 'c') ADVANCE(59);
      END_STATE();
    case 62:
      if (lookahead == 'c') ADVANCE(128);
      END_STATE();
    case 63:
      if (lookahead == 'c') ADVANCE(200);
      END_STATE();
    case 64:
      if (lookahead == 'c') ADVANCE(101);
      END_STATE();
    case 65:
      if (lookahead == 'c') ADVANCE(206);
      END_STATE();
    case 66:
      if (lookahead == 'c') ADVANCE(74);
      END_STATE();
    case 67:
      if (lookahead == 'c') ADVANCE(211);
      END_STATE();
    case 68:
      if (lookahead == 'd') ADVANCE(73);
      END_STATE();
    case 69:
      if (lookahead == 'd') ADVANCE(94);
      END_STATE();
    case 70:
      if (lookahead == 'd') ADVANCE(95);
      END_STATE();
    case 71:
      if (lookahead == 'e') ADVANCE(55);
      END_STATE();
    case 72:
      if (lookahead == 'e') ADVANCE(168);
      if (lookahead == 'i') ADVANCE(106);
      END_STATE();
    case 73:
      if (lookahead == 'e') ADVANCE(287);
      END_STATE();
    case 74:
      if (lookahead == 'e') ADVANCE(268);
      END_STATE();
    case 75:
      if (lookahead == 'e') ADVANCE(264);
      END_STATE();
    case 76:
      if (lookahead == 'e') ADVANCE(307);
      END_STATE();
    case 77:
      if (lookahead == 'e') ADVANCE(282);
      END_STATE();
    case 78:
      if (lookahead == 'e') ADVANCE(265);
      END_STATE();
    case 79:
      if (lookahead == 'e') ADVANCE(301);
      END_STATE();
    case 80:
      if (lookahead == 'e') ADVANCE(293);
      END_STATE();
    case 81:
      if (lookahead == 'e') ADVANCE(105);
      END_STATE();
    case 82:
      if (lookahead == 'e') ADVANCE(300);
      END_STATE();
    case 83:
      if (lookahead == 'e') ADVANCE(50);
      END_STATE();
    case 84:
      if (lookahead == 'e') ADVANCE(126);
      END_STATE();
    case 85:
      if (lookahead == 'e') ADVANCE(64);
      if (lookahead == 'i') ADVANCE(143);
      END_STATE();
    case 86:
      if (lookahead == 'e') ADVANCE(171);
      END_STATE();
    case 87:
      if (lookahead == 'e') ADVANCE(137);
      END_STATE();
    case 88:
      if (lookahead == 'e') ADVANCE(179);
      END_STATE();
    case 89:
      if (lookahead == 'e') ADVANCE(63);
      END_STATE();
    case 90:
      if (lookahead == 'e') ADVANCE(191);
      END_STATE();
    case 91:
      if (lookahead == 'e') ADVANCE(178);
      END_STATE();
    case 92:
      if (lookahead == 'e') ADVANCE(134);
      if (lookahead == 'm') ADVANCE(88);
      if (lookahead == '}') ADVANCE(245);
      END_STATE();
    case 93:
      if (lookahead == 'e') ADVANCE(62);
      END_STATE();
    case 94:
      if (lookahead == 'e') ADVANCE(147);
      END_STATE();
    case 95:
      if (lookahead == 'e') ADVANCE(172);
      END_STATE();
    case 96:
      if (lookahead == 'e') ADVANCE(210);
      END_STATE();
    case 97:
      if (lookahead == 'e') ADVANCE(173);
      END_STATE();
    case 98:
      if (lookahead == 'e') ADVANCE(176);
      END_STATE();
    case 99:
      if (lookahead == 'e') ADVANCE(177);
      END_STATE();
    case 100:
      if (lookahead == 'e') ADVANCE(24);
      END_STATE();
    case 101:
      if (lookahead == 'e') ADVANCE(69);
      END_STATE();
    case 102:
      if (lookahead == 'e') ADVANCE(26);
      END_STATE();
    case 103:
      if (lookahead == 'e') ADVANCE(27);
      END_STATE();
    case 104:
      if (lookahead == 'f') ADVANCE(198);
      if (lookahead == 'x') ADVANCE(25);
      END_STATE();
    case 105:
      if (lookahead == 'f') ADVANCE(113);
      END_STATE();
    case 106:
      if (lookahead == 'g') ADVANCE(111);
      END_STATE();
    case 107:
      if (lookahead == 'g') ADVANCE(291);
      END_STATE();
    case 108:
      if (lookahead == 'g') ADVANCE(217);
      END_STATE();
    case 109:
      if (lookahead == 'g') ADVANCE(76);
      END_STATE();
    case 110:
      if (lookahead == 'g') ADVANCE(80);
      END_STATE();
    case 111:
      if (lookahead == 'h') ADVANCE(198);
      END_STATE();
    case 112:
      if (lookahead == 'i') ADVANCE(151);
      END_STATE();
    case 113:
      if (lookahead == 'i') ADVANCE(221);
      END_STATE();
    case 114:
      if (lookahead == 'i') ADVANCE(205);
      END_STATE();
    case 115:
      if (lookahead == 'i') ADVANCE(145);
      END_STATE();
    case 116:
      if (lookahead == 'i') ADVANCE(41);
      END_STATE();
    case 117:
      if (lookahead == 'i') ADVANCE(153);
      END_STATE();
    case 118:
      if (lookahead == 'i') ADVANCE(186);
      END_STATE();
    case 119:
      if (lookahead == 'i') ADVANCE(146);
      END_STATE();
    case 120:
      if (lookahead == 'i') ADVANCE(155);
      END_STATE();
    case 121:
      if (lookahead == 'i') ADVANCE(156);
      END_STATE();
    case 122:
      if (lookahead == 'k') ADVANCE(84);
      if (lookahead == 't') ADVANCE(45);
      END_STATE();
    case 123:
      if (lookahead == 'k') ADVANCE(87);
      END_STATE();
    case 124:
      if (lookahead == 'l') ADVANCE(169);
      END_STATE();
    case 125:
      if (lookahead == 'l') ADVANCE(21);
      END_STATE();
    case 126:
      if (lookahead == 'l') ADVANCE(96);
      END_STATE();
    case 127:
      if (lookahead == 'l') ADVANCE(82);
      END_STATE();
    case 128:
      if (lookahead == 'l') ADVANCE(49);
      END_STATE();
    case 129:
      if (lookahead == 'l') ADVANCE(119);
      END_STATE();
    case 130:
      if (lookahead == 'm') ADVANCE(267);
      END_STATE();
    case 131:
      if (lookahead == 'm') ADVANCE(305);
      END_STATE();
    case 132:
      if (lookahead == 'm') ADVANCE(306);
      END_STATE();
    case 133:
      if (lookahead == 'm') ADVANCE(304);
      END_STATE();
    case 134:
      if (lookahead == 'm') ADVANCE(160);
      END_STATE();
    case 135:
      if (lookahead == 'm') ADVANCE(100);
      END_STATE();
    case 136:
      if (lookahead == 'n') ADVANCE(114);
      END_STATE();
    case 137:
      if (lookahead == 'n') ADVANCE(266);
      END_STATE();
    case 138:
      if (lookahead == 'n') ADVANCE(290);
      END_STATE();
    case 139:
      if (lookahead == 'n') ADVANCE(299);
      END_STATE();
    case 140:
      if (lookahead == 'n') ADVANCE(303);
      END_STATE();
    case 141:
      if (lookahead == 'n') ADVANCE(269);
      END_STATE();
    case 142:
      if (lookahead == 'n') ADVANCE(108);
      END_STATE();
    case 143:
      if (lookahead == 'n') ADVANCE(212);
      END_STATE();
    case 144:
      if (lookahead == 'n') ADVANCE(192);
      END_STATE();
    case 145:
      if (lookahead == 'n') ADVANCE(77);
      END_STATE();
    case 146:
      if (lookahead == 'n') ADVANCE(90);
      END_STATE();
    case 147:
      if (lookahead == 'n') ADVANCE(66);
      END_STATE();
    case 148:
      if (lookahead == 'o') ADVANCE(68);
      END_STATE();
    case 149:
      if (lookahead == 'o') ADVANCE(123);
      if (lookahead == 'y') ADVANCE(159);
      END_STATE();
    case 150:
      if (lookahead == 'o') ADVANCE(195);
      END_STATE();
    case 151:
      if (lookahead == 'o') ADVANCE(138);
      END_STATE();
    case 152:
      if (lookahead == 'o') ADVANCE(58);
      END_STATE();
    case 153:
      if (lookahead == 'o') ADVANCE(144);
      END_STATE();
    case 154:
      if (lookahead == 'o') ADVANCE(139);
      END_STATE();
    case 155:
      if (lookahead == 'o') ADVANCE(140);
      END_STATE();
    case 156:
      if (lookahead == 'o') ADVANCE(141);
      END_STATE();
    case 157:
      if (lookahead == 'o') ADVANCE(175);
      END_STATE();
    case 158:
      if (lookahead == 'p') ADVANCE(89);
      END_STATE();
    case 159:
      if (lookahead == 'p') ADVANCE(75);
      END_STATE();
    case 160:
      if (lookahead == 'p') ADVANCE(202);
      END_STATE();
    case 161:
      if (lookahead == 'p') ADVANCE(203);
      END_STATE();
    case 162:
      if (lookahead == 'p') ADVANCE(218);
      END_STATE();
    case 163:
      if (lookahead == 'p') ADVANCE(46);
      END_STATE();
    case 164:
      if (lookahead == 'p') ADVANCE(47);
      END_STATE();
    case 165:
      if (lookahead == 'p') ADVANCE(187);
      END_STATE();
    case 166:
      if (lookahead == 'p') ADVANCE(48);
      END_STATE();
    case 167:
      if (lookahead == 'p') ADVANCE(53);
      END_STATE();
    case 168:
      if (lookahead == 'q') ADVANCE(216);
      END_STATE();
    case 169:
      if (lookahead == 'r') ADVANCE(23);
      END_STATE();
    case 170:
      if (lookahead == 'r') ADVANCE(40);
      END_STATE();
    case 171:
      if (lookahead == 'r') ADVANCE(56);
      END_STATE();
    case 172:
      if (lookahead == 'r') ADVANCE(292);
      END_STATE();
    case 173:
      if (lookahead == 'r') ADVANCE(275);
      END_STATE();
    case 174:
      if (lookahead == 'r') ADVANCE(276);
      END_STATE();
    case 175:
      if (lookahead == 'r') ADVANCE(271);
      END_STATE();
    case 176:
      if (lookahead == 'r') ADVANCE(270);
      END_STATE();
    case 177:
      if (lookahead == 'r') ADVANCE(298);
      END_STATE();
    case 178:
      if (lookahead == 'r') ADVANCE(130);
      END_STATE();
    case 179:
      if (lookahead == 'r') ADVANCE(109);
      END_STATE();
    case 180:
      if (lookahead == 'r') ADVANCE(196);
      END_STATE();
    case 181:
      if (lookahead == 'r') ADVANCE(219);
      END_STATE();
    case 182:
      if (lookahead == 'r') ADVANCE(199);
      END_STATE();
    case 183:
      if (lookahead == 'r') ADVANCE(42);
      END_STATE();
    case 184:
      if (lookahead == 'r') ADVANCE(43);
      END_STATE();
    case 185:
      if (lookahead == 'r') ADVANCE(174);
      END_STATE();
    case 186:
      if (lookahead == 'r') ADVANCE(78);
      END_STATE();
    case 187:
      if (lookahead == 'r') ADVANCE(81);
      END_STATE();
    case 188:
      if (lookahead == 'r') ADVANCE(103);
      END_STATE();
    case 189:
      if (lookahead == 'r') ADVANCE(197);
      END_STATE();
    case 190:
      if (lookahead == 'r') ADVANCE(54);
      END_STATE();
    case 191:
      if (lookahead == 's') ADVANCE(296);
      END_STATE();
    case 192:
      if (lookahead == 's') ADVANCE(294);
      END_STATE();
    case 193:
      if (lookahead == 's') ADVANCE(194);
      END_STATE();
    case 194:
      if (lookahead == 's') ADVANCE(152);
      END_STATE();
    case 195:
      if (lookahead == 's') ADVANCE(79);
      END_STATE();
    case 196:
      if (lookahead == 's') ADVANCE(98);
      END_STATE();
    case 197:
      if (lookahead == 's') ADVANCE(99);
      END_STATE();
    case 198:
      if (lookahead == 't') ADVANCE(268);
      END_STATE();
    case 199:
      if (lookahead == 't') ADVANCE(281);
      END_STATE();
    case 200:
      if (lookahead == 't') ADVANCE(277);
      END_STATE();
    case 201:
      if (lookahead == 't') ADVANCE(297);
      END_STATE();
    case 202:
      if (lookahead == 't') ADVANCE(222);
      END_STATE();
    case 203:
      if (lookahead == 't') ADVANCE(337);
      END_STATE();
    case 204:
      if (lookahead == 't') ADVANCE(162);
      END_STATE();
    case 205:
      if (lookahead == 't') ADVANCE(116);
      END_STATE();
    case 206:
      if (lookahead == 't') ADVANCE(157);
      END_STATE();
    case 207:
      if (lookahead == 't') ADVANCE(181);
      END_STATE();
    case 208:
      if (lookahead == 't') ADVANCE(39);
      END_STATE();
    case 209:
      if (lookahead == 't') ADVANCE(117);
      END_STATE();
    case 210:
      if (lookahead == 't') ADVANCE(154);
      END_STATE();
    case 211:
      if (lookahead == 't') ADVANCE(120);
      END_STATE();
    case 212:
      if (lookahead == 't') ADVANCE(97);
      END_STATE();
    case 213:
      if (lookahead == 't') ADVANCE(121);
      END_STATE();
    case 214:
      if (lookahead == 'u') ADVANCE(204);
      END_STATE();
    case 215:
      if (lookahead == 'u') ADVANCE(107);
      END_STATE();
    case 216:
      if (lookahead == 'u') ADVANCE(118);
      END_STATE();
    case 217:
      if (lookahead == 'u') ADVANCE(51);
      END_STATE();
    case 218:
      if (lookahead == 'u') ADVANCE(201);
      END_STATE();
    case 219:
      if (lookahead == 'u') ADVANCE(65);
      END_STATE();
    case 220:
      if (lookahead == 'x') ADVANCE(158);
      END_STATE();
    case 221:
      if (lookahead == 'x') ADVANCE(295);
      END_STATE();
    case 222:
      if (lookahead == 'y') ADVANCE(308);
      END_STATE();
    case 223:
      if (lookahead == '}') ADVANCE(245);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '{') ADVANCE(248);
      END_STATE();
    case 224:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(325);
      END_STATE();
    case 225:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(319);
      END_STATE();
    case 226:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(322);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(330);
      END_STATE();
    case 227:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(327);
      END_STATE();
    case 228:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(330);
      END_STATE();
    case 229:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(320);
      END_STATE();
    case 230:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(259);
      END_STATE();
    case 231:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(230);
      END_STATE();
    case 232:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(231);
      END_STATE();
    case 233:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(232);
      END_STATE();
    case 234:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(233);
      END_STATE();
    case 235:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(234);
      END_STATE();
    case 236:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(235);
      END_STATE();
    case 237:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(236);
      END_STATE();
    case 238:
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(248);
      END_STATE();
    case 239:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(15);
      END_STATE();
    case 240:
      if (eof) ADVANCE(242);
      if (lookahead == '"') ADVANCE(315);
      if (lookahead == '%') ADVANCE(262);
      if (lookahead == '\'') ADVANCE(339);
      if (lookahead == ')') ADVANCE(310);
      if (lookahead == '*') ADVANCE(273);
      if (lookahead == '+') ADVANCE(28);
      if (lookahead == '-') ADVANCE(289);
      if (lookahead == '.') ADVANCE(284);
      if (lookahead == '/') ADVANCE(357);
      if (lookahead == '0') ADVANCE(278);
      if (lookahead == ':') ADVANCE(251);
      if (lookahead == ';') ADVANCE(243);
      if (lookahead == '<') ADVANCE(272);
      if (lookahead == '>') ADVANCE(274);
      if (lookahead == 'L') ADVANCE(10);
      if (lookahead == 'U') ADVANCE(11);
      if (lookahead == '[') ADVANCE(253);
      if (lookahead == '\\') ADVANCE(340);
      if (lookahead == ']') ADVANCE(260);
      if (lookahead == '_') ADVANCE(16);
      if (lookahead == 'u') ADVANCE(12);
      if (lookahead == '{') ADVANCE(285);
      if (lookahead == '|') ADVANCE(252);
      if (lookahead == '}') ADVANCE(286);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(240)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(279);
      END_STATE();
    case 241:
      if (eof) ADVANCE(242);
      if (lookahead == '%') ADVANCE(263);
      if (lookahead == '*') ADVANCE(273);
      if (lookahead == '-') ADVANCE(288);
      if (lookahead == '/') ADVANCE(17);
      if (lookahead == ':') ADVANCE(31);
      if (lookahead == ';') ADVANCE(243);
      if (lookahead == '<') ADVANCE(272);
      if (lookahead == '>') ADVANCE(274);
      if (lookahead == '\\') ADVANCE(32);
      if (aux_sym__component_token1_character_set_3(lookahead)) ADVANCE(259);
      if (lookahead == '{') ADVANCE(285);
      if (lookahead == '|') ADVANCE(252);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(241)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(280);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(anon_sym_PERCENT_LBRACE);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(anon_sym_PERCENT_RBRACE);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(aux_sym_prologue_body_token1);
      if (lookahead == '"') ADVANCE(33);
      if (lookahead == '%') ADVANCE(223);
      if (lookahead == '/') ADVANCE(247);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(246);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(248);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(aux_sym_prologue_body_token1);
      if (lookahead == '"') ADVANCE(33);
      if (lookahead == '%') ADVANCE(238);
      if (lookahead == '*') ADVANCE(353);
      if (lookahead == '/') ADVANCE(346);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(248);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(aux_sym_prologue_body_token1);
      if (lookahead == '"') ADVANCE(33);
      if (lookahead == '%') ADVANCE(238);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(248);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(anon_sym_PERCENT_PERCENT);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == ':') ADVANCE(336);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(aux_sym__component_token1);
      if (lookahead == '"') ADVANCE(311);
      if (lookahead == '\\') ADVANCE(32);
      if (aux_sym__component_token1_character_set_4(lookahead)) ADVANCE(259);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(aux_sym__component_token1);
      if (lookahead == '"') ADVANCE(313);
      if (lookahead == '\\') ADVANCE(32);
      if (aux_sym__component_token1_character_set_4(lookahead)) ADVANCE(259);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(aux_sym__component_token1);
      if (lookahead == '"') ADVANCE(312);
      if (lookahead == '8') ADVANCE(257);
      if (lookahead == '\\') ADVANCE(32);
      if (aux_sym__component_token1_character_set_4(lookahead)) ADVANCE(259);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(aux_sym__component_token1);
      if (lookahead == '"') ADVANCE(314);
      if (lookahead == '\\') ADVANCE(32);
      if (aux_sym__component_token1_character_set_4(lookahead)) ADVANCE(259);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(aux_sym__component_token1);
      if (lookahead == '(') ADVANCE(309);
      if (lookahead == '\\') ADVANCE(32);
      if (aux_sym__component_token1_character_set_4(lookahead)) ADVANCE(259);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(aux_sym__component_token1);
      if (lookahead == '\\') ADVANCE(32);
      if (aux_sym__component_token1_character_set_4(lookahead)) ADVANCE(259);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      if (lookahead == '%') ADVANCE(249);
      if (lookahead == 'm') ADVANCE(88);
      if (lookahead == '{') ADVANCE(244);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      if (lookahead == '%') ADVANCE(249);
      if (lookahead == 'm') ADVANCE(88);
      if (lookahead == '{') ADVANCE(244);
      if (lookahead == '}') ADVANCE(245);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      if (lookahead == '%') ADVANCE(249);
      if (lookahead == '{') ADVANCE(244);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(anon_sym_type);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(anon_sym_require);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(anon_sym_token);
      if (lookahead == '-') ADVANCE(208);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(anon_sym_nterm);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(aux_sym__decl_op_precedence_token1);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(anon_sym_initial_DASHdeclaration);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(anon_sym_glr_DASHparser);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(anon_sym_destructor);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(anon_sym_printer);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(aux_sym__decl_expect_token1);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(aux_sym__decl_expect_token1);
      if (lookahead == '-') ADVANCE(185);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(aux_sym__decl_expect_token2);
      if (lookahead == '\'') ADVANCE(224);
      if (lookahead == '.') ADVANCE(333);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(331);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(29);
      if (lookahead == 'E' ||
          lookahead == 'P' ||
          lookahead == 'e' ||
          lookahead == 'p') ADVANCE(332);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'U' ||
          lookahead == 'W' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 'u' ||
          lookahead == 'w') ADVANCE(335);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(279);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(aux_sym__decl_expect_token2);
      if (lookahead == '\'') ADVANCE(224);
      if (lookahead == '.') ADVANCE(333);
      if (lookahead == 'E' ||
          lookahead == 'P' ||
          lookahead == 'e' ||
          lookahead == 'p') ADVANCE(332);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(279);
      if (sym_number_literal_character_set_1(lookahead)) ADVANCE(335);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(aux_sym__decl_expect_token2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(280);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(anon_sym_start);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(anon_sym_define);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(319);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(anon_sym_code);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '.') ADVANCE(225);
      if (lookahead == '0') ADVANCE(323);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(325);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(anon_sym_union);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(anon_sym_debug);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(anon_sym_header);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(anon_sym_language);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(anon_sym_locations);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(anon_sym_name_DASHprefix);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(anon_sym_no_DASHlines);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(anon_sym_output);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(anon_sym_pure_DASHparser);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(anon_sym_skeleton);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(anon_sym_token_DASHtable);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(anon_sym_verbose);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(anon_sym_yacc);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(anon_sym_initial_DASHaction);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(anon_sym_parse_DASHparam);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(anon_sym_param);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(anon_sym_lex_DASHparam);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(anon_sym_PERCENTmerge);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym_directive_empty);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(anon_sym__LPAREN);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(anon_sym_L_DQUOTE);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(anon_sym_u_DQUOTE);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(anon_sym_U_DQUOTE);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(anon_sym_u8_DQUOTE);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead == '*') ADVANCE(318);
      if (lookahead == '/') ADVANCE(318);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(318);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead == '/') ADVANCE(316);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(317);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(318);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(318);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '\'') ADVANCE(225);
      if (lookahead == 'E' ||
          lookahead == 'P' ||
          lookahead == 'e' ||
          lookahead == 'p') ADVANCE(332);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(319);
      if (sym_number_literal_character_set_1(lookahead)) ADVANCE(335);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '\'') ADVANCE(229);
      if (lookahead == 'B' ||
          lookahead == 'D' ||
          lookahead == 'F' ||
          lookahead == 'b' ||
          lookahead == 'd' ||
          lookahead == 'f') ADVANCE(320);
      if (lookahead == 'L' ||
          lookahead == 'U' ||
          lookahead == 'W' ||
          lookahead == 'l' ||
          lookahead == 'u' ||
          lookahead == 'w') ADVANCE(335);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'E') ||
          ('a' <= lookahead && lookahead <= 'e')) ADVANCE(320);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '\'') ADVANCE(226);
      if (lookahead == '.') ADVANCE(333);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(329);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(328);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(332);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(228);
      if (('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(330);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(330);
      if (lookahead == 'L' ||
          lookahead == 'U' ||
          lookahead == 'W' ||
          lookahead == 'l' ||
          lookahead == 'u' ||
          lookahead == 'w') ADVANCE(335);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(322);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '\'') ADVANCE(226);
      if (lookahead == '.') ADVANCE(333);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(328);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(332);
      if (lookahead == 'A' ||
          lookahead == 'C' ||
          lookahead == 'a' ||
          lookahead == 'c') ADVANCE(330);
      if (('B' <= lookahead && lookahead <= 'F') ||
          ('b' <= lookahead && lookahead <= 'f')) ADVANCE(330);
      if (lookahead == 'L' ||
          lookahead == 'U' ||
          lookahead == 'W' ||
          lookahead == 'l' ||
          lookahead == 'u' ||
          lookahead == 'w') ADVANCE(335);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(322);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '\'') ADVANCE(224);
      if (lookahead == '.') ADVANCE(333);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(331);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(29);
      if (lookahead == 'E' ||
          lookahead == 'P' ||
          lookahead == 'e' ||
          lookahead == 'p') ADVANCE(332);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'U' ||
          lookahead == 'W' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 'u' ||
          lookahead == 'w') ADVANCE(335);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(325);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '\'') ADVANCE(224);
      if (lookahead == '.') ADVANCE(333);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(334);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(228);
      if (lookahead == 'E' ||
          lookahead == 'P' ||
          lookahead == 'e' ||
          lookahead == 'p') ADVANCE(332);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'U' ||
          lookahead == 'W' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 'u' ||
          lookahead == 'w') ADVANCE(335);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(325);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '\'') ADVANCE(224);
      if (lookahead == '.') ADVANCE(333);
      if (lookahead == 'E' ||
          lookahead == 'P' ||
          lookahead == 'e' ||
          lookahead == 'p') ADVANCE(332);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(325);
      if (sym_number_literal_character_set_1(lookahead)) ADVANCE(335);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '\'') ADVANCE(227);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(229);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(326);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(332);
      if (lookahead == 'B' ||
          ('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'b' ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(327);
      if (lookahead == 'L' ||
          lookahead == 'U' ||
          lookahead == 'W' ||
          lookahead == 'l' ||
          lookahead == 'u' ||
          lookahead == 'w') ADVANCE(335);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(327);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '\'') ADVANCE(227);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(326);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(332);
      if (lookahead == 'B' ||
          ('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'b' ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(327);
      if (lookahead == 'L' ||
          lookahead == 'U' ||
          lookahead == 'W' ||
          lookahead == 'l' ||
          lookahead == 'u' ||
          lookahead == 'w') ADVANCE(335);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(327);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '\'') ADVANCE(228);
      if (lookahead == '.') ADVANCE(333);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(229);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(328);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(332);
      if (lookahead == 'B' ||
          ('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'b' ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(330);
      if (lookahead == 'L' ||
          lookahead == 'U' ||
          lookahead == 'W' ||
          lookahead == 'l' ||
          lookahead == 'u' ||
          lookahead == 'w') ADVANCE(335);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(330);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '\'') ADVANCE(228);
      if (lookahead == '.') ADVANCE(333);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(328);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(332);
      if (lookahead == 'A' ||
          lookahead == 'C' ||
          lookahead == 'a' ||
          lookahead == 'c') ADVANCE(330);
      if (('B' <= lookahead && lookahead <= 'F') ||
          ('b' <= lookahead && lookahead <= 'f')) ADVANCE(330);
      if (lookahead == 'L' ||
          lookahead == 'U' ||
          lookahead == 'W' ||
          lookahead == 'l' ||
          lookahead == 'u' ||
          lookahead == 'w') ADVANCE(335);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(322);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '\'') ADVANCE(228);
      if (lookahead == '.') ADVANCE(333);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(328);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(332);
      if (lookahead == 'B' ||
          ('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'b' ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(330);
      if (lookahead == 'L' ||
          lookahead == 'U' ||
          lookahead == 'W' ||
          lookahead == 'l' ||
          lookahead == 'u' ||
          lookahead == 'w') ADVANCE(335);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(330);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '.') ADVANCE(225);
      if (lookahead == '0') ADVANCE(324);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(325);
      if (sym_number_literal_character_set_2(lookahead)) ADVANCE(335);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(229);
      if (lookahead == 'B' ||
          lookahead == 'D' ||
          lookahead == 'F' ||
          lookahead == 'b' ||
          lookahead == 'd' ||
          lookahead == 'f') ADVANCE(320);
      if (lookahead == 'L' ||
          lookahead == 'U' ||
          lookahead == 'W' ||
          lookahead == 'l' ||
          lookahead == 'u' ||
          lookahead == 'w') ADVANCE(335);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'E') ||
          ('a' <= lookahead && lookahead <= 'e')) ADVANCE(320);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(326);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(332);
      if (lookahead == 'B' ||
          ('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'b' ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(327);
      if (lookahead == 'L' ||
          lookahead == 'U' ||
          lookahead == 'W' ||
          lookahead == 'l' ||
          lookahead == 'u' ||
          lookahead == 'w') ADVANCE(335);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(327);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym_number_literal);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(325);
      if (sym_number_literal_character_set_2(lookahead)) ADVANCE(335);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym_number_literal);
      if (sym_number_literal_character_set_2(lookahead)) ADVANCE(335);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(aux_sym_grammar_rule_identifier_token1);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(aux_sym_grammar_rule_identifier_token1);
      if (lookahead == '.') ADVANCE(30);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(aux_sym_char_literal_token1);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(aux_sym_char_literal_token1);
      if (lookahead == '*') ADVANCE(352);
      if (lookahead == '/') ADVANCE(345);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(aux_sym_char_literal_token1);
      if (lookahead == '/') ADVANCE(342);
      if (lookahead == '\\') ADVANCE(340);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(343);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'') ADVANCE(341);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(aux_sym_char_literal_token1);
      if (lookahead == '/') ADVANCE(342);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(344);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'') ADVANCE(341);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      if (lookahead == '"') ADVANCE(33);
      if (lookahead == '%') ADVANCE(238);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(248);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      if (lookahead == '*') ADVANCE(356);
      if (lookahead != 0) ADVANCE(19);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(351);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '*') ADVANCE(355);
      if (lookahead == '/') ADVANCE(348);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(351);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '/') ADVANCE(349);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(350);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(351);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(351);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(anon_sym_SLASH_STAR);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(anon_sym_SLASH_STAR);
      if (lookahead == '"') ADVANCE(33);
      if (lookahead == '%') ADVANCE(238);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(248);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(anon_sym_SLASH_STAR);
      if (lookahead == '*') ADVANCE(356);
      if (lookahead != 0 &&
          lookahead != '/') ADVANCE(19);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(anon_sym_SLASH_STAR);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(351);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == '*') ADVANCE(356);
      if (lookahead != 0 &&
          lookahead != '/') ADVANCE(19);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(352);
      if (lookahead == '/') ADVANCE(345);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 241},
  [2] = {.lex_state = 241},
  [3] = {.lex_state = 241},
  [4] = {.lex_state = 241},
  [5] = {.lex_state = 241},
  [6] = {.lex_state = 241},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 7},
  [9] = {.lex_state = 7},
  [10] = {.lex_state = 8},
  [11] = {.lex_state = 7},
  [12] = {.lex_state = 8},
  [13] = {.lex_state = 8},
  [14] = {.lex_state = 7},
  [15] = {.lex_state = 5},
  [16] = {.lex_state = 5},
  [17] = {.lex_state = 5},
  [18] = {.lex_state = 7},
  [19] = {.lex_state = 5},
  [20] = {.lex_state = 8},
  [21] = {.lex_state = 8},
  [22] = {.lex_state = 5},
  [23] = {.lex_state = 5},
  [24] = {.lex_state = 5},
  [25] = {.lex_state = 5},
  [26] = {.lex_state = 5},
  [27] = {.lex_state = 6},
  [28] = {.lex_state = 6},
  [29] = {.lex_state = 5},
  [30] = {.lex_state = 5},
  [31] = {.lex_state = 5},
  [32] = {.lex_state = 7},
  [33] = {.lex_state = 7},
  [34] = {.lex_state = 6},
  [35] = {.lex_state = 5},
  [36] = {.lex_state = 7},
  [37] = {.lex_state = 7},
  [38] = {.lex_state = 7},
  [39] = {.lex_state = 7},
  [40] = {.lex_state = 5},
  [41] = {.lex_state = 5},
  [42] = {.lex_state = 6},
  [43] = {.lex_state = 7},
  [44] = {.lex_state = 7},
  [45] = {.lex_state = 7},
  [46] = {.lex_state = 7},
  [47] = {.lex_state = 7},
  [48] = {.lex_state = 7},
  [49] = {.lex_state = 7},
  [50] = {.lex_state = 7},
  [51] = {.lex_state = 5},
  [52] = {.lex_state = 241},
  [53] = {.lex_state = 241},
  [54] = {.lex_state = 241},
  [55] = {.lex_state = 241},
  [56] = {.lex_state = 241},
  [57] = {.lex_state = 241},
  [58] = {.lex_state = 241},
  [59] = {.lex_state = 241},
  [60] = {.lex_state = 241},
  [61] = {.lex_state = 241},
  [62] = {.lex_state = 241},
  [63] = {.lex_state = 241},
  [64] = {.lex_state = 241},
  [65] = {.lex_state = 241},
  [66] = {.lex_state = 241},
  [67] = {.lex_state = 241},
  [68] = {.lex_state = 7},
  [69] = {.lex_state = 241},
  [70] = {.lex_state = 241},
  [71] = {.lex_state = 241},
  [72] = {.lex_state = 241},
  [73] = {.lex_state = 241},
  [74] = {.lex_state = 241},
  [75] = {.lex_state = 241},
  [76] = {.lex_state = 241},
  [77] = {.lex_state = 241},
  [78] = {.lex_state = 241},
  [79] = {.lex_state = 7},
  [80] = {.lex_state = 7},
  [81] = {.lex_state = 241},
  [82] = {.lex_state = 241},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 241},
  [87] = {.lex_state = 241},
  [88] = {.lex_state = 241},
  [89] = {.lex_state = 241},
  [90] = {.lex_state = 241},
  [91] = {.lex_state = 241},
  [92] = {.lex_state = 241},
  [93] = {.lex_state = 241},
  [94] = {.lex_state = 241},
  [95] = {.lex_state = 241},
  [96] = {.lex_state = 241},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 241},
  [99] = {.lex_state = 241},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 241},
  [102] = {.lex_state = 241},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 241},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 241},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 241},
  [109] = {.lex_state = 241},
  [110] = {.lex_state = 241},
  [111] = {.lex_state = 241},
  [112] = {.lex_state = 241},
  [113] = {.lex_state = 241},
  [114] = {.lex_state = 241},
  [115] = {.lex_state = 241},
  [116] = {.lex_state = 241},
  [117] = {.lex_state = 241},
  [118] = {.lex_state = 241},
  [119] = {.lex_state = 241},
  [120] = {.lex_state = 241},
  [121] = {.lex_state = 241},
  [122] = {.lex_state = 241},
  [123] = {.lex_state = 241},
  [124] = {.lex_state = 241},
  [125] = {.lex_state = 241},
  [126] = {.lex_state = 241},
  [127] = {.lex_state = 241},
  [128] = {.lex_state = 241},
  [129] = {.lex_state = 241},
  [130] = {.lex_state = 241},
  [131] = {.lex_state = 241},
  [132] = {.lex_state = 241},
  [133] = {.lex_state = 241},
  [134] = {.lex_state = 241},
  [135] = {.lex_state = 241},
  [136] = {.lex_state = 241},
  [137] = {.lex_state = 241},
  [138] = {.lex_state = 241},
  [139] = {.lex_state = 241},
  [140] = {.lex_state = 241},
  [141] = {.lex_state = 241},
  [142] = {.lex_state = 241},
  [143] = {.lex_state = 241},
  [144] = {.lex_state = 241},
  [145] = {.lex_state = 241},
  [146] = {.lex_state = 241},
  [147] = {.lex_state = 241},
  [148] = {.lex_state = 241},
  [149] = {.lex_state = 241},
  [150] = {.lex_state = 241},
  [151] = {.lex_state = 241},
  [152] = {.lex_state = 1},
  [153] = {.lex_state = 241},
  [154] = {.lex_state = 241},
  [155] = {.lex_state = 241},
  [156] = {.lex_state = 241},
  [157] = {.lex_state = 241},
  [158] = {.lex_state = 2},
  [159] = {.lex_state = 241},
  [160] = {.lex_state = 2},
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 2},
  [164] = {.lex_state = 241},
  [165] = {.lex_state = 241},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 1},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 241},
  [172] = {.lex_state = 241},
  [173] = {.lex_state = 241},
  [174] = {.lex_state = 2},
  [175] = {.lex_state = 241},
  [176] = {.lex_state = 241},
  [177] = {.lex_state = 241},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 241},
  [180] = {.lex_state = 241},
  [181] = {.lex_state = 1},
  [182] = {.lex_state = 2},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 0},
  [185] = {.lex_state = 1},
  [186] = {.lex_state = 0},
  [187] = {.lex_state = 0},
  [188] = {.lex_state = 0},
  [189] = {.lex_state = 0},
  [190] = {.lex_state = 0},
  [191] = {.lex_state = 3},
  [192] = {.lex_state = 0, .external_lex_state = 2},
  [193] = {.lex_state = 0},
  [194] = {.lex_state = 241},
  [195] = {.lex_state = 0},
  [196] = {.lex_state = 0},
  [197] = {.lex_state = 2},
  [198] = {.lex_state = 0},
  [199] = {.lex_state = 0},
  [200] = {.lex_state = 0},
  [201] = {.lex_state = 241},
  [202] = {.lex_state = 0},
  [203] = {.lex_state = 338},
  [204] = {.lex_state = 0},
  [205] = {.lex_state = 350},
  [206] = {.lex_state = 0},
  [207] = {.lex_state = 0},
  [208] = {.lex_state = 0},
  [209] = {.lex_state = 241},
  [210] = {.lex_state = 0},
  [211] = {.lex_state = 0},
  [212] = {.lex_state = 0},
  [213] = {.lex_state = 241},
  [214] = {.lex_state = 0},
  [215] = {.lex_state = 0, .external_lex_state = 2},
  [216] = {.lex_state = 0, .external_lex_state = 2},
  [217] = {.lex_state = 7},
  [218] = {.lex_state = 0},
  [219] = {.lex_state = 0},
  [220] = {.lex_state = 0},
  [221] = {.lex_state = 0},
  [222] = {.lex_state = 241},
  [223] = {.lex_state = 0},
  [224] = {.lex_state = 7},
  [225] = {.lex_state = 0},
  [226] = {.lex_state = 0},
  [227] = {.lex_state = 241},
  [228] = {.lex_state = 0},
  [229] = {.lex_state = 241},
  [230] = {.lex_state = 0},
  [231] = {.lex_state = 4},
  [232] = {.lex_state = 0},
  [233] = {.lex_state = 18},
  [234] = {.lex_state = 338},
  [235] = {.lex_state = 241},
  [236] = {.lex_state = 0},
  [237] = {.lex_state = 0},
  [238] = {.lex_state = 0},
  [239] = {(TSStateId)(-1)},
  [240] = {(TSStateId)(-1)},
};

enum {
  ts_external_token_undelimited_code_block = 0,
  ts_external_token_error_sentinel = 1,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token_undelimited_code_block] = sym_undelimited_code_block,
  [ts_external_token_error_sentinel] = sym_error_sentinel,
};

static const bool ts_external_scanner_states[3][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token_undelimited_code_block] = true,
    [ts_external_token_error_sentinel] = true,
  },
  [2] = {
    [ts_external_token_undelimited_code_block] = true,
  },
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [sym_comment] = STATE(0),
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(1),
    [anon_sym_PERCENT_RBRACE] = ACTIONS(1),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_PERCENT] = ACTIONS(1),
    [anon_sym_type] = ACTIONS(1),
    [anon_sym_require] = ACTIONS(1),
    [anon_sym_token] = ACTIONS(1),
    [anon_sym_nterm] = ACTIONS(1),
    [aux_sym__decl_op_precedence_token1] = ACTIONS(1),
    [anon_sym_initial_DASHdeclaration] = ACTIONS(1),
    [anon_sym_glr_DASHparser] = ACTIONS(1),
    [anon_sym_destructor] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_printer] = ACTIONS(1),
    [aux_sym__decl_expect_token1] = ACTIONS(1),
    [aux_sym__decl_expect_token2] = ACTIONS(1),
    [anon_sym_start] = ACTIONS(1),
    [anon_sym_define] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_code] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_union] = ACTIONS(1),
    [anon_sym_debug] = ACTIONS(1),
    [anon_sym_header] = ACTIONS(1),
    [anon_sym_language] = ACTIONS(1),
    [anon_sym_locations] = ACTIONS(1),
    [anon_sym_name_DASHprefix] = ACTIONS(1),
    [anon_sym_no_DASHlines] = ACTIONS(1),
    [anon_sym_output] = ACTIONS(1),
    [anon_sym_pure_DASHparser] = ACTIONS(1),
    [anon_sym_skeleton] = ACTIONS(1),
    [anon_sym_token_DASHtable] = ACTIONS(1),
    [anon_sym_verbose] = ACTIONS(1),
    [anon_sym_yacc] = ACTIONS(1),
    [anon_sym_initial_DASHaction] = ACTIONS(1),
    [anon_sym_parse_DASHparam] = ACTIONS(1),
    [anon_sym_param] = ACTIONS(1),
    [anon_sym_lex_DASHparam] = ACTIONS(1),
    [anon_sym_PERCENTmerge] = ACTIONS(1),
    [anon_sym__LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_L_DQUOTE] = ACTIONS(1),
    [anon_sym_u_DQUOTE] = ACTIONS(1),
    [anon_sym_U_DQUOTE] = ACTIONS(1),
    [anon_sym_u8_DQUOTE] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [sym_number_literal] = ACTIONS(1),
    [anon_sym_COLON_COLON] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_BSLASH] = ACTIONS(1),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
    [anon_sym_SLASH_STAR] = ACTIONS(5),
    [anon_sym_SLASH] = ACTIONS(1),
    [sym_undelimited_code_block] = ACTIONS(1),
    [sym_error_sentinel] = ACTIONS(1),
  },
  [1] = {
    [sym_sections] = STATE(232),
    [sym_prologue] = STATE(164),
    [sym_grammar_rules_section] = STATE(230),
    [sym_declaration] = STATE(141),
    [sym__decl_type] = STATE(137),
    [sym__decl_require] = STATE(137),
    [sym__decl_token] = STATE(137),
    [sym__decl_nterm] = STATE(137),
    [sym__decl_op_precedence] = STATE(137),
    [sym__decl_initial_declaration] = STATE(137),
    [sym__decl_glr_parser] = STATE(137),
    [sym__decl_destructor] = STATE(137),
    [sym__decl_printer] = STATE(137),
    [sym__decl_expect] = STATE(137),
    [sym__decl_start] = STATE(137),
    [sym__decl_define] = STATE(137),
    [sym__decl_code] = STATE(137),
    [sym__decl_union] = STATE(137),
    [sym__decl_debug] = STATE(137),
    [sym__decl_header] = STATE(137),
    [sym_decl_language] = STATE(137),
    [sym__decl_locations] = STATE(137),
    [sym__decl_name_prefix] = STATE(137),
    [sym__decl_no_lines] = STATE(137),
    [sym__decl_output] = STATE(137),
    [sym__decl_pure_parser] = STATE(137),
    [sym__decl_skeleton] = STATE(137),
    [sym__decl_token_table] = STATE(137),
    [sym__decl_verbose] = STATE(137),
    [sym__decl_yacc] = STATE(137),
    [sym__decl_initial_action] = STATE(137),
    [sym__decl_parse_param] = STATE(137),
    [sym__decl_param] = STATE(137),
    [sym__decl_lex_param] = STATE(137),
    [sym_comment] = STATE(1),
    [aux_sym_sections_repeat1] = STATE(4),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(7),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(9),
    [anon_sym_PERCENT] = ACTIONS(11),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
    [anon_sym_SLASH_STAR] = ACTIONS(5),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 10,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(15), 1,
      aux_sym__component_token1,
    ACTIONS(18), 1,
      anon_sym_PERCENT,
    STATE(128), 1,
      sym_grammar_rule,
    STATE(217), 1,
      sym_grammar_rule_identifier,
    STATE(218), 1,
      sym_declaration,
    ACTIONS(13), 2,
      ts_builtin_sym_end,
      anon_sym_PERCENT_PERCENT,
    STATE(2), 2,
      sym_comment,
      aux_sym_grammar_rules_body_repeat1,
    STATE(137), 30,
      sym__decl_type,
      sym__decl_require,
      sym__decl_token,
      sym__decl_nterm,
      sym__decl_op_precedence,
      sym__decl_initial_declaration,
      sym__decl_glr_parser,
      sym__decl_destructor,
      sym__decl_printer,
      sym__decl_expect,
      sym__decl_start,
      sym__decl_define,
      sym__decl_code,
      sym__decl_union,
      sym__decl_debug,
      sym__decl_header,
      sym_decl_language,
      sym__decl_locations,
      sym__decl_name_prefix,
      sym__decl_no_lines,
      sym__decl_output,
      sym__decl_pure_parser,
      sym__decl_skeleton,
      sym__decl_token_table,
      sym__decl_verbose,
      sym__decl_yacc,
      sym__decl_initial_action,
      sym__decl_parse_param,
      sym__decl_param,
      sym__decl_lex_param,
  [62] = 11,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(11), 1,
      anon_sym_PERCENT,
    ACTIONS(23), 1,
      aux_sym__component_token1,
    STATE(2), 1,
      aux_sym_grammar_rules_body_repeat1,
    STATE(3), 1,
      sym_comment,
    STATE(128), 1,
      sym_grammar_rule,
    STATE(217), 1,
      sym_grammar_rule_identifier,
    STATE(218), 1,
      sym_declaration,
    ACTIONS(21), 2,
      ts_builtin_sym_end,
      anon_sym_PERCENT_PERCENT,
    STATE(137), 30,
      sym__decl_type,
      sym__decl_require,
      sym__decl_token,
      sym__decl_nterm,
      sym__decl_op_precedence,
      sym__decl_initial_declaration,
      sym__decl_glr_parser,
      sym__decl_destructor,
      sym__decl_printer,
      sym__decl_expect,
      sym__decl_start,
      sym__decl_define,
      sym__decl_code,
      sym__decl_union,
      sym__decl_debug,
      sym__decl_header,
      sym_decl_language,
      sym__decl_locations,
      sym__decl_name_prefix,
      sym__decl_no_lines,
      sym__decl_output,
      sym__decl_pure_parser,
      sym__decl_skeleton,
      sym__decl_token_table,
      sym__decl_verbose,
      sym__decl_yacc,
      sym__decl_initial_action,
      sym__decl_parse_param,
      sym__decl_param,
      sym__decl_lex_param,
  [126] = 11,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(7), 1,
      anon_sym_PERCENT_LBRACE,
    ACTIONS(9), 1,
      anon_sym_PERCENT_PERCENT,
    ACTIONS(11), 1,
      anon_sym_PERCENT,
    STATE(4), 1,
      sym_comment,
    STATE(6), 1,
      aux_sym_sections_repeat1,
    STATE(141), 1,
      sym_declaration,
    STATE(164), 1,
      sym_prologue,
    STATE(211), 1,
      sym_grammar_rules_section,
    STATE(137), 30,
      sym__decl_type,
      sym__decl_require,
      sym__decl_token,
      sym__decl_nterm,
      sym__decl_op_precedence,
      sym__decl_initial_declaration,
      sym__decl_glr_parser,
      sym__decl_destructor,
      sym__decl_printer,
      sym__decl_expect,
      sym__decl_start,
      sym__decl_define,
      sym__decl_code,
      sym__decl_union,
      sym__decl_debug,
      sym__decl_header,
      sym_decl_language,
      sym__decl_locations,
      sym__decl_name_prefix,
      sym__decl_no_lines,
      sym__decl_output,
      sym__decl_pure_parser,
      sym__decl_skeleton,
      sym__decl_token_table,
      sym__decl_verbose,
      sym__decl_yacc,
      sym__decl_initial_action,
      sym__decl_parse_param,
      sym__decl_param,
      sym__decl_lex_param,
  [189] = 11,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(23), 1,
      aux_sym__component_token1,
    ACTIONS(25), 1,
      anon_sym_PERCENT,
    STATE(3), 1,
      aux_sym_grammar_rules_body_repeat1,
    STATE(5), 1,
      sym_comment,
    STATE(128), 1,
      sym_grammar_rule,
    STATE(187), 1,
      sym_grammar_rules_body,
    STATE(217), 1,
      sym_grammar_rule_identifier,
    STATE(218), 1,
      sym_declaration,
    STATE(137), 30,
      sym__decl_type,
      sym__decl_require,
      sym__decl_token,
      sym__decl_nterm,
      sym__decl_op_precedence,
      sym__decl_initial_declaration,
      sym__decl_glr_parser,
      sym__decl_destructor,
      sym__decl_printer,
      sym__decl_expect,
      sym__decl_start,
      sym__decl_define,
      sym__decl_code,
      sym__decl_union,
      sym__decl_debug,
      sym__decl_header,
      sym_decl_language,
      sym__decl_locations,
      sym__decl_name_prefix,
      sym__decl_no_lines,
      sym__decl_output,
      sym__decl_pure_parser,
      sym__decl_skeleton,
      sym__decl_token_table,
      sym__decl_verbose,
      sym__decl_yacc,
      sym__decl_initial_action,
      sym__decl_parse_param,
      sym__decl_param,
      sym__decl_lex_param,
  [252] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(27), 1,
      anon_sym_PERCENT_LBRACE,
    ACTIONS(30), 1,
      anon_sym_PERCENT_PERCENT,
    ACTIONS(32), 1,
      anon_sym_PERCENT,
    STATE(141), 1,
      sym_declaration,
    STATE(164), 1,
      sym_prologue,
    STATE(6), 2,
      sym_comment,
      aux_sym_sections_repeat1,
    STATE(137), 30,
      sym__decl_type,
      sym__decl_require,
      sym__decl_token,
      sym__decl_nterm,
      sym__decl_op_precedence,
      sym__decl_initial_declaration,
      sym__decl_glr_parser,
      sym__decl_destructor,
      sym__decl_printer,
      sym__decl_expect,
      sym__decl_start,
      sym__decl_define,
      sym__decl_code,
      sym__decl_union,
      sym__decl_debug,
      sym__decl_header,
      sym_decl_language,
      sym__decl_locations,
      sym__decl_name_prefix,
      sym__decl_no_lines,
      sym__decl_output,
      sym__decl_pure_parser,
      sym__decl_skeleton,
      sym__decl_token_table,
      sym__decl_verbose,
      sym__decl_yacc,
      sym__decl_initial_action,
      sym__decl_parse_param,
      sym__decl_param,
      sym__decl_lex_param,
  [310] = 33,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_type,
    ACTIONS(37), 1,
      anon_sym_require,
    ACTIONS(39), 1,
      anon_sym_token,
    ACTIONS(41), 1,
      anon_sym_nterm,
    ACTIONS(43), 1,
      aux_sym__decl_op_precedence_token1,
    ACTIONS(45), 1,
      anon_sym_initial_DASHdeclaration,
    ACTIONS(47), 1,
      anon_sym_glr_DASHparser,
    ACTIONS(49), 1,
      anon_sym_destructor,
    ACTIONS(51), 1,
      anon_sym_printer,
    ACTIONS(53), 1,
      aux_sym__decl_expect_token1,
    ACTIONS(55), 1,
      anon_sym_start,
    ACTIONS(57), 1,
      anon_sym_define,
    ACTIONS(59), 1,
      anon_sym_code,
    ACTIONS(61), 1,
      anon_sym_union,
    ACTIONS(63), 1,
      anon_sym_debug,
    ACTIONS(65), 1,
      anon_sym_header,
    ACTIONS(67), 1,
      anon_sym_language,
    ACTIONS(69), 1,
      anon_sym_locations,
    ACTIONS(71), 1,
      anon_sym_name_DASHprefix,
    ACTIONS(73), 1,
      anon_sym_no_DASHlines,
    ACTIONS(75), 1,
      anon_sym_output,
    ACTIONS(77), 1,
      anon_sym_pure_DASHparser,
    ACTIONS(79), 1,
      anon_sym_skeleton,
    ACTIONS(81), 1,
      anon_sym_token_DASHtable,
    ACTIONS(83), 1,
      anon_sym_verbose,
    ACTIONS(85), 1,
      anon_sym_yacc,
    ACTIONS(87), 1,
      anon_sym_initial_DASHaction,
    ACTIONS(89), 1,
      anon_sym_parse_DASHparam,
    ACTIONS(91), 1,
      anon_sym_param,
    ACTIONS(93), 1,
      anon_sym_lex_DASHparam,
    STATE(7), 1,
      sym_comment,
  [410] = 18,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(95), 1,
      anon_sym_SEMI,
    ACTIONS(97), 1,
      anon_sym_PIPE,
    ACTIONS(99), 1,
      aux_sym__component_token1,
    ACTIONS(101), 1,
      anon_sym_LBRACE,
    ACTIONS(103), 1,
      anon_sym_PERCENTmerge,
    ACTIONS(105), 1,
      sym_directive_empty,
    ACTIONS(109), 1,
      anon_sym_SQUOTE,
    STATE(8), 1,
      sym_comment,
    STATE(9), 1,
      aux_sym_grammar_rule_repeat1,
    STATE(37), 1,
      sym_code_block,
    STATE(39), 1,
      sym_action,
    STATE(43), 1,
      sym_directive_merge,
    STATE(45), 1,
      sym__component,
    STATE(178), 1,
      aux_sym_grammar_rule_repeat2,
    STATE(38), 3,
      sym_string_literal,
      sym_grammar_rule_identifier,
      sym_char_literal,
    ACTIONS(107), 5,
      anon_sym_L_DQUOTE,
      anon_sym_u_DQUOTE,
      anon_sym_U_DQUOTE,
      anon_sym_u8_DQUOTE,
      anon_sym_DQUOTE,
  [471] = 16,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(97), 1,
      anon_sym_PIPE,
    ACTIONS(99), 1,
      aux_sym__component_token1,
    ACTIONS(101), 1,
      anon_sym_LBRACE,
    ACTIONS(103), 1,
      anon_sym_PERCENTmerge,
    ACTIONS(109), 1,
      anon_sym_SQUOTE,
    ACTIONS(111), 1,
      anon_sym_SEMI,
    STATE(9), 1,
      sym_comment,
    STATE(11), 1,
      aux_sym_grammar_rule_repeat1,
    STATE(37), 1,
      sym_code_block,
    STATE(45), 1,
      sym__component,
    STATE(162), 1,
      aux_sym_grammar_rule_repeat2,
    STATE(43), 2,
      sym_action,
      sym_directive_merge,
    STATE(38), 3,
      sym_string_literal,
      sym_grammar_rule_identifier,
      sym_char_literal,
    ACTIONS(107), 5,
      anon_sym_L_DQUOTE,
      anon_sym_u_DQUOTE,
      anon_sym_U_DQUOTE,
      anon_sym_u8_DQUOTE,
      anon_sym_DQUOTE,
  [527] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(10), 1,
      sym_comment,
    ACTIONS(115), 2,
      aux_sym__component_token1,
      anon_sym_PERCENT,
    ACTIONS(113), 17,
      anon_sym_SEMI,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_PERCENT,
      anon_sym_COLON,
      anon_sym_PIPE,
      anon_sym_LBRACK,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_PERCENTmerge,
      anon_sym__LPAREN,
      anon_sym_L_DQUOTE,
      anon_sym_u_DQUOTE,
      anon_sym_U_DQUOTE,
      anon_sym_u8_DQUOTE,
      anon_sym_DQUOTE,
      sym_number_literal,
      anon_sym_SQUOTE,
  [560] = 13,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(119), 1,
      aux_sym__component_token1,
    ACTIONS(122), 1,
      anon_sym_LBRACE,
    ACTIONS(125), 1,
      anon_sym_PERCENTmerge,
    ACTIONS(131), 1,
      anon_sym_SQUOTE,
    STATE(37), 1,
      sym_code_block,
    STATE(45), 1,
      sym__component,
    ACTIONS(117), 2,
      anon_sym_SEMI,
      anon_sym_PIPE,
    STATE(11), 2,
      sym_comment,
      aux_sym_grammar_rule_repeat1,
    STATE(43), 2,
      sym_action,
      sym_directive_merge,
    STATE(38), 3,
      sym_string_literal,
      sym_grammar_rule_identifier,
      sym_char_literal,
    ACTIONS(128), 5,
      anon_sym_L_DQUOTE,
      anon_sym_u_DQUOTE,
      anon_sym_U_DQUOTE,
      anon_sym_u8_DQUOTE,
      anon_sym_DQUOTE,
  [609] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(12), 1,
      sym_comment,
    ACTIONS(136), 2,
      aux_sym__component_token1,
      anon_sym_PERCENT,
    ACTIONS(134), 17,
      anon_sym_SEMI,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_PERCENT,
      anon_sym_PIPE,
      anon_sym_LBRACK,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_PERCENTmerge,
      anon_sym_RPAREN,
      anon_sym_L_DQUOTE,
      anon_sym_u_DQUOTE,
      anon_sym_U_DQUOTE,
      anon_sym_u8_DQUOTE,
      anon_sym_DQUOTE,
      sym_number_literal,
      anon_sym_SQUOTE,
  [642] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(13), 1,
      sym_comment,
    ACTIONS(140), 2,
      aux_sym__component_token1,
      anon_sym_PERCENT,
    ACTIONS(138), 17,
      anon_sym_SEMI,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_PERCENT,
      anon_sym_PIPE,
      anon_sym_LBRACK,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_PERCENTmerge,
      anon_sym_RPAREN,
      anon_sym_L_DQUOTE,
      anon_sym_u_DQUOTE,
      anon_sym_U_DQUOTE,
      anon_sym_u8_DQUOTE,
      anon_sym_DQUOTE,
      sym_number_literal,
      anon_sym_SQUOTE,
  [675] = 14,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(99), 1,
      aux_sym__component_token1,
    ACTIONS(101), 1,
      anon_sym_LBRACE,
    ACTIONS(103), 1,
      anon_sym_PERCENTmerge,
    ACTIONS(109), 1,
      anon_sym_SQUOTE,
    STATE(11), 1,
      aux_sym_grammar_rule_repeat1,
    STATE(14), 1,
      sym_comment,
    STATE(37), 1,
      sym_code_block,
    STATE(45), 1,
      sym__component,
    ACTIONS(142), 2,
      anon_sym_SEMI,
      anon_sym_PIPE,
    STATE(43), 2,
      sym_action,
      sym_directive_merge,
    STATE(38), 3,
      sym_string_literal,
      sym_grammar_rule_identifier,
      sym_char_literal,
    ACTIONS(107), 5,
      anon_sym_L_DQUOTE,
      anon_sym_u_DQUOTE,
      anon_sym_U_DQUOTE,
      anon_sym_u8_DQUOTE,
      anon_sym_DQUOTE,
  [726] = 13,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(99), 1,
      aux_sym__component_token1,
    ACTIONS(109), 1,
      anon_sym_SQUOTE,
    ACTIONS(146), 1,
      anon_sym_PERCENT,
    ACTIONS(148), 1,
      anon_sym_LT,
    STATE(15), 1,
      sym_comment,
    STATE(25), 1,
      aux_sym__decl_type_repeat1,
    STATE(44), 1,
      sym_type_tag,
    STATE(77), 1,
      aux_sym__decl_type_repeat2,
    ACTIONS(144), 3,
      anon_sym_SEMI,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_PERCENT,
    STATE(41), 3,
      sym_string_literal,
      sym_grammar_rule_identifier,
      sym_char_literal,
    ACTIONS(107), 5,
      anon_sym_L_DQUOTE,
      anon_sym_u_DQUOTE,
      anon_sym_U_DQUOTE,
      anon_sym_u8_DQUOTE,
      anon_sym_DQUOTE,
  [774] = 13,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(99), 1,
      aux_sym__component_token1,
    ACTIONS(109), 1,
      anon_sym_SQUOTE,
    ACTIONS(148), 1,
      anon_sym_LT,
    ACTIONS(152), 1,
      anon_sym_PERCENT,
    STATE(16), 1,
      sym_comment,
    STATE(22), 1,
      aux_sym__decl_op_precedence_repeat1,
    STATE(46), 1,
      sym_type_tag,
    STATE(71), 1,
      aux_sym__decl_op_precedence_repeat2,
    ACTIONS(150), 3,
      anon_sym_SEMI,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_PERCENT,
    STATE(31), 3,
      sym_string_literal,
      sym_grammar_rule_identifier,
      sym_char_literal,
    ACTIONS(107), 5,
      anon_sym_L_DQUOTE,
      anon_sym_u_DQUOTE,
      anon_sym_U_DQUOTE,
      anon_sym_u8_DQUOTE,
      anon_sym_DQUOTE,
  [822] = 13,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(99), 1,
      aux_sym__component_token1,
    ACTIONS(109), 1,
      anon_sym_SQUOTE,
    ACTIONS(148), 1,
      anon_sym_LT,
    ACTIONS(156), 1,
      anon_sym_PERCENT,
    STATE(17), 1,
      sym_comment,
    STATE(22), 1,
      aux_sym__decl_op_precedence_repeat1,
    STATE(46), 1,
      sym_type_tag,
    STATE(82), 1,
      aux_sym__decl_op_precedence_repeat2,
    ACTIONS(154), 3,
      anon_sym_SEMI,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_PERCENT,
    STATE(31), 3,
      sym_string_literal,
      sym_grammar_rule_identifier,
      sym_char_literal,
    ACTIONS(107), 5,
      anon_sym_L_DQUOTE,
      anon_sym_u_DQUOTE,
      anon_sym_U_DQUOTE,
      anon_sym_u8_DQUOTE,
      anon_sym_DQUOTE,
  [870] = 14,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(99), 1,
      aux_sym__component_token1,
    ACTIONS(101), 1,
      anon_sym_LBRACE,
    ACTIONS(103), 1,
      anon_sym_PERCENTmerge,
    ACTIONS(109), 1,
      anon_sym_SQUOTE,
    ACTIONS(158), 1,
      sym_directive_empty,
    STATE(14), 1,
      aux_sym_grammar_rule_repeat1,
    STATE(18), 1,
      sym_comment,
    STATE(37), 1,
      sym_code_block,
    STATE(45), 1,
      sym__component,
    STATE(43), 2,
      sym_action,
      sym_directive_merge,
    STATE(38), 3,
      sym_string_literal,
      sym_grammar_rule_identifier,
      sym_char_literal,
    ACTIONS(107), 5,
      anon_sym_L_DQUOTE,
      anon_sym_u_DQUOTE,
      anon_sym_U_DQUOTE,
      anon_sym_u8_DQUOTE,
      anon_sym_DQUOTE,
  [920] = 13,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(99), 1,
      aux_sym__component_token1,
    ACTIONS(109), 1,
      anon_sym_SQUOTE,
    ACTIONS(148), 1,
      anon_sym_LT,
    ACTIONS(162), 1,
      anon_sym_PERCENT,
    STATE(19), 1,
      sym_comment,
    STATE(25), 1,
      aux_sym__decl_type_repeat1,
    STATE(44), 1,
      sym_type_tag,
    STATE(67), 1,
      aux_sym__decl_type_repeat2,
    ACTIONS(160), 3,
      anon_sym_SEMI,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_PERCENT,
    STATE(41), 3,
      sym_string_literal,
      sym_grammar_rule_identifier,
      sym_char_literal,
    ACTIONS(107), 5,
      anon_sym_L_DQUOTE,
      anon_sym_u_DQUOTE,
      anon_sym_U_DQUOTE,
      anon_sym_u8_DQUOTE,
      anon_sym_DQUOTE,
  [968] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(20), 1,
      sym_comment,
    ACTIONS(166), 2,
      aux_sym__component_token1,
      anon_sym_PERCENT,
    ACTIONS(164), 15,
      anon_sym_SEMI,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_PERCENT,
      anon_sym_PIPE,
      anon_sym_LBRACK,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_PERCENTmerge,
      anon_sym_L_DQUOTE,
      anon_sym_u_DQUOTE,
      anon_sym_U_DQUOTE,
      anon_sym_u8_DQUOTE,
      anon_sym_DQUOTE,
      sym_number_literal,
      anon_sym_SQUOTE,
  [999] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(21), 1,
      sym_comment,
    ACTIONS(170), 2,
      aux_sym__component_token1,
      anon_sym_PERCENT,
    ACTIONS(168), 15,
      anon_sym_SEMI,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_PERCENT,
      anon_sym_PIPE,
      anon_sym_LBRACK,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_PERCENTmerge,
      anon_sym_L_DQUOTE,
      anon_sym_u_DQUOTE,
      anon_sym_U_DQUOTE,
      anon_sym_u8_DQUOTE,
      anon_sym_DQUOTE,
      sym_number_literal,
      anon_sym_SQUOTE,
  [1030] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(174), 1,
      aux_sym__component_token1,
    ACTIONS(177), 1,
      anon_sym_PERCENT,
    ACTIONS(182), 1,
      anon_sym_SQUOTE,
    STATE(22), 2,
      sym_comment,
      aux_sym__decl_op_precedence_repeat1,
    STATE(31), 3,
      sym_string_literal,
      sym_grammar_rule_identifier,
      sym_char_literal,
    ACTIONS(172), 4,
      anon_sym_SEMI,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_PERCENT,
      anon_sym_LT,
    ACTIONS(179), 5,
      anon_sym_L_DQUOTE,
      anon_sym_u_DQUOTE,
      anon_sym_U_DQUOTE,
      anon_sym_u8_DQUOTE,
      anon_sym_DQUOTE,
  [1068] = 10,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(99), 1,
      aux_sym__component_token1,
    ACTIONS(109), 1,
      anon_sym_SQUOTE,
    ACTIONS(187), 1,
      anon_sym_PERCENT,
    STATE(22), 1,
      aux_sym__decl_op_precedence_repeat1,
    STATE(23), 1,
      sym_comment,
    STATE(31), 3,
      sym_string_literal,
      sym_grammar_rule_identifier,
      sym_char_literal,
    ACTIONS(185), 4,
      anon_sym_SEMI,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_PERCENT,
      anon_sym_LT,
    ACTIONS(107), 5,
      anon_sym_L_DQUOTE,
      anon_sym_u_DQUOTE,
      anon_sym_U_DQUOTE,
      anon_sym_u8_DQUOTE,
      anon_sym_DQUOTE,
  [1108] = 10,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(99), 1,
      aux_sym__component_token1,
    ACTIONS(109), 1,
      anon_sym_SQUOTE,
    ACTIONS(191), 1,
      anon_sym_PERCENT,
    STATE(24), 1,
      sym_comment,
    STATE(25), 1,
      aux_sym__decl_type_repeat1,
    STATE(41), 3,
      sym_string_literal,
      sym_grammar_rule_identifier,
      sym_char_literal,
    ACTIONS(189), 4,
      anon_sym_SEMI,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_PERCENT,
      anon_sym_LT,
    ACTIONS(107), 5,
      anon_sym_L_DQUOTE,
      anon_sym_u_DQUOTE,
      anon_sym_U_DQUOTE,
      anon_sym_u8_DQUOTE,
      anon_sym_DQUOTE,
  [1148] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(195), 1,
      aux_sym__component_token1,
    ACTIONS(198), 1,
      anon_sym_PERCENT,
    ACTIONS(203), 1,
      anon_sym_SQUOTE,
    STATE(25), 2,
      sym_comment,
      aux_sym__decl_type_repeat1,
    STATE(41), 3,
      sym_string_literal,
      sym_grammar_rule_identifier,
      sym_char_literal,
    ACTIONS(193), 4,
      anon_sym_SEMI,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_PERCENT,
      anon_sym_LT,
    ACTIONS(200), 5,
      anon_sym_L_DQUOTE,
      anon_sym_u_DQUOTE,
      anon_sym_U_DQUOTE,
      anon_sym_u8_DQUOTE,
      anon_sym_DQUOTE,
  [1186] = 10,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(210), 1,
      anon_sym__LPAREN,
    ACTIONS(214), 1,
      sym_number_literal,
    STATE(26), 1,
      sym_comment,
    STATE(94), 1,
      sym_string_literal,
    STATE(95), 1,
      sym_string,
    ACTIONS(208), 2,
      aux_sym__component_token1,
      anon_sym_PERCENT,
    ACTIONS(206), 4,
      anon_sym_SEMI,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_PERCENT,
      anon_sym_LT,
    ACTIONS(212), 5,
      anon_sym_L_DQUOTE,
      anon_sym_u_DQUOTE,
      anon_sym_U_DQUOTE,
      anon_sym_u8_DQUOTE,
      anon_sym_DQUOTE,
  [1225] = 11,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(218), 1,
      aux_sym__component_token1,
    ACTIONS(220), 1,
      anon_sym_PERCENT,
    ACTIONS(222), 1,
      anon_sym_DOT,
    ACTIONS(224), 1,
      anon_sym_LBRACE,
    STATE(27), 1,
      sym_comment,
    STATE(34), 1,
      aux_sym__decl_define_repeat1,
    STATE(153), 1,
      sym_string_literal,
    ACTIONS(216), 3,
      anon_sym_SEMI,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_PERCENT,
    ACTIONS(107), 5,
      anon_sym_L_DQUOTE,
      anon_sym_u_DQUOTE,
      anon_sym_U_DQUOTE,
      anon_sym_u8_DQUOTE,
      anon_sym_DQUOTE,
  [1265] = 11,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(222), 1,
      anon_sym_DOT,
    ACTIONS(228), 1,
      aux_sym__component_token1,
    ACTIONS(230), 1,
      anon_sym_PERCENT,
    ACTIONS(232), 1,
      anon_sym_LBRACE,
    STATE(27), 1,
      aux_sym__decl_define_repeat1,
    STATE(28), 1,
      sym_comment,
    STATE(143), 1,
      sym_string_literal,
    ACTIONS(226), 3,
      anon_sym_SEMI,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_PERCENT,
    ACTIONS(107), 5,
      anon_sym_L_DQUOTE,
      anon_sym_u_DQUOTE,
      anon_sym_U_DQUOTE,
      anon_sym_u8_DQUOTE,
      anon_sym_DQUOTE,
  [1305] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(210), 1,
      anon_sym__LPAREN,
    STATE(29), 1,
      sym_comment,
    STATE(91), 1,
      sym_string,
    STATE(94), 1,
      sym_string_literal,
    ACTIONS(236), 2,
      aux_sym__component_token1,
      anon_sym_PERCENT,
    ACTIONS(234), 4,
      anon_sym_SEMI,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_PERCENT,
      anon_sym_LT,
    ACTIONS(212), 5,
      anon_sym_L_DQUOTE,
      anon_sym_u_DQUOTE,
      anon_sym_U_DQUOTE,
      anon_sym_u8_DQUOTE,
      anon_sym_DQUOTE,
  [1341] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(242), 1,
      sym_number_literal,
    STATE(30), 1,
      sym_comment,
    STATE(96), 1,
      sym_string_literal,
    ACTIONS(240), 2,
      aux_sym__component_token1,
      anon_sym_PERCENT,
    ACTIONS(238), 4,
      anon_sym_SEMI,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_PERCENT,
      anon_sym_LT,
    ACTIONS(212), 5,
      anon_sym_L_DQUOTE,
      anon_sym_u_DQUOTE,
      anon_sym_U_DQUOTE,
      anon_sym_u8_DQUOTE,
      anon_sym_DQUOTE,
  [1374] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(248), 1,
      sym_number_literal,
    STATE(31), 1,
      sym_comment,
    ACTIONS(246), 2,
      aux_sym__component_token1,
      anon_sym_PERCENT,
    ACTIONS(244), 10,
      anon_sym_SEMI,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_PERCENT,
      anon_sym_LT,
      anon_sym_L_DQUOTE,
      anon_sym_u_DQUOTE,
      anon_sym_U_DQUOTE,
      anon_sym_u8_DQUOTE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [1403] = 10,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(99), 1,
      aux_sym__component_token1,
    ACTIONS(109), 1,
      anon_sym_SQUOTE,
    ACTIONS(148), 1,
      anon_sym_LT,
    STATE(17), 1,
      aux_sym__decl_op_precedence_repeat1,
    STATE(32), 1,
      sym_comment,
    STATE(50), 1,
      sym_type_tag,
    STATE(31), 3,
      sym_string_literal,
      sym_grammar_rule_identifier,
      sym_char_literal,
    ACTIONS(107), 5,
      anon_sym_L_DQUOTE,
      anon_sym_u_DQUOTE,
      anon_sym_U_DQUOTE,
      anon_sym_u8_DQUOTE,
      anon_sym_DQUOTE,
  [1440] = 10,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(99), 1,
      aux_sym__component_token1,
    ACTIONS(109), 1,
      anon_sym_SQUOTE,
    ACTIONS(148), 1,
      anon_sym_LT,
    STATE(15), 1,
      aux_sym__decl_type_repeat1,
    STATE(33), 1,
      sym_comment,
    STATE(48), 1,
      sym_type_tag,
    STATE(41), 3,
      sym_string_literal,
      sym_grammar_rule_identifier,
      sym_char_literal,
    ACTIONS(107), 5,
      anon_sym_L_DQUOTE,
      anon_sym_u_DQUOTE,
      anon_sym_U_DQUOTE,
      anon_sym_u8_DQUOTE,
      anon_sym_DQUOTE,
  [1477] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(254), 1,
      anon_sym_DOT,
    ACTIONS(252), 2,
      aux_sym__component_token1,
      anon_sym_PERCENT,
    STATE(34), 2,
      sym_comment,
      aux_sym__decl_define_repeat1,
    ACTIONS(250), 9,
      anon_sym_SEMI,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_PERCENT,
      anon_sym_LBRACE,
      anon_sym_L_DQUOTE,
      anon_sym_u_DQUOTE,
      anon_sym_U_DQUOTE,
      anon_sym_u8_DQUOTE,
      anon_sym_DQUOTE,
  [1506] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(35), 1,
      sym_comment,
    STATE(89), 1,
      sym_string_literal,
    ACTIONS(259), 2,
      aux_sym__component_token1,
      anon_sym_PERCENT,
    ACTIONS(257), 4,
      anon_sym_SEMI,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_PERCENT,
      anon_sym_LT,
    ACTIONS(212), 5,
      anon_sym_L_DQUOTE,
      anon_sym_u_DQUOTE,
      anon_sym_U_DQUOTE,
      anon_sym_u8_DQUOTE,
      anon_sym_DQUOTE,
  [1536] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(263), 1,
      aux_sym__component_token1,
    STATE(36), 1,
      sym_comment,
    ACTIONS(261), 11,
      anon_sym_SEMI,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      anon_sym_PERCENTmerge,
      sym_directive_empty,
      anon_sym_L_DQUOTE,
      anon_sym_u_DQUOTE,
      anon_sym_U_DQUOTE,
      anon_sym_u8_DQUOTE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [1562] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(267), 1,
      aux_sym__component_token1,
    STATE(37), 1,
      sym_comment,
    ACTIONS(265), 11,
      anon_sym_SEMI,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      anon_sym_PERCENTmerge,
      sym_directive_empty,
      anon_sym_L_DQUOTE,
      anon_sym_u_DQUOTE,
      anon_sym_U_DQUOTE,
      anon_sym_u8_DQUOTE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [1588] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(271), 1,
      anon_sym_LBRACK,
    ACTIONS(273), 1,
      aux_sym__component_token1,
    STATE(38), 1,
      sym_comment,
    ACTIONS(269), 10,
      anon_sym_SEMI,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      anon_sym_PERCENTmerge,
      anon_sym_L_DQUOTE,
      anon_sym_u_DQUOTE,
      anon_sym_U_DQUOTE,
      anon_sym_u8_DQUOTE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [1616] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(273), 1,
      aux_sym__component_token1,
    ACTIONS(275), 1,
      sym_directive_empty,
    STATE(39), 1,
      sym_comment,
    ACTIONS(269), 10,
      anon_sym_SEMI,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      anon_sym_PERCENTmerge,
      anon_sym_L_DQUOTE,
      anon_sym_u_DQUOTE,
      anon_sym_U_DQUOTE,
      anon_sym_u8_DQUOTE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [1644] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(40), 1,
      sym_comment,
    ACTIONS(177), 2,
      aux_sym__component_token1,
      anon_sym_PERCENT,
    ACTIONS(172), 10,
      anon_sym_SEMI,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_PERCENT,
      anon_sym_LT,
      anon_sym_L_DQUOTE,
      anon_sym_u_DQUOTE,
      anon_sym_U_DQUOTE,
      anon_sym_u8_DQUOTE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [1670] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(41), 1,
      sym_comment,
    ACTIONS(279), 2,
      aux_sym__component_token1,
      anon_sym_PERCENT,
    ACTIONS(277), 10,
      anon_sym_SEMI,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_PERCENT,
      anon_sym_LT,
      anon_sym_L_DQUOTE,
      anon_sym_u_DQUOTE,
      anon_sym_U_DQUOTE,
      anon_sym_u8_DQUOTE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [1696] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(42), 1,
      sym_comment,
    ACTIONS(252), 2,
      aux_sym__component_token1,
      anon_sym_PERCENT,
    ACTIONS(250), 10,
      anon_sym_SEMI,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_PERCENT,
      anon_sym_DOT,
      anon_sym_LBRACE,
      anon_sym_L_DQUOTE,
      anon_sym_u_DQUOTE,
      anon_sym_U_DQUOTE,
      anon_sym_u8_DQUOTE,
      anon_sym_DQUOTE,
  [1722] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(273), 1,
      aux_sym__component_token1,
    STATE(43), 1,
      sym_comment,
    ACTIONS(269), 10,
      anon_sym_SEMI,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      anon_sym_PERCENTmerge,
      anon_sym_L_DQUOTE,
      anon_sym_u_DQUOTE,
      anon_sym_U_DQUOTE,
      anon_sym_u8_DQUOTE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [1747] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(99), 1,
      aux_sym__component_token1,
    ACTIONS(109), 1,
      anon_sym_SQUOTE,
    STATE(24), 1,
      aux_sym__decl_type_repeat1,
    STATE(44), 1,
      sym_comment,
    STATE(41), 3,
      sym_string_literal,
      sym_grammar_rule_identifier,
      sym_char_literal,
    ACTIONS(107), 5,
      anon_sym_L_DQUOTE,
      anon_sym_u_DQUOTE,
      anon_sym_U_DQUOTE,
      anon_sym_u8_DQUOTE,
      anon_sym_DQUOTE,
  [1778] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(283), 1,
      aux_sym__component_token1,
    STATE(45), 1,
      sym_comment,
    ACTIONS(281), 10,
      anon_sym_SEMI,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      anon_sym_PERCENTmerge,
      anon_sym_L_DQUOTE,
      anon_sym_u_DQUOTE,
      anon_sym_U_DQUOTE,
      anon_sym_u8_DQUOTE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [1803] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(99), 1,
      aux_sym__component_token1,
    ACTIONS(109), 1,
      anon_sym_SQUOTE,
    STATE(23), 1,
      aux_sym__decl_op_precedence_repeat1,
    STATE(46), 1,
      sym_comment,
    STATE(31), 3,
      sym_string_literal,
      sym_grammar_rule_identifier,
      sym_char_literal,
    ACTIONS(107), 5,
      anon_sym_L_DQUOTE,
      anon_sym_u_DQUOTE,
      anon_sym_U_DQUOTE,
      anon_sym_u8_DQUOTE,
      anon_sym_DQUOTE,
  [1834] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(287), 1,
      aux_sym__component_token1,
    STATE(47), 1,
      sym_comment,
    ACTIONS(285), 10,
      anon_sym_SEMI,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      anon_sym_PERCENTmerge,
      anon_sym_L_DQUOTE,
      anon_sym_u_DQUOTE,
      anon_sym_U_DQUOTE,
      anon_sym_u8_DQUOTE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [1859] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(99), 1,
      aux_sym__component_token1,
    ACTIONS(109), 1,
      anon_sym_SQUOTE,
    STATE(19), 1,
      aux_sym__decl_type_repeat1,
    STATE(48), 1,
      sym_comment,
    STATE(41), 3,
      sym_string_literal,
      sym_grammar_rule_identifier,
      sym_char_literal,
    ACTIONS(107), 5,
      anon_sym_L_DQUOTE,
      anon_sym_u_DQUOTE,
      anon_sym_U_DQUOTE,
      anon_sym_u8_DQUOTE,
      anon_sym_DQUOTE,
  [1890] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(291), 1,
      aux_sym__component_token1,
    STATE(49), 1,
      sym_comment,
    ACTIONS(289), 10,
      anon_sym_SEMI,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      anon_sym_PERCENTmerge,
      anon_sym_L_DQUOTE,
      anon_sym_u_DQUOTE,
      anon_sym_U_DQUOTE,
      anon_sym_u8_DQUOTE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [1915] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(99), 1,
      aux_sym__component_token1,
    ACTIONS(109), 1,
      anon_sym_SQUOTE,
    STATE(16), 1,
      aux_sym__decl_op_precedence_repeat1,
    STATE(50), 1,
      sym_comment,
    STATE(31), 3,
      sym_string_literal,
      sym_grammar_rule_identifier,
      sym_char_literal,
    ACTIONS(107), 5,
      anon_sym_L_DQUOTE,
      anon_sym_u_DQUOTE,
      anon_sym_U_DQUOTE,
      anon_sym_u8_DQUOTE,
      anon_sym_DQUOTE,
  [1946] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(295), 1,
      anon_sym_PERCENT,
    STATE(51), 1,
      sym_comment,
    STATE(130), 1,
      sym_string_literal,
    ACTIONS(293), 3,
      anon_sym_SEMI,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_PERCENT,
    ACTIONS(107), 5,
      anon_sym_L_DQUOTE,
      anon_sym_u_DQUOTE,
      anon_sym_U_DQUOTE,
      anon_sym_u8_DQUOTE,
      anon_sym_DQUOTE,
  [1974] = 11,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(299), 1,
      aux_sym__component_token1,
    ACTIONS(301), 1,
      anon_sym_PERCENT,
    ACTIONS(303), 1,
      anon_sym_LT,
    STATE(52), 1,
      sym_comment,
    STATE(62), 1,
      sym_type_tag,
    STATE(63), 1,
      aux_sym__decl_nterm_repeat1,
    STATE(81), 1,
      aux_sym__decl_nterm_repeat2,
    STATE(102), 1,
      sym_grammar_rule_identifier,
    ACTIONS(297), 3,
      anon_sym_SEMI,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_PERCENT,
  [2010] = 11,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(23), 1,
      aux_sym__component_token1,
    ACTIONS(303), 1,
      anon_sym_LT,
    ACTIONS(307), 1,
      anon_sym_PERCENT,
    STATE(26), 1,
      sym_grammar_rule_identifier,
    STATE(53), 1,
      sym_comment,
    STATE(64), 1,
      aux_sym__decl_token_repeat1,
    STATE(75), 1,
      aux_sym__decl_token_repeat3,
    STATE(176), 1,
      sym_type_tag,
    ACTIONS(305), 3,
      anon_sym_SEMI,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_PERCENT,
  [2046] = 11,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(299), 1,
      aux_sym__component_token1,
    ACTIONS(303), 1,
      anon_sym_LT,
    ACTIONS(311), 1,
      anon_sym_PERCENT,
    STATE(54), 1,
      sym_comment,
    STATE(62), 1,
      sym_type_tag,
    STATE(63), 1,
      aux_sym__decl_nterm_repeat1,
    STATE(74), 1,
      aux_sym__decl_nterm_repeat2,
    STATE(102), 1,
      sym_grammar_rule_identifier,
    ACTIONS(309), 3,
      anon_sym_SEMI,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_PERCENT,
  [2082] = 11,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(23), 1,
      aux_sym__component_token1,
    ACTIONS(303), 1,
      anon_sym_LT,
    ACTIONS(315), 1,
      anon_sym_PERCENT,
    STATE(26), 1,
      sym_grammar_rule_identifier,
    STATE(55), 1,
      sym_comment,
    STATE(64), 1,
      aux_sym__decl_token_repeat1,
    STATE(78), 1,
      aux_sym__decl_token_repeat3,
    STATE(176), 1,
      sym_type_tag,
    ACTIONS(313), 3,
      anon_sym_SEMI,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_PERCENT,
  [2118] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(319), 1,
      aux_sym__component_token1,
    ACTIONS(322), 1,
      anon_sym_PERCENT,
    ACTIONS(324), 1,
      anon_sym_LT,
    STATE(56), 2,
      sym_comment,
      aux_sym__decl_destructor_repeat1,
    STATE(86), 2,
      sym_type_tag,
      sym_grammar_rule_identifier,
    ACTIONS(317), 3,
      anon_sym_SEMI,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_PERCENT,
  [2147] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(299), 1,
      aux_sym__component_token1,
    ACTIONS(329), 1,
      anon_sym_PERCENT,
    ACTIONS(331), 1,
      anon_sym_LT,
    STATE(57), 1,
      sym_comment,
    STATE(59), 1,
      aux_sym__decl_destructor_repeat1,
    STATE(86), 2,
      sym_type_tag,
      sym_grammar_rule_identifier,
    ACTIONS(327), 3,
      anon_sym_SEMI,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_PERCENT,
  [2178] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(299), 1,
      aux_sym__component_token1,
    ACTIONS(331), 1,
      anon_sym_LT,
    ACTIONS(335), 1,
      anon_sym_PERCENT,
    STATE(58), 1,
      sym_comment,
    STATE(60), 1,
      aux_sym__decl_destructor_repeat1,
    STATE(86), 2,
      sym_type_tag,
      sym_grammar_rule_identifier,
    ACTIONS(333), 3,
      anon_sym_SEMI,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_PERCENT,
  [2209] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(299), 1,
      aux_sym__component_token1,
    ACTIONS(331), 1,
      anon_sym_LT,
    ACTIONS(339), 1,
      anon_sym_PERCENT,
    STATE(56), 1,
      aux_sym__decl_destructor_repeat1,
    STATE(59), 1,
      sym_comment,
    STATE(86), 2,
      sym_type_tag,
      sym_grammar_rule_identifier,
    ACTIONS(337), 3,
      anon_sym_SEMI,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_PERCENT,
  [2240] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(299), 1,
      aux_sym__component_token1,
    ACTIONS(331), 1,
      anon_sym_LT,
    ACTIONS(343), 1,
      anon_sym_PERCENT,
    STATE(56), 1,
      aux_sym__decl_destructor_repeat1,
    STATE(60), 1,
      sym_comment,
    STATE(86), 2,
      sym_type_tag,
      sym_grammar_rule_identifier,
    ACTIONS(341), 3,
      anon_sym_SEMI,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_PERCENT,
  [2271] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(299), 1,
      aux_sym__component_token1,
    ACTIONS(347), 1,
      anon_sym_PERCENT,
    STATE(61), 1,
      sym_comment,
    STATE(63), 1,
      aux_sym__decl_nterm_repeat1,
    STATE(102), 1,
      sym_grammar_rule_identifier,
    ACTIONS(345), 4,
      anon_sym_SEMI,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_PERCENT,
      anon_sym_LT,
  [2299] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(299), 1,
      aux_sym__component_token1,
    ACTIONS(351), 1,
      anon_sym_PERCENT,
    STATE(61), 1,
      aux_sym__decl_nterm_repeat1,
    STATE(62), 1,
      sym_comment,
    STATE(102), 1,
      sym_grammar_rule_identifier,
    ACTIONS(349), 4,
      anon_sym_SEMI,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_PERCENT,
      anon_sym_LT,
  [2327] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(355), 1,
      aux_sym__component_token1,
    ACTIONS(358), 1,
      anon_sym_PERCENT,
    STATE(102), 1,
      sym_grammar_rule_identifier,
    STATE(63), 2,
      sym_comment,
      aux_sym__decl_nterm_repeat1,
    ACTIONS(353), 4,
      anon_sym_SEMI,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_PERCENT,
      anon_sym_LT,
  [2353] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(236), 1,
      anon_sym_PERCENT,
    ACTIONS(360), 1,
      aux_sym__component_token1,
    STATE(26), 1,
      sym_grammar_rule_identifier,
    STATE(64), 2,
      sym_comment,
      aux_sym__decl_token_repeat1,
    ACTIONS(234), 4,
      anon_sym_SEMI,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_PERCENT,
      anon_sym_LT,
  [2379] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(259), 1,
      anon_sym_PERCENT,
    ACTIONS(363), 1,
      aux_sym__component_token1,
    STATE(30), 1,
      sym_grammar_rule_identifier,
    STATE(65), 2,
      sym_comment,
      aux_sym__decl_token_repeat2,
    ACTIONS(257), 4,
      anon_sym_SEMI,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_PERCENT,
      anon_sym_LT,
  [2405] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(23), 1,
      aux_sym__component_token1,
    ACTIONS(368), 1,
      anon_sym_PERCENT,
    STATE(30), 1,
      sym_grammar_rule_identifier,
    STATE(65), 1,
      aux_sym__decl_token_repeat2,
    STATE(66), 1,
      sym_comment,
    ACTIONS(366), 4,
      anon_sym_SEMI,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_PERCENT,
      anon_sym_LT,
  [2433] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(148), 1,
      anon_sym_LT,
    ACTIONS(372), 1,
      anon_sym_PERCENT,
    STATE(44), 1,
      sym_type_tag,
    STATE(67), 1,
      sym_comment,
    STATE(72), 1,
      aux_sym__decl_type_repeat2,
    ACTIONS(370), 3,
      anon_sym_SEMI,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_PERCENT,
  [2460] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(374), 1,
      aux_sym__component_token1,
    STATE(68), 1,
      sym_comment,
    STATE(210), 1,
      sym_string_literal,
    ACTIONS(107), 5,
      anon_sym_L_DQUOTE,
      anon_sym_u_DQUOTE,
      anon_sym_U_DQUOTE,
      anon_sym_u8_DQUOTE,
      anon_sym_DQUOTE,
  [2483] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(263), 1,
      anon_sym_PERCENT,
    STATE(69), 1,
      sym_comment,
    ACTIONS(261), 6,
      anon_sym_SEMI,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_PERCENT,
      anon_sym_PIPE,
      aux_sym__component_token1,
      anon_sym_LT,
  [2504] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(187), 1,
      anon_sym_PERCENT,
    ACTIONS(376), 1,
      anon_sym_LT,
    STATE(46), 1,
      sym_type_tag,
    STATE(70), 2,
      sym_comment,
      aux_sym__decl_op_precedence_repeat2,
    ACTIONS(185), 3,
      anon_sym_SEMI,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_PERCENT,
  [2529] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(148), 1,
      anon_sym_LT,
    ACTIONS(381), 1,
      anon_sym_PERCENT,
    STATE(46), 1,
      sym_type_tag,
    STATE(70), 1,
      aux_sym__decl_op_precedence_repeat2,
    STATE(71), 1,
      sym_comment,
    ACTIONS(379), 3,
      anon_sym_SEMI,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_PERCENT,
  [2556] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(191), 1,
      anon_sym_PERCENT,
    ACTIONS(383), 1,
      anon_sym_LT,
    STATE(44), 1,
      sym_type_tag,
    STATE(72), 2,
      sym_comment,
      aux_sym__decl_type_repeat2,
    ACTIONS(189), 3,
      anon_sym_SEMI,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_PERCENT,
  [2581] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(347), 1,
      anon_sym_PERCENT,
    ACTIONS(386), 1,
      anon_sym_LT,
    STATE(62), 1,
      sym_type_tag,
    STATE(73), 2,
      sym_comment,
      aux_sym__decl_nterm_repeat2,
    ACTIONS(345), 3,
      anon_sym_SEMI,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_PERCENT,
  [2606] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(303), 1,
      anon_sym_LT,
    ACTIONS(391), 1,
      anon_sym_PERCENT,
    STATE(62), 1,
      sym_type_tag,
    STATE(73), 1,
      aux_sym__decl_nterm_repeat2,
    STATE(74), 1,
      sym_comment,
    ACTIONS(389), 3,
      anon_sym_SEMI,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_PERCENT,
  [2633] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(303), 1,
      anon_sym_LT,
    ACTIONS(395), 1,
      anon_sym_PERCENT,
    STATE(75), 1,
      sym_comment,
    STATE(76), 1,
      aux_sym__decl_token_repeat3,
    STATE(176), 1,
      sym_type_tag,
    ACTIONS(393), 3,
      anon_sym_SEMI,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_PERCENT,
  [2660] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(368), 1,
      anon_sym_PERCENT,
    ACTIONS(397), 1,
      anon_sym_LT,
    STATE(176), 1,
      sym_type_tag,
    STATE(76), 2,
      sym_comment,
      aux_sym__decl_token_repeat3,
    ACTIONS(366), 3,
      anon_sym_SEMI,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_PERCENT,
  [2685] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(148), 1,
      anon_sym_LT,
    ACTIONS(162), 1,
      anon_sym_PERCENT,
    STATE(44), 1,
      sym_type_tag,
    STATE(72), 1,
      aux_sym__decl_type_repeat2,
    STATE(77), 1,
      sym_comment,
    ACTIONS(160), 3,
      anon_sym_SEMI,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_PERCENT,
  [2712] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(303), 1,
      anon_sym_LT,
    ACTIONS(307), 1,
      anon_sym_PERCENT,
    STATE(76), 1,
      aux_sym__decl_token_repeat3,
    STATE(78), 1,
      sym_comment,
    STATE(176), 1,
      sym_type_tag,
    ACTIONS(305), 3,
      anon_sym_SEMI,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_PERCENT,
  [2739] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(400), 1,
      aux_sym__component_token1,
    STATE(79), 1,
      sym_comment,
    ACTIONS(402), 6,
      anon_sym_L_DQUOTE,
      anon_sym_u_DQUOTE,
      anon_sym_U_DQUOTE,
      anon_sym_u8_DQUOTE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [2760] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(404), 1,
      aux_sym__component_token1,
    STATE(80), 1,
      sym_comment,
    STATE(220), 1,
      sym_string_literal,
    ACTIONS(107), 5,
      anon_sym_L_DQUOTE,
      anon_sym_u_DQUOTE,
      anon_sym_U_DQUOTE,
      anon_sym_u8_DQUOTE,
      anon_sym_DQUOTE,
  [2783] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(303), 1,
      anon_sym_LT,
    ACTIONS(311), 1,
      anon_sym_PERCENT,
    STATE(62), 1,
      sym_type_tag,
    STATE(73), 1,
      aux_sym__decl_nterm_repeat2,
    STATE(81), 1,
      sym_comment,
    ACTIONS(309), 3,
      anon_sym_SEMI,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_PERCENT,
  [2810] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(148), 1,
      anon_sym_LT,
    ACTIONS(152), 1,
      anon_sym_PERCENT,
    STATE(46), 1,
      sym_type_tag,
    STATE(70), 1,
      aux_sym__decl_op_precedence_repeat2,
    STATE(82), 1,
      sym_comment,
    ACTIONS(150), 3,
      anon_sym_SEMI,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_PERCENT,
  [2837] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(97), 1,
      anon_sym_PIPE,
    ACTIONS(406), 1,
      anon_sym_SEMI,
    ACTIONS(408), 1,
      anon_sym_LBRACE,
    STATE(37), 1,
      sym_code_block,
    STATE(83), 1,
      sym_comment,
    STATE(169), 1,
      sym_action,
    STATE(170), 1,
      aux_sym_grammar_rule_repeat2,
  [2865] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(84), 1,
      sym_comment,
    STATE(154), 1,
      sym_string_literal,
    ACTIONS(107), 5,
      anon_sym_L_DQUOTE,
      anon_sym_u_DQUOTE,
      anon_sym_U_DQUOTE,
      anon_sym_u8_DQUOTE,
      anon_sym_DQUOTE,
  [2885] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(85), 1,
      sym_comment,
    STATE(125), 1,
      sym_string_literal,
    ACTIONS(107), 5,
      anon_sym_L_DQUOTE,
      anon_sym_u_DQUOTE,
      anon_sym_U_DQUOTE,
      anon_sym_u8_DQUOTE,
      anon_sym_DQUOTE,
  [2905] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(412), 1,
      anon_sym_PERCENT,
    STATE(86), 1,
      sym_comment,
    ACTIONS(410), 5,
      anon_sym_SEMI,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_PERCENT,
      aux_sym__component_token1,
      anon_sym_LT,
  [2925] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(414), 1,
      aux_sym__component_token1,
    ACTIONS(418), 1,
      anon_sym_STAR,
    ACTIONS(420), 1,
      anon_sym_COLON_COLON,
    STATE(87), 1,
      sym_comment,
    STATE(88), 1,
      aux_sym__type_atom_repeat1,
    ACTIONS(416), 2,
      anon_sym_LT,
      anon_sym_GT,
  [2951] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(414), 1,
      aux_sym__component_token1,
    ACTIONS(420), 1,
      anon_sym_COLON_COLON,
    ACTIONS(424), 1,
      anon_sym_STAR,
    STATE(88), 1,
      sym_comment,
    STATE(106), 1,
      aux_sym__type_atom_repeat1,
    ACTIONS(422), 2,
      anon_sym_LT,
      anon_sym_GT,
  [2977] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(428), 1,
      anon_sym_PERCENT,
    STATE(89), 1,
      sym_comment,
    ACTIONS(426), 5,
      anon_sym_SEMI,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_PERCENT,
      aux_sym__component_token1,
      anon_sym_LT,
  [2997] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(136), 1,
      anon_sym_PERCENT,
    STATE(90), 1,
      sym_comment,
    ACTIONS(134), 5,
      anon_sym_SEMI,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_PERCENT,
      aux_sym__component_token1,
      anon_sym_LT,
  [3017] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(432), 1,
      anon_sym_PERCENT,
    STATE(91), 1,
      sym_comment,
    ACTIONS(430), 5,
      anon_sym_SEMI,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_PERCENT,
      aux_sym__component_token1,
      anon_sym_LT,
  [3037] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(436), 1,
      anon_sym_PERCENT,
    STATE(92), 1,
      sym_comment,
    ACTIONS(434), 5,
      anon_sym_SEMI,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_PERCENT,
      aux_sym__component_token1,
      anon_sym_LT,
  [3057] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(400), 1,
      anon_sym_PERCENT,
    STATE(93), 1,
      sym_comment,
    ACTIONS(402), 5,
      anon_sym_SEMI,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_PERCENT,
      aux_sym__component_token1,
      anon_sym_LT,
  [3077] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(440), 1,
      anon_sym_PERCENT,
    STATE(94), 1,
      sym_comment,
    ACTIONS(438), 5,
      anon_sym_SEMI,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_PERCENT,
      aux_sym__component_token1,
      anon_sym_LT,
  [3097] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(236), 1,
      anon_sym_PERCENT,
    STATE(95), 1,
      sym_comment,
    ACTIONS(234), 5,
      anon_sym_SEMI,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_PERCENT,
      aux_sym__component_token1,
      anon_sym_LT,
  [3117] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(259), 1,
      anon_sym_PERCENT,
    STATE(96), 1,
      sym_comment,
    ACTIONS(257), 5,
      anon_sym_SEMI,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_PERCENT,
      aux_sym__component_token1,
      anon_sym_LT,
  [3137] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(97), 1,
      sym_comment,
    STATE(223), 1,
      sym_string_literal,
    ACTIONS(107), 5,
      anon_sym_L_DQUOTE,
      anon_sym_u_DQUOTE,
      anon_sym_U_DQUOTE,
      anon_sym_u8_DQUOTE,
      anon_sym_DQUOTE,
  [3157] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(115), 1,
      anon_sym_PERCENT,
    STATE(98), 1,
      sym_comment,
    ACTIONS(113), 5,
      anon_sym_SEMI,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_PERCENT,
      aux_sym__component_token1,
      anon_sym_LT,
  [3177] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(140), 1,
      anon_sym_PERCENT,
    STATE(99), 1,
      sym_comment,
    ACTIONS(138), 5,
      anon_sym_SEMI,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_PERCENT,
      aux_sym__component_token1,
      anon_sym_LT,
  [3197] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(100), 1,
      sym_comment,
    STATE(129), 1,
      sym_string_literal,
    ACTIONS(107), 5,
      anon_sym_L_DQUOTE,
      anon_sym_u_DQUOTE,
      anon_sym_U_DQUOTE,
      anon_sym_u8_DQUOTE,
      anon_sym_DQUOTE,
  [3217] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(322), 1,
      anon_sym_PERCENT,
    STATE(101), 1,
      sym_comment,
    ACTIONS(317), 5,
      anon_sym_SEMI,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_PERCENT,
      aux_sym__component_token1,
      anon_sym_LT,
  [3237] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(444), 1,
      anon_sym_PERCENT,
    STATE(102), 1,
      sym_comment,
    ACTIONS(442), 5,
      anon_sym_SEMI,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_PERCENT,
      aux_sym__component_token1,
      anon_sym_LT,
  [3257] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(103), 1,
      sym_comment,
    STATE(127), 1,
      sym_string_literal,
    ACTIONS(107), 5,
      anon_sym_L_DQUOTE,
      anon_sym_u_DQUOTE,
      anon_sym_U_DQUOTE,
      anon_sym_u8_DQUOTE,
      anon_sym_DQUOTE,
  [3277] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(448), 1,
      anon_sym_PERCENT,
    STATE(104), 1,
      sym_comment,
    ACTIONS(446), 5,
      anon_sym_SEMI,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_PERCENT,
      aux_sym__component_token1,
      anon_sym_LT,
  [3297] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(105), 1,
      sym_comment,
    STATE(126), 1,
      sym_string_literal,
    ACTIONS(107), 5,
      anon_sym_L_DQUOTE,
      anon_sym_u_DQUOTE,
      anon_sym_U_DQUOTE,
      anon_sym_u8_DQUOTE,
      anon_sym_DQUOTE,
  [3317] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(450), 1,
      aux_sym__component_token1,
    ACTIONS(455), 1,
      anon_sym_COLON_COLON,
    STATE(106), 2,
      sym_comment,
      aux_sym__type_atom_repeat1,
    ACTIONS(453), 3,
      anon_sym_LT,
      anon_sym_STAR,
      anon_sym_GT,
  [3339] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(97), 1,
      anon_sym_PIPE,
    ACTIONS(111), 1,
      anon_sym_SEMI,
    ACTIONS(408), 1,
      anon_sym_LBRACE,
    STATE(37), 1,
      sym_code_block,
    STATE(107), 1,
      sym_comment,
    STATE(161), 1,
      sym_action,
    STATE(162), 1,
      aux_sym_grammar_rule_repeat2,
  [3367] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(108), 1,
      sym_comment,
    ACTIONS(458), 5,
      aux_sym__component_token1,
      anon_sym_LT,
      anon_sym_STAR,
      anon_sym_GT,
      anon_sym_COLON_COLON,
  [3384] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(299), 1,
      aux_sym__component_token1,
    ACTIONS(303), 1,
      anon_sym_LT,
    STATE(52), 1,
      aux_sym__decl_nterm_repeat1,
    STATE(102), 1,
      sym_grammar_rule_identifier,
    STATE(109), 1,
      sym_comment,
    STATE(179), 1,
      sym_type_tag,
  [3409] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(23), 1,
      aux_sym__component_token1,
    ACTIONS(303), 1,
      anon_sym_LT,
    STATE(26), 1,
      sym_grammar_rule_identifier,
    STATE(55), 1,
      aux_sym__decl_token_repeat1,
    STATE(110), 1,
      sym_comment,
    STATE(180), 1,
      sym_type_tag,
  [3434] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(111), 1,
      sym_comment,
    ACTIONS(453), 5,
      aux_sym__component_token1,
      anon_sym_LT,
      anon_sym_STAR,
      anon_sym_GT,
      anon_sym_COLON_COLON,
  [3451] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(460), 1,
      aux_sym__component_token1,
    ACTIONS(462), 1,
      anon_sym_STAR,
    ACTIONS(464), 1,
      anon_sym_GT,
    STATE(112), 1,
      sym_comment,
    STATE(184), 1,
      sym__type_atom,
    STATE(236), 1,
      sym_type,
  [3476] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(468), 1,
      anon_sym_PERCENT,
    STATE(113), 1,
      sym_comment,
    ACTIONS(466), 3,
      anon_sym_SEMI,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_PERCENT,
  [3494] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(472), 1,
      anon_sym_PERCENT,
    STATE(114), 1,
      sym_comment,
    ACTIONS(470), 3,
      ts_builtin_sym_end,
      anon_sym_PERCENT_PERCENT,
      aux_sym__component_token1,
  [3512] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(474), 1,
      anon_sym_PERCENT,
    STATE(115), 1,
      sym_comment,
    ACTIONS(13), 3,
      ts_builtin_sym_end,
      anon_sym_PERCENT_PERCENT,
      aux_sym__component_token1,
  [3530] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(478), 1,
      anon_sym_PERCENT,
    STATE(116), 1,
      sym_comment,
    ACTIONS(476), 3,
      anon_sym_SEMI,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_PERCENT,
  [3548] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(482), 1,
      anon_sym_PERCENT,
    STATE(117), 1,
      sym_comment,
    ACTIONS(480), 3,
      anon_sym_SEMI,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_PERCENT,
  [3566] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(486), 1,
      anon_sym_PERCENT,
    STATE(118), 1,
      sym_comment,
    ACTIONS(484), 3,
      anon_sym_SEMI,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_PERCENT,
  [3584] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(490), 1,
      anon_sym_PERCENT,
    STATE(119), 1,
      sym_comment,
    ACTIONS(488), 3,
      anon_sym_SEMI,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_PERCENT,
  [3602] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(494), 1,
      anon_sym_PERCENT,
    STATE(120), 1,
      sym_comment,
    ACTIONS(492), 3,
      ts_builtin_sym_end,
      anon_sym_PERCENT_PERCENT,
      aux_sym__component_token1,
  [3620] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(498), 1,
      anon_sym_PERCENT,
    STATE(121), 1,
      sym_comment,
    ACTIONS(496), 3,
      anon_sym_SEMI,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_PERCENT,
  [3638] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(502), 1,
      anon_sym_PERCENT,
    STATE(122), 1,
      sym_comment,
    ACTIONS(500), 3,
      anon_sym_SEMI,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_PERCENT,
  [3656] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(506), 1,
      anon_sym_PERCENT,
    STATE(123), 1,
      sym_comment,
    ACTIONS(504), 3,
      anon_sym_SEMI,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_PERCENT,
  [3674] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(510), 1,
      anon_sym_PERCENT,
    STATE(124), 1,
      sym_comment,
    ACTIONS(508), 3,
      anon_sym_SEMI,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_PERCENT,
  [3692] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(514), 1,
      anon_sym_PERCENT,
    STATE(125), 1,
      sym_comment,
    ACTIONS(512), 3,
      anon_sym_SEMI,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_PERCENT,
  [3710] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(518), 1,
      anon_sym_PERCENT,
    STATE(126), 1,
      sym_comment,
    ACTIONS(516), 3,
      anon_sym_SEMI,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_PERCENT,
  [3728] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(522), 1,
      anon_sym_PERCENT,
    STATE(127), 1,
      sym_comment,
    ACTIONS(520), 3,
      anon_sym_SEMI,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_PERCENT,
  [3746] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(526), 1,
      anon_sym_PERCENT,
    STATE(128), 1,
      sym_comment,
    ACTIONS(524), 3,
      ts_builtin_sym_end,
      anon_sym_PERCENT_PERCENT,
      aux_sym__component_token1,
  [3764] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(530), 1,
      anon_sym_PERCENT,
    STATE(129), 1,
      sym_comment,
    ACTIONS(528), 3,
      anon_sym_SEMI,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_PERCENT,
  [3782] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(534), 1,
      anon_sym_PERCENT,
    STATE(130), 1,
      sym_comment,
    ACTIONS(532), 3,
      anon_sym_SEMI,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_PERCENT,
  [3800] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(538), 1,
      anon_sym_PERCENT,
    STATE(131), 1,
      sym_comment,
    ACTIONS(536), 3,
      anon_sym_SEMI,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_PERCENT,
  [3818] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(542), 1,
      anon_sym_PERCENT,
    STATE(132), 1,
      sym_comment,
    ACTIONS(540), 3,
      ts_builtin_sym_end,
      anon_sym_PERCENT_PERCENT,
      aux_sym__component_token1,
  [3836] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(546), 1,
      anon_sym_PERCENT,
    STATE(133), 1,
      sym_comment,
    ACTIONS(544), 3,
      anon_sym_SEMI,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_PERCENT,
  [3854] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(550), 1,
      anon_sym_PERCENT,
    STATE(134), 1,
      sym_comment,
    ACTIONS(548), 3,
      anon_sym_SEMI,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_PERCENT,
  [3872] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(554), 1,
      anon_sym_PERCENT,
    STATE(135), 1,
      sym_comment,
    ACTIONS(552), 3,
      anon_sym_SEMI,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_PERCENT,
  [3890] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(558), 1,
      anon_sym_PERCENT,
    STATE(136), 1,
      sym_comment,
    ACTIONS(556), 3,
      ts_builtin_sym_end,
      anon_sym_PERCENT_PERCENT,
      aux_sym__component_token1,
  [3908] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(562), 1,
      anon_sym_PERCENT,
    STATE(137), 1,
      sym_comment,
    ACTIONS(560), 3,
      anon_sym_SEMI,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_PERCENT,
  [3926] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(408), 1,
      anon_sym_LBRACE,
    ACTIONS(564), 1,
      anon_sym_DASH,
    STATE(138), 1,
      sym_comment,
    STATE(146), 1,
      sym_code_block,
    STATE(147), 1,
      aux_sym__decl_code_repeat1,
  [3948] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(568), 1,
      anon_sym_PERCENT,
    STATE(139), 1,
      sym_comment,
    ACTIONS(566), 3,
      anon_sym_SEMI,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_PERCENT,
  [3966] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(572), 1,
      anon_sym_PERCENT,
    STATE(140), 1,
      sym_comment,
    ACTIONS(570), 3,
      anon_sym_SEMI,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_PERCENT,
  [3984] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(574), 1,
      anon_sym_SEMI,
    ACTIONS(578), 1,
      anon_sym_PERCENT,
    STATE(141), 1,
      sym_comment,
    ACTIONS(576), 2,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_PERCENT,
  [4004] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(582), 1,
      anon_sym_PERCENT,
    STATE(142), 1,
      sym_comment,
    ACTIONS(580), 3,
      anon_sym_SEMI,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_PERCENT,
  [4022] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(220), 1,
      anon_sym_PERCENT,
    STATE(143), 1,
      sym_comment,
    ACTIONS(216), 3,
      anon_sym_SEMI,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_PERCENT,
  [4040] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(586), 1,
      anon_sym_PERCENT,
    STATE(144), 1,
      sym_comment,
    ACTIONS(584), 3,
      anon_sym_SEMI,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_PERCENT,
  [4058] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(590), 1,
      anon_sym_PERCENT,
    STATE(145), 1,
      sym_comment,
    ACTIONS(588), 3,
      anon_sym_SEMI,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_PERCENT,
  [4076] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(594), 1,
      anon_sym_PERCENT,
    STATE(146), 1,
      sym_comment,
    ACTIONS(592), 3,
      anon_sym_SEMI,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_PERCENT,
  [4094] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(408), 1,
      anon_sym_LBRACE,
    ACTIONS(564), 1,
      anon_sym_DASH,
    STATE(116), 1,
      sym_code_block,
    STATE(147), 1,
      sym_comment,
    STATE(173), 1,
      aux_sym__decl_code_repeat1,
  [4116] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(598), 1,
      anon_sym_PERCENT,
    STATE(148), 1,
      sym_comment,
    ACTIONS(596), 3,
      anon_sym_SEMI,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_PERCENT,
  [4134] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(602), 1,
      anon_sym_PERCENT,
    STATE(149), 1,
      sym_comment,
    ACTIONS(600), 3,
      anon_sym_SEMI,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_PERCENT,
  [4152] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(606), 1,
      anon_sym_PERCENT,
    STATE(150), 1,
      sym_comment,
    ACTIONS(604), 3,
      ts_builtin_sym_end,
      anon_sym_PERCENT_PERCENT,
      aux_sym__component_token1,
  [4170] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(610), 1,
      anon_sym_PERCENT,
    STATE(151), 1,
      sym_comment,
    ACTIONS(608), 3,
      anon_sym_SEMI,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_PERCENT,
  [4188] = 7,
    ACTIONS(612), 1,
      anon_sym_PERCENT_RBRACE,
    ACTIONS(614), 1,
      aux_sym_prologue_body_token1,
    ACTIONS(616), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(618), 1,
      anon_sym_SLASH_STAR,
    STATE(152), 1,
      sym_comment,
    STATE(168), 1,
      aux_sym_prologue_body_repeat1,
    STATE(224), 1,
      sym_prologue_body,
  [4210] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(622), 1,
      anon_sym_PERCENT,
    STATE(153), 1,
      sym_comment,
    ACTIONS(620), 3,
      anon_sym_SEMI,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_PERCENT,
  [4228] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(626), 1,
      anon_sym_PERCENT,
    STATE(154), 1,
      sym_comment,
    ACTIONS(624), 3,
      anon_sym_SEMI,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_PERCENT,
  [4246] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(630), 1,
      anon_sym_PERCENT,
    STATE(155), 1,
      sym_comment,
    ACTIONS(628), 2,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_PERCENT,
  [4263] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(460), 1,
      aux_sym__component_token1,
    STATE(156), 1,
      sym_comment,
    STATE(184), 1,
      sym__type_atom,
    STATE(212), 1,
      sym_type,
  [4282] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(460), 1,
      aux_sym__component_token1,
    STATE(157), 1,
      sym_comment,
    STATE(184), 1,
      sym__type_atom,
    STATE(236), 1,
      sym_type,
  [4301] = 6,
    ACTIONS(616), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(618), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(632), 1,
      anon_sym_DQUOTE,
    ACTIONS(634), 1,
      aux_sym_string_literal_token1,
    STATE(158), 1,
      sym_comment,
    STATE(174), 1,
      aux_sym_string_literal_repeat1,
  [4320] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(460), 1,
      aux_sym__component_token1,
    STATE(159), 1,
      sym_comment,
    STATE(184), 1,
      sym__type_atom,
    STATE(204), 1,
      sym_type,
  [4339] = 6,
    ACTIONS(616), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(618), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(634), 1,
      aux_sym_string_literal_token1,
    ACTIONS(636), 1,
      anon_sym_DQUOTE,
    STATE(160), 1,
      sym_comment,
    STATE(174), 1,
      aux_sym_string_literal_repeat1,
  [4358] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(97), 1,
      anon_sym_PIPE,
    ACTIONS(406), 1,
      anon_sym_SEMI,
    STATE(161), 1,
      sym_comment,
    STATE(170), 1,
      aux_sym_grammar_rule_repeat2,
  [4377] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(97), 1,
      anon_sym_PIPE,
    ACTIONS(406), 1,
      anon_sym_SEMI,
    STATE(162), 1,
      sym_comment,
    STATE(166), 1,
      aux_sym_grammar_rule_repeat2,
  [4396] = 6,
    ACTIONS(616), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(618), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(634), 1,
      aux_sym_string_literal_token1,
    ACTIONS(638), 1,
      anon_sym_DQUOTE,
    STATE(160), 1,
      aux_sym_string_literal_repeat1,
    STATE(163), 1,
      sym_comment,
  [4415] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(578), 1,
      anon_sym_PERCENT,
    STATE(164), 1,
      sym_comment,
    ACTIONS(576), 2,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_PERCENT,
  [4432] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(642), 1,
      anon_sym_PERCENT,
    STATE(165), 1,
      sym_comment,
    ACTIONS(640), 2,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_PERCENT,
  [4449] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(142), 1,
      anon_sym_SEMI,
    ACTIONS(644), 1,
      anon_sym_PIPE,
    STATE(166), 2,
      sym_comment,
      aux_sym_grammar_rule_repeat2,
  [4466] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(97), 1,
      anon_sym_PIPE,
    ACTIONS(647), 1,
      anon_sym_SEMI,
    STATE(166), 1,
      aux_sym_grammar_rule_repeat2,
    STATE(167), 1,
      sym_comment,
  [4485] = 6,
    ACTIONS(614), 1,
      aux_sym_prologue_body_token1,
    ACTIONS(616), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(618), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(649), 1,
      anon_sym_PERCENT_RBRACE,
    STATE(168), 1,
      sym_comment,
    STATE(181), 1,
      aux_sym_prologue_body_repeat1,
  [4504] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(97), 1,
      anon_sym_PIPE,
    ACTIONS(651), 1,
      anon_sym_SEMI,
    STATE(167), 1,
      aux_sym_grammar_rule_repeat2,
    STATE(169), 1,
      sym_comment,
  [4523] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(97), 1,
      anon_sym_PIPE,
    ACTIONS(651), 1,
      anon_sym_SEMI,
    STATE(166), 1,
      aux_sym_grammar_rule_repeat2,
    STATE(170), 1,
      sym_comment,
  [4542] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(408), 1,
      anon_sym_LBRACE,
    ACTIONS(653), 1,
      aux_sym__component_token1,
    STATE(134), 1,
      sym_code_block,
    STATE(171), 1,
      sym_comment,
  [4561] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(460), 1,
      aux_sym__component_token1,
    STATE(172), 1,
      sym_comment,
    STATE(184), 1,
      sym__type_atom,
    STATE(202), 1,
      sym_type,
  [4580] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(655), 1,
      anon_sym_LBRACE,
    ACTIONS(657), 1,
      anon_sym_DASH,
    STATE(173), 2,
      sym_comment,
      aux_sym__decl_code_repeat1,
  [4597] = 5,
    ACTIONS(616), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(618), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(660), 1,
      anon_sym_DQUOTE,
    ACTIONS(662), 1,
      aux_sym_string_literal_token1,
    STATE(174), 2,
      sym_comment,
      aux_sym_string_literal_repeat1,
  [4614] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(408), 1,
      anon_sym_LBRACE,
    ACTIONS(665), 1,
      aux_sym__component_token1,
    STATE(133), 1,
      sym_code_block,
    STATE(175), 1,
      sym_comment,
  [4633] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(23), 1,
      aux_sym__component_token1,
    STATE(30), 1,
      sym_grammar_rule_identifier,
    STATE(66), 1,
      aux_sym__decl_token_repeat2,
    STATE(176), 1,
      sym_comment,
  [4652] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(667), 1,
      anon_sym_PERCENT,
    STATE(177), 1,
      sym_comment,
    ACTIONS(30), 2,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_PERCENT,
  [4669] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(97), 1,
      anon_sym_PIPE,
    ACTIONS(111), 1,
      anon_sym_SEMI,
    STATE(166), 1,
      aux_sym_grammar_rule_repeat2,
    STATE(178), 1,
      sym_comment,
  [4688] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(299), 1,
      aux_sym__component_token1,
    STATE(54), 1,
      aux_sym__decl_nterm_repeat1,
    STATE(102), 1,
      sym_grammar_rule_identifier,
    STATE(179), 1,
      sym_comment,
  [4707] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(23), 1,
      aux_sym__component_token1,
    STATE(26), 1,
      sym_grammar_rule_identifier,
    STATE(53), 1,
      aux_sym__decl_token_repeat1,
    STATE(180), 1,
      sym_comment,
  [4726] = 5,
    ACTIONS(616), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(618), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(669), 1,
      anon_sym_PERCENT_RBRACE,
    ACTIONS(671), 1,
      aux_sym_prologue_body_token1,
    STATE(181), 2,
      sym_comment,
      aux_sym_prologue_body_repeat1,
  [4743] = 6,
    ACTIONS(616), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(618), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(634), 1,
      aux_sym_string_literal_token1,
    ACTIONS(674), 1,
      anon_sym_DQUOTE,
    STATE(158), 1,
      aux_sym_string_literal_repeat1,
    STATE(182), 1,
      sym_comment,
  [4762] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(408), 1,
      anon_sym_LBRACE,
    STATE(123), 1,
      sym_code_block,
    STATE(183), 1,
      sym_comment,
  [4778] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(676), 1,
      anon_sym_LT,
    ACTIONS(678), 1,
      anon_sym_GT,
    STATE(184), 1,
      sym_comment,
  [4794] = 4,
    ACTIONS(616), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(618), 1,
      anon_sym_SLASH_STAR,
    STATE(185), 1,
      sym_comment,
    ACTIONS(680), 2,
      anon_sym_PERCENT_RBRACE,
      aux_sym_prologue_body_token1,
  [4808] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(186), 1,
      sym_comment,
    ACTIONS(422), 2,
      anon_sym_LT,
      anon_sym_GT,
  [4822] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(682), 1,
      ts_builtin_sym_end,
    ACTIONS(684), 1,
      anon_sym_PERCENT_PERCENT,
    STATE(187), 1,
      sym_comment,
  [4838] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(408), 1,
      anon_sym_LBRACE,
    STATE(145), 1,
      sym_code_block,
    STATE(188), 1,
      sym_comment,
  [4854] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(408), 1,
      anon_sym_LBRACE,
    STATE(148), 1,
      sym_code_block,
    STATE(189), 1,
      sym_comment,
  [4870] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(408), 1,
      anon_sym_LBRACE,
    STATE(57), 1,
      sym_code_block,
    STATE(190), 1,
      sym_comment,
  [4886] = 5,
    ACTIONS(616), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(618), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(686), 1,
      anon_sym_BSLASH,
    ACTIONS(688), 1,
      aux_sym_char_literal_token1,
    STATE(191), 1,
      sym_comment,
  [4902] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(690), 1,
      sym_undelimited_code_block,
    STATE(192), 1,
      sym_comment,
    STATE(226), 1,
      sym_epilogue,
  [4918] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(408), 1,
      anon_sym_LBRACE,
    STATE(58), 1,
      sym_code_block,
    STATE(193), 1,
      sym_comment,
  [4934] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(23), 1,
      aux_sym__component_token1,
    STATE(140), 1,
      sym_grammar_rule_identifier,
    STATE(194), 1,
      sym_comment,
  [4950] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(195), 1,
      sym_comment,
    ACTIONS(692), 2,
      anon_sym_LT,
      anon_sym_GT,
  [4964] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(408), 1,
      anon_sym_LBRACE,
    STATE(121), 1,
      sym_code_block,
    STATE(196), 1,
      sym_comment,
  [4980] = 5,
    ACTIONS(616), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(618), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(694), 1,
      anon_sym_DQUOTE,
    ACTIONS(696), 1,
      aux_sym_string_literal_token1,
    STATE(197), 1,
      sym_comment,
  [4996] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(408), 1,
      anon_sym_LBRACE,
    STATE(122), 1,
      sym_code_block,
    STATE(198), 1,
      sym_comment,
  [5012] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(199), 1,
      sym_comment,
    ACTIONS(142), 2,
      anon_sym_SEMI,
      anon_sym_PIPE,
  [5026] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(408), 1,
      anon_sym_LBRACE,
    STATE(124), 1,
      sym_code_block,
    STATE(200), 1,
      sym_comment,
  [5042] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(201), 1,
      sym_comment,
    ACTIONS(655), 2,
      anon_sym_LBRACE,
      anon_sym_DASH,
  [5056] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(698), 1,
      anon_sym_GT,
    STATE(202), 1,
      sym_comment,
  [5069] = 4,
    ACTIONS(616), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(618), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(700), 1,
      aux_sym_grammar_rule_identifier_token1,
    STATE(203), 1,
      sym_comment,
  [5082] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(702), 1,
      anon_sym_GT,
    STATE(204), 1,
      sym_comment,
  [5095] = 4,
    ACTIONS(616), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(618), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(704), 1,
      aux_sym_comment_token1,
    STATE(205), 1,
      sym_comment,
  [5108] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(706), 1,
      anon_sym_LT,
    STATE(206), 1,
      sym_comment,
  [5121] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(708), 1,
      anon_sym_SQUOTE,
    STATE(207), 1,
      sym_comment,
  [5134] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(710), 1,
      anon_sym_RBRACK,
    STATE(208), 1,
      sym_comment,
  [5147] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(712), 1,
      aux_sym__component_token1,
    STATE(209), 1,
      sym_comment,
  [5160] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(714), 1,
      anon_sym_RBRACE,
    STATE(210), 1,
      sym_comment,
  [5173] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(716), 1,
      ts_builtin_sym_end,
    STATE(211), 1,
      sym_comment,
  [5186] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(718), 1,
      anon_sym_GT,
    STATE(212), 1,
      sym_comment,
  [5199] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(720), 1,
      aux_sym__decl_expect_token2,
    STATE(213), 1,
      sym_comment,
  [5212] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(722), 1,
      anon_sym_GT,
    STATE(214), 1,
      sym_comment,
  [5225] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(724), 1,
      sym_undelimited_code_block,
    STATE(215), 1,
      sym_comment,
  [5238] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(726), 1,
      sym_undelimited_code_block,
    STATE(216), 1,
      sym_comment,
  [5251] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(728), 1,
      anon_sym_COLON,
    STATE(217), 1,
      sym_comment,
  [5264] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(730), 1,
      anon_sym_SEMI,
    STATE(218), 1,
      sym_comment,
  [5277] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(732), 1,
      ts_builtin_sym_end,
    STATE(219), 1,
      sym_comment,
  [5290] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(734), 1,
      anon_sym_RBRACE,
    STATE(220), 1,
      sym_comment,
  [5303] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(736), 1,
      anon_sym_SQUOTE,
    STATE(221), 1,
      sym_comment,
  [5316] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(738), 1,
      aux_sym__component_token1,
    STATE(222), 1,
      sym_comment,
  [5329] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(740), 1,
      anon_sym_RPAREN,
    STATE(223), 1,
      sym_comment,
  [5342] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(742), 1,
      anon_sym_PERCENT_RBRACE,
    STATE(224), 1,
      sym_comment,
  [5355] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(744), 1,
      anon_sym_GT,
    STATE(225), 1,
      sym_comment,
  [5368] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(746), 1,
      ts_builtin_sym_end,
    STATE(226), 1,
      sym_comment,
  [5381] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(748), 1,
      aux_sym__component_token1,
    STATE(227), 1,
      sym_comment,
  [5394] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(750), 1,
      anon_sym_SLASH,
    STATE(228), 1,
      sym_comment,
  [5407] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(752), 1,
      aux_sym__component_token1,
    STATE(229), 1,
      sym_comment,
  [5420] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(754), 1,
      ts_builtin_sym_end,
    STATE(230), 1,
      sym_comment,
  [5433] = 4,
    ACTIONS(616), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(618), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(756), 1,
      aux_sym_char_literal_token1,
    STATE(231), 1,
      sym_comment,
  [5446] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(758), 1,
      ts_builtin_sym_end,
    STATE(232), 1,
      sym_comment,
  [5459] = 4,
    ACTIONS(616), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(618), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(760), 1,
      aux_sym_comment_token2,
    STATE(233), 1,
      sym_comment,
  [5472] = 4,
    ACTIONS(616), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(618), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(762), 1,
      aux_sym_grammar_rule_identifier_token1,
    STATE(234), 1,
      sym_comment,
  [5485] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(764), 1,
      aux_sym__component_token1,
    STATE(235), 1,
      sym_comment,
  [5498] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(766), 1,
      anon_sym_GT,
    STATE(236), 1,
      sym_comment,
  [5511] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(768), 1,
      anon_sym_RBRACE,
    STATE(237), 1,
      sym_comment,
  [5524] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(770), 1,
      anon_sym_RBRACE,
    STATE(238), 1,
      sym_comment,
  [5537] = 1,
    ACTIONS(772), 1,
      ts_builtin_sym_end,
  [5541] = 1,
    ACTIONS(774), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 62,
  [SMALL_STATE(4)] = 126,
  [SMALL_STATE(5)] = 189,
  [SMALL_STATE(6)] = 252,
  [SMALL_STATE(7)] = 310,
  [SMALL_STATE(8)] = 410,
  [SMALL_STATE(9)] = 471,
  [SMALL_STATE(10)] = 527,
  [SMALL_STATE(11)] = 560,
  [SMALL_STATE(12)] = 609,
  [SMALL_STATE(13)] = 642,
  [SMALL_STATE(14)] = 675,
  [SMALL_STATE(15)] = 726,
  [SMALL_STATE(16)] = 774,
  [SMALL_STATE(17)] = 822,
  [SMALL_STATE(18)] = 870,
  [SMALL_STATE(19)] = 920,
  [SMALL_STATE(20)] = 968,
  [SMALL_STATE(21)] = 999,
  [SMALL_STATE(22)] = 1030,
  [SMALL_STATE(23)] = 1068,
  [SMALL_STATE(24)] = 1108,
  [SMALL_STATE(25)] = 1148,
  [SMALL_STATE(26)] = 1186,
  [SMALL_STATE(27)] = 1225,
  [SMALL_STATE(28)] = 1265,
  [SMALL_STATE(29)] = 1305,
  [SMALL_STATE(30)] = 1341,
  [SMALL_STATE(31)] = 1374,
  [SMALL_STATE(32)] = 1403,
  [SMALL_STATE(33)] = 1440,
  [SMALL_STATE(34)] = 1477,
  [SMALL_STATE(35)] = 1506,
  [SMALL_STATE(36)] = 1536,
  [SMALL_STATE(37)] = 1562,
  [SMALL_STATE(38)] = 1588,
  [SMALL_STATE(39)] = 1616,
  [SMALL_STATE(40)] = 1644,
  [SMALL_STATE(41)] = 1670,
  [SMALL_STATE(42)] = 1696,
  [SMALL_STATE(43)] = 1722,
  [SMALL_STATE(44)] = 1747,
  [SMALL_STATE(45)] = 1778,
  [SMALL_STATE(46)] = 1803,
  [SMALL_STATE(47)] = 1834,
  [SMALL_STATE(48)] = 1859,
  [SMALL_STATE(49)] = 1890,
  [SMALL_STATE(50)] = 1915,
  [SMALL_STATE(51)] = 1946,
  [SMALL_STATE(52)] = 1974,
  [SMALL_STATE(53)] = 2010,
  [SMALL_STATE(54)] = 2046,
  [SMALL_STATE(55)] = 2082,
  [SMALL_STATE(56)] = 2118,
  [SMALL_STATE(57)] = 2147,
  [SMALL_STATE(58)] = 2178,
  [SMALL_STATE(59)] = 2209,
  [SMALL_STATE(60)] = 2240,
  [SMALL_STATE(61)] = 2271,
  [SMALL_STATE(62)] = 2299,
  [SMALL_STATE(63)] = 2327,
  [SMALL_STATE(64)] = 2353,
  [SMALL_STATE(65)] = 2379,
  [SMALL_STATE(66)] = 2405,
  [SMALL_STATE(67)] = 2433,
  [SMALL_STATE(68)] = 2460,
  [SMALL_STATE(69)] = 2483,
  [SMALL_STATE(70)] = 2504,
  [SMALL_STATE(71)] = 2529,
  [SMALL_STATE(72)] = 2556,
  [SMALL_STATE(73)] = 2581,
  [SMALL_STATE(74)] = 2606,
  [SMALL_STATE(75)] = 2633,
  [SMALL_STATE(76)] = 2660,
  [SMALL_STATE(77)] = 2685,
  [SMALL_STATE(78)] = 2712,
  [SMALL_STATE(79)] = 2739,
  [SMALL_STATE(80)] = 2760,
  [SMALL_STATE(81)] = 2783,
  [SMALL_STATE(82)] = 2810,
  [SMALL_STATE(83)] = 2837,
  [SMALL_STATE(84)] = 2865,
  [SMALL_STATE(85)] = 2885,
  [SMALL_STATE(86)] = 2905,
  [SMALL_STATE(87)] = 2925,
  [SMALL_STATE(88)] = 2951,
  [SMALL_STATE(89)] = 2977,
  [SMALL_STATE(90)] = 2997,
  [SMALL_STATE(91)] = 3017,
  [SMALL_STATE(92)] = 3037,
  [SMALL_STATE(93)] = 3057,
  [SMALL_STATE(94)] = 3077,
  [SMALL_STATE(95)] = 3097,
  [SMALL_STATE(96)] = 3117,
  [SMALL_STATE(97)] = 3137,
  [SMALL_STATE(98)] = 3157,
  [SMALL_STATE(99)] = 3177,
  [SMALL_STATE(100)] = 3197,
  [SMALL_STATE(101)] = 3217,
  [SMALL_STATE(102)] = 3237,
  [SMALL_STATE(103)] = 3257,
  [SMALL_STATE(104)] = 3277,
  [SMALL_STATE(105)] = 3297,
  [SMALL_STATE(106)] = 3317,
  [SMALL_STATE(107)] = 3339,
  [SMALL_STATE(108)] = 3367,
  [SMALL_STATE(109)] = 3384,
  [SMALL_STATE(110)] = 3409,
  [SMALL_STATE(111)] = 3434,
  [SMALL_STATE(112)] = 3451,
  [SMALL_STATE(113)] = 3476,
  [SMALL_STATE(114)] = 3494,
  [SMALL_STATE(115)] = 3512,
  [SMALL_STATE(116)] = 3530,
  [SMALL_STATE(117)] = 3548,
  [SMALL_STATE(118)] = 3566,
  [SMALL_STATE(119)] = 3584,
  [SMALL_STATE(120)] = 3602,
  [SMALL_STATE(121)] = 3620,
  [SMALL_STATE(122)] = 3638,
  [SMALL_STATE(123)] = 3656,
  [SMALL_STATE(124)] = 3674,
  [SMALL_STATE(125)] = 3692,
  [SMALL_STATE(126)] = 3710,
  [SMALL_STATE(127)] = 3728,
  [SMALL_STATE(128)] = 3746,
  [SMALL_STATE(129)] = 3764,
  [SMALL_STATE(130)] = 3782,
  [SMALL_STATE(131)] = 3800,
  [SMALL_STATE(132)] = 3818,
  [SMALL_STATE(133)] = 3836,
  [SMALL_STATE(134)] = 3854,
  [SMALL_STATE(135)] = 3872,
  [SMALL_STATE(136)] = 3890,
  [SMALL_STATE(137)] = 3908,
  [SMALL_STATE(138)] = 3926,
  [SMALL_STATE(139)] = 3948,
  [SMALL_STATE(140)] = 3966,
  [SMALL_STATE(141)] = 3984,
  [SMALL_STATE(142)] = 4004,
  [SMALL_STATE(143)] = 4022,
  [SMALL_STATE(144)] = 4040,
  [SMALL_STATE(145)] = 4058,
  [SMALL_STATE(146)] = 4076,
  [SMALL_STATE(147)] = 4094,
  [SMALL_STATE(148)] = 4116,
  [SMALL_STATE(149)] = 4134,
  [SMALL_STATE(150)] = 4152,
  [SMALL_STATE(151)] = 4170,
  [SMALL_STATE(152)] = 4188,
  [SMALL_STATE(153)] = 4210,
  [SMALL_STATE(154)] = 4228,
  [SMALL_STATE(155)] = 4246,
  [SMALL_STATE(156)] = 4263,
  [SMALL_STATE(157)] = 4282,
  [SMALL_STATE(158)] = 4301,
  [SMALL_STATE(159)] = 4320,
  [SMALL_STATE(160)] = 4339,
  [SMALL_STATE(161)] = 4358,
  [SMALL_STATE(162)] = 4377,
  [SMALL_STATE(163)] = 4396,
  [SMALL_STATE(164)] = 4415,
  [SMALL_STATE(165)] = 4432,
  [SMALL_STATE(166)] = 4449,
  [SMALL_STATE(167)] = 4466,
  [SMALL_STATE(168)] = 4485,
  [SMALL_STATE(169)] = 4504,
  [SMALL_STATE(170)] = 4523,
  [SMALL_STATE(171)] = 4542,
  [SMALL_STATE(172)] = 4561,
  [SMALL_STATE(173)] = 4580,
  [SMALL_STATE(174)] = 4597,
  [SMALL_STATE(175)] = 4614,
  [SMALL_STATE(176)] = 4633,
  [SMALL_STATE(177)] = 4652,
  [SMALL_STATE(178)] = 4669,
  [SMALL_STATE(179)] = 4688,
  [SMALL_STATE(180)] = 4707,
  [SMALL_STATE(181)] = 4726,
  [SMALL_STATE(182)] = 4743,
  [SMALL_STATE(183)] = 4762,
  [SMALL_STATE(184)] = 4778,
  [SMALL_STATE(185)] = 4794,
  [SMALL_STATE(186)] = 4808,
  [SMALL_STATE(187)] = 4822,
  [SMALL_STATE(188)] = 4838,
  [SMALL_STATE(189)] = 4854,
  [SMALL_STATE(190)] = 4870,
  [SMALL_STATE(191)] = 4886,
  [SMALL_STATE(192)] = 4902,
  [SMALL_STATE(193)] = 4918,
  [SMALL_STATE(194)] = 4934,
  [SMALL_STATE(195)] = 4950,
  [SMALL_STATE(196)] = 4964,
  [SMALL_STATE(197)] = 4980,
  [SMALL_STATE(198)] = 4996,
  [SMALL_STATE(199)] = 5012,
  [SMALL_STATE(200)] = 5026,
  [SMALL_STATE(201)] = 5042,
  [SMALL_STATE(202)] = 5056,
  [SMALL_STATE(203)] = 5069,
  [SMALL_STATE(204)] = 5082,
  [SMALL_STATE(205)] = 5095,
  [SMALL_STATE(206)] = 5108,
  [SMALL_STATE(207)] = 5121,
  [SMALL_STATE(208)] = 5134,
  [SMALL_STATE(209)] = 5147,
  [SMALL_STATE(210)] = 5160,
  [SMALL_STATE(211)] = 5173,
  [SMALL_STATE(212)] = 5186,
  [SMALL_STATE(213)] = 5199,
  [SMALL_STATE(214)] = 5212,
  [SMALL_STATE(215)] = 5225,
  [SMALL_STATE(216)] = 5238,
  [SMALL_STATE(217)] = 5251,
  [SMALL_STATE(218)] = 5264,
  [SMALL_STATE(219)] = 5277,
  [SMALL_STATE(220)] = 5290,
  [SMALL_STATE(221)] = 5303,
  [SMALL_STATE(222)] = 5316,
  [SMALL_STATE(223)] = 5329,
  [SMALL_STATE(224)] = 5342,
  [SMALL_STATE(225)] = 5355,
  [SMALL_STATE(226)] = 5368,
  [SMALL_STATE(227)] = 5381,
  [SMALL_STATE(228)] = 5394,
  [SMALL_STATE(229)] = 5407,
  [SMALL_STATE(230)] = 5420,
  [SMALL_STATE(231)] = 5433,
  [SMALL_STATE(232)] = 5446,
  [SMALL_STATE(233)] = 5459,
  [SMALL_STATE(234)] = 5472,
  [SMALL_STATE(235)] = 5485,
  [SMALL_STATE(236)] = 5498,
  [SMALL_STATE(237)] = 5511,
  [SMALL_STATE(238)] = 5524,
  [SMALL_STATE(239)] = 5537,
  [SMALL_STATE(240)] = 5541,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_grammar_rules_body_repeat1, 2),
  [15] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_grammar_rules_body_repeat1, 2), SHIFT_REPEAT(203),
  [18] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_grammar_rules_body_repeat1, 2), SHIFT_REPEAT(7),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_grammar_rules_body, 1),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [27] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sections_repeat1, 2), SHIFT_REPEAT(152),
  [30] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_sections_repeat1, 2),
  [32] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sections_repeat1, 2), SHIFT_REPEAT(7),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [99] = {.entry = {.count = 1, .reusable = false}}, SHIFT(203),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_grammar_rule_identifier, 2),
  [115] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_grammar_rule_identifier, 2),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_grammar_rule_repeat1, 2),
  [119] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_grammar_rule_repeat1, 2), SHIFT_REPEAT(203),
  [122] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_grammar_rule_repeat1, 2), SHIFT_REPEAT(215),
  [125] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_grammar_rule_repeat1, 2), SHIFT_REPEAT(206),
  [128] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_grammar_rule_repeat1, 2), SHIFT_REPEAT(182),
  [131] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_grammar_rule_repeat1, 2), SHIFT_REPEAT(191),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 2),
  [136] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 2),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 3),
  [140] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 3),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_grammar_rule_repeat2, 2),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decl_type, 3),
  [146] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decl_type, 3),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decl_op_precedence, 4),
  [152] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decl_op_precedence, 4),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decl_op_precedence, 3),
  [156] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decl_op_precedence, 3),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decl_type, 4),
  [162] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decl_type, 4),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_char_literal, 4),
  [166] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_char_literal, 4),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_char_literal, 3),
  [170] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_char_literal, 3),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__decl_op_precedence_repeat1, 2),
  [174] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__decl_op_precedence_repeat1, 2), SHIFT_REPEAT(203),
  [177] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__decl_op_precedence_repeat1, 2),
  [179] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__decl_op_precedence_repeat1, 2), SHIFT_REPEAT(182),
  [182] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__decl_op_precedence_repeat1, 2), SHIFT_REPEAT(191),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__decl_op_precedence_repeat2, 2),
  [187] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__decl_op_precedence_repeat2, 2),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__decl_type_repeat2, 2),
  [191] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__decl_type_repeat2, 2),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__decl_type_repeat1, 2),
  [195] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__decl_type_repeat1, 2), SHIFT_REPEAT(203),
  [198] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__decl_type_repeat1, 2),
  [200] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__decl_type_repeat1, 2), SHIFT_REPEAT(182),
  [203] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__decl_type_repeat1, 2), SHIFT_REPEAT(191),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__decl_token_repeat1, 1),
  [208] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__decl_token_repeat1, 1),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decl_define, 4),
  [218] = {.entry = {.count = 1, .reusable = false}}, SHIFT(153),
  [220] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decl_define, 4),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decl_define, 3),
  [228] = {.entry = {.count = 1, .reusable = false}}, SHIFT(143),
  [230] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decl_define, 3),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__decl_token_repeat1, 2),
  [236] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__decl_token_repeat1, 2),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__decl_token_repeat2, 1),
  [240] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__decl_token_repeat2, 1),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__decl_op_precedence_repeat1, 1),
  [246] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__decl_op_precedence_repeat1, 1),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__decl_define_repeat1, 2),
  [252] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__decl_define_repeat1, 2),
  [254] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__decl_define_repeat1, 2), SHIFT_REPEAT(229),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__decl_token_repeat2, 2),
  [259] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__decl_token_repeat2, 2),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_block, 3),
  [263] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_code_block, 3),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_action, 1),
  [267] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_action, 1),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component, 1),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [273] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__component, 1),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__decl_type_repeat1, 1),
  [279] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__decl_type_repeat1, 1),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_grammar_rule_repeat1, 1),
  [283] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_grammar_rule_repeat1, 1),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component, 4),
  [287] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__component, 4),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_merge, 4),
  [291] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive_merge, 4),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decl_header, 2),
  [295] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decl_header, 2),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decl_nterm, 3),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [301] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decl_nterm, 3),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decl_token, 4),
  [307] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decl_token, 4),
  [309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decl_nterm, 4),
  [311] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decl_nterm, 4),
  [313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decl_token, 3),
  [315] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decl_token, 3),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__decl_destructor_repeat1, 2),
  [319] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__decl_destructor_repeat1, 2), SHIFT_REPEAT(234),
  [322] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__decl_destructor_repeat1, 2),
  [324] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__decl_destructor_repeat1, 2), SHIFT_REPEAT(112),
  [327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decl_destructor, 3),
  [329] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decl_destructor, 3),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [333] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decl_printer, 3),
  [335] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decl_printer, 3),
  [337] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decl_destructor, 4),
  [339] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decl_destructor, 4),
  [341] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decl_printer, 4),
  [343] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decl_printer, 4),
  [345] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__decl_nterm_repeat2, 2),
  [347] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__decl_nterm_repeat2, 2),
  [349] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__decl_nterm_repeat2, 1),
  [351] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__decl_nterm_repeat2, 1),
  [353] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__decl_nterm_repeat1, 2),
  [355] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__decl_nterm_repeat1, 2), SHIFT_REPEAT(234),
  [358] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__decl_nterm_repeat1, 2),
  [360] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__decl_token_repeat1, 2), SHIFT_REPEAT(203),
  [363] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__decl_token_repeat2, 2), SHIFT_REPEAT(203),
  [366] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__decl_token_repeat3, 2),
  [368] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__decl_token_repeat3, 2),
  [370] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decl_type, 5),
  [372] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decl_type, 5),
  [374] = {.entry = {.count = 1, .reusable = false}}, SHIFT(210),
  [376] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__decl_op_precedence_repeat2, 2), SHIFT_REPEAT(156),
  [379] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decl_op_precedence, 5),
  [381] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decl_op_precedence, 5),
  [383] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__decl_type_repeat2, 2), SHIFT_REPEAT(156),
  [386] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__decl_nterm_repeat2, 2), SHIFT_REPEAT(157),
  [389] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decl_nterm, 5),
  [391] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decl_nterm, 5),
  [393] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decl_token, 5),
  [395] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decl_token, 5),
  [397] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__decl_token_repeat3, 2), SHIFT_REPEAT(157),
  [400] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_tag, 3),
  [402] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_tag, 3),
  [404] = {.entry = {.count = 1, .reusable = false}}, SHIFT(220),
  [406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [410] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__decl_destructor_repeat1, 1),
  [412] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__decl_destructor_repeat1, 1),
  [414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [416] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type_atom, 1),
  [418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [422] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type_atom, 2),
  [424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [426] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__decl_token_repeat2, 3),
  [428] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__decl_token_repeat2, 3),
  [430] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__decl_token_repeat1, 3),
  [432] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__decl_token_repeat1, 3),
  [434] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__decl_destructor_repeat1, 3),
  [436] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__decl_destructor_repeat1, 3),
  [438] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 1),
  [440] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 1),
  [442] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__decl_nterm_repeat1, 1),
  [444] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__decl_nterm_repeat1, 1),
  [446] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [448] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [450] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__type_atom_repeat1, 2), SHIFT_REPEAT(108),
  [453] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__type_atom_repeat1, 2),
  [455] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__type_atom_repeat1, 2), SHIFT_REPEAT(222),
  [458] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__type_atom_repeat1, 1),
  [460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [466] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decl_locations, 2),
  [468] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decl_locations, 2),
  [470] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_grammar_rule, 5, .production_id = 2),
  [472] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_grammar_rule, 5, .production_id = 2),
  [474] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_grammar_rules_body_repeat1, 2),
  [476] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decl_code, 5),
  [478] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decl_code, 5),
  [480] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decl_debug, 2),
  [482] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decl_debug, 2),
  [484] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decl_no_lines, 2),
  [486] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decl_no_lines, 2),
  [488] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decl_glr_parser, 2),
  [490] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decl_glr_parser, 2),
  [492] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_grammar_rule, 3, .production_id = 2),
  [494] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_grammar_rule, 3, .production_id = 2),
  [496] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decl_lex_param, 3),
  [498] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decl_lex_param, 3),
  [500] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decl_param, 3),
  [502] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decl_param, 3),
  [504] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decl_parse_param, 3),
  [506] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decl_parse_param, 3),
  [508] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decl_initial_action, 3),
  [510] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decl_initial_action, 3),
  [512] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decl_skeleton, 3),
  [514] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decl_skeleton, 3),
  [516] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decl_output, 3),
  [518] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decl_output, 3),
  [520] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decl_name_prefix, 3),
  [522] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decl_name_prefix, 3),
  [524] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_grammar_rules_body_repeat1, 1),
  [526] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_grammar_rules_body_repeat1, 1),
  [528] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl_language, 3, .production_id = 1),
  [530] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decl_language, 3, .production_id = 1),
  [532] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decl_header, 3),
  [534] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decl_header, 3),
  [536] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decl_define, 6),
  [538] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decl_define, 6),
  [540] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_grammar_rule, 6, .production_id = 2),
  [542] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_grammar_rule, 6, .production_id = 2),
  [544] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decl_union, 3),
  [546] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decl_union, 3),
  [548] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decl_code, 3),
  [550] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decl_code, 3),
  [552] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decl_define, 7),
  [554] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decl_define, 7),
  [556] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_grammar_rule, 7, .production_id = 2),
  [558] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_grammar_rule, 7, .production_id = 2),
  [560] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration, 1),
  [562] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declaration, 1),
  [564] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [566] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decl_pure_parser, 2),
  [568] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decl_pure_parser, 2),
  [570] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decl_start, 3),
  [572] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decl_start, 3),
  [574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [576] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_sections_repeat1, 1),
  [578] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_sections_repeat1, 1),
  [580] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decl_expect, 3),
  [582] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decl_expect, 3),
  [584] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decl_token_table, 2),
  [586] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decl_token_table, 2),
  [588] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decl_initial_declaration, 3),
  [590] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decl_initial_declaration, 3),
  [592] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decl_code, 4),
  [594] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decl_code, 4),
  [596] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decl_union, 4),
  [598] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decl_union, 4),
  [600] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decl_verbose, 2),
  [602] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decl_verbose, 2),
  [604] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_grammar_rule, 4, .production_id = 2),
  [606] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_grammar_rule, 4, .production_id = 2),
  [608] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decl_yacc, 2),
  [610] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decl_yacc, 2),
  [612] = {.entry = {.count = 1, .reusable = false}}, SHIFT(165),
  [614] = {.entry = {.count = 1, .reusable = false}}, SHIFT(185),
  [616] = {.entry = {.count = 1, .reusable = false}}, SHIFT(205),
  [618] = {.entry = {.count = 1, .reusable = false}}, SHIFT(233),
  [620] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decl_define, 5),
  [622] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decl_define, 5),
  [624] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decl_require, 3),
  [626] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decl_require, 3),
  [628] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prologue, 3),
  [630] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prologue, 3),
  [632] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [634] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [636] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [638] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [640] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prologue, 2),
  [642] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prologue, 2),
  [644] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_grammar_rule_repeat2, 2), SHIFT_REPEAT(18),
  [647] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [649] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prologue_body, 1),
  [651] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [653] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [655] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__decl_code_repeat1, 2),
  [657] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__decl_code_repeat1, 2), SHIFT_REPEAT(227),
  [660] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_literal_repeat1, 2),
  [662] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_literal_repeat1, 2), SHIFT_REPEAT(197),
  [665] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [667] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_sections_repeat1, 2),
  [669] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_prologue_body_repeat1, 2),
  [671] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_prologue_body_repeat1, 2), SHIFT_REPEAT(185),
  [674] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [676] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [678] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1),
  [680] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_prologue_body_repeat1, 1),
  [682] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_grammar_rules_section, 2),
  [684] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [686] = {.entry = {.count = 1, .reusable = false}}, SHIFT(231),
  [688] = {.entry = {.count = 1, .reusable = false}}, SHIFT(207),
  [690] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [692] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type_atom, 3),
  [694] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_literal_repeat1, 1),
  [696] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_literal_repeat1, 1),
  [698] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [700] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [702] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [704] = {.entry = {.count = 1, .reusable = false}}, SHIFT(239),
  [706] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [708] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [710] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [712] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [714] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [716] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sections, 2),
  [718] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [720] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [722] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [724] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [726] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [728] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [730] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [732] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_epilogue, 1),
  [734] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [736] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [738] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [740] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [742] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [744] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 4),
  [746] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_grammar_rules_section, 4),
  [748] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [750] = {.entry = {.count = 1, .reusable = false}}, SHIFT(240),
  [752] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [754] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sections, 1),
  [756] = {.entry = {.count = 1, .reusable = false}}, SHIFT(221),
  [758] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [760] = {.entry = {.count = 1, .reusable = false}}, SHIFT(228),
  [762] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [764] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [766] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [768] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [770] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [772] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
  [774] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 3),
};

#ifdef __cplusplus
extern "C" {
#endif
void *tree_sitter_bison_external_scanner_create(void);
void tree_sitter_bison_external_scanner_destroy(void *);
bool tree_sitter_bison_external_scanner_scan(void *, TSLexer *, const bool *);
unsigned tree_sitter_bison_external_scanner_serialize(void *, char *);
void tree_sitter_bison_external_scanner_deserialize(void *, const char *, unsigned);

#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_bison(void) {
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
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .external_scanner = {
      &ts_external_scanner_states[0][0],
      ts_external_scanner_symbol_map,
      tree_sitter_bison_external_scanner_create,
      tree_sitter_bison_external_scanner_destroy,
      tree_sitter_bison_external_scanner_scan,
      tree_sitter_bison_external_scanner_serialize,
      tree_sitter_bison_external_scanner_deserialize,
    },
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
