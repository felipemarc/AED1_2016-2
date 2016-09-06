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
#include<stdio.h>

int buscaS (int vet[],int k){
	int i;
	for(i=0;;i++){
		if(vet[i] == k){
			return vet[i];
		}
		else{
			return NULL;
		}
	}
}
int main(int argc,const char *argv[]){

		//char url[] = "teste.txt";
		/*  char ch;
		FILE *arq;*/
		const int tam = 10;
		int i;
		int vet[tam];	
		for(i=0;i<tam;i++){
			scanf("%d",&vet[i]);
		}
		print_arquivo(vet);
		/*  arq = fopen(url,"r");
		if( arq == NULL){
			printf("Erro ao abrir arquivo\n");
		}
		else{
			while((ch=fgetc(arq)) != EOF){
			
				putchar(ch);
				
			}
		}
		
		fclose(arq);*/

	return 0;
}

