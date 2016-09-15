/* 	Equipe 01:
	Diogo Abreu
	Elisandra Oliveira
	Fernando Calderaro
	Leticia Mota
	Luana Andrade
	Rodrigo Oliveira
	Thailana Neves

	Exercicio 01
	Pesquise e implemente em C o BubbleSort.
*/

#include <stdio.h>
#include <stdlib.h>

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