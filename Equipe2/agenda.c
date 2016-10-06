#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include"agenda.h"
#ifdef WIN32
  #define CLEARSCR system ( "cls" )
#else
  #define CLEARSCR system ( "clear" )
#endif

int main(int argc, const char *argv[])
{
    int opc=0;
	agenda *aux;
	nova_agenda(aux);
	aux = (agenda*)malloc(sizeof(agenda));
    //printf("%s" )
    while(opc != 9)
    {
        printf("Menu\n");
        //printf("");
        printf("1 - Inserir\n");
        printf("2 - Mostrar todos\n");
        printf("3 - Procurar\n");
        printf("4 - Excluir\n");
        printf("5 - Atualizar\n");
        printf("9 - Sair\n");
        printf("Que opcao deseja escolher?: "); 
        scanf("%d", &opc);
		limpa_tela();
        switch(opc)
        {
        	int temp;
            case 1: // inserir
                nova_agenda(aux);
                aux = (agenda*)malloc(sizeof(agenda));

                
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
                limpa_tela();                         
                break;
            case 2: //Mostrar todos
                limpa_tela();
                imprime(aux);
                break;
            case 3: //Procurar
                printf("Insira o telefone de quem quer procurar: ");
                scanf("%d", &temp);
                limpa_tela();
                mostrar(aux, temp);
                break;
            case 4: //Excluir
                printf("Insira o telefone de quem quer excluir: ");
                scanf("%d", &temp);
                delete(aux, temp);
                limpa_tela();
                break;
            case 5:
           		printf("Insira o telefone de quem quer editar: ");
                scanf("%d", &temp);  
            	atualizar(aux, temp);
            	limpa_tela();
            	break;
            case 9: //Sair
                opc = 9;
                limpa_tela();
                break;
        }
    }
    return 0;
}
