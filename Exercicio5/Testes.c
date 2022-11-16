#include <stdio.h>

double fatorial (int n){
    if (n==0)
        return 1;
    else
        return (fatorial(n-1)*n);
}



int main()
{
    int num;
    
    scanf("%d", &num);

    printf("fatorial de %d e %f",num ,fatorial(num));
    return 0;
}
