/*Mude os dois programas anteriores para que, ao invés de usar arquivos em modo texto, sejam
usados arquivos binários. Os programas devem ter os seguintes respectivos nomes:
prog4_escrever_arquivo_bin_notas.c e prog5_ler_arquivo_bin_notas.c. O arquivo em binário deve
ser chamar notas.bin.*/
#include <stdio.h>
#include <stdlib.h>

#define Q 20 

FILE *arq;

int main(int argc, char const *argv[])
{
    char url[]="notas.bin";
    char *dmain[Q];
    arq = fopen(url,"wb");

    unsigned short tamstr[Q];

    if(arq == NULL)
    {
        printf("Erro, nao foi possivel abrir o arquivo\n");
        exit(1);
    }


    for (int i = 1; i< argc; i++ )
    {
        dmain[i-1]=argv[i];
        printf("%s\n", dmain[i-1]);

        tamstr[i-1]=strlen(dmain[i-1])+1;
        fwrite(&tamstr[i-1], sizeof(unsigned short), Q, arq);
    }

    for (int i = 0; i < Q; i++)
    {
        fwrite(dmain, tamstr, Q, arq);
    }
    

    fclose(arq);
}
