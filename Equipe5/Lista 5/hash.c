    #include "hash.h"
    #include "lista.h"
    #include <stdlib.h>
    #include <stdio.h>
    #include <string.h>
    #define TAMANHO    20
     
    struct hash
    {
    	Lista* vet[TAMANHO];
    };
     
    Hash* hash_criar()
    {
    	int i;
    	Hash* h = malloc(sizeof(Hash));
    	for (i = 0; i < TAMANHO; i++)
    	{
    		h->vet[i] = lista_criar();
    	}
    	return h;
    }
     
    void hash_inserir(Hash* h, int codigo, void *item)
    {
    	int chave = (codigo % TAMANHO);
    	lista_inserirInicio(h->vet[chave], codigo, item);
    }
    void hash_imprimir_tabela(Hash* h){
    	int i,tam_lista;
    	for(i =0;i<TAMANHO;i++){
			int tam_lista= lista_tamanho(h->vet[i]);
			printf("Tamanho da lista na posicao %d : %d\n",i,tam_lista);
			lista_imprimir_conteudo(h->vet[i]);
			puts("");
		}
	}

    void* hash_buscar(Hash* h, int codigo)
    {
    	int indice = codigo % TAMANHO;
    	//printf("Indice de busca: %d\nCodigo: %d",indice,codigo);
        return lista_buscarCodigo(h->vet[codigo % TAMANHO], codigo);
    }
     
    void hash_destruir(Hash* h)
    {
    	int i;
    	for (i = 0; i < TAMANHO; i++)
    	{
    		lista_destruir(h->vet[i]);
    	}
    	free(h);
    	h = NULL;
    }
    
    char* hash_gettitulo(char titulo[])
    {
    	int titulo_lenght= strlen(titulo);
    	int i,conta_virgula=0;
    	char *title = "";
    	for(i=0;i< titulo_lenght;i++){
			if(conta_virgula>=2){
			    size_t len = strlen(title);
			    char *str2 = malloc(len + 1 + 1 ); /* one for extra char, one for trailing zero */
			    strcpy(str2, title);
			    str2[len] = titulo[i];
			    str2[len + 1] = '\0';
			    title = malloc(len + 1 + 1 );
			    strcpy(title, str2);
			}
			if(titulo[i]== ','){
    			conta_virgula++;
			}
		}
		return title;
    }
    int hash_getano(char titulo[]){
    	int titulo_lenght= strlen(titulo);
    	int i,conta_virgula=0,ano;
    	char *title = "";
    	for(i=0;i< titulo_lenght;i++){
			if(conta_virgula==1){
			    size_t len = strlen(title);
			    char *str2 = malloc(len + 1 + 1 ); /* one for extra char, one for trailing zero */
			    strcpy(str2, title);
			    str2[len] = titulo[i];
			    str2[len + 1] = '\0';
			    title = malloc(len + 1 + 1 );
			    strcpy(title, str2);
			}
			if(titulo[i]== ','){
    			conta_virgula++;
			}
			if(conta_virgula> 1){
    			ano = atoi(title);
				return ano;
			}
		}
		return ano;
	} 
	int hash_getindice(char titulo[]){
		int titulo_lenght= strlen(titulo);
    	int i,conta_virgula=0,indice;
    	char *title = "";
    	for(i=0;i< titulo_lenght;i++){
			if(conta_virgula==0){
			    size_t len = strlen(title);
			    char *str2 = malloc(len + 1 + 1 ); /* one for extra char, one for trailing zero */
			    strcpy(str2, title);
			    str2[len] = titulo[i];
			    str2[len + 1] = '\0';
			    title = malloc(len + 1 + 1 );
			    strcpy(title, str2);
			}
			if(titulo[i]== ','){
    			conta_virgula++;
			}
			if(conta_virgula> 0){
    			indice = atoi(title);
				return indice;
			}
		}
		return indice;
	}
	int hash_name(char titulo[]){
		int hashnum= 0,i,namesize,asc_value;
		namesize= strlen(titulo);
		//printf("Word to Hash %s",titulo);
		for(i=0;i<namesize -1;i++){
			asc_value= (int)titulo[i];
			hashnum= hashnum +asc_value; 
		//	printf("%c",titulo[i]);
		}
	    return hashnum;
	}
