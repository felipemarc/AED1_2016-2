#include <stdio.h>
#include <stdlib.h>

int maze[10][10];

int runner(int x, int y, int valor)
{
    if(x==9 && y==9)
        printf("\n FIM\n\n\n");
    else
    {
        if(x>-1 && x<10 && y>-1 && y<10)
        {
            if(maze[x][y+1]==0)
            {
            	//puts("direita");
                maze[x][y]=valor+1;
                runner(x,y+1,maze[x][y]);
            }
           else if(maze[x+1][y]==0)
            {
            //	puts("baixo");
                maze[x][y]=valor+1;
                runner(x+1,y,maze[x][y]);
            }
            else if(maze[x][y-1]==0)
            {
            //	puts("esquerda");
                maze[x][y]=valor+1;
                runner(x,y-1,maze[x][y]);
            }
            
            else if(maze[x-1][y]==0)
            {
            //	puts("cima");
                maze[x][y]=valor+1;
                runner(x-1,y,maze[x][y]);
            }
            else if(maze[x+1][y]==valor)
            {
            //	puts("baixo");
                maze[x][y]=-1;
                runner(x+1,y,valor-1);
            }
            else if(maze[x][y+1]==valor)
            {
            //	puts("baixo");
                maze[x][y]=-1;
                runner(x+1,y,valor-1);
            }
            else if(maze[x][y-1]==valor)
            {
            	printf("%d",valor);
                maze[x][y]=-1;
                runner(x,y-1,valor-1);
            }
            
            else if(maze[x-1][y]==valor)
            {
            	
                maze[x][y]=-1;
                runner(x-1,y,valor-1);
            }
            else {
            	puts("sem soluçãio");
			}
        }
    }
    return 0;
}

int main(int argc, char* argc2[])
{
    int i, k ,x;

    for( k = 0 ; k < 10 ; k++)
    {
        for( x = 0 ; x < 10 ; x++)
        {

            scanf("%d", &maze[k][x]);
            printf("%d ", maze[k][x]);
        }
        printf("\n");
    }

    runner(0,0,0);

    for( k = 0 ; k < 10 ; k++)
    {
        for( x = 0 ; x < 10 ; x++)
        {

           //scanf("%d", &maze[k][x]);
            printf("%d        ", maze[k][x]);
        }
        printf("\n");
    }


    return 0;
}
