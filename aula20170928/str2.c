#include <conio.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main ()
{
	char str[1000];
	int v=0, d=0, e=0, c=0, i;
	printf("Digite a frase desejada.");
	fgets(str,1000,stdin);
	for (i=0; str[i]!='\0'; i++)
	{
		if (isalpha(str[i]))
		{
			str[i]= toupper(str[i]);
			if (str[i]=='A' || str[i]=='E' ||str[i]=='I' ||str[i]=='O' ||str[i]=='U')
				v=v++;
			else
				c++;
		}
		else if (str[i]== ' ')
			e++;
		else if (str[i]>='0' && str[i]<='9')
			d++;
	}
	printf("Existem %d vogais, %d consoantes, %d digitos e %d espacos.\n", v, c, d, e);
	getch ();
	return 0;
}
