/*
 programa principal
 
 */

#include "myqueue.h"

int main()
{
    int i;
    
    queue_begin = queue_create();
    queue_end = queue_create();
    
    for (i = 0; i< 3; i++)
        queue_insert(i);
    
    queue_print(queue_begin);
    
    queue_delete();
    queue_print(queue_begin);
    
    queue_delete();
    queue_print(queue_begin);
    
    queue_delete();
    queue_print(queue_begin);
    
    return 0;
}

