
//Equipe3
//Alerrandro Barreto
//Elisandra Oliveira
//Frank Nápolis
//Thiago Cauassa
//Caique Martins
	
//2. Fac¸a um programa usando ponteiros, para ordenar 5 nu´meros e mostra´­-los ordenados na tela.


#include <stdio.h>
#include <stdlib.h>

int main() 
{
 int *pont, i, j,aux;
 pont = (int*)malloc(sizeof(int)*5);// aloca a memoria necessaria no ponteiro
 
 if(pont == NULL )//testa se amemoria foi corretamente alocada
    {
        printf("Não foi possivel alocar memoria");
    }
    //recebe os valores
 for(i=0;i < 5;i++)
 {
  printf("Informe os valores numericos\n");
  scanf("%i",(pont+i));
 }
 //estrutura de ordenação com laços for 
 for(i=0;i <5; i++)
 {
  for(j=0; j< 5; j++)
  {
   //faz a comparaçao do ponteiro com valor i e com valor j
     if(*(pont+i) < *(pont+j))
	 {
      //troca as variaveis de lugar
       int aux;
       aux = *(pont+i);
       *(pont+i) = *(pont+j);
       *(pont+j) = aux;
     } 
  }
  
 }
 //imprime o laço for
 printf("\n\n\n\n============\n\n\n");
  for(i=0;i < 5;i++){
  printf("%i\n",*(pont+i));
 
 }
 
 getch();
 return 0;
}
