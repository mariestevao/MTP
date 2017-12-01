#include <stdio.h>
#define NCHAR 256

void receberDados ();
void recuperarDados ();

int main () {
    int opcao;
    do {
        printf("1 - Receber dados\n");
        printf("2 - Recuperar dados\n");
        printf("0 - Sair\n");
        printf("Entre com a opcao: ");
        fscanf(stdin, "%d", &opcao);
        getchar();
        if (opcao == 1) receberDados ();
        if (opcao == 2) recuperarDados ();
    } while (opcao);
    return 0;
}
void receberDados () {
    FILE * arquivo;
    char nome [NCHAR];
    int idade;
    float altura_m;
    printf ("Entre com o seu nome: ");
    fgets (nome, NCHAR, stdin);
    printf ("Entre com o sua idade: ");
    fscanf(stdin, "%d", &idade);
    printf ("Entre com o sua altura: ");
    fscanf (stdin, "%f", &altura_m);
    arquivo = fopen ("info.txt", "w");
    fprintf(arquivo, "%s\n%d\n%f\n", nome, idade, altura_m);
    fclose(arquivo);

}
void recuperarDados () {
    FILE * arquivo;
    char nome [NCHAR];
    int idade;
    float altura_m;
    arquivo = fopen ("info.txt", "r");
    fscanf (arquivo, "%s\n%d\n%f\n", nome, &idade, &altura_m);
    fclose(arquivo);
    fprintf (stdout, "Nome: %s\n", nome);
    fprintf (stdout, "Idade: %d\n", idade);
    fprintf (stdout, "Altura: %g\n", altura_m);
}