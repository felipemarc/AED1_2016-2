#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define TAM 17700//Total de filmes do arquivo txt dado

typedef struct filme Filme;

struct filme
{
	char nome[200];
	int ano;
	int codigo;
	Filme *prox;
	
};

typedef struct hash Hash;
struct hash
{
	Filme *tabela[TAM];
}; 
 
Hash cria_tabela()
 {
 	int i;
	Hash *tab_hash=(Hash*)malloc(sizeof(Hash)); 
	for (i=0;i<=TAM;i++){
		
		tab_hash->tabela[i]=NULL;
		
		
	}
	
	return *tab_hash; 
 	
}

Filme funcao_hashing(char *nome_filme)
{
	
	
}
 
 
void imprime_hashing(Hash *htab)
{
	int i;
	Filme *aux;
	
	for (i=0;i<TAM;i++)
	{
		if(htab->tabela[i]==NULL)
		{
			printf("Vazio");
		}
		
		else
		{
			aux=htab->tabela[i];
			
			printf("%d- ",i+1);
			
			
			printf(" %d",aux->ano);
			printf(" %s",aux->nome);
			printf(" %d",aux->codigo);
			
			aux=aux->prox;
			
			printf("\n");
			 
		}
	}
	
}

Hash busca_titulo(char titulo, Hash *tabela)
{
	
}

Hash busca_codigo(int codigo, Hash *tabela)
{
	
}