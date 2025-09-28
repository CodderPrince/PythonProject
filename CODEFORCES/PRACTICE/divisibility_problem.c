//divisibility_problem
#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int a,b,count=0;
        scanf("%d %d",&a,&b);
        int rem = a%b;
        if(rem == 0)
        {
            printf("0\n");
        }  
        else
        {
            count = b - rem;
            printf("%d\n",count);
        }    
    }

    return 0;
}