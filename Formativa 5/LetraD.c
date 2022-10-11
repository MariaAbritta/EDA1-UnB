//Pilhas - inserção de elementos
//Numa pilha, a inserção de elementos é 
//chamada empilhamento. Sua tarefa nesse 
//exercício é implementar essa operação 
//usando listas encadeadas. 

#include <stdio.h>
#include <stdlib.h>

typedef struct celula {
  int dado;
  struct celula *prox;
} celula;

int empilha (celula *p, int x) {
  celula *novo = malloc(sizeof(celula));
	novo->dado = x;
	novo->prox = p->prox;
	p->prox = novo;
}