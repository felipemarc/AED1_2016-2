/*
 jucimar jr
 fila simples usando lista encadeada
 essa abordagem usa queue_begin e queue_end como variaveis globais para definir a fila
 */

#include <stdio.h>
#include <stdlib.h>

typedef struct no No;
struct no{
    int info;
    No *next;
};

No *queue_begin = NULL;
No *queue_end = NULL;

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
    novo->info = i;
    novo->next = NULL;
    
    // se a fila estiver vazia
    if (queue_begin == NULL)
    {
        queue_begin = novo;
        queue_end = novo;
    }
    else
    {
        queue_end->next = novo;
        queue_end = novo;
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
