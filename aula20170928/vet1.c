#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main ()
{
	srand (time(0));
	double v[10000], soma=0, usuario, media;
	int i, num;
	do{
	printf("Digite o numero desejado, inteiro e nao negativo.\n");
	scanf("%lf", &usuario);
	}while(usuario<0);

	v[0] = usuario;
	soma = v[0];
	num = usuario++;
	for (i=1; i<10000; i++)
	{
		v[i] = rand()%num;
		soma = soma + v[i];
		
	}

	media = soma/10000;
	printf("A media correspondente eh %lf.\n", media);
	getch ();
	return 0;
}
