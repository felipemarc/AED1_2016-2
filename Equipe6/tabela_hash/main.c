#include <stdio.h>
#include <stdlib.h>
#include "tabela_atual.h"
#define tam 10

/* Principal */

int main()
{
    char fil[100];
    int num,cod,i;
    int buscar;
    Hash *tabela;

    tabela = inicia_tabela();
    
    for(i=0;i<tam;i++)
    {
        scanf("%d",&num);
        scanf("%s",fil);
        scanf("%d",&cod);
        insere_hash(tabela,num,fil,cod);
    }

    imprime_hash(tabela);
    
     
     printf("Buscar:\n");
	scanf("%d",&buscar);
    //Filme *achou = busca(tabela,buscar);
    //imprime_um(achou);

    return 0;
}
