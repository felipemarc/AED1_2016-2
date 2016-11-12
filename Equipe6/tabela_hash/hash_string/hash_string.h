/*
 * =====================================================================================
 *
 *       Filename:  Tabela Hash
 *
 *    Description:  Tabela Hash
 *
 *        Version:  1.0
 *        Created:  11-11-2016 23:50:08
 *        Revision:  none
 *        Compiler:  gcc
 *
 *         Author:      Hélio Paulo
 *                      Jailson Pereira
 *                      Jefferson Ávilar
 *                      Tiago Cauassa
 *                      Rebeca Assunção
 *   Organization:  AED 1
 *
 * =====================================================================================
 */
 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TAM 179

typedef struct filme Filme;
struct filme{
	int codigo;
	int ano;
	char nome[100];
	Filme *prox;
};

Filme *tab_hash[TAM];

Filme *inserir_lista(Filme *lista, int codigo, int year , char title[])
{
	Filme *aux;
	aux = (Filme*)malloc(sizeof(Filme));

	aux->codigo = codigo;
	aux->ano = year;
	strcpy(aux->nome,title);
	aux->prox = lista;

	return aux;
}

int funcao_hash (char title[])
{
	unsigned int hash = 0;
	for (int i = 0; title[i] != '\0'; i++)
		hash = 31*hash + title[i];
	return hash % TAM;
}

void inserir (int codigo,int year,char title[])
{
	int indice;

	indice = funcao_hash(title);

	tab_hash[indice] = inserir_lista(tab_hash[indice],codigo,year,title);
}

void imprimir( Filme *tab[] )
{
	int i;
	Filme *atual;

	for ( i = 0; i < TAM; i++ )
	{
		if ( tab[i] == NULL )
			printf( "%d -> .\n", i );
		else
		{

			atual = tab[i];
			
			printf( "%d ->\n", i );
	
			while( atual != NULL )
			{
				printf( " %d ", atual->codigo );
				printf( " %d ", atual->ano );
				printf( " %s\n", atual->nome );
				atual = atual->prox;
			}
	
			printf("\n");
		}
	}
}

int buscar_lista( Filme *lista, char title[] )
{
	Filme *c;
	int achou = -1;
	int i = 0;

	c = lista;

	while( c != NULL && achou == -1 )
	{
		if ( strcmp(c->nome, title) == 0 )
		{
			printf( " %d ", c->codigo );
			printf( " %d ", c->ano );
			printf( " %s\n", c->nome );
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

void buscar_tabela( char title[] )
{
	int achou;
	int indice;

	indice = funcao_hash( title );

	achou = buscar_lista( tab_hash[indice], title );
	
	if(achou == -1)
		printf(" Filme  %s não encontrado.", title);
}


