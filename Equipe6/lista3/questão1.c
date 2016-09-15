
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
 *         Author:  Helio (), 
 *   Organization:  AED1
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <stdlib.h>

void bubble (int vetor[], int n)
{

int i,j;
int k = n ;
int aux;
	for(i=0;i<n;i++){
		for (j=0;j<k;j++){
			if (vetor[j] > vetor [j+1]){
				aux = vetor [j];
				vetor[j] = vetor[j+1];
				vetor [j+1] = aux;
			}
		}

		k--;
	}

}




int main ()
{

int vetor [] = {3,5,8,1,9,2,4,7,0,6};
int n = 10 ;
int i;


bubble (vetor,n);
printf("\n\n\n");

	for(i=0;i<n;i++){
		printf("%d - ", vetor[i]);

	}

}
