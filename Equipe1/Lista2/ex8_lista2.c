/* 	equipe 01:
	Diogo Abreu
	Fernando Calderaro
	Leticia Mota
	Rodrigo Oliveira
	Thailana Neves

	exercicio 08
	Uma sequência de Fibonacci generalizada, de f0 a f1 é definida como fibg(f0, f1, 0), fibg(f0, f1, 1), fibg(f0, f1, 2), ..., onde:
	fibg(f0, f1, 1) = f0
	fibg(f0, f1, 2) = f1
	fibg(f0, f1, n) = fibg(f0, f1, n-1) + fibg(f0, f1, n-2), se n > 1.
	Escreva uma função recursiva em C para calcular fibg(f0, f1, n).
*/

#include <stdio.h>

int fibg(int f0,int f1,int n)
{
	int resultado;
	if(n==0)
		return f0;
	if(n==1)
		return f1;
	if(n>1)
		return fibg(f0,f1,n-1)+fibg(f0,f1,n-2);
}

int main()
{
	int f0,f1,n,i,resultado;
	printf("insira valores para os limites f0 e f1: ");
	scanf("%d %d",&f0,&f1);
	printf("insira o tamanho da sequencia: ");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		printf("%d ", fibg(f0,f1,i));
	}		
	
	return 0;
}
