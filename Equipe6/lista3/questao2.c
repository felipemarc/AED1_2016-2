/*
 * =====================================================================================
 *
 *       Filename:  quicksort
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  05-09-2016 10:13:20
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Helio (), 
 *   Organization:  
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <stdlib.h>

void Quick(int vetor[10], int inicio, int fim);
int main(){
	
	int vetor[10] = {7, 9, 4, 3, 6, 1, 18, 2, 10, 5};
	
	int i;	
	printf("Vetor desordenado:\n");
	for(i = 0; i < 10; i++){
		printf("%d ", vetor[i]);
	}
	printf("\n");	
	
	Quick(vetor, 0, 9);
	
	printf("Vetor ordenado:\n");
	for(i = 0; i < 10; i++){
		printf("%d ", vetor[i]);
	}
	printf("\n");	
}
