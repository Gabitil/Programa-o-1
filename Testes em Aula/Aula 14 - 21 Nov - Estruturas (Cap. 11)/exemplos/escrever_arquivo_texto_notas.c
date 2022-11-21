//programa para ler e imprimir seus argumentos
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 20
int main(int argc, char *argv[] ) {
    int i, j;
    FILE *arq;

    int notas[MAX];
    printf("Quantidade de argumentos: %d.\n",argc);
    printf("\nNotas: ");
    for (i = 1, j=0; i<argc; i++, j++ ){ //carrega notas
         notas[j]=atoi(argv[i]);
         printf("%d, ",notas[j]);
    }

    char url[]="notas.txt"; //define nome do arquivo
    arq = fopen(url, "w"); //abrir o arq, a partir da memoria e avisar que vai ser escrito
    if(arq == NULL){// tester se arquivo criado
        printf("Erro, nao foi possivel abrir o arquivo\n");
	    exit(1);
    }
    for (i=0; i<argc-1; i++){
	   fprintf(arq,"%d\n",notas[i]);// onde está sendo escrito no arquivo
    }
    fclose(arq);// libera a memoria e fecha o arquivo

}
