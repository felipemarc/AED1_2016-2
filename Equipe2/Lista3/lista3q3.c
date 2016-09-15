/*
Equipe2
Hermann Hernani
Jessica Tavares
Lucas Botinelly
Paulo Marinho
Stephanny Barreto

3) Crie um programa em C que gere em um arquivo .txt

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
#define TAM 1000000
void gera(char opc, int vet[])
{
	int i;
	
	switch(opc)
	{
		case '1':
			for(i=0; i<10000; i++)
			{
					vet[i] = i;
			}
			break;
		case '2':
			for(i=10000; i>0; i--)
				printf("%d ", i);
			break;
		case '3':
			for(i=0; i<1000; i++)
				printf("%d ", rand() % 100);
			break;
		case '4':
			for(i=0; i<100000; i++)
				printf("%d ", i);
			break;
		case '5':
			for(i=100000; i>0; i--)
				printf("%d ", i);
			break;
		case '6':
			for(i=0; i<10000; i++)
				printf("%d ", rand() % 100);
			break;
		case '7':
			for(i=0; i<100000; i++)
				printf("%d ", i);
			break;
		case '8':
			for(i=1000000; i>0; i--)
				printf("%d ", i);
			break;
		case '9':
			for(i=0; i<100000; i++)
				printf("%d ", rand() % 100);
			break;			
	}
}

int main()
{
	char opc;
	int vet;
	scanf("%c", &opc);
	gera(opc, vet);
	printf("\n");
	int n;
	
	if(opc == 1)
	{
		for(n = 0; n < 10000; n++)	
		{
			printf("%d", vet[n]);
		}
	}
	
	return 0;
}
