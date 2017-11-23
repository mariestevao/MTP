#ifndef MATRIZ_H
#define MATRIZ_H

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef
	struct aMatriz {
		double ** m;
		int lin, col;
	}
Matriz;

Matriz criarMatriz(int M, int N) {
	Matriz A;
	int i;
	if(M == 0 && N == 0){
        A.lin = 1;
        A.col = 1;
	}else{
        A.lin = M;
        A.col = N;
	}
	A.m = (double **)calloc(A.lin, sizeof(double *));
    for(i = 0; i < A.lin; i++)
        A.m[i] = (double*)calloc(A.col, sizeof(double));
    if(M == 0 && N == 0) A.m[0][0] = NAN;
	return A;

}

int vazia(Matriz A){
    return(isnan(A.m[0][0]));
}


void destruirMatriz(Matriz A) {
	int i;
	for(i = 0; i < A.lin; i++)
		free(A.m[i]);
	free(A.m);
}

void preencherMatriz(Matriz A) {
	int i, j;
	for(i = 0; i < A.lin; i++)
		for(j = 0; j < A.col; j++) {
			printf("Entre com o elemento [%d][%d]: ", i+1, j+1);
			scanf("%lf", A.m[i]+j);
		}
}

void imprimirMatriz(Matriz A) {
	int i, j;
	printf("\n");
	for(i = 0; i < A.lin; i++) {
		for(j = 0; j < A.col; j++)
			printf("%lg\t", A.m[i][j]);
		printf("\n");
	}
	printf("> %dx%d\n\n", A.lin, A.col);
}

void imprimirSis(Matriz A) {
	int i, j;
	printf("\n");
	for(i = 0; i < A.lin; i++) {
		for(j = 0; j < A.col; j++)
			printf("x%d: %.3lg\t", i+1, A.m[i][j]);
		printf("\n");
	}
}

Matriz transposta(Matriz A) {
	Matriz At = criarMatriz(A.col, A.lin); // ordem transposta
	int i, j;
	for(i = 0; i < A.col; i++)
		for(j = 0; j < A.lin; j++)
			At.m[i][j] = A.m[j][i];
	return At;
}

double determinante(Matriz A);

double menor(Matriz A, int l, int c){
    Matriz M = criarMatriz(A.lin - 1, A.col -1);
    double menorA;
    int i, j, p, q;
    p = 0;
    for(i = 0; i < A.lin; i++){
        if (i != l){
        q = 0;
            for(j = 0; j < A.col; j++)
                if (j != c){
                    M.m[p][q] = A.m[i][j];
                    q++;
                }
            p++;
        }
    }
    menorA = determinante(M);
    destruirMatriz(M);
    return menorA;
}

double cofator (Matriz A, int i, int j){
    return ((i+j)%2) ? -1*menor(A, i, j) : menor(A, i, j);
}

double determinante(Matriz A){
double det = NAN;
	int i;
	if(A.lin != A.col)
		fprintf(stderr,"Matriz retangular, sem determinante!\n");
	if(A.lin == 1) det = A.m[0][0];
	if(A.lin == 2) det = A.m[0][0]*A.m[1][1]-A.m[0][1]*A.m[1][0];
	if(A.lin == 3) det = (A.m[0][0]*A.m[1][1]*A.m[2][2]+
		A.m[0][1]*A.m[1][2]*A.m[2][0]+A.m[0][2]*A.m[1][0]*A.m[2][1])-
		(A.m[0][0]*A.m[1][2]*A.m[2][1]+A.m[0][1]*A.m[1][0]*A.m[2][2]+
		A.m[0][2]*A.m[1][1]*A.m[2][0]);
	if(A.lin > 3) {
		det = 0;
		for(i = 0; i < A.col; i++)
			det += A.m[0][i]*cofator(A,0,i);
	}
	return det;
}

Matriz comatriz(Matriz A){
    Matriz C = criarMatriz(A.lin, A.col);
    int i, j;
    for(i = 0; i < A.lin; i++)
		for(j = 0; j < A.col; j++)
            C.m[i][j] = cofator(A,i,j);
    return C;
}

Matriz adjunta (Matriz A){
    Matriz C = comatriz(A);
    Matriz Ct = transposta(C);
    destruirMatriz(C);
    return Ct;
}

Matriz consMat (Matriz A, double c){
    Matriz C = criarMatriz(A.lin, A.col);
    int i, j;
    for(i = 0; i < A.lin; i++)
		for(j = 0; j < A.col; j++)
            C.m[i][j] = c * A.m[i][j];
    return C;
}

Matriz inversa (Matriz A){
    Matriz I, adjA = adjunta(A);
    double det = determinante(A);
    if (det == 0)
    I = criarMatriz(0,0);
    else I = consMat(adjA, 1/det);
    destruirMatriz(adjA);
    return I;
}

Matriz multiplicaMat(Matriz A, Matriz B){
    Matriz C;
    float soma;
    int i, j, k;
    if (A.col == B.lin){
        C = criarMatriz(A.lin , B.col);
        for(i = 0; i < A.lin; i++)
            for(j = 0; j < B.col; j++){
                soma = 0;
                for (k = 0; k < A.col; k++)
                    soma += A.m[i][k] * B.m[k][j];
                C.m[i][j] = soma;
            }
    }else{
    C = criarMatriz(0,0);
    }
    return C;
}
Matriz InversaRet (Matriz A){
    Matriz I, T, M;
    T = transposta(A);
    //imprimirMatriz(T);
    M = multiplicaMat(T,A);
    //imprimirMatriz(M);
    I = inversa(M);
    //imprimirMatriz(I);
    I = multiplicaMat(I,T);
    destruirMatriz(T);
    destruirMatriz(M);
    return I;
}

void preencherMatrizReg(Matriz A) {
	int i, j;
	for(i = 0; i < A.lin; i++)
		for(j = 0; j < A.col; j++) {
                if(j == 0){
                    A.m[i][j] = 1;
                }else{
			printf("Entre com o elemento [%d][%d]: ", i+1, j+1);
			scanf("%lf", A.m[i]+j);
                }
		}
}
#endif