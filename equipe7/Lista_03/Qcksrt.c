#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void Quick(int vetor[], int inicio, int fim){

   int pivo, aux, i, j, meio;

   i = inicio;
   j = fim;

   meio = (int) ((i + j) / 2);
   pivo = vetor[meio];
   
   if(inicio<fim)
   {
   	pivo = inicio;
   	
   	while(i<j)
   	{
   		while((vetor[i]<=vetor[pivo])&&(i<fim)) i++;
   		
   		while(vetor[j]>vetor[pivo]) j--;
   		
   		if(i<j)
   		{
   			aux = vetor[i];
         	vetor[i] = vetor[j];
         	vetor[j] = aux;	
   		}
   	}
   	
   	aux = vetor[pivo];
    vetor[pivo] = vetor[j];
    vetor[j] = aux;
    Quick(vetor, inicio, j-1);
    Quick(vetor, j+1, fim);	
   	
   }
   
 

}

int main(int argc, const char *argv[])
{

    time_t tinicio, tfim;

    tinicio = time(NULL);

    int max = atoi(argv[1]);

    int tempo, i, vetor [max];


    for (i = 0;i < max; i++)
    {
        scanf("%d", &vetor[i]);
    }
    
    //for (i = 0;i < max; i++) printf("%d", vetor[i]);

    Quick(vetor, 0, max);
	
	for (i = 0;i < max; i++)
	{
   		printf("%d ", vetor[i]);
    }
    
    return 0;
}
