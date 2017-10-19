#include <stdio.h>
 #include <iostream>
 #include <conio.h>
 #include <time.h>
 #include <stdlib.h>
 
 int sorteio()
 {
	 int num;
	 num = rand()%36;
  	 return num;
 }
 
 int main()
 {
 	srand (time(0));
	int opcao, linhas, colunas, i=1,j,c;
	char caracteres[] = ": $ # $ : 4 b . ' :. : $ # $: 4b. ':.";
 	printf("Digite o numero de linhas e colunas desejadas, respectivamente.\n");
 	scanf("%d", &linhas);
 	scanf("%d", &colunas);
 	while (i<=linhas)
 	{
 		for (j=1; j<=colunas; j++)
 		{
 			c=sorteio();
			 printf("%c", caracteres[c]);
 		}
 		printf("\n");
 		i++;
 		
 	}
 	getch();
 	return 0;
 }