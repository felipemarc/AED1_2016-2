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
