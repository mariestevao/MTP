#include <stdio.h>
#include <iostream>
#include <conio.h>
using namespace std;

void main ()
{
	int i;
	unsigned int variavel =  0xFACA8421;
	unsigned char *ponteiro;
	ponteiro = (unsigned char *) &variavel;

	for(i=0; i<sizeof(variavel); i++, ponteiro++)
	{
		printf("O conteudo do endereco %p eh: %X\n", ponteiro, *ponteiro);
	}

	getch ();
}