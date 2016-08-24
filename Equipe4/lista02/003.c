/*Equipe 4:

  Fabiola Maciel
  Matheus Obando
  Kauê Fontes
  Jefferson Avilar

  */


//3) Soma de dois números naturais, através de incrementos sucessivos (Ex.: 3 + 2 = ++(++3)).


#include<stdio.h>


int soma(int a, int b)
{
        int aux=0;

        if (a==1)

            return 1;


        aux+=soma(a-1,b);//A variavel aux acumula os incrementos de a.

        if (b==1)

            return 1;


        aux+=soma(a,b-1);//A variavel aux acumula os incrementos de b.

        return aux;
}

int main()
{
        int a=2;
        int b=5;

        printf("%d",soma(a,b));

        return 0;
}
