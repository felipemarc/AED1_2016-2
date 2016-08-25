#include <stdio.h>
#include <stdlib.h>


int soma( int a, int b)

{

int i,soma ;

 for (i=0;i<b;i++)
 {

	soma = ++ a;
}  
	return (soma);
}


main()

{
int soma( int a, int b);
int n1,n2,resultado;


printf("Digite um numero: ");
scanf("%d",&n1);

printf("Digite outro numero: ");
scanf("%d",&n2);

resultado = soma ( n1, n2);

    
printf("A soma eh: %d ", resultado) ;

return 0;
}
