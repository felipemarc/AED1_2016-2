#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lista4.1.h"

#define NC 2 // Numero de contatos no arquivo ".txt"

int main(int argc, const char * argv[])
{
   // Lista lista;
   No *li;
   li = create();
   	char nome[40];
   	int num, i;
   	char ende[100];
   	char email[40];
    int escolha;

    FILE *arq;
    arq = fopen("teste.txt", "r");

    if (arq == NULL)
    {
        printf("ERRO\n\n");
        return 1;
    }
    else
    {
        for (i = 0; i < NC; i++)
        {
            fscanf(arq, "%s", &nome);
            fscanf(arq, "%d", &num);
            fscanf(arq, "%s", &ende);
            fscanf(arq, "%s", &email);
            li = insert_lista(li, nome, num, ende, email);
        }
    }

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
                    fflush(stdin);
                    printf("Insira seu nome:\n");
                    scanf("%s[^\n]",&nome);
                    fflush(stdin);
                    printf("Insira número de telefone:\n");
                    scanf("%d",&num);
                    fflush(stdin);
                    printf("Insira seu endereço:\n");
                    scanf("%s[^\n]",ende);
                    fflush(stdin);
                    printf("Insira seu email:\n");
                    scanf("%s[^\n]",email);
                    fflush(stdin);
                   // Item aux = insert_item(nome,num,ende,email);
                    li = insert_lista(li,nome,num,ende,email);
                    break;
            case 2 :
            	if(!vazia(li))
            	{
					print_lista(li);
				}
                break;
            case 3 :/*
                printf("Insira o telefone para remover: ");
                scanf("%d", &num);
                li = remove_lista(li, num);*/
                break;
            case 4 :
                printf("Insira o telefone para buscar: ");
                scanf("%d", &num);
                busca(li,num);
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
