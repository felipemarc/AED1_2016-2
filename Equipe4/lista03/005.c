
//Equipe 4:
  //Fabiola Maciel
 // Jefferson Avilar
  //Matheus Obando
  //Alerrandro Barreto

//5) Implemente a Busca Sequencial em C



#include <stdio.h>
int acha_valor(int tam, int v[tam], int n);

int main()
{

	int tam = 10; int v[tam]; 
	
	int pesquisar;
	
	scanf("%d", &pesquisar);
	
	for (int i = 0; i < tam; i++)
		scanf("%d", &v[i]);
		
	for (int i = 0; i < tam; i++)
		printf("%d ", v[i]);
		
	printf("\n");

	printf("%d\n", acha_valor(tam, v, pesquisar));

	return 0;
}

int acha_valor(int tam, int v[tam], int n)
{
	for (int i = 0; i < tam; i++)
	{
		if (v[i] == n)	{	return i;}
	}	
	return -1;
}
