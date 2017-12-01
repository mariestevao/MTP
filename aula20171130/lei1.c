#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char * iniciaTexto();
char * recebeTexto();
void gravaTexto (char * texto, int nchar);
char * leTexto ();
int main() {
    char * texto;
    printf("::: Inicio (para sair, tecle #,ENTER) :::::::::::\n");
    texto = recebeTexto();
    printf("\n::: Na memoria :::::::::::\n");
    printf("%s\n", texto);
    printf("\nTamanho da string: %d\n", strlen(texto));
    free(texto);
    return 0;
}
char * iniciaTexto() {
    char * texto = (char*) malloc(sizeof(char));
    texto[0] = '\0';
    return texto;
}
char * recebeTexto() {
    char * texto = leTexto();
    char * aux;
    int c, tamanho = 0;
    printf("%s\n", texto);
    do {
        c = getchar();
        if(c != '#') {
            aux = (char *) realloc(texto, tamanho+2);
            if(aux != NULL) {
                texto = aux;
                texto[tamanho] = c;
                tamanho++;
                texto[tamanho] = '\0';
            }
            else printf("\n** Erro! Sem memoria! **\n");
        }
    } while(c != '#');
    gravaTexto (texto, strlen(texto));
    return texto;
}

void gravaTexto (char * texto, int nchar) {
    FILE *arquivo;
    int i;
    arquivo = fopen("meutexto.txt", "a");
     if(arquivo == NULL)
        fprintf(stderr, "Erro na criacao do arquivo!\n");
     else {
        for (i=0; i<nchar; i++)
            fputc(texto[i], arquivo);
        fclose(arquivo);
     }
}
char * leTexto () {
    FILE * arquivo;
    char * texto = iniciaTexto();
    char * aux;
    int c, tamanho = 0;
    arquivo = fopen("meutexto.txt", "r");
     if(arquivo == NULL)
        return texto;
     else {
        do {
        c = fgetc(arquivo);
        if(c != EOF) {
            aux = (char *) realloc(texto, tamanho+2);
            if(aux != NULL) {
                texto = aux;
                texto[tamanho] = c;
                tamanho++;
                texto[tamanho] = '\0';
            }
            else printf("\n** Erro! Sem memoria! **\n");
        }
        } while (c!= EOF);
        fclose(arquivo);
        return texto;
     }
}