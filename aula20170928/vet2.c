#include <iostream>
#include <stdio.h>

using namespace std;

int main ()
{
	double v[10], armazena;
	int i, j;
	for (i=0; i<10; i++)
	{
		printf("Digite o numero desejado.\n");
		scanf("%lf", &v[i]);
	}
	for (i=0,j=9; i<5; i++, j--)
	{
		armazena = v[i];
		v[i] = v[j];
		v[j] = armazena;
	}
	printf("O vetor inverso eh:\n");
	for (i=0; i<10; i++)
		printf("%.2lf ", v[i]);	
	return 0;
}