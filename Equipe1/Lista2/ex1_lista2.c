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

int numero;

int binario(int x)
{
    int y,k;
    static int contador = 1;
    static int w = 0;

    if(x==0)
    {
        return 0;
    }
    if(x==1)
    {
        if(w==1)
        {
        contador = contador * 10;
        return (1 * contador);
        }
        else
        {
            return 1;
        }
    }
    if(x>1)
    {
        w = 1;
        contador = contador  * 10;
        y = (x%2) * contador + binario(x/2);
    }
    return y;
}

int main()
{
    int metade_numero ,resultado, z;
    printf("- Conversão de numero decimal para binario -\n");
    printf("Informe o valor do numero: \n");
    scanf("%d",&numero);

    if(numero==1)
    {
        metade_numero = numero;
    }
    else
    {
        metade_numero = numero/2;
    }

    resultado = binario(metade_numero);
    z = (numero)%2;
    printf("%d (decimal) = %d (binario)",numero,(resultado + z));
    return 0;
}



