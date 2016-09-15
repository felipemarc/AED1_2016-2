/*
Equipe2
Hermann Hernani
Jessica Tavares
Lucas Botinelly
Paulo Marinho
Stephanny Barreto

3) Crie um programa em C que gere em um arquivo .txt
u
1 arquivo com 10000 números ordenados em ordem crescente

2 arquivo com 10000 números ordenados em ordem descrescente

3 arquivo com 10000 números gerados de maneira aleatória

4 arquivo com 100000 números ordenados em ordem crescente

5 arquivo com 100000 números ordenados em ordem descrescente

6 arquivo com 1000000 números gerados de maneira aleatória

7 arquivo com 1000000 números ordenados em ordem crescente

8 arquivo com 1000000 números ordenados em ordem descrescente

9 arquivo com 1000000 números gerados de maneira aleatória

Compilar assim : 
gcc lista3q3.c -o /q3
./q3 > saida.txt	
*/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void gera(char opc)
{
	int i;
	switch(opc)
	{
		case '1':
			printf("10000");
			printf("\n");
			for(i=0; i<10000; i++)
				printf("%d\n", i);
			break;
		case '2':
			printf("10000");
			printf("\n");
			for(i=10000; i>0; i--)
				printf("%d\n", i);
			break;
		case '3':
			printf("1000");
			printf("\n");
			for(i=0; i<1000; i++)
				printf("%d\n", rand() % 10000);
			break;
		case '4':
			printf("100000");
			printf("\n");
			for(i=0; i<100000; i++)
				printf("%d\n", i);
			break;
		case '5':
			printf("100000");
			printf("\n");
			for(i=100000; i>0; i--)
				printf("%d\n", i);
			break;
		case '6':
			printf("10000");
			printf("\n");
			for(i=0; i<10000; i++)
				printf("%d\n", rand() % 100000);
			break;
		case '7':
			printf("100000");
			printf("\n");
			for(i=0; i<100000; i++)
				printf("%d\n", i);
			break;
		case '8':
			printf("1000000");
			printf("\n");
			for(i=1000000; i>0; i--)
				printf("%d\n", i);
			break;
		case '9':
			printf("100000");
			printf("\n");
			for(i=0; i<100000; i++)
				printf("%d\n", rand() % 1000000);
			break;			
	}
}


int main()
{
	char opc;
	scanf("%c", &opc);
	gera(opc);
	printf("\n");
	return 0;
}
