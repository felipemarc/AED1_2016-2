/*
/* Equipe 4
Alerrandro Barreto
Fabiola Maciel
Matheus Botinelli */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ldde.h" // Arquivo com estruturas e funções necessárias

int main() {

  ldde *li; // Ponteiro para ponteiro
  li = cria_lista();

  int escolha = 0,
      telefone = 0;
  char nome[40],
       endereco[100],
       email[40];

  /* Criação do Menu !! */
  do {
    printf("\n\n\t\t**************-----------------*******************\n");
    printf("\t\t|---                   Menu                       ---|\n");
    printf("\n\n\t\t**************-----------------*******************\n");
    printf("\t\t|---    [1]            Inserir                     ---|\n");
    printf("\t\t|---    [2]            Exibir                      ---|\n");
    printf("\t\t|---    [3]            Excluir                     ---|\n");
    printf("\t\t|---    [4]            Atualizar                   ---|\n");
    printf("\t\t|---    [9]            Opção                      ---|\n");
    printf("Sua escolha: "); scanf("%d", &escolha);

    switch (escolha)
    {
      /* Escolhas disponíveis e suas opções */
      case 1: // Adicionar novos dados

        printf("Digite o NOME: ");
        scanf("%s[^\n]", &nome);
        __fpurge(stdin);

        printf("Insira o TELEFONE: ");
        scanf("%d", &telefone);
        __fpurge(stdin);
        printf("Insira o ENDEREÇO: ");
        scanf("%s[^\n]", &endereco);
        __fpurge(stdin);

        printf("Insira o EMAIL: ");
        scanf("%s", &email);
        __fpurge(stdin);

        li = insere_na_lista(li, telefone, nome, endereco, email);

        printf("Dados guardados!!!\n\n");

        break;
      case 2:
        /* Imprime a lista caso nao esteja vazia */
        if (!vazia(li))
        {
          exibir_na_lista(li);
        }
        break;
      case 3:
        break;
      case 4:
        break;
      case 9:
        break;
    }

  } while(escolha != 9);

  return 0;
}
