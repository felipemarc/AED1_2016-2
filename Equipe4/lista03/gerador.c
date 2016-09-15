#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void gera_aleatorio(int *v, int tam);
void gera_crescente(int *v, int tam);
void gera_decrescente(int *v, int tam);
void imprime(int *v, int tam);

int main(int argc, char *argv[])
{

    int tam = atoi(argv[1]);
    int *v;

    v = (int *) malloc (sizeof(int) * tam);

    
    if (strcmp("a",argv[2]) == 0 || strcmp("A",argv[2]) == 0)
    {
        gera_aleatorio(v,tam);
        imprime(v,tam);
    }
    if (strcmp("d",argv[2]) == 0 || strcmp("D",argv[2]) == 0)
    {
        gera_decrescente(v,tam);
        imprime(v,tam);
    }
    if (strcmp("c",argv[2]) == 0 || strcmp("C",argv[2]) == 0)
    {
        gera_crescente(v,tam);
        imprime(v,tam);
    }

    printf("\n\n");

    return 0;
    
}

void gera_aleatorio(int *v, int tam)
{
  /* Faz com que o relógio seja ztam1erado 
  toda vez que a função é rodada*/
  srand(time(NULL));

  for (int i = 0; i < tam; i++)
  {
    // Gera valores aleatórios de 0 até tam
    v[i] = rand() % tam;
  }
}

void gera_crescente(int *v, int tam)
{
    for (int i = 0; i < tam; i++)
    {
        v[i] = i;
        printf("%d ", i);
    }
}

void gera_decrescente(int *v, int tam)
{

    int i = 0;

    while (tam != 0)
    {
        v[i] = tam;
        printf("%d ", tam);
        i++;
        tam--;
    }
}

void imprime(int *v, int tam)
{
    for (int i = 0; i < tam; i++)
    {
        printf("%d ", v[i]);
    }
}