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
		scanf("%s", &fil);
		inserir_hash(tabela,num,fil,cod);
	}

  imprime_hash(tabela);
	/* 
	printf("Buscar:\n");
	Filme *achou1 = busca_nome(tabela,buscar1);
	Filme *achou2 = busca_nome(tabela, buscar2);
	Filme *achou3 = busca_nome(tabela, buscar3);
	Filme *achou4 = busca_nome(tabela, buscar4);

	imprime_um(achou1);
	imprime_um(achou2);
	imprime_um(achou3);
	imprime_um(achou4);

	*/
	return 0;
}
 
