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
#line 1 "parser.y"

	#include <stdio.h>
	#include <string.h>
	#include <stdlib.h>
	
	void yyerror(char* s);
	int yylex();
	void ins();
	void insV();
	int flag=0;
	#define ANSI_COLOR_RED		"\x1b[31m"
	#define ANSI_COLOR_GREEN	"\x1b[32m"
	#define ANSI_COLOR_CYAN		"\x1b[36m"
	#define ANSI_COLOR_RESET	"\x1b[0m"
	extern char curid[20];
	extern char curtype[20];
	extern char curval[20];
	extern int currnest;
	void deletedata (int );
	int checkscope(char*);
	int check_id_is_func(char *);
	void insertST(char*, char*);
	void insertSTnest(char*, int);
	void insertSTparamscount(char*, int);
	int getSTparamscount(char*);
	int check_duplicate(char*);
	int check_declaration(char*, char *);
	int check_params(char*);
	int duplicate(char *s);
	int checkarray(char*);
	char currfunctype[100];
	char currfunc[100];
	char currfunccall[100];
	void insertSTF(char*);
	char gettype(char*,int);
	char getfirst(char*);
	void push(char *s);
	void codegen();
	void codeassign();
	char* itoa(int num, char* str, int base);
	void reverse(char str[], int length); 
	void swap(char*,char*);
	void label1();
	void label2();
	void label3();
	void label4();
	void label5();
	void label6();
	void genunary();
	void codegencon();
	void funcgen();
	void funcgenend();
	void arggen();
	void callgen();

	int params_count=0;
	int call_params_count=0;
	int top = 0,count=0,ltop=0,lno=0;
	char temp[3] = "t";

#line 132 "y.tab.c"

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

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
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
    IF = 258,                      /* IF  */
    INT = 259,                     /* INT  */
    CHAR = 260,                    /* CHAR  */
    FLOAT = 261,                   /* FLOAT  */
    DOUBLE = 262,                  /* DOUBLE  */
    LONG = 263,                    /* LONG  */
    SHORT = 264,                   /* SHORT  */
    SIGNED = 265,                  /* SIGNED  */
    UNSIGNED = 266,                /* UNSIGNED  */
    STRUCT = 267,                  /* STRUCT  */
    RETURN = 268,                  /* RETURN  */
    MAIN = 269,                    /* MAIN  */
    VOID = 270,                    /* VOID  */
    WHILE = 271,                   /* WHILE  */
    FOR = 272,                     /* FOR  */
    DO = 273,                      /* DO  */
    BREAK = 274,                   /* BREAK  */
    ENDIF = 275,                   /* ENDIF  */
    identifier = 276,              /* identifier  */
    array_identifier = 277,        /* array_identifier  */
    func_identifier = 278,         /* func_identifier  */
    integer_constant = 279,        /* integer_constant  */
    string_constant = 280,         /* string_constant  */
    float_constant = 281,          /* float_constant  */
    character_constant = 282,      /* character_constant  */
    ELSE = 283,                    /* ELSE  */
    leftshift_assignment_operator = 284, /* leftshift_assignment_operator  */
    rightshift_assignment_operator = 285, /* rightshift_assignment_operator  */
    XOR_assignment_operator = 286, /* XOR_assignment_operator  */
    OR_assignment_operator = 287,  /* OR_assignment_operator  */
    AND_assignment_operator = 288, /* AND_assignment_operator  */
    modulo_assignment_operator = 289, /* modulo_assignment_operator  */
    multiplication_assignment_operator = 290, /* multiplication_assignment_operator  */
    division_assignment_operator = 291, /* division_assignment_operator  */
    addition_assignment_operator = 292, /* addition_assignment_operator  */
    subtraction_assignment_operator = 293, /* subtraction_assignment_operator  */
    assignment_operator = 294,     /* assignment_operator  */
    OR_operator = 295,             /* OR_operator  */
    AND_operator = 296,            /* AND_operator  */
    pipe_operator = 297,           /* pipe_operator  */
    caret_operator = 298,          /* caret_operator  */
    amp_operator = 299,            /* amp_operator  */
    equality_operator = 300,       /* equality_operator  */
    inequality_operator = 301,     /* inequality_operator  */
    lessthan_assignment_operator = 302, /* lessthan_assignment_operator  */
    lessthan_operator = 303,       /* lessthan_operator  */
    greaterthan_assignment_operator = 304, /* greaterthan_assignment_operator  */
    greaterthan_operator = 305,    /* greaterthan_operator  */
    leftshift_operator = 306,      /* leftshift_operator  */
    rightshift_operator = 307,     /* rightshift_operator  */
    add_operator = 308,            /* add_operator  */
    subtract_operator = 309,       /* subtract_operator  */
    multiplication_operator = 310, /* multiplication_operator  */
    division_operator = 311,       /* division_operator  */
    modulo_operator = 312,         /* modulo_operator  */
    SIZEOF = 313,                  /* SIZEOF  */
    tilde_operator = 314,          /* tilde_operator  */
    exclamation_operator = 315,    /* exclamation_operator  */
    increment_operator = 316,      /* increment_operator  */
    decrement_operator = 317       /* decrement_operator  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif
/* Token kinds.  */
#define YYEMPTY -2
#define YYEOF 0
#define YYerror 256
#define YYUNDEF 257
#define IF 258
#define INT 259
#define CHAR 260
#define FLOAT 261
#define DOUBLE 262
#define LONG 263
#define SHORT 264
#define SIGNED 265
#define UNSIGNED 266
#define STRUCT 267
#define RETURN 268
#define MAIN 269
#define VOID 270
#define WHILE 271
#define FOR 272
#define DO 273
#define BREAK 274
#define ENDIF 275
#define identifier 276
#define array_identifier 277
#define func_identifier 278
#define integer_constant 279
#define string_constant 280
#define float_constant 281
#define character_constant 282
#define ELSE 283
#define leftshift_assignment_operator 284
#define rightshift_assignment_operator 285
#define XOR_assignment_operator 286
#define OR_assignment_operator 287
#define AND_assignment_operator 288
#define modulo_assignment_operator 289
#define multiplication_assignment_operator 290
#define division_assignment_operator 291
#define addition_assignment_operator 292
#define subtraction_assignment_operator 293
#define assignment_operator 294
#define OR_operator 295
#define AND_operator 296
#define pipe_operator 297
#define caret_operator 298
#define amp_operator 299
#define equality_operator 300
#define inequality_operator 301
#define lessthan_assignment_operator 302
#define lessthan_operator 303
#define greaterthan_assignment_operator 304
#define greaterthan_operator 305
#define leftshift_operator 306
#define rightshift_operator 307
#define add_operator 308
#define subtract_operator 309
#define multiplication_operator 310
#define division_operator 311
#define modulo_operator 312
#define SIZEOF 313
#define tilde_operator 314
#define exclamation_operator 315
#define increment_operator 316
#define decrement_operator 317

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_IF = 3,                         /* IF  */
  YYSYMBOL_INT = 4,                        /* INT  */
  YYSYMBOL_CHAR = 5,                       /* CHAR  */
  YYSYMBOL_FLOAT = 6,                      /* FLOAT  */
  YYSYMBOL_DOUBLE = 7,                     /* DOUBLE  */
  YYSYMBOL_LONG = 8,                       /* LONG  */
  YYSYMBOL_SHORT = 9,                      /* SHORT  */
  YYSYMBOL_SIGNED = 10,                    /* SIGNED  */
  YYSYMBOL_UNSIGNED = 11,                  /* UNSIGNED  */
  YYSYMBOL_STRUCT = 12,                    /* STRUCT  */
  YYSYMBOL_RETURN = 13,                    /* RETURN  */
  YYSYMBOL_MAIN = 14,                      /* MAIN  */
  YYSYMBOL_VOID = 15,                      /* VOID  */
  YYSYMBOL_WHILE = 16,                     /* WHILE  */
  YYSYMBOL_FOR = 17,                       /* FOR  */
  YYSYMBOL_DO = 18,                        /* DO  */
  YYSYMBOL_BREAK = 19,                     /* BREAK  */
  YYSYMBOL_ENDIF = 20,                     /* ENDIF  */
  YYSYMBOL_identifier = 21,                /* identifier  */
  YYSYMBOL_array_identifier = 22,          /* array_identifier  */
  YYSYMBOL_func_identifier = 23,           /* func_identifier  */
  YYSYMBOL_integer_constant = 24,          /* integer_constant  */
  YYSYMBOL_string_constant = 25,           /* string_constant  */
  YYSYMBOL_float_constant = 26,            /* float_constant  */
  YYSYMBOL_character_constant = 27,        /* character_constant  */
  YYSYMBOL_ELSE = 28,                      /* ELSE  */
  YYSYMBOL_leftshift_assignment_operator = 29, /* leftshift_assignment_operator  */
  YYSYMBOL_rightshift_assignment_operator = 30, /* rightshift_assignment_operator  */
  YYSYMBOL_XOR_assignment_operator = 31,   /* XOR_assignment_operator  */
  YYSYMBOL_OR_assignment_operator = 32,    /* OR_assignment_operator  */
  YYSYMBOL_AND_assignment_operator = 33,   /* AND_assignment_operator  */
  YYSYMBOL_modulo_assignment_operator = 34, /* modulo_assignment_operator  */
  YYSYMBOL_multiplication_assignment_operator = 35, /* multiplication_assignment_operator  */
  YYSYMBOL_division_assignment_operator = 36, /* division_assignment_operator  */
  YYSYMBOL_addition_assignment_operator = 37, /* addition_assignment_operator  */
  YYSYMBOL_subtraction_assignment_operator = 38, /* subtraction_assignment_operator  */
  YYSYMBOL_assignment_operator = 39,       /* assignment_operator  */
  YYSYMBOL_OR_operator = 40,               /* OR_operator  */
  YYSYMBOL_AND_operator = 41,              /* AND_operator  */
  YYSYMBOL_pipe_operator = 42,             /* pipe_operator  */
  YYSYMBOL_caret_operator = 43,            /* caret_operator  */
  YYSYMBOL_amp_operator = 44,              /* amp_operator  */
  YYSYMBOL_equality_operator = 45,         /* equality_operator  */
  YYSYMBOL_inequality_operator = 46,       /* inequality_operator  */
  YYSYMBOL_lessthan_assignment_operator = 47, /* lessthan_assignment_operator  */
  YYSYMBOL_lessthan_operator = 48,         /* lessthan_operator  */
  YYSYMBOL_greaterthan_assignment_operator = 49, /* greaterthan_assignment_operator  */
  YYSYMBOL_greaterthan_operator = 50,      /* greaterthan_operator  */
  YYSYMBOL_leftshift_operator = 51,        /* leftshift_operator  */
  YYSYMBOL_rightshift_operator = 52,       /* rightshift_operator  */
  YYSYMBOL_add_operator = 53,              /* add_operator  */
  YYSYMBOL_subtract_operator = 54,         /* subtract_operator  */
  YYSYMBOL_multiplication_operator = 55,   /* multiplication_operator  */
  YYSYMBOL_division_operator = 56,         /* division_operator  */
  YYSYMBOL_modulo_operator = 57,           /* modulo_operator  */
  YYSYMBOL_SIZEOF = 58,                    /* SIZEOF  */
  YYSYMBOL_tilde_operator = 59,            /* tilde_operator  */
  YYSYMBOL_exclamation_operator = 60,      /* exclamation_operator  */
  YYSYMBOL_increment_operator = 61,        /* increment_operator  */
  YYSYMBOL_decrement_operator = 62,        /* decrement_operator  */
  YYSYMBOL_63_ = 63,                       /* ';'  */
  YYSYMBOL_64_ = 64,                       /* ','  */
  YYSYMBOL_65_ = 65,                       /* '['  */
  YYSYMBOL_66_ = 66,                       /* ']'  */
  YYSYMBOL_67_ = 67,                       /* '('  */
  YYSYMBOL_68_ = 68,                       /* ')'  */
  YYSYMBOL_69_ = 69,                       /* '{'  */
  YYSYMBOL_70_ = 70,                       /* '}'  */
  YYSYMBOL_YYACCEPT = 71,                  /* $accept  */
  YYSYMBOL_program = 72,                   /* program  */
  YYSYMBOL_declaration_list = 73,          /* declaration_list  */
  YYSYMBOL_D = 74,                         /* D  */
  YYSYMBOL_declaration = 75,               /* declaration  */
  YYSYMBOL_variable_declaration = 76,      /* variable_declaration  */
  YYSYMBOL_variable_declaration_list = 77, /* variable_declaration_list  */
  YYSYMBOL_variable_declaration_identifier = 78, /* variable_declaration_identifier  */
  YYSYMBOL_79_1 = 79,                      /* $@1  */
  YYSYMBOL_80_2 = 80,                      /* $@2  */
  YYSYMBOL_vdi = 81,                       /* vdi  */
  YYSYMBOL_identifier_array_type = 82,     /* identifier_array_type  */
  YYSYMBOL_initilization_params = 83,      /* initilization_params  */
  YYSYMBOL_initilization = 84,             /* initilization  */
  YYSYMBOL_type_specifier = 85,            /* type_specifier  */
  YYSYMBOL_unsigned_grammar = 86,          /* unsigned_grammar  */
  YYSYMBOL_signed_grammar = 87,            /* signed_grammar  */
  YYSYMBOL_long_grammar = 88,              /* long_grammar  */
  YYSYMBOL_short_grammar = 89,             /* short_grammar  */
  YYSYMBOL_function_declaration = 90,      /* function_declaration  */
  YYSYMBOL_function_declaration_type = 91, /* function_declaration_type  */
  YYSYMBOL_function_declaration_param_statement = 92, /* function_declaration_param_statement  */
  YYSYMBOL_93_3 = 93,                      /* $@3  */
  YYSYMBOL_94_4 = 94,                      /* $@4  */
  YYSYMBOL_params = 95,                    /* params  */
  YYSYMBOL_parameters_list = 96,           /* parameters_list  */
  YYSYMBOL_97_5 = 97,                      /* $@5  */
  YYSYMBOL_parameters_identifier_list = 98, /* parameters_identifier_list  */
  YYSYMBOL_parameters_identifier_list_breakup = 99, /* parameters_identifier_list_breakup  */
  YYSYMBOL_param_identifier = 100,         /* param_identifier  */
  YYSYMBOL_101_6 = 101,                    /* $@6  */
  YYSYMBOL_param_identifier_breakup = 102, /* param_identifier_breakup  */
  YYSYMBOL_statement = 103,                /* statement  */
  YYSYMBOL_compound_statement = 104,       /* compound_statement  */
  YYSYMBOL_105_7 = 105,                    /* $@7  */
  YYSYMBOL_statment_list = 106,            /* statment_list  */
  YYSYMBOL_expression_statment = 107,      /* expression_statment  */
  YYSYMBOL_conditional_statements = 108,   /* conditional_statements  */
  YYSYMBOL_109_8 = 109,                    /* $@8  */
  YYSYMBOL_110_9 = 110,                    /* $@9  */
  YYSYMBOL_conditional_statements_breakup = 111, /* conditional_statements_breakup  */
  YYSYMBOL_iterative_statements = 112,     /* iterative_statements  */
  YYSYMBOL_113_10 = 113,                   /* $@10  */
  YYSYMBOL_114_11 = 114,                   /* $@11  */
  YYSYMBOL_115_12 = 115,                   /* $@12  */
  YYSYMBOL_116_13 = 116,                   /* $@13  */
  YYSYMBOL_117_14 = 117,                   /* $@14  */
  YYSYMBOL_118_15 = 118,                   /* $@15  */
  YYSYMBOL_return_statement = 119,         /* return_statement  */
  YYSYMBOL_break_statement = 120,          /* break_statement  */
  YYSYMBOL_string_initilization = 121,     /* string_initilization  */
  YYSYMBOL_array_initialization = 122,     /* array_initialization  */
  YYSYMBOL_array_int_declarations = 123,   /* array_int_declarations  */
  YYSYMBOL_array_int_declarations_breakup = 124, /* array_int_declarations_breakup  */
  YYSYMBOL_expression = 125,               /* expression  */
  YYSYMBOL_126_16 = 126,                   /* $@16  */
  YYSYMBOL_127_17 = 127,                   /* $@17  */
  YYSYMBOL_128_18 = 128,                   /* $@18  */
  YYSYMBOL_129_19 = 129,                   /* $@19  */
  YYSYMBOL_130_20 = 130,                   /* $@20  */
  YYSYMBOL_131_21 = 131,                   /* @21  */
  YYSYMBOL_simple_expression = 132,        /* simple_expression  */
  YYSYMBOL_133_22 = 133,                   /* $@22  */
  YYSYMBOL_and_expression = 134,           /* and_expression  */
  YYSYMBOL_135_23 = 135,                   /* @23  */
  YYSYMBOL_unary_relation_expression = 136, /* unary_relation_expression  */
  YYSYMBOL_137_24 = 137,                   /* @24  */
  YYSYMBOL_regular_expression = 138,       /* regular_expression  */
  YYSYMBOL_relational_operators = 139,     /* relational_operators  */
  YYSYMBOL_sum_expression = 140,           /* sum_expression  */
  YYSYMBOL_sum_operators = 141,            /* sum_operators  */
  YYSYMBOL_term = 142,                     /* term  */
  YYSYMBOL_MULOP = 143,                    /* MULOP  */
  YYSYMBOL_factor = 144,                   /* factor  */
  YYSYMBOL_mutable = 145,                  /* mutable  */
  YYSYMBOL_146_25 = 146,                   /* $@25  */
  YYSYMBOL_immutable = 147,                /* immutable  */
  YYSYMBOL_call = 148,                     /* call  */
  YYSYMBOL_149_26 = 149,                   /* @26  */
  YYSYMBOL_arguments = 150,                /* arguments  */
  YYSYMBOL_arguments_list = 151,           /* arguments_list  */
  YYSYMBOL_exp = 152,                      /* exp  */
  YYSYMBOL_constant = 153                  /* constant  */
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
typedef yytype_uint8 yy_state_t;

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
#define YYFINAL  29
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   258

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  71
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  83
/* YYNRULES -- Number of rules.  */
#define YYNRULES  159
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  234

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   317


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
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      67,    68,     2,     2,    64,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    63,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    65,     2,    66,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    69,     2,    70,     2,     2,     2,     2,
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
      55,    56,    57,    58,    59,    60,    61,    62
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   103,   103,   106,   109,   110,   113,   114,   117,   120,
     120,   123,   123,   124,   124,   128,   128,   131,   132,   135,
     136,   139,   140,   141,   144,   144,   144,   144,   145,   146,
     147,   148,   149,   152,   152,   152,   152,   155,   155,   155,
     155,   158,   158,   161,   161,   164,   167,   170,   170,   170,
     173,   173,   176,   176,   179,   182,   183,   186,   186,   189,
     190,   193,   193,   194,   194,   195,   195,   196,   199,   199,
     202,   203,   206,   207,   210,   210,   210,   213,   214,   217,
     217,   217,   218,   218,   218,   219,   219,   219,   221,   222,
     235,   238,   241,   244,   247,   248,   251,   251,   260,   260,
     267,   267,   274,   274,   281,   281,   287,   287,   294,   295,
     296,   300,   300,   301,   304,   304,   305,   309,   309,   310,
     313,   314,   317,   317,   317,   317,   317,   317,   320,   321,
     324,   325,   328,   329,   332,   332,   332,   335,   336,   339,
     352,   352,   360,   361,   362,   365,   365,   392,   392,   395,
     396,   398,   398,   398,   398,   398,   401,   402,   403,   404
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
  "\"end of file\"", "error", "\"invalid token\"", "IF", "INT", "CHAR",
  "FLOAT", "DOUBLE", "LONG", "SHORT", "SIGNED", "UNSIGNED", "STRUCT",
  "RETURN", "MAIN", "VOID", "WHILE", "FOR", "DO", "BREAK", "ENDIF",
  "identifier", "array_identifier", "func_identifier", "integer_constant",
  "string_constant", "float_constant", "character_constant", "ELSE",
  "leftshift_assignment_operator", "rightshift_assignment_operator",
  "XOR_assignment_operator", "OR_assignment_operator",
  "AND_assignment_operator", "modulo_assignment_operator",
  "multiplication_assignment_operator", "division_assignment_operator",
  "addition_assignment_operator", "subtraction_assignment_operator",
  "assignment_operator", "OR_operator", "AND_operator", "pipe_operator",
  "caret_operator", "amp_operator", "equality_operator",
  "inequality_operator", "lessthan_assignment_operator",
  "lessthan_operator", "greaterthan_assignment_operator",
  "greaterthan_operator", "leftshift_operator", "rightshift_operator",
  "add_operator", "subtract_operator", "multiplication_operator",
  "division_operator", "modulo_operator", "SIZEOF", "tilde_operator",
  "exclamation_operator", "increment_operator", "decrement_operator",
  "';'", "','", "'['", "']'", "'('", "')'", "'{'", "'}'", "$accept",
  "program", "declaration_list", "D", "declaration",
  "variable_declaration", "variable_declaration_list",
  "variable_declaration_identifier", "$@1", "$@2", "vdi",
  "identifier_array_type", "initilization_params", "initilization",
  "type_specifier", "unsigned_grammar", "signed_grammar", "long_grammar",
  "short_grammar", "function_declaration", "function_declaration_type",
  "function_declaration_param_statement", "$@3", "$@4", "params",
  "parameters_list", "$@5", "parameters_identifier_list",
  "parameters_identifier_list_breakup", "param_identifier", "$@6",
  "param_identifier_breakup", "statement", "compound_statement", "$@7",
  "statment_list", "expression_statment", "conditional_statements", "$@8",
  "$@9", "conditional_statements_breakup", "iterative_statements", "$@10",
  "$@11", "$@12", "$@13", "$@14", "$@15", "return_statement",
  "break_statement", "string_initilization", "array_initialization",
  "array_int_declarations", "array_int_declarations_breakup", "expression",
  "$@16", "$@17", "$@18", "$@19", "$@20", "@21", "simple_expression",
  "$@22", "and_expression", "@23", "unary_relation_expression", "@24",
  "regular_expression", "relational_operators", "sum_expression",
  "sum_operators", "term", "MULOP", "factor", "mutable", "$@25",
  "immutable", "call", "@26", "arguments", "arguments_list", "exp",
  "constant", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-84)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-86)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      80,   -84,   -84,   -84,   -84,    38,    47,    94,    96,   -84,
      35,   -84,    80,   -84,    11,   -84,   -84,   -84,   -84,   -84,
     -84,   -84,    38,    47,   -84,   -84,    38,    47,   -84,   -84,
     -84,   -84,   -14,   -84,   -20,   -84,   -84,    80,   -84,   -84,
     -84,   -84,   -84,   -19,   -19,   -84,    39,   -84,    -5,   -84,
      -3,    -8,   -84,   -84,   -84,   -84,   -84,    53,   -84,    29,
     -84,   -84,   -84,   -84,   -84,   -84,    -3,    59,    56,   -84,
      76,    28,    75,   -84,   -84,   -84,   -84,   -84,    43,    71,
     -84,   -84,   -84,    48,   191,   -84,    62,    -3,    45,    59,
      31,    -3,   -84,   -84,   -84,   -84,   -84,   -84,   -84,     4,
     -84,   -84,     4,   -84,   -84,   -84,     4,    89,   108,   -84,
      69,    80,   -84,    70,   -13,    72,    73,    78,   -84,   -84,
      39,   -84,   -84,    74,   -84,   -84,   -84,   126,   -84,   -84,
      82,    51,    -3,   -84,   -84,   -84,   -84,   -84,   -84,   -84,
     -84,   -84,   -84,    56,    -3,    28,    75,   -84,   -21,   -84,
     -84,   -84,   -84,    81,   -84,   -84,    -3,   -84,    83,   -84,
      -3,   -84,   166,   191,   -84,   -84,   -84,   -84,   -84,   -84,
      85,    86,   -84,    88,    -3,    -3,    -3,    -3,    -3,    -3,
     -84,   -84,   124,   -84,   -34,   -84,    -3,    92,   166,    87,
     135,   -84,    51,   -84,   -84,   -84,   -84,   -84,   -84,   -84,
      95,    90,   -84,   -30,   -84,   -84,   -84,    91,   -84,   124,
     -84,   -84,   191,   -84,    -3,    -3,   -84,   -84,   191,    -4,
     -23,   128,   -84,   -84,   -84,   191,   -84,    -3,    98,   -84,
     110,   -84,   191,   -84
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    24,    25,    26,    27,    42,    44,    40,    36,    32,
       0,     2,     5,     6,     0,     7,    47,    41,    28,    43,
      29,    37,    42,    44,    31,    33,    42,    44,    30,     1,
       4,     3,    11,    13,     0,    10,    45,    51,    38,    39,
      34,    35,    46,    18,    18,     8,     0,    52,     0,    50,
       0,     0,    12,    15,    14,    11,     9,     0,    48,   139,
     140,   156,   157,   158,   159,   117,     0,    16,   113,   116,
     119,   121,   129,   133,   138,   137,   143,   144,     0,     0,
      17,    57,    53,    56,    68,   145,     0,     0,     0,   110,
     138,     0,   114,   126,   127,   123,   125,   122,   124,     0,
     130,   131,     0,   134,   135,   136,     0,    23,     0,    20,
      60,     0,    54,     0,     0,     0,     0,     0,    73,    67,
       0,    49,    62,     0,    61,    63,    64,     0,    65,    66,
       0,   148,     0,   118,   142,   106,   102,   104,    98,   100,
      96,   108,   109,   111,     0,   120,   128,   132,     0,    19,
      21,    22,    91,     0,    58,    55,     0,    88,     0,    79,
       0,    90,    68,    68,    72,   151,   152,   153,   154,   155,
       0,   147,   150,     0,     0,     0,     0,     0,     0,     0,
     112,   115,     0,    59,     0,    89,     0,     0,    68,     0,
       0,   146,     0,   141,   107,   103,   105,    99,   101,    97,
      95,     0,    74,     0,    82,    70,    69,     0,   149,     0,
      93,    92,    68,    80,     0,     0,    94,    75,    68,     0,
       0,    78,    81,    83,    86,    68,    76,     0,     0,    77,
       0,    87,    68,    84
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -84,   -84,   140,   -84,   -84,    27,   -84,   116,   -84,   -84,
     119,   -84,   -84,   -84,     3,   -84,   -84,    57,    84,   -84,
     -84,   -84,   -84,   -84,   -84,   100,   -84,   -84,   -84,   -84,
     -84,   -84,   -83,   -84,   -84,    -2,   -84,   -84,   -84,   -84,
     -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,
     107,   -84,   -29,   -84,   -59,   -84,   -84,   -84,   -84,   -84,
     -84,   -48,   -84,   112,   -84,   -82,   -84,   -84,   -84,   106,
     -84,   117,   -84,   114,   -50,   -84,   -84,   -84,   -84,   -84,
     -84,    30,   -84
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,    10,    11,    31,    12,   119,    34,    35,    43,    44,
      52,    53,    80,   149,   120,    28,    24,    18,    20,    15,
      16,    36,    37,    84,    48,    49,    57,    82,   112,    83,
     110,   154,   188,   122,   123,   189,   124,   125,   212,   221,
     226,   126,   186,   218,   214,   227,   127,   228,   128,   129,
     109,   151,   201,   210,   130,   179,   177,   178,   175,   176,
     174,    89,   180,    68,   144,    69,    87,    70,    99,    71,
     102,    72,   106,    73,    90,    86,    75,    76,   131,   170,
     171,   172,    77
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      74,   121,    67,    14,   152,   133,    91,    88,    59,    60,
      91,    61,    62,    63,    64,    14,    78,    91,    59,    60,
      50,    61,    62,    63,    64,    59,    60,    13,    61,    62,
      63,    64,    32,    33,   202,    29,    91,    74,   213,    13,
      47,    74,    17,    45,    46,   224,    51,    65,   182,    74,
     157,    19,    74,    42,    66,   158,    74,    65,    79,   223,
      55,    33,   181,    58,    66,   135,   136,   137,   138,   139,
     140,    66,   165,   173,    81,   166,   167,   168,   169,    38,
     190,   100,   101,    40,     1,     2,     3,     4,     5,     6,
       7,     8,   141,   142,    74,     9,    85,    92,    21,    91,
      25,   187,    22,    23,    26,    27,    74,    39,   184,   107,
     108,    41,   111,   134,    47,   194,   195,   196,   197,   198,
     199,    93,    94,    95,    96,    97,    98,   132,   148,   217,
     103,   104,   105,   152,   153,   222,    74,   156,   203,   159,
     160,   161,   229,   162,   163,   164,   185,   183,   200,   233,
     192,   207,    30,   191,   193,   204,   225,   206,   215,   209,
     211,   231,    56,    54,    74,    74,   219,   220,   230,   113,
       1,     2,     3,     4,     5,     6,     7,     8,   232,   114,
     216,     9,   115,   116,   -85,   117,   205,    59,    60,     0,
      61,    62,    63,    64,   113,     1,     2,     3,     4,     5,
       6,     7,     8,   143,   114,   145,     9,   115,   116,   -85,
     117,   155,    59,    60,   150,    61,    62,    63,    64,   146,
     147,     0,   208,     0,     0,     0,    65,     0,     0,   118,
       0,     0,     0,    66,     0,     0,   -71,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    65,     0,     0,   118,     0,     0,     0,    66
};

static const yytype_int16 yycheck[] =
{
      50,    84,    50,     0,    25,    87,    40,    66,    21,    22,
      40,    24,    25,    26,    27,    12,    24,    40,    21,    22,
      39,    24,    25,    26,    27,    21,    22,     0,    24,    25,
      26,    27,    21,    22,    68,     0,    40,    87,    68,    12,
      37,    91,     4,    63,    64,    68,    65,    60,    69,    99,
      63,     4,   102,    67,    67,   114,   106,    60,    66,    63,
      21,    22,   144,    68,    67,    34,    35,    36,    37,    38,
      39,    67,    21,   132,    21,    24,    25,    26,    27,    22,
     163,    53,    54,    26,     4,     5,     6,     7,     8,     9,
      10,    11,    61,    62,   144,    15,    67,    41,     4,    40,
       4,   160,     8,     9,     8,     9,   156,    23,   156,    66,
      39,    27,    64,    68,   111,   174,   175,   176,   177,   178,
     179,    45,    46,    47,    48,    49,    50,    65,    39,   212,
      55,    56,    57,    25,    65,   218,   186,    67,   186,    67,
      67,    63,   225,    69,    18,    63,    63,    66,    24,   232,
      64,    16,    12,    68,    66,    63,    28,    70,    67,    64,
      70,    63,    46,    44,   214,   215,   214,   215,   227,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    68,    13,
     209,    15,    16,    17,    18,    19,   188,    21,    22,    -1,
      24,    25,    26,    27,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    91,    13,    99,    15,    16,    17,    18,
      19,   111,    21,    22,   107,    24,    25,    26,    27,   102,
     106,    -1,   192,    -1,    -1,    -1,    60,    -1,    -1,    63,
      -1,    -1,    -1,    67,    -1,    -1,    70,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    60,    -1,    -1,    63,    -1,    -1,    -1,    67
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     4,     5,     6,     7,     8,     9,    10,    11,    15,
      72,    73,    75,    76,    85,    90,    91,     4,    88,     4,
      89,     4,     8,     9,    87,     4,     8,     9,    86,     0,
      73,    74,    21,    22,    77,    78,    92,    93,    88,    89,
      88,    89,    67,    79,    80,    63,    64,    85,    95,    96,
      39,    65,    81,    82,    81,    21,    78,    97,    68,    21,
      22,    24,    25,    26,    27,    60,    67,   132,   134,   136,
     138,   140,   142,   144,   145,   147,   148,   153,    24,    66,
      83,    21,    98,   100,    94,    67,   146,   137,   125,   132,
     145,    40,    41,    45,    46,    47,    48,    49,    50,   139,
      53,    54,   141,    55,    56,    57,   143,    66,    39,   121,
     101,    64,    99,     3,    13,    16,    17,    19,    63,    76,
      85,   103,   104,   105,   107,   108,   112,   117,   119,   120,
     125,   149,    65,   136,    68,    34,    35,    36,    37,    38,
      39,    61,    62,   134,   135,   140,   142,   144,    39,    84,
     121,   122,    25,    65,   102,    96,    67,    63,   125,    67,
      67,    63,    69,    18,    63,    21,    24,    25,    26,    27,
     150,   151,   152,   125,   131,   129,   130,   127,   128,   126,
     133,   136,    69,    66,   132,    63,   113,   125,   103,   106,
     103,    68,    64,    66,   125,   125,   125,   125,   125,   125,
      24,   123,    68,   132,    63,   106,    70,    16,   152,    64,
     124,    70,   109,    68,   115,    67,   123,   103,   114,   132,
     132,   110,   103,    63,    68,    28,   111,   116,   118,   103,
     125,    63,    68,   103
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_uint8 yyr1[] =
{
       0,    71,    72,    73,    74,    74,    75,    75,    76,    77,
      77,    79,    78,    80,    78,    81,    81,    82,    82,    83,
      83,    84,    84,    84,    85,    85,    85,    85,    85,    85,
      85,    85,    85,    86,    86,    86,    86,    87,    87,    87,
      87,    88,    88,    89,    89,    90,    91,    93,    94,    92,
      95,    95,    97,    96,    98,    99,    99,   101,   100,   102,
     102,   103,   103,   103,   103,   103,   103,   103,   105,   104,
     106,   106,   107,   107,   109,   110,   108,   111,   111,   113,
     114,   112,   115,   116,   112,   117,   118,   112,   119,   119,
     120,   121,   122,   123,   124,   124,   126,   125,   127,   125,
     128,   125,   129,   125,   130,   125,   131,   125,   125,   125,
     125,   133,   132,   132,   135,   134,   134,   137,   136,   136,
     138,   138,   139,   139,   139,   139,   139,   139,   140,   140,
     141,   141,   142,   142,   143,   143,   143,   144,   144,   145,
     146,   145,   147,   147,   147,   149,   148,   150,   150,   151,
     151,   152,   152,   152,   152,   152,   153,   153,   153,   153
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     1,     0,     1,     1,     3,     3,
       1,     0,     3,     0,     3,     1,     2,     2,     0,     3,
       2,     1,     1,     0,     1,     1,     1,     1,     2,     2,
       2,     2,     1,     1,     2,     2,     0,     1,     2,     2,
       0,     1,     0,     1,     0,     2,     3,     0,     0,     5,
       1,     0,     0,     3,     2,     2,     0,     0,     3,     2,
       0,     1,     1,     1,     1,     1,     1,     1,     0,     4,
       2,     0,     2,     1,     0,     0,     8,     2,     0,     0,
       0,     7,     0,     0,    11,     0,     0,     9,     2,     3,
       2,     2,     4,     2,     2,     0,     0,     4,     0,     4,
       0,     4,     0,     4,     0,     4,     0,     4,     2,     2,
       1,     0,     4,     1,     0,     4,     1,     0,     3,     1,
       3,     1,     1,     1,     1,     1,     1,     1,     3,     1,
       1,     1,     3,     1,     1,     1,     1,     1,     1,     1,
       0,     5,     3,     1,     1,     0,     5,     1,     0,     3,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1
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
  case 11: /* $@1: %empty  */
#line 123 "parser.y"
                                     {if(duplicate(curid)){printf("Duplicate\n");exit(0);}insertSTnest(curid,currnest); ins();  }
#line 1646 "y.tab.c"
    break;

  case 13: /* $@2: %empty  */
#line 124 "parser.y"
                                             {if(duplicate(curid)){printf("Duplicate\n");exit(0);}insertSTnest(curid,currnest); ins();  }
#line 1652 "y.tab.c"
    break;

  case 19: /* initilization_params: integer_constant ']' initilization  */
#line 135 "parser.y"
                                                             {if(yyval < 1) {printf("Wrong array size\n"); exit(0);} }
#line 1658 "y.tab.c"
    break;

  case 46: /* function_declaration_type: type_specifier identifier '('  */
#line 167 "parser.y"
                                                         { strcpy(currfunctype, curtype); strcpy(currfunc, curid); check_duplicate(curid); insertSTF(curid); ins(); }
#line 1664 "y.tab.c"
    break;

  case 47: /* $@3: %empty  */
#line 170 "parser.y"
                          {params_count=0;}
#line 1670 "y.tab.c"
    break;

  case 48: /* $@4: %empty  */
#line 170 "parser.y"
                                                      {funcgen();}
#line 1676 "y.tab.c"
    break;

  case 49: /* function_declaration_param_statement: $@3 params ')' $@4 statement  */
#line 170 "parser.y"
                                                                             {funcgenend();}
#line 1682 "y.tab.c"
    break;

  case 50: /* params: parameters_list  */
#line 173 "parser.y"
                                          { insertSTparamscount(currfunc, params_count); }
#line 1688 "y.tab.c"
    break;

  case 51: /* params: %empty  */
#line 173 "parser.y"
                                                                                            { insertSTparamscount(currfunc, params_count); }
#line 1694 "y.tab.c"
    break;

  case 52: /* $@5: %empty  */
#line 176 "parser.y"
                                         { check_params(curtype);}
#line 1700 "y.tab.c"
    break;

  case 57: /* $@6: %empty  */
#line 186 "parser.y"
                                     { ins();insertSTnest(curid,1); params_count++; }
#line 1706 "y.tab.c"
    break;

  case 68: /* $@7: %empty  */
#line 199 "parser.y"
                          {currnest++;}
#line 1712 "y.tab.c"
    break;

  case 69: /* compound_statement: $@7 '{' statment_list '}'  */
#line 199 "parser.y"
                                                                {deletedata(currnest);currnest--;}
#line 1718 "y.tab.c"
    break;

  case 74: /* $@8: %empty  */
#line 210 "parser.y"
                                                       {label1();if(yyvsp[-1]!=1){printf("Condition checking is not of type int\n");exit(0);}}
#line 1724 "y.tab.c"
    break;

  case 75: /* $@9: %empty  */
#line 210 "parser.y"
                                                                                                                                                  {label2();}
#line 1730 "y.tab.c"
    break;

  case 77: /* conditional_statements_breakup: ELSE statement  */
#line 213 "parser.y"
                                         {label3();}
#line 1736 "y.tab.c"
    break;

  case 78: /* conditional_statements_breakup: %empty  */
#line 214 "parser.y"
                          {label3();}
#line 1742 "y.tab.c"
    break;

  case 79: /* $@10: %empty  */
#line 217 "parser.y"
                                    {label4();}
#line 1748 "y.tab.c"
    break;

  case 80: /* $@11: %empty  */
#line 217 "parser.y"
                                                                      {label1();if(yyvsp[-1]!=1){printf("Condition checking is not of type int\n");exit(0);}}
#line 1754 "y.tab.c"
    break;

  case 81: /* iterative_statements: WHILE '(' $@10 simple_expression ')' $@11 statement  */
#line 217 "parser.y"
                                                                                                                                                                 {label5();}
#line 1760 "y.tab.c"
    break;

  case 82: /* $@12: %empty  */
#line 218 "parser.y"
                                                 {label4();}
#line 1766 "y.tab.c"
    break;

  case 83: /* $@13: %empty  */
#line 218 "parser.y"
                                                                                   {label1();if(yyvsp[-1]!=1){printf("Condition checking is not of type int\n");exit(0);}}
#line 1772 "y.tab.c"
    break;

  case 84: /* iterative_statements: FOR '(' expression ';' $@12 simple_expression ';' $@13 expression ')' statement  */
#line 218 "parser.y"
                                                                                                                                                                                            {label5();}
#line 1778 "y.tab.c"
    break;

  case 85: /* $@14: %empty  */
#line 219 "parser.y"
                          {label4();}
#line 1784 "y.tab.c"
    break;

  case 86: /* $@15: %empty  */
#line 219 "parser.y"
                                                                                 {label1();label5();if(yyvsp[-1]!=1){printf("Condition checking is not of type int\n");exit(0);}}
#line 1790 "y.tab.c"
    break;

  case 88: /* return_statement: RETURN ';'  */
#line 221 "parser.y"
                                     {if(strcmp(currfunctype,"void")) {printf("Returning void of a non-void function\n"); exit(0);}}
#line 1796 "y.tab.c"
    break;

  case 89: /* return_statement: RETURN expression ';'  */
#line 222 "parser.y"
                                                { 	if(!strcmp(currfunctype, "void"))
										{ 
											yyerror("Function is void");
										}

										if((currfunctype[0]=='i' || currfunctype[0]=='c') && yyvsp[-1]!=1)
										{
											printf("Expression doesn't match return type of function\n"); exit(0);
										}

									}
#line 1812 "y.tab.c"
    break;

  case 91: /* string_initilization: assignment_operator string_constant  */
#line 238 "parser.y"
                                                              {insV();}
#line 1818 "y.tab.c"
    break;

  case 96: /* $@16: %empty  */
#line 251 "parser.y"
                                                      {push("=");}
#line 1824 "y.tab.c"
    break;

  case 97: /* expression: mutable assignment_operator $@16 expression  */
#line 251 "parser.y"
                                                                                {   
																	  if(yyvsp[-3]==1 && yyvsp[0]==1) 
																	  {
			                                                          yyval=1;
			                                                          } 
			                                                          else 
			                                                          {yyval=-1; printf("Type mismatch\n"); exit(0);} 
			                                                          codeassign();
			                                                       }
#line 1838 "y.tab.c"
    break;

  case 98: /* $@17: %empty  */
#line 260 "parser.y"
                                                               {push("+=");}
#line 1844 "y.tab.c"
    break;

  case 99: /* expression: mutable addition_assignment_operator $@17 expression  */
#line 260 "parser.y"
                                                                                       {  
																	  if(yyvsp[-3]==1 && yyvsp[0]==1) 
			                                                          yyval=1; 
			                                                          else 
			                                                          {yyval=-1; printf("Type mismatch\n"); exit(0);} 
			                                                          codeassign();
			                                                       }
#line 1856 "y.tab.c"
    break;

  case 100: /* $@18: %empty  */
#line 267 "parser.y"
                                                                  {push("-=");}
#line 1862 "y.tab.c"
    break;

  case 101: /* expression: mutable subtraction_assignment_operator $@18 expression  */
#line 267 "parser.y"
                                                                                            {	  
																	  if(yyvsp[-3]==1 && yyvsp[0]==1) 
			                                                          yyval=1; 
			                                                          else 
			                                                          {yyval=-1; printf("Type mismatch\n"); exit(0);} 
			                                                          codeassign();
			                                                       }
#line 1874 "y.tab.c"
    break;

  case 102: /* $@19: %empty  */
#line 274 "parser.y"
                                                                     {push("*=");}
#line 1880 "y.tab.c"
    break;

  case 103: /* expression: mutable multiplication_assignment_operator $@19 expression  */
#line 274 "parser.y"
                                                                                              {
																	  if(yyvsp[-3]==1 && yyvsp[0]==1) 
			                                                          yyval=1; 
			                                                          else 
			                                                          {yyval=-1; printf("Type mismatch\n"); exit(0);}
			                                                          codeassign(); 
			                                                       }
#line 1892 "y.tab.c"
    break;

  case 104: /* $@20: %empty  */
#line 281 "parser.y"
                                                               {push("/=");}
#line 1898 "y.tab.c"
    break;

  case 105: /* expression: mutable division_assignment_operator $@20 expression  */
#line 281 "parser.y"
                                                                                                { 
																	  if(yyvsp[-3]==1 && yyvsp[0]==1) 
			                                                          yyval=1; 
			                                                          else 
			                                                          {yyval=-1; printf("Type mismatch\n"); exit(0);} 
			                                                       }
#line 1909 "y.tab.c"
    break;

  case 106: /* @21: %empty  */
#line 287 "parser.y"
                                                             {push("%=");}
#line 1915 "y.tab.c"
    break;

  case 107: /* expression: mutable modulo_assignment_operator @21 expression  */
#line 287 "parser.y"
                                                                                                { 
																	  if(yyvsp[-3]==1 && yyvsp[-1]==1) 
			                                                          yyval=1; 
			                                                          else 
			                                                          {yyval=-1; printf("Type mismatch\n"); exit(0);} 
			                                                          codeassign();
																	}
#line 1927 "y.tab.c"
    break;

  case 108: /* expression: mutable increment_operator  */
#line 294 "parser.y"
                                                                                                        { push("++");if(yyvsp[-1] == 1) yyval=1; else yyval=-1; genunary();}
#line 1933 "y.tab.c"
    break;

  case 109: /* expression: mutable decrement_operator  */
#line 295 "parser.y"
                                                                                                        {push("--");if(yyvsp[-1] == 1) yyval=1; else yyval=-1;}
#line 1939 "y.tab.c"
    break;

  case 110: /* expression: simple_expression  */
#line 296 "parser.y"
                                            {if(yyvsp[0] == 1) yyval=1; else yyval=-1;}
#line 1945 "y.tab.c"
    break;

  case 111: /* $@22: %empty  */
#line 300 "parser.y"
                                                                       {push("||");}
#line 1951 "y.tab.c"
    break;

  case 112: /* simple_expression: simple_expression OR_operator and_expression $@22  */
#line 300 "parser.y"
                                                                                     {if(yyvsp[-3] == 1 && yyvsp[-1]==1) yyval=1; else yyval=-1; codegen();}
#line 1957 "y.tab.c"
    break;

  case 113: /* simple_expression: and_expression  */
#line 301 "parser.y"
                                         {if(yyvsp[0] == 1) yyval=1; else yyval=-1;}
#line 1963 "y.tab.c"
    break;

  case 114: /* @23: %empty  */
#line 304 "parser.y"
                                                      {push("&&");}
#line 1969 "y.tab.c"
    break;

  case 115: /* and_expression: and_expression AND_operator @23 unary_relation_expression  */
#line 304 "parser.y"
                                                                                               {if(yyvsp[-3] == 1 && yyvsp[-1]==1) yyval=1; else yyval=-1; codegen();}
#line 1975 "y.tab.c"
    break;

  case 116: /* and_expression: unary_relation_expression  */
#line 305 "parser.y"
                                                     {if(yyvsp[0] == 1) yyval=1; else yyval=-1;}
#line 1981 "y.tab.c"
    break;

  case 117: /* @24: %empty  */
#line 309 "parser.y"
                                               {push("!");}
#line 1987 "y.tab.c"
    break;

  case 118: /* unary_relation_expression: exclamation_operator @24 unary_relation_expression  */
#line 309 "parser.y"
                                                                                      {if(yyvsp[-1]==1) yyval=1; else yyval=-1; codegen();}
#line 1993 "y.tab.c"
    break;

  case 119: /* unary_relation_expression: regular_expression  */
#line 310 "parser.y"
                                             {if(yyvsp[0] == 1) yyval=1; else yyval=-1;}
#line 1999 "y.tab.c"
    break;

  case 120: /* regular_expression: regular_expression relational_operators sum_expression  */
#line 313 "parser.y"
                                                                                 {if(yyvsp[-2] == 1 && yyvsp[0]==1) yyval=1; else yyval=-1; codegen();}
#line 2005 "y.tab.c"
    break;

  case 121: /* regular_expression: sum_expression  */
#line 314 "parser.y"
                                           {if(yyvsp[0] == 1) yyval=1; else yyval=-1;}
#line 2011 "y.tab.c"
    break;

  case 122: /* relational_operators: greaterthan_assignment_operator  */
#line 317 "parser.y"
                                                          {push(">=");}
#line 2017 "y.tab.c"
    break;

  case 123: /* relational_operators: lessthan_assignment_operator  */
#line 317 "parser.y"
                                                                                                       {push("<=");}
#line 2023 "y.tab.c"
    break;

  case 124: /* relational_operators: greaterthan_operator  */
#line 317 "parser.y"
                                                                                                                                            {push(">");}
#line 2029 "y.tab.c"
    break;

  case 125: /* relational_operators: lessthan_operator  */
#line 317 "parser.y"
                                                                                                                                                                            {push("<");}
#line 2035 "y.tab.c"
    break;

  case 126: /* relational_operators: equality_operator  */
#line 317 "parser.y"
                                                                                                                                                                                                            {push("==");}
#line 2041 "y.tab.c"
    break;

  case 127: /* relational_operators: inequality_operator  */
#line 317 "parser.y"
                                                                                                                                                                                                                                               {push("!=");}
#line 2047 "y.tab.c"
    break;

  case 128: /* sum_expression: sum_expression sum_operators term  */
#line 320 "parser.y"
                                                             {if(yyvsp[-2] == 1 && yyvsp[0]==1) yyval=1; else yyval=-1; codegen();}
#line 2053 "y.tab.c"
    break;

  case 129: /* sum_expression: term  */
#line 321 "parser.y"
                               {if(yyvsp[0] == 1) yyval=1; else yyval=-1;}
#line 2059 "y.tab.c"
    break;

  case 130: /* sum_operators: add_operator  */
#line 324 "parser.y"
                                       {push("+");}
#line 2065 "y.tab.c"
    break;

  case 131: /* sum_operators: subtract_operator  */
#line 325 "parser.y"
                                            {push("-");}
#line 2071 "y.tab.c"
    break;

  case 132: /* term: term MULOP factor  */
#line 328 "parser.y"
                                            {if(yyvsp[-2] == 1 && yyvsp[0]==1) yyval=1; else yyval=-1; codegen();}
#line 2077 "y.tab.c"
    break;

  case 133: /* term: factor  */
#line 329 "parser.y"
                                 {if(yyvsp[0] == 1) yyval=1; else yyval=-1;}
#line 2083 "y.tab.c"
    break;

  case 134: /* MULOP: multiplication_operator  */
#line 332 "parser.y"
                                                  {push("*");}
#line 2089 "y.tab.c"
    break;

  case 135: /* MULOP: division_operator  */
#line 332 "parser.y"
                                                                                  {push("/");}
#line 2095 "y.tab.c"
    break;

  case 136: /* MULOP: modulo_operator  */
#line 332 "parser.y"
                                                                                                                 {push("%");}
#line 2101 "y.tab.c"
    break;

  case 137: /* factor: immutable  */
#line 335 "parser.y"
                                    {if(yyvsp[0] == 1) yyval=1; else yyval=-1;}
#line 2107 "y.tab.c"
    break;

  case 138: /* factor: mutable  */
#line 336 "parser.y"
                                  {if(yyvsp[0] == 1) yyval=1; else yyval=-1;}
#line 2113 "y.tab.c"
    break;

  case 139: /* mutable: identifier  */
#line 339 "parser.y"
                                     {
						  push(curid);
						  if(check_id_is_func(curid))
						  {printf("Function name used as Identifier\n"); exit(8);}
			              if(!checkscope(curid))
			              {printf("%s\n",curid);printf("Undeclared\n");exit(0);} 
			              if(!checkarray(curid))
			              {printf("%s\n",curid);printf("Array ID has no subscript\n");exit(0);}
			              if(gettype(curid,0)=='i' || gettype(curid,1)== 'c')
			              yyval = 1;
			              else
			              yyval = -1;
			              }
#line 2131 "y.tab.c"
    break;

  case 140: /* $@25: %empty  */
#line 352 "parser.y"
                                           {if(!checkscope(curid)){printf("%s\n",curid);printf("Undeclared\n");exit(0);}}
#line 2137 "y.tab.c"
    break;

  case 141: /* mutable: array_identifier $@25 '[' expression ']'  */
#line 353 "parser.y"
                                           {if(gettype(curid,0)=='i' || gettype(curid,1)== 'c')
			              		yyval = 1;
			              		else
			              		yyval = -1;
			              		}
#line 2147 "y.tab.c"
    break;

  case 142: /* immutable: '(' expression ')'  */
#line 360 "parser.y"
                                             {if(yyvsp[-1]==1) yyval=1; else yyval=-1;}
#line 2153 "y.tab.c"
    break;

  case 143: /* immutable: call  */
#line 361 "parser.y"
                               {if(yyvsp[0]==-1) yyval=-1; else yyval=1;}
#line 2159 "y.tab.c"
    break;

  case 144: /* immutable: constant  */
#line 362 "parser.y"
                                   {if(yyvsp[0]==1) yyval=1; else yyval=-1;}
#line 2165 "y.tab.c"
    break;

  case 145: /* @26: %empty  */
#line 365 "parser.y"
                                        {

			             if(!check_declaration(curid, "Function"))
			             { printf("Function not declared"); exit(0);} 
			             insertSTF(curid); 
						 strcpy(currfunccall,curid);
						 if(gettype(curid,0)=='i' || gettype(curid,1)== 'c')
						 {
			             yyval = 1;
			             }
			             else
			             yyval = -1;
                         call_params_count=0;
			             }
#line 2184 "y.tab.c"
    break;

  case 146: /* call: identifier '(' @26 arguments ')'  */
#line 380 "parser.y"
                                                 { if(strcmp(currfunccall,"printf"))
							{ 
								if(getSTparamscount(currfunccall)!=call_params_count)
								{	
									yyerror("Number of arguments in function call doesn't match number of parameters");
									exit(8);
								}
							}
							callgen();
						 }
#line 2199 "y.tab.c"
    break;

  case 149: /* arguments_list: arguments_list ',' exp  */
#line 395 "parser.y"
                                                 { call_params_count++; }
#line 2205 "y.tab.c"
    break;

  case 150: /* arguments_list: exp  */
#line 396 "parser.y"
                              { call_params_count++; }
#line 2211 "y.tab.c"
    break;

  case 151: /* exp: identifier  */
#line 398 "parser.y"
                 {arggen(1);}
#line 2217 "y.tab.c"
    break;

  case 152: /* exp: integer_constant  */
#line 398 "parser.y"
                                                 {arggen(2);}
#line 2223 "y.tab.c"
    break;

  case 153: /* exp: string_constant  */
#line 398 "parser.y"
                                                                                {arggen(3);}
#line 2229 "y.tab.c"
    break;

  case 154: /* exp: float_constant  */
#line 398 "parser.y"
                                                                                                              {arggen(4);}
#line 2235 "y.tab.c"
    break;

  case 155: /* exp: character_constant  */
#line 398 "parser.y"
                                                                                                                                                {arggen(5);}
#line 2241 "y.tab.c"
    break;

  case 156: /* constant: integer_constant  */
#line 401 "parser.y"
                                                {  insV(); codegencon(); yyval=1; }
#line 2247 "y.tab.c"
    break;

  case 157: /* constant: string_constant  */
#line 402 "parser.y"
                                                {  insV(); codegencon();yyval=-1;}
#line 2253 "y.tab.c"
    break;

  case 158: /* constant: float_constant  */
#line 403 "parser.y"
                                                {  insV(); codegencon();}
#line 2259 "y.tab.c"
    break;

  case 159: /* constant: character_constant  */
#line 404 "parser.y"
                                            {  insV(); codegencon();yyval=1; }
#line 2265 "y.tab.c"
    break;


#line 2269 "y.tab.c"

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

#line 406 "parser.y"


extern FILE *yyin;
extern int yylineno;
extern char *yytext;
void insertSTtype(char *,char *);
void insertSTvalue(char *, char *);
void incertCT(char *, char *);
void printST();
void printCT();

struct stack
{
	char value[100];
	int labelvalue;
}s[100],label[100];


void push(char *x)
{
	strcpy(s[++top].value,x);
}

void swap(char *x, char *y)
{
	char temp = *x;
	*x = *y;
	*y = temp;
}

void reverse(char str[], int length) 
{ 
    int start = 0; 
    int end = length -1; 
    while (start < end) 
    { 
        swap((str+start), (str+end)); 
        start++; 
        end--; 
    } 
} 
  
char* itoa(int num, char* str, int base) 
{ 
    int i = 0; 
    int isNegative = 0; 
  
   
    if (num == 0) 
    { 
        str[i++] = '0'; 
        str[i] = '\0'; 
        return str; 
    } 
  
    if (num < 0 && base == 10) 
    { 
        isNegative = 1; 
        num = -num; 
    } 
  
   
    while (num != 0) 
    { 
        int rem = num % base; 
        str[i++] = (rem > 9)? (rem-10) + 'a' : rem + '0'; 
        num = num/base; 
    } 
  
    if (isNegative) 
        str[i++] = '-'; 
  
    str[i] = '\0'; 
  
   
    reverse(str, i); 
  
    return str; 
} 

void codegen()
{
	strcpy(temp,"t");
	char buffer[100];
	itoa(count,buffer,10);
	strcat(temp,buffer);
	printf("%s = %s %s %s\n",temp,s[top-2].value,s[top-1].value,s[top].value);
	top = top - 2;
	strcpy(s[top].value,temp);
	count++; 
}

void codegencon()
{
	strcpy(temp,"t");
	char buffer[100];
	itoa(count,buffer,10);
	strcat(temp,buffer);
	printf("%s = %s\n",temp,curval);
	push(temp);
	count++;
	
}

int isunary(char *s)
{
	if(strcmp(s, "--")==0 || strcmp(s, "++")==0)
	{
		return 1;
	}
	return 0;
}

void genunary()
{
	char temp1[100], temp2[100], temp3[100];
	strcpy(temp1, s[top].value);
	strcpy(temp2, s[top-1].value);

	if(isunary(temp1))
	{
		strcpy(temp3, temp1);
		strcpy(temp1, temp2);
		strcpy(temp2, temp3);
	}
	strcpy(temp, "t");
	char buffer[100];
	itoa(count, buffer, 10);
	strcat(temp, buffer);
	count++;

	if(strcmp(temp2,"--")==0)
	{
		printf("%s = %s - 1\n", temp, temp1);
		printf("%s = %s\n", temp1, temp);
	}

	if(strcmp(temp2,"++")==0)
	{
		printf("%s = %s + 1\n", temp, temp1);
		printf("%s = %s\n", temp1, temp);
	}

	top = top -2;
}

void codeassign()
{
	printf("%s = %s\n",s[top-2].value,s[top].value);
	top = top - 2;
}

void label1()
{
	strcpy(temp,"L");
	char buffer[100];
	itoa(lno,buffer,10);
	strcat(temp,buffer);
	printf("IF not %s GoTo %s\n",s[top].value,temp);
	label[++ltop].labelvalue = lno++;
}

void label2()
{
	strcpy(temp,"L");
	char buffer[100];
	itoa(lno,buffer,10);
	strcat(temp,buffer);
	printf("GoTo %s\n",temp);
	strcpy(temp,"L");
	itoa(label[ltop].labelvalue,buffer,10);
	strcat(temp,buffer);
	printf("%s:\n",temp);
	ltop--;
	label[++ltop].labelvalue=lno++;
}

void label3()
{
	strcpy(temp,"L");
	char buffer[100];
	itoa(label[ltop].labelvalue,buffer,10);
	strcat(temp,buffer);
	printf("%s:\n",temp);
	ltop--;
	
}

void label4()
{
	strcpy(temp,"L");
	char buffer[100];
	itoa(lno,buffer,10);
	strcat(temp,buffer);
	printf("%s:\n",temp);
	label[++ltop].labelvalue = lno++;
}


void label5()
{
	strcpy(temp,"L");
	char buffer[100];
	itoa(label[ltop-1].labelvalue,buffer,10);
	strcat(temp,buffer);
	printf("GoTo %s:\n",temp);
	strcpy(temp,"L");
	itoa(label[ltop].labelvalue,buffer,10);
	strcat(temp,buffer);
	printf("%s:\n",temp);
	ltop = ltop - 2;
    
   
}

void funcgen()
{
	printf("func begin %s\n",currfunc);
}

void funcgenend()
{
	printf("func end\n\n");
}

void arggen(int i)
{
    if(i==1)
    {
	printf("refparam %s\n", curid);
	}
	else
	{
	printf("refparam %s\n", curval);
	}
}

void callgen()
{
	printf("refparam result\n");
	push("result");
	printf("call %s, %d\n",currfunccall,call_params_count);
}



int main(int argc , char **argv)
{
	yyin = fopen(argv[1], "r");
	yyparse();

	if(flag == 0)
	{
		printf(ANSI_COLOR_GREEN "Status: Parsing Complete - Valid" ANSI_COLOR_RESET "\n");
		printf("%30s" ANSI_COLOR_CYAN "SYMBOL TABLE" ANSI_COLOR_RESET "\n", " ");
		printf("%30s %s\n", " ", "------------");
		printST();

		printf("\n\n%30s" ANSI_COLOR_CYAN "CONSTANT TABLE" ANSI_COLOR_RESET "\n", " ");
		printf("%30s %s\n", " ", "--------------");
		printCT();
	}
}

void yyerror(char *s)
{
	printf(ANSI_COLOR_RED "%d %s %s\n", yylineno, s, yytext);
	flag=1;
	printf(ANSI_COLOR_RED "Status: Parsing Failed - Invalid\n" ANSI_COLOR_RESET);
	exit(7);
}

void ins()
{
	insertSTtype(curid,curtype);
}

void insV()
{
	insertSTvalue(curid,curval);
}

int yywrap()
{
	return 1;
}
