//Pilhas - remoção de elementos
//Numa pilha, a remoção de elementos é 
//chamada desempilhamento. Sua tarefa nesse 
//exercício é implementar essa operação usando vetores.


#include <stdlib.h>
#include <stdio.h>

//estrutura de uma pilha
typedef struct pilha { 
  int *dados; 
  int N, topo; 
} pilha;

int desempilha (pilha *p, int *y) {

    if (p->topo == 0) { 
        return 0; 
    }

    p->topo--;
    *y=p->dados[p->topo]; 
    return 1; 

}