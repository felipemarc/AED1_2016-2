/*Equipe 4:

  Fabiola Maciel
  Matheus Obando
  Kauê Fontes
  Jefferson Avilar

  2) Multiplicação de dois números naturais, através de somas sucessivas (Ex.: 6 ∗ 4 = 4+4+4+4+4+4)
*/

/* Teste/Explicação

   mult_recursiva(3,5) = 5 + mult_recursiva(2,5)
                       = 5 + 5 + mult_recursiva(1,5)
                       = 5 + 5 + 5
                       = 15

*/

#include <stdio.h>

int mult_recursiva(int x, int y);

int main()
{

  int x, y;

  printf("Insira o primeiro valor: "); scanf("%d", &x);
  printf("Insira o segundo valor: "); scanf("%d", &y);

  printf("%d\n", mult_recursiva(x,y));

  return 0;
}

int mult_recursiva(int x, int y)
{

  if (x == 0)
    {
      return 0;
    }

  if (x == 1)
    {
      return y;
    }

  return (y + mult_recursiva(x-1, y));
}
