/* 	Equipe 01:
	Diogo Abreu
	Elisandra Oliveira
	Fernando Calderaro
	Leticia Mota
	Luana Andrade
	Rodrigo Oliveira
	Thailana Neves

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

    printf("\nInfome o nome:\n");
    scanf(" %[^\n]s",nome);
    printf("Informe telefone:\n");
    scanf("%d",&telefone);
    printf("infome o email:\n");
    scanf(" %[^\n]s",email);
    printf("infome o endereço:\n");
    scanf(" %[^\n]s",endereco);


    lista = inserir(lista,telefone,nome,email,endereco);
    print(lista);
    atualizar(lista,telefone);
    mostrar(lista,telefone);
    lista = remover(lista,telefone);
    print(lista);

    return 0;
}
