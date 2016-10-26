    #ifndef FILME_H_INCLUDED
    #define FILME_H_INCLUDED
     
    typedef struct filme Filme;
     
    Filme* filme_criar(int indice, char titulo[], int ano);
     
    int filme_getindice(Filme *c);
    char* filme_gettitulo(Filme *c);
    int filme_getano(Filme *c);
     
    void filme_setindice(Filme *c, int indice);
    void filme_settitulo(Filme *c, char titulo[]);
    void filme_setano(Filme *c, int ano);     
    void filme_destruir(Filme *c);
    void filme_imprimir(Filme *c);
    #endif // filme_H_INCLUDED
