

/*
 programa principal

*/

#include "inserir.h"

int main()
{
    No *lista;
    int i;

    FILE *arquivo;
    arquivo = fopen("agenda.txt","r");//txt tem que está no msm diretorio do programa

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
        fscanf(arquivo," %[^\n]s",nome);
        fscanf(arquivo,"%d",&telefone);
        fscanf(arquivo," %[^\n]s",email);
        fscanf(arquivo," %[^\n]s",endereco);
        lista = inserir(lista,telefone,nome,email,endereco);
    }

    print(lista);
    printf("---------");
    atualizar(lista,990000001);
    printf("---------");
    print(lista);
    printf("---------");
    mostrar(lista,990000001);
    printf("---------");
    print(lista);
    printf("---------");
    lista = remover(lista,990000001);
    printf("---------");
    print(lista);

    return 0;
}
