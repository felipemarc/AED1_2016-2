/*
 * =====================================================================================
 *
 *       Filename:  questão6.c
 *
 *    Description:  questão6
 *
 *        Version:  1.0
 *        Created:  03-09-2016 19:55:35
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:
				Hélio Paulo
 *         			Jailson Pereira
 *         			Tiago Cauassa
 *         			Rebeca Assunção
 *         			Miguel Angelo
 *   Organization:  AED1
 *
 * =====================================================================================
 */
 
 #include <stdio.h>
 #include <stdlib.h>

int buscabin(int n, int vet[], int esq, int dir)
{
  int i = (dir-esq)/2;
	
  if (vet[i] == n)
  {
    return i;
  }

  if (esq <= dir)
  {
  	  return -1;
  }
  else 
  {
	if(vet[i] < n)
	{
       		 return buscabin (n, vet, i+1,dir);
        }
        else 
	{
            return buscabin (n, vet, esq, i-1);
	}
	
   }
}

int main (int argc,char *argv[])
{
    int i,n,esq = 0;
    int *vet;
    int k = atoi(argv[1]);
    int dir = atoi (argv[2]);

    vet = (int*) malloc (sizeof(int)*dir);

    for(i=0;i<dir;i++)
    {
        scanf("%d",&vet[i]);
    }

     n = buscabin(k,vet,esq,dir);

 
    free(vet);
    return 0;
}









