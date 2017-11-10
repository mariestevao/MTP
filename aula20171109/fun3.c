#include <stdio.h>
#include <math.h>
#include <conio.h>

void comum (int A[], int B[], int n, int m)
{
	int i, j;
	printf ("Os numeros em comum sera: ");
	for (i = 0; i<=n; i++)
		for (j=0; j<=m; j++)
	{
		if (A[i] == B[j])
			printf ("%d ", A[i]);
		if (B[j] == 29)
			break;
	}
}


int main()
{
	int A[] = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29, 31};
	int n = sizeof(A)/sizeof(int);
	int B[] = {1, 2, 3, 4, 5, 6, 8, 10, 12, 7, 29};
	int m = sizeof(B)/sizeof(int);
	comum (A, B, n, m);
	getch ();
	return 0;
}