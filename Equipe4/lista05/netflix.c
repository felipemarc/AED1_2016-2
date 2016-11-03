#include<stdio.h>
#include<stdlib.h>
#include"netflix.h"
#define TAM 17700


int main(int argc, char argv[])
{
	char nome_filme[200];
	int codigo;
	int numero;
	
	Hash *tabela_hashing[TAM];
	cria_tabela(tabela_hashing);
	
	int i;
	
	for (i=0;i<=17700;i++)
	{
		scanf("%s",&nome_filme);
		scanf("%d",&numero);
		scanf("%d",&codigo);
		
		insere_tabela(tabela_hashing,nome_filme,numero,codigo);
	}
	
	int aux;
	do
	{
	
		
	
		printf("Escolha uma das opções disponíveis: ");
		printf("\n\n1-imprimir tabela");
		printf("\n2-Procurar filme por Titulo");
		printf("\n3-Procurar filme por codigo");
		printf("\n4-Sair do programa");
	
		fflush(stdin);
	
		scanf("%d",&aux);
	
		switch(aux)
		{
			default:
				printf("Comando invalido!");
				break;
			case 1:
				imprime_tabela(tabela_hashing);
				break;
			case 2:
				char nome[200];
				printf("Digite o titulo do filme: ");
				fflush(stdin);
				scanf("%c",&nome);
				busca_titulo(nome,tabela_hashing);
				break;
			case 3:
				int i;
				printf("Digite o codigo do filme: ");
				fflush(stdin);
				scanf("%d",&i);
				busca_codigo(i,tabela_hashing);
				break;

			
		}
	
	}while(aux!=4);
	
	
	
	
	
	
	return 0;

}

