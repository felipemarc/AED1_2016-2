#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void criar_txt(int quantidade_de_numeros,int vetor[])
{
    int i;
    for(i=0;i<quantidade_de_numeros;i++)
    {
        printf("%d ",vetor[i]);
    }
}

void vetor_aleatorio (int quantidade_de_numeros,int vetor[])
{
    int i,u,achou;
    srand(time(NULL));
    for(i=0;i<quantidade_de_numeros;i++)
    {
        do
        {
            vetor[i] = (rand()%quantidade_de_numeros)+1;
            achou = 0;
            for(u=0;u<i;u++)
            {
                if(vetor[i]==vetor[u])
                {
                    achou = 1;
                    break;
                }
            }
        }while(achou);
    }
}


void imprimir_vetor(int quantidade_de_numeros,int vetor[])
{
    int i;
    for(i=0;i<quantidade_de_numeros;i++)
    {
        printf("%d ",vetor[i]);
    }
}

void vetor_crescente(int quantidade_de_numeros,int vetor[])
{
    int i;
    for(i=0;i<quantidade_de_numeros;i++)
    {
        vetor[i]=i+1;
    }
}

void vetor_decrescente(int quantidade_de_numeros,int vetor[])
{
    int i;
    for(i=quantidade_de_numeros;i>=0;i--)
    {
        vetor[i]=i;
    }
}

int main(int argc,char *argv[])
{
    int x = atoi(argv[1]);
    int y = atoi(argv[2]);
    int *vetor;
    vetor = (int *)malloc(x * sizeof(int));
    if(x<=0)
    {
        printf("\ncomado invalido!\n");
        return 0;
    }

    switch(y)
    {
        case 0:
            vetor_crescente(x,vetor);
            imprimir_vetor(x,vetor);
            criar_txt(x,vetor);
            free(vetor);
            break;
        case 1:
            vetor_decrescente(x,vetor);
            imprimir_vetor(x,vetor);
            criar_txt(x,vetor);
            free(vetor);
            break;
        case 2:
            vetor_aleatorio(x,vetor);
            imprimir_vetor(x,vetor);
            criar_txt(x,vetor);
            free(vetor);
            break;
        default:
            printf("comando invalido!");
            free(vetor);
            break;

    }
    return 0;
}

