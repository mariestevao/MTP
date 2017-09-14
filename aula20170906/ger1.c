#include <stdio.h>
#include <iostream>
using namespace std;

void main ()
{
    int rest, num, i, flag=0;
    printf ("Digite o numero desejado.\n");
    scanf("%d", &num);
    for (i=2; i<num; i++)
	{
		if (num%i==0)
			flag++;
	}
	if (flag==0)
		printf("O numero %d eh primo.\n", num);
	else 
		printf("O numero %d nao eh primo.\n", num);
	system ("pause");
}