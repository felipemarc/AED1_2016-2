/*Equipe 4:

  Fabiola Maciel
  Jefferson Avilar
  Matheus Obando
  Kaue Fontes

10) Uma matriz maze de 0s e 1s, de 10X10, representa um labirinto no qual
um viajante precisa encontrar um caminho de maze[0][0] a maze[9][9].
O viajante pode passar de um quadrado para qualquer outro adjacente na mesma
fileira ou coluna, mas não pode saltar quadrados nem se movimentar na diagonal.
Além disso, o viajante não pode entrar num quadrado contendo um 1. maze[0][0]
e maze[9][9] contêm 0s. Escreva uma rotina recursiva que aceite este labirinto maze
 e imprima uma mensagem informando a inexistência de um caminho através do labirinto,
 ou que imprima uma lista de posições representando um caminho de [0][0] a [9][9].
*/

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

  // Adiciona os elementos do arquivo na matriz
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

  // Encerra o arquivo
  fclose(arquivo);

  return 0;
}

// Verifica se há alguma saída no labirinto usando recursividade
bool acha_saida(int matriz[tam][tam], int x, int y, int result[tam][tam])
{
  // Se achar a saída retorna 'TRUE'
  if (x == tam-1 && y == tam-1)
    {
      result[x][y] = 2;
      return true;
    }

  // Verifica se a posição é válida
  if (valido(matriz,x,y) == true)
    {
      // Adiciona a posição a matriz resultado
      result[x][y] = 2;

      // Faz a verificação das linhas
      if (acha_saida(matriz, x+1, y, result) == true)
        {
          return true;
        }
      // Faz a verificação das colunas
      if (acha_saida(matriz, x, y+1, result) == true)
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
  if (x >= 0 && x < tam && y >= 0 && y < tam && matriz[x][y] == 0)
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
