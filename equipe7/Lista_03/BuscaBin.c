#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int busca_bin (int vetor[], int chave, int tam)
{
    int i, j, k;
    int x = 0;
    i = 0; k = tam - 1;

    while(i <= k)
    {
        j = (i + k)/2;
        if(vetor[j] == chave)
        {
            x = 1;
            printf ("chave encontrada");
            
        }
        if(vetor[j] < chave) i = j + 1;
        else k = j - 1;
    }
    if (x==0)
    {
     printf("chave não encontrada");
    }
     return 0;

}

int main(int argc, const char *argv[])
{

    time_t tinicio, tfim;

    tinicio = time(NULL);
    float tempo;
    
    int max = atoi(argv[1]);
    int chave = atoi(argv[2]);


    int try, i, vetor[max];

    for (i=0;i < max;i++) scanf("%d", &vetor[i]);

    try = busca_bin(vetor, chave, max);

    tfim = time(NULL);
    tempo = difftime(tfim, tinicio);
    printf("Tempo de execução: %f segundos", tempo);

    return 0;
}


