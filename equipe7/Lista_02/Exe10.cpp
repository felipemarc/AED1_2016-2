#include<bits/stdc++.h>
#define endl '\n'
#define _ ios_base::sync_with_stdio(0);
#define MAXN 11

using namespace std;

int maze[MAXN][MAXN],i,j,n;

int ff(int i, int j){
    int d[]={-1,0,1,0},achou;
    if (i<0 || i>=n || j<0 || j>=n) return 0;
    if (maze[i][j]!=0) return 0;

    maze[i][j]=8;

    if (i==0 && j==0){// se chega ao destino, imprime o destino
        cout<<i<<" "<<j<<endl;
        return 1;
    }

    achou=0;
    for (int k=0;k<4;k++) {// para cada uma das posições adjacenctes as (i,j)
        if (maze[i+d[k]][j+d[3-k]]==0){// se eh uma posicao permitida
            if (ff(i+d[k],j+d[3-k])) achou=1;// testa se ha um caminho indo por (i-1,j)ou (i,j+1) ou (i+1,j) ou (i,j-1)
        }
    }

    if (achou){// se ha um caminho por um adjacente de (i,j) , rntao (i,j) faz parte do caminho
        cout<<i<<" "<<j<<endl;
        return 1;
    }
    else if (i==n-1 && j==n-1) cout<<"Não ha caminho"<<endl;

    return 0;
}

int main(){
    while(cin>>n){
        for (int i=0;i<n;i++){
            for (int j=0;j<n;j++){
                cin>>maze[i][j];
            }
        }

        ff(n-1,n-1);//chama a funçao a partir do destino apenas pra corrigir a impressao do caminho que eh em ordem contraria

        /*for (int i=0;i<n;i++){
            for (int j=0;j<n;j++){
                cout<<maze[i][j]<<" ";
                maze[i][j]=0;
            }
            cout<<endl;
        }*/

        cout<<endl;
    }
    return 0;
}
