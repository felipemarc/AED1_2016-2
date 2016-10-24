#include <stdio.h>
#include <stdlib.h>
#include "tabela_atual.h"
//#define tam 5

/* Principal */

int main()
{
    Hash *tabela;

    tabela = inicia_tabela();
    int codigo, ano;
    char *nome;
    int buscar;

    scanf("%d %d", &codigo, &ano);
    scanf("%s", nome);

    insere_hash(tabela, codigo, nome, ano);
    imprime_hash(tabela);

    printf("\n\nBuscar: "); scanf("%d", &buscar);

  /*  if (busca(tabela, buscar) != NULL)
    {
      printf("Achou\n\n");
    }*/
    Filme *achou = busca(tabela,buscar);
    imprime_um(achou);

    return 0;
}
