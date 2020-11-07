%{
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
%}



%union {
    char charac;
    int inteiro;
    float real;
    char* var;
    node *nos;
    int tipoint;
}

%token VARIAVEL
%token INT
%token CHAR
%token REAL

%token ATRIBUICAO
%token SOMA
%token SUB
%token MULTI
%token DIVI
%token MOD
%token AND 
%token OR 
%token NOT
%token IGUAL 
%token MAIORIGUAL
%token MENORIGUAL
%token MAIOR
%token MENOR
%token DIFERENTE 
 
%token VIRGULA
%token PTVIRGULA
%token ABREP
%token FECHAP
%token INICIOBLOCO
%token FIMBLOCO
 
%token INICIOPROG
%token FIMPROG
%token T_INT
%token T_CHAR
%token T_REAL
%token IF
%token ELSE
%token WHILE
%token FOR
%token ENTRADA
%token SAIDA

%token EXPPARS EXPOPS EXPSUB
%token NOVAVAR ATRIBUIR
%token NOTVAR OPCOMP OPLOGICA

%type <nos> sentenca sentencas valor varint opmod expressaoA novavar 
%type <nos> atribuir escrever ler loopfor loopwhile condif condifelse
%type <nos> opcomp varlogica oplogica opLogicas
%type <tipoint> operacoes tipos operadorL relacional

%start inicio

%%
inicio: INICIOPROG sentencas FIMPROG{
    raiz = $2;    
};
sentenca:
    atribuir {
        $$ = $1;
    } 
    | novavar {
        $$ = $1;
    }
    | escrever {
        $$ = $1;
    }
    | ler {
        $$ = $1;
    }
    | loopfor {
        $$ = $1;
    }
    | loopwhile {
        $$ = $1;
    }
    | condifelse {
        $$ = $1;
    }
    | {
        $$ = NULL; 
    };

sentencas:
    sentenca {
        $$ = $1;
    }
    | sentencas sentenca{              
        $$ = (node*)malloc(sizeof(node));
        $$->esq = $1; 
        $$->dir = $2;
        $$->token = -1;
    };


varint: 
    VARIAVEL {
        $$ = (node*)malloc(sizeof(node));
        $$->token = VARIAVEL;
        $$->nome = yylval.var;
        $$->esq = NULL;
        $$->dir = NULL;
        buscaLista(yylval.var);
    }
    |INT {
        $$ = (node*)malloc(sizeof(node));
        $$->token = INT;
        $$->valor.inteiro = yylval.inteiro;
        $$->esq = NULL;
        $$->dir = NULL;
    };

valor:
    CHAR {
        $$ = (node*)malloc(sizeof(node));
        $$->token = CHAR;
        $$->valor.charac = yylval.charac;
        $$->esq = NULL;
        $$->dir = NULL;
    }
    | REAL {
        $$ = (node*)malloc(sizeof(node));
        $$->token = REAL;
        $$->valor.real = yylval.real;
        $$->esq = NULL;
        $$->dir = NULL;
    } 
    | varint{
        $$ = $1;
    };

opmod:
    varint MOD varint {
        $$ = (node*)malloc(sizeof(node));
        $$->esq = $1;
        $$->dir = $3;
        $$->token = MOD;
    };

operacoes:
    SOMA {
        $$ = SOMA;
    }
    |SUB {
        $$ = SUB;
    }
    |MULTI {
        $$ = MULTI;
    }
    |DIVI {
        $$ = DIVI;
    };

expressaoA: 
    ABREP expressaoA FECHAP {
        $$ = (node*)malloc(sizeof(node));
        $$->afrente = $2;
        $$->token = EXPPARS;
        $$->esq = NULL;
        $$->dir = NULL;
    }
    | expressaoA operacoes expressaoA {
        $$ = (node*)malloc(sizeof(node));
        $$->caso = $2;
        $$->token = EXPOPS;
        $$->esq = $1;
        $$->dir = $3;
    }
    | SUB expressaoA {
        $$ = (node*)malloc(sizeof(node));
        $$->token = EXPSUB;
        $$->esq = NULL;
        $$->dir = $2;
    }
    | valor {
        $$ = $1;
    }
    | opmod {
        $$ = $1;
    };

tipos: T_INT {
        $$ = T_INT;
    }
    |T_CHAR {
        $$ = T_CHAR;
    }
    |T_REAL {
        $$ = T_REAL;
    };
novavar:
    tipos VARIAVEL PTVIRGULA{
        $$ = (node*)malloc(sizeof(node));
        $$->caso = $1;
        $$->nome = yylval.var;
        $$->token = NOVAVAR;
        $$->esq = NULL;
        $$->dir = NULL;
        insereLista(yylval.var);
    };
atribuir: 
    VARIAVEL {temp = yylval.var;} ATRIBUICAO expressaoA PTVIRGULA{
        $$ = (node*)malloc(sizeof(node));
        $$->afrente = $4;
        $$->nome = temp;
        $$->token = ATRIBUIR;
        $$->esq = NULL;
        $$->dir = NULL;
        buscaLista(temp);
    };

escrever:
    SAIDA ABREP expressaoA FECHAP PTVIRGULA{
        $$ = (node*)malloc(sizeof(node));
        $$->token = SAIDA;
        $$->afrente = $3;
        $$->esq = NULL;
        $$->dir = NULL;
    };
ler:
    ENTRADA ABREP VARIAVEL FECHAP PTVIRGULA{
        $$ = (node*)malloc(sizeof(node));
        $$->token = ENTRADA;
        buscaLista(yylval.var);
        $$->nome = yylval.var;
        $$->esq = NULL;
        $$->dir = NULL;
    };

operadorL:
    AND {
        $$ = AND;
    }
    | OR {
        $$ = OR;
    };
varlogica:
    NOT expressaoA {
        $$ = (node*)malloc(sizeof(node));
        $$->token = NOTVAR;
        $$->esq = NULL;
        $$->dir = $2;
    }
    | expressaoA{
        $$ = $1;
    };
relacional:
    IGUAL {
        $$ = IGUAL;
    }
    | MAIORIGUAL {
        $$ = MAIORIGUAL;
    }
    | MENORIGUAL {
        $$ = MENORIGUAL;
    } 
    | MAIOR {
        $$ = MAIOR;
    }
    | MENOR {
        $$ = MENOR;
    }
    | DIFERENTE {
        $$ = DIFERENTE;
    };
opcomp:
    expressaoA relacional expressaoA {
        $$ = (node*)malloc(sizeof(node));
        $$->caso = $2;
        $$->token = OPCOMP;
        $$->esq = $1;
        $$->dir = $3;
    };
oplogica:
    varlogica operadorL varlogica {
        $$ = (node*)malloc(sizeof(node));
        $$->caso = $2;
        $$->token = OPLOGICA;
        $$->esq = $1;
        $$->dir = $3;
    }; 
opLogicas:
    oplogica {
        $$ = $1;
    }
    | opcomp {
        $$ = $1;
    } 
    | varlogica{
        $$ = $1;
    };

condif: 
    IF ABREP opLogicas FECHAP INICIOBLOCO sentencas FIMBLOCO{
        $$ = (node*)malloc(sizeof(node));
        $$->afrente = $3;
        $$->afrente1 = $6; 
        $$->token = IF;
        $$->esq = NULL;
        $$->dir = NULL;
    };
condifelse: 
    condif{
        $$ = $1;
    }
    | condif ELSE INICIOBLOCO sentencas FIMBLOCO {
        $$ = (node*)malloc(sizeof(node));
        $$->afrente = $4;
        $$->token = ELSE;
        $$->esq = $1;
        $$->dir = NULL;
    };

loopfor: 
    FOR ABREP VARIAVEL {temp2 = yylval.var;} PTVIRGULA expressaoA PTVIRGULA opLogicas PTVIRGULA expressaoA FECHAP INICIOBLOCO  sentencas FIMBLOCO{
        $$ = (node*)malloc(sizeof(node));
        $$->afrente = $6;
        $$->afrente1 = $8;
        $$->afrente2 = $10;
        $$->afrente3 = $13;
        $$->nome = temp2;
        $$->token = FOR;
        $$->esq = NULL;
        $$->dir = NULL;
    };
loopwhile:
    WHILE ABREP opLogicas FECHAP INICIOBLOCO sentencas FIMBLOCO{
        $$ = (node*)malloc(sizeof(node));
        $$->afrente = $3;
        $$->afrente1 = $6;
        $$->token = WHILE;
        $$->esq = NULL;
        $$->dir = NULL;
    };

%%

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