#include<stdio.h>
#include<stdlib.h>
#include"hash.h"

int main(int argc, const char *argv[])
{
	int chave, num, i;
	Filme *filme;
	scanf("%d", &chave);
	for(i = 0; i<17750;i++)
	{
		printf("Indice: \n");
		scanf("%d", &filme->indice);
		printf("Ano: \n");
		scanf("%d", &filme->ano);
		printf("Nome: \n");
		scanf("%s", filme->nome);
	}
	num = calcula_hash(chave);
	inserir(num, filme);
	imprimir();	
    return 0;
}
