#include <stdio.h>
#include <conio.h>

int main ()
{
    int numero, resto;
    printf ("Digite o numero desejado.\n");
    scanf ("%d", &numero);
    resto = numero%2;
    if (resto==1)
	{
        printf("O numero digitado e impar");
		resto = numero%5;
		if (resto==0)
			printf(" e multiplo de 5.");
	}
    else if (resto==0)
	{
        printf("O numero digitado e par");
		resto = numero%3;
		if (resto==0)
			printf(" além de ser multiplo de 3");
        resto = numero%7;
		if (resto==0)
			printf(" e multiplo de 7.");
	}
	printf("\n");
	getch();
	return 0;
}