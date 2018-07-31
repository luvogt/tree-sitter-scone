#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 8
#define STATE_COUNT 278
#define SYMBOL_COUNT 167
#define ALIAS_COUNT 0
#define TOKEN_COUNT 75
#define EXTERNAL_TOKEN_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 0

enum {
  anon_sym_Feature_COLON = 1,
  sym_title = 2,
  aux_sym_SLASH_BSLASHS_SLASH = 3,
  anon_sym_Background_COLON = 4,
  sym_tag = 5,
  anon_sym_Language = 6,
  anon_sym_PERCENTOWL = 7,
  anon_sym_PERCENTCommonLogic = 8,
  anon_sym_Test = 9,
  anon_sym_theontology = 10,
  anon_sym_Scenario_COLON = 11,
  anon_sym_scenario = 12,
  anon_sym_infer = 13,
  anon_sym_isenumeratedas = 14,
  anon_sym_a = 15,
  anon_sym_of = 16,
  anon_sym_isasubclassof = 17,
  anon_sym_every = 18,
  sym_disjoint = 19,
  anon_sym_no = 20,
  anon_sym_are = 21,
  anon_sym_arent = 22,
  anon_sym_aren_SQUOTEt = 23,
  anon_sym_arenot = 24,
  anon_sym_isthesameas = 25,
  anon_sym_isn_SQUOTEtthesameas = 26,
  sym_different_KW = 27,
  aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_SLASH = 28,
  aux_sym_SLASH_DQUOTE_LBRACK_CARET_DQUOTE_RBRACK_SLASH = 29,
  aux_sym_SLASH_DQUOTE_DQUOTE_LBRACK_CARET_DQUOTE_RBRACK_SLASH = 30,
  sym_delimiter = 31,
  anon_sym_than = 32,
  anon_sym_to = 33,
  anon_sym_on = 34,
  anon_sym_in = 35,
  sym_qname = 36,
  sym_uriref = 37,
  anon_sym_And = 38,
  anon_sym_Given = 39,
  anon_sym_Then = 40,
  anon_sym_consistent = 41,
  anon_sym_inconsistent = 42,
  sym_is_defined_as = 43,
  sym_asterisk = 44,
  anon_sym_DOT = 45,
  anon_sym_that = 46,
  sym_space = 47,
  aux_sym_SLASH_LBRACK_BSLASHr_BSLASHn_RBRACK_SLASH = 48,
  anon_sym_and = 49,
  anon_sym_neither = 50,
  anon_sym_nor = 51,
  anon_sym_or = 52,
  anon_sym_COMMA = 53,
  anon_sym_the = 54,
  anon_sym_an = 55,
  anon_sym_as = 56,
  anon_sym_who = 57,
  anon_sym_which = 58,
  anon_sym_some = 59,
  anon_sym_only = 60,
  anon_sym_does = 61,
  anon_sym_has = 62,
  anon_sym_is = 63,
  anon_sym_not = 64,
  anon_sym_doesnt = 65,
  anon_sym_doesn_SQUOTEt = 66,
  anon_sym_doesnot = 67,
  anon_sym_hasnt = 68,
  anon_sym_hasn_SQUOTEt = 69,
  anon_sym_hasnot = 70,
  anon_sym_isnt = 71,
  anon_sym_isn_SQUOTEt = 72,
  anon_sym_isnot = 73,
  anon_sym_don_SQUOTEt = 74,
  sym_source_file = 75,
  sym_feature = 76,
  sym_narrative = 77,
  sym_background = 78,
  sym_language_setting = 79,
  sym_language_ID = 80,
  sym_import = 81,
  sym_scenario = 82,
  sym_scenario_head = 83,
  sym_scenario_body = 84,
  sym_assumption = 85,
  sym_test = 86,
  sym_inference_test = 87,
  sym_consistency_test = 88,
  sym_infer = 89,
  sym_sentence = 90,
  sym_infer_sentence = 91,
  sym_definition = 92,
  sym_is_enumerated_as = 93,
  sym_proposition = 94,
  sym_universal = 95,
  sym_universal_positive = 96,
  sym_a = 97,
  sym_is_a_subclass_of = 98,
  sym_every = 99,
  sym_universal_negative = 100,
  sym_no = 101,
  sym_qname_list = 102,
  sym_particular = 103,
  sym_are = 104,
  sym_arenot1 = 105,
  sym_fact = 106,
  sym_instance = 107,
  sym_relation = 108,
  sym_equation = 109,
  sym_the_same_as = 110,
  sym_different = 111,
  sym_source = 112,
  sym_source_body = 113,
  sym_class_expression = 114,
  sym_pos_class = 115,
  sym_class_atom = 116,
  sym_conjunction = 117,
  sym_disjunction = 118,
  sym_qualified_class = 119,
  sym_qualifier = 120,
  sym_quantifier = 121,
  sym_predicate_phrase = 122,
  sym_predicate_open = 123,
  sym_predicate_end = 124,
  sym_class_name = 125,
  sym_predicate_name = 126,
  sym_predicate_fragement = 127,
  sym_indiv_name = 128,
  sym_And = 129,
  sym_Given = 130,
  sym_Then = 131,
  sym_consistency = 132,
  sym_eol = 133,
  sym_and = 134,
  sym_neither = 135,
  sym_nor = 136,
  sym_or = 137,
  sym_comma = 138,
  sym_the = 139,
  sym_an = 140,
  sym_as = 141,
  sym_pronoun = 142,
  sym_some = 143,
  sym_only = 144,
  sym_does = 145,
  sym_has = 146,
  sym_is = 147,
  sym_not = 148,
  sym_doesnot1 = 149,
  sym_hasnot1 = 150,
  sym_isnot1 = 151,
  sym_dot = 152,
  sym_that = 153,
  sym_donot = 154,
  aux_sym_source_file_repeat1 = 155,
  aux_sym_feature_repeat1 = 156,
  aux_sym_narrative_repeat1 = 157,
  aux_sym_background_repeat1 = 158,
  aux_sym_scenario_body_repeat1 = 159,
  aux_sym_definition_repeat1 = 160,
  aux_sym_qname_list_repeat1 = 161,
  aux_sym_source_body_repeat1 = 162,
  aux_sym_conjunction_repeat1 = 163,
  aux_sym_conjunction_repeat2 = 164,
  aux_sym_disjunction_repeat1 = 165,
  aux_sym_eol_repeat1 = 166,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "END",
  [anon_sym_Feature_COLON] = "Feature:",
  [sym_title] = "title",
  [aux_sym_SLASH_BSLASHS_SLASH] = "/\\S/",
  [anon_sym_Background_COLON] = "Background:",
  [sym_tag] = "tag",
  [anon_sym_Language] = "Language",
  [anon_sym_PERCENTOWL] = "%OWL",
  [anon_sym_PERCENTCommonLogic] = "%CommonLogic",
  [anon_sym_Test] = "Test",
  [anon_sym_theontology] = "the ontology",
  [anon_sym_Scenario_COLON] = "Scenario:",
  [anon_sym_scenario] = "scenario",
  [anon_sym_infer] = "infer",
  [anon_sym_isenumeratedas] = "is enumerated as",
  [anon_sym_a] = "a",
  [anon_sym_of] = "of",
  [anon_sym_isasubclassof] = "is a subclass of",
  [anon_sym_every] = "every",
  [sym_disjoint] = "disjoint",
  [anon_sym_no] = "no",
  [anon_sym_are] = "are",
  [anon_sym_arent] = "aren’t",
  [anon_sym_aren_SQUOTEt] = "aren't",
  [anon_sym_arenot] = "are not",
  [anon_sym_isthesameas] = "is the same as",
  [anon_sym_isn_SQUOTEtthesameas] = "isn't the same as",
  [sym_different_KW] = "different_KW",
  [aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_SLASH] = "/[^\"]/",
  [aux_sym_SLASH_DQUOTE_LBRACK_CARET_DQUOTE_RBRACK_SLASH] = "/\"[^\"]/",
  [aux_sym_SLASH_DQUOTE_DQUOTE_LBRACK_CARET_DQUOTE_RBRACK_SLASH] = "/\"\"[^\"]/",
  [sym_delimiter] = "delimiter",
  [anon_sym_than] = "than",
  [anon_sym_to] = "to",
  [anon_sym_on] = "on",
  [anon_sym_in] = "in",
  [sym_qname] = "qname",
  [sym_uriref] = "uriref",
  [anon_sym_And] = "And",
  [anon_sym_Given] = "Given",
  [anon_sym_Then] = "Then",
  [anon_sym_consistent] = "consistent",
  [anon_sym_inconsistent] = "inconsistent",
  [sym_is_defined_as] = "is_defined_as",
  [sym_asterisk] = "asterisk",
  [anon_sym_DOT] = ".",
  [anon_sym_that] = "that",
  [sym_space] = "space",
  [aux_sym_SLASH_LBRACK_BSLASHr_BSLASHn_RBRACK_SLASH] = "/[\\r\\n]/",
  [anon_sym_and] = "and",
  [anon_sym_neither] = "neither",
  [anon_sym_nor] = "nor",
  [anon_sym_or] = "or",
  [anon_sym_COMMA] = ",",
  [anon_sym_the] = "the",
  [anon_sym_an] = "an",
  [anon_sym_as] = "as",
  [anon_sym_who] = "who",
  [anon_sym_which] = "which",
  [anon_sym_some] = "some",
  [anon_sym_only] = "only",
  [anon_sym_does] = "does",
  [anon_sym_has] = "has",
  [anon_sym_is] = "is",
  [anon_sym_not] = "not",
  [anon_sym_doesnt] = "doesn’t",
  [anon_sym_doesn_SQUOTEt] = "doesn't",
  [anon_sym_doesnot] = "does not",
  [anon_sym_hasnt] = "hasn’t",
  [anon_sym_hasn_SQUOTEt] = "hasn't",
  [anon_sym_hasnot] = "has not",
  [anon_sym_isnt] = "isn’t",
  [anon_sym_isn_SQUOTEt] = "isn't",
  [anon_sym_isnot] = "is not",
  [anon_sym_don_SQUOTEt] = "don't",
  [sym_source_file] = "source_file",
  [sym_feature] = "feature",
  [sym_narrative] = "narrative",
  [sym_background] = "background",
  [sym_language_setting] = "language_setting",
  [sym_language_ID] = "language_ID",
  [sym_import] = "import",
  [sym_scenario] = "scenario",
  [sym_scenario_head] = "scenario_head",
  [sym_scenario_body] = "scenario_body",
  [sym_assumption] = "assumption",
  [sym_test] = "test",
  [sym_inference_test] = "inference_test",
  [sym_consistency_test] = "consistency_test",
  [sym_infer] = "infer",
  [sym_sentence] = "sentence",
  [sym_infer_sentence] = "infer_sentence",
  [sym_definition] = "definition",
  [sym_is_enumerated_as] = "is_enumerated_as",
  [sym_proposition] = "proposition",
  [sym_universal] = "universal",
  [sym_universal_positive] = "universal_positive",
  [sym_a] = "a",
  [sym_is_a_subclass_of] = "is_a_subclass_of",
  [sym_every] = "every",
  [sym_universal_negative] = "universal_negative",
  [sym_no] = "no",
  [sym_qname_list] = "qname_list",
  [sym_particular] = "particular",
  [sym_are] = "are",
  [sym_arenot1] = "arenot",
  [sym_fact] = "fact",
  [sym_instance] = "instance",
  [sym_relation] = "relation",
  [sym_equation] = "equation",
  [sym_the_same_as] = "the_same_as",
  [sym_different] = "different",
  [sym_source] = "source",
  [sym_source_body] = "source_body",
  [sym_class_expression] = "class_expression",
  [sym_pos_class] = "pos_class",
  [sym_class_atom] = "class_atom",
  [sym_conjunction] = "conjunction",
  [sym_disjunction] = "disjunction",
  [sym_qualified_class] = "qualified_class",
  [sym_qualifier] = "qualifier",
  [sym_quantifier] = "quantifier",
  [sym_predicate_phrase] = "predicate_phrase",
  [sym_predicate_open] = "predicate_open",
  [sym_predicate_end] = "predicate_end",
  [sym_class_name] = "class_name",
  [sym_predicate_name] = "predicate_name",
  [sym_predicate_fragement] = "predicate_fragement",
  [sym_indiv_name] = "indiv_name",
  [sym_And] = "And",
  [sym_Given] = "Given",
  [sym_Then] = "Then",
  [sym_consistency] = "consistency",
  [sym_eol] = "eol",
  [sym_and] = "and",
  [sym_neither] = "neither",
  [sym_nor] = "nor",
  [sym_or] = "or",
  [sym_comma] = "comma",
  [sym_the] = "the",
  [sym_an] = "an",
  [sym_as] = "as",
  [sym_pronoun] = "pronoun",
  [sym_some] = "some",
  [sym_only] = "only",
  [sym_does] = "does",
  [sym_has] = "has",
  [sym_is] = "is",
  [sym_not] = "not",
  [sym_doesnot1] = "doesnot",
  [sym_hasnot1] = "hasnot",
  [sym_isnot1] = "isnot",
  [sym_dot] = "dot",
  [sym_that] = "that",
  [sym_donot] = "donot",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_feature_repeat1] = "feature_repeat1",
  [aux_sym_narrative_repeat1] = "narrative_repeat1",
  [aux_sym_background_repeat1] = "background_repeat1",
  [aux_sym_scenario_body_repeat1] = "scenario_body_repeat1",
  [aux_sym_definition_repeat1] = "definition_repeat1",
  [aux_sym_qname_list_repeat1] = "qname_list_repeat1",
  [aux_sym_source_body_repeat1] = "source_body_repeat1",
  [aux_sym_conjunction_repeat1] = "conjunction_repeat1",
  [aux_sym_conjunction_repeat2] = "conjunction_repeat2",
  [aux_sym_disjunction_repeat1] = "disjunction_repeat1",
  [aux_sym_eol_repeat1] = "eol_repeat1",
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_Feature_COLON] = {
    .visible = true,
    .named = false,
  },
  [sym_title] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_SLASH_BSLASHS_SLASH] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_Background_COLON] = {
    .visible = true,
    .named = false,
  },
  [sym_tag] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_Language] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENTOWL] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENTCommonLogic] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Test] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_theontology] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Scenario_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_scenario] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_infer] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_isenumeratedas] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_a] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_of] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_isasubclassof] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_every] = {
    .visible = true,
    .named = false,
  },
  [sym_disjoint] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_no] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_are] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_arent] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_aren_SQUOTEt] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_arenot] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_isthesameas] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_isn_SQUOTEtthesameas] = {
    .visible = true,
    .named = false,
  },
  [sym_different_KW] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_SLASH] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_SLASH_DQUOTE_LBRACK_CARET_DQUOTE_RBRACK_SLASH] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_SLASH_DQUOTE_DQUOTE_LBRACK_CARET_DQUOTE_RBRACK_SLASH] = {
    .visible = false,
    .named = false,
  },
  [sym_delimiter] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_than] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_to] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_on] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_in] = {
    .visible = true,
    .named = false,
  },
  [sym_qname] = {
    .visible = true,
    .named = true,
  },
  [sym_uriref] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_And] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Given] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Then] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_consistent] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_inconsistent] = {
    .visible = true,
    .named = false,
  },
  [sym_is_defined_as] = {
    .visible = true,
    .named = true,
  },
  [sym_asterisk] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_that] = {
    .visible = true,
    .named = false,
  },
  [sym_space] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_SLASH_LBRACK_BSLASHr_BSLASHn_RBRACK_SLASH] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_and] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_neither] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_nor] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_or] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_the] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_an] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_as] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_who] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_which] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_some] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_only] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_does] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_has] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_is] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_not] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_doesnt] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_doesn_SQUOTEt] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_doesnot] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_hasnt] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_hasn_SQUOTEt] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_hasnot] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_isnt] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_isn_SQUOTEt] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_isnot] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_don_SQUOTEt] = {
    .visible = true,
    .named = false,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_feature] = {
    .visible = true,
    .named = true,
  },
  [sym_narrative] = {
    .visible = true,
    .named = true,
  },
  [sym_background] = {
    .visible = true,
    .named = true,
  },
  [sym_language_setting] = {
    .visible = true,
    .named = true,
  },
  [sym_language_ID] = {
    .visible = true,
    .named = true,
  },
  [sym_import] = {
    .visible = true,
    .named = true,
  },
  [sym_scenario] = {
    .visible = true,
    .named = true,
  },
  [sym_scenario_head] = {
    .visible = true,
    .named = true,
  },
  [sym_scenario_body] = {
    .visible = true,
    .named = true,
  },
  [sym_assumption] = {
    .visible = true,
    .named = true,
  },
  [sym_test] = {
    .visible = true,
    .named = true,
  },
  [sym_inference_test] = {
    .visible = true,
    .named = true,
  },
  [sym_consistency_test] = {
    .visible = true,
    .named = true,
  },
  [sym_infer] = {
    .visible = true,
    .named = true,
  },
  [sym_sentence] = {
    .visible = true,
    .named = true,
  },
  [sym_infer_sentence] = {
    .visible = true,
    .named = true,
  },
  [sym_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_is_enumerated_as] = {
    .visible = true,
    .named = true,
  },
  [sym_proposition] = {
    .visible = true,
    .named = true,
  },
  [sym_universal] = {
    .visible = true,
    .named = true,
  },
  [sym_universal_positive] = {
    .visible = true,
    .named = true,
  },
  [sym_a] = {
    .visible = true,
    .named = true,
  },
  [sym_is_a_subclass_of] = {
    .visible = true,
    .named = true,
  },
  [sym_every] = {
    .visible = true,
    .named = true,
  },
  [sym_universal_negative] = {
    .visible = true,
    .named = true,
  },
  [sym_no] = {
    .visible = true,
    .named = true,
  },
  [sym_qname_list] = {
    .visible = true,
    .named = true,
  },
  [sym_particular] = {
    .visible = true,
    .named = true,
  },
  [sym_are] = {
    .visible = true,
    .named = true,
  },
  [sym_arenot1] = {
    .visible = true,
    .named = true,
  },
  [sym_fact] = {
    .visible = true,
    .named = true,
  },
  [sym_instance] = {
    .visible = true,
    .named = true,
  },
  [sym_relation] = {
    .visible = true,
    .named = true,
  },
  [sym_equation] = {
    .visible = true,
    .named = true,
  },
  [sym_the_same_as] = {
    .visible = true,
    .named = true,
  },
  [sym_different] = {
    .visible = true,
    .named = true,
  },
  [sym_source] = {
    .visible = true,
    .named = true,
  },
  [sym_source_body] = {
    .visible = true,
    .named = true,
  },
  [sym_class_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_pos_class] = {
    .visible = true,
    .named = true,
  },
  [sym_class_atom] = {
    .visible = true,
    .named = true,
  },
  [sym_conjunction] = {
    .visible = true,
    .named = true,
  },
  [sym_disjunction] = {
    .visible = true,
    .named = true,
  },
  [sym_qualified_class] = {
    .visible = true,
    .named = true,
  },
  [sym_qualifier] = {
    .visible = true,
    .named = true,
  },
  [sym_quantifier] = {
    .visible = true,
    .named = true,
  },
  [sym_predicate_phrase] = {
    .visible = true,
    .named = true,
  },
  [sym_predicate_open] = {
    .visible = true,
    .named = true,
  },
  [sym_predicate_end] = {
    .visible = true,
    .named = true,
  },
  [sym_class_name] = {
    .visible = true,
    .named = true,
  },
  [sym_predicate_name] = {
    .visible = true,
    .named = true,
  },
  [sym_predicate_fragement] = {
    .visible = true,
    .named = true,
  },
  [sym_indiv_name] = {
    .visible = true,
    .named = true,
  },
  [sym_And] = {
    .visible = true,
    .named = true,
  },
  [sym_Given] = {
    .visible = true,
    .named = true,
  },
  [sym_Then] = {
    .visible = true,
    .named = true,
  },
  [sym_consistency] = {
    .visible = true,
    .named = true,
  },
  [sym_eol] = {
    .visible = true,
    .named = true,
  },
  [sym_and] = {
    .visible = true,
    .named = true,
  },
  [sym_neither] = {
    .visible = true,
    .named = true,
  },
  [sym_nor] = {
    .visible = true,
    .named = true,
  },
  [sym_or] = {
    .visible = true,
    .named = true,
  },
  [sym_comma] = {
    .visible = true,
    .named = true,
  },
  [sym_the] = {
    .visible = true,
    .named = true,
  },
  [sym_an] = {
    .visible = true,
    .named = true,
  },
  [sym_as] = {
    .visible = true,
    .named = true,
  },
  [sym_pronoun] = {
    .visible = true,
    .named = true,
  },
  [sym_some] = {
    .visible = true,
    .named = true,
  },
  [sym_only] = {
    .visible = true,
    .named = true,
  },
  [sym_does] = {
    .visible = true,
    .named = true,
  },
  [sym_has] = {
    .visible = true,
    .named = true,
  },
  [sym_is] = {
    .visible = true,
    .named = true,
  },
  [sym_not] = {
    .visible = true,
    .named = true,
  },
  [sym_doesnot1] = {
    .visible = true,
    .named = true,
  },
  [sym_hasnot1] = {
    .visible = true,
    .named = true,
  },
  [sym_isnot1] = {
    .visible = true,
    .named = true,
  },
  [sym_dot] = {
    .visible = true,
    .named = true,
  },
  [sym_that] = {
    .visible = true,
    .named = true,
  },
  [sym_donot] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_feature_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_narrative_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_background_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_scenario_body_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_definition_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_qname_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_source_body_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_conjunction_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_conjunction_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_disjunction_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_eol_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  switch (state) {
    case 0:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '*')
        ADVANCE(2);
      if (lookahead == ',')
        ADVANCE(3);
      if (lookahead == '.')
        ADVANCE(4);
      if (lookahead == '@')
        ADVANCE(5);
      if (lookahead == 'A')
        ADVANCE(7);
      if (lookahead == 'B')
        ADVANCE(10);
      if (lookahead == 'G')
        ADVANCE(21);
      if (lookahead == 'S')
        ADVANCE(26);
      if (lookahead == 'T')
        ADVANCE(35);
      if (lookahead == 'a')
        ADVANCE(39);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(0);
      ADVANCE(40);
      END_STATE();
    case 1:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 2:
      ACCEPT_TOKEN(sym_asterisk);
      END_STATE();
    case 3:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHS_SLASH);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(6);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(sym_tag);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(6);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHS_SLASH);
      if (lookahead == 'n')
        ADVANCE(8);
      END_STATE();
    case 8:
      if (lookahead == 'd')
        ADVANCE(9);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_And);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHS_SLASH);
      if (lookahead == 'a')
        ADVANCE(11);
      END_STATE();
    case 11:
      if (lookahead == 'c')
        ADVANCE(12);
      END_STATE();
    case 12:
      if (lookahead == 'k')
        ADVANCE(13);
      END_STATE();
    case 13:
      if (lookahead == 'g')
        ADVANCE(14);
      END_STATE();
    case 14:
      if (lookahead == 'r')
        ADVANCE(15);
      END_STATE();
    case 15:
      if (lookahead == 'o')
        ADVANCE(16);
      END_STATE();
    case 16:
      if (lookahead == 'u')
        ADVANCE(17);
      END_STATE();
    case 17:
      if (lookahead == 'n')
        ADVANCE(18);
      END_STATE();
    case 18:
      if (lookahead == 'd')
        ADVANCE(19);
      END_STATE();
    case 19:
      if (lookahead == ':')
        ADVANCE(20);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_Background_COLON);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHS_SLASH);
      if (lookahead == 'i')
        ADVANCE(22);
      END_STATE();
    case 22:
      if (lookahead == 'v')
        ADVANCE(23);
      END_STATE();
    case 23:
      if (lookahead == 'e')
        ADVANCE(24);
      END_STATE();
    case 24:
      if (lookahead == 'n')
        ADVANCE(25);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_Given);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHS_SLASH);
      if (lookahead == 'c')
        ADVANCE(27);
      END_STATE();
    case 27:
      if (lookahead == 'e')
        ADVANCE(28);
      END_STATE();
    case 28:
      if (lookahead == 'n')
        ADVANCE(29);
      END_STATE();
    case 29:
      if (lookahead == 'a')
        ADVANCE(30);
      END_STATE();
    case 30:
      if (lookahead == 'r')
        ADVANCE(31);
      END_STATE();
    case 31:
      if (lookahead == 'i')
        ADVANCE(32);
      END_STATE();
    case 32:
      if (lookahead == 'o')
        ADVANCE(33);
      END_STATE();
    case 33:
      if (lookahead == ':')
        ADVANCE(34);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_Scenario_COLON);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHS_SLASH);
      if (lookahead == 'h')
        ADVANCE(36);
      END_STATE();
    case 36:
      if (lookahead == 'e')
        ADVANCE(37);
      END_STATE();
    case 37:
      if (lookahead == 'n')
        ADVANCE(38);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_Then);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_a);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHS_SLASH);
      END_STATE();
    case 41:
      if (lookahead == '@')
        ADVANCE(42);
      if (lookahead == 'F')
        ADVANCE(43);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(41);
      END_STATE();
    case 42:
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(6);
      END_STATE();
    case 43:
      if (lookahead == 'e')
        ADVANCE(44);
      END_STATE();
    case 44:
      if (lookahead == 'a')
        ADVANCE(45);
      END_STATE();
    case 45:
      if (lookahead == 't')
        ADVANCE(46);
      END_STATE();
    case 46:
      if (lookahead == 'u')
        ADVANCE(47);
      END_STATE();
    case 47:
      if (lookahead == 'r')
        ADVANCE(48);
      END_STATE();
    case 48:
      if (lookahead == 'e')
        ADVANCE(49);
      END_STATE();
    case 49:
      if (lookahead == ':')
        ADVANCE(50);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_Feature_COLON);
      END_STATE();
    case 51:
      if (lookahead == '\n')
        SKIP(51);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(52);
      if (lookahead != 0)
        ADVANCE(53);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_title);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(52);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n')
        ADVANCE(53);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_title);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(53);
      END_STATE();
    case 54:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(54);
      END_STATE();
    case 55:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '@')
        ADVANCE(42);
      if (lookahead == 'B')
        ADVANCE(56);
      if (lookahead == 'S')
        ADVANCE(57);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(55);
      END_STATE();
    case 56:
      if (lookahead == 'a')
        ADVANCE(11);
      END_STATE();
    case 57:
      if (lookahead == 'c')
        ADVANCE(27);
      END_STATE();
    case 58:
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(58);
      if (lookahead == '\n' ||
          lookahead == '\r')
        ADVANCE(59);
      if (lookahead != 0)
        ADVANCE(40);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_BSLASHr_BSLASHn_RBRACK_SLASH);
      END_STATE();
    case 60:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '*')
        ADVANCE(2);
      if (lookahead == '@')
        ADVANCE(42);
      if (lookahead == 'S')
        ADVANCE(57);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(60);
      END_STATE();
    case 61:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '@')
        ADVANCE(42);
      if (lookahead == 'S')
        ADVANCE(57);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(61);
      END_STATE();
    case 62:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '@')
        ADVANCE(42);
      if (lookahead == 'A')
        ADVANCE(63);
      if (lookahead == 'G')
        ADVANCE(64);
      if (lookahead == 'S')
        ADVANCE(57);
      if (lookahead == 'T')
        ADVANCE(65);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(62);
      END_STATE();
    case 63:
      if (lookahead == 'n')
        ADVANCE(8);
      END_STATE();
    case 64:
      if (lookahead == 'i')
        ADVANCE(22);
      END_STATE();
    case 65:
      if (lookahead == 'h')
        ADVANCE(36);
      END_STATE();
    case 66:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(66);
      if (lookahead != 0)
        ADVANCE(40);
      END_STATE();
    case 67:
      if (lookahead == 'L')
        ADVANCE(68);
      if (lookahead == 'T')
        ADVANCE(76);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(67);
      END_STATE();
    case 68:
      if (lookahead == 'a')
        ADVANCE(69);
      END_STATE();
    case 69:
      if (lookahead == 'n')
        ADVANCE(70);
      END_STATE();
    case 70:
      if (lookahead == 'g')
        ADVANCE(71);
      END_STATE();
    case 71:
      if (lookahead == 'u')
        ADVANCE(72);
      END_STATE();
    case 72:
      if (lookahead == 'a')
        ADVANCE(73);
      END_STATE();
    case 73:
      if (lookahead == 'g')
        ADVANCE(74);
      END_STATE();
    case 74:
      if (lookahead == 'e')
        ADVANCE(75);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_Language);
      END_STATE();
    case 76:
      if (lookahead == 'e')
        ADVANCE(77);
      END_STATE();
    case 77:
      if (lookahead == 's')
        ADVANCE(78);
      END_STATE();
    case 78:
      if (lookahead == 't')
        ADVANCE(79);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_Test);
      END_STATE();
    case 80:
      if (lookahead == ' ')
        ADVANCE(81);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r')
        SKIP(80);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_space);
      END_STATE();
    case 82:
      if (lookahead == '%')
        ADVANCE(83);
      if (lookahead == 'a')
        ADVANCE(100);
      if (lookahead == 'd')
        ADVANCE(102);
      if (lookahead == 'e')
        ADVANCE(107);
      if (lookahead == 'i')
        ADVANCE(112);
      if (lookahead == 'n')
        ADVANCE(117);
      if (lookahead == 's')
        ADVANCE(119);
      if (lookahead == 't')
        ADVANCE(123);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(82);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '>' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(95);
      if (lookahead != 0)
        ADVANCE(96);
      END_STATE();
    case 83:
      if (lookahead == 'C')
        ADVANCE(84);
      if (lookahead == 'O')
        ADVANCE(97);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '>' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(95);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(96);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_qname);
      if (lookahead == 'o')
        ADVANCE(85);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '>' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(95);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(96);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_qname);
      if (lookahead == 'm')
        ADVANCE(86);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '>' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(95);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(96);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_qname);
      if (lookahead == 'm')
        ADVANCE(87);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '>' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(95);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(96);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_qname);
      if (lookahead == 'o')
        ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '>' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(95);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(96);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_qname);
      if (lookahead == 'n')
        ADVANCE(89);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '>' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(95);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(96);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_qname);
      if (lookahead == 'L')
        ADVANCE(90);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '>' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(95);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(96);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_qname);
      if (lookahead == 'o')
        ADVANCE(91);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '>' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(95);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(96);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_qname);
      if (lookahead == 'g')
        ADVANCE(92);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '>' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(95);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(96);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_qname);
      if (lookahead == 'i')
        ADVANCE(93);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '>' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(95);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(96);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_qname);
      if (lookahead == 'c')
        ADVANCE(94);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '>' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(95);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(96);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_PERCENTCommonLogic);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '>' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(95);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(96);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_qname);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '>' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(95);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(96);
      END_STATE();
    case 96:
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '>' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(95);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(96);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_qname);
      if (lookahead == 'W')
        ADVANCE(98);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '>' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(95);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(96);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_qname);
      if (lookahead == 'L')
        ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '>' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(95);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(96);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_PERCENTOWL);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '>' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(95);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(96);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_a);
      if (lookahead == 'n')
        ADVANCE(101);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '>' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(95);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(96);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_an);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '>' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(95);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(96);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_qname);
      if (lookahead == 'o')
        ADVANCE(103);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '>' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(95);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(96);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_qname);
      if (lookahead == 'n')
        ADVANCE(104);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '>' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(95);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(96);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_qname);
      if (lookahead == '\'')
        ADVANCE(105);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '>' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(95);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(96);
      END_STATE();
    case 105:
      if (lookahead == 't')
        ADVANCE(106);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '>' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(95);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(96);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_don_SQUOTEt);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '>' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(95);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(96);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_qname);
      if (lookahead == 'v')
        ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '>' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(95);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(96);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_qname);
      if (lookahead == 'e')
        ADVANCE(109);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '>' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(95);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(96);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_qname);
      if (lookahead == 'r')
        ADVANCE(110);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '>' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(95);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(96);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_qname);
      if (lookahead == 'y')
        ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '>' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(95);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(96);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_every);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '>' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(95);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(96);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_qname);
      if (lookahead == 'n')
        ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '>' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(95);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(96);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_qname);
      if (lookahead == 'f')
        ADVANCE(114);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '>' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(95);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(96);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_qname);
      if (lookahead == 'e')
        ADVANCE(115);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '>' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(95);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(96);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_qname);
      if (lookahead == 'r')
        ADVANCE(116);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '>' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(95);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(96);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_infer);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '>' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(95);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(96);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_qname);
      if (lookahead == 'o')
        ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '>' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(95);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(96);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_no);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '>' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(95);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(96);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_qname);
      if (lookahead == 'o')
        ADVANCE(120);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '>' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(95);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(96);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_qname);
      if (lookahead == 'm')
        ADVANCE(121);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '>' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(95);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(96);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_qname);
      if (lookahead == 'e')
        ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '>' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(95);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(96);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_some);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '>' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(95);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(96);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_qname);
      if (lookahead == 'h')
        ADVANCE(124);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '>' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(95);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(96);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_qname);
      if (lookahead == 'a')
        ADVANCE(125);
      if (lookahead == 'e')
        ADVANCE(127);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '>' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(95);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(96);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_qname);
      if (lookahead == 't')
        ADVANCE(126);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '>' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(95);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(96);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_that);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '>' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(95);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(96);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_the);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '>' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(95);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(96);
      END_STATE();
    case 128:
      if (lookahead == '%')
        ADVANCE(83);
      if (lookahead == 'a')
        ADVANCE(100);
      if (lookahead == 'e')
        ADVANCE(107);
      if (lookahead == 'n')
        ADVANCE(117);
      if (lookahead == 's')
        ADVANCE(119);
      if (lookahead == 't')
        ADVANCE(129);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(128);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '>' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(95);
      if (lookahead != 0)
        ADVANCE(96);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_qname);
      if (lookahead == 'h')
        ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '>' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(95);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(96);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_qname);
      if (lookahead == 'a')
        ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '>' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(95);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(96);
      END_STATE();
    case 131:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '@')
        ADVANCE(5);
      if (lookahead == 'B')
        ADVANCE(10);
      if (lookahead == 'S')
        ADVANCE(26);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(131);
      ADVANCE(40);
      END_STATE();
    case 132:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\"')
        ADVANCE(133);
      if (lookahead == '*')
        ADVANCE(2);
      if (lookahead == '@')
        ADVANCE(42);
      if (lookahead == 'A')
        ADVANCE(63);
      if (lookahead == 'G')
        ADVANCE(64);
      if (lookahead == 'S')
        ADVANCE(57);
      if (lookahead == 'T')
        ADVANCE(65);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(132);
      END_STATE();
    case 133:
      if (lookahead == '\"')
        ADVANCE(134);
      END_STATE();
    case 134:
      if (lookahead == '\"')
        ADVANCE(135);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_delimiter);
      END_STATE();
    case 136:
      if (lookahead == 'a')
        ADVANCE(137);
      if (lookahead == 'd')
        ADVANCE(140);
      if (lookahead == 'h')
        ADVANCE(153);
      if (lookahead == 'i')
        ADVANCE(165);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(136);
      END_STATE();
    case 137:
      if (lookahead == 'n')
        ADVANCE(138);
      END_STATE();
    case 138:
      if (lookahead == 'd')
        ADVANCE(139);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_and);
      END_STATE();
    case 140:
      if (lookahead == 'o')
        ADVANCE(141);
      END_STATE();
    case 141:
      if (lookahead == 'e')
        ADVANCE(142);
      END_STATE();
    case 142:
      if (lookahead == 's')
        ADVANCE(143);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_does);
      if (lookahead == ' ')
        ADVANCE(144);
      if (lookahead == 'n')
        ADVANCE(148);
      END_STATE();
    case 144:
      if (lookahead == 'n')
        ADVANCE(145);
      END_STATE();
    case 145:
      if (lookahead == 'o')
        ADVANCE(146);
      END_STATE();
    case 146:
      if (lookahead == 't')
        ADVANCE(147);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_doesnot);
      END_STATE();
    case 148:
      if (lookahead == '\'')
        ADVANCE(149);
      if (lookahead == 8217)
        ADVANCE(151);
      END_STATE();
    case 149:
      if (lookahead == 't')
        ADVANCE(150);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_doesn_SQUOTEt);
      END_STATE();
    case 151:
      if (lookahead == 't')
        ADVANCE(152);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_doesnt);
      END_STATE();
    case 153:
      if (lookahead == 'a')
        ADVANCE(154);
      END_STATE();
    case 154:
      if (lookahead == 's')
        ADVANCE(155);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_has);
      if (lookahead == ' ')
        ADVANCE(156);
      if (lookahead == 'n')
        ADVANCE(160);
      END_STATE();
    case 156:
      if (lookahead == 'n')
        ADVANCE(157);
      END_STATE();
    case 157:
      if (lookahead == 'o')
        ADVANCE(158);
      END_STATE();
    case 158:
      if (lookahead == 't')
        ADVANCE(159);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_hasnot);
      END_STATE();
    case 160:
      if (lookahead == '\'')
        ADVANCE(161);
      if (lookahead == 8217)
        ADVANCE(163);
      END_STATE();
    case 161:
      if (lookahead == 't')
        ADVANCE(162);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_hasn_SQUOTEt);
      END_STATE();
    case 163:
      if (lookahead == 't')
        ADVANCE(164);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_hasnt);
      END_STATE();
    case 165:
      if (lookahead == 's')
        ADVANCE(166);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_is);
      if (lookahead == ' ')
        ADVANCE(167);
      if (lookahead == 'n')
        ADVANCE(219);
      END_STATE();
    case 167:
      if (lookahead == 'a')
        ADVANCE(168);
      if (lookahead == 'd')
        ADVANCE(181);
      if (lookahead == 'e')
        ADVANCE(192);
      if (lookahead == 'n')
        ADVANCE(205);
      if (lookahead == 't')
        ADVANCE(208);
      END_STATE();
    case 168:
      if (lookahead == ' ')
        ADVANCE(169);
      END_STATE();
    case 169:
      if (lookahead == 's')
        ADVANCE(170);
      END_STATE();
    case 170:
      if (lookahead == 'u')
        ADVANCE(171);
      END_STATE();
    case 171:
      if (lookahead == 'b')
        ADVANCE(172);
      END_STATE();
    case 172:
      if (lookahead == 'c')
        ADVANCE(173);
      END_STATE();
    case 173:
      if (lookahead == 'l')
        ADVANCE(174);
      END_STATE();
    case 174:
      if (lookahead == 'a')
        ADVANCE(175);
      END_STATE();
    case 175:
      if (lookahead == 's')
        ADVANCE(176);
      END_STATE();
    case 176:
      if (lookahead == 's')
        ADVANCE(177);
      END_STATE();
    case 177:
      if (lookahead == ' ')
        ADVANCE(178);
      END_STATE();
    case 178:
      if (lookahead == 'o')
        ADVANCE(179);
      END_STATE();
    case 179:
      if (lookahead == 'f')
        ADVANCE(180);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_isasubclassof);
      END_STATE();
    case 181:
      if (lookahead == 'e')
        ADVANCE(182);
      END_STATE();
    case 182:
      if (lookahead == 'f')
        ADVANCE(183);
      END_STATE();
    case 183:
      if (lookahead == 'i')
        ADVANCE(184);
      END_STATE();
    case 184:
      if (lookahead == 'n')
        ADVANCE(185);
      END_STATE();
    case 185:
      if (lookahead == 'e')
        ADVANCE(186);
      END_STATE();
    case 186:
      if (lookahead == 'd')
        ADVANCE(187);
      END_STATE();
    case 187:
      if (lookahead == ' ')
        ADVANCE(188);
      END_STATE();
    case 188:
      if (lookahead == 'a')
        ADVANCE(189);
      END_STATE();
    case 189:
      if (lookahead == 's')
        ADVANCE(190);
      END_STATE();
    case 190:
      if (lookahead == ' ')
        ADVANCE(191);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_is_defined_as);
      END_STATE();
    case 192:
      if (lookahead == 'n')
        ADVANCE(193);
      END_STATE();
    case 193:
      if (lookahead == 'u')
        ADVANCE(194);
      END_STATE();
    case 194:
      if (lookahead == 'm')
        ADVANCE(195);
      END_STATE();
    case 195:
      if (lookahead == 'e')
        ADVANCE(196);
      END_STATE();
    case 196:
      if (lookahead == 'r')
        ADVANCE(197);
      END_STATE();
    case 197:
      if (lookahead == 'a')
        ADVANCE(198);
      END_STATE();
    case 198:
      if (lookahead == 't')
        ADVANCE(199);
      END_STATE();
    case 199:
      if (lookahead == 'e')
        ADVANCE(200);
      END_STATE();
    case 200:
      if (lookahead == 'd')
        ADVANCE(201);
      END_STATE();
    case 201:
      if (lookahead == ' ')
        ADVANCE(202);
      END_STATE();
    case 202:
      if (lookahead == 'a')
        ADVANCE(203);
      END_STATE();
    case 203:
      if (lookahead == 's')
        ADVANCE(204);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(anon_sym_isenumeratedas);
      END_STATE();
    case 205:
      if (lookahead == 'o')
        ADVANCE(206);
      END_STATE();
    case 206:
      if (lookahead == 't')
        ADVANCE(207);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_isnot);
      END_STATE();
    case 208:
      if (lookahead == 'h')
        ADVANCE(209);
      END_STATE();
    case 209:
      if (lookahead == 'e')
        ADVANCE(210);
      END_STATE();
    case 210:
      if (lookahead == ' ')
        ADVANCE(211);
      END_STATE();
    case 211:
      if (lookahead == 's')
        ADVANCE(212);
      END_STATE();
    case 212:
      if (lookahead == 'a')
        ADVANCE(213);
      END_STATE();
    case 213:
      if (lookahead == 'm')
        ADVANCE(214);
      END_STATE();
    case 214:
      if (lookahead == 'e')
        ADVANCE(215);
      END_STATE();
    case 215:
      if (lookahead == ' ')
        ADVANCE(216);
      END_STATE();
    case 216:
      if (lookahead == 'a')
        ADVANCE(217);
      END_STATE();
    case 217:
      if (lookahead == 's')
        ADVANCE(218);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(anon_sym_isthesameas);
      END_STATE();
    case 219:
      if (lookahead == '\'')
        ADVANCE(220);
      if (lookahead == 8217)
        ADVANCE(234);
      END_STATE();
    case 220:
      if (lookahead == 't')
        ADVANCE(221);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(anon_sym_isn_SQUOTEt);
      if (lookahead == ' ')
        ADVANCE(222);
      END_STATE();
    case 222:
      if (lookahead == 't')
        ADVANCE(223);
      END_STATE();
    case 223:
      if (lookahead == 'h')
        ADVANCE(224);
      END_STATE();
    case 224:
      if (lookahead == 'e')
        ADVANCE(225);
      END_STATE();
    case 225:
      if (lookahead == ' ')
        ADVANCE(226);
      END_STATE();
    case 226:
      if (lookahead == 's')
        ADVANCE(227);
      END_STATE();
    case 227:
      if (lookahead == 'a')
        ADVANCE(228);
      END_STATE();
    case 228:
      if (lookahead == 'm')
        ADVANCE(229);
      END_STATE();
    case 229:
      if (lookahead == 'e')
        ADVANCE(230);
      END_STATE();
    case 230:
      if (lookahead == ' ')
        ADVANCE(231);
      END_STATE();
    case 231:
      if (lookahead == 'a')
        ADVANCE(232);
      END_STATE();
    case 232:
      if (lookahead == 's')
        ADVANCE(233);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(anon_sym_isn_SQUOTEtthesameas);
      END_STATE();
    case 234:
      if (lookahead == 't')
        ADVANCE(235);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(anon_sym_isnt);
      END_STATE();
    case 236:
      if (lookahead == '\"')
        ADVANCE(133);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(236);
      END_STATE();
    case 237:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '.')
        ADVANCE(4);
      if (lookahead == '@')
        ADVANCE(42);
      if (lookahead == 'A')
        ADVANCE(63);
      if (lookahead == 'G')
        ADVANCE(64);
      if (lookahead == 'S')
        ADVANCE(57);
      if (lookahead == 'T')
        ADVANCE(65);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(237);
      END_STATE();
    case 238:
      if (lookahead == '%')
        ADVANCE(83);
      if (lookahead == 'a')
        ADVANCE(100);
      if (lookahead == 'e')
        ADVANCE(107);
      if (lookahead == 'n')
        ADVANCE(117);
      if (lookahead == 't')
        ADVANCE(129);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(238);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '>' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(95);
      if (lookahead != 0)
        ADVANCE(96);
      END_STATE();
    case 239:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(239);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '>' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(95);
      if (lookahead != 0)
        ADVANCE(96);
      END_STATE();
    case 240:
      if (lookahead == 'a')
        ADVANCE(241);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(240);
      END_STATE();
    case 241:
      if (lookahead == 'n')
        ADVANCE(138);
      if (lookahead == 'r')
        ADVANCE(242);
      END_STATE();
    case 242:
      if (lookahead == 'e')
        ADVANCE(243);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(anon_sym_are);
      END_STATE();
    case 244:
      if (lookahead == 'd')
        ADVANCE(140);
      if (lookahead == 'h')
        ADVANCE(153);
      if (lookahead == 'i')
        ADVANCE(245);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(244);
      END_STATE();
    case 245:
      if (lookahead == 's')
        ADVANCE(246);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(anon_sym_is);
      if (lookahead == ' ')
        ADVANCE(247);
      if (lookahead == 'n')
        ADVANCE(248);
      END_STATE();
    case 247:
      if (lookahead == 'n')
        ADVANCE(205);
      END_STATE();
    case 248:
      if (lookahead == '\'')
        ADVANCE(249);
      if (lookahead == 8217)
        ADVANCE(234);
      END_STATE();
    case 249:
      if (lookahead == 't')
        ADVANCE(250);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(anon_sym_isn_SQUOTEt);
      END_STATE();
    case 251:
      if (lookahead == 's')
        ADVANCE(252);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(251);
      END_STATE();
    case 252:
      if (lookahead == 'c')
        ADVANCE(253);
      END_STATE();
    case 253:
      if (lookahead == 'e')
        ADVANCE(254);
      END_STATE();
    case 254:
      if (lookahead == 'n')
        ADVANCE(255);
      END_STATE();
    case 255:
      if (lookahead == 'a')
        ADVANCE(256);
      END_STATE();
    case 256:
      if (lookahead == 'r')
        ADVANCE(257);
      END_STATE();
    case 257:
      if (lookahead == 'i')
        ADVANCE(258);
      END_STATE();
    case 258:
      if (lookahead == 'o')
        ADVANCE(259);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(anon_sym_scenario);
      END_STATE();
    case 260:
      if (lookahead == '%')
        ADVANCE(83);
      if (lookahead == 'a')
        ADVANCE(100);
      if (lookahead == 'e')
        ADVANCE(107);
      if (lookahead == 'n')
        ADVANCE(117);
      if (lookahead == 's')
        ADVANCE(119);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(260);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '>' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(95);
      if (lookahead != 0)
        ADVANCE(96);
      END_STATE();
    case 261:
      if (lookahead == '%')
        ADVANCE(262);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(261);
      END_STATE();
    case 262:
      if (lookahead == 'C')
        ADVANCE(263);
      if (lookahead == 'O')
        ADVANCE(274);
      END_STATE();
    case 263:
      if (lookahead == 'o')
        ADVANCE(264);
      END_STATE();
    case 264:
      if (lookahead == 'm')
        ADVANCE(265);
      END_STATE();
    case 265:
      if (lookahead == 'm')
        ADVANCE(266);
      END_STATE();
    case 266:
      if (lookahead == 'o')
        ADVANCE(267);
      END_STATE();
    case 267:
      if (lookahead == 'n')
        ADVANCE(268);
      END_STATE();
    case 268:
      if (lookahead == 'L')
        ADVANCE(269);
      END_STATE();
    case 269:
      if (lookahead == 'o')
        ADVANCE(270);
      END_STATE();
    case 270:
      if (lookahead == 'g')
        ADVANCE(271);
      END_STATE();
    case 271:
      if (lookahead == 'i')
        ADVANCE(272);
      END_STATE();
    case 272:
      if (lookahead == 'c')
        ADVANCE(273);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(anon_sym_PERCENTCommonLogic);
      END_STATE();
    case 274:
      if (lookahead == 'W')
        ADVANCE(275);
      END_STATE();
    case 275:
      if (lookahead == 'L')
        ADVANCE(276);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(anon_sym_PERCENTOWL);
      END_STATE();
    case 277:
      if (lookahead == 't')
        ADVANCE(278);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(277);
      if (lookahead != 0)
        ADVANCE(290);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym_uriref);
      if (lookahead == 'h')
        ADVANCE(279);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(290);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_uriref);
      if (lookahead == 'e')
        ADVANCE(280);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(290);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym_uriref);
      if (lookahead == ' ')
        ADVANCE(281);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r')
        ADVANCE(290);
      END_STATE();
    case 281:
      if (lookahead == 'o')
        ADVANCE(282);
      END_STATE();
    case 282:
      if (lookahead == 'n')
        ADVANCE(283);
      END_STATE();
    case 283:
      if (lookahead == 't')
        ADVANCE(284);
      END_STATE();
    case 284:
      if (lookahead == 'o')
        ADVANCE(285);
      END_STATE();
    case 285:
      if (lookahead == 'l')
        ADVANCE(286);
      END_STATE();
    case 286:
      if (lookahead == 'o')
        ADVANCE(287);
      END_STATE();
    case 287:
      if (lookahead == 'g')
        ADVANCE(288);
      END_STATE();
    case 288:
      if (lookahead == 'y')
        ADVANCE(289);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(anon_sym_theontology);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym_uriref);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(290);
      END_STATE();
    case 291:
      if (lookahead == '*')
        ADVANCE(2);
      if (lookahead == 'A')
        ADVANCE(7);
      if (lookahead == 'G')
        ADVANCE(21);
      if (lookahead == 'T')
        ADVANCE(35);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(291);
      if (lookahead != 0)
        ADVANCE(40);
      END_STATE();
    case 292:
      if (lookahead == '\"')
        ADVANCE(293);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(297);
      if (lookahead != 0)
        ADVANCE(297);
      END_STATE();
    case 293:
      if (lookahead == '\"')
        ADVANCE(294);
      if (lookahead != 0)
        ADVANCE(296);
      END_STATE();
    case 294:
      if (lookahead == '\"')
        ADVANCE(135);
      if (lookahead != 0)
        ADVANCE(295);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(aux_sym_SLASH_DQUOTE_DQUOTE_LBRACK_CARET_DQUOTE_RBRACK_SLASH);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(aux_sym_SLASH_DQUOTE_LBRACK_CARET_DQUOTE_RBRACK_SLASH);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_SLASH);
      END_STATE();
    case 298:
      if (lookahead == '%')
        ADVANCE(83);
      if (lookahead == 'a')
        ADVANCE(100);
      if (lookahead == 'e')
        ADVANCE(107);
      if (lookahead == 'n')
        ADVANCE(117);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(298);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '>' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(95);
      if (lookahead != 0)
        ADVANCE(96);
      END_STATE();
    case 299:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == ',')
        ADVANCE(3);
      if (lookahead == '.')
        ADVANCE(4);
      if (lookahead == '@')
        ADVANCE(42);
      if (lookahead == 'A')
        ADVANCE(63);
      if (lookahead == 'G')
        ADVANCE(64);
      if (lookahead == 'S')
        ADVANCE(57);
      if (lookahead == 'T')
        ADVANCE(65);
      if (lookahead == 'a')
        ADVANCE(300);
      if (lookahead == 'i')
        ADVANCE(312);
      if (lookahead == 'n')
        ADVANCE(315);
      if (lookahead == 'o')
        ADVANCE(318);
      if (lookahead == 't')
        ADVANCE(320);
      if (lookahead == 'w')
        ADVANCE(324);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(299);
      END_STATE();
    case 300:
      if (lookahead == 'n')
        ADVANCE(138);
      if (lookahead == 'r')
        ADVANCE(301);
      END_STATE();
    case 301:
      if (lookahead == 'e')
        ADVANCE(302);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(anon_sym_are);
      if (lookahead == ' ')
        ADVANCE(303);
      if (lookahead == 'n')
        ADVANCE(307);
      END_STATE();
    case 303:
      if (lookahead == 'n')
        ADVANCE(304);
      END_STATE();
    case 304:
      if (lookahead == 'o')
        ADVANCE(305);
      END_STATE();
    case 305:
      if (lookahead == 't')
        ADVANCE(306);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(anon_sym_arenot);
      END_STATE();
    case 307:
      if (lookahead == '\'')
        ADVANCE(308);
      if (lookahead == 8217)
        ADVANCE(310);
      END_STATE();
    case 308:
      if (lookahead == 't')
        ADVANCE(309);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(anon_sym_aren_SQUOTEt);
      END_STATE();
    case 310:
      if (lookahead == 't')
        ADVANCE(311);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(anon_sym_arent);
      END_STATE();
    case 312:
      if (lookahead == 's')
        ADVANCE(313);
      END_STATE();
    case 313:
      if (lookahead == ' ')
        ADVANCE(314);
      END_STATE();
    case 314:
      if (lookahead == 'd')
        ADVANCE(181);
      END_STATE();
    case 315:
      if (lookahead == 'o')
        ADVANCE(316);
      END_STATE();
    case 316:
      if (lookahead == 'r')
        ADVANCE(317);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(anon_sym_nor);
      END_STATE();
    case 318:
      if (lookahead == 'r')
        ADVANCE(319);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(anon_sym_or);
      END_STATE();
    case 320:
      if (lookahead == 'h')
        ADVANCE(321);
      END_STATE();
    case 321:
      if (lookahead == 'a')
        ADVANCE(322);
      END_STATE();
    case 322:
      if (lookahead == 't')
        ADVANCE(323);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(anon_sym_that);
      END_STATE();
    case 324:
      if (lookahead == 'h')
        ADVANCE(325);
      END_STATE();
    case 325:
      if (lookahead == 'i')
        ADVANCE(326);
      if (lookahead == 'o')
        ADVANCE(329);
      END_STATE();
    case 326:
      if (lookahead == 'c')
        ADVANCE(327);
      END_STATE();
    case 327:
      if (lookahead == 'h')
        ADVANCE(328);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(anon_sym_which);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(anon_sym_who);
      END_STATE();
    case 330:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == ',')
        ADVANCE(3);
      if (lookahead == '.')
        ADVANCE(4);
      if (lookahead == '@')
        ADVANCE(42);
      if (lookahead == 'A')
        ADVANCE(63);
      if (lookahead == 'G')
        ADVANCE(64);
      if (lookahead == 'S')
        ADVANCE(57);
      if (lookahead == 'T')
        ADVANCE(65);
      if (lookahead == 'a')
        ADVANCE(137);
      if (lookahead == 'i')
        ADVANCE(312);
      if (lookahead == 'n')
        ADVANCE(315);
      if (lookahead == 'o')
        ADVANCE(318);
      if (lookahead == 't')
        ADVANCE(320);
      if (lookahead == 'w')
        ADVANCE(324);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(330);
      END_STATE();
    case 331:
      if (lookahead == 'i')
        ADVANCE(332);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(331);
      END_STATE();
    case 332:
      if (lookahead == 's')
        ADVANCE(333);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(anon_sym_is);
      END_STATE();
    case 334:
      if (lookahead == 'd')
        ADVANCE(335);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(334);
      END_STATE();
    case 335:
      if (lookahead == 'i')
        ADVANCE(336);
      END_STATE();
    case 336:
      if (lookahead == 'f')
        ADVANCE(337);
      if (lookahead == 's')
        ADVANCE(344);
      END_STATE();
    case 337:
      if (lookahead == 'f')
        ADVANCE(338);
      END_STATE();
    case 338:
      if (lookahead == 'e')
        ADVANCE(339);
      END_STATE();
    case 339:
      if (lookahead == 'r')
        ADVANCE(340);
      END_STATE();
    case 340:
      if (lookahead == 'e')
        ADVANCE(341);
      END_STATE();
    case 341:
      if (lookahead == 'n')
        ADVANCE(342);
      END_STATE();
    case 342:
      if (lookahead == 't')
        ADVANCE(343);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym_different_KW);
      END_STATE();
    case 344:
      if (lookahead == 'j')
        ADVANCE(345);
      END_STATE();
    case 345:
      if (lookahead == 'o')
        ADVANCE(346);
      END_STATE();
    case 346:
      if (lookahead == 'i')
        ADVANCE(347);
      END_STATE();
    case 347:
      if (lookahead == 'n')
        ADVANCE(348);
      END_STATE();
    case 348:
      if (lookahead == 't')
        ADVANCE(349);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym_disjoint);
      END_STATE();
    case 350:
      if (lookahead == 'a')
        ADVANCE(100);
      if (lookahead == 'n')
        ADVANCE(351);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(350);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '>' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(95);
      if (lookahead != 0)
        ADVANCE(96);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym_qname);
      if (lookahead == 'e')
        ADVANCE(352);
      if (lookahead == 'o')
        ADVANCE(358);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '>' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(95);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(96);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym_qname);
      if (lookahead == 'i')
        ADVANCE(353);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '>' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(95);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(96);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym_qname);
      if (lookahead == 't')
        ADVANCE(354);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '>' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(95);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(96);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym_qname);
      if (lookahead == 'h')
        ADVANCE(355);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '>' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(95);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(96);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym_qname);
      if (lookahead == 'e')
        ADVANCE(356);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '>' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(95);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(96);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym_qname);
      if (lookahead == 'r')
        ADVANCE(357);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '>' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(95);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(96);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(anon_sym_neither);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '>' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(95);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(96);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym_qname);
      if (lookahead == 't')
        ADVANCE(359);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '>' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(95);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(96);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(anon_sym_not);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '>' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(95);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(96);
      END_STATE();
    case 360:
      if (lookahead == 'a')
        ADVANCE(361);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(360);
      END_STATE();
    case 361:
      if (lookahead == 's')
        ADVANCE(362);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(anon_sym_as);
      END_STATE();
    case 363:
      if (lookahead == 'a')
        ADVANCE(100);
      if (lookahead == 'n')
        ADVANCE(351);
      if (lookahead == 't')
        ADVANCE(364);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(363);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '>' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(95);
      if (lookahead != 0)
        ADVANCE(96);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym_qname);
      if (lookahead == 'h')
        ADVANCE(365);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '>' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(95);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(96);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym_qname);
      if (lookahead == 'e')
        ADVANCE(127);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '>' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(95);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(96);
      END_STATE();
    case 366:
      if (lookahead == 'a')
        ADVANCE(367);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(366);
      END_STATE();
    case 367:
      if (lookahead == 'r')
        ADVANCE(301);
      END_STATE();
    case 368:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '*')
        ADVANCE(2);
      if (lookahead == '@')
        ADVANCE(42);
      if (lookahead == 'A')
        ADVANCE(63);
      if (lookahead == 'G')
        ADVANCE(64);
      if (lookahead == 'S')
        ADVANCE(57);
      if (lookahead == 'T')
        ADVANCE(65);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(368);
      END_STATE();
    case 369:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(369);
      if (lookahead != 0)
        ADVANCE(290);
      END_STATE();
    case 370:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == ',')
        ADVANCE(3);
      if (lookahead == '.')
        ADVANCE(4);
      if (lookahead == '@')
        ADVANCE(42);
      if (lookahead == 'A')
        ADVANCE(63);
      if (lookahead == 'G')
        ADVANCE(64);
      if (lookahead == 'S')
        ADVANCE(57);
      if (lookahead == 'T')
        ADVANCE(65);
      if (lookahead == 'a')
        ADVANCE(137);
      if (lookahead == 'o')
        ADVANCE(318);
      if (lookahead == 't')
        ADVANCE(320);
      if (lookahead == 'w')
        ADVANCE(324);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(370);
      END_STATE();
    case 371:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '.')
        ADVANCE(4);
      if (lookahead == '@')
        ADVANCE(42);
      if (lookahead == 'A')
        ADVANCE(63);
      if (lookahead == 'G')
        ADVANCE(64);
      if (lookahead == 'S')
        ADVANCE(57);
      if (lookahead == 'T')
        ADVANCE(65);
      if (lookahead == 'o')
        ADVANCE(318);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(371);
      END_STATE();
    case 372:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == ',')
        ADVANCE(3);
      if (lookahead == '.')
        ADVANCE(4);
      if (lookahead == '@')
        ADVANCE(42);
      if (lookahead == 'A')
        ADVANCE(63);
      if (lookahead == 'G')
        ADVANCE(64);
      if (lookahead == 'S')
        ADVANCE(57);
      if (lookahead == 'T')
        ADVANCE(65);
      if (lookahead == 'a')
        ADVANCE(137);
      if (lookahead == 'n')
        ADVANCE(315);
      if (lookahead == 'o')
        ADVANCE(318);
      if (lookahead == 't')
        ADVANCE(320);
      if (lookahead == 'w')
        ADVANCE(324);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(372);
      END_STATE();
    case 373:
      if (lookahead == 'a')
        ADVANCE(100);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(373);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '>' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(95);
      if (lookahead != 0)
        ADVANCE(96);
      END_STATE();
    case 374:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '.')
        ADVANCE(4);
      if (lookahead == '@')
        ADVANCE(42);
      if (lookahead == 'A')
        ADVANCE(63);
      if (lookahead == 'G')
        ADVANCE(64);
      if (lookahead == 'S')
        ADVANCE(57);
      if (lookahead == 'T')
        ADVANCE(65);
      if (lookahead == 'a')
        ADVANCE(137);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(374);
      END_STATE();
    case 375:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == ',')
        ADVANCE(3);
      if (lookahead == '.')
        ADVANCE(4);
      if (lookahead == '@')
        ADVANCE(42);
      if (lookahead == 'A')
        ADVANCE(63);
      if (lookahead == 'G')
        ADVANCE(64);
      if (lookahead == 'S')
        ADVANCE(57);
      if (lookahead == 'T')
        ADVANCE(65);
      if (lookahead == 'a')
        ADVANCE(137);
      if (lookahead == 'i')
        ADVANCE(376);
      if (lookahead == 'o')
        ADVANCE(378);
      if (lookahead == 't')
        ADVANCE(381);
      if (lookahead == 'w')
        ADVANCE(324);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(375);
      END_STATE();
    case 376:
      if (lookahead == 'n')
        ADVANCE(377);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(anon_sym_in);
      END_STATE();
    case 378:
      if (lookahead == 'f')
        ADVANCE(379);
      if (lookahead == 'n')
        ADVANCE(380);
      if (lookahead == 'r')
        ADVANCE(319);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(anon_sym_of);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(anon_sym_on);
      END_STATE();
    case 381:
      if (lookahead == 'h')
        ADVANCE(382);
      if (lookahead == 'o')
        ADVANCE(385);
      END_STATE();
    case 382:
      if (lookahead == 'a')
        ADVANCE(383);
      END_STATE();
    case 383:
      if (lookahead == 'n')
        ADVANCE(384);
      if (lookahead == 't')
        ADVANCE(323);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(anon_sym_than);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(anon_sym_to);
      END_STATE();
    case 386:
      if (lookahead == 'a')
        ADVANCE(100);
      if (lookahead == 'n')
        ADVANCE(387);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(386);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '>' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(95);
      if (lookahead != 0)
        ADVANCE(96);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym_qname);
      if (lookahead == 'o')
        ADVANCE(358);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '>' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(95);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(96);
      END_STATE();
    case 388:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '.')
        ADVANCE(4);
      if (lookahead == '@')
        ADVANCE(42);
      if (lookahead == 'A')
        ADVANCE(63);
      if (lookahead == 'G')
        ADVANCE(64);
      if (lookahead == 'S')
        ADVANCE(57);
      if (lookahead == 'T')
        ADVANCE(65);
      if (lookahead == 'n')
        ADVANCE(315);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(388);
      END_STATE();
    case 389:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '.')
        ADVANCE(4);
      if (lookahead == '@')
        ADVANCE(42);
      if (lookahead == 'A')
        ADVANCE(63);
      if (lookahead == 'G')
        ADVANCE(64);
      if (lookahead == 'S')
        ADVANCE(57);
      if (lookahead == 'T')
        ADVANCE(65);
      if (lookahead == 'a')
        ADVANCE(137);
      if (lookahead == 'o')
        ADVANCE(318);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(389);
      END_STATE();
    case 390:
      if (lookahead == 'c')
        ADVANCE(391);
      if (lookahead == 'i')
        ADVANCE(401);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(390);
      END_STATE();
    case 391:
      if (lookahead == 'o')
        ADVANCE(392);
      END_STATE();
    case 392:
      if (lookahead == 'n')
        ADVANCE(393);
      END_STATE();
    case 393:
      if (lookahead == 's')
        ADVANCE(394);
      END_STATE();
    case 394:
      if (lookahead == 'i')
        ADVANCE(395);
      END_STATE();
    case 395:
      if (lookahead == 's')
        ADVANCE(396);
      END_STATE();
    case 396:
      if (lookahead == 't')
        ADVANCE(397);
      END_STATE();
    case 397:
      if (lookahead == 'e')
        ADVANCE(398);
      END_STATE();
    case 398:
      if (lookahead == 'n')
        ADVANCE(399);
      END_STATE();
    case 399:
      if (lookahead == 't')
        ADVANCE(400);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(anon_sym_consistent);
      END_STATE();
    case 401:
      if (lookahead == 'n')
        ADVANCE(402);
      END_STATE();
    case 402:
      if (lookahead == 'c')
        ADVANCE(403);
      END_STATE();
    case 403:
      if (lookahead == 'o')
        ADVANCE(404);
      END_STATE();
    case 404:
      if (lookahead == 'n')
        ADVANCE(405);
      END_STATE();
    case 405:
      if (lookahead == 's')
        ADVANCE(406);
      END_STATE();
    case 406:
      if (lookahead == 'i')
        ADVANCE(407);
      END_STATE();
    case 407:
      if (lookahead == 's')
        ADVANCE(408);
      END_STATE();
    case 408:
      if (lookahead == 't')
        ADVANCE(409);
      END_STATE();
    case 409:
      if (lookahead == 'e')
        ADVANCE(410);
      END_STATE();
    case 410:
      if (lookahead == 'n')
        ADVANCE(411);
      END_STATE();
    case 411:
      if (lookahead == 't')
        ADVANCE(412);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(anon_sym_inconsistent);
      END_STATE();
    case 413:
      if (lookahead == 'o')
        ADVANCE(414);
      if (lookahead == 's')
        ADVANCE(418);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(413);
      END_STATE();
    case 414:
      if (lookahead == 'n')
        ADVANCE(415);
      END_STATE();
    case 415:
      if (lookahead == 'l')
        ADVANCE(416);
      END_STATE();
    case 416:
      if (lookahead == 'y')
        ADVANCE(417);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(anon_sym_only);
      END_STATE();
    case 418:
      if (lookahead == 'o')
        ADVANCE(419);
      END_STATE();
    case 419:
      if (lookahead == 'm')
        ADVANCE(420);
      END_STATE();
    case 420:
      if (lookahead == 'e')
        ADVANCE(421);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(anon_sym_some);
      END_STATE();
    case 422:
      if (lookahead == 'a')
        ADVANCE(100);
      if (lookahead == 't')
        ADVANCE(364);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(422);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '>' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(95);
      if (lookahead != 0)
        ADVANCE(96);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 41},
  [2] = {.lex_state = 51},
  [3] = {.lex_state = 54},
  [4] = {.lex_state = 55},
  [5] = {.lex_state = 41},
  [6] = {.lex_state = 58},
  [7] = {.lex_state = 60},
  [8] = {.lex_state = 51},
  [9] = {.lex_state = 61},
  [10] = {.lex_state = 62},
  [11] = {.lex_state = 61},
  [12] = {.lex_state = 55},
  [13] = {.lex_state = 51},
  [14] = {.lex_state = 41},
  [15] = {.lex_state = 66},
  [16] = {.lex_state = 58},
  [17] = {.lex_state = 67},
  [18] = {.lex_state = 60},
  [19] = {.lex_state = 60},
  [20] = {.lex_state = 58},
  [21] = {.lex_state = 61},
  [22] = {.lex_state = 80},
  [23] = {.lex_state = 80},
  [24] = {.lex_state = 80},
  [25] = {.lex_state = 61},
  [26] = {.lex_state = 82},
  [27] = {.lex_state = 128},
  [28] = {.lex_state = 82},
  [29] = {.lex_state = 62},
  [30] = {.lex_state = 61},
  [31] = {.lex_state = 62},
  [32] = {.lex_state = 55},
  [33] = {.lex_state = 58},
  [34] = {.lex_state = 55},
  [35] = {.lex_state = 131},
  [36] = {.lex_state = 58},
  [37] = {.lex_state = 80},
  [38] = {.lex_state = 80},
  [39] = {.lex_state = 67},
  [40] = {.lex_state = 60},
  [41] = {.lex_state = 60},
  [42] = {.lex_state = 66},
  [43] = {.lex_state = 82},
  [44] = {.lex_state = 128},
  [45] = {.lex_state = 82},
  [46] = {.lex_state = 132},
  [47] = {.lex_state = 80},
  [48] = {.lex_state = 80},
  [49] = {.lex_state = 80},
  [50] = {.lex_state = 80},
  [51] = {.lex_state = 136},
  [52] = {.lex_state = 80},
  [53] = {.lex_state = 80},
  [54] = {.lex_state = 80},
  [55] = {.lex_state = 80},
  [56] = {.lex_state = 80},
  [57] = {.lex_state = 236},
  [58] = {.lex_state = 237},
  [59] = {.lex_state = 238},
  [60] = {.lex_state = 237},
  [61] = {.lex_state = 237},
  [62] = {.lex_state = 237},
  [63] = {.lex_state = 237},
  [64] = {.lex_state = 239},
  [65] = {.lex_state = 239},
  [66] = {.lex_state = 239},
  [67] = {.lex_state = 240},
  [68] = {.lex_state = 237},
  [69] = {.lex_state = 136},
  [70] = {.lex_state = 136},
  [71] = {.lex_state = 244},
  [72] = {.lex_state = 251},
  [73] = {.lex_state = 239},
  [74] = {.lex_state = 260},
  [75] = {.lex_state = 82},
  [76] = {.lex_state = 62},
  [77] = {.lex_state = 61},
  [78] = {.lex_state = 66},
  [79] = {.lex_state = 131},
  [80] = {.lex_state = 261},
  [81] = {.lex_state = 277},
  [82] = {.lex_state = 291},
  [83] = {.lex_state = 291},
  [84] = {.lex_state = 238},
  [85] = {.lex_state = 239},
  [86] = {.lex_state = 239},
  [87] = {.lex_state = 239},
  [88] = {.lex_state = 80},
  [89] = {.lex_state = 80},
  [90] = {.lex_state = 239},
  [91] = {.lex_state = 239},
  [92] = {.lex_state = 240},
  [93] = {.lex_state = 260},
  [94] = {.lex_state = 251},
  [95] = {.lex_state = 239},
  [96] = {.lex_state = 239},
  [97] = {.lex_state = 82},
  [98] = {.lex_state = 292},
  [99] = {.lex_state = 62},
  [100] = {.lex_state = 62},
  [101] = {.lex_state = 80},
  [102] = {.lex_state = 237},
  [103] = {.lex_state = 237},
  [104] = {.lex_state = 298},
  [105] = {.lex_state = 62},
  [106] = {.lex_state = 299},
  [107] = {.lex_state = 330},
  [108] = {.lex_state = 331},
  [109] = {.lex_state = 331},
  [110] = {.lex_state = 331},
  [111] = {.lex_state = 80},
  [112] = {.lex_state = 334},
  [113] = {.lex_state = 350},
  [114] = {.lex_state = 80},
  [115] = {.lex_state = 80},
  [116] = {.lex_state = 239},
  [117] = {.lex_state = 350},
  [118] = {.lex_state = 80},
  [119] = {.lex_state = 80},
  [120] = {.lex_state = 80},
  [121] = {.lex_state = 80},
  [122] = {.lex_state = 80},
  [123] = {.lex_state = 80},
  [124] = {.lex_state = 239},
  [125] = {.lex_state = 239},
  [126] = {.lex_state = 239},
  [127] = {.lex_state = 360},
  [128] = {.lex_state = 363},
  [129] = {.lex_state = 80},
  [130] = {.lex_state = 366},
  [131] = {.lex_state = 237},
  [132] = {.lex_state = 238},
  [133] = {.lex_state = 55},
  [134] = {.lex_state = 368},
  [135] = {.lex_state = 369},
  [136] = {.lex_state = 60},
  [137] = {.lex_state = 67},
  [138] = {.lex_state = 62},
  [139] = {.lex_state = 291},
  [140] = {.lex_state = 239},
  [141] = {.lex_state = 239},
  [142] = {.lex_state = 237},
  [143] = {.lex_state = 240},
  [144] = {.lex_state = 240},
  [145] = {.lex_state = 236},
  [146] = {.lex_state = 292},
  [147] = {.lex_state = 298},
  [148] = {.lex_state = 237},
  [149] = {.lex_state = 80},
  [150] = {.lex_state = 350},
  [151] = {.lex_state = 82},
  [152] = {.lex_state = 334},
  [153] = {.lex_state = 237},
  [154] = {.lex_state = 237},
  [155] = {.lex_state = 80},
  [156] = {.lex_state = 80},
  [157] = {.lex_state = 237},
  [158] = {.lex_state = 370},
  [159] = {.lex_state = 371},
  [160] = {.lex_state = 237},
  [161] = {.lex_state = 372},
  [162] = {.lex_state = 373},
  [163] = {.lex_state = 373},
  [164] = {.lex_state = 239},
  [165] = {.lex_state = 350},
  [166] = {.lex_state = 374},
  [167] = {.lex_state = 374},
  [168] = {.lex_state = 237},
  [169] = {.lex_state = 239},
  [170] = {.lex_state = 360},
  [171] = {.lex_state = 363},
  [172] = {.lex_state = 239},
  [173] = {.lex_state = 360},
  [174] = {.lex_state = 363},
  [175] = {.lex_state = 237},
  [176] = {.lex_state = 239},
  [177] = {.lex_state = 239},
  [178] = {.lex_state = 80},
  [179] = {.lex_state = 239},
  [180] = {.lex_state = 375},
  [181] = {.lex_state = 80},
  [182] = {.lex_state = 239},
  [183] = {.lex_state = 237},
  [184] = {.lex_state = 375},
  [185] = {.lex_state = 239},
  [186] = {.lex_state = 331},
  [187] = {.lex_state = 80},
  [188] = {.lex_state = 80},
  [189] = {.lex_state = 350},
  [190] = {.lex_state = 62},
  [191] = {.lex_state = 298},
  [192] = {.lex_state = 60},
  [193] = {.lex_state = 237},
  [194] = {.lex_state = 292},
  [195] = {.lex_state = 350},
  [196] = {.lex_state = 237},
  [197] = {.lex_state = 80},
  [198] = {.lex_state = 350},
  [199] = {.lex_state = 373},
  [200] = {.lex_state = 373},
  [201] = {.lex_state = 80},
  [202] = {.lex_state = 80},
  [203] = {.lex_state = 80},
  [204] = {.lex_state = 386},
  [205] = {.lex_state = 370},
  [206] = {.lex_state = 244},
  [207] = {.lex_state = 374},
  [208] = {.lex_state = 80},
  [209] = {.lex_state = 386},
  [210] = {.lex_state = 371},
  [211] = {.lex_state = 388},
  [212] = {.lex_state = 389},
  [213] = {.lex_state = 239},
  [214] = {.lex_state = 374},
  [215] = {.lex_state = 239},
  [216] = {.lex_state = 239},
  [217] = {.lex_state = 375},
  [218] = {.lex_state = 80},
  [219] = {.lex_state = 239},
  [220] = {.lex_state = 375},
  [221] = {.lex_state = 80},
  [222] = {.lex_state = 390},
  [223] = {.lex_state = 350},
  [224] = {.lex_state = 350},
  [225] = {.lex_state = 237},
  [226] = {.lex_state = 237},
  [227] = {.lex_state = 350},
  [228] = {.lex_state = 237},
  [229] = {.lex_state = 244},
  [230] = {.lex_state = 386},
  [231] = {.lex_state = 370},
  [232] = {.lex_state = 389},
  [233] = {.lex_state = 374},
  [234] = {.lex_state = 244},
  [235] = {.lex_state = 80},
  [236] = {.lex_state = 237},
  [237] = {.lex_state = 413},
  [238] = {.lex_state = 239},
  [239] = {.lex_state = 363},
  [240] = {.lex_state = 422},
  [241] = {.lex_state = 374},
  [242] = {.lex_state = 386},
  [243] = {.lex_state = 371},
  [244] = {.lex_state = 371},
  [245] = {.lex_state = 80},
  [246] = {.lex_state = 373},
  [247] = {.lex_state = 388},
  [248] = {.lex_state = 374},
  [249] = {.lex_state = 374},
  [250] = {.lex_state = 239},
  [251] = {.lex_state = 239},
  [252] = {.lex_state = 390},
  [253] = {.lex_state = 237},
  [254] = {.lex_state = 237},
  [255] = {.lex_state = 237},
  [256] = {.lex_state = 422},
  [257] = {.lex_state = 80},
  [258] = {.lex_state = 80},
  [259] = {.lex_state = 350},
  [260] = {.lex_state = 350},
  [261] = {.lex_state = 413},
  [262] = {.lex_state = 413},
  [263] = {.lex_state = 239},
  [264] = {.lex_state = 237},
  [265] = {.lex_state = 375},
  [266] = {.lex_state = 239},
  [267] = {.lex_state = 373},
  [268] = {.lex_state = 388},
  [269] = {.lex_state = 388},
  [270] = {.lex_state = 350},
  [271] = {.lex_state = 350},
  [272] = {.lex_state = 237},
  [273] = {.lex_state = 375},
  [274] = {.lex_state = 80},
  [275] = {.lex_state = 413},
  [276] = {.lex_state = 413},
  [277] = {.lex_state = 413},
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym_SLASH_BSLASHS_SLASH] = ACTIONS(3),
    [anon_sym_Background_COLON] = ACTIONS(1),
    [sym_tag] = ACTIONS(1),
    [anon_sym_Scenario_COLON] = ACTIONS(1),
    [anon_sym_a] = ACTIONS(1),
    [anon_sym_And] = ACTIONS(1),
    [anon_sym_Given] = ACTIONS(1),
    [anon_sym_Then] = ACTIONS(1),
    [sym_asterisk] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(3),
    [sym_feature] = STATE(4),
    [aux_sym_feature_repeat1] = STATE(5),
    [anon_sym_Feature_COLON] = ACTIONS(5),
    [sym_tag] = ACTIONS(7),
  },
  [2] = {
    [sym_title] = ACTIONS(9),
  },
  [3] = {
    [ts_builtin_sym_end] = ACTIONS(11),
  },
  [4] = {
    [sym_background] = STATE(9),
    [sym_scenario] = STATE(11),
    [sym_scenario_head] = STATE(10),
    [aux_sym_source_file_repeat1] = STATE(11),
    [aux_sym_feature_repeat1] = STATE(12),
    [ts_builtin_sym_end] = ACTIONS(13),
    [anon_sym_Background_COLON] = ACTIONS(15),
    [sym_tag] = ACTIONS(17),
    [anon_sym_Scenario_COLON] = ACTIONS(19),
  },
  [5] = {
    [aux_sym_feature_repeat1] = STATE(14),
    [anon_sym_Feature_COLON] = ACTIONS(21),
    [sym_tag] = ACTIONS(23),
  },
  [6] = {
    [sym_eol] = STATE(15),
    [aux_sym_eol_repeat1] = STATE(16),
    [aux_sym_SLASH_LBRACK_BSLASHr_BSLASHn_RBRACK_SLASH] = ACTIONS(25),
  },
  [7] = {
    [sym_language_setting] = STATE(18),
    [sym_import] = STATE(19),
    [aux_sym_background_repeat1] = STATE(19),
    [ts_builtin_sym_end] = ACTIONS(27),
    [sym_tag] = ACTIONS(27),
    [anon_sym_Scenario_COLON] = ACTIONS(27),
    [sym_asterisk] = ACTIONS(29),
  },
  [8] = {
    [sym_title] = ACTIONS(31),
  },
  [9] = {
    [sym_scenario] = STATE(21),
    [sym_scenario_head] = STATE(10),
    [aux_sym_source_file_repeat1] = STATE(21),
    [aux_sym_feature_repeat1] = STATE(12),
    [ts_builtin_sym_end] = ACTIONS(33),
    [sym_tag] = ACTIONS(17),
    [anon_sym_Scenario_COLON] = ACTIONS(19),
  },
  [10] = {
    [sym_scenario_body] = STATE(25),
    [sym_assumption] = STATE(29),
    [sym_test] = STATE(29),
    [sym_And] = STATE(26),
    [sym_Given] = STATE(27),
    [sym_Then] = STATE(28),
    [aux_sym_scenario_body_repeat1] = STATE(29),
    [anon_sym_And] = ACTIONS(35),
    [anon_sym_Given] = ACTIONS(37),
    [anon_sym_Then] = ACTIONS(39),
  },
  [11] = {
    [sym_scenario] = STATE(30),
    [sym_scenario_head] = STATE(10),
    [aux_sym_source_file_repeat1] = STATE(30),
    [aux_sym_feature_repeat1] = STATE(12),
    [ts_builtin_sym_end] = ACTIONS(33),
    [sym_tag] = ACTIONS(17),
    [anon_sym_Scenario_COLON] = ACTIONS(19),
  },
  [12] = {
    [sym_scenario_head] = STATE(31),
    [aux_sym_feature_repeat1] = STATE(32),
    [sym_tag] = ACTIONS(41),
    [anon_sym_Scenario_COLON] = ACTIONS(19),
  },
  [13] = {
    [sym_title] = ACTIONS(43),
  },
  [14] = {
    [aux_sym_feature_repeat1] = STATE(14),
    [anon_sym_Feature_COLON] = ACTIONS(45),
    [sym_tag] = ACTIONS(47),
  },
  [15] = {
    [sym_narrative] = STATE(34),
    [aux_sym_narrative_repeat1] = STATE(35),
    [aux_sym_SLASH_BSLASHS_SLASH] = ACTIONS(50),
  },
  [16] = {
    [aux_sym_eol_repeat1] = STATE(36),
    [aux_sym_SLASH_BSLASHS_SLASH] = ACTIONS(52),
    [aux_sym_SLASH_LBRACK_BSLASHr_BSLASHn_RBRACK_SLASH] = ACTIONS(54),
  },
  [17] = {
    [anon_sym_Language] = ACTIONS(56),
    [anon_sym_Test] = ACTIONS(58),
  },
  [18] = {
    [sym_import] = STATE(40),
    [aux_sym_background_repeat1] = STATE(40),
    [ts_builtin_sym_end] = ACTIONS(60),
    [sym_tag] = ACTIONS(60),
    [anon_sym_Scenario_COLON] = ACTIONS(60),
    [sym_asterisk] = ACTIONS(62),
  },
  [19] = {
    [sym_import] = STATE(41),
    [aux_sym_background_repeat1] = STATE(41),
    [ts_builtin_sym_end] = ACTIONS(60),
    [sym_tag] = ACTIONS(60),
    [anon_sym_Scenario_COLON] = ACTIONS(60),
    [sym_asterisk] = ACTIONS(62),
  },
  [20] = {
    [sym_eol] = STATE(42),
    [aux_sym_eol_repeat1] = STATE(16),
    [aux_sym_SLASH_LBRACK_BSLASHr_BSLASHn_RBRACK_SLASH] = ACTIONS(25),
  },
  [21] = {
    [sym_scenario] = STATE(30),
    [sym_scenario_head] = STATE(10),
    [aux_sym_source_file_repeat1] = STATE(30),
    [aux_sym_feature_repeat1] = STATE(12),
    [ts_builtin_sym_end] = ACTIONS(64),
    [sym_tag] = ACTIONS(17),
    [anon_sym_Scenario_COLON] = ACTIONS(19),
  },
  [22] = {
    [sym_space] = ACTIONS(66),
  },
  [23] = {
    [sym_space] = ACTIONS(68),
  },
  [24] = {
    [sym_space] = ACTIONS(70),
  },
  [25] = {
    [ts_builtin_sym_end] = ACTIONS(72),
    [sym_tag] = ACTIONS(72),
    [anon_sym_Scenario_COLON] = ACTIONS(72),
  },
  [26] = {
    [sym_language_ID] = STATE(57),
    [sym_inference_test] = STATE(58),
    [sym_consistency_test] = STATE(58),
    [sym_infer] = STATE(59),
    [sym_sentence] = STATE(60),
    [sym_definition] = STATE(61),
    [sym_proposition] = STATE(61),
    [sym_universal] = STATE(62),
    [sym_universal_positive] = STATE(63),
    [sym_a] = STATE(64),
    [sym_every] = STATE(65),
    [sym_universal_negative] = STATE(63),
    [sym_no] = STATE(66),
    [sym_qname_list] = STATE(67),
    [sym_particular] = STATE(62),
    [sym_fact] = STATE(61),
    [sym_instance] = STATE(68),
    [sym_relation] = STATE(68),
    [sym_equation] = STATE(68),
    [sym_different] = STATE(68),
    [sym_source] = STATE(61),
    [sym_pos_class] = STATE(69),
    [sym_class_name] = STATE(70),
    [sym_indiv_name] = STATE(71),
    [sym_the] = STATE(72),
    [sym_an] = STATE(64),
    [sym_some] = STATE(73),
    [sym_that] = STATE(74),
    [sym_donot] = STATE(75),
    [anon_sym_PERCENTOWL] = ACTIONS(74),
    [anon_sym_PERCENTCommonLogic] = ACTIONS(74),
    [anon_sym_infer] = ACTIONS(76),
    [anon_sym_a] = ACTIONS(78),
    [anon_sym_every] = ACTIONS(80),
    [anon_sym_no] = ACTIONS(82),
    [sym_qname] = ACTIONS(84),
    [anon_sym_that] = ACTIONS(86),
    [anon_sym_the] = ACTIONS(88),
    [anon_sym_an] = ACTIONS(90),
    [anon_sym_some] = ACTIONS(92),
    [anon_sym_don_SQUOTEt] = ACTIONS(94),
  },
  [27] = {
    [sym_language_ID] = STATE(57),
    [sym_sentence] = STATE(60),
    [sym_definition] = STATE(61),
    [sym_proposition] = STATE(61),
    [sym_universal] = STATE(62),
    [sym_universal_positive] = STATE(63),
    [sym_a] = STATE(64),
    [sym_every] = STATE(65),
    [sym_universal_negative] = STATE(63),
    [sym_no] = STATE(66),
    [sym_qname_list] = STATE(67),
    [sym_particular] = STATE(62),
    [sym_fact] = STATE(61),
    [sym_instance] = STATE(68),
    [sym_relation] = STATE(68),
    [sym_equation] = STATE(68),
    [sym_different] = STATE(68),
    [sym_source] = STATE(61),
    [sym_pos_class] = STATE(69),
    [sym_class_name] = STATE(70),
    [sym_indiv_name] = STATE(71),
    [sym_an] = STATE(64),
    [sym_some] = STATE(73),
    [sym_that] = STATE(74),
    [anon_sym_PERCENTOWL] = ACTIONS(74),
    [anon_sym_PERCENTCommonLogic] = ACTIONS(74),
    [anon_sym_a] = ACTIONS(78),
    [anon_sym_every] = ACTIONS(80),
    [anon_sym_no] = ACTIONS(82),
    [sym_qname] = ACTIONS(84),
    [anon_sym_that] = ACTIONS(86),
    [anon_sym_an] = ACTIONS(90),
    [anon_sym_some] = ACTIONS(92),
  },
  [28] = {
    [sym_inference_test] = STATE(58),
    [sym_consistency_test] = STATE(58),
    [sym_infer] = STATE(59),
    [sym_the] = STATE(72),
    [sym_donot] = STATE(75),
    [anon_sym_infer] = ACTIONS(96),
    [anon_sym_the] = ACTIONS(98),
    [anon_sym_don_SQUOTEt] = ACTIONS(100),
  },
  [29] = {
    [sym_assumption] = STATE(76),
    [sym_test] = STATE(76),
    [sym_And] = STATE(26),
    [sym_Given] = STATE(27),
    [sym_Then] = STATE(28),
    [aux_sym_scenario_body_repeat1] = STATE(76),
    [ts_builtin_sym_end] = ACTIONS(102),
    [sym_tag] = ACTIONS(102),
    [anon_sym_Scenario_COLON] = ACTIONS(102),
    [anon_sym_And] = ACTIONS(35),
    [anon_sym_Given] = ACTIONS(37),
    [anon_sym_Then] = ACTIONS(39),
  },
  [30] = {
    [sym_scenario] = STATE(30),
    [sym_scenario_head] = STATE(10),
    [aux_sym_source_file_repeat1] = STATE(30),
    [aux_sym_feature_repeat1] = STATE(12),
    [ts_builtin_sym_end] = ACTIONS(104),
    [sym_tag] = ACTIONS(106),
    [anon_sym_Scenario_COLON] = ACTIONS(109),
  },
  [31] = {
    [sym_scenario_body] = STATE(77),
    [sym_assumption] = STATE(29),
    [sym_test] = STATE(29),
    [sym_And] = STATE(26),
    [sym_Given] = STATE(27),
    [sym_Then] = STATE(28),
    [aux_sym_scenario_body_repeat1] = STATE(29),
    [anon_sym_And] = ACTIONS(35),
    [anon_sym_Given] = ACTIONS(37),
    [anon_sym_Then] = ACTIONS(39),
  },
  [32] = {
    [aux_sym_feature_repeat1] = STATE(32),
    [sym_tag] = ACTIONS(112),
    [anon_sym_Scenario_COLON] = ACTIONS(45),
  },
  [33] = {
    [sym_eol] = STATE(78),
    [aux_sym_eol_repeat1] = STATE(16),
    [aux_sym_SLASH_LBRACK_BSLASHr_BSLASHn_RBRACK_SLASH] = ACTIONS(25),
  },
  [34] = {
    [ts_builtin_sym_end] = ACTIONS(115),
    [anon_sym_Background_COLON] = ACTIONS(115),
    [sym_tag] = ACTIONS(115),
    [anon_sym_Scenario_COLON] = ACTIONS(115),
  },
  [35] = {
    [aux_sym_narrative_repeat1] = STATE(79),
    [ts_builtin_sym_end] = ACTIONS(117),
    [aux_sym_SLASH_BSLASHS_SLASH] = ACTIONS(119),
    [anon_sym_Background_COLON] = ACTIONS(117),
    [sym_tag] = ACTIONS(117),
    [anon_sym_Scenario_COLON] = ACTIONS(117),
  },
  [36] = {
    [aux_sym_eol_repeat1] = STATE(36),
    [aux_sym_SLASH_BSLASHS_SLASH] = ACTIONS(121),
    [aux_sym_SLASH_LBRACK_BSLASHr_BSLASHn_RBRACK_SLASH] = ACTIONS(123),
  },
  [37] = {
    [sym_space] = ACTIONS(126),
  },
  [38] = {
    [sym_space] = ACTIONS(128),
  },
  [39] = {
    [anon_sym_Test] = ACTIONS(58),
  },
  [40] = {
    [sym_import] = STATE(41),
    [aux_sym_background_repeat1] = STATE(41),
    [ts_builtin_sym_end] = ACTIONS(130),
    [sym_tag] = ACTIONS(130),
    [anon_sym_Scenario_COLON] = ACTIONS(130),
    [sym_asterisk] = ACTIONS(62),
  },
  [41] = {
    [sym_import] = STATE(41),
    [aux_sym_background_repeat1] = STATE(41),
    [ts_builtin_sym_end] = ACTIONS(132),
    [sym_tag] = ACTIONS(132),
    [anon_sym_Scenario_COLON] = ACTIONS(132),
    [sym_asterisk] = ACTIONS(134),
  },
  [42] = {
    [sym_narrative] = STATE(82),
    [aux_sym_narrative_repeat1] = STATE(83),
    [aux_sym_SLASH_BSLASHS_SLASH] = ACTIONS(137),
  },
  [43] = {
    [anon_sym_PERCENTOWL] = ACTIONS(139),
    [anon_sym_PERCENTCommonLogic] = ACTIONS(139),
    [anon_sym_infer] = ACTIONS(139),
    [anon_sym_a] = ACTIONS(139),
    [anon_sym_every] = ACTIONS(139),
    [anon_sym_no] = ACTIONS(139),
    [sym_qname] = ACTIONS(139),
    [anon_sym_that] = ACTIONS(139),
    [anon_sym_the] = ACTIONS(139),
    [anon_sym_an] = ACTIONS(139),
    [anon_sym_some] = ACTIONS(139),
    [anon_sym_don_SQUOTEt] = ACTIONS(139),
  },
  [44] = {
    [anon_sym_PERCENTOWL] = ACTIONS(141),
    [anon_sym_PERCENTCommonLogic] = ACTIONS(141),
    [anon_sym_a] = ACTIONS(141),
    [anon_sym_every] = ACTIONS(141),
    [anon_sym_no] = ACTIONS(141),
    [sym_qname] = ACTIONS(141),
    [anon_sym_that] = ACTIONS(141),
    [anon_sym_an] = ACTIONS(141),
    [anon_sym_some] = ACTIONS(141),
  },
  [45] = {
    [anon_sym_infer] = ACTIONS(143),
    [anon_sym_the] = ACTIONS(143),
    [anon_sym_don_SQUOTEt] = ACTIONS(143),
  },
  [46] = {
    [ts_builtin_sym_end] = ACTIONS(145),
    [sym_tag] = ACTIONS(145),
    [anon_sym_Scenario_COLON] = ACTIONS(145),
    [sym_delimiter] = ACTIONS(145),
    [anon_sym_And] = ACTIONS(145),
    [anon_sym_Given] = ACTIONS(145),
    [anon_sym_Then] = ACTIONS(145),
    [sym_asterisk] = ACTIONS(145),
  },
  [47] = {
    [sym_space] = ACTIONS(147),
  },
  [48] = {
    [sym_space] = ACTIONS(149),
  },
  [49] = {
    [sym_space] = ACTIONS(151),
  },
  [50] = {
    [sym_space] = ACTIONS(153),
  },
  [51] = {
    [sym_the_same_as] = STATE(90),
    [sym_and] = STATE(91),
    [aux_sym_qname_list_repeat1] = STATE(92),
    [anon_sym_isenumeratedas] = ACTIONS(155),
    [anon_sym_isasubclassof] = ACTIONS(155),
    [anon_sym_isthesameas] = ACTIONS(157),
    [anon_sym_isn_SQUOTEtthesameas] = ACTIONS(157),
    [sym_is_defined_as] = ACTIONS(155),
    [anon_sym_and] = ACTIONS(159),
    [anon_sym_does] = ACTIONS(161),
    [anon_sym_has] = ACTIONS(161),
    [anon_sym_is] = ACTIONS(161),
    [anon_sym_doesnt] = ACTIONS(163),
    [anon_sym_doesn_SQUOTEt] = ACTIONS(163),
    [anon_sym_doesnot] = ACTIONS(163),
    [anon_sym_hasnt] = ACTIONS(163),
    [anon_sym_hasn_SQUOTEt] = ACTIONS(163),
    [anon_sym_hasnot] = ACTIONS(163),
    [anon_sym_isnt] = ACTIONS(163),
    [anon_sym_isn_SQUOTEt] = ACTIONS(161),
    [anon_sym_isnot] = ACTIONS(163),
  },
  [52] = {
    [sym_space] = ACTIONS(165),
  },
  [53] = {
    [sym_space] = ACTIONS(167),
  },
  [54] = {
    [sym_space] = ACTIONS(169),
  },
  [55] = {
    [sym_space] = ACTIONS(171),
  },
  [56] = {
    [sym_space] = ACTIONS(173),
  },
  [57] = {
    [sym_delimiter] = ACTIONS(175),
  },
  [58] = {
    [sym_dot] = STATE(100),
    [ts_builtin_sym_end] = ACTIONS(177),
    [sym_tag] = ACTIONS(177),
    [anon_sym_Scenario_COLON] = ACTIONS(177),
    [anon_sym_And] = ACTIONS(177),
    [anon_sym_Given] = ACTIONS(177),
    [anon_sym_Then] = ACTIONS(177),
    [anon_sym_DOT] = ACTIONS(179),
  },
  [59] = {
    [sym_language_ID] = STATE(57),
    [sym_infer_sentence] = STATE(102),
    [sym_definition] = STATE(103),
    [sym_universal] = STATE(103),
    [sym_universal_positive] = STATE(63),
    [sym_a] = STATE(64),
    [sym_every] = STATE(65),
    [sym_universal_negative] = STATE(63),
    [sym_no] = STATE(66),
    [sym_qname_list] = STATE(67),
    [sym_fact] = STATE(103),
    [sym_instance] = STATE(68),
    [sym_relation] = STATE(68),
    [sym_equation] = STATE(68),
    [sym_different] = STATE(68),
    [sym_source] = STATE(103),
    [sym_pos_class] = STATE(69),
    [sym_class_name] = STATE(70),
    [sym_indiv_name] = STATE(71),
    [sym_an] = STATE(64),
    [sym_that] = STATE(104),
    [anon_sym_PERCENTOWL] = ACTIONS(74),
    [anon_sym_PERCENTCommonLogic] = ACTIONS(74),
    [anon_sym_a] = ACTIONS(78),
    [anon_sym_every] = ACTIONS(80),
    [anon_sym_no] = ACTIONS(82),
    [sym_qname] = ACTIONS(84),
    [anon_sym_that] = ACTIONS(181),
    [anon_sym_an] = ACTIONS(90),
  },
  [60] = {
    [sym_dot] = STATE(105),
    [ts_builtin_sym_end] = ACTIONS(183),
    [sym_tag] = ACTIONS(183),
    [anon_sym_Scenario_COLON] = ACTIONS(183),
    [anon_sym_And] = ACTIONS(183),
    [anon_sym_Given] = ACTIONS(183),
    [anon_sym_Then] = ACTIONS(183),
    [anon_sym_DOT] = ACTIONS(179),
  },
  [61] = {
    [ts_builtin_sym_end] = ACTIONS(185),
    [sym_tag] = ACTIONS(185),
    [anon_sym_Scenario_COLON] = ACTIONS(185),
    [anon_sym_And] = ACTIONS(185),
    [anon_sym_Given] = ACTIONS(185),
    [anon_sym_Then] = ACTIONS(185),
    [anon_sym_DOT] = ACTIONS(185),
  },
  [62] = {
    [ts_builtin_sym_end] = ACTIONS(187),
    [sym_tag] = ACTIONS(187),
    [anon_sym_Scenario_COLON] = ACTIONS(187),
    [anon_sym_And] = ACTIONS(187),
    [anon_sym_Given] = ACTIONS(187),
    [anon_sym_Then] = ACTIONS(187),
    [anon_sym_DOT] = ACTIONS(187),
  },
  [63] = {
    [ts_builtin_sym_end] = ACTIONS(189),
    [sym_tag] = ACTIONS(189),
    [anon_sym_Scenario_COLON] = ACTIONS(189),
    [anon_sym_And] = ACTIONS(189),
    [anon_sym_Given] = ACTIONS(189),
    [anon_sym_Then] = ACTIONS(189),
    [anon_sym_DOT] = ACTIONS(189),
  },
  [64] = {
    [sym_class_name] = STATE(107),
    [sym_qname] = ACTIONS(191),
  },
  [65] = {
    [sym_class_name] = STATE(109),
    [sym_qname] = ACTIONS(193),
  },
  [66] = {
    [sym_class_name] = STATE(110),
    [sym_qname] = ACTIONS(193),
  },
  [67] = {
    [sym_are] = STATE(112),
    [anon_sym_are] = ACTIONS(195),
  },
  [68] = {
    [ts_builtin_sym_end] = ACTIONS(197),
    [sym_tag] = ACTIONS(197),
    [anon_sym_Scenario_COLON] = ACTIONS(197),
    [anon_sym_And] = ACTIONS(197),
    [anon_sym_Given] = ACTIONS(197),
    [anon_sym_Then] = ACTIONS(197),
    [anon_sym_DOT] = ACTIONS(197),
  },
  [69] = {
    [sym_is_defined_as] = ACTIONS(199),
  },
  [70] = {
    [sym_is_enumerated_as] = STATE(116),
    [sym_is_a_subclass_of] = STATE(117),
    [anon_sym_isenumeratedas] = ACTIONS(201),
    [anon_sym_isasubclassof] = ACTIONS(203),
    [sym_is_defined_as] = ACTIONS(205),
  },
  [71] = {
    [sym_predicate_phrase] = STATE(124),
    [sym_predicate_open] = STATE(125),
    [sym_does] = STATE(126),
    [sym_has] = STATE(127),
    [sym_is] = STATE(128),
    [sym_doesnot1] = STATE(126),
    [sym_hasnot1] = STATE(127),
    [sym_isnot1] = STATE(128),
    [anon_sym_does] = ACTIONS(207),
    [anon_sym_has] = ACTIONS(209),
    [anon_sym_is] = ACTIONS(211),
    [anon_sym_doesnt] = ACTIONS(213),
    [anon_sym_doesn_SQUOTEt] = ACTIONS(213),
    [anon_sym_doesnot] = ACTIONS(213),
    [anon_sym_hasnt] = ACTIONS(215),
    [anon_sym_hasn_SQUOTEt] = ACTIONS(215),
    [anon_sym_hasnot] = ACTIONS(215),
    [anon_sym_isnt] = ACTIONS(217),
    [anon_sym_isn_SQUOTEt] = ACTIONS(217),
    [anon_sym_isnot] = ACTIONS(217),
  },
  [72] = {
    [anon_sym_scenario] = ACTIONS(219),
  },
  [73] = {
    [sym_class_name] = STATE(130),
    [sym_qname] = ACTIONS(191),
  },
  [74] = {
    [sym_language_ID] = STATE(57),
    [sym_sentence] = STATE(131),
    [sym_definition] = STATE(61),
    [sym_proposition] = STATE(61),
    [sym_universal] = STATE(62),
    [sym_universal_positive] = STATE(63),
    [sym_a] = STATE(64),
    [sym_every] = STATE(65),
    [sym_universal_negative] = STATE(63),
    [sym_no] = STATE(66),
    [sym_qname_list] = STATE(67),
    [sym_particular] = STATE(62),
    [sym_fact] = STATE(61),
    [sym_instance] = STATE(68),
    [sym_relation] = STATE(68),
    [sym_equation] = STATE(68),
    [sym_different] = STATE(68),
    [sym_source] = STATE(61),
    [sym_pos_class] = STATE(69),
    [sym_class_name] = STATE(70),
    [sym_indiv_name] = STATE(71),
    [sym_an] = STATE(64),
    [sym_some] = STATE(73),
    [anon_sym_PERCENTOWL] = ACTIONS(74),
    [anon_sym_PERCENTCommonLogic] = ACTIONS(74),
    [anon_sym_a] = ACTIONS(78),
    [anon_sym_every] = ACTIONS(80),
    [anon_sym_no] = ACTIONS(82),
    [sym_qname] = ACTIONS(84),
    [anon_sym_an] = ACTIONS(90),
    [anon_sym_some] = ACTIONS(92),
  },
  [75] = {
    [sym_infer] = STATE(132),
    [anon_sym_infer] = ACTIONS(96),
  },
  [76] = {
    [sym_assumption] = STATE(76),
    [sym_test] = STATE(76),
    [sym_And] = STATE(26),
    [sym_Given] = STATE(27),
    [sym_Then] = STATE(28),
    [aux_sym_scenario_body_repeat1] = STATE(76),
    [ts_builtin_sym_end] = ACTIONS(221),
    [sym_tag] = ACTIONS(221),
    [anon_sym_Scenario_COLON] = ACTIONS(221),
    [anon_sym_And] = ACTIONS(223),
    [anon_sym_Given] = ACTIONS(226),
    [anon_sym_Then] = ACTIONS(229),
  },
  [77] = {
    [ts_builtin_sym_end] = ACTIONS(232),
    [sym_tag] = ACTIONS(232),
    [anon_sym_Scenario_COLON] = ACTIONS(232),
  },
  [78] = {
    [sym_narrative] = STATE(133),
    [aux_sym_narrative_repeat1] = STATE(35),
    [aux_sym_SLASH_BSLASHS_SLASH] = ACTIONS(50),
  },
  [79] = {
    [aux_sym_narrative_repeat1] = STATE(79),
    [ts_builtin_sym_end] = ACTIONS(234),
    [aux_sym_SLASH_BSLASHS_SLASH] = ACTIONS(236),
    [anon_sym_Background_COLON] = ACTIONS(234),
    [sym_tag] = ACTIONS(234),
    [anon_sym_Scenario_COLON] = ACTIONS(234),
  },
  [80] = {
    [sym_language_ID] = STATE(134),
    [anon_sym_PERCENTOWL] = ACTIONS(239),
    [anon_sym_PERCENTCommonLogic] = ACTIONS(239),
  },
  [81] = {
    [anon_sym_theontology] = ACTIONS(241),
    [sym_uriref] = ACTIONS(243),
  },
  [82] = {
    [sym_language_setting] = STATE(138),
    [anon_sym_And] = ACTIONS(245),
    [anon_sym_Given] = ACTIONS(245),
    [anon_sym_Then] = ACTIONS(245),
    [sym_asterisk] = ACTIONS(247),
  },
  [83] = {
    [aux_sym_narrative_repeat1] = STATE(139),
    [aux_sym_SLASH_BSLASHS_SLASH] = ACTIONS(249),
    [anon_sym_And] = ACTIONS(117),
    [anon_sym_Given] = ACTIONS(117),
    [anon_sym_Then] = ACTIONS(117),
    [sym_asterisk] = ACTIONS(117),
  },
  [84] = {
    [anon_sym_PERCENTOWL] = ACTIONS(251),
    [anon_sym_PERCENTCommonLogic] = ACTIONS(251),
    [anon_sym_a] = ACTIONS(251),
    [anon_sym_every] = ACTIONS(251),
    [anon_sym_no] = ACTIONS(251),
    [sym_qname] = ACTIONS(251),
    [anon_sym_that] = ACTIONS(251),
    [anon_sym_an] = ACTIONS(251),
  },
  [85] = {
    [sym_qname] = ACTIONS(253),
  },
  [86] = {
    [sym_qname] = ACTIONS(255),
  },
  [87] = {
    [sym_qname] = ACTIONS(257),
  },
  [88] = {
    [sym_space] = ACTIONS(259),
  },
  [89] = {
    [sym_space] = ACTIONS(261),
  },
  [90] = {
    [sym_qname] = ACTIONS(263),
  },
  [91] = {
    [sym_qname] = ACTIONS(265),
  },
  [92] = {
    [sym_and] = STATE(91),
    [aux_sym_qname_list_repeat1] = STATE(144),
    [anon_sym_are] = ACTIONS(267),
    [anon_sym_and] = ACTIONS(159),
  },
  [93] = {
    [anon_sym_PERCENTOWL] = ACTIONS(269),
    [anon_sym_PERCENTCommonLogic] = ACTIONS(269),
    [anon_sym_a] = ACTIONS(269),
    [anon_sym_every] = ACTIONS(269),
    [anon_sym_no] = ACTIONS(269),
    [sym_qname] = ACTIONS(269),
    [anon_sym_an] = ACTIONS(269),
    [anon_sym_some] = ACTIONS(269),
  },
  [94] = {
    [anon_sym_scenario] = ACTIONS(271),
  },
  [95] = {
    [sym_qname] = ACTIONS(273),
  },
  [96] = {
    [sym_qname] = ACTIONS(275),
  },
  [97] = {
    [anon_sym_infer] = ACTIONS(277),
  },
  [98] = {
    [sym_source_body] = STATE(145),
    [aux_sym_source_body_repeat1] = STATE(146),
    [aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_SLASH] = ACTIONS(279),
    [aux_sym_SLASH_DQUOTE_LBRACK_CARET_DQUOTE_RBRACK_SLASH] = ACTIONS(281),
    [aux_sym_SLASH_DQUOTE_DQUOTE_LBRACK_CARET_DQUOTE_RBRACK_SLASH] = ACTIONS(281),
  },
  [99] = {
    [ts_builtin_sym_end] = ACTIONS(283),
    [sym_tag] = ACTIONS(283),
    [anon_sym_Scenario_COLON] = ACTIONS(283),
    [anon_sym_And] = ACTIONS(283),
    [anon_sym_Given] = ACTIONS(283),
    [anon_sym_Then] = ACTIONS(283),
  },
  [100] = {
    [ts_builtin_sym_end] = ACTIONS(285),
    [sym_tag] = ACTIONS(285),
    [anon_sym_Scenario_COLON] = ACTIONS(285),
    [anon_sym_And] = ACTIONS(285),
    [anon_sym_Given] = ACTIONS(285),
    [anon_sym_Then] = ACTIONS(285),
  },
  [101] = {
    [sym_space] = ACTIONS(287),
  },
  [102] = {
    [ts_builtin_sym_end] = ACTIONS(289),
    [sym_tag] = ACTIONS(289),
    [anon_sym_Scenario_COLON] = ACTIONS(289),
    [anon_sym_And] = ACTIONS(289),
    [anon_sym_Given] = ACTIONS(289),
    [anon_sym_Then] = ACTIONS(289),
    [anon_sym_DOT] = ACTIONS(289),
  },
  [103] = {
    [ts_builtin_sym_end] = ACTIONS(291),
    [sym_tag] = ACTIONS(291),
    [anon_sym_Scenario_COLON] = ACTIONS(291),
    [anon_sym_And] = ACTIONS(291),
    [anon_sym_Given] = ACTIONS(291),
    [anon_sym_Then] = ACTIONS(291),
    [anon_sym_DOT] = ACTIONS(291),
  },
  [104] = {
    [sym_language_ID] = STATE(57),
    [sym_infer_sentence] = STATE(148),
    [sym_definition] = STATE(103),
    [sym_universal] = STATE(103),
    [sym_universal_positive] = STATE(63),
    [sym_a] = STATE(64),
    [sym_every] = STATE(65),
    [sym_universal_negative] = STATE(63),
    [sym_no] = STATE(66),
    [sym_qname_list] = STATE(67),
    [sym_fact] = STATE(103),
    [sym_instance] = STATE(68),
    [sym_relation] = STATE(68),
    [sym_equation] = STATE(68),
    [sym_different] = STATE(68),
    [sym_source] = STATE(103),
    [sym_pos_class] = STATE(69),
    [sym_class_name] = STATE(70),
    [sym_indiv_name] = STATE(71),
    [sym_an] = STATE(64),
    [anon_sym_PERCENTOWL] = ACTIONS(74),
    [anon_sym_PERCENTCommonLogic] = ACTIONS(74),
    [anon_sym_a] = ACTIONS(78),
    [anon_sym_every] = ACTIONS(80),
    [anon_sym_no] = ACTIONS(82),
    [sym_qname] = ACTIONS(84),
    [anon_sym_an] = ACTIONS(90),
  },
  [105] = {
    [ts_builtin_sym_end] = ACTIONS(293),
    [sym_tag] = ACTIONS(293),
    [anon_sym_Scenario_COLON] = ACTIONS(293),
    [anon_sym_And] = ACTIONS(293),
    [anon_sym_Given] = ACTIONS(293),
    [anon_sym_Then] = ACTIONS(293),
  },
  [106] = {
    [ts_builtin_sym_end] = ACTIONS(155),
    [sym_tag] = ACTIONS(155),
    [anon_sym_Scenario_COLON] = ACTIONS(155),
    [anon_sym_are] = ACTIONS(295),
    [anon_sym_arent] = ACTIONS(155),
    [anon_sym_aren_SQUOTEt] = ACTIONS(155),
    [anon_sym_arenot] = ACTIONS(155),
    [anon_sym_And] = ACTIONS(155),
    [anon_sym_Given] = ACTIONS(155),
    [anon_sym_Then] = ACTIONS(155),
    [sym_is_defined_as] = ACTIONS(155),
    [anon_sym_DOT] = ACTIONS(155),
    [anon_sym_that] = ACTIONS(155),
    [anon_sym_and] = ACTIONS(155),
    [anon_sym_nor] = ACTIONS(155),
    [anon_sym_or] = ACTIONS(155),
    [anon_sym_COMMA] = ACTIONS(155),
    [anon_sym_who] = ACTIONS(155),
    [anon_sym_which] = ACTIONS(155),
  },
  [107] = {
    [ts_builtin_sym_end] = ACTIONS(297),
    [sym_tag] = ACTIONS(297),
    [anon_sym_Scenario_COLON] = ACTIONS(297),
    [anon_sym_And] = ACTIONS(297),
    [anon_sym_Given] = ACTIONS(297),
    [anon_sym_Then] = ACTIONS(297),
    [sym_is_defined_as] = ACTIONS(297),
    [anon_sym_DOT] = ACTIONS(297),
    [anon_sym_that] = ACTIONS(297),
    [anon_sym_and] = ACTIONS(297),
    [anon_sym_nor] = ACTIONS(297),
    [anon_sym_or] = ACTIONS(297),
    [anon_sym_COMMA] = ACTIONS(297),
    [anon_sym_who] = ACTIONS(297),
    [anon_sym_which] = ACTIONS(297),
  },
  [108] = {
    [anon_sym_is] = ACTIONS(155),
  },
  [109] = {
    [sym_is] = STATE(150),
    [anon_sym_is] = ACTIONS(299),
  },
  [110] = {
    [sym_is] = STATE(151),
    [anon_sym_is] = ACTIONS(301),
  },
  [111] = {
    [sym_space] = ACTIONS(303),
  },
  [112] = {
    [sym_disjoint] = ACTIONS(305),
    [sym_different_KW] = ACTIONS(307),
  },
  [113] = {
    [sym_a] = STATE(64),
    [sym_class_expression] = STATE(157),
    [sym_pos_class] = STATE(158),
    [sym_class_atom] = STATE(159),
    [sym_conjunction] = STATE(160),
    [sym_disjunction] = STATE(160),
    [sym_qualified_class] = STATE(160),
    [sym_class_name] = STATE(161),
    [sym_neither] = STATE(162),
    [sym_an] = STATE(64),
    [sym_not] = STATE(163),
    [anon_sym_a] = ACTIONS(78),
    [sym_qname] = ACTIONS(309),
    [anon_sym_neither] = ACTIONS(311),
    [anon_sym_an] = ACTIONS(90),
    [anon_sym_not] = ACTIONS(313),
  },
  [114] = {
    [sym_space] = ACTIONS(315),
  },
  [115] = {
    [sym_space] = ACTIONS(317),
  },
  [116] = {
    [sym_indiv_name] = STATE(167),
    [sym_qname] = ACTIONS(319),
  },
  [117] = {
    [sym_a] = STATE(64),
    [sym_class_expression] = STATE(168),
    [sym_pos_class] = STATE(158),
    [sym_class_atom] = STATE(159),
    [sym_conjunction] = STATE(160),
    [sym_disjunction] = STATE(160),
    [sym_qualified_class] = STATE(160),
    [sym_class_name] = STATE(161),
    [sym_neither] = STATE(162),
    [sym_an] = STATE(64),
    [sym_not] = STATE(163),
    [anon_sym_a] = ACTIONS(78),
    [sym_qname] = ACTIONS(309),
    [anon_sym_neither] = ACTIONS(311),
    [anon_sym_an] = ACTIONS(90),
    [anon_sym_not] = ACTIONS(313),
  },
  [118] = {
    [sym_space] = ACTIONS(321),
  },
  [119] = {
    [sym_space] = ACTIONS(323),
  },
  [120] = {
    [sym_space] = ACTIONS(325),
  },
  [121] = {
    [sym_space] = ACTIONS(327),
  },
  [122] = {
    [sym_space] = ACTIONS(329),
  },
  [123] = {
    [sym_space] = ACTIONS(331),
  },
  [124] = {
    [sym_indiv_name] = STATE(175),
    [sym_qname] = ACTIONS(319),
  },
  [125] = {
    [sym_predicate_name] = STATE(177),
    [sym_qname] = ACTIONS(333),
  },
  [126] = {
    [sym_qname] = ACTIONS(335),
  },
  [127] = {
    [sym_as] = STATE(179),
    [anon_sym_as] = ACTIONS(337),
  },
  [128] = {
    [sym_a] = STATE(182),
    [sym_class_expression] = STATE(183),
    [sym_pos_class] = STATE(158),
    [sym_class_atom] = STATE(159),
    [sym_conjunction] = STATE(160),
    [sym_disjunction] = STATE(160),
    [sym_qualified_class] = STATE(160),
    [sym_class_name] = STATE(161),
    [sym_predicate_fragement] = STATE(184),
    [sym_neither] = STATE(162),
    [sym_the] = STATE(185),
    [sym_an] = STATE(182),
    [sym_not] = STATE(163),
    [anon_sym_a] = ACTIONS(78),
    [sym_qname] = ACTIONS(339),
    [anon_sym_neither] = ACTIONS(311),
    [anon_sym_the] = ACTIONS(341),
    [anon_sym_an] = ACTIONS(90),
    [anon_sym_not] = ACTIONS(313),
  },
  [129] = {
    [sym_space] = ACTIONS(343),
  },
  [130] = {
    [sym_are] = STATE(189),
    [sym_arenot1] = STATE(189),
    [anon_sym_are] = ACTIONS(345),
    [anon_sym_arent] = ACTIONS(347),
    [anon_sym_aren_SQUOTEt] = ACTIONS(347),
    [anon_sym_arenot] = ACTIONS(347),
  },
  [131] = {
    [sym_dot] = STATE(190),
    [ts_builtin_sym_end] = ACTIONS(293),
    [sym_tag] = ACTIONS(293),
    [anon_sym_Scenario_COLON] = ACTIONS(293),
    [anon_sym_And] = ACTIONS(293),
    [anon_sym_Given] = ACTIONS(293),
    [anon_sym_Then] = ACTIONS(293),
    [anon_sym_DOT] = ACTIONS(179),
  },
  [132] = {
    [sym_language_ID] = STATE(57),
    [sym_infer_sentence] = STATE(148),
    [sym_definition] = STATE(103),
    [sym_universal] = STATE(103),
    [sym_universal_positive] = STATE(63),
    [sym_a] = STATE(64),
    [sym_every] = STATE(65),
    [sym_universal_negative] = STATE(63),
    [sym_no] = STATE(66),
    [sym_qname_list] = STATE(67),
    [sym_fact] = STATE(103),
    [sym_instance] = STATE(68),
    [sym_relation] = STATE(68),
    [sym_equation] = STATE(68),
    [sym_different] = STATE(68),
    [sym_source] = STATE(103),
    [sym_pos_class] = STATE(69),
    [sym_class_name] = STATE(70),
    [sym_indiv_name] = STATE(71),
    [sym_an] = STATE(64),
    [sym_that] = STATE(191),
    [anon_sym_PERCENTOWL] = ACTIONS(74),
    [anon_sym_PERCENTCommonLogic] = ACTIONS(74),
    [anon_sym_a] = ACTIONS(78),
    [anon_sym_every] = ACTIONS(80),
    [anon_sym_no] = ACTIONS(82),
    [sym_qname] = ACTIONS(84),
    [anon_sym_that] = ACTIONS(181),
    [anon_sym_an] = ACTIONS(90),
  },
  [133] = {
    [ts_builtin_sym_end] = ACTIONS(349),
    [anon_sym_Background_COLON] = ACTIONS(349),
    [sym_tag] = ACTIONS(349),
    [anon_sym_Scenario_COLON] = ACTIONS(349),
  },
  [134] = {
    [ts_builtin_sym_end] = ACTIONS(351),
    [sym_tag] = ACTIONS(351),
    [anon_sym_Scenario_COLON] = ACTIONS(351),
    [anon_sym_And] = ACTIONS(351),
    [anon_sym_Given] = ACTIONS(351),
    [anon_sym_Then] = ACTIONS(351),
    [sym_asterisk] = ACTIONS(351),
  },
  [135] = {
    [sym_uriref] = ACTIONS(353),
  },
  [136] = {
    [ts_builtin_sym_end] = ACTIONS(355),
    [sym_tag] = ACTIONS(355),
    [anon_sym_Scenario_COLON] = ACTIONS(355),
    [sym_asterisk] = ACTIONS(355),
  },
  [137] = {
    [anon_sym_Language] = ACTIONS(56),
  },
  [138] = {
    [anon_sym_And] = ACTIONS(357),
    [anon_sym_Given] = ACTIONS(357),
    [anon_sym_Then] = ACTIONS(357),
  },
  [139] = {
    [aux_sym_narrative_repeat1] = STATE(139),
    [aux_sym_SLASH_BSLASHS_SLASH] = ACTIONS(359),
    [anon_sym_And] = ACTIONS(234),
    [anon_sym_Given] = ACTIONS(234),
    [anon_sym_Then] = ACTIONS(234),
    [sym_asterisk] = ACTIONS(234),
  },
  [140] = {
    [sym_qname] = ACTIONS(362),
  },
  [141] = {
    [sym_qname] = ACTIONS(364),
  },
  [142] = {
    [ts_builtin_sym_end] = ACTIONS(366),
    [sym_tag] = ACTIONS(366),
    [anon_sym_Scenario_COLON] = ACTIONS(366),
    [anon_sym_And] = ACTIONS(366),
    [anon_sym_Given] = ACTIONS(366),
    [anon_sym_Then] = ACTIONS(366),
    [anon_sym_DOT] = ACTIONS(366),
  },
  [143] = {
    [anon_sym_are] = ACTIONS(368),
    [anon_sym_and] = ACTIONS(368),
  },
  [144] = {
    [sym_and] = STATE(91),
    [aux_sym_qname_list_repeat1] = STATE(144),
    [anon_sym_are] = ACTIONS(368),
    [anon_sym_and] = ACTIONS(370),
  },
  [145] = {
    [sym_delimiter] = ACTIONS(373),
  },
  [146] = {
    [aux_sym_source_body_repeat1] = STATE(194),
    [aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_SLASH] = ACTIONS(375),
    [aux_sym_SLASH_DQUOTE_LBRACK_CARET_DQUOTE_RBRACK_SLASH] = ACTIONS(377),
    [aux_sym_SLASH_DQUOTE_DQUOTE_LBRACK_CARET_DQUOTE_RBRACK_SLASH] = ACTIONS(377),
    [sym_delimiter] = ACTIONS(379),
  },
  [147] = {
    [anon_sym_PERCENTOWL] = ACTIONS(269),
    [anon_sym_PERCENTCommonLogic] = ACTIONS(269),
    [anon_sym_a] = ACTIONS(269),
    [anon_sym_every] = ACTIONS(269),
    [anon_sym_no] = ACTIONS(269),
    [sym_qname] = ACTIONS(269),
    [anon_sym_an] = ACTIONS(269),
  },
  [148] = {
    [ts_builtin_sym_end] = ACTIONS(381),
    [sym_tag] = ACTIONS(381),
    [anon_sym_Scenario_COLON] = ACTIONS(381),
    [anon_sym_And] = ACTIONS(381),
    [anon_sym_Given] = ACTIONS(381),
    [anon_sym_Then] = ACTIONS(381),
    [anon_sym_DOT] = ACTIONS(381),
  },
  [149] = {
    [sym_space] = ACTIONS(383),
  },
  [150] = {
    [sym_a] = STATE(64),
    [sym_class_expression] = STATE(196),
    [sym_pos_class] = STATE(158),
    [sym_class_atom] = STATE(159),
    [sym_conjunction] = STATE(160),
    [sym_disjunction] = STATE(160),
    [sym_qualified_class] = STATE(160),
    [sym_class_name] = STATE(161),
    [sym_neither] = STATE(162),
    [sym_an] = STATE(64),
    [sym_not] = STATE(163),
    [anon_sym_a] = ACTIONS(78),
    [sym_qname] = ACTIONS(309),
    [anon_sym_neither] = ACTIONS(311),
    [anon_sym_an] = ACTIONS(90),
    [anon_sym_not] = ACTIONS(313),
  },
  [151] = {
    [sym_a] = STATE(198),
    [anon_sym_a] = ACTIONS(385),
  },
  [152] = {
    [sym_disjoint] = ACTIONS(387),
    [sym_different_KW] = ACTIONS(387),
  },
  [153] = {
    [ts_builtin_sym_end] = ACTIONS(389),
    [sym_tag] = ACTIONS(389),
    [anon_sym_Scenario_COLON] = ACTIONS(389),
    [anon_sym_And] = ACTIONS(389),
    [anon_sym_Given] = ACTIONS(389),
    [anon_sym_Then] = ACTIONS(389),
    [anon_sym_DOT] = ACTIONS(389),
  },
  [154] = {
    [ts_builtin_sym_end] = ACTIONS(391),
    [sym_tag] = ACTIONS(391),
    [anon_sym_Scenario_COLON] = ACTIONS(391),
    [anon_sym_And] = ACTIONS(391),
    [anon_sym_Given] = ACTIONS(391),
    [anon_sym_Then] = ACTIONS(391),
    [anon_sym_DOT] = ACTIONS(391),
  },
  [155] = {
    [sym_space] = ACTIONS(393),
  },
  [156] = {
    [sym_space] = ACTIONS(395),
  },
  [157] = {
    [ts_builtin_sym_end] = ACTIONS(397),
    [sym_tag] = ACTIONS(397),
    [anon_sym_Scenario_COLON] = ACTIONS(397),
    [anon_sym_And] = ACTIONS(397),
    [anon_sym_Given] = ACTIONS(397),
    [anon_sym_Then] = ACTIONS(397),
    [anon_sym_DOT] = ACTIONS(397),
  },
  [158] = {
    [sym_and] = STATE(204),
    [sym_comma] = STATE(205),
    [sym_pronoun] = STATE(206),
    [aux_sym_conjunction_repeat1] = STATE(207),
    [ts_builtin_sym_end] = ACTIONS(399),
    [sym_tag] = ACTIONS(399),
    [anon_sym_Scenario_COLON] = ACTIONS(399),
    [anon_sym_And] = ACTIONS(399),
    [anon_sym_Given] = ACTIONS(399),
    [anon_sym_Then] = ACTIONS(399),
    [anon_sym_DOT] = ACTIONS(399),
    [anon_sym_that] = ACTIONS(401),
    [anon_sym_and] = ACTIONS(403),
    [anon_sym_or] = ACTIONS(399),
    [anon_sym_COMMA] = ACTIONS(405),
    [anon_sym_who] = ACTIONS(401),
    [anon_sym_which] = ACTIONS(401),
  },
  [159] = {
    [sym_or] = STATE(209),
    [aux_sym_disjunction_repeat1] = STATE(210),
    [ts_builtin_sym_end] = ACTIONS(407),
    [sym_tag] = ACTIONS(407),
    [anon_sym_Scenario_COLON] = ACTIONS(407),
    [anon_sym_And] = ACTIONS(407),
    [anon_sym_Given] = ACTIONS(407),
    [anon_sym_Then] = ACTIONS(407),
    [anon_sym_DOT] = ACTIONS(407),
    [anon_sym_or] = ACTIONS(409),
  },
  [160] = {
    [ts_builtin_sym_end] = ACTIONS(407),
    [sym_tag] = ACTIONS(407),
    [anon_sym_Scenario_COLON] = ACTIONS(407),
    [anon_sym_And] = ACTIONS(407),
    [anon_sym_Given] = ACTIONS(407),
    [anon_sym_Then] = ACTIONS(407),
    [anon_sym_DOT] = ACTIONS(407),
  },
  [161] = {
    [ts_builtin_sym_end] = ACTIONS(205),
    [sym_tag] = ACTIONS(205),
    [anon_sym_Scenario_COLON] = ACTIONS(205),
    [anon_sym_And] = ACTIONS(205),
    [anon_sym_Given] = ACTIONS(205),
    [anon_sym_Then] = ACTIONS(205),
    [anon_sym_DOT] = ACTIONS(205),
    [anon_sym_that] = ACTIONS(205),
    [anon_sym_and] = ACTIONS(205),
    [anon_sym_nor] = ACTIONS(205),
    [anon_sym_or] = ACTIONS(205),
    [anon_sym_COMMA] = ACTIONS(205),
    [anon_sym_who] = ACTIONS(205),
    [anon_sym_which] = ACTIONS(205),
  },
  [162] = {
    [sym_a] = STATE(64),
    [sym_pos_class] = STATE(211),
    [sym_class_name] = STATE(161),
    [sym_an] = STATE(64),
    [anon_sym_a] = ACTIONS(78),
    [sym_qname] = ACTIONS(309),
    [anon_sym_an] = ACTIONS(90),
  },
  [163] = {
    [sym_a] = STATE(64),
    [sym_pos_class] = STATE(212),
    [sym_class_name] = STATE(161),
    [sym_an] = STATE(64),
    [anon_sym_a] = ACTIONS(78),
    [sym_qname] = ACTIONS(309),
    [anon_sym_an] = ACTIONS(90),
  },
  [164] = {
    [sym_qname] = ACTIONS(411),
  },
  [165] = {
    [anon_sym_a] = ACTIONS(413),
    [sym_qname] = ACTIONS(413),
    [anon_sym_neither] = ACTIONS(413),
    [anon_sym_an] = ACTIONS(413),
    [anon_sym_not] = ACTIONS(413),
  },
  [166] = {
    [ts_builtin_sym_end] = ACTIONS(163),
    [sym_tag] = ACTIONS(163),
    [anon_sym_Scenario_COLON] = ACTIONS(163),
    [anon_sym_And] = ACTIONS(163),
    [anon_sym_Given] = ACTIONS(163),
    [anon_sym_Then] = ACTIONS(163),
    [anon_sym_DOT] = ACTIONS(163),
    [anon_sym_and] = ACTIONS(163),
  },
  [167] = {
    [sym_and] = STATE(213),
    [aux_sym_definition_repeat1] = STATE(214),
    [ts_builtin_sym_end] = ACTIONS(397),
    [sym_tag] = ACTIONS(397),
    [anon_sym_Scenario_COLON] = ACTIONS(397),
    [anon_sym_And] = ACTIONS(397),
    [anon_sym_Given] = ACTIONS(397),
    [anon_sym_Then] = ACTIONS(397),
    [anon_sym_DOT] = ACTIONS(397),
    [anon_sym_and] = ACTIONS(159),
  },
  [168] = {
    [ts_builtin_sym_end] = ACTIONS(415),
    [sym_tag] = ACTIONS(415),
    [anon_sym_Scenario_COLON] = ACTIONS(415),
    [anon_sym_And] = ACTIONS(415),
    [anon_sym_Given] = ACTIONS(415),
    [anon_sym_Then] = ACTIONS(415),
    [anon_sym_DOT] = ACTIONS(415),
  },
  [169] = {
    [sym_qname] = ACTIONS(417),
  },
  [170] = {
    [anon_sym_as] = ACTIONS(419),
  },
  [171] = {
    [anon_sym_a] = ACTIONS(421),
    [sym_qname] = ACTIONS(421),
    [anon_sym_neither] = ACTIONS(421),
    [anon_sym_the] = ACTIONS(421),
    [anon_sym_an] = ACTIONS(421),
    [anon_sym_not] = ACTIONS(421),
  },
  [172] = {
    [sym_qname] = ACTIONS(423),
  },
  [173] = {
    [anon_sym_as] = ACTIONS(425),
  },
  [174] = {
    [anon_sym_a] = ACTIONS(427),
    [sym_qname] = ACTIONS(427),
    [anon_sym_neither] = ACTIONS(427),
    [anon_sym_the] = ACTIONS(427),
    [anon_sym_an] = ACTIONS(427),
    [anon_sym_not] = ACTIONS(427),
  },
  [175] = {
    [ts_builtin_sym_end] = ACTIONS(429),
    [sym_tag] = ACTIONS(429),
    [anon_sym_Scenario_COLON] = ACTIONS(429),
    [anon_sym_And] = ACTIONS(429),
    [anon_sym_Given] = ACTIONS(429),
    [anon_sym_Then] = ACTIONS(429),
    [anon_sym_DOT] = ACTIONS(429),
  },
  [176] = {
    [sym_qname] = ACTIONS(431),
  },
  [177] = {
    [sym_qname] = ACTIONS(433),
  },
  [178] = {
    [sym_space] = ACTIONS(435),
  },
  [179] = {
    [sym_qname] = ACTIONS(437),
  },
  [180] = {
    [ts_builtin_sym_end] = ACTIONS(155),
    [sym_tag] = ACTIONS(155),
    [anon_sym_Scenario_COLON] = ACTIONS(155),
    [anon_sym_of] = ACTIONS(439),
    [anon_sym_than] = ACTIONS(439),
    [anon_sym_to] = ACTIONS(439),
    [anon_sym_on] = ACTIONS(439),
    [anon_sym_in] = ACTIONS(439),
    [anon_sym_And] = ACTIONS(155),
    [anon_sym_Given] = ACTIONS(155),
    [anon_sym_Then] = ACTIONS(155),
    [anon_sym_DOT] = ACTIONS(155),
    [anon_sym_that] = ACTIONS(155),
    [anon_sym_and] = ACTIONS(155),
    [anon_sym_or] = ACTIONS(155),
    [anon_sym_COMMA] = ACTIONS(155),
    [anon_sym_who] = ACTIONS(155),
    [anon_sym_which] = ACTIONS(155),
  },
  [181] = {
    [sym_space] = ACTIONS(441),
  },
  [182] = {
    [sym_class_name] = STATE(107),
    [sym_predicate_fragement] = STATE(217),
    [sym_qname] = ACTIONS(443),
  },
  [183] = {
    [ts_builtin_sym_end] = ACTIONS(445),
    [sym_tag] = ACTIONS(445),
    [anon_sym_Scenario_COLON] = ACTIONS(445),
    [anon_sym_And] = ACTIONS(445),
    [anon_sym_Given] = ACTIONS(445),
    [anon_sym_Then] = ACTIONS(445),
    [anon_sym_DOT] = ACTIONS(445),
  },
  [184] = {
    [sym_predicate_end] = STATE(219),
    [anon_sym_of] = ACTIONS(447),
    [anon_sym_than] = ACTIONS(447),
    [anon_sym_to] = ACTIONS(447),
    [anon_sym_on] = ACTIONS(447),
    [anon_sym_in] = ACTIONS(447),
  },
  [185] = {
    [sym_predicate_fragement] = STATE(217),
    [sym_qname] = ACTIONS(449),
  },
  [186] = {
    [sym_is] = STATE(222),
    [anon_sym_is] = ACTIONS(451),
  },
  [187] = {
    [sym_space] = ACTIONS(453),
  },
  [188] = {
    [sym_space] = ACTIONS(455),
  },
  [189] = {
    [sym_a] = STATE(64),
    [sym_class_expression] = STATE(225),
    [sym_pos_class] = STATE(158),
    [sym_class_atom] = STATE(159),
    [sym_conjunction] = STATE(160),
    [sym_disjunction] = STATE(160),
    [sym_qualified_class] = STATE(160),
    [sym_class_name] = STATE(161),
    [sym_neither] = STATE(162),
    [sym_an] = STATE(64),
    [sym_not] = STATE(163),
    [anon_sym_a] = ACTIONS(78),
    [sym_qname] = ACTIONS(309),
    [anon_sym_neither] = ACTIONS(311),
    [anon_sym_an] = ACTIONS(90),
    [anon_sym_not] = ACTIONS(313),
  },
  [190] = {
    [ts_builtin_sym_end] = ACTIONS(457),
    [sym_tag] = ACTIONS(457),
    [anon_sym_Scenario_COLON] = ACTIONS(457),
    [anon_sym_And] = ACTIONS(457),
    [anon_sym_Given] = ACTIONS(457),
    [anon_sym_Then] = ACTIONS(457),
  },
  [191] = {
    [sym_language_ID] = STATE(57),
    [sym_infer_sentence] = STATE(226),
    [sym_definition] = STATE(103),
    [sym_universal] = STATE(103),
    [sym_universal_positive] = STATE(63),
    [sym_a] = STATE(64),
    [sym_every] = STATE(65),
    [sym_universal_negative] = STATE(63),
    [sym_no] = STATE(66),
    [sym_qname_list] = STATE(67),
    [sym_fact] = STATE(103),
    [sym_instance] = STATE(68),
    [sym_relation] = STATE(68),
    [sym_equation] = STATE(68),
    [sym_different] = STATE(68),
    [sym_source] = STATE(103),
    [sym_pos_class] = STATE(69),
    [sym_class_name] = STATE(70),
    [sym_indiv_name] = STATE(71),
    [sym_an] = STATE(64),
    [anon_sym_PERCENTOWL] = ACTIONS(74),
    [anon_sym_PERCENTCommonLogic] = ACTIONS(74),
    [anon_sym_a] = ACTIONS(78),
    [anon_sym_every] = ACTIONS(80),
    [anon_sym_no] = ACTIONS(82),
    [sym_qname] = ACTIONS(84),
    [anon_sym_an] = ACTIONS(90),
  },
  [192] = {
    [ts_builtin_sym_end] = ACTIONS(459),
    [sym_tag] = ACTIONS(459),
    [anon_sym_Scenario_COLON] = ACTIONS(459),
    [sym_asterisk] = ACTIONS(459),
  },
  [193] = {
    [ts_builtin_sym_end] = ACTIONS(461),
    [sym_tag] = ACTIONS(461),
    [anon_sym_Scenario_COLON] = ACTIONS(461),
    [anon_sym_And] = ACTIONS(461),
    [anon_sym_Given] = ACTIONS(461),
    [anon_sym_Then] = ACTIONS(461),
    [anon_sym_DOT] = ACTIONS(461),
  },
  [194] = {
    [aux_sym_source_body_repeat1] = STATE(194),
    [aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_SLASH] = ACTIONS(463),
    [aux_sym_SLASH_DQUOTE_LBRACK_CARET_DQUOTE_RBRACK_SLASH] = ACTIONS(466),
    [aux_sym_SLASH_DQUOTE_DQUOTE_LBRACK_CARET_DQUOTE_RBRACK_SLASH] = ACTIONS(466),
    [sym_delimiter] = ACTIONS(469),
  },
  [195] = {
    [anon_sym_a] = ACTIONS(421),
    [sym_qname] = ACTIONS(421),
    [anon_sym_neither] = ACTIONS(421),
    [anon_sym_an] = ACTIONS(421),
    [anon_sym_not] = ACTIONS(421),
  },
  [196] = {
    [ts_builtin_sym_end] = ACTIONS(471),
    [sym_tag] = ACTIONS(471),
    [anon_sym_Scenario_COLON] = ACTIONS(471),
    [anon_sym_And] = ACTIONS(471),
    [anon_sym_Given] = ACTIONS(471),
    [anon_sym_Then] = ACTIONS(471),
    [anon_sym_DOT] = ACTIONS(471),
  },
  [197] = {
    [sym_space] = ACTIONS(473),
  },
  [198] = {
    [sym_a] = STATE(64),
    [sym_class_expression] = STATE(228),
    [sym_pos_class] = STATE(158),
    [sym_class_atom] = STATE(159),
    [sym_conjunction] = STATE(160),
    [sym_disjunction] = STATE(160),
    [sym_qualified_class] = STATE(160),
    [sym_class_name] = STATE(161),
    [sym_neither] = STATE(162),
    [sym_an] = STATE(64),
    [sym_not] = STATE(163),
    [anon_sym_a] = ACTIONS(78),
    [sym_qname] = ACTIONS(309),
    [anon_sym_neither] = ACTIONS(311),
    [anon_sym_an] = ACTIONS(90),
    [anon_sym_not] = ACTIONS(313),
  },
  [199] = {
    [anon_sym_a] = ACTIONS(475),
    [sym_qname] = ACTIONS(475),
    [anon_sym_an] = ACTIONS(475),
  },
  [200] = {
    [anon_sym_a] = ACTIONS(477),
    [sym_qname] = ACTIONS(477),
    [anon_sym_an] = ACTIONS(477),
  },
  [201] = {
    [sym_space] = ACTIONS(479),
  },
  [202] = {
    [sym_space] = ACTIONS(481),
  },
  [203] = {
    [sym_space] = ACTIONS(483),
  },
  [204] = {
    [sym_a] = STATE(64),
    [sym_pos_class] = STATE(232),
    [sym_class_atom] = STATE(233),
    [sym_class_name] = STATE(161),
    [sym_an] = STATE(64),
    [sym_not] = STATE(163),
    [anon_sym_a] = ACTIONS(78),
    [sym_qname] = ACTIONS(309),
    [anon_sym_an] = ACTIONS(90),
    [anon_sym_not] = ACTIONS(313),
  },
  [205] = {
    [sym_pronoun] = STATE(234),
    [anon_sym_that] = ACTIONS(401),
    [anon_sym_who] = ACTIONS(401),
    [anon_sym_which] = ACTIONS(401),
  },
  [206] = {
    [sym_qualifier] = STATE(236),
    [sym_predicate_phrase] = STATE(237),
    [sym_predicate_open] = STATE(238),
    [sym_does] = STATE(126),
    [sym_has] = STATE(127),
    [sym_is] = STATE(239),
    [sym_doesnot1] = STATE(126),
    [sym_hasnot1] = STATE(127),
    [sym_isnot1] = STATE(240),
    [anon_sym_does] = ACTIONS(207),
    [anon_sym_has] = ACTIONS(209),
    [anon_sym_is] = ACTIONS(211),
    [anon_sym_doesnt] = ACTIONS(213),
    [anon_sym_doesn_SQUOTEt] = ACTIONS(213),
    [anon_sym_doesnot] = ACTIONS(213),
    [anon_sym_hasnt] = ACTIONS(215),
    [anon_sym_hasn_SQUOTEt] = ACTIONS(215),
    [anon_sym_hasnot] = ACTIONS(215),
    [anon_sym_isnt] = ACTIONS(485),
    [anon_sym_isn_SQUOTEt] = ACTIONS(485),
    [anon_sym_isnot] = ACTIONS(485),
  },
  [207] = {
    [sym_and] = STATE(204),
    [aux_sym_conjunction_repeat1] = STATE(241),
    [ts_builtin_sym_end] = ACTIONS(487),
    [sym_tag] = ACTIONS(487),
    [anon_sym_Scenario_COLON] = ACTIONS(487),
    [anon_sym_And] = ACTIONS(487),
    [anon_sym_Given] = ACTIONS(487),
    [anon_sym_Then] = ACTIONS(487),
    [anon_sym_DOT] = ACTIONS(487),
    [anon_sym_and] = ACTIONS(403),
  },
  [208] = {
    [sym_space] = ACTIONS(489),
  },
  [209] = {
    [sym_a] = STATE(64),
    [sym_pos_class] = STATE(232),
    [sym_class_atom] = STATE(243),
    [sym_class_name] = STATE(161),
    [sym_an] = STATE(64),
    [sym_not] = STATE(163),
    [anon_sym_a] = ACTIONS(78),
    [sym_qname] = ACTIONS(309),
    [anon_sym_an] = ACTIONS(90),
    [anon_sym_not] = ACTIONS(313),
  },
  [210] = {
    [sym_or] = STATE(209),
    [aux_sym_disjunction_repeat1] = STATE(244),
    [ts_builtin_sym_end] = ACTIONS(491),
    [sym_tag] = ACTIONS(491),
    [anon_sym_Scenario_COLON] = ACTIONS(491),
    [anon_sym_And] = ACTIONS(491),
    [anon_sym_Given] = ACTIONS(491),
    [anon_sym_Then] = ACTIONS(491),
    [anon_sym_DOT] = ACTIONS(491),
    [anon_sym_or] = ACTIONS(409),
  },
  [211] = {
    [sym_nor] = STATE(246),
    [aux_sym_conjunction_repeat2] = STATE(247),
    [anon_sym_nor] = ACTIONS(493),
  },
  [212] = {
    [ts_builtin_sym_end] = ACTIONS(495),
    [sym_tag] = ACTIONS(495),
    [anon_sym_Scenario_COLON] = ACTIONS(495),
    [anon_sym_And] = ACTIONS(495),
    [anon_sym_Given] = ACTIONS(495),
    [anon_sym_Then] = ACTIONS(495),
    [anon_sym_DOT] = ACTIONS(495),
    [anon_sym_and] = ACTIONS(495),
    [anon_sym_or] = ACTIONS(495),
  },
  [213] = {
    [sym_indiv_name] = STATE(248),
    [sym_qname] = ACTIONS(319),
  },
  [214] = {
    [sym_and] = STATE(213),
    [aux_sym_definition_repeat1] = STATE(249),
    [ts_builtin_sym_end] = ACTIONS(497),
    [sym_tag] = ACTIONS(497),
    [anon_sym_Scenario_COLON] = ACTIONS(497),
    [anon_sym_And] = ACTIONS(497),
    [anon_sym_Given] = ACTIONS(497),
    [anon_sym_Then] = ACTIONS(497),
    [anon_sym_DOT] = ACTIONS(497),
    [anon_sym_and] = ACTIONS(159),
  },
  [215] = {
    [sym_qname] = ACTIONS(499),
  },
  [216] = {
    [sym_qname] = ACTIONS(271),
  },
  [217] = {
    [sym_predicate_end] = STATE(250),
    [anon_sym_of] = ACTIONS(447),
    [anon_sym_than] = ACTIONS(447),
    [anon_sym_to] = ACTIONS(447),
    [anon_sym_on] = ACTIONS(447),
    [anon_sym_in] = ACTIONS(447),
  },
  [218] = {
    [sym_space] = ACTIONS(501),
  },
  [219] = {
    [sym_qname] = ACTIONS(503),
  },
  [220] = {
    [anon_sym_of] = ACTIONS(439),
    [anon_sym_than] = ACTIONS(439),
    [anon_sym_to] = ACTIONS(439),
    [anon_sym_on] = ACTIONS(439),
    [anon_sym_in] = ACTIONS(439),
  },
  [221] = {
    [sym_space] = ACTIONS(505),
  },
  [222] = {
    [sym_consistency] = STATE(254),
    [anon_sym_consistent] = ACTIONS(507),
    [anon_sym_inconsistent] = ACTIONS(507),
  },
  [223] = {
    [anon_sym_a] = ACTIONS(509),
    [sym_qname] = ACTIONS(509),
    [anon_sym_neither] = ACTIONS(509),
    [anon_sym_an] = ACTIONS(509),
    [anon_sym_not] = ACTIONS(509),
  },
  [224] = {
    [anon_sym_a] = ACTIONS(511),
    [sym_qname] = ACTIONS(511),
    [anon_sym_neither] = ACTIONS(511),
    [anon_sym_an] = ACTIONS(511),
    [anon_sym_not] = ACTIONS(511),
  },
  [225] = {
    [ts_builtin_sym_end] = ACTIONS(513),
    [sym_tag] = ACTIONS(513),
    [anon_sym_Scenario_COLON] = ACTIONS(513),
    [anon_sym_And] = ACTIONS(513),
    [anon_sym_Given] = ACTIONS(513),
    [anon_sym_Then] = ACTIONS(513),
    [anon_sym_DOT] = ACTIONS(513),
  },
  [226] = {
    [ts_builtin_sym_end] = ACTIONS(515),
    [sym_tag] = ACTIONS(515),
    [anon_sym_Scenario_COLON] = ACTIONS(515),
    [anon_sym_And] = ACTIONS(515),
    [anon_sym_Given] = ACTIONS(515),
    [anon_sym_Then] = ACTIONS(515),
    [anon_sym_DOT] = ACTIONS(515),
  },
  [227] = {
    [anon_sym_a] = ACTIONS(517),
    [sym_qname] = ACTIONS(517),
    [anon_sym_neither] = ACTIONS(517),
    [anon_sym_an] = ACTIONS(517),
    [anon_sym_not] = ACTIONS(517),
  },
  [228] = {
    [ts_builtin_sym_end] = ACTIONS(519),
    [sym_tag] = ACTIONS(519),
    [anon_sym_Scenario_COLON] = ACTIONS(519),
    [anon_sym_And] = ACTIONS(519),
    [anon_sym_Given] = ACTIONS(519),
    [anon_sym_Then] = ACTIONS(519),
    [anon_sym_DOT] = ACTIONS(519),
  },
  [229] = {
    [anon_sym_does] = ACTIONS(521),
    [anon_sym_has] = ACTIONS(521),
    [anon_sym_is] = ACTIONS(521),
    [anon_sym_doesnt] = ACTIONS(523),
    [anon_sym_doesn_SQUOTEt] = ACTIONS(523),
    [anon_sym_doesnot] = ACTIONS(523),
    [anon_sym_hasnt] = ACTIONS(523),
    [anon_sym_hasn_SQUOTEt] = ACTIONS(523),
    [anon_sym_hasnot] = ACTIONS(523),
    [anon_sym_isnt] = ACTIONS(523),
    [anon_sym_isn_SQUOTEt] = ACTIONS(523),
    [anon_sym_isnot] = ACTIONS(523),
  },
  [230] = {
    [anon_sym_a] = ACTIONS(525),
    [sym_qname] = ACTIONS(525),
    [anon_sym_an] = ACTIONS(525),
    [anon_sym_not] = ACTIONS(525),
  },
  [231] = {
    [anon_sym_that] = ACTIONS(527),
    [anon_sym_who] = ACTIONS(527),
    [anon_sym_which] = ACTIONS(527),
  },
  [232] = {
    [ts_builtin_sym_end] = ACTIONS(399),
    [sym_tag] = ACTIONS(399),
    [anon_sym_Scenario_COLON] = ACTIONS(399),
    [anon_sym_And] = ACTIONS(399),
    [anon_sym_Given] = ACTIONS(399),
    [anon_sym_Then] = ACTIONS(399),
    [anon_sym_DOT] = ACTIONS(399),
    [anon_sym_and] = ACTIONS(399),
    [anon_sym_or] = ACTIONS(399),
  },
  [233] = {
    [ts_builtin_sym_end] = ACTIONS(529),
    [sym_tag] = ACTIONS(529),
    [anon_sym_Scenario_COLON] = ACTIONS(529),
    [anon_sym_And] = ACTIONS(529),
    [anon_sym_Given] = ACTIONS(529),
    [anon_sym_Then] = ACTIONS(529),
    [anon_sym_DOT] = ACTIONS(529),
    [anon_sym_and] = ACTIONS(529),
  },
  [234] = {
    [sym_qualifier] = STATE(255),
    [sym_predicate_phrase] = STATE(237),
    [sym_predicate_open] = STATE(238),
    [sym_does] = STATE(126),
    [sym_has] = STATE(127),
    [sym_is] = STATE(239),
    [sym_doesnot1] = STATE(126),
    [sym_hasnot1] = STATE(127),
    [sym_isnot1] = STATE(240),
    [anon_sym_does] = ACTIONS(207),
    [anon_sym_has] = ACTIONS(209),
    [anon_sym_is] = ACTIONS(211),
    [anon_sym_doesnt] = ACTIONS(213),
    [anon_sym_doesn_SQUOTEt] = ACTIONS(213),
    [anon_sym_doesnot] = ACTIONS(213),
    [anon_sym_hasnt] = ACTIONS(215),
    [anon_sym_hasn_SQUOTEt] = ACTIONS(215),
    [anon_sym_hasnot] = ACTIONS(215),
    [anon_sym_isnt] = ACTIONS(485),
    [anon_sym_isn_SQUOTEt] = ACTIONS(485),
    [anon_sym_isnot] = ACTIONS(485),
  },
  [235] = {
    [sym_space] = ACTIONS(531),
  },
  [236] = {
    [ts_builtin_sym_end] = ACTIONS(533),
    [sym_tag] = ACTIONS(533),
    [anon_sym_Scenario_COLON] = ACTIONS(533),
    [anon_sym_And] = ACTIONS(533),
    [anon_sym_Given] = ACTIONS(533),
    [anon_sym_Then] = ACTIONS(533),
    [anon_sym_DOT] = ACTIONS(533),
  },
  [237] = {
    [sym_quantifier] = STATE(259),
    [sym_some] = STATE(260),
    [sym_only] = STATE(260),
    [anon_sym_some] = ACTIONS(535),
    [anon_sym_only] = ACTIONS(537),
  },
  [238] = {
    [sym_predicate_name] = STATE(262),
    [sym_qname] = ACTIONS(539),
  },
  [239] = {
    [sym_a] = STATE(263),
    [sym_class_expression] = STATE(264),
    [sym_pos_class] = STATE(158),
    [sym_class_atom] = STATE(159),
    [sym_conjunction] = STATE(160),
    [sym_disjunction] = STATE(160),
    [sym_qualified_class] = STATE(160),
    [sym_class_name] = STATE(161),
    [sym_predicate_fragement] = STATE(265),
    [sym_neither] = STATE(162),
    [sym_the] = STATE(266),
    [sym_an] = STATE(263),
    [sym_not] = STATE(163),
    [anon_sym_a] = ACTIONS(78),
    [sym_qname] = ACTIONS(339),
    [anon_sym_neither] = ACTIONS(311),
    [anon_sym_the] = ACTIONS(341),
    [anon_sym_an] = ACTIONS(90),
    [anon_sym_not] = ACTIONS(313),
  },
  [240] = {
    [sym_a] = STATE(266),
    [sym_predicate_fragement] = STATE(265),
    [sym_the] = STATE(266),
    [sym_an] = STATE(266),
    [anon_sym_a] = ACTIONS(78),
    [sym_qname] = ACTIONS(541),
    [anon_sym_the] = ACTIONS(341),
    [anon_sym_an] = ACTIONS(90),
  },
  [241] = {
    [sym_and] = STATE(204),
    [aux_sym_conjunction_repeat1] = STATE(241),
    [ts_builtin_sym_end] = ACTIONS(529),
    [sym_tag] = ACTIONS(529),
    [anon_sym_Scenario_COLON] = ACTIONS(529),
    [anon_sym_And] = ACTIONS(529),
    [anon_sym_Given] = ACTIONS(529),
    [anon_sym_Then] = ACTIONS(529),
    [anon_sym_DOT] = ACTIONS(529),
    [anon_sym_and] = ACTIONS(543),
  },
  [242] = {
    [anon_sym_a] = ACTIONS(546),
    [sym_qname] = ACTIONS(546),
    [anon_sym_an] = ACTIONS(546),
    [anon_sym_not] = ACTIONS(546),
  },
  [243] = {
    [ts_builtin_sym_end] = ACTIONS(548),
    [sym_tag] = ACTIONS(548),
    [anon_sym_Scenario_COLON] = ACTIONS(548),
    [anon_sym_And] = ACTIONS(548),
    [anon_sym_Given] = ACTIONS(548),
    [anon_sym_Then] = ACTIONS(548),
    [anon_sym_DOT] = ACTIONS(548),
    [anon_sym_or] = ACTIONS(548),
  },
  [244] = {
    [sym_or] = STATE(209),
    [aux_sym_disjunction_repeat1] = STATE(244),
    [ts_builtin_sym_end] = ACTIONS(548),
    [sym_tag] = ACTIONS(548),
    [anon_sym_Scenario_COLON] = ACTIONS(548),
    [anon_sym_And] = ACTIONS(548),
    [anon_sym_Given] = ACTIONS(548),
    [anon_sym_Then] = ACTIONS(548),
    [anon_sym_DOT] = ACTIONS(548),
    [anon_sym_or] = ACTIONS(550),
  },
  [245] = {
    [sym_space] = ACTIONS(553),
  },
  [246] = {
    [sym_a] = STATE(64),
    [sym_pos_class] = STATE(268),
    [sym_class_name] = STATE(161),
    [sym_an] = STATE(64),
    [anon_sym_a] = ACTIONS(78),
    [sym_qname] = ACTIONS(309),
    [anon_sym_an] = ACTIONS(90),
  },
  [247] = {
    [sym_nor] = STATE(246),
    [aux_sym_conjunction_repeat2] = STATE(269),
    [ts_builtin_sym_end] = ACTIONS(555),
    [sym_tag] = ACTIONS(555),
    [anon_sym_Scenario_COLON] = ACTIONS(555),
    [anon_sym_And] = ACTIONS(555),
    [anon_sym_Given] = ACTIONS(555),
    [anon_sym_Then] = ACTIONS(555),
    [anon_sym_DOT] = ACTIONS(555),
    [anon_sym_nor] = ACTIONS(493),
  },
  [248] = {
    [ts_builtin_sym_end] = ACTIONS(557),
    [sym_tag] = ACTIONS(557),
    [anon_sym_Scenario_COLON] = ACTIONS(557),
    [anon_sym_And] = ACTIONS(557),
    [anon_sym_Given] = ACTIONS(557),
    [anon_sym_Then] = ACTIONS(557),
    [anon_sym_DOT] = ACTIONS(557),
    [anon_sym_and] = ACTIONS(557),
  },
  [249] = {
    [sym_and] = STATE(213),
    [aux_sym_definition_repeat1] = STATE(249),
    [ts_builtin_sym_end] = ACTIONS(557),
    [sym_tag] = ACTIONS(557),
    [anon_sym_Scenario_COLON] = ACTIONS(557),
    [anon_sym_And] = ACTIONS(557),
    [anon_sym_Given] = ACTIONS(557),
    [anon_sym_Then] = ACTIONS(557),
    [anon_sym_DOT] = ACTIONS(557),
    [anon_sym_and] = ACTIONS(559),
  },
  [250] = {
    [sym_qname] = ACTIONS(562),
  },
  [251] = {
    [sym_qname] = ACTIONS(564),
  },
  [252] = {
    [anon_sym_consistent] = ACTIONS(566),
    [anon_sym_inconsistent] = ACTIONS(566),
  },
  [253] = {
    [ts_builtin_sym_end] = ACTIONS(568),
    [sym_tag] = ACTIONS(568),
    [anon_sym_Scenario_COLON] = ACTIONS(568),
    [anon_sym_And] = ACTIONS(568),
    [anon_sym_Given] = ACTIONS(568),
    [anon_sym_Then] = ACTIONS(568),
    [anon_sym_DOT] = ACTIONS(568),
  },
  [254] = {
    [ts_builtin_sym_end] = ACTIONS(570),
    [sym_tag] = ACTIONS(570),
    [anon_sym_Scenario_COLON] = ACTIONS(570),
    [anon_sym_And] = ACTIONS(570),
    [anon_sym_Given] = ACTIONS(570),
    [anon_sym_Then] = ACTIONS(570),
    [anon_sym_DOT] = ACTIONS(570),
  },
  [255] = {
    [ts_builtin_sym_end] = ACTIONS(572),
    [sym_tag] = ACTIONS(572),
    [anon_sym_Scenario_COLON] = ACTIONS(572),
    [anon_sym_And] = ACTIONS(572),
    [anon_sym_Given] = ACTIONS(572),
    [anon_sym_Then] = ACTIONS(572),
    [anon_sym_DOT] = ACTIONS(572),
  },
  [256] = {
    [anon_sym_a] = ACTIONS(427),
    [sym_qname] = ACTIONS(427),
    [anon_sym_the] = ACTIONS(427),
    [anon_sym_an] = ACTIONS(427),
  },
  [257] = {
    [sym_space] = ACTIONS(574),
  },
  [258] = {
    [sym_space] = ACTIONS(576),
  },
  [259] = {
    [sym_a] = STATE(64),
    [sym_class_expression] = STATE(272),
    [sym_pos_class] = STATE(158),
    [sym_class_atom] = STATE(159),
    [sym_conjunction] = STATE(160),
    [sym_disjunction] = STATE(160),
    [sym_qualified_class] = STATE(160),
    [sym_class_name] = STATE(161),
    [sym_neither] = STATE(162),
    [sym_an] = STATE(64),
    [sym_not] = STATE(163),
    [anon_sym_a] = ACTIONS(78),
    [sym_qname] = ACTIONS(309),
    [anon_sym_neither] = ACTIONS(311),
    [anon_sym_an] = ACTIONS(90),
    [anon_sym_not] = ACTIONS(313),
  },
  [260] = {
    [anon_sym_a] = ACTIONS(578),
    [sym_qname] = ACTIONS(578),
    [anon_sym_neither] = ACTIONS(578),
    [anon_sym_an] = ACTIONS(578),
    [anon_sym_not] = ACTIONS(578),
  },
  [261] = {
    [anon_sym_some] = ACTIONS(431),
    [anon_sym_only] = ACTIONS(431),
  },
  [262] = {
    [anon_sym_some] = ACTIONS(433),
    [anon_sym_only] = ACTIONS(433),
  },
  [263] = {
    [sym_class_name] = STATE(107),
    [sym_predicate_fragement] = STATE(273),
    [sym_qname] = ACTIONS(443),
  },
  [264] = {
    [ts_builtin_sym_end] = ACTIONS(580),
    [sym_tag] = ACTIONS(580),
    [anon_sym_Scenario_COLON] = ACTIONS(580),
    [anon_sym_And] = ACTIONS(580),
    [anon_sym_Given] = ACTIONS(580),
    [anon_sym_Then] = ACTIONS(580),
    [anon_sym_DOT] = ACTIONS(580),
  },
  [265] = {
    [sym_predicate_end] = STATE(275),
    [anon_sym_of] = ACTIONS(582),
    [anon_sym_than] = ACTIONS(582),
    [anon_sym_to] = ACTIONS(582),
    [anon_sym_on] = ACTIONS(582),
    [anon_sym_in] = ACTIONS(582),
  },
  [266] = {
    [sym_predicate_fragement] = STATE(273),
    [sym_qname] = ACTIONS(449),
  },
  [267] = {
    [anon_sym_a] = ACTIONS(584),
    [sym_qname] = ACTIONS(584),
    [anon_sym_an] = ACTIONS(584),
  },
  [268] = {
    [ts_builtin_sym_end] = ACTIONS(586),
    [sym_tag] = ACTIONS(586),
    [anon_sym_Scenario_COLON] = ACTIONS(586),
    [anon_sym_And] = ACTIONS(586),
    [anon_sym_Given] = ACTIONS(586),
    [anon_sym_Then] = ACTIONS(586),
    [anon_sym_DOT] = ACTIONS(586),
    [anon_sym_nor] = ACTIONS(586),
  },
  [269] = {
    [sym_nor] = STATE(246),
    [aux_sym_conjunction_repeat2] = STATE(269),
    [ts_builtin_sym_end] = ACTIONS(586),
    [sym_tag] = ACTIONS(586),
    [anon_sym_Scenario_COLON] = ACTIONS(586),
    [anon_sym_And] = ACTIONS(586),
    [anon_sym_Given] = ACTIONS(586),
    [anon_sym_Then] = ACTIONS(586),
    [anon_sym_DOT] = ACTIONS(586),
    [anon_sym_nor] = ACTIONS(588),
  },
  [270] = {
    [anon_sym_a] = ACTIONS(591),
    [sym_qname] = ACTIONS(591),
    [anon_sym_neither] = ACTIONS(591),
    [anon_sym_an] = ACTIONS(591),
    [anon_sym_not] = ACTIONS(591),
  },
  [271] = {
    [anon_sym_a] = ACTIONS(593),
    [sym_qname] = ACTIONS(593),
    [anon_sym_neither] = ACTIONS(593),
    [anon_sym_an] = ACTIONS(593),
    [anon_sym_not] = ACTIONS(593),
  },
  [272] = {
    [ts_builtin_sym_end] = ACTIONS(595),
    [sym_tag] = ACTIONS(595),
    [anon_sym_Scenario_COLON] = ACTIONS(595),
    [anon_sym_And] = ACTIONS(595),
    [anon_sym_Given] = ACTIONS(595),
    [anon_sym_Then] = ACTIONS(595),
    [anon_sym_DOT] = ACTIONS(595),
  },
  [273] = {
    [sym_predicate_end] = STATE(276),
    [anon_sym_of] = ACTIONS(582),
    [anon_sym_than] = ACTIONS(582),
    [anon_sym_to] = ACTIONS(582),
    [anon_sym_on] = ACTIONS(582),
    [anon_sym_in] = ACTIONS(582),
  },
  [274] = {
    [sym_space] = ACTIONS(597),
  },
  [275] = {
    [anon_sym_some] = ACTIONS(503),
    [anon_sym_only] = ACTIONS(503),
  },
  [276] = {
    [anon_sym_some] = ACTIONS(562),
    [anon_sym_only] = ACTIONS(562),
  },
  [277] = {
    [anon_sym_some] = ACTIONS(564),
    [anon_sym_only] = ACTIONS(564),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = true}, RECOVER(),
  [3] = {.count = 1, .reusable = false}, RECOVER(),
  [5] = {.count = 1, .reusable = true}, SHIFT(2),
  [7] = {.count = 1, .reusable = true}, SHIFT(5),
  [9] = {.count = 1, .reusable = true}, SHIFT(6),
  [11] = {.count = 1, .reusable = true}, ACCEPT_INPUT(),
  [13] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 1),
  [15] = {.count = 1, .reusable = true}, SHIFT(7),
  [17] = {.count = 1, .reusable = true}, SHIFT(12),
  [19] = {.count = 1, .reusable = true}, SHIFT(8),
  [21] = {.count = 1, .reusable = true}, SHIFT(13),
  [23] = {.count = 1, .reusable = true}, SHIFT(14),
  [25] = {.count = 1, .reusable = true}, SHIFT(16),
  [27] = {.count = 1, .reusable = true}, REDUCE(sym_background, 1),
  [29] = {.count = 1, .reusable = true}, SHIFT(17),
  [31] = {.count = 1, .reusable = true}, SHIFT(20),
  [33] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 2),
  [35] = {.count = 1, .reusable = true}, SHIFT(22),
  [37] = {.count = 1, .reusable = true}, SHIFT(23),
  [39] = {.count = 1, .reusable = true}, SHIFT(24),
  [41] = {.count = 1, .reusable = true}, SHIFT(32),
  [43] = {.count = 1, .reusable = true}, SHIFT(33),
  [45] = {.count = 1, .reusable = true}, REDUCE(aux_sym_feature_repeat1, 2),
  [47] = {.count = 2, .reusable = true}, REDUCE(aux_sym_feature_repeat1, 2), SHIFT_REPEAT(14),
  [50] = {.count = 1, .reusable = true}, SHIFT(35),
  [52] = {.count = 1, .reusable = false}, REDUCE(sym_eol, 1),
  [54] = {.count = 1, .reusable = true}, SHIFT(36),
  [56] = {.count = 1, .reusable = true}, SHIFT(37),
  [58] = {.count = 1, .reusable = true}, SHIFT(38),
  [60] = {.count = 1, .reusable = true}, REDUCE(sym_background, 2),
  [62] = {.count = 1, .reusable = true}, SHIFT(39),
  [64] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 3),
  [66] = {.count = 1, .reusable = true}, SHIFT(43),
  [68] = {.count = 1, .reusable = true}, SHIFT(44),
  [70] = {.count = 1, .reusable = true}, SHIFT(45),
  [72] = {.count = 1, .reusable = true}, REDUCE(sym_scenario, 2),
  [74] = {.count = 1, .reusable = false}, SHIFT(46),
  [76] = {.count = 1, .reusable = false}, SHIFT(47),
  [78] = {.count = 1, .reusable = false}, SHIFT(48),
  [80] = {.count = 1, .reusable = false}, SHIFT(49),
  [82] = {.count = 1, .reusable = false}, SHIFT(50),
  [84] = {.count = 1, .reusable = false}, SHIFT(51),
  [86] = {.count = 1, .reusable = false}, SHIFT(52),
  [88] = {.count = 1, .reusable = false}, SHIFT(53),
  [90] = {.count = 1, .reusable = false}, SHIFT(54),
  [92] = {.count = 1, .reusable = false}, SHIFT(55),
  [94] = {.count = 1, .reusable = false}, SHIFT(56),
  [96] = {.count = 1, .reusable = true}, SHIFT(47),
  [98] = {.count = 1, .reusable = true}, SHIFT(53),
  [100] = {.count = 1, .reusable = true}, SHIFT(56),
  [102] = {.count = 1, .reusable = true}, REDUCE(sym_scenario_body, 1),
  [104] = {.count = 1, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2),
  [106] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(12),
  [109] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(8),
  [112] = {.count = 2, .reusable = true}, REDUCE(aux_sym_feature_repeat1, 2), SHIFT_REPEAT(32),
  [115] = {.count = 1, .reusable = true}, REDUCE(sym_feature, 4),
  [117] = {.count = 1, .reusable = true}, REDUCE(sym_narrative, 1),
  [119] = {.count = 1, .reusable = false}, SHIFT(79),
  [121] = {.count = 1, .reusable = false}, REDUCE(aux_sym_eol_repeat1, 2),
  [123] = {.count = 2, .reusable = true}, REDUCE(aux_sym_eol_repeat1, 2), SHIFT_REPEAT(36),
  [126] = {.count = 1, .reusable = true}, SHIFT(80),
  [128] = {.count = 1, .reusable = true}, SHIFT(81),
  [130] = {.count = 1, .reusable = true}, REDUCE(sym_background, 3),
  [132] = {.count = 1, .reusable = true}, REDUCE(aux_sym_background_repeat1, 2),
  [134] = {.count = 2, .reusable = true}, REDUCE(aux_sym_background_repeat1, 2), SHIFT_REPEAT(39),
  [137] = {.count = 1, .reusable = true}, SHIFT(83),
  [139] = {.count = 1, .reusable = false}, REDUCE(sym_And, 2),
  [141] = {.count = 1, .reusable = false}, REDUCE(sym_Given, 2),
  [143] = {.count = 1, .reusable = true}, REDUCE(sym_Then, 2),
  [145] = {.count = 1, .reusable = true}, REDUCE(sym_language_ID, 1),
  [147] = {.count = 1, .reusable = true}, SHIFT(84),
  [149] = {.count = 1, .reusable = true}, SHIFT(85),
  [151] = {.count = 1, .reusable = true}, SHIFT(86),
  [153] = {.count = 1, .reusable = true}, SHIFT(87),
  [155] = {.count = 1, .reusable = true}, REDUCE(sym_class_name, 1),
  [157] = {.count = 1, .reusable = true}, SHIFT(88),
  [159] = {.count = 1, .reusable = true}, SHIFT(89),
  [161] = {.count = 1, .reusable = false}, REDUCE(sym_indiv_name, 1),
  [163] = {.count = 1, .reusable = true}, REDUCE(sym_indiv_name, 1),
  [165] = {.count = 1, .reusable = true}, SHIFT(93),
  [167] = {.count = 1, .reusable = true}, SHIFT(94),
  [169] = {.count = 1, .reusable = true}, SHIFT(95),
  [171] = {.count = 1, .reusable = true}, SHIFT(96),
  [173] = {.count = 1, .reusable = true}, SHIFT(97),
  [175] = {.count = 1, .reusable = true}, SHIFT(98),
  [177] = {.count = 1, .reusable = true}, REDUCE(sym_test, 2),
  [179] = {.count = 1, .reusable = true}, SHIFT(99),
  [181] = {.count = 1, .reusable = false}, SHIFT(101),
  [183] = {.count = 1, .reusable = true}, REDUCE(sym_assumption, 2),
  [185] = {.count = 1, .reusable = true}, REDUCE(sym_sentence, 1),
  [187] = {.count = 1, .reusable = true}, REDUCE(sym_proposition, 1),
  [189] = {.count = 1, .reusable = true}, REDUCE(sym_universal, 1),
  [191] = {.count = 1, .reusable = true}, SHIFT(106),
  [193] = {.count = 1, .reusable = true}, SHIFT(108),
  [195] = {.count = 1, .reusable = true}, SHIFT(111),
  [197] = {.count = 1, .reusable = true}, REDUCE(sym_fact, 1),
  [199] = {.count = 1, .reusable = true}, SHIFT(113),
  [201] = {.count = 1, .reusable = true}, SHIFT(114),
  [203] = {.count = 1, .reusable = true}, SHIFT(115),
  [205] = {.count = 1, .reusable = true}, REDUCE(sym_pos_class, 1),
  [207] = {.count = 1, .reusable = false}, SHIFT(118),
  [209] = {.count = 1, .reusable = false}, SHIFT(119),
  [211] = {.count = 1, .reusable = false}, SHIFT(120),
  [213] = {.count = 1, .reusable = true}, SHIFT(121),
  [215] = {.count = 1, .reusable = true}, SHIFT(122),
  [217] = {.count = 1, .reusable = true}, SHIFT(123),
  [219] = {.count = 1, .reusable = true}, SHIFT(129),
  [221] = {.count = 1, .reusable = true}, REDUCE(aux_sym_scenario_body_repeat1, 2),
  [223] = {.count = 2, .reusable = true}, REDUCE(aux_sym_scenario_body_repeat1, 2), SHIFT_REPEAT(22),
  [226] = {.count = 2, .reusable = true}, REDUCE(aux_sym_scenario_body_repeat1, 2), SHIFT_REPEAT(23),
  [229] = {.count = 2, .reusable = true}, REDUCE(aux_sym_scenario_body_repeat1, 2), SHIFT_REPEAT(24),
  [232] = {.count = 1, .reusable = true}, REDUCE(sym_scenario, 3),
  [234] = {.count = 1, .reusable = true}, REDUCE(aux_sym_narrative_repeat1, 2),
  [236] = {.count = 2, .reusable = false}, REDUCE(aux_sym_narrative_repeat1, 2), SHIFT_REPEAT(79),
  [239] = {.count = 1, .reusable = true}, SHIFT(46),
  [241] = {.count = 1, .reusable = true}, SHIFT(135),
  [243] = {.count = 1, .reusable = false}, SHIFT(136),
  [245] = {.count = 1, .reusable = true}, REDUCE(sym_scenario_head, 4),
  [247] = {.count = 1, .reusable = true}, SHIFT(137),
  [249] = {.count = 1, .reusable = false}, SHIFT(139),
  [251] = {.count = 1, .reusable = false}, REDUCE(sym_infer, 2),
  [253] = {.count = 1, .reusable = true}, REDUCE(sym_a, 2),
  [255] = {.count = 1, .reusable = true}, REDUCE(sym_every, 2),
  [257] = {.count = 1, .reusable = true}, REDUCE(sym_no, 2),
  [259] = {.count = 1, .reusable = true}, SHIFT(140),
  [261] = {.count = 1, .reusable = true}, SHIFT(141),
  [263] = {.count = 1, .reusable = true}, SHIFT(142),
  [265] = {.count = 1, .reusable = true}, SHIFT(143),
  [267] = {.count = 1, .reusable = true}, REDUCE(sym_qname_list, 2),
  [269] = {.count = 1, .reusable = false}, REDUCE(sym_that, 2),
  [271] = {.count = 1, .reusable = true}, REDUCE(sym_the, 2),
  [273] = {.count = 1, .reusable = true}, REDUCE(sym_an, 2),
  [275] = {.count = 1, .reusable = true}, REDUCE(sym_some, 2),
  [277] = {.count = 1, .reusable = true}, REDUCE(sym_donot, 2),
  [279] = {.count = 1, .reusable = true}, SHIFT(146),
  [281] = {.count = 1, .reusable = false}, SHIFT(146),
  [283] = {.count = 1, .reusable = true}, REDUCE(sym_dot, 1),
  [285] = {.count = 1, .reusable = true}, REDUCE(sym_test, 3),
  [287] = {.count = 1, .reusable = true}, SHIFT(147),
  [289] = {.count = 1, .reusable = true}, REDUCE(sym_inference_test, 2),
  [291] = {.count = 1, .reusable = true}, REDUCE(sym_infer_sentence, 1),
  [293] = {.count = 1, .reusable = true}, REDUCE(sym_assumption, 3),
  [295] = {.count = 1, .reusable = false}, REDUCE(sym_class_name, 1),
  [297] = {.count = 1, .reusable = true}, REDUCE(sym_pos_class, 2),
  [299] = {.count = 1, .reusable = true}, SHIFT(149),
  [301] = {.count = 1, .reusable = true}, SHIFT(120),
  [303] = {.count = 1, .reusable = true}, SHIFT(152),
  [305] = {.count = 1, .reusable = true}, SHIFT(153),
  [307] = {.count = 1, .reusable = true}, SHIFT(154),
  [309] = {.count = 1, .reusable = false}, SHIFT(106),
  [311] = {.count = 1, .reusable = false}, SHIFT(155),
  [313] = {.count = 1, .reusable = false}, SHIFT(156),
  [315] = {.count = 1, .reusable = true}, SHIFT(164),
  [317] = {.count = 1, .reusable = true}, SHIFT(165),
  [319] = {.count = 1, .reusable = true}, SHIFT(166),
  [321] = {.count = 1, .reusable = true}, SHIFT(169),
  [323] = {.count = 1, .reusable = true}, SHIFT(170),
  [325] = {.count = 1, .reusable = true}, SHIFT(171),
  [327] = {.count = 1, .reusable = true}, SHIFT(172),
  [329] = {.count = 1, .reusable = true}, SHIFT(173),
  [331] = {.count = 1, .reusable = true}, SHIFT(174),
  [333] = {.count = 1, .reusable = true}, SHIFT(176),
  [335] = {.count = 1, .reusable = true}, REDUCE(sym_predicate_open, 1),
  [337] = {.count = 1, .reusable = true}, SHIFT(178),
  [339] = {.count = 1, .reusable = false}, SHIFT(180),
  [341] = {.count = 1, .reusable = false}, SHIFT(181),
  [343] = {.count = 1, .reusable = true}, SHIFT(186),
  [345] = {.count = 1, .reusable = false}, SHIFT(187),
  [347] = {.count = 1, .reusable = true}, SHIFT(188),
  [349] = {.count = 1, .reusable = true}, REDUCE(sym_feature, 5),
  [351] = {.count = 1, .reusable = true}, REDUCE(sym_language_setting, 4),
  [353] = {.count = 1, .reusable = true}, SHIFT(192),
  [355] = {.count = 1, .reusable = true}, REDUCE(sym_import, 4),
  [357] = {.count = 1, .reusable = true}, REDUCE(sym_scenario_head, 5),
  [359] = {.count = 2, .reusable = false}, REDUCE(aux_sym_narrative_repeat1, 2), SHIFT_REPEAT(139),
  [362] = {.count = 1, .reusable = true}, REDUCE(sym_the_same_as, 2),
  [364] = {.count = 1, .reusable = true}, REDUCE(sym_and, 2),
  [366] = {.count = 1, .reusable = true}, REDUCE(sym_equation, 3),
  [368] = {.count = 1, .reusable = true}, REDUCE(aux_sym_qname_list_repeat1, 2),
  [370] = {.count = 2, .reusable = true}, REDUCE(aux_sym_qname_list_repeat1, 2), SHIFT_REPEAT(89),
  [373] = {.count = 1, .reusable = true}, SHIFT(193),
  [375] = {.count = 1, .reusable = true}, SHIFT(194),
  [377] = {.count = 1, .reusable = false}, SHIFT(194),
  [379] = {.count = 1, .reusable = false}, REDUCE(sym_source_body, 1),
  [381] = {.count = 1, .reusable = true}, REDUCE(sym_inference_test, 3),
  [383] = {.count = 1, .reusable = true}, SHIFT(195),
  [385] = {.count = 1, .reusable = true}, SHIFT(197),
  [387] = {.count = 1, .reusable = true}, REDUCE(sym_are, 2),
  [389] = {.count = 1, .reusable = true}, REDUCE(sym_universal_negative, 3),
  [391] = {.count = 1, .reusable = true}, REDUCE(sym_different, 3),
  [393] = {.count = 1, .reusable = true}, SHIFT(199),
  [395] = {.count = 1, .reusable = true}, SHIFT(200),
  [397] = {.count = 1, .reusable = true}, REDUCE(sym_definition, 3),
  [399] = {.count = 1, .reusable = true}, REDUCE(sym_class_atom, 1),
  [401] = {.count = 1, .reusable = true}, SHIFT(201),
  [403] = {.count = 1, .reusable = true}, SHIFT(202),
  [405] = {.count = 1, .reusable = true}, SHIFT(203),
  [407] = {.count = 1, .reusable = true}, REDUCE(sym_class_expression, 1),
  [409] = {.count = 1, .reusable = true}, SHIFT(208),
  [411] = {.count = 1, .reusable = true}, REDUCE(sym_is_enumerated_as, 2),
  [413] = {.count = 1, .reusable = false}, REDUCE(sym_is_a_subclass_of, 2),
  [415] = {.count = 1, .reusable = true}, REDUCE(sym_universal_positive, 3),
  [417] = {.count = 1, .reusable = true}, REDUCE(sym_does, 2),
  [419] = {.count = 1, .reusable = true}, REDUCE(sym_has, 2),
  [421] = {.count = 1, .reusable = false}, REDUCE(sym_is, 2),
  [423] = {.count = 1, .reusable = true}, REDUCE(sym_doesnot1, 2),
  [425] = {.count = 1, .reusable = true}, REDUCE(sym_hasnot1, 2),
  [427] = {.count = 1, .reusable = false}, REDUCE(sym_isnot1, 2),
  [429] = {.count = 1, .reusable = true}, REDUCE(sym_relation, 3),
  [431] = {.count = 1, .reusable = true}, REDUCE(sym_predicate_name, 1),
  [433] = {.count = 1, .reusable = true}, REDUCE(sym_predicate_phrase, 2),
  [435] = {.count = 1, .reusable = true}, SHIFT(215),
  [437] = {.count = 1, .reusable = true}, REDUCE(sym_predicate_open, 2),
  [439] = {.count = 1, .reusable = true}, REDUCE(sym_predicate_fragement, 1),
  [441] = {.count = 1, .reusable = true}, SHIFT(216),
  [443] = {.count = 1, .reusable = true}, SHIFT(180),
  [445] = {.count = 1, .reusable = true}, REDUCE(sym_instance, 3),
  [447] = {.count = 1, .reusable = true}, SHIFT(218),
  [449] = {.count = 1, .reusable = true}, SHIFT(220),
  [451] = {.count = 1, .reusable = true}, SHIFT(221),
  [453] = {.count = 1, .reusable = true}, SHIFT(223),
  [455] = {.count = 1, .reusable = true}, SHIFT(224),
  [457] = {.count = 1, .reusable = true}, REDUCE(sym_assumption, 4),
  [459] = {.count = 1, .reusable = true}, REDUCE(sym_import, 5),
  [461] = {.count = 1, .reusable = true}, REDUCE(sym_source, 4),
  [463] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_body_repeat1, 2), SHIFT_REPEAT(194),
  [466] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_body_repeat1, 2), SHIFT_REPEAT(194),
  [469] = {.count = 1, .reusable = false}, REDUCE(aux_sym_source_body_repeat1, 2),
  [471] = {.count = 1, .reusable = true}, REDUCE(sym_universal_positive, 4),
  [473] = {.count = 1, .reusable = true}, SHIFT(227),
  [475] = {.count = 1, .reusable = false}, REDUCE(sym_neither, 2),
  [477] = {.count = 1, .reusable = false}, REDUCE(sym_not, 2),
  [479] = {.count = 1, .reusable = true}, SHIFT(229),
  [481] = {.count = 1, .reusable = true}, SHIFT(230),
  [483] = {.count = 1, .reusable = true}, SHIFT(231),
  [485] = {.count = 1, .reusable = true}, SHIFT(235),
  [487] = {.count = 1, .reusable = true}, REDUCE(sym_conjunction, 2),
  [489] = {.count = 1, .reusable = true}, SHIFT(242),
  [491] = {.count = 1, .reusable = true}, REDUCE(sym_disjunction, 2),
  [493] = {.count = 1, .reusable = true}, SHIFT(245),
  [495] = {.count = 1, .reusable = true}, REDUCE(sym_class_atom, 2),
  [497] = {.count = 1, .reusable = true}, REDUCE(sym_definition, 4),
  [499] = {.count = 1, .reusable = true}, REDUCE(sym_as, 2),
  [501] = {.count = 1, .reusable = true}, SHIFT(251),
  [503] = {.count = 1, .reusable = true}, REDUCE(sym_predicate_phrase, 3),
  [505] = {.count = 1, .reusable = true}, SHIFT(252),
  [507] = {.count = 1, .reusable = true}, SHIFT(253),
  [509] = {.count = 1, .reusable = false}, REDUCE(sym_are, 2),
  [511] = {.count = 1, .reusable = false}, REDUCE(sym_arenot1, 2),
  [513] = {.count = 1, .reusable = true}, REDUCE(sym_particular, 4),
  [515] = {.count = 1, .reusable = true}, REDUCE(sym_inference_test, 4),
  [517] = {.count = 1, .reusable = false}, REDUCE(sym_a, 2),
  [519] = {.count = 1, .reusable = true}, REDUCE(sym_universal_negative, 5),
  [521] = {.count = 1, .reusable = false}, REDUCE(sym_pronoun, 2),
  [523] = {.count = 1, .reusable = true}, REDUCE(sym_pronoun, 2),
  [525] = {.count = 1, .reusable = false}, REDUCE(sym_and, 2),
  [527] = {.count = 1, .reusable = true}, REDUCE(sym_comma, 2),
  [529] = {.count = 1, .reusable = true}, REDUCE(aux_sym_conjunction_repeat1, 2),
  [531] = {.count = 1, .reusable = true}, SHIFT(256),
  [533] = {.count = 1, .reusable = true}, REDUCE(sym_qualified_class, 3),
  [535] = {.count = 1, .reusable = true}, SHIFT(257),
  [537] = {.count = 1, .reusable = true}, SHIFT(258),
  [539] = {.count = 1, .reusable = true}, SHIFT(261),
  [541] = {.count = 1, .reusable = false}, SHIFT(220),
  [543] = {.count = 2, .reusable = true}, REDUCE(aux_sym_conjunction_repeat1, 2), SHIFT_REPEAT(202),
  [546] = {.count = 1, .reusable = false}, REDUCE(sym_or, 2),
  [548] = {.count = 1, .reusable = true}, REDUCE(aux_sym_disjunction_repeat1, 2),
  [550] = {.count = 2, .reusable = true}, REDUCE(aux_sym_disjunction_repeat1, 2), SHIFT_REPEAT(208),
  [553] = {.count = 1, .reusable = true}, SHIFT(267),
  [555] = {.count = 1, .reusable = true}, REDUCE(sym_conjunction, 3),
  [557] = {.count = 1, .reusable = true}, REDUCE(aux_sym_definition_repeat1, 2),
  [559] = {.count = 2, .reusable = true}, REDUCE(aux_sym_definition_repeat1, 2), SHIFT_REPEAT(89),
  [562] = {.count = 1, .reusable = true}, REDUCE(sym_predicate_phrase, 4),
  [564] = {.count = 1, .reusable = true}, REDUCE(sym_predicate_end, 2),
  [566] = {.count = 1, .reusable = true}, REDUCE(sym_is, 2),
  [568] = {.count = 1, .reusable = true}, REDUCE(sym_consistency, 1),
  [570] = {.count = 1, .reusable = true}, REDUCE(sym_consistency_test, 5),
  [572] = {.count = 1, .reusable = true}, REDUCE(sym_qualified_class, 4),
  [574] = {.count = 1, .reusable = true}, SHIFT(270),
  [576] = {.count = 1, .reusable = true}, SHIFT(271),
  [578] = {.count = 1, .reusable = false}, REDUCE(sym_quantifier, 1),
  [580] = {.count = 1, .reusable = true}, REDUCE(sym_qualifier, 2),
  [582] = {.count = 1, .reusable = true}, SHIFT(274),
  [584] = {.count = 1, .reusable = false}, REDUCE(sym_nor, 2),
  [586] = {.count = 1, .reusable = true}, REDUCE(aux_sym_conjunction_repeat2, 2),
  [588] = {.count = 2, .reusable = true}, REDUCE(aux_sym_conjunction_repeat2, 2), SHIFT_REPEAT(245),
  [591] = {.count = 1, .reusable = false}, REDUCE(sym_some, 2),
  [593] = {.count = 1, .reusable = false}, REDUCE(sym_only, 2),
  [595] = {.count = 1, .reusable = true}, REDUCE(sym_qualifier, 3),
  [597] = {.count = 1, .reusable = true}, SHIFT(277),
};

#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_scone() {
  static TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .symbol_metadata = ts_symbol_metadata,
    .parse_table = (const unsigned short *)ts_parse_table,
    .parse_actions = ts_parse_actions,
    .lex_modes = ts_lex_modes,
    .symbol_names = ts_symbol_names,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .lex_fn = ts_lex,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
  };
  return &language;
}
