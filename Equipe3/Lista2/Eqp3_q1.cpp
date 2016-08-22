//*** Equipe 3 ***
//Caique Martins
//Elisandra Oliveira
//Frank Nápolis

//Lista 2 - Recursividade
//Questão 1 - Impressão de um número natural(decimal) em base binária.

#include <stdio.h>
#include <conio.h>

int main (){

	int n,bin,aux;

	printf ("Este programa traduz o numero da base decimal para a base binaria.");
	bin=aux=0;

	printf ("Digite um numero na base decimal : ");
	scanf ("%d",&n);

	while (n > 0){

		aux = n / 2;
		bin = n%2;
		printf ("%d",bin);


		n = n / 2;
		getch();
	}
	return 0;
}


