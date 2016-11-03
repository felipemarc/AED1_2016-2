/*
 	Aline Lima
 	Amanda Leticia
 	Eduardo Azevedo
 	Lucas Almeida

2) Criar um programa que use uma tabela hash para armazenar e buscar os filmes usando seu título.

 */
 
    #include <stdio.h>
    #include <stdlib.h>
    #include "hash.h"
    #include "filme.h"
     
    int main()
    {
    	Hash* h = hash_criar();
    	char title[255];
    	int teste= 17770,i,aux;
    	char str_busca[255]= "";
    	int indice_busca = 3;
    	
    	for(i=0;i<teste;i++){
    		scanf ("%[^\n]%*c", title);
    		long long int  codigo = hash_name(hash_gettitulo(title));
    		codigo = hash_getindice(title); 
    		hash_inserir(h, codigo, filme_criar(hash_getindice(title), hash_gettitulo(title), hash_getano(title)));	
		}
		
		hash_imprimir_tabela(h);
		
		Filme *filme_buscado;
		
		//Verifica se a string de busca tem algo, caso contrário busca pelo íncdice
		if(strcmp(str_busca,"")){
			printf("...Procurando por: \"%s\" \n",str_busca);
			filme_buscado = (Filme*)hash_buscar(h,hash_name(str_busca));
		}
		else{
			printf("...Procurando por: \"%d\" \n",indice_busca);
			filme_buscado = (Filme*)hash_buscar(h,indice_busca);
		}
		if(filme_buscado!= NULL){
			puts("---FILME ENCONTRADO----");
			printf("Indice: %d\nTitulo: %s\nAno: %d\n",filme_getindice(filme_buscado),filme_gettitulo(filme_buscado), filme_getano(filme_buscado));
		}
		else{
			puts("---FILME NAO ENCONTRADO----");
		}

		hash_destruir(h);
    	return 0;
    }
