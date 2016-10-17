#include <stdio.h>
#include <stdlib.h>

int str_to_ascii(char nome[100])
{
	printf("Digite seu nome: ");
	gets(nome);
	
	printf("O nome armazenado foi: %s", nome);
	
	
	return 0;
	
}


int main()
{
	char nome[100];

	str_to_ascii(nome);
	getch();

	return 0;
}
