
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define N 5

typedef struct filme Filme;
struct filme{
    int codigo;
    char nome[100];
    int ano;
    Filme *prox;
};

typedef  Filme *Hash[N];

void inicia_tabela (Hash tab)
{
    int i;
    for (i=0; i<N; i++)
        tab[i] = NULL;
}

int funcao_hash (int chave)
{
    double A = 0.6180339887; // constante: 0 < A < 1
    double val = chave * A;
    val = val - (int) val;
    return (int) (N * val);
}


Filme *busca (Hash tab,int num)
{
    int h = funcao_hash(num);
    Filme *a = tab[h];
    while (a != NULL)
    {
        if(a->codigo == num)
            return a;
        a = a->prox;
    }
    return NULL;
}

Filme *insere_hash (Hash tab,int num,char *nome,int year)
{
    int h = funcao_hash(num);
    Filme *p = NULL;
    Filme *a = tab[h];
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
            tab[h] = a;
        else
            p->prox = a;
    }
    strcpy(a->nome,nome);
    a->ano = year;
    return a;

}

void imprime_hash (Hash tab)
{
    int i;
	Filme *atual;

	for ( i = 0; i < N; i++ )
	{
		if ( tab[i] == NULL )
			printf( "%d -> .\n", i );
		else
		{

			atual = tab[i];

			printf( "%d ->", i );

			while( atual != NULL )
			{
				printf( "\t%d", atual->codigo );
				printf("\t%s",atual->nome);
				printf("\t%d",atual->ano);
				atual = atual->prox;
			}

			printf("\n");
		}
    }

}




