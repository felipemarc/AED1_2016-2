    #ifndef HASH_H_INCLUDED
    #define HASH_H_INCLUDED
     
    typedef struct hash Hash;
     
    Hash* hash_criar();
    void hash_destruir(Hash* h);
    void* hash_buscar(Hash* h, int codigo);
    void hash_inserir(Hash* h, int codigo, void *item);
    void hash_imprimir_tabela(Hash* h);
    char* hash_gettitulo(char titulo[]);
    int hash_getano(char titulo[]);
    int hash_getindice(char titulo[]);
    int hash_name(char titulo[]);
    #endif // HASH_H_INCLUDED
