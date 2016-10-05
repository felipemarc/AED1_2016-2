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

#include "lista.h"

int main()
{
    No *lista;
    int i;

    lista = criar();

    print(lista);


    lista = push(lista,993330822,"diogo","diogo.abreu1992@gmail.com","Rua A4,Conjuto Flamboyant, Bairro Flores,casa 1");
    print(lista);

    printf("---------");

    lista = push(lista,996010793,"Lucgol","lucivaldo1@petrobras.com","Rua A4,Conjuto Flamboyant, Bairro Flores,casa 1");
    print(lista);

    printf("---------");

    lista = push(lista,992872435,"Dandan","danilo1990@hotmail.com","Rua A4,Conjuto Flamboyant, Bairro Flores,casa 1");
    print(lista);

    printf("---------");

    lista = pop(lista,996010793);
    print(lista);

    printf("---------");

    lista = pop(lista,993330822);
    print(lista);

    printf("---------");

    lista = pop(lista,992872435);
    print(lista);

    printf("---------");

    lista = push(lista,996010793,"Lucgol","lucivaldo1@petrobras.com","Rua A4,Conjuto Flamboyant, Bairro Flores,casa 1");
    mostrar(lista,996010793);



    return 0;
}
