#ifndef LISTA_H_INCLUDED
#define LISTA_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct item Item;
struct item{
    int numero;
	char chave[40]
};

typedef struct no No;
struct no{
	Item dados;
	No *prox;
};

typedef struct lista Lista;
struct lista{
	No *prim;
	No *ult;
};

Lista *create (Lista *l)
{
	l->prim = (No*)malloc(sizeof(No));
	l->prim->prox = NULL;
	l->ult = l->prim;
}

Item insere_item(int num,char nome)
{
    Item aux;
    aux.numero = num;
    strcpy(aux.chave,nome);

    return aux;

}

void insert_lista (Lista *l, Item x)
{
	l->ult->prox = (No*)malloc(sizeof(No));
	l->ult = l->ult->prox;
	l->ult->prox = NULL;
	l->ult->dados = x;
}



#endif // LISTA_H_INCLUDED
