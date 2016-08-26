/*
Equipe2
Hermann Hernani
Jessica Tavares
Lucas Botinelly
Paulo Marinho
Stephanny Barreto

1) Impressao de um numero natural em base binaria
*/

#include <stdio.h>
#include <stdlib.h>

int bin(int num){

	if (num/2 != 0) 
		bin(num/2);

	printf("%d", num%2);
	return 0;
} 

int main() {
 int n;
 int r;
 
 char url[3];
 char ch;
 FILE *arq;
 int i;
 //printf("Digite o numero: ");
 //scanf("%d", &n);
 
 
 arq = fopen("entrada01.txt","r" );
	if(arq == NULL)
	    printf("Erro, nao foi possivel abrir o arquivo\n");
	else
	{
		while( (ch=fgetc(arq))!= EOF )
          {
                for(i = 0; i<3; i++)
				{
					if (ch != '\n'){
					
						printf("%c\n", ch);
                		url[i] = ch;	
          			}
				}
		  }
	}
	    	
	fclose(arq);
 printf("%c\n", url[0]);
 bin((int)url[0]);
 system("pause");
}


