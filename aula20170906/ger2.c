#include <stdio.h>
#include <conio.h>

int main ()
{
    int num, i, flag=0;
    printf ("Digite o numero desejado.\n");
    scanf("%d", &num);
    for (i=1; i<num; i++)
	{
		if (num%i==0)
		flag = flag + i;
	}
	if (flag==num)
		printf("O numero %d eh perfeito.\n", num);
	else 
		printf("O numero %d nao eh perfeito.\n", num);
	getch();
	return 0;
}