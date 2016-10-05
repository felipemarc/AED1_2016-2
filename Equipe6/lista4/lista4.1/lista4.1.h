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
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */
#include <stdio.h>
#include<stdlib.h>

typedef struct item Item;
struct item{
	char nome[40];
	int tel;
	char endere[100];
	char em[40];
};

typedef struct no No;
struct no{
	Item dados;
	No *prox;
	No *ant;
};

typedef struct lista Lista;
struct lista{
	No *prim;
	No *ult;
	No *atual;
};

Lista *create(Lista l)
{
	l->prim = (No*)malloc(sizeof(No));
	l->prim->prox = NULL;
	//l->prim->ant = NULL;
	l->ult = l->prim;
	//l->atual = l->prim;
	
}
Item insert_item (char *name, int tele, char *ende,char *email )
{
    Item tempo;
    strcpy(tempo.nome,name);
    tempo.tel = tele;
    strcpy(tempo.endere,ende);
    strcpy(tempo.em,email);
    return tempo;
}

void insert (Lista *l, Item i)
{
	l->ult->prox = (No*)malloc(sizeof(No));
	while(l->atual->prox != NULL)
	{
        	l->atual = l->atual->prox;
	}
	
	l->atual->prox = l->ult;
	l->ult->ant = l->atual;
	l->ult = l->ult->prox;
	l->ult->prox = NULL;
	l->ult->dados = i;
}

No* busca(Lista *l,char k) 
{
    No *p;
    p = l->prim->prox;
    while (p != NULL && strcmp(p->dados.nome,k) != 0) 
    {
            p = p->prox;
    }
    return p;
}

int vazia (Lista *l)
{
    if(l->prim == l->ult)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
/*void remove_lista(Lista *l,No* r) {
    //No *temp;
    //temp = r->ant;
    if(vazia(&l) == 1 || r == NULL || r == l->prim){
        printf("impossivel remover");
    }
    else{
        //x = r->dados;
        No *temp = pred(&l,r);
        temp->prox = r->prox;
        if(temp->prox == NULL){
            l->ult = temp;
        }
        free(r);
    }
}*/


void print_lista (Lista *l)
{
	No *temp;
	temp = l->prim->prox;
	if(temp == NULL)
	{
		printf("Lista vazia\n");
	}
	else
	{
		while(temp != NULL)
		{
            		printf("\tNome\t\tTel\t\tEndec\t\tEmail\n");
            		printf("\t%s ",temp->dados.nome);
            		printf("\t\t%d ",temp->dados.tel);
            		printf("\t\t%s",temp->dados.endere);
            		printf("\t\t%s\n",temp->dados.em);
			temp = temp->prox;
		}
	}
}
