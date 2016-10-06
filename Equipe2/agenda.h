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
    Agenda *next;
    Agenda *prev;
    Agenda *inicio;
    Agenda *fim;
};

void nova_agenda(Agenda *agend)
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
        agend->next = novo->prev;
        agend->fim = novo;
        novo->next = NULL;
    }
    
}

void imprime(Agenda *agend)
{
  Agenda *aux;
  printf("Nome Telefone  Endereco  Email\n\n");
  for (aux = agend; aux != NULL; aux = aux->next)
  {
    printf("\t%s", aux->nome);
    printf("\t\t%d", aux->tel);
    printf("\t\t%s", aux->endereco);
    printf("\t\t%s\n", aux->email);
  }
}
/*
void delete(Agenda *agend, int tel)
{
    Agenda temp;
    int i, achou = 1;
    if(agend->inicio == NULL)
    {
    	    temp = agend->inicio;
    	    
    }
    else
        printf("NAO TEM O QUE EXCLUIR !!1!onze!");    
}
*/
