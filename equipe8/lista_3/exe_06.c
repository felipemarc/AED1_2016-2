#include<stdio.h>

int bus_bin( int x, int n, int *V ){
	int i=0,f=n-1, m, c = 0;
	
	while(i <= f){
		m=(i+f)/2;
		c++;
		if(V[m] == x) return m;
		else if (x < V[m]) f = m-1;
		else if(x > V[m]) i = m+1;
		}
	}
	return 0;
}

int main()
{	
	return 0;
}
