#include <stdio.h>
#include <stdlib.h>

void bolha(int v[], int tam);

int main() {

  int v[10];

  for (int i = 0; i < 10; i++)
  {
    scanf("%d", &v[i]);
  }

  bolha(v,10);

  for (int i = 0; i < 10; i++)
  {
    printf("%d ", v[i]);
  }
  printf("\n");
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
