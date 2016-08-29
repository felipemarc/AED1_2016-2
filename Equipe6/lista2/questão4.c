/*
 * =====================================================================================
 *
 *       Filename:  questão4.c
 *
 *    Description:  questão4
 *
 *        Version:  2.0
 *        Created:  29-08-2016 09:41:12
 *       Revision:  Tiago
 *       Compiler:  gcc
 *
 *         Author:  Hélio Paulo
 *         			Jailson Pereira
 *         			Tiago Cauassa
 *         			Rebeca Assunção
 *   Organization:  AED 1
 * =====================================================================================
 */
 // Dado um número n, gere todas as possíveis combinações com as n primeiras letras do alfabeto. Ex.: n = 3. Resposta: ABC, ACB, BAC, BCA, CAB, CBA
#include <stdio.h>
#include <stdlib.h>
// Basicamente, como todas as questões, este programa é feito com funções recursivas
// Essa é a primeira função
void Troca(int v[],int i,int j) {
	int t;
	t = v[i];
	v[i] = v[j];
	v[j] = t;
}
//Segunda função
void Gira_Esquerda(int v[],int go,int n) {
	int tmp = v[go];
	for (int i=go; i<n; i++){
		v[i] = v[i+1];
	}
	v[n] = tmp;
}
//Terceira função
void Imprima(int s[], int k) {
	int i;
	printf("\n");
	for (i=1; i<=k; i++){
		printf("%c", s[i]+'A'-1);
	}
}
//Quarta função
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
//Início do programa
int main() {
	int * s;//Foi usado locação de memório dinâmica MALLOC, que armazena os dados e devolve o valor para o ponteiro, no caso: *s
	int N, i;
	
	printf("\nEntre com n: ");//Pedido de entrada e leitura normal...
	scanf("%d",&N);
	
	s = (int*)malloc((N+1)*sizeof(int)); 
	//variável recebendo valor do resultado da locação de memória
	// sizeof é um operador usado quando o real tamanho d eum objeto deve ser conhecido.
	for (i=1; i<=N; i++) s[i] = i;
	Permuta (s, 1, N);//chamando a função
}
