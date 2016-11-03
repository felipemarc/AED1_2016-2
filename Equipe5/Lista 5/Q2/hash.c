    #include "hash.h"
    #include "lista.h"
    #include <stdlib.h>
    #include <stdio.h>
    #include <string.h>
    #define TAMANHO    500
     
    struct hash
    {
    	Lista* vet[TAMANHO];
    };
     
     //Funcao cria espaço num vetor com uma struct contendo: 
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
    
     //Funcao para inserir os elementos na hash:
    void hash_inserir(Hash* h, long long int codigo, void *item)
    {
    	int chave = (int)(codigo % TAMANHO);
    	lista_inserirInicio(h->vet[chave], codigo, item);
    }
    
    //Funcao imprime tabela hash:
    void hash_imprimir_tabela(Hash* h){
    	int i,tam_lista;
    	for(i =0;i<TAMANHO;i++){
			int tam_lista= lista_tamanho(h->vet[i]);
			printf("Tamanho da lista na posicao %d : %d\n",i,tam_lista);
			//lista_imprimir_conteudo(h->vet[i]);
			puts("");
		}
	}

    void* hash_buscar(Hash* h, long long int codigo)
    {
    	int indice = codigo % TAMANHO;
    	//printf("Indice de busca: %d\nCodigo: %d",indice,codigo);
        return lista_buscarCodigo(h->vet[indice], codigo);
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
    		//contador para verificar o inicio do titulo do filme apos serem contadas duas virgulas
			if(conta_virgula>=2){
			    size_t len = strlen(title);
			    char *str2 = malloc(len + 1 + 1 ); // um pra char extra, um para zero a direita
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
	long long int hash_name(char titulo[]){
		long long int hashnum= 7; 	//hashnum dos titulo ja incia com um numero primo
		int i,namesize,asc_value;
		namesize= strlen(titulo);
		for(i=0;i<namesize;i++){
			asc_value= (int)titulo[i];
			//calculo com numeros primos para garantir que nao existam hash's iguais
			hashnum= hashnum*13 +asc_value; 
			//printf("--%c--",titulo[i]); Teste do char sendo feito hash para cada título
		}
	    return abs(hashnum); //Retornar código positivo
	}
