//word capitalization
#include<stdio.h>
#include<string.h>

int main()
{
    char str[1001];
    scanf("%s",str);
    if(str[0]>='a')
    {
        str[0] = str[0]-32;   
    }
    printf("%s\n",str);

    return 0;
}