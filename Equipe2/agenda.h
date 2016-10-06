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
    agenda *next;
    agenda *prev;
};

agenda *inicio;
agenda *fim;


void nova_agenda()
{
    inicio = NULL;
	fim = NULL;
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
//		printf("Eh tois\n");
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
		{
		  	printf("Nome Telefone  Endereco  Email\n");
			printf("%s\t", aux->nome);
    		printf("%d\t", aux->tel);
	    	printf("%s\t", aux->endereco);
    		printf("%s\n", aux->email);	
    		return 0;
		}    
	}
	printf("Numero nao encontrado na agenda !\n");
}


int delete(agenda *agend, int tel)
{
    agenda *aux, *ant, *prox;
	for (aux = inicio; aux != NULL; aux = aux->next)
	{
		if(aux->tel == tel)
		{
			if(aux->prev == NULL)
			{
				inicio->next->prev = NULL;
				inicio->next = NULL;				
				inicio = aux->next;
				return 0;		
			}
			if(aux->next == NULL)
			{
				fim->prev->next = NULL;
				fim->prev = NULL;				
				fim = aux->prev;
				return 0;		
			}		
			if(aux->next != NULL && aux->prev!=NULL)
			{
				ant = aux->prev;
				prox = aux->next;
				ant->next = prox;
				prox->prev = ant;
				free(aux);
				return 0;
			}		
		}			
	}
	printf("Item não encontrado ou lista vazia !\n");
}

int atualizar(agenda *agend, int tel)
{
	agenda *aux;
	int valor;
	for (aux = inicio; aux != NULL; aux = aux->next)
	{
		if(tel == aux->tel)
		{
			printf("1 - Nome\n");
        	printf("2 - Endereco\n");
	        printf("3 - Telefone\n");
    	    printf("4 - Email\n");
    		printf("Qual campo vc deseja editar? :");
	    	scanf("%d", &valor);
	    	switch(valor)
	    	{
	    		case 1:
	    			__fpurge(stdin);
	    			printf("Digite o novo nome: ");
	    			scanf("%[^\n]", aux->nome);
                	__fpurge(stdin);
					strcpy(agend->nome, aux->nome);			    			
					break;
	    		case 2:
	    			printf("Digite o novo endereco: ");
	    			scanf("%[^\n]", aux->endereco);
                	__fpurge(stdin);
					strcpy(agend->endereco, aux->endereco);
	    			break;
	    		case 3:
	    			printf("Digite o novo telefone: ");
	    			scanf("%d", &aux->tel);
					agend->tel = aux->tel;
	    			break;
	    		case 4:
	    			printf("Digite o novo email: ");
	    			scanf("%[^\n]", aux->email);
                	__fpurge(stdin);
					strcpy(agend->email, aux->email);
	    			break;		
				return 0;	    	
			}
		}    
	}
	printf("Item nao encontrado ou lista vazia !\n");
}

void limpa_tela()
{
    CLEARSCR;
}
