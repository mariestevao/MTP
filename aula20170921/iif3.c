#include <stdio.h>
#include <iostream>
using namespace std;

int main ()
{
    double numero, fat, mult=1;
    printf ("Digite o numero para que seja calculado o seu fatorial.\n");
    scanf ("%lf", &numero);
    for(fat=1; fat<=numero; fat++)
        mult = mult*fat;
    printf("O fatorial do numero digitado eh: %lf.\n", mult);
	system ("pause");
    return 0;
}