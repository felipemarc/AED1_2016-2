/*
    Aline Lima
    Amanda Leticia
    Eduardo Azevedo
    Lucas Almeida
 
5) Implemente a Busca Sequencial em C
 */

#include <stdio.h>
#include <stdlib.h>
int vetor[10];


int busca_seq(int x)
{
    int i;
    
    for(i=0;i<10;i++)
    {
        if(vetor[i]==x)
            return 1;
    }
    return 0;
}

int main(int argc, const char * argv[])
{
    int i;
    
    for(i=0;i<10;i++)
    {
        scanf("%d", &vetor[i]);
    }
    
    if(busca_seq(20)==1)
    {
        printf("\n O numero foi encontrado.\n\n");
    }
    else
    {
        printf("\n O numero nao foi encontrado.\n\n");
    }
}
