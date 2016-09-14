// Lista 3, questao 2.

#include <stdio.h>
#include <stdlib.h>

void quick(int vet[], int esq, int dir)
{
	int pivo = esq, i, ch, j;
	for(i = esq + 1; i <= dir; i++)
	{
		j =i;
		if(vet[j] < vet[pivo])
		{
			ch = vet[j];
			while(j > pivo)
			{
				vet[j] = vet[j-1];
				j--;
			}
			vet[j] = ch;
			pivo++;
		}
	}
	if (pivo - 1 >= esq )
	{
		quick(vet, esq, pivo-1);
	}
	if (pivo + 1 <= dir)
	{
		quick(vet, pivo+1, dir);
	}
}

int main()
{
	int tamanho;
	printf("Informe o tamanho do vetor: ");
	scanf("%d", &tamanho);
	int vet[tamanho], i;
	for(i = 0; i < tamanho; i++)
	{
		scanf("%d", &vet[i]);
	}
	
	quick(vet, 0, tamanho-1);
	
	printf("\n");
	printf("O vetor de forma ordenada eh: \n");
	
	for(i = 0; i < tamanho; i++)
	{
		printf("%d ", vet[i]);
	}
	
	printf("\n");
	return 0;
	
}
