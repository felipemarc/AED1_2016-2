#include<stdio.h>
#include<stdlib.h>
#include"hash.h"

int main(int argc, const char *argv[])
{
	int chave, num, i;
	Filme *filme, *aux;
	
	for(i = 0; i<17769;i++)
	{
		scanf("%d", &aux->indice);
		scanf("%d", &aux->ano);
		scanf("%[^\n]s", aux->nome);
		printf("%d", i);
		//setbuf(stdin, NULL);
		chave = calcula_hash(aux->indice);
		inserir(chave, aux);
		printf("%d", i);
	}
	imprimir();
    return 0;
}
