#include <stdio.h>
#include <conio.h>

int main ()
{
    float area, base, altura;
    printf ("Digite o valor da base e da altura do paralelogramo, respectivamente.\n");
    scanf ("%f", &base);
    scanf ("%f", &altura);
    area = base*altura;
    printf ("A area do paralelogramo vale %f unidades de area.\n", area);
	getch();
    return 0;
}
