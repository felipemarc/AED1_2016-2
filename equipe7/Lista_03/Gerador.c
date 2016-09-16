#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <time.h>

int main (int argc, const char *argv[])
{
	int MAX = atoi(argv[1]);
	int i;
	
	srand(time(NULL));
	
	if(strcmp(argv[2], "d")==0)
	{
		for(i = MAX-1; i>=0;i--) printf("%d ", i);
	}
	else
	if(strcmp(argv[2], "a")==0)
	{
		for(i = 0; i < MAX; i++) printf("%d ", rand()%1000000);
	}
	else for(i = 0; i < MAX; i++) printf("%d ", i);
	
	return 0;
	
}
