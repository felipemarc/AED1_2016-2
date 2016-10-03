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
	l->prim->prox = nullptr;
	//l->prim->ant = nullptr;
	l->ult = l->prim;
	//l->atual = l->prim;
	
}

void insert (Lista *l, Item i)
{
	l->ult->prox = (No*)malloc(sizeof(No));
	//l->atual->prox = l->ult;
	//l->ult->ant = l->atual->prox;
	l->ult = l->ult->prox;
	l->ult->prox = nullptr;
	l->ult->dados = i;
}

void print_lista (Lista *l)
{
	No *temp;
	temp = l->prim->prox;
	if(temp == nullptr)
	{
		printf("Lista vazia\n");
	}
	else
	{
		while(temp != nullptr)
		{
			printf(" %d ",temp->item);
			temp = temp->prox;
		}
	}
}
/*void print(No *begin)
{
    No *temp;
    temp = begin;
    
    if(temp == NULL)
        printf("fila vazia\n");
    else
    {
        while( temp != NULL )
        {
            printf(" %d ", temp->info);
            temp = temp->next;
        }
        printf("\n");
    }
    
    
}
    if(temp == NULL)
        printf("pilha vazia\n");
    else
    {
        while( temp != NULL )
        {
            printf(" %d ", temp->info);
            temp = temp->next;
        }
        printf("\n");
    }
    
    
}*/
