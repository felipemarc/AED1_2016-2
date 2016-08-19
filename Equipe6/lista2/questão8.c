/*
 * =====================================================================================
 *
 *       Filename:  questão8.c
 *
 *    Description:  Fibonacci
 *
 *        Version:  1.0
 *        Created:  19-08-2016 14:18:06
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author: 	Hélio Paulo
 *         			Jailson Pereira
 *         			Thiago Cauassa
 *         			Rebeca Assunção
 *   Organization:  
 *
 * =====================================================================================
 */

#include<stdio.h>

int fibo(int x)
{
	if(x == 1)
	{
		return 0;
	}
	if (x == 2)
	{
		return 1;
	}
	if (x > 2)
	{
		return fibo(x-1)+fibo(x-2);
	}
}

int main (int argc,const char argv[]){

	int x, f;
	scanf("%d",&x);
	f = fibo(x);
	printf("%d\n",f);
	
	
	return 0;
}
