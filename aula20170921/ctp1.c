#include <iostream>
#include <stdio.h>
#include <ctype.h>
using namespace std;

int main ()
{
	char str[500];
	printf ("Digite sua mensagem: ");
	fgets(str,500,stdin);
	for (int i=0; str[i] != '\0'; i++)
	{
			if (isalpha (str[i]))
			str[i] = toupper(str[i]);
	}
	printf ("\nA mensagem em letras maiusculas sera: %s.\n", str);
	system ("pause");
	return 0;
}