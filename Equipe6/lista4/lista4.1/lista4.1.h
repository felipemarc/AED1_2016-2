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

//typedef string Nome;

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
	//No *atual;
};

Lista *create(Lista *l)
{
	l->prim = (No*)malloc(sizeof(No));
	l->prim->prox = NULL;
	l->prim->ant = NULL;
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

void insert_lista (Lista *l, Item i)
{
    void insert_lista (Lista *l, Item i)
{
    //l->atual->prox = l->ult
	//l->ult->prox = (No*)malloc(sizeof(No));
	No *no = l->prim, *novo;
	while(no->prox != NULL)
	{
       		no = no->prox;
    	}
   	l->ult->prox = (No*)malloc(sizeof(No));
	//l->atual->prox = l->ult;

	//l->ult->dados = i;
	no->prox = l->ult->prox;
	l->ult->ant = no;
	l->ult = l->ult->prox;
	l->ult->prox= NULL;
	l->ult->dados = i;
	//l->ult = novo;
	//l->ult->dados = i;
}
}

No void busca(Lista *l,int k)
{
    No *p;
    p = l->prim->prox;
    while (p != NULL && p->dados.tel != k)
    {
            p = p->prox;

    }
	//printf("achei\n");
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
/*No* pred(Lista *l,No* r) {
    No* p = l->prim;
    while (p->prox != r) {
        p = p->prox;
    }
    return p;
}*/

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

void atualiza_contato (No * aux)
{
    int opcao;
    char name[40];
    char email[100];
    char ede[40];
    int tele;    //No *aux = busca(&l,tel);
    Item tem = aux->dados;
    printf("Qual Campo deseja atualizar:\n");
    printf("---(1) Nome ----------------\n");
    printf("---(2) Telefone ------------\n");
    printf("---(3) Edereço -------------\n");
    printf("---(4) Email ---------------\n");
    scanf("%d",&opcao);
    __fpurge(stdin);
    switch(opcao)
    {
        case 1:
            printf("Digite novo nome:\n");
            scanf("%s[^\n]",name);
           // strcpy(tem.nome,name);
            __fpurge(stdin);
            break;
        case 2:
            printf("Digite novo numero>\n");
            scanf("%d[^\n]",&tele);
           // strcpy(aux->dados.tel,tele);
            __fpurge(stdin);
            break;
        case 3:
            printf("Digite novo endereço:\n");
            scanf("%s[^\n]",ede);
            //strcpy(aux->dados.endere,ede);
            __fpurge(stdin);
            break;
        case 4:
            printf("Digite novo endereço de email:\n");
            scanf("%s[^\n]",email);
           // strcpy(aux->dados.em,email);
            __fpurge(stdin);
            break;
        default:
            printf("opcao Invalida\n");
    }

}
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
