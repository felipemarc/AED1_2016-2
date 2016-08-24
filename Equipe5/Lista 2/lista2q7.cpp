/*
	Aline Lima
	Amanda Leticia
	Eduardo Azevedo
	Elisandra Oliveira
	Frank Nápolis
	Lucas Almeida

Questão 7 - Escreva uma função recursiva que determine quantas vezes um dígito K
ocorre em um número natural N. Por exemplo, o dígito 2 ocorre 3 vezes em 762021192.*/

#include <stdio.h> 

int x;
int digito=0;
int k=0;
int verifica_qt_digito(int n)
{	
	if(n == 0)
    	return 0;
    else
    {
    	if(digito == (n %10))
    	{
    		k++;
    	}
    	n = n / 10;
    	return verifica_qt_digito(n);
    }
return 0;
}
 
int main()
{

	printf("\nQuantidade de repeticao de um digito em um numero\n");
	printf("\nDigite um numero:  ");
   	scanf("%d",&x);
   	printf("\nDigite o numero(digito) a ser verificado no numero informado:  ");
   	scanf("%d",&digito);
   	
   	verifica_qt_digito(x);
   	
   	printf("\nQuantidade de vezes do digito informado repetido %d \n", k);
	return 0;
}

