#include <stdio.h>
#include <conio.h>
int main ()
{
	int i, flag=0, total=0, vetor[] = {0x0F,0xFF,0xFFFF,0xFFFFFF,0x80000001,0xFFFFFFFF};
	unsigned char *ponteiro;
	ponteiro = (unsigned char *) &vetor;

	for(i=0; i<sizeof(vetor); i++, ponteiro++)
	{
		total++;
		if (*ponteiro!=0x0)
			flag++;
		printf("No endereco %X esta o conteudo %p.\n", ponteiro, *ponteiro);
	}
	printf ("Existem %d bytes com 1's e foram varridos %d", flag, total);
	getch ();
	return 0;
}

