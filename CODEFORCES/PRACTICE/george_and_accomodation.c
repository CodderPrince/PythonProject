//george_and_accomodation.c
//prince

#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int x,y,count=0,i;
    for(i=0; i<n; i++)
    {
        scanf("%d %d",&x,&y);
        if(x<y && y-x>=2)
        {
            count++;
        }
    }
    printf("%d\n",count);

    return 0;
}