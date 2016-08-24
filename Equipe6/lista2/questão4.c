/*
 * =====================================================================================
 *
 *       Filename:  questão4.c
 *
 *    Description:  modelo de cabeçalho
 *
 *        Version:  1.0
 *        Created:  21-08-2016 11:07:12
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Hélio Paulo
 *         			Jailson Pereira
 *         			Tiago Cauassa
 *         			Rebeca Assunção
 *   Organization:  
 *
 * =====================================================================================
 */
 // Dado um número n, gere todas as possíveis combinações com as n primeiras letras do alfabeto. Ex.: n = 3. Resposta: ABC, ACB, BAC, BCA, CAB, CBA
#include <stdio.h>
#include <stdlib.h>

void Troca(int v[],int i,int j) {
	int t;
	t = v[i];
	v[i] = v[j];
	v[j] = t;
}

void Gira_Esquerda(int v[],int go,int n) {
	int tmp = v[go];
	for (int i=go; i<n; i++){
		v[i] = v[i+1];
	}
	v[n] = tmp;
}
void Imprima(int s[], int k) {
	int i;
	printf("\n");
	for (i=1; i<=k; i++){
		printf("%c", s[i]+'A'-1);
	}
}

void Permuta(int v[],int inicio, int n) {
	Imprima(v,n);
	if (inicio<n) {
		int i,j;
		for(i=n-1; i>=inicio; i--) {
			for(j=i+1; j<=n; j++) {
				Troca(v,i,j);
				Permuta(v,i+1,n);
			}
			Gira_Esquerda(v,i,n);
		}
	}
}
int main() {
	int * s;
	int N, i;
	
	printf("\nEntre com n: ");
	scanf("%d",&N);
	
	s = (int*)malloc((N+1)*sizeof(int));
	
	for (i=1; i<=N; i++) s[i] = i;
	Permuta (s, 1, N);
}
