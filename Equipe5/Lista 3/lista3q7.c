/*
Equiepe 5: Aline Lima
	   Amanda Leticia
	   Eduardo Azevedo
	   Lucas ALmeida

7) Pesquise e Implemente a Busca Sequencial com Sentinela em C
*/

#include<stdio.h>

int busca_sentinela(int x, int n, int v[])
{ 
	int i = 0;

	v[n] = x; // sentinela

	while (v[i] != x)
		i++;

	return (i == n) ? -1 : i;
}

int main(int argc, const char *argv[])
{
	int k=0, v[10];

	for(int i=0; i<10; i++)
	{
		scanf("%d", &v[i]);
	}

	//printf("\nDigite o numero a encontrar: ");
	scanf("%d", &k);
	printf("\n A posicao do numero e: %d\n\n", busca_sentinela(k, 10, v));
}
