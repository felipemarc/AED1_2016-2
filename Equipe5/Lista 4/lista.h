/*
 	Aline Lima
 	Amanda Leticia
 	Eduardo Azevedo
 	Lucas Almeida

1) Crie uma agenda em forma de lista duplamente encadeada
- CRUD completo: inserir, deletar, atualizar, mostrar e listar
- dados nome, endereço, telefone e email
- a chave de busca será o número de telefone ( apenas números )
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct no No;
struct no{
    char nome[30];
    char endereco[30];
    int info;
    char email[30];
    No *prox;
    No *ant;
};

No *primeiro = NULL;
No *ultimo = NULL;


// cria a fila
No *queue_create()
{   
    return NULL;
}

// insere elementos na fim da fila
void queue_insert(char nome1[], char end1[], int tel, char email1[])
{
    No *novo;
    novo = (No*)malloc(sizeof(No));
    strcpy(novo->nome, nome1);
    strcpy(novo->endereco, end1);
    novo->info = tel;
    strcpy(novo->email, email1);
    novo->prox = NULL;
    novo->ant = NULL;
    
    // se a lista estiver vazia
    if (primeiro == NULL)
    {
        primeiro = novo;
        ultimo = novo;
    } 
    else if (primeiro->prox == NULL)    // lista com um elemento
    {
        ultimo = novo;
        primeiro->prox = novo;
        ultimo->ant = primeiro;
    } 
    else   //lista com mais de um elemento
    {
        ultimo->prox = novo;
        novo->ant = ultimo;
        ultimo = novo;
    }
}

// imprime a lista do primeiro elemente ao ultimo
void queue_print()
{
    No *temp;
    temp = primeiro;
    
    if(temp == NULL)
        printf("Fila vazia. \n\n");
    else
    {
        while( temp != NULL )
        {
            printf(" %s ", temp->nome);
            printf(" %s ", temp->endereco);
            printf(" %d ", temp->info);
            printf(" %s ", temp->email);
            printf("\n");
            temp = temp->prox;
        }
        printf("\n\n");
    }
}

// busca de um elemento da lista
void queue_search(int num)
{
    int coisa = 0;
    No *temp;
    temp = primeiro;

    //verifica se a lista esta vazia
    if( temp == NULL)
        printf("Fila vazia. \n\n");
    else
    {
        while(temp != NULL)
        {
            if(temp->info == num)
            {
                printf("O contato foi encontrado. \n");
                printf(" %s ", temp->nome);
            	printf(" %s ", temp->endereco);
            	printf(" %d ", temp->info);
            	printf(" %s ", temp->email);
            	printf("\n\n");
                coisa = 1;
                break;
            }
            temp = temp->prox;
        }

    }

    if(coisa == 0)
        printf("O contato nao foi encontrado. \n\n");
}

// deleta um elemento
void queue_delete(int num)
{
	int coisa;
	No *temp;
	temp = primeiro;
	coisa = 0;

	// verifica se a lista esta vazia
	if(temp == NULL)
	{
		printf("Fila vazia. \n\n");
	}
	else if(temp->prox == NULL && temp->info == num) 	// verfica se ha apenas um elemento na lista
	{													// e se ele é o elemento de que deve ser apagado
		primeiro = NULL;
		ultimo = NULL;
        temp = NULL;
		coisa = 1;
	}
	else 	// busca o elemento que deve ser apagado na lista
	{
		while(temp != NULL)
		{
			if(temp->info == num)
			{
                if(temp->prox == NULL)  // verifica se o elemento ecnontrado e o ultimo
                {
                    printf("ultimo\n");
                    temp->ant->prox = NULL;
                    ultimo = temp->ant;
                    temp = NULL;
                    coisa = 1;
                    break;
                }
                else if(temp->ant == NULL)   // verifica se o elemento encontrado e o primeiro
                {
                    printf("primeiro\n");
                    temp->prox->ant = NULL;
                    primeiro = temp->prox;
                    temp = NULL;
                    coisa = 1;
                    break;
                }
                else
                {
				    temp->ant->prox = temp->prox;
				    temp->prox->ant = temp->ant;
                    temp = NULL;
				    coisa = 1;
				    break;
                }
			}
			else
				temp = temp->prox;
		}
	}

	free(temp);

	if(coisa == 0)
		printf("O elemento que deve ser removido nao foi encontrado. \n\n");
}

// atualiza um elemento da lista
void queue_update(int num, char new_name[], char new_end[])
{
    int coisa =0;
    No *temp;
    temp = primeiro;

    //verifica se a lista esta vazia
    if( temp == NULL)
        printf("Fila vazia. \n\n");
    else
    {
        while(temp != NULL)
        {
            if(temp->info == num)
            {
                printf(" entrou \n\n");
                strcpy(temp->nome, new_name);
                strcpy(temp->endereco, new_end);
                coisa = 1;
                break;
            }
            temp = temp->prox;
        }

    }

    if(coisa == 0)
        printf(" O elemento que deve ser modificado nao foi encontrado. \n\n");
}