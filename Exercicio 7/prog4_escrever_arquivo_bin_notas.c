/*Mude os dois programas anteriores para que, ao invés de usar arquivos em modo texto, sejam
usados arquivos binários. Os programas devem ter os seguintes respectivos nomes:
prog4_escrever_arquivo_bin_notas.c e prog5_ler_arquivo_bin_notas.c. O arquivo em binário deve
ser chamar notas.bin.*/

#include <stdio.h>
#include <stdlib.h>

#define N 20

FILE *arq;

int main(int argc, char const *argv[])
{
    const void *notas[N];
    int result;

    char url[]="notas.bin";
    arq = fopen(url,"wb");
    if(arq == NULL)
    {
        printf("Erro, nao foi possivel abrir o arquivo\n");
        exit(1);
    }


    for (int i = 1; i<argc; i++ )
            notas[i-1]=argv[i];  

    result = fwrite(&notas, sizeof(char), N , arq);
    
    if (result!= N)
        printf("Erro: foram escritos %d elementos\n", result);
    else 
        printf("Dados escritos com sucesso!\n");
    fclose(arq);
}
