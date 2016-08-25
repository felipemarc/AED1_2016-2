/*
	Aline Lima
	Amanda Leticia
	Eduardo Azevedo
	Elisandra Oliveira
	Frank Nápolis
	Lucas Almeida

Questão 8 - Uma sequência de Fibonacci generalizada, de f0 a f1 é definida como
fibg(f0, f1, 0), fibg(f0, f1, 1), fibg(f0, f1, 2), ..., onde:
fibg(f0, f1, 0) = f0
fibg(f0, f1, 1) = f1
fibg(f0, f1, n) = fibg(f0, f1, n-1) + fibg(f0, f1, n-2), se n > 1.
Escreva uma função recursiva em C para calcular fibg(f0, f1, n).*/

#include<stdio.h>

int fib(int n)
{
	if(n==1)
	{
		return 0;
	}
	if(n==2)
	{
		return 1;
	}
	if(n>2)
	{
		return fib(n-1)+fib(n-2); 
	}
}

int main()
{
	int n;

	printf ("\nCalculo de Fibonacci. \n");
	printf ("\nDigite um numero inteiro : ");
	scanf ("%d",&n);
	
	printf("\nO fibonacci e: %d \n", fib(n));
}

