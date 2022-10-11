//FIBONACCI
//A famosa sequência de Fibonacci é aquela em que 
//um elemento é definido como sendo a soma dos dois anteriores.
//Memorização --> Vetor

#include <stdlib.h>
#include <stdio.h>

unsigned long int memoria[81];

long int fibonacci(int n){

    if (n <= 2 ){
        return 1;
    }if (memoria[n] !=0 ) {
        return memoria[n];
    }else{
        memoria[n] = fibonacci(n-1) + fibonacci(n-2);
        return memoria[n];
    }
    
}