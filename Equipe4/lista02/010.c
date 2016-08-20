#include <stdio.h>
#include <stdlib.h>

#define tam 10

int acha_saida(int matrz[tam][tam], int x, int y);
void imprime(int matriz[tam][tam]);

int main()
{
  FILE *arquivo = fopen("matriz.txt", "r");
  int matriz[tam][tam];

  // Verifica arquivo
  if (arquivo == NULL)
    {
      printf("\n\nErro na leitura\n\n");
      return 1;
    }

  // Adiciona os elementos na matriz
  for (int i = 0; i < tam; i++)
    {
      for (int j = 0; j < tam; j++)
        {
          fscanf(arquivo, "%d", &matriz[i][j]);
        }
    }

  printf("\n");
  imprime(matriz);
  printf("\n\n");
  printf("\n%d\n", acha_saida(matriz, tam, tam)); 

  fclose(arquivo);
  
  return 0;

    
}

void imprime(int matriz[tam][tam])
{
// Imprime a matriz
for (int i = 0; i < tam; i++)
  {
    for (int j = 0; j < tam; j++)
      {
        printf("%d ", matriz[i][j]);
      }
    printf("\n");
  }
}



int acha_saida(int matriz[tam][tam], int x, int y)
{
     
  if (x == 9 && y == 9)
    {
      return 1;
    }
  
  else if (x == 0 && y == 0)
    {
      // Quando estiverem na posição[0][0] só pode ir para a direita ou para a esquerda
      if (matriz[x][y+1] == 0)
        {
          return acha_saida(matriz, x, y+1);
        }
      else if (matriz[x+1][y] == 0)
        {
          return acha_saida(matriz, x+1, y);
        }
      else
        {
          // Se não retorna '0'
          return 0;
        }

      // Pode ir para baixo, direita ou voltar p/ a posição anterior
  	}
  	
  else if (x > 0 && y == 0)
    {
      if (matriz[x][y+1] == 0 && y < tam)
        {
          return acha_saida(matriz, x, y+1);
        }
      else if (matriz[x+1][y] == 0 && x < tam)
        {
          return acha_saida(matriz, x+1, y);
        }
      else if (matriz[x-1][y] && x > 1)
        {
          matriz[x][y] = 2;
          return acha_saida(matriz, x-1, y);
        }
      else
        {
          return 0;
        }
    }

  else if (x == 0 && y > 0)
    {
      if (matriz[x][y+1] == 0 && y < tam)
        {
          return acha_saida(matriz, x, y+1);
        }
      else if (matriz[x+1][y] == 0 && x < tam)
        {
          return acha_saida(matriz, x+1, y);
        }
      else if (matriz[x][y-1] && y > 1)
        {
          matriz[x][y] = 2;
          return acha_saida(matriz, x, y-1);
        }
      else
        {
          return 0;
        }
    }

	
  else if (x > 0 && y > 0)
    {
      if (matriz[x][y+1] && y < (tam-1))
        {
          return acha_saida(matriz, x, y+1);
        }
      else if (matriz[x+1][y] == 0 && x < (tam-1))
        {
          return acha_saida(matriz, x+1, y);
        }
      else if (matriz[x][y-1] == 0 && y > 0)
        {
          matriz[x][y] = 2;
          return acha_saida(matriz, x, y-1);
        }
      else if (matriz[x-1][y] == 0 && x > 0)
        {
          matriz[x][y] = 2;
          return acha_saida(matriz, x-1, y);
        }
      else
        {
          return 0;
        }
    }
    
	else
		{
		  return 0;
		}
}
 
