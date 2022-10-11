//EOF
/*
CONTEXTO
-> EOF (End Of File) representa o fim de arquivo.
Enquanto se está lendo um arquivo e não existe mais 
conteúdo a ser lido é gerada essa informação no sistema, 
EOF, dizendo que o arquivo acabou.
A entrada padrão também é considerada um arquivo e em 
uma execução sem redirecionamento a combinação ^d 
(control + d) gera um EOF. Quando a acontece o redirecionamento 
(a execução no estilo: ./meuprograma < arquivo) o conteúdo do 
arquivo é enviado ao programa pela entrada padrão e quando 
todo o conteúdo do arquivo for consumido o EOF será gerado.

ENTRADA
-> A entrada é composta por um único caso de teste composta 
por diversas linhas e termina com EOF. Cada linha de um caso 
de teste possui um número inteiro N

SAIDA
-> A saída é composta por uma única linha contendo um número 
inteiro que represente a quantidade de números lidos.
*/



#include <stdio.h>

int main () {
    int num = 0;
    int ler;
    int count =0;

    ler = scanf("%d", &num);
    while (ler!= EOF) {
         ler= scanf("%d", &num); //Lendo os numeros digitados
         count++;  
    }
    printf("%d\n",count);
    return 0;
}