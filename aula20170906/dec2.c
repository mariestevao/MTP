#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

void main ()
{
	int pontos = 0, resto, aleat1, aleat2, num1, num2, num3;
	srand (time(0));
	printf (" Informe um dos divisores de 8192.\n");
	scanf ("%d", &num1);
	resto = 8192%num1;
	if (resto==0)
		pontos = pontos + 1;
	aleat1 = 1328 + rand()%33;
	printf ("Informe o resultado da soma do numero sorteado %d com 101.\n", aleat1);
	scanf ("%d", &num2);
	aleat1 = 101 + aleat1;
	if (aleat1==num2)
		pontos++;
	aleat2 = rand ()%100;
	printf ("Informe o resultado da multiplicacao de %d por 3.\n", aleat2);
	scanf ("%d", &num3);
	aleat2=aleat2*3;
	if (aleat2==num3)
		pontos++;
	printf("Seu saldo de pontos final eh %d.\n", pontos);
	system ("pause");
}

