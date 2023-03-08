

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct struct_nota{ // nome da estrutura: struct_nota
char aluno[20]; //nome do aluno
float aval1; //nota da primeira avaliação
float aval2; //nota da segunda avaliação
float aval3; //nota da terceira avaliação
float exerc; //nota dos exercícios
} tipo_nota; //nome do tipo: tipo_nota



void incluir(tipo_nota notas_pc1[40]){
    int i;
    for(i=0; i<40; i++){
        if(notas_pc1[i].aluno[0] == '\0'){
            printf("Digite o nome do aluno: ");
            scanf("%[^\n]", notas_pc1[i].aluno);
            printf("Digite a nota da primeira avaliacao: ");
            scanf("%f", &notas_pc1[i].aval1);
            printf("\nDigite a nota da segunda avaliacao: ");
            scanf("%f", &notas_pc1[i].aval2);
            printf("\nDigite a nota da terceira avaliacao: ");
            scanf("%f", &notas_pc1[i].aval3);
            printf("\nDigite a nota dos exercicios: ");
            scanf("%f", &notas_pc1[i].exerc);
            break;
        }
    }
}

//soma as notas de um aluno

float soma(tipo_nota notas_pc1[40], int i){
    float soma;
    soma = notas_pc1[i].aval1 + notas_pc1[i].aval2 + notas_pc1[i].aval3 + notas_pc1[i].exerc;
    return soma;
}

//calcula a media das notas da turma

float media(tipo_nota notas_pc1[40], int n){
    int i;
    float soma = 0;
    for(i=0; i<n; i++){
        soma = soma + notas_pc1[i].aval1 + notas_pc1[i].aval2 + notas_pc1[i].aval3 + notas_pc1[i].exerc;
    }
    return soma/n;
}

//o aluno tirou mais de 60?

int aprovado(tipo_nota notas_pc1[40], int i){
    if(soma(notas_pc1, i) >= 60){
        return 1;
    }
    else{
        return 0;
    }
}


//Exibir as notas de um registro, o qual deve ser retornado por uma função de busca, cujos parâmetros são o vetor e o nome a ser pesquisado.

void exibir(tipo_nota notas_pc1[40], int n){
    int i;
    char nome[20];
    printf("Digite o nome do aluno: ");
    scanf("%s", nome);
    for(i=0; i<n; i++){
        if(strcmp(notas_pc1[i].aluno, nome) == 0){
            printf("Nome: %s \t Nota 1: %.2f \t Nota 2: %.2f \t Nota 3: %.2f \t Nota Exercicios: %.2f \t Media: %.2f \t Soma: %.2f \t ", notas_pc1[i].aluno, notas_pc1[i].aval1, notas_pc1[i].aval2, notas_pc1[i].aval3, notas_pc1[i].exerc, (soma(notas_pc1, i)/4), soma(notas_pc1, i));
            break;
        }
    }
}


void alterar(tipo_nota notas_pc1[40], int n){
    int i;
    char nome[20];
    printf("Digite o nome do aluno: ");
    scanf("%s", nome);
    for(i=0; i<n; i++){
        if(strcmp(notas_pc1[i].aluno, nome) == 0){
            printf("Digite a nota da primeira avaliacao: ");
            scanf("%f", &notas_pc1[i].aval1);
            printf("Digite a nota da segunda avaliacao: ");
            scanf("%f", &notas_pc1[i].aval2);
            printf("Digite a nota da terceira avaliacao: ");
            scanf("%f", &notas_pc1[i].aval3);
            printf("Digite a nota dos exercicios: ");
            scanf("%f", &notas_pc1[i].exerc);
            break;
        }
    }
}


void gravar(tipo_nota notas_pc1[40], int n){
    FILE *arq;
    int i;
    char nome[20];
    printf("Digite o nome do arquivo: ");
    scanf("%s", nome);
    arq = fopen(nome, "wb");
    for(i=0; i<n; i++){
        fwrite(&notas_pc1[i], sizeof(tipo_nota), 1, arq);
    }
    fclose(arq);
}


void ler(tipo_nota notas_pc1[40], int *n){
    FILE *arq;
    int i;
    char nome[20];
    printf("Digite o nome do arquivo: ");
    scanf("%s", nome);
    arq = fopen(nome, "rb");
    if(arq == NULL){
        printf("Erro ao abrir o arquivo");
    }
    else{
        while(fread(&notas_pc1[*n], sizeof(tipo_nota), 1, arq) == 1){
            *n = *n + 1;
        }
    }
    fclose(arq);
}


void exibir_tudo(tipo_nota notas_pc1[40], int n){
    int i;
    for(i=0; i<n; i++){
        printf("Nome: %s \t Nota 1: %.2f \t Nota 2: %.2f \t Nota 3: %.2f \t Nota Exercicios: %.2f \t Media: %.2f \t Soma: %.2f \t ", notas_pc1[i].aluno, notas_pc1[i].aval1, notas_pc1[i].aval2, notas_pc1[i].aval3, notas_pc1[i].exerc, (soma(notas_pc1, i)/4), soma(notas_pc1, i));
        if(aprovado(notas_pc1, i) == 1){
            printf("Aprovado");
        }
        else{
            printf("Reprovado");
        }
        printf("\n");
    }
    printf("Media da turma: %.2f", media(notas_pc1, n));
}

//menu de opções do programa principal

void menu(){
    printf("programa de notas \n");
    printf("1 - Incluir aluno \n2 - Exibir aluno \n3 - Alterar aluno \n4 - Gravar arquivo \n5 - Ler arquivo \n6 - Exibir todos os alunos \n0 - Sair \n");
    printf("Escolha uma opcao: ");
}


int main(){
    int opcao, n=0;
    tipo_nota notas_pc1[40];
    do{
        menu();
        scanf("%d", &opcao);
        switch(opcao){
            case 1:
                incluir(notas_pc1);
                break;
            case 2:
                exibir(notas_pc1, n);
                break;
            case 3:
                alterar(notas_pc1, n);
                break;
            case 4:
                gravar(notas_pc1, n);
                break;
            case 5:
                ler(notas_pc1, &n);
                break;
            case 6:
                exibir_tudo(notas_pc1, n);
                break;
            case 0:
                printf("Saindo...");
                break;
            default:
                printf("Opcao invalida");
                break;
        }
    }while(opcao != 0);
    return 0;
}

