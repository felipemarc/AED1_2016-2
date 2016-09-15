/*
    Aline Lima
    Amanda Leticia
    Eduardo Azevedo
    Lucas Almeida
 
5) Implemente a Busca Sequencial em C
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>



int main(int argc, const char * argv[])
{
    int i;
    
    FILE *file1 = fopen("arq1.txt","w");
    FILE *file2 = fopen("arq2.txt","w");
    FILE *file3 = fopen("arq3.txt","w");
    FILE *file4 = fopen("arq4.txt","w");
    FILE *file5 = fopen("arq5.txt","w");
    FILE *file6 = fopen("arq6.txt","w");
    FILE *file7 = fopen("arq7.txt","w");
    FILE *file8 = fopen("arq8.txt","w");
    FILE *file9 = fopen("arq9.txt","w");
    
    
    for(i=0;i<10000;i++)
    {
        fprintf(file1, "%d ", i);
    }

    
    for(i=10000;i>0;i--)
    {
        fprintf(file2, "%d ", i-1);
    }

    
    for(i=0;i<10000;i++)
    {
        fprintf(file3, "%d ", rand()%100000);
    }
    
    for(i=0;i<100000;i++)
    {
        fprintf(file4, "%d ", i);
    }
    
    for(i=100000;i>0;i--)
    {
        fprintf(file5, "%d ", i-1);
    }
    
    
    for(i=0;i<100000;i++)
    {
        fprintf(file6, "%d ", rand()%200000);
    }
    
    for(i=0;i<1000000;i++)
    {
        fprintf(file7, "%d ", i);
    }
    
    for(i=1000000;i>0;i--)
    {
        fprintf(file8, "%d ", i-1);
    }
    
    
    for(i=0;i<1000000;i++)
    {
        fprintf(file9, "%d ", rand()%2000000);
    }
    
    fclose(file1);
    fclose(file2);
    fclose(file3);
    fclose(file4);
    fclose(file5);
    fclose(file6);
    fclose(file7);
    fclose(file8);
    fclose(file9);
    
    return 0;

}
