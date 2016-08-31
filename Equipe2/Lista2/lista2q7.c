/*Equipe 2:
Hermann Hernani
Lucas Botinelly
JÃ©ssica Tavares
Paulo Marinho
Stephanny Barreto

7) Escreva uma funçao recursiva que determine quantas vezes um digito K ocorre em  
um numero natural N. Por exemplo, o diÌgito 2 ocorre 3 vezes em 762021192.
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

	int conta(char dig[], int vet[],int cont, int cab, int tam)
	{
		if(cab==tam)
			return cont;
		else
		{
			if(dig[0] == vet[cab])
			{
				cont++;
			}		
			return conta(dig, vet, cont, cab+1, tam);
		}
	}

	int main()
	{
		int num, i, cont = 0, result = 0, cab = 0, tam = 0;
		char aux[1000], dig[1];

		//Entrada de dados
		printf("O dígito a ser procurado: ");
		scanf("%c", &dig[0]);
		printf("O numero : ");
		scanf("%d", &num);

		//Converte de int pra string
		sprintf(aux, "%i", num);
		tam = strlen(aux);
		//Joga num vetor para trabalhar melhor :v		
		int vet[tam];	
		for(i = 0; i<tam; i++)
		{
			vet[i] = aux[i];
		}	
				//Processamento
		result = conta(dig, vet, cont, cab, tam);

		//saida
		printf("%d\n", result);
		
		return 0;
	}
