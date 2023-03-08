//implemente a função strcat que concatena duas strings de forma recursiva.

#include <stdio.h>

void concatena(char *s1, char *s2, char *s3){
    if(*s1 != '\0'){
        *s3 = *s1;
        s3++;
        s1++;
        concatena(s1, s2, s3);
    }
    else{
        while(*s2 != '\0'){
            *s3 = *s2;
            s3++;
            s2++;
        }
        *s3 = '\0';
    }
}

int main(){
    char s1[100], s2[100], resultado[200];
    printf("Digite a primeira string: ");
    gets(s1);
    printf("Digite a segunda string: ");
    gets(s2);
    concatena(s1, s2, resultado);
    printf("A string concatenada eh: %s", resultado);
    return 0;
}