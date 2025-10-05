//helpfulmaths.c
#include<stdio.h>
#include<string.h>

int main()
{
    char str[101];
    gets(str);
    int i,j;
    for(i=0; i<strlen(str); i+=2)
    {
        for(j=i+2; j<strlen(str); j+=2)
        {
            if(str[i] > str[j])
            {
                int temp;
                temp = str[i];
                str[i] = str[j];
                str[j] = temp;
            }
        }
    }

    printf("%s\n",str);

    return 0;
}