//*** Equipe 3 ***
//Elisandra Oliveira
//Frank Nápolis

//Lista 2 - Recursividade
//Questão 2 - Multiplicação de dois números naturais, através de somas
// sucessivas (Ex.: 6 * 4 = 4+4+4+4+4+4)

#include <stdio.h>
#include <math.h>
 
int soma (int a, int b, int soma){
	int i=0;
	if (a == 0)
		return 0;
	if (a >= 1)
		while(i < a){
  			soma = soma + b;
  			i++;
		}
		return (soma);
}
  
int main()
 
{
	int n1, n2, s, result;
	
	printf("Digite um numero a ser somado: ");
  	scanf(" %d", &n1);
 
  	printf("Digite a quantidade de somas: ");
  	scanf(" %d", &n2);
  
	result = soma(n1, n2, s);
	
	printf("\nResultado: \n");
	printf(" %d X %d = %d", n2, n1, result);
	printf("\n");
	
}

