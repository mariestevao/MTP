#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>

int dado() {
	int rodada;
	rodada = rand()%6 + 1;
	printf("O resultado da rodada eh %d", rodada);
	
	return rodada;
}

int main() {
    srand(time(0));
    char c;
    int vez=1,soma=0, ganhou=0,flagperde=0;
	printf("Simulador de dado vs. 1.0 - Digite ENTER para rodar o dado e Q para sair. ");
    do {
	scanf("%c", &c);
	soma = dado() + soma;
	if (vez==5)
	{
		printf("\nA soma eh %d\n", soma);
		if (18<=soma && soma<=23)
		{

		printf("Voce GANHOU!\n");
		ganhou = 1;
		}
		else if (soma<18 || soma>23)
	{
		printf("Voce perdeu!");
		flagperde++;
		vez=1;
		
	}
	
	}
	vez++;
    } while(ganhou!=1 && flagperde<3 && c!='q' && c!='Q');
    
	getch();
    return EXIT_SUCCESS;
}