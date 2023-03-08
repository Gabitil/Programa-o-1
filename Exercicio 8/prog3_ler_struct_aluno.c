/*Crie um programa para ler e apresentar na tela os dados gravados no arquivo texto pelo programa anterior.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define N 10

typedef struct struct_aluno{
char nome[20];
int nota;
} tipo_aluno;


int main (){
    char url[]="notas.txt";
    int nota[N];
    int result;
    int i=0;
    char nome[N][50];
    tipo_aluno aluno[N];
    FILE *arq;
    arq = fopen(url, "r");
    if(arq == NULL)
        printf("Erro, nao foi possivel abrir o arquivo\n");
    else
        while (!feof(arq))
        {
           for ( i = 0; i < N; i++)
           {
                result= fscanf(arq,"%s %d",aluno[i].nome, &aluno[i].nota);
                if (result && !feof(arq))
                     printf("%s - %d",aluno[i].nome,aluno[i].nota);
                     if(!feof(arq))
                          printf("\n");
           }
           
        }
    fclose(arq);
}
