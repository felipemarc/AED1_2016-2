#include<stdio.h>

int multiplica(int n1, int n2,int acm)
{
	if(n1==0)
		return acm;
	else
		return multiplica(n1-1, n2, acm+n2);
}

int main()
{
	int n1, n2, acm = 0;
	n1 = 6;
	n2 =4;
	printf("%d\n", multiplica(n1, n2, acm));
	return 0;
}
