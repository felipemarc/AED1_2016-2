<<<<<<< HEAD
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
	
=======

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
>>>>>>> dd015056631fff3635d92f0cbe5944e8e07d6c70
}
