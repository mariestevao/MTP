#include <stdio.h>
#include <iostream>
#include <conio.h>

using namespace std;

void main ()
{
	char str[16];
	int i;
	int *ponteiro ;
	int *ponteiro2 ;
	for (i=0; i<16; i++)
		str[i]=0;
	printf("Digite a frase desejada.\n");
	fgets (str, 16, stdin);
	ponteiro =  (int *)&str;
	ponteiro2 =  (int *)&str;
	printf ("APRESENTACAO EM DECIMAL:\n");
	for (i=0; i<sizeof(str)/4; ponteiro++, i++)
	{
		printf ("%d ", *ponteiro);
	}
	printf ("\n\nAPRESENTACAO EM HEXADECIMAL:\n");
	for (i=0; i<sizeof(str)/4; ponteiro2++, i++)
	{
		printf ("%X ", *ponteiro2);
	}
	getch ();
}

