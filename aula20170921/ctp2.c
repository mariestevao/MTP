#include <stdio.h>
#include <conio.h>
#include <ctype.h>

int main ()
{
	char str[150];
	int i;
	printf ("Digite a frase desejada.\n");
	fgets (str, 150, stdin);
	for (i = 0; str[i]!='\0'; i++)
	{
		if (isalpha(str[i]))
		{
			str[i]= tolower(str[i]);
		}
	}
	printf ("A frase, escrita em letras minusculas fica: %s.\n", str);
	getch ();
	return 0;
}
