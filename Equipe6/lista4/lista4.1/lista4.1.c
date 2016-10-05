

#include <stdio.h>
#include "lista4.1.h"

int main(int argc, const char * argv[]) 
{
    Lista lista;
    create(&lista);
    int escolha;
    
    printf("--------Agenda AED1---------\n");
    printf("    1 - Iserir contato     -\n");
    printf("    2 - Mostrar Contato    -\n");
    printf("    3 - Remover Contato    -\n");
    printf("    4 - Atualizar Contato  -\n");
    printf("    5 - Sair               -\n");
    printf("----------------------------\n");
    scanf("%d",&escolha);
    switch(escolha){
        case 1 :
            break;
        case 2 :
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
    
    //Item it1 = {90};
    //insert(&lista,it1);
    
   // print_lista(&lista);
    
  return 0;
} 
