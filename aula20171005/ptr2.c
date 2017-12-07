#include <stdio.h>
#include <conio.h>
int main ()
{
	int i, flag=0, total=0, vetor[] = {0,1,2,4,8,16,1025};
	unsigned char *ponteiro;
	ponteiro = (unsigned char *) &vetor;

	for(i=0; i<sizeof(vetor); i++, ponteiro++)
	{
		printf("No endereco %X esta o conteudo %d.\n", ponteiro, *ponteiro);
		total++;
		if (*ponteiro == 0x00)
			flag++;
	}
	printf ("Foram varridos %d de memoria, e foram achados %d somente com 0's", total, flag);
	getch ();
	return 0;
}
