#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void gerador(value){
	int i;
	int vector[value];
	for(i=0; i<value; i++){
		vector[i]=rand() % value;
		//printf("%d ", rand() % 100);
		printf("%d ", vector[i]);
	}
			OrdenaVetorDecrescente(value,vector);

}
void OrdenaVetorCrescente(int value, int vector[]){
	int i,j,aux;
    for( i=0; i<value; i++ ){
            for( j=i+1; j<value; j++ ){
                if( vector[i] > vector[j] ){
                    aux = vector[i];
                    vector[i] = vector[j];
                         vector[j] = aux;
                       }
                  }
           }
	for( i=0; i<value; i++ ){
		printf("%d  ",vector[i]);
	}	
}
void OrdenaVetorDecrescente(int value, int vector[]){
	int i,j,aux;
	int newvector[value];
    for( i=0; i<value; i++ ){
            for( j=i+1; j<value; j++ ){
                if( vector[i] > vector[j] ){
                    aux = vector[i];
                    vector[i] = vector[j];
                         vector[j] = aux;
                       }
                  }
           }
		aux=0;
		for( j=value-1; j>=0; j-- ){
			newvector[j]=vector[aux];
			aux++;
		}	
		vector= newvector;
	for( i=0; i<value; i++ ){
		printf("%d  ",vector[i]);
	}	
}
int main(int argc, const char *argv[]){
	int value;
	scanf("%d", &value);
	gerador(value);
	printf("\n");
	return 0;
}
