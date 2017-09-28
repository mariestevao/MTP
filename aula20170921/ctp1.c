#include <stdio.h>
#include <conio.h>

main()
{
	int ce,cc,p; 
	float pk, pc,vi,imp,vk,vt;
	printf ("Insira os seguintes valores, codigo de estado, peso da carga");
	scanf ("%d %d %d",&ce,&cc,&p);
	if (ce ==1){ imp = 35;}
	if (ce ==2){ imp = 25;}
	if (ce ==3){ imp = 15;}
	if (ce ==4){ imp = 5;}
	if (ce ==5){ imp = 1;}
	if (ce<1 && ce>5){
		printf ("codigo do estado invalido"); 
	}
	if (cc >= 10 && cc < 20){
	vk = 100; 
	}
	if (cc>20 && cc<31){
	vk= 250;
	}
	if (cc>30 && cc<41){
	vk= 340;
	}
	pk = p*1000;
	pc = pk*vk;
	vi = vk*(imp/100);
	vt = vi+pc;
	
	printf("\nPeso da carga em quilos= %d", pk );
    printf("\n	Preco da carga= %.2f", pc );
    printf ("\n Valor do imposto sobre o valor da carga %.2f", vi);
    printf ("\n Valor transportado pelo caminhao = %.2f ", vt);

	
	getch(); 
	return 0;
}