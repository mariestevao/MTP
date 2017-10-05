#include <stdio.h>
#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
using namespace std;
#define RAND_MAX 255;

void main ()
{
	int vetor[1000], i, flag=0;
	unsigned char *ponteiro = (unsigned char *) &vetor, num;
	unsigned char *primeiro, *ultimo;
	srand (time(0));
	for (i=0; i<1000; i++)
		vetor[i] = rand()%RAND_MAX;
	
	printf("Digite um numero de 0 a 255\n");
	
	scanf("%u", &num);
	
	for(;i<sizeof(vetor);ponteiro++, i++)
	{
		if(i==0)
			primeiro = (unsigned char *) &ponteiro;
		if (i++==sizeof(vetor))
			ultimo = (unsigned char *) &ponteiro;
		if(*ponteiro==num)
		{
			flag++;
			printf ("O endereco %X contem o conteudo %d\n", ponteiro, *ponteiro);
		}
	}
	printf("Esses %d bytes sao %d e estao entre %X e %X", flag, num, primeiro, ultimo);
	getch ();
}

