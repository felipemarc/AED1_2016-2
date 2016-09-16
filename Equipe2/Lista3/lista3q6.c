/*
Equipe2
Hermann Hernani
Jessica Tavares
Lucas Botinelly
Paulo Marinho
Stephanny Barreto
6) Implemente a Busca Binária em C
*/
#include<stdio.h>

int busca_binaria (int chave, int vet[], int esq, int dir)
{
	int i = (esq + dir)/2;
	if (vet[i] == chave)
		return 1;
	if (esq >= dir)
		return -1; // Não foi encontrado
	else
		if (vet[i] < chave)
			return busca_binaria(chave , vet, i+1, dir);
		else
			return busca_binaria(chave, vet, esq, i-1);
}
int main()
{
	int tam, chave;
	scanf("%d", &tam);
	scanf("%d", &chave);
	int vet[tam], i, num, result;
	
	for(i = 0; i<tam;i++)
	{
		scanf("%d", &num);
		vet[i] = num;
	}
	result = busca_binaria(chave, vet, 0, tam-1);
	if(result == 1)
		printf("O numero etá no vetor!\n");
	if(result == -1)
		printf("O numero não está no vetor!\n");
		
	return 0;
}
