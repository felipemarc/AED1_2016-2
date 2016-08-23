/* 	equipe 01:
	Diogo Abreu
	Fernando Calderaro
	Leticia Mota
	Rodrigo Oliveira
	Thailana Neves

	exercicio 07
	Escreva uma função recursiva que determine quantas vezes um dígito K ocorre em um número natural N.
	Por exemplo, o dígito 2 ocorre 3 vezes em 762021192.
*/

#include <stdio.h>

//variaveis globais
int k=0;
int vezes=0;

//funcao que verifica a quantidade de vezes que k ocorre em n
int quantidade_k(int n)
{
    if(n==0)
        return 0;
    else
    //compara o resto com k pois o resto sempre vai ser o
    //ultimo numero de n
    {
    if(k==(n%10))
    {
        vezes++;
    }
    n=n/10;
    return quantidade_k(n);
    }
    return 0;
}

int main()
{
    int n;

    printf("-Programa que verifica a ocorrencia de um digito em um determinado numero-\n\n");
    //o valor maximo que o tipo int recebe e 2147483647 que tem 10 digitos
    printf("Digite um numero de ate 9 digitos:\n");
    scanf("%d",&n);

    printf("Digite o digito a ser verificado:\n");
    scanf("%d",&k);

    //chama a funcao
    quantidade_k(n);

    //mostra o resultado da verificacao
    if (vezes==0)
        printf("O digito %d nao ocorre em %d", k, n);
    else
        if (vezes==1)
            printf("O digito %d ocorre %d vez em %d", k, vezes, n);
        else
            printf("O digito %d ocorre %d vezes em %d", k, vezes, n);

    return 0;
}
