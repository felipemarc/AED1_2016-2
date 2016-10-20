/*
 * =====================================================================================
 *
 *       Filename:  hash.h
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  19-10-2016 20:58:04
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


/*remove os espaços no vetor de string e coloca no aux
 * e prepara o vetor para conversão para ASCII*/
void ajusta_string(char *string, char *aux)
{
	int tam;
	tam = strlen(string);
	int cont = 0;
	int i = 0;

	for(i=0;i<=tam;i++)
	{
		if(string[i] != ' ')
		{
			aux[cont] = string[i];
			cont++;
		}
	}
}


/*Converte uma string para ASCII*/
int transforma_char(char *cara)
{
	int *aux;
	int i=0,num,tam;
	tam = strlen(cara);
	aux=(int*)malloc(sizeof(int));

	for(i=0;i<tam;i++)
	{
		aux[i] = cara[i];
	}

	for(i=0;i<tam;i++)
	{
		num+=aux[i];
	}
	return num;
}

int funcao_hash (int num, int x)
{
	int aux;
	aux = x%num;
	return aux;
}
