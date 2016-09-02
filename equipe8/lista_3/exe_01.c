#include<stdio.h>

#define MAX 10

int main()
{
	int vetor[MAX],i,j,aux;
	for(i=0;i<MAX;i++) scanf("%i",&vetor[i]);
	for(i=0;i<MAX;i++)
		for(j=i+1;j<MAX;j++)
			if(vetor[i]>vetor[j])
			{
				aux = vetor[i];
				vetor[i] = vetor[j];
				vetor[j] = aux;
			}
	
	for(i=0;i<MAX;i++) printf("%i\n",vetor[i]);
	return 0;
}