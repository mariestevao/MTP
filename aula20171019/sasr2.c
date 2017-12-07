#include <stdio.h>
#include <conio.h>

void impar()
{
	int i;
	for(i=1;i<=19;i=i+2)
		printf("%d  ", i);
}

void par()
{
	int i;
	for(i=2;i<=20;i=i+2)
		printf("%d  ", i);
}

int main()
{
	int opcao;
	printf("Digite a opcao desejada:\n1-Impares\n2-Pares\n");
	scanf("%d", &opcao);
	switch (opcao)
	{
		case 1:
			impar();
			break;
		case 2:
			par();
			break;
		default:
			break;
	}
	getch();
	return 0;
}
