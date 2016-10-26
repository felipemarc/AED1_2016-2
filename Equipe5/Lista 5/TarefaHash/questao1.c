/*
    Aline Lima
    Amanda Leticia
    Eduardo Azevedo
    Lucas Almeida

1) Realizar o hash de nomes utilizando a tabela asc.
 */

//programa principal


#include <stdio.h>
#include <string.h>

int main()
{
    int i,loop_size,result;
    char name[30];
    scanf("%d", &loop_size);
    for (i=0;i<loop_size;i++)
    {
        scanf("%s", &name);
        result=Hash(name);
        printf("%d \n",result);
    }
    return 0;
}
int Hash(char nome1[])
{
	int hashnum= 0,i,namesize,asc_value;
	namesize= strlen(nome1);
	for(i=0;i<namesize -1;i++){
		asc_value= (int)nome1[i];
		hashnum= hashnum +asc_value; 
	}
    return hashnum;
}
