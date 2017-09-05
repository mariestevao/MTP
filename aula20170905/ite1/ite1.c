#include <stdio.h>

int main ()
{
    int numero, fat, mult=1;
    printf ("Digite o numero para que seja calculado o seu fatorial.\n");
    scanf ("%d", &numero);
    for(fat=1; fat<=numero; fat++)
        mult = mult*fat;
    printf("O fatorial do numero digitado eh: %d", mult);
    return 0;
}
