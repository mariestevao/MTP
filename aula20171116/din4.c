#include <stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<conio.h>
typedef

struct strPonto
{
    double x;
    double y;
}ponto;

typedef

struct strPoligono
{
    int quantidade;
    ponto * vertices;
}poligono;

int determinante (ponto A, ponto B)
{
    return ((A.x*B.y)-(A.y*B.x));
}
ponto centroide (poligono p)
{
    ponto C;
    double somatorioX=0, somatorioY=0;
    int i;
    for (i=0; i<p.quantidade; i++){
        somatorioX+=p.vertices[i].x;
        somatorioY+=p.vertices[i].y;
    }
    C.x=(double)somatorioX/p.quantidade;
    C.y=(double)somatorioY/p.quantidade;
    return C;
}
int main()
{
    int i, j, qnts_Poligonos;
    double area;
    ponto cent;
    poligono * vetPoligono;
    printf ("Digite a quantidade de poligonos desejada.");
    scanf ("%d", &qnts_Poligonos);
    vetPoligono = (poligono*) calloc (qnts_Poligonos, sizeof (poligono));
    for (i=0; i<qnts_Poligonos; i++)
	{
        printf ("Digite a quantidade de pontos do poligono %d: ", i+1);
        scanf ("%d", &vetPoligono[i].quantidade);
        vetPoligono[i].vertices=(ponto*)calloc(vetPoligono[i].quantidade, sizeof (ponto));
        for (j=0; j<vetPoligono[i].quantidade; j++)
		{
            printf ("Digite a coordenada x e y do vertice %d: ", j+1);
            scanf ("%lf %lf", &vetPoligono[i].vertices[j].x, &vetPoligono[i].vertices[j].y);
        }
        area=0;
        for (j=0; j<vetPoligono[i].quantidade-1; j++)
		{
            area= area + determinante (vetPoligono[i].vertices[j], vetPoligono[i].vertices[j+1]);
        }
        area=0.5*area;
        if (area<0){
            area*=-1;
        }
        printf ("A area do poligono %d eh %lf\n", i+1, area);

        cent = centroide (vetPoligono[i]);
        printf ("As coordenadas x e y do centroide do poligono %d sao (%lf,%lf)\n", i+1, cent.x, cent.y);
    }
getch();
return 0;
}	
	