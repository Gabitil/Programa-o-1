#include <stdio.h>

int main(void)
{
    char url[]="notas.txt";
    int nota;
    int  result;
    FILE *arq;
    char texto[50];
    arq = fopen(url, "r");
    if(arq == NULL)
        printf("Erro, nao foi possivel abrir o arquivo\n");
    else
        while (!feof(arq))
        {
            result= fscanf(arq,"%s %d",texto, &nota);
            if (result)  // Se foi possível ler
                printf("%s - %d\n",texto,nota);
       }
    fclose(arq);
}
