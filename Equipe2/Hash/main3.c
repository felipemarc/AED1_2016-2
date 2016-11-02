#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	FILE *file;
	file = fopen("entrada.txt", "r");
	
	if(file == NULL)
	{
		printf("O Arquivo nao pode ser aberto");
		system("pause");
		return 0;
	}
	
	char vet[1000]; 
	
	while(fgets(vet, 1000, file) != NULL)
	{
		printf("%s", vet);
	}
	
	
	fclose(file);
	
	
	system("pause");
	return 0;
}
