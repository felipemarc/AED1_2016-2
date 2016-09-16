/*Equipe 4:
Fabiola Maciel
Jefferson Avilar
Matheus Obando
Alerrandro Barreto
1) Pesquise e implemente em C o BubbleSort
*/
#include <stdio.h>
#include <stdlib.h>

void bolha(int v[], int tam);

int main(int argc, char *argv[]) {

  int tam = atoi(argv[1]);
  int *v;

  v = (int *) malloc (sizeof(int) * tam);
  
    for (int i = 0; i < tam; i++)
  {
    scanf("%d", &v[i]);
  }

  bolha(v,tam);

  for (int i = 0; i < tam; i++)
  {
    printf("%d ", v[i]);
  }
  
  printf("\n");
  return 0;
}

void bolha(int v[], int tam)
{
  int i, continua, aux, fim = tam;

  do {
    continua = 0;
    for (i = 0; i < fim - 1; i++)
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
