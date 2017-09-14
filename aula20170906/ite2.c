#include <stdio.h>
#include <iostream>
using namespace std;

void main ()
{
    int base, pot, mult, i;
    printf ("Digite a base e o expoente desejados, respectivamente.\n");
    scanf("%d", &base);
    scanf("%d", &pot);
    mult=base;
    for( i=2; i<=pot; i++)
        mult = base*mult;
    printf ("O resultado da potenciacao eh: %d.\n", mult);
	system ("pause");
}