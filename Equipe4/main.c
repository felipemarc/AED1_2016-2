//Equipe 4
//Alerrandro Barreto
//Fabiola Maciel
//Matheus Obando




#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include <hash.h>
#define TAM 17770
#define MOD 7



int main(int argc, const char *argv[])
{
	//FILE *file;
	//file = fopen("filmes.txt", "r");
	
	//if(file == NULL)
	//{
	//	printf("O Arquivo nao pode ser aberto");
	//	system("pause");
	//	return 0;
	//}
	
	//char vetor[100]; 
	
	//while(fgets(vetor, 1000, file) != NULL)
//	{
//		printf("%s", vetor);
//	}
	
//	fclose(file);
	
	int key, num, i;
	Movie *movie;
	scanf("%d", &key);
	for(i = 0; i<17750;i++)
	{
		printf("Indice: \n");
		scanf("%d", &movie->indice);
		printf("Ano: \n");
		scanf("%d", &movie->ano);
		printf("Nome: \n");
		scanf("%s", movie->nome);
	}
	num = funcao_hash(key);
	calcular(num, movie);
	imprimir();	
    return 0;
}

