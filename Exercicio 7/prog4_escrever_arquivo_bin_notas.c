/*Mude os dois programas anteriores para que, ao invés de usar arquivos em modo texto, sejam
usados arquivos binários. Os programas devem ter os seguintes respectivos nomes:
prog4_escrever_arquivo_bin_notas.c e prog5_ler_arquivo_bin_notas.c. O arquivo em binário deve
ser chamar notas.bin.*/
#include <stdio.h>
#include <stdlib.h>

#define N 10

FILE *arq;

int main(int argc, char const *argv[])
{

    char *nome[N];
    int notas[N];
    int j=0,k=0, mn=1;

    char url[]="notas.bin";
    arq = fopen(url,"wb");
    if(arq == NULL)
    {
        printf("Erro, nao foi possivel abrir o arquivo\n");
        exit(1);
    }


    for (int i = 1; i< argc; i++ )
    {

        if (i%2!=0)
        {          
            nome[j]=argv[i];
            j++;
            
        }
        else
        {
            notas[k]=atoi(argv[i]);
            k++;
        }
  
    }

    for (int i = 0; i < j ; i++)
    {

        fprintf(arq, "%s\n", nome[i]);
        fprintf(arq,"%d\n", notas[i]);
    }
    
    fclose(arq);
}
