#include<stdio.h>
#include<stdlib.h>
#include"hash.h"

int main(int argc, const char *argv[])
{
	int indice, num, i=0, ano, chave = 17569;
	Filme *aux;
	char nome[100];
	aux = (Filme*)malloc(sizeof(Filme));
	Hash *tab;
	
	//printf("%d\n", i);
	tab = inicia_tabela();
	for(i = 0; i<17769;i++)
	{
		scanf("%d", &aux->indice);
		scanf("%d", &aux->ano);
		scanf("%[^\n]s", aux->nome);
		setbuf(stdin, NULL);
		
		inserir(tab, aux);
		
		//printf("%d\n", i);
	}
	procurar_e_imprimir(tab ,chave);
//	imprimir(tab);
    return 0;
}
