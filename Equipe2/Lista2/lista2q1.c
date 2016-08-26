/*
Equipe2
Hermann Hernani
Jessica Tavares
Lucas Botinelly
Paulo Marinho
Stephanny Barreto

1) Impressao de um numero natural em base binaria
*/

#include <stdio.h>
#include <stdlib.h>

int bin(int num){

	if (num/2 != 0) 
		bin(num/2);

	printf("%d", num%2);
	return 0;
} 

int main() {
 int n;
 scanf("%d", &n);
 bin(n);
 printf("\n");
 system("pause");
}


