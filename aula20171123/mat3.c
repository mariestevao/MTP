#include <stdio.h>
#include <stdlib.h>
#include "matriz.h"

int main() {
	Matriz A;
	int nlin, ncol;
	printf("Entre com o numero de linhas da matriz quadrada: ");
	scanf("%d", &nlin); 
	ncol = nlin;
	A = criarMatriz(nlin, ncol);
	preencherMatriz(A);
	I = inversa(A);
   	if (vazia(I) == 1)
        	printf("A matriz nao eh inversivel");
   	else
        	imprimirMatriz(I);
    	destruirMatriz(A);
    	destruirMatriz(I);
	return EXIT_SUCCESS;
}