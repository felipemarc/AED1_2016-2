#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct item Item;
struct item{
	char nome[40];
	int tele;
	char ende[100];
	char email[40];
};

typedef struct no No;
struct no{
	Item dados;
	No *prox;
	No *ant;
};

No *prim = NULL;
No *ult = NULL;

No *create()
{
	return NULL;
}

Item insert_item (char *name, int telefo, char *endere,char *em ) //insere as informacoes passadas pelo usuário no struct Item
{
    Item tempo;
    strcpy(tempo.nome,name);
    tempo.tele = telefo;
    strcpy(tempo.ende,endere);
    strcpy(tempo.email,em);
    return tempo;
}

void lista_insert(Item it) //insere o item na lista
{
	No *novo;
	novo = (No*)malloc(sizeof(No));
	novo->dados = it;
	novo->prox = NULL;
	novo->ant = NULL;
	if(prim == NULL)
	{
		prim = novo;
		ult = novo;
	}
	else if(prim->prox == NULL)
	{
		ult = novo;
		prim->prox = novo;
		ult->ant = prim;
	}
	else
	{
		ult->prox = novo;
		novo->ant = ult;
		ult = novo;
	}
}

void print_lista (No *inicio) //imprime a lista
{
	No *temp;
	temp = inicio;
	if(temp == NULL)
	{
		printf("Lista vazia\n");
	}
	
	else{
		while(temp != NULL)
		{
			printf("\tNome\t\tTel\t\tEndec\t\tEmail\n");
			printf("\t%s",temp->dados.nome);
			printf("\t\t%d",temp->dados.tele);
			printf("\t\t%s",temp->dados.ende);
			printf("\t\t%s\n",temp->dados.email);
			temp = temp->prox;
		}
	}
}
