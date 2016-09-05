/*
 * =====================================================================================
 *
 *       Filename:  questao9.c
 *
 *    Description:  lista 2
 *
 *        Version:  1.0
 *        Created:  22-08-2016 20:16:12
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  	Hélio Paulo
 			Jailson Pereira
 			Tiago Cauassa
 			Rebeca Assunção
 *   
 	Organization:  AED1 
 *
 * =====================================================================================
 */

#include<stdio.h>

int multi(int x, int y)
{
	int i;
	if(x == 0 )
	{
		return 0;
	}
	if(x == 1)
	{
		return y;
	}
	return y+multi(x-1,y);
}

int main ()
{
	int x,y,z;
	printf("Digite numero: ");
	scanf("%d",&x);
	printf("Digite outro numero: ");
	scanf("%d",&y);

	z = multi(x,y);
	printf("multiplicação é %d\n",z);
	return 0;

}
