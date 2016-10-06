#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*typedef struct item Item;
struct item{
	char nome[40];
	int tele;
	char ende[100];
	char email[40];
};*/

typedef struct no No;
struct no{
	//Item dados;
	char nome[40];
	int tele;
	char ende[100];
	char email[40];
	No *prox;
	No *ant;
};

No *lista ;
//No *ult = NULL;

No *create()
{
	return NULL;
}

int vazia(No *lista)
{
  return (lista == NULL);
}

/*Item insert_item (char *name, int telefo, char *endere,char *em ) //insere as informacoes passadas pelo usuário no struct Item
{
    Item tempo;
    strcpy(tempo.nome,name);
    tempo.tele = telefo;
    strcpy(tempo.ende,endere);
    strcpy(tempo.email,em);
    return tempo;
}*/

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
	temp = lista;
	if(temp == NULL)
	{
		printf("Lista vazia\n");
	}
	
	else{
		while(temp != NULL)
		{
			printf("\tNome\t\tTel\t\tEndec\t\tEmail\n");
			printf("\t%s",temp->nome);
			printf("\t\t%d",temp->tele);
			printf("\t\t%s",temp->ende);
			printf("\t\t%s\n",temp->email);
			temp = temp->prox;
		}
	}
}
