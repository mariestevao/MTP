#include <stdio.h>
#include <conio.h>
#include <ctype.h>

int main ()
{
	char str[150];
	int i, qnts = 0;
	printf ("Digite a frase desejada.\n");
	fgets (str, 150, stdin);
	for (i = 0; str[i]!='\0'; i++)
	{
		if (isalpha(str[i]))
		{
			qnts = qnts++;
		}
	}
	printf ("Foram utilizadas %d letras.\n", qnts);
	getch();
	retun 0;
}
