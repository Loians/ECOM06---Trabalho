/* A Bison parser, made by GNU Bison 3.6.4.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2020 Free Software Foundation,
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
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

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

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.6.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "lupe.y"

    #include <stdio.h>
    #include <stdlib.h>
    #include <string.h>
    #include "arvore.h"
    extern FILE* yyin;
    void yyerror(const char* error);
    extern int yylex();
    extern int lcont;
    extern node *raiz;
    extern FILE *yyout;
    int erro = 0;
    char *temp, *temp2;

#line 86 "lupe.tab.c"

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
#ifndef YY_YY_LUPE_TAB_H_INCLUDED
# define YY_YY_LUPE_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
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
    VARIAVEL = 258,                /* VARIAVEL  */
    INT = 259,                     /* INT  */
    CHAR = 260,                    /* CHAR  */
    REAL = 261,                    /* REAL  */
    ATRIBUICAO = 262,              /* ATRIBUICAO  */
    SOMA = 263,                    /* SOMA  */
    SUB = 264,                     /* SUB  */
    MULTI = 265,                   /* MULTI  */
    DIVI = 266,                    /* DIVI  */
    MOD = 267,                     /* MOD  */
    AND = 268,                     /* AND  */
    OR = 269,                      /* OR  */
    NOT = 270,                     /* NOT  */
    IGUAL = 271,                   /* IGUAL  */
    MAIORIGUAL = 272,              /* MAIORIGUAL  */
    MENORIGUAL = 273,              /* MENORIGUAL  */
    MAIOR = 274,                   /* MAIOR  */
    MENOR = 275,                   /* MENOR  */
    DIFERENTE = 276,               /* DIFERENTE  */
    VIRGULA = 277,                 /* VIRGULA  */
    PTVIRGULA = 278,               /* PTVIRGULA  */
    ABREP = 279,                   /* ABREP  */
    FECHAP = 280,                  /* FECHAP  */
    INICIOBLOCO = 281,             /* INICIOBLOCO  */
    FIMBLOCO = 282,                /* FIMBLOCO  */
    INICIOPROG = 283,              /* INICIOPROG  */
    FIMPROG = 284,                 /* FIMPROG  */
    T_INT = 285,                   /* T_INT  */
    T_CHAR = 286,                  /* T_CHAR  */
    T_REAL = 287,                  /* T_REAL  */
    IF = 288,                      /* IF  */
    ELSE = 289,                    /* ELSE  */
    WHILE = 290,                   /* WHILE  */
    FOR = 291,                     /* FOR  */
    ENTRADA = 292,                 /* ENTRADA  */
    SAIDA = 293,                   /* SAIDA  */
    EXPPARS = 294,                 /* EXPPARS  */
    EXPOPS = 295,                  /* EXPOPS  */
    EXPSUB = 296,                  /* EXPSUB  */
    NOVAVAR = 297,                 /* NOVAVAR  */
    ATRIBUIR = 298,                /* ATRIBUIR  */
    NOTVAR = 299,                  /* NOTVAR  */
    OPCOMP = 300,                  /* OPCOMP  */
    OPLOGICA = 301                 /* OPLOGICA  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 18 "lupe.y"

    char charac;
    int inteiro;
    float real;
    char* var;
    node *nos;
    int tipoint;

#line 191 "lupe.tab.c"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_LUPE_TAB_H_INCLUDED  */
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_VARIAVEL = 3,                   /* VARIAVEL  */
  YYSYMBOL_INT = 4,                        /* INT  */
  YYSYMBOL_CHAR = 5,                       /* CHAR  */
  YYSYMBOL_REAL = 6,                       /* REAL  */
  YYSYMBOL_ATRIBUICAO = 7,                 /* ATRIBUICAO  */
  YYSYMBOL_SOMA = 8,                       /* SOMA  */
  YYSYMBOL_SUB = 9,                        /* SUB  */
  YYSYMBOL_MULTI = 10,                     /* MULTI  */
  YYSYMBOL_DIVI = 11,                      /* DIVI  */
  YYSYMBOL_MOD = 12,                       /* MOD  */
  YYSYMBOL_AND = 13,                       /* AND  */
  YYSYMBOL_OR = 14,                        /* OR  */
  YYSYMBOL_NOT = 15,                       /* NOT  */
  YYSYMBOL_IGUAL = 16,                     /* IGUAL  */
  YYSYMBOL_MAIORIGUAL = 17,                /* MAIORIGUAL  */
  YYSYMBOL_MENORIGUAL = 18,                /* MENORIGUAL  */
  YYSYMBOL_MAIOR = 19,                     /* MAIOR  */
  YYSYMBOL_MENOR = 20,                     /* MENOR  */
  YYSYMBOL_DIFERENTE = 21,                 /* DIFERENTE  */
  YYSYMBOL_VIRGULA = 22,                   /* VIRGULA  */
  YYSYMBOL_PTVIRGULA = 23,                 /* PTVIRGULA  */
  YYSYMBOL_ABREP = 24,                     /* ABREP  */
  YYSYMBOL_FECHAP = 25,                    /* FECHAP  */
  YYSYMBOL_INICIOBLOCO = 26,               /* INICIOBLOCO  */
  YYSYMBOL_FIMBLOCO = 27,                  /* FIMBLOCO  */
  YYSYMBOL_INICIOPROG = 28,                /* INICIOPROG  */
  YYSYMBOL_FIMPROG = 29,                   /* FIMPROG  */
  YYSYMBOL_T_INT = 30,                     /* T_INT  */
  YYSYMBOL_T_CHAR = 31,                    /* T_CHAR  */
  YYSYMBOL_T_REAL = 32,                    /* T_REAL  */
  YYSYMBOL_IF = 33,                        /* IF  */
  YYSYMBOL_ELSE = 34,                      /* ELSE  */
  YYSYMBOL_WHILE = 35,                     /* WHILE  */
  YYSYMBOL_FOR = 36,                       /* FOR  */
  YYSYMBOL_ENTRADA = 37,                   /* ENTRADA  */
  YYSYMBOL_SAIDA = 38,                     /* SAIDA  */
  YYSYMBOL_EXPPARS = 39,                   /* EXPPARS  */
  YYSYMBOL_EXPOPS = 40,                    /* EXPOPS  */
  YYSYMBOL_EXPSUB = 41,                    /* EXPSUB  */
  YYSYMBOL_NOVAVAR = 42,                   /* NOVAVAR  */
  YYSYMBOL_ATRIBUIR = 43,                  /* ATRIBUIR  */
  YYSYMBOL_NOTVAR = 44,                    /* NOTVAR  */
  YYSYMBOL_OPCOMP = 45,                    /* OPCOMP  */
  YYSYMBOL_OPLOGICA = 46,                  /* OPLOGICA  */
  YYSYMBOL_YYACCEPT = 47,                  /* $accept  */
  YYSYMBOL_inicio = 48,                    /* inicio  */
  YYSYMBOL_sentenca = 49,                  /* sentenca  */
  YYSYMBOL_sentencas = 50,                 /* sentencas  */
  YYSYMBOL_varint = 51,                    /* varint  */
  YYSYMBOL_valor = 52,                     /* valor  */
  YYSYMBOL_opmod = 53,                     /* opmod  */
  YYSYMBOL_operacoes = 54,                 /* operacoes  */
  YYSYMBOL_expressaoA = 55,                /* expressaoA  */
  YYSYMBOL_tipos = 56,                     /* tipos  */
  YYSYMBOL_novavar = 57,                   /* novavar  */
  YYSYMBOL_atribuir = 58,                  /* atribuir  */
  YYSYMBOL_59_1 = 59,                      /* $@1  */
  YYSYMBOL_escrever = 60,                  /* escrever  */
  YYSYMBOL_ler = 61,                       /* ler  */
  YYSYMBOL_operadorL = 62,                 /* operadorL  */
  YYSYMBOL_varlogica = 63,                 /* varlogica  */
  YYSYMBOL_relacional = 64,                /* relacional  */
  YYSYMBOL_opcomp = 65,                    /* opcomp  */
  YYSYMBOL_oplogica = 66,                  /* oplogica  */
  YYSYMBOL_opLogicas = 67,                 /* opLogicas  */
  YYSYMBOL_condif = 68,                    /* condif  */
  YYSYMBOL_condifelse = 69,                /* condifelse  */
  YYSYMBOL_loopfor = 70,                   /* loopfor  */
  YYSYMBOL_71_2 = 71,                      /* $@2  */
  YYSYMBOL_loopwhile = 72                  /* loopwhile  */
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
typedef yytype_int8 yy_state_t;

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
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && ! defined __ICC && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                            \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
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
#define YYFINAL  23
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   184

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  47
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  26
/* YYNRULES -- Number of rules.  */
#define YYNRULES  56
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  108

#define YYMAXUTOK   301


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
      45,    46
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    79,    79,    83,    86,    89,    92,    95,    98,   101,
     104,   109,   112,   121,   129,   138,   145,   152,   157,   165,
     168,   171,   174,   179,   186,   193,   199,   202,   206,   209,
     212,   216,   226,   226,   237,   245,   255,   258,   262,   268,
     272,   275,   278,   281,   284,   287,   291,   299,   307,   310,
     313,   318,   327,   330,   339,   339,   351
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
  "\"end of file\"", "error", "\"invalid token\"", "VARIAVEL", "INT",
  "CHAR", "REAL", "ATRIBUICAO", "SOMA", "SUB", "MULTI", "DIVI", "MOD",
  "AND", "OR", "NOT", "IGUAL", "MAIORIGUAL", "MENORIGUAL", "MAIOR",
  "MENOR", "DIFERENTE", "VIRGULA", "PTVIRGULA", "ABREP", "FECHAP",
  "INICIOBLOCO", "FIMBLOCO", "INICIOPROG", "FIMPROG", "T_INT", "T_CHAR",
  "T_REAL", "IF", "ELSE", "WHILE", "FOR", "ENTRADA", "SAIDA", "EXPPARS",
  "EXPOPS", "EXPSUB", "NOVAVAR", "ATRIBUIR", "NOTVAR", "OPCOMP",
  "OPLOGICA", "$accept", "inicio", "sentenca", "sentencas", "varint",
  "valor", "opmod", "operacoes", "expressaoA", "tipos", "novavar",
  "atribuir", "$@1", "escrever", "ler", "operadorL", "varlogica",
  "relacional", "opcomp", "oplogica", "opLogicas", "condif", "condifelse",
  "loopfor", "$@2", "loopwhile", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_int16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301
};
#endif

#define YYPACT_NINF (-54)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -19,   112,    26,   -54,   -54,   -54,   -54,     0,     4,     5,
      10,    11,   -54,    24,    36,   -54,   -54,   -54,   -54,     6,
     -54,   -54,   -54,   -54,    41,     1,     1,    47,    48,    14,
     -54,   -54,    40,    38,    14,   -54,   -54,   -54,   -54,    14,
      14,    14,    54,   -54,   -54,   163,    -2,   -54,   -54,    49,
      52,   -54,    53,    22,   -54,   112,   143,    79,    79,    33,
      18,   -54,   -54,   -54,   -54,   -54,   -54,   -54,   -54,   -54,
     -54,    14,    14,   -54,   -54,     1,    55,    58,    50,    57,
      62,    64,   -54,   -54,   -54,    79,    79,    79,   -54,   112,
     112,    14,   -54,   -54,   -54,    76,    89,   147,   -54,   -54,
       1,    75,    14,    61,    84,   112,   101,   -54
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,    10,     0,    32,    28,    29,    30,     0,     0,     0,
       0,     0,    11,     0,     0,     4,     3,     5,     6,    52,
       9,     7,     8,     1,     0,     0,     0,     0,     0,     0,
       2,    12,     0,     0,     0,    13,    14,    15,    16,     0,
       0,     0,    17,    26,    27,    39,    50,    49,    48,     0,
       0,    54,     0,     0,    31,    10,     0,    25,    38,     0,
       0,    19,    20,    21,    22,    40,    41,    42,    43,    44,
      45,     0,     0,    36,    37,     0,     0,     0,     0,     0,
       0,     0,    33,    23,    18,    24,    46,    39,    47,    10,
      10,     0,    35,    34,    53,     0,     0,     0,    51,    56,
       0,     0,     0,     0,     0,    10,     0,    55
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -54,   -54,   -13,   -53,    45,   -54,   -54,   -54,   -26,   -54,
     -54,   -54,   -54,   -54,   -54,   -54,    42,   -54,   -54,   -54,
     -25,   -54,   -54,   -54,   -54,   -54
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     2,    12,    13,    42,    43,    44,    71,    45,    14,
      15,    16,    24,    17,    18,    75,    46,    72,    47,    48,
      49,    19,    20,    21,    78,    22
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int8 yytable[] =
{
      31,    50,    81,    53,    35,    36,    37,    38,    56,     1,
      39,    73,    74,    57,    58,    59,    40,    35,    36,    37,
      38,    35,    36,    39,    25,    41,    23,     3,    26,    27,
      61,    62,    63,    64,    28,    29,    95,    96,    41,    32,
      33,    61,    62,    63,    64,    85,    86,    80,    34,    87,
      51,    52,   106,    30,     4,     5,     6,     7,    83,     8,
       9,    10,    11,    54,    55,    97,    60,     3,    31,    61,
      62,    63,    64,    91,    76,   101,   103,    77,    79,     3,
      92,    89,    31,    31,    90,    93,   104,    61,    62,    63,
      64,    94,     3,    31,     4,     5,     6,     7,   102,     8,
       9,    10,    11,    98,     3,    84,     4,     5,     6,     7,
     105,     8,     9,    10,    11,     3,    99,    88,     0,     4,
       5,     6,     7,     0,     8,     9,    10,    11,   107,     0,
       0,     4,     5,     6,     7,     0,     8,     9,    10,    11,
       0,     0,     4,     5,     6,     7,     0,     8,     9,    10,
      11,    61,    62,    63,    64,    61,    62,    63,    64,     0,
       0,     0,     0,     0,     0,     0,    82,     0,     0,     0,
     100,    61,    62,    63,    64,     0,     0,     0,     0,    65,
      66,    67,    68,    69,    70
};

static const yytype_int8 yycheck[] =
{
      13,    26,    55,    29,     3,     4,     5,     6,    34,    28,
       9,    13,    14,    39,    40,    41,    15,     3,     4,     5,
       6,     3,     4,     9,    24,    24,     0,     3,    24,    24,
       8,     9,    10,    11,    24,    24,    89,    90,    24,     3,
      34,     8,     9,    10,    11,    71,    72,    25,     7,    75,
       3,     3,   105,    29,    30,    31,    32,    33,    25,    35,
      36,    37,    38,    23,    26,    91,    12,     3,    81,     8,
       9,    10,    11,    23,    25,   100,   102,    25,    25,     3,
      23,    26,    95,    96,    26,    23,    25,     8,     9,    10,
      11,    27,     3,   106,    30,    31,    32,    33,    23,    35,
      36,    37,    38,    27,     3,    60,    30,    31,    32,    33,
      26,    35,    36,    37,    38,     3,    27,    75,    -1,    30,
      31,    32,    33,    -1,    35,    36,    37,    38,    27,    -1,
      -1,    30,    31,    32,    33,    -1,    35,    36,    37,    38,
      -1,    -1,    30,    31,    32,    33,    -1,    35,    36,    37,
      38,     8,     9,    10,    11,     8,     9,    10,    11,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    23,    -1,    -1,    -1,
      23,     8,     9,    10,    11,    -1,    -1,    -1,    -1,    16,
      17,    18,    19,    20,    21
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    28,    48,     3,    30,    31,    32,    33,    35,    36,
      37,    38,    49,    50,    56,    57,    58,    60,    61,    68,
      69,    70,    72,     0,    59,    24,    24,    24,    24,    24,
      29,    49,     3,    34,     7,     3,     4,     5,     6,     9,
      15,    24,    51,    52,    53,    55,    63,    65,    66,    67,
      67,     3,     3,    55,    23,    26,    55,    55,    55,    55,
      12,     8,     9,    10,    11,    16,    17,    18,    19,    20,
      21,    54,    64,    13,    14,    62,    25,    25,    71,    25,
      25,    50,    23,    25,    51,    55,    55,    55,    63,    26,
      26,    23,    23,    23,    27,    50,    50,    55,    27,    27,
      23,    67,    23,    55,    25,    26,    50,    27
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    47,    48,    49,    49,    49,    49,    49,    49,    49,
      49,    50,    50,    51,    51,    52,    52,    52,    53,    54,
      54,    54,    54,    55,    55,    55,    55,    55,    56,    56,
      56,    57,    59,    58,    60,    61,    62,    62,    63,    63,
      64,    64,    64,    64,    64,    64,    65,    66,    67,    67,
      67,    68,    69,    69,    71,    70,    72
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     3,     1,     1,     1,     1,     1,     1,     1,
       0,     1,     2,     1,     1,     1,     1,     1,     3,     1,
       1,     1,     1,     3,     3,     2,     1,     1,     1,     1,
       1,     3,     0,     5,     5,     5,     1,     1,     2,     1,
       1,     1,     1,     1,     1,     1,     3,     3,     1,     1,
       1,     7,     1,     5,     0,    14,     7
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


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

/* This macro is provided for backward compatibility. */
# ifndef YY_LOCATION_PRINT
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif


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
  YYUSE (yyoutput);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yykind < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yykind], *yyvaluep);
# endif
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yykind);
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
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* The lookahead symbol.  */
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
    yy_state_fast_t yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize;

    /* The state stack.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss;
    yy_state_t *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yynerrs = 0;
  yystate = 0;
  yyerrstatus = 0;

  yystacksize = YYINITDEPTH;
  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;


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
    goto yyexhaustedlab;
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
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          goto yyexhaustedlab;
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
  case 2:
#line 79 "lupe.y"
                                    {
    raiz = (yyvsp[-1].nos);    
}
#line 1339 "lupe.tab.c"
    break;

  case 3:
#line 83 "lupe.y"
             {
        (yyval.nos) = (yyvsp[0].nos);
    }
#line 1347 "lupe.tab.c"
    break;

  case 4:
#line 86 "lupe.y"
              {
        (yyval.nos) = (yyvsp[0].nos);
    }
#line 1355 "lupe.tab.c"
    break;

  case 5:
#line 89 "lupe.y"
               {
        (yyval.nos) = (yyvsp[0].nos);
    }
#line 1363 "lupe.tab.c"
    break;

  case 6:
#line 92 "lupe.y"
          {
        (yyval.nos) = (yyvsp[0].nos);
    }
#line 1371 "lupe.tab.c"
    break;

  case 7:
#line 95 "lupe.y"
              {
        (yyval.nos) = (yyvsp[0].nos);
    }
#line 1379 "lupe.tab.c"
    break;

  case 8:
#line 98 "lupe.y"
                {
        (yyval.nos) = (yyvsp[0].nos);
    }
#line 1387 "lupe.tab.c"
    break;

  case 9:
#line 101 "lupe.y"
                 {
        (yyval.nos) = (yyvsp[0].nos);
    }
#line 1395 "lupe.tab.c"
    break;

  case 10:
#line 104 "lupe.y"
      {
        (yyval.nos) = NULL; 
    }
#line 1403 "lupe.tab.c"
    break;

  case 11:
#line 109 "lupe.y"
             {
        (yyval.nos) = (yyvsp[0].nos);
    }
#line 1411 "lupe.tab.c"
    break;

  case 12:
#line 112 "lupe.y"
                        {              
        (yyval.nos) = (node*)malloc(sizeof(node));
        (yyval.nos)->esq = (yyvsp[-1].nos); 
        (yyval.nos)->dir = (yyvsp[0].nos);
        (yyval.nos)->token = -1;
    }
#line 1422 "lupe.tab.c"
    break;

  case 13:
#line 121 "lupe.y"
             {
        (yyval.nos) = (node*)malloc(sizeof(node));
        (yyval.nos)->token = VARIAVEL;
        (yyval.nos)->nome = yylval.var;
        (yyval.nos)->esq = NULL;
        (yyval.nos)->dir = NULL;
        buscaLista(yylval.var);
    }
#line 1435 "lupe.tab.c"
    break;

  case 14:
#line 129 "lupe.y"
         {
        (yyval.nos) = (node*)malloc(sizeof(node));
        (yyval.nos)->token = INT;
        (yyval.nos)->valor.inteiro = yylval.inteiro;
        (yyval.nos)->esq = NULL;
        (yyval.nos)->dir = NULL;
    }
#line 1447 "lupe.tab.c"
    break;

  case 15:
#line 138 "lupe.y"
         {
        (yyval.nos) = (node*)malloc(sizeof(node));
        (yyval.nos)->token = CHAR;
        (yyval.nos)->valor.charac = yylval.charac;
        (yyval.nos)->esq = NULL;
        (yyval.nos)->dir = NULL;
    }
#line 1459 "lupe.tab.c"
    break;

  case 16:
#line 145 "lupe.y"
           {
        (yyval.nos) = (node*)malloc(sizeof(node));
        (yyval.nos)->token = REAL;
        (yyval.nos)->valor.real = yylval.real;
        (yyval.nos)->esq = NULL;
        (yyval.nos)->dir = NULL;
    }
#line 1471 "lupe.tab.c"
    break;

  case 17:
#line 152 "lupe.y"
            {
        (yyval.nos) = (yyvsp[0].nos);
    }
#line 1479 "lupe.tab.c"
    break;

  case 18:
#line 157 "lupe.y"
                      {
        (yyval.nos) = (node*)malloc(sizeof(node));
        (yyval.nos)->esq = (yyvsp[-2].nos);
        (yyval.nos)->dir = (yyvsp[0].nos);
        (yyval.nos)->token = MOD;
    }
#line 1490 "lupe.tab.c"
    break;

  case 19:
#line 165 "lupe.y"
         {
        (yyval.tipoint) = SOMA;
    }
#line 1498 "lupe.tab.c"
    break;

  case 20:
#line 168 "lupe.y"
         {
        (yyval.tipoint) = SUB;
    }
#line 1506 "lupe.tab.c"
    break;

  case 21:
#line 171 "lupe.y"
           {
        (yyval.tipoint) = MULTI;
    }
#line 1514 "lupe.tab.c"
    break;

  case 22:
#line 174 "lupe.y"
          {
        (yyval.tipoint) = DIVI;
    }
#line 1522 "lupe.tab.c"
    break;

  case 23:
#line 179 "lupe.y"
                            {
        (yyval.nos) = (node*)malloc(sizeof(node));
        (yyval.nos)->afrente = (yyvsp[-1].nos);
        (yyval.nos)->token = EXPPARS;
        (yyval.nos)->esq = NULL;
        (yyval.nos)->dir = NULL;
    }
#line 1534 "lupe.tab.c"
    break;

  case 24:
#line 186 "lupe.y"
                                      {
        (yyval.nos) = (node*)malloc(sizeof(node));
        (yyval.nos)->caso = (yyvsp[-1].tipoint);
        (yyval.nos)->token = EXPOPS;
        (yyval.nos)->esq = (yyvsp[-2].nos);
        (yyval.nos)->dir = (yyvsp[0].nos);
    }
#line 1546 "lupe.tab.c"
    break;

  case 25:
#line 193 "lupe.y"
                     {
        (yyval.nos) = (node*)malloc(sizeof(node));
        (yyval.nos)->token = EXPSUB;
        (yyval.nos)->esq = NULL;
        (yyval.nos)->dir = (yyvsp[0].nos);
    }
#line 1557 "lupe.tab.c"
    break;

  case 26:
#line 199 "lupe.y"
            {
        (yyval.nos) = (yyvsp[0].nos);
    }
#line 1565 "lupe.tab.c"
    break;

  case 27:
#line 202 "lupe.y"
            {
        (yyval.nos) = (yyvsp[0].nos);
    }
#line 1573 "lupe.tab.c"
    break;

  case 28:
#line 206 "lupe.y"
             {
        (yyval.tipoint) = T_INT;
    }
#line 1581 "lupe.tab.c"
    break;

  case 29:
#line 209 "lupe.y"
            {
        (yyval.tipoint) = T_CHAR;
    }
#line 1589 "lupe.tab.c"
    break;

  case 30:
#line 212 "lupe.y"
            {
        (yyval.tipoint) = T_REAL;
    }
#line 1597 "lupe.tab.c"
    break;

  case 31:
#line 216 "lupe.y"
                            {
        (yyval.nos) = (node*)malloc(sizeof(node));
        (yyval.nos)->caso = (yyvsp[-2].tipoint);
        (yyval.nos)->nome = yylval.var;
        (yyval.nos)->token = NOVAVAR;
        (yyval.nos)->esq = NULL;
        (yyval.nos)->dir = NULL;
        insereLista(yylval.var);
    }
#line 1611 "lupe.tab.c"
    break;

  case 32:
#line 226 "lupe.y"
             {temp = yylval.var;}
#line 1617 "lupe.tab.c"
    break;

  case 33:
#line 226 "lupe.y"
                                                                 {
        (yyval.nos) = (node*)malloc(sizeof(node));
        (yyval.nos)->afrente = (yyvsp[-1].nos);
        (yyval.nos)->nome = temp;
        (yyval.nos)->token = ATRIBUIR;
        (yyval.nos)->esq = NULL;
        (yyval.nos)->dir = NULL;
        buscaLista(temp);
    }
#line 1631 "lupe.tab.c"
    break;

  case 34:
#line 237 "lupe.y"
                                           {
        (yyval.nos) = (node*)malloc(sizeof(node));
        (yyval.nos)->token = SAIDA;
        (yyval.nos)->afrente = (yyvsp[-2].nos);
        (yyval.nos)->esq = NULL;
        (yyval.nos)->dir = NULL;
    }
#line 1643 "lupe.tab.c"
    break;

  case 35:
#line 245 "lupe.y"
                                           {
        (yyval.nos) = (node*)malloc(sizeof(node));
        (yyval.nos)->token = ENTRADA;
        buscaLista(yylval.var);
        (yyval.nos)->nome = yylval.var;
        (yyval.nos)->esq = NULL;
        (yyval.nos)->dir = NULL;
    }
#line 1656 "lupe.tab.c"
    break;

  case 36:
#line 255 "lupe.y"
        {
        (yyval.tipoint) = AND;
    }
#line 1664 "lupe.tab.c"
    break;

  case 37:
#line 258 "lupe.y"
         {
        (yyval.tipoint) = OR;
    }
#line 1672 "lupe.tab.c"
    break;

  case 38:
#line 262 "lupe.y"
                   {
        (yyval.nos) = (node*)malloc(sizeof(node));
        (yyval.nos)->token = NOTVAR;
        (yyval.nos)->esq = NULL;
        (yyval.nos)->dir = (yyvsp[0].nos);
    }
#line 1683 "lupe.tab.c"
    break;

  case 39:
#line 268 "lupe.y"
                {
        (yyval.nos) = (yyvsp[0].nos);
    }
#line 1691 "lupe.tab.c"
    break;

  case 40:
#line 272 "lupe.y"
          {
        (yyval.tipoint) = IGUAL;
    }
#line 1699 "lupe.tab.c"
    break;

  case 41:
#line 275 "lupe.y"
                 {
        (yyval.tipoint) = MAIORIGUAL;
    }
#line 1707 "lupe.tab.c"
    break;

  case 42:
#line 278 "lupe.y"
                 {
        (yyval.tipoint) = MENORIGUAL;
    }
#line 1715 "lupe.tab.c"
    break;

  case 43:
#line 281 "lupe.y"
            {
        (yyval.tipoint) = MAIOR;
    }
#line 1723 "lupe.tab.c"
    break;

  case 44:
#line 284 "lupe.y"
            {
        (yyval.tipoint) = MENOR;
    }
#line 1731 "lupe.tab.c"
    break;

  case 45:
#line 287 "lupe.y"
                {
        (yyval.tipoint) = DIFERENTE;
    }
#line 1739 "lupe.tab.c"
    break;

  case 46:
#line 291 "lupe.y"
                                     {
        (yyval.nos) = (node*)malloc(sizeof(node));
        (yyval.nos)->caso = (yyvsp[-1].tipoint);
        (yyval.nos)->token = OPCOMP;
        (yyval.nos)->esq = (yyvsp[-2].nos);
        (yyval.nos)->dir = (yyvsp[0].nos);
    }
#line 1751 "lupe.tab.c"
    break;

  case 47:
#line 299 "lupe.y"
                                  {
        (yyval.nos) = (node*)malloc(sizeof(node));
        (yyval.nos)->caso = (yyvsp[-1].tipoint);
        (yyval.nos)->token = OPLOGICA;
        (yyval.nos)->esq = (yyvsp[-2].nos);
        (yyval.nos)->dir = (yyvsp[0].nos);
    }
#line 1763 "lupe.tab.c"
    break;

  case 48:
#line 307 "lupe.y"
             {
        (yyval.nos) = (yyvsp[0].nos);
    }
#line 1771 "lupe.tab.c"
    break;

  case 49:
#line 310 "lupe.y"
             {
        (yyval.nos) = (yyvsp[0].nos);
    }
#line 1779 "lupe.tab.c"
    break;

  case 50:
#line 313 "lupe.y"
               {
        (yyval.nos) = (yyvsp[0].nos);
    }
#line 1787 "lupe.tab.c"
    break;

  case 51:
#line 318 "lupe.y"
                                                            {
        (yyval.nos) = (node*)malloc(sizeof(node));
        (yyval.nos)->afrente = (yyvsp[-4].nos);
        (yyval.nos)->afrente1 = (yyvsp[-1].nos); 
        (yyval.nos)->token = IF;
        (yyval.nos)->esq = NULL;
        (yyval.nos)->dir = NULL;
    }
#line 1800 "lupe.tab.c"
    break;

  case 52:
#line 327 "lupe.y"
          {
        (yyval.nos) = (yyvsp[0].nos);
    }
#line 1808 "lupe.tab.c"
    break;

  case 53:
#line 330 "lupe.y"
                                                 {
        (yyval.nos) = (node*)malloc(sizeof(node));
        (yyval.nos)->afrente = (yyvsp[-1].nos);
        (yyval.nos)->token = ELSE;
        (yyval.nos)->esq = (yyvsp[-4].nos);
        (yyval.nos)->dir = NULL;
    }
#line 1820 "lupe.tab.c"
    break;

  case 54:
#line 339 "lupe.y"
                       {temp2 = yylval.var;}
#line 1826 "lupe.tab.c"
    break;

  case 55:
#line 339 "lupe.y"
                                                                                                                                                 {
        (yyval.nos) = (node*)malloc(sizeof(node));
        (yyval.nos)->afrente = (yyvsp[-8].nos);
        (yyval.nos)->afrente1 = (yyvsp[-6].nos);
        (yyval.nos)->afrente2 = (yyvsp[-4].nos);
        (yyval.nos)->afrente3 = (yyvsp[-1].nos);
        (yyval.nos)->nome = temp2;
        (yyval.nos)->token = FOR;
        (yyval.nos)->esq = NULL;
        (yyval.nos)->dir = NULL;
    }
#line 1842 "lupe.tab.c"
    break;

  case 56:
#line 351 "lupe.y"
                                                               {
        (yyval.nos) = (node*)malloc(sizeof(node));
        (yyval.nos)->afrente = (yyvsp[-4].nos);
        (yyval.nos)->afrente1 = (yyvsp[-1].nos);
        (yyval.nos)->token = WHILE;
        (yyval.nos)->esq = NULL;
        (yyval.nos)->dir = NULL;
    }
#line 1855 "lupe.tab.c"
    break;


#line 1859 "lupe.tab.c"

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
  goto yyreturn;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;


#if !defined yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif


/*-----------------------------------------------------.
| yyreturn -- parsing is finished, return the result.  |
`-----------------------------------------------------*/
yyreturn:
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

#line 360 "lupe.y"


int main()
{
    yyin = stdin;
    yyout = fopen("lupe.cpp","w");
    printf("\n");
    yyparse();
    if(erro == 0){
        fprintf(stderr, "ACCEPTED!\n\n");
    }
    fprintf(yyout,"#include <iostream>\n\n");
    fprintf(yyout,"int main(){\n\t");

    imprime(raiz);

    fprintf(yyout,"\n\treturn 0;\n}\n");

    return 0;
}

void yyerror(const char* error){
    erro++;
    printf("Erro na linha %d: %s\n",lcont,error);
}
