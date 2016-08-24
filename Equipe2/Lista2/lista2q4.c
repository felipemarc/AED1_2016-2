/*
Equipe2
Hermann Hernani
Jessica Tavares
Lucas Botinelly
Paulo Marinho
Stephanny Barreto

4) Dado um número n, gere todas as possíveis combinações com as n primeiras letras do alfabeto.
Ex.: n = 3. Resposta: ABC, ACB, BAC, BCA, CAB, CBA

*/

#include<stdio.h>

int main(void)
{
   int i;
   for(i = 0; i < 256; i++)
   {
      printf("%d %c\n", i, i);
   }
   return 0;
}



//falta terminar
