/*
    Aline Lima
    Amanda Leticia
    Eduardo Azevedo
    Lucas Almeida
    6) Implemente a Busca Binária em C
    */
#include <stdio.h>

// Realiza diversas partições meio a meio até encontrar valor desejado
int BuscaBinaria(int vector[], int inicio, int end, int numBusc)
{
   if (end >= inicio)
   {
        int meio = inicio + (end - inicio)/2;
        if (vector[meio] == numBusc)  return meio;

        if (vector[meio] > numBusc) return BuscaBinaria(vector, inicio, meio-1, numBusc);

        return BuscaBinaria(vector, meio+1, end, numBusc);
   }

   return -1;
}

int main(void)
{
	int i=0;
	int search= 2,vectoraysize=8;
	int vector[vectoraysize];
	for(i=0; i<vectoraysize; i++){
		scanf("%d", &vector[i]);

	}
   int n = sizeof(vector)/ sizeof(vector[0]);
   int result = BuscaBinaria(vector, 0, n-1, search);
   (result == -1)? printf("Não ta no array")
                 : printf("O elemento está na posicao %d", result);
   return 0;
}
