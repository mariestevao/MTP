#include <stdio.h>
#include <iostream>
#include <math.h>
using namespace std;

void main ()
{
	double lado1,lado2,lado3,ang;
	printf("Digite dois lados do triangulo.\n");
	scanf("%lf", &lado1);
	scanf("%lf", &lado2);
	printf ("Digite o valor do angulo entre eles, em radianos.\n");
	scanf ("%lf", &ang);
	lado3 = pow(lado1, 2) + pow(lado2,2) - (2*lado1*lado2*cos(ang));
	lado3 = sqrt (lado3);
	printf("O terceiro lado vale %lf.\n", lado3);	
	system ("pause");
}