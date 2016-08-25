/*
 * =====================================================================================
 *
 *       Filename:  questão3.c
 *
 *    Description:  questão3
 *
 *        Version:  1.0
 *        Created:  19-08-2016 14:07:12
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Hélio Paulo
 *         			Jailson Pereira
 *         			Tiago Cauassa
 *         			Rebeca Assunção
 *   Organization:  AED 1
 *
 * =====================================================================================
 */

#include <stdio.h>
#include <stdlib.h>


int soma( int a, int b)

{
/*ERROR
int i,soma ;

 for (i=0;i<b;i++)
 {

	soma = ++ a;
}  
	return (soma); ERROR*/
 if(b==1){
  return a+1;
 }else{
  return 1 + soma(a,b-1);
 }
}


main()

{
int soma( int a, int b);
int n1,n2,resultado;


printf("Digite um numero: ");
scanf("%d",&n1);

printf("Digite outro numero: ");
scanf("%d",&n2);

resultado = soma ( n1, n2);

    
printf("A soma eh: %d ", resultado) ;

return 0;
}
