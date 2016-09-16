#include <stdio.h>
#include <stdlib.h>

int busca_binaria(int r, int l, int x, int *v);

int main(int argc, char *argv[])
{
	int *v, tam = atoi(argv[1]), pesquisa = atoi(argv[2]);

	v = (int *) malloc (sizeof(int) * tam);
//    scanf("%d",&pesquisa);
        
	for (int i = 0; i < tam; i++) 
    {
		scanf ("%d", &v[i]);
    }
    
	printf("%d\n", busca_binaria(tam-1, 0, pesquisa, v));

	return 0;
}

int busca_binaria(int r, int l,int x, int *v)
{

	int i = 0;

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


