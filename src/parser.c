#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 94
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 50
#define ALIAS_COUNT 0
#define TOKEN_COUNT 24
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 2

enum {
  sym_comment = 1,
  aux_sym_junk_token1 = 2,
  aux_sym_junk_token2 = 3,
  aux_sym_junk_token3 = 4,
  anon_sym_AT = 5,
  aux_sym_comment_command_token1 = 6,
  anon_sym_LBRACE = 7,
  anon_sym_RBRACE = 8,
  anon_sym_LPAREN = 9,
  anon_sym_RPAREN = 10,
  aux_sym_string_command_token1 = 11,
  anon_sym_EQ = 12,
  aux_sym_preamble_command_token1 = 13,
  anon_sym_COMMA = 14,
  aux_sym_key_token1 = 15,
  sym_identifier = 16,
  anon_sym_POUND = 17,
  sym_integer = 18,
  anon_sym_DQUOTE = 19,
  anon_sym_SQUOTE = 20,
  sym__brace_text = 21,
  sym__quote_text = 22,
  sym__paren_text = 23,
  sym_program = 24,
  sym_junk = 25,
  sym__command_or_entry = 26,
  sym_comment_command = 27,
  sym_string_command = 28,
  sym_preamble_command = 29,
  sym_entry = 30,
  sym_key = 31,
  sym_name = 32,
  sym_field = 33,
  sym_value = 34,
  sym__token = 35,
  sym_string = 36,
  sym_text_brace_balanced = 37,
  sym_text_quote_balanced = 38,
  sym_text_paren_balanced = 39,
  sym__brace_balanced = 40,
  sym__quote_balanced = 41,
  sym__paren_balanced = 42,
  aux_sym_program_repeat1 = 43,
  aux_sym_junk_repeat1 = 44,
  aux_sym_entry_repeat1 = 45,
  aux_sym_value_repeat1 = 46,
  aux_sym_text_brace_balanced_repeat1 = 47,
  aux_sym_text_quote_balanced_repeat1 = 48,
  aux_sym_text_paren_balanced_repeat1 = 49,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_comment] = "comment",
  [aux_sym_junk_token1] = "junk_token1",
  [aux_sym_junk_token2] = "junk_token2",
  [aux_sym_junk_token3] = "junk_token3",
  [anon_sym_AT] = "@",
  [aux_sym_comment_command_token1] = "name",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [aux_sym_string_command_token1] = "name",
  [anon_sym_EQ] = "=",
  [aux_sym_preamble_command_token1] = "name",
  [anon_sym_COMMA] = ",",
  [aux_sym_key_token1] = "key_token1",
  [sym_identifier] = "identifier",
  [anon_sym_POUND] = "#",
  [sym_integer] = "integer",
  [anon_sym_DQUOTE] = "\"",
  [anon_sym_SQUOTE] = "'",
  [sym__brace_text] = "_brace_text",
  [sym__quote_text] = "_quote_text",
  [sym__paren_text] = "_paren_text",
  [sym_program] = "program",
  [sym_junk] = "junk",
  [sym__command_or_entry] = "_command_or_entry",
  [sym_comment_command] = "comment_command",
  [sym_string_command] = "string_command",
  [sym_preamble_command] = "preamble_command",
  [sym_entry] = "entry",
  [sym_key] = "key",
  [sym_name] = "name",
  [sym_field] = "field",
  [sym_value] = "value",
  [sym__token] = "_token",
  [sym_string] = "string",
  [sym_text_brace_balanced] = "comment",
  [sym_text_quote_balanced] = "text",
  [sym_text_paren_balanced] = "comment",
  [sym__brace_balanced] = "_brace_balanced",
  [sym__quote_balanced] = "_quote_balanced",
  [sym__paren_balanced] = "_paren_balanced",
  [aux_sym_program_repeat1] = "program_repeat1",
  [aux_sym_junk_repeat1] = "junk_repeat1",
  [aux_sym_entry_repeat1] = "entry_repeat1",
  [aux_sym_value_repeat1] = "value_repeat1",
  [aux_sym_text_brace_balanced_repeat1] = "text_brace_balanced_repeat1",
  [aux_sym_text_quote_balanced_repeat1] = "text_quote_balanced_repeat1",
  [aux_sym_text_paren_balanced_repeat1] = "text_paren_balanced_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_comment] = sym_comment,
  [aux_sym_junk_token1] = aux_sym_junk_token1,
  [aux_sym_junk_token2] = aux_sym_junk_token2,
  [aux_sym_junk_token3] = aux_sym_junk_token3,
  [anon_sym_AT] = anon_sym_AT,
  [aux_sym_comment_command_token1] = sym_name,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [aux_sym_string_command_token1] = sym_name,
  [anon_sym_EQ] = anon_sym_EQ,
  [aux_sym_preamble_command_token1] = sym_name,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [aux_sym_key_token1] = aux_sym_key_token1,
  [sym_identifier] = sym_identifier,
  [anon_sym_POUND] = anon_sym_POUND,
  [sym_integer] = sym_integer,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [sym__brace_text] = sym__brace_text,
  [sym__quote_text] = sym__quote_text,
  [sym__paren_text] = sym__paren_text,
  [sym_program] = sym_program,
  [sym_junk] = sym_junk,
  [sym__command_or_entry] = sym__command_or_entry,
  [sym_comment_command] = sym_comment_command,
  [sym_string_command] = sym_string_command,
  [sym_preamble_command] = sym_preamble_command,
  [sym_entry] = sym_entry,
  [sym_key] = sym_key,
  [sym_name] = sym_name,
  [sym_field] = sym_field,
  [sym_value] = sym_value,
  [sym__token] = sym__token,
  [sym_string] = sym_string,
  [sym_text_brace_balanced] = sym_comment,
  [sym_text_quote_balanced] = sym_text_quote_balanced,
  [sym_text_paren_balanced] = sym_comment,
  [sym__brace_balanced] = sym__brace_balanced,
  [sym__quote_balanced] = sym__quote_balanced,
  [sym__paren_balanced] = sym__paren_balanced,
  [aux_sym_program_repeat1] = aux_sym_program_repeat1,
  [aux_sym_junk_repeat1] = aux_sym_junk_repeat1,
  [aux_sym_entry_repeat1] = aux_sym_entry_repeat1,
  [aux_sym_value_repeat1] = aux_sym_value_repeat1,
  [aux_sym_text_brace_balanced_repeat1] = aux_sym_text_brace_balanced_repeat1,
  [aux_sym_text_quote_balanced_repeat1] = aux_sym_text_quote_balanced_repeat1,
  [aux_sym_text_paren_balanced_repeat1] = aux_sym_text_paren_balanced_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_junk_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_junk_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_junk_token3] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_AT] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_comment_command_token1] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_command_token1] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_preamble_command_token1] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_key_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_POUND] = {
    .visible = true,
    .named = false,
  },
  [sym_integer] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [sym__brace_text] = {
    .visible = false,
    .named = true,
  },
  [sym__quote_text] = {
    .visible = false,
    .named = true,
  },
  [sym__paren_text] = {
    .visible = false,
    .named = true,
  },
  [sym_program] = {
    .visible = true,
    .named = true,
  },
  [sym_junk] = {
    .visible = true,
    .named = true,
  },
  [sym__command_or_entry] = {
    .visible = false,
    .named = true,
  },
  [sym_comment_command] = {
    .visible = true,
    .named = true,
  },
  [sym_string_command] = {
    .visible = true,
    .named = true,
  },
  [sym_preamble_command] = {
    .visible = true,
    .named = true,
  },
  [sym_entry] = {
    .visible = true,
    .named = true,
  },
  [sym_key] = {
    .visible = true,
    .named = true,
  },
  [sym_name] = {
    .visible = true,
    .named = true,
  },
  [sym_field] = {
    .visible = true,
    .named = true,
  },
  [sym_value] = {
    .visible = true,
    .named = true,
  },
  [sym__token] = {
    .visible = false,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_text_brace_balanced] = {
    .visible = true,
    .named = true,
  },
  [sym_text_quote_balanced] = {
    .visible = true,
    .named = true,
  },
  [sym_text_paren_balanced] = {
    .visible = true,
    .named = true,
  },
  [sym__brace_balanced] = {
    .visible = false,
    .named = true,
  },
  [sym__quote_balanced] = {
    .visible = false,
    .named = true,
  },
  [sym__paren_balanced] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_program_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_junk_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_entry_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_value_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_text_brace_balanced_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_text_quote_balanced_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_text_paren_balanced_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [1] = sym_text_quote_balanced,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  sym_text_brace_balanced, 2,
    sym_comment,
    sym_text_quote_balanced,
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
  [29] = 26,
  [30] = 30,
  [31] = 31,
  [32] = 21,
  [33] = 33,
  [34] = 19,
  [35] = 35,
  [36] = 20,
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
  [56] = 46,
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
  [69] = 69,
  [70] = 66,
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
};

static inline bool aux_sym_key_token1_character_set_1(int32_t c) {
  return (c < '\''
    ? (c < ' '
      ? (c < '\t'
        ? c == 0
        : (c <= '\n' || c == '\r'))
      : (c <= ' ' || (c < '%'
        ? (c >= '"' && c <= '#')
        : c <= '%')))
    : (c <= ')' || (c < '\\'
      ? (c < '='
        ? c == ','
        : c <= '=')
      : (c <= '\\' || (c < '}'
        ? c == '{'
        : c <= '~')))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(10);
      if (lookahead == '"') ADVANCE(53);
      if (lookahead == '#') ADVANCE(51);
      if (lookahead == '%') ADVANCE(14);
      if (lookahead == '\'') ADVANCE(54);
      if (lookahead == '(') ADVANCE(25);
      if (lookahead == ')') ADVANCE(26);
      if (lookahead == ',') ADVANCE(30);
      if (lookahead == '=') ADVANCE(28);
      if (lookahead == '@') ADVANCE(21);
      if (lookahead == '{') ADVANCE(23);
      if (lookahead == '}') ADVANCE(24);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (lookahead != 0) ADVANCE(15);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(53);
      if (lookahead == '#') ADVANCE(51);
      if (lookahead == '%') ADVANCE(14);
      if (lookahead == '\'') ADVANCE(54);
      if (lookahead == '(') ADVANCE(25);
      if (lookahead == ')') ADVANCE(26);
      if (lookahead == ',') ADVANCE(30);
      if (lookahead == '=') ADVANCE(28);
      if (lookahead == '{') ADVANCE(23);
      if (lookahead == '}') ADVANCE(24);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(52);
      if (lookahead != 0 &&
          lookahead != '\\' &&
          lookahead != '~') ADVANCE(50);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(53);
      if (lookahead == '%') ADVANCE(13);
      if (lookahead == '{') ADVANCE(23);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(59);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(60);
      END_STATE();
    case 3:
      if (lookahead == '%') ADVANCE(14);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(44);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(45);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(48);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '#' &&
          (lookahead < '\'' || ')' < lookahead) &&
          lookahead != ',' &&
          lookahead != '=' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~') ADVANCE(49);
      END_STATE();
    case 4:
      if (lookahead == '%') ADVANCE(14);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '#' &&
          (lookahead < '\'' || ')' < lookahead) &&
          lookahead != ',' &&
          lookahead != '=' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~') ADVANCE(49);
      END_STATE();
    case 5:
      if (lookahead == '%') ADVANCE(11);
      if (lookahead == '(') ADVANCE(25);
      if (lookahead == ')') ADVANCE(26);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(61);
      if (lookahead != 0) ADVANCE(62);
      END_STATE();
    case 6:
      if (lookahead == '%') ADVANCE(12);
      if (lookahead == '{') ADVANCE(23);
      if (lookahead == '}') ADVANCE(24);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(56);
      if (lookahead != 0) ADVANCE(57);
      END_STATE();
    case 7:
      if (lookahead == '%') ADVANCE(13);
      if (lookahead == '\'') ADVANCE(55);
      if (lookahead == '{') ADVANCE(23);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(58);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '}') ADVANCE(60);
      END_STATE();
    case 8:
      if (eof) ADVANCE(10);
      if (lookahead == '\n') SKIP(8)
      if (lookahead == '%') ADVANCE(14);
      if (lookahead == '@') ADVANCE(21);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(19);
      if (lookahead != 0) ADVANCE(16);
      END_STATE();
    case 9:
      if (eof) ADVANCE(10);
      if (lookahead == '%') ADVANCE(14);
      if (lookahead == '@') ADVANCE(21);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      if (lookahead != 0) ADVANCE(15);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(62);
      if (lookahead == '(' ||
          lookahead == ')') ADVANCE(14);
      if (lookahead != 0) ADVANCE(11);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(57);
      if (lookahead == '{' ||
          lookahead == '}') ADVANCE(14);
      if (lookahead != 0) ADVANCE(12);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(60);
      if (lookahead == '"' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(14);
      if (lookahead != 0) ADVANCE(13);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(14);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(aux_sym_junk_token1);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(aux_sym_junk_token1);
      if (lookahead == '\n') ADVANCE(17);
      if (lookahead != 0 &&
          lookahead != '%' &&
          lookahead != '@') ADVANCE(20);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(aux_sym_junk_token2);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(aux_sym_junk_token2);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(19);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != '@') ADVANCE(16);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(aux_sym_junk_token3);
      if (lookahead == '\n') ADVANCE(18);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(19);
      if (lookahead != 0 &&
          lookahead != '%' &&
          lookahead != '@') ADVANCE(16);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(aux_sym_junk_token3);
      if (lookahead == '\n') ADVANCE(17);
      if (lookahead != 0 &&
          lookahead != '%' &&
          lookahead != '@') ADVANCE(20);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(aux_sym_comment_command_token1);
      if (!aux_sym_key_token1_character_set_1(lookahead)) ADVANCE(49);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(aux_sym_string_command_token1);
      if (!aux_sym_key_token1_character_set_1(lookahead)) ADVANCE(49);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(aux_sym_preamble_command_token1);
      if (!aux_sym_key_token1_character_set_1(lookahead)) ADVANCE(49);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(39);
      if (!aux_sym_key_token1_character_set_1(lookahead)) ADVANCE(49);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(38);
      if (!aux_sym_key_token1_character_set_1(lookahead)) ADVANCE(49);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(31);
      if (!aux_sym_key_token1_character_set_1(lookahead)) ADVANCE(49);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(29);
      if (!aux_sym_key_token1_character_set_1(lookahead)) ADVANCE(49);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(43);
      if (!aux_sym_key_token1_character_set_1(lookahead)) ADVANCE(49);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(27);
      if (!aux_sym_key_token1_character_set_1(lookahead)) ADVANCE(49);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(42);
      if (!aux_sym_key_token1_character_set_1(lookahead)) ADVANCE(49);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(34);
      if (!aux_sym_key_token1_character_set_1(lookahead)) ADVANCE(49);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(32);
      if (!aux_sym_key_token1_character_set_1(lookahead)) ADVANCE(49);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(41);
      if (!aux_sym_key_token1_character_set_1(lookahead)) ADVANCE(49);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(35);
      if (!aux_sym_key_token1_character_set_1(lookahead)) ADVANCE(49);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(36);
      if (!aux_sym_key_token1_character_set_1(lookahead)) ADVANCE(49);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(47);
      if (!aux_sym_key_token1_character_set_1(lookahead)) ADVANCE(49);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(40);
      if (!aux_sym_key_token1_character_set_1(lookahead)) ADVANCE(49);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(33);
      if (!aux_sym_key_token1_character_set_1(lookahead)) ADVANCE(49);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(37);
      if (!aux_sym_key_token1_character_set_1(lookahead)) ADVANCE(49);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(22);
      if (!aux_sym_key_token1_character_set_1(lookahead)) ADVANCE(49);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(46);
      if (!aux_sym_key_token1_character_set_1(lookahead)) ADVANCE(49);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (!aux_sym_key_token1_character_set_1(lookahead)) ADVANCE(49);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_identifier);
      if (!aux_sym_key_token1_character_set_1(lookahead)) ADVANCE(50);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_integer);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(52);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(60);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym__brace_text);
      if (lookahead == '%') ADVANCE(12);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(56);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(57);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym__brace_text);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(57);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym__quote_text);
      if (lookahead == '%') ADVANCE(13);
      if (lookahead == '\'') ADVANCE(55);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(58);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(60);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym__quote_text);
      if (lookahead == '%') ADVANCE(13);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(59);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(60);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym__quote_text);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(60);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym__paren_text);
      if (lookahead == '%') ADVANCE(11);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(61);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(62);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym__paren_text);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(62);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 9},
  [2] = {.lex_state = 9},
  [3] = {.lex_state = 9},
  [4] = {.lex_state = 1},
  [5] = {.lex_state = 1},
  [6] = {.lex_state = 1},
  [7] = {.lex_state = 1},
  [8] = {.lex_state = 1},
  [9] = {.lex_state = 1},
  [10] = {.lex_state = 5},
  [11] = {.lex_state = 6},
  [12] = {.lex_state = 8},
  [13] = {.lex_state = 8},
  [14] = {.lex_state = 7},
  [15] = {.lex_state = 2},
  [16] = {.lex_state = 6},
  [17] = {.lex_state = 8},
  [18] = {.lex_state = 3},
  [19] = {.lex_state = 6},
  [20] = {.lex_state = 2},
  [21] = {.lex_state = 6},
  [22] = {.lex_state = 6},
  [23] = {.lex_state = 1},
  [24] = {.lex_state = 6},
  [25] = {.lex_state = 6},
  [26] = {.lex_state = 2},
  [27] = {.lex_state = 6},
  [28] = {.lex_state = 5},
  [29] = {.lex_state = 7},
  [30] = {.lex_state = 5},
  [31] = {.lex_state = 5},
  [32] = {.lex_state = 6},
  [33] = {.lex_state = 5},
  [34] = {.lex_state = 6},
  [35] = {.lex_state = 1},
  [36] = {.lex_state = 7},
  [37] = {.lex_state = 1},
  [38] = {.lex_state = 1},
  [39] = {.lex_state = 1},
  [40] = {.lex_state = 1},
  [41] = {.lex_state = 1},
  [42] = {.lex_state = 9},
  [43] = {.lex_state = 6},
  [44] = {.lex_state = 1},
  [45] = {.lex_state = 9},
  [46] = {.lex_state = 7},
  [47] = {.lex_state = 5},
  [48] = {.lex_state = 1},
  [49] = {.lex_state = 1},
  [50] = {.lex_state = 1},
  [51] = {.lex_state = 1},
  [52] = {.lex_state = 1},
  [53] = {.lex_state = 9},
  [54] = {.lex_state = 9},
  [55] = {.lex_state = 9},
  [56] = {.lex_state = 2},
  [57] = {.lex_state = 9},
  [58] = {.lex_state = 9},
  [59] = {.lex_state = 1},
  [60] = {.lex_state = 1},
  [61] = {.lex_state = 1},
  [62] = {.lex_state = 1},
  [63] = {.lex_state = 6},
  [64] = {.lex_state = 5},
  [65] = {.lex_state = 9},
  [66] = {.lex_state = 2},
  [67] = {.lex_state = 1},
  [68] = {.lex_state = 9},
  [69] = {.lex_state = 9},
  [70] = {.lex_state = 7},
  [71] = {.lex_state = 4},
  [72] = {.lex_state = 4},
  [73] = {.lex_state = 1},
  [74] = {.lex_state = 1},
  [75] = {.lex_state = 1},
  [76] = {.lex_state = 1},
  [77] = {.lex_state = 1},
  [78] = {.lex_state = 1},
  [79] = {.lex_state = 1},
  [80] = {.lex_state = 1},
  [81] = {.lex_state = 1},
  [82] = {.lex_state = 1},
  [83] = {.lex_state = 1},
  [84] = {.lex_state = 1},
  [85] = {.lex_state = 1},
  [86] = {.lex_state = 1},
  [87] = {.lex_state = 1},
  [88] = {.lex_state = 1},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 1},
  [91] = {.lex_state = 1},
  [92] = {.lex_state = 1},
  [93] = {.lex_state = 1},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [aux_sym_junk_token1] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
  },
  [1] = {
    [sym_program] = STATE(89),
    [sym_junk] = STATE(2),
    [sym__command_or_entry] = STATE(2),
    [sym_comment_command] = STATE(2),
    [sym_string_command] = STATE(2),
    [sym_preamble_command] = STATE(2),
    [sym_entry] = STATE(2),
    [aux_sym_program_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_comment] = ACTIONS(7),
    [aux_sym_junk_token1] = ACTIONS(9),
    [anon_sym_AT] = ACTIONS(11),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 5,
    ACTIONS(9), 1,
      aux_sym_junk_token1,
    ACTIONS(11), 1,
      anon_sym_AT,
    ACTIONS(13), 1,
      ts_builtin_sym_end,
    ACTIONS(15), 1,
      sym_comment,
    STATE(3), 7,
      sym_junk,
      sym__command_or_entry,
      sym_comment_command,
      sym_string_command,
      sym_preamble_command,
      sym_entry,
      aux_sym_program_repeat1,
  [22] = 5,
    ACTIONS(17), 1,
      ts_builtin_sym_end,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(22), 1,
      aux_sym_junk_token1,
    ACTIONS(25), 1,
      anon_sym_AT,
    STATE(3), 7,
      sym_junk,
      sym__command_or_entry,
      sym_comment_command,
      sym_string_command,
      sym_preamble_command,
      sym_entry,
      aux_sym_program_repeat1,
  [44] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(28), 1,
      anon_sym_LBRACE,
    ACTIONS(32), 1,
      anon_sym_DQUOTE,
    ACTIONS(34), 1,
      anon_sym_SQUOTE,
    STATE(67), 1,
      sym_value,
    ACTIONS(30), 2,
      sym_identifier,
      sym_integer,
    STATE(35), 2,
      sym__token,
      sym_string,
  [68] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(28), 1,
      anon_sym_LBRACE,
    ACTIONS(32), 1,
      anon_sym_DQUOTE,
    ACTIONS(34), 1,
      anon_sym_SQUOTE,
    STATE(93), 1,
      sym_value,
    ACTIONS(30), 2,
      sym_identifier,
      sym_integer,
    STATE(35), 2,
      sym__token,
      sym_string,
  [92] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(28), 1,
      anon_sym_LBRACE,
    ACTIONS(32), 1,
      anon_sym_DQUOTE,
    ACTIONS(34), 1,
      anon_sym_SQUOTE,
    STATE(85), 1,
      sym_value,
    ACTIONS(30), 2,
      sym_identifier,
      sym_integer,
    STATE(35), 2,
      sym__token,
      sym_string,
  [116] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(28), 1,
      anon_sym_LBRACE,
    ACTIONS(32), 1,
      anon_sym_DQUOTE,
    ACTIONS(34), 1,
      anon_sym_SQUOTE,
    STATE(87), 1,
      sym_value,
    ACTIONS(30), 2,
      sym_identifier,
      sym_integer,
    STATE(35), 2,
      sym__token,
      sym_string,
  [140] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(28), 1,
      anon_sym_LBRACE,
    ACTIONS(32), 1,
      anon_sym_DQUOTE,
    ACTIONS(34), 1,
      anon_sym_SQUOTE,
    STATE(88), 1,
      sym_value,
    ACTIONS(30), 2,
      sym_identifier,
      sym_integer,
    STATE(35), 2,
      sym__token,
      sym_string,
  [164] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(28), 1,
      anon_sym_LBRACE,
    ACTIONS(32), 1,
      anon_sym_DQUOTE,
    ACTIONS(34), 1,
      anon_sym_SQUOTE,
    ACTIONS(36), 2,
      sym_identifier,
      sym_integer,
    STATE(38), 2,
      sym__token,
      sym_string,
  [185] = 6,
    ACTIONS(38), 1,
      sym_comment,
    ACTIONS(40), 1,
      anon_sym_LPAREN,
    ACTIONS(42), 1,
      anon_sym_RPAREN,
    ACTIONS(44), 1,
      sym__paren_text,
    STATE(83), 1,
      sym_text_paren_balanced,
    STATE(30), 2,
      sym__paren_balanced,
      aux_sym_text_paren_balanced_repeat1,
  [205] = 6,
    ACTIONS(38), 1,
      sym_comment,
    ACTIONS(42), 1,
      anon_sym_RBRACE,
    ACTIONS(46), 1,
      anon_sym_LBRACE,
    ACTIONS(48), 1,
      sym__brace_text,
    STATE(84), 1,
      sym_text_brace_balanced,
    STATE(27), 2,
      sym__brace_balanced,
      aux_sym_text_brace_balanced_repeat1,
  [225] = 5,
    ACTIONS(50), 1,
      ts_builtin_sym_end,
    ACTIONS(54), 1,
      aux_sym_junk_token2,
    ACTIONS(56), 1,
      aux_sym_junk_token3,
    STATE(17), 1,
      aux_sym_junk_repeat1,
    ACTIONS(52), 3,
      sym_comment,
      aux_sym_junk_token1,
      anon_sym_AT,
  [243] = 5,
    ACTIONS(58), 1,
      ts_builtin_sym_end,
    ACTIONS(62), 1,
      aux_sym_junk_token2,
    ACTIONS(64), 1,
      aux_sym_junk_token3,
    STATE(12), 1,
      aux_sym_junk_repeat1,
    ACTIONS(60), 3,
      sym_comment,
      aux_sym_junk_token1,
      anon_sym_AT,
  [261] = 6,
    ACTIONS(38), 1,
      sym_comment,
    ACTIONS(66), 1,
      anon_sym_LBRACE,
    ACTIONS(68), 1,
      anon_sym_SQUOTE,
    ACTIONS(70), 1,
      sym__quote_text,
    STATE(91), 1,
      sym_text_quote_balanced,
    STATE(29), 2,
      sym__quote_balanced,
      aux_sym_text_quote_balanced_repeat1,
  [281] = 6,
    ACTIONS(38), 1,
      sym_comment,
    ACTIONS(68), 1,
      anon_sym_DQUOTE,
    ACTIONS(72), 1,
      anon_sym_LBRACE,
    ACTIONS(74), 1,
      sym__quote_text,
    STATE(90), 1,
      sym_text_quote_balanced,
    STATE(26), 2,
      sym__quote_balanced,
      aux_sym_text_quote_balanced_repeat1,
  [301] = 6,
    ACTIONS(38), 1,
      sym_comment,
    ACTIONS(46), 1,
      anon_sym_LBRACE,
    ACTIONS(48), 1,
      sym__brace_text,
    ACTIONS(68), 1,
      anon_sym_RBRACE,
    STATE(92), 1,
      sym_text_brace_balanced,
    STATE(27), 2,
      sym__brace_balanced,
      aux_sym_text_brace_balanced_repeat1,
  [321] = 4,
    ACTIONS(76), 1,
      ts_builtin_sym_end,
    ACTIONS(80), 1,
      aux_sym_junk_token2,
    STATE(17), 1,
      aux_sym_junk_repeat1,
    ACTIONS(78), 4,
      sym_comment,
      aux_sym_junk_token1,
      aux_sym_junk_token3,
      anon_sym_AT,
  [337] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(83), 1,
      aux_sym_comment_command_token1,
    ACTIONS(85), 1,
      aux_sym_string_command_token1,
    ACTIONS(87), 1,
      aux_sym_preamble_command_token1,
    ACTIONS(89), 1,
      aux_sym_key_token1,
    STATE(77), 1,
      sym_name,
  [356] = 5,
    ACTIONS(38), 1,
      sym_comment,
    ACTIONS(46), 1,
      anon_sym_LBRACE,
    ACTIONS(91), 1,
      anon_sym_RBRACE,
    ACTIONS(93), 1,
      sym__brace_text,
    STATE(21), 2,
      sym__brace_balanced,
      aux_sym_text_brace_balanced_repeat1,
  [373] = 5,
    ACTIONS(38), 1,
      sym_comment,
    ACTIONS(95), 1,
      anon_sym_LBRACE,
    ACTIONS(98), 1,
      anon_sym_DQUOTE,
    ACTIONS(100), 1,
      sym__quote_text,
    STATE(20), 2,
      sym__quote_balanced,
      aux_sym_text_quote_balanced_repeat1,
  [390] = 5,
    ACTIONS(38), 1,
      sym_comment,
    ACTIONS(46), 1,
      anon_sym_LBRACE,
    ACTIONS(103), 1,
      anon_sym_RBRACE,
    ACTIONS(105), 1,
      sym__brace_text,
    STATE(22), 2,
      sym__brace_balanced,
      aux_sym_text_brace_balanced_repeat1,
  [407] = 5,
    ACTIONS(38), 1,
      sym_comment,
    ACTIONS(107), 1,
      anon_sym_LBRACE,
    ACTIONS(110), 1,
      anon_sym_RBRACE,
    ACTIONS(112), 1,
      sym__brace_text,
    STATE(22), 2,
      sym__brace_balanced,
      aux_sym_text_brace_balanced_repeat1,
  [424] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(117), 1,
      anon_sym_POUND,
    STATE(37), 1,
      aux_sym_value_repeat1,
    ACTIONS(115), 3,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [439] = 5,
    ACTIONS(38), 1,
      sym_comment,
    ACTIONS(46), 1,
      anon_sym_LBRACE,
    ACTIONS(119), 1,
      anon_sym_RBRACE,
    ACTIONS(121), 1,
      sym__brace_text,
    STATE(25), 2,
      sym__brace_balanced,
      aux_sym_text_brace_balanced_repeat1,
  [456] = 5,
    ACTIONS(38), 1,
      sym_comment,
    ACTIONS(46), 1,
      anon_sym_LBRACE,
    ACTIONS(105), 1,
      sym__brace_text,
    ACTIONS(123), 1,
      anon_sym_RBRACE,
    STATE(22), 2,
      sym__brace_balanced,
      aux_sym_text_brace_balanced_repeat1,
  [473] = 5,
    ACTIONS(38), 1,
      sym_comment,
    ACTIONS(72), 1,
      anon_sym_LBRACE,
    ACTIONS(125), 1,
      anon_sym_DQUOTE,
    ACTIONS(127), 1,
      sym__quote_text,
    STATE(20), 2,
      sym__quote_balanced,
      aux_sym_text_quote_balanced_repeat1,
  [490] = 5,
    ACTIONS(38), 1,
      sym_comment,
    ACTIONS(46), 1,
      anon_sym_LBRACE,
    ACTIONS(105), 1,
      sym__brace_text,
    ACTIONS(129), 1,
      anon_sym_RBRACE,
    STATE(22), 2,
      sym__brace_balanced,
      aux_sym_text_brace_balanced_repeat1,
  [507] = 5,
    ACTIONS(38), 1,
      sym_comment,
    ACTIONS(40), 1,
      anon_sym_LPAREN,
    ACTIONS(131), 1,
      anon_sym_RPAREN,
    ACTIONS(133), 1,
      sym__paren_text,
    STATE(31), 2,
      sym__paren_balanced,
      aux_sym_text_paren_balanced_repeat1,
  [524] = 5,
    ACTIONS(38), 1,
      sym_comment,
    ACTIONS(66), 1,
      anon_sym_LBRACE,
    ACTIONS(125), 1,
      anon_sym_SQUOTE,
    ACTIONS(135), 1,
      sym__quote_text,
    STATE(36), 2,
      sym__quote_balanced,
      aux_sym_text_quote_balanced_repeat1,
  [541] = 5,
    ACTIONS(38), 1,
      sym_comment,
    ACTIONS(40), 1,
      anon_sym_LPAREN,
    ACTIONS(137), 1,
      anon_sym_RPAREN,
    ACTIONS(139), 1,
      sym__paren_text,
    STATE(33), 2,
      sym__paren_balanced,
      aux_sym_text_paren_balanced_repeat1,
  [558] = 5,
    ACTIONS(38), 1,
      sym_comment,
    ACTIONS(40), 1,
      anon_sym_LPAREN,
    ACTIONS(139), 1,
      sym__paren_text,
    ACTIONS(141), 1,
      anon_sym_RPAREN,
    STATE(33), 2,
      sym__paren_balanced,
      aux_sym_text_paren_balanced_repeat1,
  [575] = 5,
    ACTIONS(38), 1,
      sym_comment,
    ACTIONS(46), 1,
      anon_sym_LBRACE,
    ACTIONS(105), 1,
      sym__brace_text,
    ACTIONS(143), 1,
      anon_sym_RBRACE,
    STATE(22), 2,
      sym__brace_balanced,
      aux_sym_text_brace_balanced_repeat1,
  [592] = 5,
    ACTIONS(38), 1,
      sym_comment,
    ACTIONS(145), 1,
      anon_sym_LPAREN,
    ACTIONS(148), 1,
      anon_sym_RPAREN,
    ACTIONS(150), 1,
      sym__paren_text,
    STATE(33), 2,
      sym__paren_balanced,
      aux_sym_text_paren_balanced_repeat1,
  [609] = 5,
    ACTIONS(38), 1,
      sym_comment,
    ACTIONS(46), 1,
      anon_sym_LBRACE,
    ACTIONS(153), 1,
      anon_sym_RBRACE,
    ACTIONS(155), 1,
      sym__brace_text,
    STATE(32), 2,
      sym__brace_balanced,
      aux_sym_text_brace_balanced_repeat1,
  [626] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(117), 1,
      anon_sym_POUND,
    STATE(23), 1,
      aux_sym_value_repeat1,
    ACTIONS(157), 3,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [641] = 5,
    ACTIONS(38), 1,
      sym_comment,
    ACTIONS(98), 1,
      anon_sym_SQUOTE,
    ACTIONS(159), 1,
      anon_sym_LBRACE,
    ACTIONS(162), 1,
      sym__quote_text,
    STATE(36), 2,
      sym__quote_balanced,
      aux_sym_text_quote_balanced_repeat1,
  [658] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(167), 1,
      anon_sym_POUND,
    STATE(37), 1,
      aux_sym_value_repeat1,
    ACTIONS(165), 3,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [673] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(165), 4,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_POUND,
  [683] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(172), 1,
      anon_sym_COMMA,
    STATE(39), 1,
      aux_sym_entry_repeat1,
    ACTIONS(170), 2,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
  [697] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(175), 4,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_POUND,
  [707] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(177), 4,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_POUND,
  [717] = 1,
    ACTIONS(179), 4,
      ts_builtin_sym_end,
      sym_comment,
      aux_sym_junk_token1,
      anon_sym_AT,
  [724] = 2,
    ACTIONS(38), 1,
      sym_comment,
    ACTIONS(181), 3,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym__brace_text,
  [733] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(183), 1,
      anon_sym_RPAREN,
    ACTIONS(185), 1,
      anon_sym_COMMA,
    STATE(62), 1,
      aux_sym_entry_repeat1,
  [746] = 1,
    ACTIONS(187), 4,
      ts_builtin_sym_end,
      sym_comment,
      aux_sym_junk_token1,
      anon_sym_AT,
  [753] = 2,
    ACTIONS(38), 1,
      sym_comment,
    ACTIONS(189), 3,
      anon_sym_LBRACE,
      anon_sym_SQUOTE,
      sym__quote_text,
  [762] = 2,
    ACTIONS(38), 1,
      sym_comment,
    ACTIONS(191), 3,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym__paren_text,
  [771] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(183), 1,
      anon_sym_RBRACE,
    ACTIONS(193), 1,
      anon_sym_COMMA,
    STATE(60), 1,
      aux_sym_entry_repeat1,
  [784] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(195), 3,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [793] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(170), 3,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [802] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(197), 1,
      anon_sym_RBRACE,
    ACTIONS(199), 1,
      sym_identifier,
    STATE(50), 1,
      sym_field,
  [815] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(197), 1,
      anon_sym_RPAREN,
    ACTIONS(199), 1,
      sym_identifier,
    STATE(50), 1,
      sym_field,
  [828] = 1,
    ACTIONS(201), 4,
      ts_builtin_sym_end,
      sym_comment,
      aux_sym_junk_token1,
      anon_sym_AT,
  [835] = 1,
    ACTIONS(203), 4,
      ts_builtin_sym_end,
      sym_comment,
      aux_sym_junk_token1,
      anon_sym_AT,
  [842] = 1,
    ACTIONS(205), 4,
      ts_builtin_sym_end,
      sym_comment,
      aux_sym_junk_token1,
      anon_sym_AT,
  [849] = 2,
    ACTIONS(38), 1,
      sym_comment,
    ACTIONS(189), 3,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
      sym__quote_text,
  [858] = 1,
    ACTIONS(50), 4,
      ts_builtin_sym_end,
      sym_comment,
      aux_sym_junk_token1,
      anon_sym_AT,
  [865] = 1,
    ACTIONS(207), 4,
      ts_builtin_sym_end,
      sym_comment,
      aux_sym_junk_token1,
      anon_sym_AT,
  [872] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(199), 1,
      sym_identifier,
    ACTIONS(209), 1,
      anon_sym_RBRACE,
    STATE(50), 1,
      sym_field,
  [885] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(209), 1,
      anon_sym_RBRACE,
    ACTIONS(211), 1,
      anon_sym_COMMA,
    STATE(39), 1,
      aux_sym_entry_repeat1,
  [898] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(199), 1,
      sym_identifier,
    ACTIONS(209), 1,
      anon_sym_RPAREN,
    STATE(50), 1,
      sym_field,
  [911] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(209), 1,
      anon_sym_RPAREN,
    ACTIONS(213), 1,
      anon_sym_COMMA,
    STATE(39), 1,
      aux_sym_entry_repeat1,
  [924] = 2,
    ACTIONS(38), 1,
      sym_comment,
    ACTIONS(215), 3,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym__brace_text,
  [933] = 2,
    ACTIONS(38), 1,
      sym_comment,
    ACTIONS(217), 3,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym__paren_text,
  [942] = 1,
    ACTIONS(219), 4,
      ts_builtin_sym_end,
      sym_comment,
      aux_sym_junk_token1,
      anon_sym_AT,
  [949] = 2,
    ACTIONS(38), 1,
      sym_comment,
    ACTIONS(221), 3,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
      sym__quote_text,
  [958] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(223), 3,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [967] = 1,
    ACTIONS(225), 4,
      ts_builtin_sym_end,
      sym_comment,
      aux_sym_junk_token1,
      anon_sym_AT,
  [974] = 1,
    ACTIONS(227), 4,
      ts_builtin_sym_end,
      sym_comment,
      aux_sym_junk_token1,
      anon_sym_AT,
  [981] = 2,
    ACTIONS(38), 1,
      sym_comment,
    ACTIONS(221), 3,
      anon_sym_LBRACE,
      anon_sym_SQUOTE,
      sym__quote_text,
  [990] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(229), 1,
      aux_sym_key_token1,
    STATE(48), 1,
      sym_key,
  [1000] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(229), 1,
      aux_sym_key_token1,
    STATE(44), 1,
      sym_key,
  [1010] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(231), 1,
      anon_sym_LBRACE,
    ACTIONS(233), 1,
      anon_sym_LPAREN,
  [1020] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(235), 1,
      anon_sym_LBRACE,
    ACTIONS(237), 1,
      anon_sym_LPAREN,
  [1030] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(239), 1,
      anon_sym_LBRACE,
    ACTIONS(241), 1,
      anon_sym_LPAREN,
  [1040] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(243), 2,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
  [1048] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(245), 1,
      anon_sym_LBRACE,
    ACTIONS(247), 1,
      anon_sym_LPAREN,
  [1058] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(249), 1,
      anon_sym_RBRACE,
    ACTIONS(251), 1,
      sym_identifier,
  [1068] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(249), 1,
      anon_sym_RPAREN,
    ACTIONS(253), 1,
      sym_identifier,
  [1078] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(199), 1,
      sym_identifier,
    STATE(50), 1,
      sym_field,
  [1088] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(255), 1,
      anon_sym_EQ,
  [1095] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(257), 1,
      anon_sym_EQ,
  [1102] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(259), 1,
      anon_sym_RPAREN,
  [1109] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(259), 1,
      anon_sym_RBRACE,
  [1116] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(261), 1,
      anon_sym_RBRACE,
  [1123] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(263), 1,
      anon_sym_EQ,
  [1130] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(265), 1,
      anon_sym_RBRACE,
  [1137] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(265), 1,
      anon_sym_RPAREN,
  [1144] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(267), 1,
      ts_builtin_sym_end,
  [1151] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(269), 1,
      anon_sym_DQUOTE,
  [1158] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(269), 1,
      anon_sym_SQUOTE,
  [1165] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(269), 1,
      anon_sym_RBRACE,
  [1172] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(261), 1,
      anon_sym_RPAREN,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 22,
  [SMALL_STATE(4)] = 44,
  [SMALL_STATE(5)] = 68,
  [SMALL_STATE(6)] = 92,
  [SMALL_STATE(7)] = 116,
  [SMALL_STATE(8)] = 140,
  [SMALL_STATE(9)] = 164,
  [SMALL_STATE(10)] = 185,
  [SMALL_STATE(11)] = 205,
  [SMALL_STATE(12)] = 225,
  [SMALL_STATE(13)] = 243,
  [SMALL_STATE(14)] = 261,
  [SMALL_STATE(15)] = 281,
  [SMALL_STATE(16)] = 301,
  [SMALL_STATE(17)] = 321,
  [SMALL_STATE(18)] = 337,
  [SMALL_STATE(19)] = 356,
  [SMALL_STATE(20)] = 373,
  [SMALL_STATE(21)] = 390,
  [SMALL_STATE(22)] = 407,
  [SMALL_STATE(23)] = 424,
  [SMALL_STATE(24)] = 439,
  [SMALL_STATE(25)] = 456,
  [SMALL_STATE(26)] = 473,
  [SMALL_STATE(27)] = 490,
  [SMALL_STATE(28)] = 507,
  [SMALL_STATE(29)] = 524,
  [SMALL_STATE(30)] = 541,
  [SMALL_STATE(31)] = 558,
  [SMALL_STATE(32)] = 575,
  [SMALL_STATE(33)] = 592,
  [SMALL_STATE(34)] = 609,
  [SMALL_STATE(35)] = 626,
  [SMALL_STATE(36)] = 641,
  [SMALL_STATE(37)] = 658,
  [SMALL_STATE(38)] = 673,
  [SMALL_STATE(39)] = 683,
  [SMALL_STATE(40)] = 697,
  [SMALL_STATE(41)] = 707,
  [SMALL_STATE(42)] = 717,
  [SMALL_STATE(43)] = 724,
  [SMALL_STATE(44)] = 733,
  [SMALL_STATE(45)] = 746,
  [SMALL_STATE(46)] = 753,
  [SMALL_STATE(47)] = 762,
  [SMALL_STATE(48)] = 771,
  [SMALL_STATE(49)] = 784,
  [SMALL_STATE(50)] = 793,
  [SMALL_STATE(51)] = 802,
  [SMALL_STATE(52)] = 815,
  [SMALL_STATE(53)] = 828,
  [SMALL_STATE(54)] = 835,
  [SMALL_STATE(55)] = 842,
  [SMALL_STATE(56)] = 849,
  [SMALL_STATE(57)] = 858,
  [SMALL_STATE(58)] = 865,
  [SMALL_STATE(59)] = 872,
  [SMALL_STATE(60)] = 885,
  [SMALL_STATE(61)] = 898,
  [SMALL_STATE(62)] = 911,
  [SMALL_STATE(63)] = 924,
  [SMALL_STATE(64)] = 933,
  [SMALL_STATE(65)] = 942,
  [SMALL_STATE(66)] = 949,
  [SMALL_STATE(67)] = 958,
  [SMALL_STATE(68)] = 967,
  [SMALL_STATE(69)] = 974,
  [SMALL_STATE(70)] = 981,
  [SMALL_STATE(71)] = 990,
  [SMALL_STATE(72)] = 1000,
  [SMALL_STATE(73)] = 1010,
  [SMALL_STATE(74)] = 1020,
  [SMALL_STATE(75)] = 1030,
  [SMALL_STATE(76)] = 1040,
  [SMALL_STATE(77)] = 1048,
  [SMALL_STATE(78)] = 1058,
  [SMALL_STATE(79)] = 1068,
  [SMALL_STATE(80)] = 1078,
  [SMALL_STATE(81)] = 1088,
  [SMALL_STATE(82)] = 1095,
  [SMALL_STATE(83)] = 1102,
  [SMALL_STATE(84)] = 1109,
  [SMALL_STATE(85)] = 1116,
  [SMALL_STATE(86)] = 1123,
  [SMALL_STATE(87)] = 1130,
  [SMALL_STATE(88)] = 1137,
  [SMALL_STATE(89)] = 1144,
  [SMALL_STATE(90)] = 1151,
  [SMALL_STATE(91)] = 1158,
  [SMALL_STATE(92)] = 1165,
  [SMALL_STATE(93)] = 1172,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2),
  [19] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(3),
  [22] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(13),
  [25] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(18),
  [28] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [30] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [32] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [34] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [36] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [38] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [40] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [42] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [44] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [46] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [48] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_junk, 2),
  [52] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_junk, 2),
  [54] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [56] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_junk, 1),
  [60] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_junk, 1),
  [62] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [64] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [66] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [68] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [70] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [72] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [74] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_junk_repeat1, 2),
  [78] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_junk_repeat1, 2),
  [80] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_junk_repeat1, 2), SHIFT_REPEAT(17),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [87] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [89] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [91] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [93] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [95] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_text_quote_balanced_repeat1, 2), SHIFT_REPEAT(19),
  [98] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_text_quote_balanced_repeat1, 2),
  [100] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_text_quote_balanced_repeat1, 2), SHIFT_REPEAT(20),
  [103] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [105] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [107] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_text_brace_balanced_repeat1, 2), SHIFT_REPEAT(24),
  [110] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_text_brace_balanced_repeat1, 2),
  [112] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_text_brace_balanced_repeat1, 2), SHIFT_REPEAT(22),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 2),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [119] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [121] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [123] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [125] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_text_quote_balanced, 1),
  [127] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [129] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_text_brace_balanced, 1),
  [131] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [133] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [135] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [137] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_text_paren_balanced, 1),
  [139] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [141] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [143] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [145] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_text_paren_balanced_repeat1, 2), SHIFT_REPEAT(28),
  [148] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_text_paren_balanced_repeat1, 2),
  [150] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_text_paren_balanced_repeat1, 2), SHIFT_REPEAT(33),
  [153] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [155] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 1),
  [159] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_text_quote_balanced_repeat1, 2), SHIFT_REPEAT(34),
  [162] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_text_quote_balanced_repeat1, 2), SHIFT_REPEAT(36),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_value_repeat1, 2),
  [167] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_value_repeat1, 2), SHIFT_REPEAT(9),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_entry_repeat1, 2),
  [172] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_entry_repeat1, 2), SHIFT_REPEAT(80),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3, .production_id = 1),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment_command, 4),
  [181] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__brace_balanced, 2),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment_command, 5),
  [189] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__quote_balanced, 3),
  [191] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__paren_balanced, 2),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key, 1),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_command, 4),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_command, 7),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_preamble_command, 5),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entry, 5),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [215] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__brace_balanced, 3),
  [217] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__paren_balanced, 3),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entry, 7),
  [221] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__quote_balanced, 2),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 3),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entry, 6),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_junk, 3),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_name, 1),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [267] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_biber(void) {
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
