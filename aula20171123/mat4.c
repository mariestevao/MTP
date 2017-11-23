//Função implementada na matriz.h
/* 
Matriz multiplicarMatrizes(Matriz A, Matriz B)
{
Matriz mat3;
  int linha, coluna, i, acumula;
  if (A.col==B.lin)
  {
	   mat3 = criarMatriz(A.lin , B.col);
	  for (linha =1; linha<=A.lin; linha++)
	  {
		  for (coluna =1; coluna< B.col; coluna++)
		  { 
			  acumula = 0;
			 for (i = 1; i <=A.col; i++)
			  {
				  acumula = acumula + A[linha][i]*B[i][coluna];
			 }
			 mat3.m[linha][coluna] = acumula;
		  }
	  }
   imprimirMatriz (mat3);
  }
  else {
	  mat3 = criarMatriz(0,0);
  }
  return mat3;
}
*/

#include <stdio.h>
#include <stdlib.h>
#include "matriz.h"

int main() {
	Matriz A, B, C;
	int nlinA, ncolA, nlinB, ncolB;
	printf("Entre com o numero de linhas da matriz A: ");
	scanf("%d", &nlinA); 
	printf("Entre com o numero de colunas da matriz A: ");
	scanf("%d", &ncolA);
	printf("Entre com o numero de linhas da matriz B: ");
	scanf("%d", &nlinB);
	printf("Entre com o numero de colunas da matriz B: ");
	scanf("%d", &ncolB);
	A = criarMatriz(nlinA, ncolA);
	preencherMatriz(A);
	B = criarMatriz(nlinB, ncolB);
	preencherMatriz(B);
	C = multiplicarMatrizes (A, B);
	if (A.col==B.lin)
		imprimirMatriz(C);
	else
		printf("As matrizes nao sao compativeis.\n");
	destruirMatriz(A);
	destruirMatriz(B);
	destruirMatriz(C);
	return EXIT_SUCCESS;
}

