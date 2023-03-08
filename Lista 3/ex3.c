#include <stdio.h>

void ler_inteiro(char *prompt, int *n){
    printf("%s", prompt);
    scanf("%d", n);
}

int main()
{
    int num;

    ler_inteiro("Digite um numero: ", &num);

    printf("O numero digitado foi: %d", num);

    return 0;
}
