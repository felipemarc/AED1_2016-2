/*
 * =====================================================================================
 *
 *       Filename:  busca.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  03-09-2016 20:49:52
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */

#include<stdio.h>
#include<stdio.h>

int buscaS (int vet[],int k){
	int i;
	for(i=0;;i++){
		if(vet[i] == k){
			return vet[i];
		}
		else{
			return NULL;
		}
	}
}
