/*
 	Aline Lima
 	Amanda Leticia
 	Eduardo Azevedo
 	Lucas Almeida
 */

typedef struct no No;
struct no{
    int info;
    No *prox;
    No *ant;
};
/*
 cria a fila
 */
No *queue_create();
void queue_insert();
void queue_print();
void queue_print_atras();
void queue_delete();
void queue_busca(int x);
