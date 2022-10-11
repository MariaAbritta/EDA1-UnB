//REGUA INGLESA
//--> Uma régua inglesa de ordem n tem 2^n-1 pontos. 
//O ponto medio contem n traços e divide a regua em 
//dois subintervalos. O ponto medio de cada um dos 
//subintervalos deve ter n-1 tracos, e assim por diante. 
//Por exemplo, uma regua inglesa de ordem 3 seria
//Dado um inteiro nao negativo n, sua tarefa e desenhar 
//na tela uma régua inglesa de ordem n.
//Atencao: Use uma solucao recursiva.

//Entrada
//A entrada e composta por uma unica linha contendo um 
//inteiro nao negativo n.

//Saida
//A saida deve ser a regua inglesa de ordem n.

//Ex:
//2
// .-
// .--
// .-

#include <stdio.h>

void traco(int qtd) {
  if (qtd == 1) {
    printf("-");
  } else {
    printf("-");
    traco(qtd-1);
  }
}

void regua(int n) {
  if (n == 1) {
    printf(".-");
  } else {
    regua(n-1);
    printf("\n");

    printf(".");
    traco(n);

    printf("\n");
    regua(n-1);
  }
}

int main() {
  int n;
  scanf("%d", &n);

  if (n > 0) {
    regua(n);
    printf("\n");
  }

  return 0;
}