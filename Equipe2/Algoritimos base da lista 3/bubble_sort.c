// Lista 3, questao 1.

#include <stdio.h>

int main(void)
{
   	int tamanho;
	printf("Informe o tamanho do vetor: ");
	scanf("%d,", &tamanho);
    int vetor[tamanho];
    int n, x;
    for(n=0; n<tamanho; n++)
	{
    	scanf("%d", &x);
		vetor[n] = x;	
	}
    int i,j,r,aux;
    for(i=tamanho-1; i >= 1; i--) 
    {  
        for(j=0; j < i ; j++) 
        {
            if(vetor[j]>vetor[j+1]) 
            {
                aux = vetor[j];
                vetor[j] = vetor[j+1];
                vetor[j+1] = aux;
            }
        }
    }
	printf("\n");	
	printf("O vetor de forma ordenada eh: \n");
    for(r = 0; r < tamanho; ++r)
    {
        printf("%d ",vetor[r]);
    }
}
