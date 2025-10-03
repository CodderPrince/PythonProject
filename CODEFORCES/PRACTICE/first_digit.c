//first_digit

#include<stdio.h>

int main()
{
    int n , f;
    scanf("%d",&n);
    f = n/1000;
    if(f%2==0)
    {
        printf("EVEN\n");
    }
    else
    {
        printf("ODD\n");
    }

    return 0;
}