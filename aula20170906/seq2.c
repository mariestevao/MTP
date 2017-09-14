#include <stdio.h>
#include <iostream>
using namespace std;

void main ()
{
    float base, altura, area;
    printf ("Digite o valor da base do triângulo e de sua altura, respectivamente.");
    scanf ("%f", &base);
	scanf ("%f", &altura);
    area = (base*altura)/2;
    printf ("A area do triangulo em questao vale %f unidades de area.\n", area);
	system ("pause");
}