

/*
	Aline Lima
	Amanda Leticia
	Eduardo Azevedo
	Elisandra Oliveira
	Frank Nápolis
	Lucas Almeida
Questão 1 - Impressão de um número natural(decimal) em base binária.*/


#include<stdio.h>

int binario(int n)
{
	if (n / 2 != 0) {
		binario(n / 2);
	}
	printf("%d", n%2);
}

int main(){
	int num1, num2, num3, num4, num5;
	scanf("%d", &num1);
	printf("%d\n", num1);
	scanf("%d", &num2);
	printf("%d\n", num2);
	scanf("%d", &num3);
	printf("%d\n", num3);
	scanf("%d", &num4);
	printf("%d\n", num4);
	scanf("%d", &num5);
	printf("%d\n", num5);
	printf("\nO numero em binario e: %d", binario(num1));
	printf("\nO numero em binario e: %d", binario(num2));
	printf("\nO numero em binario e: %d", binario(num3));
	printf("\nO numero em binario e: %d", binario(num4));
	printf("\nO numero em binario e: %d \n", binario(num5));
}
