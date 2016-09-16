/* 	Equipe 01:
	Diogo Abreu
	Elisandra Oliveira
	Fernando Calderaro
	Leticia Mota
	Luana Andrade
	Rodrigo Oliveira
	Thailana Neves

	Exercicio 05
	Implemente a Busca Sequencial em C.
*/

#include <stdio.h>
#include <stdlib.h>

int busca_seq(int vet[], int tam, int x)
{
    int i;

	for(i=0; i<tam; i++)
	{
		//se o valor que está no vetor de indice i for igual ao valor digitado pelo terminal retorna 1
		if(vet[i] == x)
		{
			return 1;
        }
	}
	// se não achar o valor retorna -1
	return -1;
}

int main(int argc, const char * argv[])
{
    int tam=10000;

    int vet[tam], x, i, num, resultado=0;
	// usando atoi para pegar um valor através do argv que será passado pelo terminal
	x=atoi(argv[1]);
	//lendo o vetor
	for(i=0; i<tam; i++)
	{
		scanf("%d", &num);
		vet[i] = num;
	}
	 //chamando a função que busca de forma sequencial	
	resultado = busca_seq(vet, tam, x);

	if(resultado == 1)
	{
		printf("O numero %d foi encontrado no vetor.\n", x);
    	}
	if(resultado == -1)
	{
		printf("O numero %d nÃ£o foi encontrado no vetor.\n", x);
    	}

    return 0;
}
