/*Crie o prog3_ler_arqivo_notas.c para abrir o arquivo criado pelo programa anterior e imprimir
todos os dados do arquivo notas.txt.*/

#include <stdio.h>
#include <stdlib.h>
#define N 10

int main (){
    char url[]="notas.txt";
    int nota;
    int  result;
    FILE *arq;
    char nome[50];
    arq = fopen(url, "r");
    if(arq == NULL)
        printf("Erro, nao foi possivel abrir o arquivo\n");
    else
        while (!feof(arq))
        {
            result= fscanf(arq,"%s %d",nome, &nota);
            if (result && !feof(arq))
                printf("%s - %d",nome,nota);
                if(!feof(arq))
                    printf("\n");
       }
    fclose(arq);
}
