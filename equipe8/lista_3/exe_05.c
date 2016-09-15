#include<stdio.h>

#define max 10

int bus_seq(int *V, int valor){
	int i;
	for(i = 0; i < max; i++){
		if(valor == V[i]) return i; 	
	}
	return -1;
}
int main(){
	return 0;
}
