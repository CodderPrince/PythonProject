//ultra_fast_math.c
//prince

#include<stdio.h>
#include<string.h>

int main()
{
    char s1 [1001];
    char s2 [1001];
    gets(s1);
    gets(s2);
    int i, array[strlen(s1)];
    for(i=0; i<strlen(s1); i++)
    {
        if(s1[i]==s2[i])
        {
            array[i]=0;
        }
        else
        {
            array[i]=1;
        }
    }
    for(i=0; i<strlen(s1); i++)
    {
        printf("%d",array[i]);
    }
    printf("\n");

    return 0;
}