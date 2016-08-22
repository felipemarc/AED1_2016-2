//Equipe 3
//Alerrandro Barreto
//Elisandra Oliveira
//Frank Nápolis
//Thiago Cauassa
//Caique Martins
	


//4. Dados dois vetores x e y, ambos com n elementos, determinar o produto escalar desses vetores.




#include <stdio.h>


int main()
{
	int tam,i,j;
	int vetx[tam],vety[tam];
	int vetF[tam];
	
	printf("Digite o Tamanho do Vetor:");
	scanf("%d",&tam);
	
	for(i=0;i<tam;i++)
	{
		printf("Digite o Valores do Vetor x");
		scanf("%d",&vetx[i]);
	}
	
	for(j=0;j<tam;j++)
	{
		printf("Digite o Valores do Vetor y");
		scanf("%d",&vety[j]);
	} 
	
	for(i=0;i<tam;i++)
	{
		vetF[i] = vetx[i]*vety[i];
	}
	
	for(int i=0;i<tam;i++)
	{
		printf("O Valores escalares dos vetores são:%d",vetF[i]);
		printf("\n");

	}
	
	
}
