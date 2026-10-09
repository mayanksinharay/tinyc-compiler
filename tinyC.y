%{
#include <stdio.h>
#include <stdlib.h>

extern int yylex(void);
extern int yylineno;
void yyerror(const char *s);
%}

%union {
    int intval;
    float floatval;
    char *sval;
}

/* Tokens */
%token <sval> IDENTIFIER STRING_LITERAL
%token INT_CONSTANT FLOAT_CONSTANT CHAR_CONSTANT

%token AUTO BREAK CASE CHAR CONST CONTINUE DEFAULT DO DOUBLE ELSE ENUM EXTERN
%token FLOAT FOR GOTO IF INLINE INT LONG REGISTER RESTRICT RETURN SHORT SIGNED
%token SIZEOF STATIC STRUCT SWITCH TYPEDEF UNION UNSIGNED VOID VOLATILE WHILE
%token BOOL COMPLEX IMAGINARY

%token ELLIPSIS RIGHT_ASSIGN LEFT_ASSIGN ADD_ASSIGN SUB_ASSIGN MUL_ASSIGN DIV_ASSIGN MOD_ASSIGN
%token AND_ASSIGN XOR_ASSIGN OR_ASSIGN RIGHT_OP LEFT_OP INC_OP DEC_OP PTR_OP AND_OP OR_OP
%token LE_OP GE_OP EQ_OP NE_OP

/* Precedence helper for dangling else */
%nonassoc LOWER_THAN_ELSE
%nonassoc ELSE

%start translation_unit

%%

/* ---------------- 1. EXPRESSIONS ---------------- */

primary_expression
    : IDENTIFIER
    | INT_CONSTANT
    | FLOAT_CONSTANT
    | CHAR_CONSTANT
    | STRING_LITERAL
    | '(' expression ')'
    ;

postfix_expression
    : primary_expression
    | postfix_expression '[' expression ']'
    | postfix_expression '(' argument_expression_list_opt ')'
    | postfix_expression '.' IDENTIFIER
    | postfix_expression PTR_OP IDENTIFIER
    | postfix_expression INC_OP
    | postfix_expression DEC_OP
    | '(' type_name ')' '{' initializer_list '}'
    | '(' type_name ')' '{' initializer_list ',' '}'
    ;

argument_expression_list_opt
    : argument_expression_list
    | /* epsilon */
    ;

argument_expression_list
    : assignment_expression
    | argument_expression_list ',' assignment_expression
    ;

unary_expression
    : postfix_expression
    | INC_OP unary_expression
    | DEC_OP unary_expression
    | unary_operator cast_expression
    | SIZEOF unary_expression
    | SIZEOF '(' type_name ')'
    ;

unary_operator
    : '&' | '*' | '+' | '-' | '~' | '!'
    ;

cast_expression
    : unary_expression
    | '(' type_name ')' cast_expression
    ;

multiplicative_expression
    : cast_expression
    | multiplicative_expression '*' cast_expression
    | multiplicative_expression '/' cast_expression
    | multiplicative_expression '%' cast_expression
    ;

additive_expression
    : multiplicative_expression
    | additive_expression '+' multiplicative_expression
    | additive_expression '-' multiplicative_expression
    ;

shift_expression
    : additive_expression
    | shift_expression LEFT_OP additive_expression
    | shift_expression RIGHT_OP additive_expression
    ;

relational_expression
    : shift_expression
    | relational_expression '<' shift_expression
    | relational_expression '>' shift_expression
    | relational_expression LE_OP shift_expression
    | relational_expression GE_OP shift_expression
    ;

equality_expression
    : relational_expression
    | equality_expression EQ_OP relational_expression
    | equality_expression NE_OP relational_expression
    ;

AND_expression
    : equality_expression
    | AND_expression '&' equality_expression
    ;

exclusive_OR_expression
    : AND_expression
    | exclusive_OR_expression '^' AND_expression
    ;

inclusive_OR_expression
    : exclusive_OR_expression
    | inclusive_OR_expression '|' exclusive_OR_expression
    ;

logical_AND_expression
    : inclusive_OR_expression
    | logical_AND_expression AND_OP inclusive_OR_expression
    ;

logical_OR_expression
    : logical_AND_expression
    | logical_OR_expression OR_OP logical_AND_expression
    ;

conditional_expression
    : logical_OR_expression
    | logical_OR_expression '?' expression ':' conditional_expression
    ;

assignment_expression
    : conditional_expression
    | unary_expression assignment_operator assignment_expression
    ;

assignment_operator
    : '=' | MUL_ASSIGN | DIV_ASSIGN | MOD_ASSIGN | ADD_ASSIGN
    | SUB_ASSIGN | LEFT_ASSIGN | RIGHT_ASSIGN | AND_ASSIGN | XOR_ASSIGN | OR_ASSIGN
    ;

expression
    : assignment_expression
    | expression ',' assignment_expression
    ;

expression_opt
    : expression
    | /* epsilon */
    ;

constant_expression
    : conditional_expression
    ;

/* ---------------- 2. DECLARATIONS ---------------- */

declaration
    : declaration_specifiers init_declarator_list_opt ';'
    ;

init_declarator_list_opt
    : init_declarator_list
    | /* epsilon */
    ;

declaration_specifiers
    : storage_class_specifier declaration_specifiers_opt
    | type_specifier declaration_specifiers_opt
    | type_qualifier declaration_specifiers_opt
    | function_specifier declaration_specifiers_opt
    ;

declaration_specifiers_opt
    : declaration_specifiers
    | /* epsilon */
    ;

init_declarator_list
    : init_declarator
    | init_declarator_list ',' init_declarator
    ;

init_declarator
    : declarator
    | declarator '=' initializer
    ;

storage_class_specifier
    : EXTERN | STATIC | AUTO | REGISTER
    ;

type_specifier
    : VOID | CHAR | SHORT | INT | LONG | FLOAT | DOUBLE
    | SIGNED | UNSIGNED | BOOL | COMPLEX | IMAGINARY
    | enum_specifier
    ;

specifier_qualifier_list
    : type_specifier specifier_qualifier_list_opt
    | type_qualifier specifier_qualifier_list_opt
    ;

specifier_qualifier_list_opt
    : specifier_qualifier_list
    | /* epsilon */
    ;

enum_specifier
    : ENUM identifier_opt '{' enumerator_list '}'
    | ENUM identifier_opt '{' enumerator_list ',' '}'
    | ENUM IDENTIFIER
    ;

identifier_opt
    : IDENTIFIER
    | /* epsilon */
    ;

enumerator_list
    : enumerator
    | enumerator_list ',' enumerator
    ;

enumerator
    : IDENTIFIER
    | IDENTIFIER '=' constant_expression
    ;

type_qualifier
    : CONST | RESTRICT | VOLATILE
    ;

function_specifier
    : INLINE
    ;

declarator
    : pointer_opt direct_declarator
    ;

pointer_opt
    : pointer
    | /* epsilon */
    ;

direct_declarator
    : IDENTIFIER
    | '(' declarator ')'
    | direct_declarator '[' type_qualifier_list_opt assignment_expression_opt ']'
    | direct_declarator '[' STATIC type_qualifier_list_opt assignment_expression ']'
    | direct_declarator '[' type_qualifier_list STATIC assignment_expression ']'
    | direct_declarator '[' type_qualifier_list_opt '*' ']'
    | direct_declarator '(' parameter_type_list ')'
    | direct_declarator '(' identifier_list_opt ')'
    ;

assignment_expression_opt
    : assignment_expression
    | /* epsilon */
    ;

identifier_list_opt
    : identifier_list
    | /* epsilon */
    ;

pointer
    : '*' type_qualifier_list_opt
    | '*' type_qualifier_list_opt pointer
    ;

type_qualifier_list
    : type_qualifier
    | type_qualifier_list type_qualifier
    ;

type_qualifier_list_opt
    : type_qualifier_list
    | /* epsilon */
    ;

parameter_type_list
    : parameter_list
    | parameter_list ',' ELLIPSIS
    ;

parameter_list
    : parameter_declaration
    | parameter_list ',' parameter_declaration
    ;

parameter_declaration
    : declaration_specifiers declarator
    | declaration_specifiers
    ;

identifier_list
    : IDENTIFIER
    | identifier_list ',' IDENTIFIER
    ;

type_name
    : specifier_qualifier_list
    ;

initializer
    : assignment_expression
    | '{' initializer_list '}'
    | '{' initializer_list ',' '}'
    ;

initializer_list
    : designation_opt initializer
    | initializer_list ',' designation_opt initializer
    ;

designation_opt
    : designation
    | /* epsilon */
    ;

designation
    : designator_list '='
    ;

designator_list
    : designator
    | designator_list designator
    ;

designator
    : '[' constant_expression ']'
    | '.' IDENTIFIER
    ;

/* ---------------- 3. STATEMENTS ---------------- */

statement
    : labeled_statement
    | compound_statement
    | expression_statement
    | selection_statement
    | iteration_statement
    | jump_statement
    ;

labeled_statement
    : IDENTIFIER ':' statement
    | CASE constant_expression ':' statement
    | DEFAULT ':' statement
    ;

compound_statement
    : '{' block_item_list_opt '}'
    ;

block_item_list_opt
    : block_item_list
    | /* epsilon */
    ;

block_item_list
    : block_item
    | block_item_list block_item
    ;

block_item
    : declaration
    | statement
    ;

expression_statement
    : expression_opt ';'
    ;

selection_statement
    : IF '(' expression ')' statement %prec LOWER_THAN_ELSE
    | IF '(' expression ')' statement ELSE statement
    | SWITCH '(' expression ')' statement
    ;

iteration_statement
    : WHILE '(' expression ')' statement
    | DO statement WHILE '(' expression ')' ';'
    | FOR '(' expression_opt ';' expression_opt ';' expression_opt ')' statement
    | FOR '(' declaration expression_opt ';' expression_opt ')' statement
    ;

jump_statement
    : GOTO IDENTIFIER ';'
    | CONTINUE ';'
    | BREAK ';'
    | RETURN expression_opt ';'
    ;

/* ---------------- 4. EXTERNAL DEFINITIONS ---------------- */

translation_unit
    : external_declaration
    | translation_unit external_declaration
    ;

external_declaration
    : function_definition
    | declaration
    ;

function_definition
    : declaration_specifiers declarator declaration_list_opt compound_statement
    ;

declaration_list_opt
    : declaration_list
    | /* epsilon */
    ;

declaration_list
    : declaration
    | declaration_list declaration
    ;

%%

void yyerror(const char *s) {
    printf("Parsing Error: %s at or near line %d\n", s, yylineno);
}

int main() {
    printf("--- Beginning Parsing ---\n");
    if (yyparse() == 0) {
        printf("Parsing completed successfully! Input matches tinyC grammar.\n");
    } else {
        printf("Parsing failed.\n");
    }
    return 0;
}
