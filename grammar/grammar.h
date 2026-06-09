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

#ifndef YY_YY_GRAMMAR_H_INCLUDED
# define YY_YY_GRAMMAR_H_INCLUDED
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
    NAME = 258,                    /* NAME  */
    FUNC = 259,                    /* FUNC  */
    BEGINOBJ = 260,                /* BEGINOBJ  */
    ENDOBJ = 261,                  /* ENDOBJ  */
    BEGIN_INCLUDE = 262,           /* BEGIN_INCLUDE  */
    BEGIN_ACTION = 263,            /* BEGIN_ACTION  */
    BEGIN_PROPERTY = 264,          /* BEGIN_PROPERTY  */
    BEGIN_CONSTANT = 265,          /* BEGIN_CONSTANT  */
    BEGIN_TPL = 266,               /* BEGIN_TPL  */
    BEGIN_RULESET = 267,           /* BEGIN_RULESET  */
    STOP = 268,                    /* STOP  */
    SET = 269,                     /* SET  */
    RESET = 270,                   /* RESET  */
    UNSET = 271,                   /* UNSET  */
    CONTINUE = 272,                /* CONTINUE  */
    EXISTS = 273,                  /* EXISTS  */
    CALL = 274,                    /* CALL  */
    CALL_INDIRECT = 275,           /* CALL_INDIRECT  */
    LEGACY_ACTION = 276,           /* LEGACY_ACTION  */
    LEGACY_RULESET = 277,          /* LEGACY_RULESET  */
    PRIFILT = 278,                 /* PRIFILT  */
    PROPFILT = 279,                /* PROPFILT  */
    BSD_TAG_SELECTOR = 280,        /* BSD_TAG_SELECTOR  */
    BSD_HOST_SELECTOR = 281,       /* BSD_HOST_SELECTOR  */
    RELOAD_LOOKUP_TABLE_PROCEDURE = 282, /* RELOAD_LOOKUP_TABLE_PROCEDURE  */
    IF = 283,                      /* IF  */
    THEN = 284,                    /* THEN  */
    ELSE = 285,                    /* ELSE  */
    FOREACH = 286,                 /* FOREACH  */
    ITERATOR_ASSIGNMENT = 287,     /* ITERATOR_ASSIGNMENT  */
    DO = 288,                      /* DO  */
    OR = 289,                      /* OR  */
    AND = 290,                     /* AND  */
    NOT = 291,                     /* NOT  */
    VAR = 292,                     /* VAR  */
    STRING = 293,                  /* STRING  */
    NUMBER = 294,                  /* NUMBER  */
    CMP_EQ = 295,                  /* CMP_EQ  */
    CMP_NE = 296,                  /* CMP_NE  */
    CMP_LE = 297,                  /* CMP_LE  */
    CMP_GE = 298,                  /* CMP_GE  */
    CMP_LT = 299,                  /* CMP_LT  */
    CMP_GT = 300,                  /* CMP_GT  */
    CMP_CONTAINS = 301,            /* CMP_CONTAINS  */
    CMP_CONTAINSI = 302,           /* CMP_CONTAINSI  */
    CMP_STARTSWITH = 303,          /* CMP_STARTSWITH  */
    CMP_STARTSWITHI = 304,         /* CMP_STARTSWITHI  */
    UMINUS = 305                   /* UMINUS  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif
/* Token kinds.  */
#define YYEMPTY -2
#define YYEOF 0
#define YYerror 256
#define YYUNDEF 257
#define NAME 258
#define FUNC 259
#define BEGINOBJ 260
#define ENDOBJ 261
#define BEGIN_INCLUDE 262
#define BEGIN_ACTION 263
#define BEGIN_PROPERTY 264
#define BEGIN_CONSTANT 265
#define BEGIN_TPL 266
#define BEGIN_RULESET 267
#define STOP 268
#define SET 269
#define RESET 270
#define UNSET 271
#define CONTINUE 272
#define EXISTS 273
#define CALL 274
#define CALL_INDIRECT 275
#define LEGACY_ACTION 276
#define LEGACY_RULESET 277
#define PRIFILT 278
#define PROPFILT 279
#define BSD_TAG_SELECTOR 280
#define BSD_HOST_SELECTOR 281
#define RELOAD_LOOKUP_TABLE_PROCEDURE 282
#define IF 283
#define THEN 284
#define ELSE 285
#define FOREACH 286
#define ITERATOR_ASSIGNMENT 287
#define DO 288
#define OR 289
#define AND 290
#define NOT 291
#define VAR 292
#define STRING 293
#define NUMBER 294
#define CMP_EQ 295
#define CMP_NE 296
#define CMP_LE 297
#define CMP_GE 298
#define CMP_LT 299
#define CMP_GT 300
#define CMP_CONTAINS 301
#define CMP_CONTAINSI 302
#define CMP_STARTSWITH 303
#define CMP_STARTSWITHI 304
#define UMINUS 305

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 46 "grammar.y"

	char *s;
	long long n;
	es_str_t *estr;
	enum cnfobjType objType;
	struct cnfobj *obj;
	struct cnfstmt *stmt;
	struct nvlst *nvlst;
	struct objlst *objlst;
	struct cnfexpr *expr;
	struct cnfarray *arr;
	struct cnffunc *func;
	struct cnffuncexists *exists;
	struct cnffparamlst *fparams;
	struct cnfitr *itr;

#line 184 "grammar.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_GRAMMAR_H_INCLUDED  */
