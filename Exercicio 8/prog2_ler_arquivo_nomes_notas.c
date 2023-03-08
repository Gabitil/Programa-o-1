/*Crie o programa prog2_ler_arquivo_nomes_notas.c para ler e apresentar na tela os dados gravados
no arquivo texto pelo programa anterior.*/

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
