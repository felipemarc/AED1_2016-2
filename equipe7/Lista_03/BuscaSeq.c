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

    busca_seq(vetor, chave, max);

    tfim = time(NULL);
    tempo = difftime(tinicio, tfim);
    printf("Tempo de execução: %d segundos", tempo);

    return 0;
}

void busca_seq (int vetor[], int chave, int tam)
{
    int i;

    for (i=0;i<tam;i++)
    {
        if (vetor[i]==chave)
        {
            printf("Chave encontrada \n");
            break;
        }
    }

    printf("Chave não encontrada \n");
    break;
}
