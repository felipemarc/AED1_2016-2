#include <stdio.h>
#include <stdbool.h>

void combinacoes(int v[], bool v_bool[], int i, int tam_v);

int main()
{
	int v[] = {1,2,3,4,5,6};
	int tam_v = sizeof(v) / sizeof(int);
	bool v_bool[tam_v];

	for(int i = 0; i < tam_v; i++)
	{
		v_bool[i] = false;
	}

	combinacoes(v, v_bool, 0, tam_v);

	return 0;
}

void combinacoes(int vetor[], bool v_bool[], int start, int tam)
{
	if(start == tam)
	{
		for(int j = 0; j < tam; j++)
		{
			if(v_bool[j] == 1)
				printf("%d ", vetor[j]);
		}
		printf("\n");
	}
	else
	{
		v_bool[start] = true;
		combinacoes(vetor, v_bool, start + 1, tam);
		v_bool[start] = false;
		combinacoes(vetor, v_bool, start + 1, tam);
	}
}
