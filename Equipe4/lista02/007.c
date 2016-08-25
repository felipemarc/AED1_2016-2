/*Equipe 4:

	Fabiola Maciel
  Jefferson Avilar
  Matheus Obando
  Alerrandro Barreto

	7.Escreva uma função recursiva que determine quantas vezes um dígito K ocorre em um número natural N. Por exemplo, o dígito 2 ocorre 3 vezes em 762021192.
*/

#include <stdio.h>

int conta;

int Count(int x,int y)
{
	if(x==0)
	{
		return 0;
	}

	if(x%10==y)
	{
		conta++;
		return Count(x/10,y);
	}

	return 0;

}

int main()
{
	int a,b;

	printf("Informe o valor a:");
	scanf("%d",&a);

	printf("Informe o valor a ser pesquisado:");
	scanf("%d",&b);

	Count(a,b);

	printf("O numero de vezes: %d\n",conta);

}
