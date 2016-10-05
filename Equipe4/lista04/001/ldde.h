// Estrutura da lista encadeada
typedef struct ListaDinEncDupla
{
  char nome[40];
  int telefone;
  char email[40];
  char endereco[100];
  struct ListaDinEncDupla *anterior;
  struct ListaDinEncDupla *proximo;
}ldde;

// Ponteiro para ponteiro
ldde *lista;

ldde * cria_lista()
{
  return NULL;
}

int vazia(ldde *lista)
{
  return (lista == NULL);
}

/* Insere elementos na lista */
ldde * insere_na_lista(ldde *lista, int TELEFONE, char NOME[40], char ENDERECO[100], char EMAIL[100])
{
  ldde *nova_lista = (ldde *) malloc(sizeof(ldde));
  /* Adiciona os elementos digitados na estrutura criada*/
  nova_lista->telefone = TELEFONE;
  strcpy(nova_lista->nome,NOME);
  strcpy(nova_lista->endereco,ENDERECO);
  strcpy(nova_lista->email,EMAIL);

  if (lista == NULL)
  {
    nova_lista->anterior = NULL;
    nova_lista->proximo = NULL;
  }
  else
  {
    nova_lista->proximo = lista;
    nova_lista->anterior = NULL;
  }
  return nova_lista;
}

/* Função usada para impressão dos dados*/
void exibir_na_lista(ldde *lista)
{
  /* Cria um ponteiro para  auxiliar nos apontamentos */
  ldde *aux;
  /* Imprime os campos na tela */
  printf("\tNome\t\tTel\t\tEndec\t\tEmail\n");
  for (aux = lista; aux != NULL; aux = aux->proximo)
  {
    printf("\t%s", aux->nome);
    printf("\t\t%d", aux->telefone);
    printf("\t\t%s", aux->endereco);
    printf("\t\t%s\n", aux->email);
  }
}

/* Busca se numero está cadastrado */
ldde * busca_tel_na_lista(ldde *lista, int TELEFONE, int zx)
{
  ldde *aux;
  ldde *anterior = NULL;

  for (aux = lista; aux != NULL; aux = aux->proximo);
  {
    if ((aux->telefone) = TELEFONE)
    {
      printf("\t\tNúmero foi encontrado\n");
      printf("\t\tNome\t\tTelefone\n");
      printf("\t\t%s\t\t%d\n", aux->nome, aux->telefone);

      if (zx == 1)
      {
        if (anterior == NULL)
        {
          lista = aux->proximo;
        }
        else
        {
          aux->anterior->proximo = aux->proximo;
        }
        aux->proximo->anterior = aux->anterior;
      }
      free(aux);
      return lista;
    }
  }
}
