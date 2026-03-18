#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 29
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 21
#define ALIAS_COUNT 0
#define TOKEN_COUNT 11
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 1

enum {
  aux_sym_text_token1 = 1,
  anon_sym_LT_PERCENT = 2,
  anon_sym_PERCENT_GT = 3,
  anon_sym_EQ = 4,
  anon_sym_SQUOTE = 5,
  aux_sym__quoted_parameter_value_token1 = 6,
  anon_sym_DQUOTE = 7,
  aux_sym__quoted_parameter_value_token2 = 8,
  aux_sym_macro_name_token1 = 9,
  sym_parameter_value = 10,
  sym_fragment = 11,
  sym_text = 12,
  sym_macro = 13,
  sym_macro_parameter = 14,
  sym__quoted_parameter_value = 15,
  sym_macro_name = 16,
  sym_parameter_key = 17,
  aux_sym_fragment_repeat1 = 18,
  aux_sym_text_repeat1 = 19,
  aux_sym_macro_repeat1 = 20,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym_text_token1] = "text_token1",
  [anon_sym_LT_PERCENT] = "<%",
  [anon_sym_PERCENT_GT] = "%>",
  [anon_sym_EQ] = "=",
  [anon_sym_SQUOTE] = "'",
  [aux_sym__quoted_parameter_value_token1] = "parameter_value",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym__quoted_parameter_value_token2] = "parameter_value",
  [aux_sym_macro_name_token1] = "macro_name_token1",
  [sym_parameter_value] = "parameter_value",
  [sym_fragment] = "fragment",
  [sym_text] = "text",
  [sym_macro] = "macro",
  [sym_macro_parameter] = "macro_parameter",
  [sym__quoted_parameter_value] = "_quoted_parameter_value",
  [sym_macro_name] = "macro_name",
  [sym_parameter_key] = "parameter_key",
  [aux_sym_fragment_repeat1] = "fragment_repeat1",
  [aux_sym_text_repeat1] = "text_repeat1",
  [aux_sym_macro_repeat1] = "macro_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [aux_sym_text_token1] = aux_sym_text_token1,
  [anon_sym_LT_PERCENT] = anon_sym_LT_PERCENT,
  [anon_sym_PERCENT_GT] = anon_sym_PERCENT_GT,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [aux_sym__quoted_parameter_value_token1] = sym_parameter_value,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym__quoted_parameter_value_token2] = sym_parameter_value,
  [aux_sym_macro_name_token1] = aux_sym_macro_name_token1,
  [sym_parameter_value] = sym_parameter_value,
  [sym_fragment] = sym_fragment,
  [sym_text] = sym_text,
  [sym_macro] = sym_macro,
  [sym_macro_parameter] = sym_macro_parameter,
  [sym__quoted_parameter_value] = sym__quoted_parameter_value,
  [sym_macro_name] = sym_macro_name,
  [sym_parameter_key] = sym_parameter_key,
  [aux_sym_fragment_repeat1] = aux_sym_fragment_repeat1,
  [aux_sym_text_repeat1] = aux_sym_text_repeat1,
  [aux_sym_macro_repeat1] = aux_sym_macro_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_text_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_LT_PERCENT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENT_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__quoted_parameter_value_token1] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__quoted_parameter_value_token2] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_macro_name_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_parameter_value] = {
    .visible = true,
    .named = true,
  },
  [sym_fragment] = {
    .visible = true,
    .named = true,
  },
  [sym_text] = {
    .visible = true,
    .named = true,
  },
  [sym_macro] = {
    .visible = true,
    .named = true,
  },
  [sym_macro_parameter] = {
    .visible = true,
    .named = true,
  },
  [sym__quoted_parameter_value] = {
    .visible = false,
    .named = true,
  },
  [sym_macro_name] = {
    .visible = true,
    .named = true,
  },
  [sym_parameter_key] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_fragment_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_text_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_macro_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 5,
  [7] = 7,
  [8] = 7,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 15,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 12,
  [23] = 13,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
};

static inline bool aux_sym_macro_name_token1_character_set_1(int32_t c) {
  return (c < '"'
    ? (c < '\r'
      ? (c < '\t'
        ? c == 0
        : c <= '\n')
      : (c <= '\r' || c == ' '))
    : (c <= '"' || (c < '/'
      ? (c < '\''
        ? c == '%'
        : c <= '\'')
      : (c <= '/' || (c >= '<' && c <= '>')))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(9);
      if (lookahead == '"') ADVANCE(19);
      if (lookahead == '%') ADVANCE(6);
      if (lookahead == '\'') ADVANCE(16);
      if (lookahead == '/') ADVANCE(24);
      if (lookahead == '<') ADVANCE(4);
      if (lookahead == '=') ADVANCE(15);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (lookahead != 0 &&
          lookahead != '>') ADVANCE(22);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(19);
      if (lookahead == '\'') ADVANCE(16);
      if (lookahead == '<') ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (lookahead != 0 &&
          lookahead != '%' &&
          lookahead != '=' &&
          lookahead != '>') ADVANCE(24);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(19);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(20);
      if (lookahead != 0) ADVANCE(21);
      END_STATE();
    case 3:
      if (lookahead == '%') ADVANCE(6);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(23);
      END_STATE();
    case 4:
      if (lookahead == '%') ADVANCE(13);
      END_STATE();
    case 5:
      if (lookahead == '\'') ADVANCE(16);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(17);
      if (lookahead != 0) ADVANCE(18);
      END_STATE();
    case 6:
      if (lookahead == '>') ADVANCE(14);
      END_STATE();
    case 7:
      if (eof) ADVANCE(9);
      if (lookahead == '"') ADVANCE(19);
      if (lookahead == '%') ADVANCE(6);
      if (lookahead == '\'') ADVANCE(16);
      if (lookahead == '/') ADVANCE(24);
      if (lookahead == '<') ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (lookahead != 0 &&
          lookahead != '=' &&
          lookahead != '>') ADVANCE(22);
      END_STATE();
    case 8:
      if (eof) ADVANCE(9);
      if (lookahead == '<') ADVANCE(10);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(11);
      if (lookahead != 0) ADVANCE(12);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '%') ADVANCE(13);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '<') ADVANCE(10);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(11);
      if (lookahead != 0) ADVANCE(12);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead != 0 &&
          lookahead != '<') ADVANCE(12);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_LT_PERCENT);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_PERCENT_GT);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(aux_sym__quoted_parameter_value_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(17);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(18);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(aux_sym__quoted_parameter_value_token1);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(18);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(aux_sym__quoted_parameter_value_token2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(20);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(21);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(aux_sym__quoted_parameter_value_token2);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(21);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(aux_sym_macro_name_token1);
      if (lookahead == '/') ADVANCE(24);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\'' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(22);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(aux_sym_macro_name_token1);
      if (!aux_sym_macro_name_token1_character_set_1(lookahead)) ADVANCE(23);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym_parameter_value);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\'' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(24);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 8},
  [2] = {.lex_state = 8},
  [3] = {.lex_state = 8},
  [4] = {.lex_state = 1},
  [5] = {.lex_state = 3},
  [6] = {.lex_state = 3},
  [7] = {.lex_state = 3},
  [8] = {.lex_state = 3},
  [9] = {.lex_state = 3},
  [10] = {.lex_state = 8},
  [11] = {.lex_state = 8},
  [12] = {.lex_state = 8},
  [13] = {.lex_state = 8},
  [14] = {.lex_state = 3},
  [15] = {.lex_state = 3},
  [16] = {.lex_state = 3},
  [17] = {.lex_state = 5},
  [18] = {.lex_state = 2},
  [19] = {.lex_state = 3},
  [20] = {.lex_state = 3},
  [21] = {.lex_state = 3},
  [22] = {.lex_state = 3},
  [23] = {.lex_state = 3},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LT_PERCENT] = ACTIONS(1),
    [anon_sym_PERCENT_GT] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [aux_sym_macro_name_token1] = ACTIONS(1),
    [sym_parameter_value] = ACTIONS(1),
  },
  [1] = {
    [sym_fragment] = STATE(28),
    [sym_text] = STATE(3),
    [sym_macro] = STATE(3),
    [aux_sym_fragment_repeat1] = STATE(3),
    [aux_sym_text_repeat1] = STATE(11),
    [ts_builtin_sym_end] = ACTIONS(3),
    [aux_sym_text_token1] = ACTIONS(5),
    [anon_sym_LT_PERCENT] = ACTIONS(7),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 5,
    ACTIONS(9), 1,
      ts_builtin_sym_end,
    ACTIONS(11), 1,
      aux_sym_text_token1,
    ACTIONS(14), 1,
      anon_sym_LT_PERCENT,
    STATE(11), 1,
      aux_sym_text_repeat1,
    STATE(2), 3,
      sym_text,
      sym_macro,
      aux_sym_fragment_repeat1,
  [18] = 5,
    ACTIONS(5), 1,
      aux_sym_text_token1,
    ACTIONS(7), 1,
      anon_sym_LT_PERCENT,
    ACTIONS(17), 1,
      ts_builtin_sym_end,
    STATE(11), 1,
      aux_sym_text_repeat1,
    STATE(2), 3,
      sym_text,
      sym_macro,
      aux_sym_fragment_repeat1,
  [36] = 5,
    ACTIONS(19), 1,
      anon_sym_LT_PERCENT,
    ACTIONS(21), 1,
      anon_sym_SQUOTE,
    ACTIONS(23), 1,
      anon_sym_DQUOTE,
    ACTIONS(25), 1,
      sym_parameter_value,
    STATE(19), 2,
      sym_macro,
      sym__quoted_parameter_value,
  [53] = 4,
    ACTIONS(27), 1,
      anon_sym_PERCENT_GT,
    ACTIONS(29), 1,
      aux_sym_macro_name_token1,
    STATE(27), 1,
      sym_parameter_key,
    STATE(7), 2,
      sym_macro_parameter,
      aux_sym_macro_repeat1,
  [67] = 4,
    ACTIONS(29), 1,
      aux_sym_macro_name_token1,
    ACTIONS(31), 1,
      anon_sym_PERCENT_GT,
    STATE(27), 1,
      sym_parameter_key,
    STATE(8), 2,
      sym_macro_parameter,
      aux_sym_macro_repeat1,
  [81] = 4,
    ACTIONS(29), 1,
      aux_sym_macro_name_token1,
    ACTIONS(33), 1,
      anon_sym_PERCENT_GT,
    STATE(27), 1,
      sym_parameter_key,
    STATE(9), 2,
      sym_macro_parameter,
      aux_sym_macro_repeat1,
  [95] = 4,
    ACTIONS(29), 1,
      aux_sym_macro_name_token1,
    ACTIONS(35), 1,
      anon_sym_PERCENT_GT,
    STATE(27), 1,
      sym_parameter_key,
    STATE(9), 2,
      sym_macro_parameter,
      aux_sym_macro_repeat1,
  [109] = 4,
    ACTIONS(37), 1,
      anon_sym_PERCENT_GT,
    ACTIONS(39), 1,
      aux_sym_macro_name_token1,
    STATE(27), 1,
      sym_parameter_key,
    STATE(9), 2,
      sym_macro_parameter,
      aux_sym_macro_repeat1,
  [123] = 4,
    ACTIONS(42), 1,
      ts_builtin_sym_end,
    ACTIONS(44), 1,
      aux_sym_text_token1,
    ACTIONS(47), 1,
      anon_sym_LT_PERCENT,
    STATE(10), 1,
      aux_sym_text_repeat1,
  [136] = 4,
    ACTIONS(49), 1,
      ts_builtin_sym_end,
    ACTIONS(51), 1,
      aux_sym_text_token1,
    ACTIONS(53), 1,
      anon_sym_LT_PERCENT,
    STATE(10), 1,
      aux_sym_text_repeat1,
  [149] = 2,
    ACTIONS(55), 1,
      ts_builtin_sym_end,
    ACTIONS(57), 2,
      aux_sym_text_token1,
      anon_sym_LT_PERCENT,
  [157] = 2,
    ACTIONS(59), 1,
      ts_builtin_sym_end,
    ACTIONS(61), 2,
      aux_sym_text_token1,
      anon_sym_LT_PERCENT,
  [165] = 1,
    ACTIONS(63), 2,
      anon_sym_PERCENT_GT,
      aux_sym_macro_name_token1,
  [170] = 2,
    ACTIONS(65), 1,
      aux_sym_macro_name_token1,
    STATE(5), 1,
      sym_macro_name,
  [177] = 2,
    ACTIONS(65), 1,
      aux_sym_macro_name_token1,
    STATE(6), 1,
      sym_macro_name,
  [184] = 2,
    ACTIONS(67), 1,
      anon_sym_SQUOTE,
    ACTIONS(69), 1,
      aux_sym__quoted_parameter_value_token1,
  [191] = 2,
    ACTIONS(67), 1,
      anon_sym_DQUOTE,
    ACTIONS(71), 1,
      aux_sym__quoted_parameter_value_token2,
  [198] = 1,
    ACTIONS(73), 2,
      anon_sym_PERCENT_GT,
      aux_sym_macro_name_token1,
  [203] = 1,
    ACTIONS(75), 2,
      anon_sym_PERCENT_GT,
      aux_sym_macro_name_token1,
  [208] = 1,
    ACTIONS(77), 2,
      anon_sym_PERCENT_GT,
      aux_sym_macro_name_token1,
  [213] = 1,
    ACTIONS(55), 2,
      anon_sym_PERCENT_GT,
      aux_sym_macro_name_token1,
  [218] = 1,
    ACTIONS(59), 2,
      anon_sym_PERCENT_GT,
      aux_sym_macro_name_token1,
  [223] = 1,
    ACTIONS(79), 1,
      anon_sym_EQ,
  [227] = 1,
    ACTIONS(81), 1,
      anon_sym_SQUOTE,
  [231] = 1,
    ACTIONS(81), 1,
      anon_sym_DQUOTE,
  [235] = 1,
    ACTIONS(83), 1,
      anon_sym_EQ,
  [239] = 1,
    ACTIONS(85), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 18,
  [SMALL_STATE(4)] = 36,
  [SMALL_STATE(5)] = 53,
  [SMALL_STATE(6)] = 67,
  [SMALL_STATE(7)] = 81,
  [SMALL_STATE(8)] = 95,
  [SMALL_STATE(9)] = 109,
  [SMALL_STATE(10)] = 123,
  [SMALL_STATE(11)] = 136,
  [SMALL_STATE(12)] = 149,
  [SMALL_STATE(13)] = 157,
  [SMALL_STATE(14)] = 165,
  [SMALL_STATE(15)] = 170,
  [SMALL_STATE(16)] = 177,
  [SMALL_STATE(17)] = 184,
  [SMALL_STATE(18)] = 191,
  [SMALL_STATE(19)] = 198,
  [SMALL_STATE(20)] = 203,
  [SMALL_STATE(21)] = 208,
  [SMALL_STATE(22)] = 213,
  [SMALL_STATE(23)] = 218,
  [SMALL_STATE(24)] = 223,
  [SMALL_STATE(25)] = 227,
  [SMALL_STATE(26)] = 231,
  [SMALL_STATE(27)] = 235,
  [SMALL_STATE(28)] = 239,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fragment, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_fragment_repeat1, 2),
  [11] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_fragment_repeat1, 2), SHIFT_REPEAT(11),
  [14] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_fragment_repeat1, 2), SHIFT_REPEAT(15),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fragment, 1),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_macro_repeat1, 2),
  [39] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_macro_repeat1, 2), SHIFT_REPEAT(24),
  [42] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_text_repeat1, 2),
  [44] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_text_repeat1, 2), SHIFT_REPEAT(10),
  [47] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_text_repeat1, 2),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text, 1),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [53] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_text, 1),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_macro, 3),
  [57] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_macro, 3),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_macro, 4),
  [61] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_macro, 4),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_macro_name, 1),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_macro_parameter, 3),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__quoted_parameter_value, 2),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__quoted_parameter_value, 3),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_key, 1),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [85] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_helma(void) {
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
