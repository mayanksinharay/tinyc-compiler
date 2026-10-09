/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "tinyC.y"

#include <stdio.h>
#include <stdlib.h>

extern int yylex(void);
extern int yylineno;
void yyerror(const char *s);

#line 80 "tinyC.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

#include "tinyC.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_IDENTIFIER = 3,                 /* IDENTIFIER  */
  YYSYMBOL_STRING_LITERAL = 4,             /* STRING_LITERAL  */
  YYSYMBOL_INT_CONSTANT = 5,               /* INT_CONSTANT  */
  YYSYMBOL_FLOAT_CONSTANT = 6,             /* FLOAT_CONSTANT  */
  YYSYMBOL_CHAR_CONSTANT = 7,              /* CHAR_CONSTANT  */
  YYSYMBOL_AUTO = 8,                       /* AUTO  */
  YYSYMBOL_BREAK = 9,                      /* BREAK  */
  YYSYMBOL_CASE = 10,                      /* CASE  */
  YYSYMBOL_CHAR = 11,                      /* CHAR  */
  YYSYMBOL_CONST = 12,                     /* CONST  */
  YYSYMBOL_CONTINUE = 13,                  /* CONTINUE  */
  YYSYMBOL_DEFAULT = 14,                   /* DEFAULT  */
  YYSYMBOL_DO = 15,                        /* DO  */
  YYSYMBOL_DOUBLE = 16,                    /* DOUBLE  */
  YYSYMBOL_ELSE = 17,                      /* ELSE  */
  YYSYMBOL_ENUM = 18,                      /* ENUM  */
  YYSYMBOL_EXTERN = 19,                    /* EXTERN  */
  YYSYMBOL_FLOAT = 20,                     /* FLOAT  */
  YYSYMBOL_FOR = 21,                       /* FOR  */
  YYSYMBOL_GOTO = 22,                      /* GOTO  */
  YYSYMBOL_IF = 23,                        /* IF  */
  YYSYMBOL_INLINE = 24,                    /* INLINE  */
  YYSYMBOL_INT = 25,                       /* INT  */
  YYSYMBOL_LONG = 26,                      /* LONG  */
  YYSYMBOL_REGISTER = 27,                  /* REGISTER  */
  YYSYMBOL_RESTRICT = 28,                  /* RESTRICT  */
  YYSYMBOL_RETURN = 29,                    /* RETURN  */
  YYSYMBOL_SHORT = 30,                     /* SHORT  */
  YYSYMBOL_SIGNED = 31,                    /* SIGNED  */
  YYSYMBOL_SIZEOF = 32,                    /* SIZEOF  */
  YYSYMBOL_STATIC = 33,                    /* STATIC  */
  YYSYMBOL_STRUCT = 34,                    /* STRUCT  */
  YYSYMBOL_SWITCH = 35,                    /* SWITCH  */
  YYSYMBOL_TYPEDEF = 36,                   /* TYPEDEF  */
  YYSYMBOL_UNION = 37,                     /* UNION  */
  YYSYMBOL_UNSIGNED = 38,                  /* UNSIGNED  */
  YYSYMBOL_VOID = 39,                      /* VOID  */
  YYSYMBOL_VOLATILE = 40,                  /* VOLATILE  */
  YYSYMBOL_WHILE = 41,                     /* WHILE  */
  YYSYMBOL_BOOL = 42,                      /* BOOL  */
  YYSYMBOL_COMPLEX = 43,                   /* COMPLEX  */
  YYSYMBOL_IMAGINARY = 44,                 /* IMAGINARY  */
  YYSYMBOL_ELLIPSIS = 45,                  /* ELLIPSIS  */
  YYSYMBOL_RIGHT_ASSIGN = 46,              /* RIGHT_ASSIGN  */
  YYSYMBOL_LEFT_ASSIGN = 47,               /* LEFT_ASSIGN  */
  YYSYMBOL_ADD_ASSIGN = 48,                /* ADD_ASSIGN  */
  YYSYMBOL_SUB_ASSIGN = 49,                /* SUB_ASSIGN  */
  YYSYMBOL_MUL_ASSIGN = 50,                /* MUL_ASSIGN  */
  YYSYMBOL_DIV_ASSIGN = 51,                /* DIV_ASSIGN  */
  YYSYMBOL_MOD_ASSIGN = 52,                /* MOD_ASSIGN  */
  YYSYMBOL_AND_ASSIGN = 53,                /* AND_ASSIGN  */
  YYSYMBOL_XOR_ASSIGN = 54,                /* XOR_ASSIGN  */
  YYSYMBOL_OR_ASSIGN = 55,                 /* OR_ASSIGN  */
  YYSYMBOL_RIGHT_OP = 56,                  /* RIGHT_OP  */
  YYSYMBOL_LEFT_OP = 57,                   /* LEFT_OP  */
  YYSYMBOL_INC_OP = 58,                    /* INC_OP  */
  YYSYMBOL_DEC_OP = 59,                    /* DEC_OP  */
  YYSYMBOL_PTR_OP = 60,                    /* PTR_OP  */
  YYSYMBOL_AND_OP = 61,                    /* AND_OP  */
  YYSYMBOL_OR_OP = 62,                     /* OR_OP  */
  YYSYMBOL_LE_OP = 63,                     /* LE_OP  */
  YYSYMBOL_GE_OP = 64,                     /* GE_OP  */
  YYSYMBOL_EQ_OP = 65,                     /* EQ_OP  */
  YYSYMBOL_NE_OP = 66,                     /* NE_OP  */
  YYSYMBOL_LOWER_THAN_ELSE = 67,           /* LOWER_THAN_ELSE  */
  YYSYMBOL_68_ = 68,                       /* '('  */
  YYSYMBOL_69_ = 69,                       /* ')'  */
  YYSYMBOL_70_ = 70,                       /* '['  */
  YYSYMBOL_71_ = 71,                       /* ']'  */
  YYSYMBOL_72_ = 72,                       /* '.'  */
  YYSYMBOL_73_ = 73,                       /* '{'  */
  YYSYMBOL_74_ = 74,                       /* '}'  */
  YYSYMBOL_75_ = 75,                       /* ','  */
  YYSYMBOL_76_ = 76,                       /* '&'  */
  YYSYMBOL_77_ = 77,                       /* '*'  */
  YYSYMBOL_78_ = 78,                       /* '+'  */
  YYSYMBOL_79_ = 79,                       /* '-'  */
  YYSYMBOL_80_ = 80,                       /* '~'  */
  YYSYMBOL_81_ = 81,                       /* '!'  */
  YYSYMBOL_82_ = 82,                       /* '/'  */
  YYSYMBOL_83_ = 83,                       /* '%'  */
  YYSYMBOL_84_ = 84,                       /* '<'  */
  YYSYMBOL_85_ = 85,                       /* '>'  */
  YYSYMBOL_86_ = 86,                       /* '^'  */
  YYSYMBOL_87_ = 87,                       /* '|'  */
  YYSYMBOL_88_ = 88,                       /* '?'  */
  YYSYMBOL_89_ = 89,                       /* ':'  */
  YYSYMBOL_90_ = 90,                       /* '='  */
  YYSYMBOL_91_ = 91,                       /* ';'  */
  YYSYMBOL_YYACCEPT = 92,                  /* $accept  */
  YYSYMBOL_primary_expression = 93,        /* primary_expression  */
  YYSYMBOL_postfix_expression = 94,        /* postfix_expression  */
  YYSYMBOL_argument_expression_list_opt = 95, /* argument_expression_list_opt  */
  YYSYMBOL_argument_expression_list = 96,  /* argument_expression_list  */
  YYSYMBOL_unary_expression = 97,          /* unary_expression  */
  YYSYMBOL_unary_operator = 98,            /* unary_operator  */
  YYSYMBOL_cast_expression = 99,           /* cast_expression  */
  YYSYMBOL_multiplicative_expression = 100, /* multiplicative_expression  */
  YYSYMBOL_additive_expression = 101,      /* additive_expression  */
  YYSYMBOL_shift_expression = 102,         /* shift_expression  */
  YYSYMBOL_relational_expression = 103,    /* relational_expression  */
  YYSYMBOL_equality_expression = 104,      /* equality_expression  */
  YYSYMBOL_AND_expression = 105,           /* AND_expression  */
  YYSYMBOL_exclusive_OR_expression = 106,  /* exclusive_OR_expression  */
  YYSYMBOL_inclusive_OR_expression = 107,  /* inclusive_OR_expression  */
  YYSYMBOL_logical_AND_expression = 108,   /* logical_AND_expression  */
  YYSYMBOL_logical_OR_expression = 109,    /* logical_OR_expression  */
  YYSYMBOL_conditional_expression = 110,   /* conditional_expression  */
  YYSYMBOL_assignment_expression = 111,    /* assignment_expression  */
  YYSYMBOL_assignment_operator = 112,      /* assignment_operator  */
  YYSYMBOL_expression = 113,               /* expression  */
  YYSYMBOL_expression_opt = 114,           /* expression_opt  */
  YYSYMBOL_constant_expression = 115,      /* constant_expression  */
  YYSYMBOL_declaration = 116,              /* declaration  */
  YYSYMBOL_init_declarator_list_opt = 117, /* init_declarator_list_opt  */
  YYSYMBOL_declaration_specifiers = 118,   /* declaration_specifiers  */
  YYSYMBOL_declaration_specifiers_opt = 119, /* declaration_specifiers_opt  */
  YYSYMBOL_init_declarator_list = 120,     /* init_declarator_list  */
  YYSYMBOL_init_declarator = 121,          /* init_declarator  */
  YYSYMBOL_storage_class_specifier = 122,  /* storage_class_specifier  */
  YYSYMBOL_type_specifier = 123,           /* type_specifier  */
  YYSYMBOL_specifier_qualifier_list = 124, /* specifier_qualifier_list  */
  YYSYMBOL_specifier_qualifier_list_opt = 125, /* specifier_qualifier_list_opt  */
  YYSYMBOL_enum_specifier = 126,           /* enum_specifier  */
  YYSYMBOL_identifier_opt = 127,           /* identifier_opt  */
  YYSYMBOL_enumerator_list = 128,          /* enumerator_list  */
  YYSYMBOL_enumerator = 129,               /* enumerator  */
  YYSYMBOL_type_qualifier = 130,           /* type_qualifier  */
  YYSYMBOL_function_specifier = 131,       /* function_specifier  */
  YYSYMBOL_declarator = 132,               /* declarator  */
  YYSYMBOL_pointer_opt = 133,              /* pointer_opt  */
  YYSYMBOL_direct_declarator = 134,        /* direct_declarator  */
  YYSYMBOL_assignment_expression_opt = 135, /* assignment_expression_opt  */
  YYSYMBOL_identifier_list_opt = 136,      /* identifier_list_opt  */
  YYSYMBOL_pointer = 137,                  /* pointer  */
  YYSYMBOL_type_qualifier_list = 138,      /* type_qualifier_list  */
  YYSYMBOL_type_qualifier_list_opt = 139,  /* type_qualifier_list_opt  */
  YYSYMBOL_parameter_type_list = 140,      /* parameter_type_list  */
  YYSYMBOL_parameter_list = 141,           /* parameter_list  */
  YYSYMBOL_parameter_declaration = 142,    /* parameter_declaration  */
  YYSYMBOL_identifier_list = 143,          /* identifier_list  */
  YYSYMBOL_type_name = 144,                /* type_name  */
  YYSYMBOL_initializer = 145,              /* initializer  */
  YYSYMBOL_initializer_list = 146,         /* initializer_list  */
  YYSYMBOL_designation_opt = 147,          /* designation_opt  */
  YYSYMBOL_designation = 148,              /* designation  */
  YYSYMBOL_designator_list = 149,          /* designator_list  */
  YYSYMBOL_designator = 150,               /* designator  */
  YYSYMBOL_statement = 151,                /* statement  */
  YYSYMBOL_labeled_statement = 152,        /* labeled_statement  */
  YYSYMBOL_compound_statement = 153,       /* compound_statement  */
  YYSYMBOL_block_item_list_opt = 154,      /* block_item_list_opt  */
  YYSYMBOL_block_item_list = 155,          /* block_item_list  */
  YYSYMBOL_block_item = 156,               /* block_item  */
  YYSYMBOL_expression_statement = 157,     /* expression_statement  */
  YYSYMBOL_selection_statement = 158,      /* selection_statement  */
  YYSYMBOL_iteration_statement = 159,      /* iteration_statement  */
  YYSYMBOL_jump_statement = 160,           /* jump_statement  */
  YYSYMBOL_translation_unit = 161,         /* translation_unit  */
  YYSYMBOL_external_declaration = 162,     /* external_declaration  */
  YYSYMBOL_function_definition = 163,      /* function_definition  */
  YYSYMBOL_declaration_list_opt = 164,     /* declaration_list_opt  */
  YYSYMBOL_declaration_list = 165          /* declaration_list  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_int16 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if !defined yyoverflow

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* !defined yyoverflow */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  46
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1001

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  92
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  74
/* YYNRULES -- Number of rules.  */
#define YYNRULES  208
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  338

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   322


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    81,     2,     2,     2,    83,    76,     2,
      68,    69,    77,    78,    75,    79,    72,    82,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    89,    91,
      84,    90,    85,    88,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    70,     2,    71,    86,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    73,    87,    74,    80,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    40,    40,    41,    42,    43,    44,    45,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    61,    62,    66,
      67,    71,    72,    73,    74,    75,    76,    80,    80,    80,
      80,    80,    80,    84,    85,    89,    90,    91,    92,    96,
      97,    98,   102,   103,   104,   108,   109,   110,   111,   112,
     116,   117,   118,   122,   123,   127,   128,   132,   133,   137,
     138,   142,   143,   147,   148,   152,   153,   157,   157,   157,
     157,   157,   158,   158,   158,   158,   158,   158,   162,   163,
     167,   168,   172,   178,   182,   183,   187,   188,   189,   190,
     194,   195,   199,   200,   204,   205,   209,   209,   209,   209,
     213,   213,   213,   213,   213,   213,   213,   214,   214,   214,
     214,   214,   215,   219,   220,   224,   225,   229,   230,   231,
     235,   236,   240,   241,   245,   246,   250,   250,   250,   254,
     258,   262,   263,   267,   268,   269,   270,   271,   272,   273,
     274,   278,   279,   283,   284,   288,   289,   293,   294,   298,
     299,   303,   304,   308,   309,   313,   314,   318,   319,   323,
     327,   328,   329,   333,   334,   338,   339,   343,   347,   348,
     352,   353,   359,   360,   361,   362,   363,   364,   368,   369,
     370,   374,   378,   379,   383,   384,   388,   389,   393,   397,
     398,   399,   403,   404,   405,   406,   410,   411,   412,   413,
     419,   420,   424,   425,   429,   433,   434,   438,   439
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "IDENTIFIER",
  "STRING_LITERAL", "INT_CONSTANT", "FLOAT_CONSTANT", "CHAR_CONSTANT",
  "AUTO", "BREAK", "CASE", "CHAR", "CONST", "CONTINUE", "DEFAULT", "DO",
  "DOUBLE", "ELSE", "ENUM", "EXTERN", "FLOAT", "FOR", "GOTO", "IF",
  "INLINE", "INT", "LONG", "REGISTER", "RESTRICT", "RETURN", "SHORT",
  "SIGNED", "SIZEOF", "STATIC", "STRUCT", "SWITCH", "TYPEDEF", "UNION",
  "UNSIGNED", "VOID", "VOLATILE", "WHILE", "BOOL", "COMPLEX", "IMAGINARY",
  "ELLIPSIS", "RIGHT_ASSIGN", "LEFT_ASSIGN", "ADD_ASSIGN", "SUB_ASSIGN",
  "MUL_ASSIGN", "DIV_ASSIGN", "MOD_ASSIGN", "AND_ASSIGN", "XOR_ASSIGN",
  "OR_ASSIGN", "RIGHT_OP", "LEFT_OP", "INC_OP", "DEC_OP", "PTR_OP",
  "AND_OP", "OR_OP", "LE_OP", "GE_OP", "EQ_OP", "NE_OP", "LOWER_THAN_ELSE",
  "'('", "')'", "'['", "']'", "'.'", "'{'", "'}'", "','", "'&'", "'*'",
  "'+'", "'-'", "'~'", "'!'", "'/'", "'%'", "'<'", "'>'", "'^'", "'|'",
  "'?'", "':'", "'='", "';'", "$accept", "primary_expression",
  "postfix_expression", "argument_expression_list_opt",
  "argument_expression_list", "unary_expression", "unary_operator",
  "cast_expression", "multiplicative_expression", "additive_expression",
  "shift_expression", "relational_expression", "equality_expression",
  "AND_expression", "exclusive_OR_expression", "inclusive_OR_expression",
  "logical_AND_expression", "logical_OR_expression",
  "conditional_expression", "assignment_expression", "assignment_operator",
  "expression", "expression_opt", "constant_expression", "declaration",
  "init_declarator_list_opt", "declaration_specifiers",
  "declaration_specifiers_opt", "init_declarator_list", "init_declarator",
  "storage_class_specifier", "type_specifier", "specifier_qualifier_list",
  "specifier_qualifier_list_opt", "enum_specifier", "identifier_opt",
  "enumerator_list", "enumerator", "type_qualifier", "function_specifier",
  "declarator", "pointer_opt", "direct_declarator",
  "assignment_expression_opt", "identifier_list_opt", "pointer",
  "type_qualifier_list", "type_qualifier_list_opt", "parameter_type_list",
  "parameter_list", "parameter_declaration", "identifier_list",
  "type_name", "initializer", "initializer_list", "designation_opt",
  "designation", "designator_list", "designator", "statement",
  "labeled_statement", "compound_statement", "block_item_list_opt",
  "block_item_list", "block_item", "expression_statement",
  "selection_statement", "iteration_statement", "jump_statement",
  "translation_unit", "external_declaration", "function_definition",
  "declaration_list_opt", "declaration_list", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-212)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-207)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     923,  -212,  -212,  -212,  -212,    28,  -212,  -212,  -212,  -212,
    -212,  -212,  -212,  -212,  -212,  -212,  -212,  -212,  -212,  -212,
    -212,  -212,  -212,   -40,   923,   923,  -212,   923,   923,   810,
    -212,  -212,   -47,   -34,     5,   -26,    10,  -212,   217,     9,
    -212,  -212,  -212,  -212,  -212,  -212,  -212,  -212,    72,  -212,
       5,    11,  -212,    11,   622,  -212,   -40,    32,   923,  -212,
      11,    95,    19,    23,  -212,  -212,  -212,  -212,    45,  -212,
    -212,  -212,  -212,  -212,   136,   679,   679,   510,   118,  -212,
    -212,  -212,  -212,  -212,  -212,  -212,    43,   351,   703,  -212,
      68,   122,    90,    15,   140,    91,    86,   100,   116,   -42,
    -212,  -212,  -212,   273,  -212,  -212,   124,   848,     7,   703,
    -212,     8,   510,  -212,   510,  -212,  -212,  -212,   -54,   957,
    -212,   957,   155,   703,   199,   133,   622,  -212,   -56,  -212,
    -212,  -212,   228,   703,   703,   235,  -212,  -212,  -212,  -212,
    -212,  -212,  -212,  -212,  -212,  -212,  -212,   703,  -212,  -212,
     703,   703,   703,   703,   703,   703,   703,   703,   703,   703,
     703,   703,   703,   703,   703,   703,   703,   703,   703,   131,
     158,   703,   160,   157,   589,   184,   251,   190,   703,   194,
     195,   189,   174,  -212,  -212,  -212,  -212,   192,   352,  -212,
    -212,  -212,  -212,  -212,  -212,  -212,   -13,   198,   200,   196,
    -212,   197,     5,    20,   736,  -212,  -212,  -212,  -212,   201,
     204,  -212,   703,  -212,  -212,  -212,   646,   203,  -212,  -212,
      42,  -212,  -212,  -212,  -212,   206,   234,  -212,   -21,  -212,
    -212,  -212,  -212,  -212,    68,    68,   122,   122,    90,    90,
      90,    90,    15,    15,   140,    91,    86,   100,   116,    -6,
     589,  -212,   221,  -212,   589,   277,   431,   229,   703,   230,
     703,   703,  -212,  -212,  -212,  -212,  -212,  -212,   885,   316,
     703,   703,   252,  -212,   253,   249,   249,  -212,   118,  -212,
    -212,  -212,   622,  -212,   703,  -212,   703,  -212,   589,  -212,
     257,   236,   703,  -212,   -12,  -212,    -2,    79,  -212,  -212,
    -212,   255,   258,  -212,  -212,   148,  -212,  -212,  -212,  -212,
     703,   703,   237,   589,   589,   589,  -212,  -212,  -212,    92,
      80,   239,   703,   317,  -212,  -212,  -212,   242,   703,   266,
     589,  -212,   267,   589,  -212,   589,  -212,  -212
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    98,   101,   126,   106,   121,    96,   105,   129,   103,
     104,    99,   127,   102,   107,    97,   108,   100,   128,   109,
     110,   111,   203,   132,    91,    91,   112,    91,    91,     0,
     200,   202,   119,     0,   150,     0,    84,    92,    94,     0,
     131,    90,    86,    87,    88,    89,     1,   201,     0,   147,
     149,   145,    83,   132,     0,   207,   132,     0,   205,   133,
     132,   130,   124,     0,   122,   148,   146,    93,    94,     2,
       6,     3,     4,     5,     0,     0,     0,     0,   166,    27,
      28,    29,    30,    31,    32,     8,    21,    33,     0,    35,
      39,    42,    45,    50,    53,    55,    57,    59,    61,    63,
      65,   160,    95,    81,   204,   208,     0,   144,   150,     0,
     117,     0,     0,    25,     0,    22,    23,    78,     0,   116,
     159,   116,     0,     0,     0,     0,     0,   165,     0,   168,
      13,    14,     0,    18,     0,     0,    74,    73,    71,    72,
      68,    69,    70,    75,    76,    77,    67,     0,    33,    24,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     2,
       0,     0,     0,     0,    81,     0,     0,     0,    81,     0,
       0,    80,     0,   186,   187,   172,   173,     0,    81,   184,
     174,   175,   176,   177,   134,   157,   132,     0,     0,   151,
     153,   143,   150,   149,   142,    82,   125,   118,   123,     0,
       0,     7,     0,   115,   113,   114,     0,     0,   171,   161,
     166,   163,   167,   169,    12,     0,    17,    19,     0,    11,
      66,    36,    37,    38,    40,    41,    44,    43,    48,    49,
      46,    47,    51,    52,    54,    56,    58,    60,    62,     0,
      81,   198,     0,   197,    81,     0,    81,     0,     0,     0,
       0,     0,   188,   181,   185,   155,   140,   139,     0,     0,
       0,     0,    28,   141,     0,    26,     0,    79,   166,    34,
     170,   162,     0,    10,     0,     9,     0,   178,    81,   180,
       0,     0,    81,   196,     0,   199,     0,     0,   152,   154,
     158,     0,     0,   138,   135,     0,   164,    20,    64,   179,
       0,    81,     0,    81,    81,    81,   136,   137,    15,   166,
       0,     0,    81,   189,   191,   192,    16,     0,    81,     0,
      81,   193,     0,    81,   190,    81,   195,   194
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -212,  -212,  -212,  -212,  -212,   -33,  -212,   -80,    57,    71,
      -1,    78,   175,   173,   177,   178,   172,  -212,  -105,   -52,
    -212,   -76,  -119,  -110,   -35,  -212,     0,   151,  -212,   287,
    -212,   -25,    77,   222,  -212,  -212,  -212,   275,   -28,  -212,
     -16,  -212,  -212,  -212,  -212,   294,   240,   -98,  -212,  -212,
     101,  -212,    85,  -121,   110,  -211,  -212,  -212,   261,  -144,
    -212,   350,  -212,  -212,   220,  -212,  -212,  -212,  -212,  -212,
     380,  -212,  -212,  -212
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,    85,    86,   225,   226,    87,    88,    89,    90,    91,
      92,    93,    94,    95,    96,    97,    98,    99,   100,   117,
     147,   181,   182,   206,    22,    35,    56,    42,    36,    37,
      24,    25,   120,   214,    26,    33,    63,    64,    27,    28,
      68,    39,    61,   274,   197,    40,    50,    51,   198,   199,
     200,   201,   122,   102,   125,   126,   127,   128,   129,   184,
     185,   186,   187,   188,   189,   190,   191,   192,   193,    29,
      30,    31,    57,    58
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      23,   118,   101,    55,   205,   221,    49,    38,   149,   282,
     204,    62,    59,   217,   123,   211,   124,     3,   205,     3,
     167,   212,    65,   105,    41,    41,  -120,    41,    41,    23,
     255,    32,     3,    12,   222,    12,   118,    34,   118,    48,
     202,   113,   115,   116,   106,    18,   168,    18,    12,   121,
     285,   -85,   119,   271,   212,   148,  -156,   313,   228,   259,
      18,   252,  -156,   212,    34,    52,   205,   314,   183,   212,
     231,   232,   233,   212,   101,    62,   148,    60,   157,   158,
      49,   227,   207,   286,   121,    53,   121,   119,    34,   119,
     148,   121,   249,   121,   119,   230,   119,   110,   111,   159,
     160,   130,   131,   132,   270,   103,   287,   196,   282,   109,
     289,   133,   123,   134,   124,   135,   281,   148,   148,   148,
     148,   148,   148,   148,   148,   148,   148,   148,   148,   148,
     148,   148,   148,   148,   148,    54,   279,   291,   148,    69,
      70,    71,    72,    73,   309,   150,   155,   156,   315,   327,
     151,   152,   273,   183,   212,   212,   238,   239,   240,   241,
     277,   306,   123,   107,   124,   108,   326,   163,    74,   323,
     324,   325,   164,   312,    49,    65,    43,   166,    44,    45,
     265,   308,   294,   148,   296,   297,   334,   165,   123,   336,
     124,   337,   321,   194,    75,    76,   213,   209,   213,   210,
     153,   154,   218,   329,   112,   161,   162,   219,   220,   332,
     234,   235,    79,    80,    81,    82,    83,    84,   301,   302,
     250,   292,   318,   319,   216,     1,   236,   237,     2,     3,
     101,   224,   307,     4,   320,     5,     6,     7,   229,   242,
     243,     8,     9,    10,    11,    12,   254,    13,    14,   251,
      15,   253,   256,   148,   257,    16,    17,    18,   258,    19,
      20,    21,   260,   261,   212,   262,   263,   266,   196,   267,
     275,   268,   269,   276,   280,   283,   169,    70,    71,    72,
      73,     1,   170,   171,     2,     3,   172,   173,   174,     4,
    -206,     5,     6,     7,   175,   176,   177,     8,     9,    10,
      11,    12,   178,    13,    14,    74,    15,    54,   179,   284,
     288,    16,    17,    18,   180,    19,    20,    21,   290,   300,
     293,   295,   278,   303,   304,   310,   316,   311,   322,   317,
     328,    75,    76,   331,   330,   333,   335,   245,   244,   248,
      67,    77,   246,   215,   247,    66,   103,  -183,   203,    79,
      80,    81,    82,    83,    84,   169,    70,    71,    72,    73,
       1,   170,   171,     2,     3,   172,   173,   174,     4,   299,
       5,     6,     7,   175,   176,   177,     8,     9,    10,    11,
      12,   178,    13,    14,    74,    15,   208,   179,   305,   223,
      16,    17,    18,   180,    19,    20,    21,   136,   137,   138,
     139,   140,   141,   142,   143,   144,   145,   104,   264,    47,
      75,    76,     0,     0,     0,     0,     0,     0,     0,     0,
      77,     0,     0,     0,     0,   103,  -182,     0,    79,    80,
      81,    82,    83,    84,    69,    70,    71,    72,    73,     1,
       0,   146,     2,     3,     0,     0,     0,     4,     0,     5,
       6,     7,     0,     0,     0,     8,     9,    10,    11,    12,
       0,    13,    14,    74,    15,     0,     0,     0,     0,    16,
      17,    18,     0,    19,    20,    21,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    75,
      76,     0,     0,     0,     0,     0,     0,     0,     0,    77,
       0,     0,     0,     0,     0,     0,     0,    79,    80,    81,
      82,    83,    84,    69,    70,    71,    72,    73,     0,     0,
       0,     2,     3,     0,     0,     0,     4,     0,     5,     0,
       7,     0,     0,     0,     0,     9,    10,     0,    12,     0,
      13,    14,    74,     0,     0,     0,     0,     0,    16,    17,
      18,     0,    19,    20,    21,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    75,    76,
       0,     0,     0,     0,     0,     0,     0,     0,    77,     0,
       0,     0,     0,     0,     0,     0,    79,    80,    81,    82,
      83,    84,   169,    70,    71,    72,    73,     0,   170,   171,
       0,     0,   172,   173,   174,     0,     0,     0,     0,     0,
     175,   176,   177,     0,     0,     0,     0,     0,   178,     0,
       0,    74,     0,     0,   179,    69,    70,    71,    72,    73,
     180,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    75,    76,    69,
      70,    71,    72,    73,    74,     0,     0,    77,     0,     0,
       0,     0,   103,     0,     0,    79,    80,    81,    82,    83,
      84,     0,     0,     0,     0,     0,     0,     0,    74,     0,
      75,    76,    69,    70,    71,    72,    73,     0,     0,     0,
      77,     0,     0,     0,     0,    78,     0,     0,    79,    80,
      81,    82,    83,    84,    75,    76,    69,    70,    71,    72,
      73,    74,     0,     0,    77,     0,     0,     0,     0,   278,
       0,     0,    79,    80,    81,    82,    83,    84,     0,     0,
       0,     0,     0,     0,     0,    74,     0,    75,    76,    69,
      70,    71,    72,    73,     0,     0,     0,   114,     0,     0,
       0,     0,     0,     0,     0,    79,    80,    81,    82,    83,
      84,    75,    76,     0,     0,     0,     0,     0,    74,     0,
       0,    77,     0,     0,     0,     0,     0,     0,     0,    79,
      80,    81,    82,    83,    84,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    75,    76,     0,     0,     0,     0,
       0,     0,     0,     0,    77,     0,     0,     0,     0,     0,
      46,     0,    79,   272,    81,    82,    83,    84,     1,     0,
       0,     2,     3,     0,     0,     0,     4,     0,     5,     6,
       7,     0,     0,     0,     8,     9,    10,    11,    12,     0,
      13,    14,     0,    15,     0,     0,     0,     0,    16,    17,
      18,   195,    19,    20,    21,     0,     1,     0,     0,     2,
       3,     0,     0,     0,     4,     0,     5,     6,     7,     0,
       0,     0,     8,     9,    10,    11,    12,     0,    13,    14,
       0,    15,     0,     0,     0,     0,    16,    17,    18,     0,
      19,    20,    21,     1,     0,     0,     2,     3,     0,     0,
       0,     4,     0,     5,     6,     7,     0,     0,     0,     8,
       9,    10,    11,    12,     0,    13,    14,     0,    15,     0,
       0,     0,     0,    16,    17,    18,     0,    19,    20,    21,
     298,     1,     0,     0,     2,     3,     0,     0,     0,     4,
       0,     5,     6,     7,     0,     0,     0,     8,     9,    10,
      11,    12,     0,    13,    14,     0,    15,     0,     0,     0,
       0,    16,    17,    18,     0,    19,    20,    21,     2,     3,
       0,     0,     0,     4,     0,     5,     0,     7,     0,     0,
       0,     0,     9,    10,     0,    12,     0,    13,    14,     0,
       0,     0,     0,     0,     0,    16,    17,    18,     0,    19,
      20,    21
};

static const yytype_int16 yycheck[] =
{
       0,    77,    54,    38,   109,   126,    34,    23,    88,   220,
     108,     3,     3,   123,    70,    69,    72,    12,   123,    12,
      62,    75,    50,    58,    24,    25,    73,    27,    28,    29,
     174,     3,    12,    28,    90,    28,   112,    77,   114,    73,
      33,    74,    75,    76,    60,    40,    88,    40,    28,    77,
      71,    91,    77,    33,    75,    88,    69,    69,   134,   178,
      40,   171,    75,    75,    77,    91,   171,    69,   103,    75,
     150,   151,   152,    75,   126,     3,   109,    68,    63,    64,
     108,   133,    74,    89,   112,    75,   114,   112,    77,   114,
     123,   119,   168,   121,   119,   147,   121,    74,    75,    84,
      85,    58,    59,    60,   202,    73,   250,   107,   319,    90,
     254,    68,    70,    70,    72,    72,    74,   150,   151,   152,
     153,   154,   155,   156,   157,   158,   159,   160,   161,   162,
     163,   164,   165,   166,   167,    90,   216,   256,   171,     3,
       4,     5,     6,     7,   288,    77,    56,    57,    69,    69,
      82,    83,   204,   188,    75,    75,   157,   158,   159,   160,
     212,   282,    70,    68,    72,    70,    74,    76,    32,   313,
     314,   315,    86,   292,   202,   203,    25,    61,    27,    28,
     196,   286,   258,   216,   260,   261,   330,    87,    70,   333,
      72,   335,   311,    69,    58,    59,   119,   112,   121,   114,
      78,    79,     3,   322,    68,    65,    66,    74,    75,   328,
     153,   154,    76,    77,    78,    79,    80,    81,   270,   271,
      89,   256,    74,    75,    69,     8,   155,   156,    11,    12,
     282,     3,   284,    16,   310,    18,    19,    20,     3,   161,
     162,    24,    25,    26,    27,    28,    89,    30,    31,    91,
      33,    91,    68,   286,     3,    38,    39,    40,    68,    42,
      43,    44,    68,    68,    75,    91,    74,    69,   268,    69,
      69,    75,    75,    69,    71,    69,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      73,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    90,    35,    75,
      89,    38,    39,    40,    41,    42,    43,    44,    41,     3,
      91,    91,    73,    71,    71,    68,    71,    91,    91,    71,
      91,    58,    59,    91,    17,    69,    69,   164,   163,   167,
      53,    68,   165,   121,   166,    51,    73,    74,   108,    76,
      77,    78,    79,    80,    81,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,   268,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,   111,    35,   278,   128,
      38,    39,    40,    41,    42,    43,    44,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    57,   188,    29,
      58,    59,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      68,    -1,    -1,    -1,    -1,    73,    74,    -1,    76,    77,
      78,    79,    80,    81,     3,     4,     5,     6,     7,     8,
      -1,    90,    11,    12,    -1,    -1,    -1,    16,    -1,    18,
      19,    20,    -1,    -1,    -1,    24,    25,    26,    27,    28,
      -1,    30,    31,    32,    33,    -1,    -1,    -1,    -1,    38,
      39,    40,    -1,    42,    43,    44,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    58,
      59,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    68,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    76,    77,    78,
      79,    80,    81,     3,     4,     5,     6,     7,    -1,    -1,
      -1,    11,    12,    -1,    -1,    -1,    16,    -1,    18,    -1,
      20,    -1,    -1,    -1,    -1,    25,    26,    -1,    28,    -1,
      30,    31,    32,    -1,    -1,    -1,    -1,    -1,    38,    39,
      40,    -1,    42,    43,    44,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    58,    59,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    68,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    76,    77,    78,    79,
      80,    81,     3,     4,     5,     6,     7,    -1,     9,    10,
      -1,    -1,    13,    14,    15,    -1,    -1,    -1,    -1,    -1,
      21,    22,    23,    -1,    -1,    -1,    -1,    -1,    29,    -1,
      -1,    32,    -1,    -1,    35,     3,     4,     5,     6,     7,
      41,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    58,    59,     3,
       4,     5,     6,     7,    32,    -1,    -1,    68,    -1,    -1,
      -1,    -1,    73,    -1,    -1,    76,    77,    78,    79,    80,
      81,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    32,    -1,
      58,    59,     3,     4,     5,     6,     7,    -1,    -1,    -1,
      68,    -1,    -1,    -1,    -1,    73,    -1,    -1,    76,    77,
      78,    79,    80,    81,    58,    59,     3,     4,     5,     6,
       7,    32,    -1,    -1,    68,    -1,    -1,    -1,    -1,    73,
      -1,    -1,    76,    77,    78,    79,    80,    81,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    32,    -1,    58,    59,     3,
       4,     5,     6,     7,    -1,    -1,    -1,    68,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    76,    77,    78,    79,    80,
      81,    58,    59,    -1,    -1,    -1,    -1,    -1,    32,    -1,
      -1,    68,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    76,
      77,    78,    79,    80,    81,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    58,    59,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    68,    -1,    -1,    -1,    -1,    -1,
       0,    -1,    76,    77,    78,    79,    80,    81,     8,    -1,
      -1,    11,    12,    -1,    -1,    -1,    16,    -1,    18,    19,
      20,    -1,    -1,    -1,    24,    25,    26,    27,    28,    -1,
      30,    31,    -1,    33,    -1,    -1,    -1,    -1,    38,    39,
      40,     3,    42,    43,    44,    -1,     8,    -1,    -1,    11,
      12,    -1,    -1,    -1,    16,    -1,    18,    19,    20,    -1,
      -1,    -1,    24,    25,    26,    27,    28,    -1,    30,    31,
      -1,    33,    -1,    -1,    -1,    -1,    38,    39,    40,    -1,
      42,    43,    44,     8,    -1,    -1,    11,    12,    -1,    -1,
      -1,    16,    -1,    18,    19,    20,    -1,    -1,    -1,    24,
      25,    26,    27,    28,    -1,    30,    31,    -1,    33,    -1,
      -1,    -1,    -1,    38,    39,    40,    -1,    42,    43,    44,
      45,     8,    -1,    -1,    11,    12,    -1,    -1,    -1,    16,
      -1,    18,    19,    20,    -1,    -1,    -1,    24,    25,    26,
      27,    28,    -1,    30,    31,    -1,    33,    -1,    -1,    -1,
      -1,    38,    39,    40,    -1,    42,    43,    44,    11,    12,
      -1,    -1,    -1,    16,    -1,    18,    -1,    20,    -1,    -1,
      -1,    -1,    25,    26,    -1,    28,    -1,    30,    31,    -1,
      -1,    -1,    -1,    -1,    -1,    38,    39,    40,    -1,    42,
      43,    44
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     8,    11,    12,    16,    18,    19,    20,    24,    25,
      26,    27,    28,    30,    31,    33,    38,    39,    40,    42,
      43,    44,   116,   118,   122,   123,   126,   130,   131,   161,
     162,   163,     3,   127,    77,   117,   120,   121,   132,   133,
     137,   118,   119,   119,   119,   119,     0,   162,    73,   130,
     138,   139,    91,    75,    90,   116,   118,   164,   165,     3,
      68,   134,     3,   128,   129,   130,   137,   121,   132,     3,
       4,     5,     6,     7,    32,    58,    59,    68,    73,    76,
      77,    78,    79,    80,    81,    93,    94,    97,    98,    99,
     100,   101,   102,   103,   104,   105,   106,   107,   108,   109,
     110,   111,   145,    73,   153,   116,   132,    68,    70,    90,
      74,    75,    68,    97,    68,    97,    97,   111,   113,   123,
     124,   130,   144,    70,    72,   146,   147,   148,   149,   150,
      58,    59,    60,    68,    70,    72,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    90,   112,    97,    99,
      77,    82,    83,    78,    79,    56,    57,    63,    64,    84,
      85,    65,    66,    76,    86,    87,    61,    62,    88,     3,
       9,    10,    13,    14,    15,    21,    22,    23,    29,    35,
      41,   113,   114,   116,   151,   152,   153,   154,   155,   156,
     157,   158,   159,   160,    69,     3,   118,   136,   140,   141,
     142,   143,    33,   138,   139,   110,   115,    74,   129,   144,
     144,    69,    75,   124,   125,   125,    69,   115,     3,    74,
      75,   145,    90,   150,     3,    95,    96,   111,   113,     3,
     111,    99,    99,    99,   100,   100,   101,   101,   102,   102,
     102,   102,   103,   103,   104,   105,   106,   107,   108,   113,
      89,    91,   115,    91,    89,   151,    68,     3,    68,   114,
      68,    68,    91,    74,   156,   132,    69,    69,    75,    75,
     139,    33,    77,   111,   135,    69,    69,   111,    73,    99,
      71,    74,   147,    69,    75,    71,    89,   151,    89,   151,
      41,   114,   116,    91,   113,    91,   113,   113,    45,   142,
       3,   111,   111,    71,    71,   146,   145,   111,   110,   151,
      68,    91,   114,    69,    69,    69,    71,    71,    74,    75,
     113,   114,    91,   151,   151,   151,    74,    69,    91,   114,
      17,    91,   114,    69,   151,    69,   151,   151
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_uint8 yyr1[] =
{
       0,    92,    93,    93,    93,    93,    93,    93,    94,    94,
      94,    94,    94,    94,    94,    94,    94,    95,    95,    96,
      96,    97,    97,    97,    97,    97,    97,    98,    98,    98,
      98,    98,    98,    99,    99,   100,   100,   100,   100,   101,
     101,   101,   102,   102,   102,   103,   103,   103,   103,   103,
     104,   104,   104,   105,   105,   106,   106,   107,   107,   108,
     108,   109,   109,   110,   110,   111,   111,   112,   112,   112,
     112,   112,   112,   112,   112,   112,   112,   112,   113,   113,
     114,   114,   115,   116,   117,   117,   118,   118,   118,   118,
     119,   119,   120,   120,   121,   121,   122,   122,   122,   122,
     123,   123,   123,   123,   123,   123,   123,   123,   123,   123,
     123,   123,   123,   124,   124,   125,   125,   126,   126,   126,
     127,   127,   128,   128,   129,   129,   130,   130,   130,   131,
     132,   133,   133,   134,   134,   134,   134,   134,   134,   134,
     134,   135,   135,   136,   136,   137,   137,   138,   138,   139,
     139,   140,   140,   141,   141,   142,   142,   143,   143,   144,
     145,   145,   145,   146,   146,   147,   147,   148,   149,   149,
     150,   150,   151,   151,   151,   151,   151,   151,   152,   152,
     152,   153,   154,   154,   155,   155,   156,   156,   157,   158,
     158,   158,   159,   159,   159,   159,   160,   160,   160,   160,
     161,   161,   162,   162,   163,   164,   164,   165,   165
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     1,     1,     1,     3,     1,     4,
       4,     3,     3,     2,     2,     6,     7,     1,     0,     1,
       3,     1,     2,     2,     2,     2,     4,     1,     1,     1,
       1,     1,     1,     1,     4,     1,     3,     3,     3,     1,
       3,     3,     1,     3,     3,     1,     3,     3,     3,     3,
       1,     3,     3,     1,     3,     1,     3,     1,     3,     1,
       3,     1,     3,     1,     5,     1,     3,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     3,
       1,     0,     1,     3,     1,     0,     2,     2,     2,     2,
       1,     0,     1,     3,     1,     3,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     2,     2,     1,     0,     5,     6,     2,
       1,     0,     1,     3,     1,     3,     1,     1,     1,     1,
       2,     1,     0,     1,     3,     5,     6,     6,     5,     4,
       4,     1,     0,     1,     0,     2,     3,     1,     2,     1,
       0,     1,     3,     1,     3,     2,     1,     1,     3,     1,
       1,     3,     4,     2,     4,     1,     0,     2,     1,     2,
       3,     2,     1,     1,     1,     1,     1,     1,     3,     4,
       3,     3,     1,     0,     1,     2,     1,     1,     2,     5,
       7,     5,     5,     7,     9,     8,     3,     2,     2,     3,
       1,     2,     1,     1,     4,     1,     0,     1,     2
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)




# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;




/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */

  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */


  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;


/*-----------.
| yybackup.  |
`-----------*/
yybackup:
  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {

#line 1632 "tinyC.tab.c"

      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (YY_("syntax error"));
    }

  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;
  ++yynerrs;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 442 "tinyC.y"


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
