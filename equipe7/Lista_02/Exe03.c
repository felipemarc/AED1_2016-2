/* equipe:
    Fabiana Bezerra
    Paulo Roberto
    Paulo Silveira
    Pedro Sena
    Sywan Neto
	
	3) Soma de dois números naturais, através de incrementos sucessivos (Ex.: 3 + 2 = ++(++3)).    
*/


#include<stdio.h>

int soma(int m, int n)
{
    if(n == 0)
        return 0;
    else if(n == 1)
        return soma(m, n - 1) + m + 1;
    else
        return soma(m, n - 1) + 1;

}
int main()
{
    int resultado = soma(3, 2);

    printf("%d", resultado);

    return 0;
}
