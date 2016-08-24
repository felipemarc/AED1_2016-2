/*
8) Uma sequência de Fibonacci generalizada, de f0 a f1 é definida como fibg(f0, f1, 0), fibg(f0, f1, 1), fibg(f0, f1, 2), ..., onde:
fibg(f0, f1, 0) = f0
fibg(f0, f1, 1) = f1
fibg(f0, f1, n) = fibg(f0, f1, n-1) + fibg(f0, f1, n-2), se n > 1. Escreva uma função recursiva em C para calcular fibg(f0, f1, n).
*/

#include<stdio.h>

int fibGen(int f0, int f1, int n)
{
	if(n<2)
		return n;
	else
		return fibGen(f0, f1, n-1) + fibGen(f0, f1, n-2);
}
//0, 1, 1, 2, 3, 5, 8
int main()
{
	int f0 = 0, f1 = 1, n, result;
	scanf("%d", &n);
	result = fibGen(f0, f1, n-1);
	printf("%d\n", result);
	return 0;
}
