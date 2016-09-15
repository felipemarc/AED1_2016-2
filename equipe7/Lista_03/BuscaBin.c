#include <stdio.h>
#include <stdlib.h>
#include <time.h>



int main(int argc, char *argv[])
{

    time_t tinicio, tfim;

    tinicio = time(NULL);

    int max = atoi(argv[1]);
    int chave = atoi(argv[2]);

    int i, vetor[max];

    for (i=0;i < max;i++) scanf("%d", vetor[i]);

    busca_bin(vetor, chave, max);

    tfim = time(NULL);
    tempo = difftime(tinicio, tfim);
    printf("Tempo de execução: %d segundos", tempo);

    return 0;
}

void busca_bin (int vetor[], int chave, int tam)
{
    int i, j, k;
    i = 0; k = tam - 1;

    while(i <= k)
    {
        j = (i + k)/2;
        if(vetor[j] == chave)
        {
            printf ("chave encontrada");
            break;
        }
        if(vetor[j] < chave) i = j + 1;
        else k = j - 1;
    }

    printf("chave não encontrada");
    break;

}

