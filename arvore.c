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
        fprintf(yycom, "inteira; ");
        fprintf(yyout, "int");
        break;
    case T_CHAR:
        fprintf(yycom, "char; ");
        fprintf(yyout, "char");
        break;
    case T_REAL:
        fprintf(yycom, "real; ");
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
        fprintf(yycom, "Operacao mod; ");
        fprintf(yyout, " %% ");
        break;
    case EXPPARS:
        fprintf(yyout, "(");
        imprime(node->afrente);
        fprintf(yyout, ")");
        break;
    case EXPOPS:
        fprintf(yycom, "Operacao aritimetica; ");
        imprimecaso(node->caso);
        break;
    case EXPSUB:
        fprintf(yyout, "-");
        break;
    case NOVAVAR:
        fprintf(yycom, "%s => Declaracao de variavel ", node->nome);
        imprimecaso(node->caso);
        fprintf(yyout, " %s;", node->nome);
        break;
    case ATRIBUIR:
        fprintf(yycom, "%s => Comando de atribuicao; ", node->nome);
        fprintf(yyout, "%s = ", node->nome);
        break;
    case POSINC:
        fprintf(yycom, "%s => Comando de incremento; ", node->nome);
        fprintf(yyout, "%s++", node->nome);
        break;
    case POSDEC:
        fprintf(yycom, "%s => Comando de decremento; ", node->nome);
        fprintf(yyout, "%s--", node->nome);
        break;
    case ADDFIM:
        fprintf(yyout, ";");
        break;
    case DADOS:
        fprintf(yyout, " << ");
        break;
    case SAIDA:
        fprintf(yycom, "lpout => Saida de dados;");
        fprintf(yyout, "std::cout << ");
        imprime(node->afrente);
        fprintf(yyout, ";");
        break;
    case ENTRADA:
        fprintf(yycom, "lpin => Entrada de dados;");
        fprintf(yyout, "std::cin >> %s;", node->nome);
        break;
    case PALAVRA:
        fprintf(yyout, "%s", node->nome);
        break;
    case NOTVAR:
        fprintf(yycom, "Operacao logica; ");
        fprintf(yyout, "!");
        break;
    case OPCOMP:
        fprintf(yycom, "Operacao relacional; ");
        imprimecaso(node->caso);
        break;
    case OPLOGICA:
        fprintf(yycom, "Operacao logica; ");
        imprimecaso(node->caso);
        break;
    case IF:
        fprintf(yycom, "Comando condicional: ");
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
        fprintf(yycom, "Comando condicional else ");
        fprintf(yyout, "else{");
        imprimetab(1);
        imprime(node->afrente);
        imprimetab(2);
        fprintf(yyout, "}");
        break;
    case FOR:
        fprintf(yycom, "Comando de repeticao for: ");
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
        fprintf(yycom, "Comando de repeticao while: ");
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