/*
Equipe2
Hermann Hernani
Jessica Tavares
Lucas Botinelly
Paulo Marinho
Stephanny Barreto

3) Multiplicação de dois numeros naturais, atraves de incrementos sucessivos (Ex.: 3 + 2 = ++(++3)).
*/

#include<stdio.h>
int soma_incremental(int x, int y)
{
	if (x==0)
		return y;
	else	
		return soma_incremental(x-1, y+1);

}
int main()
{
	int x, y;
	scanf("%d", &x);
	scanf("%d", &y);

	printf("%d\n", soma_incremental(x,y));
	return 0; 
}
