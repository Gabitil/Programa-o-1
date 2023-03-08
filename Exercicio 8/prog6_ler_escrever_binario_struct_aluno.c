/*altere o programa anterior para que, ao invés de se usar um arquivo texto, se use um
arquivo binário.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define N 10

typedef struct struct_aluno{
char nome[20];
int nota;
} tipo_aluno;

void ler_arquivo(tipo_aluno aluno[N]){
    char url[]="notas.bin";
    int nota[N];
    int result;
    int i=0;
    char nome[N][50];
    FILE *arq;
    arq = fopen(url, "rb");
    if(arq == NULL)
        printf("Erro, nao foi possivel abrir o arquivo\n");
    else
        while (!feof(arq))
        {
           for ( i = 0; i < N; i++)
           {
                result= fread(&aluno[i],sizeof(tipo_aluno),1,arq);
                if (result && !feof(arq))
                     printf("%s - %d",aluno[i].nome,aluno[i].nota);
                     if(!feof(arq))
                          printf("\n");
           }
           
        }
    fclose(arq);

}

void gravar_arquivo(tipo_aluno aluno[N]){
    char url[]="notas.bin";
    int nota[N];
    int result;
    int i=0;
    char nome[N][50];
    FILE *arq;
    arq = fopen(url, "wb");
    if(arq == NULL)
        printf("Erro, nao foi possivel abrir o arquivo\n");
    else
        for ( i = 0; i < N; i++)
        {
            printf("Digite o nome do aluno: ");
            scanf("%s",aluno[i].nome);
            printf("Digite a nota do aluno: ");
            scanf("%d",&aluno[i].nota);
            fwrite(&aluno[i],sizeof(tipo_aluno),1,arq);
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
