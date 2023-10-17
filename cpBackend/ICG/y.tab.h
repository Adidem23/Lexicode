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
