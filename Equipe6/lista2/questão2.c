/*
 * =====================================================================================
 *
 *       Filename:  questão2.c
 *
 *    Description:  questão2.c
 *
 *        Version:  1.0
 *        Created:  25-08-2016 11:02:42
 *       Revision:  none
 *       Compiler:  gcc
 *
 *  Author:  		Hélio Paulo
 *         			Jailson Pereira
 *         			Tiago Cauassa
 *         			Rebeca Assunção
 *   Organization:  AED 1
 * =====================================================================================
 */
 //2) Multiplicação de dois números naturais, através de somas sucessivas (Ex.: 6 ∗ 4 = 4+4+4+4+4+4)
 
#include <stdio.h>
#include <stdlib.h>

int multi (int,int);

int main(){
	int x, y;
	
	printf("informe x:");
	scanf("%d",&x);
	printf("informe :");
	scanf("%d",&y);
	
	printf("multiplicacao por somas sucessivas: %d", multi(x,y));
	
	return 0;
}

int multi(int x, int y){
	
	if(x==0){
		return 0;
	}
	return y + multi(x-1, y);
	
}
