/*
	Aline Lima
	Amanda Leticia
	Eduardo Azevedo
	Elisandra Oliveira
	Frank Nápolis
	Lucas Almeida

Questão 4 - Dado um numero n, gere todas as possiveis combinacoes com as n primeiras letras do alfabeto.
0   Ex.: n = 3. Resposta: ABC, ACB, BAC, BCA, CAB, CBA*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void imprimir(char *combinacoes)
{
	printf("%s\n", combinacoes);
}

//faz a troca de letras
void troca(char *a, char *b)
{
	char aux;
	aux=*a;
	*a=*b;
	*b=aux;
}


void comb(int end, int start, char *letrinhas)
{
	int i;
	if(start == end)
		imprimir(letrinhas);
	else
	{
		for(i=start;i<=end;i++)
		{
			troca((letrinhas+start),(letrinhas+i)); //faz a troca das letras no vetor
			comb(end, start+1, letrinhas); //chama a funcao novamente
		}
	}
}


int main()
{
	char letras[]="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char *alfabeto;
	int i, n;
	
	printf("Informe o numero de combinacoes: ");
	scanf("%i", &n);
	
	alfabeto=malloc(sizeof(char) * n);	
	
	for(i=0;i<n;i++)
	{
		alfabeto[i]=letras[i];
	}
	
	alfabeto[n]='\0'; //fim da string
	
	comb(n-1, 0, alfabeto);
	free(alfabeto);
}

