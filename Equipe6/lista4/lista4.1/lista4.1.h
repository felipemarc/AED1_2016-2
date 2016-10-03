/*
 * =====================================================================================
 *
 *       Filename:  lista4.1.h
 *
 *    Description:  Agenda
 *
 *        Version:  1.0
 *        Created:  30-09-2016 15:31:52
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */
#include <stdio.h>
#include<stdlib.h>

typedef struct item Item;
struct item{
	int tel;
};

typedef struct no No;
struct no{
	Item dados;
	No *prox;
	No *ant;
};

typedef struct lista Lista;
struct lista{
	No *prim;
	No *ult;
	No *atual;
};

Lista *create(Lista l)
{
	l->prim = (No*)malloc(sizeof(No));
	l->prim->prox = NULL;
	//l->prim->ant = NULL;
	l->ult = l->prim;
	//l->atual = l->prim;
	
}

void insert (Lista *l, Item i)
{
	l->ult->prox = (No*)malloc(sizeof(No));
	while(l->atual->prox != NULL)
	{
        	l->atual = l->atual->prox;
	}
	
	l->atual->prox = l->ult;
	l->ult->ant = l->atual;
	l->ult = l->ult->prox;
	l->ult->prox = NULL;
	l->ult->dados = i;
}

No* busca(Lista *l,char k) 
{
    No *p;
    p = l->prim->prox;
    while (p != NULL && strcmp(p->dados.nome,k) != 0) 
    {
            p = p->prox;
    }
    return p;
}

void print_lista (Lista *l)
{
	No *temp;
	temp = l->prim->prox;
	if(temp == NULL)
	{
		printf("Lista vazia\n");
	}
	else
	{
		while(temp != NULL)
		{
			printf(" %d ",temp->dados);
			temp = temp->prox;
		}
	}
}
