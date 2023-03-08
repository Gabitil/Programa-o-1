/**Crie um programa o qual deve receber pelo teclado pares de nomes e notas. Nomes e notas devem ser armazenados em vetores separados e depois gravados em
um arquivo texto. O programa também deve apresentar a maior nota e o(s) nome(s) dos alunos dessas notas.*/

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
    int maior=0;
    int i=0;
    char nome[N][50];
    tipo_aluno aluno[N];
    FILE *arq;
    arq = fopen(url, "w");
    if(arq == NULL)
        printf("Erro, nao foi possivel abrir o arquivo\n");
    else
        while (i<N)
        {
            printf("Digite o nome do aluno %d: ",i+1);
            scanf("%s",aluno[i].nome);
            printf("Digite a nota do aluno %d: ",i+1);
            scanf("%d",&aluno[i].nota);
            fprintf(arq,"%s %d\n",aluno[i].nome,aluno[i].nota);
            if (aluno[i].nota>maior)
                maior=aluno[i].nota;
            i++;
        }
    fclose(arq);
    printf("Maior nota: %d - Aluno: ",maior);
    for (int i = 0; i < N; i++)
    {
        if (aluno[i].nota==maior)
            printf("%s ",aluno[i].nome);
    }
}
