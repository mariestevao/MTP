#include <stdio.h>
#include <conio.h>
#include <math.h>

int main ()
{
	double x1, y1, x2, y2, dist1,dist2,dist;
	printf ("Digite as coordenadas do ponto A.\n");
	scanf ("%d", &x1);
	scanf ("%d", &y1);
	printf ("Digite as coordenadas do ponto B.\n");
	scanf ("%d", &x2);
	scanf ("%d", &y2);
	dist1 = (x2-x1);
	dist2 = (y2-y1);
	dist1=pow(dist1,2);
	dist2=pow(dist2,2);
	dist=dist1+dist2;
	dist = sqrt (dist);
	printf("A distancia e de %lf.\n", dist);	
	getch ();
	return 0;
}
