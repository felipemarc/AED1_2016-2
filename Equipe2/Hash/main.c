#include<stdio.h>
#include"hash.h"

int main(int argc, const char *argv[])
{
     char *filme, aux[100];
     int num;
     filme = (char*)malloc(sizeof(char));
     
     //printf("Qual filme vc deseja procurar ?");
     __fpurge(stdin);
     fgets(filme, 100, stdin);

     remove_espacos(filme,aux);
     num = string_para_ascii(aux);
     //printf("%s\n", aux);
     //printf("%d\n", num);
     return 0;
}
