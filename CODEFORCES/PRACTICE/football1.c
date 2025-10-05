//football
#include<stdio.h>
#include<string.h>

int main()
{
    char str[101];
    gets(str);
    int i,pos,zero,x;
    for(i=0; i<strlen(str); i++)
    {
        if(str[i] == '1')
        {
            pos++;
        }
        else
        {
            pos = 0;
        }
        if(str[i] == '0')
        {
            zero++;
        }
        else
        {
            zero = 0;
        }
        if(pos == 7 || zero == 7)
        {
            x++;
            printf("YES");
            break;
        }
    }
    
    if(x == 0)
    {
        printf("NO");
    }

    return 0;
}