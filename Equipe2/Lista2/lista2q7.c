/*Equipe 2:
Hermann Hernani
Lucas Botinelly
Jéssica Tavares
Paulo Marinho
Stephanny Barreto

7) Escreva uma função recursiva que determine quantas vezes um dígito K ocorree em  
um número natural N. Por exemplo, o dígito 2 ocorre 3 vezes em 762021192.
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
		//printf("%c", vet[cab]);		
		if(dig[0] == vet[cab])
		{
			//printf("Eh Tetra\n");			
			cont++;
		}		
		//printf("N é tetra\n");
		return conta(dig, vet, cont, cab+1, tam);
	}
}

int main()
{
	int num, i, cont = 0, result = 0, cab = 0, tam = 0;
	char aux[10000], dig[1];

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
	/*
	for(i = 0; i<tam; i++)
	{
		printf("%c\n", vet[i]);
	}	
	*/
	//Processamento
	result = conta(dig, vet, cont, cab, tam);

	//saida
	printf("%d\n", result);
	
	return 0;
}
