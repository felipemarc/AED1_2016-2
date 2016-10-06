#include <stdio.h>
#include <stdlib.h>
#include <string.h>


struct Contato
{
    char nome[50];
    char end[50];
};

struct No
{
    struct Contato item;
    struct No* prox;
    struct No* ant;
};

struct Lista
{
    struct No* prim;
    struct No* ult;
};

void insere(struct No* no1, struct No* no2)
{
    if(!(no2 == no1))
    {
        struct No* novo = (struct No*)malloc(sizeof(struct No*));
        no1->prox = novo;
        novo->ant = no1;
        no1 = novo;
    }

    else

    {
        struct No* novo = (struct No*)malloc(sizeof(struct No*));
        no2 = novo;
        no1 = no2;
    }
}

struct No* busca(char * tel, struct Lista agenda)
{
    struct No* aux = agenda.prim;
    while(!strcmp(aux->item.end, tel))
    {
        aux = aux->prox;
    }
    return aux;
}

void deletar(struct Lista agenda, char * tel)
{
    struct No* aux;
    if(!(agenda.prim == agenda.ult))
    {
        aux = busca(tel, agenda);
        aux->ant->prox = aux->prox;
        aux->prox->ant = aux->ant;

        free(aux);
    }
}

void atualizar (struct Lista agenda, char * tel)
{
    if(!(agenda.prim == agenda.ult))
    {
        struct No* aux = busca(tel, agenda);

    }
}

void mostrar(struct Lista agenda, char * tel)
{
    struct No* aux = busca(tel, agenda);
    printf(No* aux = busca(tel, agenda);
}

void listar(struct Lista agenda)
{
    struct No* aux = agenda.prim;
    while(aux->prox != NULL)
    {
        printf(No* aux = agenda.prim);
        aux = aux->prox;
    }
}

int main(){
    struct Lista agenda;


    return 0;
}
