//floar_or_integer.c
//prince

#include<stdio.h>

int main()
{
    double n;
    scanf("%lf",&n);
    int integer;
    if(n == (int)n)
    {
        printf("int %d\n",(int)n);
    }
    else
    {
        integer = (int)n;
        double dec = n - integer;
        if(dec==0.0)
        {
            printf("int %d\n",integer);
        }
        else
        {
            printf("float %d %.3f\n",integer, dec);
        }
    }

    return 0;
}
