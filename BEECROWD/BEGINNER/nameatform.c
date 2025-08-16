#include<stdio.h>
#include<string.h>
int main()
{
    //getchar();//eta use na korle onek jaigai problem hoi but ekhane use kore proble holo
    char str[501];
    int len=0;
    gets(str);
    len= strlen(str);
    if(len<=80)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
    return 0;
}