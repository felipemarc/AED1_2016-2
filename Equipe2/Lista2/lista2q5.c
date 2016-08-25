/*
Equipe2
Hermann Hernani
Jessica Tavares
Lucas Botinelly
Paulo Marinho
Stephanny Barreto

5) Gere todas as possiveis combinaçoes para um jogo da MegaSena com 6 dezenas.
*/

#include <stdio.h>

void mega (int v[], int n, int i) {
	int j;
	if (i == n) 
	{
		for (j=0; j<n; j++) 
			printf ("%d ", v[j]);
		printf ("\n");
	} 
	else
	{
		for (j=i; j<n; j++) 
		{
			//Troca os valores do vetor
			troca (v, i, j);
			mega (v, n, i+1);
			//Volta como era antes
			troca (v, i, j);
		}
	}
}

void troca (int v[], int i, int j) {
	int	aux;

	aux = v[i];
	v[i] = v[j];
	v[j] = aux;
}

			
int main () {
	int vet[6], i;

	for (i=0; i<6; i++)
		vet[i] = i+1;
	mega (vet, 6, 0);
	return 0;
}
