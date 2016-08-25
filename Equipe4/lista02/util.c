#include <stdio.h> 
#include <stdlib.h>
#include <time.h>

/* 
 * Função cria uma matriz 10x10 com elementos 0 ou 1 
 * incrementados randomicamente
 * com p[0][0]=0 e p[9][9]=0
 * retornando a matriz
 */
int **create_matrix()
{
    int **p, i, j;

    srand((unsigned)time(NULL));
 
    p = (int **)malloc(10 * sizeof(int *));
    for ( i = 0; i < 10; i++)
    {
        p[i] = (int *) malloc (10 * sizeof(int));
        for ( j = 0; j < 10; j++)
        {
            //p[i][j] = 0;
            p[i][j] = rand() % 2;
        } 
    }

    p[0][0]=0;
    p[0][1]=1;
    p[0][2]=1;
    p[0][3]=1;
    p[0][4]=1;
    p[0][5]=1;
    p[0][6]=1;
    p[0][7]=1;
    p[0][8]=1;
    p[1][0]=0;
    p[2][0]=0;
    p[3][0]=0;
    p[4][0]=0;
    p[5][0]=0;
    p[6][0]=0;
    p[7][0]=0;
    p[8][0]=0;
    p[8][1]=1;
    p[8][2]=1;
    p[8][3]=1;
    p[8][4]=1;
    p[8][5]=1;
    p[8][6]=1;
    p[8][7]=1;
    p[8][8]=1;
    p[8][9]=1;
    p[9][0]=0;
    p[9][1]=0;
    p[9][2]=0;
    p[9][3]=0;
    p[9][4]=0;
    p[9][5]=0;
    p[9][6]=0;
    p[9][7]=0;
    p[9][8]=0;
    p[9][9]=0;

    return p;
}

/*
int **create_matrix()
{
    int **p,i,j;
    p = (int **)malloc(10 * sizeof(int *));
    for (i=0; i<10; i++)
    {
        p[i] = (int *) malloc (10 * sizeof(int));
        for ( j = 0; j<10; j++)
        {
            p[i][j] = 0;
        }
    }
    return p;
}
*/

void print_matrix (int **m)
{
    int i, j;

    for ( i = 0; i < 10; i += 1 )
    {   
        for ( j = 0; j < 10; j += 1 )
        {
            printf ( "%d  ", m[i][j] );
        }
        printf ( "\n" );
    }
}

int find_exit (int **m, int x, int y)
{
    // se chegar na posição m[9][9] retorna 1
    if (x==9 && y==9)
    {
        return 1;
    }
    // se m[0][0] pode ir uma posição para direita ou uma para abaixo
    // chama a função novamente com a posição atualizada
    // se não não a saida retornando 0
    else if (x==0 && y==0)
    {
        if (m[x][y+1]==0)
        {
            return find_exit(m,x,y+1);
        }
        else if (m[x+1][y]==0)
        {
            return find_exit(m,x+1,y);
        }
        else
        {
            return 0;
        }
    }
    // se m[x][0] pode ir uma posição para direita ou uma para baixo,
    // pode ir uma posição para baixo,
    // ou pode retorna a posição anterior, atualizando a atual com 2
    // se não retorna 0
    else if (x>0 && y==0)
    {
        if(m[x][y+1]==0 && y<9)
        {
            return find_exit(m,x,y+1);
        }
        else if (m[x+1][y]==0 && x<9)
        {
            return find_exit(m,x+1,y);
        }
        else if (m[x-1][y]==0 && x>1)
        {
            m[x][y]=2;
            return find_exit(m,x-1,y);
        }
        else
        {
            return 0;
        }
    }
    // se m[0][y] pode ir uma posição para a direita ou uma para baixo,
    // ou pode retorna para a posição anterior, atualizando a atual com 2
    // se não retorna 0
    else if (x==0 && y>0)
    {
        if(m[x][y+1]==0 && y<9)
        {
            return find_exit(m,x,y+1);
        }
        else if(m[x+1][y]==0 && x<9)
        {
            return find_exit(m,x+1,y);
        }
        else if (m[x][y-1]==0 && y>1)
        {
            m[x][y]=2;
            return find_exit(m,x,y-1);
        }
        else
        {
            return 0;
        }
    }
    // para m[x][y] pode ir uma posição para a direita, ou uma posição
    // para baixo, ou uma posição para cima e ou uma posição para a esquerda
    // se não, retorna 0
    else if (x>0 && y>0)
    {
        if (y<9 && m[x][y+1]==0)
        {
            return find_exit(m,x,y+1);
        }
        else if(x<9 && m[x+1][y]==0)
        {
            return find_exit(m,x+1,y);
        }
        else if (m[x-1][y]==0 && x>0)
        {
            m[x][y]=2;
            return find_exit(m,x-1,y);
        }
        else if (m[x][y-1]==0 && y>0)
        {
            m[x][y]=2;
            return find_exit(m,x,y-1);
        }
        else
        {
            return 0;
        }
    }
    // retorna 0 se não houver solução
    else
    {
        return 0;
    }    
}
