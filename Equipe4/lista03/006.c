#include <stdio.h>
#include <stdlib.h>

#define TAM 1000000

int busca_binaria(int r, int l, int x, int *v);

int main()
{

	int 
		*v, n;

	v = (int *) malloc (sizeof(int) * TAM);
	
	scanf("%d", &n);

	for (int i = 0; i < TAM; i++) 
		scanf ("%d", &v[i]);
	
	printf("%d\n", busca_binaria(TAM-1, 0, n, v));

	return 0;
}

int busca_binaria(int r, int l,int x, int *v)
{

	int i = (r+l)/2;

	if (v[i] == x)
	{
		return i;
	}

	if (l >= r)
    return -1;

	else 
		if (v[i] < x)
		{
			return busca_binaria(r,i+1,x,v);
		}
	
		else 
		{
			return busca_binaria(r,x-1,x,v);
		}
}


