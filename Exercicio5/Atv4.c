/*Crie uma função que permita calcular a média de cada disciplina. Nesse caso, a função deve receber
todo o vetor de disciplinas como parâmetro, bem como a quantidade de notas, e retornar a média.
Teste essa função, alterando o programa anterior para usá-la na obtenção da média para cada uma
das disciplinas. Gere o programa exer5_prog4.c.*/

#include <stdio.h>
#define M 60
#define N 2

int media(int a)
{
   

    if (a > 60)
    {
        printf("acima da media");
    }
    else if (a == 60)
    {
       printf("na media");
    }
    else printf("abaixo da media"); 
    
}


int main()
{
    int qn; 
    printf("programa para ler n notas de 2 materias:\n");

    printf("Digite a quantidade de notas a ser recebido: ");
    scanf("%d", &qn);

    int nota[M][N];

    for (int i = 0; i < qn; i++)
    {
       for (int j = 1; j <= N; j++)
       {
        
            if (j==1)
            {
                printf("\nDigite a nota do aluno %d de lab.pc1: ", i+1);
                scanf("%d", &nota[i][j]);
            }
            else if (j==2)
            {
                printf("\nDigite a nota do aluno %d de pc1: ", i+1);
                scanf("%d", &nota[i][j]);
            }
            
            

            while (nota[i][j] < 0 || nota[i][j] >100)
            {
                printf("\nDigite novamente o valor das notas: ");
                scanf("%d", &nota[i][j]);
            }
        

            if (j==1)
            {
                printf("\nO aluno %d esta com a nota de lab.pc1 ", i+1);
                media(nota[i][j]);
                printf(".\n");
            }
            else
            {
                printf("\nO aluno %d esta com a nota de pc1 ", i+1);
                media(nota[i][j]);
                printf(".\n");
            }

       }
       
    }
    

}
