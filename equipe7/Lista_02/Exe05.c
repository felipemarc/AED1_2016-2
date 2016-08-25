/* equipe:
    Fabiana Bezerra
    Paulo Roberto
    Paulo Silveira
    Pedro Sena
    Sywan Neto

	5) Gere todas as possíveis combinações para um jogo da MegaSena com 6 dezenas.    
*/

#include <stdio.h>

int megasena(int vet[], int n, int i)
//A função percorre o vetor de i até n-1
{
	int j;

	if(i==n)
	{
		for (j=0;j<n;j++) printf("%d - ", vet[j]);
		printf("\n");
	}else
	//Explora o vetor de forma recursiva
	for (j=i;j<n;j++)
	{
		//testa o vetor trocando i e j
		permutacao(vet, i, j);
		megasena (vet, n, i+1);

		//permuta-os para voltar à ordem original
		permutacao(vet, i, j);
	}
}

int troca_vetor (int vet[])
//Essa função adiciona +6 a cada número do vetor
{
	int aux;
	for (aux=0; aux<6; aux++) vet[aux] += 6;
}

void permutacao (int vet[], int i, int j)
//Essa função permuta os números adjacentes do vetor
{
	int aux;
	aux = vet[i];
	vet[i] = vet[j];
	vet[j] = aux;
}

int main()
{
	int vet[] = {0,1,2,3,4,5};

	while(vet[0] != 60)
    	{
        	megasena(vet, 6, 0);
        	troca_vetor(vet);
    	}

	return 0;
	
}
