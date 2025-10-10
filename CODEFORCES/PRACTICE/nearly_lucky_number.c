//nearly_lucky_number.c
#include<stdio.h>
#include<string.h>

int main()
{
    char str[100];
    fgets(str, sizeof(str), stdin);
    int i,count=0;
    for(i=0; i<strlen(str); i++)
    {
        if(str[i] =='4' || str[i] =='7')
        {
            count++;
        }
    }
    if(count==4 || count ==7)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }

    return 0;
}