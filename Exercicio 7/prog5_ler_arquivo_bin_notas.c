/*Mude os dois programas anteriores para que, ao invés de usar arquivos em modo texto, sejam
usados arquivos binários. Os programas devem ter os seguintes respectivos nomes:
prog4_escrever_arquivo_bin_notas.c e prog5_ler_arquivo_bin_notas.c. O arquivo em binário deve
ser chamar notas.bin.*/

#include <stdio.h>
#include <stdlib.h>
#define N 10

int main (){
    char url[]="notas.bin";
    int nota;
    int  result;
    FILE *arq;
    char nome[50];
    arq = fopen(url, "rb");
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
