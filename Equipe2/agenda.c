#include<stdio.h>
#include <stdlib.h>
#include <string.h>
#include"agenda.h"

int main(int argc, const char *argv[])
{
    int opc=0;
    //printf("%s" )
    while(opc != 9)
    {
        printf("Menu\n");
        //printf("");
        printf("1 - Inserir\n");
        printf("2 - Exibir\n");
        printf("3 - Excluir\n");
        printf("4 - Atualizar\n");
        printf("9 - Sair\n");
        printf("Que opcao deseja escolher?: "); 
        scanf("%d", &opc);

        switch(opc)
        {
        	Agenda *aux;
            case 1: // inserir
                nova_agenda(aux);
                aux = (Agenda*)malloc(sizeof(Agenda));

                scanf("%[^\n]", aux->nome);
                __fpurge(stdin);

                printf("Insira o nome: ");
                scanf("%[^\n]", aux->nome);
                __fpurge(stdin);
                
                printf("Insira o endereco: ");
                scanf("%[^\n]", aux->endereco);
                __fpurge(stdin);
                
                printf("Insira o telefone: ");
                scanf("%d", &aux->tel);
                __fpurge(stdin);
                
                printf("Insira o email: ");
                scanf("%[^\n]", aux->email);
                __fpurge(stdin);
                
                printf("Inserido com sucesso !\n");
                                         
                break;
            case 2: //Exibir
                imprime(aux);
                break;
            case 3: //Excluir
                break;
            case 4: //Atualizar
                break;
            case 9: //Sair
                opc = 9;
                break;
        }
    }
    return 0;
}
