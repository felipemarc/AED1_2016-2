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
#define tam 10

void imprime(char matriz[tam][tam])
{
	int i, j,k;
	printf("   ");

	printf("\n");
	k = 0;
	for ( i = 0; i < tam; i++ )
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
		switch (matriz[i][j])
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
void loadMaze(char matriz[tam][tam])
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
                          matriz[i][j] = ch;
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
void caminho (char matriz[tam][tam],int i,int j){
	if(i==9 && j==8){
		printf("FIM!");
		return 0;
	}
	matriz[0][0] = '2';
	if(matriz[i][j+1] == '0'){
		matriz[i][j+1] = '2';
		caminho(matriz,i,j+1);
	}
	else
	{
		if(matriz[i+1][j] == '0'){
			matriz[i+1][j] = '2';
			caminho(matriz,i+1,j);
		}
		else
		{
			if(matriz[i-1][j] == '0')
			{
				matriz[i-1][j] == '2';
				caminho(matriz,i-1,j);
			}
			else
			{
				if(matriz[i][j-1] == '0')
				{
					matriz[i][j-1] = '2';
					caminho(matriz,i,j-1);
				}
				else
				{
					printf("nao é por aqui,fim\n");
				}
			}
		}
	}
}

int main(){

	
	int matriz[tam][tam];
	int i=0,j=0;
	printf("\n Tabuleiro Inicial\n");
	loadMaze(matriz);
	imprime(matriz);
	
	return 0;
}
