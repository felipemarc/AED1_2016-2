#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int function(int n, int pot, int bin)
{
	bin += (n % 2)* pot;
	n = n/2;
	pot = pot *10;
	if (n <= 0)
	{
		return bin;
	}
	bin = function(n, pot, bin);
}


int main()
{
	int n, pot, bin;

	printf("Digite um numero: ");
	scanf("%d", n);
	pot = 1;
	bin = 0;
	bin = function(n, pot, bin);

	printf("Resultado: %d ", bin);
	return 0;
}
