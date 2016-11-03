#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#define MAX 8550
#define MOD 7

typedef struct filme Filme;
struct filme {
	char nome[50];
	int ano, indice;
	Filme *prox;
};

Filme *hash[MAX];

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

Filme *inserir_na_hash(Filme *filme, int chave)
{
	Filme *novo;
	novo = (Filme*)malloc(sizeof(Filme));
	
	strcpy(novo->nome, filme->nome);
	novo->indice = filme->indice;
	novo->ano = filme->ano;
	
	//hash[chave] = novo;
	
	return novo;
}

void inserir(int chave, Filme *filme)
{
	int ind;
	
	ind = calcula_hash(chave);

	hash[ind] = inserir_na_hash(filme, chave);
}



void imprimir()
{
	int i;
	Filme *atual;

	for ( i = 0; i < MAX; i++ )
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


int busca_horizontal(Filme filme, int chave )
{
	Filme *aux;
	int achou = -1;
	int i = 0;

	aux = filme;

	while(aux != NULL && achou == -1)
	{
		if (!strcmp(aux->indice,indice))
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

int busca_vertical(int chave, Filme filme)
{
	int achou;
	int indice;

	indice = calcula_hash(chave);

	achou = busca_horizontal(filme, chave);

	return achou;
}
int adiciona_na_hash()
{
	FILE *file;
	file = fopen("entrada.txt", "r");
	
	if(file == NULL)
	{
		printf("O Arquivo nao pode ser aberto");
		system("pause");
		return 0;
	}
	
	char vet[17769]; 
	
	while(fgets(vet, 1000, file) != NULL)
	{
		printf("%s", vet);
	}
	
	
	fclose(file);
}
/*
int calcula_hash(int chave)
{
     int num;
     if(chave >= MAX)
     	num = chave - MAX;
     else
     	num = -MAX - chave;
     return (int)(fabs(num));
}

*/
