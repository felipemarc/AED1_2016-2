#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void gerador(int value, char escolha){
	int i;
	int vector[value];
	for(i=0; i<value; i++){
		vector[i]=rand() % value;
		//printf("%d ", rand() % 100);
		//printf("%d ", vector[i]);
	}
			switch(escolha){
				case 'a':
					OrdenaVetorCrescente(value,vector);
				case 'b':
					OrdenaVetorDecrescente(value,vector);
			}

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
	//	printf("%d  ",vector[i]);
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
	//	printf("%d  ",vector[i]);
	}	
}
int main(int argc, const char *argv[]){
	int i=0;
	double value;
	char escolha;
	scanf("%d", &value);
	scanf("%c", &escolha);
	scanf("%c", &escolha);
	for(i=0;i<10;i++){
	double cpu_time_used;
	clock_t start, end;
 	start = clock();
	gerador(value,escolha);
	end = clock();
	cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;
	printf("\n Time: %f- \n",cpu_time_used);
	}
	return 0;
}
