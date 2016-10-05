#include<stdio.h>
#include <stdlib.h>
#include <string.h>
#include"agenda.h"

int main(int argc, const char *argv[])
{
    int opc=0;
    printf("%s" )
    while(opc != 9)
    {
        printf("Menu\n");
        printf("");
        printf("1 - Inserir\n");
        printf("2 - Exibir\n");
        printf("3 - Excluir\n");
        printf("4 - Atualizar\n");
        printf("9 - Sair\n");
        printf("Que opcao deseja escolher?: "); 
        scanf("%d", &escolha);

        switch(opc)
        {
            
            case 1: // inserir
                nova_agenda(inicio, fim);
                Agenda *aux;
                aux = (Agenda*)malloc(sizeof(Agenda));
                printf("Insira o nome: ");
                scanf("%s", &aux->nome);
                printf("\nInsira o endereco: ");
                scanf("%s", &aux->endereco);
                printf("\nInsira o telefone: ");
                scanf("%d", &aux->tel);
                printf("\nInsira o email: ");
                scanf("%s", &aux->email);
                printf("\nInserido com sucesso !\n");
                                         
                break;
            case 2: //Exibir
                break;
            case 3: //Excluir
                break;
            case 4: //Atualizar
                break;
            case 9: //Sair
                break;
        }
    }
    return 0;
}
