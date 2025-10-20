#include<stdio.h>
#include<string.h>

int main()
{
    int t;
    scanf("%d",&t);
    getchar();
    while(t--)
    {
        char str[101];
        gets(str);
        if((strlen(str)-1)>=10)
        {
            printf("%c%d%c\n",str[0],strlen(str)-2,str[strlen(str)-1]);
        }
        /* str[0] first character str[strlen(str)-1]-1 bolte last er null charater bad diye last character print
        strlen(str)-2 bolte bojhai last er null character and last character bad diye shes theke first character
        er aag porjonto count korbe and setar integer number ta print korbe*/

        else
        {
            printf("%s\n",str);
        }
    }

    return 0;
}