//VETOR 2
/*
CONTEXTO
-> Faça um programa que leia um vetor e imprima o 
índice do menor elemento contido no vetor.

ENTRADA
-> A entrada é composta por um único caso de teste. 
Na primeira linha do caso de teste há um número inteiro N 
e na segunda linha do caso de teste há N números V_i, 
cada número V_i representa um elemento do vetor.

SAIDA
-> A saída é composta por exatamente uma linha, 
contendo o índice do menor elemento do vetor.
*/
#include <stdio.h>

int main(){
    int repetirVetor;

    scanf("%d", &repetirVetor);

    int vetor[repetirVetor];
    int menorIndice = 0;
    int menorValor;

    scanf("%d", &vetor[0]);

    menorValor = vetor[0];
    
    for (int i = 1; i < repetirVetor; i++) {
        scanf("%d", &vetor[i]);
        
        if (vetor[i] < menorValor){
            menorValor = vetor[i];
            menorIndice = i;
        }
    }

    printf("%d\n", menorIndice);

    return 0;
}