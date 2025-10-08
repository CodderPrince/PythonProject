#include<stdio.h>
int main ()
{
    int a;
    scanf("%d",&a);
    while(a--)
    {
        int c=0;
        char x[10]="codeforces";
        char y[10];
        scanf("%s",&y);
        for(int i=0;i<10;i++)
        {
            if(y[i]!=x[i])
            {
                c++;
            }
        }
        printf("%d\n",c-1);


    }



}
