#include <stdio.h>

int main(int argc, const char *argv[])
{
	
	int i = 10;
	int v[10];

	for (i = 0; i < 10; i++)
		scanf("%d", &v[i]);
	
	for (i = 0; i < 10; i++)
		printf("%d\n", v[i] * 2);

	
	return 0;
}

