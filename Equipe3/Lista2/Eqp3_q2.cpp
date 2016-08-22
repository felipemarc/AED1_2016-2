//*** Equipe 3 ***
//Caique Martins
//Elisandra Oliveira
//Frank Nápolis

//Lista 2 - Recursividade
//Questão 2 - Multiplicação de dois números naturais, através de somas
// sucessivas (Ex.: 6 * 4 = 4+4+4+4+4+4)

#include <stdio.h>
#include <math.h>
 
main()
 
{
  int num1 = 0, num2 = 0, soma = 0, i = 1;
 
  printf("Digite o primeiro numero: ");
  scanf(" %d", &num1);
 
  printf("Digite o segundo numero: ");
  scanf(" %d", &num2);
 
  while (i<=num1)
  {
      printf(" %d X %d = %d", num1, num2, soma);
 
      soma = soma + num2;
      break;
  }
}

