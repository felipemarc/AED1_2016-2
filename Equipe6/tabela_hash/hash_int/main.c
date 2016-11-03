#include <stdio.h>
#include <stdlib.h>
#include "tabela_atual.h"
#define tam 17770

/* Principal */

int main()
{
    char fil[100];
    int num,cod,i;
		int buscar1 = 17762, buscar2 = 28, buscar3 = 123, buscar4 = 666666666;
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

    printf("Buscar:\n");
   // scanf("%d",&buscar);
    Filme *achou1 = busca(tabela,buscar1);
    Filme *achou2 = busca(tabela, buscar2);
    Filme *achou3 = busca(tabela, buscar3);
    Filme *achou4= busca(tabela, buscar4);

    imprime_um(achou1);
    imprime_um(achou2);
    imprime_um(achou3);
    imprime_um(achou4);

    return 0;
}
