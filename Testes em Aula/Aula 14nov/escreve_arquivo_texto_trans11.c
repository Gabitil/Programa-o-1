//
//  exemplo_arquivo_texto_trans11.c
//  
//
//  Created by Evandrino Gomes Barros on 12/11/19.
//
//demostra operações em arquivos
//abre um arquivo para leitura
//cria um arquivo novo
//faz cópia do arquivo lido

#include <stdio.h>

int main (){
    char ch;
    FILE *arq1; //origem ou fonte 
    FILE *arq2; //destino ou copia 
    char *fonte="teste.c";  //input
    char *destino= "copia.c";  //output
    arq1 = fopen (fonte, "r" );
    if ( arq1 == NULL )
        printf ("O arquivo %s nao pode ser aberto\n", fonte);

    arq2 = fopen (destino, "w" );
    if ( arq2 == NULL )
        printf ("O arquivo %s nao pode ser aberto\n", destino);

    //continua aqui
    ch = fgetc(arq1);
    while (!feof (arq1)) {
        fputc(ch, arq2);
        ch = fgetc(arq1);
    }
    fclose(arq1);
    fclose(arq2);
}//fim main
