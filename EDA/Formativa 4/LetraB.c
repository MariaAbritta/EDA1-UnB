#include <stdio.h>
#include <stdlib.h>

typedef struct celula {
	int dado;
	struct celula *prox;
} celula;

celula * buscarPosicaoLista(celula * le, int x) {
  celula * elemento = le;
  for (elemento = elemento; elemento -> prox != NULL; elemento = elemento -> prox) {
    if (elemento -> prox -> dado == x) {
      return elemento;
    }
  }
  return elemento;
}


int remove_depois(celula *p){
  if (p->prox!=NULL)
  {
    celula *proxP = p->prox;
    int dadoRemovido = proxP->dado;
    p->prox = proxP->prox;
    free(proxP);
    return dadoRemovido;
  } else {
     return 1;
  }
 
}

void remove_elemento(celula *le, int x){
  //Procurando o elemento x em le
  if(le->prox!=NULL){
    celula *antesDex = buscarPosicaoLista(le, x);
    celula *xEncontrado = antesDex->prox;

    antesDex->prox = xEncontrado->prox;

    free(xEncontrado);
  }
  
}

void remove_todos_elementos(celula *le, int x){
  celula *anterior = le;
  if(le->prox!=NULL){
    for (celula *elemento = le->prox; elemento != NULL; elemento = elemento->prox){
      if(elemento->dado == x){
        anterior->prox = elemento->prox;
      }
      anterior = elemento;
    }
  }
}
