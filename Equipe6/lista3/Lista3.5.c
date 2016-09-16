/*
 * =====================================================================================
 *
 *       Filename:  busca.c
 *
 *    Description:  Busca Sequencial
 *
 *        Version:  1.0
 *        Created:  03-09-2016 20:49:52
 *       Revision:  none
 *       Compiler:  gcc
 *
  *         Author:                 Hélio Paulo
 *         			    Jailson Pereira
 *         			    Tiago Cauassa
 *         			    Rebeca Assunção
 *         			    Miguel Angelo
 *   Organization:  AED1
 *
 * =====================================================================================
 */

#include<stdio.h>
#include<stdlib.h>

int busca_seq (int vet[],int k, int tam)
{
	int i=0;
	while(k != vet[i] && i<tam)
	{
		i =i+1;
	}
	if(i<tam)
	{
		return i;
	}
	else
	{
		return -1;
	}
}

void print_arquivo(int vet[],int tam)
{
	int i;

	for(i=0;i<=tam-1;i++)
	{
		printf("%d\n",vet[i]);
	}
}



int main(int argc,char *argv[])
{

		
	
		int i,num;
		int k = atoi(argv[1]);
		int *vet;
		int tam = atoi(argv[2]); 
		vet = (int*) malloc (sizeof(int)*tam);
	
	
		for(i=0;i<tam;i++)
		{
			scanf("%d",&vet[i]);
		}
		
		num = busca_seq(vet,k,tam);
		
		
		
	return 0;
}

