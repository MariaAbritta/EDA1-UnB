#include <stdio.h>
#include <stdlib.h>

void trocar(int* a, int* b){
    int trocando = *a;
    *a = *b;
    *b = trocando;
}
 
//Função para realizar a ordenação por Seleção
void ordenSort(int array[], int n){
    int i, j, menorIndex;

    //Se move um por um dentro do subarranjo
    for (i = 0; i < n - 1; i++) {
        //Encontrando o menor elemento do array
        menorIndex = i;
        for (j = i + 1; j < n; j++)
            if (array[j] < array[menorIndex])
                menorIndex = j;
        //Troque o menor elemento encontrado com o primeiro elemento
        trocar(&array[menorIndex], &array[i]);
    }
}
 
//Printar o resultado do array
void printarArray(int array[], int tamanho){
    for (int i = 0; i < tamanho; i++)
        printf("%d ", array[i]);
    printf("\n");
}
 
int main(){
   int array[1000];
   int b;
   int count=0;
   while (scanf("%d",&b)!= EOF){
     array[count]= b;
     count++;
   }
    //int n = sizeof(arr) / sizeof(arr[0]);
   int n = count;
 
    ordenSort(array, n);
    printarArray(array, n);
 
    return 0;
}