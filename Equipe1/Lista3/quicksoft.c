#include <stdio.h>
#include <stdlib.h>

int parciona(int *vetor,int inicio,int fim)
{
    int esquerda,direita,pivo,aux;
    esquerda = inicio;
    direita = fim;
    pivo = vetor[inicio];
    while(esquerda<direita)
    {
        while(vetor[esquerda]<=pivo)
        {
            esquerda++;
        }
        while(vetor[direita]>pivo)
        {
            direita--;
        }
        if(esquerda<direita)
        {
            aux = vetor[esquerda];
            vetor[esquerda] = vetor[direita];
            vetor[direita] = aux;
        }
    }
    vetor[inicio] = vetor[direita];
    vetor[direita] = pivo;
    return direita;
}

void quickSort (int*vetor,int inicio,int fim)
{
    int pivo;
    if(fim>inicio)
    {
        pivo = parciona(vetor,inicio,fim);
        quickSort(vetor,inicio,pivo-1);
        quickSort(vetor,pivo+1,fim);
    }
}

int main(int argc,char *argv[])
{
    int i;
    int *vetor;
    int quantidade_de_numeros = atoi(argv[1]);
    vetor = (int*)malloc(quantidade_de_numeros*sizeof(int));
    for(i=0;i<quantidade_de_numeros;i++)
    {
        scanf("%d",&vetor[i]);
    }

    bubblesort(quantidade_de_numeros,vetor);
    free(vetor);
    return 0;
    }
}
