#include <stdio.h>
#include <stdlib.h>

int main(int argumentoChar, char const *argumentoVetor[])
{
    int n, m, i;

    scanf("%d %d", &n, &m);
    int *N = malloc(n * sizeof(int)), *M = malloc(m * sizeof(int));

    for (i = 0; i < n; i++){
        scanf("%d", &N[i]);
    }

    for (i = 0; i < m; i++){
        scanf("%d", &M[i]);
    }

    int d, e, metade;

    for (i = 0; i < m; i++){
        d = n - 1;
        e = 0;

        if (M[i] > N[n - 1]){
            printf("%d\n", n);
        }
        else{
            if (M[i] < N[0]){
                printf("0\n");
            }
            else{
                do{
                    metade = (e + d) / 2;

                    if (N[metade] < M[i] && M[i] <= N[metade + 1]){
                        printf("%d\n", metade + 1);
                        break;
                    }
                    else{
                        if (N[metade] < M[i]){
                            e = metade + 1;
                        }
                        else{
                            d = metade - 1;
                        }
                    }
                } while (e <= d || e == d);
            }
        }
    }
    return 0;
}