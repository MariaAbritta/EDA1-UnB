//CONTA 7S
//--> Sua tarefa nesse exercicio e, dado um inteiro nao negativo n, 
//contar a quantidade de ocorrencias do digito 7 nesse numero.
//Atencao: Você não pode usar lacos na sua solucao.

//Entrada
//A entrada e composta por uma unica linha contendo um inteiro nao negativo n

//Saida
//A saida deve conter uma unica linha com a quantidade de digitos 7 presentes 
//no inteiro dado.

//Ex:
//717
//2

#include <stdio.h>
#include <stdlib.h>


long int soma7(long int n){
	if(n==0){
		return 0;
	}
	else {
		 return soma7(n/10) + (n%10==7);
	}
	
}

int main(){
	long int entrada;
    scanf("%ld", &entrada);
    
    printf("%ld\n", soma7(entrada));

    return 0;
}