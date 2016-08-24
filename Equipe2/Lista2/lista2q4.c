/*
Equipe2
Hermann Hernani
Jessica Tavares
Lucas Botinelly
Paulo Marinho
Stephanny Barreto

4) Dado um número n, gere todas as possíveis combinações com as n primeiras letras do alfabeto.
Ex.: n = 3. Resposta: ABC, ACB, BAC, BCA, CAB, CBA

*/

#include<stdio.h>

int main(void)
{
   /*int i;
   for(i = 0; i < 256; i++)
   {
      printf("%d %c\n", i, i);
   }
   */
	char alfabeto[]="ABCDEFGHIJKLMNOPQRSTUVWXYZ", inverso[30], tmp[5];
	int numero, indice, i;
	
	//scanf("%d",&numero+1);

	for(int i=strlen(alfabeto)-1; i >=0 ; i--)
	{
		inverso[indice] = alfabeto[i];
		indice++;
	}

   printf("%s\n",inverso);
   return 0;
}



//falta terminar
