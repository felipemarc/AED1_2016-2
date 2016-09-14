#include <stdio.h>
#include <stdlib.h>

#define tam1 10000
#define tam2 100000
#define tam3 1000000

/* quicksort */
int divide(int *v, int inicio, int final);
void conquista(int *v, int inicio, int fim);

/* bubbleSort */
void bolha(int v[], int tam);

/* valores aletórios */
void gera_numeros(int *v, int n);

int main() {

  int *v1, *v2, *v3;
  v1 = (int *) malloc (sizeof(int) * tam1);
  v2 = (int *) malloc (sizeof(int) * tam2);
  v3 = (int *) malloc (sizeof(int) * tam3);

  // 10000 números ordenados em ordem crescente
  gera_numeros(v1, tam1);
  //bolha(v1, tam1);
  conquista(v1,0,tam1);

  for (int i = 0; i < tam1; i++)
  {
    printf("%d ", v1[i]);
  }

  printf("\n\n");

  // 100000 números ordenados em ordem crescente
  gera_numeros(v2, tam2);
//  bolha(v2, tam2);
  conquista(v2,0,tam2);

  for (int i = 0; i < tam2; i++)
  {
    printf("%d ", v2[i]);
  }

  printf("\n\n");

  // 1000000 números ordenados em ordem crescente
  gera_numeros(v3, tam3);
  //bolha(v3, tam3);
  conquista(v3,0,tam3);

  for (int i = 0; i < tam3; i++)
  {
    printf("%d ", v3[i]);
  }

  printf("\n\n");

  return 0;
}
/*
void bolha(int v[], int tam)
{
  int continua, aux, fim = tam;

  do {
    continua = 0;
    for (int i = 0; i < fim - 1; i++)
    {
      if (v[i] < v[i+1])
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
*/
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


/* Função usada para gerar valores aletórios */

void gera_numeros(int *v, int n)
{
  /* Faz com que o relógio seja zerado 
  toda vez que a função é rodada*/
  srand(time(NULL));

  for (int i = 0; i < n; i++)
  {
    // Gera valores aleatórios de 0 até 100KKK
    v[i] = rand() % 1000000;
  }
}

/*
- Utilizando o quicksort em comparação com o bubbleSort a 
diferença de desempenho é surreal;
- Utilizar ponteiros ou gera valor aleatório na posição [0];
*/
