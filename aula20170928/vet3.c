#include <iostream>
#include <stdio.h>

int main ()
{
	double v[10], soma=0, mult=1;
	int i;
	for (i=0; i<10; i++)
	{
		printf("Digite o numero desejado.");
		scanf("%lf", &v[i]);
	}
	for (i=0; i<10; i++)
	{
		soma = soma + v[i];
		mult = mult * v[i];
	}

	
	printf("A soma dos numeros eh %.2lf e sua produtoria eh %.2lf.\n", soma, mult);
	getch ();
	return 0;
}
