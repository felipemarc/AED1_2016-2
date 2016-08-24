/*Equipe 4:

  Fabiola Maciel
  Jefferson Avilar
  Matheus Obando
  Kaue Fontes
*/

void imprime(int vetor[], int end);
void combina(int vetor[], int start, int end);

#include <stdio.h>

int main()
{
  int vetor[] = {1,2,3,4,5,6}, tam;

  tam = sizeof(vetor)/sizeof(int);

  combina(vetor, 0, tam);

  return 0;
}

// Gera combinações com repetição
void combina(int vetor[], int start, int end)
{
  if (start == end-1)
    {
      imprime(vetor, end);
    }
  else
    {
      for (int x = start; x < end; x++)
        {
          // Ordena o vetor lexograficamente
          int aux = vetor[x];

          vetor[x] = vetor[start];
          vetor[start] = aux;

          combina(vetor, start + 1, end);

          vetor[start] = vetor[x];
          vetor[x] = aux;
        }
    }
}

void imprime(int vetor[], int end)
{
  for (int i = 0; i < end; i++)
  {
    printf("%d ", vetor[i]);
  }
  printf("\n");
}
