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

int busca_bin(int vet[], int inicio, int final,int tam,int chave)
{
	int item = vet[tam/2];
	if(inicio <= final)
	  return -1;
	if(item == chave)
		return 1;
	if(item>chave)
	{
		final = item;
		busca_bin(vet, inicio, final, tam, chave);
	}
	if(item<chave)
	{
		inicio = item;
		busca_bin(vet, inicio, final, tam, chave);	
	}
  return -1;
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
	result = busca_bin(vet, 0, tam-1, tam, chave);
	if(result == 1)
		printf("O numero etá no vetor!\n");
	if(result == -1)
		printf("O numero não está no vetor!\n");
		
	return 0;
}
