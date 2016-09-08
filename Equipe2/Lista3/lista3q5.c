#include<stdio.h>

int busca_seq(int vet[], int tam, int chave)
{
	int i;
	for(i = 0; i<tam; i++)
	{
		if(vet[i] == chave)
			return 1;
	}
	return -1;
}

int main()
{
	int tam;
	scanf("%d", &tam);
	int vet[tam], chave, i,num, result = 0;
	scanf("%d", chave);
	for(i = 0; i<tam; i++)
	{
		scanf("%d", &num);
		vet[i] = num;
	}
	result = busca_seq(vet, tam, chave);
	if(result == 1)
		printf("O numero etá no vetor!\n");
	if(result == -1)
		printf("O numero não etá no vetor!\n");
	return 0;
}
