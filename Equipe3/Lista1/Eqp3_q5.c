// Equipe 3
// Alerrandro Barreto
// Elisandra Oliveira
// Frank Nápolis
// Thiago Cauassa
// Caique Martins

//Lista 1 - Revisão
//Questão 5
//5. Dada uma seqüência de n números reais, determinar os números que compõem a seqüência e o número de vezes que cada um deles ocorre na mesma.

//Exemplo: n = 8
//Seqüência: -1.7,  3.0,  0.0,  1.5,  0.0, -1.7,  2.3, -1,7
//Saída:       -1.7 ocorre 3 vezes 
//                   3.0 ocorre 1 vez 
//                   0.0 ocorre 2 vezes 
//                   1.5 ocorre 1 vez 
//                   2.3 ocorre 1 vez




#include <stdio.h>
#define MAX 100
int main()
{
	int i,j,n,conta=1;
	float vet[50],aux;
	printf("Digite o numero de elementos do vetor:");
	scanf("%d",&n);
   
   for(i=0;i<n;i++)
     {
      printf("vet[%d]:",i+1);
      scanf("%f",&vet[i]);
     }
   for(i=0;i<n;i++)
   {
      aux=vet[i];
      conta=1;
      for(j=i+1;j<n;j++)
	  {  
            if(aux==vet[j])
			{
               conta=conta+1;
               vet[j]=1000;
               }
      }
      if(vet[i]!= 1000)
	  {
         if(conta>1)
		 {
             printf("%f ocorre %d vezes.\n",vet[i],conta); 
             }else
                   {
                    printf("%f ocorre %d vez.\n",vet[i],conta);
                    }
       }
                              
   }
return 0;
}
