/*equipe 01:
	Diogo Abreu
	Fernando Calderaro
	Leticia Mota
	Rodrigo Oliveira
	Thailana Neves		
	
	exercicio 03
	Soma de dois números naturais, através de incrementos sucessivos (Ex.: 3 + 2 = ++(++3)).
 
 /Explicação
 
*/


#include<stdio.h>
#include<stdlib.h>

int soma(int a, int b)
{
	if (a!=0)
	{
		soma(a-1,b+1);
	}
	else
	{
		return b;
	}	
}

int main()
{
	int n1, n2;
	
	printf("Digite um numero: \n");
	scanf("%d",&n1);
	printf("Digite um numero: \n");
	scanf("%d",&n2);
	printf("%d \n", soma(n1,n2));
}
