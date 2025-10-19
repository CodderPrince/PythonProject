//translation
#include<stdio.h>
#include<string.h>

int main()
{
    char s[101],p[101];
    gets(s);
    gets(p);
   
    if(strcmp(s,strrev(p)) == 0)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }

    return 0;
}