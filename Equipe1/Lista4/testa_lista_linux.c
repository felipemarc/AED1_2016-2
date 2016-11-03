/* 	Equipe 01:
	Diogo Abreu
	Elisandra Oliveira
	Fernando Calderaro
	Leticia Mota
	Luana Andrade
	Rodrigo Oliveira

	Exercicio 01
	Crie uma agenda em forma de lista duplamente encadeada.
        - CRUD completo: inserir, deletar, atualizar, mostrar e listar
        - dados nome, endereço, telefone e email
        - a chave de busca será o número de telefone ( apenas números )
*/


/*
 programa principal

*/


#include "inserir.h"

int main()
{
    No *lista;
    int i;

    int telefone;
    char nome[21];
    char email[21];
    char endereco[31];

   lista = criar();

    print(lista);
    print(lista);
    print(lista);

    for(i=0;i<50;i++)
    {
        scanf(" %[^\n]s",nome);
        scanf("%d",&telefone);
        scanf(" %[^\n]s",email);
        scanf(" %[^\n]s",endereco);
        lista = inserir(lista,telefone,nome,email,endereco);
    }

    print(lista);
    printf("----------");
    atualizar(lista,990000050);
    printf("----------");
    mostrar(lista,990000050);
    printf("----------");
    lista = remover(lista,990000050);
    print(lista);

    return 0;
}
