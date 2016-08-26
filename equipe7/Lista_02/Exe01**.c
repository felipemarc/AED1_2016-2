#include <stdio.h>

void convert_binario(int n)
{
    if (n / 2 != 0)
    {
        convert_binario(n / 2);
    }
    printf("%d", n % 2);
}
int main()
{
    int n;
    scanf("%d", &n);
    printf("\n");
    printf("Forma binaria: ");
    printf("\n");
    convert_binario(n);
    printf("\n");
    
    return 0;
}
