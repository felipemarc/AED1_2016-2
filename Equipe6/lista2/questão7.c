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
 			Thiago Cauassa
 			Rebeca Assunção
 *   Organization:  AED 1
 *
 * =====================================================================================
 */

#include<stdio.h>
#include<string.h>

int qnt (int x,int y)
{
	cont = 0; 
	if(x == 0){
		return 0;
	}
	else {
		if (y == (x%10))
		{
			cont++;
		}
		x = x/10;
		return qnt(x);
	}
	return 0;

}

int main (int argc,const char *argv[])
{
		int x,y,q;
		scanf("%d\n",&x);
		scanf("%d\n",&y);
		q = qnt(x,y);
		printf("o número aparece %d vezes",q);

	return 0;
}
