#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void arquivos(int n, int o)
{
	int i;
	if(!o)	for (i=0;i<n;i++) printf("%i\n",i);
	else if(o==1)	for (i=n;i>0;i--) printf("%i\n",i);
	else if(o==2)	for (i=0;i<n;i++) printf("%i\n",rand() % n);
}


int main()
{
	int qtd, ord;
	while(scanf("%i %i", &qtd, &ord) != EOF) {	
	// 0 para ordem crescente
	// 1 para ordem decrescente
	// 2 para ordem aleatória
	arquivos(qtd, ord);
	}
	
	return 0;
}
