/*Equipe 4:

  Fabiola Maciel
  Matheus Obando
  Kauê Fontes
  Jefferson Avilar

  1) Impressão de um número natural em base binária
*/

/* Teste/Explicação

   Convertendo 10 para binário

   Divisão      Resto

   10/2 = 5     0 ^ \
   5/2  = 2     1 |  \ Esse seria o valor em base binária(2)
   2/2  = 1     0 |  /
   1/2  = 0     1 | /

*/

#include <stdio.h>

int bin(int n);

int main()
{

  int
    n;

  printf("Insira o valor: "); scanf("%d", &n);

  printf("%d\n", bin(n));

  return 0;
}

/* Converte decimal para binário */
int bin(int n)
{
  if (n < 2)
    {
      return(n);
    }
  return ((10 * bin(n / 2)) + n %  2);
}
