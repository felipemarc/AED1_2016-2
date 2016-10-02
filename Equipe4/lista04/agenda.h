#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define TAM 40

typedef struct agenda;

agenda//estrutura para armazenamento de dados da agenda
{
    int telefone;
    char nome[TAM];
    char email[TAM];
    char endereco[TAM];

};

typedef struct no;//estrutura para controle da lista

lista
{
    agenda *dados;//ponteiro para os dados da agenda
    lista *anterior;//ponteiros para lista duplamente encadeada
    lista *proximo;
};

lista *primeiro=NULL;
lista *ultimo=NULL;

void insere_elemento()
{

}

void remove_elemento()
{


}

void mostra_agenda()
{


}

void busca_agenda()
{


}

