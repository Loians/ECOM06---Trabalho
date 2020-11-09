#include "arvore.h"
#include "lupe.tab.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
extern FILE *yyout;
FILE *yycom;
extern int lcont;
extern int erro;

node *raiz;
listaVars *prim = NULL;
int cont = 1;
char tofor = 0;

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
    fprintf(yycom, "\n");
    for (int i = 0; i < cont; i++)
    {
        fprintf(yyout, "\t");
        fprintf(yycom, "\t");
    }
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
        fprintf(yycom, "NOVA VARIAVEL INT");
        fprintf(yyout, "int");
        break;
    case T_CHAR:
        fprintf(yycom, "NOVA VARIAVEL CHAR");
        fprintf(yyout, "char");
        break;
    case T_REAL:
        fprintf(yycom, "NOVA VARIAVEL REAL");
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
        if (!tofor)
            fprintf(yycom, "COMANDO ATRIBUICAO");
        fprintf(yyout, "%s = ", node->nome);
        break;
    case POSINC:
        if (!tofor)
            fprintf(yycom, "COMANDO POSINC");
        fprintf(yyout, "%s++", node->nome);
        break;
    case POSDEC:
        if (!tofor)
            fprintf(yycom, "COMANDO POSDEC");
        fprintf(yyout, "%s--", node->nome);
        break;
    case ADDFIM:
        fprintf(yyout, ";");
        break;
    case DADOS:
        fprintf(yyout, " << ");
        break;
    case SAIDA:
        fprintf(yycom, "SAIDA DE DADOS");
        fprintf(yyout, "std::cout << ");
        imprime(node->afrente);
        fprintf(yyout, ";");
        break;
    case ENTRADA:
        fprintf(yycom, "ENTRADA DE DADOS");
        fprintf(yyout, "std::cin >> %s;", node->nome);
        break;
    case PALAVRA:
        fprintf(yyout, "%s", node->nome);
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
        fprintf(yycom, "COMANDO CONDICIONAL");
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
        fprintf(yycom, "COMANDO CONDICIONAL COMPLEMENTAR");
        fprintf(yyout, "else{");
        imprimetab(1);
        imprime(node->afrente);
        imprimetab(2);
        fprintf(yyout, "}");
        break;
    case FOR:
        tofor = 1;
        fprintf(yycom, "COMANDO DE REPETICAO FOR");
        fprintf(yyout, "for(");
        imprime(node->afrente);
        imprime(node->afrente1);
        fprintf(yyout, ";");
        imprime(node->afrente2);
        fprintf(yyout, "){");
        tofor = 0;
        imprimetab(1);
        imprime(node->afrente3);
        imprimetab(2);
        fprintf(yyout, "}");
        break;
    case WHILE:
        fprintf(yycom, "COMANDO DE REPETICAO WHILE");
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
        printf("Linha %d: variavel %s ja declarada\n", lcont, nome);
        erro++;
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
        erro++;
    }
    return 1;
}