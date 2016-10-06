/*
    Aline Lima
    Amanda Leticia
    Eduardo Azevedo
    Lucas Almeida

1) Crie uma agenda em forma de lista duplamente encadeada
- CRUD completo: inserir, deletar, atualizar, mostrar e listar
- dados nome, endereço, telefone e email
- a chave de busca será o número de telefone ( apenas números )
 */

//programa principal

#include "lista.h"
#include <stdio.h>
#include <string.h>

int main()
{
    int i, tel;
    char nome1[30], end1[30], email1[30], new_name[30], new_end[30];

    primeiro = queue_create();
    ultimo = queue_create();

   for (i=0;i<49;i++)
    {
        scanf("%s", &nome1);
        scanf("%s", &end1);
        scanf("%d", &tel);
        scanf("%s", &email1);
        printf(" leu !\n");
        queue_insert(nome1, end1, tel, email1);
    }

    queue_print();
    // mostrar
	queue_search(12345);
	queue_search(3672);

	// atualizar
	queue_update(12345, "jucimar" , "uea");
	queue_search(12345);
	queue_update(3672, "maria" , "ufam");
	queue_search(3672);

	queue_print();

	// deletar
	queue_delete(12345);
	queue_delete(3672);

	queue_print();

    fclose(arquivo);
    return 0;
}

