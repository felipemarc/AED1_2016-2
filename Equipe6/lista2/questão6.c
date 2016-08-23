/*
 * =====================================================================================
 *
 *       Filename:  questão6.c
 *
 *    Description:  modelo de cabeçalho
 *
 *        Version:  1.0
 *        Created:  21-08-2016 12:01:12
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Hélio Paulo
 *         			      Jailson Pereira
 *				         	    Rebeca Assunção         			
 *			 		            Tiago Cauassa
 *         			
 *   Organization:  
 *
 * =====================================================================================
 */
 // O máximo divisor comum dos inteiros x e y é o maior inteiro que é divisível por x e y. 
 // Escreva uma função recursiva mdc em C, que retorna o máximo divisor comum de x e y. 
 // O mdc de x e y é definido como segue: se y é igual a 0, então mdc(x,y) é x; caso contrário, mdc(x,y) é mdc (y, x%y), onde % é o operador resto.

#include <stdio.h>

int mdc(int a,int b) 
{  
 if(b == 0)  
  return a;  
 else  
  return mdc(b,a%b); 
} 

int main()
{
 printf("%d",mdc(25,20)); 
}
