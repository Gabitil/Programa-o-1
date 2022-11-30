/*Mude os dois programas anteriores para que, ao invés de usar arquivos em modo texto, sejam
usados arquivos binários. Os programas devem ter os seguintes respectivos nomes:
prog4_escrever_arquivo_bin_notas.c e prog5_ler_arquivo_bin_notas.c. O arquivo em binário deve
ser chamar notas.bin.*/

#include <stdio.h>
#include <stdlib.h>
#define Q 20
#define N 10

int main (){
    char url[]="notas.bin";
    char *nomes[N];
    int  cont, nota[N], recebe[Q];

    unsigned short tamstr[Q];
    FILE *arq;

    arq = fopen(url, "rb");
    if(arq == NULL)
    {
        printf("Erro, nao foi possivel abrir o arquivo\n");
        exit(1);
    }

    for (int i = 0; i < Q; i++)
    {
        fread(tamstr, sizeof(unsigned short), 1, arq);
        recebe[i]= malloc(sizeof(char) * tamstr[i]);
        cont = fread(recebe, tamstr, Q, arq);

        printf ("%d N: %d \n", i+1, recebe[i]);
        
    }

    //cont = fread(recebe, sizeof(char), Q, arq);

    if (cont !=Q)
    fprintf (stderr, "Foram lidos apenas %d Elementos!!!\n" , cont);

    fclose(arq);
}
