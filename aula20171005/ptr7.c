#include <stdio.h>
#include <iostream>
#include <conio.h>

using namespace std;

void main ()
{
	int i, v[4] = {0, 0, 0, 0};
	char *ponteiro;
	printf ("Digite os quatro numeros desejados.\n");
	scanf("%d %d %d %d", &v[0], &v[1], &v[2], &v[3]);
	ponteiro = (char *)&v[0];
	for (i=0; i<sizeof(v); ponteiro++, i++)
	{
		printf ("%c", *ponteiro);
	}
	getch ();
}
