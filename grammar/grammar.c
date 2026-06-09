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
#line 29 "grammar.y"

#define IN_GRAMMAR_Y /* tell parserif.h not to redefine things! */

#include "config.h"
#include <stdio.h>
#include <libestr.h>
#include "rainerscript.h"
#include "parserif.h"
#define YYDEBUG 1
extern int yylineno;
extern char *yytext;

/* keep compile rule clean of errors */
extern int yylex(void);
extern int yyerror(const char*);

#line 88 "grammar.c"

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

#line 258 "grammar.c"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_GRAMMAR_H_INCLUDED  */
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_NAME = 3,                       /* NAME  */
  YYSYMBOL_FUNC = 4,                       /* FUNC  */
  YYSYMBOL_BEGINOBJ = 5,                   /* BEGINOBJ  */
  YYSYMBOL_ENDOBJ = 6,                     /* ENDOBJ  */
  YYSYMBOL_BEGIN_INCLUDE = 7,              /* BEGIN_INCLUDE  */
  YYSYMBOL_BEGIN_ACTION = 8,               /* BEGIN_ACTION  */
  YYSYMBOL_BEGIN_PROPERTY = 9,             /* BEGIN_PROPERTY  */
  YYSYMBOL_BEGIN_CONSTANT = 10,            /* BEGIN_CONSTANT  */
  YYSYMBOL_BEGIN_TPL = 11,                 /* BEGIN_TPL  */
  YYSYMBOL_BEGIN_RULESET = 12,             /* BEGIN_RULESET  */
  YYSYMBOL_STOP = 13,                      /* STOP  */
  YYSYMBOL_SET = 14,                       /* SET  */
  YYSYMBOL_RESET = 15,                     /* RESET  */
  YYSYMBOL_UNSET = 16,                     /* UNSET  */
  YYSYMBOL_CONTINUE = 17,                  /* CONTINUE  */
  YYSYMBOL_EXISTS = 18,                    /* EXISTS  */
  YYSYMBOL_CALL = 19,                      /* CALL  */
  YYSYMBOL_CALL_INDIRECT = 20,             /* CALL_INDIRECT  */
  YYSYMBOL_LEGACY_ACTION = 21,             /* LEGACY_ACTION  */
  YYSYMBOL_LEGACY_RULESET = 22,            /* LEGACY_RULESET  */
  YYSYMBOL_PRIFILT = 23,                   /* PRIFILT  */
  YYSYMBOL_PROPFILT = 24,                  /* PROPFILT  */
  YYSYMBOL_BSD_TAG_SELECTOR = 25,          /* BSD_TAG_SELECTOR  */
  YYSYMBOL_BSD_HOST_SELECTOR = 26,         /* BSD_HOST_SELECTOR  */
  YYSYMBOL_RELOAD_LOOKUP_TABLE_PROCEDURE = 27, /* RELOAD_LOOKUP_TABLE_PROCEDURE  */
  YYSYMBOL_IF = 28,                        /* IF  */
  YYSYMBOL_THEN = 29,                      /* THEN  */
  YYSYMBOL_ELSE = 30,                      /* ELSE  */
  YYSYMBOL_FOREACH = 31,                   /* FOREACH  */
  YYSYMBOL_ITERATOR_ASSIGNMENT = 32,       /* ITERATOR_ASSIGNMENT  */
  YYSYMBOL_DO = 33,                        /* DO  */
  YYSYMBOL_OR = 34,                        /* OR  */
  YYSYMBOL_AND = 35,                       /* AND  */
  YYSYMBOL_NOT = 36,                       /* NOT  */
  YYSYMBOL_VAR = 37,                       /* VAR  */
  YYSYMBOL_STRING = 38,                    /* STRING  */
  YYSYMBOL_NUMBER = 39,                    /* NUMBER  */
  YYSYMBOL_CMP_EQ = 40,                    /* CMP_EQ  */
  YYSYMBOL_CMP_NE = 41,                    /* CMP_NE  */
  YYSYMBOL_CMP_LE = 42,                    /* CMP_LE  */
  YYSYMBOL_CMP_GE = 43,                    /* CMP_GE  */
  YYSYMBOL_CMP_LT = 44,                    /* CMP_LT  */
  YYSYMBOL_CMP_GT = 45,                    /* CMP_GT  */
  YYSYMBOL_CMP_CONTAINS = 46,              /* CMP_CONTAINS  */
  YYSYMBOL_CMP_CONTAINSI = 47,             /* CMP_CONTAINSI  */
  YYSYMBOL_CMP_STARTSWITH = 48,            /* CMP_STARTSWITH  */
  YYSYMBOL_CMP_STARTSWITHI = 49,           /* CMP_STARTSWITHI  */
  YYSYMBOL_50_ = 50,                       /* '+'  */
  YYSYMBOL_51_ = 51,                       /* '-'  */
  YYSYMBOL_52_ = 52,                       /* '&'  */
  YYSYMBOL_53_ = 53,                       /* '*'  */
  YYSYMBOL_54_ = 54,                       /* '/'  */
  YYSYMBOL_55_ = 55,                       /* '%'  */
  YYSYMBOL_UMINUS = 56,                    /* UMINUS  */
  YYSYMBOL_57_ = 57,                       /* '{'  */
  YYSYMBOL_58_ = 58,                       /* '}'  */
  YYSYMBOL_59_ = 59,                       /* '='  */
  YYSYMBOL_60_ = 60,                       /* ';'  */
  YYSYMBOL_61_ = 61,                       /* '('  */
  YYSYMBOL_62_ = 62,                       /* ')'  */
  YYSYMBOL_63_ = 63,                       /* ','  */
  YYSYMBOL_64_ = 64,                       /* '['  */
  YYSYMBOL_65_ = 65,                       /* ']'  */
  YYSYMBOL_YYACCEPT = 66,                  /* $accept  */
  YYSYMBOL_conf = 67,                      /* conf  */
  YYSYMBOL_include = 68,                   /* include  */
  YYSYMBOL_obj = 69,                       /* obj  */
  YYSYMBOL_propconst = 70,                 /* propconst  */
  YYSYMBOL_property = 71,                  /* property  */
  YYSYMBOL_constant = 72,                  /* constant  */
  YYSYMBOL_nvlst = 73,                     /* nvlst  */
  YYSYMBOL_nv = 74,                        /* nv  */
  YYSYMBOL_value = 75,                     /* value  */
  YYSYMBOL_script = 76,                    /* script  */
  YYSYMBOL_stmt = 77,                      /* stmt  */
  YYSYMBOL_block = 78,                     /* block  */
  YYSYMBOL_actlst = 79,                    /* actlst  */
  YYSYMBOL_s_act = 80,                     /* s_act  */
  YYSYMBOL_expr = 81,                      /* expr  */
  YYSYMBOL_fparams = 82,                   /* fparams  */
  YYSYMBOL_array = 83,                     /* array  */
  YYSYMBOL_iterator_decl = 84,             /* iterator_decl  */
  YYSYMBOL_arrayelt = 85                   /* arrayelt  */
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
#define YYFINAL  2
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   507

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  66
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  20
/* YYNRULES -- Number of rules.  */
#define YYNRULES  81
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  165

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   305


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
       2,     2,     2,     2,     2,     2,     2,    55,    52,     2,
      61,    62,    53,    50,    63,    51,     2,    54,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    60,
       2,    59,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    64,     2,    65,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    57,     2,    58,     2,     2,     2,     2,
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
      45,    46,    47,    48,    49,    56
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,   135,   135,   136,   137,   138,   139,   140,   141,   142,
     143,   144,   148,   152,   156,   157,   158,   159,   160,   161,
     162,   163,   164,   165,   166,   167,   168,   169,   173,   177,
     180,   181,   182,   183,   184,   185,   186,   187,   188,   189,
     190,   191,   193,   194,   195,   196,   197,   200,   201,   202,
     203,   204,   205,   206,   207,   208,   209,   210,   211,   212,
     213,   214,   215,   216,   217,   218,   219,   220,   221,   222,
     223,   224,   225,   226,   227,   228,   229,   230,   231,   232,
     233,   234
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
  "\"end of file\"", "error", "\"invalid token\"", "NAME", "FUNC",
  "BEGINOBJ", "ENDOBJ", "BEGIN_INCLUDE", "BEGIN_ACTION", "BEGIN_PROPERTY",
  "BEGIN_CONSTANT", "BEGIN_TPL", "BEGIN_RULESET", "STOP", "SET", "RESET",
  "UNSET", "CONTINUE", "EXISTS", "CALL", "CALL_INDIRECT", "LEGACY_ACTION",
  "LEGACY_RULESET", "PRIFILT", "PROPFILT", "BSD_TAG_SELECTOR",
  "BSD_HOST_SELECTOR", "RELOAD_LOOKUP_TABLE_PROCEDURE", "IF", "THEN",
  "ELSE", "FOREACH", "ITERATOR_ASSIGNMENT", "DO", "OR", "AND", "NOT",
  "VAR", "STRING", "NUMBER", "CMP_EQ", "CMP_NE", "CMP_LE", "CMP_GE",
  "CMP_LT", "CMP_GT", "CMP_CONTAINS", "CMP_CONTAINSI", "CMP_STARTSWITH",
  "CMP_STARTSWITHI", "'+'", "'-'", "'&'", "'*'", "'/'", "'%'", "UMINUS",
  "'{'", "'}'", "'='", "';'", "'('", "')'", "','", "'['", "']'", "$accept",
  "conf", "include", "obj", "propconst", "property", "constant", "nvlst",
  "nv", "value", "script", "stmt", "block", "actlst", "s_act", "expr",
  "fparams", "array", "iterator_decl", "arrayelt", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-48)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-20)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -48,   273,   -48,     7,   -48,   -48,   -48,   -48,   -48,   -26,
     -17,     9,   -48,    30,   103,   -48,   -48,   234,   234,   -48,
     -48,   -27,   103,   -12,   -48,   -48,   -48,     2,   -48,    12,
      13,    35,    36,    37,     1,     6,    -5,   -48,     0,     5,
     103,   -48,   -48,   -48,   103,   103,    19,   338,   -48,   -48,
     460,   -48,   -48,   -48,   103,   365,    26,    34,     4,    31,
     -48,   -48,   -48,   -48,    32,    38,   103,   103,   -48,    95,
      54,   -48,   -48,   292,   -48,    -1,   103,   103,   103,   103,
     103,   103,   103,   103,   103,   103,   103,   103,   103,   103,
     103,   103,   103,   103,   -48,   155,   -48,   268,    39,   234,
      60,   234,   -48,   -29,   -48,   180,   387,   409,   -48,    40,
      43,   -48,    55,   -48,   452,   452,   -24,   -24,   -24,   -24,
     -24,   -24,   -24,   -24,   -24,   -24,    -3,    -3,    -3,   -48,
     -48,   -48,   -48,   -48,   103,   -48,    64,   103,   -48,   -48,
     -48,   -48,    -2,   -48,   209,   -48,   -48,   -48,   -48,   -48,
     -48,   234,   315,   -48,   -48,   -48,   -48,   -48,   -48,   -48,
     -48,    41,    42,   -48,   -48
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       2,     0,     1,    37,    19,    19,    19,    19,    44,     0,
       0,     0,    47,     0,     0,    43,     5,     0,     0,     6,
       7,     0,     0,     0,    36,     3,     4,    26,    40,     0,
       0,     0,     0,     0,     0,     0,     0,    45,     0,     0,
       0,    74,    73,    72,     0,     0,     0,     0,    75,    37,
       0,    38,    33,    34,     0,     0,     0,     0,     0,     0,
       9,    20,     8,    42,    10,     0,     0,     0,    32,     0,
       0,    50,    68,     0,    80,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    46,     0,    24,    76,     0,     0,
       0,     0,    41,     0,    14,     0,     0,     0,    70,     0,
       0,    67,     0,    78,    49,    48,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    62,    63,    61,    64,
      65,    66,    39,    25,     0,    35,    27,     0,    29,    22,
      21,    23,     0,    13,     0,    31,    30,    71,    69,    81,
      77,     0,     0,    19,    19,    11,    15,    16,    12,    28,
      79,     0,     0,    17,    18
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -48,   -48,   -48,   -48,   -48,   -48,   -48,    -4,   -48,   -48,
      -9,     3,   -13,   -48,    45,    -8,   -47,    -6,   -48,   -48
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     1,    24,    25,   142,   156,   157,    29,    61,   140,
      95,    51,    52,    27,    28,    97,    98,    48,    57,    75
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      30,    31,    32,    33,    26,    53,    47,   153,   154,   139,
     -19,    34,     5,   -19,    55,    59,    59,     8,    60,    62,
      35,    12,   109,    13,    14,    15,    88,    89,    90,    91,
      92,    93,    71,    37,    54,    46,    72,    73,    59,    59,
      59,    63,    64,    65,    59,    59,    36,   163,   164,    56,
      91,    92,    93,    96,    58,    68,   155,    74,   106,   107,
      66,    69,   112,   100,   113,    67,    70,   101,   114,   115,
     116,   117,   118,   119,   120,   121,   122,   123,   124,   125,
     126,   127,   128,   129,   130,   131,   136,   150,   138,   104,
     103,   110,   137,   149,   151,   105,   144,   141,   133,    38,
       0,   135,   147,   102,     0,   148,     0,    38,    96,     0,
       0,     0,     0,    39,     0,     0,     0,     0,     0,     0,
       0,    39,     0,     0,     0,     0,     0,     0,     0,   152,
       0,    40,    41,    42,    43,     0,     0,     0,   159,    40,
      41,    42,    43,     0,     0,     0,    44,   133,     0,   161,
     162,     0,     0,     0,    44,     0,    45,   108,     0,    46,
      49,     0,     4,     5,    45,     0,     0,    46,     8,     9,
      10,    11,    12,     0,    13,    14,    15,     0,    17,    18,
       0,     0,    21,    22,     0,    49,    23,     4,     5,     0,
       0,     0,     0,     8,     9,    10,    11,    12,     0,    13,
      14,    15,     0,    17,    18,     0,     0,    21,    22,     0,
       0,    23,     0,   132,    49,     0,     4,     5,     0,     0,
       0,     0,     8,     9,    10,    11,    12,     0,    13,    14,
      15,     0,    17,    18,     0,     0,    21,    22,   143,    49,
      23,     4,     5,     0,     0,     0,     0,     8,     9,    10,
      11,    12,     0,    13,    14,    15,     0,    17,    18,     0,
       0,    21,    22,     0,     0,    23,     0,   158,     0,     0,
       0,     0,     0,     2,     0,     0,     0,     0,     3,     0,
       4,     5,     0,     0,     6,     7,     8,     9,    10,    11,
      12,    50,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    76,    77,    23,     0,     0,     0,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      90,    91,    92,    93,     0,     0,    76,    77,     0,     0,
       0,   134,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    90,    91,    92,    93,     0,    76,
      77,     0,     0,     0,   111,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,    89,    90,    91,    92,
      93,     0,    76,    77,     0,     0,     0,   160,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      90,    91,    92,    93,    99,     0,     0,     0,    94,    76,
      77,     0,     0,     0,     0,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,    89,    90,    91,    92,
      93,    76,    77,     0,     0,     0,     0,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    93,    76,    77,     0,     0,   145,     0,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    87,    88,
      89,    90,    91,    92,    93,    49,     0,     4,     5,   146,
       0,     0,     0,     8,     9,    10,    11,    12,     0,    13,
      14,    15,     0,    17,    18,     0,     0,    21,    22,     0,
       0,    23,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    90,    91,    92,    93
};

static const yytype_int16 yycheck[] =
{
       4,     5,     6,     7,     1,    18,    14,     9,    10,    38,
       3,    37,     8,     6,    22,     3,     3,    13,     6,     6,
      37,    17,    69,    19,    20,    21,    50,    51,    52,    53,
      54,    55,    40,     3,    61,    64,    44,    45,     3,     3,
       3,     6,     6,     6,     3,     3,    37,     6,     6,    61,
      53,    54,    55,    50,    52,    60,    58,    38,    66,    67,
      59,    61,    63,    37,    65,    59,    61,    33,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    87,
      88,    89,    90,    91,    92,    93,    99,   134,   101,    57,
      59,    37,    32,    38,    30,    57,   105,   103,    95,     4,
      -1,    62,    62,    58,    -1,    62,    -1,     4,   105,    -1,
      -1,    -1,    -1,    18,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    18,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   137,
      -1,    36,    37,    38,    39,    -1,    -1,    -1,   151,    36,
      37,    38,    39,    -1,    -1,    -1,    51,   144,    -1,   153,
     154,    -1,    -1,    -1,    51,    -1,    61,    62,    -1,    64,
       5,    -1,     7,     8,    61,    -1,    -1,    64,    13,    14,
      15,    16,    17,    -1,    19,    20,    21,    -1,    23,    24,
      -1,    -1,    27,    28,    -1,     5,    31,     7,     8,    -1,
      -1,    -1,    -1,    13,    14,    15,    16,    17,    -1,    19,
      20,    21,    -1,    23,    24,    -1,    -1,    27,    28,    -1,
      -1,    31,    -1,    58,     5,    -1,     7,     8,    -1,    -1,
      -1,    -1,    13,    14,    15,    16,    17,    -1,    19,    20,
      21,    -1,    23,    24,    -1,    -1,    27,    28,    58,     5,
      31,     7,     8,    -1,    -1,    -1,    -1,    13,    14,    15,
      16,    17,    -1,    19,    20,    21,    -1,    23,    24,    -1,
      -1,    27,    28,    -1,    -1,    31,    -1,    58,    -1,    -1,
      -1,    -1,    -1,     0,    -1,    -1,    -1,    -1,     5,    -1,
       7,     8,    -1,    -1,    11,    12,    13,    14,    15,    16,
      17,    57,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    34,    35,    31,    -1,    -1,    -1,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    -1,    -1,    34,    35,    -1,    -1,
      -1,    63,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    -1,    34,
      35,    -1,    -1,    -1,    62,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    -1,    34,    35,    -1,    -1,    -1,    62,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    29,    -1,    -1,    -1,    60,    34,
      35,    -1,    -1,    -1,    -1,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    34,    35,    -1,    -1,    -1,    -1,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    34,    35,    -1,    -1,    60,    -1,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,     5,    -1,     7,     8,    60,
      -1,    -1,    -1,    13,    14,    15,    16,    17,    -1,    19,
      20,    21,    -1,    23,    24,    -1,    -1,    27,    28,    -1,
      -1,    31,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    67,     0,     5,     7,     8,    11,    12,    13,    14,
      15,    16,    17,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    31,    68,    69,    77,    79,    80,    73,
      73,    73,    73,    73,    37,    37,    37,     3,     4,    18,
      36,    37,    38,    39,    51,    61,    64,    81,    83,     5,
      57,    77,    78,    78,    61,    81,    61,    84,    52,     3,
       6,    74,     6,     6,     6,     6,    59,    59,    60,    61,
      61,    81,    81,    81,    38,    85,    34,    35,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    60,    76,    77,    81,    82,    29,
      37,    33,    80,    59,    57,    57,    81,    81,    62,    82,
      37,    62,    63,    65,    81,    81,    81,    81,    81,    81,
      81,    81,    81,    81,    81,    81,    81,    81,    81,    81,
      81,    81,    58,    77,    63,    62,    78,    32,    78,    38,
      75,    83,    70,    58,    76,    60,    60,    62,    62,    38,
      82,    30,    81,     9,    10,    58,    71,    72,    58,    78,
      62,    73,    73,     6,     6
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    66,    67,    67,    67,    67,    67,    67,    68,    69,
      69,    69,    69,    69,    70,    70,    70,    71,    72,    73,
      73,    74,    75,    75,    76,    76,    77,    77,    77,    77,
      77,    77,    77,    77,    77,    77,    77,    77,    78,    78,
      79,    79,    80,    80,    80,    80,    80,    80,    81,    81,
      81,    81,    81,    81,    81,    81,    81,    81,    81,    81,
      81,    81,    81,    81,    81,    81,    81,    81,    81,    81,
      81,    81,    81,    81,    81,    81,    82,    82,    83,    84,
      85,    85
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     0,     2,     2,     2,     2,     2,     3,     3,
       3,     6,     6,     5,     0,     2,     2,     3,     3,     0,
       2,     3,     1,     1,     1,     2,     1,     4,     6,     4,
       5,     5,     3,     2,     2,     4,     1,     1,     1,     3,
       1,     3,     3,     1,     1,     2,     3,     1,     3,     3,
       2,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     2,     4,
       3,     4,     1,     1,     1,     1,     1,     3,     3,     5,
       1,     3
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
  case 3: /* conf: conf obj  */
#line 136 "grammar.y"
                                        { cnfDoObj((yyvsp[0].obj)); }
#line 1499 "grammar.c"
    break;

  case 4: /* conf: conf stmt  */
#line 137 "grammar.y"
                                        { cnfDoScript((yyvsp[0].stmt)); }
#line 1505 "grammar.c"
    break;

  case 5: /* conf: conf LEGACY_RULESET  */
#line 138 "grammar.y"
                                        { cnfDoCfsysline((yyvsp[0].s)); }
#line 1511 "grammar.c"
    break;

  case 6: /* conf: conf BSD_TAG_SELECTOR  */
#line 139 "grammar.y"
                                        { cnfDoBSDTag((yyvsp[0].s)); }
#line 1517 "grammar.c"
    break;

  case 7: /* conf: conf BSD_HOST_SELECTOR  */
#line 140 "grammar.y"
                                        { cnfDoBSDHost((yyvsp[0].s)); }
#line 1523 "grammar.c"
    break;

  case 8: /* include: BEGIN_INCLUDE nvlst ENDOBJ  */
#line 141 "grammar.y"
                                        { includeProcessCnf((yyvsp[-1].nvlst)); }
#line 1529 "grammar.c"
    break;

  case 9: /* obj: BEGINOBJ nvlst ENDOBJ  */
#line 142 "grammar.y"
                                        { (yyval.obj) = cnfobjNew((yyvsp[-2].objType), (yyvsp[-1].nvlst)); }
#line 1535 "grammar.c"
    break;

  case 10: /* obj: BEGIN_TPL nvlst ENDOBJ  */
#line 143 "grammar.y"
                                        { (yyval.obj) = cnfobjNew(CNFOBJ_TPL, (yyvsp[-1].nvlst)); }
#line 1541 "grammar.c"
    break;

  case 11: /* obj: BEGIN_TPL nvlst ENDOBJ '{' propconst '}'  */
#line 145 "grammar.y"
                                        { (yyval.obj) = cnfobjNew(CNFOBJ_TPL, (yyvsp[-4].nvlst));
					  (yyval.obj)->subobjs = (yyvsp[-1].objlst);
					}
#line 1549 "grammar.c"
    break;

  case 12: /* obj: BEGIN_RULESET nvlst ENDOBJ '{' script '}'  */
#line 149 "grammar.y"
                                        { (yyval.obj) = cnfobjNew(CNFOBJ_RULESET, (yyvsp[-4].nvlst));
					  (yyval.obj)->script = (yyvsp[-1].stmt);
					}
#line 1557 "grammar.c"
    break;

  case 13: /* obj: BEGIN_RULESET nvlst ENDOBJ '{' '}'  */
#line 153 "grammar.y"
                                        { (yyval.obj) = cnfobjNew(CNFOBJ_RULESET, (yyvsp[-3].nvlst));
					  (yyval.obj)->script = NULL;
					}
#line 1565 "grammar.c"
    break;

  case 14: /* propconst: %empty  */
#line 156 "grammar.y"
                                        { (yyval.objlst) = NULL; }
#line 1571 "grammar.c"
    break;

  case 15: /* propconst: propconst property  */
#line 157 "grammar.y"
                                        { (yyval.objlst) = objlstAdd((yyvsp[-1].objlst), (yyvsp[0].obj)); }
#line 1577 "grammar.c"
    break;

  case 16: /* propconst: propconst constant  */
#line 158 "grammar.y"
                                        { (yyval.objlst) = objlstAdd((yyvsp[-1].objlst), (yyvsp[0].obj)); }
#line 1583 "grammar.c"
    break;

  case 17: /* property: BEGIN_PROPERTY nvlst ENDOBJ  */
#line 159 "grammar.y"
                                        { (yyval.obj) = cnfobjNew(CNFOBJ_PROPERTY, (yyvsp[-1].nvlst)); }
#line 1589 "grammar.c"
    break;

  case 18: /* constant: BEGIN_CONSTANT nvlst ENDOBJ  */
#line 160 "grammar.y"
                                        { (yyval.obj) = cnfobjNew(CNFOBJ_CONSTANT, (yyvsp[-1].nvlst)); }
#line 1595 "grammar.c"
    break;

  case 19: /* nvlst: %empty  */
#line 161 "grammar.y"
                                        { (yyval.nvlst) = NULL; }
#line 1601 "grammar.c"
    break;

  case 20: /* nvlst: nvlst nv  */
#line 162 "grammar.y"
                                        { (yyvsp[0].nvlst)->next = (yyvsp[-1].nvlst); (yyval.nvlst) = (yyvsp[0].nvlst); }
#line 1607 "grammar.c"
    break;

  case 21: /* nv: NAME '=' value  */
#line 163 "grammar.y"
                                        { (yyval.nvlst) = nvlstSetName((yyvsp[0].nvlst), (yyvsp[-2].estr)); }
#line 1613 "grammar.c"
    break;

  case 22: /* value: STRING  */
#line 164 "grammar.y"
                                        { (yyval.nvlst) = nvlstNewStr((yyvsp[0].estr)); }
#line 1619 "grammar.c"
    break;

  case 23: /* value: array  */
#line 165 "grammar.y"
                                        { (yyval.nvlst) = nvlstNewArray((yyvsp[0].arr)); }
#line 1625 "grammar.c"
    break;

  case 24: /* script: stmt  */
#line 166 "grammar.y"
                                        { (yyval.stmt) = (yyvsp[0].stmt); }
#line 1631 "grammar.c"
    break;

  case 25: /* script: script stmt  */
#line 167 "grammar.y"
                                        { (yyval.stmt) = scriptAddStmt((yyvsp[-1].stmt), (yyvsp[0].stmt)); }
#line 1637 "grammar.c"
    break;

  case 26: /* stmt: actlst  */
#line 168 "grammar.y"
                                        { (yyval.stmt) = (yyvsp[0].stmt); }
#line 1643 "grammar.c"
    break;

  case 27: /* stmt: IF expr THEN block  */
#line 169 "grammar.y"
                                        { (yyval.stmt) = cnfstmtNew(S_IF);
					  (yyval.stmt)->d.s_if.expr = (yyvsp[-2].expr);
					  (yyval.stmt)->d.s_if.t_then = (yyvsp[0].stmt);
					  (yyval.stmt)->d.s_if.t_else = NULL; }
#line 1652 "grammar.c"
    break;

  case 28: /* stmt: IF expr THEN block ELSE block  */
#line 173 "grammar.y"
                                        { (yyval.stmt) = cnfstmtNew(S_IF);
					  (yyval.stmt)->d.s_if.expr = (yyvsp[-4].expr);
					  (yyval.stmt)->d.s_if.t_then = (yyvsp[-2].stmt);
					  (yyval.stmt)->d.s_if.t_else = (yyvsp[0].stmt); }
#line 1661 "grammar.c"
    break;

  case 29: /* stmt: FOREACH iterator_decl DO block  */
#line 177 "grammar.y"
                                         { (yyval.stmt) = cnfstmtNew(S_FOREACH);
					  (yyval.stmt)->d.s_foreach.iter = (yyvsp[-2].itr);
					  (yyval.stmt)->d.s_foreach.body = (yyvsp[0].stmt);}
#line 1669 "grammar.c"
    break;

  case 30: /* stmt: RESET VAR '=' expr ';'  */
#line 180 "grammar.y"
                                        { (yyval.stmt) = cnfstmtNewSet((yyvsp[-3].s), (yyvsp[-1].expr), 1); }
#line 1675 "grammar.c"
    break;

  case 31: /* stmt: SET VAR '=' expr ';'  */
#line 181 "grammar.y"
                                        { (yyval.stmt) = cnfstmtNewSet((yyvsp[-3].s), (yyvsp[-1].expr), 0); }
#line 1681 "grammar.c"
    break;

  case 32: /* stmt: UNSET VAR ';'  */
#line 182 "grammar.y"
                                        { (yyval.stmt) = cnfstmtNewUnset((yyvsp[-1].s)); }
#line 1687 "grammar.c"
    break;

  case 33: /* stmt: PRIFILT block  */
#line 183 "grammar.y"
                                        { (yyval.stmt) = cnfstmtNewPRIFILT((yyvsp[-1].s), (yyvsp[0].stmt)); }
#line 1693 "grammar.c"
    break;

  case 34: /* stmt: PROPFILT block  */
#line 184 "grammar.y"
                                        { (yyval.stmt) = cnfstmtNewPROPFILT((yyvsp[-1].s), (yyvsp[0].stmt)); }
#line 1699 "grammar.c"
    break;

  case 35: /* stmt: RELOAD_LOOKUP_TABLE_PROCEDURE '(' fparams ')'  */
#line 185 "grammar.y"
                                                        { (yyval.stmt) = cnfstmtNewReloadLookupTable((yyvsp[-1].fparams));}
#line 1705 "grammar.c"
    break;

  case 36: /* stmt: include  */
#line 186 "grammar.y"
                                        { (yyval.stmt) = NULL; }
#line 1711 "grammar.c"
    break;

  case 37: /* stmt: BEGINOBJ  */
#line 187 "grammar.y"
                                        { (yyval.stmt) = NULL; parser_errmsg("declarative object '%s' not permitted in action block [stmt]", yytext);}
#line 1717 "grammar.c"
    break;

  case 38: /* block: stmt  */
#line 188 "grammar.y"
                                        { (yyval.stmt) = (yyvsp[0].stmt); }
#line 1723 "grammar.c"
    break;

  case 39: /* block: '{' script '}'  */
#line 189 "grammar.y"
                                        { (yyval.stmt) = (yyvsp[-1].stmt); }
#line 1729 "grammar.c"
    break;

  case 40: /* actlst: s_act  */
#line 190 "grammar.y"
                                        { (yyval.stmt) = (yyvsp[0].stmt); }
#line 1735 "grammar.c"
    break;

  case 41: /* actlst: actlst '&' s_act  */
#line 191 "grammar.y"
                                        { (yyval.stmt) = scriptAddStmt((yyvsp[-2].stmt), (yyvsp[0].stmt)); }
#line 1741 "grammar.c"
    break;

  case 42: /* s_act: BEGIN_ACTION nvlst ENDOBJ  */
#line 193 "grammar.y"
                                        { (yyval.stmt) = cnfstmtNewAct((yyvsp[-1].nvlst)); }
#line 1747 "grammar.c"
    break;

  case 43: /* s_act: LEGACY_ACTION  */
#line 194 "grammar.y"
                                        { (yyval.stmt) = cnfstmtNewLegaAct((yyvsp[0].s)); }
#line 1753 "grammar.c"
    break;

  case 44: /* s_act: STOP  */
#line 195 "grammar.y"
                                        { (yyval.stmt) = cnfstmtNew(S_STOP); }
#line 1759 "grammar.c"
    break;

  case 45: /* s_act: CALL NAME  */
#line 196 "grammar.y"
                                        { (yyval.stmt) = cnfstmtNewCall((yyvsp[0].estr)); }
#line 1765 "grammar.c"
    break;

  case 46: /* s_act: CALL_INDIRECT expr ';'  */
#line 197 "grammar.y"
                                        { (yyval.stmt) = cnfstmtNew(S_CALL_INDIRECT);
					  (yyval.stmt)->d.s_call_ind.expr = (yyvsp[-1].expr);
					}
#line 1773 "grammar.c"
    break;

  case 47: /* s_act: CONTINUE  */
#line 200 "grammar.y"
                                        { (yyval.stmt) = cnfstmtNewContinue(); }
#line 1779 "grammar.c"
    break;

  case 48: /* expr: expr AND expr  */
#line 201 "grammar.y"
                                        { (yyval.expr) = cnfexprNew(AND, (yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 1785 "grammar.c"
    break;

  case 49: /* expr: expr OR expr  */
#line 202 "grammar.y"
                                        { (yyval.expr) = cnfexprNew(OR, (yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 1791 "grammar.c"
    break;

  case 50: /* expr: NOT expr  */
#line 203 "grammar.y"
                                        { (yyval.expr) = cnfexprNew(NOT, NULL, (yyvsp[0].expr)); }
#line 1797 "grammar.c"
    break;

  case 51: /* expr: expr CMP_EQ expr  */
#line 204 "grammar.y"
                                        { (yyval.expr) = cnfexprNew(CMP_EQ, (yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 1803 "grammar.c"
    break;

  case 52: /* expr: expr CMP_NE expr  */
#line 205 "grammar.y"
                                        { (yyval.expr) = cnfexprNew(CMP_NE, (yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 1809 "grammar.c"
    break;

  case 53: /* expr: expr CMP_LE expr  */
#line 206 "grammar.y"
                                        { (yyval.expr) = cnfexprNew(CMP_LE, (yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 1815 "grammar.c"
    break;

  case 54: /* expr: expr CMP_GE expr  */
#line 207 "grammar.y"
                                        { (yyval.expr) = cnfexprNew(CMP_GE, (yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 1821 "grammar.c"
    break;

  case 55: /* expr: expr CMP_LT expr  */
#line 208 "grammar.y"
                                        { (yyval.expr) = cnfexprNew(CMP_LT, (yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 1827 "grammar.c"
    break;

  case 56: /* expr: expr CMP_GT expr  */
#line 209 "grammar.y"
                                        { (yyval.expr) = cnfexprNew(CMP_GT, (yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 1833 "grammar.c"
    break;

  case 57: /* expr: expr CMP_CONTAINS expr  */
#line 210 "grammar.y"
                                        { (yyval.expr) = cnfexprNew(CMP_CONTAINS, (yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 1839 "grammar.c"
    break;

  case 58: /* expr: expr CMP_CONTAINSI expr  */
#line 211 "grammar.y"
                                        { (yyval.expr) = cnfexprNew(CMP_CONTAINSI, (yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 1845 "grammar.c"
    break;

  case 59: /* expr: expr CMP_STARTSWITH expr  */
#line 212 "grammar.y"
                                        { (yyval.expr) = cnfexprNew(CMP_STARTSWITH, (yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 1851 "grammar.c"
    break;

  case 60: /* expr: expr CMP_STARTSWITHI expr  */
#line 213 "grammar.y"
                                        { (yyval.expr) = cnfexprNew(CMP_STARTSWITHI, (yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 1857 "grammar.c"
    break;

  case 61: /* expr: expr '&' expr  */
#line 214 "grammar.y"
                                        { (yyval.expr) = cnfexprNew('&', (yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 1863 "grammar.c"
    break;

  case 62: /* expr: expr '+' expr  */
#line 215 "grammar.y"
                                        { (yyval.expr) = cnfexprNew('+', (yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 1869 "grammar.c"
    break;

  case 63: /* expr: expr '-' expr  */
#line 216 "grammar.y"
                                        { (yyval.expr) = cnfexprNew('-', (yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 1875 "grammar.c"
    break;

  case 64: /* expr: expr '*' expr  */
#line 217 "grammar.y"
                                        { (yyval.expr) = cnfexprNew('*', (yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 1881 "grammar.c"
    break;

  case 65: /* expr: expr '/' expr  */
#line 218 "grammar.y"
                                        { (yyval.expr) = cnfexprNew('/', (yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 1887 "grammar.c"
    break;

  case 66: /* expr: expr '%' expr  */
#line 219 "grammar.y"
                                        { (yyval.expr) = cnfexprNew('%', (yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 1893 "grammar.c"
    break;

  case 67: /* expr: '(' expr ')'  */
#line 220 "grammar.y"
                                        { (yyval.expr) = (yyvsp[-1].expr); }
#line 1899 "grammar.c"
    break;

  case 68: /* expr: '-' expr  */
#line 221 "grammar.y"
                                        { (yyval.expr) = cnfexprNew('M', NULL, (yyvsp[0].expr)); }
#line 1905 "grammar.c"
    break;

  case 69: /* expr: EXISTS '(' VAR ')'  */
#line 222 "grammar.y"
                                        { (yyval.expr) = (struct cnfexpr*) cnffuncexistsNew((yyvsp[-1].s)); }
#line 1911 "grammar.c"
    break;

  case 70: /* expr: FUNC '(' ')'  */
#line 223 "grammar.y"
                                        { (yyval.expr) = (struct cnfexpr*) cnffuncNew((yyvsp[-2].estr), NULL); }
#line 1917 "grammar.c"
    break;

  case 71: /* expr: FUNC '(' fparams ')'  */
#line 224 "grammar.y"
                                        { (yyval.expr) = (struct cnfexpr*) cnffuncNew((yyvsp[-3].estr), (yyvsp[-1].fparams)); }
#line 1923 "grammar.c"
    break;

  case 72: /* expr: NUMBER  */
#line 225 "grammar.y"
                                        { (yyval.expr) = (struct cnfexpr*) cnfnumvalNew((yyvsp[0].n)); }
#line 1929 "grammar.c"
    break;

  case 73: /* expr: STRING  */
#line 226 "grammar.y"
                                        { (yyval.expr) = (struct cnfexpr*) cnfstringvalNew((yyvsp[0].estr)); }
#line 1935 "grammar.c"
    break;

  case 74: /* expr: VAR  */
#line 227 "grammar.y"
                                        { (yyval.expr) = (struct cnfexpr*) cnfvarNew((yyvsp[0].s)); }
#line 1941 "grammar.c"
    break;

  case 75: /* expr: array  */
#line 228 "grammar.y"
                                        { (yyval.expr) = (struct cnfexpr*) (yyvsp[0].arr); }
#line 1947 "grammar.c"
    break;

  case 76: /* fparams: expr  */
#line 229 "grammar.y"
                                        { (yyval.fparams) = cnffparamlstNew((yyvsp[0].expr), NULL); }
#line 1953 "grammar.c"
    break;

  case 77: /* fparams: expr ',' fparams  */
#line 230 "grammar.y"
                                        { (yyval.fparams) = cnffparamlstNew((yyvsp[-2].expr), (yyvsp[0].fparams)); }
#line 1959 "grammar.c"
    break;

  case 78: /* array: '[' arrayelt ']'  */
#line 231 "grammar.y"
                                        { (yyval.arr) = (yyvsp[-1].arr); }
#line 1965 "grammar.c"
    break;

  case 79: /* iterator_decl: '(' VAR ITERATOR_ASSIGNMENT expr ')'  */
#line 232 "grammar.y"
                                                        { (yyval.itr) = cnfNewIterator((yyvsp[-3].s), (yyvsp[-1].expr)); }
#line 1971 "grammar.c"
    break;

  case 80: /* arrayelt: STRING  */
#line 233 "grammar.y"
                                        { (yyval.arr) = cnfarrayNew((yyvsp[0].estr)); }
#line 1977 "grammar.c"
    break;

  case 81: /* arrayelt: arrayelt ',' STRING  */
#line 234 "grammar.y"
                                        { (yyval.arr) = cnfarrayAdd((yyvsp[-2].arr), (yyvsp[0].estr)); }
#line 1983 "grammar.c"
    break;


#line 1987 "grammar.c"

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

#line 236 "grammar.y"

/*
int yyerror(char *s)
{
	printf("parse failure on or before line %d: %s\n", yylineno, s);
	return 0;
}
*/
