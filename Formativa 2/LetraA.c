//POTENCIACAO
//--> Faça um programa que receba dois inteiros a e b e calcule a^b.
// Atencao: Use recursao, você nao pode usar lacos na sua solucao.

//Entrada
//A entrada e composta por uma unica linha contendo dois inteiros a e b.

//Saída
//A saida deve conter uma unica linha com o resultado da operacaoo de potenciacao. 
//Esse resultado deve ser um numero real. Caso nao seja possivel calcular a 
//potenciacao, você deve imprimir “indefinido”.

//Ex:
//2 -3
//0.125

#include <stdio.h>
#include <stdlib.h>

float poten(int base, int potencia ){

    if(potencia == 0 && base != 0){
        return 1;
    }else if(potencia == 1){
        return base;
    }else if (potencia < 0){
        return (poten(base, (potencia + 1))/base);   
    }else{
        return (poten(base, (potencia - 1))*base);
    }
}

int main(){
    int base, potencia;

    scanf("%d %d", &base , &potencia);

    if (base == 0 && potencia <= 0){
        printf("Indefinido \n");  
    }else if (potencia < 0 && base != 0){
        printf("%.3f \n", poten(base, potencia));
    }else if (potencia >= 0) {
        printf("%.1f \n", poten(base, potencia));
    }

    return 0;
}