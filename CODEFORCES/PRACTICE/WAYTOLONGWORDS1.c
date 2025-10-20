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
        int l= strlen(str);
        if((l-1)>=10)
        {
            printf("%c%d%c\n",str[0],l-2,str[l-1]);
            /*str[l-1] bolte shesher dik diker last word
            print hobe l-2 korle last er agerta print hobe
            l-3 korle shesher 3 numberta print hobe*/
        }
        else
        {
            printf("%s\n",str);
        }
    }
    return 0;
}