 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define N 17770

typedef struct filme Filme;
struct filme{
	int codigo;
	char nome[100];
	int ano;
	Filme *prox;
};

typedef  struct hash Hash;
struct hash
{
	Filme *tab_hash[N];
};

/*Inicializa a tab_hash com valores NULL */
Hash* inicia_tabela (void)
{
	int i;
	Hash *tab = (Hash *) malloc(sizeof(Hash));
	for (i=0; i<N; i++)
		tab->tab_hash[i] = NULL;
	return tab;
}

 /* Calcular o hash de uma cadeia de caracteres */ 
int funcao_hash_str (char *Nome)
{
	int i, len=strlen(Nome), hash=0;
	for (i=1;i<len;i++)
		hash+=Nome[i];
  return hash%N;
}

/* Insere a hash no tabela (pelo nome do filme)*/
void inserir_hash(Hash *tab, int codigo, char *Nome, int ano)
{
	int h = funcao_hash_str(Nome);
	Filme *aux = (Filme *) malloc(sizeof(Filme));
	aux->prox = tab->tab_hash[h];
	aux->codigo = codigo;
	strcpy(aux->nome, Nome);
	aux->ano = ano;
	tab->tab_hash[h] = aux;
}

	
/* Imprime toda a tabela hash */
void imprime_hash (Hash *tab)
{
	int i;
	Filme *atual;
	
	for ( i = 0; i < N; i++ )
	{
		if ( tab->tab_hash[i] == NULL )
			printf( "%d -> .\n", i );
		else
		{
			
			atual = tab->tab_hash[i];
			
			printf( "%d ->", i );
			
			while( atual != NULL )
			{
				printf( "\t%d", atual->codigo );
				printf("\t%s",atual->nome);
				printf("\t%d",atual->ano);
				atual = atual->prox;
			}
			printf("\n\n");
		}
	}
}

Filme* buscar (Hash* tab, char *Nome)
{
	int h = funcao_hash_str(Nome);
	Filme* aux = tab->tab_hash[h];
	while(aux != NULL)
	{
		if (strcmp(aux->nome, Nome) == 0)
		{
			return aux;
		}
		aux = aux->prox;
	}
	return NULL;
	
}
