/*Crie uma função que permita calcular a média de cada disciplina. Nesse caso, a função deve receber
todo o vetor de disciplinas como parâmetro, bem como a quantidade de notas, e retornar a média.
Teste essa função, alterando o programa anterior para usá-la na obtenção da média para cada uma
das disciplinas. Gere o programa exer5_prog4.c.*/

#include <stdio.h>
#define M 2
#define N 5

void media(int nt[M][N], int n, int m);

int main()
{
 
    printf("programa para ler n notas de de Lab. PC I e PC I:\n");

    int nota[M][N]; 

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
        
            if (j == 0)
            {
                printf("\nDigite a nota de lab.pc1 do aluno %d: ", i+1);
                scanf("%d", &nota[j][i]);

                while (nota[j][i] < 0 || nota[j][i] >100)
                {
                    printf("\nDigite novamente o valor da nota: ");
                    scanf("%d", &nota[j][i]);
                }

            }
            else
            {
                printf("\nDigite a nota de pc1 do aluno %d: ", i+1);
                scanf("%d", &nota[j][i]);

                while (nota[j][i] < 0 || nota[j][i] >100)
                {
                    printf("\nDigite novamente o valor da nota: ");
                    scanf("%d", &nota[j][i]);
                }

            }
        }      
    }
    
    media(nota, N, M);
        
}

void media(int nt[M][N], int n, int m)
{
    int med[M]={0,0};

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (j==0)
                med[j]+=nt[j][i];
            else
                med[j]+=nt[j][i];
        }
    }

    printf("\nA media da de lab.pc1 e: %d e a media de pc1 e: %d\n", med[0]/n, med[1]/n);

}