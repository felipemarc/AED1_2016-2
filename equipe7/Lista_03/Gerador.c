#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <time.h>

int main (int argc, char *argv[])
{
	int MAX = atoi(argv[1]);
	int i;
	
	srand(time(NULL));
	
	
	if(strcmp(argv[2], "D"))
	{
		for(i = MAX-1; i>0;i--) printf("%d ", i);
	}
	else
	if(strcmp(argv[2], "A")
	{
		for(i = 0; i < MAX; i++) printf("%d ", rand()%1000000);
	}
	else for(i = 0; i < MAX; i++) printf("%d ", i);
	
}
