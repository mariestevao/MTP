#include <stdio.h>
#include <time.h>
#include <stdlib.h>
using namespace std;

void main ()
{
	int n1, n2;
	srand (time(0));
	n1 = rand()%100;
	n2 = 101 + rand()%193;
	printf ("O primeiro numero aleatorio, compreendido entre 0 e 99 eh: %d.\nO segundo numero aleatorio, entre 101 e 293 eh: %d.\n", n1, n2);
	system ("pause");
}