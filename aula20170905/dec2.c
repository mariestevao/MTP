#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>

int main ()
{
   int numero,  aleat, soma, resto;
   srand(time(0));
   aleat = rand() % 10;
  do{
        printf ("Digite o numero desejado, ele deve ser inteiro positivo.\n");
        scanf ("%d", &numero);
  }while (numero<0);
   soma = numero + aleat;
   resto = soma%2;
   if (resto==0)
    printf ("O numero sorteado foi %d, a soma dele com o numero digitado vale %d e eh par", aleat, soma);
   else
     printf ("O numero sorteado foi %d, a soma dele com o numero digitado vale %d e eh impar", aleat, soma);
	getch();   
	return 0;
}
