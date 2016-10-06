#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#ifdef WIN32
  #define CLEARSCR system ( "cls" )
#else
  #define CLEARSCR system ( "clear" )
#endif

typedef struct agenda agenda;

struct agenda
{
    char nome[50];
	char endereco[100];
	int tel;
	char email[50];
<<<<<<< HEAD
    Agenda *next;
    Agenda *prev;
    Agenda *inicio;
    Agenda *fim;
=======
    agenda *next;
    agenda *prev;
>>>>>>> a88253d446d4b7a0a172be082dccf7f061a18ccd
};

agenda *inicio;
agenda *fim;


void nova_agenda()
{
<<<<<<< HEAD
    agend->inicio = NULL;
	agend->fim = NULL;
=======
    inicio = NULL;
	fim = NULL;
>>>>>>> a88253d446d4b7a0a172be082dccf7f061a18ccd
}

void insere(agenda *agend)
{
    agenda *novo;
    novo = (agenda*)malloc(sizeof(agenda));
    strcpy(novo->nome, agend->nome);
    strcpy(novo->endereco, agend->endereco);    
    novo->tel = agend->tel;
    strcpy(novo->email, agend->email);
    
    if (inicio == NULL)
    {
        inicio = novo;
        fim = novo;
        agend->next = NULL;
        agend->prev = NULL;
//		printf("Eh tois\n");
	}
    else
    {
        fim->next = novo;
        novo->prev = fim;
        fim = novo;
        novo->next = NULL;
		printf("Eh tois\n");
	}
}

void imprime(agenda *agend)
{
	agenda *temp;
  	printf("Nome Telefone  Endereco  Email\n");
  	for (temp = inicio; temp != NULL; temp = temp->next)
  	{
    	printf("%s\t", temp->nome);
    	printf("%d\t", temp->tel);
    	printf("%s\t", temp->endereco);
    	printf("%s\n", temp->email);

  	}
}

int mostrar(agenda *agend, int tel)
{
	agenda *aux;
	for (aux = inicio; aux != NULL; aux = aux->next)
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


<<<<<<< HEAD
int delete (Agenda *agend, int tel)
=======
int delete(agenda *agend, int tel)
>>>>>>> a88253d446d4b7a0a172be082dccf7f061a18ccd
{
    agenda *aux, *anterior, *proximo;
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

void atualizar(agenda *agend, int tel)
{
	agenda *aux;
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
