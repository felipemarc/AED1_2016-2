/* equipe:
    Fabiana Bezerra
    Paulo Roberto
    Paulo Silveira
    Pedro Sena
    Sywan Neto

	8) Uma sequência de Fibonacci generalizada, de f0 a f1 é definida como fibg(f0, f1, 0), fibg(f0, f1, 1), fibg(f0, f1, 2), ..., onde:
fibg(f0, f1, 0) = f0
fibg(f0, f1, 1) = f1
fibg(f0, f1, n) = fibg(f0, f1, n-1) + fibg(f0, f1, n-2), se n > 1. Escreva uma função recursiva em C para calcular fibg(f0, f1, n).    
*/

#include <stdio.h>

int fibg(int f0, int f1, int n)
{
	if (n == 0)
	{
		printf("0");
		return 0;
	}
	else if (n == 1) 
	{
		printf("0");
		return 0;
	}
        else
        {   
            z = fibg(f0, f1, n-1) + fibg(f0, f1, n-2);
            printf("%d ", z);
            return z;
        }
}

int main()
{
	int n, f0, f1;
	scanf("%d", &n);
	fibg(f0, f1, n);
	
	return 0;
}
