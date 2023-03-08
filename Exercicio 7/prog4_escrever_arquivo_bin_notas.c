/*Mude os dois programas anteriores para que, ao invés de usar arquivos em modo texto, sejam
usados arquivos binários. Os programas devem ter os seguintes respectivos nomes:
prog4_escrever_arquivo_bin_notas.c e prog5_ler_arquivo_bin_notas.c. O arquivo em binário deve
ser chamar notas.bin.*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define Q 20 


FILE *arq;

int main(int argc, char const *argv[])//recebe nome e nota, nessa ordem, dos argumentos da main e escreve no arquivo binario notas.bin
{
    char url[]="notas.bin";
    char *nomes[Q];
    int  nota[Q];
    unsigned short tamstr[Q];
    int i=0;
    arq = fopen(url, "wb");
    if(arq == NULL)
    {
        printf("Erro, nao foi possivel abrir o arquivo\n");
        exit(1);
    }
    while (i<Q)
    {
        nomes[i] = (char *) malloc(strlen(argv[i+1])*sizeof(char));
        strcpy(nomes[i],argv[i+1]);
        nota[i] = atoi(argv[i+2]);
        tamstr[i] = strlen(nomes[i]);
        fwrite(&tamstr[i],sizeof(unsigned short),1,arq);
        fwrite(nomes[i],sizeof(char),tamstr[i],arq);
        fwrite(&nota[i],sizeof(int),1,arq);
        i++;
    }
    fclose(arq);
    return 0;
}