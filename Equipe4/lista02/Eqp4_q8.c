
//Equipe4
///Fabiola Maciel
  //Jefferson Avilar
  //Matheus Obando
  //Alerrandro Barreto

//8) Uma seque^ncia de Fibonacci generalizada, de f0 a f1 e´ definida como fibg(f0, f1, 0), fibg(f0, f1, 1), fibg(f0, f1, 2), ..., onde:
//fibg(f0, f1, 0) = f0
//fibg(f0, f1, 1) = f1
//fibg(f0, f1, n) = fibg(f0, f1, n-1) + fibg(f0, f1, n-2), se n > 1. Escreva uma func¸a~o recursiva em C para calcular fibg(f0, f1, n).




#include<stdio.h>


int Fibo(int y)
{
	if(y==1)
	{
		return 0;
	}
	
	if(y==2)
	{
		return 1;
	}
	
	if(y>2)
	{
		
		return Fibo(y-1)+Fibo(y-2);
	}
	
}




int main()
{
	int x;
	
	
	printf("Informe o numero:");
	scanf("%d",&x);
	Fibo(x);
	
	printf("A sequencia de Fibonati éh:%d",Fibo(x));
}
