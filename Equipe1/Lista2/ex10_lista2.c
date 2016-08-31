/* 	equipe 01:
	Diogo Abreu
	Fernando Calderaro
	Leticia Mota
	Rodrigo Oliveira
	Thailana Neves		
	
	exercicio 10
	Uma matriz maze de 0s e 1s, de 10X10, representa um labirinto no qual um viajante precisa encontrar um caminho de 
	maze[0][0] a maze[9][9]. O viajante pode passar de um quadrado para qualquer outro adjacente na mesma fileira ou coluna, 
	mas não pode saltar quadrados nem se movimentar na diagonal. Além disso, o viajante não pode entrar num quadrado contendo um 1.
	maze[0][0] e maze[9][9] contêm 0s. Escreva uma rotina recursiva que aceite este labirinto maze e imprima uma mensagem informando a 		inexistência de um caminho através do labirinto, ou que imprima uma lista de posições representando um caminho de [0][0] a [9][9].
*/

#include <stdio.h>
#include <stdlib.h>
int a=0;
int b=0;

int andar(int i,int j,int matriz[][10])
{
    int u,v;
    int *x,*y;
    x=&a;
    y=&b;
    while(matriz[i][j+1]==0)
    {
        matriz[i][j]=2;
        j++;
        *x=i;
        *y=j;
        printf("\n%d %d\n",a,b);
        if(i==9 && j==9)
        {
            printf("\nSaiu do labirinto\n");
            return 0;
        }
    }
    while(matriz[i+1][j]==0)
    {
        matriz[i][j]=2;
        i++;
        *x=i;
        *y=j;
        printf("\n%d %d\n",a,b);
        if(i==9 && j==9)
        {
            printf("\nSaiu do labirinto\n");
            return 0;
        }
    }
    while(matriz[i][j-1]==0)
    {
        matriz[i][j]=2;
        j--;
        *x=i;
        *y=j;
        printf("\n%d %d\n",a,b);
        if(i==9 && j==9)
        {
            printf("\nSaiu do labirinto\n");
            return 0;
        }
    }
    while(matriz[i-1][j]==0)
    {
        matriz[i][j]=2;
        i--;
        *x=i;
        *y=j;
        printf("\n%d %d\n",a,b);
        if(i==9 && j==9)
        {
            printf("\nSaiu do labirinto\n");
            return 0;
        }
    }
    if(matriz[i+1][j]!=0 && matriz[i-1][j]!=0 && matriz[i][j+1]!=0 && matriz[i][j-1]!=0)
    {
        matriz[i][j]=2;
        for(i=0;i<10;i++)
        {
            printf("\n");
            for(j=0;j<10;j++)
            {
                printf("%d ",matriz[i][j]);
            }
        }
        printf("\nestá cercado!\n");
        return 0;
    }

    *x=i;
    *y=j;
    printf("\n%d %d\n",a,b);
    return 1;
}

int caminho(int matriz[][10])
{
    int u,v,z;
    int *x,*y;
    x = &a;
    y = &b;

    z = andar(*x,*y,matriz);

    if(z==1)
    {
        for(u=0;u<10;u++)
        {
            printf("\n");
            for(v=0;v<10;v++)
            {
                printf("%d ",matriz[u][v]);
            }
        }
    }

    printf("\n%d %d\n",a,b);

    while(z==1)
    {
        z=andar(a,b,matriz);
    }
    return 0;
}

int main()
{
    int i,j;
    int matriz[10][10];
    FILE * arquivo_texto;
    arquivo_texto = fopen("C:\\Users\\Diogo\\Documents\\Programas C\\resolucao10\\matriz10.txt","r");

    for(i=0;i<10;i++)
    {
        for(j=0;j<10;j++)
        {
            fscanf(arquivo_texto,"%d",&matriz[i][j]);
        }
    }
    for(i=0;i<10;i++)
    {
        printf("\n");
        for(j=0;j<10;j++)
        {
            printf("%d ",matriz[i][j]);
        }
    }
    printf("\n");
    caminho(matriz);
    return 0;

}
