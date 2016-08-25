//Equipe 4:
  //Fabiola Maciel
  //Jefferson Avilar
  //Matheus Obando
  //Alerrandro Barreto
//7.Escreva uma func¸a~o recursiva que determine quantas vezes um di´gito K ocorre em um nu´mero natural N. Por exemplo, o di´gito 2 ocorre 3 vezes em 762021192.

#include <stdio.h>


int conta;

int Count(int x,int y)
{
	if(x==0)
	{
		return 0;
	}
	
	if(x%10==y)
	{
		conta++;
		return Count(x/10,y);
	}
	
	return 0;
	
}






int main()
{
	int a,b;
	
	printf("Informe o valor a:");
	scanf("%d",&a);
	
	printf("Informe o valor a ser pesquisado:");
	scanf("%d",&b);
	
	Count(a,b);
	
	printf("O numero de vezes:%d",conta);
	
	
}
