/* equipe:
    Fabiana Bezerra
    Paulo Roberto
    Paulo Silveira
    Pedro Sena
    Sywan Neto

	
10) Uma matriz maze de 0s e 1s, de 10X10, representa um labirinto no qual um viajante precisa encontrar um caminho de maze[0][0] a maze[9][9]. O viajante pode passar de um quadrado para qualquer outro adjacente na mesma fileira ou coluna, mas não pode saltar quadrados nem se movimentar na diagonal. Além disso, o viajante não pode entrar num quadrado contendo um 1. maze[0][0] e maze[9][9] contêm 0s. Escreva uma rotina recursiva que aceite este labirinto maze e imprima uma mensagem informando a inexistência de um caminho através do labirinto, ou que imprima uma lista de posições representando um caminho de [0][0] a [9][9].
*/

#include <stdio.h>
#include <stdlib.h>

#define MAX 10

int encontra_caminho (int maze[MAX][MAX], int i, int j)
{
    if ((i>MAX)||(j>MAX)) return 0;
    if ((i==MAX)&&(j==MAX)) return 1;
    if (maze[i][j]!=0) return 0;

    //Marcar como parte da solução
    maze[i][j] = 2;

    if (encontra_caminho(maze, i, j+1)==1) return 1;
    if (encontra_caminho(maze, i+1, j)==1) return 1;
    if (encontra_caminho(maze, i, j-1)==1) return 1;
    if (encontra_caminho(maze, i-1, j)==1) return 1;

    //Desmarca como parte da solução
    maze[i][j] = 9;
    return 0;
}

int main(){
    int i, j, n;
    int maze [MAX][MAX];
    while(scanf("%d",&n) != EOF){
        for (i=0;i<n;i++){
            for (j=0;j<n;j++){
                scanf("%d",&maze[i][j]);//cin>>maze[i][j];
            }
        }

        encontra_caminho(maze, 0,0);

        for (i=0;i<n;i++){
            for (j=0;j<n;j++){
                printf("%d ",maze[i][j]);//cout<<maze[i][j]<<" ";
                maze[i][j]=0;
            }
            printf("\n");//            cout<<endl;
        }

        printf("\n");//cout<<endl;
    }
    return 0;
}
