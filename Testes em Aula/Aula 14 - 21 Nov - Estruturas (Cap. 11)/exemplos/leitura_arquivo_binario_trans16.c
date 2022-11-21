//leitura de arquivos binários
#include <stdio.h>
#include <stdlib.h>
#define NUM_ELEMENTOS 10
int main (){
    FILE *arq;
    int i, v[NUM_ELEMENTOS];
    int result;
    //abre arquivo para leitura
    if ((arq = fopen("dados.bin", "rb")) == NULL) {
        printf("Erro ao abrir o arquivo\n");
        exit(1);
    }
    result = fread(v, sizeof(int), NUM_ELEMENTOS, arq);
    if (result!= NUM_ELEMENTOS)
        printf("Erro: forma lidos apenas %d elementos\n", result);
    else printf("Dados lidos com sucesso!\n");
    for (i=0; i<NUM_ELEMENTOS; i ++)
        printf("%d\n",v[i]);
    fclose(arq);
}
