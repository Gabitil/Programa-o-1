/*Criar um programa para ler N notas de Lab. PC I e PC I. As notas devem ser de 0 a 100. Forneça N e a
notas pelo teclado. Use uma repetição para garantir que as notas são de 0 a 100. Ao final apresente
a média de cada disciplina. Gere o programa exer5_prog1.c.*/

#include <stdio.h>
#define n 5 

int main()
{
 
    printf("programa para ler n notas de de Lab. PC I e PC I:\n");

    int nota1[n], nota2[n];
    int media1=0, media2=0;

    for (int i = 0; i < n; i++)
    {
        printf("\nDigite a nota n %d de lab.pc1 e pc1: ", i+1);
        scanf("%d %d", &nota1[i], &nota2[i]);

        while (nota1[i] < 0 || nota1[i] >100 || nota2[i] <0 || nota2[i] >100)
        {
            printf("\nDigite novamente o valor das notas: ");
            scanf("%d %d", &nota1[i], &nota2[i]);
        }
        
        media1 += nota1[i];
        media2 += nota2[i];
        
    }
    
    media1 = media1/n;
    media2 = media2/n;

    printf("\nA media da de lab.pc1 e: %d e a media de pc1 e: %d", media1, media2);

}
