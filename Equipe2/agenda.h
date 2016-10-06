#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#ifdef WIN32
  #define CLEARSCR system ( "cls" )
#else
  #define CLEARSCR system ( "clear" )
#endif

typedef struct agenda Agenda;

struct agenda
{
    char nome[50];
	char endereco[100];
	int tel;
	char email[50];
    Agenda *next;
    Agenda *prev;
    Agenda *inicio;
    Agenda *fim;
};

void nova_agenda(Agenda *agend)
{
    agend->inicio = NULL;
	agend->fim = NULL;
}

void insere(Agenda *agend)
{
    Agenda *novo;
    novo = (Agenda*)malloc(sizeof(Agenda));
    strcpy(novo->nome, agend->nome);
    strcpy(novo->endereco, agend->endereco);    
    novo->tel = agend->tel;
    strcpy(novo->email, agend->email);
    novo->next = NULL;
    
    if (agend->inicio == NULL)
    {
        agend->inicio = novo->prev;
        agend->fim = novo->next;
        agend->next = NULL;
        agend->prev = NULL;
    }
    else
    {
        agend->next = novo->prev;
        novo->prev = agend->next;
        agend->fim = novo;
        novo->next = NULL;
    }
    
}

void imprime(Agenda *agend)
{
  Agenda *aux;
  printf("Nome Telefone  Endereco  Email\n\n");
  for (aux = agend; aux != NULL; aux = aux->next)
  {
    	printf("%s\t", aux->nome);
    	printf("%d\t", aux->tel);
    	printf("%s\t", aux->endereco);
    	printf("%s\n", aux->email);
  }
}

int mostrar(Agenda *agend, int tel)
{
	Agenda *aux;
	for (aux = agend; aux != NULL; aux = aux->next)
	{
		if(tel == aux->tel)
			printf("\t%s", aux->nome);
    		printf("\t%d", aux->tel);
	    	printf("\t%s", aux->endereco);
    		printf("%s\n", aux->email);	
    		return 0;
    }
	printf("Numero nao encontrado na agenda !\n");
}


int delete (Agenda *agend, int tel)
{
    Agenda *aux, *anterior, *proximo;
	for (aux = agend; aux != NULL; aux = aux->next)
	{
		if(aux->prev !=NULL)
		{
			proximo = aux->next;
			anterior = aux->prev;
			if(aux->tel == tel)
			{
				aux->next = NULL;
				aux->prev = NULL;
				proximo->prev = anterior->next;
				anterior->next = proximo->prev;
				free(aux);
				return 1;
			}
		}
		else
			proximo = aux->next;
			if(aux->tel == tel)
			{
				aux->next = NULL;
				proximo->prev = anterior->next;
				free(aux);
				return 1;
			}
	}
	printf("Item não encontrado ou lista vazia !");
}

void atualizar(Agenda *agend, int tel)
{
	Agenda *aux;
	int valor;
	for (aux = agend; aux != NULL; aux = aux->next)
	{
		if(tel == aux->tel)
			printf("1 - Nome\n");
        	printf("2 - Endereco\n");
	        printf("3 - Telefone\n");
    	    printf("4 - Email\n");
    		printf("Qual campo vc deseja editar? :");
	    	__fpurge(stdin);
	    	switch(valor)
	    	{
	    		case 1:
	    			
	    			printf("Digite o novo nome: ");
	    			scanf("%[^\n]", agend->nome);
                	__fpurge(stdin);
	    			break;
	    		case 2:
	    			printf("Digite o novo endereco: ");
	    			scanf("%[^\n]", agend->endereco);
                	__fpurge(stdin);
	    			break;
	    		case 3:
	    			printf("Digite o novo telefone: ");
	    			scanf("%d", agend->tel);
	    			break;
	    		case 4:
	    			printf("Digite o novo email: ");
	    			scanf("%[^\n]", agend->email);
                	__fpurge(stdin);
	    			break;		
	    	}
    }
}

void limpa_tela()
{
    CLEARSCR;
}
