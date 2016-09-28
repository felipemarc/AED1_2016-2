

/*
 programa principal
 
*/

#include "mystack.h"

int main()
{
    No *pilha;
    int i;
    
    pilha = create();
    
    for (i = 0; i< 4; i++)
        pilha = push(pilha, i);
    
    print(pilha);
    
    pilha = pop(pilha);
    print(pilha);
    
    pilha = pop(pilha);
    print(pilha);
    
    pilha = pop(pilha);
    print(pilha);
    
    pilha = pop(pilha);
    print(pilha);
    
    pilha = pop(pilha);
    print(pilha);
    
    return 0;
}
