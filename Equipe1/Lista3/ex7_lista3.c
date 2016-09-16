/* 	Equipe 01:
	Diogo Abreu
	Elisandra Oliveira
	Fernando Calderaro
	Leticia Mota
	Luana Andrade
	Rodrigo Oliveira
	Thailana Neves

	Exercicio 07
	Pesquise e Implemente a Busca Sequencial com Sentinela em C,
*/

int busca(int vet[],int valor)
{
	vet[tam] = valor;
	int i = 0;
	//se valor for diferente do vetor de indice i adiciona +1
	while(valor != vet[i])
	{
		i=i+1;
	}
	//se o i for menor que tamanho ele retornara o mesmo
	if(i<tam)
	{
		return i;
	}
	else
	{
		return -1;
	}
}
 

int main(int argc,const char *argv[])
{
	int i,num,valor,vet[tam];	
	//usando atoi para pegar um valor através do argv que será passado pelo terminal  
	valor=atoi(argv[1]);	
	//lendo o vetor
	for(i=0;i<=tam-1;i++)
	{
		scanf("%d",&vet[i]);
	}
	//chamando a função busca
	num = busca(vet,valor);
	printf("O valor %d foi encontrado \n",num);

}


