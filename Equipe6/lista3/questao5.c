/*
 * =====================================================================================
 *
 *       Filename:  busca.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  03-09-2016 20:49:52
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */

#include<stdio.h>
#include<stdlib.h>
#define tam 10
int busca_seq (int vet[],int k){
	int i;
//	const int tam = 10;
	for(i=0;i<tam;i++){
		if(vet[i] == k){
			return i;
		}
		else{
			return -1;
		}
	}
}

void print_arquivo(int vet[]){
	int i;
//	const int tam = 10;
	for(i=0;i<=tam-1;i++)
	{
		printf("%d\n",vet[i]);
	}
}

void load (int vet[]){
	int i;
	int ch;
	FILE *arq;
	arq = fopen("teste.txt","r");
	if(arq){
		do{
			for(i=0;i<tam;i++){
				fscanf(arq,"%d",&vet[i]);
			}
		}while( !feof (arq));
	}
}

int main(int argc,const char *argv[]){

		
	//	const int tam = 10;
		int i,num;
		int k;
		int vet[tam];	
		/*  for(i=0;i<=tam-1;i++){
			scanf("%d",&vet[i]);
		}*/
			
		load(vet);
		print_arquivo(vet);
		printf("#########################################\n");
		
	    printf("digite numero a pesquisar:");
		scanf("%d",&k);
		
		//printf("\n#########################################\n");
		//num = busca_seq(vet,k);
		
		//printf("a posicao do numero está em: %d\n",num);

		
	return 0;
}

