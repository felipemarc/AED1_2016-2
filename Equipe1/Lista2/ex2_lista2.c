/* 	equipe 01:
	Diogo Abreu
	Fernando Calderaro
	Leticia Mota
	Rodrigo Oliveira
	Thailana Neves		
	
	exercicio 02
	Multiplicação de dois números naturais, através de somas sucessivas (Ex.: 6 ∗ 4 = 4+4+4+4+4+4)
*/

#include <stdio.h>
#include <stdlib.h>

int multiplicacao(int a, int b)
{
    int resultado;
    if(a==0 || b==0)
    {
        return 0;
    }
    if(b==1)
    {
        return a;
    }
    if(b>1)
    {
        resultado = a + multiplicacao(a,(b-1));
    }
    return resultado;
}

int main()
{
    int x,y,z;
    printf("- Multiplicação de dois numeros naturais -\n");
    printf("Informe o valor de X: \n");
    scanf("%d",&x);
    printf("Informe o valor de Y: \n");
    scanf("%d",&y);

    z = multiplicacao(x,y);
    printf("A multiplicação de (%d * %d) = %d \n",x,y,z);
    return 0;
}

