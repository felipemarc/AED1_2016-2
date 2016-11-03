#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TAMANHO 179

typedef struct no No;
struct no {
	int codigo; //codigo é igual ao codigo do filme
	int ano;
	char titulo[100];
	No *prox;
};

No *tabela[TAMANHO];

No *inserir_na_lista_adjacente( No *lista, int codigo , int year , char title[] )
{
	No *novo;
	novo = (No *)malloc( sizeof( No ) );

	novo->codigo = codigo;
	novo->ano = year;
	strcpy(novo->titulo,title);
	novo->prox = lista;
	
	return novo;
}

int calcular_hash( char titulo[] )
{
	int i;
    unsigned indice = 0;
    for (i = 0; titulo[i] != '\0'; i++) 
		indice = (indice * 256 + titulo[i]) % TAMANHO;
    return indice;
}

void inserir( int codigo, int ano, char titulo[] )
{
	int indice;
	
	indice = calcular_hash( titulo );

	tabela[indice] = inserir_na_lista_adjacente( tabela[indice] , codigo , ano , titulo );
}

void imprimir( No *tabela[] )
{
	int i;
	No *atual;

	for ( i = 0; i < TAMANHO; i++ )
	{
		if ( tabela[i] == NULL )
			printf( "%d -> .\n", i );
		else
		{

			atual = tabela[i];
			
			printf( "%d ->\n", i );
	
			while( atual != NULL )
			{
				printf( " %d ", atual->codigo );
				printf( " %d ", atual->ano );
				printf( " %s\n", atual->titulo );
				atual = atual->prox;
			}
	
			printf("\n");
		}
	}
}

int buscar_lista_adjacencia( No *lista, char titulo[] )
{
	No *c;
	int achou = -1;
	int i = 0;

	c = lista;

	while( c != NULL && achou == -1 )
	{
		if ( strcmp(c->titulo,titulo) == 0)
		{
			printf( " %d ", c->codigo );
			printf( " %d ", c->ano );
			printf( " %s\n", c->titulo );
			achou = i;
			
		}
		else
		{
			i++;
			c = c->prox;
		}
	}
	return achou;
}

void buscar_tabela_hash( char titulo[] )
{
	int achou;
	int indice;

	indice = calcular_hash( titulo );

	achou = buscar_lista_adjacencia( tabela[indice], titulo );
	
	if(achou == -1)
		printf(" TITULO \" %s \" INEXISTENTE.", titulo);
}