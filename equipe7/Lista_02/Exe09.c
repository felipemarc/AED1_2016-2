/* equipe:
    Fabiana Bezerra
    Paulo Roberto
    Paulo Silveira
    Pedro Sena
    Sywan Neto

	
9) A multiplicação de dois números inteiros pode ser feita através de somas sucessivas. 
Proponha um algoritmo recursivo Multip_Rec(n1,n2) que calcule a multiplicação de dois inteiros.    
*/

#include <stdio.h>
#include <stdlib.h>

int Multip_Rec (int n1, int n2)
{
  if(n2==0) return 0;
  if(n2==1) return n1;
  if(n2>1) return n1+multiplicacao(n1, n2-1);
}

int main()
{
  int n, m, resultado;
  
  printf("Digite o multiplicando: \n");
  scanf("%d", &n);
  printf("Digite o multiplicado: \n");
  scanf("%d", &m);
  
  resultado = multiplicacao(n, m);
  
  printf("O resultado é: ", resultado);
}
