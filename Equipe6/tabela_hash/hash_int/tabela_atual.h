
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

Hash* inicia_tabela (void)
{
    int i;
    Hash *tab = (Hash *) malloc(sizeof(Hash));
    for (i=0; i<N; i++)
      tab->tab_hash[i] = NULL;
    return tab;
}

int funcao_hash (int chave)
{
    double A = 0.6180339887; // constante: 0 < A < 1
    double val = chave * A;
    val = val - (int) val;
    return (int) (N * val);
}


Filme *busca (Hash *tab, int codigo)
{
    int h = funcao_hash(codigo);
    Filme *a = tab->tab_hash[h];
    while (a != NULL)
    {
        if(a->codigo == codigo)
            return a;
        a = a->prox;
    }
    return NULL;
}

void imprime_um (Filme *filme)
{

  if(filme == NULL)
  {
    printf("Filme não cadastrado\n");
  }
  else{

      printf("%d ",filme->codigo);
      printf("%s\t",filme->nome);
      printf("%d\n",filme->ano);
  }
}

/*
Filme *inserir_hash (Hash *tab,int num,char *nome,int year)
{
    int h = funcao_hash(num);
    Filme *p = NULL;
    Filme *a = tab->tab_hash[h];
    while(a != NULL)
    {
        if(a->codigo == num)
            break;
        p = a;
        a = a->prox;
    }
    if (a == NULL)
    {
        a = (Filme*)malloc(sizeof(Filme));
        a->codigo = num;
        a->prox = NULL;
        if(p == NULL)
           tab->tab_hash[h] = a;
        else
            p->prox = a;
    }
    strcpy(a->nome,nome);
    a->ano = year;
    return a;

}
*/

void inserir_hash(Hash *tab, int codigo, char *nome, int ano)
{

  int h = funcao_hash(codigo);
  Filme *aux = (Filme *) malloc(sizeof(Filme));
  aux->prox = tab->tab_hash[h];
  aux->codigo = codigo;
  strcpy(aux->nome, nome);
  aux->ano = ano;
  tab->tab_hash[h] = aux;

  //return aux;

}

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

