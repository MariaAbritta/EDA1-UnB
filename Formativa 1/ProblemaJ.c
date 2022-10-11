#include <stdio.h>

int main() {
    char frase[10001], palavraEscolhida[41], palavraNova[41];
    int count, igualando = 0;

    scanf("%[^\n]", frase);
    scanf("%s", palavraEscolhida);
    scanf("%s", palavraNova);

    for (count = 0; frase[count] != '\0'; count++){
        if (palavraEscolhida[igualando] == frase[count]) {
            igualando++;
        } else{
            if (igualando > 0) {
                if (palavraEscolhida[igualando] == '\0') {
                    printf("%s", palavraNova);
                    igualando = 0;
                } else {
                    while (igualando > 0) {
                        printf("%c", frase[count - igualando]);
                        igualando--;
                    }
                }
            }
            printf("%c", frase[count]);
        } 
    }
    
    if ( igualando > 0 && palavraEscolhida[igualando] == '\0') {
        printf("%s",palavraNova);
    }
    printf("\n");

    return 0;
}
