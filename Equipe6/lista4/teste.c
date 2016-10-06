#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "atual.h"

int main(int argc, const char * argv[]) 
{
   // Lista lista;
   	char nome[40];
   	int num;
   	char ende[100];
   	char email[40];
     No *prim =create();
     No *ult = create();
    int escolha;
   do
   {
        printf("--------Agenda AED1---------\n");
        printf("    1 - Iserir contato     -\n");
        printf("    2 - Mostrar Contato    -\n");
        printf("    3 - Remover Contato    -\n");
        printf("    4 - Atualizar Contato  -\n");
        printf("    5 - Sair               -\n");
        printf("----------------------------\n");
        scanf("%d",&escolha);
    
        switch(escolha)
        {
             case 1 :
                    __fpurge(stdin);
                    printf("Insira seu nome:\n");
                    scanf("%s[^\n]",&nome);
                    __fpurge(stdin);
                    printf("Insira número de telefone:\n");
                    scanf("%d",&num);
                    __fpurge(stdin);
                    printf("Insira seu endereço:\n");
                    scanf("%s[^\n]",ende);
                    __fpurge(stdin);
                    printf("Insira seu email:\n");
                    scanf("%s[^\n]",email);
                    __fpurge(stdin);
                    Item aux = insert_item(nome,num,ende,email);
                    insert_lista(aux);
                    break;
            case 2 :
                print_lista(prim);
                break;
            case 3 :
                break;
            case 4 :
                break;
            case 5 :
                break;
            default:
                printf("opção Inválida\n");
        }
}while(escolha != 5);
    //Item it1 = {90};
    //insert(&lista,it1);
    
   // print_lista(&lista);
    
  return 0;
} 
