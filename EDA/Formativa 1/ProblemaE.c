//Some os Numeros Pares e Impares
/*
CONTEXTO: 
-> O jovem Leon está muito encafifado NOVAMENTE. 
Ele precisa somar todos os números pares de uma lista 
gigantesca de números. E ele não quer fazer isso manualmente, 
para resolver este problema, Leon, pediu sua ajuda para fazer 
um programa de computador que faça esta infrutífera conta.

ENTRADA:
-> A entrada é composta por diversos números inteiros N_i 
e termina quando o número lido for 0.

SAIDA: 
-> A saída é composta por uma única linha contendo a 
soma de todos os números pares e ímpares da sequência de números.
*/

#include <stdio.h>

int main(){

    int entrada;
    int somaPar = 0;
    int somaImpar = 0;

    scanf("%d", &entrada);

    while (entrada != 0)
    {
        if(entrada % 2 == 0)
            somaPar += entrada;
        else
            somaImpar += entrada;
        
        scanf("%d", &entrada);
    }
    
    printf("%d %d\n", somaPar, somaImpar);

    return 0;
}