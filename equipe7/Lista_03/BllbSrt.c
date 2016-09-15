#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(int argc, char *argv[])
{

    time_t tinicio, tfim;

    tinicio = time(NULL);
    
    int max = atoi(argv[1]);
    
    int tempo, i, vetor [max];


    for (i = 0;i < MAX; i++)
    {
        scanf("%d",&vetor[i])
    }

    bubble(vetor[], MAX);

    tfim = time(NULL);
    tempo = difftime(tinicio, tfim);
    printf("Tempo de execução: %d", tempo);
    return 0;
}

//C:\teste>BllbSrt 10000 < 10000c.txt

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
}
