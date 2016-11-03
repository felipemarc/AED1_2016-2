/* 	Equipe 01:
	Diogo Abreu
	Elisandra Oliveira
	Fernando Calderaro
	Leticia Mota
	Luana Andrade
	Rodrigo Oliveira

	Exercicio 02
	
*/

#include "hash.h"

int main()
{
	/* Flags */
    int i;
	
	/* Declaracao de variaveis */
    int codigo,ano;
    char titulo[100];
	
	/* Preencher tabela hash */
    for(i=0;i<17770;i++)
    {
        scanf("%d",&codigo);
        scanf("%d",&ano);
        scanf(" %[^\n]s",titulo);
		
        inserir(codigo,ano,titulo);  
    }
   
	/* Imprimir tabela hash */
    imprimir(tabela);
	
	/* Buscar tabela hash */
	buscar_tabela_hash("Edgeplay: A Film About the Runaways");
	buscar_tabela_hash("Fall Time");
	buscar_tabela_hash("A Bela e a Fera");
	
	return 0;
}
