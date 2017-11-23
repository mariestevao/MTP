#include<stdio.h>
#include<stdlib.h>
#include "matriz.h"

int main(){
    Matriz A, Inv, B, M;
    int nlin, ncol;
    printf("Entre com o numero de linhas da matriz quadrada: ");
    scanf("%d", &nlin); 
    ncol = nlin;
    A = criarMatriz(nlin, ncol);
    preencherMatriz(A);
    B = criarMatriz(ordem, 1);
    preencherMatriz(B);
    Inv = inversa(A);
    M = multiplicaMat(I,B);
    imprimirSis(M);
    
    destruirMatriz(A);
    destruirMatriz(B);
    destruirMatriz(Inv);
    destruirMatriz(M);
    return EXIT_SUCCESS;
}