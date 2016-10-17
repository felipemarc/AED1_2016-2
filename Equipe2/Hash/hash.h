#include <stdio.h>
#include <stdlib.h>

//Função para tratar as saidas do programa
void out(char opcao)
{

	switch (opcao)
	{
		case 1: //imprime inteiros 
			printf("%d", x);
			break;	
		case 2: //imprime char
			printf("%c", x);
			break;
		case 3: //pula uma linha
			printf("\n");
			break;
}

/* Utilizando um ponteiro auxiliar
* remove os espaços no vetor e
* adiciona no vetor auxiliar */
void remove_espacos (char *string, char *aux)
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
int string_para_ascii(const char *str)
{
	int *aux;
	int i=0, num;
	aux = (int*)malloc(sizeof(int));
    
    while(str[i])
    {
    	aux[i] = str[i];
    	i++;
    }	
    
    i = 0;
	
	while(str[i])
	{
		num+=aux[i++];
	}
	return num;
}



