#include <stdio.h>
#include <stdlib.h>

/* Utilizando essa biblioteca para não ser necessária a criação
   de variáveis globais ou algo parecido */
#include <stdbool.h>

/* Tamanho da matriz quadrada */
#define tam 10

/* Chamando as funções que serão usadas */
bool valido(int matriz[tam][tam], int x, int y);
bool acha_saida(int matriz[tam][tam], int x, int y, int result[tam][tam]);
bool if_acha_saida(int matriz[tam][tam]);
void imprime(int matriz[tam][tam]);

int main()
{
  
  FILE *arquivo = fopen("matriz.txt", "r");
  int matriz[tam][tam];

  // Verifica se o arquivo "existe"
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

  printf("Matriz de entrada\n");
  imprime(matriz);
  printf("\n");
  if_acha_saida(matriz);

  fclose(arquivo);
  
  return 0;  
}

// Verifica se há alguma saída no labirinto usando recursividade
bool acha_saida(int matriz[tam][tam], int x, int y, int result[tam][tam])
{
  // Se achar a saída retorna 'TRUE'
  if (x == tam-1 && y == tam-1)
    {
      result[x][y] = 1;
      return true;
    }

  // Verifica se a posição é válida
  if (valido(matriz,x,y) == true)
    {
      // Adiciona a posição a matriz resultado
      result[x][y] = 1;

      // Move uma posição na direção de 'x'
      if (acha_saida(matriz, x+1, y, result) == true)
        {
          return true;
        }

      // Se movendo na direção de 'x' não retornar alguma solução então volta e move na direção de 'y'
      if (acha_saida(matriz, x, y+1, result))
        {
          return true;
        }

      /* Se a posição nao for válida adiciona 0 na matriz resutlado */
      result[x][y] = 0;
      return false;
    }
  return false;
}

/* Função para verificar se x,y é uma posição válida na matriz */
bool valido(int matriz[tam][tam], int x, int y)
{

  /* Se a coordenada fizer parte da matriz */
  if (x >= 0 && x < tam && y >= 0 && y < tam && matriz[x][y] == 1)
    {
      return true;
    }

  return false;
}

/* Confirma usando a função 'acha-saida', e se realmente há 
uma solução no labirinto ele imprime o caminho encontrado */
bool if_acha_saida(int matriz[tam][tam])
{
	// Matriz usada para impressão do resultado, matriz 'result' 
  int result[tam][tam] = { {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
                           {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
                           {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
                           {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
                           {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
                           {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
                           {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
                           {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
                           {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
                           {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}};

  /* Vai retornar 'TRUE' e o caminho se for possível encontrar uma saída para o labirinto
     ou 'FALSE' e alguma mensagem se não for possível */ 
  if(acha_saida(matriz, 0, 0, result) == false)
    {
      printf("Solução inexistente!!\n");
      return false;
    }

  printf("Caminho encontrado!!\n");
  imprime(result);
  return true;
}

/* Função usada para imprimir as matrizes de entrada e a resultado */
void imprime(int matriz[tam][tam])
{

  for (int i = 0; i < tam; i++)
    {
      for (int j = 0; j < tam; j++)
        {
          printf("%d ", matriz[i][j]);
        }
    printf("\n");
    }
}
