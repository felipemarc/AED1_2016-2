/*
Equipe2
Hermann Hernani
Jessica Tavares
Lucas Botinelly
Paulo Marinho
Stephanny Barreto

1) Impressão de um número natural em base binária
*/

#include <stdio.h>
#include <stdlib.h>
 
int main() {
 int n;
 int r;
 
 printf("Digite o numero: ");
 scanf("%d", &n);
 
 if(n == 1) {
  printf("%d\n", n);
 }
 else {
        printf("Forma binaria: ");
  do {
   r = n % 2;
   printf("%d", r);
   n = n / 2;
  } while(n >= 1);
  printf("\n");
 }
 system("pause");
}


