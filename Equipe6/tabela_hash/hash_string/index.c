#include <stdio.h>
#include <stdlib.h>
#include "hash.h"
#define tam 17770

/* Principal */
 
int main()
{
	char fil[100];
	int num,cod,i;
	//char *buscar1 = "Immortal Beloved", buscar2 = "Fighter", buscar3 = "Animation Legend: Winsor McCay", buscar4 = "BLABLABLA";
	Hash *tabela;

	tabela = inicia_tabela();
	 
	for(i=0;i<tam;i++)
	{
		scanf("%d",&num);
		scanf("%d",&cod);
		scanf("%[^\n]s", &fil);
		inserir_hash(tabela,num,fil,cod);
	}

  imprime_hash(tabela);
	/*
	printf("Buscar:\n");
	Filme *achou1 = buscar(tabela,buscar1);
	Filme *achou2 = buscar(tabela, buscar2);
	Filme *achou3 = buscar(tabela, buscar3);
	Filme *achou4 = buscar(tabela, buscar4);

	imprimir_um(tabela, achou1);
	imprimir_um(tabela, achou2);
	imprimir_um(tabela, achou3);
	imprimir_um(tabela, achou4);
*/
	return 0;
}
 
