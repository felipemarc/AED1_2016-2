#include <stdio.h>
#include <stdlib.h>

typedef struct arvn Arvn;
typedef struct arvnno ArvnNo;
struct arvnno
{
	char info;
	ArvnNo* prim;	/* ponteiro para eventual primeiro filho */
	ArvnNo* prox;	/* ponteiro para eventual irmão */
};

struct arvn
{
	ArvnNo* raiz;
};

/* Função para alocar uma folha. Deve alocar o nó e inicializar 
 * seus campos, atribuindo NULL aos campos (prim) e (prox), pois
 * trata-se de um nó folha isolado
 */
ArvnNo* arvn_criano (char info);
{
	ArvnNo *aux = (ArvnNo*) malloc(sizeof(ArvnNo));
	aux->info = info;
	aux->prim = NULL;
	aux->prox = NULL;
	return aux;
}

/* Função que insere uma nova subárvore como filha de um dado nó. 
 * Como não será atribuido nenhum significado especial à posição
 * de um nó filho, a operação de inserção pode inserir a subárvore
 * em qualquer posição. Neste caso será inserida no início da lista,
 * que é a maneira mais simples de inserir um elemento numa lista encadeada
 */
void arvn_insere (ArvnNo* aux, ArvNo* saux)
{
	saux->prox = aux->prim;
	aux->prim = saux;
}
/* Função que cria a extrutura externa que representa a árvore */
Arvn* arvn_criar (ArvnNo* raiz)
{
	ArvnNo *aux = (ArvnNo*) malloc(sizeof(ArvnNo));
	aux->raiz = raiz;
	return aux;
}

/* Função de impressão das infomações associadas aos nós da árvore.
 * Nesse caso será usado PRÉ-ORDEM
 */
static void imprime (ArvnNo* raiz)
{
	printf(" <%c", raiz->info);
	for (ArvnNo* aux = raiz->prim; aux != NULL; aux = aux->prox)
		imprime(aux);
	printf(">");
}

void arvn_imprime (Arvn* aux)
{
	if (aux->raiz != NULL)
		imprime (aux->raiz);
}

/* Função para verificar a ocorrência de uma dada infomação
 * na árvore
 */
static ArvnNo* busca (ArvnNo* raiz, char info)
{
	if (raiz->info == info)
		return info;
	else
	{
		for (ArvnNo* aux = raiz->prim; aux != NULL; aux = aux->prox)
		{
			ArvnNo* saux = busca(aux, info);
			if (saux != NULL)
				return saux;
		}
		return NULL;
	}
}

ArvnNo* arvn_busca (Arvn* aux, char info)
{
	if (aux->raiz == NULL)
		return NULL;
	else
		return busca (aux->raiz, info);
}

/* Função que libera da memória árvore alocada */
static void libera (ArvnNo* raiz)
{
	ArvnNo *aux = raiz->prim;
	while (aux != NULL)
	{
		ArvnNo* saux = aux->prox;
		libera(aux);
		aux = saux;
	}
	free(raiz);
}

void arvn_libera (Arvn* aux)
{
	if (aux->raiz != NULL)
		libera (aux->raiz);
	free(aux);
}

int main()
{
	/* cria nós como folhas */
	ArvnNo* a = arvn_criano ('a');
	ArvnNo* b = arvn_criano ('b');
	ArvnNo* c = arvn_criano ('c');
	ArvnNo* d = arvn_criano ('d');
	ArvnNo* e = arvn_criano ('e');
	ArvnNo* f = arvn_criano ('f');
	ArvnNo* g = arvn_criano ('g');
	ArvnNo* h = arvn_criano ('h');
	ArvnNo* i = arvn_criano ('i');
	ArvnNo* j = arvn_criano ('j');
	
	/* monta a hierarquia */
	arvn_insere (c,d);
	arvn_insere (b,e);
	arvn_insere (b,c);
	arvn_insere (i,j);
	arvn_insere (g,i);
	arvn_insere (g,h);
	arvn_insere (a,g);
	arvn_insere (a,f);
	arvn_insere (a,b);
	
	/* cria árvore */
	Arvn* x = arvn_cria (a);
	// ...
	
	arvn_imprime (x);
	arvn_libera (x);
	return 0;
}
