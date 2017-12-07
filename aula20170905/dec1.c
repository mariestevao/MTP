#include <stdio.h>
#include <conio.h>

int main ()
{
    int numero, resto;
    printf ("Digite o numero desejado.\n");
    scanf ("%d", &numero);
    resto = numero%2;
    if (resto==1)
        printf("O numero digitado e impar.\n");
    else if (resto==0)
        printf("O numero digitado e par.\n");
    resto = numero%3;
    if (resto==0)
        printf("O numero digitado e multiplo de 3.\n");
    resto = numero%5;
    if (resto==0)
        printf("O numero digitado e multiplo de 5.\n");
    resto = numero%7;
    if (resto==0)
        printf("O numero digitado e multiplo de 7.\n");
     getch ();   
	return 0;
}
