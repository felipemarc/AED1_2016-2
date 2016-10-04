#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct no No;
struct info
{
	char nome[50];
	char endereco[50];
	int tel;
	char email[50];
}
struct no
{
    info dados;
    No *next;
    No *prev;
};

No *queue_begin = NULL;
No *queue_end = NULL;

No *queue_create(No queue_begin, No queue_end)
{
    queue_begin = NULL;
	queue_end = NULL;

}

void queue_insert(info dados)
{
    No *novo;
    novo = (No*)malloc(sizeof(No));
    novo->info = dados;
    novo->next = NULL;
    
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

void queue_delete()
{
    No* temp;
    
    if (queue_begin != NULL)
    {
        temp = queue_begin;
        
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
