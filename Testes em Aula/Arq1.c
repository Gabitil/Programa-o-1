//programa para mudar a variavel de escopo do if dentro do if para ver se continua funcionando e faz mais duas operações

#include <stdio.h>

int main(){
    int a = 10, b = 20, c = 30;

    if (a == 10)
    {
        scanf("%d", &a);

        int soma = c + b;
        printf("Soma: %d\n", soma);
    }
    

}