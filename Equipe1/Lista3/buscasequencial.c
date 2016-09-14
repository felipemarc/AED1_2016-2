/* 	Equipe 01:
	Diogo Abreu
	Fernando Calderaro
	Leticia Mota
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
		if(vet[i] == x)
		{
			return 1;
        }
	}
	return -1;
}

int main(int argc, const char * argv[])
{
    int tam;

	printf("Digite o tamanho do vetor: ");
	scanf("%d", &tam);

    int vet[tam], x, i, num, resultado=0;

    printf("Digite os %d valores do vetor:\n", tam);

	for(i=0; i<tam; i++)
	{
		scanf("%d", &num);
		vet[i] = num;
	}

    printf("Digite o valor a ser encontrado: ");
	scanf("%d", &x);

	resultado = busca_seq(vet, tam, x);

	if(resultado == 1)
	{
		printf("O numero %d foi encontrado no vetor.\n", x);
    }
	if(resultado == -1)
	{
		printf("O numero %d não foi encontrado no vetor.\n", x);
    }

    return 0;
}
