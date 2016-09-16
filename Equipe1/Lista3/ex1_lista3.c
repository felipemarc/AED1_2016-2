/* 	Equipe 01:
	Diogo Abreu
	Elisandra Oliveira
	Fernando Calderaro
	Leticia Mota
	Luana Andrade
	Rodrigo Oliveira
	Thailana Neves

	Exercicio 01
	Pesquise e implemente em C o BubbleSort.
*/

#include <stdio.h>
#include <stdlib.h>

void bubblesort(int quantidade_de_numeros,int * vetor)
{
    int fim,i,j;
    for (fim=quantidade_de_numeros-1; fim>0; fim--)
    {
        for (i=0; i<fim; i++)
        {
            j= i+1;	//j é usado para comparar sempre com o sucessor da posição em uso
            if (vetor[i]>vetor[j])	//se i for maior, é passado para frente e continua o processo
            {
                int x = vetor[i];		//auxiliar recebe i
                vetor[i] = vetor[j];	//i agora recebe seu o valor do sucessor
                vetor[j] = x;			//j agora recebe o valor de i
            }	//caso fosse em ordem decrescente, vetor[i] teria que ser menor que vetor[j]
        }
    }
}


int main(int argc,char *argv[])
{
    int i;
    int *vetor;
    int quantidade_de_numeros = atoi(argv[1]);
    vetor = (int*)malloc(quantidade_de_numeros*sizeof(int));
    for(i=0;i<quantidade_de_numeros;i++)	//recebe o vetor com os valores que serão usados
    {
        scanf("%d",&vetor[i]);
    }

    bubblesort(quantidade_de_numeros,vetor);
    free(vetor);
    return 0;

}

