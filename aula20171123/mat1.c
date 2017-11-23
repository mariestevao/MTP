#include <stdio.h>
#include <stdlib.h>
#include "matriz.h"

int main() {
	Matriz A, ADJ;
	int nlin, ncol;
	printf("Entre com o numero de linhas da matriz quadrada: ");
	scanf("%d", &nlin); 
	ncol = nlin;
	A = criarMatriz(nlin, ncol);
	preencherMatriz(A);
	ADJ = adjunta(A);
	imprimirMatriz(ADJ);
	destruirMatriz(A);
	destruirMatriz(ADJ);
	return EXIT_SUCCESS;
}