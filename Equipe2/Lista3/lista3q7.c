/*
Hermann Hernani
Jéssica Tavares
Lucas Botinelly
Paulo Marinho
Stephanny Barreto
7) Pesquise e Implemente a Busca Sequencial com Sentinela em C
*/

#include <stdio.h>

int sentinela(int chave, int tam, int vec[])
{
	  int i;
	  vec[tam]=chave;
	
	  for(i=0; chave!=vec[i]; i++)
	  {
	
	      if(i == tam-1)
	      {
		      return -1;
	      }
		}
	  return 1;
}

int main()
{
    int tam, retorno;
    scanf("%d",&tam);
	  int vec[tam], chave, i, valor;
	  scanf("%d",&chave);
	
	  for(i=0; i < tam; i++)
	  {
	       scanf("%d",&valor);
	       vec[i]=valor;
	  }
		
	  retorno = sentinela(chave, tam, vec);
	  if(retorno == 1)
		    printf("O numero está no vetor!\n");
	  if(retorno == -1)
		    printf("O numero não está no vetor!\n");
	
	return 0;
}
