/*
 * =====================================================================================
 *
 *       Filename:  questão3.c
 *
 *    Description:  questão3
 *
 *        Version:  1.0
 *        Created:  05-09-2016 14:07:12
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:Hélio Paulo
 *         			    Jailson Pereira
 *         			    Tiago Cauassa
 *         			    Rebeca Assunção
 *         			    Miguel Angelo
 
 *   Organization:  AED1
 * =====================================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>



void aleatorio ( int tam)
{
	   int i;
	   srand(tam);
	   for(i=1;i<=tam;i++)
	   {
		     printf("%d\n",rand() % tam);
	   }
}

void crescente (int tam)
{
	   int i;
	   for(i=1;i<=tam;i++)
	   {
		     printf("%d\n",i);
	   }
}

void decrescente (int tam)
{
  	int i;
	  for(i=tam;i>=1;i--) 
	  {
		    printf("%d\n",i);
	  }
}


int main(int argc, char * argv[]) 
{
    int i;
	   int tam = atoi(argv[1]);
	   char *op = (argv[2]);	
	
	 
	 
	 //crescente(tam);
	   if(strcmp(op,"a")== 0)
	   {
		    aleatorio(tam);
    }
	
	  if(strcmp(op,"c") == 0)
	  {
		    crescente(tam);
	  }
     
  	if(strcmp(op,"d") == 0) 
  	{
		    decrescente(tam);
	  }
      return 0;
}
