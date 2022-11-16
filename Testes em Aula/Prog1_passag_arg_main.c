#include <stdio.h>

int main(int argc, char *argv[]) {
  int i;
  printf("Quantidade de argumentos: %d\n",argc);
  for (i = 0; i< argc; i++ )
    printf("argumento %d: %s\n" ,i, argv[i]);
}