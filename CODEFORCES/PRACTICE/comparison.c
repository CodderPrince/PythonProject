//comparison.c
//prince

#include<stdio.h>
#include<string.h>

int main()
{
    int a,b;
    char ch;
    scanf("%d %c %d",&a,&ch,&b);
    if(ch=='<')
    {
        if(a<b)
        {
            printf("Right\n");
        }
        else
        {
            printf("Wrong\n");
        }
    }
    if(ch=='>')
    {
        if(a>b)
        {
            printf("Right\n");
        }
        else
        {
            printf("Wrong\n");
        }
    }
    if(ch=='=')
    {
        if(a==b)
        {
            printf("Right\n");
        }
        else
        {
            printf("Wrong\n");
        }
    }

    return 0;
}