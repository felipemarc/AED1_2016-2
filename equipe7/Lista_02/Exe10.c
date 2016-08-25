/* equipe:
    Fabiana Bezerra
    Paulo Roberto
    Paulo Silveira
    Pedro Sena
    Sywan Neto

	
10) Uma matriz maze de 0s e 1s, de 10X10, representa um labirinto no qual um viajante precisa encontrar um caminho de maze[0][0] a maze[9][9]. O viajante pode passar de um quadrado para qualquer outro adjacente na mesma fileira ou coluna, mas não pode saltar quadrados nem se movimentar na diagonal. Além disso, o viajante não pode entrar num quadrado contendo um 1. maze[0][0] e maze[9][9] contêm 0s. Escreva uma rotina recursiva que aceite este labirinto maze e imprima uma mensagem informando a inexistência de um caminho através do labirinto, ou que imprima uma lista de posições representando um caminho de [0][0] a [9][9].
*/

#include<stdio.h>
#define MAXN 11

int maze[MAXN][MAXN],i,j,n;

int ff(int i, int j){
    int d[]={-1,0,1,0},achou, k;
    if (i<0 || i>=n || j<0 || j>=n) return 0;
    if (maze[i][j] != 0) return 0;

    maze[i][j]=8;

    if (i==0 && j==0){// se chega ao destino, imprime o destino
        printf("%d %d\n",i,j);//cout<<i<<" "<<j<<endl;
        return 1;
    }

    achou=0;
    
    for (k=0;k<4;k++) {// para cada uma das posições adjacenctes as (i,j)
        if (maze[i+d[k]][j+d[3-k]]==0){// se eh uma posicao permitida
            if (ff(i+d[k],j+d[3-k])) achou=1;// testa se ha um caminho indo por (i-1,j)ou (i,j+1) ou (i+1,j) ou (i,j-1)
        }
    }

    if (achou){// se ha um caminho por um adjacente de (i,j) , entao (i,j) faz parte do caminho
        printf("%d %d\n", i,j);//cout<<i<<" "<<j<<endl;
        return 1;
    }
    else if (i==n-1 && j==n-1) printf("Não ha caminho\n");//cout<<"Não ha caminho"<<endl;

    return 0;
}

int main(){ 
    while(scanf("%d",&n) != EOF){
        for (i=0;i<n;i++){
            for (j=0;j<n;j++){
                scanf("%d",&maze[i][j]);//cin>>maze[i][j];
            }
        }

        ff(n-1,n-1);//chama a funçao a partir do destino apenas pra corrigir a impressao do caminho que eh em ordem contraria

        for (int i=0;i<n;i++){
            for (int j=0;j<n;j++){
                printf("%d ",maze[i][j]);//cout<<maze[i][j]<<" ";
                maze[i][j]=0;
            }
            printf("\n");//            cout<<endl;
        }

        printf("\n");//cout<<endl;
    }
    return 0;
}
