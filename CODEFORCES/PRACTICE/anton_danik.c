//anton_danik.c
#include<stdio.h>
#include<string.h>

int main()
{
    int n;
    scanf("%d",&n);
    char str[n];
    getchar();
    gets(str);
    int i, a=0,d=0;
    for(i=0; i<strlen(str); i++)
    {
        if(str[i] == 'A')
        {
            a++;
        }
        else if(str[i] == 'D')
        {
            d++;
        }
    }
    if(a>d)
    {
        printf("Anton\n");
    }
    else if(a<d)
    {
        printf("Danik\n");
    }
    else if(a == d)
    {
        printf("Friendship\n");
    }

    return 0;
}