#include "arvore.h"
#include "lupe.tab.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
extern FILE *yyout;
extern int lcont;

node *raiz;
listaVars *prim = NULL;
int cont = 1;

void imprimetab(int i)
{
    switch (i)
    {
    case 1:
        cont++;
        break;
    case 2:
        cont--;
    default:
        break;
    }
    fprintf(yyout, "\n");
    for (int i = 0; i < cont; i++)
        fprintf(yyout, "\t");
}

void imprimecaso(int caso)
{
    switch (caso)
    {
    case SOMA:
        fprintf(yyout, " + ");
        break;
    case SUB:
        fprintf(yyout, " - ");
        break;
    case MULTI:
        fprintf(yyout, " * ");
        break;
    case DIVI:
        fprintf(yyout, " / ");
        break;
    case T_INT:
        fprintf(yyout, "int");
        break;
    case T_CHAR:
        fprintf(yyout, "char");
        break;
    case T_REAL:
        fprintf(yyout, "float");
        break;
    case IGUAL:
        fprintf(yyout, " == ");
        break;
    case MAIORIGUAL:
        fprintf(yyout, " >= ");
        break;
    case MENORIGUAL:
        fprintf(yyout, " <= ");
        break;
    case MAIOR:
        fprintf(yyout, " > ");
        break;
    case MENOR:
        fprintf(yyout, " < ");
        break;
    case DIFERENTE:
        fprintf(yyout, " != ");
        break;
    case AND:
        fprintf(yyout, " && ");
        break;
    case OR:
        fprintf(yyout, " || ");
        break;
    default:
        fprintf(yyout, "erro no imprimecaso");
        break;
    }
}

void imprime(node *node)
{

    if (!node)
        return;
    imprime(node->esq);
    switch (node->token)
    {
    case -1:
        imprimetab(0);
        break;
    case VARIAVEL:
        fprintf(yyout, "%s", node->nome);
        break;
    case INT:
        fprintf(yyout, "%d", node->valor.inteiro);
        break;
    case CHAR:
        fprintf(yyout, "'%c'", node->valor.charac);
        break;
    case REAL:
        fprintf(yyout, "%f", node->valor.real);
        break;
    case MOD:
        fprintf(yyout, " %% ");
        break;
    case EXPPARS:
        fprintf(yyout, "(");
        imprime(node->afrente);
        fprintf(yyout, ")");
        break;
    case EXPOPS:
        imprimecaso(node->caso);
        break;
    case EXPSUB:
        fprintf(yyout, "-");
        break;
    case NOVAVAR:
        imprimecaso(node->caso);
        fprintf(yyout, " %s;", node->nome);
        break;
    case ATRIBUIR:
        fprintf(yyout, "%s = ", node->nome);
        break;
    case ATRIBUIRFIM:
        fprintf(yyout, ";");
        break;
    case SAIDA:
        fprintf(yyout, "std::cout << ");
        imprime(node->afrente);
        fprintf(yyout, " << std::endl;");
        break;
    case ENTRADA:
        fprintf(yyout, "std::cin >> %s", node->nome);
        fprintf(yyout, ";");
        break;
    case NOTVAR:
        fprintf(yyout, "!");
        break;
    case OPCOMP:
        imprimecaso(node->caso);
        break;
    case OPLOGICA:
        imprimecaso(node->caso);
        break;
    case IF:
        fprintf(yyout, "if( ");
        imprime(node->afrente);
        fprintf(yyout, " ){");
        imprimetab(1);
        imprime(node->afrente1);
        imprimetab(2);
        fprintf(yyout, "}");
        break;
    case ELSE:
        imprimetab(0);
        fprintf(yyout, "else{");
        imprimetab(1);
        imprime(node->afrente);
        imprimetab(2);
        fprintf(yyout, "}");
        break;
    case FOR:
        fprintf(yyout, "for(");
        imprime(node->afrente);
        imprime(node->afrente1);
        fprintf(yyout, ";");
        imprime(node->afrente2);
        fprintf(yyout, "){");
        imprimetab(1);
        imprime(node->afrente3);
        imprimetab(2);
        fprintf(yyout, "}");
        break;
    case WHILE:
        fprintf(yyout, "while( ");
        imprime(node->afrente);
        fprintf(yyout, " ){");
        imprimetab(1);
        imprime(node->afrente1);
        imprimetab(2);
        fprintf(yyout, "}");
        break;
    default:
        fprintf(yyout, "Erro no token %d\n", node->token);
        break;
    }

    imprime(node->dir);
}

void insereLista(char *nome)
{
    listaVars *ant = NULL, *atual;
    atual = prim;
    while (atual != NULL && (strcmp(atual->nome, nome) != 0))
    {
        ant = atual;
        atual = atual->prox;
    }
    if (atual != NULL)
    {
        printf("Linha $d: variavel %s ja declarada\n", lcont, nome);
        exit(1);
    }
    listaVars *novo = (listaVars *)malloc(sizeof(listaVars));
    novo->nome = strdup(nome);
    novo->prox = NULL;
    if (ant == NULL)
    {
        prim = novo;
    }
    else
    {
        ant->prox = novo;
    }
}

int buscaLista(char *nome)
{
    listaVars *atual = prim;
    while (atual != NULL && (strcmp(atual->nome, nome) != 0))
    {
        atual = atual->prox;
    }
    if (atual == NULL)
    {
        printf("Linha %d: variavel %s nao declarada\n", lcont, nome);
        exit(1);
    }
    return 1;
}