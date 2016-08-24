/*
	Aline Lima
	Amanda Leticia
	Eduardo Azevedo
	Elisandra Oliveira
	Frank Nápolis
	Lucas Almeida

Questão 6 - O máximo divisor comum dos inteiros x e y é o maior inteiro que é
divisiível por x e y. Escreva uma funçãoo recursiva mdc em C, que retorna o
máximo divisor comum de x e y. O mdc de x e y é definido como segue: se y é
igual a 0, então mdc(x,y) é x; caso contrário, mdc(x,y) é mdc (y, x%y),
onde % e´ o operador resto.*/

#include <stdio.h> 
#include <stdlib.h> 

int mdc(int x, int y)
{
	if(y == 0)
		return x;
	else {
		return mdc(y, x%y); 
	} 
}

int main()
{
	int n1, n2, result;
	
	printf("\nCalculo do MDC entre 2 numeros.\n");
	printf("\nDigite o primeiro inteiro: ");
  	scanf(" %d", &n1);
 
  	printf("\nDigite o segundo inteiro: ");
  	scanf(" %d", &n2);
  
	result = mdc(n1, n2);
	
	printf("\n\n");
	printf("MDC de %d e %d = %d\n", n1, n2, mdc(n1, n2)); 
	
	return 0;
} 



