/* 	
	equipe 01:
	Diogo Abreu
	Fernando Calderaro
	Leticia Mota
	Rodrigo Oliveira
	Thailana Neves		
	
	exercicio 01

	Crie uma agenda em forma de lista duplamente encadeada
        - CRUD completo: inserir, deletar, atualizar, mostrar e listar
   	- dados nome, endereço, telefone e email
   	- a chave de busca será o número de telefone ( apenas números )

	}
		
*/


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//criando tipo No.
typedef struct no No;

//cria nó com com dois ponteiros
struct no
{
	int telefone;
	char nome[21];
	char email[21];
        char endereco[31];
	No *next_anterior;
	No *next_posterior;
};

//cria lista
No *criar()
{
	return NULL;
}

//insere elementos na lista
No *inserir(No *lista,int tel,char nom[],char mail[],char ende[])
{
	if(lista==NULL)
	{
		No *temp;
		temp = (No*)malloc(sizeof(No));
		temp->telefone = tel;
		strcpy(temp->nome,nom);
		strcpy(temp->email,mail);
		strcpy(temp->endereco,ende);
		temp->next_anterior = lista;
		temp->next_posterior = lista;
		return temp;
	}
	else
	{
		No *temp;
		temp = (No*)malloc(sizeof(No));
		temp->telefone = tel;
		strcpy(temp->nome,nom);
		strcpy(temp->email,mail);
		strcpy(temp->endereco,ende);
		temp->next_anterior = lista;
		temp->next_posterior = NULL;
		lista->next_posterior = temp;
		return temp;
	}
}

//imprime a lista
void print(No *lista)
{
	No *temp;
    temp = lista;

    if(temp == NULL)
	{
        	printf("\nLista Vazia\n");
	}
	else
	{
		while(temp != NULL)
		{
			printf("\n%s\n",temp->nome);
			printf("%d\n",temp->telefone);
			printf("%s\n",temp->email);
			printf("%s\n",temp->endereco);
			temp = temp->next_anterior;
		}
		printf("\n");
	}
}

//remove da lista o elemento que possui o numero informado
No *remover(No *lista, int tel)
{
	No *temp;
	temp = lista;
	if(temp==NULL)
	{
		printf("\n- Lista Vazia -\n");
		return lista;
	}
	else
	{
		while(temp!=NULL)
		{
			if(temp->telefone==tel)
			{
				No *temp1;
				No *temp2;
				temp1=temp->next_posterior;
				temp2=temp->next_anterior;
				if(temp1!=NULL)
				{
					temp1->next_anterior=temp->next_anterior;
				}
				else
				{
					lista=temp->next_anterior;
				}
				if(temp2!=NULL)
				{
					temp2->next_posterior=temp->next_posterior;
				}
				temp->next_anterior=NULL;
				temp->next_posterior=NULL;
				temp1=NULL;
				temp2=NULL;
				free(temp);
				return lista;
			}
			temp=temp->next_anterior;
		}
		printf("\n- Não foi possivel remover elemento! Lista não possui este elemento! -\n");
		return lista;
	}

}

//modifica dados do elemento da lista que possui o nuero informado
int atualizar(No *lista,int tel)
{
	No *temp;
	temp = lista;
	if(temp==NULL)
	{
		printf("- Lista Vazia -");
		return 0;
	}
	else
	{
		while(temp!=NULL)
		{
			if(temp->telefone==tel)
			{
				int tele;
				char name[21];
			 	char mail[21];
				char ende[31];
                	 	printf("\nInforme novo nome:\n");
                	 	scanf(" %[^\n]s",name);
               			strcpy(temp->nome,name);
                		printf("Informe novo telefone:\n");
                		scanf("%d",&tele);
                		temp->telefone = tele;
               			printf("Informe novo email:\n");
               	 		scanf(" %[^\n]s",mail);
                		strcpy(temp->email,mail);
               			printf("Informe novo endereço:\n");
                		scanf(" %[^\n]s",ende);
                		strcpy(temp->endereco,ende);
               			return 0;
			}

			temp=temp->next_anterior;
		}
		printf("\n- Lista não possui elemento com o numero informado! -\n");
		return 0;
	}

}

//mostra elemento da lista que possui o numero informado
int mostrar(No *lista,int tel)
{
	No *temp;
	temp = lista;
	if(temp==NULL)
	{
		printf("\n- Lista Vazia -\n");
		return 0;
	}
	else
	{
		while(temp!=NULL)
		{
			if(temp->telefone==tel)
			{
                		printf("\n%s\n",temp->nome);
                		printf("%d\n",temp->telefone);
                		printf("%s\n",temp->email);
                		printf("%s\n",temp->endereco);
                		return 0;
			}
			temp=temp->next_anterior;
		}	
		printf("\n- Lista não possui elemento com o numero informado! -\n");
		return 0;
	}

}

