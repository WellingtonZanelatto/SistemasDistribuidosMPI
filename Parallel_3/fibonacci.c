#include <stdio.h>

int main(void) 
{
    int n=1, fib=0, aux=0;    
    printf("Será calculado a seq. de Fibonacci de 1 a 1000 \n ");

    for(fib=0; fib<1000; fib+=aux) { //Só vai m strar até 1000 
        printf("%d ", fib);                   
        aux = n;
        n = fib;        
    }
    printf("\n");    
    
    return 0;
}
