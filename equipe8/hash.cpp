#include<bits/stdc++.h>
#include<stdio.h>
#include<stdlib.h>
#include <fstream>
#include<string.h>

#define arquivo "movie_titles.txt"

using namespace std;

const int tam=359;

struct hash{
	string nome,codigo,ano;
	hash* prox;
};

hash *livro[tam];

int hashing(string x){
	int tam_s = x.size();
	unsigned long long int i=0,cont=1;
	int b;

	for (i = 0;i < tam_s;i++){
		b = abs ( (int) x[i] );
		if(b){
			//tem que ser maior que zero para esse calculo maluco
			cont*= b * (tam_s - i);	
			
		}
		cont+= ((int) x[i])*(tam_s - i);		
	}
	return cont%tam;
}

void inserir(int posicao,string codigo, string ano, string nome){
	
	hash *novo;
	novo = new hash();
	novo->codigo = codigo;
	novo->nome = nome;
	novo->ano = ano;
	novo->prox = livro[posicao];
	livro[posicao] = novo;
	
}

void inserir_livro(){
		
	string str, codigo, ano, nome, linha, config = ",";
	int indice,tamanho,posicao;

	ifstream arquivo_livro(arquivo);
	
	if (arquivo_livro.is_open()){
		
		while ( !arquivo_livro.eof() ){
			
			//aqui eu pego a linha inteira do arquivo
			getline(arquivo_livro,linha);
			
			//aqui eu vou separar os valores quando encontrar virgula
				//separa(linha, ",");
			
				indice = 0;
				
				//so pra nao alterar a linha diretamente
				str = linha;
				tamanho = str.size();
				
				//vamos pegar valor por valor aqui se tiver algo na linha, claro
				if(tamanho){
					
					indice = str.find_first_of(config);
					codigo = str.substr(0,indice);
				
					str = str.substr(indice+1);
					indice = str.find_first_of(config);
					ano = str.substr(0,indice);
				
					nome = str.substr(indice+1);
					//indice = str.find_first_of(config);
					//nome = str.substr(0,indice);
				
					
					//escolher qual valor vai definir a posicao
					posicao = hashing(codigo);
					
					//insere no hash livro
					inserir(posicao,codigo,ano,nome);
				}
		}
	}
}

void mostrar_hash(){
	
	hash *aux;
	
	for(int i=0;i<tam;i++){
		aux=livro[i];
		while(aux!=NULL){
	
			cout<< endl  << aux->codigo << "," << aux->ano<< "," << aux->nome;
	
			aux=aux->prox;
		}
	}
}

void mostrar_codigo(string info){
	
	hash *aux;
	
	int pos = hashing(info);
	
		aux = livro[pos];
		
		while(aux!=NULL){
			if(aux->codigo == info){
				cout<< endl  << aux->codigo << "," << aux->ano<< "," << aux->nome;
				return 0;
			}
			
			aux=aux->prox;
		}
}

void mostrar_nome(string info){
	
	hash *aux;
	
	int pos = hashing(info);
	
		aux = livro[pos];
		
		while(aux!=NULL){
			if(aux->nome == info){
				cout<< endl  << aux->codigo << "," << aux->ano<< "," << aux->nome;
				return 0;
			}
			
			aux=aux->prox;
		}
}



int main(){
	int i;
	string info="";
	
	for(i=0;i<tam;i++){
		livro[i] = NULL;
	}
	
	//begin
	inserir_livro();
	mostrar_hash();
	
	mostrar_codigo(info);
	
	//faz limpeza na memoria
	for(i=0;i<tam;i++){
		while(livro[i]!=NULL){
			hash *aux=livro[i];
			livro[i]=livro[i]->prox;
			delete aux;
		}
		livro[i]=NULL;
	}
	
	return 0;
}
