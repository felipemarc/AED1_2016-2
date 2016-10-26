    #include <stdio.h>
    #include <stdlib.h>
    #include "hash.h"
    #include "filme.h"
     
    int main()
    {
    	Hash* h = hash_criar();
    	char title[255];
    	int teste= 1,i,aux;
    	for(i=0;i<teste;i++){
    		scanf ("%[^\n]%*c", title);
    		hash_inserir(h, hash_name(hash_gettitulo(title)), filme_criar(hash_getindice(title), hash_gettitulo(title), hash_getano(title)));
			int codigo = hash_name(hash_gettitulo(title));
			//printf("--%s--Main code: %d\n",hash_gettitulo(title),codigo);
    		//hash_gettitulo(title);
    		//printf("Titulo: %s \nAno: %d\nIndice: %d\n",hash_gettitulo(title),hash_getano(title),hash_getindice(title));	
		}
		char str_teste[255]= "casa";
		Filme *c = (Filme*)hash_buscar(h,hash_name(str_teste));
	    printf("Indice: %d\nTitulo: %s\nAno: %d\n",filme_getindice(c),filme_gettitulo(c), filme_getano(c));
		/*puts("_____________________________________Searching");
		printf("Brute code: %d\n",hash_name(str_teste));*/
	//	hash_buscar(h,hash_name(str_teste));
		hash_imprimir_tabela(h);
		hash_destruir(h);
    	return 0;
    }
