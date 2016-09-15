#include <stdio.h>
#include <time.h>


int main(int argc, char *argv[])
{

    time_t tinicio, tfim;

    tinicio = time(NULL);

    MAX = (int)argv[1];

    int tempo, i, vetor [MAX];


    srand(time(NULL));

    for (i = 0;i < MAX; i++)
    {
        vetor[i] = rand() % 1000000;
    }

    bubble(vetor[], MAX);

    tfim = time(NULL);
    tempo = difftime(tinicio, tfim);
    return 0;
}

//C:\teste>BllbSrt 10000

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
