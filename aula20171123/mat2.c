#include <stdio.h>
#include <stdlib.h>
#include "matriz.h"

int det (Matriz A, int n, int j)
{
	int determ;
	switch n:
	{
	case 1:
		determ = A.m[0][0];
		break;
	case 2:
		determ = A.m[0][0]*A.m[1][1] - A.m[0][1]*A.m[1][0];
		break;
	case 3:
		determ = (A.m[0][0]*A.m[1][1]*A.m[2][2]+A.m[0][1]*A.m[1][2]*A.m[2][0]+A.m[0][2]*A.m[1][0]*A.m[2][1]) - (A.m[0][0]*A.m[1][2]*A.m[2][1]+A.m[0][1]*A.m[1][0]*A.m[2][2]+A.m[0][2]*A.m[1][1]*A.m[2][0]);
		break;
	default:
		if (j<n-1)
		{
		determ = A.m[0][j]*cofator(A, 0, j) +  det (A, n, j --);
		}
		break;
	}
	return determ;
}


int main() {
	Matriz A;
	int nlin, ncol, determ;
	printf("Entre com o numero de linhas da matriz quadrada: ");
	scanf("%d", &nlin); 
	ncol = nlin;
	A = criarMatriz(nlin, ncol);
	preencherMatriz(A);
	determ = det (A, nlin, 0);
	printf("O determinante da matriz inserida eh %lf.\n", determ);
	destruirMatriz(A);
	return EXIT_SUCCESS;
}