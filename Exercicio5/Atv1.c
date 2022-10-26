/*Criar um programa para ler N notas de Lab. PC I e PC I. As notas devem ser de 0 a 100. Forneça N e a
notas pelo teclado. Use uma repetição para garantir que as notas são de 0 a 100. Ao final apresente
a média de cada disciplina. Gere o programa exer5_prog1.c.*/

#include <stdio.h>
#define n 2


int main()
{
    int n; 
    printf("programa para ler n notas de de Lab. PC I e PC I:\n");

    int nota1[n], nota2[n];

    for (int i = 0; i < n; i++)
    {
        printf("\nDigite a nota n %d de lab.pc1 e pc1: ", i+1);
        scanf("%d %d", &nota1[i], &nota2[i]);

        while (nota1[i] < 0 || nota1[i] >100 || nota2[i] <0 || nota2[i] >100)
        {
            printf("\nDigite novamente o valor das notas: ");
            scanf("%d %d", &nota1[i], &nota2[i]);
        }
        
        
    }
    

}
