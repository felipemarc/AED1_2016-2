    #include "filme.h"
    #include "string.h"
    #include <stdlib.h>
     
    struct filme
    {
    	int indice;
    	char titulo[255];
    	int ano;
    };
     
    Filme* filme_criar(int indice, char titulo[], int ano)
    {
    	Filme *c = (Filme*) malloc (sizeof(Filme));
    	c->indice = indice;
    	strcpy(c->titulo, titulo);
    	c->ano = ano;
    	return c;
    }
     
    int filme_getindice(Filme *c)
    {
    	return c->indice;
    }
     
    char* filme_gettitulo(Filme *c)
    {
    	return c->titulo;
    }
     
    int filme_getano(Filme *c)
    {
    	return c->ano;
    }
     
     
    void filme_setindice(Filme *c, int indice)
    {
        c->indice = indice;
    }
     
    void filme_settitulo(Filme *c, char titulo[])
    {
        strcpy(c->titulo, titulo);
    }
     
    void filme_setano(Filme *c, int ano)
    {
        c->ano = ano;
    }
     
    void filme_destruir(Filme *c)
    {
        free(c);
        c = NULL;
    }
    void filme_imprimir(Filme *c)
    {
    	printf(" indice: %d\n titulo: %s \n ano: %d",filme_getindice(c),filme_gettitulo(c),filme_getano(c));
    }
   /*int main(){
    	Filme* f = filme_criar(1,"A volta dos que nao foram",2016);
    	printf(" indice: %d\n titulo: %s \n ano: %d",filme_getindice(f),filme_gettitulo(f),filme_getano(f));
    	return 0;
	}*/
