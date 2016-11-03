#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#define MOD 4225
#define MAX 4226

typedef struct filme Filme;
struct filme {
	char nome[100];
	int ano, indice;
	Filme *prox;
};

typedef  struct hash Hash;
struct hash
{
	Filme *hash[MAX];
};

Hash* inicia_tabela()
{
	int i;
	Hash *tab = (Hash *) malloc(sizeof(Hash));
	for (i=0; i<MAX; i++)
		tab->hash[i] = NULL;
	return tab;
}

/* Utilizando um ponteiro auxiliar
* remove os espaços no vetor e
* adiciona no vetor auxiliar 
*/
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

//Converte de String para ASCII e soma os valores
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


int calcula_hash(int chave)
{
	int pos;
	pos = chave % MOD;
	return pos;
}


void inserir(Hash *tab, int indice, char *Nome, int ano)
{
	int chave = calcula_hash(indice);
	Filme *aux = (Filme *) malloc(sizeof(Filme));
	
	aux->prox = tab->hash[chave];
	aux->indice = indice;
	strcpy(aux->nome, Nome);
	aux->ano = ano;
	
	tab->hash[chave] = aux;
}

void imprimir(Hash *tab)
{
	int i;
	Filme *atual;


	for ( i = 0; i < MAX; i++ )
	{
		if ( tab->hash[i] == NULL )
			printf( "%d -> .\n", i );
		else
		{

			atual = tab->hash[i];
			
			printf("%d ->", i );
	
			while( atual != NULL )
			{
				//printf(" %d ", atual->indice);
				//printf(" %d ", atual->ano);
				printf("| %s |", atual->nome);
				atual = atual->prox;
			}
	
			printf("\n");
		}
	}
}


int busca_horizontal(Filme *filme, int chave )
{
	Filme *aux;
	int achou = -1;
	int i = 0;

	aux = filme;

	while(aux != NULL && achou == -1)
	{
		if (!aux->indice == i)
		{
			achou = i;
		}
		else
		{
			i++;
			aux = aux->prox;
		}
	}

	return achou;
}

int busca_vertical(int chave, Filme *filme)
{
	int achou;
	int indice;

	indice = calcula_hash(chave);

	achou = busca_horizontal(filme, chave);

	return achou;
}




