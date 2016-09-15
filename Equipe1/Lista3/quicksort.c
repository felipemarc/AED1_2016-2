/* 	Equipe 01:
	Diogo Abreu
	Elisandra Oliveira
	Fernando Calderaro
	Leticia Mota
	Luana Andrade
	Rodrigo Oliveira
	Thailana Neves
	
	Exercicio 02:
	Pesquise e implemente em C o QuickSort
*/

#include<stdio.h>
#define N 10

int dividir(int vet[], int esq, int dir)
{
	int aux, i, cont=esq;	
/*'aux' sera usada para troca
  'cont' sera usada para armazenar a posicao inicial*/

	for(i=esq+1; i<=dir; i++)
	{
		if(vet[i] < vet[esq])	//numero da posicao atual eh menor que o da posicao inicial atual?
		{
			cont++;	//se sim, encrementa o contador para saber o numero de trocas
			aux = vet[i];
			vet[i] = vet[cont];
			vet[cont] = aux;
		}
	}
	
//em seguida sera feita a troca da posicao inicial comparada pela nova posicao que sera usada como inicial para comparacao
	aux = vet[esq];
	vet[esq] = vet[cont];
	vet[cont] = aux;

	return cont;
}

void quick(int vet[], int esq, int dir)		//sua funcao eh dividir o vetor no meio para comparacao, por isso ela recebe as posicoes de inicio e de termino
{
	int pos;	//vai ser usado para armazanar a posicao atual durante a execucao do programa

	if(esq < dir)
	{
		pos = dividir(vet, esq, dir);		//o vetor vai der dividido para nova comparacao
		quick(vet, esq, pos-1);
		quick(vet, pos+1, dir);
	}
}

main()
{
	int vet[N], i;

	for(i=0; i<N; i++)
	{
		scanf("%d", &vet[i]);
	}

	quick(vet, 0, N);	//ao chamar a funcao, os argumentos usados sao a primeira e a ultima posicoes usadas para comparacao 
	
	for(i=0; i<N; i++)
	{
		printf("%d ", vet[i]);
	}
}
