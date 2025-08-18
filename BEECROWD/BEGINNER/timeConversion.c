#include<stdio.h>
int main()
{
    int seconds;
    scanf("%d",&seconds);
    int hours= seconds/3600;
    seconds= seconds - (hours*3600);//purnosonkhata input second theke bad jabe
    int minutes= seconds/60;
    seconds= seconds - (minutes*60);
    printf("%d:%d:%d\n",hours,minutes,seconds);
    return 0;
}