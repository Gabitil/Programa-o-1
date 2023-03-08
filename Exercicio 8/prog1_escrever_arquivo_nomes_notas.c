/*Crie o programa progl_escrever_arquivo_nomes_notas.c, o qual deve receber pelo teclado pares de
nomes e notas. Nomes e notas devem ser armazenados em vetores separados e depois gravados em
um arquivo texto. O programa também deve apresentar a maior nota e o(s) nome(s) dos alunos
dessas notas.*/

#include <stdio.h>
#include <stdlib.h>

#define N 10

FILE *arq;

int main (){
    char url[]="notas.txt";
    int nota[N];
    int maior=0;
    int i=0;
    char nome[N][50];
    arq = fopen(url, "w");
    if(arq == NULL)
        printf("Erro, nao foi possivel abrir o arquivo\n");
    else
        while (i<N)
        {
            printf("Digite o nome do aluno %d: ",i+1);
            scanf("%s",nome[i]);
            printf("Digite a nota do aluno %d: ",i+1);
            scanf("%d",&nota[i]);
            fprintf(arq,"%s %d\n",nome[i],nota[i]);
            if (nota[i]>maior)
                maior=nota[i];
            i++;
        }
    fclose(arq);
    printf("Maior nota: %d - Aluno: ",maior);
    for (int i = 0; i < N; i++)
    {
        if (nota[i]==maior)
            printf("%s ",nome[i]);
    }
}
