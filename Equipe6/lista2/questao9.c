/*
 * =====================================================================================
 *
 *       Filename:  questao9.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  22-08-2016 20:16:12
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */

#include<stdio.h>

int soma(int x, int y){
	int i;
	if(x && y == 0 ){
		return 0;
	}
	if(x && y >= 1){
		for(i=0;i<=x;i++){
			return  ;
		}
	}
}

int main (){
	int x,y,z;
	scanf("%d",&x);
	scanf("%d",&y);

	z = soma(x,y);
	printf("a soma sucessiva é %d",z);
	return 0;

}
