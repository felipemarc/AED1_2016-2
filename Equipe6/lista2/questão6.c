/*
 * =====================================================================================
 *
 *       Filename:  questão6.c
 *
 *    Description:  questão6
 *
 *        Version:  1.0
 *        Created:  21-08-2016 12:01:12
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Hélio Paulo
 *         Jailson Pereira
 *	Rebeca Assunção         			
 * Tiago Cauassa
 *         			
 *   Organization:  AED 1
 *
 * =====================================================================================
 */
 // O máximo divisor comum dos inteiros x e y é o maior inteiro que é divisível por x e y. 
 // Escreva uma função recursiva mdc em C, que retorna o máximo divisor comum de x e y. 
 // O mdc de x e y é definido como segue: se y é igual a 0, então mdc(x,y) é x; caso contrário, mdc(x,y) é mdc (y, x%y), onde % é o operador resto.

#include <stdio.h>
//Algoritmo de Euclides, este algoritmo existe há mais de 3 mil anos e é usado para encontrar o MDC de dois número
                     //Se explica simplesmente por: dado dos números (x e y), se o segundo (y) for igual a 0, então o MDC é o primeiro deles, o x.
                     //Caso contrário ele diz para adotar y como novo valor de x, e vice-versa ou seja, de (x,y, será (y,x) 
int mdc(int x,int y) //função int mdc e seus dois parâmetros
{  
 if(y == 0)  
  return x;  
 else  
  return mdc(y,x%y); 
} 

int main()
{
 int x, y;
 printf("Digite x e y:\n");
 scanf("%d""%d", &x, &y);
 printf("O MDC dos valores eh: %d",mdc(x,y)); 
}
