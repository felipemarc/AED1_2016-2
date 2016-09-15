/*
    Aline Lima
    Amanda Leticia
    Eduardo Azevedo
    Lucas Almeida
 
2) Pesquise e implemente em C o QuickSort
 */

#include <stdio.h>
#include <stdlib.h>


void troca(int *n1, int *n2)
{
    int aux;
    
    aux = *n1;
    *n1 = *n2;
    *n2 = aux;
}



int particao(int vetor[], int p, int r)
{
    int i, j, x, temp;
 
    x = vetor[p];
    
    i = p - 1;
    j = r + 1;
    
    while(1)
    {
        do
        {
            i++;
        }
        while(vetor[i] < x);
        
        do
        {
            j--;
        }
        while(vetor[j] > x);
        
        
        if(i >= j)
        {
            return j;
        }
        
        troca(&vetor[i], &vetor[j]);
        
    }
}


void quicksort(int vetor[], int p, int r)
{
    int q;
    if(p < r)
    {
        q = particao(vetor, p, r);
        quicksort(vetor, p, q);
        quicksort(vetor, q + 1, r);
    }
}




int main(int argc, const char * argv[])
{
    int vetor[10]={9,5,2,6,7,2,1,3,7,4}, i;
    
    quicksort(vetor,0,9);
    
    for (i = 0; i < 10 ; i++)
    {
        printf("%d ", vetor[i]);
    }

}
