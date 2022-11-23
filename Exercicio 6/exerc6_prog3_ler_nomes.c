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
    
    for (int i = 0; i < M; i++)
    {
        printf("Digite um nome: ");
        gets(nomes[i]);

        tam[i]== strlen (nomes[i]);
    }
    
}
