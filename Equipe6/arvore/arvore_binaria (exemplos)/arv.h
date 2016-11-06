typedef struct arv Arv;
typedef struct arvno ArvNo;

Arv* 	 arv_cria (void);
ArvNo* arv_criano (char info, ArvNo* esq, ArvNo* dir);
void 	 arv_libera (Arv* aux);
void 	 arv_imprime (Arv* aux);
int 	 arv_pertence (Arv* aux, char info);
ArvNo* arv_busca (Arv* aux, char info);
