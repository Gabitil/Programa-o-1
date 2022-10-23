/*Criar um programa para ler N notas de Lab. PC I e PC I. As notas devem ser de 0 a 100. Forneça N e a
notas pelo teclado. Use uma repetição para garantir que as notas são de 0 a 100. Ao final apresente
a média de cada disciplina. Gere o programa exer5_prog1.c.*/

#include <stdio.h>



int main()
{
    int num; 
    printf("programa para ler n notas de 2 materias:\n");

    printf("Digite a quantidade de notas a ser recebido: ");
    scanf("%d", &num);

    int nota1[num], nota2[num];

    for (int i = 0; i < num; i++)
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
