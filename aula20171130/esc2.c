#include <stdio.h>
#include <time.h>

void colocar (int x, char * algo);
int main() {
    srand(time(0));
    char algo [256];
    int x;
    printf("Quantidade de numeros aleatorios: \n");
    printf("Obs: Os numeros gerados sao entre 0 e 100. \n");
    fscanf(stdin, "%d", &x);
    colocar (x, algo);
    return 0;
}
void colocar (int x, char * algo){
    int i;
    int y = 0;
    FILE * arquivo;
    arquivo = fopen("Alou.txt", "r");
    for (i=0; i<x; i++)
    {
        y = rand()%99+1;
        fprintf(arquivo, "%d\n", y);
    }
    fclose(arquivo);
}