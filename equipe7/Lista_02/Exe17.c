#include<stdio.h>
#include <string.h>

int vetor(char *v, int tam, int k, int cont)
{
  if(n == 0)
    return cont;
  else if(v[n] == m)
    cont++
    return vetor(v, tam-1, k, cont);
  else
    return vetor(v, tam-1, k, cont);
}


int main ()
{
  int k, aux, cont = 0;
  scanf("%d", &k);
  tam = strlen (v);
  aux = vetor(v, tam, k, cont); 
  printf("O número %d se repete %d vezes", k, aux);
}
