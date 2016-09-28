/*
 jucimar jr
 pilha simples usando lista encadeada
 esta abordagem deixa a cargo do cliente criar uma pilha *No para trabalhar
 as funções devolvem sempre o topo da pilha
 */

#include <stdio.h>
#include <stdlib.h>

typedef struct no No;
struct no{
    int info;
    No *next;
};

/*
 cria a pilha
 */
No *create()
{
    return NULL;
}

/*
 insere elementos na pilha
 */
No* push(No *stack, int i)
{
    No *temp;
    temp = (No*)malloc(sizeof(No));
    temp->info = i;
    temp->next = stack;
    
    return temp;
}

/*
 remove elementos do topo da pilha
 */
No* pop(No *stack)
{
    No *top;
    No * target;
    
    if (stack == NULL)
        
        return NULL;
    else
    {
        top = stack->next;
        
        target = stack;
        target -> next = NULL;
        free(target);
        
        return top;
    }
}

/*
 imprime os elementos da pilha sem remover
 */
void print(No *stack)
{
    No *temp;
    temp = stack;
    
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
