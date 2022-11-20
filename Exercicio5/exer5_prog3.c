/*Com o programa anterior, é possível dizer quais notas são iguais ou maiores que a média? Altere o
programa para que isso aconteça. Que estrutura de dados deve ser usada nesse caso?
Dica: usar 2 vetores de no máximo M posições, sendo n<M. Cada vetor armazena as notas de uma
disciplina na posição i, que vai de 0 a n-1, sendo n a quantidade de notas de cada disciplina. Declare
M como constante, a qual deve ser declarada com a diretiva de compilação #define, portanto antes
da main. Gere o programa exer5_prog2.c.*/

#include <stdio.h>
#define M 2
#define N 5

int main()
{
 
    printf("programa para ler n notas de de Lab. PC I e PC I:\n");

    int nota[M][N]; 
    int media1=0, media2=0;

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

                media1 += nota[j][i];
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

                media2 += nota[j][i];
            }
        }      
    }
    
    media1 = media1/N;
    media2 = media2/N;

    printf("\nA media da de lab.pc1 e: %d e a media de pc1 e: %d\n", media1, media2);

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            if (j==0)
            {
                if (nota[j][i]>media1)
                {
                    printf("\nA nota de lab.pc1 do aluno %d foi maior que a media\n", i+1);
                }
                else if (nota[j][i]<media1)
                {
                    printf("\nA nota de lab.pc1 do aluno %d foi menor que a media\n", i+1);
                }
                else
                {
                    printf("\nA nota de lab.pc1 do aluno %d foi igual a media\n", i+1);
                }
                
            }

            else
            {
                if (nota[j][i]>media1)
                {
                    printf("\nA nota de pc1 do aluno %d foi maior que a media\n", i+1);
                }
                else if (nota[j][i]<media1)
                {
                    printf("\nA nota de pc1 do aluno %d foi menor que a media\n", i+1);
                }
                else
                {
                    printf("\nA nota de pc1 do aluno %d foi igual a media\n", i+1);
                }
                
            }
            
        }
        
    }
    
}
