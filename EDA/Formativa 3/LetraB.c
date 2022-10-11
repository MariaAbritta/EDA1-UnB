#include <stdio.h>

void ordena(int *v, int n){
    int i, chave, j;
    for (i = 1; i < n; i++) {
        chave = v[i];
        j = i - 1;
      
        while (j >= 0 && v[j] > chave) {
            v[j + 1] = v[j];
            j = j - 1;
        }
        v[j + 1] = chave;
    }
}