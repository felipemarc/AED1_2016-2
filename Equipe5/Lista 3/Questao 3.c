#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void gerador(value){
	int i;
	int vector[value];
	for(i=0; i<value; i++){
		vector[i]=rand() % 100;
		//printf("%d ", rand() % 100);
		printf("%d ", vector[i]);
	}
			OrdenaVetor(value,vector);

}
void OrdenaVetor(int value, int vector[]){
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
int main(int argc, const char *argv[]){
	int value;
	scanf("%d", &value);
	gerador(value);
	printf("\n");
	return 0;
}
