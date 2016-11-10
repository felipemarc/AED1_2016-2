/*
Equipe2

Hermann Hernani
Lucas Botinelly
Stephanny Barreto
*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#define MOD 4228
#define MAX 4228

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


void inserir(Hash *tab, Filme *filme)
{
	int chave = calcula_hash(filme->indice);
	Filme *aux = (Filme *) malloc(sizeof(Filme));
	
	aux->prox = tab->hash[chave];
	aux->indice = filme->indice;
	strcpy(aux->nome, filme->nome);
	aux->ano = filme->ano;
	
	tab->hash[chave] = aux;
}

void imprimir(Hash *tab)
{
	int i;
	Filme *atual;


	for ( i = 0; i < MAX - 1; i++ )
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
				printf("|%s |", atual->nome);
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

int procurar_indice(Hash *tab, int chave)
{
	int i;
	Filme *atual;


	for ( i = 0; i < MAX ; i++ )
	{

		atual = tab->hash[i];
		
		while( atual != NULL )
		{
			if(atual->indice == chave)
			{	
				printf("%d - |%s |\n", chave, atual->nome);
				return 0;
			}
			atual = atual->prox;
		}
	}
	printf("Filme n encontrado !\n");
}

int procurar_nome(Hash *tab, char chave[100])
{
	int i;
	Filme *atual;


	for (i = 0; i < MAX ; i++)
	{

		atual = tab->hash[i];
		
		while( atual != NULL )
		{
			if(strcmp( chave,atual->nome ) == 0)
			{	
				printf("%d - |%s |\n", tab->hash[i]->indice, atual->nome);
				return 0;
			}
			atual = atual->prox;
		}	
	}
	printf("Filme n encontrado !\n");
}

