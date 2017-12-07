#include <stdio.h>
#include <conio.h>
int main ()
{
	int num1, num2, soma, i;
	unsigned char *ponteiro1, *ponteiro2, *pontsoma;
	printf ("Digite os dois numeros desejados.\n");
	scanf("%f %f", &num1, &num2);
	ponteiro1 = (unsigned char *) &num1;
	ponteiro2 = (unsigned char *) &num2;
	soma=num1+num2;
	pontsoma = (unsigned char *) &soma;
	for(i=0; i<sizeof(num1); i++, ponteiro1++)
		printf("No endereco %X esta o conteudo %x.\n", ponteiro1, *ponteiro1);
	for(i=0; i<sizeof(num2); i++, ponteiro2++)
		printf("No endereco %X esta o conteudo %x.\n", ponteiro2, *ponteiro2);
	for(i=0; i<sizeof(soma); i++, pontsoma++)
		printf("No endereco %X esta o conteudo da soma %x.\n", pontsoma, *pontsoma);
	getch ();
	return 0;		
}

