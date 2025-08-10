//Magnets
//prince

#include<stdio.h>
#include<string.h>

int main()
{
    int t;
    scanf("%d",&t);
    char str[t];
    int i,count=0;
    for(i=0; i<t; i++)
    {
        scanf("%s",&str[i]);
    }
    for(i=0; i<t; i++)
    {
        if(str[i] != str[i+1])
        {
            count++;
        }
    }
    printf("%d\n",count);

    return 0;
}