/* 	equipe 01:
	Diogo Abreu
	Fernando Calderaro
	Leticia Mota
	Rodrigo Oliveira
	Thailana Neves

	exercicio 01
	Impressão de um número natural em base binária
*/

#include <stdio.h>
#include <stdlib.h>

//Faz a potenciação de n ao expoente exp

int potencia(int n,int exp)
{
    int x;
    if(exp==0)
    {
        return 1;
    }
    if(exp==1)
    {
        return n;
    }
    x = n * potencia(n,(exp-1));
    return x;
}

/*
Para converter um numero natural para binario, o numero foi dividido sucessivas vezes e o resto de cada divisão
foi multiplicado por potencias de 10, elevadas inicialmente por 0.
exemplo:
numero = 10(natural)= 1010(binario)
| 10%2=0 | 5%2=1 | 2%2=0 | 1%1=1  resto das divisoes
| *10^0  | *10^1 | *10^2 | *10^3  multiplicado por potencias de dez
| =      | =     | =     | =
  0      + 10    + 0     + 1000 = 1010
*/

int binario(int n)
{
    static int u,v;
    int x,y;
    if(v>=1)
    {
        u++;
    }
    if(n==0)
    {
        return 0;
    }
    if(n==1)
    {
        if(v>=1)
        {
            y = potencia(10,u);
            return y;
        }
        return 1;
    }
    v++;
    x = ((n%2)*potencia(10,u)) + binario(n/2);
    return x;
}
int main()
{
    int x,n;
    printf("Informe um numero natural: \n");
    scanf("%d",&n);
    x = binario(n);
    printf("\n%d (Decimal) = %d (Binario)",n,x);
    return 0;
}