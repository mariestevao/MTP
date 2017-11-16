#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

void preenche(float * elemento);
void imprime(float **matriz, int N, int M);
void muda (float **transposta, int N, int M, float **matriz);

int main() {
  int i, j;
  int N, M;
  float **matriz, **transposta;
  printf("Entre com a quantidade de linhas da matriz: ");
  scanf("%d", &N);
   printf("Entre com a quantidade de colunas da matriz: ");
  scanf("%d", &M);
  matriz = (float**)calloc(N,sizeof(float*));
  for(i = 0; i < N; i++) {
	matriz[i] = (float*)calloc(M,sizeof(float));
    for(j = 0; j < M; j++) {
      printf("Elemento (%d,%d): ", i, j);
      preenche(&matriz[i][j]);
    }
  }
  transposta = (float**)calloc(M,sizeof(float*));
  for(i = 0; i < M; i++) {
	transposta[i] = (float*)calloc(N,sizeof(float));
  }
  muda (transposta, N, M, matriz);
  imprime(transposta, M, N);
  for(i = 0; i < N; i++)
	free(matriz[i]);
  free(matriz);
  getch();
  return 0;
}

void muda (float **transposta, int N, int M, float **matriz)
{
	int i, j;
	
  for(i=0; i<M; i++)
  {
	  for(j=0; j<N; j++)
	  {
		  transposta[i][j]=matriz[j][i];
	  }
  }
}


void preenche(float * elemento) {
  scanf("%f", elemento);
}

void imprime(float **transposta, int N, int M) {
  int i, j;
  printf("matriz transposta %dx%d:\n", N, M);
  for(i = 0; i < N; i++)
    for(j = 0; j < M; j++)
      printf("%g%c", transposta[i][j], (j == M-1)? '\n':'\t');
}
	
	