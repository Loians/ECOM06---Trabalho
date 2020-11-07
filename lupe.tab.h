/* A Bison parser, made by GNU Bison 3.6.4.  */

/* Bison interface for Yacc-like parsers in C

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

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

#line 119 "lupe.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_LUPE_TAB_H_INCLUDED  */
