#include <stdio.h>
#include <stdlib.h>


voi i_o (int i)
{
	char var;
	switch()
	{
		case 1:
			scanf("%c", &var);
		case 2:
			printf("%c", &var);
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
	aux = (int*)malloc(sizeof(int));
    int i=0, num;
    while(str[i])
    {
    	printf("Eh tetra");
    	aux[i] = str[i];
    	i++;
    }	
    i = 0;
	while(str[i])
	{
		printf("Eh tetra");
		num+=aux[i++];
	}
	return num;
}
