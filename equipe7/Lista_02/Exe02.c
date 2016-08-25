/* equipe:
	Fabiana Bezerra
	Paulo Roberto
	Paulo Silveira
	Pedro Sena
	Sywan Neto
    
    2. Multiplicação de dois números naturais, através de somas sucessivas (Ex.: 6 ∗ 4 = 4+4+4+4+4+4)
*/

#include <stdio.h>
#include <stdlib.h>

int multiplicacao (int num1, int num2)
{
  if(num2==0) return 0;
  if(num2==1) return num1;
  if(num2>1) return num1+multiplicacao(num1, num2-1);
  //A medida que volta da pilha, soma os números
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
