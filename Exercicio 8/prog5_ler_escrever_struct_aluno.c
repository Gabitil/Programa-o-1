/*Agora, altere o programa anterior para incluir uma função de busca por um nome de aluno e que
retorne a nota. O vetor de nomes e notas deve ser passado por parâmetro para a função. Se o aluno
não for encontrado, a nota retornada deve ser -1. O programa deve ter essa opção de busca, quando
o usuário escolher ler um arquivo já existente. No caso da busca, imprimir o nome da busca e a nota
encontrada. A outra opção deve ser a de imprimir todos os dados e nomes, bem como nota a maior
nota e o nome da maior nota.*/

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

void busca_aluno(tipo_aluno aluno[N]){
    char nome_aluno[20];
    int i=0;
    printf("Digite o nome do aluno: ");
    scanf("%s",nome_aluno);
    for ( i = 0; i < N; i++)
    {
        if (strcmp(nome_aluno,aluno[i].nome)==0)
        {
            printf("A nota do(a) aluno(a) %s eh %d\n",aluno[i].nome,aluno[i].nota);
        }
    }
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
    printf("A maior nota eh %d do(a) aluno(a) %s\n",maior_nota,nome_maior_nota);
}

int main (){
    int opcao;
    tipo_aluno aluno[N];
    do
    {
        printf("Digite 1 para gravar um arquivo\n");
        printf("Digite 2 para ler um arquivo\n");
        printf("Digite 3 para buscar um aluno\n");
        printf("Digite 4 para imprimir a maior nota\n");
        printf("Digite 0 para sair\n");
        scanf("%d",&opcao);
        switch (opcao)
        {
        case 1:
            gravar_arquivo(aluno);
            break;
        case 2:
            ler_arquivo(aluno);
            break;
        case 3:
            busca_aluno(aluno);
            break;
        case 4:
            maior_nota(aluno);
            break;
        default:
            break;
        }
    } while (opcao!=0);
    
}
