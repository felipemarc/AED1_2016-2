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
 *   Organization:  AED 1
 *
 * =====================================================================================
 */
 //6) Implemente a Busca Binária em C
 #include <stdio.h>
 #include <stdlib.h>

int buscabin(int n, int vet[], int esq, int dir){
  int i = (dir-esq)/2;
	
  if (vet[i] == n){
    return i;
  }

  if (esq <= dir)
  {
  	  return -1;
  }
  else 
  {
	if(vet[i] < n){
       		 return buscabin (n, vet, i+1,dir);
        }else 
	{
            return buscabin (n, vet, esq, i-1);
	}
	
   }
}


int main(){
  
  int pos, vet[20], i=0, dir, esq=0 ,n;
    printf ("informe qtde de numeros:");
    scanf("%d",&dir);
    while(i < dir){
      printf ("informe %do numero:",i+1);
      scanf("%d",&vet[i]);
      i++;
    }	
    printf("informe valor da busca: ");
    scanf("%d",&n);

    pos = buscabin(n, vet, esq, dir-1);
    printf("\n %d \n\n", pos+1);

  return 0;
}










