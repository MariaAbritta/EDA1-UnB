//Conta de agua
/*
CONTEXTO:
-> Para incentivar mais ainda a economia de água, a SBC alterou os 
preços de seu fornecimento de forma que, proporcionalmente, aqueles 
clientes que consumirem menos água paguem menos pelo metro cúbico. 
Todo cliente paga mensalmente uma assinatura de R$ 7, que inclui uma 
franquia de 10 m^3 de água. Isto é, para qualquer consumo entre 0 e 10 m^3, 
o consumidor paga a mesma quantia de R$ 7 reais (note que o valor da 
assinatura deve ser pago mesmo que o consumidor não tenha consumido água). 
Acima de 10 m^3 cada metro cúbico subsequente tem um valor diferente, 
dependendo da faixa de consumo. A SBC cobra apenas por quantidades inteiras 
de metros cúbicos consumidos. A tabela abaixo especifica o preço por metro
cúbico para cada faixa de consumo: 

Faixa de Consumo (m^3)	Preço
até 10	                incluso na franquia
11 a 30	                R$ 1
31 a 100	            R$ 2
101 em diante	        R$ 5

Assim, por exemplo, se o consumo foi de 120 m^3 , o valor da conta é:
* 7 reais da assinatura básica;
* 20 reais pelo consumo no intervalo 11 - 30 m^3;
* 140 reais pelo consumo no intervalo 31 - 100 m^3;
* 100 reais pelo consumo no intervalo 101 - 120 m^3.

Logo o valor total da conta de água é R$ 267.
Escreva um programa que, dado o consumo de uma residência em m^3, calcula 
o valor da conta de água daquela residência.

ENTRADA:
-> A entrada é composta por uma única linha contendo um inteiro N 
que indica o consumo de água da residência em m^3.

SAIDA:
-> A saída é composta de uma única linha, contendo o valor da conta 
de água naquela residência.
*/

#include <stdio.h> 

int main(){ 
    int tarifa = 0;
    int assinatura = 7;
    int consumoTotal;

    scanf("%d", &consumoTotal);

    for (int i = 0; i <= consumoTotal ; i++){
        if (i > 100){
            tarifa = 5;
        } else if (i > 30){
            tarifa = 2;
        } else if (i > 10){
            tarifa = 1;
        }
        assinatura += tarifa;
    }
    printf("%d\n", assinatura);

    return 0;
}