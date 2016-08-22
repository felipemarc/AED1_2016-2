/*
Equipe2
Hermann Hernani
Lucas Botinelly
Stephanny Barreto
*/

#include<stdio.h>
int somainc(int x, int y)
{
	if (x==0)
		return y;
	else	
		return somainc(x-1, y+1);

}
int main()
{
	int x, y;
	x =3;
	y =2;

	printf("%d\n", somainc(x,y));
	return 0; 
}
