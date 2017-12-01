#include <stdio.h>
#include <stdlib.h>
#include<conio.h>
#define MAXCHAR 256

typedef
	struct Ponto {;double x,y;}
Ponto;

int main (){

	int i, N= 0;
	Ponto * conjunto;
	Ponto teste;

	char nome_arquivo[MAXCHAR];
	FILE * arquivo = NULL;
	printf("Entre com arquivo [sem espacos]: ");
	scanf("%s", nome_arquivo);
	arquivo = fopen(nome_arquivo, "rb");
	do{
		if (fread(&teste, sizeof(Ponto),1,arquivo) != 0){

		N++;
		conjunto = (Ponto*) realloc(conjunto, N*sizeof(Ponto));
		conjunto[N-1] = teste;
		}
	}while (!feof(arquivo));
	fclose(arquivo);

	for(i = 0; i < N; i++)
		printf("%lf, %lf\n", (conjunto+i) -> x, conjunto[i].y);
	free(conjunto);
	getche();
	return 0;
}