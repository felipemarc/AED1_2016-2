/*
	Aline Lima
	Amanda Leticia
	Eduardo Azevedo
	Lucas Almeida
	
6) O ma?ximo divisor comum dos inteiros x e y e? o maior inteiro que e? divisi?vel por x e y.
Escreva uma funcao recursiva mdc em C, que retorna o ma?ximo divisor comum de x e y.O mdc de x e y e? definido como segue: 
se y e? igual a 0, enta?o mdc(x,y) e? x; caso contra?rio, mdc(x,y) e? mdc (y, x%y), onde % e? o operador resto0.
*/

#include<stdio.h>

int mdc(int a, int b)
{
	if(b==0)
		return a;
	else
		return(mdc(b,a%b));
}

int main()
{
	int n1, n2;
	
	printf("Digite n1: ");
	scanf("%i", &n1);
	printf("\nDigite n2: ");
	scanf("%i", &n2);
	
	if(n1>n2)
		printf("\n O mdc de %i e %i e: %i", n1, n2, mdc(n1,n2));
	else
		printf("\n O mdc de %i e %i e: %i", n2, n1, mdc(n2,n1));
}
