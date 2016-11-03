//Equipe 4
//Alerrandro Barreto
//Fabiola Maciel
//Matheus Obando



#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#define TAM 17770
#define MOD 7

typedef struct movie Movie;
struct movie {
	char nome[50];
	int ano, indice;
	Movie *prox;
};


Movie *hash[TAM];


int ascii(char *str)
{
     int *aux;
     int i=0, numero,tamanho;
     tamanho = strlen(str);
     aux = (int*)malloc(sizeof(int));
     for(i = 0; i<tamanho-1;i++)
               aux[i] = str[i];
     for(i = 0; i<tamanho-1;i++)     
          numero+=aux[i];
     return numero;
}

int funcao_hash(int key)
{
     int re;
     re = key % 7;
     return re;
}

Movie *inserir(Movie *movie, int key)
{
	Movie *novo;
	novo = (Movie*)malloc(sizeof(Movie));
	
	strcpy(novo->nome, movie->nome);
	novo->indice = movie->indice;
	novo->ano = movie->ano;
	
	return novo;
}

void calcular(int key, Movie *movie)
{
	int cal;
	
	cal = funcao_hash(key);

	hash[cal] = inserir(movie, key);
}

void imprimir()
{
	int i;
	Movie *atual;

	for ( i = 0; i < TAM; i++ )
	{
		if ( hash[i] == NULL )
			printf( "%d -> .\n", i );
		else
		{
			atual = hash[i];
			printf("%d ->", i );
			while( atual != NULL )
			{
				printf(" %d ", atual->indice);
				printf(" %d ", atual->ano);
				printf(" %s ", atual->nome);
				atual = atual->prox;
			}
			printf("\n");
		}
	}
}





