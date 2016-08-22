
//Equipe 3
//Alerrandro Barreto
//Elisandra Oliveira
//Frank Nápolis
//Thiago Cauassa
//Caique Martins

//8.  Dada uma matriz real  Amxn, verificar se existem elementos repetidos em A.


#include <stdio.h>

#define MAX 100
#define TRUE 1
#define FALSE 0

int main(){


    float matriz[MAX][MAX], num;
    int m, n,k,l,achou;

    printf("Digite o numero de linhas e o número de colunas da matriz: ");
    scanf("%d %d", &m, &n);

    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
		{
            printf("Digite o elemento da posicao (%d,%d): ", i+1, j+1);
            scanf("%f", &num);
            matriz[i][j] = num;
        }

    achou = FALSE;
    for (int i = 0; !achou && i < m; i++)
        for (int j = 0; !achou && j < n; j++) 
		{
            k = i;
            l = j + 1;
            while (!achou && k < m) 
			{
                while (!achou && l < n) 
				{
                    if (matriz[i][j] == matriz[k][l])
                        achou = TRUE;
                    l++;
                }
                l = 0;
                k++;
            }
        }

    if (achou)
        printf("Há elementos repetidos na matriz.\n");
    else
        printf("Não há elementos repetidos na matriz.\n");

    return 0;
}
