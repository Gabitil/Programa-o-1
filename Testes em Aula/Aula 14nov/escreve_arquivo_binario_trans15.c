#include <stdio.h>
#include <stdlib.h>
#define NUM_ELEMENTOS 10
int main (){
  FILE *arq;
  int i, v[NUM_ELEMENTOS];
  int result;

  printf("Digite %d valores inteiros\n", NUM_ELEMENTOS);
  for (i=0; i<NUM_ELEMENTOS; i ++)
    scanf("%d", &v[i]);

  //abre arquivo para escrita
  if ((arq = fopen("dados.bin", "wb")) == NULL) {
    printf("Erro ao criar o arquivo\n");
    exit(1);
  }
  result = fwrite(v, sizeof(int), NUM_ELEMENTOS, arq);
  if (result!= NUM_ELEMENTOS)
    printf("Erro: foram escritos %d elementos\n", result);
  else 
    printf("Dados escritos com sucesso!\n");
  fclose(arq);
}
