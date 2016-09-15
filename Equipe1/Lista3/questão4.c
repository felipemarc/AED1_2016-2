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

void bubblesort(int quantidade_de_numeros,int * vetor)
{
    int fim,i,j;
    for (fim=quantidade_de_numeros-1; fim>0; fim--)
    {
        for (i=0; i<fim; i++)
        {
            j= i+1;
            if (vetor[i]>vetor[j])
            {
                int x = vetor[i];
                vetor[i] = vetor[j];
                vetor[j] = x;
            }
        }
    }
}

int main(int argc,char *argv[])
{
    int i;
    int *vetor;
    int quantidade_de_numeros = atoi(argv[1]);
    int ordem = atoi(argv[2]);
    vetor = (int*)malloc(quantidade_de_numeros*sizeof(int));
    for(i=0;i<quantidade_de_numeros;i++)
    {
        scanf("%d",&vetor[i]);
    }

    switch(ordem)
    {
        case 0:
            bubblesort(quantidade_de_numeros,vetor);
            free(vetor);
            break;

        case 1:
            quickSort(vetor,0,quantidade_de_numeros-1);
            free(vetor);
            break;

        default:
            printf("\ncomando invalido!");
            break;


    }
}
