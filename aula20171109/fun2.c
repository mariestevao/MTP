#include <stdio.h>
#include <math.h>
#include <conio.h>

float quociente (int num, int den)
{
	float quo;
	quo = num/den;
	return quo;
}

int resto (int den, int num)
{
	int rest;
	rest = num%den;
	return rest;
}

int main()
{
	int num,den, quo, rest;
	printf ("Digite o primeiro numero inteiro: ");
	scanf ("%d", &num);
	printf ("\nDigite o segundo numero inteiro: ");
	scanf ("%d", &den);
	if (den == 0)
	{
		printf ("\nERRO! Denominador invalido! Tente novamente.");
		getche ();
		return 0;
	}
	quo = quociente(num, den);
	rest = resto(den, num);
	printf ("\nO quociente sera %d e o resto da divisao sera %d.", quo, rest);
	getche ();
	return 0;
}