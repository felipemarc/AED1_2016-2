#include <stdio.h>
#include <stdlib.h>

int bs_sentinela(int sentinela, int *v, int n);

int main(int argc, char *argv[])
{
	int 
		*v, tam = atoi(argv[1]), pesquisar = atoi(argv[2]);

	v = (int *) malloc (sizeof(int) * tam);
    
    int i;

	for (i = 0; i < tam; i++)
		scanf("%d", &v[i]);

	for (i = 0; i < tam; i++)
		printf("%d ", v[i]);

	printf("\n");

	printf("%d\n", bs_sentinela(pesquisar, v, tam));

	return 0;
}

int bs_sentinela(int sentinela, int *v, int n)
{
  int count = 0;
  v[n] = sentinela;

  while (v[count] != sentinela) {
    count++;
  }

  if (count < n)
  {
    return count;
  }

	return -1;
}
