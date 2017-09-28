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
		if (isalpha(str[i]))
		{
			str[i]= toupper(str[i]);
		}
	}
	for (i=0; str[i]!='\0'; i++)
	{
		 switch (str[i])
			 {
				 case'A':
					 str[i] = '4'; 
					 break;
				 case 'E':
					 str[i] = '3'; 
					 break;
				 case 'I':
					 str[i] = '1'; 
					 break;
				 case 'O':
					 str[i] = '0'; 
					 break;
				 case 'S':
					 str[i] = '5'; 
					 break;
				 case 'G':
					 str[i] = '6';
					 break;
				 default:
					 break;
		 }
	}
	printf("%s.\n", str);
	system ("pause");
}