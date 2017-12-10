#include <stdio.h>
#include <conio.h>
#include <math.h>


int main ()
{
	int num, i;
	float resp1, soma1=0;
	double resp2, soma2=0;
	printf("Digite o numero desejado.\n");
	scanf ("%d", &num);
	resp1 = pow(num,-1.0);
	resp2 = pow(num, -1.0);
	printf ("%f %lf", resp1, resp2);
	for (i=1; i<=729; i++)
	{
		soma1 = resp1 + soma1;
		soma2= soma2 + resp2;
	}
	printf ("A resposta em float eh %.15f e em double e %lf.\n", soma1, soma2);
	getch ();
	return 0;
}
