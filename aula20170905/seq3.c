#include <stdio.h>
#include <conio.h>

int main ()
{
    float A, B, C, D, E, soma;
    printf ("Digite o valor das notas A, B, C, D e E, respectivamente.\n");
    scanf ("%f", &A);
    scanf ("%f", &B);
    scanf ("%f", &C);
    scanf ("%f", &D);
    scanf ("%f", &E);
    soma = A*2 + B*2 + C*2 + D*3 + E*5;
    soma = soma/14;
    printf("A media do aluno e %.2f", soma);
	getch();
    return 0;
}
