#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct agenda Agenda;

struct agenda
{
    char nome[50];
	char endereco[100];
	int tel;
	char email[50];
    int *next;
    int *prev;
    int *inicio;
    int *fim;
};

Agenda nova_agenda(Agenda *agend)
{
    agend->inicio = NULL;
	agend->fim = NULL;
}

void insere(Agenda *agend)
{
    Agenda *novo;
    novo = (Agenda*)malloc(sizeof(Agenda));
    strcpy(novo->nome, agend->nome);
    strcpy(novo->endereco, agend->endereco);    
    novo->tel = agend->tel;
    strcpy(novo->email, agend->email);
    novo->next = NULL;
    
    if (agend->inicio == NULL)
    {
        agend->inicio = novo;
        agend->fim = novo;
        agend->next = NULL;
        agend->prev = NULL;
    }
    else
    {
        fim->next = novo;
        fim = novo;
    }
    
}

void delete(Agenda *agend, int tel)
{
    Agenda temp;
    int i, achou = 1;
    if()
    {
        
    }
    else
        printf("NAO TEM O QUE EXCLUIR !!1!onze!");    
}
