/*
 * =====================================================================================
 *
 *       Filename:  modelo.c
 *
 *    Description:  questão10
 *
 *        Version:  1.0
 *        Created:  19-08-2016 14:07:12
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:              Hélio Paulo
 *         			Jailson Pereira
 *         			Thiago Cauassa
 *         			Rebeca Assunção
 *   Organization:  AED 1
 *
 * =====================================================================================
 */

#include<stdio.h>
#include<stdlib.h>
#define TAM 10

void imprime(int matriz[TAM][TAM]){
	int i,j;
	for(i=0;i<TAM;i++){
		for(j=0;j<TAM;j++){
			printf("%d",matriz[i][j]);
		}
	   printf("\n");
	}
}

int main(){

	FILE *arquivo = fopen ("maze.txt","r");
	int matriz[TAM][TAM];
	int i,j;

	if (arquivo == NULL){
		printf("ERRO\n");
		return 1;
	}
	
	for(i=0;i<TAM;i++){
		for(j=0;j<TAM;j++){
			fscanf(arquivo,"%d",&matriz[i][j]);
		}
	}
	imprime(matriz);
	fclose(arquivo);
	return 0;
}
