/* equipe:
    Fabiana Bezerra
    Paulo Roberto
    Paulo Silveira
    Pedro Sena
    Sywan Neto
	
	1) Impressão de um número natural em base binária    
*/

#include <stdio.h>

int binario(int n){

	if (n/2 != 0) binario(n/2);

	printf("%d ", n%2);

	return 0;
}

int main (){
	int n;

	scanf ("%d",&n); // numero decimal para transformar em binario

	binario(n);

	printf("\n");
	return 0;
}
