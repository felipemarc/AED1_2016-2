/* 	Equipe 01:
	Diogo Abreu
	Elisandra Oliveira
	Fernando Calderaro
	Leticia Mota
	Luana Andrade
	Rodrigo Oliveira
	Thailana Neves

	Exercicio 04
	Usando o comando time, meça o tempo que os arquivos criados na questão 3 são ordenados pelo BubbleSort e QuickSort implementados nas questões 1 e 2. 
        Cada medição deverá ser reaizada 10 vezes para evitar erros. Calcule o tempo médio, variância e desvio padrão
*/

#include <stdio.h>
#include <stdlib.h>

int parciona(int *vetor,int inicio,int fim)
{
    int esquerda,direita,pivo,aux;
    esquerda = inicio;
    direita = fim;
    pivo = vetor[inicio];
    while(esquerda<direita)
    {
        while(vetor[esquerda]<=pivo)
        {
            esquerda++;
        }
        while(vetor[direita]>pivo)
        {
            direita--;
        }
        if(esquerda<direita)
        {
            aux = vetor[esquerda];
            vetor[esquerda] = vetor[direita];
            vetor[direita] = aux;
        }
    }
    vetor[inicio] = vetor[direita];
    vetor[direita] = pivo;
    return direita;
}

void quickSort (int*vetor,int inicio,int fim)//parciona o vetor, escolhe um pivor e colaca os menores para um lado e os maiores para o outro.repetindo o processo até alcançar seu objetivo
{
    int pivo;
    if(fim>inicio)
    {
        pivo = parciona(vetor,inicio,fim);
        quickSort(vetor,inicio,pivo-1);
        quickSort(vetor,pivo+1,fim);
    }
}

void bubblesort(int quantidade_de_numeros,int * vetor)//troca valores adjacentes ate nao houver mais necessidade
{
    int fim,i,j;
    for (fim=quantidade_de_numeros-1; fim>0; fim--)
    {
        for (i=0; i<fim; i++)
        {
            j= i+1;
            if (vetor[i]>vetor[j])
            {
                int x = vetor[i];
                vetor[i] = vetor[j];
                vetor[j] = x;
            }
        }
    }
}

//executa-se o programa seguido de dois argumentos a quantidade de numeros e a função que ira ser utilizada

int main(int argc,char *argv[])
{
    int i;
    int *vetor;
    int quantidade_de_numeros = atoi(argv[1]);//converte o valor do argumento do tipo char argv[1] para quantidade_de_numeros do tipo int
    int ordem = atoi(argv[2]);//converte o valor do argumento do tipo char argv[2] para ordem do tipo int
    vetor = (int*)malloc(quantidade_de_numeros*sizeof(int));//cria um vetor do tamanho da quantidade de numeros
    for(i=0;i<quantidade_de_numeros;i++)//lê os dados do txt
    {
        scanf("%d",&vetor[i]);
    }

    switch(ordem)//ordem pode ser:(0)bubblesoft e (1)quicksoft
    {
        case 0:
            bubblesort(quantidade_de_numeros,vetor);//ordena usando o bubblesoft
            free(vetor);
            break;

        case 1:
            quickSort(vetor,0,quantidade_de_numeros-1);//ordena usando o quicksoft
            free(vetor);
            break;

        default:
            printf("\ncomando invalido!");
            break;


    }
}
