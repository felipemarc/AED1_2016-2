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

void imprime(char maze[tam][tam])
{
	int i, j,k;
	printf("   ");

	printf("\n");
	k = 0;
	for ( i = 0; i < tam i++ )
	{
		if (k < tam)
		{
		printf("%d  ", k++);
		}else
		{
		printf("%d ", k++);
		}
		for ( j = 0; j < tam; j++ )
		{
		switch (maze[i][j])
		{
			case '1':
				printf("ꗞ");
				break;
			case '0':
				printf(" ");
				break;
			case '2':
				printf("P");
				break;
	   
		}
	}
		printf ( "\n" );
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

	
	int matriz[tam][tam];
	int i=0,j=0;

	if (arquivo == NULL){
		printf("ERRO\n");
		return 1;
	}
	
	for(i=0;i<9;i++){
		for(j=0;j<9;j++){
			fscanf(arquivo,"%d",&matriz[i][j]);
		}
	}
	printf("\n Tabuleiro Inicial\n");
	imprime(matriz);
	
	return 0;
}
