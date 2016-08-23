/* 	Equipe 01:

	Diogo Abreu
	Fernando Calderaro
	Leticia Mota
	Rodrigo Oliveira
	Thailane Neves		
	
	exercicio 09
	A multiplicacao de dois numeros inteiros pode ser feita atraves de somas sucessivas.
	Proponha um algoritmo recursivo Multip_Rec(n1,n2) que calcule a multiplicacao de dois inteiros.
*/
#include <stdlib.h>
#include <stdio.h>

int multip_rec(int n1, int n2){
	
	if (n1==0 || n2==0)
		return 0;
	
	if (n2==1)
		return n1;
		
	if (n2>1)
		return n1+multip_rec(n1,(n2-1));	
}

int main(){
	
	int n1, n2, s;
	
	printf ("\n\t- Multiplicacao com Soma sucessivas -\n\n");
	
	printf ("Informe o primeiro numero inteiro: ");
	scanf ("%d", &n1);
	printf ("Informe o segundo numero inteiro: ");
	scanf ("%d", &n2);
		
	s = multip_rec(n1, n2);
	
	printf ("\n\n ");
	printf ("%d", s);
	
	
}


