#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void bubble(int vetor[], int tam)
{
    int i, aux;
    for(i = 0; i < tam; i++)
        {
            if(vetor[i] > vetor[i+1])
            {
                aux = vetor[i];
                vetor[i] = vetor[i+1];
                vetor[i+1] = aux;
            }
        }
}

int main(int argc, const char *argv[])
{

    time_t tinicio, tfim;

    tinicio = time(NULL);
    
    int max = atoi(argv[1]);
    
    int i, vetor [max];

    float tempo; 

    for (i = 0;i < max; i++)
    {
        scanf("%d",&vetor[i]);
    }

    bubble(vetor, max);

    tfim = time(NULL);
    tempo = difftime(tfim, tinicio);
    printf("Tempo de execução: %d", tempo);
    return 0;
}

//C:\teste>BllbSrt 10000 < 10000c.txt

