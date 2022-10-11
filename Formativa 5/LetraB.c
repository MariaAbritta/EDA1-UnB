//Pilhas - inserção de elementos
//Numa pilha, a inserção de elementos é chamada 
//empilhamento. Sua tarefa nesse exercício é 
//implementar essa operação usando vetores. 


#include <stdio.h>
#include <stdlib.h>

//estrutura de uma pilha
typedef struct pilha { 
  int *dados;  
  int N, topo; 
} pilha;

int empilha (pilha *p, int x) {

    //primeiramente vamos ver se a pilha ja esta cheia.
    if (p->topo == p->N) { //nao ha mais espaco nessa pilha 
        //teremos de aumentar o tamanho dessa pilha para inserir mais elementos.
        p->dados = realloc(p->dados,2*p -> N*sizeof(int)); //teremos uma pilha com o dobro de tamanho agora
        if (p->dados == NULL) return 0; //codigo de erro
        p->N *= 2; //dobrando o tamanho da pilha
    }
    //faremos de fato agora o empilhamento.
    p->dados[p->topo] = x; //inserindo os novos dados no topo da pilha.
    p->topo++; //incrementando mais um elemento acima na pilha
    return 1; //inserção bem sucedida
}