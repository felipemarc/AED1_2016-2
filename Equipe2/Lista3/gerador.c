/*
Equipe2
Hermann Hernani
Jessica Tavares
Lucas Botinelly
Paulo Marinho
Stephanny Barreto
*/

#include<stdio.h>
#include<stdlib.h>

void gera(int tam, char tipo)
{
  int i;
	if(tipo == 'c' || tipo == 'C')
	{
	
		printf("%d", tam);
		printf("\n");
		
		for(i=0; i<tam; i++)
			printf("%d\n", i);
	}
	else if(tipo == 'D' || tipo == 'd')
	{
	
		printf("%d", tam);
		printf("\n");
		
		for(i=tam; i>0; i--)
			printf("%d\n", i);
	}
	else if(tipo == 'A' || tipo == 'a')
	{
	
		printf("%d", tam);
		printf("\n");
		
		for(i=0; i<tam; i++)
			printf("%d\n", rand() % 10000);
	}			
  else
    printf("Argumento Inválido! \n");
}	


int main(int argc, const char *argv[])
{	
	
	gera(atoi(argv[1]), argv[2][0]);
	
	return 0;
}
