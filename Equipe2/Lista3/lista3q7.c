/*
Hermann Hernani
Jéssica Tavares
Lucas Botinelly
Paulo Marinho
Stephanny Barreto
7) Pesquise e Implemente a Busca Sequencial com Sentinela em C
*/

#include <stdio.h>
#include <stdlib.h>
#define tam 10
int sentinela(int numero, int chave, int vec[])
{
	int i=0;
	vec[tam]=chave;
	
	while(chave!=vec[i])
	{
		i++;
	}
	
	if(i<numero)
	{
		return i;
	}
		
	return -1;
}



int main()
{
	int vec[tam+1]={9,23,56,3,25,78,81,3,6,34}, numero;
	
	//printf("Informe um numero: "); scanf("%d",&numero);
	printf("%d",sentinela(5, tam, vec));
	
	system("pause");
}
