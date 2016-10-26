#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#define MAX 8550

typedef struct filme Filme;
struct filme {
	char nome[50];
	int ano, indice;
	No *prox;
};

Filme *hash[MAX];

/* Utilizando um ponteiro auxiliar
* remove os espaços no vetor e
* adiciona no vetor auxiliar */
void remove_espacos(char *string, char *aux)
{
     int tam;
     tam = strlen(string);
     int count = 0;
     int j = 0;
     
     for (j = 0; j <= tam; j++)
     {
          if (string[j] != ' ')
          {
               aux[count] = string[j];
               count++;
          }
     }
}

/*Converte de String para ASCII e soma os valores
int string_para_ascii(char *str)
{
     int *aux;
     int i=0, num, tam;
     tam = strlen(str);
     aux = (int*)malloc(sizeof(int));
     //Joga o vetor de strings num vetor de inteiros   
     for(i = 0; i<tam-1;i++)
               aux[i] = str[i];
     //Faz o somatório dos números da tabela ASCII
     for(i = 0; i<tam-1;i++)     
          num+=aux[i];
     return num;
}
*/

int calcula_hash(int chave)
{
     int num;
     if(chave >= 8550)
     	num = chave - MAX;
     else
     	num = -MAX - chave;
     return (int)(fabs(num));
}

int inserir_na_hash(Filme filme, int chave)
{
	Filme *novo;
	novo = (Filme*)malloc(sizeof(Filme));
	
	strcpy(novo->nome, filme->nome);
	novo->indice = filme->indice;
	novo->ano = filme->ano;
	
	hash[chave] = novo;
	
	return 1;	
}

void inserir(int chave)
{
	int ind;
	
	ind = calcular_hash(chave);

	tabela[ind] = inserir_na_hash(filme, chave);
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


