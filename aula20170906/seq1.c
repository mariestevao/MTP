#include <stdio.h>
#include <conio.h>

int main ()
{
    float lado, area;
    printf ("Digite o valor do lado do quadrado para que sua area seja calculada, em metros.");
    scanf ("%f", &lado);
    area = lado*lado;
    printf ("A area do quadrado em questao vale %f metros.", area);
	getch();
    return 0;
}