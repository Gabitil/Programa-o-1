/*Construa um programa em C para preencher um vetor de M strings de tamanho N cada. Ou seja, é
uma matriz de caracteres MxN. O vetor deve conter nomes completos de pessoas. M e N são
constantes definidas na diretiva #define, antes do programa. Todos os nomes devem ser lidos pelo
teclado e podem conter espaços em branco separando suas palavras. Após ler os nomes, imprima
todos eles e informe qual é tamanho de cada um. Após ler os nomes, imprima todos eles e informe
qual tem maior tamanho. Também diga qual é o último nome, considerando a ordenação alfabética.
Use as funções gets, strlen e strcmp, todas da string.h. Nomeie o programa com
exerc6_prog3_ler_nomes.c*/

#include <stdio.h>
#include <string.h>

#define M 3
#define N 25

int main()
{
    char nomes[M][N];
    int tam[M];
    int pos;
    char ultimo[N];
    
    for (int i = 0; i < M; i++)
    {
        printf("Digite um nome: ");
        gets(nomes[i]);

        tam[i]= strlen (nomes[i]);

        if (i>0)
        {
            if (strcmp(nomes[i],nomes[i-1])>0)
                strcpy(ultimo,nomes[i]);
            else
                strcpy(ultimo,nomes[i-1]);
            
        }


        printf("O nome digitado foi %s e a quantidade de caracteres do nome e: %d\n", nomes[i], tam[i]);    
    }
        

    printf("O ultimo nome em ordem alfabetica e: ");
    puts(ultimo);
    printf("O nome maior é %s", nomes[pos]);
}
