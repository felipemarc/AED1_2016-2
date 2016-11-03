#include<stdio.h>
#include<stdlib.h>
#include"hash.h"

int main(int argc, const char *argv[])
{
	int indice, num, i=0, ano;
	Filme *aux;
	char nome[100];
	aux = (Filme*)malloc(sizeof(Filme));
	Hash *tab;
	
	//printf("%d\n", i);
	tab = inicia_tabela();
	for(i = 0; i<17769;i++)
	{
		scanf("%d", &indice);
		scanf("%d", &ano);
		scanf("%[^\n]s", nome);
		setbuf(stdin, NULL);
		
		inserir(tab, indice, nome, ano);
		
		//printf("%d\n", i);
	}
	
	imprimir(tab);
    
    return 0;
}
