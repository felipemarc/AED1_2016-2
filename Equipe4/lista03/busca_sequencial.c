
//Equipe 4:
  //Fabiola Maciel
 // Jefferson Avilar
  //Matheus Obando
  //Alerrandro Barreto

//5) Implemente a Busca Sequencial em C

#include <stdio.h>
#include <stdlib.h>
int acha_valor(int tam, int v[tam], int n);

int main(int argc, char *argv[])
{

	int 
		*v, tam = atoi(argv[1]), pesquisar = atoi(argv[2]);

	v = (int *) malloc (sizeof(int) * tam);
    
    int i;
	
	for (i = 0; i < tam; i++)
		scanf("%d", &v[i]);
		
	for (i = 0; i < tam; i++)
		printf("%d ", v[i]);
		
	printf("\n");

	printf("%d\n", acha_valor(tam, v, pesquisar));

	return 0;
}

int acha_valor(int tam, int v[tam], int n)
{
        int i;

	for (i = 0; i < tam; i++)
	{
		if (v[i] == n)	
		{	
		    return i;
		}
	}	
	return -1;
}
