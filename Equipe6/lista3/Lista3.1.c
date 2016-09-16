
/*
 * =====================================================================================
 *
 *       Filename:  bubblesort.c
 *
 *    Description:  bubblesort
 *
 *        Version:  1.0
 *        Created:  05-09-2016 08:45:20
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


void bubble (int vet[],int tam)
{

	int i,j;
	int aux;
	for(i=0;i<tam;i++)
	{
		for (j=i+1;j<tam;j++)
		{
			if (vet[i] > vet [j])
			{
				aux = vet [i];
				vet[i] = vet[j];
				vet [j] = aux;
			}
		}

	}

}




int main (int argc,const char *argv[])
{

	int tam = atoi(argv[1]);
	int n = tam;
	int i;
	
	int *vet = (int *) malloc (sizeof (int)*tam);

	for (i=0;i<tam;i++)
	{
		scanf("%d",&vet[i]);
	}

	bubble (vet,tam);

	free(vet);
	return 0;
}
