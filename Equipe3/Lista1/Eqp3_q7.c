// Equipe 3
// Alerrandro Barreto
// Elisandra Oliveira
// Frank Nápolis
// Tiago Cauassa
// Caique Martins

//7. Dada uma matriz real A com m linhas e n colunas e um vetor real V com n elementos, determinar o produto de A por V. 
#include <stdio.h>
#define TAM 2 //Esta define o tamanho da matriz

int main()
{
    int vetor[TAM], matriz[TAM][TAM], prod[TAM];
    int linha, coluna, i;
    
    //Esta parte escreve a matriz
    for(linha = 0 ; linha < TAM ; linha++)
        for(coluna = 0 ; coluna < TAM ; coluna++)
        {
            printf("Elemento [%d][%d]: ", linha+1, coluna+1);
            scanf("%d", &matriz[linha][coluna]);
        }

    //Esta parte escreve o vetor
    for(i = 0; i < TAM ; i++){
	    printf("Elemento [%d]: ", i+1);
	    scanf("%d", &vetor[i]);
	}

    prod[i]+= vetor[i]*matriz[linha][coluna];
    printf("\nProduto: %d", prod[i]);

}
