/*Equipe 4:

  Fabiola Maciel
  Jefferson Avilar
  Matheus Obando
  Kaue Fontes

4) Dado um número n, gere todas as possíveis combinações com as n primeiras letras do alfabeto.
   Ex.: n = 3. Resposta: ABC, ACB, BAC, BCA, CAB, CBA
*/

void permuta(char vetor[], int start, int end);
void imprime(char vetor[], int end);

#include <stdio.h>

int main()
{

  char vector[] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};

  int size;

  printf("Insira o valor: ");
  scanf("%d", &size);

  permuta(vector, 0, size);

  return 0;
}

void permuta(char vetor[], int start, int end)
{

  if (start == end-1)
    {
      // Por causa do '\n' tive que criar uma função específica para impressão
      imprime(vetor, end);
    }
  else
    {
      for (int x = start; x < end; x++)
        {
          //Um quase Bubble Sorte para gerar ordenação lexicográfica
          int aux = vetor[x];

          vetor[x] = vetor[start];
          vetor[start] = aux;

          permuta(vetor, start + 1, end);

          vetor[start] = vetor[x];
          vetor[x] = aux;
        }
    }
}

/*
  ERROR ERROR ERROR
void troca(char vetor[], int i, int j)
{
  int aux = vetor[i];
  vetor[i] = vetor[j];
  vetor[j] = aux;
}
*/

// Função usada para imprimir as permutações
void imprime(char vetor[], int end)
{
  for (int i = 0; i < end; i++)
    {
      printf("%2c", vetor[i]);
    }
  printf("\n");
}
