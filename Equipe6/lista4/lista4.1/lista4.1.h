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
	string nome;
	string ende;
	int tele;
	string email;
};

typedef struct no No;
struct no{
    Item info;
    No *next;
    No *ant;
};

No *queue_begin = NULL;
No *queue_end = NULL;
No *atual = NULL;
/*
 cria a fila
 */
No *queue_create()
{
    return NULL;
}

/*
 insere elementos na fim da fila
 */
void queue_insert(int i)
{
    No *novo;
    novo = (No*)malloc(sizeof(No));
    novo->ant = NULL;
    novo->info = i;
    novo->next = NULL;
    
    // se a fila estiver vazia
    if (queue_begin == NULL)
    {
        queue_begin = novo;
        queue_end = novo;
	atual = novo;
    }
    else
    {
	while(atual->next != NULL)
		atual = atual->prox;

        queue_end->next = novo;
        queue_end = novo;
	atual->prox = queue_end;
	queue_end->ant = atual;
    }
}

/*
 remove elementos do inicio da fila
 */
void queue_delete()
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
void queue_print(No *queue_begin)
{
    No *temp;
    temp = queue_begin;
    
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
