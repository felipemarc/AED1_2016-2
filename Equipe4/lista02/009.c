/*Equipe 4:

  Fabiola Maciel
  Jefferson Avilar
  Matheus Obando
  Kaue Fontes

9) A multiplicação de dois números inteiros pode ser feita através de somas sucessivas. Proponha um algoritmo recursivo Multip_Rec(n1,n2) que calcule a multiplicação de dois inteiros.

*/

#include<stdio.h>

int produto(int a, int b);//Cabeçalho da função produto
int main()
{
    int a,b;

    printf("Digite o primeiro fator: ");
    scanf("%d",&a);

    printf("\nDigite o segundo fator: ");
    scanf("%d",&b);

    int resultado=produto(a,b);

    printf("%d",resultado);

}


int produto(int a, int b)
{

    if (a==1){

        return b;
    }

    return (b+produto(a-1,b));//função recursiva que retorna o produto como soma de fatores

}
