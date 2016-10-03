

#include <stdio.h>
#include "lista4.1.h"

int main(int argc, const char * argv[]) 
{
    Lista lista;
    create(&lista);
    
    Item it1 = {90};
    insert(&lista,it1);
    
    print_lista(&lista);
    
  return 0;
} 
