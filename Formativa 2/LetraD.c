//STRING AO CONTRARIO
//--> Faca um programa que leia uma string e a imprima ao contrario.
//Atencao: Voce nao pode usar lacos na sua solucao.

//Entrada
//A entrada e composta por uma unica linha contendo uma string de, 
//no maximo, 500 caracteres, contendo letras (maiusculas e minusculas, 
//nao acentuadas) e numeros.

//Saida
//A saida deve conter uma unica linha com a string impressa ao contrario.

//Ex:
//amor
//roma

#include <stdio.h>
#include <string.h>

void reverseString(char *str, int length) {
  char letra = str[length];
  
  if (length == 0) {
    printf("%c", letra);
  } else {
    printf("%c", letra);
    reverseString(str, length-1);
  }
}

int main() {
  char str[501];
  int length;

  scanf("%s", str);
  length = strlen(str);

  reverseString(str, length-1);
  printf("\n");

  return 0;
}