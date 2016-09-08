/*
Equipe2
Hermann Hernani
Jessica Tavares
Lucas Botinelly
Paulo Marinho
Stephanny Barreto
2) Pesquise e implemente em C o QuickSort
*/
#include<stdio.h>
#include<stdlib.h>

void quick_sort(int vet[], int esq, int dir)
{
    int pivo = esq,i,key,j;
    for(i=esq+1;i<=dir;i++)
    {
        j = i;
        if(vet[j] < vet[pivo])
        {
         key = vet[j];
         while(j > pivo)
         {    
            vet[j] = vet[j-1];
            j--;
         }
         vet[j] = key;
         pivo++;        
        }  
    }
    if(pivo-1 >= esq)
        quick_sort(vet,esq,pivo-1);
    if(pivo+1 <= dir)
        quick_sort(vet,pivo+1,dir);
    
 }

int main()
{
    int tam;
    scanf("%d", &tam);
    int vet[tam],i;
    for(i=0;i<tam;i++)
        scanf("%d", &vet[i]);
        
    quick_sort(vet,0,tam-1);
    
    for(i=0;i<tam;i++)
        printf("%d ",vet[i]);    
    printf("\n");
    return 0;
}

