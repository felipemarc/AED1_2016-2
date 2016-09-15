/*
Equipe2
Hermann Hernani
Jessica Tavares
Lucas Botinelly
Paulo Marinho
Stephanny Barreto
1) Pesquise e implemente em C o BubbleSort
*/
#include<stdio.h>
#include<time.h>

void bubble_sort(int vet[], int tam)
{
	int i ,j ,aux;
    for(i=tam-1; i >= 1; i--) 
    {  
        for(j=0; j < i ; j++) 
        {
            if(vet[j]>vet[j+1]) 
            {
                aux = vet[j];
                vet[j] = vet[j+1];
                vet[j+1] = aux;
            }
        }
    }
}

int main()
{
	int tam;
	printf("Tamanho do vetor: ");
    scanf("%d", &tam);
    int vet[tam], i, num;    
	for(i = 0; i<tam; i++)
	{
		scanf("%d", &num);
		vet[i] = num;
	}    
    bubble_sort(vet, tam);
    for(i = 0; i<tam; i++)
    {
		printf("%d ", vet[i]);
	}
	printf("\n");    
	return 0;
}
