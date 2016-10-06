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
		{
			printf("Nome Telefone  Endereco  Email\n");
			printf("%s\t", aux->nome);
    		printf("%d\t", aux->tel);
	    	printf("%s\t", aux->endereco);
    		printf("%s\n", aux->email);	
    		return 0;
		}
    }
	printf("Telefone não encontrado na agenda ou agenda vazia !\n");
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
	printf("Telefone não encontrado na agenda ou agenda vazia !\n");
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
	    	}
			return 0;		
		}    
	}
	printf("Telefone não encontrado na agenda ou agenda vazia !\n");
}

void limpa_tela()
{
    CLEARSCR;
}
