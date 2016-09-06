#include <stdio.h>
#include <stdlib.h>
  
/* as funções rand(), random() e srand() estão no cabeçalho stdlib.h */
int main(int argc, const char * argv[]){
     int i;

     /* inicializar o gerador de números aleatórios */
     srand(10000);
     for (i=0; i<10000; i++)
     {
           /* para gerar números aleatórios de 0 a TAM */
           printf("%d\n ", rand() % 10000);
      }
      

      return 0;
}
