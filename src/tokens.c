#include <stdint.h>
#include "tokens.h"

const char *token_translation[] = {
    "IDENTIFIER",
    "NUMBER",
    "WHITESPACE",
    "STRING",

    "BREAK",
    "CASE",
    "CHAR",
    "CONST",
    "CONTINUE",
    "DEFAULT",
    "DO",
    "DOUBLE",
    "ELSE",
    "ENUM",
    "EXTERN",
    "FLOAT",
    "FOR",
    "GOTO",
    "IF",
    "INT",
    "LONG",
    "REGISTER",
    "RETURN",
    "SHORT",
    "SIGNED",
    "SIZEOF",
    "STATIC",
    "STRUCT",
    "SWITCH",
    "TYPEDEF",
    "UNION",
    "UNSIGNED",
    "VOID",
    "VOLATILE",
    "WHILE",

    "SEMICOLON",
    "LPAREN",
    "RPAREN",
    "LBRACE",
    "RBRACE",
    "LBRACK",
    "RBRACK",
    "ASSIGN",
    "COMMA",
    "AMPERS",
    "PLUS",
    "MINUS",
    "ASTERISK",
    "SLASH",
    "PERCENT",
    "PIPE",
    "XOR",
    "BANG",
    "QUESTION",
    "TILDE",
    "COLON",
    "PERIOD",
    "ELLIPS",

    "OP_INC",
    "OP_DEC",
    "OP_PTR",
    "OP_EQUALS",
    "OP_NEQ",
    "OP_AND",
    "OP_OR",
    "OP_LSH",
    "OP_RSH",
    "OP_GT",
    "OP_GTE",
    "OP_LT",
    "OP_LTE",

    "AND_ASS", 
    "ADD_ASS",
    "SUB_ASS",
    "OR_ASS",
    "MUL_ASS",
    "DIV_ASS",
    "MOD_ASS",
    "XOR_ASS",
    "RSH_ASS",
    "LSH_ASS",

    "PP_INCLUDE"
};

const char *token_get_name(token_t token) {
    return token_translation[token.type];
}

const char *token_get_name_by_type(token_type_t token) {
    return token_translation[token];
}