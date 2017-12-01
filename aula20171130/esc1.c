#include <stdio.h>
#include<stdlib.h>
#include <string.h>

int main()
{
FILE *f;
f=fopen("meutexto.txt", "wb");
if(f==NULL)
{
printf("Erro na abertura \n\n");
exit(1);
}

char c, *str = NULL;
	int i = 0, j = 1;

	str = (char *) malloc(10 * sizeof(char) + 1);

	printf("Digite o texto: ");

	while ((c = getchar()) != '*' && c != EOF && c != '\0')//c e preenchido pelo getchar, enquanto o carcatere for diferente de *, c diferente do ultimo caractere e do '\0'
	{

		if (j == 10)
		{
			str = (char *) realloc(str, strlen(str) + 10 * sizeof(char) + 1);//realoca o numero de caracteres atual + 10 bytes(dez caracteres)
			j = 1;
		}
		*(str + i * sizeof(char)) = c;
		fputc(str[i],f);
		if(*(str+i)=='*'){
        break;
        }
		i++;
		j++;
	}
	*(str + i * sizeof(char)) = '\0';
     while(i>=0)
    {
        *(str+i)= toupper(*(str+i));
        i--;
    }

	fclose(f);
	free(str);
	return 0;
}