/*
	Aline Lima
	Amanda Leticia
	Eduardo Azevedo
	Elisandra Oliveira
	Frank Nápolis
	Lucas Almeida

Questão 1 - Impressão de um número natural(decimal) em base binária.*/

#include <stdio.h>
#include <conio.h>
#define MAX 100

int main ()

{
	int n, aux, i, cont, vbin[MAX];

	printf ("\nEste programa traduz o numero da base decimal para a base binaria. \n");
	printf ("\nDigite um numero na base decimal : ");
	scanf ("%d",&n);
	
	aux=0;
	cont = 0;
	
	for (i = 0; n > 1; i++)
	
  		{
			aux = n / 2;
			vbin[i] = n%2;
			n = aux;
			cont++;

  			if(n == 1)
  			
			   {
  					vbin[i+1] = 1;
  					cont++;
  					break;
			 	}
  		
  	}
  	
//printf("\nImprimindo o Vetor em ordem inversa:\n\n");
	printf ("\nO numero decimal digitado na base binaria : \n\n");
	
  	for (i = cont - 1; i >= 0; i--)
  	
  		{
    		printf("%d ", vbin[i]);
    	
    }
    	
	printf("\n");

}


