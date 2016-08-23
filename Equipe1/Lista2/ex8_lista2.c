/* 	equipe 01:
	Diogo Abreu
	Fernando Calderaro
	Leticia Mota
	Rodrigo Oliveira
	Thailana Neves

	exercicio 08
	Uma sequência de Fibonacci generalizada, de f0 a f1 é definida como fibg(f0, f1, 0), fibg(f0, f1, 1), fibg(f0, f1, 2), ..., onde:
	fibg(f0, f1, 0) = f0
	fibg(f0, f1, 1) = f1
	fibg(f0, f1, n) = fibg(f0, f1, n-1) + fibg(f0, f1, n-2), se n > 1.
	Escreva uma função recursiva em C para calcular fibg(f0, f1, n).
*/

#include <stdio.h>

int fibg(int n)
{
	if (n==0)
		return 0;
	if (n==1)
		return 1;
	if (n>1)
	{
		return fibg(n-1)+fibg(n-2);
	}
	return 0;
}

int main()
{
	int i, n;

	printf("-Programa que calcula e mostra uma Sequência de Fibonacci generalizada-\n\n");
	printf("Digite um número:\n");
	scanf("%d",&n);

	for(i=0;i<=n;i++)
	{
        printf("Sequência de Fibonacci generalizada: %d\n",fibg(i+1));
	}
	return 0;
}
