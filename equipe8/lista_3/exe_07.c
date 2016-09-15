#include<stdio.h>

#define max 11

int BuscaSentinela(int *vetor,int chave){
	int indice = 0;
	vetor[max] = chave;
	while (vetor[indice] != chave) indice++; //: # Enquanto nao for a chave encontrada continua o laco
	if (indice == max-1) return -1; //: # Se o indice esta igual o tamanho do vetor menos 1 significa que nao encontrou
	return indice;// # Caso contrario, encontrou, retorna a posicao da chave no vetor
}

int main(){

	return 0;
}
