#include <stdio.h>
#include <time.h>


int fib(int n){
    if(n==0 || n==1)
        return n;
    else
        return fib(n-1) + fib(n-2);
}


void main()
{
    int n;
    float tempogastosegundos;
    clock_t tempoInicial, tempoFinal;
    
    
    printf("Digite o numero de operacoes: ");
    scanf("%d", &n);
    tempoInicial = clock();
    printf("O o fib(%d) foi: %d ",n, fib(n));
    tempoFinal = clock();

    tempogastosegundos = (tempoFinal - tempoInicial) / (float)CLOCKS_PER_SEC;
    printf("\nTempo gasto: %.3f segundos", tempogastosegundos);
}