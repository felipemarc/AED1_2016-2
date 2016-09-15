/* 	Equipe 01:
	Diogo Abreu
	Elisandra Oliveira
	Fernando Calderaro
	Leticia Mota
	Luana Andrade
	Rodrigo Oliveira
	Thailana Neves

	Exercicio 06
	Implemente a Busca Binaria em C.
*/

#include<stdio.h>
#include<stdlib.h>
#define TAM 10000
 
int busca(int menor,int maior,int valor, int *vet)
{
    int meio;
 
    if(menor>maior)
    {
    	return(-1);
    }
	
    meio=(maior+menor)/2;
    
    if(valor==vet[meio])
    {
	return(meio);
    }
 
    if(valor<vet[meio])
    {
    	busca(menor,meio-1,valor,vet);
    }
        
    else
    {
    	busca(meio+1,maior,valor,vet);
    }
       
}
 

int main()
{
 
    int menor=0,maior=9,valor=7565,i,vet[TAM];
 
   
    for(i=0;i<TAM;i++)
    {
        scanf("%d",&vet[i]);
    }
    i=busca(menor,maior,valor,vet);
    if(i!=-1)
    {
	printf("Valor %d encontrado no vetor de indice %d",vet[i],i);
    }
	
    else 
    {
	printf("O valor procurado nao existe no vetor");
    }
}






