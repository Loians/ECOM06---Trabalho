#ifndef ARVORE_H
#define ARVORE_H

typedef union
{
    int inteiro;
    char charac;
    float real;
} Tipos;

typedef struct listaVars
{
    char *nome;
    struct listaVars *prox;
} listaVars;

typedef struct node
{
    int token;

    char *nome;

    Tipos valor;

    int caso;

    struct node *esq, *dir, *afrente, *afrente1, *afrente2, *afrente3;

} node;

void imprime(node *);
void insereLista(char *);
int buscaLista(char *);
void imprimetab(int);

#endif