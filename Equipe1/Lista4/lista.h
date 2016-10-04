//agenda forma de lista duplamente encadeada

/*
   1) Crie uma agenda em forma de lista duplamente encadeada
   - CRUD completo: inserir, deletar, atualizar, mostrar e listar
   - dados nome, endereço, telefone e email
   - a chave de busca será o número de telefone ( apenas números )
*/

#include <stdio.h>
#include <stdlib.h>

//criando tipo No.
typedef struct no No;


//cria no com com dois ponteiros
struct no
{
	int info;
	No *next_anterior;
	No *next_posterior;
};


//cria lista
No *criar()
{
	return NULL;
}


//insere elementos na lista
No *push(No *lista, int i)
{
	if(lista==NULL)
	{
		No *temp;
		temp = (No*)malloc(sizeof(No));
		temp->info = i;
		temp->next_anterior = lista;
		temp->next_posterior = lista;
		return temp;
	}
	else
	{
		No * temp;
		temp = (No*)malloc(sizeof(No));
		temp->info = i;
		temp->next_anterior = lista;
		temp->next_posterior = NULL;
		lista->next_posterior = temp;
		return temp;
	}
}

//imprime lista
void print(No *lista)
{
	No *temp;
        temp = lista;

        if(temp == NULL)
	{
        	printf("pilha vazia\n");
	}
	else
	{
		while(temp != NULL)
		{
			printf(" %d ",temp->info);
			temp = temp->next_anterior;
		}
		printf("\n");
	}
}

//remove elementos da lista
