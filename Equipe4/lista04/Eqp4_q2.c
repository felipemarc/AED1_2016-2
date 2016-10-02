#include <stdio.h>



typedef struct Listac
{
	int data;
	struct ListaC *prox;
};

typedef struct Listac listac;


listac* cria(int data)
{
	listac* retorno = (listac*) malloc(sizeof(listac));
	retorno->data=data;
	retorno->prox = retorno;
	return retorno;
}


void insere(listac* lista, int data)
{

    if(lista == NULL) return;
    listac* loop;
    for(loop = lista; loop->prox != lista; loop = loop->prox);
    loop = loop->prox = (listac*) malloc(sizeof(listac));
    loop->data = data;
    loop->prox = lista;
    loop = NULL;
}


listac* procura(listac* lista, int find, int params)

{
    if(lista == NULL) 
	{
	return NULL;	
	} 
    listac *loop = lista;
    listac *resposta;
    int contador = 0;
    do
    {
        if(loop->data == find)
        {
            if(params == 0)
            {
                return loop; 
            }
            contador++;
        }
        loop = loop->prox;
    } while(loop != lista);
    resposta = cria(contador);
    return resposta;
}

listac* deleta(listac* lista, listac* elemento)
{

    if(lista == NULL || elemento == NULL)
	{
		return false; 
	}
    if(elemento == lista && lista->prox == lista)
    {
        free(lista);
        lista = NULL;
        return NULL; 
    }
    listac* loop = lista;
    if(elemento == lista && lista->prox != lista)

    { 

        for(loop->prox != lista; loop = loop->prox){
		
        loop->prox = lista->prox; 
        listac* temp = lista;
        lista = lista->prox; 
        free(temp);
        temp = loop = NULL; 
        return lista; 
		}
    }
    do
    {
        if(loop->prox == elemento)
        { 
            loop->prox = elemento->prox;
            free(elemento);
            elemento = NULL;
            break;
        }
        loop = loop->prox;
    } while(loop != lista);
    loop = NULL;
    return lista; 
}
