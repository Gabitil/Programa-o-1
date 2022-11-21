#include <stdio.h>
int main() {

   typedef struct Pessoa {
      int  idade;
      char sexo;
      char nome[100];
      float salario;
   } TIPO_PESSOA;

   struct Pessoa Pessoa1 = {20,'F',"Maria",1000.00};

   printf("Idade: %d\n",     Pessoa1.idade);
   printf("Sexo: %c\n",      Pessoa1.sexo);
   printf("Nome: %s\n",      Pessoa1.nome);
   printf("Salario: %.2f\n", Pessoa1.salario);

   TIPO_PESSOA Pessoa2 = {30,'M',"Antonio",1000.00};

   printf("Idade: %d\n",    Pessoa2.idade);
   printf("Sexo: %c\n",     Pessoa2.sexo);
   printf("Nome: %s\n",     Pessoa2.nome);
   printf("Salario: %.2f\n",Pessoa2.salario);


   TIPO_PESSOA vetor_pessoas[2];
   vetor_pessoas[0]=Pessoa1;
   vetor_pessoas[1]=Pessoa2;

   printf("Idade: %d\n",    vetor_pessoas[0].idade);
   printf("Sexo: %c\n",     vetor_pessoas[0].sexo);
   printf("Nome: %s\n",     vetor_pessoas[0].nome);
   printf("Salario: %.2f\n",vetor_pessoas[0].salario);

   printf("Idade: %d\n",vetor_pessoas[1].idade);
   printf("Sexo: %c\n",vetor_pessoas[1].sexo);
   printf("Nome: %s\n",vetor_pessoas[1].nome);
   printf("Salario: %.2f\n",vetor_pessoas[1].salario);


// Exercício:
// 1) A partir desse exemplo, de struct com dados de pessoas,
// crie um programa que leia os dados pelo teclado para 3 pessoas e
// que os armazene em um vetor. Ao final, crie um arquivo binário
// para guardar todos os dados lidos, ou seja, os dados no vetor.
// 2) Agora, crie um programa que leia os dados gravados no arquivo binário,
// gerado pelo programa, e que os imprima na tela.

}
