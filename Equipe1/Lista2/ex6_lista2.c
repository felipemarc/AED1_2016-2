/* equipe 01:
	Diogo Abreu
	Fernando Calderaro
	Leticia Mota
	Rodrigo Oliveira
	Thailana Neves		
	
	exercicio 06
	
	O máximo divisor comum dos inteiros x e y é o maior inteiro que é divisível por x e y. 
	Escreva uma função recursiva mdc em C, que retorna o máximo divisor comum de x e y. 
	O mdc de x e y é definido como segue: se y é igual a 0, então mdc(x,y) é x; caso contrário, mdc(x,y) é mdc (y, x%y), onde % é o operador resto.

*/

#include <stdio.h>

int mdc(int a, int b)
{
	int k;
	if(b==0)
	{
		return a;
	}else
	{
		k = mdc(b,(a%b));
		return k;
	}
}

int main()
{
	int x, y, z;
	printf("FUNCAO MDC\n");
	
	printf("Insira o valor de X: ");
	scanf("%d",&x);
	printf("Insira o valor de Y: ");
	scanf("%d",&y);
	
	z = mdc(x,y);
	
	printf("MDC de %d e %d: %d", x,y,z);
	return 0;
}