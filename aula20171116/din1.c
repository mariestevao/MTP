#include <conio.h>
#include <stdio.h>
#include <math.h>
float desvio (float qtde, float * numeros, float media)
{
	int i;
	float soma=0;
	for(i=0; i<qtde; i++)
	{
		soma = soma + pow((media-numeros[i]), 2);
	}
	soma = soma/ (qtde);
	soma = sqrt(soma);
	return soma;
}
float med (float qtde, float * numeros)
{
	int i;
	float media, soma=0;
	for (i=0; i<qtde; i++)
	{
		printf("\nDigite o valor da posicao %d	", i+1);
		scanf ("%f", &numeros[i]);
		soma = soma + numeros[i];
	}
	media = soma/qtde;
	return media;
}

int main()
{
	int i;
	float qtde, media, desv, *numeros;
	printf ("Digite a quantidade de numeros que deseja inserir.\n");
	scanf ("%f", &qtde);
	numeros=(float*)malloc(qtde*sizeof(float));
	media=med(qtde,numeros);
	desv = desvio (qtde, numeros, media);
	printf("A media dos valores digitados eh %f e o desvio padrao eh %f", media, desv);
	getch();
	return 0;
}
