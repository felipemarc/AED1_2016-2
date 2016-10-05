/*
    Aline Lima
    Amanda Leticia
    Eduardo Azevedo
    Lucas Almeida
 */

#include <stdio.h>
#include <stdlib.h>

typedef struct no No;

struct no{
    int info;
    No *prox;
    No *ant;
};

No *primeiro = NULL;
No *ultimo = NULL;


// cria a fila
No *queue_create()
{   
    return NULL;
}


// insere elementos na fim da fila
void queue_insert(int i)
{
    No *novo;
    novo = (No*)malloc(sizeof(No));
    novo->info = i;
    novo->prox = NULL;
    novo->ant = NULL;
    
    // se a fila estiver vazia
    if (primeiro == NULL)
    {
        primeiro = novo;
        ultimo = novo;
    } 
    else if (primeiro->prox == NULL)    // fila com um elemento
    {
        ultimo = novo;
        primeiro->prox = novo;
        ultimo->ant = primeiro;
    } 
    else   //fila com mais de um elemento
    {
        ultimo->prox = novo;
        novo->ant = ultimo;
        ultimo = novo;
    }
}


// remove elementos do inicio da fila
void queue_delete()
{
    No* temp;
    
    // deleta apenas se a fila nao estiver vazia
    if (primeiro != NULL)
    {
        temp = primeiro;
        
        if (primeiro == ultimo) // fila com um elemento
        {
            primeiro = NULL;
            ultimo = NULL;
        }
        else  // fila com mais de um elemento
        {
            primeiro = primeiro->prox;
        }
        
        temp -> prox = NULL;
        free(temp);
    }
}


// imprime a lista do primeiro elemente ao ultimo
void queue_print()
{
    No *temp;
    temp = primeiro;
    
    if(temp == NULL)
        printf("Fila vazia. \n\n");
    else
    {
        while( temp != NULL )
        {
            printf(" %d ", temp->info);
            printf("\n");
            temp = temp->prox;
        }
        printf("\n");
    }
}

// imprime a lista do ultimo elemento ao primeiro
void queue_print_atras()
{
    No *temp;
    temp = ultimo;
    // verifica se a lista esta vazia
    if(temp == NULL)
        printf("Fila vazia. \n\n");
    else
    {
        for (temp = ultimo; temp != NULL; temp = temp->ant) 
        {
         printf(" %d ", temp->info);   
         printf("\n");
        }   
       printf("\n"); 
    }
}

// busca de um elemento da lista
void queue_busca(int num)
{
    No *temp;
    //int flag = 0;
    temp = primeiro;

    //verifica se a lista esta vazia
    if( temp == NULL)
        printf("Fila vazia. \n\n");
    else
    {
        while(temp != NULL)
        {
            if(temp->info == num)
            {
                printf("O numero foi encontrado. \n\n");
                break;
            }
            temp = temp->prox;
        }

    }
}
