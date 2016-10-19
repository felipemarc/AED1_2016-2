#include<stdio.h>
#include"hash.h"
#define MOD 5

int main(int argc, const char *argv[])
{
     char *filme, aux[100];
     int num, mod;
     filme = (char*)malloc(sizeof(char));
     
     //printf("Qual filme vc deseja procurar ?");
     __fpurge(stdin);
     fgets(filme, 100, stdin);

     remove_espacos(filme,aux);
     num = string_para_ascii(aux);
     mod = calcula_mod(MOD, num);
     printf("%d\n", mod);
     //printf("%s\n", aux);
     //printf("%d\n", num);
     return 0;
}
