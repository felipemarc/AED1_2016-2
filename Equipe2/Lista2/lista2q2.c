/*
Equipe2
Hermann Hernani
Jessica Tavares
Lucas Botinelly
Paulo Marinho
Stephanny Barreto

2) Mutiplicação de dois numeros naturais atraves de somas sucessivas (Ex.: 6 âˆ— 4 = 4+4+4+4+4+4)
*/

#include<stdio.h>

int multiplica(int n1, int n2,int acm)
{
	if(n1==0)
		return acm;
	else
		return multiplica(n1-1, n2, acm+n2);
}

int main()
{
	int n1, n2, acm = 0;
	scanf("%d", &n1);
	scanf("%d", &n2);
	printf("%d\n", multiplica(n1, n2, acm));
	return 0;
}
