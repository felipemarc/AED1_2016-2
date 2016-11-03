#include<stdio.h>
#include<stdlib.h>
#include"hash.h"

int main(int argc, const char *argv[])
{
	int num, i=0, chave = 17770;
	Filme *aux;
	aux = (Filme*)malloc(sizeof(Filme));
	Hash *tab;
	char chave_nome[100] = " The Face: Jesus in Art";
	
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
	//imprimir(tab);
	procurar_indice(tab ,chave);
	procurar_nome(tab, chave_nome);
    return 0;
}
