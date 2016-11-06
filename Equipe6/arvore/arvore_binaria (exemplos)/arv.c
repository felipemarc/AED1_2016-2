#include <stdio.h>
#include <stdlib.h>

/* Estrutura que representa um nó de uma árvore binária
 * que armazena valores de caracteres
 */
typedef struct arvno ArvNo;
struct arvno
{
	char info; // Informação que será armazenada no nó
	ArvNo* esq; // Nó esquerdo
	ArvNo* dir; // Nó direito
};

/* Estrutura que armazena a árvore como um todo. Sendo necessário
 * o armazenamento de um ponteiro para o nó raiz. A partir da raiz 
 * temos acesso aos demais nós
 */
typedef struct arv Arv;
struct arv
{
	ArvNo* raiz; // Nó raiz
};

/* Função para criação de novos nós na árvore, tendo como parâmetros a informação (info)
 * e as duas subárvores associadas
 */
ArvNo* arv_criano (char info, ArvNo* esq, ArvNo* dir)
{
	ArvNo* aux = (ArvNo*) malloc(sizeof(ArvNo));
	aux->info = info;
	aux->esq = esq;
	aux->dir = dir;
	return aux;
}

/* Função cria a representação do tipo abstrato, recebendo como parâmetro o nó raiz */
ArvNo* arv_cria (ArvNo* raiz)
{
	ArvNo* aux = (ArvNo*) malloc(sizeof(ArvNo));
	aux->raiz = raiz;
	return aux;
}

/* Função recursiva para imprimir a informação de todos os nós da árvore,
 * devemos primeiro testar se a árvore está vazia; se não for, imprimimos
 * a informação associada à raiz e chamamos (recursivamente) a função para
 * imprimir as subárvores a partir de suas raízes
 */
stativ void imprime (ArvNo* raiz)
{
	if (raiz != NULL)
	{
		printf("%c ", raiz->info); /* mostra informação */
		imprime(raiz->esq);				 /* Imprime sae */
		imprime(raiz->dir);				 /* Imprime sad */
	}
	//printf(">");
}

void arv_imprime (Arv* aux)
{
	imprime (aux->raiz); /* Imprime recursivamente a partir da raiz */
}

/* Função que libera a memória a memória alocada pela estrutura da árvore.
 * Novamente, teremos duas funções: a recursiva para liberar os nós e a 
 * função externa para liberar a estrutura da árvore
 */
static void libera (ArvNo* raiz)
{
	if (raiz != NULL)
	{
		libera(raiz->esq);	/* libera sae */
		libera(raiz->dir);	/* libera sad */
		free(raiz);					/* libera o nó raiz */		
	}
}

void arv_libera (Arv* aux)
{
	libera(aux->raiz); /* libera hierarquia de nós */
	free(aux);				 /* libera raiz */
}

/* Função que percorre a árvore verificando a ocorrência de 
 * determinado caractere (info) em um de seus nós. Essa função 
 * tem como retorno um valor booleano (um ou zero) indicando a
 * ocorrência ou não do caractere na estrutura 
 */
static int pertence (ArvNo* raiz, char info)
{
	if (raiz == NULL)
		return 0;				/* Árvore vazia: não encontrou */
	else
		return (info == raiz->info ||
						pertence (raiz->esq, info) ||
					  pertence (raiz->dir, info));
}

int arv_pertence (Arv* aux, char info)
{
	return pertence (aux->raiz, info);
}

/* Função que percorre a árvore verificando a ocorrência de 
 * determinado caractere (info) em um de seus nós. Essa função
 * tem como retorno o próprio nó. Se a informação não for 
 * encontrada na estrutura tem-se como retorno NULL
 */
static ArvNo* busca (ArvNo* raiz, char info)
{
	if (raiz == NULL)
		return NULL;	/* árvore vazia: não encontrou */
	else if (info == raiz->info)
		return raiz;
	else
	{
		ArvNo* aux = busca(raiz->esq, info);	/* busca na sae */
		if (aux != NULL)
			return aux;													/* encontrou na sae */
		else
			return busca(raiz->dir, info);			/* busca na sad */
	}
}

ArvNo* arv_busca (Arv* aux, char info)
{
	return busca (aux->raiz, info);
}

