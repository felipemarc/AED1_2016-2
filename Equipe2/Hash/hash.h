
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
