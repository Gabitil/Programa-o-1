/*Um palíndromo é uma sequência de letras que pode ser lida igualmente do início para o fim e vice-versa. Exemplos: "A cara rajada da jararaca" e
"Anotaram a data da maratona". Escreva uma função, em C, que retorna 1 se uma string, recebida como parâmetro, é um palíndromo e 0, caso
contrário. Desconsidere brancos, ou seja, não forneça brancos na entrada pelo teclado. Se uma mesma letra for comparada com a sua maiúscula e
com a sua minúscula, ou vice-versa, considere que o resultado dessa comparação é de igualdade. Compile e teste o programa na função main, a qual
deve receber pelo teclado a string que será passada como argumento para a função. No formulário abaixo, apresente a explicação do funcionamento
da função. Na tela de execução, devem se apresentados a string informada e o resultado, ou seja, se é ou não palíndromo. Faça o upload do código e
das telas de compilação e de execução, todos reunidos em um único PDF por questão.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define Q 50


int verifica_pal(char *recebe)
{

    int tamanhostr= strlen(recebe);

    char inverso[tamanhostr];

    for (int i = 0; i < tamanhostr; i++)
    {
        inverso[i]=recebe[tamanhostr-i-1];
    }
    

    return strcmp (inverso, recebe);

    

}
int main()
{
    char letras[Q];

    printf("Digite uma frase\n");
    gets(letras);


    if (verifica_pal(&letras) != 0)
        printf("As letras %s nao sao palindromo", letras);    
    else
        printf("As letras %s sao palindromo", letras);
}
