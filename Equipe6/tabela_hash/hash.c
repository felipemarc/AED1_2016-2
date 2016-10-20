/*
 * =====================================================================================
 *
 *       Filename:  hash.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  19-10-2016 21:22:19
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */


#include<stdio.h>
#include "hash.h"
#define MOD 5
int main(int argc, const char *argv[])
{
      char *filme, aux[100];
      int num, mod;
      filme = (char*)malloc(sizeof(char));
      
      
      __fpurge(stdin);
      

      fgets(filme, 100, stdin);
      
      ajusta_string(filme,aux);
      
      num = transforma_char(aux);
      
      mod = funcao_hash(MOD,num);

      printf("%d\n",mod);


   return 0;                                             
}
