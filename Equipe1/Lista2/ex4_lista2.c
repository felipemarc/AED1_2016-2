/* 	equipe 01:
	Diogo Abreu
	Fernando Calderaro
	Leticia Mota
	Rodrigo Oliveira
	Thailana Neves		
	
	exercicio 04
	Dado um número n, gere todas as possíveis combinações com as n primeiras letras do alfabeto. Ex.: n = 3.
	Resposta: ABC, ACB, BAC, BCA, CAB, CBA
*/

#include<stdio.h>
#include<string.h>


imprimir(char *permutacao)
{
	printf("%s\n", permutacao);
}

void troca(char *a, char *b)
{
	char aux;
	aux=*a;
	*a=*b;
	*b=aux;
}


void combinacao(int fim, int inicio, char *letra)
{
	int i;
	if(inicio == fim)
		imprimir(letra);
	else
	{
		for(i=inicio;i<=fim;i++)
		{
			troca((letra+inicio),(letra+i));
			combinacao(fim, inicio+1, letra);
			
		}
	}
}


int main()
{
	char letras[]= {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'},*alfabeto;
	int i, n;
	
	printf("Digite um numero: ");
	scanf("%d", &n);
	alfabeto=malloc(sizeof(char) * n);	
	
	for(i=0;i<n;i++)
	{
		alfabeto[i]=letras[i];
	}
	
	alfabeto[n]='\0';
	
	combinacao(n-1, 0, alfabeto);
	free(alfabeto);
}

