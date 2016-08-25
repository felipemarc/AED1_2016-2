/* 
  equipe:
    Fabiana Bezerra
    Paulo Roberto
    Paulo Silveira
    Pedro Sena
    Sywan Neto
    
  4) Dado um número n, gere todas as possíveis combinações com as n primeiras letras do alfabeto. Ex.: n = 3. Resposta: ABC, ACB, BAC, BCA, CAB, CBA
*/

#include <stdio.h>
#include <strlib.h>
#include <string.h>

typedef char * string;

void troca_carac (string str str[], int pos1, int pos2)
{
  char aux;
  aux = str[pos1];
  str[pos1] = str[pos2];
  str[pos2] = aux;
}

void combinacoes_recursivas (string vet, int n)
{
  int i, tam;
  
  tam = strlen(vet);
  
  if (n == tam) printf("%s \n", vet);
  //Condição de parada; Imprime o vetor
  else
  {
    for(i=n;i<tam;i++)
    {
      troca_carac(vet, n, i);
      combinacoes_recursivas(vet, n+1);
      troca_carac(vet, n, i);
    }
  }
}

int main()
{
  char alfa [] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O',
    'P','Q','R','S','T','U','V','W','X','Y','Z'};
    
  char *vet_aux;
  //Esse vetor receberá os n caracteres para que sejam permutados
  
  int n, i;
  
  scanf("%d",&n);
  
  vet_aux = (char*)malloc(sizeof(char));
  
  for(i=0;i<n;i++) vet_aux[i]=alfa[i];
  //Insere os caracteres no vetor auxiliar
  
  combinacoes_recursivas(vet_aux, n);
  return 0;  
}
