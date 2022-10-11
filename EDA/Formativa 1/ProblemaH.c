//CINEMA
/*
CONTEXTO
-> Um casal, de tanto irem ao cinema, acabaram fazendo amizade com 
o rapaz que coleta os ingressos na entrada das seções, o Rogério. 
Sempre que chegam ao cinema, compram seu bilhete e entregam a Rogério, 
que confere se os dados do bilhete batem com o da seção.
Um dia, conversando entre si antes de uma seção começar, Rogério contou 
ao casal que a operadora do cinema está fazendo uma pesquisa sobre a 
ocupação de lugares que de fato são ocupadas numa seção. Para isso, 
sempre que uma seção começava, Rogério precisava contar todos os 
ingressos que recebeu para aquela seção, e depois marcar quais lugares 
foram ocupados.
Isso deixou nosso jovem casal estarrecido. Tinham salas enormes naquele 
cinema, com até 20 fileiras de 25 lugares cada uma!
Então, como bons amigos e calouros da universidade superempolgados com 
a disciplina de programação de computadores que estão cursando, eles 
resolvem fazer alguma coisa para facilitar a vida de Rogério, e nos 
trazem esse problema para que possamos ajudá-los.

TAREFA
-> Sua tarefa é implementar um programa que leia:
        * A quantidade de fileiras e de lugares por fileira que a sala de 
        cinema possui e
        * Os bilhetes dos telespectadores de uma seção na sala especificada, 
        exibindo, ao final, um mapa da sala de cinema contendo os lugares 
        ocupados e os lugares vazios.

ENTRADA
-> A entrada é composta por várias linhas. A primeira linha contém dois 
números inteiros F e L (20 e 25, dados nessa ordem ), representando a 
quantidade de fileiras e quantos lugares há por fileira na sala de cinema, 
respectivamente. As N linhas seguintes (N) são os lugares correspondentes 
a cada bilhete recebido na entrada da seção. O lugar é representado por 
uma letra maiúscula de A a T, representando a fileira, seguida de um número 
de 1 a 25, representando o lugar. A entrada termina com EOF.

SAIDA
-> A saída é o mapa da sala de cinema, indicando todos os lugares da sala, 
sendo que XX representa um lugar ocupado e -- representa um lugar vazio.
*/

#include <stdio.h>

int main(){
    int cine[20][25];
    int i, j, F, L, numero;
    char letra;

    //Todos os lugares vazios
    for (i = 0; i < 20; i++){
        for (j = 0; j < 25; j++){
           cine[i][j] = 0;
        }
    }

    scanf("%d%d", &F, &L);
    while ((scanf("%c%d", &letra, &numero)) != EOF){
        cine[letra-65][numero-1] = 1;
    }
    
    printf(" ");
    for (i = 1; i <= L; i++){
        printf(" %02d", i);
    }
    printf("\n");
    
    for (i = F - 1; i >= 0; i--){
        printf("%c", i+65);
        for (j = 0; j < L; j++){
            if (cine[i][j] == 0){
                printf(" --");
            } else{
                printf(" XX");                                 
            }
        }
        printf("\n"); 
    }
    return 0;
}