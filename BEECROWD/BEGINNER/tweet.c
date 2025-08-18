#include<stdio.h>
#include<string.h>
int main()
{
    //getchar();//eta use na korle onek jaigai problem hoi but ekhane use kore proble holo
    char str[502];
    int len=0;
    gets(str);
    len= strlen(str);
    if(len<=140)
    {
        printf("TWEET\n");
    }
    else
    {
        printf("MUTE\n");
    }
    return 0;
}