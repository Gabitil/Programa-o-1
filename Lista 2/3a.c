#include <stdio.h>

float Pot (float x, int n)
{
    float res=1;

    for (float i = 0; i < n; i++)
    {
        res=x*res;
    
    }
    return res;
}


float VAL (float x, int n, float t)
{
    float res=0;

    for (int i = 0; i < n; i++)
    {
        res=(x/Pot((1+t), (i+1))+res);
    }
    printf("%f", res);
    
}

int main()
{
    VAL(1000, 2, 0.1);
    return 0;
}
