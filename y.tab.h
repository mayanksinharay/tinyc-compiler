/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    IDENTIFIER = 258,              /* IDENTIFIER  */
    STRING_LITERAL = 259,          /* STRING_LITERAL  */
    INT_CONSTANT = 260,            /* INT_CONSTANT  */
    FLOAT_CONSTANT = 261,          /* FLOAT_CONSTANT  */
    CHAR_CONSTANT = 262,           /* CHAR_CONSTANT  */
    AUTO = 263,                    /* AUTO  */
    BREAK = 264,                   /* BREAK  */
    CASE = 265,                    /* CASE  */
    CHAR = 266,                    /* CHAR  */
    CONST = 267,                   /* CONST  */
    CONTINUE = 268,                /* CONTINUE  */
    DEFAULT = 269,                 /* DEFAULT  */
    DO = 270,                      /* DO  */
    DOUBLE = 271,                  /* DOUBLE  */
    ELSE = 272,                    /* ELSE  */
    ENUM = 273,                    /* ENUM  */
    EXTERN = 274,                  /* EXTERN  */
    FLOAT = 275,                   /* FLOAT  */
    FOR = 276,                     /* FOR  */
    GOTO = 277,                    /* GOTO  */
    IF = 278,                      /* IF  */
    INLINE = 279,                  /* INLINE  */
    INT = 280,                     /* INT  */
    LONG = 281,                    /* LONG  */
    REGISTER = 282,                /* REGISTER  */
    RESTRICT = 283,                /* RESTRICT  */
    RETURN = 284,                  /* RETURN  */
    SHORT = 285,                   /* SHORT  */
    SIGNED = 286,                  /* SIGNED  */
    SIZEOF = 287,                  /* SIZEOF  */
    STATIC = 288,                  /* STATIC  */
    STRUCT = 289,                  /* STRUCT  */
    SWITCH = 290,                  /* SWITCH  */
    TYPEDEF = 291,                 /* TYPEDEF  */
    UNION = 292,                   /* UNION  */
    UNSIGNED = 293,                /* UNSIGNED  */
    VOID = 294,                    /* VOID  */
    VOLATILE = 295,                /* VOLATILE  */
    WHILE = 296,                   /* WHILE  */
    BOOL = 297,                    /* BOOL  */
    COMPLEX = 298,                 /* COMPLEX  */
    IMAGINARY = 299,               /* IMAGINARY  */
    ELLIPSIS = 300,                /* ELLIPSIS  */
    RIGHT_ASSIGN = 301,            /* RIGHT_ASSIGN  */
    LEFT_ASSIGN = 302,             /* LEFT_ASSIGN  */
    ADD_ASSIGN = 303,              /* ADD_ASSIGN  */
    SUB_ASSIGN = 304,              /* SUB_ASSIGN  */
    MUL_ASSIGN = 305,              /* MUL_ASSIGN  */
    DIV_ASSIGN = 306,              /* DIV_ASSIGN  */
    MOD_ASSIGN = 307,              /* MOD_ASSIGN  */
    AND_ASSIGN = 308,              /* AND_ASSIGN  */
    XOR_ASSIGN = 309,              /* XOR_ASSIGN  */
    OR_ASSIGN = 310,               /* OR_ASSIGN  */
    RIGHT_OP = 311,                /* RIGHT_OP  */
    LEFT_OP = 312,                 /* LEFT_OP  */
    INC_OP = 313,                  /* INC_OP  */
    DEC_OP = 314,                  /* DEC_OP  */
    PTR_OP = 315,                  /* PTR_OP  */
    AND_OP = 316,                  /* AND_OP  */
    OR_OP = 317,                   /* OR_OP  */
    LE_OP = 318,                   /* LE_OP  */
    GE_OP = 319,                   /* GE_OP  */
    EQ_OP = 320,                   /* EQ_OP  */
    NE_OP = 321,                   /* NE_OP  */
    LOWER_THAN_ELSE = 322          /* LOWER_THAN_ELSE  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 10 "tinyC.y"

    int intval;
    float floatval;
    char *sval;

#line 137 "y.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
