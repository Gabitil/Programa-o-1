#include <stdio.h>

#define MAX 20
int main(void)
{
    char url[]="notas.txt";
    int notas[MAX];
    int  result;
    FILE *arq;
    char  valor[MAX];
    arq = fopen(url, "r");
    if(arq == NULL)
        printf("Erro, nao foi possivel abrir o arquivo\n");
    else
        while (!feof(arq))
        {
            strcpy(valor,"");
            result= fscanf(arq,"%s",valor);
            if (result)  // Se foi possível ler
                printf("%s",valor);
                if(!feof(arq))
                    printf("\n");
       }
    fclose(arq);
}
