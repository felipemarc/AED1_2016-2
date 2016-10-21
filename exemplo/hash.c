#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TAMANHO 3000


typedef struct no No;
struct no {
	char chave[15];
	No *prox;
};

No *tabela[TAMANHO];


No *inserir_na_lista_adjacente( No *lista, char chave[] )
{
	No *novo;
	novo = (No *)malloc( sizeof( No ) );

	strcpy( novo->chave, chave );

	novo->prox = lista;
	
	return novo;
}

int calcular_hash( char chave[] )
{
	int indice = 0;
	int i;

	for (i = 0; i < 15; i++)
		indice += chave[i];
    
    indice = indice % 11;
    
	return indice;
}


void inserir( char chave[] )
{
	int indice;
	
	indice = calcular_hash( info );

	tabela[indice] = inserir_lista_adjacente( tabela[indice], chave);
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
			
			printf( "%d ->", i );
	
			while( atual != NULL )
			{
				printf( " %s ", atual->chave );
				atual = atual->prox;
			}
	
			printf("\n");
		}
	}
}


int buscar_lista_adjacencia( No *lista, char chave[] )
{
	No *c;
	int achou = -1;
	int i = 0;

	c = lista;

	while( c != NULL && achou == -1 )
	{
		if ( !strcmp(c->info,chave ) )
		{
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

int buscar_tabela_hash( char chave[] )
{
	int achou;
	int indice;

	indice = calcular_hash( chave );

	achou = buscar_lista_adjacencia( tabela[indice],chave );

	return achou;
}
