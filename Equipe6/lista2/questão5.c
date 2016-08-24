/*
 * =====================================================================================
 *
 *       Filename:  questão5.c
 *
 *    Description:  questão5.c
 *
 *        Version:  1.0
 *        Created:  22-08-2016 16:08:16
 *       Revision:  none
 *       Compiler:  gcc
 *
 *   Author:  			Hélio Paulo
 *         			Jailson Pereira
 *         			Thiago Cauassa
 *         			Rebeca Assunção
 *   Organization:  AED 1
 *
 * =====================================================================================
 */ 
 //5) Gere todas as possíveis combinações para um jogo da MegaSena com 6 dezenas.
#include <stdio.h>
#include <stdlib.h>

void perm(int, int[]);
void imprime (int[]);
int troca (int, int[]);

int main(int argc,const char *argv[]){

  int dezenas[]={10,22,33,44,55,66};
	
	perm(dezenas);

  return 0; 
}

void perm(int dezenas[]){
	for(int i=5; i>=0;i--){
		if(i==0){
			return 0;
		}else{
			imprime(dezenas[]);
			troca(i,dezenas[]);
			return perm();
		}
	}
}
	
int troca (int i, int vetnovo[]){
	int aux;
	aux = vetnovo[i];
	vetnovo[i] = vetnovo[i+1];
	vetnovo[i+1] = aux;
	
	return vetnovo[];
}

void imprime(int vetor[]){
	for(int i=0; i<=5;i==){
		printf("%d  ",vetor[i]);
	}
}
  
