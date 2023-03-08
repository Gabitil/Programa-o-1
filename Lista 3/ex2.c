#include <stdio.h>

int ler_inteiro(char *prompt){
    int n;
    printf("%s", prompt);
    scanf("%d", &n);
    return n;
}

int main()
{
    int num;

    num = ler_inteiro("Digite um numero: ");

    printf("O numero digitado foi: %d", num);

    return 0;
}
