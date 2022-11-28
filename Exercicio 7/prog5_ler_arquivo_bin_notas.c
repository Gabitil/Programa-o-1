/*Mude os dois programas anteriores para que, ao invés de usar arquivos em modo texto, sejam
usados arquivos binários. Os programas devem ter os seguintes respectivos nomes:
prog4_escrever_arquivo_bin_notas.c e prog5_ler_arquivo_bin_notas.c. O arquivo em binário deve
ser chamar notas.bin.*/

#include <stdio.h>
#include <stdlib.h>
#define N 20
/*
int main (){
    char url[]="notas.txt";
    int nota;
    int result;
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
*/

#include <stdio.h>
#include <stdlib.h>
#define NUM_ELEMENTOS 20
int main (){
    FILE *arq;
    int i, v[NUM_ELEMENTOS];
    int result;
    //abre arquivo para leitura
    if ((arq = fopen("notas.bin", "rb")) == NULL) {
        printf("Erro ao abrir o arquivo\n");
        exit(1);
    }
    result = fread(&v, sizeof(int), NUM_ELEMENTOS, arq);
    if (result!= NUM_ELEMENTOS)
        printf("Erro: forma lidos apenas %d elementos\n", result);
    else printf("Dados lidos com sucesso!\n");
    for (i=0; i<NUM_ELEMENTOS; i ++)
        printf("%d\n",v[i]);
    fclose(arq);
}
