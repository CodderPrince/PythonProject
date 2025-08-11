#include<stdio.h>
int main()//main spelling important
{
    int num,count=0;
    for(int i=1; i<=5; i++)
    {
        scanf("%d",&num);
        if(num%2==0)
        {
            count++;
        }
    }
    printf("%d valores pares\n",count);
    return 0;
}