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
 				Jefferson Avilar
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
	//novo->prox = NULL;
	//novo->ant = NULL;
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

No * busca(No *lista, int tel_buscar)
{
	No *aux;

	for (aux = lista; aux != NULL; aux = aux->prox)
	{
		if (aux->tele == tel_buscar)
		{
			return aux;
		}
	}
	
} 

No* pred(No *lista,No* r) 
{
    No* p = lista;
    while (p->prox != r)
    {
        p = p->prox;
    }
    return p;
}

void remove_item (No *lista, No *r)
 {
    if (vazia(lista) || r == NULL )
       printf( "impossivel remover\n");
    else
    {
        
        No *p = pred(lista,r);
        r->ant = NULL;
	p->prox = r->prox;
        //if (p->prox == NULL) p->prox = NULL;
        free(r);
    	
    }

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

