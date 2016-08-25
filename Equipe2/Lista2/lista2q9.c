/*
Equipe 2

Lucas Botinelly
Stephanny Barreto
Hermann Hernani
Paulo Marinho
JÃ©sssica Tavares

//9) A multiplicação de dois nummeros inteiros pode ser feita atraves de somas sucessivas. Proponha um algoritmo recursivo Multip_Rec(n1,n2) que calcule a multiplicacao de dois inteiros.
*/
#include<stdio.h>

int Multip_Rec(int n1,int n2, int acm)
{
	if(n1 == 0)
		return acm;
	else
		Multip_Rec(n1-1, n2, acm+n2);
}

int main()
{
	int num1, num2, acm=0, result;
	scanf("%d", &num1);
	scanf("%d", &num2);
	result = Multip_Rec(num1, num2, acm);
	printf("%d\n", result);
	return 0;
}
