/*
Equipe 2

Hermann Hernani
Lucas Botinelly
JÃ©ssica Tavares
Paulo Marinho
Stephanny Barreto

6) O maximo divisor comum dos inteiros x e y eÌ o maior inteiro que é divisivel por  x e y. 
Escreva uma função recursiva mdc em C, que retorna o maximo divisor comum de x e y. O mdc de x e y eÌ definido como segue: se y eÌ igual a 0, entao mdc(x,y) é x; caso contrario, mdc(x,y) eÌ mdc (y, x%y), onde % é o operador resto.

*/
#include<stdio.h>

int mdc(int num1, int num2)
{
	if(num2 == 0)
		return num1;
	else
		return mdc(num2, num1%num2);
}

int main()
{
	int num1, num2, result;
	scanf("%d", &num1);
	scanf("%d", &num2);
	result = mdc(num1, num2);	
	printf("%d\n", result);	
	return 0;
}
