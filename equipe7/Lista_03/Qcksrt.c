#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void Quick(int vetor[], int inicio, int fim){

   int pivo, aux, i, j, meio;

   i = inicio;
   j = fim;

   meio = (int) ((i + j) / 2);
   pivo = vetor[meio];

   do{
      while (vetor[i] < pivo) i = i + 1;
      while (vetor[j] > pivo) j = j - 1;

      if(i <= j){
         aux = vetor[i];
         vetor[i] = vetor[j];
         vetor[j] = aux;
         i = i + 1;
         j = j - 1;
      }
   }while(j > i);

   if(inicio < j) Quick(vetor, inicio, j);
   if(i < fim) Quick(vetor, i, fim);

}

int main(int argc, const char *argv[])
{

    time_t tinicio, tfim;

    tinicio = time(NULL);

    int max = atoi(argv[1]);

    int tempo, i, vetor [max];


    for (i = 0;i < max; i++)
    {
        scanf("%d", &vetor[i]);
    }

    Quick(vetor, 0, max);

    tfim = time(NULL);
    tempo = difftime(tfim, tinicio);
    return 0;
}

