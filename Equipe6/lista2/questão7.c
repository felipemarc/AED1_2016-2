/*
 * =====================================================================================
 *
 *       Filename:  questão7.c
 *
 *    Description: Lista 2 
 *
 *        Version:  1.0
 *        Created:  19-08-2016 18:14:52
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author	 Hélio Paula
 			Jailson Pereira
 			Tiago Cauassa
 			Rebeca Assunção
 *   Organization:  AED 1
 *
 * =====================================================================================
 */

#include<stdio.h>
#include<string.h>

int qnt (unsigned long int x,int y)
{
	cont = 0; 
	if(x == 0){
		return cont;
	}
	else {
		if (y == (x%10))
		{
			cont+=1;
		}
		x = x/10;
		return qnt(x,y);
	}
	return 0;

}

int main (int argc,const char *argv[])
{
		unsigned long int x,y,q;
		printf("Digite número: ");
		scanf("%lu\n",&x);
		printf("Digite número: ");
		scanf("%lu\n",&y);
		printf("o número %lu aparece %d vezes",y,qnt(x,y));

	return 0;
}
