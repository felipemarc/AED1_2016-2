/*3) Crie um programa em C que gere em um arquivo .txt
- arquivo com 10000 números ordenados em ordem crescente
- arquivo com 10000 números ordenados em ordem descrescente
- arquivo com 10000 números gerados de maneira aleatória
- arquivo com 100000 números ordenados em ordem crescente
- arquivo com 100000 números ordenados em ordem descrescente
- arquivo com 1000000 números gerados de maneira aleatória
- arquivo com 1000000 números ordenados em ordem crescente
- arquivo com 1000000 números ordenados em ordem descrescente
- arquivo com 1000000 números gerados de maneira aleatória
*/
/*Compilar assim : 
gcc lista3q3.c -o /q3
./q3 > saida.txt	
*/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<lista3q1.c>

void gera(int opc)
{
	int i =0;
	if(opc == 1)
	{
		for(i = 0; i<10000; i++)
			printf("%d\n", i);
	}
	if(opc == 2)
	{
		for(i = 10000; i>0; i--)
			printf("%d\n", i);	
	}
	if(opc == 3)
	{
		for(i = 0; i>100000; i--)
		{
		}	
	}
}
