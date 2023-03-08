/*Junte os dois programas anteriores em um só, no qual o usuário deve ser perguntado se quer ler um
arquivo já existente, imprimindo seus dados, bem como o nome da maior nota e o nome, ou se quer
entrar com nomes e notas para serem gravados em um arquivo do tipo texto. O nome do programa
prog4_ler_escrever_struct_aluno.c*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define N 10

typedef struct struct_aluno{
char nome[20];
int nota;
} tipo_aluno;

void ler_arquivo(tipo_aluno aluno[N]){
    char url[]="notas.txt";
    int nota[N];
    int result;
    int i=0;
    char nome[N][50];
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

void gravar_arquivo(tipo_aluno aluno[N]){
    char url[]="notas.txt";
    int nota[N];
    int result;
    int i=0;
    char nome[N][50];
    FILE *arq;
    arq = fopen(url, "w");
    if(arq == NULL)
        printf("Erro, nao foi possivel abrir o arquivo\n");
    else
        for ( i = 0; i < N; i++)
        {
            printf("Digite o nome do aluno: ");
            scanf("%s",aluno[i].nome);
            printf("Digite a nota do aluno: ");
            scanf("%d",&aluno[i].nota);
            fprintf(arq,"%s %d\n",aluno[i].nome,aluno[i].nota);
        }
    fclose(arq);
}

void maior_nota(tipo_aluno aluno[N]){
    int i=0;
    int maior_nota=0;
    char nome_maior_nota[20];
    for ( i = 0; i < N; i++)
    {
        if (aluno[i].nota>maior_nota)
        {
            maior_nota=aluno[i].nota;
            strcpy(nome_maior_nota,aluno[i].nome);
        }
    }
    printf("A maior nota eh %d do(a) aluno(a) %s",maior_nota,nome_maior_nota);
}

int main (){
    int opcao;
    tipo_aluno aluno[N];
    printf("Digite 1 para ler um arquivo ja existente, imprimindo seus dados, bem como a maior nota e o nome.\nDigite 2 para entrar com nomes e notas para serem gravados em um arquivo do tipo texto: ");
    scanf("%d",&opcao);
    if (opcao==1)
    {
        ler_arquivo(aluno);
        maior_nota(aluno);
    }
    else if (opcao==2)
    {
        gravar_arquivo(aluno);
    }
    else
    {
        printf("Opção inválida");
    }
    
}
