/*Ao invés de usar dois vetores separados, altere o programa anterior para que seja usada uma matriz
de duas linhas, uma para cada disciplina, e M colunas, no máximo, sendo n<M. Cada linha da matriz,
armazena as notas de uma disciplina e cada coluna armazena uma nota específica de uma disciplina.
Gere o programa exer5_prog3.c.*/

#include <stdio.h>
#define M 60

int media(int a)
{
   

    if (a > M)
    {
        printf("acima da media");
    }
    else if (a == M)
    {
       printf("na media");
    }
    else printf("abaixo da media"); 
    
}


int main()
{
    int num; 
    printf("programa para ler n notas de 2 materias:\n");

    printf("Digite a quantidade de notas a ser recebido: ");
    scanf("%d", &num);

    int nota1[num][2], nota2[num][2];
   

    for (int i = 0; i < num; i++)
    {
        

        printf("\nDigite a nota do aluno %d de lab.pc1 e pc1: ", i+1);
        scanf("%d %d", &nota1[i], &nota2[i]);

        while (nota1[i] < 0 || nota1[i] >100 || nota2[i] <0 || nota2[i] >100)
        {
            printf("\nDigite novamente o valor das notas: ");
            scanf("%d %d", &nota1[i], &nota2[i]);
        }
        
        printf("\nO aluno %d esta com a nota de lab.pc1 ", i+1);
        media(nota1[i]);
        printf(" e com a nota de pc1 ");
        media(nota2[i]);
        printf(".\n");
        
    }
    

}
