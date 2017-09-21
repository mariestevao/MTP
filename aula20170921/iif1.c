#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

void main ()
{
	int i;
	float n, flag=0, num;
	srand(time(0));
	do{
		flag = 0;
		printf("Digite uma porcentagem (de 0 a 1).\nPara sair do programa, digite 3.\n");
		scanf ("%f", &n);
		for (i=1; i<=1000; i++)
		{
			num = (rand()%100);
			if (num < n*100)
				flag = flag++;
		}
		printf("%f.\n", flag);
	} while (n<=1);
	system ("pause");
}