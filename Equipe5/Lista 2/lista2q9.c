/*
	Aline Lima
	Amanda Leticia
	Eduardo Azevedo
	Elisandra Oliveira
	Frank Nápolis
	Lucas Almeida

Questão 9 - A multiplicação de dois números inteiros pode ser feita através
de somas sucessivas. Proponha um algoritmo recursivo Multip_Rec(n1,n2)
que calcule a multiplicaçãoo de dois inteiros.*/

#include<stdio.h>

int mult(int x, int y)
{
	if(y==0 || x==0 )
	{
		return 0;
	}
	else
	{
		return(x+mult(x,y-1));
	}
}

int main()
{

	int n1, n2;

	printf ("\nMultiplicacao atraves de somas sucessivas. \n\n");
	printf("Digite um numero a ser somado: ");
  	scanf(" %d", &n1);
 
  	printf("Digite a quantidade de somas: ");
  	scanf(" %d", &n2);
  
	printf("\nO resultado da multiplicacao e: %d \n", mult(n1,n2));	
}

