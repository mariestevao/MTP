#include <stdio.h>
#include <math.h>
#include <conio.h>
#include <string.h>

void inverter (char *frase)
{
	char str1[100];
	int a;
	printf ("\nA frase invertida sera: ");
	for(a = strlen(frase) -1; a >= 0; a--)
		printf ("%c", frase[a]);
}


int main()
{
	char frase[100];
	printf ("Digite sua frase: ");
	gets(frase);
	inverter(frase);
	getche ();
	return 0;
}