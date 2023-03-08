/*Mude os dois programas anteriores para que, ao invés de usar arquivos em modo texto, sejam
usados arquivos binários. Os programas devem ter os seguintes respectivos nomes:
prog4_escrever_arquivo_bin_notas.c e prog5_ler_arquivo_bin_notas.c. O arquivo em binário deve
ser chamar notas.bin.*/

#include <stdio.h>
#include <stdlib.h>
#define Q 20
#define N 10

int main (){ //le o arquivo binario notas.bin e imprime na tela
    FILE *arq;
    char url[]="notas.bin";
    char *nomes[Q];
    int  nota[Q];
    unsigned short tamstr[Q];
    int i=0;
    arq = fopen(url, "rb");
    if(arq == NULL)
    {
        printf("Erro, nao foi possivel abrir o arquivo\n");
        exit(1);
    }
    while (i<Q)
    {
        fread(&tamstr[i],sizeof(unsigned short),1,arq);
        nomes[i] = (char *) malloc(tamstr[i]*sizeof(char));
        fread(nomes[i],sizeof(char),tamstr[i],arq);
        fread(&nota[i],sizeof(int),1,arq);
        printf("%s %d\n",nomes[i],nota[i]);
        i++;
    }
    fclose(arq);
    return 0;
}
