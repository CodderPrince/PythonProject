/*
Author: PRINCE
VARSITY: BRUR
DEPARTMENT: CSE
*/

#include<stdio.h>
#include<string.h>
int main()
{
    int t;
    scanf("%d",&t);
    getchar();
    while(t--)
    {
        int i,count=0;
        char str[1001];
        char s[]="codeforces";
        gets(str);
        for(i=0; i<10; i++)
        {
            if(str[i]!=s[i])
            {
                count++;
            }
        }
        printf("%d\n",count);
    }
    return 0;
}