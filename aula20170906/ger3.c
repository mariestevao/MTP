#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main ()
{
    int dado1, dado2, dado3, soma, limite, rodada=0, pontos, total=0,d;
    srand (time(0));
	do{
    printf("Digite o numero limite desejado.\n");
	scanf ("%d", &limite);
    dado1 = 1 + (rand()%6);
    dado2 = 1 + (rand()%6);
    dado3 = 1 + (rand()%6);
    soma = dado1 + dado2 + dado3;
	rodada++;
    printf ("Os numeros dos dados sorteados durante a partida foram: %d, %d e %d, resultando numa soma de valor %d.\n", dado1, dado2, dado3, soma);
	if (limite<=11)
		pontos = 11-soma;
	else
	{
		d= limite - 10;
		if (soma>limite)
			pontos = d*(soma-limite);
		else
			pontos = 1 + (limite-soma)/d;
	}
	if (soma<limite)
	{
		total = total + pontos;
		printf ("Seu resultado da partida e de %d pontos.\n\n", pontos);
	}
	else 
	{
		total = total - pontos;
		printf ("Seu resultado da partida e de -%d pontos.\n\n", pontos);
	}
	
	}while (rodada<3);

	printf("Seu resultado final eh de %d pontos.\n", total);
    system ("pause");

}