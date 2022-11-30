#include <stdio.h>
#include <string.h>//necessário para strtok;
int main (void)
{
  
  char texto1[50]="Fulano de Tal,Rua X.123,Centro,Cidade Y";
  char *t;
  
  t = strtok(texto1," ");
  
  while(texto1 != NULL)
  {
    printf("%s\n",t);
 
  }
        
  system("pause");  //pausa na tela, somente para Windows
  return(0);
}