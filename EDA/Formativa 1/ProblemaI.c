//FILIAÇÃO
/*
CONTEXTO
-> O formato CSV, Comma-Separated-Values, e um tipo de arquivo que 
armazena dados com valores separados por vırgula. Cada linha do arquivo, 
ao abrir utilizando programas como Microsoft Excel ou Google Sheets, sera 
transformada em uma linha na planilha, e cada coluna na planilha ter´a o
dado que est´a separado por v´ırgula. Por exemplo, suponha que vocˆe esteja 
montando uma tabela onde a primeira coluna represente um nome de uma pessoa, 
a segunda coluna o nome da m˜ae e a terceira coluna o nome do pai de uma pessoa
O CSV correspondente seria:
    * Pedro da S i l v a P e r ei ra , Adriana da Sil va , Guilherme P e r ei r a
    * Luiz Coelho , , Tomas Coelho
Faca uma funcao chamada separaLinhaCSV, que recebe uma string, que 
representa o nome completo de uma pessoa (nome e sobrenome, separados por espaco), 
o nome completo da mae e o nome completo do pai de uma pessoa, e retorne uma 
estrutura do tipo tipoFiliacao, que possui informacoes de nome, nome da mae 
e nome do pai. Para este problema, nao ha a necessidade de realizar validacoes. 
Considere que os nomes possuem apenas letras de A a Z, maiusculo e minusculos, e
espacos.
Os nome da pessoa, da mae e do pai respectivamente, da forma <PESSOA>,<MAE>,<PAI>.
*/



#include <stdio.h>

struct filiacao {
  char nome[80];
  char nomeMae[80];
  char nomePai[80];
};

struct filiacao separaLinhaCSV(char linha[240]) {
  struct filiacao tipo;
  int i = 0, j = 0;

  while (linha[i] != ',') {
    tipo.nome[j] = linha[i];
    i++;
    j++;
  }

  tipo.nome[j] = '\0';

  i++;
  j = 0;

  while (linha[i] != ',') {
    tipo.nomeMae[j] = linha[i];
    i++;
    j++;
  } 

  tipo.nomeMae[j] = '\0';

  i++;
  j = 0;

  while (linha[i] != '\0') {
    tipo.nomePai[j] = linha[i];
    i++;
    j++;
  }

  tipo.nomePai[j] = '\0';

  //printf("%s %s %s\n", tipo.nome, tipo.nomeMae, tipo.nomePai);
  return tipo;
}

/*int main() {
   separaLinhaCSV("Luiz Coelho , ,Tomas Coelho");
   return 0;
}*/