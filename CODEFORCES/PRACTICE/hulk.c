//Hulk
#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int i;
    for(i=1; i<=n; i++)
    {
        if(i%2 == 0)
        {
            printf("I love ");
        }
        else
        {
            printf("I hate ");
        }
        if(i != n)
        {
            printf("that ");
        }
    }
    printf("it\n");

    return 0;
}    
