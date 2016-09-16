#include <stdio.h>
#include <stdlib.h>

int busca_binaria(int *v, int chave, int Tam);

int main(int argc, char *argv[])
{
	int *v, tam = atoi(argv[1]), chave = atoi(argv[2]);

	v = (int *) malloc (sizeof(int) * tam);
        
	for (int i = 0; i < tam; i++) 
    {
		scanf ("%d", &v[i]);
    }
    
	printf("%d\n", busca_binaria(v, chave, tam));

	return 0;
}

int busca_binaria ( int *v, int chave, int Tam)
{
     int inf = 0;     //Limite inferior  (o primeiro elemento do vetor em C é zero          )
     int sup = Tam-1; //Limite superior  (termina em um número a menos 0 a 9 são 10 numeros )
     int meio;
     while (inf <= sup)
     {
          meio = (inf + sup)/2;
          if (chave == v[meio])
               return meio;
          if (chave < v[meio])
               sup = meio-1;
          else
               inf = meio+1;
     }
     return -1;   // não encontrado
}

