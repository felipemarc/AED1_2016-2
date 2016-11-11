/*
 * =====================================================================================
 *
 *       Filename:  Tabela Hash
 *
 *    Description:  Tabela Hash
 *
 *        Version:  1.0
 *        Created:  11-11-2016 10:43:12
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  		Hélio Paulo
 *         			Jailson Pereira
 				Jefferson Ávilar
 *         			Tiago Cauassa
 *         			Rebeca Assunção
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

int funcao_hash(int codigo)
{
	return (codigo%TAM);
}

void inserir (int codigo,int year,char title[])
{
	int indice;

	indice = funcao_hash(codigo);

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

int buscar_lista( Filme *lista, int codigo )
{
	Filme *c;
	int achou = -1;
	int i = 0;

	c = lista;

	while( c != NULL && achou == -1 )
	{
		if ( c->codigo==codigo )
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

void buscar_tabela( int codigo )
{
	int achou;
	int indice;

	indice = funcao_hash( codigo );

	achou = buscar_lista( tab_hash[indice], codigo );
	
	if(achou == -1)
		printf(" Filme  %d não encontrado.", codigo);
}



