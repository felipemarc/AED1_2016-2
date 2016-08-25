/*Equipe 4:

  Matheus Obando
  Jefferson Avilar
  Fabíola Maciel
  Alerrandro Barreto

6) O máximo divisor comum dos inteiros x e y é o maior inteiro que é divisível por x e y.
Escreva uma função recursiva mdc em C, que retorna o máximo divisor comum de x e y. O mdc de x e y é definido como segue:
se y é igual a 0, então mdc(x,y) é x;caso contrário, mdc(x,y) é mdc (y, x%y), onde % é o operador resto.*/

#include<stdio.h>

int mdc (int x, int y)
{
    if (y==0)
        return x;
    else
        return mdc(y,x%y);
}

int main ()
{
    int x,y;
    printf("digite o valor de x:");
    scanf("%d", &x);
    printf("digite o valor de y:");
    scanf("%d", &y);
    printf("o mdc de %d e %d e %d",x, y, mdc(x,y));
return 0;
}
