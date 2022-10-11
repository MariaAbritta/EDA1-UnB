//Pilhas - remoção de elementos
//Numa pilha, a remoção de elementos é 
//chamada desempilhamento. Sua tarefa nesse 
//exercício é implementar essa operação usando 
//listas encadeadas. 

#include <stdio.h>
#include <stdlib.h>

typedef struct celula {
  int dado;
  struct celula *prox;
} celula;

int desempilha (celula *p, int *y) {
  celula *lixo = p->prox;

	if(lixo == NULL){
		return 0;
	}

	*y = lixo->dado;

	p->prox = lixo->prox;
	free(lixo);

	return 1;
}