/*
 * =====================================================================================
 *
 *       Filename:  questão10.c
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
 *         			Tiago Cauassa
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
				printf("2");
				break;
	   
		}
	}
		printf ( "\n" );
	}
}
/*void loadMaze(char matriz[tam][tam])
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
}*/
int volta(char matriz[tam][tam], int i, int j)
{
	if(matriz[i][j+1] == '0' || matriz[i][j-1] == '0' || matriz[i+1][j] == '0' || matriz[i-1][j] == '0'){
		
		return 0;
	} 
	if(matriz[i][j+1] == 'P')
	{	
		
		matriz[i][j+1] = '3';
		volta(matriz, i, j+1);
	}
	else
	{
		if(matriz[i+1][j] == 'P')
		{		
			
			matriz[i+1][j] = '3';
			volta(matriz, i+1, j);
		}	
		
		else
		{
			if(matriz[i-1][j] == 'P')
			{
				
				matriz[i-1][j] == '3';
				volta(matriz, i-1, j);
			}
			
			else
			{
				if(matriz[i][j-1] == 'P')
				{
					
					matriz[i][j-1] = '3';
					volta(matriz, i, j-1);
				}
				else
				{
					printf("Beco sem saída, fim de jogo !\n");
				}
			}
		}
	}
}

void ver(char maze[tam][tam], int i, int j)
{
	
	if((matriz[i][j+1] == '2' && matriz[i][j-1] == '1' && matriz[i+1][j] == '1' && matriz[i-1][j] == '1')){
		
		volta(matriz, i, j);
	}
	if((matriz[i][j+1] == '1' && matriz[i][j-1] == '2' && matriz[i+1][j] == '1' && matriz[i-1][j] == '1')){
		
		volta(matriz, i, j);
	}
	if((matriz[i][j+1] == '1' && matriz[i][j-1] == '1' && matriz[i+1][j] == '2' && matriz[i-1][j] == '1'))
	{
		
		volta(matriz, i, j);
	}
	if((matriz[i][j+1] == '1' && matriz[i][j-1] == '1' && matriz[i+1][j] == '1' && matriz[i-1][j] == '2'))
	{
		volta(matriz, i, j);
	}
}
int caminha (char matriz[tam][tam]){
	int i =0 , j=0;
	if(i==9 && j==9){
		printf("FIM!\n");
		return 0;
	}
	matriz[0][0] = '2';
	if(matriz[i][j+1] == '0'){
		matriz[i][j+1] = '2';
		ver(matriz,i,j+1);
		caminha(matriz,i,j+1);
	}
	else
	{
		if(matriz[i+1][j] == '0'){
			matriz[i+1][j] = '2';
			ver(matriz,i+1,j);
			caminha(matriz,i+1,j);
		}
		else
		{
			if(matriz[i-1][j] == '0')
			{
				matriz[i-1][j] == '2';
				ver(matriz,i-1,j);
				caminha(matriz,i-1,j);
			}
			else
			{
				if(matriz[i][j-1] == '0')
				{
					matriz[i][j-1] = '2';
					ver(matriz,i,j-1);
					caminha(matriz,i,j-1);
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

	
	char matriz[tam][tam];
	int i=0,j=0;
//	loadMaze(matriz);
	FILE *arquivo;
	arquivo = fopen("maze.txt","r");
	if(arquivo != NULL){
		for(i=0;i<tam;i++){
			for(j=0;j<tam;j++){
				fscanf(arquivo,"%c",&matriz[tam][tam]);
			}
		}
		fclose(arquivo);
	}
	printf("\n Labirinto Inicial\n");
	imprime(matriz);
	caminha(matriz);
	printf("Labirinto com o caminho de saída: \n");
	imprime(matriz);
	
	
	
	return 0;
}
