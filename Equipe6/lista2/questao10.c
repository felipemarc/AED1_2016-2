/*
 * =====================================================================================
 *
 *       Filename:  modelo.c
 *
 *    Description:  questão10
 *
 *        Version:  1.0
 *        Created:  19-08-2016 14:07:12
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:              Hélio Paulo
 *         			Jailson Pereira
 *         			Thiago Cauassa
 *         			Rebeca Assunção
 *   Organization:  AED 1
 *
 * =====================================================================================
 */

#include<stdio.h>
#include<stdlib.h>
#define TAM 10

void imprime(int matriz[10][10]){
	int i,j;
	for(i=0;i<9;i++){
		for(j=0;j<9;j++){
			printf("%d",matriz[i][j]);
		}
	   printf("\n");
	}
}
void loadMaze(char maze[tam][tam])
{
	char ch;
	int i=0,j=0;
	FILE *fp;
  	fp = fopen("maze.txt","r" );
    if(fp == NULL)
          printf("Erro, nao foi possivel abrir o arquivo\n");
    else
    {
          while( (ch=fgetc(fp))!= EOF )
          {
                  if (ch != '\n')
                  {
                          maze[i][j] = ch;
                          j++;
                  }else
                  {
                          j = 0;
                          i++;
                  }
          }
    }
    fclose(fp);
}
/*void acha (char matriz[tam][tam]){
	char aux[tam][tam] = {{'0','0','0','0','0','0','0','0','0','0'},
			      {'0','0','0','0','0','0','0','0','0','0'},
                              {'0','0','0','0','0','0','0','0','0','0'},
			      {'0','0','0','0','0','0','0','0','0','0'},
			      {'0','0','0','0','0','0','0','0','0','0'},
}*/

int main(){

	FILE *arquivo = fopen ("maze.txt","r");
	int matriz[9][9];
	int i,j;

	if (arquivo == NULL){
		printf("ERRO\n");
		return 1;
	}
	
	for(i=0;i<9;i++){
		for(j=0;j<9;j++){
			fscanf(arquivo,"%d",&matriz[i][j]);
		}
	}
	imprime(matriz);
	fclose(arquivo);
	return 0;
}
