#include <stdio.h>
#include <math.h>
#include <conio.h>

void soma (int A[], int N)
{
	int i, soma = 0;
	for (i = 0; i<= N; i++)
	{
		soma = soma + A[i];
	}
	printf ("A soma do vetor sera %f.", soma);
}


int main()
{
	int A[] = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29, 31};
	int N = sizeof(A)/sizeof(int);
	soma (A,N);
	getche ();
	return 0;
}