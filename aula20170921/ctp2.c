#include <stdio.h>
#include <iostream>
#include <ctype.h>
using namespace std;

void main ()
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
	system ("pause");
}