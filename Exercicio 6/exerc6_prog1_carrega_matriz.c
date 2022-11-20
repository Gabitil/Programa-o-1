/*Construa um programa em C para preencher uma matriz MxN de inteiros a partir da função rand()
que gera números aleatórios. M e N são constantes previamente definidas antes do programa com a
diretiva #define. Os números aleatórios devem ser entre 1 e 100. Após preencher a matriz, apresente
o seu conteúdo na tela no formato de matriz. Sempre gere números diferentes a cada execução. Para
isso, use, antes da rand, a função srand(), ambas da biblioteca stdlib.h. Para usar a função time(),
utilize a biblioteca time.h. Usar como referência a Aula6, slides 22 a 25. Nomeie o programa com
exerc6_prog1_carrega_matriz.c*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>



#define M 3
#define N 5

int main()
{
    int num[M][N];
    srand( time(NULL));

    for (int i = 0; i < M; i++)
    {
        for (int j = 0; j < N; j++)
        {
            num[i][j]=rand()%100;

            printf("%d ", num[i][j]);
        }

        printf("\n");
        
    }
    
}
