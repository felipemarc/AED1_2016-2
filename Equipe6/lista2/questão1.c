#include <stdio.h>
#include <stdlib.h>

void binario(int);

int main() {
	int n;
	
	printf("informe o numero para conversao: ");
	scanf("%d", &n);
	
    binario(n);
    return 0;
}
void binario(int n)
{
    if (n / 2 != 0) {
        binario(n / 2);
    }
    printf("%d", n % 2);
}
