/* Crie o programa prog1_notas.c, o qual deve receber, como argumentos da main, pares de nomes e
notas, por exemplo: Joao 10 Maria 20 Ana 15. Com esses valores, o programa deve carregar dois
vetores, um de nomes e outro de notas. O programa deve manter nomes e notas nas mesmas
posições respectivas dos vetores. Ou seja, se João está na posição 0 do vetor de nomes, a sua nota
no vetor de notas deve ser também a posição 0. Ao final, apresente, manipulando esses vetores, o
nome com a maior nota, assim como a própria maior nota. Considere que a quantidade máxima de
pares é 10. */

#include <stdio.h>
#include <stdlib.h>

#define N 10

int main(int argc, char const *argv[])
{

    char *nome[N];
    int notas[N];
    for (int i = 1; i< argc; i++ )
    {
        if (i%2==1)
            notas[i]=atoi(argv[i]);
        else
            nome[i]=atoi(argv[i]);
    }

    for (int i = 0; i < N; i++)
    {
        printf(" %s %d", nome[i], notas[i]);
    }
    

    return 0;
}
