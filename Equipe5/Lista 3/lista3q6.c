#include<stdio.h>

int bb(int v[], int start, int end, int k)
{
	int m=(end-1)/2;

	if (v[m]=k)
		return m+1;
	
	if (k>v[m])
		bb(v, m+1, end, k);
	else
	{
		if(k<v[m])
			bb(v0, start, m-1, k);
	}
		
			
}

int main(int argc, const char *argv[])
{
	int k=0, v[10];

	for(int i=0; i<10; i++)
	{
		scanf("%d", &v[i]);
	}
	//printf("\nDigite o numero a encontrar: ");
	scanf("%d", &k);
	printf("\n A posicao do numero e: %d\n", bb(v, 0, 10, k));
}
