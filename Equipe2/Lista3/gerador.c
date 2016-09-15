#include<stdio.h>
#include<stdlib.h>

void gera(int tam, char tipo)
{
	if(tipo == 'c' || tipo == 'C')
	{
		printf("%d", tam);
		printf("\n");
		for(i=0; i<tam; i++)
			printf("%d\n", i);
	}
	if(tipo == 'D' || tipo == 'd')
	{
		printf("%d", tam);
		printf("\n");
		for(i=tam; i>0; i--)
			printf("%d\n", i);
	}
	if(tipo == 'A' || tipo == 'a')
	{
		printf("%d", tam);
		printf("\n");
		for(i=0; i<tam; i++)
			printf("%d\n", rand() % 10000);
	}			
}	
int main()
{
	int tam;
	char tipo;
	scanf("%d", &tam);
	scanf("%c", &tipo);
	gera(tam, tipo);
	return 0;
}
