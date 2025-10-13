#include<stdio.h>
#include<string.h>

int main()
{
    char str[101];
    gets(str);
    int i,count=0;
    for(i=0; i<strlen(str); i++)
    {
        if((str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u') && (str[i+2]=='a' || str[i+2]=='e' || str[i+2]=='i' || str[i+2]=='o' || str[i+2]=='u'))
        {
            count++;
        }
    }
    if(count)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
}