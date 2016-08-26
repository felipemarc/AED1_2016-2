/* equipe 01:
	Diogo Abreu
	Fernando Calderaro
	Leticia Mota
	Rodrigo Oliveira
	Thailana Neves		
	
	exercicio 05
	
	Gere todas as possíveis combinações para um jogo da MegaSena com 6 dezenas. 50.063.860

*/

#include <stdio.h>

int seq[100000];

void comb(int beg, int n, int k)
{
        int i;
        if(k == 1)
        {
                seq[k-1] = beg;
                for(i=n;i>=0;i--)
                { 
                        if(seq[i]!=0)
                        {
                             printf("%d ",seq[i]);
                        }
                }
                printf("\n");
        }
        
        for(i = beg+1;i <= n;i++)
        {
                seq[k-1] = beg;
                comb(i,n, k-1);
        }
}

int main()
{
        int i,n,k;
        scanf("%d%d",&n,&k);

        for(i = 1;i <= n-1;i++)
        {
                 comb(i,n,k);
        }
        return 0;
}