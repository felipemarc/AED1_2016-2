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
	
	system("pause");
	return 0;
}
