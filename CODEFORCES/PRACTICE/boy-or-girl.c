//Boy or Girl
//prince

#include<stdio.h>
#include<string.h>

int main()
{
    char str[101];
    scanf("%s",str);
    int len = strlen(str);
    int i,count[26]={0};
    for(i=0; i<len; i++)
    {
        if(str[i]>='a' && str[i]<='z')
        count[str[i]-'a']=1;
    }
    int distinct=0;
    for(i=0; i<26; i++)
    {
        if(count[i]==1)
        {
            distinct++;
        }
    }
    if(distinct%2==0)
    {
        printf("CHAT WITH HER!\n");
    }
    else
    {
        printf("IGNORE HIM!\n");
    }

    return 0;
}