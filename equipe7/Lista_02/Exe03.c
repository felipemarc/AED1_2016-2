#include<stdio.h>

int soma(int m, int n)
{
  if(n == 0)
    return 0;
    
  else
    return soma(m, n-1)+1;
}
