#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int busca_seq_sent (int vetor[], int chave, int tam)
{
    int i, sent = -1;

    vetor[tam] = sent;

    for (i=0;sent!=vetor[i];i++);

    if (i<tam)
    {
        printf("Chave encontrada \n");
        return 1;
    }
    printf("Chave não encontrada \n");
    return 0;
}


int main(int argc, const char *argv[])
{

    time_t tinicio, tfim;

    tinicio = time(NULL);
    
    float tempo;

    int max = atoi(argv[1]);
    int chave = atoi(argv[2]);

    int encontrou, i, vetor[max];

    for (i=0;i < max;i++) scanf("%d", &vetor[i]);

    encontrou = busca_seq_sent(vetor, chave, max);

    tfim = time(NULL);
    tempo = difftime(tfim, tinicio);
    printf("Tempo de execução: %f segundos", tempo);

    return 0;
}
