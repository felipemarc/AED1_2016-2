#include <stdio.h>
#include <stdlib.h>

int divide(int *v, int inicio, int final);
void conquista(int *v, int inicio, int fim);

int main(int argc, char *argv[])
{
    int tam = atoi(argv[1]);
    int *v;

    v = (int *) malloc (sizeof(int) * tam);
    
    for (int i = 0; i < tam; i++)
    {
      scanf("%d", &v[i]);
    }

    conquista(v,0,tam);
        
    for (int i = 0; i < tam; i++)
    {
      printf("%d ", v[i]);
    }
    
    
    return 0;
}


/*
  O algoritmo "quicksort" consiste na idéia
  de dividir e conquistar
*/

int divide(int *v, int inicio, int final)
{

  int esquerda, direita, pivo, aux;
  esquerda = inicio;
  direita = final;
  pivo = v[inicio];
  while(esquerda < direita)
  {
    // Avança a posição da esquerda
    while(v[esquerda] <= pivo)
    {
      esquerda++;
    }
    // Recua a posição da direita
    while(v[direita] > pivo)
    {
      direita--;
    }
    if(esquerda < direita)
    {
      // Troca esquerda e direita
      aux = v[esquerda];
      v[esquerda] = v[direita];
      v[direita] = aux;
    }
  }
  v[inicio] = v[direita];
  v[direita] = pivo;
  return direita;
}

/* Quicksort propriamente dito */
void conquista(int *v, int inicio, int fim)
{
  int pivo;

  if (fim > inicio)
  {
    // Separa em duas partições
    pivo = divide(v,inicio,fim);
    /*  Chama a função para as duas metades */
    conquista(v,inicio,pivo-1);
    conquista(v,inicio+1,pivo);
  }
}

