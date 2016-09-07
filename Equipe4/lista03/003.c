#include <stdio.h>
#include <stdlib.h>

#define tam1 10000
#define tam2 100000
//#define tam3 1000000

void bolha(int v[], int tam);
void gera_numeros(int n, int v[]);

int main() {

  int v1[tam1], v2[tam2];//, v3[tam3];

  // 10000 números ordenados em ordem crescente
  gera_numeros(tam1, v1);
  bolha(v1, tam1);

  for (int i = 0; i < tam1; i++)
  {
    printf("%d ", v1[i]);
  }

  printf("\n\n");

  // 100000 números ordenados em ordem crescente
  gera_numeros(tam2, v2);
  bolha(v2, tam2);

  for (int i = 0; i < tam2; i++)
  {
    printf("%d ", v2[i]);
  }

  printf("\n\n");
/*
  // 1000000 números ordenados em ordem crescente
  gera_numeros(tam3, v3);
  bolha(v3, tam3);

  for (int i = 0; i < tam3; i++)
  {
    printf("%d ", v3[i]);
  }

  printf("\n");
*/
  return 0;
}

void bolha(int v[], int tam)
{
  int continua, aux, fim = tam;

  do {
    continua = 0;
    for (int i = 0; i < fim - 1; i++)
    {
      if (v[i] > v[i+1])
      {
        aux = v[i];
        v[i] = v[i+1];
        v[i+1] = aux;
        continua = i;
      }
    }
    fim--;
  } while(continua != 0);
}

void gera_numeros(int n, int v[])
{
  srand(time(NULL));

  for (int i = 0; i < n; i++)
  {
    v[i] = rand() % 1000000;
  }
}
