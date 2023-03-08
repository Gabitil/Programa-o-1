/*Implemette as seguintes funçôes que manipulam valores inteiros:
iszero — Verifica se o parametro n é zero.
addi — Adiciona 1 ao próprio n.
zero - colocazero no parametro n */

#include <stdio.h>

int iszero(int n){  
    if(n==0)  
        return 1;  
    else  
        return 0;  
}

int addone(int n){  
    return n+1;  
}

int putzero(int n){  
    return 0;  
}

int main(){  
    int n;  
    printf("Digite um numero: ");  
    scanf("%d", &n);  
    if(iszero(n))  
        printf("O numero eh zero.");  
    else  
        printf("O numero nao eh zero.");  
    printf("\nAdicionando 1 ao numero: %d", addone(n));  
    printf("\nColocando zero no numero: %d", putzero(n));  
    return 0;  
}