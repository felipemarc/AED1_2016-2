#include <stdio.h>
#include <stdlib.h>
#include<string.h>

//Função para tratar as saidas do programa
void out(int opcao, int x, char z)
{
		
	switch (opcao)
	{
		case 1: //imprime inteiros 
			printf("%d", x);
			break;	
		case 2: //imprime char
			printf("%c", z);
			break;
		case 3: //pula uma linha
			printf("teste nessa budega");
			break;
     }
}
/* Utilizando um ponteiro auxiliar
* remove os espaços no vetor e
* adiciona no vetor auxiliar */
void remove_espacos(char *string, char *aux)
{
     int tam;
     tam = strlen(string);
     int count = 0;
     int j = 0;
     
     for (j = 0; j <= tam; j++)
     {
          if (string[j] != ' ')
          {
               aux[count] = string[j];
               count++;
          }
     }
}

//Converte de String para ASCII e soma os valores
int string_para_ascii(char *str)
{
     int *aux;
     int i=0, num, tam;
     tam = strlen(str);
     aux = (int*)malloc(sizeof(int));
     //Joga o vetor de strings num vetor de inteiros   
     for(i = 0; i<tam-1;i++)
               aux[i] = str[i];
     //Faz o somatório dos números da tabela ASCII
     for(i = 0; i<tam-1;i++)     
          num+=aux[i];
     return num;
}

int calcula_mod(int num_mod, int valor)
{
     int num;
     num = valor%num_mod;
     return num;
}



