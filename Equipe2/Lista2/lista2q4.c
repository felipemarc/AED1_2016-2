/*
Equipe2
Hermann Hernani
Jessica Tavares
Lucas Botinelly
Paulo Marinho
Stephanny Barreto

4) Dado um número n, gere todas as possíveis combinações com as n primeiras letras do alfabeto.
Ex.: n = 3. Resposta: ABC, ACB, BAC, BCA, CAB, CBA

*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void mudar(char *vector, int n1, int n2)
{
    int tmp;
    tmp = vector[n1];
    vector[n1] = vector[n2];
    vector[n2] = tmp;
}

void imprimir(char *vector, int n)
{
    for(int i = 0; i < n; i++)
    {
        printf("%c", vector[i]);
    }
    printf("\n");
}

void permutar(char *vector, int n, int j)
{
    if(j == n)
	{ 
    	imprimir(vector, n);
    }
    else
	{
        for(int i = j; i < n; i++)
        {
            mudar(vector, j, i);
            permutar(vector, n, j+1);
            mudar(vector, i, j);
        }
    }
}

void permutacoes(char *vector, int n){
	permutar(vector, n, 0);
}

int main()
{
    int n;
    char *vector, alfabeto[]="ABCDEFGHIJKLMNOPQRSTUVWXYZ";

    printf("Informe o numero de permutacoes: ");
    scanf("%d", &n);
    
    vector = (char*)malloc(n*sizeof(char));

    for(int i = 0; i < n; i++)
    {
        vector[i] = alfabeto[i];
    }

    permutacoes(vector, n);
	
	system("pause");
}
