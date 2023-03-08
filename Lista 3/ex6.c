/*Implemente um codigo que mostre o conteúdo de um arquivo recebido na linha de comando,
mostrando para cada linha o número respectivo.*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
    FILE *arq;
    char linha[100];
    int i = 1;
    if(argc != 2){
        printf("Uso: %s <nome do arquivo>", argv[0]);
        exit(1);
    }
    arq = fopen(argv[1], "r");
    if(arq == NULL){
        printf("Erro ao abrir o arquivo %s", argv[1]);
        exit(1);
    }
    while(fgets(linha, 100, arq) != NULL){
        printf("%d: %s", i, linha);
        i++;
    }
    fclose(arq);
    return 0;
}