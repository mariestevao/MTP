#include <iostream>
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
using namespace std;

int main ()
{
	srand(time(0));
	double v[1000], num, menor, maior;
	int i;
	do{
		printf("Digite o numero desejado, entre 1 e 1000.");
		scanf ("%lf", &num);
	}while (num<1||num>1000);
	
	for (i=0; i<num; i++)
	{
		v[i] = rand()%10;
	}
	menor = v[0];
	maior = v[0];
	for (i=0; i<num; i++)
	{
		if(v[i]<menor)
			menor = v[i];
		if(v[i]>maior)
			maior = v[i];
	}
	printf("O maior numero eh %.2lf e o menor %.2lf.\n", maior, menor);
	return 0;
}