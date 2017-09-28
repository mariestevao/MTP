#include <iostream>
#include <stdio.h>
#include <ctype.h>
#include <string.h>
using namespace std;

void main ()
{
	char str[1000], str1[50], str2[50];
	int i, primeiro=0, flag=0;
	printf("Digite a frase desejada.");
	fgets(str,1000,stdin);
	printf("A string tem %d caracteres.\n", strlen (str));
	for (i=0; str[i]!='\0'; i++)
	{
		if (isalpha(str[i]))
		{
			str[i]= toupper(str[i]);
		}
	}
			if (str[0] =='B'  && str[1]=='O' && str[2] =='M' && str[3]==' ' && str[4] =='D' && str[5]== 'I'  && str[6]=='A')
			{
				printf("Bom dia pra voce tambem!.\n");
				flag=1;
			}
			else if (str[0] == 'T' && str[1]=='C' && str[2] == 'H' && str[3]=='A' && str[4] =='U')
			{
				printf("Saindo? Que pena…\n");
				flag=1;
			}
	
	if (flag==0)
		printf("Voce quis dizer: %s?", str);
	system ("pause");
}