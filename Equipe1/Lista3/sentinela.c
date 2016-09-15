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
#define tam 10000


int busca(int vet[],int k)
{
	vet[tam] = k;
	int i = 0;
	while(k != vet[i])
	{
		i=i+1;
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



int main(int argc,const char *argv[])
{
	int i,num,k,vet[tam];	
	
	k=atoi(argv[1]);	
	for(i=0;i<=tam-1;i++)
	{
		scanf("%d",&vet[i]);
	}
	num = busca(vet,k);
	printf("O valor foi encontrado na possição %d \n",num);

}
