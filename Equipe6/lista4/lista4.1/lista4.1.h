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
#include <stdlib.h>
typedef struct item Item;
struct item{
	//string nome;
	//string ende;
	int tele;
	//string email;
};

typedef struct no No;
struct no{
    Item info;
    No *next;
    No *ant;
};

//No *begin = NULL;
//No *end = NULL;
//No *atual;
/*
 cria a fila
 */
typedef struct lista Lista;
struct lista{
	No *begin;
	No *end;
};
Lista *create()
{
	begin = (No*)malloc(sizeof(No));
	begin->prox = NULL;
	end = begin;
}

/*
 insere elementos na fim da fila
 */
void insert(Lista *l ,int i)
{
    No *atual;

    No *novo;
    novo = (No*)malloc(sizeof(No));
    novo->ant = NULL;
    novo->info = i;
    novo->next = NULL;
    
    // se a fila estiver vazia
    if (begin == NULL)
    {
        l->begin = novo;
        l->end = novo;
	atual = l->begin;
    }
    else
    {
	
	while(atual->next != NULL)
		atual = atual->prox;

        l->end->next = novo;
        l->end = novo;
	atual->prox = l->end;
	l->end->ant = atual;
    }
}

/*
 remove elementos do inicio da fila
 */
/*void queue_delete()
{
    No* temp;
    
    // deleta apenas se a fila não estiver vazia
    if (queue_begin != NULL)
    {
        temp = queue_begin;
        
        // se a fila tiver apenas
        if (queue_begin == queue_end)
        {
            queue_begin = NULL;
            queue_end = NULL;
        }
        else
        {
            queue_begin = queue_begin->next;
        }
        
        temp -> next = NULL;
        free(temp);
    }
}

/*
 imprime os elementos da fila sem remover
 */
void print(No *begin)
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
    
    
}
