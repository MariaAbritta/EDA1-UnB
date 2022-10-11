#include <stdio.h>

enum{MAXN=100010};
enum{MAXM=100010};
int n,m;
long long int raio[MAXN];

int alvo(long long int val){
	int inicio =1 ;
	int fim = n;
	if(val>raio[n]) return 0;
	
	while(inicio < fim){
		int meio = (inicio+fim)/2;
		
		if(raio[meio] >= val){
			fim = meio;
		}else{
			inicio = meio + 1;
		}
	}
	return (n + 1) - fim;
}

int main(){
    scanf("%d %d", &n, &m);

	for(int i = 1; i <= n; i++)	{
		scanf("%lld",&raio[i]);
		//armazenando raios ao quadrado e compara
		raio[i] = raio[i] * raio[i];
	}

	long long int resp = 0;

	for(int i = 1; i <= m; i++)	{	
		long long int x,y;
		scanf("%lld %lld",&x,&y);
		//Busca binaria para encontrar o circulo de  
		//menor raio que esta nesse ponto
		//e com isso encontrar sua pontuacao
		resp += alvo(x * x + y * y);
	}

	printf("%lld\n",resp);
	return 0;
}