#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#define N 256

/* cifra ROT13, um exemplo de uma cifra de César */

void criptografa(char *frase) {
	int i = 0;
	while(frase[i]) {
		if(isalpha(frase[i])) {
			if((frase[i] >= 'A' && frase[i] <= 'M') ||
					(frase[i] >= 'a' && frase[i] <= 'm'))
				printf("%c", frase[i]+13);
			else
				printf("%c", frase[i]-13);
		}
		else
			printf("%c", frase[i]);
		i++;
	}
}

void descriptografa(char *frase) {
	criptografa(frase);
}

int main() {
    char c;
    char frase[N];
    do {
		printf(">> 1 - Criptografa; 2 - Descriptografa; 3 - Sair: ");
		scanf("%c", &c); getchar();
		if(c == '1' || c == '2') {
			if(c == '1')
				printf("Entre com a frase para criptografar:\n");
			else
				printf("Entre com a frase para descriptografar:\n");
			fgets(frase, N, stdin);
			if(c == '1')
				criptografa(frase);
			else
				descriptografa(frase);
		}
	} while(c != '3');
    printf("Obrigado pela preferencia!\n");
    return EXIT_SUCCESS;
}