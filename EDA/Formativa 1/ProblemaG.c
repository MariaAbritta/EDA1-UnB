//Aeroporto
/*
CONTEXTO
-> A crescente utilização do transporte aéreo preocupa os especialistas, que prevêem 
que o congestionamento em aeroportos poderá se tornar um grande problema no futuro. 
Os números atuais já são alarmantes: relatórios oficiais demonstram que na Europa, 
em junho de 2001, houve uma média de 7.000 atrasos de vôos por dia. Preocupada com a 
previsão dos seus especialistas em tráfego aéreo, a Associação de Transporte Aéreo 
Internacional (ATAI) está começando um estudo para descobrir quais são os aeroportos 
onde o tráfego aéreo pode vir a ser mais problemático no futuro.

Como programador recém contratado pela ATAI você foi encarregado de escrever um 
programa para determinar, a partir de uma listagem de aeroportos e vôos, qual 
aeroporto possui maior probabilidade de congestionamento no futuro. Como medida 
da probabilidade de congestionamento será utilizado neste estudo o número total 
de vôos que chegam ou que partem de cada aeroporto.

ENTRADA
-> A entrada é composta de vários conjuntos de teste. A primeira linha de um 
conjunto de teste contém dois números inteiros A e V, que indicam respectivamente 
o número de aeroportos e o número de vôos. Os aeroportos são identificados por 
inteiros de 1 a A. As V linhas seguintes contêm cada uma a informação de um vôo, 
representada por um par de números inteiros positivos X e Y, indicando que há um vôo 
do aeroporto X para o aeroporto Y. O final da entrada é indicado quando A = V = 0.

SAIDA
-> Para cada conjunto de teste da entrada seu programa deve produzir três linhas. 
A primeira linha identifica o conjunto de teste, no formato “Teste n”, onde n é 
numerado a partir de 1. A segunda linha deve conter o identificador do aeroporto 
que possui maior tráfego aéreo. Caso mais de um aeroporto possua este valor máximo, 
você deve listar todos estes aeroportos, em ordem crescente de identificação, e 
separados por pelo menos um espaço em branco. A terceira linha deve ser deixada em branco. 
A grafia mostrada no Exemplo de Saída, abaixo, deve ser seguida rigorosamente.
*/
#include <stdio.h>

int main(){

	int numAeroportos, numVoos, maisUsado = 0, aeroportoA, aeroportoB, count = 0;
	int identificadorAeroportos[101];

	scanf("%d %d", &numAeroportos, &numVoos);

	if(numAeroportos >= 0 && numAeroportos <= 100){

		if(numVoos >= 0 && numVoos <= 10000){

			while(numAeroportos != 0 && numVoos != 0){

				for(int i = 1; i <= numAeroportos; i++){
					identificadorAeroportos[i] = 0;
				}

				for(int i = 1; i <= numVoos; i++){
					scanf("%d %d", &aeroportoA, &aeroportoB);
					identificadorAeroportos[aeroportoA]++;
					identificadorAeroportos[aeroportoB]++;
				}

				for(int i = 1; i <= numAeroportos; i++){

					if(identificadorAeroportos[i] > maisUsado){
						maisUsado = identificadorAeroportos[i];
					}
				}
				printf("Teste %d\n", count+1);

				for(int i = 1; i <= numAeroportos; i++){
					if(identificadorAeroportos[i] == maisUsado){
						printf("%d ", i);
					}
				}
				printf("\n\n");
				count++;
				maisUsado = 0;
				scanf("%d %d", &numAeroportos, &numVoos);
			}
		}
	}

	return 0;
}