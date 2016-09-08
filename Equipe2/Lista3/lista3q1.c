#include<stdio.h>

int main()
{
    int vet[10] = {10,9,8,7,6,5,4,3,2,1};
    int tam = 10, i ,j ,r ,aux;
    
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

    for(r = 0; r < 10; ++r)
    {
        printf("%d\n",vetor[r]);
    }
	return 0;
}
