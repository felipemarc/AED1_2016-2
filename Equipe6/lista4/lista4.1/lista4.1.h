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
 *         Author:  		Hélio Paulo
 *         		        Jailson Pereira
 				Jefferson
 *         	                Tiago Cauassa
 *         		        Rebeca Assunção
 *         	         	Miguel Angelo, 
 *   Organization: AED1 
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct no No;
struct no{
	char nome[40];
	int tele;
	char ende[100];
	char email[40];
	No *prox;
	No *ant;
};

No *lista ;

No *create()
{
	return NULL;
}

int vazia(No *lista)
{
  return (lista == NULL);
}


No * insert_lista(No *lista,char *name, int telefo, char *endere,char *em ) //insere o item na lista
{
	No *novo;
	novo = (No*)malloc(sizeof(No));
	strcpy(novo->nome,name);
	novo->tele = telefo;
	strcpy(novo->ende,endere);
	strcpy(novo->email,em);
	novo->prox = NULL;
	novo->ant = NULL;
	if(lista == NULL)
	{
		novo->ant = NULL;
		novo->prox = NULL;
	}
	else
	{
		novo->prox = lista;
		novo->ant = NULL;
	}
	return novo;
}

void print_lista (No *lista) //imprime a lista
{
	No *temp;
	printf("\tNome\t\tTel\t\tEndec\t\tEmail\n");
	for (temp = lista; temp != NULL; temp = temp->prox)
	{
	
		printf("\t%s",temp->nome);
		printf("\t\t%d",temp->tele);
		printf("\t\t%s",temp->ende);
		printf("\t\t%s\n",temp->email);
	}
		
	
}
