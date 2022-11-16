#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#define N 10

int main(int argc, char *argv[]) {
  int i,j;
  int notas[N];
  printf("Quantidade de argumentos: %d\n",argc);
  for (i = 1, j=0; i< argc; i++, j++){
    //printf("argumento %d: %s\n" ,i, argv[i]);
    notas[j]=atoi(argv[i]);
    printf("Notas[%d]: %d\n",j,notas[j]);
  }
}