/*
 * =====================================================================================
 *
 *       Filename:  questão1.c
 *
 *    Description:  questão1.c
 *
 *        Version:  1.0
 *        Created:  25-08-2016 10:43:12
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  		Hélio Paulo
 *         			Jailson Pereira
 *         			Tiago Cauassa
 *         			Rebeca Assunção
 *   Organization:  
 *
 * =====================================================================================
 */
 //1) Impressão de um número natural em base binária
#include <stdio.h>
#include <stdlib.h>

void binario(int);

int main() {
	int n;
	
	printf("informe o numero para conversao: ");
	scanf("%d", &n);
	
    binario(n);
    
    return 0;
}
void binario(int n)
{
    if (n / 2 != 0) {
        binario(n / 2);
    }
    printf("%d", n % 2);
}
