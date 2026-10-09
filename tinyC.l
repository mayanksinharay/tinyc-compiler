%{
#include <stdio.h>
#include <stdlib.h>
#include "y.tab.h"

void yyerror(const char *s);
%}

%option noyywrap

/* Regular Expression Definitions */
DIGIT       [0-9]
LETTER      [a-zA-Z_]
ID          {LETTER}({LETTER}|{DIGIT})*
INT_CONST   {DIGIT}+
FLOAT_CONST {DIGIT}+\.{DIGIT}+([eE][+-]?{DIGIT}+)?|\.{DIGIT}+([eE][+-]?{DIGIT}+)?
CHAR_CONST  '([^'\\\n]|\\.)*'
STRING_LIT  \"([^"\\\n]|\\.)*\"
WS          [ \t\v\f\n]+

%%

"/*"([^*]|\*+[^/*])*\*+"/"    { /* Skip multi-line comments */ }
"//".*                        { /* Skip single-line comments */ }

"auto"          { return AUTO; }
"break"         { return BREAK; }
"case"          { return CASE; }
"char"          { return CHAR; }
"const"         { return CONST; }
"continue"      { return CONTINUE; }
"default"       { return DEFAULT; }
"do"            { return DO; }
"double"        { return DOUBLE; }
"else"          { return ELSE; }
"enum"          { return ENUM; }
"extern"        { return EXTERN; }
"float"         { return FLOAT; }
"for"           { return FOR; }
"goto"          { return GOTO; }
"if"            { return IF; }
"inline"        { return INLINE; }
"int"           { return INT; }
"long"          { return LONG; }
"register"      { return REGISTER; }
"restrict"      { return RESTRICT; }
"return"        { return RETURN; }
"short"         { return SHORT; }
"signed"        { return SIGNED; }
"sizeof"        { return SIZEOF; }
"static"        { return STATIC; }
"struct"        { return STRUCT; }
"switch"        { return SWITCH; }
"typedef"       { return TYPEDEF; }
"union"         { return UNION; }
"unsigned"      { return UNSIGNED; }
"void"          { return VOID; }
"volatile"      { return VOLATILE; }
"while"         { return WHILE; }
"_Bool"         { return BOOL; }
"_Complex"      { return COMPLEX; }
"_Imaginary"    { return IMAGINARY; }

"..."           { return ELLIPSIS; }
">>="          { return RIGHT_ASSIGN; }
"<<="          { return LEFT_ASSIGN; }
"+="           { return ADD_ASSIGN; }
"-="           { return SUB_ASSIGN; }
"*="           { return MUL_ASSIGN; }
"/="           { return DIV_ASSIGN; }
"%="           { return MOD_ASSIGN; }
"&="           { return AND_ASSIGN; }
"^="           { return XOR_ASSIGN; }
"|="           { return OR_ASSIGN; }
">>"           { return RIGHT_OP; }
"<<"           { return LEFT_OP; }
"++"           { return INC_OP; }
"--"           { return DEC_OP; }
"->"           { return PTR_OP; }
"&&"           { return AND_OP; }
"||"           { return OR_OP; }
"<="           { return LE_OP; }
">="           { return GE_OP; }
"=="           { return EQ_OP; }
"!="           { return NE_OP; }

{ID}            { yylval.sval = strdup(yytext); return IDENTIFIER; }
{INT_CONST}     { return INT_CONSTANT; }
{FLOAT_CONST}   { return FLOAT_CONSTANT; }
{CHAR_CONST}    { return CHAR_CONSTANT; }
{STRING_LIT}    { return STRING_LITERAL; }

";"             { return ';'; }
("{"|"<%")      { return '{'; }
("}"|"%>")      { return '}'; }
","             { return ','; }
":"             { return ':'; }
"="             { return '='; }
"("             { return '('; }
")"             { return ')'; }
("["|"<:")      { return '['; }
("]"|":>")      { return ']'; }
"."             { return '.'; }
"&"             { return '&'; }
"!"             { return '!'; }
"~"             { return '~'; }
"-"             { return '-'; }
"+"             { return '+'; }
"*"             { return '*'; }
"/"             { return '/'; }
"%"             { return '%'; }
"<"             { return '<'; }
">"             { return '>'; }
"^"             { return '^'; }
"|"             { return '|'; }
"?"             { return '?'; }

{WS}            { /* Ignore whitespace */ }
.               { printf("Lexical Error: Unrecognized character '%s'\n", yytext); }

%%
