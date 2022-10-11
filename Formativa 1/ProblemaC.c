//AJUDE APARECIDO
/*
CONTEXTO
-> O doutorado é um caminho sem volta que diversos 
acadêmicos seguem em suas carreiras. Aparecido, um 
jovem aluno de mestrado que frequentemente sai com 
O doutorado é um caminho sem volta que diversos 
acadêmicos seguem em suas carreiras. Aparecido, um 
jovem aluno de mestrado que frequentemente sai com 
seus três colegas de laboratório, e que já estão no 
doutorado, percebeu a degradação em matemática básica 
de seus colegas.seus três colegas de laboratório, e 
que já estão no doutorado, percebeu a degradação em 
matemática básica de seus colegas.
Sempre que Aparecido e seus colegas saíam para se 
alimentar, Aparecido pedia que algum de seus colegas 
fizesse a conta para decidir quanto era a conta total.
Aparecido pediu sua ajuda para saber quando seus colegas 
doutorandos acertaram o valor da conta total.

ENTRADA
-> A entrada é composta por duas linhas. A primeira linha 
do caso de teste possui 3 inteiros C_i
representando o valor da conta de cada uma das pessoas. 
A segunda linha possui um número inteiro T representando a 
soma que o doutorando conseguiu realizar.

SAIDA
-> A saída é composta por uma única linha com a palavra 
Acertou quando o colega acertou a soma ou Errou quando ele 
errou a conta.
*/
#include <stdio.h>
#include <stdlib.h>

int main () {
    int aluno1, aluno2, aluno3, total = 0, resposta;

    scanf("%d %d %d", &aluno1, &aluno2, &aluno3);
    total = aluno1 + aluno2 + aluno3;
    scanf("%d", &resposta);
    if(resposta == total){
        printf("Acertou\n");
    }else{
        printf("Errou\n");
    }
    return 0;
}