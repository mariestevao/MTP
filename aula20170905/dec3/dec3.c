#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main ()
{
    int dado1, dado2, dado3, soma;
    srand (time(0));
    printf("Bem-vindo ao jogo de 7 ou 11. Caso seus dados resultem numa soma de 7 ou 11, voce ganha a partida.\n\n");
    dado1 = 1 + (rand()%6);
    dado2 = 1 + (rand()%6);
    dado3 = 1 + (rand()%6);
    soma = dado1 + dado2 + dado3;
    printf ("Os numeros dos dados sorteados durante a partida foram: %d, %d e %d, resultando numa soma de valor %d.\n", dado1, dado2, dado3, soma);
    if (soma==7 || soma==11)
        printf ("VOCE GANHOU");
    else
        printf ("VOCE PERDEU");
    return 0;

}
