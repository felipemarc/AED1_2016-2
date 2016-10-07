#include <stdio.h>
#include <stdlib.h>
#include <string.h>


struct Contato
{
    char nome[50];
    char end[50];
    char tel[50];
    char email[50];
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
    //no1 = agenda.ult; no2 = agenda.prim;
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
    if(!(agenda.prim == agenda.ult));
    {
        struct No* aux = busca(tel, agenda);
        printf("Digite o nome do contato: \n");
        fgets(aux->item.nome, 50, stdin);
        aux->item.nome[strlen(aux->item.nome) -1] = '\0';

        printf("Digite o endereço do contato: \n");
        fgets(aux->item.end, 50, stdin);
        aux->item.end[strlen(aux->item.end) -1] = '\0';

        printf("Digite o telefone do contato: \n");
        fgets(aux->item.tel, 50, stdin);
        aux->item.tel[strlen(aux->item.tel) -1] = '\0';

        printf("Digite o email do contato: \n");
        fgets(aux->item.email, 50, stdin);
        aux->item.email[strlen(aux->item.email) -1] = '\0';
    }
}

void mostrar(struct Lista agenda, char * tel)
{
    struct No* aux = busca(tel, agenda);
    printf("%s\n ", aux->item.nome);
    printf("%s\n ", aux->item.end);
    printf("%s\n ", aux->item.tel);
    printf("%s\n\n ", aux->item.email);
}

void listar(struct Lista agenda)
{
    struct No* aux = agenda.prim;
    while(aux->prox != NULL)
    {
        printf("%s\n ", aux->item.nome);
        printf("%s\n ", aux->item.end);
        printf("%s\n ", aux->item.tel);
        printf("%s\n\n ", aux->item.email);
        aux = aux->prox;
    }
}

int main(){
    struct Lista agenda;


    return 0;
}
