/*
 * =====================================================================================
 *
 *       Filename:  Tabela Hash
 *
 *    Description:  Tabela Hash
 *
 *        Version:  1.0
 *        Created:  11-11-2016 23:50:08
 *        Revision:  none
 *        Compiler:  gcc
 *
 *         Author:      Hélio Paulo
 *                      Jailson Pereira
 *                      Jefferson Ávilar
 *                      Tiago Cauassa
 *                      Rebeca Assunção
			Miguel Angelo
 *   Organization:  AED 1
 *
 * =====================================================================================
 */

#include "hash_string.h"
#include<stdio.h>
#include<stdlib.h>

int main()
{
	
    int i;
	
    int codigo,ano;
    char nome[100];
	

    for(i=0;i<17770;i++)
    {
        scanf("%d",&codigo);
        scanf("%d",&ano);
        scanf(" %[^\n]s",nome);
		
        inserir(codigo,ano,nome);  
    }
   
	imprimir(tab_hash);
	
	buscar_tabela("My Favorite Brunette");
	buscar_tabela("Horror Hospital");
	buscar_tabela("Fleeing by Night");
	buscar_tabela("BLABLABLA");
	
	return 0;

}
