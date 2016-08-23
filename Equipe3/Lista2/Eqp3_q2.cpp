//*** Equipe 3 ***
//Caique Martins
//Elisandra Oliveira
//Frank Nápolis

//Lista 2 - Recursividade
//Questão 2 - Multiplicação de dois números naturais, através de somas
// sucessivas (Ex.: 6 * 4 = 4+4+4+4+4+4)

#include <stdio.h>
#include <math.h>
 
int soma (int a, int b, int soma){
	int i;
	for(i = 1; i <= a; i++){
  		soma = soma + b;
	}
	printf("\nResultado: \n");
	printf(" %d X %d = %d", a, b, soma);
	printf("\n");
}
 
 
int main()
 
{
	int n1, n2, s, result;
	
	printf("Digite o segundo numero que sera somado: ");
  	scanf(" %d", &n2);
 
  	printf("Digite a quantidade de somas: ");
  	scanf(" %d", &n1);
  
	s = soma(n1, n2, result);
	
}

