#include<stdio.h>	


int particiona(int *V, int ini, int fim){
	int esq, dir, pivo, aux;
	esq = ini;
	dir = fim;
	pivo = V[ini];
	while( esq < dir ){
		while(V[esq] <= pivo) esq++;
		while(V[dir] > pivo) dir--;
		if(esq < dir) {
			aux = V[esq];
			V[esq] = V[dir];
			V[dir] = aux;		
		}
	}
	V[ini] = V[dir];
	V[dir] = pivo;
	return dir;
}
	
int quicksort(int *V, int ini, int fim){
	int pivo;
	if(fim > ini){
		pivo = particiona(V, ini, fim);
		quicksort(V, ini, pivo-1);
		quicksort(V, pivo+1, fim);	
	}
}


int main(){
	return 0;
}
