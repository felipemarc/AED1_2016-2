/*
	Aline Lima
	Amanda Leticia
	Eduardo Azevedo
	Elisandra Oliveira
	Frank Nápolis
	Lucas Almeida

Questão 2 - Multiplicação de dois números naturais, através de somas
sucessivas (Ex.: 6 * 4 = 4+4+4+4+4+4).
*/

#include<stdio.h>
#include<stdlib.h>

multiplicacao(int a, int b)
{
	if(a==1)
		return (b);
	else
		return(b+multiplicacao((a-1),b));
}

int main()
{
	int a,b;
	
	printf("Digite n1: ");
	scanf("%i", &a);
	printf("Digite n2: ");
	scanf("%i", &b);
	
	printf("O resultado da multiplicacao e: %i", multiplicacao(a,b));
}
