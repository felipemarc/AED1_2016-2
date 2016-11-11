/*
 * =====================================================================================
 *
 *       Filename:  Tabela Hash
 *
 *    Description:  Tabela Hash
 *
 *        Version:  1.0
 *        Created:  11-11-2016 10:43:12
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  		Hélio Paulo
 *         			Jailson Pereira
 				Jefferson Ávilar
 *         			Tiago Cauassa
 *         			Rebeca Assunção
 *   Organization:  AED 1
 *
 * =====================================================================================
 */

#include "tabela_atual.h"
#include<stdio.h>
#include<stdlib.h>

int main()
{
	
    int i;
	
	
    int codigo,ano;
    char nome[100];
	
	/* Preencher tabela hash */
    for(i=0;i<17770;i++)
    {
        scanf("%d",&codigo);
        scanf("%d",&ano);
        scanf(" %[^\n]s",nome);
		
        inserir(codigo,ano,nome);  
    }
   
	/* Imprimir tabela hash */
//    imprimir(tab_hash);
	
	/* Buscar tabela hash */
	buscar_tabela(21);
	buscar_tabela(560);
	buscar_tabela(19000);
	
	return 0;

}
