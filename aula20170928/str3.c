#include <iostream>
#include <stdio.h>
#include <ctype.h>
#include <string.h>
using namespace std;

void main ()
{
	char str[1000];
	int i;
	printf("Digite a frase desejada.");
	fgets(str,1000,stdin);
	for (i=0; str[i]!='\0'; i++)
	{
		if ((str[i]>='a' && str[i]<='m')|| (str[i]>='A' && str[i]<='M'))
		{
			str[i] = str[i] + 13;
		}
		else if ((str[i]>='n' && str[i]<='z')|| (str[i]>='N' && str[i]<='Z'))
			str[i] = str[i] - 13;
	}
	printf("%s.\n", str);
	system ("pause");
}