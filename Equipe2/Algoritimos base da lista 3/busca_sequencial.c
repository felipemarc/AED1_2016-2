#include <stdio.h>

int busca_sequencial(int vetor[], int tamanho, int elemento_procurado)
{
	int i;
	for (i = 0; i < tamanho; i++)
	{
		if (vetor[i] == elemento_procurado)
		{
			return i;
		}
	}
	
	
	return -1;
}

int main()
{
	int busca;
	int tamanho;
	int n = 0;
	
	printf("Informe o tamanho do vetor: ");
	scanf("%d", &tamanho);
	
	int vet[tamanho];
	
	
	
	for(n = 0; n < tamanho; n++)
	{
		scanf("%d", &vet[n]);
	}
	
	printf("Informe o elemento a ser buscado: ");
	scanf("%d", &busca);
	
	if(busca_sequencial(vet, tamanho, busca) == -1)
	{
		printf("O elemento nao consta no vetor. Fim do programa. \n");
		printf("\n");
	}
	else
	{
		printf("O numero buscado está na posicao: ");
		printf("%d", busca_sequencial(vet, tamanho, busca));
		printf("\n");	
	}
	
	printf("\n");
	
	for (n = 0; n < tamanho; n++)
	{
		printf("%d ", vet[n]);
		
	}
	
	
	return 0;
}
