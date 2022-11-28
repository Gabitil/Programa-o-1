/*Crie o prog2_escrever_arquivo_notas.c a partir do programa anterior para guardar os nomes e
notas em um arquivo de texto chamado notas.txt.*/

#include <stdio.h>
#include <stdlib.h>

#define N 10

FILE *arq;

int main(int argc, char const *argv[])
{

    char *nome[N];
    int notas[N];
    int j=0,k=0, mn=1;

    char url[]="notas.txt";
    arq = fopen(url,"w");
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

        if(notas[i]>notas[mn] && i+1 <= j)
            mn=i;

    }
    printf("quem tem a maior nota e o(a) %s, cujo o valor e %d", nome[mn], notas[mn]);

    fclose(arq);
}
