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
//Caso contrário, ele diz para adotar y como novo valor de x, e adotar o resto da divisão de x por y como novo valor de y 
// Uma característica da função com recursividade é que ela chama ela mesma, então observe: 
int mdc(int x,int y) //função mdc e seus dois parâmetros
{  
 if(y == 0)  // se y = 0, vai retornar x
  return x;  
 else        // se não, vai acontecer o que eu expliquei ai em cima: x vai receber y, e y vai receber o resto da divisão de x por y
  return mdc(y,x%y); //Daí você se pergunta, tá mas o que acontece depois? A função se repete como um loop, ou seja:
} // dados os novos valores aos parâmetros, a função recursiva se chama novamente e os novos valores passam pelas mesmas condições:
// y=0? se sim, MDC será x, se não... x<=y e y<-resto de x por y: x%y (sendo % o operador resto)
int main()//início do programa
{
 int x, y; //declarando variáveis inteiras
 printf("Digite x e y:\n");//Solicitando entrada de dados
 scanf("%d""%d", &x, &y);//Lendo e agregando valores as variáveis
 printf("O MDC dos valores eh: %d",mdc(x,y)); //Imprimindo o resultado da função mdc(x,y)
}
