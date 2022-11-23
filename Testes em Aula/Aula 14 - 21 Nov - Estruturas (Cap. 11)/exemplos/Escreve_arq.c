//programa para ler e imprimir seus argumentos
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 20
int main(int argc, char *argv[]) {
    int i, j;
    FILE *arq;

    char nome_arquivo[20]= "notas2.txt";

    arq=fopen(nome_arquivo, "w");
    if (arq==NULL)
    {
        printf("Arquivo nao criado");
        exit(1);
    }
    

    int notas[MAX];
    printf("Quantidade de argumentos: %d.\n",argc);

    for (int j=1; j<argc; j++)
    {
        printf("Argurmento %d: %s\n",j,argv[j]);
        fprintf(arq,"%s\n", argv[j]);
    }

    fclose (arq);
}