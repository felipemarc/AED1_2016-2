#include <stdio.h>
#include <stdlib.h>
#include "hash.h"
#define tam 17770

/* Principal */

int main()
{
	char fil[100];
	int num,cod,i;
	char *busca1 = (char *) malloc(sizeof(char));
	//char *busca2 = (char *) malloc(sizeof(char));
	busca1 = "Fighter";
	//busca2 = "13th Child: Legend of the Jersey Devil";
	/*
	     *busca2 = "Red Dwarf: Series 3: Bonus Material", 
		   *busca3 = "Immortal Beloved", 
			 *busca4 = "blablabla blablabla";
	*/
  Hash *tabela;
	
	tabela = inicia_tabela();
	
	for(i=0;i<tam;i++)
	{
		scanf("%d",&num);
		scanf("%d",&cod);
		scanf("%[^\n]s", &fil);
		setbuf(stdin, NULL);
		//__fpurge(stdin);
		inserir_hash(tabela,num,fil,cod);
	}
	
  imprime_hash(tabela);
	printf("Buscar:\n");
	
	printf("%d\n", funcao_hash_str(busca1));
	/*
	scanf("%[^\n]s", busca1);
	scanf("%[^\n]s", busca2);
	scanf("%[^\n]s", busca3);
	scanf("%[^\n]s", busca4);
	*/
	Filme *achou1 = (Filme *) malloc(sizeof(Filme)); 
	//Filme *achou2 = (Filme *) malloc(sizeof(Filme));
	achou1 = busca(tabela,busca1);
	//achou2 = busca(tabela,busca2);
	//Filme *achou2 = busca(tabela, busca1);
	//Filme *achou3 = busca(tabela, busca3);
	//Filme *achou4 = busca(tabela, busca4);
	
	imprimir_um(achou1);
	//imprimir_um(achou2);
	//imprimir_um(achou3);
	//imprimir_um(achou4);
	
	return 0;
}
