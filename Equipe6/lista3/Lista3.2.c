/*
 * =====================================================================================
 *
 *       Filename:  quicksort.c
 *
 *    Description:  quicksort	
 *
 *        Version:  1.0
 *        Created:  05-09-2016 10:46:20
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:                  Hélio Paulo
 *         			    Jailson Pereira
 *         			    Tiago Cauassa
 *         			    Rebeca Assunção
 *         			    Miguel Angelo
 *   Organization:  AED1 
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <stdlib.h>

void quick(int vet[], int inicio, int fim){
	
	int pivo, aux, i, j, meio;
	
	i = inicio;
	j = fim;
	
	meio = (int) ((i + j) / 2);
	pivo = vet[meio];
	
	do{
        	while (vet[i] < pivo) i = i + 1;
 		while (vet[j] > pivo) j = j - 1;
	
		if(i <= j){
			aux = vet[i];
			vet[i] = vet[j];
			vet[j] = aux;
			i = i + 1;
			j = j - 1;
		}
	}while(j > i);
	
	if(inicio < j) 
		quick(vet, inicio, j);
	if(i < fim) 
		quick(vet, i, fim);	

}



int main (int argc,const char *argv[])
{

	int tam = atoi(argv[1]);
	int i;
	int *vet = (int *) malloc (sizeof (int)*tam);
	for(i=0;i<tam;i++)
	{
		scanf("%d",&vet[i]);
	}
	
	quick(vet,0,tam-1);
	

	free(vet);

	return 0;
}


