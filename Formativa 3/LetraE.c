#include <stdio.h>
#include <stdlib.h>

//funcao 
int andar(int *numCasas, int *encomendas, int tamCasas, int tamEncomendas){

	int encomenda;
    int achado;
    int posicao = 0;
    int posicaoNova = 0;
	int passos = 0;
	int casasDiferentes; 

	int *vet = malloc(tamEncomendas*sizeof(int));

	for(int i=0;i<tamEncomendas;i++){
		for(int j=0;j<tamCasas;j++){
			if(numCasas[j]==encomendas[i]){
				posicaoNova=j;
				casasDiferentes=posicaoNova - posicao;
				passos+=abs(casasDiferentes);
				posicao=j;
			}
		}
	}
	return passos;
}

int main(void) {
  int numCasas, numEncomendas, passos = 0;
  int *casas, *entregas;

  scanf("%d %d", &numCasas, &numEncomendas);

	casas = malloc(numCasas*sizeof(int));
	entregas = malloc(numEncomendas*sizeof(int));

	//Inserindo as casas
	for(int i=0;i<numCasas;i++){
		scanf("%d", &casas[i]);
	}

	//Formando as encomendas
	for(int i=0;i<numEncomendas;i++){
		scanf("%d", &entregas[i]);
	}

	passos = andar(casas, entregas, numCasas, numEncomendas);
	printf("%d\n", passos);

	return 0;
}